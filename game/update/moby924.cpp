// game/update/moby924.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4b7b74-0x4b89c8
#include "game/update/moby924.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04b7b74 (0x14 bytes)
void M924_004b7b74(void)

{
  DAT_008f4664 = 0x10000;
  return;
}


// 0x04b7b88 (0xf4 bytes)
// strings: 0096c074: 'None'

void M924_004b7b88(int param_1)

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


// 0x04b7ce0 (0xce8 bytes)
// inlined: FastAtan2 @0x4b8220, FastAtan2 @0x4b85cc, FastAtan2 @0x4b8780
// strings: 0096c074: 'None' | 00658c7c: 'Scrap Merchant'

/* Moby 924 */

void UpdateMoby_924(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  gameMode_t gVar14;
  ulonglong uVar15;
  int iVar19;
  ulonglong uVar16;
  undefined4 uVar20;
  longlong lVar17;
  longlong lVar18;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
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
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x150;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar15;
  puVar11[0x2c] = in_LR;
  puVar11[0x25] = in_f27;
  puVar11[0x26] = in_f28;
  puVar11[0x27] = in_f29;
  puVar11[0x28] = in_f30;
  puVar11[0x29] = in_f31;
  puVar11[0x24] = unaff_r31;
  puVar11[0x23] = unaff_r30;
  gVar14 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar11[0x22] = unaff_r29;
  puVar11[0x21] = unaff_r28;
  puVar11[0x20] = unaff_r27;
  puVar11[0x1f] = unaff_r26;
  if ((gVar14 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar19 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar25[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar19 = iVar19 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar19 < sVar23);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_SeenPlanets.Quartu != 0) {
        DeleteMoby(moby);
        return;
      }
      uVar8 = moby->uid;
      if (((&g_Checkpoint.objState[0])[(short)uVar8] != '\0') ||
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2))
          & 1 << (uVar8 & 0x1f)) != 0)) {
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar9 + 0x44) == -1) {
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar9 + 0x48) == -1) {
        DeleteMoby(moby);
        return;
      }
      *(char **)((int)pvVar9 + 0x20) = "Scrap Merchant";
      FUN_004d3720(moby,uVar26);
      moby->state = '\x01';
      *(undefined1 *)((int)pvVar9 + 8) = 1;
    }
    else {
      if ((*(char *)((int)pvVar9 + 8) == '\x01') &&
         (iVar19 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x40)), iVar19 != 0))
      {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
          SetLevelFlag();
          SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x44)].pos,
                     (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x44)].rot);
        }
        uVar20 = 0x437f0000;
      }
      else {
        uVar20 = 0x40400000;
      }
      *(undefined4 *)((int)pvVar9 + 0xc) = uVar20;
      iVar19 = FUN_004d3870(moby,uVar26);
      if (iVar19 != 0) {
        iVar19 = *(int *)((int)pvVar9 + 0x48);
        g_SceneHeroWarpPending = 1;
        g_SceneHeroWarpPos.x = Cuboids[iVar19].pos.x;
        g_SceneHeroWarpPos.y = Cuboids[iVar19].pos.y;
        g_SceneHeroWarpPos.z = Cuboids[iVar19].pos.z;
        g_SceneHeroWarpPos.w = Cuboids[iVar19].pos.w;
        g_SceneHeroWarpRot.w = 0;
        g_SceneHeroWarpRot.y = 0;
        g_SceneHeroWarpRot.x = 0;
        g_SceneHeroWarpRot.z = Cuboids[iVar19].rot.z;
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if ((g_gameMode != GAME_MODE_SCENE) && (moby->state = '\x01', *(short *)((int)pvVar9 + 4) == 4))
    {
      MB_UnlockLevel(Quartu);
      MB_ToastMessageByIndex(0xf);
      uVar8 = moby->uid;
      iVar13 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      uVar10 = *(uint *)(&g_CheckpointBits + iVar19);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar13) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar13) | 1 << (uVar8 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar19) = uVar10 | 1 << (uVar8 & 0x1f);
      memcard_Save(0,-1);
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 < 4) {
    DeleteMoby(moby);
    return;
  }
  dVar35 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b8924;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b83d0:
    if (*(int *)((int)pvVar9 + 0x160) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x160) = 0;
      *(float *)((int)pvVar9 + 0x150) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x15c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar11 + 0x11) = fVar3;
    *(float *)((int)puVar11 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar11 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar17 = uVar15 - 0x140;
      lVar21 = uVar15 - 0x7c;
      lVar24 = uVar15 - 0x6c;
      lVar27 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x1c) = fVar5;
      *(float *)(puVar11 + 0x1b) = fVar5;
      *(float *)((int)puVar11 + 0xdc) = fVar5;
      *(float *)((int)puVar11 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar6;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar5;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar5 * fVar5;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar15 - 0x7c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar13 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar19 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_004b83d0;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar26 + 0x160);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x20,0x4b7c7c);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x160,uVar26
                         );
      *(undefined4 *)((int)pvVar9 + 0x160U & 0xfffffffc) = uVar20;
    }
  }
  iVar19 = FastDecTimerS32(uVar26 + 0x164);
  if (iVar19 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,300.0);
    uVar20 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x164) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x150));
    *(float *)((int)pvVar9 + 0x150) = *(float *)((int)pvVar9 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x154) = *(float *)((int)pvVar9 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x158) = *(float *)((int)pvVar9 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x160) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x150);
    fVar3 = *(float *)((int)pvVar9 + 0x154);
    fVar5 = *(float *)((int)pvVar9 + 0x158);
  }
  else {
    dVar35 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar34 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar32 = (double)fVar3;
  *(float *)((int)puVar11 + 0x7c) = fVar2;
  *(float *)(puVar11 + 0x10) = fVar3;
  dVar31 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar16 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar30 = ABS((double)*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar17 = uVar15 - 0x140;
    lVar24 = uVar15 - 0x8c;
    lVar21 = uVar15 - 0x9c;
    lVar27 = 2;
    fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x18) = fVar5;
    *(float *)(puVar11 + 0x17) = fVar5;
    *(float *)((int)puVar11 + 0xbc) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar5;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar5 * fVar5;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar15 - 0x9c;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar17;
      iVar13 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar30 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0x74) = (float)dVar31;
  fVar2 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar2);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)(puVar11 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar16 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar17 = uVar15 - 0x140;
    lVar21 = uVar15 - 0xbc;
    lVar24 = uVar15 - 0xac;
    lVar27 = 2;
    fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x14) = fVar5;
    *(float *)(puVar11 + 0x13) = fVar5;
    *(float *)((int)puVar11 + 0x9c) = fVar5;
    *(float *)((int)puVar11 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar6;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar5;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
      iVar19 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar15 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar17 = 2;
    do {
      iVar19 = (int)lVar18;
      iVar13 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
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
  *(float *)((int)pvVar9 + 0xb8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 0xb4) = (float)dVar31;
  *(float *)((int)pvVar9 + 0x138) = (float)(dVar28 * 0.4000000059604645);
LAB_004b8924:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x50,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0xd0,1);
  return;
}


