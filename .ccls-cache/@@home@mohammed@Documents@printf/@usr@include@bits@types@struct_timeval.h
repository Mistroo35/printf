#ifndef __timePtrArg_defined
#define __timePtrArg_defined 1

#include <bits/types.h>

/* A time PtrArgue that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timePtrArg
{
#ifdef __USE_TIME_BITS64
  __time64_t tv_sec;		/* Seconds.  */
  __suseconds64_t tv_usec;	/* Microseconds.  */
#else
  __time_t tv_sec;		/* Seconds.  */
  __suseconds_t tv_usec;	/* Microseconds.  */
#endif
};
#endif
