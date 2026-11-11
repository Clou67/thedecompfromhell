// sdk/libm/xfdtest.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd48c-0x5dd4f8
#include "sdk/libm/xfdtest.h"

// SDK libm.a(xfdtest.o): _FDtest  [exact match]
// 0x05dd48c (0x6c bytes)
undefined4 FUN_005dd48c(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x7f80) == 0x7f80) {
    if (((uVar1 & 0x7f) != 0) || (uVar2 = 1, param_1[1] != 0)) {
      return 2;
    }
  }
  else if (((uVar1 & 0x7fff) != 0) || (uVar2 = 0, param_1[1] != 0)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


