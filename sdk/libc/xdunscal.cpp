// sdk/libc/xdunscal.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5daf40-0x5db060
#include "sdk/libc/xdunscal.h"
#include "sdk/libc/xdnorm.h"

// SDK libc.a(xdunscal.o): _Dunscale  [fuzzy 1.000 match]
// 0x05daf40 (0x120 bytes)
undefined4 FUN_005daf40(short *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  uVar1 = (uVar3 << 0x20) >> 0x24;
  uVar2 = (ushort)uVar1 & 0x7ff;
  if (uVar2 != 0x7ff) {
    if ((uVar1 & 0x7ff) == 0) {
      uVar2 = FUN_005dad7c(param_2);
      if (0 < (short)uVar2) {
        *param_1 = 0;
        return 0;
      }
      uVar3 = (ulonglong)*param_2;
    }
    *param_2 = (ushort)(((uVar3 << 0x20) >> 0x2f) << 0xf) |
               (ushort)(((uVar3 & 0xf) << 0x11) >> 0x10) >> 1 | 0x3fe0;
    *param_1 = uVar2 - 0x3fe;
    return 0xffffffff;
  }
  *param_1 = 0;
  if (((((*param_2 & 0xf) == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 1;
  }
  return 2;
}


