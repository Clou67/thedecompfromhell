// sdk/libc/xfdunsca.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5e6774-0x5e687c
#include "sdk/libc/xfdunsca.h"
#include "sdk/libc/xfdnorm.h"

// SDK libc.a(xfdunsca.o): _FDunscale  [fuzzy 1.000 match]
// 0x05e6774 (0x108 bytes)
undefined4 FUN_005e6774(short *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  uVar1 = (uVar3 << 0x20) >> 0x27;
  uVar2 = (ushort)uVar1 & 0xff;
  if (uVar2 != 0xff) {
    if ((uVar1 & 0xff) == 0) {
      uVar2 = FUN_005e687c(param_2);
      if (0 < (short)uVar2) {
        *param_1 = 0;
        return 0;
      }
      uVar3 = (ulonglong)*param_2;
    }
    *param_2 = (ushort)(((uVar3 << 0x20) >> 0x2f) << 0xf) |
               (ushort)(((uVar3 & 0x7f) << 0x11) >> 0x10) >> 1 | 0x3f00;
    *param_1 = uVar2 - 0x7e;
    return 0xffffffff;
  }
  *param_1 = 0;
  if (((*param_2 & 0x7f) == 0) && (param_2[1] == 0)) {
    return 1;
  }
  return 2;
}


