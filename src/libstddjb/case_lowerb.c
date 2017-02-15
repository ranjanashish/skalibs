/* ISC license. */

#include <sys/types.h>
#include <skalibs/bytestr.h>

void case_lowerb (register char *s, size_t len)
{
  unsigned char const d = 'a' - 'A' ;
  while (len--)
  {
    if (('A' <= *s) && (*s <= 'Z')) *s += d ;
    ++s ;
  }
}
