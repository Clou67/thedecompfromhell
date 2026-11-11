// sdk/libc/strcmp.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc784-0x5cc8d8
#include "sdk/libc/strcmp.h"

// SDK libc.a(strcmp.o): strcmp  [exact match]
// 0x05cc784 (0x154 bytes)
undefined4 FUN_005cc784(ulonglong *param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((((uint)param_1 | (uint)param_2) & 7) == 0) {
    uVar6 = *param_2;
    if (uVar6 == *param_1) {
      uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
      do {
        if (uVar6 != 0xffffffffffffffff) {
          return 0;
        }
        param_2 = param_2 + 1;
        uVar5 = *param_2;
        param_1 = param_1 + 1;
        uVar6 = (uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f;
      } while (uVar5 == *param_1);
    }
  }
  else if (((((uint)param_1 | (uint)param_2) & 3) == 0) &&
          (uVar3 = *(uint *)param_2, uVar3 == *(uint *)param_1)) {
    uVar3 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f;
    do {
      if (uVar3 != 0xffffffff) {
        return 0;
      }
      param_2 = (ulonglong *)((int)param_2 + 4);
      uVar4 = *(uint *)param_2;
      param_1 = (ulonglong *)((int)param_1 + 4);
      uVar3 = (uVar4 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar4 | 0x7f7f7f7f;
    } while (uVar4 == *(uint *)param_1);
  }
  bVar1 = *(byte *)param_1;
  bVar2 = *(byte *)param_2;
  if (bVar1 == bVar2) {
    do {
      if (bVar1 == 0) {
        return 0;
      }
      param_1 = (ulonglong *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
      param_2 = (ulonglong *)((int)param_2 + 1);
      bVar2 = *(byte *)param_2;
    } while (bVar1 == bVar2);
  }
  if (bVar2 <= bVar1) {
    return 1;
  }
  return 0xffffffff;
}


