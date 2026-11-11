// sdk/libc/xgetstr.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5d8490-0x5d8ba8
#include <string.h>
#include "sdk/libc/xgetstr.h"
#include "sdk/libc/xdscale.h"
#include "sdk/xUnk3.h"

// SDK libc.a(xgetstr.o): ranmatch  [fuzzy 1.000 match]
// 0x05d8490 (0xac bytes)
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


// SDK libc.a(xgetstr.o): _Getstr  [fuzzy 1.000 match]
// 0x05d853c (0x644 bytes)
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
  local_84[0].__value.__wch.piece<2,2>() = 0;
  local_84[0].__count = 0;
  local_84[0].__value.__wch.piece<0,2>() = 0;
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
    pcVar9 = strchr(pcVar9,0x5d);
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
    sVar8 = mbrtowc(local_90,acStack_89 + 1,__n,local_84);
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
        sVar8 = strlen(acStack_89 + 1);
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


// 0x05d8b80 (0x28 bytes)
undefined2 FUN_005d8b80(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005d5d10();
  return uVar1;
}


