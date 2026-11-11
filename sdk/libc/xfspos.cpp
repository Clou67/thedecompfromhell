// sdk/libc/xfspos.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c9568-0x5c9998
#include "sdk/libc/xfspos.h"
#include "sdk/libc/asctime.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/vUnk.h"

// SDK libc.a(xfspos.o): _Fspos  [fuzzy 1.000 match]
// 0x05c9568 (0x430 bytes)
undefined4 FUN_005c9568(ushort *param_1,uint *param_2,longlong param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ushort uVar9;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (((*param_1 & 3) == 0) || (iVar3 = FUN_005c50cc(param_1), iVar3 != 0)) goto LAB_005c9730;
  if (param_2 != (uint *)0x0) {
    param_3 = param_3 + (ulonglong)*param_2;
  }
  uVar9 = param_1[0x32] & 0xfffa;
  param_1[0x32] = uVar9;
  iVar3 = (int)param_3;
  if (param_4 == 1) {
    uVar8 = (longlong)iVar3 + *(longlong *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x24) = uVar8;
    if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <= uVar8) &&
       (uVar8 < *(uint *)(param_1 + 0x30))) {
      uVar9 = uVar9 | 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar3;
      param_1[0x32] = uVar9;
    }
    if ((uVar9 & 2) != 0) {
      param_3 = param_3 + *(longlong *)(param_1 + 0x2c);
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
    }
    iVar3 = (int)param_3;
    if ((*param_1 & 0x1000) != 0) {
      iVar5 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 0xe),(int)param_1 + 0x43);
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x30);
      }
      iVar6 = FUN_005c8bc4(param_1,*(longlong *)(param_1 + 0x24) - param_3 & 0xffffffff,iVar6);
      iVar7 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x16));
      iVar3 = iVar3 - (iVar5 + iVar6 + iVar7);
    }
LAB_005c961c:
    iVar3 = FUN_005cfb10(param_1[2],iVar3,param_4);
    uVar9 = param_1[0x32];
  }
  else {
    if (param_4 == 0) {
      if (iVar3 < 0) {
        if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <=
             *(ulonglong *)(param_1 + 0x24)) &&
           (*(ulonglong *)(param_1 + 0x24) < (ulonglong)*(uint *)(param_1 + 0x30))) {
          param_1[0x32] = uVar9 | 1;
        }
      }
      else {
        uVar8 = param_3 + (ulonglong)*(uint *)(param_1 + 4) & 0xffffffff;
        lVar2 = *(longlong *)(param_1 + 0x24);
        *(ulonglong *)(param_1 + 0x24) = uVar8;
        *(ulonglong *)(param_1 + 0x2c) = uVar8 - lVar2;
        if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <= uVar8) &&
           (uVar8 < *(uint *)(param_1 + 0x30))) {
          param_1[0x32] = uVar9 | 1;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)(uVar8 - lVar2);
        }
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
      }
      goto LAB_005c961c;
    }
    if (param_4 == 2) {
      if (-1 < iVar3) {
        param_1[0x32] = uVar9 | 4;
      }
      iVar3 = FUN_005cfb10(param_1[2],iVar3,2);
      uVar8 = (ulonglong)(uint)(iVar3 + *(int *)(param_1 + 4));
      lVar2 = *(longlong *)(param_1 + 0x24);
      *(ulonglong *)(param_1 + 0x24) = uVar8;
      *(ulonglong *)(param_1 + 0x2c) = uVar8 - lVar2;
      if ((uVar8 < (ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) ||
         (*(uint *)(param_1 + 0x30) <= uVar8)) {
        uVar9 = param_1[0x32];
      }
      else {
        uVar9 = param_1[0x32] | 1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)(uVar8 - lVar2);
        param_1[0x32] = uVar9;
      }
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
    }
    else if (param_4 < 3) goto LAB_005c961c;
  }
  if ((uVar9 & 2) == 0) {
    *(longlong *)(param_1 + 0x2c) = (longlong)iVar3;
  }
  if (iVar3 == -1) {
LAB_005c9730:
    puVar4 = (undefined4 *)FUN_005d5904();
    *puVar4 = 0x8001001e;
    return 0xffffffff;
  }
  if ((*(ulonglong *)(param_1 + 0x24) <
       (ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) ||
     ((ulonglong)*(uint *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x24))) {
    uVar9 = *param_1;
  }
  else {
    uVar9 = *param_1;
    if ((uVar9 & 0x2000) == 0) goto LAB_005c96c4;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(int *)(param_1 + 0xe) = (int)param_1 + 0x43;
  *(ushort **)(param_1 + 0x10) = param_1 + 0x14;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
LAB_005c96c4:
  if (param_2 != (uint *)0x0) {
    *(uint *)(param_1 + 0x1a) = param_2[1];
    param_1[0x1c] = *(ushort *)(param_2 + 2);
    param_1[0x1d] = *(ushort *)((int)param_2 + 10);
  }
  *param_1 = uVar9 & 0xceff;
  return 0;
}


