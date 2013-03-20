/*
	This is a stripped-down header based on the MaxAPI
	For use within run-time code generation
*/

#ifndef _EXT_H_
#define _EXT_H_

#ifndef _EXT_PREFIX_H_
#define _EXT_PREFIX_H_

////////////////////////////////////////////////////////////////////////////////
// macros

#ifndef WIN_VERSION
#define MAC_VERSION 1 // we'll assume that if we aren't requesting the windows version, that we build the mac version(s) of the product
#endif  // WIN_VERSION

#ifdef __cplusplus
/**
	Ensure that any definitions following this macro use a C-linkage, not a C++ linkage.
	The Max API uses C-linkage.
	This is important for objects written in C++ or that use a C++ compiler.
	This macro must be balanced with the #END_USING_C_LINKAGE macro.
	@ingroup misc
*/
#define BEGIN_USING_C_LINKAGE \
	extern "C" {
#else
/**
	Ensure that any definitions following this macro use a C-linkage, not a C++ linkage.
	The Max API uses C-linkage.
	This is important for objects written in C++ or that use a C++ compiler.
	This macro must be balanced with the #END_USING_C_LINKAGE macro.
	@ingroup misc
*/
#define BEGIN_USING_C_LINKAGE
#endif // __cplusplus

#ifdef __cplusplus
/**
	Close a definition section that was opened using #BEGIN_USING_C_LINKAGE.
	@ingroup misc
*/
#define END_USING_C_LINKAGE \
	}
#else
/**
	Close a definition section that was opened using #BEGIN_USING_C_LINKAGE.
	@ingroup misc
*/
#define END_USING_C_LINKAGE
#endif // __cplusplus

////////////////////////////////////////////////////////////////////////////////
// Mac Target

#ifdef MAC_VERSION

// the C74_PRAGMA_STRUCT_PACK* macros are used to ensure that 
// Win32 builds of Max externals use a 2 byte struct packing 
// for all Max structs in projects that have a default struct 
// packing other than 2 (this is typically 4). On Macintosh
// the default byte packing is 4, and it is with this packing
// that all Max structs are packed on Macintosh. If for some 
// reason you are using a struct byte packing of something other
// than 4 on macintosh, there may be problems. Please let us
// know, and we can address this and the other Max header files to 
// ensure 4 byte struct packing on Macintosh in such a setting.
#define C74_PRAGMA_STRUCT_PACKPUSH	0
#define C74_PRAGMA_STRUCT_PACK		0
#define C74_STRUCT_PACK_SIZE		4

#endif // MAC_VERSION

////////////////////////////////////////////////////////////////////////////////
// Win32 Target

// the C74_PRAGMA_STRUCT_PACK* macros are used to ensure that 
// Win32 builds of Max externals use a 2 byte struct packing 
// for all Max structs in projects that have a default struct 
// packing other than 2 (this is typically 4). On Macintosh
// the default byte packing is 4, and it is with this packing
// that all Max structs are packed on Macintosh. If for some 
// reason you are using a struct byte packing of something other
// than 4 on macintosh, there may be problems. Please let us
// know, and we can address this and the other Max header files to 
// ensure 4 byte struct packing on Macintosh in such a setting.
#define C74_PRAGMA_STRUCT_PACKPUSH	0
#define C74_PRAGMA_STRUCT_PACK		1
#define C74_STRUCT_PACK_SIZE		2

#endif // WIN_VERSION

#endif // _EXT_PREFIX_H_



#ifdef __cplusplus
extern "C" {
#endif

#if C74_PRAGMA_STRUCT_PACKPUSH
    #pragma pack(push, 2)
#elif C74_PRAGMA_STRUCT_PACK
    #pragma pack(2)
#endif

#if C74_NO_CONST == 0
#define C74_CONST const
#else
#define C74_CONST
#endif

typedef void *(*method)(void *, ...);
typedef char *t_ptr;
typedef char *ptr;

typedef struct symbol
{
	char *s_name;			///< name: a c-string
	struct object *s_thing;	///< possible binding to a t_object
} Symbol, t_symbol;

typedef struct object t_object;
typedef struct maxclass t_class;

typedef enum {
	A_NOTHING = 0,	///< no type, thus no atom
	A_LONG,			///< long integer
	A_FLOAT,		///< 32-bit float
	A_SYM,			///< t_symbol pointer
	A_OBJ,			///< t_object pointer (for argtype lists; passes the value of sym)
	A_DEFLONG,		///< long but defaults to zero
	A_DEFFLOAT,		///< float, but defaults to zero
	A_DEFSYM,		///< symbol, defaults to ""
	A_GIMME,		///< request that args be passed as an array, the routine will check the types itself.
	A_CANT,			///< cannot typecheck args
	A_SEMI,			///< semicolon
	A_COMMA,		///< comma
	A_DOLLAR,		///< dollar
	A_DOLLSYM,		///< dollar
	A_GIMMEBACK,	///< request that args be passed as an array, the routine will check the types itself. can return atom value in final atom ptr arg. function returns long error code 0 = no err. see gimmeback_meth typedef

	A_DEFER	=		0x41,	///< A special signature for declaring methods. This is like A_GIMME, but the call is deferred.
	A_USURP =		0x42,	///< A special signature for declaring methods. This is like A_GIMME, but the call is deferred and multiple calls within one servicing of the queue are filtered down to one call.
	A_DEFER_LOW =	0x43,	///< A special signature for declaring methods. This is like A_GIMME, but the call is deferref to the back of the queue.
	A_USURP_LOW =	0x44	///< A special signature for declaring methods. This is like A_GIMME, but the call is deferred to the back of the queue and multiple calls within one servicing of the queue are filtered down to one call.
} e_max_atomtypes;

#define ATOM_MAX_STRLEN		(32768)

union word		
{
	long w_long;			///< long integer
	float w_float;			///< 32-bit float
	struct symbol *w_sym;	///< pointer to a symbol in the Max symbol table
	struct object *w_obj;	///< pointer to a #t_object or other generic pointer
};

typedef struct atom	
{
	short a_type;			///< a value as defined in #e_max_atomtypes
	union word a_w;			///< the actual data
} Atom, t_atom;

#if C74_PRAGMA_STRUCT_PACKPUSH
    #pragma pack(pop)
#elif C74_PRAGMA_STRUCT_PACK
    #pragma pack()
#endif

#if C74_NO_CONST == 0
#define C74_CONST const
#else
#define C74_CONST
#endif

t_symbol *gensym(C74_CONST char *s);
void post(char *fmt, ...);
void error(char *fmt, ...);

void object_post(t_object *x, char *s, ...);
void object_error(t_object *x, char *s, ...);
void object_warn(t_object *x, char *s, ...);

double systimer_gettime(void);

void *defer(void *ob,method fn,t_symbol *sym,short argc,t_atom *argv);
void *defer_low(void *ob,method fn,t_symbol *sym,short argc,t_atom *argv);

#ifndef TRUE
#define TRUE 	1
#endif
#ifndef FALSE
#define FALSE 	0
#endif

#define CLASS_BOX				gensym("box")
#define CLASS_NOBOX				gensym("nobox")

typedef enum {
	MAX_ERR_NONE =			0,	///< No error
	MAX_ERR_GENERIC =		-1,	///< Generic error
	MAX_ERR_INVALID_PTR =	-2,	///< Invalid Pointer
	MAX_ERR_DUPLICATE =		-3,	///< Duplicate
	MAX_ERR_OUT_OF_MEM =	-4	///< Out of memory
} e_max_errorcodes;
typedef long t_max_err;

#if C74_PRAGMA_STRUCT_PACKPUSH
    #pragma pack(push, 2)
#elif C74_PRAGMA_STRUCT_PACK
    #pragma pack(2)
#endif

t_symbol *class_nameget(t_class *c);
t_class *class_findbyname(t_symbol *name_space, t_symbol *classname);
void *object_new(t_symbol *name_space, t_symbol *classname, ...);
void *object_new_typed(t_symbol *name_space, t_symbol *classname, long ac, t_atom *av);
t_max_err object_free(void *x);
void *object_method(void *x, t_symbol *s, ...);
t_max_err object_method_typed(void *x, t_symbol *s, long ac, t_atom *av, t_atom *rv);

method object_getmethod(void *x, t_symbol *s);
t_symbol *object_classname(void *x);
t_symbol *object_namespace(t_object *x);	// return the namespace this object's class is part of
t_symbol *class_namespace(t_class *c);
void *object_attach(t_symbol *name_space, t_symbol *s, void *x);
t_max_err object_attach_byptr(void *x, void *registeredobject);
t_max_err object_detach(t_symbol *name_space, t_symbol *s, void *x);
t_max_err object_detach_byptr(void *x, void *registeredobject);
t_max_err object_notify(void *x, t_symbol *s, void *data);
t_class *object_class(void *x);
t_max_err object_getvalueof(void *x, long *ac, t_atom **av);
t_max_err object_setvalueof(void *x, long ac, t_atom *av);

t_max_err atom_setlong(t_atom *a, long b);
t_max_err atom_setfloat(t_atom *a, double b);
t_max_err atom_setsym(t_atom *a, t_symbol *b);				
t_max_err atom_setobj(t_atom *a, void *b);
long atom_getlong(t_atom *a);
float atom_getfloat(t_atom *a);
t_symbol *atom_getsym(t_atom *a);
void *atom_getobj(t_atom *a);
long atom_gettype(t_atom *a);

#if C74_PRAGMA_STRUCT_PACKPUSH
    #pragma pack(pop)
#elif C74_PRAGMA_STRUCT_PACK
    #pragma pack()
#endif

extern t_ptr sysmem_newptr(long size);
extern t_ptr sysmem_newptrclear(long size);
extern t_ptr sysmem_resizeptr(void *ptr, long newsize);
extern t_ptr sysmem_resizeptrclear(void *ptr, long newsize);
extern long sysmem_ptrsize(void *ptr);
extern void sysmem_freeptr(void *ptr);
extern void sysmem_copyptr(const void *src, void *dst, long bytes);

#ifdef __cplusplus
}
#endif

#endif /* _EXT_H_ */
