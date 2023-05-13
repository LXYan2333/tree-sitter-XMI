module.exports = grammar({
    name: 'XMI',

    extras: $ => [$.comment, $._line_ending, $._space],

    rules: {
        source_file: $ => repeat($._section),

        end_token: $ => token(prec(2, /\$[eE][nN][dD]/)),
        _line_ending: $ => /\r?\n/,
        _space: $ => /[ ]/,

        int: $ => /-?[0-9]+/,
        // 语法糖，对应 1:2
        int_colon: $ => seq(
            field('start', $.int),
            token.immediate(':'),
            field('end', $.int)
        ),
        // 语法糖，对应 1*2
        int_asterisk: $ => seq(
            field('num', $.int),
            token.immediate('*'),
            field('multiplier', $.int)
        ),
        _abstract_int: $ => choice(
            $.int, $.int_asterisk, $.int_colon
        ),

        // 一系列的整数，由空格隔开。
        // 至少有一个整数
        _ints_seperate1: $ => seq(
            $._abstract_int,
            optional(repeat1(seq(
                $._space,
                $._abstract_int
            )))
        ),
        // 至少有两个整数
        _ints_seperate2: $ => seq(
            $._abstract_int,
            repeat1(seq(
                $._space,
                $._abstract_int
            ))
        ),

        float: $ => /-?[0-9]+\.[0-9]+/,

        _section: $ => choice(
            $.ctrl_section,
            $.bfi_section,
            // TODO
            // add other sections
        ),

        // $ctrl
        ctrl_section: $ => seq(
            field('start_token', $.ctrl_start_token),
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

        // comment
        comment: $ => /[#;].*/,
    }
});
