// game/update/moby749.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x445710-0x447768
#include "game/update/moby749.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby831.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0445710 (0x14 bytes)
void M749_00445710(void)

{
  DAT_0085a6e8 = 0x10000;
  return;
}


// 0x0445770 (0x47c bytes)
// inlined: FastAtan2 @0x44587c
double M749_00445770(double param_1,int param_2,float *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  uint unused;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x100;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar15;
  puVar12[0x22] = in_LR;
  puVar12[0x1c] = in_f28;
  puVar12[0x1d] = in_f29;
  puVar12[0x1e] = in_f30;
  puVar12[0x1f] = in_f31;
  fVar2 = *param_3;
  fVar3 = *(float *)(param_2 + 0x10);
  fVar4 = param_3[1];
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = fVar2 - fVar3;
  puVar12[0x1b] = unaff_r31;
  fVar8 = fVar4 - fVar5;
  *(float *)(puVar12 + 0x10) = (float)param_1;
  fVar7 = ABS(fVar6);
  fVar10 = ABS(fVar8);
  *(float *)((int)puVar12 + 0x84) = fVar6;
  puVar12[0x1a] = unaff_r30;
  *(float *)(puVar12 + 0x11) = fVar8;
  iVar11 = *(int *)(param_2 + 0x78);
  *(float *)((int)puVar12 + 0x8c) = fVar7 - fVar10;
  dVar26 = 0.0;
  dVar24 = (double)*(float *)(param_2 + 0x18);
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1d) & 4;
  fVar6 = param_3[2];
  fVar8 = ABS(*(float *)((int)puVar12 + 0x84));
  if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
    fVar8 = fVar10;
  }
  fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar9 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
    fVar9 = fVar7;
  }
  fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  puVar12[0x19] = unaff_r29;
  puVar12[0x18] = unaff_r28;
  puVar12[0x17] = unaff_r27;
  dVar23 = dVar26;
  if (0.0 < fVar8) {
    lVar16 = uVar15 - 0xf0;
    lVar21 = uVar15 - 0x60;
    lVar18 = uVar15 - 0x70;
    lVar22 = 2;
    fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
    fVar9 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0x9c) = fVar8;
    *(float *)((int)puVar12 + 0x94) = fVar8;
    *(float *)(puVar12 + 0x13) = fVar8;
    *(float *)(puVar12 + 0x12) = fVar8;
    fVar8 = fVar9 * fVar9;
    *(float *)((int)puVar12 + 0x94) = *(float *)((int)puVar12 + 0x94) * fVar9;
    *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar8;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar8 * fVar9;
    do {
      *(float *)((int)lVar16 + 0x90) = *(float *)((int)lVar16 + 0x80) * fVar8 * fVar8;
      iVar13 = (int)lVar18;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar8 * fVar8;
      lVar21 = lVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar21 = uVar15 - 0x70;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar21;
    do {
      fVar8 = *pfVar19;
      fVar9 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar16 + 0x90) = *(float *)((int)lVar16 + 0x90) * fVar8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar9;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar13 + 0x90)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar10 + fVar7);
  }
  fVar5 = fVar5 - fVar4;
  fVar3 = fVar3 - fVar2;
  dVar27 = (double)SQRT((float)(dVar24 - (double)fVar6) * (float)(dVar24 - (double)fVar6) +
                        fVar3 * fVar3 + fVar5 * fVar5);
  if (2.0 < dVar27) {
    dVar23 = (double)FastWrapRot((float)dVar23,*(float *)(iVar11 + 0x1fc));
  }
  bVar1 = *(byte *)(param_2 + 0x53);
  unused = (uint)bVar1;
  if ((uint)*(byte *)(param_2 + 0x52) == (uint)bVar1) {
    OrganicDeltAng
              ((float)dVar23,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 12.566371,(float *)(param_2 + 0x48),(uint)bVar1,
               (float *)(iVar11 + 500));
    dVar25 = 4.0;
    OrganicDelt
              ((float)dVar27,g_FrameTimeSq * 8.0,g_FrameTimeSq * 12.0,g_FrameTime * 4.0,
               (float *)(puVar12 + 0x10),unused,(float *)(iVar11 + 0x1f8));
    dVar23 = (double)*(float *)(iVar11 + 0x1f8);
    if (*(int *)(iVar11 + 0x1f8) < 0) {
      *(undefined4 *)(iVar11 + 0x1f8) = 0;
      dVar23 = dVar26;
    }
    fVar2 = *(float *)(param_2 + 0x48) + 1.5707963;
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    *(float *)(iVar11 + 0x278) = *(float *)(param_2 + 0x48);
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar2 * fVar3;
    *(float *)(puVar12 + 0xe) =
         (float)((double)(fVar2 * fVar5 * 2.601887e-06 +
                         fVar5 * -0.0001980741 +
                         fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * dVar23);
    fVar2 = *(float *)(iVar11 + 0x278);
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar2 = *(float *)(iVar11 + 0x1f8);
    *(undefined4 *)(puVar12 + 0xf) = 0;
    fVar8 = g_FrameTimeSq;
    fVar3 = fVar4 * fVar4;
    fVar5 = fVar3 * fVar3 * fVar4;
    fVar6 = fVar3 * fVar5;
    *(float *)((int)puVar12 + 0x74) =
         (fVar3 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) * fVar2
    ;
    *(float *)(puVar12 + 0xf) = -(fVar8 * 10.0 - *(float *)(iVar11 + 0x270));
    MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar26,param_2,uVar15 - 0x90);
    fVar2 = (float)((double)*(float *)(param_2 + 0x18) - dVar24);
    *(float *)(iVar11 + 0x270) = fVar2;
    if ((float)((double)g_FrameTime * dVar25) < fVar2) {
      *(float *)(iVar11 + 0x270) = (float)((double)g_FrameTime * dVar25);
    }
    if ((*(byte *)(param_2 + 0x70) & 2) == 0) {
      dVar27 = 37.0;
    }
  }
  return dVar27;
}


// 0x0445c08 (0x408 bytes)
void M749_00445c08(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  double dVar9;
  int local_40;
  float local_3c;
  float local_38 [2];
  longlong local_30;
  
  pvVar1 = param_1->pVar;
  uVar8 = ZEXT48(pvVar1);
  if (param_1->state != '\0') {
    if (g_gameMode == GAME_MODE_SCENE) {
      param_1->enabled = '\0';
      param_1->modeBits = param_1->modeBits | DISABLED;
    }
    else {
      param_1->enabled = '\x01';
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    local_3c = 0.0;
    iVar6 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar6,uVar8 + 0x20,0,&local_40,&local_3c,0,4);
    if (((local_40 != 1) && (param_1->state != '\f')) && (local_3c != 0.0)) {
      *(undefined4 *)((int)pvVar1 + 0x98) = 0x3f400000;
      *(float *)((int)pvVar1 + 0x20) = *(float *)((int)pvVar1 + 0x20) - local_3c;
      fVar4 = g_FrameTimeSq;
      fVar3 = DAT_0085a71c * g_FrameTimeSq;
      *(undefined4 *)((int)pvVar1 + 0x90) = 0x200;
      *(float *)((int)pvVar1 + 0x80) = fVar3;
      *(float *)((int)pvVar1 + 0x84) = DAT_0085a720 * fVar4;
      fVar3 = g_FrameTime;
      *(float *)((int)pvVar1 + 0x88) = DAT_0085a724 * g_FrameTime;
      fVar4 = DAT_0085a728;
      *(undefined1 *)((int)pvVar1 + 0xad) = 0;
      *(float *)((int)pvVar1 + 0x8c) = fVar4 * fVar3;
      *(undefined4 *)((int)pvVar1 + 0x94) = 0x29;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(float *)((int)pvVar1 + 0xbc) = fVar3 * 2.0;
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar6 + 0x10),*(undefined8 *)(iVar6 + 0x18),local_38,uVar8 + 0x88,
                 uVar8 + 0x8c);
      dVar9 = (double)local_38[0];
      MB_randInt(2);
      MB_StartKick(dVar9,param_1,uVar8 + 0x70);
      *(undefined4 *)((int)pvVar1 + 0xc0) = DAT_0085a738;
      *(undefined4 *)((int)pvVar1 + 0xc4) = DAT_0085a734;
      param_1->state = '\f';
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
      MB_UpdateLightsTransition(param_1,uVar8 + 0x60);
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar8 + 0x60);
    if (param_1->state == '\x03') {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e4)];
      MB_getTargetInArea
                (0x4050000000000000,param_1,uVar8 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    else {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e0)];
      MB_getTargetInArea
                (0x4038000000000000,param_1,uVar8 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    pMVar5 = g_heroMobyPtr;
    if (*(int *)((int)pvVar1 + 0x1c0) == 0) {
      *(float *)((int)pvVar1 + 0x180) = g_heroPosition.x;
      fVar3 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar1 + 0x1c0) = pMVar5;
      *(float *)((int)pvVar1 + 0x184) = fVar3;
      *(float *)((int)pvVar1 + 0x188) = g_heroPosition.z;
      *(float *)((int)pvVar1 + 0x18c) = g_heroPosition.w;
    }
    FastDecTimerS16(uVar8 + 0x276);
    if (*(int *)((int)pvVar1 + 0x38) != 0) {
      dVar9 = (double)MB_randRangeFloat(180.0,240.0);
      uVar7 = FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
      *(undefined2 *)((int)pvVar1 + 0x276) = uVar7;
    }
    *(undefined4 *)((int)pvVar1 + 0x38) = 0;
    if (((param_1->state == '\x05') || (param_1->state == '\b')) &&
       ((*(short *)((int)pvVar1 + 0x276) != 0 &&
        (param_1->state = '\n', param_1->animationId != '\x04')))) {
      local_30 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 20.5));
    }
  }
  return;
}


// 0x0446088 (0x16e0 bytes)
// inlined: FastAtan2 @0x446538, FastAtan2 @0x446b08, FastAtan2 @0x446eb4, FastAtan2 @0x447280
/* Moby 749 */

void UpdateMoby_749(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  undefined4 uVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  MobyInstance *pMVar13;
  float fVar14;
  ulonglong uVar15;
  undefined1 uVar19;
  int iVar16;
  int iVar17;
  uint uVar18;
  Vec4 *pVVar23;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  undefined8 uVar35;
  double dVar36;
  float fVar37;
  
  lVar27 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar22 = uVar15 - 0x180;
  puVar12 = (ulonglong *)lVar22;
  *puVar12 = uVar15;
  puVar12[0x32] = in_LR;
  puVar12[0x2f] = in_f31;
  puVar12[0x2e] = unaff_r31;
  puVar12[0x2d] = unaff_r30;
  puVar12[0x2c] = unaff_r29;
  puVar12[0x2b] = unaff_r28;
  pvVar9 = moby->pVar;
  M749_00445c08();
  iVar16 = *(int *)((int)pvVar9 + 0x1c0);
  if ((moby->enabled != '\0') &&
     (fVar37 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar37 * fVar37) < 26.0)) {
    MB_SetZBoundsFromGround(lVar27);
    moby->shadow = '\x15';
  }
  DoManipulator(0x4000ccccc0000000,moby,1,(Manipulator *)((int)pvVar9 + 0x200));
  bVar1 = moby->state;
  uVar2 = moby->animationId;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      if (uVar2 != '\x04') {
        uVar35 = MB_randRange(0,5);
        if (moby->animationId != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,4,uVar35,*(undefined4 *)((int)puVar12 + 0x144));
        }
        dVar31 = (double)MB_randRangeFloat(0.92,1.08);
        moby->unk58 = (float)dVar31;
      }
      DoMeander(0x3fe0000000000000,0x3fe0000000000000,lVar27,(int)pvVar9 + 0x240);
      if (*(int *)((int)pvVar9 + 0x1c4) != 2) {
        dVar31 = (double)MB_randRangeFloat(-20.0,20.0);
        *(float *)((int)pvVar9 + 0x1fc) = (float)(dVar31 * 0.01745329238474369);
        moby->state = '\x06';
        if (moby->animationId != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
    }
    else if (bVar1 == 4) {
      pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1e8)];
      dVar31 = (double)M749_00445770
                                 (0x3fe0000000000000,lVar27,
                                  pSVar11->points + *(short *)((int)pvVar9 + 0x274));
      if (1.0 <= dVar31) {
        if ((*(int *)((int)pvVar9 + 0x1c4) != 2) &&
           (moby->state = '\x06', moby->animationId != '\x04')) {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else if ((int)*(short *)((int)pvVar9 + 0x274) < pSVar11->cnt + -1) {
        *(short *)((int)pvVar9 + 0x274) = *(short *)((int)pvVar9 + 0x274) + 1;
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x01') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,1,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((*(int *)((int)pvVar9 + 0x1c4) != 2) && (moby->state = '\x04', uVar2 != '\x04')) {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    else if (bVar1 == 2) {
      dVar31 = (double)M749_00445770
                                 (0x3fe0000000000000,lVar27,
                                  Splines[*(int *)((int)pvVar9 + 0x1e8)]->points +
                                  *(short *)((int)pvVar9 + 0x274));
      if ((dVar31 < 1.0) && (moby->state = '\x01', moby->animationId != '\x02')) {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar27,2,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    else if (bVar1 == 1) {
      pMVar13 = g_MobyInstance + *(int *)((int)pvVar9 + 0x1ec);
      if ((pMVar13 == (MobyInstance *)0x0) || (pMVar13->state == 0xfd || pMVar13->state == 0xfe)) {
        moby->state = '\b';
        if (uVar2 != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else {
        fVar37 = (pMVar13->pos).x - (moby->pos).x;
        fVar5 = (pMVar13->pos).y - (moby->pos).y;
        fVar6 = ABS(fVar37);
        fVar4 = ABS(fVar5);
        *(float *)((int)puVar12 + 0xb4) = fVar37;
        *(float *)(puVar12 + 0x17) = fVar5;
        *(float *)((int)puVar12 + 0xbc) = fVar6 - fVar4;
        fVar37 = 0.0;
        uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar12 + 0xb4));
        if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
        fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        fVar8 = ABS(*(float *)(puVar12 + 0x17));
        if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
          fVar8 = fVar6;
        }
        if (0.0 < fVar5) {
          lVar21 = uVar15 - 0x170;
          lVar26 = uVar15 - 0x50;
          lVar24 = uVar15 - 0x60;
          lVar28 = 2;
          fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 300) = fVar5;
          *(float *)((int)puVar12 + 0x124) = fVar5;
          *(float *)(puVar12 + 0x25) = fVar5;
          *(float *)(puVar12 + 0x24) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 0x124) = *(float *)((int)puVar12 + 0x124) * fVar6;
          *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar5;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x110) * fVar5 * fVar5;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar15 - 0x60;
          pfVar25 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar24 = lVar26;
          do {
            fVar5 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x120) * fVar5;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar21 = 2;
          do {
            iVar16 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar17 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            fVar37 = fVar37 + *(float *)(iVar16 + 0x120) + *(float *)(iVar17 + 4) +
                     *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar4;
        }
        OrganicDeltAng
                  (fVar37,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x446010,
                   (float *)((int)pvVar9 + 500));
      }
    }
    else if (bVar1 == 0) {
      fVar3 = (moby->pos).x;
      moby->scale = moby->pClass->gScale * DAT_0085a718;
      *(f32 *)((int)pvVar9 + 0x1d0) = fVar3;
      *(f32 *)((int)pvVar9 + 0x1d4) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x1d8) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x1dc) = (moby->pos).w;
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar27,1,0,0);
      }
      *(undefined1 *)((int)pvVar9 + 0x29) = 1;
      fVar3 = (moby->pos).x;
      *(undefined **)((int)pvVar9 + 0x140) = &DAT_0085a70c;
      *(f32 *)((int)pvVar9 + 0x240) = fVar3;
      *(f32 *)((int)pvVar9 + 0x244) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x248) = (moby->pos).z;
      fVar3 = (moby->pos).w;
      *(undefined4 *)((int)pvVar9 + 0x25c) = 0x3fc00000;
      *(f32 *)((int)pvVar9 + 0x24c) = fVar3;
      fVar37 = g_FrameTime;
      *(float *)((int)pvVar9 + 600) = g_FrameTime * 2.9670596;
      uVar35 = 0x4000000000000000;
      *(float *)((int)pvVar9 + 0x254) = fVar37 * 2.0;
      fVar37 = (moby->pos).y - 127.0;
      fVar5 = (moby->pos).x - 150.0;
      if (SQRT(fVar5 * fVar5 + fVar37 * fVar37) < 5.0) {
        *(undefined4 *)((int)pvVar9 + 0x25c) = 0x3f400000;
      }
      uVar19 = FastDoubleToInt(0x4028000000000000);
      *(undefined1 *)((int)pvVar9 + 0x58) = uVar19;
      uVar19 = FastDoubleToInt(uVar35);
      *(undefined1 *)((int)pvVar9 + 0x5a) = uVar19;
      if (*(int *)((int)pvVar9 + 0x1e8) < 0) {
        moby->state = '\x05';
      }
      else if (*(int *)((int)pvVar9 + 0x1e4) < 0) {
        if (*(int *)((int)pvVar9 + 0x1ec) < 0) {
          DeleteMoby(moby);
          return;
        }
        *(f32 *)((int)pvVar9 + 0x1d0) = (moby->pos).x;
        *(f32 *)((int)pvVar9 + 0x1d4) = (moby->pos).y;
        *(f32 *)((int)pvVar9 + 0x1d8) = (moby->pos).z;
        *(f32 *)((int)pvVar9 + 0x1dc) = (moby->pos).w;
        moby->state = '\x01';
        if (moby->animationId != '\x02') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,2,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else {
        pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1e8)];
        pVVar23 = pSVar11->points + pSVar11->cnt + -1;
        *(float *)((int)pvVar9 + 0x1d0) = pVVar23->x;
        *(float *)((int)pvVar9 + 0x1d4) = pVVar23->y;
        *(float *)((int)pvVar9 + 0x1d8) = pVVar23->z;
        *(float *)((int)pvVar9 + 0x1dc) = pVVar23->w;
        (moby->pos).x = pSVar11->points[0].x;
        (moby->pos).y = pSVar11->points[0].y;
        (moby->pos).z = pSVar11->points[0].z;
        fVar37 = pSVar11->points[0].w;
        moby->state = '\x03';
        (moby->pos).w = fVar37;
      }
    }
  }
  else if (bVar1 == 0xc) {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar18 & 0x140) != 0) {
      PlayMobySound(7,0,moby);
      MB_SpawnExplosionSparks2
                (0x3fe8000000000000,0x4024000000000000,lVar27,lVar27 + 0x10,&DAT_00446010,
                 0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0xb) {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if (((uVar18 & 0x140) != 0) && (moby->state = '\x05', moby->animationId != '\x01')) {
      puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar27,1,0,*(undefined4 *)((int)puVar12 + 0x144));
    }
  }
  else if (bVar1 == 10) {
    dVar32 = (double)(moby->pos).x;
    dVar33 = (double)(moby->pos).y;
    fVar37 = (float)((double)*(float *)((int)pvVar9 + 0x180) - dVar32);
    *(float *)(puVar12 + 0x10) = fVar37;
    fVar5 = (float)((double)*(float *)((int)pvVar9 + 0x184) - dVar33);
    fVar6 = (moby->pos).z;
    *(float *)((int)puVar12 + 0x84) = fVar5;
    *(float *)(puVar12 + 0x11) = *(float *)((int)pvVar9 + 0x188) - fVar6;
    fVar4 = SQRT(fVar37 * fVar37 + fVar5 * fVar5);
    *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)((int)pvVar9 + 0x18c);
    dVar36 = 0.0;
    *(float *)(puVar12 + 0x11) = fVar6;
    uVar10 = *(undefined4 *)((int)pvVar9 + 0x1e0);
    dVar34 = (double)(fVar5 * (2.5 / fVar4));
    dVar29 = (double)(fVar37 * (2.5 / fVar4));
    dVar31 = dVar36;
    if (0.0 - fVar4 < 0.0) {
      dVar31 = dVar34;
    }
    dVar30 = dVar36;
    if (0.0 - fVar4 < 0.0) {
      dVar30 = dVar29;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar31 = dVar34;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar30 = dVar29;
    }
    *(float *)((int)puVar12 + 0x84) = (float)(dVar31 + dVar33);
    *(float *)(puVar12 + 0x10) = (float)(dVar30 + dVar32);
    iVar16 = MB_LineCrossesSpline(uVar10,lVar27 + 0x10,uVar15 - 0x100);
    if (iVar16 == 0) {
      if (moby->animationId != '\x04') {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
      M749_00445770(0x3fe0000000000000,lVar27,(int)pvVar9 + 0x180);
    }
    else {
      fVar37 = *(float *)(*(int *)((int)pvVar9 + 0x1c0) + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(*(int *)((int)pvVar9 + 0x1c0) + 0x14) - (moby->pos).y;
      dVar29 = ABS((double)fVar37);
      dVar32 = ABS((double)fVar5);
      *(float *)(puVar12 + 0x12) = fVar37;
      *(float *)((int)puVar12 + 0x94) = fVar5;
      *(float *)(puVar12 + 0x13) = (float)(dVar29 - dVar32);
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
      dVar31 = ABS((double)*(float *)(puVar12 + 0x12));
      if ((double)*(float *)(puVar12 + 0x13) - dVar36 < 0.0) {
        dVar31 = dVar32;
      }
      fVar37 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar32 = ABS((double)*(float *)((int)puVar12 + 0x94));
      if ((double)*(float *)(puVar12 + 0x13) - dVar36 < 0.0) {
        dVar32 = dVar29;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      if (dVar36 < dVar31) {
        lVar21 = uVar15 - 0x170;
        lVar26 = uVar15 - 0xb0;
        lVar24 = uVar15 - 0xc0;
        lVar28 = 2;
        fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xcc) = fVar6;
        *(float *)((int)puVar12 + 0xc4) = fVar6;
        *(float *)(puVar12 + 0x19) = fVar6;
        *(float *)(puVar12 + 0x18) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar4;
        *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar6;
        *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xb0) * fVar6 * fVar6;
          iVar16 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar15 - 0xc0;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xc0) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar21 = 2;
        do {
          iVar16 = (int)lVar22;
          iVar17 = (int)lVar26;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0xc0)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar37 + fVar5);
      }
      fVar37 = OrganicDeltAng
                         ((float)dVar36,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                          g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar9 + 500));
      if (((moby->field43_0x70 & 2U) != 0) &&
         (bVar1 = moby->animationId, iVar16 = MB_randInt((double)fVar37,2),
         (uint)bVar1 != iVar16 + 2U)) {
        iVar16 = MB_randInt(2);
        puVar12[0x28] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar27,iVar16 + 2,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*(int *)((int)pvVar9 + 0x1c4) == 2) {
        if ((*(short *)((int)pvVar9 + 0x276) == 0) &&
           (moby->state = '\b', moby->animationId != '\x04')) {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else {
        moby->state = '\x06';
        if (moby->animationId != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
    }
  }
  else if (bVar1 == 9) {
    iVar16 = FUN_0048c188(lVar27,(int)pvVar9 + 0x70);
    if (iVar16 != 0) {
      moby->state = '\x05';
      *(undefined2 *)((int)pvVar9 + 0x138) = 0;
    }
  }
  else if (bVar1 == 8) {
    dVar31 = (double)M749_00445770
                               (0x3fe0000000000000,lVar27,(int)pvVar9 + 0x1d0);
    if (1.5 <= dVar31) {
      if ((*(int *)((int)pvVar9 + 0x1c4) != 2) &&
         (moby->state = '\x06', moby->animationId != '\x04')) {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\x01') {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar27,1,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
  }
  else if (bVar1 == 7) {
    iVar17 = MB_MayaFrameTrigger(34.0,moby);
    if (iVar17 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar9 + 0x1c4) == 2) {
          moby->state = '\b';
          if (moby->animationId != '\x04') {
            puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
          }
        }
        else {
          fVar37 = (moby->pos).y;
          fVar5 = (moby->pos).x;
          fVar6 = fVar37 - *(float *)(iVar16 + 0x14);
          fVar4 = fVar5 - *(float *)(iVar16 + 0x10);
          if (SQRT(fVar4 * fVar4 + fVar6 * fVar6) <= 1.5) {
            fVar37 = *(float *)(iVar16 + 0x14) - fVar37;
            fVar5 = *(float *)(iVar16 + 0x10) - fVar5;
            fVar6 = ABS(fVar37);
            fVar7 = ABS(fVar5);
            *(float *)(puVar12 + 0x14) = fVar37;
            *(float *)((int)puVar12 + 0x9c) = fVar5;
            fVar37 = (moby->rotation).z;
            *(float *)((int)puVar12 + 0xa4) = fVar7 - fVar6;
            fVar5 = 0.0;
            uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
            fVar4 = ABS(*(float *)((int)puVar12 + 0x9c));
            if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
              fVar4 = fVar6;
            }
            fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
            fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
            fVar14 = ABS(*(float *)(puVar12 + 0x14));
            if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
              fVar14 = fVar7;
            }
            if (0.0 < fVar4) {
              lVar21 = uVar15 - 0x170;
              lVar26 = uVar15 - 0x90;
              lVar24 = uVar15 - 0xa0;
              lVar28 = 2;
              fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
              fVar7 = fVar4 * fVar4;
              *(float *)((int)puVar12 + 0xec) = fVar4;
              *(float *)((int)puVar12 + 0xe4) = fVar4;
              *(float *)(puVar12 + 0x1d) = fVar4;
              *(float *)(puVar12 + 0x1c) = fVar4;
              fVar4 = fVar7 * fVar7;
              *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar7;
              *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar4;
              *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar4 * fVar7;
              do {
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xd0) * fVar4 * fVar4;
                iVar16 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
                lVar26 = lVar26 + 8;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              lVar28 = 4;
              lVar26 = uVar15 - 0xa0;
              pfVar25 = (float *)&DAT_007358e0;
              lVar21 = lVar22;
              lVar24 = lVar26;
              do {
                fVar4 = *pfVar25;
                fVar7 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xe0) * fVar4;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              lVar21 = 2;
              do {
                iVar16 = (int)lVar22;
                lVar22 = lVar22 + 0x10;
                iVar17 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                fVar5 = fVar5 + *(float *)(iVar16 + 0xe0) + *(float *)(iVar17 + 4) +
                        *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              fVar5 = (fVar5 + 0.7853982) * fVar8 + fVar6;
            }
            dVar31 = (double)FastSubRots(fVar37,fVar5);
            if (dVar31 <= 0.1745329201221466) goto LAB_00447644;
          }
          moby->state = '\x06';
          if (moby->animationId != '\x04') {
            puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
          }
        }
      }
    }
    else {
      puVar12[0xe] = 0;
      DamageSphereAtBone
                (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar27,0,0,1);
    }
  }
  else if (bVar1 == 6) {
    dVar31 = (double)M749_00445770
                               (0x3fe0000000000000,lVar27,(int)pvVar9 + 0x180);
    if (dVar31 < (double)DAT_0085a72c) {
      fVar37 = *(float *)(iVar16 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar16 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar37);
      fVar7 = ABS(fVar5);
      *(float *)(puVar12 + 0x15) = fVar37;
      *(float *)((int)puVar12 + 0xac) = fVar5;
      fVar37 = (moby->rotation).z;
      *(float *)(puVar12 + 0x16) = fVar6 - fVar7;
      fVar5 = 0.0;
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar12 + 0x15));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar21 = uVar15 - 0x170;
        lVar24 = uVar15 - 0x80;
        lVar26 = uVar15 - 0x70;
        lVar28 = 2;
        fVar6 = (fVar14 - fVar4) / (fVar14 + fVar4);
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x10c) = fVar6;
        *(float *)((int)puVar12 + 0x104) = fVar6;
        *(float *)(puVar12 + 0x21) = fVar6;
        *(float *)(puVar12 + 0x20) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar4;
        *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar6;
        *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0xf0) * fVar6 * fVar6;
          iVar16 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar15 - 0x80;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0x100) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar21 = 2;
        do {
          iVar16 = (int)lVar22;
          iVar17 = (int)lVar26;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar5 = fVar5 + *(float *)(iVar16 + 0x100) + *(float *)(iVar17 + 4) +
                  *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        fVar5 = (fVar5 + 0.7853982) * fVar8 + fVar7;
      }
      dVar31 = (double)FastSubRots(fVar37,fVar5);
      if (dVar31 < 0.1745329201221466) {
        moby->state = '\a';
        fVar37 = animationSpeed;
        if (moby->animationId != '\x05') {
          puVar12[0x28] = (longlong)(int)DAT_0085a730;
          puVar12[0x28] = (longlong)(int)(fVar37 * 10.5);
          MB_SetAnimation
                    (lVar27,5,*(undefined4 *)((int)puVar12 + 0x144),
                     *(undefined4 *)((int)puVar12 + 0x144));
        }
        goto LAB_00447644;
      }
    }
    if ((*(int *)((int)pvVar9 + 0x1c4) == 2) && (moby->state = '\b', moby->animationId != '\x04')) {
      puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
    }
  }
LAB_00447644:
  uVar2 = moby->state;
  if ((uVar2 != '\f' && uVar2 != '\v') && (uVar2 != '\t')) {
    lVar27 = lVar27 + 0x10;
    dVar31 = (double)GetGroundZ(0x3fe0000000000000,lVar27,0);
    Delt((float)dVar31,g_FrameTime * 7.0,&(moby->pos).z);
    if (moby->state != '\x04') {
      MB_PushOutOfSplineWalls
                (0x3fd0000000000000,*(undefined4 *)((int)pvVar9 + 0x1e0),&DAT_00446010,lVar27,lVar27
                );
    }
  }
  iVar16 = *(int *)((int)pvVar9 + 0x1f0);
  if (((iVar16 != -1) &&
      (fVar37 = (moby->pos).y - g_MobyInstance[iVar16].pos.y,
      fVar5 = (moby->pos).x - g_MobyInstance[iVar16].pos.x,
      SQRT(fVar5 * fVar5 + fVar37 * fVar37) < 1.0)) && (g_MobyInstance[iVar16].oClass == BUTTON_033E))
  {
    FUN_0047ebac();
    *(undefined4 *)((int)pvVar9 + 0x1f0) = 0xffffffff;
  }
  return;
}


