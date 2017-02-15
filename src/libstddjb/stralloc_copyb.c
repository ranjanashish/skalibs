/* ISC license. */

#include <sys/types.h>
#include <string.h>
#include <skalibs/stralloc.h>

int stralloc_copyb (stralloc *sa, char const *s, size_t n)
{
  if (!stralloc_ready(sa, n)) return 0 ;
  memmove(sa->s, s, n) ;
  sa->len = n ;
  return 1 ;
}
