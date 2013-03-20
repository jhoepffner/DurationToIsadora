// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_OP_FIXED_HPP
#define JIT_CODEGEN_OP_FIXED_HPP 1
#include "math.codegen.h"
#include "jit.codegen.vec.hpp"
#include "jit.codegen.op.hpp"

#include "jit.codegen.op.float.fixed.hpp"
		
Fixed abs(const Fixed v) {
	return abs_fixed(v);
}

Vec2<Fixed> abs(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = abs_fixed(v.x);
	rv.y = abs_fixed(v.y);

	return rv;
}

Vec3<Fixed> abs(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = abs_fixed(v.x);
	rv.y = abs_fixed(v.y);
	rv.z = abs_fixed(v.z);

	return rv;
}

Vec4<Fixed> abs(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = abs_fixed(v.x);
	rv.y = abs_fixed(v.y);
	rv.z = abs_fixed(v.z);
	rv.w = abs_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> abs(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = abs_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_acos(const Fixed v) {
	return jit_gen_acos_fixed(v);
}

Vec2<Fixed> jit_gen_acos(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_acos_fixed(v.x);
	rv.y = jit_gen_acos_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_acos(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_acos_fixed(v.x);
	rv.y = jit_gen_acos_fixed(v.y);
	rv.z = jit_gen_acos_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_acos(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_acos_fixed(v.x);
	rv.y = jit_gen_acos_fixed(v.y);
	rv.z = jit_gen_acos_fixed(v.z);
	rv.w = jit_gen_acos_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_acos(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_acos_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_acosh(const Fixed v) {
	return jit_gen_acosh_fixed(v);
}

Vec2<Fixed> jit_gen_acosh(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_acosh_fixed(v.x);
	rv.y = jit_gen_acosh_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_acosh(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_acosh_fixed(v.x);
	rv.y = jit_gen_acosh_fixed(v.y);
	rv.z = jit_gen_acosh_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_acosh(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_acosh_fixed(v.x);
	rv.y = jit_gen_acosh_fixed(v.y);
	rv.z = jit_gen_acosh_fixed(v.z);
	rv.w = jit_gen_acosh_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_acosh(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_acosh_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_asin(const Fixed v) {
	return jit_gen_asin_fixed(v);
}

Vec2<Fixed> jit_gen_asin(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_asin_fixed(v.x);
	rv.y = jit_gen_asin_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_asin(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_asin_fixed(v.x);
	rv.y = jit_gen_asin_fixed(v.y);
	rv.z = jit_gen_asin_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_asin(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_asin_fixed(v.x);
	rv.y = jit_gen_asin_fixed(v.y);
	rv.z = jit_gen_asin_fixed(v.z);
	rv.w = jit_gen_asin_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_asin(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_asin_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_asinh(const Fixed v) {
	return jit_gen_asinh_fixed(v);
}

Vec2<Fixed> jit_gen_asinh(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_asinh_fixed(v.x);
	rv.y = jit_gen_asinh_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_asinh(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_asinh_fixed(v.x);
	rv.y = jit_gen_asinh_fixed(v.y);
	rv.z = jit_gen_asinh_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_asinh(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_asinh_fixed(v.x);
	rv.y = jit_gen_asinh_fixed(v.y);
	rv.z = jit_gen_asinh_fixed(v.z);
	rv.w = jit_gen_asinh_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_asinh(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_asinh_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_atan(const Fixed v) {
	return jit_gen_atan_fixed(v);
}

Vec2<Fixed> jit_gen_atan(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_atan_fixed(v.x);
	rv.y = jit_gen_atan_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_atan(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_atan_fixed(v.x);
	rv.y = jit_gen_atan_fixed(v.y);
	rv.z = jit_gen_atan_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_atan(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_atan_fixed(v.x);
	rv.y = jit_gen_atan_fixed(v.y);
	rv.z = jit_gen_atan_fixed(v.z);
	rv.w = jit_gen_atan_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_atan(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atan_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_atanh(const Fixed v) {
	return jit_gen_atanh_fixed(v);
}

Vec2<Fixed> jit_gen_atanh(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_atanh_fixed(v.x);
	rv.y = jit_gen_atanh_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_atanh(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_atanh_fixed(v.x);
	rv.y = jit_gen_atanh_fixed(v.y);
	rv.z = jit_gen_atanh_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_atanh(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_atanh_fixed(v.x);
	rv.y = jit_gen_atanh_fixed(v.y);
	rv.z = jit_gen_atanh_fixed(v.z);
	rv.w = jit_gen_atanh_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_atanh(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atanh_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_ceil(const Fixed v) {
	return jit_gen_ceil_fixed(v);
}

Vec2<Fixed> jit_gen_ceil(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_ceil_fixed(v.x);
	rv.y = jit_gen_ceil_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_ceil(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_ceil_fixed(v.x);
	rv.y = jit_gen_ceil_fixed(v.y);
	rv.z = jit_gen_ceil_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_ceil(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_ceil_fixed(v.x);
	rv.y = jit_gen_ceil_fixed(v.y);
	rv.z = jit_gen_ceil_fixed(v.z);
	rv.w = jit_gen_ceil_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_ceil(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_ceil_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_cos(const Fixed v) {
	return jit_gen_cos_fixed(v);
}

Vec2<Fixed> jit_gen_cos(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_cos_fixed(v.x);
	rv.y = jit_gen_cos_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_cos(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_cos_fixed(v.x);
	rv.y = jit_gen_cos_fixed(v.y);
	rv.z = jit_gen_cos_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_cos(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_cos_fixed(v.x);
	rv.y = jit_gen_cos_fixed(v.y);
	rv.z = jit_gen_cos_fixed(v.z);
	rv.w = jit_gen_cos_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_cos(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_cos_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_cosh(const Fixed v) {
	return jit_gen_cosh_fixed(v);
}

Vec2<Fixed> jit_gen_cosh(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_cosh_fixed(v.x);
	rv.y = jit_gen_cosh_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_cosh(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_cosh_fixed(v.x);
	rv.y = jit_gen_cosh_fixed(v.y);
	rv.z = jit_gen_cosh_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_cosh(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_cosh_fixed(v.x);
	rv.y = jit_gen_cosh_fixed(v.y);
	rv.z = jit_gen_cosh_fixed(v.z);
	rv.w = jit_gen_cosh_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_cosh(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_cosh_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_exp(const Fixed v) {
	return jit_gen_exp_fixed(v);
}

Vec2<Fixed> jit_gen_exp(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_exp_fixed(v.x);
	rv.y = jit_gen_exp_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_exp(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_exp_fixed(v.x);
	rv.y = jit_gen_exp_fixed(v.y);
	rv.z = jit_gen_exp_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_exp(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_exp_fixed(v.x);
	rv.y = jit_gen_exp_fixed(v.y);
	rv.z = jit_gen_exp_fixed(v.z);
	rv.w = jit_gen_exp_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_exp(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_exp_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_exp2(const Fixed v) {
	return jit_gen_exp2_fixed(v);
}

Vec2<Fixed> jit_gen_exp2(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_exp2_fixed(v.x);
	rv.y = jit_gen_exp2_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_exp2(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_exp2_fixed(v.x);
	rv.y = jit_gen_exp2_fixed(v.y);
	rv.z = jit_gen_exp2_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_exp2(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_exp2_fixed(v.x);
	rv.y = jit_gen_exp2_fixed(v.y);
	rv.z = jit_gen_exp2_fixed(v.z);
	rv.w = jit_gen_exp2_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_exp2(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_exp2_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_floor(const Fixed v) {
	return jit_gen_floor_fixed(v);
}

Vec2<Fixed> jit_gen_floor(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_floor_fixed(v.x);
	rv.y = jit_gen_floor_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_floor(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_floor_fixed(v.x);
	rv.y = jit_gen_floor_fixed(v.y);
	rv.z = jit_gen_floor_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_floor(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_floor_fixed(v.x);
	rv.y = jit_gen_floor_fixed(v.y);
	rv.z = jit_gen_floor_fixed(v.z);
	rv.w = jit_gen_floor_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_floor(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_floor_fixed(v.v[i]);
	}
	return rv;
}

Fixed fract(const Fixed v) {
	return fract_fixed(v);
}

Vec2<Fixed> fract(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = fract_fixed(v.x);
	rv.y = fract_fixed(v.y);

	return rv;
}

Vec3<Fixed> fract(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = fract_fixed(v.x);
	rv.y = fract_fixed(v.y);
	rv.z = fract_fixed(v.z);

	return rv;
}

Vec4<Fixed> fract(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = fract_fixed(v.x);
	rv.y = fract_fixed(v.y);
	rv.z = fract_fixed(v.z);
	rv.w = fract_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> fract(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = fract_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_log(const Fixed v) {
	return jit_gen_log_fixed(v);
}

Vec2<Fixed> jit_gen_log(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_log_fixed(v.x);
	rv.y = jit_gen_log_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_log(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_log_fixed(v.x);
	rv.y = jit_gen_log_fixed(v.y);
	rv.z = jit_gen_log_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_log(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_log_fixed(v.x);
	rv.y = jit_gen_log_fixed(v.y);
	rv.z = jit_gen_log_fixed(v.z);
	rv.w = jit_gen_log_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_log(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_log2(const Fixed v) {
	return jit_gen_log2_fixed(v);
}

Vec2<Fixed> jit_gen_log2(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_log2_fixed(v.x);
	rv.y = jit_gen_log2_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_log2(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_log2_fixed(v.x);
	rv.y = jit_gen_log2_fixed(v.y);
	rv.z = jit_gen_log2_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_log2(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_log2_fixed(v.x);
	rv.y = jit_gen_log2_fixed(v.y);
	rv.z = jit_gen_log2_fixed(v.z);
	rv.w = jit_gen_log2_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_log2(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log2_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_log10(const Fixed v) {
	return jit_gen_log10_fixed(v);
}

Vec2<Fixed> jit_gen_log10(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_log10_fixed(v.x);
	rv.y = jit_gen_log10_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_log10(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_log10_fixed(v.x);
	rv.y = jit_gen_log10_fixed(v.y);
	rv.z = jit_gen_log10_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_log10(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_log10_fixed(v.x);
	rv.y = jit_gen_log10_fixed(v.y);
	rv.z = jit_gen_log10_fixed(v.z);
	rv.w = jit_gen_log10_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_log10(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_log10_fixed(v.v[i]);
	}
	return rv;
}

Fixed lnot(const Fixed v) {
	return lnot_fixed(v);
}

Vec2<Fixed> lnot(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = lnot_fixed(v.x);
	rv.y = lnot_fixed(v.y);

	return rv;
}

Vec3<Fixed> lnot(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = lnot_fixed(v.x);
	rv.y = lnot_fixed(v.y);
	rv.z = lnot_fixed(v.z);

	return rv;
}

Vec4<Fixed> lnot(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = lnot_fixed(v.x);
	rv.y = lnot_fixed(v.y);
	rv.z = lnot_fixed(v.z);
	rv.w = lnot_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> lnot(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lnot_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_round(const Fixed v) {
	return jit_gen_round_fixed(v);
}

Vec2<Fixed> jit_gen_round(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_round_fixed(v.x);
	rv.y = jit_gen_round_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_round(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_round_fixed(v.x);
	rv.y = jit_gen_round_fixed(v.y);
	rv.z = jit_gen_round_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_round(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_round_fixed(v.x);
	rv.y = jit_gen_round_fixed(v.y);
	rv.z = jit_gen_round_fixed(v.z);
	rv.w = jit_gen_round_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_round(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_round_fixed(v.v[i]);
	}
	return rv;
}

Fixed sign(const Fixed v) {
	return sign_fixed(v);
}

Vec2<Fixed> sign(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = sign_fixed(v.x);
	rv.y = sign_fixed(v.y);

	return rv;
}

Vec3<Fixed> sign(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = sign_fixed(v.x);
	rv.y = sign_fixed(v.y);
	rv.z = sign_fixed(v.z);

	return rv;
}

Vec4<Fixed> sign(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = sign_fixed(v.x);
	rv.y = sign_fixed(v.y);
	rv.z = sign_fixed(v.z);
	rv.w = sign_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> sign(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sign_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_sin(const Fixed v) {
	return jit_gen_sin_fixed(v);
}

Vec2<Fixed> jit_gen_sin(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_sin_fixed(v.x);
	rv.y = jit_gen_sin_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_sin(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_sin_fixed(v.x);
	rv.y = jit_gen_sin_fixed(v.y);
	rv.z = jit_gen_sin_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_sin(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_sin_fixed(v.x);
	rv.y = jit_gen_sin_fixed(v.y);
	rv.z = jit_gen_sin_fixed(v.z);
	rv.w = jit_gen_sin_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_sin(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sin_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_sinh(const Fixed v) {
	return jit_gen_sinh_fixed(v);
}

Vec2<Fixed> jit_gen_sinh(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_sinh_fixed(v.x);
	rv.y = jit_gen_sinh_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_sinh(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_sinh_fixed(v.x);
	rv.y = jit_gen_sinh_fixed(v.y);
	rv.z = jit_gen_sinh_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_sinh(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_sinh_fixed(v.x);
	rv.y = jit_gen_sinh_fixed(v.y);
	rv.z = jit_gen_sinh_fixed(v.z);
	rv.w = jit_gen_sinh_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_sinh(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sinh_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_sqrt(const Fixed v) {
	return jit_gen_sqrt_fixed(v);
}

Vec2<Fixed> jit_gen_sqrt(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_sqrt_fixed(v.x);
	rv.y = jit_gen_sqrt_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_sqrt(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_sqrt_fixed(v.x);
	rv.y = jit_gen_sqrt_fixed(v.y);
	rv.z = jit_gen_sqrt_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_sqrt(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_sqrt_fixed(v.x);
	rv.y = jit_gen_sqrt_fixed(v.y);
	rv.z = jit_gen_sqrt_fixed(v.z);
	rv.w = jit_gen_sqrt_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_sqrt(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_sqrt_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_tan(const Fixed v) {
	return jit_gen_tan_fixed(v);
}

Vec2<Fixed> jit_gen_tan(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_tan_fixed(v.x);
	rv.y = jit_gen_tan_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_tan(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_tan_fixed(v.x);
	rv.y = jit_gen_tan_fixed(v.y);
	rv.z = jit_gen_tan_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_tan(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_tan_fixed(v.x);
	rv.y = jit_gen_tan_fixed(v.y);
	rv.z = jit_gen_tan_fixed(v.z);
	rv.w = jit_gen_tan_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_tan(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_tan_fixed(v.v[i]);
	}
	return rv;
}

Fixed jit_gen_tanh(const Fixed v) {
	return jit_gen_tanh_fixed(v);
}

Vec2<Fixed> jit_gen_tanh(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_tanh_fixed(v.x);
	rv.y = jit_gen_tanh_fixed(v.y);

	return rv;
}

Vec3<Fixed> jit_gen_tanh(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_tanh_fixed(v.x);
	rv.y = jit_gen_tanh_fixed(v.y);
	rv.z = jit_gen_tanh_fixed(v.z);

	return rv;
}

Vec4<Fixed> jit_gen_tanh(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_tanh_fixed(v.x);
	rv.y = jit_gen_tanh_fixed(v.y);
	rv.z = jit_gen_tanh_fixed(v.z);
	rv.w = jit_gen_tanh_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_tanh(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_tanh_fixed(v.v[i]);
	}
	return rv;
}

Fixed trunc(const Fixed v) {
	return trunc_fixed(v);
}

Vec2<Fixed> trunc(const Vec2<Fixed> &v) {
	Vec2<Fixed> rv;
	rv.x = trunc_fixed(v.x);
	rv.y = trunc_fixed(v.y);

	return rv;
}

Vec3<Fixed> trunc(const Vec3<Fixed> &v) {
	Vec3<Fixed> rv;
	rv.x = trunc_fixed(v.x);
	rv.y = trunc_fixed(v.y);
	rv.z = trunc_fixed(v.z);

	return rv;
}

Vec4<Fixed> trunc(const Vec4<Fixed> &v) {
	Vec4<Fixed> rv;
	rv.x = trunc_fixed(v.x);
	rv.y = trunc_fixed(v.y);
	rv.z = trunc_fixed(v.z);
	rv.w = trunc_fixed(v.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> trunc(const VecN<Fixed, N> &v) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = trunc_fixed(v.v[i]);
	}
	return rv;
}

Fixed absdiff(const Fixed v1, const Fixed v2) {
	return absdiff_fixed(v1, v2);
}

Vec2<Fixed> absdiff(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = absdiff_fixed(v1.x, v2.x);
	rv.y = absdiff_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> absdiff(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = absdiff_fixed(v1.x, v2.x);
	rv.y = absdiff_fixed(v1.y, v2.y);
	rv.z = absdiff_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> absdiff(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = absdiff_fixed(v1.x, v2.x);
	rv.y = absdiff_fixed(v1.y, v2.y);
	rv.z = absdiff_fixed(v1.z, v2.z);
	rv.w = absdiff_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> absdiff(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = absdiff_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed jit_gen_atan2(const Fixed v1, const Fixed v2) {
	return jit_gen_atan2_fixed(v1, v2);
}

Vec2<Fixed> jit_gen_atan2(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_atan2_fixed(v1.x, v2.x);
	rv.y = jit_gen_atan2_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> jit_gen_atan2(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_atan2_fixed(v1.x, v2.x);
	rv.y = jit_gen_atan2_fixed(v1.y, v2.y);
	rv.z = jit_gen_atan2_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> jit_gen_atan2(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_atan2_fixed(v1.x, v2.x);
	rv.y = jit_gen_atan2_fixed(v1.y, v2.y);
	rv.z = jit_gen_atan2_fixed(v1.z, v2.z);
	rv.w = jit_gen_atan2_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_atan2(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_atan2_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed eq(const Fixed v1, const Fixed v2) {
	return eq_fixed(v1, v2);
}

Vec2<Fixed> eq(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = eq_fixed(v1.x, v2.x);
	rv.y = eq_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> eq(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = eq_fixed(v1.x, v2.x);
	rv.y = eq_fixed(v1.y, v2.y);
	rv.z = eq_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> eq(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = eq_fixed(v1.x, v2.x);
	rv.y = eq_fixed(v1.y, v2.y);
	rv.z = eq_fixed(v1.z, v2.z);
	rv.w = eq_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> eq(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eq_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed eqp(const Fixed v1, const Fixed v2) {
	return eqp_fixed(v1, v2);
}

Vec2<Fixed> eqp(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = eqp_fixed(v1.x, v2.x);
	rv.y = eqp_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> eqp(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = eqp_fixed(v1.x, v2.x);
	rv.y = eqp_fixed(v1.y, v2.y);
	rv.z = eqp_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> eqp(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = eqp_fixed(v1.x, v2.x);
	rv.y = eqp_fixed(v1.y, v2.y);
	rv.z = eqp_fixed(v1.z, v2.z);
	rv.w = eqp_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> eqp(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eqp_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed gt(const Fixed v1, const Fixed v2) {
	return gt_fixed(v1, v2);
}

Vec2<Fixed> gt(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = gt_fixed(v1.x, v2.x);
	rv.y = gt_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> gt(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = gt_fixed(v1.x, v2.x);
	rv.y = gt_fixed(v1.y, v2.y);
	rv.z = gt_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> gt(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = gt_fixed(v1.x, v2.x);
	rv.y = gt_fixed(v1.y, v2.y);
	rv.z = gt_fixed(v1.z, v2.z);
	rv.w = gt_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> gt(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gt_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed gte(const Fixed v1, const Fixed v2) {
	return gte_fixed(v1, v2);
}

Vec2<Fixed> gte(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = gte_fixed(v1.x, v2.x);
	rv.y = gte_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> gte(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = gte_fixed(v1.x, v2.x);
	rv.y = gte_fixed(v1.y, v2.y);
	rv.z = gte_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> gte(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = gte_fixed(v1.x, v2.x);
	rv.y = gte_fixed(v1.y, v2.y);
	rv.z = gte_fixed(v1.z, v2.z);
	rv.w = gte_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> gte(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gte_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed gtep(const Fixed v1, const Fixed v2) {
	return gtep_fixed(v1, v2);
}

Vec2<Fixed> gtep(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = gtep_fixed(v1.x, v2.x);
	rv.y = gtep_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> gtep(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = gtep_fixed(v1.x, v2.x);
	rv.y = gtep_fixed(v1.y, v2.y);
	rv.z = gtep_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> gtep(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = gtep_fixed(v1.x, v2.x);
	rv.y = gtep_fixed(v1.y, v2.y);
	rv.z = gtep_fixed(v1.z, v2.z);
	rv.w = gtep_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> gtep(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtep_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed gtp(const Fixed v1, const Fixed v2) {
	return gtp_fixed(v1, v2);
}

Vec2<Fixed> gtp(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = gtp_fixed(v1.x, v2.x);
	rv.y = gtp_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> gtp(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = gtp_fixed(v1.x, v2.x);
	rv.y = gtp_fixed(v1.y, v2.y);
	rv.z = gtp_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> gtp(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = gtp_fixed(v1.x, v2.x);
	rv.y = gtp_fixed(v1.y, v2.y);
	rv.z = gtp_fixed(v1.z, v2.z);
	rv.w = gtp_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> gtp(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtp_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed hypot(const Fixed v1, const Fixed v2) {
	return hypot_fixed(v1, v2);
}

Vec2<Fixed> hypot(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = hypot_fixed(v1.x, v2.x);
	rv.y = hypot_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> hypot(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = hypot_fixed(v1.x, v2.x);
	rv.y = hypot_fixed(v1.y, v2.y);
	rv.z = hypot_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> hypot(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = hypot_fixed(v1.x, v2.x);
	rv.y = hypot_fixed(v1.y, v2.y);
	rv.z = hypot_fixed(v1.z, v2.z);
	rv.w = hypot_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> hypot(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = hypot_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed land(const Fixed v1, const Fixed v2) {
	return land_fixed(v1, v2);
}

Vec2<Fixed> land(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = land_fixed(v1.x, v2.x);
	rv.y = land_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> land(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = land_fixed(v1.x, v2.x);
	rv.y = land_fixed(v1.y, v2.y);
	rv.z = land_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> land(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = land_fixed(v1.x, v2.x);
	rv.y = land_fixed(v1.y, v2.y);
	rv.z = land_fixed(v1.z, v2.z);
	rv.w = land_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> land(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = land_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed lor(const Fixed v1, const Fixed v2) {
	return lor_fixed(v1, v2);
}

Vec2<Fixed> lor(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = lor_fixed(v1.x, v2.x);
	rv.y = lor_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> lor(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = lor_fixed(v1.x, v2.x);
	rv.y = lor_fixed(v1.y, v2.y);
	rv.z = lor_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> lor(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = lor_fixed(v1.x, v2.x);
	rv.y = lor_fixed(v1.y, v2.y);
	rv.z = lor_fixed(v1.z, v2.z);
	rv.w = lor_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> lor(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lor_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed lt(const Fixed v1, const Fixed v2) {
	return lt_fixed(v1, v2);
}

Vec2<Fixed> lt(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = lt_fixed(v1.x, v2.x);
	rv.y = lt_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> lt(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = lt_fixed(v1.x, v2.x);
	rv.y = lt_fixed(v1.y, v2.y);
	rv.z = lt_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> lt(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = lt_fixed(v1.x, v2.x);
	rv.y = lt_fixed(v1.y, v2.y);
	rv.z = lt_fixed(v1.z, v2.z);
	rv.w = lt_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> lt(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lt_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed lte(const Fixed v1, const Fixed v2) {
	return lte_fixed(v1, v2);
}

Vec2<Fixed> lte(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = lte_fixed(v1.x, v2.x);
	rv.y = lte_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> lte(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = lte_fixed(v1.x, v2.x);
	rv.y = lte_fixed(v1.y, v2.y);
	rv.z = lte_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> lte(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = lte_fixed(v1.x, v2.x);
	rv.y = lte_fixed(v1.y, v2.y);
	rv.z = lte_fixed(v1.z, v2.z);
	rv.w = lte_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> lte(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lte_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed ltep(const Fixed v1, const Fixed v2) {
	return ltep_fixed(v1, v2);
}

Vec2<Fixed> ltep(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = ltep_fixed(v1.x, v2.x);
	rv.y = ltep_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> ltep(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = ltep_fixed(v1.x, v2.x);
	rv.y = ltep_fixed(v1.y, v2.y);
	rv.z = ltep_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> ltep(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = ltep_fixed(v1.x, v2.x);
	rv.y = ltep_fixed(v1.y, v2.y);
	rv.z = ltep_fixed(v1.z, v2.z);
	rv.w = ltep_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> ltep(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltep_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed ltp(const Fixed v1, const Fixed v2) {
	return ltp_fixed(v1, v2);
}

Vec2<Fixed> ltp(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = ltp_fixed(v1.x, v2.x);
	rv.y = ltp_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> ltp(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = ltp_fixed(v1.x, v2.x);
	rv.y = ltp_fixed(v1.y, v2.y);
	rv.z = ltp_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> ltp(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = ltp_fixed(v1.x, v2.x);
	rv.y = ltp_fixed(v1.y, v2.y);
	rv.z = ltp_fixed(v1.z, v2.z);
	rv.w = ltp_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> ltp(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltp_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed max(const Fixed v1, const Fixed v2) {
	return max_fixed(v1, v2);
}

Vec2<Fixed> max(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = max_fixed(v1.x, v2.x);
	rv.y = max_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> max(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = max_fixed(v1.x, v2.x);
	rv.y = max_fixed(v1.y, v2.y);
	rv.z = max_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> max(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = max_fixed(v1.x, v2.x);
	rv.y = max_fixed(v1.y, v2.y);
	rv.z = max_fixed(v1.z, v2.z);
	rv.w = max_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> max(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = max_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed min(const Fixed v1, const Fixed v2) {
	return min_fixed(v1, v2);
}

Vec2<Fixed> min(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = min_fixed(v1.x, v2.x);
	rv.y = min_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> min(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = min_fixed(v1.x, v2.x);
	rv.y = min_fixed(v1.y, v2.y);
	rv.z = min_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> min(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = min_fixed(v1.x, v2.x);
	rv.y = min_fixed(v1.y, v2.y);
	rv.z = min_fixed(v1.z, v2.z);
	rv.w = min_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> min(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = min_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed mod(const Fixed v1, const Fixed v2) {
	return mod_fixed(v1, v2);
}

Vec2<Fixed> mod(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = mod_fixed(v1.x, v2.x);
	rv.y = mod_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> mod(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = mod_fixed(v1.x, v2.x);
	rv.y = mod_fixed(v1.y, v2.y);
	rv.z = mod_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> mod(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = mod_fixed(v1.x, v2.x);
	rv.y = mod_fixed(v1.y, v2.y);
	rv.z = mod_fixed(v1.z, v2.z);
	rv.w = mod_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> mod(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = mod_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed neq(const Fixed v1, const Fixed v2) {
	return neq_fixed(v1, v2);
}

Vec2<Fixed> neq(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = neq_fixed(v1.x, v2.x);
	rv.y = neq_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> neq(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = neq_fixed(v1.x, v2.x);
	rv.y = neq_fixed(v1.y, v2.y);
	rv.z = neq_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> neq(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = neq_fixed(v1.x, v2.x);
	rv.y = neq_fixed(v1.y, v2.y);
	rv.z = neq_fixed(v1.z, v2.z);
	rv.w = neq_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> neq(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neq_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed neqp(const Fixed v1, const Fixed v2) {
	return neqp_fixed(v1, v2);
}

Vec2<Fixed> neqp(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = neqp_fixed(v1.x, v2.x);
	rv.y = neqp_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> neqp(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = neqp_fixed(v1.x, v2.x);
	rv.y = neqp_fixed(v1.y, v2.y);
	rv.z = neqp_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> neqp(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = neqp_fixed(v1.x, v2.x);
	rv.y = neqp_fixed(v1.y, v2.y);
	rv.z = neqp_fixed(v1.z, v2.z);
	rv.w = neqp_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> neqp(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neqp_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed jit_gen_pow(const Fixed v1, const Fixed v2) {
	return jit_gen_pow_fixed(v1, v2);
}

Vec2<Fixed> jit_gen_pow(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = jit_gen_pow_fixed(v1.x, v2.x);
	rv.y = jit_gen_pow_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> jit_gen_pow(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = jit_gen_pow_fixed(v1.x, v2.x);
	rv.y = jit_gen_pow_fixed(v1.y, v2.y);
	rv.z = jit_gen_pow_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> jit_gen_pow(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = jit_gen_pow_fixed(v1.x, v2.x);
	rv.y = jit_gen_pow_fixed(v1.y, v2.y);
	rv.z = jit_gen_pow_fixed(v1.z, v2.z);
	rv.w = jit_gen_pow_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> jit_gen_pow(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_gen_pow_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed lxor(const Fixed v1, const Fixed v2) {
	return lxor_fixed(v1, v2);
}

Vec2<Fixed> lxor(const Vec2<Fixed> &v1, const Vec2<Fixed> &v2) {
	Vec2<Fixed> rv;
	rv.x = lxor_fixed(v1.x, v2.x);
	rv.y = lxor_fixed(v1.y, v2.y);

	return rv;
}

Vec3<Fixed> lxor(const Vec3<Fixed> &v1, const Vec3<Fixed> &v2) {
	Vec3<Fixed> rv;
	rv.x = lxor_fixed(v1.x, v2.x);
	rv.y = lxor_fixed(v1.y, v2.y);
	rv.z = lxor_fixed(v1.z, v2.z);

	return rv;
}

Vec4<Fixed> lxor(const Vec4<Fixed> &v1, const Vec4<Fixed> &v2) {
	Vec4<Fixed> rv;
	rv.x = lxor_fixed(v1.x, v2.x);
	rv.y = lxor_fixed(v1.y, v2.y);
	rv.z = lxor_fixed(v1.z, v2.z);
	rv.w = lxor_fixed(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> lxor(const VecN<Fixed, N> &v1, const VecN<Fixed, N> &v2) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lxor_fixed(v1.v[i], v2.v[i]);
	}
	return rv;
}

Fixed foldop(const Fixed v1, const Fixed v2, const Fixed v3) {
	return foldop_fixed(v1, v2, v3);
}

Vec2<Fixed> foldop(
	const Vec2<Fixed> &v1, 
	const Vec2<Fixed> &v2, 
	const Vec2<Fixed> &v3
) {
	Vec2<Fixed> rv;
	rv.x = foldop_fixed(v1.x, v2.x, v3.x);
	rv.y = foldop_fixed(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<Fixed> foldop(
	const Vec3<Fixed> &v1, 
	const Vec3<Fixed> &v2, 
	const Vec3<Fixed> &v3
) {
	Vec3<Fixed> rv;
	rv.x = foldop_fixed(v1.x, v2.x, v3.x);
	rv.y = foldop_fixed(v1.y, v2.y, v3.y);
	rv.z = foldop_fixed(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<Fixed> foldop(
	const Vec4<Fixed> &v1, 
	const Vec4<Fixed> &v2, 
	const Vec4<Fixed> &v3
) {
	Vec4<Fixed> rv;
	rv.x = foldop_fixed(v1.x, v2.x, v3.x);
	rv.y = foldop_fixed(v1.y, v2.y, v3.y);
	rv.z = foldop_fixed(v1.z, v2.z, v3.z);
	rv.w = foldop_fixed(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> foldop(
	const VecN<Fixed, N> &v1, 
	const VecN<Fixed, N> &v2,
	const VecN<Fixed, N> &v3
) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = foldop_fixed(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

Fixed smoothstep(const Fixed v1, const Fixed v2, const Fixed v3) {
	return smoothstep_fixed(v1, v2, v3);
}

Vec2<Fixed> smoothstep(
	const Vec2<Fixed> &v1, 
	const Vec2<Fixed> &v2, 
	const Vec2<Fixed> &v3
) {
	Vec2<Fixed> rv;
	rv.x = smoothstep_fixed(v1.x, v2.x, v3.x);
	rv.y = smoothstep_fixed(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<Fixed> smoothstep(
	const Vec3<Fixed> &v1, 
	const Vec3<Fixed> &v2, 
	const Vec3<Fixed> &v3
) {
	Vec3<Fixed> rv;
	rv.x = smoothstep_fixed(v1.x, v2.x, v3.x);
	rv.y = smoothstep_fixed(v1.y, v2.y, v3.y);
	rv.z = smoothstep_fixed(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<Fixed> smoothstep(
	const Vec4<Fixed> &v1, 
	const Vec4<Fixed> &v2, 
	const Vec4<Fixed> &v3
) {
	Vec4<Fixed> rv;
	rv.x = smoothstep_fixed(v1.x, v2.x, v3.x);
	rv.y = smoothstep_fixed(v1.y, v2.y, v3.y);
	rv.z = smoothstep_fixed(v1.z, v2.z, v3.z);
	rv.w = smoothstep_fixed(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> smoothstep(
	const VecN<Fixed, N> &v1, 
	const VecN<Fixed, N> &v2,
	const VecN<Fixed, N> &v3
) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = smoothstep_fixed(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

Fixed switchop(const Fixed v1, const Fixed v2, const Fixed v3) {
	return switchop_fixed(v1, v2, v3);
}

Vec2<Fixed> switchop(
	const Vec2<Fixed> &v1, 
	const Vec2<Fixed> &v2, 
	const Vec2<Fixed> &v3
) {
	Vec2<Fixed> rv;
	rv.x = switchop_fixed(v1.x, v2.x, v3.x);
	rv.y = switchop_fixed(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<Fixed> switchop(
	const Vec3<Fixed> &v1, 
	const Vec3<Fixed> &v2, 
	const Vec3<Fixed> &v3
) {
	Vec3<Fixed> rv;
	rv.x = switchop_fixed(v1.x, v2.x, v3.x);
	rv.y = switchop_fixed(v1.y, v2.y, v3.y);
	rv.z = switchop_fixed(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<Fixed> switchop(
	const Vec4<Fixed> &v1, 
	const Vec4<Fixed> &v2, 
	const Vec4<Fixed> &v3
) {
	Vec4<Fixed> rv;
	rv.x = switchop_fixed(v1.x, v2.x, v3.x);
	rv.y = switchop_fixed(v1.y, v2.y, v3.y);
	rv.z = switchop_fixed(v1.z, v2.z, v3.z);
	rv.w = switchop_fixed(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> switchop(
	const VecN<Fixed, N> &v1, 
	const VecN<Fixed, N> &v2,
	const VecN<Fixed, N> &v3
) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = switchop_fixed(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

Fixed wrapop(const Fixed v1, const Fixed v2, const Fixed v3) {
	return wrapop_fixed(v1, v2, v3);
}

Vec2<Fixed> wrapop(
	const Vec2<Fixed> &v1, 
	const Vec2<Fixed> &v2, 
	const Vec2<Fixed> &v3
) {
	Vec2<Fixed> rv;
	rv.x = wrapop_fixed(v1.x, v2.x, v3.x);
	rv.y = wrapop_fixed(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<Fixed> wrapop(
	const Vec3<Fixed> &v1, 
	const Vec3<Fixed> &v2, 
	const Vec3<Fixed> &v3
) {
	Vec3<Fixed> rv;
	rv.x = wrapop_fixed(v1.x, v2.x, v3.x);
	rv.y = wrapop_fixed(v1.y, v2.y, v3.y);
	rv.z = wrapop_fixed(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<Fixed> wrapop(
	const Vec4<Fixed> &v1, 
	const Vec4<Fixed> &v2, 
	const Vec4<Fixed> &v3
) {
	Vec4<Fixed> rv;
	rv.x = wrapop_fixed(v1.x, v2.x, v3.x);
	rv.y = wrapop_fixed(v1.y, v2.y, v3.y);
	rv.z = wrapop_fixed(v1.z, v2.z, v3.z);
	rv.w = wrapop_fixed(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<Fixed, N> wrapop(
	const VecN<Fixed, N> &v1, 
	const VecN<Fixed, N> &v2,
	const VecN<Fixed, N> &v3
) {
	VecN<Fixed, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = wrapop_fixed(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}



#endif // JIT_CODEGEN_OP_FIXED_HPP
