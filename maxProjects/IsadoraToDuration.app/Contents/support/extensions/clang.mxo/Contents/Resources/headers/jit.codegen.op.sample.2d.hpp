#ifndef JIT_CODEGEN_OP_SAMPLE_2D_HPP
#define JIT_CODEGEN_OP_SAMPLE_2D_HPP 1
#include "jit.codegen.op.hpp"
//#include "jit.codegen.op.vecn.hpp"
#include "jit.codegen.vec.hpp"
#include "jit.codegen.vec.fixed.hpp"
#include "jit.codegen.vec.conversion.hpp"
#include "jit.codegen.op.generic.hpp"

/* Sampling Ops */

/*************************************************
	Generic Sample Functions
*/
template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	double fracx = jit_math_fmod(x, 1);
	double fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	V vx1 = mix(
		V((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)),
		V((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)),
		fracx
	);
	
	V vx2 = mix(
		V((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)),
		V((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fmod(x, 1);
	float fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	V vx1 = mix(
		V((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)),
		V((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)),
		fracx
	);
	
	V vx2 = mix(
		V((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)),
		V((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)),
		fracx
	);
	
	return mix(vx1, vx2, fracy);
}

template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	float fracx = FixedToFloat(FixedFrac(x));
	float fracy = FixedToFloat(FixedFrac(y));
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	
	V vx1 = mix(
		V((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)),
		V((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)),
		fracx
	);
	
	V vx2 = mix(
		V((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)),
		V((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)),
		fracx
	);
	
	return mix(vx1, vx2, fracy);
}

/*************************************************
	N-Plane Generic Sample Functions
*/
template <typename T, unsigned N>
VecN<T, N> sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fmod(x, 1);
	float fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	VecN<T, N> vx1 = mix(
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)),
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)),
		fracx
	);
	
	VecN<T, N> vx2 = mix(
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)),
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)),
		fracx
	);
	
	return mix(vx1, vx2, fracy);
}

template <typename T, unsigned N>
VecN<T, N> sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fmod(x, 1);
	float fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	VecN<T, N> vx1 = mix(
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)),
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)),
		fracx
	);
	
	VecN<T, N> vx2 = mix(
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)),
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)),
		fracx
	);
	
	return mix(vx1, vx2, fracy);
}


template <typename T, unsigned N>
VecN<T, N> sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	float fracx = FixedToFloat(FixedFrac(x));
	float fracy = FixedToFloat(FixedFrac(y));
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	VecN<T, N> vx1 = mix(
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)),
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)),
		fracx
	);
	
	VecN<T, N> vx2 = mix(
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)),
		VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)),
		fracx
	);
	
	return mix(vx1, vx2, fracy);
}

/*************************************************
	Single-Plane Fixed-Input Sample Functions
*/
template <>
t_jit_long sample< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	float fracx = FixedToFloat(FixedFrac(x));
	float fracy = FixedToFloat(FixedFrac(y));
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	float v11 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1));
	float v21 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1));
	float v12 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2));
	float v22 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2));
	
	float v1 = v11+(v21-v11)*fracx;
	float v2 = v12+(v22-v12)*fracx;
	return t_jit_long(v1+(v2-v1)*fracy);
}

template <>
float sample< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	float fracx = FixedToFloat(FixedFrac(x));
	float fracy = FixedToFloat(FixedFrac(y));
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	float v11 = *(float *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1);
	float v21 = *(float *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1);
	float v12 = *(float *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2);
	float v22 = *(float *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2);
	
	float v1 = v11+(v21-v11)*fracx;
	float v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

template <>
double sample< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	float fracx = FixedToFloat(FixedFrac(x));
	float fracy = FixedToFloat(FixedFrac(y));
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	double v11 = *(double *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1);
	double v21 = *(double *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1);
	double v12 = *(double *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2);
	double v22 = *(double *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2);
	
	double v1 = v11+(v21-v11)*fracx;
	double v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}


/*************************************************
	Single-Plane Float-Input Sample Functions
*/
template <>
t_jit_long sample< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fmod(x, 1);
	float fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	float v11 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1));
	float v21 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1));
	float v12 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2));
	float v22 = float(*(t_jit_long *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2));
	
	float v1 = v11+(v21-v11)*fracx;
	float v2 = v12+(v22-v12)*fracx;
	return t_jit_long(v1+(v2-v1)*fracy);
}

template <>
float sample< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fmod(x, 1);
	float fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	float v11 = *(float *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1);
	float v21 = *(float *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1);
	float v12 = *(float *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2);
	float v22 = *(float *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2);
	
	float v1 = v11+(v21-v11)*fracx;
	float v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

template <>
double sample< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fmod(x, 1);
	float fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	double v11 = *(double *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1);
	double v21 = *(double *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1);
	double v12 = *(double *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2);
	double v22 = *(double *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2);
	
	double v1 = v11+(v21-v11)*fracx;
	double v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}


/*************************************************
	Single-Plane Double-Input Sample Functions
*/
template <>
t_jit_long sample< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	double fracx = jit_math_fmod(x, 1);
	double fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	double v11 = double(*(t_jit_long *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1));
	double v21 = double(*(t_jit_long *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1));
	double v12 = double(*(t_jit_long *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2));
	double v22 = double(*(t_jit_long *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2));
	
	double v1 = v11+(v21-v11)*fracx;
	double v2 = v12+(v22-v12)*fracx;
	return t_jit_long(v1+(v2-v1)*fracy);
}

template <>
float sample< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	double fracx = jit_math_fmod(x, 1);
	double fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	float v11 = *(float *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1);
	float v21 = *(float *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1);
	float v12 = *(float *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2);
	float v22 = *(float *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2);
	
	float v1 = v11+(v21-v11)*fracx;
	float v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

template <>
double sample< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	double fracx = jit_math_fmod(x, 1);
	double fracy = jit_math_fmod(y, 1);
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	double v11 = *(double *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1);
	double v21 = *(double *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1);
	double v12 = *(double *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2);
	double v22 = *(double *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2);
	
	double v1 = v11+(v21-v11)*fracx;
	double v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}


/*************************************************
	Fixed-Output Sample Functions, double input
*/
template <>
Fixed sample< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = DoubleToFixed(jit_math_fmod(x, 1));
	Fixed fracy = DoubleToFixed(jit_math_fmod(y, 1));
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Fixed v11 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
	);
	Fixed v21 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
	);
	Fixed v12 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
	);
	Fixed v22 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
	);
	
	Fixed v1 = v11+FixMul((v21-v11), fracx);
	Fixed v2 = v12+FixMul((v22-v12), fracx);
	return v1+FixMul((v2-v1), fracy);
}

template <>
Vec2<Fixed> sample< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = DoubleToFixed(jit_math_fmod(x, 1));
	Fixed fracy = DoubleToFixed(jit_math_fmod(y, 1));
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec2<Fixed> vx1 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1))),
		fracx
	);
	
	Vec2<Fixed> vx2 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2))),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <>
Vec3<Fixed> sample< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = DoubleToFixed(jit_math_fmod(x, 1));
	Fixed fracy = DoubleToFixed(jit_math_fmod(y, 1));
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec3<Fixed> vx1 = mix(
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1))),
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1))),
		fracx
	);
	
	Vec3<Fixed> vx2 = mix(
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2))),
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2))),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <>
Vec4<Fixed> sample< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = DoubleToFixed(jit_math_fmod(x, 1));
	Fixed fracy = DoubleToFixed(jit_math_fmod(y, 1));

	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec4<Fixed> vx1 = mix(
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1))),
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1))),
		fracx
	);
	
	Vec4<Fixed> vx2 = mix(
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2))),
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2))),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <unsigned N>
VecN<Fixed, N> sampleFixed(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	double x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	double y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = DoubleToFixed(jit_math_fmod(x, 1));
	Fixed fracy = DoubleToFixed(jit_math_fmod(y, 1));

	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	VecN<Fixed, N> v11 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
		))
	);
	VecN<Fixed, N> v21 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
		))
	);
	VecN<Fixed, N> v12 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
		))
	);
	VecN<Fixed, N> v22 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
		))
	);
	
	VecN<Fixed, N> v1 = v11+(v21-v11)*fracx;
	VecN<Fixed, N> v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}


/*************************************************
	Fixed-Output Sample Functions, float input
*/
template <>
Fixed sample< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = FloatToFixed(jit_math_fmod(x, 1));
	Fixed fracy = FloatToFixed(jit_math_fmod(y, 1));
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Fixed v11 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
	);
	Fixed v21 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
	);
	Fixed v12 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
	);
	Fixed v22 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
	);
	
	Fixed v1 = v11+FixMul((v21-v11), fracx);
	Fixed v2 = v12+FixMul((v22-v12), fracx);
	return v1+FixMul((v2-v1), fracy);
}

template <>
Vec2<Fixed> sample< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = FloatToFixed(jit_math_fmod(x, 1));
	Fixed fracy = FloatToFixed(jit_math_fmod(y, 1));
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec2<Fixed> vx1 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1))),
		fracx
	);
	
	Vec2<Fixed> vx2 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2))),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <>
Vec3<Fixed> sample< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = FloatToFixed(jit_math_fmod(x, 1));
	Fixed fracy = FloatToFixed(jit_math_fmod(y, 1));
	
	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec3<Fixed> vx1 = mix(
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1))),
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1))),
		fracx
	);
	
	Vec3<Fixed> vx2 = mix(
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2))),
		fixed_from_char(Vec3<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2))),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <>
Vec4<Fixed> sample< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = FloatToFixed(jit_math_fmod(x, 1));
	Fixed fracy = FloatToFixed(jit_math_fmod(y, 1));

	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec4<Fixed> vx1 = mix(
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1))),
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1))),
		fracx
	);
	
	Vec4<Fixed> vx2 = mix(
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2))),
		fixed_from_char(Vec4<t_jit_char>((t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2))),
		fracx
	);
	
	
	return mix(vx1, vx2, fracy);
}

template <unsigned N>
VecN<Fixed, N> sampleFixed(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	Fixed fracx = FloatToFixed(jit_math_fmod(x, 1));
	Fixed fracy = FloatToFixed(jit_math_fmod(y, 1));

	int i1 = (int)x;
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j1 = (int)y;
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	VecN<Fixed, N> v11 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
		))
	);
	VecN<Fixed, N> v21 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
		))
	);
	VecN<Fixed, N> v12 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
		))
	);
	VecN<Fixed, N> v22 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
		))
	);
	
	VecN<Fixed, N> v1 = v11+(v21-v11)*fracx;
	VecN<Fixed, N> v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

/*************************************************
	Fixed-Output Sample Functions, Fixed input
*/
template <>
Fixed sample< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	Fixed fracx = FixedFrac(x);
	Fixed fracy = FixedFrac(y);
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Fixed v11 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
	);
	Fixed v21 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
	);
	Fixed v12 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
	);
	Fixed v22 = fixed_from_char1(
		*(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
	);
	
	Fixed v1 = v11+FixMul((v21-v11), fracx);
	Fixed v2 = v12+FixMul((v22-v12), fracx);
	return v1+FixMul((v2-v1), fracy);
}

template <>
Vec2<Fixed> sample< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	Fixed fracx = FixedFrac(x);
	Fixed fracy = FixedFrac(y);
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec2<Fixed> v11 = Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
		))
	);
	Vec2<Fixed> v21 = Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
		))
	);
	Vec2<Fixed> v12 = Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
		))
	);
	Vec2<Fixed> v22 = Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
		))
	);
	
	Vec2<Fixed> v1 = v11+(v21-v11)*fracx;
	Vec2<Fixed> v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

template <>
Vec3<Fixed> sample< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	Fixed fracx = FixedFrac(x);
	Fixed fracy = FixedFrac(y);
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec3<Fixed> v11 = Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
		))
	);
	Vec3<Fixed> v21 = Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
		))
	);
	Vec3<Fixed> v12 = Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
		))
	);
	Vec3<Fixed> v22 = Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
		))
	);
	
	Vec3<Fixed> v1 = v11+(v21-v11)*fracx;
	Vec3<Fixed> v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

template <>
Vec4<Fixed> sample< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	Fixed fracx = FixedFrac(x);
	Fixed fracy = FixedFrac(y);
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	Vec4<Fixed> v11 = Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
		))
	);
	Vec4<Fixed> v21 = Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
		))
	);
	Vec4<Fixed> v12 = Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
		))
	);
	Vec4<Fixed> v22 = Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
		))
	);
	
	Vec4<Fixed> v1 = v11+(v21-v11)*fracx;
	Vec4<Fixed> v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

template <unsigned N>
VecN<Fixed, N> sampleFixed(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	Fixed x = FixedMod1(tc.x)*dim1;
	Fixed y = FixedMod1(tc.y)*dim2;
	int i1 = FixedToInt(x);
	int j1 = FixedToInt(y);
	Fixed fracx = FixedFrac(x);
	Fixed fracy = FixedFrac(y);
	
	int i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	int j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	VecN<Fixed, N> v11 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j1)
		))
	);
	VecN<Fixed, N> v21 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j1)
		))
	);
	VecN<Fixed, N> v12 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i1 + minfo->dimstride[1]*j2)
		))
	);
	VecN<Fixed, N> v22 = VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i2 + minfo->dimstride[1]*j2)
		))
	);
	
	VecN<Fixed, N> v1 = v11+(v21-v11)*fracx;
	VecN<Fixed, N> v2 = v12+(v22-v12)*fracx;
	return v1+(v2-v1)*fracy;
}

/*************************************************
	Generic Nearest Functions
*/
template <typename T, typename V>
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

template <typename T, typename V>
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

template <typename T, typename V>
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

/*************************************************
	N-Plane Generic Nearest Functions
*/

template <typename T, unsigned N>
VecN<T, N> nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

template <typename T, unsigned N>
VecN<T, N> nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

template <typename T, unsigned N>
VecN<T, N> nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

/*************************************************
	Single-Plane Fixed-Input Nearest Functions
*/
template <>
t_jit_long nearest< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return *(t_jit_long *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

template <>
float nearest< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return *(float *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

template <>
double nearest< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return *(double *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}


/*************************************************
	Single-Plane Float-Input Nearest Functions
*/
template <>
t_jit_long nearest< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return *(t_jit_long *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

template <>
float nearest< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return *(float *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

template <>
double nearest< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return *(double *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

/*************************************************
	Single-Plane Double-Input Nearest Functions
*/
template <>
t_jit_long nearest< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return *(t_jit_long *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

template <>
float nearest< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return *(float *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

template <>
double nearest< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return *(double *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j);
}

/*************************************************
	Fixed-Output Nearest Functions, double input
*/
template <>
Fixed nearest< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));

	return Fixed(
		UCharToFixed(*(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec2<Fixed> nearest< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec3<Fixed> nearest< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec4<Fixed> nearest< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <unsigned N>
VecN<Fixed, N> nearest< Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<double> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

/*************************************************
	Fixed-Output Nearest Functions, float input
*/
template <>
Fixed nearest< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));

	return Fixed(
		UCharToFixed(*(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec2<Fixed> nearest< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec3<Fixed> nearest< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec4<Fixed> nearest< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <unsigned N>
VecN<Fixed, N> nearest< Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	
	return VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}


/*************************************************
	Fixed-Output Nearest Functions, Fixed input
*/
template <>
Fixed nearest< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return Fixed(
		UCharToFixed(*(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec2<Fixed> nearest< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec3<Fixed> nearest< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <>
Vec4<Fixed> nearest< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}

template <unsigned N>
VecN<Fixed, N> nearest< Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec2<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	
	int i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	int j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
	
	return VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j)
		))
	);
}


#endif // JIT_CODEGEN_OP_SAMPLE_2D_HPP
