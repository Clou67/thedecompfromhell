// sdk/libc/atexit.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5c4b94-0x5c4d8c
#include "sdk/libc/atexit.h"
#include "sdk/libc/abort.h"
#include "sdk/libc/malloc.h"
#include "sdk/xUnk.h"

// SDK libc.a(atexit.o): reallocate_extended_buf  [fuzzy 1.000 match]
// 0x05c4b94 (0x8c bytes)
bool FUN_005c4b94(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_0071c24c;
  iVar1 = *(int *)PTR_DAT_0071c24c;
  iVar2 = *(int *)(PTR_DAT_0071c24c + 4);
  iVar4 = FUN_005d579c(iVar1,((ulonglong)param_1 & 0x3fffffff) << 2);
  if (iVar4 != 0) {
    *(int *)puVar3 = iVar4;
    *(int *)(puVar3 + 4) = iVar4 + (iVar2 - iVar1);
    *(uint *)(puVar3 + 0x108) = param_1 + *(int *)(puVar3 + 0x108);
  }
  return iVar4 == 0;
}


// SDK libc.a(atexit.o): __cxa_atexit  [fuzzy 1.000 match]
// 0x05c4c20 (0x160 bytes)
undefined4 FUN_005c4c20(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_005cbbec(1);
  puVar3 = PTR_PTR_0071c250;
  puVar2 = PTR_DAT_0071c24c;
  iVar6 = ((int)((((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f)) + -1) >> 0x1f &
          0xfffffffcU) + 8;
  if (*(int *)PTR_DAT_0071c24c == 0) {
    if (PTR_DAT_0071c24c + 0x108 < (undefined *)(iVar6 + *(int *)PTR_PTR_0071c250)) {
      iVar6 = FUN_005c4b94(0x20);
      if (iVar6 != 0) {
        return 1;
      }
      uVar5 = FUN_005c499c(*(undefined4 *)(puVar2 + 4),param_1,param_2);
      *(undefined4 *)(puVar2 + 4) = uVar5;
    }
    else {
      uVar5 = FUN_005c499c(*(int *)PTR_PTR_0071c250,param_1,param_2);
      *(undefined4 *)puVar3 = uVar5;
    }
  }
  else {
    uVar1 = *(uint *)(PTR_DAT_0071c24c + 0x108);
    iVar4 = *(int *)(PTR_DAT_0071c24c + 4);
    if (*(int *)PTR_DAT_0071c24c + uVar1 < (uint)(iVar6 + iVar4)) {
      iVar6 = FUN_005c4b94(uVar1 + ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0));
      if (iVar6 != 0) {
        return 1;
      }
      iVar4 = *(int *)(puVar2 + 4);
    }
    uVar5 = FUN_005c499c(iVar4,param_1,param_2);
    *(undefined4 *)(puVar2 + 4) = uVar5;
  }
  FUN_005cbb70(1);
  return 0;
}


// 0x05c4d80 (0xc bytes)
void FUN_005c4d80(undefined8 param_1)

{
  FUN_005c4c20(param_1,0,0);
  return;
}


