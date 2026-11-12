// game/update/moby334.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3486f0-0x349ae4
#include "game/update/moby334.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby333.h"
#include "idol/fastfunc.h"

// 0x03486f0 (0xac bytes)
void M334_003486f0(void)

{
  undefined8 in_r0;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x3486e4);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar3 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = ZEXT416(0xffffffff);
  auVar5 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = vectorConvertFromSignedFixedPointWord(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010c5100 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5100,
                            0x10c0000);
  auVar1 = loadVectorLeftIndexed(4,0x3486e4);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_0083fe10 = 0x10000;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar2 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010c5104 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5104,
                            0x10c0000);
  auVar1 = loadVectorLeftIndexed(8,0x3486e4);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010c5108 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5108,
                            0x10c0000);
  return;
}


// 0x03487b8 (0x5d8 bytes)
// inlined: FastAtan2 @0x34897c, FastAtan2 @0x348af8
MobyInstance *
FUN_003487b8(double param_1,double param_2,double param_3,double param_4,float param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9,
            ulonglong param_10,float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  MobyInstance *pMVar11;
  longlong lVar9;
  longlong lVar10;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f21;
  double dVar21;
  ulonglong in_f22;
  double dVar22;
  ulonglong in_f23;
  double dVar23;
  ulonglong in_f24;
  double dVar24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000074;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar10 = uVar8 - 0x160;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar8;
  puVar5[0x2e] = in_LR;
  puVar5[0x21] = in_f21;
  puVar5[0x22] = in_f22;
  puVar5[0x23] = in_f23;
  puVar5[0x24] = in_f24;
  puVar5[0x25] = in_f25;
  puVar5[0x26] = in_f26;
  puVar5[0x27] = in_f27;
  puVar5[0x28] = in_f28;
  puVar5[0x29] = in_f29;
  puVar5[0x2a] = in_f30;
  puVar5[0x2b] = in_f31;
  puVar5[0x20] = unaff_r31;
  puVar5[0x1a] = unaff_r25;
  puVar5[0x1e] = unaff_r29;
  puVar5[0x1d] = unaff_r28;
  puVar5[0x1f] = unaff_r30;
  puVar5[0x1c] = unaff_r27;
  puVar5[0x1b] = unaff_r26;
  _fStack00000040 = param_7;
  _fStack00000048 = param_8;
  pMVar11 = CreateMoby(0x14e);
  dVar24 = (double)fStack00000040;
  dVar23 = (double)fStack00000048;
  dVar22 = (double)fStack00000044;
  dVar21 = (double)fStack0000004c;
  if (pMVar11 != (MobyInstance *)0x0) {
    pfVar4 = (float *)pMVar11->pVar;
    pfVar4[6] = param_5;
    pMVar11->updateDistance = -1;
    pMVar11->drawDistance = 0x7f;
    pMVar11->enabled = '\x01';
    SetColorOfMoby(pMVar11,0x80,0xc4,0xff);
    dVar26 = 0.0;
    fStack00000054 = (float)param_9;
    fStack00000050 = (float)(param_9 >> 0x20);
    fStack00000058 = (float)(param_10 >> 0x20);
    dVar25 = (double)fStack00000058;
    (pMVar11->rotation).x = 0.0;
    dVar18 = ABS(dVar25);
    fStack0000005c = (float)param_10;
    dVar27 = (double)(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
    dVar20 = ABS((double)(float)SQRT(dVar27));
    *(float *)((int)puVar5 + 0x74) = (float)SQRT(dVar27);
    *(float *)(puVar5 + 0xf) = (float)(dVar20 - dVar18);
    uVar16 = (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 | param_10 >> 0x3d & 4;
    fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    dVar19 = ABS((double)*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      dVar19 = dVar18;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      dVar18 = dVar20;
    }
    dVar20 = dVar26;
    if (0.0 < dVar19) {
      lVar9 = uVar8 - 0x150;
      lVar13 = uVar8 - 0xc4;
      lVar14 = uVar8 - 0xb4;
      lVar17 = 2;
      fVar2 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x15) = fVar2;
      *(float *)(puVar5 + 0x14) = fVar2;
      *(float *)((int)puVar5 + 0xa4) = fVar2;
      *(float *)((int)puVar5 + 0x9c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar5 + 0x14) = *(float *)(puVar5 + 0x14) * fVar3;
      *(float *)((int)puVar5 + 0xa4) = *(float *)((int)puVar5 + 0xa4) * fVar2;
      *(float *)(puVar5 + 0x15) = *(float *)(puVar5 + 0x15) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar9 + 0x9c) = *(float *)((int)lVar9 + 0x8c) * fVar2 * fVar2;
        iVar6 = (int)lVar13;
        lVar9 = lVar9 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar14 = uVar8 - 0xc4;
      pfVar15 = (float *)&DAT_007358e0;
      lVar9 = lVar10;
      lVar13 = lVar14;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar9 + 0x9c) = *(float *)((int)lVar9 + 0x9c) * fVar2;
        lVar9 = lVar9 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      lVar9 = lVar10;
      dVar18 = dVar26;
      do {
        iVar6 = (int)lVar9;
        lVar9 = lVar9 + 0x10;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar6 + 0x9c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar20 = (double)((float)(dVar18 + 0.7853981852531433) * fVar12 + fVar1);
    }
    fVar2 = ABS(fStack00000050);
    fVar1 = ABS(fStack00000054);
    (pMVar11->rotation).y = (float)-dVar20;
    *(float *)(puVar5 + 0xe) = fVar2 - fVar1;
    uVar16 = param_9 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1e) & 2 | (param_9 << 0x20) >> 0x3d & 4;
    fVar12 = fVar2;
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar12 = fVar1;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    dVar18 = dVar26;
    if (0.0 < fVar12) {
      lVar9 = uVar8 - 0x150;
      lVar14 = uVar8 - 0xd4;
      lVar13 = uVar8 - 0xe4;
      lVar17 = 2;
      fVar12 = (fVar1 - fVar12) / (fVar1 + fVar12);
      fVar1 = fVar12 * fVar12;
      *(float *)(puVar5 + 0x11) = fVar12;
      *(float *)(puVar5 + 0x10) = fVar12;
      *(float *)((int)puVar5 + 0x84) = fVar12;
      *(float *)((int)puVar5 + 0x7c) = fVar12;
      fVar12 = fVar1 * fVar1;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar1;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar12;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar12 * fVar1;
      do {
        *(float *)((int)lVar9 + 0x7c) = *(float *)((int)lVar9 + 0x6c) * fVar12 * fVar12;
        iVar6 = (int)lVar13;
        lVar13 = lVar13 + 8;
        lVar9 = lVar9 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar6 + 4) * fVar12 * fVar12;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar14 = uVar8 - 0xe4;
      pfVar15 = (float *)&DAT_007358e0;
      lVar9 = lVar10;
      lVar13 = lVar14;
      do {
        fVar12 = *pfVar15;
        fVar1 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar9 + 0x7c) = *(float *)((int)lVar9 + 0x7c) * fVar12;
        lVar9 = lVar9 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar1;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar9 = 2;
      do {
        iVar6 = (int)lVar10;
        iVar7 = (int)lVar14;
        lVar10 = lVar10 + 0x10;
        lVar14 = lVar14 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar2);
    }
    (pMVar11->rotation).z = (float)dVar18;
    (pMVar11->pos).x = (float)dVar24;
    (pMVar11->pos).y = (float)dVar22;
    (pMVar11->pos).z = (float)dVar23;
    (pMVar11->pos).w = (float)dVar21;
    *pfVar4 = fStack00000050;
    pfVar4[1] = fStack00000054;
    pfVar4[2] = fStack00000058;
    pfVar4[3] = fStack0000005c;
    dVar21 = (double)MB_randRangeFloat
                               (g_FrameTime * -1.5707964,g_FrameTime * 1.5707964
                               );
    pfVar4[4] = (float)dVar21;
    pfVar4[0xb] = (float)param_1;
    pfVar4[0xd] = (float)param_4;
    pfVar4[0xc] = (float)param_3;
    pfVar4[5] = 0.0;
    pfVar4[10] = in_stack_00000074;
    pfVar4[9] = param_11;
    pMVar11->alpha = ' ';
    fVar12 = 0.0;
    if (param_2 != -1.0) {
      fVar12 = (float)FastDoubleToInt
                                ((double)(float)(param_2 /
                                                (double)SQRT((float)(dVar25 * dVar25 + dVar27))));
    }
    pfVar4[7] = fVar12;
    pMVar11->scale = 0.0;
    SpawnPart_26(dVar26,pMVar11);
    SpawnPart_26(dVar26,pMVar11);
    puVar5[0x18] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(pMVar11,1,0,*(undefined4 *)((int)puVar5 + 0xc4));
    pMVar11->modeBits = DRAW_TRANSPARENT_WEIRD;
    UpdateMobyTransform(pMVar11);
  }
  return pMVar11;
}


// 0x0348da0 (0x5f8 bytes)
// inlined: FastAtan2 @0x348fb8, FastAtan2 @0x34917c
int M334_00348da0
              (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  short sVar14;
  longlong lVar12;
  int iVar13;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  uint in_r8;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar25;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x160;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar11;
  puVar8[0x2e] = in_LR;
  puVar8[0x23] = in_f23;
  puVar8[0x24] = in_f24;
  puVar8[0x25] = in_f25;
  puVar8[0x26] = in_f26;
  puVar8[0x27] = in_f27;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x1f] = unaff_r28;
  iVar19 = 0;
  puVar8[0x22] = unaff_r31;
  puVar8[0x1c] = unaff_r25;
  puVar8[0x21] = unaff_r30;
  puVar8[0x1e] = unaff_r27;
  dVar27 = 1000000000.0;
  puVar8[0x20] = unaff_r29;
  iVar7 = MobyUpdateChainStart;
  puVar8[0x1d] = unaff_r26;
  dVar28 = dVar27;
  do {
    if (iVar7 == 0) {
      return iVar19;
    }
    sVar14 = 0;
    if (*(int *)(iVar7 + 0x24) != 0) {
      sVar14 = *(short *)(*(int *)(iVar7 + 0x24) + 0x46);
    }
    if ((in_r8 & 1) == 0) {
      if (sVar14 < 9) {
        if ((4 < sVar14) && (sVar14 < 8)) goto LAB_00348ea4;
      }
      else if (sVar14 < 0xf) {
        if (sVar14 < 10) {
LAB_00348ea4:
          fVar2 = param_4[1];
          fVar5 = fVar2 - *(float *)(iVar7 + 0x14);
          fVar3 = *(float *)(iVar7 + 0x10);
          fVar4 = *param_4 - fVar3;
          dVar26 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
          if (dVar26 < param_3) {
            fVar5 = fVar3 - *param_4;
            *(float *)(puVar8 + 0xe) = fVar3;
            fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
            *(float *)((int)puVar8 + 0x74) = *(float *)(iVar7 + 0x14);
            fVar3 = *(float *)(iVar7 + 0x18);
            *(float *)(puVar8 + 0xf) = fVar3;
            fVar6 = ABS(fVar5);
            *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)(iVar7 + 0x1c);
            *(float *)((int)puVar8 + 0x8c) = fVar5;
            fVar4 = ABS(fVar2);
            *(float *)(puVar8 + 0x12) = fVar2;
            fVar2 = *(float *)(param_5 + 8);
            *(float *)(puVar8 + 0xf) = fVar3 + 0.4;
            *(float *)((int)puVar8 + 0x94) = fVar6 - fVar4;
            dVar24 = 0.0;
            dVar25 = 0.7853981852531433;
            uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
            fVar5 = ABS(*(float *)((int)puVar8 + 0x8c));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar5 = fVar4;
            }
            fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
            fVar10 = ABS(*(float *)(puVar8 + 0x12));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar10 = fVar6;
            }
            dVar21 = dVar24;
            if (0.0 < fVar5) {
              lVar12 = uVar11 - 0x150;
              lVar18 = uVar11 - 0x98;
              lVar15 = uVar11 - 0xa8;
              lVar20 = 2;
              fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
              fVar6 = fVar5 * fVar5;
              *(float *)((int)puVar8 + 0xc4) = fVar5;
              *(float *)((int)puVar8 + 0xbc) = fVar5;
              *(float *)(puVar8 + 0x18) = fVar5;
              *(float *)(puVar8 + 0x17) = fVar5;
              fVar5 = fVar6 * fVar6;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar6;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar5;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar5 * fVar6;
              do {
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar5 * fVar5;
                iVar13 = (int)lVar15;
                lVar15 = lVar15 + 8;
                lVar12 = lVar12 + 8;
                *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
                lVar18 = lVar18 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar20 = 4;
              lVar18 = uVar11 - 0xa8;
              pfVar16 = (float *)&DAT_007358e0;
              lVar12 = lVar1;
              lVar15 = lVar18;
              do {
                fVar5 = *pfVar16;
                fVar6 = pfVar16[1];
                pfVar16 = pfVar16 + 2;
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar5;
                lVar12 = lVar12 + 8;
                *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                lVar15 = lVar15 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar15 = 2;
              lVar12 = lVar1;
              do {
                iVar13 = (int)lVar12;
                iVar9 = (int)lVar18;
                lVar12 = lVar12 + 0x10;
                lVar18 = lVar18 + 0x10;
                dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar13 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar4);
            }
            dVar21 = (double)FastSubRots(fVar2,(float)dVar21);
            dVar21 = (double)(float)(dVar21 * dVar21);
            fVar2 = *(float *)(param_5 + 4);
            if (dVar21 < (double)(float)(param_1 * param_1)) {
              fVar3 = param_4[2];
              *(float *)(puVar8 + 0x10) = (float)dVar26;
              dVar22 = ABS((double)(*(float *)(puVar8 + 0xf) - fVar3));
              *(float *)((int)puVar8 + 0x84) = *(float *)(puVar8 + 0xf) - fVar3;
              *(float *)(puVar8 + 0x11) = (float)(ABS(dVar26) - dVar22);
              uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
              dVar23 = ABS((double)*(float *)(puVar8 + 0x10));
              if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
                dVar23 = dVar22;
              }
              fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
              dVar22 = ABS((double)*(float *)((int)puVar8 + 0x84));
              if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
                dVar22 = ABS(dVar26);
              }
              fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
              if (dVar24 < dVar23) {
                lVar12 = uVar11 - 0x150;
                lVar15 = uVar11 - 200;
                lVar18 = uVar11 - 0xb8;
                lVar20 = 2;
                fVar4 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar8 + 0xa4) = fVar4;
                *(float *)((int)puVar8 + 0x9c) = fVar4;
                *(float *)(puVar8 + 0x14) = fVar4;
                *(float *)(puVar8 + 0x13) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
                *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar4;
                *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar4 * fVar4;
                  iVar13 = (int)lVar15;
                  lVar12 = lVar12 + 8;
                  lVar15 = lVar15 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
                  lVar18 = lVar18 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar20 = 4;
                lVar18 = uVar11 - 200;
                pfVar16 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar15 = lVar18;
                do {
                  fVar4 = *pfVar16;
                  fVar6 = pfVar16[1];
                  pfVar16 = pfVar16 + 2;
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar4;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                  lVar15 = lVar15 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar15 = 2;
                lVar12 = lVar1;
                do {
                  iVar13 = (int)lVar12;
                  iVar9 = (int)lVar18;
                  lVar12 = lVar12 + 0x10;
                  lVar18 = lVar18 + 0x10;
                  dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                                    *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                   *(float *)(iVar9 + 0xc));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                dVar24 = (double)((float)(dVar24 + dVar25) * fVar3 + fVar5);
              }
              dVar26 = (double)FastSubRots(fVar2,(float)dVar24);
              dVar26 = (double)(float)(dVar26 * dVar26);
              if (((dVar26 < (double)(float)(param_2 * param_2)) &&
                  (iVar13 = CollLine(param_4,uVar11 - 0xf0,0,iVar7,0), iVar13 == 0)) &&
                 ((fVar2 = param_4[1] - *(float *)((int)puVar8 + 0x74),
                  dVar26 = (double)((float)(dVar21 * dVar26) *
                                   SQRT(SQRT((param_4[2] - *(float *)(puVar8 + 0xf)) *
                                             (param_4[2] - *(float *)(puVar8 + 0xf)) +
                                             (*param_4 - *(float *)(puVar8 + 0xe)) *
                                             (*param_4 - *(float *)(puVar8 + 0xe)) + fVar2 * fVar2))
                                   ), dVar26 < dVar28 &&
                  ((iVar13 = CollLine(param_4,uVar11 - 0xf0,0,iVar7,0), iVar13 == 0 ||
                   (dVar28 == dVar27)))))) {
                dVar28 = dVar26;
                iVar19 = iVar7;
              }
            }
          }
        }
      }
      else if (sVar14 < 0x10) goto LAB_00348ea4;
    }
    else if (((sVar14 == 0xd) || (sVar14 == 3)) || (sVar14 == 1)) goto LAB_00348ea4;
    iVar7 = *(int *)(iVar7 + 0x28);
  } while( true );
}


// 0x03493d0 (0x714 bytes)
// inlined: FastRSqrt @0x349564
/* Moby 334 */

void UpdateMoby_334(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  MobyInstance *moby_00;
  int iVar10;
  undefined8 uVar9;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [4];
  GPiece<64> local_c0;
  
  lVar8 = (longlong)(int)moby;
  pfVar3 = (float *)moby->pVar;
  fVar4 = (moby->pos).x + *pfVar3;
  (moby->pos).x = fVar4;
  fVar2 = (moby->pos).y + pfVar3[1];
  (moby->pos).y = fVar2;
  fVar5 = (moby->pos).z + pfVar3[2];
  (moby->pos).z = fVar5;
  dVar17 = 0.0;
  if (((fVar2 < 0.0 || fVar4 < 0.0) || (fVar5 < 0.0)) ||
     (64.0 < SQRT((fVar4 - GameCamera.posX) * (fVar4 - GameCamera.posX) +
                  (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY)))) {
    DeleteMoby(moby);
  }
  else {
    dVar16 = 1.0;
    if ((((uint)pfVar3[9] & 0x80) == 0) &&
       (moby_00 = (MobyInstance *)
                  M334_00348da0
                            (0x3fe921fb60000000,0x3ff921fb60000000,0x4044000000000000,lVar8 + 0x10,
                             lVar8 + 0x40), moby_00 != (MobyInstance *)0x0)) {
      dVar14 = (double)(moby_00->pos).z;
      iVar10 = MB_GetPvarsIfMobyHasThem(moby_00);
      if (iVar10 != 0) {
        dVar14 = (double)(float)(dVar14 + (double)*(float *)(iVar10 + 0x10));
      }
      fVar2 = (moby->pos).y - (moby_00->pos).y;
      fVar4 = (moby->pos).x - (moby_00->pos).x;
      dVar11 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2);
      if (dVar17 < dVar11) {
        pfVar3[2] = (float)((double)(float)(dVar14 - (double)(moby->pos).z) / dVar11);
      }
    }
    fVar4 = pfVar3[9];
    if (((uint)fVar4 & 8) != 0) {
      iVar10 = CollLine(local_100,local_f0,0,lVar8,0);
      if (iVar10 == 0) {
        fVar4 = (moby->pos).z - pfVar3[0xd];
      }
      else {
        fVar2 = (moby->pos).z;
        fVar5 = fVar2 + pfVar3[0xc];
        fVar7 = g_CollOutput.ip.z + pfVar3[0xb];
        fVar6 = pfVar3[0xb];
        if (fVar5 - fVar7 < 0.0) {
          fVar6 = pfVar3[0xc];
        }
        fVar4 = g_CollOutput.ip.z;
        if (fVar5 - fVar7 < 0.0) {
          fVar4 = fVar2;
        }
        fVar4 = fVar4 + fVar6;
      }
      (moby->pos).z = fVar4;
      fVar4 = pfVar3[9];
    }
    if (((uint)fVar4 & 0x20) != 0) {
      fVar4 = (moby->pos).z;
      fVar2 = *(float *)((int)pfVar3[6] + 0x18) + pfVar3[0xb];
      if (fVar4 <= fVar2) {
        if (fVar4 < fVar2) {
          if ((fVar4 + pfVar3[0xc]) - fVar2 < 0.0) {
            fVar2 = fVar4 + pfVar3[0xc];
          }
          (moby->pos).z = fVar2;
        }
      }
      else {
        if (fVar2 - (fVar4 - pfVar3[0xd]) < 0.0) {
          fVar2 = fVar4 - pfVar3[0xd];
        }
        (moby->pos).z = fVar2;
      }
    }
    iVar10 = FastDecTimerS32(pfVar3 + 7);
    if (iVar10 == 0) {
      iVar10 = CollLine(local_110,lVar8 + 0x10,0,pfVar3[6],local_c0);
      if (iVar10 != 0) {
        fVar4 = pfVar3[9];
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        if (((((uint)fVar4 & 0x10) != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
           ((g_CollOutput.pMoby == g_heroMobyPtr &&
            ((pfVar3[6] != 0.0 &&
             (cVar1 = *(char *)((int)pfVar3[6] + 0x20), cVar1 != -3 && cVar1 != -2)))))) {
          *(undefined1 *)pfVar3[10] = 1;
        }
        iVar10 = 0;
        dVar15 = -1.0;
        dVar13 = 3.0;
        dVar11 = 6.0;
        dVar14 = 10.5;
        dVar17 = 15.5;
        uVar12 = 0x40dd4c0000000000;
        do {
          MB_randRangeFloat((float)dVar15,(float)dVar16);
          MB_randRangeFloat((float)dVar15,(float)dVar16);
          MB_randRangeFloat((float)dVar15,(float)dVar16);
          FastVecReflect(local_d0,pfVar3,0xa10980);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar13),
                     (float)((double)g_FrameTime * dVar11));
          uVar9 = MB_randRange
                            ((int)((double)animationSpeed * dVar14),
                             (int)((double)animationSpeed * dVar17));
          SpawnPart_27(uVar12,lVar8 + 0x10,local_e0,0x7f2f4f6f,uVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 5);
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


