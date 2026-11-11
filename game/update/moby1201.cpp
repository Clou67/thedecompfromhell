// game/update/moby1201.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1f956c-0x1fad90
#include "game/update/moby1201.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "game/update/moby1258.h"
#include "game/update/moby324.h"
#include "idol/fastfunc.h"

// 0x01f956c (0x68 bytes)
void M1201_001f956c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        g_MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x01f95d4 (0x14 bytes)
void M1201_001f95d4(void)

{
  DAT_007663b0 = 0x10000;
  return;
}


// 0x01f9680 (0x1710 bytes)
// inlined: FastAtan2 @0x1f9c90, FastRSqrt @0x1fa0d4
/* Moby 1201 */

void UpdateMoby_1201(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *manipulator;
  uint uVar9;
  undefined2 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  longlong lVar18;
  undefined4 uVar21;
  undefined8 uVar19;
  longlong lVar22;
  float *pfVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar45;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar26 = uVar17 - 0x220;
  puVar11 = (ulonglong *)lVar26;
  *puVar11 = uVar17;
  puVar11[0x46] = in_LR;
  puVar11[0x38] = in_f20;
  puVar11[0x39] = in_f21;
  puVar11[0x3a] = in_f22;
  puVar11[0x3b] = in_f23;
  puVar11[0x3c] = in_f24;
  puVar11[0x3d] = in_f25;
  puVar11[0x3e] = in_f26;
  puVar11[0x3f] = in_f27;
  puVar11[0x40] = in_f28;
  puVar11[0x41] = in_f29;
  puVar11[0x42] = in_f30;
  puVar11[0x43] = in_f31;
  puVar11[0x37] = unaff_r31;
  puVar11[0x31] = unaff_r25;
  puVar11[0x35] = unaff_r29;
  MVar8 = moby->modeBits;
  puVar11[0x36] = unaff_r30;
  manipulator = moby->pVar;
  uVar27 = ZEXT48(manipulator);
  puVar11[0x34] = unaff_r28;
  puVar11[0x33] = unaff_r27;
  puVar11[0x32] = unaff_r26;
  puVar11[0x30] = unaff_r24;
  moby->modeBits =
       MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_UPDATE|DISABLED);
  GetBonePosition(lVar18,3,uVar17 - 0x1a0);
  dVar50 = 0.4000000059604645;
  bVar3 = moby->state;
  *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) + 0.4;
  if (3 < bVar3) {
    iVar20 = FastDecTimerS16(uVar27 + 0x42);
    fVar4 = *(float *)(puVar11 + 0x10);
    if ((((iVar20 == 0) || (moby->setByGroup != '\x01')) ||
        (g_heroStateType == 7 || g_heroStateType == 0x14)) ||
       (g_heroState == DYING_GROUNDED)) {
      if (moby->setByGroup == '\x02') {
        fVar6 = *(float *)((int)puVar11 + 0x84) - (g_heroMobyPtr->pos).y;
        fVar4 = fVar4 - (g_heroMobyPtr->pos).x;
        fVar2 = *(float *)(puVar11 + 0x11) - (g_heroMobyPtr->pos).z;
        if ((1.2 < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6)) ||
           (g_standingOnMoby != moby)) {
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          moby->setByGroup = '\0';
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = loadVectorLeftIndexed(0x30,0x1f95e8);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar10 = storeVectorElementHalfWordIndexed(auVar51,0x42,uVar27);
          *(undefined2 *)((int)manipulator + 0x42) = uVar10;
        }
      }
      else if (((g_heroStateType != 7 && g_heroStateType != 0x14) &&
               (g_heroState != DYING_GROUNDED)) &&
              ((g_standingOnMoby == moby &&
               ((fVar6 = *(float *)((int)puVar11 + 0x84) - (g_heroMobyPtr->pos).y,
                fVar4 = fVar4 - (g_heroMobyPtr->pos).x,
                fVar2 = *(float *)(puVar11 + 0x11) - (g_heroMobyPtr->pos).z,
                SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6) < 1.2 &&
                (*(short *)((int)manipulator + 0x42) == 0)))))) {
        moby->setByGroup = '\x01';
        TransitionMovement(0x32,1);
      }
    }
    else {
      g_heroPosition.y = *(float *)((int)puVar11 + 0x84);
      g_heroPosition.z = *(float *)(puVar11 + 0x11);
      g_heroPosition.w = *(float *)((int)puVar11 + 0x8c);
      g_heroRotation.x = (moby->rotation).x;
      g_heroRotation.y = (moby->rotation).y;
      g_heroRotation.z = (moby->rotation).z;
      g_heroRotation.w = (moby->rotation).w;
      g_heroPosition.x = fVar4;
      dVar29 = (double)FastWrapRot(1.5707964,g_heroRotation.z);
      fVar4 = (float)(dVar29 + 1.570796251296997);
      dVar37 = (double)(float)(3.141592502593994 - dVar29);
      if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
        dVar37 = dVar29;
      }
      fVar6 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar6 = fVar4;
      }
      dVar49 = (double)(float)(-3.141592502593994 - dVar29);
      if ((double)(float)(-3.141592502593994 - dVar29) - dVar37 < 0.0) {
        dVar49 = dVar37;
      }
      fVar2 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
        fVar2 = fVar6;
      }
      dVar37 = (double)(float)(dVar49 * dVar49);
      fVar7 = fVar2 * fVar2;
      dVar44 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar49));
      fVar4 = fVar7 * fVar7 * fVar2;
      dVar43 = (double)(float)(dVar37 * dVar44);
      g_heroRotation.z = (float)dVar29;
      fVar6 = fVar7 * fVar4;
      g_heroPosition.y =
           ((float)(dVar37 * dVar43) * 2.601887e-06 +
           (float)(dVar43 * -0.0001980741071747616 +
                  (double)(float)(dVar44 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar37 * dVar49) *
                                                 -0.16666656732559204 + dVar49)))) * -0.7 +
           g_heroPosition.y;
      g_heroPosition.x =
           (fVar7 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar7 * fVar2 * -0.16666657 + fVar2) *
           -0.7 + g_heroPosition.x;
      FastMemSetZero(&g_heroVelocity,0x90);
      if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
        if (moby->state != '\x05') {
          *(undefined2 *)((int)manipulator + 0x52) = 2;
          SetCameraPosition(lVar18 + 0x10,lVar18 + 0x40,0,0,0);
          if (moby->animationId != '\x05') {
            puVar11[0x2e] = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation(lVar18,5,0,*(undefined4 *)((int)puVar11 + 0x174));
          }
        }
        moby->state = '\x05';
      }
      else {
        Camera_DeactivateMobyDrivenCam(0);
        TransitionMovement(0,1);
        moby->setByGroup = '\x02';
        moby->state = '\x04';
        MB_SetAnimation(lVar18,0,0,1);
      }
    }
  }
  bVar3 = moby->state;
  if (bVar3 < 4) {
    if (bVar3 == 0) {
      AttachManipulator(moby,0,manipulator);
      fVar5 = (moby->pos).z;
      *(f32 *)(puVar11 + 8) = (moby->pos).x;
      *(f32 *)(puVar11 + 9) = fVar5;
      fVar5 = (moby->pos).w;
      *(f32 *)((int)puVar11 + 0x44) = (moby->pos).y;
      *(f32 *)((int)puVar11 + 0x4c) = fVar5;
      FUN_00342088(lVar18);
      fVar5 = (moby->pos).z;
      moby->state = '\x04';
      *(f32 *)((int)manipulator + 0x5c) = fVar5;
      *(undefined4 *)((int)manipulator + 0x44) = 0;
      (moby->rotation).z = 0.0;
      *(undefined2 *)((int)manipulator + 0x42) = 0;
      *(undefined2 *)((int)manipulator + 0x40) = 0;
      *(undefined4 *)((int)manipulator + 0x48) = 0;
      *(undefined4 *)((int)manipulator + 0x4c) = 0;
      *(undefined4 *)((int)manipulator + 0x68) = 0xffffffff;
      DAT_009637cc = moby;
    }
  }
  else if (bVar3 < 5) {
    fVar4 = (moby->pos).y;
    fVar6 = (moby->pos).x;
    fVar2 = fVar4 - g_heroPosition.y;
    fVar7 = fVar6 - g_heroPosition.x;
    uVar45 = 0x4010000000000000;
    if ((SQRT(fVar7 * fVar7 + fVar2 * fVar2) < 4.0) || (g_standingOnMoby == moby)) {
      fVar6 = g_heroPosition.x - fVar6;
      fVar4 = g_heroPosition.y - fVar4;
      fVar2 = *(float *)((int)manipulator + 0x5c);
      fVar7 = (moby->pos).z;
      fVar14 = ABS(fVar6);
      fVar13 = ABS(fVar4);
      *(float *)(puVar11 + 0x28) = fVar6;
      *(float *)((int)puVar11 + 0x144) = fVar4;
      *(float *)(puVar11 + 0x29) = fVar14 - fVar13;
      uVar24 = *(uint *)(puVar11 + 0x28);
      fVar4 = *(float *)(puVar11 + 0x28);
      uVar9 = *(uint *)((int)puVar11 + 0x144);
      (moby->pos).z = ((fVar2 - 1.0) - fVar7) * 0.11 + fVar7;
      dVar37 = 0.0;
      uVar27 = (ulonglong)(uVar24 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x29) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      fVar4 = ABS(fVar4);
      if (*(float *)(puVar11 + 0x29) - 0.0 < 0.0) {
        fVar4 = fVar13;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar6 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar11 + 0x144));
      if (*(float *)(puVar11 + 0x29) - 0.0 < 0.0) {
        fVar7 = fVar14;
      }
      dVar29 = dVar37;
      if (0.0 < fVar4) {
        lVar18 = uVar17 - 0x210;
        lVar25 = uVar17 - 0xc4;
        lVar22 = uVar17 - 0xd4;
        lVar28 = 2;
        fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
        fVar7 = fVar4 * fVar4;
        *(float *)(puVar11 + 0x2b) = fVar4;
        *(float *)(puVar11 + 0x2a) = fVar4;
        *(float *)((int)puVar11 + 0x154) = fVar4;
        *(float *)((int)puVar11 + 0x14c) = fVar4;
        fVar4 = fVar7 * fVar7;
        *(float *)(puVar11 + 0x2a) = *(float *)(puVar11 + 0x2a) * fVar7;
        *(float *)((int)puVar11 + 0x154) = *(float *)((int)puVar11 + 0x154) * fVar4;
        *(float *)(puVar11 + 0x2b) = *(float *)(puVar11 + 0x2b) * fVar4 * fVar7;
        do {
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x13c) * fVar4 * fVar4;
          iVar20 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar17 - 0xd4;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar26;
        lVar22 = lVar25;
        do {
          fVar4 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x14c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar20 = (int)lVar26;
          iVar12 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x14c)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar6);
      }
      dVar29 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
      dVar29 = (double)FastWrapRot((float)dVar29,1.5707964);
      dVar29 = (double)FastWrapRot
                                 (*(float *)((int)manipulator + 0x60),
                                  (float)(dVar29 * 0.009999999776482582));
      *(float *)((int)manipulator + 0x60) = (float)(dVar29 * 0.8999999761581421);
      dVar29 = (double)FastWrapRot
                                 ((moby->rotation).z,(float)(dVar29 * 0.8999999761581421));
      (moby->rotation).z = (float)dVar29;
      fVar4 = (moby->transform).v1.y * DAT_007663f4;
      fVar6 = (moby->transform).v1.z * DAT_007663f4;
      fVar2 = (moby->transform).v0.y * DAT_007663f0;
      fVar7 = (moby->transform).v0.z * DAT_007663f0;
      fVar13 = (moby->transform).v2.y * DAT_007663f8;
      fVar14 = (moby->transform).v2.z * DAT_007663f8;
      iVar20 = *(int *)((int)manipulator + 0x68);
      fVar16 = (moby->transform).v2.x * DAT_007663f8 +
               (moby->transform).v0.x * DAT_007663f0 + (moby->transform).v1.x * DAT_007663f4 +
               *(float *)(puVar11 + 0x10);
      fVar15 = (moby->transform).v2.w * DAT_007663f8 +
               (moby->transform).v0.w * DAT_007663f0 + (moby->transform).v1.w * DAT_007663f4 +
               DAT_007663fc;
      *(float *)(puVar11 + 0x12) = fVar16;
      *(float *)((int)puVar11 + 0x94) = fVar13 + fVar2 + fVar4 + *(float *)((int)puVar11 + 0x84);
      *(float *)(puVar11 + 0x13) = fVar14 + fVar7 + fVar6 + *(float *)(puVar11 + 0x11);
      *(float *)((int)puVar11 + 0x9c) = fVar15;
      if (iVar20 == -1) {
        *(undefined4 *)((int)manipulator + 0x6c) = 0;
        uVar21 = CreatePointLight2
                           ((float)dVar50,dVar37,uVar45,uVar45,uVar45,(Vec4 *)(puVar11 + 0x12));
        *(undefined4 *)((int)manipulator + 0x68) = uVar21;
        PlayMobySound(1,0,moby);
      }
      else {
        PointLights[iVar20].pos.x = fVar16;
        PointLights[iVar20].pos.y = *(float *)((int)puVar11 + 0x94);
        PointLights[iVar20].pos.z = *(float *)(puVar11 + 0x13);
        uVar24 = *(int *)((int)manipulator + 0x6c) + 1;
        *(uint *)((int)manipulator + 0x6c) = uVar24;
        if ((int)uVar24 < 0x29) {
          if (((uVar24 & 4) == 0) || ((0x18 < (int)uVar24 && ((uVar24 & 10) == 10)))) {
            PointLights[iVar20].color.x = 4.0;
            PointLights[iVar20].pos.w = 0.4;
          }
          else {
            PointLights[iVar20].pos.w = 0.0;
          }
        }
        else {
          PointLights[iVar20].color.x = 4.0;
          PointLights[iVar20].pos.w = 0.4;
        }
      }
    }
    else {
      fVar5 = (moby->pos).z;
      uVar24 = (int)fVar5 >> 0x1f;
      uVar9 = (int)*(uint *)((int)manipulator + 0x5c) >> 0x1f;
      fVar4 = *(float *)((int)manipulator + 0x5c);
      if ((int)((uVar24 >> 1 ^ (uint)fVar5) - uVar24) <
          (int)((uVar9 >> 1 ^ *(uint *)((int)manipulator + 0x5c)) - uVar9)) {
        fVar4 = (moby->pos).z + g_FrameTime;
      }
      bVar1 = g_standingOnMoby != moby;
      (moby->pos).z = fVar4;
      if ((bVar1) && (*(int *)((int)manipulator + 0x68) != -1)) {
        PlayMobySound(2,0,moby);
        DeletePointLight(*(undefined4 *)((int)manipulator + 0x68));
        *(undefined4 *)((int)manipulator + 0x68) = 0xffffffff;
      }
    }
  }
  else if (bVar3 < 6) {
    fVar5 = (moby->pos).z;
    uVar24 = (int)fVar5 >> 0x1f;
    uVar9 = (int)*(uint *)((int)manipulator + 0x5c) >> 0x1f;
    fVar4 = *(float *)((int)manipulator + 0x5c);
    fVar6 = *(float *)(puVar11 + 0x15);
    if ((int)((uVar24 >> 1 ^ (uint)fVar5) - uVar24) <
        (int)((uVar9 >> 1 ^ *(uint *)((int)manipulator + 0x5c)) - uVar9)) {
      fVar4 = (moby->pos).z + g_FrameTime;
    }
    DAT_009637cc = moby;
    (moby->pos).z = fVar4;
    fVar4 = g_heroPadStick;
    *(float *)(puVar11 + 0x14) = g_heroPadStick;
    dVar37 = -1.0;
    dVar50 = dVar37;
    if (g_GameSettings.CameraUpDown != 0) {
      dVar50 = 1.0;
    }
    fVar2 = (float)((double)DAT_0096ba04 * dVar50);
    *(float *)((int)puVar11 + 0xa4) = -fVar2;
    dVar50 = 1.0;
    fVar7 = fVar4 * fVar4 + --(fVar2 * fVar2);
    if (1.0 < SQRT(fVar7)) {
      fVar13 = 1.0 / SQRT(fVar7);
      fVar13 = -(fVar7 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
      fVar13 = -(fVar7 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
      fVar13 = -(fVar7 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
      fVar4 = fVar4 * fVar13;
      *(float *)(puVar11 + 0x14) = fVar4;
      *(float *)(puVar11 + 0x15) = fVar6 * fVar13;
      *(float *)((int)puVar11 + 0xa4) = -(fVar2 * fVar13);
    }
    fVar6 = DAT_0071f418;
    fVar4 = *(float *)((int)manipulator + 0x60) + -(DAT_0071f418 * 3.1415927 * fVar4);
    *(float *)((int)manipulator + 0x60) = fVar4;
    *(float *)((int)manipulator + 100) =
         *(float *)((int)manipulator + 100) + -(fVar6 * 0.7853982 * *(float *)((int)puVar11 + 0xa4))
    ;
    dVar29 = (double)FastWrapRot((moby->rotation).z,fVar4);
    (moby->rotation).z = (float)dVar29;
    dVar29 = (double)FastWrapRot
                               (*(float *)((int)manipulator + 0x44),
                                *(float *)((int)manipulator + 100));
    *(float *)((int)manipulator + 0x44) = (float)dVar29;
    if (-0.5235987901687622 <= dVar29) {
      fVar4 = *(float *)((int)manipulator + 100);
      if (0.5235987901687622 < dVar29) {
        *(undefined4 *)((int)manipulator + 0x44) = 0x3f060a92;
        fVar4 = 0.0;
        dVar29 = 0.5235987901687622;
      }
    }
    else {
      *(undefined4 *)((int)manipulator + 0x44) = 0xbf060a92;
      fVar4 = 0.0;
      dVar29 = -0.5235987901687622;
    }
    *(float *)((int)manipulator + 0x60) = *(float *)((int)manipulator + 0x60) * 0.97;
    *(float *)((int)manipulator + 100) = fVar4 * 0.97;
    FastQuaternionToEuler(-dVar29,uVar27 + 0x10,1);
    if ((g_Pad.downButtons & CIRCLE) == 0) {
      if ((moby->animationId != '\x05') && ((moby->field43_0x70 & 2U) != 0)) {
        MB_SetAnimation(lVar18,5,0,1);
      }
    }
    else if ((g_Pad.buttonsPressedThisFrame & CIRCLE) == 0) {
      if (moby->updateId == '\x03') {
        dVar29 = (double)BlendAnimFrame(moby);
        if (0.25 < ABS((float)(dVar29 - dVar50))) {
          if ((moby->field43_0x70 & 2U) != 0) {
            MB_SetAnimation(lVar18,4,0,1);
          }
        }
        else {
          dVar49 = (double)(g_FrameTime * 60.0);
          dVar29 = (double)FastWrapRot(1.5707964,(moby->rotation).z);
          MB_SphericalToVector
                    ((float)dVar49,(float)dVar29,*(float *)((int)manipulator + 0x44),
                     (float *)(puVar11 + 0x16));
          lVar26 = uVar17 - 0x160;
          GetBonePosition(lVar18,1,lVar26);
          *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar11 + 0x18);
          fVar4 = animationSpeed;
          *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(puVar11 + 0x19);
          *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar11 + 0x16);
          *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 0x17);
          *(undefined4 *)((int)puVar11 + 0x44) = *(undefined4 *)((int)puVar11 + 0xc4);
          *(undefined4 *)((int)puVar11 + 0x4c) = *(undefined4 *)((int)puVar11 + 0xcc);
          *(undefined4 *)((int)puVar11 + 0x54) = *(undefined4 *)((int)puVar11 + 0xb4);
          *(undefined4 *)((int)puVar11 + 0x5c) = *(undefined4 *)((int)puVar11 + 0xbc);
          puVar11[0x2e] = (longlong)(int)(fVar4 * 90.5);
          FUN_00229a90(lVar18);
          PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x74,0x1f95e8);
          auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          dVar48 = 10.5;
          auVar52 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          iVar20 = 0;
          auVar53 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x78,0x1f95e8);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          dVar47 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)manipulator + 0x54) = 0;
          dVar46 = 0.0;
          dVar44 = -0.3500000238418579;
          dVar43 = 3.0;
          dVar49 = 6.0;
          dVar29 = 5.5;
          uVar45 = 0x40e86a0000000000;
          do {
            *(undefined4 *)(puVar11 + 0x1a) = 0;
            *(undefined4 *)((int)puVar11 + 0xd4) = 0;
            *(undefined4 *)(puVar11 + 0x1b) = 0;
            *(undefined4 *)((int)puVar11 + 0xdc) = 0;
            dVar30 = (double)MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)(puVar11 + 0x1a) = (float)dVar30;
            dVar30 = (double)MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)((int)puVar11 + 0xd4) = (float)dVar30;
            dVar31 = (double)MB_randRangeFloat((float)dVar37,(float)dVar50);
            dVar32 = (double)*(float *)((int)puVar11 + 0xb4);
            dVar33 = (double)*(float *)(puVar11 + 0x16);
            dVar34 = (double)*(float *)((int)puVar11 + 0xd4);
            dVar36 = (double)*(float *)(puVar11 + 0x17);
            dVar40 = (double)*(float *)(puVar11 + 0x1a);
            dVar30 = (double)DAT_0071f408;
            *(float *)(puVar11 + 0x1b) = (float)dVar31;
            dVar42 = (double)g_FrameTime;
            *(undefined4 *)((int)puVar11 + 0xdc) = *(undefined4 *)((int)puVar11 + 0xbc);
            dVar38 = (double)SQRT((float)(dVar31 * dVar31 +
                                         (double)(float)(dVar40 * dVar40 +
                                                        (double)(float)(dVar34 * dVar34))));
            dVar41 = (double)(float)((double)(SQRT((float)(dVar36 * dVar36 +
                                                          (double)(float)(dVar33 * dVar33 +
                                                                         (double)(float)(dVar32 * 
                                                  dVar32)))) * (float)(dVar30 * dVar44 + dVar50)) /
                                    dVar38);
            dVar30 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            dVar35 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            dVar39 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            *(float *)(puVar11 + 0x1b) = (float)(dVar36 + dVar30);
            *(float *)((int)puVar11 + 0xd4) = (float)(dVar32 + dVar35);
            *(float *)(puVar11 + 0x1a) = (float)(dVar33 + dVar39);
            dVar30 = (double)MB_randRangeFloat
                                       ((float)(dVar42 * dVar43),(float)(dVar42 * dVar49));
            fVar6 = *(float *)((int)puVar11 + 0xd4);
            fVar2 = *(float *)(puVar11 + 0x1a);
            fVar7 = *(float *)(puVar11 + 0x1b);
            dVar32 = (double)animationSpeed;
            dVar31 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar29);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar48);
            fVar4 = (float)(dVar30 / dVar31);
            dVar30 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            dVar32 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            dVar33 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            *(float *)(puVar11 + 0x1a) = (float)dVar30;
            *(float *)((int)puVar11 + 0xd4) = (float)dVar32;
            *(float *)(puVar11 + 0x1b) = (float)dVar33;
            uVar19 = MB_randRange
                               (*(undefined4 *)((int)puVar11 + 0x174),
                                *(undefined4 *)((int)puVar11 + 0x174));
            SpawnPart_27(uVar45,lVar26,uVar17 - 0x150,0x5f2f4f6f,uVar19);
            iVar20 = iVar20 + 1;
          } while (iVar20 < 5);
          fVar6 = *(float *)((int)puVar11 + 0xb4);
          fVar2 = *(float *)(puVar11 + 0x16);
          fVar7 = *(float *)(puVar11 + 0x17);
          dVar49 = (double)animationSpeed;
          dVar29 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
          fVar4 = (float)((double)(g_FrameTime * 0.5) / dVar29);
          dVar37 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          dVar43 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          dVar44 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          *(float *)(puVar11 + 0x16) = (float)dVar37;
          *(float *)((int)puVar11 + 0xb4) = (float)dVar43;
          *(float *)(puVar11 + 0x17) = (float)dVar44;
          puVar11[0x2e] = (longlong)(int)(dVar49 * 4.5);
          puVar11[0x2e] = (longlong)(int)(dVar49 * dVar47);
          uVar45 = MB_randRange
                             (*(undefined4 *)((int)puVar11 + 0x174),
                              *(undefined4 *)((int)puVar11 + 0x174));
          SpawnPart_27(0x411e848000000000,lVar26,uVar17 - 0x170,0x2f4f7f7f,uVar45);
        }
      }
      else if (moby->updateId == '\x04') {
        dVar29 = (double)BlendAnimFrame(moby);
        if (0.25 < ABS((float)(dVar29 - dVar50))) {
          if ((moby->field43_0x70 & 2U) != 0) {
            MB_SetAnimation(lVar18,3,0,1);
          }
        }
        else {
          dVar49 = (double)(g_FrameTime * 60.0);
          dVar29 = (double)FastWrapRot(1.5707964,(moby->rotation).z);
          MB_SphericalToVector
                    ((float)dVar49,(float)dVar29,*(float *)((int)manipulator + 0x44),
                     (float *)(puVar11 + 0x1c));
          lVar26 = uVar17 - 0x130;
          GetBonePosition(lVar18,2,lVar26);
          fVar4 = animationSpeed;
          *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar11 + 0x1e);
          *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(puVar11 + 0x1f);
          *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar11 + 0x1c);
          *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 0x1d);
          *(undefined4 *)((int)puVar11 + 0x44) = *(undefined4 *)((int)puVar11 + 0xf4);
          *(undefined4 *)((int)puVar11 + 0x4c) = *(undefined4 *)((int)puVar11 + 0xfc);
          *(undefined4 *)((int)puVar11 + 0x54) = *(undefined4 *)((int)puVar11 + 0xe4);
          *(undefined4 *)((int)puVar11 + 0x5c) = *(undefined4 *)((int)puVar11 + 0xec);
          puVar11[0x2e] = (longlong)(int)(fVar4 * 90.5);
          FUN_00229a90(lVar18);
          PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x74,0x1f95e8);
          auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          dVar48 = 10.5;
          auVar52 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar53 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          iVar20 = 0;
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x78,0x1f95e8);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          dVar47 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)manipulator + 0x54) = 1;
          dVar46 = 0.0;
          dVar44 = -0.3500000238418579;
          dVar43 = 3.0;
          dVar49 = 6.0;
          dVar29 = 5.5;
          uVar45 = 0x40e86a0000000000;
          do {
            *(undefined4 *)(puVar11 + 0x20) = 0;
            *(undefined4 *)((int)puVar11 + 0x104) = 0;
            *(undefined4 *)(puVar11 + 0x21) = 0;
            *(undefined4 *)((int)puVar11 + 0x10c) = 0;
            dVar30 = (double)MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)(puVar11 + 0x20) = (float)dVar30;
            dVar30 = (double)MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)((int)puVar11 + 0x104) = (float)dVar30;
            dVar31 = (double)MB_randRangeFloat((float)dVar37,(float)dVar50);
            dVar32 = (double)*(float *)((int)puVar11 + 0xe4);
            dVar33 = (double)*(float *)(puVar11 + 0x1c);
            dVar34 = (double)*(float *)((int)puVar11 + 0x104);
            dVar36 = (double)*(float *)(puVar11 + 0x1d);
            dVar40 = (double)*(float *)(puVar11 + 0x20);
            dVar30 = (double)DAT_0071f408;
            *(float *)(puVar11 + 0x21) = (float)dVar31;
            dVar42 = (double)g_FrameTime;
            *(undefined4 *)((int)puVar11 + 0x10c) = *(undefined4 *)((int)puVar11 + 0xec);
            dVar38 = (double)SQRT((float)(dVar31 * dVar31 +
                                         (double)(float)(dVar40 * dVar40 +
                                                        (double)(float)(dVar34 * dVar34))));
            dVar41 = (double)(float)((double)(SQRT((float)(dVar36 * dVar36 +
                                                          (double)(float)(dVar33 * dVar33 +
                                                                         (double)(float)(dVar32 * 
                                                  dVar32)))) * (float)(dVar30 * dVar44 + dVar50)) /
                                    dVar38);
            dVar30 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            dVar35 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            dVar39 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            *(float *)(puVar11 + 0x21) = (float)(dVar36 + dVar30);
            *(float *)((int)puVar11 + 0x104) = (float)(dVar32 + dVar35);
            *(float *)(puVar11 + 0x20) = (float)(dVar33 + dVar39);
            dVar30 = (double)MB_randRangeFloat
                                       ((float)(dVar42 * dVar43),(float)(dVar42 * dVar49));
            fVar6 = *(float *)((int)puVar11 + 0x104);
            fVar2 = *(float *)(puVar11 + 0x20);
            fVar7 = *(float *)(puVar11 + 0x21);
            dVar32 = (double)animationSpeed;
            dVar31 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar29);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar48);
            fVar4 = (float)(dVar30 / dVar31);
            dVar30 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            dVar32 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            dVar33 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            *(float *)(puVar11 + 0x20) = (float)dVar30;
            *(float *)((int)puVar11 + 0x104) = (float)dVar32;
            *(float *)(puVar11 + 0x21) = (float)dVar33;
            uVar19 = MB_randRange
                               (*(undefined4 *)((int)puVar11 + 0x174),
                                *(undefined4 *)((int)puVar11 + 0x174));
            SpawnPart_27(uVar45,lVar26,uVar17 - 0x120,0x5f2f4f6f,uVar19);
            iVar20 = iVar20 + 1;
          } while (iVar20 < 5);
          fVar6 = *(float *)((int)puVar11 + 0xe4);
          fVar2 = *(float *)(puVar11 + 0x1c);
          fVar7 = *(float *)(puVar11 + 0x1d);
          dVar49 = (double)animationSpeed;
          dVar29 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
          fVar4 = (float)((double)(g_FrameTime * 0.5) / dVar29);
          dVar37 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          dVar43 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          dVar44 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          *(float *)(puVar11 + 0x1c) = (float)dVar37;
          *(float *)((int)puVar11 + 0xe4) = (float)dVar43;
          *(float *)(puVar11 + 0x1d) = (float)dVar44;
          puVar11[0x2e] = (longlong)(int)(dVar49 * 4.5);
          puVar11[0x2e] = (longlong)(int)(dVar49 * dVar47);
          uVar45 = MB_randRange
                             (*(undefined4 *)((int)puVar11 + 0x174),
                              *(undefined4 *)((int)puVar11 + 0x174));
          SpawnPart_27(0x411e848000000000,lVar26,uVar17 - 0x140,0x2f4f7f7f,uVar45);
        }
      }
    }
    else {
      MB_SetAnimation
                (lVar18,(ZERO_MASK((uint)*(ushort *)((int)manipulator + 0x54)) & 1U
                        ) + 3,0,1);
    }
    iVar20 = FastDecTimerS16(uVar27 + 0x52);
    if (iVar20 != 0) {
      UpdateMobyTransform(moby);
      moby->modeBits = moby->modeBits | NO_POST_UPDATE;
      DeactivateMobyDrivenCamAccel();
      GetBonePosition(lVar18,0,uVar17 - 0x180);
      dVar49 = 1.5707963705062866;
      dVar29 = (double)DAT_007663e0;
      dVar37 = (double)FastWrapRot(1.5707964,(moby->rotation).z);
      MB_SphericalToVector
                ((float)dVar29,(float)dVar37,*(float *)((int)manipulator + 0x44),
                 (float *)(puVar11 + 0x22));
      fVar4 = *(float *)(puVar11 + 0x23) + DAT_007663e4;
      *(undefined4 *)((int)puVar11 + 300) = *(undefined4 *)((int)puVar11 + 0xac);
      *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x14) + *(float *)(puVar11 + 0x22);
      *(float *)(puVar11 + 0x23) = fVar4;
      *(float *)((int)puVar11 + 0x124) =
           *(float *)((int)puVar11 + 0xa4) + *(float *)((int)puVar11 + 0x114);
      *(float *)(puVar11 + 0x25) = *(float *)(puVar11 + 0x15) + fVar4;
      Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0x24));
      *(undefined4 *)(puVar11 + 0x26) = 0;
      fVar4 = (moby->rotation).z;
      *(float *)((int)puVar11 + 0x134) = -*(float *)((int)manipulator + 0x44);
      dVar37 = (double)FastWrapRot((float)dVar49,fVar4);
      *(float *)(puVar11 + 0x27) = (float)dVar37;
      Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x26));
    }
    puVar11[0xe] = 4;
    DrawTargetCrosshair((float)dVar50,moby,0xff0f0fff,4);
  }
  return;
}


