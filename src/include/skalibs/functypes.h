/* ISC license. */

#ifndef FUNCTYPES_H
#define FUNCTYPES_H

#include <sys/types.h>
#include <sys/uio.h>

typedef int uintcmpfunc_t (unsigned int, unsigned int, void *) ;
typedef uintcmpfunc_t *uintcmpfunc_t_ref ;

typedef int cmpfunc_t (void const *, void const *, void *) ;
typedef cmpfunc_t *cmpfunc_t_ref ;

typedef void *dtokfunc_t (unsigned int, void *) ;
typedef dtokfunc_t *dtokfunc_t_ref ;

typedef int iterfunc_t (char *, void *) ;
typedef iterfunc_t *iterfunc_t_ref ;

typedef void freefunc_t (void *) ;
typedef freefunc_t *freefunc_t_ref ;

typedef int initfunc_t (void *) ;
typedef initfunc_t *initfunc_t_ref ;

typedef unsigned int uinitfunc_t (void *) ;
typedef uinitfunc_t *uinitfunc_t_ref ;

typedef ssize_t iofunc_t (int, char *, size_t) ;
typedef iofunc_t *iofunc_t_ref ;

typedef ssize_t iovfunc_t (int, struct iovec const *, unsigned int) ;
typedef iovfunc_t *iovfunc_t_ref ;

typedef size_t alliofunc_t (int, char *, size_t) ;
typedef alliofunc_t *alliofunc_t_ref ;

typedef size_t alliovfunc_t (int, struct iovec const *, unsigned int) ;
typedef alliovfunc_t *alliovfunc_t_ref ;

#endif
