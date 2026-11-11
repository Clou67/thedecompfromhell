// sdk/libc/qsort.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x5c7628-0x5c8318
#include <string.h>
#include "sdk/libc/qsort.h"

// SDK libc.a(qsort.o): rot3  [fuzzy 1.000 match]
// 0x05c7628 (0x18c bytes)
void * FUN_005c7628(void *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint __n;
  void *pvVar5;
  int iVar6;
  GPiece<264> auStack_150;
  
  if (param_4 < 0x40) {
    if (param_4 != 0) {
      iVar6 = 0;
      do {
        puVar2 = (undefined1 *)(iVar6 + (int)param_3);
        puVar3 = (undefined1 *)(iVar6 + (int)param_1);
        puVar4 = (undefined1 *)(iVar6 + (int)param_2);
        iVar6 = iVar6 + 1;
        uVar1 = *puVar3;
        *puVar3 = *puVar2;
        *puVar2 = *puVar4;
        *puVar4 = uVar1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    return param_1;
  }
  do {
    __n = param_4;
    if (0x100 < param_4) {
      __n = 0x100;
    }
    param_4 = param_4 - __n;
    memcpy(auStack_150,param_1,__n);
    memcpy(param_1,param_3,__n);
    memcpy(param_3,param_2,__n);
    pvVar5 = memcpy(param_2,auStack_150,__n);
    param_3 = (void *)((int)param_3 + __n);
    param_2 = (void *)((int)param_2 + __n);
    param_1 = (void *)((int)param_1 + __n);
  } while (param_4 != 0);
  return pvVar5;
}


// SDK libc.a(qsort.o): swap  [fuzzy 1.000 match]
// 0x05c77b4 (0x144 bytes)
void * FUN_005c77b4(void *param_1,void *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint __n;
  void *pvVar4;
  int iVar5;
  GPiece<264> auStack_140;
  
  if (param_3 < 0x40) {
    if (param_3 != 0) {
      iVar5 = 0;
      do {
        puVar2 = (undefined1 *)(iVar5 + (int)param_1);
        puVar3 = (undefined1 *)(iVar5 + (int)param_2);
        iVar5 = iVar5 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar3;
        *puVar3 = uVar1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return param_1;
  }
  do {
    __n = param_3;
    if (0x100 < param_3) {
      __n = 0x100;
    }
    param_3 = param_3 - __n;
    memcpy(auStack_140,param_1,__n);
    memcpy(param_1,param_2,__n);
    pvVar4 = memcpy(param_2,auStack_140,__n);
    param_1 = (void *)((int)param_1 + __n);
    param_2 = (void *)((int)param_2 + __n);
  } while (param_3 != 0);
  return pvVar4;
}


// SDK libc.a(qsort.o): adjust_heap  [fuzzy 1.000 match]
// 0x05c78f8 (0x1d0 bytes)
void FUN_005c78f8(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = ((ulonglong)param_2 & 0x7fffffff) * 2 + 2;
  if ((ulonglong)param_3 < (uVar7 & 0xffffffff)) {
    return;
  }
  iVar3 = (int)uVar7;
  iVar5 = param_2 * param_4 + param_1;
  do {
    iVar6 = param_1 + iVar3 * param_4;
    iVar3 = iVar6 - param_4;
    if ((param_3 == (uint)uVar7) || (iVar2 = (*(code *)*param_5)(iVar6,iVar3), iVar2 < 0)) {
      uVar7 = uVar7 - 1;
      FUN_005c77b4(iVar5,iVar3,param_4);
      uVar4 = (uVar7 & 0x7fffffff) * 2 + 2;
      iVar6 = iVar3;
      if ((ulonglong)param_3 < (uVar4 & 0xffffffff)) goto LAB_005c7a10;
    }
    else {
      FUN_005c77b4(iVar5,iVar6,param_4);
      uVar4 = (uVar7 & 0x7fffffff) * 2 + 2;
      if ((ulonglong)param_3 < (uVar4 & 0xffffffff)) {
LAB_005c7a10:
        if ((ulonglong)param_2 < (uVar7 & 0xffffffff)) {
          do {
            lVar1 = uVar7 - 1;
            uVar7 = (ulonglong)(lVar1 << 0x20) >> 0x21;
            iVar5 = param_1 + param_4 * ((uint)lVar1 >> 1);
            iVar3 = (*(code *)*param_5)(iVar6,iVar5);
            if (iVar3 < 1) {
              return;
            }
            FUN_005c77b4(iVar5,iVar6,param_4);
            iVar6 = iVar5;
          } while (param_2 < uVar7);
        }
        return;
      }
    }
    iVar3 = (int)uVar4;
    uVar7 = uVar4;
    iVar5 = iVar6;
  } while( true );
}


// SDK libc.a(qsort.o): med3  [fuzzy 1.000 match]
// 0x05c7ac8 (0x158 bytes)
void FUN_005c7ac8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = (*(code *)*param_5)(param_2,param_1);
  if (iVar1 < 0) {
    FUN_005c77b4(param_1,param_2,param_4);
    iVar1 = (*(code *)*param_5)(param_3,param_2);
  }
  else {
    iVar1 = (*(code *)*param_5)(param_3,param_2);
  }
  if (iVar1 < 0) {
    FUN_005c77b4(param_2,param_3,param_4);
  }
  iVar1 = (*(code *)*param_5)(param_2,param_1);
  if (iVar1 < 0) {
    FUN_005c77b4(param_1,param_2,param_4);
    return;
  }
  return;
}


// SDK libc.a(qsort.o): rotate  [fuzzy 1.000 match]
// 0x05c7c20 (0xfc bytes)
ulonglong FUN_005c7c20(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  size_t __n;
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  GPiece<264> auStack_150;
  
  iVar2 = (int)param_3;
  lVar3 = (param_2 - param_1) + param_3;
  uVar4 = param_1;
  if (iVar2 != 0) {
    do {
      uVar4 = param_3;
      if (0x100 < (param_3 & 0xffffffff)) {
        uVar4 = 0x100;
      }
      __n = (size_t)uVar4;
      param_3 = param_3 - uVar4;
      memcpy(auStack_150,(void *)((int)param_2 + (iVar2 - __n)),__n);
      FUN_005c6094(param_1 + uVar4 & 0xffffffff,param_1 & 0xffffffff,lVar3 - uVar4 & 0xffffffff);
      pvVar1 = memcpy((void *)param_1,auStack_150,__n);
      uVar4 = (ulonglong)(int)pvVar1;
    } while ((int)param_3 != 0);
  }
  return uVar4;
}


// SDK libc.a(qsort.o): intro_sort  [fuzzy 1.000 match]
// 0x05c7d1c (0x5ec bytes)
void FUN_005c7d1c(uint param_1,ulonglong param_2,longlong param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((int)param_3 == 0) {
LAB_005c8264:
    if (0x20 < (param_2 & 0xffffffff)) {
      uVar3 = (param_2 << 0x20) >> 0x21;
      if ((uint)param_2 >> 1 != 0) {
        do {
          uVar3 = uVar3 - 1;
          FUN_005c78f8(param_1,uVar3 & 0xffffffff,param_2 & 0xffffffff,param_4,param_5);
        } while ((int)uVar3 != 0);
      }
      iVar2 = param_4 * (uint)param_2 + param_1;
      do {
        iVar2 = iVar2 - param_4;
        param_2 = param_2 - 1;
        FUN_005c77b4(param_1,iVar2,param_4);
        FUN_005c78f8(param_1,0,param_2 & 0xffffffff,param_4,param_5);
      } while ((int)param_2 != 1);
      return;
    }
  }
  else if (0x20 < (param_2 & 0xffffffff)) {
LAB_005c7db0:
    uVar4 = param_4 * (uint)param_2 + param_1;
    iVar2 = uVar4 - param_4;
    uVar9 = param_4 * ((uint)param_2 >> 1) + param_1;
    uVar5 = uVar9 + param_4;
    if (param_4 * 0x28 < iVar2 - param_1) {
      uVar7 = param_4 * (((iVar2 - param_1) / param_4 >> 3) + 1);
      FUN_005c7ac8(param_1,param_1 + uVar7,param_1 + (uVar7 & 0x7fffffff) * 2,param_4,param_5);
      FUN_005c7ac8(uVar9 - uVar7,uVar9,uVar9 + uVar7,param_4,param_5);
      FUN_005c7ac8(iVar2 + (uVar7 & 0x7fffffff) * -2,iVar2 - uVar7,iVar2,param_4,param_5);
      FUN_005c7ac8(param_1 + uVar7,uVar9,iVar2 - uVar7,param_4,param_5);
    }
    else {
      FUN_005c7ac8(param_1,uVar9,iVar2,param_4,param_5);
    }
    if (param_1 < uVar9) {
      iVar2 = uVar9 - param_4;
      do {
        uVar7 = uVar9 + -param_4;
        iVar2 = iVar2 + -param_4;
        iVar1 = (*(code *)*param_5)(uVar7,uVar9);
        if (iVar1 != 0) break;
        uVar9 = uVar7;
      } while (param_1 < param_4 + iVar2);
    }
    iVar2 = uVar5 + param_4;
    uVar7 = uVar5;
    while (uVar6 = uVar5, uVar10 = uVar9, uVar7 < uVar4) {
      iVar2 = iVar2 + param_4;
      iVar1 = (*(code *)*param_5)(uVar5,uVar9);
      uVar7 = iVar2 - param_4;
      if (iVar1 != 0) break;
      uVar5 = uVar5 + param_4;
    }
LAB_005c7f2c:
    do {
      if (uVar6 < uVar4) goto LAB_005c7fd8;
      do {
        do {
          if (param_1 < uVar9) {
            iVar2 = uVar9 - param_4;
            uVar7 = uVar10;
            do {
              uVar8 = -param_4 + uVar9;
              iVar2 = iVar2 + -param_4;
              iVar1 = (*(code *)*param_5)(uVar8,uVar7);
              if (-1 < iVar1) {
                if (iVar1 != 0) break;
                uVar7 = uVar10 - param_4;
                FUN_005c77b4(uVar7,uVar8,param_4);
                uVar10 = uVar7;
              }
              uVar9 = uVar8;
            } while (param_1 < iVar2 + param_4);
          }
          if (param_1 == uVar9) {
            if (uVar6 != uVar4) {
              if (uVar5 == uVar6) {
                FUN_005c77b4(uVar5,uVar10,param_4);
              }
              else {
                FUN_005c7628(uVar6,uVar10,uVar5,param_4);
              }
              uVar5 = uVar5 + param_4;
              uVar9 = param_1;
              uVar6 = uVar6 + param_4;
              uVar10 = uVar10 + param_4;
              goto LAB_005c7f2c;
            }
            uVar3 = (ulonglong)(uVar10 - param_1) / (ulonglong)param_4;
            param_2 = (ulonglong)(uVar4 - uVar5) / (ulonglong)param_4;
            param_3 = ((ulonglong)(param_3 << 0x20) >> 0x21) +
                      ((ulonglong)(param_3 << 0x20) >> 0x22);
            if (param_2 < uVar3) {
              FUN_005c7d1c(uVar5,param_2,param_3,param_4,param_5);
              param_2 = uVar3;
            }
            else {
              FUN_005c7d1c(param_1,uVar3,param_3,param_4,param_5);
              param_1 = uVar5;
            }
            if ((int)param_3 == 0) goto LAB_005c8264;
            if (param_2 < 0x21) goto LAB_005c8114;
            goto LAB_005c7db0;
          }
          if (uVar6 == uVar4) {
            uVar9 = uVar9 - param_4;
            uVar10 = uVar10 - param_4;
            uVar5 = uVar5 - param_4;
            uVar6 = uVar4;
            if (uVar9 == uVar10) {
              FUN_005c77b4(uVar10,uVar5,param_4);
            }
            else {
              FUN_005c7628(uVar9,uVar5,uVar10,param_4);
            }
            goto LAB_005c7f2c;
          }
          uVar9 = uVar9 - param_4;
          uVar7 = uVar6 + param_4;
          FUN_005c77b4(uVar6,uVar9,param_4);
          uVar6 = uVar7;
        } while (uVar4 <= uVar7);
LAB_005c7fd8:
        iVar2 = (*(code *)*param_5)(uVar10,uVar6);
        if (iVar2 < 0) goto LAB_005c801c;
      } while (iVar2 != 0);
      FUN_005c77b4(uVar5,uVar6,param_4);
      uVar5 = uVar5 + param_4;
LAB_005c801c:
      uVar6 = uVar6 + param_4;
    } while( true );
  }
LAB_005c8114:
  uVar9 = param_1;
  if (1 < (param_2 & 0xffffffff)) {
LAB_005c812c:
    param_2 = param_2 - 1;
    if ((int)param_2 != 0) {
      while( true ) {
        uVar9 = uVar9 + param_4;
        iVar2 = (*(code *)*param_5)(uVar9,param_1);
        uVar5 = uVar9;
        if (iVar2 < 0) break;
        do {
          uVar4 = uVar5;
          iVar2 = (*(code *)*param_5)(uVar9,uVar4 - param_4);
          uVar5 = uVar4 - param_4;
        } while (iVar2 < 0);
        if (uVar9 == uVar4) goto LAB_005c812c;
        param_2 = param_2 - 1;
        FUN_005c7c20(uVar4,uVar9,param_4);
        if ((int)param_2 == 0) {
          return;
        }
      }
      FUN_005c7c20(param_1,uVar9,param_4);
      goto LAB_005c812c;
    }
  }
  return;
}


// 0x05c8308 (0x10 bytes)
void FUN_005c8308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_005c7d1c(param_1,param_2,param_2,param_3,param_4);
  return;
}


