// game/update/moby379.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x358494-0x358aa8
#include "game/update/moby379.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0358494 (0x164 bytes)
MobyInstance * M378_00358494(int param_1)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(ROCKET_0100|SPIDERBOT);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    fVar1 = *(f32 *)(param_1 + 0x14);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).y = fVar1;
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    *(undefined1 *)&(pMVar3->rotation).x = 0;
    (pMVar3->pos).w = fVar1;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).y = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).z = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).w = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 3) = 0;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x41a00000;
    *(undefined2 *)((int)pvVar2 + 0x24) = 0x14;
    *(undefined1 *)((int)pvVar2 + 0x28) = 3;
    *(undefined1 *)((int)pvVar2 + 0x66) = 0x80;
    *(undefined1 *)((int)pvVar2 + 0x65) = 0x80;
    *(undefined1 *)((int)pvVar2 + 100) = 0x80;
    *(undefined1 *)((int)pvVar2 + 0x67) = 0x80;
    *(undefined1 *)((int)pvVar2 + 0x69) = 0;
    *(undefined1 *)((int)pvVar2 + 0x68) = 0;
    *(undefined2 *)((int)pvVar2 + 0x6c) = 0xf;
    *(int *)((int)pvVar2 + 0x70) = param_1;
    UpdateMobyTransform(pMVar3);
    pMVar3->modeBits = pMVar3->modeBits | LOCK_ROTATION;
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x0358628 (0x424 bytes)
/* Moby 379 */

void UpdateMoby_379(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  GPiece<16> local_50;
  int local_40;
  int local_3c;
  longlong local_38;
  
  if (moby != (MobyInstance *)0x0) {
    pvVar2 = moby->pVar;
    uVar8 = ZEXT48(pvVar2);
    if (pvVar2 != (void *)0x0) {
      iVar6 = MB_damage(moby,0xffffffffffffffff,0);
      local_3c = -1;
      iVar7 = MB_HandleDamage(moby,iVar6,uVar8 + 0x20,0,&local_40,0,&local_3c,4);
      if ((((moby->state == '\x02') || (moby->state == '\x03')) && (iVar6 != 0)) &&
         (local_3c != 0x192)) {
        if ((0 < iVar7) && (iVar7 < 3)) {
          *(undefined4 *)((int)pvVar2 + 0x20) = 0;
        }
        if (1 < local_40) {
          uVar3 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
          uVar4 = (int)*(uint *)(iVar6 + 0x2c) >> 0x1f;
          if ((int)((uVar4 >> 1 ^ *(uint *)(iVar6 + 0x2c)) - uVar4) <
              (int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar3)) {
            *(float *)((int)pvVar2 + 0x20) =
                 *(float *)((int)pvVar2 + 0x20) - *(float *)(iVar6 + 0x2c);
            PlayMobySound(0,0,moby);
          }
          else {
            *(undefined4 *)((int)pvVar2 + 0x20) = 0;
            PlayMobySound(1,0,moby);
          }
        }
      }
      moby->damage = -1;
      puVar5 = (undefined4 *)((uint)&moby->rotation & 0xfffffff0);
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      uVar1 = moby->state;
      if (uVar1 == '\x04') {
        SetColorOfMoby(moby,0,0,0);
      }
      else if (uVar1 == '\x03') {
        iVar6 = FastDecTimerS32(uVar8 + 0x74);
        if (iVar6 == 0) {
          dVar11 = -0.05000000074505806;
          dVar10 = 0.05000000074505806;
          dVar9 = (double)MB_randRangeFloat(-0.05,0.05);
          (moby->pos).x = (float)((double)(moby->pos).x + dVar9);
          dVar9 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->pos).y = (float)((double)(moby->pos).y + dVar9);
          dVar9 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->pos).z = (float)((double)(moby->pos).z + dVar9);
          dVar11 = -0.009999999776482582;
          dVar10 = 0.009999999776482582;
          dVar9 = (double)MB_randRangeFloat(-0.01,0.01);
          (moby->rotation).x = (float)((double)(moby->rotation).x + dVar9);
          dVar9 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->rotation).y = (float)((double)(moby->rotation).y + dVar9);
          dVar9 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->rotation).z = (float)((double)(moby->rotation).z + dVar9);
        }
        else if (*(int *)((int)pvVar2 + 0x20) < 1) {
          MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,moby,local_50,0,0,1,10,3,0x10);
          if (moby->animationId != '\0') {
            local_38 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x04';
        }
        else {
          moby->state = '\0';
        }
      }
      else if (uVar1 == '\x02') {
        if (1 < local_40) {
          MB_UpdateLightsTransition(moby,uVar8 + 0x60);
          *(undefined4 *)((int)pvVar2 + 0x74) = 0x1e;
          moby->state = '\x03';
        }
      }
      else if (uVar1 == '\x01') {
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          local_38 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else if (uVar1 == '\0') {
        moby->state = '\x01';
      }
      MB_ColorDyingMoby(moby,uVar8 + 0x60);
    }
  }
  return;
}


// 0x0358a50 (0x58 bytes)
undefined8 M379_00358a50(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


