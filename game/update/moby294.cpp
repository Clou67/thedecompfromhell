// game/update/moby294.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x331540-0x334a8c
#include <math.h>
#include <stdlib.h>
#include "game/update/moby294.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update/moby1381.h"
#include "game/update/moby184.h"
#include "game/update/moby499.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0331540 (0x14 bytes)
void M294_00331540(void)

{
  DAT_0081086c = 0x10000;
  return;
}


// 0x0331560 (0x38 bytes)
void M294_00331560(void)

{
  MB_SpawnExplosionSparks2(0x3ff0000000000000,0x4024000000000000);
  return;
}


// 0x0331598 (0xd8 bytes)
void M294_00331598(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort uVar4;
  undefined4 uVar3;
  GPiece<16> local_20;
  
  pvVar1 = param_1->pVar;
  if (*(MobyInstance **)((int)pvVar1 + 0x248) == (MobyInstance *)0x0) {
    GetBonePosition(param_1,1,local_20);
    uVar3 = FUN_003a38c8(param_1);
    *(undefined4 *)((int)pvVar1 + 0x248) = uVar3;
  }
  else {
    MB_AttachMobyToJoint(param_1,*(MobyInstance **)((int)pvVar1 + 0x248),1);
    if ((param_1->modeBits & DISABLED) == NONE) {
      iVar2 = *(int *)((int)pvVar1 + 0x248);
      uVar4 = *(ushort *)(iVar2 + 0x34) & 0xffbe;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x248);
      uVar4 = *(ushort *)(iVar2 + 0x34) | 0x41;
    }
    *(ushort *)(iVar2 + 0x34) = uVar4;
  }
  return;
}


// 0x0331670 (0x64 bytes)
void M294_00331670(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  param_1->field76_0xb4 = '\0';
  param_1->field77_0xb5 = '\0';
  MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  moby = *(MobyInstance **)((int)param_1->pVar + 0x248);
  if (moby != (MobyInstance *)0x0) {
    DeleteMoby(moby);
  }
  DeleteMoby(param_1);
  return;
}


// 0x0331708 (0xb20 bytes)
// inlined: FastAtan2 @0x331820, FastAtan2 @0x331a50, FastAtan2 @0x331c50, FastAtan2 @0x331e88
double M294_00331708(double param_1,double param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double extraout_f1;
  double dVar23;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  float fVar29;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 400;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar11;
  puVar7[0x34] = in_LR;
  puVar7[0x2d] = in_f27;
  puVar7[0x2e] = in_f28;
  puVar7[0x2f] = in_f29;
  puVar7[0x30] = in_f30;
  puVar7[0x31] = in_f31;
  puVar7[0x2a] = unaff_r29;
  puVar7[0x2c] = unaff_r31;
  iVar5 = *(int *)(param_3 + 0x78);
  puVar7[0x2b] = unaff_r30;
  dVar26 = 0.7853981852531433;
  if (*(char *)(iVar5 + 0x242) == '\0') {
    fVar29 = *(float *)(param_3 + 0x14);
    fVar2 = param_4[1];
    fVar1 = *(float *)(param_3 + 0x10);
    fVar3 = *param_4;
    dVar24 = (double)SQRT((fVar1 - fVar3) * (fVar1 - fVar3) + (fVar29 - fVar2) * (fVar29 - fVar2));
    if ((dVar24 <= 6.5) || (fVar4 = 0.0, param_1 == 0.0)) {
      fVar9 = ABS(fVar3 - fVar1);
      fVar4 = ABS(fVar2 - fVar29);
      *(float *)((int)puVar7 + 0x9c) = fVar3 - fVar1;
      *(float *)(puVar7 + 0x14) = fVar2 - fVar29;
      *(float *)((int)puVar7 + 0xa4) = fVar9 - fVar4;
      fVar29 = 0.0;
      uVar13 = (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x14) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar7 + 0x9c));
      if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar1 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar4 = ABS(*(float *)(puVar7 + 0x14));
      if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
        fVar4 = fVar9;
      }
      if (0.0 < fVar2) {
        lVar14 = uVar11 - 0x180;
        lVar17 = uVar11 - 0xb0;
        lVar19 = uVar11 - 0xa0;
        lVar20 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0xec) = fVar2;
        *(float *)((int)puVar7 + 0xe4) = fVar2;
        *(float *)(puVar7 + 0x1d) = fVar2;
        *(float *)(puVar7 + 0x1c) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar7 + 0xe4) = *(float *)((int)puVar7 + 0xe4) * fVar4;
        *(float *)(puVar7 + 0x1d) = *(float *)(puVar7 + 0x1d) * fVar2;
        *(float *)((int)puVar7 + 0xec) = *(float *)((int)puVar7 + 0xec) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xd0) * fVar2 * fVar2;
          iVar12 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xb0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xe0) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar14 = lVar15;
        do {
          iVar12 = (int)lVar14;
          iVar8 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          fVar29 = fVar29 + *(float *)(iVar12 + 0xe0) + *(float *)(iVar8 + 4) +
                   *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar29 = (fVar29 + 0.7853982) * fVar3 + fVar1;
      }
      OrganicDeltAng
                (fVar29,g_FrameTimeSq * 15.707963,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 25.132742,(float *)(param_3 + 0x48),0x3316d4,
                 (float *)(iVar5 + 0x23c));
    }
    else {
      fVar10 = ABS(fVar3 - fVar1);
      fVar9 = ABS(fVar2 - fVar29);
      *(float *)(puVar7 + 0x15) = fVar3 - fVar1;
      *(float *)((int)puVar7 + 0xac) = fVar2 - fVar29;
      *(float *)(puVar7 + 0x16) = fVar10 - fVar9;
      uVar13 = (ulonglong)(*(uint *)(puVar7 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xac) >> 0x1d) & 4;
      fVar29 = ABS(*(float *)(puVar7 + 0x15));
      if (*(float *)(puVar7 + 0x16) - 0.0 < 0.0) {
        fVar29 = fVar9;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar1 = ABS(*(float *)((int)puVar7 + 0xac));
      if (*(float *)(puVar7 + 0x16) - 0.0 < 0.0) {
        fVar1 = fVar10;
      }
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      if (0.0 < fVar29) {
        lVar14 = uVar11 - 0x180;
        lVar17 = uVar11 - 0x90;
        lVar19 = uVar11 - 0x80;
        lVar20 = 2;
        fVar29 = (fVar1 - fVar29) / (fVar1 + fVar29);
        fVar1 = fVar29 * fVar29;
        *(float *)((int)puVar7 + 0x10c) = fVar29;
        *(float *)((int)puVar7 + 0x104) = fVar29;
        *(float *)(puVar7 + 0x21) = fVar29;
        *(float *)(puVar7 + 0x20) = fVar29;
        fVar29 = fVar1 * fVar1;
        *(float *)((int)puVar7 + 0x104) = *(float *)((int)puVar7 + 0x104) * fVar1;
        *(float *)(puVar7 + 0x21) = *(float *)(puVar7 + 0x21) * fVar29;
        *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar29 * fVar1;
        do {
          *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0xf0) * fVar29 * fVar29;
          iVar12 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar29 * fVar29;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0x90;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar19;
        do {
          fVar29 = *pfVar18;
          fVar1 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0x100) * fVar29;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar1;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar14 = lVar15;
        do {
          iVar12 = (int)lVar14;
          iVar8 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar12 + 0x100) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8)
                  + *(float *)(iVar8 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar2 + fVar3;
      }
      dVar21 = (double)FastWrapRot(fVar4,(float)param_1);
      OrganicDeltAng
                ((float)dVar21,g_FrameTimeSq * 15.707963,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 25.132742,(float *)(param_3 + 0x48),0x3316d4,
                 (float *)(iVar5 + 0x23c));
    }
    dVar21 = 0.0;
    if (param_2 == 0.0) {
      fVar29 = *param_4 - *(float *)(param_3 + 0x10);
      fVar2 = param_4[1] - *(float *)(param_3 + 0x14);
      fVar3 = ABS(fVar29);
      fVar1 = ABS(fVar2);
      *(float *)(puVar7 + 0x12) = fVar29;
      *(float *)((int)puVar7 + 0x94) = fVar2;
      fVar29 = *(float *)(param_3 + 0x48);
      *(float *)(puVar7 + 0x13) = fVar3 - fVar1;
      uVar13 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar7 + 0x12));
      if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar4 = ABS(*(float *)((int)puVar7 + 0x94));
      if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      dVar25 = dVar21;
      if (0.0 < fVar2) {
        lVar14 = uVar11 - 0x180;
        lVar17 = uVar11 - 0xd0;
        lVar19 = uVar11 - 0xc0;
        lVar20 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0xcc) = fVar2;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar2;
        *(float *)(puVar7 + 0x18) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar4;
        *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar2;
        *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xb0) * fVar2 * fVar2;
          iVar12 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xd0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xc0) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar14 = 2;
        do {
          iVar12 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar8 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar12 + 0xc0)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar1 + fVar3);
      }
      dVar26 = (double)FastSubRots(fVar29,(float)dVar25);
      if ((1.5707963705062866 <= dVar26) || (dVar24 <= 6.0)) {
        fVar29 = Delt(g_FrameTime,g_FrameTimeSq * 7.0,(float *)(iVar5 + 0xf4));
        dVar26 = (double)fVar29;
      }
      else {
        fVar29 = Delt(g_FrameTime * 7.0,g_FrameTimeSq * 7.0,
                                (float *)(iVar5 + 0xf4));
        dVar26 = (double)fVar29;
      }
    }
    else {
      fVar29 = Delt((float)param_2,g_FrameTimeSq * 7.0,(float *)(iVar5 + 0xf4));
      dVar26 = (double)fVar29;
    }
    dVar28 = (double)*(float *)(param_3 + 0x10);
    dVar27 = (double)*(float *)(param_3 + 0x14);
    dVar25 = (double)*(float *)(param_3 + 0x18);
    dVar24 = (double)*(float *)(param_3 + 0x1c);
    dVar26 = (double)MB_MoveForward100(dVar26,param_3,iVar5 + 0xd0);
    if (*(int *)(iVar5 + 0x26c) != -1) {
      fVar2 = (float)(dVar27 - (double)*(float *)(param_3 + 0x14));
      fVar1 = (float)(dVar28 - (double)*(float *)(param_3 + 0x10));
      fVar3 = (float)(dVar25 - (double)*(float *)(param_3 + 0x18));
      *(float *)((int)puVar7 + 0x8c) = (float)dVar24;
      uVar6 = *(undefined4 *)(iVar5 + 0x26c);
      dVar24 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      fVar29 = (float)(0.05000000074505806 / dVar24);
      dVar26 = dVar21;
      if (dVar21 - dVar24 < 0.0) {
        dVar26 = (double)(fVar29 * fVar3);
      }
      dVar22 = dVar21;
      if (dVar21 - dVar24 < 0.0) {
        dVar22 = (double)(fVar29 * fVar2);
      }
      dVar23 = dVar21;
      if (dVar21 - dVar24 < 0.0) {
        dVar23 = (double)(fVar29 * fVar1);
      }
      if (dVar24 - dVar21 < 0.0) {
        dVar26 = (double)(fVar29 * fVar3);
      }
      if (dVar24 - dVar21 < 0.0) {
        dVar22 = (double)(fVar29 * fVar2);
      }
      if (dVar24 - dVar21 < 0.0) {
        dVar23 = (double)(fVar29 * fVar1);
      }
      *(float *)(puVar7 + 0x11) = (float)(dVar25 + dVar26);
      *(float *)((int)puVar7 + 0x84) = (float)(dVar27 + dVar22);
      *(float *)(puVar7 + 0x10) = (float)(dVar28 + dVar23);
      iVar12 = MB_SplineIntersect
                         (uVar6,(Vec4 *)(param_3 + 0x10),uVar11 - 0x110,uVar11 - 0x120);
      dVar26 = extraout_f1;
      if (iVar12 != 0) {
        iVar12 = PointInsideComplexPoly
                           ((Vec4 *)(param_3 + 0x10),
                            (Vec4 *)Splines[*(int *)(iVar5 + 0x26c)]->points,
                            Splines[*(int *)(iVar5 + 0x26c)]->cnt);
        fVar2 = *(float *)(param_3 + 0x10);
        fVar29 = *(float *)(param_3 + 0x14);
        fVar1 = *(float *)(param_3 + 0x18);
        if (iVar12 == 0) {
          fVar2 = *(float *)(puVar7 + 0xe);
          *(float *)(param_3 + 0x10) = fVar2;
          fVar29 = *(float *)((int)puVar7 + 0x74);
          *(float *)(param_3 + 0x14) = fVar29;
          fVar1 = *(float *)(puVar7 + 0xf);
          *(float *)(param_3 + 0x18) = fVar1;
          *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)((int)puVar7 + 0x7c);
        }
        dVar26 = (double)SQRT((float)((double)fVar1 - dVar25) * (float)((double)fVar1 - dVar25) +
                              (float)((double)fVar2 - dVar28) * (float)((double)fVar2 - dVar28) +
                              (float)((double)fVar29 - dVar27) * (float)((double)fVar29 - dVar27));
        if ((double)(g_FrameTime * 0.5) <= dVar26) {
          *(undefined1 *)(iVar5 + 0x243) = 0;
        }
        else {
          bVar16 = *(char *)(iVar5 + 0x243) + 1;
          *(byte *)(iVar5 + 0x243) = bVar16;
          dVar26 = (double)(longlong)(int)(animationSpeed * 15.5);
          puVar7[0x28] = (ulonglong)dVar26;
          if (*(int *)((int)puVar7 + 0x144) < (int)(uint)bVar16) {
            *(undefined1 *)(iVar5 + 0x242) = 1;
          }
        }
      }
    }
  }
  else {
    fVar29 = *param_4 - *(float *)(param_3 + 0x10);
    fVar2 = param_4[1] - *(float *)(param_3 + 0x14);
    fVar3 = ABS(fVar29);
    fVar1 = ABS(fVar2);
    *(float *)((int)puVar7 + 0xb4) = fVar29;
    *(float *)(puVar7 + 0x17) = fVar2;
    *(float *)((int)puVar7 + 0xbc) = fVar3 - fVar1;
    fVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)((int)puVar7 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x17) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar7 + 0xb4));
    if (*(float *)((int)puVar7 + 0xbc) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar1 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar7 + 0x17));
    if (*(float *)((int)puVar7 + 0xbc) - 0.0 < 0.0) {
      fVar9 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar11 - 0x180;
      lVar19 = uVar11 - 0x60;
      lVar17 = uVar11 - 0x70;
      lVar20 = 2;
      fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 300) = fVar2;
      *(float *)((int)puVar7 + 0x124) = fVar2;
      *(float *)(puVar7 + 0x25) = fVar2;
      *(float *)(puVar7 + 0x24) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x124) = *(float *)((int)puVar7 + 0x124) * fVar3;
      *(float *)(puVar7 + 0x25) = *(float *)(puVar7 + 0x25) * fVar2;
      *(float *)((int)puVar7 + 300) = *(float *)((int)puVar7 + 300) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x110) * fVar2 * fVar2;
        iVar12 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar11 - 0x70;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar2 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x120) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar12 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar8 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar29 = fVar29 + *(float *)(iVar12 + 0x120) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8)
                 + *(float *)(iVar8 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar29 = (fVar29 + 0.7853982) * fVar4 + fVar1;
    }
    fVar29 = OrganicDeltAng
                       (fVar29,g_FrameTimeSq * 15.707963,g_FrameTimeSq * 12.566371,
                        g_FrameTime * 25.132742,(float *)(param_3 + 0x48),0x3316d4,
                        (float *)(iVar5 + 0x23c));
    dVar26 = (double)fVar29;
  }
  return dVar26;
}


// 0x0332230 (0x68 bytes)
double M294_00332230(longlong param_1)

{
  double dVar1;
  float fVar2;
  
  dVar1 = (double)GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  fVar2 = Delt((float)dVar1,g_FrameTimeSq * 27.0,(float *)((int)param_1 + 0x18));
  return (double)fVar2;
}


// 0x03322b0 (0x268 bytes)
// inlined: FastAtan2 @0x332388
void M294_003322b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xb0;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar11;
  puVar7[0x18] = in_LR;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar5 = param_2[1] - *(float *)(param_1 + 0x14);
  fVar4 = ABS(fVar1);
  fVar2 = ABS(fVar5);
  *(float *)(puVar7 + 0xe) = fVar1;
  puVar7[0x15] = unaff_r31;
  *(float *)((int)puVar7 + 0x74) = fVar5;
  iVar6 = *(int *)(param_1 + 0x78);
  *(float *)(puVar7 + 0xf) = fVar4 - fVar2;
  dVar20 = 0.0;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar13 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar3 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar3) {
    lVar16 = uVar11 - 0xa0;
    lVar15 = uVar11 - 0x34;
    lVar14 = uVar11 - 0x24;
    lVar18 = 2;
    fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    *(float *)(puVar7 + 0x10) = fVar3;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)((int)puVar7 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar3 * fVar3;
      iVar8 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x34;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar14 = lVar16;
    lVar15 = lVar12;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar3;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar8 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar9 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0x7c)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar5 + fVar2);
  }
  dVar19 = (double)FastDiffRots(dVar20,(double)fVar1);
  dVar20 = 1.2217304706573486;
  if ((dVar19 <= 1.2217304706573486) && (dVar20 = dVar19, dVar19 < -1.2217304706573486)) {
    dVar20 = -1.2217304706573486;
  }
  *(float *)(iVar6 + 0x188) = (float)(dVar20 * 0.3499999940395355);
  *(float *)(iVar6 + 0x208) = (float)(dVar20 * 0.800000011920929);
  return;
}


// 0x0332560 (0x640 bytes)
void M294_00332560
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  u8 uVar2;
  undefined4 uVar3;
  MOBY_OCLASSES MVar4;
  void *pvVar5;
  MobyInstance *moby;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 in_LR;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  float local_90;
  float local_8c;
  undefined4 local_88;
  GPiece<4> auStack_80;
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  
  pvVar5 = param_1->pVar;
  uVar12 = ZEXT48(pvVar5);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
    auVar21 = loadVectorLeftIndexed(in_LR,0x332518);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x240,uVar12);
    *(undefined2 *)((int)pvVar5 + 0x240) = uVar6;
  }
  uVar2 = param_1->state;
  if (uVar2 != '\0') {
    iVar10 = FastDecTimerS16(uVar12 + 0x240);
    uVar3 = 0x41a00000;
    if (iVar10 != 0) {
      uVar3 = *(undefined4 *)((int)pvVar5 + 0x28c);
    }
    *(undefined4 *)((int)pvVar5 + 0x230) = uVar3;
    uVar2 = param_1->state;
  }
  if (uVar2 != '\x02' && *(int *)((int)pvVar5 + 0x274) != 0) {
    iVar10 = *(int *)((int)pvVar5 + 0x288) + 1;
    *(int *)((int)pvVar5 + 0x288) = iVar10;
    local_70 = (longlong)(int)(animationSpeed * 60.5);
    if ((int)(animationSpeed * 60.5) * 0x11 < iVar10) {
      iVar10 = 0;
      if (*(int *)((int)pvVar5 + 0x278) != -1) {
        iVar10 = MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x278),2);
      }
      if (*(int *)((int)pvVar5 + 0x27c) != -1) {
        iVar11 = MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x27c),2);
        iVar10 = iVar10 + iVar11;
      }
      if (*(int *)((int)pvVar5 + 0x280) != -1) {
        iVar11 = MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x280),2);
        iVar10 = iVar10 + iVar11;
      }
      if (*(int *)((int)pvVar5 + 0x284) != -1) {
        iVar11 = MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x284),2);
        iVar10 = iVar10 + iVar11;
      }
      if ((8 < iVar10) && (iVar10 = MB_randInt(0x27), iVar10 == 0)) {
        dVar20 = 3.1415927410125732;
        dVar13 = (double)FastWrapRot((param_1->rotation).z,3.1415927);
        dVar19 = 3.141592502593994;
        fVar1 = (float)(dVar13 + 1.570796251296997);
        dVar18 = -3.141592502593994;
        dVar17 = -0.16666656732559204;
        dVar16 = 0.008333025500178337;
        dVar15 = -0.0001980741071747616;
        dVar13 = 2.601886990305502e-06;
        fVar7 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar7 = fVar1;
        }
        fVar8 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar9 = fVar8 * fVar8;
        fVar1 = fVar9 * fVar9 * fVar8;
        fVar7 = fVar9 * fVar1;
        local_90 = fVar9 * fVar7 * 2.601887e-06 +
                   fVar7 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8;
        dVar14 = (double)FastWrapRot((param_1->rotation).z,(float)dVar20);
        local_88 = 0;
        dVar20 = (double)(float)(dVar19 - dVar14);
        if (dVar14 - (double)(float)(dVar19 - dVar14) < 0.0) {
          dVar20 = dVar14;
        }
        dVar19 = (double)(float)(dVar18 - dVar14);
        if ((double)(float)(dVar18 - dVar14) - dVar20 < 0.0) {
          dVar19 = dVar20;
        }
        dVar18 = (double)(float)(dVar19 * dVar19);
        dVar14 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar19));
        dVar20 = (double)(float)(dVar18 * dVar14);
        local_8c = (float)((double)(float)(dVar18 * dVar20) * dVar13 +
                          (double)(float)(dVar20 * dVar15 +
                                         (double)(float)(dVar14 * dVar16 +
                                                        (double)(float)((double)(float)(dVar18 * 
                                                  dVar19) * dVar17 + dVar19))));
        CollDamageMobyDirect
                  (1.0,param_1,g_heroMobyPtr,0x10000,param_4,&(param_1->pos).x,&local_90);
      }
    }
  }
  if ((*(int *)((int)pvVar5 + 0x290) == -1) ||
     (iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x290)),
     iVar10 == 0)) {
    iVar10 = MB_damage(param_1,0x330000,0);
    dVar13 = 0.0;
    local_7c = 0.0;
    MB_HandleDamage(param_1,iVar10,uVar12 + 0x20,0,auStack_80,&local_7c,0,4);
    if (iVar10 != 0) {
      MVar4 = *(MOBY_OCLASSES *)(*(int *)(iVar10 + 0x20) + 0xa6);
      if (((MVar4 != (PYROCITOR|BLARG_HEAVY_INTERCEPTOR_0008) && MVar4 != param_1->oClass) &&
          (param_1->state != '\t')) && (local_7c != 0.0)) {
        if (param_1->group != -1) {
          MB_SetGroupField(param_1->group,1);
        }
        fVar1 = *(float *)((int)pvVar5 + 0x20) - local_7c;
        *(float *)((int)pvVar5 + 0x20) = fVar1;
        fVar7 = g_FrameTimeSq;
        *(undefined1 *)((int)pvVar5 + 0xad) = 0;
        *(undefined4 *)((int)pvVar5 + 0x94) = 9;
        *(undefined4 *)((int)pvVar5 + 0xa0) = 0x3f800000;
        *(undefined4 *)((int)pvVar5 + 0xa4) = 0x3f800000;
        *(undefined4 *)((int)pvVar5 + 0xa8) = 0x3f800000;
        *(float *)((int)pvVar5 + 0x80) = fVar7 * 30.0;
        fVar7 = g_FrameTime;
        if (dVar13 < (double)fVar1) {
          *(float *)((int)pvVar5 + 0x88) = g_FrameTime * 4.7;
          *(float *)((int)pvVar5 + 0x8c) = fVar7 * 7.7;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar10 + 0x10),*(undefined8 *)(iVar10 + 0x18),&local_74,
                     uVar12 + 0x88,uVar12 + 0x8c);
          MB_StartKick((double)local_74,param_1,uVar12 + 0x70);
          auVar21 = ZEXT416(0xffffffff);
          auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          *(undefined4 *)((int)pvVar5 + 0xc0) = 0x40800000;
          *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41000000;
          param_1->state = '\x04';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
          auVar21 = loadVectorLeftIndexed(8,0x332518);
          auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = vectorSplatHalfWord(auVar21,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,uVar12);
          *(undefined2 *)((int)pvVar5 + 0x26) = uVar6;
          MB_UpdateLightsTransition(param_1,uVar12 + 0x60);
        }
        else {
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          fVar1 = g_FrameTime;
          *(float *)((int)pvVar5 + 0x88) = g_FrameTime * 12.0;
          *(float *)((int)pvVar5 + 0x8c) = fVar1 * 9.0;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar10 + 0x10),*(undefined8 *)(iVar10 + 0x18),&local_78,
                     uVar12 + 0x88,uVar12 + 0x8c);
          MB_StartKick((double)local_78,param_1,uVar12 + 0x70);
          *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41200000;
          *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41980000;
          param_1->state = '\t';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
          MB_UpdateLightsTransition(param_1,uVar12 + 0x60);
        }
      }
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar12 + 0x60);
  }
  else {
    param_1->field76_0xb4 = '\0';
    param_1->field77_0xb5 = '\0';
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    moby = *(MobyInstance **)((int)param_1->pVar + 0x248);
    if (moby != (MobyInstance *)0x0) {
      DeleteMoby(moby);
    }
    DeleteMoby(param_1);
  }
  return;
}


// 0x0332c38 (0x1e54 bytes)
// inlined: FastAtan2 @0x3336c8, FastAtan2 @0x333928, FastAtan2 @0x333d5c, FastAtan2 @0x333f34, FastAtan2 @0x334334, FastAtan2 @0x33464c
/* Moby 294 */

void UpdateMoby_294(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  uint *puVar10;
  int *piVar11;
  f32 fVar12;
  MobyInstance *pMVar13;
  void *pvVar14;
  Spline *pSVar15;
  ulonglong *puVar16;
  float fVar17;
  MobyInstance *pMVar18;
  gameMode_t gVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  uint uVar26;
  ulonglong uVar23;
  bool bVar28;
  longlong lVar24;
  undefined4 uVar27;
  float *pfVar30;
  longlong lVar29;
  longlong lVar31;
  longlong lVar32;
  ulonglong unaff_r24;
  undefined4 *puVar33;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar34;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  u8 uVar36;
  ushort uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar32 = uVar21 - 0x290;
  puVar16 = (ulonglong *)lVar32;
  *puVar16 = uVar21;
  puVar16[0x54] = in_LR;
  puVar16[0x4f] = in_f29;
  puVar16[0x50] = in_f30;
  puVar16[0x51] = in_f31;
  puVar16[0x4e] = unaff_r31;
  puVar16[0x4a] = unaff_r27;
  gVar19 = g_gameMode;
  pvVar9 = moby->pVar;
  puVar16[0x4d] = unaff_r30;
  puVar16[0x4c] = unaff_r29;
  puVar16[0x4b] = unaff_r28;
  puVar16[0x49] = unaff_r26;
  puVar16[0x48] = unaff_r25;
  puVar16[0x47] = unaff_r24;
  if (gVar19 == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    iVar25 = *(int *)((int)pvVar9 + 0x248);
    if (iVar25 == 0) {
      return;
    }
    *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) | 0x41;
    return;
  }
  if (2 < moby->state) {
    iVar25 = *(int *)((int)pvVar9 + 0x248);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (iVar25 != 0) {
      *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) & 0xffbe;
    }
  }
  if ((((*(char *)((int)pvVar9 + 0x269) != '\0') && (g_heroState == STANDING)) &&
      (DAT_0096bd70 == 0x67)) &&
     (dVar38 = (double)FUN_005e8588(lVar22 + 0x10,&g_heroPosition), dVar38 < 30.0)) {
    M294_00331670(lVar22);
    return;
  }
  if (*(int *)((int)pvVar9 + 0x270) != -1) {
    iVar25 = MB_IsPntInCuboid
                       ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar9 + 0x270));
    if (iVar25 == 0) {
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      iVar25 = *(int *)((int)pvVar9 + 0x248);
      if (iVar25 == 0) {
        return;
      }
      *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) | 0x41;
      return;
    }
    iVar25 = *(int *)((int)pvVar9 + 0x248);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (iVar25 != 0) {
      *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) & 0xffbe;
    }
  }
  if (*(char *)((int)pvVar9 + 0x2e) == '\x02') {
    M294_00331670(lVar22);
    return;
  }
  M294_00332560(lVar22);
  MB_getTarget((double)*(float *)((int)pvVar9 + 0x230),lVar22);
  pMVar18 = g_heroMobyPtr;
  pMVar13 = *(MobyInstance **)(puVar16 + 0x22);
  if (*(MobyInstance **)(puVar16 + 0x22) == (MobyInstance *)0x0) {
    FUN_005e7e98(uVar21 - 0x1a0,&g_heroCGPos);
    pMVar13 = pMVar18;
  }
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0x58) = 8;
        *(undefined1 *)((int)pvVar9 + 0x5a) = 8;
        *(undefined1 *)((int)pvVar9 + 0x29) = 1;
        *(undefined4 *)((int)pvVar9 + 0x28c) = *(undefined4 *)((int)pvVar9 + 0x230);
        *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
        *(undefined4 *)((int)pvVar9 + 0x90) = 0x200;
        dVar38 = 0.5;
        *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f000000;
        MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
        *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f800000;
        *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f800000;
        *(undefined4 *)((int)pvVar9 + 0xd0) = 0x38d;
        fVar3 = g_FrameTime * 5.5;
        *(undefined4 *)((int)pvVar9 + 0x108) = 0x18;
        *(float *)((int)pvVar9 + 0xf4) = fVar3;
        FUN_005e7e98((int)pvVar9 + 0x220,lVar22 + 0x10);
        if (moby->group == -1) {
          uVar26 = rand();
          if ((uVar26 & 1) != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
        }
        else {
          puVar10 = *(uint **)((int)pvVar9 + 0x24c);
          if (*puVar10 == 1) {
            puVar10 = *(uint **)((int)pvVar9 + 0x24c);
            moby->modeBits = moby->modeBits | MIRROR;
          }
          *puVar10 = (*puVar10 == 0);
        }
        if (*(int *)((int)pvVar9 + 0x274) != 0) {
          iVar25 = MB_randRange(0,300);
          puVar16[0x45] = (longlong)iVar25;
          *(int *)((int)pvVar9 + 0x288) =
               (int)(animationSpeed * (float)((double)(longlong)puVar16[0x45] + dVar38));
        }
        (moby->rotation).x = 0.0;
        (moby->rotation).y = 0.0;
        dVar39 = (double)*(float *)((int)pvVar9 + 0x244);
        if (*(int *)((int)pvVar9 + 0x244) == 0) {
          if (moby->group == -1) {
            dVar39 = (double)MB_randRangeSigned(0x402e000000000000,0x4041800000000000);
          }
          else {
            piVar11 = *(int **)((int)pvVar9 + 0x250);
            iVar25 = *piVar11;
            puVar16[0x45] = (longlong)iVar25;
            uVar23 = puVar16[0x45];
            *piVar11 = iVar25 + 0x14 +
                       ((uint)(-(longlong)iVar25 >> 0x3f) & -(iVar25 + 0x14) - iVar25);
            dVar39 = (double)(longlong)uVar23;
          }
        }
        *(float *)((int)pvVar9 + 0x244) = (float)(dVar39 * 0.01745329238474369);
        dVar38 = (double)GetGroundZ(dVar38,lVar22 + 0x10,0);
        (moby->pos).z = (float)dVar38;
        if (*(char *)((int)pvVar9 + 0x268) != '\0') {
          iVar25 = *(int *)((int)pvVar9 + 0x248);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          if (iVar25 != 0) {
            *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) | 0x41;
          }
        }
        moby->state = '\x02';
      }
      else {
        iVar25 = FastDecTimerS32((int)pvVar9 + 600);
        if (iVar25 != 0) {
          if ((moby->animationId != '\b') && (moby->updateId == moby->animationId)) {
            puVar16[0x45] = (longlong)(int)(animationSpeed * 11.5);
            MB_SetAnimationFrame(moby,8,0,*(int *)((int)puVar16 + 0x22c),5);
          }
          pSVar15 = Splines[*(int *)((int)pvVar9 + 0x254)];
          dVar38 = (double)FUN_005e8588(lVar22 + 0x10,
                                        ZEXT48(pSVar15) +
                                        ((ulonglong)*(uint *)((int)pvVar9 + 0x260) & 0xfffffff) *
                                        0x10 + 0x10 & 0xffffffff);
          uVar23 = (ulonglong)*(uint *)((int)pvVar9 + 0x260);
          if (dVar38 < 3.0) {
            uVar23 = uVar23 + 1;
            *(int *)((int)pvVar9 + 0x260) = (int)uVar23;
          }
          lVar32 = (ulonglong)(uint)pSVar15->cnt - 1;
          lVar32 = uVar23 + ((longlong)(int)lVar32 - (longlong)(int)uVar23 >> 0x3f & lVar32 - uVar23
                            );
          *(int *)((int)pvVar9 + 0x260) = (int)lVar32;
          M294_00331708
                    (0,(double)(g_FrameTime * 8.0),lVar22,
                     ZEXT48(pSVar15) + lVar32 * 0x10 + 0x10 & 0xffffffff);
          if (*(int *)((int)pvVar9 + 0x260) == pSVar15->cnt + -1) {
            moby->state = '\x03';
          }
          else {
            fVar3 = (moby->pos).y - (pMVar13->pos).y;
            fVar4 = (moby->pos).x - (pMVar13->pos).x;
            if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < *(float *)((int)pvVar9 + 0x264)) {
              moby->state = '\x03';
            }
          }
        }
      }
    }
    else if (bVar1 < 3) {
      dVar38 = (double)FUN_005e8548(lVar22 + 0x10,&g_heroPosition);
      if (64.0 < dVar38) {
        return;
      }
      if ((moby->animationId != '\0') && (moby->updateId == moby->animationId)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimationFrame(moby,0,0,*(int *)((int)puVar16 + 0x22c),5);
      }
      dVar38 = 0.0;
      iVar25 = MB_IsPntInRangeAndArc
                         ((double)*(float *)((int)pvVar9 + 0x230),0x4008000000000000,0,lVar22,
                          &pMVar13->pos);
      if ((iVar25 != 0) ||
         (((*(int *)((int)pvVar9 + 0x25c) != -1 &&
           (iVar25 = MB_IsPntInCuboid
                               ((Vec4 *)&pMVar13->pos,(longlong)*(int *)((int)pvVar9 + 0x25c)),
           iVar25 != 0)) || (moby->setByGroup != '\0')))) {
        if ((moby->modeBits & DISABLED) != NONE) {
          fVar12 = (moby->pos).y;
          *(f32 *)(puVar16 + 0xe) = (moby->pos).x;
          fVar2 = (moby->pos).w;
          *(f32 *)((int)puVar16 + 0x74) = fVar12;
          *(f32 *)((int)puVar16 + 0x7c) = fVar2;
          *(float *)(puVar16 + 0xf) = (moby->pos).z + 0.5;
          iVar25 = CollLine(uVar21 - 0x220,0x951500,2,lVar22,0);
          if (iVar25 == 0) {
            if (*(MobyInstance **)((int)pvVar9 + 0x248) != (MobyInstance *)0x0) {
              DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x248));
            }
            DeleteMoby(moby);
            return;
          }
          iVar25 = *(int *)((int)pvVar9 + 0x248);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          if (iVar25 != 0) {
            *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) & 0xffbe;
          }
        }
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,1);
        }
        if (*(int *)((int)pvVar9 + 0x254) == -1) {
          moby->state = '\x03';
        }
        else {
          iVar25 = PathFindClosestPnt
                             ((float)dVar38,(Vec4 *)(lVar22 + 0x10),
                              Splines[*(int *)((int)pvVar9 + 0x254)]);
          *(int *)((int)pvVar9 + 0x260) = iVar25;
          moby->state = '\x01';
        }
      }
    }
    else if (bVar1 < 4) {
      if (*(char *)((int)pvVar9 + 0x268) == '\x01') {
        fVar12 = (moby->pos).y;
        *(f32 *)(puVar16 + 0x10) = (moby->pos).x;
        fVar2 = (moby->pos).z;
        *(f32 *)((int)puVar16 + 0x84) = fVar12;
        fVar12 = (moby->pos).w;
        *(f32 *)(puVar16 + 0x11) = fVar2;
        fVar3 = (moby->rotation).z;
        *(f32 *)((int)puVar16 + 0x8c) = fVar12;
        dVar38 = (double)cosf(fVar3);
        fVar3 = (moby->rotation).z;
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar3 = fVar5 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar5;
        fVar6 = fVar3 * fVar4;
        *(float *)((int)puVar16 + 0x84) =
             *(float *)((int)puVar16 + 0x84) +
             fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5;
        *(float *)(puVar16 + 0x10) = (float)((double)*(float *)(puVar16 + 0x10) + dVar38);
        lVar24 = lVar22;
        iVar25 = CollMobySphere
                           (0x3ff8000000000000,uVar21 - 0x210,&DAT_00332ba0,0,lVar22,0);
        uVar27 = DAT_00a15d34;
        if (iVar25 != 0) {
          iVar34 = 0;
          *(undefined4 *)(puVar16 + 0x12) = DAT_00a15d30;
          uVar20 = DAT_00a15d38;
          *(undefined4 *)((int)puVar16 + 0x94) = uVar27;
          uVar27 = DAT_00a15d3c;
          *(undefined4 *)(puVar16 + 0x13) = uVar20;
          *(undefined4 *)((int)puVar16 + 0x9c) = uVar27;
          if (0 < iVar25) {
            puVar33 = &g_CollMobyHits;
            dVar39 = 0.699999988079071;
            dVar38 = 1.0;
            do {
              bVar28 = MB_isCrate(*puVar33);
              if ((bVar28) &&
                 (ABS((double)((moby->pos).z - (((MobyInstance *)*puVar33)->pos).z)) < dVar39)) {
                CollDamageMobyDirect
                          ((float)dVar38,(MobyInstance *)*puVar33,g_heroMobyPtr,0x10000,(int)lVar24,
                           &(moby->pos).x,(float *)(puVar16 + 0x12));
              }
              iVar34 = iVar34 + 1;
              puVar33 = puVar33 + 1;
            } while (iVar34 < iVar25);
          }
        }
      }
      fVar3 = (pMVar13->pos).x - (moby->pos).x;
      fVar4 = (pMVar13->pos).y - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar16 + 0x2b) = fVar3;
      *(float *)((int)puVar16 + 0x15c) = fVar4;
      *(float *)(puVar16 + 0x2c) = fVar6 - fVar5;
      dVar38 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x2b) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x2c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x15c) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar16 + 0x2b));
      if (*(float *)(puVar16 + 0x2c) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar16 + 0x15c));
      if (*(float *)(puVar16 + 0x2c) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      dVar39 = dVar38;
      if (0.0 < fVar3) {
        lVar24 = uVar21 - 0x280;
        lVar29 = uVar21 - 0x8c;
        lVar31 = uVar21 - 0x7c;
        lVar37 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x42) = fVar3;
        *(float *)(puVar16 + 0x41) = fVar3;
        *(float *)((int)puVar16 + 0x20c) = fVar3;
        *(float *)((int)puVar16 + 0x204) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x41) = *(float *)(puVar16 + 0x41) * fVar6;
        *(float *)((int)puVar16 + 0x20c) = *(float *)((int)puVar16 + 0x20c) * fVar3;
        *(float *)(puVar16 + 0x42) = *(float *)(puVar16 + 0x42) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar24 + 0x204) = *(float *)((int)lVar24 + 500) * fVar3 * fVar3;
          iVar25 = (int)lVar29;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar31 = lVar31 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar31 = uVar21 - 0x8c;
        pfVar30 = (float *)&DAT_007358e0;
        lVar24 = lVar32;
        lVar29 = lVar31;
        do {
          fVar3 = *pfVar30;
          fVar6 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar24 + 0x204) = *(float *)((int)lVar24 + 0x204) * fVar3;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
          lVar29 = lVar29 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar29 = 2;
        lVar24 = lVar32;
        do {
          iVar25 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar34 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar25 + 0x204)) +
                            *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                           *(float *)(iVar34 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar40 = (double)FastDiffRots(dVar39,(double)(moby->rotation).z);
      dVar39 = 0.9599310755729675;
      if ((dVar40 <= 0.9599310755729675) && (dVar39 = dVar40, dVar40 < -0.9599310755729675)) {
        dVar39 = -0.9599310755729675;
      }
      *(float *)((int)pvVar9 + 0x188) = (float)(dVar39 * 0.5);
      *(float *)((int)pvVar9 + 0x208) = (float)(dVar39 * 0.5);
      M294_00331708
                ((double)*(float *)((int)pvVar9 + 0x244),dVar38,lVar22,&pMVar13->pos);
      fVar3 = (moby->pos).y;
      fVar4 = (pMVar13->pos).y;
      fVar5 = (moby->pos).x;
      fVar8 = fVar3 - fVar4;
      fVar6 = (pMVar13->pos).x;
      fVar17 = fVar5 - fVar6;
      fVar7 = (moby->rotation).z;
      if ((SQRT(fVar17 * fVar17 + fVar8 * fVar8) < 5.5) || (*(char *)((int)pvVar9 + 0x242) != '\0'))
      {
        fVar6 = fVar6 - fVar5;
        fVar4 = fVar4 - fVar3;
        dVar40 = ABS((double)fVar6);
        dVar42 = ABS((double)fVar4);
        *(float *)((int)puVar16 + 0x14c) = fVar6;
        *(float *)(puVar16 + 0x2a) = fVar4;
        *(float *)((int)puVar16 + 0x154) = (float)(dVar40 - dVar42);
        uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 0x14c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1d) & 4;
        dVar39 = ABS((double)*(float *)((int)puVar16 + 0x14c));
        if ((double)*(float *)((int)puVar16 + 0x154) - dVar38 < 0.0) {
          dVar39 = dVar42;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        dVar42 = ABS((double)*(float *)(puVar16 + 0x2a));
        if ((double)*(float *)((int)puVar16 + 0x154) - dVar38 < 0.0) {
          dVar42 = dVar40;
        }
        fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (dVar38 < dVar39) {
          lVar24 = uVar21 - 0x280;
          lVar31 = uVar21 - 0x9c;
          lVar29 = uVar21 - 0xac;
          lVar37 = 2;
          fVar5 = (float)(dVar42 - dVar39) / (float)(dVar42 + dVar39);
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar16 + 0x3e) = fVar5;
          *(float *)(puVar16 + 0x3d) = fVar5;
          *(float *)((int)puVar16 + 0x1ec) = fVar5;
          *(float *)((int)puVar16 + 0x1e4) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar16 + 0x3d) = *(float *)(puVar16 + 0x3d) * fVar6;
          *(float *)((int)puVar16 + 0x1ec) = *(float *)((int)puVar16 + 0x1ec) * fVar5;
          *(float *)(puVar16 + 0x3e) = *(float *)(puVar16 + 0x3e) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar24 + 0x1e4) = *(float *)((int)lVar24 + 0x1d4) * fVar5 * fVar5;
            iVar25 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
            lVar31 = lVar31 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar31 = uVar21 - 0xac;
          pfVar30 = (float *)&DAT_007358e0;
          lVar24 = lVar32;
          lVar29 = lVar31;
          do {
            fVar5 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar24 + 0x1e4) = *(float *)((int)lVar24 + 0x1e4) * fVar5;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
            lVar29 = lVar29 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar24 = 2;
          do {
            iVar25 = (int)lVar32;
            iVar34 = (int)lVar31;
            lVar32 = lVar32 + 0x10;
            lVar31 = lVar31 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar25 + 0x1e4)) +
                              *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                             *(float *)(iVar34 + 0xc));
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar38 = (double)FastSubRots(fVar7,(float)dVar38);
        if (dVar38 < 0.0872664600610733) {
          moby->state = '\x05';
          goto LAB_00334904;
        }
      }
      if ((moby->animationId != '\b') && (moby->updateId == moby->animationId)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 11.5);
        MB_SetAnimationFrame(moby,8,0,*(int *)((int)puVar16 + 0x22c),5);
      }
    }
    else {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      uVar26 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
      fVar3 = (moby->rotation).z;
      if ((uVar26 & 0x60) == 0) {
        fVar12 = (moby->pos).z;
        uVar26 = (int)fVar12 >> 0x1f;
        if ((int)((uVar26 >> 1 ^ (uint)fVar12) - uVar26) < 0x40000000) {
          moby->field76_0xb4 = '\0';
          moby->field77_0xb5 = '\0';
          MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
          pMVar13 = *(MobyInstance **)((int)moby->pVar + 0x248);
          if (pMVar13 != (MobyInstance *)0x0) {
            DeleteMoby(pMVar13);
          }
          DeleteMoby(moby);
          return;
        }
      }
      else {
        fVar4 = (moby->pos).y;
        fVar5 = (pMVar13->pos).y;
        fVar6 = (moby->pos).x;
        fVar8 = fVar4 - fVar5;
        fVar7 = (pMVar13->pos).x;
        fVar17 = fVar6 - fVar7;
        if ((SQRT(fVar17 * fVar17 + fVar8 * fVar8) < 6.0) ||
           (*(char *)((int)pvVar9 + 0x242) != '\0')) {
          fVar7 = fVar7 - fVar6;
          fVar5 = fVar5 - fVar4;
          fVar6 = ABS(fVar7);
          fVar8 = ABS(fVar5);
          *(float *)(puVar16 + 0x24) = fVar7;
          *(float *)((int)puVar16 + 0x124) = fVar5;
          *(float *)(puVar16 + 0x25) = fVar6 - fVar8;
          fVar4 = 0.0;
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x24) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x25) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x124) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)(puVar16 + 0x24));
          if (*(float *)(puVar16 + 0x25) - 0.0 < 0.0) {
            fVar5 = fVar8;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar17 = ABS(*(float *)((int)puVar16 + 0x124));
          if (*(float *)(puVar16 + 0x25) - 0.0 < 0.0) {
            fVar17 = fVar6;
          }
          if (0.0 < fVar5) {
            lVar24 = uVar21 - 0x280;
            lVar29 = uVar21 - 300;
            lVar31 = uVar21 - 0x11c;
            lVar37 = 2;
            fVar5 = (fVar17 - fVar5) / (fVar17 + fVar5);
            fVar6 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x2e) = fVar5;
            *(float *)(puVar16 + 0x2d) = fVar5;
            *(float *)((int)puVar16 + 0x16c) = fVar5;
            *(float *)((int)puVar16 + 0x164) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)(puVar16 + 0x2d) = *(float *)(puVar16 + 0x2d) * fVar6;
            *(float *)((int)puVar16 + 0x16c) = *(float *)((int)puVar16 + 0x16c) * fVar5;
            *(float *)(puVar16 + 0x2e) = *(float *)(puVar16 + 0x2e) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x164) = *(float *)((int)lVar24 + 0x154) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 300;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x164) = *(float *)((int)lVar24 + 0x164) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar24 = 2;
            do {
              iVar25 = (int)lVar32;
              iVar34 = (int)lVar31;
              lVar32 = lVar32 + 0x10;
              lVar31 = lVar31 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar25 + 0x164) + *(float *)(iVar34 + 4) +
                      *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
          }
          dVar38 = (double)FastSubRots(fVar3,fVar4);
          if (dVar38 < 0.12217304855585098) {
            moby->state = '\x05';
            goto LAB_00334904;
          }
        }
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      uVar26 = (int)*(uint *)((int)pvVar9 + 0x28c) >> 0x1f;
      if ((int)((uVar26 >> 1 ^ *(uint *)((int)pvVar9 + 0x28c)) - uVar26) < 0x41000000) {
        *(undefined4 *)((int)pvVar9 + 0x28c) = 0x41000000;
      }
      M294_003322b0(lVar22,&pMVar13->pos);
      dVar38 = (double)GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      Delt((float)dVar38,g_FrameTimeSq * 27.0,&(moby->pos).z);
      uVar36 = moby->animationId;
      if ((uVar36 != '\x02') && (moby->updateId == uVar36)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimationFrame(moby,2,0,*(int *)((int)puVar16 + 0x22c),5);
        uVar36 = moby->animationId;
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((uVar36 != '\n') && (moby->updateId == uVar36)) {
          puVar16[0x45] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimationFrame(moby,10,0,*(int *)((int)puVar16 + 0x22c),5);
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 < 7) {
      M294_003322b0(lVar22,&pMVar13->pos);
      dVar38 = (double)GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      Delt((float)dVar38,g_FrameTimeSq * 27.0,&(moby->pos).z);
      if (*(int *)((int)pvVar9 + 0x248) != 0) {
        dVar38 = 0.0;
        iVar25 = MB_MayaFrameTrigger(0.0,moby);
        if (iVar25 != 0) {
          GetBonePosition(*(undefined4 *)((int)pvVar9 + 0x248),0,uVar21 - 0x1f0);
          fVar5 = *(float *)(puVar16 + 0x1e) - *(float *)(puVar16 + 0x14);
          fVar6 = *(float *)((int)puVar16 + 0xf4) - *(float *)((int)puVar16 + 0xa4);
          *(float *)(puVar16 + 0x28) = fVar5;
          *(float *)((int)puVar16 + 0x144) = fVar6;
          *(float *)(puVar16 + 0x16) = fVar5;
          *(float *)((int)puVar16 + 0xb4) = fVar6;
          *(float *)(puVar16 + 0x29) = (float)(ABS((double)fVar5) - ABS((double)fVar6));
          *(float *)(puVar16 + 0x17) = *(float *)(puVar16 + 0x1f) - *(float *)(puVar16 + 0x15);
          *(undefined4 *)((int)puVar16 + 0xbc) = *(undefined4 *)((int)puVar16 + 0xfc);
          fVar3 = (moby->rotation).z;
          fVar4 = *(float *)((int)pvVar9 + 0x208);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x28) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x29) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x144) >> 0x1d) & 4;
          dVar39 = ABS((double)*(float *)(puVar16 + 0x28));
          if ((double)*(float *)(puVar16 + 0x29) - dVar38 < 0.0) {
            dVar39 = ABS((double)fVar6);
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar40 = ABS((double)*(float *)((int)puVar16 + 0x144));
          if ((double)*(float *)(puVar16 + 0x29) - dVar38 < 0.0) {
            dVar40 = ABS((double)fVar5);
          }
          dVar42 = dVar38;
          if (dVar38 < dVar39) {
            lVar24 = uVar21 - 0x280;
            lVar29 = uVar21 - 0xcc;
            lVar31 = uVar21 - 0xbc;
            lVar37 = 2;
            fVar5 = (float)(dVar40 - dVar39) / (float)(dVar40 + dVar39);
            fVar8 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x3a) = fVar5;
            *(float *)(puVar16 + 0x39) = fVar5;
            *(float *)((int)puVar16 + 0x1cc) = fVar5;
            *(float *)((int)puVar16 + 0x1c4) = fVar5;
            fVar5 = fVar8 * fVar8;
            *(float *)(puVar16 + 0x39) = *(float *)(puVar16 + 0x39) * fVar8;
            *(float *)((int)puVar16 + 0x1cc) = *(float *)((int)puVar16 + 0x1cc) * fVar5;
            *(float *)(puVar16 + 0x3a) = *(float *)(puVar16 + 0x3a) * fVar5 * fVar8;
            do {
              *(float *)((int)lVar24 + 0x1c4) = *(float *)((int)lVar24 + 0x1b4) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 0xcc;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar8 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x1c4) = *(float *)((int)lVar24 + 0x1c4) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar8;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar29 = 2;
            lVar24 = lVar32;
            dVar39 = dVar38;
            do {
              iVar25 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              iVar34 = (int)lVar31;
              lVar31 = lVar31 + 0x10;
              dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar25 + 0x1c4)) +
                                *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                               *(float *)(iVar34 + 0xc));
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            dVar42 = (double)((float)(dVar39 + 0.7853981852531433) * fVar7 + fVar6);
          }
          dVar40 = (double)FastWrapRot(fVar3,fVar4);
          dVar41 = (double)FastSubRots((float)dVar42,(float)dVar40);
          fVar3 = SQRT(*(float *)(puVar16 + 0x16) * *(float *)(puVar16 + 0x16) +
                       *(float *)((int)puVar16 + 0xb4) * *(float *)((int)puVar16 + 0xb4));
          dVar39 = ABS((double)*(float *)(puVar16 + 0x17));
          if (0.22689279913902283 - dVar41 < 0.0) {
            dVar42 = dVar40;
          }
          dVar41 = ABS((double)fVar3);
          *(float *)(puVar16 + 0x27) = fVar3;
          *(float *)((int)puVar16 + 0x13c) = (float)(dVar41 - dVar39);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x27) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x13c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x17) >> 0x1d) & 4;
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar40 = ABS((double)*(float *)(puVar16 + 0x27));
          if ((double)*(float *)((int)puVar16 + 0x13c) - dVar38 < 0.0) {
            dVar40 = dVar39;
          }
          if ((double)*(float *)((int)puVar16 + 0x13c) - dVar38 < 0.0) {
            dVar39 = dVar41;
          }
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (dVar38 < dVar40) {
            lVar24 = uVar21 - 0x280;
            lVar29 = uVar21 - 0xec;
            lVar31 = uVar21 - 0xdc;
            lVar37 = 2;
            fVar5 = (float)(dVar39 - dVar40) / (float)(dVar39 + dVar40);
            fVar6 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x36) = fVar5;
            *(float *)(puVar16 + 0x35) = fVar5;
            *(float *)((int)puVar16 + 0x1ac) = fVar5;
            *(float *)((int)puVar16 + 0x1a4) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)(puVar16 + 0x35) = *(float *)(puVar16 + 0x35) * fVar6;
            *(float *)((int)puVar16 + 0x1ac) = *(float *)((int)puVar16 + 0x1ac) * fVar5;
            *(float *)(puVar16 + 0x36) = *(float *)(puVar16 + 0x36) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x1a4) = *(float *)((int)lVar24 + 0x194) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 0xec;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x1a4) = *(float *)((int)lVar24 + 0x1a4) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar24 = 2;
            do {
              iVar25 = (int)lVar32;
              iVar34 = (int)lVar31;
              lVar32 = lVar32 + 0x10;
              lVar31 = lVar31 + 0x10;
              dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar25 + 0x1a4)) +
                                *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                               *(float *)(iVar34 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar3 + fVar4);
          }
          dVar39 = 15.0;
          MB_SphericalToVector
                    (g_FrameTime * 15.0,(float)dVar42,(float)dVar38,
                     (float *)(puVar16 + 0x16));
          iVar25 = PlayMobySound(0,0,moby);
          FastDoubleToInt
                    ((double)(18.0 / (float)((double)g_FrameTime * dVar39)),iVar25);
          *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 0x14);
          *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar16 + 0x15);
          *(undefined4 *)(puVar16 + 10) = *(undefined4 *)(puVar16 + 0x16);
          *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x17);
          *(undefined4 *)((int)puVar16 + 0x44) = *(undefined4 *)((int)puVar16 + 0xa4);
          *(undefined4 *)((int)puVar16 + 0x4c) = *(undefined4 *)((int)puVar16 + 0xac);
          *(undefined4 *)((int)puVar16 + 0x54) = *(undefined4 *)((int)puVar16 + 0xb4);
          *(undefined4 *)((int)puVar16 + 0x5c) = *(undefined4 *)((int)puVar16 + 0xbc);
          M184_0001b100(lVar22);
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((moby->animationId != '\x05') && (moby->updateId == moby->animationId)) {
          puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimationFrame(moby,5,0,*(int *)((int)puVar16 + 0x22c),5);
        }
        moby->state = '\a';
      }
    }
    else {
      M294_003322b0(lVar22,&pMVar13->pos);
      dVar38 = (double)GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      Delt((float)dVar38,g_FrameTimeSq * 27.0,&(moby->pos).z);
      uVar36 = moby->animationId;
      if ((((uVar36 != '\x05') || ((moby->field43_0x70 & 2U) != 0)) && (uVar36 != '\0')) &&
         (moby->updateId == uVar36)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimationFrame(moby,0,0,*(int *)((int)puVar16 + 0x22c),5);
      }
      iVar25 = MB_randInt(9);
      fVar3 = (moby->rotation).z;
      if (iVar25 == 0) {
        moby->state = '\x05';
      }
      else {
        fVar4 = (moby->pos).y;
        fVar5 = (pMVar13->pos).y;
        fVar6 = (moby->pos).x;
        fVar8 = fVar4 - fVar5;
        fVar7 = (pMVar13->pos).x;
        fVar17 = fVar6 - fVar7;
        if ((SQRT(fVar17 * fVar17 + fVar8 * fVar8) <= 10.5) ||
           (*(char *)((int)pvVar9 + 0x242) != '\0')) {
          fVar7 = fVar7 - fVar6;
          fVar5 = fVar5 - fVar4;
          fVar6 = ABS(fVar7);
          fVar8 = ABS(fVar5);
          *(float *)((int)puVar16 + 300) = fVar7;
          *(float *)(puVar16 + 0x26) = fVar5;
          *(float *)((int)puVar16 + 0x134) = fVar6 - fVar8;
          fVar4 = 0.0;
          uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 300) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x134) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x26) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)((int)puVar16 + 300));
          if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
            fVar5 = fVar8;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar17 = ABS(*(float *)(puVar16 + 0x26));
          if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
            fVar17 = fVar6;
          }
          if (0.0 < fVar5) {
            lVar24 = uVar21 - 0x280;
            lVar31 = uVar21 - 0xfc;
            lVar29 = uVar21 - 0x10c;
            lVar37 = 2;
            fVar5 = (fVar17 - fVar5) / (fVar17 + fVar5);
            fVar6 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x32) = fVar5;
            *(float *)(puVar16 + 0x31) = fVar5;
            *(float *)((int)puVar16 + 0x18c) = fVar5;
            *(float *)((int)puVar16 + 0x184) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)(puVar16 + 0x31) = *(float *)(puVar16 + 0x31) * fVar6;
            *(float *)((int)puVar16 + 0x18c) = *(float *)((int)puVar16 + 0x18c) * fVar5;
            *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x184) = *(float *)((int)lVar24 + 0x174) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar29 = lVar29 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 0x10c;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x184) = *(float *)((int)lVar24 + 0x184) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar24 = 2;
            do {
              iVar25 = (int)lVar32;
              lVar32 = lVar32 + 0x10;
              iVar34 = (int)lVar31;
              lVar31 = lVar31 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar25 + 0x184) + *(float *)(iVar34 + 4) +
                      *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
          }
          dVar38 = (double)FastSubRots(fVar3,fVar4);
          if (dVar38 <= 0.48869219422340393) goto LAB_00334904;
        }
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 9) {
    M294_00331708(0,0,lVar22,(int)pvVar9 + 0x220);
    fVar3 = 0.7853982;
    fVar4 = *(float *)((int)pvVar9 + 0x23c) * 30.0;
    if ((fVar4 <= 0.7853982) && (fVar3 = fVar4, fVar4 < -0.7853982)) {
      fVar3 = -0.7853982;
    }
    *(float *)((int)pvVar9 + 0x188) = fVar3 * 0.7;
    *(float *)((int)pvVar9 + 0x208) = fVar3 * 0.4;
    fVar4 = (moby->pos).y - *(float *)((int)pvVar9 + 0x224);
    fVar3 = (moby->pos).x - *(float *)((int)pvVar9 + 0x220);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 1.0) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 10) {
    uVar26 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar26 & 0x60) != 0) {
      MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      MB_SpawnExplosionSparks2
                (0x3ff0000000000000,0x4024000000000000,lVar22,lVar22 + 0x10,&DAT_00332ba0,
                 0xffffffffffffffff);
      moby->field76_0xb4 = '\0';
      moby->field77_0xb5 = '\0';
      MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      pMVar13 = *(MobyInstance **)((int)moby->pVar + 0x248);
      if (pMVar13 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar13);
      }
      DeleteMoby(moby);
      return;
    }
    fVar12 = (moby->pos).z;
    uVar26 = (int)fVar12 >> 0x1f;
    if ((int)((uVar26 >> 1 ^ (uint)fVar12) - uVar26) < 0x40000000) {
      MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      moby->field76_0xb4 = '\0';
      moby->field77_0xb5 = '\0';
      MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      pMVar13 = *(MobyInstance **)((int)moby->pVar + 0x248);
      if (pMVar13 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar13);
      }
      DeleteMoby(moby);
      return;
    }
  }
LAB_00334904:
  if ((moby->enabled != '\0') ||
     ((*(int *)((int)pvVar9 + 0x248) != 0 &&
      (*(char *)(*(int *)((int)pvVar9 + 0x248) + 0x31) != '\0')))) {
    pvVar14 = moby->pVar;
    if (*(MobyInstance **)((int)pvVar14 + 0x248) == (MobyInstance *)0x0) {
      GetBonePosition(lVar22,1,uVar21 - 0x1d0);
      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 0x18);
      *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar16 + 0x19);
      *(undefined4 *)((int)puVar16 + 0x44) = *(undefined4 *)((int)puVar16 + 0xc4);
      *(undefined4 *)((int)puVar16 + 0x4c) = *(undefined4 *)((int)puVar16 + 0xcc);
      uVar27 = FUN_003a38c8(lVar22);
      *(undefined4 *)((int)pvVar14 + 0x248) = uVar27;
    }
    else {
      MB_AttachMobyToJoint(moby,*(MobyInstance **)((int)pvVar14 + 0x248),1);
      if ((moby->modeBits & DISABLED) == NONE) {
        iVar25 = *(int *)((int)pvVar14 + 0x248);
        uVar35 = *(ushort *)(iVar25 + 0x34) & 0xffbe;
      }
      else {
        iVar25 = *(int *)((int)pvVar14 + 0x248);
        uVar35 = *(ushort *)(iVar25 + 0x34) | 0x41;
      }
      *(ushort *)(iVar25 + 0x34) = uVar35;
    }
    if ((moby->modeBits & MIRROR) != NONE) {
      *(float *)((int)pvVar9 + 0x188) = -*(float *)((int)pvVar9 + 0x188);
      *(float *)((int)pvVar9 + 0x208) = -*(float *)((int)pvVar9 + 0x208);
    }
    dVar38 = 0.30000001192092896;
    MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar22,
               (int)pvVar9 + 0x120,5);
    MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * 0.024000000208616257),
               (double)(float)((double)DAT_0071f40c * dVar38),lVar22,(int)pvVar9 + 0x1a0,6);
  }
  return;
}


