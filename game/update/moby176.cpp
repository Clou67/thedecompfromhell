// game/update/moby176.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2b2274-0x2b345c
#include "game/update/moby176.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1381.h"
#include "game/update/moby1750.h"
#include "game/update/moby179.h"
#include "idol/fastfunc.h"

// 0x02b2274 (0x40 bytes)
void M1750_002b2274(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  do {
    if (*(int *)(iVar1 + 4) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar2 * 4 + 4) = param_2;
      return;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0xf);
  return;
}


// 0x02b22c0 (0x268 bytes)
// strings: 00a1000c: 'None'

undefined4 * M176_002b22c0(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_002b22b4;
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x53) == '\x02') {
    *(undefined1 *)(param_1 + 0x20) = 4;
    if ((MobyInstance *)*puVar2 != (MobyInstance *)0x0) {
      DeleteMoby((MobyInstance *)*puVar2);
    }
    if (*(short *)(puVar2 + 0x11) != -1) {
      DeletePointLight();
      *(undefined2 *)(puVar2 + 0x11) = 0xffff;
    }
    sVar1 = *(short *)((int)puVar2 + 0x4a);
    if (((sVar1 != -1) &&
        (iVar3 = (int)((longlong)sVar1 << 7) - (int)((longlong)sVar1 << 4),
        *(int *)((int)g_SoundChannels + iVar3 + 0x18) == param_1)) &&
       (*(char *)((int)g_SoundChannels + iVar3 + 4) != '\0')) {
      sound_Kill((int)sVar1);
    }
    puVar4 = (undefined4 *)0xffffffff;
    *(undefined2 *)((int)puVar2 + 0x4a) = 0xffff;
  }
  else if ((HelpData.piece<624,2>() == 0) && (CHAR_ARRAY_00a0feec.piece<80,2>() == 0)) {
    if (*(char *)(param_1 + 0x20) == '\x03') {
      puVar4 = (undefined4 *)(*(ushort *)(puVar2 + 0x14) + 1);
      *(short *)(puVar2 + 0x14) = (short)puVar4;
    }
    else {
      sVar1 = *(short *)(puVar2 + 0x14);
      if (sVar1 != 0) {
        if ((int)(animationSpeed * 120.5) < (int)sVar1) {
          CHAR_ARRAY_00a0feec[0x50] = '\0';
          CHAR_ARRAY_00a0feec[0x51] = '\x01';
          iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<82,2>() < iVar3 / 600) {
            sVar1 = (short)(iVar3 >> 0x1f);
            CHAR_ARRAY_00a0feec.piece<82,2>() =
                 ((short)(iVar3 / 600) + sVar1) -
                 ((short)((short)(iVar3 / 0x2580000) + sVar1) >> 0xf);
          }
          CHAR_ARRAY_00a0feec.piece<84,4>() = CHAR_ARRAY_00a0feec.piece<84,4>() | 1 << (Level & 0x3f) | 0x80000000
          ;
        }
        else if ((int)sVar1 < (int)(animationSpeed * 30.5)) {
          DAT_0096bd94 = DAT_0096bd94 + 1;
        }
        *(undefined2 *)(puVar2 + 0x14) = 0;
        puVar4 = (undefined4 *)(uint)DAT_0096bd94;
        if (2 < DAT_0096bd94) {
          puVar4 = (undefined4 *)Help_QueueMessage(STR_TO_USE_THE_PYROCITOR_0x4E24,0x4e);
        }
      }
    }
  }
  return puVar4;
}


// 0x02b2590 (0xecc bytes)
// inlined: FastRSqrt @0x2b309c
/* Moby 176 */

void UpdateMoby_176(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  int iVar24;
  void *pvVar25;
  ulonglong uVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<48> local_f0;
  float local_c0;
  float local_bc;
  longlong local_b8;
  
  lVar17 = (longlong)(int)moby;
  puVar8 = (uint *)moby->pVar;
  uVar26 = ZEXT48(puVar8);
  M176_002b22c0();
  GetBonePosition(lVar17,0,&local_170);
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined2 *)(puVar8 + 0x11) = 0xffff;
      *(undefined2 *)((int)puVar8 + 0x4a) = 0xffff;
      moby->state = '\x01';
    }
    else {
      if (moby->updateId == '\x01') {
        moby->state = '\x02';
      }
      if (((moby->updateId == '\0') &&
          (dVar28 = (double)BlendAnimFrame(moby), 10.0 < dVar28)) &&
         (((g_Pad.downButtons & DAT_0096ad80) != 0 && (moby->animationId != '\x01')))) {
        local_b8 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar17,1,0,(int)(animationSpeed * 5.5));
      }
    }
  }
  else if (bVar2 < 3) {
    if (*puVar8 == 0) {
      uVar18 = FUN_002b9870(lVar17);
      *puVar8 = uVar18;
      if (uVar18 != 0) {
        *(ushort *)(uVar18 + 0x34) = *(ushort *)(uVar18 + 0x34) | 0x100;
        *(undefined4 *)(*(int *)(*puVar8 + 0x78) + 0xc) = DAT_007b75d0;
      }
    }
    if (*(short *)(puVar8 + 0x11) != -1) {
      iVar20 = (int)((longlong)*(short *)(puVar8 + 0x11) << 5);
      pfVar19 = (float *)((int)&PointLights[0].color.x + iVar20);
      fVar4 = *pfVar19;
      fVar5 = *(float *)((int)&PointLights[0].color.y + iVar20);
      fVar9 = DAT_00a15d30 - fVar4;
      fVar3 = *(float *)((int)&PointLights[0].color.z + iVar20);
      fVar6 = DAT_00a15d34 - fVar5;
      fVar15 = DAT_00a15d38 - fVar3;
      *(undefined4 *)((int)&PointLights[0].color.w + iVar20) = DAT_00a15d3c;
      *pfVar19 = fVar9 * 0.1 + fVar4;
      *(float *)((int)&PointLights[0].color.y + iVar20) = fVar6 * 0.1 + fVar5;
      *(float *)((int)&PointLights[0].color.z + iVar20) = fVar15 * 0.1 + fVar3;
      iVar20 = (int)((longlong)*(short *)(puVar8 + 0x11) << 5);
      fVar4 = *(float *)((int)&PointLights[0].color.y + iVar20);
      fVar5 = *(float *)((int)&PointLights[0].color.x + iVar20);
      fVar3 = *(float *)((int)&PointLights[0].color.z + iVar20);
      if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < 0.001) {
        DeletePointLight();
        *(undefined2 *)(puVar8 + 0x11) = 0xffff;
      }
    }
    if ((((g_Pad.downButtons & DAT_0096ad80) == 0) || (DAT_0096bd8c != '\0')) ||
       (iVar20 = Hero_GetWeaponAmmo(-1), iVar20 == 0)) {
      if (((g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0) &&
         (iVar20 = Hero_GetWeaponAmmo(-1), iVar20 == 0)) {
        PlayMobySound(0,0,moby);
      }
    }
    else {
      moby->state = '\x03';
      Hero_PlayFiringAnim();
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x10,0x2b2528);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar23 = storeVectorElementHalfWordIndexed(auVar36,0x4c,uVar26);
      *(undefined2 *)(puVar8 + 0x13) = uVar23;
      if (*(short *)(puVar8 + 0x11) == -1) {
        uVar23 = CreatePointLight3
                           (0x401e000000000000,0,(Vec4 *)&moby->pos,ZEXT48(&DAT_002b2528),0x10,0);
        *(undefined2 *)(puVar8 + 0x11) = uVar23;
      }
    }
  }
  else if (bVar2 < 4) {
    iVar20 = IsMobyPlayingSound(moby,(int)*(short *)((int)puVar8 + 0x4a));
    if (iVar20 == 0) {
      iVar20 = PlayMobySound(1,4,moby);
      *(short *)((int)puVar8 + 0x4a) = (short)iVar20;
    }
    if ((*(short *)(puVar8 + 0x11) != -1) && (moby->state == '\x03')) {
      iVar20 = (int)((longlong)*(short *)(puVar8 + 0x11) << 5);
      fVar4 = DAT_0096a324 * 2.0;
      fVar5 = DAT_0096a328 * 2.0;
      fVar3 = DAT_0096a344 * 2.0;
      fVar9 = DAT_0096a348 * 2.0;
      *(float *)((int)&PointLights[0].pos.x + iVar20) =
           g_heroPosition.x + DAT_0096a340 * 2.0 + DAT_0096a320 * 2.0;
      *(float *)((int)&PointLights[0].pos.y + iVar20) = g_heroPosition.y + fVar3 + fVar4;
      *(float *)((int)&PointLights[0].pos.z + iVar20) = g_heroPosition.z + fVar9 + fVar5;
      *(float *)((int)&PointLights[0].pos.w + iVar20) = g_heroPosition.w;
      sVar7 = *(short *)(puVar8 + 0x11);
      local_b8 = (longlong)((int)worldUpdateTime % 0x78);
      *(undefined4 *)((int)&PointLights[0].pos.w + (int)((longlong)sVar7 << 5)) = 0x40f00000;
      fVar15 = DAT_007b75b8;
      fVar9 = DAT_007b75b4;
      fVar3 = DAT_007b75b0;
      fVar4 = (float)local_b8 * 0.008333334 * 6.28318 - 3.14159;
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = fVar6 * fVar6;
      fVar10 = fVar5 * fVar5 * fVar6;
      fVar12 = DAT_007b75c0 - DAT_007b75b0;
      iVar20 = (int)((longlong)sVar7 << 5);
      pfVar19 = (float *)((int)&PointLights[0].color.x + iVar20);
      fVar11 = fVar5 * fVar10;
      fVar14 = DAT_007b75c4 - DAT_007b75b4;
      fVar13 = DAT_007b75c8 - DAT_007b75b8;
      fVar4 = *pfVar19;
      fVar10 = (fVar5 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar5 * fVar6 * -0.16666657 + fVar6)
               * 0.5 + 0.5;
      fVar5 = *(float *)((int)&PointLights[0].color.y + iVar20);
      fVar6 = *(float *)((int)&PointLights[0].color.z + iVar20);
      *(undefined4 *)((int)&PointLights[0].color.w + iVar20) = DAT_007b75cc;
      *pfVar19 = ((fVar10 * fVar12 + fVar3) - fVar4) * 0.1 + fVar4;
      *(float *)((int)&PointLights[0].color.y + iVar20) =
           ((fVar10 * fVar14 + fVar9) - fVar5) * 0.1 + fVar5;
      *(float *)((int)&PointLights[0].color.z + iVar20) =
           ((fVar10 * fVar13 + fVar15) - fVar6) * 0.1 + fVar6;
    }
    dVar32 = 0.0;
    local_c0 = 0.0;
    local_bc = 0.0;
    dVar28 = (double)FastIntToDouble(g_goldWeaponsArray.pyrocitor);
    uVar16 = worldUpdateTime;
    dVar31 = 4.0;
    bVar1 = (int)worldUpdateTime < 0;
    uVar18 = worldUpdateTime & 3;
    iVar20 = (int)worldUpdateTime >> 2;
    if ((g_heroState == FIRST_PERSON_VIEW) && ((moby->modeBits & DISABLED) != NONE)) {
      dVar29 = (double)SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                            GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                            GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
      dVar34 = dVar32;
      dVar33 = dVar32;
      dVar30 = dVar32;
      if (dVar29 != dVar32) {
        fVar4 = (float)(-1.0 / dVar29);
        dVar34 = (double)(GameCamera.orientMtx.up.x * fVar4);
        dVar33 = (double)(GameCamera.orientMtx.up.y * fVar4);
        dVar30 = (double)(GameCamera.orientMtx.up.z * fVar4);
      }
      local_160 = (float)(dVar34 + (double)GameCamera.posX);
      local_15c = (float)(dVar33 + (double)GameCamera.posY);
      local_158 = (float)(dVar30 + (double)GameCamera.posZ);
    }
    else {
      local_160 = local_170;
      local_15c = local_16c;
      local_158 = local_168;
    }
    dVar33 = 0.75;
    iVar21 = CollLine(&g_heroCGPos,&local_160,2,0,0);
    dVar34 = dVar32;
    if (iVar21 == 0) {
      iVar21 = CollLine(&local_160,local_150,2,0,0);
      if (iVar21 == 0) {
        dVar34 = (double)(float)(dVar28 * dVar31 + (double)DAT_007b75e0);
      }
      else {
        dVar34 = (double)(float)((double)SQRT((local_158 - g_CollOutput.ip.z) *
                                              (local_158 - g_CollOutput.ip.z) +
                                              (local_160 - g_CollOutput.ip.x) *
                                              (local_160 - g_CollOutput.ip.x) +
                                              (local_15c - g_CollOutput.ip.y) *
                                              (local_15c - g_CollOutput.ip.y)) - dVar33);
        if (dVar34 < dVar32) {
          dVar34 = dVar32;
        }
      }
    }
    dVar33 = 1.0;
    OrganicDelt
              ((float)dVar34,1.0,g_FrameTimeSq * DAT_00729704,DAT_007b75d4 * g_FrameTime,
               &local_bc,0x7b0000,&local_c0);
    if ((dVar34 < dVar31) || (iVar21 = DAT_007b75d8, (moby->modeBits & DISABLED) != NONE)) {
      iVar21 = 1;
    }
    iVar21 = DAT_007b75dc + iVar21;
    iVar27 = 0;
    if (0 < iVar21) {
      do {
        MB_randSphere
                  (dVar32,(double)(g_FrameTime *
                                  ((DAT_007b75e4 - DAT_007b75e8) *
                                   (float)(dVar34 / (double)(float)(dVar28 * dVar31 +
                                                                   (double)DAT_007b75e0)) +
                                  DAT_007b75e8)),local_130);
        MB_randRangeFloat((float)dVar32,(float)dVar33);
        uVar22 = SpawnPart_12(dVar34,local_140,local_130);
        if ((iVar27 == 2) && (uVar16 == (iVar20 + (uint)(bVar1 && uVar18 != 0)) * 4)) {
          iVar24 = 0;
          pvVar25 = moby->pVar;
          do {
            if (*(int *)((int)pvVar25 + 4) == 0) {
              *(undefined4 *)((int)moby->pVar + iVar24 * 4 + 4) = uVar22;
              break;
            }
            iVar24 = iVar24 + 1;
            pvVar25 = (void *)((int)pvVar25 + 4);
          } while (iVar24 < 0xf);
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 < iVar21);
    }
    FastIntToDouble(g_goldWeaponsArray.pyrocitor);
    uVar35 = 0x3fdae147a0000000;
    CollMobySphere(0x3fdae147a0000000,local_120,1,5,g_heroMobyPtr,local_f0);
    CollMobySphere(uVar35,local_120);
    iVar20 = FastDecTimerS16(uVar26 + 0x4e);
    if (iVar20 != 0) {
      dVar28 = (double)MB_randRangeFloat(10.0,30.0);
      uVar23 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
      *(undefined2 *)((int)puVar8 + 0x4e) = uVar23;
      MB_randSphere(dVar32,(double)(g_FrameTime * 2.0),local_100);
      MB_randRangeFloat(0.5,0.1);
      SpawnPart_25(&local_160,local_110,g_goldWeaponsArray.pyrocitor);
    }
    iVar20 = (int)(animationSpeed * ((float)(longlong)DAT_007b75f0 + 0.5));
    local_b8 = (longlong)iVar20;
    if (worldUpdateTime == ((int)worldUpdateTime / iVar20) * iVar20) {
      hero_ConsumeAmmo(-1,1);
    }
    iVar20 = Hero_GetWeaponAmmo(-1);
    iVar21 = FastDecTimerS16(uVar26 + 0x4c);
    if ((iVar21 != 0) &&
       ((((g_Pad.downButtons & DAT_0096ad80) == 0 || (DAT_0096bd8c != '\0')) || (iVar20 == 0)))) {
      moby->state = '\x02';
      Hero_EndFiringAnim();
      sVar7 = *(short *)((int)puVar8 + 0x4a);
      if (((sVar7 != -1) &&
          (iVar21 = (int)((longlong)sVar7 << 7) - (int)((longlong)sVar7 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar21 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar21 + 4) != '\0')) {
        sound_Kill((int)sVar7);
      }
      *(undefined2 *)((int)puVar8 + 0x4a) = 0xffff;
      if (iVar20 == 0) {
        PlayMobySound(0,0,moby);
      }
    }
  }
  uVar18 = *puVar8;
  if (uVar18 != 0) {
    FastEulerToMtx((ulonglong)uVar18 + 0xc0,(ulonglong)uVar18 + 0x40);
    FastVecMtx4MultBatch3
              ((ulonglong)*puVar8 + 0xc0,lVar17 + 0xc0,(ulonglong)*puVar8 + 0xc0);
    uVar18 = *puVar8;
    *(float *)(uVar18 + 0x10) = local_170;
    *(float *)(uVar18 + 0x14) = local_16c;
    *(float *)(uVar18 + 0x18) = local_168;
    *(undefined4 *)(uVar18 + 0x1c) = local_164;
    UpdateMobyTransform((MobyInstance *)*puVar8);
  }
  M176_002b1de0(lVar17);
  return;
}


