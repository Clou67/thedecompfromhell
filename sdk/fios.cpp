// sdk/fios.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x507f68-0x508b80
#include <string.h>
#include "sdk/fios.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/pause.h"
#include "game/vendor.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mathfunc.h"
#include "idol/sound.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x0507f68 (0x1d4 bytes)
undefined8 read_file_sync(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_60;
  GPiece<40> local_58;
  int local_30 [4];
  
  cellSysutilCheckCallback();
  uVar2 = get_default_fs();
  uVar3 = stat_setup(uVar2,0,param_2,1,local_30);
  op_wait_result(uVar3,0);
  if (local_30[0] == 0) {
    do {
      cellSysutilCheckCallback(local_30[0]);
      local_30[0] = 100;
      syscall();
    } while( true );
  }
  uVar3 = read_setup(uVar2,0,param_2,&local_60,3);
  op_wait_result(uVar3,0);
  uVar1 = (int)local_60 + 0x1ffffU & 0xfffe0000;
  if (0 < (int)uVar1) {
    iVar4 = 0;
    do {
      uVar3 = read_req_setup(uVar2,local_58,local_30[0],param_1,0x20000,0xffffffffffffffff);
      uVar3 = op_wait_result(uVar3,0);
      if (((int)uVar3 != 0) && ((int)uVar3 != -0x7ffef8f7)) {
        do {
          cellSysutilCheckCallback(uVar3);
          uVar3 = 100;
          syscall();
        } while( true );
      }
      syscall();
      iVar4 = iVar4 + 0x20000;
      param_1 = param_1 + 0x20000;
    } while (iVar4 < (int)uVar1);
  }
  uVar2 = filehandle_close_setup(uVar2,0,local_30[0]);
  uVar2 = op_wait_result(uVar2,0);
  if ((int)uVar2 != 0) {
    do {
      cellSysutilCheckCallback(uVar2);
      uVar2 = 100;
      syscall();
    } while( true );
  }
  return local_60;
}


// 0x050813c (0x5c bytes)
void FUN_0050813c(undefined4 *param_1)

{
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  memset(param_1 + 4,0,0x4864);
  return;
}


// 0x0508198 (0x264 bytes)
// strings: 0065faf0: 'Loading file %s\n' | 0065fb08: 'Common/Textures/randomNormals.ps3' | 0065fb30: 'Common/Textures/randomNormalsVram.ps3'

void load_engine_vram_pair(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  iVar3 = g_viewMtxPtr;
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  memset(param_1 + 4,0,0x4864);
  print_tty2("Loading file %s\n",param_2);
  iVar5 = FUN_004fe5f4(*param_1,0x80);
  uVar6 = read_file_sync(iVar5,param_2);
  FUN_004fe6ec(*param_1,uVar6);
  print_tty2("Loading file %s\n",param_3);
  uVar4 = FUN_004fe5f4(param_1[1],0x80);
  uVar6 = read_file_sync(uVar4,param_3);
  FUN_004fe6ec(param_1[1],uVar6);
  iVar1 = *(int *)(iVar3 + 0x4ac);
  uVar8 = 0;
  param_1[5] = iVar5;
  piVar7 = (int *)(*(int *)(iVar5 + 0x54) + iVar5);
  param_1[7] = piVar7;
  if (*(int *)(iVar5 + 0x58) != 0) {
    iVar10 = 0;
    piVar9 = piVar7;
    do {
      uVar8 = uVar8 + 1;
      piVar2 = (int *)((int)piVar7 + iVar10);
      iVar10 = iVar10 + 0x24;
      *piVar9 = *piVar2 + ((int)uVar4 - iVar1);
      piVar9 = piVar9 + 9;
    } while (uVar8 < *(uint *)(iVar5 + 0x58));
  }
  uVar4 = idol::AllocateMemAlign(*param_1,0x24,0x10);
  param_1[8] = (int)uVar4;
  LoadAssetFromFile("Common/Textures/randomNormals.ps3",uVar4,0xffffffffffffffff);
  uVar4 = FUN_004fe5f4(param_1[1],0x80);
  uVar6 = LoadAssetFromFile("Common/Textures/randomNormalsVram.ps3",uVar4,0xffffffffffffffff);
  FUN_004fe6ec(param_1[1],uVar6);
  piVar7 = (int *)param_1[8];
  *piVar7 = (int)uVar4 - *(int *)(iVar3 + 0x4ac);
  *(int **)(DAT_00902e9c + 0x228c) = piVar7;
  iVar1 = param_1[5];
  param_1[6] = *(int *)(iVar1 + 100) + iVar5;
  param_1[9] = *(int *)(iVar1 + 0x5c) + iVar5;
  param_1[0x1215] = *(int *)(iVar1 + 0x68) + iVar5;
  param_1[0x1216] = *(int *)(iVar1 + 0x70) + iVar5;
  FUN_00507df8(param_1);
  FUN_00507b6c(param_1);
  FUN_0050795c(param_1);
  FUN_005075f0(param_1);
  FUN_00507460(param_1);
  FUN_00507148(param_1);
  return;
}


// 0x05083fc (0xbc bytes)
void FUN_005083fc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 local_230;
  char acStack_228 [256];
  char acStack_128 [264];
  
  puVar1 = (undefined4 *)FUN_004fe5ec(*param_1);
  strcpy(acStack_228,(char *)*puVar1);
  strcpy(acStack_128,(char *)puVar1[1]);
  puVar1 = (undefined4 *)puVar1[2];
  load_engine_vram_pair(param_1,acStack_228,acStack_128);
  (*(code *)*puVar1)();
  sys_ppu_thread_get_id(&local_230);
  sys_ppu_thread_exit(local_230);
  return;
}


// 0x05084b8 (0x4 bytes)
void FUN_005084b8(void *param_1)

{
  return;
}


// 0x05084bc (0x4 bytes)
void FUN_005084bc(void)

{
  return;
}


// 0x05084c0 (0x5c bytes)
void FUN_005084c0(undefined4 *param_1)

{
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  memset(param_1 + 4,0,0x4864);
  return;
}


// 0x050851c (0x5c bytes)
void FUN_0050851c(undefined4 *param_1)

{
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  memset(param_1 + 4,0,0x4864);
  return;
}


// 0x0508578 (0x54 bytes)
void FUN_00508578(void *param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  uVar1 = FUN_004fe5ec(param_2);
  param_1[2] = uVar1;
  uVar1 = FUN_004fe5ec(param_1[1]);
  param_1[3] = uVar1;
  return;
}


// 0x05085cc (0xd8 bytes)
// strings: 0065fb58: 'LoadAssetAsync'

void LoadAssetAsync(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char *__dest;
  undefined4 *puVar1;
  size_t sVar2;
  GPiece<8> auStack_30;
  
  puVar1 = (undefined4 *)FUN_004fe5ec(*param_1);
  puVar1[1] = 0;
  *puVar1 = puVar1 + 3;
  puVar1[2] = param_4;
  strcpy((char *)(puVar1 + 3),param_2);
  sVar2 = strlen(param_2);
  __dest = (char *)((int)puVar1 + sVar2 + 0xd);
  puVar1[1] = __dest;
  strcpy(__dest,param_3);
  sys_ppu_thread_create(auStack_30,&PTR_FUN_007121c0,param_1,1000,0x100000,0,"LoadAssetAsync");
  return;
}


// 0x05086b0 (0x14 bytes)
void FUN_005086b0(void)

{
  DAT_00903000 = DAT_00903000 + 1;
  return;
}


// 0x0508738 (0x448 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00508738(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  char cVar14;
  longlong lVar15;
  uint *puVar16;
  float *pfVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar20;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  uint uVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  longlong lVar23;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined4 uVar27;
  undefined4 uVar28;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  undefined4 uVar29;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined4 uVar36;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  GPiece<16> auVar37;
  undefined4 uVar41;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xf0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = ZEXT48(&stack0x00000000);
  puVar4[0x20] = in_LR;
  puVar4[0x1c] = unaff_r30;
  puVar4[0x16] = unaff_r24;
  puVar4[0x14] = unaff_r22;
  uVar2 = *(uint *)(param_1 + 0x484c);
  puVar4[0x1d] = unaff_r31;
  puVar4[0x15] = unaff_r23;
  iVar13 = g_viewMtxPtr;
  uVar18 = FrameHeap;
  uVar20 = (ulonglong)*(uint *)(param_1 + 0x4848);
  puVar4[0x1b] = unaff_r29;
  puVar4[0x1a] = unaff_r28;
  puVar4[0x19] = unaff_r27;
  puVar4[0x18] = unaff_r26;
  puVar4[0x17] = unaff_r25;
  puVar4[0x13] = unaff_r21;
  puVar4[0x12] = unaff_r20;
  lVar15 = idol::AllocateMemAlign(uVar18,uVar2 * 0x50,0x10);
  puVar16 = (uint *)idol::AllocateMemAlign(FrameHeap,uVar2 << 2,0x10);
  param_2[1] = (int)lVar15;
  *param_2 = puVar16;
  cVar14 = DAT_0159c360;
  param_2[2] = 0;
  auVar51 = *(undefined1 (*) [16])(iVar13 + 0x20U & 0xfffffff0);
  if ((cVar14 == '\0') && (uVar2 != 0)) {
    uVar21 = 0;
    lVar22 = uVar20 + 0x20;
    lVar23 = lVar15 + 0x20;
    do {
      if ((((int)DAT_00903000 < 0) || (uVar21 == DAT_00903000)) &&
         (uVar5 = (uint)uVar20, (*(byte *)(uVar5 + 0x5f) & 1) == 0)) {
        iVar19 = 0;
        pfVar17 = (float *)&g_FrustumPlanes[0].x;
        do {
          if (pfVar17[1] * *(float *)(uVar5 + 0x44) +
              pfVar17[2] * *(float *)(uVar5 + 0x48) +
              *pfVar17 * *(float *)(uVar5 + 0x40) + pfVar17[3] + *(float *)(uVar5 + 0x4c) < 0.0)
          goto LAB_00508b24;
          iVar19 = iVar19 + 1;
          pfVar17 = pfVar17 + 4;
        } while (iVar19 < 5);
        fVar6 = *(float *)(uVar5 + 0x54) + 8.0 + *(float *)(uVar5 + 0x4c);
        fVar10 = *(float *)(uVar5 + 0x40) - DAT_00a24608;
        fVar11 = *(float *)(uVar5 + 0x44) - DAT_00a2460c;
        fVar12 = *(float *)(uVar5 + 0x48) - DAT_00a24610;
        if (fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11 <= fVar6 * fVar6) {
          puVar7 = (undefined4 *)(uVar5 & 0xfffffff0);
          uVar28 = puVar7[2];
          uVar27 = puVar7[1];
          uVar18 = *puVar7;
          uVar3 = *(uint *)(uVar5 + 0x6c);
          puVar8 = (undefined4 *)(uVar5 + 0x10 & 0xfffffff0);
          uVar35 = puVar8[3];
          uVar34 = puVar8[2];
          uVar33 = puVar8[1];
          uVar29 = *puVar8;
          puVar8 = (undefined4 *)((uint)lVar22 & 0xfffffff0);
          uVar40 = puVar8[3];
          uVar39 = puVar8[2];
          uVar38 = puVar8[1];
          uVar36 = *puVar8;
          puVar8 = (undefined4 *)(uVar5 + 0x30 & 0xfffffff0);
          uVar46 = puVar8[3];
          uVar45 = puVar8[2];
          uVar44 = puVar8[1];
          uVar41 = *puVar8;
          uVar9 = (uint)lVar15;
          puVar8 = (undefined4 *)(uVar9 & 0xfffffff0);
          puVar8[3] = puVar7[3];
          puVar8[2] = uVar28;
          puVar8[1] = uVar27;
          *puVar8 = uVar18;
          puVar7 = (undefined4 *)(uVar9 + 0x10 & 0xfffffff0);
          puVar7[3] = uVar35;
          puVar7[2] = uVar34;
          puVar7[1] = uVar33;
          *puVar7 = uVar29;
          puVar7 = (undefined4 *)((uint)lVar23 & 0xfffffff0);
          puVar7[3] = uVar40;
          puVar7[2] = uVar39;
          puVar7[1] = uVar38;
          *puVar7 = uVar36;
          puVar7 = (undefined4 *)(uVar9 + 0x30 & 0xfffffff0);
          puVar7[3] = uVar46;
          puVar7[2] = uVar45;
          puVar7[1] = uVar44;
          *puVar7 = uVar41;
          *(undefined2 *)(uVar9 + 0x4e) = *(undefined2 *)(uVar5 + 0x68);
          *(undefined2 *)(uVar9 + 0x4c) = *(undefined2 *)(uVar5 + 0x6a);
          uVar18 = idol::AllocateMemAlign(FrameHeap,(ulonglong)*(ushort *)(uVar3 + 0x26) << 2,0x40);
          *(undefined4 *)(uVar9 + 0x44) = uVar18;
          *(undefined4 *)(uVar9 + 0x48) = *(undefined4 *)(uVar5 + 0x60);
          *(int *)(uVar9 + 0x40) = *(int *)(iVar13 + 0x4a8) + *(int *)(uVar3 + 0x10);
          auVar24 = loadVectorLeftIndexed(0x30,uVar20);
          auVar30 = loadVectorRightIndexed(0x40,uVar20);
          auVar37 = loadVectorLeftIndexed(0x34,uVar20);
          auVar42 = loadVectorRightIndexed(0x44,uVar20);
          auVar31 = loadVectorLeftIndexed(0x38,uVar20);
          auVar47 = loadVectorRightIndexed(0x48,uVar20);
          auVar43 = loadVectorLeftIndexed(0x54,uVar20);
          auVar48 = loadVectorRightIndexed(100,uVar20);
          auVar26 = (auVar31 | auVar47) >> 0x60 & (GPiece<16>)0xffffffff;
          auVar25 = (auVar37 | auVar42) >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = (auVar24 | auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
          auVar49 = loadVectorLeftIndexed(0x26,(ulonglong)uVar3);
          auVar50 = *(undefined1 (*) [16])(puVar4 + 0xe);
          uVar18 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x78,
                              lVar1);
          *(undefined4 *)(puVar4 + 0xf) = uVar18;
          uVar18 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x74,
                              lVar1);
          *(undefined4 *)((int)puVar4 + 0x74) = uVar18;
          uVar18 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x70,
                              lVar1);
          *(undefined4 *)(puVar4 + 0xe) = uVar18;
          auVar25 = vectorPermute(auVar24 | auVar30,auVar37 | auVar42,_DAT_005086e0);
          auVar32 = vectorPermute(auVar31 | auVar47,auVar50,_DAT_005086e0);
          auVar26 = ZEXT416(0);
          auVar37 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorPermute(auVar25,auVar32,_DAT_005086f0);
          auVar26 = vectorSubtractFloatingPoint(auVar26,auVar51);
          auVar25 = loadVectorLeftIndexed(0x50,0x5086d0);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar26,auVar26,auVar37);
          auVar30 = vectorPermute(auVar26,auVar26,_DAT_00508700);
          auVar24 = vectorPermute(auVar26,auVar26,_DAT_00508710);
          auVar26 = loadVectorLeftIndexed(0x54,0x5086d0);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar32 = (auVar43 | auVar48) >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar30,auVar42);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar26);
          auVar26 = ZEXT416(0xfffffff0);
          auVar24 = vectorShiftRightWord
                              (auVar49,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60
                              );
          auVar26 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar42);
          auVar47 = vectorCompareEqualToFloatingPoint(auVar42,auVar37);
          auVar49 = vectorMultiplyAddFloatingPoint(auVar26,auVar42,auVar37);
          auVar50 = vectorCompareEqualToFloatingPoint(auVar26,auVar37);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                               ,auVar37);
          auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar49,auVar31);
          auVar26 = loadVectorLeftIndexed(0x58,0x5086d0);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorMultiplyAddFloatingPoint(auVar37,auVar30,auVar49);
          auVar26 = vectorConditionalSelect(auVar26,auVar42,auVar47 | auVar50);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar26,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
          if (!(bool)(in_cr6 >> 1 & 1)) {
            auVar37 = vectorSubtractFloatingPoint(auVar26,auVar43 | auVar48);
            auVar26 = ZEXT416(0);
            auVar32 = loadVectorLeftIndexed(0x5c,0x5086d0);
            auVar30 = loadVectorLeftIndexed(0x60,0x5086d0);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar37 = vectorNegativeMultiplySubtractFloatingPoint
                                (auVar37,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar31);
            auVar32 = ZEXT416(0xffffffff);
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar42 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar26 = vectorCompareGreaterThanFloatingPoint
                                (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                                 auVar37);
            auVar26 = vectorLogicalAndWithComplement(auVar37,auVar26);
            auVar32 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar31);
            auVar26 = vectorConditionalSelect(auVar26,auVar31,auVar32);
            auVar26 = vectorMultiplyAddFloatingPoint
                                (auVar26,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60,auVar42);
            auVar26 = vectorConvertToUnsignedFixedPointWordSaturate(auVar26,0);
            auVar25 = vectorLogicalAnd(auVar26,auVar25);
          }
          auVar26 = ZEXT416(0xfffffff0);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = vectorRotateLeftIntegerWord
                              (auVar24,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60
                              );
          lVar23 = lVar23 + 0x50;
          auVar26 = loadVectorLeftIndexed(100,0x5086d0);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = vectorConditionalSelect
                              (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar32
                               ,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar18 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x3c,
                              lVar15);
          *(undefined4 *)(uVar9 + 0x3c & 0xfffffffc) = uVar18;
          *puVar16 = uVar5;
          lVar15 = lVar15 + 0x50;
          puVar16 = puVar16 + 1;
          param_2[2] = param_2[2] + 1;
        }
      }
LAB_00508b24:
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0x70;
      uVar20 = uVar20 + 0x70;
    } while (uVar21 < uVar2);
  }
  return;
}


