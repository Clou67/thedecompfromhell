// sdk/libm/xferaise.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd4f8-0x5dd5a8
#include "sdk/libm/xferaise.h"
#include "sdk/libc/asctime.h"
#include "sdk/libm/feraiseexcept.h"

// SDK libm.a(xferaise.o): _Feraise  [exact match]
// 0x05dd4f8 (0xb0 bytes)
void FUN_005dd4f8(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 0x18000000) != 0) {
    param_1 = param_1 | 0x2000000;
  }
  FUN_005ddaec(param_1);
  if ((param_1 & 0x24000000) == 0) {
    if ((param_1 & 0x18000000) == 0) {
      return;
    }
    puVar1 = (undefined4 *)FUN_005d5904();
    *puVar1 = 0x8001001c;
    return;
  }
  puVar1 = (undefined4 *)FUN_005d5904();
  *puVar1 = 0x8001001b;
  return;
}


