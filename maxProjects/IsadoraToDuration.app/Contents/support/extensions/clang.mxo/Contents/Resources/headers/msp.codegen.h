/*
	This is a stripped-down header based on the MaxAudioAPI
	For use within run-time code generation
*/

#include <max.codegen.h>

#define MSP64 1

// z_sampletype.h -- defines t_sample and friends copyright 1997-2010 Cycling '74

#ifndef _Z_SAMPLETYPE_H
#define _Z_SAMPLETYPE_H

/**	A float -- always a 32 bit floating point number.		@ingroup msp	*/
typedef float t_float;

/**	A double -- always a 64 bit floating point number.		@ingroup msp	*/
typedef double t_double;

/**	A sample value -- width determined by MSP version.		@ingroup msp	*/
#ifdef MSP64
typedef double t_sample; 
#else
typedef float t_sample;
#endif

// macro loop for checking for NAN/INF

// note: this may be platform-dependent

#define NAN_MASK 0x7F800000

#define NAN_CHECK(n,o) \
while (n--) { if ((*(o) & NAN_MASK) == NAN_MASK) *(o) = 0; (o)++; } // now post inc/dec -Rd jun 05

#define IS_DENORM_FLOAT(v)		((((*(unsigned long *)&(v))&0x7f800000)==0)&&((v)!=0.f))
#define IS_DENORM_DOUBLE(v)		((((((unsigned long *)&(v))[1])&0x7fe00000)==0)&&((v)!=0.))			

#define IS_NAN_FLOAT(v)			(((*(unsigned long *)&(v))&0x7f800000)==0x7f800000)
#define IS_NAN_DOUBLE(v)		(((((unsigned long *)&(v))[1])&0x7fe00000)==0x7fe00000) 

#define IS_DENORM_NAN_FLOAT(v)		(IS_DENORM_FLOAT(v)||IS_NAN_FLOAT(v))
#define IS_DENORM_NAN_DOUBLE(v)		(IS_DENORM_DOUBLE(v)||IS_NAN_DOUBLE(v))			

// currently all little endian processors are x86
#if defined(WIN_VERSION) || (defined(MAC_VERSION)&&TARGET_RT_LITTLE_ENDIAN)
#define DENORM_WANT_FIX		1
#endif

#ifdef DENORM_WANT_FIX

#define FIX_DENORM_FLOAT(v)		((v)=IS_DENORM_FLOAT(v)?0.f:(v))
#define FIX_DENORM_DOUBLE(v)	((v)=IS_DENORM_DOUBLE(v)?0.f:(v))

#define FIX_DENORM_NAN_FLOAT(v)		((v)=IS_DENORM_NAN_FLOAT(v)?0.f:(v))
#define FIX_DENORM_NAN_DOUBLE(v)	((v)=IS_DENORM_NAN_DOUBLE(v)?0.:(v))

#else

#define FIX_DENORM_FLOAT(v)		
#define FIX_DENORM_DOUBLE(v)	

#define FIX_DENORM_NAN_FLOAT(v)		
#define FIX_DENORM_NAN_DOUBLE(v)

#endif  // #ifdef DENORM_WANT_FIX

#if MSP64
#define IS_DENORM_SAMPLE(v)			IS_DENORM_DOUBLE(v)
#define IS_NAN_SAMPLE(v)			IS_NAN_DOUBLE(v)
#define IS_DENORM_NAN_SAMPLE(v)		IS_DENORM_NAN_DOUBLE(v)
#define FIX_DENORM_SAMPLE(v)		FIX_DENORM_DOUBLE(v)
#define FIX_DENORM_NAN_SAMPLE(v)	FIX_DENORM_NAN_DOUBLE(v)
#else
#define IS_DENORM_SAMPLE(v)			IS_DENORM_FLOAT(v)
#define IS_NAN_SAMPLE(v)			IS_NAN_FLOAT(v)
#define IS_DENORM_NAN_SAMPLE(v)		IS_DENORM_NAN_FLOAT(v)
#define FIX_DENORM_SAMPLE(v)		FIX_DENORM_FLOAT(v)
#define FIX_DENORM_NAN_SAMPLE(v)	FIX_DENORM_NAN_FLOAT(v)
#endif

#endif // _Z_SAMPLETYPE_H

// z_dsp.h -- the main header file for all DSP objects copyright 1997-2003 Cycling '74

// DSP services:

#ifndef _Z_DSP_H
#define _Z_DSP_H

#if C74_PRAGMA_STRUCT_PACKPUSH
    #pragma pack(push, 2)
#elif C74_PRAGMA_STRUCT_PACK
    #pragma pack(2)
#endif

// useful define

#ifndef PI
/** The pi constant.				@ingroup msp	*/
#define PI 3.14159265358979323846
#endif
#ifndef TWOPI
/** Twice the pi constant.			@ingroup msp	*/
#define TWOPI		6.28318530717958647692
#endif  // TWOPI
#ifndef PIOVERTWO
/** Half of the pi constant.		@ingroup msp	*/
#define PIOVERTWO	1.57079632679489661923
#endif  // PIOVERTWO

// system access prototypes

BEGIN_USING_C_LINKAGE 

// access to DSP system variables

/**	Query MSP for the maximum global vector (block) size.
	@ingroup	msp	
	@return		The maximum global vector size for the MSP environment.		*/
int sys_getmaxblksize(void);

/**	Query MSP for the current global vector (block) size.
	@ingroup	msp	
	@return		The current global vector size for the MSP environment.		*/
int sys_getblksize(void);

/**	Query MSP for the global sample rate.
	@ingroup	msp	
	@return		The global sample rate of the MSP environment.		*/
float sys_getsr(void);

void set_zero(float *dst, long n);
void set_zero64(double *dst, long n);

// memory utilities

void *t_resizebytes(char *old, long oldsize, long newsize);
void *t_getbytes(long size);
void *t_freebytes(void *fatso, long size);

END_USING_C_LINKAGE 

#if C74_PRAGMA_STRUCT_PACKPUSH
    #pragma pack(pop)
#elif C74_PRAGMA_STRUCT_PACK
    #pragma pack()
#endif

#endif // _Z_DSP_H

