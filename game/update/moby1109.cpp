// game/update/moby1109.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x1ca5d8-0x1ce3d8
#include "game/update/moby1109.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1091.h"
#include "game/update/moby1108.h"
#include "game/update/moby1118.h"
#include "game/update/moby1898.h"
#include "game/update/moby751.h"
#include "idol/fastfunc.h"

// 0x01ca5d8 (0x308 bytes)
void M1109_001ca5d8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  GPiece<32> local_30;
  
  DrawRoundedRect
            (DAT_007641e8 + DAT_007641f4,DAT_007641f8 + DAT_007641e8,DAT_007641e4 + DAT_007641fc,
             DAT_007641e4 + DAT_00764200,DAT_00764204);
  dVar7 = (double)FastIntToDouble(worldUpdateTime % 0x3c);
  fVar1 = (float)(dVar7 * 0.01666666753590107) * 6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar7 = 1.0;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 3.0 + 0.5);
  if ((dVar8 <= 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
    dVar7 = 0.0;
  }
  uVar5 = FastLerpColor(dVar7,DAT_007641ec,DAT_007641f0);
  iVar6 = MB_randInt(10);
  FastDoubleToInt((double)(longlong)iVar6);
  FontPrintLargeCenter(DAT_007641e4,DAT_007641e8,uVar5,local_30,8);
  return;
}


// 0x01ca8e8 (0x44 bytes)
void M1109_001ca8e8(void)

{
  DAT_00764254 = 0x10000;
  DAT_00ef1a50 = g_FrameTime * 12.0;
  DAT_00ef1a54 = g_FrameTime * 3.1415927;
  return;
}


// 0x01ca968 (0x5fc bytes)
void M1109_001ca968
               (double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [12];
  longlong local_a0;
  
  MB_SpawnExplosionSparks(0x4000000000000000,0x402a000000000000);
  local_d0[0] = 0x4f008fff;
  local_d0[1] = 0x4f008fff;
  local_d0[2] = 0x4f007fff;
  iVar11 = 0;
  local_d0[3] = 0x4f006fff;
  local_d0[4] = 0x2fffffff;
  local_d0[5] = 0x2fffffff;
  local_d0[6] = 0x2f005f7f;
  local_d0[7] = 0x2f004f7f;
  local_d0[8] = 0x2f003f7f;
  local_d0[9] = 0x2f00004f;
  iVar10 = 0;
  local_d0[10] = 0x2f000000;
  local_d0[0xb] = 0x3f000000;
  if (0 < param_5) {
    dVar13 = 15.5;
    dVar12 = (double)(float)(param_1 * 400000.0);
    dVar14 = 20.5;
    dVar18 = (double)(float)(param_1 * 10.0);
    dVar15 = 25.5;
    dVar17 = 30.5;
    do {
      lVar4 = MB_randInt(6);
      uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar4 << 2));
      lVar4 = MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar4 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar14);
      local_a0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar13),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar17);
      local_a0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
      SpawnPart_11
                (dVar12,(double)(float)((double)g_FrameTime * dVar18),param_3,param_4,
                 uVar2,uVar3);
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_5);
  }
  if (0 < DAT_007642c4 * param_5) {
    dVar12 = 0.0;
    dVar13 = 1.0;
    uVar16 = 0x3fecccccc0000000;
    dVar14 = 1.2000000476837158;
    dVar15 = 0.800000011920929;
    do {
      MB_randSphere(dVar12,dVar13,local_110);
      MB_randSphere(dVar12,uVar16,local_100);
      MB_randRangeFloat(DAT_00ef1a70,DAT_00764290);
      MB_randSphere(dVar12,uVar16,local_100);
      MB_randRangeFloat(DAT_00ef1a74,DAT_0076429c);
      MB_randRangeFloat(DAT_00764294,DAT_00764298);
      MB_randRangeFloat(DAT_007642a0,DAT_007642a4);
      uVar3 = DAT_007642ac;
      uVar2 = DAT_007642a8;
      MB_randRangeFloat((float)dVar12,(float)dVar13);
      uVar5 = FastLerpColor(uVar2,uVar3);
      uVar3 = DAT_007642b4;
      uVar2 = DAT_007642b0;
      MB_randRangeFloat((float)dVar12,(float)dVar13);
      uVar6 = FastLerpColor(uVar2,uVar3);
      local_a0 = (longlong)(DAT_007642b8 << 1);
      dVar17 = (double)MB_randRangeFloat((float)(longlong)DAT_007642b8,(float)local_a0);
      uVar7 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      local_a0 = (longlong)DAT_007642bc;
      dVar17 = (double)MB_randRangeFloat
                                 ((float)local_a0,(float)((double)local_a0 * dVar14));
      uVar8 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      local_a0 = (longlong)DAT_007642c0;
      dVar17 = (double)MB_randRangeFloat
                                 ((float)((double)local_a0 * dVar15),(float)local_a0);
      uVar9 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      SpawnPart_2(local_110,local_f0,local_e0,uVar5,uVar6,uVar7,uVar8,uVar9);
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_007642c4 * param_5);
  }
  return;
}


// 0x01caf98 (0x644 bytes)
void M1109_001caf98(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  short sVar13;
  int iVar12;
  ushort *puVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  GPiece<16> auStack_130;
  GPiece<16> local_120;
  GPiece<16> auStack_110;
  GPiece<16> local_100;
  GPiece<16> auStack_f0;
  GPiece<32> local_e0;
  
  dVar18 = 0.0;
  iVar12 = *(int *)(param_1 + 0x78);
  FUN_002d1440(0x43d50000433dc000,0x432d11ec00000000,
               (int)(animationSpeed * ((float)(longlong)DAT_00764284 + 0.5)),DAT_00764288,
               PTR_DAT_0076428c);
  dVar20 = 1.0;
  sVar13 = 0;
  puVar14 = (ushort *)(&g_MobyGroups)[*(int *)(iVar12 + 0xcc)];
  uVar17 = 0x4000000000000000;
  uVar21 = 0x403e000000000000;
  dVar19 = dVar18;
  do {
    uVar1 = *puVar14;
    MB_randSphere(dVar20,uVar17,auStack_130);
    M1109_001ca968(uVar21,param_1,&g_MobyInstance[uVar1 & 0x7fff].pos,auStack_130,1);
    uVar2 = *puVar14;
    sVar13 = sVar13 + 1;
    puVar14 = puVar14 + 1;
    dVar15 = (double)g_MobyInstance[uVar1 & 0x7fff].bSphere.rad;
    if (dVar18 - dVar15 < 0.0) {
      dVar18 = dVar15;
    }
  } while (-1 < (short)uVar2);
  FastIntToDouble(sVar13);
  puVar14 = (ushort *)(&g_MobyGroups)[*(int *)(iVar12 + 0xcc)];
  do {
    uVar3 = *puVar14 & 0x7fff;
    MB_randSphere
              ((double)(g_FrameTime * 0.2617994),
               (double)(g_FrameTime * 0.08726646),auStack_110);
    M1103_001bc7c0(g_MobyInstance + uVar3,local_120,auStack_110);
    iVar12 = 0;
    if (0 < DAT_00764304) {
      dVar18 = 0.00048828125;
      uVar17 = 0x4010000000000000;
      do {
        MB_randSphere
                  (dVar19,(double)(float)((double)g_MobyInstance[uVar3].bSphere.rad * dVar18),
                   local_100);
        MB_randSphere(dVar19,(double)(DAT_007642d0 * g_FrameTime),auStack_f0);
        MB_randRangeFloat(DAT_007642e4,DAT_007642e8);
        MB_randRangeFloat(DAT_007642ec,DAT_007642f0);
        uVar5 = DAT_007642f8;
        uVar4 = DAT_007642f4;
        MB_randRangeFloat((float)dVar19,(float)dVar20);
        uVar21 = FastLerpColor(uVar4,uVar5);
        uVar5 = DAT_00764300;
        uVar4 = DAT_007642fc;
        MB_randRangeFloat((float)dVar19,(float)dVar20);
        uVar6 = FastLerpColor(uVar4,uVar5);
        dVar15 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
        uVar7 = FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(longlong)DAT_007642d4 * dVar15 + dVar20)));
        dVar16 = (double)(longlong)DAT_007642d8;
        dVar15 = (double)MB_randRangeFloat(-DAT_007642e0,DAT_007642e0);
        uVar8 = FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)(dVar16 * (double)(float)(dVar15 + dVar20))));
        dVar16 = (double)(longlong)DAT_007642dc;
        dVar15 = (double)MB_randRangeFloat(-DAT_007642e0,DAT_007642e0);
        uVar9 = FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)(dVar16 * (double)(float)(dVar15 + dVar20))));
        iVar10 = SpawnPart_2(local_100,auStack_f0,local_e0,uVar21,uVar6,uVar7,uVar8,uVar9);
        if (iVar10 != 0) {
          cVar11 = FastDoubleToInt(uVar17);
          *(char *)(iVar10 + 9) = cVar11 + -0x20;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_00764304);
    }
    uVar1 = *puVar14;
    puVar14 = puVar14 + 1;
  } while (-1 < (short)uVar1);
  g_MobyInstance[uVar3].setByGroup = '\x1e';
  return;
}


// 0x01cb618 (0x16a0 bytes)
// inlined: FastAtan2 @0x1cb920, FastAtan2 @0x1cbac4, FastAtan2 @0x1cbcb4, FastAtan2 @0x1cbe5c, FastAtan2 @0x1cc0e4, FastAtan2 @0x1cc284, FastAtan2 @0x1cc47c, FastAtan2 @0x1cc618, FastAtan2 @0x1cc808, FastAtan2 @0x1cc9b0
ulonglong M1109_001cb618(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  Spline *pSVar15;
  Spline *pSVar16;
  Spline *pSVar17;
  uint uVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  float *pfVar28;
  float *pfVar29;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar26 = uVar22 - 0x2d0;
  puVar19 = (ulonglong *)lVar26;
  *puVar19 = uVar22;
  puVar19[0x5c] = in_LR;
  puVar19[0x56] = in_f28;
  puVar19[0x57] = in_f29;
  puVar19[0x58] = in_f30;
  puVar19[0x59] = in_f31;
  puVar19[0x55] = unaff_r31;
  puVar19[0x4c] = unaff_r22;
  iVar30 = (int)(param_2 << 2);
  puVar19[0x52] = unaff_r28;
  fVar1 = animationSpeed;
  puVar19[0x54] = unaff_r30;
  pvVar12 = param_1->pVar;
  iVar13 = *(int *)((int)pvVar12 + iVar30 + 0x60);
  iVar27 = *(int *)((int)pvVar12 + iVar30 + 0x74);
  iVar30 = *(int *)((int)pvVar12 + iVar30 + 0x88);
  puVar19[0x53] = unaff_r29;
  puVar19[0x4f] = unaff_r25;
  pSVar15 = Splines[iVar13];
  pSVar16 = Splines[iVar27];
  pSVar17 = Splines[iVar30];
  puVar19[0x51] = unaff_r27;
  puVar19[0x50] = unaff_r26;
  puVar19[0x4e] = unaff_r24;
  puVar19[0x4d] = unaff_r23;
  puVar19[0x4b] = unaff_r21;
  Delt(1.0,1.0 / (float)(longlong)(fVar1 * 1200.5),(float *)((int)pvVar12 + 0xf4));
  puVar19[0x49] = (longlong)(pSVar15->cnt + -1);
  dVar39 = (double)(*(float *)((int)pvVar12 + 0xf4) * (float)(longlong)puVar19[0x49]);
  lVar23 = FastDoubleToInt(dVar39);
  iVar13 = pSVar16->cnt;
  iVar30 = (int)lVar23;
  puVar19[0x49] = (longlong)iVar30;
  fVar1 = *(float *)((int)pvVar12 + 0xf4);
  uVar35 = puVar19[0x49];
  puVar19[0x49] = (longlong)(iVar13 + -1);
  dVar38 = (double)(longlong)uVar35;
  dVar39 = (double)(float)(dVar39 - dVar38);
  lVar24 = FastDoubleToInt((double)(fVar1 * (float)(longlong)puVar19[0x49]));
  puVar19[0x49] = (longlong)(pSVar17->cnt + -1);
  dVar40 = (double)(*(float *)((int)pvVar12 + 0xf4) * (float)(longlong)puVar19[0x49]);
  lVar25 = FastDoubleToInt(dVar40);
  iVar13 = (int)(lVar23 << 4);
  dVar40 = (double)(float)(dVar40 - dVar38);
  dVar38 = (double)*(float *)((int)&pSVar15->points[0].x + iVar13);
  fVar1 = *(float *)((int)&pSVar15->points[1].y + iVar13);
  fVar2 = *(float *)((int)&pSVar15->points[0].y + iVar13);
  iVar27 = (int)(lVar25 << 4);
  pfVar29 = (float *)((int)&((Spline *)(pSVar17->points + -1))->cnt + iVar27);
  fVar3 = *(float *)((int)&pSVar15->points[1].z + iVar13);
  fVar4 = *(float *)((int)&pSVar15->points[0].z + iVar13);
  uVar5 = *(undefined4 *)((int)&pSVar15->points[1].w + iVar13);
  *(float *)(puVar19 + 0x10) =
       (float)(dVar39 * (double)(float)((double)*(float *)((int)&pSVar15->points[1].x + iVar13) -
                                       dVar38) + dVar38);
  *(float *)((int)puVar19 + 0x84) =
       (float)(dVar39 * (double)(fVar1 - fVar2) +
              (double)*(float *)((int)&pSVar15->points[0].y + iVar13));
  fVar1 = *(float *)((int)&pSVar15->points[0].z + iVar13);
  *(undefined4 *)((int)puVar19 + 0x8c) = uVar5;
  *(float *)(puVar19 + 0x11) = (float)(dVar39 * (double)(fVar3 - fVar4) + (double)fVar1);
  fVar1 = pfVar29[8];
  fVar2 = pfVar29[4];
  fVar3 = pfVar29[9];
  fVar4 = pfVar29[5];
  fVar6 = pfVar29[10];
  fVar7 = pfVar29[6];
  (param_1->pos).w = pfVar29[0xb];
  (param_1->pos).x =
       (float)(dVar40 * (double)(float)((double)fVar1 - (double)fVar2) + (double)fVar2);
  (param_1->pos).y =
       (float)(dVar40 * (double)(float)((double)fVar3 - (double)fVar4) + (double)fVar4);
  (param_1->pos).z =
       (float)(dVar40 * (double)(float)((double)fVar6 - (double)fVar7) + (double)fVar7);
  Camera_SetMobyDrivenTargetPos((float *)(puVar19 + 0x10));
  dVar38 = 0.7853981852531433;
  if ((int)lVar25 < 1) {
    fVar1 = pSVar17->points[0].y;
    fVar2 = pSVar17->points[1].y;
    fVar3 = pSVar17->points[0].x;
    fVar6 = fVar1 - fVar2;
    fVar4 = pSVar17->points[1].x;
    fVar7 = fVar3 - fVar4;
    fVar11 = pSVar17->points[1].z - pSVar17->points[0].z;
    fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    *(float *)(puVar19 + 0x1a) = fVar11;
    fVar11 = ABS(fVar11);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar19 + 0xcc) = fVar6;
    *(float *)((int)puVar19 + 0xd4) = fVar7 - fVar11;
    dVar39 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x1a) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar19 + 0xcc));
    if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
      fVar6 = fVar11;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = ABS(*(float *)(puVar19 + 0x1a));
    if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
      fVar8 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar34 = dVar39;
    if (0.0 < fVar6) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0x118;
      lVar25 = uVar22 - 0x128;
      lVar31 = 2;
      fVar6 = (fVar8 - fVar6) / (fVar8 + fVar6);
      fVar8 = fVar6 * fVar6;
      *(float *)((int)puVar19 + 0x1b4) = fVar6;
      *(float *)((int)puVar19 + 0x1ac) = fVar6;
      *(float *)(puVar19 + 0x36) = fVar6;
      *(float *)(puVar19 + 0x35) = fVar6;
      fVar6 = fVar8 * fVar8;
      *(float *)((int)puVar19 + 0x1ac) = *(float *)((int)puVar19 + 0x1ac) * fVar8;
      *(float *)(puVar19 + 0x36) = *(float *)(puVar19 + 0x36) * fVar6;
      *(float *)((int)puVar19 + 0x1b4) = *(float *)((int)puVar19 + 0x1b4) * fVar6 * fVar8;
      do {
        *(float *)((int)lVar23 + 0x1a8) = *(float *)((int)lVar23 + 0x198) * fVar6 * fVar6;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0x128;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar6 = *pfVar29;
        fVar8 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x1a8) = *(float *)((int)lVar23 + 0x1a8) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x1a8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar11 + fVar7);
    }
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)(puVar19 + 0x18) = fVar4;
    *(float *)((int)puVar19 + 0xc4) = fVar2;
    *(float *)(puVar19 + 0x19) = fVar6 - fVar3;
    uVar18 = *(uint *)(puVar19 + 0x18);
    fVar1 = *(float *)(puVar19 + 0x18);
    uVar14 = *(uint *)((int)puVar19 + 0xc4);
    (param_1->rotation).y = (float)-dVar34;
    uVar35 = (ulonglong)(uVar18 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x19) >> 0x1e) & 2 | (ulonglong)(uVar14 >> 0x1d) & 4;
    fVar1 = ABS(fVar1);
    if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar19 + 0xc4));
    if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0x138;
      lVar25 = uVar22 - 0x148;
      lVar31 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar19 + 0x194) = fVar1;
      *(float *)((int)puVar19 + 0x18c) = fVar1;
      *(float *)(puVar19 + 0x32) = fVar1;
      *(float *)(puVar19 + 0x31) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x18c) = *(float *)((int)puVar19 + 0x18c) * fVar3;
      *(float *)(puVar19 + 0x32) = *(float *)(puVar19 + 0x32) * fVar1;
      *(float *)((int)puVar19 + 0x194) = *(float *)((int)puVar19 + 0x194) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x188) = *(float *)((int)lVar23 + 0x178) * fVar1 * fVar1;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar1 * fVar1;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0x148;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar1 = *pfVar29;
        fVar3 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x188) = *(float *)((int)lVar23 + 0x188) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar27 + 0x188)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar2 + fVar4);
    }
  }
  else {
    fVar1 = pfVar29[4];
    fVar2 = pfVar29[5];
    fVar3 = fVar1 - *(float *)((int)&((Spline *)(pSVar17->points + -1))->cnt + iVar27);
    fVar4 = fVar2 - pfVar29[1];
    fVar7 = ABS(fVar3);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar19 + 0xfc) = fVar3;
    *(float *)(puVar19 + 0x20) = fVar4;
    *(float *)((int)puVar19 + 0x104) = fVar7 - fVar6;
    dVar39 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x20) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar19 + 0xfc));
    if (*(float *)((int)puVar19 + 0x104) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar19 + 0x20));
    if (*(float *)((int)puVar19 + 0x104) - 0.0 < 0.0) {
      fVar11 = fVar7;
    }
    dVar34 = dVar39;
    if (0.0 < fVar3) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0xa8;
      lVar32 = uVar22 - 0x98;
      lVar31 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x234) = fVar3;
      *(float *)((int)puVar19 + 0x22c) = fVar3;
      *(float *)(puVar19 + 0x46) = fVar3;
      *(float *)(puVar19 + 0x45) = fVar3;
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar19 + 0x22c) = *(float *)((int)puVar19 + 0x22c) * fVar7;
      *(float *)(puVar19 + 0x46) = *(float *)(puVar19 + 0x46) * fVar3;
      *(float *)((int)puVar19 + 0x234) = *(float *)((int)puVar19 + 0x234) * fVar3 * fVar7;
      do {
        *(float *)((int)lVar23 + 0x228) = *(float *)((int)lVar23 + 0x218) * fVar3 * fVar3;
        iVar27 = (int)lVar25;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0xa8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar3 = *pfVar28;
        fVar7 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x228) = *(float *)((int)lVar23 + 0x228) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar20 = (int)lVar32;
        lVar32 = lVar32 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x228)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    fVar1 = pfVar29[8] - fVar1;
    fVar2 = pfVar29[9] - fVar2;
    fVar4 = ABS(fVar1);
    fVar3 = ABS(fVar2);
    *(float *)(puVar19 + 0x1e) = fVar1;
    *(float *)((int)puVar19 + 0xf4) = fVar2;
    *(float *)(puVar19 + 0x1f) = fVar4 - fVar3;
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xf4) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar19 + 0x1e));
    if (*(float *)(puVar19 + 0x1f) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar19 + 0xf4));
    if (*(float *)(puVar19 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0xb8;
      lVar25 = uVar22 - 200;
      lVar31 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar19 + 0x214) = fVar1;
      *(float *)((int)puVar19 + 0x20c) = fVar1;
      *(float *)(puVar19 + 0x42) = fVar1;
      *(float *)(puVar19 + 0x41) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x20c) = *(float *)((int)puVar19 + 0x20c) * fVar3;
      *(float *)(puVar19 + 0x42) = *(float *)(puVar19 + 0x42) * fVar1;
      *(float *)((int)puVar19 + 0x214) = *(float *)((int)puVar19 + 0x214) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x208) = *(float *)((int)lVar23 + 0x1f8) * fVar1 * fVar1;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar1 * fVar1;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 200;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x208) = *(float *)((int)lVar23 + 0x208) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar27 + 0x208)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar4);
    }
    dVar33 = (double)FastDiffRots(dVar33,dVar34);
    dVar34 = (double)FastWrapRot((float)(dVar40 * dVar33),(float)dVar34);
    (param_1->rotation).z = (float)dVar34;
    fVar1 = pfVar29[5];
    fVar4 = pfVar29[1] - fVar1;
    fVar2 = pfVar29[4];
    fVar6 = *pfVar29 - fVar2;
    fVar3 = pfVar29[6];
    fVar7 = fVar3 - pfVar29[2];
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar19 + 0x1d) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar4);
    *(float *)((int)puVar19 + 0xe4) = fVar4;
    *(float *)((int)puVar19 + 0xec) = (float)(dVar33 - dVar37);
    fVar4 = pfVar29[8];
    fVar6 = pfVar29[9];
    fVar7 = pfVar29[10];
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xe4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xec) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x1d) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar19 + 0xe4));
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar39 < 0.0) {
      dVar34 = dVar37;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar37 = ABS((double)*(float *)(puVar19 + 0x1d));
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar39 < 0.0) {
      dVar37 = dVar33;
    }
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0xd8;
      lVar25 = uVar22 - 0xe8;
      lVar31 = 2;
      fVar9 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar19 + 500) = fVar9;
      *(float *)((int)puVar19 + 0x1ec) = fVar9;
      *(float *)(puVar19 + 0x3e) = fVar9;
      *(float *)(puVar19 + 0x3d) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar19 + 0x1ec) = *(float *)((int)puVar19 + 0x1ec) * fVar10;
      *(float *)(puVar19 + 0x3e) = *(float *)(puVar19 + 0x3e) * fVar9;
      *(float *)((int)puVar19 + 500) = *(float *)((int)puVar19 + 500) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0x1e8) = *(float *)((int)lVar23 + 0x1d8) * fVar9 * fVar9;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar9 * fVar9;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0xe8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar9 = *pfVar29;
        fVar10 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x1e8) = *(float *)((int)lVar23 + 0x1e8) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar10;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      dVar34 = dVar39;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x1e8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar34 + dVar38) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar19 + 0xdc) = fVar7;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar1);
    *(float *)(puVar19 + 0x1b) = fVar1;
    *(float *)(puVar19 + 0x1c) = (float)(dVar37 - dVar36);
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x1b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xdc) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar19 + 0x1b));
    if ((double)*(float *)(puVar19 + 0x1c) - dVar39 < 0.0) {
      dVar34 = dVar36;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar36 = ABS((double)*(float *)((int)puVar19 + 0xdc));
    if ((double)*(float *)(puVar19 + 0x1c) - dVar39 < 0.0) {
      dVar36 = dVar37;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0xf8;
      lVar25 = uVar22 - 0x108;
      lVar31 = 2;
      fVar3 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x1d4) = fVar3;
      *(float *)((int)puVar19 + 0x1cc) = fVar3;
      *(float *)(puVar19 + 0x3a) = fVar3;
      *(float *)(puVar19 + 0x39) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar19 + 0x1cc) = *(float *)((int)puVar19 + 0x1cc) * fVar4;
      *(float *)(puVar19 + 0x3a) = *(float *)(puVar19 + 0x3a) * fVar3;
      *(float *)((int)puVar19 + 0x1d4) = *(float *)((int)puVar19 + 0x1d4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar23 + 0x1c8) = *(float *)((int)lVar23 + 0x1b8) * fVar3 * fVar3;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0x108;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar3 = *pfVar29;
        fVar4 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x1c8) = *(float *)((int)lVar23 + 0x1c8) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar27 + 0x1c8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar39 = (double)((float)(dVar39 + dVar38) * fVar1 + fVar2);
    }
    dVar33 = -dVar33;
    dVar39 = (double)FastDiffRots(-dVar39,dVar33);
    dVar39 = (double)FastWrapRot((float)(dVar40 * dVar39),(float)dVar33);
    (param_1->rotation).y = (float)dVar39;
    fVar1 = *(float *)((int)pvVar12 + 0xb0) + 1.5707963;
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
    (param_1->rotation).y =
         (float)(dVar39 * (double)(fVar1 * fVar4 * 2.601887e-06 +
                                  fVar4 * -0.0001980741 +
                                  fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
    dVar39 = (double)FastWrapRot((param_1->rotation).z,*(float *)((int)pvVar12 + 0xb0));
  }
  (param_1->rotation).z = (float)dVar39;
  if ((0 < iVar30) && (0 < (int)lVar24)) {
    iVar27 = (int)(lVar24 << 4);
    dVar39 = 0.0;
    *(undefined4 *)((int)puVar19 + 0x7c) = 0;
    *(undefined4 *)(puVar19 + 0xf) = 0;
    *(undefined4 *)((int)puVar19 + 0x74) = 0;
    *(undefined4 *)(puVar19 + 0xe) = 0;
    fVar1 = *(float *)(puVar19 + 0x10);
    fVar2 = *(float *)((int)puVar19 + 0x84);
    fVar3 = *(float *)((int)&pSVar16->points[0].x + iVar27) - fVar1;
    fVar4 = *(float *)((int)&pSVar16->points[0].y + iVar27) - fVar2;
    fVar11 = ABS(fVar3);
    fVar7 = ABS(fVar4);
    *(float *)((int)puVar19 + 0xb4) = fVar3;
    *(float *)(puVar19 + 0x17) = fVar4;
    *(float *)((int)puVar19 + 0xbc) = fVar11 - fVar7;
    fVar3 = *(float *)((int)&pSVar16->points[1].x + iVar27);
    fVar4 = *(float *)((int)&pSVar16->points[1].y + iVar27);
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x17) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar19 + 0xb4));
    if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar7 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar19 + 0x17));
    if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
      fVar9 = fVar11;
    }
    dVar34 = dVar39;
    if (0.0 < fVar6) {
      lVar23 = uVar22 - 0x2c0;
      lVar24 = uVar22 - 0x168;
      lVar25 = uVar22 - 0x158;
      lVar32 = 2;
      fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
      fVar11 = fVar6 * fVar6;
      *(float *)((int)puVar19 + 0x174) = fVar6;
      *(float *)((int)puVar19 + 0x16c) = fVar6;
      *(float *)(puVar19 + 0x2e) = fVar6;
      *(float *)(puVar19 + 0x2d) = fVar6;
      fVar6 = fVar11 * fVar11;
      *(float *)((int)puVar19 + 0x16c) = *(float *)((int)puVar19 + 0x16c) * fVar11;
      *(float *)(puVar19 + 0x2e) = *(float *)(puVar19 + 0x2e) * fVar6;
      *(float *)((int)puVar19 + 0x174) = *(float *)((int)puVar19 + 0x174) * fVar6 * fVar11;
      do {
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x158) * fVar6 * fVar6;
        iVar20 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x168;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar6 = *pfVar29;
        fVar11 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x168) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0x168)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar34 = (double)((float)(dVar34 + dVar38) * fVar8 + fVar7);
    }
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar6 = ABS(fVar3);
    fVar2 = ABS(fVar4);
    *(float *)(puVar19 + 0x15) = fVar3;
    *(float *)((int)puVar19 + 0xac) = fVar4;
    *(float *)(puVar19 + 0x16) = fVar6 - fVar2;
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xac) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar19 + 0x15));
    if (*(float *)(puVar19 + 0x16) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar19 + 0xac));
    if (*(float *)(puVar19 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0x178;
      lVar24 = uVar22 - 0x188;
      lVar32 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar19 + 0x154) = fVar1;
      *(float *)((int)puVar19 + 0x14c) = fVar1;
      *(float *)(puVar19 + 0x2a) = fVar1;
      *(float *)(puVar19 + 0x29) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x14c) = *(float *)((int)puVar19 + 0x14c) * fVar3;
      *(float *)(puVar19 + 0x2a) = *(float *)(puVar19 + 0x2a) * fVar1;
      *(float *)((int)puVar19 + 0x154) = *(float *)((int)puVar19 + 0x154) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x138) * fVar1 * fVar1;
        iVar20 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x188;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar1 = *pfVar29;
        fVar3 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x148) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar20 = (int)lVar23;
        iVar21 = (int)lVar25;
        lVar23 = lVar23 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0x148)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar33 = (double)((float)(dVar33 + dVar38) * fVar2 + fVar4);
    }
    dVar33 = (double)FastDiffRots(dVar33,dVar34);
    dVar34 = (double)FastWrapRot((float)(dVar40 * dVar33),(float)dVar34);
    *(float *)(puVar19 + 0xf) = (float)dVar34;
    fVar1 = *(float *)((int)puVar19 + 0x84);
    fVar2 = *(float *)(puVar19 + 0x10);
    fVar4 = fVar1 - *(float *)((int)&pSVar16->points[0].y + iVar27);
    fVar6 = fVar2 - *(float *)((int)&pSVar16->points[0].x + iVar27);
    fVar3 = *(float *)(puVar19 + 0x11);
    fVar7 = *(float *)((int)&pSVar16->points[0].z + iVar27) - fVar3;
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar19 + 0x14) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar4);
    *(float *)((int)puVar19 + 0x9c) = fVar4;
    *(float *)((int)puVar19 + 0xa4) = (float)(dVar33 - dVar37);
    fVar4 = *(float *)((int)&pSVar16->points[1].x + iVar27);
    fVar6 = *(float *)((int)&pSVar16->points[1].y + iVar27);
    fVar7 = *(float *)((int)&pSVar16->points[1].z + iVar27);
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar19 + 0x9c));
    if ((double)*(float *)((int)puVar19 + 0xa4) - dVar39 < 0.0) {
      dVar34 = dVar37;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar37 = ABS((double)*(float *)(puVar19 + 0x14));
    if ((double)*(float *)((int)puVar19 + 0xa4) - dVar39 < 0.0) {
      dVar37 = dVar33;
    }
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0x198;
      lVar24 = uVar22 - 0x1a8;
      lVar32 = 2;
      fVar9 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar19 + 0x134) = fVar9;
      *(float *)((int)puVar19 + 300) = fVar9;
      *(float *)(puVar19 + 0x26) = fVar9;
      *(float *)(puVar19 + 0x25) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar19 + 300) = *(float *)((int)puVar19 + 300) * fVar10;
      *(float *)(puVar19 + 0x26) = *(float *)(puVar19 + 0x26) * fVar9;
      *(float *)((int)puVar19 + 0x134) = *(float *)((int)puVar19 + 0x134) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x118) * fVar9 * fVar9;
        iVar27 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar27 + 4) * fVar9 * fVar9;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x1a8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar9 = *pfVar29;
        fVar10 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x128) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      dVar34 = dVar39;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar25;
        lVar23 = lVar23 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x128)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar33 = (double)((float)(dVar34 + dVar38) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar19 + 0x94) = fVar7;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar1);
    *(float *)(puVar19 + 0x12) = fVar1;
    *(float *)(puVar19 + 0x13) = (float)(dVar37 - dVar36);
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x94) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar19 + 0x12));
    if ((double)*(float *)(puVar19 + 0x13) - dVar39 < 0.0) {
      dVar34 = dVar36;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar36 = ABS((double)*(float *)((int)puVar19 + 0x94));
    if ((double)*(float *)(puVar19 + 0x13) - dVar39 < 0.0) {
      dVar36 = dVar37;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0x1b8;
      lVar24 = uVar22 - 0x1c8;
      lVar32 = 2;
      fVar3 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x114) = fVar3;
      *(float *)((int)puVar19 + 0x10c) = fVar3;
      *(float *)(puVar19 + 0x22) = fVar3;
      *(float *)(puVar19 + 0x21) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar19 + 0x10c) = *(float *)((int)puVar19 + 0x10c) * fVar4;
      *(float *)(puVar19 + 0x22) = *(float *)(puVar19 + 0x22) * fVar3;
      *(float *)((int)puVar19 + 0x114) = *(float *)((int)puVar19 + 0x114) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0xf8) * fVar3 * fVar3;
        iVar27 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x1c8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar3 = *pfVar29;
        fVar4 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0x108) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar23 = 2;
      do {
        iVar27 = (int)lVar26;
        iVar20 = (int)lVar25;
        lVar26 = lVar26 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar27 + 0x108)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar39 = (double)((float)(dVar39 + dVar38) * fVar1 + fVar2);
    }
    dVar33 = -dVar33;
    dVar38 = (double)FastDiffRots(-dVar39,dVar33);
    dVar38 = (double)FastWrapRot((float)(dVar40 * dVar38),(float)dVar33);
    *(float *)((int)puVar19 + 0x74) = (float)dVar38;
    Camera_SetMobyDrivenTargetRot((float *)(puVar19 + 0xe));
  }
  param_1->scale =
       param_1->pClass->gScale *
       -((*(float *)((int)pvVar12 + 0xc4) - *(float *)((int)pvVar12 + 200)) *
         *(float *)((int)pvVar12 + 0xf4) - *(float *)((int)pvVar12 + 0xc4));
  uVar18 = (int)*(uint *)((int)pvVar12 + 0xf4) >> 0x1f;
  if (0x3f4ccccd < (int)((uVar18 >> 1 ^ *(uint *)((int)pvVar12 + 0xf4)) - uVar18)) {
    OrganicDeltAng
              (3.1415927,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 6.2831855,(float *)((int)pvVar12 + 0xb0),0x1cb5dc,
               (float *)((int)pvVar12 + 0xb4));
  }
  lVar26 = FastDoubleToInt((double)*(float *)((int)&pSVar15->points[0].w + iVar13));
  iVar27 = -1;
  if (iVar30 != 0) {
    iVar27 = FastDoubleToInt((double)*(float *)((int)pSVar15->points + iVar13 + -4));
  }
  iVar30 = (int)lVar26;
  if ((-1 < iVar30) || (-1 < iVar27)) {
    *(undefined4 *)((int)&pSVar15->points[0].w + iVar13) = 0xbf800000;
    *(undefined4 *)((int)pSVar15->points + iVar13 + -4) = 0xbf800000;
    if (iVar30 < 8 && iVar27 < 8) {
      sound_LevelPlay(0,0,param_1);
      M1109_001ca968(0x4018000000000000,param_1,
                     &Cuboids[*(int *)((int)pvVar12 + (int)(lVar26 << 2) + 0xd0)].pos,
                     Cuboids + *(int *)((int)pvVar12 + (int)(lVar26 << 2) + 0xd0),6);
    }
    else if ((iVar30 == 10) || (iVar27 == 10)) {
      sound_LevelPlay(1,0,param_1);
      M1109_001caf98(param_1);
    }
  }
  return ZERO_MASK((0x3f800000 - *(int *)((int)pvVar12 + 0xf4))) & 1;
}


// 0x01cccb8 (0x1b0 bytes)
// strings: 00a1000c: 'None'

void M1109_001cccb8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0xbc);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      iVar2 = 0;
      if (g_LevelFlags[Level][*(int *)(iVar1 + 0xf8)] == -1) {
        iVar2 = ((uint)(ZERO_MASK((0xff - (uint)(byte)g_LevelFlags[Level][*(int *)(iVar1 + 0xfc)]))) & 4) - 1;
      }
      *(int *)(iVar1 + 0x9c) = iVar2;
    }
  }
  else if (iVar2 < 2) {
    *(undefined4 *)(iVar1 + 0x9c) = 1;
  }
  else if (iVar2 < 3) {
    *(undefined4 *)(iVar1 + 0x9c) = 4;
  }
  if (((HelpData.piece<664,2>() == 0) && (*(int *)(iVar1 + 0x9c) == 0)) &&
     ((g_HelpTextOn != '\0' || (g_HelpVoiceOn != '\0')))) {
    Help_QueueMessage(STR_THIS_SHUTTLE_HAS_AN_0x177A,0x53);
    *(undefined4 *)(iVar1 + 0x9c) = 0xffffffff;
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 != 4) {
    if (iVar1 == 3) {
      MB_ShowPersistentMessage(10,0x1784);
      return;
    }
    if (iVar1 == 2) {
      MB_ShowPersistentMessage(10,0x1786);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      MB_ShowPersistentMessage(10,0x1782);
      return;
    }
  }
  MB_ShowPersistentMessage(10,0x1785);
  return;
}


// 0x01cce68 (0x74 bytes)
void M1109_001cce68(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&g_MobyGroups)[*(int *)(*(int *)(param_1 + 0x78) + 0xcc)];
  do {
    DeleteMoby(g_MobyInstance + (*puVar2 & 0x7fff));
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x01ccf10 (0x11e0 bytes)
// inlined: FastAtan2 @0x1cd750, FastAtan2 @0x1cd8fc
/* Moby 1109 */

void UpdateMoby_1109(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ushort uVar16;
  MobyClass *pMVar17;
  void *pvVar18;
  int iVar19;
  Spline *pSVar20;
  Spline *pSVar21;
  ulonglong *puVar22;
  MobyInstance *moby_00;
  float fVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined *puVar27;
  Cuboid *pCVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar34;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar36;
  longlong lVar35;
  longlong lVar37;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar38;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  ulonglong in_f25;
  double dVar41;
  ulonglong in_f26;
  double dVar42;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  ulonglong in_f30;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  Vec4 local_f0;
  Vec4 local_e0 [14];
  
  lVar30 = (longlong)(int)moby;
  uVar29 = ZEXT48(&stack0x00000000);
  lVar33 = uVar29 - 0x1c0;
  puVar22 = (ulonglong *)lVar33;
  *puVar22 = uVar29;
  puVar22[0x3a] = in_LR;
  puVar22[0x31] = in_f25;
  puVar22[0x32] = in_f26;
  puVar22[0x33] = in_f27;
  puVar22[0x34] = in_f28;
  puVar22[0x35] = in_f29;
  puVar22[0x36] = in_f30;
  puVar22[0x37] = in_f31;
  fVar3 = (moby->rotation).y;
  *(f32 *)(puVar22 + 0xe) = (moby->rotation).x;
  puVar22[0x30] = unaff_r31;
  fVar4 = (moby->rotation).z;
  pMVar17 = moby->pClass;
  *(f32 *)((int)puVar22 + 0x74) = fVar3;
  fVar3 = (moby->rotation).w;
  *(f32 *)(puVar22 + 0xf) = fVar4;
  *(f32 *)((int)puVar22 + 0x7c) = fVar3;
  fVar5 = pMVar17->gScale;
  puVar22[0x2e] = unaff_r29;
  pvVar18 = moby->pVar;
  fVar5 = fVar5 * DAT_0076427c;
  dVar47 = (double)(moby->pos).x;
  dVar46 = (double)(moby->pos).y;
  dVar45 = (double)(moby->pos).z;
  bVar1 = DAT_00ef1a6c != 0;
  puVar22[0x2f] = unaff_r30;
  puVar22[0x2d] = unaff_r28;
  puVar22[0x2c] = unaff_r27;
  moby->scale = fVar5;
  if (bVar1) {
    puVar22[0x29] = (longlong)DAT_00764284;
    uVar26 = DAT_00969db8;
    fVar5 = animationSpeed;
    DAT_00ef1a6c = 0;
    *(undefined4 *)(puVar22 + 6) = g_heroCGPos;
    *(undefined4 *)(puVar22 + 7) = uVar26;
    puVar27 = PTR_DAT_0076428c;
    uVar26 = DAT_00764288;
    *(undefined4 *)((int)puVar22 + 0x34) = DAT_00969db4;
    *(undefined4 *)((int)puVar22 + 0x3c) = DAT_00969dbc;
    puVar22[0x29] = (longlong)(int)(fVar5 * ((float)(longlong)puVar22[0x29] + 0.5));
    FUN_002d1440(puVar22[6],puVar22[7],*(undefined4 *)((int)puVar22 + 0x14c),uVar26,puVar27);
  }
  bVar2 = moby->state;
  if (bVar2 < 5) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        g_MapAlt = 0;
        if (g_LevelFlags[Level][*(int *)((int)pvVar18 + 0xf8)] == -1) {
          puVar38 = (ushort *)(&g_MobyGroups)[*(int *)((int)moby->pVar + 0xcc)];
          do {
            DeleteMoby(g_MobyInstance + (*puVar38 & 0x7fff));
            uVar16 = *puVar38;
            puVar38 = puVar38 + 1;
          } while (-1 < (short)uVar16);
        }
        else {
          g_MiscLevelFlags.field36_0x24 = 0;
        }
        moby->updateDistance = -1;
        moby->drawDistance = 0x80;
        uVar24 = g_heroMobyPtr->color;
        uVar25 = g_heroMobyPtr->light;
        moby->state = '\x01';
        moby->color = uVar24;
        moby->light = uVar25;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar30,2,0,0);
        }
        *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
        *(undefined4 *)((int)pvVar18 + 0xc0) = 0;
      }
      else {
        if (((((g_HelpTextOn == '\0') && (g_HelpVoiceOn == '\0')) ||
             ((g_Help.state == 0 && (g_Help.message_id == -1)))) &&
            ((g_standingOnMoby == moby && (g_framesNotGrounded == 0)))) || (DAT_00ef1a68 != 0)) {
          M1109_001cccb8(lVar30);
          fVar5 = DAT_0076427c;
          if ((DAT_00ef1a68 != 0) ||
             ((((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0 && (g_HelpMsgOwner == 10)) &&
              (-1 < *(int *)((int)pvVar18 + 0x9c))))) {
            bVar1 = DAT_00ef1a68 != 0;
            *(undefined4 *)((int)pvVar18 + 0x110) = 1;
            g_MapAlt = 0;
            if (bVar1) {
              *(undefined4 *)((int)pvVar18 + 0x9c) = 2;
              DAT_00ef1a68 = 0;
            }
            iVar34 = *(int *)((int)pvVar18 + 0x9c);
            if (iVar34 == 4) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 4;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
              *(float *)((int)pvVar18 + 0xc4) = fVar5;
              *(float *)((int)pvVar18 + 200) = fVar5;
            }
            else if (iVar34 == 3) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 3;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 2;
              *(float *)((int)pvVar18 + 0xc4) = fVar5;
              *(float *)((int)pvVar18 + 200) = fVar5;
            }
            else if (iVar34 == 2) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 2;
              uVar26 = DAT_00764278;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
              *(undefined4 *)((int)pvVar18 + 0xc4) = uVar26;
              *(float *)((int)pvVar18 + 200) = fVar5;
            }
            else if (iVar34 == 1) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 1;
              uVar26 = DAT_00764278;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
              *(undefined4 *)((int)pvVar18 + 0xc4) = uVar26;
              *(float *)((int)pvVar18 + 200) = fVar5;
              music_SetTransition(0,10);
            }
            else if (iVar34 == 0) {
              *(float *)((int)pvVar18 + 0xc4) = fVar5;
              *(undefined4 *)((int)pvVar18 + 0xc0) = 0;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 1;
              *(undefined4 *)((int)pvVar18 + 200) = DAT_00764278;
              music_SetTransition(4,8);
            }
          }
        }
        else if (*(int *)((int)pvVar18 + 0x110) == 0) {
          if ((*(int *)((int)pvVar18 + 0xbc) == 0) &&
             (iVar34 = MB_IsPntInCuboid
                                 (&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0x100)),
             pCVar28 = Cuboids, iVar34 != 0)) {
            iVar34 = *(int *)((int)pvVar18 + 0xa8);
            (moby->pos).x = Cuboids[iVar34].pos.x;
            (moby->pos).y = pCVar28[iVar34].pos.y;
            (moby->pos).z = pCVar28[iVar34].pos.z;
            (moby->pos).w = pCVar28[iVar34].pos.w;
            (moby->rotation).x = pCVar28[iVar34].rot.x;
            (moby->rotation).y = pCVar28[iVar34].rot.y;
            (moby->rotation).z = pCVar28[iVar34].rot.z;
            fVar5 = pCVar28[iVar34].rot.w;
            *(undefined4 *)((int)pvVar18 + 0xbc) = 2;
            (moby->rotation).w = fVar5;
            g_MapAlt = 0;
          }
          else if ((*(int *)((int)pvVar18 + 0xbc) == 2) &&
                  (iVar34 = MB_IsPntInCuboid
                                      (&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0x104)),
                  pCVar28 = Cuboids, iVar34 != 0)) {
            iVar34 = *(int *)((int)pvVar18 + 0xa0);
            (moby->pos).x = Cuboids[iVar34].pos.x;
            (moby->pos).y = pCVar28[iVar34].pos.y;
            (moby->pos).z = pCVar28[iVar34].pos.z;
            (moby->pos).w = pCVar28[iVar34].pos.w;
            (moby->rotation).x = pCVar28[iVar34].rot.x;
            (moby->rotation).y = pCVar28[iVar34].rot.y;
            (moby->rotation).z = pCVar28[iVar34].rot.z;
            fVar5 = pCVar28[iVar34].rot.w;
            *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
            (moby->rotation).w = fVar5;
            g_MapAlt = 0;
          }
          else if ((*(int *)((int)pvVar18 + 0xbc) != 1) &&
                  (iVar34 = MB_IsPntInCuboid
                                      (&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0x108)),
                  pCVar28 = Cuboids, iVar34 != 0)) {
            iVar34 = *(int *)((int)pvVar18 + 0xa4);
            (moby->pos).x = Cuboids[iVar34].pos.x;
            (moby->pos).y = pCVar28[iVar34].pos.y;
            (moby->pos).z = pCVar28[iVar34].pos.z;
            (moby->pos).w = pCVar28[iVar34].pos.w;
            (moby->rotation).x = pCVar28[iVar34].rot.x;
            (moby->rotation).y = pCVar28[iVar34].rot.y;
            (moby->rotation).z = pCVar28[iVar34].rot.z;
            fVar5 = pCVar28[iVar34].rot.w;
            *(undefined4 *)((int)pvVar18 + 0xbc) = 1;
            (moby->rotation).w = fVar5;
            g_MapAlt = 1;
            if (g_MiscLevelFlags.field33_0x21 == 0) {
              g_MiscLevelFlags.field33_0x21 = 1;
            }
          }
        }
        if (*(int *)((int)pvVar18 + 0x110) != 0) {
          *(undefined4 *)((int)pvVar18 + 0x110) = 0;
          moby->state = '\x03';
          MB_ClearHelpMessage((MobyInstance *)0xa);
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar30,0,0,0);
          }
          puVar22[0x29] = (longlong)(int)(animationSpeed * 10.5);
          FadeToBlack(*(undefined4 *)((int)puVar22 + 0x14c));
          fVar14 = 0.0;
          *(undefined4 *)((int)pvVar18 + 0xb0) = 0;
          pSVar20 = Splines[*(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xc0) * 4 + 0x60)];
          iVar34 = *(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xc0) * 4 + 0x74);
          fVar5 = pSVar20->points[0].x;
          *(float *)(puVar22 + 0x14) = fVar5;
          fVar6 = pSVar20->points[0].y;
          *(float *)((int)puVar22 + 0xa4) = fVar6;
          fVar7 = pSVar20->points[0].z;
          pSVar21 = Splines[iVar34];
          *(float *)(puVar22 + 0x15) = fVar7;
          *(float *)((int)puVar22 + 0xac) = pSVar20->points[0].w;
          fVar8 = pSVar21->points[0].x;
          fVar9 = pSVar21->points[0].y;
          fVar12 = fVar8 - fVar5;
          fVar11 = fVar9 - fVar6;
          fVar10 = pSVar21->points[0].z;
          fVar13 = ABS(fVar12);
          fVar15 = ABS(fVar11);
          *(float *)((int)puVar22 + 0xfc) = fVar12;
          *(float *)(puVar22 + 0x20) = fVar11;
          *(undefined4 *)((int)puVar22 + 0x9c) = 0;
          *(undefined4 *)(puVar22 + 0x13) = 0;
          *(undefined4 *)((int)puVar22 + 0x94) = 0;
          *(undefined4 *)(puVar22 + 0x12) = 0;
          *(float *)((int)puVar22 + 0x104) = fVar13 - fVar15;
          uVar31 = (ulonglong)(*(uint *)((int)puVar22 + 0xfc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar22 + 0x104) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar22 + 0x20) >> 0x1d) & 4;
          fVar12 = ABS(*(float *)((int)puVar22 + 0xfc));
          if (*(float *)((int)puVar22 + 0x104) - 0.0 < 0.0) {
            fVar12 = fVar15;
          }
          fVar15 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
          fVar11 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
          fVar23 = ABS(*(float *)(puVar22 + 0x20));
          if (*(float *)((int)puVar22 + 0x104) - 0.0 < 0.0) {
            fVar23 = fVar13;
          }
          fVar13 = fVar14;
          if (0.0 < fVar12) {
            lVar32 = uVar29 - 0x1b0;
            lVar35 = uVar29 - 0x98;
            lVar37 = uVar29 - 0x88;
            lVar39 = 2;
            fVar12 = (fVar23 - fVar12) / (fVar23 + fVar12);
            fVar13 = fVar12 * fVar12;
            *(float *)((int)puVar22 + 0x134) = fVar12;
            *(float *)((int)puVar22 + 300) = fVar12;
            *(float *)(puVar22 + 0x26) = fVar12;
            *(float *)(puVar22 + 0x25) = fVar12;
            fVar12 = fVar13 * fVar13;
            *(float *)((int)puVar22 + 300) = *(float *)((int)puVar22 + 300) * fVar13;
            *(float *)(puVar22 + 0x26) = *(float *)(puVar22 + 0x26) * fVar12;
            *(float *)((int)puVar22 + 0x134) = *(float *)((int)puVar22 + 0x134) * fVar12 * fVar13;
            do {
              *(float *)((int)lVar32 + 0x128) = *(float *)((int)lVar32 + 0x118) * fVar12 * fVar12;
              iVar34 = (int)lVar35;
              lVar32 = lVar32 + 8;
              lVar35 = lVar35 + 8;
              *(float *)((int)lVar37 + 4) = *(float *)(iVar34 + 4) * fVar12 * fVar12;
              lVar37 = lVar37 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar37 = uVar29 - 0x98;
            pfVar36 = (float *)&DAT_007358e0;
            lVar32 = lVar33;
            lVar35 = lVar37;
            do {
              fVar12 = *pfVar36;
              fVar13 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar32 + 0x128) = *(float *)((int)lVar32 + 0x128) * fVar12;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar13;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar35 = 2;
            lVar32 = lVar33;
            fVar12 = fVar14;
            do {
              iVar34 = (int)lVar32;
              lVar32 = lVar32 + 0x10;
              iVar19 = (int)lVar37;
              lVar37 = lVar37 + 0x10;
              fVar12 = fVar12 + *(float *)(iVar34 + 0x128) + *(float *)(iVar19 + 4) +
                       *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc);
              lVar35 = lVar35 + -1;
            } while (lVar35 != 0);
            fVar13 = (fVar12 + 0.7853982) * fVar15 + fVar11;
          }
          fVar6 = fVar6 - fVar9;
          fVar5 = fVar5 - fVar8;
          *(float *)(puVar22 + 0x13) = fVar13;
          fVar10 = fVar10 - fVar7;
          fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
          *(float *)((int)puVar22 + 0xf4) = fVar10;
          fVar10 = ABS(fVar10);
          fVar6 = ABS(fVar5);
          *(float *)(puVar22 + 0x1e) = fVar5;
          *(float *)(puVar22 + 0x1f) = fVar6 - fVar10;
          uVar31 = (ulonglong)(*(uint *)(puVar22 + 0x1e) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar22 + 0x1f) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar22 + 0xf4) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)(puVar22 + 0x1e));
          if (*(float *)(puVar22 + 0x1f) - 0.0 < 0.0) {
            fVar5 = fVar10;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
          fVar8 = ABS(*(float *)((int)puVar22 + 0xf4));
          if (*(float *)(puVar22 + 0x1f) - 0.0 < 0.0) {
            fVar8 = fVar6;
          }
          fVar6 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
          if (0.0 < fVar5) {
            lVar32 = uVar29 - 0x1b0;
            lVar37 = uVar29 - 0xa8;
            lVar35 = uVar29 - 0xb8;
            lVar39 = 2;
            fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
            fVar8 = fVar5 * fVar5;
            *(float *)((int)puVar22 + 0x114) = fVar5;
            *(float *)((int)puVar22 + 0x10c) = fVar5;
            *(float *)(puVar22 + 0x22) = fVar5;
            *(float *)(puVar22 + 0x21) = fVar5;
            fVar5 = fVar8 * fVar8;
            *(float *)((int)puVar22 + 0x10c) = *(float *)((int)puVar22 + 0x10c) * fVar8;
            *(float *)(puVar22 + 0x22) = *(float *)(puVar22 + 0x22) * fVar5;
            *(float *)((int)puVar22 + 0x114) = *(float *)((int)puVar22 + 0x114) * fVar5 * fVar8;
            do {
              *(float *)((int)lVar32 + 0x108) = *(float *)((int)lVar32 + 0xf8) * fVar5 * fVar5;
              iVar34 = (int)lVar35;
              lVar35 = lVar35 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar37 + 4) = *(float *)(iVar34 + 4) * fVar5 * fVar5;
              lVar37 = lVar37 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar37 = uVar29 - 0xb8;
            pfVar36 = (float *)&DAT_007358e0;
            lVar32 = lVar33;
            lVar35 = lVar37;
            do {
              fVar5 = *pfVar36;
              fVar8 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar32 + 0x108) = *(float *)((int)lVar32 + 0x108) * fVar5;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar32 = 2;
            do {
              iVar34 = (int)lVar33;
              iVar19 = (int)lVar37;
              lVar33 = lVar33 + 0x10;
              lVar37 = lVar37 + 0x10;
              fVar14 = fVar14 + *(float *)(iVar34 + 0x108) + *(float *)(iVar19 + 4) +
                       *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            fVar14 = (fVar14 + 0.7853982) * fVar7 + fVar6;
          }
          fVar5 = animationSpeed;
          *(float *)((int)puVar22 + 0x94) = -fVar14;
          puVar22[0x29] = (longlong)(int)(fVar5 * 300.5);
          SetCameraPosition
                    (uVar29 - 0x120,uVar29 - 0x130,2,*(undefined4 *)((int)puVar22 + 0x14c),0);
          Camera_SetCurrentAccel(0.001,1.0,1.0,0.001,1.0,1.0);
          Camera_SetMobyDrivenTargetPos((float *)(uVar29 - 0x120));
          Camera_SetMobyDrivenTargetRot((float *)(uVar29 - 0x130));
          Hero_Warp(&Cuboids[*(int *)((int)pvVar18 + 0xac)].pos.x,
                          &Cuboids[*(int *)((int)pvVar18 + 0xac)].rot.x,0x72,0);
          dVar44 = (double)(moby->pos).x;
          dVar43 = (double)(moby->pos).y;
          dVar42 = (double)(moby->pos).z;
          dVar41 = (double)(moby->pos).w;
          (moby->pos).x = GameCamera.posX;
          (moby->pos).y = GameCamera.posY;
          (moby->pos).z = GameCamera.posZ;
          (moby->pos).w = (f32)GameCamera.field8_0x14c;
          PlayMobySound(2,0,moby);
          (moby->pos).x = (float)dVar44;
          (moby->pos).y = (float)dVar43;
          (moby->pos).z = (float)dVar42;
          (moby->pos).w = (float)dVar41;
        }
      }
    }
    else if (bVar2 < 3) {
      iVar34 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0xf0));
      uVar26 = DAT_00764278;
      if (iVar34 != 0) {
        *(undefined4 *)((int)pvVar18 + 0xc0) = 2;
        *(undefined4 *)((int)pvVar18 + 0xc4) = uVar26;
        *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
        fVar5 = DAT_0076427c;
        *(undefined4 *)((int)pvVar18 + 0x110) = 1;
        *(float *)((int)pvVar18 + 200) = fVar5;
        *(undefined4 *)((int)pvVar18 + 0x114) = 1;
        moby->state = '\x01';
      }
    }
    else if (bVar2 < 4) {
      iVar34 = M1109_001cb618(lVar30,*(undefined4 *)((int)pvVar18 + 0xc0));
      if (iVar34 != 0) {
        moby->state = '\x04';
        pCVar28 = Cuboids;
        dVar41 = 0.0;
        *(undefined4 *)((int)pvVar18 + 0xf4) = 0;
        iVar34 = *(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xbc) * 4 + 0xa0);
        iVar19 = *(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xbc) * 4 + 0xa0);
        (moby->pos).x = pCVar28[iVar34].pos.x;
        (moby->pos).y = pCVar28[iVar34].pos.y;
        (moby->pos).z = pCVar28[iVar34].pos.z;
        (moby->pos).w = pCVar28[iVar34].pos.w;
        (moby->rotation).x = pCVar28[iVar19].rot.x;
        (moby->rotation).y = pCVar28[iVar19].rot.y;
        (moby->rotation).z = pCVar28[iVar19].rot.z;
        (moby->rotation).w = pCVar28[iVar19].rot.w;
        FastEulerToMtx(lVar30 + 0xc0,lVar30 + 0x40);
        iVar34 = *(int *)((int)pvVar18 + 0xbc);
        moby->scale = moby->pClass->gScale;
        if (iVar34 == 1) {
          g_MapAlt = 1;
          if (g_MiscLevelFlags.field33_0x21 == 0) {
            g_MiscLevelFlags.field33_0x21 = 1;
          }
        }
        else {
          g_MapAlt = 0;
        }
        fVar6 = (moby->transform).v0.y;
        fVar7 = (moby->transform).v0.x;
        fVar8 = (moby->transform).v0.z;
        *(f32 *)((int)puVar22 + 0xbc) = (moby->pos).w;
        fVar9 = (moby->pos).x;
        fVar10 = (moby->pos).y;
        fVar12 = (moby->pos).z;
        fVar11 = (moby->transform).v2.x;
        fVar14 = (moby->transform).v2.y;
        fVar13 = (moby->transform).v2.z;
        dVar43 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        fVar15 = (moby->rotation).z;
        *(undefined4 *)((int)puVar22 + 0xcc) = 0;
        *(undefined4 *)(puVar22 + 0x19) = 0;
        *(undefined4 *)((int)puVar22 + 0xc4) = 0;
        *(undefined4 *)(puVar22 + 0x18) = 0;
        fVar5 = (float)(-2.0 / dVar43);
        dVar42 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar42 = (double)(fVar8 * fVar5);
        }
        dVar44 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar44 = (double)(fVar6 * fVar5);
        }
        dVar40 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar40 = (double)(fVar7 * fVar5);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar42 = (double)(fVar8 * fVar5);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar44 = (double)(fVar6 * fVar5);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar40 = (double)(fVar7 * fVar5);
        }
        *(float *)(puVar22 + 0x17) = fVar12 + (float)(dVar42 + (double)fVar13);
        *(float *)((int)puVar22 + 0xb4) = fVar10 + (float)(dVar44 + (double)fVar14);
        *(float *)(puVar22 + 0x16) = fVar9 + (float)(dVar40 + (double)fVar11);
        dVar41 = (double)FastWrapRot(fVar15,3.1415927);
        *(float *)(puVar22 + 0x19) = (float)dVar41;
        Hero_Warp((float *)(puVar22 + 0x16),(float *)(puVar22 + 0x18),0,0);
        if (*(int *)((int)pvVar18 + 0x114) != 0) {
          g_MiscLevelFlags.field36_0x24 = 1;
          FUN_0044cddc(g_MobyInstance + *(int *)((int)pvVar18 + 0x10c));
          *(undefined4 *)((int)pvVar18 + 0x114) = 0;
          moby->state = '\x06';
          if (moby->animationId != '\x02') {
            puVar22[0x29] = (longlong)(int)(animationSpeed * 30.5);
            MB_SetAnimation(lVar30,2,0,*(undefined4 *)((int)puVar22 + 0x14c));
          }
        }
        Camera_DeactivateMobyDrivenCam(0);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        puVar22[0x29] = (longlong)(int)(animationSpeed * 30.5);
        MB_SetAnimation(lVar30,2,0,*(undefined4 *)((int)puVar22 + 0x14c));
      }
    }
  }
  else if (bVar2 < 8) {
    if (5 < bVar2) {
      if (bVar2 < 7) {
        moby_00 = g_MobyInstance + *(int *)((int)pvVar18 + 0x10c);
        fVar5 = (moby_00->pos).x;
        fVar6 = g_heroPosition.y - (moby_00->pos).y;
        fVar7 = g_heroPosition.x - fVar5;
        if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 3.5) {
          *(float *)(puVar22 + 0x1a) = fVar5;
          *(f32 *)((int)puVar22 + 0xd4) = (moby_00->pos).y;
          *(f32 *)(puVar22 + 0x1b) = (moby_00->pos).z;
          *(f32 *)((int)puVar22 + 0xdc) = (moby_00->pos).w;
          *(f32 *)(puVar22 + 0x1c) = (moby_00->rotation).x;
          *(f32 *)((int)puVar22 + 0xe4) = (moby_00->rotation).y;
          fVar5 = (moby_00->rotation).z;
          *(float *)(puVar22 + 0x1d) = fVar5;
          *(f32 *)((int)puVar22 + 0xec) = (moby_00->rotation).w;
          dVar41 = (double)FastWrapRot(fVar5,3.14159);
          *(float *)(puVar22 + 0x1d) = (float)dVar41;
          Hero_Warp(&local_f0.x,&local_e0[0].x,0x72,1);
          music_SetTransition(0,10);
          mode_sceneInit(0xc);
          DeleteMoby(moby_00);
          MB_UnlockLevel(Rilgar);
          moby->state = '\b';
          SetLevelFlag(*(undefined4 *)((int)pvVar18 + 0xf8));
          SetSpawnPoint(&local_f0,local_e0);
        }
      }
      else if (g_gameMode != GAME_MODE_SCENE) {
        if (UnlockableItems.hoverboard == '\0') {
          MB_ToastMessageByIndex(5);
          moby->state = '\x01';
          Hero_TransitionToDefault();
          memcard_Save(0,-1);
        }
        else {
          mode_sceneInit(5);
          moby->state = '\t';
        }
      }
    }
  }
  else if (bVar2 < 9) {
    if (g_gameMode != GAME_MODE_SCENE) {
      PlayInfobotMovie(5);
      moby->state = '\a';
    }
  }
  else if ((bVar2 < 10) && (g_gameMode != GAME_MODE_SCENE)) {
    MB_ToastMessageByIndex(5);
    memcard_Save(0,-1);
    moby->state = '\x01';
  }
  fVar5 = (moby->pos).x;
  fVar6 = (moby->pos).y;
  fVar7 = (moby->pos).z;
  *(f32 *)((int)puVar22 + 0x8c) = (moby->pos).w;
  *(float *)(puVar22 + 0x10) = (float)((double)fVar5 - dVar47);
  *(float *)((int)puVar22 + 0x84) = (float)((double)fVar6 - dVar46);
  *(float *)(puVar22 + 0x11) = (float)((double)fVar7 - dVar45);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar18 + 0x20),(Vec4 *)(puVar22 + 0x10),uVar29 - 0x150,
             lVar30 + 0x40);
  return;
}


// 0x01ce0f0 (0xc bytes)
void FUN_001ce0f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}


// 0x01ce0fc (0xc bytes)
void FUN_001ce0fc(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 5;
  return;
}


// 0x01ce108 (0x14 bytes)
void M1109_001ce108(void)

{
  DAT_00764358 = 0x10000;
  return;
}


// 0x01ce130 (0x2a8 bytes)
void M111_001ce130(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (param_1->state != '\x03') {
    iVar5 = MB_damage(param_1,0x330000,0);
    iVar6 = MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    pfVar7 = (float *)param_3;
    if ((0 < iVar6) && (iVar6 < 3)) {
      *pfVar7 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar2 = (int)*pfVar7 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
      iVar6 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x1ce120);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
        *(undefined2 *)(iVar6 + 0x26) = uVar4;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        local_40 = *(float *)(iVar5 + 0x10);
        local_38 = SQRT(*(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar5 + 0x14) * local_38;
          local_38 = *(float *)(iVar5 + 0x18) * local_38;
        }
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
        MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar7 = 0.0;
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)(iVar6 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


