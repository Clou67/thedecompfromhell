// game/update/moby1448.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x280de0-0x283428
#include "game/update/moby1448.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0280de0 (0x58 bytes)
void M1448_00280de0(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x0280e38 (0x58 bytes)
void M1448_00280e38(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x0280e90 (0x58 bytes)
void M1448_00280e90(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x0280ee8 (0x38 bytes)
void M1448_00280ee8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x0280f20 (0x40 bytes)
longlong M1448_00280f20(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x0280f60 (0x14 bytes)
void M1448_00280f60(void)

{
  DAT_007aab98 = 0x10000;
  return;
}


// 0x0280fb8 (0x161c bytes)
// inlined: FastAtan2 @0x281328, FastAtan2 @0x2814cc, FastAtan2 @0x2816bc, FastAtan2 @0x281864, FastAtan2 @0x281aec, FastAtan2 @0x281c8c, FastAtan2 @0x281e84, FastAtan2 @0x282020, FastAtan2 @0x282210, FastAtan2 @0x2823b8
bool M1448_00280fb8(int param_1,longlong param_2)

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
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  Spline *pSVar16;
  Spline *pSVar17;
  Spline *pSVar18;
  uint uVar19;
  ulonglong *puVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  float *pfVar28;
  longlong lVar29;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar26 = uVar22 - 0x2e0;
  puVar20 = (ulonglong *)lVar26;
  *puVar20 = uVar22;
  puVar20[0x5e] = in_LR;
  puVar20[0x56] = in_f26;
  puVar20[0x57] = in_f27;
  puVar20[0x58] = in_f28;
  puVar20[0x59] = in_f29;
  puVar20[0x5a] = in_f30;
  puVar20[0x5b] = in_f31;
  puVar20[0x55] = unaff_r31;
  puVar20[0x4d] = unaff_r23;
  puVar20[0x52] = unaff_r28;
  fVar1 = animationSpeed;
  puVar20[0x54] = unaff_r30;
  iVar12 = *(int *)(param_1 + 0x78);
  iVar21 = iVar12 + (int)(param_2 << 2);
  dVar38 = 1.0;
  iVar13 = *(int *)(iVar21 + 0x60);
  iVar14 = *(int *)(iVar21 + 0x68);
  iVar21 = *(int *)(iVar21 + 0x70);
  puVar20[0x53] = unaff_r29;
  puVar20[0x4f] = unaff_r25;
  pSVar16 = Splines[iVar13];
  pSVar17 = Splines[iVar14];
  pSVar18 = Splines[iVar21];
  puVar20[0x51] = unaff_r27;
  puVar20[0x50] = unaff_r26;
  puVar20[0x4e] = unaff_r24;
  puVar20[0x4c] = unaff_r22;
  Delt(1.0,(float)(1.0 / (double)(longlong)(fVar1 * 900.5)),(float *)(iVar12 + 0xa4));
  puVar20[0x49] = (longlong)(pSVar16->cnt + -1);
  dVar41 = (double)(*(float *)(iVar12 + 0xa4) * (float)(longlong)puVar20[0x49]);
  lVar23 = FastDoubleToInt(dVar41);
  puVar20[0x49] = (longlong)(int)lVar23;
  dVar32 = (double)(*(float *)(iVar12 + 0xa4) * 1.02);
  uVar35 = puVar20[0x49];
  puVar20[0x49] = (longlong)(pSVar17->cnt + -1);
  dVar39 = (double)(longlong)uVar35;
  if (dVar38 - dVar32 < 0.0) {
    dVar32 = dVar38;
  }
  dVar41 = (double)(float)(dVar41 - dVar39);
  dVar32 = (double)(float)(dVar32 * (double)(longlong)puVar20[0x49]);
  lVar24 = FastDoubleToInt(dVar32);
  iVar13 = pSVar18->cnt;
  puVar20[0x49] = (longlong)(int)lVar24;
  fVar1 = *(float *)(iVar12 + 0xa4);
  uVar35 = puVar20[0x49];
  puVar20[0x49] = (longlong)(iVar13 + -1);
  dVar40 = (double)(float)(dVar32 - (double)(longlong)uVar35);
  dVar32 = (double)(fVar1 * (float)(longlong)puVar20[0x49]);
  lVar25 = FastDoubleToInt(dVar32);
  iVar13 = (int)(lVar23 << 4);
  dVar39 = (double)(float)(dVar32 - dVar39);
  dVar32 = (double)*(float *)((int)&pSVar16->points[0].x + iVar13);
  fVar1 = *(float *)((int)&pSVar16->points[1].y + iVar13);
  fVar2 = *(float *)((int)&pSVar16->points[0].y + iVar13);
  iVar14 = (int)(lVar25 << 4);
  pfVar28 = (float *)((int)&((Spline *)(pSVar18->points + -1))->cnt + iVar14);
  fVar3 = *(float *)((int)&pSVar16->points[1].z + iVar13);
  fVar4 = *(float *)((int)&pSVar16->points[0].z + iVar13);
  uVar5 = *(undefined4 *)((int)&pSVar16->points[1].w + iVar13);
  *(float *)(puVar20 + 0x10) =
       (float)(dVar41 * (double)(float)((double)*(float *)((int)&pSVar16->points[1].x + iVar13) -
                                       dVar32) + dVar32);
  *(float *)((int)puVar20 + 0x84) =
       (float)(dVar41 * (double)(fVar1 - fVar2) +
              (double)*(float *)((int)&pSVar16->points[0].y + iVar13));
  fVar1 = *(float *)((int)&pSVar16->points[0].z + iVar13);
  *(undefined4 *)((int)puVar20 + 0x8c) = uVar5;
  *(float *)(puVar20 + 0x11) = (float)(dVar41 * (double)(fVar3 - fVar4) + (double)fVar1);
  fVar1 = pfVar28[8];
  fVar2 = pfVar28[4];
  fVar3 = pfVar28[9];
  fVar4 = pfVar28[5];
  fVar6 = pfVar28[10];
  fVar7 = pfVar28[6];
  *(float *)(param_1 + 0x1c) = pfVar28[0xb];
  *(float *)(param_1 + 0x10) =
       (float)(dVar39 * (double)(float)((double)fVar1 - (double)fVar2) + (double)fVar2);
  *(float *)(param_1 + 0x14) =
       (float)(dVar39 * (double)(float)((double)fVar3 - (double)fVar4) + (double)fVar4);
  *(float *)(param_1 + 0x18) =
       (float)(dVar39 * (double)(float)((double)fVar6 - (double)fVar7) + (double)fVar7);
  Camera_SetMobyDrivenTargetPos((float *)(puVar20 + 0x10));
  Hero_Warp(&Cuboids[*(int *)(iVar12 + 0x84)].pos.x,&Cuboids[*(int *)(iVar12 + 0x84)].rot.x,
                  0x72,0);
  dVar32 = 0.7853981852531433;
  if ((int)lVar25 < 1) {
    fVar1 = pSVar18->points[0].y;
    fVar2 = pSVar18->points[1].y;
    fVar3 = pSVar18->points[0].x;
    fVar6 = fVar1 - fVar2;
    fVar4 = pSVar18->points[1].x;
    fVar7 = fVar3 - fVar4;
    fVar8 = pSVar18->points[1].z - pSVar18->points[0].z;
    fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    *(float *)(puVar20 + 0x1a) = fVar8;
    fVar8 = ABS(fVar8);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar20 + 0xcc) = fVar6;
    *(float *)((int)puVar20 + 0xd4) = fVar7 - fVar8;
    dVar39 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x1a) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar20 + 0xcc));
    if (*(float *)((int)puVar20 + 0xd4) - 0.0 < 0.0) {
      fVar6 = fVar8;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar20 + 0x1a));
    if (*(float *)((int)puVar20 + 0xd4) - 0.0 < 0.0) {
      fVar9 = fVar7;
    }
    dVar41 = dVar39;
    if (0.0 < fVar6) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0x138;
      lVar29 = uVar22 - 0x128;
      lVar30 = 2;
      fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar20 + 0x1b4) = fVar6;
      *(float *)((int)puVar20 + 0x1ac) = fVar6;
      *(float *)(puVar20 + 0x36) = fVar6;
      *(float *)(puVar20 + 0x35) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar20 + 0x1ac) = *(float *)((int)puVar20 + 0x1ac) * fVar7;
      *(float *)(puVar20 + 0x36) = *(float *)(puVar20 + 0x36) * fVar6;
      *(float *)((int)puVar20 + 0x1b4) = *(float *)((int)puVar20 + 0x1b4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x198) * fVar6 * fVar6;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0x138;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar6 = *pfVar28;
        fVar7 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x1a8) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar7;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar13 + 0x1a8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar41 = (double)((float)(dVar41 + 0.7853981852531433) * fVar11 + fVar8);
    }
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)(puVar20 + 0x18) = fVar4;
    *(float *)((int)puVar20 + 0xc4) = fVar2;
    *(float *)(puVar20 + 0x19) = fVar6 - fVar3;
    uVar19 = *(uint *)(puVar20 + 0x18);
    fVar1 = *(float *)(puVar20 + 0x18);
    uVar15 = *(uint *)((int)puVar20 + 0xc4);
    *(float *)(param_1 + 0x44) = (float)-dVar41;
    uVar35 = (ulonglong)(uVar19 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x19) >> 0x1e) & 2 | (ulonglong)(uVar15 >> 0x1d) & 4;
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar1 = ABS(fVar1);
    if (*(float *)(puVar20 + 0x19) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar20 + 0xc4));
    if (*(float *)(puVar20 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    if (0.0 < fVar1) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0x158;
      lVar29 = uVar22 - 0x148;
      lVar30 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)((int)puVar20 + 0x194) = fVar1;
      *(float *)((int)puVar20 + 0x18c) = fVar1;
      *(float *)(puVar20 + 0x32) = fVar1;
      *(float *)(puVar20 + 0x31) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)((int)puVar20 + 0x18c) = *(float *)((int)puVar20 + 0x18c) * fVar4;
      *(float *)(puVar20 + 0x32) = *(float *)(puVar20 + 0x32) * fVar1;
      *(float *)((int)puVar20 + 0x194) = *(float *)((int)puVar20 + 0x194) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar1 * fVar1;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0x158;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar1 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar1;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        iVar14 = (int)lVar29;
        lVar25 = lVar25 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar13 + 0x188)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar2 + fVar3);
    }
  }
  else {
    fVar1 = pfVar28[4];
    fVar2 = pfVar28[5];
    fVar3 = fVar1 - *(float *)((int)&((Spline *)(pSVar18->points + -1))->cnt + iVar14);
    fVar4 = fVar2 - pfVar28[1];
    fVar7 = ABS(fVar3);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar20 + 0xfc) = fVar3;
    *(float *)(puVar20 + 0x20) = fVar4;
    *(float *)((int)puVar20 + 0x104) = fVar7 - fVar6;
    dVar41 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x20) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar20 + 0xfc));
    if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar20 + 0x20));
    if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
      fVar8 = fVar7;
    }
    dVar34 = dVar41;
    if (0.0 < fVar3) {
      lVar25 = uVar22 - 0x2d0;
      lVar29 = uVar22 - 0xa8;
      lVar31 = uVar22 - 0xb8;
      lVar30 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x234) = fVar3;
      *(float *)((int)puVar20 + 0x22c) = fVar3;
      *(float *)(puVar20 + 0x46) = fVar3;
      *(float *)(puVar20 + 0x45) = fVar3;
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar20 + 0x22c) = *(float *)((int)puVar20 + 0x22c) * fVar7;
      *(float *)(puVar20 + 0x46) = *(float *)(puVar20 + 0x46) * fVar3;
      *(float *)((int)puVar20 + 0x234) = *(float *)((int)puVar20 + 0x234) * fVar3 * fVar7;
      do {
        *(float *)((int)lVar25 + 0x228) = *(float *)((int)lVar25 + 0x218) * fVar3 * fVar3;
        iVar13 = (int)lVar31;
        lVar31 = lVar31 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0xb8;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar3 = *pfVar27;
        fVar7 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x228) = *(float *)((int)lVar25 + 0x228) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar7;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        iVar14 = (int)lVar29;
        lVar25 = lVar25 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar13 + 0x228)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    fVar1 = pfVar28[8] - fVar1;
    fVar2 = pfVar28[9] - fVar2;
    fVar4 = ABS(fVar1);
    fVar3 = ABS(fVar2);
    *(float *)(puVar20 + 0x1e) = fVar1;
    *(float *)((int)puVar20 + 0xf4) = fVar2;
    *(float *)(puVar20 + 0x1f) = fVar4 - fVar3;
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xf4) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar20 + 0x1e));
    if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar20 + 0xf4));
    if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar41;
    if (0.0 < fVar1) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0xd8;
      lVar29 = uVar22 - 200;
      lVar30 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar20 + 0x214) = fVar1;
      *(float *)((int)puVar20 + 0x20c) = fVar1;
      *(float *)(puVar20 + 0x42) = fVar1;
      *(float *)(puVar20 + 0x41) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x20c) = *(float *)((int)puVar20 + 0x20c) * fVar3;
      *(float *)(puVar20 + 0x42) = *(float *)(puVar20 + 0x42) * fVar1;
      *(float *)((int)puVar20 + 0x214) = *(float *)((int)puVar20 + 0x214) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar25 + 0x208) = *(float *)((int)lVar25 + 0x1f8) * fVar1 * fVar1;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0xd8;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar1 = *pfVar27;
        fVar3 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x208) = *(float *)((int)lVar25 + 0x208) * fVar1;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar3;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar13 + 0x208)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar4);
    }
    dVar33 = (double)FastDiffRots(dVar33,dVar34);
    dVar34 = (double)FastWrapRot((float)(dVar39 * dVar33),(float)dVar34);
    *(float *)(param_1 + 0x48) = (float)dVar34;
    fVar1 = pfVar28[5];
    fVar4 = pfVar28[1] - fVar1;
    fVar2 = pfVar28[4];
    fVar6 = *pfVar28 - fVar2;
    fVar3 = pfVar28[6];
    fVar7 = fVar3 - pfVar28[2];
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar20 + 0x1d) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar4);
    *(float *)((int)puVar20 + 0xe4) = fVar4;
    *(float *)((int)puVar20 + 0xec) = (float)(dVar33 - dVar37);
    fVar4 = pfVar28[8];
    fVar6 = pfVar28[9];
    fVar7 = pfVar28[10];
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xe4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xec) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x1d) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar20 + 0xe4));
    if ((double)*(float *)((int)puVar20 + 0xec) - dVar41 < 0.0) {
      dVar34 = dVar37;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)(puVar20 + 0x1d));
    if ((double)*(float *)((int)puVar20 + 0xec) - dVar41 < 0.0) {
      dVar37 = dVar33;
    }
    dVar33 = dVar41;
    if (dVar41 < dVar34) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0xf8;
      lVar29 = uVar22 - 0xe8;
      lVar30 = 2;
      fVar9 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar20 + 500) = fVar9;
      *(float *)((int)puVar20 + 0x1ec) = fVar9;
      *(float *)(puVar20 + 0x3e) = fVar9;
      *(float *)(puVar20 + 0x3d) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar20 + 0x1ec) = *(float *)((int)puVar20 + 0x1ec) * fVar10;
      *(float *)(puVar20 + 0x3e) = *(float *)(puVar20 + 0x3e) * fVar9;
      *(float *)((int)puVar20 + 500) = *(float *)((int)puVar20 + 500) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1d8) * fVar9 * fVar9;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0xf8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar9 = *pfVar28;
        fVar10 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1e8) * fVar9;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar10;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      dVar34 = dVar41;
      do {
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar13 + 0x1e8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar33 = (double)((float)(dVar34 + dVar32) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar20 + 0xdc) = fVar7;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar1);
    *(float *)(puVar20 + 0x1b) = fVar1;
    *(float *)(puVar20 + 0x1c) = (float)(dVar37 - dVar36);
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x1b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xdc) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar20 + 0x1b));
    if ((double)*(float *)(puVar20 + 0x1c) - dVar41 < 0.0) {
      dVar34 = dVar36;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar36 = ABS((double)*(float *)((int)puVar20 + 0xdc));
    if ((double)*(float *)(puVar20 + 0x1c) - dVar41 < 0.0) {
      dVar36 = dVar37;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar41 < dVar34) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0x118;
      lVar29 = uVar22 - 0x108;
      lVar30 = 2;
      fVar3 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x1d4) = fVar3;
      *(float *)((int)puVar20 + 0x1cc) = fVar3;
      *(float *)(puVar20 + 0x3a) = fVar3;
      *(float *)(puVar20 + 0x39) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar20 + 0x1cc) = *(float *)((int)puVar20 + 0x1cc) * fVar4;
      *(float *)(puVar20 + 0x3a) = *(float *)(puVar20 + 0x3a) * fVar3;
      *(float *)((int)puVar20 + 0x1d4) = *(float *)((int)puVar20 + 0x1d4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1b8) * fVar3 * fVar3;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0x118;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1c8) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        iVar14 = (int)lVar29;
        lVar25 = lVar25 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar13 + 0x1c8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar41 = (double)((float)(dVar41 + dVar32) * fVar1 + fVar2);
    }
    dVar33 = -dVar33;
    dVar41 = (double)FastDiffRots(-dVar41,dVar33);
    dVar39 = (double)FastWrapRot((float)(dVar39 * dVar41),(float)dVar33);
    *(float *)(param_1 + 0x44) = (float)dVar39;
    fVar1 = *(float *)(iVar12 + 0x88) + 1.5707963;
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
    *(float *)(param_1 + 0x44) =
         (float)(dVar39 * (double)(fVar1 * fVar4 * 2.601887e-06 +
                                  fVar4 * -0.0001980741 +
                                  fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
    dVar39 = (double)FastWrapRot(*(float *)(param_1 + 0x48),*(float *)(iVar12 + 0x88));
  }
  *(float *)(param_1 + 0x48) = (float)dVar39;
  if ((0 < (int)lVar23) && (0 < (int)lVar24)) {
    iVar13 = (int)(lVar24 << 4);
    fVar1 = *(float *)(puVar20 + 0x10);
    dVar39 = 0.0;
    *(undefined4 *)((int)puVar20 + 0x7c) = 0;
    *(undefined4 *)(puVar20 + 0xf) = 0;
    *(undefined4 *)((int)puVar20 + 0x74) = 0;
    *(undefined4 *)(puVar20 + 0xe) = 0;
    fVar2 = *(float *)((int)puVar20 + 0x84);
    fVar3 = *(float *)((int)&pSVar17->points[0].x + iVar13) - fVar1;
    fVar4 = *(float *)((int)&pSVar17->points[0].y + iVar13) - fVar2;
    fVar8 = ABS(fVar3);
    fVar7 = ABS(fVar4);
    *(float *)((int)puVar20 + 0xb4) = fVar3;
    *(float *)(puVar20 + 0x17) = fVar4;
    *(float *)((int)puVar20 + 0xbc) = fVar8 - fVar7;
    fVar3 = *(float *)((int)&pSVar17->points[1].x + iVar13);
    fVar4 = *(float *)((int)&pSVar17->points[1].y + iVar13);
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x17) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar20 + 0xb4));
    if (*(float *)((int)puVar20 + 0xbc) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar11 = ABS(*(float *)(puVar20 + 0x17));
    if (*(float *)((int)puVar20 + 0xbc) - 0.0 < 0.0) {
      fVar11 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar41 = dVar39;
    if (0.0 < fVar6) {
      lVar23 = uVar22 - 0x2d0;
      lVar25 = uVar22 - 0x168;
      lVar24 = uVar22 - 0x178;
      lVar31 = 2;
      fVar6 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar11 = fVar6 * fVar6;
      *(float *)((int)puVar20 + 0x174) = fVar6;
      *(float *)((int)puVar20 + 0x16c) = fVar6;
      *(float *)(puVar20 + 0x2e) = fVar6;
      *(float *)(puVar20 + 0x2d) = fVar6;
      fVar6 = fVar11 * fVar11;
      *(float *)((int)puVar20 + 0x16c) = *(float *)((int)puVar20 + 0x16c) * fVar11;
      *(float *)(puVar20 + 0x2e) = *(float *)(puVar20 + 0x2e) * fVar6;
      *(float *)((int)puVar20 + 0x174) = *(float *)((int)puVar20 + 0x174) * fVar6 * fVar11;
      do {
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x158) * fVar6 * fVar6;
        iVar14 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar6 * fVar6;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x178;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar6 = *pfVar28;
        fVar11 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x168) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar14 = (int)lVar23;
        iVar21 = (int)lVar25;
        lVar23 = lVar23 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar14 + 0x168)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar41 = (double)((float)(dVar41 + dVar32) * fVar7 + fVar8);
    }
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar6 = ABS(fVar3);
    fVar2 = ABS(fVar4);
    *(float *)(puVar20 + 0x15) = fVar3;
    *(float *)((int)puVar20 + 0xac) = fVar4;
    *(float *)(puVar20 + 0x16) = fVar6 - fVar2;
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xac) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar20 + 0x15));
    if (*(float *)(puVar20 + 0x16) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar20 + 0xac));
    if (*(float *)(puVar20 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar34 = dVar39;
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2d0;
      lVar24 = uVar22 - 0x198;
      lVar25 = uVar22 - 0x188;
      lVar31 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar20 + 0x154) = fVar1;
      *(float *)((int)puVar20 + 0x14c) = fVar1;
      *(float *)(puVar20 + 0x2a) = fVar1;
      *(float *)(puVar20 + 0x29) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x14c) = *(float *)((int)puVar20 + 0x14c) * fVar3;
      *(float *)(puVar20 + 0x2a) = *(float *)(puVar20 + 0x2a) * fVar1;
      *(float *)((int)puVar20 + 0x154) = *(float *)((int)puVar20 + 0x154) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x138) * fVar1 * fVar1;
        iVar14 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x198;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x148) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar14 + 0x148)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar34 = (double)((float)(dVar34 + dVar32) * fVar2 + fVar4);
    }
    dVar34 = (double)FastDiffRots(dVar34,dVar41);
    dVar41 = (double)FastWrapRot((float)(dVar40 * dVar34),(float)dVar41);
    *(float *)(puVar20 + 0xf) = (float)dVar41;
    fVar1 = *(float *)((int)puVar20 + 0x84);
    fVar2 = *(float *)(puVar20 + 0x10);
    fVar4 = fVar1 - *(float *)((int)&pSVar17->points[0].y + iVar13);
    fVar6 = fVar2 - *(float *)((int)&pSVar17->points[0].x + iVar13);
    fVar3 = *(float *)(puVar20 + 0x11);
    fVar7 = *(float *)((int)&pSVar17->points[0].z + iVar13) - fVar3;
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar20 + 0x14) = fVar7;
    dVar33 = ABS((double)fVar7);
    dVar34 = ABS((double)fVar4);
    *(float *)((int)puVar20 + 0x9c) = fVar4;
    *(float *)((int)puVar20 + 0xa4) = (float)(dVar34 - dVar33);
    fVar4 = *(float *)((int)&pSVar17->points[1].x + iVar13);
    fVar6 = *(float *)((int)&pSVar17->points[1].y + iVar13);
    fVar7 = *(float *)((int)&pSVar17->points[1].z + iVar13);
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x14) >> 0x1d) & 4;
    dVar41 = ABS((double)*(float *)((int)puVar20 + 0x9c));
    if ((double)*(float *)((int)puVar20 + 0xa4) - dVar39 < 0.0) {
      dVar41 = dVar33;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = ABS((double)*(float *)(puVar20 + 0x14));
    if ((double)*(float *)((int)puVar20 + 0xa4) - dVar39 < 0.0) {
      dVar33 = dVar34;
    }
    dVar34 = dVar39;
    if (dVar39 < dVar41) {
      lVar23 = uVar22 - 0x2d0;
      lVar24 = uVar22 - 0x1b8;
      lVar25 = uVar22 - 0x1a8;
      lVar31 = 2;
      fVar9 = (float)(dVar33 - dVar41) / (float)(dVar33 + dVar41);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar20 + 0x134) = fVar9;
      *(float *)((int)puVar20 + 300) = fVar9;
      *(float *)(puVar20 + 0x26) = fVar9;
      *(float *)(puVar20 + 0x25) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar20 + 300) = *(float *)((int)puVar20 + 300) * fVar10;
      *(float *)(puVar20 + 0x26) = *(float *)(puVar20 + 0x26) * fVar9;
      *(float *)((int)puVar20 + 0x134) = *(float *)((int)puVar20 + 0x134) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x118) * fVar9 * fVar9;
        iVar13 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x1b8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar9 = *pfVar28;
        fVar10 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x128) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      dVar41 = dVar39;
      do {
        iVar13 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar14 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar13 + 0x128)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar34 = (double)((float)(dVar41 + dVar32) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar20 + 0x94) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar1);
    *(float *)(puVar20 + 0x12) = fVar1;
    *(float *)(puVar20 + 0x13) = (float)(dVar33 - dVar37);
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0x94) >> 0x1d) & 4;
    dVar41 = ABS((double)*(float *)(puVar20 + 0x12));
    if ((double)*(float *)(puVar20 + 0x13) - dVar39 < 0.0) {
      dVar41 = dVar37;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar37 = ABS((double)*(float *)((int)puVar20 + 0x94));
    if ((double)*(float *)(puVar20 + 0x13) - dVar39 < 0.0) {
      dVar37 = dVar33;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar39 < dVar41) {
      lVar23 = uVar22 - 0x2d0;
      lVar24 = uVar22 - 0x1d8;
      lVar25 = uVar22 - 0x1c8;
      lVar31 = 2;
      fVar3 = (float)(dVar37 - dVar41) / (float)(dVar37 + dVar41);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x114) = fVar3;
      *(float *)((int)puVar20 + 0x10c) = fVar3;
      *(float *)(puVar20 + 0x22) = fVar3;
      *(float *)(puVar20 + 0x21) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar20 + 0x10c) = *(float *)((int)puVar20 + 0x10c) * fVar4;
      *(float *)(puVar20 + 0x22) = *(float *)(puVar20 + 0x22) * fVar3;
      *(float *)((int)puVar20 + 0x114) = *(float *)((int)puVar20 + 0x114) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0xf8) * fVar3 * fVar3;
        iVar13 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x1d8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0x108) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar23 = 2;
      do {
        iVar13 = (int)lVar26;
        iVar14 = (int)lVar25;
        lVar26 = lVar26 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar13 + 0x108)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar39 = (double)((float)(dVar39 + dVar32) * fVar1 + fVar2);
    }
    dVar34 = -dVar34;
    dVar32 = (double)FastDiffRots(-dVar39,dVar34);
    dVar32 = (double)FastWrapRot((float)(dVar40 * dVar32),(float)dVar34);
    *(float *)((int)puVar20 + 0x74) = (float)dVar32;
    Camera_SetMobyDrivenTargetRot((float *)(puVar20 + 0xe));
  }
  *(float *)(param_1 + 0x2c) =
       *(float *)(*(int *)(param_1 + 0x24) + 0x24) *
       -((*(float *)(iVar12 + 0x9c) - *(float *)(iVar12 + 0xa0)) * *(float *)(iVar12 + 0xa4) -
        *(float *)(iVar12 + 0x9c));
  fVar1 = *(float *)(iVar12 + 0xa4);
  uVar19 = (int)*(uint *)(iVar12 + 0xa4) >> 0x1f;
  if (0x3f4ccccd < (int)((uVar19 >> 1 ^ *(uint *)(iVar12 + 0xa4)) - uVar19)) {
    OrganicDeltAng
              (3.1415927,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 6.2831855,(float *)(iVar12 + 0x88),0x280f78,
               (float *)(iVar12 + 0x8c));
    fVar1 = *(float *)(iVar12 + 0xa4);
  }
  return (double)fVar1 == dVar38;
}


// 0x02825d4 (0xd0 bytes)
void M1448_002825d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x94);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      *(undefined4 *)(iVar1 + 0x80) = 0;
    }
  }
  else if (iVar2 < 2) {
    *(undefined4 *)(iVar1 + 0x80) = 1;
  }
  iVar1 = *(int *)(iVar1 + 0x80);
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
      MB_ShowPersistentMessage(10,0x426c);
      return;
    }
  }
  MB_ShowPersistentMessage(10,0x426b);
  return;
}


// 0x02826c8 (0xd60 bytes)
// inlined: FastAtan2 @0x282be8, FastAtan2 @0x282d98
/* Moby 1448 */

void UpdateMoby_1448(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
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
  ushort uVar15;
  void *pvVar16;
  MobyClass *pMVar17;
  int iVar18;
  Spline *pSVar19;
  Spline *pSVar20;
  ulonglong *puVar21;
  float fVar22;
  uint uVar23;
  undefined4 uVar24;
  Cuboid *pCVar25;
  Cuboid *pCVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  float *pfVar35;
  longlong lVar34;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  uint uVar36;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  
  lVar28 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x1a0;
  puVar21 = (ulonglong *)lVar30;
  *puVar21 = uVar27;
  puVar21[0x36] = in_LR;
  puVar21[0x2d] = in_f25;
  puVar21[0x2e] = in_f26;
  puVar21[0x2f] = in_f27;
  puVar21[0x30] = in_f28;
  puVar21[0x31] = in_f29;
  puVar21[0x32] = in_f30;
  puVar21[0x33] = in_f31;
  puVar21[0x2c] = unaff_r31;
  puVar21[0x2b] = unaff_r30;
  pvVar16 = moby->pVar;
  fVar2 = (moby->rotation).y;
  *(f32 *)(puVar21 + 0xe) = (moby->rotation).x;
  fVar3 = (moby->rotation).z;
  pMVar17 = moby->pClass;
  *(f32 *)((int)puVar21 + 0x74) = fVar2;
  fVar2 = (moby->rotation).w;
  *(f32 *)(puVar21 + 0xf) = fVar3;
  *(f32 *)((int)puVar21 + 0x7c) = fVar2;
  dVar45 = (double)(moby->pos).x;
  fVar4 = pMVar17->gScale * DAT_007aabc0;
  dVar44 = (double)(moby->pos).y;
  dVar43 = (double)(moby->pos).z;
  *(int *)((int)pvVar16 + 0xb0) = *(int *)((int)pvVar16 + 0xb0) + 1;
  bVar1 = moby->state;
  moby->scale = fVar4;
  puVar21[0x2a] = unaff_r29;
  puVar21[0x29] = unaff_r28;
  puVar21[0x28] = unaff_r27;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar15 = moby->uid;
      if (((&g_Checkpoint.objState[0])[(short)uVar15] != '\0') ||
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar15 >> 5) << 2)
                    ) & 1 << (uVar15 & 0x1f)) != 0)) {
        *(undefined4 *)((int)pvVar16 + 0x94) = 0;
        *(undefined4 *)((int)pvVar16 + 0x80) = 0;
        *(undefined4 *)((int)pvVar16 + 0x98) = 0;
      }
      moby->updateDistance = -1;
      moby->drawDistance = 0x80;
      uVar36 = g_heroMobyPtr->color;
      uVar23 = g_heroMobyPtr->light;
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar16 + 0xb0) = 0;
      moby->color = uVar36;
      moby->light = uVar23;
      if (moby->animationId != '\x02') {
        MB_SetAnimation(lVar28,2,0,0);
      }
      pCVar25 = Cuboids;
      iVar31 = *(int *)((int)pvVar16 + 0x7c);
      *(undefined4 *)((int)pvVar16 + 0x94) = 1;
      *(undefined4 *)((int)pvVar16 + 0x98) = 1;
      *(undefined4 *)((int)pvVar16 + 0x80) = 1;
      (moby->pos).x = pCVar25[iVar31].pos.x;
      (moby->pos).y = pCVar25[iVar31].pos.y;
      (moby->pos).z = pCVar25[iVar31].pos.z;
      (moby->pos).w = pCVar25[iVar31].pos.w;
      pCVar25 = Cuboids;
      iVar31 = *(int *)((int)pvVar16 + 0x7c);
      (moby->rotation).x = Cuboids[iVar31].rot.x;
      (moby->rotation).y = pCVar25[iVar31].rot.y;
      (moby->rotation).z = pCVar25[iVar31].rot.z;
      (moby->rotation).w = pCVar25[iVar31].rot.w;
    }
    else {
      if (((moby->animationId == '\x02') && ((moby->field43_0x70 & 2U) != 0)) &&
         (*(int *)((int)pvVar16 + 0xac) == 0)) {
        PlayMobySound(1,0,moby);
        *(undefined4 *)((int)pvVar16 + 0xac) = 0;
      }
      if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
         ((iVar31 = *(int *)((int)pvVar16 + 0xb0),
          puVar21[0x25] = (longlong)(int)(animationSpeed * 30.5),
          *(int *)((int)puVar21 + 300) < iVar31 &&
          ((M1448_002825d4(lVar28), (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0
           && (g_HelpMsgOwner == 10)))))) {
        iVar31 = *(int *)((int)pvVar16 + 0x80);
        if (-1 < iVar31) {
          *(undefined4 *)((int)pvVar16 + 0xa8) = 1;
          fVar4 = DAT_007aabc0;
          uVar24 = DAT_007aabbc;
          if (iVar31 < 1) {
            if (-1 < iVar31) {
              *(undefined4 *)((int)pvVar16 + 0x98) = 0;
              *(float *)((int)pvVar16 + 0x9c) = fVar4;
              *(undefined4 *)((int)pvVar16 + 0x94) = 1;
              *(undefined4 *)((int)pvVar16 + 0xa0) = DAT_007aabbc;
            }
          }
          else if (iVar31 < 2) {
            *(undefined4 *)((int)pvVar16 + 0x98) = 1;
            *(undefined4 *)((int)pvVar16 + 0x9c) = uVar24;
            *(undefined4 *)((int)pvVar16 + 0x94) = 0;
            *(float *)((int)pvVar16 + 0xa0) = DAT_007aabc0;
          }
        }
      }
      pCVar25 = Cuboids;
      if (*(int *)((int)pvVar16 + 0xa8) == 0) {
        uVar15 = moby->uid;
        if (((&g_Checkpoint.objState[0])[(short)uVar15] != '\0') ||
           ((*(uint *)(&g_LevelObjBits +
                      Level * 0x100 + (int)((longlong)((int)(short)uVar15 >> 5) << 2)) &
            1 << (uVar15 & 0x1f)) != 0)) {
          uVar36 = *(uint *)((int)pvVar16 + 0x94) ^ 1;
          iVar31 = *(int *)((int)pvVar16 + *(uint *)((int)pvVar16 + 0x94) * 4 + 0x78);
          iVar18 = *(int *)((int)pvVar16 + uVar36 * 4 + 0x78);
          fVar6 = g_heroPosition.y - Cuboids[iVar31].pos.y;
          fVar4 = g_heroPosition.x - Cuboids[iVar31].pos.x;
          fVar7 = g_heroPosition.y - Cuboids[iVar18].pos.y;
          fVar5 = g_heroPosition.x - Cuboids[iVar18].pos.x;
          if (SQRT(fVar5 * fVar5 + fVar7 * fVar7) < SQRT(fVar4 * fVar4 + fVar6 * fVar6)) {
            *(uint *)((int)pvVar16 + 0x94) = uVar36;
            iVar31 = *(int *)((int)pvVar16 + uVar36 * 4 + 0x78);
            *(uint *)((int)pvVar16 + 0x80) = *(uint *)((int)pvVar16 + 0x80) ^ 1;
            *(uint *)((int)pvVar16 + 0x98) = *(uint *)((int)pvVar16 + 0x98) ^ 1;
            pCVar26 = Cuboids;
            (moby->pos).x = pCVar25[iVar31].pos.x;
            (moby->pos).y = pCVar25[iVar31].pos.y;
            iVar18 = *(int *)((int)pvVar16 + 0x94);
            (moby->pos).z = pCVar25[iVar31].pos.z;
            (moby->pos).w = pCVar25[iVar31].pos.w;
            iVar31 = *(int *)((int)pvVar16 + iVar18 * 4 + 0x78);
            (moby->rotation).x = pCVar26[iVar31].rot.x;
            (moby->rotation).y = pCVar26[iVar31].rot.y;
            (moby->rotation).z = pCVar26[iVar31].rot.z;
            (moby->rotation).w = pCVar26[iVar31].rot.w;
            FastEulerToMtx(lVar28 + 0xc0,lVar28 + 0x40);
            moby->scale = moby->pClass->gScale;
          }
        }
      }
      else {
        *(undefined4 *)((int)pvVar16 + 0xa8) = 0;
        MB_ClearHelpMessage((MobyInstance *)0xa);
        moby->state = '\x02';
        PlayMobySound(2,0,moby);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar28,0,0,0);
        }
        puVar21[0x25] = (longlong)(int)(animationSpeed * 10.5);
        FadeToBlack(*(undefined4 *)((int)puVar21 + 300));
        fVar13 = 0.0;
        iVar31 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x98) * 4 + 0x60);
        *(undefined4 *)((int)pvVar16 + 0x88) = 0;
        pSVar19 = Splines[iVar31];
        iVar31 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x98) * 4 + 0x68);
        fVar4 = pSVar19->points[0].x;
        *(float *)(puVar21 + 0x14) = fVar4;
        fVar5 = pSVar19->points[0].y;
        *(float *)((int)puVar21 + 0xa4) = fVar5;
        fVar6 = pSVar19->points[0].z;
        *(float *)(puVar21 + 0x15) = fVar6;
        pSVar20 = Splines[iVar31];
        *(float *)((int)puVar21 + 0xac) = pSVar19->points[0].w;
        fVar7 = pSVar20->points[0].x;
        fVar8 = pSVar20->points[0].y;
        fVar11 = fVar7 - fVar4;
        fVar10 = fVar8 - fVar5;
        fVar9 = pSVar20->points[0].z;
        fVar12 = ABS(fVar11);
        fVar14 = ABS(fVar10);
        *(float *)((int)puVar21 + 0xdc) = fVar11;
        *(float *)(puVar21 + 0x1c) = fVar10;
        *(undefined4 *)((int)puVar21 + 0x9c) = 0;
        *(undefined4 *)(puVar21 + 0x13) = 0;
        *(undefined4 *)((int)puVar21 + 0x94) = 0;
        *(undefined4 *)(puVar21 + 0x12) = 0;
        *(float *)((int)puVar21 + 0xe4) = fVar12 - fVar14;
        uVar33 = (ulonglong)(*(uint *)((int)puVar21 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1c) >> 0x1d) & 4;
        fVar11 = ABS(*(float *)((int)puVar21 + 0xdc));
        if (*(float *)((int)puVar21 + 0xe4) - 0.0 < 0.0) {
          fVar11 = fVar14;
        }
        fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar33 << 2));
        fVar10 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
        fVar22 = ABS(*(float *)(puVar21 + 0x1c));
        if (*(float *)((int)puVar21 + 0xe4) - 0.0 < 0.0) {
          fVar22 = fVar12;
        }
        fVar12 = fVar13;
        if (0.0 < fVar11) {
          lVar29 = uVar27 - 400;
          lVar32 = uVar27 - 0x98;
          lVar34 = uVar27 - 0x88;
          lVar37 = 2;
          fVar11 = (fVar22 - fVar11) / (fVar22 + fVar11);
          fVar12 = fVar11 * fVar11;
          *(float *)((int)puVar21 + 0x114) = fVar11;
          *(float *)((int)puVar21 + 0x10c) = fVar11;
          *(float *)(puVar21 + 0x22) = fVar11;
          *(float *)(puVar21 + 0x21) = fVar11;
          fVar11 = fVar12 * fVar12;
          *(float *)((int)puVar21 + 0x10c) = *(float *)((int)puVar21 + 0x10c) * fVar12;
          *(float *)(puVar21 + 0x22) = *(float *)(puVar21 + 0x22) * fVar11;
          *(float *)((int)puVar21 + 0x114) = *(float *)((int)puVar21 + 0x114) * fVar11 * fVar12;
          do {
            *(float *)((int)lVar29 + 0x108) = *(float *)((int)lVar29 + 0xf8) * fVar11 * fVar11;
            iVar31 = (int)lVar32;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar11 * fVar11;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar27 - 0x98;
          pfVar35 = (float *)&DAT_007358e0;
          lVar29 = lVar30;
          lVar32 = lVar34;
          do {
            fVar11 = *pfVar35;
            fVar12 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar29 + 0x108) = *(float *)((int)lVar29 + 0x108) * fVar11;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar12;
            lVar32 = lVar32 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar32 = 2;
          lVar29 = lVar30;
          fVar11 = fVar13;
          do {
            iVar31 = (int)lVar29;
            iVar18 = (int)lVar34;
            lVar29 = lVar29 + 0x10;
            lVar34 = lVar34 + 0x10;
            fVar11 = fVar11 + *(float *)(iVar31 + 0x108) + *(float *)(iVar18 + 4) +
                     *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          fVar12 = (fVar11 + 0.7853982) * fVar14 + fVar10;
        }
        fVar5 = fVar5 - fVar8;
        fVar4 = fVar4 - fVar7;
        *(float *)(puVar21 + 0x13) = fVar12;
        fVar9 = fVar9 - fVar6;
        fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        *(float *)((int)puVar21 + 0xd4) = fVar9;
        fVar9 = ABS(fVar9);
        fVar5 = ABS(fVar4);
        *(float *)(puVar21 + 0x1a) = fVar4;
        *(float *)(puVar21 + 0x1b) = fVar5 - fVar9;
        uVar33 = (ulonglong)(*(uint *)(puVar21 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xd4) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar21 + 0x1a));
        if (*(float *)(puVar21 + 0x1b) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar33 << 2));
        fVar7 = ABS(*(float *)((int)puVar21 + 0xd4));
        if (*(float *)(puVar21 + 0x1b) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
        if (0.0 < fVar4) {
          lVar29 = uVar27 - 400;
          lVar32 = uVar27 - 0xb8;
          lVar34 = uVar27 - 0xa8;
          lVar37 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar21 + 0xf4) = fVar4;
          *(float *)((int)puVar21 + 0xec) = fVar4;
          *(float *)(puVar21 + 0x1e) = fVar4;
          *(float *)(puVar21 + 0x1d) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar21 + 0xec) = *(float *)((int)puVar21 + 0xec) * fVar7;
          *(float *)(puVar21 + 0x1e) = *(float *)(puVar21 + 0x1e) * fVar4;
          *(float *)((int)puVar21 + 0xf4) = *(float *)((int)puVar21 + 0xf4) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar29 + 0xe8) = *(float *)((int)lVar29 + 0xd8) * fVar4 * fVar4;
            iVar31 = (int)lVar32;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar4 * fVar4;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar27 - 0xb8;
          pfVar35 = (float *)&DAT_007358e0;
          lVar29 = lVar30;
          lVar32 = lVar34;
          do {
            fVar4 = *pfVar35;
            fVar7 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar29 + 0xe8) = *(float *)((int)lVar29 + 0xe8) * fVar4;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
            lVar32 = lVar32 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar29 = 2;
          do {
            iVar31 = (int)lVar30;
            iVar18 = (int)lVar34;
            lVar30 = lVar30 + 0x10;
            lVar34 = lVar34 + 0x10;
            fVar13 = fVar13 + *(float *)(iVar31 + 0xe8) + *(float *)(iVar18 + 4) +
                     *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          fVar13 = (fVar13 + 0.7853982) * fVar6 + fVar5;
        }
        fVar4 = animationSpeed;
        *(float *)((int)puVar21 + 0x94) = -fVar13;
        puVar21[0x25] = (longlong)(int)(fVar4 * 300.5);
        SetCameraPosition
                  (uVar27 - 0x100,uVar27 - 0x110,2,*(undefined4 *)((int)puVar21 + 300),0);
        Camera_SetCurrentAccel(0.001,1.0,1.0,0.001,1.0,1.0);
        Camera_SetMobyDrivenTargetPos((float *)(uVar27 - 0x100));
        Camera_SetMobyDrivenTargetRot((float *)(uVar27 - 0x110));
        Hero_Warp(&Cuboids[*(int *)((int)pvVar16 + 0x84)].pos.x,
                        &Cuboids[*(int *)((int)pvVar16 + 0x84)].rot.x,0x72,0);
      }
    }
  }
  else if (bVar1 < 3) {
    iVar31 = M1448_00280fb8(lVar28,*(undefined4 *)((int)pvVar16 + 0x98));
    if (iVar31 != 0) {
      moby->state = '\x03';
      pCVar25 = Cuboids;
      dVar42 = 0.0;
      *(undefined4 *)((int)pvVar16 + 0xa4) = 0;
      iVar31 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x94) * 4 + 0x78);
      iVar18 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x94) * 4 + 0x78);
      (moby->pos).x = pCVar25[iVar31].pos.x;
      (moby->pos).y = pCVar25[iVar31].pos.y;
      (moby->pos).z = pCVar25[iVar31].pos.z;
      (moby->pos).w = pCVar25[iVar31].pos.w;
      (moby->rotation).x = pCVar25[iVar18].rot.x;
      (moby->rotation).y = pCVar25[iVar18].rot.y;
      (moby->rotation).z = pCVar25[iVar18].rot.z;
      (moby->rotation).w = pCVar25[iVar18].rot.w;
      FastEulerToMtx(lVar28 + 0xc0,lVar28 + 0x40);
      fVar5 = (moby->transform).v0.y;
      fVar6 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      fVar2 = (moby->pos).w;
      moby->scale = moby->pClass->gScale;
      *(f32 *)((int)puVar21 + 0xbc) = fVar2;
      fVar8 = (moby->transform).v2.x;
      fVar9 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.z;
      fVar10 = (moby->pos).x;
      dVar41 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar13 = (moby->pos).y;
      fVar12 = (moby->pos).z;
      fVar14 = (moby->rotation).z;
      *(undefined4 *)((int)puVar21 + 0xcc) = 0;
      *(undefined4 *)(puVar21 + 0x19) = 0;
      *(undefined4 *)((int)puVar21 + 0xc4) = 0;
      *(undefined4 *)(puVar21 + 0x18) = 0;
      fVar4 = (float)(-2.0 / dVar41);
      dVar39 = dVar42;
      if (dVar42 - dVar41 < 0.0) {
        dVar39 = (double)(fVar7 * fVar4);
      }
      dVar40 = dVar42;
      if (dVar42 - dVar41 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      dVar38 = dVar42;
      if (dVar42 - dVar41 < 0.0) {
        dVar38 = (double)(fVar6 * fVar4);
      }
      if (dVar41 - dVar42 < 0.0) {
        dVar39 = (double)(fVar7 * fVar4);
      }
      if (dVar41 - dVar42 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      if (dVar41 - dVar42 < 0.0) {
        dVar38 = (double)(fVar6 * fVar4);
      }
      *(float *)(puVar21 + 0x17) = fVar12 + (float)(dVar39 + (double)fVar11);
      *(float *)((int)puVar21 + 0xb4) = fVar13 + (float)(dVar40 + (double)fVar9);
      *(float *)(puVar21 + 0x16) = fVar10 + (float)(dVar38 + (double)fVar8);
      dVar39 = (double)FastWrapRot(fVar14,3.1415927);
      *(float *)(puVar21 + 0x19) = (float)dVar39;
      Hero_Warp((float *)(puVar21 + 0x16),(float *)(puVar21 + 0x18),0,0);
      Camera_DeactivateMobyDrivenCam(0);
      uVar15 = moby->uid;
      iVar18 = (int)((longlong)((int)(short)uVar15 >> 5) << 2);
      iVar31 = (int)((longlong)((int)(short)uVar15 >> 5) << 2);
      uVar36 = *(uint *)(&g_CheckpointBits + iVar31);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar18) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar18) | 1 << (uVar15 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar31) = uVar36 | 1 << (uVar15 & 0x1f);
    }
  }
  else if (bVar1 < 4) {
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar16 + 0xb0) = 0;
    if (moby->animationId != '\x02') {
      puVar21[0x25] = (longlong)(int)(animationSpeed * 30.5);
      MB_SetAnimation(lVar28,2,0,*(undefined4 *)((int)puVar21 + 300));
    }
    PlayMobySound(0,0,moby);
    *(undefined4 *)((int)pvVar16 + 0xac) = 1;
  }
  fVar4 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  *(f32 *)((int)puVar21 + 0x8c) = (moby->pos).w;
  *(float *)(puVar21 + 0x10) = (float)((double)fVar4 - dVar45);
  *(float *)((int)puVar21 + 0x84) = (float)((double)fVar5 - dVar44);
  *(float *)(puVar21 + 0x11) = (float)((double)fVar6 - dVar43);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar16 + 0x20),(Vec4 *)(puVar21 + 0x10),uVar27 - 0x130,
             lVar28 + 0x40);
  return;
}


