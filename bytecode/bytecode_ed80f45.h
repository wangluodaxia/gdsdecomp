// This file is automatically generated by `bytecode_generator.py`
// Do not edit this file directly, as it will be overwritten.
// Instead, edit `bytecode_generator.py` and run it to generate this file.

// clang-format off
#pragma once

#include "bytecode_base.h"

class GDScriptDecomp_ed80f45 : public GDScriptDecomp {
	GDCLASS(GDScriptDecomp_ed80f45, GDScriptDecomp);
protected:
	static void _bind_methods(){};
	static constexpr int bytecode_version = 10;
	static constexpr int bytecode_rev = 0xed80f45;
	static constexpr int engine_ver_major = 2;
	static constexpr int variant_ver_major = 2;
	static constexpr const char *bytecode_rev_str = "ed80f45";
	static constexpr const char *engine_version = "2.1.3-stable";
	static constexpr const char *max_engine_version = "2.1.6-stable";
	static constexpr int parent = 0x85585c7;

	virtual Vector<GlobalToken> get_added_tokens() const override { return {GlobalToken::G_TK_PR_ENUM}; }
public:
	virtual String get_function_name(int p_func) const override;
	virtual int get_function_count() const override;
	virtual Pair<int, int> get_function_arg_count(int p_func) const override;
	virtual int get_token_max() const override;
	virtual int get_function_index(const String &p_func) const override;
	virtual GDScriptDecomp::GlobalToken get_global_token(int p_token) const override;
	virtual int get_local_token_val(GDScriptDecomp::GlobalToken p_token) const override;
	virtual int get_bytecode_version() const override { return bytecode_version; }
	virtual int get_bytecode_rev() const override { return bytecode_rev; }
	virtual int get_engine_ver_major() const override { return engine_ver_major; }
	virtual int get_variant_ver_major() const override { return variant_ver_major; }
	virtual int get_parent() const override { return parent; }
	virtual String get_engine_version() const override { return engine_version; }
	virtual String get_max_engine_version() const override { return max_engine_version; }
	GDScriptDecomp_ed80f45() {}
};

