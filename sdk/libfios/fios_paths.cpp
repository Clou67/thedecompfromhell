// sdk/libfios/fios_paths.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x51c858-0x51cb74
#include <string.h>
#include "sdk/libfios/fios_paths.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/psarclib_md5.h"

// SDK libfios.a(fios_paths.ppu.o): cell::fios::md5path::decode(char const*)  [exact match]
// 0x051c858 (0x7c bytes)
undefined4 FUN_0051c858(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar3 = PTR_DAT_0071ab00;
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  do {
    uVar6 = 0;
    lVar7 = 0x10;
    do {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar6 = uVar6 << 4 | (longlong)(char)puVar3[bVar2];
      if ((char)puVar3[bVar2] < '\0') {
        return 0;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar5 = (ulonglong *)(iVar4 + (int)param_1);
    bVar1 = iVar4 != 8;
    iVar4 = iVar4 + 8;
    *puVar5 = uVar6;
  } while (bVar1);
  return 1;
}


// SDK libfios.a(fios_paths.ppu.o): cell::fios::pathhash(char const*)  [exact match]
// 0x051c8d4 (0x58 bytes)
undefined4 _ZN4cell4fios8pathhashEPKc(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = hash_buff(param_1,sVar1);
  }
  return uVar2;
}


// SDK libfios.a(fios_paths.ppu.o): cell::fios::md5path::encode(char*)  [exact match]
// 0x051c92c (0x4c bytes)
// strings: 006679c0: '%016llx%016llx'

undefined8 FUN_0051c92c(undefined8 *param_1,undefined8 param_2)

{
  FUN_005cd198(param_2,0x21,PTR_s__016llx_016llx_0071ab04,*param_1,param_1[1]);
  return param_2;
}


// 0x051c978 (0x2c bytes)
int FUN_0051c978(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return iVar1;
}


// SDK libfios.a(fios_paths.ppu.o): cell::fios::md5path::set(char const*)  [exact match]
// 0x051c9a4 (0xe0 bytes)
void FUN_0051c9a4(undefined8 *param_1,int param_2)

{
  GPiece<88> auStack_80;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_0052faf8(auStack_80,param_2,0);
    *(undefined1 *)param_1 = uStack_28;
    *(undefined1 *)((int)param_1 + 1) = uStack_27;
    *(undefined1 *)((int)param_1 + 2) = uStack_26;
    *(undefined1 *)((int)param_1 + 3) = uStack_25;
    *(undefined1 *)((int)param_1 + 4) = uStack_24;
    *(undefined1 *)((int)param_1 + 5) = uStack_23;
    *(undefined1 *)((int)param_1 + 6) = uStack_22;
    *(undefined1 *)((int)param_1 + 7) = uStack_21;
    *(undefined1 *)(param_1 + 1) = uStack_20;
    *(undefined1 *)((int)param_1 + 9) = uStack_1f;
    *(undefined1 *)((int)param_1 + 10) = uStack_1e;
    *(undefined1 *)((int)param_1 + 0xb) = uStack_1d;
    *(undefined1 *)((int)param_1 + 0xf) = uStack_19;
    *(undefined1 *)((int)param_1 + 0xc) = uStack_1c;
    *(undefined1 *)((int)param_1 + 0xd) = uStack_1b;
    *(undefined1 *)((int)param_1 + 0xe) = uStack_1a;
  }
  return;
}


// SDK libfios.a(fios_paths.ppu.o): cell::fios::staticpath::setPath(char const*)  [exact match]
// 0x051ca84 (0x30 bytes)
void FUN_0051ca84(int param_1,undefined8 param_2)

{
  FUN_005193cc(param_1 + 4,param_2,0x100);
  return;
}


// SDK libfios.a(fios_paths.ppu.o): cell::fios::path::set(cell::fios::path const&)  [exact match]
// 0x051cab4 (0x54 bytes)
void FUN_0051cab4(undefined4 *param_1,undefined4 *param_2)

{
  FUN_005193cc(*param_1,*param_2,*(undefined2 *)(PTR_DAT_0071ab08 + 0xc));
  param_1[1] = param_2[1];
  return;
}


// SDK libfios.a(fios_paths.ppu.o): cell::fios::path::set(char const*)  [exact match]
// 0x051cb08 (0x6c bytes)
void FUN_0051cb08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_005193cc((undefined1 *)*param_1,param_2,*(undefined2 *)(PTR_DAT_0071ab08 + 0xc));
    uVar1 = _ZN4cell4fios8pathhashEPKc(*param_1);
    param_1[1] = uVar1;
  }
  return;
}


