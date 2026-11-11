// sdk/libc/strlen.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8510-0x5c85b4
#include <string.h>
#include "sdk/libc/strlen.h"

// SDK libc.a(strlen.o): strlen  [fuzzy 1.000 match]
// 0x05c8510 (0xa4 bytes)
size_t strlen(char *__s)

{
  char *pcVar2;
  longlong lVar1;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar1 = (longlong)(int)__s;
  for (uVar4 = -lVar1 & 7; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = (char *)lVar1;
    lVar1 = lVar1 + 1;
    if (*pcVar2 == '\0') {
      return (int)pcVar2 - (int)__s;
    }
  }
  dataCacheBlockTouch(lVar1);
  dataCacheBlockTouch(lVar1 + 0x80);
  do {
    dataCacheBlockTouch(lVar1 + 0x100);
    lVar5 = 0x10;
    do {
      puVar3 = (ulonglong *)lVar1;
      uVar4 = *puVar3;
      uVar4 = (ulonglong)
              LZCOUNT(~(uVar4 | 0x7f7f7f7f7f7f7f7f |
                       (uVar4 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
      lVar1 = lVar1 + 8;
      if (uVar4 < 8) {
        return (int)puVar3 + ((int)uVar4 - (int)__s);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  } while( true );
}


