// sdk/libc/xfrprep.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c91f4-0x5c9568
#include "sdk/libc/xfrprep.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/mUnk3.h"

// SDK libc.a(xfrprep.o): _Frprep  [fuzzy 1.000 match]
// 0x05c91f4 (0x374 bytes)
undefined4 FUN_005c91f4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <=
       *(ulonglong *)(param_1 + 0x24)) &&
     (*(ulonglong *)(param_1 + 0x24) < (ulonglong)*(uint *)(param_1 + 0x30))) {
    return 1;
  }
  uVar5 = *param_1;
  if ((uVar5 & 0x100) != 0) {
    return 0;
  }
  if ((uVar5 & 0xa001) != 1) {
    *param_1 = ((short)uVar5 >> 0xf & 0xc000U) + 0x4200 | uVar5;
    return 0xffffffff;
  }
  if ((uVar5 & 0x800) == 0) {
    uVar6 = (int)param_1 + 0x43;
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar6 == *(uint *)(param_1 + 4)) {
      iVar2 = *(int *)PTR_PTR_0071c29c;
      if (iVar2 != 0) {
        uVar4 = FUN_005d5838(iVar2);
        *(uint *)(param_1 + 4) = uVar4;
        if (uVar4 != 0) {
          *param_1 = *param_1 | 0x40;
          *(ulonglong *)(param_1 + 0x24) = (ulonglong)uVar4 + *(longlong *)(param_1 + 0x2c);
          *(uint *)(param_1 + 6) = uVar4 + iVar2;
          *(uint *)(param_1 + 0x18) = uVar4;
          *(uint *)(param_1 + 0x16) = uVar4;
          goto LAB_005c9280;
        }
      }
      *(uint *)(param_1 + 4) = uVar6;
      *(ushort **)(param_1 + 6) = param_1 + 0x22;
      uVar4 = uVar6;
    }
LAB_005c9280:
    uVar5 = param_1[0x32];
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x30) = uVar4;
    if ((uVar5 & 1) != 0) goto LAB_005c93cc;
LAB_005c92a0:
    if ((uVar5 & 2) != 0) goto LAB_005c9418;
LAB_005c92b0:
    iVar2 = *(int *)(param_1 + 6);
    if ((*(ulonglong *)(param_1 + 0x2c) < (ulonglong)(longlong)(int)(iVar2 - uVar4)) &&
       ((uVar5 & 4) == 0)) {
      FUN_005cfb10(param_1[2],0,0);
      uVar4 = *(uint *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 6);
      goto LAB_005c92d8;
    }
  }
  else {
    uVar5 = param_1[0x32];
    uVar4 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x30) = uVar4;
    if ((uVar5 & 1) == 0) goto LAB_005c92a0;
LAB_005c93cc:
    FUN_005cfb10(param_1[2],(int)*(undefined8 *)(param_1 + 0x24) - uVar4,0);
    uVar1 = param_1[0x32];
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = uVar1 & 0xfffe;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x32] = uVar5;
    if ((uVar1 & 2) == 0) goto LAB_005c92b0;
LAB_005c9418:
    iVar2 = *(int *)(param_1 + 6);
  }
  param_1[0x32] = uVar5 | 2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
LAB_005c92d8:
  iVar2 = FUN_005cfc44(param_1[2],uVar4,iVar2 - uVar4);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
    *param_1 = *param_1 | 0x4200;
  }
  else {
    if (iVar2 != 0) {
      *param_1 = *param_1 | 0x5000;
      if ((param_1[0x32] & 2) != 0) {
        *(int *)(param_1 + 0x30) = iVar2 + (int)*(undefined8 *)(param_1 + 0x24);
        *(int *)(param_1 + 10) = iVar2 + *(int *)(param_1 + 4);
        *(longlong *)(param_1 + 0x28) = (longlong)iVar2;
        return 1;
      }
      uVar4 = *(int *)(param_1 + 4) + iVar2;
      param_1[0x32] = param_1[0x32] | 2;
      *(longlong *)(param_1 + 0x28) = (longlong)iVar2;
      *(uint *)(param_1 + 0x30) = uVar4;
      *(int *)(param_1 + 8) = (int)*(ulonglong *)(param_1 + 0x24);
      *(uint *)(param_1 + 10) = uVar4;
      if (*(ulonglong *)(param_1 + 0x24) <= (ulonglong)uVar4) {
        return 1;
      }
      FUN_005cfb10(param_1[2],(int)*(undefined8 *)(param_1 + 0x2c),0);
    }
    uVar3 = 0;
    *param_1 = (ushort)((((ulonglong)*param_1 << 0x20) >> 0x2d) << 0xd) |
               (ushort)((((ulonglong)*param_1 & 0xfff) << 0x13) >> 0x10) >> 3 | 0x4100;
  }
  return uVar3;
}


