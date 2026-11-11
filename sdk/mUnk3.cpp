// sdk/mUnk3.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x5d57d4-0x5d58bc
#include "sdk/mUnk3.h"
#include "sdk/libc/malloc.h"
#include "sdk/libc/malloc_lv2.h"

// 0x05d57d4 (0x38 bytes)
undefined4 FUN_005d57d4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d531c(PTR_DAT_0071c4d8,param_1,param_2);
  return uVar1;
}


// 0x05d580c (0x2c bytes)
void FUN_005d580c(undefined8 param_1)

{
  FUN_005d2264(PTR_DAT_0071c4d8,param_1);
  return;
}


// 0x05d5838 (0x30 bytes)
undefined4 FUN_005d5838(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d309c(PTR_DAT_0071c4d8,param_1);
  return uVar1;
}


// 0x05d5868 (0x24 bytes)
void FUN_005d5868(void)

{
  FUN_005d53e8();
  return;
}


// 0x05d588c (0x28 bytes)
void FUN_005d588c(void)

{
  FUN_005d5584(PTR_DAT_0071c4d8);
  return;
}


// 0x05d58b4 (0x8 bytes)
undefined * FUN_005d58b4(void)

{
  return PTR_PTR_0071c4dc;
}


