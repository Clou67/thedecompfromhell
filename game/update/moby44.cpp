// game/update/moby44.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x37c1c0-0x3804b4
#include "game/update/moby44.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby408.h"
#include "game/update/moby439.h"
#include "game/update/moby78.h"
#include "game/update/moby935.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x037c1c0 (0x98 bytes)
void M439_0037c1c0(int param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 in_LR;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x78);
    if ((*(short *)(uVar1 + 0x19c) == 0) || (iVar3 = MB_randInt(0x10), iVar3 == 0)) {
      auVar4 = ZEXT416(0xffffffff);
      auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
      *(int *)(uVar1 + 0x198) = param_1;
      auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
      auVar4 = loadVectorLeftIndexed(in_LR,0x37c1b8);
      auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar4 = vectorMultiplyAddFloatingPoint
                         (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
      auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
      auVar4 = vectorSplatHalfWord(auVar4,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar4,0x19c,(ulonglong)uVar1);
      *(undefined2 *)(uVar1 + 0x19c) = uVar2;
    }
  }
  return;
}


// 0x037c268 (0x25c bytes)
void M44_0037c268(MobyInstance *param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  MobyInstance *pMVar9;
  ushort *puVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar5 = uVar7 - 0x30;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  pvVar2 = param_1->pVar;
  if (g_heroState == ANIM_TARGET_WALK) {
    *(undefined2 *)((int)pvVar2 + 0x156) = 0;
  }
  else if (param_1->group == 0xff) {
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(lVar5,0x37c258);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar11,0x156,ZEXT48(pvVar2));
    *(undefined2 *)((int)pvVar2 + 0x156) = uVar3;
  }
  else {
    puVar10 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
    if (puVar10 != (ushort *)0x0) {
      auVar11 = loadVectorLeftIndexed(8,0x37c258);
      auVar14 = loadVectorLeftIndexed(lVar5,0x37c258);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      do {
        uVar4 = *puVar10 & 0x7fff;
        if ((g_MobyInstance[uVar4].state < 0x80) && (g_MobyInstance[uVar4].oClass == SENTRY_BOT)) {
          iVar8 = CollLine(uVar7 - 0x50,uVar7 - 0x60,2,0,0);
          if (iVar8 == 0) {
            auVar14 = ZEXT416(0xffffffff);
            auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
            auVar13 = vectorShiftLeftIntegerWord(auVar14,auVar14);
            auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorMultiplyAddFloatingPoint(auVar14,auVar12,auVar13);
            pMVar9 = g_MobyInstance + uVar4;
            pvVar2 = pMVar9->pVar;
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = vectorSplatHalfWord(auVar13,1);
            uVar3 = storeVectorElementHalfWordIndexed(auVar13,0x156,ZEXT48(pvVar2));
            *(undefined2 *)((int)pvVar2 + 0x156) = uVar3;
            *(undefined1 *)((int)pvVar2 + 0x15b) = 0;
            if (param_1 != pMVar9) {
              pvVar2 = pMVar9->pVar;
              if (*(short *)((int)pvVar2 + 0x19c) != 0) {
                iVar8 = MB_randInt(0x10);
                if (iVar8 != 0) goto LAB_0037c480;
                auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              }
              auVar13 = ZEXT416(0xffffffff);
              auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
              auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
              *(MobyInstance **)((int)pvVar2 + 0x198) = param_1;
              auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
              auVar14 = vectorMultiplyAddFloatingPoint
                                  (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                                   auVar11,auVar13);
              auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
              auVar14 = vectorSplatHalfWord(auVar14,1);
              uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x19c,ZEXT48(pvVar2));
              *(undefined2 *)((int)pvVar2 + 0x19c) = uVar3;
            }
          }
        }
LAB_0037c480:
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x037c500 (0x5b0 bytes)
// inlined: FastAtan2 @0x37c604, FastAtan2 @0x37c7ec
bool M44_0037c500(double param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar7 = (ulonglong *)lVar16;
  *puVar7 = uVar14;
  puVar7[0x24] = in_LR;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1e] = unaff_r31;
  fVar1 = *param_4;
  puVar7[0x1d] = unaff_r30;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_2 + 0x14);
  fVar1 = fVar1 - *(float *)(param_2 + 0x10);
  puVar7[0x1b] = unaff_r28;
  fVar2 = fVar2 - fVar3;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar7 + 0x8c) = fVar1;
  puVar7[0x1c] = unaff_r29;
  *(float *)(puVar7 + 0x12) = fVar2;
  iVar6 = *(int *)(param_2 + 0x78);
  *(float *)((int)puVar7 + 0x94) = fVar4 - fVar3;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x8c));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  fVar5 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  dVar26 = 0.7853981852531433;
  dVar22 = dVar25;
  if (0.0 < fVar1) {
    lVar15 = uVar14 - 0x100;
    lVar18 = uVar14 - 0x48;
    lVar17 = uVar14 - 0x58;
    lVar21 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)((int)puVar7 + 0xc4) = fVar1;
    *(float *)((int)puVar7 + 0xbc) = fVar1;
    *(float *)(puVar7 + 0x18) = fVar1;
    *(float *)(puVar7 + 0x17) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar4;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar1;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar15 + 0xb8) = *(float *)((int)lVar15 + 0xa8) * fVar1 * fVar1;
      iVar8 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar14 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar18;
    do {
      fVar1 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar15 + 0xb8) = *(float *)((int)lVar15 + 0xb8) * fVar1;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0xb8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar2);
  }
  OrganicDeltAng
            ((float)dVar22,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
             g_FrameTime * 6.981317,(float *)(param_2 + 0x48),0x37c4c4,
             (float *)(iVar6 + 0x138));
  fVar1 = *param_4 - *(float *)(param_2 + 0x10);
  fVar2 = param_4[1] - *(float *)(param_2 + 0x14);
  dVar23 = ABS((double)fVar1);
  dVar24 = ABS((double)fVar2);
  *(float *)(puVar7 + 0x10) = fVar1;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  fVar1 = *(float *)(param_2 + 0x48);
  *(float *)(puVar7 + 0x11) = (float)(dVar23 - dVar24);
  uVar20 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
  dVar22 = ABS((double)*(float *)(puVar7 + 0x10));
  if ((double)*(float *)(puVar7 + 0x11) - dVar25 < 0.0) {
    dVar22 = dVar24;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar24 = ABS((double)*(float *)((int)puVar7 + 0x84));
  if ((double)*(float *)(puVar7 + 0x11) - dVar25 < 0.0) {
    dVar24 = dVar23;
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar23 = dVar25;
  if (dVar25 < dVar22) {
    lVar15 = uVar14 - 0x100;
    lVar18 = uVar14 - 0x68;
    lVar17 = uVar14 - 0x78;
    lVar21 = 2;
    fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar15 + 0x98) = *(float *)((int)lVar15 + 0x88) * fVar4 * fVar4;
      iVar8 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar14 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar18;
    do {
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar15 + 0x98) = *(float *)((int)lVar15 + 0x98) * fVar4;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar15 = 2;
    dVar22 = dVar25;
    do {
      iVar8 = (int)lVar16;
      iVar9 = (int)lVar18;
      lVar16 = lVar16 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0x98)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar23 = (double)((float)(dVar22 + dVar26) * fVar2 + fVar3);
  }
  dVar22 = (double)FastSubRots(fVar1,(float)dVar23);
  if (dVar26 <= dVar22) {
    Delt((float)dVar25,g_FrameTimeSq * 9.0,(float *)(iVar6 + 0x134));
  }
  else {
    Delt((float)param_1,g_FrameTimeSq * 9.0,(float *)(iVar6 + 0x134));
  }
  fVar4 = g_FrameTime;
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar10 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar10 * fVar10;
  fVar3 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar10;
  fVar5 = fVar3 * fVar3 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar3 * fVar5;
  *(float *)(puVar7 + 0xe) =
       (fVar3 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x134);
  fVar1 = *(float *)(iVar6 + 0x134);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1;
  *(float *)(puVar7 + 0xf) = fVar4 * -0.5;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar25,param_2,uVar14 - 0xa0);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar2 = *(float *)(param_2 + 0x10) - *param_4;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.2;
}


// 0x037cac8 (0x418 bytes)
// inlined: FastAtan2 @0x37cc70
MobyInstance * M44_0037cac8(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ushort *puVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  MobyInstance *pMVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar1 = uVar15 - 0x110;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar15;
  puVar11[0x24] = in_LR;
  puVar11[0x1f] = in_f29;
  puVar11[0x20] = in_f30;
  puVar11[0x21] = in_f31;
  puVar11[0x19] = unaff_r26;
  puVar11[0x1c] = unaff_r29;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar11[0x1e] = unaff_r31;
  puVar11[0x1b] = unaff_r28;
  iVar17 = *(int *)(iVar10 + 0x17c);
  puVar11[0x1d] = unaff_r30;
  puVar11[0x1a] = unaff_r27;
  puVar11[0x18] = unaff_r25;
  if (iVar17 == -1) {
    pMVar23 = (MobyInstance *)0x0;
  }
  else {
    puVar22 = (ushort *)(&g_MobyGroups)[iVar17];
    if (puVar22 == (ushort *)0x0) {
      pMVar23 = (MobyInstance *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      pMVar23 = (MobyInstance *)0x0;
      *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)puVar11 + 0x74) = uVar2;
      *(undefined4 *)((int)puVar11 + 0x7c) = uVar3;
      dVar28 = 1.0;
      *(float *)(puVar11 + 0xf) = *(float *)(param_1 + 0x18) + 1.0;
      dVar29 = 0.0;
      dVar30 = dVar29;
      do {
        uVar13 = *puVar22 & 0x7fff;
        if ((g_MobyInstance[uVar13].oClass == 0x27b) &&
           (g_MobyInstance[uVar13].state < 0x10 && 5 < g_MobyInstance[uVar13].state)) {
          fVar4 = g_MobyInstance[uVar13].pos.x - *(float *)(param_1 + 0x10);
          fVar8 = g_MobyInstance[uVar13].pos.y - *(float *)(param_1 + 0x14);
          dVar26 = ABS((double)fVar4);
          dVar27 = ABS((double)fVar8);
          *(float *)(puVar11 + 0x12) = fVar4;
          *(float *)((int)puVar11 + 0x94) = fVar8;
          fVar4 = *(float *)(param_1 + 0x48);
          *(float *)(puVar11 + 0x13) = (float)(dVar26 - dVar27);
          uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar11 + 0x12));
          if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
            dVar25 = dVar27;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar27 = ABS((double)*(float *)((int)puVar11 + 0x94));
          if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
            dVar27 = dVar26;
          }
          fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar26 = dVar29;
          if (dVar29 < dVar25) {
            lVar16 = uVar15 - 0x100;
            lVar21 = uVar15 - 100;
            lVar18 = uVar15 - 0x74;
            lVar24 = 2;
            fVar6 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
            fVar7 = fVar6 * fVar6;
            *(float *)(puVar11 + 0x15) = fVar6;
            *(float *)(puVar11 + 0x14) = fVar6;
            *(float *)((int)puVar11 + 0xa4) = fVar6;
            *(float *)((int)puVar11 + 0x9c) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar7;
            *(float *)((int)puVar11 + 0xa4) = *(float *)((int)puVar11 + 0xa4) * fVar6;
            *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x15) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x8c) * fVar6 * fVar6;
              iVar17 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar15 - 0x74;
            pfVar19 = (float *)&DAT_007358e0;
            lVar16 = lVar1;
            lVar18 = lVar21;
            do {
              fVar6 = *pfVar19;
              fVar7 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x9c) * fVar6;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar18 = 2;
            lVar16 = lVar1;
            dVar25 = dVar29;
            do {
              iVar17 = (int)lVar16;
              iVar12 = (int)lVar21;
              lVar16 = lVar16 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0x9c)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            dVar26 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar5);
          }
          dVar25 = (double)FastSubRots(fVar4,(float)dVar26);
          pMVar14 = g_MobyInstance;
          if ((g_MobyInstance[uVar13].state == '\a') || (g_MobyInstance[uVar13].state == '\x0f')) {
            *(undefined2 *)(iVar10 + 0x194) = 1;
          }
          else if ((*(short *)(iVar10 + 0x194) == 0) && (1.2217304706573486 <= dVar25))
          goto LAB_0037ce70;
          *(f32 *)(puVar11 + 0x10) = pMVar14[uVar13].pos.x;
          *(f32 *)((int)puVar11 + 0x84) = pMVar14[uVar13].pos.y;
          *(f32 *)(puVar11 + 0x11) = pMVar14[uVar13].pos.z;
          *(f32 *)((int)puVar11 + 0x8c) = pMVar14[uVar13].pos.w;
          *(float *)(puVar11 + 0xf) = (float)((double)*(float *)(puVar11 + 0xf) + dVar28);
          iVar17 = CollLine(uVar15 - 0xa0,uVar15 - 0x90,2,0,0);
          if (iVar17 == 0) {
            fVar4 = *(float *)((int)puVar11 + 0x74) - *(float *)((int)puVar11 + 0x84);
            dVar25 = (double)SQRT((*(float *)(puVar11 + 0xf) - *(float *)(puVar11 + 0x11)) *
                                  (*(float *)(puVar11 + 0xf) - *(float *)(puVar11 + 0x11)) +
                                  (*(float *)(puVar11 + 0xe) - *(float *)(puVar11 + 0x10)) *
                                  (*(float *)(puVar11 + 0xe) - *(float *)(puVar11 + 0x10)) +
                                  fVar4 * fVar4);
            if ((pMVar23 == (MobyInstance *)0x0) || (dVar25 < dVar30)) {
              pMVar23 = g_MobyInstance + uVar13;
              dVar30 = dVar25;
            }
          }
        }
LAB_0037ce70:
        uVar9 = *puVar22;
        puVar22 = puVar22 + 1;
      } while (-1 < (short)uVar9);
      if ((*(short *)(iVar10 + 0x194) == 0) && (8.0 < dVar30)) {
        pMVar23 = (MobyInstance *)0x0;
      }
    }
  }
  return pMVar23;
}


// 0x037cee0 (0xd4 bytes)
undefined8 M44_0037cee0(int param_1)

{
  ushort uVar1;
  void *pvVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar3 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar3 != (ushort *)0x0) {
      do {
        pMVar4 = g_MobyInstance + (*puVar3 & 0x7fff);
        if ((((pMVar4->oClass == SENTRY_BOT && pMVar4 != (MobyInstance *)0x0) &&
             (pMVar4->state != 0xfd && pMVar4->state != 0xfe)) && (pMVar4->setByGroup == '\0')) &&
           (((pvVar2 = pMVar4->pVar, *(int *)((int)pvVar2 + 0x144) == 0 &&
             (*(int *)((int)pvVar2 + 0x124) != -1)) &&
            (*(int *)(*(int *)(param_1 + 0x78) + 0x13c) <= *(int *)((int)pvVar2 + 0x13c))))) {
          return 0;
        }
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return 1;
}


// 0x037cfe0 (0xc10 bytes)
// inlined: FastAtan2 @0x37d290, FastAtan2 @0x37d540, FastAtan2 @0x37d92c
void M44_0037cfe0(MobyInstance *param_1,int param_2)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  MobyInstance *pMVar19;
  longlong lVar14;
  longlong lVar15;
  char cVar20;
  float *pfVar22;
  longlong lVar21;
  byte bVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x160;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar13;
  puVar10[0x2e] = in_LR;
  puVar10[0x2b] = in_f31;
  puVar10[0x29] = unaff_r30;
  puVar10[0x2a] = unaff_r31;
  uVar1 = param_1->state;
  puVar10[0x28] = unaff_r29;
  pvVar8 = param_1->pVar;
  uVar26 = ZEXT48(pvVar8);
  puVar10[0x27] = unaff_r28;
  puVar10[0x26] = unaff_r27;
  if (uVar1 != '\0') {
    param_1->scale = param_1->pClass->gScale * DAT_00841a84;
    dVar31 = 0.0;
    *(undefined4 *)((int)puVar10 + 0x84) = 0;
    iVar16 = MB_damage(param_1,0x330000,0);
    iVar17 = MB_HandleDamage
                       (param_1,iVar16,uVar26 + 0x20,0,puVar10 + 0x10,(int)puVar10 + 0x84,0,4);
    if ((*(int *)(puVar10 + 0x10) != 1) && (param_1->state != '\x17')) {
      if (g_heroType == '\0') {
        M44_0037c268(param_1);
      }
      fVar7 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar10 + 0x84);
      *(float *)((int)pvVar8 + 0x20) = fVar7;
      iVar17 = iVar17 + ((uint)(ZERO_MASK((0x47 - (uint)*(ushort *)(*(int *)(iVar16 + 0x20) + 0xa6)))) & 3U - iVar17);
      if ((double)fVar7 <= dVar31) {
        iVar17 = 1;
      }
      uVar18 = FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
      fVar2 = DAT_00841a88;
      fVar7 = g_FrameTimeSq;
      *(undefined4 *)((int)pvVar8 + 0x90) = uVar18;
      *(undefined1 *)((int)pvVar8 + 0xad) = 0;
      *(undefined4 *)((int)pvVar8 + 0x94) = 9;
      *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar7;
      if (iVar17 < 3) {
        if ((-1 < iVar17) && (0 < iVar17)) {
          fVar7 = DAT_00841a8c * g_FrameTimeSq;
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(float *)((int)pvVar8 + 0x80) = fVar7;
          fVar7 = g_FrameTime;
          *(float *)((int)pvVar8 + 0x88) = DAT_00841a9c * g_FrameTime;
          *(float *)((int)pvVar8 + 0x8c) = DAT_00841a98 * fVar7;
          fVar2 = DAT_00841aa0;
          *(undefined4 *)((int)pvVar8 + 0xc0) = 0x41000000;
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41800000;
          *(float *)((int)pvVar8 + 0x84) = fVar2 * fVar7;
          fVar7 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
          dVar29 = ABS((double)fVar7);
          dVar30 = ABS((double)fVar2);
          *(float *)((int)puVar10 + 0x9c) = fVar7;
          *(float *)(puVar10 + 0x14) = fVar2;
          *(float *)((int)puVar10 + 0xa4) = (float)(dVar29 - dVar30);
          uVar24 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
          dVar28 = ABS((double)*(float *)((int)puVar10 + 0x9c));
          if ((double)*(float *)((int)puVar10 + 0xa4) - dVar31 < 0.0) {
            dVar28 = dVar30;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar30 = ABS((double)*(float *)(puVar10 + 0x14));
          if ((double)*(float *)((int)puVar10 + 0xa4) - dVar31 < 0.0) {
            dVar30 = dVar29;
          }
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar29 = dVar31;
          if (dVar31 < dVar28) {
            lVar14 = uVar13 - 0x150;
            lVar21 = uVar13 - 0x8c;
            lVar25 = uVar13 - 0x7c;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x1c) = fVar3;
            *(float *)(puVar10 + 0x1b) = fVar3;
            *(float *)((int)puVar10 + 0xdc) = fVar3;
            *(float *)((int)puVar10 + 0xd4) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5;
            *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar3;
            *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xc4) * fVar3 * fVar3;
              iVar17 = (int)lVar21;
              lVar14 = lVar14 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar13 - 0x8c;
            pfVar22 = (float *)&DAT_007358e0;
            lVar14 = lVar15;
            lVar21 = lVar25;
            do {
              fVar3 = *pfVar22;
              fVar5 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xd4) * fVar3;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
              lVar21 = lVar21 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 2;
            lVar14 = lVar15;
            dVar28 = dVar31;
            do {
              iVar17 = (int)lVar14;
              lVar14 = lVar14 + 0x10;
              iVar11 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xd4)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
          }
          *(float *)((int)puVar10 + 0x8c) = (float)dVar29;
          uVar18 = *(undefined4 *)(iVar16 + 0x18);
          *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined4 *)(puVar10 + 7) = uVar18;
          uVar18 = *(undefined4 *)(iVar16 + 0x1c);
          *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
          *(undefined4 *)((int)puVar10 + 0x3c) = uVar18;
          MB_VecAtan2Angles
                    (puVar10[6],puVar10[7],uVar13 - 0xd4,uVar26 + 0x88,uVar26 + 0x8c);
          MB_StartKick((double)*(float *)((int)puVar10 + 0x8c),param_1,uVar26 + 0x70);
          param_1->state = '\x17';
          param_1->setByGroup = '\x02';
          *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
        }
      }
      else if (iVar17 < 0xb) {
        if (iVar17 < 9) {
          *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar7;
          fVar7 = g_FrameTime;
          *(float *)((int)pvVar8 + 0x88) = DAT_00841a94 * g_FrameTime;
          *(float *)((int)pvVar8 + 0x8c) = DAT_00841a90 * fVar7;
          fVar2 = DAT_010c51ac;
          *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
          *(float *)((int)pvVar8 + 0x84) = fVar2 * fVar7;
          fVar7 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
          dVar29 = ABS((double)fVar7);
          dVar30 = ABS((double)fVar2);
          *(float *)(puVar10 + 0x15) = fVar7;
          *(float *)((int)puVar10 + 0xac) = fVar2;
          *(float *)(puVar10 + 0x16) = (float)(dVar29 - dVar30);
          uVar24 = (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4;
          dVar28 = ABS((double)*(float *)(puVar10 + 0x15));
          if ((double)*(float *)(puVar10 + 0x16) - dVar31 < 0.0) {
            dVar28 = dVar30;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar10 + 0xac));
          if ((double)*(float *)(puVar10 + 0x16) - dVar31 < 0.0) {
            dVar30 = dVar29;
          }
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar29 = dVar31;
          if (dVar31 < dVar28) {
            lVar14 = uVar13 - 0x150;
            lVar21 = uVar13 - 0x6c;
            lVar25 = uVar13 - 0x5c;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x20) = fVar3;
            *(float *)(puVar10 + 0x1f) = fVar3;
            *(float *)((int)puVar10 + 0xfc) = fVar3;
            *(float *)((int)puVar10 + 0xf4) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar5;
            *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3;
            *(float *)(puVar10 + 0x20) = *(float *)(puVar10 + 0x20) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xe4) * fVar3 * fVar3;
              iVar17 = (int)lVar21;
              lVar14 = lVar14 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar13 - 0x6c;
            pfVar22 = (float *)&DAT_007358e0;
            lVar14 = lVar15;
            lVar21 = lVar25;
            do {
              fVar3 = *pfVar22;
              fVar5 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xf4) * fVar3;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
              lVar21 = lVar21 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 2;
            lVar14 = lVar15;
            dVar28 = dVar31;
            do {
              iVar17 = (int)lVar14;
              lVar14 = lVar14 + 0x10;
              iVar11 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xf4)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
          }
          *(float *)(puVar10 + 0x11) = (float)dVar29;
          uVar18 = *(undefined4 *)(iVar16 + 0x18);
          *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined4 *)(puVar10 + 7) = uVar18;
          uVar18 = *(undefined4 *)(iVar16 + 0x1c);
          *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
          *(undefined4 *)((int)puVar10 + 0x3c) = uVar18;
          MB_VecAtan2Angles
                    (puVar10[6],puVar10[7],uVar13 - 0xd8,uVar26 + 0x88,uVar26 + 0x8c);
          MB_StartKick((double)*(float *)(puVar10 + 0x11),param_1,uVar26 + 0x70);
          param_1->state = '\x15';
          param_1->setByGroup = '\x02';
          *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
        }
        else {
          *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        }
      }
      MB_UpdateLightsTransition(param_1,uVar26 + 0x60);
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar26 + 0x60);
    if (param_2 == 0) {
      if (*(int *)((int)pvVar8 + 0x38) != 0) {
        dVar28 = (double)MB_randRangeFloat(180.0,240.0);
        iVar16 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        puVar10[0x23] = (longlong)iVar16;
        uVar24 = puVar10[0x23];
        *(undefined4 *)((int)pvVar8 + 0x38) = 0;
        *(float *)((int)pvVar8 + 0x130) = (float)(longlong)uVar24;
      }
      FastDecTimerF32(uVar26 + 0x130);
      fVar7 = (param_1->pos).y;
      fVar2 = (param_1->pos).x;
      fVar3 = (param_1->pos).z;
      fVar6 = fVar7 - DAT_00969db4;
      fVar5 = fVar2 - g_heroCGPos;
      fVar12 = fVar3 - DAT_00969db8;
      if (64.0 <= SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar6 * fVar6)) {
        *(undefined1 *)((int)pvVar8 + 0x15a) = 0;
      }
      else {
        fVar4 = (param_1->pos).w;
        *(float *)(puVar10 + 0xe) = fVar2;
        *(float *)((int)puVar10 + 0x74) = fVar7;
        *(f32 *)((int)puVar10 + 0x7c) = fVar4;
        iVar16 = *(int *)((int)pvVar8 + 300);
        pMVar19 = (MobyInstance *)0x0;
        *(float *)(puVar10 + 0xf) = fVar3 + 1.0;
        if (iVar16 != -1) {
          pMVar19 = g_MobyInstance + iVar16;
        }
        uVar18 = CollLine(uVar13 - 0xf0,&g_heroCGPos,2,pMVar19,0);
        *(char *)((int)pvVar8 + 0x15a) = (char)((ulonglong)(LZCOUNT(uVar18) << 0x20) >> 0x25);
      }
      pSVar9 = Splines[*(int *)((int)pvVar8 + 0x120)];
      iVar16 = MB_getTargetInArea
                         (0x4060000000000000,param_1,uVar26 + 0xd0,pSVar9,0,0,pSVar9->points,
                          pSVar9->cnt);
      if (iVar16 == 2) {
        *(undefined1 *)((int)pvVar8 + 0x19f) = 0;
        *(undefined1 *)((int)pvVar8 + 0x15b) = 1;
        *(undefined2 *)((int)pvVar8 + 0x158) = 0;
      }
      else {
        fVar7 = *(float *)((int)pvVar8 + 0xd0) - (param_1->pos).x;
        fVar2 = *(float *)((int)pvVar8 + 0xd4) - (param_1->pos).y;
        dVar29 = ABS((double)fVar7);
        dVar30 = ABS((double)fVar2);
        *(float *)(puVar10 + 0x12) = fVar7;
        *(float *)((int)puVar10 + 0x94) = fVar2;
        fVar7 = (param_1->rotation).z;
        *(float *)(puVar10 + 0x13) = (float)(dVar29 - dVar30);
        uVar26 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar10 + 0x12));
        if ((double)*(float *)(puVar10 + 0x13) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        dVar30 = ABS((double)*(float *)((int)puVar10 + 0x94));
        if ((double)*(float *)(puVar10 + 0x13) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (dVar31 < dVar28) {
          lVar14 = uVar13 - 0x150;
          lVar25 = uVar13 - 0x9c;
          lVar21 = uVar13 - 0xac;
          lVar27 = 2;
          fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar10 + 0x18) = fVar5;
          *(float *)(puVar10 + 0x17) = fVar5;
          *(float *)((int)puVar10 + 0xbc) = fVar5;
          *(float *)((int)puVar10 + 0xb4) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
          *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
          *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xa4) * fVar5 * fVar5;
            iVar16 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar13 - 0xac;
          pfVar22 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar21 = lVar25;
          do {
            fVar5 = *pfVar22;
            fVar6 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xb4) * fVar5;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar14 = 2;
          do {
            iVar16 = (int)lVar15;
            iVar17 = (int)lVar25;
            lVar15 = lVar15 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0xb4)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar31 = (double)FastSubRots(fVar7,(float)dVar31);
        if ((((dVar31 < 1.5707963705062866) &&
             ((g_onMagnerail == 0 || (ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0xd8)) < 4.0))
             )) || (param_1->state == '\x10')) || (cVar20 = '\0', param_1->state == '\x11')) {
          cVar20 = *(char *)((int)pvVar8 + 0x15a);
        }
        iVar16 = *(int *)((int)pvVar8 + 0x114);
        if (iVar16 != 1) {
          if (g_heroType == '\x03') {
            bVar23 = *(byte *)((int)pvVar8 + 0x15e);
            if (1 < bVar23) {
              *(undefined1 *)((int)pvVar8 + 0x15b) = 1;
            }
          }
          else {
            bVar23 = 0;
            *(undefined1 *)((int)pvVar8 + 0x15e) = 0;
          }
        }
        else {
          bVar23 = *(char *)((int)pvVar8 + 0x15b) + 1;
          *(byte *)((int)pvVar8 + 0x15e) = bVar23;
        }
        *(undefined1 *)((int)pvVar8 + 0x19f) = 1;
        if (cVar20 == '\0') {
          if (*(char *)((int)pvVar8 + 0x15a) == '\0') {
            *(undefined1 *)((int)pvVar8 + 0x15b) = 1;
          }
          *(undefined1 *)((int)pvVar8 + 0x19f) = 0;
          *(undefined2 *)((int)pvVar8 + 0x158) = 0;
          *(undefined4 *)((int)pvVar8 + 0x114) = 2;
        }
        else if ((((*(short *)((int)pvVar8 + 0x156) == 0) ||
                  (*(char *)((int)pvVar8 + 0x15b) != '\0')) && (g_heroType == '\x03')) ||
                ((bVar23 != 0 && (iVar16 != 1)))) {
          *(undefined4 *)((int)pvVar8 + 0x114) = 2;
          *(undefined2 *)((int)pvVar8 + 0x158) = 1;
        }
        else if ((g_heroType != '\x03') && (iVar16 != 2)) {
          *(undefined1 *)((int)pvVar8 + 0x15b) = 0;
        }
        if (g_gameMode == GAME_MODE_SCENE) {
          *(undefined4 *)((int)pvVar8 + 0x114) = 2;
        }
      }
      if (*(int *)((int)pvVar8 + 0x110) == 0) {
        *(MobyInstance **)((int)pvVar8 + 0x110) = g_heroMobyPtr;
      }
    }
  }
  return;
}


// 0x037dc48 (0x286c bytes)
/* Moby 44 */

void UpdateMoby_44(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  longlong lVar4;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar13;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  MobyInstance *pMVar18;
  short sVar19;
  void *pvVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  GPiece<16> auStack_160;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<48> auStack_e0;
  GPiece<16> auStack_b0;
  GPiece<48> auStack_a0;
  GPiece<4> local_70;
  GPiece<20> local_6c;
  
  lVar4 = (longlong)(int)moby;
  if (DAT_010c51b0 != 0) {
    return;
  }
  pvVar20 = moby->pVar;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  uVar16 = 0;
  iVar12 = 0;
  if (*(int *)((int)pvVar20 + 0x2d0) == -1) {
    if (*(int *)((int)pvVar20 + 0x2d8) != -1) {
      uVar15 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,0xffffffffffffffff);
      uVar16 = (ulonglong)(int)uVar15;
      if (*(int *)((int)pvVar20 + 0x2dc) != -1) {
        uVar10 = MB_IsPntInCuboid
                           ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar20 + 0x2dc));
        uVar16 = (ulonglong)(int)(uVar15 | uVar10);
      }
    }
  }
  else {
    iVar8 = MB_IsPntInCuboid
                      ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar20 + 0x2d0));
    uVar16 = (ulonglong)(LZCOUNT(iVar8) << 0x20) >> 0x25;
    if (*(int *)((int)pvVar20 + 0x2d4) != -1) {
      iVar9 = MB_IsPntInCuboid
                        ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar20 + 0x2d4));
      uVar16 = (ulonglong)((LZCOUNT(iVar8) & LZCOUNT(iVar9)) << 0x20) >> 0x25;
    }
  }
  M44_0037cfe0(lVar4,uVar16);
  if (((int)uVar16 != 0) && (moby->state != '\x17' && moby->state != '\x15')) {
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    return;
  }
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
  moby->collision = moby->pClass->collision;
  uVar16 = (ulonglong)*(uint *)((int)pvVar20 + 0x110);
  MB_SetScaleCheat(0x4004000000000000,(int)pvVar20 + 0x1a0);
  if ((moby->enabled != '\0') &&
     (dVar21 = (double)FUN_005e8548(lVar4 + 0x10,0x951500), dVar21 < 28.0)) {
    MB_SetZBoundsFromGround(lVar4);
    moby->shadow = '\x16';
  }
  if (g_heroState == ANIM_TARGET_WALK) {
    *(undefined2 *)((int)pvVar20 + 0x156) = 0;
  }
  FastDecTimerS16((int)pvVar20 + 0x154);
  FastDecTimerS16((int)pvVar20 + 0x156);
  FastDecTimerS16((int)pvVar20 + 0x19c);
  if (((*(short *)((int)pvVar20 + 0x156) != 0) && (*(int *)((int)pvVar20 + 0x128) != -1)) &&
     (*(int *)((int)g_MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) {
    M408_00364690(g_MobyInstance + *(int *)((int)pvVar20 + 0x128),0xb4);
  }
  if (moby->setByGroup == '\0') {
    *(undefined1 *)((int)pvVar20 + 0x15f) = 0;
  }
  bVar2 = moby->state;
  if (bVar2 < 0xd) {
    if (4 < bVar2) {
      if (bVar2 < 10) {
        if (bVar2 < 6) {
          if ((moby->field43_0x70 & 2U) != 0) {
            uVar13 = idol::GetAnimDuration(0xf0);
            *(undefined2 *)((int)pvVar20 + 0x154) = uVar13;
            if (*(int *)((int)pvVar20 + 0x150) != -1) {
              M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar20 + 0x150));
              *(undefined4 *)((int)pvVar20 + 0x150) = 0xffffffff;
            }
            if (*(int *)((int)pvVar20 + 300) != -1) {
              M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar20 + 300));
              *(undefined4 *)((int)pvVar20 + 300) = 0xffffffff;
            }
            bVar2 = *(byte *)((int)pvVar20 + 0x15c);
            moby->state = bVar2;
            if (bVar2 < 3) {
              if ((1 < bVar2) && (moby->animationId != '\0')) {
                uVar5 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar4,0,0,uVar5);
              }
            }
            else if ((bVar2 == 4) && (moby->animationId != '\r')) {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,0xd,0,uVar5);
            }
          }
        }
        else if (bVar2 < 9) {
          if (*(int *)((int)pvVar20 + 0x114) != 2) {
            dVar23 = (double)(moby->rotation).z;
            dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                          (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y))
            ;
            dVar21 = (double)FastSubRots((float)dVar23,(float)dVar21);
            if (dVar21 < 0.5235987901687622) {
              moby->setByGroup = '\x01';
              if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
                *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
                moby->state = '\v';
                *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
                *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
                if (moby->animationId != '\x01') {
                  uVar5 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar4,1,0,uVar5);
                }
              }
              else {
                moby->state = '\x10';
                if (moby->animationId != '\x03') {
                  uVar5 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar4,3,0,uVar5);
                }
              }
              goto LAB_00380248;
            }
          }
          bVar2 = moby->updateId;
          puVar17 = (undefined *)0x0;
          if (bVar2 < 0xb) {
            if (9 < bVar2) {
              puVar17 = &DAT_00841b28;
            }
          }
          else if (bVar2 < 0xc) {
            puVar17 = (undefined *)0x841aa8;
          }
          else if (bVar2 < 0xd) {
            puVar17 = (undefined *)0x841ba8;
          }
          if ((moby->field43_0x70 & 2U) == 0) {
            if (bVar2 == moby->animationId && puVar17 != (undefined *)0x0) {
              dVar21 = (double)BlendAnimFrame(moby);
              lVar6 = FastDoubleToInt();
              dVar23 = (double)FastIntToDouble();
              iVar8 = (int)(lVar6 << 2);
              dVar21 = (double)FastWrapRot
                                         (*(float *)((int)pvVar20 + 0x170),
                                          ((*(float *)(puVar17 + iVar8 + 4) -
                                           *(float *)(puVar17 + iVar8)) * (float)(dVar21 - dVar23) +
                                          *(float *)(puVar17 + iVar8)) * 0.017453292);
              (moby->rotation).z = (float)dVar21;
            }
          }
          else {
            fVar24 = MB_GetAnimSeqTriggerLength((uint)moby->mClass,(uint)bVar2);
            lVar6 = FastDoubleToInt((double)fVar24);
            if (puVar17 != (undefined *)0x0) {
              dVar21 = (double)FastWrapRot
                                         (*(float *)((int)pvVar20 + 0x170),
                                          *(float *)(puVar17 + (int)(lVar6 << 2)) * 0.017453292);
              (moby->rotation).z = (float)dVar21;
            }
            moby->state = *(u8 *)((int)pvVar20 + 0x15c);
            uVar3 = *(u8 *)((int)pvVar20 + 0x15d);
            if (moby->animationId != uVar3) {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,uVar3,0,uVar5);
            }
          }
        }
        else {
          dVar21 = (double)FUN_005e8548(lVar4 + 0x10,(int)pvVar20 + 0x160);
          if (dVar21 <= 0.20000000298023224) {
            if (*(int *)((int)pvVar20 + 0x124) == -1) {
              M44_0037bbe8
                        ((double)*(float *)((int)pvVar20 + 0x16c),lVar4,pvVar20);
            }
            else {
              moby->setByGroup = '\0';
              *(undefined4 *)((int)pvVar20 + 0x144) = 0;
              M44_0037be68
                        (lVar4,pvVar20,
                         Splines[*(int *)((int)pvVar20 + 0x124)]->points +
                         *(int *)((int)pvVar20 + 0x13c),2,0);
            }
          }
          else {
            M44_0037c500
                      ((double)(g_FrameTime * 2.0),lVar4,&DAT_0037dbf0,
                       (int)pvVar20 + 0x160);
          }
        }
      }
      else if (bVar2 < 0xb) {
        if (*(int *)((int)pvVar20 + 0x114) == 2) {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->state = '\x02';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,0,0,uVar5);
            }
            uVar13 = idol::GetAnimDuration(0x168);
            *(undefined2 *)((int)pvVar20 + 0x196) = uVar13;
            *(undefined2 *)((int)pvVar20 + 0x194) = 0;
          }
        }
        else {
          moby->setByGroup = '\x01';
          if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
            *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
            moby->state = '\v';
            *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
            *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
            if (moby->animationId != '\x01') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,1,0,uVar5);
            }
          }
          else {
            moby->state = '\x10';
            if (moby->animationId != '\x03') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,3,0,uVar5);
            }
          }
        }
      }
      else if (bVar2 < 0xc) {
        if (*(int *)((int)pvVar20 + 0x128) != -1) {
          FUN_003655c0(g_MobyInstance + *(int *)((int)pvVar20 + 0x128));
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          if (g_heroState == ANIM_TARGET_WALK) {
            moby->state = '\f';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,0,0,uVar5);
            }
          }
          else {
            M44_0037c268(lVar4);
            if (((*(int *)((int)pvVar20 + 0x128) == -1) ||
                (*(int *)((int)g_MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) ||
               (iVar8 = M44_0037c07c(lVar4), iVar8 == 0)) {
              uVar3 = *(u8 *)((int)pvVar20 + 0x15c);
              if (uVar3 == '\x10') {
                M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
              }
              else {
                if (uVar3 != 0xff) {
                  moby->state = uVar3;
                }
                uVar3 = *(u8 *)((int)pvVar20 + 0x15d);
                if ((uVar3 != 0xff) && (moby->animationId != uVar3)) {
                  uVar5 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar4,uVar3,0,uVar5);
                }
              }
            }
            else {
              moby->state = '\x0e';
              if (moby->animationId != '\x0e') {
                uVar5 = idol::GetAnimDuration(0x14);
                MB_SetAnimation(lVar4,0xe,0,uVar5);
              }
            }
          }
        }
      }
      else if (g_heroState == ANIM_TARGET_WALK) {
        moby->state = '\t';
        if (moby->animationId != '\r') {
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,0xd,0,uVar5);
        }
        if ((*(int *)((int)pvVar20 + 0x128) != -1) &&
           (*(int *)((int)g_MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) {
          M408_00364690
                    (g_MobyInstance + *(int *)((int)pvVar20 + 0x128),0xffffffffffffffff);
        }
      }
      else {
        bVar1 = *(int *)((int)pvVar20 + 0x114) == 2;
        if ((bVar1) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
          if (*(short *)((int)pvVar20 + 0x156) == 0) {
            moby->state = '\t';
            if (moby->animationId != '\r') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,0xd,0,uVar5);
            }
            if ((*(int *)((int)pvVar20 + 0x128) != -1) &&
               (pMVar18 = g_MobyInstance + *(int *)((int)pvVar20 + 0x128),
               *(int *)((int)pMVar18->pVar + 8) != 0)) {
              uVar5 = idol::GetAnimDuration(0x1e);
              M408_00364690(pMVar18,uVar5);
            }
          }
          else if (*(char *)((int)pvVar20 + 0x15a) == '\0') {
            if (*(int *)((int)pvVar20 + 0x124) != -1) {
              if (*(int *)((int)pvVar20 + 0x144) != 0) {
                iVar8 = *(int *)((int)pvVar20 + 0x13c) + 1;
                *(int *)((int)pvVar20 + 0x13c) =
                     iVar8 - (iVar8 / Splines[*(int *)((int)pvVar20 + 0x124)]->cnt) *
                             Splines[*(int *)((int)pvVar20 + 0x124)]->cnt;
              }
              *(undefined4 *)((int)pvVar20 + 0x144) = 0;
              uVar11 = idol::GetAnimDuration(0x3c);
              *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
              moby->setByGroup = '\x01';
              if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
                *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
                moby->state = '\v';
                *(undefined1 *)((int)pvVar20 + 0x15c) = 0xd;
                *(undefined1 *)((int)pvVar20 + 0x15d) = 0xe;
                if (moby->animationId != '\x01') {
                  uVar5 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar4,1,0,uVar5);
                }
              }
              else {
                moby->state = '\r';
                if (moby->animationId != '\x0e') {
                  uVar5 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar4,0xe,0,uVar5);
                }
              }
            }
          }
          else if ((bVar1) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
            M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0xc,0);
          }
          else {
            M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
          }
        }
        else {
          M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x10,3);
        }
      }
      goto LAB_00380248;
    }
    if (bVar2 == 0) {
      if ((*(int *)((int)pvVar20 + 0x120) == -1) ||
         (Splines[*(int *)((int)pvVar20 + 0x120)]->cnt == 0)) {
        DeleteMoby(moby);
        return;
      }
      *(undefined4 *)((int)pvVar20 + 0x20) = 0x40400000;
      *(undefined2 *)((int)pvVar20 + 0x24) = 3;
      *(undefined1 *)((int)pvVar20 + 0x28) = 2;
      *(undefined1 *)((int)pvVar20 + 0x29) = 0;
      FUN_005e7e98((int)pvVar20 + 0x160,lVar4 + 0x10);
      iVar8 = *(int *)((int)pvVar20 + 0x148);
      *(f32 *)((int)pvVar20 + 0x16c) = (moby->rotation).z;
      *(undefined4 *)((int)pvVar20 + 0x144) = 1;
      iVar9 = 0;
      *(uint *)((int)pvVar20 + 0x148) = iVar8 + ((uint)((longlong)iVar8 + -5 >> 0x3f) & 5U - iVar8);
      moby->state = '\x02';
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      pvVar14 = pvVar20;
      do {
        if (*(int *)((int)pvVar14 + 0x180) != -1) {
          moby->state = '\x01';
          break;
        }
        iVar9 = iVar9 + 1;
        pvVar14 = (void *)((int)pvVar14 + 4);
      } while (iVar9 < 4);
      moby->setByGroup = '\0';
      goto LAB_00380248;
    }
    if (bVar2 < 2) {
      iVar8 = 0;
      pvVar14 = pvVar20;
      do {
        if (1 < g_MobyInstance[*(int *)((int)pvVar14 + 0x180)].state) {
          moby->state = '\x02';
          break;
        }
        iVar8 = iVar8 + 1;
        pvVar14 = (void *)((int)pvVar14 + 4);
      } while (iVar8 < 4);
      goto LAB_00380248;
    }
    if (3 < bVar2) {
      lVar6 = ZEXT48(Splines[*(int *)((int)pvVar20 + 0x124)]) +
              ((ulonglong)*(uint *)((int)pvVar20 + 0x13c) & 0xfffffff) * 0x10;
      iVar8 = M44_0037c500
                        ((double)(g_FrameTime * 2.0),lVar4,lVar6,
                         lVar6 + 0x10U & 0xffffffff);
      if (iVar8 == 0) {
        if (*(int *)((int)pvVar20 + 0x114) == 2) {
          if ((*(short *)((int)pvVar20 + 0x156) == 0) || (*(char *)((int)pvVar20 + 0x15b) != '\0'))
          {
            if (*(short *)((int)pvVar20 + 0x19c) == 0) {
              if ((*(short *)((int)pvVar20 + 0x158) == 0) || (g_heroState != HOLOGUISE_WAVE)) {
                iVar8 = FastDecTimerS16((int)pvVar20 + 0x196);
                if (iVar8 != 0) {
                  uVar16 = M44_0037cac8(lVar4);
                  *(int *)((int)pvVar20 + 400) = (int)uVar16;
                  if ((int)uVar16 != 0) {
                    if (*(short *)((int)pvVar20 + 0x194) == 0) {
                      idol::GetAnimDuration(0x96);
                      iVar8 = MB_randInt();
                      if (iVar8 != 0) goto LAB_00380248;
                      uVar16 = (ulonglong)*(uint *)((int)pvVar20 + 400);
                    }
                    M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,10,0xf);
                  }
                }
              }
              else if (((*(int *)((int)pvVar20 + 0x150) != -1) ||
                       (*(int *)((int)pvVar20 + 300) != -1)) ||
                      (*(short *)((int)pvVar20 + 0x154) == 0)) {
                *(u8 *)((int)pvVar20 + 0x15c) = moby->state;
                *(undefined1 *)((int)pvVar20 + 0x15d) = 0xd;
                moby->state = '\x05';
                if (moby->animationId != '\x02') {
                  uVar5 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar4,2,0,uVar5);
                }
              }
            }
            else {
              M44_0037be68
                        (lVar4,pvVar20,(ulonglong)*(uint *)((int)pvVar20 + 0x198) + 0x10,10,0xf);
            }
          }
          else if (*(char *)((int)pvVar20 + 0x15a) == '\0') {
            uVar11 = idol::GetAnimDuration(0x3c);
            *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
            moby->setByGroup = '\x01';
            if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
              *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
              moby->state = '\v';
              *(undefined1 *)((int)pvVar20 + 0x15c) = 0xd;
              *(undefined1 *)((int)pvVar20 + 0x15d) = 0xe;
              if (moby->animationId != '\x01') {
                uVar5 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar4,1,0,uVar5);
              }
            }
            else {
              moby->state = '\r';
              if (moby->animationId != '\x0e') {
                uVar5 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar4,0xe,0,uVar5);
              }
            }
          }
          else {
            M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
          }
        }
        else {
          moby->setByGroup = '\x01';
          if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
            *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
            moby->state = '\v';
            *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
            *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
            if (moby->animationId != '\x01') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,1,0,uVar5);
            }
          }
          else {
            moby->state = '\x10';
            if (moby->animationId != '\x03') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,3,0,uVar5);
            }
          }
        }
      }
      else {
        moby->state = '\x02';
        *(undefined4 *)((int)pvVar20 + 0x144) = 1;
        if (moby->animationId != '\0') {
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,0,0,uVar5);
        }
      }
      goto LAB_00380248;
    }
    if (*(int *)((int)pvVar20 + 0x114) != 2) {
      moby->setByGroup = '\x01';
      if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
        *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
        moby->state = '\v';
        *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
        *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
        if (moby->animationId != '\x01') {
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,1,0,uVar5);
        }
      }
      else {
        moby->state = '\x10';
        if (moby->animationId != '\x03') {
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,3,0,uVar5);
        }
      }
      goto LAB_00380248;
    }
    if ((*(short *)((int)pvVar20 + 0x156) != 0) && (*(char *)((int)pvVar20 + 0x15b) == '\0')) {
      if ((*(char *)((int)pvVar20 + 0x15a) == '\0') && (*(int *)((int)pvVar20 + 0x124) != -1)) {
        if (*(int *)((int)pvVar20 + 0x144) != 0) {
          iVar8 = *(int *)((int)pvVar20 + 0x13c) + 1;
          *(int *)((int)pvVar20 + 0x13c) =
               iVar8 - (iVar8 / Splines[*(int *)((int)pvVar20 + 0x124)]->cnt) *
                       Splines[*(int *)((int)pvVar20 + 0x124)]->cnt;
        }
        *(undefined4 *)((int)pvVar20 + 0x144) = 0;
        moby->setByGroup = '\x01';
        if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
          *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
          moby->state = '\v';
          *(undefined1 *)((int)pvVar20 + 0x15c) = 0xd;
          *(undefined1 *)((int)pvVar20 + 0x15d) = 0xe;
          if (moby->animationId != '\x01') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,1,0,uVar5);
          }
        }
        else {
          moby->state = '\r';
          if (moby->animationId != '\x0e') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,0xe,0,uVar5);
          }
        }
      }
      else {
        M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
      }
      goto LAB_00380248;
    }
    if (*(short *)((int)pvVar20 + 0x19c) != 0) {
      M44_0037be68
                (lVar4,pvVar20,(ulonglong)*(uint *)((int)pvVar20 + 0x198) + 0x10,10,0xf);
      goto LAB_00380248;
    }
    iVar8 = FastDecTimerS16((int)pvVar20 + 0x196);
    if (iVar8 != 0) {
      uVar16 = M44_0037cac8(lVar4);
      *(int *)((int)pvVar20 + 400) = (int)uVar16;
      if ((int)uVar16 != 0) {
        if (*(short *)((int)pvVar20 + 0x194) == 0) {
          idol::GetAnimDuration(0x96);
          iVar8 = MB_randInt();
          if (iVar8 != 0) goto LAB_0037e34c;
          uVar16 = (ulonglong)*(uint *)((int)pvVar20 + 400);
        }
        M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,10,0xf);
        goto LAB_00380248;
      }
    }
LAB_0037e34c:
    if (moby->state == '\x02') {
      bVar1 = *(int *)((int)pvVar20 + 0x124) == -1;
      if (bVar1) {
        if ((*(short *)((int)pvVar20 + 0x158) == 0) || (g_heroState != HOLOGUISE_WAVE)) {
          if (bVar1) {
            M44_0037bbe8((double)*(float *)((int)pvVar20 + 0x16c),lVar4,pvVar20)
            ;
          }
        }
        else if (((*(int *)((int)pvVar20 + 0x150) != -1) || (*(int *)((int)pvVar20 + 300) != -1)) ||
                ((*(short *)((int)pvVar20 + 0x154) == 0 &&
                 (iVar8 = MB_randInt(0x78), iVar8 == 0)))) {
          *(undefined1 *)((int)pvVar20 + 0x15c) = 2;
          *(undefined1 *)((int)pvVar20 + 0x15d) = 0;
          moby->state = '\x05';
          if (moby->animationId != '\x02') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,2,0,uVar5);
          }
        }
      }
      else if ((*(int *)((int)pvVar20 + 0x144) == 0) ||
              (iVar8 = M44_0037cee0(lVar4), iVar8 != 0)) {
        uVar11 = idol::GetAnimDuration(*(undefined4 *)((int)pvVar20 + 0x148));
        *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
        moby->state = '\x03';
      }
    }
    else if ((moby->state == '\x03') &&
            (iVar8 = FastDecTimerS32((int)pvVar20 + 0x14c), iVar8 != 0)) {
      iVar8 = *(int *)((int)pvVar20 + 0x13c);
      if (*(int *)((int)pvVar20 + 0x144) != 0) {
        iVar8 = (iVar8 + 1) -
                ((iVar8 + 1) / Splines[*(int *)((int)pvVar20 + 0x124)]->cnt) *
                Splines[*(int *)((int)pvVar20 + 0x124)]->cnt;
        *(int *)((int)pvVar20 + 0x13c) = iVar8;
      }
      *(undefined4 *)((int)pvVar20 + 0x144) = 0;
      M44_0037be68
                (lVar4,pvVar20,Splines[*(int *)((int)pvVar20 + 0x124)]->points + iVar8,4,0xd);
    }
    goto LAB_00380248;
  }
  if (bVar2 < 0x13) {
    if (bVar2 < 0x10) {
      if (bVar2 < 0xe) {
        lVar6 = ZEXT48(Splines[*(int *)((int)pvVar20 + 0x124)]) +
                ((ulonglong)*(uint *)((int)pvVar20 + 0x13c) & 0xfffffff) * 0x10;
        iVar8 = M44_0037c500
                          ((double)(g_FrameTime * 3.5),lVar4,lVar6,
                           lVar6 + 0x10U & 0xffffffff);
        if (iVar8 == 0) {
          if ((*(int *)((int)pvVar20 + 0x114) == 2) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
            if (*(short *)((int)pvVar20 + 0x156) == 0) {
              moby->state = '\t';
              if (moby->animationId != '\r') {
                uVar5 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar4,0xd,0,uVar5);
              }
              if ((*(int *)((int)pvVar20 + 0x128) != -1) &&
                 (pMVar18 = g_MobyInstance + *(int *)((int)pvVar20 + 0x128),
                 *(int *)((int)pMVar18->pVar + 8) != 0)) {
                uVar5 = idol::GetAnimDuration(0x1e);
                M408_00364690(pMVar18,uVar5);
              }
            }
            else {
              uVar11 = idol::GetAnimDuration(0x3c);
              *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
            }
          }
          else {
            moby->setByGroup = '\x01';
            if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
              *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
              moby->state = '\v';
              *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
              *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
              if (moby->animationId != '\x01') {
                uVar5 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar4,1,0,uVar5);
              }
            }
            else {
              moby->state = '\x10';
              if (moby->animationId != '\x03') {
                uVar5 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar4,3,0,uVar5);
              }
            }
          }
        }
        else {
          moby->state = '\f';
          *(undefined4 *)((int)pvVar20 + 0x144) = 1;
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
      }
      else if (bVar2 < 0xf) {
        FUN_003655c0(g_MobyInstance + *(int *)((int)pvVar20 + 0x128));
        FUN_005e81f0(auStack_160,&g_MobyInstance[*(int *)((int)pvVar20 + 0x128)].pos,lVar4 + 0x10);
        dVar21 = (double)FUN_005e8030(auStack_160);
        FUN_005e7f98((double)(float)(dVar21 - 1.5),auStack_160,auStack_160);
        FUN_005e7f54(auStack_160,auStack_160,lVar4 + 0x10);
        iVar8 = M44_0037c500
                          ((double)(g_FrameTime * 4.0),lVar4,&DAT_00720000,auStack_160);
        if ((iVar8 != 0) && (moby->state = '\x0f', moby->animationId != '\t')) {
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,9,0,uVar5);
        }
      }
      else {
        if ((moby->updateId == moby->animationId) &&
           (dVar21 = (double)BlendAnimFrame(moby), 12.0 <= dVar21)) {
          M408_00364690(g_MobyInstance + *(int *)((int)pvVar20 + 0x128),0xb4);
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          M408_00364690(g_MobyInstance + *(int *)((int)pvVar20 + 0x128),0xb4);
          M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x14,0xe);
        }
      }
      goto LAB_00380248;
    }
    if (bVar2 < 0x11) {
      *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
      *(undefined2 *)((int)pvVar20 + 0x194) = 0;
      M44_0037c268(lVar4);
      if ((moby->field43_0x70 & 2U) != 0) {
        if (g_heroState == ANIM_TARGET_WALK) {
          moby->state = '\f';
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
        else {
          moby->state = '\x11';
          *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
          if (moby->animationId != '\x04') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,4,0,uVar5);
          }
        }
      }
      goto LAB_00380248;
    }
    if (0x11 < bVar2) {
      *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
      *(undefined2 *)((int)pvVar20 + 0x194) = 0;
      M44_0037c268(lVar4);
      if ((moby->field43_0x70 & 2U) != 0) {
        if (g_heroState == ANIM_TARGET_WALK) {
          moby->state = '\f';
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
        else {
          moby->state = '\x13';
          *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
          if (moby->animationId != '\x06') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,6,0,uVar5);
          }
        }
      }
      goto LAB_00380248;
    }
    *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
    *(undefined2 *)((int)pvVar20 + 0x194) = 0;
    M44_0037c268(lVar4);
    if (((*(char *)((int)pvVar20 + 0x19e) == '\0') &&
        (dVar21 = (double)BlendAnimFrame(moby), 0.8500000238418579 <= dVar21)) &&
       (dVar21 < 3.0)) {
      GetMobyJointsWorldMtx(lVar4,1,local_6c,auStack_b0);
      GetMobyJointsWorldPos(lVar4,1,local_6c,auStack_100);
      FUN_005e7f98(-(double)(DAT_00841aa4 * g_FrameTime),&local_120,auStack_a0);
      iVar8 = (int)pvVar20 + 0x100;
      FUN_005e81f0(&local_110,iVar8,auStack_100);
      FUN_005e7f98((double)(DAT_00841aa4 * g_FrameTime),&local_110,&local_110);
      dVar21 = (double)FUN_005e8338((double)local_120,(double)local_11c);
      dVar23 = (double)FUN_005e8338((double)local_110,(double)local_10c);
      dVar21 = (double)FastSubRots((float)dVar21,(float)dVar23);
      dVar23 = 0.7853981852531433;
      if (0.7853981852531433 < dVar21) {
LAB_0037fa90:
        FUN_004c0208(lVar4,&local_120,auStack_100,iVar8);
      }
      else {
        uVar5 = FUN_005e7ebc(&local_120);
        dVar21 = (double)FUN_005e8338(uVar5,(double)local_118);
        uVar5 = FUN_005e7ebc(&local_110);
        dVar22 = (double)FUN_005e8338(uVar5,(double)local_108);
        dVar21 = (double)FastSubRots((float)dVar21,(float)dVar22);
        if (dVar23 < dVar21) goto LAB_0037fa90;
        FUN_004c0208(lVar4,&local_110,auStack_100,iVar8);
      }
      *(undefined1 *)((int)pvVar20 + 0x19e) = 1;
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (g_heroState == ANIM_TARGET_WALK) {
        moby->state = '\f';
        if (moby->animationId != '\0') {
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,0,0,uVar5);
        }
      }
      else if (((*(int *)((int)pvVar20 + 0x128) == -1) ||
               (*(int *)((int)g_MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) ||
              (iVar8 = M44_0037c07c(lVar4), iVar8 == 0)) {
        dVar23 = (double)(moby->rotation).z;
        dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y));
        dVar21 = (double)FastSubRots((float)dVar23,(float)dVar21);
        if (dVar21 <= 0.7853981852531433) {
          if (*(int *)((int)pvVar20 + 0x114) == 2) {
            moby->state = '\f';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,0,0,uVar5);
            }
          }
          else {
            moby->state = '\x12';
            if (moby->animationId != '\x05') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,5,0,uVar5);
            }
          }
        }
        else {
          M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x12,5);
        }
      }
      else {
        moby->state = '\x0e';
        if (moby->animationId != '\x0e') {
          uVar5 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar4,0xe,0,uVar5);
        }
      }
      *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
    }
    goto LAB_00380248;
  }
  if (0x15 < bVar2) {
    if ((bVar2 == 0x17) &&
       (uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar20 + 0x70)),
       (uVar15 & 0x160) != 0)) {
      if (*(int *)((int)pvVar20 + 300) != -1) {
        M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar20 + 300));
        *(undefined4 *)((int)pvVar20 + 300) = 0xffffffff;
      }
      if (*(int *)((int)pvVar20 + 0x150) != -1) {
        M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar20 + 0x150));
        *(undefined4 *)((int)pvVar20 + 0x150) = 0xffffffff;
      }
      PlayMobySound(0xd,0,moby);
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar4,lVar4 + 0x10,&DAT_0037dbf0,
                 0xffffffffffffffff);
      MB_SpawnBoltsFromCrate(lVar4,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    goto LAB_00380248;
  }
  if (0x13 < bVar2) {
    if (bVar2 < 0x15) {
      dVar21 = (double)FUN_005e8548(lVar4 + 0x10,(int)pvVar20 + 0x160);
      if (dVar21 <= 0.20000000298023224) {
        if (*(short *)((int)pvVar20 + 0x156) == 0) {
          moby->setByGroup = '\0';
          *(undefined4 *)((int)pvVar20 + 0x144) = 0;
          if (*(int *)((int)pvVar20 + 0x124) == -1) {
            M44_0037bbe8((double)*(float *)((int)pvVar20 + 0x16c),lVar4,pvVar20)
            ;
          }
          else {
            M44_0037be68
                      (lVar4,pvVar20,
                       Splines[*(int *)((int)pvVar20 + 0x124)]->points +
                       *(int *)((int)pvVar20 + 0x13c),2,0);
          }
        }
        else {
          dVar23 = (double)(moby->rotation).z;
          dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                        (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y));
          dVar21 = (double)FastSubRots((float)dVar23,(float)dVar21);
          if ((dVar21 <= 0.7853981852531433) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
            moby->state = '\f';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar4,0,0,uVar5);
            }
          }
          else {
            M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x10,3);
          }
        }
      }
      else {
        M44_0037c500
                  ((double)(g_FrameTime * 3.0),lVar4,&DAT_0037dbf0,(int)pvVar20 + 0x160);
      }
    }
    else {
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar20 + 0x70));
      if ((uVar15 & 0x40) != 0) {
        uVar5 = 0x3fe0000000000000;
        GetGroundZ(0x3fe0000000000000,lVar4 + 0x10,0);
        iVar12 = CollHotspot();
        if ((iVar12 != -1) || ((moby->pos).z <= *(float *)((int)pvVar20 + 0x168) - 5.0)) {
          if (*(int *)((int)pvVar20 + 300) != -1) {
            M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar20 + 300));
            *(undefined4 *)((int)pvVar20 + 300) = 0xffffffff;
          }
          if (*(int *)((int)pvVar20 + 0x150) != -1) {
            M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar20 + 0x150));
            *(undefined4 *)((int)pvVar20 + 0x150) = 0xffffffff;
          }
          PlayMobySound(0xd,0,moby);
          MB_SpawnExplosionSparks
                    (uVar5,0x402a000000000000,lVar4,lVar4 + 0x10,&DAT_0037dbf0,0xffffffffffffffff);
          MB_SpawnBoltsFromCrate(lVar4,0,0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
        if (g_heroState == ANIM_TARGET_WALK) {
          moby->state = '\f';
          if (moby->animationId == '\0') {
            return;
          }
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,0,0,uVar5);
          return;
        }
        moby->setByGroup = '\x01';
        if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
          *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
          moby->state = '\v';
          *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
          *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
          if (moby->animationId == '\x01') {
            return;
          }
          uVar5 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar4,1,0,uVar5);
          return;
        }
        moby->state = '\x10';
        if (moby->animationId == '\x03') {
          return;
        }
        uVar5 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar4,3,0,uVar5);
        return;
      }
      if ((uVar15 & 0x120) != 0) {
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_00380248;
  }
  *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
  *(undefined2 *)((int)pvVar20 + 0x194) = 0;
  M44_0037c268(lVar4);
  if (((*(char *)((int)pvVar20 + 0x19e) == '\0') &&
      (dVar21 = (double)BlendAnimFrame(moby), 0.8500000238418579 <= dVar21)) &&
     (dVar21 < 3.0)) {
    GetMobyJointsWorldMtx(lVar4,1,local_70,auStack_f0);
    GetMobyJointsWorldPos(lVar4,1,local_70,auStack_130);
    FUN_005e7f98((double)(DAT_00841aa4 * g_FrameTime),&local_150,auStack_e0);
    iVar8 = (int)pvVar20 + 0x100;
    FUN_005e81f0(&local_140,iVar8,auStack_130);
    FUN_005e7f98((double)(DAT_00841aa4 * g_FrameTime),&local_140,&local_140);
    dVar21 = (double)FUN_005e8338((double)local_150,(double)local_14c);
    dVar23 = (double)FUN_005e8338((double)local_140,(double)local_13c);
    dVar21 = (double)FastSubRots((float)dVar21,(float)dVar23);
    dVar23 = 0.7853981852531433;
    if (0.7853981852531433 < dVar21) {
LAB_0037f704:
      FUN_004c0208(lVar4,&local_150,auStack_130,iVar8);
    }
    else {
      uVar5 = FUN_005e7ebc(&local_150);
      dVar21 = (double)FUN_005e8338(uVar5,(double)local_148);
      uVar5 = FUN_005e7ebc(&local_140);
      dVar22 = (double)FUN_005e8338(uVar5,(double)local_138);
      dVar21 = (double)FastSubRots((float)dVar21,(float)dVar22);
      if (dVar23 < dVar21) goto LAB_0037f704;
      FUN_004c0208(lVar4,&local_140,auStack_130,iVar8);
    }
    *(undefined1 *)((int)pvVar20 + 0x19e) = 1;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    if (g_heroState == ANIM_TARGET_WALK) {
      moby->state = '\f';
      if (moby->animationId != '\0') {
        uVar5 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar4,0,0,uVar5);
      }
    }
    else if (((*(int *)((int)pvVar20 + 0x128) == -1) ||
             (*(int *)((int)g_MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) ||
            (iVar8 = M44_0037c07c(lVar4), iVar8 == 0)) {
      dVar23 = (double)(moby->rotation).z;
      dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y));
      dVar21 = (double)FastSubRots((float)dVar23,(float)dVar21);
      if (dVar21 <= 0.7853981852531433) {
        if (*(int *)((int)pvVar20 + 0x114) == 2) {
          moby->state = '\f';
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
        else {
          moby->state = '\x10';
          if (moby->animationId != '\x03') {
            uVar5 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar4,3,0,uVar5);
          }
        }
      }
      else {
        M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x10,3);
      }
    }
    else {
      moby->state = '\x0e';
      if (moby->animationId != '\x0e') {
        uVar5 = idol::GetAnimDuration(0x14);
        MB_SetAnimation(lVar4,0xe,0,uVar5);
      }
    }
    *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
  }
LAB_00380248:
  M44_0037b5b0(lVar4);
  sVar19 = 0;
  if ((*(short *)((int)pvVar20 + 0x156) == 0) && (*(int *)((int)pvVar20 + 0x114) == 2)) {
    if (*(short *)((int)pvVar20 + 0x158) != 0) {
      sVar19 = 1;
    }
  }
  else {
    sVar19 = 2;
  }
  if ((DAT_010c51a8 != worldUpdateTime) || (DAT_0096bfc0 < sVar19)) {
    DAT_010c51a8 = worldUpdateTime;
    DAT_0096bfc0 = sVar19;
  }
  uVar5 = idol::GetAnimDuration(0xaa);
  if (sVar19 == 2) {
    uVar5 = idol::GetAnimDuration(0x32);
  }
  else if (sVar19 == 1) {
    uVar5 = idol::GetAnimDuration(0x5a);
  }
  dVar21 = (double)FastIntToDouble(uVar5);
  dVar21 = (double)FUN_005e8128((double)((float)((double)(longlong)
                                                         (worldUpdateTime -
                                                         (worldUpdateTime / (int)uVar5) * (int)uVar5
                                                         ) / dVar21) * 2.0 * 3.1415927 + -3.1415927)
                               );
  iVar8 = FastDoubleToInt((double)(float)(dVar21 * 20.0));
  lVar6 = FastDoubleToInt((double)(float)(dVar21 * 70.0));
  lVar7 = FastDoubleToInt((double)(float)(dVar21 * 10.0));
  iVar8 = iVar8 + 0x32;
  lVar6 = lVar6 + 0xb4;
  uVar16 = lVar6 + (0xff - (longlong)(int)lVar6 >> 0x3f & 0xffU - lVar6);
  uVar10 = (uint)uVar16;
  uVar15 = iVar8 + ((uint)(0xff - (longlong)iVar8 >> 0x3f) & 0xffU - iVar8);
  if (sVar19 == 2) {
    uVar16 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
    uVar15 = uVar10;
  }
  uVar15 = FastLerpColor
                     (0x3fb99999a0000000,moby->glowRgba,
                      (uint)((uVar16 & 0xffffffff) << 8) | uVar15 |
                      (uint)((lVar7 + 0x14U & 0xffffffff) << 0x10) | 0x80000000);
  moby->glowRgba = uVar15;
  do {
    GetBonePosition(lVar4,iVar12 + 4,(int)pvVar20 + 0x2a0);
    iVar12 = iVar12 + 1;
    pvVar20 = (void *)((int)pvVar20 + 0x10);
  } while (iVar12 < 3);
  RegisterMobyDraw(&PTR_M440_003805d0_0070cbb8,moby);
  return;
}


