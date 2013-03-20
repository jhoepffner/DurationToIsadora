// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_OP_FLOAT_HPP
#define JIT_CODEGEN_OP_FLOAT_HPP 1
#include "math.codegen.h"
#include "jit.codegen.vec.hpp"
#include "jit.codegen.op.hpp"

float abs(const float v) {
	return abs_float(v);
}

Vec2<float> abs(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = abs_float(v.x);
	rv.y = abs_float(v.y);

	return rv;
}

Vec3<float> abs(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = abs_float(v.x);
	rv.y = abs_float(v.y);
	rv.z = abs_float(v.z);

	return rv;
}

Vec4<float> abs(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = abs_float(v.x);
	rv.y = abs_float(v.y);
	rv.z = abs_float(v.z);
	rv.w = abs_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> abs(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = abs_float(v.v[i]);
	}
	return rv;
}

float jit_gen_acos(const float v) {
	return jit_gen_acos_float(v);
}

Vec2<float> jit_gen_acos(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_acos_float(v.x);
	rv.y = jit_gen_acos_float(v.y);

	return rv;
}

Vec3<float> jit_gen_acos(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_acos_float(v.x);
	rv.y = jit_gen_acos_float(v.y);
	rv.z = jit_gen_acos_float(v.z);

	return rv;
}

Vec4<float> jit_gen_acos(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_acos_float(v.x);
	rv.y = jit_gen_acos_float(v.y);
	rv.z = jit_gen_acos_float(v.z);
	rv.w = jit_gen_acos_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_acos(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_acos_float(v.v[i]);
	}
	return rv;
}

float jit_gen_acosh(const float v) {
	return jit_gen_acosh_float(v);
}

Vec2<float> jit_gen_acosh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_acosh_float(v.x);
	rv.y = jit_gen_acosh_float(v.y);

	return rv;
}

Vec3<float> jit_gen_acosh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_acosh_float(v.x);
	rv.y = jit_gen_acosh_float(v.y);
	rv.z = jit_gen_acosh_float(v.z);

	return rv;
}

Vec4<float> jit_gen_acosh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_acosh_float(v.x);
	rv.y = jit_gen_acosh_float(v.y);
	rv.z = jit_gen_acosh_float(v.z);
	rv.w = jit_gen_acosh_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_acosh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_acosh_float(v.v[i]);
	}
	return rv;
}

float jit_gen_asin(const float v) {
	return jit_gen_asin_float(v);
}

Vec2<float> jit_gen_asin(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_asin_float(v.x);
	rv.y = jit_gen_asin_float(v.y);

	return rv;
}

Vec3<float> jit_gen_asin(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_asin_float(v.x);
	rv.y = jit_gen_asin_float(v.y);
	rv.z = jit_gen_asin_float(v.z);

	return rv;
}

Vec4<float> jit_gen_asin(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_asin_float(v.x);
	rv.y = jit_gen_asin_float(v.y);
	rv.z = jit_gen_asin_float(v.z);
	rv.w = jit_gen_asin_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_asin(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_asin_float(v.v[i]);
	}
	return rv;
}

float jit_gen_asinh(const float v) {
	return jit_gen_asinh_float(v);
}

Vec2<float> jit_gen_asinh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_asinh_float(v.x);
	rv.y = jit_gen_asinh_float(v.y);

	return rv;
}

Vec3<float> jit_gen_asinh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_asinh_float(v.x);
	rv.y = jit_gen_asinh_float(v.y);
	rv.z = jit_gen_asinh_float(v.z);

	return rv;
}

Vec4<float> jit_gen_asinh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_asinh_float(v.x);
	rv.y = jit_gen_asinh_float(v.y);
	rv.z = jit_gen_asinh_float(v.z);
	rv.w = jit_gen_asinh_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_asinh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_asinh_float(v.v[i]);
	}
	return rv;
}

float jit_gen_atan(const float v) {
	return jit_gen_atan_float(v);
}

Vec2<float> jit_gen_atan(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_atan_float(v.x);
	rv.y = jit_gen_atan_float(v.y);

	return rv;
}

Vec3<float> jit_gen_atan(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_atan_float(v.x);
	rv.y = jit_gen_atan_float(v.y);
	rv.z = jit_gen_atan_float(v.z);

	return rv;
}

Vec4<float> jit_gen_atan(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_atan_float(v.x);
	rv.y = jit_gen_atan_float(v.y);
	rv.z = jit_gen_atan_float(v.z);
	rv.w = jit_gen_atan_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_atan(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atan_float(v.v[i]);
	}
	return rv;
}

float jit_gen_atanh(const float v) {
	return jit_gen_atanh_float(v);
}

Vec2<float> jit_gen_atanh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_atanh_float(v.x);
	rv.y = jit_gen_atanh_float(v.y);

	return rv;
}

Vec3<float> jit_gen_atanh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_atanh_float(v.x);
	rv.y = jit_gen_atanh_float(v.y);
	rv.z = jit_gen_atanh_float(v.z);

	return rv;
}

Vec4<float> jit_gen_atanh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_atanh_float(v.x);
	rv.y = jit_gen_atanh_float(v.y);
	rv.z = jit_gen_atanh_float(v.z);
	rv.w = jit_gen_atanh_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_atanh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atanh_float(v.v[i]);
	}
	return rv;
}

float jit_gen_ceil(const float v) {
	return jit_gen_ceil_float(v);
}

Vec2<float> jit_gen_ceil(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_ceil_float(v.x);
	rv.y = jit_gen_ceil_float(v.y);

	return rv;
}

Vec3<float> jit_gen_ceil(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_ceil_float(v.x);
	rv.y = jit_gen_ceil_float(v.y);
	rv.z = jit_gen_ceil_float(v.z);

	return rv;
}

Vec4<float> jit_gen_ceil(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_ceil_float(v.x);
	rv.y = jit_gen_ceil_float(v.y);
	rv.z = jit_gen_ceil_float(v.z);
	rv.w = jit_gen_ceil_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_ceil(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_ceil_float(v.v[i]);
	}
	return rv;
}

float jit_gen_cos(const float v) {
	return jit_gen_cos_float(v);
}

Vec2<float> jit_gen_cos(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_cos_float(v.x);
	rv.y = jit_gen_cos_float(v.y);

	return rv;
}

Vec3<float> jit_gen_cos(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_cos_float(v.x);
	rv.y = jit_gen_cos_float(v.y);
	rv.z = jit_gen_cos_float(v.z);

	return rv;
}

Vec4<float> jit_gen_cos(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_cos_float(v.x);
	rv.y = jit_gen_cos_float(v.y);
	rv.z = jit_gen_cos_float(v.z);
	rv.w = jit_gen_cos_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_cos(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_cos_float(v.v[i]);
	}
	return rv;
}

float jit_gen_cosh(const float v) {
	return jit_gen_cosh_float(v);
}

Vec2<float> jit_gen_cosh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_cosh_float(v.x);
	rv.y = jit_gen_cosh_float(v.y);

	return rv;
}

Vec3<float> jit_gen_cosh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_cosh_float(v.x);
	rv.y = jit_gen_cosh_float(v.y);
	rv.z = jit_gen_cosh_float(v.z);

	return rv;
}

Vec4<float> jit_gen_cosh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_cosh_float(v.x);
	rv.y = jit_gen_cosh_float(v.y);
	rv.z = jit_gen_cosh_float(v.z);
	rv.w = jit_gen_cosh_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_cosh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_cosh_float(v.v[i]);
	}
	return rv;
}

float jit_gen_exp(const float v) {
	return jit_gen_exp_float(v);
}

Vec2<float> jit_gen_exp(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_exp_float(v.x);
	rv.y = jit_gen_exp_float(v.y);

	return rv;
}

Vec3<float> jit_gen_exp(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_exp_float(v.x);
	rv.y = jit_gen_exp_float(v.y);
	rv.z = jit_gen_exp_float(v.z);

	return rv;
}

Vec4<float> jit_gen_exp(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_exp_float(v.x);
	rv.y = jit_gen_exp_float(v.y);
	rv.z = jit_gen_exp_float(v.z);
	rv.w = jit_gen_exp_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_exp(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_exp_float(v.v[i]);
	}
	return rv;
}

float jit_gen_exp2(const float v) {
	return jit_gen_exp2_float(v);
}

Vec2<float> jit_gen_exp2(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_exp2_float(v.x);
	rv.y = jit_gen_exp2_float(v.y);

	return rv;
}

Vec3<float> jit_gen_exp2(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_exp2_float(v.x);
	rv.y = jit_gen_exp2_float(v.y);
	rv.z = jit_gen_exp2_float(v.z);

	return rv;
}

Vec4<float> jit_gen_exp2(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_exp2_float(v.x);
	rv.y = jit_gen_exp2_float(v.y);
	rv.z = jit_gen_exp2_float(v.z);
	rv.w = jit_gen_exp2_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_exp2(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_exp2_float(v.v[i]);
	}
	return rv;
}

float jit_gen_floor(const float v) {
	return jit_gen_floor_float(v);
}

Vec2<float> jit_gen_floor(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_floor_float(v.x);
	rv.y = jit_gen_floor_float(v.y);

	return rv;
}

Vec3<float> jit_gen_floor(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_floor_float(v.x);
	rv.y = jit_gen_floor_float(v.y);
	rv.z = jit_gen_floor_float(v.z);

	return rv;
}

Vec4<float> jit_gen_floor(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_floor_float(v.x);
	rv.y = jit_gen_floor_float(v.y);
	rv.z = jit_gen_floor_float(v.z);
	rv.w = jit_gen_floor_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_floor(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_floor_float(v.v[i]);
	}
	return rv;
}

float fract(const float v) {
	return fract_float(v);
}

Vec2<float> fract(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = fract_float(v.x);
	rv.y = fract_float(v.y);

	return rv;
}

Vec3<float> fract(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = fract_float(v.x);
	rv.y = fract_float(v.y);
	rv.z = fract_float(v.z);

	return rv;
}

Vec4<float> fract(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = fract_float(v.x);
	rv.y = fract_float(v.y);
	rv.z = fract_float(v.z);
	rv.w = fract_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> fract(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = fract_float(v.v[i]);
	}
	return rv;
}

float jit_gen_log(const float v) {
	return jit_gen_log_float(v);
}

Vec2<float> jit_gen_log(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_log_float(v.x);
	rv.y = jit_gen_log_float(v.y);

	return rv;
}

Vec3<float> jit_gen_log(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_log_float(v.x);
	rv.y = jit_gen_log_float(v.y);
	rv.z = jit_gen_log_float(v.z);

	return rv;
}

Vec4<float> jit_gen_log(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_log_float(v.x);
	rv.y = jit_gen_log_float(v.y);
	rv.z = jit_gen_log_float(v.z);
	rv.w = jit_gen_log_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_log(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log_float(v.v[i]);
	}
	return rv;
}

float jit_gen_log2(const float v) {
	return jit_gen_log2_float(v);
}

Vec2<float> jit_gen_log2(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_log2_float(v.x);
	rv.y = jit_gen_log2_float(v.y);

	return rv;
}

Vec3<float> jit_gen_log2(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_log2_float(v.x);
	rv.y = jit_gen_log2_float(v.y);
	rv.z = jit_gen_log2_float(v.z);

	return rv;
}

Vec4<float> jit_gen_log2(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_log2_float(v.x);
	rv.y = jit_gen_log2_float(v.y);
	rv.z = jit_gen_log2_float(v.z);
	rv.w = jit_gen_log2_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_log2(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log2_float(v.v[i]);
	}
	return rv;
}

float jit_gen_log10(const float v) {
	return jit_gen_log10_float(v);
}

Vec2<float> jit_gen_log10(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_log10_float(v.x);
	rv.y = jit_gen_log10_float(v.y);

	return rv;
}

Vec3<float> jit_gen_log10(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_log10_float(v.x);
	rv.y = jit_gen_log10_float(v.y);
	rv.z = jit_gen_log10_float(v.z);

	return rv;
}

Vec4<float> jit_gen_log10(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_log10_float(v.x);
	rv.y = jit_gen_log10_float(v.y);
	rv.z = jit_gen_log10_float(v.z);
	rv.w = jit_gen_log10_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_log10(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log10_float(v.v[i]);
	}
	return rv;
}

float lnot(const float v) {
	return lnot_float(v);
}

Vec2<float> lnot(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = lnot_float(v.x);
	rv.y = lnot_float(v.y);

	return rv;
}

Vec3<float> lnot(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = lnot_float(v.x);
	rv.y = lnot_float(v.y);
	rv.z = lnot_float(v.z);

	return rv;
}

Vec4<float> lnot(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = lnot_float(v.x);
	rv.y = lnot_float(v.y);
	rv.z = lnot_float(v.z);
	rv.w = lnot_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> lnot(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lnot_float(v.v[i]);
	}
	return rv;
}

float jit_gen_round(const float v) {
	return jit_gen_round_float(v);
}

Vec2<float> jit_gen_round(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_round_float(v.x);
	rv.y = jit_gen_round_float(v.y);

	return rv;
}

Vec3<float> jit_gen_round(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_round_float(v.x);
	rv.y = jit_gen_round_float(v.y);
	rv.z = jit_gen_round_float(v.z);

	return rv;
}

Vec4<float> jit_gen_round(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_round_float(v.x);
	rv.y = jit_gen_round_float(v.y);
	rv.z = jit_gen_round_float(v.z);
	rv.w = jit_gen_round_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_round(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_round_float(v.v[i]);
	}
	return rv;
}

float sign(const float v) {
	return sign_float(v);
}

Vec2<float> sign(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = sign_float(v.x);
	rv.y = sign_float(v.y);

	return rv;
}

Vec3<float> sign(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = sign_float(v.x);
	rv.y = sign_float(v.y);
	rv.z = sign_float(v.z);

	return rv;
}

Vec4<float> sign(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = sign_float(v.x);
	rv.y = sign_float(v.y);
	rv.z = sign_float(v.z);
	rv.w = sign_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> sign(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sign_float(v.v[i]);
	}
	return rv;
}

float jit_gen_sin(const float v) {
	return jit_gen_sin_float(v);
}

Vec2<float> jit_gen_sin(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_sin_float(v.x);
	rv.y = jit_gen_sin_float(v.y);

	return rv;
}

Vec3<float> jit_gen_sin(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_sin_float(v.x);
	rv.y = jit_gen_sin_float(v.y);
	rv.z = jit_gen_sin_float(v.z);

	return rv;
}

Vec4<float> jit_gen_sin(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_sin_float(v.x);
	rv.y = jit_gen_sin_float(v.y);
	rv.z = jit_gen_sin_float(v.z);
	rv.w = jit_gen_sin_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_sin(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sin_float(v.v[i]);
	}
	return rv;
}

float jit_gen_sinh(const float v) {
	return jit_gen_sinh_float(v);
}

Vec2<float> jit_gen_sinh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_sinh_float(v.x);
	rv.y = jit_gen_sinh_float(v.y);

	return rv;
}

Vec3<float> jit_gen_sinh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_sinh_float(v.x);
	rv.y = jit_gen_sinh_float(v.y);
	rv.z = jit_gen_sinh_float(v.z);

	return rv;
}

Vec4<float> jit_gen_sinh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_sinh_float(v.x);
	rv.y = jit_gen_sinh_float(v.y);
	rv.z = jit_gen_sinh_float(v.z);
	rv.w = jit_gen_sinh_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_sinh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sinh_float(v.v[i]);
	}
	return rv;
}

float jit_gen_sqrt(const float v) {
	return jit_gen_sqrt_float(v);
}

Vec2<float> jit_gen_sqrt(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_sqrt_float(v.x);
	rv.y = jit_gen_sqrt_float(v.y);

	return rv;
}

Vec3<float> jit_gen_sqrt(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_sqrt_float(v.x);
	rv.y = jit_gen_sqrt_float(v.y);
	rv.z = jit_gen_sqrt_float(v.z);

	return rv;
}

Vec4<float> jit_gen_sqrt(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_sqrt_float(v.x);
	rv.y = jit_gen_sqrt_float(v.y);
	rv.z = jit_gen_sqrt_float(v.z);
	rv.w = jit_gen_sqrt_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_sqrt(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sqrt_float(v.v[i]);
	}
	return rv;
}

float jit_gen_tan(const float v) {
	return jit_gen_tan_float(v);
}

Vec2<float> jit_gen_tan(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_tan_float(v.x);
	rv.y = jit_gen_tan_float(v.y);

	return rv;
}

Vec3<float> jit_gen_tan(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_tan_float(v.x);
	rv.y = jit_gen_tan_float(v.y);
	rv.z = jit_gen_tan_float(v.z);

	return rv;
}

Vec4<float> jit_gen_tan(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_tan_float(v.x);
	rv.y = jit_gen_tan_float(v.y);
	rv.z = jit_gen_tan_float(v.z);
	rv.w = jit_gen_tan_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_tan(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_tan_float(v.v[i]);
	}
	return rv;
}

float jit_gen_tanh(const float v) {
	return jit_gen_tanh_float(v);
}

Vec2<float> jit_gen_tanh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = jit_gen_tanh_float(v.x);
	rv.y = jit_gen_tanh_float(v.y);

	return rv;
}

Vec3<float> jit_gen_tanh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = jit_gen_tanh_float(v.x);
	rv.y = jit_gen_tanh_float(v.y);
	rv.z = jit_gen_tanh_float(v.z);

	return rv;
}

Vec4<float> jit_gen_tanh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = jit_gen_tanh_float(v.x);
	rv.y = jit_gen_tanh_float(v.y);
	rv.z = jit_gen_tanh_float(v.z);
	rv.w = jit_gen_tanh_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_tanh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_tanh_float(v.v[i]);
	}
	return rv;
}

float trunc(const float v) {
	return trunc_float(v);
}

Vec2<float> trunc(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = trunc_float(v.x);
	rv.y = trunc_float(v.y);

	return rv;
}

Vec3<float> trunc(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = trunc_float(v.x);
	rv.y = trunc_float(v.y);
	rv.z = trunc_float(v.z);

	return rv;
}

Vec4<float> trunc(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = trunc_float(v.x);
	rv.y = trunc_float(v.y);
	rv.z = trunc_float(v.z);
	rv.w = trunc_float(v.w);

	return rv;
}

template <unsigned N>
VecN<float, N> trunc(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = trunc_float(v.v[i]);
	}
	return rv;
}

float absdiff(const float v1, const float v2) {
	return absdiff_float(v1, v2);
}

Vec2<float> absdiff(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = absdiff_float(v1.x, v2.x);
	rv.y = absdiff_float(v1.y, v2.y);

	return rv;
}

Vec3<float> absdiff(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = absdiff_float(v1.x, v2.x);
	rv.y = absdiff_float(v1.y, v2.y);
	rv.z = absdiff_float(v1.z, v2.z);

	return rv;
}

Vec4<float> absdiff(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = absdiff_float(v1.x, v2.x);
	rv.y = absdiff_float(v1.y, v2.y);
	rv.z = absdiff_float(v1.z, v2.z);
	rv.w = absdiff_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> absdiff(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = absdiff_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float jit_gen_atan2(const float v1, const float v2) {
	return jit_gen_atan2_float(v1, v2);
}

Vec2<float> jit_gen_atan2(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = jit_gen_atan2_float(v1.x, v2.x);
	rv.y = jit_gen_atan2_float(v1.y, v2.y);

	return rv;
}

Vec3<float> jit_gen_atan2(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = jit_gen_atan2_float(v1.x, v2.x);
	rv.y = jit_gen_atan2_float(v1.y, v2.y);
	rv.z = jit_gen_atan2_float(v1.z, v2.z);

	return rv;
}

Vec4<float> jit_gen_atan2(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = jit_gen_atan2_float(v1.x, v2.x);
	rv.y = jit_gen_atan2_float(v1.y, v2.y);
	rv.z = jit_gen_atan2_float(v1.z, v2.z);
	rv.w = jit_gen_atan2_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_atan2(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atan2_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float eq(const float v1, const float v2) {
	return eq_float(v1, v2);
}

Vec2<float> eq(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = eq_float(v1.x, v2.x);
	rv.y = eq_float(v1.y, v2.y);

	return rv;
}

Vec3<float> eq(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = eq_float(v1.x, v2.x);
	rv.y = eq_float(v1.y, v2.y);
	rv.z = eq_float(v1.z, v2.z);

	return rv;
}

Vec4<float> eq(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = eq_float(v1.x, v2.x);
	rv.y = eq_float(v1.y, v2.y);
	rv.z = eq_float(v1.z, v2.z);
	rv.w = eq_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> eq(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eq_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float eqp(const float v1, const float v2) {
	return eqp_float(v1, v2);
}

Vec2<float> eqp(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = eqp_float(v1.x, v2.x);
	rv.y = eqp_float(v1.y, v2.y);

	return rv;
}

Vec3<float> eqp(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = eqp_float(v1.x, v2.x);
	rv.y = eqp_float(v1.y, v2.y);
	rv.z = eqp_float(v1.z, v2.z);

	return rv;
}

Vec4<float> eqp(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = eqp_float(v1.x, v2.x);
	rv.y = eqp_float(v1.y, v2.y);
	rv.z = eqp_float(v1.z, v2.z);
	rv.w = eqp_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> eqp(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eqp_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float gt(const float v1, const float v2) {
	return gt_float(v1, v2);
}

Vec2<float> gt(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = gt_float(v1.x, v2.x);
	rv.y = gt_float(v1.y, v2.y);

	return rv;
}

Vec3<float> gt(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = gt_float(v1.x, v2.x);
	rv.y = gt_float(v1.y, v2.y);
	rv.z = gt_float(v1.z, v2.z);

	return rv;
}

Vec4<float> gt(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = gt_float(v1.x, v2.x);
	rv.y = gt_float(v1.y, v2.y);
	rv.z = gt_float(v1.z, v2.z);
	rv.w = gt_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> gt(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gt_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float gte(const float v1, const float v2) {
	return gte_float(v1, v2);
}

Vec2<float> gte(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = gte_float(v1.x, v2.x);
	rv.y = gte_float(v1.y, v2.y);

	return rv;
}

Vec3<float> gte(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = gte_float(v1.x, v2.x);
	rv.y = gte_float(v1.y, v2.y);
	rv.z = gte_float(v1.z, v2.z);

	return rv;
}

Vec4<float> gte(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = gte_float(v1.x, v2.x);
	rv.y = gte_float(v1.y, v2.y);
	rv.z = gte_float(v1.z, v2.z);
	rv.w = gte_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> gte(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gte_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float gtep(const float v1, const float v2) {
	return gtep_float(v1, v2);
}

Vec2<float> gtep(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = gtep_float(v1.x, v2.x);
	rv.y = gtep_float(v1.y, v2.y);

	return rv;
}

Vec3<float> gtep(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = gtep_float(v1.x, v2.x);
	rv.y = gtep_float(v1.y, v2.y);
	rv.z = gtep_float(v1.z, v2.z);

	return rv;
}

Vec4<float> gtep(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = gtep_float(v1.x, v2.x);
	rv.y = gtep_float(v1.y, v2.y);
	rv.z = gtep_float(v1.z, v2.z);
	rv.w = gtep_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> gtep(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtep_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float gtp(const float v1, const float v2) {
	return gtp_float(v1, v2);
}

Vec2<float> gtp(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = gtp_float(v1.x, v2.x);
	rv.y = gtp_float(v1.y, v2.y);

	return rv;
}

Vec3<float> gtp(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = gtp_float(v1.x, v2.x);
	rv.y = gtp_float(v1.y, v2.y);
	rv.z = gtp_float(v1.z, v2.z);

	return rv;
}

Vec4<float> gtp(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = gtp_float(v1.x, v2.x);
	rv.y = gtp_float(v1.y, v2.y);
	rv.z = gtp_float(v1.z, v2.z);
	rv.w = gtp_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> gtp(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtp_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float hypot(const float v1, const float v2) {
	return hypot_float(v1, v2);
}

Vec2<float> hypot(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = hypot_float(v1.x, v2.x);
	rv.y = hypot_float(v1.y, v2.y);

	return rv;
}

Vec3<float> hypot(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = hypot_float(v1.x, v2.x);
	rv.y = hypot_float(v1.y, v2.y);
	rv.z = hypot_float(v1.z, v2.z);

	return rv;
}

Vec4<float> hypot(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = hypot_float(v1.x, v2.x);
	rv.y = hypot_float(v1.y, v2.y);
	rv.z = hypot_float(v1.z, v2.z);
	rv.w = hypot_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> hypot(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = hypot_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float land(const float v1, const float v2) {
	return land_float(v1, v2);
}

Vec2<float> land(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = land_float(v1.x, v2.x);
	rv.y = land_float(v1.y, v2.y);

	return rv;
}

Vec3<float> land(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = land_float(v1.x, v2.x);
	rv.y = land_float(v1.y, v2.y);
	rv.z = land_float(v1.z, v2.z);

	return rv;
}

Vec4<float> land(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = land_float(v1.x, v2.x);
	rv.y = land_float(v1.y, v2.y);
	rv.z = land_float(v1.z, v2.z);
	rv.w = land_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> land(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = land_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float lor(const float v1, const float v2) {
	return lor_float(v1, v2);
}

Vec2<float> lor(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = lor_float(v1.x, v2.x);
	rv.y = lor_float(v1.y, v2.y);

	return rv;
}

Vec3<float> lor(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = lor_float(v1.x, v2.x);
	rv.y = lor_float(v1.y, v2.y);
	rv.z = lor_float(v1.z, v2.z);

	return rv;
}

Vec4<float> lor(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = lor_float(v1.x, v2.x);
	rv.y = lor_float(v1.y, v2.y);
	rv.z = lor_float(v1.z, v2.z);
	rv.w = lor_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> lor(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lor_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float lt(const float v1, const float v2) {
	return lt_float(v1, v2);
}

Vec2<float> lt(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = lt_float(v1.x, v2.x);
	rv.y = lt_float(v1.y, v2.y);

	return rv;
}

Vec3<float> lt(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = lt_float(v1.x, v2.x);
	rv.y = lt_float(v1.y, v2.y);
	rv.z = lt_float(v1.z, v2.z);

	return rv;
}

Vec4<float> lt(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = lt_float(v1.x, v2.x);
	rv.y = lt_float(v1.y, v2.y);
	rv.z = lt_float(v1.z, v2.z);
	rv.w = lt_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> lt(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lt_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float lte(const float v1, const float v2) {
	return lte_float(v1, v2);
}

Vec2<float> lte(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = lte_float(v1.x, v2.x);
	rv.y = lte_float(v1.y, v2.y);

	return rv;
}

Vec3<float> lte(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = lte_float(v1.x, v2.x);
	rv.y = lte_float(v1.y, v2.y);
	rv.z = lte_float(v1.z, v2.z);

	return rv;
}

Vec4<float> lte(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = lte_float(v1.x, v2.x);
	rv.y = lte_float(v1.y, v2.y);
	rv.z = lte_float(v1.z, v2.z);
	rv.w = lte_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> lte(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lte_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float ltep(const float v1, const float v2) {
	return ltep_float(v1, v2);
}

Vec2<float> ltep(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = ltep_float(v1.x, v2.x);
	rv.y = ltep_float(v1.y, v2.y);

	return rv;
}

Vec3<float> ltep(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = ltep_float(v1.x, v2.x);
	rv.y = ltep_float(v1.y, v2.y);
	rv.z = ltep_float(v1.z, v2.z);

	return rv;
}

Vec4<float> ltep(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = ltep_float(v1.x, v2.x);
	rv.y = ltep_float(v1.y, v2.y);
	rv.z = ltep_float(v1.z, v2.z);
	rv.w = ltep_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> ltep(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltep_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float ltp(const float v1, const float v2) {
	return ltp_float(v1, v2);
}

Vec2<float> ltp(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = ltp_float(v1.x, v2.x);
	rv.y = ltp_float(v1.y, v2.y);

	return rv;
}

Vec3<float> ltp(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = ltp_float(v1.x, v2.x);
	rv.y = ltp_float(v1.y, v2.y);
	rv.z = ltp_float(v1.z, v2.z);

	return rv;
}

Vec4<float> ltp(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = ltp_float(v1.x, v2.x);
	rv.y = ltp_float(v1.y, v2.y);
	rv.z = ltp_float(v1.z, v2.z);
	rv.w = ltp_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> ltp(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltp_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float max(const float v1, const float v2) {
	return max_float(v1, v2);
}

Vec2<float> max(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = max_float(v1.x, v2.x);
	rv.y = max_float(v1.y, v2.y);

	return rv;
}

Vec3<float> max(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = max_float(v1.x, v2.x);
	rv.y = max_float(v1.y, v2.y);
	rv.z = max_float(v1.z, v2.z);

	return rv;
}

Vec4<float> max(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = max_float(v1.x, v2.x);
	rv.y = max_float(v1.y, v2.y);
	rv.z = max_float(v1.z, v2.z);
	rv.w = max_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> max(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = max_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float min(const float v1, const float v2) {
	return min_float(v1, v2);
}

Vec2<float> min(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = min_float(v1.x, v2.x);
	rv.y = min_float(v1.y, v2.y);

	return rv;
}

Vec3<float> min(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = min_float(v1.x, v2.x);
	rv.y = min_float(v1.y, v2.y);
	rv.z = min_float(v1.z, v2.z);

	return rv;
}

Vec4<float> min(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = min_float(v1.x, v2.x);
	rv.y = min_float(v1.y, v2.y);
	rv.z = min_float(v1.z, v2.z);
	rv.w = min_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> min(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = min_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float mod(const float v1, const float v2) {
	return mod_float(v1, v2);
}

Vec2<float> mod(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = mod_float(v1.x, v2.x);
	rv.y = mod_float(v1.y, v2.y);

	return rv;
}

Vec3<float> mod(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = mod_float(v1.x, v2.x);
	rv.y = mod_float(v1.y, v2.y);
	rv.z = mod_float(v1.z, v2.z);

	return rv;
}

Vec4<float> mod(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = mod_float(v1.x, v2.x);
	rv.y = mod_float(v1.y, v2.y);
	rv.z = mod_float(v1.z, v2.z);
	rv.w = mod_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> mod(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = mod_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float neq(const float v1, const float v2) {
	return neq_float(v1, v2);
}

Vec2<float> neq(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = neq_float(v1.x, v2.x);
	rv.y = neq_float(v1.y, v2.y);

	return rv;
}

Vec3<float> neq(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = neq_float(v1.x, v2.x);
	rv.y = neq_float(v1.y, v2.y);
	rv.z = neq_float(v1.z, v2.z);

	return rv;
}

Vec4<float> neq(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = neq_float(v1.x, v2.x);
	rv.y = neq_float(v1.y, v2.y);
	rv.z = neq_float(v1.z, v2.z);
	rv.w = neq_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> neq(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neq_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float neqp(const float v1, const float v2) {
	return neqp_float(v1, v2);
}

Vec2<float> neqp(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = neqp_float(v1.x, v2.x);
	rv.y = neqp_float(v1.y, v2.y);

	return rv;
}

Vec3<float> neqp(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = neqp_float(v1.x, v2.x);
	rv.y = neqp_float(v1.y, v2.y);
	rv.z = neqp_float(v1.z, v2.z);

	return rv;
}

Vec4<float> neqp(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = neqp_float(v1.x, v2.x);
	rv.y = neqp_float(v1.y, v2.y);
	rv.z = neqp_float(v1.z, v2.z);
	rv.w = neqp_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> neqp(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neqp_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float jit_gen_pow(const float v1, const float v2) {
	return jit_gen_pow_float(v1, v2);
}

Vec2<float> jit_gen_pow(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = jit_gen_pow_float(v1.x, v2.x);
	rv.y = jit_gen_pow_float(v1.y, v2.y);

	return rv;
}

Vec3<float> jit_gen_pow(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = jit_gen_pow_float(v1.x, v2.x);
	rv.y = jit_gen_pow_float(v1.y, v2.y);
	rv.z = jit_gen_pow_float(v1.z, v2.z);

	return rv;
}

Vec4<float> jit_gen_pow(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = jit_gen_pow_float(v1.x, v2.x);
	rv.y = jit_gen_pow_float(v1.y, v2.y);
	rv.z = jit_gen_pow_float(v1.z, v2.z);
	rv.w = jit_gen_pow_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> jit_gen_pow(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_pow_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float lxor(const float v1, const float v2) {
	return lxor_float(v1, v2);
}

Vec2<float> lxor(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = lxor_float(v1.x, v2.x);
	rv.y = lxor_float(v1.y, v2.y);

	return rv;
}

Vec3<float> lxor(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = lxor_float(v1.x, v2.x);
	rv.y = lxor_float(v1.y, v2.y);
	rv.z = lxor_float(v1.z, v2.z);

	return rv;
}

Vec4<float> lxor(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = lxor_float(v1.x, v2.x);
	rv.y = lxor_float(v1.y, v2.y);
	rv.z = lxor_float(v1.z, v2.z);
	rv.w = lxor_float(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<float, N> lxor(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lxor_float(v1.v[i], v2.v[i]);
	}
	return rv;
}

float foldop(const float v1, const float v2, const float v3) {
	return foldop_float(v1, v2, v3);
}

Vec2<float> foldop(
	const Vec2<float> &v1, 
	const Vec2<float> &v2, 
	const Vec2<float> &v3
) {
	Vec2<float> rv;
	rv.x = foldop_float(v1.x, v2.x, v3.x);
	rv.y = foldop_float(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<float> foldop(
	const Vec3<float> &v1, 
	const Vec3<float> &v2, 
	const Vec3<float> &v3
) {
	Vec3<float> rv;
	rv.x = foldop_float(v1.x, v2.x, v3.x);
	rv.y = foldop_float(v1.y, v2.y, v3.y);
	rv.z = foldop_float(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<float> foldop(
	const Vec4<float> &v1, 
	const Vec4<float> &v2, 
	const Vec4<float> &v3
) {
	Vec4<float> rv;
	rv.x = foldop_float(v1.x, v2.x, v3.x);
	rv.y = foldop_float(v1.y, v2.y, v3.y);
	rv.z = foldop_float(v1.z, v2.z, v3.z);
	rv.w = foldop_float(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<float, N> foldop(
	const VecN<float, N> &v1, 
	const VecN<float, N> &v2,
	const VecN<float, N> &v3
) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = foldop_float(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

float smoothstep(const float v1, const float v2, const float v3) {
	return smoothstep_float(v1, v2, v3);
}

Vec2<float> smoothstep(
	const Vec2<float> &v1, 
	const Vec2<float> &v2, 
	const Vec2<float> &v3
) {
	Vec2<float> rv;
	rv.x = smoothstep_float(v1.x, v2.x, v3.x);
	rv.y = smoothstep_float(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<float> smoothstep(
	const Vec3<float> &v1, 
	const Vec3<float> &v2, 
	const Vec3<float> &v3
) {
	Vec3<float> rv;
	rv.x = smoothstep_float(v1.x, v2.x, v3.x);
	rv.y = smoothstep_float(v1.y, v2.y, v3.y);
	rv.z = smoothstep_float(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<float> smoothstep(
	const Vec4<float> &v1, 
	const Vec4<float> &v2, 
	const Vec4<float> &v3
) {
	Vec4<float> rv;
	rv.x = smoothstep_float(v1.x, v2.x, v3.x);
	rv.y = smoothstep_float(v1.y, v2.y, v3.y);
	rv.z = smoothstep_float(v1.z, v2.z, v3.z);
	rv.w = smoothstep_float(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<float, N> smoothstep(
	const VecN<float, N> &v1, 
	const VecN<float, N> &v2,
	const VecN<float, N> &v3
) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = smoothstep_float(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

float switchop(const float v1, const float v2, const float v3) {
	return switchop_float(v1, v2, v3);
}

Vec2<float> switchop(
	const Vec2<float> &v1, 
	const Vec2<float> &v2, 
	const Vec2<float> &v3
) {
	Vec2<float> rv;
	rv.x = switchop_float(v1.x, v2.x, v3.x);
	rv.y = switchop_float(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<float> switchop(
	const Vec3<float> &v1, 
	const Vec3<float> &v2, 
	const Vec3<float> &v3
) {
	Vec3<float> rv;
	rv.x = switchop_float(v1.x, v2.x, v3.x);
	rv.y = switchop_float(v1.y, v2.y, v3.y);
	rv.z = switchop_float(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<float> switchop(
	const Vec4<float> &v1, 
	const Vec4<float> &v2, 
	const Vec4<float> &v3
) {
	Vec4<float> rv;
	rv.x = switchop_float(v1.x, v2.x, v3.x);
	rv.y = switchop_float(v1.y, v2.y, v3.y);
	rv.z = switchop_float(v1.z, v2.z, v3.z);
	rv.w = switchop_float(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<float, N> switchop(
	const VecN<float, N> &v1, 
	const VecN<float, N> &v2,
	const VecN<float, N> &v3
) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = switchop_float(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

float wrapop(const float v1, const float v2, const float v3) {
	return wrapop_float(v1, v2, v3);
}

Vec2<float> wrapop(
	const Vec2<float> &v1, 
	const Vec2<float> &v2, 
	const Vec2<float> &v3
) {
	Vec2<float> rv;
	rv.x = wrapop_float(v1.x, v2.x, v3.x);
	rv.y = wrapop_float(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<float> wrapop(
	const Vec3<float> &v1, 
	const Vec3<float> &v2, 
	const Vec3<float> &v3
) {
	Vec3<float> rv;
	rv.x = wrapop_float(v1.x, v2.x, v3.x);
	rv.y = wrapop_float(v1.y, v2.y, v3.y);
	rv.z = wrapop_float(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<float> wrapop(
	const Vec4<float> &v1, 
	const Vec4<float> &v2, 
	const Vec4<float> &v3
) {
	Vec4<float> rv;
	rv.x = wrapop_float(v1.x, v2.x, v3.x);
	rv.y = wrapop_float(v1.y, v2.y, v3.y);
	rv.z = wrapop_float(v1.z, v2.z, v3.z);
	rv.w = wrapop_float(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<float, N> wrapop(
	const VecN<float, N> &v1, 
	const VecN<float, N> &v2,
	const VecN<float, N> &v3
) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = wrapop_float(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}



#endif // JIT_CODEGEN_OP_FLOAT_HPP
