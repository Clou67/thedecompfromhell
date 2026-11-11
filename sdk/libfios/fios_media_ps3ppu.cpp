// sdk/libfios/fios_media_ps3ppu.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 25 functions, 0x527e54-0x52a21c
#include <string.h>
#include "sdk/libfios/fios_media_ps3ppu.h"
#include "sdk/cell.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_media.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/libfios/fios_watch.h"
#include "sdk/mUnk4.h"
#include "sdk/sUnk.h"
#include "sdk/sce.h"

// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::DefaultPS3MediaCallback(void*, cell::fios::media*, unsigned char, void*)  [exact match]
// 0x0527e54 (0x24 bytes)
int FUN_00527e54(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (int)-(param_3 ^ 1) >> 0x1f;
  uVar2 = ((ulonglong)uVar1 & 0xf) << 0x1b | (ulonglong)(uVar1 >> 5);
  return ((uint)(uVar2 << 5) | (uint)uVar2 >> 0x1b) + 0x80010713;
}


// 0x0527e78 (0x30 bytes)
undefined8 FUN_00527e78(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00527e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071ace8 + *(int *)(PTR_DAT_0071ace8 + param_2 * 4)))();
    return uVar1;
  }
  return 0;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::getOpenFlags(int)  [fuzzy 0.962 match]
// 0x0527f58 (0x68 bytes)
uint FUN_00527f58(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)param_1 & 3;
  uVar2 = 0x400;
  uVar4 = 0;
  uVar3 = 1;
  if (uVar1 != 2) {
    uVar4 = 2;
    uVar3 = 0;
    if (uVar1 != 3) {
      uVar4 = 0;
    }
  }
  if ((param_1 & 4) == 0) {
    uVar2 = (uint)((param_1 >> 0xb & 1) << 0xc);
  }
  return uVar2 | (uint)((param_1 >> 4 & 1) << 9) | uVar4 | (uint)((param_1 >> 3 & 1) << 6) | uVar3;
}


// 0x0527fc0 (0x48 bytes)
int FUN_00527fc0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 < 0) && (iVar1 = param_2, param_2 + 0x7ffefffeU < 0x39)) {
                    /* WARNING: Could not recover jumptable at 0x00527ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(PTR_DAT_0071ad28 + *(int *)(PTR_DAT_0071ad28 + (param_2 + 0x7ffefffe) * 4)))
                      ();
    return iVar1;
  }
  return iVar1;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::allocateIndirectFD()  [exact match]
// 0x0528140 (0x74 bytes)
undefined * FUN_00528140(void)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = 0;
  lVar7 = 0x100;
  puVar4 = PTR_DAT_0071ad30;
  do {
    uVar3 = ((int)uVar5 >> 6) + (uint)((int)uVar5 < 0 && (uVar5 & 0x3f) != 0);
    iVar1 = uVar3 * 8;
    lVar2 = uVar5 + ((ulonglong)uVar3 & 0x3ffffff) * -0x40;
    uVar5 = uVar5 + 1;
    uVar6 = 1L << (0x3fU - lVar2 & 0x7f);
    if ((*(ulonglong *)(PTR_DAT_0071ad2c + iVar1) & uVar6) == 0) {
      *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) = *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) | uVar6;
      return puVar4;
    }
    puVar4 = puVar4 + 0x130;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return (undefined *)0x0;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::findMselfFD(int)  [exact match]
// 0x05281b4 (0x8c bytes)
int * FUN_005281b4(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar4;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  piVar1 = (int *)(PTR_DAT_0071ad2c + 0x20);
  lVar6 = 0x100;
  piVar2 = piVar1;
  while( true ) {
    uVar4 = ((int)uVar5 >> 6) + (uint)((int)uVar5 < 0 && (uVar5 & 0x3f) != 0);
    lVar3 = uVar5 + ((ulonglong)uVar4 & 0x3ffffff) * -0x40;
    uVar5 = uVar5 + 1;
    if (((*(ulonglong *)(PTR_DAT_0071ad2c + uVar4 * 8) >> (0x3fU - lVar3 & 0x7f) & 1) != 0) &&
       (*piVar2 == param_1)) break;
    piVar1 = piVar1 + 0x4c;
    lVar6 = lVar6 + -1;
    piVar2 = piVar2 + 0x4c;
    if (lVar6 == 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): __static_initialization_and_destruction_0(int, int)  [exact match]
// 0x0528240 (0x98 bytes)
// strings: 006686f0: 'ps3HDDLock'

void FUN_00528240(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_ps3HDDLock_0071ad34;
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      puVar2 = PTR_DAT_0071ad2c + 0x13028;
      *(undefined4 *)(PTR_DAT_0071ad2c + 0x13020) = 0;
      FUN_0052d370(puVar2,puVar1);
    }
  }
  else if ((param_1 == 0) && (param_2 == 0xffff)) {
    FUN_0052df14(PTR_DAT_0071ad2c + 0x13028);
    return;
  }
  return;
}


// 0x05282d8 (0x10 bytes)
void FUN_005282d8(void)

{
  FUN_00528240(0,0xffff);
  return;
}


// 0x05282e8 (0x10 bytes)
void FUN_005282e8(void)

{
  FUN_00528240(1,0xffff);
  return;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::deallocateIndirectFD(cell::fios::platform::ps3fd*)  [exact match]
// 0x05282f8 (0x64 bytes)
void FUN_005282f8(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)(param_1 - (int)(PTR_DAT_0071ad2c + 0x20) >> 4) * 0x286bca1b;
  uVar2 = ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0);
  iVar1 = uVar2 * 8;
  if (0xff < (uVar3 & 0xffffffff)) {
    return;
  }
  uVar3 = 1L << (0x3f - (uVar3 + ((ulonglong)uVar2 & 0x3ffffff) * -0x40) & 0x7f);
  if ((uVar3 & *(ulonglong *)(PTR_DAT_0071ad2c + iVar1)) == 0) {
    return;
  }
  *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) = *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) & ~uVar3;
  return;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::suspend(char const*)  [exact match]
// 0x052835c (0x78 bytes)
void FUN_0052835c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_006047b0(param_1);
  if (cVar4 == '\0') {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x128);
  do {
    uVar1 = *puVar3;
    instructionSynchronize();
    while (uVar1 == *puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar3));
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        return;
      }
    }
  } while( true );
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::readIdentifier()  [fuzzy 0.963 match]
// 0x05283d4 (0x80 bytes)
// strings: 00668700: 'cellFsStat'

uint FUN_005283d4(int param_1)

{
  uint uVar1;
  GPiece<72> auStack_50;
  
  if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
    FUN_00526404(0,PTR_s_cellFsStat_0071ad3c,param_1 + 0x32e);
  }
  uVar1 = cellFsStat(param_1 + 0x32e,auStack_50);
  return (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::mediaPathToPS3Path(char const*, char*) const  [exact match]
// 0x0528454 (0x144 bytes)
int FUN_00528454(int param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar2 = PTR_DAT_0071ad40;
  iVar3 = FUN_005cd198(param_3,0x100,PTR_DAT_0071ad40,param_1 + 0x32e);
  puVar4 = (undefined1 *)(param_3 + iVar3);
  puVar5 = puVar4;
  if ((0 < iVar3) && (puVar4[-1] != '/')) {
    iVar3 = iVar3 + 1;
    puVar5 = (undefined1 *)(param_3 + iVar3);
    *puVar4 = 0x2f;
    *puVar5 = 0;
  }
  cVar1 = *param_2;
  while (cVar1 == '/') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  iVar6 = FUN_005cd198(puVar5,0x100,puVar2,param_2);
  iVar6 = iVar6 + iVar3;
  if (1 < iVar6) {
    pcVar8 = (char *)(param_3 + iVar6 + -1);
    if (*pcVar8 == '/') {
      iVar6 = iVar6 + -1;
      do {
        pcVar7 = pcVar8 + -1;
        *pcVar8 = '\0';
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          return param_3;
        }
        pcVar8 = pcVar7;
      } while (*pcVar7 == '/');
    }
  }
  return param_3;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::reOpen(cell::fios::platform::ps3fd*, char*)  [fuzzy 0.973 match]
// 0x0528598 (0x37c bytes)
// strings: 00668738: 'cellFsSdataOpenByFd' | 00668718: 'cellFsOpen' | 00668728: 'cellFsSdataOpen'

undefined4 FUN_00528598(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  double dVar10;
  ulonglong uVar11;
  int iStack_d4;
  GPiece<8> local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_64;
  undefined4 uStack_58;
  
  FUN_00528454(param_1,param_2 + 7);
  uVar1 = param_2[6];
  puVar8 = (undefined1 *)0x0;
  uVar9 = 0;
  uVar4 = FUN_00527f58(uVar1);
  puVar3 = PTR_DAT_0071ad38;
  uVar4 = uVar4 & 0xfffff9bf;
  if ((uVar1 & 0x100) != 0) {
    puVar8 = local_90;
    uVar9 = 8;
  }
  if ((uVar1 & 0x200) == 0) {
    if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
      FUN_00526404(0,PTR_s_cellFsOpen_0071ad44,param_3);
    }
    iVar5 = cellFsOpen(param_3,uVar4,param_2,puVar8,uVar9);
  }
  else {
    puVar7 = (undefined4 *)param_2[0x4a];
    if (puVar7 == (undefined4 *)0x0) {
      if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
        FUN_00526404(0,PTR_s_cellFsSdataOpen_0071ad48,param_3);
      }
      iVar5 = cellFsSdataOpen(param_3,uVar4,param_2,0,0);
    }
    else {
      if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
        FUN_00526404(0,PTR_s_cellFsSdataOpenByFd_0071ad4c,param_3);
        puVar7 = (undefined4 *)param_2[0x4a];
      }
      iVar5 = cellFsSdataOpenByFd(*puVar7,uVar4,param_2,*(undefined8 *)(param_2 + 4),0,0);
    }
  }
  uVar6 = 0xffffffff;
  if (iVar5 != -0x7ffeffc6) {
    if (iVar5 == 0) {
      uVar6 = 0;
      if (0 < *(longlong *)(param_2 + 0x48)) {
        uStack_58 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        if ((*(uint *)(puVar3 + 0x18) & 0x10) != 0) {
          FUN_00526404(0,*(undefined4 *)(iStack_d4 + -0x75cc),param_3);
        }
        iVar5 = cellFsFstat(*param_2,&uStack_88);
        if (iVar5 == 0) {
          if (local_64 == *(longlong *)(param_2 + 0x48)) {
            *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
            return 0;
          }
          _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_d4 + -0x75c0),param_3);
          uVar1 = *(uint *)(puVar3 + 0x18);
        }
        else {
          uVar6 = strerror_wrapper(iVar5);
          _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_d4 + -0x75c8),param_3,uVar6);
          uVar1 = *(uint *)(puVar3 + 0x18);
        }
        if ((uVar1 & 0x10) != 0) {
          FUN_00526404(0,*(undefined4 *)(iStack_d4 + -0x75c4),param_3);
        }
        cellFsClose(*param_2);
        uVar6 = 0;
        *param_2 = 0xffffffff;
      }
    }
    else {
      *param_2 = 0xffffffff;
      do {
        lVar2 = TBLr;
      } while ((int)lVar2 == 0);
      dVar10 = **(double **)(iStack_d4 + -0x75d8) * (double)*(float *)(iStack_d4 + -0x75d4);
      if ((double)*(float *)(iStack_d4 + -0x75d0) <= dVar10) {
        uVar11 = (longlong)(dVar10 - (double)*(float *)(iStack_d4 + -0x75d0)) ^ 0x8000000000000000;
      }
      else {
        uVar11 = (ulonglong)dVar10;
      }
      FUN_0052e984(lVar2 + uVar11);
      uVar6 = 0;
    }
  }
  return uVar6;
}


// 0x0528914 (0x284 bytes)
// strings: 006687f8: 'm_dirLock' | 00668810: 'm_fdLock' | 00668828: 'media.m_suspendLock' | 00668840: 'media.m_suspendCond' | 00668860: '/dev_hdd0' | 00668880: 'g_fdIndirectionRWLock' | 00668870: '/dev_hdd1'

void FUN_00528914(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int *piVar6;
  byte bVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_00519c8c(param_1);
  puVar1 = PTR_s_ps3media_m_dirLock_0071ad70;
  *param_1 = PTR_PTR_0071ad6c;
  FUN_0052d370(param_1 + 0x26,puVar1);
  puVar1 = PTR_s_ps3media_m_fdLock_0071ad74;
  param_1[0x30] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_0052e1dc(param_1 + 0x34,puVar1);
  iVar8 = (int)param_1 + 0x32e;
  FUN_0052d370(param_1 + 0x3a,PTR_s_media_m_suspendLock_0071ad78);
  FUN_0052d19c(param_1 + 0x44,PTR_s_media_m_suspendCond_0071ad7c,PTR_DAT_0071ad80,param_1 + 0x3a);
  *(undefined1 *)((int)param_1 + 0x22e) = 0;
  param_1[0x4a] = 0;
  FUN_005193cc(iVar8,param_2,0x100);
  iVar5 = FUN_005ccb28(iVar8,PTR_s__dev_hdd0_0071ad84,9);
  bVar7 = 1;
  if (iVar5 != 0) {
    uVar4 = FUN_005ccb28(iVar8,PTR_s__dev_hdd1_0071ad88,9);
    uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
    bVar7 = (byte)(((uVar3 ^ uVar4) - uVar3) + -1 >> 0x18) >> 7;
  }
  puVar1 = PTR_DAT_0071ad2c;
  *(byte *)((int)param_1 + 0x42e) = bVar7;
  *(undefined8 *)(param_1 + 0x12) = 1;
  puVar2 = PTR_DAT_0071ad38;
  instructionSynchronize();
  if (*(int *)(puVar1 + 0x13020) == 0) {
    uVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071ad38 + 8))
                      (*(undefined4 **)(PTR_DAT_0071ad38 + 8),0x18,0x10440102,0,0);
    uVar3 = 0;
    if ((int)uVar4 != 0) {
      FUN_0052e1dc(uVar4 & 0xffffffff,PTR_s_ps3media_g_fdIndirectionRWLock_0071ad8c);
      uVar3 = uVar4;
    }
    piVar6 = (int *)(puVar1 + 0x13020);
    do {
      if (*piVar6 != 0) {
        if ((int)uVar3 != 0) {
          FUN_0052e5f8(uVar3 & 0xffffffff);
          (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                    (*(int **)(puVar2 + 8),uVar3 & 0xffffffff,0x10440102,0,0);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        iVar5 = storeWordConditionalIndexed(uVar3,0,ZEXT48(piVar6));
        *piVar6 = iVar5;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
  }
  FUN_0051afac(param_1,PTR_PTR_0071ad90,0,0,0);
  return;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::deallocateIndirectFDLock()  [exact match]
// 0x0528b98 (0xe4 bytes)
void FUN_00528b98(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  puVar5 = PTR_DAT_0071ad98;
  puVar4 = PTR_DAT_0071ad94;
  puVar3 = PTR_DAT_0071ad38;
  uVar6 = ZEXT48(PTR_DAT_0071ad98);
LAB_00528bc8:
  iVar1 = *(int *)(puVar4 + 0x3020);
  instructionSynchronize();
  do {
    if (iVar1 == 0) {
      return;
    }
    do {
      if (iVar1 != *(int *)puVar5) goto LAB_00528bc8;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar6);
        *(undefined4 *)puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    FUN_0052e5f8(iVar1);
    (*(code *)**(undefined4 **)(**(int **)(puVar3 + 8) + 4))
              (*(int **)(puVar3 + 8),iVar1,0x10440102,0,0);
    iVar1 = *(int *)(puVar4 + 0x3020);
    instructionSynchronize();
  } while( true );
}


// 0x0528c7c (0x284 bytes)
// strings: 006687f8: 'm_dirLock' | 00668810: 'm_fdLock' | 00668828: 'media.m_suspendLock' | 00668840: 'media.m_suspendCond' | 00668860: '/dev_hdd0' | 00668880: 'g_fdIndirectionRWLock' | 00668870: '/dev_hdd1'

void FUN_00528c7c(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int *piVar6;
  byte bVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_00519c8c(param_1);
  puVar1 = PTR_s_ps3media_m_dirLock_0071ad70;
  *param_1 = PTR_PTR_0071ad6c;
  FUN_0052d370(param_1 + 0x26,puVar1);
  puVar1 = PTR_s_ps3media_m_fdLock_0071ad74;
  param_1[0x30] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_0052e1dc(param_1 + 0x34,puVar1);
  iVar8 = (int)param_1 + 0x32e;
  FUN_0052d370(param_1 + 0x3a,PTR_s_media_m_suspendLock_0071ad78);
  FUN_0052d19c(param_1 + 0x44,PTR_s_media_m_suspendCond_0071ad7c,PTR_DAT_0071ad80,param_1 + 0x3a);
  *(undefined1 *)((int)param_1 + 0x22e) = 0;
  param_1[0x4a] = 0;
  FUN_005193cc(iVar8,param_2,0x100);
  iVar5 = FUN_005ccb28(iVar8,PTR_s__dev_hdd0_0071ad84,9);
  bVar7 = 1;
  if (iVar5 != 0) {
    uVar4 = FUN_005ccb28(iVar8,PTR_s__dev_hdd1_0071ad88,9);
    uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
    bVar7 = (byte)(((uVar3 ^ uVar4) - uVar3) + -1 >> 0x18) >> 7;
  }
  puVar1 = PTR_DAT_0071ad2c;
  *(byte *)((int)param_1 + 0x42e) = bVar7;
  *(undefined8 *)(param_1 + 0x12) = 1;
  puVar2 = PTR_DAT_0071ad38;
  instructionSynchronize();
  if (*(int *)(puVar1 + 0x13020) == 0) {
    uVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071ad38 + 8))
                      (*(undefined4 **)(PTR_DAT_0071ad38 + 8),0x18,0x10440102,0,0);
    uVar3 = 0;
    if ((int)uVar4 != 0) {
      FUN_0052e1dc(uVar4 & 0xffffffff,PTR_s_ps3media_g_fdIndirectionRWLock_0071ad8c);
      uVar3 = uVar4;
    }
    piVar6 = (int *)(puVar1 + 0x13020);
    do {
      if (*piVar6 != 0) {
        if ((int)uVar3 != 0) {
          FUN_0052e5f8(uVar3 & 0xffffffff);
          (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                    (*(int **)(puVar2 + 8),uVar3 & 0xffffffff,0x10440102,0,0);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        iVar5 = storeWordConditionalIndexed(uVar3,0,ZEXT48(piVar6));
        *piVar6 = iVar5;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
  }
  FUN_0051afac(param_1,PTR_PTR_0071ad90,0,0,0);
  return;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::closeReaddirFD()  [fuzzy 0.976 match]
// 0x0528f00 (0xc8 bytes)
// strings: 006688a0: 'cellFsClosedir'

void FUN_00528f00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<264> auStack_120;
  
  lwmutex_lock_checked(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 != -1) {
    if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
      uVar1 = FUN_00528454(param_1,param_1 + 0x22e,auStack_120);
      FUN_00526404(0,PTR_s_cellFsClosedir_0071ad9c,uVar1);
      iVar2 = *(int *)(param_1 + 0xc0);
    }
    cellFsClosedir(iVar2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  lwmutex_unlock_checked(param_1 + 0x98);
  return;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::getDirEntriesImp(cell::fios::mediaioparams*, char*)  [fuzzy 0.984 match]
// 0x0528fc8 (0x5b8 bytes)
// strings: 006688b0: 'cellFsOpendir'

/* WARNING: Removing unreachable block (ram,0x00529210) */
/* WARNING: Removing unreachable block (ram,0x0052950c) */
/* WARNING: Removing unreachable block (ram,0x0052951c) */
/* WARNING: Removing unreachable block (ram,0x00529524) */
/* WARNING: Removing unreachable block (ram,0x0052921c) */
/* WARNING: Removing unreachable block (ram,0x0052922c) */
/* WARNING: Removing unreachable block (ram,0x00529530) */

uint FUN_00528fc8(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ushort uVar9;
  short sVar10;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar11;
  undefined *puVar12;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined *puStack_f4;
  GPiece<8> local_b0;
  uint local_a8 [9];
  undefined8 local_84;
  
  puVar4 = &TOC_BASE;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  lwmutex_lock_checked(param_1 + 0x98);
  iVar2 = *(int *)(param_2 + 0x24);
  puVar3 = *(undefined8 **)(iVar2 + 0x50);
  if (((*(int *)(param_1 + 0xc0) == -1) ||
      (iVar5 = FUN_005cc784(*(undefined4 *)(iVar2 + 8),param_1 + 0x22e), iVar5 != 0)) ||
     (lVar11 = *(longlong *)(param_1 + 200), puVar12 = PTR_DAT_0071ad38,
     *(longlong *)(iVar2 + 0x30) < lVar11)) {
    FUN_00528f00(param_1);
    puVar12 = PTR_DAT_0071ad38;
    if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
      FUN_00526404(*(undefined4 *)(param_2 + 0xc),PTR_s_cellFsOpendir_0071ada0,param_3);
    }
    uVar6 = cellFsOpendir(param_3,param_1 + 0xc0);
    bVar1 = (int)(((int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f ^ uVar6)) < 0;
    if ((bVar1) && (iVar5 = *(int *)(param_1 + 0xc0), iVar5 != -1)) {
      if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
        FUN_00526404(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(puStack_f4 + -0x758c),param_3);
        iVar5 = *(int *)(param_1 + 0xc0);
      }
      cellFsClosedir(iVar5);
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    }
    if (((uVar6 == 0x8001003a) || (uVar6 == 0x8001002b)) ||
       ((uVar6 == 0x8001002f || ((uVar6 == 0x8001002a || (uVar6 == 0x8001002d))))))
    goto LAB_005290fc;
    if (bVar1) {
      uVar8 = FUN_00527fc0(param_1,uVar6);
      *(undefined4 *)(iVar2 + 4) = uVar8;
      goto LAB_005290fc;
    }
    FUN_005193cc(param_1 + 0x22e,*(undefined4 *)(iVar2 + 8),0x100);
    lVar11 = -1;
    *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
    puVar4 = puStack_f4;
  }
  while (*(longlong *)(iVar2 + 0x30) <= lVar11) {
    iVar5 = FUN_005cc784(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(puVar4 + -0x7580));
    *puVar3 = 0;
    *(uint *)(puVar3 + 2) = (uint)(((ulonglong)*(byte *)(param_1 + 300) ^ 1) - 1 >> 0x3f);
    if (iVar5 == 0) {
      uVar8 = *(undefined4 *)(puVar4 + -0x75e8);
    }
    else {
      uVar8 = *(undefined4 *)(puVar4 + -0x757c);
    }
    uVar9 = FUN_005cd198((int)puVar3 + 0x1a,0x100,uVar8,*(undefined4 *)(iVar2 + 8));
    uVar6 = (uint)uVar9;
    *(ushort *)(puVar3 + 3) = uVar9;
    if (uVar6 < 0xff) {
      sVar10 = FUN_005cd198((int)puVar3 + uVar6 + 0x1a,0x100 - uVar6,
                            *(undefined4 *)(puVar4 + -0x75e8),param_1 + 0x12e);
      *(short *)((int)puVar3 + 0x14) = sVar10;
      *(short *)((int)puVar3 + 0x16) = sVar10 + *(short *)(puVar3 + 3);
      if ((ushort)(sVar10 + *(short *)(puVar3 + 3)) < 0xff) {
        FUN_00528454(param_1,(int)puVar3 + 0x1a,param_3);
        if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
          FUN_00526404(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(puVar4 + -0x75ec),param_3);
        }
        uVar6 = cellFsStat(param_3,local_a8);
        if ((((uVar6 == 0x8001003a) || (uVar6 == 0x8001002b)) || (uVar6 == 0x8001002f)) ||
           ((uVar6 == 0x8001002a || (uVar6 == 0x8001002d)))) goto LAB_00529238;
        puVar4 = puStack_f4;
        if (uVar6 == 0) {
          puVar3[1] = local_84;
          if ((local_a8[0] & 0x100) != 0) {
            *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 2;
          }
          if ((local_a8[0] & 0x80) != 0) {
            *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 4;
          }
          uVar6 = 0;
          *(undefined8 *)(iVar2 + 0x48) = 0x120;
          goto LAB_005290fc;
        }
      }
    }
    lVar11 = *(longlong *)(param_1 + 200) + -1;
    *(longlong *)(param_1 + 200) = lVar11;
  }
  memset(param_1 + 300,0,0x102);
  if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
    FUN_00526404(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(puVar4 + -0x7584),param_3);
  }
  uVar6 = cellFsReaddir(*(undefined4 *)(param_1 + 0xc0),param_1 + 300,local_b0);
  if (((uVar6 == 0x8001003a) || (uVar6 == 0x8001002b)) ||
     ((uVar6 == 0x8001002f || ((uVar6 == 0x8001002a || (uVar6 == 0x8001002d)))))) {
LAB_00529238:
    *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
  }
  else {
    if (uVar6 == 0) {
      *(undefined4 *)(iVar2 + 4) = 0x8001070b;
    }
    else {
      uVar8 = FUN_00527fc0(param_1,uVar6);
      *(undefined4 *)(iVar2 + 4) = uVar8;
    }
    if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
      uVar8 = *(undefined4 *)(param_2 + 0xc);
      uVar7 = FUN_00528454(param_1,param_1 + 0x22e,param_3);
      FUN_00526404(uVar8,*(undefined4 *)(puStack_f4 + -0x758c),uVar7);
    }
    uVar6 = 0;
    cellFsClosedir(*(undefined4 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x22e) = 0;
  }
LAB_005290fc:
  lwmutex_unlock_checked(param_1 + 0x98);
  return uVar6;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::~ps3media()  [exact match]
// 0x0529580 (0xa8 bytes)
void FUN_00529580(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071ad6c;
  FUN_00528f00(param_1);
  FUN_0052d0e8(param_1 + 0x44);
  FUN_0052df14(param_1 + 0x3a);
  FUN_0052e5f8(param_1 + 0x34);
  FUN_0052df14(param_1 + 0x26);
  FUN_0051ab68(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}


// 0x0529628 (0x90 bytes)
void FUN_00529628(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071ad6c;
  FUN_00528f00(param_1);
  FUN_0052d0e8(param_1 + 0x44);
  FUN_0052df14(param_1 + 0x3a);
  FUN_0052e5f8(param_1 + 0x34);
  FUN_0052df14(param_1 + 0x26);
  FUN_0051ab68(param_1);
  return;
}


// 0x05296b8 (0x90 bytes)
void FUN_005296b8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071ad6c;
  FUN_00528f00(param_1);
  FUN_0052d0e8(param_1 + 0x44);
  FUN_0052df14(param_1 + 0x3a);
  FUN_0052e5f8(param_1 + 0x34);
  FUN_0052df14(param_1 + 0x26);
  FUN_0051ab68(param_1);
  return;
}


// SDK libfios.a(fios_media_ps3ppu.ppu.o): cell::fios::ps3media::resume(char const*)  [exact match]
// 0x0529748 (0xc0 bytes)
void FUN_00529748(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar3 = FUN_006047b0(param_1);
  if (cVar3 != '\0') {
    lwmutex_lock_checked(param_1 + 0xe8);
    instructionSynchronize();
    if (*(int *)(param_1 + 0x128) != 0) {
      puVar4 = (uint *)(param_1 + 0x128);
      do {
        uVar1 = *puVar4;
        instructionSynchronize();
        while (uVar1 == *puVar4) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar4));
            *puVar4 = uVar2;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            FUN_0052dc40(param_1 + 0x110);
            goto LAB_005297e4;
          }
        }
      } while( true );
    }
LAB_005297e4:
    lwmutex_unlock_checked(param_1 + 0xe8);
  }
  return;
}


// 0x0529808 (0x840 bytes)
// strings: 006688e0: '/dev_bdvd' | 0071adc0: 'Nnk(' (raw) | 00668900: 'Waiting for media %s\n' | 006688f0: '/dev_ps2disc' | 00668700: 'cellFsStat'

undefined4 FUN_00529808(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  double dVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_174;
  GPiece<79> auStack_130;
  byte local_e1;
  
  puVar9 = &TOC_BASE;
  iVar12 = param_1 + 0x32e;
  iVar10 = FUN_005ccb28(iVar12,PTR_s__dev_bdvd_0071adb0,9);
  puVar8 = PTR_s__dev_ps2disc_0071adb4;
  if ((iVar10 == 0) || (iVar10 = FUN_005ccb28(iVar12,PTR_s__dev_ps2disc_0071adb4,0xc), iVar10 == 0))
  {
    local_e1 = 1;
  }
  else {
    uVar20 = FUN_005ccb28(iVar12,puVar8,0xd);
    uVar19 = (ulonglong)((int)uVar20 >> 0x1f);
    local_e1 = (byte)(((uVar19 ^ uVar20) - uVar19) + -1 >> 0x18) >> 7;
  }
  puVar8 = PTR_DAT_0071ad38;
  if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
    FUN_00526c44(*(undefined4 *)(param_3 + 0xc),param_2);
  }
  puVar7 = PTR_DAT_0071ad2c;
  iVar10 = *(int *)(param_3 + 0x24);
  if ((*(int *)(param_3 + 0xc) != 0) && ((*(uint *)(*(int *)(param_3 + 0xc) + 0x30) >> 9 & 1) != 0))
  {
    *(undefined4 *)(iVar10 + 4) = 0x80010708;
    return 1;
  }
  uVar1 = *(undefined4 *)(PTR_DAT_0071ad2c + 0x13020);
  instructionSynchronize();
  _ZN4cell4fios8platform6rwlock9writeLockEv(uVar1);
  FUN_00528f00(param_1);
  dVar21 = (double)DAT_0071ad58;
  dVar22 = *(double *)PTR_DAT_0071ad50;
  dVar18 = dVar22 * (double)DAT_0071adb8;
  if (dVar21 <= dVar18) {
    uVar19 = (longlong)(dVar18 - dVar21) ^ 0x8000000000000000;
  }
  else {
    uVar19 = (ulonglong)dVar18;
  }
  bVar5 = false;
  bVar4 = true;
  bVar6 = false;
  do {
    do {
      lVar2 = TBLr;
    } while ((int)lVar2 == 0);
    iVar14 = 0;
    FUN_0052e984(lVar2 + uVar19);
    iVar11 = -0x7ffeffc6;
    while ((((iVar11 == -0x7ffeffc6 || (iVar11 == -0x7ffeffd5)) || (iVar11 == -0x7ffeffd1)) ||
           ((iVar11 == -0x7ffeffd6 || (iVar11 == -0x7ffeffd3))))) {
      if (0 < iVar14) {
        do {
          lVar2 = TBLr;
        } while ((int)lVar2 == 0);
        iVar11 = FUN_0051a3e4(param_1,1,0);
        if (iVar11 != -0x7ffef8ed) {
          if (bVar5) {
            dVar18 = dVar22 * (double)*(float *)(puVar9 + -0x7568);
            if (dVar18 < dVar21) goto LAB_005299f8;
LAB_00529b64:
            uVar20 = (longlong)(dVar18 - dVar21) ^ 0x8000000000000000;
          }
          else {
            bVar5 = true;
            _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x756c),iVar12);
            dVar18 = dVar22 * (double)*(float *)(puVar9 + -0x7568);
            if (dVar21 <= dVar18) goto LAB_00529b64;
LAB_005299f8:
            uVar20 = (ulonglong)dVar18;
          }
          FUN_0052e984(lVar2 + uVar20);
          goto LAB_00529a10;
        }
        iVar12 = FUN_0051a480(param_1);
        if (iVar12 != 0) {
          FUN_005231cc(iVar12,0);
        }
LAB_00529a74:
        if ((*(int *)(param_3 + 0xc) != 0) &&
           ((*(uint *)(*(int *)(param_3 + 0xc) + 0x30) >> 9 & 1) != 0)) {
          *(undefined4 *)(iVar10 + 4) = 0x80010708;
        }
        uVar15 = 1;
        if (*(int *)(iVar10 + 4) != -0x7ffef8f8) {
          uVar15 = 1;
          uVar13 = FUN_00527fc0(param_1,param_2);
          *(undefined4 *)(iVar10 + 4) = uVar13;
        }
        goto LAB_00529ac4;
      }
LAB_00529a10:
      if ((*(uint *)(puVar8 + 0x18) & 0x10) != 0) {
        FUN_00526404(0,*(undefined4 *)(puVar9 + -0x75ec),iVar12);
      }
      iVar11 = cellFsStat(iVar12,auStack_130);
      if ((bVar4) && (iVar14 == 0 && iVar11 == 0)) goto LAB_00529a74;
      iVar14 = iVar14 + 1;
      puVar9 = puStack_174;
    }
    if (iVar11 != 0) {
      uVar15 = strerror_wrapper(iVar11);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x7564),iVar12,iVar11,uVar15);
    }
    piVar17 = *(int **)(puVar9 + -0x75f8);
    bVar3 = true;
    uVar20 = 0;
    do {
      while ((iVar11 = (int)uVar20,
             uVar16 = (iVar11 >> 6) + (uint)(iVar11 < 0 && (uVar20 & 0x3f) != 0),
             (*(ulonglong *)(puVar7 + uVar16 * 8) >>
              (0x3f - (uVar20 + ((ulonglong)uVar16 & 0x3ffffff) * -0x40) & 0x7f) & 1) == 0 ||
             (piVar17[0x4b] != param_1))) {
LAB_00529c34:
        piVar17 = piVar17 + 0x4c;
        uVar20 = uVar20 + 1;
        if (iVar11 == 0xff) goto LAB_00529cfc;
      }
      iVar14 = *piVar17;
      if (iVar14 != -1) {
        if ((*(uint *)(puVar8 + 0x18) & 0x10) != 0) {
          uVar15 = FUN_00528454(param_1,piVar17 + 7,param_4);
          FUN_00526404(0,*(undefined4 *)(puVar9 + -0x75cc),uVar15);
          iVar14 = *piVar17;
        }
        iVar14 = cellFsFstat(iVar14,auStack_130);
        if (iVar14 == -0x7ffeffd6) {
          if ((*(uint *)(puVar8 + 0x18) & 0x10) != 0) {
            uVar15 = FUN_00528454(param_1,piVar17 + 7,param_4);
            FUN_00526404(0,*(undefined4 *)(puStack_174 + -0x75c4),uVar15);
          }
          cellFsClose(*piVar17);
          *piVar17 = -1;
          puVar9 = puStack_174;
        }
        else {
          puVar9 = puStack_174;
          if (*piVar17 != -1) goto LAB_00529c34;
        }
      }
      bVar3 = false;
      piVar17 = piVar17 + 0x4c;
      uVar20 = uVar20 + 1;
    } while (iVar11 != 0xff);
LAB_00529cfc:
    if (bVar3) {
      if (bVar6) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x7550),iVar12);
      }
      if (bVar5) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x754c),iVar12);
      }
      if ((*(int *)(param_3 + 0xc) == 0) ||
         ((*(uint *)(*(int *)(param_3 + 0xc) + 0x30) >> 9 & 1) == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        *(undefined4 *)(iVar10 + 4) = 0x80010708;
      }
LAB_00529ac4:
      FUN_0052cc20(uVar1);
      return uVar15;
    }
    if (!bVar4) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x7560),iVar12);
      if (local_e1 == 0) {
        bVar6 = true;
        _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x7558));
      }
      else {
        bVar6 = true;
        _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x755c));
      }
    }
    uVar20 = 0;
    piVar17 = *(int **)(puVar9 + -0x75f8);
    do {
      iVar11 = (int)uVar20;
      uVar16 = (iVar11 >> 6) + (uint)(iVar11 < 0 && (uVar20 & 0x3f) != 0);
      if (((((*(ulonglong *)(puVar7 + uVar16 * 8) >>
              (0x3f - (uVar20 + ((ulonglong)uVar16 & 0x3ffffff) * -0x40) & 0x7f) & 1) != 0) &&
           (piVar17[0x4b] == param_1)) && (*piVar17 == -1)) &&
         ((piVar17[0x4a] == 0 && (iVar14 = FUN_00528598(param_1,piVar17,param_4), iVar14 != 0))))
      break;
      uVar20 = uVar20 + 1;
      piVar17 = piVar17 + 0x4c;
    } while (iVar11 != 0xff);
    uVar20 = 0;
    piVar17 = *(int **)(puVar9 + -0x75f8);
    do {
      iVar11 = (int)uVar20;
      uVar16 = (iVar11 >> 6) + (uint)(iVar11 < 0 && (uVar20 & 0x3f) != 0);
      if ((((*(ulonglong *)(puVar7 + uVar16 * 8) >>
             (0x3f - (uVar20 + ((ulonglong)uVar16 & 0x3ffffff) * -0x40) & 0x7f) & 1) != 0) &&
          (piVar17[0x4b] == param_1)) &&
         ((*piVar17 == -1 &&
          ((piVar17[0x4a] != 0 && (iVar14 = FUN_00528598(param_1,piVar17,param_4), iVar14 != 0))))))
      break;
      uVar20 = uVar20 + 1;
      piVar17 = piVar17 + 0x4c;
    } while (iVar11 != 0xff);
    do {
      lVar2 = TBLr;
    } while ((int)lVar2 == 0);
    dVar18 = dVar22 * (double)*(float *)(puVar9 + -0x7554);
    if (dVar21 <= dVar18) {
      uVar20 = (longlong)(dVar18 - dVar21) ^ 0x8000000000000000;
    }
    else {
      uVar20 = (ulonglong)dVar18;
    }
    bVar4 = false;
    FUN_0052e984(lVar2 + uVar20);
  } while( true );
}


// 0x052a048 (0x1d4 bytes)
void FUN_0052a048(int param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar2 = *(uint **)(param_2 + 0x24);
  uVar1 = *(ushort *)(param_2 + 0x28);
  puVar2[1] = 0x80010701;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  if ((*puVar2 == 0x10) || ((uVar1 & 0x80) == 0)) {
    instructionSynchronize();
    if (*(int *)(param_1 + 0x128) != 0) {
      iVar3 = param_1 + 0xe8;
      lwmutex_lock_checked(iVar3);
      instructionSynchronize();
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          FUN_0052e49c(param_1 + 0x110,iVar3,0);
          instructionSynchronize();
        } while (*(int *)(param_1 + 0x128) != 0);
      }
      lwmutex_unlock_checked(iVar3);
    }
    if (*puVar2 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x0052a1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_DAT_0071ade0 + *(int *)(PTR_DAT_0071ade0 + *puVar2 * 4)))();
      return;
    }
    puVar2[1] = 0x80010707;
    if (puVar2[1] == 0x80010701) {
      puVar2[1] = 0;
    }
  }
  else {
    puVar2[1] = 0x80010714;
  }
  return;
}


