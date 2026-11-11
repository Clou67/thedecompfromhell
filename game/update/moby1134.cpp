// game/update/moby1134.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x1d9110-0x1da834
#include "game/update/moby1134.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x01d9110 (0x1d0 bytes)
void M1134_001d9110(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  GPiece<16> local_50;
  GPiece<16> local_40;
  GPiece<16> local_30;
  
  if (*(char *)(param_1 + 0x20) != '\x01') {
    GetBonePosition(param_1,0,local_50);
  }
  MB_randSphere
            ((double)(DAT_0076494c * g_FrameTime),
             (double)(DAT_00764950 * g_FrameTime),local_40);
  uVar1 = DAT_0076495c;
  dVar3 = (double)DAT_00764964;
  MB_randInt(0xff);
  SpawnPart_60(dVar3,local_50,local_40,uVar1);
  iVar2 = 0;
  do {
    MB_randSphere
              ((double)(DAT_00ef26e4 * g_FrameTime),
               (double)(DAT_00764954 * g_FrameTime),local_30);
    uVar1 = DAT_00764960;
    dVar3 = (double)DAT_00764968;
    MB_randInt(0xff);
    SpawnPart_60(dVar3,local_50,local_40,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}


// 0x01d9310 (0x3d8 bytes)
void M1134_001d9310(MobyInstance *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> local_a0;
  float local_90 [12];
  
  dVar16 = 1.0;
  uVar9 = ZEXT48(param_1->pVar);
  dVar11 = dVar16;
  if (param_1->state != '\x01') {
    GetBonePosition(param_1,0,local_90);
    dVar11 = (double)BlendAnimFrame(param_1);
    dVar11 = (double)((float)(160.0 - dVar11) * 0.00625 * 16.0);
    if (dVar16 < dVar11) {
      dVar11 = dVar16;
    }
  }
  dVar16 = 0.0;
  iVar8 = 0;
  lVar10 = uVar9 + 0x40;
  dVar13 = 255.0;
  auVar19 = loadVectorLeftIndexed(0x24,0x1d92e0);
  dVar14 = 255.5;
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  dVar15 = 0.5;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x30);
    dVar12 = (double)fVar4;
    *(float *)(iVar3 + 0x20) = fVar4;
    if (dVar12 < dVar13) {
      if (dVar12 <= dVar16) {
        *(float *)(iVar3 + 0x20) = (float)(dVar12 + dVar13);
      }
    }
    else {
      *(float *)(iVar3 + 0x20) = (float)(dVar12 - dVar13);
    }
    iVar6 = FastDecTimerS32(uVar9 + 0x40);
    iVar1 = *(int *)(iVar3 + 0x40);
    dVar12 = (double)animationSpeed;
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar6 != 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar18);
      iVar1 = (int)(dVar12 * dVar14);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar12 = (double)FastIntToDouble((int)(dVar12 * dVar14) - iVar1);
    uVar5 = FastLerpColor
                      (ABS((double)(float)(dVar15 - (double)(float)(dVar12 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),DAT_00764934,
                       DAT_00764938);
    uVar7 = FastDoubleToInt((double)*(float *)(iVar3 + 0x20));
    SpawnPart_59
              ((double)(float)((double)*(float *)(iVar3 + 0x50) * dVar11),local_a0,uVar5,uVar7,
               DAT_00764944,DAT_00764940,2,DAT_00764940,0);
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}


// 0x01d9708 (0x174 bytes)
void M1134_001d9708(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = *(int *)(param_1 + 0x78);
  *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_1 + 0x24) + 0x24) * DAT_00764908;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x4c);
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    *(float *)(param_1 + 0x18) =
         DAT_00764910 *
         (fVar1 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) +
         *(float *)(iVar5 + 0x18) + DAT_0076490c;
    dVar6 = (double)FastWrapRot(*(float *)(param_1 + 0x40),*(float *)(iVar5 + 0x68));
    *(float *)(param_1 + 0x40) = (float)dVar6;
    dVar6 = (double)FastWrapRot(*(float *)(param_1 + 0x44),*(float *)(iVar5 + 100));
    *(float *)(param_1 + 0x44) = (float)dVar6;
    dVar6 = (double)FastWrapRot(*(float *)(param_1 + 0x48),*(float *)(iVar5 + 0x60));
    *(float *)(param_1 + 0x48) = (float)dVar6;
    dVar6 = (double)FastWrapRot
                              (*(float *)(param_1 + 0x4c),
                               DAT_00764924 * 0.017453292 * g_FrameTime);
    *(float *)(param_1 + 0x4c) = (float)dVar6;
  }
  M1134_001d9310(param_1);
  iVar5 = MB_randInt(DAT_00764948);
  if (iVar5 == 0) {
    M1134_001d9110(param_1);
  }
  return;
}


// 0x01d98b8 (0x30c bytes)
void M1134_001d98b8(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  pvVar2 = param_1->pVar;
  dVar16 = 170.0;
  if (param_1->updateId == '\x01') {
    dVar16 = (double)BlendAnimFrame(param_1);
  }
  iVar3 = *(int *)((int)pvVar2 + 4);
  dVar16 = (double)(float)(dVar16 * 0.0058823530562222);
  if ((iVar3 == -1) || (iVar4 = *(int *)((int)pvVar2 + 8), iVar4 == -1)) {
    dVar10 = (double)FastWrapRot
                               ((float)(dVar16 * 0.6981316804885864 - 0.3490658402442932),
                                g_heroRotation.z);
    fVar1 = (float)(dVar10 + 1.570796251296997);
    dVar11 = (double)(float)(3.141592502593994 - dVar10);
    if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
      dVar11 = dVar10;
    }
    fVar7 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar7 = fVar1;
    }
    dVar14 = (double)(float)(-3.141592502593994 - dVar10);
    if ((double)(float)(-3.141592502593994 - dVar10) - dVar11 < 0.0) {
      dVar14 = dVar11;
    }
    fVar8 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    dVar12 = (double)(float)(dVar14 * dVar14);
    fVar9 = fVar8 * fVar8;
    dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar14));
    fVar1 = fVar9 * fVar9 * fVar8;
    dVar11 = (double)(float)(dVar12 * dVar13);
    fVar7 = fVar9 * fVar1;
    local_5c = ((float)(dVar12 * dVar11) * 2.601887e-06 +
               (float)(dVar11 * -0.0001980741071747616 +
                      (double)(float)(dVar13 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar12 * dVar14) *
                                                     -0.16666656732559204 + dVar14)))) * 5.0 +
               g_heroPosition.y;
    local_60 = (fVar9 * fVar7 * 2.601887e-06 +
               fVar7 * -0.0001980741 + fVar1 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) *
               5.0 + g_heroPosition.x;
    local_44 = 0;
    local_58 = g_heroPosition.z + 1.0;
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    dVar11 = (double)FastWrapRot((float)dVar10,3.14159);
    local_48 = (float)dVar11;
    local_4c = (float)(dVar16 * -0.17000000178813934);
  }
  else {
    dVar11 = (double)Cuboids[iVar3].pos.x;
    local_54 = Cuboids[iVar4].pos.w;
    iVar5 = *(int *)((int)pvVar2 + 4);
    iVar6 = *(int *)((int)pvVar2 + 8);
    local_60 = (float)(dVar16 * (double)(float)((double)Cuboids[iVar4].pos.x - dVar11) + dVar11);
    local_5c = (float)(dVar16 * (double)(Cuboids[iVar4].pos.y - Cuboids[iVar3].pos.y) +
                      (double)Cuboids[iVar3].pos.y);
    local_58 = (float)(dVar16 * (double)(Cuboids[iVar4].pos.z - Cuboids[iVar3].pos.z) +
                      (double)Cuboids[iVar3].pos.z);
    dVar15 = (double)Cuboids[iVar5].rot.z;
    dVar13 = (double)Cuboids[iVar5].rot.x;
    dVar12 = (double)Cuboids[iVar5].rot.y;
    dVar14 = (double)Cuboids[iVar6].rot.x;
    dVar10 = (double)Cuboids[iVar6].rot.y;
    dVar11 = (double)FastDiffRots((double)Cuboids[iVar6].rot.z,dVar15);
    dVar11 = (double)FastWrapRot((float)(dVar11 * dVar16),(float)dVar15);
    local_48 = (float)dVar11;
    dVar11 = (double)FastDiffRots(dVar10,dVar12);
    dVar11 = (double)FastWrapRot((float)(dVar11 * dVar16),(float)dVar12);
    local_4c = (float)dVar11;
    dVar11 = (double)FastDiffRots(dVar14,dVar13);
    dVar16 = (double)FastWrapRot((float)(dVar11 * dVar16),(float)dVar13);
    local_50 = (float)dVar16;
  }
  Camera_SetMobyDrivenTargetPos(&local_60);
  Camera_SetMobyDrivenTargetRot(&local_50);
  return;
}


// 0x01d9bd0 (0x120 bytes)
void M1134_001d9bd0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> in_vs39;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)((int)uVar5 + 0x20) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x30) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x34) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x38) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x1d9bc4);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x40;
  auVar8 = loadVectorLeftIndexed(4,0x1d9bc4);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x1d9bc4);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7.piece<0,4>() = iVar4 + auVar9.piece<0,4>();
    auVar7.piece<8,8>() = in_vs39.piece<8,8>();
    auVar7.piece<4,4>() = iVar10 + auVar9.piece<4,4>();
    auVar16.piece<0,8>() = auVar7.piece<0,8>();
    auVar16.piece<8,4>() = iVar11 + auVar9.piece<8,4>();
    auVar16.piece<12,4>() = iVar12 + auVar9.piece<12,4>();
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8.piece<0,4>();
    iVar10 = iVar10 + auVar8.piece<4,4>();
    iVar11 = iVar11 + auVar8.piece<8,4>();
    iVar12 = iVar12 + auVar8.piece<12,4>();
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x50) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x54) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x58) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x5c) = 0x40200000;
  return;
}


// 0x01d9d48 (0xaec bytes)
// strings: 00a0ca34: 'None'

/* Moby 1134 */

void UpdateMoby_1134(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  float local_d0;
  float local_cc;
  int local_c8;
  float local_c0 [5];
  float local_ac;
  float local_a8;
  float local_a0 [4];
  longlong local_90;
  
  bVar1 = moby->state;
  piVar5 = (int *)moby->pVar;
  fVar3 = (moby->rotation).x;
  if (bVar1 == 0) {
    if ((*piVar5 == -1) || (g_CollectedGoldBolts[Level * 4 + *piVar5] != '\0')) {
      DeleteMoby(moby);
    }
    else {
      piVar5[4] = (int)(moby->pos).x;
      piVar5[5] = (int)(moby->pos).y;
      piVar5[6] = (int)(moby->pos).z;
      piVar5[7] = (int)(moby->pos).w;
      piVar5[7] = (int)(moby->rotation).z;
      dVar11 = (double)MB_randRot();
      (moby->rotation).x = (float)dVar11;
      dVar11 = (double)MB_randRot();
      (moby->rotation).y = (float)dVar11;
      dVar11 = (double)MB_randRot();
      (moby->rotation).z = (float)dVar11;
      dVar11 = (double)MB_randRot();
      (moby->rotation).w = (float)dVar11;
      fVar3 = g_FrameTime;
      piVar5[0x1a] = (int)(DAT_00764918 * 0.017453292 * g_FrameTime);
      piVar5[0x19] = (int)(DAT_0076491c * 0.017453292 * fVar3);
      piVar5[0x18] = (int)(DAT_00764920 * 0.017453292 * fVar3);
      moby->state = '\x01';
      M1134_001d9bd0(moby);
    }
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->rotation).w;
    moby->scale = moby->pClass->gScale * DAT_00764908;
    dVar11 = 3.141592502593994;
    dVar22 = -3.141592502593994;
    dVar23 = -0.16666656732559204;
    dVar24 = 0.008333025500178337;
    dVar25 = -0.0001980741071747616;
    fVar7 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar7 = fVar4;
    }
    fVar8 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    dVar26 = 2.601886990305502e-06;
    fVar9 = fVar8 * fVar8;
    fVar4 = fVar9 * fVar9 * fVar8;
    fVar7 = fVar9 * fVar4;
    (moby->pos).z =
         DAT_00764910 *
         (fVar9 * fVar7 * 2.601887e-06 +
         fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) +
         (float)piVar5[6] + DAT_0076490c;
    dVar20 = 0.01745329238474369;
    dVar12 = (double)FastWrapRot(fVar3,DAT_00764918 * 0.017453292 * g_FrameTime)
    ;
    (moby->rotation).x = (float)dVar12;
    dVar12 = (double)FastWrapRot
                               ((moby->rotation).y,
                                (float)((double)DAT_0076491c * dVar20) * g_FrameTime);
    (moby->rotation).y = (float)dVar12;
    dVar12 = (double)FastWrapRot
                               ((moby->rotation).z,
                                (float)((double)DAT_00764920 * dVar20) * g_FrameTime);
    (moby->rotation).z = (float)dVar12;
    dVar12 = (double)FastWrapRot
                               ((moby->rotation).w,
                                (float)((double)DAT_00764924 * dVar20) * g_FrameTime);
    (moby->rotation).w = (float)dVar12;
    M1134_001d9310(moby);
    iVar10 = MB_randInt(DAT_00764948);
    if (iVar10 == 0) {
      M1134_001d9110(moby);
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if ((((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 3.0) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroHealth != 0)) &&
       ((g_heroType == '\x03' || (g_heroType == '\0')))) {
      if (*(short *)(piVar5 + 3) == 0) {
        dVar19 = 1.570796251296997;
        dVar20 = (double)((float)piVar5[7] + 1.5707963);
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar18 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar18 = dVar12;
        }
        dVar20 = (double)(float)(dVar18 * dVar18);
        dVar15 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
        dVar14 = (double)(float)(dVar20 * dVar15);
        dVar13 = (double)(float)piVar5[7];
        dVar12 = (double)(float)(dVar11 - dVar13);
        if (dVar13 - (double)(float)(dVar11 - dVar13) < 0.0) {
          dVar12 = dVar13;
        }
        dVar16 = (double)(float)(dVar22 - dVar13);
        if ((double)(float)(dVar22 - dVar13) - dVar12 < 0.0) {
          dVar16 = dVar12;
        }
        dVar12 = (double)(float)(dVar16 * dVar16);
        dVar17 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar16));
        dVar13 = (double)(float)(dVar12 * dVar17);
        dVar21 = 0.0;
        local_d0 = (float)((double)(float)(dVar20 * dVar14) * dVar26 +
                          (double)(float)(dVar14 * dVar25 +
                                         (double)(float)(dVar15 * dVar24 +
                                                        (double)(float)((double)(float)(dVar20 * 
                                                  dVar18) * dVar23 + dVar18)))) * 2.5 +
                   (float)piVar5[4];
        local_cc = (float)((double)(float)(dVar12 * dVar13) * dVar26 +
                          (double)(float)(dVar13 * dVar25 +
                                         (double)(float)(dVar17 * dVar24 +
                                                        (double)(float)((double)(float)(dVar12 * 
                                                  dVar16) * dVar23 + dVar16)))) * 2.5 +
                   (float)piVar5[5];
        local_c8 = piVar5[6];
        local_c0[3] = 0.0;
        local_c0[2] = 0.0;
        local_c0[1] = 0.0;
        local_c0[0] = 0.0;
        dVar12 = (double)FastWrapRot((float)piVar5[7],3.1415927);
        local_c0[2] = (float)dVar12;
        local_90 = (longlong)(int)(animationSpeed * 10.5);
        FadeToBlack((int)(animationSpeed * 10.5));
        if (g_heroType == '\x03') {
          Hero_RevertToRatchet();
        }
        Hero_Warp(&local_d0,local_c0,0x72,0);
        PlayMobySound(0,0,moby);
        dVar20 = (double)(float)((double)(float)piVar5[7] + dVar19);
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar18 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar18 = dVar12;
        }
        dVar12 = (double)(float)(dVar18 * dVar18);
        dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar18));
        dVar20 = (double)(float)(dVar12 * dVar13);
        local_c0[4] = (float)((double)(float)(dVar12 * dVar20) * dVar26 +
                             (double)(float)(dVar20 * dVar25 +
                                            (double)(float)(dVar13 * dVar24 +
                                                           (double)(float)((double)(float)(dVar12 * 
                                                  dVar18) * dVar23 + dVar18)))) * 1.25;
        dVar18 = (double)local_c0[4];
        dVar20 = (double)(float)piVar5[7];
        local_a8 = 0.0;
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar13 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar13 = dVar12;
        }
        dVar12 = (double)(float)(dVar13 * dVar13);
        dVar14 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar13));
        dVar20 = (double)(float)(dVar12 * dVar14);
        local_ac = (float)((double)(float)(dVar12 * dVar20) * dVar26 +
                          (double)(float)(dVar20 * dVar25 +
                                         (double)(float)(dVar14 * dVar24 +
                                                        (double)(float)((double)(float)(dVar12 * 
                                                  dVar13) * dVar23 + dVar13)))) * 1.25;
        dVar13 = 1.5707963705062866;
        dVar12 = (double)FastWrapRot((float)piVar5[7],1.5707964);
        dVar20 = (double)(float)(dVar12 + dVar19);
        dVar14 = 4.0;
        dVar19 = (double)local_ac;
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar15 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar15 = dVar12;
        }
        dVar12 = (double)(float)(dVar15 * dVar15);
        dVar20 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
        dVar16 = (double)(float)(dVar12 * dVar20);
        local_c0[4] = (float)((double)(float)((double)(float)(dVar12 * dVar16) * dVar26 +
                                             (double)(float)(dVar16 * dVar25 +
                                                            (double)(float)(dVar20 * dVar24 +
                                                                           (double)(float)((double)(
                                                  float)(dVar12 * dVar15) * dVar23 + dVar15)))) *
                              4.0 + dVar18);
        dVar20 = (double)FastWrapRot((float)piVar5[7],(float)dVar13);
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar11 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar11 = dVar12;
        }
        dVar22 = (double)(float)(dVar11 * dVar11);
        dVar20 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar11));
        dVar12 = (double)(float)(dVar22 * dVar20);
        local_c0[4] = local_c0[4] + (float)piVar5[4];
        local_ac = (float)((double)(float)((double)(float)(dVar22 * dVar12) * dVar26 +
                                          (double)(float)(dVar12 * dVar25 +
                                                         (double)(float)(dVar20 * dVar24 +
                                                                        (double)(float)((double)(
                                                  float)(dVar22 * dVar11) * dVar23 + dVar11)))) *
                           dVar14 + dVar19) + (float)piVar5[5];
        local_a0[3] = 0.0;
        local_a0[2] = 0.0;
        local_a0[1] = 0.0;
        local_a0[0] = 0.0;
        local_a8 = local_a8 + (float)piVar5[6] + 1.0;
        dVar11 = (double)FastDiffRots((double)(float)piVar5[7],dVar13);
        local_a0[2] = (float)dVar11;
        SetCameraPosition(local_c0 + 4,local_a0,1,0,0);
        Camera_SetMobyDrivenTargetPos(local_c0 + 4);
        Camera_SetMobyDrivenTargetRot(local_a0);
        (moby->pos).x = g_heroPosition.x;
        (moby->pos).y = g_heroPosition.y;
        (moby->pos).z = g_heroPosition.z;
        (moby->pos).w = g_heroPosition.w;
        (moby->rotation).x = g_heroRotation.x;
        uVar2 = moby->animationId;
        (moby->rotation).y = g_heroRotation.y;
        (moby->rotation).z = g_heroRotation.z;
        (moby->rotation).w = g_heroRotation.w;
        if (uVar2 != '\x01') {
          MB_SetAnimation(moby,1,0,0);
        }
        Hero_TransAnim((float)dVar21,0x82,0);
        if (Cheats[5] != '\0') {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        DAT_0096bd8f = 1;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        LetterBoxOn = 1;
        moby->state = '\x02';
        auVar27 = loadVectorLeftIndexed(0x4c,0x1d9cf0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                             auVar28);
        auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x6c,
                           ZEXT48(piVar5));
        *(undefined4 *)((uint)(piVar5 + 0x1b) & 0xfffffffc) = uVar6;
      }
      else {
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        auVar27 = loadVectorLeftIndexed(0x24,0x1d9cf0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                             auVar28);
        auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        g_toastMsgTimer =
             storeVectorElementWordIndexed
                       (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x5c80,
                        0xa10000);
        MB_ToastMessage(0x53b3,0xffffffffffffffff);
        g_CollectedGoldBolts[Level * 4 + *piVar5] = '\x01';
        iVar10 = MB_CountGoldBolts();
        if (iVar10 == 0x28) {
          MB_UnlockTrophy(BOLT_COMMANDO);
        }
        memcard_Save(0,-1);
        DeleteMoby(moby);
      }
    }
  }
  else if (bVar1 < 3) {
    M1134_001d98b8(moby);
    (moby->pos).x = g_heroPosition.x;
    (moby->pos).y = g_heroPosition.y;
    (moby->pos).z = g_heroPosition.z;
    (moby->pos).w = g_heroPosition.w;
    (moby->rotation).x = g_heroRotation.x;
    uVar2 = moby->updateId;
    (moby->rotation).y = g_heroRotation.y;
    (moby->rotation).z = g_heroRotation.z;
    (moby->rotation).w = g_heroRotation.w;
    if (uVar2 == '\x01') {
      M1134_001d9708(moby);
      iVar10 = MB_randInt(10);
      if (iVar10 == 0) {
        M1134_001d9110(moby);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(moby,0,0,0);
        }
        iVar10 = 0;
        moby->enabled = '\0';
        moby->modeBits = moby->modeBits | DISABLED;
        do {
          M1134_001d9110(moby);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 4);
      }
    }
    if ((DAT_0096a778 & 2) != 0) {
      Hero_TransAnim((float)(longlong)(animationSpeed * 30.5),0,0);
    }
    if ((moby->updateId == '\0') &&
       (iVar10 = FastDecTimerS32(ZEXT48(piVar5) + 0x6c), iVar10 != 0)) {
      auVar27 = ZEXT416(0xffffffff);
      auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar27 = loadVectorLeftIndexed(0x24,0x1d9cf0);
      auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar27 = vectorMultiplyAddFloatingPoint
                          (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                           auVar28);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      g_toastMsgTimer =
           storeVectorElementWordIndexed
                     (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x5c80,0xa10000)
      ;
      MB_ToastMessage(0x53b3,0xffffffffffffffff);
      g_CollectedGoldBolts[Level * 4 + *piVar5] = '\x01';
      iVar10 = MB_CountGoldBolts();
      if (iVar10 == 0x28) {
        MB_UnlockTrophy(BOLT_COMMANDO);
      }
      LetterBoxOn = 0;
      Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,0);
      Camera_DeactivateMobyDrivenCam(0);
      memcard_Save(0,-1);
      DeleteMoby(moby);
    }
  }
  return;
}


