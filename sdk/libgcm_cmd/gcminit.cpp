// sdk/libgcm_cmd/gcminit.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x50efcc-0x50f074
#include "sdk/libgcm_cmd/gcminit.h"
#include "sdk/sce.h"

// SDK libgcm_cmd.a(gcminit.ppu.o): cellGcmCallbackForSnc  [fuzzy 1.000 match]
// 0x050efcc (0x40 bytes)
undefined4 FUN_0050efcc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))();
  return uVar1;
}


// 0x050f00c (0x28 bytes)
void FUN_0050f00c(void)

{
  _cellGcmFunc15(PTR_DAT_0071a90c);
  return;
}


// SDK libgcm_cmd.a(gcminit.ppu.o): cellGcmInit  [fuzzy 0.929 match]
// 0x050f034 (0x40 bytes)
undefined4 FUN_0050f034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = _cellGcmInitBody(PTR_DAT_0071a90c,param_1,param_2,param_3);
  return uVar1;
}


