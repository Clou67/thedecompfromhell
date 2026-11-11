// idol/fUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x50e8dc-0x50e998
#include "idol/fUnk.h"
#include "sdk/sce.h"

// 0x050e8dc (0xbc bytes)
undefined4 idol::GcmFlipCommand_Thunk(int param_1,uint param_2)

{
  int iVar1;
  
  if (7 < param_2) {
    return 0x802100ff;
  }
  if ((*(uint *)(param_1 + 4) < *(int *)(param_1 + 8) + 0x4cU) &&
     (iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,0x13), iVar1 != 0)) {
    return 0x802100ff;
  }
  _cellGcmSetFlipCommand(param_1,param_2 & 0xff);
  return 0;
}


