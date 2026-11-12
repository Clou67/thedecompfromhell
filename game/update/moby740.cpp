// game/update/moby740.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x440364-0x441eec
#include <math.h>
#include <stdlib.h>
#include "game/update/moby740.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0440364 (0x14 bytes)
void M740_00440364(void)

{
  DAT_0085a4d0 = 0x10000;
  return;
}


// 0x04403e8 (0x1b04 bytes)
/* Moby 740 */

void UpdateMoby_740(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  MobyInstance *pMVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar14;
  uint uVar15;
  ulonglong uVar13;
  u8 uVar16;
  ulonglong uVar17;
  undefined8 in_LR;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  Vec4 local_e0;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  Vec4 local_a0;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  GPiece<4> auStack_80;
  undefined4 local_7c;
  longlong local_78;
  
  lVar12 = (longlong)(int)moby;
  pfVar7 = (float *)moby->pVar;
  uVar17 = ZEXT48(pfVar7);
  if (pfVar7[6] != 0.0) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(in_LR,0x440378);
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = vectorSplatHalfWord(auVar31,1);
    uVar9 = storeVectorElementHalfWordIndexed(auVar31,500,uVar17);
    *(undefined2 *)(pfVar7 + 0x7d) = uVar9;
  }
  pfVar7[6] = 0.0;
  FastDecTimerS32(uVar17 + 0x1e8);
  dVar30 = 0.0;
  local_7c = 0;
  iVar14 = MB_damage(lVar12,0x330000,0);
  MB_HandleDamage(moby,iVar14,uVar17,0,auStack_80,&local_7c,0,4);
  FastDecTimerS16(uVar17 + 6);
  local_78 = (longlong)(int)(animationSpeed * 45.5);
  if ((((int)*(short *)((int)pfVar7 + 6) < (int)(animationSpeed * 45.5)) && (iVar14 != 0)) &&
     (moby->state != '\x15')) {
    sVar6 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6);
    if ((sVar6 == 0xb0) || (sVar6 == 0xb1)) {
      dVar22 = 1.0;
      if (*(short *)((int)pfVar7 + 6) != 0) {
        dVar22 = dVar30;
      }
      *(float *)(iVar14 + 0x2c) = (float)dVar22;
    }
    if (moby->group != -1) {
      MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar14 + 0x2c) != 0) {
      fVar1 = *pfVar7 - *(float *)(iVar14 + 0x2c);
      pfVar7[0x44] = 0.008;
      pfVar7[0x45] = 0.0005;
      *pfVar7 = fVar1;
      fVar2 = g_FrameTime;
      fVar5 = DAT_0085a5a4 * g_FrameTime;
      pfVar7[0x49] = 1.26117e-44;
      pfVar7[0x46] = fVar5;
      fVar5 = DAT_0085a5a0;
      *(undefined1 *)((int)pfVar7 + 0x13d) = 0;
      pfVar7[0x47] = fVar5 * fVar2;
      if (dVar30 < (double)fVar1) {
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        MB_StartKick(lVar12,uVar17 + 0x100);
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        pfVar7[0x54] = 5.0;
        pfVar7[0x55] = 10.0;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        moby->state = '\a';
        *(undefined1 *)((int)pfVar7 + 0xf7) = 0xfa;
        auVar31 = loadVectorLeftIndexed(0x18,0x440378);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = vectorSplatHalfWord(auVar31,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar31,6,uVar17);
        *(undefined2 *)((int)pfVar7 + 6) = uVar9;
        MB_UpdateLightsTransition(lVar12,uVar17 + 0xf0);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar5 = g_FrameTime * 8.0;
        pfVar7[0x47] = g_FrameTime * 10.0;
        pfVar7[0x46] = fVar5;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        MB_StartKick(lVar12,uVar17 + 0x100);
        pfVar7[0x54] = 11.0;
        pfVar7[0x55] = 18.0;
        moby->state = '\x15';
        *(undefined1 *)((int)pfVar7 + 0xf7) = 0x78;
        MB_UpdateLightsTransition(lVar12,uVar17 + 0xf0);
      }
    }
  }
  bVar3 = moby->state;
  moby->damage = -1;
  if (bVar3 < 9) {
    if (bVar3 < 4) {
      if (bVar3 == 0) {
        pfVar7[0x6c] = (moby->pos).x;
        pfVar7[0x6d] = (moby->pos).y;
        pfVar7[0x6e] = (moby->pos).z;
        pfVar7[0x6f] = (moby->pos).w;
        pfVar7[0x70] = (moby->pos).x;
        pfVar7[0x71] = (moby->pos).y;
        pfVar7[0x72] = (moby->pos).z;
        pfVar7[0x73] = (moby->pos).w;
        moby->state = '\x01';
        *pfVar7 = 1.0;
        *(undefined2 *)(pfVar7 + 1) = 1;
        *(undefined2 *)(pfVar7 + 0x7d) = 0;
        pfVar7[0x7a] = 0.0;
        MB_InitDefaultParams(pfVar7 + 0x58);
        pfVar7[0x5b] = 2.0;
        pfVar7[0x5a] = 2.0;
        fVar5 = g_FrameTime;
        pfVar7[0x58] = 1.27378e-42;
        pfVar7[0x61] = pfVar7[0x79] * fVar5;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        pfVar7[0x2c] = (float)&DAT_0085a5b0;
        if (moby->animationId != '\x02') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,2,0,(int)(animationSpeed * 3.5));
        }
      }
      else if (bVar3 < 2) {
        moby->state = '\x10';
        if (moby->animationId != '\0') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      else if (bVar3 < 3) {
        fVar5 = (moby->pos).z;
        iVar14 = 0;
        dVar22 = 2.0;
        dVar28 = (double)(g_heroPosition.x - (moby->pos).x);
        dVar26 = (double)(g_heroPosition.y - (moby->pos).y);
        dVar24 = (double)(g_heroPosition.z - fVar5);
        (moby->pos).z = fVar5 + 2.0;
        do {
          SpawnPart_28(dVar30,lVar12 + 0x10,lVar12 + 0xc0);
          fVar5 = g_heroPosition.z;
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        fVar1 = (float)((double)(moby->pos).z - dVar22);
        (moby->pos).z = fVar1;
        if (((pfVar7[0x77] <=
              SQRT((float)(dVar24 * dVar24 +
                          (double)(float)(dVar28 * dVar28 + (double)(float)(dVar26 * dVar26))))) ||
            (8.0 <= ABS(fVar1 - fVar5))) || (iVar14 = MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = MB_randInt(0x13), iVar14 == 0)) {
            uVar13 = MB_randInt(0x100);
            fVar5 = pfVar7[0x76];
            if ((uVar13 & 1) != 0) {
              fVar5 = -fVar5;
              pfVar7[0x76] = fVar5;
            }
            pfVar7[0x75] = fVar5 * 0.017453292;
            dVar30 = (double)MB_randRangeFloat(30.0,90.0);
            pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
            moby->state = '\x0f';
            if (moby->animationId != '\0') {
              local_78 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          uVar13 = MB_randInt(0x100);
          fVar5 = pfVar7[0x76];
          if ((uVar13 & 1) != 0) {
            fVar5 = -fVar5;
            pfVar7[0x76] = fVar5;
          }
          pfVar7[0x75] = fVar5 * 0.017453292;
          dVar30 = (double)MB_randRangeFloat(30.0,90.0);
          pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
          moby->state = '\x0f';
          if (moby->animationId != '\0') {
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
          }
          moby->setByGroup = '\0';
        }
      }
      else {
        uVar18 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar18,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                   &DAT_00440378,uVar17 + 0x1d0);
        fVar1 = g_heroPosition.y - (moby->pos).y;
        fVar2 = g_heroPosition.x - (moby->pos).x;
        fVar5 = (moby->pos).z;
        fVar10 = g_heroPosition.z - fVar5;
        if (((pfVar7[0x77] <= SQRT(fVar10 * fVar10 + fVar2 * fVar2 + fVar1 * fVar1)) ||
            (8.0 <= ABS(fVar5 - g_heroPosition.z))) ||
           (iVar14 = MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = MB_randInt(0x13), iVar14 == 0)) {
            uVar13 = MB_randInt(0x100);
            fVar5 = pfVar7[0x76];
            if ((uVar13 & 1) != 0) {
              fVar5 = -fVar5;
              pfVar7[0x76] = fVar5;
            }
            pfVar7[0x75] = fVar5 * 0.017453292;
            dVar30 = (double)MB_randRangeFloat(30.0,90.0);
            pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
            moby->state = '\x0f';
            if (moby->animationId != '\0') {
              local_78 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          uVar13 = MB_randInt(0x100);
          fVar5 = pfVar7[0x76];
          if ((uVar13 & 1) != 0) {
            fVar5 = -fVar5;
            pfVar7[0x76] = fVar5;
          }
          pfVar7[0x75] = fVar5 * 0.017453292;
          dVar30 = (double)MB_randRangeFloat(30.0,90.0);
          pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
          moby->state = '\x0f';
          if (moby->animationId != '\0') {
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x02')) {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,2,0,(int)(animationSpeed * 3.5));
        }
      }
      goto LAB_00441e9c;
    }
    if (5 < bVar3) {
      if (6 < bVar3) {
        if (bVar3 < 8) {
          uVar15 = MB_UpdateKick(moby,(KickVars *)(pfVar7 + 0x40));
          if ((uVar15 & 1) != 0) {
            moby->state = '\n';
            if (moby->animationId == '\x04') {
              return;
            }
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar12,4,8,(int)(animationSpeed * 3.5));
            return;
          }
          if ((int)(moby->pos).z < 0) {
            DeleteMoby(moby);
            return;
          }
        }
        else {
          iVar14 = FUN_0048c188(lVar12,uVar17 + 0x100);
          if (iVar14 != 0) {
            moby->state = '\0';
            *(undefined2 *)(pfVar7 + 0x2a) = 0;
          }
        }
        goto LAB_00441e9c;
      }
LAB_00441668:
      if (bVar3 == 0x14) {
        iVar14 = 0;
        (moby->pos).z = (moby->pos).z + 2.0;
        do {
          SpawnPart_28((double)g_FrameTime,lVar12 + 0x10,lVar12 + 0xc0);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
      }
      if (pfVar7[0x7f] == -NAN) {
        local_a0.x = pfVar7[0x6c];
        local_a0.y = pfVar7[0x6d];
        local_a0.z = pfVar7[0x6e];
        local_a0.w = pfVar7[0x6f];
      }
      else {
        Path_PickNextNode(moby,Splines[(int)pfVar7[0x7f]],(Vec4 *)(pfVar7 + 0x6c),&local_a0);
      }
      uVar18 = FUN_005e8338((double)(local_a0.x - (moby->pos).x),
                            (double)(local_a0.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar18,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
      dVar30 = (double)cosf((moby->rotation).z);
      dVar22 = 2.0;
      local_b0 = (float)(dVar30 * 2.0);
      dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_ac = (float)(dVar30 * dVar22);
      local_a8 = 0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)(pfVar7 + 0x58),&local_b0,&local_a0);
      bVar3 = moby->state;
      uVar15 = (uint)bVar3;
      uVar16 = moby->animationId;
      if (bVar3 == 0x14) {
        (moby->pos).z = (float)((double)(moby->pos).z - dVar22);
      }
      fVar1 = (moby->pos).y - pfVar7[0x6d];
      fVar5 = (moby->pos).x - pfVar7[0x6c];
      if ((double)SQRT(fVar5 * fVar5 + fVar1 * fVar1) < dVar22) {
        if (bVar3 == 6) {
          uVar15 = 0x10;
          moby->state = '\x10';
          if (uVar16 != '\0') {
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
            uVar15 = (uint)moby->state;
            uVar16 = moby->animationId;
          }
        }
        else {
          uVar15 = 2;
          moby->state = '\x02';
        }
      }
      if (pfVar7[0x77] <=
          SQRT((g_heroPosition.z - pfVar7[0x6e]) * (g_heroPosition.z - pfVar7[0x6e]) +
               (g_heroPosition.x - pfVar7[0x6c]) * (g_heroPosition.x - pfVar7[0x6c]) +
               (g_heroPosition.y - pfVar7[0x6d]) * (g_heroPosition.y - pfVar7[0x6d]))) {
        if ((moby->setByGroup == '\x01') &&
           (moby->state = ((byte)(ZERO_MASK((6 - uVar15))) & 0xf1) + 0x13,
           uVar16 != '\0')) {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      else {
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,1);
          uVar15 = (uint)moby->state;
          uVar16 = moby->animationId;
        }
        moby->state = ((byte)(ZERO_MASK((6 - uVar15))) & 0xf1) + 0x13;
        if (uVar16 != '\0') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      moby->setByGroup = '\0';
      goto LAB_00441e9c;
    }
    if (4 < bVar3) {
      uVar18 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      dVar30 = 0.20000000298023224;
      OrganicDeltAngSpeed
                (uVar18,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar12,
                 &DAT_00440378,uVar17 + 0x1d0);
      if (((moby->updateId == moby->animationId) &&
          (dVar22 = (double)BlendAnimFrame(moby), dVar22 == 13.0)) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 0.5)) {
        fVar5 = (moby->pos).y;
        fVar1 = (moby->pos).x;
        fVar10 = fVar5 - g_heroPosition.y;
        fVar2 = fVar1 - g_heroPosition.x;
        if (SQRT(fVar2 * fVar2 + fVar10 * fVar10) < 2.0) {
          dVar22 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar1),
                                        (double)(g_heroPosition.y - fVar5));
          dVar22 = (double)FastSubRots((float)dVar22,(moby->rotation).z);
          if (dVar22 < 0.2617993950843811) {
            dVar22 = (double)cosf((moby->rotation).z);
            local_d0 = (float)(dVar22 * dVar30);
            dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_cc = (float)(dVar22 * dVar30);
            local_c8 = 0;
            local_c0 = (g_heroMobyPtr->pos).x;
            local_bc = (g_heroMobyPtr->pos).y;
            local_b4 = (g_heroMobyPtr->pos).w;
            local_b8 = (g_heroMobyPtr->pos).z + 0.75;
            CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x440378,&local_c0,&local_d0);
          }
        }
      }
      if ((((moby->field43_0x70 & 2U) != 0) &&
          (fVar5 = (moby->pos).y - g_heroPosition.y, fVar1 = (moby->pos).x - g_heroPosition.x,
          1.5 < SQRT(fVar1 * fVar1 + fVar5 * fVar5))) &&
         (moby->state = '\x04', moby->animationId != '\0')) {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
      }
      dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
      fVar5 = -(g_FrameTimeSq * 9.8 - pfVar7[0x5e]);
      pfVar7[0x5e] = fVar5;
      fVar5 = (moby->pos).z + fVar5;
      (moby->pos).z = fVar5;
      if ((double)fVar5 < dVar30) {
        pfVar7[0x5e] = 0.0;
        (moby->pos).z = (float)dVar30;
      }
      goto LAB_00441e9c;
    }
  }
  else {
    if (bVar3 < 0x11) {
      if (bVar3 < 0xe) {
        if ((bVar3 == 10) && (dVar30 = (double)BlendAnimFrame(moby), 29.0 < dVar30)) {
          moby->state = '\x04';
          if (moby->animationId == '\0') {
            return;
          }
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
          return;
        }
        goto LAB_00441e9c;
      }
      if (0xe < bVar3) {
        dVar24 = 2.0;
        (moby->pos).z = (moby->pos).z + 2.0;
        dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
        Delt((float)dVar30,g_FrameTime * 4.0,&(moby->pos).z);
        dVar22 = (double)(moby->pos).z;
        if (dVar30 == dVar22) {
          moby->state = (char)(ZERO_MASK((0xf - (uint)moby->state))) + '\x14';
        }
        (moby->pos).z = (float)(dVar22 - dVar24);
        goto LAB_00441e9c;
      }
      if ((moby->updateId != '\0') && (moby->animationId != '\0')) {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
      }
      dVar22 = (double)cosf((moby->rotation).z);
      dVar26 = (double)(pfVar7[0x79] * g_FrameTime);
      dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar28 = (double)(moby->pos).x;
      dVar21 = (double)(moby->pos).y;
      local_90 = (float)(dVar26 * dVar22 + dVar28);
      dVar26 = (double)local_90;
      local_88 = (moby->pos).z;
      dVar22 = (double)local_88;
      local_84 = (moby->pos).w;
      local_8c = (float)((double)(pfVar7[0x79] * g_FrameTime) * dVar24 + dVar21);
      dVar24 = (double)local_8c;
      if (MobyUpdateChainStart != (MobyInstance *)0x0) {
        dVar29 = 2.0;
        dVar27 = 1.5707963705062866;
        dVar25 = -1.5707963705062866;
        dVar23 = dVar22;
        pMVar8 = MobyUpdateChainStart;
        do {
          if (((pMVar8 != moby) && (pMVar8->state < 0x80)) &&
             ((pMVar8->oClass == RATCHET || (pMVar8->oClass == 0x2e4)))) {
            dVar20 = (double)(pMVar8->pos).y;
            dVar19 = (double)(pMVar8->pos).x;
            fVar5 = (float)(dVar24 - dVar20);
            fVar1 = (float)(dVar26 - dVar19);
            if ((double)SQRT(fVar1 * fVar1 + fVar5 * fVar5) < dVar29) {
              dVar22 = (double)(moby->rotation).z;
              uVar18 = FUN_005e8338((double)(float)(dVar19 - dVar28),
                                    (double)(float)(dVar20 - dVar21));
              dVar24 = (double)FastDiffRots(dVar22,uVar18);
              dVar22 = dVar25;
              if (dVar30 < dVar24) {
                dVar22 = dVar27;
              }
              dVar22 = (double)FastWrapRot
                                         ((moby->rotation).z,
                                          (float)((double)g_FrameTime * dVar22));
              (moby->rotation).z = (float)dVar22;
              local_90 = (moby->pos).x - (pMVar8->pos).x;
              local_84 = (moby->pos).w;
              local_8c = (moby->pos).y - (pMVar8->pos).y;
              local_88 = (moby->pos).z - (pMVar8->pos).z;
              dVar22 = dVar23;
              FUN_005e7f98(dVar29,&local_90,&local_90);
              local_90 = local_90 + (pMVar8->pos).x;
              dVar26 = (double)local_90;
              dVar28 = (double)(moby->pos).x;
              dVar21 = (double)(moby->pos).y;
              local_88 = (float)dVar22;
              local_8c = local_8c + (pMVar8->pos).y;
              dVar24 = (double)local_8c;
              dVar23 = (double)(moby->pos).z;
            }
          }
          pMVar8 = (MobyInstance *)pMVar8->pChain;
        } while (pMVar8 != (MobyInstance *)0x0);
      }
      (moby->pos).x = (float)dVar26;
      (moby->pos).y = (float)dVar24;
      (moby->pos).z = (float)dVar22;
      (moby->pos).w = local_84;
      dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
      fVar5 = -(g_FrameTimeSq * 9.8 - pfVar7[0x5e]);
      pfVar7[0x5e] = fVar5;
      fVar5 = (moby->pos).z + fVar5;
      (moby->pos).z = fVar5;
      if ((double)fVar5 < dVar30) {
        pfVar7[0x5e] = 0.0;
        (moby->pos).z = (float)dVar30;
      }
      fVar5 = pfVar7[0x7e];
      if (fVar5 == 0.0) {
LAB_00441e44:
        moby->state = '\x06';
        if (moby->animationId != '\0') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      else {
        fVar1 = (moby->pos).y - *(float *)((int)fVar5 + 0x14);
        fVar5 = (moby->pos).x - *(float *)((int)fVar5 + 0x10);
        dVar22 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1);
        dVar30 = (double)FastIntToDouble(*(undefined2 *)((int)pfVar7 + 0x1f6));
        if (dVar30 < dVar22) goto LAB_00441e44;
      }
      moby->setByGroup = '\0';
      goto LAB_00441e9c;
    }
    if (0x13 < bVar3) {
      if (0x14 < bVar3) {
        if (bVar3 < 0x16) {
          uVar15 = MB_UpdateKick(moby,(KickVars *)(pfVar7 + 0x40));
          if ((uVar15 & 0x40) != 0) {
            MB_SpawnExplosionSparks
                      (0x3fe0000000000000,0x402a000000000000,lVar12,lVar12 + 0x10,&DAT_00440378,6);
            DeleteMoby(moby);
            return;
          }
          if ((int)(moby->pos).z < 0) {
            DeleteMoby(moby);
            return;
          }
        }
        goto LAB_00441e9c;
      }
      goto LAB_00441668;
    }
    if (bVar3 < 0x13) {
      dVar24 = 2.0;
      (moby->pos).z = (moby->pos).z + 2.0;
      dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
      Delt((float)(dVar30 + dVar24),g_FrameTime * 4.0,&(moby->pos).z);
      dVar22 = (double)(moby->pos).z;
      if ((dVar30 == (double)(float)(dVar22 - dVar24)) &&
         (moby->state = ((byte)(ZERO_MASK((0x11 - (uint)moby->state))) & 0xfe) + 6,
         moby->animationId != '\0')) {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        dVar22 = (double)(moby->pos).z;
      }
      (moby->pos).z = (float)(dVar22 - dVar24);
      goto LAB_00441e9c;
    }
  }
  if (bVar3 == 0x13) {
    iVar14 = 0;
    (moby->pos).z = (moby->pos).z + 2.0;
    do {
      SpawnPart_28((double)g_FrameTime,lVar12 + 0x10,lVar12 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 10);
  }
  fVar5 = (moby->pos).x;
  fVar1 = (moby->pos).y;
  if (pfVar7[0x7f] == -NAN) {
    local_e0.x = g_heroPosition.x;
    local_e0.y = g_heroPosition.y;
    local_e0.z = g_heroPosition.z;
    local_e0.w = g_heroPosition.w;
  }
  else {
    Path_PickNextNode(moby,Splines[(int)pfVar7[0x7f]],(Vec4 *)&g_heroPosition,&local_e0);
    fVar5 = (moby->pos).x;
    fVar1 = (moby->pos).y;
  }
  dVar30 = (double)FUN_005e8338((double)(local_e0.x - fVar5),(double)(local_e0.y - fVar1));
  OrganicDeltAngSpeed
            ((double)(float)(dVar30 + (double)pfVar7[0x75]),0x3fa99999a0000000,0x3fd3333340000000,
             0x3fc99999a0000000,lVar12);
  dVar22 = (double)cosf((moby->rotation).z);
  dVar30 = 2.0;
  local_f0 = (float)(dVar22 * 2.0);
  dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_ec = (float)(dVar22 * dVar30);
  local_e8 = 0;
  MB_UpdateNavMove
            (0x3ff0000000000000,moby,(MobyInstance *)(pfVar7 + 0x58),&local_f0,&local_e0);
  fVar1 = g_heroPosition.y;
  fVar5 = g_heroPosition.x;
  bVar3 = moby->state;
  dVar22 = (double)g_heroPosition.z;
  uVar16 = moby->animationId;
  dVar24 = (double)(moby->pos).z;
  cVar4 = moby->group;
  if (bVar3 == 0x13) {
    dVar30 = dVar24 - dVar30;
    dVar24 = (double)(float)dVar30;
    (moby->pos).z = (float)dVar30;
  }
  fVar10 = fVar5 - pfVar7[0x6c];
  fVar5 = (moby->pos).x - fVar5;
  fVar11 = (moby->pos).y - fVar1;
  fVar1 = fVar1 - pfVar7[0x6d];
  fVar2 = (float)(dVar22 - (double)pfVar7[0x6e]);
  fVar5 = SQRT(fVar5 * fVar5 + fVar11 * fVar11);
  if ((8.0 <= fVar5) || (bVar3 != 0x13)) {
    if ((1.5 <= fVar5) || (bVar3 != 4)) {
      if ((pfVar7[0x77] + 4.0 <= SQRT(fVar2 * fVar2 + fVar10 * fVar10 + fVar1 * fVar1)) ||
         (8.0 <= ABS((float)(dVar24 - dVar22)))) {
        if (moby->setByGroup != '\x01') {
          moby->state = ((byte)(ZERO_MASK((4 - (uint)bVar3))) & 0xfc) + 0x14;
        }
      }
      else if (cVar4 != -1) {
        MB_SetGroupField(cVar4,1);
      }
    }
    else {
      moby->state = '\x05';
      if (uVar16 != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else {
    moby->state = '\x11';
    if (uVar16 != '\0') {
      local_78 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
    }
  }
  moby->setByGroup = '\0';
LAB_00441e9c:
  MB_ColorDyingMoby(lVar12,uVar17 + 0xf0);
  return;
}


