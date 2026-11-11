// sdk/mUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4efdf4-0x4eff54
#include "sdk/mUnk.h"
#include "idol/idol_draw.h"
#include "sdk/sce.h"

// 0x04efdf4 (0x90 bytes)
// strings: 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n'

void sceNpTrophyDestroyHandle(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x1b0) != 0) && (uVar1 = sceNpTrophyDestroyHandle(), (int)uVar1 < 0)) {
    print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar1);
  }
  if ((*(int *)(param_1 + 0x1ac) != 0) && (uVar1 = sceNpTrophyDestroyContext(), (int)uVar1 < 0)) {
    print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// 0x04efe84 (0xd0 bytes)
// strings: 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065b7cc: '%s failed: status = 0x%x\n'

undefined8 FUN_004efe84(int param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  
  if (param_4 != '\0') {
    if ((*(int *)(param_1 + 0x1b0) != 0) &&
       (uVar1 = sceNpTrophyDestroyHandle(), (int)uVar1 < 0)) {
      print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar1);
    }
    if ((*(int *)(param_1 + 0x1ac) != 0) &&
       (uVar1 = sceNpTrophyDestroyContext(), (int)uVar1 < 0)) {
      print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar1);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  print_tty2("%s failed: status = 0x%x\n",param_2,param_3);
  return param_3;
}


