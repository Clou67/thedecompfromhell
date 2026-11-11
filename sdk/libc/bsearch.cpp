// sdk/libc/bsearch.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5c4d8c-0x5c4ec8
#include "sdk/libc/bsearch.h"

// SDK libc.a(bsearch.o): bsearch  [fuzzy 1.000 match]
// 0x05c4d8c (0x108 bytes)
int FUN_005c4d8c(undefined4 param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    do {
      while( true ) {
        uVar1 = (param_3 << 0x20) >> 0x21;
        uVar3 = (uint)param_3 >> 1;
        iVar4 = param_2 + uVar3 * param_4;
        iVar2 = (*(code *)*param_5)(param_1,iVar4);
        if (-1 < iVar2) break;
        param_3 = uVar1;
        if (uVar3 == 0) {
          return 0;
        }
      }
      param_2 = iVar4 + param_4;
      if (iVar2 == 0) {
        return iVar4;
      }
      param_3 = (param_3 - uVar1) - 1;
    } while ((int)param_3 != 0);
  }
  return 0;
}


// 0x05c4e94 (0x34 bytes)
undefined4 FUN_005c4e94(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005c5900();
  uVar1 = FUN_005d58bc(uVar1);
  return uVar1;
}


