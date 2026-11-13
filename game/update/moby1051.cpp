// game/update/moby1051.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x1a2500-0x1a7c24
#include "game/update/moby1051.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/map.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update/camera18.h"
#include "game/update/camera5.h"
#include "game/update/moby1022.h"
#include "game/update/moby1049.h"
#include "game/update/moby1118.h"
#include "game/update/moby37.h"
#include "game/update/moby388.h"
#include "game/update/moby829.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x01a2500 (0x14 bytes)
void M1051_001a2500(void)

{
  DAT_00740798 = 0x10000;
  return;
}


// 0x01a2558 (0x8c8 bytes)
// inlined: FastAtan2 @0x1a2678, FastAtan2 @0x1a2814, FastAtan2 @0x1a2ae0
void M1051_001a2558(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x170;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x30] = in_LR;
  puVar12[0x28] = in_f26;
  puVar12[0x29] = in_f27;
  puVar12[0x2a] = in_f28;
  puVar12[0x2b] = in_f29;
  puVar12[0x2c] = in_f30;
  puVar12[0x2d] = in_f31;
  puVar12[0x23] = unaff_r27;
  puVar12[0x26] = unaff_r30;
  fVar4 = g_heroPosition.y;
  iVar9 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar9 + 0xd0);
  fVar2 = *(float *)(iVar9 + 0xd4);
  fVar3 = g_heroPosition.x - fVar1;
  puVar12[0x25] = unaff_r29;
  puVar12[0x24] = unaff_r28;
  fVar4 = fVar4 - fVar2;
  iVar10 = *(int *)(iVar9 + 0xb0);
  puVar12[0x27] = unaff_r31;
  fVar7 = ABS(fVar3);
  fVar5 = ABS(fVar4);
  *(float *)(puVar12 + 0x11) = fVar3;
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  *(float *)(puVar12 + 0x12) = fVar7 - fVar5;
  dVar33 = 0.0;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar6 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar6 = fVar5;
  }
  fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  fVar15 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar15 = fVar7;
  }
  dVar32 = 0.7853981852531433;
  puVar12[0x22] = unaff_r26;
  dVar28 = dVar33;
  if (0.0 < fVar6) {
    lVar17 = uVar16 - 0x160;
    lVar21 = uVar16 - 0x8c;
    lVar19 = uVar16 - 0x9c;
    lVar23 = 2;
    fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar12 + 0x1c) = fVar6;
    *(float *)(puVar12 + 0x1b) = fVar6;
    *(float *)((int)puVar12 + 0xdc) = fVar6;
    *(float *)((int)puVar12 + 0xd4) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar7;
    *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar6;
    *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar16 - 0x9c;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar13 + 0xd4)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar8 + fVar5);
  }
  fVar3 = fVar3 - fVar1;
  fVar4 = fVar4 - fVar2;
  fVar6 = ABS(fVar3);
  fVar2 = ABS(fVar4);
  *(float *)((int)puVar12 + 0x7c) = fVar3;
  *(float *)(puVar12 + 0x10) = fVar4;
  *(float *)((int)puVar12 + 0x84) = fVar6 - fVar2;
  uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar12 + 0x7c));
  if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar3 = ABS(*(float *)(puVar12 + 0x10));
  if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar26 = dVar33;
  if (0.0 < fVar1) {
    lVar17 = uVar16 - 0x160;
    lVar19 = uVar16 - 0xbc;
    lVar21 = uVar16 - 0xac;
    lVar23 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar12 + 0x18) = fVar1;
    *(float *)(puVar12 + 0x17) = fVar1;
    *(float *)((int)puVar12 + 0xbc) = fVar1;
    *(float *)((int)puVar12 + 0xb4) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar3;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar1;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar16 - 0xbc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar1;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0xb4)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar4);
  }
  uVar24 = FastWrapRot((float)dVar28,3.14159);
  dVar25 = (double)FastDiffRots(uVar24,dVar26);
  dVar28 = dVar32;
  if ((dVar25 <= dVar32) && (dVar28 = dVar25, dVar25 < -0.7853981852531433)) {
    dVar28 = -0.7853981852531433;
  }
  dVar26 = (double)FastWrapRot((float)dVar28,(float)dVar26);
  fVar1 = (float)(dVar26 + 1.570796251296997);
  fVar6 = *(float *)(iVar10 + 0x10) - *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(iVar9 + 0xdc);
  fVar5 = *(float *)(iVar10 + 0x14) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(iVar9 + 0xd0);
  fVar4 = *(float *)(iVar9 + 0xd4);
  dVar31 = (double)*(float *)(iVar9 + 0xd8);
  dVar25 = ABS((double)fVar6);
  dVar28 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar28 = dVar26;
  }
  fVar7 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar7 = fVar1;
  }
  dVar30 = ABS((double)fVar5);
  dVar34 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar28 < 0.0) {
    dVar34 = dVar28;
  }
  *(float *)(puVar12 + 0xe) = fVar6;
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
    fVar6 = fVar7;
  }
  dVar29 = (double)(float)(dVar34 * dVar34);
  *(float *)(puVar12 + 0xf) = (float)(dVar25 - dVar30);
  *(float *)((int)puVar12 + 0x74) = fVar5;
  fVar7 = fVar6 * fVar6;
  dVar26 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar34));
  fVar1 = fVar7 * fVar7 * fVar6;
  dVar27 = (double)(float)(dVar29 * dVar26);
  fVar5 = fVar7 * fVar1;
  uVar22 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
  pfVar20 = (float *)(uVar22 << 2);
  dVar28 = ABS((double)*(float *)(puVar12 + 0xe));
  if ((double)*(float *)(puVar12 + 0xf) - dVar33 < 0.0) {
    dVar28 = dVar30;
  }
  dVar34 = (double)(((float)(dVar29 * dVar27) * 2.601887e-06 +
                    (float)(dVar27 * -0.0001980741071747616 +
                           (double)(float)(dVar26 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar29 * dVar34) *
                                                          -0.16666656732559204 + dVar34)))) * fVar2
                   + fVar4);
  fVar4 = pfVar20[0x1cd640];
  dVar26 = ABS((double)*(float *)((int)puVar12 + 0x74));
  if ((double)*(float *)(puVar12 + 0xf) - dVar33 < 0.0) {
    dVar26 = dVar25;
  }
  dVar30 = (double)((fVar7 * fVar5 * 2.601887e-06 +
                    fVar5 * -0.0001980741 +
                    fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) * fVar2 + fVar3);
  fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar25 = dVar33;
  if (dVar33 < dVar28) {
    lVar17 = uVar16 - 0x160;
    lVar21 = uVar16 - 0xcc;
    lVar19 = uVar16 - 0xdc;
    lVar23 = 2;
    fVar2 = (float)(dVar26 - dVar28) / (float)(dVar26 + dVar28);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x14) = fVar2;
    *(float *)(puVar12 + 0x13) = fVar2;
    *(float *)((int)puVar12 + 0x9c) = fVar2;
    *(float *)((int)puVar12 + 0x94) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar3;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
    *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
      iVar10 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar16 - 0xdc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    dVar28 = dVar33;
    do {
      iVar10 = (int)lVar18;
      iVar13 = (int)lVar21;
      lVar18 = lVar18 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar25 = (double)((float)(dVar28 + dVar32) * fVar4 + fVar1);
  }
  OrganicDeltAng
            ((float)dVar25,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
             g_FrameTime * 3.1415927,(float *)(param_1 + 0x48),(int)pfVar20,
             (float *)(iVar9 + 0xe0));
  fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar34);
  fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar30);
  fVar3 = (float)((double)*(float *)(param_1 + 0x18) - dVar31);
  uVar24 = 0x3ff0000000000000;
  if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) <= 1.0) ||
     (fVar1 = (float)((double)*(float *)(param_1 + 0x14) - (double)g_heroPosition.y),
     fVar2 = (float)((double)*(float *)(param_1 + 0x10) - (double)g_heroPosition.x),
     16.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
    Delt((float)dVar33,DAT_007407c8 * g_FrameTimeSq,(float *)(iVar9 + 0xe8));
  }
  else {
    Delt(DAT_007407c4 * g_FrameTime,DAT_007407c8 * g_FrameTimeSq,
                   (float *)(iVar9 + 0xe8));
  }
  if (*(int *)(iVar9 + 0xe8) == 0) {
    if (*(char *)(param_1 + 0x53) != '\x01') {
      puVar12[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar12 + 0xfc));
    }
  }
  else if (*(char *)(param_1 + 0x53) != '\0') {
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 20.5);
    MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar12 + 0xfc));
  }
  fVar2 = (float)(dVar34 - (double)*(float *)(param_1 + 0x14));
  fVar3 = (float)(dVar30 - (double)*(float *)(param_1 + 0x10));
  uVar11 = *(undefined4 *)(iVar9 + 0xec);
  dVar25 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar9 + 0xe8) / dVar25);
  dVar32 = (double)(fVar1 * fVar2);
  dVar26 = (double)(fVar1 * fVar3);
  dVar28 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar28 = dVar32;
  }
  dVar31 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar31 = dVar26;
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar28 = dVar32;
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar31 = dVar26;
  }
  *(float *)(param_1 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar28);
  *(float *)(param_1 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar31);
  MB_PushOutOfSplineWalls(uVar24,uVar11);
  return;
}


// 0x01a2e28 (0xf8 bytes)
void M1051_001a2e28(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  double dVar3;
  double dVar4;
  GPiece<24> local_40;
  
  puVar2 = (ushort *)(&g_MobyGroups)[*(int *)(*(int *)(param_1 + 0x78) + 0xf0)];
  if (puVar2 != (ushort *)0x0) {
    dVar3 = 15.0;
    dVar4 = 20.0;
    do {
      uVar1 = *puVar2;
      MB_randRangeFloat((float)dVar3,(float)dVar4);
      FUN_0047ca58(g_MobyInstance + (uVar1 & 0x7fff),local_40);
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x01a2f20 (0x64 bytes)
void M1051_001a2f20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  TransitionMovement(0,0);
  Splines[*(int *)(iVar1 + 0xec)]->cnt = *(int32_t *)(iVar1 + 0x114);
  Camera_DeactivateMobyDrivenCam(2);
  return;
}


// 0x01a2fb0 (0x644 bytes)
// inlined: FastAtan2 @0x1a3280, FastAtan2 @0x1a3434
undefined8 M1051_001a2fb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  char acVar12 [4];
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x30] = in_LR;
  puVar11[0x21] = in_f19;
  puVar11[0x22] = in_f20;
  puVar11[0x23] = in_f21;
  puVar11[0x24] = in_f22;
  puVar11[0x25] = in_f23;
  puVar11[0x26] = in_f24;
  puVar11[0x27] = in_f25;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x1f] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  puVar11[0x20] = unaff_r31;
  cVar5 = *(char *)(param_1 + 0x53);
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  puVar11[0x1e] = unaff_r29;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  fVar3 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  if (cVar5 == '\x06') {
    dVar27 = (double)*(float *)(param_1 + 0x10);
    *(float *)(puVar11 + 0xe) = GameCamera.posX;
    fVar8 = GameCamera.posZ;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    acVar12 = GameCamera.posW;
    *(float *)(puVar11 + 0xf) = fVar8;
    dVar28 = (double)*(float *)(param_1 + 0x14);
  }
  else {
    OrganicDelt
              (1.0,g_FrameTimeSq * 0.5,g_FrameTimeSq * 0.5,g_FrameTime * 0.5,
               (float *)(iVar9 + 0x118),0x720000,(float *)(iVar9 + 0x11c));
    acVar12 = DAT_00969cec;
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    dVar24 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar1 * fVar1 + fVar3 * fVar3);
    dVar27 = (double)*(float *)(param_1 + 0x10);
    dVar28 = (double)*(float *)(param_1 + 0x14);
    fVar2 = *(float *)(iVar9 + 0x118);
    dVar29 = (double)SQRT(DAT_00969ce8 * DAT_00969ce8 +
                          g_heroMtx * g_heroMtx + DAT_00969ce4 * DAT_00969ce4);
    fVar8 = (float)((double)g_heroPosition.z + 2.0);
    fVar4 = (float)(-7.0 / dVar29);
    dVar31 = (double)(fVar3 * (float)(8.0 / dVar24));
    dVar26 = (double)(fVar1 * (float)(8.0 / dVar24));
    dVar30 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar30 = dVar31;
    }
    dVar25 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar25 = dVar26;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar30 = dVar31;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar25 = dVar26;
    }
    dVar31 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    dVar24 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    dVar26 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar26 = (double)(g_heroMtx * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar26 = (double)(g_heroMtx * fVar4);
    }
    fVar3 = fVar2 * ((float)(dVar24 + (double)g_heroPosition.y) - (float)(dVar30 + dVar28)) +
            (float)(dVar30 + dVar28);
    fVar4 = fVar2 * ((float)(dVar26 + (double)g_heroPosition.x) - (float)(dVar25 + dVar27)) +
            (float)(dVar25 + dVar27);
    fVar8 = fVar2 * (((float)(dVar31 + (double)g_heroPosition.z) + 4.0) - fVar8) + fVar8;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    *(float *)(puVar11 + 0xe) = fVar4;
    *(float *)(puVar11 + 0xf) = fVar8;
  }
  fVar1 = (float)(dVar27 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar3);
  dVar29 = ABS((double)fVar1);
  dVar31 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x9c) = fVar1;
  *(float *)(puVar11 + 0x14) = fVar2;
  *(char (*) [4])((int)puVar11 + 0x7c) = acVar12;
  *(float *)((int)puVar11 + 0xa4) = (float)(dVar29 - dVar31);
  uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x9c));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)(puVar11 + 0x14));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = dVar32;
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar21 = uVar15 - 0x98;
    lVar19 = uVar15 - 0xa8;
    lVar23 = 2;
    fVar6 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xd4) = fVar6;
    *(float *)((int)puVar11 + 0xcc) = fVar6;
    *(float *)(puVar11 + 0x1a) = fVar6;
    *(float *)(puVar11 + 0x19) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
    *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
    *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 0xa8;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar16 = lVar17;
    dVar30 = dVar32;
    do {
      iVar13 = (int)lVar16;
      iVar14 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar13 + 200)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar3 = (float)((double)fVar3 - dVar28);
  fVar4 = (float)((double)fVar4 - dVar27);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar11 + 0x11) = (float)dVar29;
  fVar1 = fVar1 - fVar8;
  fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)((int)puVar11 + 0x94) = fVar1;
  dVar31 = ABS((double)fVar1);
  dVar29 = ABS((double)fVar4);
  *(float *)(puVar11 + 0x12) = fVar4;
  *(float *)(puVar11 + 0x13) = (float)(dVar29 - dVar31);
  fVar4 = *(float *)(iVar9 + 0x118);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)(puVar11 + 0x12));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x94));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar19 = uVar15 - 200;
    lVar21 = uVar15 - 0xb8;
    lVar23 = 2;
    fVar1 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar11 + 0xb4) = fVar1;
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar1;
    *(float *)(puVar11 + 0x15) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar2;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar1;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar16 = lVar16 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 200;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar22;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xa8)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar8);
  }
  *(float *)((int)puVar11 + 0x84) =
       -(float)((double)((1.0 - fVar4) * 30.0) * 0.01745329238474369 - -dVar32);
  Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0xe));
  Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x10));
  uVar18 = 0;
  uVar10 = (int)*(uint *)(iVar9 + 0x118) >> 0x1f;
  if ((0x3f7fffff < (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x118)) - uVar10)) &&
     (uVar18 = 0, *(char *)(param_1 + 0x53) == '\x01')) {
    uVar18 = 1;
  }
  return uVar18;
}


// 0x01a35f4 (0x64 bytes)
void M1051_001a35f4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  TransitionMovement(0,0);
  Splines[*(int *)(iVar1 + 0xec)]->cnt = *(int32_t *)(iVar1 + 0x114);
  Camera_DeactivateMobyDrivenCam(2);
  return;
}


// 0x01a3680 (0x644 bytes)
// inlined: FastAtan2 @0x1a3950, FastAtan2 @0x1a3b04
undefined8 M1051_001a3680(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  char acVar12 [4];
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x30] = in_LR;
  puVar11[0x21] = in_f19;
  puVar11[0x22] = in_f20;
  puVar11[0x23] = in_f21;
  puVar11[0x24] = in_f22;
  puVar11[0x25] = in_f23;
  puVar11[0x26] = in_f24;
  puVar11[0x27] = in_f25;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x1f] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  puVar11[0x20] = unaff_r31;
  cVar5 = *(char *)(param_1 + 0x53);
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  puVar11[0x1e] = unaff_r29;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  fVar3 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  if (cVar5 == '\x06') {
    dVar27 = (double)*(float *)(param_1 + 0x10);
    *(float *)(puVar11 + 0xe) = GameCamera.posX;
    fVar8 = GameCamera.posZ;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    acVar12 = GameCamera.posW;
    *(float *)(puVar11 + 0xf) = fVar8;
    dVar28 = (double)*(float *)(param_1 + 0x14);
  }
  else {
    OrganicDelt
              (1.0,g_FrameTimeSq * 0.5,g_FrameTimeSq * 0.5,g_FrameTime * 0.5,
               (float *)(iVar9 + 0x118),0x720000,(float *)(iVar9 + 0x11c));
    acVar12 = DAT_00969cec;
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    dVar24 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar1 * fVar1 + fVar3 * fVar3);
    dVar27 = (double)*(float *)(param_1 + 0x10);
    dVar28 = (double)*(float *)(param_1 + 0x14);
    fVar2 = *(float *)(iVar9 + 0x118);
    dVar29 = (double)SQRT(DAT_00969ce8 * DAT_00969ce8 +
                          g_heroMtx * g_heroMtx + DAT_00969ce4 * DAT_00969ce4);
    fVar8 = (float)((double)g_heroPosition.z + 2.0);
    fVar4 = (float)(-7.0 / dVar29);
    dVar31 = (double)(fVar3 * (float)(8.0 / dVar24));
    dVar26 = (double)(fVar1 * (float)(8.0 / dVar24));
    dVar30 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar30 = dVar31;
    }
    dVar25 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar25 = dVar26;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar30 = dVar31;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar25 = dVar26;
    }
    dVar31 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    dVar24 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    dVar26 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar26 = (double)(g_heroMtx * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar26 = (double)(g_heroMtx * fVar4);
    }
    fVar3 = fVar2 * ((float)(dVar24 + (double)g_heroPosition.y) - (float)(dVar30 + dVar28)) +
            (float)(dVar30 + dVar28);
    fVar4 = fVar2 * ((float)(dVar26 + (double)g_heroPosition.x) - (float)(dVar25 + dVar27)) +
            (float)(dVar25 + dVar27);
    fVar8 = fVar2 * (((float)(dVar31 + (double)g_heroPosition.z) + 4.0) - fVar8) + fVar8;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    *(float *)(puVar11 + 0xe) = fVar4;
    *(float *)(puVar11 + 0xf) = fVar8;
  }
  fVar1 = (float)(dVar27 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar3);
  dVar29 = ABS((double)fVar1);
  dVar31 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x9c) = fVar1;
  *(float *)(puVar11 + 0x14) = fVar2;
  *(char (*) [4])((int)puVar11 + 0x7c) = acVar12;
  *(float *)((int)puVar11 + 0xa4) = (float)(dVar29 - dVar31);
  uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x9c));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)(puVar11 + 0x14));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = dVar32;
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar21 = uVar15 - 0x98;
    lVar19 = uVar15 - 0xa8;
    lVar23 = 2;
    fVar6 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xd4) = fVar6;
    *(float *)((int)puVar11 + 0xcc) = fVar6;
    *(float *)(puVar11 + 0x1a) = fVar6;
    *(float *)(puVar11 + 0x19) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
    *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
    *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 0xa8;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar16 = lVar17;
    dVar30 = dVar32;
    do {
      iVar13 = (int)lVar16;
      iVar14 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar13 + 200)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar3 = (float)((double)fVar3 - dVar28);
  fVar4 = (float)((double)fVar4 - dVar27);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar11 + 0x11) = (float)dVar29;
  fVar1 = fVar1 - fVar8;
  fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)((int)puVar11 + 0x94) = fVar1;
  dVar31 = ABS((double)fVar1);
  dVar29 = ABS((double)fVar4);
  *(float *)(puVar11 + 0x12) = fVar4;
  *(float *)(puVar11 + 0x13) = (float)(dVar29 - dVar31);
  fVar4 = *(float *)(iVar9 + 0x118);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)(puVar11 + 0x12));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x94));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar19 = uVar15 - 200;
    lVar21 = uVar15 - 0xb8;
    lVar23 = 2;
    fVar1 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar11 + 0xb4) = fVar1;
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar1;
    *(float *)(puVar11 + 0x15) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar2;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar1;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar16 = lVar16 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 200;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar22;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xa8)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar8);
  }
  *(float *)((int)puVar11 + 0x84) =
       -(float)((double)((1.0 - fVar4) * 30.0) * 0.01745329238474369 - -dVar32);
  Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0xe));
  Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x10));
  uVar18 = 0;
  uVar10 = (int)*(uint *)(iVar9 + 0x118) >> 0x1f;
  if ((0x3f7fffff < (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x118)) - uVar10)) &&
     (uVar18 = 0, *(char *)(param_1 + 0x53) == '\x01')) {
    uVar18 = 1;
  }
  return uVar18;
}


// 0x01a3cc4 (0x64 bytes)
void M1051_001a3cc4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  TransitionMovement(0,0);
  Splines[*(int *)(iVar1 + 0xec)]->cnt = *(int32_t *)(iVar1 + 0x114);
  Camera_DeactivateMobyDrivenCam(2);
  return;
}


// 0x01a3d50 (0x644 bytes)
// inlined: FastAtan2 @0x1a401c, FastAtan2 @0x1a41d0
undefined8 M1051_001a3d50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  char acVar12 [4];
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x30] = in_LR;
  puVar11[0x20] = in_f18;
  puVar11[0x21] = in_f19;
  puVar11[0x22] = in_f20;
  puVar11[0x23] = in_f21;
  puVar11[0x24] = in_f22;
  puVar11[0x25] = in_f23;
  puVar11[0x26] = in_f24;
  puVar11[0x27] = in_f25;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x1e] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  puVar11[0x1f] = unaff_r31;
  cVar5 = *(char *)(param_1 + 0x53);
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  puVar11[0x1d] = unaff_r29;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  fVar3 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  if (cVar5 == '\b') {
    dVar26 = (double)*(float *)(param_1 + 0x10);
    *(float *)(puVar11 + 0xe) = GameCamera.posX;
    fVar8 = GameCamera.posZ;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    acVar12 = GameCamera.posW;
    *(float *)(puVar11 + 0xf) = fVar8;
    dVar27 = (double)*(float *)(param_1 + 0x14);
  }
  else {
    dVar29 = 2.0;
    OrganicDelt
              (1.0,g_FrameTimeSq * 3.0,g_FrameTimeSq * 3.0,g_FrameTime * 2.0,
               (float *)(iVar9 + 0x118),0x720000,(float *)(iVar9 + 0x11c));
    acVar12 = DAT_00969cec;
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    dVar28 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar1 * fVar1 + fVar3 * fVar3);
    dVar31 = (double)SQRT(DAT_00969ce8 * DAT_00969ce8 +
                          g_heroMtx * g_heroMtx + DAT_00969ce4 * DAT_00969ce4);
    dVar26 = (double)*(float *)(param_1 + 0x10);
    dVar27 = (double)*(float *)(param_1 + 0x14);
    fVar2 = *(float *)(iVar9 + 0x118);
    fVar8 = (float)((double)g_heroPosition.z + dVar29);
    fVar4 = (float)(-7.0 / dVar31);
    dVar30 = (double)(fVar3 * (float)(8.0 / dVar28));
    dVar24 = (double)(fVar1 * (float)(8.0 / dVar28));
    dVar29 = dVar32;
    if (dVar32 - dVar28 < 0.0) {
      dVar29 = dVar30;
    }
    dVar25 = dVar32;
    if (dVar32 - dVar28 < 0.0) {
      dVar25 = dVar24;
    }
    if (dVar28 - dVar32 < 0.0) {
      dVar29 = dVar30;
    }
    if (dVar28 - dVar32 < 0.0) {
      dVar25 = dVar24;
    }
    dVar28 = dVar32;
    if (dVar32 - dVar31 < 0.0) {
      dVar28 = (double)(DAT_00969ce8 * fVar4);
    }
    dVar30 = dVar32;
    if (dVar32 - dVar31 < 0.0) {
      dVar30 = (double)(DAT_00969ce4 * fVar4);
    }
    dVar24 = dVar32;
    if (dVar32 - dVar31 < 0.0) {
      dVar24 = (double)(g_heroMtx * fVar4);
    }
    if (dVar31 - dVar32 < 0.0) {
      dVar28 = (double)(DAT_00969ce8 * fVar4);
    }
    if (dVar31 - dVar32 < 0.0) {
      dVar30 = (double)(DAT_00969ce4 * fVar4);
    }
    if (dVar31 - dVar32 < 0.0) {
      dVar24 = (double)(g_heroMtx * fVar4);
    }
    fVar3 = fVar2 * ((float)(dVar30 + (double)g_heroPosition.y) - (float)(dVar29 + dVar27)) +
            (float)(dVar29 + dVar27);
    fVar4 = fVar2 * ((float)(dVar24 + (double)g_heroPosition.x) - (float)(dVar25 + dVar26)) +
            (float)(dVar25 + dVar26);
    fVar8 = fVar2 * (((float)(dVar28 + (double)g_heroPosition.z) + 4.0) - fVar8) + fVar8;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    *(float *)(puVar11 + 0xe) = fVar4;
    *(float *)(puVar11 + 0xf) = fVar8;
  }
  fVar1 = (float)(dVar26 - (double)fVar4);
  fVar2 = (float)(dVar27 - (double)fVar3);
  dVar28 = ABS((double)fVar1);
  dVar30 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x9c) = fVar1;
  *(float *)(puVar11 + 0x14) = fVar2;
  *(char (*) [4])((int)puVar11 + 0x7c) = acVar12;
  *(float *)((int)puVar11 + 0xa4) = (float)(dVar28 - dVar30);
  uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)((int)puVar11 + 0x9c));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar29 = dVar30;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar30 = ABS((double)*(float *)(puVar11 + 0x14));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar30 = dVar28;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (dVar32 < dVar29) {
    lVar16 = uVar15 - 0x160;
    lVar21 = uVar15 - 0x98;
    lVar19 = uVar15 - 0xa8;
    lVar23 = 2;
    fVar6 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xd4) = fVar6;
    *(float *)((int)puVar11 + 0xcc) = fVar6;
    *(float *)(puVar11 + 0x1a) = fVar6;
    *(float *)(puVar11 + 0x19) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
    *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
    *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 0xa8;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar16 = lVar17;
    dVar29 = dVar32;
    do {
      iVar13 = (int)lVar16;
      iVar14 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar13 + 200)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar28 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar3 = (float)((double)fVar3 - dVar27);
  fVar4 = (float)((double)fVar4 - dVar26);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar11 + 0x11) = (float)dVar28;
  fVar1 = fVar1 - fVar8;
  fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)((int)puVar11 + 0x94) = fVar1;
  dVar30 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar4);
  *(float *)(puVar11 + 0x12) = fVar4;
  *(float *)(puVar11 + 0x13) = (float)(dVar28 - dVar30);
  fVar4 = *(float *)(iVar9 + 0x118);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)(puVar11 + 0x12));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar29 = dVar30;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x94));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar30 = dVar28;
  }
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (dVar32 < dVar29) {
    lVar16 = uVar15 - 0x160;
    lVar19 = uVar15 - 200;
    lVar21 = uVar15 - 0xb8;
    lVar23 = 2;
    fVar1 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar11 + 0xb4) = fVar1;
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar1;
    *(float *)(puVar11 + 0x15) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar2;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar1;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar16 = lVar16 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 200;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar22;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xa8)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar8);
  }
  *(float *)((int)puVar11 + 0x84) =
       -(float)((double)((1.0 - fVar4) * 30.0) * 0.01745329238474369 - -dVar32);
  Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0xe));
  Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x10));
  uVar18 = 0;
  uVar10 = (int)*(uint *)(iVar9 + 0x118) >> 0x1f;
  if ((0x3f7fffff < (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x118)) - uVar10)) &&
     (uVar18 = 0, *(char *)(param_1 + 0x53) == '\x01')) {
    uVar18 = 1;
  }
  return uVar18;
}


// 0x01a43a8 (0x514 bytes)
// inlined: FastAtan2 @0x1a457c, FastAtan2 @0x1a4728
void M1051_001a43a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x21] = unaff_r31;
  pCVar12 = Cuboids;
  iVar8 = *(int *)(param_1 + 0x78);
  dVar29 = 0.0;
  *(undefined4 *)(iVar8 + 0x118) = 0;
  Hero_Warp(&pCVar12[*(int *)(iVar8 + 0xf8)].pos.x,&pCVar12[*(int *)(iVar8 + 0xf8)].rot.x,0x72
                  ,0);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0xc0);
  fVar3 = *(float *)(param_1 + 200);
  dVar26 = (double)*(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  dVar27 = (double)fVar4;
  *(float *)(puVar9 + 0xe) = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x18);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar9 + 0xf) = fVar5;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar6;
  fVar7 = g_heroPosition.z + 2.0;
  *(undefined4 *)((int)puVar9 + 0x8c) = 0;
  dVar22 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  fVar4 = (float)(8.0 / dVar22);
  dVar25 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  dVar24 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  dVar23 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  dVar21 = (double)(float)(dVar27 + dVar25);
  dVar22 = (double)(float)(dVar26 + dVar24);
  fVar4 = (float)((double)fVar7 + dVar23);
  fVar1 = (float)(dVar27 - dVar21);
  fVar2 = (float)(dVar26 - dVar22);
  dVar23 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x9c) = fVar2;
  *(float *)(puVar9 + 0x14) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar26 + dVar24);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar27 + dVar25);
  *(float *)((int)puVar9 + 0xa4) = (float)(dVar28 - dVar23);
  *(float *)(puVar9 + 0xf) = fVar4;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar9 + 0x9c));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar25 = dVar23;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar24 = dVar28;
  }
  dVar23 = dVar29;
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar16 = uVar13 - 0x58;
    lVar18 = uVar13 - 0x48;
    lVar20 = 2;
    fVar3 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xd4) = fVar3;
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar7;
    *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3;
    *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar3 = *pfVar19;
      fVar7 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    dVar25 = dVar29;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 200)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = (float)(dVar21 - dVar27);
  fVar2 = (float)(dVar22 - dVar26);
  *(float *)(puVar9 + 0x11) = (float)dVar23;
  fVar5 = fVar5 - fVar4;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar9 + 0x94) = fVar5;
  dVar26 = ABS((double)fVar5);
  dVar22 = ABS((double)fVar4);
  *(float *)(puVar9 + 0x12) = fVar4;
  *(float *)(puVar9 + 0x13) = (float)(dVar22 - dVar26);
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar25 = dVar26;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar26 = dVar22;
  }
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar18 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar2 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar9 + 0xb4) = fVar2;
    *(float *)((int)puVar9 + 0xac) = fVar2;
    *(float *)(puVar9 + 0x16) = fVar2;
    *(float *)(puVar9 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar4 + fVar1);
  }
  *(float *)((int)puVar9 + 0x84) = (float)(-dVar29 - 0.5235987901687622);
  SetCameraPosition(uVar13 - 0xb0,uVar13 - 0xa0,1,0,0);
  Camera_SetMobyDrivenTargetPos((float *)(uVar13 - 0xb0));
  Camera_SetMobyDrivenTargetRot((float *)(uVar13 - 0xa0));
  Splines[*(int *)(iVar8 + 0xec)]->cnt = 0;
  return;
}


// 0x01a48d0 (0x514 bytes)
// inlined: FastAtan2 @0x1a4aa4, FastAtan2 @0x1a4c50
void M1051_001a48d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x21] = unaff_r31;
  pCVar12 = Cuboids;
  iVar8 = *(int *)(param_1 + 0x78);
  dVar29 = 0.0;
  *(undefined4 *)(iVar8 + 0x118) = 0;
  Hero_Warp(&pCVar12[*(int *)(iVar8 + 0xf8)].pos.x,&pCVar12[*(int *)(iVar8 + 0xf8)].rot.x,0x72
                  ,0);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0xc0);
  fVar3 = *(float *)(param_1 + 200);
  dVar26 = (double)*(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  dVar27 = (double)fVar4;
  *(float *)(puVar9 + 0xe) = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x18);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar9 + 0xf) = fVar5;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar6;
  fVar7 = g_heroPosition.z + 2.0;
  *(undefined4 *)((int)puVar9 + 0x8c) = 0;
  dVar22 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  fVar4 = (float)(8.0 / dVar22);
  dVar25 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  dVar24 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  dVar23 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  dVar21 = (double)(float)(dVar27 + dVar25);
  dVar22 = (double)(float)(dVar26 + dVar24);
  fVar4 = (float)((double)fVar7 + dVar23);
  fVar1 = (float)(dVar27 - dVar21);
  fVar2 = (float)(dVar26 - dVar22);
  dVar23 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x9c) = fVar2;
  *(float *)(puVar9 + 0x14) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar26 + dVar24);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar27 + dVar25);
  *(float *)((int)puVar9 + 0xa4) = (float)(dVar28 - dVar23);
  *(float *)(puVar9 + 0xf) = fVar4;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar9 + 0x9c));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar25 = dVar23;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar24 = dVar28;
  }
  dVar23 = dVar29;
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar16 = uVar13 - 0x58;
    lVar18 = uVar13 - 0x48;
    lVar20 = 2;
    fVar3 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xd4) = fVar3;
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar7;
    *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3;
    *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar3 = *pfVar19;
      fVar7 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    dVar25 = dVar29;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 200)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = (float)(dVar21 - dVar27);
  fVar2 = (float)(dVar22 - dVar26);
  *(float *)(puVar9 + 0x11) = (float)dVar23;
  fVar5 = fVar5 - fVar4;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar9 + 0x94) = fVar5;
  dVar26 = ABS((double)fVar5);
  dVar22 = ABS((double)fVar4);
  *(float *)(puVar9 + 0x12) = fVar4;
  *(float *)(puVar9 + 0x13) = (float)(dVar22 - dVar26);
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar25 = dVar26;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar26 = dVar22;
  }
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar18 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar2 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar9 + 0xb4) = fVar2;
    *(float *)((int)puVar9 + 0xac) = fVar2;
    *(float *)(puVar9 + 0x16) = fVar2;
    *(float *)(puVar9 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar4 + fVar1);
  }
  *(float *)((int)puVar9 + 0x84) = (float)(-dVar29 - 0.5235987901687622);
  SetCameraPosition(uVar13 - 0xb0,uVar13 - 0xa0,1,0,0);
  Camera_SetMobyDrivenTargetPos((float *)(uVar13 - 0xb0));
  Camera_SetMobyDrivenTargetRot((float *)(uVar13 - 0xa0));
  Splines[*(int *)(iVar8 + 0xec)]->cnt = 0;
  return;
}


// 0x01a4df8 (0x514 bytes)
// inlined: FastAtan2 @0x1a4fcc, FastAtan2 @0x1a5178
void M1051_001a4df8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x21] = unaff_r31;
  pCVar12 = Cuboids;
  iVar8 = *(int *)(param_1 + 0x78);
  dVar29 = 0.0;
  *(undefined4 *)(iVar8 + 0x118) = 0;
  Hero_Warp(&pCVar12[*(int *)(iVar8 + 0xf8)].pos.x,&pCVar12[*(int *)(iVar8 + 0xf8)].rot.x,0x72
                  ,0);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0xc0);
  fVar3 = *(float *)(param_1 + 200);
  dVar26 = (double)*(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  dVar27 = (double)fVar4;
  *(float *)(puVar9 + 0xe) = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x18);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar9 + 0xf) = fVar5;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar6;
  fVar7 = g_heroPosition.z + 2.0;
  *(undefined4 *)((int)puVar9 + 0x8c) = 0;
  dVar22 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  fVar4 = (float)(8.0 / dVar22);
  dVar25 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  dVar24 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  dVar23 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  dVar21 = (double)(float)(dVar27 + dVar25);
  dVar22 = (double)(float)(dVar26 + dVar24);
  fVar4 = (float)((double)fVar7 + dVar23);
  fVar1 = (float)(dVar27 - dVar21);
  fVar2 = (float)(dVar26 - dVar22);
  dVar23 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x9c) = fVar2;
  *(float *)(puVar9 + 0x14) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar26 + dVar24);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar27 + dVar25);
  *(float *)((int)puVar9 + 0xa4) = (float)(dVar28 - dVar23);
  *(float *)(puVar9 + 0xf) = fVar4;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar9 + 0x9c));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar25 = dVar23;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar24 = dVar28;
  }
  dVar23 = dVar29;
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar16 = uVar13 - 0x58;
    lVar18 = uVar13 - 0x48;
    lVar20 = 2;
    fVar3 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xd4) = fVar3;
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar7;
    *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3;
    *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar3 = *pfVar19;
      fVar7 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    dVar25 = dVar29;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 200)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = (float)(dVar21 - dVar27);
  fVar2 = (float)(dVar22 - dVar26);
  *(float *)(puVar9 + 0x11) = (float)dVar23;
  fVar5 = fVar5 - fVar4;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar9 + 0x94) = fVar5;
  dVar26 = ABS((double)fVar5);
  dVar22 = ABS((double)fVar4);
  *(float *)(puVar9 + 0x12) = fVar4;
  *(float *)(puVar9 + 0x13) = (float)(dVar22 - dVar26);
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar25 = dVar26;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar26 = dVar22;
  }
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar18 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar2 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar9 + 0xb4) = fVar2;
    *(float *)((int)puVar9 + 0xac) = fVar2;
    *(float *)(puVar9 + 0x16) = fVar2;
    *(float *)(puVar9 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar4 + fVar1);
  }
  *(float *)((int)puVar9 + 0x84) = (float)(-dVar29 - 0.5235987901687622);
  SetCameraPosition(uVar13 - 0xb0,uVar13 - 0xa0,1,0,0);
  Camera_SetMobyDrivenTargetPos((float *)(uVar13 - 0xb0));
  Camera_SetMobyDrivenTargetRot((float *)(uVar13 - 0xa0));
  Splines[*(int *)(iVar8 + 0xec)]->cnt = 0;
  return;
}


// 0x01a5360 (0xb74 bytes)
// inlined: FastAtan2 @0x1a594c, FastAtan2 @0x1a5bd0
void M1051_001a5360(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  longlong lVar15;
  longlong lVar16;
  uint uVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar14;
  puVar11[0x24] = in_LR;
  puVar11[0x20] = in_f30;
  puVar11[0x21] = in_f31;
  puVar11[0x1f] = unaff_r31;
  bVar3 = param_1->state;
  puVar11[0x1e] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar25 = ZEXT48(pvVar9);
  puVar11[0x1d] = unaff_r29;
  if (bVar3 == 0) {
    return;
  }
  if (((3 < bVar3) && (bVar3 < 0xe)) && (*(int *)((int)pvVar9 + 0x108) != -1)) {
    DAT_0096bfba = (undefined2)*(int *)((int)pvVar9 + 0x108);
  }
  uVar17 = FastDoubleToInt((double)(*(float *)((int)pvVar9 + 0x20) * 16.0));
  *(undefined4 *)((int)pvVar9 + 0x110) = uVar17;
  dVar31 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x74) = 0;
  iVar18 = MB_damage(param_1,0x330000,0);
  iVar19 = MB_HandleDamage
                     (param_1,iVar18,uVar25 + 0x20,0,puVar11 + 0xe,(int)puVar11 + 0x74,0,4);
  dVar27 = (double)*(float *)((int)puVar11 + 0x74);
  if (((*(int *)(puVar11 + 0xe) == 1) ||
      (uVar4 = param_1->state, uVar4 == '\x03' || uVar4 == '\x0e')) || (uVar4 == '\x05'))
  goto LAB_001a56f4;
  if (*(int *)(iVar18 + 0x20) != 0) {
    sVar8 = *(short *)(*(int *)(iVar18 + 0x20) + 0xa6);
    if (sVar8 == 0x33b) {
LAB_001a54a4:
      dVar28 = dVar27 * 1.5;
      dVar27 = (double)(float)dVar28;
      *(float *)((int)puVar11 + 0x74) = (float)dVar28;
    }
    else if (sVar8 == 0x131) {
      dVar28 = dVar27 * 0.6660000085830688;
      dVar27 = (double)(float)dVar28;
      *(float *)((int)puVar11 + 0x74) = (float)dVar28;
    }
    else if ((sVar8 == 0xb0) || (sVar8 == 0x79)) goto LAB_001a54a4;
  }
  fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x20) - dVar27);
  dVar28 = (double)fVar2;
  *(float *)((int)pvVar9 + 0x20) = fVar2;
  if (*(int *)((int)pvVar9 + 0x170) == 0) {
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    iVar18 = *(int *)((int)pvVar9 + 300);
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5);
    auVar32 = loadVectorLeftIndexed(0x14,0x1a530c);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    bVar1 = iVar18 < *(int *)((int)puVar11 + 0xd4);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    if (((bVar1) || (20.0 < dVar28)) || ((float)(dVar28 + dVar27) <= 20.0)) {
      if (((!bVar1) && (dVar28 <= 10.0)) && (10.0 < (float)(dVar28 + dVar27))) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x41200000;
        *(undefined4 *)((int)pvVar9 + 0x174) = 0x41200000;
        *(undefined4 *)((int)pvVar9 + 0x170) = 1;
        uVar17 = storeVectorElementWordIndexed(auVar32,300,uVar25);
        *(undefined4 *)((int)pvVar9 + 300U & 0xfffffffc) = uVar17;
        dVar28 = 10.0;
      }
    }
    else {
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x41a00000;
      *(undefined4 *)((int)pvVar9 + 0x174) = 0x41a00000;
      *(undefined4 *)((int)pvVar9 + 0x170) = 1;
      uVar17 = storeVectorElementWordIndexed(auVar32,300,uVar25);
      *(undefined4 *)((int)pvVar9 + 300U & 0xfffffffc) = uVar17;
      dVar28 = 20.0;
    }
  }
  else {
    dVar27 = (double)*(float *)((int)pvVar9 + 0x174);
    if (dVar28 < dVar27) {
      *(float *)((int)pvVar9 + 0x20) = *(float *)((int)pvVar9 + 0x174);
      dVar28 = dVar27;
    }
  }
  if (dVar28 <= dVar31) {
LAB_001a5618:
    if (*(int *)((int)pvVar9 + 0x10c) != -1) {
      Hud_SetEntryValueById(*(int *)((int)pvVar9 + 0x10c),0);
      *(undefined4 *)((int)pvVar9 + 0x10c) = 0xffffffff;
    }
    param_1->state = '\x0e';
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    SetSpawnPoint
              ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0xf8)].pos,
               (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0xf8)].rot);
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    if (param_1->animationId != '\n') {
      puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(param_1,10,0,*(undefined4 *)((int)puVar11 + 0xd4));
    }
    *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
  }
  else if (iVar19 == 1) {
LAB_001a560c:
    *(undefined1 *)((int)pvVar9 + 0x67) = 200;
  }
  else if (iVar19 < 3) {
    if ((-1 < iVar19) && (0 < iVar19)) goto LAB_001a5618;
  }
  else if (iVar19 < 0xb) goto LAB_001a560c;
  MB_UpdateLightsTransition(param_1,uVar25 + 0x60);
LAB_001a56f4:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar25 + 0x60);
  if (((*(byte *)((int)pvVar9 + 0x2e) & 2) == 0) || (param_1->state == 0xf)) {
    if ((1 < param_1->state) && ((g_CurrentWeapon != 8 && ((g_Pad.downButtons & CIRCLE) != 0)))) {
      *(undefined4 *)((int)pvVar9 + 0x178) = 1;
    }
    iVar18 = *(int *)((int)pvVar9 + 300);
    if ((iVar18 == 0) || (*(int *)((int)pvVar9 + 0x170) == 0)) {
      if ((*(int *)((int)pvVar9 + 0x170) == 0) &&
         (puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5),
         iVar18 < *(int *)((int)puVar11 + 0xd4))) {
        *(int *)((int)pvVar9 + 300) = iVar18 + 1;
        dVar27 = (double)FastIntToDouble(iVar18 + 1);
        SceneScreenFade = -(float)(dVar27 * 0.10000000149011612 - 1.0);
      }
    }
    else {
      iVar18 = iVar18 + -1;
      *(int *)((int)pvVar9 + 300) = iVar18;
      puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5);
      if (iVar18 < *(int *)((int)puVar11 + 0xd4)) {
        dVar27 = (double)FastIntToDouble(iVar18);
        iVar18 = *(int *)((int)pvVar9 + 300);
        SceneScreenFade = 1.0 - (float)(dVar27 / (double)(animationSpeed * 10.0));
      }
      if ((iVar18 == 0) && (param_1->state != '\x01')) {
        uVar20 = (int)*(uint *)((int)pvVar9 + 0x20) >> 0x1f;
        dVar27 = 0.7853981852531433;
        if ((int)((uVar20 >> 1 ^ *(uint *)((int)pvVar9 + 0x20)) - uVar20) < 0x41200001) {
          *(undefined4 *)((int)pvVar9 + 0x20) = 0x411e6666;
          param_1->state = '\x05';
          pCVar13 = Cuboids;
          *(undefined4 *)((int)pvVar9 + 0x170) = 0;
          Hero_Warp(&pCVar13[*(int *)((int)pvVar9 + 0xf8)].pos.x,
                          &pCVar13[*(int *)((int)pvVar9 + 0xf8)].rot.x,0x72,1);
          fVar2 = *(float *)((int)pvVar9 + 0xc0);
          (param_1->pos).x = fVar2;
          fVar5 = *(float *)((int)pvVar9 + 0xc4);
          (param_1->pos).y = fVar5;
          (param_1->pos).z = *(f32 *)((int)pvVar9 + 200);
          (param_1->pos).w = *(f32 *)((int)pvVar9 + 0xcc);
          fVar2 = g_heroPosition.x - fVar2;
          fVar5 = g_heroPosition.y - fVar5;
          dVar29 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar5);
          *(float *)(puVar11 + 0xf) = fVar2;
          *(float *)((int)puVar11 + 0x7c) = fVar5;
          *(float *)(puVar11 + 0x10) = (float)(dVar29 - dVar30);
          uVar23 = (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1d) & 4;
          dVar28 = ABS((double)*(float *)(puVar11 + 0xf));
          if ((double)*(float *)(puVar11 + 0x10) - dVar31 < 0.0) {
            dVar28 = dVar30;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar11 + 0x7c));
          if ((double)*(float *)(puVar11 + 0x10) - dVar31 < 0.0) {
            dVar30 = dVar29;
          }
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (dVar31 < dVar28) {
            lVar15 = uVar14 - 0x100;
            lVar21 = uVar14 - 0x80;
            lVar24 = uVar14 - 0x70;
            lVar26 = 2;
            fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar11 + 0x9c) = fVar6;
            *(float *)((int)puVar11 + 0x94) = fVar6;
            *(float *)(puVar11 + 0x13) = fVar6;
            *(float *)(puVar11 + 0x12) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar7;
            *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar6;
            *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar15 + 0x90) = *(float *)((int)lVar15 + 0x80) * fVar6 * fVar6;
              iVar18 = (int)lVar21;
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar24 = uVar14 - 0x80;
            pfVar22 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar21 = lVar24;
            do {
              fVar6 = *pfVar22;
              fVar7 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar15 + 0x90) = *(float *)((int)lVar15 + 0x90) * fVar6;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
              lVar21 = lVar21 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar15 = 2;
            do {
              iVar18 = (int)lVar16;
              iVar19 = (int)lVar24;
              lVar16 = lVar16 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x90)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar31 = (double)((float)(dVar31 + dVar27) * fVar2 + fVar5);
          }
          (param_1->rotation).z = (float)dVar31;
          FastEulerToMtx(&param_1->transform,&param_1->rotation);
          if (param_1->animationId != '\x06') {
            puVar11[0x1a] = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation(param_1,6,0,*(undefined4 *)((int)puVar11 + 0xd4));
          }
          M1051_001a48d0(param_1);
        }
        else {
          *(undefined4 *)((int)pvVar9 + 0x20) = 0x419f3333;
          param_1->state = '\x03';
          fVar2 = *(float *)((int)pvVar9 + 0xc0);
          (param_1->pos).x = fVar2;
          fVar5 = *(float *)((int)pvVar9 + 0xc4);
          (param_1->pos).y = fVar5;
          (param_1->pos).z = *(f32 *)((int)pvVar9 + 200);
          (param_1->pos).w = *(f32 *)((int)pvVar9 + 0xcc);
          fVar2 = g_heroPosition.x - fVar2;
          fVar5 = g_heroPosition.y - fVar5;
          *(undefined4 *)((int)pvVar9 + 0x170) = 0;
          dVar28 = ABS((double)fVar2);
          dVar29 = ABS((double)fVar5);
          *(float *)((int)puVar11 + 0x84) = fVar2;
          *(float *)(puVar11 + 0x11) = fVar5;
          *(float *)((int)puVar11 + 0x8c) = (float)(dVar28 - dVar29);
          uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar11 + 0x84));
          if ((double)*(float *)((int)puVar11 + 0x8c) - dVar31 < 0.0) {
            dVar27 = dVar29;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar29 = ABS((double)*(float *)(puVar11 + 0x11));
          if ((double)*(float *)((int)puVar11 + 0x8c) - dVar31 < 0.0) {
            dVar29 = dVar28;
          }
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (dVar31 < dVar27) {
            lVar15 = uVar14 - 0x100;
            lVar21 = uVar14 - 0x60;
            lVar24 = uVar14 - 0x50;
            lVar26 = 2;
            fVar6 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar11 + 0xbc) = fVar6;
            *(float *)((int)puVar11 + 0xb4) = fVar6;
            *(float *)(puVar11 + 0x17) = fVar6;
            *(float *)(puVar11 + 0x16) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar7;
            *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
            *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xa0) * fVar6 * fVar6;
              iVar18 = (int)lVar21;
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar24 = uVar14 - 0x60;
            pfVar22 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar21 = lVar24;
            do {
              fVar6 = *pfVar22;
              fVar7 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xb0) * fVar6;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
              lVar21 = lVar21 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar15 = 2;
            do {
              iVar18 = (int)lVar16;
              iVar19 = (int)lVar24;
              lVar16 = lVar16 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0xb0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar5);
          }
          (param_1->rotation).z = (float)dVar31;
          FastEulerToMtx(&param_1->transform,&param_1->rotation);
          if (param_1->animationId != '\x06') {
            puVar11[0x1a] = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation(param_1,6,0,*(undefined4 *)((int)puVar11 + 0xd4));
          }
          M1051_001a4df8(param_1);
        }
      }
    }
    dVar31 = (double)FastWrapRot
                               (*(float *)((int)pvVar9 + 0x128),
                                DAT_007407d8 * 0.017453292 * g_FrameTime);
    uVar12 = DAT_007407e0;
    uVar17 = DAT_007407dc;
    dVar27 = (double)(float)(3.141592502593994 - dVar31);
    if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
      dVar27 = dVar31;
    }
    dVar28 = (double)(float)(-3.141592502593994 - dVar31);
    if ((double)(float)(-3.141592502593994 - dVar31) - dVar27 < 0.0) {
      dVar28 = dVar27;
    }
    dVar27 = (double)(float)(dVar28 * dVar28);
    dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar28));
    dVar29 = (double)(float)(dVar27 * dVar30);
    *(float *)((int)pvVar9 + 0x128) = (float)dVar31;
    uVar20 = FastLerpColor
                       ((double)(((float)(dVar27 * dVar29) * 2.601887e-06 +
                                  (float)(dVar29 * -0.0001980741071747616 +
                                         (double)(float)(dVar30 * 0.008333025500178337 +
                                                        (double)(float)((double)(float)(dVar27 * 
                                                  dVar28) * -0.16666656732559204 + dVar28))) + 1.0)
                                * 0.5),uVar17,uVar12);
    param_1->glowRgba = uVar20;
    pSVar10 = Splines[*(int *)((int)pvVar9 + 0xec)];
    MB_getTargetInArea
              (0x406fe00000000000,param_1,uVar25 + 0x70,pSVar10,0,0,pSVar10->points,pSVar10->cnt);
    if (*(int *)((int)pvVar9 + 0xb0) == 0) {
      *(MobyInstance **)((int)pvVar9 + 0xb0) = g_heroMobyPtr;
    }
  }
  else {
    if (*(int *)((int)pvVar9 + 0x10c) != -1) {
      Hud_SetEntryValueById(*(int *)((int)pvVar9 + 0x10c),0);
      *(undefined4 *)((int)pvVar9 + 0x10c) = 0xffffffff;
    }
    param_1->state = '\x0e';
  }
  return;
}


// 0x01a5f50 (0x1cd4 bytes)
// inlined: FastAtan2 @0x1a6a48, FastAtan2 @0x1a6c14, FastAtan2 @0x1a751c, FastAtan2 @0x1a76ec
// strings: 0096c165: 'None'

/* Moby 1051 */

void UpdateMoby_1051(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  MobyModeBit MVar9;
  ushort uVar10;
  void *pvVar11;
  uint uVar12;
  MobyClass *pMVar13;
  f32 fVar14;
  Spline *pSVar15;
  uint uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar26;
  undefined1 uVar31;
  undefined4 uVar27;
  undefined8 uVar24;
  int iVar28;
  MobyInstance *pMVar29;
  ulonglong uVar25;
  float *pfVar30;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar36;
  ulonglong unaff_r30;
  ushort *puVar37;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  lVar23 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar33 = uVar22 - 0x1f0;
  puVar17 = (ulonglong *)lVar33;
  *puVar17 = uVar22;
  puVar17[0x40] = in_LR;
  puVar17[0x3b] = in_f29;
  puVar17[0x3c] = in_f30;
  puVar17[0x3d] = in_f31;
  puVar17[0x3a] = unaff_r31;
  puVar17[0x38] = unaff_r29;
  puVar17[0x37] = unaff_r28;
  puVar17[0x39] = unaff_r30;
  puVar17[0x36] = unaff_r27;
  puVar17[0x35] = unaff_r26;
  pvVar11 = moby->pVar;
  uVar36 = ZEXT48(pvVar11);
  M1051_001a5360();
  iVar28 = *(int *)((int)pvVar11 + 0xb0);
  DoManipulator
            (0x3ffe666660000000,moby,(longlong)DAT_007407bc,(Manipulator *)((int)pvVar11 + 0x130));
  if ((moby->enabled != '\0') &&
     (dVar39 = (double)FUN_005e8548(lVar23 + 0x10,0x951500), dVar39 < 45.0)) {
    MB_SetZBoundsFromGround(lVar23);
    moby->shadow = '$';
  }
  bVar1 = moby->state;
  if (bVar1 < 0xe && 2 < bVar1) {
    iVar26 = RegisterHUDCallback
                       (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                        &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                        (int *)((int)pvVar11 + 0x110),0x1ef);
    *(int *)((int)pvVar11 + 0x10c) = iVar26;
    bVar1 = moby->state;
  }
  if (7 < bVar1) {
    if (bVar1 != 0xf) {
      if (bVar1 == 0xe) {
        g_MiscLevelFlags.field35_0x23 = 1;
        *(undefined4 *)((int)pvVar11 + 0x110) = 0;
        moby->updateDistance = -1;
        if (*(char *)((int)pvVar11 + 0x2e) == '\x02') {
          FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar11 + 0x100));
          FUN_00355188(*(undefined4 *)((int)pvVar11 + 0x104));
          moby->enabled = '\0';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
          moby->state = '\x0f';
          if (moby->animationId == '\x01') {
            return;
          }
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
          return;
        }
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        fVar14 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x10) = (moby->pos).x;
        fVar8 = (moby->pos).w;
        *(f32 *)((int)puVar17 + 0x84) = fVar14;
        *(f32 *)((int)puVar17 + 0x8c) = fVar8;
        *(float *)(puVar17 + 0x11) = (moby->pos).z + 1.0;
        MB_SpawnExplosionSparks2
                  (0x4000000000000000,0x4034000000000000,lVar23,uVar22 - 0x170,&DAT_001a5ed4,
                   0xffffffffffffffff);
        MB_SpawnDebris(lVar23,0x6a2,1,0x6a3,3,6,2);
        FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar11 + 0x100));
        FUN_00355188(*(undefined4 *)((int)pvVar11 + 0x104));
        moby->state = '\x0f';
        if (moby->animationId != '\x01') {
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
        }
        moby->enabled = '\0';
        iVar28 = *(int *)((int)pvVar11 + 0x178);
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
        if (iVar28 != 0) {
          return;
        }
        MB_UnlockSkillPoint(10);
        return;
      }
      if (bVar1 == 0xd) {
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = *(float *)((int)pvVar11 + 0xc0) - fVar3;
        fVar3 = fVar3 - *(float *)((int)pvVar11 + 0xc0);
        fVar6 = *(float *)((int)pvVar11 + 0xc4) - fVar4;
        fVar4 = fVar4 - *(float *)((int)pvVar11 + 0xc4);
        fVar19 = ABS(fVar5);
        fVar7 = ABS(fVar6);
        *(float *)((int)puVar17 + 0xec) = fVar5;
        *(float *)(puVar17 + 0x1e) = fVar6;
        fVar5 = (moby->rotation).z;
        *(float *)((int)puVar17 + 0xf4) = fVar19 - fVar7;
        dVar39 = 0.0;
        uVar36 = (ulonglong)(*(uint *)((int)puVar17 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x1e) >> 0x1d) & 4;
        dVar48 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        fVar3 = ABS(*(float *)((int)puVar17 + 0xec));
        if (*(float *)((int)puVar17 + 0xf4) - 0.0 < 0.0) {
          fVar3 = fVar7;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar4 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)(puVar17 + 0x1e));
        if (*(float *)((int)puVar17 + 0xf4) - 0.0 < 0.0) {
          fVar7 = fVar19;
        }
        dVar40 = dVar39;
        if (0.0 < fVar3) {
          lVar32 = uVar22 - 0x1e0;
          lVar34 = uVar22 - 0xc0;
          lVar35 = uVar22 - 0xb0;
          lVar38 = 2;
          fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
          fVar7 = fVar3 * fVar3;
          *(float *)((int)puVar17 + 0x13c) = fVar3;
          *(float *)((int)puVar17 + 0x134) = fVar3;
          *(float *)(puVar17 + 0x27) = fVar3;
          *(float *)(puVar17 + 0x26) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)((int)puVar17 + 0x134) = *(float *)((int)puVar17 + 0x134) * fVar7;
          *(float *)(puVar17 + 0x27) = *(float *)(puVar17 + 0x27) * fVar3;
          *(float *)((int)puVar17 + 0x13c) = *(float *)((int)puVar17 + 0x13c) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar32 + 0x130) = *(float *)((int)lVar32 + 0x120) * fVar3 * fVar3;
            iVar28 = (int)lVar34;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0xc0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar3 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x130) = *(float *)((int)lVar32 + 0x130) * fVar3;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar7;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar34 = 2;
          lVar32 = lVar33;
          do {
            iVar28 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar26 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar28 + 0x130)) +
                              *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                             *(float *)(iVar26 + 0xc));
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar6 + fVar4);
        }
        dVar41 = (double)FastSubRots(fVar5,(float)dVar40);
        fVar3 = *(float *)((int)pvVar11 + 0xc0) - (moby->pos).x;
        fVar4 = *(float *)((int)pvVar11 + 0xc4) - (moby->pos).y;
        dVar46 = ABS((double)fVar3);
        dVar44 = ABS((double)fVar4);
        *(float *)(puVar17 + 0x1c) = fVar3;
        *(float *)((int)puVar17 + 0xe4) = fVar4;
        *(float *)(puVar17 + 0x1d) = (float)(dVar46 - dVar44);
        uVar36 = (ulonglong)(*(uint *)(puVar17 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xe4) >> 0x1d) & 4;
        dVar40 = ABS((double)*(float *)(puVar17 + 0x1c));
        if ((double)*(float *)(puVar17 + 0x1d) - dVar39 < 0.0) {
          dVar40 = dVar44;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
        dVar44 = ABS((double)*(float *)((int)puVar17 + 0xe4));
        if ((double)*(float *)(puVar17 + 0x1d) - dVar39 < 0.0) {
          dVar44 = dVar46;
        }
        fVar4 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        dVar46 = dVar39;
        if (dVar39 < dVar40) {
          lVar32 = uVar22 - 0x1e0;
          lVar34 = uVar22 - 0xe0;
          lVar35 = uVar22 - 0xd0;
          lVar38 = 2;
          fVar5 = (float)(dVar44 - dVar40) / (float)(dVar44 + dVar40);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar17 + 0x11c) = fVar5;
          *(float *)((int)puVar17 + 0x114) = fVar5;
          *(float *)(puVar17 + 0x23) = fVar5;
          *(float *)(puVar17 + 0x22) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar17 + 0x114) = *(float *)((int)puVar17 + 0x114) * fVar6;
          *(float *)(puVar17 + 0x23) = *(float *)(puVar17 + 0x23) * fVar5;
          *(float *)((int)puVar17 + 0x11c) = *(float *)((int)puVar17 + 0x11c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x110) = *(float *)((int)lVar32 + 0x100) * fVar5 * fVar5;
            iVar28 = (int)lVar34;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar5 * fVar5;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0xe0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar5 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x110) = *(float *)((int)lVar32 + 0x110) * fVar5;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar6;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar32 = 2;
          dVar40 = dVar39;
          do {
            iVar28 = (int)lVar33;
            lVar33 = lVar33 + 0x10;
            iVar26 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar28 + 0x110)) +
                              *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                             *(float *)(iVar26 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar46 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar4);
        }
        OrganicDeltAng
                  ((float)dVar46,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                   g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar11 + 0xe0));
        if (dVar41 < 0.7853981852531433) {
          dVar44 = (double)(moby->pos).y;
          fVar4 = (float)((double)*(float *)((int)pvVar11 + 0xc4) - dVar44);
          dVar42 = (double)(moby->pos).x;
          fVar5 = (float)((double)*(float *)((int)pvVar11 + 0xc0) - dVar42);
          uVar27 = *(undefined4 *)((int)pvVar11 + 0xec);
          dVar45 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
          fVar3 = (float)((double)(DAT_007407c0 * g_FrameTime) / dVar45);
          dVar41 = (double)(fVar3 * fVar4);
          dVar46 = (double)(fVar3 * fVar5);
          dVar40 = dVar39;
          if (dVar39 - dVar45 < 0.0) {
            dVar40 = dVar41;
          }
          dVar47 = dVar39;
          if (dVar39 - dVar45 < 0.0) {
            dVar47 = dVar46;
          }
          if (dVar45 - dVar39 < 0.0) {
            dVar40 = dVar41;
          }
          if (dVar45 - dVar39 < 0.0) {
            dVar47 = dVar46;
          }
          (moby->pos).y = (float)(dVar44 + dVar40);
          (moby->pos).x = (float)(dVar42 + dVar47);
          MB_PushOutOfSplineWalls
                    (0x3ff0000000000000,uVar27,&DAT_001a5ed4,lVar23 + 0x10,lVar23 + 0x10);
        }
        if (*(int *)((int)pvVar11 + 0xb4) != 2) {
          moby->state = '\a';
          return;
        }
        if (1.0 <= dVar48) {
          return;
        }
        moby->state = '\a';
        if (moby->animationId == '\x01') {
          return;
        }
        puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
        return;
      }
      if (bVar1 == 0xc) {
        M1051_001a2558(lVar23);
        iVar28 = FastDecTimerS32(uVar36 + 0x120);
        if (iVar28 == 0) {
          return;
        }
        auVar49 = ZEXT416(0xffffffff);
        auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar49 = loadVectorLeftIndexed(0x30,0x1a5ed4);
        auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar49 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                             auVar50);
        auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
        auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar27 = storeVectorElementWordIndexed
                           (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x120,
                            uVar36);
        *(undefined4 *)((int)pvVar11 + 0x120U & 0xfffffffc) = uVar27;
        moby->state = '\v';
        moby->setByGroup = '\a';
        if (moby->animationId == '\x06') {
          return;
        }
        puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar23,6,0,*(undefined4 *)((int)puVar17 + 0x194));
        return;
      }
      if (bVar1 != 0xb) {
        if (bVar1 == 10) {
          FastDecTimerS32(uVar36 + 0x120);
          dVar39 = (double)BlendAnimFrame(moby);
          if ((1.0 < dVar39) && (dVar39 = (double)BlendAnimFrame(moby), dVar39 < 8.0)) {
            fVar3 = (moby->rotation).z;
            fVar4 = fVar3 + 1.5707963;
            lVar33 = uVar22 - 0x180;
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar6 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar6 = fVar4;
            }
            fVar7 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar7 = fVar5;
            }
            *(undefined4 *)(puVar17 + 0x17) = 0;
            *(undefined4 *)((int)puVar17 + 0xcc) = 0x3f800000;
            *(undefined4 *)(puVar17 + 0x1a) = 1;
            *(undefined4 *)((int)puVar17 + 0xc4) = 1;
            fVar3 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
              fVar3 = fVar6;
            }
            fVar4 = fVar7 * fVar7;
            *(MobyInstance **)(puVar17 + 0x18) = moby;
            fVar5 = fVar3 * fVar3;
            fVar20 = fVar4 * fVar4 * fVar7;
            fVar6 = fVar5 * fVar5 * fVar3;
            fVar21 = fVar4 * fVar20;
            fVar19 = fVar5 * fVar6;
            *(float *)((int)puVar17 + 0xb4) =
                 fVar4 * fVar21 * 2.601887e-06 +
                 fVar21 * -0.0001980741 +
                 fVar20 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7;
            *(float *)(puVar17 + 0x16) =
                 fVar5 * fVar19 * 2.601887e-06 +
                 fVar19 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3
            ;
            GetBonePosition(lVar23,0,lVar33);
            uVar24 = 0x3fe0000000000000;
            CollMobySphere(0x3fe0000000000000,lVar33);
            GetBonePosition(lVar23,1,lVar33);
            CollMobySphere(uVar24,lVar33);
            GetBonePosition(lVar23,2,lVar33);
            CollMobySphere(uVar24,lVar33);
            GetBonePosition(lVar23,3,lVar33);
            CollMobySphere(uVar24,lVar33);
            GetBonePosition(lVar23,4,lVar33);
            CollMobySphere(uVar24,lVar33);
            GetBonePosition(lVar23,5,lVar33);
            uVar24 = 0x3ff19999a0000000;
            CollMobySphere(0x3ff19999a0000000,lVar33);
            GetBonePosition(lVar23,6,lVar33);
            CollMobySphere(uVar24,lVar33);
            return;
          }
          if ((moby->field43_0x70 & 2U) == 0) {
            return;
          }
          moby->state = moby->setByGroup;
          if (moby->animationId == '\x01') {
            return;
          }
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
          return;
        }
        if (bVar1 == 9) {
          FastDecTimerS32(uVar36 + 0x120);
          OrganicDeltAng
                    ((moby->rotation).z,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                     g_FrameTime * 3.1415927,&(moby->rotation).z,0x1a5ed4,
                     (float *)((int)pvVar11 + 0xe0));
          if ((moby->field43_0x70 & 2U) == 0) {
            return;
          }
          moby->state = '\n';
          if (moby->animationId == '\x05') {
            return;
          }
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar23,5,0,*(undefined4 *)((int)puVar17 + 0x194));
          return;
        }
        if (bVar1 != 8) {
          return;
        }
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = *(float *)(iVar28 + 0x10) - fVar3;
        fVar3 = fVar3 - *(float *)(iVar28 + 0x10);
        fVar6 = *(float *)(iVar28 + 0x14) - fVar4;
        fVar4 = fVar4 - *(float *)(iVar28 + 0x14);
        fVar19 = ABS(fVar5);
        fVar7 = ABS(fVar6);
        *(float *)((int)puVar17 + 0x104) = fVar5;
        *(float *)(puVar17 + 0x21) = fVar6;
        fVar5 = (moby->rotation).z;
        *(float *)((int)puVar17 + 0x10c) = fVar19 - fVar7;
        dVar39 = 0.0;
        uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0x104) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x10c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x21) >> 0x1d) & 4;
        dVar48 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar4 = ABS(*(float *)((int)puVar17 + 0x104));
        if (*(float *)((int)puVar17 + 0x10c) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar6 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)(puVar17 + 0x21));
        if (*(float *)((int)puVar17 + 0x10c) - 0.0 < 0.0) {
          fVar7 = fVar19;
        }
        dVar40 = dVar39;
        if (0.0 < fVar4) {
          lVar32 = uVar22 - 0x1e0;
          lVar34 = uVar22 - 0x80;
          lVar35 = uVar22 - 0x70;
          lVar38 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar17 + 0x17c) = fVar4;
          *(float *)((int)puVar17 + 0x174) = fVar4;
          *(float *)(puVar17 + 0x2f) = fVar4;
          *(float *)(puVar17 + 0x2e) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar17 + 0x174) = *(float *)((int)puVar17 + 0x174) * fVar7;
          *(float *)(puVar17 + 0x2f) = *(float *)(puVar17 + 0x2f) * fVar4;
          *(float *)((int)puVar17 + 0x17c) = *(float *)((int)puVar17 + 0x17c) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar32 + 0x170) = *(float *)((int)lVar32 + 0x160) * fVar4 * fVar4;
            iVar26 = (int)lVar34;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar4 * fVar4;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0x80;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar4 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x170) = *(float *)((int)lVar32 + 0x170) * fVar4;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar7;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar34 = 2;
          lVar32 = lVar33;
          do {
            iVar26 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar18 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x170)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar6);
        }
        dVar41 = (double)FastSubRots(fVar5,(float)dVar40);
        fVar3 = *(float *)(iVar28 + 0x10) - (moby->pos).x;
        fVar4 = *(float *)(iVar28 + 0x14) - (moby->pos).y;
        dVar46 = ABS((double)fVar3);
        dVar44 = ABS((double)fVar4);
        *(float *)(puVar17 + 0x1f) = fVar3;
        *(float *)((int)puVar17 + 0xfc) = fVar4;
        *(float *)(puVar17 + 0x20) = (float)(dVar46 - dVar44);
        uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xfc) >> 0x1d) & 4;
        dVar40 = ABS((double)*(float *)(puVar17 + 0x1f));
        if ((double)*(float *)(puVar17 + 0x20) - dVar39 < 0.0) {
          dVar40 = dVar44;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar44 = ABS((double)*(float *)((int)puVar17 + 0xfc));
        if ((double)*(float *)(puVar17 + 0x20) - dVar39 < 0.0) {
          dVar44 = dVar46;
        }
        fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar46 = dVar39;
        if (dVar39 < dVar40) {
          lVar32 = uVar22 - 0x1e0;
          lVar35 = uVar22 - 0x90;
          lVar34 = uVar22 - 0xa0;
          lVar38 = 2;
          fVar5 = (float)(dVar44 - dVar40) / (float)(dVar44 + dVar40);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar17 + 0x15c) = fVar5;
          *(float *)((int)puVar17 + 0x154) = fVar5;
          *(float *)(puVar17 + 0x2b) = fVar5;
          *(float *)(puVar17 + 0x2a) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar17 + 0x154) = *(float *)((int)puVar17 + 0x154) * fVar6;
          *(float *)(puVar17 + 0x2b) = *(float *)(puVar17 + 0x2b) * fVar5;
          *(float *)((int)puVar17 + 0x15c) = *(float *)((int)puVar17 + 0x15c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x150) = *(float *)((int)lVar32 + 0x140) * fVar5 * fVar5;
            iVar26 = (int)lVar34;
            lVar34 = lVar34 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar5 * fVar5;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0xa0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar5 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x150) = *(float *)((int)lVar32 + 0x150) * fVar5;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar6;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar32 = 2;
          dVar40 = dVar39;
          do {
            iVar26 = (int)lVar33;
            iVar18 = (int)lVar35;
            lVar33 = lVar33 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x150)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar46 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar4);
        }
        OrganicDeltAng
                  ((float)dVar46,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                   g_FrameTime * 3.1415927,&(moby->rotation).z,0x1a0000,
                   (float *)((int)pvVar11 + 0xe0));
        pfVar30 = (float *)((int)pvVar11 + 0xe8);
        if ((0.7853981852531433 <= dVar41) || (dVar48 <= (double)DAT_007407cc)) {
          if ((double)DAT_007407d0 <= dVar48) {
            Delt((float)dVar39,g_FrameTimeSq * 8.0,pfVar30);
          }
          else {
            Delt(-(DAT_007407c0 * g_FrameTime),DAT_007407c8 * g_FrameTimeSq,
                           pfVar30);
          }
        }
        else {
          Delt(DAT_007407c0 * g_FrameTime,DAT_007407c8 * g_FrameTimeSq,pfVar30);
        }
        dVar46 = (double)(moby->pos).y;
        fVar4 = (float)((double)*(float *)(iVar28 + 0x14) - dVar46);
        dVar45 = (double)(moby->pos).x;
        fVar5 = (float)((double)*(float *)(iVar28 + 0x10) - dVar45);
        uVar27 = *(undefined4 *)((int)pvVar11 + 0xec);
        dVar47 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        fVar3 = (float)((double)*(float *)((int)pvVar11 + 0xe8) / dVar47);
        dVar44 = (double)(fVar3 * fVar4);
        dVar42 = (double)(fVar3 * fVar5);
        dVar40 = dVar39;
        if (dVar39 - dVar47 < 0.0) {
          dVar40 = dVar44;
        }
        dVar43 = dVar39;
        if (dVar39 - dVar47 < 0.0) {
          dVar43 = dVar42;
        }
        if (dVar47 - dVar39 < 0.0) {
          dVar40 = dVar44;
        }
        if (dVar47 - dVar39 < 0.0) {
          dVar43 = dVar42;
        }
        (moby->pos).y = (float)(dVar46 + dVar40);
        (moby->pos).x = (float)(dVar45 + dVar43);
        MB_PushOutOfSplineWalls
                  (0x3ff0000000000000,uVar27,&DAT_001a5ed4,lVar23 + 0x10,lVar23 + 0x10);
        if (*(int *)((int)pvVar11 + 0xb4) == 2) {
          moby->state = '\r';
          return;
        }
        iVar28 = FastDecTimerS32(uVar36 + 0x120);
        if (iVar28 != 0) {
          auVar49 = ZEXT416(0xffffffff);
          auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
          auVar49 = loadVectorLeftIndexed(0x4c,0x1a5ed4);
          auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar49 = vectorMultiplyAddFloatingPoint
                              (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60
                               ,auVar50);
          auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
          auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar27 = storeVectorElementWordIndexed
                             (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x120,
                              uVar36);
          *(undefined4 *)((int)pvVar11 + 0x120U & 0xfffffffc) = uVar27;
          moby->state = '\f';
          return;
        }
        if ((double)DAT_007407cc <= dVar48) {
          return;
        }
        if ((double)(DAT_007407d4 * 0.017453292) <= dVar41) {
          return;
        }
        moby->state = '\t';
        moby->setByGroup = '\a';
        if (moby->animationId == '\x04') {
          return;
        }
        puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar23,4,0,*(undefined4 *)((int)puVar17 + 0x194));
        return;
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = moby->setByGroup;
      if (moby->animationId == '\x01') {
        return;
      }
      puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
      return;
    }
    lVar33 = 0;
    while ((UpdateCamsUsed[(int)lVar33] == '\0' ||
           (iVar28 = (int)(lVar33 << 7) + (int)(lVar33 << 5),
           *(short *)((int)UpdateCams[0].lPos + iVar28 + 0x22) != 0x12))) {
      iVar28 = (int)lVar33 + 1;
      lVar33 = (longlong)iVar28;
      if (0x2f < iVar28) {
LAB_001a7bb4:
        if (g_gameMode != GAME_MODE_SCENE) {
          return;
        }
        FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar11 + 0xfc));
        DeleteMoby(moby);
        return;
      }
    }
    Cam18_SetTriggered((UpdateCam *)((int)UpdateCams[0].mtx + iVar28));
    goto LAB_001a7bb4;
  }
  if (bVar1 == 7) {
    if (*(int *)((int)pvVar11 + 0xb4) == 2) {
      return;
    }
    moby->state = '\b';
    if (moby->animationId == '\x03') {
      return;
    }
    puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
    MB_SetAnimation(lVar23,3,0,*(undefined4 *)((int)puVar17 + 0x194));
    return;
  }
  if (bVar1 != 6) {
    if (bVar1 == 5) {
      if (((moby->animationId == '\x06') && (moby->animationBlend == 0.0)) &&
         ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->animationId != '\x01') {
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
        }
        FUN_001a1e90(*(undefined4 *)((int)pvVar11 + 0xf4));
      }
      iVar28 = M1051_001a2fb0(lVar23);
      if (iVar28 == 0) {
        return;
      }
      pvVar11 = moby->pVar;
      moby->state = '\x06';
      TransitionMovement(0,0);
      Splines[*(int *)((int)pvVar11 + 0xec)]->cnt = *(int32_t *)((int)pvVar11 + 0x114);
      Camera_DeactivateMobyDrivenCam(2);
      return;
    }
    if (bVar1 != 4) {
      if (bVar1 == 3) {
        if (((moby->animationId == '\x06') && (moby->animationBlend == 0.0)) &&
           ((moby->field43_0x70 & 2U) != 0)) {
          if (moby->animationId != '\x01') {
            puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
          }
          puVar37 = (ushort *)(&g_MobyGroups)[*(int *)((int)moby->pVar + 0xf0)];
          if (puVar37 != (ushort *)0x0) {
            dVar48 = 15.0;
            dVar39 = 20.0;
            do {
              pMVar29 = g_MobyInstance;
              uVar12 = *puVar37 & 0x7fff;
              *(f32 *)(puVar17 + 0x14) = g_MobyInstance[uVar12].pos.x;
              *(f32 *)((int)puVar17 + 0xa4) = pMVar29[uVar12].pos.y;
              *(f32 *)(puVar17 + 0x15) = pMVar29[uVar12].pos.z;
              *(f32 *)((int)puVar17 + 0xac) = pMVar29[uVar12].pos.w;
              dVar40 = (double)MB_randRangeFloat((float)dVar48,(float)dVar39);
              pMVar29 = g_MobyInstance + uVar12;
              *(float *)(puVar17 + 0x15) = (float)((double)*(float *)(puVar17 + 0x15) + dVar40);
              FUN_0047ca58(pMVar29,uVar22 - 0x150);
              uVar10 = *puVar37;
              puVar37 = puVar37 + 1;
            } while (-1 < (short)uVar10);
          }
        }
        iVar28 = M1051_001a3680(lVar23);
        if (iVar28 == 0) {
          return;
        }
        pvVar11 = moby->pVar;
        moby->state = '\x04';
        TransitionMovement(0,0);
        Splines[*(int *)((int)pvVar11 + 0xec)]->cnt = *(int32_t *)((int)pvVar11 + 0x114);
        Camera_DeactivateMobyDrivenCam(2);
        return;
      }
      if (bVar1 == 2) {
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x48);
        fVar4 = -(g_FrameTimeSq * 30.0 - *(float *)((int)pvVar11 + 0x48));
        *(float *)((int)pvVar11 + 0x48) = fVar4;
        uVar2 = moby->animationId;
        fVar3 = moby->animationBlend;
        bVar1 = moby->field43_0x70;
        if (uVar2 == '\b') {
          if ((ABS(((moby->pos).z - *(float *)((int)pvVar11 + 200)) / fVar4) <= 6.0) &&
             (uVar2 != '\t')) {
            uVar24 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar23,9,0,uVar24);
          }
        }
        else {
          fVar14 = (moby->pos).z;
          uVar12 = (int)fVar14 >> 0x1f;
          uVar16 = (int)*(uint *)((int)pvVar11 + 200) >> 0x1f;
          if ((int)((uVar12 >> 1 ^ (uint)fVar14) - uVar12) <
              (int)((uVar16 >> 1 ^ *(uint *)((int)pvVar11 + 200)) - uVar16)) {
            (moby->pos).z = *(f32 *)((int)pvVar11 + 200);
          }
          if ((fVar3 == 0.0) && ((bVar1 & 2) != 0)) {
            if (uVar2 != '\t') {
              if (uVar2 != '\x01') {
                puVar17[0x32] = (longlong)(int)(animationSpeed * 30.5);
                MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
              }
            }
            else if (uVar2 != '\x06') {
              puVar17[0x32] = (longlong)(int)(animationSpeed * 30.5);
              MB_SetAnimation(lVar23,6,0,*(undefined4 *)((int)puVar17 + 0x194));
            }
          }
        }
        iVar28 = M1051_001a3d50(lVar23);
        if (iVar28 == 0) {
          return;
        }
        pvVar11 = moby->pVar;
        moby->state = '\a';
        TransitionMovement(0,0);
        Splines[*(int *)((int)pvVar11 + 0xec)]->cnt = *(int32_t *)((int)pvVar11 + 0x114);
        Camera_DeactivateMobyDrivenCam(2);
        return;
      }
      if (bVar1 == 1) {
        if (*(int *)((int)pvVar11 + 0x170) != 0) {
          if (*(int *)((int)pvVar11 + 300) != 0) {
            return;
          }
          FUN_00189040(g_MobyInstance + *(int *)((int)pvVar11 + 0xfc));
          FUN_00189040(g_MobyInstance + *(int *)((int)pvVar11 + 0x100));
          FUN_0035511c(*(undefined4 *)((int)pvVar11 + 0x104));
          pMVar13 = moby->pClass;
          MVar9 = moby->modeBits;
          *(undefined4 *)((int)pvVar11 + 0x170) = 0;
          moby->state = '\x02';
          moby->collision = pMVar13->collision;
          moby->modeBits =
               MVar9 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
               CAN_BE_AUTO_TARGETED;
          if (moby->animationId != '\b') {
            uVar24 = idol::GetAnimDuration(1);
            MB_SetAnimation(lVar23,8,0,uVar24);
          }
          M1051_001a43a8(lVar23);
          return;
        }
        if (*(int *)((int)pvVar11 + 0xb4) == 2) {
          return;
        }
        if (*(short *)(iVar28 + 0xa6) != 0) {
          return;
        }
        *(undefined4 *)((int)pvVar11 + 0x170) = 1;
        uVar27 = idol::GetAnimDuration(10);
        *(undefined4 *)((int)pvVar11 + 300) = uVar27;
        return;
      }
      if (bVar1 != 0) {
        return;
      }
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x41f00000;
      *(undefined2 *)((int)pvVar11 + 0x24) = 0x1e;
      *(undefined1 *)((int)pvVar11 + 0x28) = 3;
      *(undefined1 *)((int)pvVar11 + 0x29) = 1;
      *(undefined1 *)((int)pvVar11 + 0x2e) = 1;
      uVar31 = FastDoubleToInt(0x402c000000000000);
      *(undefined1 *)((int)pvVar11 + 0x58) = uVar31;
      uVar31 = FastDoubleToInt(0x4032666660000000);
      *(undefined1 *)((int)pvVar11 + 0x5a) = uVar31;
      uVar27 = idol::GetAnimDuration(0x4b0);
      *(undefined4 *)((int)pvVar11 + 0x120) = uVar27;
      *(undefined4 *)((int)pvVar11 + 0x178) = 0;
      FUN_005e7e98(uVar36 + 0xc0,lVar23 + 0x10);
      *(undefined4 *)((int)pvVar11 + 0x10c) = 0xffffffff;
      pSVar15 = Splines[*(int *)((int)pvVar11 + 0xec)];
      *(int32_t *)((int)pvVar11 + 0x114) = pSVar15->cnt;
      uVar12 = pSVar15->cnt;
      FUN_005e8f04(0x3fe0000000000000,uVar36 + 0xd0,pSVar15->points,
                   pSVar15->points +
                   ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0));
      dVar39 = (double)FUN_005e8588(uVar36 + 0xc0,uVar36 + 0xd0);
      *(float *)((int)pvVar11 + 0xdc) = (float)dVar39;
      dVar39 = (double)MB_randRot();
      *(float *)((int)pvVar11 + 0x128) = (float)dVar39;
      uVar27 = idol::GetAnimDuration(0x1e);
      *(undefined4 *)((int)pvVar11 + 300) = uVar27;
      fVar3 = (moby->pos).z;
      moby->collision = (ushort *)0x0;
      uVar27 = *(undefined4 *)((int)pvVar11 + 0xf4);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (CAN_BE_DAMAGED|DISABLED);
      (moby->pos).z = fVar3 + 17.5;
      FUN_001a1e24(uVar27);
      if ((g_MiscLevelFlags.field35_0x23 != 0) && (CHAR_ARRAY_0096c165[0x1d] == '\0')) {
        DeleteMoby(moby);
        return;
      }
      moby->state = '\x01';
      return;
    }
    puVar37 = (ushort *)(&g_MobyGroups)[*(int *)((int)moby->pVar + 0xf0)];
    if (puVar37 != (ushort *)0x0) {
      dVar48 = 15.0;
      dVar39 = 20.0;
      do {
        pMVar29 = g_MobyInstance;
        uVar12 = *puVar37 & 0x7fff;
        *(f32 *)(puVar17 + 0x12) = g_MobyInstance[uVar12].pos.x;
        *(f32 *)((int)puVar17 + 0x94) = pMVar29[uVar12].pos.y;
        *(f32 *)(puVar17 + 0x13) = pMVar29[uVar12].pos.z;
        *(f32 *)((int)puVar17 + 0x9c) = pMVar29[uVar12].pos.w;
        dVar40 = (double)MB_randRangeFloat((float)dVar48,(float)dVar39);
        pMVar29 = g_MobyInstance + uVar12;
        *(float *)(puVar17 + 0x13) = (float)((double)*(float *)(puVar17 + 0x13) + dVar40);
        FUN_0047ca58(pMVar29,uVar22 - 0x160);
        uVar10 = *puVar37;
        puVar37 = puVar37 + 1;
      } while (-1 < (short)uVar10);
    }
  }
  M1051_001a2558(lVar23);
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    iVar28 = FUN_0047cc38(*(undefined4 *)((int)pvVar11 + 0xf0));
    if (iVar28 != 0) goto LAB_001a6880;
    uVar2 = moby->state;
  }
  if (uVar2 != '\x06') {
    return;
  }
  iVar28 = MB_CountActiveMobysByGroup
                     (*(undefined4 *)((int)pvVar11 + 0xf4),0xffffffffffffffff);
  if (iVar28 != 0) {
    return;
  }
LAB_001a6880:
  auVar49 = ZEXT416(0xffffffff);
  auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  moby->state = '\b';
  fVar3 = animationSpeed;
  auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
  auVar49 = loadVectorLeftIndexed(0x30,0x1a5ed4);
  auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar49 = vectorMultiplyAddFloatingPoint
                      (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,auVar50
                      );
  auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
  auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar27 = storeVectorElementWordIndexed
                     (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x120,uVar36);
  *(undefined4 *)((int)pvVar11 + 0x120U & 0xfffffffc) = uVar27;
  if (moby->animationId != '\x03') {
    puVar17[0x32] = (longlong)(int)(fVar3 * 20.5);
    MB_SetAnimation(lVar23,3,0,*(undefined4 *)((int)puVar17 + 0x194));
  }
  return;
}


