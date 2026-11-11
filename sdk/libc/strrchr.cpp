// sdk/libc/strrchr.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c85b4-0x5c8700
#include "sdk/libc/strrchr.h"

// SDK libc.a(strrchr.o): strrchr  [fuzzy 1.000 match]
// 0x05c85b4 (0x14c bytes)
ulonglong FUN_005c85b4(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  param_2 = param_2 & 0xff;
  uVar4 = 0xffffffffffffffff;
  dataCacheBlockTouch(param_1);
  uVar3 = -param_1 & 7;
  dataCacheBlockTouch(param_1 + 0x80);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    pbVar2 = (byte *)param_1;
    if (*pbVar2 == param_2) {
      uVar4 = param_1;
    }
    param_1 = param_1 + 1;
    if ((ulonglong)*pbVar2 == 0) {
      if ((uVar4 + 1 & 0xffffffff) == 0) {
        return 0;
      }
      return uVar4;
    }
  }
  uVar3 = param_2 << 8 | param_2;
  uVar3 = uVar3 << 0x10 | uVar3;
  do {
    dataCacheBlockTouch(param_1 + 0x100);
    lVar6 = 0x10;
    do {
      uVar1 = *(ulonglong *)param_1;
      uVar5 = (ulonglong)
              LZCOUNT(~(uVar1 | 0x7f7f7f7f7f7f7f7f |
                       (uVar1 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
      uVar1 = uVar1 ^ (uVar3 << 0x20 | uVar3);
      uVar1 = (ulonglong)
              LZCOUNT(~(uVar1 | 0x7f7f7f7f7f7f7f7f |
                       (uVar1 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
      if ((uVar5 < uVar1) || ((uVar1 < 8 && (uVar4 = param_1 + uVar1, uVar5 != 8)))) {
        uVar3 = ~uVar4 & 7;
        if ((uVar4 + 1 & 0xffffffff) == 0) {
          return 0;
        }
        uVar5 = uVar4;
        if (uVar3 != 0) {
          do {
            uVar5 = uVar5 + 1;
            if ((ulonglong)*(byte *)uVar5 == 0) {
              return uVar4;
            }
            if (*(byte *)uVar5 == param_2) {
              uVar4 = uVar5;
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          return uVar4;
        }
        return uVar4;
      }
      param_1 = param_1 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  } while( true );
}


