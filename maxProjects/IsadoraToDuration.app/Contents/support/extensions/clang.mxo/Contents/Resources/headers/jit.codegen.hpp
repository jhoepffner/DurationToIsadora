#ifndef __JIT_CODEGEN_HPP__
#define __JIT_CODEGEN_HPP__ 1

#error "NOT USED ANYMORE"

#ifndef __cplusplus
#error "C++ Compilation not Enabled"
#endif

#include "jit.codegen.h"
#include "math.codegen.h"


#ifdef __cplusplus
extern "C" {
#endif

	extern double jit_math_wrap(double x, double lo, double hi);
	extern double jit_math_fold(double x, double lo, double hi);

	// for debugging:
	extern int printf(const char *, ...);

#ifdef __cplusplus
}
#endif

#define absf ABS
#define wrapf(x, y) (jit_math_wrap(x, 0., y))

template <typename T>
struct Vec4;
template <typename T>
struct Vec3;
template <typename T>
struct Vec2;

template <typename T, unsigned N>
struct VecN{
public:
	T v[N];
	
	VecN() {}
	
	VecN(int n, T *vv) {
		for(int i=0; i < MIN(N, n); i++) {
			v[i] = vv[i];
		}
	}
	
	VecN(int n, t_jit_long *vl) {
		for(int i=0; i < MIN(N, n); i++) {
			v[i] = (T)vl[i];
		}
	}
	
	VecN(T *vv) {
		for(unsigned int i=0; i < N; i++) {
			v[i] = vv[i];
		}
	}
	
	VecN(const VecN &vn) {
		for(unsigned int i=0; i < N; i++) {
			v[i] = vn.v[i];
		}
	}
	
	VecN(T t) {
		for(unsigned int i=0; i < N; i++) {
			v[i] = t;
		}
	}
	
	void c0(T vv) {
		v[0] = vv;
	}
	
	void c1(T vv) {
		v[1] = vv;
	}
	
	T c0() const {
		return v[0];
	}
	
	T c1() const {
		return v[1];
	}
	
	/*! Negation */
	const VecN operator- () const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = -v[i];
		}
		return res;
	}

	/*! Addition */
	const VecN operator+ (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]+vn.v[i];
		}
		return res;
	}
	
	/*! Subtraction */
	const VecN operator- (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]-vn.v[i];
		}
		return res;
	}
	
	/*! Multiplication */
	const VecN operator* (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]*vn.v[i];
		}
		return res;
	}
	
	const VecN operator* (float s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]*s;
		}
		return res;
	}
	
	/*! Division */
	const VecN operator/ (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]/vn.v[i];
		}
		return res;
	}
};

/*
template <typename T, unsigned N>
const VecN<T, N> swizzle(const VecN<T, N> &vin, int n, int *outmask, int *inmask) {
	VecN<T, N> = vout
	for(int i=0; i < n; i++) {
		vout.v[i] = vin.v[ inmask[i] ];
	}
}
*/


template <typename T>
struct Vec4{
public:
	T x;
	T y;
	T z;
	T w;
	
	Vec4(int n, T *v) {
		T *vv = &x;
		for(int i=0; i < MIN(4, n); i++) {
			vv[i] = v[i];
		}
	}
	
	Vec4(int n, t_jit_long *v) {
		T *vv = &x;
		for(int i=0; i < MIN(4, n); i++) {
			vv[i] = (T)v[i];
		}
	}
	
	Vec4(T *v) {
		T *vv = &x;
		for(int i=0; i < 4; i++) {
			vv[i] = v[i];
		}
	}
	
	Vec4(T x, T y, T z=0, T w=0)
	:	x(x), y(y), z(z), w(w)
	{}
	
	Vec4(const Vec3<T> &v3)
	:	x(v3.x), y(v3.y), z(v3.z), w(0)
	{}
	
	Vec4(const Vec2<T> &v2)
	:	x(v2.x), y(v2.y), z(0), w(0)
	{}
	
	Vec4(const T t)
	:	x(t), y(t), z(t), w(t)
	{}
	
	Vec4()
	:	x(0), y(0), z(0), w(0)
	{}
	
	void c0(T vv) {
		x = vv;
	}
	
	void c1(T vv) {
		y = vv;
	}
	
	T c0() const {
		return x;
	}
	
	T c1() const {
		return y;
	}
		
	/*! Negation */
	const Vec4 operator- () const {
		return Vec4(-x, -y, -z, -w);
	}

	/*! Addition */
	const Vec4 operator+ (const Vec4 &v) const {
		return Vec4(x+v.x, y+v.y, z+v.z, w+v.w);
	}
	
	const Vec4 operator+ (char s) const {
		return Vec4(x+s, y+s, z+s, w+s);
	}
	
	const Vec4 operator+ (long s) const {
		return Vec4(x+s, y+s, z+s, w+s);
	}
	
	const Vec4 operator+ (float s) const {
		return Vec4(x+s, y+s, z+s, w+s);
	}
	
	const Vec4 operator+ (double s) const {
		return Vec4(x+s, y+s, z+s, w+s);
	}
	
	
	

	/*! Subtraction */
	const Vec4 operator- (const Vec4 &v) const {
		return Vec4(x-v.x, y-v.y, z-v.z, w-v.w);
	}
	
	const Vec4 operator- (char s) const {
		return Vec4(x-s, y-s, z-s, w-s);
	}
	
	const Vec4 operator- (long s) const {
		return Vec4(x-s, y-s, z-s, w-s);
	}
	
	const Vec4 operator- (float s) const {
		return Vec4(x-s, y-s, z-s, w-s);
	}
	
	const Vec4 operator- (double s) const {
		return Vec4(x-s, y-s, z-s, w-s);
	}
	
	
	
	

	/*! Multiplication */
	const Vec4 operator* (const Vec4 &v) const {
		return Vec4(x*v.x, y*v.y, z*v.z, w*v.w);
	}
	
	const Vec4 operator* (char s) const {
		return Vec4(x*s, y*s, z*s, w*s);
	}
	
	const Vec4 operator* (long s) const {
		return Vec4(x*s, y*s, z*s, w*s);
	}
	
	const Vec4 operator* (float s) const {
		return Vec4(x*s, y*s, z*s, w*s);
	}
	
	const Vec4 operator* (double s) const {
		return Vec4(x*s, y*s, z*s, w*s);
	}



	/*! Divide */
	const Vec4 operator/ (const Vec4 &v) const {
		return Vec4(x/v.x, y/v.y, z/v.z, w/v.w);
	}
	

	/*! In-place Addition */
	Vec4 &operator+= (Vec4 v) {
		x += v.x; y += v.y; z += v.z; w += v.w;
		return *this;
	}

	/*! In-place Subtraction */
	Vec4 &operator-= (Vec4 v) {
		x -= v.x; y -= v.y; z -= v.z; w -= v.w;
		return *this;
	}

	/*! In-place Multiply */
	Vec4 &operator*= (Vec4 v) {
		x *= v.x; y *= v.y; z *= v.z; w *= v.w;
		return *this;
	}
	
	/*! In-place Divide */
	const Vec4 operator/= (Vec4 v) const {
		x = x/v.x; y = y/v.y; z = z/v.z; z = w/v.w;
		return *this;
	}
};

template <typename T>
const Vec4<T> operator+ (const float s, const Vec4<T> &v) {
	return Vec4<T>(v.x+s, v.y+s, v.z+s, v.w+s);
}

template <typename T>
const Vec4<T> operator- (const float s, const Vec4<T> &v) {
	return Vec4<T>(s-v.x, s-v.y, s-v.z, s-v.w);
}

template <typename T>
const Vec4<T> operator* (const float s, const Vec4<T> &v) {
	return Vec4<T>(v.x*s, v.y*s, v.z*s, v.w*s);
}

template <typename T>
const Vec4<T> operator/ (const float s, const Vec4<T> &v) {
	return Vec4<T>(s/v.x, s/v.y, s/v.z, s/v.w);
}

/*
template <typename T>
void swizzle(Vec4<T> &vout, const Vec4<T> &vin, int n, int *outmask, int *inmask) {
	for(int i=0; i < n; i++) {
		(&vout.x)[ outmask[i] ] = (&vin.x)[ inmask[i] ];
	}
}
*/
template <typename T>
struct Vec3{
public:
	T x;
	T y;
	T z;
	
	Vec3(int n, T *v) {
		T *vv = &x;
		for(int i=0; i < MIN(3, n); i++) {
			vv[i] = v[i];
		}
	}
	
	Vec3(int n, t_jit_long *v) {
		T *vv = &x;
		for(int i=0; i < MIN(3, n); i++) {
			vv[i] = (T)v[i];
		}
	}
	
	Vec3(T *v) {
		T *vv = &x;
		for(int i=0; i < 3; i++) {
			vv[i] = v[i];
		}
	}
	
	Vec3(T x, T y, T z=0)
	:	x(x), y(y), z(z)
	{}
	
	Vec3(const Vec4<T> &v4)
	:	x(v4.x), y(v4.y), z(v4.z)
	{}
	
	Vec3(const Vec2<T> &v2)
	:	x(v2.x), y(v2.y), z(0)
	{}
	
	Vec3(const T t)
	:	x(t), y(t), z(t)
	{}
	
	Vec3()
	:	x(0), y(0), z(0)
	{}
	
	void c0(T vv) {
		x = vv;
	}
	
	void c1(T vv) {
		y = vv;
	}
	
	T c0() const {
		return x;
	}
	
	T c1() const {
		return y;
	}
		
	/*! Negation */
	const Vec3 operator- () const {
		return Vec3(-x, -y, -z);
	}

	/*! Addition */
	const Vec3 operator+ (const Vec3 &v) const {
		return Vec3(x+v.x, y+v.y, z+v.z);
	}
	
	const Vec3 operator+ (char s) const {
		return Vec3(x+s, y+s, z+s);
	}
	
	const Vec3 operator+ (long s) const {
		return Vec3(x+s, y+s, z+s);
	}
	
	const Vec3 operator+ (float s) const {
		return Vec3(x+s, y+s, z+s);
	}
	
	const Vec3 operator+ (double s) const {
		return Vec3(x+s, y+s, z+s);
	}	
	
	

	/*! Subtraction */
	const Vec3 operator- (const Vec3 &v) const {
		return Vec3(x-v.x, y-v.y, z-v.z);
	}
	
	const Vec3 operator- (char s) const {
		return Vec3(x-s, y-s, z-s);
	}
	
	const Vec3 operator- (long s) const {
		return Vec3(x-s, y-s, z-s);
	}
	
	const Vec3 operator- (float s) const {
		return Vec3(x-s, y-s, z-s);
	}
	
	const Vec3 operator- (double s) const {
		return Vec3(x-s, y-s, z-s);
	}
	
	
	
	

	/*! Multiplication */
	const Vec3 operator* (const Vec3 &v) const {
		return Vec3(x*v.x, y*v.y, z*v.z);
	}
	
	const Vec3 operator* (char s) const {
		return Vec3(x*s, y*s, z*s);
	}
	
	const Vec3 operator* (long s) const {
		return Vec3(x*s, y*s, z*s);
	}
	
	const Vec3 operator* (float s) const {
		return Vec3(x*s, y*s, z*s);
	}
	
	const Vec3 operator* (double s) const {
		return Vec3(x*s, y*s, z*s);
	}



	/*! Divide */
	const Vec3 operator/ (const Vec3 &v) const {
		return Vec3(x/v.x, y/v.y, z/v.z);
	}
	

	/*! In-place Addition */
	Vec3 &operator+= (Vec3 v) {
		x += v.x; y += v.y; z += v.z;
		return *this;
	}

	/*! In-place Subtraction */
	Vec3 &operator-= (Vec3 v) {
		x -= v.x; y -= v.y; z -= v.z;
		return *this;
	}

	/*! In-place Multiply */
	Vec3 &operator*= (Vec3 v) {
		x *= v.x; y *= v.y; z *= v.z;
		return *this;
	}
	
	/*! In-place Divide */
	const Vec3 operator/= (Vec3 v) const {
		x = x/v.x; y = y/v.y; z = z/v.z;
		return *this;
	}
};

template <typename T>
const Vec3<T> operator+ (const float s, const Vec3<T> &v) {
	return Vec3<T>(v.x+s, v.y+s, v.z+s);
}

template <typename T>
const Vec3<T> operator- (const float s, const Vec3<T> &v) {
	return Vec3<T>(s-v.x, s-v.y, s-v.z);
}

template <typename T>
const Vec3<T> operator* (const float s, const Vec3<T> &v) {
	return Vec3<T>(v.x*s, v.y*s, v.z*s);
}

template <typename T>
const Vec3<T> operator/ (const float s, const Vec3<T> &v) {
	return Vec3<T>(s/v.x, s/v.y, s/v.z);
}

template <typename T>
struct Vec2{
public:
	T x;
	T y;
	
	Vec2(int n, T *v) {
		T *vv = &x;
		for(int i=0; i < MIN(2, n); i++) {
			vv[i] = v[i];
		}
	}
	
	Vec2(int n, t_jit_long *v) {
		T *vv = &x;
		for(int i=0; i < MIN(2, n); i++) {
			vv[i] = (T)v[i];
		}
	}
	
	Vec2(T *v) {
		T *vv = &x;
		for(int i=0; i < 2; i++) {
			vv[i] = v[i];
		}
	}
	
	Vec2(T x, T y)
	:	x(x), y(y)
	{}
	
	Vec2(const Vec4<T> &v4)
	:	x(v4.x), y(v4.y)
	{}
	
	Vec2(const Vec3<T> &v3)
	:	x(v3.x), y(v3.y)
	{}
	
	Vec2(const T t)
	:	x(t), y(t)
	{}
	
	Vec2()
	:	x(0), y(0)
	{}
	
	template <unsigned N>
	Vec2(const VecN<T, N> &vn) {
		x = vn.v[0];
		y = vn.v[1];
	}
	
	void c0(T vv) {
		x = vv;
	}
	
	void c1(T vv) {
		y = vv;
	}
	
	T c0() const {
		return x;
	}
	
	T c1() const {
		return y;
	}
		
	/*! Negation */
	const Vec2 operator- () const {
		return Vec2(-x, -y);
	}

	/*! Addition */
	const Vec2 operator+ (const Vec2 &v) const {
		return Vec2(x+v.x, y+v.y);
	}
	
	const Vec2 operator+ (char s) const {
		return Vec2(x+s, y+s);
	}
	
	const Vec2 operator+ (long s) const {
		return Vec2(x+s, y+s);
	}
	
	const Vec2 operator+ (float s) const {
		return Vec2(x+s, y+s);
	}
	
	const Vec2 operator+ (double s) const {
		return Vec2(x+s, y+s);
	}
	
	
	

	/*! Subtraction */
	const Vec2 operator- (const Vec2 &v) const {
		return Vec2(x-v.x, y-v.y);
	}
	
	const Vec2 operator- (char s) const {
		return Vec2(x-s, y-s);
	}
	
	const Vec2 operator- (long s) const {
		return Vec2(x-s, y-s);
	}
	
	const Vec2 operator- (float s) const {
		return Vec2(x-s, y-s);
	}
	
	const Vec2 operator- (double s) const {
		return Vec2(x-s, y-s);
	}
	
	

	/*! Multiplication */
	const Vec2 operator* (const Vec2 &v) const {
		return Vec2(x*v.x, y*v.y);
	}
	
	const Vec2 operator* (char s) const {
		return Vec2(x*s, y*s);
	}
	
	const Vec2 operator* (long s) const {
		return Vec2(x*s, y*s);
	}
	
	const Vec2 operator* (float s) const {
		return Vec2(x*s, y*s);
	}
	
	const Vec2 operator* (double s) const {
		return Vec2(x*s, y*s);
	}



	/*! Divide */
	const Vec2 operator/ (const Vec2 &v) const {
		return Vec2(x/v.x, y/v.y);
	}
	

	/*! In-place Addition */
	Vec2 &operator+= (Vec2 v) {
		x += v.x; y += v.y;
		return *this;
	}

	/*! In-place Subtraction */
	Vec2 &operator-= (Vec2 v) {
		x -= v.x; y -= v.y;
		return *this;
	}

	/*! In-place Multiply */
	Vec2 &operator*= (Vec2 v) {
		x *= v.x; y *= v.y;
		return *this;
	}
	
	/*! In-place Divide */
	const Vec2 operator/= (Vec2 v) const {
		x = x/v.x; y = y/v.y;
		return *this;
	}
};

template <typename T>
const Vec2<T> operator+ (const float s, const Vec2<T> &v) {
	return Vec2<T>(v.x+s, v.y+s);
}

template <typename T>
const Vec2<T> operator- (const float s, const Vec2<T> &v) {
	return Vec2<T>(s-v.x, s-v.y);
}

template <typename T>
const Vec2<T> operator* (const float s, const Vec2<T> &v) {
	return Vec2<T>(v.x*s, v.y*s);
}

template <typename T>
const Vec2<T> operator/ (const float s, const Vec2<T> &v) {
	return Vec2<T>(s/v.x, s/v.y);
}


/* SWIZZLE */
template <typename T>
T swizzle(const Vec4<T> &vin, int mask) {
	return (&vin.x)[mask];
}

template <typename T>
const Vec2<T> swizzle(const Vec4<T> &vin, const Vec2<int> &mask) {
	const T *v = &vin.x;
	return Vec2<T>(
		v[mask.x],
		v[mask.y]
	);
}

template <typename T>
const Vec3<T> swizzle(const Vec4<T> &vin, const Vec3<int> &mask) {
	const T *v = &vin.x;
	return Vec3<T>(
		v[mask.x],
		v[mask.y],
		v[mask.z]
	);
}

template <typename T>
const Vec4<T> swizzle(const Vec4<T> &vin, const Vec4<int> &mask) {
	const T *v = &vin.x;
	return Vec4<T>(
		v[mask.x],
		v[mask.y],
		v[mask.z],
		v[mask.w]
	);
}

template <typename T>
T swizzle(const Vec3<T> &vin, int mask) {
	return (&vin.x)[mask];
}

template <typename T>
const Vec2<T> swizzle(const Vec3<T> &vin, const Vec2<int> &mask) {
	const T *v = &vin.x;
	return Vec2<T>(
		v[mask.x],
		v[mask.y]
	);
}

template <typename T>
const Vec3<T> swizzle(const Vec3<T> &vin, const Vec3<int> &mask) {
	const T *v = &vin.x;
	return Vec3<T>(
		v[mask.x],
		v[mask.y],
		v[mask.z]
	);
}

template <typename T>
const Vec3<T> swizzle(const Vec3<T> &vin, const Vec4<int> &mask) {
	const T *v = &vin.x;
	return Vec3<T>(
		v[mask.x],
		v[mask.y],
		v[mask.z]
	);
}

template <typename T>
T swizzle(const Vec2<T> &vin, int mask) {
	return (&vin.x)[mask];
}

template <typename T>
const Vec2<T> swizzle(const Vec2<T> &vin, const Vec2<int> &mask) {
	const T *v = &vin.x;
	return Vec2<T>(
		v[mask.x],
		v[mask.y]
	);
}

template <typename T>
const Vec2<T> swizzle(const Vec2<T> &vin, const Vec3<int> &mask) {
	const T *v = &vin.x;
	return Vec2<T>(
		v[mask.x],
		v[mask.y]
	);
}

template <typename T>
const Vec2<T> swizzle(const Vec2<T> &vin, const Vec4<int> &mask) {
	const T *v = &vin.x;
	return Vec2<T>(
		v[mask.x],
		v[mask.y]
	);
}


/* OPS */
float log(const float v) {
	return logf(v);
}

Vec2<float> log(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = logf(v.x);
	rv.y = logf(v.y);

	return rv;
}
	
Vec3<float> log(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = logf(v.x);
	rv.y = logf(v.y);
	rv.z = logf(v.z);

	return rv;
}
	
Vec4<float> log(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = logf(v.x);
	rv.y = logf(v.y);
	rv.z = logf(v.z);
	rv.w = logf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> log(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = logf(v.v[i]);
	}
	return rv;
}
	
float acos(const float v) {
	return acosf(v);
}

Vec2<float> acos(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = acosf(v.x);
	rv.y = acosf(v.y);

	return rv;
}
	
Vec3<float> acos(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = acosf(v.x);
	rv.y = acosf(v.y);
	rv.z = acosf(v.z);

	return rv;
}
	
Vec4<float> acos(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = acosf(v.x);
	rv.y = acosf(v.y);
	rv.z = acosf(v.z);
	rv.w = acosf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> acos(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = acosf(v.v[i]);
	}
	return rv;
}
	
float fabs(const float v) {
	return fabsf(v);
}

Vec2<float> fabs(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = fabsf(v.x);
	rv.y = fabsf(v.y);

	return rv;
}
	
Vec3<float> fabs(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = fabsf(v.x);
	rv.y = fabsf(v.y);
	rv.z = fabsf(v.z);

	return rv;
}
	
Vec4<float> fabs(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = fabsf(v.x);
	rv.y = fabsf(v.y);
	rv.z = fabsf(v.z);
	rv.w = fabsf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> fabs(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = fabsf(v.v[i]);
	}
	return rv;
}
	
float tan(const float v) {
	return tanf(v);
}

Vec2<float> tan(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = tanf(v.x);
	rv.y = tanf(v.y);

	return rv;
}
	
Vec3<float> tan(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = tanf(v.x);
	rv.y = tanf(v.y);
	rv.z = tanf(v.z);

	return rv;
}
	
Vec4<float> tan(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = tanf(v.x);
	rv.y = tanf(v.y);
	rv.z = tanf(v.z);
	rv.w = tanf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> tan(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = tanf(v.v[i]);
	}
	return rv;
}
	
float cos(const float v) {
	return cosf(v);
}

Vec2<float> cos(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = cosf(v.x);
	rv.y = cosf(v.y);

	return rv;
}
	
Vec3<float> cos(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = cosf(v.x);
	rv.y = cosf(v.y);
	rv.z = cosf(v.z);

	return rv;
}
	
Vec4<float> cos(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = cosf(v.x);
	rv.y = cosf(v.y);
	rv.z = cosf(v.z);
	rv.w = cosf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> cos(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = cosf(v.v[i]);
	}
	return rv;
}
	
float ceil(const float v) {
	return ceilf(v);
}

Vec2<float> ceil(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = ceilf(v.x);
	rv.y = ceilf(v.y);

	return rv;
}
	
Vec3<float> ceil(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = ceilf(v.x);
	rv.y = ceilf(v.y);
	rv.z = ceilf(v.z);

	return rv;
}
	
Vec4<float> ceil(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = ceilf(v.x);
	rv.y = ceilf(v.y);
	rv.z = ceilf(v.z);
	rv.w = ceilf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> ceil(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = ceilf(v.v[i]);
	}
	return rv;
}
	
float floor(const float v) {
	return floorf(v);
}

Vec2<float> floor(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = floorf(v.x);
	rv.y = floorf(v.y);

	return rv;
}
	
Vec3<float> floor(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = floorf(v.x);
	rv.y = floorf(v.y);
	rv.z = floorf(v.z);

	return rv;
}
	
Vec4<float> floor(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = floorf(v.x);
	rv.y = floorf(v.y);
	rv.z = floorf(v.z);
	rv.w = floorf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> floor(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = floorf(v.v[i]);
	}
	return rv;
}
	
float abs(const float v) {
	return absf(v);
}

Vec2<float> abs(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = absf(v.x);
	rv.y = absf(v.y);

	return rv;
}
	
Vec3<float> abs(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = absf(v.x);
	rv.y = absf(v.y);
	rv.z = absf(v.z);

	return rv;
}
	
Vec4<float> abs(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = absf(v.x);
	rv.y = absf(v.y);
	rv.z = absf(v.z);
	rv.w = absf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> abs(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = absf(v.v[i]);
	}
	return rv;
}
	
float sqrt(const float v) {
	return sqrtf(v);
}

Vec2<float> sqrt(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = sqrtf(v.x);
	rv.y = sqrtf(v.y);

	return rv;
}
	
Vec3<float> sqrt(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = sqrtf(v.x);
	rv.y = sqrtf(v.y);
	rv.z = sqrtf(v.z);

	return rv;
}
	
Vec4<float> sqrt(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = sqrtf(v.x);
	rv.y = sqrtf(v.y);
	rv.z = sqrtf(v.z);
	rv.w = sqrtf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> sqrt(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sqrtf(v.v[i]);
	}
	return rv;
}
	
float sinh(const float v) {
	return sinhf(v);
}

Vec2<float> sinh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = sinhf(v.x);
	rv.y = sinhf(v.y);

	return rv;
}
	
Vec3<float> sinh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = sinhf(v.x);
	rv.y = sinhf(v.y);
	rv.z = sinhf(v.z);

	return rv;
}
	
Vec4<float> sinh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = sinhf(v.x);
	rv.y = sinhf(v.y);
	rv.z = sinhf(v.z);
	rv.w = sinhf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> sinh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sinhf(v.v[i]);
	}
	return rv;
}
	
float asin(const float v) {
	return asinf(v);
}

Vec2<float> asin(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = asinf(v.x);
	rv.y = asinf(v.y);

	return rv;
}
	
Vec3<float> asin(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = asinf(v.x);
	rv.y = asinf(v.y);
	rv.z = asinf(v.z);

	return rv;
}
	
Vec4<float> asin(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = asinf(v.x);
	rv.y = asinf(v.y);
	rv.z = asinf(v.z);
	rv.w = asinf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> asin(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = asinf(v.v[i]);
	}
	return rv;
}
	
float tanh(const float v) {
	return tanhf(v);
}

Vec2<float> tanh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = tanhf(v.x);
	rv.y = tanhf(v.y);

	return rv;
}
	
Vec3<float> tanh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = tanhf(v.x);
	rv.y = tanhf(v.y);
	rv.z = tanhf(v.z);

	return rv;
}
	
Vec4<float> tanh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = tanhf(v.x);
	rv.y = tanhf(v.y);
	rv.z = tanhf(v.z);
	rv.w = tanhf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> tanh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = tanhf(v.v[i]);
	}
	return rv;
}
	
float cosh(const float v) {
	return coshf(v);
}

Vec2<float> cosh(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = coshf(v.x);
	rv.y = coshf(v.y);

	return rv;
}
	
Vec3<float> cosh(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = coshf(v.x);
	rv.y = coshf(v.y);
	rv.z = coshf(v.z);

	return rv;
}
	
Vec4<float> cosh(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = coshf(v.x);
	rv.y = coshf(v.y);
	rv.z = coshf(v.z);
	rv.w = coshf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> cosh(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = coshf(v.v[i]);
	}
	return rv;
}
	
float log10(const float v) {
	return log10f(v);
}

Vec2<float> log10(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = log10f(v.x);
	rv.y = log10f(v.y);

	return rv;
}
	
Vec3<float> log10(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = log10f(v.x);
	rv.y = log10f(v.y);
	rv.z = log10f(v.z);

	return rv;
}
	
Vec4<float> log10(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = log10f(v.x);
	rv.y = log10f(v.y);
	rv.z = log10f(v.z);
	rv.w = log10f(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> log10(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = log10f(v.v[i]);
	}
	return rv;
}
	
float exp(const float v) {
	return expf(v);
}

Vec2<float> exp(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = expf(v.x);
	rv.y = expf(v.y);

	return rv;
}
	
Vec3<float> exp(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = expf(v.x);
	rv.y = expf(v.y);
	rv.z = expf(v.z);

	return rv;
}
	
Vec4<float> exp(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = expf(v.x);
	rv.y = expf(v.y);
	rv.z = expf(v.z);
	rv.w = expf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> exp(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = expf(v.v[i]);
	}
	return rv;
}
	
float sin(const float v) {
	return sinf(v);
}

Vec2<float> sin(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = sinf(v.x);
	rv.y = sinf(v.y);

	return rv;
}
	
Vec3<float> sin(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = sinf(v.x);
	rv.y = sinf(v.y);
	rv.z = sinf(v.z);

	return rv;
}
	
Vec4<float> sin(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = sinf(v.x);
	rv.y = sinf(v.y);
	rv.z = sinf(v.z);
	rv.w = sinf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> sin(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = sinf(v.v[i]);
	}
	return rv;
}
	
float atan(const float v) {
	return atanf(v);
}

Vec2<float> atan(const Vec2<float> &v) {
	Vec2<float> rv;
	rv.x = atanf(v.x);
	rv.y = atanf(v.y);

	return rv;
}
	
Vec3<float> atan(const Vec3<float> &v) {
	Vec3<float> rv;
	rv.x = atanf(v.x);
	rv.y = atanf(v.y);
	rv.z = atanf(v.z);

	return rv;
}
	
Vec4<float> atan(const Vec4<float> &v) {
	Vec4<float> rv;
	rv.x = atanf(v.x);
	rv.y = atanf(v.y);
	rv.z = atanf(v.z);
	rv.w = atanf(v.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> atan(const VecN<float, N> &v) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = atanf(v.v[i]);
	}
	return rv;
}
	
float fmod(const float v1, const float v2) {
	return jit_math_wrap(v1, 0., v2);
}

Vec2<float> fmod(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = jit_math_wrap(v1.x, 0., v2.x);
	rv.y = jit_math_wrap(v1.y, 0., v2.y);

	return rv;
}
	
Vec3<float> fmod(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = jit_math_wrap(v1.x, 0., v2.x);
	rv.y = jit_math_wrap(v1.y, 0., v2.y);
	rv.z = jit_math_wrap(v1.z, 0., v2.z);

	return rv;
}
	
Vec4<float> fmod(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = jit_math_wrap(v1.x, 0., v2.x);
	rv.y = jit_math_wrap(v1.y, 0., v2.y);
	rv.z = jit_math_wrap(v1.z, 0., v2.z);
	rv.w = jit_math_wrap(v1.w, 0., v2.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> fmod(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = jit_math_wrap(v1.v[i], v2.v[i]);
	}
	return rv;
}
	
float atan2(const float v1, const float v2) {
	return atan2f(v1, v2);
}

Vec2<float> atan2(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = atan2f(v1.x, v2.x);
	rv.y = atan2f(v1.y, v2.y);

	return rv;
}
	
Vec3<float> atan2(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = atan2f(v1.x, v2.x);
	rv.y = atan2f(v1.y, v2.y);
	rv.z = atan2f(v1.z, v2.z);

	return rv;
}
	
Vec4<float> atan2(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = atan2f(v1.x, v2.x);
	rv.y = atan2f(v1.y, v2.y);
	rv.z = atan2f(v1.z, v2.z);
	rv.w = atan2f(v1.w, v2.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> atan2(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = atan2f(v1.v[i], v2.v[i]);
	}
	return rv;
}
	
float hypot(const float v1, const float v2) {
	return hypotf(v1, v2);
}

Vec2<float> hypot(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = hypotf(v1.x, v2.x);
	rv.y = hypotf(v1.y, v2.y);

	return rv;
}
	
Vec3<float> hypot(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = hypotf(v1.x, v2.x);
	rv.y = hypotf(v1.y, v2.y);
	rv.z = hypotf(v1.z, v2.z);

	return rv;
}
	
Vec4<float> hypot(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = hypotf(v1.x, v2.x);
	rv.y = hypotf(v1.y, v2.y);
	rv.z = hypotf(v1.z, v2.z);
	rv.w = hypotf(v1.w, v2.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> hypot(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = hypotf(v1.v[i], v2.v[i]);
	}
	return rv;
}

float clamp(const float x, const float a, const float b) {
	return CLAMP(x, a, b);
}

Vec2<float> clamp(const Vec2<float> &x, const Vec2<float> &a, const Vec2<float> &b) {
	Vec2<float> rv;
	rv.x = CLAMP(x.x, a.x, b.x);
	rv.y = CLAMP(x.y, a.y, b.y);

	return rv;
}
	
Vec3<float> clamp(const Vec3<float> &x, const Vec3<float> &a, const Vec3<float> &b) {
	Vec3<float> rv;
	rv.x = CLAMP(x.x, a.x, b.x);
	rv.y = CLAMP(x.y, a.y, b.y);
	rv.z = CLAMP(x.z, a.z, b.z);

	return rv;
}
	
Vec4<float> clamp(const Vec4<float> &x, const Vec4<float> &a, const Vec4<float> &b) {
	Vec4<float> rv;
	rv.x = CLAMP(x.x, a.x, b.x);
	rv.y = CLAMP(x.y, a.y, b.y);
	rv.z = CLAMP(x.z, a.z, b.z);
	rv.w = CLAMP(x.w, a.w, b.w);

	return rv;
}

template<typename T>
T fract(const T &v) {
	return v-floor(v);
}
	
float wrap(const float v1, const float v2) {
	return wrapf(v1, v2);
}

Vec2<float> wrap(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = wrapf(v1.x, v2.x);
	rv.y = wrapf(v1.y, v2.y);

	return rv;
}
	
Vec3<float> wrap(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = wrapf(v1.x, v2.x);
	rv.y = wrapf(v1.y, v2.y);
	rv.z = wrapf(v1.z, v2.z);

	return rv;
}
	
Vec4<float> wrap(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = wrapf(v1.x, v2.x);
	rv.y = wrapf(v1.y, v2.y);
	rv.z = wrapf(v1.z, v2.z);
	rv.w = wrapf(v1.w, v2.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> wrap(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = wrapf(v1.v[i], v2.v[i]);
	}
	return rv;
}
	
float pow(const float v1, const float v2) {
	return powf(v1, v2);
}

Vec2<float> pow(const Vec2<float> &v1, const Vec2<float> &v2) {
	Vec2<float> rv;
	rv.x = powf(v1.x, v2.x);
	rv.y = powf(v1.y, v2.y);

	return rv;
}
	
Vec3<float> pow(const Vec3<float> &v1, const Vec3<float> &v2) {
	Vec3<float> rv;
	rv.x = powf(v1.x, v2.x);
	rv.y = powf(v1.y, v2.y);
	rv.z = powf(v1.z, v2.z);

	return rv;
}
	
Vec4<float> pow(const Vec4<float> &v1, const Vec4<float> &v2) {
	Vec4<float> rv;
	rv.x = powf(v1.x, v2.x);
	rv.y = powf(v1.y, v2.y);
	rv.z = powf(v1.z, v2.z);
	rv.w = powf(v1.w, v2.w);

	return rv;
}
	
template <unsigned N>
VecN<float, N> pow(const VecN<float, N> &v1, const VecN<float, N> &v2) {
	VecN<float, N> rv;
	for(unsigned int i=0; i < N; i++) {
		rv.v[i] = powf(v1.v[i], v2.v[i]);
	}
	return rv;
}


/* Geometric ops */
template<typename T>
float length(const T &v) {
	return (float)v;
}

template<>
float length<Vec2<float> >(const Vec2<float> &v) {
	return sqrt(v.x*v.x + v.y*v.y);
}

template<>
float length<Vec3<float> >(const Vec3<float> &v) {
	return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

template<>
float length<Vec4<float> >(const Vec4<float> &v) {
	return sqrt(v.x*v.x + v.y*v.y + v.z*v.z + v.w*v.w);
}

template<typename T>
float dot(const T &v1, const T &v2) {
	return (float)v1*v2;
}

template<>
float dot<Vec2<float> >(const Vec2<float> &v1, const Vec2<float> &v2) {
	return v1.x*v2.x + v1.y*v2.y;
}

template<>
float dot<Vec3<float> >(const Vec3<float> &v1, const Vec3<float> &v2) {
	return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

template<>
float dot<Vec4<float> >(const Vec4<float> &v1, const Vec4<float> &v2) {
	return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z + v1.w*v2.w;
}
	
	
template <typename T>
Vec3<T> cross(const Vec3<T> &v1, const Vec3<T> &v2) {
	return Vec3<T>(
		v1.y*v2.z - v1.z*v2.y,
		v1.z*v2.x - v1.x*v2.z,
		v1.x*v2.y - v1.y*v2.x
	);
}

template<typename T>
T normalize(const T &v) {
	float magsq = dot(v, v);
	if(magsq < JIT_MATH_F32_EPS) {
		return T(JIT_MATH_F32_EPS);
	}
	else {
		float mag = sqrt(magsq);
		return v/mag;
	}
}

template<typename T>
T faceforward(const T &N, const T& I, const T& Nref) {
	return dot(Nref, I) < 0. ? N : -N;
}

template<typename T>
T reflect(const T &I, const T& N) {
	return I - 2*dot(N, I)*N;
}

template<typename T>
T refract(const T &I, const T& N, float eta) {
	float NI = dot(N, I);
	float k = 1.0f - eta*eta*(1.f - NI*NI);
	if(k < 0.f) {
		return T(0.f);
	}
	else {
		return eta*I - (eta*NI+sqrt(k))*N;
	}
}


template <typename V>
V mix(const V &v1, const V &v2, const float amt) {
	return v1 + (v2-v1)*amt;
}

template <typename V>
V mix(const V &v1, const V &v2, const V &amt) {
	return v1 + (v2-v1)*amt;
}


template <typename T, typename V>
V sample(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	float x = jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1);
	float y = jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1);
	float fracx = jit_math_fold(x, 0, 1);
	float fracy = jit_math_fold(y, 0, 1);
	
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
V nearest(t_jit_matrix_info *minfo, char *buffer, const Vec2<float> &tc) {
	int i = (int)(0.5+jit_math_wrap(tc.x, 0, 1) * (minfo->dim[0]-1));
	int j = (int)(0.5+jit_math_wrap(tc.y, 0, 1) * (minfo->dim[1]-1));
	return V((T *)(buffer + minfo->dimstride[0]*i + minfo->dimstride[1]*j));
}


#endif // __JIT_CODEGEN_HPP__