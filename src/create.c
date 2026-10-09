#include "liblisp.h"
#include "private.h"

LIBLISP_API
lisp_t *lisp_create(void)
{
    return lisp_init();
}
