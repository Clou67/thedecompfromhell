// game/update/moby1235.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x218488-0x219264
#include "game/update/moby1235.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1238.h"
#include "idol/fastfunc.h"

// 0x0218488 (0x14 bytes)
void M1235_00218488(void)

{
  DAT_00768764 = 0x10000;
  return;
}


// 0x02184d8 (0x468 bytes)
MobyInstance * M1235_002184d8(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  GPiece<16> local_40;
  GPiece<24> local_30;
  
  pvVar1 = param_1->pVar;
  if (worldUpdateTime == (worldUpdateTime / DAT_0076879c) * DAT_0076879c) {
    MB_randInt(3);
    iVar2 = *(int *)((int)pvVar1 + 0xb0);
    fVar3 = (param_1->pos).y - *(float *)(iVar2 + 0x14);
    fVar4 = (param_1->pos).x - *(float *)(iVar2 + 0x10);
    fVar3 = (20.0 - SQRT(fVar4 * fVar4 + fVar3 * fVar3)) * 0.05;
    dVar5 = (double)MB_randRangeFloat(-(fVar3 * 5.0 + 2.5),fVar3 * 5.0 + 2.5);
    FastWrapRot((float)(dVar5 * 0.01745329238474369),(param_1->rotation).z);
    FUN_0021a098((double)*(float *)((int)pvVar1 + 0xd8),local_40,local_30,param_1);
    param_1 = (MobyInstance *)PlayMobySound(0,0,param_1);
  }
  return param_1;
}


// 0x0218958 (0x3f0 bytes)
// inlined: FastAtan2 @0x218a9c
void M1235_00218958(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
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
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar19 = ZEXT48(pvVar7);
  dVar24 = 0.0;
  puVar8[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar8 + 0x74) = 0;
  iVar13 = MB_damage(param_1,0x330000,0);
  if (iVar13 != 0) {
    if ((*(int *)(iVar13 + 0x20) == 0) ||
       ((MVar5 = *(MOBY_OCLASSES *)(*(int *)(iVar13 + 0x20) + 0xa6), MVar5 != param_1->oClass &&
        (MVar5 != 0x4d6)))) {
      fVar4 = *(float *)(*(int *)(iVar13 + 0x20) + 0x10) - (param_1->pos).x;
      fVar1 = *(float *)(*(int *)(iVar13 + 0x20) + 0x14) - (param_1->pos).y;
      dVar23 = ABS((double)fVar4);
      dVar22 = ABS((double)fVar1);
      *(float *)(puVar8 + 0xf) = fVar4;
      *(float *)((int)puVar8 + 0x7c) = fVar1;
      *(float *)(puVar8 + 0x10) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1d) & 4;
      dVar21 = ABS((double)*(float *)(puVar8 + 0xf));
      if ((double)*(float *)(puVar8 + 0x10) - dVar24 < 0.0) {
        dVar21 = dVar22;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if ((double)*(float *)(puVar8 + 0x10) - dVar24 < 0.0) {
        dVar22 = dVar23;
      }
      fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar23 = dVar24;
      if (dVar24 < dVar21) {
        lVar17 = uVar11 - 0xc0;
        lVar16 = uVar11 - 0x4c;
        lVar14 = uVar11 - 0x3c;
        lVar20 = 2;
        fVar2 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar8 + 0x12) = fVar2;
        *(float *)(puVar8 + 0x11) = fVar2;
        *(float *)((int)puVar8 + 0x8c) = fVar2;
        *(float *)((int)puVar8 + 0x84) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar3;
        *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar2;
        *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x74) * fVar2 * fVar2;
          iVar9 = (int)lVar16;
          lVar17 = lVar17 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
          lVar14 = lVar14 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = uVar11 - 0x4c;
        pfVar18 = (float *)&DAT_007358e0;
        lVar20 = 4;
        lVar14 = lVar17;
        lVar16 = lVar12;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x84) = *(float *)((int)lVar16 + 0x84) * fVar2;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
          lVar14 = lVar14 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar14 = 2;
        dVar21 = dVar24;
        do {
          iVar9 = (int)lVar12;
          iVar10 = (int)lVar17;
          lVar12 = lVar12 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar9 + 0x84)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar23 = (double)((float)(dVar21 + 0.7853981852531433) * fVar4 + fVar1);
      }
      dVar21 = (double)FastSubRots((float)dVar23,*(float *)((int)pvVar7 + 0xc4));
      if (dVar21 < 1.5707963705062866) {
        iVar13 = 0;
      }
    }
    else {
      iVar13 = 0;
    }
  }
  iVar13 = MB_HandleDamage
                     (param_1,iVar13,uVar19 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
  if ((*(int *)(puVar8 + 0xe) == 1) || (param_1->state == '\x04')) goto LAB_00218cc0;
  MVar6 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar8 + 0x74);
  *(float *)((int)pvVar7 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar24) {
LAB_00218c7c:
    param_1->state = '\x04';
    param_1->modeBits =
         MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar13 < 3) {
    if ((-1 < iVar13) && (0 < iVar13)) goto LAB_00218c7c;
  }
  else if (iVar13 < 0xb) {
    if (iVar13 < 9) {
      *(undefined1 *)((int)pvVar7 + 0x67) = 200;
    }
    else {
      *(undefined1 *)((int)pvVar7 + 0x67) = 100;
    }
  }
  MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
LAB_00218cc0:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  fVar4 = 20.0;
  if (param_1->state == '\x03') {
    fVar4 = 22.0;
  }
  MB_getTarget((double)fVar4,param_1,param_1->state,uVar19 + 0x70);
  if (*(int *)((int)pvVar7 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x0218d78 (0x4ec bytes)
// inlined: FastAtan2 @0x21902c
/* Moby 1235 */

double UpdateMoby_1235(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  MobyInstance *pMVar15;
  longlong lVar14;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x24] = in_LR;
  puVar9[0x21] = unaff_r31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  pvVar7 = moby->pVar;
  dVar22 = (double)M1235_00218958();
  uVar1 = moby->state;
  iVar8 = *(int *)((int)pvVar7 + 0xb0);
  if (uVar1 == '\x04') {
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar13,(int)pvVar7 + 0x40,lVar13 + 0x10,1,0xffffffffffffffff,5,2,4
              );
    dVar22 = (double)DeleteMoby(moby);
  }
  else if (uVar1 == '\x03') {
    fVar24 = (moby->pos).y - *(float *)(iVar8 + 0x14);
    fVar3 = (moby->pos).x - *(float *)(iVar8 + 0x10);
    dVar22 = (double)SQRT(fVar3 * fVar3 + fVar24 * fVar24);
    if (dVar22 <= 22.0) {
      Delt(20.0,g_FrameTime * 6.0,(float *)((int)pvVar7 + 0xd8));
      fVar24 = *(float *)(iVar8 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar8 + 0x14) - (moby->pos).y;
      fVar4 = ABS(fVar24);
      fVar2 = ABS(fVar3);
      *(float *)(puVar9 + 0x18) = fVar24;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      *(float *)(puVar9 + 0x19) = fVar4 - fVar2;
      dVar22 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
      fVar24 = *(float *)((int)pvVar7 + 0xc4);
      fVar3 = ABS(*(float *)(puVar9 + 0x18));
      if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
        fVar3 = fVar2;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0xc4));
      if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
        fVar11 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar19 = uVar12 - 0x100;
        lVar16 = uVar12 - 0x34;
        lVar18 = uVar12 - 0x44;
        lVar21 = 2;
        fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar9 + 0x1b) = fVar3;
        *(float *)(puVar9 + 0x1a) = fVar3;
        *(float *)((int)puVar9 + 0xd4) = fVar3;
        *(float *)((int)puVar9 + 0xcc) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar4;
        *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3;
        *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar19 + 0xcc) = *(float *)((int)lVar19 + 0xbc) * fVar3 * fVar3;
          iVar8 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar19 = uVar12 - 0x44;
        lVar21 = 4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar19;
        lVar18 = lVar14;
        do {
          fVar3 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0xcc) = *(float *)((int)lVar18 + 0xcc) * fVar3;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        do {
          iVar8 = (int)lVar14;
          iVar10 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0xcc)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar23 = (double)FastDiffRots(dVar22,(double)fVar24);
      dVar22 = 1.3089969158172607;
      if ((dVar23 <= 1.3089969158172607) && (dVar22 = dVar23, dVar23 < -1.3089969158172607)) {
        dVar22 = -1.3089969158172607;
      }
      dVar22 = (double)FastWrapRot((float)dVar22,*(float *)((int)pvVar7 + 0xc4));
      fVar24 = OrganicDeltAng
                         ((float)dVar22,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                          g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar7 + 0xd0));
      dVar22 = (double)M1235_002184d8((double)fVar24,lVar13);
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x01') {
    fVar24 = (moby->pos).y - *(float *)(iVar8 + 0x14);
    fVar3 = (moby->pos).x - *(float *)(iVar8 + 0x10);
    if (SQRT(fVar3 * fVar3 + fVar24 * fVar24) < 20.0) {
      *(undefined4 *)((int)pvVar7 + 0xd8) = 0x41000000;
      moby->state = '\x03';
    }
    fVar24 = OrganicDeltAng
                       (*(float *)((int)pvVar7 + 0xc4),g_FrameTimeSq * 12.566371,
                        g_FrameTimeSq * 12.566371,g_FrameTime * 12.566371,
                        &(moby->rotation).z,0x720000,(float *)((int)pvVar7 + 0xd0));
    dVar22 = (double)fVar24;
  }
  else if (uVar1 == '\0') {
    pMVar15 = CreateMoby(0x4d5);
    *(MobyInstance **)((int)pvVar7 + 0xcc) = pMVar15;
    pMVar15->drawDistance = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar7 + 0xcc) + 0x31) = 1;
    *(undefined8 *)(*(int *)((int)pvVar7 + 0xcc) + 0x38) = *(undefined8 *)&moby->color;
    *(MobyModeBit *)(*(int *)((int)pvVar7 + 0xcc) + 0x34) = moby->modeBits;
    iVar8 = *(int *)((int)pvVar7 + 0xcc);
    *(f32 *)(iVar8 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar8 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar8 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar8 + 0x1c) = (moby->pos).w;
    iVar8 = *(int *)((int)pvVar7 + 0xcc);
    *(f32 *)(iVar8 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar8 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar8 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar8 + 0x4c) = (moby->rotation).w;
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0xcc));
    MVar6 = moby->modeBits;
    fVar24 = (moby->rotation).z;
    dVar22 = (double)fVar24;
    *(float *)((int)pvVar7 + 0xc4) = fVar24;
    moby->state = '\x01';
    moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
  }
  return dVar22;
}


