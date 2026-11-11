// sdk/libc/xgenld.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5db060-0x5db6ac
#include <string.h>
#include "sdk/libc/xgenld.h"
#include "sdk/libc/xldtento.h"

// SDK libc.a(xgenld.o): _Genld  [fuzzy 1.000 match]
// 0x05db060 (0x64c bytes)
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
  GPiece<2> auStack_60;
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
      pcVar4 = (char *)memcpy((void *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34)),
                                    param_3,__n_00);
      uVar2 = *(ushort *)(param_1 + 0x50);
      *(size_t *)(param_1 + 0x40) = *(int *)(param_1 + 0x44) - __n_00;
    }
    else if ((int)sVar5 < (int)__n) {
      pcVar4 = (char *)memcpy((void *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34)),
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
      memcpy((void *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34)),param_3,__n);
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
      pcVar4 = (char *)memcpy((void *)(*(int *)(param_1 + 0x28) + iVar8),param_3 + __n,
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
      memcpy((void *)(iVar8 + *(int *)(param_1 + 0x28)),param_3 + 1,(int)sVar5);
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


