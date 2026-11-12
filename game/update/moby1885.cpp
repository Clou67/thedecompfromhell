// game/update/moby1885.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2ce020-0x2cf1f8
#include <stdio.h>
#include "game/update/moby1885.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1886.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x02ce020 (0x310 bytes)
// strings: 00655b98: 'Moby 1885 UID:%d could not find a moby to respawn at time %d!\n'

MobyInstance * FUN_002ce020(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  uint uVar6;
  MobyInstance *pMVar7;
  short sVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  MobyInstance *local_40 [2];
  
  if (param_1 == 0) {
    pMVar7 = (MobyInstance *)0x0;
  }
  else {
    pMVar7 = (MobyInstance *)0x0;
    iVar5 = *(int *)(param_1 + 0x78);
    local_40[0] = (MobyInstance *)0x0;
    iVar4 = MB_GetFirstMobyInGroup(local_40,*(int *)(iVar5 + 0x94),'\x01','\x01');
    if (iVar4 == 0) {
      *(char *)(iVar5 + 0x91) = *(char *)(iVar5 + 0x91) + '\x01';
      fStack00000044 = (f32)param_3;
      fStack0000004c = (f32)param_4;
      (local_40[0]->pos).y = fStack00000044;
      (local_40[0]->pos).w = fStack0000004c;
      fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
      fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
      (local_40[0]->pos).x = fStack00000040;
      (local_40[0]->pos).z = fStack00000048;
      (local_40[0]->pos).w = 0.0;
      local_40[0]->state = '\0';
      local_40[0]->setByGroup = '\0';
      local_40[0]->modeBits = *(MobyModeBit *)&local_40[0]->pClass->mode_bits;
      local_40[0]->scale = local_40[0]->pClass->gScale;
      local_40[0]->updateDistance = -1;
      local_40[0]->drawDistance = 0xff;
      local_40[0]->enabled = '\x01';
      if (local_40[0]->pClass->glow_rgba != 0) {
        local_40[0]->modeBits = local_40[0]->modeBits | HAS_GLOW;
      }
      if (local_40[0]->pClass->shadow != '\0') {
        local_40[0]->modeBits = local_40[0]->modeBits | DRAW_SHADOW;
      }
      local_40[0]->occlIndex = 0x7f80;
      local_40[0]->unk71 = -1;
      local_40[0]->unk72 = -1;
      local_40[0]->damage = -1;
      if (*(char *)(iVar5 + 0x93) != '\0') {
        local_40[0]->scale = local_40[0]->pClass->gScale * 0.1;
      }
      MB_SetAnimationNoBlend(local_40[0],0,0);
      iVar5 = FUN_00486828(local_40[0]);
      sVar8 = *(short *)(param_1 + 0xb4);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x94) = 0;
        *(undefined2 *)(iVar5 + 0x68) = 0;
        *(undefined4 *)(iVar5 + 0x6c) = 0;
      }
      sVar1.piece<0,1>() = local_40[0]->field76_0xb4;
      sVar1.piece<1,1>() = local_40[0]->field77_0xb5;
      if (sVar8 < sVar1) {
        local_40[0]->field76_0xb4 = (char)((ushort)sVar8 >> 8);
        local_40[0]->field77_0xb5 = (char)sVar8;
      }
      sVar8.piece<0,1>() = local_40[0]->field76_0xb4;
      sVar8.piece<1,1>() = local_40[0]->field77_0xb5;
      if (sVar8 < 1) {
        local_40[0]->field76_0xb4 = '\0';
        local_40[0]->field77_0xb5 = '\x01';
      }
      sVar8 = *(short *)(param_1 + 0xb4) - *(short *)&local_40[0]->field76_0xb4;
      *(short *)(param_1 + 0xb4) = sVar8;
      if (sVar8 < 0) {
        *(undefined2 *)(param_1 + 0xb4) = 1;
      }
      local_40[0]->collision = local_40[0]->pClass->collision;
      MB_CopyHeroLights(local_40[0]);
      UpdateMobyTransform(local_40[0]);
      pMVar7 = local_40[0];
      uVar3 = MB_GetPvarsIfMobyHasThem(local_40[0]);
      uVar6 = (uint)uVar3;
      if (uVar6 != 0) {
        auVar9 = ZEXT416(0xfffffff0);
        auVar10 = loadVectorLeftIndexed(4,uVar3);
        auVar11 = loadVectorRightIndexed(0x14,uVar3);
        auVar9 = vectorShiftRightAlgebraicWord
                           (auVar10 | auVar11,
                            auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
        auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar3);
        *(undefined4 *)(uVar6 & 0xfffffffc) = uVar2;
        *(undefined4 *)(uVar6 + 0x30) = 0;
        *(undefined4 *)(uVar6 + 0x34) = 0;
      }
    }
    else {
      printf("Moby 1885 UID:%d could not find a moby to respawn at time %d!\n",
                   *(undefined2 *)(param_1 + 0xb2),worldUpdateTime);
    }
  }
  return pMVar7;
}


// 0x02ce340 (0x16c bytes)
void M1885_002ce340(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int local_20 [2];
  
  iVar3 = MB_damage(param_1,0xc30000,0);
  MB_HandleDamage(param_1,iVar3,param_2 + 0x20,0,local_20,0,0,4);
  if (local_20[0] < 2) goto LAB_002ce478;
  iVar2 = (int)param_2;
  fVar1 = *(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x2c);
  *(float *)(iVar2 + 0x20) = fVar1;
  if (0.0 < fVar1) {
    *(undefined1 *)(iVar2 + 0x67) = 0x5a;
    MB_UpdateLightsTransition(param_1,param_2 + 0x60);
    goto LAB_002ce478;
  }
  if (Level == Gemlik) {
    if (4.0 <= ABS(g_heroPosition.z - 248.0)) goto LAB_002ce444;
    MB_SpawnBoltsFromCrate(param_1,0x200,0xffffffffffffffff);
  }
  else {
LAB_002ce444:
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  param_1->state = '\x02';
  *(undefined1 *)(iVar2 + 0x67) = 0x78;
  MB_UpdateLightsTransition(param_1,param_2 + 0x60);
LAB_002ce478:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x02ce4ac (0xa8 bytes)
ulonglong M1885_002ce4ac(undefined8 param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = MB_CountActiveMobysByGroup(*(undefined4 *)(param_2 + 0x94),0xffffffffffffffff);
  uVar2 = 0;
  *(char *)(param_2 + 0x91) = cVar1;
  uVar4 = 0xffffffffffffffff;
  do {
    iVar3 = *(int *)((int)((uVar2 & 0xffffffff) << 2) + param_2 + 0xb0);
    uVar5 = uVar2;
    if (((iVar3 != 0) && (*(short *)(iVar3 + 0xa6) == 0x75e)) &&
       (*(char *)(iVar3 + 0x20) != -3 && *(char *)(iVar3 + 0x20) != -2)) {
      cVar1 = cVar1 + '\x01';
      *(char *)(param_2 + 0x91) = cVar1;
      uVar5 = uVar4;
    }
    iVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)iVar3;
    uVar4 = uVar5;
  } while (iVar3 < 0x14);
  return uVar5;
}


// 0x02ce590 (0xc54 bytes)
/* Moby 1885 */

void UpdateMoby_1885(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  float fVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar16;
  Vec4 *pVVar17;
  byte bVar20;
  ulonglong uVar15;
  uint uVar18;
  undefined4 uVar19;
  int32_t iVar21;
  ulonglong uVar22;
  Cuboid *pCVar23;
  longlong lVar24;
  Cuboid *pCVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  GPiece<16> local_80;
  GPiece<16> local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  MobyInstance *local_50;
  int local_4c;
  int local_48 [4];
  
  lVar14 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar28 = ZEXT48(pvVar5);
  iVar16 = MB_damage(lVar14,0xc30000,0);
  MB_HandleDamage(moby,iVar16,uVar28 + 0x20,0,local_48,0,0,4);
  if (1 < local_48[0]) {
    fVar1 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar16 + 0x2c);
    *(float *)((int)pvVar5 + 0x20) = fVar1;
    if (fVar1 <= 0.0) {
      if ((Level != Gemlik) || (4.0 <= ABS(g_heroPosition.z - 248.0))) {
        MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      }
      else {
        MB_SpawnBoltsFromCrate(lVar14,0x200,0xffffffffffffffff);
      }
      moby->state = '\x02';
      *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
      MB_UpdateLightsTransition(lVar14,uVar28 + 0x60);
    }
    else {
      *(undefined1 *)((int)pvVar5 + 0x67) = 0x5a;
      MB_UpdateLightsTransition(lVar14,uVar28 + 0x60);
    }
  }
  lVar24 = uVar28 + 0x60;
  moby->damage = -1;
  MB_ColorDyingMoby(lVar14,lVar24);
  bVar20 = moby->state;
  if (bVar20 == 0) {
    local_50 = (MobyInstance *)0x0;
    while (iVar16 = MB_GetFirstMobyInGroup
                              (&local_50,*(int *)((int)pvVar5 + 0x94),'\0','\0'), iVar16 == 0) {
      DeleteMoby(local_50);
    }
    moby->state = '\x01';
  }
  else if (bVar20 < 2) {
    iVar16 = MB_damage(lVar14,0xc30000,0);
    MB_HandleDamage(moby,iVar16,uVar28 + 0x20,0,&local_4c,0,0,4);
    if (1 < local_4c) {
      fVar1 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar16 + 0x2c);
      *(float *)((int)pvVar5 + 0x20) = fVar1;
      if (fVar1 <= 0.0) {
        if ((Level != Gemlik) || (4.0 <= ABS(g_heroPosition.z - 248.0))) {
          MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
        }
        else {
          MB_SpawnBoltsFromCrate(lVar14,0x200,0xffffffffffffffff);
        }
        moby->state = '\x02';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
        MB_UpdateLightsTransition(lVar14,lVar24);
      }
      else {
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x5a;
        MB_UpdateLightsTransition(lVar14,lVar24);
      }
    }
    moby->damage = -1;
    MB_ColorDyingMoby(lVar14,lVar24);
    iVar16 = FastDecTimerS16(uVar28 + 0x8e);
    if (iVar16 != 0) {
      iVar16 = MB_randInt(7);
      if (iVar16 == 0) {
        iVar21 = 0;
        pVVar17 = (Vec4 *)0x0;
        lVar24 = (ZERO_MASK((-1 - *(int *)((int)pvVar5 + 0x84)))) + 1;
        if (*(int *)((int)pvVar5 + 0x88) != -1) {
          pVVar17 = Splines[*(int *)((int)pvVar5 + 0x88)]->points;
          iVar21 = Splines[*(int *)((int)pvVar5 + 0x88)]->cnt;
        }
        MB_getTargetInArea
                  ((double)*(float *)((int)pvVar5 + 0x80),lVar14,uVar28 + 0x100,lVar24,
                   uVar28 + 0x84 +
                   (ZERO_MASK((-1 - *(int *)((int)pvVar5 + 0x84))) & -(uVar28 + 0x84))
                   ,lVar24,pVVar17,iVar21);
      }
      else {
        iVar16 = *(int *)((int)pvVar5 + 0x140);
        if ((iVar16 == 0) || (*(char *)(iVar16 + 0x20) == -3 || *(char *)(iVar16 + 0x20) == -2)) {
          *(undefined4 *)((int)pvVar5 + 0x140) = 0;
          *(undefined4 *)((int)pvVar5 + 0x144) = 2;
        }
        else {
          *(undefined4 *)((int)pvVar5 + 0x100) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined4 *)((int)pvVar5 + 0x104) = *(undefined4 *)(iVar16 + 0x14);
          *(undefined4 *)((int)pvVar5 + 0x108) = *(undefined4 *)(iVar16 + 0x18);
          *(undefined4 *)((int)pvVar5 + 0x10c) = *(undefined4 *)(iVar16 + 0x1c);
        }
      }
      if (*(int *)((int)pvVar5 + 0x144) != 2) {
        bVar20 = MB_CountActiveMobysByGroup
                           (*(undefined4 *)((int)pvVar5 + 0x94),0xffffffffffffffff);
        uVar15 = 0;
        *(byte *)((int)pvVar5 + 0x91) = bVar20;
        iVar16 = 0;
        uVar22 = uVar28;
        uVar26 = 0xffffffffffffffff;
        do {
          iVar6 = *(int *)((int)uVar22 + 0xb0);
          uVar27 = uVar15;
          if (((iVar6 != 0) && (*(short *)(iVar6 + 0xa6) == 0x75e)) &&
             (*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2)) {
            bVar20 = bVar20 + 1;
            *(byte *)((int)pvVar5 + 0x91) = bVar20;
            uVar27 = uVar26;
          }
          uVar15 = uVar15 + 1;
          uVar22 = uVar22 + 4;
          uVar26 = uVar27;
        } while ((int)uVar15 < 0x14);
        if (((bVar20 < *(byte *)((int)pvVar5 + 0x90)) && ((int)uVar27 != -1)) &&
           ((bVar20 == 0 ||
            (((int)(FLOAT_ORDER(g_PerfLoad)) < 0x3f59999a &&
             ((int)(FLOAT_ORDER(g_FrameLoad)) < 0x3f59999a)))))) {
          pCVar25 = (Cuboid *)0x0;
          if (*(char *)((int)pvVar5 + 0x92) == '\0') {
            uVar18 = MB_randRange(0,3);
            do {
              iVar6 = *(int *)((int)pvVar5 +
                              (uVar18 + (((int)uVar18 >> 2) +
                                        (uint)((int)uVar18 < 0 && (uVar18 & 3) != 0)) * -4) * 4 +
                              0xa0);
              if (iVar6 != -1) {
                pCVar25 = Cuboids + iVar6;
                if (pCVar25 != (Cuboid *)0x0) {
                  local_90 = (pCVar25->pos).x;
                  local_8c = (pCVar25->pos).y;
                  local_88 = (pCVar25->pos).z;
                  local_84 = (pCVar25->pos).w;
                  goto LAB_002ceda0;
                }
                break;
              }
              iVar16 = iVar16 + 1;
              uVar18 = uVar18 + 1;
            } while (iVar16 < 4);
            dVar30 = (double)*(float *)((int)pvVar5 + 0x80);
            if ((double)*(float *)((int)pvVar5 + 0x80) - 3.0 < 0.0) {
              dVar30 = 3.0;
            }
            MB_randCircle(dVar30,&local_90);
            local_90 = local_90 + (moby->pos).x;
            local_8c = local_8c + (moby->pos).y;
            local_88 = local_88 + (moby->pos).z;
          }
          else {
            fVar1 = 100000.0;
            uVar22 = uVar28;
            pCVar25 = (Cuboid *)0x0;
            do {
              iVar6 = *(int *)((int)uVar22 + 0xa0);
              if (iVar6 != -1) {
                pCVar23 = Cuboids + iVar6;
                fVar2 = g_heroPosition.y - (pCVar23->pos).y;
                fVar3 = g_heroPosition.x - (pCVar23->pos).x;
                fVar7 = g_heroPosition.z - (pCVar23->pos).z;
                fVar2 = SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2);
                if (fVar2 < fVar1) {
                  fVar1 = fVar2;
                  pCVar25 = pCVar23;
                }
              }
              iVar16 = iVar16 + 1;
              uVar22 = uVar22 + 4;
            } while (iVar16 < 4);
            if (pCVar25 == (Cuboid *)0x0) {
              fVar1 = (moby->pos).x;
              fVar2 = (moby->pos).y;
              fVar3 = (moby->pos).z;
              local_84 = *(float *)((int)pvVar5 + 0x10c);
              fVar12 = (*(float *)((int)pvVar5 + 0x100) - fVar1) * 0.5;
              fVar10 = (*(float *)((int)pvVar5 + 0x104) - fVar2) * 0.5;
              fVar7 = (*(float *)((int)pvVar5 + 0x108) - fVar3) * 0.5;
              uVar18 = (int)*(uint *)((int)pvVar5 + 0x80) >> 0x1f;
              if ((0x40400000 < (int)((uVar18 >> 1 ^ *(uint *)((int)pvVar5 + 0x80)) - uVar18)) &&
                 (fVar4 = SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar10 * fVar10), 3.0 < fVar4)) {
                fVar4 = 3.0 / fVar4;
                fVar12 = fVar12 * fVar4;
                fVar10 = fVar10 * fVar4;
                fVar7 = fVar7 * fVar4;
              }
              fVar13 = SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar10 * fVar10);
              fVar4 = fVar12;
              fVar9 = fVar7;
              fVar11 = fVar10;
              if ((fVar13 < 3.0) && (fVar4 = 0.0, fVar9 = fVar4, fVar11 = fVar4, fVar13 != 0.0)) {
                fVar13 = 3.0 / fVar13;
                fVar4 = fVar12 * fVar13;
                fVar9 = fVar7 * fVar13;
                fVar11 = fVar10 * fVar13;
              }
              local_90 = fVar4 + fVar1;
              local_8c = fVar11 + fVar2;
              local_88 = fVar9 + fVar3;
            }
            else {
              local_90 = (pCVar25->pos).x;
              local_8c = (pCVar25->pos).y;
              local_88 = (pCVar25->pos).z;
              local_84 = (pCVar25->pos).w;
            }
          }
LAB_002ceda0:
          if (pCVar25 != (Cuboid *)0x0) {
            dVar35 = -1.0;
            dVar33 = 1.0;
            dVar30 = (double)MB_randRangeFloat(-1.0,1.0);
            fVar1 = (pCVar25->matrix).v0.x;
            fVar2 = (pCVar25->matrix).v0.y;
            fVar3 = (pCVar25->matrix).v0.z;
            dVar33 = (double)MB_randRangeFloat((float)dVar35,(float)dVar33);
            local_90 = (float)((double)(pCVar25->matrix).v1.x * dVar33 +
                              (double)(float)((double)fVar1 * dVar30 + (double)local_90));
            local_8c = (float)((double)(pCVar25->matrix).v1.y * dVar33 +
                              (double)(float)((double)fVar2 * dVar30 + (double)local_8c));
            local_88 = (float)((double)(pCVar25->matrix).v1.z * dVar33 +
                              (double)(float)((double)fVar3 * dVar30 + (double)local_88));
          }
          dVar33 = (double)GetGroundZ(0x3fe0000000000000,&local_90,0);
          dVar35 = 0.0;
          dVar30 = (double)local_88;
          if (dVar33 != 0.0) {
            dVar30 = dVar33;
          }
          fVar7 = local_8c - (moby->pos).y;
          fVar3 = local_90 - (moby->pos).x;
          fVar2 = (float)(dVar30 - (double)(moby->pos).z);
          dVar33 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar7 * fVar7);
          dVar34 = (double)(float)((double)(g_FrameTime * 0.6) * dVar33);
          fVar1 = (float)(dVar34 / dVar33);
          dVar30 = dVar35;
          if (0.0 - dVar33 < 0.0) {
            dVar30 = (double)(fVar3 * fVar1);
          }
          dVar31 = dVar35;
          if (0.0 - dVar33 < 0.0) {
            dVar31 = (double)(fVar7 * fVar1);
          }
          dVar32 = dVar35;
          if (0.0 - dVar33 < 0.0) {
            dVar32 = (double)(fVar2 * fVar1);
          }
          if (dVar33 - 0.0 < 0.0) {
            dVar30 = (double)(fVar3 * fVar1);
          }
          if (dVar33 - 0.0 < 0.0) {
            dVar31 = (double)(fVar7 * fVar1);
          }
          if (dVar33 - 0.0 < 0.0) {
            dVar32 = (double)(fVar2 * fVar1);
          }
          fVar2 = (float)dVar30;
          fVar3 = (float)dVar31;
          fVar7 = (float)dVar32;
          GetBonePosition(lVar14,0,local_70);
          local_54 = local_84;
          dVar33 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3);
          fVar1 = (float)(0.05000000074505806 / dVar33);
          dVar30 = dVar35;
          if (dVar35 - dVar33 < 0.0) {
            dVar30 = (double)(fVar2 * fVar1);
          }
          dVar31 = dVar35;
          if (dVar35 - dVar33 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          dVar32 = dVar35;
          if (dVar35 - dVar33 < 0.0) {
            dVar32 = (double)(fVar7 * fVar1);
          }
          if (dVar33 - dVar35 < 0.0) {
            dVar30 = (double)(fVar2 * fVar1);
          }
          if (dVar33 - dVar35 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          if (dVar33 - dVar35 < 0.0) {
            dVar32 = (double)(fVar7 * fVar1);
          }
          local_60 = (float)dVar30;
          local_5c = (float)dVar31;
          local_58 = (float)dVar32;
          MB_RandomizeVector(0.025,&local_60);
          MB_computeLobVelocity(dVar34,(double)(g_FrameTimeSq * -9.8),local_70,&local_90);
          uVar19 = M1885_002cf208
                             (lVar14,local_70,local_80,*(undefined1 *)((int)pvVar5 + 0x93),
                              uVar27 & 0xff);
          auVar39 = ZEXT416(0xffffffff);
          auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar37 = loadVectorLeftIndexed(0x8c,uVar28);
          auVar38 = loadVectorRightIndexed(0x9c,uVar28);
          auVar39 = ZEXT416(0xfffffff0);
          auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
          *(undefined4 *)((int)pvVar5 + (int)(uVar27 << 2) + 0xb0) = uVar19;
          auVar37 = vectorShiftRightAlgebraicWord
                              (auVar37 | auVar38,
                               auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
          auVar39 = loadVectorLeftIndexed(0x10,0x2ce554);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = vectorConvertFromSignedFixedPointWord(auVar37,0);
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorAddFloatingPoint
                              (auVar37,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                              );
          auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar39,0x8e,uVar28);
          *(undefined2 *)((int)pvVar5 + 0x8e) = uVar8;
          *(char *)((int)pvVar5 + 0x91) = *(char *)((int)pvVar5 + 0x91) + '\x01';
        }
      }
    }
  }
  else if (bVar20 < 3) {
    uVar36 = 0;
    MB_genericExplosion
              (0,0,0x4020000000000000,0x4010000000000000,0x4032000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar14,uVar28 + 0x70,0,1,0xffffffffffffffff,0x1e,8,0x14);
    lVar29 = lVar14 + 0x10;
    lVar24 = lVar14 + 0x40;
    MB_SpawnDebrisMoby(uVar36,lVar14,0x6c5,lVar29,lVar24,0,0);
    MB_SpawnDebrisMoby(uVar36,lVar14,0x6c6,lVar29,lVar24,0,0);
    MB_SpawnDebrisMoby(uVar36,lVar14,0x6c7,lVar29,lVar24,0,0);
    DeleteMoby(moby);
  }
  return;
}


// 0x02cf1e4 (0x14 bytes)
void M1886_002cf1e4(void)

{
  DAT_007bd5f0 = 0x10000;
  return;
}


