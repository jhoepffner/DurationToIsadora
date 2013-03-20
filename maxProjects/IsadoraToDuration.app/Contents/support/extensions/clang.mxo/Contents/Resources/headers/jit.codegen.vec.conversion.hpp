// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_VEC_CONVERSION_HPP
#define JIT_CODEGEN_VEC_CONVERSION_HPP 1
#include "jit.codegen.vec.hpp"
#include "jit.codegen.vec.fixed.hpp"

			
/**********************************
	char <-> Fixed
*/
t_jit_char char_from_fixed1(t_jit_Fixed v) {
	return FixedToUCharClamped(v);
}

const Vec2<t_jit_char> char_from_fixed(const Vec2<t_jit_Fixed> &v) {
	return Vec2<t_jit_char>(char_from_fixed1(v.x), char_from_fixed1(v.y));
}

const Vec3<t_jit_char> char_from_fixed(const Vec3<t_jit_Fixed> &v) {
	return Vec3<t_jit_char>(char_from_fixed1(v.x), char_from_fixed1(v.y), char_from_fixed1(v.z));
}

const Vec4<t_jit_char> char_from_fixed(const Vec4<t_jit_Fixed> &v) {
	return Vec4<t_jit_char>(char_from_fixed1(v.x), char_from_fixed1(v.y), char_from_fixed1(v.z), char_from_fixed1(v.w));
}

template <unsigned N>
const VecN<t_jit_char, N> char_from_fixed(const VecN<t_jit_Fixed, N> &v) {
	VecN<t_jit_char, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = char_from_fixed1(v.v[i]);
	}
	return res;
}

t_jit_Fixed fixed_from_char1(t_jit_char v) {
	return UCharToFixed(v);
}

const Vec2<t_jit_Fixed> fixed_from_char(const Vec2<t_jit_char> &v) {
	return Vec2<t_jit_Fixed>(fixed_from_char1(v.x), fixed_from_char1(v.y));
}

const Vec3<t_jit_Fixed> fixed_from_char(const Vec3<t_jit_char> &v) {
	return Vec3<t_jit_Fixed>(fixed_from_char1(v.x), fixed_from_char1(v.y), fixed_from_char1(v.z));
}

const Vec4<t_jit_Fixed> fixed_from_char(const Vec4<t_jit_char> &v) {
	return Vec4<t_jit_Fixed>(fixed_from_char1(v.x), fixed_from_char1(v.y), fixed_from_char1(v.z), fixed_from_char1(v.w));
}

template <unsigned N>
const VecN<t_jit_Fixed, N> fixed_from_char(const VecN<t_jit_char, N> &v) {
	VecN<t_jit_Fixed, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = fixed_from_char1(v.v[i]);
	}
	return res;
}
			
/**********************************
	char <-> long
*/
t_jit_char char_from_long1(t_jit_long v) {
	return LongToCharClamped(v);
}

const Vec2<t_jit_char> char_from_long(const Vec2<t_jit_long> &v) {
	return Vec2<t_jit_char>(char_from_long1(v.x), char_from_long1(v.y));
}

const Vec3<t_jit_char> char_from_long(const Vec3<t_jit_long> &v) {
	return Vec3<t_jit_char>(char_from_long1(v.x), char_from_long1(v.y), char_from_long1(v.z));
}

const Vec4<t_jit_char> char_from_long(const Vec4<t_jit_long> &v) {
	return Vec4<t_jit_char>(char_from_long1(v.x), char_from_long1(v.y), char_from_long1(v.z), char_from_long1(v.w));
}

template <unsigned N>
const VecN<t_jit_char, N> char_from_long(const VecN<t_jit_long, N> &v) {
	VecN<t_jit_char, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = char_from_long1(v.v[i]);
	}
	return res;
}

t_jit_long long_from_char1(t_jit_char v) {
	return t_jit_long(v);
}

const Vec2<t_jit_long> long_from_char(const Vec2<t_jit_char> &v) {
	return Vec2<t_jit_long>(long_from_char1(v.x), long_from_char1(v.y));
}

const Vec3<t_jit_long> long_from_char(const Vec3<t_jit_char> &v) {
	return Vec3<t_jit_long>(long_from_char1(v.x), long_from_char1(v.y), long_from_char1(v.z));
}

const Vec4<t_jit_long> long_from_char(const Vec4<t_jit_char> &v) {
	return Vec4<t_jit_long>(long_from_char1(v.x), long_from_char1(v.y), long_from_char1(v.z), long_from_char1(v.w));
}

template <unsigned N>
const VecN<t_jit_long, N> long_from_char(const VecN<t_jit_char, N> &v) {
	VecN<t_jit_long, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = long_from_char1(v.v[i]);
	}
	return res;
}
			
/**********************************
	char <-> float
*/
t_jit_char char_from_float1(const t_jit_float32 v) {
	return FixedToUCharClamped(FloatToFixed(v));
}

const Vec2<t_jit_char> char_from_float(const Vec2<t_jit_float32> &v) {
	return Vec2<t_jit_char>(char_from_float1(v.x), char_from_float1(v.y));
}

const Vec3<t_jit_char> char_from_float(const Vec3<t_jit_float32> &v) {
	return Vec3<t_jit_char>(char_from_float1(v.x), char_from_float1(v.y), char_from_float1(v.z));
}

const Vec4<t_jit_char> char_from_float(const Vec4<t_jit_float32> &v) {
	return Vec4<t_jit_char>(char_from_float1(v.x), char_from_float1(v.y), char_from_float1(v.z), char_from_float1(v.w));
}

template <unsigned N>
const VecN<t_jit_char, N> char_from_float(const VecN<t_jit_float32, N> &v) {
	VecN<t_jit_char, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = char_from_float1(v.v[i]);
	}
	return res;
}

t_jit_float32 float_from_char1(const t_jit_char &v) {
	return FixedToFloat(UCharToFixed(v));
}

const Vec2<t_jit_float32> float_from_char(const Vec2<t_jit_char> &v) {
	return Vec2<t_jit_float32>(float_from_char1(v.x), float_from_char1(v.y));
}

const Vec3<t_jit_float32> float_from_char(const Vec3<t_jit_char> &v) {
	return Vec3<t_jit_float32>(float_from_char1(v.x), float_from_char1(v.y), float_from_char1(v.z));
}

const Vec4<t_jit_float32> float_from_char(const Vec4<t_jit_char> &v) {
	return Vec4<t_jit_float32>(float_from_char1(v.x), float_from_char1(v.y), float_from_char1(v.z), float_from_char1(v.w));
}

template <unsigned N>
const VecN<t_jit_float32, N> float_from_char(const VecN<t_jit_char, N> &v) {
	VecN<t_jit_float32, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = float_from_char1(v.v[i]);
	}
	return res;
}
			
/**********************************
	char <-> double
*/
t_jit_char char_from_double1(const t_jit_float64 v) {
	return FixedToUCharClamped(DoubleToFixed(v));
}

const Vec2<t_jit_char> char_from_double(const Vec2<t_jit_float64> &v) {
	return Vec2<t_jit_char>(char_from_double1(v.x), char_from_double1(v.y));
}

const Vec3<t_jit_char> char_from_double(const Vec3<t_jit_float64> &v) {
	return Vec3<t_jit_char>(char_from_double1(v.x), char_from_double1(v.y), char_from_double1(v.z));
}

const Vec4<t_jit_char> char_from_double(const Vec4<t_jit_float64> &v) {
	return Vec4<t_jit_char>(char_from_double1(v.x), char_from_double1(v.y), char_from_double1(v.z), char_from_double1(v.w));
}

template <unsigned N>
const VecN<t_jit_char, N> char_from_double(const VecN<t_jit_float64, N> &v) {
	VecN<t_jit_char, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = char_from_double1(v.v[i]);
	}
	return res;
}

t_jit_float64 double_from_char1(const t_jit_char &v) {
	return FixedToDouble(UCharToFixed(v));
}

const Vec2<t_jit_float64> double_from_char(const Vec2<t_jit_char> &v) {
	return Vec2<t_jit_float64>(double_from_char1(v.x), double_from_char1(v.y));
}

const Vec3<t_jit_float64> double_from_char(const Vec3<t_jit_char> &v) {
	return Vec3<t_jit_float64>(double_from_char1(v.x), double_from_char1(v.y), double_from_char1(v.z));
}

const Vec4<t_jit_float64> double_from_char(const Vec4<t_jit_char> &v) {
	return Vec4<t_jit_float64>(double_from_char1(v.x), double_from_char1(v.y), double_from_char1(v.z), double_from_char1(v.w));
}

template <unsigned N>
const VecN<t_jit_float64, N> double_from_char(const VecN<t_jit_char, N> &v) {
	VecN<t_jit_float64, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = double_from_char1(v.v[i]);
	}
	return res;
}
			
/**********************************
	Fixed <-> long
*/
t_jit_Fixed fixed_from_long1(t_jit_long v) {
	return IntToFixed(v);
}

const Vec2<t_jit_Fixed> fixed_from_long(const Vec2<t_jit_long> &v) {
	return Vec2<t_jit_Fixed>(fixed_from_long1(v.x), fixed_from_long1(v.y));
}

const Vec3<t_jit_Fixed> fixed_from_long(const Vec3<t_jit_long> &v) {
	return Vec3<t_jit_Fixed>(fixed_from_long1(v.x), fixed_from_long1(v.y), fixed_from_long1(v.z));
}

const Vec4<t_jit_Fixed> fixed_from_long(const Vec4<t_jit_long> &v) {
	return Vec4<t_jit_Fixed>(fixed_from_long1(v.x), fixed_from_long1(v.y), fixed_from_long1(v.z), fixed_from_long1(v.w));
}

template <unsigned N>
const VecN<t_jit_Fixed, N> fixed_from_long(const VecN<t_jit_long, N> &v) {
	VecN<t_jit_Fixed, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = fixed_from_long1(v.v[i]);
	}
	return res;
}

t_jit_long long_from_fixed1(t_jit_Fixed v) {
	return FixedToInt(v);
}

const Vec2<t_jit_long> long_from_fixed(const Vec2<t_jit_Fixed> &v) {
	return Vec2<t_jit_long>(long_from_fixed1(v.x), long_from_fixed1(v.y));
}

const Vec3<t_jit_long> long_from_fixed(const Vec3<t_jit_Fixed> &v) {
	return Vec3<t_jit_long>(long_from_fixed1(v.x), long_from_fixed1(v.y), long_from_fixed1(v.z));
}

const Vec4<t_jit_long> long_from_fixed(const Vec4<t_jit_Fixed> &v) {
	return Vec4<t_jit_long>(long_from_fixed1(v.x), long_from_fixed1(v.y), long_from_fixed1(v.z), long_from_fixed1(v.w));
}

template <unsigned N>
const VecN<t_jit_long, N> long_from_fixed(const VecN<t_jit_Fixed, N> &v) {
	VecN<t_jit_long, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = long_from_fixed1(v.v[i]);
	}
	return res;
}
			
/**********************************
	Fixed <-> float
*/
t_jit_Fixed fixed_from_float1(t_jit_float32 v) {
	return FloatToFixed(v);
}

const Vec2<t_jit_Fixed> fixed_from_float(const Vec2<t_jit_float32> &v) {
	return Vec2<t_jit_Fixed>(fixed_from_float1(v.x), fixed_from_float1(v.y));
}

const Vec3<t_jit_Fixed> fixed_from_float(const Vec3<t_jit_float32> &v) {
	return Vec3<t_jit_Fixed>(fixed_from_float1(v.x), fixed_from_float1(v.y), fixed_from_float1(v.z));
}

const Vec4<t_jit_Fixed> fixed_from_float(const Vec4<t_jit_float32> &v) {
	return Vec4<t_jit_Fixed>(fixed_from_float1(v.x), fixed_from_float1(v.y), fixed_from_float1(v.z), fixed_from_float1(v.w));
}

template <unsigned N>
const VecN<t_jit_Fixed, N> fixed_from_float(const VecN<t_jit_float32, N> &v) {
	VecN<t_jit_Fixed, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = fixed_from_float1(v.v[i]);
	}
	return res;
}

t_jit_float32 float_from_fixed1(t_jit_Fixed v) {
	return FixedToFloat(v);
}

const Vec2<t_jit_float32> float_from_fixed(const Vec2<t_jit_Fixed> &v) {
	return Vec2<t_jit_float32>(float_from_fixed1(v.x), float_from_fixed1(v.y));
}

const Vec3<t_jit_float32> float_from_fixed(const Vec3<t_jit_Fixed> &v) {
	return Vec3<t_jit_float32>(float_from_fixed1(v.x), float_from_fixed1(v.y), float_from_fixed1(v.z));
}

const Vec4<t_jit_float32> float_from_fixed(const Vec4<t_jit_Fixed> &v) {
	return Vec4<t_jit_float32>(float_from_fixed1(v.x), float_from_fixed1(v.y), float_from_fixed1(v.z), float_from_fixed1(v.w));
}

template <unsigned N>
const VecN<t_jit_float32, N> float_from_fixed(const VecN<t_jit_Fixed, N> &v) {
	VecN<t_jit_float32, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = float_from_fixed1(v.v[i]);
	}
	return res;
}
			
/**********************************
	Fixed <-> double
*/
t_jit_Fixed fixed_from_double1(t_jit_float64 v) {
	return FloatToFixed(v);
}

const Vec2<t_jit_Fixed> fixed_from_double(const Vec2<t_jit_float64> &v) {
	return Vec2<t_jit_Fixed>(fixed_from_double1(v.x), fixed_from_double1(v.y));
}

const Vec3<t_jit_Fixed> fixed_from_double(const Vec3<t_jit_float64> &v) {
	return Vec3<t_jit_Fixed>(fixed_from_double1(v.x), fixed_from_double1(v.y), fixed_from_double1(v.z));
}

const Vec4<t_jit_Fixed> fixed_from_double(const Vec4<t_jit_float64> &v) {
	return Vec4<t_jit_Fixed>(fixed_from_double1(v.x), fixed_from_double1(v.y), fixed_from_double1(v.z), fixed_from_double1(v.w));
}

template <unsigned N>
const VecN<t_jit_Fixed, N> fixed_from_double(const VecN<t_jit_float64, N> &v) {
	VecN<t_jit_Fixed, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = fixed_from_double1(v.v[i]);
	}
	return res;
}

t_jit_float64 double_from_fixed1(t_jit_Fixed v) {
	return FixedToDouble(v);
}

const Vec2<t_jit_float64> double_from_fixed(const Vec2<t_jit_Fixed> &v) {
	return Vec2<t_jit_float64>(double_from_fixed1(v.x), double_from_fixed1(v.y));
}

const Vec3<t_jit_float64> double_from_fixed(const Vec3<t_jit_Fixed> &v) {
	return Vec3<t_jit_float64>(double_from_fixed1(v.x), double_from_fixed1(v.y), double_from_fixed1(v.z));
}

const Vec4<t_jit_float64> double_from_fixed(const Vec4<t_jit_Fixed> &v) {
	return Vec4<t_jit_float64>(double_from_fixed1(v.x), double_from_fixed1(v.y), double_from_fixed1(v.z), double_from_fixed1(v.w));
}

template <unsigned N>
const VecN<t_jit_float64, N> double_from_fixed(const VecN<t_jit_Fixed, N> &v) {
	VecN<t_jit_float64, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = double_from_fixed1(v.v[i]);
	}
	return res;
}
			
/**********************************
	long <-> float
*/
t_jit_long long_from_float1(t_jit_float32 v) {
	return t_jit_long(v);
}

const Vec2<t_jit_long> long_from_float(const Vec2<t_jit_float32> &v) {
	return Vec2<t_jit_long>(long_from_float1(v.x), long_from_float1(v.y));
}

const Vec3<t_jit_long> long_from_float(const Vec3<t_jit_float32> &v) {
	return Vec3<t_jit_long>(long_from_float1(v.x), long_from_float1(v.y), long_from_float1(v.z));
}

const Vec4<t_jit_long> long_from_float(const Vec4<t_jit_float32> &v) {
	return Vec4<t_jit_long>(long_from_float1(v.x), long_from_float1(v.y), long_from_float1(v.z), long_from_float1(v.w));
}

template <unsigned N>
const VecN<t_jit_long, N> long_from_float(const VecN<t_jit_float32, N> &v) {
	VecN<t_jit_long, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = long_from_float1(v.v[i]);
	}
	return res;
}

t_jit_float32 float_from_long1(t_jit_long v) {
	return t_jit_float32(v);
}

const Vec2<t_jit_float32> float_from_long(const Vec2<t_jit_long> &v) {
	return Vec2<t_jit_float32>(float_from_long1(v.x), float_from_long1(v.y));
}

const Vec3<t_jit_float32> float_from_long(const Vec3<t_jit_long> &v) {
	return Vec3<t_jit_float32>(float_from_long1(v.x), float_from_long1(v.y), float_from_long1(v.z));
}

const Vec4<t_jit_float32> float_from_long(const Vec4<t_jit_long> &v) {
	return Vec4<t_jit_float32>(float_from_long1(v.x), float_from_long1(v.y), float_from_long1(v.z), float_from_long1(v.w));
}

template <unsigned N>
const VecN<t_jit_float32, N> float_from_long(const VecN<t_jit_long, N> &v) {
	VecN<t_jit_float32, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = float_from_long1(v.v[i]);
	}
	return res;
}
			
/**********************************
	long <-> double
*/
t_jit_long long_from_double1(t_jit_float64 v) {
	return t_jit_long(v);
}

const Vec2<t_jit_long> long_from_double(const Vec2<t_jit_float64> &v) {
	return Vec2<t_jit_long>(long_from_double1(v.x), long_from_double1(v.y));
}

const Vec3<t_jit_long> long_from_double(const Vec3<t_jit_float64> &v) {
	return Vec3<t_jit_long>(long_from_double1(v.x), long_from_double1(v.y), long_from_double1(v.z));
}

const Vec4<t_jit_long> long_from_double(const Vec4<t_jit_float64> &v) {
	return Vec4<t_jit_long>(long_from_double1(v.x), long_from_double1(v.y), long_from_double1(v.z), long_from_double1(v.w));
}

template <unsigned N>
const VecN<t_jit_long, N> long_from_double(const VecN<t_jit_float64, N> &v) {
	VecN<t_jit_long, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = long_from_double1(v.v[i]);
	}
	return res;
}

t_jit_float64 double_from_long1(t_jit_long v) {
	return t_jit_float64(v);
}

const Vec2<t_jit_float64> double_from_long(const Vec2<t_jit_long> &v) {
	return Vec2<t_jit_float64>(double_from_long1(v.x), double_from_long1(v.y));
}

const Vec3<t_jit_float64> double_from_long(const Vec3<t_jit_long> &v) {
	return Vec3<t_jit_float64>(double_from_long1(v.x), double_from_long1(v.y), double_from_long1(v.z));
}

const Vec4<t_jit_float64> double_from_long(const Vec4<t_jit_long> &v) {
	return Vec4<t_jit_float64>(double_from_long1(v.x), double_from_long1(v.y), double_from_long1(v.z), double_from_long1(v.w));
}

template <unsigned N>
const VecN<t_jit_float64, N> double_from_long(const VecN<t_jit_long, N> &v) {
	VecN<t_jit_float64, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = double_from_long1(v.v[i]);
	}
	return res;
}
			
/**********************************
	float <-> double
*/
t_jit_float32 float_from_double1(t_jit_float64 v) {
	return t_jit_float32(v);
}

const Vec2<t_jit_float32> float_from_double(const Vec2<t_jit_float64> &v) {
	return Vec2<t_jit_float32>(float_from_double1(v.x), float_from_double1(v.y));
}

const Vec3<t_jit_float32> float_from_double(const Vec3<t_jit_float64> &v) {
	return Vec3<t_jit_float32>(float_from_double1(v.x), float_from_double1(v.y), float_from_double1(v.z));
}

const Vec4<t_jit_float32> float_from_double(const Vec4<t_jit_float64> &v) {
	return Vec4<t_jit_float32>(float_from_double1(v.x), float_from_double1(v.y), float_from_double1(v.z), float_from_double1(v.w));
}

template <unsigned N>
const VecN<t_jit_float32, N> float_from_double(const VecN<t_jit_float64, N> &v) {
	VecN<t_jit_float32, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = float_from_double1(v.v[i]);
	}
	return res;
}

t_jit_float64 double_from_float1(t_jit_float32 v) {
	return t_jit_float64(v);
}

const Vec2<t_jit_float64> double_from_float(const Vec2<t_jit_float32> &v) {
	return Vec2<t_jit_float64>(double_from_float1(v.x), double_from_float1(v.y));
}

const Vec3<t_jit_float64> double_from_float(const Vec3<t_jit_float32> &v) {
	return Vec3<t_jit_float64>(double_from_float1(v.x), double_from_float1(v.y), double_from_float1(v.z));
}

const Vec4<t_jit_float64> double_from_float(const Vec4<t_jit_float32> &v) {
	return Vec4<t_jit_float64>(double_from_float1(v.x), double_from_float1(v.y), double_from_float1(v.z), double_from_float1(v.w));
}

template <unsigned N>
const VecN<t_jit_float64, N> double_from_float(const VecN<t_jit_float32, N> &v) {
	VecN<t_jit_float64, N> res;
	for(int i=0; i < N; i++) {
		res.v[i] = double_from_float1(v.v[i]);
	}
	return res;
}

	
#endif // JIT_CODEGEN_VEC_CONVERSION_HPP	
