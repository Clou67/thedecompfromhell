// game/update/moby1766.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2b3468-0x2b4794
#include "game/update/moby1766.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x02b3468 (0x264 bytes)
void M1766_002b3468(void)

{
  float fVar1;
  int rgb;
  ulonglong *puVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong unaff_r22;
  int iVar8;
  ulonglong unaff_r23;
  longlong lVar9;
  ulonglong unaff_r24;
  longlong lVar10;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  float *pfVar11;
  ulonglong unaff_r27;
  undefined4 *puVar12;
  ulonglong unaff_r28;
  int *piVar13;
  ulonglong unaff_r29;
  undefined4 *puVar15;
  longlong lVar14;
  ulonglong unaff_r30;
  undefined4 *puVar16;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  double dVar18;
  ulonglong in_f31;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar9 = uVar5 - 0x1a0;
  puVar2 = (ulonglong *)lVar9;
  *puVar2 = uVar5;
  puVar2[0x36] = in_LR;
  puVar2[0x33] = in_f31;
  puVar2[0x32] = unaff_r31;
  uVar3 = DAT_007b7620;
  puVar2[0x31] = unaff_r30;
  puVar2[0x30] = unaff_r29;
  puVar2[0x2f] = unaff_r28;
  puVar2[0x2e] = unaff_r27;
  puVar2[0x2d] = unaff_r26;
  puVar2[0x2c] = unaff_r25;
  puVar2[0x2b] = unaff_r24;
  puVar2[0x2a] = unaff_r23;
  puVar2[0x29] = unaff_r22;
  uVar6 = GetEffectTex(uVar3);
  puVar2[0x25] = uVar6;
  uVar6 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar6;
  uVar6 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar2[0x24] = uVar6;
  uVar6 = idol_draw::PackCmd(DAT_010a0230,DAT_007b7624,DAT_010a0234,DAT_007b7628,0x80);
  puVar2[0x27] = uVar6;
  dVar18 = (double)MB_randRangeFloat(0.0,1.0);
  lVar17 = uVar5 - 0xf0;
  iVar8 = 0;
  pfVar11 = (float *)&DAT_007b76c0;
  puVar12 = &DAT_007b76c4;
  piVar13 = &DAT_007b76b0;
  puVar16 = &DAT_007b7630;
  lVar10 = lVar9;
  lVar14 = lVar17;
  do {
    fVar1 = *pfVar11;
    rgb = *piVar13;
    *(undefined4 *)((int)lVar9 + 0x104) = *puVar12;
    bVar4 = g_goldWeaponsArray.pyrocitor;
    *(int *)((int)lVar10 + 0xf0) = rgb;
    *(float *)((int)lVar9 + 0x100) = (float)((double)fVar1 + dVar18);
    ReorderRGB(rgb,(uint)bVar4);
    iVar8 = iVar8 + 1;
    pfVar11 = pfVar11 + 2;
    puVar15 = (undefined4 *)lVar14;
    *puVar15 = *puVar16;
    puVar12 = puVar12 + 2;
    puVar15[1] = puVar16[1];
    piVar13 = piVar13 + 1;
    lVar9 = lVar9 + 8;
    puVar15[2] = puVar16[2];
    puVar7 = puVar16 + 3;
    lVar10 = lVar10 + 4;
    puVar16 = puVar16 + 4;
    puVar15[3] = *puVar7;
    lVar14 = lVar14 + 0x10;
  } while (iVar8 < 4);
  FastDrawQuad(uVar5 - 0xf0,uVar5 - 0x130,0,EffectTexHeaders,9);
  uVar3 = EffectTexHeaders;
  puVar12 = &DAT_007b7670;
  lVar9 = 4;
  do {
    puVar7 = (undefined4 *)lVar17;
    *puVar7 = *puVar12;
    puVar7[1] = puVar12[1];
    puVar7[2] = puVar12[2];
    puVar16 = puVar12 + 3;
    puVar12 = puVar12 + 4;
    puVar7[3] = *puVar16;
    lVar17 = lVar17 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FastDrawQuad(uVar5 - 0xf0,0,0,uVar3,9);
  return;
}


// 0x02b36cc (0x14 bytes)
void M1766_002b36cc(void)

{
  DAT_007b772c = 0x10000;
  return;
}


// 0x02b36e0 (0x68 bytes)
void M1766_002b36e0
               (double param_1,undefined8 param_2,double param_3,float *param_4)

{
  double dVar1;
  
  dVar1 = (double)FastDiffRots(param_2,param_1);
  *param_4 = (float)(dVar1 * param_3);
  dVar1 = (double)FastWrapRot((float)(dVar1 * param_3),(float)param_1);
  *param_4 = (float)dVar1;
  return;
}


// 0x02b3778 (0x720 bytes)
// inlined: FastAtan2 @0x2b3970
undefined8 M1766_002b3778(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  Vec4 *pVVar15;
  ulonglong uVar16;
  longlong lVar17;
  int32_t iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  short sVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined8 uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  undefined8 uVar28;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar17 = uVar16 - 0x120;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar16;
  puVar12[0x26] = in_LR;
  puVar12[0x1d] = in_f25;
  puVar12[0x1e] = in_f26;
  puVar12[0x1f] = in_f27;
  puVar12[0x20] = in_f28;
  puVar12[0x21] = in_f29;
  puVar12[0x22] = in_f30;
  puVar12[0x23] = in_f31;
  puVar12[0x18] = unaff_r27;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar12[0x19] = unaff_r28;
  pSVar11 = Splines[*(int *)(iVar10 + 0xac)];
  iVar19 = (int)((longlong)*(short *)(iVar10 + 0xba) << 4);
  fVar4 = *(float *)(iVar10 + 0xa8);
  *(float *)(iVar10 + 0xcc) = *(float *)(iVar10 + 0xcc) * -0.005 + *(float *)(iVar10 + 0xcc);
  dVar33 = (double)*(float *)((int)&pSVar11->points[0].y + iVar19);
  fVar5 = *(float *)(param_1 + 0x14);
  dVar32 = (double)*(float *)((int)&pSVar11->points[0].x + iVar19);
  fVar1 = (float)(dVar33 - (double)fVar5);
  fVar6 = *(float *)(param_1 + 0x10);
  dVar34 = (double)(fVar4 * DAT_007b775c + *(float *)((int)&pSVar11->points[0].z + iVar19));
  fVar7 = *(float *)(param_1 + 0x18);
  fVar2 = (float)(dVar32 - (double)fVar6);
  dVar35 = 0.0;
  fVar3 = (float)(dVar34 - (double)fVar7);
  dVar36 = (double)*(float *)(param_1 + 0x48);
  iVar19 = (int)((longlong)*(short *)(iVar10 + 0xba) << 4);
  puVar12[0x1c] = unaff_r31;
  fVar13 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  puVar12[0x1a] = unaff_r29;
  uVar26 = 0;
  puVar12[0x1b] = unaff_r30;
  fVar4 = fVar4 / fVar13;
  dVar29 = dVar35;
  if (0.0 - fVar13 < 0.0) {
    dVar29 = (double)(fVar3 * fVar4);
  }
  dVar30 = dVar35;
  if (0.0 - fVar13 < 0.0) {
    dVar30 = (double)(fVar1 * fVar4);
  }
  dVar31 = dVar35;
  if (0.0 - fVar13 < 0.0) {
    dVar31 = (double)(fVar2 * fVar4);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar29 = (double)(fVar3 * fVar4);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar30 = (double)(fVar1 * fVar4);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar31 = (double)(fVar2 * fVar4);
  }
  fVar1 = (float)((double)fVar5 + dVar30);
  fVar2 = (float)((double)fVar6 + dVar31);
  *(float *)(param_1 + 0x18) = (float)((double)fVar7 + dVar29);
  *(float *)(param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar19) - fVar2;
  fVar1 = *(float *)((int)&pSVar11->points[0].y + iVar19) - fVar1;
  fVar4 = ABS(fVar2);
  fVar3 = ABS(fVar1);
  *(float *)(puVar12 + 0x11) = fVar2;
  *(float *)((int)puVar12 + 0x8c) = fVar1;
  *(float *)(puVar12 + 0x12) = fVar4 - fVar3;
  fVar1 = *(float *)(iVar10 + 0xbc);
  uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = dVar35;
  if (0.0 < fVar2) {
    lVar24 = uVar16 - 0x110;
    lVar21 = uVar16 - 0x7c;
    lVar22 = uVar16 - 0x8c;
    lVar27 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x14) = fVar2;
    *(float *)(puVar12 + 0x13) = fVar2;
    *(float *)((int)puVar12 + 0x9c) = fVar2;
    *(float *)((int)puVar12 + 0x94) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar5;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
    *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar24 + 0x94) = *(float *)((int)lVar24 + 0x84) * fVar2 * fVar2;
      iVar19 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar24 = uVar16 - 0x8c;
    lVar27 = 4;
    pfVar25 = (float *)&DAT_007358e0;
    lVar21 = lVar24;
    lVar22 = lVar17;
    do {
      fVar2 = *pfVar25;
      fVar5 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar22 + 0x94) = *(float *)((int)lVar22 + 0x94) * fVar2;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    do {
      iVar19 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar14 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
  }
  uVar28 = FastWrapRot((float)dVar29,fVar1);
  dVar31 = 0.019999999552965164;
  dVar30 = (double)((1.0 - *(float *)(iVar10 + 0xcc)) * 0.02);
  dVar29 = (double)FastDiffRots(uVar28,dVar36);
  *(float *)(param_1 + 0x48) = (float)(dVar29 * dVar30);
  dVar29 = (double)FastWrapRot((float)(dVar29 * dVar30),(float)dVar36);
  *(float *)(param_1 + 0x48) = (float)dVar29;
  dVar36 = (double)*(float *)(param_1 + 0x40);
  dVar29 = (double)FastDiffRots(dVar35,dVar36);
  *(float *)(param_1 + 0x40) = (float)(dVar29 * dVar31);
  dVar29 = (double)FastWrapRot((float)(dVar29 * dVar31),(float)dVar36);
  *(float *)(param_1 + 0x40) = (float)dVar29;
  dVar36 = (double)*(float *)(param_1 + 0x44);
  dVar29 = (double)FastDiffRots(dVar35,dVar36);
  *(float *)(param_1 + 0x44) = (float)(dVar29 * dVar31);
  dVar29 = (double)FastWrapRot((float)(dVar29 * dVar31),(float)dVar36);
  sVar23 = *(short *)(iVar10 + 0xb8);
  *(float *)(param_1 + 0x44) = (float)dVar29;
  if (sVar23 < 1) {
    fVar1 = (float)(dVar33 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar32 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar34 - (double)*(float *)(param_1 + 0x18));
    if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar10 + 0xa8) * 2.0) &&
       (sVar23 = *(short *)(iVar10 + 0xba) + -1, *(short *)(iVar10 + 0xba) = sVar23, sVar23 == -1))
    {
      uVar26 = 1;
    }
    fVar3 = *(float *)(param_1 + 0x14) - pSVar11->points[0].y;
    fVar4 = *(float *)(param_1 + 0x10) - pSVar11->points[0].x;
    fVar1 = pSVar11->points[0].z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar12 + 0x84) = 0;
    fVar2 = fVar2 - fVar1;
    OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),g_FrameTimeSq * 3.0,
               g_FrameTimeSq * 3.0,g_FrameTime * 10.0,(float *)((int)puVar12 + 0x84),
               0x720000,(float *)(iVar10 + 0xa8));
  }
  else {
    fVar1 = (float)(dVar33 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar32 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar34 - (double)*(float *)(param_1 + 0x18));
    iVar18 = pSVar11->cnt;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar10 + 0xa8) * 2.0) {
      sVar23 = *(short *)(iVar10 + 0xba) + 1;
      iVar18 = pSVar11->cnt;
      *(short *)(iVar10 + 0xba) = sVar23;
      if (sVar23 == iVar18) {
        uVar26 = 1;
      }
    }
    pVVar15 = pSVar11->points + iVar18 + -1;
    fVar3 = *(float *)(param_1 + 0x14) - pVVar15->y;
    fVar4 = *(float *)(param_1 + 0x10) - pVVar15->x;
    fVar1 = pVVar15->z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(puVar12 + 0x10) = 0;
    fVar2 = fVar2 - fVar1;
    OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),g_FrameTimeSq * 3.0,
               g_FrameTimeSq * 3.0,g_FrameTime * 10.0,(float *)(puVar12 + 0x10),0x720000,
               (float *)(iVar10 + 0xa8));
  }
  if (*(int *)((int)&pSVar11->points[0].w + (int)((longlong)*(short *)(iVar10 + 0xba) << 4)) ==
      0x42280000) {
    *(undefined4 *)(iVar10 + 0xbc) = 0;
  }
  dVar29 = (double)FastWrapRot(*(float *)(iVar10 + 0xc0),*(float *)(iVar10 + 0xa8));
  *(float *)(iVar10 + 0xc0) = (float)dVar29;
  FastQuaternionToEuler(iVar10 + 0x70,0);
  fVar1 = *(float *)(param_1 + 0x14) - pSVar11->points[pSVar11->cnt + -1].y;
  fVar2 = *(float *)(param_1 + 0x10) - pSVar11->points[pSVar11->cnt + -1].x;
  if (((8.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) &&
      (fVar1 = *(float *)(param_1 + 0x14) - pSVar11->points[0].y,
      fVar2 = *(float *)(param_1 + 0x10) - pSVar11->points[0].x,
      8.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) && (iVar19 = MB_randInt(7), iVar19 == 0)
     ) {
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar12 + 0x74) = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar12 + 0xf) = uVar9;
    *(undefined4 *)((int)puVar12 + 0x7c) = uVar8;
    MB_RandomizeVector(0.5,(float *)(uVar16 - 0xb0));
    *(undefined4 *)(puVar12 + 0xf) = 0x41c8147b;
    SpawnPart_45
              ((double)((*(float *)(iVar10 + 0xa8) * 3.0) / (g_FrameTime * 10.0)),
               0x40c89c0000000000,uVar16 - 0xb0,&DAT_00720000,0,0x40103080);
  }
  return uVar26;
}


// 0x02b3ec8 (0x8b8 bytes)
// inlined: FastAtan2 @0x2b415c
/* Moby 1766 */

void UpdateMoby_1766(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  Vec4 *pVVar17;
  longlong lVar15;
  longlong lVar16;
  int iVar18;
  short sVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0xf0;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar13;
  puVar11[0x20] = in_LR;
  puVar11[0x1c] = in_f30;
  puVar11[0x1d] = in_f31;
  puVar11[0x1a] = unaff_r30;
  pvVar9 = moby->pVar;
  puVar11[0x19] = unaff_r29;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  puVar11[0x1b] = unaff_r31;
  iVar18 = *(int *)((int)pvVar9 + 0xac);
  fVar5 = (moby->pos).w;
  fVar6 = (moby->rotation).x;
  puVar11[0x18] = unaff_r28;
  *(f32 *)((int)puVar11 + 0x7c) = fVar5;
  fVar5 = (moby->rotation).y;
  pSVar10 = Splines[iVar18];
  *(float *)(puVar11 + 0xe) = -fVar2;
  *(float *)((int)puVar11 + 0x74) = -fVar3;
  *(f32 *)(puVar11 + 0x10) = fVar6;
  *(float *)(puVar11 + 0xf) = -fVar4;
  fVar6 = (moby->rotation).z;
  *(f32 *)((int)puVar11 + 0x84) = fVar5;
  fVar5 = (moby->rotation).w;
  *(f32 *)(puVar11 + 0x11) = fVar6;
  *(f32 *)((int)puVar11 + 0x8c) = fVar5;
  if (pvVar9 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
      *(undefined4 *)((int)pvVar9 + 200) = 0;
      dVar29 = 0.0;
      *(undefined4 *)((int)pvVar9 + 0xcc) = 0;
      dVar28 = 3.1415927410125732;
      *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
      dVar25 = (double)(moby->rotation).z;
      if (*(int *)((int)pvVar9 + 0xa0) != 0) {
        AttachManipulator(moby,0,(int)pvVar9 + 0x60);
        pSVar10 = Splines[*(int *)((int)pvVar9 + 0xac)];
        moby->state = '\x01';
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          *(undefined2 *)((int)pvVar9 + 0xb8) = 0xffff;
          *(short *)((int)pvVar9 + 0xba) = (short)pSVar10->cnt + -2;
          pVVar17 = pSVar10->points + pSVar10->cnt + -1;
          fVar2 = pVVar17->x;
          fVar3 = pVVar17->y;
          fVar4 = pVVar17->z;
          fVar7 = pVVar17->w;
        }
        else {
          *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
          *(undefined2 *)((int)pvVar9 + 0xba) = 1;
          fVar2 = pSVar10->points[0].x;
          fVar3 = pSVar10->points[0].y;
          fVar4 = pSVar10->points[0].z;
          fVar7 = pSVar10->points[0].w;
        }
        sVar8 = *(short *)((int)pvVar9 + 0xba);
        (moby->pos).x = fVar2;
        (moby->pos).y = fVar3;
        iVar18 = (int)((longlong)sVar8 << 4);
        (moby->pos).z = fVar4;
        (moby->pos).w = fVar7;
        fVar2 = *(float *)((int)&pSVar10->points[0].x + iVar18) - fVar2;
        fVar3 = *(float *)((int)&pSVar10->points[0].y + iVar18) - fVar3;
        dVar25 = ABS((double)fVar2);
        dVar26 = ABS((double)fVar3);
        *(float *)(puVar11 + 0x12) = fVar2;
        *(float *)((int)puVar11 + 0x94) = fVar3;
        *(float *)(puVar11 + 0x13) = (float)(dVar25 - dVar26);
        uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
        dVar27 = ABS((double)*(float *)(puVar11 + 0x12));
        if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar11 + 0x94));
        if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
          dVar26 = dVar25;
        }
        fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar25 = dVar29;
        if (dVar29 < dVar27) {
          lVar15 = uVar13 - 0xe0;
          lVar20 = uVar13 - 0x54;
          lVar23 = uVar13 - 0x44;
          lVar24 = 2;
          fVar4 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
          fVar7 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x15) = fVar4;
          *(float *)(puVar11 + 0x14) = fVar4;
          *(float *)((int)puVar11 + 0xa4) = fVar4;
          *(float *)((int)puVar11 + 0x9c) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar7;
          *(float *)((int)puVar11 + 0xa4) = *(float *)((int)puVar11 + 0xa4) * fVar4;
          *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x15) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar23 = uVar13 - 0x54;
          pfVar21 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar20 = lVar23;
          do {
            fVar4 = *pfVar21;
            fVar7 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar4;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar15 = 2;
          do {
            iVar18 = (int)lVar16;
            iVar12 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0x9c)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar25 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar3);
        }
        (moby->rotation).z = (float)dVar25;
      }
      dVar25 = (double)FastWrapRot((float)dVar25,(float)dVar28);
      (moby->rotation).z = (float)dVar25;
    }
    else {
      fVar2 = (1.0 - *(float *)((int)pvVar9 + 0xcc)) * 0.01 + *(float *)((int)pvVar9 + 0xcc);
      *(float *)((int)pvVar9 + 0xcc) = fVar2;
      MB_BobMotion
                (fVar2 * 0.14,g_FrameTime * 0.5235988,moby,(float *)((int)pvVar9 + 0xd8),
                 (float *)((int)pvVar9 + 0xdc));
      MB_SwingMotion
                ((double)(*(float *)((int)pvVar9 + 0xcc) * 0.08726646),
                 (double)(g_FrameTime * 0.31415927),
                 (double)(g_FrameTime * 0.4886922),lVar14,(int)pvVar9 + 0xd0,
                 (int)pvVar9 + 0xd4);
      if (*(int *)((int)pvVar9 + 200) != 0) {
        if (((*(short *)((int)pvVar9 + 0xb8) < 1) || (*(int *)((int)pvVar9 + 0xb4) == -1)) ||
           (iVar18 = MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb4)), iVar18 == 0
           )) {
          if (((*(short *)((int)pvVar9 + 0xb8) < 0) && (*(int *)((int)pvVar9 + 0xb0) != -1)) &&
             (iVar18 = MB_IsPntInCuboid
                                 (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb0)),
             iVar18 != 0)) {
            moby->state = '\x03';
          }
        }
        else {
          moby->state = '\x03';
        }
      }
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        *(undefined4 *)((int)pvVar9 + 200) = 1;
        moby->state = '\x03';
      }
    }
    goto LAB_002b4710;
  }
  if (bVar1 < 3) {
    fVar2 = (1.0 - *(float *)((int)pvVar9 + 0xcc)) * 0.01 + *(float *)((int)pvVar9 + 0xcc);
    *(float *)((int)pvVar9 + 0xcc) = fVar2;
    MB_BobMotion
              (fVar2 * 0.14,g_FrameTime * 0.5235988,moby,(float *)((int)pvVar9 + 0xd8),
               (float *)((int)pvVar9 + 0xdc));
    MB_SwingMotion
              ((double)(*(float *)((int)pvVar9 + 0xcc) * 0.08726646),
               (double)(g_FrameTime * 0.31415927),
               (double)(g_FrameTime * 0.4886922),lVar14,(int)pvVar9 + 0xd0,
               (int)pvVar9 + 0xd4);
    if (g_standingOnMoby != moby) {
      moby->state = '\x01';
    }
    goto LAB_002b4710;
  }
  if (3 < bVar1) goto LAB_002b4710;
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    iVar18 = *(int *)((int)pvVar9 + 0xc4);
    if (iVar18 != -1) {
      iVar18 = IsMobyPlayingSound(moby,iVar18);
      if (iVar18 != 0) goto LAB_002b44cc;
      iVar18 = *(int *)((int)pvVar9 + 0xc4);
    }
    if (iVar18 == -1) {
      iVar18 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar9 + 0xc4) = iVar18;
    }
  }
LAB_002b44cc:
  if (*(int *)((int)pvVar9 + 0xbc) == 0) {
    if (((*(short *)((int)pvVar9 + 0xb8) < 0) && (*(int *)((int)pvVar9 + 0xb4) != -1)) &&
       (iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb4)),
       iVar18 != 0)) {
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = fVar2 - pSVar10->points[pSVar10->cnt + -1].y;
      fVar7 = fVar3 - pSVar10->points[pSVar10->cnt + -1].x;
      if ((8.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4)) &&
         (fVar2 = fVar2 - pSVar10->points[0].y, fVar3 = fVar3 - pSVar10->points[0].x,
         8.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
        *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
        *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
      }
    }
    else if (((0 < *(short *)((int)pvVar9 + 0xb8)) && (*(int *)((int)pvVar9 + 0xb0) != -1)) &&
            (iVar18 = MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb0)),
            iVar18 != 0)) {
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = fVar2 - pSVar10->points[pSVar10->cnt + -1].y;
      fVar7 = fVar3 - pSVar10->points[pSVar10->cnt + -1].x;
      if ((8.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4)) &&
         (fVar2 = fVar2 - pSVar10->points[0].y, fVar3 = fVar3 - pSVar10->points[0].x,
         8.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
        *(undefined2 *)((int)pvVar9 + 0xb8) = 0xffff;
        *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
      }
    }
  }
  iVar18 = M1766_002b3778(lVar14);
  if (iVar18 != 0) {
    iVar18 = *(int *)((int)pvVar9 + 0xc4);
    if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
       (g_SoundChannels[iVar18].state != '\0')) {
      sound_Kill(iVar18);
    }
    sVar19 = 0;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
    *(undefined4 *)((int)pvVar9 + 0xcc) = 0;
    *(undefined4 *)((int)pvVar9 + 0xdc) = 0;
    moby->state = '\x02';
    sVar8 = *(short *)((int)pvVar9 + 0xb8);
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
    *(short *)((int)pvVar9 + 0xb8) = -sVar8;
    if (-1 < sVar8) {
      sVar19 = (short)pSVar10->cnt + -1;
    }
    *(short *)((int)pvVar9 + 0xba) = sVar19;
  }
LAB_002b4710:
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  *(float *)(puVar11 + 0xe) = *(float *)(puVar11 + 0xe) + (moby->pos).x;
  *(float *)((int)puVar11 + 0x74) = *(float *)((int)puVar11 + 0x74) + fVar2;
  *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + fVar3;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x20),(Vec4 *)(puVar11 + 0xe),uVar13 - 0x70,
             lVar14 + 0x40);
  return;
}


// 0x02b4780 (0x14 bytes)
void M1766_002b4780(void)

{
  DAT_007b77ac = 0x10000;
  return;
}


