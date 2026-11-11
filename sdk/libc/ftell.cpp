// sdk/libc/ftell.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c55dc-0x5c5638
#include "sdk/libc/ftell.h"
#include "sdk/xUnk.h"

// SDK libc.a(ftell.o): ftell  [fuzzy 1.000 match]
// 0x05c55dc (0x5c bytes)
undefined4 FUN_005c55dc(undefined8 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbc38();
  uVar1 = FUN_005c8bdc(param_1,0);
  FUN_005cbbbc(param_1);
  return uVar1;
}


