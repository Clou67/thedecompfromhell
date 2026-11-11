// game/update/moby289.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x32dbe0-0x32e8fc
#include "game/update/moby289.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1238.h"
#include "idol/fastfunc.h"

// 0x032dbe0 (0x14 bytes)
void M289_0032dbe0(void)

{
  DAT_008007c8 = 0x10000;
  return;
}


// 0x032dc20 (0xaa8 bytes)
// inlined: FastAtan2 @0x32e158, FastAtan2 @0x32e324
/* Moby 289 */

void UpdateMoby_289(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  longlong lVar15;
  MobyInstance *pMVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x170;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x30] = in_LR;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x27] = unaff_r31;
  puVar11[0x26] = unaff_r30;
  puVar11[0x25] = unaff_r29;
  pvVar9 = moby->pVar;
  iVar16 = MB_damage(moby,0xffffffffffffffff,0);
  if (iVar16 != 0) {
    if (*(MobyInstance **)((int)pvVar9 + 0x4c) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x4c));
    }
    if (*(MobyInstance **)((int)pvVar9 + 0x50) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x50));
    }
    puVar11[0x12] = 0xffffffffffffffff;
    puVar11[0x14] = 1;
    puVar11[0x15] = 1;
    puVar11[0x16] = 0xffffffffffffffff;
    puVar11[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,moby,(int)pvVar9 + 0x30,0,1,0xffffffffffffffff,10,3,0x10);
    DeleteMoby(moby);
  }
  bVar3 = moby->state;
  if (bVar3 == 0) {
    iVar16 = *(int *)((int)pvVar9 + 0x14);
    (moby->rotation).y = 0.0;
    (moby->rotation).x = 0.0;
    *(undefined4 *)((int)pvVar9 + 0x3c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
    *(undefined4 *)((int)pvVar9 + 0x34) = 0;
    *(undefined4 *)((int)pvVar9 + 0x30) = 0;
    pSVar10 = Splines[iVar16];
    *(undefined4 *)((int)pvVar9 + 0x44) = 0;
    *(Spline **)((int)pvVar9 + 0x10) = pSVar10;
    moby->state = '\x01';
    if (moby->animationId != '\x02') {
      MB_SetAnimation(moby,2,0,0);
    }
  }
  else if (bVar3 < 2) {
    if (*(int *)((int)pvVar9 + 0x44) == 0) {
      iVar16 = *(int *)((int)pvVar9 + 0x10);
      fVar4 = *(float *)(iVar16 + 0x10);
      fVar5 = *(float *)(iVar16 + 0x14);
      fVar8 = *(float *)(iVar16 + 0x18);
      fVar6 = *(float *)(iVar16 + 0x1c);
    }
    else {
      pfVar19 = (float *)(*(int **)((int)pvVar9 + 0x10) + **(int **)((int)pvVar9 + 0x10) * 4);
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
      fVar8 = pfVar19[2];
      fVar6 = pfVar19[3];
    }
    dVar29 = (double)fVar6;
    fVar5 = fVar5 - (moby->pos).y;
    fVar4 = fVar4 - (moby->pos).x;
    fVar8 = fVar8 - (moby->pos).z;
    if (SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5) <= 0.1) {
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,3);
      }
      *(uint *)((int)pvVar9 + 0x44) = (*(undefined4 *)((int)pvVar9 + 0x44) == 0);
    }
    else {
      dVar27 = (double)(DAT_008007f8 * fVar5);
      dVar30 = (double)(DAT_008007f8 * fVar4);
      dVar28 = (double)(DAT_008007f8 * fVar8);
      fVar4 = SQRT(*(float *)((int)pvVar9 + 0x38) * *(float *)((int)pvVar9 + 0x38) +
                   *(float *)((int)pvVar9 + 0x30) * *(float *)((int)pvVar9 + 0x30) +
                   *(float *)((int)pvVar9 + 0x34) * *(float *)((int)pvVar9 + 0x34));
      fVar5 = SQRT((float)(dVar28 * dVar28 +
                          (double)(float)(dVar30 * dVar30 + (double)(float)(dVar27 * dVar27))));
      dVar25 = (double)fVar5;
      if (dVar25 <= (double)fVar4) {
        *(float *)(puVar11 + 0x18) = fVar5;
        dVar26 = dVar25;
        dVar24 = dVar28;
      }
      else {
        *(float *)(puVar11 + 0x18) = fVar4;
        Delt(DAT_008007fc * g_FrameTime,DAT_008007f0 * DAT_0071f418,
                       (float *)(puVar11 + 0x18));
        dVar26 = (double)*(float *)(puVar11 + 0x18);
        dVar23 = (double)(float)(dVar26 / dVar25);
        dVar24 = 0.0;
        dVar1 = dVar30 * dVar23;
        dVar2 = dVar27 * dVar23;
        dVar30 = dVar24;
        if (0.0 - dVar25 < 0.0) {
          dVar30 = (double)(float)dVar1;
        }
        dVar27 = dVar24;
        if (0.0 - dVar25 < 0.0) {
          dVar27 = (double)(float)dVar2;
        }
        if (0.0 - dVar25 < 0.0) {
          dVar24 = (double)(float)(dVar28 * dVar23);
        }
        if (dVar25 - 0.0 < 0.0) {
          dVar30 = (double)(float)dVar1;
        }
        if (dVar25 - 0.0 < 0.0) {
          dVar27 = (double)(float)dVar2;
        }
        if (dVar25 - 0.0 < 0.0) {
          dVar24 = (double)(float)(dVar28 * dVar23);
        }
      }
      *(float *)((int)pvVar9 + 0x30) = (float)dVar30;
      *(float *)((int)pvVar9 + 0x34) = (float)dVar27;
      *(float *)((int)pvVar9 + 0x3c) = (float)dVar29;
      *(float *)((int)pvVar9 + 0x38) = (float)dVar24;
      if (*(int *)((int)pvVar9 + 0x4c) != 0) {
        *(float *)(*(int *)((int)pvVar9 + 0x4c) + 0x58) =
             (float)(dVar26 / (double)(g_FrameTime * DAT_008007ec));
        dVar26 = (double)*(float *)(puVar11 + 0x18);
      }
      if (*(int *)((int)pvVar9 + 0x50) != 0) {
        *(float *)(*(int *)((int)pvVar9 + 0x50) + 0x58) =
             (float)(dVar26 / (double)(g_FrameTime * DAT_008007ec));
      }
    }
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar9 + 0x30);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar9 + 0x34);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar9 + 0x38);
  }
  else if (bVar3 < 3) {
    if (*(int *)((int)pvVar9 + 0x44) == 0) {
      fVar4 = *(float *)(*(int *)((int)pvVar9 + 0x10) + 0x10);
      fVar5 = *(float *)(*(int *)((int)pvVar9 + 0x10) + 0x14);
    }
    else {
      pfVar19 = (float *)(*(int **)((int)pvVar9 + 0x10) + **(int **)((int)pvVar9 + 0x10) * 4);
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
    }
    dVar30 = (double)fVar4;
    dVar29 = (double)fVar5;
    if (*(int *)((int)pvVar9 + 0x4c) != 0) {
      *(float *)(*(int *)((int)pvVar9 + 0x4c) + 0x58) =
           -*(float *)((int)pvVar9 + 0x48) / (g_FrameTime * DAT_008007ec * 2.0);
    }
    if (*(int *)((int)pvVar9 + 0x50) != 0) {
      *(float *)(*(int *)((int)pvVar9 + 0x50) + 0x58) =
           *(float *)((int)pvVar9 + 0x48) / (g_FrameTime * DAT_008007ec * 2.0);
    }
    fVar4 = (float)(dVar30 - (double)(moby->pos).x);
    fVar5 = (float)(dVar29 - (double)(moby->pos).y);
    fVar6 = ABS(fVar4);
    fVar8 = ABS(fVar5);
    *(float *)(puVar11 + 0x1a) = fVar4;
    *(float *)((int)puVar11 + 0xd4) = fVar5;
    *(float *)(puVar11 + 0x1b) = fVar6 - fVar8;
    dVar27 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar11 + 0x1a));
    if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar11 + 0xd4));
    if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    dVar28 = 0.7853981852531433;
    dVar25 = dVar27;
    if (0.0 < fVar4) {
      lVar14 = uVar13 - 0x160;
      lVar18 = uVar13 - 0x74;
      lVar21 = uVar13 - 100;
      lVar22 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x21) = fVar4;
      *(float *)(puVar11 + 0x20) = fVar4;
      *(float *)((int)puVar11 + 0x104) = fVar4;
      *(float *)((int)puVar11 + 0xfc) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar6;
      *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar4;
      *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar14 + 0xfc) = *(float *)((int)lVar14 + 0xec) * fVar4 * fVar4;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar21;
      do {
        fVar4 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xfc) = *(float *)((int)lVar14 + 0xfc) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      lVar14 = lVar15;
      do {
        iVar16 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xfc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar25,0x3fc99999a0000000,0x3fe0000000000000,(double)DAT_008007f4,moby,0x800000,
               (int)pvVar9 + 0x48);
    fVar4 = (float)(dVar30 - (double)(moby->pos).x);
    fVar5 = (float)(dVar29 - (double)(moby->pos).y);
    dVar30 = ABS((double)fVar4);
    dVar25 = ABS((double)fVar5);
    *(float *)((int)puVar11 + 0xc4) = fVar4;
    *(float *)(puVar11 + 0x19) = fVar5;
    fVar4 = (moby->rotation).z;
    *(float *)((int)puVar11 + 0xcc) = (float)(dVar30 - dVar25);
    uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xcc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1d) & 4;
    dVar29 = ABS((double)*(float *)((int)puVar11 + 0xc4));
    if ((double)*(float *)((int)puVar11 + 0xcc) - dVar27 < 0.0) {
      dVar29 = dVar25;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)(puVar11 + 0x19));
    if ((double)*(float *)((int)puVar11 + 0xcc) - dVar27 < 0.0) {
      dVar25 = dVar30;
    }
    fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar29) {
      lVar14 = uVar13 - 0x160;
      lVar21 = uVar13 - 0x84;
      lVar18 = uVar13 - 0x94;
      lVar22 = 2;
      fVar6 = (float)(dVar25 - dVar29) / (float)(dVar25 + dVar29);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1d) = fVar6;
      *(float *)(puVar11 + 0x1c) = fVar6;
      *(float *)((int)puVar11 + 0xe4) = fVar6;
      *(float *)((int)puVar11 + 0xdc) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar7;
      *(float *)((int)puVar11 + 0xe4) = *(float *)((int)puVar11 + 0xe4) * fVar6;
      *(float *)(puVar11 + 0x1d) = *(float *)(puVar11 + 0x1d) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 0xdc) = *(float *)((int)lVar14 + 0xcc) * fVar6 * fVar6;
        iVar16 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x94;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar21;
      do {
        fVar6 = *pfVar19;
        fVar7 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xdc) = *(float *)((int)lVar14 + 0xdc) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar12 = (int)lVar21;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0xdc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar8);
    }
    if ((double)fVar4 == dVar27) {
      *(undefined4 *)((int)pvVar9 + 0x3c) = 0;
      *(undefined4 *)((int)pvVar9 + 0x38) = 0;
      *(undefined4 *)((int)pvVar9 + 0x34) = 0;
      *(undefined4 *)((int)pvVar9 + 0x30) = 0;
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        MB_SetAnimation(moby,2,0,3);
      }
    }
  }
  iVar16 = *(int *)((int)pvVar9 + 0x4c);
  if (iVar16 == 0) {
    pMVar17 = CreateMoby(QWARKS_STARFIGHTER_PART_018D);
    *(MobyInstance **)((int)pvVar9 + 0x4c) = pMVar17;
    pMVar17->updateDistance = '@';
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x4c) + 0x32) = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x4c) + 0x31) = 1;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x4c) + 0x20) = 1;
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x4c) + 0x34) = 0;
    *(undefined8 *)(*(int *)((int)pvVar9 + 0x4c) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    iVar16 = *(int *)((int)pvVar9 + 0x4c);
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x4c);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
    MB_SetAnimation(*(undefined4 *)((int)pvVar9 + 0x4c),2,0,1);
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x4c));
  }
  else {
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x4c);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
  }
  iVar16 = *(int *)((int)pvVar9 + 0x50);
  if (iVar16 == 0) {
    pMVar17 = CreateMoby(QWARKS_STARFIGHTER_PART_018E);
    *(MobyInstance **)((int)pvVar9 + 0x50) = pMVar17;
    pMVar17->updateDistance = '@';
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x50) + 0x32) = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x50) + 0x31) = 1;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x50) + 0x20) = 1;
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x50) + 0x34) = 0;
    *(undefined8 *)(*(int *)((int)pvVar9 + 0x50) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    iVar16 = *(int *)((int)pvVar9 + 0x50);
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x50);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
    MB_SetAnimation(*(undefined4 *)((int)pvVar9 + 0x50),2,0,1);
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x50));
  }
  else {
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x50);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
  }
  return;
}


// 0x032e6c8 (0x14 bytes)
void M289_0032e6c8(void)

{
  DAT_0080084c = 0x10000;
  return;
}


// 0x032e710 (0x1ec bytes)
void M29_0032e710(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  GPiece<16> local_40;
  GPiece<16> local_30;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (worldUpdateTime == (worldUpdateTime / DAT_00800874) * DAT_00800874) {
    GetBonePosition(param_1,0,local_40);
    iVar2 = *(int *)(iVar1 + 0x40);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar2 + 0x14);
    fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x10);
    fVar3 = (20.0 - SQRT(fVar4 * fVar4 + fVar3 * fVar3)) * 0.05;
    dVar5 = (double)MB_randRangeFloat(-(fVar3 * 5.0 + 2.5),fVar3 * 5.0 + 2.5);
    FastWrapRot((float)(dVar5 * 0.01745329238474369),*(float *)(param_1 + 0x48));
    FUN_0021a098((double)*(float *)(iVar1 + 0x68),local_40,local_30,param_1);
  }
  return;
}


