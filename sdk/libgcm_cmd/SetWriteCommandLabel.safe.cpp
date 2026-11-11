// sdk/libgcm_cmd/SetWriteCommandLabel.safe.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x50f074-0x50f130
#include "sdk/libgcm_cmd/SetWriteCommandLabel.safe.h"

// SDK libgcm_cmd.a(SetWriteCommandLabel.safe.ppu.o): cellGcmSetWriteCommandLabel  [exact match]
// 0x050f074 (0xbc bytes)
void FUN_0050f074(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 4) < puVar2 + 4) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,4);
    if (iVar1 != 0) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
  }
  puVar2[1] = (param_2 & 0xff) << 4;
  *puVar2 = 0x40064;
  *(undefined4 **)(param_1 + 8) = puVar2 + 4;
  puVar2[3] = param_3;
  puVar2[2] = 0x4006c;
  return;
}


