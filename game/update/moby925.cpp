// game/update/moby925.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4b89c8-0x4b9780
#include "game/update/moby925.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04b89c8 (0x14 bytes)
void M925_004b89c8(void)

{
  DAT_008f46d4 = 0x10000;
  return;
}


// 0x04b89e0 (0xf4 bytes)
// strings: 0096c074: 'None'

void M925_004b89e0(int param_1)

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
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x04b8b48 (0xc38 bytes)
// inlined: FastAtan2 @0x4b8fd8, FastAtan2 @0x4b9384, FastAtan2 @0x4b9538
// strings: 0096c074: 'None' | 00658c94: 'Shifty Salesman'

/* Moby 925 */

void UpdateMoby_925(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  gameMode_t gVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar18;
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
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar25 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar24 = &DAT_0095cd50;
    sVar22 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar24[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar24[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
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
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 40.0)) {
    MB_SetZBoundsFromGround(lVar14);
    moby->shadow = ' ';
  }
  if (moby->state == 0) {
    if (UnlockableItems.ryno != '\0') {
      DeleteMoby(moby);
      return;
    }
    (moby->pos).z = (moby->pos).z + 0.5;
    dVar27 = (double)GetGroundZ(lVar14 + 0x10,0);
    (moby->pos).z = (float)dVar27;
    *(char **)((int)pvVar8 + 0x20) = "Shifty Salesman";
    moby->state = '\x01';
    FUN_004d3720(lVar14,uVar25);
  }
  else if (moby->state < 2) {
    iVar18 = FUN_004d3870(lVar14,uVar25);
    if (iVar18 != 0) {
      MB_SetPointAheadOfMoby(0x4000000000000000,lVar14);
    }
    if ((*(short *)((int)pvVar8 + 4) == 3) || (*(short *)((int)pvVar8 + 4) == 4)) {
      MB_UnlockItem(0x17,1);
      MB_UnlockTrophy(ULTIMATE_ANIMAL);
      MB_ToastMessage(0x1396,0xffffffffffffffff);
      memcard_Save(0,-1);
      DeleteMoby(moby);
      return;
    }
    dVar27 = 10.5;
    uVar1 = moby->animationId;
    if (uVar1 == '\0') {
      iVar18 = FastDecTimerS32(uVar25 + 0x154);
      uVar1 = moby->animationId;
      if (iVar18 != 0) {
        dVar28 = (double)MB_randRangeFloat(1200.0,2400.0);
        uVar19 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar8 + 0x154) = uVar19;
        if (moby->animationId != '\x01') {
          puVar9[0x1f] = (longlong)(int)((double)animationSpeed * dVar27);
          MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar9 + 0xfc));
        }
        goto LAB_004b8ec0;
      }
    }
    if ((uVar1 == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
      puVar9[0x1f] = (longlong)(int)((double)animationSpeed * dVar27);
      MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
  }
LAB_004b8ec0:
  dVar27 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b96dc;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b9188:
    if (*(int *)((int)pvVar8 + 0x158) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x158) = 0;
      *(float *)((int)pvVar8 + 0x140) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x144) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x148) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x14c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar13 - 0x150;
      lVar20 = uVar13 - 0x8c;
      lVar23 = uVar13 - 0x7c;
      lVar26 = 2;
      fVar5 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1c) = fVar5;
      *(float *)(puVar9 + 0x1b) = fVar5;
      *(float *)((int)puVar9 + 0xdc) = fVar5;
      *(float *)((int)puVar9 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar6;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar5;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar5 * fVar6;
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
      lVar23 = uVar13 - 0x8c;
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
        iVar11 = (int)lVar23;
        lVar16 = lVar16 + 0x10;
        lVar23 = lVar23 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_004b9188;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar25 + 0x158);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x30,0x4b8ad4);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x158,uVar25
                         );
      *(undefined4 *)((int)pvVar8 + 0x158U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = FastDecTimerS32(uVar25 + 0x15c);
  if (iVar18 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,300.0);
    uVar19 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x15c) = uVar19;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar8 + 0x140));
    *(float *)((int)pvVar8 + 0x140) = *(float *)((int)pvVar8 + 0x140) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x144) = *(float *)((int)pvVar8 + 0x144) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x148) = *(float *)((int)pvVar8 + 0x148) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x158) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x140);
    fVar3 = *(float *)((int)pvVar8 + 0x144);
    fVar5 = *(float *)((int)pvVar8 + 0x148);
  }
  else {
    dVar27 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar34 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar32 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar31 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar16 = uVar13 - 0x150;
    lVar23 = uVar13 - 0x9c;
    lVar20 = uVar13 - 0xac;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)((int)puVar9 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar5;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5 * fVar6;
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
    lVar23 = uVar13 - 0xac;
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
    dVar28 = dVar33;
    do {
      iVar18 = (int)lVar16;
      iVar11 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar30 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar31;
  fVar2 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar16 = uVar13 - 0x150;
    lVar20 = uVar13 - 0xcc;
    lVar23 = uVar13 - 0xbc;
    lVar26 = 2;
    fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar5;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar6;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar5 * fVar6;
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
    lVar23 = uVar13 - 0xcc;
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
      iVar11 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xa8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar8 + 0xa4) = (float)dVar31;
  *(float *)((int)pvVar8 + 0x128) = (float)(dVar28 * 0.4000000059604645);
LAB_004b96dc:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar27),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),lVar14,uVar25 + 0x40,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar27),
             (double)(float)((double)DAT_0071f40c * dVar28),lVar14,uVar25 + 0xc0,1);
  return;
}


