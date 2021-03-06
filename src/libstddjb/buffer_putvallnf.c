/* ISC license. */

#include <sys/uio.h>
#include <errno.h>
#include <skalibs/siovec.h>
#include <skalibs/buffer.h>

int buffer_putvallnoflush (buffer *b, struct iovec const *v, unsigned int n)
{
  size_t r = buffer_putvnoflush(b, v, n) ;
  if (r < siovec_len(v, n))
  {
    buffer_unput(b, r) ;
    return (errno = ENOBUFS, 0) ;
  }
  return 1 ;
}
