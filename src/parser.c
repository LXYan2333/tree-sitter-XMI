#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_EQ = 12,
  aux_sym_ctrl_group_item_token1 = 13,
  sym_ctrl_group_keyword = 14,
  aux_sym_ctrl_group_group_token1 = 15,
  sym_ctrl_str_keyword = 16,
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
  alias_sym_structure_number = 102,
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
  [anon_sym_EQ] = "=",
  [aux_sym_ctrl_group_item_token1] = "double_commas",
  [sym_ctrl_group_keyword] = "ctrl_group_keyword",
  [aux_sym_ctrl_group_group_token1] = "commas",
  [sym_ctrl_str_keyword] = "ctrl_str_keyword",
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
  [alias_sym_structure_number] = "structure_number",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_ctrl_group_item_token1] = aux_sym_ctrl_group_item_token1,
  [sym_ctrl_group_keyword] = sym_ctrl_group_keyword,
  [aux_sym_ctrl_group_group_token1] = aux_sym_ctrl_group_group_token1,
  [sym_ctrl_str_keyword] = sym_ctrl_str_keyword,
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
  [alias_sym_structure_number] = alias_sym_structure_number,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ctrl_group_item_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_ctrl_group_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ctrl_group_group_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_ctrl_str_keyword] = {
    .visible = true,
    .named = true,
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
  [alias_sym_structure_number] = {
    .visible = true,
    .named = true,
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
  field_times = 12,
  field_x = 13,
  field_y = 14,
  field_z = 15,
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
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 3},
  [16] = {.index = 23, .length = 4},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 4},
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
    {field_keyword, 0},
    {field_param, 2},
  [10] =
    {field_end, 2},
    {field_start, 0},
  [12] =
    {field_num, 0},
    {field_times, 2},
  [14] =
    {field_keyword, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [17] =
    {field_param, 1},
  [18] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [20] =
    {field_x, 1},
    {field_y, 2},
    {field_z, 3},
  [23] =
    {field_charge, 1},
    {field_x, 2},
    {field_y, 3},
    {field_z, 4},
  [27] =
    {field_orbit, 0, .inherited = true},
    {field_ratio, 0, .inherited = true},
  [29] =
    {field_orbit, 1},
    {field_ratio, 0},
  [31] =
    {field_orbit, 0, .inherited = true},
    {field_orbit, 1, .inherited = true},
    {field_ratio, 0, .inherited = true},
    {field_ratio, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = alias_sym_structure_number,
  },
  [12] = {
    [1] = alias_sym_structure_number,
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
  [46] = 44,
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
  [61] = 55,
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
  [93] = 80,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 74,
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
  [114] = 79,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ',') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(38);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 46:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 47:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 48:
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_explanation);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ';') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_end_token);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__line_ending);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_colon_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ctrl_start_token);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_ctrl_group_item_token1);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ctrl_group_keyword);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ctrl_group_keyword);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_ctrl_group_group_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(73);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ctrl_str_keyword);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ctrl_keyword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 84:
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
          lookahead != '=') ADVANCE(84);
      END_STATE();
    case 85:
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
          lookahead != '=') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_bfi_start_token);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_str_start_token);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_frag_start_token);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_s);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_s);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_p_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_d_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_f_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_orb_start_token);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_aim_start_token);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_gus_start_token);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_scf_start_token);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_geo_start_token);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'R') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 't') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_gaussian_format_atom_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 51},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 51},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 51},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 51},
  [45] = {.lex_state = 51},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 51},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 51},
  [73] = {.lex_state = 51},
  [74] = {.lex_state = 51},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 51},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 51},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 51},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 51},
  [84] = {.lex_state = 51},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 51},
  [93] = {.lex_state = 51},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 51},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 51},
  [103] = {.lex_state = 51},
  [104] = {.lex_state = 51},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 51},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 51},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 51},
  [113] = {.lex_state = 51},
  [114] = {.lex_state = 51},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 51},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 51},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 51},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 51},
  [130] = {.lex_state = 51},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 51},
  [133] = {.lex_state = 51},
  [134] = {.lex_state = 51},
  [135] = {.lex_state = 51},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 51},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 51},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 51},
  [145] = {.lex_state = 51},
  [146] = {.lex_state = 51},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 51},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 51},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 51},
  [159] = {.lex_state = 51},
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
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_ctrl_group_item_token1] = ACTIONS(1),
    [sym_ctrl_group_keyword] = ACTIONS(1),
    [aux_sym_ctrl_group_group_token1] = ACTIONS(1),
    [sym_ctrl_str_keyword] = ACTIONS(1),
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
    [sym_source_file] = STATE(95),
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
    STATE(118), 10,
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
    STATE(150), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(151), 1,
      sym_basis_function_description,
    STATE(153), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(6), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(13), 5,
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
    STATE(97), 1,
      sym_frags,
    STATE(150), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(151), 1,
      sym_basis_function_description,
    STATE(153), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(3), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(13), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [154] = 13,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(118), 10,
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
  [204] = 14,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(43), 1,
      sym_end_token,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(48), 1,
      sym_s,
    ACTIONS(51), 1,
      anon_sym_p,
    ACTIONS(54), 1,
      anon_sym_d,
    ACTIONS(57), 1,
      anon_sym_f,
    STATE(150), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(151), 1,
      sym_basis_function_description,
    STATE(153), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(6), 2,
      sym_frag_description,
      aux_sym_frags_repeat1,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
    STATE(13), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
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
    STATE(118), 10,
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
    STATE(147), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(26), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(74), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [333] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(65), 1,
      sym_end_token,
    ACTIONS(67), 1,
      sym_int,
    STATE(8), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(147), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(26), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(74), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [363] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(67), 1,
      sym_int,
    STATE(9), 1,
      aux_sym_orbital_expansion_repeat1,
    STATE(100), 1,
      sym_orbital_expansion,
    STATE(147), 1,
      sym_indices_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(26), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(74), 4,
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
    STATE(157), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(11), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [420] = 7,
    ACTIONS(74), 1,
      sym__space,
    ACTIONS(76), 1,
      sym_s,
    ACTIONS(79), 1,
      anon_sym_p,
    ACTIONS(82), 1,
      anon_sym_d,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(12), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [447] = 7,
    ACTIONS(35), 1,
      anon_sym_p,
    ACTIONS(37), 1,
      anon_sym_d,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(88), 1,
      sym__space,
    ACTIONS(90), 1,
      sym_s,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(12), 5,
      sym__basis_function,
      sym_p,
      sym_d,
      sym_f,
      aux_sym_basis_function_description_repeat1,
  [474] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(92), 1,
      sym_end_token,
    ACTIONS(94), 1,
      sym_int,
    STATE(14), 1,
      aux_sym_gus_section_repeat1,
    STATE(138), 1,
      sym_guess_from_MOs,
    STATE(142), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [503] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(97), 1,
      sym_end_token,
    STATE(157), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(11), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [530] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(99), 1,
      sym_end_token,
    STATE(14), 1,
      aux_sym_gus_section_repeat1,
    STATE(138), 1,
      sym_guess_from_MOs,
    STATE(142), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [559] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(94), 1,
      sym_str_items_list,
    STATE(157), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(15), 2,
      sym_VB_structures_or_determinants,
      aux_sym_str_items_list_repeat1,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [586] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(16), 1,
      aux_sym_gus_section_repeat1,
    STATE(138), 1,
      sym_guess_from_MOs,
    STATE(142), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(101), 1,
      sym__line_ending,
    ACTIONS(103), 1,
      sym_int,
    STATE(19), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(74), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [635] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(137), 1,
      sym_number_of_atom_or_basis_function_in_the_fragment,
    STATE(153), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [658] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(158), 1,
      sym_NFROZ_and_NBAS,
    STATE(159), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [681] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(154), 1,
      sym_number_of_fragments,
    STATE(155), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [704] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(149), 1,
      sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals,
    STATE(152), 1,
      sym__ints_seperate1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [727] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(132), 1,
      sym__ints_seperate1,
    STATE(133), 1,
      sym_list_of_basis_functions,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [750] = 9,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(106), 1,
      sym_end_token,
    ACTIONS(108), 1,
      sym_float,
    STATE(38), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(67), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(99), 1,
      sym__ratio_and_orbit_pair,
    STATE(101), 1,
      sym_functions_hybrid_list,
    STATE(146), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(67), 1,
      sym_int,
    ACTIONS(110), 1,
      sym__line_ending,
    STATE(19), 2,
      sym__ints_seperate1,
      aux_sym_indices_of_basis_functions_repeat1,
    STATE(74), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [802] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    STATE(130), 1,
      sym__ints_seperate1,
    STATE(156), 1,
      sym_list_of_frozen_MOs,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(103), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [825] = 5,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      aux_sym_p_token1,
    STATE(28), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(114), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [845] = 5,
    ACTIONS(119), 1,
      sym__space,
    ACTIONS(123), 1,
      aux_sym_p_token1,
    STATE(28), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(121), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [865] = 5,
    ACTIONS(125), 1,
      sym__space,
    ACTIONS(129), 1,
      aux_sym_d_token1,
    STATE(35), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(127), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [885] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(131), 1,
      sym_end_token,
    ACTIONS(133), 1,
      sym_float,
    STATE(31), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(67), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(99), 1,
      sym__ratio_and_orbit_pair,
    STATE(146), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [911] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(136), 1,
      sym__line_ending,
    ACTIONS(138), 1,
      sym_ctrl_group_keyword,
    ACTIONS(140), 1,
      sym_ctrl_keyword,
    STATE(85), 1,
      sym_ctrl_item,
    STATE(102), 1,
      sym_ctrl_items_list,
    STATE(48), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [937] = 5,
    ACTIONS(142), 1,
      sym__space,
    ACTIONS(146), 1,
      aux_sym_f_token1,
    STATE(36), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(144), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [957] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(148), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [973] = 5,
    ACTIONS(150), 1,
      sym__space,
    ACTIONS(154), 1,
      aux_sym_d_token1,
    STATE(35), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(152), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [993] = 5,
    ACTIONS(157), 1,
      sym__space,
    ACTIONS(161), 1,
      aux_sym_f_token1,
    STATE(36), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(159), 4,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1013] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(164), 6,
      sym_end_token,
      sym_int,
      sym_s,
      anon_sym_p,
      anon_sym_d,
      anon_sym_f,
  [1029] = 8,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(108), 1,
      sym_float,
    ACTIONS(166), 1,
      sym_end_token,
    STATE(31), 1,
      aux_sym_functions_hybrid_list_repeat1,
    STATE(67), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(99), 1,
      sym__ratio_and_orbit_pair,
    STATE(146), 1,
      sym_basis_function_composition,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(172), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(42), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(168), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(170), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1076] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(178), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(40), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(174), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(176), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1097] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(181), 1,
      sym_end_token,
    ACTIONS(183), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(41), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(172), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(40), 1,
      aux_sym_ctrl_group_group_repeat1,
    ACTIONS(186), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(188), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1137] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(190), 1,
      sym_end_token,
    ACTIONS(192), 1,
      sym_float,
    STATE(43), 1,
      aux_sym_scf_section_repeat1,
    STATE(75), 1,
      aux_sym_coefficients_repeat1,
    STATE(131), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1160] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(67), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(92), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1177] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(195), 1,
      aux_sym_gaussian_format_atom_token1,
    STATE(108), 1,
      sym_atom_list,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(49), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1196] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(92), 4,
      sym_int_colon,
      sym_int_asterisk,
      sym_int_minor,
      sym__abstract_int,
  [1213] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(197), 1,
      sym__line_ending,
    ACTIONS(200), 1,
      sym_ctrl_group_keyword,
    ACTIONS(203), 1,
      sym_ctrl_keyword,
    STATE(85), 1,
      sym_ctrl_item,
    STATE(47), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1236] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(138), 1,
      sym_ctrl_group_keyword,
    ACTIONS(140), 1,
      sym_ctrl_keyword,
    ACTIONS(206), 1,
      sym__line_ending,
    STATE(85), 1,
      sym_ctrl_item,
    STATE(47), 2,
      sym_ctrl_group_item,
      aux_sym_ctrl_items_list_repeat1,
  [1259] = 5,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(195), 1,
      aux_sym_gaussian_format_atom_token1,
    ACTIONS(208), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    STATE(41), 3,
      sym_gaussian_format_atom,
      sym_gamess_format_atom,
      aux_sym_atom_list_repeat1,
  [1278] = 7,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(210), 1,
      sym_end_token,
    ACTIONS(212), 1,
      sym_float,
    STATE(43), 1,
      aux_sym_scf_section_repeat1,
    STATE(75), 1,
      aux_sym_coefficients_repeat1,
    STATE(131), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(214), 1,
      sym__line_ending,
    ACTIONS(218), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(51), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(216), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(221), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(223), 3,
      sym_ctrl_group_keyword,
      aux_sym_ctrl_group_group_token1,
      sym_ctrl_keyword,
  [1337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(225), 1,
      sym__line_ending,
    ACTIONS(229), 1,
      aux_sym_ctrl_group_group_token1,
    STATE(57), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(227), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(231), 1,
      sym__line_ending,
    ACTIONS(233), 1,
      aux_sym_ctrl_group_item_token1,
    STATE(56), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(235), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1377] = 6,
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
  [1397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(233), 1,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(247), 1,
      sym__line_ending,
    STATE(58), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(249), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(229), 1,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(251), 1,
      sym__line_ending,
    STATE(51), 1,
      aux_sym_ctrl_item_repeat1,
    ACTIONS(253), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(255), 1,
      sym__line_ending,
    ACTIONS(257), 1,
      aux_sym_ctrl_group_item_token1,
    STATE(58), 1,
      aux_sym_ctrl_group_item_repeat1,
    ACTIONS(260), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1457] = 6,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(212), 1,
      sym_float,
    STATE(50), 1,
      aux_sym_scf_section_repeat1,
    STATE(75), 1,
      aux_sym_coefficients_repeat1,
    STATE(131), 1,
      sym_coefficients,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(262), 1,
      sym__line_ending,
    ACTIONS(264), 1,
      sym_int,
    STATE(54), 1,
      sym_ctrl_group_group,
    ACTIONS(266), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1497] = 6,
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
    ACTIONS(268), 1,
      anon_sym_DASH,
  [1516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(270), 1,
      sym__line_ending,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(274), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(276), 1,
      sym_end_token,
    ACTIONS(278), 1,
      sym__line_ending,
    ACTIONS(280), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(282), 1,
      sym__line_ending,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(286), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(288), 2,
      sym__line_ending,
      aux_sym_ctrl_group_group_token1,
    ACTIONS(290), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(255), 2,
      sym__line_ending,
      aux_sym_ctrl_group_item_token1,
    ACTIONS(260), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(108), 1,
      sym_float,
    ACTIONS(292), 1,
      sym__line_ending,
    STATE(68), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(99), 1,
      sym__ratio_and_orbit_pair,
  [1616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(294), 1,
      sym__line_ending,
    ACTIONS(296), 1,
      sym_float,
    STATE(68), 1,
      aux_sym_basis_function_composition_repeat1,
    STATE(99), 1,
      sym__ratio_and_orbit_pair,
  [1635] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(190), 2,
      sym_end_token,
      sym_float,
  [1647] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(131), 2,
      sym_end_token,
      sym_float,
  [1659] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(299), 2,
      sym_end_token,
      sym_int,
  [1671] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(92), 2,
      sym_end_token,
      sym_int,
  [1683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym__line_ending,
    STATE(76), 1,
      aux_sym_source_file_repeat1,
  [1699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__space,
    STATE(79), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(303), 2,
      sym__line_ending,
      sym_int,
  [1713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(307), 1,
      sym__line_ending,
    ACTIONS(309), 1,
      sym_float,
    STATE(77), 1,
      aux_sym_coefficients_repeat1,
  [1729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      sym__line_ending,
    STATE(76), 1,
      aux_sym_source_file_repeat1,
  [1745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(316), 1,
      sym__line_ending,
    ACTIONS(318), 1,
      sym_float,
    STATE(77), 1,
      aux_sym_coefficients_repeat1,
  [1761] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(321), 1,
      sym_int,
    STATE(66), 1,
      sym_ctrl_group_group,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__space,
    STATE(80), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(323), 2,
      sym__line_ending,
      sym_int,
  [1789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__space,
    STATE(80), 1,
      aux_sym__ints_seperate1_repeat1,
    ACTIONS(325), 2,
      sym__line_ending,
      sym_int,
  [1803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      sym__line_ending,
    STATE(73), 1,
      aux_sym_source_file_repeat1,
  [1819] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(334), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [1831] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(336), 2,
      sym_end_token,
      aux_sym_gaussian_format_atom_token1,
  [1843] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
    ACTIONS(60), 2,
      sym_end_token,
      sym_int,
  [1855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(338), 1,
      sym__line_ending,
    ACTIONS(340), 2,
      sym_ctrl_group_keyword,
      sym_ctrl_keyword,
  [1869] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(342), 1,
      aux_sym_p_token1,
    STATE(29), 1,
      aux_sym_p_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1883] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(344), 1,
      aux_sym_d_token1,
    STATE(30), 1,
      aux_sym_d_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1897] = 4,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(346), 1,
      aux_sym_f_token1,
    STATE(33), 1,
      aux_sym_f_repeat1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [1933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__space,
    ACTIONS(352), 2,
      sym__line_ending,
      sym_int,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__space,
    ACTIONS(325), 2,
      sym__line_ending,
      sym_int,
  [1955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__line_ending,
    ACTIONS(358), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__ints_seperate1_repeat1,
  [1968] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(361), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1979] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2001] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(367), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(369), 2,
      sym__line_ending,
      sym_float,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(371), 2,
      sym__line_ending,
      sym_float,
  [2034] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(373), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2045] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(375), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2056] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(377), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__line_ending,
    ACTIONS(379), 1,
      sym__space,
    STATE(114), 1,
      aux_sym__ints_seperate1_repeat1,
  [2080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2091] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(383), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2102] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(385), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__space,
    ACTIONS(387), 2,
      sym__line_ending,
      sym_int,
  [2124] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(391), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2135] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(393), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2146] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(395), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2179] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(401), 1,
      sym_end_token,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__line_ending,
    ACTIONS(379), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__ints_seperate1_repeat1,
  [2203] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(403), 1,
      sym_filename,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2225] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(407), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2247] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(409), 1,
      sym_int,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2280] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(415), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__space,
    ACTIONS(417), 2,
      sym__line_ending,
      sym_int,
  [2302] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(421), 1,
      sym_float,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(423), 1,
      sym__line_ending,
    ACTIONS(425), 1,
      sym_float,
  [2326] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(427), 1,
      aux_sym_int_colon_token1,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym__line_ending,
  [2348] = 3,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(431), 1,
      sym_ctrl_param,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(433), 1,
      sym__line_ending,
  [2369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(435), 1,
      sym__line_ending,
  [2379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(437), 1,
      sym__line_ending,
  [2389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(439), 1,
      sym__line_ending,
  [2399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(441), 1,
      sym__line_ending,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(443), 1,
      sym__line_ending,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(445), 1,
      sym__line_ending,
  [2429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(447), 1,
      sym__line_ending,
  [2439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(449), 1,
      sym__line_ending,
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(451), 1,
      sym__line_ending,
  [2459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(453), 1,
      sym__line_ending,
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(455), 1,
      sym__line_ending,
  [2479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(457), 1,
      sym__line_ending,
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(459), 1,
      sym__line_ending,
  [2499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(461), 1,
      sym__line_ending,
  [2509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(463), 1,
      sym__line_ending,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(465), 1,
      sym__line_ending,
  [2529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(467), 1,
      sym__line_ending,
  [2539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(469), 1,
      sym__line_ending,
  [2549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(471), 1,
      sym__line_ending,
  [2559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(473), 1,
      sym__line_ending,
  [2569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(475), 1,
      sym__line_ending,
  [2579] = 2,
    ACTIONS(477), 1,
      sym__space,
    ACTIONS(3), 2,
      sym__line_ending,
      sym_comment,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(479), 1,
      sym__line_ending,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(481), 1,
      sym__line_ending,
  [2607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(483), 1,
      sym__line_ending,
  [2617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(485), 1,
      sym__line_ending,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(487), 1,
      sym__line_ending,
  [2637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(489), 1,
      sym__line_ending,
  [2647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(491), 1,
      sym__line_ending,
  [2657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(493), 1,
      sym__line_ending,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 447,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 530,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 586,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 704,
  [SMALL_STATE(24)] = 727,
  [SMALL_STATE(25)] = 750,
  [SMALL_STATE(26)] = 779,
  [SMALL_STATE(27)] = 802,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 845,
  [SMALL_STATE(30)] = 865,
  [SMALL_STATE(31)] = 885,
  [SMALL_STATE(32)] = 911,
  [SMALL_STATE(33)] = 937,
  [SMALL_STATE(34)] = 957,
  [SMALL_STATE(35)] = 973,
  [SMALL_STATE(36)] = 993,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1029,
  [SMALL_STATE(39)] = 1055,
  [SMALL_STATE(40)] = 1076,
  [SMALL_STATE(41)] = 1097,
  [SMALL_STATE(42)] = 1116,
  [SMALL_STATE(43)] = 1137,
  [SMALL_STATE(44)] = 1160,
  [SMALL_STATE(45)] = 1177,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1213,
  [SMALL_STATE(48)] = 1236,
  [SMALL_STATE(49)] = 1259,
  [SMALL_STATE(50)] = 1278,
  [SMALL_STATE(51)] = 1301,
  [SMALL_STATE(52)] = 1321,
  [SMALL_STATE(53)] = 1337,
  [SMALL_STATE(54)] = 1357,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1397,
  [SMALL_STATE(57)] = 1417,
  [SMALL_STATE(58)] = 1437,
  [SMALL_STATE(59)] = 1457,
  [SMALL_STATE(60)] = 1477,
  [SMALL_STATE(61)] = 1497,
  [SMALL_STATE(62)] = 1516,
  [SMALL_STATE(63)] = 1533,
  [SMALL_STATE(64)] = 1550,
  [SMALL_STATE(65)] = 1567,
  [SMALL_STATE(66)] = 1582,
  [SMALL_STATE(67)] = 1597,
  [SMALL_STATE(68)] = 1616,
  [SMALL_STATE(69)] = 1635,
  [SMALL_STATE(70)] = 1647,
  [SMALL_STATE(71)] = 1659,
  [SMALL_STATE(72)] = 1671,
  [SMALL_STATE(73)] = 1683,
  [SMALL_STATE(74)] = 1699,
  [SMALL_STATE(75)] = 1713,
  [SMALL_STATE(76)] = 1729,
  [SMALL_STATE(77)] = 1745,
  [SMALL_STATE(78)] = 1761,
  [SMALL_STATE(79)] = 1775,
  [SMALL_STATE(80)] = 1789,
  [SMALL_STATE(81)] = 1803,
  [SMALL_STATE(82)] = 1819,
  [SMALL_STATE(83)] = 1831,
  [SMALL_STATE(84)] = 1843,
  [SMALL_STATE(85)] = 1855,
  [SMALL_STATE(86)] = 1869,
  [SMALL_STATE(87)] = 1883,
  [SMALL_STATE(88)] = 1897,
  [SMALL_STATE(89)] = 1911,
  [SMALL_STATE(90)] = 1922,
  [SMALL_STATE(91)] = 1933,
  [SMALL_STATE(92)] = 1944,
  [SMALL_STATE(93)] = 1955,
  [SMALL_STATE(94)] = 1968,
  [SMALL_STATE(95)] = 1979,
  [SMALL_STATE(96)] = 1990,
  [SMALL_STATE(97)] = 2001,
  [SMALL_STATE(98)] = 2012,
  [SMALL_STATE(99)] = 2023,
  [SMALL_STATE(100)] = 2034,
  [SMALL_STATE(101)] = 2045,
  [SMALL_STATE(102)] = 2056,
  [SMALL_STATE(103)] = 2067,
  [SMALL_STATE(104)] = 2080,
  [SMALL_STATE(105)] = 2091,
  [SMALL_STATE(106)] = 2102,
  [SMALL_STATE(107)] = 2113,
  [SMALL_STATE(108)] = 2124,
  [SMALL_STATE(109)] = 2135,
  [SMALL_STATE(110)] = 2146,
  [SMALL_STATE(111)] = 2157,
  [SMALL_STATE(112)] = 2168,
  [SMALL_STATE(113)] = 2179,
  [SMALL_STATE(114)] = 2190,
  [SMALL_STATE(115)] = 2203,
  [SMALL_STATE(116)] = 2214,
  [SMALL_STATE(117)] = 2225,
  [SMALL_STATE(118)] = 2236,
  [SMALL_STATE(119)] = 2247,
  [SMALL_STATE(120)] = 2258,
  [SMALL_STATE(121)] = 2269,
  [SMALL_STATE(122)] = 2280,
  [SMALL_STATE(123)] = 2291,
  [SMALL_STATE(124)] = 2302,
  [SMALL_STATE(125)] = 2313,
  [SMALL_STATE(126)] = 2326,
  [SMALL_STATE(127)] = 2337,
  [SMALL_STATE(128)] = 2348,
  [SMALL_STATE(129)] = 2359,
  [SMALL_STATE(130)] = 2369,
  [SMALL_STATE(131)] = 2379,
  [SMALL_STATE(132)] = 2389,
  [SMALL_STATE(133)] = 2399,
  [SMALL_STATE(134)] = 2409,
  [SMALL_STATE(135)] = 2419,
  [SMALL_STATE(136)] = 2429,
  [SMALL_STATE(137)] = 2439,
  [SMALL_STATE(138)] = 2449,
  [SMALL_STATE(139)] = 2459,
  [SMALL_STATE(140)] = 2469,
  [SMALL_STATE(141)] = 2479,
  [SMALL_STATE(142)] = 2489,
  [SMALL_STATE(143)] = 2499,
  [SMALL_STATE(144)] = 2509,
  [SMALL_STATE(145)] = 2519,
  [SMALL_STATE(146)] = 2529,
  [SMALL_STATE(147)] = 2539,
  [SMALL_STATE(148)] = 2549,
  [SMALL_STATE(149)] = 2559,
  [SMALL_STATE(150)] = 2569,
  [SMALL_STATE(151)] = 2579,
  [SMALL_STATE(152)] = 2587,
  [SMALL_STATE(153)] = 2597,
  [SMALL_STATE(154)] = 2607,
  [SMALL_STATE(155)] = 2617,
  [SMALL_STATE(156)] = 2627,
  [SMALL_STATE(157)] = 2637,
  [SMALL_STATE(158)] = 2647,
  [SMALL_STATE(159)] = 2657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frags, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(61),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(13),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(86),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(87),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frags_repeat1, 2), SHIFT_REPEAT(88),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_orbital_expansion_repeat1, 2), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_expansion, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_items_list_repeat1, 2), SHIFT_REPEAT(61),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basis_function_description_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(12),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(86),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(87),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_description_repeat1, 2), SHIFT_REPEAT(88),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_function_description, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gus_section_repeat1, 2), SHIFT_REPEAT(61),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_items_list, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indices_of_basis_functions_repeat1, 2), SHIFT_REPEAT(55),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indices_of_basis_functions, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_d, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_d, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_hybrid_list_repeat1, 2), SHIFT_REPEAT(119),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_d_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_d_repeat1, 2), SHIFT_REPEAT(35),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_f_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_f_repeat1, 2), SHIFT_REPEAT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_description, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_hybrid_list, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 1, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2), SHIFT_REPEAT(106),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_list_repeat1, 2), SHIFT_REPEAT(124),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_group, 2, .production_id = 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scf_section_repeat1, 2), SHIFT_REPEAT(75),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(47),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(62),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(64),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_list, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 14),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 14),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 14), SHIFT_REPEAT(110),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_group_repeat1, 2, .production_id = 12),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 3, .production_id = 8),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 3, .production_id = 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_item, 3, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 3, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_int, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_int, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 4, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 4, .production_id = 11),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 4, .production_id = 11),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2), SHIFT_REPEAT(78),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_group_item_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_item, 2, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 2, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_group_item, 1, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_group_item, 1, .production_id = 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_items_list, 2, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_item, 1, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 13),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_item_repeat1, 2, .production_id = 13),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_function_composition, 1, .production_id = 17),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 19),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 2, .production_id = 19), SHIFT_REPEAT(119),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VB_structures_or_determinants, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coefficients, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coefficients_repeat1, 2), SHIFT_REPEAT(77),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ints_seperate1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(44),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaussian_format_atom, 5, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamess_format_atom, 6, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_items_list_repeat1, 1, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_section, 4, .production_id = 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_section, 4, .production_id = 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_minor, 3, .production_id = 9),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_minor, 3, .production_id = 9),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ints_seperate1_repeat1, 2), SHIFT_REPEAT(46),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [363] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 10, .production_id = 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ratio_and_orbit_pair, 2, .production_id = 18),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basis_function_composition_repeat1, 1, .production_id = 17),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aim_section, 5, .production_id = 6),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_colon, 3, .production_id = 9),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_colon, 3, .production_id = 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scf_section, 4, .production_id = 6),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gus_section, 4, .production_id = 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frag_section, 6, .production_id = 6),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bfi_section, 9, .production_id = 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orb_section, 6, .production_id = 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_asterisk, 3, .production_id = 10),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_asterisk, 3, .production_id = 10),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_section, 4, .production_id = 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_frozen_MOs, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_basis_functions, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guess_from_MOs, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_basis_functions_or_fragments_used_for_VB_orbitals, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_atom_or_basis_function_in_the_fragment, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_of_fragments, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NFROZ_and_NBAS, 1),
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
