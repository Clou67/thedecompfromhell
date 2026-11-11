// sdk/fUnk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5390ac-0x5392c4
#include "sdk/fUnk2.h"
#include "sdk/cUnk.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/mUnk4.h"

// 0x05390ac (0x3c bytes)
void handle_destroy(undefined8 param_1)

{
  check_magic();
  handle_invalidate_magic(param_1);
  return;
}


// 0x05390e8 (0x3c bytes)
void FUN_005390e8(undefined8 param_1)

{
  check_magic();
  handle_invalidate_magic(param_1);
  return;
}


// 0x0539124 (0xd0 bytes)
void FUN_00539124(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_005106cc(param_1);
  uVar4 = *(undefined8 *)(PTR_DAT_0071afe4 + 0x10);
  uVar1 = *(undefined4 *)(PTR_DAT_0071afe4 + 0x18);
  uVar2 = *(undefined4 *)(PTR_DAT_0071afe4 + 4);
  uVar3 = *(undefined4 *)(PTR_DAT_0071afe4 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)PTR_DAT_0071afe4;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  check_magic(param_1);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 4) = 0x66682020;
  return;
}


// 0x05391f4 (0xd0 bytes)
void FUN_005391f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_005106cc(param_1);
  uVar4 = *(undefined8 *)(PTR_DAT_0071afe4 + 0x10);
  uVar1 = *(undefined4 *)(PTR_DAT_0071afe4 + 0x18);
  uVar2 = *(undefined4 *)(PTR_DAT_0071afe4 + 4);
  uVar3 = *(undefined4 *)(PTR_DAT_0071afe4 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)PTR_DAT_0071afe4;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  check_magic(param_1);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 4) = 0x66682020;
  return;
}


