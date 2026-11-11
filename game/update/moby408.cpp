// game/update/moby408.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x364670-0x365868
#include "game/update/moby408.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby771.h"
#include "idol/fastfunc.h"

// 0x0364670 (0x14 bytes)
void M408_00364670(void)

{
  DAT_00840b58 = 0x10000;
  return;
}


// 0x0364690 (0x138 bytes)
void M408_00364690(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  auVar7.piece<0,4>() = param_2;
  auVar7.piece<4,4>() = param_2;
  auVar7.piece<8,4>() = param_2;
  auVar7.piece<12,4>() = param_2;
  if (param_2 == -1) {
    param_2 = 0;
    auVar7 = ZEXT416(0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    DAT_010c5128 = 0;
  }
  uVar5 = (param_2 != 0);
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar7,0);
    auVar7 = ZEXT416(0xffffffff);
    auVar9 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = loadVectorLeftIndexed(0x30,0x364688);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = vectorAddFloatingPoint
                       (auVar8,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    auVar8 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar10,auVar7,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x18,
                       (ulonglong)uVar2);
    *(undefined4 *)(uVar2 + 0x18 & 0xfffffffc) = uVar4;
    *(uint *)(uVar2 + 8) = uVar5;
  }
  else {
    puVar6 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar6 != (ushort *)0x0) {
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = loadVectorLeftIndexed(0x30,0x364688);
      auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar7 = vectorAddFloatingPoint
                         (auVar8,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
      do {
        if (g_MobyInstance[*puVar6 & 0x7fff].oClass == SENTRY_BOT_ALARM) {
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          pvVar3 = g_MobyInstance[*puVar6 & 0x7fff].pVar;
          auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          *(uint *)((int)pvVar3 + 8) = uVar5;
          auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x18,
                             ZEXT48(pvVar3));
          *(undefined4 *)((int)pvVar3 + 0x18U & 0xfffffffc) = uVar4;
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x03647d8 (0x1e8 bytes)
void M408_003647d8(undefined8 param_1)

{
  int iVar1;
  MobyInstance *pMoby;
  float fVar2;
  
  if (g_heroState == ANIM_TARGET_WALK) {
    fVar2 = Delt(0.0,g_FrameTime * 2.0,(float *)&DAT_010c5128);
    M408_00364690((double)fVar2,param_1,0);
  }
  else if ((DAT_010c5124 == 0) ||
          ((Level == Quartu &&
           ((int)(((uint)((int)g_heroPosition.y >> 0x1f) >> 1 ^ (uint)g_heroPosition.y) -
                 ((int)g_heroPosition.y >> 0x1f)) < 0x43700001)))) {
    Delt(0.0,g_FrameTime * 2.0,(float *)&DAT_010c5128);
  }
  else {
    Delt(1.0,g_FrameTime * 2.0,(float *)&DAT_010c5128);
  }
  if (DAT_010c5128 == 0) {
    iVar1 = IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
    if (iVar1 != 0) {
      sound_Kill(DAT_00840b7c);
      DAT_00840b7c = -1;
      DAT_00840b80 = (MobyInstance *)0x0;
    }
    DAT_010c512c = 0;
  }
  else {
    DAT_010c512c = 1;
    iVar1 = IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
    pMoby = (MobyInstance *)param_1;
    if (iVar1 == 0) {
      DAT_00840b7c = PlayMobySound(5,0x11,pMoby);
      DAT_00840b80 = pMoby;
    }
    RegisterPostDraw(&PTR_M408_003656c8_0070c848,pMoby);
  }
  return;
}


// 0x0364a00 (0xb38 bytes)
/* Moby 408 */

void UpdateMoby_408(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  GPiece<40> local_40;
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  uVar2 = moby->animationId;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        DAT_010c5120 = 0;
        DAT_010c5124 = 0;
        DAT_010c5128 = 0;
        if (*piVar3 == 2) {
          moby->state = '\x06';
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar7,4,0,0);
          }
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar7,2,0,0);
          }
        }
      }
      else {
        fVar11 = (float)piVar3[5];
        fVar4 = 3.1415925 - fVar11;
        if (fVar11 - (3.1415925 - fVar11) < 0.0) {
          fVar4 = fVar11;
        }
        fVar5 = -3.1415925 - fVar11;
        if ((-3.1415925 - fVar11) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar11 = fVar5 * fVar5;
        fVar4 = fVar11 * fVar11 * fVar5;
        fVar6 = fVar11 * fVar4;
        uVar8 = FastLerpColor
                          ((double)((fVar11 * fVar6 * 2.601887e-06 +
                                     fVar6 * -0.0001980741 +
                                     fVar4 * 0.0083330255 + fVar11 * fVar5 * -0.16666657 + fVar5 +
                                    1.0) * 0.5),0xffffffff801414bc,0xffffffff801414dc);
        moby->field60_0x90 = uVar8;
        dVar10 = (double)FastWrapRot((float)piVar3[5],g_FrameTime * 6.2831855);
        piVar3[5] = (int)(float)dVar10;
        if ((piVar3[2] != 0) && (g_gameMode != GAME_MODE_SCENE)) {
          if (*piVar3 == 1) {
            moby->state = '\x06';
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 30.5));
            }
          }
          else {
            moby->state = '\x05';
          }
        }
      }
    }
    else if (bVar1 < 3) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', uVar2 != '\x02')) {
        MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
      }
    }
    else if (bVar1 < 4) {
      if (((piVar3[2] != 0) && (g_gameMode != GAME_MODE_SCENE)) &&
         (moby->state = '\x04', uVar2 != '\x03')) {
        MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 10.5));
      }
    }
    else if ((moby->field43_0x70 & 2U) != 0) {
      if ((piVar3[2] == 0) || (g_gameMode == GAME_MODE_SCENE)) {
        if (uVar2 != '\b') {
          MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\n';
      }
      else if (*piVar3 == 1) {
        moby->state = '\a';
        if (uVar2 != '\x05') {
          MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        if (uVar2 != '\b') {
          MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x05';
      }
    }
  }
  else if (bVar1 == 10) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', uVar2 != '\x01')) {
      MB_SetAnimation(lVar7,1,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 9) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*piVar3 == 2) {
        moby->state = '\x06';
        if (uVar2 != '\x04') {
          MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        moby->state = '\n';
        if (uVar2 != '\b') {
          MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar1 == 8) {
    fVar11 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if ((((SQRT(fVar4 * fVar4 + fVar11 * fVar11) < 16.0) && (g_gameMode != GAME_MODE_SCENE)) &&
        (iVar9 = FastDecTimerS32(piVar3 + 3), iVar9 != 0)) &&
       ((iVar9 = CollLine(local_40,&g_heroCGPos,2,0,0), iVar9 == 0 &&
        (iVar9 = FUN_00454348(piVar3[1],lVar7 + 0x10), iVar9 != 0)))) {
      piVar3[3] = piVar3[4];
    }
    iVar9 = FastDecTimerS32(piVar3 + 6);
    if ((iVar9 != 0) || (g_gameMode == GAME_MODE_SCENE)) {
      M408_00364690(lVar7,0);
      piVar3[2] = 0;
      moby->state = '\t';
      if (moby->animationId != '\a') {
        MB_SetAnimation(lVar7,7,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 7) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\b', uVar2 != '\x06')) {
      MB_SetAnimation(lVar7,6,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 6) {
    if ((piVar3[2] != 0) && (moby->state = '\a', uVar2 != '\x05')) {
      MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 5) {
    if (((moby->field43_0x70 & 2U) != 0) && (uVar2 != '\0')) {
      MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 10.5));
    }
    fVar11 = (float)piVar3[5];
    fVar4 = 3.1415925 - fVar11;
    if (fVar11 - (3.1415925 - fVar11) < 0.0) {
      fVar4 = fVar11;
    }
    fVar5 = -3.1415925 - fVar11;
    if ((-3.1415925 - fVar11) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar11 = fVar5 * fVar5;
    fVar4 = fVar11 * fVar11 * fVar5;
    fVar6 = fVar11 * fVar4;
    uVar8 = FastLerpColor
                      ((double)((fVar11 * fVar6 * 2.601887e-06 +
                                 fVar6 * -0.0001980741 +
                                 fVar4 * 0.0083330255 + fVar11 * fVar5 * -0.16666657 + fVar5 + 1.0)
                               * 0.5),0xffffffff801414dc,0xffffffff8004048c);
    moby->field60_0x90 = uVar8;
    dVar10 = (double)FastWrapRot((float)piVar3[5],g_FrameTime * 12.566371);
    piVar3[5] = (int)(float)dVar10;
    iVar9 = FastDecTimerS32(piVar3 + 6);
    if ((iVar9 != 0) || (g_gameMode == GAME_MODE_SCENE)) {
      M408_00364690(lVar7,0);
      piVar3[2] = 0;
      if (moby->animationId != '\b') {
        MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
      }
      moby->state = '\n';
    }
  }
  if (piVar3[2] != 0) {
    DAT_010c5124 = 1;
  }
  if (DAT_010c5120 != worldUpdateTime) {
    DAT_010c5120 = worldUpdateTime;
    if (g_heroState == ANIM_TARGET_WALK) {
      fVar11 = Delt(0.0,g_FrameTime * 2.0,(float *)&DAT_010c5128);
      M408_00364690((double)fVar11,lVar7,0);
    }
    else if ((DAT_010c5124 == 0) ||
            ((Level == Quartu &&
             ((int)(((uint)((int)g_heroPosition.y >> 0x1f) >> 1 ^ (uint)g_heroPosition.y) -
                   ((int)g_heroPosition.y >> 0x1f)) < 0x43700001)))) {
      Delt(0.0,g_FrameTime * 2.0,(float *)&DAT_010c5128);
    }
    else {
      Delt(1.0,g_FrameTime * 2.0,(float *)&DAT_010c5128);
    }
    if (DAT_010c5128 == 0) {
      iVar9 = IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
      if (iVar9 != 0) {
        sound_Kill(DAT_00840b7c);
        DAT_00840b7c = -1;
        DAT_00840b80 = (MobyInstance *)0x0;
      }
      DAT_010c512c = 0;
    }
    else {
      DAT_010c512c = 1;
      iVar9 = IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
      if (iVar9 == 0) {
        DAT_00840b7c = PlayMobySound(5,0x11,moby);
        DAT_00840b80 = moby;
      }
      RegisterPostDraw(&PTR_M408_003656c8_0070c848,moby);
    }
    DAT_010c5124 = 0;
  }
  return;
}


// 0x0365538 (0x7c bytes)
undefined8 M408_00365538(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == SENTRY_BOT_ALARM) &&
         (*(int *)((int)g_MobyInstance[*puVar2 & 0x7fff].pVar + 8) != 0)) {
        return 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 0;
}


// 0x03655c0 (0xe4 bytes)
void FUN_003655c0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  cVar1 = *(char *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x78);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 2;
    if (*(char *)(param_1 + 0x53) == '\x01') {
      return;
    }
    MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
    cVar1 = *(char *)(param_1 + 0x20);
  }
  if ((cVar1 == '\x03') && (*(int *)(uVar2 + 8) == 0)) {
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    auVar4 = loadVectorLeftIndexed(4,0x3655b4);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x18,
                       (ulonglong)uVar2);
    *(undefined4 *)(uVar2 + 0x18 & 0xfffffffc) = uVar3;
  }
  return;
}


// 0x03656c8 (0x18c bytes)
void M408_003656c8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = (int)(animationSpeed * ((float)(longlong)DAT_00840b8c + 0.5));
  dVar6 = (double)FastIntToDouble(iVar5);
  fVar1 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar5) * iVar5) / dVar6) *
          6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  fVar1 = DAT_00840b88 *
          (fVar1 * fVar4 * 2.601887e-06 +
          fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) +
          DAT_010c5128;
  if (fVar1 - 0.0 < 0.0) {
    fVar1 = 0.0;
  }
  iVar5 = FastDoubleToInt((double)((float)(longlong)((int)DAT_00840b84 >> 0x18) * fVar1));
  DrawScreenOverlay
            (DAT_00840b84 & 0xff,(uint)((ulonglong)(8 - (longlong)(int)DAT_00840b84) >> 0x3f),
             (uint)((ulonglong)(0x10 - (longlong)(int)DAT_00840b84) >> 0x3f),iVar5);
  return;
}


// 0x0365854 (0x14 bytes)
void M408_00365854(void)

{
  DAT_00840bdc = 0x10000;
  return;
}


