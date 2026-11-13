// game/update/moby899.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4a4540-0x4a4b78
#include <stdio.h>
#include "game/update/moby899.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x04a4540 (0x2cc bytes)
// inlined: FastAtan2 @0x4a46bc
MobyInstance * M899_004a4540(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar12;
  longlong lVar11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xd0;
  puVar8 = (ulonglong *)lVar11;
  *puVar8 = uVar10;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  pMVar12 = CreateMoby(CEILING);
  if (pMVar12 != (MobyInstance *)0x0) {
    pvVar6 = pMVar12->pVar;
    pMVar12->updateDistance = -0x80;
    pMVar12->drawDistance = 0x40;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\0';
    pMVar12->modeBits = pMVar12->modeBits | HAS_SPECIAL_VARS;
    MB_CopyHeroLights(pMVar12);
    fVar1 = (float)param_2[4];
    (pMVar12->pos).x = fVar1;
    fVar2 = (float)param_2[5];
    (pMVar12->pos).y = fVar2;
    iVar7 = *param_2;
    (pMVar12->pos).z = (f32)param_2[6];
    (pMVar12->pos).w = (f32)param_2[7];
    fVar3 = 0.0;
    (pMVar12->rotation).w = 0.0;
    (pMVar12->rotation).z = 0.0;
    (pMVar12->rotation).y = 0.0;
    (pMVar12->rotation).x = 0.0;
    fVar1 = (float)param_2[iVar7 * 4] - fVar1;
    fVar2 = (float)param_2[iVar7 * 4 + 1] - fVar2;
    fVar4 = ABS(fVar1);
    *(float *)(puVar8 + 0xe) = fVar1;
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar8 + 0x74) = fVar2;
    *(float *)(puVar8 + 0xf) = fVar4 - fVar5;
    uVar14 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar5 = ABS(*(float *)((int)puVar8 + 0x74));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar1) {
      lVar16 = uVar10 - 0xc0;
      lVar13 = uVar10 - 0x44;
      lVar15 = uVar10 - 0x54;
      lVar18 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar8 + 0x11) = fVar1;
      *(float *)(puVar8 + 0x10) = fVar1;
      *(float *)((int)puVar8 + 0x84) = fVar1;
      *(float *)((int)puVar8 + 0x7c) = fVar1;
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar1;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar1 * fVar5;
      do {
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar1 * fVar1;
        iVar7 = (int)lVar15;
        lVar15 = lVar15 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar7 + 4) * fVar1 * fVar1;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar10 - 0x54;
      lVar18 = 4;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar16;
      lVar15 = lVar11;
      do {
        fVar1 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar13 = 2;
      do {
        iVar7 = (int)lVar11;
        iVar9 = (int)lVar16;
        lVar11 = lVar11 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar4;
    }
    (pMVar12->rotation).z = fVar3;
    *(int *)((int)pvVar6 + 8) = (int)pvVar6 + 0x20;
    *(int **)((int)pvVar6 + 0x60) = param_2;
    *(float *)((int)pvVar6 + 100) = (float)param_1;
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// 0x04a4820 (0x25c bytes)
// strings: 006588c0: 'Bad path data on moby class 899, maya instance %d\n'

/* Moby 899 */

void UpdateMoby_899(MobyInstance *moby)

{
  int *piVar1;
  Spline *pSVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte in_cr6;
  undefined8 in_LR;
  double dVar10;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    if (*piVar1 == -1) {
      printf("Bad path data on moby class 899, maya instance %d\n",
                   (ulonglong)(uint)moby->handle & 0xffff);
      DeleteMoby(moby);
      return;
    }
    DAT_010e4500 = g_FrameTime * 3.0;
    iVar7 = 0;
    pSVar2 = Splines[*piVar1];
    uVar9 = ZEXT48(pSVar2);
    uVar8 = uVar9;
    if (0 < pSVar2->cnt + -2) {
      do {
        iVar4 = (int)uVar8;
        fVar3 = *(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0x24);
        fVar5 = *(float *)(iVar4 + 0x10) - *(float *)(iVar4 + 0x20);
        fVar6 = *(float *)(iVar4 + 0x18) - *(float *)(iVar4 + 0x28);
        iVar7 = iVar7 + 1;
        *(float *)(iVar4 + 0x1c) = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
        uVar8 = uVar8 + 0x10;
      } while (iVar7 < pSVar2->cnt + -2);
    }
    piVar1[1] = 0;
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    moby->state = '\x01';
    piVar1[2] = -1;
    auVar13 = loadVectorLeftIndexed(in_LR,uVar9);
    auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
    auVar14 = loadVectorLeftIndexed(0x1c,uVar9);
    dVar10 = 2.9000000953674316;
    auVar15 = loadVectorLeftIndexed(4,0x4a4810);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
    auVar12 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
               auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    dVar11 = dVar10;
    if ((bool)(in_cr6 >> 1 & 1)) {
      do {
        M899_004a4540(dVar10,uVar9);
        dVar10 = (double)(float)(dVar10 + dVar11);
      } while (dVar10 < (double)((float)(longlong)pSVar2->cnt * pSVar2->points[0].w));
    }
    moby->updateDistance = '`';
  }
  iVar7 = FastDecTimerS32(piVar1 + 1);
  if (iVar7 != 0) {
    iVar7 = FastDoubleToInt((double)(2.9 / DAT_010e4500));
    piVar1[1] = iVar7;
    M899_004a4540(0,Splines[*piVar1]);
  }
  iVar7 = IsMobyPlayingSound(moby,piVar1[2]);
  if (iVar7 == 0) {
    iVar7 = sound_MobyPlay_oClass(0,4,moby,0x382);
    piVar1[2] = iVar7;
  }
  return;
}


// 0x04a4a80 (0xf8 bytes)
// strings: 0096c074: 'None'

void M899_004a4a80(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008cc1bc;
          DAT_00a1bfa4 = DAT_008cc1bc;
          DAT_00a1bfa8 = DAT_008cc1bc;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


