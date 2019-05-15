#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "BRFK.h"

void _RUN_INS(_uchar_* mem, _uchar_* p, int _MEMSIZE, char _ins_, FILE* fp) {
    switch (_ins_) {
        case '>': _POINTER_SHIFT_RIGHT(mem, p, _MEM_SIZE_); break;
        case '<': _POINTER_SHIFT_LEFT(mem, p, _MEM_SIZE_); break;
        case '+': _POINTER_ADD(mem, p, _MEM_SIZE_); break;
        case '-': _POINTER_MINUS(mem, p, _MEM_SIZE_); break;
        case '.': _POINTER_PUT(mem, p, _MEM_SIZE_); break;
        case ',': _POINTER_GET(mem, p, _MEM_SIZE_); break;
        case '[': _POINTER_JMP_LEFT(mem, p, _MEM_SIZE_, fp); break;
        case ']':
            _POINTER_JMP_RIGHT(mem, p, _MEM_SIZE_, fp);
            break;
        dafault:
            printf("Error #5: Unexpected input\n");
            return EXIT_FAILURE;
    }
}