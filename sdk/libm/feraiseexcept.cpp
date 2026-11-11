// sdk/libm/feraiseexcept.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5ddaec-0x5ddbd8
#include "sdk/libm/feraiseexcept.h"
#include "sdk/libm/fesetenv.h"

// SDK libm.a(feraiseexcept.o): feraiseexcept  [exact match]
// 0x05ddaec (0xec bytes)
undefined8 FUN_005ddaec(uint param_1)

{
  uint uVar1;
  uint local_20 [4];
  
  uVar1 = param_1 & 0x3e000000;
  if (uVar1 != 0) {
    if ((param_1 & 0x20000000) == 0) {
      FUN_005ddc50(local_20);
      FUN_005ddc14(local_20);
    }
    else {
      uVar1 = param_1 & 0x1e000000 | 0x400;
      FUN_005ddc50(local_20);
      FUN_005ddc14(local_20);
    }
    if ((local_20[0] & 0xf8) != 0) {
      FUN_005ddbd8(uVar1);
      return 0;
    }
  }
  return 0;
}


