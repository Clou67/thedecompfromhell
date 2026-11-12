// game/update/moby726.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x435170-0x435b30
// shared update function UpdateMoby_{726_1082_1141}; registered for oClasses 726, 1082, 1141
#include "game/update/moby726.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0435170 (0x14 bytes)
void M1141_00435170(void)

{
  DAT_0085a07c = 0x10000;
  return;
}


// shared update function, registered for oClasses 726, 1082, 1141
// 0x04351b8 (0x964 bytes)
/* Moby 726
   Moby 1082
   Moby 1141 */

void UpdateMoby_726(MobyInstance *moby)

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
  u16 *puVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined2 uVar13;
  Vec4 *pVVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  uint32_t uVar20;
  longlong lVar21;
  ulonglong uVar22;
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
  uVar22 = ZEXT48(pvVar9);
  bVar18 = false;
  if (*(int *)((int)pvVar9 + 0xb4) == -1) {
    return;
  }
  pSVar11 = Splines[*(int *)((int)pvVar9 + 0xb4)];
  if (*(int *)((int)pvVar9 + 0xcc) != -1) {
    iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xcc));
    if (iVar19 == 0) {
      moby->updateDistance = -1;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      return;
    }
    iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xcc));
    if (iVar19 != 0) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar10 = moby->pClass->collision;
      *(undefined4 *)((int)pvVar9 + 0xcc) = 0xffffffff;
      moby->collision = puVar10;
    }
  }
  if ((((*(int *)((int)pvVar9 + 0xc0) == -1) ||
       (iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xc0)),
       iVar19 != 0)) || (uVar8 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar8] != '\0')) ||
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2)) &
      1 << (uVar8 & 0x1f)) != 0)) {
    if (*(int *)((int)pvVar9 + 0xc0) != -1) {
      uVar8 = moby->uid;
      iVar17 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      uVar12 = *(uint *)(&g_CheckpointBits + iVar19);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar17) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar17) | 1 << (uVar8 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar19) = uVar12 | 1 << (uVar8 & 0x1f);
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0xffffffff;
    }
    bVar18 = true;
  }
  dVar25 = (double)(moby->pos).x;
  dVar26 = (double)(moby->pos).y;
  dVar27 = (double)(moby->pos).z;
  FastDecTimerS16(uVar22 + 0xba);
  if (moby->state == '\0') {
    uVar12 = *(uint *)((int)pvVar9 + 0xa0);
    uVar2 = 0;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 0;
    *(undefined1 *)((int)pvVar9 + 0x28) = 4;
    *(undefined2 *)((int)pvVar9 + 0x3e) = 5;
    moby->setByGroup = (char)uVar12;
    if ((uVar12 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    lVar21 = 0;
    *(undefined4 *)((int)pvVar9 + 0xa4) = uVar2;
    iVar19 = FastDoubleToInt();
    if (iVar19 != 0) {
      lVar21 = (ulonglong)(uint)pSVar11->cnt - 1;
    }
    iVar19 = (int)(lVar21 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar11->points[0].x + iVar19);
    (moby->pos).y = *(f32 *)((int)&pSVar11->points[0].y + iVar19);
    (moby->pos).z = *(f32 *)((int)&pSVar11->points[0].z + iVar19);
    (moby->pos).w = *(f32 *)((int)&pSVar11->points[0].w + iVar19);
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
    if ((bVar18) &&
       (((*(short *)((int)pvVar9 + 0xb8) != 0 &&
         (uVar20 = MB_HeroStandingOnMoby(moby), uVar20 != 0)) ||
        (pVVar14 = pSVar11->points + pSVar11->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar11->points[0].y, fVar4 = g_heroPosition.y - pVVar14->y,
        fVar5 = g_heroPosition.x - pVVar14->x, fVar6 = g_heroPosition.x - pSVar11->points[0].x,
        fVar15 = g_heroPosition.z - pVVar14->z, fVar16 = g_heroPosition.z - pSVar11->points[0].z,
        SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar3 * fVar3) <
        SQRT(fVar15 * fVar15 + fVar5 * fVar5 + fVar4 * fVar4))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = -1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar18) &&
       (((*(short *)((int)pvVar9 + 0xb8) != 0 &&
         (uVar20 = MB_HeroStandingOnMoby(moby), uVar20 != 0)) ||
        (pVVar14 = pSVar11->points + pSVar11->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar11->points[0].y,
        fVar5 = g_heroPosition.x - pSVar11->points[0].x, fVar4 = g_heroPosition.y - pVVar14->y,
        fVar6 = g_heroPosition.x - pVVar14->x, fVar15 = g_heroPosition.z - pSVar11->points[0].z,
        fVar16 = g_heroPosition.z - pVVar14->z,
        SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar4 * fVar4) <
        SQRT(fVar15 * fVar15 + fVar5 * fVar5 + fVar3 * fVar3))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 3) {
    if ((*(int *)((int)pvVar9 + 200) == 0) &&
       (uVar20 = MB_HeroStandingOnMoby(moby), uVar20 != 0)) {
      DAT_00969ed2 = 4;
      DAT_00969ed4 = 4;
    }
    if (*(short *)((int)pvVar9 + 0xba) == 0) {
      dVar24 = 0.0;
      if ((((-1 < *(int *)((int)pvVar9 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.83 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 0.9)) {
        iVar19 = IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0xc4));
        if (iVar19 == 0) {
          iVar19 = PlayMobySound(0,4,moby);
          *(int *)((int)pvVar9 + 0xc4) = iVar19;
        }
        fVar3 = *(float *)((int)pvVar9 + 0xac);
        fVar4 = fVar3 * g_FrameTime + *(float *)((int)pvVar9 + 0xa8);
        *(float *)((int)pvVar9 + 0xa8) = fVar4;
        if (ABS(fVar3) < ABS(fVar4)) {
          *(float *)((int)pvVar9 + 0xa8) = fVar3;
          fVar4 = fVar3;
        }
        fVar4 = *(float *)((int)pvVar9 + 0xa4) + fVar4;
        *(float *)((int)pvVar9 + 0xa4) = fVar4;
        if (0.5 < ABS(fVar4 - 0.5)) {
          if (*(int *)((int)pvVar9 + 0xac) < 1) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\0';
            dVar24 = 1.0;
          }
          *(float *)((int)pvVar9 + 0xa4) = (float)dVar24;
          auVar28 = ZEXT416(0xffffffff);
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar28 = loadVectorLeftIndexed(0x24,0x435188);
          auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar19 = *(int *)((int)pvVar9 + 0xc4);
          auVar28 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                               ,auVar29);
          auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
          auVar28 = vectorSplatHalfWord(auVar28,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar22);
          *(undefined2 *)((int)pvVar9 + 0xba) = uVar13;
          if (((iVar19 != -1) && (g_SoundChannels[iVar19].pMoby == moby)) &&
             (g_SoundChannels[iVar19].state != '\0')) {
            sound_Kill(iVar19);
          }
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
        }
        dVar24 = (double)FastIntToDouble(pSVar11->cnt + -1);
        lVar21 = FastDoubleToInt
                           ((double)(float)(dVar24 * (double)*(float *)((int)pvVar9 + 0xa4)));
        dVar24 = (double)FastIntToDouble();
        dVar23 = (double)FastIntToDouble(pSVar11->cnt + -1);
        fVar3 = (float)(dVar23 * (double)*(float *)((int)pvVar9 + 0xa4) - dVar24);
        iVar19 = (int)(lVar21 << 4);
        if ((int)lVar21 == pSVar11->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar11->points[0].w + iVar19);
        }
        else {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar11->points[1].w + iVar19);
          fVar4 = fVar3 * (*(float *)((int)&pSVar11->points[1].x + iVar19) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar11->points[1].y + iVar19) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar11->points[1].z + iVar19) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar9 + 0xbc) = (float)((double)fVar6 - dVar27);
        goto LAB_00435a34;
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x1c,0x435188);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = vectorSplatHalfWord(auVar28,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar22);
      *(undefined2 *)((int)pvVar9 + 0xba) = uVar13;
    }
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    iVar19 = *(int *)((int)pvVar9 + 0xc4);
    if (((iVar19 != -1) && (g_SoundChannels[iVar19].pMoby == moby)) &&
       (g_SoundChannels[iVar19].state != '\0')) {
      sound_Kill(iVar19);
    }
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
LAB_00435a34:
  local_60.x = (float)((double)(moby->pos).x - dVar25);
  local_60.y = (float)((double)(moby->pos).y - dVar26);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar27);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x60),&local_60,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  uVar20 = MB_HeroStandingOnMoby(moby);
  if (((uVar20 == 0) &&
      (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) && (*(short *)((int)pvVar9 + 0xba) == 0)) {
    *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
  }
  return;
}


// 0x0435b1c (0x14 bytes)
void M1141_00435b1c(void)

{
  DAT_0085a0ec = 0x10000;
  return;
}


