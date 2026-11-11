// sdk/libgcm_cmd/flip_safe.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x50e7f8-0x50e8dc
#include "sdk/libgcm_cmd/flip_safe.h"
#include "sdk/sce.h"

// SDK libgcm_cmd.a(flip_safe.ppu.o): cellGcmSetFlipWithWaitLabel  [fuzzy 0.982 match]
// 0x050e7f8 (0xe4 bytes)
undefined4 FUN_0050e7f8(int param_1,uint param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (7 < param_2) {
    return 0x802100ff;
  }
  if ((*(uint *)(param_1 + 4) < *(int *)(param_1 + 8) + 0x5cU) &&
     (iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,0x17), iVar1 != 0)) {
    return 0x802100ff;
  }
  _cellGcmSetFlipCommandWithWaitLabel(param_1,param_2 & 0xff,param_3,param_4);
  return 0;
}


