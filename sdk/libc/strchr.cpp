// sdk/libc/strchr.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc578-0x5cc784
#include <string.h>
#include "sdk/libc/strchr.h"

// SDK libc.a(strchr.o): strchr  [exact match]
// 0x05cc578 (0x20c bytes)
char * strchr(char *__s,int __c)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((uint)__s & 7) == 0) {
    uVar6 = *(ulonglong *)__s;
    if (((uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f) ==
        0xffffffffffffffff) {
      uVar5 = (longlong)__c & 0xffU | ((longlong)__c & 0xffU) << 8;
      uVar5 = uVar5 | uVar5 << 0x10;
      uVar5 = uVar5 | uVar5 << 0x20;
      uVar6 = uVar5 ^ uVar6;
      uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
      do {
        if (~uVar6 != 0) {
          return (char *)((int)__s + (int)((ulonglong)LZCOUNT(~uVar6) >> 3));
        }
        __s = (char *)((int)__s + 8);
        uVar7 = *(ulonglong *)__s;
        uVar6 = uVar5 ^ uVar7;
        uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
      } while (((uVar7 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar7 | 0x7f7f7f7f7f7f7f7f) ==
               0xffffffffffffffff);
    }
  }
  else if ((((uint)__s & 3) == 0) &&
          (uVar2 = *(uint *)__s,
          (uVar2 | 0x7f7f7f7f | (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f) == 0xffffffff)) {
    uVar6 = (ulonglong)(uint)__c & 0xff | ((ulonglong)(uint)__c & 0xff) << 8;
    uVar4 = (uint)uVar6 | (uint)(uVar6 << 0x10);
    uVar2 = uVar4 ^ uVar2;
    uVar2 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
    do {
      if (~uVar2 != 0) {
        return (char *)(((uint)LZCOUNT(~uVar2) >> 3) + (int)__s);
      }
      __s = (char *)((int)__s + 4);
      uVar3 = *(uint *)__s;
      uVar2 = uVar4 ^ uVar3;
      uVar2 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
    } while (((uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f) == 0xffffffff);
  }
  cVar1 = *__s;
  if ((char)__c == cVar1) {
    return (char *)(ulonglong *)__s;
  }
  do {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    __s = (char *)((int)__s + 1);
    cVar1 = *__s;
  } while ((char)__c != cVar1);
  return (char *)(ulonglong *)__s;
}


