// sdk/libfios/fios_ps3ppu.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x52ea40-0x52eb40
#include "sdk/libfios/fios_ps3ppu.h"
#include "sdk/cell.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/sce.h"

// SDK libfios.a(fios_ps3ppu.ppu.o): cell::fios::FIOSPS3LoadModuleDependencies()  [fuzzy 0.965 match]
// 0x052ea40 (0x100 bytes)
void FUN_0052ea40(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iStack_64;
  
  iVar2 = cellSysmoduleInitialize();
  if ((iVar2 == 0) || (iVar2 == -0x7ffedfff)) {
    psVar3 = *(short **)(iStack_64 + -0x7468);
    sVar1 = *psVar3;
    if (sVar1 != -1) {
      do {
        psVar3 = psVar3 + 1;
        iVar2 = cellSysmoduleLoadModule(sVar1);
        if ((iVar2 != 0) && (iVar2 != -0x7ffedfff)) {
          _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x7460),sVar1,iVar2);
        }
        sVar1 = *psVar3;
      } while (sVar1 != -1);
      return;
    }
  }
  else {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x7464),iVar2);
  }
  return;
}


