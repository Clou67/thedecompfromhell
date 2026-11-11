// sdk/xUnk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc0a8-0x5cc0d8
#include <string.h>
#include "sdk/xUnk2.h"
#include "sdk/lUnk.h"

// 0x05cc0a8 (0x30 bytes)
void * memcpy4(void *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  pvVar1 = memcpy(param_1,&stack0x00000038,4);
  return pvVar1;
}


