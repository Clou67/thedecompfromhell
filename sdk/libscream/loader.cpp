// sdk/libscream/loader.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x53c1f0-0x53c4e0
#include "sdk/libscream/loader.h"
#include "sdk/lUnk.h"

// SDK libscream.a(loader.ppu.o): snd_MemAlloc  [exact match]
// 0x053c1f0 (0x2c bytes)
undefined8 FUN_0053c1f0(undefined4 param_1)

{
  FUN_0054fdc4(param_1);
  return 0;
}


// 0x053c21c (0xec bytes)
ulonglong FUN_0053c21c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_005437b4(param_1,param_2);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053c308 (0xec bytes)
ulonglong FUN_0053c308(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_00544198(param_1,param_2);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053c3f4 (0xec bytes)
ulonglong FUN_0053c3f4(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_00542478(param_1,param_2);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


