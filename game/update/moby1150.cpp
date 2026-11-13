// game/update/moby1150.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e05a4-0x1e10c8
// shared update function UpdateMoby_{1150_1151}; registered for oClasses 1150, 1151
#include "game/update/moby1150.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01e05a4 (0x14 bytes)
void M1151_001e05a4(void)

{
  DAT_00764d80 = 0x10000;
  return;
}


// 0x01e05b8 (0x58 bytes)
undefined8 M1151_001e05b8(int param_1)

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


// shared update function, registered for oClasses 1150, 1151
// 0x01e0638 (0xa90 bytes)
/* Moby 1150
   Moby 1151 */

void UpdateMoby_1150(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  ushort uVar8;
  void *pvVar9;
  Spline *pSVar10;
  uint uVar11;
  undefined2 uVar12;
  Vec4 *pVVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  Vec4 local_60;
  
  pvVar9 = moby->pVar;
  uVar21 = ZEXT48(pvVar9);
  bVar17 = false;
  if (*(int *)((int)pvVar9 + 0xb4) == -1) {
    return;
  }
  pSVar10 = Splines[*(int *)((int)pvVar9 + 0xb4)];
  if ((((*(int *)((int)pvVar9 + 0xc0) == -1) ||
       (iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xc0)),
       iVar19 != 0)) || (uVar8 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar8] != '\0')) ||
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2)) &
      1 << (uVar8 & 0x1f)) != 0)) {
    if (*(int *)((int)pvVar9 + 0xc0) != -1) {
      uVar8 = moby->uid;
      iVar16 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      uVar11 = *(uint *)(&g_CheckpointBits + iVar19);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar16) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar16) | 1 << (uVar8 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar19) = uVar11 | 1 << (uVar8 & 0x1f);
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0xffffffff;
    }
    bVar17 = true;
  }
  dVar27 = (double)(moby->pos).x;
  dVar26 = (double)(moby->pos).y;
  dVar25 = (double)(moby->pos).z;
  FastDecTimerS16(uVar21 + 0xba);
  if (moby->state == '\0') {
    uVar11 = *(uint *)((int)pvVar9 + 0xa0);
    uVar2 = 0;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 0;
    *(undefined1 *)((int)pvVar9 + 0x28) = 4;
    *(undefined2 *)((int)pvVar9 + 0x3e) = 5;
    moby->setByGroup = (char)uVar11;
    if ((uVar11 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    lVar20 = 0;
    *(undefined4 *)((int)pvVar9 + 0xa4) = uVar2;
    iVar19 = FastDoubleToInt();
    if (iVar19 != 0) {
      lVar20 = (ulonglong)(uint)pSVar10->cnt - 1;
    }
    iVar19 = (int)(lVar20 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar10->points[0].x + iVar19);
    (moby->pos).y = *(f32 *)((int)&pSVar10->points[0].y + iVar19);
    (moby->pos).z = *(f32 *)((int)&pSVar10->points[0].z + iVar19);
    (moby->pos).w = *(f32 *)((int)&pSVar10->points[0].w + iVar19);
    *(undefined2 *)((int)pvVar9 + 0xba) = 0;
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    if ((bVar17) &&
       ((((*(short *)((int)pvVar9 + 0xb8) != 0 &&
          (((pMVar18 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar18 == moby)) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar5 = g_heroPosition.x - pVVar13->x, fVar6 = g_heroPosition.x - pSVar10->points[0].x,
        fVar14 = g_heroPosition.z - pVVar13->z, fVar15 = g_heroPosition.z - pSVar10->points[0].z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar3 * fVar3) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar4 * fVar4))))) {
      if (((*(int *)((int)pvVar9 + 200) == 0) &&
          (((pMVar18 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar18 == moby)) {
        TransitionMovement(0x72,1);
      }
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = -1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar17) &&
       (((*(short *)((int)pvVar9 + 0xb8) != 0 &&
         ((((pMVar18 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar18 == moby)))) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar5 = g_heroPosition.x - pSVar10->points[0].x, fVar6 = g_heroPosition.x - pVVar13->x,
        fVar14 = g_heroPosition.z - pSVar10->points[0].z, fVar15 = g_heroPosition.z - pVVar13->z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar4 * fVar4) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar3 * fVar3))))) {
      if ((*(int *)((int)pvVar9 + 200) == 0) &&
         ((((pMVar18 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar18 == moby)))) {
        TransitionMovement(0x72,1);
      }
      PlayMobySound(1,0,moby);
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar9 + 0xba) == 0) {
      dVar24 = 0.0;
      if ((((-1 < *(int *)((int)pvVar9 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 1.0)) {
        iVar19 = IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0xc4));
        if (iVar19 == 0) {
          iVar19 = PlayMobySound(0,4,moby);
          *(int *)((int)pvVar9 + 0xc4) = iVar19;
        }
        dVar23 = (double)*(float *)((int)pvVar9 + 0xac);
        fVar3 = (float)(dVar23 * (double)g_FrameTime +
                       (double)*(float *)((int)pvVar9 + 0xa8));
        dVar22 = (double)fVar3;
        *(float *)((int)pvVar9 + 0xa8) = fVar3;
        if (ABS(dVar23) < ABS(dVar22)) {
          *(float *)((int)pvVar9 + 0xa8) = *(float *)((int)pvVar9 + 0xac);
          dVar22 = dVar23;
        }
        fVar3 = (float)((double)*(float *)((int)pvVar9 + 0xa4) + dVar22);
        *(float *)((int)pvVar9 + 0xa4) = fVar3;
        if (0.5 < ABS(fVar3 - 0.5)) {
          if (((*(int *)((int)pvVar9 + 200) == 0) &&
              (((pMVar18 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
               || (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar18 == moby)) {
            TransitionMovement(0,1);
            dVar23 = (double)*(float *)((int)pvVar9 + 0xac);
          }
          if (dVar23 <= dVar24) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\0';
            dVar24 = 1.0;
          }
          *(float *)((int)pvVar9 + 0xa4) = (float)dVar24;
          PlayMobySound(2,0,moby);
          auVar28 = ZEXT416(0xffffffff);
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar28 = loadVectorLeftIndexed(0x20,0x1e0610);
          auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar19 = *(int *)((int)pvVar9 + 0xc4);
          auVar28 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                               ,auVar29);
          auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
          auVar28 = vectorSplatHalfWord(auVar28,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar21);
          *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
          if (((iVar19 != -1) && (g_SoundChannels[iVar19].pMoby == moby)) &&
             (g_SoundChannels[iVar19].state != '\0')) {
            sound_Kill(iVar19);
          }
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
        }
        dVar24 = (double)FastIntToDouble(pSVar10->cnt + -1);
        lVar20 = FastDoubleToInt
                           ((double)(float)(dVar24 * (double)*(float *)((int)pvVar9 + 0xa4)));
        dVar24 = (double)FastIntToDouble();
        dVar22 = (double)FastIntToDouble(pSVar10->cnt + -1);
        fVar3 = (float)(dVar22 * (double)*(float *)((int)pvVar9 + 0xa4) - dVar24);
        iVar19 = (int)(lVar20 << 4);
        if ((int)lVar20 == pSVar10->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar10->points[0].w + iVar19);
        }
        else {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar10->points[1].w + iVar19);
          fVar4 = fVar3 * (*(float *)((int)&pSVar10->points[1].x + iVar19) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar10->points[1].y + iVar19) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar10->points[1].z + iVar19) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar9 + 0xbc) = (float)((double)fVar6 - dVar25);
        goto LAB_001e0fb4;
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x18,0x1e0610);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = vectorSplatHalfWord(auVar28,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar21);
      *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
    }
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    iVar19 = *(int *)((int)pvVar9 + 0xc4);
    if (((iVar19 != -1) && (g_SoundChannels[iVar19].pMoby == moby)) &&
       (g_SoundChannels[iVar19].state != '\0')) {
      sound_Kill(iVar19);
    }
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
LAB_001e0fb4:
  local_60.x = (float)((double)(moby->pos).x - dVar27);
  local_60.y = (float)((double)(moby->pos).y - dVar26);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar25);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x60),&local_60,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  pMVar18 = DAT_0096a1d8;
  if (((((g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
       (pMVar18 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar18 != moby)) &&
     ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(short *)((int)pvVar9 + 0xba) == 0)))) {
    *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
  }
  return;
}


