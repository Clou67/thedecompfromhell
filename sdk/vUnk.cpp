// sdk/vUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8bc4-0x5c8bdc
#include "sdk/vUnk.h"

// 0x05c8bc4 (0x18 bytes)
int FUN_005c8bc4(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < param_3) {
    iVar1 = param_3 - param_2;
  }
  return iVar1;
}


