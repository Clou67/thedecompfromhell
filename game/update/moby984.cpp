// game/update/moby984.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x4caa88-0x4cdc70
#include <stdlib.h>
#include "game/update/moby984.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby819.h"
#include "game/update/moby983.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x04caa88 (0x98 bytes)
void FUN_004caa88(undefined4 param_1,f32 *param_2,undefined4 param_3)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(0x3d7);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    (pMVar3->pos).x = *param_2;
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    fVar1 = param_2[3];
    *(undefined4 *)((int)pvVar2 + 0x28) = 5;
    (pMVar3->pos).w = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x24) = 0;
    *(undefined4 *)((int)pvVar2 + 0x34) = param_3;
    *(undefined4 *)((int)pvVar2 + 0x20) = param_1;
  }
  return;
}


// 0x04cab28 (0xa8 bytes)
void FUN_004cab28(double param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  *(undefined4 *)(param_2 + 0x10) = *param_3;
  *(undefined4 *)(param_2 + 0x14) = param_3[1];
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  *(undefined4 *)(param_2 + 0x18) = param_3[2];
  *(undefined4 *)(param_2 + 0x1c) = param_3[3];
  auVar3 = loadVectorLeftIndexed(in_r0,0x4cab20);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  puVar1 = *(undefined4 **)(param_2 + 0x78);
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x28,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 10) & 0xfffffffc) = uVar2;
  puVar1[9] = (float)param_1;
  if ((param_6 != 0) && (*(char *)(param_2 + 0x20) == '\0')) {
    *(undefined1 *)(param_2 + 0x20) = 1;
    puVar1[10] = 0;
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
  }
  return;
}


// 0x04cabd8 (0x7f4 bytes)
// inlined: FastAtan2 @0x4cad14, FastAtan2 @0x4caecc
void M984_004cabd8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  ulonglong *puVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  longlong lVar21;
  ulonglong unaff_r20;
  undefined4 *puVar22;
  ulonglong unaff_r21;
  undefined4 *puVar24;
  longlong lVar23;
  ulonglong unaff_r22;
  longlong lVar25;
  ulonglong unaff_r23;
  longlong lVar26;
  ulonglong unaff_r24;
  undefined4 *puVar27;
  ulonglong unaff_r25;
  undefined4 *puVar28;
  ulonglong unaff_r26;
  int iVar29;
  ulonglong unaff_r27;
  int iVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar31;
  int iVar32;
  ulonglong unaff_r30;
  int iVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar21 = uVar16 - 0x490;
  puVar12 = (ulonglong *)lVar21;
  *puVar12 = uVar16;
  puVar12[0x94] = in_LR;
  puVar12[0x90] = unaff_r30;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  puVar12[0x84] = unaff_r18;
  fVar3 = GameCamera.posX - fVar1;
  fVar6 = GameCamera.posY - fVar2;
  fVar14 = 0.0;
  fVar4 = ABS(fVar3);
  fVar10 = ABS(fVar6);
  *(float *)((int)puVar12 + 0x3cc) = fVar3;
  puVar12[0x91] = unaff_r31;
  *(float *)(puVar12 + 0x7a) = fVar6;
  iVar11 = *(int *)(param_1 + 0x78);
  *(undefined4 *)((int)puVar12 + 0x7c) = 0;
  *(float *)((int)puVar12 + 0x3d4) = fVar4 - fVar10;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  fVar3 = *(float *)(param_1 + 0x18);
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x3cc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x3d4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x7a) >> 0x1d) & 4;
  fVar6 = ABS(*(float *)((int)puVar12 + 0x3cc));
  if (*(float *)((int)puVar12 + 0x3d4) - 0.0 < 0.0) {
    fVar6 = fVar10;
  }
  fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar12 + 0x7a));
  if (*(float *)((int)puVar12 + 0x3d4) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  puVar12[0x8f] = unaff_r29;
  puVar12[0x8e] = unaff_r28;
  puVar12[0x8d] = unaff_r27;
  puVar12[0x8c] = unaff_r26;
  puVar12[0x8b] = unaff_r25;
  puVar12[0x8a] = unaff_r24;
  puVar12[0x89] = unaff_r23;
  puVar12[0x88] = unaff_r22;
  puVar12[0x87] = unaff_r21;
  puVar12[0x86] = unaff_r20;
  puVar12[0x85] = unaff_r19;
  puVar12[0x83] = unaff_r17;
  fVar15 = fVar14;
  if (0.0 < fVar6) {
    lVar31 = uVar16 - 0x480;
    lVar25 = uVar16 - 0x88;
    lVar23 = uVar16 - 0x98;
    lVar26 = 2;
    fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
    fVar5 = fVar6 * fVar6;
    *(float *)((int)puVar12 + 0x404) = fVar6;
    *(float *)((int)puVar12 + 0x3fc) = fVar6;
    *(float *)(puVar12 + 0x80) = fVar6;
    *(float *)(puVar12 + 0x7f) = fVar6;
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar12 + 0x3fc) = *(float *)((int)puVar12 + 0x3fc) * fVar5;
    *(float *)(puVar12 + 0x80) = *(float *)(puVar12 + 0x80) * fVar6;
    *(float *)((int)puVar12 + 0x404) = *(float *)((int)puVar12 + 0x404) * fVar6 * fVar5;
    do {
      *(float *)((int)lVar31 + 0x3f8) = *(float *)((int)lVar31 + 1000) * fVar6 * fVar6;
      iVar29 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar29 + 4) * fVar6 * fVar6;
      lVar25 = lVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar25 = uVar16 - 0x98;
    pfVar19 = (float *)&DAT_007358e0;
    lVar31 = lVar21;
    lVar23 = lVar25;
    do {
      fVar6 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar31 + 0x3f8) = *(float *)((int)lVar31 + 0x3f8) * fVar6;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar23 = 2;
    lVar31 = lVar21;
    fVar6 = fVar14;
    do {
      iVar29 = (int)lVar31;
      iVar30 = (int)lVar25;
      lVar31 = lVar31 + 0x10;
      lVar25 = lVar25 + 0x10;
      fVar6 = fVar6 + *(float *)(iVar29 + 0x3f8) + *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
              *(float *)(iVar30 + 0xc);
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    fVar15 = (fVar6 + 0.7853982) * fVar10 + fVar4;
  }
  fVar6 = GameCamera.posZ;
  fVar2 = fVar2 - GameCamera.posY;
  fVar1 = fVar1 - GameCamera.posX;
  *(float *)(puVar12 + 0xf) = fVar15;
  fVar6 = fVar6 - fVar3;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)((int)puVar12 + 0x3c4) = fVar6;
  fVar6 = ABS(fVar6);
  fVar2 = ABS(fVar1);
  *(float *)(puVar12 + 0x78) = fVar1;
  *(float *)(puVar12 + 0x79) = fVar2 - fVar6;
  uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x78) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x79) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x3c4) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar12 + 0x78));
  if (*(float *)(puVar12 + 0x79) - 0.0 < 0.0) {
    fVar1 = fVar6;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar6 = ABS(*(float *)((int)puVar12 + 0x3c4));
  if (*(float *)(puVar12 + 0x79) - 0.0 < 0.0) {
    fVar6 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar31 = uVar16 - 0x480;
    lVar25 = uVar16 - 0xa8;
    lVar23 = uVar16 - 0xb8;
    lVar26 = 2;
    fVar1 = (fVar6 - fVar1) / (fVar6 + fVar1);
    fVar6 = fVar1 * fVar1;
    *(float *)((int)puVar12 + 0x3e4) = fVar1;
    *(float *)((int)puVar12 + 0x3dc) = fVar1;
    *(float *)(puVar12 + 0x7c) = fVar1;
    *(float *)(puVar12 + 0x7b) = fVar1;
    fVar1 = fVar6 * fVar6;
    *(float *)((int)puVar12 + 0x3dc) = *(float *)((int)puVar12 + 0x3dc) * fVar6;
    *(float *)(puVar12 + 0x7c) = *(float *)(puVar12 + 0x7c) * fVar1;
    *(float *)((int)puVar12 + 0x3e4) = *(float *)((int)puVar12 + 0x3e4) * fVar1 * fVar6;
    do {
      *(float *)((int)lVar31 + 0x3d8) = *(float *)((int)lVar31 + 0x3c8) * fVar1 * fVar1;
      iVar29 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar29 + 4) * fVar1 * fVar1;
      lVar25 = lVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar25 = uVar16 - 0xb8;
    pfVar19 = (float *)&DAT_007358e0;
    lVar31 = lVar21;
    lVar23 = lVar25;
    do {
      fVar1 = *pfVar19;
      fVar6 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar31 + 0x3d8) = *(float *)((int)lVar31 + 0x3d8) * fVar1;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar23 = 2;
    lVar31 = lVar21;
    do {
      iVar29 = (int)lVar31;
      lVar31 = lVar31 + 0x10;
      iVar30 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      fVar14 = fVar14 + *(float *)(iVar29 + 0x3d8) + *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8)
               + *(float *)(iVar30 + 0xc);
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    fVar14 = (fVar14 + 0.7853982) * fVar3 + fVar2;
  }
  lVar31 = uVar16 - 0x420;
  *(float *)((int)puVar12 + 0x74) = -fVar14;
  FastEulerToMtx1(uVar16 - 0x410,lVar31);
  FastEulerToMtx1(uVar16 - 0x3d0,lVar31);
  fVar1 = *(float *)(iVar11 + 0x24);
  uVar18 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar1;
  *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar1;
  *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar1;
  fVar1 = *(float *)(iVar11 + 0x24);
  *(undefined4 *)(puVar12 + 0x16) = uVar18;
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar12 + 0xb4) = uVar7;
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar12 + 0x17) = uVar8;
  *(undefined4 *)((int)puVar12 + 0xbc) = uVar9;
  *(undefined4 *)(puVar12 + 0x1e) = uVar18;
  *(undefined4 *)((int)puVar12 + 0xf4) = uVar7;
  *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar1;
  *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar1;
  *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar1;
  *(undefined4 *)(puVar12 + 0x1f) = uVar8;
  *(undefined4 *)((int)puVar12 + 0xfc) = uVar9;
  *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(iVar11 + 0x2c);
  FastEulerToMtx1(uVar16 - 0x390,lVar31);
  fVar1 = *(float *)(iVar11 + 0x24);
  uVar18 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar1;
  *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar1;
  *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar1;
  fVar1 = *(float *)(iVar11 + 0x24);
  *(undefined4 *)(puVar12 + 0x26) = uVar18;
  uVar18 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar12 + 0x134) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar12 + 0x27) = uVar18;
  *(undefined4 *)((int)puVar12 + 0x13c) = uVar7;
  *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar1;
  *(float *)((int)puVar12 + 0x124) = *(float *)((int)puVar12 + 0x124) * fVar1;
  *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar1;
  *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(iVar11 + 0x30);
  FastEulerToMtx1(uVar16 - 0x350,lVar31);
  fVar1 = *(float *)(iVar11 + 0x24);
  iVar30 = 0;
  iVar29 = 0;
  lVar31 = uVar16 - 0x310;
  uVar18 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar1;
  *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar1;
  *(float *)(puVar12 + 0x2b) = *(float *)(puVar12 + 0x2b) * fVar1;
  fVar1 = *(float *)(iVar11 + 0x24);
  *(undefined4 *)(puVar12 + 0x2e) = uVar18;
  uVar18 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar12 + 0x174) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar12 + 0x2f) = uVar18;
  iVar33 = 0;
  *(undefined4 *)((int)puVar12 + 0x17c) = uVar7;
  *(float *)(puVar12 + 0x2c) = *(float *)(puVar12 + 0x2c) * fVar1;
  *(float *)((int)puVar12 + 0x164) = *(float *)((int)puVar12 + 0x164) * fVar1;
  *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar1;
  do {
    uVar17 = GetEffectTex(*(undefined4 *)((int)&DAT_008f4f3c + iVar30));
    iVar32 = (int)lVar21;
    *(undefined8 *)(iVar32 + 0x1f8) = uVar17;
    uVar17 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar32 + 0x200) = uVar17;
    uVar17 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    *(undefined8 *)(iVar32 + 0x1f0) = uVar17;
    uVar17 = idol_draw::PackCmd(DAT_010e47e0,DAT_008f4f24,DAT_010e47e4,DAT_008f4f28,0x80);
    *(undefined8 *)(iVar32 + 0x208) = uVar17;
    puVar22 = (undefined4 *)((int)&DAT_008f4f70 + iVar29);
    iVar32 = 0;
    puVar28 = &DAT_008f4f4c;
    puVar27 = &DAT_008f4f50;
    lVar23 = lVar31;
    lVar25 = lVar21;
    lVar26 = lVar21;
    do {
      uVar18 = *puVar27;
      *(undefined4 *)((int)lVar26 + 0x1d0) = *puVar28;
      *(undefined4 *)((int)lVar26 + 0x1d4) = uVar18;
      if (iVar33 == 0) {
        uVar18 = FastLerpColor
                           ((double)*(float *)(iVar11 + 0x24),
                            *(uint *)((int)&DAT_008f4f2c + iVar30) & 0xffffff,
                            *(uint *)((int)&DAT_008f4f2c + iVar30));
      }
      else {
        uVar18 = *(undefined4 *)((int)&DAT_008f4f2c + iVar30);
      }
      *(undefined4 *)((int)lVar25 + 0x1c0) = uVar18;
      iVar32 = iVar32 + 1;
      puVar28 = puVar28 + 2;
      puVar24 = (undefined4 *)lVar23;
      *puVar24 = *puVar22;
      lVar26 = lVar26 + 8;
      puVar27 = puVar27 + 2;
      puVar24[1] = puVar22[1];
      lVar25 = lVar25 + 4;
      puVar24[2] = puVar22[2];
      puVar13 = puVar22 + 3;
      puVar22 = puVar22 + 4;
      puVar24[3] = *puVar13;
      lVar23 = lVar23 + 0x10;
    } while (iVar32 < 4);
    iVar33 = iVar33 + 1;
    iVar30 = iVar30 + 4;
    iVar29 = iVar29 + 0x40;
    lVar31 = lVar31 + 0x90;
    lVar21 = lVar21 + 0x90;
  } while (iVar33 < 4);
  FastDrawQuad(uVar16 - 0x310,uVar16 - 0x410,0,EffectTexHeaders,9);
  FastDrawQuad(uVar16 - 0x280,uVar16 - 0x3d0,0,EffectTexHeaders,9);
  FastDrawQuad(uVar16 - 0x1f0,uVar16 - 0x390,0,EffectTexHeaders,9);
  FastDrawQuad(uVar16 - 0x160,uVar16 - 0x350,0,EffectTexHeaders,9);
  return;
}


// 0x04cb3e8 (0x538 bytes)
// inlined: FastRSqrt @0x4cb59c
void M984_004cb3e8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  undefined4 *puVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float *pfVar24;
  ulonglong unaff_r31;
  longlong lVar25;
  float *pfVar26;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar38;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  double dVar41;
  ulonglong in_f27;
  double dVar42;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x1a0;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x36] = in_LR;
  puVar10[0x26] = in_f18;
  puVar10[0x27] = in_f19;
  puVar10[0x28] = in_f20;
  puVar10[0x29] = in_f21;
  puVar10[0x2a] = in_f22;
  puVar10[0x2b] = in_f23;
  puVar10[0x2c] = in_f24;
  puVar10[0x2d] = in_f25;
  puVar10[0x2e] = in_f26;
  puVar10[0x2f] = in_f27;
  puVar10[0x30] = in_f28;
  puVar10[0x31] = in_f29;
  puVar10[0x32] = in_f30;
  puVar10[0x33] = in_f31;
  puVar10[0x25] = unaff_r31;
  puVar10[0x24] = unaff_r30;
  puVar10[0x23] = unaff_r29;
  puVar10[0x22] = unaff_r28;
  puVar10[0x21] = unaff_r27;
  puVar10[0x20] = unaff_r26;
  uVar15 = GetEffectTex(0xb);
  puVar10[0x1d] = uVar15;
  uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1f] = uVar15;
  uVar15 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar10[0x1e] = uVar15;
  uVar15 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x10);
  dVar30 = (double)GameCamera.posY;
  dVar28 = (double)GameCamera.posX;
  fVar1 = (float)(dVar30 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar5);
  dVar31 = (double)GameCamera.posZ;
  fVar6 = *(float *)(param_1 + 0x18);
  fVar3 = (float)(dVar31 - (double)fVar6);
  puVar10[0x1c] = uVar15;
  uVar7 = DAT_008f5270;
  dVar39 = 0.0;
  dVar40 = (double)(float)GameCamera.field8_0x14c;
  fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar12 = 0.3 / fVar11;
  dVar38 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar38 = (double)(fVar1 * fVar12);
  }
  dVar44 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar44 = (double)(fVar2 * fVar12);
  }
  dVar32 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar32 = (double)(fVar3 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar38 = (double)(fVar1 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar44 = (double)(fVar2 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar32 = (double)(fVar3 * fVar12);
  }
  dVar45 = (double)(float)(dVar38 + (double)fVar4);
  dVar46 = (double)(float)(dVar44 + (double)fVar5);
  dVar44 = (double)(float)(dVar32 + (double)fVar6);
  fVar1 = (float)(dVar30 - dVar45);
  fVar2 = (float)(dVar28 - dVar46);
  fVar3 = (float)(dVar31 - dVar44);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar38 = dVar39;
  dVar28 = dVar39;
  dVar30 = dVar39;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar38 = (double)(fVar2 * fVar5);
    dVar28 = (double)(fVar1 * fVar5);
    dVar30 = (double)(fVar3 * fVar5);
  }
  fVar1 = (float)((double)DAT_00969f78 * dVar38 -
                 (double)(float)((double)g_heroGravityDir * dVar30));
  fVar2 = (float)((double)DAT_00969f74 * dVar30 - (double)(float)((double)DAT_00969f78 * dVar28));
  fVar3 = (float)((double)g_heroGravityDir * dVar28 -
                 (double)(float)((double)DAT_00969f74 * dVar38));
  *(undefined4 *)((int)puVar10 + 0xbc) = DAT_008f5270;
  *(undefined4 *)(puVar10 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar10 + 0xb4) = uVar7;
  *(undefined4 *)(puVar10 + 0x16) = uVar7;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar31 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar31 = (double)(fVar2 * fVar5);
  }
  dVar32 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar32 = (double)(fVar1 * fVar5);
  }
  dVar34 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar34 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar31 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar32 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar34 = (double)(fVar3 * fVar5);
  }
  dVar41 = (double)(float)(dVar38 * dVar32 - (double)(float)(dVar28 * dVar31));
  dVar43 = (double)(float)(dVar28 * dVar34 - (double)(float)(dVar30 * dVar32));
  dVar42 = (double)(float)(dVar30 * dVar31 - (double)(float)(dVar38 * dVar34));
  dVar29 = (double)MB_randRangeSigned(0,0x3f999999a0000000);
  puVar18 = &DAT_008f5250;
  lVar25 = uVar14 - 0x130;
  dVar29 = (double)(float)((double)DAT_008f5278 + dVar29);
  pfVar24 = (float *)&DAT_008f5210;
  puVar23 = &DAT_008f5254;
  lVar27 = 4;
  lVar16 = lVar17;
  lVar21 = lVar25;
  puVar20 = puVar23;
  puVar19 = puVar18;
  pfVar26 = pfVar24;
  do {
    fVar2 = *pfVar26;
    fVar1 = (float)((double)fVar2 * dVar29);
    dVar33 = (double)fVar1;
    pfVar22 = (float *)lVar21;
    *pfVar22 = fVar1;
    dVar35 = (double)pfVar26[1];
    pfVar22[1] = (float)(dVar35 * dVar29);
    dVar36 = (double)(float)((double)pfVar26[2] * dVar29);
    pfVar22[2] = (float)((double)pfVar26[2] * dVar29);
    dVar37 = (double)pfVar26[3];
    pfVar26 = pfVar26 + 4;
    pfVar22[3] = (float)((double)fVar2 * (double)(float)(dVar29 * dVar40) + dVar37);
    *pfVar22 = (float)(dVar37 * dVar46 +
                      (double)(float)(dVar36 * dVar43 +
                                     (double)(float)(dVar33 * dVar38 +
                                                    (double)(float)(dVar35 * (double)(float)(dVar29 
                                                  * dVar31)))));
    pfVar22[1] = (float)(dVar37 * dVar45 +
                        (double)(float)(dVar36 * dVar42 +
                                       (double)(float)(dVar33 * dVar28 +
                                                      (double)(float)(dVar35 * (double)(float)(
                                                  dVar29 * dVar32)))));
    pfVar22[2] = (float)(dVar37 * dVar44 +
                        (double)(float)(dVar36 * dVar41 +
                                       (double)(float)(dVar33 * dVar30 +
                                                      (double)(float)(dVar35 * (double)(float)(
                                                  dVar29 * dVar34)))));
    uVar7 = *puVar19;
    lVar21 = lVar21 + 0x10;
    uVar8 = *puVar20;
    puVar19 = puVar19 + 2;
    *(undefined4 *)((int)lVar16 + 0xc0) = uVar7;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar16 + 0xc4) = uVar8;
    lVar16 = lVar16 + 8;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  FastDrawQuad(uVar14 - 0x130,0,0,EffectTexHeaders,9);
  puVar13 = PTR_DAT_008f51c4;
  *(undefined **)((int)puVar10 + 0xbc) = PTR_DAT_008f51c4;
  *(undefined **)(puVar10 + 0x17) = puVar13;
  *(undefined **)((int)puVar10 + 0xb4) = puVar13;
  *(undefined **)(puVar10 + 0x16) = puVar13;
  dVar39 = (double)MB_randRangeSigned(dVar39,0x3fa99999a0000000);
  uVar7 = EffectTexHeaders;
  lVar16 = 4;
  dVar39 = (double)(float)((double)DAT_008f527c + dVar39);
  do {
    fVar2 = *pfVar24;
    fVar1 = (float)((double)fVar2 * dVar39);
    dVar29 = (double)fVar1;
    pfVar26 = (float *)lVar25;
    *pfVar26 = fVar1;
    dVar33 = (double)pfVar24[1];
    pfVar26[1] = (float)(dVar33 * dVar39);
    dVar35 = (double)(float)((double)pfVar24[2] * dVar39);
    pfVar26[2] = (float)((double)pfVar24[2] * dVar39);
    dVar36 = (double)pfVar24[3];
    pfVar24 = pfVar24 + 4;
    pfVar26[3] = (float)((double)fVar2 * (double)(float)(dVar39 * dVar40) + dVar36);
    *pfVar26 = (float)(dVar36 * dVar46 +
                      (double)(float)(dVar35 * dVar43 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar33 * (double)(float)(dVar39 
                                                  * dVar31)))));
    pfVar26[1] = (float)(dVar36 * dVar45 +
                        (double)(float)(dVar35 * dVar42 +
                                       (double)(float)(dVar29 * dVar28 +
                                                      (double)(float)(dVar33 * (double)(float)(
                                                  dVar39 * dVar32)))));
    pfVar26[2] = (float)(dVar36 * dVar44 +
                        (double)(float)(dVar35 * dVar41 +
                                       (double)(float)(dVar29 * dVar30 +
                                                      (double)(float)(dVar33 * (double)(float)(
                                                  dVar39 * dVar34)))));
    uVar8 = *puVar18;
    lVar25 = lVar25 + 0x10;
    uVar9 = *puVar23;
    puVar18 = puVar18 + 2;
    *(undefined4 *)((int)lVar17 + 0xc0) = uVar8;
    puVar23 = puVar23 + 2;
    *(undefined4 *)((int)lVar17 + 0xc4) = uVar9;
    lVar17 = lVar17 + 8;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(uVar14 - 0x130,0,0,uVar7,9);
  return;
}


// 0x04cb930 (0x7e4 bytes)
// inlined: FastRSqrt @0x4cbb8c, FastRSqrt @0x4cbca4, FastRSqrt @0x4cbf4c
void M984_004cb930(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  GPiece<144> local_1d0;
  GPiece<152> local_140;
  
  GetEffectTex(DAT_008f5208);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  GetEffectTex(DAT_008f520c);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  return;
}


// 0x04cc120 (0x1d0 bytes)
void M984_004cc120(undefined8 param_1)

{
  undefined8 uVar1;
  
  DAT_010e4c64 = -(DAT_0071f408 * DAT_008f51bc - DAT_010e4c64);
  if (DAT_010e4c64 <= -8.0) {
    DAT_010e4c64 = DAT_010e4c64 + 8.0;
  }
  M984_004cb930((double)DAT_008f51c8,(double)DAT_008f51cc,(double)DAT_008f5200,&DAT_010e47f0,
                DAT_008f51a8,DAT_008f51b0);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,(double)DAT_008f5204,&DAT_010e4930,
                DAT_008f51d0,DAT_008f51d4);
  uVar1 = 0x3fc99999a0000000;
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,0x3fc99999a0000000,&DAT_010e4c70,
                DAT_010e4db8,DAT_010e4db8);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,uVar1,&DAT_010e4cc0,DAT_010e4dba,
                DAT_010e4dba);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,uVar1,&DAT_010e4d10,DAT_010e4dbc,
                DAT_010e4dbc);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,uVar1,&DAT_010e4d60,DAT_010e4dbe,
                DAT_010e4dbe);
  M984_004cb3e8(param_1);
  return;
}


// 0x04cc2f0 (0x14 bytes)
void M984_004cc2f0(void)

{
  DAT_008f52cc = 0x10000;
  return;
}


// 0x04cc328 (0x15c bytes)
/* Moby 984 */

void UpdateMoby_984(MobyInstance *moby)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pfVar1 = (float *)moby->pVar;
  moby->scale = moby->pClass->gScale * DAT_008f52f0;
  if (moby->state == 0) {
    moby->state = '\x01';
    dVar2 = (double)MB_randRot();
    *pfVar1 = (float)dVar2;
    pfVar1[1] = (moby->pos).z;
  }
  else if (moby->state < 2) {
    if (g_gameMode == GAME_MODE_SCENE) {
      moby->enabled = '\0';
      moby->modeBits = moby->modeBits | DISABLED;
    }
    else {
      moby->enabled = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    dVar3 = (double)FastWrapRot(*pfVar1,g_FrameTime * 0.87266463);
    dVar2 = (double)(float)(3.141592502593994 - dVar3);
    if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
      dVar2 = dVar3;
    }
    dVar4 = (double)(float)(-3.141592502593994 - dVar3);
    if ((double)(float)(-3.141592502593994 - dVar3) - dVar2 < 0.0) {
      dVar4 = dVar2;
    }
    *pfVar1 = (float)dVar3;
    dVar5 = (double)(float)(dVar4 * dVar4);
    dVar2 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
    dVar3 = (double)(float)(dVar5 * dVar2);
    (moby->pos).z =
         pfVar1[1] +
         (float)(dVar5 * dVar3) * 2.601887e-06 +
         (float)(dVar3 * -0.0001980741071747616 +
                (double)(float)(dVar2 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204
                                              + dVar4)));
  }
  return;
}


// 0x04cc4a8 (0x83c bytes)
// inlined: FastAtan2 @0x4cc73c, FastAtan2 @0x4cc9cc
void M984_004cc4a8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  void *pvVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar10;
  puVar9[0x22] = in_LR;
  puVar9[0x1f] = in_f31;
  puVar9[0x1e] = unaff_r31;
  fVar4 = DAT_008f52f4;
  pMVar5 = param_1->pClass;
  puVar9[0x1d] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  param_1->scale = pMVar5->gScale * fVar4;
  *(float *)((int)pvVar6 + 0xf4) = DAT_008f5324 * g_FrameTime;
  param_1->unk58 = 1.0;
  dVar25 = 0.0;
  puVar9[0x1c] = unaff_r29;
  puVar9[0x1b] = unaff_r28;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar13 = MB_damage(param_1,0x330000,0);
  iVar14 = MB_HandleDamage
                     (param_1,iVar13,uVar20 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\x06')) {
    iVar7 = *(int *)(iVar13 + 0x20);
    fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar6 + 0x20) = fVar4;
    iVar14 = iVar14 + ((uint)(ZERO_MASK((0x47 - (uint)*(ushort *)(iVar7 + 0xa6)))) &
                      3U - iVar14);
    if ((double)fVar4 <= dVar25) {
      iVar14 = 1;
    }
    uVar15 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f52f8;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x80) = fVar1 * fVar4;
    fVar4 = g_FrameTime;
    if (iVar14 < 3) {
      if ((-1 < iVar14) && (0 < iVar14)) {
        fVar4 = DAT_008f52f8 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x80) = fVar4;
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008f5308 * g_FrameTime;
        fVar1 = DAT_008f5304;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar1;
        *(float *)(puVar9 + 0x11) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x58;
          lVar16 = uVar10 - 0x68;
          lVar21 = 2;
          fVar2 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xa4) = fVar2;
          *(float *)((int)puVar9 + 0x9c) = fVar2;
          *(float *)(puVar9 + 0x14) = fVar2;
          *(float *)(puVar9 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar2;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar2 * fVar2;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x68;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar2 = *pfVar17;
            fVar3 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar2;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x84,uVar20 + 0x88,uVar20 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar20 + 0x70);
        param_1->state = '\x06';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar14 < 0xb) {
      if (iVar14 < 9) {
        *(float *)((int)pvVar6 + 0x88) = DAT_008f5300 * g_FrameTime;
        fVar1 = DAT_008f52fc;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x8c) = fVar4;
        *(float *)(puVar9 + 0x12) = fVar1;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x38;
          lVar16 = uVar10 - 0x48;
          lVar21 = 2;
          fVar2 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xc4) = fVar2;
          *(float *)((int)puVar9 + 0xbc) = fVar2;
          *(float *)(puVar9 + 0x18) = fVar2;
          *(float *)(puVar9 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar2;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar2 * fVar2;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x48;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar2 = *pfVar17;
            fVar3 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar2;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x88,uVar20 + 0x88,uVar20 + 0x8c);
        MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar20 + 0x70);
        param_1->state = '\x05';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    dVar25 = (double)MB_randRangeFloat(180.0,240.0);
    uVar15 = FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x188) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  FastDecTimerS32(uVar20 + 0x188);
  if (*(int *)((int)pvVar6 + 0x188) == 0) {
    fVar4 = *(float *)((int)pvVar6 + 0x194);
  }
  else {
    fVar4 = *(float *)((int)pvVar6 + 0x194) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x18c) = fVar4;
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x180)];
  iVar13 = MB_getTargetInArea
                     (param_1,uVar20 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar13 != 2) &&
     ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
      fVar1 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
      *(float *)((int)pvVar6 + 0x18c) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x04ccd48 (0xdf8 bytes)
// inlined: FastAtan2 @0x4ccf58, FastAtan2 @0x4cd1e0, FastAtan2 @0x4cd768
/* Moby 986 */

void M984_004ccd48(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar23;
  uint uVar24;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  float fVar38;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x180;
  puVar11 = (ulonglong *)lVar22;
  *puVar11 = uVar18;
  puVar11[0x32] = in_LR;
  puVar11[0x2d] = in_f29;
  puVar11[0x2e] = in_f30;
  puVar11[0x2f] = in_f31;
  puVar11[0x2c] = unaff_r31;
  puVar11[0x2b] = unaff_r30;
  pvVar9 = moby->pVar;
  uVar30 = ZEXT48(pvVar9);
  dVar33 = 1.0;
  puVar11[0x2a] = unaff_r29;
  moby->unk58 = 1.0;
  M984_004cc4a8();
  uVar1 = moby->state;
  iVar25 = *(int *)((int)pvVar9 + 0x160);
  if (uVar1 == '\x06') {
    uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar24 & 0x161) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_004ccce4,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x05') {
    uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar24 & 0x40) == 0) {
      if ((uVar24 & 0x120) == 0) {
        if (*(short *)((int)pvVar9 + 0xae) == 2) {
          moby->unk58 = DAT_008f5320;
        }
      }
      else {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar11 + 0x13c));
      }
    }
  }
  else if (uVar1 == '\x04') {
    fVar38 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
    fVar3 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
    fVar2 = ABS(fVar38);
    fVar4 = ABS(fVar3);
    *(float *)(puVar11 + 0x16) = fVar38;
    *(float *)((int)puVar11 + 0xb4) = fVar3;
    *(float *)(puVar11 + 0x17) = fVar2 - fVar4;
    dVar33 = 0.0;
    uVar30 = (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1d) & 4;
    fVar38 = ABS(*(float *)(puVar11 + 0x16));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar38 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
    fVar3 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar11 + 0xb4));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    dVar32 = dVar33;
    if (0.0 < fVar38) {
      lVar21 = uVar18 - 0x170;
      lVar27 = uVar18 - 0xac;
      lVar29 = uVar18 - 0x9c;
      lVar31 = 2;
      fVar38 = (fVar8 - fVar38) / (fVar8 + fVar38);
      fVar2 = fVar38 * fVar38;
      *(float *)(puVar11 + 0x1c) = fVar38;
      *(float *)(puVar11 + 0x1b) = fVar38;
      *(float *)((int)puVar11 + 0xdc) = fVar38;
      *(float *)((int)puVar11 + 0xd4) = fVar38;
      fVar38 = fVar2 * fVar2;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar2;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar38;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar38 * fVar2;
      do {
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xc4) * fVar38 * fVar38;
        iVar25 = (int)lVar27;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar38 * fVar38;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar18 - 0xac;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar27 = lVar29;
      do {
        fVar38 = *pfVar28;
        fVar2 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xd4) * fVar38;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar2;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar21 = 2;
      do {
        iVar25 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar26 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0xd4)) +
                          *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar3);
    }
    OrganicDeltAng
              ((float)dVar32,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 400));
    dVar32 = (double)BlendAnimFrame(moby);
    if ((dVar32 <= 10.0) || (40.0 <= dVar32)) {
      if ((moby->field43_0x70 & 2U) != 0) {
        dVar33 = (double)MB_randRangeFloat(45.0,90.0);
        uVar23 = FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar9 + 0x1a0) = uVar23;
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar11 + 0x13c));
        }
      }
    }
    else {
      pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
      fVar38 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      *(float *)(puVar11 + 0x14) = pSVar10->points[0].x - (moby->pos).x;
      fVar4 = g_FrameTime;
      *(float *)((int)puVar11 + 0xa4) = pSVar10->points[0].y - fVar38;
      *(float *)(puVar11 + 0x15) = pSVar10->points[0].z - fVar3;
      *(float *)((int)puVar11 + 0xac) = pSVar10->points[0].w;
      ClampVec3Magnitude((double)(fVar4 * 4.0),(Vec4 *)(uVar18 - 0xe0));
      MB_MoveAndCollide2
                ((double)DAT_008f5328,dVar33,lVar19,uVar18 - 0xe0,0x8f0000,DAT_008f532c);
    }
  }
  else if (uVar1 == '\x03') {
    iVar26 = FastDecTimerS32(uVar30 + 0x19c);
    if (iVar26 != 0) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x5330,0x8f0000);
      auVar34 = vectorConvertFromSignedFixedPointWord(auVar35,0);
      auVar35 = loadVectorLeftIndexed(0x28,0x4ccce4);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      fVar38 = *(float *)((int)pvVar9 + 0x198);
      auVar35 = vectorAddFloatingPoint
                          (auVar34,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x19c,uVar30
                         );
      *(undefined4 *)((int)pvVar9 + 0x19cU & 0xfffffffc) = uVar23;
      *(float *)((int)pvVar9 + 0x198) = fVar38 + DAT_008f5334;
      fVar8 = DAT_008f5338;
      fVar2 = g_FrameTime;
      fVar38 = (moby->rotation).z;
      fVar3 = fVar38 + 1.5707963;
      fVar4 = 3.1415925 - fVar38;
      if (fVar38 - (3.1415925 - fVar38) < 0.0) {
        fVar4 = fVar38;
      }
      fVar12 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar12 = fVar3;
      }
      fVar14 = -3.1415925 - fVar38;
      if ((-3.1415925 - fVar38) - fVar4 < 0.0) {
        fVar14 = fVar4;
      }
      fVar38 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
        fVar38 = fVar12;
      }
      fVar3 = fVar14 * fVar14;
      fVar4 = fVar38 * fVar38;
      fVar16 = fVar3 * fVar3 * fVar14;
      fVar5 = (moby->pos).x;
      fVar12 = fVar4 * fVar4 * fVar38;
      fVar17 = fVar3 * fVar16;
      fVar6 = (moby->pos).y;
      fVar7 = (moby->pos).w;
      *(float *)(puVar11 + 0x11) = (float)((double)(moby->pos).z + dVar33);
      *(f32 *)((int)puVar11 + 0x8c) = fVar7;
      fVar15 = fVar4 * fVar12;
      *(f32 *)((int)puVar11 + 0x84) = fVar6;
      *(f32 *)(puVar11 + 0x10) = fVar5;
      *(undefined4 *)(puVar11 + 0x13) = 0;
      *(float *)((int)puVar11 + 0x94) =
           fVar8 * fVar2 *
           (fVar3 * fVar17 * 2.601887e-06 +
           fVar17 * -0.0001980741 + fVar16 * 0.0083330255 + fVar3 * fVar14 * -0.16666657 + fVar14);
      *(float *)(puVar11 + 0x12) =
           fVar8 * fVar2 *
           (fVar4 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar38 * -0.16666657 + fVar38);
      fVar38 = animationSpeed;
      *(float *)(puVar11 + 0x13) = fVar8 * fVar2 * (-1.0 / *(float *)((int)pvVar9 + 0x198));
      puVar11[0x27] = (longlong)(int)(fVar38 * 180.5);
      FUN_00470690(dVar33,uVar18 - 0xf0,uVar18 - 0x100,lVar19,iVar25,
                   *(undefined4 *)((int)puVar11 + 0x13c));
      uVar24 = (int)*(uint *)((int)pvVar9 + 0x198) >> 0x1f;
      if ((0x41a00000 < (int)((uVar24 >> 1 ^ *(uint *)((int)pvVar9 + 0x198)) - uVar24)) &&
         (moby->state = '\x04', moby->animationId != '\x01')) {
        puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar11 + 0x13c));
      }
    }
  }
  else if (uVar1 == '\x02') {
    fVar38 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
    fVar3 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
    fVar2 = ABS(fVar38);
    fVar4 = ABS(fVar3);
    *(float *)((int)puVar11 + 0xbc) = fVar38;
    *(float *)(puVar11 + 0x18) = fVar3;
    *(float *)((int)puVar11 + 0xc4) = fVar2 - fVar4;
    dVar33 = 0.0;
    uVar30 = (ulonglong)(*(uint *)((int)puVar11 + 0xbc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1d) & 4;
    fVar38 = ABS(*(float *)((int)puVar11 + 0xbc));
    if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
      fVar38 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
    fVar3 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar11 + 0x18));
    if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    dVar32 = dVar33;
    if (0.0 < fVar38) {
      lVar21 = uVar18 - 0x170;
      lVar27 = uVar18 - 0x8c;
      lVar29 = uVar18 - 0x7c;
      lVar31 = 2;
      fVar38 = (fVar8 - fVar38) / (fVar8 + fVar38);
      fVar2 = fVar38 * fVar38;
      *(float *)(puVar11 + 0x20) = fVar38;
      *(float *)(puVar11 + 0x1f) = fVar38;
      *(float *)((int)puVar11 + 0xfc) = fVar38;
      *(float *)((int)puVar11 + 0xf4) = fVar38;
      fVar38 = fVar2 * fVar2;
      *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar2;
      *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar38;
      *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar38 * fVar2;
      do {
        *(float *)((int)lVar21 + 0xf4) = *(float *)((int)lVar21 + 0xe4) * fVar38 * fVar38;
        iVar25 = (int)lVar27;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar38 * fVar38;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar18 - 0x8c;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar27 = lVar29;
      do {
        fVar38 = *pfVar28;
        fVar2 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0xf4) = *(float *)((int)lVar21 + 0xf4) * fVar38;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar2;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar21 = 2;
      do {
        iVar25 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar26 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0xf4)) +
                          *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar3);
    }
    OrganicDeltAng
              ((float)dVar32,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 400));
    dVar32 = (double)BlendAnimFrame(moby);
    if (((dVar32 <= 10.0) || (40.0 <= dVar32)) || (moby->animationBlend != 0.0)) {
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined4 *)((int)pvVar9 + 0x198) = 0x3f800000;
        moby->state = '\x03';
        if (moby->animationId != '\0') {
          puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar11 + 0x13c));
        }
      }
    }
    else {
      fVar38 = (moby->pos).y;
      pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
      fVar3 = (moby->pos).z;
      *(float *)(puVar11 + 0xe) = pSVar10->points[1].x - (moby->pos).x;
      fVar4 = g_FrameTime;
      *(float *)((int)puVar11 + 0x74) = pSVar10->points[1].y - fVar38;
      *(float *)(puVar11 + 0xf) = pSVar10->points[1].z - fVar3;
      *(float *)((int)puVar11 + 0x7c) = pSVar10->points[1].w;
      ClampVec3Magnitude((double)(fVar4 * 8.0),(Vec4 *)(uVar18 - 0x110));
      MB_MoveAndCollide2
                ((double)DAT_008f5328,dVar33,lVar19,uVar18 - 0x110,0x8f0000,DAT_008f532c);
    }
  }
  else if (uVar1 == '\x01') {
    fVar38 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].x - (moby->pos).x;
    fVar3 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].y - (moby->pos).y;
    fVar4 = ABS(fVar38);
    fVar2 = ABS(fVar3);
    *(float *)(puVar11 + 0x19) = fVar38;
    *(float *)((int)puVar11 + 0xcc) = fVar3;
    *(float *)(puVar11 + 0x1a) = fVar4 - fVar2;
    fVar38 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xcc) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar11 + 0x19));
    if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0xcc));
    if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
      fVar12 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar21 = uVar18 - 0x170;
      lVar27 = uVar18 - 0x6c;
      lVar29 = uVar18 - 0x5c;
      lVar31 = 2;
      fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x24) = fVar3;
      *(float *)(puVar11 + 0x23) = fVar3;
      *(float *)((int)puVar11 + 0x11c) = fVar3;
      *(float *)((int)puVar11 + 0x114) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x23) = *(float *)(puVar11 + 0x23) * fVar4;
      *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar3;
      *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar21 + 0x114) = *(float *)((int)lVar21 + 0x104) * fVar3 * fVar3;
        iVar26 = (int)lVar27;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar18 - 0x6c;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar27 = lVar29;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0x114) = *(float *)((int)lVar21 + 0x114) * fVar3;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar21 = 2;
      do {
        iVar26 = (int)lVar22;
        iVar13 = (int)lVar29;
        lVar22 = lVar22 + 0x10;
        lVar29 = lVar29 + 0x10;
        fVar38 = fVar38 + *(float *)(iVar26 + 0x114) + *(float *)(iVar13 + 4) +
                 *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar38 = (fVar38 + 0.7853982) * fVar8 + fVar2;
    }
    fVar38 = OrganicDeltAng
                       (fVar38,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                        g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar9 + 400));
    if (((iVar25 != 0) && (*(int *)((int)pvVar9 + 0x164) != 2)) &&
       ((iVar25 = FastDecTimerS32((double)fVar38,uVar30 + 0x1a0), iVar25 != 0 &&
        (moby->state = '\x02', moby->animationId != '\x01')))) {
      puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar11 + 0x13c));
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
    *(undefined2 *)((int)pvVar9 + 0x24) = 2;
    *(undefined1 *)((int)pvVar9 + 0x28) = 1;
    MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
    *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
    *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f000000;
    uVar23 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar9 + 0xd0) = uVar23;
    uVar24 = rand();
    if ((uVar24 & 1) != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
    (moby->pos).x = pSVar10->points[0].x;
    (moby->pos).y = pSVar10->points[0].y;
    (moby->pos).z = pSVar10->points[0].z;
    fVar38 = pSVar10->points[0].w;
    moby->state = '\x01';
    (moby->pos).w = fVar38;
  }
  return;
}


// 0x04cdb40 (0x14 bytes)
void M984_004cdb40(void)

{
  DAT_008f5388 = 0x10000;
  return;
}


// 0x04cdb60 (0x110 bytes)
MobyInstance * M984_004cdb60(int param_1)

{
  int iVar1;
  MobyInstance *pMVar2;
  undefined8 uVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  pMVar2 = CreateMoby(99);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = *(char *)(param_1 + 0x30);
    pMVar2->drawDistance = *(short *)(param_1 + 0x32);
    pMVar2->enabled = *(char *)(param_1 + 0x31);
    (pMVar2->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar2->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar2->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar2->rotation).w = *(f32 *)(param_1 + 0x4c);
    (pMVar2->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar2->pos).y = *(f32 *)(param_1 + 0x14);
    iVar1 = *(int *)(iVar1 + 100);
    (pMVar2->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar2->pos).w = *(f32 *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      dVar4 = (double)FastWrapRot(*(float *)(param_1 + 0x48),3.1415927);
      (pMVar2->rotation).z = (float)dVar4;
    }
    else {
      dVar4 = (double)FastWrapRot(*(float *)(param_1 + 0x44),3.1415927);
      (pMVar2->rotation).y = (float)dVar4;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    pMVar2->state = '\x03';
    pMVar2->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar2->light = (int)uVar3;
    UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}


