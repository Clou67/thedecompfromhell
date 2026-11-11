// game/update/moby651.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x401f88-0x40271c
#include "game/update/moby651.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby650.h"

// 0x0401f88 (0xc4 bytes)
MobyInstance * FUN_00401f88(longlong param_1,float *param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 37.0;
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar7 = (MobyInstance *)0x0;
  }
  else {
    pMVar7 = (MobyInstance *)0x0;
    do {
      do {
        pMVar8 = g_MobyInstance + (*puVar6 & 0x7fff);
      } while (pMVar8->oClass != TEST_DUMMY_DOOR);
      fVar4 = param_2[1] - (pMVar8->pos).y;
      fVar3 = *param_2 - (pMVar8->pos).x;
      fVar5 = param_2[2] - (pMVar8->pos).z;
      fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar3 < fVar1) {
        fVar1 = fVar3;
        pMVar7 = pMVar8;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar7;
}


// 0x0402050 (0xc8 bytes)
void FUN_00402050(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_LR;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  pvVar1 = param_1->pVar;
  if (*(int *)((int)pvVar1 + 8) == 0) {
    iVar3 = DAT_010cbbe0 - worldUpdateTime;
    if (3 < iVar3 + (iVar3 >> 0x1f & iVar3 * -2)) {
      DAT_010cbbe0 = worldUpdateTime;
      PlayMobySound(0,0,param_1);
    }
  }
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  auVar4 = loadVectorLeftIndexed(in_LR,0x40204c);
  auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
  auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,8,ZEXT48(pvVar1));
  *(undefined4 *)((int)pvVar1 + 8U & 0xfffffffc) = uVar2;
  return;
}


// 0x0402130 (0x5ec bytes)
/* Moby 651 */

void UpdateMoby_651(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  f32 fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  Cylinder *pCVar10;
  int iVar11;
  f32 *val;
  int speed;
  longlong lVar12;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  Vec4 local_30;
  
  pCVar10 = Cylinders;
  local_50.x = -(moby->pos).x;
  local_50.y = -(moby->pos).y;
  local_50.z = -(moby->pos).z;
  pvVar5 = moby->pVar;
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar11 = *(int *)((int)pvVar5 + 0xa0);
      *(undefined4 *)((int)pvVar5 + 0xb4) = 0xffffffff;
      fVar2 = pCVar10[iVar11].matrix.v2.z;
      *(float *)((int)pvVar5 + 0xa8) = fVar2 + pCVar10[iVar11].pos.z;
      fVar4 = DAT_008548ec;
      fVar3 = pCVar10[iVar11].pos.z;
      moby->setByGroup = '\x01';
      (moby->pos).z = fVar2 + fVar3 + fVar4;
      moby->state = (char)(ZERO_MASK(*(int *)((int)pvVar5 + 0xa4))) + '\x02';
    }
    else if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) ||
            (UnlockableItems.trespasser != '\0')) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      moby->setByGroup = moby->setByGroup + 1U & 1;
      fVar9 = DAT_008548ec;
      fVar3 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].matrix.v2.z;
      fVar4 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].pos.z;
      *(undefined4 *)((int)pvVar5 + 0xb0) = 0;
      *(float *)((int)pvVar5 + 0xa8) = fVar3 * fVar2 + fVar4 + fVar9;
      moby->state = '\x03';
    }
    goto LAB_004026b8;
  }
  if (bVar1 < 3) {
    iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0xb4));
    if (iVar11 != 0) {
      sound_Kill(*(int *)((int)pvVar5 + 0xb4));
      *(undefined4 *)((int)pvVar5 + 0xb4) = 0xffffffff;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 20.0) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      fVar2 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].matrix.v2.z * fVar2 +
              Cylinders[*(int *)((int)pvVar5 + 0xa0)].pos.z + DAT_008548ec;
      if (ABS(g_heroPosition.z - fVar2) < 1.0) {
        moby->setByGroup = moby->setByGroup + 1U & 1;
        *(float *)((int)pvVar5 + 0xa8) = fVar2;
        *(undefined4 *)((int)pvVar5 + 0xb0) = 0;
        moby->state = '\x03';
        goto LAB_004026b8;
      }
    }
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      moby->setByGroup = moby->setByGroup + 1U & 1;
      fVar9 = DAT_008548ec;
      fVar3 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].matrix.v2.z;
      fVar4 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].pos.z;
      *(undefined4 *)((int)pvVar5 + 0xb0) = 0;
      *(float *)((int)pvVar5 + 0xa8) = fVar3 * fVar2 + fVar4 + fVar9;
      moby->state = '\x03';
    }
    goto LAB_004026b8;
  }
  if (3 < bVar1) goto LAB_004026b8;
  iVar11 = MB_IsPntInCylinder
                     ((Vec4 *)&g_heroCGPos,(longlong)*(int *)((int)pvVar5 + 0xa0));
  speed = (int)pvVar5 + 0xb0;
  val = &(moby->pos).z;
  if (iVar11 == 0) {
LAB_00402554:
    local_30.z = OrganicDelt
                           (*(float *)((int)pvVar5 + 0xa8),DAT_008548fc * DAT_0071f418,
                            DAT_008548fc * DAT_0071f418,DAT_008548f8 * g_FrameTime,val,
                            speed,(float *)speed);
  }
  else {
    fVar6 = (moby->pos).z;
    fVar2 = (moby->pos).z;
    uVar7 = (int)fVar6 >> 0x1f;
    if ((1.0 < ABS((fVar2 - g_heroPosition.z) - 2.0)) ||
       (uVar8 = (int)*(uint *)((int)pvVar5 + 0xa8) >> 0x1f,
       (int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) <
       (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xa8)) - uVar8))) goto LAB_00402554;
    fVar3 = DAT_008548fc * 4.0 * DAT_0071f418;
    local_30.z = OrganicDelt
                           (fVar2,fVar3,fVar3,DAT_008548f8 * g_FrameTime,val,speed,
                            (float *)speed);
  }
  lVar12 = (longlong)(int)moby + 0x40;
  local_30.w = 0.0;
  local_30.y = 0.0;
  local_30.x = 0.0;
  MB_GetOrientation((MobyInstance *)((int)pvVar5 + 0x60),&local_30,lVar12,lVar12);
  if (local_30.z == 0.0) {
    iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0xb4));
    if (iVar11 != 0) {
      sound_Kill(*(int *)((int)pvVar5 + 0xb4));
      *(undefined4 *)((int)pvVar5 + 0xb4) = 0xffffffff;
    }
  }
  else {
    iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0xb4));
    if (iVar11 == 0) {
      iVar11 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar5 + 0xb4) = iVar11;
    }
  }
  if (((moby->pos).z == *(f32 *)((int)pvVar5 + 0xa8)) &&
     ((g_standingOnMoby != moby || (g_framesNotGrounded != 0)))) {
    *(undefined4 *)((int)pvVar5 + 0x7c) = 0;
    *(undefined4 *)((int)pvVar5 + 0x78) = 0;
    *(undefined4 *)((int)pvVar5 + 0x74) = 0;
    *(undefined4 *)((int)pvVar5 + 0x70) = 0;
    moby->state = '\x02';
  }
  else if (*(int *)((int)pvVar5 + 0xb0) != 0) {
    RegisterFuncForMoby(&PTR_M654_00402750_0070de30,moby);
  }
LAB_004026b8:
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             (longlong)(int)moby + 0x40);
  return;
}


