#pragma once
// sdk/libc/mbrtowc.h
#include "types.h"

// ---- types
typedef struct __mbstate_t mbstate_t;

// ---- globals
extern pointer PTR_DAT_0071c554; /* 0x71c554 */

// ---- functions
byte * _mbrtowc(undefined2 *param_1,byte *param_2,uint param_3,uint *param_4, undefined4 *param_5);
size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p);
