// game/update/moby615.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3dd9ac-0x3deb1c
#include "game/update/moby615.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby617.h"
#include "idol/fastfunc.h"

// 0x03dd9ac (0x14 bytes)
void M615_003dd9ac(void)

{
  DAT_00853ad8 = 0x10000;
  return;
}


// 0x03dda00 (0x430 bytes)
// inlined: FastAtan2 @0x3ddb40
void M615_003dda00(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Cuboid *pCVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar12;
  puVar7[0x20] = in_LR;
  puVar7[0x19] = in_f27;
  puVar7[0x1a] = in_f28;
  puVar7[0x1b] = in_f29;
  puVar7[0x1c] = in_f30;
  puVar7[0x1d] = in_f31;
  puVar7[0x17] = unaff_r30;
  puVar7[0x16] = unaff_r29;
  iVar5 = *(int *)(param_3 + 0x78);
  puVar7[0x18] = unaff_r31;
  iVar6 = *(int *)(iVar5 + 0xe8);
  puVar7[0x15] = unaff_r28;
  pCVar11 = Cuboids;
  if (iVar6 == -1) {
    dVar20 = (double)FastWrapRot(*(float *)(param_3 + 0x48),1.5707964);
    dVar21 = (double)FastWrapRot(*(float *)(param_3 + 0x48),-1.5707964);
    fVar2 = GameCamera.posX - *(float *)(param_3 + 0x10);
    fVar4 = GameCamera.posY - *(float *)(param_3 + 0x14);
    fVar1 = ABS(fVar2);
    fVar3 = ABS(fVar4);
    *(float *)(puVar7 + 0xe) = fVar2;
    *(float *)((int)puVar7 + 0x74) = fVar4;
    *(float *)(puVar7 + 0xf) = fVar1 - fVar3;
    dVar23 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar3 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar17 = uVar12 - 0xe0;
      lVar16 = uVar12 - 0x74;
      lVar14 = uVar12 - 100;
      lVar19 = 2;
      fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x11) = fVar2;
      *(float *)(puVar7 + 0x10) = fVar2;
      *(float *)((int)puVar7 + 0x84) = fVar2;
      *(float *)((int)puVar7 + 0x7c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar2;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar2 * fVar2;
        iVar5 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar12 - 0x74;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar14 = lVar17;
      lVar16 = lVar13;
      do {
        fVar2 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar14 = 2;
      do {
        iVar5 = (int)lVar13;
        iVar6 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar5 + 0x7c)) + *(float *)(iVar6 + 4)
                          + *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar1);
    }
    dVar22 = (double)FastSubRots((float)dVar23,(float)dVar20);
    dVar23 = (double)FastSubRots((float)dVar23,(float)dVar21);
    fVar2 = g_heroPosition.w;
    if (dVar22 - dVar23 < 0.0) {
      dVar21 = dVar20;
    }
    fVar4 = (float)(dVar21 + 1.570796251296997);
    dVar20 = (double)(float)(3.141592502593994 - dVar21);
    if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
      dVar20 = dVar21;
    }
    fVar3 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar3 = fVar4;
    }
    dVar23 = (double)(float)(-3.141592502593994 - dVar21);
    if ((double)(float)(-3.141592502593994 - dVar21) - dVar20 < 0.0) {
      dVar23 = dVar20;
    }
    dVar20 = (double)(float)(dVar23 * dVar23);
    fVar1 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
      fVar1 = fVar3;
    }
    fVar10 = fVar1 * fVar1;
    fVar4 = g_heroPosition.x + *(float *)(param_3 + 0x10);
    dVar24 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
    dVar22 = (double)(float)(dVar20 * dVar24);
    fVar9 = fVar10 * fVar10 * fVar1;
    fVar3 = g_heroPosition.z + *(float *)(param_3 + 0x18);
    fVar8 = fVar10 * fVar9;
    param_1[1] = (g_heroPosition.y + *(float *)(param_3 + 0x14)) * 0.5 +
                 ((float)(dVar20 * dVar22) * 2.601887e-06 +
                 (float)(dVar22 * -0.0001980741071747616 +
                        (double)(float)(dVar24 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar20 * dVar23) *
                                                       -0.16666656732559204 + dVar23)))) * 2.0;
    param_1[3] = fVar2;
    param_2[1] = 0.0;
    *param_1 = fVar4 * 0.5 +
               (fVar10 * fVar8 * 2.601887e-06 +
               fVar8 * -0.0001980741 + fVar9 * 0.0083330255 + fVar10 * fVar1 * -0.16666657 + fVar1)
               * 2.0;
    *param_2 = 0.0;
    param_1[2] = fVar3 * 0.5 + 1.0;
    dVar21 = (double)FastWrapRot((float)dVar21,3.1415927);
    param_2[2] = (float)dVar21;
  }
  else {
    *param_1 = Cuboids[iVar6].pos.x;
    param_1[1] = pCVar11[iVar6].pos.y;
    param_1[2] = pCVar11[iVar6].pos.z;
    param_1[3] = pCVar11[iVar6].pos.w;
    iVar5 = *(int *)(iVar5 + 0xe8);
    *param_2 = pCVar11[iVar5].rot.x;
    param_2[1] = pCVar11[iVar5].rot.y;
    param_2[2] = pCVar11[iVar5].rot.z;
    param_2[3] = pCVar11[iVar5].rot.w;
  }
  return;
}


// 0x03dde40 (0x160 bytes)
void M615_003dde40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  Vec4 local_40;
  
  GetBonePosition(param_1,0,&local_40);
  fVar1 = local_40.x - g_heroPosition.x;
  fVar2 = local_40.y - g_heroPosition.y;
  fVar3 = local_40.z - g_heroPosition.z;
  ClampVec3Magnitude((double)(g_FrameTime * 4.0),&local_40);
  g_heroPosition.x = g_heroPosition.x + fVar1;
  g_heroPosition.y = g_heroPosition.y + fVar2;
  g_heroPosition.z = g_heroPosition.z + fVar3;
  uVar4 = FastWrapRot(*(float *)(param_1 + 0x48),3.14159);
  dVar5 = (double)FastDiffRots(uVar4,(double)g_heroRotation.z);
  dVar6 = (double)(g_FrameTime * 6.2831855);
  if ((dVar5 <= dVar6) && (dVar6 = dVar5, dVar5 < (double)(g_FrameTime * -6.2831855))) {
    dVar6 = (double)(g_FrameTime * -6.2831855);
  }
  dVar6 = (double)FastWrapRot((float)dVar6,g_heroRotation.z);
  g_heroRotation.z = (float)dVar6;
  return;
}


// 0x03ddfd0 (0xb4c bytes)
/* Moby 615 */

void UpdateMoby_615(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 in_LR;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  float local_80 [4];
  float fStack_70;
  float local_6c;
  float local_68;
  Vec4 local_60;
  
  uVar12 = DAT_00853b08;
  pvVar3 = moby->pVar;
  uVar14 = ZEXT48(pvVar3);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)((int)pvVar3 + 0x12) = 0;
      moby->state = '\x01';
      DAT_00853b70 = *(undefined4 *)((int)pvVar3 + 0xec);
      DAT_010caff0 = 0x41880000;
      DAT_010caff4 = 0x41880000;
      DAT_010cb000 = 0x41880000;
      DAT_010cb004 = 0xc1880000;
      DAT_010cb010 = 0xc1880000;
      DAT_010cb014 = 0x41880000;
      DAT_010cb020 = 0xc1880000;
      DAT_010cb024 = 0xc1880000;
      if ((moby->levelFlagIdx != -1) &&
         ((uVar2 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar2] != '\0' ||
          ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) != 0)))) {
        moby->state = '\x04';
      }
    }
    else if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      if (*(short *)((int)pvVar3 + 0x12) == 0) {
        *(undefined2 *)((int)pvVar3 + 0x12) = 1;
        PlayMobySound(3,0,moby);
      }
      pMVar9 = g_currentWeaponMoby;
      if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_CurrentWeapon != 0x1a)) {
        bVar8 = false;
        uVar12 = DAT_00853b04;
      }
      else {
        bVar8 = true;
        uVar12 = DAT_00853b00;
      }
      moby->field60_0x90 = uVar12;
      if ((bVar8) && (pMVar9->setByGroup != '\0')) {
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = loadVectorLeftIndexed(in_LR,0x3ddfa0);
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar19 = vectorMultiplyAddFloatingPoint
                            (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                             auVar20);
        auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
        auVar19 = vectorSplatHalfWord(auVar19,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar19,0x10,uVar14);
        *(undefined2 *)((int)pvVar3 + 0x10) = uVar4;
        *(undefined2 *)((int)pvVar3 + 0x11c) = 0;
        *(undefined2 *)((int)pvVar3 + 0x11e) = 0;
        TransitionMovement(0x72,0);
        Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x57,0);
        SetCameraPosition(0x951500,0x951510,1,0,0);
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        moby->state = '\x02';
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = loadVectorLeftIndexed(8,0x3ddfa0);
        auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar19 = vectorMultiplyAddFloatingPoint
                            (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                             auVar20);
        auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
        auVar19 = vectorSplatHalfWord(auVar19,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar19,0x10,uVar14);
        *(undefined2 *)((int)pvVar3 + 0x10) = uVar4;
        *(undefined4 *)((int)pvVar3 + 0x110) = 0;
        *(float *)((int)pvVar3 + 0xf0) = GameCamera.posX;
        *(float *)((int)pvVar3 + 0xf4) = GameCamera.posY;
        *(float *)((int)pvVar3 + 0xf8) = GameCamera.posZ;
        *(char (*) [4])((int)pvVar3 + 0xfc) = GameCamera.field8_0x14c;
        *(float *)((int)pvVar3 + 0x100) = GameCamera.rot.azimuth;
        *(float *)((int)pvVar3 + 0x104) = GameCamera.rot.elevation;
        *(float *)((int)pvVar3 + 0x108) = GameCamera.rot.radius;
        *(char (*) [4])((int)pvVar3 + 0x10c) = GameCamera.field10_0x15c;
      }
    }
    else {
      *(undefined2 *)((int)pvVar3 + 0x12) = 0;
      moby->field60_0x90 = uVar12;
    }
  }
  else if (bVar1 < 3) {
    GetBonePosition(moby,0,&local_60);
    fVar5 = local_60.x - g_heroPosition.x;
    fVar6 = local_60.y - g_heroPosition.y;
    fVar7 = local_60.z - g_heroPosition.z;
    ClampVec3Magnitude((double)(g_FrameTime * 4.0),&local_60);
    g_heroPosition.x = g_heroPosition.x + fVar5;
    g_heroPosition.y = g_heroPosition.y + fVar6;
    g_heroPosition.z = g_heroPosition.z + fVar7;
    uVar15 = FastWrapRot((moby->rotation).z,3.14159);
    dVar16 = (double)FastDiffRots(uVar15,(double)g_heroRotation.z);
    dVar18 = 6.2831854820251465;
    dVar17 = (double)(g_FrameTime * 6.2831855);
    if ((dVar16 <= dVar17) &&
       (dVar17 = dVar16, dVar16 < (double)(g_FrameTime * -6.2831855))) {
      dVar17 = (double)(g_FrameTime * -6.2831855);
    }
    dVar17 = (double)FastWrapRot((float)dVar17,g_heroRotation.z);
    g_heroRotation.z = (float)dVar17;
    M615_003dda00(local_80,&fStack_70,moby);
    OrganicDelt
              (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,g_FrameTime * 2.0,
               (float *)((int)pvVar3 + 0x110),0x720000,(float *)((int)pvVar3 + 0x114));
    dVar17 = (double)FastDiffRots
                               ((double)local_68,(double)*(float *)((int)pvVar3 + 0x108));
    dVar17 = (double)FastWrapRot
                               ((float)(dVar17 * (double)*(float *)((int)pvVar3 + 0x110)),
                                *(float *)((int)pvVar3 + 0x108));
    dVar16 = (double)FastDiffRots
                               ((double)local_6c,(double)*(float *)((int)pvVar3 + 0x104));
    FastWrapRot
              ((float)(dVar16 * (double)*(float *)((int)pvVar3 + 0x110)),
               *(float *)((int)pvVar3 + 0x104));
    Camera_SetMobyDrivenTargetPos(local_80);
    Camera_SetMobyDrivenTargetRot(&fStack_70);
    DAT_00a1bfe8 = 1;
    MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
    if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
       (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) {
      SetCameraPosition(0x951500,0x951510,1,0,0);
    }
    iVar13 = 0;
    uVar12 = (int)*(uint *)((int)pvVar3 + 0x110) >> 0x1f;
    if (((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar3 + 0x110)) - uVar12) < 0x3f7d70a4) ||
       (dVar17 = (double)FastSubRots(GameCamera.rot.radius,(float)dVar17),
       0.01745329238474369 <= dVar17)) {
      if ((DAT_0096a778 & 2) != 0) {
        Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x58,0);
      }
    }
    else {
      RegisterFuncForMoby(&PTR_M617_003dfa30_0070d980,moby);
      uVar10 = uVar14;
      do {
        if (*(int *)((int)uVar10 + 0xb0) == 1) break;
        iVar13 = iVar13 + 1;
        uVar10 = uVar10 + 4;
      } while (iVar13 < 0xc);
      if (*(int *)((int)pvVar3 + 0xe4) < 1) {
        if (*(int *)((int)pvVar3 + 0xe4) < 0) {
          dVar17 = (double)FastWrapRot
                                     (*(float *)((int)pvVar3 + 0xe4),
                                      (float)((double)g_FrameTime * -6.2831854820251465));
          *(float *)((int)pvVar3 + 0xe4) = (float)dVar17;
          if (dVar17 < -0.5235987901687622) {
            *(undefined4 *)((int)pvVar3 + 0xe4) = 0;
            if (*(int *)((int)pvVar3 + 0xe0) == 1) {
              *(int *)((int)pvVar3 + 0x14) = (*(int *)((int)pvVar3 + 0x14) + 0xd) % 0xc;
            }
            else if (*(int *)((int)pvVar3 + 0xe0) == 2) {
              *(int *)((int)pvVar3 + 0x18) = (*(int *)((int)pvVar3 + 0x18) + 0xd) % 0xc;
            }
            else {
              *(int *)((int)pvVar3 + 0x1c) = (*(int *)((int)pvVar3 + 0x1c) + 0xd) % 0xc;
            }
          }
        }
        else if (iVar13 == 0xc) {
          iVar11 = FastDecTimerS16(uVar14 + 0x10);
          if (iVar11 != 0) {
            moby->state = '\x03';
          }
        }
        else if (((g_Pad.pressedButton & 0x8000) == 0) && ((g_Pad.pressedButton & 0x2000) == 0)) {
          if ((g_Pad.buttonsPressedThisFrame & UP) == 0) {
            if ((g_Pad.buttonsPressedThisFrame & DOWN) != 0) {
              iVar11 = *(int *)((int)pvVar3 + 0xe0) + 1;
              *(ushort *)((int)pvVar3 + 0x11e) = *(ushort *)((int)pvVar3 + 0x11e) | 2;
              if (iVar11 == 4) {
                *(undefined4 *)((int)pvVar3 + 0xe0) = 3;
              }
              else {
                *(int *)((int)pvVar3 + 0xe0) = iVar11;
                PlayMobySound(1,0,moby);
              }
            }
          }
          else {
            iVar11 = *(int *)((int)pvVar3 + 0xe0) + -1;
            *(ushort *)((int)pvVar3 + 0x11e) = *(ushort *)((int)pvVar3 + 0x11e) | 2;
            if (iVar11 == 0) {
              *(undefined4 *)((int)pvVar3 + 0xe0) = 1;
            }
            else {
              *(int *)((int)pvVar3 + 0xe0) = iVar11;
              PlayMobySound(1,0,moby);
            }
          }
        }
        else {
          *(ushort *)((int)pvVar3 + 0x11e) = *(ushort *)((int)pvVar3 + 0x11e) | 1;
          PlayMobySound(0,0,moby);
          if ((g_Pad.pressedButton & 0x8000) != 0) {
            dVar18 = -6.2831854820251465;
          }
          *(float *)((int)pvVar3 + 0xe4) = (float)((double)g_FrameTime * dVar18);
        }
      }
      else {
        dVar17 = (double)FastWrapRot
                                   (*(float *)((int)pvVar3 + 0xe4),
                                    (float)((double)g_FrameTime * dVar18));
        *(float *)((int)pvVar3 + 0xe4) = (float)dVar17;
        if (0.5235987901687622 < dVar17) {
          *(undefined4 *)((int)pvVar3 + 0xe4) = 0;
          if (*(int *)((int)pvVar3 + 0xe0) == 1) {
            *(int *)((int)pvVar3 + 0x14) = (*(int *)((int)pvVar3 + 0x14) + 0xb) % 0xc;
          }
          else if (*(int *)((int)pvVar3 + 0xe0) == 2) {
            *(int *)((int)pvVar3 + 0x18) = (*(int *)((int)pvVar3 + 0x18) + 0xb) % 0xc;
          }
          else {
            *(int *)((int)pvVar3 + 0x1c) = (*(int *)((int)pvVar3 + 0x1c) + 0xb) % 0xc;
          }
        }
      }
      if (iVar13 == 0xc) goto LAB_003dead8;
    }
    if (((((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_Help.state == 0)) &&
        (g_Help.curId == -1)) ||
       ((g_heroState != MOVEMENT_LOCKED || (g_CurrentWeapon != 0x1a)))) {
      moby->state = '\x01';
      Camera_DeactivateMobyDrivenCam(1);
      Hero_TransitionToDefault();
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = loadVectorLeftIndexed(8,0x3ddfa0);
      auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                           auVar20);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      auVar19 = vectorSplatHalfWord(auVar19,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar19,0x10,uVar14);
      *(undefined2 *)((int)pvVar3 + 0x10) = uVar4;
    }
  }
  else if ((bVar1 < 4) && ((DAT_0096a778 & 2) != 0)) {
    if (moby->levelFlagIdx != -1) {
      uVar2 = moby->uid;
      iVar11 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      iVar13 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      uVar12 = *(uint *)(&g_CheckpointBits + iVar13);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar11) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar11) | 1 << (uVar2 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar13) = uVar12 | 1 << (uVar2 & 0x1f);
    }
    Camera_DeactivateMobyDrivenCam(1);
    TransitionMovement(0,1);
    moby->state = '\x04';
    moby->setByGroup = '\x01';
  }
LAB_003dead8:
  MB_ColorDyingMoby(moby,uVar14);
  return;
}


