module.exports = grammar({
  name: "cpp2",
  rules: {
    source_file: ($) => repeat(choice($.declaration)),

    function_type: ($) => seq($.parameter_declaration_list),

    parameter_declaration_list: ($) =>
      seq("(", optional($.parameter_declaration_seq), ")"),
    parameter_declaration_seq: ($) =>
      seq($.this_specifier, optional(seq(",", $.parameter_declaration_seq))),

    direction: ($) => choice("in", "copy", "inout", "out", "move", "forward"),
    this_specifier: ($) =>
      seq(
        choice("implicit", "virtual", "override", "final"),
        optional($.direction),
        "this",
      ),

    declaration: ($) =>
      seq($.identifier, ":", $.function_type, "=", $.statement),

    statement: ($) => seq("{}"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
