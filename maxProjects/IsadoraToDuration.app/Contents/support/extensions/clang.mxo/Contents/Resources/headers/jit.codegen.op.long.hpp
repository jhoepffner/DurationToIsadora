// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_OP_LONG_HPP
#define JIT_CODEGEN_OP_LONG_HPP 1
#include "math.codegen.h"
#include "jit.codegen.vec.hpp"
#include "jit.codegen.op.hpp"

long abs(const long v) {
	return abs_long(v);
}

Vec2<long> abs(const Vec2<long> &v) {
	Vec2<long> rv;
	rv.x = abs_long(v.x);
	rv.y = abs_long(v.y);

	return rv;
}

Vec3<long> abs(const Vec3<long> &v) {
	Vec3<long> rv;
	rv.x = abs_long(v.x);
	rv.y = abs_long(v.y);
	rv.z = abs_long(v.z);

	return rv;
}

Vec4<long> abs(const Vec4<long> &v) {
	Vec4<long> rv;
	rv.x = abs_long(v.x);
	rv.y = abs_long(v.y);
	rv.z = abs_long(v.z);
	rv.w = abs_long(v.w);

	return rv;
}

template <unsigned N>
VecN<long, N> abs(const VecN<long, N> &v) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = abs_long(v.v[i]);
	}
	return rv;
}

long lnot(const long v) {
	return lnot_long(v);
}

Vec2<long> lnot(const Vec2<long> &v) {
	Vec2<long> rv;
	rv.x = lnot_long(v.x);
	rv.y = lnot_long(v.y);

	return rv;
}

Vec3<long> lnot(const Vec3<long> &v) {
	Vec3<long> rv;
	rv.x = lnot_long(v.x);
	rv.y = lnot_long(v.y);
	rv.z = lnot_long(v.z);

	return rv;
}

Vec4<long> lnot(const Vec4<long> &v) {
	Vec4<long> rv;
	rv.x = lnot_long(v.x);
	rv.y = lnot_long(v.y);
	rv.z = lnot_long(v.z);
	rv.w = lnot_long(v.w);

	return rv;
}

template <unsigned N>
VecN<long, N> lnot(const VecN<long, N> &v) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lnot_long(v.v[i]);
	}
	return rv;
}

long sign(const long v) {
	return sign_long(v);
}

Vec2<long> sign(const Vec2<long> &v) {
	Vec2<long> rv;
	rv.x = sign_long(v.x);
	rv.y = sign_long(v.y);

	return rv;
}

Vec3<long> sign(const Vec3<long> &v) {
	Vec3<long> rv;
	rv.x = sign_long(v.x);
	rv.y = sign_long(v.y);
	rv.z = sign_long(v.z);

	return rv;
}

Vec4<long> sign(const Vec4<long> &v) {
	Vec4<long> rv;
	rv.x = sign_long(v.x);
	rv.y = sign_long(v.y);
	rv.z = sign_long(v.z);
	rv.w = sign_long(v.w);

	return rv;
}

template <unsigned N>
VecN<long, N> sign(const VecN<long, N> &v) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sign_long(v.v[i]);
	}
	return rv;
}

long absdiff(const long v1, const long v2) {
	return absdiff_long(v1, v2);
}

Vec2<long> absdiff(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = absdiff_long(v1.x, v2.x);
	rv.y = absdiff_long(v1.y, v2.y);

	return rv;
}

Vec3<long> absdiff(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = absdiff_long(v1.x, v2.x);
	rv.y = absdiff_long(v1.y, v2.y);
	rv.z = absdiff_long(v1.z, v2.z);

	return rv;
}

Vec4<long> absdiff(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = absdiff_long(v1.x, v2.x);
	rv.y = absdiff_long(v1.y, v2.y);
	rv.z = absdiff_long(v1.z, v2.z);
	rv.w = absdiff_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> absdiff(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = absdiff_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long eq(const long v1, const long v2) {
	return eq_long(v1, v2);
}

Vec2<long> eq(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = eq_long(v1.x, v2.x);
	rv.y = eq_long(v1.y, v2.y);

	return rv;
}

Vec3<long> eq(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = eq_long(v1.x, v2.x);
	rv.y = eq_long(v1.y, v2.y);
	rv.z = eq_long(v1.z, v2.z);

	return rv;
}

Vec4<long> eq(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = eq_long(v1.x, v2.x);
	rv.y = eq_long(v1.y, v2.y);
	rv.z = eq_long(v1.z, v2.z);
	rv.w = eq_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> eq(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eq_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long eqp(const long v1, const long v2) {
	return eqp_long(v1, v2);
}

Vec2<long> eqp(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = eqp_long(v1.x, v2.x);
	rv.y = eqp_long(v1.y, v2.y);

	return rv;
}

Vec3<long> eqp(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = eqp_long(v1.x, v2.x);
	rv.y = eqp_long(v1.y, v2.y);
	rv.z = eqp_long(v1.z, v2.z);

	return rv;
}

Vec4<long> eqp(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = eqp_long(v1.x, v2.x);
	rv.y = eqp_long(v1.y, v2.y);
	rv.z = eqp_long(v1.z, v2.z);
	rv.w = eqp_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> eqp(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = eqp_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long gt(const long v1, const long v2) {
	return gt_long(v1, v2);
}

Vec2<long> gt(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = gt_long(v1.x, v2.x);
	rv.y = gt_long(v1.y, v2.y);

	return rv;
}

Vec3<long> gt(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = gt_long(v1.x, v2.x);
	rv.y = gt_long(v1.y, v2.y);
	rv.z = gt_long(v1.z, v2.z);

	return rv;
}

Vec4<long> gt(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = gt_long(v1.x, v2.x);
	rv.y = gt_long(v1.y, v2.y);
	rv.z = gt_long(v1.z, v2.z);
	rv.w = gt_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> gt(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gt_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long gte(const long v1, const long v2) {
	return gte_long(v1, v2);
}

Vec2<long> gte(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = gte_long(v1.x, v2.x);
	rv.y = gte_long(v1.y, v2.y);

	return rv;
}

Vec3<long> gte(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = gte_long(v1.x, v2.x);
	rv.y = gte_long(v1.y, v2.y);
	rv.z = gte_long(v1.z, v2.z);

	return rv;
}

Vec4<long> gte(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = gte_long(v1.x, v2.x);
	rv.y = gte_long(v1.y, v2.y);
	rv.z = gte_long(v1.z, v2.z);
	rv.w = gte_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> gte(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gte_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long gtep(const long v1, const long v2) {
	return gtep_long(v1, v2);
}

Vec2<long> gtep(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = gtep_long(v1.x, v2.x);
	rv.y = gtep_long(v1.y, v2.y);

	return rv;
}

Vec3<long> gtep(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = gtep_long(v1.x, v2.x);
	rv.y = gtep_long(v1.y, v2.y);
	rv.z = gtep_long(v1.z, v2.z);

	return rv;
}

Vec4<long> gtep(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = gtep_long(v1.x, v2.x);
	rv.y = gtep_long(v1.y, v2.y);
	rv.z = gtep_long(v1.z, v2.z);
	rv.w = gtep_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> gtep(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtep_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long gtp(const long v1, const long v2) {
	return gtp_long(v1, v2);
}

Vec2<long> gtp(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = gtp_long(v1.x, v2.x);
	rv.y = gtp_long(v1.y, v2.y);

	return rv;
}

Vec3<long> gtp(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = gtp_long(v1.x, v2.x);
	rv.y = gtp_long(v1.y, v2.y);
	rv.z = gtp_long(v1.z, v2.z);

	return rv;
}

Vec4<long> gtp(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = gtp_long(v1.x, v2.x);
	rv.y = gtp_long(v1.y, v2.y);
	rv.z = gtp_long(v1.z, v2.z);
	rv.w = gtp_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> gtp(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = gtp_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long land(const long v1, const long v2) {
	return land_long(v1, v2);
}

Vec2<long> land(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = land_long(v1.x, v2.x);
	rv.y = land_long(v1.y, v2.y);

	return rv;
}

Vec3<long> land(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = land_long(v1.x, v2.x);
	rv.y = land_long(v1.y, v2.y);
	rv.z = land_long(v1.z, v2.z);

	return rv;
}

Vec4<long> land(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = land_long(v1.x, v2.x);
	rv.y = land_long(v1.y, v2.y);
	rv.z = land_long(v1.z, v2.z);
	rv.w = land_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> land(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = land_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long lor(const long v1, const long v2) {
	return lor_long(v1, v2);
}

Vec2<long> lor(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = lor_long(v1.x, v2.x);
	rv.y = lor_long(v1.y, v2.y);

	return rv;
}

Vec3<long> lor(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = lor_long(v1.x, v2.x);
	rv.y = lor_long(v1.y, v2.y);
	rv.z = lor_long(v1.z, v2.z);

	return rv;
}

Vec4<long> lor(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = lor_long(v1.x, v2.x);
	rv.y = lor_long(v1.y, v2.y);
	rv.z = lor_long(v1.z, v2.z);
	rv.w = lor_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> lor(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lor_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long lt(const long v1, const long v2) {
	return lt_long(v1, v2);
}

Vec2<long> lt(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = lt_long(v1.x, v2.x);
	rv.y = lt_long(v1.y, v2.y);

	return rv;
}

Vec3<long> lt(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = lt_long(v1.x, v2.x);
	rv.y = lt_long(v1.y, v2.y);
	rv.z = lt_long(v1.z, v2.z);

	return rv;
}

Vec4<long> lt(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = lt_long(v1.x, v2.x);
	rv.y = lt_long(v1.y, v2.y);
	rv.z = lt_long(v1.z, v2.z);
	rv.w = lt_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> lt(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lt_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long lte(const long v1, const long v2) {
	return lte_long(v1, v2);
}

Vec2<long> lte(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = lte_long(v1.x, v2.x);
	rv.y = lte_long(v1.y, v2.y);

	return rv;
}

Vec3<long> lte(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = lte_long(v1.x, v2.x);
	rv.y = lte_long(v1.y, v2.y);
	rv.z = lte_long(v1.z, v2.z);

	return rv;
}

Vec4<long> lte(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = lte_long(v1.x, v2.x);
	rv.y = lte_long(v1.y, v2.y);
	rv.z = lte_long(v1.z, v2.z);
	rv.w = lte_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> lte(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lte_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long ltep(const long v1, const long v2) {
	return ltep_long(v1, v2);
}

Vec2<long> ltep(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = ltep_long(v1.x, v2.x);
	rv.y = ltep_long(v1.y, v2.y);

	return rv;
}

Vec3<long> ltep(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = ltep_long(v1.x, v2.x);
	rv.y = ltep_long(v1.y, v2.y);
	rv.z = ltep_long(v1.z, v2.z);

	return rv;
}

Vec4<long> ltep(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = ltep_long(v1.x, v2.x);
	rv.y = ltep_long(v1.y, v2.y);
	rv.z = ltep_long(v1.z, v2.z);
	rv.w = ltep_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> ltep(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltep_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long ltp(const long v1, const long v2) {
	return ltp_long(v1, v2);
}

Vec2<long> ltp(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = ltp_long(v1.x, v2.x);
	rv.y = ltp_long(v1.y, v2.y);

	return rv;
}

Vec3<long> ltp(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = ltp_long(v1.x, v2.x);
	rv.y = ltp_long(v1.y, v2.y);
	rv.z = ltp_long(v1.z, v2.z);

	return rv;
}

Vec4<long> ltp(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = ltp_long(v1.x, v2.x);
	rv.y = ltp_long(v1.y, v2.y);
	rv.z = ltp_long(v1.z, v2.z);
	rv.w = ltp_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> ltp(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ltp_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long max(const long v1, const long v2) {
	return max_long(v1, v2);
}

Vec2<long> max(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = max_long(v1.x, v2.x);
	rv.y = max_long(v1.y, v2.y);

	return rv;
}

Vec3<long> max(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = max_long(v1.x, v2.x);
	rv.y = max_long(v1.y, v2.y);
	rv.z = max_long(v1.z, v2.z);

	return rv;
}

Vec4<long> max(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = max_long(v1.x, v2.x);
	rv.y = max_long(v1.y, v2.y);
	rv.z = max_long(v1.z, v2.z);
	rv.w = max_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> max(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = max_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long min(const long v1, const long v2) {
	return min_long(v1, v2);
}

Vec2<long> min(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = min_long(v1.x, v2.x);
	rv.y = min_long(v1.y, v2.y);

	return rv;
}

Vec3<long> min(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = min_long(v1.x, v2.x);
	rv.y = min_long(v1.y, v2.y);
	rv.z = min_long(v1.z, v2.z);

	return rv;
}

Vec4<long> min(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = min_long(v1.x, v2.x);
	rv.y = min_long(v1.y, v2.y);
	rv.z = min_long(v1.z, v2.z);
	rv.w = min_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> min(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = min_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long neq(const long v1, const long v2) {
	return neq_long(v1, v2);
}

Vec2<long> neq(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = neq_long(v1.x, v2.x);
	rv.y = neq_long(v1.y, v2.y);

	return rv;
}

Vec3<long> neq(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = neq_long(v1.x, v2.x);
	rv.y = neq_long(v1.y, v2.y);
	rv.z = neq_long(v1.z, v2.z);

	return rv;
}

Vec4<long> neq(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = neq_long(v1.x, v2.x);
	rv.y = neq_long(v1.y, v2.y);
	rv.z = neq_long(v1.z, v2.z);
	rv.w = neq_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> neq(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neq_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long neqp(const long v1, const long v2) {
	return neqp_long(v1, v2);
}

Vec2<long> neqp(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = neqp_long(v1.x, v2.x);
	rv.y = neqp_long(v1.y, v2.y);

	return rv;
}

Vec3<long> neqp(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = neqp_long(v1.x, v2.x);
	rv.y = neqp_long(v1.y, v2.y);
	rv.z = neqp_long(v1.z, v2.z);

	return rv;
}

Vec4<long> neqp(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = neqp_long(v1.x, v2.x);
	rv.y = neqp_long(v1.y, v2.y);
	rv.z = neqp_long(v1.z, v2.z);
	rv.w = neqp_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> neqp(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = neqp_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long lxor(const long v1, const long v2) {
	return lxor_long(v1, v2);
}

Vec2<long> lxor(const Vec2<long> &v1, const Vec2<long> &v2) {
	Vec2<long> rv;
	rv.x = lxor_long(v1.x, v2.x);
	rv.y = lxor_long(v1.y, v2.y);

	return rv;
}

Vec3<long> lxor(const Vec3<long> &v1, const Vec3<long> &v2) {
	Vec3<long> rv;
	rv.x = lxor_long(v1.x, v2.x);
	rv.y = lxor_long(v1.y, v2.y);
	rv.z = lxor_long(v1.z, v2.z);

	return rv;
}

Vec4<long> lxor(const Vec4<long> &v1, const Vec4<long> &v2) {
	Vec4<long> rv;
	rv.x = lxor_long(v1.x, v2.x);
	rv.y = lxor_long(v1.y, v2.y);
	rv.z = lxor_long(v1.z, v2.z);
	rv.w = lxor_long(v1.w, v2.w);

	return rv;
}

template <unsigned N>
VecN<long, N> lxor(const VecN<long, N> &v1, const VecN<long, N> &v2) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = lxor_long(v1.v[i], v2.v[i]);
	}
	return rv;
}

long foldop(const long v1, const long v2, const long v3) {
	return foldop_long(v1, v2, v3);
}

Vec2<long> foldop(
	const Vec2<long> &v1, 
	const Vec2<long> &v2, 
	const Vec2<long> &v3
) {
	Vec2<long> rv;
	rv.x = foldop_long(v1.x, v2.x, v3.x);
	rv.y = foldop_long(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<long> foldop(
	const Vec3<long> &v1, 
	const Vec3<long> &v2, 
	const Vec3<long> &v3
) {
	Vec3<long> rv;
	rv.x = foldop_long(v1.x, v2.x, v3.x);
	rv.y = foldop_long(v1.y, v2.y, v3.y);
	rv.z = foldop_long(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<long> foldop(
	const Vec4<long> &v1, 
	const Vec4<long> &v2, 
	const Vec4<long> &v3
) {
	Vec4<long> rv;
	rv.x = foldop_long(v1.x, v2.x, v3.x);
	rv.y = foldop_long(v1.y, v2.y, v3.y);
	rv.z = foldop_long(v1.z, v2.z, v3.z);
	rv.w = foldop_long(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<long, N> foldop(
	const VecN<long, N> &v1, 
	const VecN<long, N> &v2,
	const VecN<long, N> &v3
) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = foldop_long(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

long smoothstep(const long v1, const long v2, const long v3) {
	return smoothstep_long(v1, v2, v3);
}

Vec2<long> smoothstep(
	const Vec2<long> &v1, 
	const Vec2<long> &v2, 
	const Vec2<long> &v3
) {
	Vec2<long> rv;
	rv.x = smoothstep_long(v1.x, v2.x, v3.x);
	rv.y = smoothstep_long(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<long> smoothstep(
	const Vec3<long> &v1, 
	const Vec3<long> &v2, 
	const Vec3<long> &v3
) {
	Vec3<long> rv;
	rv.x = smoothstep_long(v1.x, v2.x, v3.x);
	rv.y = smoothstep_long(v1.y, v2.y, v3.y);
	rv.z = smoothstep_long(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<long> smoothstep(
	const Vec4<long> &v1, 
	const Vec4<long> &v2, 
	const Vec4<long> &v3
) {
	Vec4<long> rv;
	rv.x = smoothstep_long(v1.x, v2.x, v3.x);
	rv.y = smoothstep_long(v1.y, v2.y, v3.y);
	rv.z = smoothstep_long(v1.z, v2.z, v3.z);
	rv.w = smoothstep_long(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<long, N> smoothstep(
	const VecN<long, N> &v1, 
	const VecN<long, N> &v2,
	const VecN<long, N> &v3
) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = smoothstep_long(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

long switchop(const long v1, const long v2, const long v3) {
	return switchop_long(v1, v2, v3);
}

Vec2<long> switchop(
	const Vec2<long> &v1, 
	const Vec2<long> &v2, 
	const Vec2<long> &v3
) {
	Vec2<long> rv;
	rv.x = switchop_long(v1.x, v2.x, v3.x);
	rv.y = switchop_long(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<long> switchop(
	const Vec3<long> &v1, 
	const Vec3<long> &v2, 
	const Vec3<long> &v3
) {
	Vec3<long> rv;
	rv.x = switchop_long(v1.x, v2.x, v3.x);
	rv.y = switchop_long(v1.y, v2.y, v3.y);
	rv.z = switchop_long(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<long> switchop(
	const Vec4<long> &v1, 
	const Vec4<long> &v2, 
	const Vec4<long> &v3
) {
	Vec4<long> rv;
	rv.x = switchop_long(v1.x, v2.x, v3.x);
	rv.y = switchop_long(v1.y, v2.y, v3.y);
	rv.z = switchop_long(v1.z, v2.z, v3.z);
	rv.w = switchop_long(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<long, N> switchop(
	const VecN<long, N> &v1, 
	const VecN<long, N> &v2,
	const VecN<long, N> &v3
) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = switchop_long(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}

long wrapop(const long v1, const long v2, const long v3) {
	return wrapop_long(v1, v2, v3);
}

Vec2<long> wrapop(
	const Vec2<long> &v1, 
	const Vec2<long> &v2, 
	const Vec2<long> &v3
) {
	Vec2<long> rv;
	rv.x = wrapop_long(v1.x, v2.x, v3.x);
	rv.y = wrapop_long(v1.y, v2.y, v3.y);

	return rv;
}

Vec3<long> wrapop(
	const Vec3<long> &v1, 
	const Vec3<long> &v2, 
	const Vec3<long> &v3
) {
	Vec3<long> rv;
	rv.x = wrapop_long(v1.x, v2.x, v3.x);
	rv.y = wrapop_long(v1.y, v2.y, v3.y);
	rv.z = wrapop_long(v1.z, v2.z, v3.z);

	return rv;
}

Vec4<long> wrapop(
	const Vec4<long> &v1, 
	const Vec4<long> &v2, 
	const Vec4<long> &v3
) {
	Vec4<long> rv;
	rv.x = wrapop_long(v1.x, v2.x, v3.x);
	rv.y = wrapop_long(v1.y, v2.y, v3.y);
	rv.z = wrapop_long(v1.z, v2.z, v3.z);
	rv.w = wrapop_long(v1.w, v2.w, v3.w);

	return rv;
}

template <unsigned N>
VecN<long, N> wrapop(
	const VecN<long, N> &v1, 
	const VecN<long, N> &v2,
	const VecN<long, N> &v3
) {
	VecN<long, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = wrapop_long(v1.v[i], v2.v[i], v3.v[i]);
	}
	return rv;
}



#endif // JIT_CODEGEN_OP_LONG_HPP
