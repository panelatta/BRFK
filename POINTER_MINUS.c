#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BRFK.h"

int _POINTER_MINUS(_uchar_* mem, _uchar_* p, int _MEMSIZE) {
    assert(_POINTER_CROSS_CHECK(mem, p, _MEMSIZE));
    *p--;

    return 1;
}