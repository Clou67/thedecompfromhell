// game/update/moby203.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x2e68e0-0x2ea750
// shared update function UpdateMoby_{203_1900}; registered for oClasses 203, 1900
#include <stdlib.h>
#include "game/update/moby203.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby31.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02e68e0 (0x61c bytes)
// inlined: FastAtan2 @0x2e69e4, FastAtan2 @0x2e6b80
void M1900_002e68e0(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r26;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x240;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x4a] = in_LR;
  puVar10[0x46] = in_f30;
  puVar10[0x47] = in_f31;
  puVar10[0x45] = unaff_r31;
  gVar13 = g_gameMode;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x44] = unaff_r30;
  puVar10[0x43] = unaff_r29;
  puVar10[0x42] = unaff_r28;
  puVar10[0x41] = unaff_r27;
  puVar10[0x40] = unaff_r26;
  if (gVar13 != GAME_MODE_SCENE) {
    uVar20 = 0;
    do {
      uVar8 = *(uint *)(iVar7 + 0x34);
      fVar6 = ABS(*(float *)(iVar7 + 0x34));
      fVar3 = SQRT(*(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30) +
                   *(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38));
      fVar2 = ABS(fVar3);
      *(float *)((int)puVar10 + 0x1a4) = fVar3;
      *(float *)(puVar10 + 0x35) = fVar2 - fVar6;
      dVar25 = 0.0;
      dVar26 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x1a4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x35) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar10 + 0x1a4));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar6 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar22 = dVar25;
      if (0.0 < fVar3) {
        lVar19 = uVar14 - 0x230;
        lVar16 = uVar14 - 0x74;
        lVar18 = uVar14 - 100;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x3b) = fVar3;
        *(float *)(puVar10 + 0x3a) = fVar3;
        *(float *)((int)puVar10 + 0x1d4) = fVar3;
        *(float *)((int)puVar10 + 0x1cc) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x3a) = *(float *)(puVar10 + 0x3a) * fVar6;
        *(float *)((int)puVar10 + 0x1d4) = *(float *)((int)puVar10 + 0x1d4) * fVar3;
        *(float *)(puVar10 + 0x3b) = *(float *)(puVar10 + 0x3b) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1bc) * fVar3 * fVar3;
          iVar11 = (int)lVar16;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x74;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1cc) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar11 + 0x1cc)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar22 = (double)FastWrapRot((float)-dVar22,1.5707964);
      *(float *)(puVar10 + 0xe) = (float)dVar22;
      uVar8 = *(uint *)(iVar7 + 0x38);
      uVar9 = *(uint *)(iVar7 + 0x30);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x38));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x30));
      *(float *)(puVar10 + 0x34) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x34) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      dVar24 = dVar23;
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar24 = dVar22;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      if (dVar25 < dVar24) {
        lVar19 = uVar14 - 0x230;
        lVar18 = uVar14 - 0x84;
        lVar16 = uVar14 - 0x94;
        lVar21 = 2;
        fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x37) = fVar2;
        *(float *)(puVar10 + 0x36) = fVar2;
        *(float *)((int)puVar10 + 0x1b4) = fVar2;
        *(float *)((int)puVar10 + 0x1ac) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x36) = *(float *)(puVar10 + 0x36) * fVar5;
        *(float *)((int)puVar10 + 0x1b4) = *(float *)((int)puVar10 + 0x1b4) * fVar2;
        *(float *)(puVar10 + 0x37) = *(float *)(puVar10 + 0x37) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x19c) * fVar2 * fVar2;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x1ac) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          iVar12 = (int)lVar18;
          lVar19 = lVar19 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0x1ac)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar6 + fVar3);
      }
      *(float *)((int)puVar10 + 0x74) = (float)dVar25;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      iVar11 = worldUpdateTime;
      puVar10[0x3e] = (longlong)(int)(animationSpeed * 180.5);
      dVar25 = (double)FastIntToDouble
                                 (iVar11 - (iVar11 / *(int *)((int)puVar10 + 500)) *
                                           *(int *)((int)puVar10 + 500));
      dVar26 = (double)FastAddRots
                                 ((float)(dVar25 * 6.2831854820251465) / (animationSpeed * 180.0));
      dVar22 = 1.0;
      dVar25 = dVar22;
      if ((uVar20 & 1) != 0) {
        dVar25 = -1.0;
      }
      *(undefined4 *)(puVar10 + 0x11) = 0;
      *(undefined4 *)((int)puVar10 + 0x8c) = 0;
      *(float *)((int)puVar10 + 0x84) = (float)(dVar26 * dVar25);
      FastEulerToMtx1(uVar14 - 0x170,uVar14 - 0x1c0);
      lVar19 = uVar14 - 0x1b0;
      FastEulerToMtx1(lVar19,uVar14 - 0x1d0);
      FastVecMtx4Mul(lVar19,lVar19,uVar14 - 0x170);
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)((int)puVar10 + 0xc4) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)(puVar10 + 0x19) = *(undefined4 *)(iVar7 + 0x28);
      uVar4 = *(undefined4 *)(iVar7 + 0x2c);
      *(undefined4 *)(puVar10 + 0x2a) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xcc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x154) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x2b) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x15c) = 0x80808080;
      uVar15 = GetEffectTex((ZERO_MASK((uVar20 & 1))) + 0x12);
      puVar10[0x31] = uVar15;
      uVar15 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
      puVar10[0x32] = uVar15;
      uVar15 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
      puVar10[0x30] = uVar15;
      uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
      puVar10[0x33] = uVar15;
      *(undefined4 *)((int)puVar10 + 0x114) = 0;
      *(undefined4 *)(puVar10 + 0x22) = 0xbf800000;
      *(float *)(puVar10 + 0x23) = (float)dVar22;
      *(float *)((int)puVar10 + 0x11c) = (float)dVar22;
      *(float *)(puVar10 + 0x24) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x124) = 0;
      *(float *)(puVar10 + 0x25) = (float)dVar22;
      *(float *)((int)puVar10 + 300) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x26) = 0xbf800000;
      *(undefined4 *)((int)puVar10 + 0x134) = 0;
      *(undefined4 *)(puVar10 + 0x27) = 0xbf800000;
      *(float *)((int)puVar10 + 0x13c) = (float)dVar22;
      *(float *)(puVar10 + 0x28) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x144) = 0;
      *(undefined4 *)(puVar10 + 0x29) = 0xbf800000;
      *(float *)((int)puVar10 + 0x14c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      *(float *)((int)puVar10 + 0x164) = (float)dVar22;
      *(float *)(puVar10 + 0x2d) = (float)dVar22;
      *(float *)((int)puVar10 + 0x16c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2e) = 0;
      *(undefined4 *)((int)puVar10 + 0x174) = 0;
      *(float *)(puVar10 + 0x2f) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x17c) = 0;
      FastDrawQuad(uVar14 - 0x130,lVar19,1,EffectTexHeaders,9);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 2);
  }
  return;
}


// 0x02e6f18 (0x210 bytes)
void M1900_002e6f18(MobyInstance *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_r7;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  GPiece<32> local_80;
  
  iVar5 = 0;
  dVar7 = -0.20000000298023224;
  dVar8 = 0.20000000298023224;
  dVar9 = 100000.0;
  dVar10 = 600000.0;
  dVar11 = 0.5;
  uVar12 = 0;
  do {
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    iVar1 = rand();
    iVar2 = rand();
    uVar3 = rand();
    uVar6 = MB_randRangeFloat((float)dVar9,(float)dVar10);
    iVar4 = rand();
    SpawnPart_5
              (uVar6,uVar12,local_80,(longlong)iVar1 + 0x30U & 0x3f,(longlong)iVar2 + 0x20U & 0x3f,
               uVar3 & 0x2f,in_r7,
               (int)(animationSpeed * (float)((double)(longlong)(iVar4 % 0x28 + 10) + dVar11)));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  MB_DeleteMobyFromDynamicGroup(param_1,&DAT_00a51f68);
  DeleteMoby(param_1);
  return;
}


// 0x02e7140 (0x334 bytes)
MobyInstance * FUN_002e7140(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  MobyInstance *pMoby;
  int iVar5;
  int iVar6;
  MobyInstance *pMVar7;
  short sVar8;
  short *psVar9;
  MobyInstance *pMoby_00;
  double dVar10;
  double dVar11;
  
  pMoby = CreateMoby
                    (((ushort)(ZERO_MASK((uint)g_goldWeaponsArray.decoyGlove)) &
                     0xf95f) + GOLD_DECOY);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->state = '\0';
    pMoby->updateDistance = -1;
    pMoby->enabled = '\x01';
    puVar3 = (undefined2 *)pMoby->pVar;
    (pMoby->pos).x = *param_2;
    (pMoby->pos).y = param_2[1];
    (pMoby->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMoby->drawDistance = 0xff;
    (pMoby->pos).w = fVar1;
    *(undefined4 *)(puVar3 + 8) = *param_3;
    *(undefined4 *)(puVar3 + 10) = param_3[1];
    uVar2 = param_3[2];
    *(undefined4 *)(puVar3 + 0x20) = param_1;
    *(undefined4 *)(puVar3 + 0xc) = uVar2;
    uVar2 = param_3[3];
    puVar3[0x22] = 0;
    *(undefined4 *)(puVar3 + 0xe) = uVar2;
    *(undefined4 *)(puVar3 + 0x2a) = 0;
    dVar11 = 1.0;
    pMoby->scale = pMoby->pClass->gScale * (DAT_0071f408 * -0.5 + 1.0);
    dVar10 = (double)FastIntToDouble(g_goldWeaponsArray.decoyGlove);
    *(float *)(puVar3 + 0x24) = (float)(dVar10 + dVar11) * 4.0;
    if (pMoby->animationId != '\0') {
      MB_SetAnimation(pMoby,0,0,(int)(animationSpeed * 0.5));
    }
    pMoby->collision = (ushort *)0x0;
    pMoby->collisionMesh = (float *)0xffffffff;
    dVar10 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    (pMoby->rotation).z = (float)dVar10;
    *(undefined4 *)(puVar3 + 0x2c) = 0;
    *(undefined4 *)(puVar3 + 0x2e) = 0;
    if (5 < DAT_00a51f68) {
      sVar8 = DAT_00a51f68;
      do {
        if (0 < sVar8) {
          pMoby_00 = (MobyInstance *)0x0;
          iVar6 = 1;
          iVar5 = 0;
          psVar9 = &DAT_00a51f68;
          do {
            psVar9 = psVar9 + 1;
            pMVar7 = g_MobyInstance + *psVar9;
            if ((pMVar7 != (MobyInstance *)0x0) &&
               (((pMVar7->oClass == DECOY || (pMVar7->oClass == GOLD_DECOY)) && (pMVar7->state < 5))
               )) {
              iVar4 = *(int *)((int)pMVar7->pVar + 0x54);
              if (iVar5 <= iVar4) {
                iVar5 = iVar4;
                pMoby_00 = pMVar7;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 <= sVar8);
          if (pMoby_00 != (MobyInstance *)0x0) {
            MB_DeleteMobyFromDynamicGroup(pMoby_00,&DAT_00a51f68);
            pMoby_00->state = '\x06';
            sVar8 = DAT_00a51f68;
          }
        }
      } while (5 < sVar8);
    }
    UpdateMobyTransform(pMoby);
    MB_CopyHeroLights(pMoby);
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 0;
    *(undefined1 *)((int)puVar3 + 7) = 0x80;
    puVar3[6] = 4;
    puVar3[7] = 0xf;
    MB_AddMobyToDynamicGroup(pMoby,&DAT_00a51f68,0x1f);
    if ((g_heroInvisible != '\0') || (DAT_0096bd8f != '\0')) {
      pMoby->modeBits = pMoby->modeBits | (UNK_40|DISABLED);
    }
  }
  return pMoby;
}


// 0x02e74a8 (0x71c bytes)
// inlined: FastAtan2 @0x2e789c, FastAtan2 @0x2e7a24
void FUN_002e74a8(float *param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  int iVar19;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x110;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar16;
  puVar9[0x24] = in_LR;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1d] = unaff_r29;
  puVar9[0x1f] = unaff_r31;
  uVar7 = *(uint *)(param_2 + 0x78);
  puVar9[0x1e] = unaff_r30;
  iVar19 = g_standingOnMoby;
  *(undefined4 *)(uVar7 + 0x10) = *param_3;
  *(undefined4 *)(uVar7 + 0x14) = param_3[1];
  *(undefined4 *)(uVar7 + 0x18) = param_3[2];
  *(undefined4 *)(uVar7 + 0x1c) = param_3[3];
  if ((iVar19 != 0) && (iVar19 = MB_GetPlatformParent(), iVar19 != 0)) {
    *(float *)(uVar7 + 0x10) = *(float *)(uVar7 + 0x10) + DAT_00969de0;
    *(float *)(uVar7 + 0x14) = *(float *)(uVar7 + 0x14) + DAT_00969de4;
    *(float *)(uVar7 + 0x18) = *(float *)(uVar7 + 0x18) + DAT_00969de8;
  }
  *(float *)(param_2 + 0x10) = *param_1;
  pMVar15 = g_heroMobyPtr;
  *(float *)(param_2 + 0x14) = param_1[1];
  *(float *)(param_2 + 0x18) = param_1[2];
  *(float *)(param_2 + 0x1c) = param_1[3];
  fVar3 = (pMVar15->pos).x;
  dVar25 = (double)fVar3;
  *(float *)(puVar9 + 0xe) = fVar3;
  fVar4 = (pMVar15->pos).y;
  dVar27 = (double)fVar4;
  fVar3 = (float)((double)param_1[1] - dVar27);
  fVar1 = (float)((double)*param_1 - dVar25);
  fVar5 = param_1[2];
  dVar29 = (double)fVar5;
  fVar2 = (float)(dVar29 - dVar29);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  *(f32 *)(puVar9 + 0xf) = (pMVar15->pos).z;
  *(f32 *)((int)puVar9 + 0x7c) = (pMVar15->pos).w;
  *(float *)(puVar9 + 0xf) = fVar5;
  dVar31 = 0.0;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  fVar5 = (fVar4 + 0.2) / fVar4;
  dVar26 = dVar31;
  if (0.0 - fVar4 < 0.0) {
    dVar26 = (double)(fVar2 * fVar5);
  }
  dVar30 = dVar31;
  if (0.0 - fVar4 < 0.0) {
    dVar30 = (double)(fVar3 * fVar5);
  }
  dVar28 = dVar31;
  if (0.0 - fVar4 < 0.0) {
    dVar28 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar26 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar30 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar5);
  }
  param_1[2] = (float)(dVar26 + dVar29);
  param_1[1] = (float)(dVar30 + dVar27);
  *param_1 = (float)(dVar28 + dVar25);
  iVar19 = CollLine(uVar16 - 0xa0,param_1,0,pMVar15,0);
  if (iVar19 == 0) {
    *(undefined1 *)(param_2 + 0x20) = 2;
  }
  else {
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    *(float *)(param_2 + 0x10) = g_CollOutput.ip.x;
    *(float *)(param_2 + 0x14) = g_CollOutput.ip.y;
    *(float *)(param_2 + 0x18) = g_CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = g_CollOutput.ip.w;
    *(undefined1 *)(uVar7 + 0x10) = 0;
    *(undefined1 *)(uVar7 + 0x11) = 0;
    *(undefined1 *)(uVar7 + 0x12) = 0;
    *(undefined1 *)(uVar7 + 0x13) = 0;
    *(undefined1 *)(uVar7 + 0x14) = 0;
    *(undefined1 *)(uVar7 + 0x15) = 0;
    *(undefined1 *)(uVar7 + 0x16) = 0;
    *(undefined1 *)(uVar7 + 0x17) = 0;
    *(undefined1 *)(uVar7 + 0x18) = 0;
    *(undefined1 *)(uVar7 + 0x19) = 0;
    *(undefined1 *)(uVar7 + 0x1a) = 0;
    *(undefined1 *)(uVar7 + 0x1b) = 0;
    *(undefined1 *)(uVar7 + 0x1c) = 0;
    *(undefined1 *)(uVar7 + 0x1d) = 0;
    *(undefined1 *)(uVar7 + 0x1e) = 0;
    *(undefined1 *)(uVar7 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 0x20) = 4;
    auVar32 = loadVectorLeftIndexed(8,0x2e7474);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar3 = *(float *)(param_2 + 0x48);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = vectorSplatHalfWord(auVar32,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar32,0x44,(ulonglong)uVar7);
    *(undefined2 *)(uVar7 + 0x44) = uVar8;
    fVar5 = g_CollOutput.normal.z;
    fVar4 = g_CollOutput.ip.z;
    fVar1 = fVar3 + 1.5707963;
    fVar2 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar2 = fVar3;
    }
    fVar6 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar6 = fVar1;
    }
    fVar11 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
      fVar11 = fVar2;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
      fVar3 = fVar6;
    }
    fVar1 = fVar11 * fVar11;
    dVar25 = (double)g_CollOutput.normal.z;
    fVar2 = fVar3 * fVar3;
    fVar13 = fVar1 * fVar1 * fVar11;
    fVar6 = fVar2 * fVar2 * fVar3;
    fVar14 = fVar1 * fVar13;
    fVar12 = fVar2 * fVar6;
    fVar11 = fVar1 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar1 * fVar11 * -0.16666657 + fVar11;
    fVar3 = fVar2 * fVar12 * 2.601887e-06 +
            fVar12 * -0.0001980741 + fVar6 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
    fVar1 = g_CollOutput.normal.x * fVar3 + g_CollOutput.normal.y * fVar11;
    dVar27 = (double)fVar1;
    fVar3 = g_CollOutput.normal.y * fVar3 - g_CollOutput.normal.x * fVar11;
    dVar30 = ABS((double)fVar3);
    *(float *)((int)puVar9 + 0x8c) = fVar3;
    *(float *)(param_2 + 0x18) = fVar4;
    fVar3 = SQRT((float)(dVar27 * dVar27 + (double)(float)(dVar25 * dVar25)));
    dVar29 = ABS((double)fVar3);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)(puVar9 + 0x12) = (float)(dVar29 - dVar30);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar9 + 0x11));
    if ((double)*(float *)(puVar9 + 0x12) - dVar31 < 0.0) {
      dVar26 = dVar30;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar30 = ABS((double)*(float *)((int)puVar9 + 0x8c));
    if ((double)*(float *)(puVar9 + 0x12) - dVar31 < 0.0) {
      dVar30 = dVar29;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    dVar29 = dVar31;
    if (dVar31 < dVar26) {
      lVar17 = uVar16 - 0x100;
      lVar21 = uVar16 - 0x5c;
      lVar22 = uVar16 - 0x4c;
      lVar24 = 2;
      fVar4 = (float)(dVar30 - dVar26) / (float)(dVar30 + dVar26);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x18) = fVar4;
      *(float *)(puVar9 + 0x17) = fVar4;
      *(float *)((int)puVar9 + 0xbc) = fVar4;
      *(float *)((int)puVar9 + 0xb4) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
      *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
      *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar4 * fVar4;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar16 - 0x5c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar22;
      do {
        fVar4 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      dVar26 = dVar31;
      do {
        iVar19 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar10 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar19 + 0xb4)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar2);
    }
    dVar25 = ABS(dVar25);
    *(float *)(uVar7 + 0x4c) = (float)-dVar29;
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = (float)(dVar25 - ABS(dVar27));
    uVar20 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    dVar26 = dVar25;
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar31 < 0.0) {
      dVar26 = ABS(dVar27);
    }
    dVar27 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar31 < 0.0) {
      dVar27 = dVar25;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar31 < dVar26) {
      lVar17 = uVar16 - 0x100;
      lVar21 = uVar16 - 0x7c;
      lVar22 = uVar16 - 0x6c;
      lVar24 = 2;
      fVar2 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar9 + 0x14) = fVar2;
      *(float *)(puVar9 + 0x13) = fVar2;
      *(float *)((int)puVar9 + 0x9c) = fVar2;
      *(float *)((int)puVar9 + 0x94) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar4;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar2;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar16 - 0x7c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar22;
      do {
        fVar2 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar10 = (int)lVar22;
        lVar18 = lVar18 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0x94)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar3);
    }
    *(float *)(uVar7 + 0x50) = (float)dVar31;
    dVar27 = (double)*(float *)(param_2 + 0x40);
    dVar26 = (double)FastDiffRots(-dVar29,dVar27);
    dVar25 = 0.10000000149011612;
    dVar26 = (double)FastWrapRot
                               ((float)dVar27,(float)((double)(DAT_0071f408 * 0.1) * dVar26));
    *(float *)(param_2 + 0x40) = (float)dVar26;
    dVar27 = (double)*(float *)(param_2 + 0x44);
    dVar26 = (double)FastDiffRots((double)*(float *)(uVar7 + 0x50),dVar27);
    dVar26 = (double)FastWrapRot
                               ((float)dVar27,
                                (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar26));
    *(float *)(param_2 + 0x44) = (float)dVar26;
  }
  return;
}


// 0x02e7c08 (0xa84 bytes)
// inlined: FastAtan2 @0x2e7d6c, FastAtan2 @0x2e7f64
undefined8 M1900_002e7c08(int param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  PlayerState PVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar23;
  undefined8 uVar22;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  double dVar33;
  ulonglong in_f23;
  double dVar34;
  ulonglong in_f24;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar29 = uVar20 - 0x1b0;
  puVar13 = (ulonglong *)lVar29;
  *puVar13 = uVar20;
  puVar13[0x38] = in_LR;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x25] = unaff_r25;
  puVar13[0x2b] = unaff_r31;
  puVar13[0x26] = unaff_r26;
  puVar13[0x28] = unaff_r28;
  bVar17 = false;
  puVar13[0x2a] = unaff_r30;
  puVar13[0x24] = unaff_r24;
  PVar19 = g_heroState;
  puVar13[0x29] = unaff_r29;
  puVar13[0x27] = unaff_r27;
  if ((PVar19 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    return 0;
  }
  fVar4 = (param_2->pos).x;
  fVar5 = (param_2->pos).y;
  *(f32 *)(puVar13 + 0x10) = fVar4;
  fVar6 = (param_2->pos).z;
  *(f32 *)((int)puVar13 + 0x84) = fVar5;
  fVar7 = (param_2->pos).w;
  uVar3 = param_2->state;
  *(f32 *)(puVar13 + 0x11) = fVar6;
  *(f32 *)((int)puVar13 + 0x8c) = fVar7;
  fVar2 = DAT_0096a350;
  if (uVar3 == '\x01') {
    fVar8 = ABS(DAT_0096a350);
    fVar10 = ABS(DAT_0096a354);
    dVar42 = -0.3619680106639862;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)(puVar13 + 0x19) = fVar8 - fVar10;
    dVar33 = 0.0;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar8;
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar10;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar10 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar30 = dVar33;
    if (0.0 < fVar2) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xb4;
      lVar25 = uVar20 - 0xc4;
      lVar28 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar10 = fVar2 * fVar2;
      *(float *)(puVar13 + 0x1f) = fVar2;
      *(float *)(puVar13 + 0x1e) = fVar2;
      *(float *)((int)puVar13 + 0xf4) = fVar2;
      *(float *)((int)puVar13 + 0xec) = fVar2;
      fVar2 = fVar10 * fVar10;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar10;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar2;
      *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar2 * fVar10;
      do {
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xdc) * fVar2 * fVar2;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar2 * fVar2;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xc4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar2 = *pfVar26;
        fVar10 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xec) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar10;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0xec)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar9 + fVar8);
    }
    dVar30 = (double)FastWrapRot(-0.361968,(float)dVar30);
    fVar8 = DAT_0096a350;
    dVar41 = 3.141592502593994;
    fVar2 = (float)(dVar30 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar32 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar30 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    fVar10 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar10 = fVar2;
    }
    *(float *)((int)puVar13 + 0xc4) = (float)(dVar32 - dVar30);
    fVar9 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
      fVar9 = fVar10;
    }
    fVar16 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar16 * fVar16 * fVar9;
    fVar10 = fVar16 * fVar2;
    dVar31 = dVar32;
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar31 = dVar30;
    }
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar30 = dVar32;
    }
    *(float *)(puVar13 + 0xe) =
         (fVar16 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar2 * 0.0083330255 + fVar16 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (dVar33 < dVar31) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xd4;
      lVar25 = uVar20 - 0xe4;
      lVar28 = 2;
      fVar8 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
      fVar9 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x1b) = fVar8;
      *(float *)(puVar13 + 0x1a) = fVar8;
      *(float *)((int)puVar13 + 0xd4) = fVar8;
      *(float *)((int)puVar13 + 0xcc) = fVar8;
      fVar8 = fVar9 * fVar9;
      *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar9;
      *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar8;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar8 * fVar9;
      do {
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar8 * fVar8;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar8 * fVar8;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar8 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xcc) * fVar8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0xcc)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar33 + dVar34) * fVar10 + fVar2);
    }
    dVar34 = (double)FastWrapRot((float)dVar42,(float)dVar33);
    fVar2 = g_heroPosition.y;
    dVar33 = (double)(float)(dVar41 - dVar34);
    if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
      dVar33 = dVar34;
    }
    dVar30 = (double)(float)(dVar40 - dVar34);
    if ((double)(float)(dVar40 - dVar34) - dVar33 < 0.0) {
      dVar30 = dVar33;
    }
    fVar10 = *(float *)(puVar13 + 0xe) + g_heroPosition.x;
    *(undefined4 *)(puVar13 + 0xf) = 0;
    dVar32 = (double)(float)(dVar30 * dVar30);
    *(float *)(puVar13 + 0xe) = fVar10;
    fVar8 = g_heroPosition.z;
    dVar33 = (double)*(float *)(param_1 + 0x10);
    dVar42 = (double)*(float *)(param_1 + 0x14);
    dVar34 = (double)*(float *)(param_1 + 0x18);
    dVar41 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
    dVar40 = (double)(float)(dVar32 * dVar41);
    bVar1 = g_heroStateType == 0xf;
    fVar10 = (float)((double)(float)((double)(float)(dVar32 * dVar40) * dVar36 +
                                    (double)(float)(dVar40 * dVar37 +
                                                   (double)(float)(dVar41 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar32 * dVar30) * dVar39 + dVar30)))) * dVar35);
    *(float *)((int)puVar13 + 0x74) = fVar10;
    iVar23 = g_standingOnMoby;
    *(float *)((int)puVar13 + 0x74) = fVar10 + fVar2;
    *(float *)(puVar13 + 0xf) = fVar8 + 0.39082;
    if (bVar1) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    if (((iVar23 != 0) && (iVar23 = MB_GetPlatformParent(), iVar23 != 0)) &&
       (param_3 != 0)) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x30,0x2e7bc4);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xc0,lVar29);
    *(undefined4 *)(puVar13 + 0x18) = uVar12;
  }
  else {
    sVar11 = *(short *)(param_1 + 0x44);
    dVar33 = (double)*(float *)(param_1 + 0x10);
    iVar23 = *(int *)(*(int *)(param_1 + 0x40) + 0x78);
    *(f32 *)(puVar13 + 0xe) = fVar4;
    *(f32 *)((int)puVar13 + 0x74) = fVar5;
    *(f32 *)(puVar13 + 0xf) = fVar6;
    *(f32 *)((int)puVar13 + 0x7c) = fVar7;
    dVar42 = (double)*(float *)(param_1 + 0x14);
    dVar34 = (double)*(float *)(param_1 + 0x18);
    *(int *)(puVar13 + 0x18) = (int)sVar11;
    if (*(int *)(iVar23 + 0x50) != 0) {
      *(undefined2 *)(param_1 + 0x46) = 1;
    }
  }
  pMVar18 = g_heroMobyPtr;
  dVar30 = 0.5;
  dVar34 = -(double)(float)((double)g_FrameTime * 0.5 - dVar34);
  *(f32 *)(puVar13 + 0x12) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar13 + 0x94) = (pMVar18->pos).y;
  *(f32 *)(puVar13 + 0x13) = (pMVar18->pos).z;
  fVar4 = (pMVar18->pos).w;
  *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(puVar13 + 0xf);
  *(f32 *)((int)puVar13 + 0x9c) = fVar4;
  iVar23 = CollLine(uVar20 - 0x120,uVar20 - 0x140,0x10,pMVar18,0);
  if (iVar23 != 0) {
    iVar23 = CollHotspot();
    fVar2 = animationSpeed;
    if ((iVar23 != 0) || (0.0 < dVar34)) {
      if ((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) {
        if (0 < g_CollOutput.poly) {
          bVar17 = true;
          *(float *)(param_1 + 0x20) = g_CollOutput.ip.x;
          *(float *)(param_1 + 0x24) = g_CollOutput.ip.y;
          *(float *)(param_1 + 0x28) = g_CollOutput.ip.z;
          *(float *)(param_1 + 0x2c) = g_CollOutput.ip.w;
        }
      }
      else {
        if ((g_CollOutput.pMoby == g_heroMobyPtr) ||
           (g_CollOutput.pMoby == *(MobyInstance **)(param_1 + 0x40))) {
          puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
          puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
          if (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
              *(int *)(puVar13 + 0x18)) goto LAB_002e835c;
        }
        pMVar18 = g_CollOutput.pMoby;
        *(undefined4 *)(puVar13 + 0x14) = 0;
        *(undefined4 *)((int)puVar13 + 0xa4) = 0;
        *(undefined4 *)(puVar13 + 0x15) = 0x3f000000;
        *(undefined4 *)((int)puVar13 + 0xac) = 0;
        fVar4 = (pMVar18->pos).x;
        *(f32 *)(param_1 + 0x20) = fVar4;
        fVar5 = (pMVar18->pos).y;
        *(f32 *)(param_1 + 0x24) = fVar5;
        fVar2 = (pMVar18->pos).z;
        *(float *)(param_1 + 0x28) = fVar2;
        fVar6 = (pMVar18->pos).w;
        *(f32 *)(puVar13 + 0x14) = fVar4;
        *(f32 *)(param_1 + 0x2c) = fVar6;
        *(f32 *)((int)puVar13 + 0xa4) = fVar5;
        *(float *)(puVar13 + 0x15) = (float)(dVar30 + (double)fVar2);
        GetGroundZ(dVar30,uVar20 - 0x110,0);
        bVar17 = true;
      }
    }
  }
LAB_002e835c:
  do {
    while( true ) {
      do {
        do {
          iVar23 = FastDecTimerS32(uVar20 - 0xf0);
          if (iVar23 != 0 || bVar17) goto LAB_002e8510;
          fVar2 = *(float *)(puVar13 + 0xe);
          fVar10 = *(float *)((int)puVar13 + 0x74);
          fVar8 = *(float *)(puVar13 + 0xf);
          lVar29 = 10;
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0x7c);
          *(float *)(puVar13 + 0x10) = fVar2;
          *(float *)((int)puVar13 + 0x84) = fVar10;
          *(float *)(puVar13 + 0x11) = fVar8;
          do {
            fVar2 = (float)((double)fVar2 + dVar33);
            fVar10 = (float)((double)fVar10 + dVar42);
            fVar8 = (float)((double)fVar8 + dVar34);
            dVar34 = -(double)(float)((double)DAT_0071f418 * 9.0 - dVar34);
            *(float *)(puVar13 + 0xe) = fVar2;
            *(float *)((int)puVar13 + 0x74) = fVar10;
            *(float *)(puVar13 + 0xf) = fVar8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          iVar23 = CollLine(uVar20 - 0x130,uVar20 - 0x140,0x10,param_2,0);
        } while (iVar23 == 0);
        iVar23 = CollHotspot();
        fVar2 = animationSpeed;
      } while ((iVar23 == 0) && (0.0 < dVar34));
      if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && (g_CollOutput.poly < 1)) break;
      if (0 < g_CollOutput.poly) {
        *(float *)(param_1 + 0x20) = g_CollOutput.ip.x;
        *(float *)(param_1 + 0x24) = g_CollOutput.ip.y;
        *(float *)(param_1 + 0x28) = g_CollOutput.ip.z;
        *(float *)(param_1 + 0x2c) = g_CollOutput.ip.w;
        goto LAB_002e8510;
      }
    }
    if ((g_CollOutput.pMoby != g_heroMobyPtr) &&
       (g_CollOutput.pMoby != *(MobyInstance **)(param_1 + 0x40))) break;
    puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
    puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
  } while (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
           *(int *)(puVar13 + 0x18));
  pMVar18 = g_CollOutput.pMoby;
  *(undefined4 *)(puVar13 + 0x16) = 0;
  *(undefined4 *)((int)puVar13 + 0xb4) = 0;
  *(undefined4 *)(puVar13 + 0x17) = 0x3f000000;
  *(undefined4 *)((int)puVar13 + 0xbc) = 0;
  fVar4 = (pMVar18->pos).x;
  *(f32 *)(param_1 + 0x20) = fVar4;
  fVar5 = (pMVar18->pos).y;
  *(f32 *)(param_1 + 0x24) = fVar5;
  fVar2 = (pMVar18->pos).z;
  *(float *)(param_1 + 0x28) = fVar2;
  fVar6 = (pMVar18->pos).w;
  *(f32 *)(puVar13 + 0x16) = fVar4;
  *(f32 *)(param_1 + 0x2c) = fVar6;
  *(f32 *)((int)puVar13 + 0xb4) = fVar5;
  *(float *)(puVar13 + 0x17) = (float)(dVar30 + (double)fVar2);
  GetGroundZ(dVar30,uVar20 - 0x100,0);
LAB_002e8510:
  if ((*(int *)(puVar13 + 0x18) == 0) ||
     ((param_3 == 0 &&
      ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
       (iVar23 = MB_GetPlatformParent(), iVar23 == 0)))))) {
    uVar22 = 0;
  }
  else {
    if (((param_3 != 2) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) ||
       (iVar23 = MB_GetPlatformParent(), iVar23 == 0)) {
      RegisterFuncForMoby(&PTR_M1900_002e68e0_0070b6c8,param_2);
    }
    *(float *)(param_1 + 0x30) = g_CollOutput.normal.x;
    *(float *)(param_1 + 0x34) = g_CollOutput.normal.y;
    *(float *)(param_1 + 0x38) = g_CollOutput.normal.z;
    *(float *)(param_1 + 0x3c) = g_CollOutput.normal.w;
    fVar9 = GameCamera.posX;
    fVar2 = *(float *)(param_1 + 0x20) - GameCamera.posX;
    fVar10 = *(float *)(param_1 + 0x24) - GameCamera.posY;
    *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)(param_1 + 0x2c);
    uVar22 = 1;
    fVar8 = *(float *)(param_1 + 0x28) - GameCamera.posZ;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    fVar2 = fVar2 * 0.95;
    fVar10 = fVar10 * 0.95;
    fVar8 = fVar8 * 0.95;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    *(float *)(puVar13 + 0x11) = fVar8;
    *(float *)(param_1 + 0x20) = fVar2 + fVar9;
    *(float *)(param_1 + 0x24) = fVar10 + GameCamera.posY;
    *(float *)(param_1 + 0x28) = fVar8 + GameCamera.posZ;
  }
  return uVar22;
}


// 0x02e86b8 (0x334 bytes)
void M1900_002e86b8(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  GPiece<16> local_40;
  float local_30 [2];
  
  iVar2 = *(int *)(param_1 + 0x78);
  bVar1 = DAT_00969ec2 == 0;
  if (*(int *)(iVar2 + 0x68) != 0 || DAT_00969ec2 != 0) {
    if (*(int *)(iVar2 + 0x68) == 0) {
      fVar3 = g_heroPosition.y - *(float *)(param_1 + 0x14);
      fVar4 = g_heroPosition.x - *(float *)(param_1 + 0x10);
      if (1.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
        return;
      }
      if (1.3 <= ABS(g_heroPosition.z - *(float *)(param_1 + 0x18))) {
        return;
      }
      *(undefined4 *)(iVar2 + 0x68) = 1;
    }
    fVar3 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
    fVar4 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
    uVar7 = 0;
    local_30[0] = SQRT(fVar4 * fVar4 + fVar3 * fVar3) - 1.4;
    if (0.0 < local_30[0]) {
      local_30[0] = 0.0;
    }
    if (bVar1) {
      local_30[0] = 0.0;
    }
    dVar6 = 0.019999999552965164;
    AccelDelt(0.0,DAT_0071f40c * 0.02,DAT_0071f40c * 0.3,g_FrameTime * 4.0,
                        local_30,0x2e868c,(float *)(iVar2 + 0x60));
    if (((local_30[0] == 0.0) && (*(int *)(iVar2 + 0x60) == 0)) &&
       (dVar5 = (double)GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0),
       ABS((double)(float)((double)*(float *)(param_1 + 0x18) - dVar5)) < dVar6)) {
      *(undefined4 *)(iVar2 + 0x68) = 0;
    }
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
    if (fVar3 < *(float *)(iVar2 + 0x60)) {
      *(float *)(iVar2 + 0x60) = fVar3;
    }
    MB_MoveAndCollide(0x3fe0000000000000,0x3fd99999a0000000,uVar7,param_1,local_40);
    dVar6 = (double)GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
    if (dVar6 <= (double)*(float *)(param_1 + 0x18)) {
      fVar3 = -(DAT_0071f418 * 24.0 - *(float *)(iVar2 + 100));
      *(float *)(iVar2 + 100) = fVar3;
      fVar3 = *(float *)(param_1 + 0x18) + fVar3;
      *(float *)(param_1 + 0x18) = fVar3;
      if ((double)fVar3 < dVar6) {
        *(float *)(param_1 + 0x18) = (float)dVar6;
      }
    }
    else {
      *(float *)(param_1 + 0x18) = (float)dVar6;
      *(undefined4 *)(iVar2 + 100) = 0;
    }
  }
  return;
}


// 0x02e89ec (0x7c bytes)
void M1900_002e89ec(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = CollHotspot();
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 < 0) {
        return;
      }
    }
    else if (iVar1 < 3) {
      return;
    }
  }
  else if (iVar1 < 0xb) {
    if (iVar1 != 8) {
      return;
    }
  }
  else if (0xd < iVar1) {
    return;
  }
  M1900_002e6f18(param_1);
  return;
}


// shared update function, registered for oClasses 203, 1900
// 0x02e8af8 (0x1c40 bytes)
// inlined: FastAtan2 @0x2e9304, FastAtan2 @0x2e96f0, FastAtan2 @0x2e9884, FastAtan2 @0x2ea178, FastAtan2 @0x2ea30c
/* Moby 203
   Moby 1900 */

void UpdateMoby_203(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MOBY_OCLASSES MVar9;
  void *pvVar10;
  f32 fVar11;
  float fVar12;
  u16 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  longlong lVar26;
  MobyModeBit MVar30;
  MobyInstance *pMVar29;
  short sVar31;
  longlong lVar27;
  longlong lVar28;
  int iVar33;
  float *pfVar34;
  longlong lVar32;
  longlong lVar35;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  short *psVar36;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong unaff_r30;
  ulonglong uVar39;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  ulonglong in_f28;
  ulonglong in_f29;
  undefined8 uVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  
  lVar26 = (longlong)(int)moby;
  uVar25 = ZEXT48(&stack0x00000000);
  lVar28 = uVar25 - 0x280;
  puVar19 = (ulonglong *)lVar28;
  *puVar19 = uVar25;
  puVar19[0x52] = in_LR;
  puVar19[0x4c] = in_f28;
  puVar19[0x4d] = in_f29;
  puVar19[0x4e] = in_f30;
  puVar19[0x4f] = in_f31;
  puVar19[0x4b] = unaff_r31;
  puVar19[0x48] = unaff_r28;
  MVar9 = moby->oClass;
  puVar19[0x49] = unaff_r29;
  uVar37 = (ulonglong)g_goldWeaponsArray.decoyGlove;
  puVar19[0x4a] = unaff_r30;
  pvVar10 = moby->pVar;
  uVar39 = ZEXT48(pvVar10);
  uVar37 = uVar37 + (ZERO_MASK((0xcb - (uint)MVar9)) & -uVar37);
  puVar19[0x47] = unaff_r27;
  puVar19[0x46] = unaff_r26;
  puVar19[0x45] = unaff_r25;
  puVar19[0x44] = unaff_r24;
  puVar19[0x43] = unaff_r23;
  dVar41 = (double)FastIntToDouble(uVar37);
  fVar11 = (moby->pos).x;
  dVar47 = 2.0;
  uVar14 = (int)fVar11 >> 0x1f;
  iVar33 = (uVar14 >> 1 ^ (uint)fVar11) - uVar14;
  if ((((iVar33 < 0x40000000) || (0x447f4000 < iVar33)) ||
      (fVar11 = (moby->pos).y, uVar14 = (int)fVar11 >> 0x1f,
      iVar33 = (uVar14 >> 1 ^ (uint)fVar11) - uVar14, 0x447f4000 < iVar33 || iVar33 < 0x40000000))
     || ((fVar11 = (moby->pos).z, uVar14 = (int)fVar11 >> 0x1f,
         iVar33 = (uVar14 >> 1 ^ (uint)fVar11) - uVar14, iVar33 < 0x40000000 ||
         (0x447f4000 < iVar33)))) {
    MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
    DeleteMoby(moby);
  }
  else if (((g_currentWeaponMoby == (MobyInstance *)0x0) ||
           (g_currentWeaponMoby->oClass != DECOY_GLOVE)) && (moby->state == '\x01')) {
    MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
    DeleteMoby(moby);
  }
  else if ((g_heroType == '\0') || (moby->state != '\x01')) {
    MVar30 = moby->modeBits;
    *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + 1;
    if ((g_heroInvisible == '\0') || (1 < moby->state)) {
      MVar30 = MVar30 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                         DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                         HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    else {
      MVar30 = MVar30 | (UNK_40|DISABLED);
    }
    iVar33 = *(int *)((int)pvVar10 + 0x40);
    moby->modeBits = MVar30;
    if (((*(short *)(iVar33 + 0xa6) == 0x232) && (*(short *)((int)pvVar10 + 0x46) == 0)) &&
       (dVar42 = (double)FUN_005e8030(uVar39 + 0x10), 0.0 < dVar42)) {
      if ((g_standingOnMoby == 0) || (iVar33 = MB_GetPlatformParent(), iVar33 == 0)) {
        M1900_002e7c08(uVar39,lVar26,1);
      }
      else {
        iVar33 = M1900_002e7c08(uVar39,lVar26,0);
        if (iVar33 == 0) {
          M1900_002e7c08(uVar39,lVar26,2);
        }
      }
    }
    bVar1 = moby->state;
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        moby->state = '\x01';
        *(undefined2 *)((int)pvVar10 + 0x44) = 0;
        moby->collisionMesh = (float *)0xffffffff;
        *(undefined2 *)((int)pvVar10 + 0x6c) = 0;
        *(undefined1 *)((int)pvVar10 + 0x6e) = 0;
      }
      else if (bVar1 < 2) {
        *(undefined2 *)((int)pvVar10 + 0x44) = 0;
        if ((((*(int *)((int)pvVar10 + 0x40) == 0) ||
             ((*(byte *)(*(int *)((int)pvVar10 + 0x40) + 0x20) & 0xf0) == 0xf0)) ||
            (g_currentWeaponMoby == (MobyInstance *)0x0)) ||
           (g_currentWeaponMoby->oClass != DECOY_GLOVE)) {
          MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
          DeleteMoby(moby);
        }
      }
      else {
        uVar14 = (int)moby->scale >> 0x1f;
        fVar12 = moby->pClass->gScale;
        uVar15 = (int)fVar12 >> 0x1f;
        if ((int)((uVar14 >> 1 ^ (uint)moby->scale) - uVar14) <
            (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) {
          moby->scale = DAT_0071f408 * 0.02 + moby->scale;
        }
        iVar33 = 1;
        *(float *)((int)pvVar10 + 0x18) = -(DAT_0071f418 * 9.0 - *(float *)((int)pvVar10 + 0x18));
        if (0 < DAT_00a51f68) {
          psVar36 = &DAT_00a51f6a;
          dVar47 = 1.7999999523162842;
          dVar41 = 0.014999999664723873;
          do {
            pMVar29 = g_MobyInstance + *psVar36;
            if (pMVar29 != moby) {
              bVar1 = pMVar29->state;
              if (((1 < bVar1) && (pMVar29 != (MobyInstance *)0x0)) &&
                 ((bVar1 != 0xfe && (bVar1 != 0xfd)))) {
                FUN_005e81f0(uVar25 - 0x1c0,lVar26 + 0x10,&pMVar29->pos);
                *(undefined4 *)(puVar19 + 0x19) = 0;
                dVar42 = (double)FUN_005e8030(uVar25 - 0x1c0);
                if (dVar42 < dVar47) {
                  fVar12 = (float)((double)(float)(dVar47 - dVar42) * dVar41);
                  *(float *)(puVar19 + 0x18) = *(float *)(puVar19 + 0x18) * fVar12;
                  *(float *)((int)puVar19 + 0xc4) = *(float *)((int)puVar19 + 0xc4) * fVar12;
                  *(float *)(puVar19 + 0x19) = *(float *)(puVar19 + 0x19) * fVar12;
                  FUN_005e7f54(uVar39 + 0x10,uVar39 + 0x10,uVar25 - 0x1c0);
                }
              }
            }
            iVar33 = iVar33 + 1;
            psVar36 = psVar36 + 1;
          } while (iVar33 <= DAT_00a51f68);
        }
        if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
          g_heroMobyPtr->collision = (ushort *)0x0;
        }
        lVar38 = uVar39 + 0x10;
        dVar41 = 0.20000000298023224;
        dVar47 = 0.0;
        uVar37 = MB_MoveAndCollide(0x3fc99999a0000000,0x3fc99999a0000000,0,lVar26,lVar38);
        if ((uVar37 & 1) != 0) {
          fVar12 = (moby->pos).z;
          fVar11 = (moby->pos).y;
          *(f32 *)(puVar19 + 0x1a) = (moby->pos).x;
          fVar3 = (moby->pos).w;
          *(f32 *)((int)puVar19 + 0xd4) = fVar11;
          *(f32 *)((int)puVar19 + 0xdc) = fVar3;
          *(float *)(puVar19 + 0x1b) = (float)((double)fVar12 + dVar41);
          iVar33 = CollSphere(0x3fcd70a3e0000000,uVar25 - 0x1b0,&DAT_002e8a68,0,lVar26);
          if (iVar33 != 0) {
            if (*(int *)((int)pvVar10 + 0x18) < 0) {
              FUN_005e81f0(uVar25 - 0x1a0,lVar26 + 0x10,&g_heroPosition);
              fVar12 = *(float *)((int)puVar19 + 0xe4);
              fVar4 = *(float *)(puVar19 + 0x1c);
              *(undefined4 *)(puVar19 + 0x1d) = 0;
              fVar5 = SQRT(fVar4 * fVar4 + fVar12 * fVar12);
              if (fVar5 < 1.8) {
                fVar5 = (1.8 - fVar5) * 0.015;
                *(undefined4 *)(puVar19 + 0x1d) = 0;
                fVar4 = fVar4 * fVar5;
                *(float *)((int)puVar19 + 0xe4) = fVar12 * fVar5;
                *(float *)(puVar19 + 0x1c) = fVar4;
                *(float *)((int)pvVar10 + 0x10) = *(float *)((int)pvVar10 + 0x10) + fVar4;
                *(float *)((int)pvVar10 + 0x14) =
                     *(float *)((int)pvVar10 + 0x14) + *(float *)((int)puVar19 + 0xe4);
                *(float *)((int)pvVar10 + 0x18) =
                     *(float *)((int)pvVar10 + 0x18) + *(float *)(puVar19 + 0x1d);
              }
            }
            FastVecReflect(lVar38,lVar38,0xa10980);
            if ((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) {
              fVar4 = *(float *)((int)pvVar10 + 0x10);
              fVar12 = *(float *)((int)pvVar10 + 0x14);
              fVar5 = *(float *)((int)pvVar10 + 0x18);
            }
            else {
              fVar4 = *(float *)((int)pvVar10 + 0x10);
              fVar12 = *(float *)((int)pvVar10 + 0x14);
              dVar41 = 1.0499999523162842;
              fVar5 = *(float *)((int)pvVar10 + 0x18);
            }
            fVar12 = (float)((double)fVar12 * dVar41);
            fVar4 = (float)((double)fVar4 * dVar41);
            fVar5 = (float)((double)fVar5 * dVar41);
            *(float *)((int)pvVar10 + 0x10) = fVar4;
            *(float *)((int)pvVar10 + 0x14) = fVar12;
            *(float *)((int)pvVar10 + 0x18) = fVar5;
            dVar41 = 0.009999999776482582;
            if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12) < DAT_0071f408 * 0.01) ||
               (((g_standingOnMoby != 0 && (iVar33 = MB_GetPlatformParent(), iVar33 != 0))
                && (SQRT(*(float *)((int)pvVar10 + 0x18) * *(float *)((int)pvVar10 + 0x18) +
                         *(float *)((int)pvVar10 + 0x10) * *(float *)((int)pvVar10 + 0x10) +
                         *(float *)((int)pvVar10 + 0x14) * *(float *)((int)pvVar10 + 0x14)) <
                    (float)((double)DAT_0071f408 * dVar41 +
                           (double)SQRT(DAT_00969de8 * DAT_00969de8 +
                                        DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)))
                ))) {
              fVar4 = g_CollOutput.normal.z;
              dVar42 = ABS((double)g_CollOutput.normal.z);
              fVar12 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                            g_CollOutput.normal.y * g_CollOutput.normal.y);
              dVar43 = ABS((double)fVar12);
              *(float *)(puVar19 + 0x2b) = fVar12;
              *(float *)((int)puVar19 + 0x15c) = (float)(dVar42 - dVar43);
              uVar37 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar19 + 0x15c) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar19 + 0x2b) >> 0x1d) & 4;
              dVar41 = dVar42;
              if ((double)*(float *)((int)puVar19 + 0x15c) - dVar47 < 0.0) {
                dVar41 = dVar43;
              }
              fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
              dVar43 = ABS((double)*(float *)(puVar19 + 0x2b));
              if ((double)*(float *)((int)puVar19 + 0x15c) - dVar47 < 0.0) {
                dVar43 = dVar42;
              }
              fVar4 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
              dVar42 = dVar47;
              if (dVar47 < dVar41) {
                lVar27 = uVar25 - 0x270;
                lVar32 = uVar25 - 0xa0;
                lVar35 = uVar25 - 0x90;
                lVar40 = 2;
                fVar5 = (float)(dVar43 - dVar41) / (float)(dVar43 + dVar41);
                fVar7 = fVar5 * fVar5;
                *(float *)((int)puVar19 + 0x1ec) = fVar5;
                *(float *)((int)puVar19 + 0x1e4) = fVar5;
                *(float *)(puVar19 + 0x3d) = fVar5;
                *(float *)(puVar19 + 0x3c) = fVar5;
                fVar5 = fVar7 * fVar7;
                *(float *)((int)puVar19 + 0x1e4) = *(float *)((int)puVar19 + 0x1e4) * fVar7;
                *(float *)(puVar19 + 0x3d) = *(float *)(puVar19 + 0x3d) * fVar5;
                *(float *)((int)puVar19 + 0x1ec) = *(float *)((int)puVar19 + 0x1ec) * fVar5 * fVar7;
                do {
                  *(float *)((int)lVar27 + 0x1e0) = *(float *)((int)lVar27 + 0x1d0) * fVar5 * fVar5;
                  iVar33 = (int)lVar32;
                  lVar27 = lVar27 + 8;
                  lVar32 = lVar32 + 8;
                  *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar5 * fVar5;
                  lVar35 = lVar35 + 8;
                  lVar40 = lVar40 + -1;
                } while (lVar40 != 0);
                lVar40 = 4;
                lVar35 = uVar25 - 0xa0;
                pfVar34 = (float *)&DAT_007358e0;
                lVar27 = lVar28;
                lVar32 = lVar35;
                do {
                  fVar5 = *pfVar34;
                  fVar7 = pfVar34[1];
                  pfVar34 = pfVar34 + 2;
                  *(float *)((int)lVar27 + 0x1e0) = *(float *)((int)lVar27 + 0x1e0) * fVar5;
                  lVar27 = lVar27 + 8;
                  *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
                  lVar32 = lVar32 + 8;
                  lVar40 = lVar40 + -1;
                } while (lVar40 != 0);
                lVar32 = 2;
                lVar27 = lVar28;
                dVar41 = dVar47;
                do {
                  iVar33 = (int)lVar27;
                  lVar27 = lVar27 + 0x10;
                  iVar20 = (int)lVar35;
                  lVar35 = lVar35 + 0x10;
                  dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar33 + 0x1e0)) +
                                    *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                   *(float *)(iVar20 + 0xc));
                  lVar32 = lVar32 + -1;
                } while (lVar32 != 0);
                dVar42 = (double)((float)(dVar41 + 0.7853981852531433) * fVar12 + fVar4);
              }
              if (dVar42 < 0.6108652353286743) {
                sVar31 = *(short *)((int)pvVar10 + 0x44) + 1;
                *(short *)((int)pvVar10 + 0x44) = sVar31;
                uVar2 = moby->animationId;
                if (((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) ||
                   (puVar19[0x40] = (longlong)(int)(animationSpeed * 240.5),
                   *(int *)((int)puVar19 + 0x204) < (int)sVar31)) {
                  if (uVar2 != '\x01') {
                    puVar19[0x40] = (longlong)(int)(animationSpeed * 10.5);
                    MB_SetAnimation(lVar26,1,0,*(undefined4 *)((int)puVar19 + 0x204));
                  }
                  auVar48 = ZEXT416(0xffffffff);
                  auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
                  puVar13 = moby->pClass->collision;
                  moby->collisionMesh = (float *)0x0;
                  moby->collision = puVar13;
                  *(undefined1 *)((int)pvVar10 + 0x10) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x11) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x12) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x13) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x14) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x15) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x16) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x17) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x18) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x19) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1b) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1c) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1d) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1e) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1f) = 0;
                  moby->state = '\x03';
                  auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
                  auVar48 = loadVectorLeftIndexed(0x38,0x2e8a68);
                  auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
                  auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar48 = vectorMultiplyAddFloatingPoint
                                      (auVar50,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                               auVar48 << 0x60,auVar49);
                  auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
                  auVar48 = vectorSplatHalfWord(auVar48,1);
                  uVar17 = storeVectorElementHalfWordIndexed(auVar48,0x44,uVar39);
                  *(undefined2 *)((int)pvVar10 + 0x44) = uVar17;
                  fVar8 = g_CollOutput.normal.z;
                  fVar7 = g_CollOutput.ip.z;
                  fVar12 = (moby->rotation).z;
                  fVar4 = fVar12 + 1.5707963;
                  fVar5 = 3.1415925 - fVar12;
                  if (fVar12 - (3.1415925 - fVar12) < 0.0) {
                    fVar5 = fVar12;
                  }
                  fVar6 = 3.1415925 - fVar4;
                  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                    fVar6 = fVar4;
                  }
                  fVar21 = -3.1415925 - fVar12;
                  if ((-3.1415925 - fVar12) - fVar5 < 0.0) {
                    fVar21 = fVar5;
                  }
                  fVar12 = -3.1415925 - fVar4;
                  if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
                    fVar12 = fVar6;
                  }
                  fVar4 = fVar21 * fVar21;
                  dVar43 = (double)g_CollOutput.normal.z;
                  fVar5 = fVar12 * fVar12;
                  fVar23 = fVar4 * fVar4 * fVar21;
                  fVar6 = fVar5 * fVar5 * fVar12;
                  fVar24 = fVar4 * fVar23;
                  fVar22 = fVar5 * fVar6;
                  fVar21 = fVar4 * fVar24 * 2.601887e-06 +
                           fVar24 * -0.0001980741 +
                           fVar23 * 0.0083330255 + fVar4 * fVar21 * -0.16666657 + fVar21;
                  fVar12 = fVar5 * fVar22 * 2.601887e-06 +
                           fVar22 * -0.0001980741 +
                           fVar6 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12;
                  fVar4 = g_CollOutput.normal.x * fVar12 + g_CollOutput.normal.y * fVar21;
                  dVar42 = (double)fVar4;
                  fVar12 = g_CollOutput.normal.y * fVar12 - g_CollOutput.normal.x * fVar21;
                  dVar44 = ABS((double)fVar12);
                  *(float *)(puVar19 + 0x2a) = fVar12;
                  (moby->pos).z = fVar7;
                  fVar12 = SQRT((float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43)));
                  dVar45 = ABS((double)fVar12);
                  *(float *)((int)puVar19 + 0x14c) = fVar12;
                  *(float *)((int)puVar19 + 0x154) = (float)(dVar45 - dVar44);
                  uVar37 = (ulonglong)(*(uint *)((int)puVar19 + 0x14c) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)((int)puVar19 + 0x154) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)(puVar19 + 0x2a) >> 0x1d) & 4;
                  dVar41 = ABS((double)*(float *)((int)puVar19 + 0x14c));
                  if ((double)*(float *)((int)puVar19 + 0x154) - dVar47 < 0.0) {
                    dVar41 = dVar44;
                  }
                  fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
                  dVar44 = ABS((double)*(float *)(puVar19 + 0x2a));
                  if ((double)*(float *)((int)puVar19 + 0x154) - dVar47 < 0.0) {
                    dVar44 = dVar45;
                  }
                  fVar5 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                  dVar45 = dVar47;
                  if (dVar47 < dVar41) {
                    lVar27 = uVar25 - 0x270;
                    lVar35 = uVar25 - 0xb0;
                    lVar32 = uVar25 - 0xc0;
                    lVar40 = 2;
                    fVar7 = (float)(dVar44 - dVar41) / (float)(dVar44 + dVar41);
                    fVar6 = fVar7 * fVar7;
                    *(float *)((int)puVar19 + 0x1cc) = fVar7;
                    *(float *)((int)puVar19 + 0x1c4) = fVar7;
                    *(float *)(puVar19 + 0x39) = fVar7;
                    *(float *)(puVar19 + 0x38) = fVar7;
                    fVar7 = fVar6 * fVar6;
                    *(float *)((int)puVar19 + 0x1c4) = *(float *)((int)puVar19 + 0x1c4) * fVar6;
                    *(float *)(puVar19 + 0x39) = *(float *)(puVar19 + 0x39) * fVar7;
                    *(float *)((int)puVar19 + 0x1cc) =
                         *(float *)((int)puVar19 + 0x1cc) * fVar7 * fVar6;
                    do {
                      *(float *)((int)lVar27 + 0x1c0) =
                           *(float *)((int)lVar27 + 0x1b0) * fVar7 * fVar7;
                      iVar33 = (int)lVar32;
                      lVar32 = lVar32 + 8;
                      lVar27 = lVar27 + 8;
                      *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar7 * fVar7;
                      lVar35 = lVar35 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar40 = 4;
                    lVar35 = uVar25 - 0xc0;
                    pfVar34 = (float *)&DAT_007358e0;
                    lVar27 = lVar28;
                    lVar32 = lVar35;
                    do {
                      fVar7 = *pfVar34;
                      fVar6 = pfVar34[1];
                      pfVar34 = pfVar34 + 2;
                      *(float *)((int)lVar27 + 0x1c0) = *(float *)((int)lVar27 + 0x1c0) * fVar7;
                      lVar27 = lVar27 + 8;
                      *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
                      lVar32 = lVar32 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar32 = 2;
                    lVar27 = lVar28;
                    dVar41 = dVar47;
                    do {
                      iVar33 = (int)lVar27;
                      iVar20 = (int)lVar35;
                      lVar27 = lVar27 + 0x10;
                      lVar35 = lVar35 + 0x10;
                      dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar33 + 0x1c0)) +
                                        *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                       *(float *)(iVar20 + 0xc));
                      lVar32 = lVar32 + -1;
                    } while (lVar32 != 0);
                    dVar45 = (double)((float)(dVar41 + 0.7853981852531433) * fVar12 + fVar5);
                  }
                  dVar43 = ABS(dVar43);
                  *(float *)((int)pvVar10 + 0x4c) = (float)-dVar45;
                  *(float *)((int)puVar19 + 0x144) = fVar4;
                  *(float *)(puVar19 + 0x29) = (float)(dVar43 - ABS(dVar42));
                  uVar37 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar19 + 0x29) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar19 + 0x144) >> 0x1d) & 4;
                  dVar41 = dVar43;
                  if ((double)*(float *)(puVar19 + 0x29) - dVar47 < 0.0) {
                    dVar41 = ABS(dVar42);
                  }
                  dVar42 = ABS((double)*(float *)((int)puVar19 + 0x144));
                  if ((double)*(float *)(puVar19 + 0x29) - dVar47 < 0.0) {
                    dVar42 = dVar43;
                  }
                  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
                  fVar12 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                  if (dVar47 < dVar41) {
                    lVar27 = uVar25 - 0x270;
                    lVar32 = uVar25 - 0xe0;
                    lVar35 = uVar25 - 0xd0;
                    lVar40 = 2;
                    fVar5 = (float)(dVar42 - dVar41) / (float)(dVar42 + dVar41);
                    fVar7 = fVar5 * fVar5;
                    *(float *)((int)puVar19 + 0x1ac) = fVar5;
                    *(float *)((int)puVar19 + 0x1a4) = fVar5;
                    *(float *)(puVar19 + 0x35) = fVar5;
                    *(float *)(puVar19 + 0x34) = fVar5;
                    fVar5 = fVar7 * fVar7;
                    *(float *)((int)puVar19 + 0x1a4) = *(float *)((int)puVar19 + 0x1a4) * fVar7;
                    *(float *)(puVar19 + 0x35) = *(float *)(puVar19 + 0x35) * fVar5;
                    *(float *)((int)puVar19 + 0x1ac) =
                         *(float *)((int)puVar19 + 0x1ac) * fVar5 * fVar7;
                    do {
                      *(float *)((int)lVar27 + 0x1a0) =
                           *(float *)((int)lVar27 + 400) * fVar5 * fVar5;
                      iVar33 = (int)lVar32;
                      lVar27 = lVar27 + 8;
                      lVar32 = lVar32 + 8;
                      *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar5 * fVar5;
                      lVar35 = lVar35 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar40 = 4;
                    lVar35 = uVar25 - 0xe0;
                    pfVar34 = (float *)&DAT_007358e0;
                    lVar27 = lVar28;
                    lVar32 = lVar35;
                    do {
                      fVar5 = *pfVar34;
                      fVar7 = pfVar34[1];
                      pfVar34 = pfVar34 + 2;
                      *(float *)((int)lVar27 + 0x1a0) = *(float *)((int)lVar27 + 0x1a0) * fVar5;
                      lVar27 = lVar27 + 8;
                      *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
                      lVar32 = lVar32 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar27 = 2;
                    do {
                      iVar33 = (int)lVar28;
                      iVar20 = (int)lVar35;
                      lVar28 = lVar28 + 0x10;
                      lVar35 = lVar35 + 0x10;
                      dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar33 + 0x1a0)) +
                                        *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                       *(float *)(iVar20 + 0xc));
                      lVar27 = lVar27 + -1;
                    } while (lVar27 != 0);
                    dVar47 = (double)((float)(dVar47 + 0.7853981852531433) * fVar4 + fVar12);
                  }
                  *(float *)((int)pvVar10 + 0x50) = (float)dVar47;
                  dVar42 = (double)(moby->rotation).x;
                  dVar41 = (double)FastDiffRots(-dVar45,dVar42);
                  dVar47 = 0.10000000149011612;
                  dVar41 = (double)FastWrapRot
                                             ((float)dVar42,
                                              (float)((double)(DAT_0071f408 * 0.1) * dVar41));
                  (moby->rotation).x = (float)dVar41;
                  dVar42 = (double)(moby->rotation).y;
                  dVar41 = (double)FastDiffRots
                                             ((double)*(float *)((int)pvVar10 + 0x50),dVar42);
                  dVar41 = (double)FastWrapRot
                                             ((float)dVar42,
                                              (float)((double)(float)((double)DAT_0071f408 * dVar47)
                                                     * dVar41));
                  (moby->rotation).y = (float)dVar41;
                }
              }
            }
            M1900_002e89ec(lVar26);
            iVar33 = FastDecTimerU8(uVar39 + 0x6f);
            if (iVar33 == 0) {
              MB_RandomizeVector(g_FrameTime,(float *)lVar38);
            }
            else {
              PlayMobySound(0,0,moby);
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              auVar48 = loadVectorLeftIndexed(0x5c,0x2e8a68);
              auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar48 = vectorMultiplyAddFloatingPoint
                                  (auVar50,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                           auVar48 << 0x60,auVar49);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xff;
              uVar16 = storeVectorElementByteIndexed
                                 (auVar48 | auVar48 << 8 | auVar48 << 0x10 | auVar48 << 0x18 |
                                  auVar48 << 0x20 | auVar48 << 0x28 | auVar48 << 0x30 |
                                  auVar48 << 0x38 | auVar48 << 0x40 | auVar48 << 0x48 |
                                  auVar48 << 0x50 | auVar48 << 0x58 | auVar48 << 0x60 |
                                  auVar48 << 0x68 | auVar48 << 0x70 | auVar48 << 0x78,0x6f,uVar39);
              *(undefined1 *)((int)pvVar10 + 0x6f) = uVar16;
            }
          }
        }
        if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
          g_heroMobyPtr->collision = g_heroMobyPtr->pClass->collision;
        }
      }
    }
    else if (bVar1 < 6) {
      if (bVar1 < 5) {
        if ((g_heroState == WATER_SLIDING) &&
           (fVar12 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           SQRT(fVar4 * fVar4 + fVar12 * fVar12) < 1.5)) {
          CollDamageMobyDirect_wrap(0x408f400000000000,lVar26,lVar26,0x10000);
        }
        iVar33 = MB_damage(lVar26,0x30001,0);
        dVar44 = (double)(moby->rotation).x;
        dVar42 = (double)FastDiffRots((double)*(float *)((int)pvVar10 + 0x4c),dVar44);
        dVar43 = 0.10000000149011612;
        dVar42 = (double)FastWrapRot
                                   ((float)dVar44,(float)((double)(DAT_0071f408 * 0.1) * dVar42));
        (moby->rotation).x = (float)dVar42;
        dVar44 = (double)(moby->rotation).y;
        dVar42 = (double)FastDiffRots((double)*(float *)((int)pvVar10 + 0x50),dVar44);
        dVar42 = (double)FastWrapRot
                                   ((float)dVar44,
                                    (float)((double)(float)((double)DAT_0071f408 * dVar43) * dVar42)
                                   );
        (moby->rotation).y = (float)dVar42;
        M1900_002e86b8(lVar26);
        FastDecTimerS32(uVar39 + 0x5c);
        FastDecTimerS16(uVar39 + 0x6c);
        if ((iVar33 != 0) &&
           ((*(int *)(iVar33 + 0x20) != *(int *)((int)pvVar10 + 0x58) ||
            (*(int *)((int)pvVar10 + 0x5c) < 1)))) {
          auVar48 = ZEXT416(0xffffffff);
          auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
          *(int *)((int)pvVar10 + 0x58) = *(int *)(iVar33 + 0x20);
          auVar50 = vectorShiftLeftIntegerWord(auVar48,auVar48);
          auVar48 = loadVectorLeftIndexed(0x68,0x2e8a68);
          auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          sVar31 = *(short *)((int)pvVar10 + 0x6c);
          auVar48 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60
                               ,auVar50);
          auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
          auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar18 = storeVectorElementWordIndexed
                             (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0x5c,
                              uVar39);
          *(undefined4 *)((int)pvVar10 + 0x5cU & 0xfffffffc) = uVar18;
          if (sVar31 == 0) {
            if (((*(char *)(iVar33 + 0x28) == '\x01') && (*(char *)(iVar33 + 0x29) == '\x01')) &&
               (*(char *)((int)pvVar10 + 0x6e) == '\0')) {
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              auVar50 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              auVar48 = loadVectorLeftIndexed(0x6c,0x2e8a68);
              auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar48 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                           auVar48 << 0x60,auVar50);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = vectorSplatHalfWord(auVar48,1);
              uVar17 = storeVectorElementHalfWordIndexed(auVar48,0x6c,uVar39);
              *(undefined2 *)((int)pvVar10 + 0x6c) = uVar17;
              *(undefined1 *)((int)pvVar10 + 0x6e) = 1;
            }
            else {
              *(undefined1 *)((int)pvVar10 + 0x6e) = 0;
            }
            PlayMobySound(0,0,moby);
            fVar12 = *(float *)(iVar33 + 0x2c);
            *(undefined1 *)((int)pvVar10 + 7) = 0xfa;
            *(float *)((int)pvVar10 + 0x48) = *(float *)((int)pvVar10 + 0x48) - fVar12;
            MB_UpdateLightsTransition(lVar26,uVar39);
            uVar46 = 0;
            if (*(int *)((int)pvVar10 + 0x48) < 0) {
              *(undefined4 *)(puVar19 + 0x1e) = 0;
              *(undefined4 *)((int)puVar19 + 0xf4) = 0;
              *(undefined4 *)(puVar19 + 0x1f) = 0;
              *(undefined4 *)((int)puVar19 + 0xfc) = 0;
              fVar5 = DAT_0071f408;
              fVar12 = DAT_0071f408 * 0.5;
              fVar4 = DAT_0071f408 * 0.5;
              *(float *)(puVar19 + 0x1e) = DAT_0071f408 * 0.5;
              *(float *)((int)puVar19 + 0xf4) = fVar12;
              *(float *)(puVar19 + 0x1f) = fVar5 * 0.7;
              MB_RandomizeVector(fVar4,(float *)(uVar25 - 400));
              dVar42 = 3.0;
              puVar19[0x12] = 2;
              puVar19[0x14] = 1;
              puVar19[0x15] = 1;
              puVar19[0x16] = 0xffffffffffffffff;
              puVar19[0x17] = uVar37;
              MB_genericExplosion
                        (uVar46,uVar46,0x4010000000000000,0x4008000000000000,0x4022000000000000,
                         0x3ff0000000000000,0x4028000000000000,lVar26,uVar25 - 400,0,2,1,0,0,0);
              if ((int)uVar37 != 0) {
                SetCollDamIn
                          ((double)(float)(dVar41 * dVar47),uVar25 - 0x180,lVar26,&DAT_00810000);
                MVar9 = moby->oClass;
                *(undefined1 *)(puVar19 + 0x23) = 2;
                *(undefined1 *)((int)puVar19 + 0x119) = 1;
                *(MOBY_OCLASSES *)((int)puVar19 + 0x11a) = MVar9;
                CollMobySphere
                          ((double)(float)(dVar41 * dVar42),lVar26 + 0x10,2,0x10,lVar26,
                           uVar25 - 0x180);
              }
              MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
              DeleteMoby(moby);
              return;
            }
          }
        }
        moby->damage = -1;
        MB_ColorDyingMoby(lVar26,uVar39);
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x02') {
            puVar19[0x40] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar26,2,0,*(undefined4 *)((int)puVar19 + 0x204));
          }
          dVar41 = (double)MB_randRangeFloat(0.7,1.05);
          moby->unk58 = (float)dVar41;
        }
        if (moby->state == '\x04') {
          uVar14 = (int)moby->scale >> 0x1f;
          fVar12 = moby->pClass->gScale;
          uVar15 = (int)fVar12 >> 0x1f;
          if ((int)((uVar14 >> 1 ^ (uint)moby->scale) - uVar14) <
              (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) {
            moby->scale = DAT_0071f408 * 0.02 + moby->scale;
          }
          iVar33 = FastDecTimerS16(uVar39 + 0x44);
          if (iVar33 != 0) {
            if (moby->animationId != '\0') {
              puVar19[0x40] = (longlong)(int)(animationSpeed * 60.5);
              MB_SetAnimation(lVar26,0,0,*(undefined4 *)((int)puVar19 + 0x204));
            }
            MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
            moby->state = '\x05';
          }
        }
        else {
          lVar38 = lVar26 + 0x10;
          uVar46 = 0x3fe0000000000000;
          dVar41 = (double)GetGroundZ(0x3fe0000000000000,lVar38,0);
          dVar47 = 0.0;
          if (dVar41 != 0.0) {
            M1900_002e89ec(lVar26);
            if ((moby->pos).z <= (float)(dVar41 + 0.019999999552965164)) {
              *(undefined1 *)((int)pvVar10 + 0x10) = 0;
              *(undefined1 *)((int)pvVar10 + 0x11) = 0;
              *(undefined1 *)((int)pvVar10 + 0x12) = 0;
              *(undefined1 *)((int)pvVar10 + 0x13) = 0;
              *(undefined1 *)((int)pvVar10 + 0x14) = 0;
              *(undefined1 *)((int)pvVar10 + 0x15) = 0;
              *(undefined1 *)((int)pvVar10 + 0x16) = 0;
              *(undefined1 *)((int)pvVar10 + 0x17) = 0;
              *(undefined1 *)((int)pvVar10 + 0x18) = 0;
              *(undefined1 *)((int)pvVar10 + 0x19) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1b) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1c) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1d) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1e) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1f) = 0;
            }
            else {
              *(float *)((int)pvVar10 + 0x18) =
                   -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar10 + 0x18));
              (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar10 + 0x10);
              (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 0x14);
              (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x18);
              dVar41 = (double)GetGroundZ(uVar46,lVar38,0);
              if ((double)(moby->pos).z < dVar41) {
                (moby->pos).z = (float)dVar41;
                *(undefined1 *)((int)pvVar10 + 0x10) = 0;
                *(undefined1 *)((int)pvVar10 + 0x11) = 0;
                *(undefined1 *)((int)pvVar10 + 0x12) = 0;
                *(undefined1 *)((int)pvVar10 + 0x13) = 0;
                *(undefined1 *)((int)pvVar10 + 0x14) = 0;
                *(undefined1 *)((int)pvVar10 + 0x15) = 0;
                *(undefined1 *)((int)pvVar10 + 0x16) = 0;
                *(undefined1 *)((int)pvVar10 + 0x17) = 0;
                *(undefined1 *)((int)pvVar10 + 0x18) = 0;
                *(undefined1 *)((int)pvVar10 + 0x19) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1b) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1c) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1d) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1e) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1f) = 0;
                fVar7 = g_CollOutput.normal.z;
                fVar12 = (moby->rotation).z;
                fVar4 = fVar12 + 1.5707963;
                fVar5 = 3.1415925 - fVar12;
                if (fVar12 - (3.1415925 - fVar12) < 0.0) {
                  fVar5 = fVar12;
                }
                fVar8 = 3.1415925 - fVar4;
                if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                  fVar8 = fVar4;
                }
                fVar6 = -3.1415925 - fVar12;
                if ((-3.1415925 - fVar12) - fVar5 < 0.0) {
                  fVar6 = fVar5;
                }
                fVar12 = -3.1415925 - fVar4;
                if ((-3.1415925 - fVar4) - fVar8 < 0.0) {
                  fVar12 = fVar8;
                }
                fVar4 = fVar6 * fVar6;
                dVar43 = (double)g_CollOutput.normal.z;
                fVar5 = fVar12 * fVar12;
                fVar22 = fVar4 * fVar4 * fVar6;
                fVar8 = fVar5 * fVar5 * fVar12;
                fVar23 = fVar4 * fVar22;
                fVar21 = fVar5 * fVar8;
                fVar6 = fVar4 * fVar23 * 2.601887e-06 +
                        fVar23 * -0.0001980741 +
                        fVar22 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6;
                fVar12 = fVar5 * fVar21 * 2.601887e-06 +
                         fVar21 * -0.0001980741 +
                         fVar8 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12;
                fVar4 = g_CollOutput.normal.x * fVar12 + g_CollOutput.normal.y * fVar6;
                dVar42 = (double)fVar4;
                fVar12 = g_CollOutput.normal.y * fVar12 - g_CollOutput.normal.x * fVar6;
                dVar44 = ABS((double)fVar12);
                *(float *)((int)puVar19 + 0x13c) = fVar12;
                fVar12 = SQRT((float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43)));
                dVar45 = ABS((double)fVar12);
                *(float *)(puVar19 + 0x27) = fVar12;
                *(float *)(puVar19 + 0x28) = (float)(dVar45 - dVar44);
                uVar37 = (ulonglong)(*(uint *)(puVar19 + 0x27) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)(puVar19 + 0x28) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)((int)puVar19 + 0x13c) >> 0x1d) & 4;
                dVar41 = ABS((double)*(float *)(puVar19 + 0x27));
                if ((double)*(float *)(puVar19 + 0x28) - dVar47 < 0.0) {
                  dVar41 = dVar44;
                }
                fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
                dVar44 = ABS((double)*(float *)((int)puVar19 + 0x13c));
                if ((double)*(float *)(puVar19 + 0x28) - dVar47 < 0.0) {
                  dVar44 = dVar45;
                }
                fVar5 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                dVar45 = dVar47;
                if (dVar47 < dVar41) {
                  lVar27 = uVar25 - 0x270;
                  lVar35 = uVar25 - 0xf0;
                  lVar32 = uVar25 - 0x100;
                  lVar40 = 2;
                  fVar8 = (float)(dVar44 - dVar41) / (float)(dVar44 + dVar41);
                  fVar6 = fVar8 * fVar8;
                  *(float *)((int)puVar19 + 0x18c) = fVar8;
                  *(float *)((int)puVar19 + 0x184) = fVar8;
                  *(float *)(puVar19 + 0x31) = fVar8;
                  *(float *)(puVar19 + 0x30) = fVar8;
                  fVar8 = fVar6 * fVar6;
                  *(float *)((int)puVar19 + 0x184) = *(float *)((int)puVar19 + 0x184) * fVar6;
                  *(float *)(puVar19 + 0x31) = *(float *)(puVar19 + 0x31) * fVar8;
                  *(float *)((int)puVar19 + 0x18c) =
                       *(float *)((int)puVar19 + 0x18c) * fVar8 * fVar6;
                  do {
                    *(float *)((int)lVar27 + 0x180) =
                         *(float *)((int)lVar27 + 0x170) * fVar8 * fVar8;
                    iVar33 = (int)lVar32;
                    lVar32 = lVar32 + 8;
                    lVar27 = lVar27 + 8;
                    *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar8 * fVar8;
                    lVar35 = lVar35 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar40 = 4;
                  lVar35 = uVar25 - 0x100;
                  pfVar34 = (float *)&DAT_007358e0;
                  lVar27 = lVar28;
                  lVar32 = lVar35;
                  do {
                    fVar8 = *pfVar34;
                    fVar6 = pfVar34[1];
                    pfVar34 = pfVar34 + 2;
                    *(float *)((int)lVar27 + 0x180) = *(float *)((int)lVar27 + 0x180) * fVar8;
                    lVar27 = lVar27 + 8;
                    *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
                    lVar32 = lVar32 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar32 = 2;
                  lVar27 = lVar28;
                  dVar41 = dVar47;
                  do {
                    iVar33 = (int)lVar27;
                    iVar20 = (int)lVar35;
                    lVar27 = lVar27 + 0x10;
                    lVar35 = lVar35 + 0x10;
                    dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar33 + 0x180)) +
                                      *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                     *(float *)(iVar20 + 0xc));
                    lVar32 = lVar32 + -1;
                  } while (lVar32 != 0);
                  dVar45 = (double)((float)(dVar41 + 0.7853981852531433) * fVar12 + fVar5);
                }
                dVar43 = ABS(dVar43);
                *(float *)((int)pvVar10 + 0x4c) = (float)-dVar45;
                *(float *)(puVar19 + 0x26) = fVar4;
                *(float *)((int)puVar19 + 0x134) = (float)(dVar43 - ABS(dVar42));
                uVar37 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)((int)puVar19 + 0x134) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)(puVar19 + 0x26) >> 0x1d) & 4;
                dVar41 = dVar43;
                if ((double)*(float *)((int)puVar19 + 0x134) - dVar47 < 0.0) {
                  dVar41 = ABS(dVar42);
                }
                dVar42 = ABS((double)*(float *)(puVar19 + 0x26));
                if ((double)*(float *)((int)puVar19 + 0x134) - dVar47 < 0.0) {
                  dVar42 = dVar43;
                }
                fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
                fVar12 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                if (dVar47 < dVar41) {
                  lVar27 = uVar25 - 0x270;
                  lVar32 = uVar25 - 0x120;
                  lVar35 = uVar25 - 0x110;
                  lVar40 = 2;
                  fVar5 = (float)(dVar42 - dVar41) / (float)(dVar42 + dVar41);
                  fVar7 = fVar5 * fVar5;
                  *(float *)((int)puVar19 + 0x16c) = fVar5;
                  *(float *)((int)puVar19 + 0x164) = fVar5;
                  *(float *)(puVar19 + 0x2d) = fVar5;
                  *(float *)(puVar19 + 0x2c) = fVar5;
                  fVar5 = fVar7 * fVar7;
                  *(float *)((int)puVar19 + 0x164) = *(float *)((int)puVar19 + 0x164) * fVar7;
                  *(float *)(puVar19 + 0x2d) = *(float *)(puVar19 + 0x2d) * fVar5;
                  *(float *)((int)puVar19 + 0x16c) =
                       *(float *)((int)puVar19 + 0x16c) * fVar5 * fVar7;
                  do {
                    *(float *)((int)lVar27 + 0x160) =
                         *(float *)((int)lVar27 + 0x150) * fVar5 * fVar5;
                    iVar33 = (int)lVar32;
                    lVar27 = lVar27 + 8;
                    lVar32 = lVar32 + 8;
                    *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar5 * fVar5;
                    lVar35 = lVar35 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar40 = 4;
                  lVar35 = uVar25 - 0x120;
                  pfVar34 = (float *)&DAT_007358e0;
                  lVar27 = lVar28;
                  lVar32 = lVar35;
                  do {
                    fVar5 = *pfVar34;
                    fVar7 = pfVar34[1];
                    pfVar34 = pfVar34 + 2;
                    *(float *)((int)lVar27 + 0x160) = *(float *)((int)lVar27 + 0x160) * fVar5;
                    lVar27 = lVar27 + 8;
                    *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
                    lVar32 = lVar32 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar27 = 2;
                  do {
                    iVar33 = (int)lVar28;
                    iVar20 = (int)lVar35;
                    lVar28 = lVar28 + 0x10;
                    lVar35 = lVar35 + 0x10;
                    dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar33 + 0x160)) +
                                      *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                     *(float *)(iVar20 + 0xc));
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                  dVar47 = (double)((float)(dVar47 + 0.7853981852531433) * fVar4 + fVar12);
                }
                *(float *)((int)pvVar10 + 0x50) = (float)dVar47;
              }
            }
            if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
              MB_PlatformLocalToWorld
                        (lVar26,g_CollOutput.pMoby,lVar38,lVar26 + 0x40,lVar38,lVar26 + 0x40);
            }
          }
        }
      }
      else {
        lVar28 = lVar26 + 0x10;
        dVar41 = (double)GetGroundZ(0x3fe0000000000000,lVar28,0);
        if ((dVar41 != 0.0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) {
          MB_PlatformLocalToWorld
                    (lVar26,g_CollOutput.pMoby,lVar28,lVar26 + 0x40,lVar28,lVar26 + 0x40);
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->unk58 = 0.0;
        }
        iVar33 = FastDecTimerS16(uVar39 + 0x44);
        if ((iVar33 != 0) || ((moby->field43_0x70 & 2U) != 0)) {
          moby->state = '\x06';
        }
      }
    }
    else if (bVar1 < 7) {
      lVar28 = lVar26 + 0x10;
      dVar41 = (double)GetGroundZ(0x3fe0000000000000,lVar28,0);
      if ((dVar41 != 0.0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) {
        MB_PlatformLocalToWorld
                  (lVar26,g_CollOutput.pMoby,lVar28,lVar26 + 0x40,lVar28,lVar26 + 0x40);
      }
      fVar12 = -(DAT_0071f408 * 0.02 * moby->scale - moby->scale);
      moby->scale = fVar12;
      if (fVar12 < moby->pClass->gScale * 0.1) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\0';
    }
  }
  else {
    MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
    DeleteMoby(moby);
  }
  return;
}


// 0x02ea73c (0x14 bytes)
void M1900_002ea73c(void)

{
  DAT_007fea8c = 0x10000;
  return;
}


