// game/update/moby46.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x391c48-0x392e10
#include "game/update/moby46.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby410.h"
#include "idol/fastfunc.h"

// 0x0391c48 (0x420 bytes)
// inlined: FastAtan2 @0x391d78
void M46_00391c48(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *unused;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x24] = in_LR;
  puVar9[0x1d] = in_f27;
  puVar9[0x1e] = in_f28;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1b] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar9[0x1a] = unaff_r29;
  fVar2 = *(float *)(param_1 + 0x10);
  iVar14 = *(int *)(iVar6 + 0x100);
  iVar7 = *(int *)(iVar6 + 0x120);
  fVar3 = *(float *)(param_1 + 0x14);
  puVar9[0x1c] = unaff_r31;
  pSVar8 = Splines[iVar14];
  dVar25 = (double)pSVar8->points[iVar7].x;
  dVar24 = (double)pSVar8->points[iVar7].y;
  fVar2 = (float)(dVar25 - (double)fVar2);
  dVar23 = (double)pSVar8->points[iVar7].z;
  fVar3 = (float)(dVar24 - (double)fVar3);
  fVar1 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 0x10) = fVar2;
  *(float *)((int)puVar9 + 0x84) = fVar3;
  *(float *)(puVar9 + 0x11) = fVar1 - fVar5;
  dVar21 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
  unused = (float *)(uVar15 << 2);
  fVar2 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = unused[0x1cd640];
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x84));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar10 = fVar1;
  }
  puVar9[0x19] = unaff_r28;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  dVar19 = dVar21;
  if (0.0 < fVar2) {
    lVar12 = uVar11 - 0x100;
    lVar16 = uVar11 - 0x84;
    lVar17 = uVar11 - 0x74;
    lVar18 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)(puVar9 + 0x12) = fVar2;
    *(float *)((int)puVar9 + 0x94) = fVar2;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar1;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar2;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar2 * fVar1;
    do {
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar2 * fVar2;
      iVar14 = (int)lVar16;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = uVar11 - 0x84;
    unused = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar16 = lVar17;
    do {
      fVar2 = *unused;
      fVar1 = unused[1];
      unused = unused + 2;
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar1;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar14 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar7 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
  }
  OrganicDeltAng
            ((float)dVar19,g_FrameTimeSq * 3.1415927,g_FrameTimeSq * 3.1415927,
             g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x128));
  dVar22 = (double)(DAT_00842294 * g_FrameTime);
  dVar19 = (double)FastSubRots((float)dVar19,*(float *)(param_1 + 0x48));
  if (0.2617993950843811 < dVar19) {
    dVar22 = (double)g_FrameTime;
  }
  Delt((float)dVar22,g_FrameTimeSq,(float *)(iVar6 + 300));
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xc0);
  fVar5 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar19 == dVar21) {
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar21;
    dVar22 = dVar21;
    dVar20 = dVar21;
  }
  else {
    fVar1 = (float)((double)*(float *)(iVar6 + 300) / dVar19);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar20 = (double)(fVar3 * fVar1);
    dVar22 = (double)(fVar2 * fVar1);
    dVar19 = (double)(fVar5 * fVar1);
  }
  *(float *)(puVar9 + 0xe) = (float)dVar20;
  *(float *)((int)puVar9 + 0x74) = (float)dVar22;
  *(float *)(puVar9 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar4;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar21,param_1,uVar11 - 0xa0);
  fVar2 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar3 = (float)((double)*(float *)(param_1 + 0x10) - dVar25);
  fVar5 = (float)((double)*(float *)(param_1 + 0x18) - dVar23);
  if (SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 1.0) {
    iVar14 = MB_randInt(Splines[*(int *)(iVar6 + 0x100)]->cnt + -1);
    iVar14 = *(int *)(iVar6 + 0x120) + iVar14 + 1;
    *(int *)(iVar6 + 0x120) =
         iVar14 - (iVar14 / Splines[*(int *)(iVar6 + 0x100)]->cnt) *
                  Splines[*(int *)(iVar6 + 0x100)]->cnt;
  }
  return;
}


// 0x03920c0 (0x80c bytes)
// inlined: FastAtan2 @0x39247c, FastAtan2 @0x39262c
void M46_003920c0(MobyInstance *param_1)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  undefined4 uVar17;
  int iVar18;
  longlong lVar16;
  float *pfVar20;
  longlong lVar19;
  undefined4 *unused;
  MobyInstance *pMVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
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
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar24 = uVar15 - 400;
  puVar11 = (ulonglong *)lVar24;
  *puVar11 = uVar15;
  puVar11[0x34] = in_LR;
  puVar11[0x2d] = in_f27;
  puVar11[0x2e] = in_f28;
  puVar11[0x2f] = in_f29;
  puVar11[0x30] = in_f30;
  puVar11[0x31] = in_f31;
  puVar11[0x2c] = unaff_r31;
  puVar11[0x2b] = unaff_r30;
  puVar11[0x2a] = unaff_r29;
  puVar11[0x29] = unaff_r28;
  puVar11[0x28] = unaff_r27;
  pvVar10 = param_1->pVar;
  uVar25 = ZEXT48(pvVar10);
  uVar17 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,uVar17,uVar25 + 0x20,0,puVar11 + 0x1c,(int)puVar11 + 0xe4,0,4);
  if ((*(int *)(puVar11 + 0x1c) != 1) && (param_1->state != '\0')) {
    fVar1 = *(float *)((int)pvVar10 + 0x20) - *(float *)((int)puVar11 + 0xe4);
    *(float *)((int)pvVar10 + 0x20) = fVar1;
    if (fVar1 <= 0.0) {
      fVar2 = (param_1->pos).y;
      *(f32 *)(puVar11 + 0x1a) = (param_1->pos).x;
      fVar3 = (param_1->pos).w;
      *(f32 *)((int)puVar11 + 0xd4) = fVar2;
      *(f32 *)((int)puVar11 + 0xdc) = fVar3;
      fVar1 = (param_1->pos).z;
      puVar11[0x12] = 0xffffffffffffffff;
      puVar11[0x14] = 1;
      puVar11[0x15] = 1;
      puVar11[0x16] = 0xffffffffffffffff;
      puVar11[0x17] = 0;
      *(float *)(puVar11 + 0x1b) = fVar1 + 1.0;
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,param_1,uVar25 + 0x40,uVar15 - 0xc0,&DAT_00392068,1,0x14,8,0x14)
      ;
      DeleteMoby(param_1);
      return;
    }
    *(undefined1 *)((int)pvVar10 + 0x67) = 0x78;
    MB_UpdateLightsTransition(param_1,uVar25 + 0x60);
  }
  pMVar21 = (MobyInstance *)0xff;
  param_1->damage = -1;
  dVar33 = 30.0;
  iVar18 = MB_getTarget(0x403e000000000000,param_1,0xff,uVar25 + 0x70);
  pMVar14 = g_heroMobyPtr;
  if (iVar18 != 2) {
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    fVar9 = (param_1->pos).x - g_heroPosition.x;
    pMVar21 = (MobyInstance *)&DAT_00392068;
    dVar27 = (double)SQRT(fVar9 * fVar9 + fVar1 * fVar1);
    if (10.0 <= dVar27) {
      if (dVar33 < dVar27) {
        *(undefined4 *)((int)pvVar10 + 0xb4) = 2;
      }
    }
    else {
      *(MobyInstance **)((int)pvVar10 + 0xb0) = g_heroMobyPtr;
      pMVar21 = g_heroMobyPtr;
      *(f32 *)((int)pvVar10 + 0x70) = (g_heroMobyPtr->pos).x;
      *(f32 *)((int)pvVar10 + 0x74) = (pMVar21->pos).y;
      *(f32 *)((int)pvVar10 + 0x78) = (pMVar21->pos).z;
      *(f32 *)((int)pvVar10 + 0x7c) = (pMVar21->pos).w;
      pMVar21 = pMVar14;
    }
  }
  if (*(int *)((int)pvVar10 + 0xb4) == 2) {
    dVar27 = 12.566370964050293;
    dVar33 = 9.42477798461914;
    OrganicDeltAng
              ((param_1->rotation).z,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x110),(int)pMVar21,
               (float *)((int)pvVar10 + 0x114));
    OrganicDeltAng
              (0.0,(float)((double)g_FrameTimeSq * dVar27),(float)((double)g_FrameTimeSq * dVar27),
               (float)((double)g_FrameTime * dVar33),(float *)((int)pvVar10 + 0x118),
               (int)pMVar21,(float *)((int)pvVar10 + 0x11c));
  }
  else {
    dVar32 = (double)(*(float *)((int)pvVar10 + 0x74) - (param_1->pos).y);
    dVar34 = (double)(*(float *)((int)pvVar10 + 0x70) - (param_1->pos).x);
    dVar31 = (double)((*(float *)((int)pvVar10 + 0x78) - (param_1->pos).z) - 3.0);
    dVar28 = (double)(float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32));
    dVar33 = dVar32;
    dVar27 = dVar34;
    if (*(float *)((int)pvVar10 + 0x130) < SQRT((float)(dVar31 * dVar31 + dVar28))) {
      fVar1 = (float)SQRT(dVar28);
      dVar33 = 0.0;
      dVar27 = dVar33;
      if (fVar1 != 0.0) {
        dVar27 = (double)(*(float *)((int)pvVar10 + 0x130) / fVar1);
        dVar33 = (double)(float)(dVar27 * dVar32);
        dVar27 = (double)(float)(dVar27 * dVar34);
      }
    }
    fVar1 = *(float *)((int)pvVar10 + 0x134);
    fVar9 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar9 = fVar1;
    }
    *(float *)((int)puVar11 + 0xf4) = (float)dVar27;
    *(float *)(puVar11 + 0x1f) = (float)dVar33;
    *(float *)((int)puVar11 + 0xfc) = (float)(ABS(dVar27) - ABS(dVar33));
    dVar28 = 0.0;
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar9 < 0.0) {
      fVar7 = fVar9;
    }
    fVar1 = fVar7 * fVar7;
    uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1d) & 4;
    dVar32 = ABS((double)*(float *)((int)puVar11 + 0xf4));
    if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
      dVar32 = ABS(dVar33);
    }
    fVar8 = fVar1 * fVar1 * fVar7;
    fVar12 = fVar1 * fVar8;
    dVar30 = 0.7853981852531433;
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar34 = ABS((double)*(float *)(puVar11 + 0x1f));
    if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
      dVar34 = ABS(dVar27);
    }
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar29 = dVar28;
    if (0.0 < dVar32) {
      lVar16 = uVar15 - 0x180;
      lVar22 = uVar15 - 0x60;
      lVar19 = uVar15 - 0x70;
      lVar26 = 2;
      fVar5 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 300) = fVar5;
      *(float *)((int)puVar11 + 0x124) = fVar5;
      *(float *)(puVar11 + 0x25) = fVar5;
      *(float *)(puVar11 + 0x24) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar6;
      *(float *)(puVar11 + 0x25) = *(float *)(puVar11 + 0x25) * fVar5;
      *(float *)((int)puVar11 + 300) = *(float *)((int)puVar11 + 300) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x110) * fVar5 * fVar5;
        iVar18 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar22 = uVar15 - 0x70;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x120) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar19 = 2;
      lVar16 = lVar24;
      dVar32 = dVar28;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar22;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0x120)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar29 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar4);
    }
    dVar32 = (double)FastWrapRot
                               ((float)dVar29,
                                (fVar1 * fVar12 * 2.601887e-06 +
                                fVar12 * -0.0001980741 +
                                fVar8 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) *
                                0.08726646);
    *(float *)((int)puVar11 + 0xec) = (float)dVar31;
    fVar1 = SQRT((float)(dVar27 * dVar27 + (double)(float)(dVar33 * dVar33)));
    dVar27 = ABS((double)fVar1);
    *(float *)(puVar11 + 0x1d) = fVar1;
    *(float *)(puVar11 + 0x1e) = (float)(dVar27 - ABS(dVar31));
    uVar23 = (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1d) & 4;
    dVar33 = ABS((double)*(float *)(puVar11 + 0x1d));
    if ((double)*(float *)(puVar11 + 0x1e) - dVar28 < 0.0) {
      dVar33 = ABS(dVar31);
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar11 + 0xec));
    if ((double)*(float *)(puVar11 + 0x1e) - dVar28 < 0.0) {
      dVar31 = dVar27;
    }
    fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    if (dVar28 < dVar33) {
      lVar16 = uVar15 - 0x180;
      lVar22 = uVar15 - 0x80;
      lVar19 = uVar15 - 0x90;
      lVar26 = 2;
      fVar7 = (float)(dVar31 - dVar33) / (float)(dVar31 + dVar33);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar11 + 0x10c) = fVar7;
      *(float *)((int)puVar11 + 0x104) = fVar7;
      *(float *)(puVar11 + 0x21) = fVar7;
      *(float *)(puVar11 + 0x20) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar8;
      *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar7;
      *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar22 = uVar15 - 0x90;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar22;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
        lVar19 = lVar19 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar24;
        iVar13 = (int)lVar22;
        lVar24 = lVar24 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x100)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + dVar30) * fVar1 + fVar9);
    }
    dVar28 = -dVar28;
    dVar33 = 0.3490658402442932;
    if ((dVar28 <= 0.3490658402442932) && (dVar33 = dVar28, dVar28 < -0.7853981852531433)) {
      dVar33 = -0.7853981852531433;
    }
    unused = &DAT_00392068;
    dVar28 = 12.566370964050293;
    dVar27 = 9.42477798461914;
    OrganicDeltAng
              ((float)dVar32,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x110),0x392068,
               (float *)((int)pvVar10 + 0x114));
    OrganicDeltAng
              ((float)dVar33,(float)((double)g_FrameTimeSq * dVar28),
               (float)((double)g_FrameTimeSq * dVar28),
               (float)((double)g_FrameTime * dVar27),(float *)((int)pvVar10 + 0x118),
               (int)unused,(float *)((int)pvVar10 + 0x11c));
  }
  FastQuaternionToEuler((double)*(float *)((int)pvVar10 + 0x118),uVar15 - 0xd0,1);
  lVar24 = uVar25 + 0xd0;
  FastDiffRots((double)*(float *)((int)pvVar10 + 0x110),(double)(param_1->rotation).z);
  FastQuaternionToEuler(lVar24,2);
  FastQuaternionMult(lVar24,uVar15 - 0xd0,lVar24);
  MB_ColorDyingMoby(param_1,uVar25 + 0x60);
  return;
}


// 0x0392910 (0x500 bytes)
/* Moby 46 */

void UpdateMoby_46(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 in_LR;
  double dVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> local_60;
  GPiece<40> auStack_50;
  
  pvVar2 = moby->pVar;
  M46_003920c0();
  bVar1 = moby->state;
  if (bVar1 == 0) {
    AttachManipulator(moby,0,(int)pvVar2 + 0xc0);
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x40c00000;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    *(undefined2 *)((int)pvVar2 + 0x24) = 6;
    *(undefined1 *)((int)pvVar2 + 0x28) = 3;
    fVar4 = animationSpeed;
    auVar8 = loadVectorLeftIndexed(in_LR,0x3928cc);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,
                       ZEXT48(pvVar2));
    *(undefined4 *)((int)pvVar2 + 0x124U & 0xfffffffc) = uVar3;
    *(undefined4 *)((int)pvVar2 + 0x120) = 0;
    if (moby->animationId != '\x01') {
      MB_SetAnimation(moby,1,0,(int)(fVar4 * 10.5));
    }
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    M46_00391c48(moby);
    if (*(int *)((int)pvVar2 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar2 + 0x130) = 0x41200000;
      *(undefined4 *)((int)pvVar2 + 0x134) = 0;
      if (moby->animationId != '\x02') {
        MB_SetAnimation(moby,2,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    M46_00391c48(moby);
    Delt(30.0,g_FrameTime * 6.0,(float *)((int)pvVar2 + 0x130));
    dVar7 = (double)FastWrapRot
                              (*(float *)((int)pvVar2 + 0x134),g_FrameTime * 6.2831855);
    *(float *)((int)pvVar2 + 0x134) = (float)dVar7;
    iVar6 = MB_MayaFrameTrigger(4.0,moby);
    if ((iVar6 != 0) || (iVar6 = MB_MayaFrameTrigger(10.0,moby), iVar6 != 0)) {
      dVar7 = (double)BlendAnimFrame(moby);
      if (7.0 <= dVar7) {
        GetBonePosition(moby,2,auStack_50);
      }
      else {
        GetBonePosition(moby,1,auStack_50);
      }
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= 10.0) {
        FUN_00366190(moby,auStack_50,local_60,1);
      }
      else {
        FUN_00366190(moby,auStack_50,local_60,0);
      }
    }
    if (*(int *)((int)pvVar2 + 0xb4) == 2) {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x01';
    }
  }
  return;
}


