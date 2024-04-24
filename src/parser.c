#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Feature_COLON = 1,
  anon_sym_SPACE = 2,
  anon_sym_Scenario_COLON = 3,
  sym_identifier = 4,
  sym_source_file = 5,
  sym_feature_definition = 6,
  sym_scenario_definition = 7,
  aux_sym_source_file_repeat1 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Feature_COLON] = "Feature:",
  [anon_sym_SPACE] = " ",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_feature_definition] = "feature_definition",
  [sym_scenario_definition] = "scenario_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Feature_COLON] = anon_sym_Feature_COLON,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_Scenario_COLON] = anon_sym_Scenario_COLON,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_feature_definition] = sym_feature_definition,
  [sym_scenario_definition] = sym_scenario_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Feature_COLON] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_feature_definition] = STATE(4),
    [anon_sym_Feature_COLON] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_Scenario_COLON,
    STATE(3), 2,
      sym_scenario_definition,
      aux_sym_source_file_repeat1,
  [11] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_Scenario_COLON,
    STATE(3), 2,
      sym_scenario_definition,
      aux_sym_source_file_repeat1,
  [22] = 2,
    ACTIONS(7), 1,
      anon_sym_Scenario_COLON,
    STATE(2), 2,
      sym_scenario_definition,
      aux_sym_source_file_repeat1,
  [30] = 1,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_Scenario_COLON,
  [35] = 1,
    ACTIONS(16), 1,
      anon_sym_SPACE,
  [39] = 1,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
  [43] = 1,
    ACTIONS(20), 1,
      sym_identifier,
  [47] = 1,
    ACTIONS(22), 1,
      anon_sym_SPACE,
  [51] = 1,
    ACTIONS(24), 1,
      anon_sym_Scenario_COLON,
  [55] = 1,
    ACTIONS(26), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 35,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 55,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_definition, 3, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [18] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_definition, 3, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
