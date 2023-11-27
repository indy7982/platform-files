// bsrl.h djl 040528
// Bit scan reverse long (bsrl) x86 instruction scans for the highest bit in
// a long word (32-bit).  Must NOT call this routine with 0 mask!
// 051213 - Changed to _BSR
// 090309 - Try 64-bit assembly

#ifdef ATDB_64BIT
static __inline__ U32 _BSR(U64 num)
{
	__asm __volatile("bsrq %1,%0" : "=r" (num) : "rm" (num)) ;
	return((U32)num) ;
}

/********
  if ( num & 0xffffffff00000000ULL   ) { result += 32 ; num >>= 32 ; }
  if ( num & 0xffff0000              ) { result += 16 ; num >>= 16 ; }
  if ( num & 0xff00                  ) { result +=  8 ; num >>= 8  ; }
  if ( num & 0xf0                    ) { result +=  4 ; num >>= 4  ; }
  if ( num & 0xc                     ) { result +=  2 ; num >>= 2  ; }
  if ( num & 0x2                     )   result +=  1 ;
********/


#else

//Assembly version
static __inline__ U32 _BSR(U32 num)
{
        U32 result ;
        __asm __volatile("bsrl %1,%0" : "=r" (result) : "rm" (num)) ;
        return (result) ;
}

#endif

