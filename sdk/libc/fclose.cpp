// sdk/libc/fclose.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5c4f10-0x5c50cc
#include "sdk/libc/fclose.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/libc/xfoprep.h"
#include "sdk/libc/xlv2mtx.h"
#include "sdk/mUnk3.h"
#include "sdk/xUnk.h"

// SDK libc.a(fclose.o): fclose  [fuzzy 1.000 match]
// 0x05c4f10 (0x14c bytes)
undefined4 FUN_005c4f10(ushort *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*param_1 & 3) == 0) || ((short)param_1[2] < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_005c50cc(param_1);
    FUN_005cbbec(2);
    uVar1 = *(undefined4 *)(param_1 + 0x22);
    FUN_005d03b4(uVar1);
    if ((*param_1 & 0x40) != 0) {
      FUN_005d580c(*(undefined4 *)(param_1 + 4));
    }
    param_1[4] = 0;
    param_1[5] = 0;
    iVar3 = FUN_005cf554(param_1[2]);
    if (iVar3 != 0) {
      uVar2 = 0xffffffff;
    }
    FUN_005c8e64(param_1);
    FUN_005d0370(uVar1);
    FUN_005d045c(uVar1);
    if (((param_1 != (ushort *)PTR_DAT_0071c258) && (param_1 != (ushort *)PTR_DAT_0071c25c)) &&
       (param_1 != (ushort *)PTR_DAT_0071c260)) {
      FUN_005d580c(uVar1);
    }
    FUN_005cbb70(2);
  }
  return uVar2;
}


// SDK libc.a(fclose.o): _close_all_FILE  [fuzzy 1.000 match]
// 0x05c505c (0x70 bytes)
void FUN_005c505c(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071c264;
  iVar2 = *(int *)PTR_DAT_0071c264;
  puVar3 = PTR_DAT_0071c258;
  while (PTR_DAT_0071c258 = puVar3, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x3c);
    FUN_005c4f10(iVar2);
    iVar2 = iVar1;
    puVar3 = PTR_DAT_0071c258;
  }
  *(undefined4 *)puVar4 = 0;
  FUN_005c4f10(puVar3);
  FUN_005c4f10(PTR_DAT_0071c25c);
  FUN_005c4f10(PTR_DAT_0071c260);
  return;
}


