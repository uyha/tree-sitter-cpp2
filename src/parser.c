#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_in = 4,
  anon_sym_copy = 5,
  anon_sym_inout = 6,
  anon_sym_out = 7,
  anon_sym_move = 8,
  anon_sym_forward = 9,
  anon_sym_implicit = 10,
  anon_sym_virtual = 11,
  anon_sym_override = 12,
  anon_sym_final = 13,
  anon_sym_this = 14,
  anon_sym_COLON = 15,
  anon_sym_EQ = 16,
  anon_sym_LBRACE_RBRACE = 17,
  sym_identifier = 18,
  sym_source_file = 19,
  sym_function_type = 20,
  sym_parameter_declaration_list = 21,
  sym_parameter_declaration_seq = 22,
  sym_direction = 23,
  sym_this_specifier = 24,
  sym_declaration = 25,
  sym_statement = 26,
  aux_sym_source_file_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_in] = "in",
  [anon_sym_copy] = "copy",
  [anon_sym_inout] = "inout",
  [anon_sym_out] = "out",
  [anon_sym_move] = "move",
  [anon_sym_forward] = "forward",
  [anon_sym_implicit] = "implicit",
  [anon_sym_virtual] = "virtual",
  [anon_sym_override] = "override",
  [anon_sym_final] = "final",
  [anon_sym_this] = "this",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_function_type] = "function_type",
  [sym_parameter_declaration_list] = "parameter_declaration_list",
  [sym_parameter_declaration_seq] = "parameter_declaration_seq",
  [sym_direction] = "direction",
  [sym_this_specifier] = "this_specifier",
  [sym_declaration] = "declaration",
  [sym_statement] = "statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_function_type] = sym_function_type,
  [sym_parameter_declaration_list] = sym_parameter_declaration_list,
  [sym_parameter_declaration_seq] = sym_parameter_declaration_seq,
  [sym_direction] = sym_direction,
  [sym_this_specifier] = sym_this_specifier,
  [sym_declaration] = sym_declaration,
  [sym_statement] = sym_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_this_specifier] = {
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
  [aux_sym_source_file_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(2);
      END_STATE();
    case 39:
      if (lookahead == 'v') ADVANCE(7);
      END_STATE();
    case 40:
      if (lookahead == 'w') ADVANCE(3);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_declaration] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_in,
    ACTIONS(11), 1,
      anon_sym_this,
    STATE(17), 1,
      sym_direction,
    ACTIONS(9), 5,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [17] = 4,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_this_specifier,
    STATE(14), 1,
      sym_parameter_declaration_seq,
    ACTIONS(15), 4,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_final,
  [33] = 3,
    STATE(13), 1,
      sym_this_specifier,
    STATE(23), 1,
      sym_parameter_declaration_seq,
    ACTIONS(15), 4,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_final,
  [46] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [57] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(6), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [68] = 3,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameter_declaration_list,
    STATE(21), 1,
      sym_function_type,
  [78] = 2,
    ACTIONS(26), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(10), 1,
      sym_statement,
  [85] = 1,
    ACTIONS(28), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [90] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [95] = 1,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [100] = 1,
    ACTIONS(34), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [105] = 2,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 1,
      anon_sym_COMMA,
  [112] = 1,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
  [116] = 1,
    ACTIONS(42), 1,
      anon_sym_this,
  [120] = 1,
    ACTIONS(44), 1,
      anon_sym_COLON,
  [124] = 1,
    ACTIONS(46), 1,
      anon_sym_this,
  [128] = 1,
    ACTIONS(48), 1,
      anon_sym_EQ,
  [132] = 1,
    ACTIONS(50), 1,
      anon_sym_EQ,
  [136] = 1,
    ACTIONS(52), 1,
      anon_sym_EQ,
  [140] = 1,
    ACTIONS(54), 1,
      anon_sym_EQ,
  [144] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [148] = 1,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 85,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 120,
  [SMALL_STATE(17)] = 124,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
  [SMALL_STATE(21)] = 140,
  [SMALL_STATE(22)] = 144,
  [SMALL_STATE(23)] = 148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this_specifier, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this_specifier, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_seq, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_list, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_list, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_seq, 3),
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
