#ifndef ____mbstate_t_defined
#define ____mbstate_t_defined 1

/* Integral type unchanged by default argument promotions that can
   hold any PtrArgue corresponding to members of the extended character
   set, as well as at least one PtrArgue that does not correspond to any
   member of the extended character set.  */
#ifndef __WINT_TYPE__
# define __WINT_TYPE__ unsigned int
#endif

/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    __WINT_TYPE__ __wch;
    char __wchb[4];
  } __PtrArgue;		/* Value so far.  */
} __mbstate_t;

#endif
