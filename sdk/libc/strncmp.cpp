// sdk/libc/strncmp.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5ccb28-0x5cccec
#include "sdk/libc/strncmp.h"

// SDK libc.a(strncmp.o): strncmp  [exact match]
// 0x05ccb28 (0x1c4 bytes)
undefined4 FUN_005ccb28(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (7 < (param_3 & 0xffffffff)) {
    uVar4 = (uint)param_3;
    if ((((uint)param_1 | (uint)param_2) & 7) == 0) {
      uVar8 = (param_3 << 0x20) >> 0x23;
      uVar7 = *param_1;
      param_3 = param_3 & 7;
      if (uVar4 >> 3 != 0) {
        if (uVar7 == *param_2) {
          uVar7 = (uVar7 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar7 | 0x7f7f7f7f7f7f7f7f;
          do {
            if (uVar7 != 0xffffffffffffffff) {
              return 0;
            }
            param_2 = param_2 + 1;
            uVar5 = *param_2;
            param_1 = param_1 + 1;
            uVar7 = (uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_005ccbd4;
          } while (*param_1 == uVar5);
        }
        param_3 = 8;
      }
    }
    else {
      if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_005ccbdc;
      uVar8 = (param_3 << 0x20) >> 0x22;
      uVar3 = *(uint *)param_1;
      param_3 = param_3 & 3;
      if (uVar4 >> 2 != 0) {
        if (uVar3 == *(uint *)param_2) {
          uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f;
          do {
            if (uVar4 != 0xffffffff) {
              return 0;
            }
            param_2 = (ulonglong *)((int)param_2 + 4);
            uVar3 = *(uint *)param_2;
            param_1 = (ulonglong *)((int)param_1 + 4);
            uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_005ccbd4;
          } while (*(uint *)param_1 == uVar3);
        }
        param_3 = 4;
      }
    }
  }
LAB_005ccbd4:
  if ((int)param_3 == 0) {
    return 0;
  }
LAB_005ccbdc:
  bVar1 = *(byte *)param_1;
  bVar2 = *(byte *)param_2;
  if (bVar1 == bVar2) {
    param_3 = param_3 & 0xffffffff;
    do {
      if (bVar1 == 0) {
        return 0;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return 0;
      }
      param_1 = (ulonglong *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
      param_2 = (ulonglong *)((int)param_2 + 1);
      bVar2 = *(byte *)param_2;
    } while (bVar1 == bVar2);
  }
  uVar6 = 1;
  if (bVar1 < bVar2) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


