#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 1
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 23

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
  [aux_sym_ctrl_group_item_token3] = "double_commas",
  [aux_sym_ctrl_group_group_token1] = "commas",
  [sym_ctrl_keyword] = "ctrl_keyword",
  [sym_ctrl_param] = "ctrl_param",
  [sym_bfi_start_token] = "bfi_start_token",
  [sym_str_start_token] = "str_start_token",
  [sym_frag_start_token] = "frag_start_token",
  [sym_s] = "s",
  [anon_sym_p] = "p",
  [aux_sym_p_token1] = "direction",
  [anon_sym_d] = "d",
  [aux_sym_d_token1] = "direction",
  [anon_sym_f] = "f",
  [aux_sym_f_token1] = "direction",
  [sym_orb_start_token] = "orb_start_token",
  [sym_aim_start_token] = "aim_start_token",
  [sym_filename] = "filename",
  [sym_gus_start_token] = "gus_start_token",
  [sym_scf_start_token] = "scf_start_token",
  [sym_geo_start_token] = "geo_start_token",
  [aux_sym_gaussian_format_atom_token1] = "atom_name",
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
  [aux_sym_d_token1] = aux_sym_p_token1,
  [anon_sym_f] = anon_sym_f,
  [aux_sym_f_token1] = aux_sym_p_token1,
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
    .visible = true,
    .named = false,
  },
  [aux_sym_ctrl_group_group_token1] = {
    .visible = true,
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
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_d_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_f_token1] = {
    .visible = true,
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
    .visible = true,
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
  field_charge = 1,
  field_end = 2,
  field_equal = 3,
  field_item = 4,
  field_items_list = 5,
  field_keyword = 6,
  field_num = 7,
  field_orbit = 8,
  field_param = 9,
  field_ratio = 10,
  field_start = 11,
  field_start_token = 12,
  field_structure_number = 13,
  field_times = 14,
  field_x = 15,
  field_y = 16,
  field_z = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_charge] = "charge",
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
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
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 3},
  [19] = {.index = 31, .length = 2},
  [20] = {.index = 33, .length = 4},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
  [1] =
    {field_item, 0},
  [2] =
    {field_items_list, 2},
    {field_start_token, 0},
  [4] =
    {field_item, 0, .inherited = true},
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
    {field_structure_number, 1},
  [23] =
    {field_structure_number, 0, .inherited = true},
    {field_structure_number, 1, .inherited = true},
  [25] =
    {field_param, 1},
  [26] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [28] =
    {field_x, 1},
    {field_y, 2},
    {field_z, 3},
  [31] =
    {field_orbit, 0, .inherited = true},
    {field_ratio, 0, .inherited = true},
  [33] =
    {field_charge, 1},
    {field_x, 2},
    {field_y, 3},
    {field_z, 4},
  [37] =
    {field_orbit, 1},
    {field_ratio, 0},
  [39] =
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 60,
  [72] = 72,
  [73] = 58,
  [74] = 74,
  [75] = 54,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 67,
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
  [96] = 69,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 82,
  [102] = 102,
  [103] = 86,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 102,
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
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 91,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != ',') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 47:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 48:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 49:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ';') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_end_token);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__line_ending);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_colon_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ctrl_start_token);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token2);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token3);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ctrl_param);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bfi_start_token);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_str_start_token);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_frag_start_token);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_s);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_p_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_d_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_f_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_orb_start_token);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_aim_start_token);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_gus_start_token);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_scf_start_token);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_geo_start_token);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 54},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 54},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 54},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 54},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 54},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 54},
  [94] = {.lex_state = 54},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 54},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 54},
  [103] = {.lex_state = 54},
  [104] = {.lex_state = 54},
  [105] = {.lex_state = 54},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 54},
  [108] = {.lex_state = 54},
  [109] = {.lex_state = 54},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 54},
  [113] = {.lex_state = 54},
  [114] = {.lex_state = 54},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 54},
  [117] = {.lex_state = 54},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 54},
  [122] = {.lex_state = 54},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 54},
  [126] = {.lex_state = 54},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 54},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 54},
  [132] = {.lex_state = 54},
  [133] = {.lex_state = 54},
  [134] = {.lex_state = 54},
  [135] = {.lex_state = 54},
  [136] = {.lex_state = 54},
  [137] = {.lex_state = 54},
  [138] = {.lex_state = 54},
  [139] = {.lex_state = 54},
  [140] = {.lex_state = 54},
  [141] = {.lex_state = 54},
  [142] = {.lex_state = 54},
  [143] = {.lex_state = 54},
  [144] = {.lex_state = 54},
  [145] = {.lex_state = 54},
  [146] = {.lex_state = 54},
  [147] = {.lex_state = 54},
  [148] = {.lex_state = 54},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 54},
  [151] = {.lex_state = 54},
  [152] = {.lex_state = 54},
  [153] = {.lex_state = 54},
  [154] = {.lex_state = 54},
  [155] = {.lex_state = 54},
  [156] = {.lex_state = 54},
  [157] = {.lex_state = 54},
  [158] = {.lex_state = 54},
  [159] = {.lex_state = 54},
  [160] = {.lex_state = 54},
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
    [sym_source_file] = STATE(116),
    [sym__section] = STATE(2),
    [sym_ctrl_section] = STATE(2),
    [sym_bfi_section] = STATE(2),
    [sym_str_section] = STATE(2),
    [sym_frag_section] = STATE(2),
    [sym_orb_section] = STATE(2),
    [sym_aim_section] = STATE(2),
    [sym_gus_section] = STATE(2),
    [sym_scf_section] = STATE(2),
    [sym_geo_section] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(5), 11,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_ctrl_start_token,
    ACTIONS(36), 1,
      sym_bfi_start_token,
    ACTIONS(39), 1,
      sym_str_start_token,
    ACTIONS(42), 1,
      sym_frag_start_token,
    ACTIONS(45), 1,
      sym_orb_start_token,
    ACTIONS(48), 1,
      sym_aim_start_token,
    ACTIONS(51), 1,
      sym_gus_start_token,
    ACTIONS(54), 1,
      sym_scf_start_token,
    ACTIONS(57), 1,
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
    ACTIONS(60), 1,
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
      sym_int,
    ACTIONS(64), 1,
      sym_s,
    ACTIONS(66), 1,
      anon_sym_p,
    ACTIONS(68), 1,
      anon_sym_d,
    ACTIONS(70), 1,
      anon_sym_f,
    STATE(113), 1,
      sym_frags,
    STATE(131), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(148), 1,
      sym_basis_function_description,
    STATE(154), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(7), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(101), 4,
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
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(64), 1,
      sym_s,
    ACTIONS(66), 1,
      anon_sym_p,
    ACTIONS(68), 1,
      anon_sym_d,
    ACTIONS(70), 1,
      anon_sym_f,
    ACTIONS(72), 1,
      sym_end_token,
    STATE(131), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(148), 1,
      sym_basis_function_description,
    STATE(154), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(8), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(101), 4,
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
    ACTIONS(74), 1,
      sym_end_token,
    ACTIONS(76), 1,
      sym_int,
    ACTIONS(79), 1,
      sym_s,
    ACTIONS(82), 1,
      anon_sym_p,
    ACTIONS(85), 1,
      anon_sym_d,
    ACTIONS(88), 1,
      anon_sym_f,
    STATE(131), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(148), 1,
      sym_basis_function_description,
    STATE(154), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(8), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(101), 4,
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
  [380] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(93), 1,
      sym_end_token,
    ACTIONS(95), 1,
      sym_int,
    STATE(18), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(160), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(34), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(82), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [410] = 3,
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
  [430] = 3,
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
  [450] = 3,
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
  [470] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(103), 10,
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
  [490] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(105), 10,
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
  [510] = 3,
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
  [530] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(109), 10,
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
  [550] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(111), 1,
      sym_end_token,
    ACTIONS(113), 1,
      sym_int,
    STATE(18), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(160), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(34), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(82), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [580] = 3,
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
  [600] = 3,
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
  [620] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(95), 1,
      sym_int,
    STATE(10), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(117), 1,
      sym_orbital_expansion,
    STATE(160), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(34), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(82), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [650] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(120), 1,
      sym_end_token,
    STATE(28), 1,
      aux_sym_gus_section_repeat1,
    STATE(151), 1,
      sym__ints_seperate1,
    STATE(153), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [679] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(122), 1,
      sym_end_token,
    ACTIONS(124), 1,
      sym_int,
    STATE(146), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(23), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [706] = 7,
    ACTIONS(127), 1,
      sym__space,
    ACTIONS(129), 1,
      sym_s,
    ACTIONS(132), 1,
      anon_sym_p,
    ACTIONS(135), 1,
      anon_sym_d,
    ACTIONS(138), 1,
      anon_sym_f,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(24), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [733] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(126), 1,
      sym_str_items_list,
    STATE(146), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(26), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [760] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(141), 1,
      sym_end_token,
    STATE(146), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(23), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [787] = 7,
    ACTIONS(66), 1,
      anon_sym_p,
    ACTIONS(68), 1,
      anon_sym_d,
    ACTIONS(70), 1,
      anon_sym_f,
    ACTIONS(143), 1,
      sym__space,
    ACTIONS(145), 1,
      sym_s,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(24), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [814] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(147), 1,
      sym_end_token,
    ACTIONS(149), 1,
      sym_int,
    STATE(28), 1,
      aux_sym_gus_section_repeat1,
    STATE(151), 1,
      sym__ints_seperate1,
    STATE(153), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [843] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(22), 1,
      aux_sym_gus_section_repeat1,
    STATE(151), 1,
      sym__ints_seperate1,
    STATE(153), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [869] = 9,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(152), 1,
      sym_end_token,
    ACTIONS(154), 1,
      sym_float,
    STATE(47), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(78), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(120), 1,
      sym__ratio_and_orbit_pair,
    STATE(121), 1,
      sym_functions_hybrid_list,
    STATE(140), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [898] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(134), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(154), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [921] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(143), 1,
      sym_NFROZ_and_NBAS,
    STATE(144), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [944] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(147), 1,
      sym_list_of_basis_functions,
    STATE(159), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(95), 1,
      sym_int,
    ACTIONS(156), 1,
      sym__line_ending,
    STATE(37), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(82), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [990] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(139), 1,
      sym__ints_seperate1,
    STATE(141), 1,
      sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1013] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(133), 1,
      sym__ints_seperate1,
    STATE(138), 1,
      sym_number_of_fragments,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(158), 1,
      sym__line_ending,
    ACTIONS(160), 1,
      sym_int,
    STATE(37), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(82), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1059] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    STATE(135), 1,
      sym_list_of_frozen_MOs,
    STATE(145), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(101), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1082] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(163), 1,
      sym_end_token,
    ACTIONS(165), 1,
      sym_float,
    STATE(39), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(78), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(120), 1,
      sym__ratio_and_orbit_pair,
    STATE(140), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1108] = 5,
    ACTIONS(168), 1,
      sym__space,
    ACTIONS(172), 1,
      aux_sym_p_token1,
    STATE(41), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(170), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1128] = 5,
    ACTIONS(174), 1,
      sym__space,
    ACTIONS(178), 1,
      aux_sym_p_token1,
    STATE(41), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(176), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1148] = 5,
    ACTIONS(181), 1,
      sym__space,
    ACTIONS(185), 1,
      aux_sym_d_token1,
    STATE(42), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(183), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1168] = 5,
    ACTIONS(188), 1,
      sym__space,
    ACTIONS(192), 1,
      aux_sym_f_token1,
    STATE(43), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(190), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1188] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(199), 1,
      aux_sym_d_token1,
    STATE(42), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(197), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1208] = 5,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      aux_sym_f_token1,
    STATE(43), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(203), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1228] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(207), 1,
      sym__line_ending,
    ACTIONS(209), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(211), 1,
      sym_ctrl_keyword,
    STATE(95), 1,
      sym_ctrl_item,
    STATE(125), 1,
      sym_ctrl_items_list,
    STATE(59), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1254] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(154), 1,
      sym_float,
    ACTIONS(213), 1,
      sym_end_token,
    STATE(39), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(78), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(120), 1,
      sym__ratio_and_orbit_pair,
    STATE(140), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1280] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(215), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1296] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(217), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1312] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(219), 1,
      sym_end_token,
    ACTIONS(221), 1,
      sym_float,
    STATE(56), 1,
      aux_sym_scf_section_repeat1,
    STATE(98), 1,
      aux_sym_coefficients_repeat1,
    STATE(149), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1335] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(223), 1,
      aux_sym_gaussian_format_atom_token1,
    STATE(114), 1,
      sym_atom_list,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(53), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1354] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(225), 1,
      sym_end_token,
    ACTIONS(227), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(52), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1373] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(223), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(230), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(52), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(236), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(54), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(232), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(234), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1413] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(239), 1,
      sym__line_ending,
    ACTIONS(242), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(245), 1,
      sym_ctrl_keyword,
    STATE(95), 1,
      sym_ctrl_item,
    STATE(55), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1436] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(248), 1,
      sym_end_token,
    ACTIONS(250), 1,
      sym_float,
    STATE(56), 1,
      aux_sym_scf_section_repeat1,
    STATE(98), 1,
      aux_sym_coefficients_repeat1,
    STATE(149), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1459] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(95), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(104), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(257), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(60), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(253), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(255), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1497] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(209), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(211), 1,
      sym_ctrl_keyword,
    ACTIONS(259), 1,
      sym__line_ending,
    STATE(95), 1,
      sym_ctrl_item,
    STATE(55), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(257), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(54), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(261), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(263), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1541] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(104), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1558] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(221), 1,
      sym_float,
    STATE(50), 1,
      aux_sym_scf_section_repeat1,
    STATE(98), 1,
      aux_sym_coefficients_repeat1,
    STATE(149), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(265), 1,
      sym__line_ending,
    ACTIONS(269), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(63), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(267), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(272), 1,
      sym__line_ending,
    ACTIONS(276), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(63), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(274), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(278), 1,
      sym__line_ending,
    ACTIONS(282), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(66), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(280), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(284), 1,
      sym__line_ending,
    ACTIONS(288), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(66), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(286), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__space,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 1,
      anon_sym_DASH,
    ACTIONS(291), 2,
      sym__line_ending,
      sym_int,
  [1678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(276), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(301), 1,
      sym__line_ending,
    STATE(64), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(303), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(305), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(307), 3,
      aux_sym_ctrl_group_item_token1,
      aux_sym_ctrl_group_group_token1,
      sym_ctrl_keyword,
  [1714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(284), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(286), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1729] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(261), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(309), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(75), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(311), 1,
      sym_end_token,
    ACTIONS(313), 1,
      sym__line_ending,
    ACTIONS(315), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1763] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(253), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(309), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(71), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1780] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(317), 1,
      sym__line_ending,
    ACTIONS(319), 1,
      sym_float,
    STATE(74), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(120), 1,
      sym__ratio_and_orbit_pair,
  [1799] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(232), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(322), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(75), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(325), 2,
      sym__line_ending,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(327), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(329), 1,
      sym__line_ending,
    ACTIONS(333), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(331), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(154), 1,
      sym_float,
    ACTIONS(335), 1,
      sym__line_ending,
    STATE(74), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(120), 1,
      sym__ratio_and_orbit_pair,
  [1867] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__line_ending,
    ACTIONS(293), 1,
      sym__space,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(337), 1,
      anon_sym_DASH,
  [1886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(339), 1,
      sym__line_ending,
    ACTIONS(341), 1,
      sym_float,
    STATE(80), 1,
      aux_sym_coefficients_repeat1,
  [1902] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(344), 1,
      sym_int,
    STATE(85), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__space,
    STATE(91), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(346), 2,
      sym__line_ending,
      sym_int,
  [1930] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(248), 2,
      sym_end_token,
      sym_float,
  [1942] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(147), 2,
      sym_end_token,
      sym_int,
  [1954] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(282), 1,
      aux_sym_ctrl_group_item_token3,
    STATE(65), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__space,
    STATE(86), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(350), 2,
      sym__line_ending,
      sym_int,
  [1982] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(355), 2,
      sym_end_token,
      sym_int,
  [1994] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(357), 1,
      aux_sym_p_token1,
    STATE(40), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2008] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(359), 1,
      aux_sym_d_token1,
    STATE(44), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2022] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(361), 1,
      aux_sym_f_token1,
    STATE(45), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__space,
    STATE(86), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(363), 2,
      sym__line_ending,
      sym_int,
  [2050] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(163), 2,
      sym_end_token,
      sym_float,
  [2062] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(365), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [2074] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(367), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [2086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(369), 1,
      sym__line_ending,
    ACTIONS(371), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [2100] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(305), 1,
      aux_sym_ctrl_group_item_token3,
    ACTIONS(307), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2114] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(373), 1,
      sym_int,
    STATE(70), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(375), 1,
      sym__line_ending,
    ACTIONS(377), 1,
      sym_float,
    STATE(80), 1,
      aux_sym_coefficients_repeat1,
  [2144] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(111), 2,
      sym_end_token,
      sym_int,
  [2156] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(379), 1,
      sym_filename,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__line_ending,
    ACTIONS(381), 1,
      sym__space,
    STATE(128), 1,
      aux_sym__ints_seperate1_repeat1,
  [2180] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(383), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__line_ending,
    ACTIONS(385), 1,
      sym__space,
    STATE(103), 1,
      aux_sym__ints_seperate1_repeat1,
  [2204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__space,
    ACTIONS(350), 2,
      sym__line_ending,
      sym_int,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__space,
    ACTIONS(390), 2,
      sym__line_ending,
      sym_int,
  [2226] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(394), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2237] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(396), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__space,
    ACTIONS(398), 2,
      sym__line_ending,
      sym_int,
  [2259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__space,
    ACTIONS(402), 2,
      sym__line_ending,
      sym_int,
  [2270] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(406), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2281] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(408), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2292] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(410), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2303] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(412), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2314] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(414), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2325] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(416), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2336] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2347] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(420), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(422), 2,
      sym__line_ending,
      sym_float,
  [2369] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(424), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(426), 2,
      sym__line_ending,
      sym_float,
  [2391] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(428), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2402] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(430), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(432), 1,
      sym__line_ending,
    ACTIONS(434), 1,
      sym_float,
  [2426] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(436), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2437] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(438), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2448] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(440), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2459] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(442), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym__line_ending,
    ACTIONS(381), 1,
      sym__space,
    STATE(103), 1,
      aux_sym__ints_seperate1_repeat1,
  [2483] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(444), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2494] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(446), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(448), 1,
      sym__line_ending,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(450), 1,
      sym__line_ending,
  [2525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(452), 1,
      sym__line_ending,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(454), 1,
      sym__line_ending,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(456), 1,
      sym__line_ending,
  [2555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(458), 1,
      sym__line_ending,
  [2565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(460), 1,
      sym__line_ending,
  [2575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(462), 1,
      sym__line_ending,
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(464), 1,
      sym__line_ending,
  [2595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(466), 1,
      sym__line_ending,
  [2605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(468), 1,
      sym__line_ending,
  [2615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(470), 1,
      sym__line_ending,
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(472), 1,
      sym__line_ending,
  [2635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(474), 1,
      sym__line_ending,
  [2645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(476), 1,
      sym__line_ending,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(478), 1,
      sym__line_ending,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(480), 1,
      sym__line_ending,
  [2675] = 2,
    ACTIONS(482), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(484), 1,
      sym__line_ending,
  [2693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(486), 1,
      sym__line_ending,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(488), 1,
      sym__line_ending,
  [2713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(490), 1,
      sym__line_ending,
  [2723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(492), 1,
      sym__line_ending,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(494), 1,
      sym__line_ending,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(496), 1,
      sym__line_ending,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(498), 1,
      sym__line_ending,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(500), 1,
      sym__line_ending,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(502), 1,
      sym__line_ending,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(504), 1,
      sym__line_ending,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(506), 1,
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
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 490,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 580,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 620,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 679,
  [SMALL_STATE(24)] = 706,
  [SMALL_STATE(25)] = 733,
  [SMALL_STATE(26)] = 760,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 814,
  [SMALL_STATE(29)] = 843,
  [SMALL_STATE(30)] = 869,
  [SMALL_STATE(31)] = 898,
  [SMALL_STATE(32)] = 921,
  [SMALL_STATE(33)] = 944,
  [SMALL_STATE(34)] = 967,
  [SMALL_STATE(35)] = 990,
  [SMALL_STATE(36)] = 1013,
  [SMALL_STATE(37)] = 1036,
  [SMALL_STATE(38)] = 1059,
  [SMALL_STATE(39)] = 1082,
  [SMALL_STATE(40)] = 1108,
  [SMALL_STATE(41)] = 1128,
  [SMALL_STATE(42)] = 1148,
  [SMALL_STATE(43)] = 1168,
  [SMALL_STATE(44)] = 1188,
  [SMALL_STATE(45)] = 1208,
  [SMALL_STATE(46)] = 1228,
  [SMALL_STATE(47)] = 1254,
  [SMALL_STATE(48)] = 1280,
  [SMALL_STATE(49)] = 1296,
  [SMALL_STATE(50)] = 1312,
  [SMALL_STATE(51)] = 1335,
  [SMALL_STATE(52)] = 1354,
  [SMALL_STATE(53)] = 1373,
  [SMALL_STATE(54)] = 1392,
  [SMALL_STATE(55)] = 1413,
  [SMALL_STATE(56)] = 1436,
  [SMALL_STATE(57)] = 1459,
  [SMALL_STATE(58)] = 1476,
  [SMALL_STATE(59)] = 1497,
  [SMALL_STATE(60)] = 1520,
  [SMALL_STATE(61)] = 1541,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1578,
  [SMALL_STATE(64)] = 1598,
  [SMALL_STATE(65)] = 1618,
  [SMALL_STATE(66)] = 1638,
  [SMALL_STATE(67)] = 1658,
  [SMALL_STATE(68)] = 1678,
  [SMALL_STATE(69)] = 1698,
  [SMALL_STATE(70)] = 1714,
  [SMALL_STATE(71)] = 1729,
  [SMALL_STATE(72)] = 1746,
  [SMALL_STATE(73)] = 1763,
  [SMALL_STATE(74)] = 1780,
  [SMALL_STATE(75)] = 1799,
  [SMALL_STATE(76)] = 1816,
  [SMALL_STATE(77)] = 1831,
  [SMALL_STATE(78)] = 1848,
  [SMALL_STATE(79)] = 1867,
  [SMALL_STATE(80)] = 1886,
  [SMALL_STATE(81)] = 1902,
  [SMALL_STATE(82)] = 1916,
  [SMALL_STATE(83)] = 1930,
  [SMALL_STATE(84)] = 1942,
  [SMALL_STATE(85)] = 1954,
  [SMALL_STATE(86)] = 1968,
  [SMALL_STATE(87)] = 1982,
  [SMALL_STATE(88)] = 1994,
  [SMALL_STATE(89)] = 2008,
  [SMALL_STATE(90)] = 2022,
  [SMALL_STATE(91)] = 2036,
  [SMALL_STATE(92)] = 2050,
  [SMALL_STATE(93)] = 2062,
  [SMALL_STATE(94)] = 2074,
  [SMALL_STATE(95)] = 2086,
  [SMALL_STATE(96)] = 2100,
  [SMALL_STATE(97)] = 2114,
  [SMALL_STATE(98)] = 2128,
  [SMALL_STATE(99)] = 2144,
  [SMALL_STATE(100)] = 2156,
  [SMALL_STATE(101)] = 2167,
  [SMALL_STATE(102)] = 2180,
  [SMALL_STATE(103)] = 2191,
  [SMALL_STATE(104)] = 2204,
  [SMALL_STATE(105)] = 2215,
  [SMALL_STATE(106)] = 2226,
  [SMALL_STATE(107)] = 2237,
  [SMALL_STATE(108)] = 2248,
  [SMALL_STATE(109)] = 2259,
  [SMALL_STATE(110)] = 2270,
  [SMALL_STATE(111)] = 2281,
  [SMALL_STATE(112)] = 2292,
  [SMALL_STATE(113)] = 2303,
  [SMALL_STATE(114)] = 2314,
  [SMALL_STATE(115)] = 2325,
  [SMALL_STATE(116)] = 2336,
  [SMALL_STATE(117)] = 2347,
  [SMALL_STATE(118)] = 2358,
  [SMALL_STATE(119)] = 2369,
  [SMALL_STATE(120)] = 2380,
  [SMALL_STATE(121)] = 2391,
  [SMALL_STATE(122)] = 2402,
  [SMALL_STATE(123)] = 2413,
  [SMALL_STATE(124)] = 2426,
  [SMALL_STATE(125)] = 2437,
  [SMALL_STATE(126)] = 2448,
  [SMALL_STATE(127)] = 2459,
  [SMALL_STATE(128)] = 2470,
  [SMALL_STATE(129)] = 2483,
  [SMALL_STATE(130)] = 2494,
  [SMALL_STATE(131)] = 2505,
  [SMALL_STATE(132)] = 2515,
  [SMALL_STATE(133)] = 2525,
  [SMALL_STATE(134)] = 2535,
  [SMALL_STATE(135)] = 2545,
  [SMALL_STATE(136)] = 2555,
  [SMALL_STATE(137)] = 2565,
  [SMALL_STATE(138)] = 2575,
  [SMALL_STATE(139)] = 2585,
  [SMALL_STATE(140)] = 2595,
  [SMALL_STATE(141)] = 2605,
  [SMALL_STATE(142)] = 2615,
  [SMALL_STATE(143)] = 2625,
  [SMALL_STATE(144)] = 2635,
  [SMALL_STATE(145)] = 2645,
  [SMALL_STATE(146)] = 2655,
  [SMALL_STATE(147)] = 2665,
  [SMALL_STATE(148)] = 2675,
  [SMALL_STATE(149)] = 2683,
  [SMALL_STATE(150)] = 2693,
  [SMALL_STATE(151)] = 2703,
  [SMALL_STATE(152)] = 2713,
  [SMALL_STATE(153)] = 2723,
  [SMALL_STATE(154)] = 2733,
  [SMALL_STATE(155)] = 2743,
  [SMALL_STATE(156)] = 2753,
  [SMALL_STATE(157)] = 2763,
  [SMALL_STATE(158)] = 2773,
  [SMALL_STATE(159)] = 2783,
  [SMALL_STATE(160)] = 2793,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frags, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(79),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(27),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(88),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(89),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orb_section, 6, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_expansion, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aim_section, 5, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_section, 4, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_section, 6, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 9, .production_id = 8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scf_section, 4, .production_id = 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_section, 4, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gus_section, 4, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2), SHIFT_REPEAT(67),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 8, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_section, 4, .production_id = 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2), SHIFT_REPEAT(79),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basis_function_description_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(24),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(88),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(89),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(90),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_items_list, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_function_description, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2), SHIFT_REPEAT(79),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indices_of_basis_functions, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2), SHIFT_REPEAT(67),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2), SHIFT_REPEAT(122),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(41),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_d_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2), SHIFT_REPEAT(42),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_f_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2), SHIFT_REPEAT(43),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_d, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_d, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_hybrid_list, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2), SHIFT_REPEAT(115),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_list, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 15),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 15), SHIFT_REPEAT(102),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(55),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(124),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(77),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2), SHIFT_REPEAT(98),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 9),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 11),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 11),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 17),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 17),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 17), SHIFT_REPEAT(110),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 4, .production_id = 13),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 4, .production_id = 13),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 12),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 12),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2), SHIFT_REPEAT(97),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_int, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_int, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 3, .production_id = 10),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 3, .production_id = 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 14),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 14),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_items_list, 2, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 22),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 22), SHIFT_REPEAT(122),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 15), SHIFT_REPEAT(107),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 16),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 16),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_function_composition, 1, .production_id = 19),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2), SHIFT_REPEAT(80),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(57),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VB_structures_or_determinants, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamess_format_atom, 6, .production_id = 20),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaussian_format_atom, 5, .production_id = 18),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coefficients, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(61),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_minor, 3, .production_id = 6),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_minor, 3, .production_id = 6),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_asterisk, 3, .production_id = 7),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_asterisk, 3, .production_id = 7),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_colon, 3, .production_id = 6),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_colon, 3, .production_id = 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [418] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ratio_and_orbit_pair, 2, .production_id = 21),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 1, .production_id = 19),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_fragments, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NFROZ_and_NBAS, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_frozen_MOs, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guess_from_MOs, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_atom_or_basis_function_in_the_fragment, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_basis_functions, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
