// game/update/moby1105.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1be558-0x1bf888
#include "game/update/moby1105.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1022.h"
#include "game/update/moby1101.h"
#include "game/update/moby1130.h"
#include "game/update/moby829.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x01be558 (0x1330 bytes)
// inlined: FastAtan2 @0x1bf0dc, FastAtan2 @0x1bf488, FastAtan2 @0x1bf63c
// strings: 0096c074: 'None' | 0065465c: 'Scrawny Scientist'

/* Moby 1105 */

void UpdateMoby_1105(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  uint uVar9;
  undefined2 uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  gameMode_t gVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar25;
  undefined4 uVar26;
  longlong lVar23;
  longlong lVar24;
  short sVar29;
  float *pfVar28;
  longlong lVar27;
  longlong lVar30;
  ulonglong unaff_r26;
  undefined4 *puVar31;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f26;
  ulonglong in_f27;
  undefined8 uVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar38;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 0x1d0;
  puVar11 = (ulonglong *)lVar24;
  *puVar11 = uVar20;
  puVar11[0x3c] = in_LR;
  puVar11[0x34] = in_f26;
  puVar11[0x35] = in_f27;
  puVar11[0x36] = in_f28;
  puVar11[0x37] = in_f29;
  puVar11[0x38] = in_f30;
  puVar11[0x39] = in_f31;
  puVar11[0x33] = unaff_r31;
  puVar11[0x32] = unaff_r30;
  gVar18 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar32 = ZEXT48(pvVar8);
  puVar11[0x31] = unaff_r29;
  puVar11[0x30] = unaff_r28;
  puVar11[0x2f] = unaff_r27;
  puVar11[0x2e] = unaff_r26;
  if ((gVar18 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar25 = 0;
    puVar31 = &DAT_0095cd50;
    sVar29 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar31[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar31[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00763e80;
          DAT_00a1bfa4 = DAT_00763e80;
          DAT_00a1bfa8 = DAT_00763e80;
          sVar29 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar25 = iVar25 + 1;
        puVar31 = puVar31 + 1;
      } while (iVar25 < sVar29);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 24.0)) {
    MB_SetZBoundsFromGround(lVar21);
    moby->shadow = '\x13';
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    if (g_heroStateType == 0xf) {
      FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar8 + 0x164));
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x04') {
    Delt(0.0,g_FrameTime * 4.0,&SceneScreenFade);
    if (SceneScreenFade == 0.0) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    *(undefined4 *)(puVar11 + 0x12) = 0x43327852;
    *(undefined4 *)((int)puVar11 + 0x94) = 0x439fe148;
    *(undefined4 *)(puVar11 + 0x13) = 0x43124f5c;
    dVar34 = 0.0;
    *(undefined4 *)((int)puVar11 + 0x9c) = 0;
    dVar39 = 172.5500030517578;
    dVar38 = 316.010009765625;
    dVar40 = 145.27000427246094;
    uVar37 = 0x3fb1eb8520000000;
    *(undefined4 *)(puVar11 + 0x14) = 0x3d8f5c29;
    *(undefined4 *)((int)puVar11 + 0xa4) = 0x3e3851ec;
    *(undefined4 *)(puVar11 + 0x15) = 0xbfe28f5c;
    *(undefined4 *)((int)puVar11 + 0xac) = 0;
    dVar42 = 1.0;
    OrganicDelt
              (1.0,DAT_0071f418 * 0.1,DAT_0071f418 * 0.1,g_FrameTime * 0.1,
               (float *)((int)pvVar8 + 0x178),0x720000,(float *)((int)pvVar8 + 0x17c));
    fVar2 = *(float *)((int)pvVar8 + 0x178);
    uVar9 = (int)*(uint *)((int)pvVar8 + 0x178) >> 0x1f;
    if (0x3dcccccd < (int)((uVar9 >> 1 ^ *(uint *)((int)pvVar8 + 0x178)) - uVar9)) {
      FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar8 + 0x160));
      fVar2 = *(float *)((int)pvVar8 + 0x178);
    }
    dVar41 = (double)fVar2;
    *(undefined4 *)((int)puVar11 + 0xbc) = 0;
    *(float *)(puVar11 + 0x16) =
         (float)(dVar41 * (double)(float)(dVar39 - (double)*(float *)(puVar11 + 0x12)) +
                (double)*(float *)(puVar11 + 0x12));
    *(float *)((int)puVar11 + 0xb4) =
         (float)(dVar41 * (double)(float)(dVar38 - (double)*(float *)((int)puVar11 + 0x94)) +
                (double)*(float *)((int)puVar11 + 0x94));
    *(float *)(puVar11 + 0x17) =
         (float)(dVar41 * (double)(float)(dVar40 - (double)*(float *)(puVar11 + 0x13)) +
                (double)*(float *)(puVar11 + 0x13));
    dVar40 = (double)FastDiffRots(0xbff35c2900000000,(double)*(float *)(puVar11 + 0x15));
    dVar40 = (double)FastWrapRot
                               ((float)(dVar40 * (double)*(float *)((int)pvVar8 + 0x178)),
                                *(float *)(puVar11 + 0x15));
    *(float *)(puVar11 + 0x19) = (float)dVar40;
    dVar40 = (double)FastDiffRots
                               (0x3fc0a3d700000000,(double)*(float *)((int)puVar11 + 0xa4));
    dVar40 = (double)FastWrapRot
                               ((float)(dVar40 * (double)*(float *)((int)pvVar8 + 0x178)),
                                *(float *)((int)puVar11 + 0xa4));
    *(float *)((int)puVar11 + 0xc4) = (float)dVar40;
    dVar40 = (double)FastDiffRots(uVar37,(double)*(float *)(puVar11 + 0x14));
    dVar40 = (double)FastWrapRot
                               ((float)(dVar40 * (double)*(float *)((int)pvVar8 + 0x178)),
                                *(float *)(puVar11 + 0x14));
    *(float *)(puVar11 + 0x18) = (float)dVar40;
    if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
       (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) {
      SetCameraPosition(uVar20 - 0x140,uVar20 - 0x130,1,0,0);
    }
    Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0x16));
    Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x18));
    uVar9 = (int)*(uint *)((int)pvVar8 + 0x178) >> 0x1f;
    iVar25 = (uVar9 >> 1 ^ *(uint *)((int)pvVar8 + 0x178)) - uVar9;
    if ((iVar25 < 0x3f800000) &&
       (((g_HelpState != 0 || (g_HelpCurId != -1)) || (iVar25 < 0x3e4cccce)))) {
      Delt((float)dVar34,g_FrameTime * 4.0,&SceneScreenFade);
    }
    else {
      Delt((float)dVar42,g_FrameTime * 4.0,&SceneScreenFade);
    }
    if (SceneScreenFade == 1.0) {
      Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,0);
      Camera_DeactivateMobyDrivenCam(0);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (g_gameMode != GAME_MODE_SCENE) {
      if (moby->animationId != '\0') {
        puVar11[0x2b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar11 + 0x15c));
      }
      sVar29 = *(short *)((int)pvVar8 + 4);
      if (sVar29 < 2) {
        SetLevelFlag(moby->levelFlagIdx);
        FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar8 + 0x164));
        moby->state = '\x01';
        sVar29 = *(short *)((int)pvVar8 + 4);
      }
      if (sVar29 == 2) {
        MB_UnlockItem(0x1d,1);
        memcard_Save(0,-1);
        Help_QueueMessage(STR_YOUVE_GOT_THE_GRINDBOOTS_0x1775,0x2c);
        SceneScreenFade = 1.0;
        *(undefined4 *)((int)pvVar8 + 0x178) = 0;
        *(undefined4 *)((int)puVar11 + 0x74) = 0x439fe148;
        *(undefined4 *)(puVar11 + 0xf) = 0x43124f5c;
        *(undefined4 *)((int)puVar11 + 0x7c) = 0;
        *(undefined4 *)(puVar11 + 0xe) = 0x43327852;
        *(undefined4 *)(puVar11 + 0x10) = 0x3d8f5c29;
        *(undefined4 *)((int)puVar11 + 0x84) = 0x3e3851ec;
        *(undefined4 *)(puVar11 + 0x11) = 0xbfe28f5c;
        *(undefined4 *)((int)puVar11 + 0x8c) = 0;
        SetCameraPosition(uVar20 - 0x160,uVar20 - 0x150,1,0,0);
        Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
        FUN_00189040(g_MobyInstance + *(int *)((int)pvVar8 + 0x164));
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->state = '\x03';
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(char *)((int)pvVar8 + 8) == '\x01') &&
       (iVar25 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x168))
       , iVar25 != 0)) {
      uVar26 = 0x41800000;
    }
    else {
      uVar26 = 0x406ccccd;
    }
    *(undefined4 *)((int)pvVar8 + 0xc) = uVar26;
    iVar25 = FUN_0047cc38(*(undefined4 *)((int)pvVar8 + 0x170));
    if ((iVar25 != 0) && (iVar25 = FastDecTimerS16(uVar32 + 0x174), iVar25 != 0)) {
      iVar25 = FUN_004d3870(lVar21,uVar32);
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      if (iVar25 != 0) {
        moby->state = '\x02';
        if (*(short *)((int)pvVar8 + 0x176) != 0) {
          fVar6 = (moby->transform).v0.y;
          fVar4 = (moby->transform).v0.x;
          fVar7 = (moby->transform).v0.z;
          fVar14 = 0.0;
          fVar12 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6);
          fVar17 = 2.0 / fVar12;
          fVar15 = fVar14;
          if (0.0 - fVar12 < 0.0) {
            fVar15 = fVar7 * fVar17;
          }
          fVar16 = fVar14;
          if (0.0 - fVar12 < 0.0) {
            fVar16 = fVar6 * fVar17;
          }
          if (0.0 - fVar12 < 0.0) {
            fVar14 = fVar4 * fVar17;
          }
          if (fVar12 - 0.0 < 0.0) {
            fVar15 = fVar7 * fVar17;
          }
          if (fVar12 - 0.0 < 0.0) {
            fVar16 = fVar6 * fVar17;
          }
          if (fVar12 - 0.0 < 0.0) {
            fVar14 = fVar4 * fVar17;
          }
          (moby->pos).z = fVar5 + fVar15;
          (moby->pos).y = fVar3 + fVar16;
          (moby->pos).x = fVar2 + fVar14;
          dVar42 = (double)GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
          (moby->pos).z = (float)dVar42;
          *(undefined2 *)((int)pvVar8 + 0x176) = 0;
        }
        MB_SetPointAheadOfMoby(0x40019999a0000000,lVar21);
      }
    }
    if (g_heroStateType == 0xf) {
      FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar8 + 0x160));
    }
  }
  else if (uVar1 == '\0') {
    if (CHAR_ARRAY_0096c165[0x1d] != '\0') {
      DeleteMoby(moby);
      return;
    }
    if (g_KeyLevelFlags.piece<764,4>() == 0) {
      if (moby->animationId != '\x01') {
        puVar11[0x2b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar21,1,0,*(undefined4 *)((int)puVar11 + 0x15c));
      }
      pMVar19 = g_MobyInstance;
      *(undefined2 *)((int)pvVar8 + 0x176) = 1;
      FUN_00189040(pMVar19 + *(int *)((int)pvVar8 + 0x164));
    }
    else {
      fVar2 = (moby->transform).v0.y;
      fVar3 = (moby->transform).v0.x;
      fVar5 = (moby->transform).v0.z;
      fVar7 = 0.0;
      fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar4 = 2.0 / fVar6;
      fVar12 = fVar7;
      if (0.0 - fVar6 < 0.0) {
        fVar12 = fVar5 * fVar4;
      }
      fVar14 = fVar7;
      if (0.0 - fVar6 < 0.0) {
        fVar14 = fVar2 * fVar4;
      }
      if (0.0 - fVar6 < 0.0) {
        fVar7 = fVar3 * fVar4;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar12 = fVar5 * fVar4;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar14 = fVar2 * fVar4;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar7 = fVar3 * fVar4;
      }
      (moby->pos).z = (moby->pos).z + fVar12;
      (moby->pos).y = (moby->pos).y + fVar14;
      (moby->pos).x = (moby->pos).x + fVar7;
      dVar42 = (double)GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
      (moby->pos).z = (float)dVar42;
      *(undefined2 *)((int)pvVar8 + 0x176) = 0;
    }
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x14,0x1be4c0);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = vectorSplatHalfWord(auVar43,1);
    uVar10 = storeVectorElementHalfWordIndexed(auVar43,0x174,uVar32);
    *(undefined2 *)((int)pvVar8 + 0x174) = uVar10;
    FUN_00189040(g_MobyInstance + *(int *)((int)pvVar8 + 0x160));
    *(char **)((int)pvVar8 + 0x20) = "Scrawny Scientist";
    moby->state = '\x01';
    FUN_004d3720(lVar21,uVar32);
  }
  dVar42 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_001bf7e0;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_001bf28c:
    if (*(int *)((int)pvVar8 + 0x158) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x158) = 0;
      *(float *)((int)pvVar8 + 0x140) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x144) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x148) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x14c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar11 + 0x1d) = fVar3;
    *(float *)((int)puVar11 + 0xec) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar11 + 0x1e) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x1d));
    if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0xec));
    if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar23 = uVar20 - 0x1c0;
      lVar27 = uVar20 - 0x9c;
      lVar30 = uVar20 - 0x8c;
      lVar33 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x28) = fVar5;
      *(float *)(puVar11 + 0x27) = fVar5;
      *(float *)((int)puVar11 + 0x13c) = fVar5;
      *(float *)((int)puVar11 + 0x134) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x27) = *(float *)(puVar11 + 0x27) * fVar6;
      *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar5;
      *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar23 + 0x134) = *(float *)((int)lVar23 + 0x124) * fVar5 * fVar5;
        iVar25 = (int)lVar27;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar30 = uVar20 - 0x9c;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar27 = lVar30;
      do {
        fVar5 = *pfVar28;
        fVar6 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x134) = *(float *)((int)lVar23 + 0x134) * fVar5;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
        lVar27 = lVar27 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar27 = 2;
      lVar23 = lVar24;
      do {
        iVar25 = (int)lVar23;
        iVar13 = (int)lVar30;
        lVar23 = lVar23 + 0x10;
        lVar30 = lVar30 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar25 + 0x134) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar34 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar34) goto LAB_001bf28c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar32 + 0x158);
    }
    else {
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = loadVectorLeftIndexed(0x5c,0x1be4c0);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar44);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x158,uVar32
                         );
      *(undefined4 *)((int)pvVar8 + 0x158U & 0xfffffffc) = uVar26;
    }
  }
  iVar25 = FastDecTimerS32(uVar32 + 0x15c);
  if (iVar25 != 0) {
    dVar34 = (double)MB_randRangeFloat(180.0,300.0);
    uVar26 = FastDoubleToInt((double)(float)(dVar34 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x15c) = uVar26;
    dVar40 = (double)(moby->rotation).z;
    dVar34 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar38 = 0.01745329238474369;
    dVar34 = (double)FastWrapRot((float)dVar40,(float)(dVar34 * 0.01745329238474369));
    dVar40 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar34,(float)(dVar40 * dVar38),(float *)((int)pvVar8 + 0x140));
    *(float *)((int)pvVar8 + 0x140) = *(float *)((int)pvVar8 + 0x140) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x144) = *(float *)((int)pvVar8 + 0x144) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x148) = *(float *)((int)pvVar8 + 0x148) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x158) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x140);
    fVar3 = *(float *)((int)pvVar8 + 0x144);
    fVar5 = *(float *)((int)pvVar8 + 0x148);
  }
  else {
    dVar42 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar41 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar39 = (double)fVar3;
  *(float *)((int)puVar11 + 0xdc) = fVar2;
  *(float *)(puVar11 + 0x1c) = fVar3;
  dVar38 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0xe4) = (float)(ABS(dVar41) - ABS(dVar39));
  dVar40 = 0.0;
  uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1d) & 4;
  dVar34 = ABS((double)*(float *)((int)puVar11 + 0xdc));
  if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
    dVar34 = ABS(dVar39);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar36 = ABS((double)*(float *)(puVar11 + 0x1c));
  if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
    dVar36 = ABS(dVar41);
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar35 = dVar40;
  if (0.0 < dVar34) {
    lVar23 = uVar20 - 0x1c0;
    lVar30 = uVar20 - 0xac;
    lVar27 = uVar20 - 0xbc;
    lVar33 = 2;
    fVar5 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x24) = fVar5;
    *(float *)(puVar11 + 0x23) = fVar5;
    *(float *)((int)puVar11 + 0x11c) = fVar5;
    *(float *)((int)puVar11 + 0x114) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x23) = *(float *)(puVar11 + 0x23) * fVar6;
    *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar5;
    *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar23 + 0x114) = *(float *)((int)lVar23 + 0x104) * fVar5 * fVar5;
      iVar25 = (int)lVar27;
      lVar27 = lVar27 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
      lVar30 = lVar30 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar30 = uVar20 - 0xbc;
    pfVar28 = (float *)&DAT_007358e0;
    lVar23 = lVar24;
    lVar27 = lVar30;
    do {
      fVar5 = *pfVar28;
      fVar6 = pfVar28[1];
      pfVar28 = pfVar28 + 2;
      *(float *)((int)lVar23 + 0x114) = *(float *)((int)lVar23 + 0x114) * fVar5;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
      lVar27 = lVar27 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar27 = 2;
    lVar23 = lVar24;
    dVar34 = dVar40;
    do {
      iVar25 = (int)lVar23;
      iVar13 = (int)lVar30;
      lVar23 = lVar23 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar25 + 0x114)) +
                        *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar36 = (double)FastDiffRots(dVar35,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0xd4) = (float)dVar38;
  fVar2 = SQRT((float)(dVar41 * dVar41 + (double)(float)(dVar39 * dVar39)));
  dVar39 = ABS((double)fVar2);
  *(float *)(puVar11 + 0x1a) = fVar2;
  *(float *)(puVar11 + 0x1b) = (float)(dVar39 - ABS(dVar38));
  uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1d) & 4;
  dVar34 = ABS((double)*(float *)(puVar11 + 0x1a));
  if ((double)*(float *)(puVar11 + 0x1b) - dVar40 < 0.0) {
    dVar34 = ABS(dVar38);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar38 = ABS((double)*(float *)((int)puVar11 + 0xd4));
  if ((double)*(float *)(puVar11 + 0x1b) - dVar40 < 0.0) {
    dVar38 = dVar39;
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (dVar40 < dVar34) {
    lVar23 = uVar20 - 0x1c0;
    lVar27 = uVar20 - 0xdc;
    lVar30 = uVar20 - 0xcc;
    lVar33 = 2;
    fVar5 = (float)(dVar38 - dVar34) / (float)(dVar38 + dVar34);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x20) = fVar5;
    *(float *)(puVar11 + 0x1f) = fVar5;
    *(float *)((int)puVar11 + 0xfc) = fVar5;
    *(float *)((int)puVar11 + 0xf4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar6;
    *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar5;
    *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar23 + 0xf4) = *(float *)((int)lVar23 + 0xe4) * fVar5 * fVar5;
      iVar25 = (int)lVar27;
      lVar23 = lVar23 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
      lVar30 = lVar30 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar30 = uVar20 - 0xdc;
    pfVar28 = (float *)&DAT_007358e0;
    lVar23 = lVar24;
    lVar27 = lVar30;
    do {
      fVar5 = *pfVar28;
      fVar6 = pfVar28[1];
      pfVar28 = pfVar28 + 2;
      *(float *)((int)lVar23 + 0xf4) = *(float *)((int)lVar23 + 0xf4) * fVar5;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
      lVar27 = lVar27 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar23 = 2;
    do {
      iVar25 = (int)lVar24;
      iVar13 = (int)lVar30;
      lVar24 = lVar24 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar25 + 0xf4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar40 = -dVar40;
  dVar34 = 1.5707963705062866;
  if ((dVar36 <= 1.5707963705062866) && (dVar34 = dVar36, dVar36 < -1.5707963705062866)) {
    dVar34 = -1.5707963705062866;
  }
  dVar38 = 0.5235987901687622;
  if ((dVar40 <= 0.5235987901687622) && (dVar38 = dVar40, dVar40 < -0.5235987901687622)) {
    dVar38 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xa8) = (float)(dVar34 * 0.6000000238418579);
  *(float *)((int)pvVar8 + 0xa4) = (float)dVar38;
  *(float *)((int)pvVar8 + 0x128) = (float)(dVar34 * 0.4000000059604645);
LAB_001bf7e0:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x40300000;
  }
  dVar34 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar42),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),lVar21,uVar32 + 0x40,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar42),
             (double)(float)((double)DAT_0071f40c * dVar34),lVar21,uVar32 + 0xc0,2);
  return;
}


