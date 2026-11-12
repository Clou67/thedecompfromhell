// game/update/moby1356.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x257bf0-0x259954
#include "game/update/moby1356.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby500.h"
#include "game/update/moby639.h"
#include "idol/fastfunc.h"

// 0x0257bf0 (0x14c bytes)
undefined8 FUN_00257bf0(undefined4 param_1,longlong param_2,f32 *param_3)

{
  ushort uVar1;
  void *pvVar2;
  u16 *puVar3;
  GPiece<16> auVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  undefined8 in_r0;
  undefined8 uVar7;
  ushort *puVar8;
  void *pvVar9;
  int iVar10;
  byte in_cr6;
  GPiece<16> auVar11;
  
  puVar8 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar8 == (ushort *)0x0) {
    uVar7 = 1;
  }
  else {
    auVar4 = ZEXT416(0);
    uVar7 = 1;
    auVar11 = loadVectorLeftIndexed(in_r0,0x257bec);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    do {
      pMVar6 = g_MobyInstance;
      uVar5 = *puVar8 & 0x7fff;
      if ((g_MobyInstance[uVar5].oClass == DREK_FIGHT_MISSILE) &&
         (g_MobyInstance[uVar5].state == '\x01')) {
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,
                   auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        uVar7 = 0;
        g_MobyInstance[uVar5].pos.x = *param_3;
        iVar10 = 0;
        pvVar2 = pMVar6[uVar5].pVar;
        pMVar6[uVar5].pos.y = param_3[1];
        pMVar6[uVar5].pos.z = param_3[2];
        pMVar6[uVar5].pos.w = param_3[3];
        pvVar9 = pvVar2;
        if ((bool)(in_cr6 >> 1 & 1)) {
          do {
            iVar10 = iVar10 + 1;
            *(f32 *)((int)pvVar9 + 0x10) = pMVar6[uVar5].pos.x;
            *(f32 *)((int)pvVar9 + 0x14) = pMVar6[uVar5].pos.y;
            *(f32 *)((int)pvVar9 + 0x18) = pMVar6[uVar5].pos.z;
            *(f32 *)((int)pvVar9 + 0x1c) = pMVar6[uVar5].pos.w;
            pvVar9 = (void *)((int)pvVar9 + 0x10);
          } while ((float)(longlong)iVar10 < 4.0);
        }
        *(undefined4 *)((int)pvVar2 + 0x16c) = param_1;
        pMVar6[uVar5].enabled = '\x01';
        pMVar6[uVar5].modeBits =
             pMVar6[uVar5].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        puVar3 = (pMVar6[uVar5].pClass)->collision;
        pMVar6[uVar5].state = '\x02';
        pMVar6[uVar5].collision = puVar3;
      }
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (-1 < (short)uVar1);
  }
  return uVar7;
}


// 0x0257d50 (0x394 bytes)
void M1356_00257d50(int param_1)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  void *pvVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  short sVar11;
  uint uVar10;
  float *pfVar12;
  ulonglong unaff_r23;
  longlong lVar13;
  ulonglong unaff_r24;
  longlong lVar14;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  undefined4 *puVar16;
  ulonglong unaff_r27;
  undefined4 *puVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  int iVar19;
  ulonglong unaff_r31;
  ushort *puVar20;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  float local_990 [612];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa00;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x142] = in_LR;
  puVar5[0x13c] = in_f28;
  puVar5[0x13d] = in_f29;
  puVar5[0x13e] = in_f30;
  puVar5[0x13f] = in_f31;
  puVar5[0x13b] = unaff_r31;
  iVar19 = DAT_00fa3f0c;
  puVar5[0x13a] = unaff_r30;
  puVar5[0x139] = unaff_r29;
  puVar5[0x138] = unaff_r28;
  puVar5[0x137] = unaff_r27;
  puVar5[0x136] = unaff_r26;
  puVar5[0x135] = unaff_r25;
  puVar5[0x134] = unaff_r24;
  puVar5[0x133] = unaff_r23;
  if (iVar19 == 0) {
    iVar19 = 0;
    lVar13 = lVar1;
    do {
      uVar8 = GetEffectTex(0x13);
      iVar18 = (int)lVar13;
      *(undefined8 *)(iVar18 + 0x108) = uVar8;
      uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar18 + 0x110) = uVar8;
      uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
      *(undefined8 *)(iVar18 + 0x100) = uVar8;
      uVar8 = idol_draw::PackCmd(DAT_00fa3f14,DAT_0079bcf8,DAT_00fa3f18,DAT_0079bcfc,0x80);
      *(undefined8 *)(iVar18 + 0x118) = uVar8;
      dVar22 = (double)FastIntToDouble(worldUpdateTime + 3U & 3);
      iVar18 = 0;
      puVar17 = &DAT_0079bd08;
      dVar27 = 0.25;
      puVar16 = &DAT_0079bd0c;
      dVar26 = 1.0;
      dVar25 = 0.0;
      dVar22 = (double)(float)(dVar22 * 0.0625);
      lVar14 = lVar13;
      lVar15 = lVar13;
      do {
        uVar9 = *puVar16;
        *(undefined4 *)((int)lVar15 + 0xe0) = *puVar17;
        *(undefined4 *)((int)lVar15 + 0xe4) = uVar9;
        dVar23 = (double)FastIntToDouble((iVar19 - (iVar18 >> 1)) + 1);
        dVar24 = (double)(float)(dVar23 * dVar27 + dVar22);
        dVar23 = dVar26;
        if ((dVar24 <= dVar26) && (dVar23 = dVar24, dVar24 < dVar25)) {
          dVar23 = dVar25;
        }
        uVar9 = FastLerpColor(dVar23,DAT_0079bd00,DAT_0079bd04);
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)lVar14 + 0xd0) = uVar9;
        puVar17 = puVar17 + 2;
        lVar15 = lVar15 + 8;
        puVar16 = puVar16 + 2;
        lVar14 = lVar14 + 4;
      } while (iVar18 < 4);
      iVar19 = iVar19 + 1;
      lVar13 = lVar13 + 0x90;
    } while (iVar19 < 0x10);
    *(undefined4 *)(puVar5 + 0xe) = 0;
    bVar2 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)((int)puVar5 + 0x74) = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0x3e19999a;
    *(undefined4 *)((int)puVar5 + 0x7c) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)((int)puVar5 + 0x84) = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0xbe19999a;
    *(undefined4 *)((int)puVar5 + 0x8c) = 0;
    puVar20 = (ushort *)(&g_MobyGroups)[bVar2];
    do {
      do {
      } while (g_MobyInstance[*puVar20 & 0x7fff].oClass != DREK_FIGHT_MISSILE);
      pvVar4 = g_MobyInstance[*puVar20 & 0x7fff].pVar;
      lVar14 = 0;
      sVar11 = *(short *)((int)pvVar4 + 0x164);
      lVar13 = lVar1;
      if (0 < sVar11) {
        do {
          lVar13 = lVar13 + 0x90;
          uVar3 = *(ushort *)((int)pvVar4 + 0x166);
          if (DAT_00fa3f10 == 0) {
            uVar10 = 0;
            lVar21 = 4;
            lVar15 = lVar13;
            do {
              uVar7 = uVar10 & 1;
              uVar6 = (uint)(((longlong)((int)uVar10 >> 1) +
                              (((ulonglong)uVar3 - lVar14) + 0xf & 0xf) & 0xffffffff) << 4) & 0xf0;
              uVar10 = uVar10 + 1;
              pfVar12 = (float *)lVar15;
              *pfVar12 = *(float *)((int)pvVar4 + uVar6 + 0x10) + local_990[uVar7 * 4];
              pfVar12[1] = *(float *)((int)pvVar4 + uVar6 + 0x14) + local_990[uVar7 * 4 + 1];
              pfVar12[2] = *(float *)((int)pvVar4 + uVar6 + 0x18) + local_990[uVar7 * 4 + 2];
              pfVar12[3] = *(float *)((int)pvVar4 + uVar6 + 0x1c);
              lVar15 = lVar15 + 0x10;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            FastDrawQuad(lVar13,0,0,EffectTexHeaders,9);
            sVar11 = *(short *)((int)pvVar4 + 0x164);
          }
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 < (int)sVar11);
      }
      uVar3 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (-1 < (short)uVar3);
  }
  return;
}


// 0x0258108 (0x2d8 bytes)
void M1356_00258108(int param_1)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  ushort *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  GPiece<24> local_80;
  
  if (DAT_00fa3f0c == 0) {
    dVar14 = 3.141592502593994;
    dVar15 = -3.141592502593994;
    puVar7 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar16 = -0.16666656732559204;
    dVar17 = 0.008333025500178337;
    dVar18 = -0.0001980741071747616;
    dVar19 = 2.601886990305502e-06;
    dVar20 = 0.5;
    dVar12 = (double)(DAT_0079bd28 * 0.017453292 * g_FrameTime);
    uVar21 = 0;
    dVar13 = (double)(DAT_0079bd2c * 0.017453292 * g_FrameTime);
    do {
      pMVar5 = g_MobyInstance;
      uVar4 = *puVar7 & 0x7fff;
      if (g_MobyInstance[uVar4].oClass == DREK_FIGHT_MISSILE) {
        pvVar3 = g_MobyInstance[uVar4].pVar;
        dVar8 = (double)*(float *)((int)pvVar3 + 0x168);
        dVar10 = (double)(float)(dVar14 - dVar8);
        if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
          dVar10 = dVar8;
        }
        dVar9 = (double)(float)(dVar15 - dVar8);
        if ((double)(float)(dVar15 - dVar8) - dVar10 < 0.0) {
          dVar9 = dVar10;
        }
        dVar10 = (double)(float)(dVar9 * dVar9);
        dVar11 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar9));
        dVar8 = (double)(float)(dVar10 * dVar11);
        uVar6 = FastLerpColor
                          ((double)(float)((double)(float)((double)(float)(dVar10 * dVar8) * dVar19
                                                          + (double)(float)(dVar8 * dVar18 +
                                                                           (double)(float)(dVar11 * 
                                                  dVar17 + (double)(float)((double)(float)(dVar10 * 
                                                  dVar9) * dVar16 + dVar9)))) * dVar20 + dVar20),
                           DAT_0079bd30,DAT_0079bd34);
        bVar1 = pMVar5[uVar4].state;
        if (bVar1 < 4) {
          if (1 < bVar1) {
            MB_DrawGlowFX((double)DAT_0079bd38,uVar21,local_80,uVar6);
            dVar10 = (double)FastWrapRot(*(float *)((int)pvVar3 + 0x168),(float)dVar12);
            *(float *)((int)pvVar3 + 0x168) = (float)dVar10;
          }
        }
        else if (bVar1 < 5) {
          MB_DrawGlowFX((double)DAT_0079bd38,uVar21,local_80,uVar6);
          dVar10 = (double)FastWrapRot(*(float *)((int)pvVar3 + 0x168),(float)dVar13);
          *(float *)((int)pvVar3 + 0x168) = (float)dVar10;
        }
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x02583e8 (0x58 bytes)
void M1356_002583e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x144) = *(undefined4 *)(iVar1 + 0x17c);
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),param_1,iVar1 + 0xe0,2);
  return;
}


// 0x0258440 (0x178 bytes)
bool M1356_00258440(int param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  double dVar9;
  float local_40 [2];
  longlong local_38;
  
  iVar2 = *(int *)(param_1 + 0x78);
  local_38 = (longlong)*(int *)(iVar2 + 0x168);
  dVar9 = (double)((float)local_38 + *(float *)(iVar2 + 0x16c) +
                  *(float *)(iVar2 + 0x170) / *(float *)(iVar2 + 0x174));
  iVar8 = FastDoubleToInt(dVar9);
  local_38 = (longlong)iVar8;
  *(int *)(iVar2 + 0x168) = iVar8;
  uVar3 = *param_2;
  bVar1 = (int)((ulonglong)uVar3 - 1) <= iVar8;
  *(float *)(iVar2 + 0x16c) = (float)(dVar9 - (double)local_38);
  if (!bVar1) {
    MB_PathEvalSpline
              (dVar9,param_2,(ulonglong)uVar3 - 1,0,param_1 + 0x10,param_1 + 0x40,0);
    uVar3 = *param_2;
    *(undefined4 *)(iVar2 + 0x194) = *(undefined4 *)(param_1 + 0x18);
    pfVar6 = (float *)(param_2 + uVar3 * 4);
    local_40[0] = 0.0;
    fVar4 = *(float *)(param_1 + 0x14) - pfVar6[1];
    fVar5 = *(float *)(param_1 + 0x10) - *pfVar6;
    fVar7 = *(float *)(param_1 + 0x18) - pfVar6[2];
    OrganicDelt
              (SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4),DAT_0079bd4c * DAT_0071f418,
               DAT_0079bd4c * DAT_0071f418,DAT_0079bd48 * g_FrameTime,local_40,0x7a0000,
               (float *)(iVar2 + 0x170));
  }
  return bVar1;
}


// 0x02585c0 (0x21c bytes)
// inlined: FastAtan2 @0x25869c
void M1356_002585c0(int *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x60;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  iVar13 = *param_1;
  iVar12 = 0;
  piVar11 = param_1;
  if (0 < iVar13 + -1) {
    do {
      fVar2 = (float)piVar11[9];
      fVar3 = (float)piVar11[5];
      fVar5 = ABS((float)piVar11[8] - (float)piVar11[4]);
      fVar4 = ABS(fVar2 - fVar3);
      *(float *)(puVar7 + 6) = (float)piVar11[8] - (float)piVar11[4];
      *(float *)((int)puVar7 + 0x34) = fVar2 - fVar3;
      *(float *)(puVar7 + 7) = fVar5 - fVar4;
      fVar2 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar7 + 6) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 7) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x34) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar7 + 6));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar7 + 0x34));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar10 - 0x50;
        lVar14 = uVar10 - 0x14;
        lVar16 = uVar10 - 0x24;
        lVar19 = 2;
        fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar7 + 9) = fVar3;
        *(float *)(puVar7 + 8) = fVar3;
        *(float *)((int)puVar7 + 0x44) = fVar3;
        *(float *)((int)puVar7 + 0x3c) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar7 + 8) = *(float *)(puVar7 + 8) * fVar5;
        *(float *)((int)puVar7 + 0x44) = *(float *)((int)puVar7 + 0x44) * fVar3;
        *(float *)(puVar7 + 9) = *(float *)(puVar7 + 9) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x2c) * fVar3 * fVar3;
          iVar13 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar17 = uVar10 - 0x24;
        lVar19 = 4;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar17;
        lVar16 = lVar1;
        do {
          fVar3 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x3c) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar16 = 2;
        lVar14 = lVar1;
        do {
          iVar13 = (int)lVar14;
          iVar9 = (int)lVar17;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar13 + 0x3c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                  + *(float *)(iVar9 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar4;
      }
      iVar13 = *param_1;
      iVar12 = iVar12 + 1;
      piVar11[7] = (int)fVar2;
      piVar11 = piVar11 + 4;
    } while (iVar12 < iVar13 + -1);
  }
  if (1 < iVar13) {
    param_1[iVar13 * 4 + 3] = param_1[iVar13 * 4 + -1];
  }
  return;
}


// 0x02587f8 (0x3e8 bytes)
void M1356_002587f8(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  float fVar3;
  MobyInstance *pMVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  int local_30;
  float local_2c;
  
  pvVar1 = param_1->pVar;
  uVar8 = ZEXT48(pvVar1);
  param_1->scale = param_1->pClass->gScale * DAT_0079bd40;
  if (param_1->state < 6 && 1 < param_1->state) {
    iVar5 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar1 + 400));
    if (iVar5 == 0) {
      iVar5 = PlayMobySound(0,4,param_1);
      *(int *)((int)pvVar1 + 400) = iVar5;
    }
  }
  else {
    iVar5 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar1 + 400));
    if (iVar5 != 0) {
      iVar5 = *(int *)((int)pvVar1 + 400);
      if (((iVar5 != -1) && (g_SoundChannels[iVar5].pMoby == param_1)) &&
         (g_SoundChannels[iVar5].state != '\0')) {
        sound_Kill(iVar5);
      }
      *(undefined4 *)((int)pvVar1 + 400) = 0xffffffff;
    }
  }
  dVar9 = 0.0;
  local_2c = 0.0;
  uVar6 = MB_damage(param_1,0x330000,0);
  iVar5 = MB_HandleDamage(param_1,uVar6,uVar8 + 0x20,0,&local_30,&local_2c,0,4);
  if ((local_30 == 1) || (param_1->state == '\b')) goto LAB_00258af8;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_2c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if (((double)fVar3 <= dVar9) ||
     ((g_heroType == '\x02' &&
      (0x3fffffff <
       (int)(FLOAT_ORDER(local_2c)))))) {
LAB_00258a20:
    PlayMobySound(3,0,param_1);
    if (g_heroType != '\x02') {
      PlayMobySound(2,0,param_1);
    }
    iVar5 = 0;
    uVar7 = uVar8;
    do {
      iVar2 = *(int *)((int)uVar7 + 0xc0);
      if (-1 < iVar2) {
        DeleteMoby(g_MobyInstance + iVar2);
      }
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 + 4;
    } while (iVar5 < 4);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    param_1->state = '\b';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x10,0x2587dc);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x160,uVar8);
    *(undefined4 *)((int)pvVar1 + 0x160U & 0xfffffffc) = uVar6;
    *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
  }
  else if (iVar5 < 3) {
    if (0 < iVar5) goto LAB_00258a20;
  }
  else if (iVar5 < 9) {
    PlayMobySound(3,0,param_1);
    *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    dVar9 = (double)MB_randRangeSigned(0x403e000000000000,0x4049000000000000);
    *(float *)((int)pvVar1 + 0x188) = (float)(dVar9 * 0.01745329238474369) * g_FrameTime;
  }
  MB_UpdateLightsTransition(param_1,uVar8 + 0x60);
LAB_00258af8:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar8 + 0x60);
  if ((*(int *)((int)pvVar1 + 0xd0) == -1) || (g_heroStateType == 0x16)) {
    *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
  }
  else {
    MB_getTargetInArea
              (0x4060000000000000,param_1,uVar8 + 0x70,&DAT_002587dc,0,0,
               Splines[*(int *)((int)pvVar1 + 0xd0)]->points,
               Splines[*(int *)((int)pvVar1 + 0xd0)]->cnt);
  }
  pMVar4 = g_heroMobyPtr;
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(float *)((int)pvVar1 + 0x70) = g_heroPosition.x;
    fVar3 = g_heroPosition.y;
    *(MobyInstance **)((int)pvVar1 + 0xb0) = pMVar4;
    *(float *)((int)pvVar1 + 0x74) = fVar3;
    *(float *)((int)pvVar1 + 0x78) = g_heroPosition.z;
    *(float *)((int)pvVar1 + 0x7c) = g_heroPosition.w;
  }
  return;
}


// 0x0258c50 (0xd04 bytes)
// inlined: FastAtan2 @0x2593f0
/* Moby 1356 */

void UpdateMoby_1356(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  u16 *puVar8;
  void *pvVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  int iVar17;
  u8 uVar20;
  int iVar18;
  MobyInstance *pMVar19;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  undefined8 uVar35;
  ulonglong in_f31;
  double dVar36;
  undefined8 uVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  float fVar43;
  
  lVar16 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x170;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar21;
  puVar12[0x30] = in_LR;
  puVar12[0x2c] = in_f30;
  puVar12[0x2d] = in_f31;
  puVar12[0x2b] = unaff_r31;
  puVar12[0x29] = unaff_r29;
  puVar12[0x2a] = unaff_r30;
  puVar12[0x28] = unaff_r28;
  puVar12[0x27] = unaff_r27;
  puVar12[0x26] = unaff_r26;
  pvVar7 = moby->pVar;
  uVar28 = ZEXT48(pvVar7);
  dVar30 = (double)M1356_002587f8();
  fVar43 = g_FrameTime;
  bVar1 = moby->state;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x41400000;
      *(undefined2 *)((int)pvVar7 + 0x24) = 0xc;
      *(undefined1 *)((int)pvVar7 + 0x28) = 3;
      if (*(int *)((int)pvVar7 + 0xd8) != -1) {
        M1356_002585c0(Splines[*(int *)((int)pvVar7 + 0xd8)]);
      }
      if (*(int *)((int)pvVar7 + 0xdc) != -1) {
        M1356_002585c0(Splines[*(int *)((int)pvVar7 + 0xdc)]);
      }
      *(undefined4 *)((int)pvVar7 + 0x16c) = 0;
      fVar2 = DAT_0079bd48;
      fVar43 = g_FrameTime;
      *(undefined4 *)((int)pvVar7 + 0x168) = 0;
      *(float *)((int)pvVar7 + 0x170) = fVar2 * fVar43;
      *(f32 *)((int)pvVar7 + 0x194) = (moby->pos).z;
      if (*(int *)((int)pvVar7 + 0xd8) == -1) {
        moby->state = '\x06';
      }
      else {
        pSVar10 = Splines[*(int *)((int)pvVar7 + 0xd8)];
        fVar43 = pSVar10->points[0].y - pSVar10->points[1].y;
        fVar2 = pSVar10->points[0].x - pSVar10->points[1].x;
        fVar5 = pSVar10->points[0].z - pSVar10->points[1].z;
        MVar6 = moby->modeBits;
        *(float *)((int)pvVar7 + 0x174) = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar43 * fVar43);
        (moby->pos).x = pSVar10->points[0].x;
        (moby->pos).y = pSVar10->points[0].y;
        (moby->pos).z = pSVar10->points[0].z;
        fVar43 = pSVar10->points[0].w;
        moby->enabled = '\0';
        (moby->pos).w = fVar43;
        moby->collision = (ushort *)0x0;
        moby->modeBits =
             MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
        moby->state = '\x01';
      }
    }
    else if (bVar1 < 2) {
      if ((g_gameMode == GAME_MODE_NORMAL) &&
         ((*(int *)((int)pvVar7 + 0xd4) == -1 ||
          (iVar18 = PointInsideComplexPoly
                              (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar7 + 0xd4)]->points
                               ,Splines[*(int *)((int)pvVar7 + 0xd4)]->cnt), iVar18 != 0)))) {
        MVar6 = moby->modeBits;
        iVar18 = 0;
        moby->state = '\x02';
        moby->enabled = '\x01';
        puVar8 = moby->pClass->collision;
        *(undefined4 *)(puVar12 + 0x18) = 0;
        moby->collision = puVar8;
        moby->modeBits =
             MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
        *(undefined4 *)((int)puVar12 + 0xc4) = 0;
        *(undefined4 *)(puVar12 + 0x19) = 0x40490fd0;
        *(undefined4 *)((int)puVar12 + 0xcc) = 0;
        do {
          iVar17 = *(int *)((int)uVar28 + 0xc0);
          if (-1 < iVar17) {
            FUN_003fd8d8(g_MobyInstance + iVar17,lVar16,&DAT_0079bd50,uVar21 - 0xb0);
          }
          iVar18 = iVar18 + 1;
          uVar28 = uVar28 + 4;
        } while (iVar18 < 4);
      }
    }
    else if (bVar1 < 3) {
      iVar18 = (int)(-1 - (longlong)*(int *)((int)pvVar7 + 0xc0) >> 0x3f);
      iVar18 = ((uint)(-1 - (longlong)*(int *)((int)pvVar7 + 0xc4) >> 0x3f) & iVar18 + 1U) - iVar18;
      iVar18 = iVar18 + ((uint)(-1 - (longlong)*(int *)((int)pvVar7 + 200) >> 0x3f) & 1U - iVar18);
      iVar18 = iVar18 + ((uint)(-1 - (longlong)*(int *)((int)pvVar7 + 0xcc) >> 0x3f) & 1U - iVar18);
      pSVar10 = Splines[*(int *)((int)pvVar7 + 0xd8)];
      if (iVar18 != 0) {
        auVar38 = ZEXT416(0xffffffff);
        auVar42 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = loadVectorLeftIndexed(0x168,uVar28);
        auVar39 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar10));
        auVar41 = loadVectorRightIndexed(0x178,uVar28);
        auVar40 = loadVectorLeftIndexed(0x174,uVar28);
        auVar38 = vectorSubtractUnsignedWordModulo(auVar39,auVar38 | auVar41);
        auVar39 = loadVectorRightIndexed(0x184,uVar28);
        auVar38 = vectorConvertFromSignedFixedPointWord(auVar38,0);
        auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(in_LR,0x258be0);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar40 | auVar39,auVar41);
        auVar38 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                   auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          fVar43 = OrganicDelt
                             (1.5707964,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                              g_FrameTime * 6.2831855,(float *)((int)pvVar7 + 0x17c),
                              0x720000,(float *)((int)pvVar7 + 0x180));
          dVar30 = (double)fVar43;
        }
      }
      iVar17 = M1356_00258440(dVar30,lVar16,ZEXT48(pSVar10));
      if (iVar17 != 0) {
        uVar20 = '\x03';
        if (iVar18 == 0) {
          uVar20 = ((byte)(ZERO_MASK((-1 - *(int *)((int)pvVar7 + 0xdc)))) & 2) + 4;
        }
        moby->state = uVar20;
      }
    }
    else {
      iVar18 = FastDecTimerS32(uVar28 + 0x184);
      if (iVar18 != 0) {
        iVar18 = 0;
        fVar43 = (moby->rotation).z;
        uVar21 = uVar28;
        do {
          if (-1 < *(int *)((int)uVar21 + 0xc0)) {
            pMVar19 = g_MobyInstance + *(int *)((int)pvVar7 + iVar18 * 4 + 0xc0);
            FastWrapRot(fVar43,3.14159);
            puVar12[0x24] = (longlong)(int)(animationSpeed * 90.5);
            FUN_003fd918(pMVar19,*(undefined4 *)((int)puVar12 + 0x124));
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            *(undefined4 *)((int)pvVar7 + iVar18 * 4 + 0xc0) = 0xffffffff;
            auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x18,0x258be0);
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar38 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60,auVar39);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x184,
                                uVar28);
            *(undefined4 *)((int)pvVar7 + 0x184U & 0xfffffffc) = uVar11;
            break;
          }
          if (iVar18 == 3) {
            moby->state = ((byte)(ZERO_MASK((-1 - *(int *)((int)pvVar7 + 0xdc)))) & 2)
                          + 4;
          }
          iVar18 = iVar18 + 1;
          uVar21 = uVar21 + 4;
        } while (iVar18 < 4);
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      fVar43 = Splines[*(int *)((int)pvVar7 + 0xdc)]->points[0].w;
      dVar30 = (double)fVar43;
      OrganicDelt
                (fVar43,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,
                 (int)Splines[*(int *)((int)pvVar7 + 0xdc)],(float *)((int)pvVar7 + 0x178));
      dVar30 = (double)FastSubRots((moby->rotation).z,(float)dVar30);
      if (dVar30 < 0.009999999776482582) {
        moby->state = '\x05';
        *(undefined4 *)((int)pvVar7 + 0x168) = 0;
        *(undefined4 *)((int)pvVar7 + 0x16c) = 0;
      }
    }
    else if (bVar1 < 6) {
      fVar43 = OrganicDelt
                         (0.0,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          g_FrameTime * 6.2831855,(float *)((int)pvVar7 + 0x17c),0x720000,
                          (float *)((int)pvVar7 + 0x180));
      iVar18 = M1356_00258440
                         ((double)fVar43,lVar16,Splines[*(int *)((int)pvVar7 + 0xdc)]);
      if (iVar18 != 0) {
        if (*(int *)((int)pvVar7 + 0xd0) == -1) {
          DeleteMoby(moby);
          return;
        }
        moby->state = '\x06';
      }
    }
    else {
      dVar36 = 0.0;
      dVar34 = 6.2831854820251465;
      OrganicDelt
                (0.0,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 g_FrameTime * 6.2831855,(float *)((int)pvVar7 + 0x17c),0x258be0,
                 (float *)((int)pvVar7 + 0x180));
      fVar43 = *(float *)((int)pvVar7 + 0x70) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar7 + 0x74) - (moby->pos).y;
      dVar31 = ABS((double)fVar43);
      dVar33 = ABS((double)fVar2);
      *(float *)(puVar12 + 0x1e) = fVar43;
      *(float *)((int)puVar12 + 0xf4) = fVar2;
      *(float *)(puVar12 + 0x1f) = (float)(dVar31 - dVar33);
      fVar43 = DAT_0071f418;
      dVar32 = (double)g_FrameTime;
      uVar26 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
      dVar30 = ABS((double)*(float *)(puVar12 + 0x1e));
      if ((double)*(float *)(puVar12 + 0x1f) - dVar36 < 0.0) {
        dVar30 = dVar33;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)((int)puVar12 + 0xf4));
      if ((double)*(float *)(puVar12 + 0x1f) - dVar36 < 0.0) {
        dVar33 = dVar31;
      }
      dVar31 = dVar36;
      if (dVar36 < dVar30) {
        lVar22 = uVar21 - 0x160;
        lVar24 = uVar21 - 0x74;
        lVar27 = uVar21 - 100;
        lVar29 = 2;
        fVar3 = (float)(dVar33 - dVar30) / (float)(dVar33 + dVar30);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x21) = fVar3;
        *(float *)(puVar12 + 0x20) = fVar3;
        *(float *)((int)puVar12 + 0x104) = fVar3;
        *(float *)((int)puVar12 + 0xfc) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar4;
        *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar3;
        *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xec) * fVar3 * fVar3;
          iVar18 = (int)lVar24;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar21 - 0x74;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar27;
        do {
          fVar3 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xfc) * fVar3;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar22 = 2;
        dVar30 = dVar36;
        do {
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar17 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar18 + 0xfc)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar2);
      }
      OrganicDelt
                ((float)dVar31,fVar43 * 3.1415927,fVar43 * 3.1415927,(float)(dVar32 * dVar34),
                 &(moby->rotation).z,0x260000,(float *)((int)pvVar7 + 0x178));
      fVar43 = OrganicDelt
                         ((float)dVar36,DAT_0071f418 * 1.5707964,DAT_0071f418 * 1.5707964,
                          (float)((double)g_FrameTime * dVar34),&(moby->rotation).x,
                          0x720000,(float *)((int)pvVar7 + 0x188));
      iVar18 = FastDecTimerS32((double)fVar43,uVar28 + 0x164);
      if ((iVar18 != 0) && (*(int *)((int)pvVar7 + 0xb4) != 2)) {
        moby->state = '\a';
      }
    }
  }
  else if (bVar1 < 8) {
    GetBonePosition(lVar16,1,uVar21 - 0xa0);
    fVar2 = *(float *)((int)pvVar7 + 0x70) - *(float *)(puVar12 + 0x1a);
    *(float *)(puVar12 + 0x1c) = fVar2;
    fVar5 = *(float *)((int)pvVar7 + 0x74) - *(float *)((int)puVar12 + 0xd4);
    *(float *)((int)puVar12 + 0xe4) = fVar5;
    fVar3 = *(float *)((int)pvVar7 + 0x78) - *(float *)(puVar12 + 0x1b);
    fVar4 = DAT_0079bd44 * g_FrameTime;
    *(float *)(puVar12 + 0x1d) = fVar3;
    *(undefined4 *)((int)puVar12 + 0xec) = *(undefined4 *)((int)pvVar7 + 0x7c);
    fVar43 = 0.0;
    fVar15 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
    fVar4 = fVar4 / fVar15;
    fVar14 = fVar43;
    if (0.0 - fVar15 < 0.0) {
      fVar14 = fVar2 * fVar4;
    }
    fVar13 = fVar43;
    if (0.0 - fVar15 < 0.0) {
      fVar13 = fVar5 * fVar4;
    }
    if (0.0 - fVar15 < 0.0) {
      fVar43 = fVar3 * fVar4;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar14 = fVar2 * fVar4;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar13 = fVar5 * fVar4;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar43 = fVar3 * fVar4;
    }
    *(float *)(puVar12 + 0x1c) = fVar14;
    *(float *)((int)puVar12 + 0xe4) = fVar13;
    *(float *)(puVar12 + 0x1d) = fVar43;
    PlayMobySound(1,0,moby);
    puVar12[0x24] = (longlong)(int)(animationSpeed * 45.5);
    FUN_003a4858(lVar16,uVar21 - 0x90,uVar21 - 0xa0,uVar28 + 0x70,
                 *(undefined4 *)((int)puVar12 + 0x124));
    auVar38 = ZEXT416(0xffffffff);
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    moby->state = '\x06';
    auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar38 = loadVectorLeftIndexed(0x30,0x258be0);
    auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                         auVar39);
    auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x164,uVar28);
    *(undefined4 *)((int)pvVar7 + 0x164U & 0xfffffffc) = uVar11;
  }
  else if (bVar1 < 9) {
    uVar37 = 0x4000000000000000;
    *(float *)((int)pvVar7 + 0x194) =
         -(g_FrameTime * 2.0 - *(float *)((int)pvVar7 + 0x194));
    (moby->rotation).x = fVar43 * 0.2617994 + (moby->rotation).x;
    iVar18 = FastDecTimerS32(uVar28 + 0x160);
    if ((iVar18 != 0) || (g_heroType == '\x02')) {
      lVar22 = lVar16 + 0x10;
      uVar35 = 0;
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4004000000000000,0x4022000000000000,uVar37,0,lVar16,
                 &DAT_00a15d30,lVar22,0,0xffffffffffffffff,0x14,0xc,8);
      lVar23 = lVar16 + 0x40;
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,lVar16,0x634,lVar22,lVar23,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,lVar16,0x635,lVar22,lVar23,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,lVar16,0x636,lVar22,lVar23,0,0);
      MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
  }
  dVar31 = (double)FastWrapRot
                             (*(float *)((int)pvVar7 + 0x18c),
                              DAT_0079bd90 * 0.017453292 * g_FrameTime);
  *(float *)((int)pvVar7 + 0x18c) = (float)dVar31;
  dVar30 = (double)(float)(3.141592502593994 - dVar31);
  if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
    dVar30 = dVar31;
  }
  dVar32 = (double)(float)(-3.141592502593994 - dVar31);
  if ((double)(float)(-3.141592502593994 - dVar31) - dVar30 < 0.0) {
    dVar32 = dVar30;
  }
  pvVar9 = moby->pVar;
  dVar31 = (double)(float)(dVar32 * dVar32);
  dVar33 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar32));
  dVar30 = (double)(float)(dVar31 * dVar33);
  (moby->pos).z =
       DAT_0079bd94 *
       ((float)(dVar31 * dVar30) * 2.601887e-06 +
       (float)(dVar30 * -0.0001980741071747616 +
              (double)(float)(dVar33 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar31 * dVar32) * -0.16666656732559204
                                            + dVar32)))) + *(float *)((int)pvVar7 + 0x194);
  *(undefined4 *)((int)pvVar9 + 0x144) = *(undefined4 *)((int)pvVar9 + 0x17c);
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar16,(int)pvVar9 + 0xe0,2)
  ;
  return;
}


