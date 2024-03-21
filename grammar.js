module.exports = grammar({
  name: "cpp2",
  rules: {
    source_file: ($) => repeat(choice($.declaration)),

    function_type: ($) => seq($.parameter_list),

    parameter_list: ($) =>
      seq(
        "(",
        optional(
          seq($._parameter, repeat(seq(",", $._parameter)), optional(",")),
        ),
        ")",
      ),
    _parameter: ($) => choice($.parameter_this, $.parameter),

    this_specifier: ($) => choice("implicit", "virtual", "override", "final"),
    parameter_this: ($) =>
      seq(optional($.this_specifier), optional($.direction), "this"),

    parameter: ($) => seq($.identifier, ":", $.type_id),

    direction: ($) => choice("in", "copy", "inout", "out", "move", "forward"),

    declaration: ($) =>
      seq($.identifier, ":", $.function_type, "=", $.statement),

    statement: ($) => seq("{}"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    type_id: ($) => seq(optional($.type_qualifier), choice($.identifier)),
    type_qualifier: ($) => choice("const", "*"),

    qualified_id: ($) => "int",
  },
});
