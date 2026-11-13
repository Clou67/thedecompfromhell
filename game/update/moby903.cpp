// game/update/moby903.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4a6570-0x4a70c0
#include "game/update/moby903.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a6570 (0x130 bytes)
double M903_004a6570(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Spline *pSVar4;
  uint uVar5;
  Vec4 *pVVar6;
  undefined4 *unused;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  iVar3 = *(int *)(param_1 + 0x78);
  uVar5 = (int)*(uint *)(iVar3 + 0xa4) >> 0x1f;
  pSVar4 = Splines[*(int *)(iVar3 + 0xb4)];
  if ((int)((uVar5 >> 1 ^ *(uint *)(iVar3 + 0xa4)) - uVar5) < 0x3f000001) {
    fVar12 = pSVar4->points[0].x;
    fVar1 = pSVar4->points[0].y;
    fVar2 = pSVar4->points[0].z;
  }
  else {
    pVVar6 = pSVar4->points + pSVar4->cnt + -1;
    fVar12 = pVVar6->x;
    fVar1 = pVVar6->y;
    fVar2 = pVVar6->z;
  }
  dVar11 = (double)fVar2;
  dVar10 = (double)fVar1;
  unused = &DAT_004a6560;
  dVar9 = 0.004999999888241291;
  dVar8 = 0.20000000298023224;
  dVar7 = 0.0;
  AccelDelt(fVar12,0.005,0.2,0.0,(float *)(param_1 + 0x10),0x4a6560,
                      (float *)(iVar3 + 0xd0));
  AccelDelt((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7,(float *)(param_1 + 0x14)
                      ,(int)unused,(float *)(iVar3 + 0xd4));
  fVar12 = AccelDelt((float)dVar11,(float)dVar9,(float)dVar8,(float)dVar7,
                               (float *)(param_1 + 0x18),(int)unused,(float *)(iVar3 + 0xd8));
  return (double)fVar12;
}


// 0x04a66d0 (0x9f0 bytes)
/* Moby 903 */

void UpdateMoby_903(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  void *pvVar8;
  u16 *puVar9;
  Spline *pSVar10;
  uint uVar11;
  undefined2 uVar12;
  Vec4 *pVVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  uint32_t uVar19;
  undefined4 *unused;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  Vec4 local_80;
  
  pvVar8 = moby->pVar;
  uVar21 = ZEXT48(pvVar8);
  bVar17 = false;
  if (*(int *)((int)pvVar8 + 0xb4) == -1) {
    return;
  }
  pSVar10 = Splines[*(int *)((int)pvVar8 + 0xb4)];
  if (*(int *)((int)pvVar8 + 0xcc) != -1) {
    iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xcc));
    if (iVar18 == 0) {
      moby->updateDistance = -1;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      return;
    }
    iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xcc));
    if (iVar18 != 0) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar9 = moby->pClass->collision;
      *(undefined4 *)((int)pvVar8 + 0xcc) = 0xffffffff;
      moby->collision = puVar9;
    }
  }
  if ((((*(int *)((int)pvVar8 + 0xc0) == -1) ||
       (iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xc0)),
       iVar18 != 0)) || (uVar7 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar7] != '\0')) ||
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar7 >> 5) << 2)) &
      1 << (uVar7 & 0x1f)) != 0)) {
    if (*(int *)((int)pvVar8 + 0xc0) != -1) {
      uVar7 = moby->uid;
      iVar16 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
      iVar18 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
      uVar11 = *(uint *)(&g_CheckpointBits + iVar18);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar16) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar16) | 1 << (uVar7 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar18) = uVar11 | 1 << (uVar7 & 0x1f);
      *(undefined4 *)((int)pvVar8 + 0xc0) = 0xffffffff;
    }
    bVar17 = true;
  }
  dVar27 = (double)(moby->pos).x;
  dVar28 = (double)(moby->pos).y;
  dVar29 = (double)(moby->pos).z;
  FastDecTimerS16(uVar21 + 0xba);
  if (moby->state == '\0') {
    uVar11 = *(uint *)((int)pvVar8 + 0xa0);
    uVar2 = 0;
    *(undefined4 *)((int)pvVar8 + 0x20) = 0;
    *(undefined2 *)((int)pvVar8 + 0x24) = 0;
    *(undefined1 *)((int)pvVar8 + 0x28) = 4;
    *(undefined2 *)((int)pvVar8 + 0x3e) = 5;
    moby->setByGroup = (char)uVar11;
    if ((uVar11 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    lVar20 = 0;
    *(undefined4 *)((int)pvVar8 + 0xa4) = uVar2;
    iVar18 = FastDoubleToInt();
    if (iVar18 != 0) {
      lVar20 = (ulonglong)(uint)pSVar10->cnt - 1;
    }
    iVar18 = (int)(lVar20 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar10->points[0].x + iVar18);
    (moby->pos).y = *(f32 *)((int)&pSVar10->points[0].y + iVar18);
    (moby->pos).z = *(f32 *)((int)&pSVar10->points[0].z + iVar18);
    (moby->pos).w = *(f32 *)((int)&pSVar10->points[0].w + iVar18);
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
    if ((bVar17) &&
       (((*(short *)((int)pvVar8 + 0xb8) != 0 &&
         (uVar19 = MB_HeroStandingOnMoby(moby), uVar19 != 0)) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar5 = g_heroPosition.x - pVVar13->x, fVar6 = g_heroPosition.x - pSVar10->points[0].x,
        fVar14 = g_heroPosition.z - pVVar13->z, fVar15 = g_heroPosition.z - pSVar10->points[0].z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar3 * fVar3) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar4 * fVar4))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
      *(float *)((int)pvVar8 + 0xac) = -1.0 / (fVar3 * *(float *)((int)pvVar8 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar17) &&
       (((*(short *)((int)pvVar8 + 0xb8) != 0 &&
         (uVar19 = MB_HeroStandingOnMoby(moby), uVar19 != 0)) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y,
        fVar5 = g_heroPosition.x - pSVar10->points[0].x, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar6 = g_heroPosition.x - pVVar13->x, fVar14 = g_heroPosition.z - pSVar10->points[0].z,
        fVar15 = g_heroPosition.z - pVVar13->z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar4 * fVar4) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar3 * fVar3))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
      *(float *)((int)pvVar8 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar8 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 3) {
    if ((*(int *)((int)pvVar8 + 200) == 0) &&
       (uVar19 = MB_HeroStandingOnMoby(moby), uVar19 != 0)) {
      DAT_00969ed2 = 4;
      DAT_00969ed4 = 4;
    }
    if (*(short *)((int)pvVar8 + 0xba) == 0) {
      dVar26 = 0.0;
      if ((((-1 < *(int *)((int)pvVar8 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 1.0)) {
        iVar18 = IsMobyPlayingSound(moby,*(int *)((int)pvVar8 + 0xc4));
        if (iVar18 == 0) {
          iVar18 = PlayMobySound(0,4,moby);
          *(int *)((int)pvVar8 + 0xc4) = iVar18;
        }
        fVar3 = *(float *)((int)pvVar8 + 0xac);
        fVar4 = fVar3 * g_FrameTime + *(float *)((int)pvVar8 + 0xa8);
        *(float *)((int)pvVar8 + 0xa8) = fVar4;
        if (ABS(fVar3) < ABS(fVar4)) {
          *(float *)((int)pvVar8 + 0xa8) = fVar3;
          fVar4 = fVar3;
        }
        fVar4 = *(float *)((int)pvVar8 + 0xa4) + fVar4;
        *(float *)((int)pvVar8 + 0xa4) = fVar4;
        if (0.5 < ABS(fVar4 - 0.5)) {
          if (*(int *)((int)pvVar8 + 0xac) < 1) {
            moby->setByGroup = '\x01';
            dVar22 = dVar26;
          }
          else {
            moby->setByGroup = '\0';
            dVar22 = 1.0;
          }
          *(float *)((int)pvVar8 + 0xa4) = (float)dVar22;
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0x20,0x4a66a0);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar18 = *(int *)((int)pvVar8 + 0xc4);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = vectorSplatHalfWord(auVar30,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar30,0xba,uVar21);
          *(undefined2 *)((int)pvVar8 + 0xba) = uVar12;
          if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
             (g_SoundChannels[iVar18].state != '\0')) {
            sound_Kill(iVar18);
          }
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
        }
        dVar22 = (double)FastIntToDouble(pSVar10->cnt + -1);
        lVar20 = FastDoubleToInt
                           ((double)(float)(dVar22 * (double)*(float *)((int)pvVar8 + 0xa4)));
        dVar22 = (double)FastIntToDouble();
        dVar23 = (double)FastIntToDouble(pSVar10->cnt + -1);
        fVar3 = (float)(dVar23 * (double)*(float *)((int)pvVar8 + 0xa4) - dVar22);
        iVar18 = (int)(lVar20 << 4);
        if ((int)lVar20 == pSVar10->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar18);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar18);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar18);
        }
        else {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar18);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar18);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar18);
          fVar4 = fVar3 * (*(float *)((int)&pSVar10->points[1].x + iVar18) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar10->points[1].y + iVar18) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar10->points[1].z + iVar18) - fVar6) + fVar6;
        }
        dVar25 = (double)fVar6;
        dVar24 = (double)fVar5;
        unused = &DAT_004a66a0;
        dVar23 = 0.004999999888241291;
        dVar22 = 0.20000000298023224;
        AccelDelt(fVar4,0.005,0.2,(float)dVar26,&(moby->pos).x,0x4a66a0,
                            (float *)((int)pvVar8 + 0xd0));
        AccelDelt((float)dVar24,(float)dVar23,(float)dVar22,(float)dVar26,&(moby->pos).y,
                            (int)unused,(float *)((int)pvVar8 + 0xd4));
        AccelDelt((float)dVar25,(float)dVar23,(float)dVar22,(float)dVar26,&(moby->pos).z,
                            (int)unused,(float *)((int)pvVar8 + 0xd8));
        *(float *)((int)pvVar8 + 0xbc) = (float)((double)(moby->pos).z - dVar29);
        goto LAB_004a6fb4;
      }
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x18,0x4a66a0);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar30,0xba,uVar21);
      *(undefined2 *)((int)pvVar8 + 0xba) = uVar12;
    }
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    iVar18 = *(int *)((int)pvVar8 + 0xc4);
    if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
       (g_SoundChannels[iVar18].state != '\0')) {
      sound_Kill(iVar18);
    }
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
LAB_004a6fb4:
  if (moby->setByGroup != '\x02') {
    M903_004a6570((longlong)(int)moby);
  }
  lVar20 = (longlong)(int)moby + 0x40;
  local_80.x = (float)((double)(moby->pos).x - dVar27);
  local_80.y = (float)((double)(moby->pos).y - dVar28);
  local_80.w = (moby->pos).w;
  local_80.z = (float)((double)(moby->pos).z - dVar29);
  MB_GetOrientation((MobyInstance *)((int)pvVar8 + 0x60),&local_80,lVar20,lVar20);
  uVar19 = MB_HeroStandingOnMoby(moby);
  if (((uVar19 == 0) &&
      (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) && (*(short *)((int)pvVar8 + 0xba) == 0)) {
    *(undefined2 *)((int)pvVar8 + 0xb8) = 1;
  }
  return;
}


