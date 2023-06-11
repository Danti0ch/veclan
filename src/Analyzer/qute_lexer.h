#pragma once

enum class LEXER_RET_CODE{
OK, FAILED_PARSING
};

LEXER_RET_CODE parse_lexem(char* buff, unsigned int* offset, unsigned long long int* data, unsigned long long int* subdata);

enum class LEXER_TAGS{
l_keyword,
l_standart_spaces,
l_operator,
l_ident,
l_number,
l_separator,
};

enum class LEXER_SUBTAGS{
l_if,
l_else,
l_elif,
l_for,
l_def,
l_ret,
l_call,
l_space_spec,
l_auto_type,
l_const_spec,
l_vec_type,
l_object,
l_operator,
l_commutative_prop,
l_associative_prop,
l_distributive_in_prop,
l_distributive_out_prop,
l_space_type,
l_null_vec,
l_null_scal,
l_ded_ring_space,
l_fract_space,
l_integer_space,
l_rational_space,
l_add,
l_sub,
l_mul,
l_div,
l_pow,
l_assign,
l_equal,
l_uncover,
l_reverse,
l_field_access,
l_capacity_taker,
l_integer,
l_fractional,
l_scope_open,
l_scope_close,
l_expr_close,
l_linear_shell_open,
l_linear_shell_close,
l_ident_separator,
l_r_bracket_open,
l_r_bracket_close,
l_property_list_dec,
};
