//==== 005d000c  ns=Global  size=0x4
// sig: undefined FUN_005d000c(void)
// callers(1): 00014bc0 crt0::_libc_cleanup
// callees(0): 

void FUN_005d000c(void)

{
  return;
}



//==== 005d0010  ns=Global  size=0x60
// sig: undefined FUN_005d0010(void)
// callers(0): 
// callees(2): 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

void FUN_005d0010(uint param_1)

{
  FUN_005cbbec(4);
  if (param_1 < 0x100) {
    *(undefined4 *)(PTR_DAT_0071c418 + param_1 * 4) = 0xffffffff;
  }
  FUN_005cbb70(4);
  return;
}



//==== 005d0070  ns=Global  size=0xd0
// sig: undefined FUN_005d0070(void)
// callers(0): 
// callees(2): 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

int FUN_005d0070(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_005cbbec(4);
  puVar1 = PTR_DAT_0071c418;
  iVar3 = 0;
  lVar4 = 0x100;
  piVar2 = (int *)PTR_DAT_0071c418;
  do {
    if (*piVar2 == -1) {
      *(undefined4 *)(PTR_DAT_0071c418 + iVar3 * 4) = param_1;
      *(undefined4 *)(puVar1 + iVar3 * 4 + 0x400) = param_2;
      FUN_005cbb70(4);
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar4 != 0);
  FUN_005cbb70(4);
  return -1;
}



//==== 005d0140  ns=libc  size=0xd4
// sig: undefined memset(void)
// callers(285): 0001055c boot::ZeroFillKeyGlobals; 00013dac boot::ResetLevelGlobals; 000148f8 boot::StaticInit_BootGlobals; 0006ad48 draw::DrawSubtitles; 00071ac0 draw::ResetHUDPass; 000e1b28 map::Map_LoadPlanetMap; 000e7154 memcard::memcard_SetupNewGameGlobals; 000e7d48 memcard::memcard_ConvertSaveMsgString; 000e8268 memcard::memcard_ConstructSaveString; 000e8888 memcard::memcard_PerformOperation; 000e8ca0 memcard::memcard_RestoreSaveGame; 000f595c mobyfunc::Moby_BuildJointMatrices; 000f7af0 mobyfunc::MB_BuildDrawEntry; 000f959c mobyfunc::FindMobysCloseToUpdate; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000f9fc0 mobyfunc::MB_ComputeSelectedJointPos; 000fa940 mobyfunc::InterpolateAnimation; 0013ab10 pause::ResetMenuCamera; 0013b108 update::OpenPauseMenu; 0013d22c pause::InitMenuTextIds; 0013d428 pause::FrontEnd_InitMenu; 0013d8a0 pause::FrontEnd_UpdateMenu; 0013de20 pause::FrontEnd_DrawMenu; 00142e38 pause::MapPage_Update; 00148688 pause::ImageWidget_OnEnter
// callees(0): 

void libc::memset(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar3 = (undefined8 *)((int)param_1 + param_3);
  if (7 < param_3) {
    *(undefined1 *)param_1 = param_2;
    puVar4 = (undefined2 *)((uint)((int)param_1 + 1) & 0xfffffffe);
    uVar1 = CONCAT11(param_2,param_2);
    puVar8 = (undefined4 *)((uint)(puVar4 + 1) & 0xfffffffc);
    *puVar4 = uVar1;
    uVar2 = CONCAT22(uVar1,uVar1);
    *puVar8 = uVar2;
    uVar5 = CONCAT44(uVar2,uVar2);
    for (param_1 = (undefined8 *)((uint)(puVar8 + 1) & 0xfffffff8);
        param_1 <= (undefined8 *)((uint)puVar3 & 0xfffffff8) + -8; param_1 = param_1 + 8) {
      param_1[7] = uVar5;
      param_1[6] = uVar5;
      param_1[5] = uVar5;
      param_1[4] = uVar5;
      param_1[3] = uVar5;
      param_1[2] = uVar5;
      param_1[1] = uVar5;
      *param_1 = uVar5;
    }
    for (; param_1 < (undefined8 *)((uint)puVar3 & 0xfffffff8); param_1 = param_1 + 1) {
      *param_1 = uVar5;
    }
  }
  if (puVar3 <= param_1) {
    return;
  }
  iVar6 = (int)puVar3 - (int)param_1;
  iVar9 = 0;
  do {
    puVar7 = (undefined1 *)((int)param_1 + iVar9);
    iVar9 = iVar9 + 1;
    *puVar7 = param_2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



//==== 005d0218  ns=libc  size=0x150
// sig: int memcmp(void * __s1, void * __s2, size_t __n)
// callers(14): 000e6cd8 memcard::memcard_RestoreData; 004ef248 FUN_004ef248; 004ef4d0 FUN_004ef4d0; 004f77a0 FUN_004f77a0; 0051c978 FUN_0051c978; 0053022c FUN_0053022c; 005303f4 FUN_005303f4; 00530480 FUN_00530480; 005344e8 FUN_005344e8; 00596384 FUN_00596384; 005b2b30 FUN_005b2b30; 005b51d0 FUN_005b51d0; 005b5d80 FUN_005b5d80; 00649110 FUN_00649110
// callees(0): 

int libc::memcmp(void *__s1,void *__s2,size_t __n)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar5 = (ulonglong)(int)__n;
  if (__n < 8) {
    if (__n == 0) {
      return 0;
    }
  }
  else {
    if ((((uint)__s1 | (uint)__s2) & 7) == 0) {
                    /* WARNING: Load size is inaccurate */
      uVar3 = *__s1;
                    /* WARNING: Load size is inaccurate */
      uVar8 = *__s2;
      uVar5 = uVar5 - 8;
      if (uVar3 != uVar8) {
LAB_005d0350:
        if (uVar8 <= uVar3) {
          return 1;
        }
        return -1;
      }
      __s1 = (void *)((int)__s1 + 8);
      __s2 = (void *)((int)__s2 + 8);
      uVar7 = uVar5 >> 3 & 0x1fffffff;
      if (7 < (uVar5 & 0xffffffff)) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar3 = *__s1;
                    /* WARNING: Load size is inaccurate */
          uVar8 = *__s2;
          uVar5 = uVar5 - 8;
          __s1 = (void *)((int)__s1 + 8);
          __s2 = (void *)((int)__s2 + 8);
          if (uVar3 != uVar8) goto LAB_005d0350;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iVar6 = (int)uVar5;
    }
    else {
      if ((((uint)__s1 | (uint)__s2) & 3) != 0) goto LAB_005d0288;
                    /* WARNING: Load size is inaccurate */
      uVar4 = *__s1;
                    /* WARNING: Load size is inaccurate */
      uVar9 = *__s2;
      uVar5 = uVar5 - 4;
      if (uVar4 != uVar9) {
LAB_005d0360:
        if (uVar4 < uVar9) {
          return -1;
        }
        return 1;
      }
      __s1 = (void *)((int)__s1 + 4);
      __s2 = (void *)((int)__s2 + 4);
      uVar3 = uVar5 >> 2 & 0x3fffffff;
      if (3 < (uVar5 & 0xffffffff)) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar4 = *__s1;
                    /* WARNING: Load size is inaccurate */
          uVar9 = *__s2;
          uVar5 = uVar5 - 4;
          __s1 = (void *)((int)__s1 + 4);
          __s2 = (void *)((int)__s2 + 4);
          if (uVar4 != uVar9) goto LAB_005d0360;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      iVar6 = (int)uVar5;
    }
    if (iVar6 == 0) {
      return 0;
    }
  }
LAB_005d0288:
  uVar5 = uVar5 & 0xffffffff;
                    /* WARNING: Load size is inaccurate */
  bVar1 = *__s1;
                    /* WARNING: Load size is inaccurate */
  bVar2 = *__s2;
  if (bVar1 == bVar2) {
    do {
      __s1 = (void *)((int)__s1 + 1);
      __s2 = (void *)((int)__s2 + 1);
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        return 0;
      }
                    /* WARNING: Load size is inaccurate */
      bVar1 = *__s1;
                    /* WARNING: Load size is inaccurate */
      bVar2 = *__s2;
    } while (bVar1 == bVar2);
  }
  if (bVar2 <= bVar1) {
    return 1;
  }
  return -1;
}



//==== 005d0370  ns=Global  size=0x44
// sig: undefined FUN_005d0370(void)
// callers(3): 005c4f10 FUN_005c4f10; 005cbb70 FUN_005cbb70; 005cbbbc FUN_005cbbbc
// callees(1): 006504e4 sys::sys_lwmutex_unlock

void FUN_005d0370(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    sys::sys_lwmutex_unlock(param_1 + 4);
  }
  return;
}



//==== 005d03b4  ns=Global  size=0xa8
// sig: undefined FUN_005d03b4(void)
// callers(3): 005c4f10 FUN_005c4f10; 005cbbec FUN_005cbbec; 005cbc38 FUN_005cbc38
// callees(2): 006504c4 sys::sys_lwmutex_lock; 006505c4 sys::sys_ppu_thread_get_id

void FUN_005d03b4(int *param_1)

{
  int iVar1;
  longlong local_30 [3];
  
  sys::sys_ppu_thread_get_id(local_30);
  if (*param_1 != 0) {
    if (*(longlong *)(param_1 + 2) == local_30[0]) {
      *param_1 = *param_1 + 1;
      return;
    }
  }
  iVar1 = sys::sys_lwmutex_lock(param_1 + 4,0);
  if (iVar1 == 0) {
    *(longlong *)(param_1 + 2) = local_30[0];
    *param_1 = *param_1 + 1;
  }
  return;
}



//==== 005d045c  ns=Global  size=0x2c
// sig: undefined FUN_005d045c(void)
// callers(2): 005c4f10 FUN_005c4f10; 005cbd60 FUN_005cbd60
// callees(1): 00650784 sys::sys_lwmutex_destroy

void FUN_005d045c(int param_1)

{
  sys::sys_lwmutex_destroy(param_1 + 0x10);
  return;
}



//==== 005d0488  ns=Global  size=0x28
// sig: undefined FUN_005d0488(void)
// callers(1): 00014bc0 crt0::_libc_cleanup
// callees(1): 00650784 sys::sys_lwmutex_destroy

void FUN_005d0488(void)

{
  sys::sys_lwmutex_destroy(PTR_DAT_0071c41c);
  return;
}



//==== 005d04b0  ns=Global  size=0x50
// sig: undefined FUN_005d04b0(void)
// callers(2): 005c8f4c FUN_005c8f4c; 005cbc68 FUN_005cbc68
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

void FUN_005d04b0(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c420;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = sys::sys_lwmutex_create(param_1 + 4,puVar1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0504  ns=Global  size=0xb0
// sig: undefined FUN_005d0504(void)
// callers(1): 005d0b80 FUN_005d0b80
// callees(3): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

void FUN_005d0504(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c41c;
  if (*param_1 != 0) {
    return;
  }
  iVar2 = sys::sys_lwmutex_lock(PTR_DAT_0071c41c,0);
  if (iVar2 == 0) {
    if (*param_1 == 0) {
      (*(code *)*param_2)();
      *param_1 = 2;
    }
    iVar2 = sys::sys_lwmutex_unlock(puVar1);
    if (iVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d05b8  ns=Global  size=0x38
// sig: undefined FUN_005d05b8(void)
// callers(1): 00014c7c boot::entry
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

void FUN_005d05b8(void)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_create(PTR_DAT_0071c41c,PTR_DAT_0071c420);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d05f4  ns=Global  size=0xac
// sig: undefined FUN_005d05f4(void)
// callers(0): 
// callees(3): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

undefined4 FUN_005d05f4(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c424;
  if (0x31 < param_1) {
    return 1;
  }
  iVar2 = sys::sys_lwmutex_lock(PTR_DAT_0071c424,0);
  if (iVar2 == 0) {
    puVar1[param_1 * 8 + 0x18] = 0;
    if ((int)param_1 < *(int *)(puVar1 + 0x1a8)) {
      *(uint *)(puVar1 + 0x1a8) = param_1;
    }
    iVar2 = sys::sys_lwmutex_unlock(puVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d06a4  ns=Global  size=0xbc
// sig: undefined FUN_005d06a4(void)
// callers(1): 005d0764 FUN_005d0764
// callees(4): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

int FUN_005d06a4(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iStack_64;
  longlong local_20 [2];
  
  sys::sys_ppu_thread_get_id(local_20);
  iVar4 = *(int *)(iStack_64 + -0x5f04);
  iVar3 = sys::sys_lwmutex_lock(iVar4,0);
  if (iVar3 == 0) {
    piVar1 = *(int **)(iVar4 + 0x1ac);
    if (piVar1 == (int *)0x0) {
LAB_005d0720:
      iVar3 = 0;
    }
    else {
      lVar2 = *(longlong *)(piVar1 + 2);
      while (lVar2 != local_20[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005d0720;
        lVar2 = *(longlong *)(piVar1 + 2);
      }
      iVar3 = piVar1[4];
    }
    iVar4 = sys::sys_lwmutex_unlock(iVar4);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0764  ns=Global  size=0xf0
// sig: undefined FUN_005d0764(void)
// callers(0): 
// callees(1): 005d06a4 FUN_005d06a4

void FUN_005d0764(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar4 = FUN_005d06a4();
  puVar3 = PTR_DAT_0071c428;
  if (iVar4 != 0) {
    iVar6 = 1;
    while( true ) {
      bVar5 = false;
      iVar8 = 0;
      pcVar7 = puVar3;
      do {
        if (*pcVar7 != '\0') {
          puVar2 = *(undefined4 **)(pcVar7 + 4);
          if ((puVar2 != (undefined4 *)0x0) && (*(int *)(iVar8 + iVar4) != 0)) {
            *(int *)(iVar8 + iVar4) = 0;
            (*(code *)*puVar2)();
            bVar5 = true;
          }
        }
        bVar1 = iVar8 != 0xc4;
        iVar8 = iVar8 + 4;
        pcVar7 = pcVar7 + 8;
      } while (bVar1);
      if ((!bVar5) || (iVar6 == 4)) break;
      iVar6 = iVar6 + 1;
    }
  }
  return;
}



//==== 005d0854  ns=Global  size=0xf0
// sig: undefined FUN_005d0854(void)
// callers(12): 005fca40 FUN_005fca40; 005fcc50 FUN_005fcc50; 005fccc8 FUN_005fccc8; 005fcf70 FUN_005fcf70; 005fd004 FUN_005fd004; 005fd050 FUN_005fd050; 005fd0bc FUN_005fd0bc; 005fd120 FUN_005fd120; 005fd1f0 FUN_005fd1f0; 005fd2a0 FUN_005fd2a0; 005fd308 FUN_005fd308; 005fd4d0 FUN_005fd4d0
// callees(4): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

int FUN_005d0854(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iStack_64;
  longlong local_20 [2];
  
  sys::sys_ppu_thread_get_id(local_20);
  if ((0x31 < param_1) ||
     (iVar4 = *(int *)(iStack_64 + -0x5f04), *(char *)(param_1 * 8 + iVar4 + 0x18) == '\0')) {
    return 0;
  }
  iVar3 = sys::sys_lwmutex_lock(iVar4,0);
  if (iVar3 == 0) {
    piVar1 = *(int **)(iVar4 + 0x1ac);
    if (piVar1 == (int *)0x0) {
LAB_005d0914:
      iVar3 = 0;
    }
    else {
      lVar2 = *(longlong *)(piVar1 + 2);
      while (lVar2 != local_20[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005d0914;
        lVar2 = *(longlong *)(piVar1 + 2);
      }
      iVar3 = piVar1[param_1 + 4];
    }
    iVar4 = sys::sys_lwmutex_unlock(iVar4);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0948  ns=Global  size=0xf0
// sig: undefined FUN_005d0948(void)
// callers(0): 
// callees(5): 005c4840 idol::abort; 005d5838 FUN_005d5838; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

undefined4 FUN_005d0948(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iStack_84;
  undefined8 local_40 [3];
  
  sys::sys_ppu_thread_get_id(local_40);
  puVar1 = (undefined4 *)FUN_005d5838(0xd8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(iStack_84 + -0x5f04);
  iVar2 = sys::sys_lwmutex_lock(iVar3,0);
  if (iVar2 == 0) {
    *puVar1 = *(undefined4 *)(iVar3 + 0x1ac);
    *(undefined8 *)(puVar1 + 2) = local_40[0];
    puVar1[4] = param_1;
    *(undefined4 **)(iVar3 + 0x1ac) = puVar1;
    iVar3 = sys::sys_lwmutex_unlock(iVar3);
    if (iVar3 == 0) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0a3c  ns=Global  size=0x140
// sig: undefined FUN_005d0a3c(void)
// callers(2): 005fd308 FUN_005fd308; 005fd570 FUN_005fd570
// callees(5): 005c4840 idol::abort; 005d57d4 FUN_005d57d4; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

undefined4 FUN_005d0a3c(uint param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_74;
  longlong local_30 [3];
  
  sys::sys_ppu_thread_get_id(local_30);
  if ((0x31 < param_1) ||
     (iVar5 = *(int *)(iStack_74 + -0x5f04), *(char *)(param_1 * 8 + iVar5 + 0x18) == '\0')) {
    return 1;
  }
  iVar3 = sys::sys_lwmutex_lock(iVar5,0);
  if (iVar3 == 0) {
    piVar1 = *(int **)(iVar5 + 0x1ac);
    if (piVar1 == (int *)0x0) {
LAB_005d0b08:
      puVar4 = (undefined4 *)FUN_005d57d4(1,0xd8);
      if (puVar4 == (undefined4 *)0x0) goto LAB_005d0b64;
      *puVar4 = *(undefined4 *)(iVar5 + 0x1ac);
      *(longlong *)(puVar4 + 2) = local_30[0];
      *(undefined4 **)(iVar5 + 0x1ac) = puVar4;
      puVar4[param_1 + 4] = param_2;
    }
    else {
      lVar2 = *(longlong *)(piVar1 + 2);
      while (lVar2 != local_30[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005d0b08;
        lVar2 = *(longlong *)(piVar1 + 2);
      }
      piVar1[param_1 + 4] = param_2;
    }
    iVar5 = sys::sys_lwmutex_unlock(iVar5);
    if (iVar5 == 0) {
      return 0;
    }
  }
LAB_005d0b64:
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0b80  ns=Global  size=0x174
// sig: undefined FUN_005d0b80(void)
// callers(1): 005fc620 FUN_005fc620
// callees(4): 005c4840 idol::abort; 005d0504 FUN_005d0504; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

undefined4 FUN_005d0b80(uint *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  
  puVar4 = PTR_DAT_0071c424;
  FUN_005d0504(PTR_DAT_0071c424 + 0x1b0,PTR_PTR_0071c42c);
  iVar5 = sys::sys_lwmutex_lock(puVar4,0);
  if (iVar5 == 0) {
    uVar7 = *(uint *)(puVar4 + 0x1a8);
    uVar6 = (ulonglong)uVar7;
    if ((int)uVar7 < 0x32) {
      iVar5 = uVar7 * 8;
      if (puVar4[iVar5 + 0x18] != '\0') {
        uVar10 = 0x32 - uVar6 & 0xffffffff;
        pcVar8 = puVar4 + iVar5 + 0x20;
        do {
          uVar6 = uVar6 + 1;
          uVar10 = uVar10 - 1;
          uVar7 = (uint)uVar6;
          if (uVar10 == 0) {
            *(uint *)(puVar4 + 0x1a8) = uVar7;
            goto LAB_005d0c34;
          }
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 8;
        } while (cVar1 != '\0');
        iVar5 = (int)((uVar6 & 0x1fffffff) << 3);
        *(uint *)(puVar4 + 0x1a8) = uVar7;
      }
      *param_1 = uVar7;
      *(uint *)(puVar4 + 0x1a8) = uVar7 + 1;
      puVar4[iVar5 + 0x18] = 1;
      uVar7 = *param_1;
      puVar2 = *(undefined4 **)(puVar4 + 0x1ac);
      *(undefined4 *)(puVar4 + uVar7 * 8 + 0x1c) = param_2;
      while (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)*puVar2;
        puVar2[uVar7 + 4] = 0;
        puVar2 = puVar3;
      }
      uVar9 = 0;
      iVar5 = sys::sys_lwmutex_unlock(puVar4);
    }
    else {
LAB_005d0c34:
      uVar9 = 1;
      iVar5 = sys::sys_lwmutex_unlock(puVar4);
    }
    if (iVar5 == 0) {
      return uVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0cf8  ns=Global  size=0x38
// sig: undefined FUN_005d0cf8(void)
// callers(0): 
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

void FUN_005d0cf8(void)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_create(PTR_DAT_0071c424,PTR_DAT_0071c430);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d0d34  ns=Global  size=0x34
// sig: undefined FUN_005d0d34(void)
// callers(3): 005d0dbc FUN_005d0dbc; 005d2264 FUN_005d2264; 005d309c FUN_005d309c
// callees(0): 

uint * FUN_005d0d34(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x1d8);
  while ((param_2 < *puVar1 || (*puVar1 + puVar1[1] <= param_2))) {
    puVar1 = (uint *)puVar1[2];
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}



//==== 005d0d68  ns=Global  size=0x54
// sig: undefined FUN_005d0d68(void)
// callers(4): 005d0ea4 FUN_005d0ea4; 005d0f54 FUN_005d0f54; 005d1130 FUN_005d1130; 005d1cac FUN_005d1cac
// callees(0): 

bool FUN_005d0d68(int param_1,uint param_2)

{
  if (((param_2 + 8 & 0xf) != 0) && (*(int *)(param_2 + 4) != 7)) {
    return true;
  }
  return param_2 < *(uint *)(param_1 + 0x10);
}



//==== 005d0dbc  ns=Global  size=0xe8
// sig: undefined FUN_005d0dbc(void)
// callers(3): 005d1cac FUN_005d1cac; 005d309c FUN_005d309c; 005d541c FUN_005d541c
// callees(1): 005d0d34 FUN_005d0d34

uint FUN_005d0dbc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)FUN_005d0d34(param_1,param_2);
  uVar1 = *(uint *)(param_2 + 4);
  if (piVar3 != (int *)0x0) {
    if ((param_2 + 8 & 0xf) == 0) {
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    else {
      if (uVar1 != 7) {
        return 1;
      }
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    if ((((uVar2 <= param_2) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 == (uVar1 & 0xfffffffc)))
        && (uVar2 != 0)) &&
       ((uVar4 = ((*piVar3 + piVar3[1]) - param_2) - 0x30, uVar4 == uVar2 && ((uVar1 & 1) != 0)))) {
      return *(uint *)(param_2 + uVar4 + 4) & 1;
    }
  }
  return 1;
}



//==== 005d0ea4  ns=Global  size=0xb0
// sig: undefined FUN_005d0ea4(void)
// callers(2): 005d1094 FUN_005d1094; 005d1cac FUN_005d1cac
// callees(1): 005d0d68 FUN_005d0d68

uint FUN_005d0ea4(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_005d0d68(param_1,param_2);
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar3 = param_2[1];
    if ((((uVar3 & 2) != 0) && ((*(uint *)((int)param_2 + (uVar3 & 0xfffffffc) + 4) & 1) != 0)) &&
       (uVar2 = 0, (uVar3 & 1) == 0)) {
      uVar3 = (uint)param_2 ^
              (int)param_2 + ((*(uint *)((int)param_2 + (4 - *param_2)) & 0xfffffffc) - *param_2);
      uVar2 = (int)uVar3 >> 0x1f;
      uVar2 = uVar2 - (uVar2 ^ uVar3) >> 0x1f;
    }
  }
  return uVar2;
}



//==== 005d0f54  ns=Global  size=0x140
// sig: undefined FUN_005d0f54(void)
// callers(1): 005d1cac FUN_005d1cac
// callees(1): 005d0d68 FUN_005d0d68

uint FUN_005d0f54(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = FUN_005d0d68(param_1,param_2);
  uVar1 = param_2[1];
  if ((iVar4 == 0) && ((uVar1 & 2) == 0)) {
    uVar3 = uVar1 & 0xfffffffc;
    puVar5 = (uint *)((int)param_2 + uVar3);
    if ((puVar5[1] & 1) == 0) {
      if ((*(uint **)(param_1 + 0x14) == param_2) || (param_2 == *(uint **)(param_1 + 0x18))) {
        return 0;
      }
      uVar2 = (int)(uVar3 ^ 4) >> 0x1f;
      if (uVar3 < 0x10) {
        return uVar2 - (uVar2 ^ uVar3 ^ 4) >> 0x1f;
      }
      if ((((((uVar1 & 0xc) == 0) && (((uint)(param_2 + 2) & 0xf) == 0)) && (*puVar5 == uVar3)) &&
          (((uVar1 & 1) != 0 && ((puVar5 == *(uint **)(param_1 + 0x18) || ((puVar5[1] & 2) != 0)))))
          ) && (*(uint **)(param_2[2] + 0xc) == param_2)) {
        uVar3 = (uint)param_2 ^ *(uint *)(param_2[3] + 8);
        uVar1 = (int)uVar3 >> 0x1f;
        return uVar1 - (uVar1 ^ uVar3) >> 0x1f;
      }
    }
  }
  return 1;
}



//==== 005d1094  ns=Global  size=0x9c
// sig: undefined FUN_005d1094(void)
// callers(0): 
// callees(1): 005d0ea4 FUN_005d0ea4

bool FUN_005d1094(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4);
    iVar3 = FUN_005d0ea4(param_1,param_2 + -8);
    bVar4 = true;
    uVar2 = uVar1 & 0xfffffffc;
    if ((((iVar3 == 0) && ((uVar1 & 0xc) == 0)) && (0xf < uVar2)) && (param_3 <= uVar2)) {
      bVar4 = param_3 + 0x10 <= uVar2;
    }
  }
  return bVar4;
}



//==== 005d1130  ns=Global  size=0x2f4
// sig: undefined FUN_005d1130(void)
// callers(2): 005d1130 FUN_005d1130; 005d1cac FUN_005d1cac
// callees(2): 005d0d68 FUN_005d0d68; 005d1130 FUN_005d1130

uint FUN_005d1130(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  
  uVar4 = (ulonglong)(uint)param_2[1] & 0xfffffffc;
  uVar3 = (uVar4 << 0x20) >> 0x28;
  uVar5 = (uint)uVar4;
  uVar10 = 0;
  if ((uVar5 >> 8 != 0) && (uVar10 = 0x1f, uVar3 < 0x10000)) {
    uVar7 = (ushort)(uVar3 - 0x100 >> 0x10) & 8;
    iVar6 = (uVar5 >> 8) << uVar7;
    uVar10 = iVar6 - 0x1000U >> 0x10 & 4;
    iVar6 = iVar6 << uVar10;
    uVar8 = iVar6 - 0x4000U >> 0x10 & 2;
    iVar6 = ((uint)(iVar6 << uVar8) >> 0xf) - (uVar7 + uVar10 + uVar8);
    uVar10 = (iVar6 + 0xe) * 2 + (uVar5 >> (iVar6 + 0x15U & 0x3f) & 1);
  }
  if ((((uVar10 == param_2[7]) && (0xff < uVar4)) &&
      ((1 << ((uVar10 >> 1) + 8 & 0x3f) | (uVar10 & 1) << ((uVar10 >> 1) + 7 & 0x3f)) <= uVar4)) &&
     ((uVar10 == 0x1f ||
      (uVar7 = uVar10 + 1 >> 1,
      uVar4 < (1 << (uVar7 + 8 & 0x3f) | (uVar10 + 1 & 1) << (uVar7 + 7 & 0x3f)))))) {
    piVar9 = (int *)0x0;
    piVar11 = param_2;
    do {
      iVar6 = FUN_005d0d68(param_1,piVar11);
      if ((((iVar6 != 0) || (piVar11[7] != uVar10)) ||
          (((piVar11[1] & 0xfffffffcU) != uVar5 ||
           ((((piVar11[1] & 2U) != 0 || ((*(uint *)((int)piVar11 + uVar5 + 4) & 1) != 0)) ||
            (piVar1 = (int *)piVar11[2], (int *)piVar1[3] != piVar11)))))) ||
         (*(int **)(piVar11[3] + 8) != piVar11)) goto LAB_005d1188;
      piVar2 = (int *)piVar11[6];
      if (piVar2 == (int *)0x0) {
        if ((piVar11[4] != 0) || (piVar11[5] != 0)) goto LAB_005d1188;
      }
      else {
        if ((((((piVar9 != (int *)0x0) || (piVar11 == piVar2)) ||
              (((int *)piVar2[4] != piVar11 &&
               (((int *)piVar2[5] != piVar11 && ((int *)*piVar2 != piVar11)))))) ||
             ((piVar9 = (int *)piVar11[4], piVar9 != (int *)0x0 &&
              ((((int *)piVar9[6] != piVar11 || (piVar11 == piVar9)) ||
               (iVar6 = FUN_005d1130(param_1), iVar6 != 0)))))) ||
            ((piVar9 = (int *)piVar11[5], piVar9 != (int *)0x0 &&
             ((((int *)piVar9[6] != piVar11 || (piVar11 == piVar9)) ||
              (iVar6 = FUN_005d1130(param_1), iVar6 != 0)))))) ||
           (((piVar11[4] != 0 && (piVar11[5] != 0)) &&
            ((*(uint *)(piVar11[5] + 4) & 0xfffffffc) <= (*(uint *)(piVar11[4] + 4) & 0xfffffffc))))
           ) goto LAB_005d1188;
        piVar1 = (int *)piVar11[2];
        piVar9 = piVar11;
      }
      piVar11 = piVar1;
    } while (param_2 != piVar1);
    uVar5 = (((int)piVar9 >> 0x1f ^ (uint)piVar9) - ((int)piVar9 >> 0x1f)) - 1 >> 0x1f;
  }
  else {
LAB_005d1188:
    uVar5 = 1;
  }
  return uVar5;
}



//==== 005d1424  ns=Global  size=0x1c8
// sig: undefined FUN_005d1424(void)
// callers(1): 005d1cac FUN_005d1cac
// callees(0): 

undefined4 FUN_005d1424(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  longlong lVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 4) & 0xfffffffc;
  uVar3 = (uint)uVar7;
  if ((uVar7 << 0x20) >> 0x23 < 0x20) {
    if ((*param_1 >> (uVar3 >> 3 & 0x3f) & 1) == 0) {
      return 0;
    }
    iVar2 = (int)param_1 + (uVar3 & 0xfffffff8) + 0x24;
    if (param_2 != iVar2) {
      iVar1 = *(int *)(iVar2 + 8);
      while( true ) {
        if (iVar2 == iVar1) {
          return 0;
        }
        if (param_2 == iVar1) break;
        iVar1 = *(int *)(iVar1 + 8);
      }
      return 1;
    }
    return 1;
  }
  uVar7 = (uVar7 << 0x20) >> 0x28;
  uVar6 = 0;
  uVar5 = 1;
  if (uVar3 >> 8 != 0) {
    uVar6 = 0x1f;
    uVar5 = 0x80000000;
    if (uVar7 < 0x10000) {
      uVar6 = (uVar7 - 0x100 << 0x20) >> 0x30 & 8;
      iVar2 = (uVar3 >> 8) << (int)uVar6;
      uVar7 = (ulonglong)(iVar2 - 0x1000U >> 0x10) & 4;
      iVar2 = iVar2 << (int)uVar7;
      uVar8 = (ulonglong)(iVar2 - 0x4000U >> 0x10) & 2;
      lVar4 = (ulonglong)((uint)(iVar2 << (int)uVar8) >> 0xf) - (uVar6 + uVar7 + uVar8);
      uVar6 = (lVar4 + 0xeU & 0x7fffffff) * 2 +
              ((ulonglong)(uVar3 >> ((int)lVar4 + 0x15U & 0x3f)) & 1);
      uVar5 = 1 << ((uint)uVar6 & 0x3f) & param_1[1];
      goto joined_r0x005d15b8;
    }
  }
  uVar5 = uVar5 & param_1[1];
joined_r0x005d15b8:
  if (uVar5 != 0) {
    uVar5 = 0;
    iVar2 = *(int *)((int)param_1 + (int)((uVar6 & 0xffffffff) << 2) + 300);
    if ((uint)uVar6 != 0x1f) {
      uVar5 = 0x19 - ((uint)uVar6 >> 1);
    }
    if (iVar2 != 0) {
      iVar1 = iVar2;
      if ((*(uint *)(iVar2 + 4) & 0xfffffffc) != uVar3) {
        uVar7 = (ulonglong)(uVar3 << (uVar5 & 0x3f));
        do {
          uVar5 = (uint)uVar7;
          uVar7 = (uVar7 & 0x7fffffff) << 1;
          iVar2 = *(int *)(iVar2 + (uVar5 >> 0x1d & 4) + 0x10);
          if (iVar2 == 0) {
            return 0;
          }
          iVar1 = iVar2;
        } while ((*(uint *)(iVar2 + 4) & 0xfffffffc) != uVar3);
      }
      do {
        if (iVar2 == param_2) {
          return 1;
        }
        iVar2 = *(int *)(iVar2 + 8);
      } while (iVar2 != iVar1);
    }
  }
  return 0;
}



//==== 005d15ec  ns=Global  size=0x64
// sig: undefined FUN_005d15ec(void)
// callers(2): 005d309c FUN_005d309c; 005d541c FUN_005d541c
// callees(0): 

void FUN_005d15ec(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = PTR_DAT_0071c434;
  uVar1 = param_2 + 8U & 0xf;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = 0x10 - uVar1 & 0xf;
  }
  param_2 = param_2 + uVar3;
  uVar3 = param_3 - uVar3;
  *(uint *)(param_1 + 0xc) = uVar3;
  *(int *)(param_1 + 0x18) = param_2;
  *(uint *)(param_2 + 4) = uVar3 | 1;
  *(undefined4 *)(param_2 + uVar3 + 4) = 0x30;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar2 + 0x10);
  return;
}



//==== 005d1650  ns=Global  size=0x30
// sig: undefined FUN_005d1650(void)
// callers(2): 005d309c FUN_005d309c; 005d541c FUN_005d541c
// callees(0): 

void FUN_005d1650(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar4 = 0x20;
  do {
    uVar1 = uVar3 & 0xffffffff;
    uVar3 = uVar3 + 1;
    iVar2 = param_1 + 0x24 + (int)(uVar1 << 3);
    *(int *)(iVar2 + 8) = iVar2;
    *(int *)(iVar2 + 0xc) = iVar2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



//==== 005d1680  ns=Global  size=0x3c
// sig: undefined FUN_005d1680(void)
// callers(1): 005d56cc FUN_005d56cc
// callees(0): 

int FUN_005d1680(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + -4) & 2) != 0)) {
    return (*(uint *)(param_1 + -4) & 0xfffffffc) - 4;
  }
  return 0;
}



//==== 005d16bc  ns=Global  size=0x6c
// sig: undefined FUN_005d16bc(void)
// callers(2): 005d309c FUN_005d309c; 005d541c FUN_005d541c
// callees(1): 005c4840 idol::abort

void FUN_005d16bc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0071c438;
  puVar2 = PTR_DAT_0071c434;
  if (*(int *)(PTR_DAT_0071c434 + 4) == 0) {
    *(undefined4 *)(PTR_DAT_0071c434 + 0x14) = 7;
    uVar1 = *(uint *)puVar3;
    *(undefined4 *)puVar2 = 0x58585858;
    *(uint *)(puVar2 + 8) = uVar1;
    *(uint *)(puVar2 + 0xc) = uVar1;
    *(uint *)(puVar2 + 0x10) = uVar1 - 1;
    *(uint *)(puVar2 + 4) = uVar1;
    if ((uVar1 & uVar1 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
      idol::abort();
    }
  }
  return;
}



//==== 005d172c  ns=Global  size=0x40
// sig: undefined FUN_005d172c(void)
// callers(7): 005d1a8c FUN_005d1a8c; 005d1be8 FUN_005d1be8; 005d1cac FUN_005d1cac; 005d2264 FUN_005d2264; 005d309c FUN_005d309c; 005d4c0c FUN_005d4c0c; 005d4f08 FUN_005d4f08
// callees(2): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock

undefined8 FUN_005d172c(int param_1)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_lock(param_1 + 0x1c0,0);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d1770  ns=Global  size=0x318
// sig: undefined FUN_005d1770(void)
// callers(7): 005d1a8c FUN_005d1a8c; 005d1be8 FUN_005d1be8; 005d1cac FUN_005d1cac; 005d2264 FUN_005d2264; 005d309c FUN_005d309c; 005d4c0c FUN_005d4c0c; 005d4f08 FUN_005d4f08
// callees(3): 005c4840 idol::abort; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

void FUN_005d1770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined4 uStack_6c;
  
  puVar9 = PTR_DAT_0071c440;
  puVar8 = PTR_DAT_0071c43c;
  puVar7 = PTR_DAT_0071c434;
  uVar16 = ZEXT48(&stack0x00000000);
  puVar1 = *(ulonglong **)PTR_DAT_0071c43c;
  if (((puVar1 != (ulonglong *)0x0) && (*(int *)PTR_DAT_0071c440 != 0)) && (puVar1[2] != 0)) {
    if (*puVar1 <= *(longlong *)(PTR_DAT_0071c434 + 0x18) + 0x20U) {
      if (puVar1[3] == 0) goto LAB_005d17f0;
      *(undefined8 *)(PTR_DAT_0071c434 + 0x18) = 0;
    }
    uVar5 = TBLr;
    iVar11 = 0;
    sys::sys_ppu_thread_get_id(uVar16 - 0x70);
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar17 = 0;
    if (uVar2 != 0) {
      iVar11 = *(int *)(param_1 + 0x1ac);
      iVar17 = (iVar11 - *(int *)(param_1 + 0xc)) + -0x30;
      for (puVar13 = (uint *)(param_1 + 0x1d8); puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[2]
          ) {
        uVar3 = *puVar13;
        uVar14 = 0;
        uVar4 = uVar3 + 8 & 0xf;
        if (uVar4 != 0) {
          uVar14 = 0x10 - uVar4 & 0xf;
        }
        uVar14 = uVar14 + uVar3;
        if (((uVar3 <= uVar14) && (uVar14 < uVar3 + puVar13[1])) && (uVar2 != uVar14)) {
          uVar4 = *(uint *)(uVar14 + 4);
          while (uVar4 != 7) {
            if ((uVar4 & 2) == 0) {
              iVar17 = iVar17 - (uVar4 & 0xfffffffc);
            }
            uVar14 = (uVar4 & 0xfffffffc) + uVar14;
            if (((uVar14 < uVar3) || (uVar3 + puVar13[1] <= uVar14)) || (uVar2 == uVar14)) break;
            uVar4 = *(uint *)(uVar14 + 4);
          }
        }
      }
    }
    uVar2 = *(uint *)puVar9;
    lVar18 = *(longlong *)(puVar7 + 0x18);
    puVar6 = (undefined4 *)((ulonglong)uVar2 + lVar18);
    *puVar6 = (int)uVar5;
    *(longlong *)(puVar7 + 0x18) = lVar18 + 0x20;
    puVar6[1] = uStack_6c;
    lVar12 = (ulonglong)uVar2 + lVar18 + 0x20;
    puVar6[2] = param_4;
    puVar6[3] = param_5;
    puVar6[4] = param_2;
    puVar6[5] = param_3;
    puVar6[6] = iVar11;
    puVar6[7] = iVar17;
    if (&stack0x00000000 != (undefined1 *)0x0) {
      puVar1 = *(ulonglong **)puVar8;
      lVar10 = lVar18 + 0x24;
      if (lVar18 + 0x28U <= *puVar1) {
        do {
          lVar18 = lVar10;
          puVar6 = (undefined4 *)lVar12;
          lVar12 = lVar12 + 4;
          puVar15 = (ulonglong *)uVar16;
          uVar16 = *puVar15;
          *puVar6 = (int)puVar15[2];
          if ((int)uVar16 == 0) break;
          lVar10 = lVar18 + 4;
        } while (lVar18 + 8U <= *puVar1);
        *(longlong *)(puVar7 + 0x18) = lVar18;
        iVar11 = *(int *)puVar8;
        lVar18 = *(longlong *)(puVar7 + 0x18);
        *(undefined4 *)lVar12 = 0;
        *(longlong *)(puVar7 + 0x18) = lVar18 + 4;
        *(longlong *)(iVar11 + 0x20) = lVar18 + 4;
        goto LAB_005d17f0;
      }
    }
    iVar11 = *(int *)puVar8;
    lVar18 = *(longlong *)(puVar7 + 0x18);
    *(undefined4 *)lVar12 = 0;
    *(longlong *)(puVar7 + 0x18) = lVar18 + 4;
    *(longlong *)(iVar11 + 0x20) = lVar18 + 4;
  }
LAB_005d17f0:
  iVar11 = sys::sys_lwmutex_unlock(param_1 + 0x1c0);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    idol::abort();
  }
  return;
}



//==== 005d1a8c  ns=Global  size=0x14c
// sig: undefined FUN_005d1a8c(void)
// callers(1): 005d1bdc FUN_005d1bdc
// callees(2): 005d172c FUN_005d172c; 005d1770 FUN_005d1770

uint FUN_005d1a8c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar4 = FUN_005d172c(param_1);
  puVar2 = PTR_DAT_0071c434;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x1b4);
      if ((param_1 == *(int *)(PTR_DAT_0071c434 + 0x20)) && (iVar4 = param_1 + 0x1d8, iVar4 != 0)) {
        uVar6 = 0;
        do {
          iVar4 = *(int *)(iVar4 + 8);
          uVar6 = uVar6 + 1;
        } while (iVar4 != 0);
      }
      else {
        uVar6 = 0;
      }
    }
    FUN_005d1770(param_1,0,0xffffffff,3,0);
    uVar1 = (int)(uVar5 ^ 0x230) >> 0x1f;
    iVar4 = (uVar1 ^ uVar5 ^ 0x230) - uVar1;
    if ((param_1 != *(int *)(puVar2 + 0x20)) ||
       (uVar3 = uVar5 ^ (uint)((uVar6 & 0x3ffffff) << 6), uVar1 = (int)uVar3 >> 0x1f,
       iVar4 = (uVar1 ^ uVar3) - uVar1, uVar5 != 0)) {
      return iVar4 - 1U >> 0x1f;
    }
  }
  return 1;
}



//==== 005d1bd8  ns=Global  size=0x4
// sig: undefined thunk_FUN_005d1a8c(void)
// callers(0): 
// callees(0): 

uint thunk_FUN_005d1a8c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar4 = FUN_005d172c(param_1);
  puVar2 = PTR_DAT_0071c434;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x1b4);
      if ((param_1 == *(int *)(PTR_DAT_0071c434 + 0x20)) && (iVar4 = param_1 + 0x1d8, iVar4 != 0)) {
        uVar6 = 0;
        do {
          iVar4 = *(int *)(iVar4 + 8);
          uVar6 = uVar6 + 1;
        } while (iVar4 != 0);
      }
      else {
        uVar6 = 0;
      }
    }
    FUN_005d1770(param_1,0,0xffffffff,3,0);
    uVar1 = (int)(uVar5 ^ 0x230) >> 0x1f;
    iVar4 = (uVar1 ^ uVar5 ^ 0x230) - uVar1;
    if ((param_1 != *(int *)(puVar2 + 0x20)) ||
       (uVar3 = uVar5 ^ (uint)((uVar6 & 0x3ffffff) << 6), uVar1 = (int)uVar3 >> 0x1f,
       iVar4 = (uVar1 ^ uVar3) - uVar1, uVar5 != 0)) {
      return iVar4 - 1U >> 0x1f;
    }
  }
  return 1;
}



//==== 005d1bdc  ns=Global  size=0xc
// sig: undefined FUN_005d1bdc(void)
// callers(0): 
// callees(1): 005d1a8c FUN_005d1a8c

void FUN_005d1bdc(void)

{
  FUN_005d1a8c(*(undefined4 *)(PTR_DAT_0071c434 + 0x20));
  return;
}



//==== 005d1be8  ns=Global  size=0xc4
// sig: undefined FUN_005d1be8(void)
// callers(1): 005d52c8 FUN_005d52c8
// callees(2): 005d172c FUN_005d172c; 005d1770 FUN_005d1770

undefined8 FUN_005d1be8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_005d172c(param_1);
  uVar2 = 0;
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x1b4);
      uVar2 = *(undefined4 *)(param_1 + 0x1b0);
      uVar3 = *(undefined4 *)(param_1 + 0x1ac);
    }
    FUN_005d1770(param_1,0,0xffffffff,3,0);
    if (param_2 != (undefined4 *)0x0) {
      param_2[2] = uVar4;
      *param_2 = uVar2;
      param_2[1] = uVar3;
    }
  }
  return 0;
}



//==== 005d1cac  ns=Global  size=0x5b8
// sig: undefined FUN_005d1cac(void)
// callers(1): 005d5734 FUN_005d5734
// callees(8): 005d0d68 FUN_005d0d68; 005d0dbc FUN_005d0dbc; 005d0ea4 FUN_005d0ea4; 005d0f54 FUN_005d0f54; 005d1130 FUN_005d1130; 005d1424 FUN_005d1424; 005d172c FUN_005d172c; 005d1770 FUN_005d1770

undefined4 FUN_005d1cac(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
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
  iVar5 = FUN_005d172c(param_1);
  if (iVar5 == 0) {
    uVar11 = *param_1;
    uVar8 = 0;
    do {
      while( true ) {
        iVar3 = (int)param_1 + (int)((uVar8 & 0xffffffff) << 3) + 0x24;
        uVar9 = uVar11 & 1 << ((uint)uVar8 & 0x3f);
        uVar10 = (int)uVar9 >> 0x1f;
        iVar5 = *(int *)(iVar3 + 0xc);
        iVar6 = ((uVar10 ^ uVar9) - uVar10) + -1;
        if (iVar3 == iVar5) break;
        if (-1 < iVar6) {
          iVar6 = FUN_005d0f54(param_1,iVar5);
          uVar10 = *(uint *)(iVar5 + 4);
          while( true ) {
            if (iVar6 != 0) goto LAB_005d1e0c;
            iVar6 = (uVar10 & 0xfffffffc) + iVar5;
            if (uVar10 >> 3 != (uint)uVar8) goto LAB_005d1e0c;
            iVar5 = *(int *)(iVar5 + 0xc);
            if (((iVar3 != iVar5) && ((*(uint *)(iVar5 + 4) & 0xfffffffc) != (uVar10 & 0xfffffffc)))
               || ((*(int *)(iVar6 + 4) != 7 && (iVar6 = FUN_005d0ea4(param_1,iVar6), iVar6 != 0))))
            goto LAB_005d1e0c;
            if (iVar3 == iVar5) break;
            iVar6 = FUN_005d0f54(param_1,iVar5);
            uVar10 = *(uint *)(iVar5 + 4);
          }
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x20) goto LAB_005d1e8c;
      }
      if (-1 < iVar6) goto LAB_005d1e0c;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20);
LAB_005d1e8c:
    puVar13 = param_1 + 0x4b;
    uVar11 = 0;
    do {
      while( true ) {
        uVar10 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar14 = 1 << (uVar11 & 0x3f) & param_1[1];
        uVar9 = (int)uVar14 >> 0x1f;
        iVar5 = ((uVar9 ^ uVar14) - uVar9) + -1;
        if (uVar10 != 0) break;
        if (-1 < iVar5) goto LAB_005d1e0c;
LAB_005d1e9c:
        bVar1 = uVar11 == 0x1f;
        uVar11 = uVar11 + 1;
        if (bVar1) goto LAB_005d1f00;
      }
      if (iVar5 < 0) goto LAB_005d1e9c;
      iVar5 = FUN_005d1130(param_1,uVar10);
      if (iVar5 != 0) goto LAB_005d1e0c;
      bVar1 = uVar11 != 0x1f;
      uVar11 = uVar11 + 1;
    } while (bVar1);
LAB_005d1f00:
    uVar11 = param_1[2];
    if (uVar11 == 0) {
LAB_005d1f0c:
      if (param_1[6] == 0) {
LAB_005d20e8:
        uVar11 = param_1[0x6b];
      }
      else {
        iVar5 = FUN_005d0dbc(param_1,param_1[6]);
        if (((iVar5 != 0) || (uVar11 = *(uint *)(param_1[6] + 4) & 0xfffffffc, uVar11 != param_1[3])
            ) || ((uVar11 == 0 || (iVar5 = FUN_005d1424(param_1), iVar5 != 0)))) goto LAB_005d1e0c;
        if (param_1[6] == 0) goto LAB_005d20e8;
        uVar10 = param_1[3] + 0x30;
        for (puVar13 = param_1 + 0x76; puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[2]) {
          uVar11 = *puVar13;
          uVar14 = 0;
          uVar9 = uVar11 + 8 & 0xf;
          if (uVar9 != 0) {
            uVar14 = 0x10 - uVar9 & 0xf;
          }
          uVar14 = uVar14 + uVar11;
          uVar9 = *(uint *)(uVar14 + 4);
          if ((uVar9 & 1) == 0) goto LAB_005d1e0c;
          if (((uVar11 <= uVar14) && (uVar14 < uVar11 + puVar13[1])) &&
             ((param_1[6] != uVar14 && (uVar9 != 7)))) {
            uVar11 = 0;
            do {
              uVar12 = uVar14;
              if ((uVar9 & 2) == 0) {
                if (((param_1[5] != uVar12) && (iVar5 = FUN_005d1424(param_1,uVar12), iVar5 == 0))
                   || ((uVar11 != 0 && ((*(uint *)(uVar11 + 4) & 2) == 0)))) goto LAB_005d1e0c;
                iVar5 = FUN_005d0f54(param_1,uVar12);
              }
              else {
                iVar5 = FUN_005d1424(param_1,uVar12);
                if (iVar5 != 0) goto LAB_005d1e0c;
                iVar5 = FUN_005d0ea4(param_1,uVar12);
              }
              if (iVar5 != 0) goto LAB_005d1e0c;
              uVar10 = uVar10 + (uVar9 & 0xfffffffc);
              uVar14 = (*(uint *)(uVar12 + 4) & 0xfffffffc) + uVar12;
            } while ((((*puVar13 <= uVar14) && (uVar14 < *puVar13 + puVar13[1])) &&
                     (param_1[6] != uVar14)) &&
                    (uVar9 = *(uint *)(uVar14 + 4), uVar11 = uVar12, uVar9 != 7));
          }
        }
        uVar11 = param_1[0x6b];
        if (uVar11 < uVar10) goto LAB_005d1e0c;
      }
      uVar10 = param_1[0x6c];
      if (uVar11 <= uVar10) {
        uVar9 = param_1[6];
        if (uVar9 == 0) {
          uVar10 = 0;
          uVar11 = 0;
          uVar14 = 0;
        }
        else {
          uVar14 = (uVar11 - param_1[3]) + 8;
          for (puVar13 = param_1 + 0x76; puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[2]) {
            uVar12 = *puVar13;
            uVar4 = 0;
            uVar2 = uVar12 + 8 & 0xf;
            if (uVar2 != 0) {
              uVar4 = 0x10 - uVar2 & 0xf;
            }
            uVar4 = uVar4 + uVar12;
            if (((uVar12 <= uVar4) && (uVar4 < uVar12 + puVar13[1])) && (uVar9 != uVar4)) {
              while (uVar2 = *(uint *)(uVar4 + 4), uVar2 != 7) {
                if ((uVar2 & 2) == 0) {
                  uVar14 = uVar14 - (uVar2 & 0xfffffffc);
                }
                uVar4 = (uVar2 & 0xfffffffc) + uVar4;
                if (((uVar4 < uVar12) || (uVar12 + puVar13[1] <= uVar4)) || (uVar9 == uVar4)) break;
              }
            }
          }
        }
        FUN_005d1770(param_1,0,0xffffffff,3,0);
        if (param_2 != (uint *)0x0) {
          param_2[2] = uVar14;
          *param_2 = uVar10;
          param_2[1] = uVar11;
          return 0;
        }
        goto LAB_005d20d4;
      }
    }
    else {
      uVar10 = param_1[5];
      iVar5 = FUN_005d0d68(param_1,uVar10);
      if ((((iVar5 == 0) && (uVar9 = *(uint *)(uVar10 + 4) & 0xfffffffc, uVar9 == uVar11)) &&
          (0xf < uVar9)) && (iVar5 = FUN_005d1424(param_1,uVar10), iVar5 == 0)) goto LAB_005d1f0c;
    }
LAB_005d1e0c:
    FUN_005d1770(param_1,0,0xffffffff,3,0);
    uVar7 = 1;
  }
  else {
LAB_005d20d4:
    uVar7 = 0;
  }
  return uVar7;
}



//==== 005d2264  ns=Global  size=0xe34
// sig: undefined FUN_005d2264(void)
// callers(4): 005d4c0c FUN_005d4c0c; 005d4f08 FUN_005d4f08; 005d5178 FUN_005d5178; 005d580c FUN_005d580c
// callees(5): 005c4840 idol::abort; 005cef7c FUN_005cef7c; 005d0d34 FUN_005d0d34; 005d172c FUN_005d172c; 005d1770 FUN_005d1770
// strings: 0067ef70: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3431 chunksize(next) == small_index2size(I)' | 006611d0: 'mspace_free' | 0067ee08: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3395 chunksize(p) == small_index2size(I)' | 0067eff8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3441 psize >= MIN_CHUNK_SIZE' | 0067eda0: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3395 p != F' | 0067ed38: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3395 p != B' | 0067ee90: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3431 next != B' | 0067ef00: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3431 next != F'

void FUN_005d2264(uint *param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar3;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar11;
  ulonglong uVar10;
  uint uVar12;
  uint uVar14;
  ulonglong uVar13;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint uVar21;
  
  if (((int)param_2 == 0) || (iVar5 = FUN_005d172c(param_1), iVar5 != 0)) {
    return;
  }
  uVar20 = param_2 - 8;
  uVar8 = (ulonglong)param_1[4];
  if ((uVar20 & 0xffffffff) < uVar8) goto LAB_005d2490;
  uVar14 = ((uint *)uVar20)[1];
  if ((uVar14 >> 1 & 1) == 0) goto LAB_005d2490;
  uVar18 = (ulonglong)uVar14 & 0xfffffffc;
  uVar16 = uVar20 + uVar18;
  param_1[0x6d] = param_1[0x6d] - (int)uVar18;
  uVar11 = (uint)uVar16;
  if ((uVar14 & 1) == 0) {
    uVar14 = *(uint *)uVar20;
    if ((uVar14 & 1) != 0) goto LAB_005d24e8;
    uVar20 = uVar20 - uVar14;
    if ((uVar20 & 0xffffffff) < uVar8) goto LAB_005d2490;
    uVar18 = uVar18 + uVar14;
    puVar19 = (uint *)uVar20;
    if ((uint *)param_1[5] == puVar19) {
      uVar14 = *(uint *)(uVar11 + 4);
      if ((uVar14 & 3) == 3) {
        uVar12 = (uint)uVar18;
        param_1[2] = uVar12;
        *(uint *)(uVar11 + 4) = uVar14 & 0xfffffffe;
        *(uint *)((int)puVar19 + uVar12) = uVar12;
        puVar19[1] = uVar12 | 1;
        goto LAB_005d24e8;
      }
    }
    else {
      uVar14 = uVar14 >> 3;
      if ((ulonglong)uVar14 < 0x20) {
        puVar15 = (uint *)puVar19[3];
        puVar1 = (uint *)puVar19[2];
        if (puVar19 == puVar15) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c444,PTR_s_mspace_free_0071c448);
        }
        if (puVar19 == puVar1) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c44c,PTR_s_mspace_free_0071c448);
        }
        if ((puVar19[1] & 0xfffffffc) != uVar14 * 8) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c450,PTR_s_mspace_free_0071c448);
        }
        if (puVar1 == puVar15) {
          uVar8 = (ulonglong)uVar14 & 0x1f;
          *param_1 = *param_1 &
                     ((uint)(-0x100000002 << uVar8) | (uint)(0xfffffffefffffffe >> 0x40 - uVar8));
        }
        else {
          if (((puVar1 != param_1 + uVar14 * 2 + 9) && (puVar1 < (uint *)param_1[4])) ||
             ((puVar15 != param_1 + uVar14 * 2 + 9 && (puVar15 < (uint *)param_1[4]))))
          goto LAB_005d2490;
          puVar15[2] = (uint)puVar1;
          puVar1[3] = (uint)puVar15;
        }
      }
      else {
        puVar15 = (uint *)puVar19[3];
        uVar10 = ZEXT48(puVar15);
        uVar14 = puVar19[6];
        if (puVar19 == puVar15) {
          uVar3 = uVar20 + 0x14;
          uVar10 = (ulonglong)*(uint *)uVar3;
          if ((*(uint *)uVar3 != 0) ||
             (uVar12 = *(uint *)(uVar20 + 0x10), uVar10 = (ulonglong)uVar12, uVar3 = uVar20 + 0x10,
             uVar12 != 0)) {
            while( true ) {
              uVar13 = uVar10 + 0x14;
              if ((*(int *)(uVar10 + 0x14) == 0) &&
                 (uVar13 = uVar10 + 0x10, *(int *)(uVar10 + 0x10) == 0)) break;
              uVar10 = (ulonglong)*(uint *)uVar13;
              uVar3 = uVar13;
            }
            if ((uVar3 & 0xffffffff) < uVar8) goto LAB_005d2490;
            *(undefined4 *)uVar3 = 0;
          }
        }
        else {
          uVar12 = puVar19[2];
          if (uVar12 < uVar8) goto LAB_005d2490;
          *(uint **)(uVar12 + 0xc) = puVar15;
          puVar15[2] = uVar12;
        }
        if (uVar14 != 0) {
          uVar12 = puVar19[7];
          uVar21 = (uint)uVar10;
          if ((uint *)param_1[uVar12 + 0x4b] == puVar19) {
            param_1[uVar12 + 0x4b] = uVar21;
            if (uVar21 == 0) {
              uVar8 = (ulonglong)uVar12 & 0x1f;
              param_1[1] = param_1[1] &
                           ((uint)(-0x100000002 << uVar8) |
                           (uint)(0xfffffffefffffffe >> 0x40 - uVar8));
            }
            else {
LAB_005d276c:
              if (uVar10 < uVar8) goto LAB_005d2490;
              uVar12 = puVar19[4];
              *(uint *)(uVar21 + 0x18) = uVar14;
              if (uVar12 != 0) {
                if (uVar12 < uVar8) goto LAB_005d2490;
                *(uint *)(uVar21 + 0x10) = uVar12;
                *(uint *)(uVar12 + 0x18) = uVar21;
              }
              uVar14 = puVar19[5];
              if (uVar14 != 0) {
                if (uVar14 < uVar8) goto LAB_005d2490;
                *(uint *)(uVar21 + 0x14) = uVar14;
                *(uint *)(uVar14 + 0x18) = uVar21;
              }
            }
          }
          else {
            if (uVar14 < uVar8) goto LAB_005d2490;
            if (*(uint **)(uVar14 + 0x10) == puVar19) {
              *(uint *)(uVar14 + 0x10) = uVar21;
            }
            else {
              *(uint *)(uVar14 + 0x14) = uVar21;
            }
            if (uVar21 != 0) goto LAB_005d276c;
          }
        }
      }
    }
  }
  if (((uVar16 & 0xffffffff) <= (uVar20 & 0xffffffff)) ||
     (uVar14 = *(uint *)(uVar11 + 4), (uVar14 & 1) == 0)) goto LAB_005d2490;
  uVar21 = (uint)uVar20;
  uVar12 = (uint)uVar18;
  if ((uVar14 & 2) == 0) {
    if (param_1[6] == uVar11) {
      uVar14 = param_1[3];
      uVar11 = param_1[5];
      uVar12 = (uint)(uVar18 + uVar14);
      param_1[3] = uVar12;
      param_1[6] = uVar21;
      *(uint *)(uVar21 + 4) = uVar12 | 1;
      if (uVar11 == uVar21) {
        param_1[2] = 0;
        param_1[5] = 0;
      }
      if (((ulonglong)param_1[7] < (uVar18 + uVar14 & 0xffffffff)) && (param_1[6] != 0)) {
        uVar14 = param_1[3];
        if (0x30 < uVar14) {
          uVar11 = *(uint *)(PTR_DAT_0071c434 + 8);
          puVar6 = (undefined4 *)FUN_005d0d34(param_1,param_1[6]);
          if (((puVar6[3] & 1) != 0) &&
             (uVar11 * (((uVar14 + uVar11) - 0x31) / uVar11 - 1) <= (uint)puVar6[1])) {
            puVar19 = param_1 + 0x76;
            do {
              if (((uint *)*puVar6 <= puVar19) && (puVar19 < (uint *)((int)*puVar6 + puVar6[1])))
              break;
              puVar19 = (uint *)puVar19[2];
            } while (puVar19 != (uint *)0x0);
          }
        }
        if (((param_1[0x6f] & 4) != 0) && (puVar19 = (uint *)param_1[0x78], puVar19 != (uint *)0x0))
        {
          uVar8 = 0;
          do {
            uVar20 = ZEXT48(puVar19);
            puVar15 = puVar19 + 3;
            uVar18 = (ulonglong)*puVar19;
            puVar1 = puVar19 + 1;
            puVar19 = (uint *)puVar19[2];
            if ((*puVar15 & 1) != 0) {
              uVar10 = 0;
              uVar16 = uVar18 + 8 & 0xf;
              if ((int)uVar16 != 0) {
                uVar10 = 0x10 - uVar16 & 0xf;
              }
              lVar7 = uVar10 + uVar18;
              uVar14 = (uint)lVar7;
              if (((((*(uint *)(uVar14 + 4) & 2) == 0) && (param_1[6] != uVar14)) &&
                  (uVar18 <= uVar8)) &&
                 ((uVar8 < (uVar18 + *puVar1 & 0xffffffff) &&
                  (uVar8 = (ulonglong)*(uint *)(uVar14 + 4) & 0xfffffffc,
                  ((uVar18 + *puVar1) - 0x30 & 0xffffffff) <= (lVar7 + uVar8 & 0xffffffff))))) {
                if (param_1[5] == uVar14) {
                  param_1[2] = 0;
                  param_1[5] = 0;
                }
                else {
                  uVar11 = *(uint *)(uVar14 + 0xc);
                  uVar18 = (ulonglong)uVar11;
                  uVar12 = *(uint *)(uVar14 + 0x18);
                  if (uVar14 == uVar11) {
                    uVar11 = *(uint *)(lVar7 + 0x14U);
                    uVar18 = (ulonglong)uVar11;
                    uVar16 = lVar7 + 0x14U;
                    if ((uVar11 != 0) ||
                       (uVar11 = *(uint *)(lVar7 + 0x10U), uVar18 = (ulonglong)uVar11,
                       uVar16 = lVar7 + 0x10U, uVar11 != 0)) {
                      while( true ) {
                        uVar10 = uVar18 + 0x14;
                        if ((*(int *)(uVar18 + 0x14) == 0) &&
                           (uVar10 = uVar18 + 0x10, *(int *)(uVar18 + 0x10) == 0)) break;
                        uVar16 = uVar10;
                        uVar18 = (ulonglong)*(uint *)uVar16;
                      }
                      if ((uVar16 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d2490;
                      *(undefined4 *)uVar16 = 0;
                    }
                  }
                  else {
                    uVar21 = *(uint *)(uVar14 + 8);
                    if (uVar21 < param_1[4]) goto LAB_005d2490;
                    *(uint *)(uVar21 + 0xc) = uVar11;
                    *(uint *)(uVar11 + 8) = uVar21;
                  }
                  if (uVar12 != 0) {
                    uVar11 = *(uint *)(uVar14 + 0x1c);
                    uVar21 = (uint)uVar18;
                    if (param_1[uVar11 + 0x4b] == uVar14) {
                      param_1[uVar11 + 0x4b] = uVar21;
                      if (uVar21 != 0) {
                        uVar11 = param_1[4];
                        goto LAB_005d2ae8;
                      }
                      param_1[1] = param_1[1] & ~(1 << (uVar11 & 0x3f));
                    }
                    else {
                      uVar11 = param_1[4];
                      if (uVar12 < uVar11) goto LAB_005d2490;
                      if (*(uint *)(uVar12 + 0x10) == uVar14) {
                        *(uint *)(uVar12 + 0x10) = uVar21;
                      }
                      else {
                        *(uint *)(uVar12 + 0x14) = uVar21;
                      }
                      if (uVar21 != 0) {
LAB_005d2ae8:
                        if (uVar18 < uVar11) goto LAB_005d2490;
                        uVar4 = *(uint *)(uVar14 + 0x10);
                        *(uint *)(uVar21 + 0x18) = uVar12;
                        if (uVar4 != 0) {
                          if (uVar4 < uVar11) goto LAB_005d2490;
                          *(uint *)(uVar21 + 0x10) = uVar4;
                          *(uint *)(uVar4 + 0x18) = uVar21;
                        }
                        uVar12 = *(uint *)(uVar14 + 0x14);
                        if (uVar12 != 0) {
                          if (uVar12 < uVar11) goto LAB_005d2490;
                          *(uint *)(uVar21 + 0x14) = uVar12;
                          *(uint *)(uVar12 + 0x18) = uVar21;
                        }
                      }
                    }
                  }
                }
                uVar18 = (uVar8 << 0x20) >> 0x28;
                uVar16 = 0;
                uVar12 = (uint)uVar8;
                uVar11 = 1;
                if (uVar12 >> 8 != 0) {
                  uVar16 = 0x1f;
                  uVar11 = 0x80000000;
                  if (uVar18 < 0x10000) {
                    uVar18 = (uVar18 - 0x100 << 0x20) >> 0x30 & 8;
                    iVar5 = (uVar12 >> 8) << (int)uVar18;
                    uVar8 = (ulonglong)(iVar5 - 0x1000U >> 0x10) & 4;
                    iVar5 = iVar5 << (int)uVar8;
                    uVar16 = (ulonglong)(iVar5 - 0x4000U >> 0x10) & 2;
                    lVar7 = (ulonglong)((uint)(iVar5 << (int)uVar16) >> 0xf) -
                            (uVar18 + uVar8 + uVar16);
                    uVar16 = (lVar7 + 0xeU & 0x7fffffff) * 2 +
                             ((ulonglong)(uVar12 >> ((int)lVar7 + 0x15U & 0x3f)) & 1);
                    uVar11 = 1 << ((uint)uVar16 & 0x3f);
                  }
                }
                uVar4 = (uint)uVar16;
                *(uint *)(uVar14 + 0x1c) = uVar4;
                uVar21 = param_1[1];
                *(undefined4 *)(uVar14 + 0x14) = 0;
                *(undefined4 *)(uVar14 + 0x10) = 0;
                puVar15 = (uint *)((int)param_1 + (int)((uVar16 & 0xffffffff) << 2) + 300);
                if ((uVar11 & uVar21) == 0) {
                  param_1[1] = uVar11 | uVar21;
                  *puVar15 = uVar14;
                  *(uint *)(uVar14 + 8) = uVar14;
                  *(uint **)(uVar14 + 0x18) = puVar15;
                  *(uint *)(uVar14 + 0xc) = uVar14;
                }
                else {
                  uVar11 = 0;
                  if (uVar4 != 0x1f) {
                    uVar11 = 0x19 - (uVar4 >> 1);
                  }
                  uVar8 = (ulonglong)(uVar12 << (uVar11 & 0x3f));
                  uVar11 = *puVar15;
                  while ((*(uint *)(uVar11 + 4) & 0xfffffffc) != uVar12) {
                    uVar18 = (ulonglong)uVar11 + ((uVar8 << 0x20) >> 0x3d & 4) + 0x10;
                    puVar15 = (uint *)uVar18;
                    uVar21 = *puVar15;
                    if (uVar21 == 0) {
                      if ((uVar18 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d2490;
                      *puVar15 = uVar14;
                      *(uint *)(uVar14 + 8) = uVar14;
                      *(uint *)(uVar14 + 0x18) = uVar11;
                      *(uint *)(uVar14 + 0xc) = uVar14;
                      goto LAB_005d29c4;
                    }
                    uVar8 = (uVar8 & 0x7fffffff) << 1;
                    uVar11 = uVar21;
                  }
                  uVar12 = *(uint *)(uVar11 + 8);
                  if (((ulonglong)uVar11 < (ulonglong)param_1[4]) || (uVar12 < param_1[4]))
                  goto LAB_005d2490;
                  *(uint *)(uVar11 + 8) = uVar14;
                  *(undefined4 *)(uVar14 + 0x18) = 0;
                  *(uint *)(uVar14 + 8) = uVar12;
                  *(uint *)(uVar12 + 0xc) = uVar14;
                  *(uint *)(uVar14 + 0xc) = uVar11;
                }
              }
            }
LAB_005d29c4:
            uVar8 = uVar20;
          } while (puVar19 != (uint *)0x0);
        }
        param_1[7] = 0xffffffff;
      }
      goto LAB_005d24e8;
    }
    uVar4 = param_1[5];
    if (uVar4 == uVar11) {
      param_1[5] = uVar21;
      uVar12 = uVar12 + param_1[2];
      param_1[2] = uVar12;
      *(uint *)(uVar21 + 4) = uVar12 | 1;
      *(uint *)(uVar21 + uVar12) = uVar12;
      goto LAB_005d24e8;
    }
    uVar8 = (((ulonglong)uVar14 & 0xfffffffc) << 0x20) >> 0x23;
    if (uVar8 < 0x20) {
      uVar12 = *(uint *)(uVar11 + 0xc);
      uVar4 = *(uint *)(uVar11 + 8);
      if (uVar11 == uVar12) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c454,PTR_s_mspace_free_0071c448);
      }
      if (uVar11 == uVar4) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c458,PTR_s_mspace_free_0071c448);
      }
      uVar17 = (uint)(uVar8 << 3);
      if ((*(uint *)(uVar11 + 4) & 0xfffffffc) != uVar17) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c45c,PTR_s_mspace_free_0071c448);
      }
      if (uVar4 == uVar12) {
        uVar4 = param_1[5];
        *param_1 = *param_1 &
                   ((uint)(-0x100000002 << (uVar8 & 0x1f)) |
                   (uint)(0xfffffffefffffffe >> 0x40 - (uVar8 & 0x1f)));
      }
      else {
        uVar11 = (int)param_1 + uVar17 + 0x24;
        if (((uVar4 != uVar11) && (uVar4 < param_1[4])) ||
           ((uVar12 != uVar11 && (uVar12 < param_1[4])))) goto LAB_005d2490;
        *(uint *)(uVar4 + 0xc) = uVar12;
        *(uint *)(uVar12 + 8) = uVar4;
        uVar4 = param_1[5];
      }
    }
    else {
      uVar12 = *(uint *)(uVar11 + 0xc);
      uVar17 = *(uint *)(uVar11 + 0x18);
      if (uVar11 == uVar12) {
        puVar19 = (uint *)(uVar12 + 0x14);
        puVar15 = (uint *)(uVar12 + 0x10);
        uVar12 = *puVar19;
        if ((uVar12 != 0) || (uVar12 = *puVar15, puVar19 = puVar15, uVar12 != 0)) {
          while( true ) {
            puVar15 = (uint *)(uVar12 + 0x14);
            if ((*(uint *)(uVar12 + 0x14) == 0) &&
               (puVar15 = (uint *)(uVar12 + 0x10), *(uint *)(uVar12 + 0x10) == 0)) break;
            uVar12 = *puVar15;
            puVar19 = puVar15;
          }
          if (puVar19 < (uint *)param_1[4]) goto LAB_005d2490;
          *puVar19 = 0;
        }
      }
      else {
        uVar9 = *(uint *)(uVar11 + 8);
        if (uVar9 < param_1[4]) goto LAB_005d2490;
        *(uint *)(uVar9 + 0xc) = uVar12;
        *(uint *)(uVar12 + 8) = uVar9;
      }
      if (uVar17 != 0) {
        uVar9 = *(uint *)(uVar11 + 0x1c);
        if (param_1[uVar9 + 0x4b] == uVar11) {
          param_1[uVar9 + 0x4b] = uVar12;
          if (uVar12 == 0) {
            uVar8 = (ulonglong)uVar9 & 0x1f;
            param_1[1] = param_1[1] &
                         ((uint)(-0x100000002 << uVar8) | (uint)(0xfffffffefffffffe >> 0x40 - uVar8)
                         );
          }
          else {
            uVar9 = param_1[4];
LAB_005d28c8:
            if (uVar12 < uVar9) goto LAB_005d2490;
            uVar2 = *(uint *)(uVar11 + 0x10);
            *(uint *)(uVar12 + 0x18) = uVar17;
            if (uVar2 != 0) {
              if (uVar2 < uVar9) goto LAB_005d2490;
              *(uint *)(uVar12 + 0x10) = uVar2;
              *(uint *)(uVar2 + 0x18) = uVar12;
            }
            uVar11 = *(uint *)(uVar11 + 0x14);
            if (uVar11 != 0) {
              if (uVar11 < uVar9) goto LAB_005d2490;
              *(uint *)(uVar12 + 0x14) = uVar11;
              *(uint *)(uVar11 + 0x18) = uVar12;
            }
          }
        }
        else {
          uVar9 = param_1[4];
          if (uVar17 < uVar9) goto LAB_005d2490;
          if (*(uint *)(uVar17 + 0x10) == uVar11) {
            *(uint *)(uVar17 + 0x10) = uVar12;
          }
          else {
            *(uint *)(uVar17 + 0x14) = uVar12;
          }
          if (uVar12 != 0) goto LAB_005d28c8;
        }
      }
    }
    uVar18 = uVar18 + ((ulonglong)uVar14 & 0xfffffffc);
    uVar14 = (uint)uVar18;
    *(uint *)(uVar21 + 4) = uVar14 | 1;
    *(uint *)(uVar14 + uVar21) = uVar14;
    if (uVar4 == uVar21) {
      param_1[2] = uVar14;
      goto LAB_005d24e8;
    }
  }
  else {
    *(uint *)(uVar11 + 4) = uVar14 & 0xfffffffe;
    *(uint *)(uVar21 + 4) = uVar12 | 1;
    *(uint *)(uVar12 + uVar21) = uVar12;
  }
  uVar14 = (uint)uVar18;
  if ((uVar18 << 0x20) >> 0x23 < 0x20) {
    uVar11 = (int)param_1 + (uVar14 & 0xfffffff8) + 0x24;
    if ((uVar18 & 0xffffffff) < 0x10) {
      FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c460,PTR_s_mspace_free_0071c448);
    }
    uVar14 = 1 << (uVar14 >> 3 & 0x3f);
    if ((*param_1 & uVar14) == 0) {
      *param_1 = *param_1 | uVar14;
      uVar14 = uVar11;
    }
    else {
      uVar14 = *(uint *)(uVar11 + 8);
      if (uVar14 < param_1[4]) {
LAB_005d2490:
                    /* WARNING: Subroutine does not return */
        idol::abort();
      }
    }
    *(uint *)(uVar11 + 8) = uVar21;
    *(uint *)(uVar21 + 8) = uVar14;
    *(uint *)(uVar14 + 0xc) = uVar21;
    *(uint *)(uVar21 + 0xc) = uVar11;
  }
  else {
    uVar8 = (uVar18 << 0x20) >> 0x28;
    uVar12 = 0;
    uVar11 = 1;
    if (uVar14 >> 8 != 0) {
      uVar12 = 0x1f;
      uVar11 = 0x80000000;
      if (uVar8 < 0x10000) {
        uVar12 = (ushort)(uVar8 - 0x100 >> 0x10) & 8;
        iVar5 = (uVar14 >> 8) << uVar12;
        uVar11 = iVar5 - 0x1000U >> 0x10 & 4;
        iVar5 = iVar5 << uVar11;
        uVar4 = iVar5 - 0x4000U >> 0x10 & 2;
        iVar5 = ((uint)(iVar5 << uVar4) >> 0xf) - (uVar12 + uVar11 + uVar4);
        uVar12 = (iVar5 + 0xe) * 2 + (uVar14 >> (iVar5 + 0x15U & 0x3f) & 1);
        uVar11 = 1 << (uVar12 & 0x3f);
      }
    }
    *(uint *)(uVar21 + 0x1c) = uVar12;
    uVar4 = param_1[1];
    puVar19 = param_1 + uVar12 + 0x4b;
    *(undefined4 *)(uVar21 + 0x10) = 0;
    *(undefined4 *)(uVar21 + 0x14) = 0;
    if ((uVar4 & uVar11) == 0) {
      param_1[1] = uVar4 | uVar11;
      *puVar19 = uVar21;
      *(uint *)(uVar21 + 8) = uVar21;
      *(uint **)(uVar21 + 0x18) = puVar19;
      *(uint *)(uVar21 + 0xc) = uVar21;
    }
    else {
      uVar11 = 0;
      if (uVar12 != 0x1f) {
        uVar11 = 0x19 - (uVar12 >> 1);
      }
      uVar8 = (ulonglong)(uVar14 << (uVar11 & 0x3f));
      uVar11 = *puVar19;
      while ((*(uint *)(uVar11 + 4) & 0xfffffffc) != uVar14) {
        uVar20 = (ulonglong)uVar11 + ((uVar8 << 0x20) >> 0x3d & 4) + 0x10;
        puVar19 = (uint *)uVar20;
        uVar12 = *puVar19;
        if (uVar12 == 0) {
          if ((uVar20 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d2490;
          *puVar19 = uVar21;
          *(uint *)(uVar21 + 8) = uVar21;
          *(uint *)(uVar21 + 0x18) = uVar11;
          *(uint *)(uVar21 + 0xc) = uVar21;
          goto LAB_005d24e8;
        }
        uVar8 = (uVar8 & 0x7fffffff) << 1;
        uVar11 = uVar12;
      }
      uVar14 = *(uint *)(uVar11 + 8);
      if (((ulonglong)uVar11 < (ulonglong)param_1[4]) || (uVar14 < param_1[4])) goto LAB_005d2490;
      *(uint *)(uVar11 + 8) = uVar21;
      *(undefined4 *)(uVar21 + 0x18) = 0;
      *(uint *)(uVar21 + 8) = uVar14;
      *(uint *)(uVar14 + 0xc) = uVar21;
      *(uint *)(uVar21 + 0xc) = uVar11;
    }
  }
LAB_005d24e8:
  FUN_005d1770(param_1,0,0xffffffff,0,param_2 & 0xffffffff);
  return;
}



//==== 005d309c  ns=Global  size=0x1b6c
// sig: undefined FUN_005d309c(void)
// callers(5): 005d4c0c FUN_005d4c0c; 005d4f08 FUN_005d4f08; 005d529c FUN_005d529c; 005d531c FUN_005d531c; 005d5838 FUN_005d5838
// callees(9): 005c4840 idol::abort; 005cef7c FUN_005cef7c; 005d0d34 FUN_005d0d34; 005d0dbc FUN_005d0dbc; 005d15ec FUN_005d15ec; 005d1650 FUN_005d1650; 005d16bc FUN_005d16bc; 005d172c FUN_005d172c; 005d1770 FUN_005d1770
// strings: 0067f070: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3251 chunksize(p) == small_index2size(idx)' | 006611e0: 'mspace_malloc' | 0067f1c8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3252 chunksize(p) == small_index2size(idx)' | 0067f250: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3269 chunksize(p) == small_index2size(i)' | 0067f3a8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3270 chunksize(p) == small_index2size(i)' | 005d3644: '}+Kxyj' (raw) | 0067f680: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2867 chunksize(v) == rsize + nb' | 00661200: 'tmalloc_large' | 0067f518: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2906 chunksize(v) == rsize + nb' | 006611f0: 'tmalloc_small' | 0067f160: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3252 p != F' | 0067f0f8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3252 p != b' | 0067f4a0: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3279 DVS >= MIN_CHUNK_SIZE' | 0067f430: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3279 is_small(DVS)' | 0067f340: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3270 p != F' | 0067f2d8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3270 p != b' | 0067f608: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2914 DVS >= MIN_CHUNK_SIZE' | 0067f598: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2914 is_small(DVS)' | 0067f700: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2515 (char*)oldfirst > (char*)q' | 00661210: 'prepend_alloc' | 0067f780: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2516 pinuse(oldfirst)' | 0067f7f8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2517 qsize >= MIN_CHUNK_SIZE' | 0067f870: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2534 oldfirst != B' | 0067f8e0: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2534 oldfirst != F' | 0067f950: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2534 chunksize(oldfirst) == small_index2size(I)' | 0067fa58: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2573 is_aligned(ss)' | 00661220: 'add_segment' | 0067fac8: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2591 nfences >= 2' | 0067fb38: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2599 psize >= MIN_CHUNK_SIZE' | 0067f9e0: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:2539 qsize >= MIN_CHUNK_SIZE'

ulonglong FUN_005d309c(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar13;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar14;
  uint uVar16;
  ulonglong uVar15;
  uint *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint *local_80 [6];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar23 = 0;
  iVar6 = FUN_005d172c(param_1);
  if (iVar6 != 0) goto LAB_005d3168;
  if ((param_2 & 0xffffffff) < 0xed) {
    uVar22 = 0x10;
    uVar23 = 2;
    uVar5 = 2;
    if ((param_2 & 0xffffffff) < 0xb) {
      uVar26 = *param_1 >> 2;
    }
    else {
      uVar22 = param_2 + 0x13 & 0xfffffff0;
      uVar23 = (uVar22 << 0x20) >> 0x23;
      uVar5 = (uint)uVar22 >> 3;
      uVar26 = *param_1 >> (uVar5 & 0x3f);
    }
    if ((uVar26 & 3) != 0) {
      uVar23 = uVar23 + ((ulonglong)~uVar26 & 1);
      iVar6 = (int)uVar23;
      uVar5 = iVar6 * 8;
      puVar7 = param_1 + iVar6 * 2 + 9;
      puVar20 = (uint *)puVar7[2];
      if ((puVar20[1] & 0xfffffffc) != uVar5) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c464,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      puVar13 = (uint *)puVar20[2];
      if (puVar7 == puVar20) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c468,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      if (puVar20 == puVar13) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c46c,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      if ((puVar20[1] & 0xfffffffc) != uVar5) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c470,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      if (puVar7 == puVar13) {
        uVar23 = uVar23 & 0x1f;
        *param_1 = *param_1 &
                   ((uint)(-0x100000002 << uVar23) | (uint)(0xfffffffefffffffe >> 0x40 - uVar23));
      }
      else {
        if (puVar13 < (uint *)param_1[4]) goto LAB_005d3d8c;
        puVar7[2] = (uint)puVar13;
        puVar13[3] = (uint)puVar7;
      }
      puVar20[1] = uVar5 | 3;
      uVar23 = ZEXT48(puVar20) + 8;
      puVar20[iVar6 * 2 + 1] = puVar20[iVar6 * 2 + 1] | 1;
      goto LAB_005d32a0;
    }
    uVar23 = (ulonglong)param_1[2];
    if (uVar22 <= uVar23) goto LAB_005d359c;
    uVar14 = (uint)uVar22;
    if (uVar26 != 0) {
      uVar25 = 1 << (uVar5 & 0x3f) & 0x7fffffff;
      uVar5 = uVar26 << (uVar5 & 0x3f) & (uVar25 * 2 | uVar25 * -2);
      uVar5 = (uVar5 & -uVar5) - 1;
      uVar26 = uVar5 >> 0xc & 0x10;
      uVar5 = uVar5 >> uVar26;
      uVar16 = uVar5 >> 5 & 8;
      uVar5 = uVar5 >> uVar16;
      uVar25 = uVar5 >> 2 & 4;
      uVar5 = uVar5 >> uVar25;
      uVar9 = uVar5 >> 1 & 2;
      uVar5 = uVar5 >> uVar9;
      uVar10 = uVar5 >> 1 & 1;
      uVar26 = uVar26 + uVar16 + uVar25 + uVar9 + uVar10 + (uVar5 >> uVar10);
      uVar5 = uVar26 * 8;
      puVar7 = param_1 + uVar26 * 2 + 9;
      puVar20 = (uint *)puVar7[2];
      if ((puVar20[1] & 0xfffffffc) != uVar5) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c474,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      puVar13 = (uint *)puVar20[2];
      if (puVar7 == puVar20) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c478,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      if (puVar20 == puVar13) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c47c,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      if ((puVar20[1] & 0xfffffffc) != uVar5) {
        FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c480,
                     ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
      }
      if (puVar7 == puVar13) {
        *param_1 = *param_1 & ~(1 << (uVar26 & 0x3f));
      }
      else {
        if (puVar13 < (uint *)param_1[4]) goto LAB_005d3d8c;
        puVar7[2] = (uint)puVar13;
        puVar13[3] = (uint)puVar7;
      }
      uVar5 = uVar5 - uVar14;
      uVar25 = (int)puVar20 + uVar14;
      puVar20[1] = uVar14 | 3;
      *(uint *)(uVar25 + 4) = uVar5 | 1;
      *(uint *)(uVar25 + uVar5) = uVar5;
      uVar26 = param_1[2];
      if (uVar26 != 0) {
        uVar10 = uVar26 >> 3;
        uVar14 = param_1[5];
        if (0x1f < uVar10) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c484,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
        }
        puVar7 = param_1 + uVar10 * 2 + 9;
        if (uVar26 < 0x10) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c488,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x10);
        }
        uVar26 = 1 << (uVar10 & 0x3f);
        if ((*param_1 & uVar26) == 0) {
          *param_1 = *param_1 | uVar26;
          puVar13 = puVar7;
        }
        else {
          puVar13 = (uint *)puVar7[2];
          if (puVar13 < (uint *)param_1[4]) goto LAB_005d3d8c;
        }
        puVar7[2] = uVar14;
        *(uint **)(uVar14 + 8) = puVar13;
        puVar13[3] = uVar14;
        *(uint **)(uVar14 + 0xc) = puVar7;
      }
      uVar23 = ZEXT48(puVar20) + 8;
      param_1[2] = uVar5;
      param_1[5] = uVar25;
      goto LAB_005d32a0;
    }
    uVar5 = param_1[1];
    if (uVar5 == 0) goto LAB_005d312c;
    lVar11 = ((ulonglong)uVar5 & -(ulonglong)uVar5) - 1;
    uVar24 = (ulonglong)(lVar11 << 0x20) >> 0x2c & 0x10;
    uVar5 = (uint)lVar11 >> (int)uVar24;
    uVar23 = (ulonglong)(uVar5 >> 5) & 8;
    uVar5 = uVar5 >> (int)uVar23;
    uVar21 = (ulonglong)(uVar5 >> 2) & 4;
    uVar5 = uVar5 >> (int)uVar21;
    uVar19 = (ulonglong)(uVar5 >> 1) & 2;
    uVar5 = uVar5 >> (int)uVar19;
    uVar12 = (ulonglong)(uVar5 >> 1) & 1;
    uVar5 = *(uint *)((int)param_1 +
                     (int)((uVar24 + uVar23 + uVar21 + uVar19 + (ulonglong)(uVar5 >> (int)uVar12) +
                            uVar12 & 0xffffffff) << 2) + 300);
    uVar21 = (ulonglong)uVar5;
    uVar19 = (ulonglong)*(uint *)(uVar5 + 0x10);
    uVar23 = ((ulonglong)*(uint *)(uVar5 + 4) & 0xfffffffc) - uVar22;
    if (*(uint *)(uVar5 + 0x10) == 0) goto LAB_005d3954;
    do {
      do {
        uVar5 = (uint)uVar19;
        uVar12 = ((ulonglong)*(uint *)(uVar5 + 4) & 0xfffffffc) - uVar22;
        if ((uVar12 & 0xffffffff) < (uVar23 & 0xffffffff)) {
          uVar21 = uVar19;
          uVar23 = uVar12;
        }
        uVar19 = (ulonglong)*(uint *)(uVar5 + 0x10);
      } while (*(uint *)(uVar5 + 0x10) != 0);
LAB_005d3954:
      uVar19 = (ulonglong)*(uint *)(uVar5 + 0x14);
    } while (*(uint *)(uVar5 + 0x14) != 0);
    if (uVar21 < param_1[4]) goto LAB_005d3d8c;
    uVar26 = (uint)uVar23;
    uVar25 = uVar14 + uVar26;
    uVar5 = (uint)uVar21;
    if ((*(uint *)(uVar5 + 4) & 0xfffffffc) != uVar25) {
      FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c48c,
                   ZEXT48(PTR_s_mspace_free_0071c448) + 0x20);
    }
    if ((uVar21 + uVar22 & 0xffffffff) <= uVar21) goto LAB_005d3d8c;
    uVar10 = *(uint *)(uVar5 + 0xc);
    uVar19 = (ulonglong)uVar10;
    uVar16 = *(uint *)(uVar5 + 0x18);
    if (uVar5 == uVar10) {
      uVar10 = *(uint *)(uVar21 + 0x14);
      uVar19 = (ulonglong)uVar10;
      uVar12 = uVar21 + 0x14;
      if ((uVar10 != 0) ||
         (uVar10 = *(uint *)(uVar21 + 0x10), uVar19 = (ulonglong)uVar10, uVar12 = uVar21 + 0x10,
         uVar10 != 0)) {
        while( true ) {
          uVar24 = uVar19 + 0x14;
          if ((*(int *)(uVar19 + 0x14) == 0) &&
             (uVar24 = uVar19 + 0x10, *(int *)(uVar19 + 0x10) == 0)) break;
          uVar12 = uVar24;
          uVar19 = (ulonglong)*(uint *)uVar12;
        }
        if ((uVar12 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d3d8c;
        *(undefined4 *)uVar12 = 0;
      }
    }
    else {
      uVar9 = *(uint *)(uVar5 + 8);
      if (uVar9 < param_1[4]) goto LAB_005d3d8c;
      *(uint *)(uVar9 + 0xc) = uVar10;
      *(uint *)(uVar10 + 8) = uVar9;
    }
    if (uVar16 != 0) {
      uVar10 = *(uint *)(uVar5 + 0x1c);
      uVar9 = (uint)uVar19;
      if (param_1[uVar10 + 0x4b] == uVar5) {
        param_1[uVar10 + 0x4b] = uVar9;
        if (uVar9 == 0) {
          uVar19 = (ulonglong)uVar10 & 0x1f;
          param_1[1] = param_1[1] &
                       ((uint)(-0x100000002 << uVar19) | (uint)(0xfffffffefffffffe >> 0x40 - uVar19)
                       );
        }
        else {
          uVar10 = param_1[4];
LAB_005d3a20:
          if (uVar19 < uVar10) goto LAB_005d3d8c;
          uVar1 = *(uint *)(uVar5 + 0x10);
          *(uint *)(uVar9 + 0x18) = uVar16;
          if (uVar1 != 0) {
            if (uVar1 < uVar10) goto LAB_005d3d8c;
            *(uint *)(uVar9 + 0x10) = uVar1;
            *(uint *)(uVar1 + 0x18) = uVar9;
          }
          uVar16 = *(uint *)(uVar5 + 0x14);
          if (uVar16 != 0) {
            if (uVar16 < uVar10) goto LAB_005d3d8c;
            *(uint *)(uVar9 + 0x14) = uVar16;
            *(uint *)(uVar16 + 0x18) = uVar9;
          }
        }
      }
      else {
        uVar10 = param_1[4];
        if (uVar16 < uVar10) goto LAB_005d3d8c;
        if (*(uint *)(uVar16 + 0x10) == uVar5) {
          *(uint *)(uVar16 + 0x10) = uVar9;
        }
        else {
          *(uint *)(uVar16 + 0x14) = uVar9;
        }
        if (uVar9 != 0) goto LAB_005d3a20;
      }
    }
    iVar6 = uVar5 + uVar25;
    if ((uVar23 & 0xffffffff) < 0x10) {
LAB_005d37b8:
      *(uint *)((int)uVar21 + 4) = uVar25 | 3;
      *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 1;
    }
    else {
      uVar25 = (uint)(uVar21 + uVar22);
      *(uint *)(uVar5 + 4) = uVar14 | 3;
      *(uint *)(uVar25 + 4) = uVar26 | 1;
      *(uint *)(uVar25 + uVar26) = uVar26;
      uVar5 = param_1[2];
      if (uVar5 != 0) {
        uVar10 = uVar5 >> 3;
        uVar14 = param_1[5];
        if (0x1f < uVar10) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c490,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x20);
        }
        puVar20 = param_1 + uVar10 * 2 + 9;
        if (uVar5 < 0x10) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c494,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x20);
        }
        uVar5 = 1 << (uVar10 & 0x3f);
        if ((*param_1 & uVar5) == 0) {
          *param_1 = *param_1 | uVar5;
          puVar7 = puVar20;
        }
        else {
          puVar7 = (uint *)puVar20[2];
          if (puVar7 < (uint *)param_1[4]) goto LAB_005d3d8c;
        }
        puVar20[2] = uVar14;
        *(uint **)(uVar14 + 8) = puVar7;
        puVar7[3] = uVar14;
        *(uint **)(uVar14 + 0xc) = puVar20;
      }
      param_1[2] = uVar26;
      param_1[5] = uVar25;
    }
LAB_005d37cc:
    uVar23 = uVar21 + 8;
    if ((int)(uVar21 + 8) == 0) goto LAB_005d37d8;
LAB_005d32ac:
    uVar22 = uVar23;
    uVar5 = (*(uint *)((int)uVar22 + -4) & 0xfffffffc) + param_1[0x6d];
    param_1[0x6d] = uVar5;
    uVar23 = uVar22;
    if (param_1[0x6e] < uVar5) {
      param_1[0x6e] = uVar5;
    }
  }
  else {
    if ((param_2 & 0xffffffff) < 0xffffffc0) {
      uVar22 = param_2 + 0x13 & 0xfffffff0;
      if (param_1[1] != 0) {
        uVar23 = (uVar22 << 0x20) >> 0x28;
        uVar19 = -uVar22;
        uVar5 = (uint)uVar22;
        uVar26 = 0;
        iVar6 = 0;
        if (uVar5 >> 8 != 0) {
          uVar26 = 0x1f;
          iVar6 = 0x7c;
          if (uVar23 < 0x10000) {
            uVar21 = (uVar23 - 0x100 << 0x20) >> 0x30 & 8;
            iVar6 = (uVar5 >> 8) << (int)uVar21;
            uVar23 = (ulonglong)(iVar6 - 0x1000U >> 0x10) & 4;
            iVar6 = iVar6 << (int)uVar23;
            uVar12 = (ulonglong)(iVar6 - 0x4000U >> 0x10) & 2;
            lVar11 = (ulonglong)((uint)(iVar6 << (int)uVar12) >> 0xf) - (uVar21 + uVar23 + uVar12);
            uVar23 = (lVar11 + 0xeU & 0x7fffffff) * 2 +
                     ((ulonglong)(uVar5 >> ((int)lVar11 + 0x15U & 0x3f)) & 1);
            uVar26 = (uint)uVar23;
            iVar6 = (int)((uVar23 & 0x3fffffff) << 2);
          }
        }
        uVar21 = 0;
        uVar25 = *(uint *)((int)param_1 + iVar6 + 300);
        uVar23 = (ulonglong)uVar25;
        uVar12 = uVar23;
        if (uVar25 == 0) {
LAB_005d3b1c:
          uVar23 = (ulonglong)(uint)(2 << (uVar26 & 0x3f));
          uVar23 = (ulonglong)param_1[1] & (uVar23 | -uVar23);
          if ((int)uVar23 != 0) {
            lVar11 = (uVar23 & -uVar23) - 1;
            uVar15 = (ulonglong)(lVar11 << 0x20) >> 0x2c & 0x10;
            uVar26 = (uint)lVar11 >> (int)uVar15;
            uVar23 = (ulonglong)(uVar26 >> 5) & 8;
            uVar26 = uVar26 >> (int)uVar23;
            uVar24 = (ulonglong)(uVar26 >> 2) & 4;
            uVar26 = uVar26 >> (int)uVar24;
            uVar12 = (ulonglong)(uVar26 >> 1) & 2;
            uVar26 = uVar26 >> (int)uVar12;
            uVar8 = (ulonglong)(uVar26 >> 1) & 1;
            uVar12 = (ulonglong)
                     *(uint *)((int)param_1 +
                              (int)((uVar15 + uVar23 + uVar24 + uVar12 +
                                     (ulonglong)(uVar26 >> (int)uVar8) + uVar8 & 0xffffffff) << 2) +
                              300);
          }
        }
        else {
          uVar25 = 0;
          if (uVar26 != 0x1f) {
            uVar25 = 0x19 - (uVar26 >> 1);
          }
          uVar8 = (ulonglong)(uVar5 << (uVar25 & 0x3f));
          uVar21 = 0;
          uVar24 = 0;
          while( true ) {
            iVar6 = (int)uVar23;
            uVar12 = ((ulonglong)*(uint *)(iVar6 + 4) & 0xfffffffc) - uVar22;
            if (((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff)) &&
               (uVar21 = uVar23, uVar19 = uVar12, (int)uVar12 == 0)) goto LAB_005d3648;
            uVar25 = *(uint *)(iVar6 + 0x14);
            uVar14 = *(uint *)(iVar6 + ((uint)uVar8 >> 0x1d & 4) + 0x10);
            uVar23 = (ulonglong)uVar14;
            uVar12 = uVar24;
            if (((uVar25 == 0) || (uVar12 = (ulonglong)uVar25, uVar25 != uVar14)) &&
               (uVar24 = uVar12, uVar14 == 0)) break;
            uVar8 = (uVar8 & 0x7fffffff) << 1;
          }
          if ((int)uVar21 == 0 && (int)uVar12 == 0) goto LAB_005d3b1c;
        }
        uVar26 = (uint)uVar12;
        uVar23 = uVar12;
        uVar12 = uVar19;
        while (uVar26 != 0) {
LAB_005d3648:
          do {
            iVar6 = (int)uVar23;
            uVar19 = ((ulonglong)*(uint *)(iVar6 + 4) & 0xfffffffc) - uVar22;
            if ((uVar19 & 0xffffffff) < (uVar12 & 0xffffffff)) {
              uVar21 = uVar23;
              uVar12 = uVar19;
            }
            uVar23 = (ulonglong)*(uint *)(iVar6 + 0x10);
          } while (*(uint *)(iVar6 + 0x10) != 0);
          uVar26 = *(uint *)(iVar6 + 0x14);
          uVar23 = (ulonglong)uVar26;
        }
        uVar26 = (uint)uVar21;
        if (uVar26 != 0) {
          uVar23 = (ulonglong)param_1[2];
          if ((uVar12 & 0xffffffff) < (uVar23 - uVar22 & 0xffffffff)) {
            if (uVar21 < param_1[4]) goto LAB_005d3d8c;
            uVar14 = (uint)uVar12;
            uVar25 = uVar14 + uVar5;
            if ((*(uint *)(uVar26 + 4) & 0xfffffffc) != uVar25) {
              FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c498,
                           ZEXT48(PTR_s_mspace_free_0071c448) + 0x30);
            }
            if ((uVar21 + uVar22 & 0xffffffff) <= uVar21) goto LAB_005d3d8c;
            uVar10 = *(uint *)(uVar26 + 0xc);
            uVar23 = (ulonglong)uVar10;
            uVar16 = *(uint *)(uVar26 + 0x18);
            if (uVar26 == uVar10) {
              uVar19 = uVar21 + 0x14;
              uVar23 = (ulonglong)*(uint *)uVar19;
              if ((*(uint *)uVar19 != 0) ||
                 (uVar10 = *(uint *)(uVar21 + 0x10), uVar23 = (ulonglong)uVar10,
                 uVar19 = uVar21 + 0x10, uVar10 != 0)) {
                while( true ) {
                  uVar24 = uVar23 + 0x14;
                  if ((*(int *)uVar24 == 0) &&
                     (uVar24 = uVar23 + 0x10, *(int *)(uVar23 + 0x10) == 0)) break;
                  uVar23 = (ulonglong)*(uint *)uVar24;
                  uVar19 = uVar24;
                }
                if ((uVar19 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d3d8c;
                *(undefined4 *)uVar19 = 0;
              }
            }
            else {
              uVar9 = *(uint *)(uVar26 + 8);
              if (uVar9 < param_1[4]) goto LAB_005d3d8c;
              *(uint *)(uVar9 + 0xc) = uVar10;
              *(uint *)(uVar10 + 8) = uVar9;
            }
            if (uVar16 != 0) {
              uVar10 = *(uint *)(uVar26 + 0x1c);
              uVar9 = (uint)uVar23;
              if (param_1[uVar10 + 0x4b] == uVar26) {
                param_1[uVar10 + 0x4b] = uVar9;
                if (uVar9 == 0) {
                  uVar23 = (ulonglong)uVar10 & 0x1f;
                  param_1[1] = param_1[1] &
                               ((uint)(-0x100000002 << uVar23) |
                               (uint)(0xfffffffefffffffe >> 0x40 - uVar23));
                }
                else {
                  uVar10 = param_1[4];
LAB_005d3758:
                  if (uVar23 < uVar10) goto LAB_005d3d8c;
                  uVar1 = *(uint *)(uVar26 + 0x10);
                  *(uint *)(uVar9 + 0x18) = uVar16;
                  if (uVar1 != 0) {
                    if (uVar1 < uVar10) goto LAB_005d3d8c;
                    *(uint *)(uVar9 + 0x10) = uVar1;
                    *(uint *)(uVar1 + 0x18) = uVar9;
                  }
                  uVar16 = *(uint *)(uVar26 + 0x14);
                  if (uVar16 != 0) {
                    if (uVar16 < uVar10) goto LAB_005d3d8c;
                    *(uint *)(uVar9 + 0x14) = uVar16;
                    *(uint *)(uVar16 + 0x18) = uVar9;
                  }
                }
              }
              else {
                uVar10 = param_1[4];
                if (uVar16 < uVar10) goto LAB_005d3d8c;
                if (*(uint *)(uVar16 + 0x10) == uVar26) {
                  *(uint *)(uVar16 + 0x10) = uVar9;
                }
                else {
                  *(uint *)(uVar16 + 0x14) = uVar9;
                }
                if (uVar9 != 0) goto LAB_005d3758;
              }
            }
            if ((uVar12 & 0xffffffff) < 0x10) {
              iVar6 = uVar26 + uVar25;
              goto LAB_005d37b8;
            }
            uVar25 = (uint)(uVar21 + uVar22);
            *(uint *)(uVar26 + 4) = uVar5 | 3;
            *(uint *)(uVar25 + 4) = uVar14 | 1;
            *(uint *)(uVar25 + uVar14) = uVar14;
            if ((uVar12 << 0x20) >> 0x23 < 0x20) {
              uVar5 = 1 << (uVar14 >> 3 & 0x3f);
              uVar26 = (int)param_1 + (uVar14 & 0xfffffff8) + 0x24;
              if ((*param_1 & uVar5) == 0) {
                *param_1 = *param_1 | uVar5;
                uVar5 = uVar26;
              }
              else {
                uVar5 = *(uint *)(uVar26 + 8);
                if (uVar5 < param_1[4]) goto LAB_005d3d8c;
              }
              *(uint *)(uVar26 + 8) = uVar25;
              *(uint *)(uVar25 + 8) = uVar5;
              *(uint *)(uVar5 + 0xc) = uVar25;
              *(uint *)(uVar25 + 0xc) = uVar26;
            }
            else {
              uVar23 = (uVar12 << 0x20) >> 0x28;
              uVar26 = 0;
              iVar6 = 0;
              uVar5 = 1;
              if (uVar14 >> 8 != 0) {
                uVar26 = 0x1f;
                iVar6 = 0x7c;
                uVar5 = 0x80000000;
                if (uVar23 < 0x10000) {
                  uVar19 = (uVar23 - 0x100 << 0x20) >> 0x30 & 8;
                  iVar6 = (uVar14 >> 8) << (int)uVar19;
                  uVar23 = (ulonglong)(iVar6 - 0x1000U >> 0x10) & 4;
                  iVar6 = iVar6 << (int)uVar23;
                  uVar12 = (ulonglong)(iVar6 - 0x4000U >> 0x10) & 2;
                  lVar11 = (ulonglong)((uint)(iVar6 << (int)uVar12) >> 0xf) -
                           (uVar19 + uVar23 + uVar12);
                  uVar23 = (lVar11 + 0xeU & 0x7fffffff) * 2 +
                           ((ulonglong)(uVar14 >> ((int)lVar11 + 0x15U & 0x3f)) & 1);
                  uVar26 = (uint)uVar23;
                  uVar5 = 1 << (uVar26 & 0x3f);
                  iVar6 = (int)((uVar23 & 0x3fffffff) << 2);
                }
              }
              *(uint *)(uVar25 + 0x1c) = uVar26;
              uVar10 = param_1[1];
              puVar20 = (uint *)((int)param_1 + iVar6 + 300);
              *(undefined4 *)(uVar25 + 0x10) = 0;
              *(undefined4 *)(uVar25 + 0x14) = 0;
              if ((uVar5 & uVar10) == 0) {
                param_1[1] = uVar5 | uVar10;
                *puVar20 = uVar25;
                *(uint *)(uVar25 + 8) = uVar25;
                *(uint **)(uVar25 + 0x18) = puVar20;
                *(uint *)(uVar25 + 0xc) = uVar25;
              }
              else {
                uVar5 = 0;
                if (uVar26 != 0x1f) {
                  uVar5 = 0x19 - (uVar26 >> 1);
                }
                uVar23 = (ulonglong)(uVar14 << (uVar5 & 0x3f));
                uVar5 = *puVar20;
                while ((*(uint *)(uVar5 + 4) & 0xfffffffc) != uVar14) {
                  uVar19 = (ulonglong)uVar5 + ((uVar23 << 0x20) >> 0x3d & 4) + 0x10;
                  puVar20 = (uint *)uVar19;
                  uVar26 = *puVar20;
                  if (uVar26 == 0) {
                    if ((uVar19 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d3d8c;
                    *puVar20 = uVar25;
                    *(uint *)(uVar25 + 8) = uVar25;
                    *(uint *)(uVar25 + 0x18) = uVar5;
                    *(uint *)(uVar25 + 0xc) = uVar25;
                    goto LAB_005d37cc;
                  }
                  uVar23 = (uVar23 & 0x7fffffff) << 1;
                  uVar5 = uVar26;
                }
                uVar26 = *(uint *)(uVar5 + 8);
                if (((ulonglong)uVar5 < (ulonglong)param_1[4]) || (uVar26 < param_1[4]))
                goto LAB_005d3d8c;
                *(uint *)(uVar5 + 8) = uVar25;
                *(undefined4 *)(uVar25 + 0x18) = 0;
                *(uint *)(uVar25 + 8) = uVar26;
                *(uint *)(uVar26 + 0xc) = uVar25;
                *(uint *)(uVar25 + 0xc) = uVar5;
              }
            }
            goto LAB_005d37cc;
          }
          goto LAB_005d3120;
        }
      }
LAB_005d37d8:
      uVar23 = (ulonglong)param_1[2];
    }
    else {
      uVar22 = 0xffffffffffffffff;
      uVar23 = (ulonglong)param_1[2];
    }
LAB_005d3120:
    if (uVar23 < (uVar22 & 0xffffffff)) {
LAB_005d312c:
      puVar4 = PTR_DAT_0071c434;
      uVar5 = (uint)uVar22;
      if ((ulonglong)param_1[3] <= (uVar22 & 0xffffffff)) {
        if (param_1 == *(uint **)(PTR_DAT_0071c434 + 0x20)) {
          FUN_005d16bc();
          uVar23 = (ulonglong)*(uint *)(puVar4 + 8) + 0x31 + uVar22 &
                   -(ulonglong)*(uint *)(puVar4 + 8);
          if (((uVar22 & 0xffffffff) < (uVar23 & 0xffffffff)) &&
             ((*(uint *)(puVar4 + 0x24) == 0 ||
              ((uVar23 + param_1[0x6c] & 0xffffffff) <= (ulonglong)*(uint *)(puVar4 + 0x24))))) {
            uVar26 = *(uint *)PTR_DAT_0071c438;
            uVar25 = (int)(uVar26 ^ 0x100000) >> 0x1f;
            syscall();
            if (((int)uVar23 == 0) &&
               (uVar19 = ZEXT48(local_80[0]), local_80[0] != (uint *)0xffffffff)) {
              uVar14 = param_1[0x6b];
              uVar10 = (uint)(uVar23 + uVar14);
              param_1[0x6b] = uVar10;
              if ((ulonglong)param_1[0x6c] < (uVar23 + uVar14 & 0xffffffff)) {
                param_1[0x6c] = uVar10;
              }
              puVar20 = (uint *)param_1[6];
              uVar21 = ZEXT48(puVar20);
              if (puVar20 == (uint *)0x0) {
                param_1[0x77] = 0;
                param_1[0x79] = 1;
                uVar14 = *(uint *)puVar4;
                param_1[4] = (uint)local_80[0];
                param_1[8] = uVar14;
                uVar14 = *(uint *)(puVar4 + 0x14);
                param_1[0x76] = (uint)local_80[0];
                param_1[0x6f] = uVar14;
                FUN_005d1650(param_1,((longlong)
                                      ((int)(uVar25 - (uVar25 ^ uVar26 ^ 0x100000)) >> 0x1f) &
                                     0xfffffffffffffe00U) + 0x400,local_80);
                param_1[0x6d] = 0x40;
                if (param_1[0x6e] < 0x40) {
                  param_1[0x6e] = 0x40;
                }
                FUN_005d15ec(param_1,local_80[0],uVar23 - 0x30 & 0xffffffff);
              }
              else {
                puVar7 = param_1 + 0x76;
                if (puVar7 != (uint *)0x0) {
                  puVar13 = (uint *)*puVar7;
                  uVar26 = param_1[0x77];
                  puVar17 = (uint *)((int)puVar13 + uVar26);
                  puVar2 = puVar7;
                  while (puVar17 != local_80[0]) {
                    puVar2 = (uint *)puVar2[2];
                    if (puVar2 == (uint *)0x0) goto LAB_005d3f78;
                    puVar13 = (uint *)*puVar2;
                    uVar26 = puVar2[1];
                    puVar17 = (uint *)((int)puVar13 + uVar26);
                  }
                  if ((((puVar2[3] & 1) != 0) && (puVar13 <= puVar20)) && (puVar20 < puVar17)) {
                    puVar2[1] = uVar26;
                    FUN_005d15ec(param_1,puVar20,uVar23 + param_1[3] & 0xffffffff);
                    goto LAB_005d4134;
                  }
                }
LAB_005d3f78:
                if (local_80[0] < (uint *)param_1[4]) {
                  param_1[4] = (uint)local_80[0];
                }
                if (puVar7 != (uint *)0x0) {
                  lVar11 = uVar23 + uVar19;
                  uVar26 = *puVar7;
                  while (uVar26 != (uint)lVar11) {
                    puVar7 = (uint *)puVar7[2];
                    if (puVar7 == (uint *)0x0) goto LAB_005d3fbc;
                    uVar26 = *puVar7;
                  }
                  if ((puVar7[3] & 1) != 0) {
                    *puVar7 = (uint)local_80[0];
                    uVar23 = uVar19 + 8 & 0xf;
                    puVar7[1] = puVar7[1];
                    uVar21 = 0;
                    if ((int)uVar23 != 0) {
                      uVar21 = 0x10 - uVar23 & 0xf;
                    }
                    lVar18 = uVar21 + uVar19;
                    uVar23 = lVar11 + 8U & 0xf;
                    uVar19 = 0;
                    if ((int)uVar23 != 0) {
                      uVar19 = 0x10 - uVar23 & 0xf;
                    }
                    uVar19 = uVar19 + lVar11;
                    uVar26 = (uint)uVar19;
                    uVar21 = lVar18 + uVar22;
                    *(uint *)((int)lVar18 + 4) = uVar5 | 3;
                    uVar22 = (uVar19 - lVar18) - uVar22;
                    if ((uVar19 & 0xffffffff) <= (uVar21 & 0xffffffff)) {
                      FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c49c,
                                   ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                    }
                    if ((*(uint *)(uVar26 + 4) & 1) == 0) {
                      FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4a0,
                                   ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                    }
                    if ((uVar22 & 0xffffffff) < 0x10) {
                      FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4a4,
                                   ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                    }
                    uVar5 = (uint)uVar21;
                    if (param_1[6] == uVar26) {
                      uVar26 = (int)uVar22 + param_1[3];
                      param_1[3] = uVar26;
                      param_1[6] = uVar5;
                      *(uint *)(uVar5 + 4) = uVar26 | 1;
                      uVar23 = lVar18 + 8;
                      FUN_005d0dbc(param_1,uVar21 & 0xffffffff);
                    }
                    else if (param_1[5] == uVar26) {
                      uVar23 = lVar18 + 8;
                      uVar26 = (int)uVar22 + param_1[2];
                      param_1[5] = uVar5;
                      param_1[2] = uVar26;
                      *(uint *)(uVar5 + 4) = uVar26 | 1;
                      *(uint *)(uVar5 + uVar26) = uVar26;
                    }
                    else {
                      if ((*(uint *)(uVar26 + 4) & 2) == 0) {
                        uVar21 = (ulonglong)*(uint *)(uVar26 + 4) & 0xfffffffc;
                        uVar23 = (uVar21 << 0x20) >> 0x23;
                        if (uVar23 < 0x20) {
                          uVar25 = *(uint *)(uVar26 + 0xc);
                          uVar14 = *(uint *)(uVar26 + 8);
                          if (uVar26 == uVar25) {
                            FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4a8,
                                         ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                          }
                          if (uVar26 == uVar14) {
                            FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4ac,
                                         ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                          }
                          uVar10 = (uint)(uVar23 << 3);
                          if ((*(uint *)(uVar26 + 4) & 0xfffffffc) != uVar10) {
                            FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4b0,
                                         ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                          }
                          if (uVar14 == uVar25) {
                            *param_1 = *param_1 &
                                       ((uint)(-0x100000002 << (uVar23 & 0x1f)) |
                                       (uint)(0xfffffffefffffffe >> 0x40 - (uVar23 & 0x1f)));
                          }
                          else {
                            uVar10 = (int)param_1 + uVar10 + 0x24;
                            if (((uVar14 != uVar10) && (uVar14 < param_1[4])) ||
                               ((uVar25 != uVar10 && (uVar25 < param_1[4])))) goto LAB_005d3d8c;
                            *(uint *)(uVar25 + 8) = uVar14;
                            *(uint *)(uVar14 + 0xc) = uVar25;
                          }
                        }
                        else {
                          uVar25 = *(uint *)(uVar26 + 0xc);
                          uVar23 = (ulonglong)uVar25;
                          uVar14 = *(uint *)(uVar26 + 0x18);
                          if (uVar26 == uVar25) {
                            uVar25 = *(uint *)(uVar19 + 0x14);
                            uVar23 = (ulonglong)uVar25;
                            uVar12 = uVar19 + 0x14;
                            if ((uVar25 != 0) ||
                               (uVar25 = *(uint *)(uVar19 + 0x10), uVar23 = (ulonglong)uVar25,
                               uVar12 = uVar19 + 0x10, uVar25 != 0)) {
                              while( true ) {
                                uVar19 = uVar23 + 0x14;
                                if ((*(int *)(uVar23 + 0x14) == 0) &&
                                   (uVar19 = uVar23 + 0x10, *(int *)(uVar23 + 0x10) == 0)) break;
                                uVar12 = uVar19;
                                uVar23 = (ulonglong)*(uint *)uVar12;
                              }
                              if ((uVar12 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d3d8c;
                              *(undefined4 *)uVar12 = 0;
                            }
                          }
                          else {
                            uVar10 = *(uint *)(uVar26 + 8);
                            if (uVar10 < param_1[4]) goto LAB_005d3d8c;
                            *(uint *)(uVar10 + 0xc) = uVar25;
                            *(uint *)(uVar25 + 8) = uVar10;
                          }
                          if (uVar14 != 0) {
                            uVar25 = *(uint *)(uVar26 + 0x1c);
                            uVar10 = (uint)uVar23;
                            if (param_1[uVar25 + 0x4b] == uVar26) {
                              param_1[uVar25 + 0x4b] = uVar10;
                              if (uVar10 == 0) {
                                uVar23 = (ulonglong)uVar25 & 0x1f;
                                param_1[1] = param_1[1] &
                                             ((uint)(-0x100000002 << uVar23) |
                                             (uint)(0xfffffffefffffffe >> 0x40 - uVar23));
                              }
                              else {
                                uVar25 = param_1[4];
LAB_005d4adc:
                                if (uVar23 < uVar25) goto LAB_005d3d8c;
                                uVar16 = *(uint *)(uVar26 + 0x10);
                                *(uint *)(uVar10 + 0x18) = uVar14;
                                if (uVar16 != 0) {
                                  if (uVar16 < uVar25) goto LAB_005d3d8c;
                                  *(uint *)(uVar10 + 0x10) = uVar16;
                                  *(uint *)(uVar16 + 0x18) = uVar10;
                                }
                                uVar14 = *(uint *)(uVar26 + 0x14);
                                if (uVar14 != 0) {
                                  if (uVar14 < uVar25) goto LAB_005d3d8c;
                                  *(uint *)(uVar10 + 0x14) = uVar14;
                                  *(uint *)(uVar14 + 0x18) = uVar10;
                                }
                              }
                            }
                            else {
                              uVar25 = param_1[4];
                              if (uVar14 < uVar25) goto LAB_005d3d8c;
                              if (*(uint *)(uVar14 + 0x10) == uVar26) {
                                *(uint *)(uVar14 + 0x10) = uVar10;
                              }
                              else {
                                *(uint *)(uVar14 + 0x14) = uVar10;
                              }
                              if (uVar10 != 0) goto LAB_005d4adc;
                            }
                          }
                        }
                        uVar26 = uVar26 + (int)uVar21;
                        uVar22 = uVar22 + uVar21;
                      }
                      uVar25 = (uint)uVar22;
                      *(uint *)(uVar26 + 4) = *(uint *)(uVar26 + 4) & 0xfffffffe;
                      *(uint *)(uVar5 + uVar25) = uVar25;
                      *(uint *)(uVar5 + 4) = uVar25 | 1;
                      if ((uVar22 << 0x20) >> 0x23 < 0x20) {
                        uVar26 = (int)param_1 + (uVar25 & 0xfffffff8) + 0x24;
                        if ((uVar22 & 0xffffffff) < 0x10) {
                          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4b4,
                                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x40);
                        }
                        uVar25 = 1 << (uVar25 >> 3 & 0x3f);
                        if ((*param_1 & uVar25) == 0) {
                          *param_1 = *param_1 | uVar25;
                          uVar25 = uVar26;
                        }
                        else {
                          uVar25 = *(uint *)(uVar26 + 8);
                          if (uVar25 < param_1[4]) goto LAB_005d3d8c;
                        }
                        *(uint *)(uVar26 + 8) = uVar5;
                        *(uint *)(uVar5 + 8) = uVar25;
                        *(uint *)(uVar25 + 0xc) = uVar5;
                        *(uint *)(uVar5 + 0xc) = uVar26;
                        uVar23 = lVar18 + 8;
                      }
                      else {
                        uVar23 = (uVar22 << 0x20) >> 0x28;
                        uVar14 = 0;
                        uVar26 = 1;
                        if (uVar25 >> 8 != 0) {
                          uVar14 = 0x1f;
                          uVar26 = 0x80000000;
                          if (uVar23 < 0x10000) {
                            uVar14 = (ushort)(uVar23 - 0x100 >> 0x10) & 8;
                            iVar6 = (uVar25 >> 8) << uVar14;
                            uVar26 = iVar6 - 0x1000U >> 0x10 & 4;
                            iVar6 = iVar6 << uVar26;
                            uVar10 = iVar6 - 0x4000U >> 0x10 & 2;
                            iVar6 = ((uint)(iVar6 << uVar10) >> 0xf) - (uVar14 + uVar26 + uVar10);
                            uVar14 = (iVar6 + 0xe) * 2 + (uVar25 >> (iVar6 + 0x15U & 0x3f) & 1);
                            uVar26 = 1 << (uVar14 & 0x3f);
                          }
                        }
                        *(uint *)(uVar5 + 0x1c) = uVar14;
                        uVar10 = param_1[1];
                        puVar20 = param_1 + uVar14 + 0x4b;
                        *(undefined4 *)(uVar5 + 0x10) = 0;
                        *(undefined4 *)(uVar5 + 0x14) = 0;
                        if ((uVar26 & uVar10) == 0) {
                          param_1[1] = uVar26 | uVar10;
                          *puVar20 = uVar5;
                          *(uint *)(uVar5 + 8) = uVar5;
                          *(uint **)(uVar5 + 0x18) = puVar20;
                          *(uint *)(uVar5 + 0xc) = uVar5;
                          uVar23 = lVar18 + 8;
                        }
                        else {
                          uVar26 = 0;
                          if (uVar14 != 0x1f) {
                            uVar26 = 0x19 - (uVar14 >> 1);
                          }
                          uVar23 = (ulonglong)(uVar25 << (uVar26 & 0x3f));
                          uVar26 = *puVar20;
                          while ((*(uint *)(uVar26 + 4) & 0xfffffffc) != uVar25) {
                            uVar22 = (ulonglong)uVar26 + ((uVar23 << 0x20) >> 0x3d & 4) + 0x10;
                            puVar20 = (uint *)uVar22;
                            uVar14 = *puVar20;
                            if (uVar14 == 0) {
                              if ((uVar22 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d3d8c;
                              *puVar20 = uVar5;
                              *(uint *)(uVar5 + 8) = uVar5;
                              *(uint *)(uVar5 + 0x18) = uVar26;
                              *(uint *)(uVar5 + 0xc) = uVar5;
                              uVar23 = lVar18 + 8;
                              goto LAB_005d32a0;
                            }
                            uVar23 = (uVar23 & 0x7fffffff) << 1;
                            uVar26 = uVar14;
                          }
                          uVar25 = *(uint *)(uVar26 + 8);
                          if (((ulonglong)uVar26 < (ulonglong)param_1[4]) || (uVar25 < param_1[4]))
                          goto LAB_005d3d8c;
                          *(uint *)(uVar26 + 8) = uVar5;
                          *(undefined4 *)(uVar5 + 0x18) = 0;
                          *(uint *)(uVar5 + 8) = uVar25;
                          *(uint *)(uVar25 + 0xc) = uVar5;
                          *(uint *)(uVar5 + 0xc) = uVar26;
                          uVar23 = lVar18 + 8;
                        }
                      }
                    }
                    goto LAB_005d32a0;
                  }
                }
LAB_005d3fbc:
                puVar7 = (uint *)FUN_005d0d34(param_1,puVar20);
                uVar12 = 0;
                uVar24 = (ulonglong)*puVar7 + (ulonglong)puVar7[1];
                uVar19 = uVar24 - 0x37 & 0xf;
                if ((int)uVar19 != 0) {
                  uVar12 = 0x10 - uVar19 & 0xf;
                }
                uVar12 = (uVar24 - 0x3f) + uVar12;
                if ((uVar12 & 0xffffffff) < (uVar21 + 0x10 & 0xffffffff)) {
                  uVar12 = uVar21;
                }
                uVar26 = param_1[0x6d];
                uVar25 = uVar26 + 0x40;
                param_1[0x6d] = uVar25;
                if (param_1[0x6e] < uVar26 + 0x40) {
                  param_1[0x6e] = uVar25;
                }
                FUN_005d15ec(param_1,local_80[0],uVar23 - 0x30 & 0xffffffff);
                if ((uVar12 + 8 & 0xf) != 0) {
                  FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4b8,
                               ZEXT48(PTR_s_mspace_free_0071c448) + 0x50);
                }
                puVar7 = (uint *)uVar12;
                uVar26 = param_1[0x78];
                iVar6 = 0;
                puVar7[1] = 0x23;
                puVar3 = (undefined4 *)(uVar12 + 8);
                puVar3[2] = uVar26;
                *puVar3 = local_80[0];
                puVar3[1] = 0;
                puVar3[3] = 1;
                param_1[0x78] = (uint)puVar3;
                uVar23 = uVar12 + 0x24;
                do {
                  uVar19 = uVar23 + 4;
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)uVar23 = 7;
                  uVar23 = uVar19;
                } while ((uVar19 & 0xffffffff) < (uVar24 & 0xffffffff));
                if (iVar6 == 1) {
                  FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4bc,
                               ZEXT48(PTR_s_mspace_free_0071c448) + 0x50);
                }
                if (puVar7 != puVar20) {
                  uVar12 = uVar12 - uVar21;
                  uVar26 = (uint)uVar12;
                  *puVar7 = uVar26;
                  puVar7[1] = puVar7[1] & 0xfffffffe;
                  puVar20[1] = uVar26 | 1;
                  if ((uVar12 << 0x20) >> 0x23 < 0x20) {
                    uVar25 = (int)param_1 + (uVar26 & 0xfffffff8) + 0x24;
                    if ((uVar12 & 0xffffffff) < 0x10) {
                      FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4c0,
                                   ZEXT48(PTR_s_mspace_free_0071c448) + 0x50);
                    }
                    uVar26 = 1 << (uVar26 >> 3 & 0x3f);
                    if ((*param_1 & uVar26) == 0) {
                      *param_1 = *param_1 | uVar26;
                      uVar26 = uVar25;
                    }
                    else {
                      uVar26 = *(uint *)(uVar25 + 8);
                      if (uVar26 < param_1[4]) {
LAB_005d3d8c:
                    /* WARNING: Subroutine does not return */
                        idol::abort();
                      }
                    }
                    *(uint **)(uVar25 + 8) = puVar20;
                    puVar20[2] = uVar26;
                    *(uint **)(uVar26 + 0xc) = puVar20;
                    puVar20[3] = uVar25;
                  }
                  else {
                    uVar23 = (uVar12 << 0x20) >> 0x28;
                    uVar14 = 0;
                    uVar25 = 1;
                    if (uVar26 >> 8 != 0) {
                      uVar14 = 0x1f;
                      uVar25 = 0x80000000;
                      if (uVar23 < 0x10000) {
                        uVar14 = (ushort)(uVar23 - 0x100 >> 0x10) & 8;
                        iVar6 = (uVar26 >> 8) << uVar14;
                        uVar25 = iVar6 - 0x1000U >> 0x10 & 4;
                        iVar6 = iVar6 << uVar25;
                        uVar10 = iVar6 - 0x4000U >> 0x10 & 2;
                        iVar6 = ((uint)(iVar6 << uVar10) >> 0xf) - (uVar14 + uVar25 + uVar10);
                        uVar14 = (iVar6 + 0xe) * 2 + (uVar26 >> (iVar6 + 0x15U & 0x3f) & 1);
                        uVar25 = 1 << (uVar14 & 0x3f);
                      }
                    }
                    puVar20[7] = uVar14;
                    uVar10 = param_1[1];
                    puVar7 = param_1 + uVar14 + 0x4b;
                    puVar20[4] = 0;
                    puVar20[5] = 0;
                    if ((uVar10 & uVar25) == 0) {
                      param_1[1] = uVar10 | uVar25;
                      *puVar7 = (uint)puVar20;
                      puVar20[2] = (uint)puVar20;
                      puVar20[6] = (uint)puVar7;
                      puVar20[3] = (uint)puVar20;
                    }
                    else {
                      uVar25 = 0;
                      if (uVar14 != 0x1f) {
                        uVar25 = 0x19 - (uVar14 >> 1);
                      }
                      uVar23 = (ulonglong)(uVar26 << (uVar25 & 0x3f));
                      uVar25 = *puVar7;
                      while ((*(uint *)(uVar25 + 4) & 0xfffffffc) != uVar26) {
                        uVar19 = (ulonglong)uVar25 + ((uVar23 << 0x20) >> 0x3d & 4) + 0x10;
                        puVar7 = (uint *)uVar19;
                        uVar14 = *puVar7;
                        if (uVar14 == 0) {
                          if ((uVar19 & 0xffffffff) < (ulonglong)param_1[4]) goto LAB_005d3d8c;
                          *puVar7 = (uint)puVar20;
                          puVar20[2] = (uint)puVar20;
                          puVar20[6] = uVar25;
                          puVar20[3] = (uint)puVar20;
                          goto LAB_005d4128;
                        }
                        uVar23 = (uVar23 & 0x7fffffff) << 1;
                        uVar25 = uVar14;
                      }
                      uVar26 = *(uint *)(uVar25 + 8);
                      if (((ulonglong)uVar25 < (ulonglong)param_1[4]) || (uVar26 < param_1[4]))
                      goto LAB_005d3d8c;
                      *(uint **)(uVar25 + 8) = puVar20;
                      puVar20[6] = 0;
                      puVar20[2] = uVar26;
                      *(uint **)(uVar26 + 0xc) = puVar20;
                      puVar20[3] = uVar25;
                    }
                  }
                }
LAB_005d4128:
                FUN_005d0dbc(param_1,param_1[6]);
              }
LAB_005d4134:
              if ((uVar22 & 0xffffffff) < (ulonglong)param_1[3]) {
                uVar26 = param_1[6];
                uVar25 = param_1[3] - uVar5;
                uVar22 = uVar26 + uVar22;
                param_1[3] = uVar25;
                uVar14 = (uint)uVar22;
                param_1[6] = uVar14;
                *(uint *)(uVar14 + 4) = uVar25 | 1;
                uVar23 = (ulonglong)uVar26 + 8;
                *(uint *)(uVar26 + 4) = uVar5 | 3;
                FUN_005d0dbc(param_1,uVar22 & 0xffffffff);
                goto LAB_005d32a0;
              }
            }
          }
        }
        uVar23 = 0;
        FUN_005d1770(param_1,param_2 & 0xffffffff,0,1,0);
        goto LAB_005d3168;
      }
      uVar26 = param_1[6];
      uVar25 = param_1[3] - uVar5;
      uVar22 = uVar26 + uVar22;
      param_1[3] = uVar25;
      uVar14 = (uint)uVar22;
      param_1[6] = uVar14;
      *(uint *)(uVar14 + 4) = uVar25 | 1;
      uVar23 = (ulonglong)uVar26 + 8;
      *(uint *)(uVar26 + 4) = uVar5 | 3;
      FUN_005d0dbc(param_1,uVar22 & 0xffffffff);
    }
    else {
LAB_005d359c:
      uVar5 = param_1[5];
      if ((uVar23 - uVar22 & 0xffffffff) < 0x10) {
        iVar6 = uVar5 + (uint)uVar23;
        param_1[2] = 0;
        *(uint *)(uVar5 + 4) = (uint)uVar23 | 3;
        uVar26 = *(uint *)(iVar6 + 4);
        uVar23 = (ulonglong)uVar5 + 8;
        param_1[5] = 0;
        *(uint *)(iVar6 + 4) = uVar26 | 1;
      }
      else {
        uVar26 = uVar5 + (uint)uVar22;
        uVar25 = (uint)(uVar23 - uVar22);
        uVar23 = (ulonglong)uVar5 + 8;
        param_1[2] = uVar25;
        param_1[5] = uVar26;
        *(uint *)(uVar26 + 4) = uVar25 | 1;
        *(uint *)(uVar26 + uVar25) = uVar25;
        *(uint *)(uVar5 + 4) = (uint)uVar22 | 3;
      }
    }
LAB_005d32a0:
    uVar22 = 0;
    if ((int)uVar23 != 0) goto LAB_005d32ac;
  }
  FUN_005d1770(param_1,param_2 & 0xffffffff,uVar22 & 0xffffffff,1,0);
LAB_005d3168:
  return uVar23 & 0xffffffff;
}



//==== 005d4c0c  ns=Global  size=0x2f8
// sig: undefined FUN_005d4c0c(void)
// callers(1): 005d5178 FUN_005d5178
// callees(5): 005cef7c FUN_005cef7c; 005d172c FUN_005d172c; 005d1770 FUN_005d1770; 005d2264 FUN_005d2264; 005d309c FUN_005d309c
// strings: 0067fc28: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3067 (((size_t)(chunk2mem(p))) % alignment) == 0' | 00661230: 'internal_memalign' | 0067fbb0: '/home/kanee/svnwork/ps3-svn/svn/sys/trunk/dinkumware/dinkum-pu/source/sys/lv2/malloc_lv2.c:3066 chunksize(p) >= nb'

uint FUN_005d4c0c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (-1 < (int)param_2) {
    if (param_2 < 0x11) {
      uVar3 = FUN_005d309c(param_1,param_3);
      return uVar3;
    }
    uVar9 = 0xffffffc0 - param_2;
    uVar3 = param_2;
    if ((param_2 - 1 & param_2) != 0) {
      uVar3 = 0x20;
      if (param_2 < 0x21) {
        uVar3 = 0x20;
        uVar9 = 0xffffffa0;
      }
      else {
        do {
          uVar9 = uVar3 & 0x7fffffff;
          uVar3 = uVar9 * 2;
        } while (uVar3 < param_2);
        uVar9 = uVar9 * -2 - 0x40;
      }
    }
    if (param_3 < uVar9) {
      uVar9 = 0x10;
      iVar5 = 0x1c;
      if (10 < param_3) {
        uVar9 = param_3 + 0x13 & 0xfffffff0;
        iVar5 = uVar9 + 0xc;
      }
      uVar4 = FUN_005d309c(param_1,uVar3 + iVar5);
      if ((uVar4 != 0) && (iVar5 = FUN_005d172c(param_1), iVar5 == 0)) {
        iVar8 = uVar4 - 8;
        iVar5 = iVar8;
        uVar6 = 0;
        if (uVar4 != (uVar4 / uVar3) * uVar3) {
          iVar5 = ((uVar4 + uVar3) - 1 & -uVar3) - 8;
          uVar6 = iVar5 - iVar8;
          if (uVar6 < 0x10) {
            iVar5 = uVar3 + iVar5;
            uVar6 = iVar5 - iVar8;
          }
          uVar2 = (*(uint *)(uVar4 - 4) & 0xfffffffc) - uVar6;
          iVar1 = iVar5 + uVar2;
          *(uint *)(iVar5 + 4) = uVar2 | *(uint *)(iVar5 + 4) & 1 | 2;
          *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
          *(uint *)(uVar4 - 4) = *(uint *)(uVar4 - 4) & 1 | 2 | uVar6;
          *(uint *)(iVar8 + uVar6 + 4) = *(uint *)(iVar8 + uVar6 + 4) | 1;
          uVar6 = uVar4;
        }
        iVar8 = 0;
        uVar4 = *(uint *)(iVar5 + 4) & 0xfffffffc;
        if (uVar9 + 0x10 < uVar4) {
          iVar7 = uVar9 + iVar5;
          uVar4 = uVar4 - uVar9;
          iVar1 = iVar7 + uVar4;
          iVar8 = iVar7 + 8;
          *(uint *)(iVar5 + 4) = uVar9 | *(uint *)(iVar5 + 4) & 1 | 2;
          *(uint *)(iVar7 + 4) = uVar4 | 3;
          *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
        }
        if ((*(uint *)(iVar5 + 4) & 0xfffffffc) < uVar9) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4c4,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x60);
        }
        uVar9 = iVar5 + 8;
        if (uVar9 != (uVar9 / uVar3) * uVar3) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4c8,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x60);
        }
        FUN_005d1770(param_1,param_3,0xffffffff,1,0);
        if (uVar6 != 0) {
          FUN_005d2264(param_1,uVar6);
        }
        if (iVar8 == 0) {
          return uVar9;
        }
        FUN_005d2264(param_1,iVar8);
        return uVar9;
      }
    }
  }
  return 0;
}



//==== 005d4f04  ns=Global  size=0x4
// sig: undefined thunk_FUN_005d4c0c(void)
// callers(1): 005d5764 FUN_005d5764
// callees(0): 

uint thunk_FUN_005d4c0c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (-1 < (int)param_2) {
    if (param_2 < 0x11) {
      uVar3 = FUN_005d309c(param_1,param_3);
      return uVar3;
    }
    uVar9 = 0xffffffc0 - param_2;
    uVar3 = param_2;
    if ((param_2 - 1 & param_2) != 0) {
      uVar3 = 0x20;
      if (param_2 < 0x21) {
        uVar3 = 0x20;
        uVar9 = 0xffffffa0;
      }
      else {
        do {
          uVar9 = uVar3 & 0x7fffffff;
          uVar3 = uVar9 * 2;
        } while (uVar3 < param_2);
        uVar9 = uVar9 * -2 - 0x40;
      }
    }
    if (param_3 < uVar9) {
      uVar9 = 0x10;
      iVar5 = 0x1c;
      if (10 < param_3) {
        uVar9 = param_3 + 0x13 & 0xfffffff0;
        iVar5 = uVar9 + 0xc;
      }
      uVar4 = FUN_005d309c(param_1,uVar3 + iVar5);
      if ((uVar4 != 0) && (iVar5 = FUN_005d172c(param_1), iVar5 == 0)) {
        iVar8 = uVar4 - 8;
        iVar5 = iVar8;
        uVar6 = 0;
        if (uVar4 != (uVar4 / uVar3) * uVar3) {
          iVar5 = ((uVar4 + uVar3) - 1 & -uVar3) - 8;
          uVar6 = iVar5 - iVar8;
          if (uVar6 < 0x10) {
            iVar5 = uVar3 + iVar5;
            uVar6 = iVar5 - iVar8;
          }
          uVar2 = (*(uint *)(uVar4 - 4) & 0xfffffffc) - uVar6;
          iVar1 = iVar5 + uVar2;
          *(uint *)(iVar5 + 4) = uVar2 | *(uint *)(iVar5 + 4) & 1 | 2;
          *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
          *(uint *)(uVar4 - 4) = *(uint *)(uVar4 - 4) & 1 | 2 | uVar6;
          *(uint *)(iVar8 + uVar6 + 4) = *(uint *)(iVar8 + uVar6 + 4) | 1;
          uVar6 = uVar4;
        }
        iVar8 = 0;
        uVar4 = *(uint *)(iVar5 + 4) & 0xfffffffc;
        if (uVar9 + 0x10 < uVar4) {
          iVar7 = uVar9 + iVar5;
          uVar4 = uVar4 - uVar9;
          iVar1 = iVar7 + uVar4;
          iVar8 = iVar7 + 8;
          *(uint *)(iVar5 + 4) = uVar9 | *(uint *)(iVar5 + 4) & 1 | 2;
          *(uint *)(iVar7 + 4) = uVar4 | 3;
          *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
        }
        if ((*(uint *)(iVar5 + 4) & 0xfffffffc) < uVar9) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4c4,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x60);
        }
        uVar9 = iVar5 + 8;
        if (uVar9 != (uVar9 / uVar3) * uVar3) {
          FUN_005cef7c(PTR_s__home_kanee_svnwork_ps3_svn_svn__0071c4c8,
                       ZEXT48(PTR_s_mspace_free_0071c448) + 0x60);
        }
        FUN_005d1770(param_1,param_3,0xffffffff,1,0);
        if (uVar6 != 0) {
          FUN_005d2264(param_1,uVar6);
        }
        if (iVar8 == 0) {
          return uVar9;
        }
        FUN_005d2264(param_1,iVar8);
        return uVar9;
      }
    }
  }
  return 0;
}



//==== 005d4f08  ns=Global  size=0x26c
// sig: undefined FUN_005d4f08(void)
// callers(2): 005d5178 FUN_005d5178; 005d529c FUN_005d529c
// callees(6): 005c4840 idol::abort; 005c5ad0 libc::memcpy; 005d172c FUN_005d172c; 005d1770 FUN_005d1770; 005d2264 FUN_005d2264; 005d309c FUN_005d309c

void * FUN_005d4f08(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((0xffffffbf < param_3) || (iVar2 = FUN_005d172c(param_1), iVar2 != 0)) {
    return (void *)0x0;
  }
  uVar6 = (int)param_2 - 8;
  uVar1 = *(uint *)((int)param_2 + -4);
  uVar5 = uVar1 & 0xfffffffc;
  uVar4 = uVar6 + uVar5;
  if ((((*(uint *)(param_1 + 0x10) <= uVar6) && ((uVar1 & 2) != 0)) && (uVar6 < uVar4)) &&
     ((*(uint *)(uVar4 + 4) & 1) != 0)) {
    uVar3 = 0x10;
    if (10 < param_3) {
      uVar3 = param_3 + 0x13 & 0xfffffff0;
    }
    if (uVar5 < uVar3) {
      if ((*(uint *)(param_1 + 0x18) != uVar4) ||
         (uVar4 = uVar5 + *(int *)(param_1 + 0xc), uVar4 <= uVar3)) {
        FUN_005d1770(param_1,param_3,0xffffffff,2,param_2);
        __dest = (void *)FUN_005d309c(param_1,param_3);
        if (__dest != (void *)0x0) {
          if (uVar5 - 4 < param_3) {
            param_3 = uVar5 - 4;
          }
          libc::memcpy(__dest,param_2,param_3);
          FUN_005d2264(param_1,param_2);
          return __dest;
        }
        return (void *)0x0;
      }
      uVar4 = uVar4 - uVar3;
      *(uint *)((int)param_2 + -4) = uVar3 | uVar1 & 1 | 2;
      *(uint *)(uVar6 + uVar3 + 4) = uVar4 | 1;
      uVar1 = (uVar3 - uVar5) + *(int *)(param_1 + 0x1b4);
      *(uint *)(param_1 + 0x18) = uVar6 + uVar3;
      *(uint *)(param_1 + 0xc) = uVar4;
      *(uint *)(param_1 + 0x1b4) = uVar1;
      if (*(uint *)(param_1 + 0x1b8) < uVar1) {
        *(uint *)(param_1 + 0x1b8) = uVar1;
      }
    }
    else {
      uVar5 = uVar5 - uVar3;
      if (0xf < uVar5) {
        iVar2 = uVar6 + uVar3;
        *(uint *)((int)param_2 + -4) = uVar3 | uVar1 & 1 | 2;
        *(uint *)(iVar2 + 4) = uVar5 | 3;
        *(uint *)(iVar2 + uVar5 + 4) = *(uint *)(iVar2 + uVar5 + 4) | 1;
        FUN_005d1770(param_1,param_3,0xffffffff,2,param_2);
        if (iVar2 + 8 == 0) {
          return param_2;
        }
        FUN_005d2264(param_1,iVar2 + 8);
        return param_2;
      }
    }
    FUN_005d1770(param_1,param_3,0xffffffff,2,param_2);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d5178  ns=Global  size=0x124
// sig: undefined FUN_005d5178(void)
// callers(1): 005d56f4 FUN_005d56f4
// callees(4): 005c5ad0 libc::memcpy; 005d2264 FUN_005d2264; 005d4c0c FUN_005d4c0c; 005d4f08 FUN_005d4f08

ulonglong FUN_005d5178(undefined4 param_1,void *param_2,uint param_3,int param_4)

{
  uint __n;
  void *__dest;
  ulonglong uVar1;
  
  if (param_2 == (void *)0x0) {
    uVar1 = FUN_005d4c0c(param_1,param_4,param_3);
    return uVar1;
  }
  __n = *(uint *)((int)param_2 + -4) & 0xfffffffc;
  if (((param_4 - 1U & (uint)param_2) == 0) && (param_3 <= __n)) {
    uVar1 = FUN_005d4f08(param_1,param_2,param_3);
    return uVar1;
  }
  __dest = (void *)FUN_005d4c0c(param_1,param_4);
  if (__dest != (void *)0x0) {
    if (param_3 < __n) {
      __n = param_3;
    }
    libc::memcpy(__dest,param_2,__n);
    FUN_005d2264(param_1,param_2);
  }
  return ZEXT48(__dest);
}



//==== 005d529c  ns=Global  size=0x2c
// sig: undefined FUN_005d529c(void)
// callers(1): 005d579c FUN_005d579c
// callees(2): 005d309c FUN_005d309c; 005d4f08 FUN_005d4f08

void FUN_005d529c(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_005d4f08(param_1,param_2);
    return;
  }
  FUN_005d309c(param_1,param_3);
  return;
}



//==== 005d52c8  ns=Global  size=0x54
// sig: undefined FUN_005d52c8(void)
// callers(0): 
// callees(2): 005d1be8 FUN_005d1be8; 005d5734 FUN_005d5734

undefined4 FUN_005d52c8(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(PTR_DAT_0071c434 + 0x20) != 0) {
    uVar1 = FUN_005d1be8(*(int *)(PTR_DAT_0071c434 + 0x20));
    return uVar1;
  }
  uVar1 = FUN_005d5734(param_1,param_1);
  return uVar1;
}



//==== 005d531c  ns=Global  size=0x8c
// sig: undefined FUN_005d531c(void)
// callers(1): 005d57d4 FUN_005d57d4
// callees(2): 005d0140 libc::memset; 005d309c FUN_005d309c

int FUN_005d531c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_2 * param_3;
    if ((((param_2 | param_3) & 0xffff0000) != 0) && (uVar2 / param_2 != param_3)) {
      uVar2 = 0xffffffff;
    }
  }
  iVar1 = FUN_005d309c(param_1,uVar2);
  if (iVar1 != 0) {
    libc::memset(iVar1,0,uVar2);
  }
  return iVar1;
}



//==== 005d53a8  ns=Global  size=0x3c
// sig: undefined FUN_005d53a8(void)
// callers(0): 
// callees(2): 005c4840 idol::abort; 00650784 sys::sys_lwmutex_destroy

undefined8 FUN_005d53a8(int param_1)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_destroy(param_1 + 0x1c0);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d53e8  ns=Global  size=0x34
// sig: undefined FUN_005d53e8(void)
// callers(1): 005d5868 FUN_005d5868
// callees(1): 00650784 sys::sys_lwmutex_destroy

void FUN_005d53e8(void)

{
  sys::sys_lwmutex_destroy(*(int *)(PTR_DAT_0071c434 + 0x20) + 0x1c0);
  return;
}



//==== 005d541c  ns=Global  size=0x164
// sig: undefined FUN_005d541c(void)
// callers(0): 
// callees(7): 005c4840 idol::abort; 005d0140 libc::memset; 005d0dbc FUN_005d0dbc; 005d15ec FUN_005d15ec; 005d1650 FUN_005d1650; 005d16bc FUN_005d16bc; 006505a4 sys::sys_lwmutex_create

int FUN_005d541c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  FUN_005d16bc();
  puVar3 = PTR_DAT_0071c434;
  if ((param_2 < 0x221) || (-*(int *)(PTR_DAT_0071c434 + 4) - 0x220U <= param_2)) {
    iVar5 = 0;
  }
  else {
    uVar2 = param_1 + 8U & 0xf;
    uVar7 = 0;
    if (uVar2 != 0) {
      uVar7 = 0x10 - uVar2 & 0xf;
    }
    iVar6 = uVar7 + param_1;
    iVar5 = iVar6 + 8;
    libc::memset(iVar5,0,0x1f0);
    *(undefined4 *)(iVar6 + 4) = 499;
    *(uint *)(iVar6 + 0x1b8) = param_2;
    *(uint *)(iVar6 + 0x1b4) = param_2;
    *(uint *)(iVar6 + 0x1e4) = param_2;
    uVar1 = *(undefined4 *)puVar3;
    *(int *)(iVar6 + 0x18) = param_1;
    *(undefined4 *)(iVar6 + 0x28) = uVar1;
    uVar2 = *(uint *)(puVar3 + 0x14);
    *(int *)(iVar6 + 0x1e0) = param_1;
    *(uint *)(iVar6 + 0x1c4) = uVar2 | 4;
    FUN_005d1650(iVar5);
    *(undefined4 *)(iVar6 + 0x1c0) = 0x230;
    *(undefined4 *)(iVar6 + 0x1bc) = 0x230;
    iVar4 = iVar5 + (*(uint *)(iVar6 + 4) & 0xfffffffc) + -8;
    FUN_005d15ec(iVar5,iVar4,((param_1 + param_2) - iVar4) + -0x30);
    FUN_005d0dbc(iVar5,*(undefined4 *)(iVar6 + 0x20));
    iVar4 = sys::sys_lwmutex_create(iVar6 + 0x1c8,PTR_DAT_0071c4cc);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      idol::abort();
    }
  }
  return iVar5;
}



//==== 005d5584  ns=Global  size=0x144
// sig: undefined FUN_005d5584(void)
// callers(1): 005d588c FUN_005d588c
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

undefined1 * FUN_005d5584(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iStack_c4;
  undefined1 auStack_7c [4];
  uint local_78;
  
  puVar1 = PTR_DAT_0071c434;
  iVar2 = *(int *)(PTR_DAT_0071c434 + 0x20);
  if (*(int *)(PTR_DAT_0071c434 + 0x20) == 0) {
    *(int *)(PTR_DAT_0071c434 + 0x20) = param_1;
    iVar2 = param_1;
  }
  iVar2 = sys::sys_lwmutex_create(iVar2 + 0x1c0,PTR_DAT_0071c4cc);
  if (iVar2 == 0) {
    **(undefined4 **)(iStack_c4 + -0x5ef0) = (*(undefined4 **)(iStack_c4 + -0x5ef0))[1];
    syscall();
    if (local_78 >> 0x14 < **(uint **)(iStack_c4 + -0x5e58)) {
      syscall();
      *(undefined4 *)(puVar1 + 0x24) = 0;
      return (undefined1 *)0x1;
    }
    *(uint *)(puVar1 + 0x24) = **(uint **)(iStack_c4 + -0x5e58) << 0x14;
    return auStack_7c;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005d56cc  ns=Global  size=0x28
// sig: undefined FUN_005d56cc(void)
// callers(0): 
// callees(1): 005d1680 FUN_005d1680

undefined4 FUN_005d56cc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d1680();
  return uVar1;
}



//==== 005d56f4  ns=Global  size=0x40
// sig: undefined FUN_005d56f4(void)
// callers(0): 
// callees(1): 005d5178 FUN_005d5178

undefined4 FUN_005d56f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d5178(PTR_DAT_0071c4d8,param_1,param_2,param_3);
  return uVar1;
}



//==== 005d5734  ns=Global  size=0x30
// sig: undefined FUN_005d5734(void)
// callers(1): 005d52c8 FUN_005d52c8
// callees(1): 005d1cac FUN_005d1cac

undefined4 FUN_005d5734(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d1cac(PTR_DAT_0071c4d8,param_1);
  return uVar1;
}



//==== 005d5764  ns=Global  size=0x38
// sig: undefined FUN_005d5764(void)
// callers(2): 005e39dc FUN_005e39dc; 005e7024 FUN_005e7024
// callees(1): 005d4f04 thunk_FUN_005d4c0c

undefined4 FUN_005d5764(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_005d4c0c(PTR_DAT_0071c4d8,param_1,param_2);
  return uVar1;
}



//==== 005d579c  ns=Global  size=0x38
// sig: undefined FUN_005d579c(void)
// callers(2): 00551ad4 FUN_00551ad4; 005c4b94 FUN_005c4b94
// callees(1): 005d529c FUN_005d529c

undefined4 FUN_005d579c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d529c(PTR_DAT_0071c4d8,param_1,param_2);
  return uVar1;
}



//==== 005d57d4  ns=Global  size=0x38
// sig: undefined FUN_005d57d4(void)
// callers(1): 005d0a3c FUN_005d0a3c
// callees(1): 005d531c FUN_005d531c

undefined4 FUN_005d57d4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d531c(PTR_DAT_0071c4d8,param_1,param_2);
  return uVar1;
}



//==== 005d580c  ns=Global  size=0x2c
// sig: undefined FUN_005d580c(void)
// callers(21): 004e85a0 FUN_004e85a0; 004fe348 FUN_004fe348; 0053a538 FUN_0053a538; 0053a848 FUN_0053a848; 0053acb4 FUN_0053acb4; 0053b138 FUN_0053b138; 005519f0 FUN_005519f0; 005c4f10 FUN_005c4f10; 005c8e64 FUN_005c8e64; 005cf7cc FUN_005cf7cc; 005cf8d4 FUN_005cf8d4; 005d9b44 FUN_005d9b44; 005e2040 FUN_005e2040; 005e21e0 FUN_005e21e0; 005e2318 FUN_005e2318; 005e35a8 FUN_005e35a8; 005e36ac FUN_005e36ac; 005e387c FUN_005e387c; 005e60a8 FUN_005e60a8; 005e7058 FUN_005e7058; 005f516c FUN_005f516c
// callees(1): 005d2264 FUN_005d2264

void FUN_005d580c(undefined8 param_1)

{
  FUN_005d2264(PTR_DAT_0071c4d8,param_1);
  return;
}



//==== 005d5838  ns=Global  size=0x30
// sig: undefined FUN_005d5838(void)
// callers(25): 004e83e0 FUN_004e83e0; 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8a70 idol::SaveSystem_PS::AutoSaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting; 004fe3c4 FUN_004fe3c4; 0053a538 FUN_0053a538; 0053a848 FUN_0053a848; 0053acb4 FUN_0053acb4; 0053b138 FUN_0053b138; 00551b80 FUN_00551b80; 005c8dcc FUN_005c8dcc; 005c8f4c FUN_005c8f4c; 005c91f4 FUN_005c91f4; 005c9998 FUN_005c9998; 005cf8d4 FUN_005cf8d4; 005d0948 FUN_005d0948; 005d9b44 FUN_005d9b44; 005e1fec FUN_005e1fec; 005e22d4 FUN_005e22d4; 005e2318 FUN_005e2318; 005e3408 FUN_005e3408; 005e38b0 FUN_005e38b0; 005e6280 FUN_005e6280; 005f5204 FUN_005f5204
// callees(1): 005d309c FUN_005d309c

undefined4 FUN_005d5838(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d309c(PTR_DAT_0071c4d8,param_1);
  return uVar1;
}



//==== 005d5868  ns=Global  size=0x24
// sig: undefined FUN_005d5868(void)
// callers(1): 00014bc0 crt0::_libc_cleanup
// callees(1): 005d53e8 FUN_005d53e8

void FUN_005d5868(void)

{
  FUN_005d53e8();
  return;
}



//==== 005d588c  ns=Global  size=0x28
// sig: undefined FUN_005d588c(void)
// callers(1): 00014c7c boot::entry
// callees(1): 005d5584 FUN_005d5584

void FUN_005d588c(void)

{
  FUN_005d5584(PTR_DAT_0071c4d8);
  return;
}



//==== 005d58b4  ns=Global  size=0x8
// sig: undefined FUN_005d58b4(void)
// callers(0): 
// callees(0): 

undefined * FUN_005d58b4(void)

{
  return PTR_PTR_0071c4dc;
}



//==== 005d58bc  ns=Global  size=0x48
// sig: undefined FUN_005d58bc(void)
// callers(1): 005c4e94 FUN_005c4e94
// callees(1): 005daab0 FUN_005daab0

ulonglong FUN_005d58bc(undefined8 param_1)

{
  longlong in_r13;
  
  FUN_005daab0(in_r13 + -0x6f30,0x1a,PTR_DAT_0071c4e0,param_1,PTR_PTR_0071c4e4);
  return in_r13 - 0x6f30U & 0xffffffff;
}



//==== 005d5904  ns=Global  size=0x10
// sig: undefined FUN_005d5904(void)
// callers(36): 005c8890 FUN_005c8890; 005c8bdc FUN_005c8bdc; 005c8dcc FUN_005c8dcc; 005c8f4c FUN_005c8f4c; 005c9568 FUN_005c9568; 005cac2c FUN_005cac2c; 005cc13c FUN_005cc13c; 005cf020 FUN_005cf020; 005cf074 FUN_005cf074; 005cf108 FUN_005cf108; 005cf15c FUN_005cf15c; 005cf1b0 FUN_005cf1b0; 005cf22c FUN_005cf22c; 005cf2a8 FUN_005cf2a8; 005cf2fc FUN_005cf2fc; 005cf350 FUN_005cf350; 005cf3d0 FUN_005cf3d0; 005cf424 FUN_005cf424; 005cf478 FUN_005cf478; 005cf4cc FUN_005cf4cc; 005cf554 FUN_005cf554; 005cf5b8 FUN_005cf5b8; 005cf650 FUN_005cf650; 005cf7cc FUN_005cf7cc; 005cf8d4 FUN_005cf8d4
// callees(0): 

int FUN_005d5904(void)

{
  int in_r13;
  
  return in_r13 + -0x6f10;
}



//==== 005d5914  ns=Global  size=0xf4
// sig: undefined FUN_005d5914(void)
// callers(1): 005c756c FUN_005c756c
// callees(4): 005c50cc FUN_005c50cc; 005c9998 FUN_005c9998; 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38

uint FUN_005d5914(byte param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  FUN_005cbc38(param_2);
  pbVar3 = *(byte **)(param_2 + 8);
  if (pbVar3 < *(byte **)(param_2 + 0xc)) {
LAB_005d5954:
    *pbVar3 = param_1;
    *(byte **)(param_2 + 8) = pbVar3 + 1;
    if (((*param_2 & 0x800) != 0) || (((*param_2 & 0x400) != 0 && (param_1 == 10)))) {
      iVar1 = FUN_005c50cc(param_2);
      if (iVar1 != 0) goto LAB_005d59d8;
    }
    uVar2 = (uint)param_1;
    FUN_005cbbbc(param_2);
  }
  else {
    iVar1 = FUN_005c9998(param_2);
    if (-1 < iVar1) {
      pbVar3 = *(byte **)(param_2 + 8);
      goto LAB_005d5954;
    }
LAB_005d59d8:
    FUN_005cbbbc(param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005d5a08  ns=Global  size=0x21c
// sig: undefined FUN_005d5a08(void)
// callers(2): 005c756c FUN_005c756c; 005e3b1c FUN_005e3b1c
// callees(7): 005c50cc FUN_005c50cc; 005c5ad0 libc::memcpy; 005c8510 libc::strlen; 005c85b4 FUN_005c85b4; 005c9998 FUN_005c9998; 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38

undefined4 FUN_005d5a08(char *param_1,ushort *param_2)

{
  int iVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  char *pcVar3;
  size_t __n_00;
  
  FUN_005cbc38(param_2);
LAB_005d5a48:
  if (*param_1 != '\0') {
    do {
      iVar1 = 0;
      if ((*(uint *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) &&
         (iVar2 = FUN_005c9998(param_2), iVar2 < 0)) {
        FUN_005cbbbc(param_2);
        return 0xffffffff;
      }
      if ((*param_2 & 0x400) == 0) {
LAB_005d5b38:
        __n = libc::strlen(param_1);
        __dest = *(void **)(param_2 + 8);
        __n_00 = *(int *)(param_2 + 0xc) - (int)__dest;
        if (__n <= __n_00) goto LAB_005d5ac4;
      }
      else {
        iVar1 = FUN_005c85b4(param_1,10);
        __n = (iVar1 - (int)param_1) + 1;
        if (iVar1 == 0) goto LAB_005d5b38;
        __dest = *(void **)(param_2 + 8);
        __n_00 = *(int *)(param_2 + 0xc) - (int)__dest;
        if (__n <= __n_00) goto LAB_005d5ac4;
      }
      pcVar3 = param_1 + __n_00;
      libc::memcpy(__dest,param_1,__n_00);
      *(size_t *)(param_2 + 8) = *(int *)(param_2 + 8) + __n_00;
      param_1 = pcVar3;
      if (*pcVar3 == '\0') break;
    } while( true );
  }
  if (((*param_2 & 0x800) == 0) || (iVar1 = FUN_005c50cc(), iVar1 == 0)) {
    FUN_005cbbbc(param_2);
    return 0;
  }
  goto LAB_005d5af8;
LAB_005d5ac4:
  libc::memcpy(__dest,param_1,__n);
  param_1 = param_1 + __n;
  *(size_t *)(param_2 + 8) = *(int *)(param_2 + 8) + __n;
  if ((iVar1 != 0) && (iVar1 = FUN_005c50cc(param_2), iVar1 != 0)) {
LAB_005d5af8:
    FUN_005cbbbc(param_2);
    return 0xffffffff;
  }
  goto LAB_005d5a48;
}



//==== 005d5c24  ns=Global  size=0x8
// sig: undefined FUN_005d5c24(void)
// callers(0): 
// callees(0): 

undefined * FUN_005d5c24(void)

{
  return PTR_PTR_0071c4e8;
}



//==== 005d5c2c  ns=Global  size=0x70
// sig: undefined FUN_005d5c2c(void)
// callers(1): 005c87ac FUN_005c87ac
// callees(0): 

int FUN_005d5c2c(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  cVar1 = *param_1;
  iVar5 = 0;
  if (cVar1 != '\0') {
    cVar2 = *param_2;
    pcVar3 = param_2;
    pcVar4 = param_1;
    do {
      while (cVar2 != '\0') {
        if (cVar2 == cVar1) goto LAB_005d5c90;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
      cVar2 = *param_2;
      pcVar3 = param_2;
    } while (cVar1 != '\0');
LAB_005d5c90:
    iVar5 = (int)pcVar4 - (int)param_1;
  }
  return iVar5;
}



//==== 005d5c9c  ns=Global  size=0x74
// sig: undefined FUN_005d5c9c(void)
// callers(1): 005c87ac FUN_005c87ac
// callees(0): 

int FUN_005d5c9c(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  
  cVar3 = *param_1;
  iVar6 = 0;
  if (cVar3 != '\0') {
    pcVar2 = param_1;
    cVar5 = *param_2;
    while (pcVar1 = param_2, cVar4 = *param_2, cVar5 != '\0') {
      while (cVar4 != cVar3) {
        pcVar1 = pcVar1 + 1;
        cVar4 = *pcVar1;
        if (cVar4 == '\0') goto LAB_005d5cf0;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
      cVar5 = cVar3;
    }
LAB_005d5cf0:
    iVar6 = (int)pcVar2 - (int)param_1;
  }
  return iVar6;
}



//==== 005d5d10  ns=Global  size=0x24c
// sig: undefined FUN_005d5d10(void)
// callers(2): 005ca100 FUN_005ca100; 005d8b80 FUN_005d8b80
// callees(1): 005dad7c FUN_005dad7c
// strings: 005d5df8: '}#KxH' (raw)

undefined4 FUN_005d5d10(double *param_1,int param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar9;
  uint uVar8;
  undefined4 uVar11;
  ulonglong uVar10;
  double dVar12;
  
  uVar1 = *(ushort *)param_1;
  uVar5 = uVar1 >> 4 & 0x7ff;
  if (uVar5 == 0x7ff) {
    if (((((uVar1 & 0xf) != 0) || (*(ushort *)((int)param_1 + 2) != 0)) ||
        (*(ushort *)((int)param_1 + 4) != 0)) || (uVar11 = 1, *(ushort *)((int)param_1 + 6) != 0)) {
      return 2;
    }
  }
  else {
    if ((uVar1 >> 4 & 0x7ff) == 0) {
      sVar4 = FUN_005dad7c(param_1);
      uVar5 = (uint)sVar4;
      if (0 < sVar4) {
        return 0;
      }
      uVar1 = *(ushort *)param_1;
    }
    uVar7 = (ulonglong)uVar1;
    if ((param_2 < 0x7ff) && (param_2 = param_2 + uVar5, param_2 < 0x7ff)) {
      if (param_2 < 1) {
        param_2 = param_2 + -1;
        uVar7 = uVar7 & 0xf | 0x10;
        iVar3 = (int)uVar7;
        *(ushort *)param_1 = (ushort)uVar7;
        if (param_2 < -0x34) {
          *(ushort *)param_1 = uVar1 & 0x8000;
          *(ushort *)((int)param_1 + 6) = 0;
          *(ushort *)((int)param_1 + 2) = 0;
          *(ushort *)((int)param_1 + 4) = 0;
          return 0;
        }
        if ((short)param_2 < -0xf) {
          uVar2 = (ulonglong)*(ushort *)((int)param_1 + 2);
          uVar6 = (ulonglong)*(ushort *)((int)param_1 + 4);
          do {
            uVar10 = uVar6;
            uVar6 = uVar2;
            param_2 = param_2 + 0x10;
            iVar3 = 0;
            *(ushort *)((int)param_1 + 2) = (ushort)uVar7;
            *(ushort *)param_1 = 0;
            uVar2 = uVar7;
            uVar7 = 0;
          } while ((short)param_2 < -0xf);
          *(ushort *)((int)param_1 + 4) = (ushort)uVar6;
          *(ushort *)((int)param_1 + 6) = (ushort)uVar10;
        }
        uVar9 = (ushort)iVar3;
        sVar4 = -(short)param_2;
        if ((int)sVar4 != 0) {
          uVar8 = 0x10 - (int)sVar4;
          uVar5 = (uint)sVar4;
          uVar9 = (ushort)(iVar3 >> (uVar5 & 0x3f));
          *(ushort *)((int)param_1 + 6) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 6) >> (uVar5 & 0x3f)) |
               *(ushort *)((int)param_1 + 4) << (uVar8 & 0x3f);
          *(ushort *)((int)param_1 + 4) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 4) >> ((int)sVar4 & 0x3fU)) |
               *(ushort *)((int)param_1 + 2) << (uVar8 & 0x3f);
          *(ushort *)((int)param_1 + 2) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 2) >> (uVar5 & 0x3f)) |
               (ushort)(iVar3 << (uVar8 & 0x3f));
          *(ushort *)param_1 = uVar9;
        }
        uVar11 = 0xffffffff;
        *(ushort *)param_1 = uVar1 & 0x8000 | uVar9;
      }
      else {
        uVar11 = 0xffffffff;
        *(ushort *)param_1 =
             (ushort)(((uVar7 << 0x20) >> 0x2f) << 0xf) |
             (ushort)(((uVar7 & 0xf) << 0x11) >> 0x10) >> 1 |
             (ushort)(((longlong)(short)param_2 & 0xffffffffU) << 4);
      }
    }
    else {
      if ((short)uVar1 < 0) {
        dVar12 = -*(double *)PTR_DAT_0071c4ec;
      }
      else {
        dVar12 = *(double *)PTR_DAT_0071c4ec;
      }
      uVar11 = 1;
      *param_1 = dVar12;
    }
  }
  return uVar11;
}



//==== 005d5f5c  ns=Global  size=0xb0
// sig: undefined FUN_005d5f5c(void)
// callers(1): 005ca100 FUN_005ca100
// callees(3): 005d60b0 FUN_005d60b0; 005d6450 FUN_005d6450; 005d6668 FUN_005d6668

double FUN_005d5f5c(double param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  double dVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  if ((param_3 != 0) && (param_1 != DAT_0071c4f0)) {
    FUN_005d60b0(&local_30);
    FUN_005d6450(local_20,CONCAT44(local_30,uStack_2c),local_28,param_3);
    dVar1 = (double)FUN_005d6668(CONCAT44(local_20[0],uStack_2c),local_18,param_4);
    return dVar1;
  }
  return param_1;
}



//==== 005d600c  ns=Global  size=0xa4
// sig: undefined FUN_005d600c(void)
// callers(0): 
// callees(0): 
// strings: 005d6068: '}iH08' (raw)

int * FUN_005d600c(double param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  fVar1 = (float)param_1;
  param_2[2] = -0x80000000;
  param_2[3] = 0;
  if (((uint)fVar1 & 0x7f800000) == 0) {
    lVar4 = 0x17;
    uVar2 = 9;
    do {
      if ((0x80000000U >> (uVar2 & 0x3f) & (uint)fVar1 & 0x7fffff) != 0) {
        iVar3 = uVar2 - 9;
        uVar2 = uVar2 + 0x20;
        goto LAB_005d6068;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = 0;
    iVar3 = 0x17;
LAB_005d6068:
    *(ulonglong *)(param_2 + 2) =
         (longlong)(int)(((uint)fVar1 & 0x7fffff) << (uVar2 & 0x3f)) | 0x8000000000000000;
  }
  else {
    iVar3 = 0;
    param_2[2] = -0x80000000;
    param_2[3] = 0;
  }
  *param_2 = (((uint)fVar1 >> 0x17 & 0xff) + 0x3f80) - iVar3;
  return param_2;
}



//==== 005d60b0  ns=Global  size=0xac
// sig: undefined FUN_005d60b0(void)
// callers(5): 005ca100 FUN_005ca100; 005d5f5c FUN_005d5f5c; 005d8ba8 FUN_005d8ba8; 005da1bc FUN_005da1bc; 005dc84c FUN_005dc84c
// callees(0): 
// strings: 005d6100: '}@L6|' (raw)

int * FUN_005d60b0(ulonglong param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  param_2[2] = -0x80000000;
  param_2[3] = 0;
  if ((param_1 & 0x7ff0000000000000) == 0) {
    uVar2 = 0xc;
    lVar3 = 0x34;
    do {
      if ((0x8000000000000000U >> (uVar2 & 0x7f) & param_1 & 0xfffffffffffff) != 0) {
        iVar1 = (int)uVar2 + -0xc;
        goto LAB_005d6114;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    iVar1 = 0x34;
LAB_005d6114:
    *(ulonglong *)(param_2 + 2) = (param_1 & 0xfffffffffffff) << (uVar2 & 0x7f) | 0x8000000000000000
    ;
  }
  else {
    iVar1 = 0;
    *(ulonglong *)(param_2 + 2) = (param_1 & 0xfffffffffffff) << 0xb | 0x8000000000000000;
  }
  *param_2 = (((uint)(param_1 >> 0x34) & 0x7ff) + 0x3c00) - iVar1;
  return param_2;
}



//==== 005d615c  ns=Global  size=0x11c
// sig: undefined FUN_005d615c(void)
// callers(4): 005ca100 FUN_005ca100; 005d6450 FUN_005d6450; 005d8ba8 FUN_005d8ba8; 005da1bc FUN_005da1bc
// callees(0): 

int * FUN_005d615c(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iStack00000038;
  int iStack00000048;
  
  uVar2 = (param_3 & 0xffffffff) * (param_5 >> 0x20);
  iStack00000048 = (int)((ulonglong)param_4 >> 0x20);
  lVar4 = 0;
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  uVar7 = (param_3 >> 0x20) * (param_5 & 0xffffffff);
  uVar6 = ((param_3 & 0xffffffff) * (param_5 & 0xffffffff) >> 0x20) + (uVar7 & 0xffffffff) +
          (uVar2 & 0xffffffff);
  lVar9 = 0x20;
  lVar8 = (uVar7 >> 0x20) + (uVar2 >> 0x20) +
          (param_3 >> 0x20) * (param_5 >> 0x20) + (uVar6 >> 0x20);
  uVar3 = (uint)((ulonglong)lVar8 >> 0x20);
  *(longlong *)(param_1 + 2) = lVar8;
  do {
    if ((0x80000000U >> ((uint)lVar4 & 0x3f) & uVar3) != 0) break;
    lVar4 = lVar4 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar1 = param_1[3];
  uVar5 = (uint)lVar4;
  param_1[3] = uVar1 << (uVar5 & 0x3f);
  param_1[2] = uVar3 << (uVar5 & 0x3f) | uVar1 >> ((uint)(0x20U - lVar4) & 0x3f);
  uVar7 = (uVar6 & 0xffffffff) >> (0x20U - lVar4 & 0x7f) | *(ulonglong *)(param_1 + 2);
  uVar2 = uVar7 + (uVar6 >> (0x1fU - lVar4 & 0x7f) & 1);
  *(ulonglong *)(param_1 + 2) = uVar2;
  *param_1 = ((iStack00000038 + iStack00000048) - uVar5) + (uint)(uVar2 < uVar7) + -0x3ffe;
  return param_1;
}



//==== 005d6278  ns=Global  size=0x13c
// sig: undefined FUN_005d6278(void)
// callers(1): 005d8ba8 FUN_005d8ba8
// callees(0): 
// strings: 005d6338: '})8P9`' (raw)

void FUN_005d6278(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 ulonglong param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iStack00000038;
  uint uStack00000040;
  int iStack00000050;
  
  uStack00000040 = (uint)(param_3 >> 0x20);
  uVar5 = (param_3 & 0xffffffff) - (param_5 & 0xffffffff);
  iStack00000050 = (int)(param_5 >> 0x20);
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  uVar3 = uStack00000040 - iStack00000050;
  param_1[3] = (int)uVar5;
  if ((param_3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    bVar1 = uStack00000040 < uVar3;
    uVar3 = uVar3 - 1;
    uVar2 = (int)~uVar3 >> 0x1f;
    uVar2 = (uint)bVar1 | ((uVar2 ^ ~uVar3) - uVar2) - 1 >> 0x1f;
  }
  else {
    uVar2 = 1;
    if (uVar3 <= uStack00000040) {
      uVar2 = 0;
    }
  }
  param_1[2] = uVar3;
  if (uVar2 == 0) {
    uVar2 = param_1[3];
  }
  else {
    uVar2 = -param_1[3];
    param_1[2] = ~uVar3;
    param_1[3] = uVar2;
  }
  uVar3 = param_1[2];
  uVar4 = 0;
  lVar6 = 0x20;
  if (uVar3 != 0) {
    do {
      if ((0x80000000U >> (uVar4 & 0x3f) & uVar3) != 0) break;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_1[2] = uVar3 << (uVar4 & 0x3f) | uVar2 >> (0x20 - uVar4 & 0x3f);
    param_1[3] = uVar2 << (uVar4 & 0x3f);
    *param_1 = iStack00000038 - uVar4;
    return;
  }
  uVar3 = 0;
  do {
    if ((0x80000000U >> (uVar3 & 0x3f) & uVar2) != 0) break;
    uVar3 = uVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[3] = 0;
  *param_1 = (iStack00000038 - uVar3) + -0x20;
  return;
}



//==== 005d63b4  ns=Global  size=0x9c
// sig: undefined FUN_005d63b4(void)
// callers(2): 005ca100 FUN_005ca100; 005da1bc FUN_005da1bc
// callees(0): 
// strings: 005d6418: '}`D6|' (raw)

void FUN_005d63b4(int *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                 ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uStack00000038;
  
  uStack00000038 = (uint)((ulonglong)param_2 >> 0x20);
  uVar2 = 0;
  param_5 = param_5 >> ((ulonglong)uStack00000038 - (param_4 >> 0x20) & 0x7f);
  uVar3 = (param_5 & 0xffffffff) + (param_3 & 0xffffffff);
  uVar1 = (param_5 >> 0x20) + (param_3 >> 0x20) + (uVar3 >> 0x20);
  lVar4 = 0x40;
  do {
    if ((0x8000000000000000U >> (uVar2 & 0x7f) & uVar1) != 0) break;
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = (uStack00000038 - (int)uVar2) + 0x20;
  *(ulonglong *)(param_1 + 2) =
       uVar1 << (uVar2 & 0x7f) | (uVar3 & 0xffffffff) >> (0x20 - uVar2 & 0x7f);
  return;
}



//==== 005d6450  ns=Global  size=0x218
// sig: undefined FUN_005d6450(void)
// callers(5): 005ca100 FUN_005ca100; 005d5f5c FUN_005d5f5c; 005d8ba8 FUN_005d8ba8; 005da1bc FUN_005da1bc; 005dc84c FUN_005dc84c
// callees(1): 005d615c FUN_005d615c

undefined4 FUN_005d6450(undefined4 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined1 local_40 [4];
  undefined4 uStack_3c;
  
  puVar3 = PTR_DAT_0071c4f8;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  if ((int)param_4 < 0) {
    if ((int)-param_4 == 0) {
LAB_005d6510:
      FUN_005d615c(param_1,uStack00000038,uStack00000040,CONCAT44(0x3fff,uStack_3c),
                   0x8000000000000000);
    }
    else {
      iVar4 = 0;
      iVar5 = 0;
      uVar6 = -param_4;
      while( true ) {
        uVar7 = (uVar6 << 0x20) >> 0x21;
        if ((uVar6 & 1) != 0) {
          FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                       *(undefined8 *)(puVar3 + iVar5),*(undefined8 *)(puVar3 + iVar5 + 8));
        }
        puVar2 = PTR_DAT_0071c4f8;
        bVar1 = iVar4 == 7;
        iVar4 = iVar4 + 1;
        if ((uint)uVar6 >> 1 == 0) goto LAB_005d6510;
        if (bVar1) break;
        iVar5 = iVar4 * 0x10;
        uVar6 = uVar7;
      }
      do {
        uVar7 = uVar7 - 1;
        FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                     *(undefined8 *)(puVar2 + 0x90),*(undefined8 *)(puVar2 + 0x98));
      } while ((int)uVar7 != 0);
      FUN_005d615c(param_1,uStack00000038,uStack00000040,CONCAT44(0x3fff,uStack_3c),
                   0x8000000000000000);
    }
  }
  else if ((int)param_4 != 0) {
    iVar5 = 0;
    do {
      iVar4 = (int)param_4 >> 1;
      puVar2 = PTR_DAT_0071c4f8;
      if ((param_4 & 1) != 0) {
        FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                     *(undefined8 *)(puVar3 + iVar5 * 0x10 + 0xa0),
                     *(undefined8 *)(puVar3 + iVar5 * 0x10 + 0xa8));
        puVar2 = PTR_DAT_0071c4f8;
      }
      PTR_DAT_0071c4f8 = puVar2;
      if (iVar4 < 1) goto LAB_005d6510;
      bVar1 = iVar5 != 7;
      param_4 = (ulonglong)iVar4;
      iVar5 = iVar5 + 1;
    } while (bVar1);
    do {
      param_4 = param_4 - 1;
      FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                   *(undefined8 *)(puVar2 + 0x130),*(undefined8 *)(puVar2 + 0x138));
    } while (0 < (int)param_4);
    FUN_005d615c(param_1,uStack00000038,uStack00000040,CONCAT44(0x3fff,uStack_3c),0x8000000000000000
                );
  }
  return param_1;
}



//==== 005d6668  ns=Global  size=0x128
// sig: undefined FUN_005d6668(void)
// callers(5): 005ca100 FUN_005ca100; 005d5f5c FUN_005d5f5c; 005d8ba8 FUN_005d8ba8; 005da1bc FUN_005da1bc; 005dc84c FUN_005dc84c
// callees(1): 005d5904 FUN_005d5904

ulonglong FUN_005d6668(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uStack00000030;
  longlong lStack00000038;
  
  uVar3 = (param_1 >> 0x20) - 0x3c00;
  if (0x7fe < (uVar3 & 0xffffffff)) {
    uVar5 = DAT_0071c500 & 0x8000000000000000;
    uStack00000030 = param_1;
    lStack00000038 = param_2;
    puVar2 = (undefined4 *)FUN_005d5904();
    *puVar2 = 0x8001001c;
    if (param_3 != (uint *)0x0) {
      *param_3 = *param_3 | 1;
    }
    return ((ulonglong)(uint)((int)~(uint)uVar3 >> 0x1f) & 0x7ff) << 0x34 | uVar5;
  }
  uVar5 = (ulonglong)(param_2 << 1) >> 0xc;
  iVar4 = 10;
  lStack00000038._4_4_ = (uint)param_2;
  if ((uVar3 & 0x7ff) == 0) {
    uVar5 = (ulonglong)(param_2 << 1) >> 0xd;
    iVar4 = 0xb;
  }
  uVar1 = ((ulonglong)(lStack00000038._4_4_ >> iVar4) & 1) + uVar5 & 0xfffffffffffff;
  return ((uVar3 & 0x7ff) + (ulonglong)(uVar1 < uVar5) & 0x7ff) << 0x34 |
         uVar1 | DAT_0071c500 & 0x8000000000000000;
}



//==== 005d6790  ns=Global  size=0x120
// sig: undefined FUN_005d6790(void)
// callers(0): 
// callees(1): 005d5904 FUN_005d5904

double FUN_005d6790(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uStack00000030;
  uint uStack00000038;
  
  uVar3 = (param_1 >> 0x20) - 0x3f80;
  uVar5 = (uint)((uVar3 & 0xff) << 0x17);
  if (0xfe < (uVar3 & 0xffffffff)) {
    uStack00000030 = param_1;
    _uStack00000038 = param_2;
    puVar2 = (undefined4 *)FUN_005d5904();
    *puVar2 = 0x8001001c;
    if (param_3 != (uint *)0x0) {
      *param_3 = *param_3 | 1;
    }
    return (double)(float)((uint)(((longlong)(~uVar3 << 0x20) >> 0x3f & 0xffffffffU) << 0x17) &
                          0x7f800000);
  }
  uStack00000038 = (uint)((ulonglong)param_2 >> 0x20);
  iVar4 = 6;
  if (uVar5 == 0) {
    uVar3 = (((ulonglong)uStack00000038 & 0x7fffffff) << 0x20) >> 0x27;
  }
  else {
    uVar3 = (((ulonglong)uStack00000038 & 0x7fffffff) << 0x20) >> 0x28;
    iVar4 = 7;
  }
  uVar1 = uVar3 + ((ulonglong)(uStack00000038 >> iVar4) & 1) & 0x7fffff;
  return (double)(float)((uint)(uVar1 << 1) >> 1 |
                        ((uVar5 >> 0x17) + (uint)(uVar1 < uVar3)) * 0x800000 & 0x7f800000);
}



//==== 005d68b0  ns=Global  size=0x70
// sig: undefined FUN_005d68b0(void)
// callers(1): 005c8f4c FUN_005c8f4c
// callees(1): 005cf5b8 FUN_005cf5b8

undefined2 FUN_005d68b0(undefined4 param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(PTR_DAT_0071c508 + (param_2 & 3) * 4);
  if ((param_2 & 4) != 0) {
    uVar2 = uVar2 | 0x400;
  }
  if ((param_2 & 8) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  if ((param_2 & 0x10) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  uVar1 = FUN_005cf5b8(param_1,uVar2,0x1b6);
  return uVar1;
}



//==== 005d6920  ns=Global  size=0x6c
// sig: undefined FUN_005d6920(void)
// callers(1): 005c9b38 FUN_005c9b38
// callees(0): 

undefined8 FUN_005d6920(int param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if ((byte)(**(char **)(param_1 + 0xc) - 0x25U) < 0x54) {
                    /* WARNING: Could not recover jumptable at 0x005d696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071c50c +
                      *(int *)(PTR_DAT_0071c50c +
                              (uint)(byte)(**(char **)(param_1 + 0xc) - 0x25) * 4)))();
    return uVar1;
  }
  return 0;
}



//==== 005d6d30  ns=Global  size=0x1018
// sig: undefined FUN_005d6d30(void)
// callers(0): 
// callees(3): 005c5984 FUN_005c5984; 005d8b80 FUN_005d8b80; 005da554 FUN_005da554
// strings: 006614d8: '0123456789abcdefABCDEF'

undefined4 FUN_005d6d30(undefined4 *param_1)

{
  bool bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar7;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  double local_a0;
  undefined1 local_98;
  undefined1 auStack_97 [71];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((int)param_1[6] < 1) {
    param_1[5] = 0x7ffffffe;
LAB_005d6d90:
    param_1[4] = param_1[4] + 1;
    iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    if ((iVar8 == 0x2b) || (puVar13 = &local_98, iVar8 == 0x2d)) {
      iVar11 = param_1[5];
      local_98 = (undefined1)iVar8;
      param_1[5] = iVar11 + -1;
      if (iVar11 + -1 < 0) {
        iVar8 = -1;
        puVar13 = auStack_97;
        param_1[4] = param_1[4] + 1;
      }
      else {
        puVar13 = auStack_97;
        param_1[4] = param_1[4] + 1;
        iVar8 = (**(code **)*param_1)(param_1[1],0,1);
        if (iVar8 == 0x30) goto LAB_005d6e70;
LAB_005d6de4:
        if ((iVar8 == 0x6e) || (iVar8 == 0x4e)) {
          puVar15 = puVar13 + 1;
          *puVar13 = 0x6e;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          puVar14 = puVar15;
          if (iVar8 + -1 < 0) {
LAB_005d70e0:
            iVar11 = param_1[4] + 1;
            param_1[4] = iVar11;
LAB_005d70ec:
            bVar3 = false;
            iVar8 = -1;
            param_1[4] = iVar11 + -1;
          }
          else {
            param_1[4] = param_1[4] + 1;
            iVar8 = (**(code **)*param_1)(param_1[1],0,1);
            if ((iVar8 == 0x61) || (iVar8 == 0x41)) {
              puVar14 = puVar13 + 2;
              *puVar15 = 0x61;
              iVar8 = param_1[5];
              param_1[5] = iVar8 + -1;
              if (iVar8 + -1 < 0) goto LAB_005d70e0;
              param_1[4] = param_1[4] + 1;
              iVar8 = (**(code **)*param_1)(param_1[1],0,1);
              if ((iVar8 != 0x6e) && (iVar8 != 0x4e)) goto LAB_005d7018;
              iVar8 = param_1[5];
              param_1[5] = iVar8 + -1;
              if (iVar8 + -1 < 0) {
                iVar8 = -1;
                iVar11 = param_1[4] + 1;
                param_1[4] = iVar11;
LAB_005d7adc:
                param_1[4] = iVar11 + -1;
              }
              else {
                param_1[4] = param_1[4] + 1;
                iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                puVar5 = PTR_PTR_0071c514;
                if (iVar8 == 0x28) {
                  do {
                    iVar11 = param_1[5];
                    iVar8 = -1;
                    iVar16 = -2;
                    param_1[5] = iVar11 + -1;
                    if (iVar11 + -1 < 0) {
                      param_1[4] = param_1[4] + 1;
                    }
                    else {
                      param_1[4] = param_1[4] + 1;
                      uVar7 = (**(code **)*param_1)(param_1[1],0,1);
                      iVar8 = (int)uVar7;
                      iVar16 = (int)((uVar7 & 0x7fffffff) << 1);
                    }
                  } while (((*(ushort *)(iVar16 + *(int *)puVar5) & 0x232) != 0) || (iVar8 == 0x5f))
                  ;
                  if (iVar8 != 0x29) {
                    if (iVar8 == -1) {
                      bVar3 = false;
                      param_1[4] = param_1[4] + -1;
                      goto LAB_005d7058;
                    }
                    goto LAB_005d7020;
                  }
                }
                else {
                  if (iVar8 == -1) {
                    iVar11 = param_1[4];
                    goto LAB_005d7adc;
                  }
                  param_1[4] = param_1[4] + -1;
                  (**(code **)*param_1)(param_1[1],iVar8,0);
                }
              }
              bVar3 = true;
              *puVar14 = 0x6e;
              puVar14 = puVar13 + 3;
            }
            else {
LAB_005d7018:
              if (iVar8 == -1) {
                iVar11 = param_1[4];
                goto LAB_005d70ec;
              }
LAB_005d7020:
              bVar3 = false;
              param_1[4] = param_1[4] + -1;
              (**(code **)*param_1)(param_1[1],iVar8,0);
            }
          }
LAB_005d7058:
          iVar11 = 0;
          uVar12 = 0;
          goto joined_r0x005d7068;
        }
        if ((iVar8 == 0x69) || (iVar8 == 0x49)) {
          puVar14 = puVar13 + 1;
          *puVar13 = 0x69;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) goto LAB_005d70e0;
          param_1[4] = param_1[4] + 1;
          iVar8 = (**(code **)*param_1)(param_1[1],0,1);
          if ((iVar8 != 0x6e) && (iVar8 != 0x4e)) goto LAB_005d7018;
          puVar15 = puVar13 + 2;
          *puVar14 = 0x6e;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          puVar14 = puVar15;
          if (iVar8 + -1 < 0) goto LAB_005d70e0;
          param_1[4] = param_1[4] + 1;
          iVar8 = (**(code **)*param_1)(param_1[1],0,1);
          if ((iVar8 != 0x66) && (iVar8 != 0x46)) goto LAB_005d7018;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) {
            iVar8 = -1;
            iVar11 = param_1[4] + 1;
            param_1[4] = iVar11;
LAB_005d7bb8:
            param_1[4] = iVar11 + -1;
          }
          else {
            param_1[4] = param_1[4] + 1;
            iVar8 = (**(code **)*param_1)(param_1[1],0,1);
            if ((iVar8 == 0x69) || (iVar8 == 0x49)) {
              iVar8 = param_1[5];
              param_1[5] = iVar8 + -1;
              if (iVar8 + -1 < 0) goto LAB_005d70e0;
              param_1[4] = param_1[4] + 1;
              iVar8 = (**(code **)*param_1)(param_1[1],0,1);
              if ((iVar8 == 0x6e) || (iVar8 == 0x4e)) {
                iVar8 = param_1[5];
                param_1[5] = iVar8 + -1;
                if (iVar8 + -1 < 0) goto LAB_005d70e0;
                param_1[4] = param_1[4] + 1;
                iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                if ((iVar8 == 0x69) || (iVar8 == 0x49)) {
                  iVar8 = param_1[5];
                  param_1[5] = iVar8 + -1;
                  if (iVar8 + -1 < 0) goto LAB_005d70e0;
                  param_1[4] = param_1[4] + 1;
                  iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                  if ((iVar8 == 0x74) || (iVar8 == 0x54)) {
                    iVar8 = param_1[5];
                    param_1[5] = iVar8 + -1;
                    if (iVar8 + -1 < 0) goto LAB_005d70e0;
                    param_1[4] = param_1[4] + 1;
                    iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                    if ((iVar8 == 0x79) || (iVar8 == 0x59)) goto LAB_005d7938;
                  }
                }
              }
              goto LAB_005d7018;
            }
            if (iVar8 == -1) {
              iVar11 = param_1[4];
              goto LAB_005d7bb8;
            }
            param_1[4] = param_1[4] + -1;
            (**(code **)*param_1)(param_1[1],iVar8,0);
          }
LAB_005d7938:
          bVar3 = true;
          *puVar15 = 0x66;
          puVar14 = puVar13 + 3;
          goto LAB_005d7058;
        }
      }
      goto LAB_005d6e04;
    }
    if (iVar8 != 0x30) goto LAB_005d6de4;
LAB_005d6e70:
    iVar8 = param_1[5];
    param_1[5] = iVar8 + -1;
    puVar15 = puVar13;
    if (-1 < iVar8 + -1) {
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      if (iVar8 == 0x78) {
LAB_005d6ed4:
        puVar15 = puVar13 + 2;
        *puVar13 = 0x30;
        puVar13[1] = 0x78;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + -1;
        if (iVar8 + -1 < 0) {
          bVar3 = false;
          uVar12 = 0x16;
          param_1[4] = param_1[4] + 1;
          goto LAB_005d7114;
        }
        bVar3 = false;
        param_1[4] = param_1[4] + 1;
        uVar12 = 0x16;
        iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      }
      else {
        bVar3 = true;
        uVar12 = 10;
        if (iVar8 == 0x58) goto LAB_005d6ed4;
      }
      goto LAB_005d6e0c;
    }
    bVar3 = true;
    uVar12 = 10;
    param_1[4] = param_1[4] + 1;
LAB_005d7114:
    iVar8 = -1;
LAB_005d7118:
    if (bVar3) goto LAB_005d76c0;
  }
  else {
    iVar8 = param_1[6] + -1;
    param_1[5] = iVar8;
    if (-1 < iVar8) goto LAB_005d6d90;
    iVar8 = -1;
    puVar13 = &local_98;
    param_1[4] = param_1[4] + 1;
LAB_005d6e04:
    bVar3 = false;
    uVar12 = 10;
    puVar15 = puVar13;
LAB_005d6e0c:
    if (iVar8 != 0x30) goto LAB_005d7118;
    do {
      iVar8 = param_1[5];
      param_1[5] = iVar8 + -1;
      if (iVar8 + -1 < 0) {
        bVar3 = true;
        iVar8 = -1;
        param_1[4] = param_1[4] + 1;
        goto LAB_005d76c0;
      }
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    } while (iVar8 == 0x30);
    bVar3 = true;
LAB_005d76c0:
    *puVar15 = 0x30;
    puVar15 = puVar15 + 1;
  }
  puVar5 = PTR_s_0123456789abcdefABCDEF_0071c518;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar8 != -1) {
    iVar16 = 0;
    iVar11 = 0;
    do {
      iVar9 = FUN_005c5984(puVar5,iVar8,uVar12);
      if (iVar9 == 0) break;
      if (iVar16 < 0x24) {
        *puVar15 = (char)iVar8;
        puVar15 = puVar15 + 1;
        iVar16 = iVar16 + 1;
        iVar8 = param_1[5] + -1;
        param_1[5] = iVar8;
      }
      else {
        iVar11 = iVar11 + 1;
        iVar8 = param_1[5] + -1;
        param_1[5] = iVar8;
      }
      puVar6 = PTR_PTR_0071c51c;
      if (iVar8 < 0) {
        iVar8 = -1;
        bVar3 = true;
        param_1[4] = param_1[4] + 1;
        puVar13 = puVar15;
        if (**(char **)(puVar6 + 0x2c) == -1) goto LAB_005d7444;
        goto LAB_005d71e8;
      }
      bVar3 = true;
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    } while (iVar8 != -1);
  }
  puVar13 = puVar15;
  if (**(char **)(PTR_PTR_0071c51c + 0x2c) == iVar8) {
LAB_005d7444:
    puVar15 = puVar13 + 1;
    *puVar13 = (char)iVar8;
    iVar8 = param_1[5];
    param_1[5] = iVar8 + -1;
    if (iVar8 + -1 < 0) {
      iVar8 = -1;
      param_1[4] = param_1[4] + 1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    }
  }
LAB_005d71e8:
  puVar14 = puVar15;
  if (iVar16 == 0) {
    if (iVar8 == 0x30) {
      do {
        iVar8 = param_1[5];
        iVar11 = iVar11 + -1;
        param_1[5] = iVar8 + -1;
        if (iVar8 + -1 < 0) {
          bVar3 = true;
          iVar8 = -1;
          param_1[4] = param_1[4] + 1;
          goto LAB_005d7254;
        }
        param_1[4] = param_1[4] + 1;
        iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      } while (iVar8 == 0x30);
      bVar3 = true;
    }
LAB_005d7254:
    if (iVar11 < 0) {
      puVar14 = puVar15 + 1;
      iVar11 = iVar11 + 1;
      *puVar15 = 0x30;
    }
  }
  puVar5 = PTR_s_0123456789abcdefABCDEF_0071c518;
  bVar1 = iVar8 == -1;
  if (bVar1) {
LAB_005d77b8:
    if (bVar3) goto LAB_005d730c;
  }
  else {
    do {
      iVar9 = FUN_005c5984(puVar5,iVar8,uVar12);
      if (iVar9 == 0) goto LAB_005d77b8;
      if (iVar16 < 0x24) {
        iVar16 = iVar16 + 1;
        *puVar14 = (char)iVar8;
        puVar14 = puVar14 + 1;
      }
      iVar8 = param_1[5];
      bVar3 = true;
      param_1[5] = iVar8 + -1;
      if (iVar8 + -1 < 0) {
        bVar3 = true;
        iVar8 = -1;
        param_1[4] = param_1[4] + 1;
        break;
      }
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      bVar1 = iVar8 == -1;
    } while (!bVar1);
LAB_005d730c:
    if (uVar12 == 10) {
      if ((iVar8 == 0x65) || (bVar1 = iVar8 == -1, iVar8 == 0x45)) goto LAB_005d74b8;
    }
    else if ((iVar8 == 0x70) || (bVar1 = iVar8 == -1, iVar8 == 0x50)) {
LAB_005d74b8:
      puVar15 = puVar14 + 1;
      *puVar14 = (char)iVar8;
      iVar8 = param_1[5];
      param_1[5] = iVar8 + -1;
      puVar13 = puVar15;
      if (iVar8 + -1 < 0) {
LAB_005d77a4:
        uVar7 = 0xffffffffffffffff;
        param_1[4] = param_1[4] + 1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        uVar7 = (**(code **)*param_1)(param_1[1],0,1);
        if (((int)uVar7 == 0x2b) || ((int)uVar7 == 0x2d)) {
          puVar13 = puVar14 + 2;
          *puVar15 = (char)uVar7;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) goto LAB_005d77a4;
          param_1[4] = param_1[4] + 1;
          uVar7 = (**(code **)*param_1)(param_1[1],0,1);
        }
        if ((int)uVar7 == 0x30) {
          iVar8 = param_1[5] + -1;
          param_1[5] = iVar8;
          while (-1 < iVar8) {
            param_1[4] = param_1[4] + 1;
            uVar7 = (**(code **)*param_1)(param_1[1],0,1);
            if ((int)uVar7 != 0x30) goto LAB_005d75a8;
            iVar8 = param_1[5] + -1;
            param_1[5] = iVar8;
          }
          uVar7 = 0xffffffffffffffff;
          param_1[4] = param_1[4] + 1;
LAB_005d75a8:
          *puVar13 = 0x30;
          puVar13 = puVar13 + 1;
        }
      }
      puVar5 = PTR_PTR_0071c514;
      iVar16 = 0;
      do {
        iVar8 = (int)uVar7;
        uVar2 = *(ushort *)(((uint)((uVar7 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar5);
        puVar14 = puVar13;
        while( true ) {
          if ((uVar2 & 0x20) == 0) {
            bVar3 = true;
            bVar4 = true;
            if (iVar8 == -1) goto LAB_005d7684;
            goto LAB_005d7330;
          }
          puVar13 = puVar14;
          if (iVar16 < 8) {
            puVar13 = puVar14 + 1;
            iVar16 = iVar16 + 1;
            *puVar14 = (char)uVar7;
          }
          iVar8 = param_1[5];
          uVar7 = 0xffffffffffffffff;
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) break;
          param_1[4] = param_1[4] + 1;
          uVar7 = (**(code **)*param_1)(param_1[1],0,1);
          iVar8 = (int)uVar7;
          uVar2 = *(ushort *)(((uint)((uVar7 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar5);
          puVar14 = puVar13;
        }
        param_1[4] = param_1[4] + 1;
      } while( true );
    }
  }
  bVar4 = bVar3;
  if (bVar1) {
LAB_005d7684:
    param_1[4] = param_1[4] + -1;
  }
  else {
LAB_005d7330:
    param_1[4] = param_1[4] + -1;
    (**(code **)*param_1)(param_1[1],iVar8,0);
    bVar3 = bVar4;
  }
joined_r0x005d7068:
  if (bVar3) {
    uVar10 = 1;
    *puVar14 = 0;
    if (*(char *)(param_1 + 7) == '\0') {
      if (uVar12 < 0xb) {
        local_a0 = (double)FUN_005da554(&local_98,0,iVar11);
      }
      else {
        local_a0 = (double)FUN_005da554(&local_98,0,0);
        FUN_005d8b80(&local_a0,iVar11 << 2);
      }
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      if ((*(char *)((int)param_1 + 0x1d) == 'l') || (*(char *)((int)param_1 + 0x1d) == 'L')) {
        uVar10 = 1;
        iVar8 = param_1[2];
        param_1[2] = iVar8 + 8;
        **(double **)(iVar8 + 4) = local_a0;
      }
      else {
        uVar10 = 1;
        iVar8 = param_1[2];
        param_1[2] = iVar8 + 8;
        **(float **)(iVar8 + 4) = (float)local_a0;
      }
    }
  }
  else if ((puVar14 != &local_98) || (uVar10 = 0xffffffff, iVar8 != -1)) {
    uVar10 = 0;
  }
  return uVar10;
}



//==== 005d7d48  ns=Global  size=0x678
// sig: undefined FUN_005d7d48(void)
// callers(0): 
// callees(4): 005c5984 FUN_005c5984; 005cc578 libc::strchr; 005da74c FUN_005da74c; 005daaa8 FUN_005daaa8
// strings: 006614f0: 'diouxXp' | 00661500: '0123456789abcdefABCDEF' | 005d804c: '|\tX.|' (raw)

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071c520 : 0x005d7dec */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_005d7d48(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  undefined1 local_70;
  undefined1 auStack_6f [30];
  undefined1 auStack_51 [9];
  
  if ((int)param_1[6] < 1) {
    param_1[5] = 0x7ffffffe;
LAB_005d7d9c:
    param_1[4] = param_1[4] + 1;
    iVar3 = (**(code **)*param_1)(param_1[1],0,1);
    if ((iVar3 == 0x2b) || (puVar8 = &local_70, iVar3 == 0x2d)) {
      iVar5 = param_1[5];
      local_70 = (undefined1)iVar3;
      param_1[5] = iVar5 + -1;
      pcVar4 = PTR_s_diouxXp_0071c520;
      if (iVar5 + -1 < 0) {
        puVar8 = auStack_6f;
        param_1[4] = param_1[4] + 1;
        cVar9 = *(char *)param_1[3];
        goto LAB_005d8308;
      }
      puVar8 = auStack_6f;
      param_1[4] = param_1[4] + 1;
      iVar3 = (**(code **)*param_1)(param_1[1],0,1);
      uVar7 = ZEXT48(PTR_s_diouxXp_0071c520);
      pcVar4 = libc::strchr(PTR_s_diouxXp_0071c520,(int)*(char *)param_1[3]);
      bVar1 = iVar3 == 0x30;
      cVar9 = pcVar4[8];
      if (bVar1) goto LAB_005d8108;
      goto joined_r0x005d7e2c;
    }
    uVar7 = ZEXT48(PTR_s_diouxXp_0071c520);
    pcVar4 = libc::strchr(PTR_s_diouxXp_0071c520,(int)*(char *)param_1[3]);
    bVar1 = iVar3 == 0x30;
    cVar9 = pcVar4[8];
    if (!bVar1) goto joined_r0x005d7e2c;
LAB_005d8108:
    iVar3 = param_1[5];
    param_1[5] = iVar3 + -1;
    if (-1 < iVar3 + -1) {
      param_1[4] = param_1[4] + 1;
      iVar3 = (**(code **)*param_1)(param_1[1],0,1);
      if ((iVar3 != 0x78) && (iVar3 != 0x58)) goto LAB_005d8164;
      if ((cVar9 != '\0') && (cVar9 != '\x10')) goto LAB_005d80d4;
      iVar3 = param_1[5];
      param_1[5] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        iVar3 = -1;
        bVar2 = false;
        bVar1 = false;
        cVar9 = '\x10';
        param_1[4] = param_1[4] + 1;
      }
      else {
        bVar2 = false;
        param_1[4] = param_1[4] + 1;
        cVar9 = '\x10';
        iVar3 = (**(code **)*param_1)(param_1[1],0,1);
        bVar1 = iVar3 == 0x30;
      }
      goto LAB_005d80f4;
    }
    iVar3 = -1;
    param_1[4] = param_1[4] + 1;
LAB_005d8164:
    if (cVar9 != '\0') {
LAB_005d80d4:
      bVar2 = true;
      bVar1 = iVar3 == 0x30;
      goto LAB_005d80dc;
    }
    bVar2 = true;
    cVar9 = '\b';
    bVar1 = iVar3 == 0x30;
LAB_005d8178:
    uVar10 = 8;
LAB_005d7e30:
    if (!bVar1) goto LAB_005d80f8;
LAB_005d7e34:
    do {
      iVar3 = param_1[5];
      param_1[5] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        iVar3 = -1;
        bVar2 = true;
        param_1[4] = param_1[4] + 1;
        goto LAB_005d7ea4;
      }
      param_1[4] = param_1[4] + 1;
      iVar3 = (**(code **)*param_1)(param_1[1],0,1);
    } while (iVar3 == 0x30);
    bVar2 = true;
LAB_005d7ea4:
    *puVar8 = 0x30;
    puVar8 = puVar8 + 1;
  }
  else {
    iVar3 = param_1[6] + -1;
    param_1[5] = iVar3;
    pcVar4 = PTR_s_diouxXp_0071c520;
    if (-1 < iVar3) goto LAB_005d7d9c;
    puVar8 = &local_70;
    param_1[4] = param_1[4] + 1;
    cVar9 = *(char *)param_1[3];
LAB_005d8308:
    uVar7 = ZEXT48(pcVar4);
    iVar3 = -1;
    pcVar4 = libc::strchr(pcVar4,(int)cVar9);
    bVar1 = false;
    cVar9 = pcVar4[8];
joined_r0x005d7e2c:
    bVar2 = false;
    uVar10 = 10;
    if (cVar9 == '\0') goto LAB_005d7e30;
LAB_005d80dc:
    uVar10 = 10;
    if (cVar9 == '\n') goto LAB_005d7e30;
    if (cVar9 == '\b') goto LAB_005d8178;
LAB_005d80f4:
    uVar10 = 0x16;
    if (bVar1) goto LAB_005d7e34;
LAB_005d80f8:
    if (bVar2) goto LAB_005d7ea4;
  }
  while (iVar3 != -1) {
    iVar5 = FUN_005c5984(uVar7 + 0x10,iVar3,uVar10);
    if (iVar5 == 0) {
      param_1[4] = param_1[4] + -1;
      (**(code **)*param_1)(param_1[1],iVar3,0);
      goto LAB_005d7f74;
    }
    if (puVar8 < auStack_51) {
      *puVar8 = (char)iVar3;
      puVar8 = puVar8 + 1;
    }
    iVar3 = param_1[5];
    param_1[5] = iVar3 + -1;
    if (iVar3 + -1 < 0) {
      bVar2 = true;
      iVar5 = param_1[4] + 1;
      param_1[4] = iVar5;
      goto LAB_005d7f6c;
    }
    bVar2 = true;
    param_1[4] = param_1[4] + 1;
    iVar3 = (**(code **)*param_1)(param_1[1],0,1);
  }
  iVar5 = param_1[4];
LAB_005d7f6c:
  iVar3 = -1;
  param_1[4] = iVar5 + -1;
LAB_005d7f74:
  if (!bVar2) {
    if (puVar8 == &local_70) {
      uVar6 = 0xffffffff;
      if (iVar3 != -1) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
    return uVar6;
  }
  *puVar8 = 0;
  if (*(char *)(param_1 + 7) != '\0') {
    return 1;
  }
  if ((*(char *)param_1[3] == 'd') || (*(char *)param_1[3] == 'i')) {
    uVar6 = FUN_005da74c(&local_70,0,cVar9);
    cVar9 = *(char *)((int)param_1 + 0x1d);
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
  }
  else {
    uVar6 = FUN_005daaa8(&local_70,0,cVar9);
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    if (*(char *)param_1[3] == 'p') goto LAB_005d8288;
    cVar9 = *(char *)((int)param_1 + 0x1d);
  }
  if ((byte)(cVar9 + 0x9eU) < 0x19) {
                    /* WARNING: Could not recover jumptable at 0x005d805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(PTR_DAT_0071c524 +
                      *(int *)(PTR_DAT_0071c524 + (uint)(byte)(cVar9 + 0x9e) * 4)))();
    return uVar6;
  }
LAB_005d8288:
  iVar3 = param_1[2];
  param_1[2] = iVar3 + 8;
  **(undefined4 **)(iVar3 + 4) = uVar6;
  return 1;
}



//==== 005d8490  ns=Global  size=0xac
// sig: undefined FUN_005d8490(void)
// callers(1): 005d853c FUN_005d853c
// callees(0): 

undefined4 FUN_005d8490(byte *param_1,byte param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  pbVar2 = param_1;
  if (2 < param_3) {
    do {
      while (param_1 = pbVar2 + 1, *param_1 == 0x2d) {
        param_3 = param_3 - 3;
        if ((*pbVar2 <= param_2) && (param_2 <= pbVar2[2])) {
          return 1;
        }
        param_1 = pbVar2 + 3;
        pbVar2 = param_1;
        if (param_3 < 3) goto LAB_005d84f4;
      }
      param_3 = param_3 - 1;
      if (*pbVar2 == param_2) {
        return 1;
      }
      pbVar2 = param_1;
    } while (2 < param_3);
  }
LAB_005d84f4:
  if (param_3 == 0) {
    return 0;
  }
  bVar1 = *param_1;
  uVar3 = (ulonglong)param_3;
  while( true ) {
    if (bVar1 == param_2) {
      return 1;
    }
    uVar3 = uVar3 - 1;
    if (uVar3 == 0) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return 0;
}



//==== 005d853c  ns=Global  size=0x644
// sig: undefined FUN_005d853c(void)
// callers(0): 
// callees(5): 005c5984 FUN_005c5984; 005c8510 libc::strlen; 005cc578 libc::strchr; 005d8490 FUN_005d8490; 005d9b38 libc::mbrtowc

undefined4 FUN_005d853c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  size_t __n;
  size_t sVar16;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  wchar_t local_90 [3];
  char acStack_89 [5];
  mbstate_t local_84 [2];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar1 = param_2 == 0;
  local_84[0].__value.__wch._2_2_ = 0;
  local_84[0].__count = 0;
  local_84[0].__value.__wch._0_2_ = 0;
  bVar2 = *(byte *)((int)param_1 + 0x1d);
  if (param_2 < 0) {
    iVar13 = param_1[3];
    cVar12 = '\0';
    pcVar9 = (char *)(iVar13 + 1);
    param_1[3] = pcVar9;
    if (*pcVar9 == '^') {
      pcVar9 = (char *)(iVar13 + 2);
      cVar12 = '^';
      param_1[3] = pcVar9;
    }
    if (*pcVar9 == ']') {
      pcVar9 = pcVar9 + 1;
    }
    pcVar9 = libc::strchr(pcVar9,0x5d);
    if (pcVar9 == (char *)0x0) {
      return 0;
    }
    iVar13 = param_1[3];
    param_1[3] = pcVar9;
    iVar14 = (int)pcVar9 - iVar13;
    if (2 < iVar14) {
      bVar5 = true;
      iVar11 = FUN_005c5984(iVar13 + 1,0x2d,iVar14 + -2);
      if (iVar11 != 0) goto LAB_005d85bc;
    }
    bVar5 = false;
    iVar11 = param_1[6];
  }
  else {
    cVar12 = '\0';
    bVar5 = false;
    iVar13 = 0;
    iVar14 = 0;
LAB_005d85bc:
    iVar11 = param_1[6];
  }
  if (iVar11 < 1) {
    if (bVar1) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0x7fffffff;
    }
  }
  param_1[5] = iVar11;
  lVar10 = ((ulonglong)bVar2 ^ 0x6c) - 1;
  pcVar9 = (char *)0x0;
  pwVar15 = (wchar_t *)0x0;
  if (*(char *)(param_1 + 7) == '\0') {
    if (lVar10 < 0) {
      iVar11 = param_1[2];
      param_1[2] = iVar11 + 8;
      pwVar15 = *(wchar_t **)(iVar11 + 4);
    }
    else {
      pwVar15 = (wchar_t *)0x0;
      iVar11 = param_1[2];
      param_1[2] = iVar11 + 8;
      pcVar9 = *(char **)(iVar11 + 4);
    }
  }
  bVar4 = false;
  iVar11 = param_1[4];
  sVar8 = 0;
LAB_005d85fc:
  do {
    iVar7 = param_1[5] + -1;
    param_1[5] = iVar7;
joined_r0x005d860c:
    if (iVar7 < 0) {
      iVar11 = iVar11 + 1;
      param_1[4] = iVar11;
LAB_005d86b0:
      iVar7 = -1;
      param_1[4] = iVar11 + -1;
joined_r0x005d88c8:
      if (bVar1) {
        if (bVar4 == true) {
          return 1;
        }
      }
      else if (bVar4 == true) {
        if (*(char *)(param_1 + 7) != '\0') {
          return 1;
        }
        if (-1 < lVar10) {
          *pcVar9 = '\0';
          return 1;
        }
        *pwVar15 = L'\0';
        return 1;
      }
      if ((!bVar4) && (iVar7 != -1)) {
        return 0;
      }
      return 0xffffffff;
    }
    param_1[4] = iVar11 + 1;
    uVar6 = (**(code **)*param_1)(param_1[1],0,1);
    iVar7 = (int)uVar6;
    if (iVar7 == -1) {
      iVar11 = param_1[4];
      goto LAB_005d86b0;
    }
    if (param_2 < 1) {
      if (!bVar1) {
        if (bVar5) {
          if (cVar12 == '\0') {
            iVar11 = FUN_005d8490(iVar13,iVar7,iVar14);
joined_r0x005d89e4:
            if (iVar11 == 0) goto LAB_005d8894;
            goto LAB_005d8678;
          }
          iVar11 = FUN_005d8490(iVar13,iVar7,iVar14);
        }
        else {
          if (cVar12 == '\0') {
            iVar11 = FUN_005c5984(iVar13,iVar7,iVar14);
            goto joined_r0x005d89e4;
          }
          iVar11 = FUN_005c5984(iVar13,iVar7,iVar14);
        }
        if (iVar11 != 0) goto LAB_005d8894;
      }
    }
    else if ((*(ushort *)(((uint)((uVar6 & 0xffffffff) << 1) & 0x1fe) + *(int *)PTR_PTR_0071c528) &
             0x144) != 0) {
LAB_005d8894:
      param_1[4] = param_1[4] + -1;
      (**(code **)*param_1)(param_1[1],iVar7,0);
      goto joined_r0x005d88c8;
    }
LAB_005d8678:
    if (-1 < lVar10) {
      if (*(char *)(param_1 + 7) == '\0') break;
      bVar4 = false;
      iVar11 = param_1[4];
      iVar7 = param_1[5] + -1;
      param_1[5] = iVar7;
      goto joined_r0x005d860c;
    }
    __n = sVar8 + 1;
    acStack_89[sVar8 + 1] = (char)uVar6;
    sVar8 = libc::mbrtowc(local_90,acStack_89 + 1,__n,local_84);
    if (sVar8 == 0xffffffff) {
LAB_005d890c:
      if (0 < (int)__n) {
        do {
          sVar8 = __n - 1;
          cVar12 = acStack_89[__n];
          if (cVar12 == -1) {
            param_1[4] = param_1[4] + -1;
          }
          else {
            param_1[4] = param_1[4] + -1;
            (**(code **)*param_1)(param_1[1],cVar12,0);
          }
          __n = sVar8;
        } while (sVar8 != 0);
      }
      if (bVar4 == false) {
        return 0xffffffff;
      }
      return 0;
    }
    if (sVar8 == 0) {
      if (local_90[0] == L'\0') {
        sVar8 = libc::strlen(acStack_89 + 1);
        sVar8 = sVar8 + 1;
      }
    }
    else if (sVar8 == 0xfffffffe) {
      bVar4 = true;
      if (2 < __n) goto LAB_005d890c;
      iVar11 = param_1[4];
      sVar8 = __n;
      goto LAB_005d85fc;
    }
    if ((int)sVar8 < (int)__n) {
      iVar11 = param_1[4];
      do {
        sVar16 = __n - 1;
        cVar3 = acStack_89[__n];
        if (cVar3 == -1) {
          iVar11 = iVar11 + -1;
          param_1[4] = iVar11;
        }
        else {
          param_1[4] = iVar11 + -1;
          (**(code **)*param_1)(param_1[1],cVar3,0);
          iVar11 = param_1[4];
        }
        __n = sVar16;
      } while (sVar8 != sVar16);
    }
    else {
      iVar11 = param_1[4];
    }
    if (*(char *)(param_1 + 7) == '\0') {
      *pwVar15 = local_90[0];
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      pwVar15 = pwVar15 + 1;
    }
    bVar4 = false;
    param_1[6] = param_1[6] + -1;
    sVar8 = 0;
  } while( true );
  bVar4 = false;
  *pcVar9 = (char)uVar6;
  iVar11 = param_1[4];
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  pcVar9 = pcVar9 + 1;
  goto LAB_005d85fc;
}



//==== 005d8b80  ns=Global  size=0x28
// sig: undefined FUN_005d8b80(void)
// callers(3): 005d6d30 FUN_005d6d30; 005d8ba8 FUN_005d8ba8; 005da1bc FUN_005da1bc
// callees(1): 005d5d10 FUN_005d5d10

undefined2 FUN_005d8b80(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005d5d10();
  return uVar1;
}



//==== 005d8ba8  ns=Global  size=0x9b4
// sig: undefined FUN_005d8ba8(void)
// callers(0): 
// callees(10): 005c5ad0 libc::memcpy; 005d60b0 FUN_005d60b0; 005d615c FUN_005d615c; 005d6278 FUN_005d6278; 005d6450 FUN_005d6450; 005d6668 FUN_005d6668; 005d8b80 FUN_005d8b80; 005d955c FUN_005d955c; 005dad5c FUN_005dad5c; 005db060 FUN_005db060

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void * FUN_005d8ba8(double *param_1,byte param_2)

{
  bool bVar1;
  byte *pbVar2;
  short sVar4;
  void *pvVar3;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  ushort uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  byte bVar17;
  byte *pbVar15;
  byte *pbVar16;
  int iVar18;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar19;
  double dVar20;
  double dVar21;
  uint uStack00000008;
  ushort local_170 [2];
  undefined1 auStack_16c [4];
  double local_168;
  int local_160;
  char cStack_159;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  byte local_128 [56];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  longlong local_b0;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  dVar20 = *param_1;
  if ((param_2 != 0x61) && (param_2 != 0x41)) {
    if (*(int *)((int)param_1 + 0x44) < 0) {
      *(undefined4 *)((int)param_1 + 0x44) = 6;
    }
    else if ((*(int *)((int)param_1 + 0x44) == 0) && ((param_2 == 0x67 || (param_2 == 0x47)))) {
      *(undefined4 *)((int)param_1 + 0x44) = 1;
    }
  }
  sVar4 = FUN_005d955c(local_170,param_1);
  if (sVar4 == 2) {
    pvVar3 = *(void **)(param_1 + 5);
    puVar5 = PTR_DAT_0071c534;
    if ((((param_2 != 0x61) && (param_2 != 0x65)) && (param_2 != 0x66)) && (param_2 != 0x67)) {
      puVar5 = PTR_DAT_0071c530;
    }
LAB_005d8c94:
    *(undefined4 *)((int)param_1 + 0x34) = 3;
    pvVar3 = libc::memcpy(pvVar3,puVar5,3);
    return pvVar3;
  }
  if (0 < sVar4) {
    pvVar3 = *(void **)(param_1 + 5);
    puVar5 = PTR_DAT_0071c53c;
    if ((((param_2 != 0x61) && (param_2 != 0x65)) && (param_2 != 0x66)) && (param_2 != 0x67)) {
      puVar5 = PTR_DAT_0071c538;
    }
    goto LAB_005d8c94;
  }
  if (param_2 == 0x61) {
    uVar10 = 0x78;
    puVar14 = *(undefined1 **)(param_1 + 5) + 1;
    **(undefined1 **)(param_1 + 5) = 0x30;
    *(undefined1 **)(param_1 + 5) = puVar14;
LAB_005d9434:
    *puVar14 = uVar10;
    *(undefined1 **)(param_1 + 5) = puVar14 + 1;
    *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + 2;
  }
  else if (param_2 == 0x41) {
    uVar10 = 0x58;
    puVar14 = *(undefined1 **)(param_1 + 5) + 1;
    **(undefined1 **)(param_1 + 5) = 0x30;
    *(undefined1 **)(param_1 + 5) = puVar14;
    goto LAB_005d9434;
  }
  if (sVar4 == 0) {
    local_170[0] = 0;
    pbVar6 = local_128;
    sVar4 = 0;
  }
  else {
    puVar5 = PTR_s_0123456789abcdef_0071c540;
    if ((param_2 == 0x61) || (puVar5 = PTR_s_0123456789ABCDEF_0071c544, param_2 == 0x41)) {
      pbVar15 = (byte *)0x21;
      iVar18 = 0x21;
      iVar8 = 0x22;
      if (-1 < *(int *)((int)param_1 + 0x44)) {
        pbVar15 = (byte *)(*(int *)((int)param_1 + 0x44) + 1);
        iVar18 = (int)(short)pbVar15;
        iVar8 = iVar18 + 1;
      }
      if (dVar20 < DAT_0071c548) {
        local_168 = -*param_1;
      }
      else {
        local_168 = *param_1;
      }
      pbVar6 = local_128 + 1;
      dVar20 = DAT_0071c548;
      FUN_005d8b80(&local_168,0xfffffffffffffffd);
      pbVar13 = pbVar6;
      if ((0 < iVar8) && (dVar20 < local_168)) {
        do {
          iVar8 = iVar8 + -7;
          FUN_005d8b80(&local_168,0x1c);
          iVar7 = (int)local_168;
          if (0 < iVar8) {
            local_b0 = (longlong)iVar7;
            local_168 = local_168 - (double)local_b0;
          }
          pbVar16 = pbVar13 + 7;
          iVar9 = 6;
          if (iVar7 < 1) {
LAB_005d93ec:
            iVar7 = iVar9 + 1;
            if (iVar9 + -1 < -1) {
              iVar7 = 1;
            }
            do {
              pbVar16 = pbVar16 + -1;
              *pbVar16 = 0;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          else {
            iVar9 = 6;
            lVar19 = 7;
            do {
              pbVar16 = pbVar13 + iVar9;
              bVar17 = (byte)iVar7;
              iVar7 = iVar7 >> 4;
              *pbVar16 = bVar17 & 0xf;
              if (iVar7 < 1) {
                iVar9 = iVar9 + -1;
                if (-1 < iVar9) goto LAB_005d93ec;
                break;
              }
              iVar9 = iVar9 + -1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          pbVar13 = pbVar16 + 7;
        } while ((0 < iVar8) && (dVar20 < local_168));
      }
      pbVar13 = pbVar13 + (-1 - (int)local_128);
      if ((int)pbVar13 < iVar18) {
        pbVar15 = pbVar13;
      }
      sVar4 = (short)pbVar15;
      iVar18 = (int)sVar4;
      uVar12 = local_170[0] - 1;
      if (-1 < sVar4) {
        if (((int)pbVar13 <= (int)sVar4) || (bVar17 = 0xf, (char)local_128[sVar4 + 1] < '\b')) {
          bVar17 = 0;
        }
        pbVar16 = (byte *)(sVar4 + -1);
        pbVar13 = pbVar6 + (int)pbVar16;
        if (*pbVar13 == bVar17) {
          pbVar15 = (byte *)(int)sVar4;
          pbVar2 = local_128 + (int)((byte *)(int)sVar4 + -1);
          do {
            pbVar13 = pbVar2;
            pbVar16 = pbVar15;
            pbVar15 = pbVar16 + -1;
            pbVar2 = pbVar13 + -1;
          } while (*pbVar13 == bVar17);
          pbVar16 = pbVar16 + -2;
        }
        sVar4 = (short)pbVar15;
        if (bVar17 == 0xf) {
          *pbVar13 = *pbVar13 + 1;
        }
        if ((int)pbVar16 < 0) {
          sVar4 = sVar4 + 1;
          uVar12 = local_170[0] + 3;
          pbVar6 = local_128;
        }
        local_170[0] = uVar12;
        iVar8 = (int)sVar4;
        iVar18 = (int)sVar4;
        uVar12 = local_170[0];
        if (-1 < sVar4 + -1) {
          pbVar15 = pbVar6 + iVar8;
          do {
            pbVar15 = pbVar15 + -1;
            *pbVar15 = puVar5[(char)*pbVar15];
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      local_170[0] = uVar12;
      if (*(int *)((int)param_1 + 0x44) < 0) {
        *(int *)((int)param_1 + 0x44) = iVar18 + -1;
      }
    }
    else {
      dVar20 = DAT_0071c548;
      FUN_005d60b0(&local_138);
      iVar18 = (short)local_170[0] * 0x7597 >> 0x1f;
      uVar11 = ((longlong)(((short)local_170[0] * 0x7597) / 100000 + iVar18) - (longlong)iVar18) - 4
      ;
      local_170[0] = (ushort)uVar11;
      if ((short)local_170[0] < 0) {
        local_170[0] = -(3 - local_170[0] & 0xfffc);
        FUN_005d6450(local_f0,CONCAT44(local_138,uStack_134),local_130,-(int)(short)local_170[0]);
        local_138 = local_f0[0];
        local_130 = local_e8;
      }
      else if (((uVar11 & 0xffff) != 0) &&
              (local_170[0] = local_170[0] & 0xfffc, 0 < (short)local_170[0])) {
        FUN_005d6450(local_e0,CONCAT44(local_138,uStack_134),local_130,-(int)(short)local_170[0]);
        local_138 = local_e0[0];
        local_130 = local_d8;
      }
      if ((param_2 == 0x66) || (iVar18 = 6, param_2 == 0x46)) {
        iVar18 = (short)local_170[0] + 10;
      }
      iVar18 = iVar18 + *(int *)((int)param_1 + 0x44);
      if (0x13 < iVar18) {
        iVar18 = 0x13;
      }
      pbVar15 = local_128 + 1;
      dVar21 = (double)FUN_005d6668(CONCAT44(local_138,uStack_134),local_130,auStack_16c);
      if ((0 < iVar18) && (pbVar15 = local_128 + 1, dVar20 < dVar21)) {
        do {
          iVar8 = (int)dVar21;
          iVar18 = iVar18 + -8;
          if (0 < iVar18) {
            local_b0 = (longlong)iVar8;
            FUN_005d60b0((double)local_b0,&local_148);
            FUN_005d6278(local_d0,CONCAT44(local_138,uStack_134),local_130,local_148,local_140);
            FUN_005d615c(local_c0,CONCAT44(local_d0[0],uStack_134),local_c8,
                         CONCAT44(0x4019,uStack_154),0xbebc200000000000);
            local_138 = local_c0[0];
            local_130 = local_b8;
            dVar21 = (double)FUN_005d6668(CONCAT44(local_c0[0],uStack_134),local_b8,auStack_16c);
          }
          pbVar6 = pbVar15 + 8;
          iVar7 = 7;
          if (iVar8 < 1) {
LAB_005d93b4:
            iVar8 = iVar7 + 1;
            if (iVar7 + -1 < -1) {
              iVar8 = 1;
            }
            do {
              pbVar6 = pbVar6 + -1;
              *pbVar6 = 0x30;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          else {
            iVar7 = 7;
            do {
              FUN_005dad5c(&local_160,iVar8,10);
              pbVar6 = pbVar15 + iVar7;
              bVar1 = iVar7 != 0;
              *pbVar6 = cStack_159 + 0x30;
              if (local_160 < 1) {
                iVar7 = iVar7 + -1;
                if (-1 < iVar7) goto LAB_005d93b4;
                break;
              }
              iVar7 = iVar7 + -1;
              iVar8 = local_160;
            } while (bVar1);
          }
          pbVar15 = pbVar6 + 8;
        } while ((0 < iVar18) && (dVar20 < dVar21));
      }
      pbVar13 = local_128 + 1;
      local_170[0] = local_170[0] + 7;
      iVar18 = -1 - (int)local_128;
      pbVar6 = pbVar13;
      if (local_128[1] == '0') {
        do {
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 == 0x30);
        local_170[0] = (local_170[0] + (short)pbVar13) - (short)pbVar6;
        iVar18 = -(int)pbVar6;
      }
      if ((param_2 == 0x66) || (param_2 == 0x46)) {
        uVar12 = local_170[0] + 1;
      }
      else {
        uVar12 = 1;
        if (param_2 != 0x65) {
          uVar12 = (ushort)((ulonglong)(param_2 ^ 0x45) - 1 >> 0x3f);
        }
      }
      sVar4 = (short)*(undefined4 *)((int)param_1 + 0x44) + uVar12;
      iVar8 = (int)sVar4;
      if (sVar4 < 0x12) {
        if (sVar4 < 0) goto LAB_005d8d98;
        iVar7 = sVar4 + -1;
      }
      else {
        sVar4 = 0x11;
        iVar8 = 0x11;
        iVar7 = 0x10;
      }
      if (((int)(pbVar15 + iVar18) <= iVar8) || (bVar17 = 0x39, (char)pbVar6[sVar4] < '5')) {
        bVar17 = 0x30;
      }
      pbVar15 = pbVar6 + iVar7;
      if (*pbVar15 == bVar17) {
        pbVar15 = pbVar6 + iVar7;
        iVar18 = 0;
        do {
          pbVar15 = pbVar15 + -1;
          iVar18 = iVar18 + 1;
        } while (*pbVar15 == bVar17);
        iVar7 = iVar7 - iVar18;
        sVar4 = sVar4 - (short)iVar18;
      }
      if (bVar17 == 0x39) {
        *pbVar15 = *pbVar15 + 1;
      }
      if (iVar7 < 0) {
        pbVar6 = pbVar6 + -1;
        sVar4 = sVar4 + 1;
        local_170[0] = local_170[0] + 1;
      }
    }
  }
LAB_005d8d98:
  pvVar3 = (void *)FUN_005db060(param_1,param_2,pbVar6,sVar4,local_170[0]);
  return pvVar3;
}



//==== 005d955c  ns=Global  size=0x28
// sig: undefined FUN_005d955c(void)
// callers(1): 005d8ba8 FUN_005d8ba8
// callees(1): 005daf40 FUN_005daf40

undefined2 FUN_005d955c(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005daf40();
  return uVar1;
}



//==== 005d9584  ns=Global  size=0x258
// sig: undefined FUN_005d9584(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

void * FUN_005d9584(ulonglong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  char acStack_31 [24];
  undefined1 local_19;
  
  if (param_2 == 0x58) {
    iVar4 = 0x10;
    uVar8 = 0x10;
    puVar6 = PTR_s_0123456789ABCDEF_0071c550;
LAB_005d977c:
    uVar3 = *param_1;
joined_r0x005d9788:
    if (param_2 == 0x69) {
      uVar8 = (ulonglong)iVar4;
      goto LAB_005d9790;
    }
  }
  else {
    if (param_2 == 0x6f) {
      iVar4 = 8;
      uVar8 = 8;
      puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
      goto LAB_005d977c;
    }
    if (param_2 == 0x78) {
      iVar4 = 0x10;
      uVar8 = 0x10;
      puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
      goto LAB_005d977c;
    }
    uVar3 = *param_1;
    if (param_2 != 100) {
      iVar4 = 10;
      puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
      uVar8 = 10;
      goto joined_r0x005d9788;
    }
    iVar4 = 10;
    puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
    uVar8 = 10;
LAB_005d9790:
    if ((longlong)uVar3 < 0) {
      uVar3 = -uVar3;
    }
  }
  if (uVar3 == 0) {
    uVar7 = 0x18;
    uVar10 = 0;
    if (*(int *)((int)param_1 + 0x44) == 0) goto LAB_005d9614;
  }
  uVar7 = 0x17;
  uVar10 = uVar3 / uVar8;
  local_19 = puVar6[(int)uVar3 - (int)uVar10 * (int)uVar8];
LAB_005d9614:
  *param_1 = uVar10;
  if ((0 < (longlong)uVar10) && (uVar7 != 0)) {
    uVar9 = uVar7;
    uVar11 = uVar7;
    do {
      uVar7 = uVar9 - 1;
      uVar8 = (longlong)uVar10 / (longlong)iVar4;
      cVar1 = puVar6[(int)uVar10 - iVar4 * (int)uVar8];
      *param_1 = uVar8;
      acStack_31[uVar9] = cVar1;
      if ((longlong)uVar8 < 1) break;
      uVar11 = uVar11 - 1;
      uVar10 = uVar8;
      uVar9 = uVar7;
    } while (uVar11 != 0);
  }
  uVar9 = uVar7;
  if (((iVar4 == 8) && ((param_1[10] & 0x8000000000000) != 0)) &&
     ((0x17 < uVar7 || (acStack_31[uVar7 + 1] != '0')))) {
    uVar9 = uVar7 - 1;
    acStack_31[uVar7] = '0';
  }
  *(size_t *)((int)param_1 + 0x34) = 0x18 - uVar9;
  pvVar5 = libc::memcpy(*(void **)(param_1 + 5),acStack_31 + uVar9 + 1,0x18 - uVar9);
  iVar4 = *(int *)((int)param_1 + 0x34);
  iVar2 = *(int *)((int)param_1 + 0x44);
  if (iVar4 < iVar2) {
    *(int *)(param_1 + 6) = iVar2 - iVar4;
    *(ushort *)(param_1 + 10) =
         (ushort)((((ulonglong)*(ushort *)(param_1 + 10) << 0x20) >> 0x25) << 5) |
         (ushort)((((ulonglong)*(ushort *)(param_1 + 10) & 0xf) << 0x1b) >> 0x10) >> 0xb;
  }
  else if (((iVar2 < 0) && ((param_1[10] & 0x14000000000000) == 0x10000000000000)) &&
          (iVar4 = ((*(int *)((int)param_1 + 0x4c) - *(int *)((int)param_1 + 0x2c)) -
                   *(int *)(param_1 + 6)) - iVar4, 0 < iVar4)) {
    *(int *)(param_1 + 6) = iVar4;
  }
  return pvVar5;
}



//==== 005d97dc  ns=libc  size=0x35c
// sig: undefined _mbrtowc(void)
// callers(1): 005d9b38 libc::mbrtowc
// callees(1): 005d5904 FUN_005d5904

byte * libc::_mbrtowc(undefined2 *param_1,byte *param_2,uint param_3,uint *param_4,
                     undefined4 *param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  uint uVar10;
  
  puVar4 = (ushort *)*param_5;
  bVar12 = *(byte *)((int)param_4 + 7);
  uVar9 = (ulonglong)(ushort)*param_4;
  uVar10 = (uint)(ushort)*param_4;
  if (puVar4 == (ushort *)0x0) {
    if (param_2 == (byte *)0x0) {
      uVar10 = *(uint *)PTR_DAT_0071c554;
      uVar3 = *(undefined2 *)(PTR_DAT_0071c554 + 4);
      *(undefined2 *)((int)param_4 + 6) = *(undefined2 *)(PTR_DAT_0071c554 + 6);
      *param_4 = uVar10;
      *(undefined2 *)(param_4 + 1) = uVar3;
      return (byte *)0x0;
    }
    uVar13 = (ulonglong)param_3;
    pbVar7 = param_2;
    if (param_3 != 0) {
      do {
        if ((char)bVar12 < '\x01') {
          bVar1 = *pbVar7;
          uVar11 = (ulonglong)bVar1;
          uVar9 = uVar11;
          if (-1 < (char)bVar1) goto LAB_005d99a8;
          uVar9 = uVar11 & 0x1f;
          bVar12 = 1;
          if ((bVar1 & 0xe0) != 0xc0) {
            uVar9 = uVar11 & 0xf;
            bVar12 = 2;
            if ((bVar1 & 0xf0) != 0xe0) goto LAB_005d9a08;
          }
        }
        else {
          bVar12 = bVar12 - 1;
          uVar9 = (uVar9 & 0xffff) << 6 | (ulonglong)*pbVar7 & 0x3f;
          if ((*pbVar7 & 0xc0) != 0x80) goto LAB_005d9a08;
LAB_005d99a8:
          if (bVar12 == 0) {
            if (param_1 != (undefined2 *)0x0) {
              *param_1 = (short)uVar9;
            }
            *(undefined2 *)((int)param_4 + 6) = 0;
            pbVar7 = pbVar7 + (1 - (int)param_2);
            goto joined_r0x005d9ab0;
          }
        }
        uVar10 = (uint)uVar9;
        pbVar7 = pbVar7 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      uVar10 = *(uint *)PTR_DAT_0071c554;
      uVar3 = *(undefined2 *)(PTR_DAT_0071c554 + 4);
      *(undefined2 *)((int)param_4 + 6) = *(undefined2 *)(PTR_DAT_0071c554 + 6);
      *param_4 = uVar10;
      *(undefined2 *)(param_4 + 1) = uVar3;
      return (byte *)(*puVar4 & 0xf00);
    }
    if (param_3 != 0) {
      if (((char)bVar12 < '\x10') && (iVar5 = param_5[(char)bVar12], iVar5 != 0)) {
        bVar1 = *param_2;
        iVar8 = 1;
        pbVar7 = param_2;
        while( true ) {
          uVar2 = *(ushort *)((uint)bVar1 * 2 + iVar5);
          if (uVar2 == 0) break;
          bVar12 = (byte)(uVar2 >> 8) & 0xf;
          if ((short)uVar2 < 0) {
            uVar9 = uVar9 & 0xffffff00 | (ulonglong)uVar2 & 0xff;
          }
          if ((uVar2 & 0x1000) != 0) {
            uVar9 = (uVar9 & 0xffff) << 8 | ((uVar9 & 0xffff) << 0x20) >> 0x28;
          }
          uVar10 = (uint)uVar9;
          if (((uVar2 & 0x4000) != 0) && (bVar1 != 0)) {
            pbVar7 = pbVar7 + 1;
            param_3 = param_3 - 1;
            iVar8 = 0;
          }
          if ((uVar2 & 0x2000) != 0) {
            if (param_1 != (undefined2 *)0x0) {
              *param_1 = (short)uVar9;
            }
            *(short *)((int)param_4 + 6) = (short)(char)bVar12;
            pbVar7 = pbVar7 + -(int)param_2;
            *param_4 = uVar10 & 0xffff;
joined_r0x005d9ab0:
            if ((uVar9 & 0xffff) != 0) {
              return pbVar7;
            }
            return (byte *)0x0;
          }
          if (param_3 == 0) goto LAB_005d9adc;
          if (((0xf < bVar12) ||
              (iVar5 = *(int *)((int)param_5 + (int)((longlong)(char)bVar12 << 2)), iVar5 == 0)) ||
             (iVar8 = iVar8 + 1, 0xfef < iVar8)) break;
          bVar1 = *pbVar7;
        }
      }
LAB_005d9a08:
      puVar6 = (undefined4 *)FUN_005d5904();
      *puVar6 = 0x8001001d;
      return (byte *)0xffffffff;
    }
  }
LAB_005d9adc:
  *(short *)((int)param_4 + 6) = (short)(char)bVar12;
  *param_4 = uVar10 & 0xffff;
  return (byte *)0xfffffffe;
}



//==== 005d9b38  ns=libc  size=0xc
// sig: size_t mbrtowc(wchar_t * __pwc, char * __s, size_t __n, mbstate_t * __p)
// callers(4): 005c9b38 FUN_005c9b38; 005cd5c4 libc::vsnprintf; 005d853c FUN_005d853c; 005daab0 FUN_005daab0
// callees(1): 005d97dc libc::_mbrtowc

size_t libc::mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  longlong in_r13;
  
  sVar1 = _mbrtowc(__pwc,__s,__n,__p,in_r13 + -0x6f0c);
  return sVar1;
}



//==== 005d9b44  ns=Global  size=0x224
// sig: undefined FUN_005d9b44(void)
// callers(0): 
// callees(5): 005c5ad0 libc::memcpy; 005cc418 FUN_005cc418; 005d580c FUN_005d580c; 005d5838 FUN_005d5838; 005d9d68 FUN_005d9d68

int FUN_005d9b44(int param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  size_t __n;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_b0 [4];
  undefined1 local_ac [12];
  undefined1 auStack_a0 [64];
  
  iVar7 = *(int *)(param_1 + 0x44);
  if (iVar7 < 0) {
    iVar7 = 0x7fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (((*(ushort *)(param_1 + 0x50) & 4) == 0) && (uVar6 = iVar3 + 3, 0x40 < iVar3 + 3U)) {
    puVar4 = (undefined1 *)FUN_005d5838(iVar3 + 3);
    if (puVar4 == (undefined1 *)0x0) {
      return -1;
    }
  }
  else {
    puVar4 = &stack0x00000000 + -0xa0;
    uVar6 = 0x40;
  }
  if (0 < iVar7) {
    iVar3 = 0;
    while( true ) {
      __n = FUN_005cc418(&stack0x00000000 + -0xb0,*param_2,&stack0x00000000 + -0xac);
      bVar1 = __n == 0;
      if (((int)__n < 0) || ((*param_2 == 0 && (__n = __n - 1, bVar1)))) {
        iVar3 = -1;
        goto LAB_005d9cb0;
      }
      bVar1 = iVar7 < (int)__n;
      iVar7 = iVar7 - __n;
      if (bVar1) break;
      iVar5 = *(int *)(param_1 + 0x2c);
      if (uVar6 < __n + iVar5) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        iVar3 = FUN_005d9d68(param_1,puVar4);
        iVar5 = 0;
        if (iVar3 < 0) goto LAB_005d9cb0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      libc::memcpy(puVar4 + iVar5,&stack0x00000000 + -0xb0,__n);
      sVar2 = *param_2;
      param_2 = param_2 + 1;
      *(size_t *)(param_1 + 0x2c) = __n + *(int *)(param_1 + 0x2c);
      if ((sVar2 == 0) || (iVar7 < 1)) break;
    }
    if (iVar3 != 0) goto LAB_005d9cb0;
  }
  iVar3 = FUN_005d9d68(param_1,puVar4);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_005d9cb0:
  if (puVar4 != auStack_a0) {
    FUN_005d580c(puVar4);
  }
  return iVar3;
}



//==== 005d9d68  ns=Global  size=0x430
// sig: undefined FUN_005d9d68(void)
// callers(2): 005cdc88 libc::vprintf_format_dispatch; 005d9b44 FUN_005d9b44
// callees(0): 
// strings: 00661550: '                                ' | 00661578: '00000000000000000000000000000000'

undefined4 FUN_005d9d68(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = PTR_s__0071c558;
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar4 = (((((*(int *)(param_1 + 0x4c) - iVar3) - *(int *)(param_1 + 0x30)) -
            *(int *)(param_1 + 0x34)) - *(int *)(param_1 + 0x38)) - *(int *)(param_1 + 0x3c)) -
          *(int *)(param_1 + 0x40);
  if (((*(ushort *)(param_1 + 0x50) & 4) == 0) && (uVar5 = uVar4, 0 < (int)uVar4)) {
    do {
      uVar6 = uVar5;
      if (0x20 < uVar5) {
        uVar6 = 0x20;
      }
      uVar5 = uVar5 - uVar6;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x24),puVar1,uVar6);
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
    } while (0 < (int)uVar5);
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  if (0 < iVar3) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),param_2,iVar3);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x2c);
  }
  puVar1 = PTR_s_00000000000000000000000000000000_0071c55c;
  uVar5 = *(uint *)(param_1 + 0x30);
  while (0 < (int)uVar5) {
    uVar6 = uVar5;
    if (0x20 < uVar5) {
      uVar6 = 0x20;
    }
    uVar5 = uVar5 - uVar6;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),puVar1,uVar6);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                       *(int *)(param_1 + 0x34));
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34);
  }
  puVar1 = PTR_s_00000000000000000000000000000000_0071c55c;
  uVar5 = *(uint *)(param_1 + 0x38);
  while (0 < (int)uVar5) {
    uVar6 = uVar5;
    if (0x20 < uVar5) {
      uVar6 = 0x20;
    }
    uVar5 = uVar5 - uVar6;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),puVar1,uVar6);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),
                       *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34),*(int *)(param_1 + 0x3c))
    ;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
  }
  puVar2 = PTR_s_00000000000000000000000000000000_0071c55c;
  uVar5 = *(uint *)(param_1 + 0x40);
  puVar1 = PTR_s__0071c558;
  while (PTR_s__0071c558 = puVar1, 0 < (int)uVar5) {
    uVar6 = uVar5;
    if (0x20 < uVar5) {
      uVar6 = 0x20;
    }
    uVar5 = uVar5 - uVar6;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),puVar2,uVar6);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
    puVar1 = PTR_s__0071c558;
  }
  if ((*(ushort *)(param_1 + 0x50) & 4) != 0) {
    while (0 < (int)uVar4) {
      uVar5 = uVar4;
      if (0x20 < uVar4) {
        uVar5 = 0x20;
      }
      uVar4 = uVar4 - uVar5;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x24),puVar1,uVar5);
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x48) = uVar5 + *(int *)(param_1 + 0x48);
    }
  }
  return 0;
}



//==== 005da198  ns=Global  size=0x14
// sig: undefined FUN_005da198(void)
// callers(0): 
// callees(0): 

undefined1 FUN_005da198(void)

{
  return *PTR_DAT_0071c560;
}



//==== 005da1ac  ns=Global  size=0x10
// sig: undefined FUN_005da1ac(void)
// callers(0): 
// callees(0): 

int FUN_005da1ac(void)

{
  int in_r13;
  
  return in_r13 + -0x6f0c;
}



//==== 005da1bc  ns=Global  size=0x398
// sig: undefined FUN_005da1bc(void)
// callers(1): 005da554 FUN_005da554
// callees(10): 005ca4a0 FUN_005ca4a0; 005ca99c FUN_005ca99c; 005caf7c FUN_005caf7c; 005d60b0 FUN_005d60b0; 005d615c FUN_005d615c; 005d63b4 FUN_005d63b4; 005d6450 FUN_005d6450; 005d6668 FUN_005d6668; 005d8b80 FUN_005d8b80; 005dc84c FUN_005dc84c

double FUN_005da1bc(undefined4 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined4 uStack00000030;
  double local_e0;
  int local_d8 [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong local_60;
  
  uStack00000030 = param_1;
  uVar3 = FUN_005ca99c(&stack0x00000030);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar2 = (uVar3 & 7) << 0x1c | (uVar3 << 0x20) >> 0x24;
  uVar1 = (uint)(uVar2 << 4) | (uint)uVar2 >> 0x1c;
  if (uVar1 == 1) {
    iVar5 = FUN_005ca4a0(param_1,uStack00000030,param_2,local_d8,2);
    if ((iVar5 != 0) && (local_d8[1] != 0)) {
      local_60 = (longlong)local_d8[1];
      local_98 = 0x401c;
      local_90 = 0xee6b280000000000;
      FUN_005d60b0((double)local_60,&local_c8);
      if (1 < iVar5) {
        piVar10 = local_d8 + 1;
        iVar9 = 1;
        do {
          piVar10 = piVar10 + 1;
          iVar9 = iVar9 + 1;
          FUN_005d615c(&local_a8,CONCAT44(local_c8,uStack_c4),local_c0,CONCAT44(local_98,uStack_94),
                       local_90);
          local_60 = (longlong)*piVar10;
          FUN_005d60b0((double)local_60,&local_b8);
          FUN_005d63b4(local_80,local_a8,local_a0,local_b8,local_b0);
          local_c8 = local_80[0];
          local_c0 = local_78;
        } while (iVar5 != iVar9);
      }
      if (param_3 + local_d8[0] != 0) {
        FUN_005d6450(local_70,CONCAT44(local_c8,uStack_c4),local_c0,param_3 + local_d8[0]);
        local_c8 = local_70[0];
        local_c0 = local_68;
      }
      local_e0 = (double)FUN_005d6668(CONCAT44(local_c8,uStack_c4),local_c0,param_4);
      goto LAB_005da258;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar2 = FUN_005caf7c(param_1,uStack00000030,param_2,local_d8,2);
      if ((int)uVar2 == 0) {
        local_e0 = DAT_0071c568;
      }
      else {
        uVar11 = uVar2 & 0xffffffff;
        local_60 = (longlong)*(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
        local_e0 = (double)local_60;
        pdVar7 = (double *)PTR_DAT_0071c570;
        if ((int)uVar2 + -1 < 0) {
          uVar11 = 1;
        }
        while (uVar11 = uVar11 - 1, pdVar8 = pdVar7, uVar11 != 0) {
          while( true ) {
            uVar2 = uVar2 - 1;
            iVar5 = *(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
            lVar6 = (longlong)iVar5;
            pdVar7 = pdVar8 + 1;
            if (iVar5 == 0) break;
            local_e0 = (double)lVar6 * *pdVar8 + local_e0;
            uVar11 = uVar11 - 1;
            pdVar8 = pdVar8 + 1;
            local_60 = lVar6;
            if (uVar11 == 0) goto LAB_005da458;
          }
        }
      }
LAB_005da458:
      uVar4 = FUN_005d8b80(&local_e0,local_d8[0]);
      local_e0 = (double)FUN_005dc84c(local_e0,uVar4,param_3,param_4);
      goto LAB_005da258;
    }
    if (uVar1 == 3) {
      local_e0 = *(double *)PTR_DAT_0071c574;
      goto LAB_005da258;
    }
    if (uVar1 == 4) {
      local_e0 = *(double *)PTR_DAT_0071c578;
      goto LAB_005da258;
    }
  }
  local_e0 = DAT_0071c568;
LAB_005da258:
  if ((uVar3 & 8) == 0) {
    return local_e0;
  }
  return -local_e0;
}



//==== 005da554  ns=Global  size=0x8
// sig: undefined FUN_005da554(void)
// callers(1): 005d6d30 FUN_005d6d30
// callees(1): 005da1bc FUN_005da1bc

void FUN_005da554(void)

{
  FUN_005da1bc();
  return;
}



//==== 005da55c  ns=Global  size=0x1f0
// sig: undefined FUN_005da55c(void)
// callers(1): 005da74c FUN_005da74c
// callees(2): 005d5904 FUN_005d5904; 005da754 FUN_005da754

ulonglong FUN_005da55c(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 auStack_40 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_40;
  }
  bVar5 = *param_1;
  pbVar6 = param_1;
  while ((*(ushort *)((uint)bVar5 * 2 + *(int *)PTR_PTR_0071c580) & 0x144) != 0) {
    pbVar6 = pbVar6 + 1;
    bVar5 = *pbVar6;
  }
  if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
    uVar2 = FUN_005da754(pbVar6 + 1,param_2,param_3,param_4);
    pbVar1 = (byte *)*param_2;
    if (pbVar6 + 1 == pbVar1) goto LAB_005da688;
LAB_005da614:
    uVar4 = uVar2;
    if (param_1 == pbVar1) goto LAB_005da68c;
  }
  else {
    bVar5 = 0x2b;
    uVar2 = FUN_005da754(pbVar6,param_2,param_3,param_4);
    pbVar1 = (byte *)*param_2;
    if (pbVar6 != pbVar1) goto LAB_005da614;
LAB_005da688:
    *param_2 = param_1;
LAB_005da68c:
    uVar4 = uVar2;
    if (uVar2 != 0) goto LAB_005da694;
  }
  if (bVar5 == 0x2b) {
    uVar2 = uVar4;
    if (-1 < (longlong)uVar4) {
      return uVar4;
    }
  }
  else {
    if (bVar5 != 0x2d) {
      return uVar4;
    }
    uVar2 = -uVar4;
    if (uVar4 < 0x8000000000000001) {
      return uVar2;
    }
  }
LAB_005da694:
  puVar3 = (undefined4 *)FUN_005d5904(uVar2);
  *puVar3 = 0x8001001c;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  if (bVar5 == 0x2d) {
    return 0x8000000000000000;
  }
  return 0x7fffffffffffffff;
}



//==== 005da74c  ns=Global  size=0x8
// sig: undefined FUN_005da74c(void)
// callers(1): 005d7d48 FUN_005d7d48
// callees(1): 005da55c FUN_005da55c

void FUN_005da74c(void)

{
  FUN_005da55c();
  return;
}



//==== 005da754  ns=Global  size=0x354
// sig: undefined FUN_005da754(void)
// callers(2): 005da55c FUN_005da55c; 005daaa8 FUN_005daaa8
// callees(2): 005c5984 FUN_005c5984; 005d5904 FUN_005d5904
// strings: 006615b0: '0123456789abcdefghijklmnopqrstuvwxyz'

ulonglong FUN_005da754(byte *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  int iVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
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
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  puVar3 = PTR_s_0123456789abcdefghijklmnopqrstuv_0071c588;
  puVar2 = PTR_PTR_0071c584;
  bVar13 = *param_1;
  pbVar14 = param_1;
  while ((*(ushort *)((uint)bVar13 * 2 + *(int *)PTR_PTR_0071c584) & 0x144) != 0) {
    pbVar14 = pbVar14 + 1;
    bVar13 = *pbVar14;
  }
  if ((bVar13 == 0x2d) || (bVar13 == 0x2b)) {
    pbVar14 = pbVar14 + 1;
  }
  else {
    bVar13 = 0x2b;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) goto LAB_005da844;
  pbVar10 = pbVar14;
  if (param_3 < 1) {
    param_3 = 10;
    iVar8 = 10;
    if (*pbVar14 == 0x30) {
      if ((pbVar14[1] != 0x78) && (param_3 = 8, pbVar14[1] != 0x58)) goto LAB_005da8e4;
      pbVar14 = pbVar14 + 2;
      param_3 = 0x10;
      goto LAB_005da8c4;
    }
  }
  else {
    if (param_3 == 0x10) {
      iVar8 = 0x10;
      if (*pbVar14 != 0x30) goto LAB_005da908;
      if ((pbVar14[1] != 0x78) && (pbVar14[1] != 0x58)) goto LAB_005da8e4;
      pbVar14 = pbVar14 + 2;
    }
LAB_005da8c4:
    bVar1 = *pbVar14;
    pbVar10 = pbVar14;
    while (iVar8 = param_3, bVar1 == 0x30) {
LAB_005da8e4:
      pbVar14 = pbVar14 + 1;
      bVar1 = *pbVar14;
    }
  }
LAB_005da908:
  iVar12 = 0;
  uVar9 = 0;
  uVar11 = 0;
  pbVar15 = pbVar14;
  while( true ) {
    bVar1 = *pbVar15;
    uVar7 = (uint)bVar1;
    if ((*(ushort *)((uint)bVar1 * 2 + *(int *)puVar2) & 2) != 0) {
      uVar7 = bVar1 + 0x20;
    }
    iVar5 = FUN_005c5984(puVar3,uVar7,iVar8);
    if (iVar5 == 0) break;
    iVar12 = iVar5 - (int)puVar3;
    pbVar15 = pbVar15 + 1;
    uVar9 = uVar11;
    uVar11 = uVar11 * (longlong)param_3 + (longlong)(char)iVar12;
  }
  if (pbVar15 != pbVar10) {
    if (((int)(pbVar15 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar14)) < 0) ||
       ((((int)(pbVar15 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar14)) < 1 &&
         (uVar4 = uVar11 - (longlong)(char)iVar12, uVar4 <= uVar11)) &&
        (uVar4 / (ulonglong)(longlong)param_3 == uVar9)))) {
      if (bVar13 == 0x2d) {
        uVar11 = -uVar11;
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_005d5904();
      *puVar6 = 0x8001001c;
      if (param_4 == (undefined4 *)0x0) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = 0xffffffffffffffff;
        *param_4 = 1;
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar11;
    }
    *param_2 = pbVar15;
    return uVar11;
  }
LAB_005da844:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}



//==== 005daaa8  ns=Global  size=0x8
// sig: undefined FUN_005daaa8(void)
// callers(1): 005d7d48 FUN_005d7d48
// callees(1): 005da754 FUN_005da754

void FUN_005daaa8(void)

{
  FUN_005da754();
  return;
}



//==== 005daab0  ns=Global  size=0x29c
// sig: undefined FUN_005daab0(void)
// callers(1): 005d58bc FUN_005d58bc
// callees(4): 005c5ad0 libc::memcpy; 005c8510 libc::strlen; 005d9b38 libc::mbrtowc; 005dbcd8 FUN_005dbcd8

ulonglong FUN_005daab0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                      undefined4 param_5)

{
  char cVar1;
  undefined1 *__dest;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  size_t sVar5;
  void *__src;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t local_b0 [2];
  uint local_ac;
  mbstate_t local_a8;
  uint auStack_a0 [6];
  undefined1 auStack_88 [32];
  
  sVar5 = libc::strlen((char *)param_3);
  uVar10 = (ulonglong)(int)sVar5;
  uVar9 = 0;
  local_a8.__value.__wch._2_2_ = 0;
  local_a8.__count = 0;
  local_a8.__value.__wch._0_2_ = 0;
  lVar6 = param_1;
  do {
    while( true ) {
      iVar7 = (int)param_2;
      uVar3 = uVar9 | uVar10;
      iVar4 = (int)uVar3;
      while( true ) {
        __dest = (undefined1 *)lVar6;
        if (iVar4 == 0) {
          if (iVar7 == 0) goto LAB_005dabf4;
          uVar9 = lVar6 - param_1;
          *__dest = (char)uVar3;
          goto LAB_005dabf8;
        }
        if ((int)uVar10 == 0) {
          uVar9 = uVar9 - 1;
          iVar7 = (int)((uVar9 & 0xffffffff) << 2);
          uVar10 = (ulonglong)*(uint *)((int)auStack_a0 + iVar7);
          param_3 = (ulonglong)*(uint *)((int)auStack_a0 + iVar7 + 0xc);
        }
        sVar5 = libc::mbrtowc(local_b0,(char *)(byte *)param_3,(size_t)uVar10,&local_a8);
        uVar3 = (ulonglong)(int)sVar5;
        if ((int)sVar5 < 1) {
          uVar3 = -(ulonglong)*(byte *)param_3 >> 0x3f;
        }
        param_3 = param_3 + uVar3;
        uVar10 = uVar10 - uVar3;
        pcVar2 = (char *)param_3;
        if ((local_b0[0] == L'%') && ((int)uVar10 != 0)) break;
        if ((param_2 & 0xffffffff) < (uVar3 & 0xffffffff)) goto LAB_005dabf4;
        param_2 = param_2 - uVar3;
        iVar7 = (int)param_2;
        lVar6 = lVar6 + uVar3;
        libc::memcpy(__dest,pcVar2 + -(size_t)uVar3,(size_t)uVar3);
        uVar3 = uVar9 | uVar10;
        iVar4 = (int)uVar3;
      }
      cVar1 = *pcVar2;
      if ((cVar1 != 'E') && (cVar1 != 'O')) break;
      uVar3 = param_3 + 2;
      uVar8 = (undefined4)uVar3;
      uVar10 = uVar10 - 2;
      iVar7 = (int)uVar10;
      param_3 = FUN_005dbcd8(param_4,param_5,cVar1,pcVar2[1],&local_ac,auStack_88);
      __src = (void *)param_3;
      if (0 < (int)local_ac) goto LAB_005dac98;
LAB_005dad18:
      if ((iVar7 != 0) && ((uVar9 & 0xffffffff) < 3)) {
        iVar4 = (int)((uVar9 & 0xffffffff) << 2);
        uVar9 = uVar9 + 1;
        *(int *)((int)auStack_a0 + iVar4) = iVar7;
        *(undefined4 *)((int)auStack_a0 + iVar4 + 0xc) = uVar8;
      }
      uVar10 = -(ulonglong)local_ac;
    }
    uVar3 = param_3 + 1;
    uVar8 = (undefined4)uVar3;
    param_3 = FUN_005dbcd8(param_4,param_5,0,cVar1,&local_ac,auStack_88);
    __src = (void *)param_3;
    uVar10 = uVar10 - 1;
    iVar7 = (int)uVar10;
    if ((int)local_ac < 1) goto LAB_005dad18;
LAB_005dac98:
    param_3 = uVar3;
    if ((param_2 & 0xffffffff) < (ulonglong)local_ac) {
LAB_005dabf4:
      uVar9 = 0;
LAB_005dabf8:
      return uVar9 & 0xffffffff;
    }
    libc::memcpy(__dest,__src,local_ac);
    param_2 = param_2 - local_ac;
    lVar6 = lVar6 + (ulonglong)local_ac;
  } while( true );
}



//==== 005dad4c  ns=Global  size=0x10
// sig: undefined FUN_005dad4c(void)
// callers(0): 
// callees(0): 

int FUN_005dad4c(void)

{
  int in_r13;
  
  return in_r13 + -0x6ecc;
}



//==== 005dad5c  ns=Global  size=0x20
// sig: undefined FUN_005dad5c(void)
// callers(1): 005d8ba8 FUN_005d8ba8
// callees(0): 

int * FUN_005dad5c(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 / param_3;
  param_1[1] = param_2 - param_3 * (param_2 / param_3);
  return param_1;
}



//==== 005dad7c  ns=Global  size=0x1c4
// sig: undefined FUN_005dad7c(void)
// callers(2): 005d5d10 FUN_005d5d10; 005daf40 FUN_005daf40
// callees(0): 

short FUN_005dad7c(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ushort *puVar8;
  
  sVar4 = 1;
  uVar1 = *param_1;
  uVar7 = (ulonglong)uVar1 & 0xf;
  uVar3 = (ushort)uVar7;
  *param_1 = uVar3;
  if ((int)uVar7 == 0) {
    puVar5 = param_1 + 1;
    uVar2 = *puVar5;
    if (((uVar2 == 0) && (param_1[2] == 0)) && (sVar4 = 1, param_1[3] == 0)) goto LAB_005daf08;
    sVar4 = 1;
    while( true ) {
      *param_1 = uVar2;
      sVar4 = sVar4 + -0x10;
      *puVar5 = param_1[2];
      param_1[2] = param_1[3];
      param_1[3] = 0;
      uVar7 = (ulonglong)*param_1;
      if (*param_1 != 0) break;
      uVar2 = *puVar5;
    }
  }
  if (uVar7 < 0x10) {
    puVar5 = param_1 + 1;
    puVar6 = param_1 + 2;
    puVar8 = param_1 + 3;
    do {
      sVar4 = sVar4 + -1;
      *param_1 = (ushort)(uVar7 << 1) | (ushort)(((ulonglong)*puVar5 << 0x20) >> 0x2f);
      *puVar5 = *puVar5 << 1 | (ushort)(((ulonglong)*puVar6 << 0x20) >> 0x2f);
      *puVar6 = *puVar6 << 1 | (ushort)(((ulonglong)*puVar8 << 0x20) >> 0x2f);
      *puVar8 = *puVar8 << 1;
      uVar7 = (ulonglong)*param_1;
    } while (uVar7 < 0x10);
  }
  uVar3 = (ushort)uVar7;
  if (0x1f < uVar7) {
    puVar5 = param_1 + 1;
    puVar6 = param_1 + 2;
    do {
      sVar4 = sVar4 + 1;
      param_1[3] = (ushort)(((ulonglong)param_1[3] << 0x20) >> 0x21) | *puVar6 << 0xf;
      *puVar6 = (ushort)(((ulonglong)*puVar6 << 0x20) >> 0x21) | *puVar5 << 0xf;
      *puVar5 = (ushort)(((ulonglong)*puVar5 << 0x20) >> 0x21) | *param_1 << 0xf;
      uVar7 = ((ulonglong)*param_1 << 0x20) >> 0x21;
      uVar3 = (ushort)uVar7;
      *param_1 = uVar3;
    } while (0x1f < uVar7);
  }
  uVar3 = uVar3 & 0xf;
  *param_1 = uVar3;
LAB_005daf08:
  *param_1 = uVar1 & 0x8000 | uVar3;
  return sVar4;
}



//==== 005daf40  ns=Global  size=0x120
// sig: undefined FUN_005daf40(void)
// callers(1): 005d955c FUN_005d955c
// callees(1): 005dad7c FUN_005dad7c

undefined4 FUN_005daf40(short *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  uVar1 = (uVar3 << 0x20) >> 0x24;
  uVar2 = (ushort)uVar1 & 0x7ff;
  if (uVar2 != 0x7ff) {
    if ((uVar1 & 0x7ff) == 0) {
      uVar2 = FUN_005dad7c(param_2);
      if (0 < (short)uVar2) {
        *param_1 = 0;
        return 0;
      }
      uVar3 = (ulonglong)*param_2;
    }
    *param_2 = (ushort)(((uVar3 << 0x20) >> 0x2f) << 0xf) |
               (ushort)(((uVar3 & 0xf) << 0x11) >> 0x10) >> 1 | 0x3fe0;
    *param_1 = uVar2 - 0x3fe;
    return 0xffffffff;
  }
  *param_1 = 0;
  if (((((*param_2 & 0xf) == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 1;
  }
  return 2;
}



//==== 005db060  ns=Global  size=0x64c
// sig: undefined FUN_005db060(void)
// callers(1): 005d8ba8 FUN_005d8ba8
// callees(2): 005c5ad0 libc::memcpy; 005dc904 FUN_005dc904

char * FUN_005db060(int param_1,char param_2,undefined *param_3,int param_4,short param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  short sVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  size_t __n;
  size_t __n_00;
  int iVar12;
  undefined1 auStack_60 [2];
  short local_5e;
  undefined4 local_5c;
  char acStack_59 [25];
  
  uVar1 = **(undefined1 **)(PTR_PTR_0071c58c + 0x2c);
  sVar5 = (short)param_4;
  if (param_4 < 1) {
    sVar5 = 1;
    param_3 = PTR_DAT_0071c590;
  }
  if ((param_2 == 'f') || (param_2 == 'F')) {
    __n = (size_t)(short)(param_5 + 1);
LAB_005db310:
    __n_00 = (size_t)sVar5;
    if ((int)__n < 1) {
      iVar7 = *(int *)(param_1 + 0x34);
      *(undefined1 *)(iVar7 + *(int *)(param_1 + 0x28)) = 0x30;
      iVar8 = *(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x34) = iVar7 + 1;
      if ((0 < iVar8) || ((*(ushort *)(param_1 + 0x50) & 8) != 0)) {
        *(undefined1 *)(iVar7 + 1 + *(int *)(param_1 + 0x28)) = uVar1;
        iVar8 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x34) = iVar7 + 2;
      }
      iVar7 = -__n;
      if (iVar8 < iVar7) {
        __n = (size_t)(short)-(short)iVar8;
        iVar7 = -(int)(short)-(short)iVar8;
      }
      iVar8 = __n + iVar8;
      *(int *)(param_1 + 0x38) = iVar7;
      *(int *)(param_1 + 0x44) = iVar8;
      if (iVar8 < sVar5) {
        __n_00 = (size_t)(short)iVar8;
      }
      *(size_t *)(param_1 + 0x3c) = __n_00;
      pcVar4 = (char *)libc::memcpy((void *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34)),
                                    param_3,__n_00);
      uVar2 = *(ushort *)(param_1 + 0x50);
      *(size_t *)(param_1 + 0x40) = *(int *)(param_1 + 0x44) - __n_00;
    }
    else if ((int)sVar5 < (int)__n) {
      pcVar4 = (char *)libc::memcpy((void *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34)),
                                    param_3,(int)sVar5);
      iVar7 = *(int *)(param_1 + 0x34) + __n_00;
      *(size_t *)(param_1 + 0x38) = __n - (int)sVar5;
      *(int *)(param_1 + 0x34) = iVar7;
      if ((*(int *)(param_1 + 0x44) < 1) && (uVar2 = *(ushort *)(param_1 + 0x50), (uVar2 & 8) == 0))
      {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x44);
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x28) + iVar7) = uVar1;
        uVar2 = *(ushort *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x44);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
    }
    else {
      libc::memcpy((void *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34)),param_3,__n);
      iVar7 = *(int *)(param_1 + 0x44);
      iVar8 = __n + *(int *)(param_1 + 0x34);
      sVar5 = sVar5 - (param_5 + 1);
      *(int *)(param_1 + 0x34) = iVar8;
      if ((0 < iVar7) || ((*(ushort *)(param_1 + 0x50) & 8) != 0)) {
        puVar6 = (undefined1 *)(iVar8 + *(int *)(param_1 + 0x28));
        iVar8 = iVar8 + 1;
        *puVar6 = uVar1;
        iVar7 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x34) = iVar8;
      }
      if (iVar7 < sVar5) {
        sVar5 = (short)iVar7;
      }
      pcVar4 = (char *)libc::memcpy((void *)(*(int *)(param_1 + 0x28) + iVar8),param_3 + __n,
                                    (int)sVar5);
      uVar2 = *(ushort *)(param_1 + 0x50);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)sVar5;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x44) - (int)sVar5;
    }
    goto joined_r0x005db394;
  }
  if ((param_2 == 'g') || (param_2 == 'G')) {
    if ((-5 < param_5) && (iVar7 = *(int *)(param_1 + 0x44), param_5 < iVar7)) {
      if ((*(ushort *)(param_1 + 0x50) & 8) == 0) {
        if (sVar5 < iVar7) {
          *(int *)(param_1 + 0x44) = (int)sVar5;
          iVar7 = (int)sVar5;
        }
      }
      __n = (size_t)(short)(param_5 + 1);
      iVar7 = iVar7 - (short)(param_5 + 1);
      *(int *)(param_1 + 0x44) = iVar7;
      if (iVar7 < 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      goto LAB_005db310;
    }
    if ((param_2 != 'g') && (param_2 != 'G')) goto LAB_005db0dc;
    iVar8 = (int)sVar5;
    iVar7 = *(int *)(param_1 + 0x44);
    if ((iVar8 < iVar7) && ((*(ushort *)(param_1 + 0x50) & 8) == 0)) {
      *(int *)(param_1 + 0x44) = iVar8;
      iVar7 = iVar8;
    }
    *(int *)(param_1 + 0x44) = iVar7 + -1;
    if (iVar7 + -1 < 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    uVar3 = (int)((int)param_2 ^ 0x67U) >> 0x1f;
    param_2 = ((byte)((int)(uVar3 - (uVar3 ^ (int)param_2 ^ 0x67U)) >> 0x1f) & 0xe0) + 0x65;
  }
  else {
LAB_005db0dc:
    if (param_2 == 'a') {
      param_2 = 'p';
    }
    else if (param_2 == 'A') {
      param_2 = 'P';
    }
  }
  iVar7 = *(int *)(param_1 + 0x34);
  iVar8 = iVar7 + 1;
  *(undefined *)(iVar7 + *(int *)(param_1 + 0x28)) = *param_3;
  *(int *)(param_1 + 0x34) = iVar8;
  if ((0 < *(int *)(param_1 + 0x44)) || ((*(ushort *)(param_1 + 0x50) & 8) != 0)) {
    puVar6 = (undefined1 *)(iVar8 + *(int *)(param_1 + 0x28));
    iVar8 = iVar7 + 2;
    *puVar6 = uVar1;
    iVar7 = *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x34) = iVar8;
    if (0 < iVar7) {
      sVar5 = sVar5 + -1;
      if (iVar7 < sVar5) {
        sVar5 = (short)iVar7;
      }
      libc::memcpy((void *)(iVar8 + *(int *)(param_1 + 0x28)),param_3 + 1,(int)sVar5);
      iVar8 = (int)sVar5 + *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x34) = iVar8;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x44) - (int)sVar5;
    }
  }
  pcVar10 = (char *)(*(int *)(param_1 + 0x28) + iVar8);
  pcVar4 = pcVar10 + 1;
  *pcVar10 = param_2;
  if (param_5 < 0) {
    param_5 = -param_5;
    *pcVar4 = '-';
  }
  else {
    *pcVar4 = '+';
  }
  pcVar9 = pcVar10 + 2;
  iVar7 = 0;
  pcVar11 = pcVar9;
  if (param_5 < 1) {
LAB_005db600:
    if ((param_2 == 'e') || (param_2 == 'E')) {
      pcVar11 = pcVar10 + 3;
      *pcVar9 = '0';
    }
  }
  else {
    do {
      pcVar4 = (char *)FUN_005dc904(auStack_60,param_5,10);
      iVar8 = iVar7 + 1;
      iVar7 = iVar7 + 1;
      ((char *)((int)register0x0000000c + -0x59))[iVar8] = (char)local_5c;
      param_5 = local_5e;
    } while (0 < local_5e);
    if (iVar7 < 2) goto LAB_005db600;
  }
  if (iVar7 == 0) {
    pcVar10 = pcVar11 + 1;
    *pcVar11 = '0';
  }
  else {
    pcVar10 = pcVar11;
    iVar8 = iVar7;
    iVar12 = iVar7;
    if (0 < iVar7) {
      do {
        *pcVar10 = ((char *)((int)register0x0000000c + -0x59))[iVar8] + '0';
        iVar12 = iVar12 + -1;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar10 + 1;
      } while (iVar12 != 0);
      pcVar10 = pcVar11 + iVar7;
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x50);
  *(int *)(param_1 + 0x3c) = (int)pcVar10 - (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34));
joined_r0x005db394:
  if ((uVar2 & 0x14) == 0x10) {
    iVar7 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) +
            *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x40);
    if (iVar7 < *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x4c) - iVar7;
      return pcVar4;
    }
  }
  return pcVar4;
}



//==== 005db6ac  ns=Global  size=0x74
// sig: undefined FUN_005db6ac(void)
// callers(1): 005db774 FUN_005db774
// callees(0): 

bool FUN_005db6ac(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 & 3) == 0) {
    bVar1 = true;
    if ((param_1 == ((int)param_1 / 100) * 100) && (399 < param_1 - 40000)) {
      return param_1 + 0x1d64f < 400;
    }
  }
  return bVar1;
}



//==== 005db720  ns=Global  size=0x54
// sig: undefined FUN_005db720(void)
// callers(1): 005db774 FUN_005db774
// callees(0): 

int FUN_005db720(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) + 7;
  uVar1 = (longlong)(iVar2 / 7 + (iVar2 >> 0x1f)) - (longlong)(iVar2 >> 0x1f);
  return ((param_3 - (iVar2 - ((int)((uVar1 & 0xffffffff) << 3) - (int)uVar1))) + 7) / 7;
}



//==== 005db774  ns=Global  size=0x114
// sig: undefined FUN_005db774(void)
// callers(1): 005db888 FUN_005db888
// callees(2): 005db6ac FUN_005db6ac; 005db720 FUN_005db720

int FUN_005db774(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar1 = FUN_005db6ac();
  iVar2 = param_3 - iVar1;
  iVar4 = ((param_2 - param_3) + 0x173) % 7;
  iVar1 = iVar4 + iVar1 + 0x16d;
  uVar3 = (longlong)(iVar1 / 7 + (iVar1 >> 0x1f)) - (longlong)(iVar1 >> 0x1f);
  iVar1 = iVar1 - ((int)((uVar3 & 0xffffffff) << 3) - (int)uVar3);
  if (iVar2 < 0x16c) {
    if (0x16a < iVar2) goto LAB_005db85c;
    if (iVar2 < 0x16a) goto LAB_005db814;
  }
  else {
    if (iVar1 == 2) {
      return -1;
    }
LAB_005db85c:
    if (iVar1 == 3) {
      return -1;
    }
  }
  if (iVar1 == 4) {
    return -1;
  }
LAB_005db814:
  iVar1 = FUN_005db720(1,param_2,param_3);
  if (iVar4 - 2U < 3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



//==== 005db888  ns=Global  size=0x78
// sig: undefined FUN_005db888(void)
// callers(0): 
// callees(1): 005db774 FUN_005db774

int FUN_005db888(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005db774(param_1);
  if (iVar1 == 0) {
    param_1 = param_1 + -1;
  }
  else if (iVar1 < 1) {
    return param_1 + 1;
  }
  return param_1;
}



//==== 005db900  ns=Global  size=0xf0
// sig: undefined FUN_005db900(void)
// callers(0): 
// callees(1): 005dc734 FUN_005dc734

char * FUN_005db900(int param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  param_2 = param_2 & (longlong)((int)~(uint)param_2 >> 0x1f);
  if ((param_5 != 0x4f) ||
     (pcVar4 = (char *)FUN_005dc734(*(undefined4 *)(param_6 + 0x48),(int)param_2,param_4),
     *param_4 < 1)) {
    pcVar3 = (char *)(param_3 + param_1);
    *param_4 = param_3;
    *pcVar3 = '\0';
    pcVar4 = pcVar3;
    if (0 < param_3) {
      pcVar4 = pcVar3 + -param_3;
      do {
        iVar1 = (int)param_2 >> 0x1f;
        pcVar3 = pcVar3 + -1;
        uVar2 = (longlong)((int)param_2 / 10 + iVar1) - (longlong)iVar1;
        *pcVar3 = ((char)param_2 -
                  ((char)((uVar2 & 0xffffffff) << 1) + (char)((uVar2 & 0xffffffff) << 3))) + '0';
        param_3 = param_3 + -1;
        param_2 = uVar2;
      } while (param_3 != 0);
    }
  }
  return pcVar4;
}



//==== 005db9f0  ns=Global  size=0x140
// sig: undefined FUN_005db9f0(void)
// callers(1): 005dbb30 FUN_005dbb30
// callees(1): 005c8a8c FUN_005c8a8c

undefined4 FUN_005db9f0(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_30 [6];
  
  iVar2 = FUN_005c8a8c(param_2,local_30,10);
  if ((param_2 == local_30[0]) || (*local_30[0] != '/')) {
LAB_005dba4c:
    uVar3 = 2;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14) + 0x76c;
    bVar1 = iVar4 < iVar2;
    if (iVar2 == iVar4) {
      iVar2 = FUN_005c8a8c(local_30[0] + 1,local_30,10);
      if ((local_30[0] + 1 == local_30[0]) || (*local_30[0] != '/')) goto LAB_005dba4c;
      iVar4 = *(int *)(param_1 + 0x10) + 1;
      bVar1 = iVar4 < iVar2;
      if (iVar2 == iVar4) {
        iVar2 = FUN_005c8a8c(local_30[0] + 1,local_30,10);
        if (local_30[0] + 1 == local_30[0]) goto LAB_005dba4c;
        bVar1 = *(int *)(param_1 + 0xc) < iVar2;
        if (iVar2 == *(int *)(param_1 + 0xc)) {
          return 0;
        }
      }
    }
    if (!bVar1) {
      return 1;
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



//==== 005dbb30  ns=Global  size=0x1a8
// sig: undefined FUN_005dbb30(void)
// callers(0): 
// callees(2): 005db9f0 FUN_005db9f0; 005dc734 FUN_005dc734

char * FUN_005dbb30(undefined8 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_50 [16];
  
  iVar6 = 0;
  pcVar2 = (char *)FUN_005dc734(*(undefined4 *)(param_2 + 0x44),0,auStack_50);
  cVar1 = *pcVar2;
  do {
    if (cVar1 == '\0') {
      return PTR_DAT_0071c594;
    }
    uVar3 = FUN_005dc734(pcVar2 + 1,1,auStack_50);
    uVar4 = FUN_005db9f0(param_1,uVar3);
    if (*pcVar2 == '-') {
      uVar4 = uVar4 + 1;
joined_r0x005dbcbc:
      if (uVar4 < 2) {
        pcVar5 = (char *)FUN_005dc734(pcVar2 + 1,2,auStack_50);
        if ((*pcVar5 == *pcVar2) && (pcVar5[1] == '*')) {
          return pcVar2;
        }
        uVar4 = FUN_005db9f0(param_1,pcVar5);
        if (*pcVar2 != '-') {
          if (*pcVar2 != '+') goto LAB_005dbbdc;
          uVar4 = uVar4 + 1;
        }
        if (uVar4 < 2) {
          return pcVar2;
        }
      }
    }
    else if (*pcVar2 == '+') goto joined_r0x005dbcbc;
LAB_005dbbdc:
    iVar6 = iVar6 + 1;
    pcVar2 = (char *)FUN_005dc734(*(undefined4 *)(param_2 + 0x44),iVar6,auStack_50);
    cVar1 = *pcVar2;
  } while( true );
}



//==== 005dbcd8  ns=Global  size=0xe4
// sig: undefined FUN_005dbcd8(void)
// callers(1): 005daab0 FUN_005daab0
// callees(0): 

char * FUN_005dbcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                   undefined4 *param_5,char *param_6)

{
  char *pcVar1;
  
  if ((byte)(param_4 - 0x25U) < 0x56) {
                    /* WARNING: Could not recover jumptable at 0x005dbd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(*(code *)(PTR_DAT_0071c598 +
                               *(int *)(PTR_DAT_0071c598 + (uint)(byte)(param_4 - 0x25) * 4)))
                               (param_2);
    return pcVar1;
  }
  param_6[1] = '\0';
  *param_6 = param_4;
  *param_5 = 2;
  return param_6;
}



//==== 005dc734  ns=Global  size=0x118
// sig: undefined FUN_005dc734(void)
// callers(2): 005db900 FUN_005db900; 005dbb30 FUN_005dbb30
// callees(2): 005c8510 libc::strlen; 005cc578 libc::strchr

char * FUN_005dc734(char *param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  int __c;
  
  cVar1 = *param_1;
  __c = 0;
  if (cVar1 != 0) {
    param_1 = param_1 + 1;
    __c = (int)cVar1;
  }
  while( true ) {
    pcVar2 = libc::strchr(param_1,__c);
    if (pcVar2 == (char *)0x0) {
      sVar3 = libc::strlen(param_1);
      pcVar2 = param_1 + sVar3;
    }
    if (param_2 < 1) break;
    param_2 = param_2 + -1;
    param_1 = pcVar2 + 1;
    if (*pcVar2 == '\0') {
      *param_3 = 0;
      return pcVar2;
    }
  }
  *param_3 = (int)pcVar2 - (int)param_1;
  return param_1;
}



//==== 005dc84c  ns=Global  size=0xb8
// sig: undefined FUN_005dc84c(void)
// callers(1): 005da1bc FUN_005da1bc
// callees(3): 005d60b0 FUN_005d60b0; 005d6450 FUN_005d6450; 005d6668 FUN_005d6668

double FUN_005dc84c(double param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  double dVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  if ((param_3 != 0) && (param_1 != DAT_0071c5c0)) {
    FUN_005d60b0(&local_30);
    FUN_005d6450(local_20,CONCAT44(local_30,uStack_2c),local_28,param_3);
    dVar1 = (double)FUN_005d6668(CONCAT44(local_20[0],uStack_2c),local_18,param_4);
    return dVar1;
  }
  return param_1;
}



//==== 005dc904  ns=Global  size=0x20
// sig: undefined FUN_005dc904(void)
// callers(1): 005db060 FUN_005db060
// callees(0): 

int * FUN_005dc904(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 / param_3;
  param_1[1] = param_2 - param_3 * (param_2 / param_3);
  return param_1;
}



//==== 005dc924  ns=Global  size=0x80
// sig: undefined FUN_005dc924(void)
// callers(2): 0053adb8 FUN_0053adb8; 0064acbc FUN_0064acbc
// callees(1): 005dd378 FUN_005dd378

double FUN_005dc924(double param_1)

{
  float fVar1;
  short sVar2;
  undefined1 local_30 [48];
  
  fVar1 = (float)param_1;
  sVar2 = FUN_005dd378(local_30,0);
  if ((sVar2 < 0) && (param_1 < 0.0)) {
    return (double)(fVar1 - DAT_0071c5c8);
  }
  return (double)fVar1;
}



//==== 005dc9a4  ns=mathfunc  size=0x234
// sig: undefined fmod(void)
// callers(3): 00502798 fastfunc::FastFMod; 005dd1f4 FUN_005dd1f4; 005dd914 mathfunc::SinCos
// callees(4): 005dd48c FUN_005dd48c; 005dd4f8 FUN_005dd4f8; 005e659c FUN_005e659c; 005e6774 FUN_005e6774

double mathfunc::fmod(double param_1,double param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  float fStack00000030;
  float fStack00000038;
  short local_40;
  short local_3e;
  undefined1 local_3c [12];
  
  fStack00000030 = (float)param_1;
  fStack00000038 = (float)param_2;
  sVar2 = FUN_005dd48c(&stack0x00000030);
  sVar3 = FUN_005dd48c(&stack0x00000038);
  if (sVar2 < 0) {
    if (sVar3 < 0) {
      if (fStack00000038 < DAT_0071c5d0) {
        fStack00000038 = -fStack00000038;
      }
      bVar6 = fStack00000030 < DAT_0071c5d0;
      if (bVar6) {
        fStack00000030 = -fStack00000030;
      }
      FUN_005e6774(&local_40,local_3c);
      while ((sVar2 = FUN_005e6774(&local_3e,local_3c), sVar2 != 0 &&
             (sVar2 = local_3e - local_40, -1 < sVar2))) {
        iVar5 = 0;
        sVar3 = sVar2;
        while( true ) {
          fVar1 = fStack00000038;
          iVar4 = sVar2 - iVar5;
          iVar5 = iVar5 + 1;
          FUN_005e659c(local_3c,iVar4);
          dVar7 = (double)fStack00000030;
          if ((double)fVar1 <= dVar7) break;
          sVar3 = sVar3 + -1;
          if (sVar3 == -1) goto LAB_005dcb80;
        }
        fStack00000030 = (float)(dVar7 - (double)fVar1);
        dVar7 = (double)fStack00000030;
        if (sVar3 < 0) goto LAB_005dcb80;
      }
      dVar7 = (double)fStack00000030;
LAB_005dcb80:
      if (!bVar6) {
        return dVar7;
      }
      return -dVar7;
    }
  }
  else if (sVar2 == 2) goto LAB_005dca58;
  if (sVar3 == 2) {
    return (double)fStack00000038;
  }
  if ((sVar2 == 1) || (sVar3 == 0)) {
    FUN_005dd4f8(0x20000000);
    return (double)*(float *)PTR_DAT_0071c5cc;
  }
LAB_005dca58:
  return (double)fStack00000030;
}



//==== 005dcbd8  ns=Global  size=0x61c
// sig: undefined FUN_005dcbd8(void)
// callers(5): 005e998c FUN_005e998c; 006154a8 FUN_006154a8; 0061f7cc FUN_0061f7cc; 00622094 989snd::snd_InitVoiceAllocator; 0062d940 FUN_0062d940
// callees(5): 005dd378 FUN_005dd378; 005dd4f8 FUN_005dd4f8; 005dd5a8 FUN_005dd5a8; 005dd718 FUN_005dd718; 005e6774 FUN_005e6774

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_005dcbd8(double param_1,double param_2)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fStack00000030;
  short local_60 [2];
  float local_5c;
  undefined1 local_58 [10];
  short sStack_4e;
  
  fStack00000030 = (float)param_1;
  sVar5 = FUN_005e6774(local_60,&stack0x00000030);
  sVar6 = FUN_005dd378(local_58,0);
  if ((sVar6 == 0) && (param_2 == (double)DAT_0071c5fc)) goto LAB_005dcd14;
  if (sVar5 < 0) {
    if (local_60[0] != 1) {
LAB_005dcdcc:
      if (sVar6 < 1) {
        if ((((uint)fStack00000030 >> 0x10 & 0x8000) != 0) && (sVar6 != 0)) {
          FUN_005dd4f8(0x20000000);
          return (double)*(float *)PTR_DAT_0071c5e4;
        }
        sVar6 = 0;
        if (fStack00000030 <= DAT_0071c5fc) {
          fStack00000030 = -fStack00000030;
          sVar6 = FUN_005dd378(local_58,0xffffffffffffffff);
          sVar5 = sVar6;
        }
        if (fStack00000030 < DAT_0071c5e8) {
          fStack00000030 = fStack00000030 + fStack00000030;
          local_60[0] = local_60[0] + -1;
        }
        local_5c = 0.0;
        if ((double)DAT_0071c5ec < param_2) {
          if (param_2 < (double)DAT_0071c5f0) {
            dVar9 = (double)(longlong)local_60[0];
            iVar1 = (int)(param_2 * dVar9);
            if (iVar1 == 0) {
              local_5c = (float)(param_2 * dVar9) * DAT_0071c5f4;
            }
            else {
              fVar2 = (float)param_2;
              sVar5 = FUN_005dd378(&local_5c,0x10);
              local_5c = (float)(dVar9 * (double)(float)(param_2 - (double)fVar2) +
                                (double)(float)(dVar9 * (double)fVar2 - (double)(longlong)iVar1)) *
                         DAT_0071c5f4;
            }
            sStack_4e = (short)(int)param_2;
            if ((sStack_4e < -0x7f) || (0x7f < sStack_4e)) {
              sStack_4e = 0;
            }
            goto LAB_005dce58;
          }
          if (-1 < local_60[0]) {
            if (local_60[0] == 0) goto LAB_005dd08c;
            goto LAB_005dd064;
          }
        }
        else {
          if (local_60[0] < 0) {
LAB_005dd064:
            sStack_4e = 0;
            goto LAB_005dce58;
          }
          if (local_60[0] == 0) {
LAB_005dd08c:
            sStack_4e = 0;
            goto LAB_005dce58;
          }
        }
        sStack_4e = 0;
LAB_005dce58:
        dVar9 = (double)DAT_0071c5f8;
        dVar7 = (double)fStack00000030;
        if (dVar7 != dVar9) {
          fVar2 = (float)(param_2 - (double)(longlong)(int)sStack_4e);
          dVar8 = dVar9;
          if (fVar2 != DAT_0071c5fc) {
            dVar7 = (double)FUN_005dd718(dVar7,sVar5,0);
            local_5c = (float)(dVar7 * (double)fVar2 + (double)local_5c);
            dVar7 = (double)fStack00000030;
            dVar8 = dVar9;
          }
          uVar4 = (ulonglong)((int)sStack_4e >> 0x1f);
          uVar4 = (uVar4 ^ (longlong)sStack_4e) - uVar4;
          sVar5 = (short)uVar4;
          dVar9 = dVar8;
          while( true ) {
            uVar3 = uVar4 & 1;
            uVar4 = (ulonglong)((longlong)sVar5 << 0x20) >> 0x21;
            sVar5 = (short)uVar4;
            if (uVar3 != 0) {
              dVar9 = (double)(float)(dVar9 * dVar7);
            }
            if (sVar5 == 0) break;
            dVar7 = (double)(float)(dVar7 * dVar7);
          }
          if (param_2 < (double)DAT_0071c5fc) {
            dVar9 = (double)(float)(dVar8 / dVar9);
          }
        }
        sVar5 = FUN_005dd5a8(dVar9,&local_5c);
        if (sVar5 == 0) {
          FUN_005dd4f8(0x8000000);
        }
        else if (sVar5 == 1) {
          FUN_005dd4f8(0x10000000);
        }
        if (sVar6 != 0) {
          return -(double)local_5c;
        }
        return (double)local_5c;
      }
      goto LAB_005dcc5c;
    }
    if (fStack00000030 == DAT_0071c5d4) {
LAB_005dcd14:
      return (double)DAT_0071c5f8;
    }
    if (sVar6 != 1) goto LAB_005dcdcc;
    local_60[0] = 1;
    if (fStack00000030 == DAT_0071c5d8) goto LAB_005dcd14;
LAB_005dcf08:
    if (((uint)(float)param_2 >> 0x10 & 0x8000) == 0) {
      dVar9 = (double)DAT_0071c5fc;
      if (0 < local_60[0]) {
LAB_005dcd8c:
        return (double)*(float *)PTR_DAT_0071c5dc;
      }
    }
    else {
      dVar9 = (double)DAT_0071c5fc;
      if (local_60[0] < 1) goto LAB_005dcd8c;
    }
  }
  else {
    if (sVar5 == 2) {
      return (double)fStack00000030;
    }
LAB_005dcc5c:
    if (sVar6 == 2) {
      return param_2;
    }
    if (sVar5 == 1) {
      if (-1 < (int)fStack00000030) {
        if (((uint)(float)param_2 >> 0x10 & 0x8000) != 0) {
          return (double)DAT_0071c5fc;
        }
        goto LAB_005dcd8c;
      }
      if (((uint)(float)param_2 >> 0x10 & 0x8000) == 0) {
        if ((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0))
        goto LAB_005dcfb0;
        goto LAB_005dcd8c;
      }
      if ((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0))
      goto LAB_005dcf68;
    }
    else {
      if (sVar6 == 1) goto LAB_005dcf08;
      if (((uint)(float)param_2 >> 0x10 & 0x8000) != 0) {
        FUN_005dd4f8(0x4000000);
        if (((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0)) &&
           ((int)fStack00000030 < 0)) {
LAB_005dcfb0:
          return -(double)*(float *)PTR_DAT_0071c5dc;
        }
        goto LAB_005dcd8c;
      }
      if ((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0)) {
        if (-1 < (int)fStack00000030) {
          return (double)DAT_0071c5fc;
        }
LAB_005dcf68:
        return -(double)*(float *)PTR_DAT_0071c5e0;
      }
    }
    dVar9 = (double)DAT_0071c5fc;
  }
  return dVar9;
}



//==== 005dd1f4  ns=Global  size=0x184
// sig: undefined FUN_005dd1f4(void)
// callers(1): 004df1c0 FUN_004df1c0
// callees(3): 005dc9a4 mathfunc::fmod; 005dd48c FUN_005dd48c; 005dd4f8 FUN_005dd4f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_005dd1f4(double param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  float fStack00000030;
  
  fStack00000030 = (float)param_1;
  sVar3 = FUN_005dd48c(&stack0x00000030);
  if (sVar3 != 1) {
    if ((sVar3 == 2) || (sVar3 == 0)) {
      dVar5 = (double)fStack00000030;
    }
    else {
      dVar5 = (double)fStack00000030;
      if ((dVar5 < DAT_0071c608) || (DAT_0071c610 < dVar5)) {
        dVar5 = (double)mathfunc::fmod(dVar5,(double)DAT_0071c618);
      }
      fVar2 = (float)(dVar5 * (double)DAT_0071c61c);
      if (fVar2 <= DAT_0071c644) {
        fVar2 = fVar2 - DAT_0071c620;
      }
      else {
        fVar2 = fVar2 + DAT_0071c620;
      }
      uVar4 = (uint)fVar2;
      dVar5 = (double)(float)((double)(longlong)(int)uVar4 * (double)DAT_0071c628 +
                             (double)(float)((double)(longlong)(int)uVar4 * (double)DAT_0071c624 +
                                            dVar5));
      if ((dVar5 <= -(double)*(float *)PTR_DAT_0071c62c) ||
         ((double)*(float *)PTR_DAT_0071c62c <= dVar5)) {
        dVar6 = (double)(float)(dVar5 * dVar5);
        fVar2 = (float)(dVar6 * (double)(float)(dVar6 * (double)DAT_0071c634 - (double)DAT_0071c638)
                       + (double)DAT_0071c63c);
        fVar1 = (float)((double)(float)(dVar5 * dVar6) * (double)DAT_0071c640 + dVar5);
        if ((uVar4 & 1) == 0) {
          dVar5 = (double)(fVar1 / fVar2);
        }
        else {
          dVar5 = (double)(-fVar2 / fVar1);
        }
      }
      else if ((uVar4 & 1) != 0) {
        dVar5 = (double)(float)((double)DAT_0071c630 / dVar5);
      }
    }
    return dVar5;
  }
  FUN_005dd4f8(0x20000000);
  return (double)*(float *)PTR_DAT_0071c600;
}



//==== 005dd378  ns=Global  size=0x114
// sig: undefined FUN_005dd378(void)
// callers(2): 005dc924 FUN_005dc924; 005dcbd8 FUN_005dcbd8
// callees(0): 

undefined4 FUN_005dd378(ushort *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  short sVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  uVar3 = (ulonglong)(uVar1 >> 7) & 0xff;
  if ((int)uVar3 == 0xff) {
    if (((uVar1 & 0x7f) != 0) || (uVar5 = 1, param_1[1] != 0)) {
      return 2;
    }
  }
  else if (((uVar1 & 0x7fff) == 0) && (param_1[1] == 0)) {
    uVar5 = 0;
  }
  else {
    uVar3 = (-param_2 - uVar3) + 0x96;
    sVar4 = (short)uVar3;
    if (0 < sVar4) {
      if (0x17 < sVar4) {
        param_1[1] = 0;
        *param_1 = uVar1 & 0x8000;
        return 0xffffffff;
      }
      uVar1 = param_1[*(int *)(PTR_DAT_0071c648 + ((int)sVar4 >> 4) * 4 + 0x20)];
      uVar2 = *(ushort *)(PTR_DAT_0071c648 + ((uint)((uVar3 & 0xffffffff) << 1) & 0x1e)) & uVar1;
      param_1[*(int *)(PTR_DAT_0071c648 + ((int)sVar4 >> 4) * 4 + 0x20)] = uVar2 ^ uVar1;
      if (0 < (int)sVar4 >> 4) {
        uVar2 = uVar2 | param_1[1];
        param_1[1] = 0;
      }
      if (uVar2 != 0) {
        return 0xffffffff;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



//==== 005dd48c  ns=Global  size=0x6c
// sig: undefined FUN_005dd48c(void)
// callers(6): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 005dc9a4 mathfunc::fmod; 005dd1f4 FUN_005dd1f4; 005dd914 mathfunc::SinCos
// callees(0): 

undefined4 FUN_005dd48c(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x7f80) == 0x7f80) {
    if (((uVar1 & 0x7f) != 0) || (uVar2 = 1, param_1[1] != 0)) {
      return 2;
    }
  }
  else if (((uVar1 & 0x7fff) != 0) || (uVar2 = 0, param_1[1] != 0)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005dd4f8  ns=Global  size=0xb0
// sig: undefined FUN_005dd4f8(void)
// callers(5): 005dc9a4 mathfunc::fmod; 005dcbd8 FUN_005dcbd8; 005dd1f4 FUN_005dd1f4; 005dd718 FUN_005dd718; 005dd914 mathfunc::SinCos
// callees(2): 005d5904 FUN_005d5904; 005ddaec FUN_005ddaec

void FUN_005dd4f8(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 0x18000000) != 0) {
    param_1 = param_1 | 0x2000000;
  }
  FUN_005ddaec(param_1);
  if ((param_1 & 0x24000000) == 0) {
    if ((param_1 & 0x18000000) == 0) {
      return;
    }
    puVar1 = (undefined4 *)FUN_005d5904();
    *puVar1 = 0x8001001c;
    return;
  }
  puVar1 = (undefined4 *)FUN_005d5904();
  *puVar1 = 0x8001001b;
  return;
}



//==== 005dd5a8  ns=Global  size=0x170
// sig: undefined FUN_005dd5a8(void)
// callers(1): 005dcbd8 FUN_005dcbd8
// callees(1): 005e659c FUN_005e659c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 FUN_005dd5a8(double param_1,float *param_2,undefined8 param_3,short param_4)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  double dVar4;
  double dVar5;
  short sStack_1e;
  
  fVar1 = *param_2;
  if (DAT_0071c64c <= fVar1) {
    if (param_1 != (double)DAT_0071c67c) {
      if (DAT_0071c650 < fVar1) {
        *param_2 = *(float *)PTR_DAT_0071c654;
        return 1;
      }
      fVar2 = DAT_0071c65c;
      if ((double)DAT_0071c67c <= (double)(fVar1 * DAT_0071c658)) {
        fVar2 = DAT_0071c660;
      }
      sStack_1e = (short)(int)((double)fVar2 + (double)(fVar1 * DAT_0071c658));
      fVar1 = (float)(longlong)(int)sStack_1e * DAT_0071c668 +
              (float)(longlong)(int)sStack_1e * DAT_0071c664 + fVar1;
      if ((fVar1 <= -*(float *)PTR_DAT_0071c66c) || (*(float *)PTR_DAT_0071c66c <= fVar1)) {
        dVar4 = (double)(fVar1 * fVar1 * DAT_0071c670);
        dVar5 = (double)(fVar1 * (fVar1 * fVar1 * DAT_0071c674 + DAT_0071c660));
        *param_2 = (float)(((dVar4 + dVar5 + (double)DAT_0071c678) /
                           ((dVar4 - dVar5) + (double)DAT_0071c678)) * param_1);
      }
      else {
        *param_2 = (float)param_1;
      }
      uVar3 = FUN_005e659c(param_2,(int)sStack_1e + (int)param_4);
      return uVar3;
    }
    if (DAT_0071c64c <= fVar1) goto LAB_005dd6c8;
  }
  param_1 = (double)DAT_0071c67c;
LAB_005dd6c8:
  *param_2 = (float)param_1;
  return 0;
}



//==== 005dd718  ns=Global  size=0x1fc
// sig: undefined FUN_005dd718(void)
// callers(5): 005dcbd8 FUN_005dcbd8; 006051ac FUN_006051ac; 0062d940 FUN_0062d940; 0062f048 FUN_0062f048; 0062f1f4 989snd::snd_SynthGetVoiceOutputLevel
// callees(2): 005dd4f8 FUN_005dd4f8; 005e6774 FUN_005e6774

double FUN_005dd718(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float fStack00000030;
  short local_30 [20];
  
  fStack00000030 = (float)param_1;
  sVar5 = FUN_005e6774(local_30,&stack0x00000030);
  if (sVar5 == 1) {
    if (((uint)fStack00000030 >> 0x10 & 0x8000) == 0) {
      return (double)fStack00000030;
    }
  }
  else {
    if (sVar5 == 2) {
      return (double)fStack00000030;
    }
    if (sVar5 == 0) {
      FUN_005dd4f8(0x4000000);
      return -(double)*(float *)PTR_DAT_0071c680;
    }
  }
  if (((uint)fStack00000030 >> 0x10 & 0x8000) != 0) {
    FUN_005dd4f8(0x20000000);
    return (double)*(float *)PTR_DAT_0071c684;
  }
  if (fStack00000030 < DAT_0071c688) {
    fStack00000030 = fStack00000030 + fStack00000030;
    local_30[0] = local_30[0] + -1;
  }
  fVar4 = fStack00000030 - DAT_0071c68c;
  fVar3 = (float)(longlong)local_30[0];
  fVar1 = fVar4 / (fStack00000030 + DAT_0071c68c);
  fVar2 = fVar1 * fVar1;
  fVar1 = fVar1 * (fVar4 - fVar2 * (fVar2 * (fVar2 * DAT_0071c690 + DAT_0071c694) + DAT_0071c698));
  if (param_3 != 0) {
    if (param_3 < 1) {
      DAT_0071c6c0 = DAT_0071c6c0;
      DAT_0071c6bc = DAT_0071c6bc;
      DAT_0071c6b8 = DAT_0071c6b8;
      DAT_0071c6b4 = DAT_0071c6b4;
      DAT_0071c6b0 = DAT_0071c6b0;
      DAT_0071c6ac = DAT_0071c6ac;
      DAT_0071c6a8 = DAT_0071c6a8;
      DAT_0071c6a4 = DAT_0071c6a4;
      DAT_0071c6a0 = DAT_0071c6a0;
      DAT_0071c69c = DAT_0071c69c;
      DAT_0071c698 = DAT_0071c698;
      DAT_0071c694 = DAT_0071c694;
      DAT_0071c690 = DAT_0071c690;
      DAT_0071c688 = DAT_0071c688;
      PTR_DAT_0071c684 = PTR_DAT_0071c684;
      PTR_DAT_0071c680 = PTR_DAT_0071c680;
      return (double)(fVar3 + fVar4 * DAT_0071c6b8 + fVar4 * DAT_0071c6bc + fVar1 * DAT_0071c6c0);
    }
    return (double)(fVar3 * DAT_0071c6b4 +
                   fVar4 * DAT_0071c6a4 +
                   (fVar4 * DAT_0071c6a8 - (fVar1 * DAT_0071c6ac + fVar3 * DAT_0071c6b0)));
  }
  return (double)(fVar3 * DAT_0071c6a0 + (fVar4 - (fVar3 * DAT_0071c69c + fVar1)));
}



//==== 005dd914  ns=mathfunc  size=0x1d8
// sig: undefined SinCos(void)
// callers(14): 000109e4 boot::FrontEnd_UpdateSceneCamera; 00066088 draw::ComposeCameraMatrix; 000e9f48 mesh::BuildVerts; 000f31a8 mobyfunc::UpdateMobyTransform; 0011ef18 partproc::DrawParts; 0015aa80 skyfunc::SkySpriteProc; 0015dfe0 space::Space_SetCutsceneCamera; 001683a0 update::UpdateSceneCamera; 0016da88 vendor::Vendor_PreUpdate; 004e2de0 FUN_004e2de0; 00500b64 fastfunc::FastEulerToMtx; 00500ca4 fastfunc::FastEulerToMtx1; 00500e08 fastfunc::FastEulerToMtx2; 005e8c64 FUN_005e8c64
// callees(3): 005dc9a4 mathfunc::fmod; 005dd48c FUN_005dd48c; 005dd4f8 FUN_005dd4f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double mathfunc::SinCos(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  float fStack00000030;
  
  fStack00000030 = (float)param_1;
  sVar2 = FUN_005dd48c(&stack0x00000030);
  if (sVar2 == 1) {
    FUN_005dd4f8(0x20000000);
    return (double)*(float *)PTR_DAT_0071c6cc;
  }
  if (sVar2 != 2) {
    if (sVar2 != 0) {
      dVar4 = (double)fStack00000030;
      if ((dVar4 < DAT_0071c6d0) || (DAT_0071c6d8 < dVar4)) {
        dVar4 = (double)fmod(dVar4,(double)DAT_0071c6e0);
      }
      fVar1 = (float)(dVar4 * (double)DAT_0071c6e4);
      if (fVar1 <= DAT_0071c710) {
        fVar1 = fVar1 - DAT_0071c6e8;
      }
      else {
        fVar1 = fVar1 + DAT_0071c6e8;
      }
      uVar3 = ((int)fVar1 & 3U) + param_3;
      dVar5 = (double)(longlong)(int)fVar1;
      dVar4 = (double)(float)(dVar5 * (double)DAT_0071c6f0 +
                             (double)(float)(dVar5 * (double)DAT_0071c6ec + dVar4));
      if ((dVar4 <= -(double)*(float *)PTR_DAT_0071c6f4) ||
         ((double)*(float *)PTR_DAT_0071c6f4 <= dVar4)) {
        dVar5 = (double)(float)(dVar4 * dVar4);
        if ((uVar3 & 1) == 0) {
          dVar4 = (double)(float)((double)(float)(dVar4 * dVar5) *
                                  (double)(float)(dVar5 * (double)(float)(dVar5 * (double)
                                                  DAT_0071c704 + (double)DAT_0071c708) -
                                                 (double)DAT_0071c70c) + dVar4);
        }
        else {
          dVar4 = (double)(float)(dVar5 * (double)(float)(dVar5 * (double)(float)(dVar5 * (double)
                                                  DAT_0071c6f8 + (double)DAT_0071c6fc) -
                                                  (double)DAT_0071c700) + (double)DAT_0071c6c8);
        }
      }
      else if ((uVar3 & 1) != 0) {
        dVar4 = (double)DAT_0071c6c8;
      }
      if ((uVar3 & 2) == 0) {
        return dVar4;
      }
      return -dVar4;
    }
    if (param_3 != 0) {
      return (double)DAT_0071c6c8;
    }
  }
  return (double)fStack00000030;
}



//==== 005ddaec  ns=Global  size=0xec
// sig: undefined FUN_005ddaec(void)
// callers(1): 005dd4f8 FUN_005dd4f8
// callees(3): 005ddbd8 FUN_005ddbd8; 005ddc14 FUN_005ddc14; 005ddc50 FUN_005ddc50

undefined8 FUN_005ddaec(uint param_1)

{
  uint uVar1;
  uint local_20 [4];
  
  uVar1 = param_1 & 0x3e000000;
  if (uVar1 != 0) {
    if ((param_1 & 0x20000000) == 0) {
      FUN_005ddc50(local_20);
      FUN_005ddc14(local_20);
    }
    else {
      uVar1 = param_1 & 0x1e000000 | 0x400;
      FUN_005ddc50(local_20);
      FUN_005ddc14(local_20);
    }
    if ((local_20[0] & 0xf8) != 0) {
      FUN_005ddbd8(uVar1);
      return 0;
    }
  }
  return 0;
}



//==== 005ddbd8  ns=Global  size=0x3c
// sig: undefined FUN_005ddbd8(void)
// callers(1): 005ddaec FUN_005ddaec
// callees(0): 

double FUN_005ddbd8(uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = 5;
  dVar3 = DAT_0071c718;
  puVar1 = (uint *)PTR_DAT_0071c720;
  do {
    if ((param_1 & *puVar1) != 0) {
      dVar3 = *(double *)(puVar1 + 2) / *(double *)(puVar1 + 4);
    }
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0);
  return dVar3;
}



//==== 005ddc14  ns=Global  size=0x3c
// sig: undefined FUN_005ddc14(void)
// callers(1): 005ddaec FUN_005ddaec
// callees(0): 

undefined8 FUN_005ddc14(void)

{
  return 0;
}



//==== 005ddc50  ns=Global  size=0x18
// sig: undefined FUN_005ddc50(void)
// callers(1): 005ddaec FUN_005ddaec
// callees(0): 

undefined8 FUN_005ddc50(uint *param_1)

{
  byte in_fp_fx;
  byte in_fp_fex;
  byte in_fp_vx;
  byte in_fp_ox;
  byte in_fp_ux;
  byte in_fp_zx;
  byte in_fp_xx;
  byte in_fp_vxsnan;
  byte in_fp_vxisi;
  byte in_fp_vxidi;
  byte in_fp_vxzdz;
  byte in_fp_vximz;
  byte in_fp_vxvc;
  byte in_fp_fr;
  byte in_fp_fi;
  byte in_fp_c;
  byte in_fp_cc0;
  byte in_fp_cc1;
  byte in_fp_cc2;
  byte in_fp_cc3;
  byte in_fp_reserve1;
  byte in_fp_vxsoft;
  byte in_fp_vxsqrt;
  byte in_fp_vxcvi;
  byte in_fp_ve;
  byte in_fp_oe;
  byte in_fp_ue;
  byte in_fp_ze;
  byte in_fp_xe;
  byte in_fp_ni;
  byte in_fp_rn0;
  byte in_fp_rn1;
  
  *param_1 = in_fp_rn1 & 1 | (uint)in_fp_fx << 0x1f | (in_fp_fex & 1) << 0x1e |
             (in_fp_vx & 1) << 0x1d | (in_fp_ox & 1) << 0x1c | (in_fp_ux & 1) << 0x1b |
             (in_fp_zx & 1) << 0x1a | (in_fp_xx & 1) << 0x19 | (in_fp_vxsnan & 1) << 0x18 |
             (in_fp_vxisi & 1) << 0x17 | (in_fp_vxidi & 1) << 0x16 | (in_fp_vxzdz & 1) << 0x15 |
             (in_fp_vximz & 1) << 0x14 | (in_fp_vxvc & 1) << 0x13 | (in_fp_fr & 1) << 0x12 |
             (in_fp_fi & 1) << 0x11 | (in_fp_c & 1) << 0x10 | (in_fp_cc0 & 1) << 0xf |
             (in_fp_cc1 & 1) << 0xe | (in_fp_cc2 & 1) << 0xd | (in_fp_cc3 & 1) << 0xc |
             (in_fp_reserve1 & 1) << 0xb | (in_fp_vxsoft & 1) << 10 | (in_fp_vxsqrt & 1) << 9 |
             (in_fp_vxcvi & 1) << 8 | (in_fp_ve & 1) << 7 | (in_fp_oe & 1) << 6 |
             (in_fp_ue & 1) << 5 | (in_fp_ze & 1) << 4 | (in_fp_xe & 1) << 3 | (in_fp_ni & 1) << 2 |
             (in_fp_rn0 & 1) << 1;
  return 0;
}



//==== 005ddc68  ns=Global  size=0x38
// sig: undefined FUN_005ddc68(void)
// callers(3): 005de35c FUN_005de35c; 005deaa8 FUN_005deaa8; 005dfa80 FUN_005dfa80
// callees(0): 

byte * FUN_005ddc68(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return param_1;
}



//==== 005ddca0  ns=Global  size=0x58
// sig: undefined FUN_005ddca0(void)
// callers(1): 005deaa8 FUN_005deaa8
// callees(0): 

byte * FUN_005ddca0(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0xffffffff) < 0x40) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1L << (uVar4 & 0x7f);
  }
  *param_2 = uVar3;
  return param_1;
}



//==== 005ddcf8  ns=Global  size=0x8
// sig: undefined FUN_005ddcf8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005ddcf8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x248);
}



//==== 005ddd00  ns=Global  size=0x8
// sig: undefined FUN_005ddd00(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005ddd00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24c);
}



//==== 005ddd08  ns=Global  size=0x8
// sig: undefined FUN_005ddd08(void)
// callers(0): 
// callees(0): 

void FUN_005ddd08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  return;
}



//==== 005ddd10  ns=Global  size=0x8
// sig: undefined FUN_005ddd10(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005ddd10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x250);
}



//==== 005ddd18  ns=Global  size=0x8
// sig: undefined FUN_005ddd18(void)
// callers(3): 005de08c FUN_005de08c; 005e5688 FUN_005e5688; 005e5738 FUN_005e5738
// callees(0): 

undefined4 FUN_005ddd18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x25c);
}



//==== 005ddd20  ns=Global  size=0x8
// sig: undefined FUN_005ddd20(void)
// callers(2): 005de08c FUN_005de08c; 005e5688 FUN_005e5688
// callees(0): 

undefined4 FUN_005ddd20(int param_1)

{
  return *(undefined4 *)(param_1 + 600);
}



//==== 005ddd28  ns=Global  size=0x8
// sig: undefined FUN_005ddd28(void)
// callers(2): 005de08c FUN_005de08c; 005e5688 FUN_005e5688
// callees(0): 

undefined4 FUN_005ddd28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x254);
}



//==== 005ddd30  ns=Global  size=0x50
// sig: undefined FUN_005ddd30(void)
// callers(2): 005e5ecc FUN_005e5ecc; 005e60a8 FUN_005e60a8
// callees(0): 

void FUN_005ddd30(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 8))(1,param_1);
  }
  return;
}



//==== 005ddd80  ns=Global  size=0x80
// sig: undefined FUN_005ddd80(void)
// callers(0): 
// callees(1): 005c4840 idol::abort

void FUN_005ddd80(int param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  int unaff_r2;
  
  if (0x4b0 < (int)param_2) {
    param_2 = param_2 - 0x43f;
  }
  if ((int)param_2 < 0x92) {
    cVar1 = *(char *)(*(int *)(unaff_r2 + -0x5c00) + (int)param_2);
    puVar2 = *(undefined8 **)(param_1 + (int)((param_2 & 0xffffffff) << 2));
    if (cVar1 == '\x04') {
      *(int *)puVar2 = (int)param_3;
      return;
    }
    if (cVar1 == '\b') {
      *puVar2 = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005dde04  ns=Global  size=0x80
// sig: undefined FUN_005dde04(void)
// callers(0): 
// callees(1): 005c4840 idol::abort

ulonglong FUN_005dde04(int param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  if (0x4b0 < (int)param_2) {
    param_2 = param_2 - 0x43f;
  }
  if ((int)param_2 < 0x92) {
    puVar1 = *(ulonglong **)(param_1 + (int)((param_2 & 0xffffffff) << 2));
    if (PTR_DAT_0071c728[(int)param_2] == '\x04') {
      return (ulonglong)*(uint *)puVar1;
    }
    if (PTR_DAT_0071c728[(int)param_2] == '\b') {
      return *puVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005dde88  ns=Global  size=0xa8
// sig: undefined FUN_005dde88(void)
// callers(1): 005deaa8 FUN_005deaa8
// callees(1): 005c4840 idol::abort

undefined4 * FUN_005dde88(ulonglong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (((uint)param_1 & 0xff) == 0x50) {
    puVar1 = (undefined4 *)(param_3 + 3U & 0xfffffffc);
    *param_4 = *puVar1;
    return puVar1 + 1;
  }
  if (0xc < (param_1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    idol::abort();
  }
                    /* WARNING: Could not recover jumptable at 0x005ddef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined4 *)
           (*(code *)(PTR_DAT_0071c72c + *(int *)(PTR_DAT_0071c72c + (int)((param_1 & 0xf) << 2))))
                     ();
  return puVar1;
}



//==== 005de08c  ns=Global  size=0xac
// sig: undefined FUN_005de08c(void)
// callers(1): 005deaa8 FUN_005deaa8
// callees(4): 005c4840 idol::abort; 005ddd18 FUN_005ddd18; 005ddd20 FUN_005ddd20; 005ddd28 FUN_005ddd28

undefined4 FUN_005de08c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      uVar1 = FUN_005ddd28(param_2);
      return uVar1;
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) goto LAB_005de0c8;
    }
    else {
      if (param_1 == 0x40) {
        uVar1 = FUN_005ddd18(param_2);
        return uVar1;
      }
      if (param_1 != 0x50) {
        if (param_1 == 0x30) {
          uVar1 = FUN_005ddd20(param_2);
          return uVar1;
        }
LAB_005de0c8:
                    /* WARNING: Subroutine does not return */
        idol::abort();
      }
    }
  }
  return 0;
}



//==== 005de13c  ns=Global  size=0x1dc
// sig: undefined FUN_005de13c(void)
// callers(0): 
// callees(0): 

void FUN_005de13c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c728;
  *PTR_DAT_0071c728 = 8;
  puVar1[1] = 8;
  puVar1[2] = 8;
  puVar1[3] = 8;
  puVar1[4] = 8;
  puVar1[5] = 8;
  puVar1[6] = 8;
  puVar1[7] = 8;
  puVar1[8] = 8;
  puVar1[9] = 8;
  puVar1[10] = 8;
  puVar1[0xb] = 8;
  puVar1[0xc] = 8;
  puVar1[0xd] = 8;
  puVar1[0xe] = 8;
  puVar1[0xf] = 8;
  puVar1[0x10] = 8;
  puVar1[0x11] = 8;
  puVar1[0x12] = 8;
  puVar1[0x13] = 8;
  puVar1[0x14] = 8;
  puVar1[0x15] = 8;
  puVar1[0x16] = 8;
  puVar1[0x17] = 8;
  puVar1[0x18] = 8;
  puVar1[0x19] = 8;
  puVar1[0x1a] = 8;
  puVar1[0x1b] = 8;
  puVar1[0x1c] = 8;
  puVar1[0x1d] = 8;
  puVar1[0x1e] = 8;
  puVar1[0x1f] = 8;
  puVar1[0x20] = 8;
  puVar1[0x21] = 8;
  puVar1[0x22] = 8;
  puVar1[0x23] = 8;
  puVar1[0x24] = 8;
  puVar1[0x25] = 8;
  puVar1[0x26] = 8;
  puVar1[0x27] = 8;
  puVar1[0x28] = 8;
  puVar1[0x29] = 8;
  puVar1[0x2a] = 8;
  puVar1[0x2b] = 8;
  puVar1[0x2c] = 8;
  puVar1[0x2d] = 8;
  puVar1[0x2e] = 8;
  puVar1[0x2f] = 8;
  puVar1[0x30] = 8;
  puVar1[0x31] = 8;
  puVar1[0x32] = 8;
  puVar1[0x33] = 8;
  puVar1[0x34] = 8;
  puVar1[0x35] = 8;
  puVar1[0x36] = 8;
  puVar1[0x37] = 8;
  puVar1[0x38] = 8;
  puVar1[0x39] = 8;
  puVar1[0x3a] = 8;
  puVar1[0x3b] = 8;
  puVar1[0x3c] = 8;
  puVar1[0x3d] = 8;
  puVar1[0x3e] = 8;
  puVar1[0x3f] = 8;
  puVar1[0x40] = 8;
  puVar1[0x41] = 8;
  puVar1[0x42] = 8;
  puVar1[0x4c] = 4;
  puVar1[0x43] = 8;
  puVar1[0x44] = 4;
  puVar1[0x45] = 4;
  puVar1[0x46] = 4;
  puVar1[0x47] = 4;
  puVar1[0x48] = 4;
  puVar1[0x49] = 4;
  puVar1[0x4a] = 4;
  puVar1[0x4b] = 4;
  puVar1[0x4d] = 0x10;
  puVar1[0x4e] = 0x10;
  puVar1[0x4f] = 0x10;
  puVar1[0x50] = 0x10;
  puVar1[0x51] = 0x10;
  puVar1[0x52] = 0x10;
  puVar1[0x53] = 0x10;
  puVar1[0x54] = 0x10;
  puVar1[0x55] = 0x10;
  puVar1[0x56] = 0x10;
  puVar1[0x57] = 0x10;
  puVar1[0x58] = 0x10;
  puVar1[0x59] = 0x10;
  puVar1[0x5a] = 0x10;
  puVar1[0x5b] = 0x10;
  puVar1[0x5c] = 0x10;
  puVar1[0x5d] = 0x10;
  puVar1[0x5e] = 0x10;
  puVar1[0x5f] = 0x10;
  puVar1[0x60] = 0x10;
  puVar1[0x61] = 0x10;
  puVar1[0x62] = 0x10;
  puVar1[99] = 0x10;
  puVar1[100] = 0x10;
  puVar1[0x71] = 8;
  puVar1[0x6c] = 0x10;
  puVar1[0x65] = 0x10;
  puVar1[0x66] = 0x10;
  puVar1[0x67] = 0x10;
  puVar1[0x68] = 0x10;
  puVar1[0x69] = 0x10;
  puVar1[0x6a] = 0x10;
  puVar1[0x6b] = 0x10;
  puVar1[0x6d] = 8;
  puVar1[0x6e] = 8;
  puVar1[0x6f] = 8;
  puVar1[0x70] = 8;
  return;
}



//==== 005de318  ns=Global  size=0x44
// sig: undefined FUN_005de318(void)
// callers(0): 
// callees(1): 005e2adc FUN_005e2adc

undefined4 FUN_005de318(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  undefined4 local_8;
  
  iVar1 = FUN_005e2adc(param_1 + -1,auStack_10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8;
  }
  return uVar2;
}



//==== 005de35c  ns=Global  size=0x1f0
// sig: undefined FUN_005de35c(void)
// callers(1): 005deaa8 FUN_005deaa8
// callees(2): 005c4840 idol::abort; 005ddc68 FUN_005ddc68
// strings: 005de644: 'U) 68' (raw)

void FUN_005de35c(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_68 [3];
  
  *(undefined4 *)(param_4 + 0x920) = 0;
  if ((param_1 < param_2) &&
     (uVar5 = *(uint *)(param_4 + 0x940), uVar5 < *(uint *)(param_3 + 0x24c))) {
    do {
      pbVar3 = param_1 + 1;
      bVar1 = *param_1;
      bVar2 = bVar1 & 0xc0;
      if (bVar2 == 0x40) {
        *(uint *)(param_4 + 0x940) = uVar5 + (bVar1 & 0x3f) * (int)*(undefined8 *)(param_4 + 0x950);
      }
      else if (bVar2 == 0x80) {
        uVar6 = (ulonglong)bVar1 & 0x3f;
        pbVar3 = (byte *)FUN_005ddc68(pbVar3,local_68);
        lVar4 = *(longlong *)(param_4 + 0x948);
        uVar7 = uVar6;
        if (0x4b0 < uVar6) {
          uVar7 = uVar6 - 0x43f;
        }
        *(undefined4 *)(param_4 + (int)((uVar7 & 0xffffffff) << 4) + 8) = 1;
        if (0x4b0 < uVar6) {
          uVar6 = uVar6 - 0x43f;
        }
        *(longlong *)(param_4 + (int)((uVar6 & 0xffffffff) << 4)) = local_68[0] * lVar4;
      }
      else {
        if (bVar2 != 0xc0) {
          if (0x2f < bVar1) {
                    /* WARNING: Subroutine does not return */
            idol::abort();
          }
                    /* WARNING: Could not recover jumptable at 0x005de41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(PTR_DAT_0071c730 + *(int *)(PTR_DAT_0071c730 + (uint)bVar1 * 4)))();
          return;
        }
        uVar7 = (ulonglong)bVar1 & 0x3f;
        if (uVar7 < 0x4b1) {
          *(undefined4 *)(param_4 + (int)(uVar7 << 4) + 8) = 0;
        }
        else {
          *(undefined4 *)(param_4 + (int)(uVar7 - 0x43f) * 0x10 + 8) = 0;
        }
      }
    } while ((pbVar3 < param_2) &&
            (uVar5 = *(uint *)(param_4 + 0x940), param_1 = pbVar3,
            uVar5 < *(uint *)(param_3 + 0x24c)));
  }
  return;
}



//==== 005deaa8  ns=Global  size=0x40c
// sig: undefined FUN_005deaa8(void)
// callers(6): 005deeb8 FUN_005deeb8; 005dfd88 FUN_005dfd88; 005e02e0 FUN_005e02e0; 005e050c FUN_005e050c; 005e061c FUN_005e061c; 005e0918 FUN_005e0918
// callees(9): 005c4840 idol::abort; 005c8510 libc::strlen; 005d0140 libc::memset; 005ddc68 FUN_005ddc68; 005ddca0 FUN_005ddca0; 005dde88 FUN_005dde88; 005de08c FUN_005de08c; 005de35c FUN_005de35c; 005e2adc FUN_005e2adc

undefined8 FUN_005deaa8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar10;
  int iVar8;
  int *piVar9;
  char *__s;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  undefined4 local_70 [2];
  undefined8 local_68;
  
  libc::memset(param_2,0,0x968);
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  if ((*(int *)(param_1 + 0x24c) == 0) ||
     (piVar3 = (int *)FUN_005e2adc(*(int *)(param_1 + 0x24c) + -1,param_1 + 0x254),
     piVar3 == (int *)0x0)) {
    return 5;
  }
  piVar9 = (int *)((int)piVar3 + (4 - piVar3[1]));
  *(undefined4 *)(param_2 + 0x940) = *(undefined4 *)(param_1 + 0x25c);
  __s = (char *)((int)piVar9 + 9);
  sVar4 = libc::strlen(__s);
  pbVar7 = (byte *)(__s + sVar4 + 1);
  pcVar11 = __s;
  pbVar6 = pbVar7;
  if ((*__s == 'e') && (*(char *)((int)piVar9 + 10) == 'h')) {
    pbVar6 = (byte *)(__s + sVar4 + 5);
    pcVar11 = (char *)((int)piVar9 + 0xb);
    *(uint *)(param_2 + 0x964) =
         (uint)(byte)__s[sVar4 + 4] |
         (uint)(byte)__s[sVar4 + 3] << 8 |
         (uint)(byte)__s[sVar4 + 2] << 0x10 | (uint)*pbVar7 << 0x18;
  }
  uVar5 = FUN_005ddc68(pbVar6,param_2 + 0x950);
  pbVar6 = (byte *)FUN_005ddca0(uVar5,param_2 + 0x948);
  if (*(char *)(piVar9 + 2) == '\x01') {
    pbVar7 = pbVar6 + 1;
    *(ulonglong *)(param_2 + 0x958) = (ulonglong)*pbVar6;
    *(undefined1 *)(param_2 + 0x961) = 0xff;
    cVar10 = *pcVar11;
  }
  else {
    pbVar7 = (byte *)FUN_005ddc68(pbVar6,param_2 + 0x958);
    *(undefined1 *)(param_2 + 0x961) = 0xff;
    cVar10 = *pcVar11;
  }
  pbVar6 = (byte *)0x0;
  if (cVar10 == 'z') {
    pcVar11 = pcVar11 + 1;
    pbVar7 = (byte *)FUN_005ddc68(pbVar7,&local_68);
    pbVar6 = pbVar7 + local_68._4_4_;
    *(undefined1 *)(param_2 + 0x962) = 1;
  }
LAB_005debe4:
  cVar10 = *pcVar11;
  pbVar13 = pbVar7;
  if (cVar10 != '\0') {
    while (cVar10 != 'L') {
      if (cVar10 == 'R') {
        pcVar11 = pcVar11 + 1;
        pbVar7 = pbVar13 + 1;
        *(byte *)(param_2 + 0x960) = *pbVar13;
        goto LAB_005debe4;
      }
      pbVar7 = pbVar6;
      if (cVar10 != 'P') goto LAB_005ded34;
      bVar1 = *pbVar13;
      pcVar11 = pcVar11 + 1;
      uVar5 = FUN_005de08c(bVar1,param_1);
      pbVar7 = (byte *)FUN_005dde88(bVar1,uVar5,pbVar13 + 1,local_70);
      *(undefined4 *)(param_2 + 0x944) = local_70[0];
      cVar10 = *pcVar11;
      pbVar13 = pbVar7;
      if (cVar10 == '\0') goto LAB_005dec50;
    }
    pcVar11 = pcVar11 + 1;
    pbVar7 = pbVar13 + 1;
    *(byte *)(param_2 + 0x961) = *pbVar13;
    goto LAB_005debe4;
  }
LAB_005dec50:
  if (pbVar6 == (byte *)0x0) {
LAB_005ded34:
    pbVar6 = pbVar7;
    if (pbVar7 == (byte *)0x0) {
      return 3;
    }
  }
  FUN_005de35c(pbVar6,(int)piVar9 + *piVar9 + 4,param_1,param_2);
  bVar1 = *(byte *)(param_2 + 0x960);
  if (bVar1 == 0xff) {
    iVar8 = 0;
  }
  else {
    bVar2 = bVar1 & 7;
    if (bVar2 != 2) {
      if (bVar2 < 3) {
        if ((bVar1 & 7) != 0) {
LAB_005deca8:
                    /* WARNING: Subroutine does not return */
          idol::abort();
        }
      }
      else if (bVar2 != 3) {
        if (bVar2 != 4) goto LAB_005deca8;
        iVar8 = 0x10;
        goto LAB_005deddc;
      }
      cVar10 = *(char *)(param_2 + 0x962);
      piVar9 = piVar3 + 4;
      goto joined_r0x005dedf0;
    }
    iVar8 = 4;
  }
LAB_005deddc:
  cVar10 = *(char *)(param_2 + 0x962);
  piVar9 = (int *)((int)piVar3 + iVar8 + 8);
joined_r0x005dedf0:
  piVar12 = (int *)0x0;
  if (cVar10 != '\0') {
    piVar9 = (int *)FUN_005ddc68(piVar9,&local_68);
    piVar12 = (int *)((int)piVar9 + local_68._4_4_);
  }
  cVar10 = *(char *)(param_2 + 0x961);
  if (cVar10 != -1) {
    uVar5 = FUN_005de08c(cVar10,param_1);
    piVar9 = (int *)FUN_005dde88(cVar10,uVar5,piVar9,local_70);
    *(undefined4 *)(param_1 + 0x250) = local_70[0];
  }
  if (piVar12 == (int *)0x0) {
    piVar12 = piVar9;
  }
  FUN_005de35c(piVar12,(int)piVar3 + *piVar3 + 4,param_1,param_2);
  return 0;
}



//==== 005deeb8  ns=Global  size=0x134
// sig: undefined FUN_005deeb8(void)
// callers(0): 
// callees(2): 005d0140 libc::memset; 005deaa8 FUN_005deaa8

int FUN_005deeb8(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_bf0 [612];
  undefined4 uStack_98c;
  undefined8 uStack_988;
  undefined4 auStack_980 [585];
  undefined4 uStack_5c;
  undefined2 uStack_52;
  int local_4c;
  undefined2 uStack_2a;
  undefined4 local_24;
  
  libc::memset(auStack_bf0,0,0x268);
  iVar3 = FUN_005deaa8(auStack_bf0,&uStack_988);
  if ((iVar3 == 0) && (local_4c != 2)) {
    pcVar4 = (char *)(param_2 + 0x14c);
    lVar6 = 0x4e;
    puVar5 = (undefined4 *)(param_2 + 0x10);
    iVar3 = 0;
    do {
      puVar1 = (undefined8 *)((int)&uStack_988 + iVar3);
      cVar2 = (char)*(undefined4 *)((int)auStack_980 + iVar3);
      *pcVar4 = cVar2;
      if (cVar2 == '\x01') {
        *puVar5 = (int)*puVar1;
      }
      else if (cVar2 == '\x02') {
        *puVar5 = (int)*puVar1;
      }
      else {
        *puVar5 = 0;
      }
      iVar3 = iVar3 + 0x10;
      pcVar4 = pcVar4 + 1;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined4 *)(param_2 + 8) = uStack_5c;
    *(undefined2 *)(param_2 + 0x148) = uStack_52;
    *(undefined2 *)(param_2 + 0x14a) = uStack_2a;
    *(undefined4 *)(param_2 + 0xc) = uStack_98c;
    *(undefined4 *)(param_2 + 4) = local_24;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



//==== 005defec  ns=Global  size=0xa8
// sig: undefined FUN_005defec(void)
// callers(1): 005dfa80 FUN_005dfa80
// callees(1): 005c4840 idol::abort

undefined8 FUN_005defec(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 <= param_1) {
    return param_4;
  }
  if ((byte)(*param_1 - 3U) < 0x94) {
                    /* WARNING: Could not recover jumptable at 0x005df05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071c734 +
                      *(int *)(PTR_DAT_0071c734 + (uint)(byte)(*param_1 - 3) * 4)))();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort(param_1 + 1);
}



//==== 005dfa80  ns=Global  size=0x304
// sig: undefined FUN_005dfa80(void)
// callers(2): 005dfd88 FUN_005dfd88; 005e0220 FUN_005e0220
// callees(4): 005c4840 idol::abort; 005c5ad0 libc::memcpy; 005ddc68 FUN_005ddc68; 005defec FUN_005defec

void FUN_005dfa80(void *param_1,int param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  void *pvVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong local_2d0;
  longlong local_2c8;
  ulonglong *apuStack_2c0 [156];
  
  pvVar5 = libc::memcpy(apuStack_2c0,param_1,0x268);
  uVar4 = (ulonglong)(int)pvVar5;
  if (apuStack_2c0[1] == (ulonglong *)0x0) {
    if (PTR_DAT_0071c728[1] == '\x04') {
      local_2d0 = CONCAT44(*(uint *)((int)param_1 + 0x248),local_2d0._4_4_);
    }
    else {
      if (PTR_DAT_0071c728[1] != '\b') goto LAB_005dfb04;
      local_2d0 = (ulonglong)*(uint *)((int)param_1 + 0x248);
    }
    apuStack_2c0[1] = &local_2d0;
  }
  iVar10 = *(int *)(param_2 + 0x93c);
  *(undefined4 *)((int)param_1 + 4) = 0;
  if (iVar10 == 1) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x934);
    if (0x4b0 < (int)*(uint *)(param_2 + 0x934)) {
      uVar6 = uVar6 - 0x43f;
    }
    if (0x91 < (int)uVar6) goto LAB_005dfb04;
    puVar2 = *(ulonglong **)((int)apuStack_2c0 + (int)((uVar6 & 0xffffffff) << 2));
    if (PTR_DAT_0071c728[(int)uVar6] == '\x04') {
      uVar4 = (ulonglong)*(uint *)puVar2;
    }
    else {
      if (PTR_DAT_0071c728[(int)uVar6] != '\b') goto LAB_005dfb04;
      uVar4 = *puVar2;
    }
    uVar6 = uVar4 + *(longlong *)(param_2 + 0x928);
  }
  else {
    if (iVar10 != 2) goto LAB_005dfb04;
    uVar4 = FUN_005ddc68(*(undefined4 *)(param_2 + 0x938),&local_2c8);
    uVar4 = FUN_005defec(uVar4 & 0xffffffff,uVar4 + local_2c8 & 0xffffffff,apuStack_2c0,0);
    uVar6 = uVar4;
  }
  iVar11 = 0;
  iVar10 = 0;
  *(int *)((int)param_1 + 0x248) = (int)uVar6;
  do {
    while( true ) {
      puVar3 = (undefined8 *)(param_2 + iVar11);
      iVar7 = *(int *)(puVar3 + 1);
      if (iVar7 != 2) break;
      iVar7 = *(int *)((int)puVar3 + 4);
      if (0x4b0 < iVar7) {
        iVar7 = iVar7 + -0x43f;
      }
      puVar9 = (undefined4 *)(iVar10 + (int)param_1);
      bVar1 = iVar11 == 0x910;
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 0x10;
      *puVar9 = apuStack_2c0[iVar7];
      if (bVar1) goto LAB_005dfbe4;
    }
    if (iVar7 == 3) {
      uVar4 = FUN_005ddc68(*(undefined4 *)puVar3,&local_2c8);
      uVar4 = FUN_005defec(uVar4 & 0xffffffff,uVar4 + local_2c8 & 0xffffffff,apuStack_2c0,
                           uVar6 & 0xffffffff);
      *(int *)(iVar10 + (int)param_1) = (int)uVar4;
    }
    else if (iVar7 == 1) {
      *(int *)(iVar10 + (int)param_1) = (int)uVar6 + (int)*puVar3;
    }
    bVar1 = iVar11 != 0x910;
    iVar10 = iVar10 + 4;
    iVar11 = iVar11 + 0x10;
  } while (bVar1);
LAB_005dfbe4:
  if (*(int *)(param_2 + 0x28) == 0) {
    if (PTR_DAT_0071c728[0x41] == '\x04') {
      piVar8 = *(int **)*(undefined8 **)((int)param_1 + 0x104);
    }
    else {
      if (PTR_DAT_0071c728[0x41] != '\b') {
LAB_005dfb04:
                    /* WARNING: Subroutine does not return */
        idol::abort(uVar4);
      }
      piVar8 = (int *)**(undefined8 **)((int)param_1 + 0x104);
    }
    if (*piVar8 == -0x17beffd8) {
      *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 0x248) + 0x28;
      return;
    }
  }
  return;
}



//==== 005dfd88  ns=Global  size=0x2f0
// sig: undefined FUN_005dfd88(void)
// callers(5): 005e02e0 FUN_005e02e0; 005e061c FUN_005e061c; 005e0a54 FUN_005e0a54; 005e0c94 FUN_005e0c94; 005e0ed4 FUN_005e0ed4
// callees(5): 005c4840 idol::abort; 005d0140 libc::memset; 005deaa8 FUN_005deaa8; 005dfa80 FUN_005dfa80; 005e30a8 FUN_005e30a8

void FUN_005dfd88(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_LR;
  ulonglong local_9a0;
  undefined1 auStack_998 [2344];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  
  libc::memset(param_1,0,0x268);
  *(undefined4 *)(param_1 + 0x24c) = in_LR;
  iVar3 = FUN_005deaa8(param_1,auStack_998);
  puVar2 = PTR_DAT_0071c728;
  if (iVar3 == 0) {
    iVar3 = FUN_005e30a8(PTR_DAT_0071c728 + 0x94,PTR_PTR_0071c73c);
    if ((iVar3 == 0) && (*puVar2 != '\0')) {
      cVar1 = puVar2[1];
    }
    else {
      *puVar2 = 8;
      puVar2[1] = 8;
      puVar2[2] = 8;
      puVar2[3] = 8;
      puVar2[4] = 8;
      puVar2[5] = 8;
      puVar2[6] = 8;
      puVar2[7] = 8;
      puVar2[8] = 8;
      puVar2[9] = 8;
      puVar2[10] = 8;
      puVar2[0xb] = 8;
      puVar2[0xc] = 8;
      puVar2[0xd] = 8;
      puVar2[0xe] = 8;
      puVar2[0xf] = 8;
      puVar2[0x10] = 8;
      puVar2[0x11] = 8;
      puVar2[0x12] = 8;
      puVar2[0x13] = 8;
      puVar2[0x14] = 8;
      puVar2[0x15] = 8;
      puVar2[0x16] = 8;
      puVar2[0x17] = 8;
      puVar2[0x18] = 8;
      puVar2[0x19] = 8;
      puVar2[0x1a] = 8;
      puVar2[0x1b] = 8;
      puVar2[0x1c] = 8;
      puVar2[0x1d] = 8;
      puVar2[0x1e] = 8;
      puVar2[0x1f] = 8;
      puVar2[0x20] = 8;
      puVar2[0x21] = 8;
      puVar2[0x22] = 8;
      puVar2[0x23] = 8;
      puVar2[0x24] = 8;
      puVar2[0x25] = 8;
      puVar2[0x26] = 8;
      puVar2[0x27] = 8;
      puVar2[0x28] = 8;
      puVar2[0x29] = 8;
      puVar2[0x2a] = 8;
      puVar2[0x2b] = 8;
      puVar2[0x2c] = 8;
      puVar2[0x2d] = 8;
      puVar2[0x2e] = 8;
      puVar2[0x2f] = 8;
      puVar2[0x30] = 8;
      puVar2[0x31] = 8;
      puVar2[0x32] = 8;
      puVar2[0x33] = 8;
      puVar2[0x34] = 8;
      puVar2[0x35] = 8;
      puVar2[0x36] = 8;
      puVar2[0x37] = 8;
      puVar2[0x38] = 8;
      puVar2[0x39] = 8;
      puVar2[0x3a] = 8;
      puVar2[0x3b] = 8;
      puVar2[0x3c] = 8;
      puVar2[0x3d] = 8;
      puVar2[0x3e] = 8;
      puVar2[0x3f] = 8;
      puVar2[0x40] = 8;
      puVar2[0x41] = 8;
      puVar2[0x42] = 8;
      puVar2[0x43] = 8;
      puVar2[0x4c] = 4;
      puVar2[0x44] = 4;
      puVar2[0x45] = 4;
      puVar2[0x46] = 4;
      puVar2[0x47] = 4;
      puVar2[0x48] = 4;
      puVar2[0x49] = 4;
      puVar2[0x4a] = 4;
      puVar2[0x4b] = 4;
      puVar2[0x4d] = 0x10;
      puVar2[0x4e] = 0x10;
      puVar2[0x4f] = 0x10;
      puVar2[0x50] = 0x10;
      puVar2[0x51] = 0x10;
      puVar2[0x52] = 0x10;
      puVar2[0x53] = 0x10;
      puVar2[0x54] = 0x10;
      puVar2[0x55] = 0x10;
      puVar2[0x56] = 0x10;
      puVar2[0x57] = 0x10;
      puVar2[0x58] = 0x10;
      puVar2[0x59] = 0x10;
      puVar2[0x5a] = 0x10;
      puVar2[0x5b] = 0x10;
      puVar2[0x5c] = 0x10;
      puVar2[0x5d] = 0x10;
      puVar2[0x5e] = 0x10;
      puVar2[0x5f] = 0x10;
      puVar2[0x60] = 0x10;
      puVar2[0x61] = 0x10;
      puVar2[0x62] = 0x10;
      puVar2[99] = 0x10;
      puVar2[100] = 0x10;
      puVar2[0x65] = 0x10;
      cVar1 = puVar2[1];
      puVar2[0x6c] = 0x10;
      puVar2[0x71] = 8;
      puVar2[0x66] = 0x10;
      puVar2[0x67] = 0x10;
      puVar2[0x68] = 0x10;
      puVar2[0x69] = 0x10;
      puVar2[0x6a] = 0x10;
      puVar2[0x6b] = 0x10;
      puVar2[0x6d] = 8;
      puVar2[0x6e] = 8;
      puVar2[0x6f] = 8;
      puVar2[0x70] = 8;
    }
    if (cVar1 == '\x04') {
      local_9a0 = CONCAT44(param_2,local_9a0._4_4_);
    }
    else {
      if (cVar1 != '\b') goto LAB_005e0074;
      local_9a0 = (ulonglong)param_2;
    }
    *(ulonglong **)(param_1 + 4) = &local_9a0;
    local_5c = 1;
    local_68 = 1;
    local_70 = 0;
    FUN_005dfa80(param_1,auStack_998);
    *(undefined4 *)(param_1 + 0x24c) = param_3;
    return;
  }
LAB_005e0074:
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



