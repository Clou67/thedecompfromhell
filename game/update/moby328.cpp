// game/update/moby328.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3431c8-0x344134
#include "game/update/moby328.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x03431c8 (0x14 bytes)
void M328_003431c8(void)

{
  DAT_0083facc = 0x10000;
  return;
}


// 0x03431e0 (0xf8 bytes)
// strings: 0096c074: 'None'

void M328_003431e0(int param_1)

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
          AttachManipulator((MobyInstance *)puVar3[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_0083fb00;
          DAT_00a1bfa4 = DAT_0083fb00;
          DAT_00a1bfa8 = DAT_0083fb00;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x0343330 (0xe04 bytes)
// inlined: FastAtan2 @0x343754, FastAtan2 @0x343d3c, FastAtan2 @0x343ef0
// strings: 0096c074: 'None'

/* Moby 328 */

void UpdateMoby_328(MobyInstance *moby)

{
  byte bVar1;
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
  bool bVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
  MobyInstance *pMVar20;
  longlong lVar16;
  longlong lVar17;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  double in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x160;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = (ulonglong)in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar26 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  puVar9[0x20] = unaff_r25;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar25[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_0083fb00;
          DAT_00a1bfa4 = DAT_0083fb00;
          DAT_00a1bfa8 = DAT_0083fb00;
          sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar18 = iVar18 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar18 < sVar23);
    }
  }
  if (g_KeyLevelFlags.piece<1132,4>() == 0) {
    if (moby->animationId != '\x01') {
      MB_SetAnimation(moby,1,0,2);
    }
  }
  else if (moby->animationId != '\0') {
    MB_SetAnimation(moby,0,0,2);
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
    FUN_004d3720(moby,uVar26 + 0x20);
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x3fd9999a;
    MB_SetZBoundsFromPos(moby);
    if (UnlockableItems.hydroPack != '\0') {
      *(undefined2 *)((int)pvVar8 + 0x56) = 0xffff;
    }
  }
  else if (bVar1 < 2) {
    if ((UnlockableItems.hydroPack == '\0') &&
       (iVar18 = FUN_004d3870(moby,uVar26 + 0x20), iVar18 != 0)) {
      MB_SetPointAheadOfMoby(0x400428f5c0000000,moby);
      moby->state = '\x02';
      moby->unk58 = 0.0;
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->unk58 = 1.0;
    SetLevelFlag(moby->levelFlagIdx);
    iVar18 = *(int *)((int)pvVar8 + 0x160);
    if (iVar18 != -1) {
      SetSpawnPoint((Vec4 *)&Cuboids[iVar18].pos,(Vec4 *)&Cuboids[iVar18].rot);
    }
    moby->state = '\x01';
    if (*(short *)((int)pvVar8 + 0x24) == 2) {
      MB_UnlockItem(4,0);
      MB_ToastMessage(0x2ee6,0xffffffffffffffff);
      iVar18 = *(int *)((int)pvVar8 + 0x160);
      if (iVar18 != -1) {
        SetSpawnPoint((Vec4 *)&Cuboids[iVar18].pos,(Vec4 *)&Cuboids[iVar18].rot);
      }
      memcard_Save(0,-1);
    }
  }
  bVar12 = false;
  dVar35 = 0.019999999552965164;
  dVar28 = in_f30;
  dVar33 = in_f30;
  if (moby->animationId != '\0') goto LAB_00343a30;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  bVar12 = true;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_00343904:
    if (*(int *)((int)pvVar8 + 0x184) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x184) = 0;
      *(float *)((int)pvVar8 + 0x170) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x174) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x178) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x17c) = DAT_00969dbc;
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
      lVar16 = uVar14 - 0x150;
      lVar24 = uVar14 - 0x7c;
      lVar21 = uVar14 - 0x8c;
      lVar27 = 2;
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
        iVar18 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x8c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar11 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_00343904;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar26 + 0x184);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x1c,0x3432d8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,uVar26
                         );
      *(undefined4 *)((int)pvVar8 + 0x184U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = FastDecTimerS32(uVar26 + 0x188);
  if (iVar18 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,300.0);
    uVar19 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x188) = uVar19;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar8 + 0x170));
    *(float *)((int)pvVar8 + 0x170) = *(float *)((int)pvVar8 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x174) = *(float *)((int)pvVar8 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x178) = *(float *)((int)pvVar8 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x184) == 0) {
    dVar33 = (double)*(float *)((int)pvVar8 + 0x170);
    dVar28 = (double)*(float *)((int)pvVar8 + 0x174);
    in_f30 = (double)*(float *)((int)pvVar8 + 0x178);
  }
  else {
    dVar33 = (double)g_heroCGPos;
    dVar28 = (double)DAT_00969db4;
    in_f30 = (double)DAT_00969db8;
    dVar35 = 0.03999999910593033;
  }
LAB_00343a30:
  if (g_KeyLevelFlags.piece<1132,4>() == 0) {
    iVar18 = *(int *)((int)pvVar8 + 0x164);
    if (iVar18 == 0) {
      pMVar20 = CreateMoby(0x4c1);
      *(MobyInstance **)((int)pvVar8 + 0x164) = pMVar20;
      if (pMVar20 != (MobyInstance *)0x0) {
        pMVar20->drawDistance = moby->drawDistance;
        *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 1;
        iVar18 = *(int *)((int)pvVar8 + 0x164);
        *(f32 *)(iVar18 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar18 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar18 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar18 + 0x1c) = (moby->pos).w;
        iVar18 = *(int *)((int)pvVar8 + 0x164);
        *(f32 *)(iVar18 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar18 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar18 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar18 + 0x4c) = (moby->rotation).w;
        UpdateMobyTransform(*(MobyInstance **)((int)pvVar8 + 0x164));
        *(undefined2 *)(*(int *)((int)pvVar8 + 0x164) + 0x34) = 0;
        MB_SetAnimation(*(undefined4 *)((int)pvVar8 + 0x164),1,0,2);
      }
    }
    else if (g_gameMode == GAME_MODE_SCENE) {
      *(ushort *)(iVar18 + 0x34) = *(ushort *)(iVar18 + 0x34) | 1;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 0;
    }
    else {
      *(ushort *)(iVar18 + 0x34) = *(ushort *)(iVar18 + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 1;
    }
    if (*(int *)((int)pvVar8 + 0x168) == 0) {
      pMVar20 = CreateMoby(EDWINAS_WELDING_SHIELD);
      *(MobyInstance **)((int)pvVar8 + 0x168) = pMVar20;
      if (pMVar20 != (MobyInstance *)0x0) {
        pMVar20->drawDistance = moby->drawDistance;
        *(undefined1 *)(*(int *)((int)pvVar8 + 0x168) + 0x31) = 1;
        iVar18 = *(int *)((int)pvVar8 + 0x168);
        *(f32 *)(iVar18 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar18 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar18 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar18 + 0x1c) = (moby->pos).w;
        iVar18 = *(int *)((int)pvVar8 + 0x168);
        *(f32 *)(iVar18 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar18 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar18 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar18 + 0x4c) = (moby->rotation).w;
        UpdateMobyTransform(*(MobyInstance **)((int)pvVar8 + 0x168));
      }
    }
    else if (g_gameMode == GAME_MODE_SCENE) {
      *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) | 1;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 0;
      *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) | 1;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x168) + 0x31) = 0;
    }
    else {
      *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 1;
      *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x168) + 0x31) = 1;
    }
  }
  else {
    if (*(MobyInstance **)((int)pvVar8 + 0x168) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar8 + 0x168));
      *(undefined4 *)((int)pvVar8 + 0x168) = 0;
    }
    if (*(MobyInstance **)((int)pvVar8 + 0x164) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar8 + 0x164));
      *(undefined4 *)((int)pvVar8 + 0x164) = 0;
    }
  }
  if (bVar12) {
    fVar2 = (float)(dVar33 - (double)(moby->pos).x);
    dVar34 = (double)fVar2;
    fVar3 = (float)(dVar28 - (double)(moby->pos).y);
    dVar32 = (double)fVar3;
    *(float *)((int)puVar9 + 0x7c) = fVar2;
    *(float *)(puVar9 + 0x10) = fVar3;
    dVar31 = (double)(float)(in_f30 - (double)((moby->pos).z + 1.0));
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
      lVar16 = uVar14 - 0x150;
      lVar24 = uVar14 - 0x9c;
      lVar21 = uVar14 - 0xac;
      lVar27 = 2;
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
        iVar18 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xac;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      dVar28 = dVar33;
      do {
        iVar18 = (int)lVar16;
        iVar11 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xb4)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
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
      lVar16 = uVar14 - 0x150;
      lVar21 = uVar14 - 0xcc;
      lVar24 = uVar14 - 0xbc;
      lVar27 = 2;
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
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xcc;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar11 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x94)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
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
    *(float *)((int)pvVar8 + 0xc4) = (float)dVar31;
    *(float *)((int)pvVar8 + 200) = (float)(dVar28 * 0.5);
    *(float *)((int)pvVar8 + 0x148) = (float)(dVar28 * 0.5);
  }
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x60,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0xe0,0);
  return;
}


