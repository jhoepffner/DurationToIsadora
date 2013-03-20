// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_OP_FLOAT_FIXED_HPP
#define JIT_CODEGEN_OP_FLOAT_FIXED_HPP 1
#include "math.codegen.h"
#include "jit.codegen.vec.hpp"
#include "jit.codegen.op.hpp"

#ifdef __cplusplus
extern "C" {
#endif

Fixed jit_gen_acos_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_acos_float(FixedToFloat(v))
	);
}

Fixed jit_gen_acosh_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_acosh_float(FixedToFloat(v))
	);
}

Fixed jit_gen_asin_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_asin_float(FixedToFloat(v))
	);
}

Fixed jit_gen_asinh_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_asinh_float(FixedToFloat(v))
	);
}

Fixed jit_gen_atan_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_atan_float(FixedToFloat(v))
	);
}

Fixed jit_gen_atanh_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_atanh_float(FixedToFloat(v))
	);
}

Fixed jit_gen_ceil_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_ceil_float(FixedToFloat(v))
	);
}

Fixed jit_gen_cos_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_cos_float(FixedToFloat(v))
	);
}

Fixed jit_gen_cosh_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_cosh_float(FixedToFloat(v))
	);
}

Fixed jit_gen_exp_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_exp_float(FixedToFloat(v))
	);
}

Fixed jit_gen_exp2_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_exp2_float(FixedToFloat(v))
	);
}

Fixed jit_gen_floor_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_floor_float(FixedToFloat(v))
	);
}

Fixed fract_fixed(Fixed v) {
	return FloatToFixed(
		fract_float(FixedToFloat(v))
	);
}

Fixed jit_gen_log_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_log_float(FixedToFloat(v))
	);
}

Fixed jit_gen_log2_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_log2_float(FixedToFloat(v))
	);
}

Fixed jit_gen_log10_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_log10_float(FixedToFloat(v))
	);
}

Fixed jit_gen_round_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_round_float(FixedToFloat(v))
	);
}

Fixed jit_gen_sin_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_sin_float(FixedToFloat(v))
	);
}

Fixed jit_gen_sinh_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_sinh_float(FixedToFloat(v))
	);
}

Fixed jit_gen_sqrt_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_sqrt_float(FixedToFloat(v))
	);
}

Fixed jit_gen_tan_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_tan_float(FixedToFloat(v))
	);
}

Fixed jit_gen_tanh_fixed(Fixed v) {
	return FloatToFixed(
		jit_gen_tanh_float(FixedToFloat(v))
	);
}

Fixed trunc_fixed(Fixed v) {
	return FloatToFixed(
		trunc_float(FixedToFloat(v))
	);
}

Fixed jit_gen_atan2_fixed(Fixed v1, Fixed v2) {
	return FloatToFixed(
		jit_gen_atan2_float(FixedToFloat(v1), FixedToFloat(v2))
	);
}

Fixed hypot_fixed(Fixed v1, Fixed v2) {
	return FloatToFixed(
		hypot_float(FixedToFloat(v1), FixedToFloat(v2))
	);
}

Fixed mod_fixed(Fixed v1, Fixed v2) {
	return FloatToFixed(
		mod_float(FixedToFloat(v1), FixedToFloat(v2))
	);
}

Fixed jit_gen_pow_fixed(Fixed v1, Fixed v2) {
	return FloatToFixed(
		jit_gen_pow_float(FixedToFloat(v1), FixedToFloat(v2))
	);
}



#ifdef __cplusplus
}
#endif
	
	

#endif // JIT_CODEGEN_OP_FLOAT_FIXED_HPP
