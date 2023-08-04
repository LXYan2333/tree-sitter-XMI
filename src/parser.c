#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 22

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
  anon_sym_EQ = 13,
  aux_sym_ctrl_group_item_token2 = 14,
  aux_sym_ctrl_group_group_token1 = 15,
  aux_sym_ctrl_str_item_token1 = 16,
  sym_ctrl_keyword = 17,
  sym_ctrl_param = 18,
  sym_bfi_start_token = 19,
  sym_str_start_token = 20,
  sym_frag_start_token = 21,
  sym_s = 22,
  anon_sym_p = 23,
  aux_sym_p_token1 = 24,
  anon_sym_d = 25,
  aux_sym_d_token1 = 26,
  anon_sym_f = 27,
  aux_sym_f_token1 = 28,
  sym_orb_start_token = 29,
  sym_aim_start_token = 30,
  sym_filename = 31,
  sym_gus_start_token = 32,
  sym_scf_start_token = 33,
  sym_geo_start_token = 34,
  aux_sym_gaussian_format_atom_token1 = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym_int_colon = 38,
  sym_int_asterisk = 39,
  sym_int_minor = 40,
  sym__abstract_int = 41,
  sym__ints_seperate1 = 42,
  sym__section = 43,
  sym_ctrl_section = 44,
  sym_ctrl_items_list = 45,
  sym_ctrl_group_item = 46,
  sym_ctrl_group_group = 47,
  sym_ctrl_item = 48,
  sym_bfi_section = 49,
  sym_NFROZ_and_NBAS = 50,
  sym_list_of_frozen_MOs = 51,
  sym_list_of_basis_functions = 52,
  sym_functions_hybrid_list = 53,
  sym_basis_function_composition = 54,
  sym__ratio_and_orbit_pair = 55,
  sym_str_section = 56,
  sym_str_items_list = 57,
  sym_VB_structures_or_determinants = 58,
  sym_frag_section = 59,
  sym_number_of_fragments = 60,
  sym_frags = 61,
  sym_frag_description = 62,
  sym_basis_function_description = 63,
  sym__basis_function = 64,
  sym_p = 65,
  sym_d = 66,
  sym_f = 67,
  sym_number_of_atom_or_basis_function_in_the_fragment = 68,
  sym_orb_section = 69,
  sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals = 70,
  sym_orbital_expansion = 71,
  sym_indices_of_basis_functions = 72,
  sym_aim_section = 73,
  sym_gus_section = 74,
  sym_guess_from_MOs = 75,
  sym_scf_section = 76,
  sym_coefficients = 77,
  sym_geo_section = 78,
  sym_atom_list = 79,
  sym_gaussian_format_atom = 80,
  sym_gamess_format_atom = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym__ints_seperate1_repeat1 = 83,
  aux_sym_ctrl_items_list_repeat1 = 84,
  aux_sym_ctrl_group_item_repeat1 = 85,
  aux_sym_ctrl_group_group_repeat1 = 86,
  aux_sym_ctrl_item_repeat1 = 87,
  aux_sym_functions_hybrid_list_repeat1 = 88,
  aux_sym_basis_function_composition_repeat1 = 89,
  aux_sym_str_items_list_repeat1 = 90,
  aux_sym_frags_repeat1 = 91,
  aux_sym_basis_function_description_repeat1 = 92,
  aux_sym_p_repeat1 = 93,
  aux_sym_d_repeat1 = 94,
  aux_sym_f_repeat1 = 95,
  aux_sym_orbital_expansion_repeat1 = 96,
  aux_sym_indices_of_basis_functions_repeat1 = 97,
  aux_sym_gus_section_repeat1 = 98,
  aux_sym_scf_section_repeat1 = 99,
  aux_sym_coefficients_repeat1 = 100,
  aux_sym_atom_list_repeat1 = 101,
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
  [anon_sym_EQ] = "=",
  [aux_sym_ctrl_group_item_token2] = "double_commas",
  [aux_sym_ctrl_group_group_token1] = "commas",
  [aux_sym_ctrl_str_item_token1] = "ctrl_str_item_token1",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_ctrl_group_item_token2] = aux_sym_ctrl_group_item_token2,
  [aux_sym_ctrl_group_group_token1] = aux_sym_ctrl_group_group_token1,
  [aux_sym_ctrl_str_item_token1] = aux_sym_ctrl_str_item_token1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ctrl_group_item_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ctrl_group_group_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ctrl_str_item_token1] = {
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
};

enum {
  field_charge = 1,
  field_end = 2,
  field_item = 3,
  field_items_list = 4,
  field_keyword = 5,
  field_num = 6,
  field_orbit = 7,
  field_param = 8,
  field_ratio = 9,
  field_start = 10,
  field_start_token = 11,
  field_structure_number = 12,
  field_times = 13,
  field_x = 14,
  field_y = 15,
  field_z = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_charge] = "charge",
  [field_end] = "end",
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
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 3},
  [18] = {.index = 29, .length = 4},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 4},
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
    {field_start_token, 0},
  [8] =
    {field_structure_number, 0},
  [9] =
    {field_keyword, 0},
    {field_param, 2},
  [11] =
    {field_end, 2},
    {field_start, 0},
  [13] =
    {field_num, 0},
    {field_times, 2},
  [15] =
    {field_structure_number, 0},
    {field_structure_number, 1, .inherited = true},
  [17] =
    {field_keyword, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [20] =
    {field_structure_number, 1},
  [21] =
    {field_structure_number, 0, .inherited = true},
    {field_structure_number, 1, .inherited = true},
  [23] =
    {field_param, 1},
  [24] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [26] =
    {field_x, 1},
    {field_y, 2},
    {field_z, 3},
  [29] =
    {field_charge, 1},
    {field_x, 2},
    {field_y, 3},
    {field_z, 4},
  [33] =
    {field_orbit, 0, .inherited = true},
    {field_ratio, 0, .inherited = true},
  [35] =
    {field_orbit, 1},
    {field_ratio, 0},
  [37] =
    {field_orbit, 0, .inherited = true},
    {field_orbit, 1, .inherited = true},
    {field_ratio, 0, .inherited = true},
    {field_ratio, 1, .inherited = true},
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 42,
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
  [59] = 44,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 41,
  [64] = 64,
  [65] = 56,
  [66] = 66,
  [67] = 67,
  [68] = 49,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 58,
  [75] = 75,
  [76] = 76,
  [77] = 77,
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
  [97] = 69,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 98,
  [107] = 107,
  [108] = 89,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 90,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
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
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(102);
      if (lookahead == 'S') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(24);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 45:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 46:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 47:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ';') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_end_token);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__line_ending);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_int_colon_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ctrl_start_token);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token1);
      END_STATE();
    case 71:
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
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token2);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ',') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ctrl_str_item_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 81:
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
          lookahead != '=') ADVANCE(81);
      END_STATE();
    case 82:
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
          lookahead != '=') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_bfi_start_token);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_str_start_token);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_frag_start_token);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_s);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_s);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_p_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_d_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_f_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_orb_start_token);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_aim_start_token);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(107);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_gus_start_token);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_scf_start_token);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_geo_start_token);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'R') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 't') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 50},
  [72] = {.lex_state = 50},
  [73] = {.lex_state = 50},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 50},
  [81] = {.lex_state = 50},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 50},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 50},
  [88] = {.lex_state = 50},
  [89] = {.lex_state = 50},
  [90] = {.lex_state = 50},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 50},
  [93] = {.lex_state = 50},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 50},
  [97] = {.lex_state = 50},
  [98] = {.lex_state = 50},
  [99] = {.lex_state = 50},
  [100] = {.lex_state = 50},
  [101] = {.lex_state = 50},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 50},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 50},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 50},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 50},
  [113] = {.lex_state = 50},
  [114] = {.lex_state = 50},
  [115] = {.lex_state = 50},
  [116] = {.lex_state = 50},
  [117] = {.lex_state = 50},
  [118] = {.lex_state = 50},
  [119] = {.lex_state = 50},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 50},
  [122] = {.lex_state = 50},
  [123] = {.lex_state = 50},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 50},
  [127] = {.lex_state = 50},
  [128] = {.lex_state = 50},
  [129] = {.lex_state = 50},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 50},
  [133] = {.lex_state = 50},
  [134] = {.lex_state = 50},
  [135] = {.lex_state = 50},
  [136] = {.lex_state = 50},
  [137] = {.lex_state = 50},
  [138] = {.lex_state = 50},
  [139] = {.lex_state = 50},
  [140] = {.lex_state = 50},
  [141] = {.lex_state = 50},
  [142] = {.lex_state = 50},
  [143] = {.lex_state = 50},
  [144] = {.lex_state = 50},
  [145] = {.lex_state = 50},
  [146] = {.lex_state = 50},
  [147] = {.lex_state = 50},
  [148] = {.lex_state = 50},
  [149] = {.lex_state = 50},
  [150] = {.lex_state = 50},
  [151] = {.lex_state = 50},
  [152] = {.lex_state = 50},
  [153] = {.lex_state = 50},
  [154] = {.lex_state = 50},
  [155] = {.lex_state = 50},
  [156] = {.lex_state = 50},
  [157] = {.lex_state = 50},
  [158] = {.lex_state = 50},
  [159] = {.lex_state = 50},
  [160] = {.lex_state = 50},
  [161] = {.lex_state = 50},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 50},
  [164] = {.lex_state = 50},
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
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_ctrl_group_item_token2] = ACTIONS(1),
    [aux_sym_ctrl_group_group_token1] = ACTIONS(1),
    [aux_sym_ctrl_str_item_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(99),
    [sym_explanation] = ACTIONS(7),
    [sym__line_ending] = ACTIONS(3),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
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
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(133), 10,
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
  [50] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(29), 1,
      sym_end_token,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(33), 1,
      sym_s,
    ACTIONS(35), 1,
      anon_sym_p,
    ACTIONS(37), 1,
      anon_sym_d,
    ACTIONS(39), 1,
      anon_sym_f,
    STATE(161), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(162), 1,
      sym_basis_function_description,
    STATE(163), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(5), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(14), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [102] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(33), 1,
      sym_s,
    ACTIONS(35), 1,
      anon_sym_p,
    ACTIONS(37), 1,
      anon_sym_d,
    ACTIONS(39), 1,
      anon_sym_f,
    STATE(100), 1,
      sym_frags,
    STATE(161), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(162), 1,
      sym_basis_function_description,
    STATE(163), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(3), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(14), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [154] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(41), 1,
      sym_end_token,
    ACTIONS(43), 1,
      sym_int,
    ACTIONS(46), 1,
      sym_s,
    ACTIONS(49), 1,
      anon_sym_p,
    ACTIONS(52), 1,
      anon_sym_d,
    ACTIONS(55), 1,
      anon_sym_f,
    STATE(161), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(162), 1,
      sym_basis_function_description,
    STATE(163), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(5), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(14), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [206] = 13,
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
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(133), 10,
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
  [256] = 12,
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
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(133), 10,
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
  [303] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(60), 1,
      sym_end_token,
    ACTIONS(62), 1,
      sym_int,
    STATE(8), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(154), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(19), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(90), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [333] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(65), 1,
      sym_int,
    STATE(10), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(101), 1,
      sym_orbital_expansion,
    STATE(154), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(19), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(90), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [363] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(65), 1,
      sym_int,
    ACTIONS(67), 1,
      sym_end_token,
    STATE(8), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(154), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(19), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(90), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [393] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(69), 1,
      sym_end_token,
    ACTIONS(71), 1,
      sym_int,
    STATE(145), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(11), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [420] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(74), 1,
      sym_end_token,
    ACTIONS(76), 1,
      sym_int,
    STATE(12), 1,
      aux_sym_gus_section_repeat1,
    STATE(157), 1,
      sym__ints_seperate1,
    STATE(159), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [449] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(79), 1,
      sym_end_token,
    STATE(12), 1,
      aux_sym_gus_section_repeat1,
    STATE(157), 1,
      sym__ints_seperate1,
    STATE(159), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [478] = 7,
    ACTIONS(35), 1,
      anon_sym_p,
    ACTIONS(37), 1,
      anon_sym_d,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(81), 1,
      sym__space,
    ACTIONS(83), 1,
      sym_s,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(16), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [505] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(85), 1,
      sym_end_token,
    STATE(145), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(11), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [532] = 7,
    ACTIONS(87), 1,
      sym__space,
    ACTIONS(89), 1,
      sym_s,
    ACTIONS(92), 1,
      anon_sym_p,
    ACTIONS(95), 1,
      anon_sym_d,
    ACTIONS(98), 1,
      anon_sym_f,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(16), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [559] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(93), 1,
      sym_str_items_list,
    STATE(145), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(15), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [586] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(13), 1,
      aux_sym_gus_section_repeat1,
    STATE(157), 1,
      sym__ints_seperate1,
    STATE(159), 1,
      sym_guess_from_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(65), 1,
      sym_int,
    ACTIONS(101), 1,
      sym__line_ending,
    STATE(27), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(90), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [635] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(135), 1,
      sym_list_of_basis_functions,
    STATE(138), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [658] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(142), 1,
      sym__ints_seperate1,
    STATE(164), 1,
      sym_list_of_frozen_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [681] = 9,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(103), 1,
      sym_end_token,
    ACTIONS(105), 1,
      sym_float,
    STATE(29), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(66), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(111), 1,
      sym__ratio_and_orbit_pair,
    STATE(112), 1,
      sym_functions_hybrid_list,
    STATE(146), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [710] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(143), 1,
      sym__ints_seperate1,
    STATE(144), 1,
      sym_NFROZ_and_NBAS,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [733] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(134), 1,
      sym_number_of_fragments,
    STATE(147), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [756] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(150), 1,
      sym__ints_seperate1,
    STATE(151), 1,
      sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [779] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(137), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(163), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(107), 1,
      sym__line_ending,
    ACTIONS(109), 1,
      sym_int,
    STATE(27), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(90), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [825] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(112), 1,
      sym__line_ending,
    ACTIONS(114), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(116), 1,
      sym_ctrl_keyword,
    STATE(78), 1,
      sym_ctrl_item,
    STATE(123), 1,
      sym_ctrl_items_list,
    STATE(40), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [851] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(105), 1,
      sym_float,
    ACTIONS(118), 1,
      sym_end_token,
    STATE(32), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(66), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(111), 1,
      sym__ratio_and_orbit_pair,
    STATE(146), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [877] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(120), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [893] = 5,
    ACTIONS(122), 1,
      sym__space,
    ACTIONS(126), 1,
      aux_sym_d_token1,
    STATE(31), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(124), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [913] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(129), 1,
      sym_end_token,
    ACTIONS(131), 1,
      sym_float,
    STATE(32), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(66), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(111), 1,
      sym__ratio_and_orbit_pair,
    STATE(146), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [939] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(134), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [955] = 5,
    ACTIONS(136), 1,
      sym__space,
    ACTIONS(140), 1,
      aux_sym_f_token1,
    STATE(34), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(138), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [975] = 5,
    ACTIONS(143), 1,
      sym__space,
    ACTIONS(147), 1,
      aux_sym_f_token1,
    STATE(34), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(145), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [995] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(153), 1,
      aux_sym_d_token1,
    STATE(31), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(151), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1015] = 5,
    ACTIONS(155), 1,
      sym__space,
    ACTIONS(159), 1,
      aux_sym_p_token1,
    STATE(38), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(157), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1035] = 5,
    ACTIONS(161), 1,
      sym__space,
    ACTIONS(165), 1,
      aux_sym_p_token1,
    STATE(38), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(163), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1055] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(168), 1,
      aux_sym_gaussian_format_atom_token1,
    STATE(128), 1,
      sym_atom_list,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(47), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1074] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(114), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(116), 1,
      sym_ctrl_keyword,
    ACTIONS(170), 1,
      sym__line_ending,
    STATE(78), 1,
      sym_ctrl_item,
    STATE(50), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(176), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(41), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(172), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(174), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1118] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(65), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(96), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1135] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(179), 1,
      sym_end_token,
    ACTIONS(181), 1,
      sym_float,
    STATE(48), 1,
      aux_sym_scf_section_repeat1,
    STATE(85), 1,
      aux_sym_coefficients_repeat1,
    STATE(149), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(187), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(49), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(183), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(185), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1179] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(96), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1196] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(189), 1,
      sym_end_token,
    ACTIONS(191), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(46), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1215] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(168), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(194), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(46), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1234] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(196), 1,
      sym_end_token,
    ACTIONS(198), 1,
      sym_float,
    STATE(48), 1,
      aux_sym_scf_section_repeat1,
    STATE(85), 1,
      aux_sym_coefficients_repeat1,
    STATE(149), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(187), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(41), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(201), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(203), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__line_ending,
    ACTIONS(208), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(211), 1,
      sym_ctrl_keyword,
    STATE(78), 1,
      sym_ctrl_item,
    STATE(50), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(214), 1,
      sym__line_ending,
    ACTIONS(218), 1,
      aux_sym_ctrl_group_item_token2,
    STATE(51), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(216), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(221), 1,
      sym__line_ending,
    ACTIONS(225), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(57), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(223), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__line_ending,
    ACTIONS(231), 1,
      aux_sym_ctrl_group_item_token2,
    STATE(51), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(229), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1361] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(181), 1,
      sym_float,
    STATE(43), 1,
      aux_sym_scf_section_repeat1,
    STATE(85), 1,
      aux_sym_coefficients_repeat1,
    STATE(149), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1381] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(225), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(233), 1,
      sym__line_ending,
    STATE(52), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(235), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__space,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      anon_sym_DASH,
    ACTIONS(237), 2,
      sym__line_ending,
      sym_int,
  [1421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(247), 1,
      sym__line_ending,
    ACTIONS(251), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(57), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(249), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(254), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(256), 3,
      aux_sym_ctrl_group_item_token1,
      aux_sym_ctrl_group_group_token1,
      sym_ctrl_keyword,
  [1457] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(183), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(258), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(68), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(260), 1,
      sym__line_ending,
    ACTIONS(262), 1,
      sym_float,
    STATE(60), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(111), 1,
      sym__ratio_and_orbit_pair,
  [1493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(265), 2,
      sym__line_ending,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(267), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(214), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(216), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1523] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(172), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(269), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(63), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(272), 1,
      sym__line_ending,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(274), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__line_ending,
    ACTIONS(239), 1,
      sym__space,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      anon_sym_DASH,
  [1576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(105), 1,
      sym_float,
    ACTIONS(280), 1,
      sym__line_ending,
    STATE(60), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(111), 1,
      sym__ratio_and_orbit_pair,
  [1595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(282), 1,
      sym_end_token,
    ACTIONS(284), 1,
      sym__line_ending,
    ACTIONS(286), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1612] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(201), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(258), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(63), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(288), 2,
      sym__line_ending,
      sym_int,
  [1643] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(293), 1,
      aux_sym_d_token1,
    STATE(36), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym__line_ending,
    STATE(71), 1,
      aux_sym_source_file_repeat1,
  [1673] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(300), 2,
      sym_end_token,
      sym_int,
  [1685] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(302), 1,
      sym_int,
    STATE(82), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1699] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(254), 1,
      aux_sym_ctrl_group_item_token2,
    ACTIONS(256), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1713] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(74), 2,
      sym_end_token,
      sym_int,
  [1725] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(60), 2,
      sym_end_token,
      sym_int,
  [1737] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(196), 2,
      sym_end_token,
      sym_float,
  [1749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(304), 1,
      sym__line_ending,
    ACTIONS(306), 2,
      aux_sym_ctrl_group_item_token1,
      sym_ctrl_keyword,
  [1763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(308), 1,
      sym__line_ending,
    ACTIONS(310), 1,
      sym_float,
    STATE(79), 1,
      aux_sym_coefficients_repeat1,
  [1779] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(313), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [1791] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(315), 1,
      sym_int,
    STATE(62), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1805] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(231), 1,
      aux_sym_ctrl_group_item_token2,
    STATE(53), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      sym__line_ending,
    STATE(87), 1,
      aux_sym_source_file_repeat1,
  [1835] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(321), 1,
      aux_sym_f_token1,
    STATE(35), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(323), 1,
      sym__line_ending,
    ACTIONS(325), 1,
      sym_float,
    STATE(79), 1,
      aux_sym_coefficients_repeat1,
  [1865] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(129), 2,
      sym_end_token,
      sym_float,
  [1877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      sym__line_ending,
    STATE(71), 1,
      aux_sym_source_file_repeat1,
  [1893] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(329), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [1905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(331), 2,
      sym__line_ending,
      sym_int,
  [1919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__space,
    STATE(89), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(335), 2,
      sym__line_ending,
      sym_int,
  [1933] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(337), 1,
      aux_sym_p_token1,
    STATE(37), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [1958] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(341), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    ACTIONS(343), 2,
      sym__line_ending,
      sym_int,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__space,
    ACTIONS(347), 2,
      sym__line_ending,
      sym_int,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__space,
    ACTIONS(288), 2,
      sym__line_ending,
      sym_int,
  [2002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__line_ending,
    ACTIONS(353), 1,
      sym__space,
    STATE(97), 1,
      aux_sym__ints_seperate1_repeat1,
  [2015] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(356), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2026] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2037] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(360), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2048] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(362), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2059] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(364), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(366), 2,
      sym__line_ending,
      sym_float,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2092] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(370), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2103] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(372), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2114] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(374), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__line_ending,
    ACTIONS(376), 1,
      sym__space,
    STATE(97), 1,
      aux_sym__ints_seperate1_repeat1,
  [2138] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(378), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2149] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(380), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(382), 2,
      sym__line_ending,
      sym_float,
  [2171] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(384), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__space,
    ACTIONS(386), 2,
      sym__line_ending,
      sym_int,
  [2193] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(390), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__line_ending,
    ACTIONS(376), 1,
      sym__space,
    STATE(108), 1,
      aux_sym__ints_seperate1_repeat1,
  [2250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2261] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(400), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2294] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(406), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2305] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(408), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(410), 1,
      sym__line_ending,
    ACTIONS(412), 1,
      sym_float,
  [2329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2340] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(416), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2351] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(418), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2362] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(420), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2373] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(422), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2384] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(424), 1,
      sym_filename,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(428), 1,
      sym__line_ending,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(430), 1,
      sym__line_ending,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(432), 1,
      sym__line_ending,
  [2447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(434), 1,
      sym__line_ending,
  [2457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(436), 1,
      sym__line_ending,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(438), 1,
      sym__line_ending,
  [2477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(440), 1,
      sym__line_ending,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(442), 1,
      sym__line_ending,
  [2497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(444), 1,
      sym__line_ending,
  [2507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(446), 1,
      sym__line_ending,
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(448), 1,
      sym__line_ending,
  [2527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(450), 1,
      sym__line_ending,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(452), 1,
      sym__line_ending,
  [2547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(454), 1,
      sym__line_ending,
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(456), 1,
      sym__line_ending,
  [2567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(458), 1,
      sym__line_ending,
  [2577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(460), 1,
      sym__line_ending,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(462), 1,
      sym__line_ending,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(464), 1,
      sym__line_ending,
  [2607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(466), 1,
      sym__line_ending,
  [2617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(468), 1,
      sym__line_ending,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(470), 1,
      sym__line_ending,
  [2637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(472), 1,
      sym__line_ending,
  [2647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(474), 1,
      sym__line_ending,
  [2657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(476), 1,
      sym__line_ending,
  [2667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(478), 1,
      sym__line_ending,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(480), 1,
      sym__line_ending,
  [2687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(482), 1,
      sym__line_ending,
  [2697] = 2,
    ACTIONS(484), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(486), 1,
      sym__line_ending,
  [2715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(488), 1,
      sym__line_ending,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 532,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 586,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 710,
  [SMALL_STATE(24)] = 733,
  [SMALL_STATE(25)] = 756,
  [SMALL_STATE(26)] = 779,
  [SMALL_STATE(27)] = 802,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 851,
  [SMALL_STATE(30)] = 877,
  [SMALL_STATE(31)] = 893,
  [SMALL_STATE(32)] = 913,
  [SMALL_STATE(33)] = 939,
  [SMALL_STATE(34)] = 955,
  [SMALL_STATE(35)] = 975,
  [SMALL_STATE(36)] = 995,
  [SMALL_STATE(37)] = 1015,
  [SMALL_STATE(38)] = 1035,
  [SMALL_STATE(39)] = 1055,
  [SMALL_STATE(40)] = 1074,
  [SMALL_STATE(41)] = 1097,
  [SMALL_STATE(42)] = 1118,
  [SMALL_STATE(43)] = 1135,
  [SMALL_STATE(44)] = 1158,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1215,
  [SMALL_STATE(48)] = 1234,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1278,
  [SMALL_STATE(51)] = 1301,
  [SMALL_STATE(52)] = 1321,
  [SMALL_STATE(53)] = 1341,
  [SMALL_STATE(54)] = 1361,
  [SMALL_STATE(55)] = 1381,
  [SMALL_STATE(56)] = 1401,
  [SMALL_STATE(57)] = 1421,
  [SMALL_STATE(58)] = 1441,
  [SMALL_STATE(59)] = 1457,
  [SMALL_STATE(60)] = 1474,
  [SMALL_STATE(61)] = 1493,
  [SMALL_STATE(62)] = 1508,
  [SMALL_STATE(63)] = 1523,
  [SMALL_STATE(64)] = 1540,
  [SMALL_STATE(65)] = 1557,
  [SMALL_STATE(66)] = 1576,
  [SMALL_STATE(67)] = 1595,
  [SMALL_STATE(68)] = 1612,
  [SMALL_STATE(69)] = 1629,
  [SMALL_STATE(70)] = 1643,
  [SMALL_STATE(71)] = 1657,
  [SMALL_STATE(72)] = 1673,
  [SMALL_STATE(73)] = 1685,
  [SMALL_STATE(74)] = 1699,
  [SMALL_STATE(75)] = 1713,
  [SMALL_STATE(76)] = 1725,
  [SMALL_STATE(77)] = 1737,
  [SMALL_STATE(78)] = 1749,
  [SMALL_STATE(79)] = 1763,
  [SMALL_STATE(80)] = 1779,
  [SMALL_STATE(81)] = 1791,
  [SMALL_STATE(82)] = 1805,
  [SMALL_STATE(83)] = 1819,
  [SMALL_STATE(84)] = 1835,
  [SMALL_STATE(85)] = 1849,
  [SMALL_STATE(86)] = 1865,
  [SMALL_STATE(87)] = 1877,
  [SMALL_STATE(88)] = 1893,
  [SMALL_STATE(89)] = 1905,
  [SMALL_STATE(90)] = 1919,
  [SMALL_STATE(91)] = 1933,
  [SMALL_STATE(92)] = 1947,
  [SMALL_STATE(93)] = 1958,
  [SMALL_STATE(94)] = 1969,
  [SMALL_STATE(95)] = 1980,
  [SMALL_STATE(96)] = 1991,
  [SMALL_STATE(97)] = 2002,
  [SMALL_STATE(98)] = 2015,
  [SMALL_STATE(99)] = 2026,
  [SMALL_STATE(100)] = 2037,
  [SMALL_STATE(101)] = 2048,
  [SMALL_STATE(102)] = 2059,
  [SMALL_STATE(103)] = 2070,
  [SMALL_STATE(104)] = 2081,
  [SMALL_STATE(105)] = 2092,
  [SMALL_STATE(106)] = 2103,
  [SMALL_STATE(107)] = 2114,
  [SMALL_STATE(108)] = 2125,
  [SMALL_STATE(109)] = 2138,
  [SMALL_STATE(110)] = 2149,
  [SMALL_STATE(111)] = 2160,
  [SMALL_STATE(112)] = 2171,
  [SMALL_STATE(113)] = 2182,
  [SMALL_STATE(114)] = 2193,
  [SMALL_STATE(115)] = 2204,
  [SMALL_STATE(116)] = 2215,
  [SMALL_STATE(117)] = 2226,
  [SMALL_STATE(118)] = 2237,
  [SMALL_STATE(119)] = 2250,
  [SMALL_STATE(120)] = 2261,
  [SMALL_STATE(121)] = 2272,
  [SMALL_STATE(122)] = 2283,
  [SMALL_STATE(123)] = 2294,
  [SMALL_STATE(124)] = 2305,
  [SMALL_STATE(125)] = 2316,
  [SMALL_STATE(126)] = 2329,
  [SMALL_STATE(127)] = 2340,
  [SMALL_STATE(128)] = 2351,
  [SMALL_STATE(129)] = 2362,
  [SMALL_STATE(130)] = 2373,
  [SMALL_STATE(131)] = 2384,
  [SMALL_STATE(132)] = 2395,
  [SMALL_STATE(133)] = 2406,
  [SMALL_STATE(134)] = 2417,
  [SMALL_STATE(135)] = 2427,
  [SMALL_STATE(136)] = 2437,
  [SMALL_STATE(137)] = 2447,
  [SMALL_STATE(138)] = 2457,
  [SMALL_STATE(139)] = 2467,
  [SMALL_STATE(140)] = 2477,
  [SMALL_STATE(141)] = 2487,
  [SMALL_STATE(142)] = 2497,
  [SMALL_STATE(143)] = 2507,
  [SMALL_STATE(144)] = 2517,
  [SMALL_STATE(145)] = 2527,
  [SMALL_STATE(146)] = 2537,
  [SMALL_STATE(147)] = 2547,
  [SMALL_STATE(148)] = 2557,
  [SMALL_STATE(149)] = 2567,
  [SMALL_STATE(150)] = 2577,
  [SMALL_STATE(151)] = 2587,
  [SMALL_STATE(152)] = 2597,
  [SMALL_STATE(153)] = 2607,
  [SMALL_STATE(154)] = 2617,
  [SMALL_STATE(155)] = 2627,
  [SMALL_STATE(156)] = 2637,
  [SMALL_STATE(157)] = 2647,
  [SMALL_STATE(158)] = 2657,
  [SMALL_STATE(159)] = 2667,
  [SMALL_STATE(160)] = 2677,
  [SMALL_STATE(161)] = 2687,
  [SMALL_STATE(162)] = 2697,
  [SMALL_STATE(163)] = 2705,
  [SMALL_STATE(164)] = 2715,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frags, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(65),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(91),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(70),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(84),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2), SHIFT_REPEAT(56),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_expansion, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2), SHIFT_REPEAT(65),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2), SHIFT_REPEAT(65),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_function_description, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_items_list, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basis_function_description_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(16),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(91),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(70),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(84),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indices_of_basis_functions, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2), SHIFT_REPEAT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_hybrid_list, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_d_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2), SHIFT_REPEAT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2), SHIFT_REPEAT(114),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_f_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2), SHIFT_REPEAT(34),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_d, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_d, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 14),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 14),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 14), SHIFT_REPEAT(98),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2), SHIFT_REPEAT(130),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_list, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2), SHIFT_REPEAT(85),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 11),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 11),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(50),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(129),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(64),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2), SHIFT_REPEAT(81),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 4, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 4, .production_id = 12),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 3, .production_id = 8),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 3, .production_id = 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_int, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_int, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 16),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 16),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 16), SHIFT_REPEAT(110),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 13),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 13),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 21),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 21), SHIFT_REPEAT(114),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 15),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 15),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 14), SHIFT_REPEAT(106),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_function_composition, 1, .production_id = 19),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_items_list, 2, .production_id = 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(42),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VB_structures_or_determinants, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2), SHIFT_REPEAT(79),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamess_format_atom, 6, .production_id = 18),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coefficients, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaussian_format_atom, 5, .production_id = 17),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 10, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_asterisk, 3, .production_id = 10),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_asterisk, 3, .production_id = 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_minor, 3, .production_id = 9),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_minor, 3, .production_id = 9),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(45),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ratio_and_orbit_pair, 2, .production_id = 20),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aim_section, 5, .production_id = 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 1, .production_id = 19),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_colon, 3, .production_id = 9),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_colon, 3, .production_id = 9),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 9, .production_id = 6),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_section, 6, .production_id = 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_section, 4, .production_id = 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_section, 4, .production_id = 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orb_section, 6, .production_id = 6),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scf_section, 4, .production_id = 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gus_section, 4, .production_id = 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_section, 4, .production_id = 6),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_basis_functions, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_frozen_MOs, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NFROZ_and_NBAS, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_fragments, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guess_from_MOs, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_atom_or_basis_function_in_the_fragment, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
