// sdk/libc/xlv2tls.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x5d05f4-0x5d0d68
#include <stdlib.h>
#include "sdk/libc/xlv2tls.h"
#include "sdk/libc/xlv2mtx.h"
#include "sdk/mUnk3.h"
#include "sdk/sys.h"

// SDK libc.a(xlv2tls.o): _Tlsfree  [fuzzy 0.927 match]
// 0x05d05f4 (0xac bytes)
undefined4 FUN_005d05f4(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c424;
  if (0x31 < param_1) {
    return 1;
  }
  iVar2 = sys_lwmutex_lock(PTR_DAT_0071c424,0);
  if (iVar2 == 0) {
    puVar1[param_1 * 8 + 0x18] = 0;
    if ((int)param_1 < *(int *)(puVar1 + 0x1a8)) {
      *(uint *)(puVar1 + 0x1a8) = param_1;
    }
    iVar2 = sys_lwmutex_unlock(puVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(xlv2tls.o): TlsGetValue  [fuzzy 0.906 match]
// 0x05d06a4 (0xbc bytes)
int FUN_005d06a4(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iStack_64;
  longlong local_20 [2];
  
  sys_ppu_thread_get_id(local_20);
  iVar4 = *(int *)(iStack_64 + -0x5f04);
  iVar3 = sys_lwmutex_lock(iVar4,0);
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
    iVar4 = sys_lwmutex_unlock(iVar4);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(xlv2tls.o): _Destroytls  [fuzzy 1.000 match]
// 0x05d0764 (0xf0 bytes)
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


// 0x05d0854 (0xf0 bytes)
int FUN_005d0854(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iStack_64;
  longlong local_20 [2];
  
  sys_ppu_thread_get_id(local_20);
  if ((0x31 < param_1) ||
     (iVar4 = *(int *)(iStack_64 + -0x5f04), *(char *)(param_1 * 8 + iVar4 + 0x18) == '\0')) {
    return 0;
  }
  iVar3 = sys_lwmutex_lock(iVar4,0);
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
    iVar4 = sys_lwmutex_unlock(iVar4);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(xlv2tls.o): TlsSetValue  [fuzzy 0.929 match]
// 0x05d0948 (0xf0 bytes)
undefined4 FUN_005d0948(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iStack_84;
  undefined8 local_40 [3];
  
  sys_ppu_thread_get_id(local_40);
  puVar1 = (undefined4 *)FUN_005d5838(0xd8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(iStack_84 + -0x5f04);
  iVar2 = sys_lwmutex_lock(iVar3,0);
  if (iVar2 == 0) {
    *puVar1 = *(undefined4 *)(iVar3 + 0x1ac);
    *(undefined8 *)(puVar1 + 2) = local_40[0];
    puVar1[4] = param_1;
    *(undefined4 **)(iVar3 + 0x1ac) = puVar1;
    iVar3 = sys_lwmutex_unlock(iVar3);
    if (iVar3 == 0) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(xlv2tls.o): _Tlsset  [fuzzy 0.947 match]
// 0x05d0a3c (0x140 bytes)
undefined4 FUN_005d0a3c(uint param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_74;
  longlong local_30 [3];
  
  sys_ppu_thread_get_id(local_30);
  if ((0x31 < param_1) ||
     (iVar5 = *(int *)(iStack_74 + -0x5f04), *(char *)(param_1 * 8 + iVar5 + 0x18) == '\0')) {
    return 1;
  }
  iVar3 = sys_lwmutex_lock(iVar5,0);
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
    iVar5 = sys_lwmutex_unlock(iVar5);
    if (iVar5 == 0) {
      return 0;
    }
  }
LAB_005d0b64:
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(xlv2tls.o): _Tlsalloc  [fuzzy 0.954 match]
// 0x05d0b80 (0x174 bytes)
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
  iVar5 = sys_lwmutex_lock(puVar4,0);
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
      iVar5 = sys_lwmutex_unlock(puVar4);
    }
    else {
LAB_005d0c34:
      uVar9 = 1;
      iVar5 = sys_lwmutex_unlock(puVar4);
    }
    if (iVar5 == 0) {
      return uVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05d0cf8 (0x38 bytes)
void FUN_005d0cf8(void)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_create(PTR_DAT_0071c424,PTR_DAT_0071c430);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05d0d34 (0x34 bytes)
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


