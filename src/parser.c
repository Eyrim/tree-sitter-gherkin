#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Feature_COLON = 1,
  anon_sym_SPACE = 2,
  anon_sym_Scenario_COLON = 3,
  anon_sym_Given = 4,
  anon_sym_When = 5,
  anon_sym_Then = 6,
  anon_sym_And = 7,
  anon_sym_But = 8,
  anon_sym_STAR = 9,
  sym_identifier = 10,
  sym_source_file = 11,
  sym_feature_definition = 12,
  sym_scenario_definition = 13,
  sym_step_definition = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_scenario_definition_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Feature_COLON] = "Feature:",
  [anon_sym_SPACE] = " ",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [anon_sym_Given] = "Given",
  [anon_sym_When] = "When",
  [anon_sym_Then] = "Then",
  [anon_sym_And] = "And",
  [anon_sym_But] = "But",
  [anon_sym_STAR] = "*",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_feature_definition] = "feature_definition",
  [sym_scenario_definition] = "scenario_definition",
  [sym_step_definition] = "step_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_scenario_definition_repeat1] = "scenario_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Feature_COLON] = anon_sym_Feature_COLON,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_Scenario_COLON] = anon_sym_Scenario_COLON,
  [anon_sym_Given] = anon_sym_Given,
  [anon_sym_When] = anon_sym_When,
  [anon_sym_Then] = anon_sym_Then,
  [anon_sym_And] = anon_sym_And,
  [anon_sym_But] = anon_sym_But,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_feature_definition] = sym_feature_definition,
  [sym_scenario_definition] = sym_scenario_definition,
  [sym_step_definition] = sym_step_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_scenario_definition_repeat1] = aux_sym_scenario_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Feature_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenario_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_When] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_And] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_But] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym_feature_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_step_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_definition_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '*', 41,
        'A', 19,
        'B', 29,
        'F', 9,
        'G', 17,
        'S', 7,
        'T', 15,
        'W', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_Given);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_When);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_And);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_But);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Feature_COLON] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_Given] = ACTIONS(1),
    [anon_sym_When] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(1),
    [anon_sym_And] = ACTIONS(1),
    [anon_sym_But] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_feature_definition] = STATE(8),
    [anon_sym_Feature_COLON] = ACTIONS(3),
  },
  [2] = {
    [sym_step_definition] = STATE(3),
    [aux_sym_scenario_definition_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Scenario_COLON] = ACTIONS(5),
    [anon_sym_Given] = ACTIONS(7),
    [anon_sym_When] = ACTIONS(7),
    [anon_sym_Then] = ACTIONS(7),
    [anon_sym_And] = ACTIONS(7),
    [anon_sym_But] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
  },
  [3] = {
    [sym_step_definition] = STATE(4),
    [aux_sym_scenario_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_Scenario_COLON] = ACTIONS(9),
    [anon_sym_Given] = ACTIONS(7),
    [anon_sym_When] = ACTIONS(7),
    [anon_sym_Then] = ACTIONS(7),
    [anon_sym_And] = ACTIONS(7),
    [anon_sym_But] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
  },
  [4] = {
    [sym_step_definition] = STATE(4),
    [aux_sym_scenario_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_Scenario_COLON] = ACTIONS(11),
    [anon_sym_Given] = ACTIONS(13),
    [anon_sym_When] = ACTIONS(13),
    [anon_sym_Then] = ACTIONS(13),
    [anon_sym_And] = ACTIONS(13),
    [anon_sym_But] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 8,
      ts_builtin_sym_end,
      anon_sym_Scenario_COLON,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [11] = 3,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_Scenario_COLON,
    STATE(7), 2,
      sym_scenario_definition,
      aux_sym_source_file_repeat1,
  [22] = 3,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_Scenario_COLON,
    STATE(7), 2,
      sym_scenario_definition,
      aux_sym_source_file_repeat1,
  [33] = 2,
    ACTIONS(20), 1,
      anon_sym_Scenario_COLON,
    STATE(6), 2,
      sym_scenario_definition,
      aux_sym_source_file_repeat1,
  [41] = 1,
    ACTIONS(27), 1,
      anon_sym_SPACE,
  [45] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [49] = 1,
    ACTIONS(31), 1,
      sym_identifier,
  [53] = 1,
    ACTIONS(33), 1,
      anon_sym_SPACE,
  [57] = 1,
    ACTIONS(35), 1,
      anon_sym_Scenario_COLON,
  [61] = 1,
    ACTIONS(37), 1,
      sym_identifier,
  [65] = 1,
    ACTIONS(39), 1,
      anon_sym_SPACE,
  [69] = 1,
    ACTIONS(41), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 11,
  [SMALL_STATE(7)] = 22,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 45,
  [SMALL_STATE(11)] = 49,
  [SMALL_STATE(12)] = 53,
  [SMALL_STATE(13)] = 57,
  [SMALL_STATE(14)] = 61,
  [SMALL_STATE(15)] = 65,
  [SMALL_STATE(16)] = 69,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_definition, 3, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_definition, 4, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_definition_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_definition, 3, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_definition, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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

TS_PUBLIC const TSLanguage *tree_sitter_gherkin(void) {
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
