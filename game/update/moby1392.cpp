// game/update/moby1392.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x268a34-0x269d04
#include "game/update/moby1392.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1357.h"
#include "game/update/moby566.h"
#include "game/update/moby587.h"
#include "idol/fastfunc.h"

// 0x0268a34 (0x4 bytes)
void M1392_00268a34(void)

{
  return;
}


// 0x0268a48 (0x148 bytes)
undefined8 M1392_00268a48(double param_1,int param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float target;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_40 [2];
  
  dVar9 = (double)(param_3[1] - *(float *)(param_2 + 0x14));
  dVar8 = (double)(*param_3 - *(float *)(param_2 + 0x10));
  dVar6 = 0.0;
  local_40[0] = 0.0;
  target = SQRT((float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9)));
  dVar7 = (double)target;
  iVar1 = *(int *)(param_2 + 0x78);
  OrganicDelt
            (target,g_FrameTimeSq * 10.0,g_FrameTimeSq * 10.0,(float)param_1,local_40,0,
             (float *)(iVar1 + 0x324));
  dVar4 = (double)(float)((double)*(float *)(iVar1 + 0x324) / dVar7);
  dVar9 = (double)(float)(dVar9 * dVar4);
  dVar8 = (double)(float)(dVar8 * dVar4);
  dVar4 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar4 = dVar9;
  }
  dVar5 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar5 = dVar8;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar4 = dVar9;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar5 = dVar8;
  }
  *(float *)(param_2 + 0x14) = (float)((double)*(float *)(param_2 + 0x14) + dVar4);
  *(float *)(param_2 + 0x10) = (float)((double)*(float *)(param_2 + 0x10) + dVar5);
  if ((0.10000000149011612 <= dVar7) ||
     (uVar2 = (int)*(uint *)(iVar1 + 0x324) >> 0x1f,
     0x3dcccccc < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x324)) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// 0x0268ba0 (0x1b4 bytes)
void M1392_00268ba0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  Vec4 local_30;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x2f4);
  local_30.x = g_heroPosition.x - Cuboids[iVar2].pos.x;
  local_30.y = g_heroPosition.y - Cuboids[iVar2].pos.y;
  local_30.w = g_heroPosition.w;
  local_30.z = 0.0;
  if (g_heroStateType == 0xf) {
    ClampVec3Magnitude((double)DAT_0079ca28,&local_30);
  }
  else {
    ClampVec3Magnitude((double)DAT_0079ca24,&local_30);
  }
  iVar1 = *(int *)(iVar1 + 0x2f4);
  local_30.x = local_30.x + Cuboids[iVar1].pos.x;
  fVar3 = *(float *)(param_1 + 0x10) - local_30.x;
  local_30.y = local_30.y + Cuboids[iVar1].pos.y;
  fVar4 = *(float *)(param_1 + 0x14) - local_30.y;
  local_30.z = local_30.z + Cuboids[iVar1].pos.z;
  dVar6 = (double)(g_FrameTime * 20.0);
  dVar5 = (double)(g_FrameTime * 6.0 *
                   ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) - DAT_0079ca04) / DAT_0079ca04) +
                  DAT_00969e40);
  if ((dVar5 <= dVar6) && (dVar6 = dVar5, dVar5 < (double)(g_FrameTime * 5.0))) {
    dVar6 = (double)(g_FrameTime * 5.0);
  }
  M1392_00268a48(dVar6,param_1,&local_30);
  return;
}


// 0x0268d90 (0x670 bytes)
// inlined: FastAtan2 @0x268eac, FastAtan2 @0x269048
void M1392_00268d90(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x110;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x24] = in_LR;
  puVar12[0x1f] = in_f29;
  puVar12[0x20] = in_f30;
  puVar12[0x21] = in_f31;
  puVar12[0x1e] = unaff_r31;
  puVar12[0x1c] = unaff_r29;
  puVar12[0x1d] = unaff_r30;
  iVar10 = *(int *)(param_1 + 0x78);
  iVar11 = *(int *)(iVar10 + 0x2f4);
  fVar2 = Cuboids[iVar11].pos.x;
  fVar3 = Cuboids[iVar11].pos.y;
  fVar4 = g_heroPosition.x - fVar2;
  fVar7 = g_heroPosition.y - fVar3;
  fVar8 = ABS(fVar4);
  fVar5 = ABS(fVar7);
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  *(float *)(puVar12 + 0x12) = fVar7;
  *(float *)((int)puVar12 + 0x94) = fVar8 - fVar5;
  dVar28 = 0.0;
  uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar7 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar14 = ABS(*(float *)(puVar12 + 0x12));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar14 = fVar8;
  }
  dVar26 = dVar28;
  if (0.0 < fVar7) {
    lVar17 = uVar16 - 0x100;
    lVar19 = uVar16 - 0x58;
    lVar20 = uVar16 - 0x48;
    lVar23 = 2;
    fVar7 = (fVar14 - fVar7) / (fVar14 + fVar7);
    fVar8 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0xc4) = fVar7;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)(puVar12 + 0x18) = fVar7;
    *(float *)(puVar12 + 0x17) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar8;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar7;
    *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar7 * fVar7;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x58;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar7 = *pfVar21;
      fVar8 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xb8) * fVar7;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar13 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xb8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar9 + fVar5);
  }
  fVar4 = fVar4 - fVar2;
  fVar6 = fVar6 - fVar3;
  fVar7 = ABS(fVar4);
  fVar3 = ABS(fVar6);
  *(float *)(puVar12 + 0x10) = fVar4;
  *(float *)((int)puVar12 + 0x84) = fVar6;
  *(float *)(puVar12 + 0x11) = fVar7 - fVar3;
  uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x10));
  if (*(float *)(puVar12 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar4 = ABS(*(float *)((int)puVar12 + 0x84));
  if (*(float *)(puVar12 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  fVar7 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar27 = dVar28;
  if (0.0 < fVar2) {
    lVar17 = uVar16 - 0x100;
    lVar20 = uVar16 - 0x68;
    lVar19 = uVar16 - 0x78;
    lVar23 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)((int)puVar12 + 0xa4) = fVar2;
    *(float *)((int)puVar12 + 0x9c) = fVar2;
    *(float *)(puVar12 + 0x14) = fVar2;
    *(float *)(puVar12 + 0x13) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar4;
    *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2;
    *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x88) * fVar2 * fVar2;
      iVar11 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x78;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar2 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    do {
      iVar11 = (int)lVar18;
      iVar13 = (int)lVar20;
      lVar18 = lVar18 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar11 + 0x98)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar7);
  }
  dVar24 = (double)FastDiffRots(dVar27,dVar26);
  if (dVar28 <= dVar24) {
    uVar25 = FastWrapRot((float)dVar26,2.3561945);
  }
  else {
    uVar25 = FastWrapRot((float)dVar26,-2.3561945);
  }
  dVar26 = (double)FastDiffRots(uVar25,dVar27);
  dVar28 = 0.1745329201221466;
  if ((dVar26 <= 0.1745329201221466) && (dVar28 = dVar26, dVar26 < -0.1745329201221466)) {
    dVar28 = -0.1745329201221466;
  }
  dVar26 = (double)FastWrapRot((float)dVar28,(float)dVar27);
  pCVar15 = Cuboids;
  fVar3 = DAT_0079ca20;
  fVar4 = DAT_0079ca1c;
  fVar2 = (float)(dVar26 + 1.570796251296997);
  dVar28 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar28 = dVar26;
  }
  fVar7 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar7 = fVar2;
  }
  dVar27 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar28 < 0.0) {
    dVar27 = dVar28;
  }
  fVar5 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x14);
  fVar6 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
    fVar6 = fVar7;
  }
  dVar28 = (double)(float)(dVar27 * dVar27);
  fVar9 = fVar6 * fVar6;
  fVar2 = fVar9 * fVar9 * fVar6;
  fVar7 = fVar9 * fVar2;
  fVar2 = fVar9 * fVar7 * 2.601887e-06 +
          fVar7 * -0.0001980741 + fVar2 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6;
  if (*(char *)(param_1 + 0x20) == '\x02') {
    fVar2 = fVar2 * DAT_0079ca1c;
    *(float *)(puVar12 + 0xe) = fVar2;
    fVar3 = fVar4;
  }
  else {
    fVar2 = fVar2 * DAT_0079ca20;
    *(float *)(puVar12 + 0xe) = fVar2;
  }
  dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
  iVar10 = *(int *)(iVar10 + 0x2f4);
  *(undefined4 *)(puVar12 + 0xf) = 0;
  dVar26 = (double)(float)(dVar28 * dVar24);
  bVar1 = g_heroStateType == 0xf;
  fVar3 = ((float)(dVar28 * dVar26) * 2.601887e-06 +
          (float)(dVar26 * -0.0001980741071747616 +
                 (double)(float)(dVar24 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar28 * dVar27) *
                                                -0.16666656732559204 + dVar27)))) * fVar3;
  *(float *)((int)puVar12 + 0x74) = fVar3;
  *(float *)(puVar12 + 0xe) = fVar2 + pCVar15[iVar10].pos.x;
  *(float *)((int)puVar12 + 0x74) = fVar3 + pCVar15[iVar10].pos.y;
  *(float *)(puVar12 + 0xf) = pCVar15[iVar10].pos.z;
  if (bVar1) {
    fVar2 = 20.0;
  }
  else {
    fVar8 = fVar8 - g_heroPosition.y;
    fVar5 = fVar5 - g_heroPosition.x;
    fVar2 = SQRT(fVar5 * fVar5 + fVar8 * fVar8);
    fVar3 = DAT_0079ca10;
    if ((fVar2 <= DAT_0079ca10) && (fVar3 = fVar2, fVar2 < DAT_0079ca14)) {
      fVar3 = DAT_0079ca14;
    }
    fVar2 = (DAT_0079ca08 - DAT_0079ca0c) *
            (1.0 - (fVar3 - DAT_0079ca14) / (DAT_0079ca10 - DAT_0079ca14)) + DAT_0079ca0c;
  }
  M1392_00268a48((double)(g_FrameTime * fVar2),param_1,uVar16 - 0xa0);
  return;
}


// 0x0269420 (0x36c bytes)
ulonglong M1392_00269420(int param_1)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  int iVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<40> local_a0;
  
  puVar7 = (ushort *)(&g_MobyGroups)[*(int *)(*(int *)(param_1 + 0x78) + 0x348)];
  if (puVar7 == (ushort *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    dVar10 = 60.5;
    dVar11 = 0.5;
    dVar12 = 0.5235987901687622;
    uVar13 = 0x3fe921fb60000000;
    dVar14 = 0.3490658402442932;
    do {
      uVar1 = *puVar7;
      if (g_MobyInstance[uVar1 & 0x7fff].oClass == FLOATING_PLATFORM_024B) {
        iVar5 = M587_003d5518(g_MobyInstance + (uVar1 & 0x7fff));
        pMVar6 = g_MobyInstance + (uVar1 & 0x7fff);
        fVar2 = (pMVar6->pos).y - g_heroPosition.y;
        fVar3 = (pMVar6->pos).x - g_heroPosition.x;
        uVar4 = ZERO_MASK(iVar5) & uVar4;
        if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) < DAT_0079c9f0) &&
           (iVar5 = M587_003d5544(pMVar6,(int)((double)animationSpeed * dVar10),
                                  (int)((double)animationSpeed *
                                       (double)(float)((double)(longlong)DAT_0079c9f4 + dVar11))),
           iVar5 != 0)) {
          uVar8 = MB_randRangeSigned(dVar12,uVar13);
          dVar9 = (double)MB_randRangeFloat((float)dVar14,(float)dVar12);
          FUN_003bb4a8(uVar8,-dVar9,local_c0,local_b0,local_a0);
        }
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return uVar4;
}


// 0x0269790 (0x1a0 bytes)
int M1392_00269790
              (int param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  byte in_cr6;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar11;
  
  puVar3 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x30);
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  uVar1 = *(uint *)(param_1 + 0x78);
  puVar6 = &DAT_0026978c;
  iVar7 = 0;
  auVar11 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x30,0x26978c);
  iVar8 = *(int *)(uVar1 + 0x300);
  auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  do {
    if (99 < iVar7) {
      return iVar8;
    }
    lVar4 = MB_randInt(6,puVar6,param_3,param_4);
    param_4 = 0x30c;
    iVar5 = (int)lVar4;
    auVar9 = loadVectorLeftIndexed(0x2fc,(ulonglong)uVar1);
    auVar10 = loadVectorRightIndexed(0x30c,(ulonglong)uVar1);
    if (iVar5 == 5) {
      iVar8 = 0x10;
    }
    else if (iVar5 == 4) {
      iVar8 = 0xf;
    }
    else if (iVar5 == 3) {
      iVar8 = 0xe;
    }
    else if (iVar5 == 2) {
      iVar8 = 0xd;
    }
    else if (iVar5 == 1) {
      iVar8 = 0xc;
    }
    else if (iVar5 == 0) {
      iVar8 = 0xb;
    }
    param_3 = (ulonglong)*(uint *)(uVar1 + 0x2fc) * 2;
    puVar6 = (undefined *)
             (int)*(short *)((int)(lVar4 << 1) + 0x79c9a0 +
                            (int)((ulonglong)*(uint *)(uVar1 + 0x2fc) * 3) * 4);
    if ((iVar8 == 0xd) && (*(int *)(uVar1 + 0x300) == 0xd)) {
      puVar6 = (undefined *)0x0;
    }
    if (iVar8 == 0xd) {
      uVar2 = (int)*(uint *)(uVar1 + 0x340) >> 0x1f;
      param_4 = (longlong)(int)uVar2;
      param_3 = (ulonglong)(uVar2 >> 1 ^ *(uint *)(uVar1 + 0x340)) - param_4;
      if (0x41c7ffff < (int)param_3) {
        auVar9 = vectorConvertFromSignedFixedPointWord(auVar9 | auVar10,0);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11);
        if ((bool)(in_cr6 >> 1 & 1)) {
          puVar6 = (undefined *)0x0;
        }
      }
    }
    if ((iVar8 == 0x10) && (*(int *)(uVar1 + 0x314) != 0)) {
      puVar6 = (undefined *)0x0;
    }
    iVar7 = iVar7 + 1;
  } while (puVar6 == (undefined *)0x0);
  return iVar8;
}


// 0x0269938 (0x208 bytes)
double M1392_00269938(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  Cuboid *unused;
  double dVar7;
  float fVar8;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar3 = *(int *)(ImportCameras + *(int *)(iVar2 + 0x1e4) * 0x20 + 0x1c);
  FastDecTimerS32(iVar2 + 0x310);
  unused = (Cuboid *)&DAT_007a0000;
  cVar1 = *(char *)(param_1 + 0x20);
  dVar7 = (double)DAT_0079ca40;
  fVar8 = DAT_0079ca3c;
  if ((cVar1 == '\x10') || (cVar1 == '\r')) {
    if ((((g_heroStateType == 0xf) || (g_heroState == GRINDRAIL_DAMAGE)) &&
        (*(int *)(iVar2 + 0x314) == 0)) &&
       ((uVar4 = (int)*(uint *)(iVar2 + 0x340) >> 0x1f,
        (int)((uVar4 >> 1 ^ *(uint *)(iVar2 + 0x340)) - uVar4) < 0x41c80001 &&
        (*(int *)(iVar2 + 0x310) == 0)))) {
      unused = (Cuboid *)&DAT_007a0000;
      dVar7 = (double)DAT_0079ca48;
      fVar8 = DAT_0079ca44;
    }
    else {
      unused = Cuboids + *(int *)(iVar2 + 0x2f4);
      fVar5 = g_heroPosition.y - (unused->pos).y;
      fVar6 = g_heroPosition.x - (unused->pos).x;
      if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 28.0) {
        unused = (Cuboid *)&DAT_007a0000;
        dVar7 = (double)DAT_0079ca50;
        fVar8 = DAT_0079ca4c;
      }
    }
  }
  else if ((cVar1 == '\a') || (cVar1 == '\x05')) {
    unused = (Cuboid *)&DAT_007a0000;
    dVar7 = (double)DAT_0079ca58;
    fVar8 = DAT_0079ca54;
  }
  OrganicDelt
            (fVar8,DAT_0079ca38 * g_FrameTimeSq,DAT_0079ca38 * g_FrameTimeSq,
             DAT_0079ca34 * g_FrameTime,(float *)(iVar3 + 0x34),(int)unused,
             (float *)(iVar2 + 0x328));
  fVar8 = OrganicDelt
                    ((float)dVar7,DAT_0079ca38 * g_FrameTimeSq,DAT_0079ca38 * g_FrameTimeSq,
                     DAT_0079ca34 * g_FrameTime,(float *)(iVar3 + 0x38),(int)unused,
                     (float *)(iVar2 + 0x32c));
  return (double)fVar8;
}


// 0x0269b40 (0x14 bytes)
void M1392_00269b40(void)

{
  DAT_0079caa8 = 0x10000;
  return;
}


// 0x0269b60 (0x1a4 bytes)
/* Moby 1392 */

void UpdateMoby_1392(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    piVar2[3] = 0x3f800000;
  }
  else if (bVar1 < 2) {
    RegisterFuncForMoby(&PTR_M1394_00269d18_0070a2e0,moby);
    iVar3 = IsMobyPlayingSound(moby,piVar2[1]);
    if (iVar3 == 0) {
      iVar3 = PlayMobySound(0,4,moby);
      piVar2[1] = iVar3;
    }
    iVar3 = *piVar2;
    if (((iVar3 != -1) && (g_MobyInstance[iVar3].oClass == TRESSPASSER_PAD)) &&
       (2 < g_MobyInstance[iVar3].state)) {
      moby->state = '\x02';
      iVar3 = piVar2[1];
      moby->collision = (ushort *)0x0;
      iVar3 = IsMobyPlayingSound(moby,iVar3);
      if (iVar3 != 0) {
        iVar3 = piVar2[1];
        if (((iVar3 != -1) && (g_SoundChannels[iVar3].pMoby == moby)) &&
           (g_SoundChannels[iVar3].state != '\0')) {
          sound_Kill(iVar3);
        }
        piVar2[1] = -1;
      }
    }
  }
  else if (bVar1 < 3) {
    Delt(0.0,g_FrameTime * 2.0,(float *)(piVar2 + 3));
  }
  return;
}


