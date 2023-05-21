module.exports = grammar({
    name: 'XMI',

    extras: $ => [$.comment, $._line_ending, $._space],

    rules: {
        source_file: $ => repeat($._section),

        end_token: $ => /\$[eE][nN][dD]/,
        _line_ending: $ => /[ ]*\r?\n/,
        _space: $ => ' ',

        int: $ => /-?[0-9]+/,
        // 语法糖，对应 1:2
        int_colon: $ => seq(
            field('start', $.int),
            token.immediate(':'),
            field('end', token.immediate(/-?[0-9]+/))
        ),
        // 语法糖，对应 1*2
        int_asterisk: $ => seq(
            field('num', $.int),
            token.immediate('*'),
            field('times', token.immediate(/-?[0-9]+/))
        ),
        // 语法糖，对应 1-2
        int_minor: $ =>
            seq(
                field('start', $.int),
                token.immediate('-'),
                field('end', token.immediate(/-?[0-9]+/))
            ),
        _abstract_int: $ => choice(
            $.int, $.int_asterisk, $.int_colon, $.int_minor
        ),

        // 一系列的整数，由空格隔开。
        // 至少有一个整数
        _ints_seperate1: $ => seq(
            $._abstract_int,
            repeat(seq(
                $._space,
                $._abstract_int
            ))
        ),

        float: $ => /-?[0-9]+\.[0-9]+/,

        _section: $ => choice(
            $.ctrl_section,
            $.bfi_section,
            $.str_section,
            $.frag_section,
            // TODO
            // add other sections
        ),

        // $ctrl
        ctrl_section: $ => seq(
            field('start_token', $.ctrl_start_token),
            $._line_ending,
            field('items_list', $.ctrl_items_list),
            $.end_token
        ),

        ctrl_items_list: $ => repeat1(field('item', $.ctrl_item)),

        ctrl_start_token: $ => /\$[cC][tT][rR][lL]/,

        ctrl_item: $ => seq(
            field('keyword', $.ctrl_keyword),
            optional(seq(
                token.immediate('='),
                field('param', $.ctrl_param),
                optional(repeat(seq(
                    token.immediate(','),
                    field('param', $.ctrl_param)
                )))
            ))
        ),

        ctrl_keyword: $ => /[^\s=,;#]+/,
        ctrl_param: $ => token.immediate(/[^\s=,;#]+/),

        // bfi 部分
        bfi_section: $ => seq(
            field('start_token', $.bfi_start_token),
            $.NFROZ_and_NBAS,
            $._line_ending,
            $.list_of_frozen_MOs,
            $._line_ending,
            $.list_of_basis_functions,
            $._line_ending,
            optional(
                $.functions_hybrid_list
            ),
            $.end_token
        ),

        /**
         * $BFI                     // bfi_start_token
         * 3 8                      // NFROZ_and_NBAS
         * 1 3 4                    // list_of_frozen_MOs
         * 1 1 1 1 1 1 3 3          // list_of_basis_functions
         * 1.0 1                    // functions_hybrid_list
         * 1.0 2                        //  1.0: ratio   2: orbit
         * 1.0 4                        //  0.5 12  functions_hybrid
         * 1.0 7                        //  0.5 12 0.5 14 0.5 16 altogether: basis_function_composition
         * 1.0 8
         * 1.0 11
         * 0.5 12 0.5 14 0.5 16
         * 0.5 13 0.5 15 0.5 17
         * $END
         */

        bfi_start_token: $ => /\$[bB][fF][iI]/,

        NFROZ_and_NBAS: $ => $._ints_seperate1,

        list_of_frozen_MOs: $ => $._ints_seperate1,

        list_of_basis_functions: $ => $._ints_seperate1,

        functions_hybrid_list: $ => repeat1(seq(
            $.basis_function_composition,
            $._line_ending
        )),

        basis_function_composition: $ => repeat1($._ratio_and_orbit_pair),

        functions_hybrid: $ => $._ratio_and_orbit_pair,

        _ratio_and_orbit_pair: $ => seq(field('ratio', $.float), field('orbit', $.int)),

        // str 部分
        str_section: $ => seq(
            field('start_token', $.str_start_token),
            $._line_ending,
            $.str_items_list,
            $.end_token
        ),

        str_start_token: $ => /\$[sS][tT][rR]/,

        str_items_list: $ => repeat1($.VB_structures_or_determinants),

        VB_structures_or_determinants: $ => seq(
            $._ints_seperate1,
            $._line_ending
        ),

        // frag 部分
        frag_section: $ => seq(
            field('start_token', $.frag_start_token),
            $._line_ending,
            $.number_of_fragments,
            $._line_ending,
            $.frags,
            $.end_token
        ),

        /**
         * $FRAG
         * nf (1), nf (2), . . . nf (N)                                                 //number of atoms or basis functions in the i-th fragment
         * [basis function description(1)] lf(1,1), lf(2,1), . . . lf(nf(1),1)          //frag_description
         * [spzdxxyyzzfzzzxxzyyz] lf(1,2), lf(2,2), . . . lf(nf(2),2)                   //      spzdxxyyzzfzzzxxzyyz: basis function description    pz: basis function
         * ...                                                                          //      lf(1,1), lf(2,1), . . . lf(nf(1),1): atom or basis function in the fragment.
         * [basis function description(N)] lf(1,N), lf(2,N), . . . lf(nf(N),N)
         * $END
         */

        frag_start_token: $ => /\$[fF][rR][aA][gG]/,

        number_of_fragments: $ => $._ints_seperate1,

        frags: $ => repeat1($.frag_description),

        frag_description: $ => seq(
            optional(seq(
                $.basis_function_description,
                $._space
            )),
            $.number_of_atom_or_basis_function_in_the_fragment,
            $._line_ending
        ),

        basis_function_description: $ => repeat1($._basis_function),

        _basis_function: $ => choice(
            $.s,
            $.p,
            $.d,
            $.f
        ),

        s: $ => 's',
        p: $ => seq(
            'p',
            repeat1(field('direction', /[xyz]/))
        ),
        d: $ => seq(
            'd',
            repeat1(field('direction', /[xyz]{2}/))
        ),
        f: $ => seq(
            'f',
            repeat1(field('direction', /[xyz]{3}/))
        ),

        number_of_atom_or_basis_function_in_the_fragment: $ => $._ints_seperate1,

        // comment
        comment: $ => /[ ]*[#;][^\r\n]*/,
    }
});
