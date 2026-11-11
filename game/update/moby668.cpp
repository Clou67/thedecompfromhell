// game/update/moby668.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x40a078-0x40ac0c
#include "game/update/moby668.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby582.h"
#include "idol/fastfunc.h"

// 0x040a078 (0xdc bytes)
MobyInstance * M668_0040a078(MobyInstance *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  short sVar5;
  ushort *puVar6;
  
  if (param_1->group != 0xff) {
    puVar6 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
    do {
      uVar3 = *puVar6 & 0x7fff;
      if ((g_MobyInstance[uVar3].oClass == SANDSHARK_0244) && (g_MobyInstance[uVar3].state == '\x1a')) {
        g_MobyInstance[uVar3].field80_0xb8 = param_1;
        sVar5.piece<0,1>() = param_1->field76_0xb4;
        sVar5.piece<1,1>() = param_1->field77_0xb5;
        sVar1.piece<0,1>() = g_MobyInstance[uVar3].field76_0xb4;
        sVar1.piece<1,1>() = g_MobyInstance[uVar3].field77_0xb5;
        if (sVar5 < sVar1) {
          pMVar4 = g_MobyInstance + uVar3;
          pMVar4->field76_0xb4 = sVar5.piece<0,1>();
          pMVar4->field77_0xb5 = (undefined1)sVar5;
          sVar5.piece<0,1>() = param_1->field76_0xb4;
          sVar5.piece<1,1>() = param_1->field77_0xb5;
        }
        sVar5 = sVar5 - *(short *)&g_MobyInstance[uVar3].field76_0xb4;
        *(short *)&param_1->field76_0xb4 = sVar5;
        if (sVar5 < 1) {
          param_1->field76_0xb4 = '\0';
          param_1->field77_0xb5 = '\x01';
        }
        return g_MobyInstance + uVar3;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return (MobyInstance *)0x0;
}


// 0x040a168 (0x338 bytes)
void M668_0040a168(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  pvVar1 = param_1->pVar;
  uVar4 = ZEXT48(pvVar1);
  dVar6 = 0.0;
  local_2c = 0.0;
  if (*(char *)((int)pvVar1 + 0x2e) == '\x02') {
    *(undefined1 *)((int)pvVar1 + 0x2e) = 1;
    if (-1 < *(int *)((int)pvVar1 + 0xe0)) {
      *(int *)((int)g_MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) =
           *(int *)((int)g_MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) + -1;
    }
    DeleteMoby(param_1);
  }
  else {
    iVar3 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar3,uVar4 + 0x20,0,&local_30,&local_2c,0,4);
    if (iVar3 != 0) {
      if ((local_30 != 1) && (param_1->state != '\x04')) {
        dVar5 = dVar6;
        if (local_30 != 3) {
          dVar5 = (double)(*(float *)((int)pvVar1 + 0x20) - local_2c);
        }
        *(float *)((int)pvVar1 + 0x20) = (float)dVar5;
        *(undefined4 *)((int)pvVar1 + 0x94) = 4;
        fVar2 = g_FrameTime;
        if (dVar5 <= dVar6) {
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
          param_1->state = '\x04';
          fVar2 = g_FrameTime;
          *(float *)((int)pvVar1 + 0x88) = g_FrameTime * 11.0;
          *(float *)((int)pvVar1 + 0x8c) = fVar2 * 3.0;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar3 + 0x10),*(undefined8 *)(iVar3 + 0x18),&local_24,
                     uVar4 + 0x88,uVar4 + 0x8c);
          MB_StartKick((double)local_24,param_1,uVar4 + 0x70);
          *(undefined4 *)((int)pvVar1 + 0xc0) = 0x41100000;
          *(undefined4 *)((int)pvVar1 + 0xc4) = 0x41980000;
          if (param_1->animationId != '\x03') {
            MB_SetAnimation(param_1,3,0,0);
          }
          MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        }
        else {
          *(float *)((int)pvVar1 + 0x88) = g_FrameTime * 4.0;
          *(float *)((int)pvVar1 + 0x8c) = fVar2 * 3.0;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar3 + 0x10),*(undefined8 *)(iVar3 + 0x18),&local_28,
                     uVar4 + 0x88,uVar4 + 0x8c);
          MB_StartKick((double)local_28,param_1,uVar4 + 0x70);
          if ((int)(FLOAT_ORDER(local_2c))
              < 0x3f800000) {
            *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
          }
          else {
            *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
            param_1->state = '\x03';
            MB_SetAnimation(param_1,2,0,0);
          }
        }
        MB_UpdateLightsTransition(param_1,uVar4 + 0x60);
      }
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar4 + 0x60);
    FastDecTimerS8(&param_1->setByGroup);
  }
  return;
}


// 0x040a4d8 (0x734 bytes)
/* Moby 668 */

void UpdateMoby_668(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  byte bVar10;
  short sVar9;
  int iVar7;
  uint uVar8;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  undefined8 uVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> local_70;
  GPiece<16> local_60;
  GPiece<40> local_50;
  
  lVar6 = (longlong)(int)moby;
  pvVar1 = moby->pVar;
  uVar12 = ZEXT48(pvVar1);
  M668_0040a168();
  bVar10 = moby->state;
  if (bVar10 < 0x80) {
    if ((moby->enabled != '\0') &&
       (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
       fVar5 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 28.0)) {
      MB_SetZBoundsFromGround(lVar6);
      bVar10 = moby->state;
      moby->shadow = '\x16';
    }
    if (bVar10 == 4) {
      uVar8 = MB_UpdateKick(moby,(KickVars *)((int)pvVar1 + 0x70));
      if ((uVar8 & 0x40) != 0) {
        if (-1 < *(int *)((int)pvVar1 + 0xe0)) {
          *(int *)((int)g_MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) =
               *(int *)((int)g_MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) + -1;
        }
        uVar15 = 0;
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar6,uVar12 + 0x40,local_50,1,0xffffffffffffffff,5,2,4);
        lVar13 = lVar6 + 0x10;
        lVar11 = lVar6 + 0x40;
        MB_SpawnDebrisMoby(uVar15,lVar6,0x6e4,lVar13,lVar11,0,0);
        MB_SpawnDebrisMoby(uVar15,lVar6,0x6e4,lVar13,lVar11,0,0);
        MB_SpawnDebrisMoby(uVar15,lVar6,0x6e5,lVar13,lVar11,0,0);
        MB_SpawnDebrisMoby(uVar15,lVar6,0x6e5,lVar13,lVar11,0,0);
        DeleteMoby(moby);
      }
    }
    else if (bVar10 == 3) {
      MB_UpdateKick(moby,(KickVars *)((int)pvVar1 + 0x70));
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0')) {
        MB_SetAnimation(lVar6,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar10 == 2) {
      if ((moby->field43_0x70 & 2U) == 0) {
        dVar14 = (double)BlendAnimFrame(moby);
        if (dVar14 == 12.0) {
          auVar16 = ZEXT416(0);
          auVar18 = loadVectorLeftIndexed(0x10,0x40a4a0);
          auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar19 = loadVectorLeftIndexed((ulonglong)(byte)moby->levelFlagIdx << 2,0xa0fcd4);
          auVar22 = vectorCompareGreaterThanSignedWord(auVar19,auVar18);
          auVar19 = vectorConditionalSelect(auVar19,auVar18,auVar22);
          auVar18 = ZEXT416(0xf);
          auVar22 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar18 = ZEXT416(0xfffffff0);
          auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar18 = vectorRotateLeftIntegerWord(auVar22,auVar20);
          auVar22 = vectorMultiplyOddUnsignedHalfWord(auVar19,auVar22);
          auVar18 = vectorMultiplySumSignedHalfWordModulo
                              (auVar19,auVar18,
                               auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
          auVar16 = loadVectorLeftIndexed(4,0x40a4a0);
          auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar20);
          auVar16 = ZEXT416(0xffffffff);
          auVar20 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar16.piece<0,4>() = auVar18.piece<0,4>() + auVar22.piece<0,4>();
          auVar16.piece<8,8>() = auVar18.piece<8,8>();
          auVar16.piece<4,4>() = auVar18.piece<4,4>() + auVar22.piece<4,4>();
          auVar19.piece<0,8>() = auVar16.piece<0,8>();
          auVar19.piece<12,4>() = auVar18.piece<12,4>();
          auVar19.piece<8,4>() = auVar18.piece<8,4>() + auVar22.piece<8,4>();
          auVar18.piece<0,12>() = auVar19.piece<0,12>();
          auVar18.piece<12,4>() = auVar19.piece<12,4>() + auVar22.piece<12,4>();
          auVar22 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
          auVar24 = loadVectorLeftIndexed(0xd4,uVar12);
          auVar18 = loadVectorRightIndexed(0xe4,uVar12);
          auVar24 = auVar24 | auVar18;
          auVar16 = vectorAddFloatingPoint(auVar16,auVar23);
          auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar22);
          auVar16 = ZEXT416(0xffffffff);
          auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar16,auVar16);
          auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
          auVar22.piece<0,4>() = auVar24.piece<0,4>() + auVar16.piece<0,4>();
          auVar22.piece<8,8>() = auVar16.piece<8,8>();
          auVar22.piece<4,4>() = auVar24.piece<4,4>() + auVar16.piece<4,4>();
          auVar20.piece<0,8>() = auVar22.piece<0,8>();
          auVar20.piece<12,4>() = auVar16.piece<12,4>();
          auVar20.piece<8,4>() = auVar24.piece<8,4>() + auVar16.piece<8,4>();
          auVar17.piece<0,12>() = auVar20.piece<0,12>();
          auVar17.piece<12,4>() = auVar24.piece<12,4>() + auVar20.piece<12,4>();
          auVar16 = vectorConvertFromSignedFixedPointWord(auVar17,0);
          auVar16 = vectorAddFloatingPoint(auVar16,auVar23);
          auVar16 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar21);
          auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
          auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xd8,
                             uVar12);
          *(undefined4 *)((int)pvVar1 + 0xd8U & 0xfffffffc) = uVar2;
          iVar7 = M668_0040a078(lVar6);
          if (iVar7 != 0) {
            if (-1 < *(int *)((int)pvVar1 + 0xe0)) {
              *(int *)((int)g_MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x14c) =
                   *(int *)((int)g_MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x14c) + 1;
            }
            FUN_003d0b20(iVar7,local_60,local_70);
          }
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar6,0,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar10 == 1) {
      iVar7 = FastDecTimerS32(uVar12 + 0xd8);
      if (iVar7 != 0) {
        iVar7 = M668_0040a078(lVar6);
        if (iVar7 == 0) {
          auVar16 = ZEXT416(0xffffffff);
          auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar16,auVar16);
          auVar16 = loadVectorLeftIndexed(0xd4,uVar12);
          auVar18 = loadVectorRightIndexed(0xe4,uVar12);
          auVar18 = vectorConvertFromSignedFixedPointWord(auVar16 | auVar18,0);
          auVar16 = loadVectorLeftIndexed(4,0x40a4a0);
          auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar16 = vectorAddFloatingPoint
                              (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60
                              );
          auVar16 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar19);
          auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
          auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xd8,
                             uVar12);
          *(undefined4 *)((int)pvVar1 + 0xd8U & 0xfffffffc) = uVar2;
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            MB_SetAnimation(lVar6,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar10 == 0) {
      sVar9 = *(short *)&moby->field76_0xb4 -
              *(short *)(&DAT_00a0e31e + (uint)(byte)moby->field74_0xb1 * 4);
      *(short *)&moby->field76_0xb4 = sVar9;
      if (sVar9 < 1) {
        moby->field76_0xb4 = '\0';
        moby->field77_0xb5 = '\x01';
      }
      auVar16 = ZEXT416(0xffffffff);
      auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      moby->state = '\x01';
      auVar16 = loadVectorLeftIndexed(0xd4,uVar12);
      auVar18 = loadVectorRightIndexed(0xe4,uVar12);
      *(undefined4 *)((int)pvVar1 + 0x20) = 0x40400000;
      auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      *(undefined2 *)((int)pvVar1 + 0x24) = 3;
      *(undefined1 *)((int)pvVar1 + 0x2e) = 1;
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar16 | auVar18,0);
      auVar16 = loadVectorLeftIndexed(4,0x40a4a0);
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar7 = *(int *)((int)pvVar1 + 0xe0);
      auVar16 = vectorAddFloatingPoint
                          (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar19);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xd8,uVar12);
      *(undefined4 *)((int)pvVar1 + 0xd8U & 0xfffffffc) = uVar2;
      if (-1 < iVar7) {
        *(int *)((int)g_MobyInstance[iVar7].pVar + 0x150) =
             *(int *)((int)g_MobyInstance[iVar7].pVar + 0x150) + 1;
      }
    }
  }
  return;
}


