#ifndef JIT_CODEGEN_OP_SAMPLE_3D_HPP
#define JIT_CODEGEN_OP_SAMPLE_3D_HPP 1
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

#define INDEX3D(buffer, minfo, i, j, k)	(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)

inline void sample_coords3d(
	int &i1, int &j1, int &k1, 
	int &i2, int &j2, int &k2, 
	double &fracx, double &fracy, double &fracz,
	t_jit_matrix_info *minfo, const Vec3<double> &tc
) {
	double x=0, y=0, z=0;
	switch(minfo->dimcount) {
		case 3:
			z = jit_math_wrap(tc.z, 0, 1) * (minfo->dim[2]-1);
		case 2:
			y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
		case 1:
			x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	}
	
	fracx = jit_math_fmod(x, 1);
	fracy = jit_math_fmod(y, 1);
	fracz = jit_math_fmod(z, 1);
	
	i1 = (int)x;
	i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	j1 = (int)y;
	j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	k1 = (int)z;
	k2 = k1+1;
	k2 = k2 == minfo->dim[2] ? 0 : k2;
}

inline void sample_coords3d(
	int &i1, int &j1, int &k1, 
	int &i2, int &j2, int &k2, 
	float &fracx, float &fracy, float &fracz,
	t_jit_matrix_info *minfo, const Vec3<float> &tc
) {
	float x=0, y=0, z=0;
	switch(minfo->dimcount) {
		case 3:
			z = jit_math_wrap(tc.z, 0, 1) * (minfo->dim[2]-1);
		case 2:
			y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
		case 1:
			x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	}
	
	fracx = jit_math_fmod(x, 1);
	fracy = jit_math_fmod(y, 1);
	fracz = jit_math_fmod(z, 1);
	
	i1 = (int)x;
	i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	j1 = (int)y;
	j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	k1 = (int)z;
	k2 = k1+1;
	k2 = k2 == minfo->dim[2] ? 0 : k2;
}

inline void sample_coords3d(
	int &i1, int &j1, int &k1, 
	int &i2, int &j2, int &k2, 
	float &fracx, float &fracy, float &fracz,
	t_jit_matrix_info *minfo, const Vec3<Fixed> &tc
) {
	Fixed x=0, y=0, z=0;
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	int dim3 = minfo->dim[2]-1;
	
	switch(minfo->dimcount) {
		case 3:
			z = FixedMod1(tc.z)*dim3;
		case 2:
			y = FixedMod1(tc.y)*dim2;
		case 1:
			x = FixedMod1(tc.x)*dim1;
	}
	
	fracx = FixedToFloat(FixedFrac(x));
	fracy = FixedToFloat(FixedFrac(y));
	fracz = FixedToFloat(FixedFrac(z));
	
	i1 = FixedToInt(x);
	i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	j1 = FixedToInt(y);
	j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	k1 = FixedToInt(z);
	k2 = k1+1;
	k2 = k2 == minfo->dim[2] ? 0 : k2;
}

inline void sample_coords3d(
	int &i1, int &j1, int &k1, 
	int &i2, int &j2, int &k2, 
	Fixed &fracx, Fixed &fracy, Fixed &fracz,
	t_jit_matrix_info *minfo, const Vec3<Fixed> &tc
) {
	Fixed x=0, y=0, z=0;
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	int dim3 = minfo->dim[2]-1;
	
	switch(minfo->dimcount) {
		case 3:
			z = FixedMod1(tc.z)*dim3;
		case 2:
			y = FixedMod1(tc.y)*dim2;
		case 1:
			x = FixedMod1(tc.x)*dim1;
	}
	
	fracx = FixedFrac(x);
	fracy = FixedFrac(y);
	fracz = FixedFrac(z);
	
	i1 = FixedToInt(x);
	i2 = i1+1;
	i2 = i2 == minfo->dim[0] ? 0 : i2;
	
	j1 = FixedToInt(y);
	j2 = j1+1;
	j2 = j2 == minfo->dim[1] ? 0 : j2;
	
	k1 = FixedToInt(z);
	k2 = k1+1;
	k2 = k2 == minfo->dim[2] ? 0 : k2;
}

template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	V vx11 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j1, k1)),
		V((T *)INDEX3D(buffer, minfo, i2, j1, k1)),
		fracx
	);
	
	V vx21 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j2, k1)),
		V((T *)INDEX3D(buffer, minfo, i2, j2, k1)),
		fracx
	);
	
	V vx12 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j1, k2)),
		V((T *)INDEX3D(buffer, minfo, i2, j1, k2)),
		fracx
	);
	
	V vx22 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j2, k2)),
		V((T *)INDEX3D(buffer, minfo, i2, j2, k2)),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	V vx11 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j1, k1)),
		V((T *)INDEX3D(buffer, minfo, i2, j1, k1)),
		fracx
	);
	
	V vx21 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j2, k1)),
		V((T *)INDEX3D(buffer, minfo, i2, j2, k1)),
		fracx
	);
	
	V vx12 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j1, k2)),
		V((T *)INDEX3D(buffer, minfo, i2, j1, k2)),
		fracx
	);
	
	V vx22 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j2, k2)),
		V((T *)INDEX3D(buffer, minfo, i2, j2, k2)),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	V vx11 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j1, k1)),
		V((T *)INDEX3D(buffer, minfo, i2, j1, k1)),
		fracx
	);
	
	V vx21 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j2, k1)),
		V((T *)INDEX3D(buffer, minfo, i2, j2, k1)),
		fracx
	);
	
	V vx12 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j1, k2)),
		V((T *)INDEX3D(buffer, minfo, i2, j1, k2)),
		fracx
	);
	
	V vx22 = mix(
		V((T *)INDEX3D(buffer, minfo, i1, j2, k2)),
		V((T *)INDEX3D(buffer, minfo, i2, j2, k2)),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

/*************************************************
	N-Plane Generic Sample Functions
*/
template <typename T, unsigned N>
VecN<T, N> sample(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	VecN<T, N> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	VecN<T, N> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	VecN<T, N> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	VecN<T, N> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <typename T, unsigned N>
VecN<T, N> sample(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	VecN<T, N> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	VecN<T, N> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	VecN<T, N> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	VecN<T, N> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}


template <typename T, unsigned N>
VecN<T, N> sample(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	VecN<T, N> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	VecN<T, N> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	VecN<T, N> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	VecN<T, N> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}
/*************************************************
	Single-Plane Fixed-Input Nearest Functions
*/
template <>
t_jit_long sample< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	float v111 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j1, k1));
	float v211 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j1, k1));
	float v121 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j2, k1));
	float v221 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j2, k1));
	
	float v112 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j1, k2));
	float v212 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j1, k2));
	float v122 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j2, k2));
	float v222 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j2, k2));
	
	float vx11 = v111+(v211-v111)*fracx;
	float vx21 = v121+(v221-v121)*fracx;
	
	float vx12 = v112+(v212-v112)*fracx;
	float vx22 = v122+(v222-v122)*fracx;
	
	float vy1 = vx11+(vx21-vx11)*fracy;
	float vy2 = vx12+(vx22-vx12)*fracy;

	return t_jit_long(vy1+(vy2-vy1)*fracz);
}

template <>
float sample< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	float v111 = *(float *)INDEX3D(buffer, minfo, i1, j1, k1);
	float v211 = *(float *)INDEX3D(buffer, minfo, i2, j1, k1);
	float v121 = *(float *)INDEX3D(buffer, minfo, i1, j2, k1);
	float v221 = *(float *)INDEX3D(buffer, minfo, i2, j2, k1);
	
	float v112 = *(float *)INDEX3D(buffer, minfo, i1, j1, k2);
	float v212 = *(float *)INDEX3D(buffer, minfo, i2, j1, k2);
	float v122 = *(float *)INDEX3D(buffer, minfo, i1, j2, k2);
	float v222 = *(float *)INDEX3D(buffer, minfo, i2, j2, k2);
	
	float vx11 = v111+(v211-v111)*fracx;
	float vx21 = v121+(v221-v121)*fracx;
	
	float vx12 = v112+(v212-v112)*fracx;
	float vx22 = v122+(v222-v122)*fracx;
	
	float vy1 = vx11+(vx21-vx11)*fracy;
	float vy2 = vx12+(vx22-vx12)*fracy;

	return vy1+(vy2-vy1)*fracz;
}

template <>
double sample< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	double v111 = *(double *)INDEX3D(buffer, minfo, i1, j1, k1);
	double v211 = *(double *)INDEX3D(buffer, minfo, i2, j1, k1);
	double v121 = *(double *)INDEX3D(buffer, minfo, i1, j2, k1);
	double v221 = *(double *)INDEX3D(buffer, minfo, i2, j2, k1);
	
	double v112 = *(double *)INDEX3D(buffer, minfo, i1, j1, k2);
	double v212 = *(double *)INDEX3D(buffer, minfo, i2, j1, k2);
	double v122 = *(double *)INDEX3D(buffer, minfo, i1, j2, k2);
	double v222 = *(double *)INDEX3D(buffer, minfo, i2, j2, k2);
	
	double vx11 = v111+(v211-v111)*fracx;
	double vx21 = v121+(v221-v121)*fracx;
	
	double vx12 = v112+(v212-v112)*fracx;
	double vx22 = v122+(v222-v122)*fracx;
	
	double vy1 = vx11+(vx21-vx11)*fracy;
	double vy2 = vx12+(vx22-vx12)*fracy;

	return vy1+(vy2-vy1)*fracz;
}

/*************************************************
	Single-Plane Float-Input Sample Functions
*/

template <>
t_jit_long sample< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	float v111 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j1, k1));
	float v211 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j1, k1));
	float v121 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j2, k1));
	float v221 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j2, k1));
	
	float v112 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j1, k2));
	float v212 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j1, k2));
	float v122 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j2, k2));
	float v222 = float(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j2, k2));
	
	float vx11 = v111+(v211-v111)*fracx;
	float vx21 = v121+(v221-v121)*fracx;
	
	float vx12 = v112+(v212-v112)*fracx;
	float vx22 = v122+(v222-v122)*fracx;
	
	float vy1 = vx11+(vx21-vx11)*fracy;
	float vy2 = vx12+(vx22-vx12)*fracy;

	return t_jit_long(vy1+(vy2-vy1)*fracz);
}

template <>
float sample< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	float v111 = *(float *)INDEX3D(buffer, minfo, i1, j1, k1);
	float v211 = *(float *)INDEX3D(buffer, minfo, i2, j1, k1);
	float v121 = *(float *)INDEX3D(buffer, minfo, i1, j2, k1);
	float v221 = *(float *)INDEX3D(buffer, minfo, i2, j2, k1);
	
	float v112 = *(float *)INDEX3D(buffer, minfo, i1, j1, k2);
	float v212 = *(float *)INDEX3D(buffer, minfo, i2, j1, k2);
	float v122 = *(float *)INDEX3D(buffer, minfo, i1, j2, k2);
	float v222 = *(float *)INDEX3D(buffer, minfo, i2, j2, k2);
	
	float vx11 = v111+(v211-v111)*fracx;
	float vx21 = v121+(v221-v121)*fracx;
	
	float vx12 = v112+(v212-v112)*fracx;
	float vx22 = v122+(v222-v122)*fracx;
	
	float vy1 = vx11+(vx21-vx11)*fracy;
	float vy2 = vx12+(vx22-vx12)*fracy;

	return vy1+(vy2-vy1)*fracz;
}

template <>
double sample< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	double v111 = *(double *)INDEX3D(buffer, minfo, i1, j1, k1);
	double v211 = *(double *)INDEX3D(buffer, minfo, i2, j1, k1);
	double v121 = *(double *)INDEX3D(buffer, minfo, i1, j2, k1);
	double v221 = *(double *)INDEX3D(buffer, minfo, i2, j2, k1);
	
	double v112 = *(double *)INDEX3D(buffer, minfo, i1, j1, k2);
	double v212 = *(double *)INDEX3D(buffer, minfo, i2, j1, k2);
	double v122 = *(double *)INDEX3D(buffer, minfo, i1, j2, k2);
	double v222 = *(double *)INDEX3D(buffer, minfo, i2, j2, k2);
	
	double vx11 = v111+(v211-v111)*fracx;
	double vx21 = v121+(v221-v121)*fracx;
	
	double vx12 = v112+(v212-v112)*fracx;
	double vx22 = v122+(v222-v122)*fracx;
	
	double vy1 = vx11+(vx21-vx11)*fracy;
	double vy2 = vx12+(vx22-vx12)*fracy;

	return vy1+(vy2-vy1)*fracz;
}

/*************************************************
	Single-Plane Double-Input Sample Functions
*/

template <>
t_jit_long sample< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	double v111 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j1, k1));
	double v211 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j1, k1));
	double v121 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j2, k1));
	double v221 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j2, k1));
	
	double v112 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j1, k2));
	double v212 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j1, k2));
	double v122 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i1, j2, k2));
	double v222 = double(*(t_jit_long *)INDEX3D(buffer, minfo, i2, j2, k2));
	
	double vx11 = v111+(v211-v111)*fracx;
	double vx21 = v121+(v221-v121)*fracx;
	
	double vx12 = v112+(v212-v112)*fracx;
	double vx22 = v122+(v222-v122)*fracx;
	
	double vy1 = vx11+(vx21-vx11)*fracy;
	double vy2 = vx12+(vx22-vx12)*fracy;

	return t_jit_long(vy1+(vy2-vy1)*fracz);
}

template <>
float sample< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	float v111 = *(float *)INDEX3D(buffer, minfo, i1, j1, k1);
	float v211 = *(float *)INDEX3D(buffer, minfo, i2, j1, k1);
	float v121 = *(float *)INDEX3D(buffer, minfo, i1, j2, k1);
	float v221 = *(float *)INDEX3D(buffer, minfo, i2, j2, k1);
	
	float v112 = *(float *)INDEX3D(buffer, minfo, i1, j1, k2);
	float v212 = *(float *)INDEX3D(buffer, minfo, i2, j1, k2);
	float v122 = *(float *)INDEX3D(buffer, minfo, i1, j2, k2);
	float v222 = *(float *)INDEX3D(buffer, minfo, i2, j2, k2);
	
	float vx11 = v111+(v211-v111)*fracx;
	float vx21 = v121+(v221-v121)*fracx;
	
	float vx12 = v112+(v212-v112)*fracx;
	float vx22 = v122+(v222-v122)*fracx;
	
	float vy1 = vx11+(vx21-vx11)*fracy;
	float vy2 = vx12+(vx22-vx12)*fracy;

	return vy1+(vy2-vy1)*fracz;
}

template <>
double sample< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	double v111 = *(double *)INDEX3D(buffer, minfo, i1, j1, k1);
	double v211 = *(double *)INDEX3D(buffer, minfo, i2, j1, k1);
	double v121 = *(double *)INDEX3D(buffer, minfo, i1, j2, k1);
	double v221 = *(double *)INDEX3D(buffer, minfo, i2, j2, k1);
	
	double v112 = *(double *)INDEX3D(buffer, minfo, i1, j1, k2);
	double v212 = *(double *)INDEX3D(buffer, minfo, i2, j1, k2);
	double v122 = *(double *)INDEX3D(buffer, minfo, i1, j2, k2);
	double v222 = *(double *)INDEX3D(buffer, minfo, i2, j2, k2);
	
	double vx11 = v111+(v211-v111)*fracx;
	double vx21 = v121+(v221-v121)*fracx;
	
	double vx12 = v112+(v212-v112)*fracx;
	double vx22 = v122+(v222-v122)*fracx;
	
	double vy1 = vx11+(vx21-vx11)*fracy;
	double vy2 = vx12+(vx22-vx12)*fracy;

	return vy1+(vy2-vy1)*fracz;
}

/*************************************************
	Fixed-Output Sample Functions, double input
*/

template <>
Fixed sample< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double dfracx=0, dfracy=0, dfracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, dfracx, dfracy, dfracz, minfo, tc);
	
	Fixed fracx = DoubleToFixed(dfracx);
	Fixed fracy = DoubleToFixed(dfracy);
	Fixed fracz = DoubleToFixed(dfracz);
	
	Fixed v111 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1));
	Fixed v211 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1));
	Fixed v121 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1));
	Fixed v221 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1));
	
	Fixed v112 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2));
	Fixed v212 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2));
	Fixed v122 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2));
	Fixed v222 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2));
	
	Fixed vx11 = v111+FixMul((v211-v111), fracx);
	Fixed vx21 = v121+FixMul((v221-v121), fracx);
	
	Fixed vx12 = v112+FixMul((v212-v112), fracx);
	Fixed vx22 = v122+FixMul((v222-v122), fracx);
	
	Fixed vy1 = vx11+FixMul((vx21-vx11), fracy);
	Fixed vy2 = vx12+FixMul((vx22-vx12), fracy);

	return vy1+FixMul((vy2-vy1), fracz);
}


template <>
Vec2<Fixed> sample< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double dfracx=0, dfracy=0, dfracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, dfracx, dfracy, dfracz, minfo, tc);
	
	Fixed fracx = DoubleToFixed(dfracx);
	Fixed fracy = DoubleToFixed(dfracy);
	Fixed fracz = DoubleToFixed(dfracz);
	
	Vec2<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec2<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec2<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec2<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <>
Vec3<Fixed> sample< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double dfracx=0, dfracy=0, dfracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, dfracx, dfracy, dfracz, minfo, tc);
	
	Fixed fracx = DoubleToFixed(dfracx);
	Fixed fracy = DoubleToFixed(dfracy);
	Fixed fracz = DoubleToFixed(dfracz);
	
	Vec3<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec3<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec3<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec3<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}


template <>
Vec4<Fixed> sample< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double dfracx=0, dfracy=0, dfracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, dfracx, dfracy, dfracz, minfo, tc);
	
	Fixed fracx = DoubleToFixed(dfracx);
	Fixed fracy = DoubleToFixed(dfracy);
	Fixed fracz = DoubleToFixed(dfracz);
	
	Vec4<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec4<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec4<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec4<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <unsigned N>
VecN<Fixed, N> sampleFixed(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	double dfracx=0, dfracy=0, dfracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, dfracx, dfracy, dfracz, minfo, tc);
	
	Fixed fracx = DoubleToFixed(dfracx);
	Fixed fracy = DoubleToFixed(dfracy);
	Fixed fracz = DoubleToFixed(dfracz);
	
	VecN<Fixed, N> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	VecN<Fixed, N> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	VecN<Fixed, N> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	VecN<Fixed, N> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

/*************************************************
	Fixed-Output Sample Functions, float input
*/
template <>
Fixed sample< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float ffracx=0, ffracy=0, ffracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, ffracx, ffracy, ffracz, minfo, tc);
	
	Fixed fracx = FloatToFixed(ffracx);
	Fixed fracy = FloatToFixed(ffracy);
	Fixed fracz = FloatToFixed(ffracz);
	
	Fixed v111 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1));
	Fixed v211 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1));
	Fixed v121 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1));
	Fixed v221 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1));
	
	Fixed v112 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2));
	Fixed v212 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2));
	Fixed v122 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2));
	Fixed v222 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2));
	
	Fixed vx11 = v111+FixMul((v211-v111), fracx);
	Fixed vx21 = v121+FixMul((v221-v121), fracx);
	
	Fixed vx12 = v112+FixMul((v212-v112), fracx);
	Fixed vx22 = v122+FixMul((v222-v122), fracx);
	
	Fixed vy1 = vx11+FixMul((vx21-vx11), fracy);
	Fixed vy2 = vx12+FixMul((vx22-vx12), fracy);

	return vy1+FixMul((vy2-vy1), fracz);
}

template <>
Vec2<Fixed> sample< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float ffracx=0, ffracy=0, ffracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, ffracx, ffracy, ffracz, minfo, tc);
	
	Fixed fracx = FloatToFixed(ffracx);
	Fixed fracy = FloatToFixed(ffracy);
	Fixed fracz = FloatToFixed(ffracz);
	
	Vec2<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec2<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec2<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec2<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <>
Vec3<Fixed> sample< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float ffracx=0, ffracy=0, ffracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, ffracx, ffracy, ffracz, minfo, tc);
	
	Fixed fracx = FloatToFixed(ffracx);
	Fixed fracy = FloatToFixed(ffracy);
	Fixed fracz = FloatToFixed(ffracz);
	
	Vec3<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec3<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec3<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec3<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <>
Vec4<Fixed> sample< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float ffracx=0, ffracy=0, ffracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, ffracx, ffracy, ffracz, minfo, tc);
	
	Fixed fracx = FloatToFixed(ffracx);
	Fixed fracy = FloatToFixed(ffracy);
	Fixed fracz = FloatToFixed(ffracz);
	
	Vec4<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec4<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec4<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec4<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <unsigned N>
VecN<Fixed, N> sampleFixed(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	float ffracx=0, ffracy=0, ffracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, ffracx, ffracy, ffracz, minfo, tc);
	
	Fixed fracx = FloatToFixed(ffracx);
	Fixed fracy = FloatToFixed(ffracy);
	Fixed fracz = FloatToFixed(ffracz);
	
	VecN<Fixed, N> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	VecN<Fixed, N> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	VecN<Fixed, N> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	VecN<Fixed, N> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}
/*************************************************
	Fixed-Output Sample Functions, Fixed input
*/
template <>
Fixed sample< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	Fixed fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	Fixed v111 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1));
	Fixed v211 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1));
	Fixed v121 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1));
	Fixed v221 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1));
	
	Fixed v112 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2));
	Fixed v212 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2));
	Fixed v122 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2));
	Fixed v222 = fixed_from_char1(*(t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2));
	
	Fixed vx11 = v111+FixMul((v211-v111), fracx);
	Fixed vx21 = v121+FixMul((v221-v121), fracx);
	
	Fixed vx12 = v112+FixMul((v212-v112), fracx);
	Fixed vx22 = v122+FixMul((v222-v122), fracx);
	
	Fixed vy1 = vx11+FixMul((vx21-vx11), fracy);
	Fixed vy2 = vx12+FixMul((vx22-vx12), fracy);

	return vy1+FixMul((vy2-vy1), fracz);
}

template <>
Vec2<Fixed> sample< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	Fixed fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	Vec2<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec2<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec2<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec2<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <>
Vec3<Fixed> sample< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	Fixed fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	Vec3<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec3<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec3<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec3<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <>
Vec4<Fixed> sample< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	Fixed fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	Vec4<Fixed> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	Vec4<Fixed> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	Vec4<Fixed> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	Vec4<Fixed> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}

template <unsigned N>
VecN<Fixed, N> sampleFixed(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i1=0, i2=0, j1=0, j2=0, k1=0, k2=0;
	Fixed fracx=0, fracy=0, fracz=0;
	
	sample_coords3d(i1, j1, k1, i2, j2, k2, fracx, fracy, fracz, minfo, tc);
	
	VecN<Fixed, N> vx11 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k1))),
		fracx
	);
	
	VecN<Fixed, N> vx21 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k1))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k1))),
		fracx
	);
	
	VecN<Fixed, N> vx12 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j1, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j1, k2))),
		fracx
	);
	
	VecN<Fixed, N> vx22 = mix(
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i1, j2, k2))),
		fixed_from_char(Vec2<t_jit_char>((t_jit_char *)INDEX3D(buffer, minfo, i2, j2, k2))),
		fracx
	);
	
	return mix(
		mix(vx11, vx21, fracy),
		mix(vx12, vx22, fracy),
		fracz
	);
}
/*************************************************
	Generic Nearest Functions
*/

inline void nearest_coords3d(int &i, int &j, int &k, t_jit_matrix_info *minfo, const Vec3<double> &tc) {
	switch(minfo->dimcount) {
		case 3:
			k = (int)(0.5+jit_math_wrap(tc.z, 0, 1) * (minfo->dim[2]-1));
		case 2:
			j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
		case 1:
			i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	}
}

inline void nearest_coords3d(int &i, int &j, int &k, t_jit_matrix_info *minfo, const Vec3<float> &tc) {
	switch(minfo->dimcount) {
		case 3:
			k = (int)(0.5+jit_math_wrap(tc.z, 0, 1) * (minfo->dim[2]-1));
		case 2:
			j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
		case 1:
			i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	}
}

inline void nearest_coords3d(int &i, int &j, int &k, t_jit_matrix_info *minfo, const Vec3<Fixed> &tc) {
	int dim1 = minfo->dim[0]-1;
	int dim2 = minfo->dim[1]-1;
	int dim3 = minfo->dim[2]-1;

	switch(minfo->dimcount) {
		case 3:
			k = FixedToInt(FixedRound(FixedMod1(tc.z)*dim3));
		case 2:
			j = FixedToInt(FixedRound(FixedMod1(tc.y)*dim2));
		case 1:
			i = FixedToInt(FixedRound(FixedMod1(tc.x)*dim1));
	}
}

template <typename T, typename V>
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k));
}

template <typename T, typename V>
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k));
}

template <typename T, typename V>
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k));
}

/*************************************************
	N-Plane Generic Nearest Functions
*/

template <typename T, unsigned N>
VecN<T, N> nearest(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

template <typename T, unsigned N>
VecN<T, N> nearest(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}

template <typename T, unsigned N>
VecN<T, N> nearest(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return VecN<T, N>((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k));
}

/*************************************************
	Single-Plane Fixed-Input Nearest Functions
*/
template <>
t_jit_long nearest< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(t_jit_long *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

template <>
float nearest< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(float *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

template <>
double nearest< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(double *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}


/*************************************************
	Single-Plane Float-Input Nearest Functions
*/
template <>
t_jit_long nearest< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(t_jit_long *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

template <>
float nearest< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(float *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

template <>
double nearest< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(double *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

/*************************************************
	Single-Plane Double-Input Nearest Functions
*/
template <>
t_jit_long nearest< t_jit_long, t_jit_long >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(t_jit_long *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

template <>
float nearest< float, float >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(float *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

template <>
double nearest< double, double >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return *(double *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k);
}

/*************************************************
	Fixed-Output Nearest Functions, double input
*/
template <>
Fixed nearest< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Fixed(
		UCharToFixed(*(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec2<Fixed> nearest< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec3<Fixed> nearest< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec4<Fixed> nearest< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <unsigned N>
VecN<Fixed, N> nearest< Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<double> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

/*************************************************
	Fixed-Output Nearest Functions, float input
*/
template <>
Fixed nearest< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Fixed(
		UCharToFixed(*(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec2<Fixed> nearest< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec3<Fixed> nearest< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec4<Fixed> nearest< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <unsigned N>
VecN<Fixed, N> nearest< Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<float> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}


/*************************************************
	Fixed-Output Nearest Functions, Fixed input
*/
template <>
Fixed nearest< Fixed, Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Fixed(
		UCharToFixed(*(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec2<Fixed> nearest< Fixed, Vec2<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec2<Fixed>(
		fixed_from_char(Vec2<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec3<Fixed> nearest< Fixed, Vec3<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec3<Fixed>(
		fixed_from_char(Vec3<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <>
Vec4<Fixed> nearest< Fixed, Vec4<Fixed> >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return Vec4<Fixed>(
		fixed_from_char(Vec4<t_jit_char>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}

template <unsigned N>
VecN<Fixed, N> nearest< Fixed >(t_jit_matrix_info *minfo, char *buffer, const Vec3<Fixed> &tc) {
	int i=0, j=0, k=0;
	nearest_coords3d(i, j, k, minfo, tc);
	return VecN<Fixed, N>(
		fixed_from_char(VecN<t_jit_char, N>(
			(t_jit_char *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j + minfo->dimstride[2]*k)
		))
	);
}


#endif // JIT_CODEGEN_OP_SAMPLE_3D_HPP
