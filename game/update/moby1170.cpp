// game/update/moby1170.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1ec8ac-0x1ed1d0
#include <stdio.h>
#include "game/update/moby1170.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1196.h"
#include "idol/fastfunc.h"

// 0x01ec8ac (0x14 bytes)
void M1170_001ec8ac(void)

{
  DAT_00765c90 = 0x10000;
  return;
}


// 0x01ec8c8 (0x210 bytes)
void M1170_001ec8c8(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00765cb4;
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar5 = 0;
  }
  iVar5 = MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\x06')) goto LAB_001eca40;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_001ec9fc:
    param_1->state = '\x06';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_001ec9fc;
  }
  else if (iVar5 < 0xb) {
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
  }
  MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_001eca40:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  MB_getTargetInArea
            (0x406fe00000000000,param_1,uVar6 + 0x70,&DAT_001ec8c0,0,0,
             Splines[*(int *)((int)pvVar3 + 0xc4)]->points,
             Splines[*(int *)((int)pvVar3 + 0xc4)]->cnt);
  if (*(int *)((int)pvVar3 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar3 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x01ecb08 (0x6c8 bytes)
// strings: 00654af4: 'Hovertank with no introPath. UID: %d\n' | 00654b1c: 'Hovertank with a intro path that has no points. UID: %d\n' | 00654b5c: 'Hovertank with no boundPath. UID: %d\n' | 00654b84: 'Hovertank with a bound path that has no points. UID: %d\n' | 00654bc4: 'Hovertank with no bombPath. UID: %d\n' | 00654bec: 'Hovertank with a bomb path that has no points. UID: %d\n'

/* Moby 1170 */

void UpdateMoby_1170(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  Spline *pSVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  Vec4 local_70;
  float local_60;
  float local_5c;
  float local_58;
  f32 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  Vec4 local_40;
  longlong local_30;
  
  lVar6 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  uVar8 = ZEXT48(pvVar2);
  M1170_001ec8c8();
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar6,uVar8 + 0x40,lVar6 + 0x10,1,0xffffffffffffffff,5,2,4);
    DeleteMoby(moby);
  }
  else if (uVar1 == '\x05') {
    pSVar3 = Splines[*(int *)((int)pvVar2 + 0xc0)];
    local_40.x = pSVar3->points[0].x - (moby->pos).x;
    local_40.y = pSVar3->points[0].y - (moby->pos).y;
    local_40.z = pSVar3->points[0].z - (moby->pos).z;
    local_40.w = pSVar3->points[0].w;
    ClampVec3Magnitude((double)(g_FrameTime * 20.0),&local_40);
    (moby->pos).x = (moby->pos).x + local_40.x;
    (moby->pos).y = (moby->pos).y + local_40.y;
    (moby->pos).z = (moby->pos).z + local_40.z;
    if (0.01 <= SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y)) {
      if (*(int *)((int)pvVar2 + 0xb4) != 2) {
        moby->state = '\x02';
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x04') {
    iVar7 = FastDecTimerS32(uVar8 + 0xcc);
    if (iVar7 != 0) {
      local_60 = (moby->pos).x;
      local_5c = (moby->pos).y;
      iVar7 = *(int *)((int)pvVar2 + 0xd0);
      local_58 = (moby->pos).z;
      pSVar3 = Splines[*(int *)((int)pvVar2 + 200)];
      local_54 = (moby->pos).w;
      fVar5 = DAT_00765cb8 * animationSpeed;
      local_44 = pSVar3->points[iVar7].w;
      local_48 = 0;
      local_50 = (pSVar3->points[iVar7].x - local_60) * (1.0 / fVar5);
      local_4c = (pSVar3->points[iVar7].y - local_5c) * (1.0 / fVar5);
      *(float *)((int)pvVar2 + 0x48) =
           -(fVar5 * fVar5 * DAT_00765cbc * DAT_0071f418 * -0.5 +
            (local_58 - Splines[*(int *)((int)pvVar2 + 200)]->points[iVar7].z)) / fVar5;
      local_30 = (longlong)(int)(animationSpeed * 120.5);
      FUN_001f29e8(lVar6,&local_60,&local_50,&DAT_001ecad8,(int)(animationSpeed * 120.5));
      iVar7 = *(int *)((int)pvVar2 + 0xd0) + 1;
      *(int *)((int)pvVar2 + 0xd0) = iVar7;
      if (iVar7 < Splines[*(int *)((int)pvVar2 + 200)]->cnt) {
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = loadVectorLeftIndexed(0x18,0x1ecad8);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar10);
        auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0xcc,uVar8);
        *(undefined4 *)((int)pvVar2 + 0xccU & 0xfffffffc) = uVar4;
      }
      else {
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        moby->state = '\x03';
        auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = loadVectorLeftIndexed(0x14,0x1ecad8);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar10);
        auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0xcc,uVar8);
        *(undefined4 *)((int)pvVar2 + 0xccU & 0xfffffffc) = uVar4;
      }
    }
  }
  else if (uVar1 == '\x03') {
    if (*(int *)((int)pvVar2 + 0xb4) == 2) {
      moby->state = '\x05';
    }
    else {
      iVar7 = FastDecTimerS32(uVar8 + 0xcc);
      if (iVar7 != 0) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar2 + 0xd0) = 0;
      }
    }
  }
  else if (uVar1 == '\x02') {
    pSVar3 = Splines[*(int *)((int)pvVar2 + 0xc0)];
    local_70.x = pSVar3->points[1].x - (moby->pos).x;
    local_70.y = pSVar3->points[1].y - (moby->pos).y;
    local_70.z = pSVar3->points[1].z - (moby->pos).z;
    local_70.w = pSVar3->points[1].w;
    ClampVec3Magnitude((double)(g_FrameTime * 20.0),&local_70);
    (moby->pos).x = (moby->pos).x + local_70.x;
    (moby->pos).y = (moby->pos).y + local_70.y;
    (moby->pos).z = (moby->pos).z + local_70.z;
    if (0.01 <= SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y)) {
      if (*(int *)((int)pvVar2 + 0xb4) == 2) {
        moby->state = '\x05';
      }
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar2 + 0xb4) != 2) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar2 + 0xc0) == -1) {
      printf("Hovertank with no introPath. UID: %d\n",moby->uid);
      DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar2 + 0xc0)]->cnt == 0) {
      printf("Hovertank with a intro path that has no points. UID: %d\n",moby->uid);
      DeleteMoby(moby);
    }
    else if (*(int *)((int)pvVar2 + 0xc4) == -1) {
      printf("Hovertank with no boundPath. UID: %d\n",moby->uid);
      DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar2 + 0xc4)]->cnt == 0) {
      printf("Hovertank with a bound path that has no points. UID: %d\n",moby->uid);
      DeleteMoby(moby);
    }
    else if (*(int *)((int)pvVar2 + 200) == -1) {
      printf("Hovertank with no bombPath. UID: %d\n",moby->uid);
      DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar2 + 200)]->cnt == 0) {
      printf("Hovertank with a bomb path that has no points. UID: %d\n",moby->uid);
      DeleteMoby(moby);
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0x20) = 0x40e00000;
      *(undefined2 *)((int)pvVar2 + 0x24) = 7;
      *(undefined1 *)((int)pvVar2 + 0x28) = 3;
      moby->state = '\x01';
      moby->updateDistance = -0x80;
      pSVar3 = Splines[*(int *)((int)pvVar2 + 0xc0)];
      (moby->pos).x = pSVar3->points[0].x;
      (moby->pos).y = pSVar3->points[0].y;
      (moby->pos).z = pSVar3->points[0].z;
      (moby->pos).w = pSVar3->points[0].w;
    }
  }
  return;
}


