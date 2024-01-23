// This file is automatically generated by `bytecode_generator.py`
// Do not edit this file directly, as it will be overwritten.
// Instead, edit `bytecode_generator.py` and run it to generate this file.

// clang-format off
#include "bytecode_e82dc40.h"

static const Pair<String, Pair<int, int>> funcs[] = {
	{ "sin", Pair<int, int>(1, 1) },
	{ "cos", Pair<int, int>(1, 1) },
	{ "tan", Pair<int, int>(1, 1) },
	{ "sinh", Pair<int, int>(1, 1) },
	{ "cosh", Pair<int, int>(1, 1) },
	{ "tanh", Pair<int, int>(1, 1) },
	{ "asin", Pair<int, int>(1, 1) },
	{ "acos", Pair<int, int>(1, 1) },
	{ "atan", Pair<int, int>(1, 1) },
	{ "atan2", Pair<int, int>(2, 2) },
	{ "sqrt", Pair<int, int>(1, 1) },
	{ "fmod", Pair<int, int>(2, 2) },
	{ "fposmod", Pair<int, int>(2, 2) },
	{ "floor", Pair<int, int>(1, 1) },
	{ "ceil", Pair<int, int>(1, 1) },
	{ "round", Pair<int, int>(1, 1) },
	{ "abs", Pair<int, int>(1, 1) },
	{ "sign", Pair<int, int>(1, 1) },
	{ "pow", Pair<int, int>(2, 2) },
	{ "log", Pair<int, int>(1, 1) },
	{ "exp", Pair<int, int>(1, 1) },
	{ "is_nan", Pair<int, int>(1, 1) },
	{ "is_inf", Pair<int, int>(1, 1) },
	{ "ease", Pair<int, int>(2, 2) },
	{ "decimals", Pair<int, int>(1, 1) },
	{ "stepify", Pair<int, int>(2, 2) },
	{ "lerp", Pair<int, int>(3, 3) },
	{ "dectime", Pair<int, int>(3, 3) },
	{ "randomize", Pair<int, int>(0, 0) },
	{ "randi", Pair<int, int>(0, 0) },
	{ "randf", Pair<int, int>(0, 0) },
	{ "rand_range", Pair<int, int>(2, 2) },
	{ "rand_seed", Pair<int, int>(1, 1) },
	{ "deg2rad", Pair<int, int>(1, 1) },
	{ "rad2deg", Pair<int, int>(1, 1) },
	{ "linear2db", Pair<int, int>(1, 1) },
	{ "db2linear", Pair<int, int>(1, 1) },
	{ "max", Pair<int, int>(2, 2) },
	{ "min", Pair<int, int>(2, 2) },
	{ "clamp", Pair<int, int>(3, 3) },
	{ "nearest_po2", Pair<int, int>(1, 1) },
	{ "weakref", Pair<int, int>(1, 1) },
	{ "funcref", Pair<int, int>(2, 2) },
	{ "convert", Pair<int, int>(2, 2) },
	{ "typeof", Pair<int, int>(1, 1) },
	{ "str", Pair<int, int>(1, INT_MAX) },
	{ "print", Pair<int, int>(0, INT_MAX) },
	{ "printt", Pair<int, int>(0, INT_MAX) },
	{ "printerr", Pair<int, int>(0, INT_MAX) },
	{ "printraw", Pair<int, int>(0, INT_MAX) },
	{ "range", Pair<int, int>(1, 3) },
	{ "load", Pair<int, int>(1, 1) },
	{ "inst2dict", Pair<int, int>(1, 1) },
	{ "dict2inst", Pair<int, int>(1, 1) },
	{ "hash", Pair<int, int>(1, 1) },
	{ "print_stack", Pair<int, int>(0, 0) },
};

static constexpr int num_funcs = sizeof(funcs) / sizeof(Pair<String, Pair<int, int>>);
enum Token {
	TK_EMPTY,
	TK_IDENTIFIER,
	TK_CONSTANT,
	TK_SELF,
	TK_BUILT_IN_TYPE,
	TK_BUILT_IN_FUNC,
	TK_OP_IN,
	TK_OP_EQUAL,
	TK_OP_NOT_EQUAL,
	TK_OP_LESS,
	TK_OP_LESS_EQUAL,
	TK_OP_GREATER,
	TK_OP_GREATER_EQUAL,
	TK_OP_AND,
	TK_OP_OR,
	TK_OP_NOT,
	TK_OP_ADD,
	TK_OP_SUB,
	TK_OP_MUL,
	TK_OP_DIV,
	TK_OP_MOD,
	TK_OP_SHIFT_LEFT,
	TK_OP_SHIFT_RIGHT,
	TK_OP_ASSIGN,
	TK_OP_ASSIGN_ADD,
	TK_OP_ASSIGN_SUB,
	TK_OP_ASSIGN_MUL,
	TK_OP_ASSIGN_DIV,
	TK_OP_ASSIGN_MOD,
	TK_OP_ASSIGN_SHIFT_LEFT,
	TK_OP_ASSIGN_SHIFT_RIGHT,
	TK_OP_ASSIGN_BIT_AND,
	TK_OP_ASSIGN_BIT_OR,
	TK_OP_ASSIGN_BIT_XOR,
	TK_OP_BIT_AND,
	TK_OP_BIT_OR,
	TK_OP_BIT_XOR,
	TK_OP_BIT_INVERT,
	TK_CF_IF,
	TK_CF_ELIF,
	TK_CF_ELSE,
	TK_CF_FOR,
	TK_CF_DO,
	TK_CF_WHILE,
	TK_CF_SWITCH,
	TK_CF_CASE,
	TK_CF_BREAK,
	TK_CF_CONTINUE,
	TK_CF_PASS,
	TK_CF_RETURN,
	TK_PR_FUNCTION,
	TK_PR_CLASS,
	TK_PR_EXTENDS,
	TK_PR_TOOL,
	TK_PR_STATIC,
	TK_PR_EXPORT,
	TK_PR_SETGET,
	TK_PR_CONST,
	TK_PR_VAR,
	TK_PR_PRELOAD,
	TK_PR_ASSERT,
	TK_PR_YIELD,
	TK_BRACKET_OPEN,
	TK_BRACKET_CLOSE,
	TK_CURLY_BRACKET_OPEN,
	TK_CURLY_BRACKET_CLOSE,
	TK_PARENTHESIS_OPEN,
	TK_PARENTHESIS_CLOSE,
	TK_COMMA,
	TK_SEMICOLON,
	TK_PERIOD,
	TK_QUESTION_MARK,
	TK_COLON,
	TK_NEWLINE,
	TK_ERROR,
	TK_EOF,
	TK_MAX,
};

int GDScriptDecomp_e82dc40::get_token_max() const {
	return TK_MAX;
}
String GDScriptDecomp_e82dc40::get_function_name(int p_func) const {
	if (p_func < 0 || p_func >= num_funcs) {
		return "";
	}
	return funcs[p_func].first;
}

int GDScriptDecomp_e82dc40::get_function_count() const {
	return num_funcs;
}
Pair<int, int> GDScriptDecomp_e82dc40::get_function_arg_count(int p_func) const {
	if (p_func < 0 || p_func >= num_funcs) {
		return Pair<int, int>(-1, -1);
	}
	return funcs[p_func].second;
}


int GDScriptDecomp_e82dc40::get_function_index(const String &p_func) const {
	for (int i = 0; i < num_funcs; i++) {
		if (funcs[i].first == p_func) {
			return i;
		}
	}
	return -1;
}

GDScriptDecomp::GlobalToken GDScriptDecomp_e82dc40::get_global_token(int p_token) const {
	if (p_token < 0 || p_token >= TK_MAX) {
		return GDScriptDecomp::GlobalToken::G_TK_MAX;
	}
	switch(Token(p_token)) {
		case TK_EMPTY: return GDScriptDecomp::GlobalToken::G_TK_EMPTY;
		case TK_IDENTIFIER: return GDScriptDecomp::GlobalToken::G_TK_IDENTIFIER;
		case TK_CONSTANT: return GDScriptDecomp::GlobalToken::G_TK_CONSTANT;
		case TK_SELF: return GDScriptDecomp::GlobalToken::G_TK_SELF;
		case TK_BUILT_IN_TYPE: return GDScriptDecomp::GlobalToken::G_TK_BUILT_IN_TYPE;
		case TK_BUILT_IN_FUNC: return GDScriptDecomp::GlobalToken::G_TK_BUILT_IN_FUNC;
		case TK_OP_IN: return GDScriptDecomp::GlobalToken::G_TK_OP_IN;
		case TK_OP_EQUAL: return GDScriptDecomp::GlobalToken::G_TK_OP_EQUAL;
		case TK_OP_NOT_EQUAL: return GDScriptDecomp::GlobalToken::G_TK_OP_NOT_EQUAL;
		case TK_OP_LESS: return GDScriptDecomp::GlobalToken::G_TK_OP_LESS;
		case TK_OP_LESS_EQUAL: return GDScriptDecomp::GlobalToken::G_TK_OP_LESS_EQUAL;
		case TK_OP_GREATER: return GDScriptDecomp::GlobalToken::G_TK_OP_GREATER;
		case TK_OP_GREATER_EQUAL: return GDScriptDecomp::GlobalToken::G_TK_OP_GREATER_EQUAL;
		case TK_OP_AND: return GDScriptDecomp::GlobalToken::G_TK_OP_AND;
		case TK_OP_OR: return GDScriptDecomp::GlobalToken::G_TK_OP_OR;
		case TK_OP_NOT: return GDScriptDecomp::GlobalToken::G_TK_OP_NOT;
		case TK_OP_ADD: return GDScriptDecomp::GlobalToken::G_TK_OP_ADD;
		case TK_OP_SUB: return GDScriptDecomp::GlobalToken::G_TK_OP_SUB;
		case TK_OP_MUL: return GDScriptDecomp::GlobalToken::G_TK_OP_MUL;
		case TK_OP_DIV: return GDScriptDecomp::GlobalToken::G_TK_OP_DIV;
		case TK_OP_MOD: return GDScriptDecomp::GlobalToken::G_TK_OP_MOD;
		case TK_OP_SHIFT_LEFT: return GDScriptDecomp::GlobalToken::G_TK_OP_SHIFT_LEFT;
		case TK_OP_SHIFT_RIGHT: return GDScriptDecomp::GlobalToken::G_TK_OP_SHIFT_RIGHT;
		case TK_OP_ASSIGN: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN;
		case TK_OP_ASSIGN_ADD: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_ADD;
		case TK_OP_ASSIGN_SUB: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_SUB;
		case TK_OP_ASSIGN_MUL: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_MUL;
		case TK_OP_ASSIGN_DIV: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_DIV;
		case TK_OP_ASSIGN_MOD: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_MOD;
		case TK_OP_ASSIGN_SHIFT_LEFT: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_SHIFT_LEFT;
		case TK_OP_ASSIGN_SHIFT_RIGHT: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_SHIFT_RIGHT;
		case TK_OP_ASSIGN_BIT_AND: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_BIT_AND;
		case TK_OP_ASSIGN_BIT_OR: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_BIT_OR;
		case TK_OP_ASSIGN_BIT_XOR: return GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_BIT_XOR;
		case TK_OP_BIT_AND: return GDScriptDecomp::GlobalToken::G_TK_OP_BIT_AND;
		case TK_OP_BIT_OR: return GDScriptDecomp::GlobalToken::G_TK_OP_BIT_OR;
		case TK_OP_BIT_XOR: return GDScriptDecomp::GlobalToken::G_TK_OP_BIT_XOR;
		case TK_OP_BIT_INVERT: return GDScriptDecomp::GlobalToken::G_TK_OP_BIT_INVERT;
		case TK_CF_IF: return GDScriptDecomp::GlobalToken::G_TK_CF_IF;
		case TK_CF_ELIF: return GDScriptDecomp::GlobalToken::G_TK_CF_ELIF;
		case TK_CF_ELSE: return GDScriptDecomp::GlobalToken::G_TK_CF_ELSE;
		case TK_CF_FOR: return GDScriptDecomp::GlobalToken::G_TK_CF_FOR;
		case TK_CF_DO: return GDScriptDecomp::GlobalToken::G_TK_CF_DO;
		case TK_CF_WHILE: return GDScriptDecomp::GlobalToken::G_TK_CF_WHILE;
		case TK_CF_SWITCH: return GDScriptDecomp::GlobalToken::G_TK_CF_SWITCH;
		case TK_CF_CASE: return GDScriptDecomp::GlobalToken::G_TK_CF_CASE;
		case TK_CF_BREAK: return GDScriptDecomp::GlobalToken::G_TK_CF_BREAK;
		case TK_CF_CONTINUE: return GDScriptDecomp::GlobalToken::G_TK_CF_CONTINUE;
		case TK_CF_PASS: return GDScriptDecomp::GlobalToken::G_TK_CF_PASS;
		case TK_CF_RETURN: return GDScriptDecomp::GlobalToken::G_TK_CF_RETURN;
		case TK_PR_FUNCTION: return GDScriptDecomp::GlobalToken::G_TK_PR_FUNCTION;
		case TK_PR_CLASS: return GDScriptDecomp::GlobalToken::G_TK_PR_CLASS;
		case TK_PR_EXTENDS: return GDScriptDecomp::GlobalToken::G_TK_PR_EXTENDS;
		case TK_PR_TOOL: return GDScriptDecomp::GlobalToken::G_TK_PR_TOOL;
		case TK_PR_STATIC: return GDScriptDecomp::GlobalToken::G_TK_PR_STATIC;
		case TK_PR_EXPORT: return GDScriptDecomp::GlobalToken::G_TK_PR_EXPORT;
		case TK_PR_SETGET: return GDScriptDecomp::GlobalToken::G_TK_PR_SETGET;
		case TK_PR_CONST: return GDScriptDecomp::GlobalToken::G_TK_PR_CONST;
		case TK_PR_VAR: return GDScriptDecomp::GlobalToken::G_TK_PR_VAR;
		case TK_PR_PRELOAD: return GDScriptDecomp::GlobalToken::G_TK_PR_PRELOAD;
		case TK_PR_ASSERT: return GDScriptDecomp::GlobalToken::G_TK_PR_ASSERT;
		case TK_PR_YIELD: return GDScriptDecomp::GlobalToken::G_TK_PR_YIELD;
		case TK_BRACKET_OPEN: return GDScriptDecomp::GlobalToken::G_TK_BRACKET_OPEN;
		case TK_BRACKET_CLOSE: return GDScriptDecomp::GlobalToken::G_TK_BRACKET_CLOSE;
		case TK_CURLY_BRACKET_OPEN: return GDScriptDecomp::GlobalToken::G_TK_CURLY_BRACKET_OPEN;
		case TK_CURLY_BRACKET_CLOSE: return GDScriptDecomp::GlobalToken::G_TK_CURLY_BRACKET_CLOSE;
		case TK_PARENTHESIS_OPEN: return GDScriptDecomp::GlobalToken::G_TK_PARENTHESIS_OPEN;
		case TK_PARENTHESIS_CLOSE: return GDScriptDecomp::GlobalToken::G_TK_PARENTHESIS_CLOSE;
		case TK_COMMA: return GDScriptDecomp::GlobalToken::G_TK_COMMA;
		case TK_SEMICOLON: return GDScriptDecomp::GlobalToken::G_TK_SEMICOLON;
		case TK_PERIOD: return GDScriptDecomp::GlobalToken::G_TK_PERIOD;
		case TK_QUESTION_MARK: return GDScriptDecomp::GlobalToken::G_TK_QUESTION_MARK;
		case TK_COLON: return GDScriptDecomp::GlobalToken::G_TK_COLON;
		case TK_NEWLINE: return GDScriptDecomp::GlobalToken::G_TK_NEWLINE;
		case TK_ERROR: return GDScriptDecomp::GlobalToken::G_TK_ERROR;
		case TK_EOF: return GDScriptDecomp::GlobalToken::G_TK_EOF;
		case TK_MAX: return GDScriptDecomp::GlobalToken::G_TK_MAX;
		default: return GDScriptDecomp::GlobalToken::G_TK_MAX;
	}
	return GDScriptDecomp::GlobalToken::G_TK_MAX;
}

int GDScriptDecomp_e82dc40::get_local_token_val(GDScriptDecomp::GlobalToken p_token) const {
	switch(p_token) {
		case GDScriptDecomp::GlobalToken::G_TK_EMPTY: return (int) TK_EMPTY;
		case GDScriptDecomp::GlobalToken::G_TK_IDENTIFIER: return (int) TK_IDENTIFIER;
		case GDScriptDecomp::GlobalToken::G_TK_CONSTANT: return (int) TK_CONSTANT;
		case GDScriptDecomp::GlobalToken::G_TK_SELF: return (int) TK_SELF;
		case GDScriptDecomp::GlobalToken::G_TK_BUILT_IN_TYPE: return (int) TK_BUILT_IN_TYPE;
		case GDScriptDecomp::GlobalToken::G_TK_BUILT_IN_FUNC: return (int) TK_BUILT_IN_FUNC;
		case GDScriptDecomp::GlobalToken::G_TK_OP_IN: return (int) TK_OP_IN;
		case GDScriptDecomp::GlobalToken::G_TK_OP_EQUAL: return (int) TK_OP_EQUAL;
		case GDScriptDecomp::GlobalToken::G_TK_OP_NOT_EQUAL: return (int) TK_OP_NOT_EQUAL;
		case GDScriptDecomp::GlobalToken::G_TK_OP_LESS: return (int) TK_OP_LESS;
		case GDScriptDecomp::GlobalToken::G_TK_OP_LESS_EQUAL: return (int) TK_OP_LESS_EQUAL;
		case GDScriptDecomp::GlobalToken::G_TK_OP_GREATER: return (int) TK_OP_GREATER;
		case GDScriptDecomp::GlobalToken::G_TK_OP_GREATER_EQUAL: return (int) TK_OP_GREATER_EQUAL;
		case GDScriptDecomp::GlobalToken::G_TK_OP_AND: return (int) TK_OP_AND;
		case GDScriptDecomp::GlobalToken::G_TK_OP_OR: return (int) TK_OP_OR;
		case GDScriptDecomp::GlobalToken::G_TK_OP_NOT: return (int) TK_OP_NOT;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ADD: return (int) TK_OP_ADD;
		case GDScriptDecomp::GlobalToken::G_TK_OP_SUB: return (int) TK_OP_SUB;
		case GDScriptDecomp::GlobalToken::G_TK_OP_MUL: return (int) TK_OP_MUL;
		case GDScriptDecomp::GlobalToken::G_TK_OP_DIV: return (int) TK_OP_DIV;
		case GDScriptDecomp::GlobalToken::G_TK_OP_MOD: return (int) TK_OP_MOD;
		case GDScriptDecomp::GlobalToken::G_TK_OP_SHIFT_LEFT: return (int) TK_OP_SHIFT_LEFT;
		case GDScriptDecomp::GlobalToken::G_TK_OP_SHIFT_RIGHT: return (int) TK_OP_SHIFT_RIGHT;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN: return (int) TK_OP_ASSIGN;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_ADD: return (int) TK_OP_ASSIGN_ADD;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_SUB: return (int) TK_OP_ASSIGN_SUB;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_MUL: return (int) TK_OP_ASSIGN_MUL;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_DIV: return (int) TK_OP_ASSIGN_DIV;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_MOD: return (int) TK_OP_ASSIGN_MOD;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_SHIFT_LEFT: return (int) TK_OP_ASSIGN_SHIFT_LEFT;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_SHIFT_RIGHT: return (int) TK_OP_ASSIGN_SHIFT_RIGHT;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_BIT_AND: return (int) TK_OP_ASSIGN_BIT_AND;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_BIT_OR: return (int) TK_OP_ASSIGN_BIT_OR;
		case GDScriptDecomp::GlobalToken::G_TK_OP_ASSIGN_BIT_XOR: return (int) TK_OP_ASSIGN_BIT_XOR;
		case GDScriptDecomp::GlobalToken::G_TK_OP_BIT_AND: return (int) TK_OP_BIT_AND;
		case GDScriptDecomp::GlobalToken::G_TK_OP_BIT_OR: return (int) TK_OP_BIT_OR;
		case GDScriptDecomp::GlobalToken::G_TK_OP_BIT_XOR: return (int) TK_OP_BIT_XOR;
		case GDScriptDecomp::GlobalToken::G_TK_OP_BIT_INVERT: return (int) TK_OP_BIT_INVERT;
		case GDScriptDecomp::GlobalToken::G_TK_CF_IF: return (int) TK_CF_IF;
		case GDScriptDecomp::GlobalToken::G_TK_CF_ELIF: return (int) TK_CF_ELIF;
		case GDScriptDecomp::GlobalToken::G_TK_CF_ELSE: return (int) TK_CF_ELSE;
		case GDScriptDecomp::GlobalToken::G_TK_CF_FOR: return (int) TK_CF_FOR;
		case GDScriptDecomp::GlobalToken::G_TK_CF_DO: return (int) TK_CF_DO;
		case GDScriptDecomp::GlobalToken::G_TK_CF_WHILE: return (int) TK_CF_WHILE;
		case GDScriptDecomp::GlobalToken::G_TK_CF_SWITCH: return (int) TK_CF_SWITCH;
		case GDScriptDecomp::GlobalToken::G_TK_CF_CASE: return (int) TK_CF_CASE;
		case GDScriptDecomp::GlobalToken::G_TK_CF_BREAK: return (int) TK_CF_BREAK;
		case GDScriptDecomp::GlobalToken::G_TK_CF_CONTINUE: return (int) TK_CF_CONTINUE;
		case GDScriptDecomp::GlobalToken::G_TK_CF_PASS: return (int) TK_CF_PASS;
		case GDScriptDecomp::GlobalToken::G_TK_CF_RETURN: return (int) TK_CF_RETURN;
		case GDScriptDecomp::GlobalToken::G_TK_PR_FUNCTION: return (int) TK_PR_FUNCTION;
		case GDScriptDecomp::GlobalToken::G_TK_PR_CLASS: return (int) TK_PR_CLASS;
		case GDScriptDecomp::GlobalToken::G_TK_PR_EXTENDS: return (int) TK_PR_EXTENDS;
		case GDScriptDecomp::GlobalToken::G_TK_PR_TOOL: return (int) TK_PR_TOOL;
		case GDScriptDecomp::GlobalToken::G_TK_PR_STATIC: return (int) TK_PR_STATIC;
		case GDScriptDecomp::GlobalToken::G_TK_PR_EXPORT: return (int) TK_PR_EXPORT;
		case GDScriptDecomp::GlobalToken::G_TK_PR_SETGET: return (int) TK_PR_SETGET;
		case GDScriptDecomp::GlobalToken::G_TK_PR_CONST: return (int) TK_PR_CONST;
		case GDScriptDecomp::GlobalToken::G_TK_PR_VAR: return (int) TK_PR_VAR;
		case GDScriptDecomp::GlobalToken::G_TK_PR_PRELOAD: return (int) TK_PR_PRELOAD;
		case GDScriptDecomp::GlobalToken::G_TK_PR_ASSERT: return (int) TK_PR_ASSERT;
		case GDScriptDecomp::GlobalToken::G_TK_PR_YIELD: return (int) TK_PR_YIELD;
		case GDScriptDecomp::GlobalToken::G_TK_BRACKET_OPEN: return (int) TK_BRACKET_OPEN;
		case GDScriptDecomp::GlobalToken::G_TK_BRACKET_CLOSE: return (int) TK_BRACKET_CLOSE;
		case GDScriptDecomp::GlobalToken::G_TK_CURLY_BRACKET_OPEN: return (int) TK_CURLY_BRACKET_OPEN;
		case GDScriptDecomp::GlobalToken::G_TK_CURLY_BRACKET_CLOSE: return (int) TK_CURLY_BRACKET_CLOSE;
		case GDScriptDecomp::GlobalToken::G_TK_PARENTHESIS_OPEN: return (int) TK_PARENTHESIS_OPEN;
		case GDScriptDecomp::GlobalToken::G_TK_PARENTHESIS_CLOSE: return (int) TK_PARENTHESIS_CLOSE;
		case GDScriptDecomp::GlobalToken::G_TK_COMMA: return (int) TK_COMMA;
		case GDScriptDecomp::GlobalToken::G_TK_SEMICOLON: return (int) TK_SEMICOLON;
		case GDScriptDecomp::GlobalToken::G_TK_PERIOD: return (int) TK_PERIOD;
		case GDScriptDecomp::GlobalToken::G_TK_QUESTION_MARK: return (int) TK_QUESTION_MARK;
		case GDScriptDecomp::GlobalToken::G_TK_COLON: return (int) TK_COLON;
		case GDScriptDecomp::GlobalToken::G_TK_NEWLINE: return (int) TK_NEWLINE;
		case GDScriptDecomp::GlobalToken::G_TK_ERROR: return (int) TK_ERROR;
		case GDScriptDecomp::GlobalToken::G_TK_EOF: return (int) TK_EOF;
		case GDScriptDecomp::GlobalToken::G_TK_MAX: return (int) TK_MAX;
		default: return -1;
	}
	return -1;
}

