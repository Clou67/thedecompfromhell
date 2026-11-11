// game/update/moby612.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3dae70-0x3dd32c
#include <stdlib.h>
#include "game/update/moby612.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x03dae70 (0x14 bytes)
void M612_003dae70(void)

{
  DAT_008539bc = 0x10000;
  return;
}


// 0x03dae98 (0x6f8 bytes)
// inlined: FastAtan2 @0x3db0e4, FastAtan2 @0x3db354
void M612_003dae98(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  short sVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 400;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar11;
  puVar8[0x34] = in_LR;
  puVar8[0x31] = in_f31;
  puVar8[0x30] = unaff_r31;
  puVar8[0x2f] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar21 = ZEXT48(pvVar6);
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar8 + 0x114) = 0;
  iVar12 = MB_damage(param_1,0x330000,0);
  if ((iVar12 != 0) && (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) == 0x264)) {
    iVar12 = 0;
  }
  MB_HandleDamage(param_1,iVar12,uVar21 + 0x20,0,puVar8 + 0x22,(int)puVar8 + 0x114,0,4);
  if ((*(int *)(puVar8 + 0x22) != 1) && (param_1->state != '\x11')) {
    *(float *)((int)pvVar6 + 0x20) =
         *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x114);
    uVar13 = FastDoubleToInt(0x4083333340000000);
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar13;
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f19999a;
    fVar3 = DAT_0071f418;
    if (*(int *)((int)pvVar6 + 0x20) < 1) {
      *(float *)((int)pvVar6 + 0x80) = DAT_00853a00 * DAT_0071f418;
      *(float *)((int)pvVar6 + 0x84) = DAT_008539f0 * fVar3;
      fVar3 = g_FrameTime;
      *(float *)((int)pvVar6 + 0x88) = DAT_008539e0 * g_FrameTime;
      fVar1 = DAT_008539e4;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar3;
      fVar1 = DAT_00853a18;
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(float *)((int)pvVar6 + 0xbc) = fVar1 * fVar3;
      fVar3 = (param_1->pos).x - g_heroPosition.x;
      fVar1 = (param_1->pos).y - g_heroPosition.y;
      dVar23 = ABS((double)fVar3);
      dVar24 = ABS((double)fVar1);
      *(float *)(puVar8 + 0x23) = fVar3;
      *(float *)((int)puVar8 + 0x11c) = fVar1;
      *(float *)(puVar8 + 0x24) = (float)(dVar23 - dVar24);
      uVar19 = (ulonglong)(*(uint *)(puVar8 + 0x23) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x24) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x11c) >> 0x1d) & 4;
      uVar16 = uVar19 << 2 | 0x735900;
      dVar25 = ABS((double)*(float *)(puVar8 + 0x23));
      if ((double)*(float *)(puVar8 + 0x24) - dVar26 < 0.0) {
        dVar25 = dVar24;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar24 = ABS((double)*(float *)((int)puVar8 + 0x11c));
      if ((double)*(float *)(puVar8 + 0x24) - dVar26 < 0.0) {
        dVar24 = dVar23;
      }
      fVar1 = *(float *)((int)uVar16 + 4);
      if (dVar26 < dVar25) {
        lVar14 = uVar11 - 0x180;
        lVar20 = uVar11 - 0x50;
        lVar17 = uVar11 - 0x60;
        lVar22 = 2;
        fVar2 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar8 + 0x13c) = fVar2;
        *(float *)((int)puVar8 + 0x134) = fVar2;
        *(float *)(puVar8 + 0x27) = fVar2;
        *(float *)(puVar8 + 0x26) = fVar2;
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar8 + 0x134) = *(float *)((int)puVar8 + 0x134) * fVar9;
        *(float *)(puVar8 + 0x27) = *(float *)(puVar8 + 0x27) * fVar2;
        *(float *)((int)puVar8 + 0x13c) = *(float *)((int)puVar8 + 0x13c) * fVar2 * fVar9;
        do {
          *(float *)((int)lVar14 + 0x130) = *(float *)((int)lVar14 + 0x120) * fVar2 * fVar2;
          iVar12 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar11 - 0x60;
        uVar16 = ZEXT48(&DAT_007358e0);
        lVar14 = lVar15;
        lVar17 = lVar20;
        do {
          pfVar18 = (float *)uVar16;
          fVar2 = pfVar18[1];
          uVar16 = uVar16 + 8;
          *(float *)((int)lVar14 + 0x130) = *(float *)((int)lVar14 + 0x130) * *pfVar18;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
          lVar17 = lVar17 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar14 = 2;
        do {
          iVar12 = (int)lVar15;
          iVar10 = (int)lVar20;
          lVar15 = lVar15 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar12 + 0x130)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar1);
      }
      MB_StartKick(dVar26,param_1,uVar21 + 0x70,uVar16,0xe,1,0);
      MVar4 = param_1->modeBits;
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40d00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41500000;
      param_1->modeBits =
           MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      param_1->state = '\x11';
    }
    else {
      uVar7 = (int)*(uint *)((int)puVar8 + 0x114) >> 0x1f;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)puVar8 + 0x114)) - uVar7) < 0x3f800000) {
        *(undefined1 *)((int)pvVar6 + 0x67) = 100;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
        fVar3 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x80) = DAT_00853a00 * DAT_0071f418;
        *(float *)((int)pvVar6 + 0x84) = DAT_008539f4 * fVar3;
        fVar3 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008539e8 * g_FrameTime;
        fVar1 = DAT_008539ec;
        *(undefined4 *)((int)pvVar6 + 0x94) = 0x19;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar3;
        fVar1 = DAT_00853a18;
        *(undefined4 *)((int)pvVar6 + 0xa0) = 0x3f000000;
        *(undefined1 *)((int)pvVar6 + 0xad) = 0;
        *(float *)((int)pvVar6 + 0xbc) = fVar1 * fVar3;
        fVar3 = (param_1->pos).x - g_heroPosition.x;
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        dVar23 = ABS((double)fVar3);
        dVar24 = ABS((double)fVar1);
        *(float *)((int)puVar8 + 0x124) = fVar3;
        *(float *)(puVar8 + 0x25) = fVar1;
        *(float *)((int)puVar8 + 300) = (float)(dVar23 - dVar24);
        uVar19 = (ulonglong)(*(uint *)((int)puVar8 + 0x124) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar8 + 300) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar8 + 0x25) >> 0x1d) & 4;
        uVar16 = uVar19 << 2 | 0x735900;
        dVar25 = ABS((double)*(float *)((int)puVar8 + 0x124));
        if ((double)*(float *)((int)puVar8 + 300) - dVar26 < 0.0) {
          dVar25 = dVar24;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar24 = ABS((double)*(float *)(puVar8 + 0x25));
        if ((double)*(float *)((int)puVar8 + 300) - dVar26 < 0.0) {
          dVar24 = dVar23;
        }
        fVar1 = *(float *)((int)uVar16 + 4);
        if (dVar26 < dVar25) {
          lVar14 = uVar11 - 0x180;
          lVar20 = uVar11 - 0x30;
          lVar17 = uVar11 - 0x40;
          lVar22 = 2;
          fVar2 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
          fVar9 = fVar2 * fVar2;
          *(float *)((int)puVar8 + 0x15c) = fVar2;
          *(float *)((int)puVar8 + 0x154) = fVar2;
          *(float *)(puVar8 + 0x2b) = fVar2;
          *(float *)(puVar8 + 0x2a) = fVar2;
          fVar2 = fVar9 * fVar9;
          *(float *)((int)puVar8 + 0x154) = *(float *)((int)puVar8 + 0x154) * fVar9;
          *(float *)(puVar8 + 0x2b) = *(float *)(puVar8 + 0x2b) * fVar2;
          *(float *)((int)puVar8 + 0x15c) = *(float *)((int)puVar8 + 0x15c) * fVar2 * fVar9;
          do {
            *(float *)((int)lVar14 + 0x150) = *(float *)((int)lVar14 + 0x140) * fVar2 * fVar2;
            iVar12 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
            lVar20 = lVar20 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar20 = uVar11 - 0x40;
          uVar16 = ZEXT48(&DAT_007358e0);
          lVar14 = lVar15;
          lVar17 = lVar20;
          do {
            pfVar18 = (float *)uVar16;
            fVar2 = pfVar18[1];
            uVar16 = uVar16 + 8;
            *(float *)((int)lVar14 + 0x150) = *(float *)((int)lVar14 + 0x150) * *pfVar18;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar14 = 2;
          do {
            iVar12 = (int)lVar15;
            iVar10 = (int)lVar20;
            lVar15 = lVar15 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar12 + 0x150)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar1);
        }
        MB_StartKick(dVar26,param_1,uVar21 + 0x70,uVar16,0xb,1,0);
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40d00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        param_1->state = '\x10';
      }
    }
    MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  iVar12 = *(int *)((int)pvVar6 + 0x220);
  if (iVar12 == 0) {
    MB_getTarget(0x402c000000000000,param_1,&DAT_003dae88,uVar11 - 0xd0);
    iVar12 = *(int *)(puVar8 + 0x20);
    *(int *)((int)pvVar6 + 0x220) = iVar12;
  }
  else {
    if (*(byte *)(iVar12 + 0x20) < 0x80) {
      sVar5 = *(short *)(iVar12 + 0xa6);
      if (((sVar5 == 0xcb || sVar5 == 0x10e) || (sVar5 == 0)) && (param_1->state == '\f'))
      goto LAB_003db54c;
    }
    MB_getTarget(0x402c000000000000,param_1,&DAT_003dae88,uVar11 - 0x120);
    iVar12 = *(int *)(puVar8 + 0x16);
    *(int *)((int)pvVar6 + 0x220) = iVar12;
  }
LAB_003db54c:
  if (iVar12 == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x220) = g_heroMobyPtr;
  }
  MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  return;
}


// 0x03db608 (0x1d24 bytes)
// inlined: FastAtan2 @0x3dbe74, FastAtan2 @0x3dc634, FastAtan2 @0x3dc8b0, FastAtan2 @0x3dcac0, FastAtan2 @0x3dce38
/* Moby 612 */

void UpdateMoby_612(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  f32 fVar10;
  float fVar11;
  float fVar12;
  MOBY_OCLASSES MVar13;
  void *pvVar14;
  int iVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  Cuboid *pCVar20;
  longlong lVar21;
  uint uVar24;
  int iVar25;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar26;
  float *pfVar27;
  MobyModeBit MVar29;
  longlong lVar28;
  ulonglong unaff_r26;
  longlong lVar30;
  ulonglong unaff_r27;
  longlong lVar31;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  ulonglong in_f22;
  double dVar36;
  ulonglong in_f23;
  double dVar37;
  ulonglong in_f24;
  double dVar38;
  ulonglong in_f25;
  double dVar39;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  undefined8 uVar45;
  
  lVar21 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar30 = uVar22 - 0x2c0;
  puVar16 = (ulonglong *)lVar30;
  *puVar16 = uVar22;
  puVar16[0x5a] = in_LR;
  puVar16[0x4e] = in_f22;
  puVar16[0x4f] = in_f23;
  puVar16[0x50] = in_f24;
  puVar16[0x51] = in_f25;
  puVar16[0x52] = in_f26;
  puVar16[0x53] = in_f27;
  puVar16[0x54] = in_f28;
  puVar16[0x55] = in_f29;
  puVar16[0x56] = in_f30;
  puVar16[0x57] = in_f31;
  puVar16[0x4d] = unaff_r31;
  puVar16[0x4c] = unaff_r30;
  pvVar14 = moby->pVar;
  puVar16[0x4b] = unaff_r29;
  puVar16[0x4a] = unaff_r28;
  puVar16[0x49] = unaff_r27;
  puVar16[0x48] = unaff_r26;
  DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar14 + 0x1a0));
  if ((moby->enabled != '\0') &&
     (dVar33 = (double)FUN_005e8548(lVar21 + 0x10,0x951500), dVar33 < 30.0)) {
    MB_SetZBoundsFromGround(lVar21);
    moby->shadow = '\x18';
  }
  M612_003dae98(lVar21);
  bVar1 = moby->state;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      dVar33 = (double)FUN_005e8548((ulonglong)*(uint *)((int)pvVar14 + 0x220) + 0x10,
                                    &Cuboids[*(int *)((int)pvVar14 + 0x188)].pos);
      if (dVar33 < (double)*(float *)((int)pvVar14 + 0x180)) {
        iVar25 = *(int *)((int)pvVar14 + 0x220);
        fVar3 = (moby->pos).z;
        if (ABS(*(float *)(iVar25 + 0x18) - fVar3) < 4.0) {
          iVar15 = *(int *)((int)pvVar14 + 0x188);
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).x;
          fVar6 = fVar4 - Cuboids[iVar15].pos.y;
          fVar12 = fVar5 - Cuboids[iVar15].pos.x;
          fVar3 = fVar3 - Cuboids[iVar15].pos.z;
          if (1.0 <= SQRT(fVar3 * fVar3 + fVar12 * fVar12 + fVar6 * fVar6)) {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
            }
          }
          else {
            fVar5 = *(float *)(iVar25 + 0x10) - fVar5;
            fVar4 = *(float *)(iVar25 + 0x14) - fVar4;
            pfVar27 = (float *)&g_atanQuadrantTable;
            fVar12 = ABS(fVar5);
            fVar6 = ABS(fVar4);
            *(float *)(puVar16 + 0x30) = fVar5;
            *(float *)((int)puVar16 + 0x184) = fVar4;
            *(float *)(puVar16 + 0x31) = fVar12 - fVar6;
            dVar33 = 0.0;
            uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x30) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar16 + 0x31) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar16 + 0x184) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)(puVar16 + 0x30));
            if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
              fVar3 = fVar6;
            }
            fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            fVar6 = ABS(*(float *)((int)puVar16 + 0x184));
            if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
              fVar6 = fVar12;
            }
            if (0.0 < fVar3) {
              lVar31 = uVar22 - 0x2b0;
              lVar28 = uVar22 - 0xa4;
              lVar26 = uVar22 - 0xb4;
              lVar32 = 2;
              fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
              fVar6 = fVar3 * fVar3;
              *(float *)(puVar16 + 0x43) = fVar3;
              *(float *)(puVar16 + 0x42) = fVar3;
              *(float *)((int)puVar16 + 0x214) = fVar3;
              *(float *)((int)puVar16 + 0x20c) = fVar3;
              fVar3 = fVar6 * fVar6;
              *(float *)(puVar16 + 0x42) = *(float *)(puVar16 + 0x42) * fVar6;
              *(float *)((int)puVar16 + 0x214) = *(float *)((int)puVar16 + 0x214) * fVar3;
              *(float *)(puVar16 + 0x43) = *(float *)(puVar16 + 0x43) * fVar3 * fVar6;
              do {
                *(float *)((int)lVar31 + 0x20c) = *(float *)((int)lVar31 + 0x1fc) * fVar3 * fVar3;
                iVar25 = (int)lVar26;
                lVar26 = lVar26 + 8;
                lVar31 = lVar31 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
                lVar28 = lVar28 + 8;
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              lVar32 = 4;
              lVar28 = uVar22 - 0xb4;
              pfVar27 = (float *)&DAT_007358e0;
              lVar31 = lVar30;
              lVar26 = lVar28;
              do {
                fVar3 = *pfVar27;
                fVar6 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar31 + 0x20c) = *(float *)((int)lVar31 + 0x20c) * fVar3;
                lVar31 = lVar31 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
                lVar26 = lVar26 + 8;
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              lVar31 = 2;
              do {
                iVar25 = (int)lVar30;
                lVar30 = lVar30 + 0x10;
                iVar15 = (int)lVar28;
                lVar28 = lVar28 + 0x10;
                dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x20c)) +
                                  *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                                 *(float *)(iVar15 + 0xc));
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar4);
            }
            OrganicDeltAngSpeed
                      (dVar33,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar21,
                       pfVar27,(int)pvVar14 + 0x214);
            dVar33 = (double)FastSubRots((moby->rotation).z,(float)dVar33);
            if ((dVar33 < 0.0872664600610733) && (moby->state = '\v', moby->animationId != '\b')) {
              puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
              MB_SetAnimation(lVar21,8,0,*(undefined4 *)((int)puVar16 + 0x234));
            }
          }
          goto LAB_003dd2d0;
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        dVar33 = (double)MB_randRot();
        dVar44 = 3.141592502593994;
        dVar43 = -3.141592502593994;
        fVar3 = (float)(dVar33 + 1.570796251296997);
        dVar42 = -0.16666656732559204;
        dVar41 = 0.008333025500178337;
        dVar40 = -0.0001980741071747616;
        dVar39 = 2.601886990305502e-06;
        dVar38 = 1.0;
        dVar37 = 2.0;
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar6 = fVar5 * fVar5;
        fVar3 = fVar6 * fVar6 * fVar5;
        fVar4 = fVar6 * fVar3;
        dVar36 = (double)(fVar6 * fVar4 * 2.601887e-06 +
                         fVar4 * -0.0001980741 +
                         fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
        dVar35 = (double)MB_randRangeFloat(1.0,2.0);
        *(float *)((int)pvVar14 + 0x1e0) = (float)(dVar36 * dVar35);
        dVar35 = (double)(float)(dVar44 - dVar33);
        if (dVar33 - (double)(float)(dVar44 - dVar33) < 0.0) {
          dVar35 = dVar33;
        }
        dVar44 = (double)(float)(dVar43 - dVar33);
        if ((double)(float)(dVar43 - dVar33) - dVar35 < 0.0) {
          dVar44 = dVar35;
        }
        dVar33 = (double)(float)(dVar44 * dVar44);
        dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar44));
        dVar43 = (double)(float)(dVar33 * dVar35);
        dVar39 = (double)(float)((double)(float)(dVar33 * dVar43) * dVar39 +
                                (double)(float)(dVar43 * dVar40 +
                                               (double)(float)(dVar35 * dVar41 +
                                                              (double)(float)((double)(float)(dVar33
                                                                                             * 
                                                  dVar44) * dVar42 + dVar44))));
        dVar33 = (double)MB_randRangeFloat((float)dVar38,(float)dVar37);
        pCVar20 = Cuboids;
        iVar25 = *(int *)((int)pvVar14 + 0x188);
        *(undefined4 *)((int)pvVar14 + 0x1e8) = 0;
        *(float *)((int)pvVar14 + 0x1e4) = (float)(dVar39 * dVar33);
        *(float *)((int)pvVar14 + 0x1e0) = *(float *)((int)pvVar14 + 0x1e0) + pCVar20[iVar25].pos.x;
        *(float *)((int)pvVar14 + 0x1e4) = (float)(dVar39 * dVar33) + pCVar20[iVar25].pos.y;
        *(float *)((int)pvVar14 + 0x1e8) = pCVar20[iVar25].pos.z;
        moby->state = '\x06';
        if (moby->animationId != '\x06') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
    else if (bVar1 == 6) {
      uVar22 = MB_UpdateNavMoveTurning
                         (lVar21,(int)pvVar14 + 0xd0,(int)pvVar14 + 0x1e0,(int)pvVar14 + 0x40);
      if ((uVar22 & 6) == 0) {
        dVar33 = (double)FUN_005e8548((ulonglong)*(uint *)((int)pvVar14 + 0x220) + 0x10,
                                      &Cuboids[*(int *)((int)pvVar14 + 0x188)].pos);
        if (((dVar33 < (double)*(float *)((int)pvVar14 + 0x180)) &&
            (ABS(*(float *)(*(int *)((int)pvVar14 + 0x220) + 0x18) - (moby->pos).z) < 4.0)) &&
           (moby->state = '\x05', moby->animationId != '\x06')) {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
      else {
        if (moby->animationId != '\0') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 5) {
      iVar25 = MB_UpdateNavMoveTurning
                         (lVar21,(int)pvVar14 + 0xd0,&Cuboids[*(int *)((int)pvVar14 + 0x188)].pos,
                          (int)pvVar14 + 0x40);
      if (iVar25 == 4) {
        if (moby->animationId != '\0') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 30.5);
          MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 4) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x06')) {
        uVar34 = idol::GetAnimDuration(6);
        MB_SetAnimation(lVar21,6,0,uVar34);
      }
    }
    else if (bVar1 == 3) {
      uVar34 = FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar14 + 0x220) + 0x10) -
                                    (moby->pos).x),
                            (double)(*(float *)(*(int *)((int)pvVar14 + 0x220) + 0x14) -
                                    (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar34,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 1.5707964),lVar21);
      lVar31 = uVar22 - 0x200;
      lVar30 = lVar21 + 0x10;
      FUN_005e81f0(lVar31,&Cuboids[*(int *)((int)pvVar14 + 0x188)].pos,lVar30);
      fVar3 = g_FrameTime;
      *(undefined4 *)(puVar16 + 0x19) = 0;
      ClampVec3Magnitude((double)(fVar3 * 6.0),(Vec4 *)lVar31);
      FUN_005e7f54(lVar30,lVar30,lVar31);
      dVar33 = (double)GetGroundZ(0x3fe0000000000000,lVar30,0);
      Delt(g_FrameTime * 40.0,DAT_00853a00 * DAT_0071f418,
                     (float *)((int)pvVar14 + 0x48));
      Delt((float)dVar33,*(float *)((int)pvVar14 + 0x48),&(moby->pos).z);
      if (((double)(moby->pos).z == dVar33) && (moby->state = '\x04', moby->animationId != '\x05'))
      {
        uVar34 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar21,5,4,uVar34);
      }
    }
    else if (bVar1 == 2) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x04')) {
        MB_SetAnimation(lVar21,4,0,0);
      }
    }
    else if (bVar1 == 0) {
      uVar24 = rand();
      MVar29 = moby->modeBits | MIRROR;
      moby->modeBits =
           MVar29 + ((ushort)(ZERO_MASK((uVar24 & 1))) & moby->modeBits - MVar29) |
           CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar14 + 0x5a) = 8;
      *(undefined1 *)((int)pvVar14 + 0x5c) = 1;
      *(undefined1 *)((int)pvVar14 + 0x29) = 0;
      *(undefined1 *)((int)pvVar14 + 0x58) = 0xf;
      *(undefined4 *)((int)pvVar14 + 0x30) = 0x3f800000;
      uVar24 = g_heroMobyPtr->light;
      moby->color = g_heroMobyPtr->color;
      moby->light = uVar24;
      MB_InitDefaultParams((float *)((int)pvVar14 + 0xd0));
      *(undefined4 *)((int)pvVar14 + 0x10c) = 0x3cf5c28f;
      *(undefined4 *)((int)pvVar14 + 0x110) = 0x3e99999a;
      *(undefined4 *)((int)pvVar14 + 0x114) = 0x3e800000;
      fVar3 = g_FrameTime;
      *(undefined4 *)((int)pvVar14 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar14 + 0xd8) = 0x40000000;
      *(undefined4 *)((int)pvVar14 + 0x20) = 0x40400000;
      *(undefined1 *)((int)pvVar14 + 0x28) = 2;
      *(float *)((int)pvVar14 + 0xf4) = fVar3 * 4.0;
      FUN_005e7e70((int)pvVar14 + 0x40);
      MB_InitDebrisList((int)pvVar14 + 0x1f0);
      iVar25 = *(int *)((int)pvVar14 + 0x194);
      uVar2 = moby->animationId;
      if (iVar25 < 2) {
        if (0 < iVar25) {
          if (uVar2 != '\0') {
            MB_SetAnimation(lVar21,0,0,0);
          }
          moby->state = '\n';
          goto LAB_003dd2d0;
        }
      }
      else {
        if (iVar25 < 3) {
          if (uVar2 != '\x02') {
            MB_SetAnimation(lVar21,2,0,0);
          }
          moby->state = '\b';
          goto LAB_003dd2d0;
        }
        if (iVar25 < 4) {
          if (uVar2 != '\x0f') {
            MB_SetAnimation(lVar21,0xf,0,0);
          }
          moby->state = '\t';
          goto LAB_003dd2d0;
        }
      }
      if (uVar2 != '\0') {
        MB_SetAnimation(lVar21,0,0,0);
      }
      moby->state = '\a';
    }
  }
  else if (bVar1 < 0xd) {
    if (bVar1 < 0xb) {
      if (((bVar1 < 10) &&
          (worldUpdateTime ==
           (((int)worldUpdateTime >> 2) +
           (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4)) &&
         (moby->enabled != '\0')) {
        dVar33 = (double)MB_randRangeFloat(0.0,DAT_00853a14);
        dVar38 = (double)(float)(dVar33 * (double)g_FrameTime);
        dVar37 = (double)MB_randRot();
        fVar3 = (float)(dVar37 + 1.570796251296997);
        dVar33 = (double)(float)(3.141592502593994 - dVar37);
        if (dVar37 - (double)(float)(3.141592502593994 - dVar37) < 0.0) {
          dVar33 = dVar37;
        }
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        dVar39 = (double)(float)(-3.141592502593994 - dVar37);
        if ((double)(float)(-3.141592502593994 - dVar37) - dVar33 < 0.0) {
          dVar39 = dVar33;
        }
        *(undefined4 *)(puVar16 + 0x1d) = 0;
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        dVar37 = (double)(float)(dVar39 * dVar39);
        fVar6 = fVar5 * fVar5;
        dVar40 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar39));
        fVar3 = fVar6 * fVar6 * fVar5;
        dVar33 = (double)(float)(dVar37 * dVar40);
        fVar4 = fVar6 * fVar3;
        *(float *)((int)puVar16 + 0xe4) =
             (float)((double)((float)(dVar37 * dVar33) * 2.601887e-06 +
                             (float)(dVar33 * -0.0001980741071747616 +
                                    (double)(float)(dVar40 * 0.008333025500178337 +
                                                   (double)(float)((double)(float)(dVar37 * dVar39)
                                                                   * -0.16666656732559204 + dVar39))
                                    )) * dVar38);
        *(float *)(puVar16 + 0x1c) =
             (float)((double)(fVar6 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * dVar38);
        GetBonePosition(lVar21,0,uVar22 - 0x1f0);
        uVar34 = 0x40e3880000000000;
        puVar16[0x46] = (longlong)DAT_00853a0c;
        fVar3 = animationSpeed;
        uVar23 = (ulonglong)DAT_00853a10;
        puVar16[0x46] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x46] + 0.5));
        puVar16[0x46] = uVar23;
        uVar19 = DAT_00853a04;
        puVar16[0x46] = (longlong)(int)(fVar3 * ((float)(longlong)puVar16[0x46] + 0.5));
        MB_randRange
                  (*(undefined4 *)((int)puVar16 + 0x234),*(undefined4 *)((int)puVar16 + 0x234));
        SpawnPart_21(uVar34,uVar22 - 0x1f0,uVar22 - 0x1e0,uVar19,uVar19);
      }
      if (*(int *)((int)pvVar14 + 0x18c) < 0) {
        iVar25 = *(int *)((int)pvVar14 + 0x188);
        fVar3 = g_heroPosition.y - Cuboids[iVar25].pos.y;
        fVar4 = g_heroPosition.x - Cuboids[iVar25].pos.x;
        fVar5 = g_heroPosition.z - Cuboids[iVar25].pos.z;
        if (*(float *)((int)pvVar14 + 0x184) <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))
        goto LAB_003dd2d0;
      }
      else {
        iVar25 = MB_IsPntInCuboid
                           ((Vec4 *)&g_heroGroundPoint,
                            (longlong)*(int *)((int)pvVar14 + 0x18c));
        if (iVar25 == 0) goto LAB_003dd2d0;
      }
      if (moby->state == '\b') {
        if (moby->animationId != '\x04') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar21,4,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\x02';
      }
      else if (moby->state == '\t') {
        if (moby->animationId != '\x10') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar21,0x10,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\x02';
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x06') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
    else if (bVar1 < 0xc) {
      iVar25 = *(int *)((int)pvVar14 + 0x220);
      moby->unk58 = 2.0;
      fVar3 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar16 + 0x174) = fVar3;
      *(float *)(puVar16 + 0x2f) = fVar4;
      *(float *)((int)puVar16 + 0x17c) = fVar6 - fVar5;
      dVar33 = 0.0;
      uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 0x174) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x17c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar16 + 0x2f) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar16 + 0x174));
      if (*(float *)((int)puVar16 + 0x17c) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)(puVar16 + 0x2f));
      if (*(float *)((int)puVar16 + 0x17c) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      if (0.0 < fVar3) {
        lVar31 = uVar22 - 0x2b0;
        lVar28 = uVar22 - 0xc4;
        lVar26 = uVar22 - 0xd4;
        lVar32 = 2;
        fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x3f) = fVar3;
        *(float *)(puVar16 + 0x3e) = fVar3;
        *(float *)((int)puVar16 + 500) = fVar3;
        *(float *)((int)puVar16 + 0x1ec) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x3e) = *(float *)(puVar16 + 0x3e) * fVar6;
        *(float *)((int)puVar16 + 500) = *(float *)((int)puVar16 + 500) * fVar3;
        *(float *)(puVar16 + 0x3f) = *(float *)(puVar16 + 0x3f) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar31 + 0x1ec) = *(float *)((int)lVar31 + 0x1dc) * fVar3 * fVar3;
          iVar25 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0xd4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar3 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x1ec) = *(float *)((int)lVar31 + 0x1ec) * fVar3;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar31 = 2;
        do {
          iVar25 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x1ec)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar21,
                 &DAT_003db590,(int)pvVar14 + 0x214);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 1.0;
        moby->state = '\f';
        if (moby->animationId != '\t') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(lVar21,9,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
    else {
      moby->unk58 = 0.5;
      GetBonePosition(lVar21,0,uVar22 - 0x1d0);
      fVar3 = *(float *)(puVar16 + 0x1e) - (moby->pos).x;
      fVar4 = *(float *)((int)puVar16 + 0xf4) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar18 = ABS(fVar4);
      *(float *)(puVar16 + 0x2d) = fVar3;
      *(float *)((int)puVar16 + 0x16c) = fVar4;
      *(float *)(puVar16 + 0x2e) = fVar6 - fVar18;
      fVar5 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x2d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x2e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x16c) >> 0x1d) & 4;
      fVar12 = ABS(*(float *)(puVar16 + 0x2d));
      if (*(float *)(puVar16 + 0x2e) - 0.0 < 0.0) {
        fVar12 = fVar18;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar16 + 0x16c));
      if (*(float *)(puVar16 + 0x2e) - 0.0 < 0.0) {
        fVar8 = fVar6;
      }
      fVar17 = fVar5;
      if (0.0 < fVar12) {
        lVar31 = uVar22 - 0x2b0;
        lVar26 = uVar22 - 0xf4;
        lVar28 = uVar22 - 0xe4;
        lVar32 = 2;
        fVar12 = (fVar8 - fVar12) / (fVar8 + fVar12);
        fVar8 = fVar12 * fVar12;
        *(float *)(puVar16 + 0x3b) = fVar12;
        *(float *)(puVar16 + 0x3a) = fVar12;
        *(float *)((int)puVar16 + 0x1d4) = fVar12;
        *(float *)((int)puVar16 + 0x1cc) = fVar12;
        fVar12 = fVar8 * fVar8;
        *(float *)(puVar16 + 0x3a) = *(float *)(puVar16 + 0x3a) * fVar8;
        *(float *)((int)puVar16 + 0x1d4) = *(float *)((int)puVar16 + 0x1d4) * fVar12;
        *(float *)(puVar16 + 0x3b) = *(float *)(puVar16 + 0x3b) * fVar12 * fVar8;
        do {
          *(float *)((int)lVar31 + 0x1cc) = *(float *)((int)lVar31 + 0x1bc) * fVar12 * fVar12;
          iVar25 = (int)lVar26;
          lVar31 = lVar31 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar12 * fVar12;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0xf4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar12 = *pfVar27;
          fVar8 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x1cc) = *(float *)((int)lVar31 + 0x1cc) * fVar12;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar26 = 2;
        lVar31 = lVar30;
        fVar12 = fVar5;
        do {
          iVar25 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          fVar12 = fVar12 + *(float *)(iVar25 + 0x1cc) + *(float *)(iVar15 + 4) +
                   *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar17 = (fVar12 + 0.7853982) * fVar11 + fVar7;
      }
      fVar17 = fVar17 + 1.5707963;
      *(float *)((int)puVar16 + 0x15c) = fVar3;
      *(float *)((int)puVar16 + 0x164) = fVar6 - fVar18;
      *(float *)(puVar16 + 0x2c) = fVar4;
      fVar3 = 3.1415925 - fVar17;
      if (fVar17 - (3.1415925 - fVar17) < 0.0) {
        fVar3 = fVar17;
      }
      uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 0x15c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x164) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar16 + 0x2c) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar16 + 0x15c));
      if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
        fVar4 = fVar18;
      }
      fVar12 = -3.1415925 - fVar17;
      if ((-3.1415925 - fVar17) - fVar3 < 0.0) {
        fVar12 = fVar3;
      }
      fVar18 = fVar12 * fVar12;
      fVar7 = fVar18 * fVar18 * fVar12;
      fVar11 = fVar18 * fVar7;
      fVar3 = ABS(*(float *)(puVar16 + 0x2c));
      if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      *(float *)(puVar16 + 0x20) =
           fVar18 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar7 * 0.0083330255 + fVar18 * fVar12 * -0.16666657 + fVar12;
      fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar31 = uVar22 - 0x2b0;
        lVar26 = uVar22 - 0x114;
        lVar28 = uVar22 - 0x104;
        lVar32 = 2;
        fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x37) = fVar3;
        *(float *)(puVar16 + 0x36) = fVar3;
        *(float *)((int)puVar16 + 0x1b4) = fVar3;
        *(float *)((int)puVar16 + 0x1ac) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar16 + 0x36) = *(float *)(puVar16 + 0x36) * fVar4;
        *(float *)((int)puVar16 + 0x1b4) = *(float *)((int)puVar16 + 0x1b4) * fVar3;
        *(float *)(puVar16 + 0x37) = *(float *)(puVar16 + 0x37) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar31 + 0x1ac) = *(float *)((int)lVar31 + 0x19c) * fVar3 * fVar3;
          iVar25 = (int)lVar26;
          lVar31 = lVar31 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0x114;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar3 = *pfVar27;
          fVar4 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x1ac) = *(float *)((int)lVar31 + 0x1ac) * fVar3;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar31 = 2;
        do {
          iVar25 = (int)lVar30;
          iVar15 = (int)lVar28;
          lVar30 = lVar30 + 0x10;
          lVar28 = lVar28 + 0x10;
          fVar5 = fVar5 + *(float *)(iVar25 + 0x1ac) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        fVar5 = (fVar5 + 0.7853982) * fVar12 + fVar6;
      }
      dVar33 = (double)DAT_008539fc;
      *(undefined4 *)(puVar16 + 0x21) = 0xbdcccccd;
      fVar3 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar3 = fVar5;
      }
      fVar4 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = fVar4 * fVar4;
      fVar5 = fVar3 * fVar3 * fVar4;
      fVar6 = fVar3 * fVar5;
      *(float *)((int)puVar16 + 0x104) =
           fVar3 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4;
      MB_UpdateDebris(dVar33,(int)pvVar14 + 0x1f0,uVar22 - 0x1d0,uVar22 - 0x1c0);
      *(undefined4 *)(puVar16 + 0x21) = 0x3f800000;
      *(undefined4 *)((int)puVar16 + 0x10c) = 0x45afdf66;
      SetCollDamIn
                (0x3ff0000000000000,uVar22 - 0x1a0,lVar21,0x10001,0x45afdf66,uVar22 - 0x1c0);
      MVar13 = moby->oClass;
      *(undefined1 *)(puVar16 + 0x27) = 5;
      *(undefined1 *)((int)puVar16 + 0x139) = 1;
      *(MOBY_OCLASSES *)((int)puVar16 + 0x13a) = MVar13;
      MB_DebrisCollide((int)pvVar14 + 0x1f0,lVar21,uVar22 - 0x1a0);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 1.0;
        moby->state = '\r';
        uVar22 = MB_randInt(0xff);
        if ((uVar22 & 1) == 0) {
          if (moby->animationId != '\b') {
            puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(lVar21,8,0,*(undefined4 *)((int)puVar16 + 0x234));
          }
        }
        else if (moby->animationId != '\n') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(lVar21,10,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
  }
  else if (bVar1 < 0x10) {
    if (bVar1 < 0xe) {
      fVar3 = *(float *)(*(int *)((int)pvVar14 + 0x220) + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(*(int *)((int)pvVar14 + 0x220) + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar16 + 0x2a) = fVar3;
      *(float *)((int)puVar16 + 0x154) = fVar4;
      *(float *)(puVar16 + 0x2b) = fVar6 - fVar5;
      dVar33 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x2b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar16 + 0x2a));
      if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar16 + 0x154));
      if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      if (0.0 < fVar3) {
        lVar31 = uVar22 - 0x2b0;
        lVar26 = uVar22 - 0x134;
        lVar28 = uVar22 - 0x124;
        lVar32 = 2;
        fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x33) = fVar3;
        *(float *)(puVar16 + 0x32) = fVar3;
        *(float *)((int)puVar16 + 0x194) = fVar3;
        *(float *)((int)puVar16 + 0x18c) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar6;
        *(float *)((int)puVar16 + 0x194) = *(float *)((int)puVar16 + 0x194) * fVar3;
        *(float *)(puVar16 + 0x33) = *(float *)(puVar16 + 0x33) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar31 + 0x18c) = *(float *)((int)lVar31 + 0x17c) * fVar3 * fVar3;
          iVar25 = (int)lVar26;
          lVar31 = lVar31 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0x134;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar3 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x18c) = *(float *)((int)lVar31 + 0x18c) * fVar3;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar31 = 2;
        do {
          iVar25 = (int)lVar30;
          iVar15 = (int)lVar28;
          lVar30 = lVar30 + 0x10;
          lVar28 = lVar28 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x18c)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar21,
                 &DAT_003db590,(int)pvVar14 + 0x214);
      if ((moby->field43_0x70 & 2U) != 0) {
        iVar25 = *(int *)((int)pvVar14 + 0x220);
        fVar3 = (moby->pos).y - *(float *)(iVar25 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar25 + 0x10);
        if ((*(float *)((int)pvVar14 + 0x180) + 1.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
           (3.0 <= ABS(*(float *)(iVar25 + 0x18) - (moby->pos).z))) {
          moby->state = '\a';
          if (moby->animationId != '\0') {
            puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
          }
        }
        else {
          moby->state = '\f';
          if (moby->animationId != '\t') {
            puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(lVar21,9,0,*(undefined4 *)((int)puVar16 + 0x234));
          }
        }
      }
    }
  }
  else if (bVar1 < 0x11) {
    uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70));
    if (((uVar24 & 0x40) != 0) && (moby->state = '\a', moby->animationId != '\0')) {
      puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
      MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
    }
  }
  else if ((bVar1 < 0x12) &&
          (uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70)),
          (uVar24 & 0x140) != 0)) {
    fVar9 = (moby->pos).y;
    *(f32 *)(puVar16 + 0x22) = (moby->pos).x;
    fVar10 = (moby->pos).w;
    *(f32 *)((int)puVar16 + 0x114) = fVar9;
    *(f32 *)((int)puVar16 + 0x11c) = fVar10;
    uVar45 = 0x3ff0000000000000;
    *(float *)(puVar16 + 0x23) = (moby->pos).z + 1.0;
    MB_SpawnBoltsFromCrate(lVar21,0,0xffffffffffffffff);
    uVar34 = 0;
    puVar16[0x12] = 0xffffffffffffffff;
    puVar16[0x14] = 1;
    puVar16[0x15] = 1;
    puVar16[0x16] = 0xffffffffffffffff;
    puVar16[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,uVar45,0x4022000000000000,uVar45,0x402e000000000000,lVar21,
               (int)pvVar14 + 0x40,uVar22 - 0x1b0,1,0xffffffffffffffff,5,2,4);
    lVar31 = lVar21 + 0x10;
    lVar30 = lVar21 + 0x40;
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar34,lVar21,0x6d7,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar34,lVar21,0x6d8,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar34,lVar21,0x6d9,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar34,lVar21,0x6e9,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar34,lVar21,0x782,lVar31,lVar30,0,0);
    DeleteMoby(moby);
    return;
  }
LAB_003dd2d0:
  MB_SetZBoundsFromGround(lVar21);
  return;
}


