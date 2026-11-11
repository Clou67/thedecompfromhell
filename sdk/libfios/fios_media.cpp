// sdk/libfios/fios_media.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 37 functions, 0x5198dc-0x51b750
#include <string.h>
#include "sdk/libfios/fios_media.h"
#include "game/hero.h"
#include "sdk/cUnk.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_paths.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/mUnk4.h"

// SDK libfios.a(fios_media.ppu.o): __static_initialization_and_destruction_0(int, int)  [exact match]
// 0x05198dc (0x40 bytes)
void FUN_005198dc(int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071aad0;
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  *(undefined4 *)(PTR_DAT_0071aad0 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  return;
}


// 0x051991c (0x10 bytes)
void FUN_0051991c(void)

{
  FUN_005198dc(1,0xffff);
  return;
}


// 0x051992c (0x10 bytes)
void FUN_0051992c(void)

{
  FUN_005198dc(0,0xffff);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getIdentifiers(unsigned int*, char const* const**) const  [exact match]
// 0x051993c (0x70 bytes)
void FUN_0051993c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00604710();
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x50);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x58);
  }
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::initializeClassLock()  [exact match]
// 0x05199ac (0xf8 bytes)
// strings: 00667988: 's_mediaListLock'

void FUN_005199ac(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = PTR_DAT_0071aad0;
  uVar4 = ZEXT48(PTR_DAT_0071aad0);
  instructionSynchronize();
  if (*(int *)PTR_DAT_0071aad0 == 0) {
    uVar3 = FUN_0051080c(0x28,0x10420000,3);
    FUN_0052d370(uVar3 & 0xffffffff,PTR_s_s_mediaListLock_0071aad4);
    do {
      if (*(int *)puVar2 != 0) {
        if ((int)uVar3 == 0) {
          return;
        }
        FUN_0052df14(uVar3 & 0xffffffff);
        FUN_00510704(uVar3 & 0xffffffff,0x10420000,3);
        return;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar3,0,uVar4);
        *(undefined4 *)puVar2 = uVar1;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
  }
  return;
}


// 0x0519aa4 (0x1e8 bytes)
// strings: 00667998: 'media.m_objectLock'

void FUN_00519aa4(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  
  FUN_005106cc(param_1 + 1);
  puVar2 = PTR_s_media_m_objectLock_0071aadc;
  *param_1 = PTR_PTR_0071aad8;
  FUN_0052d370(param_1 + 4,puVar2);
  param_1[0x11] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00604710(param_1);
  puVar2 = PTR_DAT_0071aae0;
  param_1[2] = 0x6d646961;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  puVar3 = *(undefined4 **)(puVar2 + 8);
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)*puVar3)(puVar3,0x10,0x10010102,0,0);
  param_1[0x16] = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  if (param_2 != (char *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 8);
    sVar4 = strlen(param_2);
    piVar1 = (int *)param_1[0x16];
    iVar5 = (*(code *)**(undefined4 **)*puVar3)(puVar3,sVar4 + 1,0x10020100,0,0);
    *piVar1 = iVar5;
    if (iVar5 != 0) {
      sVar4 = strlen(param_2);
      FUN_005193cc(*(undefined4 *)param_1[0x16],param_2,sVar4 + 1);
    }
  }
  return;
}


// 0x0519c8c (0x1e8 bytes)
// strings: 00667998: 'media.m_objectLock'

void FUN_00519c8c(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  
  FUN_005106cc(param_1 + 1);
  puVar2 = PTR_s_media_m_objectLock_0071aadc;
  *param_1 = PTR_PTR_0071aad8;
  FUN_0052d370(param_1 + 4,puVar2);
  param_1[0x11] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00604710(param_1);
  puVar2 = PTR_DAT_0071aae0;
  param_1[2] = 0x6d646961;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  puVar3 = *(undefined4 **)(puVar2 + 8);
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)*puVar3)(puVar3,0x10,0x10010102,0,0);
  param_1[0x16] = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  if (param_2 != (char *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 8);
    sVar4 = strlen(param_2);
    piVar1 = (int *)param_1[0x16];
    iVar5 = (*(code *)**(undefined4 **)*puVar3)(puVar3,sVar4 + 1,0x10020100,0,0);
    *piVar1 = iVar5;
    if (iVar5 != 0) {
      sVar4 = strlen(param_2);
      FUN_005193cc(*(undefined4 *)param_1[0x16],param_2,sVar4 + 1);
    }
  }
  return;
}


// 0x0519e74 (0x58 bytes)
void FUN_00519e74(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  FUN_00519c8c();
  puVar1 = PTR_PTR_0071aae4;
  param_1[0x10] = param_3;
  *param_1 = puVar1;
  if (param_3 != 0) {
    *(undefined4 **)(param_3 + 0x3c) = param_1;
  }
  return;
}


// 0x0519ecc (0x58 bytes)
void FUN_00519ecc(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  FUN_00519c8c();
  puVar1 = PTR_PTR_0071aae4;
  param_1[0x10] = param_3;
  *param_1 = puVar1;
  if (param_3 != 0) {
    *(undefined4 **)(param_3 + 0x3c) = param_1;
  }
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::normalizePath(char const*, char*)  [exact match]
// 0x0519f24 (0x200 bytes)
undefined4 FUN_00519f24(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  if ((param_1[1] == 0x3a) &&
     ((((((ulonglong)*param_1 << 0x20) >> 0x26) << 6 | (ulonglong)*param_1 & 0x1f) - 0x41 & 0xff) <
      0x1a)) {
    return 0;
  }
  bVar4 = 0x2f;
  pbVar2 = param_2;
  do {
    pbVar1 = param_1;
    if ((bVar4 == 0x5c) || (bVar4 == 0x2f)) {
      bVar4 = *param_1;
      if ((-1 < (longlong)(((ulonglong)bVar4 ^ 0x2f) - 1) &&
          -1 < (longlong)(((ulonglong)bVar4 ^ 0x5c) - 1)) && -1 < (longlong)((ulonglong)bVar4 - 1))
      {
        if (bVar4 == 0x2e) {
          pbVar1 = param_1 + 1;
          bVar4 = *pbVar1;
          if ((-1 < (longlong)(((ulonglong)bVar4 ^ 0x2f) - 1) &&
              -1 < (longlong)(((ulonglong)bVar4 ^ 0x5c) - 1)) &&
              -1 < (longlong)((ulonglong)bVar4 - 1)) {
            if ((bVar4 != 0x2e) ||
               (pbVar1 = param_1 + 2, bVar4 = *pbVar1,
               (-1 < (longlong)(((ulonglong)bVar4 ^ 0x2f) - 1) &&
               -1 < (longlong)(((ulonglong)bVar4 ^ 0x5c) - 1)) &&
               -1 < (longlong)((ulonglong)bVar4 - 1))) goto LAB_00519fcc;
            if (param_2 == pbVar2) {
              return 0;
            }
            iVar3 = (int)pbVar2 - (int)param_2;
            if ((pbVar2 + -1 < param_2) || (param_2 == (byte *)0xffffffff)) {
              iVar3 = 1;
            }
            do {
              pbVar2 = pbVar2 + -1;
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) break;
            } while (*pbVar2 != 0x2f);
          }
        }
        else {
LAB_00519fcc:
          *pbVar2 = 0x2f;
          pbVar1 = param_1;
          pbVar2 = pbVar2 + 1;
        }
      }
    }
    else {
      *pbVar2 = bVar4;
      pbVar2 = pbVar2 + 1;
    }
    if (param_2 + 0x100 <= pbVar2) {
      return 0;
    }
    bVar4 = *pbVar1;
    if (bVar4 == 0) {
      pbVar1 = pbVar2;
      if (pbVar2 == param_2) {
        pbVar1 = pbVar2 + 1;
        *pbVar2 = 0x2f;
      }
      *pbVar1 = 0;
      return 1;
    }
    param_1 = pbVar1 + 1;
  } while( true );
}


// 0x051a124 (0x148 bytes)
void FUN_0051a124(int *param_1,undefined4 param_2)

{
  GPiece<16> auVar1;
  undefined4 uVar2;
  GPiece<64> auStack_e0;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<16> auStack_70;
  GPiece<16> local_60;
  undefined4 local_50;
  undefined2 local_4c;
  
  FUN_00604710();
  local_a0 = ZEXT816(0);
  local_90 = (GPiece<16>)0x0;
  local_50 = 0;
  local_4c = 0;
  local_80 = (GPiece<16>)0x0;
  auStack_70 = (GPiece<16>)0x0;
  local_60 = (GPiece<16>)0x0;
  uVar2 = _ZN4cell4fios8pathhashEPKc(0);
  auVar1 = local_90;
  local_a0.piece<12,4>() = uVar2;
  local_80.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0x20);
  local_90.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0xc);
  local_90.piece<0,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 8);
  local_90.piece<12,4>() = auVar1.piece<12,4>();
  local_90.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0x10);
  local_80.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071aad0 + 0x18);
  local_60.piece<0,8>() = ((ulonglong)(uint)param_1[0x23] & 0x1fffffff) << 3;
  local_a0.piece<4,4>() = 0x80010701;
  local_a0.piece<0,4>() = 1;
  local_50 = param_2;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,auStack_e0);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::terminateClassLock()  [exact match]
// 0x051a26c (0x88 bytes)
void FUN_0051a26c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = PTR_DAT_0071aad0;
  uVar4 = ZEXT48(PTR_DAT_0071aad0);
  do {
    iVar1 = *(int *)puVar3;
    instructionSynchronize();
    if (iVar1 == 0) {
      return;
    }
    while (iVar1 == *(int *)puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar4);
        *(undefined4 *)puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        FUN_0052df14(iVar1);
        FUN_00510704(iVar1,0x10420000,3);
        return;
      }
    }
  } while( true );
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getFirstMedia()  [exact match]
// 0x051a2f4 (0x68 bytes)
undefined4 FUN_0051a2f4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  FUN_005199ac();
  puVar3 = PTR_DAT_0071aad0;
  uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
  instructionSynchronize();
  lwmutex_lock_checked(uVar1);
  uVar2 = *(undefined4 *)(puVar3 + 0x28);
  lwmutex_unlock_checked(uVar1);
  return uVar2;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getCallback(void**) const  [exact match]
// 0x051a35c (0x88 bytes)
undefined4 FUN_0051a35c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_00604710(param_1);
  lwmutex_lock_checked(param_1 + 0x10);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  lwmutex_unlock_checked(param_1 + 0x10);
  return uVar1;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::callback(unsigned char, void*)  [exact match]
// 0x051a3e4 (0x9c bytes)
undefined4 FUN_0051a3e4(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  GPiece<24> local_30;
  
  FUN_00604710();
  puVar1 = (undefined4 *)FUN_0051a35c(param_1,local_30);
  uVar2 = 0x8001070c;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (*(code *)*puVar1)(0,param_1,param_2,param_3);
  }
  return uVar2;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getScheduler() const  [exact match]
// 0x051a480 (0xa8 bytes)
int FUN_0051a480(int param_1)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = param_1 + 0x10;
    FUN_00604710(param_1);
    lwmutex_lock_checked(iVar2);
    iVar1 = *(int *)(param_1 + 0x44);
    if ((iVar1 != 0) || (param_1 = *(int *)(param_1 + 0x3c), param_1 == 0)) break;
    lwmutex_unlock_checked(iVar2);
  }
  lwmutex_unlock_checked(iVar2);
  return iVar1;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getMediaForIdentifier(char const*)  [exact match]
// 0x051a528 (0x148 bytes)
/* WARNING: Removing unreachable block (ram,0x0051a5dc) */
/* WARNING: Removing unreachable block (ram,0x0051a5ec) */
/* WARNING: Removing unreachable block (ram,0x0051a640) */

undefined4 FUN_0051a528(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  GPiece<4> local_50;
  GPiece<12> local_4c;
  
  if (param_1 != 0) {
    FUN_005199ac();
    puVar3 = PTR_DAT_0071aad0;
    uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
    instructionSynchronize();
    lwmutex_lock_checked(uVar1);
    iVar2 = *(int *)(puVar3 + 0x28);
    if (iVar2 != 0) {
      do {
        FUN_0051993c(iVar2,local_50,local_4c);
        iVar2 = *(int *)(iVar2 + 0x38);
      } while (iVar2 != 0);
    }
    lwmutex_unlock_checked(uVar1);
  }
  return 0;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getMediaForPath(char const*, char const**, char)  [exact match]
// 0x051a670 (0xe4 bytes)
undefined4 FUN_0051a670(char *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *__dest;
  char *pcVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  size_t __n;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar2 = (ulonglong *)lVar1;
  *puVar2 = ZEXT48(&stack0x00000000);
  puVar2[0x12] = unaff_r30;
  puVar2[0xf] = unaff_r27;
  puVar2[0x10] = unaff_r28;
  puVar2[0x13] = unaff_r31;
  puVar2[0x16] = in_LR;
  puVar2[0x11] = unaff_r29;
  pcVar3 = strchr(param_1,param_3);
  __n = (int)pcVar3 - (int)param_1;
  uVar4 = 0;
  if (pcVar3 != (char *)0x0) {
    uVar5 = *puVar2;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pcVar3 + 1;
    }
    lVar1 = lVar1 - ((ulonglong)(__n + 1) + 0x1e & 0xfffffffffffffff0);
    *(ulonglong *)lVar1 = uVar5;
    uVar5 = lVar1 + 0x70;
    __dest = (void *)uVar5;
    memcpy(__dest,param_1,__n);
    *(undefined1 *)((int)__dest + __n) = 0;
    uVar4 = FUN_0051a528(uVar5 & 0xffffffff);
  }
  return uVar4;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::unregisterMedia()  [exact match]
// 0x051a754 (0x104 bytes)
void FUN_0051a754(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  FUN_00604710(param_1);
  FUN_005199ac();
  puVar3 = PTR_DAT_0071aad0;
  uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
  instructionSynchronize();
  lwmutex_lock_checked(uVar1);
  iVar2 = *(int *)(puVar3 + 0x28);
  if (iVar2 == 0) {
    piVar4 = (int *)(puVar3 + 0x28);
LAB_0051a7d8:
    if (param_1 != 0) {
      lwmutex_unlock_checked(uVar1);
      return;
    }
  }
  else if (param_1 == iVar2) {
    piVar4 = (int *)(puVar3 + 0x28);
  }
  else {
    do {
      piVar4 = (int *)(iVar2 + 0x38);
      iVar2 = *piVar4;
      if (iVar2 == 0) goto LAB_0051a7d8;
    } while (param_1 != iVar2);
  }
  *piVar4 = *(int *)(param_1 + 0x38);
  lwmutex_unlock_checked(uVar1);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::~media()  [exact match]
// 0x051a858 (0x198 bytes)
void FUN_0051a858(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = PTR_PTR_0071aad8;
  FUN_00604710(param_1);
  FUN_0051a754(param_1);
  puVar4 = PTR_DAT_0071aae0;
  iVar5 = param_1[0x16];
  if (iVar5 != 0) {
    uVar6 = param_1[0x14];
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        iVar3 = (int)((uVar7 & 0xffffffff) << 2);
        uVar7 = uVar7 + 1;
        iVar1 = *(int *)(iVar3 + iVar5);
        if (iVar1 != 0) {
          piVar2 = *(int **)(puVar4 + 8);
          (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar1,0x10020100,0,0);
          iVar5 = param_1[0x16];
          uVar6 = param_1[0x14];
        }
        *(undefined4 *)(iVar3 + iVar5) = 0;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
    piVar2 = *(int **)(puVar4 + 8);
    (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar5,0x10010102,0,0);
    param_1[0x16] = 0;
  }
  FUN_0052df14(param_1 + 4);
  handle_invalidate_magic(param_1 + 1);
  FUN_00510704(param_1,0x10000100,2);
  return;
}


// 0x051a9f0 (0x178 bytes)
void FUN_0051a9f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = PTR_PTR_0071aad8;
  FUN_00604710(param_1);
  FUN_0051a754(param_1);
  puVar4 = PTR_DAT_0071aae0;
  iVar5 = param_1[0x16];
  if (iVar5 != 0) {
    uVar6 = param_1[0x14];
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        iVar3 = (int)((uVar7 & 0xffffffff) << 2);
        uVar7 = uVar7 + 1;
        iVar1 = *(int *)(iVar3 + iVar5);
        if (iVar1 != 0) {
          piVar2 = *(int **)(puVar4 + 8);
          (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar1,0x10020100,0,0);
          iVar5 = param_1[0x16];
          uVar6 = param_1[0x14];
        }
        *(undefined4 *)(iVar3 + iVar5) = 0;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
    piVar2 = *(int **)(puVar4 + 8);
    (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar5,0x10010102,0,0);
    param_1[0x16] = 0;
  }
  FUN_0052df14(param_1 + 4);
  handle_invalidate_magic(param_1 + 1);
  return;
}


// 0x051ab68 (0x178 bytes)
void FUN_0051ab68(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = PTR_PTR_0071aad8;
  FUN_00604710(param_1);
  FUN_0051a754(param_1);
  puVar4 = PTR_DAT_0071aae0;
  iVar5 = param_1[0x16];
  if (iVar5 != 0) {
    uVar6 = param_1[0x14];
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        iVar3 = (int)((uVar7 & 0xffffffff) << 2);
        uVar7 = uVar7 + 1;
        iVar1 = *(int *)(iVar3 + iVar5);
        if (iVar1 != 0) {
          piVar2 = *(int **)(puVar4 + 8);
          (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar1,0x10020100,0,0);
          iVar5 = param_1[0x16];
          uVar6 = param_1[0x14];
        }
        *(undefined4 *)(iVar3 + iVar5) = 0;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
    piVar2 = *(int **)(puVar4 + 8);
    (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar5,0x10010102,0,0);
    param_1[0x16] = 0;
  }
  FUN_0052df14(param_1 + 4);
  handle_invalidate_magic(param_1 + 1);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::mediafilter::~mediafilter()  [exact match]
// 0x051ace0 (0x64 bytes)
void FUN_0051ace0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aae4;
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 0x3c) = 0;
  }
  FUN_0051ab68();
  FUN_00510704(param_1,0x10000100,2);
  return;
}


// 0x051ad44 (0x28 bytes)
void FUN_0051ad44(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aae4;
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 0x3c) = 0;
  }
  FUN_0051ab68();
  return;
}


// 0x051ad6c (0x28 bytes)
void FUN_0051ad6c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aae4;
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 0x3c) = 0;
  }
  FUN_0051ab68();
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::registerMedia()  [exact match]
// 0x051ad94 (0xd8 bytes)
void FUN_0051ad94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  FUN_00604710(param_1);
  FUN_005199ac();
  puVar3 = PTR_DAT_0071aad0;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
    instructionSynchronize();
    lwmutex_lock_checked(uVar1);
    iVar2 = *(int *)(puVar3 + 0x28);
    if (iVar2 == 0) {
      piVar4 = (int *)(puVar3 + 0x28);
    }
    else {
      do {
        if (param_1 == iVar2) {
          lwmutex_unlock_checked(uVar1);
          return;
        }
        piVar4 = (int *)(iVar2 + 0x38);
        iVar2 = *piVar4;
      } while (iVar2 != 0);
    }
    *piVar4 = param_1;
    lwmutex_unlock_checked(uVar1);
  }
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getPrimaryIdentifier() const  [exact match]
// 0x051ae6c (0x68 bytes)
undefined4 FUN_0051ae6c(int param_1)

{
  undefined4 uVar1;
  
  FUN_00604710(param_1);
  lwmutex_lock_checked(param_1 + 0x10);
  uVar1 = **(undefined4 **)(param_1 + 0x58);
  lwmutex_unlock_checked(param_1 + 0x10);
  return uVar1;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::getCachedIdentifier() const  [exact match]
// 0x051aed4 (0x6c bytes)
undefined8 FUN_0051aed4(int param_1)

{
  undefined8 uVar1;
  
  FUN_00604710(param_1);
  lwmutex_lock_checked(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  lwmutex_unlock_checked(param_1 + 0x10);
  return uVar1;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::setCachedIdentifier(unsigned long long)  [exact match]
// 0x051af40 (0x6c bytes)
void FUN_0051af40(int param_1,undefined8 param_2)

{
  FUN_00604710(param_1);
  lwmutex_lock_checked(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  lwmutex_unlock_checked(param_1 + 0x10);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::setCallback(int (*)(void*, cell::fios::media*, unsigned char, void*), void*, int (**)(void*, cell::fios::media*, unsigned char, void*), void**)  [exact match]
// 0x051afac (0xc4 bytes)
void FUN_0051afac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  FUN_00604710(param_1);
  lwmutex_lock_checked(param_1 + 0x10);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x5c);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  lwmutex_unlock_checked(param_1 + 0x10);
  return;
}


// 0x051b070 (0x17c bytes)
void FUN_0051b070(int *param_1)

{
  GPiece<16> auVar1;
  undefined4 uVar2;
  GPiece<64> auStack_f0;
  GPiece<12> local_b0;
  undefined4 local_a4;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> auStack_80;
  GPiece<16> local_70;
  int *local_60;
  undefined2 local_5c;
  
  FUN_00604710(param_1);
  local_60 = (int *)0x0;
  local_a0 = (GPiece<16>)0x0;
  local_5c = 0;
  _local_b0 = ZEXT816(0);
  local_90 = (GPiece<16>)0x0;
  auStack_80 = (GPiece<16>)0x0;
  local_70 = (GPiece<16>)0x0;
  uVar2 = _ZN4cell4fios8pathhashEPKc(0);
  auVar1 = local_a0;
  local_a4 = uVar2;
  local_70.piece<0,8>() = 0x30;
  local_a0.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0xc);
  local_a0.piece<0,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 8);
  local_a0.piece<12,4>() = auVar1.piece<12,4>();
  local_a0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0x10);
  local_90.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0x20);
  local_90.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071aad0 + 0x18);
  local_b0.piece<4,4>() = 0x80010701;
  local_b0.piece<0,4>() = 0;
  local_60 = param_1 + 0x1a;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,auStack_f0);
  (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1);
  return;
}


// 0x051b1ec (0x12c bytes)
void FUN_0051b1ec(int *param_1)

{
  GPiece<16> auVar1;
  undefined4 uVar2;
  GPiece<64> auStack_e0;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<16> auStack_70;
  GPiece<16> auStack_60;
  undefined4 local_50;
  undefined2 local_4c;
  
  FUN_00604710();
  local_a0 = ZEXT816(0);
  local_90 = (GPiece<16>)0x0;
  local_50 = 0;
  local_4c = 0;
  local_80 = (GPiece<16>)0x0;
  auStack_70 = (GPiece<16>)0x0;
  auStack_60 = (GPiece<16>)0x0;
  uVar2 = _ZN4cell4fios8pathhashEPKc(0);
  auVar1 = local_90;
  local_a0.piece<12,4>() = uVar2;
  local_90.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0xc);
  local_90.piece<0,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 8);
  local_90.piece<12,4>() = auVar1.piece<12,4>();
  local_90.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0x10);
  local_80.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aad0 + 0x20);
  local_80.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071aad0 + 0x18);
  local_a0.piece<4,4>() = 0x80010701;
  local_a0.piece<0,4>() = 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,auStack_e0);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::setScheduler(cell::fios::scheduler*)  [exact match]
// 0x051b318 (0xb4 bytes)
void FUN_0051b318(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x10;
  FUN_00604710(param_1);
  lwmutex_lock_checked(iVar1);
  if ((*(int *)(param_1 + 0x44) != 0) && (param_2 != 0)) {
    lwmutex_unlock_checked(iVar1);
    return;
  }
  *(int *)(param_1 + 0x44) = param_2;
  lwmutex_unlock_checked(iVar1);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::nextMedia() const  [exact match]
// 0x051b3cc (0x74 bytes)
undefined4 FUN_0051b3cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00604710();
  FUN_005199ac();
  uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
  instructionSynchronize();
  lwmutex_lock_checked(uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  lwmutex_unlock_checked(uVar1);
  return uVar2;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::addIdentifier(char const*)  [exact match]
// 0x051b440 (0x2d4 bytes)
void FUN_0051b440(int param_1,char *param_2)

{
  void *__src;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  void *__dest;
  size_t sVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_00604710(param_1);
  if (param_2 != (char *)0x0) {
    iVar5 = param_1 + 0x10;
    lwmutex_lock_checked(iVar5);
    puVar4 = PTR_DAT_0071aae0;
    if ((ulonglong)*(uint *)(param_1 + 0x54) < (ulonglong)(*(int *)(param_1 + 0x50) + 1)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x54) + 4;
      __src = *(void **)(param_1 + 0x58);
      lVar9 = (uVar8 & 0x3fffffff) << 2;
      __dest = (void *)(*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071aae0 + 8))
                                 (*(undefined4 **)(PTR_DAT_0071aae0 + 8),lVar9,0x10010100,0,0);
      if (__dest == (void *)0x0) goto LAB_0051b6a0;
      memset(__dest,0,lVar9);
      if (__src == (void *)0x0) {
        memset((void *)(*(uint *)(param_1 + 0x50) * 4 + (int)__dest),0,
                     (uVar8 - *(uint *)(param_1 + 0x50) & 0x3fffffff) << 2);
        *(void **)(param_1 + 0x58) = __dest;
        *(int *)(param_1 + 0x54) = (int)uVar8;
      }
      else {
        memcpy(__dest,__src,*(int *)(param_1 + 0x50) << 2);
        memset((void *)(*(uint *)(param_1 + 0x50) * 4 + (int)__dest),0,
                     (uVar8 - *(uint *)(param_1 + 0x50) & 0x3fffffff) << 2);
        piVar1 = *(int **)(puVar4 + 8);
        *(void **)(param_1 + 0x58) = __dest;
        *(int *)(param_1 + 0x54) = (int)uVar8;
        (*(code *)**(undefined4 **)(*piVar1 + 4))(piVar1,__src,0x10010100,0,0);
      }
    }
    puVar2 = *(undefined4 **)(puVar4 + 8);
    sVar6 = strlen(param_2);
    iVar7 = (*(code *)**(undefined4 **)*puVar2)(puVar2,sVar6 + 1,0x10020100,0,0);
    if (iVar7 == 0) {
LAB_0051b6a0:
      lwmutex_unlock_checked(iVar5);
      return;
    }
    sVar6 = strlen(param_2);
    FUN_005193cc(iVar7,param_2,sVar6 + 1);
    iVar3 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar3 + 1;
    *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x58)) = iVar7;
    lwmutex_unlock_checked(iVar5);
  }
  return;
}


// 0x051b714 (0x2c bytes)
void FUN_0051b714(int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071aae8;
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  *(undefined4 *)PTR_DAT_0071aae8 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}


// 0x051b740 (0x10 bytes)
void FUN_0051b740(void)

{
  FUN_0051b714(1,0xffff);
  return;
}


