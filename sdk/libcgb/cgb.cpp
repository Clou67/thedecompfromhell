// sdk/libcgb/cgb.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 21 functions, 0x50f130-0x50fbfc
#include <stdio.h>
#include <string.h>
#include "sdk/libcgb/cgb.h"
#include "game/hero.h"
#include "sdk/cell.h"
#include "sdk/libc/xassert.h"

// SDK libcgb.a(cgb.ppu.o): cellCgbRead  [fuzzy 1.000 match]
// 0x050f130 (0x174 bytes)
undefined4 FUN_0050f130(int param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  *param_3 = param_1;
  if (1 < *(byte *)(param_1 + 10)) {
    return 0xffffffff;
  }
  param_3[1] = param_1 + 0x20;
  uVar5 = *(byte *)(param_1 + 0xb) & 1;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    iVar4 = *param_3;
    puVar6 = (ushort *)0x0;
    param_3[4] = uVar5;
    param_3[2] = uVar5;
    param_3[3] = uVar5;
    bVar1 = *(byte *)(iVar4 + 0xb);
  }
  else {
    iVar4 = *param_3;
    puVar6 = (ushort *)(param_1 + 0x20 + (uint)*(ushort *)(param_1 + 8));
    param_3[3] = (int)(puVar6 + 2);
    uVar2 = puVar6[1];
    param_3[2] = (uint)uVar2;
    param_3[4] = param_1 + ((int)(puVar6 + 2) + ((uint)uVar2 * 2 - param_1) + 0xf & 0xfffffff0);
    bVar1 = *(byte *)(iVar4 + 0xb);
  }
  if ((bVar1 & 2) == 0) {
    uVar5 = bVar1 & 2;
    param_3[9] = uVar5;
    param_3[5] = uVar5;
    param_3[6] = uVar5;
    param_3[8] = uVar5;
    bVar1 = *(byte *)(iVar4 + 0xb);
    puVar6 = (ushort *)0x0;
  }
  else {
    if (puVar6 == (ushort *)0x0) {
      puVar6 = (ushort *)((uint)*(ushort *)(param_1 + 8) + param_3[1]);
    }
    else {
      puVar6 = (ushort *)((uint)*puVar6 + (int)puVar6);
    }
    puVar7 = puVar6 + 3;
    param_3[6] = (int)puVar7;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    param_3[5] = (uint)uVar2;
    param_3[8] = (int)(puVar7 + (uint)uVar2 * 4);
    param_3[9] = (int)(puVar7 + (uint)uVar2 * 4 + uVar3);
    bVar1 = *(byte *)(iVar4 + 0xb);
  }
  if ((bVar1 & 4) != 0) {
    param_3[0xb] = (int)puVar6 + *puVar6 + 4;
    return 0;
  }
  param_3[0xb] = bVar1 & 4;
  return 0;
}


// 0x050f2a4 (0xc bytes)
undefined1 FUN_0050f2a4(int *param_1)

{
  return *(undefined1 *)(*param_1 + 10);
}


// SDK libcgb.a(cgb.ppu.o): cellCgbGetVertexConfiguration  [fuzzy 1.000 match]
// 0x050f2b0 (0x50 bytes)
undefined4 FUN_0050f2b0(int *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = 0xffffffff;
  if (*(char *)(iVar1 + 10) == '\0') {
    uVar2 = 0;
    *param_2 = *(undefined2 *)(iVar1 + 0x18);
    param_2[2] = *(undefined2 *)(iVar1 + 0xc);
    param_2[1] = (short)(((ulonglong)*(ushort *)(iVar1 + 8) << 0x20) >> 0x24);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar1 + 0xe);
  }
  return uVar2;
}


// SDK libcgb.a(cgb.ppu.o): cellCgbGetFragmentConfiguration  [fuzzy 1.000 match]
// 0x050f300 (0x5c bytes)
undefined4 FUN_0050f300(int *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  uVar4 = 0xffffffff;
  if (*(char *)(iVar2 + 10) == '\x01') {
    uVar4 = 0;
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined2 *)(param_2 + 8) = *(undefined2 *)(iVar2 + 0x10);
    uVar1 = *(undefined2 *)(iVar2 + 0x12);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined2 *)(param_2 + 10) = uVar1;
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar2 + 0x14);
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(iVar2 + 0x1c);
  }
  return uVar4;
}


// 0x050f35c (0x28 bytes)
undefined4 FUN_0050f35c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(*param_1 + 10) == '\0') {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar1;
}


// 0x050f384 (0x28 bytes)
undefined4 FUN_0050f384(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(*param_1 + 10) == '\0') {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*param_1 + 0x14);
  }
  return uVar1;
}


// 0x050f3ac (0xc bytes)
undefined2 FUN_0050f3ac(int *param_1)

{
  return *(undefined2 *)(*param_1 + 8);
}


// 0x050f3b8 (0x8 bytes)
undefined4 FUN_0050f3b8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// 0x050f3c0 (0x8 bytes)
undefined4 FUN_0050f3c0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// SDK libcgb.a(cgb.ppu.o): cellCgbGetVertexConstantValues  [fuzzy 1.000 match]
// 0x050f3c8 (0x54 bytes)
void FUN_0050f3c8(int *param_1,uint param_2,undefined2 *param_3,int *param_4)

{
  int iVar1;
  
  if (*(char *)(*param_1 + 10) == '\0') {
    if (param_2 < (uint)param_1[2]) {
      iVar1 = param_1[3];
      *param_4 = param_1[4] + param_2 * 0x10;
      *param_3 = *(undefined2 *)(param_2 * 2 + iVar1);
      return;
    }
  }
  *param_3 = 0xffff;
  return;
}


// 0x050f41c (0x18 bytes)
undefined2 FUN_0050f41c(int param_1,int param_2)

{
  return *(undefined2 *)(param_2 * 8 + *(int *)(param_1 + 0x18) + 6);
}


// 0x050f434 (0x8 bytes)
undefined4 FUN_0050f434(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// SDK libcgb.a(cgb.ppu.o): cellCgbMapGetVertexUniformRegister  [fuzzy 1.000 match]
// 0x050f43c (0xc4 bytes)
void FUN_0050f43c(int *param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(char *)(*param_1 + 10) != '\0') {
    *param_3 = -1;
    return;
  }
  sVar1 = *(short *)(param_2 * 8 + param_1[6] + 6);
  *param_3 = sVar1;
  if (sVar1 == -1) {
    return;
  }
  if (param_4 == (int *)0x0) {
    return;
  }
  if (0 < param_1[2]) {
    iVar2 = 0;
    if (*(short *)param_1[3] != sVar1) {
      uVar3 = (ulonglong)(uint)param_1[2];
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) goto LAB_0050f4e0;
      } while (((short *)param_1[3])[iVar2] != sVar1);
      iVar2 = iVar2 * 0x10;
    }
    *param_4 = iVar2 + param_1[4];
    return;
  }
LAB_0050f4e0:
  *param_4 = 0;
  return;
}


// SDK libcgb.a(cgb.ppu.o): cellCgbMapGetFragmentUniformOffsets  [exact match]
// 0x050f500 (0x124 bytes)
void FUN_0050f500(int *param_1,int param_2,undefined2 *param_3,uint *param_4)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((*(char *)(*param_1 + 10) == '\x01') &&
     (sVar1 = *(short *)(param_2 * 8 + param_1[6] + 6), (ushort)(sVar1 - 0x400U) < 0xfbff)) {
    iVar8 = param_1[8];
    uVar2 = *(ushort *)((uint)(ushort)(sVar1 - 0x3ff) * 2 + iVar8);
    uVar7 = (uint)uVar2;
    if (param_3 != (undefined2 *)0x0) {
      uVar3 = *param_4;
      if (uVar3 < uVar7) {
        uVar9 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          do {
            *param_3 = 0xffff;
            uVar9 = uVar9 - 1;
            param_3 = param_3 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
        if (uVar2 != 0) {
          lVar5 = (ulonglong)(ushort)(sVar1 - 0x3fe) << 1;
          uVar9 = (ulonglong)uVar2;
          puVar6 = param_3;
          do {
            iVar4 = (int)lVar5;
            lVar5 = lVar5 + 2;
            *puVar6 = *(undefined2 *)(iVar4 + iVar8);
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar9 != 0);
        }
        if ((int)(uint)uVar2 < (int)uVar3) {
          iVar8 = uVar3 - uVar7;
          param_3 = param_3 + uVar7;
          if ((int)uVar3 < (int)(uVar2 + 1)) {
            iVar8 = 1;
          }
          do {
            *param_3 = 0xffff;
            iVar8 = iVar8 + -1;
            param_3 = param_3 + 1;
          } while (iVar8 != 0);
        }
      }
    }
    *param_4 = (uint)uVar2;
    return;
  }
  *param_4 = 0;
  return;
}


// SDK libcgb.a(cgb.ppu.o): cellCgbMapGetFragmentUniformRegister  [fuzzy 1.000 match]
// 0x050f624 (0x5c bytes)
void FUN_0050f624(int *param_1,int param_2,undefined2 *param_3)

{
  ulonglong uVar1;
  
  if (*(char *)(*param_1 + 10) == '\x01') {
    uVar1 = (ulonglong)*(ushort *)(param_2 * 8 + param_1[6] + 6) - 0x400 & 0xffff;
    if (uVar1 < 0xfbff) {
      *param_3 = *(undefined2 *)((int)(uVar1 << 1) + param_1[8]);
      return;
    }
  }
  *param_3 = 0xffff;
  return;
}


// SDK libcgb.a(cgb.ppu.o): cellCgbGetSize  [fuzzy 1.000 match]
// 0x050f680 (0x64 bytes)
int FUN_0050f680(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = -1;
  if (*(byte *)(param_1 + 10) < 2) {
    bVar2 = *(byte *)(param_1 + 0xb);
    iVar1 = *(ushort *)(param_1 + 8) + 0x20;
    if (bVar2 != 0) {
      do {
        bVar2 = bVar2 - 1 & bVar2;
        iVar1 = iVar1 + (uint)*(ushort *)(param_1 + iVar1);
      } while (bVar2 != 0);
      return iVar1;
    }
  }
  return iVar1;
}


// SDK libcgb.a(cgb.ppu.o): cellCgbMapGetName  [exact match]
// 0x050f6e4 (0x258 bytes)
// strings: 00666440: '[%s]' (raw)

char * FUN_0050f6e4(int param_1,int param_2,char *param_3,uint *param_4)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  bool bVar6;
  int *piVar8;
  longlong lVar7;
  size_t sVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar12;
  uint uVar13;
  ulonglong unaff_r31;
  char *__src;
  ulonglong in_LR;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1b0;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar11;
  puVar5[0x38] = in_LR;
  puVar5[0x33] = unaff_r29;
  *(undefined1 *)((int)puVar5 + 0x16f) = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  piVar8 = (int *)(param_2 * 8 + *(int *)(param_1 + 0x18));
  puVar5[0x35] = unaff_r31;
  puVar5[0x32] = unaff_r28;
  puVar5[0x2f] = unaff_r25;
  puVar5[0x30] = unaff_r26;
  iVar4 = *piVar8;
  puVar5[0x31] = unaff_r27;
  pcVar10 = (char *)(iVar3 + iVar4);
  puVar5[0x34] = unaff_r30;
  sVar9 = strlen(pcVar10);
  if ((byte)(*pcVar10 - 0x30U) < 10) {
    uVar12 = (lVar1 - (int)sVar9) + 0x16d;
    uVar11 = uVar12 & 0xffffffff;
    pcVar10 = (char *)snprintf((char *)uVar12,PTR_DAT_0071a910,pcVar10);
    bVar6 = true;
  }
  else {
    uVar12 = (uVar11 - 0x41) - (longlong)(int)sVar9;
    uVar11 = uVar12 & 0xffffffff;
    pcVar10 = strcpy((char *)uVar12,pcVar10);
    bVar6 = false;
  }
  do {
    __src = (char *)uVar11;
    uVar2 = *(ushort *)(piVar8 + 1);
    bVar6 = !bVar6;
    while( true ) {
      if (uVar2 == 0xffff) {
        uVar11 = (lVar1 - uVar12) + 0x170;
        uVar13 = (uint)uVar11;
        if (param_3 != (char *)0x0) {
          if ((uVar11 & 0xffffffff) <= (ulonglong)*param_4) {
            pcVar10 = strcpy(param_3,__src);
            *param_4 = uVar13;
            return pcVar10;
          }
          if (*param_4 != 0) {
            *param_3 = '\0';
          }
        }
        *param_4 = uVar13;
        return pcVar10;
      }
      if (bVar6) {
        uVar12 = uVar12 - 1;
        *(undefined1 *)uVar12 = 0x2e;
        uVar2 = *(ushort *)(piVar8 + 1);
      }
      piVar8 = (int *)((uint)uVar2 * 8 + *(int *)(param_1 + 0x18));
      pcVar10 = (char *)(*(int *)(param_1 + 0x24) + *piVar8);
      sVar9 = strlen(pcVar10);
      lVar7 = uVar12 - 1;
      uVar11 = lVar7 - (int)sVar9;
      if (9 < (byte)(*pcVar10 - 0x30U)) break;
      uVar12 = uVar11 - 1;
      __src = (char *)uVar12;
      *(undefined1 *)lVar7 = 0x5d;
      pcVar10 = (char *)strcpy(uVar11 & 0xffffffff,pcVar10,sVar9);
      *__src = '[';
      uVar2 = *(ushort *)(piVar8 + 1);
      bVar6 = false;
    }
    uVar12 = uVar12 - (longlong)(int)sVar9;
    uVar11 = uVar12 & 0xffffffff;
    pcVar10 = (char *)strcpy(uVar11,pcVar10,sVar9);
    bVar6 = false;
  } while( true );
}


// SDK libcgb.a(cgb.ppu.o): cellCgbMapLookup  [exact match]
// 0x050f93c (0x230 bytes)
ulonglong FUN_0050f93c(int param_1,ulonglong param_2)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  GPiece<8> local_180;
  GPiece<272> auStack_178;
  
  sVar3 = strlen((char *)param_2);
  uVar8 = param_2 + (longlong)(int)sVar3;
  if ((((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) && (*(char *)uVar8 != '[')) &&
     (*(char *)uVar8 != '.')) {
    uVar9 = uVar8 - param_2 & 0xffffffff;
    uVar6 = uVar8;
    if ((uVar8 - 1 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar9 = 1;
    }
    do {
      uVar6 = uVar6 - 1;
      uVar9 = uVar9 - 1;
      if ((uVar9 == 0) || (*(char *)uVar6 == '[')) break;
    } while (*(char *)uVar6 != '.');
    lVar7 = uVar8 - uVar6;
    uVar8 = uVar6;
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (0 < iVar5) {
    uVar9 = 0;
    do {
      while( true ) {
        bVar1 = *(byte *)uVar8;
        uVar6 = 1;
        if (bVar1 != 0x5b) {
          uVar6 = ((ulonglong)bVar1 ^ 0x2e) - 1 >> 0x3f;
        }
        iVar4 = FUN_005ccb28(*(int *)(param_1 + 0x24) +
                             *(int *)((int)((uVar9 & 0xffffffff) << 3) + *(int *)(param_1 + 0x18)),
                             uVar8 + uVar6 & 0xffffffff,
                             (lVar7 - uVar6) - (ulonglong)(bVar1 == 0x5b) & 0xffffffff);
        iVar2 = (int)uVar9;
        if (iVar4 != 0) break;
        FUN_0050f6e4(param_1,uVar9 & 0xffffffff,auStack_178,local_180);
        iVar5 = FUN_005cc784(auStack_178,param_2 & 0xffffffff);
        if (iVar5 == 0) {
          return uVar9 & 0xffffffff;
        }
        iVar5 = *(int *)(param_1 + 0x14);
        uVar9 = uVar9 + 1;
        if (iVar5 <= iVar2 + 1) {
          return 0xffffffff;
        }
      }
      uVar9 = uVar9 + 1;
    } while (iVar2 + 1 < iVar5);
  }
  return 0xffffffff;
}


// 0x050fb6c (0x8 bytes)
undefined8 FUN_0050fb6c(void)

{
  return 0xc00;
}


// 0x050fb74 (0x3c bytes)
void FUN_0050fb74(void)

{
  int iVar1;
  undefined4 uStack_44;
  
  iVar1 = cellSpursLFQueueDetachLv2EventQueue();
  if (iVar1 != 0) {
    FUN_005cef58(*(undefined4 *)(uStack_44 + -0x7a14),0);
  }
  return;
}


// 0x050fbb0 (0x4c bytes)
// strings: 00666478: 'edgelzma_inflate_queue.cpp:155 (maxNumQueueEntries > 0)'

int FUN_0050fbb0(int param_1)

{
  if (param_1 == 0) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_155___0071a918,0);
  }
  return param_1 * 0x20 + 0x80;
}


