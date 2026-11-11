// game/update/moby233.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x300950-0x3037f0
#include "game/update/moby233.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/update/moby1371.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0300950 (0x750 bytes)
// inlined: FastAtan2 @0x300c54, FastAtan2 @0x300e28
void M233_00300950
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar18;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  int iVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  undefined8 uVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  undefined8 uVar29;
  double dVar30;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack00000050;
  float fStack00000054;
  undefined8 uStack00000058;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0x170;
  puVar10 = (ulonglong *)lVar14;
  *puVar10 = uVar13;
  puVar10[0x30] = in_LR;
  puVar10[0x2a] = in_f28;
  puVar10[0x2b] = in_f29;
  puVar10[0x2c] = in_f30;
  puVar10[0x2d] = in_f31;
  puVar10[0x27] = unaff_r29;
  puVar10[0x26] = unaff_r28;
  fVar1 = (param_1->pos).x;
  *(float *)(puVar10 + 0x10) = fVar1;
  fVar2 = (param_1->pos).y;
  fStack00000044 = (float)param_3;
  *(float *)((int)puVar10 + 0x84) = fVar2;
  fVar3 = (param_1->pos).z;
  fVar2 = fVar2 - fStack00000044;
  *(float *)(puVar10 + 0x11) = fVar3;
  fVar4 = (param_1->pos).w;
  puVar10[0x28] = unaff_r30;
  *(f32 *)((int)puVar10 + 0x8c) = fVar4;
  fVar12 = DAT_0071f418;
  pvVar7 = param_1->pVar;
  dVar28 = 10.0;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fVar6 = DAT_0071f418 * 10.0;
  fVar1 = fVar1 - fStack00000040;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  uVar29 = 0x4000000000000000;
  fVar3 = fVar3 - fStack00000048;
  fVar5 = *(float *)((int)pvVar7 + 0x170);
  puVar10[0x29] = unaff_r31;
  puVar10[0x25] = unaff_r27;
  puVar10[0x24] = unaff_r26;
  if ((fVar5 * fVar5) / (fVar6 * 2.0) < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2)) {
    fVar5 = fVar12 * 10.0 + fVar5;
    *(float *)((int)pvVar7 + 0x170) = fVar5;
    if (g_FrameTime * 10.0 < fVar5) {
      *(float *)((int)pvVar7 + 0x170) = g_FrameTime * 10.0;
    }
  }
  else {
    fVar1 = -(fVar12 * 10.0 - fVar5);
    *(float *)((int)pvVar7 + 0x170) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)((int)pvVar7 + 0x170) = 0;
    }
  }
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  _fStack00000050 = param_5;
  uStack00000058 = param_6;
  FastVecSub(uVar13 - 0xe0,uVar13 + 0x40 & 0xffffffff,&param_1->pos);
  fVar1 = *(float *)((int)puVar10 + 0x94);
  fVar2 = *(float *)(puVar10 + 0x12);
  fVar3 = *(float *)(puVar10 + 0x13);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)((int)puVar10 + 0x74) = fVar1;
  *(float *)(puVar10 + 0xf) = fVar3;
  *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x9c);
  uVar27 = 0x3fb99999a0000000;
  dVar26 = 0.0;
  iVar21 = (int)pvVar7 + 0x150;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar6 = (*(float *)((int)pvVar7 + 0x170) * 0.1) / fVar5;
  dVar23 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar23 = (double)(fVar2 * fVar6);
  }
  dVar24 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar24 = (double)(fVar1 * fVar6);
  }
  dVar25 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar3 * fVar6);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar23 = (double)(fVar2 * fVar6);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar24 = (double)(fVar1 * fVar6);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar3 * fVar6);
  }
  *(float *)(puVar10 + 0xe) = (float)dVar23;
  *(float *)((int)puVar10 + 0x74) = (float)dVar24;
  *(float *)(puVar10 + 0xf) = (float)dVar25;
  FastVecScale(0x3fecccccc0000000,uVar13 - 0xd0,iVar21);
  lVar19 = uVar13 - 0x100;
  *(undefined4 *)((int)pvVar7 + 0x150) = *(undefined4 *)(puVar10 + 0x14);
  *(undefined4 *)((int)pvVar7 + 0x154) = *(undefined4 *)((int)puVar10 + 0xa4);
  *(undefined4 *)((int)pvVar7 + 0x158) = *(undefined4 *)(puVar10 + 0x15);
  *(undefined4 *)((int)pvVar7 + 0x15c) = *(undefined4 *)((int)puVar10 + 0xac);
  FastVecAddSelf(uVar13 - 0xc0,iVar21);
  MB_PushOutOfWalls(0x3ff0000000000000,uVar29,param_1,iVar21,lVar19,param_4,0);
  fVar1 = fStack00000050 - (param_1->pos).x;
  fVar2 = fStack00000054 - (param_1->pos).y;
  fVar4 = *(f32 *)((int)pvVar7 + 0x1a8);
  dVar24 = ABS((double)fVar1);
  dVar25 = ABS((double)fVar2);
  *(float *)((int)puVar10 + 0xd4) = fVar1;
  *(float *)(puVar10 + 0x1b) = fVar2;
  (param_1->pos).z = fVar4;
  fVar1 = (param_1->rotation).z;
  *(float *)((int)puVar10 + 0xdc) = (float)(dVar24 - dVar25);
  dVar30 = 0.7853981852531433;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0xd4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0xdc) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x1b) >> 0x1d) & 4;
  uVar16 = uVar15 << 2;
  dVar23 = ABS((double)*(float *)((int)puVar10 + 0xd4));
  if ((double)*(float *)((int)puVar10 + 0xdc) - dVar26 < 0.0) {
    dVar23 = dVar25;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar16);
  dVar25 = ABS((double)*(float *)(puVar10 + 0x1b));
  if ((double)*(float *)((int)puVar10 + 0xdc) - dVar26 < 0.0) {
    dVar25 = dVar24;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar24 = dVar26;
  if (dVar26 < dVar23) {
    lVar19 = uVar13 - 0x160;
    lVar20 = uVar13 - 0x60;
    lVar17 = uVar13 - 0x70;
    lVar22 = 2;
    fVar5 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0x10c) = fVar5;
    *(float *)((int)puVar10 + 0x104) = fVar5;
    *(float *)(puVar10 + 0x21) = fVar5;
    *(float *)(puVar10 + 0x20) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar6;
    *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar5;
    *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0xf0) * fVar5 * fVar5;
      iVar21 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
      lVar20 = lVar20 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar20 = uVar13 - 0x70;
    uVar16 = ZEXT48(&DAT_007358e0);
    lVar19 = lVar14;
    lVar17 = lVar20;
    do {
      pfVar18 = (float *)uVar16;
      fVar5 = pfVar18[1];
      uVar16 = uVar16 + 8;
      *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0x100) * *pfVar18;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar17 = 2;
    lVar19 = lVar14;
    dVar23 = dVar26;
    do {
      iVar21 = (int)lVar19;
      iVar11 = (int)lVar20;
      lVar19 = lVar19 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar21 + 0x100)) +
                        *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar23 = (double)MB_DeltAngSpeed
                             ((double)fVar1,dVar24,0x3f847ae140000000,0x3fd3333340000000,uVar27,
                              &DAT_003008f8,uVar16,(int)pvVar7 + 0x17c);
  (param_1->rotation).z = (float)dVar23;
  FastVecSub(uVar13 - 0xb0,&param_1->pos,uVar13 - 0xf0);
  uVar8 = *(uint *)(puVar10 + 0x18);
  fVar1 = *(float *)(puVar10 + 0x18);
  *(float *)((int)pvVar7 + 0x150) = fVar1;
  uVar9 = *(uint *)((int)puVar10 + 0xc4);
  dVar25 = ABS((double)fVar1);
  dVar23 = ABS((double)*(float *)((int)puVar10 + 0xc4));
  *(float *)((int)pvVar7 + 0x154) = *(float *)((int)puVar10 + 0xc4);
  *(undefined4 *)((int)pvVar7 + 0x158) = *(undefined4 *)(puVar10 + 0x19);
  *(undefined4 *)((int)pvVar7 + 0x15c) = *(undefined4 *)((int)puVar10 + 0xcc);
  fVar1 = (param_1->rotation).z;
  *(float *)(puVar10 + 0x1a) = (float)(dVar25 - dVar23);
  uVar16 = (ulonglong)(uVar8 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0x1a) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
  dVar24 = dVar25;
  if ((double)*(float *)(puVar10 + 0x1a) - dVar26 < 0.0) {
    dVar24 = dVar23;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  if ((double)*(float *)(puVar10 + 0x1a) - dVar26 < 0.0) {
    dVar23 = dVar25;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar26 < dVar24) {
    lVar19 = uVar13 - 0x160;
    lVar17 = uVar13 - 0x90;
    lVar20 = uVar13 - 0x80;
    lVar22 = 2;
    fVar5 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xec) = fVar5;
    *(float *)((int)puVar10 + 0xe4) = fVar5;
    *(float *)(puVar10 + 0x1d) = fVar5;
    *(float *)(puVar10 + 0x1c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar6;
    *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar5;
    *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xd0) * fVar5 * fVar5;
      iVar21 = (int)lVar17;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
      lVar20 = lVar20 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar20 = uVar13 - 0x90;
    pfVar18 = (float *)&DAT_007358e0;
    lVar19 = lVar14;
    lVar17 = lVar20;
    do {
      fVar5 = *pfVar18;
      fVar6 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xe0) * fVar5;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar19 = 2;
    do {
      iVar21 = (int)lVar14;
      iVar11 = (int)lVar20;
      lVar14 = lVar14 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar21 + 0xe0)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar26 = (double)((float)(dVar26 + dVar30) * fVar2 + fVar3);
  }
  dVar26 = (double)FastDiffRots(dVar26,(double)fVar1);
  fVar1 = (float)(dVar26 + 1.570796251296997);
  dVar23 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar23 = dVar26;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar24 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar23 < 0.0) {
    dVar24 = dVar23;
  }
  dVar23 = (double)(float)(dVar24 * dVar24);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = (float)((double)g_FrameTime * dVar28);
  fVar6 = fVar3 * fVar3;
  dVar28 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar24));
  dVar26 = (double)(float)(dVar23 * dVar28);
  fVar5 = fVar6 * fVar6 * fVar3;
  fVar2 = fVar6 * fVar5;
  dVar26 = (double)((*(float *)((int)pvVar7 + 0x170) * -0.34906584 *
                    ((float)(dVar23 * dVar26) * 2.601887e-06 +
                    (float)(dVar26 * -0.0001980741071747616 +
                           (double)(float)(dVar28 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar23 * dVar24) *
                                                          -0.16666656732559204 + dVar24))))) / fVar1
                   );
  dVar23 = 1.0471975803375244;
  dVar28 = (double)MB_DeltAngSpeed
                             ((double)(param_1->rotation).y,
                              (double)((*(float *)((int)pvVar7 + 0x170) * 0.34906584 *
                                       (fVar6 * fVar2 * 2.601887e-06 +
                                       fVar2 * -0.0001980741 +
                                       fVar5 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3))
                                      / fVar1),(double)(DAT_0071f418 * 0.5235988),
                              (double)(DAT_0071f418 * 1.0471976),
                              (double)(float)((double)g_FrameTime * dVar30));
  (param_1->rotation).y = (float)dVar28;
  dVar28 = (double)MB_DeltAngSpeed
                             ((double)(param_1->rotation).x,dVar26,
                              (double)(float)((double)DAT_0071f418 * dVar23),
                              (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                              (double)(g_FrameTime * 1.5707964));
  (param_1->rotation).x = (float)dVar28;
  return;
}


// 0x03010d0 (0x6f8 bytes)
// inlined: FastAtan2 @0x301518, FastAtan2 @0x3016bc
double M233_003010d0
                 (int param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xa0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x11] = in_f29;
  puVar6[0x12] = in_f30;
  puVar6[0x13] = in_f31;
  dVar21 = 0.0;
  fStack00000044 = (float)param_3;
  bVar9 = true;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14) - fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  param_2[3] = 0.0;
  fVar2 = fVar2 - fStack00000040;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  iVar5 = MobyUpdateChainStart;
  *param_2 = 0.0;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  dVar20 = dVar21;
  dVar22 = dVar21;
  dVar23 = dVar21;
  dVar24 = dVar21;
  if (iVar5 != 0) {
    do {
      if (((iVar5 != param_1) && (*(short *)(iVar5 + 0xa6) == *(short *)(param_1 + 0xa6))) &&
         (*(char *)(iVar5 + 0x20) != '@' && *(char *)(iVar5 + 0x20) != '\x01')) {
        fVar3 = *(float *)(iVar5 + 0x14);
        fVar4 = *(float *)(iVar5 + 0x10);
        fVar1 = fVar3 - *(float *)(param_1 + 0x14);
        fVar7 = fVar4 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar7 * fVar7 + fVar1 * fVar1) < 10.0) {
          dVar20 = (double)(float)(dVar20 + 6.0);
          fVar4 = (float)((double)(*(float *)(param_1 + 0x10) - fVar4) * 6.0 + dVar22);
          dVar22 = (double)fVar4;
          fVar3 = (float)((double)(*(float *)(param_1 + 0x14) - fVar3) * 6.0 + dVar23);
          dVar23 = (double)fVar3;
          fVar1 = (float)((double)(*(float *)(param_1 + 0x18) - *(float *)(iVar5 + 0x18)) * 6.0 +
                         dVar24);
          dVar24 = (double)fVar1;
          *param_2 = fVar4;
          param_2[1] = fVar3;
          param_2[2] = fVar1;
          fVar4 = *(float *)(iVar5 + 0x10);
          fVar3 = *(float *)(iVar5 + 0x14);
        }
        if (SQRT((fVar4 - fStack00000040) * (fVar4 - fStack00000040) +
                 (fVar3 - fStack00000044) * (fVar3 - fStack00000044)) < fVar2) {
          bVar9 = false;
        }
      }
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    if (!bVar9) {
      fVar3 = *(float *)(param_1 + 0x14) - fStack00000044;
      fVar4 = *(float *)(param_1 + 0x10) - fStack00000040;
      fStack00000048 = *(float *)(param_1 + 0x18) - fStack00000048;
      dVar18 = dVar21;
      if (15.5 - fVar2 < 0.0) {
        dVar18 = -15.0;
      }
      param_2[3] = 0.0;
      if (fVar2 - 14.5 < 0.0) {
        dVar18 = 15.0;
      }
      fVar1 = SQRT(fStack00000048 * fStack00000048 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = 1.0 / (float)(dVar20 + 10.0);
      fVar7 = (float)(dVar18 * 10.0) / fVar1;
      dVar20 = dVar21;
      if (0.0 - fVar1 < 0.0) {
        dVar20 = (double)(fVar7 * fStack00000048);
      }
      dVar18 = dVar21;
      if (0.0 - fVar1 < 0.0) {
        dVar18 = (double)(fVar7 * fVar3);
      }
      dVar19 = dVar21;
      if (0.0 - fVar1 < 0.0) {
        dVar19 = (double)(fVar7 * fVar4);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar20 = (double)(fVar7 * fStack00000048);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar18 = (double)(fVar7 * fVar3);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar19 = (double)(fVar7 * fVar4);
      }
      fVar4 = (float)(dVar24 + dVar20) * fVar2;
      fVar1 = (float)(dVar23 + dVar18) * fVar2;
      fVar2 = (float)(dVar22 + dVar19) * fVar2;
      param_2[2] = fVar4;
      param_2[1] = fVar1;
      *param_2 = fVar2;
      fVar2 = fVar2 + *(float *)(param_1 + 0x10);
      *param_2 = fVar2;
      fVar1 = fVar1 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar1;
      fVar3 = *(float *)(param_1 + 0x18);
      goto LAB_00301414;
    }
  }
  fVar3 = *(float *)(param_1 + 0x14) - fStack00000044;
  fVar4 = *(float *)(param_1 + 0x10) - fStack00000040;
  fStack00000048 = *(float *)(param_1 + 0x18) - fStack00000048;
  dVar18 = dVar21;
  if (10.5 - fVar2 < 0.0) {
    dVar18 = -10.0;
  }
  if (fVar2 - 9.5 < 0.0) {
    dVar18 = 10.0;
  }
  fVar2 = 1.0 / (float)(dVar20 + 10.0);
  param_2[3] = 0.0;
  fVar1 = SQRT(fStack00000048 * fStack00000048 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = (float)(dVar18 * 10.0) / fVar1;
  dVar20 = dVar21;
  if (0.0 - fVar1 < 0.0) {
    dVar20 = (double)(fVar7 * fStack00000048);
  }
  dVar18 = dVar21;
  if (0.0 - fVar1 < 0.0) {
    dVar18 = (double)(fVar7 * fVar3);
  }
  dVar19 = dVar21;
  if (0.0 - fVar1 < 0.0) {
    dVar19 = (double)(fVar7 * fVar4);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar20 = (double)(fVar7 * fStack00000048);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar18 = (double)(fVar7 * fVar3);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar19 = (double)(fVar7 * fVar4);
  }
  fVar4 = (float)(dVar24 + dVar20) * fVar2;
  fVar1 = (float)(dVar23 + dVar18) * fVar2;
  fVar2 = (float)(dVar22 + dVar19) * fVar2;
  param_2[2] = fVar4;
  param_2[1] = fVar1;
  *param_2 = fVar2;
  fVar2 = fVar2 + *(float *)(param_1 + 0x10);
  *param_2 = fVar2;
  fVar1 = fVar1 + *(float *)(param_1 + 0x14);
  param_2[1] = fVar1;
  fVar3 = *(float *)(param_1 + 0x18);
LAB_00301414:
  param_2[2] = fVar4 + fVar3;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14) - fVar1;
  if (1.0 <= SQRT((fVar3 - fVar2) * (fVar3 - fVar2) + fVar4 * fVar4)) {
    fVar1 = fVar1 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar2 - fVar3);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 6) = fVar2 - fVar3;
    *(float *)((int)puVar6 + 0x34) = fVar1;
    *(float *)(puVar6 + 7) = fVar7 - fVar4;
    uVar15 = (ulonglong)(*(uint *)(puVar6 + 6) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 7) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x34) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 6));
    if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = ABS(*(float *)((int)puVar6 + 0x34));
    if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar11 = uVar10 - 0x90;
      lVar16 = uVar10 - 0x48;
      lVar13 = uVar10 - 0x58;
      lVar17 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar6 + 0x54) = fVar2;
      *(float *)((int)puVar6 + 0x4c) = fVar2;
      *(float *)(puVar6 + 10) = fVar2;
      *(float *)(puVar6 + 9) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x4c) = *(float *)((int)puVar6 + 0x4c) * fVar4;
      *(float *)(puVar6 + 10) = *(float *)(puVar6 + 10) * fVar2;
      *(float *)((int)puVar6 + 0x54) = *(float *)((int)puVar6 + 0x54) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar11 + 0x48) = *(float *)((int)lVar11 + 0x38) * fVar2 * fVar2;
        iVar5 = (int)lVar13;
        lVar13 = lVar13 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x58;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar13 = lVar16;
      do {
        fVar2 = *pfVar14;
        fVar4 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0x48) = *(float *)((int)lVar11 + 0x48) * fVar2;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      do {
        iVar5 = (int)lVar12;
        iVar8 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar5 + 0x48)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar1);
    }
  }
  else {
    *param_2 = fVar3;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fStack00000040 = fStack00000040 - *(float *)(param_1 + 0x10);
    fStack00000044 = fStack00000044 - *(float *)(param_1 + 0x14);
    fVar4 = ABS(fStack00000040);
    fVar3 = ABS(fStack00000044);
    *(float *)((int)puVar6 + 0x3c) = fStack00000040;
    *(float *)(puVar6 + 8) = fStack00000044;
    *(float *)((int)puVar6 + 0x44) = fVar4 - fVar3;
    uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x3c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x44) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar6 + 8) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar6 + 0x3c));
    if (*(float *)((int)puVar6 + 0x44) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar1 = ABS(*(float *)(puVar6 + 8));
    if (*(float *)((int)puVar6 + 0x44) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar11 = uVar10 - 0x90;
      lVar13 = uVar10 - 0x38;
      lVar16 = uVar10 - 0x28;
      lVar17 = 2;
      fVar2 = (fVar1 - fVar2) / (fVar1 + fVar2);
      fVar1 = fVar2 * fVar2;
      *(float *)((int)puVar6 + 0x74) = fVar2;
      *(float *)((int)puVar6 + 0x6c) = fVar2;
      *(float *)(puVar6 + 0xe) = fVar2;
      *(float *)(puVar6 + 0xd) = fVar2;
      fVar2 = fVar1 * fVar1;
      *(float *)((int)puVar6 + 0x6c) = *(float *)((int)puVar6 + 0x6c) * fVar1;
      *(float *)(puVar6 + 0xe) = *(float *)(puVar6 + 0xe) * fVar2;
      *(float *)((int)puVar6 + 0x74) = *(float *)((int)puVar6 + 0x74) * fVar2 * fVar1;
      do {
        *(float *)((int)lVar11 + 0x68) = *(float *)((int)lVar11 + 0x58) * fVar2 * fVar2;
        iVar5 = (int)lVar13;
        lVar11 = lVar11 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x38;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar13 = lVar16;
      do {
        fVar2 = *pfVar14;
        fVar1 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0x68) = *(float *)((int)lVar11 + 0x68) * fVar2;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar1;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      do {
        iVar5 = (int)lVar12;
        iVar8 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar5 + 0x68)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar4);
    }
  }
  return dVar21;
}


// 0x0301800 (0x464 bytes)
// inlined: FastAtan2 @0x3019b8
void M233_00301800(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  float *pfVar13;
  int iVar14;
  longlong lVar12;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x18] = unaff_r31;
  puVar9[0x17] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar19 = ZEXT48(pvVar7);
  dVar24 = 0.0;
  puVar9[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  pfVar13 = (float *)MB_damage(param_1,0x330000,0);
  iVar14 = MB_HandleDamage
                     (param_1,pfVar13,uVar19 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '@' && param_1->state != '\a')) {
    fVar2 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar2;
    if ((iVar14 == 1) || ((double)fVar2 <= dVar24)) {
      param_1->state = '\a';
    }
    else if (iVar14 != 0xb) {
      *(undefined1 *)((int)pvVar7 + 0x67) = 0xb4;
      MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
      fVar2 = (param_1->rotation).z;
      if ((pfVar13[7] == 5627.925) && (param_1->state != '\x06')) {
        fVar6 = (param_1->pos).x - *pfVar13;
        fVar3 = (param_1->pos).y - pfVar13[1];
        dVar23 = ABS((double)fVar6);
        dVar22 = ABS((double)fVar3);
        *(float *)(puVar9 + 0xf) = fVar6;
        *(float *)((int)puVar9 + 0x7c) = fVar3;
        *(float *)(puVar9 + 0x10) = (float)(dVar23 - dVar22);
        uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1d) & 4;
        dVar21 = ABS((double)*(float *)(puVar9 + 0xf));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar21 = dVar22;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar22 = dVar23;
        }
        fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        if (dVar24 < dVar21) {
          lVar18 = uVar11 - 0xc0;
          lVar15 = uVar11 - 0x3c;
          lVar17 = uVar11 - 0x4c;
          lVar20 = 2;
          fVar4 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x12) = fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          *(float *)((int)puVar9 + 0x8c) = fVar4;
          *(float *)((int)puVar9 + 0x84) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar4 * fVar4;
            iVar14 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar18 = uVar11 - 0x4c;
          lVar20 = 4;
          pfVar13 = (float *)&DAT_007358e0;
          lVar15 = lVar18;
          lVar17 = lVar12;
          do {
            fVar4 = *pfVar13;
            fVar5 = pfVar13[1];
            pfVar13 = pfVar13 + 2;
            *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x84) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar15 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar10 = (int)lVar18;
            lVar12 = lVar12 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x84)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar3);
        }
        dVar21 = (double)FastDiffRots(dVar24,(double)fVar2);
        fVar2 = (float)(dVar21 + 1.570796251296997);
        dVar24 = (double)(float)(3.141592502593994 - dVar21);
        if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
          dVar24 = dVar21;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        dVar22 = (double)(float)(-3.141592502593994 - dVar21);
        if ((double)(float)(-3.141592502593994 - dVar21) - dVar24 < 0.0) {
          dVar22 = dVar24;
        }
        dVar24 = (double)(float)(dVar22 * dVar22);
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar5 = fVar3 * fVar3;
        dVar21 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar22));
        dVar23 = (double)(float)(dVar24 * dVar21);
        fVar4 = fVar5 * fVar5 * fVar3;
        fVar6 = fVar5 * fVar4;
        fVar2 = ((float)(dVar24 * dVar23) * 2.601887e-06 +
                (float)(dVar23 * -0.0001980741071747616 +
                       (double)(float)(dVar21 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar24 * dVar22) *
                                                      -0.16666656732559204 + dVar22)))) *
                -0.34906584;
        fVar6 = (fVar5 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 0.08726646;
        if (ABS((param_1->rotation).x) < ABS(fVar2)) {
          (param_1->rotation).x = fVar2;
          *(undefined4 *)((int)pvVar7 + 0x174) = 0;
        }
        if (ABS((param_1->rotation).y) < ABS(fVar6)) {
          (param_1->rotation).y = fVar6;
          *(undefined4 *)((int)pvVar7 + 0x178) = 0;
        }
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        *(float *)((int)pvVar7 + 0x170) = g_FrameTime * 4.0;
        auVar25 = loadVectorLeftIndexed(0x30,0x3017c8);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = vectorSplatHalfWord(auVar25,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar25,0x16a,uVar19);
        *(undefined2 *)((int)pvVar7 + 0x16a) = uVar8;
        uVar1 = param_1->state;
        param_1->state = '\x06';
        param_1->setByGroup = uVar1;
      }
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  return;
}


// 0x0301d00 (0x1af0 bytes)
/* Moby 233 */

void UpdateMoby_233(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  ushort uVar14;
  void *pvVar15;
  Spline *pSVar16;
  vec4 *pvVar17;
  Vec4 *pVVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined2 uVar27;
  int iVar24;
  uint uVar25;
  int iVar26;
  Spline *pSVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  undefined8 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auStack_210;
  GPiece<16> local_200;
  GPiece<16> local_1f0;
  GPiece<16> local_1e0;
  undefined4 local_1d0 [4];
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> auStack_1a0;
  GPiece<16> local_190;
  GPiece<16> auStack_180;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  GPiece<64> auStack_150;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  MobyInstance *local_d0;
  float local_c0;
  undefined4 local_bc [7];
  
  lVar22 = (longlong)(int)moby;
  pvVar15 = moby->pVar;
  uVar29 = ZEXT48(pvVar15);
  dVar45 = (double)(moby->pos).z;
  if (*(int *)((int)pvVar15 + 0x160) == 0) {
    uVar23 = FUN_0025cd18(lVar22);
    *(undefined4 *)((int)pvVar15 + 0x160) = uVar23;
  }
  if (((moby->state != '@' && moby->state != '\0') && (*(int *)((int)pvVar15 + 0x1a4) != 0)) &&
     (g_heroType != '\x02')) {
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    *(undefined1 *)((int)pvVar15 + 0x58) = 0;
    iVar24 = *(int *)((int)pvVar15 + 0x160);
    if (iVar24 != 0) {
      *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
    }
    moby->state = '\x01';
    return;
  }
  M233_00301800(lVar22);
  if ((moby->state == '\x01') || (*(int *)((int)pvVar15 + 0x194) == -1)) {
    if (moby->state == '\x01') {
      uVar23 = *(undefined4 *)((int)pvVar15 + 0x198);
    }
    else {
      uVar23 = *(undefined4 *)((int)pvVar15 + 0x19c);
    }
    *(undefined4 *)((int)pvVar15 + 0x1a0) = uVar23;
    MB_getTarget(lVar22);
  }
  else {
    *(undefined4 *)((int)pvVar15 + 0x1a0) = *(undefined4 *)((int)pvVar15 + 0x19c);
    MB_getTargetInArea
              (lVar22,&local_110,&local_110,0,0,Splines[*(int *)((int)pvVar15 + 0x194)]->points,
               Splines[*(int *)((int)pvVar15 + 0x194)]->cnt);
  }
  dVar35 = (double)(moby->pos).y;
  pvVar17 = &moby->pos;
  uVar32.piece<0,4>() = pvVar17->x;
  uVar32.piece<4,4>() = pvVar17->y;
  fVar2 = (float)(dVar35 - (double)local_10c);
  fVar3 = (float)((double)pvVar17->x - (double)local_110);
  fVar5 = (moby->pos).z;
  bVar1 = *(float *)((int)pvVar15 + 0x1a0) <
          SQRT((fVar5 - local_108) * (fVar5 - local_108) + fVar3 * fVar3 + fVar2 * fVar2);
  if (local_d0 == (MobyInstance *)0x0) {
    local_d0 = g_heroMobyPtr;
  }
  bVar4 = moby->state;
  if ((bVar4 != 0) && (*(char *)((int)pvVar15 + 0x2e) != '\x01')) {
    if (*(MobyInstance **)((int)pvVar15 + 0x160) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar15 + 0x160));
    }
    DeleteMoby(moby);
    return;
  }
  if (bVar4 < 5) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        moby->shadow = ' ';
        (moby->pos).z = fVar5 + 7.5;
        *(float *)((int)pvVar15 + 0x1a8) = fVar5 + 7.5;
        *(undefined4 *)((int)pvVar15 + 0x20) = 0x40400000;
        uVar27 = FastDoubleToInt(0x4008000000000000);
        *(undefined2 *)((int)pvVar15 + 0x24) = uVar27;
        *(undefined1 *)((int)pvVar15 + 0x28) = 2;
        *(undefined4 *)((int)pvVar15 + 0x30) = 0x3f800000;
        *(undefined1 *)((int)pvVar15 + 0x2e) = 1;
        *(undefined1 *)((int)pvVar15 + 0x59) = 1;
        *(undefined1 *)((int)pvVar15 + 0x58) = 0x19;
        *(undefined1 *)((int)pvVar15 + 0x5a) = 6;
        moby->updateDistance = -1;
        iVar24 = *(int *)((int)pvVar15 + 0x1ac);
        moby->drawDistance = 0x80;
        if (iVar24 != -1) {
          pSVar16 = Splines[iVar24];
          if (0 < pSVar16->cnt + -2) {
            iVar24 = 0;
            pSVar28 = pSVar16;
            do {
              fVar2 = pSVar28->points[0].y - pSVar28->points[1].y;
              fVar3 = pSVar28->points[0].x - pSVar28->points[1].x;
              fVar5 = pSVar28->points[0].z - pSVar28->points[1].z;
              iVar24 = iVar24 + 1;
              pSVar28->points[0].w = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
              pSVar28 = (Spline *)pSVar28->points;
            } while (iVar24 < pSVar16->cnt + -2);
          }
          (moby->pos).x = pSVar16->points[0].x;
          (moby->pos).y = pSVar16->points[0].y;
          (moby->pos).z = pSVar16->points[0].z;
          (moby->pos).w = pSVar16->points[0].w;
        }
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar15 + 0x170) = 0;
        *(undefined4 *)((int)pvVar15 + 0x174) = 0;
        *(undefined4 *)((int)pvVar15 + 0x178) = 0;
        *(undefined4 *)((int)pvVar15 + 0x17c) = 0;
        *(undefined4 *)((int)pvVar15 + 0x19c) = 0x42700000;
        AttachManipulator(moby,0,(int)pvVar15 + 0xd0);
        AttachManipulator(moby,1,(int)pvVar15 + 0x110);
        iVar24 = *(int *)((int)pvVar15 + 0x160);
        moby->scale = moby->scale * 0.5;
        if (iVar24 != 0) {
          *(undefined1 *)(iVar24 + 0x30) = 0;
          *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) =
               *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) & 0xffbe;
          *(float *)(*(int *)((int)pvVar15 + 0x160) + 0x2c) =
               *(float *)(*(int *)((int)pvVar15 + 0x160) + 0x2c) * 0.5;
        }
        moby->collision = (ushort *)0x0;
        iVar24 = *(int *)((int)pvVar15 + 0x160);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        *(undefined1 *)((int)pvVar15 + 0x58) = 0;
        if (iVar24 != 0) {
          *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
        }
      }
      else {
        if ((*(int *)((int)pvVar15 + 0x1a4) != 0) && (g_heroType != '\x02')) {
          moby->collision = (ushort *)0x0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          iVar24 = *(int *)((int)pvVar15 + 0x160);
          *(undefined1 *)((int)pvVar15 + 0x58) = 0;
          if (iVar24 == 0) {
            return;
          }
          *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
          return;
        }
        iVar24 = *(int *)((int)pvVar15 + 400);
        if (iVar24 == -1) {
          iVar24 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar15 + 0x1b0));
          if ((iVar24 == 0) || (bVar1)) {
            if ((*(int *)((int)pvVar15 + 0x1b0) == -1) && (!bVar1)) {
              iVar24 = *(int *)((int)pvVar15 + 0x1ac);
              moby->collision = moby->pClass->collision;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
              *(undefined1 *)((int)pvVar15 + 0x58) = 0x19;
              moby->state = ((byte)(ZERO_MASK((-1 - iVar24))) & 1) + 2;
              iVar24 = *(int *)((int)pvVar15 + 0x160);
              if (iVar24 != 0) {
                *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) & 0xffbe;
              }
            }
            goto LAB_00303278;
          }
          iVar24 = *(int *)((int)pvVar15 + 400);
        }
        if ((iVar24 == -1) ||
           (iVar24 = MB_CountActiveMobysByGroup(iVar24,0x40), iVar24 == 0)) {
          iVar24 = *(int *)((int)pvVar15 + 0x1ac);
          moby->collision = moby->pClass->collision;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
          *(undefined1 *)((int)pvVar15 + 0x58) = 0x19;
          moby->state = ((byte)(ZERO_MASK((-1 - iVar24))) & 1) + 2;
          iVar24 = *(int *)((int)pvVar15 + 0x160);
          if (iVar24 != 0) {
            *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) & 0xffbe;
          }
        }
      }
    }
    else if (bVar4 < 3) {
      dVar40 = 0.0;
      pSVar16 = Splines[*(int *)((int)pvVar15 + 0x1ac)];
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar16,lVar22 + 0x10,local_1f0,local_bc,
                 &local_c0);
      dVar35 = (double)FastIntToDouble(local_bc[0]);
      pVVar18 = pSVar16->points + pSVar16->cnt + -1;
      fVar2 = (moby->pos).y - pVVar18->y;
      dVar33 = 10.0;
      fVar3 = (moby->pos).x - pVVar18->x;
      fVar5 = (moby->pos).z - pVVar18->z;
      dVar35 = (double)((float)(dVar35 * (double)pSVar16->points[0].w + (double)local_c0) + 2.0);
      if ((*(float *)((int)pvVar15 + 0x170) * *(float *)((int)pvVar15 + 0x170)) /
          (DAT_0071f418 * 10.0 * 2.0) < SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2)) {
        fVar2 = DAT_0071f418 * 10.0 + *(float *)((int)pvVar15 + 0x170);
        *(float *)((int)pvVar15 + 0x170) = fVar2;
        if (g_FrameTime * 10.0 < fVar2) {
          *(float *)((int)pvVar15 + 0x170) = g_FrameTime * 10.0;
        }
      }
      else {
        dVar44 = -(double)(DAT_0071f418 * 10.0 - *(float *)((int)pvVar15 + 0x170));
        *(float *)((int)pvVar15 + 0x170) = (float)dVar44;
        if (dVar44 < dVar40) {
          *(undefined4 *)((int)pvVar15 + 0x170) = 0;
        }
      }
      uVar25 = FastDoubleToInt((double)(float)(dVar35 / (double)pSVar16->points[0].w));
      dVar44 = (double)FastIntToDouble();
      dVar46 = (double)pSVar16->points[0].w;
      fVar2 = (float)(-(double)(float)(dVar44 * dVar46 - dVar35) / dVar46);
      if (pSVar16->cnt + -1 <= (int)uVar25) {
        uVar25 = pSVar16->cnt - 2;
        fVar2 = 1.0;
      }
      fVar3 = pSVar16->points[uVar25 + 1].x;
      fVar5 = pSVar16->points[uVar25].x;
      fVar6 = pSVar16->points[uVar25 + 1].y;
      fVar7 = pSVar16->points[uVar25].y;
      fVar8 = pSVar16->points[uVar25 + 1].z;
      fVar9 = pSVar16->points[uVar25].z;
      fVar10 = pSVar16->points[uVar25].x;
      fVar11 = pSVar16->points[uVar25].y;
      fVar12 = pSVar16->points[uVar25].z;
      fVar20 = pSVar16->points[pSVar16->cnt + -1].y - (moby->pos).y;
      fVar19 = pSVar16->points[pSVar16->cnt + -1].x - (moby->pos).x;
      if ((SQRT(fVar19 * fVar19 + fVar20 * fVar20) < 1.0) ||
         (iVar24 = PointInsideComplexPoly
                             ((Vec4 *)(lVar22 + 0x10),
                              (Vec4 *)Splines[*(int *)((int)pvVar15 + 0x194)]->points,
                              Splines[*(int *)((int)pvVar15 + 0x194)]->cnt), iVar24 != 0)) {
        if (bVar1) {
          moby->state = '\x04';
        }
        else {
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar15 + 0x168) = 0;
        }
      }
      uVar32 = 0x3fb99999a0000000;
      uVar41 = 0x3fd3333340000000;
      uVar43 = 0x3f847ae140000000;
      if ((int)((ulonglong)uVar25 + 1) < pSVar16->cnt + -8) {
        iVar24 = (int)(((ulonglong)uVar25 + 1 & 0xffffffff) << 4);
        dVar35 = (double)(moby->rotation).z;
        uVar30 = FUN_005e8338((double)(*(float *)((int)&pSVar16->points[0].x + iVar24) -
                                      (moby->pos).x),
                              (double)(*(float *)((int)&pSVar16->points[0].y + iVar24) -
                                      (moby->pos).y));
        dVar35 = (double)MB_DeltAngSpeed(dVar35,uVar30,uVar43,uVar41,uVar32);
      }
      else {
        dVar35 = (double)(moby->rotation).z;
        uVar30 = FUN_005e8338((double)(local_110 - (moby->pos).x),
                              (double)(local_10c - (moby->pos).y));
        dVar35 = (double)MB_DeltAngSpeed(dVar35,uVar30,uVar43,uVar41,uVar32);
      }
      dVar44 = (double)(moby->pos).y;
      fVar6 = (float)((double)((fVar6 - fVar7) * fVar2 + fVar11) - dVar44);
      dVar46 = (double)(moby->pos).x;
      fVar3 = (float)((double)((fVar3 - fVar5) * fVar2 + fVar10) - dVar46);
      dVar39 = (double)(moby->pos).z;
      fVar2 = (float)((double)((fVar8 - fVar9) * fVar2 + fVar12) - dVar39);
      (moby->rotation).z = (float)dVar35;
      dVar31 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6);
      dVar35 = dVar31;
      if ((double)*(float *)((int)pvVar15 + 0x170) - dVar31 < 0.0) {
        dVar35 = (double)*(float *)((int)pvVar15 + 0x170);
      }
      fVar5 = (float)(dVar35 / dVar31);
      dVar35 = dVar40;
      if (dVar40 - dVar31 < 0.0) {
        dVar35 = (double)(fVar2 * fVar5);
      }
      dVar34 = dVar40;
      if (dVar40 - dVar31 < 0.0) {
        dVar34 = (double)(fVar6 * fVar5);
      }
      dVar42 = dVar40;
      if (dVar40 - dVar31 < 0.0) {
        dVar42 = (double)(fVar3 * fVar5);
      }
      if (dVar31 - dVar40 < 0.0) {
        dVar35 = (double)(fVar2 * fVar5);
      }
      if (dVar31 - dVar40 < 0.0) {
        dVar34 = (double)(fVar6 * fVar5);
      }
      if (dVar31 - dVar40 < 0.0) {
        dVar42 = (double)(fVar3 * fVar5);
      }
      (moby->pos).z = (float)(dVar39 + dVar35);
      (moby->pos).y = (float)(dVar44 + dVar34);
      (moby->pos).x = (float)(dVar46 + dVar42);
      uVar32 = FUN_005e8338();
      dVar40 = (double)FastDiffRots(uVar32,(double)(moby->rotation).z);
      fVar2 = (float)(dVar40 + 1.570796251296997);
      dVar35 = (double)(float)(3.141592502593994 - dVar40);
      if (dVar40 - (double)(float)(3.141592502593994 - dVar40) < 0.0) {
        dVar35 = dVar40;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      dVar44 = (double)(float)(-3.141592502593994 - dVar40);
      if ((double)(float)(-3.141592502593994 - dVar40) - dVar35 < 0.0) {
        dVar44 = dVar35;
      }
      dVar35 = (double)(float)(dVar44 * dVar44);
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar5 = fVar3;
      }
      fVar2 = (float)((double)g_FrameTime * dVar33);
      fVar7 = fVar5 * fVar5;
      dVar33 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar44));
      dVar40 = (double)(float)(dVar35 * dVar33);
      fVar6 = fVar7 * fVar7 * fVar5;
      fVar3 = fVar7 * fVar6;
      dVar40 = (double)((*(float *)((int)pvVar15 + 0x170) * -0.34906584 *
                        ((float)(dVar35 * dVar40) * 2.601887e-06 +
                        (float)(dVar40 * -0.0001980741071747616 +
                               (double)(float)(dVar33 * 0.008333025500178337 +
                                              (double)(float)((double)(float)(dVar35 * dVar44) *
                                                              -0.16666656732559204 + dVar44))))) /
                       fVar2);
      dVar33 = 1.0471975803375244;
      dVar35 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,
                                  (double)((*(float *)((int)pvVar15 + 0x170) * 0.34906584 *
                                           (fVar7 * fVar3 * 2.601887e-06 +
                                           fVar3 * -0.0001980741 +
                                           fVar6 * 0.0083330255 +
                                           fVar7 * fVar5 * -0.16666657 + fVar5)) / fVar2),
                                  (double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(float)((double)g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar35;
      dVar35 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar40,
                                  (double)(float)((double)DAT_0071f418 * dVar33),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar35;
    }
    else if (bVar4 < 4) {
      dVar33 = (double)(local_d0->pos).x;
      dVar40 = (double)(local_d0->pos).y;
      fVar2 = (local_d0->pos).w;
      pSVar16 = Splines[*(int *)((int)pvVar15 + 0x194)];
      iVar24 = pSVar16->cnt;
      if (0 < iVar24) {
        iVar26 = 0;
        pSVar28 = pSVar16;
        do {
          dVar46 = (double)pSVar28->points[0].y;
          dVar44 = (double)pSVar28->points[0].x;
          fVar3 = (float)(dVar46 - dVar35);
          fVar5 = (float)(dVar44 - (double)pvVar17->x);
          if (SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 9999.999) {
            fVar2 = pSVar28->points[0].w;
            dVar33 = dVar44;
            dVar40 = dVar46;
          }
          iVar26 = iVar26 + 1;
          pSVar28 = (Spline *)pSVar28->points;
        } while (iVar26 < iVar24);
      }
      uVar41.piece<0,4>() = (local_d0->pos).x;
      uVar41.piece<4,4>() = (local_d0->pos).y;
      uVar43.piece<0,4>() = (local_d0->pos).z;
      uVar43.piece<4,4>() = (local_d0->pos).w;
      M233_00300950
                (lVar22,iVar24,CONCAT44((float)dVar33,(float)dVar40),
                 CONCAT44((local_d0->pos).z + 7.5,fVar2),uVar41,uVar43);
      fVar2 = (float)(dVar40 - (double)(moby->pos).y);
      fVar3 = (float)(dVar33 - (double)(moby->pos).x);
      if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 1.0) ||
         (iVar24 = PointInsideComplexPoly
                             ((Vec4 *)&moby->pos,(Vec4 *)pSVar16->points,pSVar16->cnt), iVar24 != 0)
         ) {
        if (bVar1) {
          moby->state = '\x04';
        }
        else {
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar15 + 0x168) = 0;
        }
      }
    }
    else {
      uVar30.piece<0,4>() = (local_d0->pos).x;
      uVar30.piece<4,4>() = (local_d0->pos).y;
      uVar21.piece<0,4>() = (local_d0->pos).z;
      uVar21.piece<4,4>() = (local_d0->pos).w;
      pSVar16 = Splines[*(int *)((int)pvVar15 + 0x194)];
      M233_00300950
                (lVar22,Splines,uVar32,CONCAT44(fVar5,(moby->pos).w),uVar30,uVar21);
      if (!bVar1) {
        iVar24 = PointInsideComplexPoly
                           ((Vec4 *)&moby->pos,(Vec4 *)pSVar16->points,pSVar16->cnt);
        if (iVar24 == 0) {
          moby->state = '\x03';
        }
        else {
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar15 + 0x168) = 0;
        }
      }
    }
  }
  else if (bVar4 < 8) {
    if (bVar4 < 6) {
      GetBonePosition(lVar22,0,local_1d0);
      if (bVar1) {
        M233_00300950(lVar22);
        moby->state = '\x04';
      }
      else {
        M233_003010d0
                  (lVar22,local_1e0,CONCAT44(local_110,local_10c),CONCAT44(local_108,local_104),
                   CONCAT44(uStack_100,uStack_fc),CONCAT44(uStack_f8,uStack_f4),
                   CONCAT44(uStack_f0,uStack_ec),CONCAT44(uStack_e8,uStack_e4));
        M233_00300950(lVar22);
        iVar24 = FastDecTimerS16(uVar29 + 0x168);
        if ((iVar24 != 0) && (*(int *)((int)pvVar15 + 0x164) == 0)) {
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x6c,0x301c64);
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar27 = storeVectorElementHalfWordIndexed(auVar47,0x168,uVar29);
          *(undefined2 *)((int)pvVar15 + 0x168) = uVar27;
          uVar23 = FUN_00486008(local_1c0,local_1d0,lVar22,(int)(animationSpeed * 240.5));
          *(undefined4 *)((int)pvVar15 + 0x164) = uVar23;
        }
      }
    }
    else {
      if (6 < bVar4) {
        uVar32 = 0;
        dVar45 = (double)MB_randRot();
        GetBonePosition(lVar22,4,auStack_1a0);
        iVar24 = 0;
        dVar35 = 1.5707963705062866;
        do {
          dVar45 = (double)FastWrapRot((float)dVar45,(float)dVar35);
          FastVecAddSelf(auStack_180,local_190,auStack_1a0);
          iVar24 = iVar24 + 1;
        } while (iVar24 < 4);
        GetBonePosition(lVar22,5,local_190);
        if (*(int *)((int)pvVar15 + 0x160) != 0) {
          FUN_0025ce40(lVar22,*(int *)((int)pvVar15 + 0x160));
          *(undefined4 *)((int)pvVar15 + 0x160) = 0;
        }
        MB_genericExplosion
                  (uVar32,uVar32,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
                   0x4008000000000000,0x402e000000000000,lVar22,local_1b0,lVar22 + 0x10,
                   &DAT_00301c64,2,0x14,3,4);
        MB_SpawnBoltsFromCrate(lVar22,0x200,0xffffffffffffffff);
        DetachManipulator(moby,(int)pvVar15 + 0xd0);
        DetachManipulator(moby,(int)pvVar15 + 0x110);
        moby->state = '@';
        return;
      }
      iVar24 = FastDecTimerS16(uVar29 + 0x16a);
      if (iVar24 == 0) {
        fVar2 = -(DAT_0071f418 * 4.0 - *(float *)((int)pvVar15 + 0x170));
        *(float *)((int)pvVar15 + 0x170) = fVar2;
        if (fVar2 < 0.0) {
          *(undefined4 *)((int)pvVar15 + 0x170) = 0;
          fVar2 = 0.0;
        }
        fVar3 = (moby->rotation).z;
        dVar31 = 1.570796251296997;
        dVar39 = 3.141592502593994;
        fVar6 = fVar3 + 1.5707963;
        dVar46 = -3.141592502593994;
        dVar44 = -0.16666656732559204;
        dVar40 = 0.008333025500178337;
        dVar33 = -0.0001980741071747616;
        dVar35 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar7 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar7 = fVar6;
        }
        fVar8 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        fVar3 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar7 < 0.0) {
          fVar3 = fVar7;
        }
        fVar7 = fVar8 * fVar8;
        fVar11 = fVar3 * fVar3;
        fVar5 = fVar7 * fVar7 * fVar8;
        fVar9 = fVar11 * fVar11 * fVar3;
        fVar6 = fVar7 * fVar5;
        fVar10 = fVar11 * fVar9;
        (moby->pos).y =
             (moby->pos).y +
             -((fVar7 * fVar6 * 2.601887e-06 +
               fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar8 * -0.16666657 + fVar8) *
              fVar2);
        (moby->pos).x =
             (moby->pos).x +
             -((fVar11 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar11 * fVar3 * -0.16666657 + fVar3)
              * fVar2);
        uVar32 = FUN_005e8338();
        dVar34 = (double)FastDiffRots(uVar32,(double)(moby->rotation).z);
        dVar42 = (double)(float)(dVar34 + dVar31);
        dVar31 = (double)(float)(dVar39 - dVar34);
        if (dVar34 - (double)(float)(dVar39 - dVar34) < 0.0) {
          dVar31 = dVar34;
        }
        dVar36 = (double)(float)(dVar39 - dVar42);
        if (dVar42 - (double)(float)(dVar39 - dVar42) < 0.0) {
          dVar36 = dVar42;
        }
        dVar39 = (double)(float)(dVar46 - dVar34);
        if ((double)(float)(dVar46 - dVar34) - dVar31 < 0.0) {
          dVar39 = dVar31;
        }
        dVar34 = (double)(float)(dVar39 * dVar39);
        dVar31 = (double)(float)(dVar46 - dVar42);
        if ((double)(float)(dVar46 - dVar42) - dVar36 < 0.0) {
          dVar31 = dVar36;
        }
        dVar42 = (double)(float)(dVar31 * dVar31);
        dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar39));
        dVar38 = (double)(float)(dVar34 * dVar36);
        dVar37 = (double)(float)(dVar42 * (double)(float)(dVar42 * dVar31));
        dVar46 = (double)(float)(dVar42 * dVar37);
        dVar34 = (double)((*(float *)((int)pvVar15 + 0x170) * -0.34906584 *
                          (float)((double)(float)(dVar34 * dVar38) * dVar35 +
                                 (double)(float)(dVar38 * dVar33 +
                                                (double)(float)(dVar36 * dVar40 +
                                                               (double)(float)((double)(float)(
                                                  dVar34 * dVar39) * dVar44 + dVar39))))) /
                         (g_FrameTime * 10.0));
        dVar39 = 1.0471975803375244;
        dVar35 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,
                                    (double)((*(float *)((int)pvVar15 + 0x170) * 0.34906584 *
                                             (float)((double)(float)(dVar42 * dVar46) * dVar35 +
                                                    (double)(float)(dVar46 * dVar33 +
                                                                   (double)(float)(dVar37 * dVar40 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar42 * dVar31) * dVar44 + dVar31)
                                                  )))) / (g_FrameTime * 10.0)),
                                    (double)(DAT_0071f418 * 0.5235988),
                                    (double)(DAT_0071f418 * 1.0471976),
                                    (double)(g_FrameTime * 0.7853982));
        (moby->rotation).y = (float)dVar35;
        dVar35 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).x,dVar34,
                                    (double)(float)((double)DAT_0071f418 * dVar39),
                                    (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                    (double)(g_FrameTime * 1.5707964));
        (moby->rotation).x = (float)dVar35;
      }
      else {
        moby->state = moby->setByGroup;
      }
    }
  }
  else if (bVar4 == 0x40) {
    moby->collision = (ushort *)0x0;
    iVar24 = *(int *)((int)pvVar15 + 0x160);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    *(undefined1 *)((int)pvVar15 + 0x58) = 0;
    if (iVar24 != 0) {
      *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
    }
    uVar13 = moby->uid;
    (&DAT_00a53964)[(short)uVar13] = 0;
    iVar26 = (int)((longlong)((int)(short)uVar13 >> 5) << 2);
    (&DAT_00a545c4)[(short)uVar13] = 0;
    uVar14 = moby->uid;
    iVar24 = (int)((longlong)((int)(short)uVar14 >> 5) << 2);
    uVar25 = *(uint *)(&DAT_00a54dd0 + iVar24);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar26) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar26) & ~(1 << (uVar13 & 0x1f));
    bVar1 = g_heroType == '\x02';
    *(uint *)(&DAT_00a54dd0 + iVar24) = uVar25 & ~(1 << (uVar14 & 0x1f));
    if (bVar1) {
      return;
    }
    fVar2 = moby->scale;
    (moby->pos).z = *(float *)((int)pvVar15 + 0x1a8) - 7.5;
    moby->state = '\0';
    moby->scale = fVar2 * 2.0;
    return;
  }
LAB_00303278:
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 40.0)) {
    MB_SetZBoundsFromGround(lVar22);
  }
  if (moby->state != '\x01') {
    dVar35 = (double)(moby->pos).z;
    dVar33 = (double)g_FrameTime;
    if ((float)(dVar33 * 10.0) < ABS((float)(dVar35 - dVar45))) {
      fVar2 = -(float)(dVar33 * 10.0 - dVar45);
      if (dVar45 - dVar35 < 0.0) {
        fVar2 = (float)(dVar33 * 10.0 + dVar45);
      }
      (moby->pos).z = fVar2;
    }
  }
  dVar46 = 1.570796251296997;
  dVar44 = 3.141592502593994;
  fVar2 = *(float *)((int)pvVar15 + 0x16c) + 1.5707963;
  dVar40 = -3.141592502593994;
  dVar33 = -0.16666656732559204;
  dVar35 = 0.008333025500178337;
  dVar45 = -0.0001980741071747616;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  dVar39 = 2.601886990305502e-06;
  fVar5 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar5 = fVar3;
  }
  fVar6 = fVar5 * fVar5;
  fVar2 = fVar6 * fVar6 * fVar5;
  fVar3 = fVar6 * fVar2;
  (moby->pos).z =
       -(DAT_007ff300 *
         (fVar6 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) -
        (moby->pos).z);
  dVar42 = 6.2831854820251465;
  dVar31 = (double)FastWrapRot
                             (*(float *)((int)pvVar15 + 0x16c),
                              6.2831855 / (animationSpeed * DAT_007ff2fc * 60.0));
  dVar34 = (double)(float)(dVar31 + dVar46);
  *(float *)((int)pvVar15 + 0x16c) = (float)dVar31;
  dVar46 = (double)(float)(dVar44 - dVar34);
  if (dVar34 - (double)(float)(dVar44 - dVar34) < 0.0) {
    dVar46 = dVar34;
  }
  dVar44 = (double)(float)(dVar40 - dVar34);
  if ((double)(float)(dVar40 - dVar34) - dVar46 < 0.0) {
    dVar44 = dVar46;
  }
  iVar24 = *(int *)((int)pvVar15 + 0x160);
  dVar40 = (double)(float)(dVar44 * dVar44);
  dVar31 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar44));
  dVar46 = (double)(float)(dVar40 * dVar31);
  (moby->pos).z =
       DAT_007ff300 *
       (float)((double)(float)(dVar40 * dVar46) * dVar39 +
              (double)(float)(dVar46 * dVar45 +
                             (double)(float)(dVar31 * dVar35 +
                                            (double)(float)((double)(float)(dVar40 * dVar44) *
                                                            dVar33 + dVar44)))) + (moby->pos).z;
  if (iVar24 != 0) {
    *(f32 *)(iVar24 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar24 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar24 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (moby->pos).w;
    iVar24 = *(int *)((int)pvVar15 + 0x160);
    *(f32 *)(iVar24 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (moby->rotation).w;
    UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar15 + 0x160));
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar15 + 0x160));
    *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) | 6;
  }
  iVar24 = *(int *)((int)pvVar15 + 0x164);
  dVar45 = 3.1415927410125732;
  dVar35 = 12.566370964050293;
  if ((((iVar24 == 0) || (*(short *)(iVar24 + 0xa6) != 0x350)) || (*(char *)(iVar24 + 0x20) == -2))
     || (*(char *)(iVar24 + 0x20) == -3)) {
    GetBonePosition(lVar22,0,auStack_210);
    FastVecSub(&local_170,&local_110,auStack_210);
    FastNormalizeRMtx4(auStack_150,lVar22 + 0xc0);
    FUN_005e825c(local_200,local_200,auStack_150);
    dVar33 = (double)*(float *)((int)pvVar15 + 0x180);
    uVar32 = FUN_005e8338((double)local_170,(double)local_16c);
    dVar35 = (double)MB_DeltAngSpeed
                               (dVar33,uVar32,(double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(float)((double)DAT_0071f418 * dVar35),
                                (double)(float)((double)g_FrameTime * dVar42));
    *(float *)((int)pvVar15 + 0x180) = (float)dVar35;
    dVar33 = (double)*(float *)((int)pvVar15 + 0x188);
    dVar35 = (double)FUN_005e8338((double)SQRT(local_170 * local_170 + local_16c * local_16c),
                                  (double)local_168);
    dVar45 = (double)MB_DeltAngSpeed
                               (dVar33,-dVar35,(double)(float)((double)DAT_0071f418 * dVar45),
                                (double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(g_FrameTime * 1.5707964));
    *(float *)((int)pvVar15 + 0x188) = (float)dVar45;
    FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x180),uVar29 + 0xe0,2);
    FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x188),uVar29 + 0x120,2);
    *(undefined4 *)((int)pvVar15 + 0x164) = 0;
  }
  else {
    GetBonePosition(lVar22,0,auStack_210);
    FastVecSub(&local_160,(ulonglong)*(uint *)((int)pvVar15 + 0x164) + 0x10,auStack_210);
    FastNormalizeRMtx4(auStack_150,lVar22 + 0xc0);
    FUN_005e825c(local_200,local_200,auStack_150);
    dVar33 = (double)*(float *)((int)pvVar15 + 0x180);
    uVar32 = FUN_005e8338((double)local_160,(double)local_15c);
    dVar35 = (double)MB_DeltAngSpeed
                               (dVar33,uVar32,(double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(float)((double)DAT_0071f418 * dVar35),
                                (double)(float)((double)g_FrameTime * dVar42));
    *(float *)((int)pvVar15 + 0x180) = (float)dVar35;
    dVar33 = (double)*(float *)((int)pvVar15 + 0x188);
    dVar35 = (double)FUN_005e8338((double)SQRT(local_160 * local_160 + local_15c * local_15c),
                                  (double)local_158);
    dVar45 = (double)MB_DeltAngSpeed
                               (dVar33,-dVar35,(double)(float)((double)DAT_0071f418 * dVar45),
                                (double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(g_FrameTime * 1.5707964));
    *(float *)((int)pvVar15 + 0x188) = (float)dVar45;
    FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x180),uVar29 + 0xe0,2);
    FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x188),uVar29 + 0x120,2);
  }
  return;
}


