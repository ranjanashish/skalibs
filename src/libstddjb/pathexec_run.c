/* ISC license. */

#include <stdlib.h>
#include <skalibs/config.h>
#include <skalibs/posixplz.h>
#include <skalibs/djbunix.h>

void pathexec_run (char const *file, char const *const *argv, char const *const *envp)
{
  char const *path = getenv("PATH") ;
  if (!path) path = SKALIBS_DEFAULTPATH ;
  execvep(file, argv, envp, path) ;
}
