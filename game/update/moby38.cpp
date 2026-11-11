// game/update/moby38.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x358ad0-0x359274
#include "game/update/moby38.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0358ad0 (0x7a4 bytes)
/* Moby 38 */

void UpdateMoby_38(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  void *pvVar8;
  uint uVar9;
  Spline *pSVar10;
  undefined2 uVar11;
  MobyInstance *pMVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  Vec4 local_50;
  
  pvVar8 = moby->pVar;
  uVar15 = ZEXT48(pvVar8);
  if (*(int *)((int)pvVar8 + 0xb4) == -1) {
    return;
  }
  dVar19 = (double)(moby->pos).x;
  dVar20 = (double)(moby->pos).y;
  dVar21 = (double)(moby->pos).z;
  pSVar10 = Splines[*(int *)((int)pvVar8 + 0xb4)];
  FastDecTimerS16(uVar15 + 0xba);
  if (moby->state == '\0') {
    *(undefined4 *)((int)pvVar8 + 0x20) = 0;
    *(undefined2 *)((int)pvVar8 + 0x24) = 0;
    *(undefined1 *)((int)pvVar8 + 0x28) = 4;
    uVar9 = *(uint *)((int)pvVar8 + 0xa0);
    *(undefined2 *)((int)pvVar8 + 0x3e) = 5;
    moby->setByGroup = (char)uVar9;
    uVar2 = 0;
    if ((uVar9 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)((int)pvVar8 + 0xa4) = uVar2;
    iVar14 = FastDoubleToInt();
    lVar13 = 0;
    if (iVar14 != 0) {
      lVar13 = (ulonglong)(uint)pSVar10->cnt - 1;
    }
    iVar14 = (int)(lVar13 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar10->points[0].x + iVar14);
    (moby->pos).y = *(f32 *)((int)&pSVar10->points[0].y + iVar14);
    (moby->pos).z = *(f32 *)((int)&pSVar10->points[0].z + iVar14);
    (moby->pos).w = *(f32 *)((int)&pSVar10->points[0].w + iVar14);
    *(undefined2 *)((int)pvVar8 + 0xba) = 0;
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar8 + 0xbc) = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    fVar3 = moby->pClass->gScale;
    fVar4 = -(fVar3 * 0.016666668 - moby->scale);
    moby->scale = fVar4;
    if (fVar4 < 0.0) {
      moby->scale = fVar3;
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      fVar3 = pSVar10->points[0].w;
      moby->setByGroup = '\x01';
      (moby->pos).w = fVar3;
      *(undefined4 *)((int)pvVar8 + 0xa4) = 0;
    }
  }
  else if (bVar1 < 2) {
    if (((*(short *)((int)pvVar8 + 0xb8) != 0) &&
        (((pMVar12 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
         (pMVar12 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar12 == moby)) {
      if ((*(int *)((int)pvVar8 + 200) == 0) &&
         ((((pMVar12 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar12 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar12 == moby)))) {
        TransitionMovement(0x72,1);
      }
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed * *(float *)((int)pvVar8 + 0xb0) * 60.0;
      *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
      *(float *)((int)pvVar8 + 0xac) = 1.0 / fVar3;
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar8 + 0xba) == 0) {
      dVar18 = 0.0;
      if (((-1 < *(int *)((int)pvVar8 + 0xbc)) ||
          (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
          2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
         ((fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3) ||
          (fVar3 - g_heroPosition.z <= 1.0)))) {
        iVar14 = IsMobyPlayingSound(moby,*(int *)((int)pvVar8 + 0xc4));
        if (iVar14 == 0) {
          iVar14 = PlayMobySound(0,4,moby);
          *(int *)((int)pvVar8 + 0xc4) = iVar14;
        }
        dVar16 = (double)*(float *)((int)pvVar8 + 0xac);
        fVar3 = (float)(dVar16 * (double)g_FrameTime +
                       (double)*(float *)((int)pvVar8 + 0xa8));
        dVar17 = (double)fVar3;
        *(float *)((int)pvVar8 + 0xa8) = fVar3;
        if (ABS(dVar16) < ABS(dVar17)) {
          *(float *)((int)pvVar8 + 0xa8) = *(float *)((int)pvVar8 + 0xac);
          dVar17 = dVar16;
        }
        fVar3 = (float)((double)*(float *)((int)pvVar8 + 0xa4) + dVar17);
        *(float *)((int)pvVar8 + 0xa4) = fVar3;
        if (0.5 < ABS(fVar3 - 0.5)) {
          if ((*(int *)((int)pvVar8 + 200) == 0) &&
             ((((pMVar12 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
               || (pMVar12 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar12 == moby)))) {
            Hero_TransitionToDefault();
            dVar16 = (double)*(float *)((int)pvVar8 + 0xac);
          }
          if (dVar16 <= dVar18) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\0';
            dVar18 = 1.0;
          }
          *(float *)((int)pvVar8 + 0xa4) = (float)dVar18;
          auVar22 = ZEXT416(0xffffffff);
          auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
          *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
          auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
          auVar22 = loadVectorLeftIndexed(0x20,0x358aa8);
          auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar14 = *(int *)((int)pvVar8 + 0xc4);
          auVar22 = vectorMultiplyAddFloatingPoint
                              (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                               ,auVar23);
          auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
          auVar22 = vectorSplatHalfWord(auVar22,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar22,0xba,uVar15);
          *(undefined2 *)((int)pvVar8 + 0xba) = uVar11;
          if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
             (g_SoundChannels[iVar14].state != '\0')) {
            sound_Kill(iVar14);
          }
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
        }
        dVar18 = (double)FastIntToDouble(pSVar10->cnt + -1);
        lVar13 = FastDoubleToInt
                           ((double)(float)(dVar18 * (double)*(float *)((int)pvVar8 + 0xa4)));
        dVar18 = (double)FastIntToDouble();
        dVar17 = (double)FastIntToDouble(pSVar10->cnt + -1);
        fVar3 = (float)(dVar17 * (double)*(float *)((int)pvVar8 + 0xa4) - dVar18);
        iVar14 = (int)(lVar13 << 4);
        if ((int)lVar13 == pSVar10->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar14);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar14);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar14);
          fVar7 = *(f32 *)((int)&pSVar10->points[0].w + iVar14);
        }
        else {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar14);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar14);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar14);
          fVar7 = *(f32 *)((int)&pSVar10->points[1].w + iVar14);
          fVar4 = fVar3 * (*(float *)((int)&pSVar10->points[1].x + iVar14) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar10->points[1].y + iVar14) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar10->points[1].z + iVar14) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar8 + 0xbc) = (float)((double)fVar6 - dVar21);
        goto LAB_00359168;
      }
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0x18,0x358aa8);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorMultiplyAddFloatingPoint
                          (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                           auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = vectorSplatHalfWord(auVar22,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar22,0xba,uVar15);
      *(undefined2 *)((int)pvVar8 + 0xba) = uVar11;
    }
    iVar14 = *(int *)((int)pvVar8 + 0xc4);
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
       (g_SoundChannels[iVar14].state != '\0')) {
      sound_Kill(iVar14);
    }
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
LAB_00359168:
  local_50.x = (float)((double)(moby->pos).x - dVar19);
  local_50.y = (float)((double)(moby->pos).y - dVar20);
  local_50.w = (moby->pos).w;
  local_50.z = (float)((double)(moby->pos).z - dVar21);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar8 + 0x60),&local_50,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  pMVar12 = DAT_0096a1d8;
  if (((((g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
       (pMVar12 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar12 != moby)) &&
     ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(short *)((int)pvVar8 + 0xba) == 0)))) {
    *(undefined2 *)((int)pvVar8 + 0xb8) = 1;
  }
  return;
}


