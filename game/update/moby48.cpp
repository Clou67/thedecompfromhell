// game/update/moby48.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x39d1c8-0x39e8f4
#include "game/update/moby48.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby479.h"
#include "game/update/moby491.h"
#include "idol/fastfunc.h"

// 0x039d1c8 (0x140 bytes)
void M479_0039d1c8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  ushort *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    iVar2 = *(int *)(param_1 + 0x78);
    dVar6 = (double)MB_randRangeFloat((float)(longlong)param_2,(float)(longlong)param_3);
    uVar4 = FastDoubleToInt((double)(float)(dVar6 * (double)animationSpeed));
    *(undefined4 *)(iVar2 + 0x13c) = uVar4;
  }
  else {
    puVar5 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar6 = (double)(longlong)param_2;
    dVar8 = (double)(longlong)param_3;
    do {
      if (g_MobyInstance[*puVar5 & 0x7fff].state < 0x80) {
        pvVar3 = g_MobyInstance[*puVar5 & 0x7fff].pVar;
        dVar7 = (double)MB_randRangeFloat((float)dVar6,(float)dVar8);
        uVar4 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar3 + 0x13c) = uVar4;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x039d328 (0x880 bytes)
// inlined: FastAtan2 @0x39d640, FastAtan2 @0x39d8d0
void M48_0039d328(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar12;
  longlong lVar13;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar21;
  ulonglong unaff_r28;
  ushort *puVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x120;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar9[0x1c] = unaff_r27;
  pvVar7 = param_1->pVar;
  uVar21 = ZEXT48(pvVar7);
  param_1->scale = pMVar6->gScale * DAT_00843010;
  dVar27 = 0.0;
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1e] = unaff_r29;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x1b] = unaff_r26;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar14 = MB_damage(param_1,0x330000,0);
  iVar15 = MB_HandleDamage
                     (param_1,iVar14,uVar21 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\b')) {
    if (param_1->group == 0xff) {
      pvVar8 = param_1->pVar;
      dVar24 = (double)MB_randRangeFloat(300.0,360.0);
      uVar16 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar8 + 0x13c) = uVar16;
    }
    else {
      puVar22 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
      dVar25 = 300.0;
      dVar24 = 360.0;
      do {
        if (g_MobyInstance[*puVar22 & 0x7fff].state < 0x80) {
          pvVar8 = g_MobyInstance[*puVar22 & 0x7fff].pVar;
          dVar26 = (double)MB_randRangeFloat((float)dVar25,(float)dVar24);
          uVar16 = FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x13c) = uVar16;
        }
        uVar5 = *puVar22;
        puVar22 = puVar22 + 1;
      } while (-1 < (short)uVar5);
    }
    fVar4 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar27) {
      iVar15 = 1;
    }
    uVar16 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f000000;
    fVar1 = DAT_00843014;
    fVar4 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar7 + 0x90) = uVar16;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 9;
    *(float *)((int)pvVar7 + 0x80) = fVar1 * fVar4;
    fVar4 = g_FrameTime;
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        fVar4 = DAT_00843014 * g_FrameTimeSq;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x80) = fVar4;
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar7 + 0x88) = DAT_00843024 * g_FrameTime;
        fVar1 = DAT_00843020;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar7 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar4);
        dVar26 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar1;
        *(float *)(puVar9 + 0x11) = (float)(dVar25 - dVar26);
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar24 = dVar26;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x88;
          lVar20 = uVar11 - 0x78;
          lVar23 = 2;
          fVar2 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xa4) = fVar2;
          *(float *)((int)puVar9 + 0x9c) = fVar2;
          *(float *)(puVar9 + 0x14) = fVar2;
          *(float *)(puVar9 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar2;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar2 * fVar2;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x88;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar2 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar2;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar12 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar10 = (int)lVar20;
            lVar13 = lVar13 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x98)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar27;
        uVar16 = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar16;
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar16;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar11 - 0xa4,uVar21 + 0x88,uVar21 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar21 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      if (iVar15 < 9) {
        *(float *)((int)pvVar7 + 0x88) = DAT_0084301c * g_FrameTime;
        fVar1 = DAT_00843018;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar7 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar4);
        dVar26 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x8c) = fVar4;
        *(float *)(puVar9 + 0x12) = fVar1;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar25 - dVar26);
        uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar24 = dVar26;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar26 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x68;
          lVar20 = uVar11 - 0x58;
          lVar23 = 2;
          fVar2 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xc4) = fVar2;
          *(float *)((int)puVar9 + 0xbc) = fVar2;
          *(float *)(puVar9 + 0x18) = fVar2;
          *(float *)(puVar9 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar2;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar2 * fVar2;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x68;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar2 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar2;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar12 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar10 = (int)lVar20;
            lVar13 = lVar13 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xb8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar27;
        uVar16 = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar16;
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar16;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar11 - 0xa8,uVar21 + 0x88,uVar21 + 0x8c);
        MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar21 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  FastDecTimerS32(uVar21 + 0x13c);
  iVar14 = *(int *)((int)pvVar7 + 0x13c);
  if (*(int *)((int)pvVar7 + 0x38) != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,240.0);
    iVar14 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(int *)((int)pvVar7 + 0x13c) = iVar14;
  }
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  if (iVar14 == 0) {
    iVar14 = MB_getTarget((double)*(float *)((int)pvVar7 + 0x124),param_1,0,uVar21 + 0xd0)
    ;
    if ((iVar14 != 2) &&
       (fVar4 = (param_1->pos).y - *(float *)(*(int *)((int)pvVar7 + 0x110) + 0x14),
       fVar1 = (param_1->pos).x - *(float *)(*(int *)((int)pvVar7 + 0x110) + 0x10),
       *(float *)((int)pvVar7 + 0x124) < SQRT(fVar1 * fVar1 + fVar4 * fVar4))) {
      *(undefined4 *)((int)pvVar7 + 0x114) = 2;
    }
  }
  else {
    MB_getTarget(0x4000000000000000,param_1,&DAT_0039d308,uVar21 + 0xd0);
  }
  if (*(int *)((int)pvVar7 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x039dbd0 (0xd24 bytes)
// inlined: FastAtan2 @0x39df34, FastAtan2 @0x39e194, FastAtan2 @0x39e560
/* Moby 48 */

void UpdateMoby_48(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
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
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar23 = uVar17 - 0x180;
  puVar9 = (ulonglong *)lVar23;
  *puVar9 = uVar17;
  puVar9[0x32] = in_LR;
  puVar9[0x2b] = in_f27;
  puVar9[0x2c] = in_f28;
  puVar9[0x2d] = in_f29;
  puVar9[0x2e] = in_f30;
  puVar9[0x2f] = in_f31;
  puVar9[0x2a] = unaff_r31;
  puVar9[0x29] = unaff_r30;
  puVar9[0x28] = unaff_r29;
  pvVar7 = moby->pVar;
  M48_0039d328();
  iVar18 = *(int *)((int)pvVar7 + 0x110);
  bVar1 = moby->state;
  dVar28 = (double)(moby->pos).x;
  dVar29 = (double)(moby->pos).y;
  fVar2 = DAT_00969dac;
  fVar4 = DAT_00969da8;
  fVar5 = DAT_00969da4;
  fVar3 = DAT_00969da0;
  if (*(short *)(iVar18 + 0xa6) != 0) {
    fVar2 = *(float *)(iVar18 + 0x1c);
    fVar4 = *(float *)(iVar18 + 0x18);
    fVar5 = *(float *)(iVar18 + 0x14);
    fVar3 = *(float *)(iVar18 + 0x10);
  }
  dVar33 = (double)fVar3;
  dVar32 = (double)fVar5;
  dVar31 = (double)fVar4;
  dVar30 = (double)fVar2;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      *(undefined1 *)((int)pvVar7 + 0x28) = 2;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x40400000;
      *(undefined2 *)((int)pvVar7 + 0x24) = 3;
      pSVar8 = Splines[*(int *)((int)pvVar7 + 0x120)];
      *(float *)(puVar9 + 0xe) = pSVar8->points[0].x;
      *(float *)((int)puVar9 + 0x74) = pSVar8->points[0].y;
      fVar2 = pSVar8->points[0].z;
      dVar29 = (double)fVar2;
      *(float *)(puVar9 + 0xf) = fVar2;
      *(float *)((int)puVar9 + 0x7c) = pSVar8->points[0].w;
      dVar28 = (double)GetGroundZ(0x3fe0000000000000,uVar17 - 0x110,0);
      if ((double)(float)(dVar28 + 2.0) < dVar29) {
        *(undefined1 *)((int)pvVar7 + 0x12f) = 1;
      }
      if (*(int *)((int)pvVar7 + 0x128) == 0) {
        moby->state = '\x02';
      }
      else {
        moby->state = '\t';
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else if (bVar1 < 2) {
      dVar28 = (double)M48_0039cdf0
                                 (moby,ZEXT48(Splines[*(int *)((int)pvVar7 + 0x120)]) + 0x10,1);
      if ((dVar28 < 1.0) && (moby->state = '\x02', moby->animationId != '\0')) {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
    else if (bVar1 < 3) {
      FastDecTimerS32((int)pvVar7 + 0x138);
      if (((*(int *)((int)pvVar7 + 0x114) != 2) && (*(int *)((int)pvVar7 + 0x138) == 0)) &&
         (moby->state = '\x03', moby->animationId != '\x04')) {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
    else {
      fVar4 = ABS((float)(dVar33 - dVar28));
      fVar3 = ABS((float)(dVar32 - dVar29));
      *(float *)(puVar9 + 0x17) = (float)(dVar33 - dVar28);
      *(float *)((int)puVar9 + 0xbc) = (float)(dVar32 - dVar29);
      *(float *)(puVar9 + 0x18) = fVar4 - fVar3;
      fVar2 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar9 + 0x17));
      if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar9 + 0xbc));
      if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      if (0.0 < fVar5) {
        lVar22 = uVar17 - 0x170;
        lVar24 = uVar17 - 0x7c;
        lVar26 = uVar17 - 0x6c;
        lVar27 = 2;
        fVar4 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x22) = fVar4;
        *(float *)(puVar9 + 0x21) = fVar4;
        *(float *)((int)puVar9 + 0x10c) = fVar4;
        *(float *)((int)puVar9 + 0x104) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar5;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0xf4) * fVar4 * fVar4;
          iVar18 = (int)lVar24;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar17 - 0x7c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0x104) * fVar4;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        do {
          iVar18 = (int)lVar23;
          iVar11 = (int)lVar26;
          lVar23 = lVar23 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar18 + 0x104) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      OrganicDeltAng
                (fVar2,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x39dba8,
                 (float *)((int)pvVar7 + 0x134));
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined1 *)((int)pvVar7 + 0x12e) = 0;
        moby->state = '\x04';
        if (moby->animationId != '\x05') {
          puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar9 + 300));
        }
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      fVar5 = ABS((float)(dVar33 - dVar28));
      fVar4 = ABS((float)(dVar32 - dVar29));
      *(float *)((int)puVar9 + 0xac) = (float)(dVar33 - dVar28);
      *(float *)(puVar9 + 0x16) = (float)(dVar32 - dVar29);
      *(float *)((int)puVar9 + 0xb4) = fVar5 - fVar4;
      dVar28 = 0.0;
      uVar21 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar9 + 0xac));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      dVar29 = dVar28;
      if (0.0 < fVar2) {
        lVar22 = uVar17 - 0x170;
        lVar24 = uVar17 - 0x9c;
        lVar26 = uVar17 - 0x8c;
        lVar27 = 2;
        fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar9 + 0x1e) = fVar2;
        *(float *)(puVar9 + 0x1d) = fVar2;
        *(float *)((int)puVar9 + 0xec) = fVar2;
        *(float *)((int)puVar9 + 0xe4) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar5;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar2;
        *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xd4) * fVar2 * fVar2;
          iVar18 = (int)lVar24;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar2 * fVar2;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar17 - 0x9c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar26;
        do {
          fVar2 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xe4) * fVar2;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        do {
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar11 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0xe4)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
      }
      OrganicDeltAng
                ((float)dVar29,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar7 + 0x134));
      iVar18 = MB_MayaFrameTrigger(5.0,moby);
      if (iVar18 == 0) {
        if (((2 < *(byte *)((int)pvVar7 + 0x12e)) && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->state = '\x05', moby->animationId != '\x06')) {
          puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar9 + 300));
        }
      }
      else {
        *(char *)((int)pvVar7 + 0x12e) = *(char *)((int)pvVar7 + 0x12e) + '\x01';
        fVar2 = (moby->transform).v1.y * DAT_00843034;
        fVar4 = (moby->transform).v1.x * DAT_00843034;
        fVar3 = (moby->transform).v0.y * DAT_00843030;
        fVar5 = (moby->transform).v1.z * DAT_00843034;
        fVar6 = (moby->transform).v0.x * DAT_00843030;
        fVar12 = (moby->transform).v2.y * DAT_00843038;
        fVar10 = (moby->transform).v0.z * DAT_00843030;
        fVar13 = (moby->transform).v2.x * DAT_00843038;
        fVar14 = (moby->transform).v2.z * DAT_00843038;
        *(float *)((int)puVar9 + 0x8c) =
             (moby->transform).v2.w * DAT_00843038 +
             (moby->transform).v0.w * DAT_00843030 + (moby->transform).v1.w * DAT_00843034 +
             DAT_0084303c;
        fVar16 = DAT_00843040;
        fVar15 = g_FrameTime;
        fVar2 = fVar12 + fVar3 + fVar2 + (moby->pos).y;
        fVar6 = fVar13 + fVar6 + fVar4 + (moby->pos).x;
        fVar10 = fVar14 + fVar10 + fVar5 + (moby->pos).z;
        fVar4 = (float)(dVar32 - (double)fVar2);
        fVar5 = (float)(dVar33 - (double)fVar6);
        fVar3 = (float)(dVar31 - (double)fVar10);
        *(float *)(puVar9 + 0x10) = fVar6;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)(puVar9 + 0x11) = fVar10;
        *(float *)(puVar9 + 0x12) = fVar5;
        *(float *)((int)puVar9 + 0x94) = fVar4;
        *(float *)(puVar9 + 0x13) = fVar3;
        *(float *)((int)puVar9 + 0x9c) = (float)dVar30;
        dVar30 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar2 = (float)((double)(fVar16 * fVar15) / dVar30);
        dVar29 = dVar28;
        if (dVar28 - dVar30 < 0.0) {
          dVar29 = (double)(fVar5 * fVar2);
        }
        dVar31 = dVar28;
        if (dVar28 - dVar30 < 0.0) {
          dVar31 = (double)(fVar4 * fVar2);
        }
        dVar32 = dVar28;
        if (dVar28 - dVar30 < 0.0) {
          dVar32 = (double)(fVar3 * fVar2);
        }
        if (dVar30 - dVar28 < 0.0) {
          dVar29 = (double)(fVar5 * fVar2);
        }
        if (dVar30 - dVar28 < 0.0) {
          dVar31 = (double)(fVar4 * fVar2);
        }
        if (dVar30 - dVar28 < 0.0) {
          dVar32 = (double)(fVar3 * fVar2);
        }
        *(float *)(puVar9 + 0x12) = (float)dVar29;
        *(float *)((int)puVar9 + 0x94) = (float)dVar31;
        *(float *)(puVar9 + 0x13) = (float)dVar32;
        FUN_003a01e0(moby,uVar17 - 0xf0,uVar17 - 0x100);
      }
    }
    else if (bVar1 < 6) {
      fVar4 = ABS((float)(dVar33 - dVar28));
      fVar3 = ABS((float)(dVar32 - dVar29));
      *(float *)(puVar9 + 0x14) = (float)(dVar33 - dVar28);
      *(float *)((int)puVar9 + 0xa4) = (float)(dVar32 - dVar29);
      *(float *)(puVar9 + 0x15) = fVar4 - fVar3;
      fVar2 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar9 + 0x14));
      if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar9 + 0xa4));
      if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      if (0.0 < fVar5) {
        lVar22 = uVar17 - 0x170;
        lVar26 = uVar17 - 0xac;
        lVar24 = uVar17 - 0xbc;
        lVar27 = 2;
        fVar4 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x1a) = fVar4;
        *(float *)(puVar9 + 0x19) = fVar4;
        *(float *)((int)puVar9 + 0xcc) = fVar4;
        *(float *)((int)puVar9 + 0xc4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar5;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar4;
        *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar22 + 0xc4) = *(float *)((int)lVar22 + 0xb4) * fVar4 * fVar4;
          iVar18 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar17 - 0xbc;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0xc4) = *(float *)((int)lVar22 + 0xc4) * fVar4;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        do {
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar11 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar18 + 0xc4) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      OrganicDeltAng
                (fVar2,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar7 + 0x134));
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x06';
        if (moby->animationId != '\x02') {
          puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 300));
        }
        *(ushort *)((int)pvVar7 + 300) = *(short *)((int)pvVar7 + 300) + 1U & 1;
        dVar28 = (double)MB_randRangeFloat(60.0,90.0);
        uVar19 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar7 + 0x138) = uVar19;
      }
    }
    else {
      dVar28 = (double)M48_0039cdf0
                                 (moby,Splines[*(int *)((int)pvVar7 + 0x120)]->points +
                                       *(short *)((int)pvVar7 + 300),
                                  *(undefined1 *)((int)pvVar7 + 0x12f));
      FastDecTimerS32((int)pvVar7 + 0x138);
      if (((dVar28 < 1.0) || (*(int *)((int)pvVar7 + 0x138) == 0)) &&
         (moby->state = '\x02', moby->animationId != '\0')) {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
  }
  else if (bVar1 < 8) {
    uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar20 & 0x40) == 0) {
      if ((uVar20 & 0x120) != 0) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
  }
  else if ((bVar1 < 9) &&
          (uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70)),
          (uVar20 & 0x160) != 0)) {
    DeleteMoby(moby);
  }
  return;
}


