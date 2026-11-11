// sdk/libfios/fios_caching.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 50 functions, 0x5309c8-0x537da8
#include <string.h>
#include "sdk/libfios/fios_caching.h"
#include "game/hero.h"
#include "sdk/cell.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_media.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_paths.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/libfios/fios_watch.h"

// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::getNthBlockOfRequest(cell::fios::mediarequest const*, int, cell::fios::cache::blockrequest*)  [exact match]
// 0x05309c8 (0xfc bytes)
undefined4 * FUN_005309c8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_10;
  ulonglong local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_4[6] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  uVar2 = *(uint *)(param_1 + 0xdc);
  *(undefined8 *)(param_4 + 2) = 0;
  uVar3 = (ulonglong)uVar2;
  lVar4 = *(longlong *)(param_2 + 0x30);
  *param_4 = uVar1;
  *(ulonglong *)(param_4 + 2) = uVar3 * (longlong)(param_3 + (int)(lVar4 / (longlong)uVar3));
  if (param_3 == 0) {
    lVar4 = *(longlong *)(param_2 + 0x30);
    lVar5 = *(longlong *)(param_2 + 0x40);
    param_4[4] = (int)lVar4 - (int)(lVar4 / (longlong)uVar3) * uVar2;
    local_10 = (lVar4 + lVar5) - ((ulonglong)(uint)param_4[4] + *(longlong *)(param_4 + 2));
    local_8 = (ulonglong)*(uint *)(param_1 + 0xdc) - (ulonglong)(uint)param_4[4] & 0xffffffff;
    if (local_10 <= (longlong)local_8) {
LAB_00530ab0:
      param_4[5] = (int)local_10;
      return param_4;
    }
  }
  else {
    local_10 = (*(longlong *)(param_2 + 0x30) + *(longlong *)(param_2 + 0x40)) -
               ((ulonglong)(uint)param_4[4] + *(longlong *)(param_4 + 2));
    local_8 = (ulonglong)uVar2 - (ulonglong)(uint)param_4[4] & 0xffffffff;
    if (local_10 <= (longlong)local_8) goto LAB_00530ab0;
  }
  param_4[5] = (int)local_8;
  return param_4;
}


// 0x0530ac4 (0x50 bytes)
bool FUN_00530ac4(undefined8 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(ushort *)(param_2 + 0x54) & 4) == 0) {
    bVar1 = true;
    if (2 < param_4) {
      return param_4 <= param_3 + 1;
    }
  }
  return bVar1;
}


// 0x0530b14 (0x4 bytes)
void FUN_00530b14(void)

{
  return;
}


// 0x0530b18 (0x10 bytes)
ulonglong FUN_00530b18(undefined8 param_1,int param_2)

{
  return ((ulonglong)*(ushort *)(param_2 + 0x54) ^ 8) >> 3 & 1;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::countBlocksInRequest(cell::fios::mediarequest const*)  [exact match]
// 0x0530b28 (0x58 bytes)
int FUN_00530b28(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (0 < lVar3) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0xdc);
    iVar2 = 0x7fffffff;
    if (lVar3 < (longlong)(uVar1 * 0x7ffffffe)) {
      iVar2 = ((int)((lVar3 + *(longlong *)(param_2 + 0x30) + -1) / (longlong)uVar1) -
              (int)(*(longlong *)(param_2 + 0x30) / (longlong)uVar1)) + 1;
    }
  }
  return iVar2;
}


// 0x0530b80 (0x1b0 bytes)
// strings: 00669308: 'warning: cache persistence overflow (cache has filled with kOPF_CACHEPERSIST blocks)\n'

uint FUN_00530b80(int param_1,int param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar13;
  uint uVar12;
  
  instructionSynchronize();
  lVar3 = (ulonglong)*(uint *)(param_1 + 0xec) + 1;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar1 < 1) goto LAB_00530d0c;
    iVar4 = *(int *)(param_1 + 0xe4);
    uVar13 = (ulonglong)uVar1;
    uVar5 = 0x7fffffffffffffff;
    uVar6 = 0;
    do {
      uVar8 = lVar3 - (longlong)((int)lVar3 / (int)uVar1) * (longlong)(int)uVar1;
      lVar3 = lVar3 + 1;
      puVar2 = (ulonglong *)
               (iVar4 + ((int)((uVar8 & 0xffffffff) << 6) - (int)((uVar8 & 0xffffffff) << 3)));
      uVar7 = *puVar2;
      if ((((-1 < (longlong)puVar2[4]) && (uVar7 < uVar5)) && (uVar7 != 3)) && (uVar7 != 2)) {
        uVar5 = uVar7;
        uVar6 = uVar8;
      }
      uVar12 = (uint)uVar6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar1 < 1) {
LAB_00530d0c:
      iVar4 = *(int *)(param_1 + 0xe4);
      uVar12 = 0;
      iVar9 = 0;
      goto LAB_00530c40;
    }
    iVar4 = *(int *)(param_1 + 0xe4);
    uVar13 = (ulonglong)uVar1;
    uVar5 = 0x7fffffffffffffff;
    lVar10 = 0;
    do {
      lVar11 = lVar3 - (longlong)((int)lVar3 / (int)uVar1) * (longlong)(int)uVar1;
      uVar12 = (uint)lVar11;
      lVar3 = lVar3 + 1;
      iVar9 = uVar12 * 0x40 + (uVar12 & 0x1fffffff) * -8;
      uVar6 = *(ulonglong *)(iVar4 + iVar9);
      if (((-1 < (longlong)((ulonglong *)(iVar4 + iVar9))[4]) && (uVar6 < uVar5)) &&
         ((uVar6 != 3 && (uVar5 = uVar6, lVar10 = lVar11, uVar6 == 2)))) goto LAB_00530c40;
      uVar12 = (uint)lVar10;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  iVar9 = uVar12 * 0x40 + (uVar12 & 0x1fffffff) * -8;
LAB_00530c40:
  if (*(longlong *)(iVar9 + iVar4 + 0x20) < 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_warning__cache_persistence_overf_0071aedc);
  }
  sync(1);
  *(uint *)(param_1 + 0xec) = uVar12;
  return uVar12;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::getDatesFromCache(char const*, unsigned long long*, unsigned long long*)  [exact match]
// 0x0530d30 (0x1cc bytes)
void FUN_00530d30(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong *puVar8;
  ulonglong uVar7;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_30;
  longlong local_28;
  
  uVar5 = local_40;
  uVar4 = local_48;
  FUN_0051c9a4(&local_30);
  uVar1 = *(uint *)(param_1 + 0xe0);
  local_40 = 0x7fffffffffffffff;
  *param_3 = 0;
  *param_4 = 0;
  local_48 = 0x7fffffffffffffff;
  if (0 < (int)uVar1) {
    uVar10 = (ulonglong)uVar1;
    iVar6 = 0;
    do {
      while( true ) {
        plVar9 = (longlong *)(iVar6 + *(int *)(param_1 + 0xe4));
        iVar6 = iVar6 + 0x38;
        if ((1 < *plVar9 - 2U) && (plVar9[5] == local_30)) break;
LAB_00530dd8:
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_00530ddc;
      }
      puVar8 = (ulonglong *)(plVar9 + 2);
      if (plVar9[6] != local_28) goto LAB_00530dd8;
      if (local_48 < (ulonglong)plVar9[1]) {
        uVar7 = *puVar8;
        local_48 = uVar4;
      }
      else {
        local_48 = plVar9[1];
        uVar7 = *puVar8;
      }
      bVar3 = uVar7 <= local_40;
      local_40 = uVar5;
      if (bVar3) {
        local_40 = *puVar8;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_00530ddc:
  if (local_48 == 0x7fffffffffffffff) {
    if (local_40 == 0x7fffffffffffffff) {
      return;
    }
  }
  else if (local_48 < 2) {
    iVar6 = -0x38;
    goto LAB_00530e08;
  }
  iVar6 = -0x48;
LAB_00530e08:
  iVar2 = -0x40;
  *param_3 = *(undefined8 *)(&stack0x00000000 + iVar6);
  if (local_40 < 2) {
    iVar2 = -0x50;
  }
  *param_4 = *(undefined8 *)(&stack0x00000000 + iVar2);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::compareDescriptor(void const*, void const*)  [exact match]
// 0x0530efc (0x84 bytes)
uint FUN_00530efc(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  uVar3 = FUN_0051c978(param_1 + 0x28,iVar1 + 0x28);
  if (uVar3 == 0) {
    lVar2 = *(longlong *)(iVar1 + 0x18);
    uVar3 = 0xffffffff;
    if (lVar2 <= *(longlong *)(param_1 + 0x18)) {
      uVar3 = (uint)(lVar2 < *(longlong *)(param_1 + 0x18));
    }
  }
  return uVar3;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::resizeCacheFile(cell::fios::filehandle*, long long)  [fuzzy 0.990 match]
// 0x0530f80 (0x1c4 bytes)
// strings: 00669398: '/dev_hdd0' | 006693a8: '/dev_hdd1' | 00669360: "FIOS cache couldn't resolve %s! Cache is disabled.\n"

undefined4 FUN_00530f80(undefined8 param_1,int param_2,longlong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_184;
  GPiece<8> local_140;
  GPiece<8> local_138;
  GPiece<272> auStack_130;
  
  if (param_2 != 0) {
    pcVar4 = (char *)0x0;
    if (**(char **)(param_2 + 0x30) != '\0') {
      pcVar4 = *(char **)(param_2 + 0x30);
    }
    FUN_005193cc(auStack_130,pcVar4,0x100);
    uVar2 = FUN_00520bd8(*(undefined4 *)(param_2 + 8),0,auStack_130,0);
    iVar3 = _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
    if (iVar3 != 0) {
      pcVar4 = (char *)0x0;
      if (**(char **)(param_2 + 0x30) != '\0') {
        pcVar4 = *(char **)(param_2 + 0x30);
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_couldn_t_resolve__s__C_0071aee0,pcVar4);
      return 0;
    }
    iVar3 = FUN_005ccb28(auStack_130,PTR_s__dev_hdd0_0071aee4,9);
    puVar1 = PTR_s__dev_hdd0_0071aee4;
    if ((((iVar3 == 0) ||
         (iVar3 = FUN_005ccb28(auStack_130,PTR_s__dev_hdd1_0071aee8,9),
         puVar1 = PTR_s__dev_hdd1_0071aee8, iVar3 == 0)) &&
        (iVar3 = cellFsGetFreeSize(puVar1,local_140,local_138), iVar3 == 0)) && (-1 < param_3)
       ) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_184 + -0x743c),auStack_130,puVar1);
      return 0;
    }
  }
  return 1;
}


// 0x0531144 (0x128 bytes)
int FUN_00531144(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *(double *)PTR_DAT_0071aef0;
  dVar5 = (double)DAT_0071aef4;
  dVar6 = (double)DAT_0071aef8;
  while( true ) {
    iVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(param_1,param_2);
    if (iVar3 != -2) break;
    FUN_0052cd7c(param_1 + 0x26);
    do {
      lVar1 = TBLr;
    } while ((int)lVar1 == 0);
    dVar4 = dVar7 * dVar5;
    if (dVar4 < dVar6) {
      uVar2 = (ulonglong)dVar4;
    }
    else {
      uVar2 = (longlong)(dVar4 - dVar6) ^ 0x8000000000000000;
    }
    FUN_0052e984(lVar1 + uVar2);
    FUN_0052ce28(param_1 + 0x26);
  }
  return iVar3;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::~cache()  [exact match]
// 0x053126c (0xcc bytes)
void FUN_0053126c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aefc;
  if (param_1[0x39] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x39],0x100b0103,0,0);
  }
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  FUN_00510704(param_1,0x10000100,2);
  return;
}


// 0x0531338 (0x1a8 bytes)
// strings: 00669448: 'cache' | 00669450: 'cache_rwlock' | 00669460: 'cache_fillFunnel' | 00669478: "cache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for index\n"

void FUN_00531338(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00519ecc(param_1,PTR_s_cache_0071af04,param_2);
  puVar3 = PTR_s_cache_rwlock_0071af08;
  *param_1 = PTR_PTR_0071aefc;
  FUN_0052e1dc(param_1 + 0x26,puVar3);
  FUN_0052d370(param_1 + 0x2c,PTR_s_cache_fillFunnel_0071af0c);
  puVar1 = *(undefined4 **)(PTR_DAT_0071af00 + 8);
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  param_1[0x3b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x37] = param_4;
  param_1[0x40] = 0;
  param_1[0x38] = param_3;
  param_1[0x41] = 0;
  param_1[2] = 0x63616368;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0xdb) = 1;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar4 = (*(code *)**(undefined4 **)*puVar1)
                    (puVar1,param_3 * 0x40 + (param_3 & 0x1fffffff) * -8,0x100b0103,0,0);
  param_1[0x39] = iVar4;
  if (iVar4 != 0) {
    memset(iVar4,0,param_1[0x38] * 0x40 + (param_1[0x38] & 0x1fffffff) * -8);
  }
  if (param_1[0x39] == 0) {
    uVar2 = param_1[0x38];
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_cache__lux_lu__failed_to_initial_0071af10,uVar2,param_1[0x37],
                     uVar2 * 0x40 + (uVar2 & 0x1fffffff) * -8);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}


// 0x05314e0 (0xbc bytes)
// strings: 006694c8: "ramcache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for RAM cache\n"

void FUN_005314e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00531338();
  puVar3 = PTR_DAT_0071af00;
  iVar1 = param_1[0x38];
  *param_1 = PTR_PTR_0071af14;
  iVar2 = param_1[0x37];
  iVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar3 + 8))
                    (*(undefined4 **)(puVar3 + 8),iVar1 * iVar2,0x100c010c,0,0);
  param_1[0x44] = iVar4;
  if (iVar4 == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_ramcache__lux_lu__failed_to_init_0071af18,param_1[0x38],param_1[0x37],
                     iVar1 * iVar2);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}


// 0x053159c (0xbc bytes)
// strings: 006694c8: "ramcache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for RAM cache\n"

void FUN_0053159c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00531338();
  puVar3 = PTR_DAT_0071af00;
  iVar1 = param_1[0x38];
  *param_1 = PTR_PTR_0071af14;
  iVar2 = param_1[0x37];
  iVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar3 + 8))
                    (*(undefined4 **)(puVar3 + 8),iVar1 * iVar2,0x100c010c,0,0);
  param_1[0x44] = iVar4;
  if (iVar4 == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_ramcache__lux_lu__failed_to_init_0071af18,param_1[0x38],param_1[0x37],
                     iVar1 * iVar2);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::openCacheFile(char const*)  [exact match]
// 0x0531658 (0x140 bytes)
// strings: 00669520: '%s/%s' | 00669528: "FIOS openCacheFile('%s') failed, err = %d\n"

undefined4 FUN_00531658(int param_1,char *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *__s;
  size_t sVar6;
  size_t sVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar5 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar5 - 0xb0);
  *puVar2 = uVar5;
  puVar2[0x14] = unaff_r30;
  puVar2[0x11] = unaff_r27;
  puVar2[0x12] = unaff_r28;
  puVar2[0x15] = unaff_r31;
  puVar2[0x13] = unaff_r29;
  puVar2[0x18] = in_LR;
  __s = (char *)0x0;
  if (*(char *)(param_1 + 0x124) != '\0') {
    __s = (char *)(param_1 + 0x124);
  }
  sVar6 = strlen(__s);
  sVar7 = strlen(param_2);
  uVar3 = (longlong)(int)sVar7 + (longlong)(int)sVar6 + 2 & 0xffffffff;
  iVar9 = 0;
  lVar1 = (uVar5 - 0xb0) - (uVar3 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar1 = *puVar2;
  uVar4 = lVar1 + 0x70U & 0xffffffff;
  if (*(char *)(param_1 + 0x124) != '\0') {
    iVar9 = param_1 + 0x124;
  }
  FUN_005cd198(uVar4,uVar3,PTR_s__s__s_0071af1c,iVar9,param_2);
  uVar8 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(puVar2 + 0xe) = 0;
  uVar8 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar8,0,uVar4,0xb,uVar5 - 0x40);
  iVar9 = _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
  if (iVar9 == 0) {
    uVar8 = *(undefined4 *)(puVar2 + 0xe);
  }
  else {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_openCacheFile___s___failed__0071af20,uVar4,iVar9);
    uVar8 = 0;
  }
  return uVar8;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::updateLookupTable(int, cell::fios::md5path, long long)  [exact match]
// 0x0531798 (0x298 bytes)
// strings: 00669558: 'FIOS cache lookup no existing descriptor while updating!\n'

void FUN_00531798(int param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  GPiece<72> auStack_90;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x234);
  iVar10 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
  uVar1 = *(ulonglong *)(iVar10 + *(int *)(param_1 + 0xe4)) ^ 2;
  uVar9 = (longlong)uVar1 >> 0x3f;
  lVar7 = ((uVar9 ^ uVar1) - uVar9) + -1;
  if (lVar7 < 0) {
    uVar13 = *(uint *)(param_1 + 0x230);
    uVar1 = uVar8;
  }
  else {
    iVar4 = FUN_005c4d8c(auStack_90,*(undefined4 *)(param_1 + 0x230),*(uint *)(param_1 + 0x234),4,
                         PTR_PTR_0071af24);
    if (iVar4 == 0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_lookup_no_existing_de_0071af28);
      return;
    }
    uVar13 = *(uint *)(param_1 + 0x230);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x234);
    uVar1 = (ulonglong)((int)(iVar4 - uVar13) >> 2);
  }
  uVar5 = (ulonglong)uVar13;
  uVar9 = 0;
  uVar14 = 0;
  iVar4 = (int)uVar1;
  if (0 < (int)uVar8) {
    uVar12 = 0;
    do {
      lVar2 = uVar8 + uVar12;
      uVar9 = (ulonglong)(lVar2 << 0x20) >> 0x21;
      uVar14 = (uVar9 & 0x3fffffff) * 4;
      iVar11 = (int)uVar14;
      iVar3 = FUN_00530efc(auStack_90,uVar14 + uVar5 & 0xffffffff);
      if (-1 < iVar3) {
        if ((iVar3 == 0) || (uVar12 = uVar9 + 1, uVar8 <= uVar12)) goto LAB_005318a4;
      }
      else {
        uVar8 = uVar9;
        if (uVar9 <= uVar12) goto LAB_005318a4;
      }
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
    } while( true );
  }
LAB_005318c0:
  uVar6 = (uint)uVar5;
  uVar13 = (uint)uVar9;
  iVar11 = (int)((uVar9 & 0x3fffffff) << 2);
  if ((int)uVar13 < iVar4) {
LAB_00531958:
    iVar11 = (int)uVar14;
    FUN_005c6094(uVar5 + uVar14 + 4 & 0xffffffff,uVar5 + uVar14 & 0xffffffff,
                 (uVar1 - uVar9 & 0x3fffffff) << 2);
    uVar6 = *(uint *)(param_1 + 0x230);
    goto LAB_005318d8;
  }
joined_r0x00531944:
  if (iVar4 < (int)uVar13) {
    uVar5 = uVar5 + (uVar1 & 0x3fffffff) * 4;
    FUN_005c6094(uVar5 & 0xffffffff,uVar5 + 4 & 0xffffffff,(uVar9 - uVar1 & 0x3fffffff) << 2);
    uVar6 = *(uint *)(param_1 + 0x230);
  }
LAB_005318d8:
  *(int *)(iVar11 + uVar6) = iVar10 + *(int *)(param_1 + 0xe4);
  if (lVar7 < 0) {
    *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  }
  return;
LAB_005318a4:
  uVar13 = (uint)lVar2 >> 1;
  if ((int)uVar13 < iVar4) {
    if (0 < iVar3) {
      uVar9 = uVar9 + 1;
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
      uVar14 = uVar9 * 4 & 0xfffffffc;
      goto LAB_005318c0;
    }
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
    goto LAB_00531958;
  }
  if ((iVar4 < (int)uVar13) && (-1 >= iVar3)) {
    uVar9 = uVar9 - 1;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
    uVar14 = (uVar9 & 0x3fffffff) << 2;
    goto LAB_005318c0;
  }
  uVar6 = *(uint *)(param_1 + 0x230);
  uVar5 = (ulonglong)uVar6;
  goto joined_r0x00531944;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::removeLookupTableEntry(int)  [exact match]
// 0x0531a30 (0x110 bytes)
// strings: 00531b1c: 'H\tEy`' (raw) | 00669598: 'FIOS cache lookup no existing descriptor on removal!\n'

void FUN_00531a30(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  GPiece<72> auStack_50;
  
  iVar2 = FUN_005c4d8c(auStack_50,*(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),
                       4,PTR_PTR_0071af24);
  if (iVar2 == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_lookup_no_existing_de_0071af2c);
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x234);
    iVar3 = *(int *)(param_1 + 0x230);
    iVar2 = iVar2 - iVar3 >> 2;
    if (1 < (int)*(uint *)(param_1 + 0x234)) {
      uVar1 = (uVar4 - (longlong)iVar2) - 1;
      iVar2 = iVar3 + iVar2 * 4;
      if ((int)uVar1 != 0) {
        FUN_005c6094(iVar2,iVar2 + 4,(uVar1 & 0x3fffffff) << 2);
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x234);
        iVar3 = *(int *)(param_1 + 0x230);
      }
    }
    *(int *)(param_1 + 0x234) = (int)(uVar4 - 1);
    *(undefined4 *)((int)((uVar4 - 1 & 0xffffffff) << 2) + iVar3) = 0;
  }
  return;
}


// 0x0531b40 (0x1a8 bytes)
// strings: 00669448: 'cache' | 00669450: 'cache_rwlock' | 00669460: 'cache_fillFunnel' | 00669478: "cache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for index\n"

void FUN_00531b40(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00519ecc(param_1,PTR_s_cache_0071af04,param_2);
  puVar3 = PTR_s_cache_rwlock_0071af08;
  *param_1 = PTR_PTR_0071aefc;
  FUN_0052e1dc(param_1 + 0x26,puVar3);
  FUN_0052d370(param_1 + 0x2c,PTR_s_cache_fillFunnel_0071af0c);
  puVar1 = *(undefined4 **)(PTR_DAT_0071af00 + 8);
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  param_1[0x3b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x37] = param_4;
  param_1[0x40] = 0;
  param_1[0x38] = param_3;
  param_1[0x41] = 0;
  param_1[2] = 0x63616368;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0xdb) = 1;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar4 = (*(code *)**(undefined4 **)*puVar1)
                    (puVar1,param_3 * 0x40 + (param_3 & 0x1fffffff) * -8,0x100b0103,0,0);
  param_1[0x39] = iVar4;
  if (iVar4 != 0) {
    memset(iVar4,0,param_1[0x38] * 0x40 + (param_1[0x38] & 0x1fffffff) * -8);
  }
  if (param_1[0x39] == 0) {
    uVar2 = param_1[0x38];
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_cache__lux_lu__failed_to_initial_0071af10,uVar2,param_1[0x37],
                     uVar2 * 0x40 + (uVar2 & 0x1fffffff) * -8);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::invalidateBlock(int, char const*)  [fuzzy 1.000 match]
// 0x0531ce8 (0x17c bytes)
// strings: 006695d0: 'HDD cache' | 006695e0: 'RAM cache'

void FUN_00531ce8(int *param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  (*(code *)**(undefined4 **)(*param_1 + 0x40))(param_1,param_2);
  iVar3 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
  if ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0) {
    puVar1 = PTR_s_RAM_cache_0071af34;
    if (*(char *)((int)param_1 + 0xd9) != '\0') {
      puVar1 = PTR_s_HDD_cache_0071af30;
    }
    iVar3 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
    FUN_005260ac(puVar1,*(undefined8 *)(iVar3 + param_1[0x39] + 0x18),
                 *(uint *)(iVar3 + param_1[0x39] + 0x20) & 0x3fffffff,param_2,param_3);
  }
  puVar2 = (undefined8 *)(iVar3 + param_1[0x39]);
  puVar2[3] = 0;
  *puVar2 = 2;
  puVar2[4] = puVar2[4] & 0x7fffffffffffffff;
  *(ulonglong *)(iVar3 + param_1[0x39] + 0x20) =
       *(ulonglong *)(iVar3 + param_1[0x39] + 0x20) & 0xc0000000ffffffff;
  FUN_0051c9a4(iVar3 + param_1[0x39] + 0x28,0);
  (*(code *)**(undefined4 **)(*param_1 + 0x3c))(param_1,param_2);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::lookup(cell::fios::cache::blockrequest*)  [exact match]
// 0x0531e64 (0x100 bytes)
int FUN_00531e64(int param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar3;
  longlong lVar2;
  int iVar4;
  GPiece<40> auStack_60;
  GPiece<32> local_38;
  
  iVar4 = -1;
  if (*param_2 != 0) {
    FUN_0051c9a4(local_38,*param_2);
  }
  piVar3 = (int *)FUN_005c4d8c(auStack_60,*(undefined4 *)(param_1 + 0x230),
                               *(undefined4 *)(param_1 + 0x234),4,PTR_PTR_0071af24);
  if (piVar3 != (int *)0x0) {
    iVar4 = *piVar3 - *(int *)(param_1 + 0xe4) >> 3;
    plVar1 = (longlong *)(*(int *)(param_1 + 0xe4) + iVar4 * 8);
    if (*plVar1 != 3) {
      lVar2 = FUN_0052c8c4();
      *plVar1 = lVar2;
      return iVar4 * -0x49249249;
    }
    iVar4 = -2;
  }
  return iVar4;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::lookup(cell::fios::cache::blockrequest*)  [exact match]
// 0x0531f64 (0x11c bytes)
int FUN_00531f64(int param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  GPiece<24> local_30;
  
  if (*param_2 != 0) {
    FUN_0051c9a4(local_30,*param_2);
  }
  if (0 < (int)*(uint *)(param_1 + 0xe0)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xe0);
    plVar2 = *(longlong **)(param_1 + 0xe4);
    iVar3 = 0;
    do {
      if ((*plVar2 != 2) && (*(longlong *)(param_2 + 2) == plVar2[3])) {
        if (*param_2 == 0) {
          lVar1 = plVar2[5];
        }
        else {
          if (plVar2[5] != 0) goto LAB_00531fd4;
          lVar1 = plVar2[6];
        }
        if (lVar1 == 0) {
          if (*plVar2 != 3) {
            lVar1 = FUN_0052c8c4();
            *plVar2 = lVar1;
            return iVar3;
          }
          return -2;
        }
      }
LAB_00531fd4:
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 7;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return -1;
}


// 0x0532080 (0xb4 bytes)
void FUN_00532080(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aefc;
  if (param_1[0x39] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x39],0x100b0103,0,0);
  }
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}


// 0x0532134 (0xb4 bytes)
void FUN_00532134(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aefc;
  if (param_1[0x39] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x39],0x100b0103,0,0);
  }
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::speculateIOP(cell::fios::mediaioparams*)  [exact match]
// 0x05321e8 (0x280 bytes)
void FUN_005321e8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  GPiece<8> auStack_100;
  longlong local_f8;
  uint local_f0;
  undefined4 local_ec;
  GPiece<12> local_e0;
  int local_d4;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  undefined4 local_90;
  undefined2 local_8c;
  
  piVar1 = *(int **)(param_2 + 0x24);
  if ((*piVar1 == 10) || ((*piVar1 == 0x11 && (*(char *)(param_1 + 0xd9) != '\0')))) {
    if (*(longlong *)(piVar1 + 0x10) == 0x7fffffffffffffff) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = FUN_00530b28(param_1,piVar1);
      if (iVar4 < 1) {
        return;
      }
    }
    puVar3 = PTR_DAT_0071af38;
    iVar5 = 0;
    do {
      FUN_005309c8(param_1,piVar1,iVar5,auStack_100);
      local_90 = 0;
      local_8c = 0;
      local_d0 = (GPiece<16>)0x0;
      _local_e0 = ZEXT816(0);
      local_a0 = (GPiece<16>)0x0;
      iVar5 = iVar5 + 1;
      local_c0 = (GPiece<16>)0x0;
      local_b0 = (GPiece<16>)0x0;
      _ZN4cell4fios8pathhashEPKc(0);
      local_d0.piece<8,4>() = *(undefined4 *)(puVar3 + 8);
      stack0xffffff24 = local_e0 << 0x20;
      local_e0.piece<0,4>() = 10;
      local_8c = *(undefined2 *)(piVar1 + 0x15);
      local_d0.piece<4,4>() = piVar1[5];
      local_d0.piece<0,4>() = piVar1[4];
      local_d0.piece<8,4>() = piVar1[6];
      local_c0.piece<8,4>() = piVar1[10];
      local_c0.piece<0,8>() = *(undefined8 *)(piVar1 + 8);
      local_e0.piece<8,4>() = piVar1[2];
      local_d4 = piVar1[3];
      local_a0.piece<4,4>() = local_ec;
      local_a0.piece<0,4>() = 0;
      local_b0.piece<0,8>() = local_f8 + (ulonglong)local_f0;
      local_90 = 0;
      piVar2 = *(int **)(param_1 + 0x40);
      *(undefined1 **)(param_2 + 0x24) = local_e0;
      (*(code *)**(undefined4 **)(*piVar2 + 8))(piVar2,param_2);
      *(int **)(param_2 + 0x24) = piVar1;
    } while (iVar5 < iVar4);
  }
  else {
    (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::flushFilePartial(char const*, long long, long long)  [fuzzy 1.000 match]
// 0x0532468 (0x1f8 bytes)
// strings: 006695f0: 'cache-flushfil'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00532468(int *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar4;
  longlong lVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong in_stack_00000040;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  
  if (param_2 != 0) {
    FUN_0051c9a4(&local_60,param_2);
    _ZN4cell4fios8platform6rwlock9writeLockEv(param_1 + 0x26);
    iVar1 = param_1[0x38];
    if (0 < iVar1) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          plVar4 = (longlong *)(iVar5 + param_1[0x39]);
          iVar5 = iVar5 + 0x38;
          if (((*plVar4 - 2U < 2) || (plVar4[5] != local_60)) || (plVar4[6] != local_58)) break;
          lVar2 = param_3 + param_4;
          if (param_3 < plVar4[3]) {
            lVar3 = plVar4[3];
            local_70 = ((ulonglong)*(uint *)(plVar4 + 4) & 0x3fffffff) + plVar4[3];
            if (local_70 <= lVar2) goto LAB_0053261c;
LAB_00532598:
            if (lVar2 <= lVar3) break;
          }
          else {
            local_70 = ((ulonglong)*(uint *)(plVar4 + 4) & 0x3fffffff) + plVar4[3];
            lVar3 = in_stack_00000040;
            if (lVar2 < local_70) goto LAB_00532598;
LAB_0053261c:
            if (local_70 <= lVar3) break;
          }
          iVar7 = iVar6 + 1;
          (*(code *)**(undefined4 **)(*param_1 + 0x38))(param_1,iVar6,PTR_s_cache_flushfil_0071af3c)
          ;
          iVar1 = param_1[0x38];
          iVar6 = iVar7;
          if (iVar1 <= iVar7) goto LAB_005325dc;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
LAB_005325dc:
    FUN_0052cc20(param_1 + 0x26);
  }
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::isRequestInCache(cell::fios::filerange_t*)  [fuzzy 1.000 match]
// 0x0532660 (0x1e8 bytes)
undefined4 FUN_00532660(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GPiece<32> auStack_c0;
  GPiece<104> local_a0;
  
  _ZN4cell4fios8pathhashEPKc(0);
  _ZN4cell4fios8pathhashEPKc(param_2);
  piVar1 = param_1 + 0x26;
  FUN_0052ce28(piVar1);
  iVar2 = FUN_00530b28(param_1,local_a0);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      FUN_005309c8(param_1,local_a0,iVar3,auStack_c0);
      iVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(param_1,auStack_c0);
      if (iVar3 == -1) {
        FUN_0052cd7c(piVar1);
        return 0;
      }
      iVar3 = iVar4;
    } while (iVar2 != iVar4);
  }
  FUN_0052cd7c(piVar1);
  return 1;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::isRequestInCache(char const*, long long, long long)  [exact match]
// 0x0532848 (0x78 bytes)
undefined1 FUN_00532848(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  GPiece<272> auStack_140;
  
  FUN_005193cc(auStack_140,param_2,0x100);
  uVar1 = FUN_00532660(param_1,auStack_140);
  return uVar1;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::flush()  [fuzzy 1.000 match]
// 0x05328c0 (0xdc bytes)
// strings: 00669600: 'cache-flush'

void FUN_005328c0(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _ZN4cell4fios8platform6rwlock9writeLockEv(param_1 + 0x26);
  iVar2 = param_1[0x38];
  if (0 < iVar2) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      plVar1 = (longlong *)(iVar3 + param_1[0x39]);
      iVar5 = iVar4 + 1;
      iVar3 = iVar3 + 0x38;
      if (1 < *plVar1 - 2U) {
        (*(code *)**(undefined4 **)(*param_1 + 0x38))(param_1,iVar4,PTR_s_cache_flush_0071af40);
        iVar2 = param_1[0x38];
      }
      iVar4 = iVar5;
    } while (iVar5 < iVar2);
  }
  FUN_0052cc20(param_1 + 0x26);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::createDirectories(cell::fios::scheduler*, char const*)  [exact match]
// 0x053299c (0x200 bytes)
// strings: 00669658: "createDirectories: couldn't create '%s' when creating '%s'. err = %d\n" | 00669610: "createDirectories: couldn't stat '%s' when creating '%s'. err = %d\n"

int FUN_0053299c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  char local_150 [8];
  undefined1 uStack_148;
  char acStack_147 [271];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar1 = _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(param_1,0,param_2,local_150,5);
  iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
  if ((iVar2 != 0) || (local_150[0] == '\0')) {
    FUN_00519f24(param_2,&uStack_148);
    pcVar3 = strchr(acStack_147,0x2f);
    while( true ) {
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
      uVar1 = _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(param_1,0,&uStack_148,local_150,5);
      iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
      if (iVar2 != 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_createDirectories__couldn_t_stat_0071af44,&uStack_148,param_2,iVar2);
        return iVar2;
      }
      if (local_150[0] == '\0') {
        uVar1 = FUN_00521228(param_1,0,&uStack_148);
        iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
        if (iVar2 != 0) {
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_createDirectories__couldn_t_crea_0071af48,&uStack_148,param_2,iVar2
                          );
          return iVar2;
        }
      }
      if (pcVar3 == (char *)0x0) break;
      *pcVar3 = '/';
      pcVar3 = strchr(pcVar3 + 1,0x2f);
    }
  }
  return 0;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::flushPartial(long long)  [fuzzy 1.000 match]
// 0x0532b9c (0x180 bytes)
// strings: 006696a0: 'cache-flushprt'

void FUN_00532b9c(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((longlong)((longlong)param_1[0x38] * (ulonglong)(uint)param_1[0x37]) <= param_2) {
    (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
    return;
  }
  _ZN4cell4fios8platform6rwlock9writeLockEv(param_1 + 0x26);
  if ((0 < param_2) && (0 < param_1[0x38])) {
    lVar3 = 0;
    iVar4 = 0;
    while( true ) {
      iVar4 = iVar4 + 1;
      uVar1 = FUN_00530b80(param_1,0);
      plVar2 = (longlong *)
               (((int)((uVar1 & 0xffffffff) << 6) - (int)((uVar1 & 0xffffffff) << 3)) +
               param_1[0x39]);
      if (*plVar2 - 2U < 2) break;
      lVar3 = lVar3 + ((ulonglong)*(uint *)(plVar2 + 4) & 0x3fffffff);
      (*(code *)**(undefined4 **)(*param_1 + 0x38))
                (param_1,(int)uVar1,PTR_s_cache_flushprt_0071af4c);
      if ((param_2 <= lVar3) || (param_1[0x38] <= iVar4)) break;
    }
  }
  FUN_0052cc20(param_1 + 0x26);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::dumpCacheStats(char const*)  [exact match]
// 0x0532d1c (0x138 bytes)
// strings: 006696b0: '%0.1f%s' | 006696b8: '%s statistics:\n  Cache hits:   %-8lu (%s)\n  Cache misses: %-8lu\n  Cache fills:  %-8lu (%s)\n'

void FUN_00532d1c(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  float local_130;
  undefined4 local_12c;
  GPiece<100> auStack_128;
  float local_c4;
  undefined4 local_c0;
  GPiece<124> auStack_bc;
  
  instructionSynchronize();
  FUN_00519150(*(undefined8 *)(param_1 + 0xf8),&local_130,&local_12c);
  puVar1 = PTR_s__0_1f_s_0071af50;
  FUN_005cd198((double)local_130,auStack_128,100,PTR_s__0_1f_s_0071af50,(double)local_130,local_12c)
  ;
  instructionSynchronize();
  FUN_00519150(*(undefined8 *)(param_1 + 0x108),&local_c4,&local_c0);
  FUN_005cd198((double)local_c4,auStack_bc,100,puVar1,(double)local_c4,local_c0);
  instructionSynchronize();
  instructionSynchronize();
  instructionSynchronize();
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s__s_statistics__Cache_hits____8lu_0071af54,param_2,
                   *(undefined4 *)(param_1 + 0xf0),auStack_128,*(undefined4 *)(param_1 + 0x100),
                   *(undefined4 *)(param_1 + 0x104),auStack_bc);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::ramcache::~ramcache()  [exact match]
// 0x0532e54 (0xec bytes)
// strings: 006695e0: 'RAM cache'

void FUN_00532e54(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071af14;
  if (param_1[0x44] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x44],0x100c010c,0,0);
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_00532134(param_1);
    FUN_00510704(param_1,0x10000100,3);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_RAM_cache_0071af34);
  FUN_00532134(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}


// 0x0532f40 (0xb4 bytes)
// strings: 006695e0: 'RAM cache'

void FUN_00532f40(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071af14;
  if (param_1[0x44] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x44],0x100c010c,0,0);
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_RAM_cache_0071af34);
  FUN_00532134(param_1);
  return;
}


// 0x0532ff4 (0xb4 bytes)
// strings: 006695e0: 'RAM cache'

void FUN_00532ff4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071af14;
  if (param_1[0x44] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x44],0x100c010c,0,0);
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_RAM_cache_0071af34);
  FUN_00532134(param_1);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::ramcache::setCacheBlock(cell::fios::mediaioparams*, int, unsigned char const*, cell::fios::cache::blockrequest*)  [exact match]
// 0x05330a8 (0x98 bytes)
undefined8 FUN_005330a8(int param_1,undefined4 param_2,int param_3,void *param_4,int param_5)

{
  size_t __n;
  void *__dest;
  undefined4 uStack00000038;
  
  __n = *(size_t *)(param_5 + 0x14);
  __dest = (void *)(param_3 * *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0x110));
  uStack00000038 = param_2;
  if (__n < 0x1000) {
    memcpy(__dest,param_4,__n);
  }
  else {
    (*(code *)**(undefined4 **)(PTR_DAT_0071af00 + 0x10))(__dest,param_4,__n);
  }
  *(undefined4 *)(param_5 + 0x18) = *(undefined4 *)(param_5 + 0x14);
  return 1;
}


// 0x0533140 (0x6a8 bytes)
// strings: 00669718: 'FIOS cache descriptor[%d] load failed, err = %d\n' | 00669750: 'FIOS cache index padding failed, err = %d\n'

/* WARNING: Removing unreachable block (ram,0x00533280) */
/* WARNING: Removing unreachable block (ram,0x005332a0) */
/* WARNING: Removing unreachable block (ram,0x0053330c) */
/* WARNING: Removing unreachable block (ram,0x005333d8) */
/* WARNING: Removing unreachable block (ram,0x0053336c) */
/* WARNING: Removing unreachable block (ram,0x00533378) */
/* WARNING: Removing unreachable block (ram,0x0053338c) */

void FUN_00533140(int param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  GPiece<24> local_a0;
  GPiece<40> local_88;
  
  uVar6 = *(uint *)(param_1 + 0x22c);
  uVar9 = uVar6 * ((uVar6 + 0x37) / uVar6);
  iVar3 = 0;
  iVar7 = uVar6 * ((uVar6 + 0x2f) / uVar6);
  do {
    if (*(int *)(param_1 + 0xe0) < 1) {
      return;
    }
    if (iVar3 != 0) goto LAB_005336e4;
    iVar3 = -0xac;
    if ((int)(0x10000 / uVar9) <= *(int *)(param_1 + 0xe0)) {
      iVar3 = -0xa8;
    }
    uVar2 = read_req_setup
                      (*(undefined4 *)(*(int *)(param_1 + 0x224) + 8),local_88,
                       *(int *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x260),
                       uVar9 * *(int *)(&stack0x00000000 + iVar3),iVar7);
    iVar3 = _ZN4cell4fios2op8syncWaitEPx(uVar2,local_a0);
  } while ((iVar3 == -0x7ffef8f7) || (iVar3 == 0));
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_descriptor__d__load_f_0071af5c,0,iVar3);
  if (0 < *(int *)(param_1 + 0xe0)) {
LAB_005336e4:
    memset(*(undefined4 *)(param_1 + 0x260),0,0x10000);
    uVar6 = 0;
    while (uVar8 = uVar6, (int)uVar8 < *(int *)(param_1 + 0xe0)) {
      iVar3 = -0xa4;
      if ((int)(0x10000 / uVar9) <= (int)(*(int *)(param_1 + 0xe0) - uVar8)) {
        iVar3 = -0xb0;
      }
      iVar3 = *(int *)(&stack0x00000000 + iVar3);
      uVar2 = FUN_00525524(*(undefined4 *)(param_1 + 0x11c),local_88,
                           *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x260),
                           uVar9 * iVar3,iVar7 + uVar9 * uVar8);
      iVar4 = _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
      if (iVar4 != 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_index_padding_failed__0071af60,iVar4);
        return;
      }
      uVar6 = uVar8 + iVar3;
      if ((int)uVar8 < (int)uVar6) {
        iVar4 = uVar6 - uVar8;
        iVar3 = *(int *)(param_1 + 0xe4);
        iVar5 = uVar8 * 0x40 + (uVar8 & 0x1fffffff) * -8;
        do {
          puVar1 = (undefined8 *)(iVar5 + iVar3);
          iVar5 = iVar5 + 0x38;
          *puVar1 = 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::setCacheBlock(cell::fios::mediaioparams*, int, unsigned char const*, cell::fios::cache::blockrequest*)  [fuzzy 1.000 match]
// 0x05337e8 (0x2f8 bytes)
// strings: 00669520: '%s/%s' | 00669780: 'cache.dat' | 00669790: '%s/cach%04X.dat' | 006697a0: 'FIOS cache block[%d] write failed: err = %d\n' | 006695d0: 'HDD cache' | 006695e0: 'RAM cache'

undefined4 FUN_005337e8(int *param_1,int param_2,uint param_3,longlong param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar3;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  GPiece<40> local_180;
  GPiece<264> auStack_158;
  
  if (*(char *)(param_1 + 0x46) == '\0') {
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar7 = 0;
      FUN_005cd198(auStack_158,0x100,PTR_s__s_cach_04X_dat_0071af68,0,param_3);
    }
    else {
      uVar7 = 0;
      FUN_005cd198(auStack_158,0x100,PTR_s__s_cach_04X_dat_0071af68,param_1 + 0x49,param_3);
    }
  }
  else {
    piVar6 = (int *)0x0;
    if (*(char *)(param_1 + 0x49) != '\0') {
      piVar6 = param_1 + 0x49;
    }
    FUN_005cd198(auStack_158,0x100,PTR_s__s__s_0071af1c,piVar6,PTR_s_cache_dat_0071af64);
    uVar1 = param_1[0x8b];
    uVar7 = (longlong)(int)uVar1 * (longlong)(int)((uVar1 + 0x2f) / uVar1) +
            (longlong)(int)param_3 * (longlong)param_1[0x37] & 0xffffffff;
  }
  iVar8 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
  uVar1 = *(uint *)(PTR_DAT_0071af00 + 0x18);
  *(undefined8 *)(iVar8 + param_1[0x39]) = 3;
  if ((uVar1 & 2) != 0) {
    puVar2 = PTR_s_RAM_cache_0071af34;
    if (*(char *)((int)param_1 + 0xd9) != '\0') {
      puVar2 = PTR_s_HDD_cache_0071af30;
    }
    FUN_00527ccc(*(undefined4 *)(param_2 + 0xc),puVar2,*(undefined8 *)(param_5 + 8),param_1[0x37],
                 param_3);
  }
  (*(code *)**(undefined4 **)(*param_1 + 0x3c))(param_1,param_3);
  uVar4 = FUN_0052138c(param_1[0x47],local_180,auStack_158,
                       param_4 + (ulonglong)*(uint *)(param_5 + 0x10) & 0xffffffff,
                       uVar7 + *(uint *)(param_5 + 0x10),*(undefined4 *)(param_5 + 0x14));
  iVar5 = _ZN4cell4fios2op8syncWaitEPx(uVar4,0);
  if (iVar5 == 0) {
    if (param_1[0x8a] != 0) {
      uVar4 = FUN_005205b4(param_1[0x47],0,param_1[0x8a]);
      _ZN4cell4fios2op8syncWaitEPx(uVar4,0);
    }
    iVar5 = param_1[0x39];
    uVar3 = FUN_0052c8c4();
    *(undefined8 *)(iVar8 + iVar5) = uVar3;
    (*(code *)**(undefined4 **)(*param_1 + 0x3c))(param_1,param_3);
    uVar4 = 1;
  }
  else {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_block__d__write_faile_0071af6c,param_3,iVar5);
    uVar4 = 0;
  }
  return uVar4;
}


// 0x0533ae0 (0x39c bytes)
// strings: 00669790: '%s/cach%04X.dat' | 006697e0: 'FIOS cache index mass flush failed, err = %d\n' | 00669840: 'FIOS cache block[%d] delete failed, err = %d\n' | 006695d0: 'HDD cache' | 006695e0: 'RAM cache' | 006697d0: 'cache-flushall' | 00669810: 'FIOS cache index fsync failed, err = %d\n'

void FUN_00533ae0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar9;
  longlong lVar8;
  int iVar10;
  GPiece<40> local_198;
  GPiece<264> auStack_170;
  
  uVar1 = *(uint *)(param_1 + 0x22c);
  _ZN4cell4fios8platform6rwlock9writeLockEv(param_1 + 0x98);
  if ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0) {
    puVar2 = PTR_s_RAM_cache_0071af34;
    if (*(char *)(param_1 + 0xd9) != '\0') {
      puVar2 = PTR_s_HDD_cache_0071af30;
    }
    FUN_005260ac(puVar2,0,0,0,PTR_s_cache_flushall_0071af70);
  }
  memset(*(undefined4 *)(param_1 + 0x260),0,0x10000);
  iVar4 = *(int *)(param_1 + 0xe0);
  if (0 < iVar4) {
    iVar10 = 0;
    uVar9 = uVar1 * ((uVar1 + 0x37) / uVar1);
    do {
      iVar6 = uVar9 * iVar10;
      iVar5 = -0x19c;
      if ((int)(0x10000 / (ulonglong)uVar9) <= iVar4 - iVar10) {
        iVar5 = -0x1a0;
      }
      iVar10 = iVar10 + *(int *)(&stack0x00000000 + iVar5);
      uVar3 = FUN_00525524(*(undefined4 *)(param_1 + 0x11c),local_198,
                           *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x260),
                           uVar9 * *(int *)(&stack0x00000000 + iVar5),
                           uVar1 * ((uVar1 + 0x2f) / uVar1) + iVar6);
      iVar4 = _ZN4cell4fios2op8syncWaitEPx(uVar3,0);
      if (iVar4 != 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_index_mass_flush_fail_0071af74,iVar4);
      }
      iVar4 = *(int *)(param_1 + 0xe0);
    } while (iVar10 < iVar4);
  }
  uVar3 = FUN_005205b4(*(undefined4 *)(param_1 + 0x11c),local_198,*(undefined4 *)(param_1 + 0x224));
  iVar4 = _ZN4cell4fios2op8syncWaitEPx(uVar3,0);
  if (iVar4 != 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_index_fsync_failed__e_0071af78,iVar4);
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    iVar4 = 0;
    iVar10 = 0;
    do {
      plVar7 = (longlong *)(iVar10 + *(int *)(param_1 + 0xe4));
      lVar8 = *plVar7;
      plVar7[3] = 0;
      plVar7[4] = plVar7[4] & 0x7fffffffffffffff;
      iVar5 = *(int *)(param_1 + 0xe4);
      *plVar7 = 2;
      iVar5 = iVar10 + iVar5;
      *(ulonglong *)(iVar5 + 0x20) = *(ulonglong *)(iVar5 + 0x20) & 0xc0000000ffffffff;
      iVar5 = iVar10 + *(int *)(param_1 + 0xe4);
      iVar10 = iVar10 + 0x38;
      FUN_0051c9a4(iVar5 + 0x28,0);
      if ((*(char *)(param_1 + 0x118) == '\0') && (lVar8 != 2)) {
        iVar5 = 0;
        if (*(char *)(param_1 + 0x124) != '\0') {
          iVar5 = param_1 + 0x124;
        }
        FUN_005cd198(auStack_170,0x100,PTR_s__s_cach_04X_dat_0071af68,iVar5,iVar4);
        uVar3 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),local_198,auStack_170);
        iVar5 = _ZN4cell4fios2op8syncWaitEPx(uVar3,0);
        if ((iVar5 != 0) && (iVar5 != -0x7ffef8fb)) {
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_block__d__delete_fail_0071af7c,iVar4,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xe0));
  }
  memset(*(undefined4 *)(param_1 + 0x230),0,
               ((ulonglong)*(uint *)(param_1 + 0x234) & 0x3fffffff) << 2);
  *(undefined4 *)(param_1 + 0x234) = 0;
  FUN_0052cc20(param_1 + 0x98);
  return;
}


// 0x0533e7c (0x458 bytes)
// strings: 00669790: '%s/cach%04X.dat' | 00669840: 'FIOS cache block[%d] delete failed, err = %d\n' | 00669810: 'FIOS cache index fsync failed, err = %d\n' | 00669870: 'FIOS cache descriptor[%d] update failed, err = %d\n'

void FUN_00533e7c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  uint uVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar8 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar8 - 0x1f0);
  *puVar3 = uVar8;
  puVar3[0x39] = unaff_r27;
  puVar3[0x40] = in_LR;
  uVar1 = *(uint *)(param_1 + 0x22c);
  puVar3[0x37] = unaff_r25;
  puVar3[0x38] = unaff_r26;
  puVar3[0x34] = unaff_r22;
  puVar3[0x36] = unaff_r24;
  puVar3[0x3a] = unaff_r28;
  puVar3[0x3b] = unaff_r29;
  puVar3[0x3c] = unaff_r30;
  puVar3[0x3d] = unaff_r31;
  puVar3[0x35] = unaff_r23;
  uVar15 = uVar1 * ((uVar1 + 0x37) / uVar1);
  uVar5 = (ulonglong)uVar15;
  lVar12 = (uVar8 - 0x1f0) - (uVar5 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar12 = *puVar3;
  uVar13 = lVar12 + 0x70;
  uVar6 = uVar13 & 0xffffffff;
  memset(uVar6,0,uVar5);
  iVar11 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
  lVar12 = *(longlong *)(iVar11 + *(int *)(param_1 + 0xe4));
  puVar4 = (undefined1 *)uVar13;
  if (lVar12 - 2U < 2) {
    puVar4[7] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  else {
    *puVar4 = (char)((ulonglong)lVar12 >> 0x38);
    puVar4[1] = (char)((ulonglong)lVar12 >> 0x30);
    puVar4[2] = (char)((ulonglong)lVar12 >> 0x28);
    puVar4[3] = (char)((ulonglong)lVar12 >> 0x20);
    puVar4[4] = (char)((ulonglong)lVar12 >> 0x18);
    puVar4[5] = (char)((ulonglong)lVar12 >> 0x10);
    puVar4[6] = (char)((ulonglong)lVar12 >> 8);
    puVar4[7] = (char)lVar12;
  }
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  uVar13 = uVar8 - 0x180 & 0xffffffff;
  puVar4[8] = *(undefined1 *)(iVar10 + 8);
  puVar4[9] = *(undefined1 *)(iVar10 + 9);
  puVar4[10] = *(undefined1 *)(iVar10 + 10);
  puVar4[0xb] = *(undefined1 *)(iVar10 + 0xb);
  puVar4[0xc] = *(undefined1 *)(iVar10 + 0xc);
  puVar4[0xd] = *(undefined1 *)(iVar10 + 0xd);
  puVar4[0xe] = *(undefined1 *)(iVar10 + 0xe);
  puVar4[0xf] = *(undefined1 *)(iVar10 + 0xf);
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  puVar4[0x10] = *(undefined1 *)(iVar10 + 0x10);
  puVar4[0x11] = *(undefined1 *)(iVar10 + 0x11);
  puVar4[0x12] = *(undefined1 *)(iVar10 + 0x12);
  puVar4[0x13] = *(undefined1 *)(iVar10 + 0x13);
  puVar4[0x14] = *(undefined1 *)(iVar10 + 0x14);
  puVar4[0x15] = *(undefined1 *)(iVar10 + 0x15);
  puVar4[0x16] = *(undefined1 *)(iVar10 + 0x16);
  puVar4[0x17] = *(undefined1 *)(iVar10 + 0x17);
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  puVar4[0x18] = *(undefined1 *)(iVar10 + 0x18);
  puVar4[0x19] = *(undefined1 *)(iVar10 + 0x19);
  puVar4[0x1a] = *(undefined1 *)(iVar10 + 0x1a);
  puVar4[0x1b] = *(undefined1 *)(iVar10 + 0x1b);
  puVar4[0x1c] = *(undefined1 *)(iVar10 + 0x1c);
  puVar4[0x1d] = *(undefined1 *)(iVar10 + 0x1d);
  puVar4[0x1e] = *(undefined1 *)(iVar10 + 0x1e);
  puVar4[0x1f] = *(undefined1 *)(iVar10 + 0x1f);
  uVar7 = (ulonglong)*(uint *)(iVar11 + *(int *)(param_1 + 0xe4) + 0x20) & 0x3fffffff;
  puVar4[0x22] = (char)(uVar7 >> 8);
  puVar4[0x23] = (char)uVar7;
  puVar4[0x20] = (char)(uVar7 >> 0x18);
  puVar4[0x21] = (char)(uVar7 >> 0x10);
  uVar14 = *(undefined8 *)(iVar11 + *(int *)(param_1 + 0xe4) + 0x20);
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = (byte)((ulonglong)uVar14 >> 0x3f);
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(iVar10 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(iVar10 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x224);
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined1 (*) [16])(puVar3 + 0x10) = (GPiece<16>)0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (GPiece<16>)0x0;
  *(undefined4 *)((int)puVar3 + 0x84) = 0xe;
  puVar3[0xe] = 1;
  puVar3[0x12] = 0;
  uVar9 = FUN_00525524(uVar2,uVar13,uVar9,uVar6,uVar5,
                       uVar1 * ((uVar1 + 0x2f) / uVar1) + uVar15 * param_2);
  iVar10 = _ZN4cell4fios2op8syncWaitEPx(uVar9,0);
  if (iVar10 != 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_descriptor__d__update_0071af80,param_2,iVar10);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x224);
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)puVar3 + 0x84) = 0;
  uVar9 = FUN_005205b4(uVar2,uVar13,uVar9);
  iVar10 = _ZN4cell4fios2op8syncWaitEPx(uVar9,0);
  if (iVar10 != 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_index_fsync_failed__e_0071af78,iVar10);
  }
  if ((*(char *)(param_1 + 0x118) == '\0') &&
     (*(longlong *)(iVar11 + *(int *)(param_1 + 0xe4)) - 2U < 2)) {
    iVar11 = 0;
    if (*(char *)(param_1 + 0x124) != '\0') {
      iVar11 = param_1 + 0x124;
    }
    uVar5 = uVar8 - 0x158 & 0xffffffff;
    FUN_005cd198(uVar5,0x100,PTR_s__s_cach_04X_dat_0071af68,iVar11,param_2);
    uVar9 = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)((int)puVar3 + 0x84) = 0;
    uVar9 = FUN_005210c4(uVar9,uVar8 - 0x180,uVar5);
    iVar11 = _ZN4cell4fios2op8syncWaitEPx(uVar9,0);
    if ((iVar11 != 0) && (iVar11 != -0x7ffef8fb)) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_block__d__delete_fail_0071af7c,param_2,iVar11);
    }
  }
  return;
}


// 0x05342d4 (0x214 bytes)
// strings: 006698a8: 'Scheduler cache'

void FUN_005342d4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = PTR_PTR_0071af84;
  if (param_1[0x98] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x98],0x100d010c,0,0);
    param_1[0x98] = 0;
  }
  if (param_1[0x99] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x99],0x100d010c,0,0);
    param_1[0x99] = 0;
  }
  if (param_1[0x8c] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x8c],0x106a0102,0,0);
    param_1[0x8c] = 0;
  }
  if (param_1[0x8a] != 0) {
    uVar1 = filehandle_close_setup(param_1[0x47],0,param_1[0x8a]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    uVar1 = filehandle_close_setup(param_1[0x47],0,param_1[0x89]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    param_1[0x89] = 0;
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_0052df14(param_1 + 0x8e);
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_Scheduler_cache_0071af88);
  FUN_0052df14(param_1 + 0x8e);
  FUN_00532134(param_1);
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::deleteCacheFilesUnlessReusable()  [exact match]
// 0x05344e8 (0x850 bytes)
// strings: 00669950: 'Reusing existing disk-based cache files\n' | 00669790: '%s/cach%04X.dat' | 006698b8: 'Creating new disk-based cache files\n' | 00669780: 'cache.dat' | 00669520: '%s/%s' | 00669980: "FIOS failed deleting invalid cache file '%s', err = %d\n" | 00669918: 'FIOS failed reading cache header for %s, err = %d\n' | 006698e0: 'FIOS failed writing cache header for %s, err = %d\n'

undefined4 FUN_005344e8(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char cVar13;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong unaff_r20;
  ulonglong uVar18;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined1 *__s1;
  char *pcVar19;
  char *pcVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  int local_270 [156];
  byte *__s2;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)(uVar7 - 0x2e0);
  *puVar4 = uVar7;
  puVar4[0x54] = unaff_r24;
  puVar4[0x5e] = in_LR;
  uVar17 = *(uint *)(param_1 + 0x22c);
  uVar8 = *(undefined4 *)(param_1 + 0x224);
  uVar11 = *(undefined4 *)(param_1 + 0x228);
  puVar4[0x51] = unaff_r21;
  puVar4[0x56] = unaff_r26;
  puVar4[0x57] = unaff_r27;
  puVar4[0x58] = unaff_r28;
  puVar4[0x59] = unaff_r29;
  puVar4[0x5a] = unaff_r30;
  puVar4[0x5b] = unaff_r31;
  puVar4[0x50] = unaff_r20;
  puVar4[0x52] = unaff_r22;
  puVar4[0x53] = unaff_r23;
  puVar4[0x55] = unaff_r25;
  *(undefined4 *)(puVar4 + 0xe) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar11;
  *(uint *)(puVar4 + 0x5d) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar17 = uVar17 * ((uVar17 + 0x2f) / uVar17);
  uVar14 = (ulonglong)uVar17;
  lVar15 = (uVar7 - 0x2e0) - (uVar14 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar15 = *puVar4;
  uVar18 = lVar15 + 0x70U & 0xffffffff;
  memset(uVar18,0,uVar14);
  __s1 = (undefined1 *)(lVar15 + 0x70U);
  *__s1 = 0x66;
  __s1[2] = 0x6f;
  __s1[1] = 0x69;
  __s1[5] = 0x61;
  __s1[3] = 0x73;
  __s1[6] = 99;
  __s1[7] = 0x68;
  __s1[4] = 99;
  __s1[8] = *(undefined1 *)(param_1 + 0x110);
  __s1[9] = *(undefined1 *)(param_1 + 0x111);
  __s1[10] = *(undefined1 *)(param_1 + 0x112);
  __s1[0xb] = *(undefined1 *)(param_1 + 0x113);
  __s1[0xc] = *(undefined1 *)(param_1 + 0x114);
  __s1[0xd] = *(undefined1 *)(param_1 + 0x115);
  __s1[0xe] = *(undefined1 *)(param_1 + 0x116);
  uVar2 = *(undefined1 *)(param_1 + 0x117);
  __s1[0x11] = 3;
  __s1[0x15] = 0x38;
  __s1[0xf] = uVar2;
  __s1[0x13] = 0x2c;
  __s1[0x10] = 0;
  __s1[0x12] = 0;
  __s1[0x14] = 0;
  __s1[0x16] = 1;
  __s1[0x17] = 0;
  __s1[0x18] = *(undefined1 *)(param_1 + 0xe0);
  __s1[0x19] = *(undefined1 *)(param_1 + 0xe1);
  __s1[0x1a] = *(undefined1 *)(param_1 + 0xe2);
  __s1[0x1b] = *(undefined1 *)(param_1 + 0xe3);
  __s1[0x1c] = *(undefined1 *)(param_1 + 0xdc);
  __s1[0x1d] = *(undefined1 *)(param_1 + 0xdd);
  __s1[0x1e] = *(undefined1 *)(param_1 + 0xde);
  __s1[0x1f] = *(undefined1 *)(param_1 + 0xdf);
  uVar2 = *(undefined1 *)(param_1 + 0x118);
  __s1[0x2a] = 0;
  __s1[0x20] = uVar2;
  __s1[0x28] = 0;
  __s1[0x29] = 0;
  __s1[0x2b] = 1;
  iVar12 = *(int *)(param_1 + 0x224);
  if ((*(longlong *)(iVar12 + 0x48) < (longlong)uVar14) &&
     ((iVar16 = *(int *)(param_1 + 0x228), iVar16 == 0 ||
      (*(longlong *)(iVar16 + 0x48) < (longlong)uVar14)))) {
    if (*PTR_PTR_0071af58 == '\0') {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Creating_new_disk_based_cache_fi_0071af8c);
      iVar12 = *(int *)(param_1 + 0x224);
      iVar16 = *(int *)(param_1 + 0x228);
    }
    uVar17 = *(uint *)(param_1 + 0x22c);
    uVar5 = (longlong)(int)uVar17 * (longlong)(int)((uVar17 + 0x2f) / uVar17) & 0xffffffff;
    lVar15 = uVar5 + (longlong)*(int *)(param_1 + 0xe0) *
                     ((longlong)(int)uVar17 * (longlong)(int)((uVar17 + 0x37) / uVar17) &
                     0xffffffffU);
    if (iVar16 != 0) {
      lVar15 = lVar15 + uVar5 + (longlong)*(int *)(param_1 + 0xe0) *
                                (ulonglong)*(uint *)(param_1 + 0xdc);
    }
    iVar16 = 0;
    cVar13 = FUN_00530f80(param_1,iVar12,lVar15);
    if (cVar13 == '\0') {
      __s2 = (byte *)0x0;
      *(undefined1 *)(param_1 + 0xd8) = 1;
LAB_00534880:
      if (*(int *)(param_1 + 0x224) != 0) {
        pcVar20 = *(char **)(*(int *)(param_1 + 0x224) + 0x30);
        pcVar19 = (char *)0x0;
        if (*pcVar20 != '\0') {
          pcVar19 = pcVar20;
        }
        *(undefined4 *)(puVar4 + 0x2f) = 0;
        FUN_0051ca84(uVar7 - 0x168,pcVar19);
        uVar11 = _ZN4cell4fios8pathhashEPKc(pcVar19);
        uVar8 = *(undefined4 *)(param_1 + 0x224);
        *(undefined4 *)(puVar4 + 0x2f) = uVar11;
        uVar8 = filehandle_close_setup(*(undefined4 *)(param_1 + 0x11c),0,uVar8);
        _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
        cVar13 = *(char *)((int)puVar4 + 0x17c);
        *(undefined4 *)(param_1 + 0x224) = 0;
        uVar14 = uVar7 - 0x164;
        if (cVar13 == '\0') {
          uVar14 = 0;
        }
        uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14 & 0xffffffff);
        iVar12 = _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
        if (iVar12 != 0) {
          uVar14 = uVar7 - 0x164;
          if (*(char *)((int)puVar4 + 0x17c) == '\0') {
            uVar14 = 0;
          }
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_failed_deleting_invalid_cac_0071af9c,uVar14 & 0xffffffff,
                           iVar12);
          *(undefined1 *)(param_1 + 0xd8) = 1;
        }
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        pcVar20 = *(char **)(*(int *)(param_1 + 0x228) + 0x30);
        pcVar19 = (char *)0x0;
        if (*pcVar20 != '\0') {
          pcVar19 = pcVar20;
        }
        *(undefined4 *)(puVar4 + 0x2f) = 0;
        FUN_0051ca84(uVar7 - 0x168,pcVar19);
        uVar11 = _ZN4cell4fios8pathhashEPKc(pcVar19);
        uVar8 = *(undefined4 *)(param_1 + 0x228);
        *(undefined4 *)(puVar4 + 0x2f) = uVar11;
        uVar8 = filehandle_close_setup(*(undefined4 *)(param_1 + 0x11c),0,uVar8);
        _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
        cVar13 = *(char *)((int)puVar4 + 0x17c);
        *(undefined4 *)(param_1 + 0x228) = 0;
        uVar14 = uVar7 - 0x164;
        if (cVar13 == '\0') {
          uVar14 = 0;
        }
        uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14 & 0xffffffff);
        iVar12 = _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
        if (iVar12 != 0) {
          uVar14 = uVar7 - 0x164;
          if (*(char *)((int)puVar4 + 0x17c) == '\0') {
            uVar14 = 0;
          }
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_failed_deleting_invalid_cac_0071af9c,uVar14 & 0xffffffff,
                           iVar12);
          *(undefined1 *)(param_1 + 0xd8) = 1;
        }
      }
      puVar6 = PTR_s__s_cach_04X_dat_0071af68;
      if ((__s2 != (byte *)0x0) &&
         (((ulonglong)__s2[7] |
          (ulonglong)__s2[6] << 8 |
          (ulonglong)__s2[5] << 0x10 |
          (ulonglong)__s2[4] << 0x18 |
          (ulonglong)__s2[3] << 0x20 |
          (ulonglong)__s2[2] << 0x28 | (ulonglong)__s2[1] << 0x30 | (ulonglong)*__s2 << 0x38) ==
          0x66696f7363616368)) {
        if (__s2[0x20] != 0) {
          iVar12 = 0;
          if (*(char *)(param_1 + 0x124) != '\0') {
            iVar12 = param_1 + 0x124;
          }
          uVar14 = uVar7 - 0x268 & 0xffffffff;
          FUN_005cd198(uVar14,0x100,PTR_s__s__s_0071af1c,iVar12,PTR_s_cache_dat_0071af64);
          uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14);
          _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
          return 0;
        }
        if (0 < *(int *)(param_1 + 0xe0)) {
          uVar14 = uVar7 - 0x268 & 0xffffffff;
          iVar12 = 0;
          do {
            iVar10 = iVar12 + 1;
            iVar16 = 0;
            if (*(char *)(param_1 + 0x124) != '\0') {
              iVar16 = param_1 + 0x124;
            }
            FUN_005cd198(uVar14,0x100,puVar6,iVar16,iVar12);
            uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14);
            _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
            iVar12 = iVar10;
          } while (iVar10 < *(int *)(param_1 + 0xe0));
          return 0;
        }
      }
      return 0;
    }
    do {
      iVar12 = *(int *)((int)local_270 + iVar16);
      if (iVar12 != 0) {
        uVar8 = FUN_00525524(*(undefined4 *)(param_1 + 0x11c),0,iVar12,uVar18,uVar14,0);
        iVar10 = _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
        if (iVar10 != 0) {
          pcVar20 = (char *)0x0;
          if (**(char **)(iVar12 + 0x30) != '\0') {
            pcVar20 = *(char **)(iVar12 + 0x30);
          }
          __s2 = (byte *)0x0;
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_failed_writing_cache_header_0071af90,pcVar20,iVar10);
          *(undefined1 *)(param_1 + 0xd8) = 1;
          goto LAB_00534880;
        }
      }
      bVar1 = iVar16 != 4;
      iVar16 = iVar16 + 4;
    } while (bVar1);
  }
  else {
    iVar12 = 0;
    lVar3 = lVar15 - (uVar14 + 0x1e & 0xfffffffffffffff0);
    *(ulonglong *)lVar3 = *(ulonglong *)lVar15;
    uVar18 = lVar3 + 0x70;
    __s2 = (byte *)uVar18;
    do {
      uVar5 = uVar18 & 0xffffffff;
      iVar16 = *(int *)((int)local_270 + iVar12);
      if (iVar16 != 0) {
        memset(uVar5,0,uVar14);
        uVar8 = read_req_setup(*(undefined4 *)(param_1 + 0x11c),0,iVar16,uVar5,uVar14,0);
        uVar9 = _ZN4cell4fios2op8syncWaitEPx(uVar8,0);
        bVar1 = (int)(((int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f ^ uVar9)) < 0;
        if ((bVar1) || (iVar10 = memcmp(__s1,__s2,uVar17), iVar10 != 0)) {
          pcVar20 = (char *)0x0;
          if (**(char **)(iVar16 + 0x30) != '\0') {
            pcVar20 = *(char **)(iVar16 + 0x30);
          }
          *(undefined4 *)(puVar4 + 0x2f) = 0;
          FUN_0051ca84(uVar7 - 0x168,pcVar20);
          uVar8 = _ZN4cell4fios8pathhashEPKc(pcVar20);
          *(undefined4 *)(puVar4 + 0x2f) = uVar8;
          if (bVar1) {
            uVar14 = uVar7 - 0x164;
            if (*(char *)((int)puVar4 + 0x17c) == '\0') {
              uVar14 = 0;
            }
            _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_failed_reading_cache_header_0071af94,uVar14 & 0xffffffff,
                             uVar9);
          }
          goto LAB_00534880;
        }
      }
      bVar1 = iVar12 != 4;
      iVar12 = iVar12 + 4;
    } while (bVar1);
    if (*PTR_PTR_0071af58 == '\0') {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Reusing_existing_disk_based_cach_0071af98);
      return 1;
    }
  }
  return 1;
}


// 0x0534d38 (0x378 bytes)
// strings: 006699b8: 'schedulercache' | 00669a28: 'cache.idx' | 00669780: 'cache.dat' | 006699c8: "FIOS cache couldn't allocate I/O buffers\n" | 006699f8: "FIOS cache couldn't allocate lookup table\n"

void FUN_00534d38(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                 undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined4 in_stack_00000074;
  
  FUN_00531338(param_1,param_2,param_8,in_stack_00000074);
  puVar2 = PTR_PTR_0071af84;
  *(undefined1 *)(param_1 + 0x46) = param_6;
  *param_1 = puVar2;
  puVar1 = param_1 + 0x48;
  *puVar1 = 0;
  param_1[0x47] = param_3;
  *(longlong *)(param_1 + 0x44) = param_5;
  FUN_0051ca84(puVar1,param_4);
  uVar3 = _ZN4cell4fios8pathhashEPKc(param_4);
  puVar2 = PTR_s_schedulercache_0071afa0;
  *puVar1 = uVar3;
  param_1[0x8b] = 0x800;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  FUN_0052d370(param_1 + 0x8e,puVar2);
  *(undefined1 *)((int)param_1 + 0xda) = param_7;
  param_1[0x98] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  param_1[0x99] = 0;
  if (((param_4 == 0) || (param_3 == 0)) || (param_5 == 0)) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  puVar2 = PTR_DAT_0071af00;
  if (*(char *)(param_1 + 0x36) == '\0') {
    iVar5 = *(int *)(*(int *)(param_1[0x47] + 0x160) + 0x78);
    if (iVar5 == 0) {
      iVar5 = 0x800;
    }
    param_1[0x8b] = iVar5;
    uVar3 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),0x10000,0x100d010c,0,0);
    puVar1 = *(undefined4 **)(puVar2 + 8);
    param_1[0x98] = uVar3;
    uVar4 = (*(code *)**(undefined4 **)*puVar1)(puVar1,0x10000,0x100d010c,0,0);
    param_1[0x99] = uVar4;
    if ((param_1[0x98] == 0) ||
       ((int)((((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f)) + -1) < 0)) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_couldn_t_allocate_I_O_0071afa4);
      *(undefined1 *)(param_1 + 0x36) = 1;
      return;
    }
    iVar5 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),
                       ((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2,0x106a0102,0,0);
    param_1[0x8c] = iVar5;
    if (iVar5 != 0) {
      memset(iVar5,0,((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2);
    }
    if (param_1[0x8c] == 0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_couldn_t_allocate_loo_0071afa8);
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
    else {
      param_1[0x8d] = 0;
      iVar5 = FUN_0053299c(param_3,param_4);
      puVar2 = PTR_s_cache_idx_0071afac;
      if (iVar5 == 0) {
        do {
          iVar5 = FUN_00531658(param_1,puVar2);
          param_1[0x89] = iVar5;
          if (iVar5 == 0) goto LAB_00534ff0;
          if (*(char *)(param_1 + 0x46) != '\0') {
            iVar5 = FUN_00531658(param_1,PTR_s_cache_dat_0071af64);
            param_1[0x8a] = iVar5;
            if (iVar5 == 0) goto LAB_00534ff0;
          }
        } while ((*(char *)(param_1 + 0x36) == '\0') &&
                (cVar6 = FUN_005344e8(param_1), cVar6 == '\0'));
      }
      else {
LAB_00534ff0:
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
    }
  }
  return;
}


// 0x05350b0 (0x378 bytes)
// strings: 006699b8: 'schedulercache' | 00669a28: 'cache.idx' | 00669780: 'cache.dat' | 006699c8: "FIOS cache couldn't allocate I/O buffers\n" | 006699f8: "FIOS cache couldn't allocate lookup table\n"

void FUN_005350b0(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                 undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined4 in_stack_00000074;
  
  FUN_00531338(param_1,param_2,param_8,in_stack_00000074);
  puVar2 = PTR_PTR_0071af84;
  *(undefined1 *)(param_1 + 0x46) = param_6;
  *param_1 = puVar2;
  puVar1 = param_1 + 0x48;
  *puVar1 = 0;
  param_1[0x47] = param_3;
  *(longlong *)(param_1 + 0x44) = param_5;
  FUN_0051ca84(puVar1,param_4);
  uVar3 = _ZN4cell4fios8pathhashEPKc(param_4);
  puVar2 = PTR_s_schedulercache_0071afa0;
  *puVar1 = uVar3;
  param_1[0x8b] = 0x800;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  FUN_0052d370(param_1 + 0x8e,puVar2);
  *(undefined1 *)((int)param_1 + 0xda) = param_7;
  param_1[0x98] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  param_1[0x99] = 0;
  if (((param_4 == 0) || (param_3 == 0)) || (param_5 == 0)) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  puVar2 = PTR_DAT_0071af00;
  if (*(char *)(param_1 + 0x36) == '\0') {
    iVar5 = *(int *)(*(int *)(param_1[0x47] + 0x160) + 0x78);
    if (iVar5 == 0) {
      iVar5 = 0x800;
    }
    param_1[0x8b] = iVar5;
    uVar3 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),0x10000,0x100d010c,0,0);
    puVar1 = *(undefined4 **)(puVar2 + 8);
    param_1[0x98] = uVar3;
    uVar4 = (*(code *)**(undefined4 **)*puVar1)(puVar1,0x10000,0x100d010c,0,0);
    param_1[0x99] = uVar4;
    if ((param_1[0x98] == 0) ||
       ((int)((((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f)) + -1) < 0)) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_couldn_t_allocate_I_O_0071afa4);
      *(undefined1 *)(param_1 + 0x36) = 1;
      return;
    }
    iVar5 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),
                       ((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2,0x106a0102,0,0);
    param_1[0x8c] = iVar5;
    if (iVar5 != 0) {
      memset(iVar5,0,((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2);
    }
    if (param_1[0x8c] == 0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_couldn_t_allocate_loo_0071afa8);
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
    else {
      param_1[0x8d] = 0;
      iVar5 = FUN_0053299c(param_3,param_4);
      puVar2 = PTR_s_cache_idx_0071afac;
      if (iVar5 == 0) {
        do {
          iVar5 = FUN_00531658(param_1,puVar2);
          param_1[0x89] = iVar5;
          if (iVar5 == 0) goto LAB_00535368;
          if (*(char *)(param_1 + 0x46) != '\0') {
            iVar5 = FUN_00531658(param_1,PTR_s_cache_dat_0071af64);
            param_1[0x8a] = iVar5;
            if (iVar5 == 0) goto LAB_00535368;
          }
        } while ((*(char *)(param_1 + 0x36) == '\0') &&
                (cVar6 = FUN_005344e8(param_1), cVar6 == '\0'));
      }
      else {
LAB_00535368:
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
    }
  }
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::schedulercache::~schedulercache()  [exact match]
// 0x0535428 (0x204 bytes)
// strings: 006698a8: 'Scheduler cache'

void FUN_00535428(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = PTR_PTR_0071af84;
  if (param_1[0x98] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x98],0x100d010c,0,0);
    param_1[0x98] = 0;
  }
  if (param_1[0x99] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x99],0x100d010c,0,0);
    param_1[0x99] = 0;
  }
  if (param_1[0x8c] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x8c],0x106a0102,0,0);
    param_1[0x8c] = 0;
  }
  if (param_1[0x8a] != 0) {
    uVar1 = filehandle_close_setup(param_1[0x47],0,param_1[0x8a]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    uVar1 = filehandle_close_setup(param_1[0x47],0,param_1[0x89]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    param_1[0x89] = 0;
  }
  if (*PTR_PTR_0071af58 == '\0') {
    FUN_00532d1c(param_1,PTR_s_Scheduler_cache_0071af88);
  }
  FUN_0052df14(param_1 + 0x8e);
  FUN_00532134(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}


// 0x053562c (0x214 bytes)
// strings: 006698a8: 'Scheduler cache'

void FUN_0053562c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = PTR_PTR_0071af84;
  if (param_1[0x98] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x98],0x100d010c,0,0);
    param_1[0x98] = 0;
  }
  if (param_1[0x99] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x99],0x100d010c,0,0);
    param_1[0x99] = 0;
  }
  if (param_1[0x8c] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x8c],0x106a0102,0,0);
    param_1[0x8c] = 0;
  }
  if (param_1[0x8a] != 0) {
    uVar1 = filehandle_close_setup(param_1[0x47],0,param_1[0x8a]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    uVar1 = filehandle_close_setup(param_1[0x47],0,param_1[0x89]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    param_1[0x89] = 0;
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_0052df14(param_1 + 0x8e);
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_Scheduler_cache_0071af88);
  FUN_0052df14(param_1 + 0x8e);
  FUN_00532134(param_1);
  return;
}


// 0x0535840 (0x4f8 bytes)
// strings: 00669520: '%s/%s' | 00669780: 'cache.dat' | 00669790: '%s/cach%04X.dat' | 00669a78: "FIOS cache block[%d] for '%s' ignored because %s at read\n" | 00669a38: 'stat failed' | 00669a48: 'mod date changed' | 00669a60: 'creation date changed' | 00669ad0: 'FIOS cache block[%d] read failed: err = %d\n' | 00669ab8: 'FIOS stat err was %d\n'

undefined4 FUN_00535840(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint local_250 [2];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  GPiece<16> auStack_220;
  GPiece<16> auStack_210;
  GPiece<16> local_200;
  GPiece<16> auStack_1f0;
  GPiece<16> auStack_1e0;
  undefined8 local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_188;
  undefined1 *local_178;
  GPiece<256> auStack_170;
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    if (*(char *)(param_1 + 0x124) == '\0') {
      uVar10 = 0;
      FUN_005cd198(auStack_170,0x100,PTR_s__s_cach_04X_dat_0071af68,0,param_3);
    }
    else {
      uVar10 = 0;
      FUN_005cd198(auStack_170,0x100,PTR_s__s_cach_04X_dat_0071af68,param_1 + 0x124,param_3);
    }
  }
  else {
    iVar6 = 0;
    if (*(char *)(param_1 + 0x124) != '\0') {
      iVar6 = param_1 + 0x124;
    }
    FUN_005cd198(auStack_170,0x100,PTR_s__s__s_0071af1c,iVar6,PTR_s_cache_dat_0071af64);
    uVar1 = *(uint *)(param_1 + 0x22c);
    uVar10 = (longlong)(int)uVar1 * (longlong)(int)((uVar1 + 0x2f) / uVar1) +
             (longlong)(int)param_3 * (longlong)*(int *)(param_1 + 0xdc) & 0xffffffff;
  }
  puVar7 = PTR_DAT_0071af38;
  local_240 = 0;
  local_230 = 0;
  local_228 = 0;
  local_248 = 1;
  local_238 = 0;
  piVar2 = *(int **)(param_2 + 0x24);
  if ((((*(char *)(param_1 + 0xda) == '\0') ||
       ((((*piVar2 != 10 && (*piVar2 != 0x11)) || (piVar2[4] != *(int *)PTR_DAT_0071af38)) ||
        ((piVar2[5] != *(int *)(PTR_DAT_0071af38 + 4) ||
         (piVar2[6] != *(int *)(PTR_DAT_0071af38 + 8))))))) ||
      (*(longlong *)(piVar2 + 8) != *(longlong *)(PTR_DAT_0071af38 + 0x10))) ||
     (piVar2[10] != *(int *)(PTR_DAT_0071af38 + 0x18))) {
    iVar6 = *(int *)(param_1 + 0xe4);
    iVar8 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
LAB_00535958:
    uVar1 = *(uint *)(param_5 + 0x10);
    puVar9 = (uint *)(param_5 + 0x14);
    local_250[0] = (*(uint *)(iVar8 + iVar6 + 0x20) & 0x3fffffff) - uVar1;
    if (local_250[0] < *puVar9) {
      puVar9 = local_250;
    }
    uVar3 = *puVar9;
    if (*(char *)(param_1 + 0x118) == '\0') {
      uVar5 = FUN_0052157c(*(undefined4 *)(param_1 + 0x11c),&local_248,auStack_170,uVar1 + param_4,
                           uVar10 + uVar1,uVar3);
      iVar6 = _ZN4cell4fios2op8syncWaitEPx(uVar5,0);
    }
    else {
      uVar5 = read_req_setup
                        (*(undefined4 *)(param_1 + 0x11c),&local_248,
                         *(undefined4 *)(param_1 + 0x228),param_4 + uVar1,uVar3);
      iVar6 = _ZN4cell4fios2op8syncWaitEPx(uVar5,0);
    }
    if (iVar6 == 0) {
      uVar5 = 1;
      *(uint *)(param_5 + 0x18) = uVar3;
    }
    else {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_block__d__read_failed_0071afc4,param_3,iVar6);
      uVar5 = 0;
    }
  }
  else {
    auStack_1e0 = (GPiece<16>)0x0;
    auStack_220 = (GPiece<16>)0x0;
    auStack_210 = (GPiece<16>)0x0;
    local_1d0 = 0;
    local_200 = (GPiece<16>)0x0;
    auStack_1f0 = (GPiece<16>)0x0;
    memset(&local_1c8,0,0x56);
    local_1c0 = 0;
    _ZN4cell4fios8pathhashEPKc(0);
    local_1b8 = *(undefined4 *)puVar7;
    local_1b0 = *(undefined4 *)(puVar7 + 8);
    piVar4 = *(int **)(param_1 + 0x40);
    local_1c8 = 8;
    local_1b4 = *(undefined4 *)(puVar7 + 4);
    local_1a0 = *(undefined4 *)(puVar7 + 0x18);
    local_1a8 = *(undefined8 *)(puVar7 + 0x10);
    local_1c0 = piVar2[2];
    local_1bc = piVar2[3];
    local_178 = auStack_220;
    local_188 = 0x58;
    *(undefined4 **)(param_2 + 0x24) = &local_1c8;
    if (piVar4 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
    }
    *(int **)(param_2 + 0x24) = piVar2;
    if (local_1c4 == 0) {
      iVar6 = *(int *)(param_1 + 0xe4);
      iVar8 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
      if ((auStack_210.piece<8,8>() == *(longlong *)(iVar8 + iVar6 + 8)) &&
         (local_200.piece<0,8>() == *(longlong *)(iVar8 + iVar6 + 0x10))) goto LAB_00535958;
    }
    if (*(char *)(param_1 + 0xdb) != '\0') {
      puVar7 = PTR_s_stat_failed_0071afb0;
      if ((local_1c4 == 0) &&
         (puVar7 = PTR_s_creation_date_changed_0071afb8,
         auStack_210.piece<8,8>() != *(longlong *)(param_3 * 0x38 + *(int *)(param_1 + 0xe4) + 8))) {
        puVar7 = PTR_s_mod_date_changed_0071afb4;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_block__d__for___s__ig_0071afbc,param_3,piVar2[2],puVar7);
      if (local_1c4 != 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_stat_err_was__d_0071afc0,local_1c4);
        return 0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


// 0x0535d38 (0x1404 bytes)
// strings: 00669520: '%s/%s' | 00669780: 'cache.dat' | 00669790: '%s/cach%04X.dat' | 00669b00: "FIOS cache auto-flushed '%s' because %s at read\n" | 00669a38: 'stat failed' | 00669a48: 'mod date changed' | 00669a60: 'creation date changed' | 00669ab8: 'FIOS stat err was %d\n' | 00669b68: 'FIOS cache got a write error during fill: %d (%08X)\n' | 00669b38: "Couldn't open cache file %s for output: %d\n" | 006695d0: 'HDD cache' | 00669ba0: 'FIOS cache got a write error closing %s after fill: %d (%08X)\n'

undefined4 FUN_00535d38(int *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar19;
  longlong lVar18;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar24;
  int iVar25;
  longlong lVar23;
  undefined8 *puVar26;
  longlong *plVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  int *piVar31;
  int iVar32;
  int iVar33;
  undefined *puVar34;
  void *__dest;
  undefined4 *puVar36;
  ulonglong uVar35;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar37;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int local_360 [2];
  ulonglong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  longlong local_300;
  longlong local_2f8;
  GPiece<16> local_2f0;
  GPiece<8> auStack_2e0;
  ulonglong uStack_2d8;
  undefined8 local_2d0;
  longlong local_2b0;
  longlong local_2a8;
  GPiece<8> local_270;
  undefined8 local_268;
  GPiece<8> local_260;
  int local_258;
  undefined4 uStack_254;
  GPiece<16> local_250;
  GPiece<16> local_240;
  GPiece<16> local_230;
  void *local_220;
  undefined2 local_21c;
  int local_110;
  ulonglong local_108;
  ulonglong local_100;
  char local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int *local_d8;
  int local_d4;
  uint local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  
  uVar16 = ZEXT48(&stack0x00000000);
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar37 = (param_4 == 0) << 1;
  piVar5 = *(int **)(param_2 + 0x24);
  local_b8 = ZEXT48(param_1 + 0x26);
  local_d8 = param_1;
  local_d0 = param_4;
  _ZN4cell4fios8platform6rwlock9writeLockEv(local_b8);
  _auStack_2e0 = (GPiece<16>)0x0;
  local_2d0 = 0;
  local_d4 = param_2;
  if ((bool)(bVar37 >> 1 & 1)) {
    local_c8 = ZEXT48(local_d8);
    local_2f0 = ZEXT816(0x7fffffffffffffff) << 0x40;
    uVar17 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(local_c8,param_3);
    if ((int)uVar17 < 0) goto LAB_00536f68;
LAB_00535e38:
    local_b0 = (longlong)(int)uVar17;
    local_110 = (int)((uVar17 & 0xffffffff) << 6) - (int)((uVar17 & 0xffffffff) << 3);
    bVar1 = false;
    bVar2 = false;
    puVar34 = PTR_DAT_0071af00;
  }
  else {
    local_c8 = ZEXT48(local_d8);
    local_2f0 = ZEXT816(1) << 0x40;
    uVar17 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(local_c8,param_3);
    if (-1 < (int)uVar17) goto LAB_00535e38;
LAB_00536f68:
    uVar19 = FUN_00530b80(local_c8,1);
    puVar34 = PTR_DAT_0071af00;
    local_110 = uVar19 * 0x40 + (uVar19 & 0x1fffffff) * -8;
    plVar27 = (longlong *)(local_110 + param_1[0x39]);
    if (*plVar27 == 2) {
      local_b0 = (longlong)(int)uVar19;
      bVar1 = true;
      bVar2 = true;
    }
    else {
      local_b0 = (longlong)(int)uVar19;
      bVar1 = true;
      bVar2 = false;
      if ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0) {
        FUN_00526d58(*(undefined4 *)(param_2 + 0xc),PTR_s_HDD_cache_0071af30,plVar27[3],
                     *(uint *)(plVar27 + 4) & 0x3fffffff,local_b0);
      }
    }
  }
  if (*(char *)(param_1 + 0x46) == '\0') {
    if (*(char *)(local_d8 + 0x49) == '\0') {
      local_a0 = uVar16 - 0x218;
      local_e0 = 0;
      FUN_005cd198(local_a0,0x100,PTR_s__s_cach_04X_dat_0071af68,0,local_b0);
    }
    else {
      local_a0 = uVar16 - 0x218;
      local_e0 = 0;
      FUN_005cd198(local_a0,0x100,PTR_s__s_cach_04X_dat_0071af68,local_d8 + 0x49,local_b0);
    }
    FUN_0051c9a4(uVar16 - 0x310,*param_3);
  }
  else {
    piVar24 = (int *)0x0;
    if (*(char *)(local_d8 + 0x49) != '\0') {
      piVar24 = local_d8 + 0x49;
    }
    local_a0 = uVar16 - 0x218;
    FUN_005cd198(local_a0,0x100,PTR_s__s__s_0071af1c,piVar24,PTR_s_cache_dat_0071af64);
    uVar19 = param_1[0x8b];
    local_e0 = ((longlong)(int)uVar19 * (longlong)(int)((uVar19 + 0x2f) / uVar19) & 0xffffffffU) +
               (ulonglong)(uint)param_1[0x37] * local_b0;
    FUN_0051c9a4(uVar16 - 0x310,*param_3);
  }
  if (bVar1) {
    local_320 = local_310;
    local_318 = local_308;
    (*(code *)**(undefined4 **)(*param_1 + 0x44))
              (local_c8,local_b0,uVar16 - 800,*(undefined8 *)(param_3 + 2));
  }
  puVar26 = (undefined8 *)(local_110 + param_1[0x39]);
  *puVar26 = 3;
  puVar26[1] = 0;
  puVar26[2] = 0;
  uVar14 = *(undefined8 *)(param_3 + 2);
  puVar26[4] = puVar26[4] & 0x7fffffffffffffff;
  iVar6 = param_1[0x39];
  puVar26[3] = uVar14;
  *(ulonglong *)(local_110 + iVar6 + 0x20) =
       ((ulonglong)(uint)param_1[0x37] & 0x3fffffff) << 0x20 |
       *(ulonglong *)(local_110 + iVar6 + 0x20) & 0xc0000000ffffffff;
  iVar6 = param_1[0x39];
  uVar19 = *(uint *)(puVar34 + 0x18);
  *(undefined8 *)(local_110 + iVar6 + 0x28) = local_310;
  *(undefined8 *)(local_110 + iVar6 + 0x30) = local_308;
  if ((uVar19 & 2) != 0) {
    FUN_00527ccc(*(undefined4 *)(param_2 + 0xc),PTR_s_HDD_cache_0071af30,
                 *(undefined8 *)(param_3 + 2),param_1[0x37],local_b0);
  }
  if (!bVar2) {
    (*(code *)**(undefined4 **)(*param_1 + 0x3c))(local_c8,local_b0);
  }
  local_c0 = ZEXT48(local_d8) + 0x238 & 0xffffffff;
  lwmutex_lock_checked(local_c0);
  piVar24 = piVar5 + 2;
  local_350 = 0;
  local_348 = 0;
  FUN_00530d30(local_c8,*piVar24,uVar16 - 0x348,uVar16 - 0x350);
  puVar36 = (undefined4 *)PTR_DAT_0071af38;
  if (*(char *)((int)param_1 + 0xda) == '\0') {
LAB_00535fe4:
    local_a8 = ZEXT48(piVar5);
    local_e8 = local_348;
    local_f0 = local_350;
    FUN_0052cc20(local_b8);
    puVar36 = (undefined4 *)PTR_DAT_0071af38;
    if (local_e8 == 0 && local_f0 == 0) goto LAB_00536018;
  }
  else {
    local_a8 = ZEXT48(piVar5);
    if ((((((*piVar5 != 10) && (*piVar5 != 0x11)) || (piVar5[4] != *(int *)PTR_DAT_0071af38)) ||
         ((piVar5[5] != *(int *)(PTR_DAT_0071af38 + 4) ||
          (piVar5[6] != *(int *)(PTR_DAT_0071af38 + 8))))) ||
        (*(longlong *)(piVar5 + 8) != *(longlong *)(PTR_DAT_0071af38 + 0x10))) ||
       (piVar5[10] != *(int *)(PTR_DAT_0071af38 + 0x18))) goto LAB_00535fe4;
    local_e8 = 0;
    local_f0 = 0;
    FUN_0052cc20(local_b8);
LAB_00536018:
    memset(uVar16 - 0x2c8,0,0x58);
    _local_270 = ZEXT816(0);
    local_230 = (GPiece<16>)0x0;
    local_220 = (void *)0x0;
    _local_260 = (GPiece<16>)0x0;
    local_21c = 0;
    local_250 = (GPiece<16>)0x0;
    local_240 = (GPiece<16>)0x0;
    _ZN4cell4fios8pathhashEPKc(0);
    auVar10 = _local_260;
    stack0xfffffd94 = _local_270 << 0x20;
    local_270.piece<0,4>() = 8;
    piVar31 = (int *)local_d8[0x10];
    local_260.piece<4,4>() = puVar36[1];
    local_260.piece<0,4>() = *puVar36;
    local_230.piece<0,8>() = 0x58;
    uStack_254 = auVar10.piece<12,4>();
    local_258 = puVar36[2];
    local_250.piece<8,4>() = puVar36[6];
    local_250.piece<0,8>() = *(undefined8 *)(puVar36 + 4);
    local_268.piece<0,4>() = *piVar24;
    local_268.piece<4,4>() = piVar5[3];
    local_220 = (void *)(uVar16 - 0x2c8);
    *(undefined1 **)(param_2 + 0x24) = local_270;
    if (piVar31 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar31 + 0x14))(piVar31,local_d4);
    }
    *(int **)(param_2 + 0x24) = piVar5;
    if (local_270.piece<4,4>() == 0) {
      local_e8 = local_2b0;
      local_f0 = local_2a8;
    }
    if ((local_348 == 0) || (local_e8 == local_348)) {
      if ((local_350 == 0) || (local_f0 == local_350)) goto LAB_00536178;
      cVar3 = *(char *)((int)param_1 + 0xdb);
    }
    else {
      cVar3 = *(char *)((int)param_1 + 0xdb);
    }
    if (cVar3 != '\0') {
      puVar34 = PTR_s_stat_failed_0071afb0;
      if ((local_270.piece<4,4>() == 0) &&
         (puVar34 = PTR_s_creation_date_changed_0071afb8, local_e8 != local_348)) {
        puVar34 = PTR_s_mod_date_changed_0071afb4;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_auto_flushed___s__bec_0071afc8,*piVar24,puVar34);
      if (local_270.piece<4,4>() != 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_stat_err_was__d_0071afc0,local_270.piece<4,4>());
      }
    }
    (*(code *)**(undefined4 **)(*param_1 + 0x24))(local_c8,*piVar24);
  }
LAB_00536178:
  iVar6 = param_1[0x8a];
  uVar19 = 0;
  if (iVar6 == 0) {
    uVar17 = local_a0 & 0xffffffff;
    uVar20 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(param_1[0x47],uVar16 - 0x2f0,uVar17,0x1a,uVar16 - 0x370);
    uVar19 = _ZN4cell4fios2op8syncWaitEPx(uVar20,0);
    if (uVar19 != 0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Couldn_t_open_cache_file__s_for_o_0071afcc,uVar17,uVar19);
    }
  }
  iVar32 = piVar5[4];
  piVar31 = (int *)piVar5[5];
  iVar30 = piVar5[6];
  lVar29 = *(longlong *)(piVar5 + 8);
  iVar28 = piVar5[10];
  if ((((*(int *)local_a8 == 10) || (*(int *)local_a8 == 0x11)) &&
      (*(int *)PTR_DAT_0071af38 == iVar32)) &&
     (((*(int **)(PTR_DAT_0071af38 + 4) == piVar31 && (*(int *)(PTR_DAT_0071af38 + 8) == iVar30)) &&
      ((*(longlong *)(PTR_DAT_0071af38 + 0x10) == lVar29 &&
       (*(int *)(PTR_DAT_0071af38 + 0x18) == iVar28)))))) {
    _local_270 = ZEXT816(0);
    local_230 = (GPiece<16>)0x0;
    local_220 = (void *)0x0;
    local_21c = 0;
    _local_260 = (GPiece<16>)0x0;
    local_250 = (GPiece<16>)0x0;
    local_240 = (GPiece<16>)0x0;
    _ZN4cell4fios8pathhashEPKc(0);
    local_258 = iVar30;
    piVar7 = (int *)local_d8[0x10];
    local_270.piece<0,4>() = *(undefined4 *)local_a8;
    local_260.piece<4,4>() = piVar5[5];
    local_260.piece<0,4>() = piVar5[4];
    stack0xfffffd94 = _local_270 << 0x20;
    local_258 = piVar5[6];
    local_270.piece<0,4>() = 9;
    local_250.piece<8,4>() = piVar5[10];
    local_250.piece<0,8>() = *(undefined8 *)(piVar5 + 8);
    local_268.piece<0,4>() = *piVar24;
    local_268.piece<4,4>() = piVar5[3];
    local_21c = 1;
    *(undefined1 **)(param_2 + 0x24) = local_270;
    if (piVar7 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar7 + 0x14))(piVar7,local_d4);
    }
    *(int **)(param_2 + 0x24) = piVar5;
    if (local_270.piece<4,4>() == 0) {
      local_f8 = '\x01';
      lVar29 = local_250.piece<0,8>();
      iVar32 = local_260.piece<0,4>();
      piVar31 = (int *)local_260.piece<4,4>();
      iVar30 = local_258;
      iVar28 = local_250.piece<8,4>();
    }
    else {
      local_f8 = '\0';
      uVar19 = local_270.piece<4,4>();
    }
  }
  else {
    local_f8 = '\0';
  }
  local_358 = (ulonglong)(uint)param_1[0x37];
  local_360[1] = 0;
  local_360[0] = 0;
  if (uVar19 == 0) {
    local_100 = 0;
    local_108 = 0;
    uVar19 = 0;
    if ((ulonglong)(uint)param_1[0x37] != 0) {
      uVar17 = 0;
      do {
        iVar33 = (int)(uVar17 << 2);
        iVar25 = *(int *)((int)local_360 + iVar33);
        if (iVar25 != 0) {
          uVar19 = _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(1,uVar16 - 0x36c,0);
          lVar18 = FUN_0051c304(iVar25);
          local_108 = local_108 + lVar18;
          FUN_0051fd24(*(undefined4 *)(iVar25 + 0x9c),iVar25);
          *(undefined4 *)((int)local_360 + iVar33) = 0;
          if (uVar19 != 0) {
            _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_got_a_write_error_dur_0071afd0,uVar19,uVar19);
            uVar21 = (int)(uVar19 ^ 0x80010709) >> 0x1f;
            uVar19 = uVar19 & (int)(uVar21 - (uVar21 ^ uVar19 ^ 0x80010709)) >> 0x1f;
            break;
          }
        }
        uVar35 = local_358;
        lVar18 = *(longlong *)(param_3 + 2);
        uVar19 = param_1[0x37];
        uVar15 = ((ulonglong)uVar19 + lVar18) - local_358;
        local_220 = (void *)0x0;
        local_21c = 0;
        local_230 = (GPiece<16>)0x0;
        _local_270 = ZEXT816(0);
        _local_260 = (GPiece<16>)0x0;
        local_250 = (GPiece<16>)0x0;
        local_240 = (GPiece<16>)0x0;
        _ZN4cell4fios8pathhashEPKc(0);
        stack0xfffffd94 = _local_270 << 0x20;
        iVar25 = *(int *)local_a8;
        if (iVar25 == 0x11) {
          iVar25 = 10;
        }
        local_270.piece<0,4>() = iVar25;
        lVar22 = lVar18 + (uVar19 - uVar35);
        local_268.piece<0,4>() = *piVar24;
        local_258 = piVar5[6];
        local_268.piece<4,4>() = piVar5[3];
        local_240.piece<0,8>() = lVar22;
        iVar8 = -0x368;
        if ((longlong)uVar35 <= (longlong)(0x10000 - (uVar15 & 0xffff))) {
          iVar8 = -0x358;
        }
        lVar23 = 0x7fffffffffffffff;
        local_300 = (ulonglong)(uint)param_3[4] + lVar18;
        uVar15 = *(ulonglong *)(&stack0x00000000 + iVar8);
        local_21c = 0xc;
        local_270.piece<4,4>() = 0;
        local_2f8 = local_300 + (ulonglong)(uint)param_3[5];
        auVar10.piece<0,8>() = 0;
        auVar10.piece<8,8>() = uVar15;
        local_230 = auVar10 << 0x40;
        local_260.piece<4,4>() = piVar31;
        local_260.piece<0,4>() = iVar32;
        local_258 = iVar30;
        local_250.piece<8,4>() = iVar28;
        local_250.piece<0,8>() = lVar29;
        if ((longlong)(0x7fffffffffffffff - (ulonglong)(uint)param_3[5]) < local_300) {
          local_2f8 = 0x7fffffffffffffff;
        }
        if (lVar22 <= (longlong)(0x7fffffffffffffff - uVar15)) {
          lVar23 = lVar22 + uVar15;
        }
        iVar8 = -0x300;
        if (local_300 <= lVar22) {
          iVar8 = -0x330;
        }
        iVar9 = -0x328;
        local_330 = *(longlong *)(&stack0x00000000 + iVar8);
        if (local_2f8 <= lVar23) {
          iVar9 = -0x2f8;
        }
        local_328 = *(longlong *)(&stack0x00000000 + iVar9);
        iVar8 = (int)local_c8;
        if ((bool)(bVar37 >> 1 & 1)) {
          __dest = (void *)0x0;
          bVar2 = false;
          local_220 = *(void **)(iVar8 + iVar33 + 0x260);
          uVar15 = ZEXT48(local_220);
          *(undefined1 **)(param_2 + 0x24) = local_270;
          pvVar13 = (void *)0x0;
          if (iVar25 == 0x10) goto LAB_00536810;
LAB_005364bc:
          piVar7 = (int *)local_d8[0x10];
          if (piVar7 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*piVar7 + 0x14))(piVar7,local_d4);
            uVar35 = local_358;
          }
        }
        else {
          if ((local_330 < local_328) && (lVar22 == local_330)) {
            if ((((*(ushort *)((int *)local_a8 + 0x15) & 0x20) == 0) &&
                (0x10000000 < local_d0 + 0x40000000)) && (local_d0 < 0xe0000000)) {
              bVar2 = false;
              bVar1 = true;
            }
            else {
              bVar2 = true;
              bVar1 = false;
            }
            uVar15 = (ulonglong)local_d0 + (lVar22 - lVar18);
            __dest = (void *)uVar15;
            if (bVar1) {
              auVar12.piece<0,8>() = 0;
              auVar12.piece<8,8>() = local_328 - lVar22;
              local_230 = auVar12 << 0x40;
            }
            else {
              uVar15 = (ulonglong)*(uint *)(iVar33 + 0x260 + iVar8);
LAB_00536494:
              if (lVar22 < local_330) {
                auVar11.piece<0,8>() = 0;
                auVar11.piece<8,8>() = local_330 - lVar22;
                local_230 = auVar11 << 0x40;
              }
            }
          }
          else {
            __dest = (void *)(local_d0 + ((int)local_330 - (int)lVar18));
            bVar2 = false;
            uVar15 = (ulonglong)*(uint *)(iVar33 + 0x260 + iVar8);
            if (local_330 < local_328) {
              bVar2 = false;
              goto LAB_00536494;
            }
          }
          local_220 = (void *)uVar15;
          *(undefined1 **)(param_2 + 0x24) = local_270;
          pvVar13 = __dest;
          if (iVar25 != 0x10) goto LAB_005364bc;
LAB_00536810:
          __dest = pvVar13;
          if ((iVar32 != 0) || (piVar31 != local_d8)) goto LAB_005364bc;
          local_270.piece<4,4>() = 0;
        }
        uVar19 = local_270.piece<4,4>();
        bVar1 = local_270.piece<4,4>() != 0;
        *(int **)(param_2 + 0x24) = piVar5;
        local_358 = uVar35 - local_230.piece<8,8>();
        local_100 = local_100 + local_230.piece<8,8>();
        if ((bVar1) && (local_270.piece<4,4>() != 0x80010709)) goto LAB_005368b4;
        if (local_270.piece<4,4>() == 0x80010709) {
          local_358 = 0;
        }
        if (bVar2) {
          memcpy(__dest,local_220,(int)local_328 - (int)local_330);
        }
        auStack_2e0.piece<4,4>() = 0xe;
        uVar20 = FUN_00525524(param_1[0x47],uVar16 - 0x2f0,iVar6,uVar15 & 0xffffffff,local_230.piece<8,8>()
                              ,local_e0 + (local_240.piece<0,8>() - *(longlong *)(param_3 + 2)));
        local_338 = local_240.piece<0,8>() + local_230.piece<8,8>();
        *(undefined4 *)((int)local_360 + iVar33) = uVar20;
        local_340 = local_240.piece<0,8>();
        if (0x7fffffffffffffff - local_230.piece<8,8>() < (longlong)local_240.piece<0,8>()) {
          local_338 = 0x7fffffffffffffff;
        }
        iVar25 = -0x340;
        if ((longlong)local_240.piece<0,8>() <= local_330) {
          iVar25 = -0x330;
        }
        iVar33 = -0x338;
        local_330 = *(longlong *)(&stack0x00000000 + iVar25);
        if (local_328 < local_338) {
          iVar33 = -0x328;
        }
        local_328 = *(longlong *)(&stack0x00000000 + iVar33);
        if (local_330 < local_328) {
          param_3[6] = param_3[6] + ((int)local_328 - (int)local_330);
        }
        if (bVar1) goto LAB_005368b4;
        uVar19 = 0;
        if ((longlong)local_358 < 1) break;
        uVar17 = uVar17 ^ 1;
      } while( true );
    }
  }
  else {
    local_100 = 0;
    local_108 = 0;
LAB_005368b4:
    uVar21 = (int)(uVar19 ^ 0x80010709) >> 0x1f;
    uVar19 = uVar19 & (int)(uVar21 - (uVar21 ^ uVar19 ^ 0x80010709)) >> 0x1f;
  }
  iVar25 = 0;
  do {
    iVar33 = *(int *)((int)local_360 + iVar25);
    if (iVar33 != 0) {
      uVar21 = _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(1,uVar16 - 0x36c & 0xffffffff,0);
      lVar18 = FUN_0051c304(iVar33);
      local_108 = local_108 + lVar18;
      if (uVar21 != 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_got_a_write_error_dur_0071afd0,uVar21,uVar21);
      }
      if (uVar19 == 0) {
        uVar19 = uVar21;
      }
      FUN_0051fd24(*(undefined4 *)(iVar33 + 0x9c),iVar33);
      *(int *)((int)local_360 + iVar25) = 0;
    }
    bVar2 = iVar25 != 4;
    iVar25 = iVar25 + 4;
  } while (bVar2);
  if (local_f8 != '\0') {
    _local_270 = ZEXT816(0);
    local_230 = (GPiece<16>)0x0;
    local_220 = (void *)0x0;
    local_21c = 0;
    _local_260 = (GPiece<16>)0x0;
    local_250 = (GPiece<16>)0x0;
    local_240 = (GPiece<16>)0x0;
    _ZN4cell4fios8pathhashEPKc(0);
    auVar10 = _local_260;
    stack0xfffffd94 = _local_270 << 0x20;
    local_270.piece<0,4>() = 0xd;
    piVar7 = (int *)local_d8[0x10];
    local_268 = *(undefined8 *)piVar24;
    local_260.piece<4,4>() = piVar31;
    local_260.piece<0,4>() = iVar32;
    uStack_254 = auVar10.piece<12,4>();
    local_258 = iVar30;
    local_250.piece<8,4>() = iVar28;
    local_250.piece<0,8>() = lVar29;
    *(undefined1 **)(param_2 + 0x24) = local_270;
    if (piVar7 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar7 + 0x14))(piVar7,local_d4);
    }
    *(int **)(param_2 + 0x24) = piVar5;
  }
  if ((iVar6 != 0) && (param_1[0x8a] != iVar6)) {
    auStack_2e0.piece<4,4>() = 0;
    uVar20 = filehandle_close_setup(param_1[0x47],uVar16 - 0x2f0,iVar6);
    uVar21 = _ZN4cell4fios2op8syncWaitEPx(uVar20,0);
    if ((uVar21 != 0) &&
       ((_ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_got_a_write_error_clo_0071afd4,uVar16 - 0x218,uVar19,
                          uVar19), uVar19 == 0 || (uVar19 == 0x80010709)))) {
      uVar19 = uVar21;
    }
  }
  iVar6 = -((int)((((int)uVar19 >> 0x1f ^ uVar19) - ((int)uVar19 >> 0x1f)) + -1) >> 0x1f);
  if ((iVar6 == 0) || (local_108 == local_100)) {
    lwmutex_unlock_checked(local_c0);
    _ZN4cell4fios8platform6rwlock9writeLockEv(local_b8);
    if (uVar19 == 0) {
      iVar32 = 1;
      iVar6 = 1;
      if (local_108 != 0) {
        puVar26 = (undefined8 *)(local_110 + param_1[0x39]);
        uVar14 = FUN_0052c8c4();
        iVar6 = *(int *)(param_2 + 0x24);
        iVar30 = local_110 + param_1[0x39];
        *puVar26 = uVar14;
        uVar4 = *(ushort *)(iVar6 + 0x54);
        *(longlong *)(iVar30 + 8) = local_e8;
        *(ulonglong *)(iVar30 + 0x20) =
             (ulonglong)(uVar4 >> 4) << 0x3f | *(ulonglong *)(iVar30 + 0x20) & 0x7fffffffffffffff;
        *(longlong *)(iVar30 + 0x10) = local_f0;
        *(ulonglong *)(local_110 + param_1[0x39] + 0x20) =
             (local_108 & 0x3fffffff) << 0x20 |
             *(ulonglong *)(local_110 + param_1[0x39] + 0x20) & 0xc0000000ffffffff;
        goto LAB_00536a98;
      }
    }
  }
  else {
    lwmutex_unlock_checked(local_c0);
    _ZN4cell4fios8platform6rwlock9writeLockEv(local_b8);
    iVar6 = 0;
  }
  iVar32 = iVar6;
  (*(code *)**(undefined4 **)(*param_1 + 0x40))(local_c8,local_b0);
  puVar26 = (undefined8 *)(local_110 + param_1[0x39]);
  puVar26[3] = 0;
  *puVar26 = 2;
  puVar26[4] = puVar26[4] & 0xc0000000ffffffff;
  *(ulonglong *)(local_110 + param_1[0x39] + 0x20) =
       *(ulonglong *)(local_110 + param_1[0x39] + 0x20) & 0x7fffffffffffffff;
  FUN_0051c9a4(local_110 + param_1[0x39] + 0x28,0);
LAB_00536a98:
  if (param_1[0x8a] != 0) {
    uVar20 = FUN_005205b4(param_1[0x47],0,param_1[0x8a]);
    _ZN4cell4fios2op8syncWaitEPx(uVar20,0);
  }
  uVar20 = 0;
  (*(code *)**(undefined4 **)(*param_1 + 0x3c))(local_c8,local_b0);
  if (iVar32 != 0) {
    plVar27 = (longlong *)(local_d8 + 0x42);
    do {
      instructionSynchronize();
    } while (*plVar27 != *plVar27);
    lVar29 = storeDoubleWordConditionalIndexed
                       (((ulonglong)*(uint *)(local_110 + param_1[0x39] + 0x20) & 0x3fffffff) +
                        *plVar27,0,ZEXT48(plVar27));
    *plVar27 = lVar29;
    uVar20 = 1;
  }
  FUN_0052cc20(local_b8);
  return uVar20;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::ramcache::getCacheBlock(cell::fios::mediaioparams*, int, unsigned char*, cell::fios::cache::blockrequest*)  [fuzzy 0.996 match]
// 0x053713c (0x3d0 bytes)
// strings: 00669a78: "FIOS cache block[%d] for '%s' ignored because %s at read\n" | 00669a38: 'stat failed' | 00669a48: 'mod date changed' | 00669a60: 'creation date changed' | 00669ab8: 'FIOS stat err was %d\n'

undefined4 FUN_0053713c(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  size_t __n;
  int *piVar2;
  int iVar3;
  GPiece<16> auVar4;
  void *__src;
  void *__dest;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  GPiece<24> auStack_118;
  longlong local_100;
  longlong local_f8;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  GPiece<16> auStack_90;
  GPiece<16> local_80;
  undefined1 *local_70;
  undefined2 local_6c;
  
  puVar5 = PTR_DAT_0071af38;
  piVar1 = *(int **)(param_2 + 0x24);
  if ((*(char *)(param_1 + 0xda) == '\0') || ((*piVar1 != 10 && (*piVar1 != 0x11)))) {
    iVar6 = *(int *)(param_1 + 0xe4);
    iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
  }
  else {
    if ((((piVar1[4] == *(int *)PTR_DAT_0071af38) && (piVar1[5] == *(int *)(PTR_DAT_0071af38 + 4)))
        && (piVar1[6] == *(int *)(PTR_DAT_0071af38 + 8))) &&
       ((*(longlong *)(piVar1 + 8) == *(longlong *)(PTR_DAT_0071af38 + 0x10) &&
        (piVar1[10] == *(int *)(PTR_DAT_0071af38 + 0x18))))) {
      memset(auStack_118,0,0x58);
      local_c0 = ZEXT816(0);
      local_80 = (GPiece<16>)0x0;
      local_70 = (undefined1 *)0x0;
      local_b0 = (GPiece<16>)0x0;
      local_6c = 0;
      local_a0 = (GPiece<16>)0x0;
      auStack_90 = (GPiece<16>)0x0;
      _ZN4cell4fios8pathhashEPKc(0);
      auVar4 = local_b0;
      piVar2 = *(int **)(param_1 + 0x40);
      local_c0.piece<0,4>() = 8;
      local_b0.piece<4,4>() = *(undefined4 *)(puVar5 + 4);
      local_b0.piece<0,4>() = *(undefined4 *)puVar5;
      local_80.piece<0,8>() = 0x58;
      local_b0.piece<12,4>() = auVar4.piece<12,4>();
      local_b0.piece<8,4>() = *(undefined4 *)(puVar5 + 8);
      local_a0.piece<8,4>() = *(undefined4 *)(puVar5 + 0x18);
      local_a0.piece<0,8>() = *(undefined8 *)(puVar5 + 0x10);
      local_c0.piece<8,4>() = piVar1[2];
      local_c0.piece<12,4>() = piVar1[3];
      *(undefined1 **)(param_2 + 0x24) = local_c0;
      local_70 = auStack_118;
      if (piVar2 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_2);
      }
      *(int **)(param_2 + 0x24) = piVar1;
      if (local_c0.piece<4,4>() == 0) {
        iVar6 = *(int *)(param_1 + 0xe4);
        iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
        if ((local_100 == *(longlong *)(iVar7 + iVar6 + 8)) &&
           (local_f8 == *(longlong *)(iVar7 + iVar6 + 0x10))) goto LAB_005371c8;
      }
      else {
        iVar6 = *(int *)(param_1 + 0xe4);
        iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
      }
      if (*(char *)(param_1 + 0xdb) != '\0') {
        puVar5 = PTR_s_stat_failed_0071afb0;
        if ((local_c0.piece<4,4>() == 0) &&
           (puVar5 = PTR_s_creation_date_changed_0071afb8,
           local_100 != *(longlong *)(iVar7 + iVar6 + 8))) {
          puVar5 = PTR_s_mod_date_changed_0071afb4;
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_cache_block__d__for___s__ig_0071afbc,param_3,piVar1[2],puVar5);
        if (local_c0.piece<4,4>() != 0) {
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_stat_err_was__d_0071afc0,local_c0.piece<4,4>());
          return 0;
        }
      }
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0xe4);
    iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
  }
LAB_005371c8:
  iVar3 = -0x11c;
  if (*(uint *)(param_5 + 0x14) <= (*(uint *)(iVar7 + iVar6 + 0x20) & 0x3fffffff)) {
    iVar3 = -0x120;
  }
  __dest = (void *)(*(int *)(param_5 + 0x10) + param_4);
  __n = *(size_t *)(&stack0x00000000 + iVar3);
  __src = (void *)(*(int *)(param_1 + 0x110) + *(int *)(param_1 + 0xdc) * param_3 +
                  *(int *)(param_5 + 0x10));
  if (__n < 0x1000) {
    memcpy(__dest,__src,__n);
  }
  else {
    (*(code *)**(undefined4 **)(PTR_DAT_0071af00 + 0x10))(__dest,__src,__n);
  }
  *(size_t *)(param_5 + 0x18) = __n;
  return 1;
}


// 0x053750c (0x6b8 bytes)
// strings: 006695e0: 'RAM cache'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_0053750c(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  GPiece<16> auVar9;
  int *piVar11;
  undefined8 uVar10;
  int *piVar12;
  uint uVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a4;
  GPiece<8> local_1a0;
  undefined8 local_198;
  GPiece<8> local_190;
  int local_188;
  undefined4 uStack_184;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  int local_150;
  undefined2 local_14c;
  GPiece<24> auStack_148;
  undefined8 local_130;
  undefined8 local_128;
  GPiece<12> local_f0;
  int local_e4;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> auStack_c0;
  GPiece<16> local_b0;
  undefined1 *local_a0;
  undefined2 local_9c;
  
  uVar8 = local_160.piece<12,4>();
  piVar11 = param_1 + 0x26;
  _ZN4cell4fios8platform6rwlock9writeLockEv(piVar11);
  piVar1 = *(int **)(param_2 + 0x24);
  uVar13 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(param_1,param_3);
  if ((int)uVar13 < 0) {
    uVar13 = FUN_00530b80(param_1,1);
  }
  puVar7 = PTR_DAT_0071af00;
  iVar16 = param_1[0x39];
  iVar18 = uVar13 * 0x40 + (uVar13 & 0x1fffffff) * -8;
  plVar17 = (longlong *)(iVar18 + iVar16);
  if ((*plVar17 != 2) && ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0)) {
    FUN_00526d58(*(undefined4 *)(param_2 + 0xc),PTR_s_RAM_cache_0071af34,plVar17[3],
                 *(uint *)(plVar17 + 4) & 0x3fffffff,uVar13);
    iVar16 = param_1[0x39];
  }
  puVar6 = (undefined8 *)(iVar18 + iVar16);
  *puVar6 = 3;
  uVar10 = *(undefined8 *)(param_3 + 2);
  puVar6[4] = puVar6[4] & 0x7fffffffffffffff;
  iVar16 = param_1[0x39];
  puVar6[3] = uVar10;
  *(ulonglong *)(iVar18 + iVar16 + 0x20) =
       ((ulonglong)(uint)param_1[0x37] & 0x3fffffff) << 0x20 |
       *(ulonglong *)(iVar18 + iVar16 + 0x20) & 0xc0000000ffffffff;
  FUN_0051c9a4(iVar18 + param_1[0x39] + 0x28,*param_3);
  iVar16 = param_1[0x44];
  iVar2 = param_1[0x37];
  if ((*(uint *)(puVar7 + 0x18) & 2) != 0) {
    FUN_00527ccc(*(undefined4 *)(param_2 + 0xc),PTR_s_RAM_cache_0071af34,
                 *(undefined8 *)(param_3 + 2),iVar2,uVar13);
  }
  piVar12 = piVar1 + 2;
  local_1b8 = 0;
  local_1b0 = 0;
  FUN_00530d30(param_1,*piVar12,&local_1b0,&local_1b8);
  FUN_0052cc20(piVar11);
  if (*(char *)((int)param_1 + 0xda) != '\0') {
    memset(auStack_148,0,0x58);
    _local_f0 = ZEXT816(0);
    local_a0 = (undefined1 *)0x0;
    local_b0 = (GPiece<16>)0x0;
    local_e0 = (GPiece<16>)0x0;
    local_d0 = (GPiece<16>)0x0;
    auStack_c0 = (GPiece<16>)0x0;
    local_9c = 0;
    _ZN4cell4fios8pathhashEPKc(0);
    auVar9 = local_e0;
    stack0xffffff14 = local_f0 << 0x20;
    local_f0.piece<0,4>() = 8;
    piVar4 = (int *)param_1[0x10];
    local_b0.piece<0,8>() = 0x58;
    local_e0.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071af38 + 4);
    local_e0.piece<0,4>() = *(undefined4 *)PTR_DAT_0071af38;
    local_e0.piece<12,4>() = auVar9.piece<12,4>();
    local_e0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071af38 + 8);
    local_d0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071af38 + 0x18);
    local_d0.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071af38 + 0x10);
    local_f0.piece<8,4>() = *piVar12;
    local_e4 = piVar1[3];
    *(undefined1 **)(param_2 + 0x24) = local_f0;
    local_a0 = auStack_148;
    if (piVar4 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
    }
    *(int **)(param_2 + 0x24) = piVar1;
    if (local_f0.piece<4,4>() == 0) {
      local_1b0 = local_130;
      local_1b8 = local_128;
    }
  }
  _local_1a0 = ZEXT816(0);
  local_160 = (GPiece<16>)0x0;
  local_150 = 0;
  local_14c = 0;
  _local_190 = (GPiece<16>)0x0;
  local_180 = (GPiece<16>)0x0;
  local_170 = (GPiece<16>)0x0;
  _ZN4cell4fios8pathhashEPKc(0);
  iVar15 = *piVar1;
  stack0xfffffe64 = _local_1a0 << 0x20;
  if (iVar15 == 0x11) {
    iVar15 = 10;
  }
  uVar10 = *(undefined8 *)(param_3 + 2);
  local_1a0.piece<0,4>() = iVar15;
  local_14c = *(undefined2 *)(piVar1 + 0x15);
  iVar3 = piVar1[3];
  local_198.piece<0,4>() = *piVar12;
  local_180.piece<0,8>() = *(undefined8 *)(piVar1 + 8);
  local_188 = piVar1[6];
  local_190.piece<4,4>() = piVar1[5];
  local_180.piece<8,4>() = piVar1[10];
  *(undefined1 **)(param_2 + 0x24) = local_1a0;
  local_198.piece<4,4>() = iVar3;
  local_170.piece<0,8>() = uVar10;
  local_160.piece<4,4>() = param_1[0x37];
  local_160.piece<0,4>() = 0;
  local_190.piece<0,4>() = piVar1[4];
  local_150 = iVar16 + uVar13 * iVar2;
  if (((iVar15 == 0x10) && (piVar1[4] == 0)) && ((int *)local_190.piece<4,4>() == param_1)) {
    local_1a0.piece<4,4>() = 0;
    local_1a0.piece<0,4>() = 0x10;
  }
  else {
    piVar12 = (int *)param_1[0x10];
    if (piVar12 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar12 + 0x14))(piVar12,param_2);
    }
  }
  *(int **)(param_2 + 0x24) = piVar1;
  _ZN4cell4fios8platform6rwlock9writeLockEv(piVar11);
  iVar16 = param_1[0x39];
  puVar6 = (undefined8 *)(iVar18 + iVar16);
  if ((local_1a0.piece<4,4>() == 0) || (local_1a0.piece<4,4>() == -0x7ffef8f7)) {
    if (local_1a0.piece<4,4>() == -0x7ffef8f7) {
      puVar6[4] = (local_160.piece<8,8>() & 0x3fffffff) << 0x20 | puVar6[4] & 0xc0000000ffffffff;
      if ((longlong)(ulonglong)(uint)param_3[5] < (longlong)local_160.piece<8,8>()) {
        iVar16 = param_1[0x39];
        param_3[6] = uStack_1a4;
      }
      else {
        iVar16 = param_1[0x39];
        param_3[6] = uVar8;
      }
    }
    plVar17 = (longlong *)(param_1 + 0x42);
    do {
      instructionSynchronize();
    } while (*plVar17 != *plVar17);
    lVar5 = storeDoubleWordConditionalIndexed
                      (((ulonglong)*(uint *)(iVar18 + iVar16 + 0x20) & 0x3fffffff) + *plVar17,0,
                       ZEXT48(plVar17));
    *plVar17 = lVar5;
    iVar16 = param_1[0x39];
    uVar10 = FUN_0052c8c4();
    iVar2 = iVar18 + param_1[0x39];
    *(undefined8 *)(iVar18 + iVar16) = uVar10;
    *(undefined8 *)(iVar2 + 8) = local_1b0;
    *(undefined8 *)(iVar2 + 0x10) = local_1b8;
    if (param_4 == 0) {
      if ((*(uint *)(iVar2 + 0x20) & 0x3fffffff) < (uint)param_3[5]) {
        uVar14 = 1;
        param_3[6] = local_1bc;
      }
      else {
        uVar14 = 1;
        param_3[6] = local_1c0;
      }
    }
    else {
      uVar14 = (*(code *)**(undefined4 **)(*param_1 + 0x54))(param_1,param_2,uVar13,param_4,param_3)
      ;
    }
  }
  else {
    uVar14 = 0;
    *puVar6 = 2;
  }
  FUN_0052cc20(piVar11);
  return uVar14;
}


// 0x0537bc4 (0x1e4 bytes)
void FUN_00537bc4(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x36) == '\0') {
    if ((*(ushort *)(param_2 + 0x28) & 1) != 0) {
      (*(code *)**(undefined4 **)(*param_1 + 8))(param_1,param_2);
      return;
    }
    puVar1 = *(uint **)(param_2 + 0x24);
    uVar2 = *puVar1;
    if (uVar2 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00537d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_DAT_0071afd8 + *(int *)(PTR_DAT_0071afd8 + uVar2 * 4)))();
      return;
    }
    if (((uVar2 == 0x10) && (puVar1[4] == 0)) && ((int *)puVar1[5] == param_1)) {
      puVar1[1] = 0;
      return;
    }
    piVar3 = (int *)param_1[0x10];
  }
  else {
    piVar3 = *(int **)(param_2 + 0x24);
    if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && ((int *)piVar3[5] == param_1)) {
      piVar3[1] = 0;
      return;
    }
    piVar3 = (int *)param_1[0x10];
  }
  if (piVar3 != (int *)0x0) {
    (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
  }
  return;
}


