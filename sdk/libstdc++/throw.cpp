// sdk/libstdc++/throw.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5e3b94-0x5e3c04
#include "sdk/libstdc++/throw.h"
#include "sdk/libcgc/libcgc_cell_localize.h"

// SDK libstdc++.a(throw.o): std::_Throw(std::exception const&)  [exact match]
// 0x05e3b94 (0x50 bytes)
// strings: 0067fe10: 'exception: '

void FUN_005e3b94(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_1 + 8))();
  FUN_005e3b1c(PTR_s_exception__0071c79c,uVar1);
  return;
}


// 0x05e3be4 (0x14 bytes)
undefined4 FUN_005e3be4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR_DAT_0071c7a0;
  *(undefined4 *)PTR_DAT_0071c7a0 = param_1;
  return uVar1;
}


// 0x05e3bf8 (0x8 bytes)
undefined * FUN_005e3bf8(void)

{
  return PTR_DAT_0071c7a4;
}


// 0x05e3c00 (0x4 bytes)
void FUN_005e3c00(void)

{
  return;
}


