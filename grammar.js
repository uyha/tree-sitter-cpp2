module.exports = grammar({
  name: "cpp2",
  rules: {
    translation_unit: ($) => repeat($.declaration),

    declaration: ($) =>
      seq(
        optional($.access_specifier),
        $.identifier,
        choice(seq(optional("..."), $._unamed_declaration), $.alias),
      ),

    statement: ($) => choice($.compound_statement, $.declaration),

    compound_statement: ($) => seq("{", repeat($.statement), "}"),

    access_specifier: ($) => choice("public", "protected", "private"),
    _type_declaration: ($) =>
      seq(
        optional($.meta_functions),
        optional($.template_parameters),
        prec.right(
          choice(
            seq($.function_type, optional($.requires_clause), "=", $.statement),
            seq($.function_type, $.statement),
            seq(
              optional($.type_id),
              optional($.requires_clause),
              "=",
              $.statement,
            ),
            seq($.type_id),
            seq(
              optional("final"),
              "type",
              optional($.requires_clause),
              "=",
              $.statement,
            ),
          ),
        ),
      ),
    _unamed_declaration: ($) =>
      seq(":", choice($._type_declaration, seq("namespace", "=", $.statement))),
    alias: ($) => seq(":", choice(seq("namespace", "==", $.id_expression))),
    meta_functions: ($) => repeat1(seq("@", $.id_expression)),
    template_parameters: ($) => seq("<", $._parameters, ">"),

    function_type: ($) => seq($.parameter_list),

    parameter_list: ($) => seq("(", optional($._parameters), ")"),
    _parameters: ($) =>
      seq($._parameter, repeat(seq(",", $._parameter)), optional(",")),
    _parameter: ($) => choice($.parameter_this, $.parameter),

    this_specifier: ($) => choice("implicit", "virtual", "override", "final"),
    parameter_this: ($) =>
      seq(optional($.this_specifier), optional($.direction), "this"),

    parameter: ($) => seq($.identifier, ":", $.type_id),

    direction: ($) => choice("in", "copy", "inout", "out", "move", "forward"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    type_id: ($) => seq(optional($.type_qualifier), choice($.identifier)),
    type_qualifier: ($) => choice("const", "*"),

    unqualified_id: ($) => choice($.identifier),
    qualified_id: ($) =>
      seq(
        choice($.nested_namespace_specifier, $.member_name_specifier),
        $.unqualified_id,
      ),
    nested_namespace_specifier: ($) =>
      choice("::", seq($.unqualified_id, "::")),
    member_name_specifier: ($) => seq($.unqualified_id, "."),

    requires_clause: ($) => seq("requires", $.expression),

    expression: ($) =>
      choice($.id_expression, $._unamed_declaration, $.binary_expression),

    id_expression: ($) => choice($.qualified_id, $.unqualified_id),
    binary_expression: ($) => "",
  },
});
