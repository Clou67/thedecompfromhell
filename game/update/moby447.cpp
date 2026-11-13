// game/update/moby447.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4b2c60-0x4b390c
// shared update function UpdateMoby_{447_920}; registered for oClasses 447, 920
#include <stdio.h>
#include "game/update/moby447.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04b2c60 (0x14 bytes)
void M920_004b2c60(void)

{
  DAT_008f4494 = 0x10000;
  return;
}


// 0x04b2c78 (0xe8 bytes)
// strings: 0096c074: 'None'

void M920_004b2c78(void)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == QUARK_0398) || (MVar1 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}


// shared update function, registered for oClasses 447, 920
// 0x04b2db8 (0xb54 bytes)
// inlined: FastAtan2 @0x4b3164, FastAtan2 @0x4b3510, FastAtan2 @0x4b36c4
// strings: 0096c074: 'None' | 00658a0c: 'Warning: Captain Quark has no Hero Detect Cuboid!\n' | 00658a44: 'Warning: Captain Quark has not Cutscene moby\n' | 00658a74: 'Warning: Captain Quark has not Segment Switch\n'

/* Moby 447
   Moby 920 */

void UpdateMoby_447(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  undefined4 uVar19;
  longlong lVar16;
  longlong lVar17;
  short sVar22;
  float *pfVar21;
  longlong lVar20;
  longlong lVar23;
  ulonglong unaff_r26;
  undefined4 *puVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar24 = &DAT_0095cd50;
    sVar22 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar8 = ((MobyInstance *)puVar24[0x5e])->oClass;
        if (((MVar8 == QUARK_0398) || (MVar8 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar24[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar22 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar18 = iVar18 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar18 < sVar22);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      if (*(int *)((int)pvVar9 + 0x120) == -1) {
        printf("Warning: Captain Quark has no Hero Detect Cuboid!\n");
      }
      if (*(int *)((int)pvVar9 + 0x128) == -1) {
        printf("Warning: Captain Quark has not Cutscene moby\n");
      }
      if (*(int *)((int)pvVar9 + 0x124) == -1) {
        printf("Warning: Captain Quark has not Segment Switch\n");
      }
      else if (g_MobyInstance[*(int *)((int)pvVar9 + 0x124)].state != '\0') {
        if (*(int *)((int)pvVar9 + 0x128) != -1) {
          g_MobyInstance[*(int *)((int)pvVar9 + 0x128)].state = '\x03';
        }
        DeleteMoby(moby);
        return;
      }
      moby->state = '\x01';
    }
    else if ((*(int *)((int)pvVar9 + 0x120) != -1) &&
            (iVar18 = MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x120)),
            iVar18 != 0)) {
      FUN_004d407c(moby,1);
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    moby->state = '\x03';
  }
  dVar34 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b3868;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b3314:
    if (*(int *)((int)pvVar9 + 0x118) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x118) = 0;
      *(float *)((int)pvVar9 + 0x100) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x104) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x108) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x10c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar10 + 0x11) = fVar3;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x140;
      lVar20 = uVar14 - 0x7c;
      lVar23 = uVar14 - 0x6c;
      lVar26 = 2;
      fVar5 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1c) = fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)((int)puVar10 + 0xdc) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar6;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar14 - 0x7c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar23;
      do {
        fVar5 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar12 = (int)lVar23;
        lVar16 = lVar16 + 0x10;
        lVar23 = lVar23 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar27 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar27) goto LAB_004b3314;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar25 + 0x118);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x1c,0x4b2d60);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x118,uVar25
                         );
      *(undefined4 *)((int)pvVar9 + 0x118U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = FastDecTimerS32(uVar25 + 0x11c);
  if (iVar18 != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,300.0);
    uVar19 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x11c) = uVar19;
    dVar32 = (double)(moby->rotation).z;
    dVar27 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar30 = 0.01745329238474369;
    dVar27 = (double)FastWrapRot((float)dVar32,(float)(dVar27 * 0.01745329238474369));
    dVar32 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar27,(float)(dVar32 * dVar30),(float *)((int)pvVar9 + 0x100));
    *(float *)((int)pvVar9 + 0x100) = *(float *)((int)pvVar9 + 0x100) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x104) = *(float *)((int)pvVar9 + 0x104) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x108) = *(float *)((int)pvVar9 + 0x108) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x118) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x100);
    fVar3 = *(float *)((int)pvVar9 + 0x104);
    fVar5 = *(float *)((int)pvVar9 + 0x108);
  }
  else {
    dVar34 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar33 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar31 = (double)fVar3;
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  dVar30 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar33) - ABS(dVar31));
  dVar32 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar27 = ABS(dVar31);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar29 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (0.0 < dVar27) {
    lVar16 = uVar14 - 0x140;
    lVar23 = uVar14 - 0x8c;
    lVar20 = uVar14 - 0x9c;
    lVar26 = 2;
    fVar5 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x18) = fVar5;
    *(float *)(puVar10 + 0x17) = fVar5;
    *(float *)((int)puVar10 + 0xbc) = fVar5;
    *(float *)((int)puVar10 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0x9c;
    pfVar21 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    lVar16 = lVar17;
    dVar27 = dVar32;
    do {
      iVar18 = (int)lVar16;
      iVar12 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar28 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar29 = (double)FastDiffRots(dVar28,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar30;
  fVar2 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)));
  dVar31 = ABS((double)fVar2);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)(puVar10 + 0xf) = (float)(dVar31 - ABS(dVar30));
  uVar15 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar32 < 0.0) {
    dVar27 = ABS(dVar30);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar32 < dVar27) {
    lVar16 = uVar14 - 0x140;
    lVar20 = uVar14 - 0xbc;
    lVar23 = uVar14 - 0xac;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x14) = fVar5;
    *(float *)(puVar10 + 0x13) = fVar5;
    *(float *)((int)puVar10 + 0x9c) = fVar5;
    *(float *)((int)puVar10 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar6;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0xbc;
    pfVar21 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      iVar12 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar32 = -dVar32;
  dVar27 = 1.5707963705062866;
  if ((dVar29 <= 1.5707963705062866) && (dVar27 = dVar29, dVar29 < -1.5707963705062866)) {
    dVar27 = -1.5707963705062866;
  }
  dVar30 = 0.5235987901687622;
  if ((dVar32 <= 0.5235987901687622) && (dVar30 = dVar32, dVar32 < -0.5235987901687622)) {
    dVar30 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0x68) = (float)(dVar27 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 100) = (float)dVar30;
  *(float *)((int)pvVar9 + 0xe8) = (float)(dVar27 * 0.4000000059604645);
LAB_004b3868:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0x70) = 0x40300000;
  }
  dVar27 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar25,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * dVar27),moby,uVar25 + 0x80,1);
  return;
}


