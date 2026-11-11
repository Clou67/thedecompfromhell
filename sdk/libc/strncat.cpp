// sdk/libc/strncat.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc9c4-0x5ccb28
#include "sdk/libc/strncat.h"

// SDK libc.a(strncat.o): strncat  [exact match]
// 0x05cc9c4 (0x164 bytes)
ulonglong FUN_005cc9c4(ulonglong param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar4;
  
  uVar6 = param_1 & 0xfffffff8;
  if ((param_1 & 7) != 0) {
    uVar5 = *(ulonglong *)uVar6 | -1L << ((8 - (param_1 & 7)) * 8 & 0x78);
    uVar5 = ~((uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f);
    if (uVar5 != 0) {
      lVar3 = uVar6 + ((ulonglong)LZCOUNT(uVar5) >> 3);
      puVar4 = (undefined1 *)lVar3;
      if ((param_3 != 0) && (cVar1 = *param_2, cVar1 != '\0')) {
        uVar6 = (ulonglong)param_3;
        do {
          pcVar2 = (char *)lVar3;
          lVar3 = lVar3 + 1;
          puVar4 = (undefined1 *)lVar3;
          *pcVar2 = cVar1;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) break;
          param_2 = param_2 + 1;
          cVar1 = *param_2;
        } while (cVar1 != '\0');
      }
      goto LAB_005cca68;
    }
    uVar6 = uVar6 + 8;
  }
  while (uVar5 = ~((*(ulonglong *)uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f |
                  *(ulonglong *)uVar6 | 0x7f7f7f7f7f7f7f7f), uVar5 == 0) {
    uVar6 = uVar6 + 8;
  }
  lVar3 = uVar6 + ((ulonglong)LZCOUNT(uVar5) >> 3);
  puVar4 = (undefined1 *)lVar3;
  if ((param_3 != 0) && (cVar1 = *param_2, cVar1 != '\0')) {
    uVar6 = (ulonglong)param_3;
    do {
      pcVar2 = (char *)lVar3;
      lVar3 = lVar3 + 1;
      puVar4 = (undefined1 *)lVar3;
      *pcVar2 = cVar1;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        *puVar4 = 0;
        return param_1 & 0xffffffff;
      }
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    } while (cVar1 != '\0');
  }
LAB_005cca68:
  *puVar4 = 0;
  return param_1 & 0xffffffff;
}


