#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 1
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 25

enum {
  sym_explanation = 1,
  sym_end_token = 2,
  sym__line_ending = 3,
  sym__space = 4,
  sym_int = 5,
  anon_sym_COLON = 6,
  aux_sym_int_colon_token1 = 7,
  anon_sym_STAR = 8,
  anon_sym_DASH = 9,
  sym_float = 10,
  sym_ctrl_start_token = 11,
  aux_sym_ctrl_group_item_token1 = 12,
  aux_sym_ctrl_group_item_token2 = 13,
  aux_sym_ctrl_group_item_token3 = 14,
  aux_sym_ctrl_group_group_token1 = 15,
  sym_ctrl_keyword = 16,
  sym_ctrl_param = 17,
  sym_bfi_start_token = 18,
  sym_str_start_token = 19,
  sym_frag_start_token = 20,
  sym_s = 21,
  anon_sym_p = 22,
  aux_sym_p_token1 = 23,
  anon_sym_d = 24,
  aux_sym_d_token1 = 25,
  anon_sym_f = 26,
  aux_sym_f_token1 = 27,
  sym_orb_start_token = 28,
  sym_aim_start_token = 29,
  sym_filename = 30,
  sym_gus_start_token = 31,
  sym_scf_start_token = 32,
  sym_geo_start_token = 33,
  aux_sym_gaussian_format_atom_token1 = 34,
  sym_comment = 35,
  sym_source_file = 36,
  sym_int_colon = 37,
  sym_int_asterisk = 38,
  sym_int_minor = 39,
  sym__abstract_int = 40,
  sym__ints_seperate1 = 41,
  sym__section = 42,
  sym_ctrl_section = 43,
  sym_ctrl_items_list = 44,
  sym_ctrl_group_item = 45,
  sym_ctrl_group_group = 46,
  sym_ctrl_item = 47,
  sym_bfi_section = 48,
  sym_NFROZ_and_NBAS = 49,
  sym_list_of_frozen_MOs = 50,
  sym_list_of_basis_functions = 51,
  sym_functions_hybrid_list = 52,
  sym_basis_function_composition = 53,
  sym__ratio_and_orbit_pair = 54,
  sym_str_section = 55,
  sym_str_items_list = 56,
  sym_VB_structures_or_determinants = 57,
  sym_frag_section = 58,
  sym_number_of_fragments = 59,
  sym_frags = 60,
  sym_frag_description = 61,
  sym_basis_function_description = 62,
  sym__basis_function = 63,
  sym_p = 64,
  sym_d = 65,
  sym_f = 66,
  sym_number_of_atom_or_basis_function_in_the_fragment = 67,
  sym_orb_section = 68,
  sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals = 69,
  sym_orbital_expansion = 70,
  sym_indices_of_basis_functions = 71,
  sym_aim_section = 72,
  sym_gus_section = 73,
  sym_guess_from_MOs = 74,
  sym_scf_section = 75,
  sym_coefficients = 76,
  sym_geo_section = 77,
  sym_atom_list = 78,
  sym_gaussian_format_atom = 79,
  sym_gamess_format_atom = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym__ints_seperate1_repeat1 = 82,
  aux_sym_ctrl_items_list_repeat1 = 83,
  aux_sym_ctrl_group_item_repeat1 = 84,
  aux_sym_ctrl_group_group_repeat1 = 85,
  aux_sym_ctrl_item_repeat1 = 86,
  aux_sym_functions_hybrid_list_repeat1 = 87,
  aux_sym_basis_function_composition_repeat1 = 88,
  aux_sym_str_items_list_repeat1 = 89,
  aux_sym_frags_repeat1 = 90,
  aux_sym_basis_function_description_repeat1 = 91,
  aux_sym_p_repeat1 = 92,
  aux_sym_d_repeat1 = 93,
  aux_sym_f_repeat1 = 94,
  aux_sym_orbital_expansion_repeat1 = 95,
  aux_sym_indices_of_basis_functions_repeat1 = 96,
  aux_sym_gus_section_repeat1 = 97,
  aux_sym_scf_section_repeat1 = 98,
  aux_sym_coefficients_repeat1 = 99,
  aux_sym_atom_list_repeat1 = 100,
  anon_alias_sym_equal = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_explanation] = "explanation",
  [sym_end_token] = "end_token",
  [sym__line_ending] = "_line_ending",
  [sym__space] = "_space",
  [sym_int] = "int",
  [anon_sym_COLON] = ":",
  [aux_sym_int_colon_token1] = "int_colon_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_DASH] = "-",
  [sym_float] = "float",
  [sym_ctrl_start_token] = "ctrl_start_token",
  [aux_sym_ctrl_group_item_token1] = "ctrl_group_item_token1",
  [aux_sym_ctrl_group_item_token2] = "ctrl_group_item_token2",
  [aux_sym_ctrl_group_item_token3] = "ctrl_group_item_token3",
  [aux_sym_ctrl_group_group_token1] = "ctrl_group_group_token1",
  [sym_ctrl_keyword] = "ctrl_keyword",
  [sym_ctrl_param] = "ctrl_param",
  [sym_bfi_start_token] = "bfi_start_token",
  [sym_str_start_token] = "str_start_token",
  [sym_frag_start_token] = "frag_start_token",
  [sym_s] = "s",
  [anon_sym_p] = "p",
  [aux_sym_p_token1] = "p_token1",
  [anon_sym_d] = "d",
  [aux_sym_d_token1] = "d_token1",
  [anon_sym_f] = "f",
  [aux_sym_f_token1] = "f_token1",
  [sym_orb_start_token] = "orb_start_token",
  [sym_aim_start_token] = "aim_start_token",
  [sym_filename] = "filename",
  [sym_gus_start_token] = "gus_start_token",
  [sym_scf_start_token] = "scf_start_token",
  [sym_geo_start_token] = "geo_start_token",
  [aux_sym_gaussian_format_atom_token1] = "gaussian_format_atom_token1",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_int_colon] = "int_colon",
  [sym_int_asterisk] = "int_asterisk",
  [sym_int_minor] = "int_minor",
  [sym__abstract_int] = "_abstract_int",
  [sym__ints_seperate1] = "_ints_seperate1",
  [sym__section] = "_section",
  [sym_ctrl_section] = "ctrl_section",
  [sym_ctrl_items_list] = "ctrl_items_list",
  [sym_ctrl_group_item] = "ctrl_group_item",
  [sym_ctrl_group_group] = "ctrl_group_group",
  [sym_ctrl_item] = "ctrl_item",
  [sym_bfi_section] = "bfi_section",
  [sym_NFROZ_and_NBAS] = "NFROZ_and_NBAS",
  [sym_list_of_frozen_MOs] = "list_of_frozen_MOs",
  [sym_list_of_basis_functions] = "list_of_basis_functions",
  [sym_functions_hybrid_list] = "functions_hybrid_list",
  [sym_basis_function_composition] = "basis_function_composition",
  [sym__ratio_and_orbit_pair] = "_ratio_and_orbit_pair",
  [sym_str_section] = "str_section",
  [sym_str_items_list] = "str_items_list",
  [sym_VB_structures_or_determinants] = "VB_structures_or_determinants",
  [sym_frag_section] = "frag_section",
  [sym_number_of_fragments] = "number_of_fragments",
  [sym_frags] = "frags",
  [sym_frag_description] = "frag_description",
  [sym_basis_function_description] = "basis_function_description",
  [sym__basis_function] = "_basis_function",
  [sym_p] = "p",
  [sym_d] = "d",
  [sym_f] = "f",
  [sym_number_of_atom_or_basis_function_in_the_fragment] = "number_of_atom_or_basis_function_in_the_fragment",
  [sym_orb_section] = "orb_section",
  [sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals] = "number_of_basis_functions_or_fragments_used_for_VB_orbitals",
  [sym_orbital_expansion] = "orbital_expansion",
  [sym_indices_of_basis_functions] = "indices_of_basis_functions",
  [sym_aim_section] = "aim_section",
  [sym_gus_section] = "gus_section",
  [sym_guess_from_MOs] = "guess_from_MOs",
  [sym_scf_section] = "scf_section",
  [sym_coefficients] = "coefficients",
  [sym_geo_section] = "geo_section",
  [sym_atom_list] = "atom_list",
  [sym_gaussian_format_atom] = "gaussian_format_atom",
  [sym_gamess_format_atom] = "gamess_format_atom",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__ints_seperate1_repeat1] = "_ints_seperate1_repeat1",
  [aux_sym_ctrl_items_list_repeat1] = "ctrl_items_list_repeat1",
  [aux_sym_ctrl_group_item_repeat1] = "ctrl_group_item_repeat1",
  [aux_sym_ctrl_group_group_repeat1] = "ctrl_group_group_repeat1",
  [aux_sym_ctrl_item_repeat1] = "ctrl_item_repeat1",
  [aux_sym_functions_hybrid_list_repeat1] = "functions_hybrid_list_repeat1",
  [aux_sym_basis_function_composition_repeat1] = "basis_function_composition_repeat1",
  [aux_sym_str_items_list_repeat1] = "str_items_list_repeat1",
  [aux_sym_frags_repeat1] = "frags_repeat1",
  [aux_sym_basis_function_description_repeat1] = "basis_function_description_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
  [aux_sym_d_repeat1] = "d_repeat1",
  [aux_sym_f_repeat1] = "f_repeat1",
  [aux_sym_orbital_expansion_repeat1] = "orbital_expansion_repeat1",
  [aux_sym_indices_of_basis_functions_repeat1] = "indices_of_basis_functions_repeat1",
  [aux_sym_gus_section_repeat1] = "gus_section_repeat1",
  [aux_sym_scf_section_repeat1] = "scf_section_repeat1",
  [aux_sym_coefficients_repeat1] = "coefficients_repeat1",
  [aux_sym_atom_list_repeat1] = "atom_list_repeat1",
  [anon_alias_sym_equal] = "equal",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_explanation] = sym_explanation,
  [sym_end_token] = sym_end_token,
  [sym__line_ending] = sym__line_ending,
  [sym__space] = sym__space,
  [sym_int] = sym_int,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_int_colon_token1] = aux_sym_int_colon_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_float] = sym_float,
  [sym_ctrl_start_token] = sym_ctrl_start_token,
  [aux_sym_ctrl_group_item_token1] = aux_sym_ctrl_group_item_token1,
  [aux_sym_ctrl_group_item_token2] = aux_sym_ctrl_group_item_token2,
  [aux_sym_ctrl_group_item_token3] = aux_sym_ctrl_group_item_token3,
  [aux_sym_ctrl_group_group_token1] = aux_sym_ctrl_group_group_token1,
  [sym_ctrl_keyword] = sym_ctrl_keyword,
  [sym_ctrl_param] = sym_ctrl_param,
  [sym_bfi_start_token] = sym_bfi_start_token,
  [sym_str_start_token] = sym_str_start_token,
  [sym_frag_start_token] = sym_frag_start_token,
  [sym_s] = sym_s,
  [anon_sym_p] = anon_sym_p,
  [aux_sym_p_token1] = aux_sym_p_token1,
  [anon_sym_d] = anon_sym_d,
  [aux_sym_d_token1] = aux_sym_d_token1,
  [anon_sym_f] = anon_sym_f,
  [aux_sym_f_token1] = aux_sym_f_token1,
  [sym_orb_start_token] = sym_orb_start_token,
  [sym_aim_start_token] = sym_aim_start_token,
  [sym_filename] = sym_filename,
  [sym_gus_start_token] = sym_gus_start_token,
  [sym_scf_start_token] = sym_scf_start_token,
  [sym_geo_start_token] = sym_geo_start_token,
  [aux_sym_gaussian_format_atom_token1] = aux_sym_gaussian_format_atom_token1,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_int_colon] = sym_int_colon,
  [sym_int_asterisk] = sym_int_asterisk,
  [sym_int_minor] = sym_int_minor,
  [sym__abstract_int] = sym__abstract_int,
  [sym__ints_seperate1] = sym__ints_seperate1,
  [sym__section] = sym__section,
  [sym_ctrl_section] = sym_ctrl_section,
  [sym_ctrl_items_list] = sym_ctrl_items_list,
  [sym_ctrl_group_item] = sym_ctrl_group_item,
  [sym_ctrl_group_group] = sym_ctrl_group_group,
  [sym_ctrl_item] = sym_ctrl_item,
  [sym_bfi_section] = sym_bfi_section,
  [sym_NFROZ_and_NBAS] = sym_NFROZ_and_NBAS,
  [sym_list_of_frozen_MOs] = sym_list_of_frozen_MOs,
  [sym_list_of_basis_functions] = sym_list_of_basis_functions,
  [sym_functions_hybrid_list] = sym_functions_hybrid_list,
  [sym_basis_function_composition] = sym_basis_function_composition,
  [sym__ratio_and_orbit_pair] = sym__ratio_and_orbit_pair,
  [sym_str_section] = sym_str_section,
  [sym_str_items_list] = sym_str_items_list,
  [sym_VB_structures_or_determinants] = sym_VB_structures_or_determinants,
  [sym_frag_section] = sym_frag_section,
  [sym_number_of_fragments] = sym_number_of_fragments,
  [sym_frags] = sym_frags,
  [sym_frag_description] = sym_frag_description,
  [sym_basis_function_description] = sym_basis_function_description,
  [sym__basis_function] = sym__basis_function,
  [sym_p] = sym_p,
  [sym_d] = sym_d,
  [sym_f] = sym_f,
  [sym_number_of_atom_or_basis_function_in_the_fragment] = sym_number_of_atom_or_basis_function_in_the_fragment,
  [sym_orb_section] = sym_orb_section,
  [sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals] = sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals,
  [sym_orbital_expansion] = sym_orbital_expansion,
  [sym_indices_of_basis_functions] = sym_indices_of_basis_functions,
  [sym_aim_section] = sym_aim_section,
  [sym_gus_section] = sym_gus_section,
  [sym_guess_from_MOs] = sym_guess_from_MOs,
  [sym_scf_section] = sym_scf_section,
  [sym_coefficients] = sym_coefficients,
  [sym_geo_section] = sym_geo_section,
  [sym_atom_list] = sym_atom_list,
  [sym_gaussian_format_atom] = sym_gaussian_format_atom,
  [sym_gamess_format_atom] = sym_gamess_format_atom,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__ints_seperate1_repeat1] = aux_sym__ints_seperate1_repeat1,
  [aux_sym_ctrl_items_list_repeat1] = aux_sym_ctrl_items_list_repeat1,
  [aux_sym_ctrl_group_item_repeat1] = aux_sym_ctrl_group_item_repeat1,
  [aux_sym_ctrl_group_group_repeat1] = aux_sym_ctrl_group_group_repeat1,
  [aux_sym_ctrl_item_repeat1] = aux_sym_ctrl_item_repeat1,
  [aux_sym_functions_hybrid_list_repeat1] = aux_sym_functions_hybrid_list_repeat1,
  [aux_sym_basis_function_composition_repeat1] = aux_sym_basis_function_composition_repeat1,
  [aux_sym_str_items_list_repeat1] = aux_sym_str_items_list_repeat1,
  [aux_sym_frags_repeat1] = aux_sym_frags_repeat1,
  [aux_sym_basis_function_description_repeat1] = aux_sym_basis_function_description_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
  [aux_sym_d_repeat1] = aux_sym_d_repeat1,
  [aux_sym_f_repeat1] = aux_sym_f_repeat1,
  [aux_sym_orbital_expansion_repeat1] = aux_sym_orbital_expansion_repeat1,
  [aux_sym_indices_of_basis_functions_repeat1] = aux_sym_indices_of_basis_functions_repeat1,
  [aux_sym_gus_section_repeat1] = aux_sym_gus_section_repeat1,
  [aux_sym_scf_section_repeat1] = aux_sym_scf_section_repeat1,
  [aux_sym_coefficients_repeat1] = aux_sym_coefficients_repeat1,
  [aux_sym_atom_list_repeat1] = aux_sym_atom_list_repeat1,
  [anon_alias_sym_equal] = anon_alias_sym_equal,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_explanation] = {
    .visible = true,
    .named = true,
  },
  [sym_end_token] = {
    .visible = true,
    .named = true,
  },
  [sym__line_ending] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_colon_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_start_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ctrl_group_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_group_item_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_group_item_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_group_group_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ctrl_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_param] = {
    .visible = true,
    .named = true,
  },
  [sym_bfi_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_str_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_frag_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_s] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_p_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_d_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_f_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_orb_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_aim_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_gus_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_scf_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_geo_start_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_gaussian_format_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_int_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_int_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_int_minor] = {
    .visible = true,
    .named = true,
  },
  [sym__abstract_int] = {
    .visible = false,
    .named = true,
  },
  [sym__ints_seperate1] = {
    .visible = false,
    .named = true,
  },
  [sym__section] = {
    .visible = false,
    .named = true,
  },
  [sym_ctrl_section] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_items_list] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_group_item] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_group_group] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_item] = {
    .visible = true,
    .named = true,
  },
  [sym_bfi_section] = {
    .visible = true,
    .named = true,
  },
  [sym_NFROZ_and_NBAS] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_frozen_MOs] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_basis_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_functions_hybrid_list] = {
    .visible = true,
    .named = true,
  },
  [sym_basis_function_composition] = {
    .visible = true,
    .named = true,
  },
  [sym__ratio_and_orbit_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_str_section] = {
    .visible = true,
    .named = true,
  },
  [sym_str_items_list] = {
    .visible = true,
    .named = true,
  },
  [sym_VB_structures_or_determinants] = {
    .visible = true,
    .named = true,
  },
  [sym_frag_section] = {
    .visible = true,
    .named = true,
  },
  [sym_number_of_fragments] = {
    .visible = true,
    .named = true,
  },
  [sym_frags] = {
    .visible = true,
    .named = true,
  },
  [sym_frag_description] = {
    .visible = true,
    .named = true,
  },
  [sym_basis_function_description] = {
    .visible = true,
    .named = true,
  },
  [sym__basis_function] = {
    .visible = false,
    .named = true,
  },
  [sym_p] = {
    .visible = true,
    .named = true,
  },
  [sym_d] = {
    .visible = true,
    .named = true,
  },
  [sym_f] = {
    .visible = true,
    .named = true,
  },
  [sym_number_of_atom_or_basis_function_in_the_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_orb_section] = {
    .visible = true,
    .named = true,
  },
  [sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals] = {
    .visible = true,
    .named = true,
  },
  [sym_orbital_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_indices_of_basis_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_aim_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gus_section] = {
    .visible = true,
    .named = true,
  },
  [sym_guess_from_MOs] = {
    .visible = true,
    .named = true,
  },
  [sym_scf_section] = {
    .visible = true,
    .named = true,
  },
  [sym_coefficients] = {
    .visible = true,
    .named = true,
  },
  [sym_geo_section] = {
    .visible = true,
    .named = true,
  },
  [sym_atom_list] = {
    .visible = true,
    .named = true,
  },
  [sym_gaussian_format_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_gamess_format_atom] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ints_seperate1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_items_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_group_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_group_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functions_hybrid_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basis_function_composition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_items_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basis_function_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_p_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_d_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_f_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_orbital_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indices_of_basis_functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gus_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scf_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_coefficients_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_equal] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_atom_name = 1,
  field_charge = 2,
  field_commas = 3,
  field_direction = 4,
  field_double_commas = 5,
  field_end = 6,
  field_equal = 7,
  field_item = 8,
  field_items_list = 9,
  field_keyword = 10,
  field_num = 11,
  field_orbit = 12,
  field_param = 13,
  field_ratio = 14,
  field_start = 15,
  field_start_token = 16,
  field_structure_number = 17,
  field_times = 18,
  field_x = 19,
  field_y = 20,
  field_z = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_atom_name] = "atom_name",
  [field_charge] = "charge",
  [field_commas] = "commas",
  [field_direction] = "direction",
  [field_double_commas] = "double_commas",
  [field_end] = "end",
  [field_equal] = "equal",
  [field_item] = "item",
  [field_items_list] = "items_list",
  [field_keyword] = "keyword",
  [field_num] = "num",
  [field_orbit] = "orbit",
  [field_param] = "param",
  [field_ratio] = "ratio",
  [field_start] = "start",
  [field_start_token] = "start_token",
  [field_structure_number] = "structure_number",
  [field_times] = "times",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 4},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 5},
  [23] = {.index = 43, .length = 2},
  [24] = {.index = 45, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
  [1] =
    {field_item, 0},
  [2] =
    {field_item, 0, .inherited = true},
  [3] =
    {field_items_list, 2},
    {field_start_token, 0},
  [5] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [7] =
    {field_end, 2},
    {field_start, 0},
  [9] =
    {field_num, 0},
    {field_times, 2},
  [11] =
    {field_start_token, 0},
  [12] =
    {field_structure_number, 0},
  [13] =
    {field_keyword, 0},
    {field_param, 2},
  [15] =
    {field_structure_number, 0},
    {field_structure_number, 1, .inherited = true},
  [17] =
    {field_equal, 1},
    {field_keyword, 0},
  [19] =
    {field_keyword, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [22] =
    {field_direction, 0},
  [23] =
    {field_commas, 0},
    {field_structure_number, 1},
  [25] =
    {field_structure_number, 0, .inherited = true},
    {field_structure_number, 1, .inherited = true},
  [27] =
    {field_double_commas, 0},
  [28] =
    {field_commas, 0},
    {field_param, 1},
  [30] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [32] =
    {field_atom_name, 0},
    {field_x, 1},
    {field_y, 2},
    {field_z, 3},
  [36] =
    {field_orbit, 0, .inherited = true},
    {field_ratio, 0, .inherited = true},
  [38] =
    {field_atom_name, 0},
    {field_charge, 1},
    {field_x, 2},
    {field_y, 3},
    {field_z, 4},
  [43] =
    {field_orbit, 1},
    {field_ratio, 0},
  [45] =
    {field_orbit, 0, .inherited = true},
    {field_orbit, 1, .inherited = true},
    {field_ratio, 0, .inherited = true},
    {field_ratio, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [1] = anon_alias_sym_equal,
  },
  [13] = {
    [1] = anon_alias_sym_equal,
  },
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 72,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 82,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 95,
  [126] = 93,
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',') ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 30:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 34:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 48:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 49:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 50:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ';') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_end_token);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_end_token);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__line_ending);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(58);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_colon_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ctrl_start_token);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token2);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token3);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ',') ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ctrl_param);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bfi_start_token);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_str_start_token);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_frag_start_token);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_s);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_p_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_d_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_f_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_orb_start_token);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_aim_start_token);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(114);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_gus_start_token);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_scf_start_token);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_geo_start_token);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 55},
  [63] = {.lex_state = 55},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 55},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 55},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 55},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 55},
  [93] = {.lex_state = 55},
  [94] = {.lex_state = 55},
  [95] = {.lex_state = 55},
  [96] = {.lex_state = 55},
  [97] = {.lex_state = 55},
  [98] = {.lex_state = 55},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 55},
  [101] = {.lex_state = 55},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 55},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 55},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 55},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 55},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 55},
  [113] = {.lex_state = 55},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 55},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 55},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 55},
  [125] = {.lex_state = 55},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 55},
  [130] = {.lex_state = 55},
  [131] = {.lex_state = 55},
  [132] = {.lex_state = 55},
  [133] = {.lex_state = 55},
  [134] = {.lex_state = 55},
  [135] = {.lex_state = 55},
  [136] = {.lex_state = 55},
  [137] = {.lex_state = 55},
  [138] = {.lex_state = 55},
  [139] = {.lex_state = 55},
  [140] = {.lex_state = 55},
  [141] = {.lex_state = 55},
  [142] = {.lex_state = 55},
  [143] = {.lex_state = 55},
  [144] = {.lex_state = 55},
  [145] = {.lex_state = 55},
  [146] = {.lex_state = 55},
  [147] = {.lex_state = 55},
  [148] = {.lex_state = 55},
  [149] = {.lex_state = 55},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 55},
  [152] = {.lex_state = 55},
  [153] = {.lex_state = 55},
  [154] = {.lex_state = 55},
  [155] = {.lex_state = 55},
  [156] = {.lex_state = 55},
  [157] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end_token] = ACTIONS(1),
    [sym__line_ending] = ACTIONS(3),
    [sym__space] = ACTIONS(5),
    [sym_int] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_ctrl_start_token] = ACTIONS(1),
    [aux_sym_ctrl_group_item_token1] = ACTIONS(1),
    [aux_sym_ctrl_group_item_token2] = ACTIONS(1),
    [aux_sym_ctrl_group_item_token3] = ACTIONS(1),
    [aux_sym_ctrl_group_group_token1] = ACTIONS(1),
    [sym_bfi_start_token] = ACTIONS(1),
    [sym_str_start_token] = ACTIONS(1),
    [sym_frag_start_token] = ACTIONS(1),
    [sym_s] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [aux_sym_p_token1] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [sym_orb_start_token] = ACTIONS(1),
    [sym_aim_start_token] = ACTIONS(1),
    [sym_gus_start_token] = ACTIONS(1),
    [sym_scf_start_token] = ACTIONS(1),
    [sym_geo_start_token] = ACTIONS(1),
    [aux_sym_gaussian_format_atom_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(108),
    [sym__section] = STATE(5),
    [sym_ctrl_section] = STATE(5),
    [sym_bfi_section] = STATE(5),
    [sym_str_section] = STATE(5),
    [sym_frag_section] = STATE(5),
    [sym_orb_section] = STATE(5),
    [sym_aim_section] = STATE(5),
    [sym_gus_section] = STATE(5),
    [sym_scf_section] = STATE(5),
    [sym_geo_section] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_explanation] = ACTIONS(9),
    [sym__line_ending] = ACTIONS(3),
    [sym__space] = ACTIONS(5),
    [sym_ctrl_start_token] = ACTIONS(11),
    [sym_bfi_start_token] = ACTIONS(13),
    [sym_str_start_token] = ACTIONS(15),
    [sym_frag_start_token] = ACTIONS(17),
    [sym_orb_start_token] = ACTIONS(19),
    [sym_aim_start_token] = ACTIONS(21),
    [sym_gus_start_token] = ACTIONS(23),
    [sym_scf_start_token] = ACTIONS(25),
    [sym_geo_start_token] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(11), 1,
      sym_ctrl_start_token,
    ACTIONS(13), 1,
      sym_bfi_start_token,
    ACTIONS(15), 1,
      sym_str_start_token,
    ACTIONS(17), 1,
      sym_frag_start_token,
    ACTIONS(19), 1,
      sym_orb_start_token,
    ACTIONS(21), 1,
      sym_aim_start_token,
    ACTIONS(23), 1,
      sym_gus_start_token,
    ACTIONS(25), 1,
      sym_scf_start_token,
    ACTIONS(27), 1,
      sym_geo_start_token,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(4), 11,
      sym__section,
      sym_ctrl_section,
      sym_bfi_section,
      sym_str_section,
      sym_frag_section,
      sym_orb_section,
      sym_aim_section,
      sym_gus_section,
      sym_scf_section,
      sym_geo_section,
      aux_sym_source_file_repeat1,
  [51] = 13,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(11), 1,
      sym_ctrl_start_token,
    ACTIONS(13), 1,
      sym_bfi_start_token,
    ACTIONS(15), 1,
      sym_str_start_token,
    ACTIONS(17), 1,
      sym_frag_start_token,
    ACTIONS(19), 1,
      sym_orb_start_token,
    ACTIONS(21), 1,
      sym_aim_start_token,
    ACTIONS(23), 1,
      sym_gus_start_token,
    ACTIONS(25), 1,
      sym_scf_start_token,
    ACTIONS(27), 1,
      sym_geo_start_token,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(2), 11,
      sym__section,
      sym_ctrl_section,
      sym_bfi_section,
      sym_str_section,
      sym_frag_section,
      sym_orb_section,
      sym_aim_section,
      sym_gus_section,
      sym_scf_section,
      sym_geo_section,
      aux_sym_source_file_repeat1,
  [102] = 13,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_ctrl_start_token,
    ACTIONS(38), 1,
      sym_bfi_start_token,
    ACTIONS(41), 1,
      sym_str_start_token,
    ACTIONS(44), 1,
      sym_frag_start_token,
    ACTIONS(47), 1,
      sym_orb_start_token,
    ACTIONS(50), 1,
      sym_aim_start_token,
    ACTIONS(53), 1,
      sym_gus_start_token,
    ACTIONS(56), 1,
      sym_scf_start_token,
    ACTIONS(59), 1,
      sym_geo_start_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(4), 11,
      sym__section,
      sym_ctrl_section,
      sym_bfi_section,
      sym_str_section,
      sym_frag_section,
      sym_orb_section,
      sym_aim_section,
      sym_gus_section,
      sym_scf_section,
      sym_geo_section,
      aux_sym_source_file_repeat1,
  [153] = 13,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(11), 1,
      sym_ctrl_start_token,
    ACTIONS(13), 1,
      sym_bfi_start_token,
    ACTIONS(15), 1,
      sym_str_start_token,
    ACTIONS(17), 1,
      sym_frag_start_token,
    ACTIONS(19), 1,
      sym_orb_start_token,
    ACTIONS(21), 1,
      sym_aim_start_token,
    ACTIONS(23), 1,
      sym_gus_start_token,
    ACTIONS(25), 1,
      sym_scf_start_token,
    ACTIONS(27), 1,
      sym_geo_start_token,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(4), 11,
      sym__section,
      sym_ctrl_section,
      sym_bfi_section,
      sym_str_section,
      sym_frag_section,
      sym_orb_section,
      sym_aim_section,
      sym_gus_section,
      sym_scf_section,
      sym_geo_section,
      aux_sym_source_file_repeat1,
  [204] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_end_token,
    ACTIONS(64), 1,
      sym_int,
    ACTIONS(67), 1,
      sym_s,
    ACTIONS(70), 1,
      anon_sym_p,
    ACTIONS(73), 1,
      anon_sym_d,
    ACTIONS(76), 1,
      anon_sym_f,
    STATE(128), 1,
      sym__ints_seperate1,
    STATE(147), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(148), 1,
      sym_basis_function_description,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(6), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(27), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [256] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    ACTIONS(81), 1,
      sym_s,
    ACTIONS(83), 1,
      anon_sym_p,
    ACTIONS(85), 1,
      anon_sym_d,
    ACTIONS(87), 1,
      anon_sym_f,
    STATE(115), 1,
      sym_frags,
    STATE(128), 1,
      sym__ints_seperate1,
    STATE(147), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(148), 1,
      sym_basis_function_description,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(8), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(27), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [308] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    ACTIONS(81), 1,
      sym_s,
    ACTIONS(83), 1,
      anon_sym_p,
    ACTIONS(85), 1,
      anon_sym_d,
    ACTIONS(87), 1,
      anon_sym_f,
    ACTIONS(89), 1,
      sym_end_token,
    STATE(128), 1,
      sym__ints_seperate1,
    STATE(147), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(148), 1,
      sym_basis_function_description,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(6), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(27), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [360] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [380] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(93), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [400] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(95), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [420] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [440] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [460] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [480] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(103), 1,
      sym_end_token,
    ACTIONS(105), 1,
      sym_int,
    STATE(18), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(143), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(35), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(95), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [510] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(105), 1,
      sym_int,
    STATE(15), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(105), 1,
      sym_orbital_expansion,
    STATE(143), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(35), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(95), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [540] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [560] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(109), 1,
      sym_end_token,
    ACTIONS(111), 1,
      sym_int,
    STATE(18), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(143), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(35), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(95), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [590] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [610] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [630] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      sym_ctrl_start_token,
      sym_bfi_start_token,
      sym_str_start_token,
      sym_frag_start_token,
      sym_orb_start_token,
      sym_aim_start_token,
      sym_gus_start_token,
      sym_scf_start_token,
      sym_geo_start_token,
  [650] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(120), 1,
      sym_end_token,
    ACTIONS(122), 1,
      sym_int,
    STATE(141), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(22), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [677] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(125), 1,
      sym_end_token,
    ACTIONS(127), 1,
      sym_int,
    STATE(23), 1,
      aux_sym_gus_section_repeat1,
    STATE(130), 1,
      sym__ints_seperate1,
    STATE(140), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [706] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    ACTIONS(130), 1,
      sym_end_token,
    STATE(23), 1,
      aux_sym_gus_section_repeat1,
    STATE(130), 1,
      sym__ints_seperate1,
    STATE(140), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [735] = 7,
    ACTIONS(132), 1,
      sym__space,
    ACTIONS(134), 1,
      sym_s,
    ACTIONS(137), 1,
      anon_sym_p,
    ACTIONS(140), 1,
      anon_sym_d,
    ACTIONS(143), 1,
      anon_sym_f,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(25), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [762] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(107), 1,
      sym_str_items_list,
    STATE(141), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(28), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [789] = 7,
    ACTIONS(83), 1,
      anon_sym_p,
    ACTIONS(85), 1,
      anon_sym_d,
    ACTIONS(87), 1,
      anon_sym_f,
    ACTIONS(146), 1,
      sym__space,
    ACTIONS(148), 1,
      sym_s,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(25), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [816] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    ACTIONS(150), 1,
      sym_end_token,
    STATE(141), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(22), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [843] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(24), 1,
      aux_sym_gus_section_repeat1,
    STATE(130), 1,
      sym__ints_seperate1,
    STATE(140), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [869] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(152), 1,
      sym__ints_seperate1,
    STATE(153), 1,
      sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [892] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(133), 1,
      sym_list_of_basis_functions,
    STATE(137), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [915] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(129), 1,
      sym_NFROZ_and_NBAS,
    STATE(131), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [938] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(128), 1,
      sym__ints_seperate1,
    STATE(136), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [961] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(145), 1,
      sym__ints_seperate1,
    STATE(150), 1,
      sym_number_of_fragments,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(105), 1,
      sym_int,
    ACTIONS(152), 1,
      sym__line_ending,
    STATE(36), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(95), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1007] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(154), 1,
      sym__line_ending,
    ACTIONS(156), 1,
      sym_int,
    STATE(36), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(95), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1030] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    STATE(132), 1,
      sym__ints_seperate1,
    STATE(157), 1,
      sym_list_of_frozen_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(125), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1053] = 9,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(159), 1,
      sym_end_token,
    ACTIONS(161), 1,
      sym_float,
    STATE(54), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(76), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(109), 1,
      sym__ratio_and_orbit_pair,
    STATE(113), 1,
      sym_functions_hybrid_list,
    STATE(142), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1082] = 5,
    ACTIONS(163), 1,
      sym__space,
    ACTIONS(167), 1,
      aux_sym_d_token1,
    STATE(52), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(165), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1102] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(171), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(173), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(48), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(169), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1124] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(175), 1,
      sym_end_token,
    ACTIONS(177), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(179), 1,
      sym_ctrl_keyword,
    STATE(78), 1,
      sym_ctrl_item,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(51), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1148] = 5,
    ACTIONS(181), 1,
      sym__space,
    ACTIONS(185), 1,
      aux_sym_p_token1,
    STATE(50), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(183), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1168] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(173), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(189), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(40), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(187), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1190] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(191), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1206] = 5,
    ACTIONS(193), 1,
      sym__space,
    ACTIONS(197), 1,
      aux_sym_f_token1,
    STATE(53), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(195), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1226] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(199), 1,
      sym_end_token,
    ACTIONS(201), 1,
      sym_float,
    STATE(46), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(76), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(109), 1,
      sym__ratio_and_orbit_pair,
    STATE(142), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1252] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(204), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1268] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(208), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(210), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(48), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(206), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1290] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(177), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(179), 1,
      sym_ctrl_keyword,
    STATE(78), 1,
      sym_ctrl_item,
    STATE(116), 1,
      sym_ctrl_items_list,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(41), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1314] = 5,
    ACTIONS(213), 1,
      sym__space,
    ACTIONS(217), 1,
      aux_sym_p_token1,
    STATE(50), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(215), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1334] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(220), 1,
      sym_end_token,
    ACTIONS(222), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(225), 1,
      sym_ctrl_keyword,
    STATE(78), 1,
      sym_ctrl_item,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(51), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1358] = 5,
    ACTIONS(228), 1,
      sym__space,
    ACTIONS(232), 1,
      aux_sym_d_token1,
    STATE(52), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(230), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1378] = 5,
    ACTIONS(235), 1,
      sym__space,
    ACTIONS(239), 1,
      aux_sym_f_token1,
    STATE(53), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(237), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1398] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(161), 1,
      sym_float,
    ACTIONS(242), 1,
      sym_end_token,
    STATE(46), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(76), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(109), 1,
      sym__ratio_and_orbit_pair,
    STATE(142), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1424] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(244), 1,
      sym_end_token,
    ACTIONS(246), 1,
      sym_float,
    STATE(55), 1,
      aux_sym_scf_section_repeat1,
    STATE(84), 1,
      aux_sym_coefficients_repeat1,
    STATE(154), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1447] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(79), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(100), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1464] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(105), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(100), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1481] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(251), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(58), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(249), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1500] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(254), 1,
      sym_end_token,
    ACTIONS(256), 1,
      sym_float,
    STATE(55), 1,
      aux_sym_scf_section_repeat1,
    STATE(84), 1,
      aux_sym_coefficients_repeat1,
    STATE(154), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1523] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(260), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(60), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(258), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1542] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(265), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(263), 4,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      aux_sym_ctrl_group_group_token1,
      sym_ctrl_keyword,
  [1559] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(267), 1,
      aux_sym_gaussian_format_atom_token1,
    STATE(124), 1,
      sym_atom_list,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(63), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1578] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(267), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(269), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(70), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1597] = 3,
    ACTIONS(271), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(273), 5,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
      aux_sym_f_token1,
  [1612] = 3,
    ACTIONS(275), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(277), 5,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      aux_sym_d_token1,
      anon_sym_f,
  [1627] = 3,
    ACTIONS(279), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(281), 5,
      sym_s,
      anon_sym_p,
      aux_sym_p_token1,
      anon_sym_d,
      anon_sym_f,
  [1642] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(285), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(58), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(283), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1661] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(289), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(60), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(287), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1680] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(285), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(67), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(291), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1699] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(293), 1,
      sym_end_token,
    ACTIONS(295), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(70), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1718] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(300), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(298), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1734] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__space,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(302), 2,
      sym__line_ending,
      sym_int,
  [1754] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(314), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(312), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1770] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(318), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(316), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1786] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(256), 1,
      sym_float,
    STATE(59), 1,
      aux_sym_scf_section_repeat1,
    STATE(84), 1,
      aux_sym_coefficients_repeat1,
    STATE(154), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(161), 1,
      sym_float,
    ACTIONS(320), 1,
      sym__line_ending,
    STATE(79), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(109), 1,
      sym__ratio_and_orbit_pair,
  [1825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__line_ending,
    ACTIONS(304), 1,
      sym__space,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      anon_sym_DASH,
  [1844] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(324), 3,
      sym_end_token,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(326), 1,
      sym__line_ending,
    ACTIONS(328), 1,
      sym_float,
    STATE(79), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(109), 1,
      sym__ratio_and_orbit_pair,
  [1876] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(331), 1,
      sym_int,
    STATE(87), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1890] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(244), 2,
      sym_end_token,
      sym_float,
  [1902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(333), 2,
      sym__line_ending,
      sym_int,
  [1916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(337), 1,
      sym__line_ending,
    ACTIONS(339), 1,
      sym_float,
    STATE(83), 1,
      aux_sym_coefficients_repeat1,
  [1932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(342), 1,
      sym__line_ending,
    ACTIONS(344), 1,
      sym_float,
    STATE(83), 1,
      aux_sym_coefficients_repeat1,
  [1948] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(109), 2,
      sym_end_token,
      sym_int,
  [1960] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(199), 2,
      sym_end_token,
      sym_float,
  [1972] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(289), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(68), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1986] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(125), 2,
      sym_end_token,
      sym_int,
  [1998] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(185), 1,
      aux_sym_p_token1,
    STATE(42), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2012] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(167), 1,
      aux_sym_d_token1,
    STATE(39), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2026] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(197), 1,
      aux_sym_f_token1,
    STATE(45), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2040] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(346), 2,
      sym_end_token,
      sym_int,
  [2052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(348), 2,
      sym__line_ending,
      sym_int,
  [2066] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(353), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [2078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    STATE(82), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(355), 2,
      sym__line_ending,
      sym_int,
  [2092] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(357), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [2104] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(331), 1,
      sym_int,
    STATE(73), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2118] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(359), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2129] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(361), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym__space,
    ACTIONS(348), 2,
      sym__line_ending,
      sym_int,
  [2151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__line_ending,
    ACTIONS(365), 1,
      sym__space,
    STATE(126), 1,
      aux_sym__ints_seperate1_repeat1,
  [2164] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(367), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2175] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(369), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2186] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(371), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2197] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(373), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2208] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(375), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2219] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(377), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2230] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(381), 2,
      sym__line_ending,
      sym_float,
  [2252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__space,
    ACTIONS(383), 2,
      sym__line_ending,
      sym_int,
  [2263] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(387), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__space,
    ACTIONS(389), 2,
      sym__line_ending,
      sym_int,
  [2285] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(393), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2296] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(395), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2307] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(397), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2318] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(399), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__space,
    ACTIONS(401), 2,
      sym__line_ending,
      sym_int,
  [2340] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(405), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(407), 2,
      sym__line_ending,
      sym_float,
  [2362] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(409), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2373] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(411), 1,
      sym_filename,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2384] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(413), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(415), 1,
      sym__line_ending,
    ACTIONS(417), 1,
      sym_float,
  [2408] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(419), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__line_ending,
    ACTIONS(365), 1,
      sym__space,
    STATE(101), 1,
      aux_sym__ints_seperate1_repeat1,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__line_ending,
    ACTIONS(421), 1,
      sym__space,
    STATE(126), 1,
      aux_sym__ints_seperate1_repeat1,
  [2445] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(424), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(426), 1,
      sym__line_ending,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(428), 1,
      sym__line_ending,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(430), 1,
      sym__line_ending,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(432), 1,
      sym__line_ending,
  [2496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(434), 1,
      sym__line_ending,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(436), 1,
      sym__line_ending,
  [2516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(438), 1,
      sym__line_ending,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(440), 1,
      sym__line_ending,
  [2536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(442), 1,
      sym__line_ending,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(444), 1,
      sym__line_ending,
  [2556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(446), 1,
      sym__line_ending,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(448), 1,
      sym__line_ending,
  [2576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(450), 1,
      sym__line_ending,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(452), 1,
      sym__line_ending,
  [2596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(454), 1,
      sym__line_ending,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(456), 1,
      sym__line_ending,
  [2616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(458), 1,
      sym__line_ending,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(460), 1,
      sym__line_ending,
  [2636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(462), 1,
      sym__line_ending,
  [2646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(464), 1,
      sym__line_ending,
  [2656] = 2,
    ACTIONS(466), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(468), 1,
      sym__line_ending,
  [2674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(470), 1,
      sym__line_ending,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(472), 1,
      sym__line_ending,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(474), 1,
      sym__line_ending,
  [2704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(476), 1,
      sym__line_ending,
  [2714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(478), 1,
      sym__line_ending,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(480), 1,
      sym__line_ending,
  [2734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(482), 1,
      sym__line_ending,
  [2744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(484), 1,
      sym__line_ending,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 380,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 610,
  [SMALL_STATE(21)] = 630,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 677,
  [SMALL_STATE(24)] = 706,
  [SMALL_STATE(25)] = 735,
  [SMALL_STATE(26)] = 762,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 816,
  [SMALL_STATE(29)] = 843,
  [SMALL_STATE(30)] = 869,
  [SMALL_STATE(31)] = 892,
  [SMALL_STATE(32)] = 915,
  [SMALL_STATE(33)] = 938,
  [SMALL_STATE(34)] = 961,
  [SMALL_STATE(35)] = 984,
  [SMALL_STATE(36)] = 1007,
  [SMALL_STATE(37)] = 1030,
  [SMALL_STATE(38)] = 1053,
  [SMALL_STATE(39)] = 1082,
  [SMALL_STATE(40)] = 1102,
  [SMALL_STATE(41)] = 1124,
  [SMALL_STATE(42)] = 1148,
  [SMALL_STATE(43)] = 1168,
  [SMALL_STATE(44)] = 1190,
  [SMALL_STATE(45)] = 1206,
  [SMALL_STATE(46)] = 1226,
  [SMALL_STATE(47)] = 1252,
  [SMALL_STATE(48)] = 1268,
  [SMALL_STATE(49)] = 1290,
  [SMALL_STATE(50)] = 1314,
  [SMALL_STATE(51)] = 1334,
  [SMALL_STATE(52)] = 1358,
  [SMALL_STATE(53)] = 1378,
  [SMALL_STATE(54)] = 1398,
  [SMALL_STATE(55)] = 1424,
  [SMALL_STATE(56)] = 1447,
  [SMALL_STATE(57)] = 1464,
  [SMALL_STATE(58)] = 1481,
  [SMALL_STATE(59)] = 1500,
  [SMALL_STATE(60)] = 1523,
  [SMALL_STATE(61)] = 1542,
  [SMALL_STATE(62)] = 1559,
  [SMALL_STATE(63)] = 1578,
  [SMALL_STATE(64)] = 1597,
  [SMALL_STATE(65)] = 1612,
  [SMALL_STATE(66)] = 1627,
  [SMALL_STATE(67)] = 1642,
  [SMALL_STATE(68)] = 1661,
  [SMALL_STATE(69)] = 1680,
  [SMALL_STATE(70)] = 1699,
  [SMALL_STATE(71)] = 1718,
  [SMALL_STATE(72)] = 1734,
  [SMALL_STATE(73)] = 1754,
  [SMALL_STATE(74)] = 1770,
  [SMALL_STATE(75)] = 1786,
  [SMALL_STATE(76)] = 1806,
  [SMALL_STATE(77)] = 1825,
  [SMALL_STATE(78)] = 1844,
  [SMALL_STATE(79)] = 1857,
  [SMALL_STATE(80)] = 1876,
  [SMALL_STATE(81)] = 1890,
  [SMALL_STATE(82)] = 1902,
  [SMALL_STATE(83)] = 1916,
  [SMALL_STATE(84)] = 1932,
  [SMALL_STATE(85)] = 1948,
  [SMALL_STATE(86)] = 1960,
  [SMALL_STATE(87)] = 1972,
  [SMALL_STATE(88)] = 1986,
  [SMALL_STATE(89)] = 1998,
  [SMALL_STATE(90)] = 2012,
  [SMALL_STATE(91)] = 2026,
  [SMALL_STATE(92)] = 2040,
  [SMALL_STATE(93)] = 2052,
  [SMALL_STATE(94)] = 2066,
  [SMALL_STATE(95)] = 2078,
  [SMALL_STATE(96)] = 2092,
  [SMALL_STATE(97)] = 2104,
  [SMALL_STATE(98)] = 2118,
  [SMALL_STATE(99)] = 2129,
  [SMALL_STATE(100)] = 2140,
  [SMALL_STATE(101)] = 2151,
  [SMALL_STATE(102)] = 2164,
  [SMALL_STATE(103)] = 2175,
  [SMALL_STATE(104)] = 2186,
  [SMALL_STATE(105)] = 2197,
  [SMALL_STATE(106)] = 2208,
  [SMALL_STATE(107)] = 2219,
  [SMALL_STATE(108)] = 2230,
  [SMALL_STATE(109)] = 2241,
  [SMALL_STATE(110)] = 2252,
  [SMALL_STATE(111)] = 2263,
  [SMALL_STATE(112)] = 2274,
  [SMALL_STATE(113)] = 2285,
  [SMALL_STATE(114)] = 2296,
  [SMALL_STATE(115)] = 2307,
  [SMALL_STATE(116)] = 2318,
  [SMALL_STATE(117)] = 2329,
  [SMALL_STATE(118)] = 2340,
  [SMALL_STATE(119)] = 2351,
  [SMALL_STATE(120)] = 2362,
  [SMALL_STATE(121)] = 2373,
  [SMALL_STATE(122)] = 2384,
  [SMALL_STATE(123)] = 2395,
  [SMALL_STATE(124)] = 2408,
  [SMALL_STATE(125)] = 2419,
  [SMALL_STATE(126)] = 2432,
  [SMALL_STATE(127)] = 2445,
  [SMALL_STATE(128)] = 2456,
  [SMALL_STATE(129)] = 2466,
  [SMALL_STATE(130)] = 2476,
  [SMALL_STATE(131)] = 2486,
  [SMALL_STATE(132)] = 2496,
  [SMALL_STATE(133)] = 2506,
  [SMALL_STATE(134)] = 2516,
  [SMALL_STATE(135)] = 2526,
  [SMALL_STATE(136)] = 2536,
  [SMALL_STATE(137)] = 2546,
  [SMALL_STATE(138)] = 2556,
  [SMALL_STATE(139)] = 2566,
  [SMALL_STATE(140)] = 2576,
  [SMALL_STATE(141)] = 2586,
  [SMALL_STATE(142)] = 2596,
  [SMALL_STATE(143)] = 2606,
  [SMALL_STATE(144)] = 2616,
  [SMALL_STATE(145)] = 2626,
  [SMALL_STATE(146)] = 2636,
  [SMALL_STATE(147)] = 2646,
  [SMALL_STATE(148)] = 2656,
  [SMALL_STATE(149)] = 2664,
  [SMALL_STATE(150)] = 2674,
  [SMALL_STATE(151)] = 2684,
  [SMALL_STATE(152)] = 2694,
  [SMALL_STATE(153)] = 2704,
  [SMALL_STATE(154)] = 2714,
  [SMALL_STATE(155)] = 2724,
  [SMALL_STATE(156)] = 2734,
  [SMALL_STATE(157)] = 2744,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(77),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(27),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(89),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(90),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(91),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frags, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 9, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_section, 6, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 8, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gus_section, 4, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_section, 4, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_section, 4, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_expansion, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aim_section, 5, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2), SHIFT_REPEAT(72),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orb_section, 6, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_section, 4, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scf_section, 4, .production_id = 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2), SHIFT_REPEAT(77),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2), SHIFT_REPEAT(77),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basis_function_description_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(25),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(89),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(90),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(91),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_function_description, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_items_list, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indices_of_basis_functions, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2), SHIFT_REPEAT(72),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_d, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_d, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 11),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_items_list, 1, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2), SHIFT_REPEAT(98),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 16),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 16),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 16), SHIFT_REPEAT(103),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(66),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(118),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(74),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_d_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2), SHIFT_REPEAT(65),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_f_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2), SHIFT_REPEAT(64),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_hybrid_list, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2), SHIFT_REPEAT(84),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 19),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 19), SHIFT_REPEAT(106),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2), SHIFT_REPEAT(97),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 15),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 15),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_list, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_f_repeat1, 1, .production_id = 14),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 1, .production_id = 14),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_d_repeat1, 1, .production_id = 14),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 1, .production_id = 14),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 1, .production_id = 14),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 1, .production_id = 14),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 4, .production_id = 13),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 3, .production_id = 10),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2), SHIFT_REPEAT(127),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 18),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 18),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_int, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_int, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2, .production_id = 17),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2, .production_id = 17),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_function_composition, 1, .production_id = 21),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 24),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 24), SHIFT_REPEAT(98),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2), SHIFT_REPEAT(83),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coefficients, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VB_structures_or_determinants, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamess_format_atom, 6, .production_id = 22),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaussian_format_atom, 5, .production_id = 20),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [379] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 1, .production_id = 21),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_asterisk, 3, .production_id = 7),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_asterisk, 3, .production_id = 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_colon, 3, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_colon, 3, .production_id = 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_minor, 3, .production_id = 6),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_minor, 3, .production_id = 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ratio_and_orbit_pair, 2, .production_id = 23),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(56),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_atom_or_basis_function_in_the_fragment, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guess_from_MOs, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NFROZ_and_NBAS, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_frozen_MOs, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_basis_functions, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_fragments, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_XMI(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
