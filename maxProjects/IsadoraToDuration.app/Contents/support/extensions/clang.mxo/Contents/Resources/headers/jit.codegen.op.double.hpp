// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_OP_DOUBLE_HPP
#define JIT_CODEGEN_OP_DOUBLE_HPP 1
#include "math.codegen.h"
#include "jit.codegen.vec.hpp"
#include "jit.codegen.op.hpp"

double abs(const double v) {
	return abs_double(v);
}

Vec2<double> abs(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = abs_double(v.x);
	rv.y = abs_double(v.y);

	return rv;
}

Vec3<double> abs(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = abs_double(v.x);
	rv.y = abs_double(v.y);
	rv.z = abs_double(v.z);

	return rv;
}

Vec4<double> abs(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = abs_double(v.x);
	rv.y = abs_double(v.y);
	rv.z = abs_double(v.z);
	rv.w = abs_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> abs(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = abs_double(v.v[i]);
	}
	return rv;
}

double jit_gen_acos(const double v) {
	return jit_gen_acos_double(v);
}

Vec2<double> jit_gen_acos(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_acos_double(v.x);
	rv.y = jit_gen_acos_double(v.y);

	return rv;
}

Vec3<double> jit_gen_acos(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_acos_double(v.x);
	rv.y = jit_gen_acos_double(v.y);
	rv.z = jit_gen_acos_double(v.z);

	return rv;
}

Vec4<double> jit_gen_acos(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_acos_double(v.x);
	rv.y = jit_gen_acos_double(v.y);
	rv.z = jit_gen_acos_double(v.z);
	rv.w = jit_gen_acos_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_acos(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_acos_double(v.v[i]);
	}
	return rv;
}

double jit_gen_acosh(const double v) {
	return jit_gen_acosh_double(v);
}

Vec2<double> jit_gen_acosh(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_acosh_double(v.x);
	rv.y = jit_gen_acosh_double(v.y);

	return rv;
}

Vec3<double> jit_gen_acosh(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_acosh_double(v.x);
	rv.y = jit_gen_acosh_double(v.y);
	rv.z = jit_gen_acosh_double(v.z);

	return rv;
}

Vec4<double> jit_gen_acosh(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_acosh_double(v.x);
	rv.y = jit_gen_acosh_double(v.y);
	rv.z = jit_gen_acosh_double(v.z);
	rv.w = jit_gen_acosh_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_acosh(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_acosh_double(v.v[i]);
	}
	return rv;
}

double jit_gen_asin(const double v) {
	return jit_gen_asin_double(v);
}

Vec2<double> jit_gen_asin(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_asin_double(v.x);
	rv.y = jit_gen_asin_double(v.y);

	return rv;
}

Vec3<double> jit_gen_asin(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_asin_double(v.x);
	rv.y = jit_gen_asin_double(v.y);
	rv.z = jit_gen_asin_double(v.z);

	return rv;
}

Vec4<double> jit_gen_asin(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_asin_double(v.x);
	rv.y = jit_gen_asin_double(v.y);
	rv.z = jit_gen_asin_double(v.z);
	rv.w = jit_gen_asin_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_asin(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_asin_double(v.v[i]);
	}
	return rv;
}

double jit_gen_asinh(const double v) {
	return jit_gen_asinh_double(v);
}

Vec2<double> jit_gen_asinh(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_asinh_double(v.x);
	rv.y = jit_gen_asinh_double(v.y);

	return rv;
}

Vec3<double> jit_gen_asinh(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_asinh_double(v.x);
	rv.y = jit_gen_asinh_double(v.y);
	rv.z = jit_gen_asinh_double(v.z);

	return rv;
}

Vec4<double> jit_gen_asinh(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_asinh_double(v.x);
	rv.y = jit_gen_asinh_double(v.y);
	rv.z = jit_gen_asinh_double(v.z);
	rv.w = jit_gen_asinh_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_asinh(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_asinh_double(v.v[i]);
	}
	return rv;
}

double jit_gen_atan(const double v) {
	return jit_gen_atan_double(v);
}

Vec2<double> jit_gen_atan(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_atan_double(v.x);
	rv.y = jit_gen_atan_double(v.y);

	return rv;
}

Vec3<double> jit_gen_atan(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_atan_double(v.x);
	rv.y = jit_gen_atan_double(v.y);
	rv.z = jit_gen_atan_double(v.z);

	return rv;
}

Vec4<double> jit_gen_atan(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_atan_double(v.x);
	rv.y = jit_gen_atan_double(v.y);
	rv.z = jit_gen_atan_double(v.z);
	rv.w = jit_gen_atan_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_atan(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atan_double(v.v[i]);
	}
	return rv;
}

double jit_gen_atanh(const double v) {
	return jit_gen_atanh_double(v);
}

Vec2<double> jit_gen_atanh(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_atanh_double(v.x);
	rv.y = jit_gen_atanh_double(v.y);

	return rv;
}

Vec3<double> jit_gen_atanh(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_atanh_double(v.x);
	rv.y = jit_gen_atanh_double(v.y);
	rv.z = jit_gen_atanh_double(v.z);

	return rv;
}

Vec4<double> jit_gen_atanh(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_atanh_double(v.x);
	rv.y = jit_gen_atanh_double(v.y);
	rv.z = jit_gen_atanh_double(v.z);
	rv.w = jit_gen_atanh_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_atanh(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atanh_double(v.v[i]);
	}
	return rv;
}

double jit_gen_ceil(const double v) {
	return jit_gen_ceil_double(v);
}

Vec2<double> jit_gen_ceil(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_ceil_double(v.x);
	rv.y = jit_gen_ceil_double(v.y);

	return rv;
}

Vec3<double> jit_gen_ceil(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_ceil_double(v.x);
	rv.y = jit_gen_ceil_double(v.y);
	rv.z = jit_gen_ceil_double(v.z);

	return rv;
}

Vec4<double> jit_gen_ceil(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_ceil_double(v.x);
	rv.y = jit_gen_ceil_double(v.y);
	rv.z = jit_gen_ceil_double(v.z);
	rv.w = jit_gen_ceil_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_ceil(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_ceil_double(v.v[i]);
	}
	return rv;
}

double jit_gen_cos(const double v) {
	return jit_gen_cos_double(v);
}

Vec2<double> jit_gen_cos(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_cos_double(v.x);
	rv.y = jit_gen_cos_double(v.y);

	return rv;
}

Vec3<double> jit_gen_cos(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_cos_double(v.x);
	rv.y = jit_gen_cos_double(v.y);
	rv.z = jit_gen_cos_double(v.z);

	return rv;
}

Vec4<double> jit_gen_cos(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_cos_double(v.x);
	rv.y = jit_gen_cos_double(v.y);
	rv.z = jit_gen_cos_double(v.z);
	rv.w = jit_gen_cos_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_cos(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_cos_double(v.v[i]);
	}
	return rv;
}

double jit_gen_cosh(const double v) {
	return jit_gen_cosh_double(v);
}

Vec2<double> jit_gen_cosh(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_cosh_double(v.x);
	rv.y = jit_gen_cosh_double(v.y);

	return rv;
}

Vec3<double> jit_gen_cosh(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_cosh_double(v.x);
	rv.y = jit_gen_cosh_double(v.y);
	rv.z = jit_gen_cosh_double(v.z);

	return rv;
}

Vec4<double> jit_gen_cosh(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_cosh_double(v.x);
	rv.y = jit_gen_cosh_double(v.y);
	rv.z = jit_gen_cosh_double(v.z);
	rv.w = jit_gen_cosh_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_cosh(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_cosh_double(v.v[i]);
	}
	return rv;
}

double jit_gen_exp(const double v) {
	return jit_gen_exp_double(v);
}

Vec2<double> jit_gen_exp(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_exp_double(v.x);
	rv.y = jit_gen_exp_double(v.y);

	return rv;
}

Vec3<double> jit_gen_exp(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_exp_double(v.x);
	rv.y = jit_gen_exp_double(v.y);
	rv.z = jit_gen_exp_double(v.z);

	return rv;
}

Vec4<double> jit_gen_exp(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_exp_double(v.x);
	rv.y = jit_gen_exp_double(v.y);
	rv.z = jit_gen_exp_double(v.z);
	rv.w = jit_gen_exp_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_exp(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_exp_double(v.v[i]);
	}
	return rv;
}

double jit_gen_exp2(const double v) {
	return jit_gen_exp2_double(v);
}

Vec2<double> jit_gen_exp2(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_exp2_double(v.x);
	rv.y = jit_gen_exp2_double(v.y);

	return rv;
}

Vec3<double> jit_gen_exp2(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_exp2_double(v.x);
	rv.y = jit_gen_exp2_double(v.y);
	rv.z = jit_gen_exp2_double(v.z);

	return rv;
}

Vec4<double> jit_gen_exp2(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_exp2_double(v.x);
	rv.y = jit_gen_exp2_double(v.y);
	rv.z = jit_gen_exp2_double(v.z);
	rv.w = jit_gen_exp2_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_exp2(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_exp2_double(v.v[i]);
	}
	return rv;
}

double jit_gen_floor(const double v) {
	return jit_gen_floor_double(v);
}

Vec2<double> jit_gen_floor(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_floor_double(v.x);
	rv.y = jit_gen_floor_double(v.y);

	return rv;
}

Vec3<double> jit_gen_floor(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_floor_double(v.x);
	rv.y = jit_gen_floor_double(v.y);
	rv.z = jit_gen_floor_double(v.z);

	return rv;
}

Vec4<double> jit_gen_floor(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_floor_double(v.x);
	rv.y = jit_gen_floor_double(v.y);
	rv.z = jit_gen_floor_double(v.z);
	rv.w = jit_gen_floor_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_floor(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_floor_double(v.v[i]);
	}
	return rv;
}

double fract(const double v) {
	return fract_double(v);
}

Vec2<double> fract(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = fract_double(v.x);
	rv.y = fract_double(v.y);

	return rv;
}

Vec3<double> fract(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = fract_double(v.x);
	rv.y = fract_double(v.y);
	rv.z = fract_double(v.z);

	return rv;
}

Vec4<double> fract(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = fract_double(v.x);
	rv.y = fract_double(v.y);
	rv.z = fract_double(v.z);
	rv.w = fract_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> fract(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = fract_double(v.v[i]);
	}
	return rv;
}

double jit_gen_log(const double v) {
	return jit_gen_log_double(v);
}

Vec2<double> jit_gen_log(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_log_double(v.x);
	rv.y = jit_gen_log_double(v.y);

	return rv;
}

Vec3<double> jit_gen_log(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_log_double(v.x);
	rv.y = jit_gen_log_double(v.y);
	rv.z = jit_gen_log_double(v.z);

	return rv;
}

Vec4<double> jit_gen_log(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_log_double(v.x);
	rv.y = jit_gen_log_double(v.y);
	rv.z = jit_gen_log_double(v.z);
	rv.w = jit_gen_log_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_log(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log_double(v.v[i]);
	}
	return rv;
}

double jit_gen_log2(const double v) {
	return jit_gen_log2_double(v);
}

Vec2<double> jit_gen_log2(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_log2_double(v.x);
	rv.y = jit_gen_log2_double(v.y);

	return rv;
}

Vec3<double> jit_gen_log2(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_log2_double(v.x);
	rv.y = jit_gen_log2_double(v.y);
	rv.z = jit_gen_log2_double(v.z);

	return rv;
}

Vec4<double> jit_gen_log2(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_log2_double(v.x);
	rv.y = jit_gen_log2_double(v.y);
	rv.z = jit_gen_log2_double(v.z);
	rv.w = jit_gen_log2_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_log2(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log2_double(v.v[i]);
	}
	return rv;
}

double jit_gen_log10(const double v) {
	return jit_gen_log10_double(v);
}

Vec2<double> jit_gen_log10(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_log10_double(v.x);
	rv.y = jit_gen_log10_double(v.y);

	return rv;
}

Vec3<double> jit_gen_log10(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_log10_double(v.x);
	rv.y = jit_gen_log10_double(v.y);
	rv.z = jit_gen_log10_double(v.z);

	return rv;
}

Vec4<double> jit_gen_log10(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_log10_double(v.x);
	rv.y = jit_gen_log10_double(v.y);
	rv.z = jit_gen_log10_double(v.z);
	rv.w = jit_gen_log10_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_log10(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log10_double(v.v[i]);
	}
	return rv;
}

double lnot(const double v) {
	return lnot_double(v);
}

Vec2<double> lnot(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = lnot_double(v.x);
	rv.y = lnot_double(v.y);

	return rv;
}

Vec3<double> lnot(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = lnot_double(v.x);
	rv.y = lnot_double(v.y);
	rv.z = lnot_double(v.z);

	return rv;
}

Vec4<double> lnot(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = lnot_double(v.x);
	rv.y = lnot_double(v.y);
	rv.z = lnot_double(v.z);
	rv.w = lnot_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> lnot(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lnot_double(v.v[i]);
	}
	return rv;
}

double jit_gen_round(const double v) {
	return jit_gen_round_double(v);
}

Vec2<double> jit_gen_round(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_round_double(v.x);
	rv.y = jit_gen_round_double(v.y);

	return rv;
}

Vec3<double> jit_gen_round(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_round_double(v.x);
	rv.y = jit_gen_round_double(v.y);
	rv.z = jit_gen_round_double(v.z);

	return rv;
}

Vec4<double> jit_gen_round(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_round_double(v.x);
	rv.y = jit_gen_round_double(v.y);
	rv.z = jit_gen_round_double(v.z);
	rv.w = jit_gen_round_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_round(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_round_double(v.v[i]);
	}
	return rv;
}

double sign(const double v) {
	return sign_double(v);
}

Vec2<double> sign(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = sign_double(v.x);
	rv.y = sign_double(v.y);

	return rv;
}

Vec3<double> sign(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = sign_double(v.x);
	rv.y = sign_double(v.y);
	rv.z = sign_double(v.z);

	return rv;
}

Vec4<double> sign(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = sign_double(v.x);
	rv.y = sign_double(v.y);
	rv.z = sign_double(v.z);
	rv.w = sign_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> sign(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sign_double(v.v[i]);
	}
	return rv;
}

double jit_gen_sin(const double v) {
	return jit_gen_sin_double(v);
}

Vec2<double> jit_gen_sin(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_sin_double(v.x);
	rv.y = jit_gen_sin_double(v.y);

	return rv;
}

Vec3<double> jit_gen_sin(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_sin_double(v.x);
	rv.y = jit_gen_sin_double(v.y);
	rv.z = jit_gen_sin_double(v.z);

	return rv;
}

Vec4<double> jit_gen_sin(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_sin_double(v.x);
	rv.y = jit_gen_sin_double(v.y);
	rv.z = jit_gen_sin_double(v.z);
	rv.w = jit_gen_sin_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_sin(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sin_double(v.v[i]);
	}
	return rv;
}

double jit_gen_sinh(const double v) {
	return jit_gen_sinh_double(v);
}

Vec2<double> jit_gen_sinh(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_sinh_double(v.x);
	rv.y = jit_gen_sinh_double(v.y);

	return rv;
}

Vec3<double> jit_gen_sinh(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_sinh_double(v.x);
	rv.y = jit_gen_sinh_double(v.y);
	rv.z = jit_gen_sinh_double(v.z);

	return rv;
}

Vec4<double> jit_gen_sinh(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_sinh_double(v.x);
	rv.y = jit_gen_sinh_double(v.y);
	rv.z = jit_gen_sinh_double(v.z);
	rv.w = jit_gen_sinh_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_sinh(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sinh_double(v.v[i]);
	}
	return rv;
}

double jit_gen_sqrt(const double v) {
	return jit_gen_sqrt_double(v);
}

Vec2<double> jit_gen_sqrt(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_sqrt_double(v.x);
	rv.y = jit_gen_sqrt_double(v.y);

	return rv;
}

Vec3<double> jit_gen_sqrt(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_sqrt_double(v.x);
	rv.y = jit_gen_sqrt_double(v.y);
	rv.z = jit_gen_sqrt_double(v.z);

	return rv;
}

Vec4<double> jit_gen_sqrt(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_sqrt_double(v.x);
	rv.y = jit_gen_sqrt_double(v.y);
	rv.z = jit_gen_sqrt_double(v.z);
	rv.w = jit_gen_sqrt_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_sqrt(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sqrt_double(v.v[i]);
	}
	return rv;
}

double jit_gen_tan(const double v) {
	return jit_gen_tan_double(v);
}

Vec2<double> jit_gen_tan(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_tan_double(v.x);
	rv.y = jit_gen_tan_double(v.y);

	return rv;
}

Vec3<double> jit_gen_tan(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_tan_double(v.x);
	rv.y = jit_gen_tan_double(v.y);
	rv.z = jit_gen_tan_double(v.z);

	return rv;
}

Vec4<double> jit_gen_tan(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_tan_double(v.x);
	rv.y = jit_gen_tan_double(v.y);
	rv.z = jit_gen_tan_double(v.z);
	rv.w = jit_gen_tan_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_tan(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_tan_double(v.v[i]);
	}
	return rv;
}

double jit_gen_tanh(const double v) {
	return jit_gen_tanh_double(v);
}

Vec2<double> jit_gen_tanh(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = jit_gen_tanh_double(v.x);
	rv.y = jit_gen_tanh_double(v.y);

	return rv;
}

Vec3<double> jit_gen_tanh(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = jit_gen_tanh_double(v.x);
	rv.y = jit_gen_tanh_double(v.y);
	rv.z = jit_gen_tanh_double(v.z);

	return rv;
}

Vec4<double> jit_gen_tanh(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = jit_gen_tanh_double(v.x);
	rv.y = jit_gen_tanh_double(v.y);
	rv.z = jit_gen_tanh_double(v.z);
	rv.w = jit_gen_tanh_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_tanh(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_tanh_double(v.v[i]);
	}
	return rv;
}

double trunc(const double v) {
	return trunc_double(v);
}

Vec2<double> trunc(const Vec2<double> &v) {
	Vec2<double> rv;
	rv.x = trunc_double(v.x);
	rv.y = trunc_double(v.y);

	return rv;
}

Vec3<double> trunc(const Vec3<double> &v) {
	Vec3<double> rv;
	rv.x = trunc_double(v.x);
	rv.y = trunc_double(v.y);
	rv.z = trunc_double(v.z);

	return rv;
}

Vec4<double> trunc(const Vec4<double> &v) {
	Vec4<double> rv;
	rv.x = trunc_double(v.x);
	rv.y = trunc_double(v.y);
	rv.z = trunc_double(v.z);
	rv.w = trunc_double(v.w);

	return rv;
}

template <unsigned N>
VecN<double, N> trunc(const VecN<double, N> &v) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = trunc_double(v.v[i]);
	}
	return rv;
}

double absdiff(const double v1, const double v2) {
	return absdiff_double(v1, v2);
}

Vec2<double> absdiff(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = absdiff_double(v1.x, v2.x);
	rv.y = absdiff_double(v1.y, v2.y);

	return rv;
}

Vec3<double> absdiff(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = absdiff_double(v1.x, v2.x);
	rv.y = absdiff_double(v1.y, v2.y);
	rv.z = absdiff_double(v1.z, v2.z);

	return rv;
}

Vec4<double> absdiff(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = absdiff_double(v1.x, v2.x);
	rv.y = absdiff_double(v1.y, v2.y);
	rv.z = absdiff_double(v1.z, v2.z);
	rv.w = absdiff_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> absdiff(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = absdiff_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double jit_gen_atan2(const double v1, const double v2) {
	return jit_gen_atan2_double(v1, v2);
}

Vec2<double> jit_gen_atan2(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = jit_gen_atan2_double(v1.x, v2.x);
	rv.y = jit_gen_atan2_double(v1.y, v2.y);

	return rv;
}

Vec3<double> jit_gen_atan2(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = jit_gen_atan2_double(v1.x, v2.x);
	rv.y = jit_gen_atan2_double(v1.y, v2.y);
	rv.z = jit_gen_atan2_double(v1.z, v2.z);

	return rv;
}

Vec4<double> jit_gen_atan2(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = jit_gen_atan2_double(v1.x, v2.x);
	rv.y = jit_gen_atan2_double(v1.y, v2.y);
	rv.z = jit_gen_atan2_double(v1.z, v2.z);
	rv.w = jit_gen_atan2_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_atan2(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atan2_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double eq(const double v1, const double v2) {
	return eq_double(v1, v2);
}

Vec2<double> eq(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = eq_double(v1.x, v2.x);
	rv.y = eq_double(v1.y, v2.y);

	return rv;
}

Vec3<double> eq(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = eq_double(v1.x, v2.x);
	rv.y = eq_double(v1.y, v2.y);
	rv.z = eq_double(v1.z, v2.z);

	return rv;
}

Vec4<double> eq(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = eq_double(v1.x, v2.x);
	rv.y = eq_double(v1.y, v2.y);
	rv.z = eq_double(v1.z, v2.z);
	rv.w = eq_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> eq(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eq_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double eqp(const double v1, const double v2) {
	return eqp_double(v1, v2);
}

Vec2<double> eqp(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = eqp_double(v1.x, v2.x);
	rv.y = eqp_double(v1.y, v2.y);

	return rv;
}

Vec3<double> eqp(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = eqp_double(v1.x, v2.x);
	rv.y = eqp_double(v1.y, v2.y);
	rv.z = eqp_double(v1.z, v2.z);

	return rv;
}

Vec4<double> eqp(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = eqp_double(v1.x, v2.x);
	rv.y = eqp_double(v1.y, v2.y);
	rv.z = eqp_double(v1.z, v2.z);
	rv.w = eqp_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> eqp(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eqp_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double gt(const double v1, const double v2) {
	return gt_double(v1, v2);
}

Vec2<double> gt(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = gt_double(v1.x, v2.x);
	rv.y = gt_double(v1.y, v2.y);

	return rv;
}

Vec3<double> gt(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = gt_double(v1.x, v2.x);
	rv.y = gt_double(v1.y, v2.y);
	rv.z = gt_double(v1.z, v2.z);

	return rv;
}

Vec4<double> gt(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = gt_double(v1.x, v2.x);
	rv.y = gt_double(v1.y, v2.y);
	rv.z = gt_double(v1.z, v2.z);
	rv.w = gt_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> gt(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gt_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double gte(const double v1, const double v2) {
	return gte_double(v1, v2);
}

Vec2<double> gte(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = gte_double(v1.x, v2.x);
	rv.y = gte_double(v1.y, v2.y);

	return rv;
}

Vec3<double> gte(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = gte_double(v1.x, v2.x);
	rv.y = gte_double(v1.y, v2.y);
	rv.z = gte_double(v1.z, v2.z);

	return rv;
}

Vec4<double> gte(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = gte_double(v1.x, v2.x);
	rv.y = gte_double(v1.y, v2.y);
	rv.z = gte_double(v1.z, v2.z);
	rv.w = gte_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> gte(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gte_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double gtep(const double v1, const double v2) {
	return gtep_double(v1, v2);
}

Vec2<double> gtep(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = gtep_double(v1.x, v2.x);
	rv.y = gtep_double(v1.y, v2.y);

	return rv;
}

Vec3<double> gtep(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = gtep_double(v1.x, v2.x);
	rv.y = gtep_double(v1.y, v2.y);
	rv.z = gtep_double(v1.z, v2.z);

	return rv;
}

Vec4<double> gtep(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = gtep_double(v1.x, v2.x);
	rv.y = gtep_double(v1.y, v2.y);
	rv.z = gtep_double(v1.z, v2.z);
	rv.w = gtep_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> gtep(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtep_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double gtp(const double v1, const double v2) {
	return gtp_double(v1, v2);
}

Vec2<double> gtp(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = gtp_double(v1.x, v2.x);
	rv.y = gtp_double(v1.y, v2.y);

	return rv;
}

Vec3<double> gtp(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = gtp_double(v1.x, v2.x);
	rv.y = gtp_double(v1.y, v2.y);
	rv.z = gtp_double(v1.z, v2.z);

	return rv;
}

Vec4<double> gtp(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = gtp_double(v1.x, v2.x);
	rv.y = gtp_double(v1.y, v2.y);
	rv.z = gtp_double(v1.z, v2.z);
	rv.w = gtp_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> gtp(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtp_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double hypot(const double v1, const double v2) {
	return hypot_double(v1, v2);
}

Vec2<double> hypot(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = hypot_double(v1.x, v2.x);
	rv.y = hypot_double(v1.y, v2.y);

	return rv;
}

Vec3<double> hypot(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = hypot_double(v1.x, v2.x);
	rv.y = hypot_double(v1.y, v2.y);
	rv.z = hypot_double(v1.z, v2.z);

	return rv;
}

Vec4<double> hypot(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = hypot_double(v1.x, v2.x);
	rv.y = hypot_double(v1.y, v2.y);
	rv.z = hypot_double(v1.z, v2.z);
	rv.w = hypot_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> hypot(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = hypot_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double land(const double v1, const double v2) {
	return land_double(v1, v2);
}

Vec2<double> land(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = land_double(v1.x, v2.x);
	rv.y = land_double(v1.y, v2.y);

	return rv;
}

Vec3<double> land(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = land_double(v1.x, v2.x);
	rv.y = land_double(v1.y, v2.y);
	rv.z = land_double(v1.z, v2.z);

	return rv;
}

Vec4<double> land(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = land_double(v1.x, v2.x);
	rv.y = land_double(v1.y, v2.y);
	rv.z = land_double(v1.z, v2.z);
	rv.w = land_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> land(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = land_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double lor(const double v1, const double v2) {
	return lor_double(v1, v2);
}

Vec2<double> lor(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = lor_double(v1.x, v2.x);
	rv.y = lor_double(v1.y, v2.y);

	return rv;
}

Vec3<double> lor(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = lor_double(v1.x, v2.x);
	rv.y = lor_double(v1.y, v2.y);
	rv.z = lor_double(v1.z, v2.z);

	return rv;
}

Vec4<double> lor(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = lor_double(v1.x, v2.x);
	rv.y = lor_double(v1.y, v2.y);
	rv.z = lor_double(v1.z, v2.z);
	rv.w = lor_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> lor(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lor_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double lt(const double v1, const double v2) {
	return lt_double(v1, v2);
}

Vec2<double> lt(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = lt_double(v1.x, v2.x);
	rv.y = lt_double(v1.y, v2.y);

	return rv;
}

Vec3<double> lt(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = lt_double(v1.x, v2.x);
	rv.y = lt_double(v1.y, v2.y);
	rv.z = lt_double(v1.z, v2.z);

	return rv;
}

Vec4<double> lt(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = lt_double(v1.x, v2.x);
	rv.y = lt_double(v1.y, v2.y);
	rv.z = lt_double(v1.z, v2.z);
	rv.w = lt_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> lt(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lt_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double lte(const double v1, const double v2) {
	return lte_double(v1, v2);
}

Vec2<double> lte(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = lte_double(v1.x, v2.x);
	rv.y = lte_double(v1.y, v2.y);

	return rv;
}

Vec3<double> lte(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = lte_double(v1.x, v2.x);
	rv.y = lte_double(v1.y, v2.y);
	rv.z = lte_double(v1.z, v2.z);

	return rv;
}

Vec4<double> lte(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = lte_double(v1.x, v2.x);
	rv.y = lte_double(v1.y, v2.y);
	rv.z = lte_double(v1.z, v2.z);
	rv.w = lte_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> lte(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lte_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double ltep(const double v1, const double v2) {
	return ltep_double(v1, v2);
}

Vec2<double> ltep(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = ltep_double(v1.x, v2.x);
	rv.y = ltep_double(v1.y, v2.y);

	return rv;
}

Vec3<double> ltep(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = ltep_double(v1.x, v2.x);
	rv.y = ltep_double(v1.y, v2.y);
	rv.z = ltep_double(v1.z, v2.z);

	return rv;
}

Vec4<double> ltep(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = ltep_double(v1.x, v2.x);
	rv.y = ltep_double(v1.y, v2.y);
	rv.z = ltep_double(v1.z, v2.z);
	rv.w = ltep_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> ltep(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltep_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double ltp(const double v1, const double v2) {
	return ltp_double(v1, v2);
}

Vec2<double> ltp(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = ltp_double(v1.x, v2.x);
	rv.y = ltp_double(v1.y, v2.y);

	return rv;
}

Vec3<double> ltp(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = ltp_double(v1.x, v2.x);
	rv.y = ltp_double(v1.y, v2.y);
	rv.z = ltp_double(v1.z, v2.z);

	return rv;
}

Vec4<double> ltp(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = ltp_double(v1.x, v2.x);
	rv.y = ltp_double(v1.y, v2.y);
	rv.z = ltp_double(v1.z, v2.z);
	rv.w = ltp_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> ltp(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltp_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double max(const double v1, const double v2) {
	return max_double(v1, v2);
}

Vec2<double> max(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = max_double(v1.x, v2.x);
	rv.y = max_double(v1.y, v2.y);

	return rv;
}

Vec3<double> max(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = max_double(v1.x, v2.x);
	rv.y = max_double(v1.y, v2.y);
	rv.z = max_double(v1.z, v2.z);

	return rv;
}

Vec4<double> max(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = max_double(v1.x, v2.x);
	rv.y = max_double(v1.y, v2.y);
	rv.z = max_double(v1.z, v2.z);
	rv.w = max_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> max(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = max_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double min(const double v1, const double v2) {
	return min_double(v1, v2);
}

Vec2<double> min(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = min_double(v1.x, v2.x);
	rv.y = min_double(v1.y, v2.y);

	return rv;
}

Vec3<double> min(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = min_double(v1.x, v2.x);
	rv.y = min_double(v1.y, v2.y);
	rv.z = min_double(v1.z, v2.z);

	return rv;
}

Vec4<double> min(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = min_double(v1.x, v2.x);
	rv.y = min_double(v1.y, v2.y);
	rv.z = min_double(v1.z, v2.z);
	rv.w = min_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> min(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = min_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double mod(const double v1, const double v2) {
	return mod_double(v1, v2);
}

Vec2<double> mod(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = mod_double(v1.x, v2.x);
	rv.y = mod_double(v1.y, v2.y);

	return rv;
}

Vec3<double> mod(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = mod_double(v1.x, v2.x);
	rv.y = mod_double(v1.y, v2.y);
	rv.z = mod_double(v1.z, v2.z);

	return rv;
}

Vec4<double> mod(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = mod_double(v1.x, v2.x);
	rv.y = mod_double(v1.y, v2.y);
	rv.z = mod_double(v1.z, v2.z);
	rv.w = mod_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> mod(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = mod_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double neq(const double v1, const double v2) {
	return neq_double(v1, v2);
}

Vec2<double> neq(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = neq_double(v1.x, v2.x);
	rv.y = neq_double(v1.y, v2.y);

	return rv;
}

Vec3<double> neq(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = neq_double(v1.x, v2.x);
	rv.y = neq_double(v1.y, v2.y);
	rv.z = neq_double(v1.z, v2.z);

	return rv;
}

Vec4<double> neq(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = neq_double(v1.x, v2.x);
	rv.y = neq_double(v1.y, v2.y);
	rv.z = neq_double(v1.z, v2.z);
	rv.w = neq_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> neq(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neq_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double neqp(const double v1, const double v2) {
	return neqp_double(v1, v2);
}

Vec2<double> neqp(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = neqp_double(v1.x, v2.x);
	rv.y = neqp_double(v1.y, v2.y);

	return rv;
}

Vec3<double> neqp(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = neqp_double(v1.x, v2.x);
	rv.y = neqp_double(v1.y, v2.y);
	rv.z = neqp_double(v1.z, v2.z);

	return rv;
}

Vec4<double> neqp(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = neqp_double(v1.x, v2.x);
	rv.y = neqp_double(v1.y, v2.y);
	rv.z = neqp_double(v1.z, v2.z);
	rv.w = neqp_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> neqp(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neqp_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double jit_gen_pow(const double v1, const double v2) {
	return jit_gen_pow_double(v1, v2);
}

Vec2<double> jit_gen_pow(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = jit_gen_pow_double(v1.x, v2.x);
	rv.y = jit_gen_pow_double(v1.y, v2.y);

	return rv;
}

Vec3<double> jit_gen_pow(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = jit_gen_pow_double(v1.x, v2.x);
	rv.y = jit_gen_pow_double(v1.y, v2.y);
	rv.z = jit_gen_pow_double(v1.z, v2.z);

	return rv;
}

Vec4<double> jit_gen_pow(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = jit_gen_pow_double(v1.x, v2.x);
	rv.y = jit_gen_pow_double(v1.y, v2.y);
	rv.z = jit_gen_pow_double(v1.z, v2.z);
	rv.w = jit_gen_pow_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> jit_gen_pow(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_pow_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double lxor(const double v1, const double v2) {
	return lxor_double(v1, v2);
}

Vec2<double> lxor(const Vec2<double> &v1, const Vec2<double> &v2) {
	Vec2<double> rv;
	rv.x = lxor_double(v1.x, v2.x);
	rv.y = lxor_double(v1.y, v2.y);

	return rv;
}

Vec3<double> lxor(const Vec3<double> &v1, const Vec3<double> &v2) {
	Vec3<double> rv;
	rv.x = lxor_double(v1.x, v2.x);
	rv.y = lxor_double(v1.y, v2.y);
	rv.z = lxor_double(v1.z, v2.z);

	return rv;
}

Vec4<double> lxor(const Vec4<double> &v1, const Vec4<double> &v2) {
	Vec4<double> rv;
	rv.x = lxor_double(v1.x, v2.x);
	rv.y = lxor_double(v1.y, v2.y);
	rv.z = lxor_double(v1.z, v2.z);
	rv.w = lxor_double(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<double, N> lxor(const VecN<double, N> &v1, const VecN<double, N> &v2) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lxor_double(v1.v[i], v2.v[i]);
	}
	return rv;
}

double foldop(const double v1, const double v2, const double v3) {
	return foldop_double(v1, v2, v3);
}

Vec2<double> foldop(
	const Vec2<double> &v1, 
	const Vec2<double> &v2, 
	const Vec2<double> &v3
) {
	Vec2<double> rv;
	rv.x = foldop_double(v1.x, v2.x, v3.x);
	rv.y = foldop_double(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<double> foldop(
	const Vec3<double> &v1, 
	const Vec3<double> &v2, 
	const Vec3<double> &v3
) {
	Vec3<double> rv;
	rv.x = foldop_double(v1.x, v2.x, v3.x);
	rv.y = foldop_double(v1.y, v2.y, v3.y);
	rv.z = foldop_double(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<double> foldop(
	const Vec4<double> &v1, 
	const Vec4<double> &v2, 
	const Vec4<double> &v3
) {
	Vec4<double> rv;
	rv.x = foldop_double(v1.x, v2.x, v3.x);
	rv.y = foldop_double(v1.y, v2.y, v3.y);
	rv.z = foldop_double(v1.z, v2.z, v3.z);
	rv.w = foldop_double(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<double, N> foldop(
	const VecN<double, N> &v1, 
	const VecN<double, N> &v2,
	const VecN<double, N> &v3
) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = foldop_double(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

double smoothstep(const double v1, const double v2, const double v3) {
	return smoothstep_double(v1, v2, v3);
}

Vec2<double> smoothstep(
	const Vec2<double> &v1, 
	const Vec2<double> &v2, 
	const Vec2<double> &v3
) {
	Vec2<double> rv;
	rv.x = smoothstep_double(v1.x, v2.x, v3.x);
	rv.y = smoothstep_double(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<double> smoothstep(
	const Vec3<double> &v1, 
	const Vec3<double> &v2, 
	const Vec3<double> &v3
) {
	Vec3<double> rv;
	rv.x = smoothstep_double(v1.x, v2.x, v3.x);
	rv.y = smoothstep_double(v1.y, v2.y, v3.y);
	rv.z = smoothstep_double(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<double> smoothstep(
	const Vec4<double> &v1, 
	const Vec4<double> &v2, 
	const Vec4<double> &v3
) {
	Vec4<double> rv;
	rv.x = smoothstep_double(v1.x, v2.x, v3.x);
	rv.y = smoothstep_double(v1.y, v2.y, v3.y);
	rv.z = smoothstep_double(v1.z, v2.z, v3.z);
	rv.w = smoothstep_double(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<double, N> smoothstep(
	const VecN<double, N> &v1, 
	const VecN<double, N> &v2,
	const VecN<double, N> &v3
) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = smoothstep_double(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

double switchop(const double v1, const double v2, const double v3) {
	return switchop_double(v1, v2, v3);
}

Vec2<double> switchop(
	const Vec2<double> &v1, 
	const Vec2<double> &v2, 
	const Vec2<double> &v3
) {
	Vec2<double> rv;
	rv.x = switchop_double(v1.x, v2.x, v3.x);
	rv.y = switchop_double(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<double> switchop(
	const Vec3<double> &v1, 
	const Vec3<double> &v2, 
	const Vec3<double> &v3
) {
	Vec3<double> rv;
	rv.x = switchop_double(v1.x, v2.x, v3.x);
	rv.y = switchop_double(v1.y, v2.y, v3.y);
	rv.z = switchop_double(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<double> switchop(
	const Vec4<double> &v1, 
	const Vec4<double> &v2, 
	const Vec4<double> &v3
) {
	Vec4<double> rv;
	rv.x = switchop_double(v1.x, v2.x, v3.x);
	rv.y = switchop_double(v1.y, v2.y, v3.y);
	rv.z = switchop_double(v1.z, v2.z, v3.z);
	rv.w = switchop_double(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<double, N> switchop(
	const VecN<double, N> &v1, 
	const VecN<double, N> &v2,
	const VecN<double, N> &v3
) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = switchop_double(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

double wrapop(const double v1, const double v2, const double v3) {
	return wrapop_double(v1, v2, v3);
}

Vec2<double> wrapop(
	const Vec2<double> &v1, 
	const Vec2<double> &v2, 
	const Vec2<double> &v3
) {
	Vec2<double> rv;
	rv.x = wrapop_double(v1.x, v2.x, v3.x);
	rv.y = wrapop_double(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<double> wrapop(
	const Vec3<double> &v1, 
	const Vec3<double> &v2, 
	const Vec3<double> &v3
) {
	Vec3<double> rv;
	rv.x = wrapop_double(v1.x, v2.x, v3.x);
	rv.y = wrapop_double(v1.y, v2.y, v3.y);
	rv.z = wrapop_double(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<double> wrapop(
	const Vec4<double> &v1, 
	const Vec4<double> &v2, 
	const Vec4<double> &v3
) {
	Vec4<double> rv;
	rv.x = wrapop_double(v1.x, v2.x, v3.x);
	rv.y = wrapop_double(v1.y, v2.y, v3.y);
	rv.z = wrapop_double(v1.z, v2.z, v3.z);
	rv.w = wrapop_double(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<double, N> wrapop(
	const VecN<double, N> &v1, 
	const VecN<double, N> &v2,
	const VecN<double, N> &v3
) {
	VecN<double, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = wrapop_double(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}



#endif // JIT_CODEGEN_OP_DOUBLE_HPP
