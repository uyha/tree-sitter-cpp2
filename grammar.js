access_specifiers = ["public", "protected", "private"];
// prettier-ignore
integer_suffixes = [
  "u", "l", "ll", "z",
  "U", "L", "LL", "Z",

  "ul", "ull", "uz",
  "Ul", "Ull", "Uz",

  "uL", "uLL", "uZ",
  "UL", "ULL", "UZ",

  "lu", "lU",
  "llu", "llU",
  "zu", "zU",

  "Lu", "LU",
  "LLu", "LLU",
  "Zu", "ZU",
];
// prettier-ignore
binary_operators = [
  "*", "/", "%", "+", "-",
  "<<", ">>",
  "<=>", "<", ">", "<=", ">=", "==", "!=",
  "&", "^", "|", "&&", "||",
];
directions = ["in", "copy", "inout", "out", "move", "forward"];
this_specifiers = ["implicit", "virtual", "override", "final"];

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

    statement: ($) =>
      choice($.compound_statement, $.declaration, $._expression_statement),

    compound_statement: ($) => seq("{", repeat($.statement), "}"),

    access_specifier: ($) => choice(...access_specifiers),
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

    this_specifier: ($) => choice(...this_specifiers),
    parameter_this: ($) =>
      seq(optional($.this_specifier), optional($.direction), "this"),

    parameter: ($) => seq($.identifier, ":", $.type_id),

    direction: ($) => choice(...directions),

    identifier: ($) =>
      prec.right(
        seq($._identifier_start, repeat(choice($._identifier_start, $._digit))),
      ),
    _identifier_start: ($) => /[a-zA-Z_]/,
    _digit: ($) => /[0-9]/,

    _literal: ($) => choice($.integer_literal),
    integer_literal: ($) =>
      seq(
        choice(
          $._binary_literal,
          $._octal_literal,
          $._decimal_literal,
          $._hexadecimal_literal,
        ),
        optional($.integer_suffix),
      ),
    _binary_literal: ($) => /0[bB][01]+/,
    _octal_literal: ($) => /0[0-7]*/,
    _decimal_literal: ($) => /[1-9][0-9]*/,
    _hexadecimal_literal: ($) => /0[xX][0-9a-fA-F]+/,
    integer_suffix: ($) => choice(...integer_suffixes.map(token.immediate)),

    type_id: ($) => seq(optional($.type_qualifier), choice($.identifier)),
    type_qualifier: ($) => choice("const", "*"),

    unqualified_id: ($) => prec.left(choice($.identifier)),
    qualified_id: ($) =>
      seq(
        choice($.nested_namespace_specifier, $.member_name_specifier),
        $.unqualified_id,
      ),
    nested_namespace_specifier: ($) =>
      choice("::", seq($.unqualified_id, "::")),
    member_name_specifier: ($) => seq($.unqualified_id, "."),

    requires_clause: ($) => seq("requires", $._expression),

    _expression_statement: ($) => prec.right(seq($._expression, optional(";"))),
    _expression: ($) =>
      choice(
        $.id_expression,
        $._literal,
        $._unamed_declaration,
        $.binary_expression,
      ),

    id_expression: ($) => prec.left(choice($.qualified_id, $.unqualified_id)),
    binary_expression: ($) =>
      prec.left(seq($._expression, $.binary_operator, $._expression)),

    binary_operator: ($) => choice(...binary_operators),
  },
});
