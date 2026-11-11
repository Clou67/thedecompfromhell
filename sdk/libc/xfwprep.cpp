// sdk/libc/xfwprep.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c9998-0x5c9b38
#include "sdk/libc/xfwprep.h"
#include "sdk/mUnk3.h"

// SDK libc.a(xfwprep.o): _Fwprep  [fuzzy 1.000 match]
// 0x05c9998 (0x1a0 bytes)
undefined4 FUN_005c9998(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
    return 0;
  }
  uVar3 = *param_1;
  if ((uVar3 & 0x9002) != 2) {
    *param_1 = ((short)uVar3 >> 0xf & 0xc000U) + 0x4200 | uVar3;
    return 0xffffffff;
  }
  if (((uVar3 & 0x6000) == 0x6000) && (*(uint *)(param_1 + 6) <= *(uint *)(param_1 + 8))) {
    iVar1 = FUN_005c50cc(param_1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 & 0x800) == 0) {
    uVar4 = (int)param_1 + 0x43;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar4 == *(uint *)(param_1 + 4)) {
      iVar1 = *(int *)PTR_PTR_0071c2a0;
      if (iVar1 != 0) {
        uVar2 = FUN_005d5838(iVar1);
        *(uint *)(param_1 + 4) = uVar2;
        if (uVar2 != 0) {
          uVar3 = *param_1 | 0x40;
          *(uint *)(param_1 + 6) = uVar2 + iVar1;
          *param_1 = uVar3;
          *(uint *)(param_1 + 0x18) = uVar2;
          *(ulonglong *)(param_1 + 0x24) = (ulonglong)uVar2;
          *(uint *)(param_1 + 0x16) = uVar2;
          goto LAB_005c9a18;
        }
        uVar3 = *param_1;
      }
      *(uint *)(param_1 + 4) = uVar4;
      *(ushort **)(param_1 + 6) = param_1 + 0x22;
      uVar2 = uVar4;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
  }
LAB_005c9a18:
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 6);
  *param_1 = uVar3 | 0x6000;
  *(uint *)(param_1 + 0x30) = uVar2;
  param_1[0x32] = param_1[0x32] & 0xfffe;
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 10) = uVar2;
  return 0;
}


