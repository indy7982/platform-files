/******************************
 *
 * platform dependent typedefs
 * WIN32
 *
 ******************************/
#ifndef PLATINCLUDED
#define PLATINCLUDED 1

#include <sys/types.h>
typedef unsigned char UCHAR ;
typedef unsigned char U8 ;
typedef signed char I8 ;
typedef unsigned short U16 ;
typedef signed short I16 ;
typedef unsigned int U32 ;
typedef signed int I32 ;
typedef unsigned __int64 U64 ;
typedef __int64 I64 ;
typedef unsigned long UXX ;  // size_t (64-bits on 64-bit PLATs)
typedef signed long IXX ;    // ssize_t
typedef float F32 ;
typedef double F64 ;
typedef long double F128 ;

#endif
