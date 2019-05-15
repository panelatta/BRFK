#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/BRFK.h"

int main(int argc, char* argv[]) {
    _uchar_* mem = (_uchar_*)malloc(sizeof(_uchar_) * _MEM_SIZE_);
    memset(mem, 0, sizeof(mem));

    _uchar_* p = mem + _OFFSET_;

    if (argc < 2) {
        printf("Usage: brfk <source file>\n");
        return EXIT_FAILURE;
    }

    FILE* _fp_ = fopen(argv[1], "r");
    if (!_fp_) {
        printf("Error #1: Cannot open source file\n");
        return EXIT_FAILURE;
    }

    while (!feof(_fp_)) {
        char _ins_ = fgetc(_fp_);
        _RUN_INS(mem, p, _MEM_SIZE_, _ins_, _fp_);
    }

    fclose(_fp_);
    free(mem);
    return EXIT_SUCCESS;
}