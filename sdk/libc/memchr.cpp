// sdk/libc/memchr.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c5984-0x5c5ad0
#include "sdk/libc/memchr.h"

// SDK libc.a(memchr.o): memchr  [fuzzy 1.000 match]
// 0x05c5984 (0x14c bytes)
longlong FUN_005c5984(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  param_2 = param_2 & 0xff;
  if ((param_3 & 0xffffffff) != 0) {
    if ((param_3 & 0xffffffff) < 8) {
      do {
        if (param_2 == *(byte *)param_1) {
          return param_1;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return 0;
    }
    dataCacheBlockTouch(param_1);
    uVar4 = -param_1 & 7;
    if (uVar4 != 0) {
      param_3 = param_3 - uVar4;
      do {
        if (*(byte *)param_1 == param_2) {
          return param_1;
        }
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if ((param_3 & 0xffffffff) < 8) goto LAB_005c5aac;
    }
    uVar3 = param_1 + param_3;
    uVar2 = param_2 << 8 | param_2;
    uVar2 = uVar2 << 0x10 | uVar2;
    uVar4 = -param_1 & 0x7f;
    if (uVar4 == 0) goto LAB_005c5a44;
    if (uVar4 < (param_3 & 0xffffffff)) {
      param_3 = param_3 - uVar4;
      uVar4 = uVar4 >> 3;
    }
    else {
      uVar4 = param_3 >> 3;
      param_3 = param_3 & 7;
    }
    while( true ) {
      do {
        uVar1 = *(ulonglong *)param_1 ^ (uVar2 << 0x20 | uVar2);
        uVar1 = (ulonglong)
                LZCOUNT(~(uVar1 | 0x7f7f7f7f7f7f7f7f |
                         (uVar1 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
        if (uVar1 < 8) {
          return param_1 + uVar1;
        }
        param_1 = param_1 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if ((longlong)(uVar3 & 0xfffffffffffffff8) <= param_1) break;
LAB_005c5a44:
      dataCacheBlockTouch(param_1 + 0x80);
      uVar4 = param_3 >> 3;
      if (0xf < (uVar4 & 0xffffffff)) {
        uVar4 = 0x10;
      }
      param_3 = param_3 + uVar4 * -8;
    }
    if ((param_3 & 0xffffffff) != 0) {
LAB_005c5aac:
      do {
        if (param_2 == *(byte *)param_1) {
          return param_1;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return 0;
    }
  }
  return 0;
}


