// game/update/moby771.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x454348-0x455580
#include "game/update/moby771.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby77.h"
#include "idol/fastfunc.h"

// 0x0454348 (0x330 bytes)
// inlined: FastAtan2 @0x45452c
undefined8 FUN_00454348(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort *puVar16;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  MobyInstance *pMVar20;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xc0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x1a] = in_LR;
  puVar9[0x16] = unaff_r30;
  puVar9[0x17] = unaff_r31;
  puVar9[0x15] = unaff_r29;
  puVar9[0x14] = unaff_r28;
  puVar16 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    pMVar20 = g_MobyInstance + (*puVar16 & 0x7fff);
    if (pMVar20->state == '\x01') {
      pMVar20->state = '\x02';
      if (pMVar20->animationId != '\0') {
        MB_SetAnimation(pMVar20,0,0,0);
      }
      pMVar20->enabled = '\0';
      pvVar7 = pMVar20->pVar;
      pMVar20->modeBits = pMVar20->modeBits | DISABLED;
      pMVar20->collision = pMVar20->pClass->collision;
      dVar22 = (double)MB_randRangeFloat(-15.0,15.0);
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      *(float *)((int)pvVar7 + 100) = (float)(dVar22 * 0.01745329238474369);
      auVar23 = loadVectorLeftIndexed(0xc,0x454328);
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar1 = *param_2;
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x68,
                         ZEXT48(pvVar7));
      *(undefined4 *)((int)pvVar7 + 0x68U & 0xfffffffc) = uVar8;
      (pMVar20->pos).x = fVar1;
      fVar2 = param_2[1];
      (pMVar20->pos).y = fVar2;
      fVar3 = param_2[2];
      (pMVar20->pos).z = fVar3;
      (pMVar20->pos).w = param_2[3];
      (pMVar20->pos).z = fVar3 - 1.0;
      fVar1 = g_heroPosition.x - fVar1;
      fVar2 = g_heroPosition.y - fVar2;
      fVar3 = ABS(fVar1);
      fVar5 = ABS(fVar2);
      *(float *)(puVar9 + 0xe) = fVar1;
      *(float *)((int)puVar9 + 0x74) = fVar2;
      *(float *)(puVar9 + 0xf) = fVar3 - fVar5;
      fVar1 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar18 = uVar12 - 0xb0;
        lVar14 = uVar12 - 0x44;
        lVar13 = uVar12 - 0x34;
        lVar21 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar9 + 0x11) = fVar2;
        *(float *)(puVar9 + 0x10) = fVar2;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)((int)puVar9 + 0x7c) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
        *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
        *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar2 * fVar2;
          iVar10 = (int)lVar14;
          lVar18 = lVar18 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
          lVar13 = lVar13 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar18 = uVar12 - 0x44;
        pfVar19 = (float *)&DAT_007358e0;
        lVar21 = 4;
        lVar13 = lVar18;
        lVar14 = lVar15;
        do {
          fVar2 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
          lVar13 = lVar13 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar13 = 2;
        do {
          iVar10 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar11 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
      }
      (pMVar20->rotation).z = fVar1;
      return 1;
    }
    uVar6 = *puVar16;
    puVar16 = puVar16 + 1;
  } while (-1 < (short)uVar6);
  return 0;
}


// 0x0454680 (0x610 bytes)
// inlined: FastAtan2 @0x4548b0, FastAtan2 @0x454a6c
void M771_00454680(int param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  ulonglong *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar26;
  ulonglong unaff_r30;
  ushort *puVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1f0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar16;
  puVar10[0x40] = in_LR;
  puVar10[0x3c] = unaff_r30;
  puVar10[0x3d] = unaff_r31;
  puVar10[0x3b] = unaff_r29;
  puVar10[0x3a] = unaff_r28;
  puVar10[0x39] = unaff_r27;
  puVar10[0x38] = unaff_r26;
  puVar10[0x37] = unaff_r25;
  puVar10[0x36] = unaff_r24;
  puVar10[0x35] = unaff_r23;
  uVar17 = GetEffectTex(8);
  puVar10[0x27] = uVar17;
  uVar17 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar10[0x28] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar10[0x26] = uVar17;
  uVar17 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar10[0x29] = uVar17;
  bVar2 = *(byte *)(param_1 + 0x21);
  lVar22 = uVar16 - 0xe0;
  puVar19 = &DAT_00873770;
  puVar21 = &DAT_00873774;
  lVar28 = 2;
  lVar24 = uVar16 - 0xdc;
  lVar18 = lVar1;
  do {
    uVar3 = *puVar21;
    *(undefined4 *)((int)lVar18 + 0x110) = *puVar19;
    uVar4 = puVar19[2];
    *(undefined4 *)((int)lVar18 + 0x114) = uVar3;
    puVar19 = puVar19 + 4;
    uVar3 = puVar21[2];
    lVar18 = lVar18 + 0x10;
    *(undefined4 *)((int)lVar22 + 8) = uVar4;
    puVar21 = puVar21 + 4;
    *(undefined4 *)((int)lVar24 + 8) = uVar3;
    lVar22 = lVar22 + 0x10;
    lVar24 = lVar24 + 0x10;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  puVar27 = (ushort *)(&g_MobyGroups)[bVar2];
  do {
    pMVar15 = g_MobyInstance;
    uVar12 = *puVar27 & 0x7fff;
    if (g_MobyInstance[uVar12].state != '\x01') {
      fVar13 = 0.0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x74) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0;
      fVar7 = GameCamera.posX - pMVar15[uVar12].pos.x;
      fVar8 = GameCamera.posY - pMVar15[uVar12].pos.y;
      fVar5 = ABS(fVar7);
      fVar6 = ABS(fVar8);
      *(float *)((int)puVar10 + 0x15c) = fVar7;
      *(float *)(puVar10 + 0x2c) = fVar8;
      *(float *)((int)puVar10 + 0x164) = fVar5 - fVar6;
      uVar17 = (ulonglong)(*(uint *)((int)puVar10 + 0x15c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x164) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x2c) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)((int)puVar10 + 0x15c));
      if (*(float *)((int)puVar10 + 0x164) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar6 = ABS(*(float *)(puVar10 + 0x2c));
      if (*(float *)((int)puVar10 + 0x164) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar14 = fVar13;
      if (0.0 < fVar7) {
        lVar18 = uVar16 - 0x1e0;
        lVar28 = 2;
        lVar22 = uVar16 - 0x68;
        lVar24 = uVar16 - 0x58;
        fVar7 = (fVar6 - fVar7) / (fVar6 + fVar7);
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar10 + 0x194) = fVar7;
        *(float *)((int)puVar10 + 0x18c) = fVar7;
        *(float *)(puVar10 + 0x32) = fVar7;
        *(float *)(puVar10 + 0x31) = fVar7;
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 0x18c) = *(float *)((int)puVar10 + 0x18c) * fVar6;
        *(float *)(puVar10 + 0x32) = *(float *)(puVar10 + 0x32) * fVar7;
        *(float *)((int)puVar10 + 0x194) = *(float *)((int)puVar10 + 0x194) * fVar7 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x178) * fVar7 * fVar7;
          iVar25 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar25 + 4) * fVar7 * fVar7;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = uVar16 - 0x68;
        lVar28 = 4;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar22 = lVar24;
        do {
          fVar7 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x188) * fVar7;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar22 = 2;
        lVar18 = lVar1;
        fVar7 = fVar13;
        do {
          iVar25 = (int)lVar18;
          iVar26 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar25 + 0x188) + *(float *)(iVar26 + 4) +
                  *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar14 = (fVar7 + 0.7853982) * fVar8 + fVar5;
      }
      *(float *)(puVar10 + 0xf) = fVar14;
      fVar7 = pMVar15[uVar12].pos.y - GameCamera.posY;
      fVar8 = pMVar15[uVar12].pos.x - GameCamera.posX;
      fVar5 = GameCamera.posZ - pMVar15[uVar12].pos.z;
      fVar7 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
      *(float *)((int)puVar10 + 0x154) = fVar5;
      fVar5 = ABS(fVar5);
      fVar8 = ABS(fVar7);
      *(float *)(puVar10 + 0x2a) = fVar7;
      *(float *)(puVar10 + 0x2b) = fVar8 - fVar5;
      uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x2a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x2b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x154) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)(puVar10 + 0x2a));
      if (*(float *)(puVar10 + 0x2b) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar6 = ABS(*(float *)((int)puVar10 + 0x154));
      if (*(float *)(puVar10 + 0x2b) - 0.0 < 0.0) {
        fVar6 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      if (0.0 < fVar7) {
        lVar18 = uVar16 - 0x1e0;
        lVar28 = 2;
        lVar22 = uVar16 - 0x88;
        lVar24 = uVar16 - 0x78;
        fVar7 = (fVar6 - fVar7) / (fVar6 + fVar7);
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar10 + 0x174) = fVar7;
        *(float *)((int)puVar10 + 0x16c) = fVar7;
        *(float *)(puVar10 + 0x2e) = fVar7;
        *(float *)(puVar10 + 0x2d) = fVar7;
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 0x16c) = *(float *)((int)puVar10 + 0x16c) * fVar6;
        *(float *)(puVar10 + 0x2e) = *(float *)(puVar10 + 0x2e) * fVar7;
        *(float *)((int)puVar10 + 0x174) = *(float *)((int)puVar10 + 0x174) * fVar7 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x158) * fVar7 * fVar7;
          iVar25 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar25 + 4) * fVar7 * fVar7;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = uVar16 - 0x88;
        lVar28 = 4;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar22 = lVar24;
        do {
          fVar7 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x168) * fVar7;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar22 = 2;
        lVar18 = lVar1;
        do {
          iVar25 = (int)lVar18;
          iVar26 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar13 = fVar13 + *(float *)(iVar25 + 0x168) + *(float *)(iVar26 + 4) +
                   *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar13 = (fVar13 + 0.7853982) * fVar5 + fVar8;
      }
      *(float *)((int)puVar10 + 0x74) = -fVar13;
      FastEulerToMtx1(uVar16 - 0x170,uVar16 - 0x180);
      *(f32 *)(puVar10 + 0x16) = pMVar15[uVar12].pos.x;
      *(f32 *)((int)puVar10 + 0xb4) = pMVar15[uVar12].pos.y;
      fVar8 = DAT_00873660;
      fVar7 = pMVar15[uVar12].pos.z;
      *(float *)(puVar10 + 0x17) = fVar7;
      puVar19 = &DAT_00873670;
      iVar26 = 0;
      *(f32 *)((int)puVar10 + 0xbc) = pMVar15[uVar12].pos.w;
      *(undefined4 *)((int)puVar10 + 0xbc) = 0x3f800000;
      iVar25 = 0;
      *(float *)(puVar10 + 0x17) = fVar7 + fVar8;
      do {
        lVar22 = uVar16 - 0x130;
        lVar24 = 4;
        lVar18 = lVar1;
        puVar21 = puVar19;
        do {
          *(undefined4 *)((int)lVar18 + 0x100) = *(undefined4 *)((int)&DAT_00873790 + iVar25);
          lVar18 = lVar18 + 4;
          puVar20 = (undefined4 *)lVar22;
          *puVar20 = *puVar21;
          puVar20[1] = puVar21[1];
          puVar20[2] = puVar21[2];
          puVar11 = puVar21 + 3;
          puVar21 = puVar21 + 4;
          puVar20[3] = *puVar11;
          lVar22 = lVar22 + 0x10;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        FastDrawQuad(uVar16 - 0x130,uVar16 - 0x170,0,EffectTexHeaders,9);
        iVar26 = iVar26 + 1;
        iVar25 = iVar25 + 4;
        puVar19 = puVar19 + 0x10;
      } while (iVar26 < 4);
    }
    uVar9 = *puVar27;
    puVar27 = puVar27 + 1;
  } while (-1 < (short)uVar9);
  return;
}


// 0x0454c90 (0x14 bytes)
void M771_00454c90(void)

{
  DAT_008737ec = 0x10000;
  return;
}


// 0x0454cb0 (0x2c8 bytes)
// inlined: FastAtan2 @0x454e28
MobyInstance *
M771_00454cb0
          (double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6,
          float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  MobyInstance *pMVar12;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0xe0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x1e] = in_LR;
  puVar6[0x19] = in_f29;
  puVar6[0x1a] = in_f30;
  puVar6[0x1b] = in_f31;
  puVar6[0x13] = unaff_r26;
  puVar6[0x17] = unaff_r30;
  puVar6[0x16] = unaff_r29;
  puVar6[0x15] = unaff_r28;
  puVar6[0x14] = unaff_r27;
  puVar6[0x18] = unaff_r31;
  pMVar12 = CreateMoby(0x303);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0x7e;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\x01';
    pfVar16 = (float *)pMVar12->pVar;
    (pMVar12->pos).x = *param_5;
    (pMVar12->pos).y = param_5[1];
    (pMVar12->pos).z = param_5[2];
    (pMVar12->pos).w = param_5[3];
    fVar4 = *param_4;
    fVar1 = *param_4;
    *pfVar16 = fVar1;
    fVar1 = ABS(fVar1);
    fVar5 = param_4[1];
    fVar3 = ABS(param_4[1]);
    pfVar16[1] = param_4[1];
    pfVar16[2] = param_4[2];
    fVar2 = param_4[3];
    pfVar16[6] = param_8;
    pfVar16[3] = fVar2;
    pfVar16[4] = param_6;
    pfVar16[5] = param_7;
    fVar2 = 0.0;
    pfVar16[10] = 0.0;
    pfVar16[7] = (float)param_1;
    pfVar16[8] = (float)param_2;
    pfVar16[9] = (float)param_3;
    *(float *)(puVar6 + 0xe) = fVar1 - fVar3;
    uVar10 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar10 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar10 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar15 = uVar9 - 0xd0;
      lVar14 = uVar9 - 0x6c;
      lVar13 = uVar9 - 0x5c;
      lVar17 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x10) = fVar4;
      *(float *)(puVar6 + 0xf) = fVar4;
      *(float *)((int)puVar6 + 0x7c) = fVar4;
      *(float *)((int)puVar6 + 0x74) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0xf) = *(float *)(puVar6 + 0xf) * fVar3;
      *(float *)((int)puVar6 + 0x7c) = *(float *)((int)puVar6 + 0x7c) * fVar4;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 100) * fVar4 * fVar4;
        iVar7 = (int)lVar14;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar9 - 0x6c;
      pfVar16 = (float *)&DAT_007358e0;
      lVar17 = 4;
      lVar13 = lVar15;
      lVar14 = lVar11;
      do {
        fVar4 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x74) = *(float *)((int)lVar14 + 0x74) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar7 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar8 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar7 + 0x74) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar5 + fVar1;
    }
    (pMVar12->rotation).z = fVar2;
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// 0x0454fb0 (0x5d0 bytes)
// inlined: FastAtan2 @0x4550e8
/* Moby 771 */

void UpdateMoby_771(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float *impact;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  undefined8 uVar16;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  ulonglong in_f31;
  
  lVar23 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x2b] = in_f31;
  puVar9[0x2a] = unaff_r31;
  bVar1 = moby->state;
  puVar9[0x29] = unaff_r30;
  impact = (float *)moby->pVar;
  puVar9[0x28] = unaff_r29;
  puVar9[0x27] = unaff_r28;
  puVar9[0x26] = unaff_r27;
  puVar9[0x25] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      *(float *)(puVar9 + 0xe) = fVar2;
      fVar4 = (moby->pos).z;
      *(float *)((int)puVar9 + 0x74) = fVar3;
      fVar5 = (moby->pos).w;
      fVar7 = impact[5];
      *(f32 *)(puVar9 + 0xf) = fVar4;
      *(f32 *)((int)puVar9 + 0x7c) = fVar5;
      if (fVar7 == 0.0) {
        MB_getTarget(0x4034000000000000,lVar23,&DAT_00454f78,uVar13 - 0xd0);
        if (*(float *)(puVar9 + 0x1a) != 0.0) {
          impact[5] = *(float *)(puVar9 + 0x1a);
        }
      }
      else {
        fVar2 = *(float *)((int)fVar7 + 0x10) - fVar2;
        fVar3 = *(float *)((int)fVar7 + 0x14) - fVar3;
        uVar18 = ZEXT48(&g_atanQuadrantTable);
        fVar6 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)(puVar9 + 0x1c) = fVar2;
        *(float *)((int)puVar9 + 0xe4) = fVar3;
        *(float *)(puVar9 + 0x1d) = fVar6 - fVar7;
        dVar25 = 0.0;
        uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar9 + 0x1c));
        if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
          fVar2 = fVar7;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        fVar11 = ABS(*(float *)((int)puVar9 + 0xe4));
        if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
          fVar11 = fVar6;
        }
        if (0.0 < fVar2) {
          lVar21 = uVar13 - 0x150;
          lVar20 = uVar13 - 0x74;
          lVar19 = uVar13 - 100;
          lVar24 = 2;
          fVar2 = (fVar11 - fVar2) / (fVar11 + fVar2);
          fVar6 = fVar2 * fVar2;
          *(float *)(puVar9 + 0x1f) = fVar2;
          *(float *)(puVar9 + 0x1e) = fVar2;
          *(float *)((int)puVar9 + 0xf4) = fVar2;
          *(float *)((int)puVar9 + 0xec) = fVar2;
          fVar2 = fVar6 * fVar6;
          *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar6;
          *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar2;
          *(float *)(puVar9 + 0x1f) = *(float *)(puVar9 + 0x1f) * fVar2 * fVar6;
          do {
            *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xdc) * fVar2 * fVar2;
            iVar17 = (int)lVar20;
            lVar21 = lVar21 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          uVar18 = uVar13 - 0x74;
          pfVar22 = (float *)&DAT_007358e0;
          lVar20 = 4;
          uVar14 = uVar18;
          lVar19 = lVar15;
          do {
            fVar2 = *pfVar22;
            fVar6 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar19 + 0xec) = *(float *)((int)lVar19 + 0xec) * fVar2;
            lVar19 = lVar19 + 8;
            *(float *)((int)uVar14 + 4) = *(float *)((int)uVar14 + 4) * fVar6;
            uVar14 = uVar14 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar15;
            lVar15 = lVar15 + 0x10;
            iVar10 = (int)uVar18;
            uVar18 = uVar18 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xec)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar3);
        }
        OrganicDeltAngSpeed
                  (dVar25,(double)impact[7],(double)impact[8],(double)impact[9],lVar23,uVar18,
                   impact + 10);
      }
      fVar2 = (moby->rotation).z + 1.5707963;
      fVar3 = impact[1] * impact[1];
      lVar23 = lVar23 + 0x10;
      fVar7 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar7 = fVar2;
      }
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
        fVar6 = fVar7;
      }
      fVar2 = fVar6 * fVar6;
      fVar7 = fVar2 * fVar2 * fVar6;
      fVar11 = fVar2 * fVar7;
      fVar7 = (fVar2 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) *
              SQRT(*impact * *impact + fVar3);
      *impact = fVar7;
      fVar2 = (moby->rotation).z;
      fVar6 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar6 = fVar2;
      }
      fVar11 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
        fVar11 = fVar6;
      }
      fVar2 = fVar11 * fVar11;
      fVar6 = fVar2 * fVar2 * fVar11;
      fVar12 = fVar2 * fVar6;
      impact[1] = (fVar2 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar6 * 0.0083330255 + fVar2 * fVar11 * -0.16666657 + fVar11) *
                  SQRT(fVar7 * fVar7 + fVar3);
      fVar2 = (moby->pos).z;
      (moby->pos).x = (moby->pos).x + fVar7;
      (moby->pos).y = (moby->pos).y + impact[1];
      fVar3 = impact[2];
      *(undefined4 *)((int)puVar9 + 0x8c) = 0;
      *(undefined4 *)(puVar9 + 0x11) = 0;
      *(undefined4 *)((int)puVar9 + 0x84) = 0;
      *(undefined4 *)(puVar9 + 0x10) = 0;
      (moby->pos).z = fVar2 + fVar3;
      iVar17 = MB_randRange(0xf,0x16);
      puVar9[0x22] = (longlong)iVar17;
      dVar25 = 0.5;
      puVar9[0x22] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar9[0x22] + 0.5))
      ;
      uVar8 = *(undefined4 *)((int)puVar9 + 0x114);
      uVar16 = MB_randRange(0x14,0x23);
      SpawnPart_4(lVar23,uVar13 - 0xe0,0x6f00afff,0xff,uVar8,0x28,uVar16,1);
      iVar17 = MB_randRange(0x1e,0x3c);
      puVar9[0x22] = (longlong)iVar17;
      puVar9[0x22] = (longlong)
                     (int)(animationSpeed * (float)((double)(longlong)puVar9[0x22] + dVar25));
      uVar8 = *(undefined4 *)((int)puVar9 + 0x114);
      uVar16 = MB_randRange(0x32,0x4b);
      SpawnPart_4(lVar23,uVar13 - 0xe0,0x1fffffff,0x4f4f4f,uVar8,0x28,uVar16,0);
      fVar2 = impact[4];
      *(float *)(puVar9 + 0xe) = *(float *)(puVar9 + 0xe) - *impact;
      *(float *)((int)puVar9 + 0x74) = *(float *)((int)puVar9 + 0x74) - impact[1];
      *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) - impact[2];
      iVar17 = CollLine(lVar23,uVar13 - 0xf0,0x10,fVar2,0);
      if ((iVar17 != 0) && (g_CollOutput.pMoby != (MobyInstance *)impact[4])) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          CollDamageMobyDirect
                    (1.0,g_CollOutput.pMoby,moby,0x10001,0x10000,&g_CollOutput.ip.x,impact);
        }
        moby->state = '\x02';
      }
      iVar17 = FastDecTimerS32(impact + 6);
      if (iVar17 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar23,lVar23 + 0x10,&DAT_00454f78,
               0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


