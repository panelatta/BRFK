#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "BRFK.h"

int _POINTER_SHIFT_RIGHT(_uchar_* mem, _uchar_** p, int _MEMSIZE) {
    assert(_POINTER_CROSS_CHECK(mem, ++(*p), _MEMSIZE));
    return 1;
}