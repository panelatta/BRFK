#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/BRFK.h"

int _POINTER_JMP_LEFT(_uchar_* mem, _uchar_* p, FILE* fp, int _MEMSIZE) {
    assert(_POINTER_CROSS_CHECK(mem, p, _MEMSIZE));

    unsigned int _loop_start_offset = ftell(fp);

    char ch = 0;
    while ((ch = fgetc(fp)) != ']' && ch != EOF)
        continue;
    if (ch == EOF) {
        printf("Error #4: An unstop loop\n");
        exit(EXIT_FAILURE);
    }
    unsigned int _loop_end_offset = ftell(fp);

    fseek(fp, _loop_start_offset, SEEK_SET);
    while (*p) {
        
    }
}