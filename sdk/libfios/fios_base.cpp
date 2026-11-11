// sdk/libfios/fios_base.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x510704-0x5109bc
#include "sdk/libfios/fios_base.h"
#include "game/hero.h"
#include "sdk/mUnk4.h"

// SDK libfios.a(fios_base.ppu.o): cell::fios::object::operator delete(void*, unsigned int, unsigned int)  [exact match]
// 0x0510704 (0x90 bytes)
void FUN_00510704(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9c0 + 8) + 4))
            (*(int **)(PTR_DAT_0071a9c0 + 8),param_1,
             param_2 | 0x100 | *(uint *)(&stack0x00000000 + iVar1),0,0);
  return;
}


// 0x0510794 (0x3c bytes)
void FUN_00510794(undefined4 *param_1)

{
  check_magic2();
  *param_1 = 0x66696f53;
  return;
}


// 0x05107d0 (0x3c bytes)
void handle_invalidate_magic(undefined4 *param_1)

{
  check_magic2();
  *param_1 = 0x66696f53;
  return;
}


// SDK libfios.a(fios_base.ppu.o): cell::fios::object::operator new(unsigned int, unsigned int, unsigned int)  [exact match]
// 0x051080c (0x94 bytes)
undefined4 FUN_0051080c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  uVar2 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9c0 + 8))
                    (*(undefined4 **)(PTR_DAT_0071a9c0 + 8),param_1,
                     param_2 | 0x100 | *(uint *)(&stack0x00000000 + iVar1),0,0);
  return uVar2;
}


// SDK libfios.a(fios_base.ppu.o): cell::fios::object::operator delete[](void*, unsigned int, unsigned int)  [exact match]
// 0x05108a0 (0x8c bytes)
void FUN_005108a0(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9c0 + 8) + 4))
            (*(int **)(PTR_DAT_0071a9c0 + 8),param_1,param_2 | *(uint *)(&stack0x00000000 + iVar1),0
             ,0);
  return;
}


// SDK libfios.a(fios_base.ppu.o): cell::fios::object::operator new[](unsigned int, unsigned int, unsigned int)  [exact match]
// 0x051092c (0x90 bytes)
undefined4 FUN_0051092c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  uVar2 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9c0 + 8))
                    (*(undefined4 **)(PTR_DAT_0071a9c0 + 8),param_1,
                     param_2 | *(uint *)(&stack0x00000000 + iVar1),0,0);
  return uVar2;
}


