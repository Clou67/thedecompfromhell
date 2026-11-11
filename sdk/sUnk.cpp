// sdk/sUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c84e4-0x5c8510
#include <string.h>
#include "sdk/sUnk.h"

// 0x05c84e4 (0x2c bytes)
undefined4 strerror_wrapper(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = strerror(param_1,0);
  return uVar1;
}


