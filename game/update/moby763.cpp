// game/update/moby763.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4515fc-0x45374c
#include <stdlib.h>
#include "game/update/moby763.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x04515fc (0x14 bytes)
void M763_004515fc(void)

{
  DAT_00873534 = 0x10000;
  return;
}


// 0x0451618 (0xfc bytes)
void M763_00451618(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = MB_randInt(2);
  iVar1 = (int)(animationSpeed * 8.5);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      if (*(char *)(param_1 + 0x53) == '\x03') {
        return;
      }
      MB_SetAnimation(param_1,3,0,iVar1);
      return;
    }
  }
  else if (iVar2 < 2) {
    if (*(char *)(param_1 + 0x53) == '\x0f') {
      return;
    }
    MB_SetAnimation(param_1,0xf,0,iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x53) != '\x10') {
    MB_SetAnimation(param_1,0x10,0,iVar1);
  }
  return;
}


// 0x0451730 (0x3ec bytes)
void M763_00451730(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 in_LR;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<4> auStack_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  
  pvVar2 = param_1->pVar;
  uVar9 = ZEXT48(pvVar2);
  if (*(int *)((int)pvVar2 + 0x38) != 0) {
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    *(undefined4 *)((int)pvVar2 + 0x38) = 0;
    auVar11 = loadVectorLeftIndexed(in_LR,0x451714);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x214,uVar9);
    *(undefined4 *)((int)pvVar2 + 0x214U & 0xfffffffc) = uVar4;
  }
  uVar1 = param_1->state;
  if ((uVar1 != '\v' && uVar1 != '\t') && (uVar1 != '\0')) {
    iVar8 = FastDecTimerS32(uVar9 + 0x214);
    uVar4 = 0x41a00000;
    if (iVar8 != 0) {
      uVar4 = 0x41400000;
    }
    *(undefined4 *)((int)pvVar2 + 0x1fc) = uVar4;
  }
  iVar8 = MB_damage(param_1,0x330000,0);
  dVar10 = 0.0;
  local_4c = 0.0;
  MB_HandleDamage(param_1,iVar8,uVar9 + 0x20,0,auStack_50,&local_4c,0,4);
  if ((iVar8 != 0) && (param_1->state != 'c')) {
    if (param_1->group != -1) {
      MB_SetGroupField(param_1->group,7);
    }
    if (local_4c != 0.0) {
      fVar5 = *(float *)((int)pvVar2 + 0x20) - local_4c;
      *(undefined4 *)((int)pvVar2 + 0x80) = 0x3c03126f;
      *(undefined4 *)((int)pvVar2 + 0x84) = 0x3a03126f;
      *(float *)((int)pvVar2 + 0x20) = fVar5;
      fVar7 = DAT_0087355c;
      fVar6 = g_FrameTime;
      *(undefined4 *)((int)pvVar2 + 0x94) = 9;
      *(float *)((int)pvVar2 + 0x88) = fVar7 * fVar6;
      fVar7 = DAT_00873558;
      *(undefined1 *)((int)pvVar2 + 0xad) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa0) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0xa8) = 0x3f800000;
      *(float *)((int)pvVar2 + 0x8c) = fVar7 * fVar6;
      if (dVar10 < (double)fVar5) {
        MB_randInt(0x100);
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),local_44,uVar9 + 0x88
                   ,uVar9 + 0x8c);
        MB_StartKick((double)local_44[0],param_1,uVar9 + 0x70);
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        *(undefined4 *)((int)pvVar2 + 0xc0) = DAT_00873568;
        *(undefined4 *)((int)pvVar2 + 0xc4) = DAT_0087356c;
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar2 + 0x67) = 0xfa;
        auVar11 = loadVectorLeftIndexed(0x18,0x451714);
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar3 = storeVectorElementHalfWordIndexed(auVar11,0x26,uVar9);
        *(undefined2 *)((int)pvVar2 + 0x26) = uVar3;
        MB_UpdateLightsTransition(param_1,uVar9 + 0x60);
      }
      else {
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar5 = g_FrameTime;
        *(float *)((int)pvVar2 + 0x88) = g_FrameTime * 8.0;
        *(float *)((int)pvVar2 + 0x8c) = fVar5 * 10.0;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),&local_48,
                   uVar9 + 0x88,uVar9 + 0x8c);
        MB_StartKick((double)local_48,param_1,uVar9 + 0x70);
        *(undefined4 *)((int)pvVar2 + 0xc0) = 0x41300000;
        *(undefined4 *)((int)pvVar2 + 0xc4) = 0x41900000;
        param_1->state = 'c';
        *(undefined1 *)((int)pvVar2 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar9 + 0x60);
      }
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar9 + 0x60);
  return;
}


// 0x0451bc8 (0x1b84 bytes)
/* Moby 763 */

void UpdateMoby_763(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  u16 *puVar9;
  MobyClass *pMVar10;
  f32 fVar11;
  MobyInstance *victim;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 uVar22;
  uint uVar20;
  int iVar21;
  ulonglong uVar19;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> auStack_110;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  GPiece<16> auStack_f0;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  f32 local_d0;
  f32 local_cc;
  float local_c8;
  f32 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  GPiece<80> auStack_b0;
  uint local_60;
  GPiece<8> auStack_50;
  longlong local_48;
  
  lVar16 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  M763_00451730();
  MB_getTarget((double)*(float *)((int)pvVar8 + 0x1fc),lVar16);
  bVar1 = moby->state;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).z;
  lVar23 = (ulonglong)local_60 +
           (ZERO_MASK(local_60) & ZEXT48(g_heroMobyPtr) - (ulonglong)local_60);
  victim = (MobyInstance *)lVar23;
  if (8 < bVar1) {
    if (bVar1 == 99) {
      uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
      if ((uVar20 & 0x40) == 0) {
        dVar24 = (double)BlendAnimFrame(moby);
        fVar11 = (moby->pos).z;
        uVar20 = (int)fVar11 >> 0x1f;
        if ((dVar24 <= 37.0) || (moby->updateId != moby->animationId)) {
          if ((int)((uVar20 >> 1 ^ (uint)fVar11) - uVar20) < 0x41200000) {
            MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
            DeleteMoby(moby);
            return;
          }
          goto LAB_004536f0;
        }
      }
      moby->unk58 = 0.0;
      MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
      moby->state = '\x0f';
      moby->modeBits = moby->modeBits | TRANSPARENT;
      goto LAB_004536f0;
    }
    if (bVar1 == 0xf) {
      DeleteMoby(moby);
      return;
    }
    if (bVar1 == 0xe) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        uVar19 = MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar8 + 0x1f8);
        if ((uVar19 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar8 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar8 + 500) = fVar3 * 0.017453292;
        dVar24 = (double)MB_randRangeFloat(30.0,90.0);
        *(int *)((int)pvVar8 + 0x210) = (int)(animationSpeed * ((float)(longlong)dVar24 + 0.5));
        iVar21 = MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar21 < 1) {
          if (-1 < iVar21) {
            if (uVar2 != '\x03') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
            }
            goto LAB_004536f0;
          }
        }
        else if (iVar21 < 2) {
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_004536f0;
        }
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      goto LAB_004536f0;
    }
    if (bVar1 == 0xd) {
      puVar9 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar9;
      uVar17 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
      OrganicDeltAngSpeed
                (uVar17,0x3f9eb851e0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar16,&DAT_00451b1c,
                 (int)pvVar8 + 0x1f0);
      if ((moby->field43_0x70 & 2U) == 0) goto LAB_004536f0;
      uVar19 = MB_randInt(0x100);
      fVar3 = *(float *)((int)pvVar8 + 0x1f8);
      if ((uVar19 & 1) != 0) {
        fVar3 = -fVar3;
        *(float *)((int)pvVar8 + 0x1f8) = fVar3;
      }
      *(float *)((int)pvVar8 + 500) = fVar3 * 0.017453292;
      dVar24 = (double)MB_randRangeFloat(30.0,90.0);
      *(int *)((int)pvVar8 + 0x210) = (int)(animationSpeed * ((float)(longlong)dVar24 + 0.5));
      moby->state = '\x04';
      iVar21 = MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (iVar21 < 0) {
LAB_00452478:
          if (uVar2 != '\x10') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
          }
        }
        else if (uVar2 != '\x03') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
        }
      }
      else {
        if (1 < iVar21) goto LAB_00452478;
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
      }
      moby->setByGroup = '\0';
      goto LAB_004536f0;
    }
    if (bVar1 == 0xc) {
      uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
      if ((uVar20 & 1) != 0) {
        moby->state = '\x0e';
        if (moby->animationId == '\t') {
          return;
        }
        MB_SetAnimation(lVar16,9,8,3);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
      goto LAB_004536f0;
    }
    if (bVar1 == 0xb) {
      uVar17 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x1d0) - fVar3),
                            (double)(*(float *)((int)pvVar8 + 0x1d4) - fVar4));
      OrganicDeltAngSpeed
                (uVar17,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar16,
                 &DAT_00451b1c,(int)pvVar8 + 0x1f0);
      fVar4 = (victim->pos).y - *(float *)((int)pvVar8 + 0x1d4);
      fVar3 = (victim->pos).z;
      fVar5 = (victim->pos).x - *(float *)((int)pvVar8 + 0x1d0);
      fVar6 = fVar3 - *(float *)((int)pvVar8 + 0x1d8);
      if (((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)((int)pvVar8 + 0x1fc))
          && (ABS(*(float *)((int)pvVar8 + 0x1d8) - fVar3) < 8.0)) || (moby->setByGroup == '\x02'))
      {
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,2);
        }
        dVar26 = (double)DAT_00873564;
        dVar24 = (double)DAT_0071f418;
        *(undefined4 *)((int)pvVar8 + 0x84) = 0;
        moby->drawDistance = 0x40;
        *(float *)((int)pvVar8 + 0x80) = (float)(dVar26 * dVar24);
        fVar3 = DAT_00873560 * g_FrameTime;
        *(float *)((int)pvVar8 + 0x88) = fVar3;
        dVar24 = (double)MB_computeLobVelocity
                                   ((double)fVar3,-dVar26,lVar16 + 0x10,(int)pvVar8 + 0x1d0,0x870000
                                    ,&DAT_00720000,auStack_50);
        *(float *)((int)pvVar8 + 0x8c) = (float)dVar24;
        *(undefined1 *)((int)pvVar8 + 0xad) = 0;
        fVar3 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar8 + 0x94) = 5;
        MB_StartKick((double)fVar3,lVar16,(int)pvVar8 + 0x70,5,8,1,0);
        MVar7 = moby->modeBits;
        pMVar10 = moby->pClass;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        moby->state = '\f';
        moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
        moby->collision = pMVar10->collision;
      }
      goto LAB_004536f0;
    }
    if (bVar1 == 10) {
      dVar24 = (double)BlendAnimFrame(moby);
      if (29.0 < dVar24) {
        moby->state = '\x04';
        iVar21 = MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar21 < 1) {
          if (-1 < iVar21) {
            if (uVar2 == '\x03') {
              return;
            }
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
            return;
          }
        }
        else if (iVar21 < 2) {
          if (uVar2 == '\x0f') {
            return;
          }
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
          return;
        }
        if (uVar2 == '\x10') {
          return;
        }
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
        return;
      }
      goto LAB_004536f0;
    }
    if (bVar1 != 9) goto LAB_004536f0;
    fVar4 = (victim->pos).y - fVar4;
    fVar3 = (victim->pos).x - fVar3;
    fVar6 = (victim->pos).z;
    fVar12 = fVar6 - fVar5;
    if (((SQRT(fVar12 * fVar12 + fVar3 * fVar3 + fVar4 * fVar4) < *(float *)((int)pvVar8 + 0x1fc))
        && (ABS(fVar5 - fVar6) < 8.0)) && (iVar21 = MB_randInt(0x13), iVar21 == 0)) {
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      moby->state = '\r';
      if (moby->animationId != '\a') {
        MB_SetAnimation(lVar16,7,0,1);
      }
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      goto LAB_004536f0;
    }
    bVar1 = moby->setByGroup;
    if ((bVar1 & 1) == 0) {
LAB_00452290:
      if (bVar1 != 7) goto LAB_004536f0;
    }
    else {
      iVar21 = FastDecTimerS16((int)pvVar8 + 0x218);
      if (iVar21 == 0) {
        bVar1 = moby->setByGroup;
        goto LAB_00452290;
      }
    }
    moby->state = '\r';
    if (moby->animationId != '\a') {
      MB_SetAnimation(lVar16,7,0,1);
    }
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    goto LAB_004536f0;
  }
  if (bVar1 == 7) {
    if (moby->group != -1) {
      MB_SetGroupField(moby->group,1);
    }
    uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar20 & 1) != 0) {
      moby->state = '\n';
      if (moby->animationId == '\r') {
        return;
      }
      MB_SetAnimation(lVar16,0xd,8,3);
      return;
    }
    fVar11 = (moby->pos).z;
    uVar20 = (int)fVar11 >> 0x1f;
    if ((int)((uVar20 >> 1 ^ (uint)fVar11) - uVar20) < 0x41d80000) {
      DeleteMoby(moby);
      return;
    }
    goto LAB_004536f0;
  }
  if (bVar1 == 6) {
    uVar17 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x1d0) - fVar3),
                          (double)(*(float *)((int)pvVar8 + 0x1d4) - fVar4));
    OrganicDeltAngSpeed
              (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar16);
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar5 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar6 = fVar4;
    }
    fVar12 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
      fVar12 = fVar5;
    }
    dVar24 = 2.0;
    local_b8 = 0;
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = fVar12 * fVar12;
    fVar5 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4 * fVar12;
    fVar6 = fVar5 * fVar5 * fVar3;
    fVar15 = fVar4 * fVar14;
    fVar13 = fVar5 * fVar6;
    local_bc = (fVar4 * fVar15 * 2.601887e-06 +
               fVar15 * -0.0001980741 +
               fVar14 * 0.0083330255 + fVar4 * fVar12 * -0.16666657 + fVar12) * 2.0;
    local_c0 = (fVar5 * fVar13 * 2.601887e-06 +
               fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
               * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_c0,auStack_b0);
    fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x1d4);
    fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1d0);
    if (((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) < dVar24) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      MB_SetAnimation(lVar16,0,0,3);
    }
    fVar3 = (victim->pos).y - *(float *)((int)pvVar8 + 0x1d4);
    fVar4 = (victim->pos).x - *(float *)((int)pvVar8 + 0x1d0);
    fVar5 = (victim->pos).z - *(float *)((int)pvVar8 + 0x1d8);
    if (*(float *)((int)pvVar8 + 0x1fc) <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
      if (moby->setByGroup == '\x01') {
        moby->state = '\x04';
        iVar21 = MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar21 < 1) {
          if (iVar21 < 0) {
LAB_00453400:
            if (uVar2 != '\x10') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
            }
          }
          else if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
          }
        }
        else {
          if (1 < iVar21) goto LAB_00453400;
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
          }
        }
      }
    }
    else {
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      moby->state = '\x04';
      iVar21 = MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (iVar21 < 0) {
LAB_004532e4:
          if (uVar2 != '\x10') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
          }
        }
        else if (uVar2 != '\x03') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
        }
      }
      else {
        if (1 < iVar21) goto LAB_004532e4;
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
      }
    }
    moby->setByGroup = '\0';
    goto LAB_004536f0;
  }
  if (bVar1 == 5) {
    g_heroMobyPtr->unk58 = 1.3;
    uVar17 = FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                          (double)((victim->pos).y - (moby->pos).y));
    dVar24 = 0.20000000298023224;
    OrganicDeltAngSpeed
              (uVar17,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar16,&DAT_00451b1c,
               (int)pvVar8 + 0x1f0);
    if (((moby->updateId == moby->animationId) &&
        (iVar21 = MB_MayaFrameTrigger(13.0,moby), iVar21 != 0)) &&
       (ABS((moby->pos).z - (victim->pos).z) < 0.5)) {
      fVar3 = (moby->pos).y;
      fVar4 = (victim->pos).y;
      fVar5 = (moby->pos).x;
      fVar13 = fVar3 - fVar4;
      fVar6 = (victim->pos).x;
      fVar12 = fVar5 - fVar6;
      if (SQRT(fVar12 * fVar12 + fVar13 * fVar13) < 2.0) {
        dVar26 = (double)FUN_005e8338((double)(fVar6 - fVar5),(double)(fVar4 - fVar3));
        dVar26 = (double)FastSubRots((float)dVar26,(moby->rotation).z);
        if (dVar26 < 0.2617993950843811) {
          fVar3 = (moby->rotation).z;
          fVar4 = fVar3 + 1.5707963;
          fVar5 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar5 = fVar3;
          }
          fVar6 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar6 = fVar4;
          }
          fVar12 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
            fVar12 = fVar5;
          }
          local_d8 = 0;
          fVar3 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
            fVar3 = fVar6;
          }
          fVar4 = fVar12 * fVar12;
          fVar5 = fVar3 * fVar3;
          fVar14 = fVar4 * fVar4 * fVar12;
          fVar6 = fVar5 * fVar5 * fVar3;
          fVar15 = fVar4 * fVar14;
          fVar13 = fVar5 * fVar6;
          local_dc = (float)((double)(fVar4 * fVar15 * 2.601887e-06 +
                                     fVar15 * -0.0001980741 +
                                     fVar14 * 0.0083330255 + fVar4 * fVar12 * -0.16666657 + fVar12)
                            * dVar24);
          local_e0 = (float)((double)(fVar5 * fVar13 * 2.601887e-06 +
                                     fVar13 * -0.0001980741 +
                                     fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
                            dVar24);
          local_d0 = (victim->pos).x;
          local_cc = (victim->pos).y;
          local_c4 = (victim->pos).w;
          local_c8 = (victim->pos).z + 0.75;
          CollDamageMobyDirect(1.0,victim,moby,1,0x451b1c,&local_d0,&local_e0);
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) &&
       (fVar3 = (moby->pos).y - (victim->pos).y, fVar4 = (moby->pos).x - (victim->pos).x,
       2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
      moby->state = '\x04';
      iVar21 = MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (-1 < iVar21) {
          if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_004536f0;
        }
      }
      else if (iVar21 < 2) {
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
        goto LAB_004536f0;
      }
      if (uVar2 != '\x10') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
      }
    }
    goto LAB_004536f0;
  }
  if (bVar1 == 4) {
    dVar26 = (double)FUN_005e8338((double)((victim->pos).x - fVar3),
                                  (double)((victim->pos).y - fVar4));
    dVar25 = (double)FastDiffRots(dVar26,(double)(moby->rotation).z);
    dVar24 = 0.6981316804885864;
    if ((dVar25 <= 0.6981316804885864) && (dVar24 = dVar25, dVar25 < -0.6981316804885864)) {
      dVar24 = -0.6981316804885864;
    }
    *(float *)((int)pvVar8 + 0x1b8) = (float)dVar24;
    OrganicDeltAngSpeed
              ((double)(float)(dVar26 + (double)*(float *)((int)pvVar8 + 500)),0x3fa99999a0000000,
               0x3fd3333340000000,0x3fc99999a0000000,lVar16);
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar5 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar6 = fVar4;
    }
    fVar12 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
      fVar12 = fVar5;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = fVar12 * fVar12;
    fVar5 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4 * fVar12;
    local_f8 = 0;
    fVar6 = fVar5 * fVar5 * fVar3;
    fVar15 = fVar4 * fVar14;
    fVar13 = fVar5 * fVar6;
    local_fc = (fVar4 * fVar15 * 2.601887e-06 +
               fVar15 * -0.0001980741 +
               fVar14 * 0.0083330255 + fVar4 * fVar12 * -0.16666657 + fVar12) * 2.0;
    local_100 = (fVar5 * fVar13 * 2.601887e-06 +
                fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 2.0;
    iVar21 = MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_100,
                        auStack_f0);
    if (iVar21 == 2) {
      moby->state = '\x06';
      moby->setByGroup = '\0';
    }
    else {
      iVar21 = FastDecTimerS32((int)pvVar8 + 0x210);
      if (iVar21 != 0) {
        dVar24 = (double)MB_randRangeFloat(30.0,90.0);
        fVar3 = animationSpeed;
        *(float *)((int)pvVar8 + 500) = -*(float *)((int)pvVar8 + 500);
        *(int *)((int)pvVar8 + 0x210) = (int)(fVar3 * ((float)(longlong)dVar24 + 0.5));
      }
      fVar3 = (victim->pos).y;
      fVar4 = (victim->pos).x;
      fVar12 = (moby->pos).y - fVar3;
      fVar6 = (moby->pos).x - fVar4;
      fVar5 = (victim->pos).z;
      fVar4 = fVar4 - *(float *)((int)pvVar8 + 0x1d0);
      fVar3 = fVar3 - *(float *)((int)pvVar8 + 0x1d4);
      fVar13 = fVar5 - *(float *)((int)pvVar8 + 0x1d8);
      if (1.5 <= SQRT(fVar6 * fVar6 + fVar12 * fVar12)) {
        if ((*(float *)((int)pvVar8 + 0x1fc) + 5.5 <=
             SQRT(fVar13 * fVar13 + fVar4 * fVar4 + fVar3 * fVar3)) ||
           (4.4 <= ABS((moby->pos).z - fVar5))) {
          if ((moby->setByGroup != '\x01') && (iVar21 = MB_randInt(9), iVar21 == 0)) {
            moby->state = '\x06';
          }
        }
        else if (moby->group != -1) {
          MB_SetGroupField(moby->group,1);
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          local_48 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar16,4,0,(int)(animationSpeed * 5.5));
        }
      }
      moby->setByGroup = '\0';
    }
    goto LAB_004536f0;
  }
  if (bVar1 == 3) {
    uVar17 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
    OrganicDeltAngSpeed
              (uVar17,0x3f9eb851e0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar16,&DAT_00451b1c,(int)pvVar8 + 0x1f0)
    ;
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x04';
      iVar21 = MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (-1 < iVar21) {
          if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_004536f0;
        }
      }
      else if (iVar21 < 2) {
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
        goto LAB_004536f0;
      }
      if (uVar2 != '\x10') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
      }
    }
    goto LAB_004536f0;
  }
  if (bVar1 != 1) {
    if (bVar1 == 0) {
      if (*(int *)((int)pvVar8 + 0x20c) == 0) {
        if (*(int *)((int)pvVar8 + 0x1dc) == 0) {
          FUN_005e7e98((int)pvVar8 + 0x1d0,lVar16 + 0x10);
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar16,0,0,3);
          }
        }
        else {
          moby->drawDistance = 0;
          moby->state = '\v';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          moby->collision = (ushort *)0x0;
        }
      }
      else {
        FUN_005e7e98((int)pvVar8 + 0x1d0,lVar16 + 0x10);
        moby->state = '\t';
        if (moby->animationId != '\f') {
          MB_SetAnimation(lVar16,0xc,0,3);
        }
        moby->collision = (ushort *)0x0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      }
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x40000000;
      *(undefined4 *)((int)pvVar8 + 0x214) = 0;
      *(undefined4 *)((int)pvVar8 + 0x208) = 0;
      *(undefined1 *)((int)pvVar8 + 0x29) = 1;
      *(undefined1 *)((int)pvVar8 + 0x58) = 8;
      *(undefined1 *)((int)pvVar8 + 0x5a) = 5;
      *(undefined4 *)((int)pvVar8 + 0x90) = 0x200;
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
      MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
      *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd8) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd0) = 0x38d;
      fVar3 = g_FrameTime * 5.5;
      *(uint *)((int)pvVar8 + 0x108) = *(uint *)((int)pvVar8 + 0x108) | 0x10;
      *(float *)((int)pvVar8 + 0xf4) = fVar3;
      FUN_005e7e98((int)pvVar8 + 0x120,lVar16 + 0x10);
      uVar17 = idol::GetAnimDuration(0x78);
      uVar18 = idol::GetAnimDuration(700);
      uVar22 = MB_randRange(uVar17,uVar18);
      *(undefined2 *)((int)pvVar8 + 0x21c) = uVar22;
      uVar20 = rand();
      if ((uVar20 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
    }
    goto LAB_004536f0;
  }
  FUN_005e81f0(auStack_110,lVar23 + 0x10,lVar16 + 0x10);
  dVar26 = (double)(moby->rotation).z;
  dVar24 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                (double)((victim->pos).y - (moby->pos).y));
  dVar24 = (double)FastSubRots((float)dVar26,(float)dVar24);
  dVar25 = (double)*(float *)((int)pvVar8 + 0x1fc);
  dVar26 = (double)FUN_005e8030(auStack_110);
  if ((dVar26 < dVar25) && (ABS((moby->pos).z - (victim->pos).z) < 4.0)) {
    moby->state = '\x03';
    if (0.9599310755729675 <= dVar24) {
      if (moby->animationId != '\x11') {
        uVar17 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar16,0x11,0,uVar17);
      }
    }
    else {
      if (moby->animationId != '\x02') {
        uVar17 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar16,2,0,uVar17);
      }
      moby->unk58 = 1.55;
    }
    goto LAB_004536f0;
  }
  bVar1 = moby->setByGroup;
  if ((bVar1 & 1) == 0) {
LAB_00451fec:
    if (bVar1 != 7) {
      if (moby->animationId != '\x0f') {
        local_48 = (longlong)(int)(animationSpeed * 14.5);
        MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 14.5));
      }
      local_48 = (longlong)(int)(animationSpeed * 20.5);
      if ((int)(animationSpeed * 20.5) < (int)*(short *)((int)pvVar8 + 0x21c)) {
        Delt(g_FrameTime * 2.5,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x134)
                      );
      }
      else {
        Delt(0.0,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x134));
      }
      moby->unk58 = 0.8;
      DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar16,(int)pvVar8 + 0x120);
      goto LAB_004536f0;
    }
  }
  else {
    iVar21 = MB_randInt(0x13);
    if (iVar21 != 0) {
      bVar1 = moby->setByGroup;
      goto LAB_00451fec;
    }
  }
  uVar19 = MB_randInt(0x100);
  fVar3 = *(float *)((int)pvVar8 + 0x1f8);
  if ((uVar19 & 1) != 0) {
    fVar3 = -fVar3;
    *(float *)((int)pvVar8 + 0x1f8) = fVar3;
  }
  *(float *)((int)pvVar8 + 500) = fVar3 * 0.017453292;
  dVar24 = (double)MB_randRangeFloat(30.0,90.0);
  *(int *)((int)pvVar8 + 0x210) = (int)(animationSpeed * ((float)(longlong)dVar24 + 0.5));
  moby->state = '\x03';
  if (moby->animationId != '\x02') {
    MB_SetAnimation(lVar16,2,0,3);
  }
  moby->setByGroup = '\0';
LAB_004536f0:
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar16,(int)pvVar8 + 0x150,
             0);
  return;
}


