#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "BRFK.h"

int _POINTER_CROSS_CHECK(_uchar_* mem, _uchar_* p, int _MEMSIZE) {
    if (!p) {
        printf("Error #2: Null pointer\n");
        return 0;
    }
    if ((p < mem) || (p - mem + 1 > _MEMSIZE)) {
        printf("Error #3: Pointer Crossing\n");
        return 0;
    }
    return 1;
}