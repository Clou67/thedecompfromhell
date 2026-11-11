// sdk/libc/strcpy.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc8d8-0x5cc9c4
#include <string.h>
#include "sdk/libc/strcpy.h"

// SDK libc.a(strcpy.o): strcpy  [exact match]
// 0x05cc8d8 (0xec bytes)
char * strcpy(char *__dest,char *__src)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  puVar5 = (ulonglong *)__dest;
  if ((((uint)__dest | (uint)__src) & 7) == 0) {
    uVar6 = *(ulonglong *)__src;
    uVar3 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
    while (uVar3 == 0xffffffffffffffff) {
      *puVar5 = uVar6;
      __src = (char *)((int)__src + 8);
      uVar6 = *(ulonglong *)__src;
      puVar5 = puVar5 + 1;
      uVar3 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
    }
  }
  else if ((((uint)__dest | (uint)__src) & 3) == 0) {
    uVar2 = *(uint *)__src;
    puVar4 = (uint *)__dest;
    while (((uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f) == 0xffffffff) {
      *puVar4 = uVar2;
      __src = (char *)((int)__src + 4);
      puVar4 = puVar4 + 1;
      uVar2 = *(uint *)__src;
    }
    cVar1 = *__src;
    __src = (char *)((int)__src + 1);
    *(char *)puVar4 = cVar1;
    puVar5 = (ulonglong *)((int)puVar4 + 1);
    if (cVar1 == '\0') {
      return __dest;
    }
  }
  do {
    cVar1 = *__src;
    __src = (char *)((int)__src + 1);
    *(char *)puVar5 = cVar1;
    puVar5 = (ulonglong *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  return __dest;
}


