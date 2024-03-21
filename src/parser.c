#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  anon_sym_implicit = 4,
  anon_sym_virtual = 5,
  anon_sym_override = 6,
  anon_sym_final = 7,
  anon_sym_this = 8,
  anon_sym_COLON = 9,
  anon_sym_in = 10,
  anon_sym_copy = 11,
  anon_sym_inout = 12,
  anon_sym_out = 13,
  anon_sym_move = 14,
  anon_sym_forward = 15,
  anon_sym_EQ = 16,
  anon_sym_LBRACE_RBRACE = 17,
  sym_identifier = 18,
  anon_sym_const = 19,
  anon_sym_STAR = 20,
  sym_source_file = 21,
  sym_function_type = 22,
  sym_parameter_list = 23,
  sym__parameter = 24,
  sym_this_specifier = 25,
  sym_parameter_this = 26,
  sym_parameter = 27,
  sym_direction = 28,
  sym_declaration = 29,
  sym_statement = 30,
  sym_type_id = 31,
  sym_type_qualifier = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_parameter_list_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_implicit] = "implicit",
  [anon_sym_virtual] = "virtual",
  [anon_sym_override] = "override",
  [anon_sym_final] = "final",
  [anon_sym_this] = "this",
  [anon_sym_COLON] = ":",
  [anon_sym_in] = "in",
  [anon_sym_copy] = "copy",
  [anon_sym_inout] = "inout",
  [anon_sym_out] = "out",
  [anon_sym_move] = "move",
  [anon_sym_forward] = "forward",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_identifier] = "identifier",
  [anon_sym_const] = "const",
  [anon_sym_STAR] = "*",
  [sym_source_file] = "source_file",
  [sym_function_type] = "function_type",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_this_specifier] = "this_specifier",
  [sym_parameter_this] = "parameter_this",
  [sym_parameter] = "parameter",
  [sym_direction] = "direction",
  [sym_declaration] = "declaration",
  [sym_statement] = "statement",
  [sym_type_id] = "type_id",
  [sym_type_qualifier] = "type_qualifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_source_file] = sym_source_file,
  [sym_function_type] = sym_function_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_this_specifier] = sym_this_specifier,
  [sym_parameter_this] = sym_parameter_this,
  [sym_parameter] = sym_parameter,
  [sym_direction] = sym_direction,
  [sym_declaration] = sym_declaration,
  [sym_statement] = sym_statement,
  [sym_type_id] = sym_type_id,
  [sym_type_qualifier] = sym_type_qualifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(63);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 22:
      if (lookahead == 'w') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_copy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_move);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_forward);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_declaration] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
  [2] = {
    [sym__parameter] = STATE(11),
    [sym_this_specifier] = STATE(6),
    [sym_parameter_this] = STATE(11),
    [sym_parameter] = STATE(11),
    [sym_direction] = STATE(36),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_implicit] = ACTIONS(9),
    [anon_sym_virtual] = ACTIONS(9),
    [anon_sym_override] = ACTIONS(9),
    [anon_sym_final] = ACTIONS(9),
    [anon_sym_this] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_copy] = ACTIONS(13),
    [anon_sym_inout] = ACTIONS(13),
    [anon_sym_out] = ACTIONS(13),
    [anon_sym_move] = ACTIONS(13),
    [anon_sym_forward] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
  },
  [3] = {
    [sym__parameter] = STATE(20),
    [sym_this_specifier] = STATE(6),
    [sym_parameter_this] = STATE(20),
    [sym_parameter] = STATE(20),
    [sym_direction] = STATE(36),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_implicit] = ACTIONS(9),
    [anon_sym_virtual] = ACTIONS(9),
    [anon_sym_override] = ACTIONS(9),
    [anon_sym_final] = ACTIONS(9),
    [anon_sym_this] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_copy] = ACTIONS(13),
    [anon_sym_inout] = ACTIONS(13),
    [anon_sym_out] = ACTIONS(13),
    [anon_sym_move] = ACTIONS(13),
    [anon_sym_forward] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
  },
  [4] = {
    [sym__parameter] = STATE(20),
    [sym_this_specifier] = STATE(6),
    [sym_parameter_this] = STATE(20),
    [sym_parameter] = STATE(20),
    [sym_direction] = STATE(36),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_implicit] = ACTIONS(9),
    [anon_sym_virtual] = ACTIONS(9),
    [anon_sym_override] = ACTIONS(9),
    [anon_sym_final] = ACTIONS(9),
    [anon_sym_this] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_copy] = ACTIONS(13),
    [anon_sym_inout] = ACTIONS(13),
    [anon_sym_out] = ACTIONS(13),
    [anon_sym_move] = ACTIONS(13),
    [anon_sym_forward] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_this,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(6), 1,
      sym_this_specifier,
    STATE(36), 1,
      sym_direction,
    STATE(20), 3,
      sym__parameter,
      sym_parameter_this,
      sym_parameter,
    ACTIONS(9), 4,
      anon_sym_implicit,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_final,
    ACTIONS(13), 6,
      anon_sym_in,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [32] = 4,
    ACTIONS(13), 1,
      anon_sym_in,
    ACTIONS(21), 1,
      anon_sym_this,
    STATE(26), 1,
      sym_direction,
    ACTIONS(23), 5,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [49] = 2,
    ACTIONS(27), 1,
      anon_sym_in,
    ACTIONS(25), 6,
      anon_sym_this,
      anon_sym_copy,
      anon_sym_inout,
      anon_sym_out,
      anon_sym_move,
      anon_sym_forward,
  [61] = 5,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_const,
    ACTIONS(33), 1,
      anon_sym_STAR,
    STATE(21), 1,
      sym_type_id,
    STATE(30), 1,
      sym_type_qualifier,
  [77] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [88] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(10), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [99] = 3,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_parameter_list_repeat1,
  [109] = 3,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_parameter_list_repeat1,
  [119] = 3,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
    STATE(34), 1,
      sym_function_type,
  [129] = 3,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_parameter_list_repeat1,
  [139] = 1,
    ACTIONS(55), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [144] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [149] = 1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [154] = 1,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [159] = 2,
    ACTIONS(63), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(24), 1,
      sym_statement,
  [166] = 1,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [171] = 1,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [176] = 1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [181] = 1,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [186] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [191] = 1,
    ACTIONS(73), 1,
      anon_sym_EQ,
  [195] = 1,
    ACTIONS(75), 1,
      anon_sym_this,
  [199] = 1,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [203] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [207] = 1,
    ACTIONS(81), 1,
      anon_sym_COLON,
  [211] = 1,
    ACTIONS(83), 1,
      sym_identifier,
  [215] = 1,
    ACTIONS(85), 1,
      anon_sym_EQ,
  [219] = 1,
    ACTIONS(87), 1,
      anon_sym_this,
  [223] = 1,
    ACTIONS(89), 1,
      anon_sym_EQ,
  [227] = 1,
    ACTIONS(91), 1,
      anon_sym_EQ,
  [231] = 1,
    ACTIONS(93), 1,
      anon_sym_COLON,
  [235] = 1,
    ACTIONS(21), 1,
      anon_sym_this,
  [239] = 1,
    ACTIONS(95), 1,
      anon_sym_EQ,
  [243] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 139,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 154,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 166,
  [SMALL_STATE(21)] = 171,
  [SMALL_STATE(22)] = 176,
  [SMALL_STATE(23)] = 181,
  [SMALL_STATE(24)] = 186,
  [SMALL_STATE(25)] = 191,
  [SMALL_STATE(26)] = 195,
  [SMALL_STATE(27)] = 199,
  [SMALL_STATE(28)] = 203,
  [SMALL_STATE(29)] = 207,
  [SMALL_STATE(30)] = 211,
  [SMALL_STATE(31)] = 215,
  [SMALL_STATE(32)] = 219,
  [SMALL_STATE(33)] = 223,
  [SMALL_STATE(34)] = 227,
  [SMALL_STATE(35)] = 231,
  [SMALL_STATE(36)] = 235,
  [SMALL_STATE(37)] = 239,
  [SMALL_STATE(38)] = 243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this_specifier, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_this_specifier, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_this, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_this, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_this, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_qualifier, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
