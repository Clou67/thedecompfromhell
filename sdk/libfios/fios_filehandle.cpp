// sdk/libfios/fios_filehandle.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x5392c4-0x539920
#include "sdk/libfios/fios_filehandle.h"
#include "sdk/fUnk3.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/mUnk4.h"

// SDK libfios.a(fios_filehandle.ppu.o): cell::fios::filehandle::getOffset() const  [exact match]
// 0x05392c4 (0x94 bytes)
undefined8 FUN_005392c4(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = check_magic();
  uVar3 = 0xffffffffffffffff;
  if ((cVar2 != '\0') && (cVar2 = FUN_00604788(*(undefined4 *)(param_1 + 8)), cVar2 != '\0')) {
    iVar1 = *(int *)(param_1 + 8) + 0x138;
    lwmutex_lock_checked(iVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    lwmutex_unlock_checked(iVar1);
  }
  return uVar3;
}


// SDK libfios.a(fios_filehandle.ppu.o): cell::fios::filehandle::seek(long long, unsigned char, long long*)  [exact match]
// 0x0539358 (0x148 bytes)
int FUN_00539358(int param_1,longlong param_2,char param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = check_magic();
  if ((cVar2 == '\0') || (cVar2 = FUN_00604788(*(undefined4 *)(param_1 + 8)), cVar2 == '\0')) {
    iVar3 = -0x7ffef8fa;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + 0x138;
    lwmutex_lock_checked(iVar1);
    if (param_3 == '\x01') {
      iVar3 = 0;
      param_2 = param_2 + *(longlong *)(param_1 + 0x40);
    }
    else {
      iVar3 = 0;
      if ((param_3 != '\0') && (iVar3 = -0x7ffef8f9, param_3 == '\x02')) {
        iVar3 = 0;
        param_2 = param_2 + *(longlong *)(param_1 + 0x48);
      }
    }
    if ((param_2 < 0) || (*(longlong *)(param_1 + 0x48) < param_2)) {
      iVar3 = -0x7ffef8f5;
    }
    else if (iVar3 == 0) {
      *(longlong *)(param_1 + 0x40) = param_2;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(param_1 + 0x40);
    }
    lwmutex_unlock_checked(iVar1);
  }
  return iVar3;
}


// 0x05394a0 (0x11c bytes)
int FUN_005394a0(uint param_1)

{
  uint uStack00000030;
  undefined4 local_30;
  undefined4 local_20;
  
  local_30 = 0x20;
  uStack00000030 = param_1;
  if (param_1 >> 0x10 != 0) {
    local_30 = 0x10;
    uStack00000030 = param_1 >> 0x10;
  }
  if (uStack00000030 >> 8 != 0) {
    local_30 = local_30 + -8;
    uStack00000030 = uStack00000030 >> 8;
  }
  if (uStack00000030 >> 4 != 0) {
    local_30 = local_30 + -4;
    uStack00000030 = uStack00000030 >> 4;
  }
  if (uStack00000030 >> 2 != 0) {
    local_30 = local_30 + -2;
    uStack00000030 = uStack00000030 >> 2;
  }
  if (uStack00000030 >> 1 == 0) {
    local_20 = local_30 - uStack00000030;
  }
  else {
    local_20 = local_30 + -2;
  }
  return local_20;
}


// 0x05395bc (0x54 bytes)
int FUN_005395bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack00000030;
  
  uStack00000030 = param_1;
  iVar1 = FUN_005394a0(param_1);
  return 0x1f - iVar1;
}


// 0x0539610 (0x310 bytes)
void FUN_00539610(int param_1,uint param_2,uint param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  
  for (local_6c = 0; local_6c < param_2; local_6c = local_6c + 1) {
    for (local_70 = 0; local_70 < param_3; local_70 = local_70 + 1) {
      *(undefined4 *)((param_2 * local_70 + local_6c) * 0x10 + param_1) = DAT_0071b0b8;
      *(float *)((param_2 * local_70 + local_6c) * 0x10 + param_1 + 4) =
           (float)local_6c / (float)param_2;
      *(float *)((param_2 * local_70 + local_6c) * 0x10 + param_1 + 8) =
           (float)local_70 / (float)param_3;
      *(undefined4 *)((param_2 * local_70 + local_6c) * 0x10 + param_1 + 0xc) = DAT_0071b0b8;
    }
  }
  return;
}


