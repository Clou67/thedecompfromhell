// game/update/moby1826.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2c0c60-0x2c11b4
#include "game/update/moby1826.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02c0c60 (0x554 bytes)
/* Moby 1826 */

void UpdateMoby_1826(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  Cylinder *pCVar10;
  f32 *val;
  int iVar11;
  longlong lVar12;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  Vec4 local_30;
  
  pCVar10 = Cylinders;
  local_50.x = -(moby->pos).x;
  fVar5 = (moby->pos).z;
  local_50.y = -(moby->pos).y;
  fVar2 = (moby->pos).z;
  pvVar6 = moby->pVar;
  uVar7 = (int)fVar5 >> 0x1f;
  local_50.z = -fVar2;
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar11 = *(int *)((int)pvVar6 + 0xa0);
      *(undefined4 *)((int)pvVar6 + 0xb4) = 0xffffffff;
      fVar2 = pCVar10[iVar11].matrix.v2.z;
      *(float *)((int)pvVar6 + 0xa8) = fVar2 + pCVar10[iVar11].pos.z;
      fVar4 = DAT_007b7efc;
      fVar3 = pCVar10[iVar11].pos.z;
      moby->setByGroup = '\x01';
      moby->state = '\x02';
      (moby->pos).z = fVar2 + fVar3 + fVar4;
    }
  }
  else if (bVar1 < 3) {
    iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0xb4));
    if (iVar11 != 0) {
      sound_Kill(*(int *)((int)pvVar6 + 0xb4));
      *(undefined4 *)((int)pvVar6 + 0xb4) = 0xffffffff;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 20.0) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      fVar2 = Cylinders[*(int *)((int)pvVar6 + 0xa0)].matrix.v2.z * fVar2 +
              Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.z + DAT_007b7efc;
      if (ABS(g_heroPosition.z - fVar2) < 1.0) {
        moby->setByGroup = moby->setByGroup + 1U & 1;
        *(float *)((int)pvVar6 + 0xa8) = fVar2;
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0;
        moby->state = '\x03';
        goto LAB_002c1150;
      }
    }
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      moby->setByGroup = moby->setByGroup + 1U & 1;
      fVar9 = DAT_007b7efc;
      fVar3 = Cylinders[*(int *)((int)pvVar6 + 0xa0)].matrix.v2.z;
      fVar4 = Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.z;
      *(undefined4 *)((int)pvVar6 + 0xb0) = 0;
      *(float *)((int)pvVar6 + 0xa8) = fVar3 * fVar2 + fVar4 + fVar9;
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    fVar3 = g_heroPosition.y - Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.y;
    fVar4 = g_heroPosition.x - Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.x;
    val = &(moby->pos).z;
    iVar11 = (int)pvVar6 + 0xb0;
    if (((2.25 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
        (1.0 < ABS((fVar2 - g_heroPosition.z) - 2.0))) ||
       (uVar8 = (int)*(uint *)((int)pvVar6 + 0xa8) >> 0x1f,
       (int)((uVar7 >> 1 ^ (uint)fVar5) - uVar7) <
       (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar6 + 0xa8)) - uVar8))) {
      local_30.z = OrganicDelt
                             (*(float *)((int)pvVar6 + 0xa8),DAT_007b7f0c * g_FrameTimeSq,
                              DAT_007b7f0c * g_FrameTimeSq,DAT_007b7f08 * g_FrameTime,val,
                              iVar11,(float *)iVar11);
    }
    else {
      fVar3 = DAT_007b7f0c * 4.0 * g_FrameTimeSq;
      local_30.z = OrganicDelt
                             (fVar2,fVar3,fVar3,DAT_007b7f08 * g_FrameTime,val,iVar11,
                              (float *)iVar11);
    }
    lVar12 = (longlong)(int)moby + 0x40;
    local_30.w = 0.0;
    local_30.y = 0.0;
    local_30.x = 0.0;
    MB_GetOrientation((MobyInstance *)((int)pvVar6 + 0x60),&local_30,lVar12,lVar12);
    if (local_30.z == 0.0) {
      iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0xb4));
      if (iVar11 != 0) {
        sound_Kill(*(int *)((int)pvVar6 + 0xb4));
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0xffffffff;
      }
    }
    else {
      iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0xb4));
      if (iVar11 == 0) {
        iVar11 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar6 + 0xb4) = iVar11;
      }
    }
    if (((moby->pos).z == *(f32 *)((int)pvVar6 + 0xa8)) &&
       ((g_standingOnMoby != moby || (g_framesNotGrounded != 0)))) {
      *(undefined4 *)((int)pvVar6 + 0x7c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x78) = 0;
      *(undefined4 *)((int)pvVar6 + 0x74) = 0;
      *(undefined4 *)((int)pvVar6 + 0x70) = 0;
      moby->state = '\x02';
    }
    else if (*(int *)((int)pvVar6 + 0xb0) != 0) {
      RegisterMobyDraw(&PTR_M1827_002c11e8_0070b020,moby);
    }
  }
LAB_002c1150:
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             (longlong)(int)moby + 0x40);
  return;
}


