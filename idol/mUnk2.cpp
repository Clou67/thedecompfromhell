// idol/mUnk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 47 functions, 0x4eff54-0x4f14c8
#include <stdio.h>
#include <string.h>
#include "idol/mUnk2.h"
#include "game/boot.h"
#include "game/mobyutil.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/mUnk.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x04eff54 (0x140 bytes)
// strings: 0065b7cc: '%s failed: status = 0x%x\n' | 0065b7e8: 'sceNpTrophyInit' | 0065b7f8: 'sceNpTrophyCreateContext' | 0065b818: 'sceNpTrophyCreateHandle' | 0065b830: 'NPTrophyRegister' | 0065b848: 'thr_npTrophy_register'

void idol::RegisterTrophyCtxHandle(u32 param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  GPiece<16> auStack_20;
  
  uVar3 = (ulonglong)DAT_009030e4;
  uVar1 = sceNpTrophyInit(0,0,0xffffffff,0);
  if ((int)uVar1 < 0) {
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyInit",uVar1);
  }
  uVar1 = sceNpTrophyCreateContext(param_1 + 0x1ac,uVar3 + 4,uVar3 + 0x10,0);
  if ((int)uVar1 < 0) {
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyCreateContext",uVar1);
  }
  uVar1 = sceNpTrophyCreateHandle(param_1 + 0x1b0);
  if ((int)uVar1 < 0) {
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyCreateHandle",uVar1);
  }
  iVar2 = sys_ppu_thread_create
                    (auStack_20,&PTR_FUN_00710360,0,0x3e9,0x4000,0,"NPTrophyRegister");
  if (iVar2 != 0) {
    print_tty2("%s failed: status = 0x%x\n","thr_npTrophy_register",0xffffffffffffffff);
  }
  return;
}


// 0x04f0094 (0x27c bytes)
// strings: 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065b7cc: '%s failed: status = 0x%x\n' | 0065b860: 'sceNpTrophyGetGameInfo' | 0065b878: '*** *** *** sceNpTrophyGetTrophyInfo status = 0x%x - Trophy %d is hidden\n' | 0065b8c8: 'sceNpTrophyGetTrophyInfo'

void FUN_004f0094(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  GPiece<16> auStack_4d0;
  GPiece<1168> auStack_4c0;
  
  uVar2 = sceNpTrophyGetGameInfo
                    (*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1b0),
                     param_1 + 0x1b4,param_1 + 0x64c);
  if ((int)uVar2 < 0) {
    if ((*(int *)(param_1 + 0x1b0) != 0) &&
       (uVar3 = sceNpTrophyDestroyHandle(), (int)uVar3 < 0)) {
      print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar3);
    }
    if ((*(int *)(param_1 + 0x1ac) != 0) &&
       (uVar3 = sceNpTrophyDestroyContext(), (int)uVar3 < 0)) {
      print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar3);
    }
    *(undefined1 *)(param_1 + 4) = 0;
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyGetGameInfo",uVar2);
  }
  else {
    uVar4 = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      do {
        memset(auStack_4c0,0,0x48c);
        uVar2 = sceNpTrophyGetTrophyInfo
                          (*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1b0),uVar4,
                           auStack_4c0,auStack_4d0);
        if ((int)uVar2 < 0) {
          if ((int)uVar2 != -0x7ffdd6ed) {
            if ((*(int *)(param_1 + 0x1b0) != 0) &&
               (uVar3 = sceNpTrophyDestroyHandle(), (int)uVar3 < 0)) {
              print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar3);
            }
            if ((*(int *)(param_1 + 0x1ac) != 0) &&
               (uVar3 = sceNpTrophyDestroyContext(), (int)uVar3 < 0)) {
              print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar3);
            }
            *(undefined1 *)(param_1 + 4) = 0;
            print_tty2("%s failed: status = 0x%x\n","sceNpTrophyGetTrophyInfo",uVar2);
            return;
          }
          print_tty2("*** *** *** sceNpTrophyGetTrophyInfo status = 0x%x - Trophy %d is hidden\n",
                     uVar2,uVar4);
        }
        iVar1 = param_1 + (int)((uVar4 & 0xffffffff) << 3);
        *(int *)(iVar1 + 8) = (int)uVar4;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        syscall();
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)(int)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x1b4));
    }
  }
  return;
}


// 0x04f0310 (0xcc bytes)
// strings: 0065b8e4: 'ERROR: Invalid NP trophyID unlock request\n' | 0065b914: 'NPTrophyUnlock' | 0065b924: 'ERROR: Unlocking NPTrophy thread failed\n'

void idol::NPTrophyUnlock(int param_1,TROPHIES_ENUM param_2)

{
  int iVar1;
  GPiece<8> auStack_10;
  
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 0x18c) != '\0')) {
    if (((char)param_2 < '\0') || (*(uint *)(param_1 + 0x1b4) < (uint)(int)(char)param_2)) {
      print_tty2("ERROR: Invalid NP trophyID unlock request\n");
    }
    else {
      FUN_004f0ce8((longlong)param_1 + 0x194,param_2);
      if ((*(int *)(param_1 + 0x188) != 2) &&
         (iVar1 = sys_ppu_thread_create
                            (auStack_10,&PTR_FUN_00710368,0,0x3e9,0x4000,0,"NPTrophyUnlock"),
         iVar1 != 0)) {
        print_tty2("ERROR: Unlocking NPTrophy thread failed\n");
      }
    }
  }
  return;
}


// 0x04f03dc (0x120 bytes)
// strings: 0065b8e4: 'ERROR: Invalid NP trophyID unlock request\n' | 0065b914: 'NPTrophyUnlock' | 0065b924: 'ERROR: Unlocking NPTrophy thread failed\n'

void FUN_004f03dc(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  GPiece<8> auStack_10;
  
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 0x18c) != '\0')) {
    iVar2 = FUN_00503554(param_2);
    uVar1 = *(uint *)(param_1 + 0x1b4);
    uVar3 = 0;
    if (uVar1 != 0) {
      iVar4 = param_1;
      do {
        if (*(int *)(iVar4 + 8) == iVar2) {
          if (*(char *)(param_1 + 4) == '\0') {
            return;
          }
          if (*(char *)(param_1 + 0x18c) == '\0') {
            return;
          }
          if (((int)uVar3 < 0) || (uVar1 < uVar3)) {
            print_tty2("ERROR: Invalid NP trophyID unlock request\n");
            return;
          }
          FUN_004f0ce8(param_1 + 0x194,uVar3 & 0xff);
          if (*(int *)(param_1 + 0x188) == 2) {
            return;
          }
          iVar2 = sys_ppu_thread_create
                            (auStack_10,&PTR_FUN_00710368,0,0x3e9,0x4000,0,"NPTrophyUnlock");
          if (iVar2 == 0) {
            return;
          }
          print_tty2("ERROR: Unlocking NPTrophy thread failed\n");
          return;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 8;
      } while (uVar3 < uVar1);
    }
  }
  return;
}


// 0x04f04fc (0x124 bytes)
// strings: 0065b878: '*** *** *** sceNpTrophyGetTrophyInfo status = 0x%x - Trophy %d is hidden\n' | 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065b7cc: '%s failed: status = 0x%x\n' | 0065b8c8: 'sceNpTrophyGetTrophyInfo'

undefined1 FUN_004f04fc(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  GPiece<12> auStack_4c0;
  undefined1 local_4b4;
  GPiece<1176> auStack_4b0;
  
  uVar1 = sceNpTrophyGetTrophyInfo
                    (*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1b0),param_2,
                     auStack_4b0,auStack_4c0);
  if ((int)uVar1 < 0) {
    if ((int)uVar1 == -0x7ffdd6ed) {
      print_tty2("*** *** *** sceNpTrophyGetTrophyInfo status = 0x%x - Trophy %d is hidden\n",uVar1,
                 param_2);
      local_4b4 = 0;
    }
    else {
      if ((*(int *)(param_1 + 0x1b0) != 0) &&
         (uVar2 = sceNpTrophyDestroyHandle(), (int)uVar2 < 0)) {
        print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar2);
      }
      if ((*(int *)(param_1 + 0x1ac) != 0) &&
         (uVar2 = sceNpTrophyDestroyContext(), (int)uVar2 < 0)) {
        print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar2);
      }
      *(undefined1 *)(param_1 + 4) = 0;
      print_tty2("%s failed: status = 0x%x\n","sceNpTrophyGetTrophyInfo",uVar1);
      local_4b4 = 0;
    }
  }
  return local_4b4;
}


// 0x04f0620 (0x84 bytes)
ulonglong FUN_004f0620(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + 0x194;
  uVar3 = 0xffffffffffffffff;
  iVar1 = FUN_004f0de8(param_1);
  if (0 < iVar1) {
    pbVar2 = (byte *)FUN_004f0d50(param_1,iVar1 + -1);
    FUN_004f0d9c(param_1,iVar1 + -1);
    uVar3 = (ulonglong)*pbVar2;
  }
  return uVar3;
}


// 0x04f06a4 (0x4 bytes)
void FUN_004f06a4(void)

{
  return;
}


// 0x04f06a8 (0x4 bytes)
void FUN_004f06a8(void)

{
  return;
}


// 0x04f06ac (0x17c bytes)
// strings: 0065b950: 'error with stupid check disk space trophy function that is broken %#x\n' | 0065b998: '********** -- NP Trophy Register status code is %#x\n' | 0065b9d0: 'thr_npTrophy_register FAILED: status = %#x\n'

void FUN_004f06ac(void)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  undefined8 uVar2;
  undefined4 uVar5;
  GPiece<16> local_20;
  
  iVar1 = TrophyMgr;
  iVar3 = idol::GetSaveData();
  iVar3 = *(int *)(iVar3 + 0x470);
  *(undefined4 *)(iVar1 + 0x188) = 1;
  uVar4 = (5 - iVar3) * 0x180000 + 0x3ff;
  uVar2 = sceNpTrophyGetRequiredDiskSpace
                    (*(undefined4 *)(iVar1 + 0x1ac),*(undefined4 *)(iVar1 + 0x1b0),local_20,0);
  if ((int)uVar2 != 0) {
    printf("error with stupid check disk space trophy function that is broken %#x\n",uVar2);
  }
  uVar5 = FUN_004ee65c(DAT_008fabd4,
                       ((int)uVar4 >> 10) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3ff) != 0),1);
  *(undefined4 *)(iVar1 + 400) = uVar5;
  uVar4 = sceNpTrophyRegisterContext
                    (*(undefined4 *)(iVar1 + 0x1ac),*(undefined4 *)(iVar1 + 0x1b0),&PTR_FUN_00710370
                     ,0,0);
  print_tty2("********** -- NP Trophy Register status code is %#x\n",(ulonglong)uVar4);
  if (((-0x7ffdd6d9 < (int)uVar4) && (-0x7ffdd6d6 < (int)uVar4)) && (uVar4 == 0)) {
    FUN_004f0094(iVar1);
  }
  if (uVar4 != 0) {
    print_tty2("thr_npTrophy_register FAILED: status = %#x\n",(ulonglong)uVar4);
  }
  *(undefined4 *)(iVar1 + 0x188) = 0;
  sys_ppu_thread_exit(0);
  return;
}


// 0x04f0828 (0x278 bytes)
// strings: 0065b9fc: 'Platinum Trophy (%d) was unlocked!\n' | 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065ba24: 'sceNpTrophyUnlockTrophy *** ABORT ***\n' | 0065ba4c: '\n*** *** Trophy %d already unlocked!\n'

/* WARNING: Removing unreachable block (ram,0x004f0940) */

void FUN_004f0828(void)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar3;
  int iVar6;
  ulonglong uVar7;
  GPiece<8> local_60;
  
  iVar2 = TrophyMgr;
  uVar7 = 0xffffffffffffffff;
  iVar6 = TrophyMgr + 0x194;
  *(undefined4 *)(TrophyMgr + 0x188) = 2;
  iVar4 = FUN_004f0de8(iVar6);
  if (0 < iVar4) {
    pbVar5 = (byte *)FUN_004f0d50(iVar6,iVar4 + -1);
    FUN_004f0d9c(iVar6,iVar4 + -1);
    uVar7 = (ulonglong)*pbVar5;
  }
  if ((int)uVar7 != -1) {
    do {
      piVar1 = (int *)((int)(uVar7 << 3) + iVar2 + 0xc);
      if (*piVar1 == 0) {
        iVar4 = sceNpTrophyUnlockTrophy
                          (*(undefined4 *)(iVar2 + 0x1ac),*(undefined4 *)(iVar2 + 0x1b0),uVar7,
                           local_60);
        if (iVar4 == 0) {
          *piVar1 = 1;
        }
        else if (iVar4 == -0x7ffdd6f0) {
          if ((*(int *)(iVar2 + 0x1b0) != 0) &&
             (uVar3 = sceNpTrophyDestroyHandle(), (int)uVar3 < 0)) {
            print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar3);
          }
          if ((*(int *)(iVar2 + 0x1ac) != 0) &&
             (uVar3 = sceNpTrophyDestroyContext(), (int)uVar3 < 0)) {
            print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar3);
          }
          *(undefined1 *)(iVar2 + 4) = 0;
          print_tty2("sceNpTrophyUnlockTrophy *** ABORT ***\n");
        }
      }
      else {
        print_tty2("\n*** *** Trophy %d already unlocked!\n",uVar7);
      }
      syscall();
      uVar7 = 0xffffffffffffffff;
      iVar4 = FUN_004f0de8(iVar6);
      if (0 < iVar4) {
        pbVar5 = (byte *)FUN_004f0d50(iVar6,iVar4 + -1);
        FUN_004f0d9c(iVar6,iVar4 + -1);
        uVar7 = (ulonglong)*pbVar5;
      }
    } while ((int)uVar7 != -1);
  }
  *(undefined4 *)(iVar2 + 0x188) = 0;
  sys_ppu_thread_exit(0);
  return;
}


// 0x04f0ac8 (0x1bc bytes)
undefined8 FUN_004f0ac8(undefined8 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  auVar5.piece<0,4>() = param_4;
  auVar5.piece<4,4>() = param_4;
  auVar5.piece<8,4>() = param_4;
  auVar5.piece<12,4>() = param_4;
  fVar1 = 0.0;
  auVar4.piece<0,4>() = param_3;
  auVar4.piece<4,4>() = param_3;
  auVar4.piece<8,4>() = param_3;
  auVar4.piece<12,4>() = param_3;
  if (param_2 == 8) {
    uStack_c = 100;
    auVar2 = ZEXT416(0);
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  }
  else if (param_2 == 7) {
    fVar1 = 10.0;
    auVar2 = loadVectorLeftIndexed(4,0x4f0aa0);
    auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  }
  else if (param_2 == 6) {
    fVar1 = 80.0;
    auVar2 = loadVectorLeftIndexed(8,0x4f0aa0);
    auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  }
  else {
    auVar2 = ZEXT416(0);
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
    if (param_2 == 5) {
      fVar1 = 10.0;
      auVar2 = loadVectorLeftIndexed(4,0x4f0aa0);
      auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
    }
  }
  if (fVar1 != 0.0) {
    auVar3 = vectorConvertFromSignedFixedPointWord(auVar5,0);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = ZEXT416(0xffffffff);
    auVar9 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar4,0);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar7 = vectorReciprocalEstimateFloatingPoint(auVar3);
    auVar10 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(0xc,0x4f0aa0);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar7,auVar3,auVar8);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar5,auVar6);
    auVar7 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar3,auVar8);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar5,auVar7);
    auVar7 = loadVectorLeftIndexed(0xffffffffffffac54,0x900000);
    auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar3,auVar8);
    auVar5 = vectorMultiplyAddFloatingPoint(auVar6,auVar5,auVar9);
    auVar5 = vectorMultiplyAddFloatingPoint(auVar5,auVar4,auVar10);
    fVar1 = ((float)(longlong)param_3 / (float)(longlong)param_4) * fVar1 + DAT_008fac54;
    auVar5 = vectorMultiplyAddFloatingPoint(auVar5,auVar2,auVar7);
    if (param_3 == param_4) {
      auVar4 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      DAT_008fac54 = (float)storeVectorElementWordIndexed
                                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,
                                       0xffffffffffffac54,0x900000);
    }
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar4 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = loadVectorLeftIndexed(0xffffffffffffac50,0x900000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar4);
    if (param_2 == 5) {
      uStack_c = (int)(longlong)(fVar1 - DAT_008fac50);
    }
    if (uStack_c != 0) {
      DAT_008fac50 = (float)storeVectorElementWordIndexed(auVar4,0xffffffffffffac50,0x900000);
    }
  }
  return 0;
}


// 0x04f0c84 (0x14 bytes)
void FUN_004f0c84(void)

{
  DAT_008fac2c = 0x10000;
  return;
}


// 0x04f0c98 (0x28 bytes)
void FUN_004f0c98(u8 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}


// 0x04f0cc0 (0x28 bytes)
void FUN_004f0cc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}


// 0x04f0ce8 (0x68 bytes)
void FUN_004f0ce8(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(char *)(iVar1 + 1) != '\0') {
      if (iVar2 < 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0x14) = iVar2;
      *(undefined1 *)(param_1 + iVar2 * 2) = param_2;
      *(undefined1 *)(param_1 + iVar2 * 2 + 1) = 0;
      *(int *)(param_1 + 0xc) = iVar1 + 1;
      return;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 2;
  } while (iVar2 < 5);
  return;
}


// 0x04f0d50 (0x4c bytes)
ulonglong FUN_004f0d50(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(int *)((int)param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    param_2 = (ulonglong)*(uint *)((int)param_1 + 0x14) - param_2;
    uVar1 = param_1 + param_2 * 2 + ((longlong)(int)param_2 >> 0x3f & 10U) & 0xffffffff;
  }
  return uVar1;
}


// 0x04f0d9c (0x4c bytes)
void FUN_004f0d9c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    param_2 = *(int *)(param_1 + 0x14) - param_2;
    iVar1 = param_1 + param_2 * 2;
    if (param_2 < 0) {
      *(undefined1 *)(iVar1 + 0xb) = 1;
    }
    else {
      *(undefined1 *)(iVar1 + 1) = 1;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}


// 0x04f0de8 (0xc bytes)
undefined4 FUN_004f0de8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// 0x04f0df4 (0x30 bytes)
void FUN_004f0df4(u8 *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// 0x04f0e28 (0x1c bytes)
void FUN_004f0e28(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[4] = 0;
  param_1[2] = param_2;
  param_1[1] = param_2;
  param_1[3] = 0;
  return;
}


// 0x04f0e44 (0x1c bytes)
void FUN_004f0e44(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[4] = 0;
  param_1[2] = param_2;
  param_1[1] = param_2;
  param_1[3] = 0;
  return;
}


// 0x04f0e60 (0xc bytes)
void FUN_004f0e60(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}


// 0x04f0e6c (0x14 bytes)
void FUN_004f0e6c(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  return;
}


// 0x04f0e80 (0x14 bytes)
void FUN_004f0e80(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x7fU & 0xffffff80;
  return;
}


// 0x04f0e94 (0x14 bytes)
void FUN_004f0e94(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// 0x04f0ea8 (0x14 bytes)
void FUN_004f0ea8(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// 0x04f0ebc (0x18 bytes)
int FUN_004f0ebc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 8;
  return iVar1;
}


// 0x04f0ed4 (0x18 bytes)
int FUN_004f0ed4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + param_2;
  return iVar1;
}


// 0x04f0eec (0x24 bytes)
void FUN_004f0eec(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0xc0000000000;
  return;
}


// 0x04f0f10 (0x3c bytes)
void FUN_004f0f10(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                 ulonglong param_5)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x7f) << 8 |
            (param_5 & 0xff) << 0x10 |
            (param_4 & 0xff) << 0x18 | (param_2 & 0xf) << 0x25 | 0x20000000000;
  return;
}


// 0x04f0f4c (0x1c bytes)
void FUN_004f0f4c(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0;
  return;
}


// 0x04f0f68 (0x30 bytes)
void FUN_004f0f68(int param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0;
  *(undefined4 *)((int)puVar1 + 4) = param_2;
  *puVar1 = *puVar1 & 0xfffff1ffffffffff | 0x80000000000;
  return;
}


// 0x04f0f98 (0x80 bytes)
void FUN_004f0f98(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5
                 ,ulonglong param_6,ulonglong param_7)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = param_7 & 7 |
            (param_3 & 0x1f) << 0x20 |
            (param_2 & 0xf) << 0x25 |
            (param_6 & 1) << 0x2c |
            (param_6 >> 1 & 1) << 0x2d |
            (param_5 >> 4) << 0x32 | ((ulonglong)(param_4 << 0x20) >> 0x24) << 4 | 0xc00000000000 |
            0x40000000000;
  return;
}


// 0x04f1018 (0x5c bytes)
void FUN_004f1018(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5
                 ,ulonglong param_6)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x1f) << 0x20 |
            (param_2 & 0xf) << 0x25 |
            (param_6 & 1) << 0x2c |
            (param_6 >> 1 & 1) << 0x2d |
            (param_5 >> 4) << 0x32 | ((ulonglong)(param_4 << 0x20) >> 0x24) << 4 | 0x800000000000 |
            0x40000000000;
  return;
}


// 0x04f1074 (0x54 bytes)
void FUN_004f1074(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5
                 ,ulonglong param_6)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x1f) << 0x20 |
            (param_2 & 0xf) << 0x25 |
            (param_6 & 1) << 0x2c |
            (param_6 >> 1 & 1) << 0x2d |
            (param_5 >> 4) << 0x32 | ((ulonglong)(param_4 << 0x20) >> 0x24) << 4 | 0x40000000000;
  return;
}


// 0x04f10c8 (0x28 bytes)
void FUN_004f10c8(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0x60000000000;
  *(undefined4 *)((int)puVar1 + 4) = param_2;
  return;
}


// 0x04f10f0 (0x54 bytes)
ulonglong * FUN_004f10f0(ulonglong *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(param_2 + 0xc);
  *param_1 = ((ulonglong)*(uint *)(param_2 + 8) - (ulonglong)*(uint *)(param_2 + 0xc) & 0xfff) <<
             0x30 | *param_1 & 0xffffffffffff | 0x1000000000000000;
  *(undefined2 *)((int)param_1 + 2) = 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return param_1;
}


// 0x04f1144 (0x54 bytes)
ulonglong * FUN_004f1144(ulonglong *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(param_2 + 0xc);
  *param_1 = ((ulonglong)*(uint *)(param_2 + 8) - (ulonglong)*(uint *)(param_2 + 0xc) & 0xfff) <<
             0x30 | *param_1 & 0xffffffffffff;
  *(undefined2 *)((int)param_1 + 2) = 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return param_1;
}


// 0x04f1198 (0x40 bytes)
void FUN_004f1198(int param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x1f) << 0x20 | (param_2 & 0xf) << 0x25 | 0xa0000000000;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  return;
}


// 0x04f11d8 (0x44 bytes)
void FUN_004f11d8(int param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((param_2 & 0xffff) << 2);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x14)) = param_3;
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 8) = iVar1 + 0x20;
  *(undefined4 *)(iVar2 + iVar1) = param_3;
  return;
}


// 0x04f121c (0x4c bytes)
void FUN_004f121c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = param_3 + iVar1;
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      uVar2 = uVar6 + param_2;
      uVar3 = uVar6 + iVar1;
      uVar6 = uVar6 + 0x10;
      puVar4 = (undefined4 *)(uVar2 & 0xfffffff0);
      uVar9 = puVar4[2];
      uVar8 = puVar4[1];
      uVar7 = *puVar4;
      puVar5 = (undefined4 *)(uVar3 & 0xfffffff0);
      puVar5[3] = puVar4[3];
      puVar5[2] = uVar9;
      puVar5[1] = uVar8;
      *puVar5 = uVar7;
    } while (uVar6 < param_3);
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}


// 0x04f1268 (0x54 bytes)
void FUN_004f1268(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5
                 ,ulonglong param_6)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x1f) << 0x20 |
            (param_2 & 0xf) << 0x25 |
            (param_6 & 1) << 0x2c |
            (param_6 >> 1 & 1) << 0x2d |
            (param_5 >> 4) << 0x32 | ((ulonglong)(param_4 << 0x20) >> 0x24) << 4 | 0x40000000000;
  return;
}


// 0x04f12bc (0x64 bytes)
void FUN_004f12bc(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4,ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  puVar3 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar3 + 1;
  *puVar3 = (param_3 & 0x1f) << 0x20 |
            (param_2 & 0xf) << 0x25 |
            (param_5 & 1) << 0x2c |
            (param_5 >> 1 & 1) << 0x2d |
            (ulonglong)(uVar2 >> 4) << 0x32 | (ulonglong)(uVar1 >> 4) << 4 | 0x800000000000 |
            0x40000000000;
  return;
}


// 0x04f1320 (0x5c bytes)
void FUN_004f1320(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5
                 ,ulonglong param_6)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x1f) << 0x20 |
            (param_2 & 0xf) << 0x25 |
            (param_6 & 1) << 0x2c |
            (param_6 >> 1 & 1) << 0x2d |
            (param_5 >> 4) << 0x32 | ((ulonglong)(param_4 << 0x20) >> 0x24) << 4 | 0x800000000000 |
            0x40000000000;
  return;
}


// 0x04f137c (0x48 bytes)
undefined4 FUN_004f137c(int param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0xc0000000000;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  return uVar2;
}


// 0x04f13c8 (0x14 bytes)
void FUN_004f13c8(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  *param_1 = 0;
  return;
}


// 0x04f13dc (0xec bytes)
void FUN_004f13dc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  sync(1);
  *(undefined2 *)(iVar1 + 0x44) = 0xffff;
  *(undefined2 *)(iVar1 + 0x46) = 0xffff;
  *(undefined2 *)(iVar1 + 0x48) = 0xffff;
  *(undefined2 *)(iVar1 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x4c) = 0xffff;
  *(undefined2 *)(iVar1 + 0x4e) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar1 + 0x42) = 0;
  *(undefined2 *)(iVar1 + 0x40) = 0;
  sync(1);
  iVar1 = *param_1;
  sync(1);
  *(undefined2 *)(iVar1 + 0x54) = 0xffff;
  *(undefined2 *)(iVar1 + 0x56) = 0xffff;
  *(undefined2 *)(iVar1 + 0x58) = 0xffff;
  *(undefined2 *)(iVar1 + 0x5a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x5c) = 0xffff;
  *(undefined2 *)(iVar1 + 0x5e) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar1 + 0x52) = 0;
  *(undefined2 *)(iVar1 + 0x50) = 0;
  sync(1);
  iVar1 = *param_1;
  sync(1);
  *(undefined2 *)(iVar1 + 100) = 0xffff;
  *(undefined2 *)(iVar1 + 0x66) = 0xffff;
  *(undefined2 *)(iVar1 + 0x68) = 0xffff;
  *(undefined2 *)(iVar1 + 0x6a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x6c) = 0xffff;
  *(undefined2 *)(iVar1 + 0x6e) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar1 + 0x62) = 0;
  *(undefined2 *)(iVar1 + 0x60) = 0;
  sync(1);
  iVar1 = *param_1;
  sync(1);
  *(undefined2 *)(iVar1 + 0x7e) = 0xffff;
  *(undefined2 *)(iVar1 + 0x74) = 0xffff;
  *(undefined2 *)(iVar1 + 0x76) = 0xffff;
  *(undefined2 *)(iVar1 + 0x78) = 0xffff;
  *(undefined2 *)(iVar1 + 0x7a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x7c) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar1 + 0x72) = 0;
  *(undefined2 *)(iVar1 + 0x70) = 0;
  sync(1);
  return;
}


