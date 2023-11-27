// Platforn dependent options for WIN32 (x86) platforms

// low level spinlock routines
#include <windows.h>
#include <process.h>
#define __BIG_ENDIAN 4321
#define __LITTLE_ENDIAN 1234
#define __BYTE_ORDER __LITTLE_ENDIAN
#define MAX_BUSY_LOOPS 100
static int SpinTrylock(volatile pATDB_SPIN_t spin)
{
	register int oldval;

	oldval = InterlockedExchange((LONG*) &spin->lock,1) ;

	return oldval ;
}

static void SpinUnlock(pATDB_SPIN_t spin)
{
	spin->lock = 0;
}

static void SpinInit(pATDB_SPIN_t spin)
{
	memset(spin,0,sizeof(ATDB_SPIN_t)) ;
}

static int SpinIsLocked(pATDB_SPIN_t spin)
{
	return (spin->lock);
}

static void yield_cpu() { Sleep(0) ; }