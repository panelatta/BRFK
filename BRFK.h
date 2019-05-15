#ifndef _BRFK_H_
#define _BRFK_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define _MEM_SIZE_ 1000000
#define _OFFSET_ 1000
typedef unsigned char _uchar_;

inline void _RUN_INS(_uchar_ *, _uchar_ *, int, char, FILE *);
inline int _POINTER_CROSS_CHECK(_uchar_ *, _uchar_ *, int);
inline int _POINTER_SHIFT_RIGHT(_uchar_ *, _uchar_ **, int);
inline int _POINTER_SHIFT_LEFT(_uchar_ *, _uchar_ **, int);
inline int _POINTER_ADD(_uchar_ *, _uchar_ *, int);
inline int _POINTER_MINUS(_uchar_ *, _uchar_ *, int);
inline int _POINTER_PUT(_uchar_ *, _uchar_ *, int);
inline int _POINTER_GET(_uchar_ *, _uchar_ *, int);
inline int _POINTER_JMP_LEFT(_uchar_ *, _uchar_ *, FILE *, int);
inline int _POINTER_JMP_RIGHT(_uchar_ *, _uchar_ *, FILE *, int);

#endif