//==== 004f0094  ns=Global  size=0x27c
// sig: undefined FUN_004f0094(void)
// callers(1): 004f06ac FUN_004f06ac
// callees(6): 004ffc9c print_tty2; 005d0140 libc::memset; 0064f824 sce::sceNpTrophyDestroyContext; 0064f864 sce::sceNpTrophyGetGameInfo; 0064f884 sce::sceNpTrophyDestroyHandle; 0064f8e4 sce::sceNpTrophyGetTrophyInfo
// strings: 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065b7cc: '%s failed: status = 0x%x\n' | 0065b860: 'sceNpTrophyGetGameInfo' | 0065b878: '*** *** *** sceNpTrophyGetTrophyInfo status = 0x%x - Trophy %d is hidden\n' | 0065b8c8: 'sceNpTrophyGetTrophyInfo'

void FUN_004f0094(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_4d0 [16];
  undefined1 auStack_4c0 [1168];
  
  uVar2 = sce::sceNpTrophyGetGameInfo
                    (*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1b0),
                     param_1 + 0x1b4,param_1 + 0x64c);
  if ((int)uVar2 < 0) {
    if ((*(int *)(param_1 + 0x1b0) != 0) &&
       (uVar3 = sce::sceNpTrophyDestroyHandle(), (int)uVar3 < 0)) {
      print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar3);
    }
    if ((*(int *)(param_1 + 0x1ac) != 0) &&
       (uVar3 = sce::sceNpTrophyDestroyContext(), (int)uVar3 < 0)) {
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
        libc::memset(auStack_4c0,0,0x48c);
        uVar2 = sce::sceNpTrophyGetTrophyInfo
                          (*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1b0),uVar4,
                           auStack_4c0,auStack_4d0);
        if ((int)uVar2 < 0) {
          if ((int)uVar2 != -0x7ffdd6ed) {
            if ((*(int *)(param_1 + 0x1b0) != 0) &&
               (uVar3 = sce::sceNpTrophyDestroyHandle(), (int)uVar3 < 0)) {
              print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar3);
            }
            if ((*(int *)(param_1 + 0x1ac) != 0) &&
               (uVar3 = sce::sceNpTrophyDestroyContext(), (int)uVar3 < 0)) {
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



//==== 004f0310  ns=idol  size=0xcc
// sig: undefined NPTrophyUnlock(undefined4 param_1, TROPHIES_ENUM param_2)
// callers(4): 00112dc0 mobyutil::MB_UnlockTrophy; 00112e18 mobyutil::MB_UnlockItem; 0011b6c4 mobyutil::MB_UnlockSkillPointTrophy; 0011b728 mobyutil::MB_UnlockSkillPoint
// callees(3): 004f0ce8 FUN_004f0ce8; 004ffc9c print_tty2; 00650524 sys::sys_ppu_thread_create
// strings: 0065b8e4: 'ERROR: Invalid NP trophyID unlock request\n' | 0065b914: 'NPTrophyUnlock' | 0065b924: 'ERROR: Unlocking NPTrophy thread failed\n'

void idol::NPTrophyUnlock(int param_1,TROPHIES_ENUM param_2)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 0x18c) != '\0')) {
    if (((char)param_2 < '\0') || (*(uint *)(param_1 + 0x1b4) < (uint)(int)(char)param_2)) {
      print_tty2("ERROR: Invalid NP trophyID unlock request\n");
    }
    else {
      FUN_004f0ce8((longlong)param_1 + 0x194,param_2);
      if ((*(int *)(param_1 + 0x188) != 2) &&
         (iVar1 = sys::sys_ppu_thread_create
                            (auStack_10,&PTR_FUN_00710368,0,0x3e9,0x4000,0,"NPTrophyUnlock"),
         iVar1 != 0)) {
        print_tty2("ERROR: Unlocking NPTrophy thread failed\n");
      }
    }
  }
  return;
}



//==== 004f03dc  ns=Global  size=0x120
// sig: undefined FUN_004f03dc(void)
// callers(0): 
// callees(4): 004f0ce8 FUN_004f0ce8; 004ffc9c print_tty2; 00503554 FUN_00503554; 00650524 sys::sys_ppu_thread_create
// strings: 0065b8e4: 'ERROR: Invalid NP trophyID unlock request\n' | 0065b914: 'NPTrophyUnlock' | 0065b924: 'ERROR: Unlocking NPTrophy thread failed\n'

void FUN_004f03dc(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_10 [8];
  
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
          iVar2 = sys::sys_ppu_thread_create
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



//==== 004f04fc  ns=Global  size=0x124
// sig: undefined FUN_004f04fc(void)
// callers(0): 
// callees(4): 004ffc9c print_tty2; 0064f824 sce::sceNpTrophyDestroyContext; 0064f884 sce::sceNpTrophyDestroyHandle; 0064f8e4 sce::sceNpTrophyGetTrophyInfo
// strings: 0065b878: '*** *** *** sceNpTrophyGetTrophyInfo status = 0x%x - Trophy %d is hidden\n' | 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065b7cc: '%s failed: status = 0x%x\n' | 0065b8c8: 'sceNpTrophyGetTrophyInfo'

undefined1 FUN_004f04fc(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_4c0 [12];
  undefined1 local_4b4;
  undefined1 auStack_4b0 [1176];
  
  uVar1 = sce::sceNpTrophyGetTrophyInfo
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
         (uVar2 = sce::sceNpTrophyDestroyHandle(), (int)uVar2 < 0)) {
        print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar2);
      }
      if ((*(int *)(param_1 + 0x1ac) != 0) &&
         (uVar2 = sce::sceNpTrophyDestroyContext(), (int)uVar2 < 0)) {
        print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar2);
      }
      *(undefined1 *)(param_1 + 4) = 0;
      print_tty2("%s failed: status = 0x%x\n","sceNpTrophyGetTrophyInfo",uVar1);
      local_4b4 = 0;
    }
  }
  return local_4b4;
}



//==== 004f0620  ns=Global  size=0x84
// sig: undefined FUN_004f0620(void)
// callers(0): 
// callees(3): 004f0d50 FUN_004f0d50; 004f0d9c FUN_004f0d9c; 004f0de8 FUN_004f0de8

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



//==== 004f06a4  ns=Global  size=0x4
// sig: undefined FUN_004f06a4(void)
// callers(0): 
// callees(0): 

void FUN_004f06a4(void)

{
  return;
}



//==== 004f06a8  ns=Global  size=0x4
// sig: undefined FUN_004f06a8(void)
// callers(0): 
// callees(0): 

void FUN_004f06a8(void)

{
  return;
}



//==== 004f06ac  ns=Global  size=0x17c
// sig: undefined FUN_004f06ac(void)
// callers(0): 
// callees(8): 004e7404 idol::GetSaveData; 004ee65c FUN_004ee65c; 004f0094 FUN_004f0094; 004ffc9c print_tty2; 005cd098 libc::printf; 0064f7c4 sce::sceNpTrophyRegisterContext; 0064f804 sce::sceNpTrophyGetRequiredDiskSpace; 00650744 sys::sys_ppu_thread_exit
// strings: 0065b950: 'error with stupid check disk space trophy function that is broken %#x\n' | 0065b998: '********** -- NP Trophy Register status code is %#x\n' | 0065b9d0: 'thr_npTrophy_register FAILED: status = %#x\n'

void FUN_004f06ac(void)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  undefined8 uVar2;
  undefined4 uVar5;
  undefined1 local_20 [16];
  
  iVar1 = TrophyMgr;
  iVar3 = idol::GetSaveData();
  iVar3 = *(int *)(iVar3 + 0x470);
  *(undefined4 *)(iVar1 + 0x188) = 1;
  uVar4 = (5 - iVar3) * 0x180000 + 0x3ff;
  uVar2 = sce::sceNpTrophyGetRequiredDiskSpace
                    (*(undefined4 *)(iVar1 + 0x1ac),*(undefined4 *)(iVar1 + 0x1b0),local_20,0);
  if ((int)uVar2 != 0) {
    libc::printf("error with stupid check disk space trophy function that is broken %#x\n",uVar2);
  }
  uVar5 = FUN_004ee65c(DAT_008fabd4,
                       ((int)uVar4 >> 10) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3ff) != 0),1);
  *(undefined4 *)(iVar1 + 400) = uVar5;
  uVar4 = sce::sceNpTrophyRegisterContext
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
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004f0828  ns=Global  size=0x278
// sig: undefined FUN_004f0828(void)
// callers(0): 
// callees(8): 004f0d50 FUN_004f0d50; 004f0d9c FUN_004f0d9c; 004f0de8 FUN_004f0de8; 004ffc9c print_tty2; 0064f824 sce::sceNpTrophyDestroyContext; 0064f884 sce::sceNpTrophyDestroyHandle; 0064f8a4 sce::sceNpTrophyUnlockTrophy; 00650744 sys::sys_ppu_thread_exit
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
  undefined1 local_60 [8];
  
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
        iVar4 = sce::sceNpTrophyUnlockTrophy
                          (*(undefined4 *)(iVar2 + 0x1ac),*(undefined4 *)(iVar2 + 0x1b0),uVar7,
                           local_60);
        if (iVar4 == 0) {
          *piVar1 = 1;
        }
        else if (iVar4 == -0x7ffdd6f0) {
          if ((*(int *)(iVar2 + 0x1b0) != 0) &&
             (uVar3 = sce::sceNpTrophyDestroyHandle(), (int)uVar3 < 0)) {
            print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar3);
          }
          if ((*(int *)(iVar2 + 0x1ac) != 0) &&
             (uVar3 = sce::sceNpTrophyDestroyContext(), (int)uVar3 < 0)) {
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
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004f0ac8  ns=Global  size=0x1bc
// sig: undefined FUN_004f0ac8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004f0ac8(undefined8 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_c;
  
  uStack_c = 0;
  auVar5._0_4_ = param_4;
  auVar5._4_4_ = param_4;
  auVar5._8_4_ = param_4;
  auVar5._12_4_ = param_4;
  fVar1 = 0.0;
  auVar4._0_4_ = param_3;
  auVar4._4_4_ = param_3;
  auVar4._8_4_ = param_3;
  auVar4._12_4_ = param_3;
  if (param_2 == 8) {
    uStack_c = 100;
    auVar2 = ZEXT416(0);
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  }
  else if (param_2 == 7) {
    fVar1 = 10.0;
    auVar2 = loadVectorLeftIndexed(4,0x4f0aa0);
    auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  }
  else if (param_2 == 6) {
    fVar1 = 80.0;
    auVar2 = loadVectorLeftIndexed(8,0x4f0aa0);
    auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  }
  else {
    auVar2 = ZEXT416(0);
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
    if (param_2 == 5) {
      fVar1 = 10.0;
      auVar2 = loadVectorLeftIndexed(4,0x4f0aa0);
      auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
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
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
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
      auVar4 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      DAT_008fac54 = (float)storeVectorElementWordIndexed
                                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,
                                       0xffffffffffffac54,0x900000);
    }
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar4 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = loadVectorLeftIndexed(0xffffffffffffac50,0x900000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
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



//==== 004f0c84  ns=Global  size=0x14
// sig: undefined FUN_004f0c84(void)
// callers(0): 
// callees(0): 

void FUN_004f0c84(void)

{
  DAT_008fac2c = 0x10000;
  return;
}



//==== 004f0c98  ns=Global  size=0x28
// sig: undefined FUN_004f0c98(void)
// callers(1): 000148f8 boot::StaticInit_BootGlobals
// callees(0): 

void FUN_004f0c98(int param_1)

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



//==== 004f0cc0  ns=Global  size=0x28
// sig: undefined FUN_004f0cc0(void)
// callers(0): 
// callees(0): 

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



//==== 004f0ce8  ns=Global  size=0x68
// sig: undefined FUN_004f0ce8(void)
// callers(2): 004f0310 idol::NPTrophyUnlock; 004f03dc FUN_004f03dc
// callees(0): 

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



//==== 004f0d50  ns=Global  size=0x4c
// sig: undefined FUN_004f0d50(void)
// callers(2): 004f0620 FUN_004f0620; 004f0828 FUN_004f0828
// callees(0): 

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



//==== 004f0d9c  ns=Global  size=0x4c
// sig: undefined FUN_004f0d9c(void)
// callers(2): 004f0620 FUN_004f0620; 004f0828 FUN_004f0828
// callees(0): 

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



//==== 004f0de8  ns=Global  size=0xc
// sig: undefined FUN_004f0de8(void)
// callers(2): 004f0620 FUN_004f0620; 004f0828 FUN_004f0828
// callees(0): 

undefined4 FUN_004f0de8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



//==== 004f0df4  ns=Global  size=0x30
// sig: undefined FUN_004f0df4(void)
// callers(1): 000148f8 boot::StaticInit_BootGlobals
// callees(0): 

void FUN_004f0df4(int param_1)

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



//==== 004f0e28  ns=Global  size=0x1c
// sig: undefined FUN_004f0e28(void)
// callers(0): 
// callees(0): 

void FUN_004f0e28(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[4] = 0;
  param_1[2] = param_2;
  param_1[1] = param_2;
  param_1[3] = 0;
  return;
}



//==== 004f0e44  ns=Global  size=0x1c
// sig: undefined FUN_004f0e44(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

void FUN_004f0e44(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[4] = 0;
  param_1[2] = param_2;
  param_1[1] = param_2;
  param_1[3] = 0;
  return;
}



//==== 004f0e60  ns=Global  size=0xc
// sig: undefined FUN_004f0e60(void)
// callers(0): 
// callees(0): 

void FUN_004f0e60(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}



//==== 004f0e6c  ns=Global  size=0x14
// sig: undefined FUN_004f0e6c(void)
// callers(0): 
// callees(0): 

void FUN_004f0e6c(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  return;
}



//==== 004f0e80  ns=Global  size=0x14
// sig: undefined FUN_004f0e80(void)
// callers(0): 
// callees(0): 

void FUN_004f0e80(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x7fU & 0xffffff80;
  return;
}



//==== 004f0e94  ns=Global  size=0x14
// sig: undefined FUN_004f0e94(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

void FUN_004f0e94(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



//==== 004f0ea8  ns=Global  size=0x14
// sig: undefined FUN_004f0ea8(void)
// callers(0): 
// callees(0): 

void FUN_004f0ea8(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



//==== 004f0ebc  ns=Global  size=0x18
// sig: undefined FUN_004f0ebc(void)
// callers(0): 
// callees(0): 

int FUN_004f0ebc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 8;
  return iVar1;
}



//==== 004f0ed4  ns=Global  size=0x18
// sig: undefined FUN_004f0ed4(void)
// callers(0): 
// callees(0): 

int FUN_004f0ed4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + param_2;
  return iVar1;
}



//==== 004f0eec  ns=Global  size=0x24
// sig: undefined FUN_004f0eec(void)
// callers(0): 
// callees(0): 

void FUN_004f0eec(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0xc0000000000;
  return;
}



//==== 004f0f10  ns=Global  size=0x3c
// sig: undefined FUN_004f0f10(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

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



//==== 004f0f4c  ns=Global  size=0x1c
// sig: undefined FUN_004f0f4c(void)
// callers(0): 
// callees(0): 

void FUN_004f0f4c(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0;
  return;
}



//==== 004f0f68  ns=Global  size=0x30
// sig: undefined FUN_004f0f68(void)
// callers(0): 
// callees(0): 

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



//==== 004f0f98  ns=Global  size=0x80
// sig: undefined FUN_004f0f98(void)
// callers(0): 
// callees(0): 

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



//==== 004f1018  ns=Global  size=0x5c
// sig: undefined FUN_004f1018(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

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



//==== 004f1074  ns=Global  size=0x54
// sig: undefined FUN_004f1074(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

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



//==== 004f10c8  ns=Global  size=0x28
// sig: undefined FUN_004f10c8(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

void FUN_004f10c8(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = 0x60000000000;
  *(undefined4 *)((int)puVar1 + 4) = param_2;
  return;
}



//==== 004f10f0  ns=Global  size=0x54
// sig: undefined FUN_004f10f0(void)
// callers(0): 
// callees(0): 

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



//==== 004f1144  ns=Global  size=0x54
// sig: undefined FUN_004f1144(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

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



//==== 004f1198  ns=Global  size=0x40
// sig: undefined FUN_004f1198(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

void FUN_004f1198(int param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  *(ulonglong **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (param_3 & 0x1f) << 0x20 | (param_2 & 0xf) << 0x25 | 0xa0000000000;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  return;
}



//==== 004f11d8  ns=Global  size=0x44
// sig: undefined FUN_004f11d8(void)
// callers(0): 
// callees(0): 

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



//==== 004f121c  ns=Global  size=0x4c
// sig: undefined FUN_004f121c(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

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



//==== 004f1268  ns=Global  size=0x54
// sig: undefined FUN_004f1268(void)
// callers(0): 
// callees(0): 

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



//==== 004f12bc  ns=Global  size=0x64
// sig: undefined FUN_004f12bc(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

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



//==== 004f1320  ns=Global  size=0x5c
// sig: undefined FUN_004f1320(void)
// callers(0): 
// callees(0): 

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



//==== 004f137c  ns=Global  size=0x48
// sig: undefined FUN_004f137c(void)
// callers(0): 
// callees(0): 

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



//==== 004f13c8  ns=Global  size=0x14
// sig: undefined FUN_004f13c8(void)
// callers(4): 004f3c04 FUN_004f3c04; 004f4b38 FUN_004f4b38; 004f4b7c FUN_004f4b7c; 0064d090 FUN_0064d090
// callees(0): 

void FUN_004f13c8(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  *param_1 = 0;
  return;
}



//==== 004f13dc  ns=Global  size=0xec
// sig: undefined FUN_004f13dc(void)
// callers(0): 
// callees(0): 

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



//==== 004f14c8  ns=idol_draw  size=0x4c
// sig: undefined CmdQueue_ResetCounters(void)
// callers(5): 004f3bbc idol_draw::CmdQueue_Reset; 004f4a80 FUN_004f4a80; 004f4c48 FUN_004f4c48; 004f4d1c FUN_004f4d1c; 0064cf44 FUN_0064cf44
// callees(0): 

void idol_draw::CmdQueue_ResetCounters(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x10 + *param_1;
  sync(1);
  *(undefined2 *)(iVar1 + 0x4e) = 0xffff;
  *(undefined2 *)(iVar1 + 0x44) = 0xffff;
  *(undefined2 *)(iVar1 + 0x46) = 0xffff;
  *(undefined2 *)(iVar1 + 0x48) = 0xffff;
  *(undefined2 *)(iVar1 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x4c) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar1 + 0x42) = 0;
  *(undefined2 *)(iVar1 + 0x40) = 0;
  sync(1);
  return;
}



//==== 004f1514  ns=Global  size=0x90
// sig: undefined FUN_004f1514(void)
// callers(0): 
// callees(0): 

void FUN_004f1514(int *param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    iVar1 = (int)((param_2 & 0xffffffff) << 4) + *param_1;
    sync(1);
    uVar3 = (uint)*(ushort *)(iVar1 + 0x42);
    if ((uint)*(ushort *)(iVar1 + 0x44) < (uint)*(ushort *)(iVar1 + 0x42)) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x44);
    }
    if (*(ushort *)(iVar1 + 0x46) < uVar3) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x46);
    }
    if (*(ushort *)(iVar1 + 0x48) < uVar3) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x48);
    }
    if (*(ushort *)(iVar1 + 0x4a) < uVar3) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x4a);
    }
    if (*(ushort *)(iVar1 + 0x4c) < uVar3) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x4c);
    }
    uVar2 = (uint)*(ushort *)(iVar1 + 0x4e);
    if (uVar3 <= *(ushort *)(iVar1 + 0x4e)) {
      uVar2 = uVar3;
    }
  } while (uVar2 < param_3);
  return;
}



//==== 004f15a4  ns=Global  size=0x8c
// sig: undefined FUN_004f15a4(void)
// callers(0): 
// callees(0): 

ushort FUN_004f15a4(int *param_1,ulonglong param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  
  iVar1 = (int)((param_2 & 0xffffffff) << 4) + *param_1;
  sync(1);
  uVar2 = *(ushort *)(iVar1 + 0x42);
  if (*(ushort *)(iVar1 + 0x44) < *(ushort *)(iVar1 + 0x42)) {
    uVar2 = *(ushort *)(iVar1 + 0x44);
  }
  if (*(ushort *)(iVar1 + 0x46) < uVar2) {
    uVar2 = *(ushort *)(iVar1 + 0x46);
  }
  if (*(ushort *)(iVar1 + 0x48) < uVar2) {
    uVar2 = *(ushort *)(iVar1 + 0x48);
  }
  if (*(ushort *)(iVar1 + 0x4a) < uVar2) {
    uVar2 = *(ushort *)(iVar1 + 0x4a);
  }
  if (*(ushort *)(iVar1 + 0x4c) < uVar2) {
    uVar2 = *(ushort *)(iVar1 + 0x4c);
  }
  uVar3 = *(ushort *)(iVar1 + 0x4e);
  if (uVar2 <= *(ushort *)(iVar1 + 0x4e)) {
    uVar3 = uVar2;
  }
  return uVar3;
}



//==== 004f1630  ns=idol_draw  size=0x9c
// sig: undefined CmdQueue_HasCapacity(void)
// callers(2): 004f44b4 FUN_004f44b4; 004f4ac8 idol_draw::CmdQueue_WaitForSpaceAndSync
// callees(0): 

bool idol_draw::CmdQueue_HasCapacity(int *param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)((param_2 & 0xffffffff) << 4) + *param_1;
  sync(1);
  uVar3 = (uint)*(ushort *)(iVar1 + 0x42);
  if ((uint)*(ushort *)(iVar1 + 0x44) < (uint)*(ushort *)(iVar1 + 0x42)) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x44);
  }
  if (*(ushort *)(iVar1 + 0x46) < uVar3) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x46);
  }
  if (*(ushort *)(iVar1 + 0x48) < uVar3) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x48);
  }
  if (*(ushort *)(iVar1 + 0x4a) < uVar3) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x4a);
  }
  if (*(ushort *)(iVar1 + 0x4c) < uVar3) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x4c);
  }
  uVar2 = (uint)*(ushort *)(iVar1 + 0x4e);
  if (uVar3 <= *(ushort *)(iVar1 + 0x4e)) {
    uVar2 = uVar3;
  }
  return param_3 <= uVar2;
}



//==== 004f16cc  ns=Global  size=0x68
// sig: undefined FUN_004f16cc(void)
// callers(0): 
// callees(0): 

uint FUN_004f16cc(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  uVar2 = (uint)*(ushort *)(*param_1 + param_2 * 0x10 + 0x40);
  iVar3 = *(int *)(*param_1 + param_2 * 4 + 0x30) + uVar2 * 8;
  if (*(short *)(iVar3 + 2) != 0) {
    iVar5 = 0;
    psVar4 = (short *)(iVar3 + 10);
    do {
      iVar5 = iVar5 + 1;
      sVar1 = *psVar4;
      psVar4 = psVar4 + 4;
    } while (sVar1 != 0);
    uVar2 = uVar2 + iVar5;
  }
  return uVar2;
}



//==== 004f1734  ns=Global  size=0x68
// sig: undefined FUN_004f1734(void)
// callers(0): 
// callees(0): 

uint FUN_004f1734(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  uVar2 = (uint)*(ushort *)(*param_1 + param_2 * 0x10 + 0x40);
  iVar3 = *(int *)(*param_1 + param_2 * 4 + 0x30) + uVar2 * 8;
  if (*(short *)(iVar3 + 2) != 0) {
    iVar5 = 0;
    psVar4 = (short *)(iVar3 + 10);
    do {
      iVar5 = iVar5 + 1;
      sVar1 = *psVar4;
      psVar4 = psVar4 + 4;
    } while (sVar1 != 0);
    uVar2 = uVar2 + iVar5;
  }
  return uVar2;
}



//==== 004f179c  ns=Global  size=0x50
// sig: undefined FUN_004f179c(void)
// callers(9): 004f2ed8 FUN_004f2ed8; 004f3440 FUN_004f3440; 004f3508 FUN_004f3508; 004f35b4 FUN_004f35b4; 004f367c FUN_004f367c; 004f3748 FUN_004f3748; 004f3810 FUN_004f3810; 004f38d8 FUN_004f38d8; 004f39a4 FUN_004f39a4
// callees(0): 

uint FUN_004f179c(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = (uint *)(param_2 * 0x10 + *param_1 + 0x40);
  do {
    uVar2 = *puVar3 >> 0x10;
    if (param_3 <= uVar2) {
      return uVar2;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed
                        (((ulonglong)param_3 & 0xffff) << 0x10 | (ulonglong)*puVar3 & 0xffff,0,
                         ZEXT48(puVar3));
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return uVar2;
}



//==== 004f17ec  ns=Global  size=0x174
// sig: undefined FUN_004f17ec(void)
// callers(1): 004f3c28 FUN_004f3c28
// callees(2): 004f4df0 FUN_004f4df0; 004fcd10 FUN_004fcd10
// strings: 006619c8: 'jobIndexCurrArray < maxNumJobsCurrArray' | 00661970: 'Assertion failed at %s(%d): %s\n' | 00661990: '../../../../job/src/ppu/jobapi/jobarraycontainer.cpp' | 006619f0: 'nextArrayId != currentArrayId'

ulonglong FUN_004f17ec(int *param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_60 [16];
  
  iVar7 = *param_1 + (int)((param_2 & 0xffffffff) << 2);
  iVar1 = param_1[3];
  uVar9 = (ulonglong)(uint)(1 << ((uint)param_2 & 0x3f));
  uVar10 = *(uint *)(iVar7 + 0x20);
  auStack_60 = (undefined1  [16])0x0;
  iVar7 = *(int *)(iVar7 + 0x30);
  while( true ) {
    iVar11 = (int)((param_2 & 0x3fffffff) << 2);
    uVar3 = (ulonglong)iVar11;
    uVar2 = *(uint *)(auStack_60 + iVar11);
    if (uVar10 <= uVar2) break;
    uVar4 = *(ulonglong *)(uVar2 * 8 + iVar7);
    uVar3 = uVar4 >> 0x20 & 0xffff;
    if ((int)uVar3 == 0) {
      return param_2 & 0xffffffff | (uVar9 & 0xffff) << 0x10;
    }
    uVar4 = FUN_004fcd10(uVar4,param_3,iVar1);
    uVar5 = (uint)uVar4;
    if (uVar5 != 0xffffffff) {
      if ((uint)param_2 == uVar5) goto LAB_004f1954;
      uVar9 = uVar9 | (uint)(1 << (uVar5 & 0x3f));
      iVar8 = *param_1 + (int)((uVar4 & 0xffffffff) << 2);
      iVar7 = *(int *)(iVar8 + 0x30);
      uVar10 = *(uint *)(iVar8 + 0x20);
      param_2 = uVar4;
    }
    *(uint *)(auStack_60 + iVar11) = uVar2 + 1;
  }
  FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a37c,
               PTR_s_____________job_src_ppu_jobapi_j_0071a380,0x2e2,
               PTR_s_jobIndexCurrArray_<_maxNumJobsCu_0071a384);
  trapWord(0x1f,uVar3,uVar3);
LAB_004f1954:
  uVar4 = 0x2f4;
  uVar9 = ZEXT48(PTR_s_____________job_src_ppu_jobapi_j_0071a380);
  puVar6 = (undefined4 *)
           FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a37c,uVar9,0x2f4,
                        PTR_s_nextArrayId____currentArrayId_0071a388);
  trapWord(0x1f,uVar3,uVar3);
  if ((uVar4 & 1) != 0) {
    FUN_004f4df0(PTR_s_Disassemble_JobArrayContainer____0071a38c,puVar6 + 4,uVar9 & 0xffffffff,
                 *puVar6);
  }
  uVar9 = FUN_004f17ec(puVar6,uVar9 & 0xffffffff,uVar4 & 0xffffffff);
  return uVar9;
}



//==== 004f19e8  ns=Global  size=0x84
// sig: undefined FUN_004f19e8(void)
// callers(1): 0064d090 FUN_0064d090
// callees(3): 0064fb04 cell::cellSpursRemoveWorkload; 0064fb44 cell::cellSpursWaitForWorkloadShutdown; 0064fbe4 cell::cellSpursShutdownWorkload

void FUN_004f19e8(int param_1)

{
  int iVar1;
  
  cell::cellSpursShutdownWorkload(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  cell::cellSpursWaitForWorkloadShutdown(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  do {
    iVar1 = cell::cellSpursRemoveWorkload(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8))
    ;
  } while (iVar1 == -0x7fbef7f6);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



//==== 004f1a6c  ns=Global  size=0x30
// sig: undefined FUN_004f1a6c(void)
// callers(0): 
// callees(1): 0064fb84 cell::cellSpursSetPriorities

void FUN_004f1a6c(int param_1,undefined8 param_2)

{
  cell::cellSpursSetPriorities(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  return;
}



//==== 004f1a9c  ns=Global  size=0xb4
// sig: undefined FUN_004f1a9c(void)
// callers(1): 004f44b4 FUN_004f44b4
// callees(1): 0064fae4 cell::cellSpursGetWorkloadInfo

uint FUN_004f1a9c(int param_1)

{
  uint uVar1;
  undefined1 auStack_110 [32];
  byte local_f0;
  char local_ed;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 4) != 0) {
    sync(1);
    cell::cellSpursGetWorkloadInfo
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_110);
    uVar1 = 0;
    if (local_ed == '\0') {
      sync(1);
      cell::cellSpursGetWorkloadInfo
                (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_110);
      return (uint)((ulonglong)local_f0 - 1 >> 0x3f);
    }
  }
  return uVar1;
}



//==== 004f1b50  ns=Global  size=0x34
// sig: undefined FUN_004f1b50(void)
// callers(0): 
// callees(1): 0064fae4 cell::cellSpursGetWorkloadInfo

undefined1 FUN_004f1b50(int param_1)

{
  undefined1 auStack_100 [32];
  undefined1 local_e0;
  
  cell::cellSpursGetWorkloadInfo
            (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_100);
  return local_e0;
}



//==== 004f1b84  ns=Global  size=0x34
// sig: undefined FUN_004f1b84(void)
// callers(0): 
// callees(1): 0064fae4 cell::cellSpursGetWorkloadInfo

undefined1 FUN_004f1b84(int param_1)

{
  undefined1 auStack_100 [35];
  undefined1 local_dd;
  
  cell::cellSpursGetWorkloadInfo
            (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_100);
  return local_dd;
}



//==== 004f1bb8  ns=idol_draw  size=0x30
// sig: undefined CmdQueue_Submit(void)
// callers(14): 004eddc4 idol_draw::Spurs_FlushAndSwapQueue; 004f40e4 FUN_004f40e4; 004f4510 FUN_004f4510; 004f4598 FUN_004f4598; 004f4610 FUN_004f4610; 004f4688 FUN_004f4688; 004f4700 FUN_004f4700; 004f4778 FUN_004f4778; 004f47f4 FUN_004f47f4; 004f4870 FUN_004f4870; 004f48f4 FUN_004f48f4; 004f4978 FUN_004f4978; 004f49fc FUN_004f49fc; 0064d8bc FUN_0064d8bc
// callees(1): 0064fd04 cell::cellSpursReadyCountStore

void idol_draw::CmdQueue_Submit(int param_1,undefined8 param_2)

{
  cell::cellSpursReadyCountStore(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  return;
}



//==== 004f1be8  ns=Global  size=0x30
// sig: undefined FUN_004f1be8(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy

void FUN_004f1be8(int param_1,undefined8 param_2)

{
  libc::strcpy(param_1 + 0x10,param_2,0x10);
  return;
}



//==== 004f1c18  ns=Global  size=0x278
// sig: undefined FUN_004f1c18(void)
// callers(2): 004ec568 FUN_004ec568; 0064d340 FUN_0064d340
// callees(10): 004f4df0 FUN_004f4df0; 004f9a0c FUN_004f9a0c; 004fd358 FUN_004fd358; 004fd360 FUN_004fd360; 0064fa24 cell::cellSpursRequestIdleSpu; 0064fa44 cell::cellSpursGetInfo; 0064faa4 cell::cellSpursWorkloadAttributeSetName; 0064fc64 cell::cellSpursAddWorkloadWithAttribute; 0064fcc4 cell::cellSpursSetExceptionEventHandler; 0064fce4 cell::_cellSpursWorkloadAttributeInitialize
// strings: 00661a70: "Application thinks baseAddr is 0x%X, Library thinks it's 0x%X\n"

void FUN_004f1c18(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_3d4;
  undefined1 auStack_380 [280];
  undefined1 auStack_268 [520];
  
  if (param_5 != 0x10) {
    FUN_004f4df0(PTR_s_Application_thinks_baseAddr_is_0_0071a390,param_5,0x10);
    return;
  }
  cell::cellSpursGetInfo(param_2,auStack_380);
  param_1[1] = param_2;
  uVar1 = *param_1;
  uVar2 = FUN_004fd358();
  uVar3 = FUN_004fd360();
  param_1[3] = param_4;
  if (param_6 != (undefined4 *)0x0) {
    cell::_cellSpursWorkloadAttributeInitialize
              (auStack_268,1,0x310000,uVar2,uVar3,CONCAT44(*param_6,uVar1),param_3,1);
    cell::cellSpursWorkloadAttributeSetName
              (auStack_268,*(undefined4 *)(iStack_3d4 + -0x7f90),param_1 + 4);
    cell::cellSpursAddWorkloadWithAttribute(param_2,param_1 + 2,auStack_268);
    cell::cellSpursRequestIdleSpu(param_2,param_1[2],7);
    cell::cellSpursSetExceptionEventHandler
              (param_2,param_1[2],**(undefined4 **)(iStack_3d4 + -0x7f8c),param_1);
    FUN_004f9a0c(param_6,param_1);
    return;
  }
  cell::_cellSpursWorkloadAttributeInitialize(auStack_268,1,0x310000,uVar2,uVar3,uVar1,param_3,1);
  cell::cellSpursWorkloadAttributeSetName
            (auStack_268,*(undefined4 *)(iStack_3d4 + -0x7f90),param_1 + 4);
  cell::cellSpursAddWorkloadWithAttribute(param_2,param_1 + 2,auStack_268);
  cell::cellSpursRequestIdleSpu(param_2,param_1[2],7);
  cell::cellSpursSetExceptionEventHandler
            (param_2,param_1[2],**(undefined4 **)(iStack_3d4 + -0x7f8c),param_1);
  return;
}



//==== 004f1eb0  ns=Global  size=0xb0
// sig: undefined FUN_004f1eb0(void)
// callers(1): 004f4c48 FUN_004f4c48
// callees(1): 004f2eb8 FUN_004f2eb8

void FUN_004f1eb0(int *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_2 * 0x10 + *param_1;
  sync(1);
  *(undefined2 *)(iVar2 + 0x4e) = 0xffff;
  *(undefined2 *)(iVar2 + 0x44) = 0xffff;
  *(undefined2 *)(iVar2 + 0x46) = 0xffff;
  *(undefined2 *)(iVar2 + 0x48) = 0xffff;
  *(undefined2 *)(iVar2 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar2 + 0x4c) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar2 + 0x42) = 0;
  *(undefined2 *)(iVar2 + 0x40) = 0;
  sync(1);
  uVar1 = *param_3;
  iVar3 = *param_1 + (int)((param_2 & 0xffffffff) << 2);
  *(undefined4 *)(iVar3 + 0x10) = 1;
  iVar2 = param_3[1];
  *(undefined4 *)(iVar3 + 0x30) = uVar1;
  *(int *)(iVar3 + 0x20) = iVar2 + -1;
  FUN_004f2eb8(param_3,param_1,param_2 & 0xffffffff);
  return;
}



//==== 004f1f60  ns=Global  size=0xb0
// sig: undefined FUN_004f1f60(void)
// callers(2): 004f4d1c FUN_004f4d1c; 0064d340 FUN_0064d340
// callees(1): 004f2d7c FUN_004f2d7c

void FUN_004f1f60(int *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_2 * 0x10 + *param_1;
  sync(1);
  *(undefined2 *)(iVar2 + 0x4e) = 0xffff;
  *(undefined2 *)(iVar2 + 0x44) = 0xffff;
  *(undefined2 *)(iVar2 + 0x46) = 0xffff;
  *(undefined2 *)(iVar2 + 0x48) = 0xffff;
  *(undefined2 *)(iVar2 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar2 + 0x4c) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar2 + 0x42) = 0;
  *(undefined2 *)(iVar2 + 0x40) = 0;
  sync(1);
  uVar1 = *param_3;
  iVar3 = *param_1 + (int)((param_2 & 0xffffffff) << 2);
  *(undefined4 *)(iVar3 + 0x10) = 0;
  iVar2 = param_3[1];
  *(undefined4 *)(iVar3 + 0x30) = uVar1;
  *(int *)(iVar3 + 0x20) = iVar2 + -1;
  FUN_004f2d7c(param_3,param_1,param_2 & 0xffffffff);
  return;
}



//==== 004f2010  ns=Global  size=0xa4
// sig: undefined FUN_004f2010(void)
// callers(2): 004f3a70 FUN_004f3a70; 004f3a98 FUN_004f3a98
// callees(0): 

void FUN_004f2010(int *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar4 = *param_1;
  iVar6 = param_2 * 0x10 + iVar4;
  sVar3 = 0;
  uVar2 = *(ushort *)(iVar4 + param_2 * 0x10 + 0x40);
  iVar4 = (uint)uVar2 * 8 + *(int *)(iVar4 + param_2 * 4 + 0x30);
  psVar5 = (short *)(iVar4 + 10);
  if (*(short *)(iVar4 + 2) != 0) {
    do {
      sVar3 = sVar3 + 1;
      sVar1 = *psVar5;
      psVar5 = psVar5 + 4;
    } while (sVar1 != 0);
    uVar2 = uVar2 + sVar3;
  }
  sync(1);
  *(ushort *)(iVar6 + 0x42) = uVar2;
  *(ushort *)(iVar6 + 0x40) = uVar2;
  sync(1);
  *(undefined2 *)(iVar6 + 0x4e) = 0xffff;
  *(undefined2 *)(iVar6 + 0x44) = 0xffff;
  *(undefined2 *)(iVar6 + 0x46) = 0xffff;
  *(undefined2 *)(iVar6 + 0x48) = 0xffff;
  *(undefined2 *)(iVar6 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar6 + 0x4c) = 0xffff;
  sync(1);
  return;
}



//==== 004f20b4  ns=Global  size=0x20c
// sig: undefined FUN_004f20b4(void)
// callers(3): 004f4c48 FUN_004f4c48; 004f4d1c FUN_004f4d1c; 0064d340 FUN_0064d340
// callees(3): 004fd358 FUN_004fd358; 004fd360 FUN_004fd360; 005cccec libc::strcpy
// strings: 00661ac0: 'no name'

void FUN_004f20b4(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = (int)param_2;
  *(undefined1 (*) [16])((uint)(param_2 + 4) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)(param_2 + 8) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)(param_2 + 0x1c) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)(param_2 + 0xc) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)(param_2 + 0x10) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)(param_2 + 0x14) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)(param_2 + 0x18) & 0xfffffff0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((uint)param_2 & 0xfffffff0) = (undefined1  [16])0x0;
  uVar2 = FUN_004fd358();
  *param_2 = uVar2;
  uVar2 = FUN_004fd360();
  iVar1 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0;
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
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[6] = 0;
  param_2[0xb] = 0;
  if (param_3 != 0) {
    libc::strcpy(param_1 + 4,param_3,0x10);
    return;
  }
  libc::strcpy(param_1 + 4,PTR_s_no_name_0071a3a0,0x10);
  return;
}



//==== 004f22c0  ns=idol_draw  size=0x8c
// sig: undefined Spurs_WaitWorkloadIdle(void)
// callers(1): 004f4ac8 idol_draw::CmdQueue_WaitForSpaceAndSync
// callees(1): 0064fae4 cell::cellSpursGetWorkloadInfo

void idol_draw::Spurs_WaitWorkloadIdle(int param_1)

{
  undefined1 auStack_110 [32];
  char local_f0;
  char local_ed;
  
  do {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        return;
      }
      sync(1);
      cell::cellSpursGetWorkloadInfo
                (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_110);
    } while (local_ed != '\0');
    sync(1);
    cell::cellSpursGetWorkloadInfo
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_110);
  } while (local_f0 != '\0');
  return;
}



//==== 004f234c  ns=Global  size=0x204
// sig: undefined FUN_004f234c(void)
// callers(4): 004f3ae8 FUN_004f3ae8; 006417a0 FUN_006417a0; 0064cf44 FUN_0064cf44; 0064d8bc FUN_0064d8bc
// callees(1): 0064fae4 cell::cellSpursGetWorkloadInfo

uint FUN_004f234c(int *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_110 [32];
  byte local_f0;
  char local_ed;
  
  iVar3 = (int)(((ulonglong)param_2 & 0xfffffff) << 4);
  iVar6 = *param_1;
  iVar5 = 0;
  uVar4 = (uint)*(ushort *)(iVar6 + iVar3 + 0x40);
  iVar8 = *(int *)(iVar6 + param_2 * 4 + 0x30) + uVar4 * 8;
  psVar7 = (short *)(iVar8 + 10);
  if (*(short *)(iVar8 + 2) != 0) {
    do {
      iVar5 = iVar5 + 1;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 4;
    } while (sVar1 != 0);
    uVar4 = uVar4 + iVar5;
  }
  iVar6 = iVar6 + iVar3;
  sync(1);
  uVar9 = (uint)*(ushort *)(iVar6 + 0x42);
  if ((uint)*(ushort *)(iVar6 + 0x44) < (uint)*(ushort *)(iVar6 + 0x42)) {
    uVar9 = (uint)*(ushort *)(iVar6 + 0x44);
  }
  if (*(ushort *)(iVar6 + 0x46) < uVar9) {
    uVar9 = (uint)*(ushort *)(iVar6 + 0x46);
  }
  if (*(ushort *)(iVar6 + 0x48) < uVar9) {
    uVar9 = (uint)*(ushort *)(iVar6 + 0x48);
  }
  if (*(ushort *)(iVar6 + 0x4a) < uVar9) {
    uVar9 = (uint)*(ushort *)(iVar6 + 0x4a);
  }
  if (*(ushort *)(iVar6 + 0x4c) < uVar9) {
    uVar9 = (uint)*(ushort *)(iVar6 + 0x4c);
  }
  uVar2 = (uint)*(ushort *)(iVar6 + 0x4e);
  if (uVar9 <= *(ushort *)(iVar6 + 0x4e)) {
    uVar2 = uVar9;
  }
  if (uVar4 <= uVar2) {
    iVar6 = 0;
    uVar9 = (uint)*(ushort *)(*param_1 + iVar3 + 0x40);
    iVar3 = uVar9 * 8 + *(int *)(*param_1 + param_2 * 4 + 0x30);
    psVar7 = (short *)(iVar3 + 10);
    if (*(short *)(iVar3 + 2) != 0) {
      do {
        iVar6 = iVar6 + 1;
        sVar1 = *psVar7;
        psVar7 = psVar7 + 4;
      } while (sVar1 != 0);
      uVar9 = uVar9 + iVar6;
    }
    if (uVar9 == uVar4) {
      sync(1);
      if (*(uint *)(*param_1 + 8) != param_2) {
        return 1;
      }
      if (param_1[1] == 0) {
        return 1;
      }
      sync(1);
      cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_110);
      if (local_ed != '\0') {
        return 0;
      }
      sync(1);
      cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_110);
      return (uint)((ulonglong)local_f0 - 1 >> 0x3f);
    }
  }
  return 0;
}



//==== 004f2550  ns=Global  size=0x200
// sig: undefined FUN_004f2550(void)
// callers(1): 004f3ac0 FUN_004f3ac0
// callees(1): 0064fae4 cell::cellSpursGetWorkloadInfo

void FUN_004f2550(int *param_1,uint param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined1 auStack_110 [32];
  char local_f0;
  char local_ed;
  
  iVar4 = (int)(((ulonglong)param_2 & 0xfffffff) << 4);
  iVar7 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar7 + iVar4 + 0x40);
  iVar8 = uVar5 * 8 + *(int *)(iVar7 + param_2 * 4 + 0x30);
  if (*(short *)(iVar8 + 2) != 0) {
    iVar9 = 0;
    psVar10 = (short *)(iVar8 + 10);
    do {
      iVar9 = iVar9 + 1;
      sVar2 = *psVar10;
      psVar10 = psVar10 + 4;
    } while (sVar2 != 0);
    uVar5 = uVar5 + iVar9;
  }
  do {
    while( true ) {
      iVar7 = iVar4 + iVar7;
      sync(1);
      uVar6 = (uint)*(ushort *)(iVar7 + 0x42);
      if ((uint)*(ushort *)(iVar7 + 0x44) < (uint)*(ushort *)(iVar7 + 0x42)) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0x44);
      }
      if (*(ushort *)(iVar7 + 0x46) < uVar6) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0x46);
      }
      if (*(ushort *)(iVar7 + 0x48) < uVar6) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0x48);
      }
      if (*(ushort *)(iVar7 + 0x4a) < uVar6) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0x4a);
      }
      if (*(ushort *)(iVar7 + 0x4c) < uVar6) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0x4c);
      }
      uVar3 = (uint)*(ushort *)(iVar7 + 0x4e);
      if (uVar6 <= *(ushort *)(iVar7 + 0x4e)) {
        uVar3 = uVar6;
      }
      if (uVar5 <= uVar3) break;
      iVar7 = *param_1;
    }
    iVar7 = *param_1;
    iVar8 = 0;
    uVar6 = (uint)*(ushort *)(iVar7 + iVar4 + 0x40);
    iVar9 = *(int *)(iVar7 + param_2 * 4 + 0x30) + uVar6 * 8;
    psVar10 = (short *)(iVar9 + 10);
    if (*(short *)(iVar9 + 2) != 0) {
      do {
        iVar8 = iVar8 + 1;
        sVar2 = *psVar10;
        psVar10 = psVar10 + 4;
      } while (sVar2 != 0);
      uVar6 = uVar6 + iVar8;
    }
    bVar1 = uVar5 != uVar6;
    uVar5 = uVar6;
  } while (bVar1);
  sync(1);
  if (*(uint *)(*param_1 + 8) == param_2) {
    do {
      do {
        if (param_1[1] == 0) {
          return;
        }
        sync(1);
        cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_110);
      } while (local_ed != '\0');
      sync(1);
      cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_110);
    } while (local_f0 != '\0');
  }
  return;
}



//==== 004f2750  ns=Global  size=0x2c0
// sig: undefined FUN_004f2750(void)
// callers(0): 
// callees(2): 004f2ec4 FUN_004f2ec4; 0064fae4 cell::cellSpursGetWorkloadInfo

void FUN_004f2750(int *param_1,ulonglong param_2,undefined4 param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_140 [32];
  char local_120;
  char local_11d;
  
  iVar6 = *param_1;
  iVar11 = (int)param_2 * 0x10;
  iVar10 = (int)((param_2 & 0xffffffff) << 2);
  uVar4 = (uint)*(ushort *)(iVar6 + iVar11 + 0x40);
  iVar7 = *(int *)(iVar6 + iVar10 + 0x30) + uVar4 * 8;
  if (*(short *)(iVar7 + 2) != 0) {
    iVar8 = 0;
    psVar9 = (short *)(iVar7 + 10);
    do {
      iVar8 = iVar8 + 1;
      sVar2 = *psVar9;
      psVar9 = psVar9 + 4;
    } while (sVar2 != 0);
    iVar6 = *param_1;
    uVar4 = uVar4 + iVar8;
  }
  do {
    while( true ) {
      iVar6 = iVar11 + iVar6;
      sync(1);
      uVar5 = (uint)*(ushort *)(iVar6 + 0x42);
      if ((uint)*(ushort *)(iVar6 + 0x44) < (uint)*(ushort *)(iVar6 + 0x42)) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x44);
      }
      if (*(ushort *)(iVar6 + 0x46) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x46);
      }
      if (*(ushort *)(iVar6 + 0x48) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x48);
      }
      if (*(ushort *)(iVar6 + 0x4a) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x4a);
      }
      if (*(ushort *)(iVar6 + 0x4c) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x4c);
      }
      uVar3 = (uint)*(ushort *)(iVar6 + 0x4e);
      if (uVar5 <= *(ushort *)(iVar6 + 0x4e)) {
        uVar3 = uVar5;
      }
      if (uVar4 <= uVar3) break;
      iVar6 = *param_1;
    }
    iVar6 = *param_1;
    iVar7 = 0;
    uVar5 = (uint)*(ushort *)(iVar6 + iVar11 + 0x40);
    iVar8 = uVar5 * 8 + *(int *)(iVar6 + iVar10 + 0x30);
    psVar9 = (short *)(iVar8 + 10);
    if (*(short *)(iVar8 + 2) != 0) {
      do {
        iVar7 = iVar7 + 1;
        sVar2 = *psVar9;
        psVar9 = psVar9 + 4;
      } while (sVar2 != 0);
      uVar5 = uVar5 + iVar7;
    }
    bVar1 = uVar4 != uVar5;
    uVar4 = uVar5;
  } while (bVar1);
  sync(1);
  if (*(int *)(*param_1 + 8) == (int)param_2) {
    do {
      do {
        if (param_1[1] == 0) goto LAB_004f2918;
        sync(1);
        cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_140);
      } while (local_11d != '\0');
      sync(1);
      cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_140);
    } while (local_120 != '\0');
  }
LAB_004f2918:
  FUN_004f2ec4(param_3,param_1,param_2 & 0xffffffff);
  iVar10 = *param_1 + iVar10;
  iVar11 = iVar11 + *param_1;
  *(undefined4 *)(iVar10 + 0x10) = 0;
  *(undefined4 *)(iVar10 + 0x30) = 0;
  *(undefined4 *)(iVar10 + 0x20) = 0;
  sync(1);
  *(undefined2 *)(iVar11 + 0x4e) = 0xffff;
  *(undefined2 *)(iVar11 + 0x44) = 0xffff;
  *(undefined2 *)(iVar11 + 0x46) = 0xffff;
  *(undefined2 *)(iVar11 + 0x48) = 0xffff;
  *(undefined2 *)(iVar11 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar11 + 0x4c) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar11 + 0x42) = 0;
  *(undefined2 *)(iVar11 + 0x40) = 0;
  sync(1);
  return;
}



//==== 004f2a10  ns=Global  size=0x2c0
// sig: undefined FUN_004f2a10(void)
// callers(1): 0064d090 FUN_0064d090
// callees(2): 004f2d88 FUN_004f2d88; 0064fae4 cell::cellSpursGetWorkloadInfo

void FUN_004f2a10(int *param_1,ulonglong param_2,undefined4 param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_140 [32];
  char local_120;
  char local_11d;
  
  iVar6 = *param_1;
  iVar11 = (int)param_2 * 0x10;
  iVar10 = (int)((param_2 & 0xffffffff) << 2);
  uVar4 = (uint)*(ushort *)(iVar6 + iVar11 + 0x40);
  iVar7 = *(int *)(iVar6 + iVar10 + 0x30) + uVar4 * 8;
  if (*(short *)(iVar7 + 2) != 0) {
    iVar8 = 0;
    psVar9 = (short *)(iVar7 + 10);
    do {
      iVar8 = iVar8 + 1;
      sVar2 = *psVar9;
      psVar9 = psVar9 + 4;
    } while (sVar2 != 0);
    iVar6 = *param_1;
    uVar4 = uVar4 + iVar8;
  }
  do {
    while( true ) {
      iVar6 = iVar11 + iVar6;
      sync(1);
      uVar5 = (uint)*(ushort *)(iVar6 + 0x42);
      if ((uint)*(ushort *)(iVar6 + 0x44) < (uint)*(ushort *)(iVar6 + 0x42)) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x44);
      }
      if (*(ushort *)(iVar6 + 0x46) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x46);
      }
      if (*(ushort *)(iVar6 + 0x48) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x48);
      }
      if (*(ushort *)(iVar6 + 0x4a) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x4a);
      }
      if (*(ushort *)(iVar6 + 0x4c) < uVar5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x4c);
      }
      uVar3 = (uint)*(ushort *)(iVar6 + 0x4e);
      if (uVar5 <= *(ushort *)(iVar6 + 0x4e)) {
        uVar3 = uVar5;
      }
      if (uVar4 <= uVar3) break;
      iVar6 = *param_1;
    }
    iVar6 = *param_1;
    iVar7 = 0;
    uVar5 = (uint)*(ushort *)(iVar6 + iVar11 + 0x40);
    iVar8 = uVar5 * 8 + *(int *)(iVar6 + iVar10 + 0x30);
    psVar9 = (short *)(iVar8 + 10);
    if (*(short *)(iVar8 + 2) != 0) {
      do {
        iVar7 = iVar7 + 1;
        sVar2 = *psVar9;
        psVar9 = psVar9 + 4;
      } while (sVar2 != 0);
      uVar5 = uVar5 + iVar7;
    }
    bVar1 = uVar4 != uVar5;
    uVar4 = uVar5;
  } while (bVar1);
  sync(1);
  if (*(int *)(*param_1 + 8) == (int)param_2) {
    do {
      do {
        if (param_1[1] == 0) goto LAB_004f2bd8;
        sync(1);
        cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_140);
      } while (local_11d != '\0');
      sync(1);
      cell::cellSpursGetWorkloadInfo(param_1[1],param_1[2],auStack_140);
    } while (local_120 != '\0');
  }
LAB_004f2bd8:
  FUN_004f2d88(param_3,param_1,param_2 & 0xffffffff);
  iVar10 = *param_1 + iVar10;
  iVar11 = iVar11 + *param_1;
  *(undefined4 *)(iVar10 + 0x10) = 0;
  *(undefined4 *)(iVar10 + 0x30) = 0;
  *(undefined4 *)(iVar10 + 0x20) = 0;
  sync(1);
  *(undefined2 *)(iVar11 + 0x4e) = 0xffff;
  *(undefined2 *)(iVar11 + 0x44) = 0xffff;
  *(undefined2 *)(iVar11 + 0x46) = 0xffff;
  *(undefined2 *)(iVar11 + 0x48) = 0xffff;
  *(undefined2 *)(iVar11 + 0x4a) = 0xffff;
  *(undefined2 *)(iVar11 + 0x4c) = 0xffff;
  sync(1);
  *(undefined2 *)(iVar11 + 0x42) = 0;
  *(undefined2 *)(iVar11 + 0x40) = 0;
  sync(1);
  return;
}



//==== 004f2cd0  ns=Global  size=0xc
// sig: undefined FUN_004f2cd0(void)
// callers(2): 004f4b7c FUN_004f4b7c; 0064d090 FUN_0064d090
// callees(0): 

void FUN_004f2cd0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



//==== 004f2cdc  ns=idol_draw  size=0x38
// sig: undefined CmdQueue_ZeroCacheLines(void)
// callers(3): 004f3bbc idol_draw::CmdQueue_Reset; 004f4d1c FUN_004f4d1c; 0064cf44 FUN_0064cf44
// callees(0): 

ulonglong idol_draw::CmdQueue_ZeroCacheLines(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(param_1[1] >> 4) & 0x1ffffff;
  param_1[2] = 0;
  uVar1 = (ulonglong)*param_1;
  if ((int)uVar2 != 0) {
    do {
      dataCacheBlockClearToZero(uVar1 & 0xffffffff);
      uVar1 = uVar1 + 0x80;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return uVar1;
  }
  return uVar1;
}



//==== 004f2d14  ns=idol_draw  size=0x34
// sig: undefined RingBuffer_PushEntry(void)
// callers(2): 004f3f80 idol_draw::CmdQueue_PushEntry; 004f4700 FUN_004f4700
// callees(0): 

int idol_draw::RingBuffer_PushEntry(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(undefined8 *)(iVar1 * 8 + *param_1) = param_2;
  sync(1);
  return iVar1 + 1;
}



//==== 004f2d48  ns=Global  size=0x34
// sig: undefined FUN_004f2d48(void)
// callers(0): 
// callees(0): 

int FUN_004f2d48(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(undefined8 *)(iVar1 * 8 + *param_1) = param_2;
  sync(1);
  return iVar1 + 1;
}



//==== 004f2d7c  ns=Global  size=0xc
// sig: undefined FUN_004f2d7c(void)
// callers(1): 004f1f60 FUN_004f1f60
// callees(0): 

void FUN_004f2d7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



//==== 004f2d88  ns=Global  size=0x14
// sig: undefined FUN_004f2d88(void)
// callers(1): 004f2a10 FUN_004f2a10
// callees(0): 

void FUN_004f2d88(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



//==== 004f2d9c  ns=Global  size=0xc
// sig: undefined FUN_004f2d9c(void)
// callers(1): 004f4b38 FUN_004f4b38
// callees(0): 

void FUN_004f2d9c(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



//==== 004f2da8  ns=Global  size=0x34
// sig: undefined FUN_004f2da8(void)
// callers(2): 004f4a80 FUN_004f4a80; 004f4c48 FUN_004f4c48
// callees(0): 

ulonglong FUN_004f2da8(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1;
  uVar1 = (ulonglong)(param_1[1] >> 4) & 0x1ffffff;
  if ((int)uVar1 != 0) {
    do {
      dataCacheBlockClearToZero(uVar2 & 0xffffffff);
      uVar2 = uVar2 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    return uVar2;
  }
  return uVar2;
}



//==== 004f2ddc  ns=Global  size=0x4c
// sig: undefined FUN_004f2ddc(void)
// callers(1): 004f4284 FUN_004f4284
// callees(0): 

int FUN_004f2ddc(int *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_3 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(param_2,0,ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_3 + 1;
  }
  return -1;
}



//==== 004f2e28  ns=Global  size=0x48
// sig: undefined FUN_004f2e28(void)
// callers(0): 
// callees(0): 

int FUN_004f2e28(int *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_3 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(param_2,0,ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_3 + 1;
  }
  return -1;
}



//==== 004f2e70  ns=Global  size=0x48
// sig: undefined FUN_004f2e70(void)
// callers(1): 004f3d40 FUN_004f3d40
// callees(0): 

int FUN_004f2e70(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  iVar2 = *param_1 + param_2 * 8;
  if (*(short *)(iVar2 + 2) != 0) {
    psVar3 = (short *)(iVar2 + 10);
    do {
      param_2 = param_2 + 1;
      sVar1 = *psVar3;
      psVar3 = psVar3 + 4;
    } while (sVar1 != 0);
  }
  return param_2;
}



//==== 004f2eb8  ns=Global  size=0xc
// sig: undefined FUN_004f2eb8(void)
// callers(1): 004f1eb0 FUN_004f1eb0
// callees(0): 

void FUN_004f2eb8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



//==== 004f2ec4  ns=Global  size=0x14
// sig: undefined FUN_004f2ec4(void)
// callers(1): 004f2750 FUN_004f2750
// callees(0): 

void FUN_004f2ec4(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



//==== 004f2ed8  ns=Global  size=0xb0
// sig: undefined FUN_004f2ed8(void)
// callers(0): 
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f2ed8(uint *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_3 & 0x1fffffff) << 3;
  while( true ) {
    param_3 = param_3 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed(param_2,0,lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  return param_3 & 0xffffffff;
}



//==== 004f2f88  ns=Global  size=0x54
// sig: undefined FUN_004f2f88(void)
// callers(2): 004f47f4 FUN_004f47f4; 0064db64 FUN_0064db64
// callees(0): 

int FUN_004f2f88(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(ulonglong *)(iVar1 * 8 + *param_1) =
       (param_3 & 0xfff) << 0x30 | param_2 & 0xffffffff | 0x100000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f2fdc  ns=Global  size=0x54
// sig: undefined FUN_004f2fdc(void)
// callers(2): 004f3e84 FUN_004f3e84; 004f4598 FUN_004f4598
// callees(0): 

int FUN_004f2fdc(int *param_1,longlong param_2)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(ulonglong *)(iVar1 * 8 + *param_1) = param_2 + 0xcU & 0xffffffff | 0x500000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f3030  ns=Global  size=0x50
// sig: undefined FUN_004f3030(void)
// callers(2): 004f3ed8 FUN_004f3ed8; 004f4610 FUN_004f4610
// callees(0): 

int FUN_004f3030(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(ulonglong *)(iVar1 * 8 + *param_1) = param_2 & 0xffffffff | 0x200000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f3080  ns=Global  size=0x50
// sig: undefined FUN_004f3080(void)
// callers(3): 004f3b64 FUN_004f3b64; 004f4778 FUN_004f4778; 0064db64 FUN_0064db64
// callees(0): 

int FUN_004f3080(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(ulonglong *)(iVar1 * 8 + *param_1) =
       (param_3 & 0xfff) << 0x30 | param_2 & 0xffffffff | 0x1000000100000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f30d0  ns=Global  size=0x3c
// sig: undefined FUN_004f30d0(void)
// callers(2): 004f3f2c idol_draw::CmdQueue_PushEntry_Blocking; 004f4688 FUN_004f4688
// callees(0): 

int FUN_004f30d0(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(ulonglong *)(iVar1 * 8 + *param_1) = param_2 & 0xfffffffffffffff | 0x1000000000000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f310c  ns=Global  size=0x50
// sig: undefined FUN_004f310c(void)
// callers(0): 
// callees(0): 

int FUN_004f310c(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(ulonglong *)(iVar1 * 8 + *param_1) = param_2 & 0xffffffff | 0x400000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f315c  ns=Global  size=0x50
// sig: undefined FUN_004f315c(void)
// callers(2): 004f3b14 FUN_004f3b14; 004f4bc0 FUN_004f4bc0
// callees(0): 

int FUN_004f315c(int *param_1)

{
  int iVar1;
  
  sync(1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(undefined8 *)(iVar1 * 8 + *param_1) = 0x300000000;
  sync(1);
  return iVar1 + 1;
}



//==== 004f31ac  ns=Global  size=0x6c
// sig: undefined FUN_004f31ac(void)
// callers(1): 004f4310 FUN_004f4310
// callees(0): 

int FUN_004f31ac(int *param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_4 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed
                      ((param_3 & 0xfff) << 0x30 | param_2 & 0xffffffff | 0x100000000,0,
                       ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_4 + 1;
  }
  return -1;
}



//==== 004f3218  ns=Global  size=0x68
// sig: undefined FUN_004f3218(void)
// callers(1): 004f4428 FUN_004f4428
// callees(0): 

int FUN_004f3218(int *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_3 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed
                      (param_2 + 0xcU & 0xffffffff | 0x500000000,0,ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_3 + 1;
  }
  return -1;
}



//==== 004f3280  ns=Global  size=0x68
// sig: undefined FUN_004f3280(void)
// callers(1): 004f3d98 FUN_004f3d98
// callees(0): 

int FUN_004f3280(int *param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_3 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(param_2 & 0xffffffff | 0x200000000,0,ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_3 + 1;
  }
  return -1;
}



//==== 004f32e8  ns=Global  size=0x68
// sig: undefined FUN_004f32e8(void)
// callers(0): 
// callees(0): 

int FUN_004f32e8(int *param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_3 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(param_2 & 0xffffffff | 0x400000000,0,ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_3 + 1;
  }
  return -1;
}



//==== 004f3350  ns=Global  size=0x68
// sig: undefined FUN_004f3350(void)
// callers(1): 004f43a0 FUN_004f43a0
// callees(0): 

int FUN_004f3350(int *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_2 * 8 + *param_1);
  if (*plVar2 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(0x300000000,0,ZEXT48(plVar2));
    *plVar2 = lVar1;
    return param_2 + 1;
  }
  return -1;
}



//==== 004f33b8  ns=Global  size=0x40
// sig: undefined FUN_004f33b8(void)
// callers(1): 004f4c48 FUN_004f4c48
// callees(0): 

void FUN_004f33b8(undefined4 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (((ulonglong)(param_3 << 0x20) >> 0x23) << 0x20) >> 0x24;
  param_1[3] = 0xffffffff;
  param_1[2] = 0;
  *param_1 = (int)param_2;
  param_1[1] = (uint)param_3 >> 3;
  if ((uint)param_3 >> 7 != 0) {
    do {
      dataCacheBlockClearToZero(param_2);
      param_2 = param_2 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    return;
  }
  return;
}



//==== 004f33f8  ns=Global  size=0x48
// sig: undefined FUN_004f33f8(void)
// callers(2): 004f4d1c FUN_004f4d1c; 0064d340 FUN_0064d340
// callees(0): 

void FUN_004f33f8(undefined4 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (((ulonglong)(param_3 << 0x20) >> 0x23) << 0x20) >> 0x24;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  *param_1 = (int)param_2;
  param_1[1] = (uint)param_3 >> 3;
  param_1[3] = 0;
  if ((uint)param_3 >> 7 != 0) {
    do {
      dataCacheBlockClearToZero(param_2);
      param_2 = param_2 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    return;
  }
  return;
}



//==== 004f3440  ns=Global  size=0xc8
// sig: undefined FUN_004f3440(void)
// callers(1): 004f3fd4 FUN_004f3fd4
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f3440(uint *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_2 & 0x1fffffff) << 3;
  while( true ) {
    param_2 = param_2 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed(0x300000000,0,lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_2 & 0xffffffff);
    return param_2 & 0xffffffff;
  }
  return param_2 & 0xffffffff;
}



//==== 004f3508  ns=Global  size=0xac
// sig: undefined FUN_004f3508(void)
// callers(2): 004f41c8 FUN_004f41c8; 004f49fc FUN_004f49fc
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f3508(uint *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_3 & 0x1fffffff) << 3;
  while( true ) {
    param_3 = param_3 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed(param_2,0,lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  return param_3 & 0xffffffff;
}



//==== 004f35b4  ns=Global  size=0xc8
// sig: undefined FUN_004f35b4(void)
// callers(0): 
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f35b4(uint *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_3 & 0x1fffffff) << 3;
  while( true ) {
    param_3 = param_3 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    (param_2 & 0xffffffff | 0x400000000,0,lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  return param_3 & 0xffffffff;
}



//==== 004f367c  ns=Global  size=0xcc
// sig: undefined FUN_004f367c(void)
// callers(2): 004f402c FUN_004f402c; 004f4870 FUN_004f4870
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f367c(uint *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_3 & 0x1fffffff) << 3;
  while( true ) {
    param_3 = param_3 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    (param_2 + 0xcU & 0xffffffff | 0x500000000,0,
                     lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  return param_3 & 0xffffffff;
}



//==== 004f3748  ns=Global  size=0xc8
// sig: undefined FUN_004f3748(void)
// callers(2): 004f4088 FUN_004f4088; 004f48f4 FUN_004f48f4
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f3748(uint *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_3 & 0x1fffffff) << 3;
  while( true ) {
    param_3 = param_3 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    (param_2 & 0xffffffff | 0x200000000,0,lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  return param_3 & 0xffffffff;
}



//==== 004f3810  ns=Global  size=0xc8
// sig: undefined FUN_004f3810(void)
// callers(2): 004f40e4 FUN_004f40e4; 004f4224 FUN_004f4224
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f3810(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_4 & 0x1fffffff) << 3;
  while( true ) {
    param_4 = param_4 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    ((param_3 & 0xfff) << 0x30 | param_2 & 0xffffffff | 0x1000000100000000,0,
                     lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_4 & 0xffffffff);
    return param_4 & 0xffffffff;
  }
  return param_4 & 0xffffffff;
}



//==== 004f38d8  ns=Global  size=0xcc
// sig: undefined FUN_004f38d8(void)
// callers(2): 004f3e24 FUN_004f3e24; 004f4510 FUN_004f4510
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f38d8(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_4 & 0x1fffffff) << 3;
  while( true ) {
    param_4 = param_4 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    ((param_3 & 0xfff) << 0x30 | param_2 & 0xffffffff | 0x100000000,0,
                     lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_4 & 0xffffffff);
    return param_4 & 0xffffffff;
  }
  return param_4 & 0xffffffff;
}



//==== 004f39a4  ns=Global  size=0xb4
// sig: undefined FUN_004f39a4(void)
// callers(2): 004f416c FUN_004f416c; 004f4978 FUN_004f4978
// callees(1): 004f179c FUN_004f179c

ulonglong FUN_004f39a4(uint *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  sync(1);
  lVar2 = (param_3 & 0x1fffffff) << 3;
  while( true ) {
    param_3 = param_3 + 1;
    plVar1 = (longlong *)(lVar2 + (ulonglong)*param_1);
    if (*plVar1 == 0) break;
    lVar2 = lVar2 + 8;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    (param_2 & 0xfffffffffffffff | 0x1000000000000000,0,
                     lVar2 + (ulonglong)*param_1 & 0xffffffff);
  *plVar1 = lVar2;
  if (param_1[2] != 0) {
    FUN_004f179c(param_1[2],param_1[3],param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  return param_3 & 0xffffffff;
}



//==== 004f3a58  ns=Global  size=0x18
// sig: undefined FUN_004f3a58(void)
// callers(0): 
// callees(0): 

undefined2 * FUN_004f3a58(undefined2 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(int *)(param_1 + 2) = param_2;
  *param_1 = (short)uVar1;
  return param_1;
}



//==== 004f3a70  ns=Global  size=0x28
// sig: undefined FUN_004f3a70(void)
// callers(0): 
// callees(1): 004f2010 FUN_004f2010

void FUN_004f3a70(undefined8 param_1)

{
  FUN_004f2010(param_1,3);
  return;
}



//==== 004f3a98  ns=Global  size=0x28
// sig: undefined FUN_004f3a98(void)
// callers(0): 
// callees(1): 004f2010 FUN_004f2010

void FUN_004f3a98(undefined8 param_1)

{
  FUN_004f2010(param_1,3);
  return;
}



//==== 004f3ac0  ns=Global  size=0x28
// sig: undefined FUN_004f3ac0(void)
// callers(0): 
// callees(1): 004f2550 FUN_004f2550

void FUN_004f3ac0(undefined8 param_1)

{
  FUN_004f2550(param_1,3);
  return;
}



//==== 004f3ae8  ns=Global  size=0x2c
// sig: undefined FUN_004f3ae8(void)
// callers(0): 
// callees(1): 004f234c FUN_004f234c

undefined1 FUN_004f3ae8(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_004f234c(param_1,3);
  return uVar1;
}



//==== 004f3b14  ns=Global  size=0x50
// sig: undefined FUN_004f3b14(void)
// callers(0): 
// callees(1): 004f315c FUN_004f315c

undefined2 * FUN_004f3b14(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f315c(param_2 + 0x20);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3b64  ns=Global  size=0x58
// sig: undefined FUN_004f3b64(void)
// callers(0): 
// callees(1): 004f3080 FUN_004f3080

undefined2 * FUN_004f3b64(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3080(param_2 + 0x20,param_3,param_4);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3bbc  ns=idol_draw  size=0x48
// sig: undefined CmdQueue_Reset(void)
// callers(1): 004eddc4 idol_draw::Spurs_FlushAndSwapQueue
// callees(2): 004f14c8 idol_draw::CmdQueue_ResetCounters; 004f2cdc idol_draw::CmdQueue_ZeroCacheLines

void idol_draw::CmdQueue_Reset(int param_1)

{
  CmdQueue_ZeroCacheLines(param_1 + 0x20);
  CmdQueue_ResetCounters(param_1,3);
  return;
}



//==== 004f3c04  ns=Global  size=0x24
// sig: undefined FUN_004f3c04(void)
// callers(0): 
// callees(1): 004f13c8 FUN_004f13c8

void FUN_004f3c04(void)

{
  FUN_004f13c8();
  return;
}



//==== 004f3c28  ns=Global  size=0xa8
// sig: undefined FUN_004f3c28(void)
// callers(0): 
// callees(2): 004f17ec FUN_004f17ec; 004f4df0 FUN_004f4df0
// strings: 00661ac8: 'Disassemble JobList "%s" (WorkloadHeader at 0x%08X):\n' | 00661b50: 'usedArrays == (1 << kJobListActiveArrayId)' | 00661b00: 'Assertion failed at %s(%d): %s\n' | 00661b20: '../../../../job/src/ppu/jobapi/joblist.cpp' | 00661b80: 'finalActiveArray == kJobListActiveArrayId'

void FUN_004f3c28(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) != 0) {
    FUN_004f4df0(PTR_s_Disassemble_JobList___s___Worklo_0071a3a4,param_1 + 4,*param_1);
    return;
  }
  uVar1 = FUN_004f17ec(param_1,3,param_2);
  if ((short)(uVar1 >> 0x10) == 8) {
    if ((uVar1 & 0xffff) == 3) {
      return;
    }
    FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a3a8,
                 PTR_s_____________job_src_ppu_jobapi_j_0071a3ac,0x29,
                 PTR_s_finalActiveArray____kJobListActi_0071a3b4);
    return;
  }
  FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a3a8,
               PTR_s_____________job_src_ppu_jobapi_j_0071a3ac,0x28,
               PTR_s_usedArrays_____1_<<_kJobListActi_0071a3b0);
  return;
}



//==== 004f3d40  ns=Global  size=0x58
// sig: undefined FUN_004f3d40(void)
// callers(0): 
// callees(1): 004f2e70 FUN_004f2e70

undefined2 * FUN_004f3d40(undefined2 *param_1,int *param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f2e70(param_2 + 8,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3d98  ns=Global  size=0x8c
// sig: undefined FUN_004f3d98(void)
// callers(0): 
// callees(1): 004f3280 FUN_004f3280

undefined2 * FUN_004f3d98(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004f3280(param_2 + 0x20,param_3,param_4);
  if (iVar1 != -1) {
    *param_1 = (short)iVar1;
    *(int *)(param_1 + 2) = param_2;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



//==== 004f3e24  ns=Global  size=0x60
// sig: undefined FUN_004f3e24(void)
// callers(0): 
// callees(1): 004f38d8 FUN_004f38d8

undefined2 * FUN_004f3e24(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f38d8(param_2 + 8,param_3,param_4,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3e84  ns=Global  size=0x54
// sig: undefined FUN_004f3e84(void)
// callers(0): 
// callees(1): 004f2fdc FUN_004f2fdc

undefined2 * FUN_004f3e84(undefined2 *param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f2fdc(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3ed8  ns=Global  size=0x54
// sig: undefined FUN_004f3ed8(void)
// callers(0): 
// callees(1): 004f3030 FUN_004f3030

undefined2 * FUN_004f3ed8(undefined2 *param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3030(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3f2c  ns=idol_draw  size=0x54
// sig: undefined CmdQueue_PushEntry_Blocking(void)
// callers(1): 004eddc4 idol_draw::Spurs_FlushAndSwapQueue
// callees(1): 004f30d0 FUN_004f30d0

undefined2 *
idol_draw::CmdQueue_PushEntry_Blocking(undefined2 *param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f30d0(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3f80  ns=idol_draw  size=0x54
// sig: undefined CmdQueue_PushEntry(void)
// callers(1): 004eddc4 idol_draw::Spurs_FlushAndSwapQueue
// callees(1): 004f2d14 idol_draw::RingBuffer_PushEntry

undefined2 * idol_draw::CmdQueue_PushEntry(undefined2 *param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = RingBuffer_PushEntry(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f3fd4  ns=Global  size=0x58
// sig: undefined FUN_004f3fd4(void)
// callers(0): 
// callees(1): 004f3440 FUN_004f3440

undefined2 * FUN_004f3fd4(undefined2 *param_1,int *param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3440(param_2 + 8,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f402c  ns=Global  size=0x5c
// sig: undefined FUN_004f402c(void)
// callers(0): 
// callees(1): 004f367c FUN_004f367c

undefined2 * FUN_004f402c(undefined2 *param_1,int *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f367c(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f4088  ns=Global  size=0x5c
// sig: undefined FUN_004f4088(void)
// callers(0): 
// callees(1): 004f3748 FUN_004f3748

undefined2 * FUN_004f4088(undefined2 *param_1,int *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3748(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f40e4  ns=Global  size=0x88
// sig: undefined FUN_004f40e4(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f3810 FUN_004f3810

undefined2 *
FUN_004f40e4(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3810(param_2 + 8,param_3,param_4,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_5);
  return param_1;
}



//==== 004f416c  ns=Global  size=0x5c
// sig: undefined FUN_004f416c(void)
// callers(0): 
// callees(1): 004f39a4 FUN_004f39a4

undefined2 * FUN_004f416c(undefined2 *param_1,int *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f39a4(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f41c8  ns=Global  size=0x5c
// sig: undefined FUN_004f41c8(void)
// callers(0): 
// callees(1): 004f3508 FUN_004f3508

undefined2 * FUN_004f41c8(undefined2 *param_1,int *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3508(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f4224  ns=Global  size=0x60
// sig: undefined FUN_004f4224(void)
// callers(0): 
// callees(1): 004f3810 FUN_004f3810

undefined2 * FUN_004f4224(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3810(param_2 + 8,param_3,param_4,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  return param_1;
}



//==== 004f4284  ns=Global  size=0x8c
// sig: undefined FUN_004f4284(void)
// callers(0): 
// callees(1): 004f2ddc FUN_004f2ddc

undefined2 * FUN_004f4284(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004f2ddc(param_2 + 0x20,param_3,param_4);
  if (iVar1 != -1) {
    *param_1 = (short)iVar1;
    *(int *)(param_1 + 2) = param_2;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



//==== 004f4310  ns=Global  size=0x90
// sig: undefined FUN_004f4310(void)
// callers(0): 
// callees(1): 004f31ac FUN_004f31ac

undefined2 *
FUN_004f4310(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_004f31ac(param_2 + 0x20,param_3,param_4,param_5);
  if (iVar1 != -1) {
    *param_1 = (short)iVar1;
    *(int *)(param_1 + 2) = param_2;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



//==== 004f43a0  ns=Global  size=0x88
// sig: undefined FUN_004f43a0(void)
// callers(0): 
// callees(1): 004f3350 FUN_004f3350

undefined2 * FUN_004f43a0(undefined2 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f3350(param_2 + 0x20,param_3);
  if (iVar1 != -1) {
    *param_1 = (short)iVar1;
    *(int *)(param_1 + 2) = param_2;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



//==== 004f4428  ns=Global  size=0x8c
// sig: undefined FUN_004f4428(void)
// callers(0): 
// callees(1): 004f3218 FUN_004f3218

undefined2 * FUN_004f4428(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004f3218(param_2 + 0x20,param_3,param_4);
  if (iVar1 != -1) {
    *param_1 = (short)iVar1;
    *(int *)(param_1 + 2) = param_2;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



//==== 004f44b4  ns=Global  size=0x5c
// sig: undefined FUN_004f44b4(void)
// callers(0): 
// callees(2): 004f1630 idol_draw::CmdQueue_HasCapacity; 004f1a9c FUN_004f1a9c

undefined1 FUN_004f44b4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = idol_draw::CmdQueue_HasCapacity(param_1,3,*(undefined2 *)(param_1 + 0x2a));
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = FUN_004f1a9c(param_1);
  }
  return uVar2;
}



//==== 004f4510  ns=Global  size=0x88
// sig: undefined FUN_004f4510(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f38d8 FUN_004f38d8

undefined2 *
FUN_004f4510(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f38d8(param_2 + 8,param_3,param_4,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_5);
  return param_1;
}



//==== 004f4598  ns=Global  size=0x78
// sig: undefined FUN_004f4598(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f2fdc FUN_004f2fdc

undefined2 * FUN_004f4598(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f2fdc(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f4610  ns=Global  size=0x78
// sig: undefined FUN_004f4610(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f3030 FUN_004f3030

undefined2 * FUN_004f4610(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3030(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f4688  ns=Global  size=0x78
// sig: undefined FUN_004f4688(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f30d0 FUN_004f30d0

undefined2 * FUN_004f4688(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f30d0(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f4700  ns=Global  size=0x78
// sig: undefined FUN_004f4700(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f2d14 idol_draw::RingBuffer_PushEntry

undefined2 * FUN_004f4700(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = idol_draw::RingBuffer_PushEntry(param_2 + 0x20,param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f4778  ns=Global  size=0x7c
// sig: undefined FUN_004f4778(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f3080 FUN_004f3080

undefined2 *
FUN_004f4778(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3080(param_2 + 0x20,param_3,param_4);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_5);
  return param_1;
}



//==== 004f47f4  ns=Global  size=0x7c
// sig: undefined FUN_004f47f4(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f2f88 FUN_004f2f88

undefined2 *
FUN_004f47f4(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f2f88(param_2 + 0x20,param_3,param_4);
  *param_1 = uVar1;
  *(int *)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_5);
  return param_1;
}



//==== 004f4870  ns=Global  size=0x84
// sig: undefined FUN_004f4870(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f367c FUN_004f367c

undefined2 * FUN_004f4870(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f367c(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f48f4  ns=Global  size=0x84
// sig: undefined FUN_004f48f4(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f3748 FUN_004f3748

undefined2 * FUN_004f48f4(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3748(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f4978  ns=Global  size=0x84
// sig: undefined FUN_004f4978(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f39a4 FUN_004f39a4

undefined2 * FUN_004f4978(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f39a4(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f49fc  ns=Global  size=0x84
// sig: undefined FUN_004f49fc(void)
// callers(0): 
// callees(2): 004f1bb8 idol_draw::CmdQueue_Submit; 004f3508 FUN_004f3508

undefined2 * FUN_004f49fc(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f3508(param_2 + 8,param_3,*(undefined2 *)(*param_2 + 0x70));
  *param_1 = uVar1;
  *(int **)(param_1 + 2) = param_2;
  idol_draw::CmdQueue_Submit(param_2,param_4);
  return param_1;
}



//==== 004f4a80  ns=Global  size=0x48
// sig: undefined FUN_004f4a80(void)
// callers(0): 
// callees(2): 004f14c8 idol_draw::CmdQueue_ResetCounters; 004f2da8 FUN_004f2da8

void FUN_004f4a80(int param_1)

{
  FUN_004f2da8(param_1 + 0x20);
  idol_draw::CmdQueue_ResetCounters(param_1,3);
  return;
}



//==== 004f4ac8  ns=idol_draw  size=0x70
// sig: undefined CmdQueue_WaitForSpaceAndSync(void)
// callers(3): 004edcfc FUN_004edcfc; 004edd30 FUN_004edd30; 004eddc4 idol_draw::Spurs_FlushAndSwapQueue
// callees(2): 004f1630 idol_draw::CmdQueue_HasCapacity; 004f22c0 idol_draw::Spurs_WaitWorkloadIdle

void idol_draw::CmdQueue_WaitForSpaceAndSync(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  
  uVar1 = *(undefined2 *)(param_1 + 0x2a);
  do {
    cVar2 = CmdQueue_HasCapacity(param_1,3,uVar1);
  } while (cVar2 == '\0');
  Spurs_WaitWorkloadIdle(param_1);
  return;
}



//==== 004f4b38  ns=Global  size=0x44
// sig: undefined FUN_004f4b38(void)
// callers(0): 
// callees(2): 004f13c8 FUN_004f13c8; 004f2d9c FUN_004f2d9c

void FUN_004f4b38(int param_1)

{
  FUN_004f2d9c(param_1 + 0x20);
  FUN_004f13c8(param_1);
  return;
}



//==== 004f4b7c  ns=Global  size=0x44
// sig: undefined FUN_004f4b7c(void)
// callers(0): 
// callees(2): 004f13c8 FUN_004f13c8; 004f2cd0 FUN_004f2cd0

void FUN_004f4b7c(int param_1)

{
  FUN_004f2cd0(param_1 + 0x20);
  FUN_004f13c8(param_1);
  return;
}



//==== 004f4bc0  ns=Global  size=0x88
// sig: undefined FUN_004f4bc0(void)
// callers(0): 
// callees(1): 004f315c FUN_004f315c

int FUN_004f4bc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      FUN_004f315c((int *)(param_1 + 0x20));
    } while (param_2 != iVar3);
  }
  return iVar2 + iVar1 * 8;
}



//==== 004f4c48  ns=Global  size=0xd4
// sig: undefined FUN_004f4c48(void)
// callers(0): 
// callees(5): 004f14c8 idol_draw::CmdQueue_ResetCounters; 004f1eb0 FUN_004f1eb0; 004f20b4 FUN_004f20b4; 004f2da8 FUN_004f2da8; 004f33b8 FUN_004f33b8

void FUN_004f4c48(int *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 8;
  FUN_004f20b4(param_1,param_2,param_4);
  FUN_004f33b8(piVar2,param_2 + 0x80,param_3 + -0x80);
  FUN_004f1eb0(param_1,3,piVar2);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8) = 3;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  FUN_004f2da8(piVar2);
  idol_draw::CmdQueue_ResetCounters(param_1,3);
  return;
}



//==== 004f4d1c  ns=Global  size=0xd4
// sig: undefined FUN_004f4d1c(void)
// callers(1): 004ec568 FUN_004ec568
// callees(5): 004f14c8 idol_draw::CmdQueue_ResetCounters; 004f1f60 FUN_004f1f60; 004f20b4 FUN_004f20b4; 004f2cdc idol_draw::CmdQueue_ZeroCacheLines; 004f33f8 FUN_004f33f8

void FUN_004f4d1c(int *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 8;
  FUN_004f20b4(param_1,param_2,param_4);
  FUN_004f33f8(piVar2,param_2 + 0x80,param_3 + -0x80);
  FUN_004f1f60(param_1,3,piVar2);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8) = 3;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  idol_draw::CmdQueue_ZeroCacheLines(piVar2);
  idol_draw::CmdQueue_ResetCounters(param_1,3);
  return;
}



//==== 004f4df0  ns=Global  size=0x4c
// sig: undefined FUN_004f4df0(void)
// callers(11): 004f17ec FUN_004f17ec; 004f1c18 FUN_004f1c18; 004f3c28 FUN_004f3c28; 004f9a3c FUN_004f9a3c; 004f9c74 FUN_004f9c74; 004f9d60 FUN_004f9d60; 004f9dec FUN_004f9dec; 004fa800 FUN_004fa800; 004fb500 FUN_004fb500; 004fcd10 FUN_004fcd10; 004fd388 FUN_004fd388
// callees(1): 005cd444 FUN_005cd444

void FUN_004f4df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd444(param_1,&stack0x00000038);
  return;
}



//==== 004f4e40  ns=Global  size=0x10
// sig: undefined FUN_004f4e40(void)
// callers(0): 
// callees(0): 

void FUN_004f4e40(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



//==== 004f4e50  ns=Global  size=0x10
// sig: undefined FUN_004f4e50(void)
// callers(0): 
// callees(0): 

void FUN_004f4e50(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



//==== 004f4e60  ns=Global  size=0x18
// sig: undefined FUN_004f4e60(void)
// callers(0): 
// callees(0): 

int FUN_004f4e60(int *param_1)

{
  return *(int *)(*param_1 + 0x14) + *(int *)(*param_1 + 0x18);
}



//==== 004f4e78  ns=Global  size=0x10c
// sig: undefined FUN_004f4e78(void)
// callers(1): 0064bdec FUN_0064bdec
// callees(0): 

uint FUN_004f4e78(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (((((0x30 < (uint)param_1[1]) && (puVar1 = (uint *)*param_1, puVar1[8] == 0xc0dec0de)) &&
       (uVar2 = *puVar1, uVar6 = ((ulonglong)uVar2 & 0x1ff) << 7 | (ulonglong)(uVar2 >> 0x19),
       ((uint)(uVar6 << 0x19) | (uint)uVar6 >> 7) == 0x42000002)) &&
      ((((uVar3 = puVar1[1], uVar6 = ((ulonglong)uVar3 & 0x1ff) << 7 | (ulonglong)(uVar3 >> 0x19),
         ((uint)(uVar6 << 0x19) | (uint)uVar6 >> 7) == 0x42000082 &&
         (uVar4 = puVar1[2], uVar6 = ((ulonglong)uVar4 & 0x1ff) << 7 | (ulonglong)(uVar4 >> 0x19),
         ((uint)(uVar6 << 0x19) | (uint)uVar6 >> 7) == 0x42000102)) &&
        (uVar5 = puVar1[3], uVar6 = ((ulonglong)uVar5 & 0x1ff) << 7 | (ulonglong)(uVar5 >> 0x19),
        ((uint)(uVar6 << 0x19) | (uint)uVar6 >> 7) == 0x42000182)) &&
       ((((uVar2 & 0x1fffe00) != 0 || ((uVar3 & 0x1fffe00) != 0)) ||
        (((uVar4 & 0x1fffe00) != 0 || ((uVar5 & 0x1fffe00) != 0)))))))) &&
     (((3 < (puVar1[0xb] & 0x7fffffff) && ((puVar1[0xb] & 0x7fffffff) < 6)) &&
      ((puVar1[5] & 0xf) == 0)))) {
    return (uint)(((ulonglong)puVar1[6] & 0xf) - 1 >> 0x1f) & 1;
  }
  return 0;
}



//==== 004f4f84  ns=Global  size=0x4
// sig: undefined FUN_004f4f84(void)
// callers(1): 0064bdec FUN_0064bdec
// callees(0): 

void FUN_004f4f84(void)

{
  return;
}



//==== 004f4f88  ns=Global  size=0x3c
// sig: undefined FUN_004f4f88(void)
// callers(0): 
// callees(0): 

ulonglong FUN_004f4f88(int *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  return (((ulonglong)*puVar1 & 0x1fffe00) << 7 | (ulonglong)(puVar1[1] >> 9) & 0xffff) << 0x20 |
         ((ulonglong)puVar1[2] & 0x1fffe00) << 7 | (ulonglong)(puVar1[3] >> 9) & 0xffff;
}



//==== 004f4fc4  ns=Global  size=0x34
// sig: undefined FUN_004f4fc4(void)
// callers(0): 
// callees(0): 

int * FUN_004f4fc4(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  piVar1 = (int *)PTR_DAT_0071a3b8;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 10;
  } while (lVar2 != 0);
  return (int *)0x0;
}



//==== 004f4ff8  ns=Global  size=0x70
// sig: undefined FUN_004f4ff8(void)
// callers(0): 
// callees(0): 

int * FUN_004f4ff8(ulonglong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  piVar2 = (int *)PTR_DAT_0071a3b8;
  do {
    puVar1 = (uint *)*piVar2;
    if (puVar1 != (uint *)0x0) {
      if (((((ulonglong)*puVar1 & 0x1fffe00) << 7 | (ulonglong)(puVar1[1] >> 9) & 0xffff) << 0x20 |
          ((ulonglong)puVar1[2] & 0x1fffe00) << 7 | (ulonglong)(puVar1[3] >> 9) & 0xffff) == param_1
         ) {
        return piVar2;
      }
    }
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 10;
  } while (lVar3 != 0);
  return (int *)0x0;
}



//==== 004f5068  ns=Global  size=0x30
// sig: undefined FUN_004f5068(void)
// callers(0): 
// callees(0): 

int * FUN_004f5068(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  piVar1 = (int *)PTR_DAT_0071a3b8;
  do {
    if (*piVar1 == 0) {
      return piVar1;
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 10;
  } while (lVar2 != 0);
  return (int *)0x0;
}



//==== 004f5098  ns=Global  size=0x74
// sig: undefined FUN_004f5098(void)
// callers(0): 
// callees(0): 

void FUN_004f5098(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar5;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = 0x20;
  piVar4 = (int *)PTR_DAT_0071a3b8;
  while (*piVar4 != param_1) {
    piVar4 = piVar4 + 10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  }
  puVar3 = (uint *)(piVar4 + 1);
  do {
    uVar1 = *puVar3;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar3));
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  if (uVar1 == 1) {
    *piVar4 = 0;
    return;
  }
  return;
}



//==== 004f510c  ns=Global  size=0xe8
// sig: undefined FUN_004f510c(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 004f5158: '} X(9)' (raw) | 00661bb0: 'No name'

void FUN_004f510c(int param_1,undefined *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar4;
  
  lVar4 = 0x20;
  piVar3 = (int *)PTR_DAT_0071a3b8;
  do {
    if (*piVar3 == param_1) {
      puVar2 = (uint *)(piVar3 + 1);
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
      } while ((in_cr0 & 2) == 0);
      return;
    }
    piVar3 = piVar3 + 10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 0x20;
  piVar3 = (int *)PTR_DAT_0071a3b8;
  do {
    if (*piVar3 == 0) {
      *piVar3 = param_1;
      piVar3[1] = 1;
      if (param_2 == (undefined *)0x0) {
        param_2 = PTR_s_No_name_0071a3bc;
      }
      libc::strcpy(piVar3 + 2,param_2,0x20);
      return;
    }
    piVar3 = piVar3 + 10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



//==== 004f51f4  ns=Global  size=0x114
// sig: undefined FUN_004f51f4(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy

undefined4
FUN_004f51f4(uint param_1,ulonglong *param_2,undefined1 *param_3,undefined4 param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (0x1f < param_1) {
    *param_5 = 0;
    *param_2 = 0;
    *param_3 = 0;
    return 0;
  }
  piVar6 = (int *)(PTR_DAT_0071a3b8 + param_1 * 0x28);
  puVar1 = (uint *)*piVar6;
  if (puVar1 != (uint *)0x0) {
    uVar2 = puVar1[3];
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    *param_5 = (int)puVar1;
    *param_2 = (((ulonglong)uVar3 & 0x1fffe00) << 7 | (ulonglong)(uVar4 >> 9) & 0xffff) << 0x20 |
               ((ulonglong)uVar5 & 0x1fffe00) << 7 | (ulonglong)(uVar2 >> 9) & 0xffff;
    libc::strcpy(param_3,piVar6 + 2,param_4);
    return 1;
  }
  *param_5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



//==== 004f5308  ns=Global  size=0x1c
// sig: undefined FUN_004f5308(void)
// callers(4): 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 004ed52c FUN_004ed52c
// callees(0): 

ulonglong FUN_004f5308(int *param_1)

{
  return (ulonglong)*(uint *)(*param_1 + 0x14) + 0x3ff + (ulonglong)*(uint *)(*param_1 + 0x18) >> 10
         & 0x3fffff;
}



//==== 004f5324  ns=Global  size=0x78
// sig: undefined FUN_004f5324(void)
// callers(0): 
// callees(0): 

void FUN_004f5324(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar5;
  
  if (*param_1 == 0) {
    return;
  }
  lVar5 = 0x20;
  piVar4 = (int *)PTR_DAT_0071a3b8;
  while (*piVar4 != *param_1) {
    piVar4 = piVar4 + 10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  }
  puVar3 = (uint *)(piVar4 + 1);
  do {
    uVar1 = *puVar3;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar3));
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  if (uVar1 == 1) {
    *piVar4 = 0;
    return;
  }
  return;
}



//==== 004f539c  ns=Global  size=0x78
// sig: undefined FUN_004f539c(void)
// callers(4): 004ee034 FUN_004ee034; 0064bdec FUN_0064bdec; 0064e064 FUN_0064e064; 0064e408 FUN_0064e408
// callees(0): 

void FUN_004f539c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar5;
  
  if (*param_1 == 0) {
    return;
  }
  lVar5 = 0x20;
  piVar4 = (int *)PTR_DAT_0071a3b8;
  while (*piVar4 != *param_1) {
    piVar4 = piVar4 + 10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  }
  puVar3 = (uint *)(piVar4 + 1);
  do {
    uVar1 = *puVar3;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar3));
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  if (uVar1 == 1) {
    *piVar4 = 0;
    return;
  }
  return;
}



//==== 004f5414  ns=Global  size=0x78
// sig: undefined FUN_004f5414(void)
// callers(0): 
// callees(0): 

uint * FUN_004f5414(ulonglong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  piVar2 = (int *)PTR_DAT_0071a3b8;
  while( true ) {
    puVar1 = (uint *)*piVar2;
    if ((puVar1 != (uint *)0x0) &&
       (((((ulonglong)*puVar1 & 0x1fffe00) << 7 | (ulonglong)(puVar1[1] >> 9) & 0xffff) << 0x20 |
        ((ulonglong)puVar1[2] & 0x1fffe00) << 7 | (ulonglong)(puVar1[3] >> 9) & 0xffff) == param_1))
    break;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 10;
    if (lVar3 == 0) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}



//==== 004f548c  ns=Global  size=0xcc
// sig: undefined FUN_004f548c(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy

undefined4 FUN_004f548c(ulonglong param_1,undefined1 *param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  piVar2 = (int *)PTR_DAT_0071a3b8;
  do {
    puVar1 = (uint *)*piVar2;
    if (puVar1 != (uint *)0x0) {
      if (((((ulonglong)*puVar1 & 0x1fffe00) << 7 | (ulonglong)(puVar1[1] >> 9) & 0xffff) << 0x20 |
          ((ulonglong)puVar1[2] & 0x1fffe00) << 7 | (ulonglong)(puVar1[3] >> 9) & 0xffff) == param_1
         ) {
        libc::strcpy(param_2,piVar2 + 2,param_3);
        return 1;
      }
    }
    piVar2 = piVar2 + 10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_2 = 0;
  return 0;
}



//==== 004f5558  ns=Global  size=0x174
// sig: undefined FUN_004f5558(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 004f5628: '} X(9)' (raw) | 00661bb0: 'No name'

int * FUN_004f5558(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  int *piVar6;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar7;
  
  if (*param_1 != 0) {
    lVar7 = 0x20;
    piVar6 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar6 == *param_1) {
        puVar5 = (uint *)(piVar6 + 1);
        do {
          uVar1 = *puVar5;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar5));
            *puVar5 = uVar3;
            in_cr0 = 2;
          }
        } while ((in_cr0 & 2) == 0);
        if (uVar1 == 1) {
          *piVar6 = 0;
        }
        break;
      }
      piVar6 = piVar6 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = iVar2;
  puVar4 = PTR_s_No_name_0071a3bc;
  if (iVar2 != 0) {
    lVar7 = 0x20;
    piVar6 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar6 == iVar2) {
        puVar5 = (uint *)(piVar6 + 1);
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,ZEXT48(puVar5));
            *puVar5 = uVar1;
            in_cr0 = 2;
          }
        } while ((in_cr0 & 2) == 0);
        return param_1;
      }
      piVar6 = piVar6 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar7 = 0x20;
    piVar6 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar6 == 0) {
        piVar6[1] = 1;
        *piVar6 = iVar2;
        libc::strcpy(piVar6 + 2,puVar4,0x20);
        return param_1;
      }
      piVar6 = piVar6 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return param_1;
}



//==== 004f56cc  ns=Global  size=0xe4
// sig: undefined FUN_004f56cc(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 004f5728: '} X(9)' (raw) | 00661bb0: 'No name'

void FUN_004f56cc(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar6;
  
  iVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = iVar1;
  puVar3 = PTR_s_No_name_0071a3bc;
  if (iVar1 != 0) {
    lVar6 = 0x20;
    piVar5 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar5 == iVar1) {
        puVar4 = (uint *)(piVar5 + 1);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,ZEXT48(puVar4));
            *puVar4 = uVar2;
            in_cr0 = 2;
          }
        } while ((in_cr0 & 2) == 0);
        return;
      }
      piVar5 = piVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar6 = 0x20;
    piVar5 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar5 == 0) {
        piVar5[1] = 1;
        *piVar5 = iVar1;
        libc::strcpy(piVar5 + 2,puVar3,0x20);
        return;
      }
      piVar5 = piVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



//==== 004f57b0  ns=Global  size=0xe8
// sig: undefined FUN_004f57b0(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 004f5810: '} X(9)' (raw) | 00661bb0: 'No name'

void FUN_004f57b0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar6;
  
  iVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = iVar1;
  puVar3 = PTR_s_No_name_0071a3bc;
  if (iVar1 != 0) {
    lVar6 = 0x20;
    piVar5 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar5 == iVar1) {
        puVar4 = (uint *)(piVar5 + 1);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,ZEXT48(puVar4));
            *puVar4 = uVar2;
            in_cr0 = 2;
          }
        } while ((in_cr0 & 2) == 0);
        return;
      }
      piVar5 = piVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar6 = 0x20;
    piVar5 = (int *)PTR_DAT_0071a3b8;
    do {
      if (*piVar5 == 0) {
        piVar5[1] = 1;
        *piVar5 = iVar1;
        libc::strcpy(piVar5 + 2,puVar3,0x20);
        return;
      }
      piVar5 = piVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



//==== 004f5898  ns=Global  size=0x100
// sig: undefined FUN_004f5898(void)
// callers(4): 004ee0a8 FUN_004ee0a8; 0064bdec FUN_0064bdec; 0064e064 FUN_0064e064; 0064e408 FUN_0064e408
// callees(1): 005cccec libc::strcpy
// strings: 004f5900: '} X(9)' (raw) | 00661bb0: 'No name'

void FUN_004f5898(int *param_1,int param_2,int param_3,undefined *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  char in_RESERVE;
  byte in_cr0;
  
  param_1[1] = param_3;
  lVar2 = 0x20;
  *param_1 = param_2;
  iVar5 = 0;
  do {
    if (*(int *)(PTR_DAT_0071a3b8 + iVar5 * 0x28) == param_2) {
      puVar3 = (uint *)((int)(PTR_DAT_0071a3b8 + iVar5 * 0x28) + 4);
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 + 1,0,ZEXT48(puVar3));
          *puVar3 = uVar1;
          in_cr0 = 2;
        }
      } while ((in_cr0 & 2) == 0);
      return;
    }
    lVar2 = lVar2 + -1;
    iVar5 = iVar5 + 1;
  } while (lVar2 != 0);
  lVar2 = 0x20;
  piVar4 = (int *)PTR_DAT_0071a3b8;
  do {
    if (*piVar4 == 0) {
      *piVar4 = param_2;
      piVar4[1] = 1;
      if (param_4 == (undefined *)0x0) {
        param_4 = PTR_s_No_name_0071a3bc;
      }
      libc::strcpy(piVar4 + 2,param_4,0x20);
      return;
    }
    piVar4 = piVar4 + 10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 004f5998  ns=Global  size=0x100
// sig: undefined FUN_004f5998(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 004f5a00: '} X(9)' (raw) | 00661bb0: 'No name'

void FUN_004f5998(int *param_1,int param_2,int param_3,undefined *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  char in_RESERVE;
  byte in_cr0;
  
  param_1[1] = param_3;
  lVar2 = 0x20;
  *param_1 = param_2;
  iVar5 = 0;
  do {
    if (*(int *)(PTR_DAT_0071a3b8 + iVar5 * 0x28) == param_2) {
      puVar3 = (uint *)((int)(PTR_DAT_0071a3b8 + iVar5 * 0x28) + 4);
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 + 1,0,ZEXT48(puVar3));
          *puVar3 = uVar1;
          in_cr0 = 2;
        }
      } while ((in_cr0 & 2) == 0);
      return;
    }
    lVar2 = lVar2 + -1;
    iVar5 = iVar5 + 1;
  } while (lVar2 != 0);
  lVar2 = 0x20;
  piVar4 = (int *)PTR_DAT_0071a3b8;
  do {
    if (*piVar4 == 0) {
      *piVar4 = param_2;
      piVar4[1] = 1;
      if (param_4 == (undefined *)0x0) {
        param_4 = PTR_s_No_name_0071a3bc;
      }
      libc::strcpy(piVar4 + 2,param_4,0x20);
      return;
    }
    piVar4 = piVar4 + 10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 004f5a98  ns=Global  size=0x54
// sig: undefined FUN_004f5a98(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_004f5a98(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  libc::memset(param_1 + 0x3d,0,0x100);
  param_1[0x7d] = 0x275b;
  return;
}



//==== 004f5aec  ns=Global  size=0x54
// sig: undefined FUN_004f5aec(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_004f5aec(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  libc::memset(param_1 + 0x3d,0,0x100);
  param_1[0x7d] = 0x275b;
  return;
}



//==== 004f5b40  ns=Global  size=0xa4
// sig: undefined FUN_004f5b40(void)
// callers(1): 004efb80 FUN_004efb80
// callees(2): 004fe218 FUN_004fe218; 005d0140 libc::memset

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004f5b40(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_015932cc;
  if (DAT_015932cc == (undefined4 *)0x0) {
    register0x000000fc = (undefined4)param_1;
    puVar1 = (undefined4 *)FUN_004fe218(0x300,param_1);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[3] = 0;
      libc::memset(puVar1 + 0x3d,0,0x100);
      puVar1[0x7d] = 0x275b;
      puVar2 = puVar1;
    }
  }
  DAT_015932cc = puVar2;
  return puVar2;
}



//==== 004f5be4  ns=Global  size=0x550
// sig: undefined FUN_004f5be4(void)
// callers(1): 004efb80 FUN_004efb80
// callees(22): 00021358 stub::STUB_00021358; 004f93f0 FUN_004f93f0; 004ff6d0 print_tty; 004ffc9c print_tty2; 00504db0 FUN_00504db0; 0053c5cc FUN_0053c5cc; 0053f37c FUN_0053f37c; 0053f7e4 FUN_0053f7e4; 0053f9b4 FUN_0053f9b4; 0054049c FUN_0054049c; 0055c668 FUN_0055c668; 0056fc98 FUN_0056fc98; 00573e34 FUN_00573e34; 005744ac FUN_005744ac; 0057fad4 FUN_0057fad4; 00583378 FUN_00583378; 00584104 FUN_00584104; 005a117c FUN_005a117c; 005a462c FUN_005a462c; 005acbcc FUN_005acbcc; 005acc40 FUN_005acc40; 005d0140 libc::memset
// strings: 0065e600: '------------------------------\n' | 0065e620: 'Calling CMediusManager::Init()\n' | 0065e640: 'NetUseReliableUDP() error %d\n' | 0065e660: 'APPID = %d\n' | 0065e670: 'NetInitialize() error: %d\n' | 0065e690: 'NetRegisterApplicationMessage() error: %d\n' | 0065e6c0: '--------------------------\n' | 0065e6e0: 'Calling MediusInitialize()\n' | 0065e700: 'MediusInitialize() error: %d\n' | 0065e720: '-----------------------------\n' | 0065e740: 'Calling MediusSessionCreate()\n' | 0065e760: 'MediusSessionCreate() error: %d\n'

void FUN_004f5be4(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 local_120 [16];
  undefined1 auStack_110 [4];
  undefined1 local_10c [12];
  undefined1 local_100 [20];
  undefined1 local_ec [24];
  undefined1 local_d4 [28];
  undefined1 local_b8 [32];
  undefined1 auStack_98 [112];
  
  if ((*(char *)(param_1 + 4) == '\0') && (iVar2 = FUN_004f93f0(DAT_015932d0), iVar2 != 0)) {
    print_tty2("------------------------------\n");
    print_tty2("Calling CMediusManager::Init()\n");
    print_tty2("------------------------------\n");
    FUN_0054049c();
    FUN_005acbcc(local_120);
    iVar2 = FUN_00504db0(boot::g_pHWSystem,0);
    if ((iVar2 == 0) &&
       ((iVar2 = FUN_00504db0(boot::g_pHWSystem,1), iVar2 == 0 &&
        (iVar2 = FUN_00504db0(boot::g_pHWSystem,3), iVar2 == 0)))) {
      FUN_00504db0(boot::g_pHWSystem,2);
    }
    FUN_005acc40(local_120);
    FUN_0053c5cc(local_ec);
    uVar1 = FUN_0055c668(local_ec);
    if ((int)uVar1 != 0) {
      print_tty("NetUseReliableUDP() error %d\n",uVar1);
    }
    FUN_005a462c(local_10c);
    FUN_005a117c(local_10c);
    FUN_0056fc98();
    FUN_00573e34(local_100);
    FUN_005744ac(local_100);
    libc::memset(auStack_98,0,100);
    FUN_0053f9b4(auStack_98);
    iVar2 = FUN_00504db0(boot::g_pHWSystem,0);
    if (((iVar2 == 0) && (iVar2 = FUN_00504db0(boot::g_pHWSystem,1), iVar2 == 0)) &&
       (iVar2 = FUN_00504db0(boot::g_pHWSystem,3), iVar2 == 0)) {
      FUN_00504db0(boot::g_pHWSystem,2);
    }
    uVar1 = stub::STUB_00021358();
    print_tty2("APPID = %d\n",uVar1);
    uVar1 = FUN_0053f7e4(auStack_98,local_d4);
    if ((int)uVar1 != 0) {
      print_tty("NetInitialize() error: %d\n",uVar1);
    }
    uVar1 = FUN_0053f37c(auStack_110,0,&PTR_FUN_00710ef8,0);
    if ((int)uVar1 != 0) {
      print_tty("NetRegisterApplicationMessage() error: %d\n",uVar1);
    }
    print_tty2("--------------------------\n");
    print_tty2("Calling MediusInitialize()\n");
    print_tty2("--------------------------\n");
    uVar1 = FUN_00583378(1);
    if ((int)uVar1 == 0) {
      print_tty2("-----------------------------\n");
      print_tty2("Calling MediusSessionCreate()\n");
      print_tty2("-----------------------------\n");
      FUN_0057fad4(local_b8);
      uVar1 = FUN_00584104(local_b8,param_1 + 0x10);
      if ((int)uVar1 == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        print_tty("MediusSessionCreate() error: %d\n",uVar1);
      }
    }
    else {
      print_tty("MediusInitialize() error: %d\n",uVar1);
    }
  }
  return;
}



//==== 004f6134  ns=Global  size=0xc8
// sig: undefined FUN_004f6134(void)
// callers(0): 
// callees(5): 004ffc9c print_tty2; 0057d370 FUN_0057d370; 00582e74 CMediusManager::DisconnectFromMAS; 005c5ad0 libc::memcpy; 005d0140 libc::memset
// strings: 0065e784: '------------------------------------\n' | 0065e7ac: 'Calling CMediusManager::Disconnect()\n'

void FUN_004f6134(int param_1)

{
  undefined1 auStack_40 [21];
  undefined1 auStack_2b [19];
  
  print_tty2("------------------------------------\n");
  print_tty2("Calling CMediusManager::Disconnect()\n");
  print_tty2("------------------------------------\n");
  libc::memset(auStack_40,0,0x26);
  libc::memcpy(auStack_2b,(void *)(param_1 + 0x40),0x11);
  FUN_0057d370(auStack_40,&PTR_FUN_00710f60,param_1 + 0x18);
  CMediusManager::DisconnectFromMAS(0,param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



//==== 004f61fc  ns=Global  size=0x7c
// sig: undefined FUN_004f61fc(void)
// callers(0): 
// callees(1): 0057dcd8 FUN_0057dcd8

void FUN_004f61fc(int param_1)

{
  undefined1 local_40 [56];
  
  FUN_0057dcd8(local_40,&PTR_FUN_00710f58,param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 0x12;
  return;
}



//==== 004f6278  ns=Global  size=0x148
// sig: undefined FUN_004f6278(void)
// callers(0): 
// callees(4): 004ff6d0 print_tty; 004ffc9c print_tty2; 00583ca4 CMediusManager::ConnectToMLS; 005d0140 libc::memset
// strings: 0065e7d4: '--------------------------------------\n' | 0065e7fc: 'Calling CMediusManager::ConnectToMLS()\n' | 0065e824: 'ConnectToMLS() error %d\n'

void FUN_004f6278(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 auStack_140 [68];
  undefined4 local_30;
  undefined **local_2c;
  undefined **local_28;
  undefined **local_24;
  
  print_tty2("--------------------------------------\n");
  print_tty2("Calling CMediusManager::ConnectToMLS()\n");
  print_tty2("--------------------------------------\n");
  libc::memset(auStack_140,0,0x128);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = 0x13;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    uVar4 = *(undefined4 *)(iVar3 + param_1 + 0x5c);
    *(undefined4 *)((int)auStack_140 + iVar3) = *(undefined4 *)(iVar3 + param_1 + 0x58);
    *(undefined4 *)((int)auStack_140 + iVar3 + 4) = uVar4;
    lVar5 = lVar5 + -1;
    iVar1 = iVar3 + 8;
  } while (lVar5 != 0);
  *(undefined4 *)((int)auStack_140 + iVar3 + 8) = *(undefined4 *)(param_1 + iVar3 + 8 + 0x58);
  local_30 = 0x100;
  local_2c = &PTR_FUN_00710f18;
  local_28 = &PTR_FUN_00710f20;
  local_24 = &PTR_FUN_00710f28;
  uVar2 = CMediusManager::ConnectToMLS(auStack_140,uVar2,param_1 + 0x18);
  uVar4 = 0xf;
  if ((int)uVar2 != 0) {
    print_tty("ConnectToMLS() error %d\n",uVar2);
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}



//==== 004f63c0  ns=Global  size=0x94
// sig: undefined FUN_004f63c0(void)
// callers(0): 
// callees(3): 004ff6d0 print_tty; 004ffc9c print_tty2; 00582e74 CMediusManager::DisconnectFromMAS
// strings: 0065e840: '-------------------------------------------\n' | 0065e870: 'Calling CMediusManager::DisconnectFromMAS()\n' | 0065e8a0: 'DisconnectFromMAS() error %d\n'

void FUN_004f63c0(int param_1)

{
  undefined8 uVar1;
  
  print_tty2("-------------------------------------------\n");
  print_tty2("Calling CMediusManager::DisconnectFromMAS()\n");
  print_tty2("-------------------------------------------\n");
  uVar1 = CMediusManager::DisconnectFromMAS(1,param_1 + 0x18);
  if ((int)uVar1 != 0) {
    print_tty("DisconnectFromMAS() error %d\n",uVar1);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}



//==== 004f6454  ns=Global  size=0x68
// sig: undefined FUN_004f6454(void)
// callers(0): 
// callees(2): 0057d2a4 FUN_0057d2a4; 005d0140 libc::memset

void FUN_004f6454(int param_1)

{
  undefined1 auStack_30 [32];
  
  libc::memset(auStack_30,0,0x15);
  FUN_0057d2a4(auStack_30,&PTR_FUN_00710f50,param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 0xd;
  return;
}



//==== 004f64bc  ns=Global  size=0x168
// sig: undefined FUN_004f64bc(void)
// callers(1): 004f69b8 FUN_004f69b8
// callees(7): 004ff6d0 print_tty; 004ffc9c print_tty2; 0057d3fc FUN_0057d3fc; 0057f9d0 CMediusManager::MediusTicketLogin; 005c5ad0 libc::memcpy; 005d0140 libc::memset; 08000368 syscall::syscall_sys_ss_get_open_psid
// strings: 0065e720: '-----------------------------\n' | 0065e8c0: 'Calling BeginAuthentication()\n' | 0065e8e0: 'MediusTicketLogin() error %d\n'

void FUN_004f64bc(int param_1)

{
  undefined8 result;
  undefined1 auStack_b0 [16];
  undefined1 local_a0 [48];
  undefined1 auStack_70 [45];
  undefined1 auStack_43 [35];
  
  print_tty2("-----------------------------\n");
  print_tty2("Calling BeginAuthentication()\n");
  print_tty2("-----------------------------\n");
  libc::memset(auStack_70,0,0x50);
  syscall::syscall_sys_ss_get_open_psid(auStack_b0);
  libc::memcpy(auStack_43,auStack_b0,0x10);
  FUN_0057d3fc(auStack_70,param_1 + 0x18);
  result = CMediusManager::MediusTicketLogin(local_a0,&PTR_FUN_00710f40,0,param_1 + 0x18);
  if ((int)result != 0) {
    print_tty("MediusTicketLogin() error %d\n",result);
  }
  *(undefined4 *)(param_1 + 8) = 0xb;
  return;
}



//==== 004f6624  ns=Global  size=0xa0
// sig: undefined FUN_004f6624(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 0057fafc CMediusManager::RequestSessionMAS
// strings: 0065e900: 'RequestSessionMAS() error %d\n'

void FUN_004f6624(int param_1)

{
  undefined8 ret;
  undefined1 local_30 [40];
  
  *(undefined4 *)(param_1 + 0x2c) = 3000000;
  ret = CMediusManager::RequestSessionMAS(local_30,&PTR_FUN_00710f38,param_1 + 0x18);
  if ((int)ret == 0) {
    *(undefined4 *)(param_1 + 8) = 9;
  }
  else {
    print_tty("RequestSessionMAS() error %d\n",ret);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}



//==== 004f66c4  ns=Global  size=0x2f0
// sig: undefined FUN_004f66c4(void)
// callers(2): 004f69b8 FUN_004f69b8; 004f7014 FUN_004f7014
// callees(5): 004ffc9c print_tty2; 0053e5c8 FUN_0053e5c8; 0057fcb0 CMediusManager::ConnectToMAS; 00583ca4 CMediusManager::ConnectToMLS; 005d0140 libc::memset
// strings: 0065e7d4: '--------------------------------------\n' | 0065e920: 'Calling CMediusManager::ConnectToMAS()\n' | 0065e948: '--- MAS Connection Information ---\n' | 0065e970: '  connectParams->ConnectInfo.Type:  %d\n' | 0065e998: '    (NetConnectionNone)\n' | 0065e9b8: '    (NetConnectionTypeClientServerTCP\n' | 0065e9e0: '    (NetConnectionTypePeerToPeerUDP\n' | 0065ea08: '    (NetConnectionTypeClientServerTCPAuxUDP\n' | 0065ea38: "    NetAddressList:         '%p'\n" | 0065ea60: "      AddressType[0]:       '%d'\n" | 0065ea88: "      Address[0]:           '%s'\n" | 0065eab0: "      Port[0]:              '%d'\n" | 0065ead8: "      AddressType[1]:       '%d'\n" | 0065eb00: "      Address[1]:           '%s'\n" | 0065eb28: "      Port[1]:              '%d'\n" | 0065eb50: "    WorldID:                '%d'\n" | 0065eb78: "    ServerKey:              '%p'\n" | 0065eba0: "    aSessionKey:            '%s'\n" | 0065ebc8: "    aAccessKey:             '%s'\n" | 0065ebf0: "  MaxClientsPerConnection:  '%d'\n" | 0065ec18: "  pfConnectCallback:        '%p'\n" | 0065ec40: "  pfDisconnectCallback:     '%p'\n" | 0065ec68: "  pfUpdateErrorCallback:    '%p'\n" | 0065ec90: "  pfSystemMessageCallback:  '%p'\n"

void FUN_004f66c4(int param_1)

{
  int iVar1;
  int local_140;
  uint local_13c;
  undefined1 auStack_138 [16];
  uint local_128;
  uint local_124;
  undefined1 auStack_120 [16];
  uint local_110;
  undefined4 local_10c;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [17];
  undefined1 auStack_b7 [147];
  uint local_24;
  uint local_20;
  
  print_tty2("--------------------------------------\n");
  print_tty2("Calling CMediusManager::ConnectToMAS()\n");
  print_tty2("--------------------------------------\n");
  libc::memset(&local_140,0,0x128);
  CMediusManager::ConnectToMAS(&local_140,0,param_1 + 0xf4,*(undefined4 *)(param_1 + 500),1);
  print_tty2("--- MAS Connection Information ---\n");
  print_tty2("  connectParams->ConnectInfo.Type:  %d\n",local_140);
  if (local_140 < 2) {
    if (-1 < local_140) {
      if (local_140 < 1) {
        print_tty2("    (NetConnectionNone)\n");
      }
      else {
        print_tty2("    (NetConnectionTypeClientServerTCP\n");
      }
    }
  }
  else if (local_140 < 3) {
    print_tty2("    (NetConnectionTypePeerToPeerUDP\n");
  }
  else if (local_140 < 4) {
    print_tty2("    (NetConnectionTypeClientServerTCPAuxUDP\n");
  }
  print_tty2("    NetAddressList:         \'%p\'\n",&local_13c);
  print_tty2("      AddressType[0]:       \'%d\'\n",(ulonglong)local_13c);
  print_tty2("      Address[0]:           \'%s\'\n",auStack_138);
  print_tty2("      Port[0]:              \'%d\'\n",(ulonglong)local_128);
  print_tty2("      AddressType[1]:       \'%d\'\n",(ulonglong)local_124);
  print_tty2("      Address[1]:           \'%s\'\n",auStack_120);
  print_tty2("      Port[1]:              \'%d\'\n",(ulonglong)local_110);
  print_tty2("    WorldID:                \'%d\'\n",local_10c);
  print_tty2("    ServerKey:              \'%p\'\n",auStack_108);
  print_tty2("    aSessionKey:            \'%s\'\n",auStack_c8);
  print_tty2("    aAccessKey:             \'%s\'\n",auStack_b7);
  print_tty2("  MaxClientsPerConnection:  \'%d\'\n",0xff);
  print_tty2("  pfConnectCallback:        \'%p\'\n",&PTR_FUN_00710f08);
  print_tty2("  pfDisconnectCallback:     \'%p\'\n",&PTR_FUN_00710f10);
  print_tty2("  pfUpdateErrorCallback:    \'%p\'\n",(ulonglong)local_24);
  print_tty2("  pfSystemMessageCallback:  \'%p\'\n",(ulonglong)local_20);
  iVar1 = CMediusManager::ConnectToMLS(&local_140,*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  if (iVar1 == 0) {
    FUN_0053e5c8(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 8) = 6;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}



//==== 004f69b8  ns=Global  size=0x5a0
// sig: undefined FUN_004f69b8(void)
// callers(0): 
// callees(16): 004f64bc FUN_004f64bc; 004f66c4 FUN_004f66c4; 004f7e34 FUN_004f7e34; 004ff6d0 print_tty; 004ffc9c print_tty2; 0053e5c8 FUN_0053e5c8; 0057d2a4 FUN_0057d2a4; 0057d370 FUN_0057d370; 0057dcd8 FUN_0057dcd8; 0057fafc CMediusManager::RequestSessionMAS; 00582c08 FUN_00582c08; 00582e74 CMediusManager::DisconnectFromMAS; 00583ca4 CMediusManager::ConnectToMLS; 005c5ad0 libc::memcpy; 005d0140 libc::memset; 0064f504 cell::cellSysutilCheckCallback
// strings: 0065ecb4: 'MediusUpdate() error %d\n' | 0065ecd4: 'Resolving Hostname MAS ...\n' | 0065ecf4: 'RESOLVED Hostname MAS!\n' | 0065ed0c: 'Connecting to MAS ...\n' | 0065ed24: 'ERROR: Connect to MAS timeout\n' | 0065ed44: 'CONNECTED to MAS!\n' | 0065e900: 'RequestSessionMAS() error %d\n' | 0065ed5c: 'Authentication COMPLETE!\n' | 0065e840: '-------------------------------------------\n' | 0065e870: 'Calling CMediusManager::DisconnectFromMAS()\n' | 0065e8a0: 'DisconnectFromMAS() error %d\n' | 0065e7d4: '--------------------------------------\n' | 0065e7fc: 'Calling CMediusManager::ConnectToMLS()\n' | 0065e824: 'ConnectToMLS() error %d\n' | 0065ed7c: 'MEDIUS ERROR!\n' | 0065e784: '------------------------------------\n' | 0065e7ac: 'Calling CMediusManager::Disconnect()\n'

void FUN_004f69b8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int local_1d0;
  undefined1 local_1cc [28];
  undefined1 local_1b0 [44];
  undefined4 auStack_184 [68];
  undefined4 local_74;
  undefined **local_70;
  undefined **local_6c;
  undefined **local_68;
  undefined1 auStack_5c [21];
  undefined1 auStack_47 [21];
  undefined1 auStack_32 [26];
  
  cell::cellSysutilCheckCallback();
  if (DAT_01111640 != (int *)0x0) {
    (*(code *)**(undefined4 **)(*DAT_01111640 + 8))(0x3fc47ae140000000);
  }
  uVar1 = FUN_00582c08(1);
  if ((int)uVar1 != 0) {
    print_tty2("MediusUpdate() error %d\n",uVar1);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 10) {
    if (3 < iVar2) {
      if (6 < iVar2) {
        if (iVar2 < 8) {
          print_tty2("CONNECTED to MAS!\n");
          *(undefined4 *)(param_1 + 0x2c) = 3000000;
          iVar2 = CMediusManager::RequestSessionMAS(local_1cc,&PTR_FUN_00710f38,param_1 + 0x18);
          uVar3 = 9;
          if (iVar2 != 0) {
            print_tty("RequestSessionMAS() error %d\n");
            uVar3 = 0xffffffff;
          }
          *(undefined4 *)(param_1 + 8) = uVar3;
          return;
        }
        if (8 < iVar2) {
          return;
        }
        print_tty2("--------------------------------------\n");
        print_tty2("Calling CMediusManager::ConnectToMLS()\n");
        print_tty2("--------------------------------------\n");
        libc::memset(auStack_184,0,0x128);
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        lVar5 = 0x13;
        iVar2 = 0;
        do {
          iVar4 = iVar2;
          uVar3 = *(undefined4 *)(iVar4 + param_1 + 0x5c);
          *(undefined4 *)((int)auStack_184 + iVar4) = *(undefined4 *)(iVar4 + param_1 + 0x58);
          *(undefined4 *)((int)auStack_184 + iVar4 + 4) = uVar3;
          lVar5 = lVar5 + -1;
          iVar2 = iVar4 + 8;
        } while (lVar5 != 0);
        *(undefined4 *)((int)auStack_184 + iVar4 + 8) = *(undefined4 *)(param_1 + iVar4 + 8 + 0x58);
        local_74 = 0x100;
        local_70 = &PTR_FUN_00710f18;
        local_6c = &PTR_FUN_00710f20;
        local_68 = &PTR_FUN_00710f28;
        uVar1 = CMediusManager::ConnectToMLS(auStack_184,uVar1,param_1 + 0x18);
        if ((int)uVar1 != 0) {
          print_tty("ConnectToMLS() error %d\n",uVar1);
          *(undefined4 *)(param_1 + 8) = 0xffffffff;
          return;
        }
        *(undefined4 *)(param_1 + 8) = 0xf;
        return;
      }
      if (iVar2 < 5) {
        return;
      }
      if (5 < iVar2) {
        print_tty2("Connecting to MAS ...\n");
        FUN_0053e5c8(&local_1d0);
        if ((uint)(local_1d0 - *(int *)(param_1 + 0x1f8)) < 0x4e21) {
          return;
        }
        print_tty("ERROR: Connect to MAS timeout\n");
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        return;
      }
      FUN_004f66c4(param_1);
      return;
    }
    if (iVar2 < 0) {
      if (iVar2 < -1) {
        return;
      }
      print_tty2("MEDIUS ERROR!\n");
      print_tty2("------------------------------------\n");
      print_tty2("Calling CMediusManager::Disconnect()\n");
      print_tty2("------------------------------------\n");
      libc::memset(auStack_47,0,0x26);
      libc::memcpy(auStack_32,(void *)(param_1 + 0x40),0x11);
      FUN_0057d370(auStack_47,&PTR_FUN_00710f60,param_1 + 0x18);
      CMediusManager::DisconnectFromMAS(0,param_1 + 0x18);
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      return;
    }
    if (1 < iVar2) {
      if (2 < iVar2) {
        print_tty2("RESOLVED Hostname MAS!\n");
        FUN_004f7e34(DAT_015932d0,&PTR_FUN_00710f30);
        *(undefined4 *)(param_1 + 8) = 4;
        return;
      }
      print_tty2("Resolving Hostname MAS ...\n");
      return;
    }
  }
  else {
    if (iVar2 < 0xf) {
      if (iVar2 < 0xc) {
        if (10 < iVar2) {
          return;
        }
        FUN_004f64bc(param_1);
        return;
      }
      if (iVar2 < 0xd) {
        print_tty2("Authentication COMPLETE!\n");
        libc::memset(auStack_5c,0,0x15);
        FUN_0057d2a4(auStack_5c,&PTR_FUN_00710f50,param_1 + 0x18);
        *(undefined4 *)(param_1 + 8) = 0xd;
        return;
      }
      if (iVar2 < 0xe) {
        return;
      }
      print_tty2("-------------------------------------------\n");
      print_tty2("Calling CMediusManager::DisconnectFromMAS()\n");
      print_tty2("-------------------------------------------\n");
      uVar1 = CMediusManager::DisconnectFromMAS(1,param_1 + 0x18);
      if ((int)uVar1 == 0) {
        return;
      }
      print_tty("DisconnectFromMAS() error %d\n",uVar1);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      return;
    }
    if (0x11 < iVar2) {
      if (iVar2 < 0x13) {
        return;
      }
      if (0x13 < iVar2) {
        return;
      }
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
    if (iVar2 < 0x10) {
      return;
    }
    if (iVar2 < 0x11) {
      FUN_0057dcd8(local_1b0,&PTR_FUN_00710f58,param_1 + 0x18);
      *(undefined4 *)(param_1 + 8) = 0x12;
      return;
    }
  }
  CMediusManager::DisconnectFromMAS(0,param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



//==== 004f6f58  ns=Global  size=0xbc
// sig: undefined FUN_004f6f58(void)
// callers(0): 
// callees(5): 004ffc9c print_tty2; 0053c66c FUN_0053c66c; 0053e008 FUN_0053e008; 005cccec libc::strcpy; 005d0140 libc::memset
// strings: 0065ed8c: '------------------------\n' | 0065edac: 'Resolving Host Server IP\n' | 0065edcc: 'blob105.scea.com'

void FUN_004f6f58(int param_1)

{
  undefined1 auStack_130 [288];
  
  print_tty2("------------------------\n");
  print_tty2("Resolving Host Server IP\n");
  print_tty2("------------------------\n");
  libc::memset(auStack_130,0,0x114);
  FUN_0053c66c(auStack_130);
  libc::strcpy(auStack_130,"blob105.scea.com",0x100);
  FUN_0053e008(auStack_130);
  *(undefined4 *)(param_1 + 8) = 2;
  return;
}



//==== 004f7014  ns=Global  size=0x104
// sig: undefined FUN_004f7014(void)
// callers(0): 
// callees(6): 004f66c4 FUN_004f66c4; 004ffc9c print_tty2; 0053c66c FUN_0053c66c; 0053e008 FUN_0053e008; 005cccec libc::strcpy; 005d0140 libc::memset
// strings: 0065ede0: '---------------------------------\n' | 0065ee08: 'Calling CMediusManager::Connect()\n' | 0065ed8c: '------------------------\n' | 0065edac: 'Resolving Host Server IP\n' | 0065edcc: 'blob105.scea.com'

void FUN_004f7014(int param_1)

{
  undefined1 auStack_130 [288];
  
  print_tty2("---------------------------------\n");
  print_tty2("Calling CMediusManager::Connect()\n");
  print_tty2("---------------------------------\n");
  if (*(char *)(param_1 + 0xf4) == '\0') {
    print_tty2("------------------------\n");
    print_tty2("Resolving Host Server IP\n");
    print_tty2("------------------------\n");
    libc::memset(auStack_130,0,0x114);
    FUN_0053c66c(auStack_130);
    libc::strcpy(auStack_130,"blob105.scea.com",0x100);
    FUN_0053e008(auStack_130);
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else {
    FUN_004f66c4(param_1);
  }
  return;
}



//==== 004f7118  ns=Global  size=0x8
// sig: undefined FUN_004f7118(void)
// callers(0): 
// callees(0): 

void FUN_004f7118(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



//==== 004f7120  ns=Global  size=0x8
// sig: undefined FUN_004f7120(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004f7120(void)

{
  return 0;
}



//==== 004f7128  ns=Global  size=0x78
// sig: undefined FUN_004f7128(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 005cccec libc::strcpy
// strings: 0065ee2c: 'NetGetHostByName() callback error 0x%x\n'

void FUN_004f7128(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_015932cc;
  if ((*(int *)(param_1 + 0x104) == 0) && (*(int *)(param_1 + 0x100) != 0)) {
    libc::strcpy(DAT_015932cc + 0xf4,param_1,0xf);
    uVar2 = 3;
  }
  else {
    print_tty("NetGetHostByName() callback error 0x%x\n");
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return;
}



//==== 004f71a0  ns=Global  size=0x34
// sig: undefined FUN_004f71a0(void)
// callers(0): 
// callees(0): 

void FUN_004f71a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined4 *)(DAT_015932cc + 8) = 7;
  }
  else {
    *(undefined4 *)(DAT_015932cc + 8) = 0xffffffff;
  }
  return;
}



//==== 004f71d4  ns=Global  size=0x14
// sig: undefined FUN_004f71d4(void)
// callers(0): 
// callees(0): 

void FUN_004f71d4(void)

{
  *(undefined4 *)(DAT_015932cc + 8) = 8;
  return;
}



//==== 004f71e8  ns=Global  size=0x44
// sig: undefined FUN_004f71e8(void)
// callers(0): 
// callees(0): 

void FUN_004f71e8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_015932cc;
  if ((param_1 == (undefined4 *)0x0) || (param_1[1] != 1)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0x10;
    uVar1 = *param_1;
    *(undefined4 *)(DAT_015932cc + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x54) = uVar1;
  }
  *(undefined4 *)(iVar2 + 8) = uVar3;
  return;
}



//==== 004f722c  ns=Global  size=0x14
// sig: undefined FUN_004f722c(void)
// callers(0): 
// callees(0): 

void FUN_004f722c(void)

{
  *(undefined4 *)(DAT_015932cc + 8) = 0x11;
  return;
}



//==== 004f7240  ns=Global  size=0x34
// sig: undefined FUN_004f7240(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065ee54: 'NetUpdateError: %d\n'

void FUN_004f7240(int param_1)

{
  print_tty2("NetUpdateError: %d\n",(ulonglong)*(uint *)(param_1 + 4));
  return;
}



//==== 004f7274  ns=Global  size=0x30
// sig: undefined FUN_004f7274(void)
// callers(0): 
// callees(0): 

void FUN_004f7274(int param_1)

{
  if (param_1 < 0) {
    *(undefined4 *)(DAT_015932cc + 8) = 0xffffffff;
  }
  else {
    *(undefined4 *)(DAT_015932cc + 8) = 5;
  }
  return;
}



//==== 004f72a4  ns=Global  size=0x5c
// sig: undefined FUN_004f72a4(void)
// callers(0): 
// callees(0): 

void FUN_004f72a4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_015932cc;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) != 0)) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 10;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(DAT_015932cc + 0x40) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar4 + 0x44) = uVar1;
    *(undefined4 *)(iVar4 + 0x48) = uVar2;
    *(undefined4 *)(iVar4 + 0x4c) = uVar3;
    *(undefined1 *)(iVar4 + 0x50) = 0;
  }
  *(undefined4 *)(iVar4 + 8) = uVar5;
  return;
}



//==== 004f7300  ns=Global  size=0xa4
// sig: undefined FUN_004f7300(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 005c5ad0 libc::memcpy
// strings: 0065ee68: 'MASTicketLoginCallback() error %s\n'

void FUN_004f7300(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_015932cc;
  if (*(int *)(param_3 + 0x1c) == 0) {
    libc::memcpy((void *)(DAT_015932cc + 0x58),(void *)(param_1 + 0x48),0x9c);
    *(undefined4 *)(iVar1 + 0x1fc) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar1 + 8) = 0xc;
  }
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    print_tty("MASTicketLoginCallback() error %s\n",param_2[2]);
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  return;
}



//==== 004f73a4  ns=Global  size=0xac
// sig: undefined FUN_004f73a4(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 005c5ad0 libc::memcpy
// strings: 0065ee8c: 'MASAnonymousLoginCallback() error %s\n'

void FUN_004f73a4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_015932cc;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    print_tty("MASAnonymousLoginCallback() error %s\n",param_2[2]);
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  if (*(int *)(param_3 + 0x1c) == 0) {
    libc::memcpy((void *)(iVar1 + 0x58),(void *)(param_1 + 0x28),0x9c);
    *(undefined4 *)(iVar1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 8) = 0xc;
  }
  return;
}



//==== 004f7450  ns=Global  size=0x78
// sig: undefined FUN_004f7450(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 005c4e94 FUN_005c4e94

void FUN_004f7450(int param_1)

{
  int iVar1;
  char *format;
  undefined4 uVar2;
  undefined1 local_10 [8];
  
  iVar1 = DAT_015932cc;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    format = (char *)FUN_005c4e94(local_10);
    print_tty2(format);
    uVar2 = 0xe;
  }
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return;
}



//==== 004f74c8  ns=Global  size=0x6c
// sig: undefined FUN_004f74c8(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

void FUN_004f74c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_015932cc;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    libc::memcpy((void *)(DAT_015932cc + 0x200),(void *)(param_1 + 0x48),0x100);
    uVar2 = 0x13;
  }
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return;
}



//==== 004f7534  ns=Global  size=0x54
// sig: undefined FUN_004f7534(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065eeb4: 'MASSEssionEndCallback fired\n'

void FUN_004f7534(int param_1)

{
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) != 0)) {
    *(undefined4 *)(DAT_015932cc + 8) = 0xffffffff;
  }
  else {
    print_tty2("MASSEssionEndCallback fired\n");
  }
  return;
}



//==== 004f7588  ns=Global  size=0x28
// sig: undefined FUN_004f7588(void)
// callers(0): 
// callees(0): 

void FUN_004f7588(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x1dc97) = 0;
  *param_1 = 0;
  DAT_015932dc = 0;
  return;
}



//==== 004f75b0  ns=Global  size=0x28
// sig: undefined FUN_004f75b0(void)
// callers(0): 
// callees(0): 

void FUN_004f75b0(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x1dc97) = 0;
  *param_1 = 0;
  DAT_015932dc = 0;
  return;
}



//==== 004f75d8  ns=Global  size=0x94
// sig: undefined FUN_004f75d8(void)
// callers(1): 004efb80 FUN_004efb80
// callees(1): 004fe218 FUN_004fe218

undefined4 * FUN_004f75d8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_015932d0 == (undefined4 *)0x0) {
    DAT_015932d4 = (undefined4)param_1;
    puVar1 = (undefined4 *)FUN_004fe218(0x77260,param_1);
    DAT_015932d0 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 0x1dc97) = 0;
      *puVar1 = 0;
      DAT_015932dc = 0;
      DAT_015932d0 = puVar1;
    }
  }
  return DAT_015932d0;
}



//==== 004f766c  ns=Global  size=0x134
// sig: undefined FUN_004f766c(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 0064ee84 sce::sceNpManagerGetTicket
// strings: 0065eed4: 'NP offline\n' | 0065eee4: 'NP getting ticket\n' | 0065eefc: 'NP getting profile\n' | 0065ef14: 'NP logging in\n' | 0065ef24: 'NP online\n'

void FUN_004f766c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = DAT_015932d0;
  if (param_1 == 0xff) {
    iVar2 = DAT_015932d0 + 0x3000c;
    *(undefined4 *)(DAT_015932d0 + 0x3000c) = 0x10000;
    uVar4 = sce::sceNpManagerGetTicket(iVar3 + 0x2000c,iVar2);
    puVar1 = *(undefined4 **)(iVar3 + 0x30010);
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)*puVar1)(uVar4);
    }
  }
  else if (param_1 == 3) {
    print_tty2("NP online\n");
  }
  else if (param_1 == 2) {
    print_tty2("NP logging in\n");
  }
  else if (param_1 == 1) {
    print_tty2("NP getting profile\n");
  }
  else if (param_1 == 0) {
    print_tty2("NP getting ticket\n");
  }
  else if (param_1 == -1) {
    print_tty2("NP offline\n");
    syscall();
  }
  return;
}



//==== 004f77a0  ns=Global  size=0x2b4
// sig: undefined FUN_004f77a0(void)
// callers(0): 
// callees(9): 004ff6d0 print_tty; 004ffc9c print_tty2; 00503554 FUN_00503554; 005d0140 libc::memset; 005d0218 libc::memcmp; 0064eec4 sce::sceNpBasicGetFriendPresenceByNpId2; 0064efa4 sce::sceNpBasicGetBlockListEntryCount; 0064f0e4 sce::sceNpBasicGetEvent; 0064f144 sce::sceNpBasicGetBlockListEntry
// strings: 0065ef30: '<BASIC CB> event: %d, retCode: 0x%x, reqID: %u, arg: 0x%p\n' | 0065ef70: 'Friend event detected\n' | 0065ef88: 'Blocklist add event detected\n' | 0065efa8: 'sceNpBasicGetBlockListEntryCount() busy 0x%x\n' | 0065efd8: 'sceNpBasicGetBlockListEntryCount() error 0x%x\n'

undefined8 FUN_004f77a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 local_320 [4];
  undefined1 local_31c [4];
  undefined1 auStack_318 [216];
  undefined1 auStack_240 [520];
  
  iVar3 = (int)param_1;
  print_tty2("<BASIC CB> event: %d, retCode: 0x%x, reqID: %u, arg: 0x%p\n",param_1,param_2,param_3,
             param_4);
  iVar1 = DAT_015932d0;
  if (iVar3 < 10) {
    if (iVar3 < 2) {
      if (iVar3 < 0) {
        return 0;
      }
    }
    else if (iVar3 < 9) {
      return 0;
    }
    print_tty2("Friend event detected\n");
    sce::sceNpBasicGetEvent(local_320,auStack_318,auStack_240,local_31c);
    uVar5 = 0;
    iVar3 = iVar1;
    if (*(int *)(iVar1 + 0x30020) != 0) {
      do {
        iVar4 = libc::memcmp(auStack_318,(void *)(iVar3 + 0x5382c),0x14);
        if (iVar4 == 0) {
          puVar7 = (undefined4 *)(iVar3 + 0x53850);
          libc::memset(puVar7,0,0x20c);
          *puVar7 = 0x20c;
          sce::sceNpBasicGetFriendPresenceByNpId2((void *)(iVar3 + 0x5382c),puVar7,0);
          *(undefined1 *)(iVar1 + 0x7725c) = 1;
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x238;
      } while (uVar5 < *(uint *)(iVar1 + 0x30020));
    }
  }
  else {
    if (iVar3 < 0xc) {
      if (iVar3 < 0xb) {
        return 0;
      }
    }
    else if (iVar3 != 0x18) {
      return 0;
    }
    print_tty2("Blocklist add event detected\n");
    uVar2 = sce::sceNpBasicGetBlockListEntryCount(iVar1 + 0x3001c);
    if ((int)uVar2 < 0) {
      if ((int)uVar2 == -0x7ffd5991) {
        print_tty("sceNpBasicGetBlockListEntryCount() busy 0x%x\n",uVar2);
      }
      else {
        print_tty("sceNpBasicGetBlockListEntryCount() error 0x%x\n",uVar2);
      }
    }
    else {
      uVar5 = *(uint *)(iVar1 + 0x3001c);
      if (0x100 < uVar5) {
        uVar5 = 0x100;
        *(undefined4 *)(iVar1 + 0x3001c) = 0x100;
      }
      uVar8 = 0;
      if (uVar5 != 0) {
        do {
          iVar4 = uVar8 * 0x238;
          iVar3 = iVar4 + iVar1 + 0x3002c;
          sce::sceNpBasicGetBlockListEntry(uVar8,iVar3);
          uVar6 = FUN_00503554(iVar3);
          uVar5 = *(uint *)(iVar1 + 0x3001c);
          uVar8 = uVar8 + 1;
          *(undefined4 *)(iVar4 + iVar1 + 0x30024) = uVar6;
        } while (uVar8 < uVar5);
      }
      *(undefined1 *)(iVar1 + 0x7725d) = 1;
    }
  }
  return 0;
}



//==== 004f7a58  ns=Global  size=0x138
// sig: undefined FUN_004f7a58(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 0064fd64 cell::cellNetCtlNetStartDialogUnloadAsync
// strings: 0065f008: 'cellNetCtlNetStartDialogUnloadAsync error 0x%x\n'

/* WARNING: Removing unreachable block (ram,0x004f7ac8) */
/* WARNING: Removing unreachable block (ram,0x004f7ad4) */

void FUN_004f7a58(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0x802) {
    DAT_015932e4 = 0;
    DAT_015932e0 = 8;
    uVar1 = cell::cellNetCtlNetStartDialogUnloadAsync(&DAT_015932e0);
    if ((int)uVar1 < 0) {
      print_tty("cellNetCtlNetStartDialogUnloadAsync error 0x%x\n",uVar1);
    }
    else {
      *(undefined4 *)(DAT_015932d0 + 4) = 3;
    }
  }
  else if (param_1 == 0x101) {
    DAT_015932dc = 1;
    *(undefined4 *)(DAT_015932d0 + 4) = 3;
  }
  return;
}



//==== 004f7b98  ns=Global  size=0x9c
// sig: undefined FUN_004f7b98(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065f038: 'NPTicketCallback() error 0x%x\n'

void FUN_004f7b98(undefined8 param_1)

{
  if ((int)param_1 < 0) {
    print_tty2("NPTicketCallback() error 0x%x\n",param_1);
    (*(code *)**(undefined4 **)(*DAT_01111640 + 0xc))
              (0,DAT_01111640,2,0,0,*(undefined4 **)(*DAT_01111640 + 0xc),1,&PTR_FUN_00710fa8,0);
  }
  else {
    *(undefined4 *)(DAT_015932d0 + 4) = 10;
  }
  return;
}



//==== 004f7c34  ns=Global  size=0x6c
// sig: undefined FUN_004f7c34(void)
// callers(0): 
// callees(5): 004ffc9c print_tty2; 0064ee44 cell::cellSslEnd; 0064ef44 sce::sceNpManagerUnregisterCallback; 0064f024 sce::sceNpBasicUnregisterHandler; 0064fd24 sys::sys_net_finalize_network
// strings: 0065f058: 'NetManager shutting down ...\n' | 0065f078: 'NetManager shutdown\n'

void FUN_004f7c34(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 2;
  print_tty2("NetManager shutting down ...\n");
  sce::sceNpBasicUnregisterHandler();
  sce::sceNpManagerUnregisterCallback();
  cell::cellSslEnd();
  sys::sys_net_finalize_network();
  print_tty2("NetManager shutdown\n");
  return;
}



//==== 004f7ca0  ns=Global  size=0xdc
// sig: undefined FUN_004f7ca0(void)
// callers(0): 
// callees(5): 004ffc9c print_tty2; 0064ee44 cell::cellSslEnd; 0064ef44 sce::sceNpManagerUnregisterCallback; 0064f024 sce::sceNpBasicUnregisterHandler; 0064fd24 sys::sys_net_finalize_network
// strings: 0065f058: 'NetManager shutting down ...\n' | 0065f078: 'NetManager shutdown\n'

void FUN_004f7ca0(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_015932d0;
  if (param_1 == 0) {
    if (*DAT_015932d0 == 0) {
      *DAT_015932d0 = 2;
      DAT_015932d0[1] = 0;
    }
    else {
      DAT_015932d0[1] = 0;
      *piVar1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    if ((undefined4 *)DAT_015932d0[0xc005] != (undefined4 *)0x0) {
      (**(code **)DAT_015932d0[0xc005])();
    }
  }
  return;
}



//==== 004f7d7c  ns=Global  size=0xb8
// sig: undefined FUN_004f7d7c(void)
// callers(1): 004efb80 FUN_004efb80
// callees(3): 004ff6d0 print_tty; 0064f084 sce::sceNpInit; 0064f104 sce::sceNpManagerRegisterCallback
// strings: 0065f090: 'sceNpInit() failed with 0x%x\n' | 0065f0b0: 'sceNpManagerRegisterCallback() failed with 0x%x\n'

void FUN_004f7d7c(undefined4 *param_1,char param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = sce::sceNpInit(0x20000,param_1 + 3);
  if ((int)uVar1 < 0) {
    print_tty("sceNpInit() failed with 0x%x\n",uVar1);
  }
  uVar1 = sce::sceNpManagerRegisterCallback(&PTR_FUN_00710f80,0);
  if ((int)uVar1 != 0) {
    print_tty("sceNpManagerRegisterCallback() failed with 0x%x\n",uVar1);
  }
  if (param_2 == '\0') {
    *param_1 = 2;
  }
  param_1[1] = (uint)(param_2 != '\0');
  return;
}



//==== 004f7e34  ns=Global  size=0x7c
// sig: undefined FUN_004f7e34(void)
// callers(1): 004f69b8 FUN_004f69b8
// callees(1): 0064efe4 sce::sceNpManagerRequestTicket2
// strings: 0065f0e4: 'WM9010-NPXM00004_00'

void FUN_004f7e34(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30010) = param_2;
  *(undefined2 *)(param_1 + 0x30018) = 2;
  *(undefined2 *)(param_1 + 0x3001a) = 1;
  sce::sceNpManagerRequestTicket2(&DAT_015932e8,param_1 + 0x30018,"WM9010-NPXM00004_00",0,0,0,0);
  return;
}



//==== 004f7eb8  ns=Global  size=0xdb0
// sig: undefined FUN_004f7eb8(void)
// callers(0): 
// callees(27): 004ff6d0 print_tty; 004ffc9c print_tty2; 00503554 FUN_00503554; 005d0140 libc::memset; 0064ee44 cell::cellSslEnd; 0064ee64 sce::sceNpBasicGetFriendListEntry; 0064eec4 sce::sceNpBasicGetFriendPresenceByNpId2; 0064ef04 sce::sceNpScoreInit; 0064ef24 sce::sceNpBasicRegisterContextSensitiveHandler; 0064ef44 sce::sceNpManagerUnregisterCallback; 0064ef84 sce::sceNpLookupInit; 0064efa4 sce::sceNpBasicGetBlockListEntryCount; 0064efe4 sce::sceNpManagerRequestTicket2; 0064f004 sce::sceNpManagerGetStatus; 0064f024 sce::sceNpBasicUnregisterHandler; 0064f044 sce::sceNpBasicGetFriendListEntryCount; 0064f064 sce::sceNpScoreCreateTitleCtx; 0064f0a4 sce::sceNpLookupCreateTitleCtx; 0064f144 sce::sceNpBasicGetBlockListEntry; 0064f184 sce::sceNpManagerGetNpId; 0064f1a4 sce::sceNpClansInit; 0064f644 cell::cellSysutilRegisterCallback; 0064f904 sce::sceNpTusCreateTitleCtx; 0064f924 sce::sceNpTusInit; 0064fd24 sys::sys_net_finalize_network; 0064fd44 cell::cellNetCtlNetStartDialogLoadAsync; 0064fd84 cell::cellNetCtlGetState
// strings: 0065f0f8: 'NetStartDialog CB registration failed 0x%x\n' | 0065f058: 'NetManager shutting down ...\n' | 0065f078: 'NetManager shutdown\n' | 0065f128: 'cellNetCtlNetStartDialogLoadAsync failed 0x%x\n' | 0065f158: 'sceNpManagerGetStatus failed 0x%x\n' | 0065f1a0: 'sceNpBasicRegisterHandler() error 0x%x\n' | 0065f1c8: 'sceNpLookupInit() error 0x%x\n' | 0065f1e8: 'sceNpTusInit() error 0x%x\n' | 0065f208: 'sceNpScoreInit() error 0x%x\n' | 0065f228: 'sceNpClansInit() error 0x%x\n' | 0065f248: 'sceNpManagerGetNpId() error 0x%x\n' | 0065f270: 'sceNpLookupCreateTitleCtx() error 0x%x\n' | 0065f298: 'sceNpTusCreateTitleCtx() error 0x%x\n' | 0065f2c0: 'sceNpScoreCreateTitleCtx() error 0x%x\n' | 0065f0e4: 'WM9010-NPXM00004_00' | 0065f2e8: 'sceNpManagerRequestTicket2() error 0x%x\n' | 0065f318: 'sceNpBasicGetFriendListEntryCount() busy 0x%x\n' | 0065f348: 'sceNpBasicGetFriendListEntryCount() error 0x%x\n' | 0065efa8: 'sceNpBasicGetBlockListEntryCount() busy 0x%x\n' | 0065efd8: 'sceNpBasicGetBlockListEntryCount() error 0x%x\n' | 0065f378: 'Retrieving %i blocked IDs\n' | 0065f398: 'Network offline\n'

/* WARNING: Removing unreachable block (ram,0x004f8168) */
/* WARNING: Removing unreachable block (ram,0x004f8094) */
/* WARNING: Removing unreachable block (ram,0x004f89a0) */
/* WARNING: Removing unreachable block (ram,0x004f81a0) */
/* WARNING: Removing unreachable block (ram,0x004f8788) */
/* WARNING: Removing unreachable block (ram,0x004f8b70) */

void FUN_004f7eb8(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  
  iVar1 = param_1[1];
  uVar7 = (ulonglong)DAT_009030e4;
  if (iVar1 < 6) {
    if (iVar1 != 5) {
      if (iVar1 == 3) {
        param_1[1] = 6;
      }
      else if ((iVar1 != 2) && (iVar1 == 1)) {
        uVar2 = cell::cellSysutilRegisterCallback(1,&PTR_FUN_00710f90,0);
        if ((int)uVar2 < 0) {
          print_tty("NetStartDialog CB registration failed 0x%x\n",uVar2);
          param_1[1] = 0;
          *param_1 = 2;
          print_tty2("NetManager shutting down ...\n");
          sce::sceNpBasicUnregisterHandler();
          sce::sceNpManagerUnregisterCallback();
          cell::cellSslEnd();
          sys::sys_net_finalize_network();
          print_tty2("NetManager shutdown\n");
        }
        uVar2 = cell::cellNetCtlNetStartDialogLoadAsync(local_58);
        if ((int)uVar2 < 0) {
          print_tty("cellNetCtlNetStartDialogLoadAsync failed 0x%x\n",uVar2);
          param_1[1] = 0;
          *param_1 = 2;
          print_tty2("NetManager shutting down ...\n");
          sce::sceNpBasicUnregisterHandler();
          sce::sceNpManagerUnregisterCallback();
          cell::cellSslEnd();
          sys::sys_net_finalize_network();
          print_tty2("NetManager shutdown\n");
        }
        param_1[1] = 2;
      }
    }
  }
  else if (iVar1 == 0xb) {
    sce::sceNpManagerGetStatus(local_60);
    cell::cellNetCtlGetState(local_5c);
  }
  else if (iVar1 == 10) {
    *param_1 = 3;
    param_1[1] = 7;
  }
  else if (iVar1 == 9) {
    sce::sceNpManagerGetStatus(local_6c);
    lVar9 = uVar7 + 4;
    uVar2 = sce::sceNpBasicRegisterContextSensitiveHandler(lVar9,&PTR_FUN_00710f88,0);
    if ((int)uVar2 < 0) {
      print_tty("sceNpBasicRegisterHandler() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    uVar2 = sce::sceNpLookupInit();
    if ((int)uVar2 < 0) {
      print_tty("sceNpLookupInit() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    uVar2 = sce::sceNpTusInit(0);
    if ((int)uVar2 < 0) {
      print_tty("sceNpTusInit() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    uVar2 = sce::sceNpScoreInit();
    if ((int)uVar2 < 0) {
      print_tty("sceNpScoreInit() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    lVar8 = uVar7 + 0xb0;
    uVar2 = sce::sceNpClansInit(lVar9,lVar8,0,0,0);
    if ((int)uVar2 < 0) {
      print_tty("sceNpClansInit() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    uVar2 = sce::sceNpManagerGetNpId(&DAT_015932e8);
    if ((int)uVar2 < 0) {
      print_tty("sceNpManagerGetNpId() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    uVar2 = sce::sceNpLookupCreateTitleCtx(lVar9,&DAT_015932e8);
    if ((int)uVar2 < 0) {
      print_tty("sceNpLookupCreateTitleCtx() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    DAT_0159331c = (int)uVar2;
    uVar2 = sce::sceNpTusCreateTitleCtx(lVar9,lVar8,&DAT_015932e8);
    if ((int)uVar2 < 0) {
      print_tty("sceNpTusCreateTitleCtx() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    DAT_01593320 = (int)uVar2;
    uVar2 = sce::sceNpScoreCreateTitleCtx(lVar9,lVar8,&DAT_015932e8);
    if ((int)uVar2 < 0) {
      print_tty("sceNpScoreCreateTitleCtx() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    DAT_01593324 = (int)uVar2;
    param_1[0xc004] = &PTR_FUN_00710f98;
    *(undefined2 *)(param_1 + 0xc006) = 2;
    *(undefined2 *)((int)param_1 + 0x3001a) = 1;
    uVar2 = sce::sceNpManagerRequestTicket2
                      (&DAT_015932e8,param_1 + 0xc006,"WM9010-NPXM00004_00",0,0,0,0);
    if ((int)uVar2 < 0) {
      print_tty("sceNpManagerRequestTicket2() error 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
    param_1[1] = 5;
  }
  else if (iVar1 == 8) {
    sce::sceNpManagerGetStatus(local_64);
    syscall();
    uVar2 = sce::sceNpBasicGetBlockListEntryCount(param_1 + 0xc007);
    if ((int)uVar2 < 0) {
      if ((int)uVar2 == -0x7ffd5991) {
        print_tty("sceNpBasicGetBlockListEntryCount() busy 0x%x\n",uVar2);
      }
      else {
        print_tty("sceNpBasicGetBlockListEntryCount() error 0x%x\n",uVar2);
        param_1[1] = 0;
        *param_1 = 2;
        print_tty2("NetManager shutting down ...\n");
        sce::sceNpBasicUnregisterHandler();
        sce::sceNpManagerUnregisterCallback();
        cell::cellSslEnd();
        sys::sys_net_finalize_network();
        print_tty2("NetManager shutdown\n");
      }
    }
    else {
      uVar7 = (ulonglong)(uint)param_1[0xc007];
      if (0x100 < uVar7) {
        uVar7 = 0x100;
        param_1[0xc007] = 0x100;
      }
      print_tty2("Retrieving %i blocked IDs\n",uVar7);
      if (param_1[0xc007] != 0) {
        uVar3 = 0;
        do {
          sce::sceNpBasicGetBlockListEntry(uVar3,param_1 + uVar3 * 0x8e + 0xc00b);
          uVar5 = FUN_00503554(param_1 + uVar3 * 0x8e + 0xc00b);
          iVar1 = uVar3 * 0x8e;
          uVar10 = param_1[0xc007];
          uVar3 = uVar3 + 1;
          param_1[iVar1 + 0xc009] = uVar5;
        } while (uVar3 < uVar10);
      }
      param_1[1] = 0xb;
    }
  }
  else if (iVar1 == 7) {
    sce::sceNpManagerGetStatus(local_68);
    uVar2 = sce::sceNpBasicGetFriendListEntryCount(param_1 + 0xc008);
    if ((int)uVar2 < 0) {
      if ((int)uVar2 == -0x7ffd5991) {
        print_tty("sceNpBasicGetFriendListEntryCount() busy 0x%x\n",uVar2);
      }
      else {
        print_tty("sceNpBasicGetFriendListEntryCount() error 0x%x\n",uVar2);
        param_1[1] = 0;
        *param_1 = 2;
        print_tty2("NetManager shutting down ...\n");
        sce::sceNpBasicUnregisterHandler();
        sce::sceNpManagerUnregisterCallback();
        cell::cellSslEnd();
        sys::sys_net_finalize_network();
        print_tty2("NetManager shutdown\n");
      }
    }
    else {
      uVar3 = param_1[0xc008];
      if (0x100 < uVar3) {
        uVar3 = 0x100;
        param_1[0xc008] = 0x100;
      }
      if (uVar3 != 0) {
        uVar10 = 0;
        do {
          puVar6 = param_1 + uVar10 * 0x8e + 0x14e0b;
          sce::sceNpBasicGetFriendListEntry(uVar10,puVar6);
          puVar4 = param_1 + uVar10 * 0x8e + 0x14e14;
          libc::memset(puVar4,0,0x20c);
          *puVar4 = 0x20c;
          sce::sceNpBasicGetFriendPresenceByNpId2(puVar6,puVar4,0);
          uVar5 = FUN_00503554(puVar6);
          uVar3 = param_1[0xc008];
          uVar11 = uVar10 + 1;
          param_1[uVar10 * 0x8e + 0x14e09] = uVar5;
          uVar10 = uVar11;
        } while (uVar11 < uVar3);
      }
      if (uVar3 != 0) {
        *(undefined1 *)(param_1 + 0x1dc97) = 1;
      }
      param_1[1] = 8;
    }
  }
  else if (iVar1 == 6) {
    sce::sceNpManagerGetStatus(local_70);
    uVar2 = sce::sceNpManagerGetStatus(local_70);
    if ((int)uVar2 < 0) {
      print_tty("sceNpManagerGetStatus failed 0x%x\n",uVar2);
      param_1[1] = 0;
      *param_1 = 2;
      print_tty2("NetManager shutting down ...\n");
      sce::sceNpBasicUnregisterHandler();
      sce::sceNpManagerUnregisterCallback();
      cell::cellSslEnd();
      sys::sys_net_finalize_network();
      print_tty2("NetManager shutdown\n");
    }
  }
  return;
}



//==== 004f8c68  ns=Global  size=0x13c
// sig: undefined FUN_004f8c68(void)
// callers(0): 
// callees(7): 004ff6d0 print_tty; 005cccec libc::strcpy; 0064efc4 sce::sceNpLookupPollAsync; 0064f0c4 sce::sceNpLookupNpIdAsync; 0064f124 sce::sceNpLookupCreateTransactionCtx; 0064f164 sce::sceNpLookupDestroyTransactionCtx; 0064f504 cell::cellSysutilCheckCallback
// strings: 0065f3ac: 'sceNpLookupCreateTransactionCtx error 0x%x\n' | 0065f3dc: 'sceNpLookupNpId() error 0x%x\n'

int FUN_004f8c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_40 [4];
  undefined1 auStack_3c [28];
  
  uVar1 = sce::sceNpLookupCreateTransactionCtx(DAT_0159331c);
  if ((int)uVar1 < 0) {
    print_tty("sceNpLookupCreateTransactionCtx error 0x%x\n",uVar1);
    iVar4 = -0x7ffd5ef7;
  }
  else {
    libc::strcpy(auStack_3c,param_2,0x11);
    uVar2 = sce::sceNpLookupNpIdAsync(uVar1,auStack_3c,param_3,0,0);
    iVar4 = (int)uVar2;
    if (iVar4 < 0) {
      print_tty("sceNpLookupNpId() error 0x%x\n",uVar2);
    }
    else {
      cell::cellSysutilCheckCallback();
      while (iVar3 = sce::sceNpLookupPollAsync(uVar1,local_40), iVar3 == 1) {
        syscall();
        cell::cellSysutilCheckCallback(100);
      }
    }
    sce::sceNpLookupDestroyTransactionCtx(uVar1);
  }
  return iVar4;
}



//==== 004f8da4  ns=Global  size=0x10c
// sig: undefined FUN_004f8da4(void)
// callers(0): 
// callees(0): 

undefined * FUN_004f8da4(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == *(int *)(param_1 + 8)) {
    puVar1 = &DAT_015932e8;
  }
  else if (param_2 == *(int *)(param_1 + 0x77024)) {
    puVar1 = (undefined *)(param_1 + 0x7702c);
  }
  else {
    uVar3 = 0;
    iVar2 = param_1;
    if (*(uint *)(param_1 + 0x30020) != 0) {
      do {
        if (param_2 == *(int *)(iVar2 + 0x53824)) {
          return (undefined *)(param_1 + uVar3 * 0x238 + 0x5382c);
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x238;
      } while (uVar3 < *(uint *)(param_1 + 0x30020));
    }
    uVar3 = 0;
    iVar2 = param_1;
    if (*(uint *)(param_1 + 0x3001c) != 0) {
      do {
        if (param_2 == *(int *)(iVar2 + 0x30024)) {
          return (undefined *)(param_1 + uVar3 * 0x238 + 0x3002c);
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x238;
      } while (uVar3 < *(uint *)(param_1 + 0x3001c));
    }
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



//==== 004f8eb0  ns=Global  size=0xb8
// sig: undefined FUN_004f8eb0(void)
// callers(0): 
// callees(1): 00503554 FUN_00503554

undefined4 FUN_004f8eb0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_00503554(param_2);
  *(undefined4 *)(param_1 + 0x77024) = uVar2;
  lVar4 = 0x12;
  iVar3 = 0;
  do {
    uVar1 = *(undefined1 *)(iVar3 + param_2 + 1);
    *(undefined1 *)(param_1 + 0x7702c + iVar3) = *(undefined1 *)(param_2 + iVar3);
    *(undefined1 *)(iVar3 + param_1 + 0x7702c + 1) = uVar1;
    lVar4 = lVar4 + -1;
    iVar3 = iVar3 + 2;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x77028) = 0;
  return *(undefined4 *)(param_1 + 0x77024);
}



//==== 004f8f68  ns=Global  size=0x118
// sig: undefined FUN_004f8f68(void)
// callers(0): 
// callees(10): 004ff6d0 print_tty; 004ffc9c print_tty2; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset; 0064ee44 cell::cellSslEnd; 0064ef44 sce::sceNpManagerUnregisterCallback; 0064ef64 sce::sceNpBasicSetPresenceDetails2; 0064f024 sce::sceNpBasicUnregisterHandler; 0064fd24 sys::sys_net_finalize_network
// strings: 0065f3fc: '%i Chat\n' | 0065f40c: 'sceNpBasicSetPresenceDetails2() error 0x%x\n' | 0065f058: 'NetManager shutting down ...\n' | 0065f078: 'NetManager shutdown\n'

void FUN_004f8f68(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_250 [392];
  undefined1 auStack_c8 [128];
  undefined4 local_48;
  char acStack_40 [32];
  
  libc::memset(local_250,0,0x20c);
  libc::snprintf(acStack_40,"%i Chat\n",param_2);
  libc::memcpy(auStack_c8,acStack_40,0x20);
  local_48 = 0x20;
  uVar1 = sce::sceNpBasicSetPresenceDetails2(local_250,3);
  if ((int)uVar1 < 0) {
    print_tty("sceNpBasicSetPresenceDetails2() error 0x%x\n",uVar1);
    param_1[1] = 0;
    *param_1 = 2;
    print_tty2("NetManager shutting down ...\n");
    sce::sceNpBasicUnregisterHandler();
    sce::sceNpManagerUnregisterCallback();
    cell::cellSslEnd();
    sys::sys_net_finalize_network();
    print_tty2("NetManager shutdown\n");
  }
  return;
}



//==== 004f9080  ns=Global  size=0xb0
// sig: undefined FUN_004f9080(void)
// callers(0): 
// callees(2): 005caf74 FUN_005caf74; 005ccb28 FUN_005ccb28
// strings: 0065f438: 'Chat' (raw)

undefined8 FUN_004f9080(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x238;
  if (*(int *)(param_1 + 0x53854) == 2) {
    uVar1 = FUN_005caf74(param_1 + 0x539d8,0,10);
    *(undefined4 *)(param_1 + 0x53828) = uVar1;
    iVar2 = FUN_005ccb28(param_1 + 0x539da,&DAT_0065f438,4);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



//==== 004f9130  ns=Global  size=0x168
// sig: undefined FUN_004f9130(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 0064eee4 sce::sceNpBasicAddFriend
// strings: 0065f440: 'sceNpBasicAddFriend() error 0x%x\n'

bool FUN_004f9130(int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == *(int *)(param_1 + 8)) {
    puVar3 = &DAT_015932e8;
  }
  else if (param_2 == *(int *)(param_1 + 0x77024)) {
    puVar3 = (undefined *)(param_1 + 0x7702c);
  }
  else {
    uVar4 = 0;
    puVar3 = (undefined *)0x0;
    iVar5 = param_1;
    if (*(uint *)(param_1 + 0x30020) != 0) {
      do {
        if (param_2 == *(int *)(iVar5 + 0x53824)) {
          puVar3 = (undefined *)(param_1 + uVar4 * 0x238 + 0x5382c);
          goto LAB_004f9240;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x238;
      } while (uVar4 < *(uint *)(param_1 + 0x30020));
    }
    uVar4 = 0;
    iVar5 = param_1;
    if (*(uint *)(param_1 + 0x3001c) != 0) {
      do {
        if (param_2 == *(int *)(iVar5 + 0x30024)) {
          puVar3 = (undefined *)(param_1 + uVar4 * 0x238 + 0x3002c);
          break;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x238;
      } while (uVar4 < *(uint *)(param_1 + 0x3001c));
    }
  }
LAB_004f9240:
  uVar2 = sce::sceNpBasicAddFriend(puVar3,0,0xffffffff);
  bVar1 = -1 < (int)uVar2;
  if (!bVar1) {
    print_tty("sceNpBasicAddFriend() error 0x%x\n",uVar2);
  }
  return bVar1;
}



//==== 004f9298  ns=Global  size=0x158
// sig: undefined FUN_004f9298(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 0064eea4 sce::sceNpBasicAddBlockListEntry
// strings: 0065f464: 'sceNpBasicAddBlockListEntry() error 0x%x\n'

bool FUN_004f9298(int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == *(int *)(param_1 + 8)) {
    puVar3 = &DAT_015932e8;
  }
  else if (param_2 == *(int *)(param_1 + 0x77024)) {
    puVar3 = (undefined *)(param_1 + 0x7702c);
  }
  else {
    uVar4 = 0;
    puVar3 = (undefined *)0x0;
    iVar5 = param_1;
    if (*(uint *)(param_1 + 0x30020) != 0) {
      do {
        if (param_2 == *(int *)(iVar5 + 0x53824)) {
          puVar3 = (undefined *)(param_1 + uVar4 * 0x238 + 0x5382c);
          goto LAB_004f93a8;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x238;
      } while (uVar4 < *(uint *)(param_1 + 0x30020));
    }
    uVar4 = 0;
    iVar5 = param_1;
    if (*(uint *)(param_1 + 0x3001c) != 0) {
      do {
        if (param_2 == *(int *)(iVar5 + 0x30024)) {
          puVar3 = (undefined *)(param_1 + uVar4 * 0x238 + 0x3002c);
          break;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x238;
      } while (uVar4 < *(uint *)(param_1 + 0x3001c));
    }
  }
LAB_004f93a8:
  uVar2 = sce::sceNpBasicAddBlockListEntry(puVar3);
  bVar1 = -1 < (int)uVar2;
  if (!bVar1) {
    print_tty("sceNpBasicAddBlockListEntry() error 0x%x\n",uVar2);
  }
  return bVar1;
}



//==== 004f93f0  ns=Global  size=0x70
// sig: undefined FUN_004f93f0(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(1): 0064fd84 cell::cellNetCtlGetState

/* WARNING: Removing unreachable block (ram,0x004f9438) */

undefined1 FUN_004f93f0(int param_1)

{
  undefined1 local_20 [16];
  
  *(undefined1 *)(param_1 + 0x7725e) = 0;
  cell::cellNetCtlGetState(local_20);
  return *(undefined1 *)(param_1 + 0x7725e);
}



//==== 004f9460  ns=Global  size=0xc4
// sig: undefined FUN_004f9460(void)
// callers(0): 
// callees(0): 
// strings: 00662108: 'WwsJob_'

void FUN_004f9460(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[0x66] = 0x1fff;
  param_1[0x65] = 0xffffffff;
  param_1[100] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((int)param_1 + 0x19e) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((int)param_1 + 0x19f) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  param_1[0x74] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  puVar2 = PTR_PTR_0071a5e4;
  puVar1 = PTR_s_WwsJob__0071a5e0;
  param_1[99] = 1;
  param_1[5] = puVar2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0xa6;
  param_1[4] = puVar1;
  return;
}



//==== 004f9524  ns=Global  size=0xb8
// sig: undefined FUN_004f9524(void)
// callers(0): 
// callees(0): 

void FUN_004f9524(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  bVar1 = param_2 == (undefined4 *)0x0;
  param_1[100] = param_4;
  param_1[0x65] = param_5;
  if (bVar1) {
    *param_1 = 0;
    uVar3 = 0;
    param_1[1] = 0;
    if (bVar1) {
      return;
    }
  }
  else {
    *param_1 = param_2;
    uVar3 = (uint)((param_3 - 0x100U & 0xffffffff) /
                  ((longlong)param_5 * (longlong)param_4 & 0xffffffffU)) & 0xffffff80;
    param_1[1] = uVar3;
    if (bVar1) {
      return;
    }
  }
  iVar7 = 0;
  uVar4 = 0;
  param_2[0xc] = uVar3;
  *param_2 = 0;
  param_2[4] = 0;
  uVar3 = param_1[100];
  param_2[8] = 0;
  iVar2 = param_1[0x65];
  if (iVar2 != 0) {
    do {
      if (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        lVar5 = (uVar4 & 0xfffffff) << 4;
        do {
          iVar6 = (int)lVar5;
          lVar5 = lVar5 + 0x10;
          *(undefined4 *)((int)param_2 + iVar6 + 0x40) = 0;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar7 = iVar7 + 1;
      uVar4 = uVar4 + uVar3;
    } while (iVar7 != iVar2);
    return;
  }
  return;
}



//==== 004f95dc  ns=Global  size=0xc
// sig: undefined FUN_004f95dc(void)
// callers(1): 0064a35c FUN_0064a35c
// callees(0): 

void FUN_004f95dc(undefined4 *param_1,undefined4 param_2)

{
  *(undefined4 *)*param_1 = param_2;
  return;
}



//==== 004f95e8  ns=Global  size=0xc
// sig: undefined FUN_004f95e8(void)
// callers(1): 0064a35c FUN_0064a35c
// callees(0): 

void FUN_004f95e8(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x10) = param_2;
  return;
}



//==== 004f95f4  ns=Global  size=0x14
// sig: undefined FUN_004f95f4(void)
// callers(1): 0064d8bc FUN_0064d8bc
// callees(0): 

void FUN_004f95f4(int *param_1,int param_2)

{
  *(int *)(*param_1 + 0x20) = param_2 * param_1[100];
  return;
}



//==== 004f9608  ns=Global  size=0x28
// sig: undefined FUN_004f9608(void)
// callers(0): 
// callees(0): 

void FUN_004f9608(int *param_1,int param_2,longlong param_3)

{
  *(undefined4 *)
   (*param_1 + (int)(((longlong)param_2 * (longlong)param_1[100] + param_3 & 0xffffffffU) << 4) +
   0x40) = 0;
  return;
}



//==== 004f9630  ns=Global  size=0x38
// sig: undefined FUN_004f9630(void)
// callers(0): 
// callees(0): 

void FUN_004f9630(int *param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *param_1 +
          (int)((param_3 + (longlong)param_2 * (longlong)param_1[100] & 0xffffffffU) << 4);
  do {
  } while (*(int *)(iVar1 + 0x40) == -1);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  return;
}



//==== 004f9668  ns=Global  size=0x28
// sig: undefined FUN_004f9668(void)
// callers(0): 
// callees(0): 

int FUN_004f9668(int *param_1,int param_2,int param_3)

{
  return *param_1 + 0x100 + (param_2 * param_1[100] + param_3) * param_1[1];
}



//==== 004f9690  ns=Global  size=0x24
// sig: undefined FUN_004f9690(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004f9690(int *param_1,int param_2,longlong param_3)

{
  return *(undefined4 *)
          (*param_1 +
           (int)(((longlong)param_2 * (longlong)param_1[100] + param_3 & 0xffffffffU) << 4) + 0x40);
}



//==== 004f96b4  ns=Global  size=0x2c
// sig: undefined FUN_004f96b4(void)
// callers(0): 
// callees(0): 

void FUN_004f96b4(int *param_1,int param_2,longlong param_3)

{
  do {
  } while (*(int *)(*param_1 +
                    (int)((param_3 + (longlong)param_2 * (longlong)param_1[100] & 0xffffffffU) << 4)
                   + 0x40) == -1);
  return;
}



//==== 004f96e0  ns=Global  size=0x48
// sig: undefined FUN_004f96e0(void)
// callers(0): 
// callees(0): 

void FUN_004f96e0(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = param_1[100];
  if (iVar1 == 0) {
    return;
  }
  iVar3 = 0;
  lVar2 = ((longlong)param_2 * (longlong)iVar1 & 0xfffffffU) << 4;
  do {
    do {
    } while (*(int *)(*param_1 + (int)lVar2 + 0x40) == -1);
    iVar3 = iVar3 + 1;
    lVar2 = lVar2 + 0x10;
  } while (iVar1 != iVar3);
  return;
}



//==== 004f9728  ns=Global  size=0x18
// sig: undefined FUN_004f9728(void)
// callers(0): 
// callees(0): 

uint FUN_004f9728(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x198) - param_2;
  *(uint *)(param_1 + 0x198) = uVar1;
  return uVar1 & 0xffff;
}



//==== 004f9740  ns=Global  size=0x3c
// sig: undefined FUN_004f9740(void)
// callers(0): 
// callees(0): 

void FUN_004f9740(int param_1,undefined2 param_2,short param_3,undefined4 param_4,undefined4 param_5
                 )

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18c);
  *(uint *)(param_1 + 0x18c) = uVar1 + 1;
  param_1 = uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4 + param_1;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  *(short *)(param_1 + 0xe) = param_3 + -1;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}



//==== 004f977c  ns=Global  size=0x7c
// sig: undefined FUN_004f977c(void)
// callers(0): 
// callees(0): 

void FUN_004f977c(int param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  
  if (*(uint *)(param_1 + 0x18c) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x18c);
    param_2 = param_2 & 0xffff;
    puVar3 = (ushort *)(param_1 + 0xc);
    do {
      uVar1 = *puVar3;
      iVar2 = *(int *)(puVar3 + 4);
      if ((uVar1 <= param_2) && (param_2 <= puVar3[1])) {
        *param_3 = *(undefined4 *)(puVar3 + 2);
        *param_4 = *(undefined4 *)((int)((param_2 - uVar1 & 0xffffffff) << 2) + iVar2);
        return;
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 6;
    } while (uVar4 != 0);
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}



//==== 004f97f8  ns=Global  size=0x28
// sig: undefined FUN_004f97f8(void)
// callers(0): 
// callees(0): 

void FUN_004f97f8(int param_1,undefined1 param_2)

{
  if (0xff < (uint)((int)*(undefined1 **)(param_1 + 0x100) - param_1)) {
    return;
  }
  **(undefined1 **)(param_1 + 0x100) = param_2;
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return;
}



//==== 004f9820  ns=Global  size=0x44
// sig: undefined FUN_004f9820(void)
// callers(0): 
// callees(0): 

void FUN_004f9820(int param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = (ulonglong)param_2;
  do {
    if ((uint)((int)*(undefined1 **)(param_1 + 0x100) - param_1) < 0x100) {
      **(undefined1 **)(param_1 + 0x100) = 0x20;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



//==== 004f9864  ns=Global  size=0x48
// sig: undefined FUN_004f9864(void)
// callers(0): 
// callees(0): 

void FUN_004f9864(int param_1,int param_2)

{
  ulonglong uVar1;
  
  if (0x38U - param_2 == 0) {
    return;
  }
  uVar1 = (ulonglong)(0x38U - param_2);
  do {
    if ((uint)((int)*(undefined1 **)(param_1 + 0x100) - param_1) < 0x100) {
      **(undefined1 **)(param_1 + 0x100) = 0x20;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



//==== 004f98ac  ns=Global  size=0x160
// sig: undefined FUN_004f98ac(void)
// callers(0): 
// callees(0): 

void FUN_004f98ac(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar3 = (int)((param_3 & 0xffffffff) << 2);
  iVar4 = (int)param_1;
  iVar2 = iVar4 + iVar3 + 0x1b0;
  lVar9 = (param_3 & 0x7fffff) * 0x200;
  iVar5 = (int)lVar9 + iVar4;
  *(undefined8 *)
   (iVar4 + (int)(((param_3 & 0x3ffffff) * 0x40 + (ulonglong)*(uint *)(iVar2 + 0xc) & 0xffffffff) <<
                 3) + 0x1d8) = param_2;
  iVar7 = *(int *)(iVar2 + 0xc) + 1;
  *(int *)(iVar2 + 0xc) = iVar7;
  uVar8 = ((ulonglong)*(byte *)(iVar5 + 0x1dc) << 0x20) >> 0x25;
  bVar1 = *(byte *)(iVar5 + 0x1dc) >> 5 == 7;
  if (bVar1) {
    uVar8 = (ulonglong)*(ushort *)(iVar5 + 0x1de);
  }
  if ((int)uVar8 + 1 != iVar7) {
    return;
  }
  uVar6 = (ulonglong)(*(longlong *)(iVar5 + 0x1d8) << 0x20) >> 0x30 & 0x1fff;
  if ((int)uVar6 != 0) {
    (*(code *)*param_4)(param_1 & 0xffffffff,param_3 & 0xffffffff,uVar6,
                        *(undefined4 *)(iVar5 + 0x1d8),!bVar1,*(undefined2 *)(iVar5 + 0x1de),uVar8,
                        lVar9 + param_1 + 0x1e0 & 0xffffffff);
  }
  *(undefined4 *)(iVar4 + iVar3 + 0x1bc) = 0;
  return;
}



//==== 004f9a0c  ns=Global  size=0x30
// sig: undefined FUN_004f9a0c(void)
// callers(1): 004f1c18 FUN_004f1c18
// callees(0): 

void FUN_004f9a0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(int *)(param_1 + *(int *)(param_2 + 8) * 4 + 0xdd8) = param_2;
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



//==== 004f9a3c  ns=Global  size=0x21c
// sig: undefined FUN_004f9a3c(void)
// callers(1): 004f9c74 FUN_004f9c74
// callees(1): 004f4df0 FUN_004f4df0
// strings: 00662168: '***NOTE: SPU%d Audit buffer overflowed.  Data lost.\n' | 006621a0: '***NOTE: SPU%d Audit buffer filled.  Data may have been lost.\n' | 00662110: 'No audits to print for SPU%d\n' | 00662130: 'Printing Audits buffer for SPU%d (baseTime=0x%08X):\n'

void FUN_004f9a3c(uint *param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5,
                 int param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  uVar7 = param_3 + (longlong)param_2 * (longlong)(int)param_1[100];
  iVar8 = *param_1 + (int)((uVar7 & 0xffffffff) << 4);
  do {
  } while (*(int *)(iVar8 + 0x40) == -1);
  uVar3 = *(uint *)(iVar8 + 0x40);
  uVar10 = (ulonglong)uVar3;
  if (param_4 != 0) {
    if (uVar3 == 0) {
      if (param_6 == 1) {
        FUN_004f4df0(PTR_s_No_audits_to_print_for_SPU_d_0071a5e8,param_3 & 0xffffffff);
        return;
      }
    }
    else {
      bVar1 = param_6 == 1;
      uVar7 = (ulonglong)*param_1 + 0x100 + (longlong)(int)uVar7 * (longlong)(int)param_1[1];
      plVar6 = (longlong *)uVar7;
      if (bVar1) {
        FUN_004f4df0(PTR_s_Printing_Audits_buffer_for_SPU_d_0071a5ec,param_3 & 0xffffffff,
                     *(undefined4 *)plVar6);
        return;
      }
      uVar9 = uVar7 + ((ulonglong)param_1[1] & 0xfffffff8);
      if ((uVar7 & 0xffffffff) < (uVar9 & 0xffffffff)) {
        iVar8 = 0;
        while( true ) {
          iVar8 = iVar8 + 1;
          plVar6 = (longlong *)uVar7;
          lVar4 = *plVar6;
          uVar11 = (ulonglong)(lVar4 << 0x20) >> 0x3d;
          uVar5 = (ulonglong)(lVar4 << 0x20) >> 0x30 & 0x1fff;
          bVar2 = (uint)lVar4 >> 0x1d != 7;
          if (!bVar2) {
            uVar11 = (ulonglong)(ushort)*plVar6;
          }
          if ((uVar9 & 0xffffffff) < (uVar11 * 8 + uVar7 + 8 & 0xffffffff)) break;
          uVar7 = uVar7 + 8 + uVar11 * 8;
          plVar6 = (longlong *)uVar7;
          if ((int)uVar5 != 0) {
            (*(code *)*param_5)(param_1,param_3 & 0xffffffff);
          }
          uVar10 = (uVar10 - uVar11) - 1;
          if (param_4 == iVar8) {
            return;
          }
          if (((uVar9 & 0xffffffff) <= (uVar7 & 0xffffffff)) || ((int)uVar10 == 0))
          goto LAB_004f9bd8;
        }
        if (bVar1) {
          FUN_004f4df0(PTR_s____NOTE__SPU_d_Audit_buffer_over_0071a5f0,param_3 & 0xffffffff,uVar5,
                       *(undefined4 *)plVar6,bVar2,(short)*plVar6,uVar11,uVar7 + 8 & 0xffffffff);
          return;
        }
      }
LAB_004f9bd8:
      if (((longlong *)uVar9 == plVar6) && (bVar1)) {
        FUN_004f4df0(PTR_s____NOTE__SPU_d_Audit_buffer_fill_0071a5f4,param_3 & 0xffffffff);
        return;
      }
    }
  }
  return;
}



//==== 004f9c74  ns=Global  size=0xe4
// sig: undefined FUN_004f9c74(void)
// callers(1): 0064a104 FUN_0064a104
// callees(2): 004f4df0 FUN_004f4df0; 004f9a3c FUN_004f9a3c
// strings: 006621e0: 'Processing audit buffer (0x%X)\n'

void FUN_004f9c74(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_4 != 1) {
    if (param_1[100] != 0) {
      uVar1 = 0;
      do {
        uVar2 = uVar1 + 1;
        FUN_004f9a3c(param_1,param_2,uVar1,0xffffffff,param_3,param_4,param_5);
        uVar1 = uVar2;
      } while (uVar2 < (uint)param_1[100]);
    }
    return;
  }
  FUN_004f4df0(PTR_s_Processing_audit_buffer__0x_X__0071a5f8,*param_1);
  return;
}



//==== 004f9d60  ns=Global  size=0x70
// sig: undefined FUN_004f9d60(void)
// callers(0): 
// callees(1): 004f4df0 FUN_004f4df0

void FUN_004f9d60(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x100);
  if ((uint)((int)puVar1 - param_1) < 0x100) {
    *puVar1 = 10;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    puVar1 = *(undefined1 **)(param_1 + 0x100);
  }
  if ((uint)((int)puVar1 - param_1) < 0x100) {
    *puVar1 = 0;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  FUN_004f4df0(param_1);
  return;
}



//==== 004f9dec  ns=Global  size=0x10
// sig: undefined FUN_004f9dec(void)
// callers(0): 
// callees(1): 004f4df0 FUN_004f4df0

void FUN_004f9dec(void)

{
  FUN_004f4df0();
  return;
}



//==== 004f9e10  ns=Global  size=0x80
// sig: undefined FUN_004f9e10(void)
// callers(1): 004fa800 FUN_004fa800
// callees(1): 005c8a94 FUN_005c8a94

int FUN_004f9e10(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  iVar1 = FUN_005c8a94(*(undefined4 *)(param_1 + 0x100),
                       0x100 - (*(int *)(param_1 + 0x100) - param_1),param_2,&stack0x00000040);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + iVar1;
  return iVar1;
}



//==== 004f9e90  ns=Global  size=0x54
// sig: undefined FUN_004f9e90(void)
// callers(2): 0064a104 FUN_0064a104; 0064a35c FUN_0064a35c
// callees(0): 

void FUN_004f9e90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[100];
  if (iVar1 == 0) {
    return;
  }
  iVar2 = *param_1;
  iVar5 = 0;
  uVar3 = (longlong)param_2 * (longlong)iVar1;
  do {
    iVar4 = iVar2 + (int)((uVar3 & 0xffffffff) << 4);
    do {
    } while (*(int *)(iVar4 + 0x40) == -1);
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    uVar3 = uVar3 + 1;
  } while (iVar1 != iVar5);
  return;
}



//==== 004f9ee4  ns=Global  size=0x1e0
// sig: undefined FUN_004f9ee4(void)
// callers(0): 
// callees(5): 005c4f10 FUN_005c4f10; 005c52f0 FUN_005c52f0; 005c5638 FUN_005c5638; 005cccec libc::strcpy; 0064fa44 cell::cellSpursGetInfo

void FUN_004f9ee4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  int iStack_2b4;
  undefined1 auStack_270 [288];
  undefined1 local_150 [32];
  undefined1 auStack_130 [264];
  
  if (param_1[0x65] != 0) {
    uVar1 = param_1[100];
    iVar6 = 0;
    uVar7 = 0;
    do {
      if (uVar1 != 0) {
        uVar8 = 0;
        lVar9 = (uVar7 & 0xfffffff) << 4;
        do {
          do {
          } while (*(int *)(*param_1 + (int)lVar9 + 0x40) == -1);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x10;
        } while (uVar1 != uVar8);
      }
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 + uVar1;
    } while (iVar6 != param_1[0x65]);
  }
  cell::cellSpursGetInfo(param_2,auStack_270);
  piVar10 = param_1 + 0x376;
  iVar6 = 0;
  do {
    while( true ) {
      puVar4 = local_150 + iVar6 * 0x10 + 0x20;
      if (*piVar10 != 0) break;
      iVar6 = iVar6 + 1;
      libc::strcpy(puVar4,*(undefined4 *)(iStack_2b4 + -0x7d2c),0x10);
      piVar10 = piVar10 + 1;
      if (iVar6 == 0x10) goto LAB_004fa038;
    }
    iVar6 = iVar6 + 1;
    libc::strcpy(puVar4,*piVar10 + 0x10,0x10);
    piVar10 = piVar10 + 1;
  } while (iVar6 != 0x10);
LAB_004fa038:
  iVar6 = param_1[0x65];
  iVar2 = param_1[100];
  iVar3 = param_1[1];
  uVar5 = FUN_005c52f0(param_3,*(undefined4 *)(iStack_2b4 + -0x7d28));
  FUN_005c5638(local_150,0x120,1,uVar5);
  FUN_005c5638(*param_1,iVar2 * iVar6 * iVar3 + 0x100,1,uVar5);
  FUN_005c4f10(uVar5);
  return;
}



//==== 004fa0c4  ns=Global  size=0x54
// sig: undefined FUN_004fa0c4(void)
// callers(0): 
// callees(0): 

uint FUN_004fa0c4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18c);
  uVar3 = *(int *)(param_1 + 0x198) - param_2;
  iVar2 = uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4 + param_1;
  *(uint *)(param_1 + 0x198) = uVar3;
  *(uint *)(param_1 + 0x18c) = uVar1 + 1;
  *(undefined4 *)(iVar2 + 0x14) = param_4;
  *(short *)(iVar2 + 0xe) = (short)uVar3 + (short)param_2 + -1;
  *(undefined4 *)(iVar2 + 0x10) = param_3;
  *(short *)(iVar2 + 0xc) = (short)uVar3;
  return uVar3 & 0xffff;
}



//==== 004fa118  ns=Global  size=0x1cc
// sig: undefined FUN_004fa118(void)
// callers(0): 
// callees(0): 

void FUN_004fa118(ulonglong param_1,undefined4 param_2,ulonglong param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar8;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar2 = (int)((param_3 & 0x3fffffff) << 2);
  lVar12 = (param_3 & 0x7fffff) * 0x200;
  iVar11 = (int)param_3 + 400;
  iVar6 = (int)param_1;
  iVar5 = (int)lVar12 + iVar6;
  iVar3 = iVar6 + iVar2 + 0x1b0;
  iVar9 = iVar6 + iVar11;
  iVar4 = iVar6 + iVar2 + 0x1a0;
  if (*(char *)(iVar9 + 0xc) == '\0') {
    *(undefined1 *)(iVar9 + 0xc) = 1;
    *(undefined4 *)(iVar4 + 4) = param_2;
    return;
  }
  *(ulonglong *)
   (iVar6 + (int)(((param_3 & 0x3ffffff) * 0x40 + (ulonglong)*(uint *)(iVar3 + 0xc) & 0xffffffff) <<
                 3) + 0x1d8) = CONCAT44(*(undefined4 *)(iVar4 + 4),param_2);
  iVar9 = *(int *)(iVar3 + 0xc) + 1;
  *(int *)(iVar3 + 0xc) = iVar9;
  uVar10 = ((ulonglong)*(byte *)(iVar5 + 0x1dc) << 0x20) >> 0x25;
  uVar8 = (uint)(*(byte *)(iVar5 + 0x1dc) >> 5);
  bVar1 = uVar8 == 7;
  if (bVar1) {
    uVar10 = (ulonglong)*(ushort *)(iVar5 + 0x1de);
    uVar8 = (uint)*(ushort *)(iVar5 + 0x1de);
  }
  if (uVar8 + 1 == iVar9) {
    uVar7 = (ulonglong)(*(longlong *)(iVar5 + 0x1d8) << 0x20) >> 0x30 & 0x1fff;
    if ((int)uVar7 != 0) {
      (*(code *)*param_4)(param_1 & 0xffffffff,param_3 & 0xffffffff,uVar7,
                          *(undefined4 *)(iVar5 + 0x1d8),!bVar1,*(undefined2 *)(iVar5 + 0x1de),
                          uVar10,lVar12 + param_1 + 0x1e0 & 0xffffffff);
    }
    *(undefined4 *)(iVar6 + iVar2 + 0x1bc) = 0;
  }
  *(undefined1 *)(iVar6 + iVar11 + 0xc) = 0;
  return;
}



//==== 004fa2e4  ns=Global  size=0x168
// sig: undefined FUN_004fa2e4(void)
// callers(0): 
// callees(0): 
// strings: 00662108: 'WwsJob_'

void FUN_004fa2e4(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  param_1[0x66] = 0x1fff;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((int)param_1 + 0x19e) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((int)param_1 + 0x19f) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  param_1[0x74] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0xa6;
  puVar3 = PTR_s_WwsJob__0071a5e0;
  bVar1 = param_2 == (undefined4 *)0x0;
  param_1[5] = PTR_PTR_0071a5e4;
  param_1[4] = puVar3;
  param_1[99] = 1;
  param_1[100] = param_4;
  param_1[0x65] = param_5;
  if (bVar1) {
    *param_1 = 0;
    uVar4 = 0;
    param_1[1] = 0;
    if (bVar1) {
      return;
    }
  }
  else {
    *param_1 = param_2;
    uVar4 = (uint)((param_3 - 0x100U & 0xffffffff) /
                  ((longlong)param_5 * (longlong)param_4 & 0xffffffffU)) & 0xffffff80;
    param_1[1] = uVar4;
    if (bVar1) {
      return;
    }
  }
  iVar7 = 0;
  uVar8 = 0;
  param_2[0xc] = uVar4;
  *param_2 = 0;
  param_2[4] = 0;
  uVar4 = param_1[100];
  param_2[8] = 0;
  iVar2 = param_1[0x65];
  if (iVar2 == 0) {
    return;
  }
  do {
    if (uVar4 != 0) {
      uVar9 = (ulonglong)uVar4;
      lVar5 = (uVar8 & 0xfffffff) << 4;
      do {
        iVar6 = (int)lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined4 *)((int)param_2 + iVar6 + 0x40) = 0;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    iVar7 = iVar7 + 1;
    uVar8 = uVar8 + uVar4;
  } while (iVar2 != iVar7);
  return;
}



//==== 004fa44c  ns=Global  size=0x168
// sig: undefined FUN_004fa44c(void)
// callers(0): 
// callees(0): 
// strings: 00662108: 'WwsJob_'

void FUN_004fa44c(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  param_1[0x66] = 0x1fff;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((int)param_1 + 0x19e) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((int)param_1 + 0x19f) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  param_1[0x74] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0xa6;
  puVar3 = PTR_s_WwsJob__0071a5e0;
  bVar1 = param_2 == (undefined4 *)0x0;
  param_1[5] = PTR_PTR_0071a5e4;
  param_1[4] = puVar3;
  param_1[99] = 1;
  param_1[100] = param_4;
  param_1[0x65] = param_5;
  if (bVar1) {
    *param_1 = 0;
    uVar4 = 0;
    param_1[1] = 0;
    if (bVar1) {
      return;
    }
  }
  else {
    *param_1 = param_2;
    uVar4 = (uint)((param_3 - 0x100U & 0xffffffff) /
                  ((longlong)param_5 * (longlong)param_4 & 0xffffffffU)) & 0xffffff80;
    param_1[1] = uVar4;
    if (bVar1) {
      return;
    }
  }
  iVar7 = 0;
  uVar8 = 0;
  param_2[0xc] = uVar4;
  *param_2 = 0;
  param_2[4] = 0;
  uVar4 = param_1[100];
  param_2[8] = 0;
  iVar2 = param_1[0x65];
  if (iVar2 == 0) {
    return;
  }
  do {
    if (uVar4 != 0) {
      uVar9 = (ulonglong)uVar4;
      lVar5 = (uVar8 & 0xfffffff) << 4;
      do {
        iVar6 = (int)lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined4 *)((int)param_2 + iVar6 + 0x40) = 0;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    iVar7 = iVar7 + 1;
    uVar8 = uVar8 + uVar4;
  } while (iVar2 != iVar7);
  return;
}



//==== 004fa5b4  ns=Global  size=0xc4
// sig: undefined FUN_004fa5b4(void)
// callers(1): 00649a5c FUN_00649a5c
// callees(0): 
// strings: 00662108: 'WwsJob_'

void FUN_004fa5b4(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[0x66] = 0x1fff;
  param_1[0x65] = 0xffffffff;
  param_1[100] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((int)param_1 + 0x19e) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((int)param_1 + 0x19f) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  param_1[0x74] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  puVar2 = PTR_PTR_0071a5e4;
  puVar1 = PTR_s_WwsJob__0071a5e0;
  param_1[99] = 1;
  param_1[5] = puVar2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0xa6;
  param_1[4] = puVar1;
  return;
}



//==== 004fa678  ns=Global  size=0xc4
// sig: undefined FUN_004fa678(void)
// callers(0): 
// callees(0): 
// strings: 00662108: 'WwsJob_'

void FUN_004fa678(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[0x66] = 0x1fff;
  param_1[0x65] = 0xffffffff;
  param_1[100] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((int)param_1 + 0x19e) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((int)param_1 + 0x19f) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  param_1[0x74] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  puVar2 = PTR_PTR_0071a5e4;
  puVar1 = PTR_s_WwsJob__0071a5e0;
  param_1[99] = 1;
  param_1[5] = puVar2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0xa6;
  param_1[4] = puVar1;
  return;
}



//==== 004fa73c  ns=Global  size=0xc4
// sig: undefined FUN_004fa73c(void)
// callers(1): 0064a35c FUN_0064a35c
// callees(0): 
// strings: 00662108: 'WwsJob_'

void FUN_004fa73c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[0x66] = 0x1fff;
  param_1[0x65] = 0xffffffff;
  param_1[100] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((int)param_1 + 0x19e) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((int)param_1 + 0x19f) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  param_1[0x74] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  puVar2 = PTR_PTR_0071a5e4;
  puVar1 = PTR_s_WwsJob__0071a5e0;
  param_1[99] = 1;
  param_1[5] = puVar2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0xa6;
  param_1[4] = puVar1;
  return;
}



//==== 004fa800  ns=Global  size=0xb94
// sig: undefined FUN_004fa800(void)
// callers(0): 
// callees(6): 004f4df0 FUN_004f4df0; 004f9e10 FUN_004f9e10; 005c8510 libc::strlen; 005cccec libc::strcpy; 005cd198 FUN_005cd198; 005d0140 libc::memset
// strings: 00662218: 'SPU%d: %08X UNKNOWN AUDIT (Id = 0x%03x)' | 00662250: '0x%08X_%08X ' | 00662260: 'SPU%d: %08X %s%s' | 00662240: '0x%04X ' | 00662278: '%%%02dX' | 004fb084: '}d[x9k' (raw) | 00662290: '%%c%%%02dX' | 006622b8: '%13.6e' | 00662280: '%%08X_%%%02dX' | 004fb28c: '|\nHPy+' (raw) | 006622c0: '%s%03X:' | 006622d8: '%08X_%08X' | 006622a0: '%%c%%08X_%%%02dX' | 006622c8: '_%08X_%08X' | 006622e8: '  %08X_%08X'

/* WARNING: Type propagation algorithm not settling */

void FUN_004fa800(int param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,uint param_5,
                 ushort param_6,uint param_7,ulonglong *param_8)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *__s;
  undefined *puVar4;
  ushort *puVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar11;
  longlong lVar10;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 local_1f0 [42];
  undefined1 auStack_1c6 [42];
  undefined1 local_19c [256];
  undefined1 *local_9c;
  float local_90;
  double local_88;
  
  param_3 = param_3 & 0xffff;
  local_9c = local_19c;
  if (*(uint *)(param_1 + 0x18c) != 0) {
    uVar22 = (ulonglong)*(uint *)(param_1 + 0x18c);
    puVar5 = (ushort *)(param_1 + 0xc);
    do {
      pcVar9 = *(char **)(puVar5 + 2);
      if ((*puVar5 <= param_3) && (param_3 <= puVar5[1])) {
        __s = *(char **)((int)((param_3 - *puVar5 & 0xffffffff) << 2) + *(int *)(puVar5 + 4));
        if (pcVar9 != (char *)0x0) {
          uVar14 = 0;
          sVar7 = libc::strlen(__s);
          local_1f0[0] = *PTR_DAT_0071a614;
          libc::memset(local_1f0 + 1,0,0x50);
          iVar6 = 0;
          if (*__s == '\n') {
            puVar12 = local_9c + 1;
            local_19c[0] = 10;
            if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
              *puVar12 = 0;
              puVar12 = local_9c + 2;
            }
            local_9c = puVar12;
            FUN_004f4df0(local_19c);
            return;
          }
          cVar1 = *__s;
          pcVar11 = __s;
          goto joined_r0x004fabfc;
        }
        break;
      }
      uVar22 = uVar22 - 1;
      puVar5 = puVar5 + 6;
    } while (uVar22 != 0);
  }
  iVar6 = FUN_004f9e10(local_19c,PTR_s_SPU_d___08X_UNKNOWN_AUDIT__Id___0_0071a604,param_2,param_4,
                       (int)param_3);
  if (0x38U - iVar6 != 0) {
    uVar22 = (ulonglong)(0x38U - iVar6);
    puVar12 = local_9c;
    do {
      if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
        *puVar12 = 0x20;
        local_9c = local_9c + 1;
        puVar12 = local_9c;
      }
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if ((param_5 & 0xff) != 0) {
    FUN_004f9e10(local_19c,PTR_s_0x_04X_0071a608,param_6);
  }
  puVar4 = PTR_s_0x_08X__08X_0071a610;
  if ((param_7 & 0xffff) != 0) {
    uVar20 = 0;
    uVar22 = 0;
    do {
      uVar14 = (int)local_9c - (int)local_19c;
      uVar22 = *(ulonglong *)((int)(uVar22 << 3) + (int)param_8);
      if (0x8b < uVar14 + 0x14) {
        puVar12 = local_9c;
        if (uVar14 < 0x100) {
          *local_9c = 10;
          puVar12 = local_9c + 1;
          if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
            *puVar12 = 0;
            puVar12 = local_9c + 2;
          }
        }
        local_9c = puVar12;
        FUN_004f4df0(local_19c);
        return;
      }
      uVar20 = uVar20 + 1;
      FUN_004f9e10(local_19c,puVar4,uVar22 >> 0x20,uVar22 & 0xffffffff);
      uVar22 = uVar20 & 0xffff;
    } while ((param_7 & 0xffff) != (uint)uVar22);
  }
  puVar12 = local_9c;
  if ((uint)((int)local_9c - (int)local_19c) < 0x100) {
    *local_9c = 10;
    puVar12 = local_9c + 1;
    if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
      *puVar12 = 0;
      puVar12 = local_9c + 2;
    }
  }
  local_9c = puVar12;
  FUN_004f4df0(local_19c);
  return;
joined_r0x004fabfc:
  if (cVar1 == ':') {
    if (-1 < iVar6) {
      uVar14 = iVar6 + 1;
      libc::strcpy(local_1f0,__s,uVar14);
      sVar8 = libc::strlen(pcVar9);
      iVar13 = (-uVar14 - sVar8) + 0x29;
      if (0 < iVar13) {
        puVar12 = local_1f0 + uVar14;
        do {
          *puVar12 = 0x20;
          iVar13 = iVar13 + -1;
          puVar12 = puVar12 + 1;
        } while (iVar13 != 0);
        auStack_1c6[(-uVar14 - sVar8) + uVar14 + -1] = 0;
      }
      pcVar11 = __s + iVar6;
      while( true ) {
        pcVar11 = pcVar11 + 1;
        cVar1 = *pcVar11;
        if (((cVar1 != '\t') && (cVar1 != ' ')) && (cVar1 != ',')) break;
        uVar14 = uVar14 + 1;
      }
    }
LAB_004fac4c:
    FUN_004f9e10(local_19c,PTR_s_SPU_d___08X__s_s_0071a618,param_2,param_4,pcVar9,local_1f0);
    if (param_5 == 0) {
      uVar22 = *param_8;
      param_8 = param_8 + 1;
      lVar16 = 0x40;
    }
    else {
      uVar22 = (ulonglong)param_6 << 0x30;
      param_7 = param_7 + 1;
      lVar16 = 0x10;
    }
    do {
      if (sVar7 <= uVar14) {
        puVar12 = local_9c;
        if ((uint)((int)local_9c - (int)local_19c) < 0x100) {
          *local_9c = 10;
          puVar12 = local_9c + 1;
          if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
            *puVar12 = 0;
            puVar12 = local_9c + 2;
          }
        }
        local_9c = puVar12;
        FUN_004f4df0(local_19c);
        return;
      }
      pcVar11 = __s + uVar14;
      pcVar9 = pcVar11 + 1;
      cVar1 = *pcVar11;
      if (cVar1 == '\n') {
        puVar12 = local_9c;
        if ((uint)((int)local_9c - (int)local_19c) < 0x100) {
          *local_9c = 10;
          puVar12 = local_9c + 1;
          if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
            *puVar12 = 0;
            puVar12 = local_9c + 2;
          }
        }
        local_9c = puVar12;
        FUN_004f4df0(local_19c);
        return;
      }
      uVar17 = uVar14;
      if (cVar1 == 'p') {
        if (*pcVar9 != 'a') goto LAB_004facd8;
        if (pcVar11[2] != 'd') goto LAB_004facd8;
        uVar17 = uVar14 + 3;
        pcVar9 = __s + uVar17;
        cVar1 = *pcVar9;
        if ((byte)(cVar1 - 0x30U) < 7) {
          pcVar11 = pcVar9 + 1;
          uVar17 = uVar14 + 5;
          pcVar9 = __s + uVar17;
          uVar20 = (((longlong)cVar1 & 0x7fffffffU) * 2 + ((longlong)cVar1 & 0x1fffffffU) * 8 +
                   (longlong)*pcVar11) - 0x210;
          lVar16 = lVar16 - uVar20;
          uVar22 = uVar22 << (uVar20 & 0x7f);
        }
        else {
          lVar16 = 0;
        }
        while( true ) {
          cVar1 = *pcVar9;
          if (((cVar1 != '\t') && (cVar1 != ' ')) && (cVar1 != ',')) break;
          uVar17 = uVar17 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcVar11 = __s + uVar17;
        uVar14 = uVar17;
      }
      else {
        while (cVar1 != '=') {
          if (cVar1 == '\0') {
            uVar19 = -uVar14;
            iVar6 = uVar19 - 1;
            libc::strcpy(local_1f0,pcVar11,uVar19);
            goto joined_r0x004fae84;
          }
LAB_004facd8:
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          uVar17 = uVar17 + 1;
        }
        iVar6 = uVar17 - uVar14;
        uVar19 = iVar6 + 1;
        libc::strcpy(local_1f0,pcVar11,uVar19);
joined_r0x004fae84:
        if ((uVar19 == 2) && (*pcVar11 == '_')) {
          local_1f0[1] = 0;
          FUN_004f9e10(local_19c,local_1f0);
          pcVar11 = __s + uVar14 + 2;
          cVar1 = *pcVar11;
          cVar2 = pcVar11[1];
          cVar3 = pcVar11[2];
        }
        else {
          local_1f0[uVar19] = 0;
          FUN_004f9e10(local_19c,local_1f0);
          pcVar11 = __s + uVar14 + uVar19;
          cVar1 = *pcVar11;
          cVar2 = pcVar11[1];
          cVar3 = pcVar11[2];
        }
        uVar17 = uVar14 + uVar19;
        if (cVar1 == 'U') {
          lVar10 = ((longlong)cVar2 & 0x7fffffffU) * 2 + ((longlong)cVar2 & 0x1fffffffU) * 8 +
                   (longlong)cVar3;
          uVar21 = lVar10 - 0x210;
          uVar20 = uVar22 >> (0x40 - uVar21 & 0x7f);
          iVar6 = (int)lVar10;
          if ((int)uVar21 < 0x21) {
            FUN_005cd198(local_1f0,0x51,PTR_s____02dX_0071a61c,iVar6 + -0x20d >> 2);
            FUN_004f9e10(local_19c,local_1f0,uVar20);
          }
          else {
            FUN_005cd198(local_1f0,0x51,PTR_s___08X____02dX_0071a620,iVar6 + -0x22d >> 2);
            FUN_004f9e10(local_19c,local_1f0,uVar20 >> 0x20,uVar20 & 0xffffffff);
          }
          uVar17 = uVar17 + 3;
          lVar16 = lVar16 - uVar21;
          pcVar11 = __s + uVar17;
          uVar22 = uVar22 << (uVar21 & 0x7f);
          uVar14 = uVar17;
          pcVar9 = pcVar11;
        }
        else if (cVar1 == 'I') {
          uVar18 = 0x2b;
          lVar10 = ((longlong)cVar2 & 0x7fffffffU) * 2 + ((longlong)cVar2 & 0x1fffffffU) * 8 +
                   (longlong)cVar3;
          iVar6 = (int)lVar10;
          uVar21 = lVar10 - 0x210;
          uVar20 = uVar22 >> (0x40 - uVar21 & 0x7f);
          if (((longlong)(1 << (iVar6 - 0x211U & 0x3f)) & uVar20) != 0) {
            uVar18 = 0x2d;
            uVar20 = -uVar20 & (longlong)((1 << ((uint)uVar21 & 0x3f)) + -1);
          }
          if ((int)(uint)uVar21 < 0x21) {
            FUN_005cd198(local_1f0,0x51,PTR_s___c___02dX_0071a624,iVar6 + -0x20d >> 2);
            FUN_004f9e10(local_19c,local_1f0,uVar18,uVar20);
          }
          else {
            FUN_005cd198(local_1f0,0x51,PTR_s___c__08X____02dX_0071a628,iVar6 + -0x22d >> 2);
            FUN_004f9e10(local_19c,local_1f0,uVar18,uVar20 >> 0x20,uVar20 & 0xffffffff);
          }
          uVar17 = uVar17 + 3;
          lVar16 = lVar16 - uVar21;
          pcVar11 = __s + uVar17;
          uVar22 = uVar22 << (uVar21 & 0x7f);
          uVar14 = uVar17;
          pcVar9 = pcVar11;
        }
        else {
          pcVar9 = pcVar11;
          uVar14 = uVar17;
          if (cVar1 == 'F') {
            if ((cVar2 == '3') && (cVar3 == '2')) {
              local_90 = (float)(uVar22 >> 0x20);
              local_88 = (double)local_90;
              uVar17 = uVar17 + 3;
              uVar22 = uVar22 << 0x20;
              lVar16 = lVar16 + -0x20;
              FUN_004f9e10(local_88,local_19c,PTR_s__13_6e_0071a62c,local_88);
              pcVar11 = __s + uVar17;
              uVar14 = uVar17;
              pcVar9 = pcVar11;
            }
          }
          else if ((((cVar1 == 'd') && (cVar2 == 'u')) && (cVar3 == 'm')) && (pcVar11[3] == 'p')) {
            iVar13 = 0;
            if ((3 < uVar19) && (iVar13 = uVar19 - 4, iVar13 != 0)) {
              iVar6 = iVar6 + -3;
              iVar15 = 0;
              do {
                puVar12 = local_1f0 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar12 = 0x20;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            uVar20 = 0;
            local_1f0[iVar13] = 0;
            while( true ) {
              uVar14 = (uint)uVar20 & 3;
              if ((uVar20 & 3) == 0) {
                if ((uint)uVar20 != 0) {
                  lVar16 = 0x38;
                  puVar12 = local_9c;
                  do {
                    if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
                      *puVar12 = 0x20;
                      local_9c = local_9c + 1;
                      puVar12 = local_9c;
                    }
                    lVar16 = lVar16 + -1;
                  } while (lVar16 != 0);
                  FUN_004f9e10(local_19c,PTR_s__s_03X__0071a630,local_1f0,(uVar20 & 0x1fffffff) << 3
                              );
                }
                FUN_004f9e10(local_19c,PTR_s__08X__08X_0071a638,uVar22 >> 0x20,uVar22 & 0xffffffff);
              }
              else if (uVar14 == 2) {
                FUN_004f9e10(local_19c,PTR_s__08X__08X_0071a63c,uVar22 >> 0x20,uVar22 & 0xffffffff);
              }
              else {
                FUN_004f9e10(local_19c,PTR_s___08X__08X_0071a634,uVar22 >> 0x20,uVar22 & 0xffffffff)
                ;
                if ((uVar14 == 3) && (1 < (param_7 & 0xffff))) {
                  puVar12 = local_9c;
                  if ((uint)((int)local_9c - (int)local_19c) < 0x100) {
                    *local_9c = 10;
                    puVar12 = local_9c + 1;
                    if ((uint)((int)puVar12 - (int)local_19c) < 0x100) {
                      *puVar12 = 0;
                      puVar12 = local_9c + 2;
                    }
                  }
                  local_9c = puVar12;
                  FUN_004f4df0(local_19c);
                  return;
                }
              }
              if ((param_7 & 0xffff) == 1) break;
              uVar22 = *param_8;
              uVar20 = uVar20 + 1;
              param_8 = param_8 + 1;
              param_7 = param_7 - 1;
            }
            uVar17 = uVar17 + 4;
            lVar16 = 0;
            pcVar11 = __s + uVar17;
            uVar14 = uVar17;
            pcVar9 = pcVar11;
          }
        }
      }
      while( true ) {
        cVar1 = *pcVar11;
        if (((cVar1 != '\t') && (cVar1 != ' ')) && (cVar1 != ',')) break;
        uVar17 = uVar17 + 1;
        pcVar11 = pcVar11 + 1;
      }
      iVar6 = uVar17 - uVar14;
      if (iVar6 != 0) {
        libc::strcpy(local_1f0,pcVar9,iVar6);
        local_1f0[iVar6] = 0;
        FUN_004f9e10(local_19c,local_1f0);
        uVar14 = uVar17;
      }
      if ((int)lVar16 == 0) {
        uVar22 = *param_8;
        param_7 = param_7 - 1;
        param_8 = param_8 + 1;
        lVar16 = 0x40;
      }
    } while( true );
  }
  if (cVar1 == '\0') goto LAB_004fac4c;
  pcVar11 = (char *)((int)pcVar11 + 1);
  iVar6 = iVar6 + 1;
  cVar1 = *pcVar11;
  goto joined_r0x004fabfc;
}



//==== 004fb500  ns=Global  size=0x380
// sig: undefined FUN_004fb500(void)
// callers(1): 0064db64 FUN_0064db64
// callees(2): 004f4df0 FUN_004f4df0; 0800015f syscall::syscall_sys_memory_get_page_attribute
// strings: 00664498: 'validSpuReadLoadCommands' | 00664438: 'Assertion failed at %s(%d): %s\n' | 00664458: '../../../../job/src/common/jobapi/commandlistchecker.cpp' | 00665520: 'HINT: Logical buffer set %d is fully used and could be unreserved, if no free and re-use is planned for this buffer set.\n' | 00665500: '\t\t%s = 0x%016llX\n' | 00665518: 'Params' | 00664810: 'false' | 006644e0: 'numU64s <= ((MAX_LOAD_COMMANDS_SIZE)/sizeof(U64))' | 006644b8: '    Command list (ea = 0x%08X):\n' | 006654d0: '      0x%016llX  **INVALID JOB COMMAND(%d)**\n'

/* WARNING: Removing unreachable block (ram,0x004fbec4) */
/* WARNING: Removing unreachable block (ram,0x004fbecc) */
/* WARNING: Removing unreachable block (ram,0x004fb750) */
/* WARNING: Removing unreachable block (ram,0x004fb770) */
/* WARNING: Removing unreachable block (ram,0x004fb7a0) */
/* WARNING: Removing unreachable block (ram,0x004fb7bc) */
/* WARNING: Removing unreachable block (ram,0x004fb7d4) */
/* WARNING: Removing unreachable block (ram,0x004fb788) */

void FUN_004fb500(ulonglong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  ulonglong local_300;
  ulonglong local_2f8;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = syscall::syscall_sys_memory_get_page_attribute(param_1,&local_300);
  if (((((iVar1 != 0) || ((local_2f8 & 2) == 0)) ||
       (((local_300 & 0x80000) == 0 && ((local_300 & 0x40000) == 0)))) ||
      ((iVar1 = syscall::syscall_sys_memory_get_page_attribute
                          ((int)param_1 + param_2 * 8 + -1,&local_300), iVar1 != 0 ||
       ((local_2f8 & 2) == 0)))) || (((local_300 & 0x80000) == 0 && ((local_300 & 0x40000) == 0))))
  {
    FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a640,
                 PTR_s_____________job_src_common_jobap_0071a644,0x102,
                 PTR_s_validSpuReadLoadCommands_0071a648);
    return;
  }
  uStack_28c = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  if ((param_3 & 1) != 0) {
    FUN_004f4df0(PTR_s_Command_list__ea___0x_08X___0071a64c,param_1);
    return;
  }
  if (((param_3 & 8) != 0) && (0x20 < param_2)) {
    FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a640,
                 PTR_s_____________job_src_common_jobap_0071a644,0x11c,
                 PTR_s_numU64s_<__((MAX_LOAD_COMMANDS_S_0071a650);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar2 = *param_1 >> 0x29 & 7;
  if (6 < uVar2) {
    if ((param_3 & 1) == 0) {
      FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a640,
                   PTR_s_____________job_src_common_jobap_0071a644,0x30e,PTR_s_false_0071a690);
      return;
    }
    FUN_004f4df0(PTR_s_0x_016llX___INVALID_JOB_COMMAND__0071a7a0,*param_1,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004fb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_DAT_0071a654 + *(int *)(PTR_DAT_0071a654 + (int)(uVar2 << 2))))();
  return;
}



//==== 004fcd10  ns=Global  size=0x70
// sig: undefined FUN_004fcd10(void)
// callers(1): 004f17ec FUN_004f17ec
// callees(1): 004f4df0 FUN_004f4df0
// strings: 00664810: 'false' | 00664438: 'Assertion failed at %s(%d): %s\n' | 00664458: '../../../../job/src/common/jobapi/commandlistchecker.cpp'

void FUN_004fcd10(ulonglong param_1)

{
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
  if ((param_1 >> 0x20 & 0xffff) < 6) {
                    /* WARNING: Could not recover jumptable at 0x004fcd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071a7b0 +
              *(int *)(PTR_DAT_0071a7b0 + ((uint)((param_1 >> 0x20) << 2) & 0x3fffc))))();
    return;
  }
  FUN_004f4df0(PTR_s_Assertion_failed_at__s__d____s_0071a640,
               PTR_s_____________job_src_common_jobap_0071a644,0xf5,PTR_s_false_0071a690);
  return;
}



//==== 004fd358  ns=Global  size=0x8
// sig: undefined FUN_004fd358(void)
// callers(2): 004f1c18 FUN_004f1c18; 004f20b4 FUN_004f20b4
// callees(0): 

undefined * FUN_004fd358(void)

{
  return PTR_DAT_0071a7fc;
}



//==== 004fd360  ns=Global  size=0x10
// sig: undefined FUN_004fd360(void)
// callers(2): 004f1c18 FUN_004f1c18; 004f20b4 FUN_004f20b4
// callees(0): 

uint FUN_004fd360(void)

{
  return DAT_0071a800 + 0x7fU & 0xffffff80;
}



//==== 004fd370  ns=Global  size=0x8
// sig: undefined FUN_004fd370(void)
// callers(0): 
// callees(0): 

undefined * FUN_004fd370(void)

{
  return PTR_DAT_0071a804;
}



//==== 004fd378  ns=Global  size=0x10
// sig: undefined FUN_004fd378(void)
// callers(0): 
// callees(0): 

uint FUN_004fd378(void)

{
  return DAT_0071a808 + 0x7fU & 0xffffff80;
}



//==== 004fd388  ns=Global  size=0x6c
// sig: undefined FUN_004fd388(void)
// callers(0): 
// callees(1): 004f4df0 FUN_004f4df0
// strings: 00665850: '--------------------------------------------------------\n'

void FUN_004fd388(void)

{
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
  FUN_004f4df0(PTR_s__________________________________0071a80c);
  return;
}



//==== 004fe048  ns=Global  size=0x24
// sig: undefined FUN_004fe048(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

int FUN_004fe048(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 4)) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(uint *)(param_1 + 8) - *(uint *)(param_1 + 4);
  }
  return iVar1;
}



//==== 004fe06c  ns=Global  size=0x2c
// sig: undefined FUN_004fe06c(void)
// callers(1): 000e0e60 main::startLevel
// callees(0): 

longlong FUN_004fe06c(int param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)(int)(*(uint *)(param_1 + 8) - *(uint *)(param_1 + 4));
  return lVar1 + ((longlong)((ulonglong)*(uint *)(param_1 + 8) - (ulonglong)*(uint *)(param_1 + 4))
                  >> 0x3f & -lVar1 - 1U);
}



//==== 004fe098  ns=idol  size=0x180
// sig: undefined AllocateMemAlign(void)
// callers(60): 00072280 draw::FastDrawQuad; 000731c8 draw::DrawTexturedStrips; 00073de0 draw::DrawLavaStrips; 00074604 draw::DrawMeshSet; 00074be0 draw::DrawOceanStrip; 00077c88 draw::DrawColorGradientStrip; 000d89d0 initonce::InitMemSlots; 000d8be8 initonce::InitOnce; 000f1850 mobyfunc::DrawMobyDepth; 000f1a78 mobyfunc::DrawMobys; 000f7af0 mobyfunc::MB_BuildDrawEntry; 0011ef18 partproc::DrawParts; 0015aa80 skyfunc::SkySpriteProc; 0015f6d0 space::???_Space_TransitionDrawPass; 0017c750 water::WaterTile_DrawCellBase; 0017c888 water::WaterTile_DrawCellOvl; 0017d4b8 water::WaterSheet_DrawAll; 0017d8f8 water::SubmitOceanCell; 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean; 004d46cc FUN_004d46cc; 004d4dd0 FUN_004d4dd0; 004d71c0 FUN_004d71c0; 004d7464 FUN_004d7464; 004d8148 FUN_004d8148; 004d8b50 FUN_004d8b50
// callees(1): 004ff520 idol::print_mem_error
// strings: 0065f4e8: 'Failed to allocate %d bytes (%d available)\n'

ulonglong idol::AllocateMemAlign(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar5 = (uint)param_2;
  if (uVar5 == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x14) == 0) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 4);
    uVar6 = uVar8 & param_3 - 1U;
    uVar5 = *(uint *)(param_1 + 8);
    uVar4 = uVar8 + (param_3 - uVar6) & 0xffffffff;
    uVar4 = uVar4 + ((LZCOUNT(-(int)uVar6) << 0x3a) >> 0x3f & uVar8 - uVar4);
    if ((ulonglong)uVar5 < (uVar4 + param_2 & 0xffffffff)) {
      lVar7 = (longlong)(int)(uVar5 - *(uint *)(param_1 + 4));
      print_mem_error("Failed to allocate %d bytes (%d available)\n",param_2,
                      lVar7 + ((longlong)(uVar5 - uVar8) >> 0x3f & -lVar7 - 1U));
      uVar4 = 0;
    }
    else {
      *(int *)(param_1 + 4) = (int)(uVar4 + param_2);
    }
  }
  else {
    uVar3 = uVar5 & (uint)(param_3 - 1U);
    uVar4 = (ulonglong)*(uint *)(param_1 + 8);
    iVar2 = uVar5 + ((int)param_3 - uVar3);
    uVar6 = uVar4 & param_3 - 1U;
    lVar9 = uVar4 - uVar6;
    uVar1 = *(uint *)(param_1 + 4);
    lVar7 = (longlong)(int)(iVar2 + ((uint)((LZCOUNT(-uVar3) << 0x3a) >> 0x3f) & uVar5 - iVar2));
    uVar6 = (lVar9 + ((LZCOUNT(-(int)uVar6) << 0x3a) >> 0x3f & uVar4 - lVar9)) - lVar7;
    if ((uVar6 & 0xffffffff) < (ulonglong)uVar1) {
      lVar9 = (longlong)(int)(*(uint *)(param_1 + 8) - uVar1);
      print_mem_error("Failed to allocate %d bytes (%d available)\n",lVar7,
                      lVar9 + ((longlong)(uVar4 - uVar1) >> 0x3f & -lVar9 - 1U));
      uVar4 = 0;
    }
    else {
      uVar4 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 8) = (int)uVar6;
    }
  }
  return uVar4;
}



//==== 004fe218  ns=Global  size=0x30
// sig: undefined FUN_004fe218(void)
// callers(3): 004eaddc FUN_004eaddc; 004f5b40 FUN_004f5b40; 004f75d8 FUN_004f75d8
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004fe218(undefined4 param_1,undefined8 param_2)

{
  idol::AllocateMemAlign(param_2,param_1,0x10);
  return;
}



//==== 004fe248  ns=Global  size=0x34
// sig: undefined FUN_004fe248(void)
// callers(0): 
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004fe248(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  idol::AllocateMemAlign(param_3,param_1,param_2);
  return;
}



//==== 004fe27c  ns=Global  size=0x2c
// sig: undefined FUN_004fe27c(void)
// callers(2): 000d89d0 initonce::InitMemSlots; 000d8be8 initonce::InitOnce
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004fe27c(undefined4 param_1,undefined8 param_2)

{
  idol::AllocateMemAlign(param_2,param_1);
  return;
}



//==== 004fe2a8  ns=Global  size=0x30
// sig: undefined FUN_004fe2a8(void)
// callers(0): 
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004fe2a8(undefined4 param_1,undefined8 param_2)

{
  idol::AllocateMemAlign(param_2,param_1,0x10);
  return;
}



//==== 004fe2d8  ns=Global  size=0x34
// sig: undefined FUN_004fe2d8(void)
// callers(0): 
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004fe2d8(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  idol::AllocateMemAlign(param_3,param_1,param_2);
  return;
}



//==== 004fe30c  ns=Global  size=0x2c
// sig: undefined FUN_004fe30c(void)
// callers(1): 005057d4 FUN_005057d4
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004fe30c(undefined4 param_1,undefined8 param_2)

{
  idol::AllocateMemAlign(param_2,param_1);
  return;
}



//==== 004fe338  ns=Global  size=0x4
// sig: undefined FUN_004fe338(void)
// callers(0): 
// callees(0): 

void FUN_004fe338(void)

{
  return;
}



//==== 004fe33c  ns=Global  size=0x4
// sig: undefined FUN_004fe33c(void)
// callers(0): 
// callees(0): 

void FUN_004fe33c(void)

{
  return;
}



//==== 004fe340  ns=Global  size=0x4
// sig: undefined FUN_004fe340(void)
// callers(0): 
// callees(0): 

void FUN_004fe340(void)

{
  return;
}



//==== 004fe344  ns=Global  size=0x4
// sig: undefined FUN_004fe344(void)
// callers(0): 
// callees(0): 

void FUN_004fe344(void)

{
  return;
}



//==== 004fe348  ns=Global  size=0x54
// sig: undefined FUN_004fe348(void)
// callers(0): 
// callees(1): 005d580c FUN_005d580c

void FUN_004fe348(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005d580c();
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



//==== 004fe39c  ns=Global  size=0x28
// sig: undefined FUN_004fe39c(void)
// callers(6): 000d89d0 initonce::InitMemSlots; 000d8be8 initonce::InitOnce; 004d7464 FUN_004d7464; 004e5f40 FUN_004e5f40; 00504374 FUN_00504374; 005043b0 FUN_005043b0
// callees(0): 

undefined8
FUN_004fe39c(int *param_1,int param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = param_2 + (int)param_3;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[3] = iVar1;
  param_1[2] = iVar1;
  param_1[6] = param_4;
  param_1[8] = param_5;
  param_1[7] = param_6;
  return param_3;
}



//==== 004fe3c4  ns=Global  size=0x88
// sig: undefined FUN_004fe3c4(void)
// callers(0): 
// callees(1): 005d5838 FUN_005d5838

ulonglong FUN_004fe3c4(int *param_1,ulonglong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005d5838(param_2 & 0xffffffff);
  iVar2 = iVar1 + (int)param_2;
  *param_1 = iVar1;
  param_1[1] = iVar1;
  param_1[6] = param_3;
  param_1[3] = iVar2;
  param_1[2] = iVar2;
  param_1[8] = param_4;
  param_1[7] = param_5;
  return param_2;
}



//==== 004fe44c  ns=Global  size=0x7c
// sig: undefined FUN_004fe44c(void)
// callers(0): 
// callees(0): 

int FUN_004fe44c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1 & param_2 - 1U;
  iVar3 = (uVar1 + param_2) - uVar2;
  iVar3 = iVar3 + ((uint)((LZCOUNT(-uVar2) << 0x3a) >> 0x3f) & uVar1 - iVar3);
  uVar2 = (*(int *)(param_1 + 8) - iVar3) - (param_2 - 1U);
  uVar1 = uVar2 & param_2 - 1U;
  iVar3 = (*(int *)(param_1 + 8) - (iVar3 + uVar1)) + 1;
  return iVar3 + ((uint)((LZCOUNT(-uVar1) << 0x3a) >> 0x3f) & uVar2 - iVar3);
}



//==== 004fe4d0  ns=Global  size=0x54
// sig: undefined FUN_004fe4d0(void)
// callers(0): 
// callees(0): 

double FUN_004fe4d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)(param_1 + 8) - *(uint *)(param_1 + 4);
  return (double)((float)(longlong)
                         (int)(iVar1 + ((uint)((longlong)
                                               ((ulonglong)*(uint *)(param_1 + 8) -
                                               (ulonglong)*(uint *)(param_1 + 4)) >> 0x3f) &
                                       -iVar1 - 1U)) * 9.536743e-07);
}



//==== 004fe524  ns=Global  size=0x8
// sig: undefined FUN_004fe524(void)
// callers(1): 000e0e60 main::startLevel
// callees(0): 

undefined4 FUN_004fe524(undefined4 *param_1)

{
  return *param_1;
}



//==== 004fe52c  ns=idol  size=0x9c
// sig: undefined kalloc(void)
// callers(3): 000dcf58 loaders::NAVG_LoadFile; 004d7464 FUN_004d7464; 004efb80 FUN_004efb80
// callees(1): 004ff520 idol::print_mem_error
// strings: 0065f4e8: 'Failed to allocate %d bytes (%d available)\n'

ulonglong idol::kalloc(int param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 4);
    uVar2 = (ulonglong)*(uint *)(param_1 + 8);
    if ((uVar1 + param_2 & 0xffffffff) < uVar2) {
      if (*(int *)(param_1 + 0x14) == 0) {
        *(int *)(param_1 + 4) = (int)(uVar1 + param_2);
      }
      else {
        uVar1 = uVar2 - param_2;
        *(int *)(param_1 + 8) = (int)uVar1;
      }
      uVar1 = uVar1 & 0xffffffff;
    }
    else {
      lVar3 = (longlong)(int)(*(uint *)(param_1 + 8) - *(uint *)(param_1 + 4));
      print_mem_error("Failed to allocate %d bytes (%d available)\n",param_2,
                      lVar3 + ((longlong)(uVar2 - uVar1) >> 0x3f & -lVar3 - 1U));
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== 004fe5c8  ns=Global  size=0x24
// sig: undefined FUN_004fe5c8(void)
// callers(2): 000def78 loaders::LoadLevelFiles; 000df408 loaders::LoadAllMobys
// callees(0): 

void FUN_004fe5c8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4) & param_2 - 1U;
  if (uVar1 != 0) {
    *(uint *)(param_1 + 4) = (*(uint *)(param_1 + 4) + param_2) - uVar1;
  }
  return;
}



//==== 004fe5ec  ns=Global  size=0x8
// sig: undefined FUN_004fe5ec(void)
// callers(10): 000d89d0 initonce::InitMemSlots; 000d8be8 initonce::InitOnce; 000def78 loaders::LoadLevelFiles; 004d7464 FUN_004d7464; 004ded28 FUN_004ded28; 004defb0 FUN_004defb0; 005043b0 FUN_005043b0; 005083fc FUN_005083fc; 00508578 FUN_00508578; 005085cc fios::LoadAssetAsync
// callees(0): 

undefined4 FUN_004fe5ec(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



//==== 004fe5f4  ns=Global  size=0x28
// sig: undefined FUN_004fe5f4(void)
// callers(4): 000df408 loaders::LoadAllMobys; 00504468 FUN_00504468; 00507b6c FUN_00507b6c; 00508198 fios::load_engine_vram_pair
// callees(0): 

uint FUN_004fe5f4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1 & param_2 - 1U;
  if (uVar2 != 0) {
    uVar1 = (uVar1 + param_2) - uVar2;
    *(uint *)(param_1 + 4) = uVar1;
  }
  return uVar1;
}



//==== 004fe61c  ns=Global  size=0x70
// sig: undefined FUN_004fe61c(void)
// callers(13): 000d89d0 initonce::InitMemSlots; 000d8be8 initonce::InitOnce; 004d4b40 FUN_004d4b40; 004d4b94 FUN_004d4b94; 004d4c88 FUN_004d4c88; 004d59e8 FUN_004d59e8; 004ddba8 idol_draw::BuildAndFlipFrame; 004ded28 FUN_004ded28; 004defb0 FUN_004defb0; 0050813c FUN_0050813c; 00508198 fios::load_engine_vram_pair; 005084c0 FUN_005084c0; 0050851c FUN_0050851c
// callees(1): 004ff520 idol::print_mem_error
// strings: 0065f514: 'Tried to set memory pointer to an invalid address [%s, line %d]\n' | 0065f55c: 'j:/Ratchet/Source/CommonRC1/Game/IMMemory/IMSeqMem.cpp'

ulonglong FUN_004fe61c(uint *param_1,ulonglong param_2)

{
  if ((uint)param_2 == 0) {
    param_2 = 0;
  }
  else if (((param_2 & 0xffffffff) < (ulonglong)*param_1) ||
          ((ulonglong)param_1[2] < (param_2 & 0xffffffff))) {
    idol::print_mem_error
              ("Tried to set memory pointer to an invalid address [%s, line %d]\n",
               "j:/Ratchet/Source/CommonRC1/Game/IMMemory/IMSeqMem.cpp",0x167);
    param_2 = 0;
  }
  else {
    param_1[1] = (uint)param_2;
  }
  return param_2;
}



//==== 004fe68c  ns=Global  size=0x60
// sig: undefined FUN_004fe68c(void)
// callers(0): 
// callees(1): 004ff520 idol::print_mem_error
// strings: 0065f514: 'Tried to set memory pointer to an invalid address [%s, line %d]\n' | 0065f55c: 'j:/Ratchet/Source/CommonRC1/Game/IMMemory/IMSeqMem.cpp'

ulonglong FUN_004fe68c(int param_1,ulonglong param_2)

{
  if (((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 4)) ||
     ((ulonglong)*(uint *)(param_1 + 0xc) < (param_2 & 0xffffffff))) {
    idol::print_mem_error
              ("Tried to set memory pointer to an invalid address [%s, line %d]\n",
               "j:/Ratchet/Source/CommonRC1/Game/IMMemory/IMSeqMem.cpp",0x179);
    param_2 = 0;
  }
  else {
    *(int *)(param_1 + 8) = (int)param_2;
  }
  return param_2;
}



//==== 004fe6ec  ns=Global  size=0x48
// sig: undefined FUN_004fe6ec(void)
// callers(7): 000def78 loaders::LoadLevelFiles; 000df408 loaders::LoadAllMobys; 004d4dd0 FUN_004d4dd0; 004d7464 FUN_004d7464; 00504468 FUN_00504468; 00507b6c FUN_00507b6c; 00508198 fios::load_engine_vram_pair
// callees(1): 004ff520 idol::print_mem_error
// strings: 0065f594: 'Error:  You have run past the end of the memory buffer\n'

void FUN_004fe6ec(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) + param_2;
  if (*(uint *)(param_1 + 8) < uVar1) {
    idol::print_mem_error("Error:  You have run past the end of the memory buffer\n");
  }
  else {
    *(uint *)(param_1 + 4) = uVar1;
  }
  return;
}



//==== 004fe734  ns=Global  size=0x24
// sig: undefined FUN_004fe734(void)
// callers(0): 
// callees(0): 

int FUN_004fe734(int *param_1)

{
  return (param_1[1] - *param_1) + (param_1[3] - param_1[2]);
}



//==== 004fe758  ns=Global  size=0xc
// sig: undefined FUN_004fe758(void)
// callers(0): 
// callees(0): 

void FUN_004fe758(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



//==== 004fe764  ns=Global  size=0xc
// sig: undefined FUN_004fe764(void)
// callers(0): 
// callees(0): 

void FUN_004fe764(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



//==== 004fe778  ns=Global  size=0x8c
// sig: undefined FUN_004fe778(void)
// callers(2): 0001401c boot::boot; 004e5f40 FUN_004e5f40
// callees(1): 004ffd4c FUN_004ffd4c
// strings: 0065f5cc: '===MemPool %s Info === %d bytes available %s (%5.2f meg)\n'

void FUN_004fe778(int param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)(int)(*(uint *)(param_1 + 8) - *(uint *)(param_1 + 4));
  lVar1 = lVar1 + ((longlong)((ulonglong)*(uint *)(param_1 + 8) - (ulonglong)*(uint *)(param_1 + 4))
                   >> 0x3f & -lVar1 - 1U);
  FUN_004ffd4c(5,"===MemPool %s Info === %d bytes available %s (%5.2f meg)\n",
               *(undefined4 *)(param_1 + 0x18),lVar1,param_2,
               (double)((float)(longlong)(int)lVar1 * 9.536743e-07));
  return;
}



//==== 004fe804  ns=Global  size=0x94
// sig: undefined FUN_004fe804(void)
// callers(0): 
// callees(0): 
// strings: 0065f608: 'TempPool'

void FUN_004fe804(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  
  DAT_00902e94 = &DAT_01593328;
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 0x18))(DAT_00902ebc,"TempPool");
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xffffffff;
    iVar3 = (int)uVar2 + 1;
    (&DAT_0159334c)[(int)uVar2] = 0;
    uVar2 = (ulonglong)iVar3;
    *(undefined4 *)(&DAT_01593348 + (int)(uVar1 << 2)) = 0;
  } while (iVar3 < 1);
  return;
}



//==== 004fe898  ns=Global  size=0xe4
// sig: undefined FUN_004fe898(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004fe898(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 0x1c))(DAT_00902ebc,DAT_00902e94,0);
  piVar3 = DAT_00902ebc;
  uVar2 = DAT_00902e94;
  uVar4 = 0;
  uVar5 = 0;
  do {
    iVar1 = (int)uVar4;
    if ((&DAT_0159334c)[iVar1] == '\0') {
      (&DAT_0159334c)[iVar1] = 1;
      uVar5 = *(undefined4 *)(&DAT_01593348 + (int)((uVar4 & 0xffffffff) << 2));
      break;
    }
    uVar4 = (ulonglong)(iVar1 + 1);
  } while (iVar1 + 1 < 1);
  (*(code *)**(undefined4 **)(*piVar3 + 0x20))(piVar3,uVar2);
  return uVar5;
}



//==== 004fe97c  ns=Global  size=0xe4
// sig: undefined FUN_004fe97c(void)
// callers(0): 
// callees(0): 

void FUN_004fe97c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 0x1c))(DAT_00902ebc,DAT_00902e94,0);
  piVar2 = DAT_00902ebc;
  uVar1 = DAT_00902e94;
  uVar3 = 0;
  do {
    if (*(int *)(&DAT_01593348 + (int)((uVar3 & 0xffffffff) << 2)) == param_1) {
      (&DAT_0159334c)[(int)uVar3] = 0;
      break;
    }
    iVar4 = (int)uVar3 + 1;
    uVar3 = (ulonglong)iVar4;
  } while (iVar4 < 1);
  (*(code *)**(undefined4 **)(*piVar2 + 0x20))(piVar2,uVar1);
  return;
}



//==== 004fea60  ns=Global  size=0xb4
// sig: undefined FUN_004fea60(void)
// callers(0): 
// callees(0): 

void FUN_004fea60(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 0x1c))(DAT_00902ebc,DAT_00902e94,0);
  piVar2 = DAT_00902ebc;
  uVar1 = DAT_00902e94;
  *(undefined4 *)(&DAT_01593348 + (int)(param_2 << 2)) = param_1;
  (*(code *)**(undefined4 **)(*piVar2 + 0x20))(piVar2,uVar1);
  return;
}



//==== 004feb14  ns=Global  size=0x14
// sig: undefined FUN_004feb14(void)
// callers(0): 
// callees(0): 

void FUN_004feb14(void)

{
  DAT_01593328 = &PTR_PTR_006663e8;
  return;
}



//==== 004feb28  ns=Global  size=0x14
// sig: undefined FUN_004feb28(void)
// callers(0): 
// callees(0): 

void FUN_004feb28(void)

{
  DAT_01593328 = &PTR_PTR_006663fc;
  return;
}



//==== 004feb98  ns=Global  size=0x624
// sig: undefined FUN_004feb98(void)
// callers(1): 004df600 FUN_004df600
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004feb98(uint param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  undefined4 in_vr2_32_0;
  undefined4 in_vr2_32_1;
  undefined4 in_vr2_32_2;
  undefined4 in_vr2_32_3;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x140;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = ZEXT48(&stack0x00000000);
  auVar9 = ZEXT416(0);
  auVar15 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar10 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar11 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar13 = vectorMergeHighWord(auVar9,auVar10);
  puVar3[0x27] = unaff_r31;
  auVar6 = _DAT_004feb50;
  auVar5 = _DAT_004feb40;
  auVar14 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar9 = vectorMergeLowWord(auVar9,auVar10);
  auVar10 = vectorMergeHighWord(auVar11,auVar14);
  auVar11 = vectorMergeLowWord(auVar11,auVar14);
  auVar14 = vectorMergeHighWord(auVar13,auVar10);
  auVar16 = vectorMergeHighWord(auVar9,auVar11);
  auVar9 = vectorMergeLowWord(auVar9,auVar11);
  auVar10 = vectorMergeLowWord(auVar13,auVar10);
  auVar12 = vectorAddFloatingPoint(auVar9,auVar14);
  auVar17 = vectorSubtractFloatingPoint(auVar9,auVar14);
  auVar18 = vectorAddFloatingPoint(auVar9,auVar10);
  auVar14 = vectorSubtractFloatingPoint(auVar9,auVar10);
  auVar25 = vectorAddFloatingPoint(auVar9,auVar16);
  auVar16 = vectorSubtractFloatingPoint(auVar9,auVar16);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar12,auVar15);
  auVar13 = vectorPermute(auVar12,auVar12,_DAT_004feb40);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar15);
  auVar19 = vectorPermute(auVar17,auVar17,_DAT_004feb40);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar18,auVar18,auVar15);
  auVar23 = vectorPermute(auVar18,auVar18,_DAT_004feb40);
  auVar9 = vectorPermute(auVar12,auVar12,_DAT_004feb50);
  auVar22 = vectorPermute(auVar17,auVar17,_DAT_004feb50);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar25,auVar25,auVar15);
  auVar34 = vectorPermute(auVar25,auVar25,_DAT_004feb40);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar11);
  auVar13 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar10);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar20);
  auVar10 = loadVectorLeftIndexed(0x20,0x4feb40);
  auVar21 = loadVectorLeftIndexed(0x24,0x4feb40);
  auVar24 = vectorPermute(auVar14,auVar14,_DAT_004feb40);
  auVar38 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar37);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar22,auVar22,auVar13);
  auVar9 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar13 = vectorPermute(auVar18,auVar18,_DAT_004feb50);
  auVar9 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar14,auVar15);
  *(undefined1 (*) [16])(puVar3 + 8) = auVar25;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar23);
  auVar26 = loadVectorLeftIndexed(0x28,0x4feb40);
  auVar22 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar19);
  auVar34 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar20);
  auVar40 = vectorCompareEqualToFloatingPoint(auVar19,auVar15);
  auVar13 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar9);
  auVar21 = vectorPermute(auVar14,auVar14,auVar6);
  auVar9 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar23);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar22,auVar19,auVar15);
  auVar31 = vectorCompareEqualToFloatingPoint(auVar22,auVar15);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar34,auVar20,auVar15);
  auVar35 = vectorCompareEqualToFloatingPoint(auVar34,auVar15);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar21,auVar13);
  auVar24 = vectorCompareEqualToFloatingPoint(auVar20,auVar15);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar15);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar9,auVar23,auVar15);
  auVar13 = vectorPermute(auVar25,auVar25,auVar6);
  auVar37 = vectorCompareEqualToFloatingPoint(auVar9,auVar15);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar38);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar33,auVar10,auVar15);
  auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar33,auVar11);
  auVar36 = vectorPermute(auVar16,auVar16,auVar5);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar30,auVar10,auVar15);
  auVar38 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar21);
  auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar30,auVar11);
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar29,auVar11);
  auVar9 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar28,auVar33);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar29,auVar10,auVar15);
  auVar9 = ZEXT416(0xffffffff);
  auVar28 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar27,auVar30);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar38,auVar21,auVar15);
  auVar26 = vectorCompareEqualToFloatingPoint(auVar23,auVar15);
  auVar9 = vectorConditionalSelect(auVar22,auVar19,auVar40 | auVar31);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar32);
  auVar20 = vectorConditionalSelect(auVar34,auVar20,auVar24 | auVar35);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar33,auVar29);
  auVar36 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar30,auVar10,auVar15);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar30,auVar11);
  auVar29 = vectorPermute(auVar16,auVar16,auVar6);
  auVar9 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar34 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar39);
  auVar24 = vectorReciprocalEstimateFloatingPoint(auVar19);
  auVar31 = vectorReciprocalEstimateFloatingPoint(auVar20);
  auVar9 = ZEXT416(0xffffffff);
  auVar27 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar22 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar22);
  auVar9 = vectorConditionalSelect(auVar25,auVar23,auVar26 | auVar37);
  auVar32 = vectorCompareEqualToFloatingPoint(auVar38,auVar15);
  auVar37 = vectorCompareEqualToFloatingPoint(auVar21,auVar15);
  auVar26 = vectorShiftLeftIntegerWord(auVar27,auVar27);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar33,auVar30);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar30 = vectorMultiplyAddFloatingPoint(auVar34,auVar39,auVar15);
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar19,auVar13);
  auVar38 = vectorReciprocalEstimateFloatingPoint(auVar23);
  auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar31,auVar20,auVar13);
  auVar29 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar22);
  auVar21 = vectorConditionalSelect(auVar28,auVar21,auVar37 | auVar32);
  auVar9 = ZEXT416(0xffffffff);
  auVar37 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar36);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar30,auVar10,auVar15);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar31,auVar27,auVar26);
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar30,auVar11);
  auVar27 = vectorCompareEqualToFloatingPoint(auVar39,auVar15);
  auVar34 = vectorCompareEqualToFloatingPoint(auVar34,auVar15);
  auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar23,auVar13);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar29,auVar22,auVar15);
  auVar28 = vectorReciprocalEstimateFloatingPoint(auVar21);
  auVar25 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar19,auVar13);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar30);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar20,auVar13);
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar10 = vectorMultiplyAddFloatingPoint(auVar33,auVar10,auVar15);
  auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar33,auVar11);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar26,auVar35);
  auVar29 = vectorCompareEqualToFloatingPoint(auVar29,auVar15);
  auVar30 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar26 = vectorCompareEqualToFloatingPoint(auVar22,auVar15);
  auVar9 = ZEXT416(0xffffffff);
  auVar38 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar37,auVar25);
  auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar21,auVar13);
  auVar9 = ZEXT416(0xffffffff);
  auVar25 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = vectorConditionalSelect(auVar36,auVar39,auVar27 | auVar34);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar30);
  auVar31 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar33);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar23,auVar13);
  auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
  auVar9 = ZEXT416(0xffffffff);
  auVar11 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar30 = vectorReciprocalEstimateFloatingPoint(auVar34);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar19,auVar13);
  auVar9 = ZEXT416(0xffffffff);
  auVar38 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar37,auVar31);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar20 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar20,auVar13);
  auVar37 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar10 = vectorConditionalSelect(auVar10,auVar22,auVar26 | auVar29);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar35,auVar27,auVar9);
  auVar9 = ZEXT416(0xffffffff);
  auVar22 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar19 = vectorMultiplyAddFloatingPoint(auVar24,auVar19,auVar25);
  auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar21,auVar13);
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar34,auVar13);
  auVar26 = vectorReciprocalEstimateFloatingPoint(auVar10);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar32,auVar20,auVar37);
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar23,auVar13);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar19,auVar15);
  auVar19 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar9 = ZEXT416(0xffffffff);
  auVar37 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar22 = vectorMultiplyAddFloatingPoint(auVar30,auVar24,auVar22);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar15);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar19);
  auVar9 = ZEXT416(0xffffffff);
  auVar20 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar24 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar10,auVar13);
  auVar9 = ZEXT416(0xffffffff);
  auVar25 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar12;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar23,auVar24);
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar34,auVar13);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar21,auVar13);
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar17;
  auVar20 = vectorMultiplyAddFloatingPoint(auVar26,auVar37,auVar20);
  auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
  auVar17 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar9 = ZEXT416(0xffffffff);
  auVar24 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar18,auVar12,auVar15);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar22,auVar11,auVar21);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar23,auVar17);
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar24,auVar24);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar20,auVar10,auVar13);
  auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar15);
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar12;
  auVar19 = vectorMultiplyAddFloatingPoint(auVar20,auVar23,auVar19);
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar18,auVar34,auVar13);
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  puVar3[0x26] = unaff_r30;
  auVar17 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  puVar3[0x25] = unaff_r29;
  puVar3[0x24] = unaff_r28;
  puVar3[0x23] = unaff_r27;
  uVar8 = 0;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar14;
  auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar10,auVar13);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar18,auVar12,auVar11);
  auVar11 = *(undefined1 (*) [16])(puVar3 + 8);
  puVar4 = (undefined4 *)(param_1 + 0x60 & 0xfffffff0);
  puVar4[3] = in_vr2_32_3;
  puVar4[2] = in_vr2_32_2;
  puVar4[1] = in_vr2_32_1;
  *puVar4 = in_vr2_32_0;
  auVar9 = vectorMultiplyAddFloatingPoint(auVar19,auVar9,auVar17);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar15);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar16,auVar9,auVar15);
  *(undefined1 (*) [16])(param_1 + 0x50 & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(param_1 + 0x40 & 0xfffffff0) = auVar9;
  auVar11 = _DAT_004feb80;
  auVar10 = _DAT_004feb70;
  auVar9 = loadVectorLeftIndexed(0x50,0x4feb40);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar7 = param_1;
  do {
    auVar16 = *(undefined1 (*) [16])
               (param_1 + 0x20 +
                ((uint)((LZCOUNT(-(uVar8 & 2)) << 0x3a) >> 0x3f) &
                (param_1 + 0x30) - (param_1 + 0x20)) & 0xfffffff0);
    auVar17 = *(undefined1 (*) [16])
               (param_1 + 0x10 +
                ((uint)((LZCOUNT(-(uVar8 & 4)) << 0x3a) >> 0x3f) & param_1 - (param_1 + 0x10)) &
               0xfffffff0);
    auVar18 = vectorPermute(auVar16,auVar16,auVar10);
    auVar19 = vectorPermute(auVar17,auVar17,auVar11);
    auVar14 = vectorPermute(auVar16,auVar16,auVar11);
    auVar20 = vectorMultiplyAddFloatingPoint(auVar18,auVar19,auVar15);
    auVar23 = vectorPermute(auVar17,auVar17,auVar10);
    auVar12 = *(undefined1 (*) [16])
               (param_1 + 0x40 +
                ((uint)((LZCOUNT(-(uVar8 & 1)) << 0x3a) >> 0x3f) &
                (param_1 + 0x50) - (param_1 + 0x40)) & 0xfffffff0);
    auVar25 = vectorPermute(auVar12,auVar12,auVar10);
    auVar24 = vectorPermute(auVar12,auVar12,auVar11);
    auVar20 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar23,auVar20);
    auVar21 = vectorPermute(auVar12,auVar12,auVar5);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar25,auVar14,auVar15);
    auVar22 = vectorPermute(auVar12,auVar12,auVar6);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar15);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar12,auVar20,auVar15);
    auVar26 = vectorPermute(auVar20,auVar20,auVar5);
    auVar37 = vectorPermute(auVar20,auVar20,auVar6);
    auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar18,auVar14);
    auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar25,auVar23);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar21,auVar26,auVar34);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar22,auVar37,auVar14);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x30,lVar1);
    *(undefined4 *)(puVar3 + 6) = uVar2;
    if (((*(uint *)(puVar3 + 6) & 0x7f800000) != 0) &&
       ((*(uint *)(puVar3 + 6) & 0x7f800000) != 0x7f800000)) {
      auVar21 = loadVectorLeftIndexed(0x30,lVar1);
      auVar12 = auVar12 & (undefined1  [16])0xffffffff;
      auVar22 = vectorReciprocalEstimateFloatingPoint(auVar21);
      auVar14 = ZEXT416(0xffffffff);
      auVar23 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar16 = auVar16 & (undefined1  [16])0xffffffff;
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                           auVar15);
      auVar17 = auVar17 & (undefined1  [16])0xffffffff;
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                           auVar15);
      auVar16 = vectorMultiplyAddFloatingPoint
                          (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar15);
      auVar23 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = ZEXT416(0xffffffff);
      auVar17 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar21,auVar13);
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = vectorAddFloatingPoint(auVar20,auVar19);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar22,auVar14,auVar12);
      auVar12 = vectorAddFloatingPoint(auVar17,auVar16);
      auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar21,auVar13);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar16,auVar23);
      auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar21,auVar13);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar16,auVar18);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar12 ^ (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60),
                           auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar15);
      *(undefined1 (*) [16])(uVar7 + 0x70 & 0xfffffff0) = auVar14;
    }
    uVar8 = uVar8 + 1;
    uVar7 = uVar7 + 0x10;
  } while ((int)uVar8 < 8);
  return;
}



//==== 004ff210  ns=Global  size=0xbc
// sig: undefined FUN_004ff210(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004ff210(double param_1,uint param_2)

{
  undefined8 in_r0;
  int iVar1;
  bool bVar2;
  byte in_cr6;
  undefined1 in_vs34 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar3 = ZEXT416(0);
  auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  iVar1 = 0;
  bVar2 = true;
  auVar3 = loadVectorLeftIndexed(in_r0,0x4ff1c0);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar6 = vectorPermute(in_vs34,auVar3,_DAT_004ff1d0);
  auVar4 = vectorPermute(in_vs34,auVar3,_DAT_004ff1f0);
  auVar3._0_4_ = (float)param_1;
  auVar3._4_4_ = (float)param_1;
  auVar3._8_4_ = (float)param_1;
  auVar3._12_4_ = (float)param_1;
  do {
    if (!bVar2) {
      return false;
    }
    auVar7 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar5);
    auVar7 = vectorPermute(auVar7,auVar7,_DAT_004ff1e0);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar4,auVar8);
    auVar8 = vectorPermute(auVar7,auVar7,_DAT_004ff200);
    auVar7 = vectorAddFloatingPoint(auVar8,auVar7);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorAddFloatingPoint
                       (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar3);
    vectorCompareGreaterThanOrEqualToFloatingPoint(auVar7,auVar5);
    bVar2 = !(bool)(in_cr6 >> 1 & 1);
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 0x10;
  } while (iVar1 < 6);
  return bVar2;
}



//==== 004ff328  ns=fastfunc  size=0x154
// sig: undefined FastCheckBsphere(void)
// callers(3): 0017dd20 water::OceanPass; 00502910 fastfunc::FastCheckBsphereInView; 005029c0 FUN_005029c0
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fastfunc::FastCheckBsphere(double param_1,double param_2,uint param_3)

{
  undefined8 in_r0;
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte in_cr6;
  undefined1 in_vs34 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar6 = ZEXT416(0);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  iVar3 = 0;
  bVar1 = true;
  auVar6 = loadVectorLeftIndexed(in_r0,0x4ff2d0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar8 = vectorPermute(in_vs34,auVar7,_DAT_004ff2e0);
  auVar4 = vectorPermute(in_vs34,auVar7,_DAT_004ff300);
  auVar6._0_4_ = (float)param_1;
  auVar6._4_4_ = (float)param_1;
  auVar6._8_4_ = (float)param_1;
  auVar6._12_4_ = (float)param_1;
  uVar2 = param_3;
  do {
    if (!bVar1) {
      return false;
    }
    auVar10 = *(undefined1 (*) [16])(uVar2 & 0xfffffff0);
    auVar12 = vectorMultiplyAddFloatingPoint(auVar10,auVar8,auVar5);
    auVar10 = vectorPermute(auVar10,auVar10,_DAT_004ff2f0);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar4,auVar12);
    auVar12 = vectorPermute(auVar10,auVar10,_DAT_004ff310);
    auVar10 = vectorAddFloatingPoint(auVar12,auVar10);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = vectorAddFloatingPoint
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar6);
    vectorCompareGreaterThanOrEqualToFloatingPoint(auVar10,auVar5);
    bVar1 = !(bool)(in_cr6 >> 1 & 1);
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 + 0x10;
  } while (iVar3 < 5);
  if (bVar1) {
    auVar4 = vectorSubtractFloatingPoint
                       (*(undefined1 (*) [16])(param_3 + 0x60 & 0xfffffff0),in_vs34);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar4,auVar4,auVar5);
    auVar12 = vectorPermute(auVar4,auVar4,_DAT_004ff2f0);
    auVar8 = vectorPermute(auVar4,auVar4,_DAT_004ff310);
    auVar4 = loadVectorLeftIndexed(0x50,0x4ff2d0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    bVar1 = false;
    auVar10 = vectorMultiplyAddFloatingPoint(auVar12,auVar12,auVar10);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar10);
    auVar10 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar8);
    auVar12 = vectorCompareEqualToFloatingPoint(auVar8,auVar5);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar8,auVar5);
    auVar11 = vectorCompareEqualToFloatingPoint(auVar10,auVar5);
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar10,auVar9,auVar7);
    auVar5._0_4_ = (float)param_2;
    auVar5._4_4_ = (float)param_2;
    auVar5._8_4_ = (float)param_2;
    auVar5._12_4_ = (float)param_2;
    auVar4 = vectorMultiplyAddFloatingPoint(auVar7,auVar4,auVar9);
    auVar4 = vectorConditionalSelect(auVar4,auVar8,auVar12 | auVar11);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorSubtractFloatingPoint
                       (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar6);
    vectorCompareGreaterThanFloatingPoint(auVar6,auVar5);
    if ((bool)(in_cr6 >> 1 & 1)) {
      bVar1 = true;
    }
  }
  return bVar1;
}



//==== 004ff480  ns=Global  size=0x2c
// sig: undefined FUN_004ff480(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 0065f614: 'Post Break\n'

int32_t FUN_004ff480(void)

{
  int32_t iVar1;
  
  iVar1 = libc::printf("Post Break\n");
  return iVar1;
}



//==== 004ff4ac  ns=Global  size=0x74
// sig: undefined FUN_004ff4ac(void)
// callers(0): 
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ff4ac(undefined8 param_1,undefined8 param_2)

{
  FUN_005cd52c(&DAT_01593358,param_1,param_2);
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_01593358);
  }
  return;
}



//==== 004ff520  ns=idol  size=0xc0
// sig: undefined print_mem_error(void)
// callers(5): 004fe098 idol::AllocateMemAlign; 004fe52c idol::kalloc; 004fe61c FUN_004fe61c; 004fe68c FUN_004fe68c; 004fe6ec FUN_004fe6ec
// callees(3): 004fff0c FUN_004fff0c; 005cd098 libc::printf; 005cd52c FUN_005cd52c
// strings: 0065f614: 'Post Break\n'

int32_t idol::print_mem_error
                  (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int32_t iVar1;
  undefined4 uStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000034 = (undefined4)param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_1,&stack0x00000038);
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_01593358);
  }
  iVar1 = libc::printf("Post Break\n");
  return iVar1;
}



//==== 004ff5e0  ns=Global  size=0xc
// sig: undefined FUN_004ff5e0(void)
// callers(0): 
// callees(0): 

void FUN_004ff5e0(undefined4 param_1)

{
  DAT_00902eb8 = param_1;
  return;
}



//==== 004ff5ec  ns=Global  size=0xc
// sig: undefined FUN_004ff5ec(void)
// callers(0): 
// callees(0): 

void FUN_004ff5ec(undefined *param_1)

{
  PTR_PTR_00902eb4 = param_1;
  return;
}



//==== 004ff5f8  ns=Global  size=0xc
// sig: undefined FUN_004ff5f8(void)
// callers(0): 
// callees(0): 

void FUN_004ff5f8(undefined *param_1)

{
  PTR_PTR_00902eb0 = param_1;
  return;
}



//==== 004ff604  ns=Global  size=0xc
// sig: undefined FUN_004ff604(void)
// callers(0): 
// callees(0): 

void FUN_004ff604(undefined *param_1)

{
  PTR_PTR_00902eac = param_1;
  return;
}



//==== 004ff610  ns=Global  size=0xc
// sig: undefined FUN_004ff610(void)
// callers(0): 
// callees(0): 

void FUN_004ff610(undefined *param_1)

{
  PTR_PTR_00902ea8 = param_1;
  return;
}



//==== 004ff61c  ns=Global  size=0x2c
// sig: undefined FUN_004ff61c(void)
// callers(0): 
// callees(0): 

void FUN_004ff61c(undefined *param_1,undefined *param_2,undefined *param_3,undefined4 param_4)

{
  PTR_PTR_00902ea8 = param_1;
  DAT_00902eb8 = param_4;
  PTR_PTR_00902eac = param_2;
  PTR_PTR_00902eb0 = param_2;
  PTR_PTR_00902eb4 = param_3;
  return;
}



//==== 004ff648  ns=Global  size=0x2c
// sig: undefined FUN_004ff648(void)
// callers(0): 
// callees(0): 

void FUN_004ff648(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                 undefined4 param_5)

{
  PTR_PTR_00902ea8 = param_1;
  DAT_00902eb8 = param_5;
  PTR_PTR_00902eac = param_2;
  PTR_PTR_00902eb0 = param_3;
  PTR_PTR_00902eb4 = param_4;
  return;
}



//==== 004ff674  ns=Global  size=0x5c
// sig: undefined FUN_004ff674(void)
// callers(0): 
// callees(0): 

void FUN_004ff674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_00902eb8 != (undefined4 *)0x0) {
    (*(code *)*DAT_00902eb8)(param_1,param_2,param_3);
  }
  return;
}



//==== 004ff6d0  ns=Global  size=0xb0
// sig: undefined print_tty(void)
// callers(35): 0001401c boot::boot; 004e6038 FUN_004e6038; 004e64b4 FUN_004e64b4; 004e668c FUN_004e668c; 004eb5e4 FUN_004eb5e4; 004eb678 FUN_004eb678; 004ec160 idol::Pad_PS_Update; 004eda68 idol_draw::Insert_WaitCmd_Marker; 004ee38c FUN_004ee38c; 004ee3fc FUN_004ee3fc; 004ee65c FUN_004ee65c; 004ee818 FUN_004ee818; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc; 004eedc8 FUN_004eedc8; 004eef00 FUN_004eef00; 004f5be4 FUN_004f5be4; 004f6278 FUN_004f6278; 004f63c0 FUN_004f63c0; 004f64bc FUN_004f64bc; 004f6624 FUN_004f6624; 004f69b8 FUN_004f69b8; 004f7128 FUN_004f7128; 004f7300 FUN_004f7300; 004f73a4 FUN_004f73a4
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void print_tty(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000034 = (undefined4)param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_1,&stack0x00000038);
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_01593358);
  }
  return;
}



//==== 004ff780  ns=Global  size=0xe8
// sig: undefined FUN_004ff780(void)
// callers(0): 
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ff780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000034 = (undefined4)param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_1,&stack0x00000038);
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_01593358);
  }
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_0065f620);
  }
  return;
}



//==== 004ff868  ns=Global  size=0x74
// sig: undefined FUN_004ff868(void)
// callers(0): 
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ff868(undefined8 param_1,undefined8 param_2)

{
  FUN_005cd52c(&DAT_01593358,param_1,param_2);
  if (PTR_PTR_00902eac != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eac)(3,&DAT_01593358);
  }
  return;
}



//==== 004ff8dc  ns=Global  size=0xb0
// sig: undefined FUN_004ff8dc(void)
// callers(0): 
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ff8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000034 = (undefined4)param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_1,&stack0x00000038);
  if (PTR_PTR_00902eac != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eac)(3,&DAT_01593358);
  }
  return;
}



//==== 004ff98c  ns=Global  size=0xc0
// sig: undefined FUN_004ff98c(void)
// callers(3): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere
// callees(3): 004fff0c FUN_004fff0c; 005cd098 libc::printf; 005cd52c FUN_005cd52c
// strings: 0065f614: 'Post Break\n'

int32_t FUN_004ff98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int32_t iVar1;
  undefined4 uStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000034 = (undefined4)param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_1,&stack0x00000038);
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_01593358);
  }
  iVar1 = libc::printf("Post Break\n");
  return iVar1;
}



//==== 004ffa4c  ns=Global  size=0x78
// sig: undefined FUN_004ffa4c(void)
// callers(0): 
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ffa4c(undefined8 param_1)

{
  FUN_005cd52c(&DAT_01593358);
  if (PTR_PTR_00902eb0 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb0)(param_1,&DAT_01593358);
  }
  return;
}



//==== 004ffac4  ns=Global  size=0xb8
// sig: undefined FUN_004ffac4(void)
// callers(9): 005c1a58 FUN_005c1a58; 005c1ab8 FUN_005c1ab8; 005c1b10 FUN_005c1b10; 005c1b74 FUN_005c1b74; 005c1bdc FUN_005c1bdc; 005c1c34 FUN_005c1c34; 005c1c98 FUN_005c1c98; 005c1d30 FUN_005c1d30; 005c1db4 FUN_005c1db4
// callees(3): 004fff0c FUN_004fff0c; 005cd098 libc::printf; 005cd52c FUN_005cd52c
// strings: 0065f614: 'Post Break\n'

int32_t FUN_004ffac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int32_t iVar1;
  undefined4 uStack0000003c;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack0000003c = (undefined4)param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_2,&stack0x00000040);
  if (PTR_PTR_00902eb0 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb0)(param_1,&DAT_01593358);
  }
  iVar1 = libc::printf("Post Break\n");
  return iVar1;
}



//==== 004ffb7c  ns=Global  size=0x78
// sig: undefined FUN_004ffb7c(void)
// callers(0): 
// callees(2): 004fff34 FUN_004fff34; 005cd52c FUN_005cd52c

void FUN_004ffb7c(undefined1 param_1)

{
  FUN_005cd52c(&DAT_01593358);
  if (PTR_PTR_00902eb4 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb4)(param_1,&DAT_01593358);
  }
  return;
}



//==== 004ffbf4  ns=Global  size=0xa8
// sig: undefined FUN_004ffbf4(void)
// callers(0): 
// callees(2): 004fff34 FUN_004fff34; 005cd52c FUN_005cd52c

void FUN_004ffbf4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack0000003c;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack0000003c = (undefined4)param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_2,&stack0x00000040);
  if (PTR_PTR_00902eb4 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb4)(param_1,&DAT_01593358);
  }
  return;
}



//==== 004ffc9c  ns=Global  size=0xb0
// sig: void print_tty2(char * format, ...)
// callers(84): 00013c68 sys::sysutil_gameexit_callback; 0001401c boot::boot; 0007affc Global_QuickMovieMalloc; 000e8c68 memcard::memcard_print_TimeForPain; 000e8ca0 memcard::memcard_RestoreSaveGame; 000e8f6c memcard::memcard_print_SavingGameCB_PS3; 000e8f9c memcard::memcard_print_LoadingCB_PS3; 0011b524 mobyutil::MB_TrophyFromSkillPoint; 004d4b40 FUN_004d4b40; 004d4c88 FUN_004d4c88; 004d59e8 FUN_004d59e8; 004de940 FUN_004de940; 004ded28 FUN_004ded28; 004e3538 FUN_004e3538; 004e61f4 FUN_004e61f4; 004e668c FUN_004e668c; 004e6734 FUN_004e6734; 004e70a4 FUN_004e70a4; 004e7170 FUN_004e7170; 004e77f4 FUN_004e77f4; 004e785c FUN_004e785c; 004e7920 FUN_004e7920; 004e79a4 FUN_004e79a4; 004e7a34 idol::SaveSystem_PS::RunSaveSystem; 004e7d94 FUN_004e7d94
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void print_tty2(char *format,...)

{
  undefined8 in_r4;
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  pcStack00000034 = format;
  uStack00000038 = in_r4;
  uStack00000040 = in_r5;
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(&DAT_01593358,format,&stack0x00000038);
  if (PTR_PTR_00902eb0 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb0)(4,&DAT_01593358);
  }
  return;
}



//==== 004ffd4c  ns=Global  size=0xa8
// sig: undefined FUN_004ffd4c(void)
// callers(3): 004e64b4 FUN_004e64b4; 004efb80 FUN_004efb80; 004fe778 FUN_004fe778
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ffd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack0000003c;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack0000003c = (undefined4)param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_2,&stack0x00000040);
  if (PTR_PTR_00902eb0 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb0)(param_1,&DAT_01593358);
  }
  return;
}



//==== 004ffdf4  ns=Global  size=0xe0
// sig: undefined FUN_004ffdf4(void)
// callers(0): 
// callees(2): 004fff0c FUN_004fff0c; 005cd52c FUN_005cd52c

void FUN_004ffdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack0000003c;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack0000003c = (undefined4)param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cd52c(&DAT_01593358,param_2,&stack0x00000040);
  if (PTR_PTR_00902eb0 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902eb0)(param_1,&DAT_01593358);
  }
  if (PTR_PTR_00902ea8 != (undefined *)0x0) {
    (**(code **)PTR_PTR_00902ea8)(1,&DAT_0065f620);
  }
  return;
}



//==== 004ffed4  ns=Global  size=0x10
// sig: undefined FUN_004ffed4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004ffed4(void)

{
  return DAT_00902ea0;
}



//==== 004ffee4  ns=Global  size=0x10
// sig: undefined FUN_004ffee4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004ffee4(void)

{
  return DAT_00902ea4;
}



//==== 004ffef4  ns=Global  size=0xc
// sig: undefined FUN_004ffef4(void)
// callers(0): 
// callees(0): 

void FUN_004ffef4(undefined4 param_1)

{
  DAT_00902ea0 = param_1;
  return;
}



//==== 004fff00  ns=Global  size=0xc
// sig: undefined FUN_004fff00(void)
// callers(0): 
// callees(0): 

void FUN_004fff00(undefined4 param_1)

{
  DAT_00902ea4 = param_1;
  return;
}



//==== 004fff0c  ns=Global  size=0x28
// sig: undefined FUN_004fff0c(void)
// callers(12): 004ff4ac FUN_004ff4ac; 004ff520 idol::print_mem_error; 004ff6d0 print_tty; 004ff780 FUN_004ff780; 004ff868 FUN_004ff868; 004ff8dc FUN_004ff8dc; 004ff98c FUN_004ff98c; 004ffa4c FUN_004ffa4c; 004ffac4 FUN_004ffac4; 004ffc9c print_tty2; 004ffd4c FUN_004ffd4c; 004ffdf4 FUN_004ffdf4
// callees(1): 005cd098 libc::printf

int32_t FUN_004fff0c(undefined8 param_1,char *param_2)

{
  int32_t iVar1;
  
  iVar1 = libc::printf(param_2);
  return iVar1;
}



//==== 004fff34  ns=Global  size=0x28
// sig: undefined FUN_004fff34(void)
// callers(2): 004ffb7c FUN_004ffb7c; 004ffbf4 FUN_004ffbf4
// callees(1): 005cd098 libc::printf

int32_t FUN_004fff34(undefined8 param_1,char *param_2)

{
  int32_t iVar1;
  
  iVar1 = libc::printf(param_2);
  return iVar1;
}



//==== 004fff60  ns=fastfunc  size=0x54
// sig: undefined FastDecTimerS32(void)
// callers(428): 00015120 mobyupdate_unsorted::Moby1267_UpdateTargetLock; 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001e700 mobyupdate_helpers::M336_0001e700; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 000371e0 camera::camera10::Cam10_000371e0; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 000473f0 camera::camera4::ActivateCamera_4; 00048510 camera::camera5::UpdateMobyDrivenCam; 00051d40 camera::Camera_BlendCamsPolQuat; 000528e8 camera::HandleCameraShake; 0007ba00 help::Help_Update; 00087a88 hero::Hero_UpdateTimers; 00092d58 hero::Hero_UpdateIdleLook; 00093c98 hero::Hero_UpdateCheatTweaks; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 000eb3c0 mobyattack::UpdateMoby_1427_GC_Shockwave; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00103710 mobyutil::MB_UpdateLegAnimMoveTurning
// callees(0): 

undefined8 fastfunc::FastDecTimerS32(uint *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = (uint)(1 - (longlong)(int)uVar2 >> 0x3f) & uVar2 - 1;
    *param_1 = uVar2;
    if ((int)uVar2 < 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== 004fffb4  ns=fastfunc  size=0x58
// sig: undefined FastDecTimerS16(void)
// callers(236): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 0001b540 mobyupdate_unsorted::UpdateMoby_184; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0002c578 camera0::HandleSpecialTargetActivation; 0002d638 camera0::HandleSpecialTargetUpVec; 0002e1c8 camera0::HandleSpecialPitchTarget; 0002e3a0 camera0::UpdateCamTarget_0; 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 00032100 camera0::UpdateCamCollisions_0; 000337a0 camera0::UpdateCamRotation_0; 00040440 camera::camera19::UpdateCamera_19; 00041850 camera::camera20::UpdateCamera_20; 000802a0 hero::Hero_UpdateGlowAndBlink; 00082030 hero::Hero_UpdateQueuedSounds; 00085b30 hero::Hero_HandleGadgetSwitching; 00087a88 hero::Hero_UpdateTimers; 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate; 00097700 hero::Hero_SpawnLavaAssParticles; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 000cd4b8 hud::UpdateQuickSelect; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket
// callees(0): 

undefined8 fastfunc::FastDecTimerS16(ushort *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = (ushort)(1 - (longlong)(short)uVar2 >> 0x3f) & uVar2 - 1;
    *param_1 = uVar2;
    if ((short)uVar2 < 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



