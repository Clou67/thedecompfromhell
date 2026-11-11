// game/update/moby625.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x3e7fc8-0x3eac28
#include "game/update/moby625.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby624.h"
#include "idol/fastfunc.h"

// 0x03e7fc8 (0x2b0 bytes)
// inlined: FastAtan2 @0x3e8114
void FUN_003e7fc8(double param_1,double param_2,f32 *param_3,float *param_4,undefined8 param_5,
                 undefined8 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xc0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x1a] = in_LR;
  puVar7[0x16] = in_f30;
  puVar7[0x17] = in_f31;
  puVar7[0x13] = unaff_r29;
  puVar7[0x15] = unaff_r31;
  puVar7[0x14] = unaff_r30;
  pMVar12 = CreateMoby(THRUSTERPACK|BOLT_CIRCLENUT);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\0';
    fVar1 = DAT_00853e88;
    pMVar12->drawDistance = 0xff;
    pMVar12->field60_0x90 = DAT_00853e8c;
    pMVar12->modeBits = pMVar12->modeBits | HAS_GLOW;
    pMVar12->scale = pMVar12->scale * fVar1;
    (pMVar12->pos).x = *param_3;
    (pMVar12->pos).y = param_3[1];
    (pMVar12->pos).z = param_3[2];
    (pMVar12->pos).w = param_3[3];
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar2 = ABS(*param_4);
    fVar8 = ABS(param_4[1]);
    pfVar6 = (float *)pMVar12->pVar;
    *(float *)(puVar7 + 0xe) = fVar2 - fVar8;
    fVar1 = 0.0;
    uVar14 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    if (0.0 < fVar4) {
      lVar17 = uVar11 - 0xb0;
      lVar15 = uVar11 - 0x3c;
      lVar16 = uVar11 - 0x4c;
      lVar19 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)(puVar7 + 0xf) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      *(float *)((int)puVar7 + 0x74) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar2;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar4 * fVar4;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x4c;
      lVar19 = 4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar15 = lVar17;
      lVar16 = lVar13;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar4;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar9 = (int)lVar13;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x74) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar5;
    }
    (pMVar12->rotation).z = fVar1;
    *pfVar6 = *param_4;
    pfVar6[1] = param_4[1];
    pfVar6[2] = param_4[2];
    fVar1 = param_4[3];
    pfVar6[10] = (float)param_1;
    pfVar6[3] = fVar1;
    pfVar6[8] = (float)param_2;
    pfVar6[0xc] = 0.0;
    pfVar6[0xd] = param_7;
  }
  return;
}


// 0x03e82b0 (0x5d4 bytes)
ulonglong M625_003e82b0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar11;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint uVar12;
  ulonglong unaff_r23;
  undefined4 *puVar13;
  ulonglong unaff_r24;
  undefined4 *puVar14;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  longlong lVar17;
  ulonglong unaff_r28;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar19;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar18 = uVar6 - 0x410;
  puVar4 = (ulonglong *)lVar18;
  *puVar4 = uVar6;
  puVar4[0x84] = in_LR;
  puVar4[0x75] = in_f19;
  puVar4[0x76] = in_f20;
  puVar4[0x77] = in_f21;
  puVar4[0x78] = in_f22;
  puVar4[0x79] = in_f23;
  puVar4[0x7a] = in_f24;
  puVar4[0x7b] = in_f25;
  puVar4[0x7c] = in_f26;
  puVar4[0x7d] = in_f27;
  puVar4[0x7e] = in_f28;
  puVar4[0x7f] = in_f29;
  puVar4[0x80] = in_f30;
  puVar4[0x81] = in_f31;
  puVar4[0x74] = unaff_r31;
  puVar4[0x72] = unaff_r29;
  puVar4[0x68] = unaff_r19;
  puVar4[0x73] = unaff_r30;
  puVar4[0x71] = unaff_r28;
  puVar4[0x70] = unaff_r27;
  puVar4[0x6f] = unaff_r26;
  puVar4[0x6e] = unaff_r25;
  puVar4[0x6d] = unaff_r24;
  puVar4[0x6c] = unaff_r23;
  puVar4[0x6b] = unaff_r22;
  puVar4[0x6a] = unaff_r21;
  puVar4[0x69] = unaff_r20;
  iVar3 = *(int *)(param_1 + 0x78);
  FastMtx4Identity((float *)(puVar4 + 0x16));
  fVar1 = *(float *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  iVar11 = 0;
  *(undefined4 *)(puVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  fVar5 = DAT_00853f10;
  iVar19 = 0;
  *(undefined4 *)((int)puVar4 + 0xe4) = uVar10;
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar4 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar4 + 0xec) = uVar10;
  *(float *)(puVar4 + 0x1d) = fVar1 + fVar5;
  dVar38 = 1.0;
  *(undefined4 *)((int)puVar4 + 0xec) = 0x3f800000;
  do {
    uVar7 = GetEffectTex(0xe);
    iVar9 = (int)lVar18;
    *(undefined8 *)(iVar9 + 0x168) = uVar7;
    uVar7 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar9 + 0x170) = uVar7;
    uVar7 = FUN_00502f08(0,0,0,0,0,0);
    *(undefined8 *)(iVar9 + 0x160) = uVar7;
    uVar7 = idol_draw::PackCmd(DAT_010cbbb0,DAT_00853ed8,DAT_010cbbb4,DAT_00853edc,0x80);
    *(undefined8 *)(iVar9 + 0x178) = uVar7;
    puVar4[0x66] = (longlong)iVar11;
    dVar34 = (double)(float)((double)(longlong)puVar4[0x66] * 0.25);
    dVar35 = (double)(float)((double)DAT_00853f18 * (double)(longlong)puVar4[0x66] +
                            (double)*(float *)(iVar3 + 0x24));
    dVar36 = (double)(float)((double)*(float *)(iVar3 + 0x24) * (double)DAT_00853f1c + dVar34);
    iVar9 = FastDoubleToInt(dVar36);
    puVar4[0x66] = (longlong)iVar9;
    dVar37 = (double)(float)(dVar36 - (double)(longlong)puVar4[0x66]);
    uVar8 = FastLerpColor(dVar37,DAT_00853ee4,DAT_00853ee8);
    dVar36 = (double)(float)((double)DAT_00853f20 * dVar37);
    if (dVar38 - (double)(float)((double)DAT_00853f20 * dVar37) < 0.0) {
      dVar36 = dVar38;
    }
    uVar8 = FastLerpColor(dVar36,uVar8 & 0xffffff);
    dVar39 = (double)((*(float *)(iVar3 + 0x28) - *(float *)(iVar3 + 0x24)) /
                     (DAT_00853f24 * animationSpeed * *(float *)(iVar3 + 0x20)));
    dVar36 = dVar38;
    if ((dVar39 <= dVar38) && (dVar36 = dVar39, dVar39 < 0.0)) {
      dVar36 = 0.0;
    }
    uVar10 = FastLerpColor(dVar36,uVar8 & 0xffffff,uVar8);
    dVar40 = 0.01745329238474369;
    dVar36 = 3.141590118408203;
    dVar39 = 1.570796251296997;
    dVar28 = 3.141592502593994;
    dVar29 = -3.141592502593994;
    dVar30 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    uVar12 = 0;
    dVar32 = -0.0001980741071747616;
    dVar33 = 2.601886990305502e-06;
    puVar13 = &DAT_00853ef0;
    puVar14 = &DAT_00853ef4;
    dVar34 = (double)(float)(dVar34 * 0.01745329238474369);
    lVar15 = lVar18;
    lVar16 = lVar18;
    lVar17 = lVar18;
    do {
      uVar2 = *puVar14;
      *(undefined4 *)((int)lVar15 + 0x140) = *puVar13;
      *(undefined4 *)((int)lVar15 + 0x144) = uVar2;
      if ((uVar12 & 1) == 0) {
        fVar1 = -(float)((double)DAT_00853f14 * dVar37);
      }
      else {
        fVar1 = (float)((double)DAT_00853f14 * dVar37);
      }
      puVar4[0x66] = (longlong)((int)uVar12 >> 1);
      iVar9 = (int)lVar16;
      *(float *)(iVar9 + 0xf8) = fVar1;
      dVar20 = (double)FastWrapRot
                                 ((float)((double)(float)((double)DAT_00853eec * dVar40) *
                                          (double)(longlong)puVar4[0x66] - dVar36),
                                  (float)((double)DAT_00853eec * dVar34));
      dVar23 = (double)(float)(dVar20 + dVar39);
      *(undefined4 *)((int)lVar17 + 0x130) = uVar10;
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 2;
      *(undefined4 *)(iVar9 + 0xfc) = 0x3f800000;
      lVar15 = lVar15 + 8;
      puVar14 = puVar14 + 2;
      lVar17 = lVar17 + 4;
      dVar21 = (double)(float)(dVar28 - dVar20);
      if (dVar20 - (double)(float)(dVar28 - dVar20) < 0.0) {
        dVar21 = dVar20;
      }
      dVar24 = (double)(float)(dVar28 - dVar23);
      if (dVar23 - (double)(float)(dVar28 - dVar23) < 0.0) {
        dVar24 = dVar23;
      }
      dVar22 = (double)(float)(dVar29 - dVar20);
      if ((double)(float)(dVar29 - dVar20) - dVar21 < 0.0) {
        dVar22 = dVar21;
      }
      dVar21 = (double)(float)(dVar29 - dVar23);
      if ((double)(float)(dVar29 - dVar23) - dVar24 < 0.0) {
        dVar21 = dVar24;
      }
      dVar20 = (double)(float)(dVar22 * dVar22);
      dVar23 = (double)(float)(dVar21 * dVar21);
      dVar26 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar22));
      dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar21));
      dVar25 = (double)(float)(dVar20 * dVar26);
      dVar27 = (double)(float)(dVar23 * dVar24);
      *(float *)(iVar9 + 0xf4) =
           (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar33 +
                                  (double)(float)(dVar25 * dVar32 +
                                                 (double)(float)(dVar26 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar20 * dVar22) * dVar30 + dVar22)))) * dVar35);
      *(float *)(iVar9 + 0xf0) =
           (float)((double)(float)((double)(float)(dVar23 * dVar27) * dVar33 +
                                  (double)(float)(dVar27 * dVar32 +
                                                 (double)(float)(dVar24 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar23 * dVar21) * dVar30 + dVar21)))) * dVar35);
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar12 < 4);
    iVar11 = iVar11 + 1;
    lVar18 = lVar18 + 0x90;
  } while (iVar11 < 4);
  dVar38 = (double)DAT_00853eec;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(float *)(puVar4 + 0xf) = (float)(dVar38 * dVar40);
  FastEulerToMtx(uVar6 - 0x390,uVar6 - 0x3a0);
  auVar42 = ZEXT416(0xffffffff);
  auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar46 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar48 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar41 = loadVectorLeftIndexed(0x3eec,0x850000);
  auVar42 = loadVectorLeftIndexed(0x34,0x3e8278);
  auVar44 = vectorReciprocalEstimateFloatingPoint(auVar41);
  auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
  uVar8 = 0x30;
  auVar42 = ZEXT416(0);
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar46,auVar45);
  auVar46 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  auVar44 = ZEXT416(0xffffffff);
  auVar48 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = loadVectorLeftIndexed(0x30,0x3e8278);
  auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  dVar38 = 360.0;
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar49,auVar47);
  auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar41,auVar46);
  auVar44 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar48
                      );
  auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
             auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    do {
      lVar18 = uVar6 - 0x360;
      FastDrawQuad(uVar6 - 800,lVar18,0,EffectTexHeaders,9);
      FastDrawQuad(uVar6 - 0x290,lVar18,0,EffectTexHeaders,9);
      FastDrawQuad(uVar6 - 0x200,lVar18,0,EffectTexHeaders,9);
      FastDrawQuad(uVar6 - 0x170,lVar18,0,EffectTexHeaders,9);
      FastVecMtx4MultBatch3(lVar18,lVar18,uVar6 - 0x390);
      dVar36 = (double)DAT_00853eec;
      iVar19 = iVar19 + 1;
      uVar8 = (ulonglong)iVar19;
      puVar4[0x66] = uVar8;
    } while ((float)(longlong)puVar4[0x66] < (float)(dVar38 / dVar36));
  }
  return uVar8;
}


// 0x03e8884 (0x14 bytes)
void M625_003e8884(void)

{
  DAT_00853f8c = 0x10000;
  return;
}


// 0x03e88a8 (0x18c bytes)
void M625_003e88a8(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x78);
  iVar2 = iVar5;
  do {
    pcVar1 = *(char **)(iVar2 + 0x1a0);
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 == '\x02') {
        if (*(short *)(pcVar1 + 0x32) == 0) {
          *(undefined4 *)(iVar2 + 0x1a0) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x1a0) = 0;
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 8);
  if (DAT_0096ae38 != 6) {
    uVar6 = 0x3fe8000000000000;
    do {
      if (*(uint *)(iVar5 + 0x1a0) != 0) {
        CollMobySphere(uVar6,(ulonglong)*(uint *)(iVar5 + 0x1a0) + 0x10);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < 8);
  }
  return;
}


// 0x03e8a88 (0xb68 bytes)
// inlined: FastAtan2 @0x3e92ac
void M625_003e8a88(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  vec4 *pvVar29;
  ulonglong unaff_r28;
  undefined8 uVar30;
  ulonglong unaff_r29;
  vec4 *pvVar31;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f14;
  double dVar39;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar40;
  ulonglong in_f19;
  double dVar41;
  ulonglong in_f20;
  double dVar42;
  ulonglong in_f21;
  double dVar43;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar44;
  ulonglong in_f25;
  double dVar45;
  ulonglong in_f26;
  double dVar46;
  double dVar47;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  undefined8 uVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar23 = uVar19 - 0x1e0;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar19;
  puVar12[0x3e] = in_LR;
  puVar12[0x2a] = in_f14;
  puVar12[0x2b] = in_f15;
  puVar12[0x2c] = in_f16;
  puVar12[0x2d] = in_f17;
  puVar12[0x2e] = in_f18;
  puVar12[0x2f] = in_f19;
  puVar12[0x30] = in_f20;
  puVar12[0x31] = in_f21;
  puVar12[0x32] = in_f22;
  puVar12[0x33] = in_f23;
  puVar12[0x34] = in_f24;
  puVar12[0x35] = in_f25;
  puVar12[0x36] = in_f26;
  puVar12[0x37] = in_f27;
  puVar12[0x38] = in_f28;
  puVar12[0x39] = in_f29;
  puVar12[0x3a] = in_f30;
  puVar12[0x3b] = in_f31;
  puVar12[0x29] = unaff_r31;
  puVar12[0x26] = unaff_r28;
  uVar30 = 0;
  puVar12[0x28] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar32 = ZEXT48(pvVar9);
  dVar39 = 0.0;
  puVar12[0x27] = unaff_r29;
  puVar12[0x25] = unaff_r27;
  puVar12[0x24] = unaff_r26;
  puVar12[0x23] = unaff_r25;
  puVar12[0x22] = unaff_r24;
  *(undefined4 *)((int)puVar12 + 0xd4) = 0;
  uVar20 = MB_damage(param_1,0x210000,0);
  if (*(int *)((int)pvVar9 + 0x184) != 0) {
    uVar30 = MB_damage(*(int *)((int)pvVar9 + 0x184),0x210000,0);
  }
  uVar21 = 0;
  if (*(int *)((int)pvVar9 + 0x188) != 0) {
    uVar21 = MB_damage(*(int *)((int)pvVar9 + 0x188),0x210000,0);
  }
  iVar24 = ____MB_PickMinAbsField2c_Of4(uVar20,uVar30,uVar21,0);
  if (iVar24 != 0) {
    iVar24 = iVar24 + ((uint)(ZERO_MASK(((int)param_1 - *(int *)(iVar24 + 0x20)))) &
                      -iVar24);
    if ((*(int *)(iVar24 + 0x20) != 0) &&
       ((sVar8 = *(short *)(*(int *)(iVar24 + 0x20) + 0xa6), sVar8 == 0x47 || (sVar8 == 0)))) {
      iVar24 = 0;
    }
  }
  MB_HandleDamage(param_1,iVar24,uVar32 + 0x20,0,puVar12 + 0x1a,(int)puVar12 + 0xd4,0,4);
  if ((*(int *)(puVar12 + 0x1a) != 1) && (param_1->state != '\x03')) {
    iVar24 = *(int *)((int)puVar12 + 0xd4);
    fVar3 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar12 + 0xd4);
    *(float *)((int)pvVar9 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar39 || iVar24 < 1) {
      PlayMobySound(3,0,param_1);
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      fVar1 = (param_1->pos).y;
      *(f32 *)(puVar12 + 0x18) = (param_1->pos).x;
      fVar2 = (param_1->pos).w;
      *(f32 *)((int)puVar12 + 0xc4) = fVar1;
      lVar22 = uVar32 + 0x40;
      *(f32 *)((int)puVar12 + 0xcc) = fVar2;
      lVar23 = uVar19 - 0x120;
      fVar3 = (param_1->pos).z;
      puVar12[0x12] = 0xffffffffffffffff;
      *(float *)(puVar12 + 0x19) = fVar3 + 3.0;
      uVar49 = 0x4010000000000000;
      dVar48 = 2.0;
      uVar21 = 0x4022000000000000;
      uVar30 = 0x3ff0000000000000;
      uVar20 = 0x402e000000000000;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      MB_genericExplosion
                (dVar39,dVar39,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,param_1,lVar22,lVar23);
      dVar46 = 1.570796251296997;
      fVar3 = (param_1->rotation).z;
      dVar45 = 3.141592502593994;
      fVar4 = fVar3 + 1.5707963;
      dVar44 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar43 = -0.0001980741071747616;
      fVar7 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar7 = fVar3;
      }
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
        fVar6 = fVar7;
      }
      fVar3 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar15 = fVar6 * fVar6;
      fVar7 = (param_1->pos).x;
      fVar4 = (param_1->pos).y;
      dVar42 = 2.601886990305502e-06;
      fVar18 = fVar3 * fVar3;
      fVar5 = fVar15 * fVar15 * fVar6;
      fVar1 = (param_1->pos).z;
      fVar16 = fVar18 * fVar18 * fVar3;
      fVar14 = fVar15 * fVar5;
      *(f32 *)((int)puVar12 + 0xcc) = (param_1->pos).w;
      *(f32 *)(puVar12 + 0x19) = fVar1;
      puVar12[0x12] = 0xffffffffffffffff;
      fVar17 = fVar18 * fVar16;
      puVar12[0x14] = 1;
      *(float *)((int)puVar12 + 0xc4) =
           (float)((double)(fVar15 * fVar14 * 2.601887e-06 +
                           fVar14 * -0.0001980741 +
                           fVar5 * 0.0083330255 + fVar15 * fVar6 * -0.16666657 + fVar6) * dVar48 +
                  (double)fVar4);
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      *(float *)(puVar12 + 0x18) =
           (float)((double)(fVar18 * fVar17 * 2.601887e-06 +
                           fVar17 * -0.0001980741 +
                           fVar16 * 0.0083330255 + fVar18 * fVar3 * -0.16666657 + fVar3) * dVar48 +
                  (double)fVar7);
      MB_genericExplosion
                (dVar39,dVar39,uVar49,dVar48,uVar21,uVar30,uVar20,param_1,lVar22,lVar23);
      fVar3 = (param_1->pos).x;
      dVar41 = (double)fVar3;
      fVar1 = (param_1->pos).y;
      *(float *)(puVar12 + 0x18) = fVar3;
      fVar2 = (param_1->pos).z;
      *(f32 *)((int)puVar12 + 0xc4) = fVar1;
      fVar1 = (param_1->pos).w;
      *(f32 *)(puVar12 + 0x19) = fVar2;
      *(f32 *)((int)puVar12 + 0xcc) = fVar1;
      dVar40 = 3.1415927410125732;
      dVar34 = (double)FastWrapRot((param_1->rotation).z,3.1415927);
      dVar34 = (double)(float)(dVar34 + dVar46);
      dVar46 = (double)(float)(dVar45 - dVar34);
      if (dVar34 - (double)(float)(dVar45 - dVar34) < 0.0) {
        dVar46 = dVar34;
      }
      dVar35 = (double)(float)(dVar44 - dVar34);
      if ((double)(float)(dVar44 - dVar34) - dVar46 < 0.0) {
        dVar35 = dVar46;
      }
      fVar3 = (param_1->rotation).z;
      dVar47 = (double)*(float *)((int)puVar12 + 0xc4);
      dVar46 = (double)(float)(dVar35 * dVar35);
      dVar34 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar35));
      dVar38 = (double)(float)(dVar46 * dVar34);
      *(float *)(puVar12 + 0x18) =
           (float)((double)(float)((double)(float)(dVar46 * dVar38) * dVar42 +
                                  (double)(float)(dVar38 * dVar43 +
                                                 (double)(float)(dVar34 * dVar36 +
                                                                (double)(float)((double)(float)(
                                                  dVar46 * dVar35) * dVar37 + dVar35)))) * dVar48 +
                  dVar41);
      dVar34 = (double)FastWrapRot(fVar3,(float)dVar40);
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      dVar46 = (double)(float)(dVar45 - dVar34);
      if (dVar34 - (double)(float)(dVar45 - dVar34) < 0.0) {
        dVar46 = dVar34;
      }
      dVar45 = (double)(float)(dVar44 - dVar34);
      if ((double)(float)(dVar44 - dVar34) - dVar46 < 0.0) {
        dVar45 = dVar46;
      }
      dVar46 = (double)(float)(dVar45 * dVar45);
      dVar44 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar45));
      dVar34 = (double)(float)(dVar46 * dVar44);
      *(float *)((int)puVar12 + 0xc4) =
           (float)((double)(float)((double)(float)(dVar46 * dVar34) * dVar42 +
                                  (double)(float)(dVar34 * dVar43 +
                                                 (double)(float)(dVar44 * dVar36 +
                                                                (double)(float)((double)(float)(
                                                  dVar46 * dVar45) * dVar37 + dVar45)))) * dVar48 +
                  dVar47);
      MB_genericExplosion
                (dVar39,dVar39,uVar49,dVar48,uVar21,uVar30,uVar20,param_1,lVar22,lVar23);
      auVar50 = ZEXT416(0xffffffff);
      auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
      auVar52 = vectorShiftLeftIntegerWord(auVar50,auVar50);
      auVar50 = loadVectorLeftIndexed(0x4034,0x850000);
      auVar53 = loadVectorLeftIndexed(0x3c,0x3e8a34);
      auVar51 = vectorConvertFromSignedFixedPointWord(auVar50,0);
      auVar50 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      pvVar31 = &param_1->pos;
      pvVar29 = &param_1->rotation;
      auVar50 = vectorAddFloatingPoint
                          (auVar51,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar53,auVar50,auVar52);
      auVar50 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
      auVar50 = vectorSplatHalfWord(auVar50,1);
      uVar10 = storeVectorElementHalfWordIndexed(auVar50,0x19e,uVar32);
      *(undefined2 *)((int)pvVar9 + 0x19e) = uVar10;
      param_1->state = '\x03';
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6dd,pvVar31,pvVar29,0,0,0x19e,&DAT_00a15d30);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6df,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6e0,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6fe,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6fe,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6ff,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6ff,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar39,param_1,0x6ff,pvVar31,pvVar29,0,0);
      return;
    }
    PlayMobySound(2,0,param_1);
    *(undefined1 *)((int)pvVar9 + 0x67) = 200;
    MB_UpdateLightsTransition(param_1,uVar32 + 0x60);
  }
  param_1->damage = -1;
  if (*(int *)((int)pvVar9 + 0x184) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x184) + 0xa4) = 0xff;
  }
  if (*(int *)((int)pvVar9 + 0x188) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x188) + 0xa4) = 0xff;
  }
  if ((*(int *)((int)pvVar9 + 0x38) != 0) && (*(int *)((int)pvVar9 + 0x178) == 0)) {
    auVar50 = ZEXT416(0xffffffff);
    auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
    auVar51 = vectorShiftLeftIntegerWord(auVar50,auVar50);
    auVar50 = loadVectorLeftIndexed(0x40,0x3e8a34);
    auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar50 = vectorMultiplyAddFloatingPoint
                        (auVar53,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,
                         auVar51);
    auVar50 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
    auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x178,uVar32);
    *(undefined4 *)((int)pvVar9 + 0x178U & 0xfffffffc) = uVar11;
    fVar4 = g_heroPosition.y;
    fVar3 = (param_1->pos).y;
    fVar7 = g_heroPosition.x - (param_1->pos).x;
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
    fVar4 = fVar4 - fVar3;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar4);
    *(float *)(puVar12 + 0x1b) = fVar7;
    *(float *)((int)puVar12 + 0xdc) = fVar4;
    fVar3 = (param_1->rotation).z;
    *(float *)(puVar12 + 0x1c) = (float)(dVar36 - dVar37);
    uVar27 = (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1d) & 4;
    dVar43 = ABS((double)*(float *)(puVar12 + 0x1b));
    if ((double)*(float *)(puVar12 + 0x1c) - dVar39 < 0.0) {
      dVar43 = dVar37;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
    dVar37 = ABS((double)*(float *)((int)puVar12 + 0xdc));
    if ((double)*(float *)(puVar12 + 0x1c) - dVar39 < 0.0) {
      dVar37 = dVar36;
    }
    fVar4 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    if (dVar39 < dVar43) {
      lVar22 = uVar19 - 0x1d0;
      lVar28 = uVar19 - 0xec;
      lVar25 = uVar19 - 0xfc;
      lVar33 = 2;
      fVar5 = (float)(dVar37 - dVar43) / (float)(dVar37 + dVar43);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar12 + 0x1e) = fVar5;
      *(float *)(puVar12 + 0x1d) = fVar5;
      *(float *)((int)puVar12 + 0xec) = fVar5;
      *(float *)((int)puVar12 + 0xe4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar6;
      *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar5;
      *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xd4) * fVar5 * fVar5;
        iVar24 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar28 = uVar19 - 0xfc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar25 = lVar28;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xe4) * fVar5;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar22 = 2;
      do {
        iVar24 = (int)lVar23;
        iVar13 = (int)lVar28;
        lVar23 = lVar23 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar24 + 0xe4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar7 + fVar4);
    }
    dVar39 = (double)FastSubRots(fVar3,(float)dVar39);
    if (1.5707963705062866 < dVar39) {
      *(char *)((int)pvVar9 + 0xc4) = -*(char *)((int)pvVar9 + 0xc4);
    }
  }
  iVar24 = FastDecTimerS32(uVar32 + 0x178);
  uVar11 = 0x41600000;
  if (iVar24 != 0) {
    uVar11 = 0x41a00000;
  }
  *(undefined4 *)((int)pvVar9 + 0x174) = uVar11;
  if (*(int *)((int)pvVar9 + 0x184) != 0) {
    *(float *)(*(int *)((int)pvVar9 + 0x184) + 0x58) =
         SQRT(*(float *)((int)pvVar9 + 0x48) * *(float *)((int)pvVar9 + 0x48) +
              *(float *)((int)pvVar9 + 0x40) * *(float *)((int)pvVar9 + 0x40) +
              *(float *)((int)pvVar9 + 0x44) * *(float *)((int)pvVar9 + 0x44)) /
         (DAT_00853fb0 * g_FrameTime);
    *(float *)(*(int *)((int)pvVar9 + 0x184) + 0x58) =
         *(float *)((int)pvVar9 + 0x84) * DAT_00853fb4 +
         *(float *)(*(int *)((int)pvVar9 + 0x184) + 0x58);
    iVar24 = *(int *)((int)pvVar9 + 0x184);
    *(f32 *)(iVar24 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (param_1->rotation).w;
    iVar24 = *(int *)((int)pvVar9 + 0x184);
    *(f32 *)(iVar24 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar24 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar24 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (param_1->pos).w;
  }
  if (*(int *)((int)pvVar9 + 0x188) != 0) {
    *(float *)(*(int *)((int)pvVar9 + 0x188) + 0x58) =
         SQRT(*(float *)((int)pvVar9 + 0x48) * *(float *)((int)pvVar9 + 0x48) +
              *(float *)((int)pvVar9 + 0x40) * *(float *)((int)pvVar9 + 0x40) +
              *(float *)((int)pvVar9 + 0x44) * *(float *)((int)pvVar9 + 0x44)) /
         (DAT_00853fb0 * g_FrameTime);
    *(float *)(*(int *)((int)pvVar9 + 0x188) + 0x58) =
         -(*(float *)((int)pvVar9 + 0x84) * DAT_00853fb4 -
          *(float *)(*(int *)((int)pvVar9 + 0x188) + 0x58));
    iVar24 = *(int *)((int)pvVar9 + 0x188);
    *(f32 *)(iVar24 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (param_1->rotation).w;
    iVar24 = *(int *)((int)pvVar9 + 0x188);
    *(f32 *)(iVar24 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar24 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar24 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (param_1->pos).w;
  }
  MB_ColorDyingMoby(param_1,uVar32 + 0x60);
  return;
}


// 0x03e9668 (0x15c0 bytes)
// inlined: FastAtan2 @0x3e9de4, FastAtan2 @0x3ea9fc
/* Moby 625 */

void UpdateMoby_625(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  int *piVar10;
  Spline *pSVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  MobyInstance *pMVar24;
  undefined1 uVar27;
  int iVar25;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar26;
  longlong lVar28;
  float *pfVar29;
  Vec4 *poly;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  int *unused2;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f16;
  double dVar43;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar44;
  ulonglong in_f22;
  double dVar45;
  ulonglong in_f23;
  double dVar46;
  ulonglong in_f24;
  double dVar47;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar48;
  ulonglong in_f29;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  double dVar52;
  double dVar53;
  double dVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x220;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar18;
  puVar13[0x46] = in_LR;
  puVar13[0x34] = in_f16;
  puVar13[0x35] = in_f17;
  puVar13[0x36] = in_f18;
  puVar13[0x37] = in_f19;
  puVar13[0x38] = in_f20;
  puVar13[0x39] = in_f21;
  puVar13[0x3a] = in_f22;
  puVar13[0x3b] = in_f23;
  puVar13[0x3c] = in_f24;
  puVar13[0x3d] = in_f25;
  puVar13[0x3e] = in_f26;
  puVar13[0x3f] = in_f27;
  puVar13[0x40] = in_f28;
  puVar13[0x41] = in_f29;
  puVar13[0x42] = in_f30;
  puVar13[0x43] = in_f31;
  puVar13[0x33] = unaff_r31;
  puVar13[0x2f] = unaff_r27;
  puVar13[0x32] = unaff_r30;
  puVar13[0x31] = unaff_r29;
  puVar13[0x30] = unaff_r28;
  puVar13[0x2e] = unaff_r26;
  puVar13[0x2d] = unaff_r25;
  puVar13[0x2c] = unaff_r24;
  puVar13[0x2b] = unaff_r23;
  puVar13[0x2a] = unaff_r22;
  pvVar9 = moby->pVar;
  uVar33 = ZEXT48(pvVar9);
  M625_003e8a88();
  M625_003e88a8(moby);
  if (*(char *)((int)pvVar9 + 0x2e) == '\x02') {
    if (*(MobyInstance **)((int)pvVar9 + 0x184) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x184));
    }
    if (*(MobyInstance **)((int)pvVar9 + 0x188) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x188));
    }
    DeleteMoby(moby);
    return;
  }
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 27.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x15';
  }
  bVar1 = moby->state;
  if (1 < bVar1) {
    if (2 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      if (*(MobyInstance **)((int)pvVar9 + 0x184) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x184));
      }
      if (*(MobyInstance **)((int)pvVar9 + 0x188) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x188));
      }
      DeleteMoby(moby);
      return;
    }
    iVar25 = **(int **)((int)pvVar9 + 0xd0);
    iVar26 = *(int *)((int)pvVar9 + 0xc0) + iVar25 + (int)*(char *)((int)pvVar9 + 0xc4);
    iVar26 = iVar26 - (iVar26 / iVar25) * iVar25;
    MB_UpdateNavMoveTurning
              (moby,uVar33 + 0x70,*(int **)((int)pvVar9 + 0xd0) + iVar26 * 4 + 4,uVar33 + 0x40);
    piVar10 = *(int **)((int)pvVar9 + 0xd0);
    fVar3 = (moby->pos).y - (float)piVar10[iVar26 * 4 + 5];
    fVar4 = (moby->pos).x - (float)piVar10[iVar26 * 4 + 4];
    if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 1.0) {
      if ((iVar26 == iVar25 + -1) &&
         (pfVar29 = (float *)(piVar10 + *piVar10 * 4),
         5.0 < SQRT((pfVar29[2] - (float)piVar10[6]) * (pfVar29[2] - (float)piVar10[6]) +
                    (*pfVar29 - (float)piVar10[4]) * (*pfVar29 - (float)piVar10[4]) +
                    (pfVar29[1] - (float)piVar10[5]) * (pfVar29[1] - (float)piVar10[5])))) {
        *(char *)((int)pvVar9 + 0xc4) = -*(char *)((int)pvVar9 + 0xc4);
      }
      *(int *)((int)pvVar9 + 0xc0) = iVar26;
    }
    uVar12 = DAT_00853ff4;
    *(undefined4 *)((int)puVar13 + 0xac) = DAT_00853ff0;
    *(undefined4 *)((int)puVar13 + 0xbc) = uVar12;
    GetBonePosition(moby,2,uVar18 - 400);
    iVar25 = 0;
    do {
      *(undefined4 *)(puVar13 + 0x1a) = *(undefined4 *)(puVar13 + 0x12);
      *(undefined4 *)((int)puVar13 + 0xd4) = *(undefined4 *)((int)puVar13 + 0x94);
      *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(puVar13 + 0x13);
      *(undefined4 *)((int)puVar13 + 0xdc) = *(undefined4 *)((int)puVar13 + 0x9c);
      dVar53 = -0.06499999761581421;
      dVar50 = 0.06499999761581421;
      dVar52 = (double)MB_randRangeFloat(-0.065,0.065);
      *(float *)(puVar13 + 0x1a) = (float)((double)*(float *)(puVar13 + 0x1a) + dVar52);
      dVar52 = (double)MB_randRangeFloat((float)dVar53,(float)dVar50);
      *(float *)((int)puVar13 + 0xd4) = (float)((double)*(float *)((int)puVar13 + 0xd4) + dVar52);
      dVar52 = (double)MB_randRangeFloat((float)dVar53,(float)dVar50);
      *(float *)(puVar13 + 0x1b) = (float)((double)*(float *)(puVar13 + 0x1b) + dVar52);
      fVar8 = DAT_00853fe0;
      fVar5 = g_FrameTime;
      dVar54 = 1.570796251296997;
      dVar51 = 3.141592502593994;
      fVar3 = *(float *)((int)pvVar9 + 0x194) + 1.5707963;
      dVar49 = -3.141592502593994;
      dVar48 = -0.16666656732559204;
      dVar53 = 0.008333025500178337;
      dVar50 = -0.0001980741071747616;
      dVar52 = 2.601886990305502e-06;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar7 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar14 = fVar7 * fVar7;
      fVar3 = fVar14 * fVar14 * fVar7;
      fVar4 = fVar14 * fVar3;
      *(float *)(puVar13 + 0x14) =
           DAT_00853fe0 * g_FrameTime *
           (fVar14 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar14 * fVar7 * -0.16666657 + fVar7);
      fVar3 = *(float *)((int)pvVar9 + 0x194);
      *(undefined4 *)(puVar13 + 0x15) = 0;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar7 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar15 = fVar7 * fVar7;
      fVar4 = fVar15 * fVar15 * fVar7;
      fVar3 = DAT_00853fe4 * fVar5;
      fVar14 = fVar15 * fVar4;
      *(float *)((int)puVar13 + 0xa4) =
           fVar8 * fVar5 *
           (fVar15 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar4 * 0.0083330255 + fVar15 * fVar7 * -0.16666657 + fVar7);
      dVar46 = 0.8999999761581421;
      dVar45 = 1.100000023841858;
      dVar35 = (double)MB_randRangeFloat(fVar3 * 0.9,fVar3 * 1.1);
      *(float *)(puVar13 + 0x15) = (float)dVar35;
      dVar35 = (double)MB_randRangeFloat(-DAT_00853ff8,DAT_00853ff8);
      dVar47 = 0.01745329238474369;
      dVar44 = (double)(float)(dVar35 * 0.01745329238474369);
      dVar35 = (double)FastWrapRot
                                 (*(float *)((int)pvVar9 + 0x194),
                                  (float)(dVar35 * 0.01745329238474369));
      dVar36 = (double)(float)(dVar35 + dVar54);
      dVar35 = (double)(float)(dVar51 - dVar36);
      if (dVar36 - (double)(float)(dVar51 - dVar36) < 0.0) {
        dVar35 = dVar36;
      }
      dVar41 = (double)(float)(dVar49 - dVar36);
      if ((double)(float)(dVar49 - dVar36) - dVar35 < 0.0) {
        dVar41 = dVar35;
      }
      dVar35 = (double)(float)(dVar41 * dVar41);
      dVar36 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar41));
      dVar39 = (double)(float)(dVar35 * dVar36);
      *(float *)(puVar13 + 0x16) =
           DAT_00853fe8 * g_FrameTime *
           (float)((double)(float)(dVar35 * dVar39) * dVar52 +
                  (double)(float)(dVar39 * dVar50 +
                                 (double)(float)(dVar36 * dVar53 +
                                                (double)(float)((double)(float)(dVar35 * dVar41) *
                                                                dVar48 + dVar41))));
      dVar36 = (double)FastWrapRot(*(float *)((int)pvVar9 + 0x194),(float)dVar44);
      dVar35 = (double)(float)(dVar51 - dVar36);
      if (dVar36 - (double)(float)(dVar51 - dVar36) < 0.0) {
        dVar35 = dVar36;
      }
      dVar44 = (double)(float)(dVar49 - dVar36);
      if ((double)(float)(dVar49 - dVar36) - dVar35 < 0.0) {
        dVar44 = dVar35;
      }
      fVar3 = DAT_00853fe8 * g_FrameTime;
      fVar4 = DAT_00853fec * g_FrameTime;
      *(undefined4 *)(puVar13 + 0x17) = 0;
      dVar35 = (double)(float)(dVar44 * dVar44);
      dVar36 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar44));
      dVar41 = (double)(float)(dVar35 * dVar36);
      *(float *)((int)puVar13 + 0xb4) =
           fVar3 * (float)((double)(float)(dVar35 * dVar41) * dVar52 +
                          (double)(float)(dVar41 * dVar50 +
                                         (double)(float)(dVar36 * dVar53 +
                                                        (double)(float)((double)(float)(dVar35 * 
                                                  dVar44) * dVar48 + dVar44))));
      dVar35 = (double)MB_randRangeFloat
                                 ((float)((double)fVar4 * dVar46),(float)((double)fVar4 * dVar45));
      *(float *)(puVar13 + 0x17) = (float)dVar35;
      uVar17 = DAT_00853fd0;
      uVar12 = DAT_00853fcc;
      dVar44 = 2.0;
      dVar35 = (double)MB_randRangeFloat(DAT_00853fd4,DAT_00853fd4 * 2.0);
      uVar21 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
      dVar36 = 1.2000000476837158;
      dVar35 = (double)MB_randRangeFloat(DAT_00853fd8,DAT_00853fd8 * 1.2);
      uVar22 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
      dVar35 = (double)MB_randRangeFloat
                                 (DAT_00853fdc,(float)((double)DAT_00853fdc * dVar36));
      uVar23 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
      puVar13[0xe] = 0xffffffffffffffff;
      iVar26 = SpawnPart_2
                         (uVar18 - 0x150,uVar18 - 0x180,uVar18 - 0x170,uVar12,uVar17,uVar21,uVar22,
                          uVar23);
      if (((worldUpdateTime & 7) == 0) && (iVar25 == 0 && iVar26 != 0)) {
        iVar30 = 0;
        uVar31 = uVar33;
        do {
          if (*(int *)((int)uVar31 + 0x1a0) == 0) {
            *(int *)((int)pvVar9 + iVar30 * 4 + 0x1a0) = iVar26;
            break;
          }
          iVar30 = iVar30 + 1;
          uVar31 = uVar31 + 4;
        } while (iVar30 < 8);
      }
      uVar12 = DAT_00854024;
      iVar25 = iVar25 + 1;
      if (1 < iVar25) {
        dVar35 = 0.0;
        iVar25 = 0;
        *(undefined4 *)((int)puVar13 + 0xac) = DAT_00854020;
        *(undefined4 *)((int)puVar13 + 0xbc) = uVar12;
        dVar39 = -0.20000000298023224;
        dVar41 = 0.20000000298023224;
        dVar46 = 0.699999988079071;
        dVar45 = 1.5;
        do {
          *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(puVar13 + 0x12);
          *(undefined4 *)((int)puVar13 + 0xe4) = *(undefined4 *)((int)puVar13 + 0x94);
          *(undefined4 *)(puVar13 + 0x1d) = *(undefined4 *)(puVar13 + 0x13);
          *(undefined4 *)((int)puVar13 + 0xec) = *(undefined4 *)((int)puVar13 + 0x9c);
          dVar37 = (double)MB_randRangeFloat((float)dVar39,(float)dVar41);
          *(float *)(puVar13 + 0x1c) = (float)((double)*(float *)(puVar13 + 0x1c) + dVar37);
          dVar37 = (double)MB_randRangeFloat((float)dVar39,(float)dVar41);
          *(float *)((int)puVar13 + 0xe4) =
               (float)((double)*(float *)((int)puVar13 + 0xe4) + dVar37);
          dVar37 = (double)MB_randRangeFloat((float)dVar39,(float)dVar41);
          fVar4 = DAT_0085402c;
          fVar3 = -DAT_0085402c;
          *(float *)(puVar13 + 0x1d) = (float)((double)*(float *)(puVar13 + 0x1d) + dVar37);
          dVar37 = (double)MB_randRangeFloat(fVar3,fVar4);
          dVar43 = (double)(float)(dVar37 * dVar47);
          dVar37 = (double)FastWrapRot
                                     (*(float *)((int)pvVar9 + 0x194),(float)(dVar37 * dVar47));
          dVar38 = (double)(float)(dVar37 + dVar54);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar42 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar42 = dVar37;
          }
          dVar37 = (double)(float)(dVar42 * dVar42);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar42));
          dVar40 = (double)(float)(dVar37 * dVar38);
          *(float *)(puVar13 + 0x14) =
               DAT_00854010 * g_FrameTime *
               (float)((double)(float)(dVar37 * dVar40) * dVar52 +
                      (double)(float)(dVar40 * dVar50 +
                                     (double)(float)(dVar38 * dVar53 +
                                                    (double)(float)((double)(float)(dVar37 * dVar42)
                                                                    * dVar48 + dVar42))));
          dVar38 = (double)FastWrapRot(*(float *)((int)pvVar9 + 0x194),(float)dVar43);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar43 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar43 = dVar37;
          }
          fVar3 = DAT_00854010 * g_FrameTime;
          fVar4 = DAT_00854014 * g_FrameTime;
          *(undefined4 *)(puVar13 + 0x15) = 0;
          dVar37 = (double)(float)(dVar43 * dVar43);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar43));
          dVar42 = (double)(float)(dVar37 * dVar38);
          *(float *)((int)puVar13 + 0xa4) =
               fVar3 * (float)((double)(float)(dVar37 * dVar42) * dVar52 +
                              (double)(float)(dVar42 * dVar50 +
                                             (double)(float)(dVar38 * dVar53 +
                                                            (double)(float)((double)(float)(dVar37 *
                                                                                           dVar43) *
                                                                            dVar48 + dVar43))));
          dVar37 = (double)MB_randRangeFloat
                                     ((float)((double)fVar4 * dVar46),
                                      (float)((double)fVar4 * dVar45));
          *(float *)(puVar13 + 0x15) = (float)dVar37;
          dVar37 = (double)MB_randRangeFloat(-DAT_00854028,DAT_00854028);
          dVar43 = (double)(float)(dVar37 * dVar47);
          dVar37 = (double)FastWrapRot
                                     (*(float *)((int)pvVar9 + 0x194),(float)(dVar37 * dVar47));
          dVar38 = (double)(float)(dVar37 + dVar54);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar42 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar42 = dVar37;
          }
          dVar37 = (double)(float)(dVar42 * dVar42);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar42));
          dVar40 = (double)(float)(dVar37 * dVar38);
          *(float *)(puVar13 + 0x16) =
               DAT_00854018 * g_FrameTime *
               (float)((double)(float)(dVar37 * dVar40) * dVar52 +
                      (double)(float)(dVar40 * dVar50 +
                                     (double)(float)(dVar38 * dVar53 +
                                                    (double)(float)((double)(float)(dVar37 * dVar42)
                                                                    * dVar48 + dVar42))));
          dVar38 = (double)FastWrapRot(*(float *)((int)pvVar9 + 0x194),(float)dVar43);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar43 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar43 = dVar37;
          }
          fVar3 = DAT_00854018 * g_FrameTime;
          fVar4 = DAT_0085401c * g_FrameTime;
          *(undefined4 *)(puVar13 + 0x17) = 0;
          dVar37 = (double)(float)(dVar43 * dVar43);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar43));
          dVar42 = (double)(float)(dVar37 * dVar38);
          *(float *)((int)puVar13 + 0xb4) =
               fVar3 * (float)((double)(float)(dVar37 * dVar42) * dVar52 +
                              (double)(float)(dVar42 * dVar50 +
                                             (double)(float)(dVar38 * dVar53 +
                                                            (double)(float)((double)(float)(dVar37 *
                                                                                           dVar43) *
                                                                            dVar48 + dVar43))));
          dVar37 = (double)MB_randRangeFloat
                                     ((float)((double)fVar4 * dVar46),
                                      (float)((double)fVar4 * dVar45));
          *(float *)(puVar13 + 0x17) = (float)dVar37;
          uVar17 = DAT_00854000;
          uVar12 = DAT_00853ffc;
          dVar37 = (double)MB_randRangeFloat
                                     (DAT_00854004,(float)((double)DAT_00854004 * dVar44));
          uVar21 = FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
          dVar37 = (double)MB_randRangeFloat
                                     (DAT_00854008,(float)((double)DAT_00854008 * dVar36));
          uVar22 = FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
          dVar37 = (double)MB_randRangeFloat
                                     (DAT_0085400c,(float)((double)DAT_0085400c * dVar36));
          uVar23 = FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
          puVar13[0xe] = 0xffffffffffffffff;
          SpawnPart_2
                    (uVar18 - 0x140,uVar18 - 0x180,uVar18 - 0x170,uVar12,uVar17,uVar21,uVar22,uVar23
                    );
          iVar25 = iVar25 + 1;
        } while (iVar25 < 2);
        fVar3 = (moby->pos).y;
        fVar4 = (moby->pos).x;
        fVar5 = fVar3 - g_heroPosition.y;
        fVar8 = fVar4 - g_heroPosition.x;
        *(float *)(puVar13 + 0x18) = fVar4;
        fVar6 = (moby->pos).w;
        *(float *)((int)puVar13 + 0xc4) = fVar3;
        *(f32 *)((int)puVar13 + 0xcc) = fVar6;
        fVar3 = (moby->pos).z;
        *(float *)(puVar13 + 0x19) = fVar3 + 3.0;
        if (((*(float *)((int)pvVar9 + 0x174) < SQRT(fVar8 * fVar8 + fVar5 * fVar5)) ||
            (4.0 <= ABS(fVar3 - g_heroPosition.z))) ||
           ((*(int *)((int)pvVar9 + 400) != -1 &&
            (iVar25 = PointInsideComplexPoly
                                (&g_heroPosition,
                                 (Vec4 *)Splines[*(int *)((int)pvVar9 + 400)]->points,
                                 Splines[*(int *)((int)pvVar9 + 400)]->cnt), iVar25 == 0)))) {
          if (moby->animationId != '\0') {
            MB_SetAnimation(moby,0,0,3);
          }
          moby->state = '\x01';
        }
        else {
          iVar25 = CollLine(uVar18 - 0x160,&g_heroCGPos,2,moby,0);
          if (iVar25 != 0) {
            if (moby->animationId != '\0') {
              MB_SetAnimation(moby,0,0,3);
            }
            moby->state = '\x01';
          }
        }
        fVar3 = g_heroPosition.x - (moby->pos).x;
        fVar4 = g_heroPosition.y - (moby->pos).y;
        dVar50 = ABS((double)fVar3);
        dVar53 = ABS((double)fVar4);
        *(float *)(puVar13 + 0x1e) = fVar3;
        *(float *)((int)puVar13 + 0xf4) = fVar4;
        *(float *)(puVar13 + 0x1f) = (float)(dVar50 - dVar53);
        uVar31 = (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1d) & 4;
        pfVar29 = (float *)((uint)(uVar31 << 2) | 0x735900);
        iVar25 = (int)(uVar31 << 2);
        dVar52 = ABS((double)*(float *)(puVar13 + 0x1e));
        if ((double)*(float *)(puVar13 + 0x1f) - dVar35 < 0.0) {
          dVar52 = dVar53;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + iVar25);
        dVar53 = ABS((double)*(float *)((int)puVar13 + 0xf4));
        if ((double)*(float *)(puVar13 + 0x1f) - dVar35 < 0.0) {
          dVar53 = dVar50;
        }
        fVar4 = pfVar29[1];
        if (dVar35 < dVar52) {
          lVar19 = uVar18 - 0x210;
          lVar28 = uVar18 - 0x118;
          lVar32 = uVar18 - 0x108;
          lVar34 = 2;
          fVar5 = (float)(dVar53 - dVar52) / (float)(dVar53 + dVar52);
          fVar8 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0x114) = fVar5;
          *(float *)((int)puVar13 + 0x10c) = fVar5;
          *(float *)(puVar13 + 0x22) = fVar5;
          *(float *)(puVar13 + 0x21) = fVar5;
          fVar5 = fVar8 * fVar8;
          *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar8;
          *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar5;
          *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar5 * fVar8;
          do {
            *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0xf8) * fVar5 * fVar5;
            iVar25 = (int)lVar28;
            lVar19 = lVar19 + 8;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar34 = 4;
          lVar32 = uVar18 - 0x118;
          pfVar29 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar28 = lVar32;
          do {
            fVar5 = *pfVar29;
            fVar8 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0x108) * fVar5;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar8;
            lVar28 = lVar28 + 8;
            iVar25 = (int)lVar28;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar19 = 2;
          do {
            iVar26 = (int)lVar20;
            iVar30 = (int)lVar32;
            lVar20 = lVar20 + 0x10;
            lVar32 = lVar32 + 0x10;
            dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar26 + 0x108)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar52 = 1.5707963705062866;
        DeltAng((float)dVar35,g_FrameTime * 1.5707964,
                          (float *)((int)pvVar9 + 0x194),(int)pfVar29,iVar25,0);
        DeltAng(0.08726646,(float)((double)g_FrameTime * dVar52),
                          (float *)((int)pvVar9 + 0x198),(int)pfVar29,iVar25,0);
        FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x198),uVar33 + 0x140,1);
        FastDiffRots((double)*(float *)((int)pvVar9 + 0x194),(double)(moby->rotation).z);
        FastQuaternionToEuler(uVar33 + 0x100,2);
        return;
      }
    } while( true );
  }
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar9 + 0x184) == 0) {
      pMVar24 = CreateMoby(DOOR_LEFT|BRIDGE_0068);
      *(MobyInstance **)((int)pvVar9 + 0x184) = pMVar24;
      pMVar24->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x184) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar9 + 0x184) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar9 + 0x184) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x184) + 0x34) = 0x4000;
      iVar25 = *(int *)((int)pvVar9 + 0x184);
      *(f32 *)(iVar25 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar25 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar25 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar25 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar9 + 0x184) + 0x94) = 0;
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x184));
    }
    if (*(int *)((int)pvVar9 + 0x188) == 0) {
      pMVar24 = CreateMoby(0x369);
      *(MobyInstance **)((int)pvVar9 + 0x188) = pMVar24;
      pMVar24->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x188) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar9 + 0x188) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar9 + 0x188) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x188) + 0x34) = 0x4000;
      iVar25 = *(int *)((int)pvVar9 + 0x188);
      *(f32 *)(iVar25 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar25 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar25 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar25 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar9 + 0x188) + 0x94) = 0;
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x188));
    }
    AttachManipulator(moby,0,(int)pvVar9 + 0xf0);
    AttachManipulator(moby,1,(int)pvVar9 + 0x130);
    pMVar24 = g_heroMobyPtr;
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    uVar16 = pMVar24->light;
    moby->color = pMVar24->color;
    moby->light = uVar16;
    MB_InitDefaultParams((float *)((int)pvVar9 + 0x70));
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0x40000000;
    *(undefined4 *)((int)pvVar9 + 0x78) = 0x40800000;
    *(undefined4 *)((int)pvVar9 + 0x70) = 0x38d;
    *(undefined4 *)((int)pvVar9 + 0xac) = 0x3c23d70a;
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x3e99999a;
    *(undefined4 *)((int)pvVar9 + 0xb4) = 0x3dcccccd;
    pSVar11 = Splines[*(int *)((int)pvVar9 + 0xd4)];
    *(undefined4 *)((int)pvVar9 + 0xc0) = 1;
    *(Spline **)((int)pvVar9 + 0xd0) = pSVar11;
    (moby->pos).x = pSVar11->points[0].x;
    (moby->pos).y = pSVar11->points[0].y;
    uVar2 = moby->animationId;
    (moby->pos).z = pSVar11->points[0].z;
    fVar3 = pSVar11->points[0].w;
    moby->state = '\x01';
    (moby->pos).w = fVar3;
    if (uVar2 != '\0') {
      MB_SetAnimation(moby,0,0,0);
    }
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    fVar3 = DAT_00853fb8 * g_FrameTime;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40c00000;
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    *(undefined4 *)((int)pvVar9 + 0x4c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x48) = 0;
    *(undefined4 *)((int)pvVar9 + 0x44) = 0;
    *(undefined4 *)((int)pvVar9 + 0x40) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 6;
    *(undefined1 *)((int)pvVar9 + 0x28) = 3;
    *(ushort *)((int)pvVar9 + 0x3e) = *(ushort *)((int)pvVar9 + 0x3e) | 2;
    *(float *)((int)pvVar9 + 0x94) = fVar3;
    *(undefined1 *)((int)pvVar9 + 0x29) = 0;
    *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
    auVar55 = loadVectorLeftIndexed(4,0x3e95f0);
    auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar56);
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0x180,uVar33);
    *(undefined4 *)((int)pvVar9 + 0x180U & 0xfffffffc) = uVar12;
    *(undefined4 *)((int)pvVar9 + 0x198) = 0;
    *(f32 *)((int)pvVar9 + 0x194) = (moby->rotation).z;
    uVar27 = FastDoubleToInt((double)DAT_00854038);
    *(undefined1 *)((int)pvVar9 + 0x58) = uVar27;
    uVar27 = FastDoubleToInt((double)(DAT_0085403c * 8.0));
    *(undefined1 *)((int)pvVar9 + 0x5a) = uVar27;
    return;
  }
  iVar25 = **(int **)((int)pvVar9 + 0xd0);
  iVar26 = *(int *)((int)pvVar9 + 0xc0) + iVar25 + (int)*(char *)((int)pvVar9 + 0xc4);
  iVar26 = iVar26 - (iVar26 / iVar25) * iVar25;
  unused2 = *(int **)((int)pvVar9 + 0xd0) + iVar26 * 4 + 4;
  MB_UpdateNavMoveTurning(moby,uVar33 + 0x70,unused2,uVar33 + 0x40);
  piVar10 = *(int **)((int)pvVar9 + 0xd0);
  fVar3 = (moby->pos).y;
  poly = (Vec4 *)(piVar10 + iVar26 * 4);
  fVar4 = (moby->pos).x;
  fVar8 = fVar3 - poly[1].y;
  fVar5 = fVar4 - poly[1].x;
  if (SQRT(fVar5 * fVar5 + fVar8 * fVar8) < 1.0) {
    if ((iVar26 == iVar25 + -1) &&
       (poly = (Vec4 *)(piVar10 + *piVar10 * 4), fVar3 = poly->y - (float)piVar10[5],
       fVar4 = poly->x - (float)piVar10[4], fVar5 = poly->z - (float)piVar10[6],
       5.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
      *(char *)((int)pvVar9 + 0xc4) = -*(char *)((int)pvVar9 + 0xc4);
    }
    *(int *)((int)pvVar9 + 0xc0) = iVar26;
    fVar4 = (moby->pos).x;
    fVar3 = (moby->pos).y;
  }
  if ((SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
            (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) <
       *(float *)((int)pvVar9 + 0x174)) &&
     (fVar5 = (moby->pos).z, ABS(fVar5 - g_heroPosition.z) < 4.0)) {
    if (*(int *)((int)pvVar9 + 400) != -1) {
      poly = Splines[*(int *)((int)pvVar9 + 400)]->points;
      unused2 = (int *)Splines[*(int *)((int)pvVar9 + 400)]->cnt;
      iVar25 = PointInsideComplexPoly(&g_heroPosition,(Vec4 *)poly,unused2);
      if (iVar25 == 0) goto LAB_003e9d08;
      fVar5 = (moby->pos).z;
      fVar4 = (moby->pos).x;
      fVar3 = (moby->pos).y;
    }
    fVar6 = (moby->pos).w;
    *(float *)(puVar13 + 0x10) = fVar4;
    *(float *)((int)puVar13 + 0x84) = fVar3;
    poly = (Vec4 *)&g_heroCGPos;
    *(f32 *)((int)puVar13 + 0x8c) = fVar6;
    unused2 = (int *)0x2;
    *(float *)(puVar13 + 0x11) = fVar5 + 3.0;
    iVar25 = CollLine(uVar18 - 0x1a0,&g_heroCGPos,2,moby,0);
    if (iVar25 == 0) {
      if (moby->animationId != '\0') {
        poly = (Vec4 *)0x0;
        unused2 = (int *)0x0;
        MB_SetAnimation(moby,0,0,3);
      }
      moby->state = '\x02';
    }
  }
LAB_003e9d08:
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar5 = fVar3 - g_heroPosition.y;
  fVar8 = fVar4 - g_heroPosition.x;
  if (16.0 <= SQRT(fVar8 * fVar8 + fVar5 * fVar5)) {
    dVar52 = 1.5707963705062866;
    DeltAng((moby->rotation).z,g_FrameTime * 1.5707964,
                      (float *)((int)pvVar9 + 0x194),(int)poly,(int)unused2,0);
    DeltAng(0.0,(float)((double)g_FrameTime * dVar52),
                      (float *)((int)pvVar9 + 0x198),(int)poly,(int)unused2,0);
  }
  else {
    fVar4 = g_heroPosition.x - fVar4;
    fVar3 = g_heroPosition.y - fVar3;
    fVar5 = ABS(fVar4);
    fVar8 = ABS(fVar3);
    *(float *)((int)puVar13 + 0xfc) = fVar4;
    *(float *)(puVar13 + 0x20) = fVar3;
    *(float *)((int)puVar13 + 0x104) = fVar5 - fVar8;
    fVar3 = 0.0;
    uVar31 = (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1d) & 4;
    pfVar29 = (float *)((uint)(uVar31 << 2) | 0x735900);
    iVar25 = (int)(uVar31 << 2);
    fVar4 = ABS(*(float *)((int)puVar13 + 0xfc));
    if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + iVar25);
    fVar7 = ABS(*(float *)(puVar13 + 0x20));
    if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = pfVar29[1];
    if (0.0 < fVar4) {
      lVar19 = uVar18 - 0x210;
      lVar28 = uVar18 - 0xf8;
      lVar32 = uVar18 - 0xe8;
      lVar34 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x134) = fVar4;
      *(float *)((int)puVar13 + 300) = fVar4;
      *(float *)(puVar13 + 0x26) = fVar4;
      *(float *)(puVar13 + 0x25) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar7;
      *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar4;
      *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x118) * fVar4 * fVar4;
        iVar25 = (int)lVar28;
        lVar19 = lVar19 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar25 + 4) * fVar4 * fVar4;
        lVar32 = lVar32 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar32 = uVar18 - 0xf8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar28 = lVar32;
      do {
        fVar4 = *pfVar29;
        fVar7 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x128) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
        lVar28 = lVar28 + 8;
        iVar25 = (int)lVar28;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar19 = 2;
      do {
        iVar26 = (int)lVar20;
        iVar30 = (int)lVar32;
        lVar20 = lVar20 + 0x10;
        lVar32 = lVar32 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar26 + 0x128) + *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8)
                + *(float *)(iVar30 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar5;
    }
    dVar52 = 1.5707963705062866;
    DeltAng(fVar3,g_FrameTime * 1.5707964,(float *)((int)pvVar9 + 0x194),
                      (int)pfVar29,iVar25,0);
    DeltAng(0.08726646,(float)((double)g_FrameTime * dVar52),
                      (float *)((int)pvVar9 + 0x198),(int)pfVar29,iVar25,0);
  }
  FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x198),uVar33 + 0x140,1);
  FastDiffRots((double)*(float *)((int)pvVar9 + 0x194),(double)(moby->rotation).z);
  FastQuaternionToEuler(uVar33 + 0x100,2);
  return;
}


