// sdk/libc/malloc_lv2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 32 functions, 0x5d0d68-0x5d56f4
#include <stdlib.h>
#include <string.h>
#include "sdk/libc/malloc_lv2.h"
#include "game/hero.h"
#include "sdk/libc/malloc.h"
#include "sdk/libc/xassert.h"
#include "sdk/libc/xlv2tls.h"
#include "sdk/sys.h"

// SDK libc.a(malloc_lv2.o): do_check_any_chunk  [fuzzy 1.000 match]
// 0x05d0d68 (0x54 bytes)
bool FUN_005d0d68(int param_1,uint param_2)

{
  if (((param_2 + 8 & 0xf) != 0) && (*(int *)(param_2 + 4) != 7)) {
    return true;
  }
  return param_2 < *(uint *)(param_1 + 0x10);
}


// SDK libc.a(malloc_lv2.o): do_check_top_chunk  [fuzzy 1.000 match]
// 0x05d0dbc (0xe8 bytes)
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


// SDK libc.a(malloc_lv2.o): do_check_inuse_chunk  [fuzzy 1.000 match]
// 0x05d0ea4 (0xb0 bytes)
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


// SDK libc.a(malloc_lv2.o): do_check_free_chunk  [fuzzy 1.000 match]
// 0x05d0f54 (0x140 bytes)
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


// SDK libc.a(malloc_lv2.o): do_check_malloced_chunk  [fuzzy 1.000 match]
// 0x05d1094 (0x9c bytes)
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


// SDK libc.a(malloc_lv2.o): do_check_tree  [fuzzy 1.000 match]
// 0x05d1130 (0x2f4 bytes)
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


// SDK libc.a(malloc_lv2.o): bin_find  [fuzzy 1.000 match]
// 0x05d1424 (0x1c8 bytes)
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


// SDK libc.a(malloc_lv2.o): init_top  [fuzzy 1.000 match]
// 0x05d15ec (0x64 bytes)
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


// 0x05d1650 (0x30 bytes)
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


// 0x05d1680 (0x3c bytes)
int FUN_005d1680(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + -4) & 2) != 0)) {
    return (*(uint *)(param_1 + -4) & 0xfffffffc) - 4;
  }
  return 0;
}


// SDK libc.a(malloc_lv2.o): init_mparams  [fuzzy 0.964 match]
// 0x05d16bc (0x6c bytes)
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
      abort();
    }
  }
  return;
}


// SDK libc.a(malloc_lv2.o): PREACTION  [fuzzy 0.874 match]
// 0x05d172c (0x40 bytes)
undefined8 FUN_005d172c(int param_1)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_lock(param_1 + 0x1c0,0);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(malloc_lv2.o): POSTACTION  [fuzzy 0.984 match]
// 0x05d1770 (0x318 bytes)
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
    sys_ppu_thread_get_id(uVar16 - 0x70);
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
  iVar11 = sys_lwmutex_unlock(param_1 + 0x1c0);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


// SDK libc.a(malloc_lv2.o): internal_is_heap_empty  [fuzzy 1.000 match]
// 0x05d1a8c (0x14c bytes)
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


// 0x05d1bd8 (0x4 bytes)
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


// 0x05d1bdc (0xc bytes)
void FUN_005d1bdc(void)

{
  FUN_005d1a8c(*(undefined4 *)(PTR_DAT_0071c434 + 0x20));
  return;
}


// SDK libc.a(malloc_lv2.o): mspace_malloc_stats_fast  [fuzzy 1.000 match]
// 0x05d1be8 (0xc4 bytes)
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


// SDK libc.a(malloc_lv2.o): mspace_malloc_stats  [fuzzy 1.000 match]
// 0x05d1cac (0x5b8 bytes)
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


// SDK libc.a(malloc_lv2.o): mspace_free  [fuzzy 0.999 match]
// 0x05d2264 (0xe34 bytes)
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
        abort();
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


// SDK libc.a(malloc_lv2.o): mspace_malloc  [fuzzy 0.999 match]
// 0x05d309c (0x1b6c bytes)
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
                        abort();
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


// SDK libc.a(malloc_lv2.o): internal_memalign  [fuzzy 1.000 match]
// 0x05d4c0c (0x2f8 bytes)
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


// 0x05d4f04 (0x4 bytes)
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


// SDK libc.a(malloc_lv2.o): internal_realloc  [fuzzy 0.994 match]
// 0x05d4f08 (0x26c bytes)
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
          memcpy(__dest,param_2,param_3);
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
  abort();
}


// SDK libc.a(malloc_lv2.o): mspace_reallocalign  [fuzzy 1.000 match]
// 0x05d5178 (0x124 bytes)
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
    memcpy(__dest,param_2,__n);
    FUN_005d2264(param_1,param_2);
  }
  return ZEXT48(__dest);
}


// 0x05d529c (0x2c bytes)
void FUN_005d529c(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_005d4f08(param_1,param_2);
    return;
  }
  FUN_005d309c(param_1,param_3);
  return;
}


// SDK libc.a(malloc_lv2.o): _malloc_stats_fast  [fuzzy 1.000 match]
// 0x05d52c8 (0x54 bytes)
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


// SDK libc.a(malloc_lv2.o): mspace_calloc  [fuzzy 1.000 match]
// 0x05d531c (0x8c bytes)
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
    memset(iVar1,0,uVar2);
  }
  return iVar1;
}


// 0x05d53a8 (0x3c bytes)
undefined8 FUN_005d53a8(int param_1)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_destroy(param_1 + 0x1c0);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05d53e8 (0x34 bytes)
void FUN_005d53e8(void)

{
  sys_lwmutex_destroy(*(int *)(PTR_DAT_0071c434 + 0x20) + 0x1c0);
  return;
}


// SDK libc.a(malloc_lv2.o): mspace_create  [fuzzy 0.977 match]
// 0x05d541c (0x164 bytes)
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
    memset(iVar5,0,0x1f0);
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
    iVar4 = sys_lwmutex_create(iVar6 + 0x1c8,PTR_DAT_0071c4cc);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return iVar5;
}


// SDK libc.a(malloc_lv2.o): _malloc_init_lv2  [fuzzy 0.974 match]
// 0x05d5584 (0x144 bytes)
undefined1 * FUN_005d5584(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iStack_c4;
  GPiece<4> auStack_7c;
  uint local_78;
  
  puVar1 = PTR_DAT_0071c434;
  iVar2 = *(int *)(PTR_DAT_0071c434 + 0x20);
  if (*(int *)(PTR_DAT_0071c434 + 0x20) == 0) {
    *(int *)(PTR_DAT_0071c434 + 0x20) = param_1;
    iVar2 = param_1;
  }
  iVar2 = sys_lwmutex_create(iVar2 + 0x1c0,PTR_DAT_0071c4cc);
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
  abort();
}


// 0x05d56cc (0x28 bytes)
undefined4 FUN_005d56cc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d1680();
  return uVar1;
}


