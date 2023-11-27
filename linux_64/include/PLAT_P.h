// Platforn dependent options for x86_64 platforms

#define ATDB_64BIT

// low level spinlock routines
#define MAX_BUSY_LOOPS 500
static inline int SpinTrylock(register pATDB_SPIN_t spin)
{
	register int oldval;

	asm volatile("xchgl %0,%1"
		: "=r" (oldval), "=m" (*spin)
		: "0" (1)
		: "memory");

	return oldval ;
}

static inline void SpinUnlock(pATDB_SPIN_t spin)
{
	asm volatile("":::"memory");
	spin->lock = 0;
}

static inline void SpinInit(pATDB_SPIN_t spin)
{
	memset(spin,0,sizeof(ATDB_SPIN_t)) ;
}

static inline int SpinIsLocked(pATDB_SPIN_t spin)
{
	return (spin->lock);
}

#include <sched.h>
static void yield_cpu() { sched_yield() ; }
