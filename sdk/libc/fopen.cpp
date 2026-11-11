// sdk/libc/fopen.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c52f0-0x5c5364
#include "sdk/libc/fopen.h"
#include "sdk/libc/xfofind.h"
#include "sdk/libc/xfoprep.h"
#include "sdk/xUnk.h"

// SDK libc.a(fopen.o): fopen  [fuzzy 1.000 match]
// 0x05c52f0 (0x74 bytes)
undefined4 FUN_005c52f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_005cbbec(2);
  uVar1 = FUN_005c8dcc();
  uVar1 = FUN_005c8f4c(param_1,param_2,uVar1,0xffffffffffffffff);
  FUN_005cbb70(2);
  return uVar1;
}


