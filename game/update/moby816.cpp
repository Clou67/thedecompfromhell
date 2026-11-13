// game/update/moby816.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x46daf0-0x46f590
#include "game/update/moby816.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/mUnk.h"

// 0x046daf0 (0x14 bytes)
void M816_0046daf0(void)

{
  DAT_00877798 = 0x10000;
  return;
}


// 0x046db08 (0x38 bytes)
undefined8 M816_0046db08(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0xa6) == 0x330) {
    if (*(byte *)(param_1 + 0x20) < 2 || 6 < *(byte *)(param_1 + 0x20)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x046db40 (0x48 bytes)
void M816_0046db40(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    MB_ShowPersistentMessage(8,0xbc9);
  }
  else {
    MB_ShowPersistentMessage(8,0xbc9);
  }
  return;
}


// 0x046db88 (0x58 bytes)
undefined8 M816_0046db88(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


// 0x046dbe8 (0xc0 bytes)
void M816_0046dbe8(MobyInstance *param_1)

{
  void *pvVar1;
  double dVar2;
  
  dVar2 = 0.01745329238474369;
  pvVar1 = param_1->pVar;
  MB_BobMotion
            (DAT_008777bc,DAT_008777c0 * 0.017453292 * g_FrameTime,param_1,
             (float *)((int)pvVar1 + 0xec),(float *)((int)pvVar1 + 0xe8));
  MB_SwingMotion
            ((double)DAT_008777c4,
             (double)((float)((double)DAT_008777c8 * dVar2) * g_FrameTime),
             (double)((float)((double)DAT_008777cc * dVar2) * g_FrameTime),param_1,
             ZEXT48(pvVar1) + 0xf0,ZEXT48(pvVar1) + 0xf4);
  return;
}


// 0x046dcc8 (0x73c bytes)
// inlined: FastAtan2 @0x46df6c, FastAtan2 @0x46e1a8
int M816_MoveAlongSpline(MobyInstance *moby,longlong splineId,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  float *pfVar15;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int *piVar19;
  ulonglong unaff_r28;
  int iVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
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
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x140;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar11;
  puVar9[0x2a] = in_LR;
  puVar9[0x20] = in_f24;
  puVar9[0x21] = in_f25;
  puVar9[0x22] = in_f26;
  puVar9[0x23] = in_f27;
  puVar9[0x24] = in_f28;
  puVar9[0x25] = in_f29;
  puVar9[0x26] = in_f30;
  puVar9[0x27] = in_f31;
  puVar9[0x1f] = unaff_r31;
  puVar9[0x1e] = unaff_r30;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1d] = unaff_r29;
  iVar20 = 0;
  pvVar7 = moby->pVar;
  iVar10 = (int)(splineId << 2);
  dVar27 = 0.0;
  *(undefined4 *)(puVar9 + 0xe) = 0;
  iVar12 = *(int *)((int)pvVar7 + 100);
  puVar9[0x1b] = unaff_r27;
  piVar19 = *(int **)((int)Splines + iVar10);
  dVar30 = (double)(float)piVar19[iVar12 * 4 + 5];
  dVar31 = (double)(float)piVar19[iVar12 * 4 + 4];
  dVar25 = (double)(float)(dVar30 - (double)(moby->pos).y);
  dVar26 = (double)(float)(dVar31 - (double)(moby->pos).x);
  dVar24 = (double)((float)piVar19[iVar12 * 4 + 6] - (moby->pos).z);
  fVar1 = DAT_008777d0 * g_FrameTime;
  dVar29 = (double)(float)piVar19[iVar12 * 4 + 7];
  dVar28 = (double)SQRT((float)(dVar24 * dVar24 +
                               (double)(float)(dVar26 * dVar26 + (double)(float)(dVar25 * dVar25))))
  ;
  puVar9[0x1a] = unaff_r26;
  if (dVar28 < (double)(fVar1 * 2.0)) {
    piVar19 = *(int **)((int)Splines + iVar10);
    *(int *)((int)pvVar7 + 100) = iVar12 + 1;
    if (iVar12 + 1 == *piVar19) {
      iVar20 = 1;
    }
  }
  pfVar15 = (float *)(piVar19 + *piVar19 * 4);
  fVar2 = (moby->pos).y - pfVar15[1];
  fVar3 = (moby->pos).x - *pfVar15;
  fVar4 = (moby->pos).z - pfVar15[2];
  OrganicDelt
            (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),DAT_008777d4 * g_FrameTimeSq,
             DAT_008777d4 * g_FrameTimeSq,fVar1,(float *)(puVar9 + 0xe),iVar10,
             (float *)((int)pvVar7 + 0x60));
  dVar22 = (double)(float)((double)*(float *)((int)pvVar7 + 0x60) / dVar28);
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  (moby->pos).w = (float)dVar29;
  dVar29 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar22);
  }
  dVar23 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar22);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar22);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar22);
  }
  dVar25 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar25 = (double)(float)(dVar24 * dVar22);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar25 = (double)(float)(dVar24 * dVar22);
  }
  *(float *)((int)puVar9 + 0x84) = (float)dVar25;
  fVar6 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar29 * dVar29)));
  uVar8 = *(uint *)((int)puVar9 + 0x84);
  fVar4 = *(float *)((int)puVar9 + 0x84);
  (moby->pos).x = (float)(dVar23 + (double)fVar1);
  (moby->pos).y = (float)(dVar29 + (double)fVar2);
  (moby->pos).z = (float)(dVar25 + (double)fVar3);
  fVar1 = g_FrameTimeSq;
  fVar2 = g_FrameTime;
  dVar26 = ABS((double)fVar6);
  *(float *)(puVar9 + 0x10) = fVar6;
  *(float *)(puVar9 + 0x11) = (float)(dVar26 - ABS(dVar25));
  dVar28 = 0.7853981852531433;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
  if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
    dVar24 = ABS(dVar25);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar25 = ABS((double)fVar4);
  if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
    dVar25 = dVar26;
  }
  dVar26 = dVar27;
  if (dVar27 < dVar24) {
    lVar13 = uVar11 - 0x130;
    lVar17 = uVar11 - 0x94;
    lVar18 = uVar11 - 0x84;
    lVar21 = 2;
    fVar4 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x17) = fVar4;
    *(float *)(puVar9 + 0x16) = fVar4;
    *(float *)((int)puVar9 + 0xb4) = fVar4;
    *(float *)((int)puVar9 + 0xac) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar5;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar4;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar13 + 0xac) = *(float *)((int)lVar13 + 0x9c) * fVar4 * fVar4;
      iVar12 = (int)lVar17;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar11 - 0x94;
    pfVar15 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar17 = lVar18;
    do {
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0xac) = *(float *)((int)lVar13 + 0xac) * fVar4;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    lVar13 = lVar14;
    dVar24 = dVar27;
    do {
      iVar12 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar10 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar12 + 0xac)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar26 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar3);
  }
  dVar26 = -dVar26;
  dVar24 = 0.2617993950843811;
  if ((dVar26 <= 0.2617993950843811) && (dVar24 = dVar26, dVar26 < -0.2617993950843811)) {
    dVar24 = -0.2617993950843811;
  }
  dVar22 = 0.01745329238474369;
  dVar29 = 12.566370964050293;
  fVar1 = DAT_008777d8 * 0.017453292 * fVar1;
  OrganicDeltAng
            ((float)dVar24,fVar1,fVar1,fVar2 * 12.566371,&(moby->rotation).y,0x870000,
             (float *)((int)pvVar7 + 0x6c));
  fVar1 = (float)(dVar31 - (double)(moby->pos).x);
  fVar2 = (float)(dVar30 - (double)(moby->pos).y);
  dVar26 = ABS((double)fVar1);
  dVar30 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x74) = fVar1;
  *(float *)(puVar9 + 0xf) = fVar2;
  fVar1 = g_FrameTimeSq;
  *(float *)((int)puVar9 + 0x7c) = (float)(dVar26 - dVar30);
  dVar25 = (double)g_FrameTime;
  uVar16 = (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)((int)puVar9 + 0x7c) - dVar27 < 0.0) {
    dVar24 = dVar30;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar30 = ABS((double)*(float *)(puVar9 + 0xf));
  if ((double)*(float *)((int)puVar9 + 0x7c) - dVar27 < 0.0) {
    dVar30 = dVar26;
  }
  if (dVar27 < dVar24) {
    lVar13 = uVar11 - 0x130;
    lVar18 = uVar11 - 0xa4;
    lVar17 = uVar11 - 0xb4;
    lVar21 = 2;
    fVar4 = (float)(dVar30 - dVar24) / (float)(dVar30 + dVar24);
    fVar6 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x13) = fVar4;
    *(float *)(puVar9 + 0x12) = fVar4;
    *(float *)((int)puVar9 + 0x94) = fVar4;
    *(float *)((int)puVar9 + 0x8c) = fVar4;
    fVar4 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar6;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar4 * fVar6;
    do {
      *(float *)((int)lVar13 + 0x8c) = *(float *)((int)lVar13 + 0x7c) * fVar4 * fVar4;
      iVar12 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar11 - 0xb4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar17 = lVar18;
    do {
      fVar4 = *pfVar15;
      fVar6 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0x8c) = *(float *)((int)lVar13 + 0x8c) * fVar4;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar13 = 2;
    do {
      iVar12 = (int)lVar14;
      iVar10 = (int)lVar18;
      lVar14 = lVar14 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar12 + 0x8c)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar27 = (double)((float)(dVar27 + dVar28) * fVar3 + fVar2);
  }
  fVar1 = (float)((double)DAT_008777dc * dVar22) * fVar1;
  OrganicDeltAng
            ((float)dVar27,fVar1,fVar1,(float)(dVar25 * dVar29),&(moby->rotation).z,0x870000,
             (float *)((int)pvVar7 + 0x68));
  fVar1 = (float)((double)DAT_008777e0 * dVar22) * g_FrameTimeSq;
  OrganicDeltAng
            (*(float *)((int)pvVar7 + 0x68) * *(float *)((int)pvVar7 + 0x60) * DAT_008777e4,fVar1,
             fVar1,(float)((double)g_FrameTime * dVar29),&(moby->rotation).x,0x720000,
             (float *)((int)pvVar7 + 0x70));
  if (iVar20 == 0) {
    iVar12 = IsMobyPlayingSound(moby,*param_3);
    if (iVar12 == 0) {
      iVar12 = sound_MobyPlay_oClass(0,4,moby,0x330);
      *param_3 = iVar12;
    }
  }
  else {
    iVar12 = *param_3;
    if (((iVar12 != -1) && (g_SoundChannels[iVar12].pMoby == moby)) &&
       (g_SoundChannels[iVar12].state != '\0')) {
      sound_Kill(iVar12);
    }
    *param_3 = -1;
  }
  return iVar20;
}


// 0x046e420 (0x1170 bytes)
// inlined: FastAtan2 @0x46e80c, FastAtan2 @0x46ea20, FastAtan2 @0x46ed38, FastAtan2 @0x46ef4c
/* Moby 816 */

void UpdateMoby_816(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  ushort uVar9;
  void *pvVar10;
  Spline *pSVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  float fVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 in_r7;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar27;
  void *pvVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  double dVar36;
  float fVar37;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar21 = uVar16 - 0x1b0;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar16;
  puVar13[0x38] = in_LR;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x2f] = unaff_r31;
  MVar8 = moby->oClass;
  puVar13[0x2d] = unaff_r29;
  pvVar10 = moby->pVar;
  puVar13[0x2e] = unaff_r30;
  puVar13[0x2c] = unaff_r28;
  puVar13[0x2b] = unaff_r27;
  puVar13[0x2a] = unaff_r26;
  puVar13[0x29] = unaff_r25;
  if (MVar8 == TAXI_0330) {
    if (moby->state < 2 || 6 < moby->state) {
      uVar18 = 0;
    }
    else {
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 0;
  }
  FUN_004d407c(lVar17,uVar18);
  if (DAT_010d99d0 != 0) {
    iVar23 = *(int *)((int)pvVar10 + 0x94);
    iVar29 = 0;
    iVar22 = 0;
    if (0 < Splines[iVar23]->cnt) {
      iVar27 = 0;
      dVar35 = 0.3330000042915344;
      do {
        SpawnPart_41
                  ((float)dVar35,(int)&Splines[iVar23]->points[0].x + iVar27,moby,4,0x800000ff,in_r7
                   ,0x7f,2,0xff);
        iVar23 = *(int *)((int)pvVar10 + 0x94);
        iVar29 = iVar29 + 1;
        iVar27 = iVar27 + 0x10;
      } while (iVar29 < Splines[iVar23]->cnt);
    }
    iVar23 = *(int *)((int)pvVar10 + 0xa8);
    iVar29 = 0;
    if (0 < Splines[iVar23]->cnt) {
      iVar27 = 0;
      dVar35 = 0.3330000042915344;
      do {
        SpawnPart_41
                  ((float)dVar35,(int)&Splines[iVar23]->points[0].x + iVar27,moby,4,0x8000ff00,in_r7
                   ,0x7f,2,0xff);
        iVar23 = *(int *)((int)pvVar10 + 0xa8);
        iVar29 = iVar29 + 1;
        iVar27 = iVar27 + 0x10;
      } while (iVar29 < Splines[iVar23]->cnt);
    }
    iVar23 = *(int *)((int)pvVar10 + 0xbc);
    iVar29 = 0;
    if (0 < Splines[iVar23]->cnt) {
      dVar35 = 0.3330000042915344;
      do {
        SpawnPart_41
                  ((float)dVar35,(int)&Splines[iVar23]->points[0].x + iVar22,moby,4,0x80ff0000,in_r7
                   ,0x7f,2,0xff);
        iVar23 = *(int *)((int)pvVar10 + 0xbc);
        iVar29 = iVar29 + 1;
        iVar22 = iVar22 + 0x10;
      } while (iVar29 < Splines[iVar23]->cnt);
    }
  }
  dVar36 = (double)(moby->pos).x;
  dVar34 = (double)(moby->pos).y;
  dVar35 = (double)(moby->pos).z;
  fVar2 = (moby->rotation).y;
  *(f32 *)(puVar13 + 0xe) = (moby->rotation).x;
  fVar3 = (moby->rotation).z;
  *(f32 *)((int)puVar13 + 0x74) = fVar2;
  fVar2 = (moby->rotation).w;
  uVar1 = moby->state;
  *(f32 *)(puVar13 + 0xf) = fVar3;
  *(f32 *)((int)puVar13 + 0x7c) = fVar2;
  if (uVar1 == '\a') {
    iVar23 = M816_MoveAlongSpline
                       (moby,(longlong)
                             *(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xbc),
                        (int)pvVar10 + 0x78);
    if (iVar23 != 0) {
      moby->state = '\x01';
      moby->drawDistance = 0;
      moby->collision = (ushort *)0x0;
    }
  }
  else if (uVar1 == '\x06') {
    dVar32 = 0.01745329238474369;
    dVar31 = 0.0;
    dVar33 = 12.566370964050293;
    fVar37 = DAT_008777d8 * 0.017453292 * g_FrameTimeSq;
    OrganicDeltAng
              (0.0,fVar37,fVar37,g_FrameTime * 12.566371,&(moby->rotation).y,0x46e404,
               (float *)((int)pvVar10 + 0x6c));
    fVar37 = (float)((double)DAT_008777e0 * dVar32) * g_FrameTimeSq;
    OrganicDeltAng
              ((float)dVar31,fVar37,fVar37,(float)((double)g_FrameTime * dVar33),
               &(moby->rotation).x,0x870000,(float *)((int)pvVar10 + 0x70));
    fVar37 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    if ((*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xbc) == -1) ||
       (fVar5 = fVar4 - g_heroPosition.y, fVar6 = fVar37 - g_heroPosition.x,
       fVar7 = (moby->pos).z - g_heroPosition.z,
       SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <= 15.0)) {
      if ((*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xbc) == -1) &&
         (fVar4 = fVar4 - g_heroPosition.y, fVar37 = fVar37 - g_heroPosition.x,
         5.0 < SQRT(fVar37 * fVar37 + fVar4 * fVar4))) {
        moby->state = '\x01';
      }
    }
    else {
      moby->state = '\a';
      *(undefined4 *)((int)pvVar10 + 100) = 1;
    }
  }
  else if (uVar1 == '\x05') {
    pMVar15 = DAT_0096a1d8;
    if ((((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) ||
        (pMVar15 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar15 == moby)) {
      DAT_00969ed2 = 4;
      DAT_00969ed4 = 4;
    }
    iVar23 = M816_MoveAlongSpline
                       (moby,(longlong)
                             *(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xa8),
                        (int)pvVar10 + 0x78);
    if (iVar23 != 0) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    iVar23 = Hero_GetSpecialStateKind();
    if (iVar23 == 0) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    dVar32 = 0.01745329238474369;
    dVar31 = 0.0;
    dVar33 = 12.566370964050293;
    fVar37 = DAT_008777d8 * 0.017453292 * g_FrameTimeSq;
    OrganicDeltAng
              (0.0,fVar37,fVar37,g_FrameTime * 12.566371,&(moby->rotation).y,0x46e404,
               (float *)((int)pvVar10 + 0x6c));
    fVar37 = (float)((double)DAT_008777e0 * dVar32) * g_FrameTimeSq;
    fVar37 = OrganicDeltAng
                       ((float)dVar31,fVar37,fVar37,(float)((double)g_FrameTime * dVar33),
                        &(moby->rotation).x,0x870000,(float *)((int)pvVar10 + 0x70));
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      if (*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xd0) == 1) {
        lVar21 = 0xbc9;
        MB_ShowPersistentMessage((double)fVar37,8);
      }
      else {
        lVar21 = 0xbc9;
        MB_ShowPersistentMessage((double)fVar37,8);
      }
      if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_HelpMsgOwner == 8)) {
        Hero_WalkToPos((moby->rotation).z,&(moby->pos).x,lVar21,0);
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar10 + 100) = 1;
      }
    }
  }
  else if (uVar1 == '\x02') {
    if ((*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0x94) == -1) ||
       (iVar23 = M816_MoveAlongSpline
                           (moby,(longlong)
                                 *(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0x94),
                            (int)pvVar10 + 0x78), iVar23 != 0)) {
      moby->state = '\x03';
      *(undefined4 *)((int)pvVar10 + 0xe4) = 0xffffffff;
    }
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar10 + 0x7c) != 0) {
      iVar23 = 0;
      pvVar28 = pvVar10;
      do {
        if (((*(int *)((int)pvVar28 + 0x80) != -1) || (*(int *)((int)pvVar10 + 0x74) == iVar23)) &&
           ((iVar22 = MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar28 + 0x80)),
            iVar22 != 0 || (*(int *)((int)pvVar10 + 0x74) == iVar23)))) {
          iVar22 = *(int *)((int)pvVar10 + iVar23 * 4 + 0x94);
          moby->collision = moby->pClass->collision;
          if (iVar22 == -1) {
            iVar22 = *(int *)((int)pvVar10 + iVar23 * 4 + 0xa8);
            if (iVar22 != -1) {
              iVar29 = *(int *)((int)pvVar10 + iVar23 * 4 + 0xa8);
              pSVar11 = Splines[iVar22];
              fVar37 = pSVar11->points[0].x;
              (moby->pos).x = fVar37;
              fVar4 = pSVar11->points[0].y;
              (moby->pos).y = fVar4;
              pSVar12 = Splines[iVar29];
              (moby->pos).z = pSVar11->points[0].z;
              (moby->pos).w = pSVar11->points[0].w;
              fVar37 = pSVar12->points[1].x - fVar37;
              fVar4 = pSVar12->points[1].y - fVar4;
              fVar6 = ABS(fVar37);
              fVar5 = ABS(fVar4);
              *(float *)(puVar13 + 0x12) = fVar37;
              *(float *)((int)puVar13 + 0x94) = fVar4;
              *(float *)(puVar13 + 0x13) = fVar6 - fVar5;
              fVar37 = 0.0;
              uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar13 + 0x12));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar4 = fVar5;
              }
              fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
              fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
              fVar14 = ABS(*(float *)((int)puVar13 + 0x94));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar14 = fVar6;
              }
              if (0.0 < fVar4) {
                lVar20 = uVar16 - 0x1a0;
                lVar24 = uVar16 - 0xf0;
                lVar26 = uVar16 - 0xe0;
                lVar30 = 2;
                fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar13 + 0xcc) = fVar4;
                *(float *)((int)puVar13 + 0xc4) = fVar4;
                *(float *)(puVar13 + 0x19) = fVar4;
                *(float *)(puVar13 + 0x18) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar6;
                *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar4;
                *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xb0) * fVar4 * fVar4;
                  iVar22 = (int)lVar24;
                  lVar20 = lVar20 + 8;
                  lVar24 = lVar24 + 8;
                  *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                  lVar26 = lVar26 + 8;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
                lVar30 = 4;
                lVar26 = uVar16 - 0xf0;
                pfVar25 = (float *)&DAT_007358e0;
                lVar20 = lVar21;
                lVar24 = lVar26;
                do {
                  fVar4 = *pfVar25;
                  fVar6 = pfVar25[1];
                  pfVar25 = pfVar25 + 2;
                  *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xc0) * fVar4;
                  lVar20 = lVar20 + 8;
                  *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
                  lVar24 = lVar24 + 8;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
                lVar20 = 2;
                do {
                  iVar22 = (int)lVar21;
                  iVar29 = (int)lVar26;
                  lVar21 = lVar21 + 0x10;
                  lVar26 = lVar26 + 0x10;
                  fVar37 = fVar37 + *(float *)(iVar22 + 0xc0) + *(float *)(iVar29 + 4) +
                           *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
              }
              (moby->rotation).z = fVar37;
            }
          }
          else {
            iVar29 = *(int *)((int)pvVar10 + iVar23 * 4 + 0x94);
            pSVar11 = Splines[iVar22];
            fVar37 = pSVar11->points[0].x;
            (moby->pos).x = fVar37;
            fVar4 = pSVar11->points[0].y;
            (moby->pos).y = fVar4;
            pSVar12 = Splines[iVar29];
            (moby->pos).z = pSVar11->points[0].z;
            (moby->pos).w = pSVar11->points[0].w;
            fVar37 = pSVar12->points[1].x - fVar37;
            fVar4 = pSVar12->points[1].y - fVar4;
            fVar6 = ABS(fVar37);
            fVar5 = ABS(fVar4);
            *(float *)((int)puVar13 + 0x9c) = fVar37;
            *(float *)(puVar13 + 0x14) = fVar4;
            *(float *)((int)puVar13 + 0xa4) = fVar6 - fVar5;
            fVar37 = 0.0;
            uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
            fVar4 = ABS(*(float *)((int)puVar13 + 0x9c));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar4 = fVar5;
            }
            fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
            fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
            fVar14 = ABS(*(float *)(puVar13 + 0x14));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar14 = fVar6;
            }
            if (0.0 < fVar4) {
              lVar20 = uVar16 - 0x1a0;
              lVar26 = uVar16 - 0xc0;
              lVar24 = uVar16 - 0xd0;
              lVar30 = 2;
              fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
              fVar6 = fVar4 * fVar4;
              *(float *)((int)puVar13 + 0xec) = fVar4;
              *(float *)((int)puVar13 + 0xe4) = fVar4;
              *(float *)(puVar13 + 0x1d) = fVar4;
              *(float *)(puVar13 + 0x1c) = fVar4;
              fVar4 = fVar6 * fVar6;
              *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar6;
              *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar4;
              *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar4 * fVar6;
              do {
                *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xd0) * fVar4 * fVar4;
                iVar22 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                lVar26 = lVar26 + 8;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              lVar30 = 4;
              lVar26 = uVar16 - 0xd0;
              pfVar25 = (float *)&DAT_007358e0;
              lVar20 = lVar21;
              lVar24 = lVar26;
              do {
                fVar4 = *pfVar25;
                fVar6 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xe0) * fVar4;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
                lVar24 = lVar24 + 8;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              lVar20 = 2;
              do {
                iVar22 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                iVar29 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                fVar37 = fVar37 + *(float *)(iVar22 + 0xe0) + *(float *)(iVar29 + 4) +
                         *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
            }
            (moby->rotation).z = fVar37;
          }
          moby->state = '\x02';
          moby->setByGroup = (char)iVar23;
          fVar4 = DAT_008777d0;
          fVar37 = g_FrameTime;
          moby->drawDistance = 0x80;
          *(undefined4 *)((int)pvVar10 + 100) = 1;
          *(undefined4 *)((int)pvVar10 + 0x74) = 0xffffffff;
          *(float *)((int)pvVar10 + 0x60) = fVar4 * fVar37;
          break;
        }
        iVar23 = iVar23 + 1;
        pvVar28 = (void *)((int)pvVar28 + 4);
      } while (iVar23 < 5);
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar10 + 0x94) == -1) {
      if (*(int *)((int)pvVar10 + 0xa8) != -1) {
        iVar23 = *(int *)((int)pvVar10 + 0xa8);
        pSVar11 = Splines[*(int *)((int)pvVar10 + 0xa8)];
        fVar37 = pSVar11->points[0].x;
        (moby->pos).x = fVar37;
        fVar4 = pSVar11->points[0].y;
        (moby->pos).y = fVar4;
        pSVar12 = Splines[iVar23];
        (moby->pos).z = pSVar11->points[0].z;
        (moby->pos).w = pSVar11->points[0].w;
        fVar37 = pSVar12->points[1].x - fVar37;
        fVar4 = pSVar12->points[1].y - fVar4;
        fVar6 = ABS(fVar37);
        fVar5 = ABS(fVar4);
        *(float *)(puVar13 + 0x15) = fVar37;
        *(float *)((int)puVar13 + 0xac) = fVar4;
        *(float *)(puVar13 + 0x16) = fVar6 - fVar5;
        fVar37 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar13 + 0x15));
        if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
          fVar4 = fVar5;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        fVar14 = ABS(*(float *)((int)puVar13 + 0xac));
        if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
          fVar14 = fVar6;
        }
        if (0.0 < fVar4) {
          lVar20 = uVar16 - 0x1a0;
          lVar24 = uVar16 - 0xb0;
          lVar26 = uVar16 - 0xa0;
          lVar30 = 2;
          fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x10c) = fVar4;
          *(float *)((int)puVar13 + 0x104) = fVar4;
          *(float *)(puVar13 + 0x21) = fVar4;
          *(float *)(puVar13 + 0x20) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar6;
          *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar4;
          *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0xf0) * fVar4 * fVar4;
            iVar23 = (int)lVar24;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar16 - 0xb0;
          pfVar25 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar24 = lVar26;
          do {
            fVar4 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0x100) * fVar4;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar20 = 2;
          do {
            iVar23 = (int)lVar21;
            iVar22 = (int)lVar26;
            lVar21 = lVar21 + 0x10;
            lVar26 = lVar26 + 0x10;
            fVar37 = fVar37 + *(float *)(iVar23 + 0x100) + *(float *)(iVar22 + 4) +
                     *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
        }
        (moby->rotation).z = fVar37;
      }
    }
    else {
      iVar23 = *(int *)((int)pvVar10 + 0x94);
      pSVar11 = Splines[*(int *)((int)pvVar10 + 0x94)];
      fVar37 = pSVar11->points[0].x;
      (moby->pos).x = fVar37;
      fVar4 = pSVar11->points[0].y;
      (moby->pos).y = fVar4;
      pSVar12 = Splines[iVar23];
      (moby->pos).z = pSVar11->points[0].z;
      (moby->pos).w = pSVar11->points[0].w;
      fVar37 = pSVar12->points[1].x - fVar37;
      fVar4 = pSVar12->points[1].y - fVar4;
      fVar6 = ABS(fVar37);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar13 + 0xb4) = fVar37;
      *(float *)(puVar13 + 0x17) = fVar4;
      *(float *)((int)puVar13 + 0xbc) = fVar6 - fVar5;
      fVar37 = 0.0;
      uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xbc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)((int)puVar13 + 0xbc) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar13 + 0x17));
      if (*(float *)((int)puVar13 + 0xbc) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar20 = uVar16 - 0x1a0;
        lVar26 = uVar16 - 0x80;
        lVar24 = uVar16 - 0x90;
        lVar30 = 2;
        fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 300) = fVar4;
        *(float *)((int)puVar13 + 0x124) = fVar4;
        *(float *)(puVar13 + 0x25) = fVar4;
        *(float *)(puVar13 + 0x24) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x124) = *(float *)((int)puVar13 + 0x124) * fVar6;
        *(float *)(puVar13 + 0x25) = *(float *)(puVar13 + 0x25) * fVar4;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x110) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar26 = uVar16 - 0x90;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x120) * fVar4;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar20 = 2;
        do {
          iVar23 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          fVar37 = fVar37 + *(float *)(iVar23 + 0x120) + *(float *)(iVar22 + 4) +
                   *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
      }
      (moby->rotation).z = fVar37;
    }
    moby->updateDistance = -1;
    uVar9 = moby->uid;
    moby->drawDistance = 0;
    *(undefined4 *)((int)pvVar10 + 0x74) = 0xffffffff;
    moby->collision = (ushort *)0x0;
    moby->state = '\x01';
    if (((&g_Checkpoint.objState[0])[(short)uVar9] != '\0') ||
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar9 >> 5) << 2)) &
        1 << (uVar9 & 0x1f)) != 0)) {
      DeleteMoby(moby);
      return;
    }
  }
  dVar33 = 0.01745329238474369;
  pvVar28 = moby->pVar;
  MB_BobMotion
            (DAT_008777bc,DAT_008777c0 * 0.017453292 * g_FrameTime,moby,
             (float *)((int)pvVar28 + 0xec),(float *)((int)pvVar28 + 0xe8));
  MB_SwingMotion
            ((double)DAT_008777c4,
             (double)((float)((double)DAT_008777c8 * dVar33) * g_FrameTime),
             (double)((float)((double)DAT_008777cc * dVar33) * g_FrameTime),lVar17,
             ZEXT48(pvVar28) + 0xf0,ZEXT48(pvVar28) + 0xf4);
  fVar37 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  *(f32 *)((int)puVar13 + 0x8c) = (moby->pos).w;
  *(float *)(puVar13 + 0x10) = (float)((double)fVar37 - dVar36);
  *(float *)((int)puVar13 + 0x84) = (float)((double)fVar4 - dVar34);
  *(float *)(puVar13 + 0x11) = (float)((double)fVar6 - dVar35);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar13 + 0x10),uVar16 - 0x140,
             lVar17 + 0x40);
  return;
}


