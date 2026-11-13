// game/update/moby576.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3c7080-0x3c8168
#include "game/update/moby576.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x03c7080 (0x14 bytes)
void M576_003c7080(void)

{
  DAT_008460a8 = 0x10000;
  return;
}


// 0x03c70d8 (0x400 bytes)
// inlined: FastAtan2 @0x3c71e4
double M576_003c70d8(int param_1,undefined8 param_2,undefined8 param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *unused;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  float fStack00000040;
  float fStack00000044;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0x100;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar14;
  puVar7[0x22] = in_LR;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  fVar2 = *(float *)(param_1 + 0x10);
  puVar7[0x1c] = unaff_r31;
  fStack00000044 = (float)param_3;
  dVar24 = (double)fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar23 = (double)fStack00000040;
  fVar1 = (float)(dVar24 - (double)*(float *)(param_1 + 0x14));
  fVar2 = (float)(dVar23 - (double)fVar2);
  unused = &g_atanQuadrantTable;
  fVar3 = ABS(fVar1);
  fVar5 = ABS(fVar2);
  *(float *)(puVar7 + 0x11) = fVar1;
  puVar7[0x1b] = unaff_r30;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  iVar6 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar7 + 0x8c) = fVar5 - fVar3;
  dVar25 = 0.0;
  fVar1 = *(float *)(iVar6 + 0x1ec);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1d) & 4;
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = ABS(*(float *)((int)puVar7 + 0x84));
  if (*(float *)((int)puVar7 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)(puVar7 + 0x11));
  if (*(float *)((int)puVar7 + 0x8c) - 0.0 < 0.0) {
    fVar10 = fVar5;
  }
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x18] = unaff_r27;
  puVar7[0x17] = unaff_r26;
  dVar22 = dVar25;
  if (0.0 < fVar4) {
    lVar19 = uVar14 - 0xf0;
    lVar17 = uVar14 - 0x70;
    lVar16 = uVar14 - 0x60;
    lVar21 = 2;
    fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)((int)puVar7 + 0x94) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    *(float *)(puVar7 + 0x12) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar5;
    *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) * fVar4;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar19 + 0x90) = *(float *)((int)lVar19 + 0x80) * fVar4 * fVar4;
      iVar8 = (int)lVar17;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar19 = uVar14 - 0x70;
    pfVar20 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar19;
    lVar17 = lVar15;
    do {
      fVar4 = *pfVar20;
      fVar5 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * fVar4;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar19;
      lVar15 = lVar15 + 0x10;
      lVar19 = lVar19 + 0x10;
      unused = (undefined *)lVar19;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0x90)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
  }
  _fStack00000040 = param_3;
  dVar22 = (double)FastWrapRot((float)dVar22,fVar1);
  OrganicDeltAng
            ((float)dVar22,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
             g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x1e8));
  fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar23);
  *(undefined4 *)(puVar7 + 0x10) = 0;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  dVar23 = (double)fVar1;
  OrganicDelt
            (fVar1,g_FrameTimeSq * 6.0,g_FrameTimeSq * 6.0,g_FrameTime * 5.0,
             (float *)(puVar7 + 0x10),(int)unused,(float *)(iVar6 + 0x1f0));
  fVar3 = g_FrameTime;
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar10 * fVar10;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar10;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar4 * fVar5;
  *(float *)(puVar7 + 0xe) =
       (fVar4 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x1f0);
  fVar1 = *(float *)(iVar6 + 0x1f0);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  fVar4 = DAT_008460d8;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1;
  *(float *)(puVar7 + 0xf) = fVar3 * -2.0;
  MB_MoveAndCollide
            ((double)(fVar4 * 0.161),(double)(fVar4 * 0.179),dVar25,param_1,uVar14 - 0x90);
  MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)(iVar6 + 0x1e0));
  return dVar23;
}


// 0x03c74e8 (0x2d0 bytes)
void M576_003c74e8(MobyInstance *param_1)

{
  bool bVar1;
  void *pvVar2;
  f32 fVar3;
  uint uVar4;
  float fVar5;
  u8 uVar8;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar9;
  double dVar10;
  int local_40;
  float local_3c;
  longlong local_38;
  
  uVar8 = param_1->state;
  pvVar2 = param_1->pVar;
  uVar9 = ZEXT48(pvVar2);
  if (uVar8 != '\a' && uVar8 != '\0') {
    fVar3 = (param_1->pos).z;
    uVar4 = (int)fVar3 >> 0x1f;
    if (((int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4) < 0x42c80000) && (uVar8 != '\x06')) {
      uVar8 = '\x05';
      param_1->state = '\x05';
    }
    bVar1 = g_heroState == MOVEMENT_LOCKED;
    param_1->scale = param_1->pClass->gScale * DAT_008460d8;
    if (((bVar1) || (g_gameMode == GAME_MODE_SCENE)) && (uVar8 != '\x06')) {
      param_1->state = '\a';
      if (param_1->animationId != '\0') {
        local_38 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
      }
      param_1->enabled = '\0';
      param_1->collision = (ushort *)0x0;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | DISABLED;
    }
    else {
      dVar10 = 0.0;
      local_3c = 0.0;
      uVar6 = MB_damage(param_1,0x330000,0);
      MB_HandleDamage(param_1,uVar6,uVar9 + 0x20,0,&local_40,&local_3c,0,4);
      if (((local_40 != 1) && (param_1->state != '\x05')) && (local_3c != 0.0)) {
        fVar5 = *(float *)((int)pvVar2 + 0x20) - local_3c;
        *(float *)((int)pvVar2 + 0x20) = fVar5;
        if (dVar10 < (double)fVar5) {
          MB_UpdateLightsTransition(param_1,uVar9 + 0x60);
        }
        else {
          param_1->state = '\x05';
        }
      }
      param_1->damage = -1;
      MB_ColorDyingMoby(param_1,uVar9 + 0x60);
      MB_getTargetInArea
                (0x4080000000000000,param_1,uVar9 + 0x180,&DAT_003c74d8,0,0,
                 Splines[*(int *)((int)pvVar2 + 0x1e0)]->points,
                 Splines[*(int *)((int)pvVar2 + 0x1e0)]->cnt);
      if (*(int *)((int)pvVar2 + 0x1c4) == 2) {
        if (g_heroStateType == 0xf) {
          piVar7 = g_heroGrindPath + *g_heroGrindPath * 4;
          *(int *)((int)pvVar2 + 0x180) = *piVar7;
          *(int *)((int)pvVar2 + 0x184) = piVar7[1];
          *(int *)((int)pvVar2 + 0x188) = piVar7[2];
          *(int *)((int)pvVar2 + 0x18c) = piVar7[3];
        }
        else {
          *(float *)((int)pvVar2 + 0x180) = g_heroPosition.x;
          *(float *)((int)pvVar2 + 0x184) = g_heroPosition.y;
          *(float *)((int)pvVar2 + 0x188) = g_heroPosition.z;
          *(float *)((int)pvVar2 + 0x18c) = g_heroPosition.w;
        }
      }
      if (*(int *)((int)pvVar2 + 0x1c0) == 0) {
        *(MobyInstance **)((int)pvVar2 + 0x1c0) = g_heroMobyPtr;
      }
    }
  }
  return;
}


// 0x03c77f8 (0x970 bytes)
// inlined: FastAtan2 @0x3c7cbc
/* Moby 576 */

void UpdateMoby_576(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  undefined4 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar22;
  MobyModeBit MVar23;
  f32 *val;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x140;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar18;
  puVar15[0x2a] = in_LR;
  puVar15[0x27] = unaff_r31;
  puVar15[0x26] = unaff_r30;
  puVar15[0x25] = unaff_r29;
  pvVar13 = moby->pVar;
  M576_003c74e8();
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    iVar22 = FUN_0048c188(lVar19,(int)pvVar13 + 0x70);
    if (iVar22 != 0) {
      moby->state = '\x02';
      *(undefined2 *)((int)pvVar13 + 0x138) = 0;
    }
  }
  else if (uVar1 == '\x05') {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar15 + 0x1a) = (moby->pos).x;
    fVar4 = (moby->pos).w;
    *(f32 *)((int)puVar15 + 0xd4) = fVar2;
    *(f32 *)((int)puVar15 + 0xdc) = fVar4;
    fVar5 = (moby->pos).z;
    puVar15[0x12] = 4;
    puVar15[0x14] = 0;
    puVar15[0x15] = 1;
    puVar15[0x16] = 0xffffffffffffffff;
    puVar15[0x17] = 0;
    *(float *)(puVar15 + 0x1b) = fVar5 + 0.5;
    MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3fe0000000000000,0,
               lVar19,(int)pvVar13 + 0x40,uVar18 - 0x70,&DAT_003c77b8,4,5,2,4);
    moby->state = '\a';
    if (moby->animationId != '\0') {
      puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
    }
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  else if (uVar1 == '\x04') {
    fVar5 = *(float *)((int)pvVar13 + 0x180) - (moby->pos).x;
    fVar6 = *(float *)((int)pvVar13 + 0x184) - (moby->pos).y;
    val = &(moby->rotation).z;
    fVar7 = ABS(fVar5);
    fVar8 = ABS(fVar6);
    *(float *)(puVar15 + 0x1c) = fVar5;
    *(float *)((int)puVar15 + 0xe4) = fVar6;
    *(float *)(puVar15 + 0x1d) = fVar7 - fVar8;
    fVar5 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar15 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xe4) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar15 + 0x1c));
    if (*(float *)(puVar15 + 0x1d) - 0.0 < 0.0) {
      fVar6 = fVar8;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar15 + 0xe4));
    if (*(float *)(puVar15 + 0x1d) - 0.0 < 0.0) {
      fVar10 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar26 = uVar18 - 0x130;
      lVar24 = uVar18 - 0x44;
      lVar25 = uVar18 - 0x54;
      lVar28 = 2;
      fVar6 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar15 + 0x1f) = fVar6;
      *(float *)(puVar15 + 0x1e) = fVar6;
      *(float *)((int)puVar15 + 0xf4) = fVar6;
      *(float *)((int)puVar15 + 0xec) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar15 + 0x1e) = *(float *)(puVar15 + 0x1e) * fVar7;
      *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar6;
      *(float *)(puVar15 + 0x1f) = *(float *)(puVar15 + 0x1f) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar26 + 0xec) = *(float *)((int)lVar26 + 0xdc) * fVar6 * fVar6;
        iVar22 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = uVar18 - 0x54;
      lVar28 = 4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar24 = lVar26;
      lVar25 = lVar21;
      do {
        fVar6 = *pfVar27;
        fVar7 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0xec) = *(float *)((int)lVar25 + 0xec) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar24 = 2;
      do {
        iVar22 = (int)lVar21;
        iVar16 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar22 + 0xec) + *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8)
                + *(float *)(iVar16 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar8;
    }
    OrganicDeltAng
              (fVar5,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
               g_FrameTime * 6.2831855,val,(int)val,(float *)((int)pvVar13 + 0x1e8));
    dVar29 = (double)BlendAnimFrame(moby);
    if (((moby->animationBlend == 0.0) && (20.0 <= dVar29)) && (dVar29 <= 25.0)) {
      puVar15[0xe] = 0;
      DamageSphereAtBone
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar19,0,0,1);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*(int *)((int)pvVar13 + 0x1c4) == 2) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
        }
      }
      else {
        fVar5 = (moby->pos).y - *(float *)((int)pvVar13 + 0x184);
        fVar6 = (moby->pos).x - *(float *)((int)pvVar13 + 0x180);
        if ((2.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) &&
           (moby->state = '\x03', moby->animationId != '\x01')) {
          puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar15 + 0x114));
        }
      }
    }
  }
  else if (uVar1 == '\x03') {
    uVar3 = *(undefined4 *)((int)pvVar13 + 0x188);
    *(undefined4 *)(puVar15 + 8) = *(undefined4 *)((int)pvVar13 + 0x180);
    *(undefined4 *)(puVar15 + 9) = uVar3;
    uVar3 = *(undefined4 *)((int)pvVar13 + 0x18c);
    *(undefined4 *)((int)puVar15 + 0x44) = *(undefined4 *)((int)pvVar13 + 0x184);
    *(undefined4 *)((int)puVar15 + 0x4c) = uVar3;
    dVar29 = (double)M576_003c70d8(lVar19,3,puVar15[8],puVar15[9]);
    if ((*(int *)((int)pvVar13 + 0x1c4) != 2) || (5.0 <= dVar29)) {
      if ((dVar29 < 1.5) &&
         (moby->state = '\x04', fVar5 = animationSpeed, moby->animationId != '\x02')) {
        puVar15[0x22] = (longlong)(int)DAT_010c9f5c;
        puVar15[0x22] = (longlong)(int)(fVar5 * 5.5);
        MB_SetAnimation
                  (lVar19,2,*(undefined4 *)((int)puVar15 + 0x114),
                   *(undefined4 *)((int)puVar15 + 0x114));
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (((*(int *)((int)pvVar13 + 0x1c4) != 2) ||
        (fVar5 = (moby->pos).y - *(float *)((int)pvVar13 + 0x184),
        fVar6 = (moby->pos).x - *(float *)((int)pvVar13 + 0x180),
        10.0 < SQRT(fVar6 * fVar6 + fVar5 * fVar5))) &&
       (moby->state = '\x03', moby->animationId != '\x01')) {
      puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar15 + 0x114));
    }
  }
  else if (uVar1 == '\x01') {
    *(float *)((int)pvVar13 + 0x1d8) = -(g_FrameTimeSq * 10.0 - *(float *)((int)pvVar13 + 0x1d8));
    fVar7 = (moby->pos).x + *(float *)((int)pvVar13 + 0x1d0);
    fVar5 = (moby->pos).z;
    fVar2 = (moby->pos).w;
    (moby->pos).x = fVar7;
    fVar8 = (moby->pos).y + *(float *)((int)pvVar13 + 0x1d4);
    (moby->pos).y = fVar8;
    fVar6 = *(float *)((int)pvVar13 + 0x1d8);
    *(float *)(puVar15 + 0x18) = fVar7;
    fVar5 = fVar5 + fVar6;
    *(float *)((int)puVar15 + 0xc4) = fVar8;
    *(f32 *)((int)puVar15 + 0xcc) = fVar2;
    (moby->pos).z = fVar5;
    *(float *)(puVar15 + 0x19) = fVar5 + 1.0;
    dVar29 = (double)GetGroundZ(0x3fe0000000000000,uVar18 - 0x80,0);
    fVar2 = (moby->pos).z;
    uVar14 = (int)fVar2 >> 0x1f;
    if (dVar29 <= (double)(moby->pos).z) {
      if ((int)((uVar14 >> 1 ^ (uint)fVar2) - uVar14) < 0x41200000) {
        moby->state = '\x05';
      }
    }
    else {
      uVar1 = moby->animationId;
      (moby->pos).z = (float)dVar29;
      moby->state = '\x02';
      if (uVar1 != '\0') {
        puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\a';
    iVar22 = MB_randInt(2);
    if (iVar22 == 0) {
      MVar23 = moby->modeBits &
               (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    else {
      MVar23 = moby->modeBits | MIRROR;
    }
    moby->modeBits = MVar23 | LOCK_ROTATION;
    *(undefined4 *)((int)pvVar13 + 0x20) = 0x3f800000;
    *(undefined2 *)((int)pvVar13 + 0x24) = 1;
    *(undefined1 *)((int)pvVar13 + 0x58) = 8;
    *(undefined1 *)((int)pvVar13 + 0x5c) = 1;
    *(undefined4 *)((int)pvVar13 + 0x30) = 0x3f000000;
    *(undefined ***)((int)pvVar13 + 0x140) = &PTR_DAT_008460cc;
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  FastEulerToMtx(lVar19 + 0xc0,lVar19 + 0x40);
  if (*(int *)((int)pvVar13 + 500) != 0) {
    Delt(0.0,g_FrameTime * 4.0,(float *)((int)pvVar13 + 500));
    fVar17 = *(float *)((int)pvVar13 + 500) + 1.0;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar7 = (moby->transform).v0.x;
    fVar8 = (moby->transform).v0.y;
    fVar9 = (moby->transform).v0.z;
    fVar10 = (moby->transform).v1.x;
    fVar11 = (moby->transform).v1.y;
    fVar12 = (moby->transform).v1.z;
    (moby->transform).v2.x = (moby->transform).v2.x * fVar17;
    (moby->transform).v2.y = fVar5 * fVar17;
    (moby->transform).v2.z = fVar6 * fVar17;
    fVar5 = 1.0 - *(float *)((int)pvVar13 + 500);
    (moby->transform).v0.x = fVar7 * fVar5;
    (moby->transform).v0.y = fVar8 * fVar5;
    (moby->transform).v0.z = fVar9 * fVar5;
    (moby->transform).v1.x = fVar10 * fVar5;
    (moby->transform).v1.y = fVar11 * fVar5;
    (moby->transform).v1.z = fVar12 * fVar5;
    RegisterMobyDraw(&PTR_M577_003c83e0_0070d540,moby);
  }
  return;
}


