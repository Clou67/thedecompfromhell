// sdk/libc/malloc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5d56f4-0x5d57d4
#include "sdk/libc/malloc.h"
#include "sdk/libc/malloc_lv2.h"

// SDK libc.a(malloc.o): reallocalign  [fuzzy 1.000 match]
// 0x05d56f4 (0x40 bytes)
undefined4 FUN_005d56f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d5178(PTR_DAT_0071c4d8,param_1,param_2,param_3);
  return uVar1;
}


// 0x05d5734 (0x30 bytes)
undefined4 FUN_005d5734(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d1cac(PTR_DAT_0071c4d8,param_1);
  return uVar1;
}


// 0x05d5764 (0x38 bytes)
undefined4 FUN_005d5764(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_005d4c0c(PTR_DAT_0071c4d8,param_1,param_2);
  return uVar1;
}


// 0x05d579c (0x38 bytes)
undefined4 FUN_005d579c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d529c(PTR_DAT_0071c4d8,param_1,param_2);
  return uVar1;
}


