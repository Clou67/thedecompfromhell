// sdk/libc/memcmp.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d0218-0x5d0368
#include <string.h>
#include "sdk/libc/memcmp.h"

// SDK libc.a(memcmp.o): memcmp  [fuzzy 0.977 match]
// 0x05d0218 (0x150 bytes)
int memcmp(void *__s1,void *__s2,size_t __n)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar5 = (ulonglong)(int)__n;
  if (__n < 8) {
    if (__n == 0) {
      return 0;
    }
  }
  else {
    if ((((uint)__s1 | (uint)__s2) & 7) == 0) {
                    /* WARNING: Load size is inaccurate */
      uVar3 = *__s1;
                    /* WARNING: Load size is inaccurate */
      uVar8 = *__s2;
      uVar5 = uVar5 - 8;
      if (uVar3 != uVar8) {
LAB_005d0350:
        if (uVar8 <= uVar3) {
          return 1;
        }
        return -1;
      }
      __s1 = (void *)((int)__s1 + 8);
      __s2 = (void *)((int)__s2 + 8);
      uVar7 = uVar5 >> 3 & 0x1fffffff;
      if (7 < (uVar5 & 0xffffffff)) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar3 = *__s1;
                    /* WARNING: Load size is inaccurate */
          uVar8 = *__s2;
          uVar5 = uVar5 - 8;
          __s1 = (void *)((int)__s1 + 8);
          __s2 = (void *)((int)__s2 + 8);
          if (uVar3 != uVar8) goto LAB_005d0350;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iVar6 = (int)uVar5;
    }
    else {
      if ((((uint)__s1 | (uint)__s2) & 3) != 0) goto LAB_005d0288;
                    /* WARNING: Load size is inaccurate */
      uVar4 = *__s1;
                    /* WARNING: Load size is inaccurate */
      uVar9 = *__s2;
      uVar5 = uVar5 - 4;
      if (uVar4 != uVar9) {
LAB_005d0360:
        if (uVar4 < uVar9) {
          return -1;
        }
        return 1;
      }
      __s1 = (void *)((int)__s1 + 4);
      __s2 = (void *)((int)__s2 + 4);
      uVar3 = uVar5 >> 2 & 0x3fffffff;
      if (3 < (uVar5 & 0xffffffff)) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar4 = *__s1;
                    /* WARNING: Load size is inaccurate */
          uVar9 = *__s2;
          uVar5 = uVar5 - 4;
          __s1 = (void *)((int)__s1 + 4);
          __s2 = (void *)((int)__s2 + 4);
          if (uVar4 != uVar9) goto LAB_005d0360;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      iVar6 = (int)uVar5;
    }
    if (iVar6 == 0) {
      return 0;
    }
  }
LAB_005d0288:
  uVar5 = uVar5 & 0xffffffff;
                    /* WARNING: Load size is inaccurate */
  bVar1 = *__s1;
                    /* WARNING: Load size is inaccurate */
  bVar2 = *__s2;
  if (bVar1 == bVar2) {
    do {
      __s1 = (void *)((int)__s1 + 1);
      __s2 = (void *)((int)__s2 + 1);
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        return 0;
      }
                    /* WARNING: Load size is inaccurate */
      bVar1 = *__s1;
                    /* WARNING: Load size is inaccurate */
      bVar2 = *__s2;
    } while (bVar1 == bVar2);
  }
  if (bVar2 <= bVar1) {
    return 1;
  }
  return -1;
}


