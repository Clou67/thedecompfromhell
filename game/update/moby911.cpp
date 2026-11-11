// game/update/moby911.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4abfb0-0x4ad264
#include "game/update/moby911.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04abfb0 (0x14 bytes)
void M911_004abfb0(void)

{
  DAT_008f4038 = 0x10000;
  return;
}


// 0x04abff8 (0x3e0 bytes)
void M911_004abff8(undefined4 param_1)

{
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<72> local_a0;
  
  CollLine(local_c0,local_b0,0,param_1,local_a0);
  CollLine(local_c0,local_b0,0,param_1,local_a0);
  return;
}


// 0x04ac3f0 (0x64c bytes)
void M911_004ac3f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar11;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<88> local_120;
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  if (10.0 < SQRT((g_heroPosition.z - fVar3) * (g_heroPosition.z - fVar3) +
                  (g_heroPosition.x - fVar2) * (g_heroPosition.x - fVar2) +
                  (g_heroPosition.y - fVar1) * (g_heroPosition.y - fVar1))) {
    iVar11 = FastCheckBsphereInView(0x4038000000000000,local_130);
    if (iVar11 == -1) {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
  }
  if (SQRT((g_heroPosition.z - fVar3) * (g_heroPosition.z - fVar3) +
           (g_heroPosition.x - fVar2) * (g_heroPosition.x - fVar2) +
           (g_heroPosition.y - fVar1) * (g_heroPosition.y - fVar1)) <= 24.0) {
    FastEulerToMtx1(local_120,param_1 + 0x40);
    dVar13 = 0.0;
    dVar12 = (double)MB_randRangeFloat
                               ((float)(longlong)DAT_008f4074,(float)(longlong)DAT_008f4078);
    lVar4 = FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)MB_randRangeFloat
                               ((float)(longlong)DAT_008f407c,(float)(longlong)DAT_008f4080);
    lVar5 = FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)MB_randRangeFloat
                               ((float)(longlong)DAT_008f4074,(float)(longlong)DAT_008f4078);
    lVar6 = FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)MB_randRangeFloat
                               ((float)(longlong)DAT_008f407c,(float)(longlong)DAT_008f4078);
    lVar7 = FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    uVar8 = FastDoubleToInt
                      ((double)(longlong)(animationSpeed * ((float)(longlong)DAT_008f4084 + 0.5)));
    dVar14 = 1.0;
    MB_randRangeFloat((float)dVar13,1.0);
    MB_randSphere(dVar13,(double)(DAT_008f4090 * g_FrameTime),local_140);
    SpawnPart_2
              (local_160,local_150,local_140,DAT_008f406c,DAT_008f4070,
               lVar4 + (lVar4 - lVar6 >> 0x3f & lVar6 - lVar4),
               lVar5 + (lVar5 - lVar7 >> 0x3f & lVar7 - lVar5),uVar8);
    dVar12 = (double)MB_randRangeFloat
                               ((float)(longlong)DAT_008f4074,(float)(longlong)DAT_008f4078);
    uVar9 = FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)MB_randRangeFloat
                               ((float)(longlong)DAT_008f407c,(float)(longlong)DAT_008f4080);
    uVar10 = FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    MB_randSphere(dVar13,(double)(DAT_008f4090 * g_FrameTime),local_140);
    SpawnPart_2(local_160,local_150,local_140,DAT_008f406c,DAT_008f4070,uVar9,uVar10,uVar8)
    ;
  }
  return;
}


// 0x04aca68 (0x3ec bytes)
void M911_004aca68(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<72> local_e0;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = FastDoubleToInt
                    ((double)((DAT_008f4060 / (DAT_008f405c * g_FrameTime)) * 0.25));
  dVar8 = (double)(*(float *)(iVar1 + 0x80) * (float)(longlong)iVar2);
  dVar3 = (double)FastDiffRots
                            ((double)*(float *)(iVar1 + 0x7c),(double)(float)(dVar8 * 4.0));
  iVar2 = 0;
  dVar9 = 3.141592502593994;
  dVar10 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar12 = 0.008333025500178337;
  dVar13 = -0.0001980741071747616;
  dVar14 = 2.601886990305502e-06;
  dVar15 = 0.01745329238474369;
  do {
    dVar5 = (double)(float)(dVar9 - dVar3);
    if (dVar3 - (double)(float)(dVar9 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar4 = (double)(float)(dVar10 - dVar3);
    if ((double)(float)(dVar10 - dVar3) - dVar5 < 0.0) {
      dVar4 = dVar5;
    }
    dVar5 = (double)(float)(dVar4 * dVar4);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
    dVar6 = (double)(float)(dVar5 * dVar7);
    FastWrapRot
              (*(float *)(iVar1 + 0x84),
               (float)((double)*(float *)(iVar1 + 100) * dVar15) *
               (float)((double)(float)(dVar5 * dVar6) * dVar14 +
                      (double)(float)(dVar6 * dVar13 +
                                     (double)(float)(dVar7 * dVar12 +
                                                    (double)(float)((double)(float)(dVar5 * dVar4) *
                                                                    dVar11 + dVar4)))));
    dVar3 = (double)FastWrapRot((float)dVar3,(float)dVar8);
    dVar5 = (double)(float)(dVar9 - dVar3);
    if (dVar3 - (double)(float)(dVar9 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar4 = (double)(float)(dVar10 - dVar3);
    if ((double)(float)(dVar10 - dVar3) - dVar5 < 0.0) {
      dVar4 = dVar5;
    }
    dVar5 = (double)(float)(dVar4 * dVar4);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
    dVar6 = (double)(float)(dVar5 * dVar7);
    FastWrapRot
              (*(float *)(iVar1 + 0x84),
               (float)((double)*(float *)(iVar1 + 100) * dVar15) *
               (float)((double)(float)(dVar5 * dVar6) * dVar14 +
                      (double)(float)(dVar6 * dVar13 +
                                     (double)(float)(dVar7 * dVar12 +
                                                    (double)(float)((double)(float)(dVar5 * dVar4) *
                                                                    dVar11 + dVar4)))));
    CollLine(local_100,local_f0,0,param_1,local_e0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


// 0x04ace80 (0x3e4 bytes)
/* Moby 911 */

void UpdateMoby_911(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  pvVar3 = moby->pVar;
  if (-1 < *(int *)((int)pvVar3 + 0x90)) {
    iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x90));
    if (iVar8 == 0) {
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      *(undefined4 *)((int)pvVar3 + 0x54) = 0;
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x50) = DAT_008f4094;
      *(undefined4 *)((int)pvVar3 + 0x54) = DAT_008f4098;
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(int *)((int)pvVar3 + 0x60) == 0) {
        moby->state = '\x03';
        iVar8 = FastDoubleToInt
                          ((double)(*(float *)((int)pvVar3 + 0x78) * 60.0 +
                                   *(float *)((int)pvVar3 + 0x74)));
        *(int *)((int)pvVar3 + 0x88) = (int)(animationSpeed * ((float)(longlong)iVar8 + 0.5));
      }
      else {
        moby->state = '\x01';
        *(float *)((int)pvVar3 + 0x7c) = *(float *)((int)pvVar3 + 0x6c) * 0.017453292;
        *(float *)((int)pvVar3 + 0x80) =
             (360.0 / *(float *)((int)pvVar3 + 0x68)) * 0.017453292 * g_FrameTime;
        *(f32 *)((int)pvVar3 + 0x84) = (moby->rotation).z;
      }
      *(undefined4 *)((int)pvVar3 + 0x94) = 0xffffffff;
    }
    else {
      iVar8 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x94));
      if (iVar8 == 0) {
        iVar8 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar3 + 0x94) = iVar8;
      }
      M911_004ac3f0(moby);
      M911_004aca68(moby);
      fVar2 = *(float *)((int)pvVar3 + 0x7c);
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = fVar5 * fVar5;
      fVar6 = fVar4 * fVar4 * fVar5;
      fVar7 = fVar4 * fVar6;
      dVar11 = (double)(*(float *)((int)pvVar3 + 100) * 0.017453292 *
                       (fVar4 * fVar7 * 2.601887e-06 +
                       fVar7 * -0.0001980741 +
                       fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5));
      dVar10 = (double)FastWrapRot(fVar2,*(float *)((int)pvVar3 + 0x80));
      *(float *)((int)pvVar3 + 0x7c) = (float)dVar10;
      dVar10 = (double)FastWrapRot(*(float *)((int)pvVar3 + 0x84),(float)dVar11);
      (moby->rotation).z = (float)dVar10;
    }
  }
  else if (bVar1 < 3) {
    iVar8 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x94));
    if (iVar8 == 0) {
      iVar8 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0x94) = iVar8;
    }
    M911_004ac3f0(moby);
    M911_004abff8(moby);
    iVar8 = FastDecTimerS32((int)pvVar3 + 0x88);
    if (iVar8 != 0) {
      moby->state = '\x03';
      iVar9 = FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0x74) * 60.0));
      iVar8 = *(int *)((int)pvVar3 + 0x94);
      *(int *)((int)pvVar3 + 0x88) = (int)(animationSpeed * ((float)(longlong)iVar9 + 0.5));
      if (((iVar8 != -1) && (g_SoundChannels[iVar8].pMoby == moby)) &&
         (g_SoundChannels[iVar8].state != '\0')) {
        sound_Kill(iVar8);
      }
      *(undefined4 *)((int)pvVar3 + 0x94) = 0xffffffff;
    }
  }
  else if ((bVar1 < 4) && (iVar8 = FastDecTimerS32((int)pvVar3 + 0x88), iVar8 != 0)) {
    moby->state = '\x02';
    iVar8 = FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0x70) * 60.0));
    *(int *)((int)pvVar3 + 0x88) = (int)(animationSpeed * ((float)(longlong)iVar8 + 0.5));
  }
  return;
}


