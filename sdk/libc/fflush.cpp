// sdk/libc/fflush.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c50cc-0x5c52f0
#include "sdk/libc/fflush.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/xUnk.h"

// SDK libc.a(fflush.o): fflush  [fuzzy 1.000 match]
// 0x05c50cc (0x224 bytes)
int FUN_005c50cc(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != (ushort *)0x0) {
    FUN_005cbc38(param_1);
    uVar1 = *param_1;
    if ((uVar1 & 0x2000) == 0) {
      FUN_005cbbbc(param_1);
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 4);
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar7 < uVar6) {
      do {
        iVar3 = FUN_005cfe6c(param_1[2],uVar7,uVar6 - uVar7);
        uVar7 = uVar7 + iVar3;
        if (iVar3 < 1) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
          *param_1 = *param_1 | 0x200;
          *(undefined4 *)(param_1 + 8) = uVar2;
          *(undefined4 *)(param_1 + 0xc) = uVar2;
          FUN_005cbbbc(param_1);
          return -1;
        }
        uVar6 = *(uint *)(param_1 + 8);
        *(longlong *)(param_1 + 0x24) = *(longlong *)(param_1 + 0x24) + (longlong)iVar3;
      } while (uVar7 < uVar6);
      uVar1 = *param_1;
      uVar7 = *(uint *)(param_1 + 4);
    }
    *(uint *)(param_1 + 0x18) = uVar7;
    *param_1 = (ushort)((((ulonglong)uVar1 << 0x20) >> 0x2e) << 0xe) |
               (ushort)((((ulonglong)uVar1 & 0x1fff) << 0x12) >> 0x10) >> 2;
    *(uint *)(param_1 + 8) = uVar7;
    *(uint *)(param_1 + 0xc) = uVar7;
    FUN_005cbbbc(param_1);
    return 0;
  }
  FUN_005cbbec(2);
  iVar3 = FUN_005c50cc(PTR_DAT_0071c268);
  iVar3 = iVar3 >> 0x1f;
  iVar4 = FUN_005c50cc(PTR_DAT_0071c26c);
  if (iVar4 < 0) {
    iVar3 = -1;
  }
  iVar4 = FUN_005c50cc(PTR_DAT_0071c270);
  if (iVar4 < 0) {
    iVar3 = -1;
  }
  for (iVar4 = *(int *)PTR_DAT_0071c274; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3c)) {
    while (iVar5 = FUN_005c50cc(iVar4), -1 < iVar5) {
      iVar4 = *(int *)(iVar4 + 0x3c);
      if (iVar4 == 0) goto LAB_005c52b4;
    }
    iVar3 = -1;
  }
LAB_005c52b4:
  FUN_005cbb70(2);
  return iVar3;
}


