/******************************
 *
 * platform dependent typedefs
 * Linux (64-bit)
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
typedef unsigned long U64 ;
typedef signed long I64 ;
typedef unsigned long UXX ;  // size_t (64-bits on 64-bit PLATs)
typedef signed long IXX ;    // ssize_t
typedef float F32 ;
typedef double F64 ;
typedef long double F128 ;
typedef __int128_t I128 ;
typedef __uint128_t U128 ;
typedef size_t SIZE_T ;

#endif
