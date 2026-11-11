// sdk/libc/strcat.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc44c-0x5cc578
#include "sdk/libc/strcat.h"

// SDK libc.a(strcat.o): strcat  [exact match]
// 0x05cc44c (0x12c bytes)
ulonglong FUN_005cc44c(ulonglong param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1 & 0xffffffff;
  uVar4 = param_1 & 0xfffffff8;
  if ((param_1 & 7) != 0) {
    uVar5 = *(ulonglong *)uVar4 | -1L << ((8 - (param_1 & 7)) * 8 & 0x78);
    uVar5 = ~((uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f);
    if (uVar5 != 0) {
      cVar1 = *param_2;
      lVar3 = uVar4 + ((ulonglong)LZCOUNT(uVar5) >> 3);
      *(char *)lVar3 = cVar1;
      while (cVar1 != '\0') {
        lVar3 = lVar3 + 1;
        param_2 = param_2 + 1;
        cVar1 = *param_2;
        *(char *)lVar3 = cVar1;
      }
      return uVar2;
    }
    uVar4 = uVar4 + 8;
  }
  while (uVar5 = ~((*(ulonglong *)uVar4 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f |
                  *(ulonglong *)uVar4 | 0x7f7f7f7f7f7f7f7f), uVar5 == 0) {
    uVar4 = uVar4 + 8;
  }
  cVar1 = *param_2;
  lVar3 = uVar4 + ((ulonglong)LZCOUNT(uVar5) >> 3);
  *(char *)lVar3 = cVar1;
  if (cVar1 == '\0') {
    return uVar2;
  }
  do {
    lVar3 = lVar3 + 1;
    param_2 = param_2 + 1;
    cVar1 = *param_2;
    *(char *)lVar3 = cVar1;
  } while (cVar1 != '\0');
  return uVar2;
}


