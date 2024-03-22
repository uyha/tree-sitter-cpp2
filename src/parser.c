#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOT_DOT_DOT = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_public = 4,
  anon_sym_protected = 5,
  anon_sym_private = 6,
  anon_sym_EQ = 7,
  anon_sym_final = 8,
  anon_sym_type = 9,
  anon_sym_COLON = 10,
  anon_sym_namespace = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_AT = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_COMMA = 18,
  anon_sym_implicit = 19,
  anon_sym_virtual = 20,
  anon_sym_override = 21,
  anon_sym_this = 22,
  anon_sym_in = 23,
  anon_sym_copy = 24,
  anon_sym_inout = 25,
  anon_sym_out = 26,
  anon_sym_move = 27,
  anon_sym_forward = 28,
  sym_identifier = 29,
  anon_sym_const = 30,
  anon_sym_STAR = 31,
  anon_sym_COLON_COLON = 32,
  anon_sym_DOT = 33,
  anon_sym_requires = 34,
  sym_binary_expression = 35,
  sym_translation_unit = 36,
  sym_declaration = 37,
  sym_statement = 38,
  sym_compound_statement = 39,
  sym_access_specifier = 40,
  sym__type_declaration = 41,
  sym__unamed_declaration = 42,
  sym_alias = 43,
  sym_meta_functions = 44,
  sym_template_parameters = 45,
  sym_function_type = 46,
  sym_parameter_list = 47,
  sym__parameters = 48,
  sym__parameter = 49,
  sym_this_specifier = 50,
  sym_parameter_this = 51,
  sym_parameter = 52,
  sym_direction = 53,
  sym_type_id = 54,
  sym_type_qualifier = 55,
  sym_unqualified_id = 56,
  sym_qualified_id = 57,
  sym_nested_namespace_specifier = 58,
  sym_member_name_specifier = 59,
  sym_requires_clause = 60,
  sym_expression = 61,
  sym_id_expression = 62,
  aux_sym_translation_unit_repeat1 = 63,
  aux_sym_compound_statement_repeat1 = 64,
  aux_sym_meta_functions_repeat1 = 65,
  aux_sym__parameters_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_EQ] = "=",
  [anon_sym_final] = "final",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_namespace] = "namespace",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_AT] = "@",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_implicit] = "implicit",
  [anon_sym_virtual] = "virtual",
  [anon_sym_override] = "override",
  [anon_sym_this] = "this",
  [anon_sym_in] = "in",
  [anon_sym_copy] = "copy",
  [anon_sym_inout] = "inout",
  [anon_sym_out] = "out",
  [anon_sym_move] = "move",
  [anon_sym_forward] = "forward",
  [sym_identifier] = "identifier",
  [anon_sym_const] = "const",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym_requires] = "requires",
  [sym_binary_expression] = "binary_expression",
  [sym_translation_unit] = "translation_unit",
  [sym_declaration] = "declaration",
  [sym_statement] = "statement",
  [sym_compound_statement] = "compound_statement",
  [sym_access_specifier] = "access_specifier",
  [sym__type_declaration] = "_type_declaration",
  [sym__unamed_declaration] = "_unamed_declaration",
  [sym_alias] = "alias",
  [sym_meta_functions] = "meta_functions",
  [sym_template_parameters] = "template_parameters",
  [sym_function_type] = "function_type",
  [sym_parameter_list] = "parameter_list",
  [sym__parameters] = "_parameters",
  [sym__parameter] = "_parameter",
  [sym_this_specifier] = "this_specifier",
  [sym_parameter_this] = "parameter_this",
  [sym_parameter] = "parameter",
  [sym_direction] = "direction",
  [sym_type_id] = "type_id",
  [sym_type_qualifier] = "type_qualifier",
  [sym_unqualified_id] = "unqualified_id",
  [sym_qualified_id] = "qualified_id",
  [sym_nested_namespace_specifier] = "nested_namespace_specifier",
  [sym_member_name_specifier] = "member_name_specifier",
  [sym_requires_clause] = "requires_clause",
  [sym_expression] = "expression",
  [sym_id_expression] = "id_expression",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_meta_functions_repeat1] = "meta_functions_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_forward] = anon_sym_forward,
  [sym_identifier] = sym_identifier,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_requires] = anon_sym_requires,
  [sym_binary_expression] = sym_binary_expression,
  [sym_translation_unit] = sym_translation_unit,
  [sym_declaration] = sym_declaration,
  [sym_statement] = sym_statement,
  [sym_compound_statement] = sym_compound_statement,
  [sym_access_specifier] = sym_access_specifier,
  [sym__type_declaration] = sym__type_declaration,
  [sym__unamed_declaration] = sym__unamed_declaration,
  [sym_alias] = sym_alias,
  [sym_meta_functions] = sym_meta_functions,
  [sym_template_parameters] = sym_template_parameters,
  [sym_function_type] = sym_function_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameters] = sym__parameters,
  [sym__parameter] = sym__parameter,
  [sym_this_specifier] = sym_this_specifier,
  [sym_parameter_this] = sym_parameter_this,
  [sym_parameter] = sym_parameter,
  [sym_direction] = sym_direction,
  [sym_type_id] = sym_type_id,
  [sym_type_qualifier] = sym_type_qualifier,
  [sym_unqualified_id] = sym_unqualified_id,
  [sym_qualified_id] = sym_qualified_id,
  [sym_nested_namespace_specifier] = sym_nested_namespace_specifier,
  [sym_member_name_specifier] = sym_member_name_specifier,
  [sym_requires_clause] = sym_requires_clause,
  [sym_expression] = sym_expression,
  [sym_id_expression] = sym_id_expression,
  [aux_sym_translation_unit_repeat1] = aux_sym_translation_unit_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_meta_functions_repeat1] = aux_sym_meta_functions_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_access_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__unamed_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_template_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_this_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_this] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_type_id] = {
    .visible = true,
    .named = true,
  },
  [sym_type_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_id] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_id] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_namespace_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_member_name_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_requires_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_id_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 25,
  [26] = 18,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 23,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 44,
  [47] = 47,
  [48] = 41,
  [49] = 49,
  [50] = 49,
  [51] = 22,
  [52] = 40,
  [53] = 42,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 33,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 38,
  [80] = 76,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 88,
  [89] = 86,
  [90] = 90,
  [91] = 91,
  [92] = 35,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 91,
  [100] = 93,
  [101] = 37,
  [102] = 34,
  [103] = 103,
  [104] = 94,
  [105] = 97,
  [106] = 106,
  [107] = 25,
  [108] = 108,
  [109] = 109,
  [110] = 20,
  [111] = 111,
  [112] = 112,
  [113] = 109,
  [114] = 111,
  [115] = 112,
  [116] = 108,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 127,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 134,
  [142] = 124,
  [143] = 143,
  [144] = 126,
  [145] = 139,
  [146] = 146,
  [147] = 143,
  [148] = 148,
  [149] = 132,
  [150] = 118,
  [151] = 131,
  [152] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 't') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 't') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(166);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 39:
      if (eof) ADVANCE(41);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(166);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_copy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_move);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_forward);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_requires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_binary_expression);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 171},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_unit] = STATE(138),
    [sym_declaration] = STATE(63),
    [sym_access_specifier] = STATE(137),
    [aux_sym_translation_unit_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(9), 1,
      anon_sym_EQ,
    ACTIONS(11), 1,
      anon_sym_final,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_namespace,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    STATE(12), 1,
      sym_meta_functions,
    STATE(13), 1,
      sym_template_parameters,
    STATE(24), 1,
      sym_function_type,
    STATE(29), 1,
      aux_sym_meta_functions_repeat1,
    STATE(65), 1,
      sym__type_declaration,
    STATE(77), 1,
      sym_parameter_list,
    STATE(92), 1,
      sym_type_id,
    STATE(123), 1,
      sym_type_qualifier,
    STATE(141), 1,
      sym_requires_clause,
  [61] = 20,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(31), 1,
      anon_sym_EQ,
    ACTIONS(33), 1,
      anon_sym_final,
    ACTIONS(35), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      anon_sym_namespace,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(11), 1,
      sym_meta_functions,
    STATE(16), 1,
      sym_template_parameters,
    STATE(17), 1,
      sym_function_type,
    STATE(29), 1,
      aux_sym_meta_functions_repeat1,
    STATE(35), 1,
      sym_type_id,
    STATE(65), 1,
      sym__type_declaration,
    STATE(77), 1,
      sym_parameter_list,
    STATE(120), 1,
      sym_type_qualifier,
    STATE(134), 1,
      sym_requires_clause,
  [122] = 20,
    ACTIONS(9), 1,
      anon_sym_EQ,
    ACTIONS(11), 1,
      anon_sym_final,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(41), 1,
      anon_sym_namespace,
    STATE(12), 1,
      sym_meta_functions,
    STATE(13), 1,
      sym_template_parameters,
    STATE(24), 1,
      sym_function_type,
    STATE(29), 1,
      aux_sym_meta_functions_repeat1,
    STATE(65), 1,
      sym__type_declaration,
    STATE(77), 1,
      sym_parameter_list,
    STATE(92), 1,
      sym_type_id,
    STATE(123), 1,
      sym_type_qualifier,
    STATE(141), 1,
      sym_requires_clause,
  [183] = 20,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(31), 1,
      anon_sym_EQ,
    ACTIONS(33), 1,
      anon_sym_final,
    ACTIONS(35), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_namespace,
    STATE(11), 1,
      sym_meta_functions,
    STATE(16), 1,
      sym_template_parameters,
    STATE(17), 1,
      sym_function_type,
    STATE(29), 1,
      aux_sym_meta_functions_repeat1,
    STATE(35), 1,
      sym_type_id,
    STATE(65), 1,
      sym__type_declaration,
    STATE(77), 1,
      sym_parameter_list,
    STATE(120), 1,
      sym_type_qualifier,
    STATE(134), 1,
      sym_requires_clause,
  [244] = 8,
    ACTIONS(49), 1,
      anon_sym_this,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(62), 1,
      sym_this_specifier,
    STATE(148), 1,
      sym_direction,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
    STATE(96), 3,
      sym__parameter,
      sym_parameter_this,
      sym_parameter,
    ACTIONS(45), 4,
      anon_sym_final,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
    ACTIONS(51), 6,
      anon_sym_in,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [280] = 8,
    ACTIONS(49), 1,
      anon_sym_this,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(62), 1,
      sym_this_specifier,
    STATE(148), 1,
      sym_direction,
    ACTIONS(55), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
    STATE(96), 3,
      sym__parameter,
      sym_parameter_this,
      sym_parameter,
    ACTIONS(45), 4,
      anon_sym_final,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
    ACTIONS(51), 6,
      anon_sym_in,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [316] = 9,
    ACTIONS(49), 1,
      anon_sym_this,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_this_specifier,
    STATE(122), 1,
      sym__parameters,
    STATE(148), 1,
      sym_direction,
    STATE(90), 3,
      sym__parameter,
      sym_parameter_this,
      sym_parameter,
    ACTIONS(45), 4,
      anon_sym_final,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
    ACTIONS(51), 6,
      anon_sym_in,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [354] = 8,
    ACTIONS(49), 1,
      anon_sym_this,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(62), 1,
      sym_this_specifier,
    STATE(146), 1,
      sym__parameters,
    STATE(148), 1,
      sym_direction,
    STATE(90), 3,
      sym__parameter,
      sym_parameter_this,
      sym_parameter,
    ACTIONS(45), 4,
      anon_sym_final,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
    ACTIONS(51), 6,
      anon_sym_in,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [389] = 7,
    ACTIONS(49), 1,
      anon_sym_this,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(62), 1,
      sym_this_specifier,
    STATE(148), 1,
      sym_direction,
    STATE(96), 3,
      sym__parameter,
      sym_parameter_this,
      sym_parameter,
    ACTIONS(45), 4,
      anon_sym_final,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
    ACTIONS(51), 6,
      anon_sym_in,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [421] = 15,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(61), 1,
      anon_sym_final,
    ACTIONS(63), 1,
      anon_sym_type,
    STATE(14), 1,
      sym_template_parameters,
    STATE(26), 1,
      sym_function_type,
    STATE(37), 1,
      sym_type_id,
    STATE(77), 1,
      sym_parameter_list,
    STATE(120), 1,
      sym_type_qualifier,
    STATE(126), 1,
      sym_requires_clause,
  [467] = 15,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_final,
    ACTIONS(69), 1,
      anon_sym_type,
    STATE(15), 1,
      sym_template_parameters,
    STATE(18), 1,
      sym_function_type,
    STATE(77), 1,
      sym_parameter_list,
    STATE(101), 1,
      sym_type_id,
    STATE(123), 1,
      sym_type_qualifier,
    STATE(144), 1,
      sym_requires_clause,
  [513] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_final,
    ACTIONS(69), 1,
      anon_sym_type,
    STATE(18), 1,
      sym_function_type,
    STATE(77), 1,
      sym_parameter_list,
    STATE(101), 1,
      sym_type_id,
    STATE(123), 1,
      sym_type_qualifier,
    STATE(144), 1,
      sym_requires_clause,
  [553] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_final,
    ACTIONS(75), 1,
      anon_sym_type,
    STATE(19), 1,
      sym_function_type,
    STATE(34), 1,
      sym_type_id,
    STATE(77), 1,
      sym_parameter_list,
    STATE(120), 1,
      sym_type_qualifier,
    STATE(139), 1,
      sym_requires_clause,
  [593] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(79), 1,
      anon_sym_final,
    ACTIONS(81), 1,
      anon_sym_type,
    STATE(21), 1,
      sym_function_type,
    STATE(77), 1,
      sym_parameter_list,
    STATE(102), 1,
      sym_type_id,
    STATE(123), 1,
      sym_type_qualifier,
    STATE(145), 1,
      sym_requires_clause,
  [633] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(61), 1,
      anon_sym_final,
    ACTIONS(63), 1,
      anon_sym_type,
    STATE(26), 1,
      sym_function_type,
    STATE(37), 1,
      sym_type_id,
    STATE(77), 1,
      sym_parameter_list,
    STATE(120), 1,
      sym_type_qualifier,
    STATE(126), 1,
      sym_requires_clause,
  [673] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_statement,
    STATE(126), 1,
      sym_requires_clause,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [704] = 9,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(71), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(145), 1,
      sym_requires_clause,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [735] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(143), 1,
      sym_requires_clause,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [766] = 2,
    ACTIONS(91), 5,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      anon_sym_requires,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [783] = 9,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(147), 1,
      sym_requires_clause,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [814] = 4,
    ACTIONS(99), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(95), 5,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(97), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [835] = 2,
    ACTIONS(105), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
  [852] = 9,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(64), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(144), 1,
      sym_requires_clause,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [883] = 2,
    ACTIONS(109), 5,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      anon_sym_requires,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [900] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(139), 1,
      sym_requires_clause,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [931] = 9,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    ACTIONS(117), 1,
      sym_binary_expression,
    STATE(22), 1,
      sym_unqualified_id,
    STATE(33), 1,
      sym_qualified_id,
    STATE(119), 1,
      sym_expression,
    STATE(111), 2,
      sym_nested_namespace_specifier,
      sym_member_name_specifier,
    STATE(121), 2,
      sym__unamed_declaration,
      sym_id_expression,
  [961] = 7,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(137), 1,
      sym_access_specifier,
    STATE(28), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(124), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [987] = 4,
    ACTIONS(17), 1,
      anon_sym_AT,
    STATE(31), 1,
      aux_sym_meta_functions_repeat1,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(132), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [1007] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_access_specifier,
    STATE(32), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1033] = 4,
    ACTIONS(140), 1,
      anon_sym_AT,
    STATE(31), 1,
      aux_sym_meta_functions_repeat1,
    ACTIONS(136), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(138), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [1053] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_access_specifier,
    STATE(28), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1079] = 2,
    ACTIONS(95), 5,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(97), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [1094] = 5,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(87), 1,
      anon_sym_EQ,
    STATE(143), 1,
      sym_requires_clause,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(147), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1115] = 5,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(59), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym_requires_clause,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1136] = 2,
    ACTIONS(136), 5,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(138), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [1151] = 5,
    ACTIONS(29), 1,
      anon_sym_requires,
    ACTIONS(71), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_requires_clause,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(155), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1172] = 2,
    ACTIONS(157), 5,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(159), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [1187] = 2,
    ACTIONS(105), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
  [1201] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1223] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1245] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(64), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1267] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1289] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(71), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1311] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(59), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1333] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1355] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1377] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(72), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1399] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(56), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1421] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1443] = 4,
    ACTIONS(99), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(97), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1461] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(60), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1483] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_statement,
    STATE(137), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1505] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(58), 1,
      sym_statement,
    STATE(127), 1,
      sym_access_specifier,
    STATE(55), 2,
      sym_declaration,
      sym_compound_statement,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1527] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(163), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1540] = 2,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(167), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1553] = 2,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(171), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1566] = 2,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(175), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1579] = 2,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(179), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1592] = 2,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(183), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1605] = 2,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_STAR,
    ACTIONS(187), 5,
      anon_sym_final,
      anon_sym_type,
      sym_identifier,
      anon_sym_const,
      anon_sym_requires,
  [1618] = 4,
    ACTIONS(51), 1,
      anon_sym_in,
    ACTIONS(189), 1,
      anon_sym_this,
    STATE(125), 1,
      sym_direction,
    ACTIONS(191), 5,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [1635] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_access_specifier,
    STATE(69), 2,
      sym_declaration,
      aux_sym_translation_unit_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1654] = 2,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(155), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1667] = 2,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(197), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1680] = 2,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(201), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1693] = 2,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(205), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1706] = 2,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(209), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1719] = 5,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(137), 1,
      sym_access_specifier,
    STATE(69), 2,
      sym_declaration,
      aux_sym_translation_unit_repeat1,
    ACTIONS(213), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1738] = 2,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(221), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1751] = 2,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(147), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1764] = 2,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(225), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1777] = 2,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(229), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1790] = 2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(97), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1802] = 6,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
      sym_unqualified_id,
    STATE(33), 1,
      sym_qualified_id,
    STATE(36), 1,
      sym_id_expression,
    STATE(111), 2,
      sym_nested_namespace_specifier,
      sym_member_name_specifier,
  [1822] = 6,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
      sym_unqualified_id,
    STATE(33), 1,
      sym_qualified_id,
    STATE(73), 1,
      sym_id_expression,
    STATE(111), 2,
      sym_nested_namespace_specifier,
      sym_member_name_specifier,
  [1842] = 2,
    ACTIONS(235), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
    ACTIONS(237), 5,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      anon_sym_requires,
  [1854] = 2,
    ACTIONS(239), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
    ACTIONS(241), 5,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      anon_sym_requires,
  [1866] = 2,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(159), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
  [1878] = 6,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(51), 1,
      sym_unqualified_id,
    STATE(73), 1,
      sym_id_expression,
    STATE(74), 1,
      sym_qualified_id,
    STATE(114), 2,
      sym_nested_namespace_specifier,
      sym_member_name_specifier,
  [1898] = 2,
    ACTIONS(247), 1,
      anon_sym_in,
    ACTIONS(245), 6,
      anon_sym_this,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [1910] = 2,
    ACTIONS(249), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
    ACTIONS(251), 5,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      anon_sym_requires,
  [1922] = 5,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(95), 1,
      sym_type_id,
    STATE(120), 1,
      sym_type_qualifier,
  [1938] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(253), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1949] = 3,
    ACTIONS(258), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(260), 1,
      anon_sym_COLON,
    STATE(70), 2,
      sym__unamed_declaration,
      sym_alias,
  [1960] = 3,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(66), 2,
      sym__unamed_declaration,
      sym_alias,
  [1971] = 3,
    ACTIONS(264), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(70), 2,
      sym__unamed_declaration,
      sym_alias,
  [1982] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1993] = 3,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(66), 2,
      sym__unamed_declaration,
      sym_alias,
  [2004] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(272), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [2015] = 3,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(126), 1,
      sym_requires_clause,
  [2025] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(144), 1,
      sym_requires_clause,
  [2035] = 3,
    ACTIONS(276), 1,
      anon_sym_requires,
    ACTIONS(278), 1,
      anon_sym_EQ,
    STATE(149), 1,
      sym_requires_clause,
  [2045] = 3,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(147), 1,
      sym_requires_clause,
  [2055] = 1,
    ACTIONS(280), 3,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2061] = 1,
    ACTIONS(253), 3,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2067] = 3,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(145), 1,
      sym_requires_clause,
  [2077] = 1,
    ACTIONS(282), 3,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2083] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(144), 1,
      sym_requires_clause,
  [2093] = 3,
    ACTIONS(276), 1,
      anon_sym_requires,
    ACTIONS(284), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym_requires_clause,
  [2103] = 3,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(145), 1,
      sym_requires_clause,
  [2113] = 3,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(147), 1,
      sym_requires_clause,
  [2123] = 1,
    ACTIONS(286), 3,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2129] = 3,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(143), 1,
      sym_requires_clause,
  [2139] = 3,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_requires,
    STATE(139), 1,
      sym_requires_clause,
  [2149] = 1,
    ACTIONS(288), 3,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2155] = 1,
    ACTIONS(107), 2,
      anon_sym_EQ,
      anon_sym_requires,
  [2160] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym__unamed_declaration,
  [2167] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym__unamed_declaration,
  [2174] = 1,
    ACTIONS(89), 2,
      anon_sym_EQ,
      anon_sym_requires,
  [2179] = 2,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(38), 1,
      sym_unqualified_id,
  [2186] = 2,
    ACTIONS(292), 1,
      anon_sym_EQ,
    ACTIONS(294), 1,
      anon_sym_EQ_EQ,
  [2193] = 2,
    ACTIONS(296), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym__unamed_declaration,
  [2200] = 2,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(79), 1,
      sym_unqualified_id,
  [2207] = 2,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(300), 1,
      anon_sym_EQ_EQ,
  [2214] = 2,
    ACTIONS(296), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym__unamed_declaration,
  [2221] = 1,
    ACTIONS(302), 1,
      anon_sym_type,
  [2225] = 1,
    ACTIONS(304), 1,
      anon_sym_type,
  [2229] = 1,
    ACTIONS(306), 1,
      anon_sym_EQ,
  [2233] = 1,
    ACTIONS(308), 1,
      sym_identifier,
  [2237] = 1,
    ACTIONS(310), 1,
      anon_sym_EQ,
  [2241] = 1,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [2245] = 1,
    ACTIONS(314), 1,
      sym_identifier,
  [2249] = 1,
    ACTIONS(316), 1,
      anon_sym_EQ,
  [2253] = 1,
    ACTIONS(318), 1,
      anon_sym_this,
  [2257] = 1,
    ACTIONS(71), 1,
      anon_sym_EQ,
  [2261] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [2265] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [2269] = 1,
    ACTIONS(324), 1,
      sym_identifier,
  [2273] = 1,
    ACTIONS(326), 1,
      sym_identifier,
  [2277] = 1,
    ACTIONS(328), 1,
      anon_sym_type,
  [2281] = 1,
    ACTIONS(330), 1,
      anon_sym_EQ,
  [2285] = 1,
    ACTIONS(332), 1,
      sym_identifier,
  [2289] = 1,
    ACTIONS(59), 1,
      anon_sym_EQ,
  [2293] = 1,
    ACTIONS(334), 1,
      sym_identifier,
  [2297] = 1,
    ACTIONS(336), 1,
      anon_sym_this,
  [2301] = 1,
    ACTIONS(338), 1,
      sym_identifier,
  [2305] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [2309] = 1,
    ACTIONS(87), 1,
      anon_sym_EQ,
  [2313] = 1,
    ACTIONS(342), 1,
      anon_sym_COLON,
  [2317] = 1,
    ACTIONS(65), 1,
      anon_sym_EQ,
  [2321] = 1,
    ACTIONS(344), 1,
      anon_sym_EQ,
  [2325] = 1,
    ACTIONS(284), 1,
      anon_sym_EQ,
  [2329] = 1,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [2333] = 1,
    ACTIONS(93), 1,
      anon_sym_EQ,
  [2337] = 1,
    ACTIONS(346), 1,
      anon_sym_GT,
  [2341] = 1,
    ACTIONS(278), 1,
      anon_sym_EQ,
  [2345] = 1,
    ACTIONS(189), 1,
      anon_sym_this,
  [2349] = 1,
    ACTIONS(348), 1,
      anon_sym_EQ,
  [2353] = 1,
    ACTIONS(350), 1,
      anon_sym_type,
  [2357] = 1,
    ACTIONS(352), 1,
      anon_sym_type,
  [2361] = 1,
    ACTIONS(354), 1,
      anon_sym_type,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 280,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 354,
  [SMALL_STATE(10)] = 389,
  [SMALL_STATE(11)] = 421,
  [SMALL_STATE(12)] = 467,
  [SMALL_STATE(13)] = 513,
  [SMALL_STATE(14)] = 553,
  [SMALL_STATE(15)] = 593,
  [SMALL_STATE(16)] = 633,
  [SMALL_STATE(17)] = 673,
  [SMALL_STATE(18)] = 704,
  [SMALL_STATE(19)] = 735,
  [SMALL_STATE(20)] = 766,
  [SMALL_STATE(21)] = 783,
  [SMALL_STATE(22)] = 814,
  [SMALL_STATE(23)] = 835,
  [SMALL_STATE(24)] = 852,
  [SMALL_STATE(25)] = 883,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 931,
  [SMALL_STATE(28)] = 961,
  [SMALL_STATE(29)] = 987,
  [SMALL_STATE(30)] = 1007,
  [SMALL_STATE(31)] = 1033,
  [SMALL_STATE(32)] = 1053,
  [SMALL_STATE(33)] = 1079,
  [SMALL_STATE(34)] = 1094,
  [SMALL_STATE(35)] = 1115,
  [SMALL_STATE(36)] = 1136,
  [SMALL_STATE(37)] = 1151,
  [SMALL_STATE(38)] = 1172,
  [SMALL_STATE(39)] = 1187,
  [SMALL_STATE(40)] = 1201,
  [SMALL_STATE(41)] = 1223,
  [SMALL_STATE(42)] = 1245,
  [SMALL_STATE(43)] = 1267,
  [SMALL_STATE(44)] = 1289,
  [SMALL_STATE(45)] = 1311,
  [SMALL_STATE(46)] = 1333,
  [SMALL_STATE(47)] = 1355,
  [SMALL_STATE(48)] = 1377,
  [SMALL_STATE(49)] = 1399,
  [SMALL_STATE(50)] = 1421,
  [SMALL_STATE(51)] = 1443,
  [SMALL_STATE(52)] = 1461,
  [SMALL_STATE(53)] = 1483,
  [SMALL_STATE(54)] = 1505,
  [SMALL_STATE(55)] = 1527,
  [SMALL_STATE(56)] = 1540,
  [SMALL_STATE(57)] = 1553,
  [SMALL_STATE(58)] = 1566,
  [SMALL_STATE(59)] = 1579,
  [SMALL_STATE(60)] = 1592,
  [SMALL_STATE(61)] = 1605,
  [SMALL_STATE(62)] = 1618,
  [SMALL_STATE(63)] = 1635,
  [SMALL_STATE(64)] = 1654,
  [SMALL_STATE(65)] = 1667,
  [SMALL_STATE(66)] = 1680,
  [SMALL_STATE(67)] = 1693,
  [SMALL_STATE(68)] = 1706,
  [SMALL_STATE(69)] = 1719,
  [SMALL_STATE(70)] = 1738,
  [SMALL_STATE(71)] = 1751,
  [SMALL_STATE(72)] = 1764,
  [SMALL_STATE(73)] = 1777,
  [SMALL_STATE(74)] = 1790,
  [SMALL_STATE(75)] = 1802,
  [SMALL_STATE(76)] = 1822,
  [SMALL_STATE(77)] = 1842,
  [SMALL_STATE(78)] = 1854,
  [SMALL_STATE(79)] = 1866,
  [SMALL_STATE(80)] = 1878,
  [SMALL_STATE(81)] = 1898,
  [SMALL_STATE(82)] = 1910,
  [SMALL_STATE(83)] = 1922,
  [SMALL_STATE(84)] = 1938,
  [SMALL_STATE(85)] = 1949,
  [SMALL_STATE(86)] = 1960,
  [SMALL_STATE(87)] = 1971,
  [SMALL_STATE(88)] = 1982,
  [SMALL_STATE(89)] = 1993,
  [SMALL_STATE(90)] = 2004,
  [SMALL_STATE(91)] = 2015,
  [SMALL_STATE(92)] = 2025,
  [SMALL_STATE(93)] = 2035,
  [SMALL_STATE(94)] = 2045,
  [SMALL_STATE(95)] = 2055,
  [SMALL_STATE(96)] = 2061,
  [SMALL_STATE(97)] = 2067,
  [SMALL_STATE(98)] = 2077,
  [SMALL_STATE(99)] = 2083,
  [SMALL_STATE(100)] = 2093,
  [SMALL_STATE(101)] = 2103,
  [SMALL_STATE(102)] = 2113,
  [SMALL_STATE(103)] = 2123,
  [SMALL_STATE(104)] = 2129,
  [SMALL_STATE(105)] = 2139,
  [SMALL_STATE(106)] = 2149,
  [SMALL_STATE(107)] = 2155,
  [SMALL_STATE(108)] = 2160,
  [SMALL_STATE(109)] = 2167,
  [SMALL_STATE(110)] = 2174,
  [SMALL_STATE(111)] = 2179,
  [SMALL_STATE(112)] = 2186,
  [SMALL_STATE(113)] = 2193,
  [SMALL_STATE(114)] = 2200,
  [SMALL_STATE(115)] = 2207,
  [SMALL_STATE(116)] = 2214,
  [SMALL_STATE(117)] = 2221,
  [SMALL_STATE(118)] = 2225,
  [SMALL_STATE(119)] = 2229,
  [SMALL_STATE(120)] = 2233,
  [SMALL_STATE(121)] = 2237,
  [SMALL_STATE(122)] = 2241,
  [SMALL_STATE(123)] = 2245,
  [SMALL_STATE(124)] = 2249,
  [SMALL_STATE(125)] = 2253,
  [SMALL_STATE(126)] = 2257,
  [SMALL_STATE(127)] = 2261,
  [SMALL_STATE(128)] = 2265,
  [SMALL_STATE(129)] = 2269,
  [SMALL_STATE(130)] = 2273,
  [SMALL_STATE(131)] = 2277,
  [SMALL_STATE(132)] = 2281,
  [SMALL_STATE(133)] = 2285,
  [SMALL_STATE(134)] = 2289,
  [SMALL_STATE(135)] = 2293,
  [SMALL_STATE(136)] = 2297,
  [SMALL_STATE(137)] = 2301,
  [SMALL_STATE(138)] = 2305,
  [SMALL_STATE(139)] = 2309,
  [SMALL_STATE(140)] = 2313,
  [SMALL_STATE(141)] = 2317,
  [SMALL_STATE(142)] = 2321,
  [SMALL_STATE(143)] = 2325,
  [SMALL_STATE(144)] = 2329,
  [SMALL_STATE(145)] = 2333,
  [SMALL_STATE(146)] = 2337,
  [SMALL_STATE(147)] = 2341,
  [SMALL_STATE(148)] = 2345,
  [SMALL_STATE(149)] = 2349,
  [SMALL_STATE(150)] = 2353,
  [SMALL_STATE(151)] = 2357,
  [SMALL_STATE(152)] = 2361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_id, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_id, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_id, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_id, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(30),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(135),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(85),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_functions, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_functions, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_functions_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_functions_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_functions_repeat1, 2), SHIFT_REPEAT(75),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_id, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 7),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_declaration, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_declaration, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameters, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_parameters, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unamed_declaration, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unamed_declaration, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(135),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unamed_declaration, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unamed_declaration, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this_specifier, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_this_specifier, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(10),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_this, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_this, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_this, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_clause, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_name_specifier, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_qualifier, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_namespace_specifier, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_namespace_specifier, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_specifier, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cpp2() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
