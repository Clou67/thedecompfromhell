// game/update/moby844.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4828f8-0x48428c
#include "game/update/moby844.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x04828f8 (0x2fc bytes)
double M844_004828f8(double param_1,double param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint unused;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  iVar1 = *(int *)(param_3 + 0x78);
  unused = g_standingOnMoby;
  if ((g_standingOnMoby == param_3) &&
     (unused = (uint)g_framesNotGrounded, g_framesNotGrounded == 0)) {
    fVar16 = g_heroPosition.y - *(float *)(param_3 + 0x14);
    fVar2 = g_heroPosition.x - *(float *)(param_3 + 0x10);
    fVar3 = g_heroPosition.z - *(float *)(param_3 + 0x18);
    dVar15 = -(double)(float)(param_1 *
                             (double)(fVar3 * *(float *)(param_3 + 0xd8) +
                                     fVar2 * *(float *)(param_3 + 0xd0) +
                                     fVar16 * *(float *)(param_3 + 0xd4)));
    dVar7 = (double)(float)(param_1 *
                           (double)(fVar3 * *(float *)(param_3 + 200) +
                                   fVar2 * *(float *)(param_3 + 0xc0) +
                                   fVar16 * *(float *)(param_3 + 0xc4)));
  }
  else {
    dVar15 = 0.0;
    dVar7 = dVar15;
  }
  dVar6 = (double)FastWrapRot(*(float *)(iVar1 + 0x98),*(float *)(iVar1 + 0xa0));
  *(float *)(iVar1 + 0x98) = (float)dVar6;
  dVar6 = (double)FastWrapRot(*(float *)(iVar1 + 0x9c),*(float *)(iVar1 + 0xa4));
  fVar3 = DAT_008ad01c;
  fVar16 = *(float *)(iVar1 + 0x98);
  dVar14 = 3.141592502593994;
  dVar13 = -3.141592502593994;
  dVar12 = -0.16666656732559204;
  dVar11 = 0.008333025500178337;
  dVar10 = -0.0001980741071747616;
  dVar9 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar16;
  if (fVar16 - (3.1415925 - fVar16) < 0.0) {
    fVar2 = fVar16;
  }
  fVar4 = -3.1415925 - fVar16;
  if ((-3.1415925 - fVar16) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = fVar4 * fVar4;
  fVar16 = fVar5 * fVar5 * fVar4;
  *(float *)(iVar1 + 0x9c) = (float)dVar6;
  fVar2 = fVar5 * fVar16;
  dVar6 = (double)FastWrapRot
                            ((float)dVar15,
                             (float)((double)(fVar5 * fVar2 * 2.601887e-06 +
                                             fVar2 * -0.0001980741 +
                                             fVar16 * 0.0083330255 +
                                             fVar5 * fVar4 * -0.16666657 + fVar4) * param_1) * fVar3
                            );
  dVar8 = (double)*(float *)(iVar1 + 0x9c);
  dVar15 = (double)(float)(dVar14 - dVar8);
  if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
    dVar15 = dVar8;
  }
  dVar14 = (double)(float)(dVar13 - dVar8);
  if ((double)(float)(dVar13 - dVar8) - dVar15 < 0.0) {
    dVar14 = dVar15;
  }
  dVar15 = (double)(float)(dVar14 * dVar14);
  dVar8 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
  dVar13 = (double)(float)(dVar15 * dVar8);
  dVar7 = (double)FastWrapRot
                            ((float)dVar7,
                             (float)((double)(float)((double)(float)(dVar15 * dVar13) * dVar9 +
                                                    (double)(float)(dVar13 * dVar10 +
                                                                   (double)(float)(dVar8 * dVar11 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar15 * dVar14) * dVar12 + dVar14)
                                                  ))) * param_1) * DAT_008ad01c);
  dVar15 = 0.01745329238474369;
  OrganicDeltAng
            ((float)dVar6,(float)((double)DAT_008ad020 * param_2) * 0.017453292 * g_FrameTimeSq,
             (float)((double)DAT_008ad024 * param_2) * 0.017453292 * g_FrameTimeSq,
             DAT_008ad028 * 0.017453292 * g_FrameTime,(float *)(param_3 + 0x40),unused,
             (float *)(iVar1 + 0x90));
  fVar16 = OrganicDeltAng
                     ((float)dVar7,
                      (float)((double)(float)((double)DAT_008ad020 * param_2) * dVar15) *
                      g_FrameTimeSq,
                      (float)((double)(float)((double)DAT_008ad024 * param_2) * dVar15) *
                      g_FrameTimeSq,(float)((double)DAT_008ad028 * dVar15) * g_FrameTime,
                      (float *)(param_3 + 0x44),unused,(float *)(iVar1 + 0x94));
  return (double)fVar16;
}


// 0x0482c20 (0x3f4 bytes)
longlong M844_00482c20(double param_1,double param_2)

{
  longlong lVar1;
  int iVar2;
  byte in_cr6;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> local_100;
  GPiece<88> local_f0;
  
  auVar8.piece<0,4>() = (float)param_1;
  auVar8.piece<4,4>() = (float)param_1;
  auVar8.piece<8,4>() = (float)param_1;
  auVar8.piece<12,4>() = (float)param_1;
  dVar4 = 0.0;
  auVar14.piece<0,4>() = (float)param_2;
  auVar14.piece<4,4>() = (float)param_2;
  auVar14.piece<8,4>() = (float)param_2;
  auVar14.piece<12,4>() = (float)param_2;
  FastIntToDouble(DAT_008acffc);
  lVar1 = 0x8b0000;
  auVar11 = ZEXT416(0xffffffff);
  auVar7 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar16 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar9 = loadVectorLeftIndexed(0xffffffffffffcff8,0x8b0000);
  auVar11 = loadVectorLeftIndexed(8,0x482bf4);
  auVar10 = vectorReciprocalEstimateFloatingPoint(auVar9);
  auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar15 = vectorSubtractFloatingPoint(auVar14,auVar8);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  dVar5 = (double)(float)(param_2 - param_1);
  auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar10,auVar9,auVar12);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar10,auVar11,auVar7);
  auVar7 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar11 = ZEXT416(0);
  auVar10 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar9,auVar12);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar14);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar9,auVar12);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar14,auVar13);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar15,auVar7);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
             auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    iVar2 = 0;
    dVar6 = (double)((float)(param_2 + param_1) * 0.5);
    do {
      MB_randRangeFloat((float)dVar4,DAT_008ad014);
      MB_randRot();
      MB_randRangeFloat((float)param_1,(float)param_2);
      MB_randRangeFloat((float)dVar6,(float)param_2);
      uVar3 = MB_randRangeFloat(DAT_008ad000,DAT_008ad004);
      MB_randRangeSigned(dVar4,(double)(longlong)DAT_008ad008);
      FastDoubleToInt();
      SpawnPart_48(uVar3,local_f0,local_100);
      iVar2 = iVar2 + 1;
      lVar1 = (longlong)iVar2;
    } while ((float)lVar1 < (float)(dVar5 / (double)DAT_008acff8));
  }
  return lVar1;
}


// 0x0483078 (0x1214 bytes)
// inlined: FastAtan2 @0x483d50, FastAtan2 @0x483f6c
/* Moby 844 */

void UpdateMoby_844(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar23;
  undefined8 uVar21;
  undefined4 uVar24;
  longlong lVar22;
  MobyInstance *pMVar25;
  longlong lVar26;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  byte bVar30;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar42;
  ulonglong in_f18;
  double dVar43;
  ulonglong in_f19;
  double dVar44;
  ulonglong in_f20;
  double dVar45;
  ulonglong in_f21;
  double dVar46;
  ulonglong in_f22;
  double dVar47;
  ulonglong in_f23;
  double dVar48;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar49;
  ulonglong in_f30;
  undefined8 uVar50;
  double dVar51;
  ulonglong in_f31;
  undefined8 uVar52;
  double dVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar61;
  float fVar62;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x260;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar19;
  puVar13[0x4e] = in_LR;
  puVar13[0x3a] = in_f14;
  puVar13[0x3b] = in_f15;
  puVar13[0x3c] = in_f16;
  puVar13[0x3d] = in_f17;
  puVar13[0x3e] = in_f18;
  puVar13[0x3f] = in_f19;
  puVar13[0x40] = in_f20;
  puVar13[0x41] = in_f21;
  puVar13[0x42] = in_f22;
  puVar13[0x43] = in_f23;
  puVar13[0x44] = in_f24;
  puVar13[0x45] = in_f25;
  puVar13[0x46] = in_f26;
  puVar13[0x47] = in_f27;
  puVar13[0x48] = in_f28;
  puVar13[0x49] = in_f29;
  puVar13[0x4a] = in_f30;
  puVar13[0x4b] = in_f31;
  lVar17 = uVar19 - 0xf0;
  puVar18 = (undefined4 *)lVar17;
  puVar18[3] = in_vr31_32_3;
  puVar18[2] = in_vr31_32_2;
  puVar18[1] = in_vr31_32_1;
  *puVar18 = in_vr31_32_0;
  fVar62 = (moby->pos).x;
  puVar13[0x39] = unaff_r31;
  fVar2 = (moby->pos).y;
  puVar13[0x38] = unaff_r30;
  pvVar10 = moby->pVar;
  uVar29 = ZEXT48(pvVar10);
  fVar3 = (moby->pos).z;
  fVar4 = (moby->rotation).x;
  puVar13[0x2b] = (ulonglong)(double)fVar62;
  fVar5 = (moby->rotation).y;
  *(f32 *)(puVar13 + 0x10) = fVar4;
  puVar13[0x2a] = (ulonglong)(double)fVar2;
  fVar4 = (moby->rotation).z;
  puVar13[0x29] = (ulonglong)(double)fVar3;
  *(f32 *)((int)puVar13 + 0x84) = fVar5;
  fVar5 = (moby->rotation).w;
  bVar30 = moby->state;
  *(f32 *)(puVar13 + 0x11) = fVar4;
  puVar13[0x37] = unaff_r29;
  puVar13[0x36] = unaff_r28;
  puVar13[0x35] = unaff_r27;
  puVar13[0x34] = unaff_r26;
  puVar13[0x33] = unaff_r25;
  puVar13[0x32] = unaff_r24;
  puVar13[0x31] = unaff_r23;
  puVar13[0x30] = unaff_r22;
  *(f32 *)((int)puVar13 + 0x8c) = fVar5;
  if (bVar30 < 2) {
    iVar23 = IsMobyPlayingSound(moby,*(int *)((int)pvVar10 + 0xa8));
    if (iVar23 != 0) {
      iVar23 = *(int *)((int)pvVar10 + 0xa8);
      if (((iVar23 != -1) && (g_SoundChannels[iVar23].pMoby == moby)) &&
         (g_SoundChannels[iVar23].state != '\0')) {
        sound_Kill(iVar23);
      }
      *(undefined4 *)((int)pvVar10 + 0xa8) = 0xffffffff;
    }
  }
  else {
    iVar23 = IsMobyPlayingSound(moby,*(int *)((int)pvVar10 + 0xa8));
    if (iVar23 == 0) {
      iVar23 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar10 + 0xa8) = iVar23;
    }
  }
  uVar1 = moby->state;
  bVar30 = (uVar1 == '\x01') << 1;
  if (uVar1 == '\x04') {
    puVar13[0x2c] = (longlong)DAT_008acffc;
    M844_00482c20
              ((double)*(float *)((int)pvVar10 + 0x78),
               (double)(*(float *)((int)pvVar10 + 0x68) *
                        (float)(longlong)(animationSpeed * ((float)(longlong)puVar13[0x2c] + 0.5)) +
                       (moby->pos).z),lVar20);
    fVar62 = (moby->pos).z;
    fVar3 = *(float *)((int)pvVar10 + 0x78) + 1.0;
    fVar2 = 0.0;
    if (fVar3 < fVar62) {
      fVar2 = DAT_008ad018;
    }
    uVar50 = 0x4024000000000000;
    if (fVar3 - fVar62 < 0.0) {
      uVar50 = 0x3ff0000000000000;
    }
    M844_004828f8((double)fVar2,uVar50,lVar20);
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar10 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x68);
    uVar11 = (int)*(uint *)((int)pvVar10 + 0x78) >> 0x1f;
    *(float *)((int)pvVar10 + 0x68) =
         -(DAT_008acff0 * g_FrameTimeSq - *(float *)((int)pvVar10 + 0x68));
    fVar4 = (moby->pos).z;
    uVar12 = (int)fVar4 >> 0x1f;
    if ((int)((uVar12 >> 1 ^ (uint)fVar4) - uVar12) <
        (int)((uVar11 >> 1 ^ *(uint *)((int)pvVar10 + 0x78)) - uVar11)) {
      PlayMobySound(1,0,moby);
      auVar54 = ZEXT416(0xffffffff);
      auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      moby->state = '\x01';
      auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorLeftIndexed(lVar17,0x483014);
      auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      fVar4 = *(f32 *)((int)pvVar10 + 0x70);
      auVar54 = vectorMultiplyAddFloatingPoint
                          (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                           auVar55);
      auVar54 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
      auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar24 = storeVectorElementWordIndexed
                         (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,0x8c,uVar29)
      ;
      *(undefined4 *)((int)pvVar10 + 0x8cU & 0xfffffffc) = uVar24;
      (moby->pos).x = fVar4;
      (moby->pos).y = *(f32 *)((int)pvVar10 + 0x74);
      (moby->pos).z = *(f32 *)((int)pvVar10 + 0x78);
      (moby->pos).w = *(f32 *)((int)pvVar10 + 0x7c);
      dVar32 = (double)MB_randRot();
      *(float *)((int)pvVar10 + 0x98) = (float)dVar32;
      dVar32 = (double)MB_randRot();
      *(float *)((int)pvVar10 + 0x9c) = (float)dVar32;
      uVar52 = 0x4051800000000000;
      uVar50 = 0x405e000000000000;
      dVar32 = (double)MB_randRangeSigned(0x4051800000000000,0x405e000000000000);
      dVar49 = 0.01745329238474369;
      *(float *)((int)pvVar10 + 0xa0) =
           (float)(dVar32 * 0.01745329238474369) * g_FrameTime;
      dVar32 = (double)MB_randRangeSigned(uVar52,uVar50);
      *(float *)((int)pvVar10 + 0xa4) = (float)(dVar32 * dVar49) * g_FrameTime;
    }
  }
  else if (uVar1 == '\x03') {
    M844_00482c20
              ((double)*(float *)((int)pvVar10 + 0x78),(double)(moby->pos).z,lVar20);
    M844_004828f8((double)DAT_008ad018,0x3ff0000000000000,lVar20);
    fVar62 = OrganicDelt
                       (*(float *)((int)pvVar10 + 0x78) + *(float *)((int)pvVar10 + 0x7c),
                        DAT_008acff4 * g_FrameTimeSq,DAT_008acff4 * g_FrameTimeSq,
                        g_FrameTime * 20.0,&(moby->pos).z,0x8b0000,
                        (float *)((int)pvVar10 + 0x68));
    if (*(int *)((int)pvVar10 + 0x68) == 0) {
      fVar2 = *(float *)((int)pvVar10 + 0x84);
      fVar62 = fVar2 + 0.5;
      if (fVar2 - *(float *)((int)pvVar10 + 0x7c) < 0.0) {
        fVar62 = fVar2 - 0.5;
      }
      *(float *)((int)pvVar10 + 0x7c) = fVar62;
    }
    iVar23 = FastDecTimerS32((double)fVar62,uVar29 + 0x8c);
    if (iVar23 != 0) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (worldUpdateTime ==
        (((int)worldUpdateTime >> 2) +
        (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4) {
      puVar13[0xe] = 0;
      DamageSphereAtPos
                (0x3ff0000000000000,0x4000000000000000,0x3ff0000000000000,lVar20,lVar20 + 0x10,
                 &DAT_00483014,0x10000);
    }
    puVar13[0x2c] = (longlong)DAT_008acffc;
    dVar32 = 0.5;
    M844_00482c20
              ((double)*(float *)((int)pvVar10 + 0x78),
               (double)(*(float *)((int)pvVar10 + 0x68) *
                        (float)(longlong)
                               (animationSpeed * (float)((double)(longlong)puVar13[0x2c] + 0.5)) *
                        0.5 + (moby->pos).z),lVar20);
    M844_004828f8((double)DAT_008ad018,0x3ff0000000000000,lVar20);
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar10 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x68);
    fVar62 = -(DAT_008acff0 * g_FrameTimeSq - *(float *)((int)pvVar10 + 0x68));
    *(float *)((int)pvVar10 + 0x68) = fVar62;
    if (fVar62 <= 0.0) {
      moby->state = '\x03';
      *(float *)((int)pvVar10 + 0x7c) = (float)((double)*(float *)((int)pvVar10 + 0x84) - dVar32);
      uVar24 = FastDoubleToInt((double)(animationSpeed * *(float *)((int)pvVar10 + 0x88)))
      ;
      *(undefined4 *)((int)pvVar10 + 0x8c) = uVar24;
    }
  }
  else if (uVar1 == '\x01') {
    dVar32 = 0.0;
    M844_004828f8(0,0x4020000000000000,lVar20);
    if (((g_gameMode != GAME_MODE_NORMAL) ||
        (fVar62 = (moby->pos).y - g_heroPosition.y, fVar2 = (moby->pos).x - g_heroPosition.x,
        24.0 <= SQRT(fVar2 * fVar2 + fVar62 * fVar62))) ||
       (iVar23 = FastDecTimerS32(uVar29 + 0x8c), iVar23 == 0)) {
      auVar54 = ZEXT416(0xffffffff);
      auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      auVar56 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorLeftIndexed(0xffffffffffffcffc,0x8b0000);
      auVar55 = vectorConvertFromSignedFixedPointWord(auVar54,0);
      auVar54 = loadVectorLeftIndexed(0x24,0x483014);
      auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar61 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      auVar54 = ZEXT416(0xffffffff);
      auVar59 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar58 = loadVectorLeftIndexed(0x8c,uVar29);
      auVar54 = vectorAddFloatingPoint(auVar55,auVar61);
      auVar55 = loadVectorRightIndexed(0x9c,uVar29);
      dVar49 = 0.5;
      auVar54 = vectorMultiplyAddFloatingPoint(auVar57,auVar54,auVar56);
      auVar57 = vectorShiftLeftIntegerWord(auVar59,auVar59);
      auVar56 = vectorConvertFromSignedFixedPointWord(auVar58 | auVar55,0);
      auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
      auVar54 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar55 = vectorConvertFromSignedFixedPointWord(auVar55,0);
      auVar55 = vectorMultiplyAddFloatingPoint(auVar55,auVar61,auVar57);
      auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                 auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60);
      if ((bool)(bVar30 >> 1 & 1)) {
        M844_00482c20
                  ((double)*(float *)((int)pvVar10 + 0x78),
                   (double)(float)((double)DAT_008ad02c + (double)*(float *)((int)pvVar10 + 0x78)),
                   lVar20,0xfffffffffffff410,&DAT_00483014,0x8c);
        M844_00482c20
                  ((double)*(float *)((int)pvVar10 + 0x78),
                   (double)(float)((double)DAT_008ad02c + (double)*(float *)((int)pvVar10 + 0x78)),
                   lVar20);
        uVar16 = DAT_008ad03c;
        uVar24 = DAT_008ad038;
        auVar54 = ZEXT416(0xffffffff);
        auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
        auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar54 = loadVectorLeftIndexed(0xffffffffffffcffc,0x8b0000);
        auVar56 = vectorConvertFromSignedFixedPointWord(auVar54,0);
        auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar54 = ZEXT416(0xffffffff);
        auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
        auVar59 = loadVectorLeftIndexed(0x8c,uVar29);
        auVar58 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar60 = loadVectorRightIndexed(0x9c,uVar29);
        auVar54 = vectorAddFloatingPoint(auVar56,auVar61);
        auVar56 = loadVectorLeftIndexed(0x28,0x483014);
        auVar55 = vectorMultiplyAddFloatingPoint(auVar57,auVar54,auVar55);
        auVar54 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar57 = vectorConvertFromSignedFixedPointWord(auVar59 | auVar60,0);
        auVar56 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
        auVar55 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar56 = vectorConvertFromSignedFixedPointWord(auVar56,0);
        auVar54 = vectorMultiplyAddFloatingPoint
                            (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                             auVar58);
        auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                   auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60);
        if ((bool)(bVar30 >> 1 & 1)) {
          dVar53 = 10.0;
          dVar51 = 20.0;
          dVar33 = (double)MB_randRangeFloat(10.0,20.0);
          uVar50 = FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
          dVar33 = (double)MB_randRangeFloat((float)dVar53,(float)dVar51);
          uVar52 = FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
          dVar33 = (double)MB_randRangeFloat((float)dVar53,40.0);
          uVar21 = FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
          dVar48 = 1.570796251296997;
          dVar47 = 3.141592502593994;
          iVar23 = 0;
          dVar46 = -3.141592502593994;
          dVar45 = -0.16666656732559204;
          dVar44 = 0.008333025500178337;
          dVar43 = -0.0001980741071747616;
          dVar42 = 2.601886990305502e-06;
          dVar53 = 0.75;
          dVar51 = 0.25;
          dVar33 = 1.0;
          do {
            dVar34 = (double)MB_randRot();
            dVar36 = (double)(float)(dVar34 + dVar48);
            *(undefined4 *)(puVar13 + 0x19) = 0;
            fVar2 = DAT_008ad034;
            fVar62 = DAT_008ad030;
            dVar35 = (double)(float)(dVar47 - dVar34);
            if (dVar34 - (double)(float)(dVar47 - dVar34) < 0.0) {
              dVar35 = dVar34;
            }
            dVar37 = (double)(float)(dVar47 - dVar36);
            if (dVar36 - (double)(float)(dVar47 - dVar36) < 0.0) {
              dVar37 = dVar36;
            }
            dVar41 = (double)(float)(dVar46 - dVar34);
            if ((double)(float)(dVar46 - dVar34) - dVar35 < 0.0) {
              dVar41 = dVar35;
            }
            dVar35 = (double)(float)(dVar46 - dVar36);
            if ((double)(float)(dVar46 - dVar36) - dVar37 < 0.0) {
              dVar35 = dVar37;
            }
            dVar34 = (double)(float)(dVar41 * dVar41);
            dVar36 = (double)(float)(dVar35 * dVar35);
            dVar39 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar41));
            dVar37 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar35));
            dVar38 = (double)(float)(dVar34 * dVar39);
            dVar40 = (double)(float)(dVar36 * dVar37);
            *(float *)((int)puVar13 + 0xc4) =
                 (float)((double)(float)((double)(float)(dVar34 * dVar38) * dVar42 +
                                        (double)(float)(dVar38 * dVar43 +
                                                       (double)(float)(dVar39 * dVar44 +
                                                                      (double)(float)((double)(float
                                                  )(dVar34 * dVar41) * dVar45 + dVar41)))) * dVar53)
            ;
            *(float *)(puVar13 + 0x18) =
                 (float)((double)(float)((double)(float)(dVar36 * dVar40) * dVar42 +
                                        (double)(float)(dVar40 * dVar43 +
                                                       (double)(float)(dVar37 * dVar44 +
                                                                      (double)(float)((double)(float
                                                  )(dVar36 * dVar35) * dVar45 + dVar35)))) * dVar53)
            ;
            dVar35 = (double)MB_randRangeFloat(fVar62,fVar2);
            fVar2 = *(float *)((int)puVar13 + 0xc4);
            fVar3 = *(float *)(puVar13 + 0x18);
            fVar6 = *(float *)(puVar13 + 0x19);
            dVar34 = (double)g_FrameTime;
            dVar36 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
            *(undefined4 *)((int)puVar13 + 0xac) = *(undefined4 *)((int)puVar13 + 0xcc);
            fVar8 = DAT_008ad040;
            fVar62 = (float)((double)(float)(dVar35 * dVar34) / dVar36);
            dVar35 = dVar32;
            if (dVar32 - dVar36 < 0.0) {
              dVar35 = (double)(fVar3 * fVar62);
            }
            dVar34 = dVar32;
            if (dVar32 - dVar36 < 0.0) {
              dVar34 = (double)(fVar2 * fVar62);
            }
            dVar37 = dVar32;
            if (dVar32 - dVar36 < 0.0) {
              dVar37 = (double)(fVar6 * fVar62);
            }
            if (dVar36 - dVar32 < 0.0) {
              dVar35 = (double)(fVar3 * fVar62);
            }
            if (dVar36 - dVar32 < 0.0) {
              dVar34 = (double)(fVar2 * fVar62);
            }
            if (dVar36 - dVar32 < 0.0) {
              dVar37 = (double)(fVar6 * fVar62);
            }
            *(float *)(puVar13 + 0x14) = (float)dVar35;
            *(float *)((int)puVar13 + 0xa4) = (float)dVar34;
            *(float *)(puVar13 + 0x15) = (float)dVar37;
            dVar35 = (double)MB_randRangeFloat((float)dVar32,fVar8);
            fVar62 = *(float *)((int)puVar13 + 0xa4);
            fVar2 = *(float *)(puVar13 + 0x14);
            dVar37 = (double)SQRT(fVar2 * fVar2 + fVar62 * fVar62);
            dVar34 = (double)g_FrameTime;
            fVar3 = (moby->pos).x;
            fVar6 = (moby->pos).y;
            dVar41 = (double)(moby->pos).z;
            *(f32 *)((int)puVar13 + 0xcc) = (moby->pos).w;
            *(undefined4 *)((int)puVar13 + 0xbc) = *(undefined4 *)((int)puVar13 + 0xac);
            *(float *)(puVar13 + 0x17) = (float)(dVar35 * dVar34);
            *(float *)(puVar13 + 0x18) = fVar3 + *(float *)(puVar13 + 0x18);
            *(float *)((int)puVar13 + 0xc4) = fVar6 + *(float *)((int)puVar13 + 0xc4);
            *(float *)(puVar13 + 0x19) = (float)(dVar41 + (double)*(float *)(puVar13 + 0x19));
            *(float *)(puVar13 + 0x15) = (float)(dVar35 * dVar34);
            dVar36 = (double)(fVar2 * (float)(dVar32 / dVar37));
            dVar34 = (double)(fVar62 * (float)(dVar32 / dVar37));
            dVar35 = dVar32;
            if (dVar32 - dVar37 < 0.0) {
              dVar35 = dVar36;
            }
            dVar38 = dVar32;
            if (dVar32 - dVar37 < 0.0) {
              dVar38 = dVar34;
            }
            if (dVar37 - dVar32 < 0.0) {
              dVar35 = dVar36;
            }
            if (dVar37 - dVar32 < 0.0) {
              dVar38 = dVar34;
            }
            *(float *)(puVar13 + 0x16) = (float)dVar35;
            *(float *)((int)puVar13 + 0xb4) = (float)dVar38;
            dVar35 = (double)MB_randRangeFloat
                                       ((float)(dVar41 - dVar51),(float)(dVar41 + dVar49));
            *(float *)(puVar13 + 0x19) = (float)dVar35;
            dVar35 = (double)MB_randRangeFloat((float)dVar49,(float)dVar33);
            *(float *)((int)puVar13 + 0xbc) = (float)dVar35;
            *(float *)((int)puVar13 + 0xac) = (float)dVar35;
            puVar13[0xe] = 0x30;
            SpawnPart_2
                      (uVar19 - 0x1a0,uVar19 - 0x1c0,uVar19 - 0x1b0,uVar24,uVar16,uVar50,uVar52,
                       uVar21);
            iVar23 = iVar23 + 1;
          } while (iVar23 < 0x14);
        }
      }
    }
    else {
      moby->state = '\x02';
      *(undefined4 *)((int)pvVar10 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar10 + 100) = 0;
      *(undefined4 *)((int)pvVar10 + 0x60) = 0;
      *(float *)((int)pvVar10 + 0x68) =
           SQRT(*(float *)((int)pvVar10 + 0x80) * 2.0 * DAT_008acff0 * g_FrameTimeSq);
    }
  }
  else if (uVar1 == '\0') {
    auVar54 = ZEXT416(0xffffffff);
    auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
    auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    moby->state = '\x01';
    auVar54 = loadVectorLeftIndexed(lVar17,0x483014);
    auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar54 = vectorMultiplyAddFloatingPoint
                        (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                         auVar55);
    auVar54 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
    auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar24 = storeVectorElementWordIndexed
                       (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,0x8c,uVar29);
    *(undefined4 *)((int)pvVar10 + 0x8cU & 0xfffffffc) = uVar24;
    fVar4 = (moby->pos).x;
    *(undefined4 *)((int)pvVar10 + 0xa8) = 0xff;
    *(f32 *)((int)pvVar10 + 0x70) = fVar4;
    *(f32 *)((int)pvVar10 + 0x74) = (moby->pos).y;
    *(f32 *)((int)pvVar10 + 0x78) = (moby->pos).z;
    *(f32 *)((int)pvVar10 + 0x7c) = (moby->pos).w;
    dVar32 = (double)MB_randRot();
    *(float *)((int)pvVar10 + 0x98) = (float)dVar32;
    dVar32 = (double)MB_randRot();
    *(float *)((int)pvVar10 + 0x9c) = (float)dVar32;
    uVar52 = 0x4051800000000000;
    uVar50 = 0x405e000000000000;
    dVar32 = (double)MB_randRangeSigned(0x4051800000000000,0x405e000000000000);
    dVar49 = 0.01745329238474369;
    *(float *)((int)pvVar10 + 0xa0) = (float)(dVar32 * 0.01745329238474369) * g_FrameTime;
    dVar32 = (double)MB_randRangeSigned(uVar52,uVar50);
    *(float *)((int)pvVar10 + 0xa4) = (float)(dVar32 * dVar49) * g_FrameTime;
    fVar62 = *(float *)((int)pvVar10 + 0x84) + 1.0;
    if (*(float *)((int)pvVar10 + 0x80) <= fVar62) {
      *(float *)((int)pvVar10 + 0x80) = fVar62;
    }
  }
  dVar32 = (double)(moby->pos).z;
  if (g_heroPosition.z < (float)(dVar32 - 2.0)) {
    fVar62 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    if (SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
             (fVar62 - g_heroPosition.y) * (fVar62 - g_heroPosition.y)) < DAT_008ad044) {
      fVar3 = g_heroPosition.y - fVar62;
      fVar6 = ABS(g_heroPosition.x - fVar2);
      fVar9 = ABS(fVar3);
      *(float *)((int)puVar13 + 0xfc) = g_heroPosition.x - fVar2;
      *(float *)(puVar13 + 0x20) = fVar3;
      *(float *)((int)puVar13 + 0x104) = fVar6 - fVar9;
      fVar3 = 0.0;
      uVar29 = (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1d) & 4;
      fVar8 = ABS(*(float *)((int)puVar13 + 0xfc));
      if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
        fVar8 = fVar9;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar7 = ABS(*(float *)(puVar13 + 0x20));
      if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      fVar6 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar14 = fVar3;
      if (0.0 < fVar8) {
        lVar17 = uVar19 - 0x250;
        lVar26 = uVar19 - 0x138;
        lVar27 = uVar19 - 0x128;
        lVar31 = 2;
        fVar8 = (fVar7 - fVar8) / (fVar7 + fVar8);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x134) = fVar8;
        *(float *)((int)puVar13 + 300) = fVar8;
        *(float *)(puVar13 + 0x26) = fVar8;
        *(float *)(puVar13 + 0x25) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar7;
        *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar8;
        *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar17 + 0x128) = *(float *)((int)lVar17 + 0x118) * fVar8 * fVar8;
          iVar23 = (int)lVar26;
          lVar17 = lVar17 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar8 * fVar8;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar27 = uVar19 - 0x138;
        pfVar28 = (float *)&DAT_007358e0;
        lVar17 = lVar22;
        lVar26 = lVar27;
        do {
          fVar8 = *pfVar28;
          fVar7 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar17 + 0x128) = *(float *)((int)lVar17 + 0x128) * fVar8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar17 = lVar22;
        fVar8 = fVar3;
        do {
          iVar23 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar15 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar8 = fVar8 + *(float *)(iVar23 + 0x128) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar14 = (fVar8 + 0.7853982) * fVar9 + fVar6;
      }
      fVar14 = fVar14 + 1.5707963;
      fVar62 = g_heroPosition.y - fVar62;
      fVar8 = ABS(g_heroPosition.x - fVar2);
      fVar9 = ABS(fVar62);
      fVar6 = 3.1415925 - fVar14;
      if (fVar14 - (3.1415925 - fVar14) < 0.0) {
        fVar6 = fVar14;
      }
      *(float *)(puVar13 + 0x1e) = g_heroPosition.x - fVar2;
      *(float *)(puVar13 + 0x1f) = fVar8 - fVar9;
      *(float *)((int)puVar13 + 0xf4) = fVar62;
      fVar62 = -3.1415925 - fVar14;
      if ((-3.1415925 - fVar14) - fVar6 < 0.0) {
        fVar62 = fVar6;
      }
      uVar29 = (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1d) & 4;
      fVar2 = fVar62 * fVar62;
      fVar6 = ABS(*(float *)(puVar13 + 0x1e));
      if (*(float *)(puVar13 + 0x1f) - 0.0 < 0.0) {
        fVar6 = fVar9;
      }
      fVar9 = fVar2 * fVar2 * fVar62;
      fVar7 = fVar2 * fVar9;
      fVar14 = ABS(*(float *)((int)puVar13 + 0xf4));
      if (*(float *)(puVar13 + 0x1f) - 0.0 < 0.0) {
        fVar14 = fVar8;
      }
      *(float *)(puVar13 + 0x1a) =
           (fVar2 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar9 * 0.0083330255 + fVar2 * fVar62 * -0.16666657 + fVar62) *
           0.2;
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar62 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      if (0.0 < fVar6) {
        lVar17 = uVar19 - 0x250;
        lVar27 = uVar19 - 0x148;
        lVar26 = uVar19 - 0x158;
        lVar31 = 2;
        fVar6 = (fVar14 - fVar6) / (fVar14 + fVar6);
        fVar8 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x114) = fVar6;
        *(float *)((int)puVar13 + 0x10c) = fVar6;
        *(float *)(puVar13 + 0x22) = fVar6;
        *(float *)(puVar13 + 0x21) = fVar6;
        fVar6 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar8;
        *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar6;
        *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar6 * fVar8;
        do {
          *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0xf8) * fVar6 * fVar6;
          iVar23 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar27 = uVar19 - 0x158;
        pfVar28 = (float *)&DAT_007358e0;
        lVar17 = lVar22;
        lVar26 = lVar27;
        do {
          fVar6 = *pfVar28;
          fVar8 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0x108) * fVar6;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar23 = (int)lVar22;
          iVar15 = (int)lVar27;
          lVar22 = lVar22 + 0x10;
          lVar27 = lVar27 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar23 + 0x108) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar62;
      }
      fVar2 = g_heroPosition.x;
      fVar62 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar62 = fVar3;
      }
      *(undefined4 *)(puVar13 + 0x1b) = 0;
      fVar8 = g_heroPosition.y;
      fVar6 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar62 < 0.0) {
        fVar6 = fVar62;
      }
      fVar62 = fVar6 * fVar6;
      fVar3 = fVar62 * fVar62 * fVar6;
      fVar9 = fVar62 * fVar3;
      *(float *)(puVar13 + 0x1c) = fVar2;
      fVar2 = g_heroPosition.z;
      *(float *)((int)puVar13 + 0xe4) = fVar8;
      fVar8 = g_heroPosition.w;
      *(float *)(puVar13 + 0x1d) = fVar2;
      *(float *)((int)puVar13 + 0xec) = fVar8;
      pMVar25 = g_heroMobyPtr;
      *(float *)((int)puVar13 + 0xd4) =
           (fVar62 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar62 * fVar6 * -0.16666657 + fVar6) *
           0.2;
      *(float *)(puVar13 + 0x1d) = fVar2 + 0.75;
      CollDamageMobyDirect
                (0.0,pMVar25,moby,1,0x483014,(float *)(puVar13 + 0x1c),(float *)(puVar13 + 0x1a));
      dVar32 = (double)(moby->pos).z;
    }
  }
  fVar62 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  *(f32 *)((int)puVar13 + 0x9c) = (moby->pos).w;
  *(float *)(puVar13 + 0x12) = (float)((double)fVar62 - (double)puVar13[0x2b]);
  *(float *)(puVar13 + 0x13) = (float)(dVar32 - (double)puVar13[0x29]);
  *(float *)((int)puVar13 + 0x94) = (float)((double)fVar2 - (double)puVar13[0x2a]);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar13 + 0x12),uVar19 - 0x1e0,
             lVar20 + 0x40);
  iVar23 = *(int *)((int)pvVar10 + 0xac);
  if (iVar23 == 0) {
    pMVar25 = CreateMoby(0x388);
    *(MobyInstance **)((int)pvVar10 + 0xac) = pMVar25;
    if (pMVar25 != (MobyInstance *)0x0) {
      pMVar25->updateDistance = '\0';
      *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) | 1;
      *(undefined2 *)(*(int *)((int)pvVar10 + 0xac) + 0x32) = 0;
      *(undefined1 *)(*(int *)((int)pvVar10 + 0xac) + 0x31) = 0;
      iVar23 = *(int *)((int)pvVar10 + 0xac);
      *(f32 *)(iVar23 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar23 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar23 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar23 + 0x1c) = (moby->pos).w;
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0xac));
    }
  }
  else {
    *(f32 *)(iVar23 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar23 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar23 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar23 + 0x1c) = (moby->pos).w;
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0xac));
  }
  return;
}


