module.exports = grammar({
    name: 'XMI',

    rules: {
        source_file: $ => repeat($._section),

        end_token: $ => token(prec(2, /\$[eE][nN][dD]/)),

        _section: $ => choice(
            $.ctrl_section,
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
    }
});
