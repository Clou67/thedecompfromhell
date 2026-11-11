// sdk/libc/fseek.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c5568-0x5c55dc
#include "sdk/libc/fseek.h"
#include "sdk/xUnk.h"

// SDK libc.a(fseek.o): fseek  [fuzzy 1.000 match]
// 0x05c5568 (0x74 bytes)
undefined4 FUN_005c5568(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005cbc38();
  uVar1 = FUN_005c9568(param_1,0,param_2,param_3);
  FUN_005cbbbc(param_1);
  return uVar1;
}


