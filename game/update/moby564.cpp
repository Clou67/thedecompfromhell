// game/update/moby564.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3ba6fc-0x3bb49c
#include "game/update/moby564.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby426.h"
#include "idol/fastfunc.h"
#include "sdk/lUnk.h"
#include "sdk/mUnk4.h"

// 0x03ba6fc (0x14 bytes)
void M564_003ba6fc(void)

{
  DAT_00845bac = 0x10000;
  return;
}


// 0x03ba730 (0x1ac bytes)
void M564_003ba730
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x78) + 0x38);
  fVar1 = 0.75;
  bVar4 = (uVar3 & 1) != 0;
  if (bVar4) {
    fVar1 = 2.0;
  }
  uVar7 = 0x4000000000000000;
  uVar8 = uVar7;
  if (bVar4) {
    uVar8 = 0x4010000000000000;
  }
  uVar5 = 0x3ff0000000000000;
  uVar6 = uVar5;
  if (bVar4) {
    uVar6 = uVar7;
  }
  fVar2 = 1.5;
  if ((uVar3 & 4) != 0) {
    fVar2 = 0.0;
  }
  dVar9 = (double)fVar2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  MB_genericExplosion
            (dVar9,0x3ff0000000000000,uVar8,uVar6,0x4022000000000000,(double)fVar1,
             0x4014000000000000,param_1,&stack0x00000040,param_1 + 0x10,1,0,0x14,6,0x20);
  if ((dVar9 != 0.0) && (g_heroType == '\x02')) {
    DamageSphereAtPos(uVar7,(double)DAT_00845bdc,uVar5,param_1,param_1 + 0x10,0,2);
  }
  return;
}


// 0x03ba908 (0x1d4 bytes)
void M564_003ba908(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  GPiece<16> auStack_80;
  GPiece<16> local_70;
  GPiece<40> local_60;
  
  MB_randSphere
            ((double)(g_FrameTime * 0.1),(double)(g_FrameTime * 0.2),auStack_80)
  ;
  uVar4 = 0;
  uVar3 = 0x3ff0000000000000;
  MB_randRangeFloat(0.0,1.0);
  dVar5 = 20.5;
  iVar2 = SpawnPart_44
                    (0x40e3880000000000,0x408f400000000000,uVar3,0xbf2a36e2e0000000,uVar4,local_70,
                     auStack_80,(int)(animationSpeed * 20.5),0x7f,FUN_00606060,3);
  if (iVar2 != 0) {
    uVar1 = *DAT_00a52860;
    *(undefined1 *)(iVar2 + 3) = 0x44;
    *(undefined1 *)(iVar2 + 2) = uVar1;
  }
  SpawnPart_21
            (0x40d3880000000000,local_70,local_60,0x4f007fff,0x1fffffff,0x4f000000,
             (int)((double)animationSpeed * dVar5),1);
  return;
}


// 0x03baaf0 (0x9ac bytes)
// inlined: FastAtan2 @0x3bacdc, FastAtan2 @0x3bb058, FastAtan2 @0x3bb1e8
/* Moby 564 */

undefined ** UpdateMoby_564(MobyInstance *moby)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  PlayerState PVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined **ppuVar23;
  longlong lVar21;
  longlong lVar22;
  int iVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  MobyInstance *pMVar28;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x220;
  puVar14 = (ulonglong *)lVar22;
  *puVar14 = uVar19;
  puVar14[0x46] = in_LR;
  puVar14[0x3d] = in_f25;
  puVar14[0x3e] = in_f26;
  puVar14[0x3f] = in_f27;
  puVar14[0x40] = in_f28;
  puVar14[0x41] = in_f29;
  puVar14[0x42] = in_f30;
  puVar14[0x43] = in_f31;
  puVar14[0x3c] = unaff_r31;
  puVar14[0x3b] = unaff_r30;
  PVar18 = g_heroState;
  pfVar9 = (float *)moby->pVar;
  uVar30 = ZEXT48(pfVar9);
  puVar14[0x3a] = unaff_r29;
  puVar14[0x39] = unaff_r28;
  puVar14[0x38] = unaff_r27;
  if ((PVar18 == MOVEMENT_LOCKED) || (g_gameMode == GAME_MODE_SCENE)) {
    ppuVar23 = (undefined **)DeleteMoby(moby);
  }
  else {
    ppuVar23 = (undefined **)(uint)moby->state;
    if (moby->state == 0) {
      fVar2 = (moby->pos).y;
      *(f32 *)(puVar14 + 0x12) = (moby->pos).x;
      fVar3 = (moby->pos).z;
      *(f32 *)((int)puVar14 + 0x94) = fVar2;
      fVar2 = (moby->pos).w;
      *(f32 *)(puVar14 + 0x13) = fVar3;
      fVar10 = pfVar9[0xb];
      *(f32 *)((int)puVar14 + 0x9c) = fVar2;
      dVar32 = (double)FastIntToDouble(fVar10);
      dVar33 = (double)FastIntToDouble(pfVar9[0xc]);
      dVar35 = 1.0;
      dVar36 = (double)pfVar9[7];
      dVar39 = (double)(pfVar9[4] - (moby->pos).x);
      dVar38 = (double)(pfVar9[5] - (moby->pos).y);
      dVar37 = (double)(pfVar9[6] - (moby->pos).z);
      dVar34 = (double)(float)(dVar32 / dVar33);
      if (1.0 - (double)(float)(dVar32 / dVar33) < 0.0) {
        dVar34 = dVar35;
      }
      dVar32 = (double)FastIntToDouble((int)pfVar9[0xd] - (int)pfVar9[0xb]);
      dVar32 = (double)(float)(dVar35 / dVar32);
      dVar33 = 0.0;
      *(undefined4 *)((int)puVar14 + 0x8c) = 0;
      *(undefined4 *)((int)puVar14 + 0x84) = 0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      dVar41 = (double)(float)(dVar39 * dVar32);
      dVar40 = (double)(float)(dVar38 * dVar32);
      dVar37 = (double)(float)(dVar37 * dVar32);
      *(float *)((int)puVar14 + 0x14c) = (float)(dVar39 * dVar32);
      *(float *)(puVar14 + 0x2a) = (float)(dVar38 * dVar32);
      *(float *)((int)puVar14 + 0x154) = (float)(ABS(dVar41) - ABS(dVar40));
      dVar35 = 0.7853981852531433;
      uVar25 = (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)((int)puVar14 + 0x14c));
      if (*(float *)((int)puVar14 + 0x154) - 0.0 < 0.0) {
        dVar32 = ABS(dVar40);
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar10 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar38 = ABS((double)*(float *)(puVar14 + 0x2a));
      if (*(float *)((int)puVar14 + 0x154) - 0.0 < 0.0) {
        dVar38 = ABS(dVar41);
      }
      dVar39 = dVar33;
      if (0.0 < dVar32) {
        lVar21 = uVar19 - 0x210;
        lVar26 = uVar19 - 0x88;
        lVar29 = uVar19 - 0x78;
        lVar31 = 2;
        fVar1 = (float)(dVar38 - dVar32) / (float)(dVar38 + dVar32);
        fVar4 = fVar1 * fVar1;
        *(float *)((int)puVar14 + 0x1a4) = fVar1;
        *(float *)((int)puVar14 + 0x19c) = fVar1;
        *(float *)(puVar14 + 0x34) = fVar1;
        *(float *)(puVar14 + 0x33) = fVar1;
        fVar1 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar4;
        *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar1;
        *(float *)((int)puVar14 + 0x1a4) = *(float *)((int)puVar14 + 0x1a4) * fVar1 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x198) = *(float *)((int)lVar21 + 0x188) * fVar1 * fVar1;
          iVar24 = (int)lVar26;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 0x88;
        pfVar27 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar26 = lVar29;
        do {
          fVar1 = *pfVar27;
          fVar4 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar21 + 0x198) = *(float *)((int)lVar21 + 0x198) * fVar1;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar21 = lVar22;
        dVar32 = dVar33;
        do {
          iVar24 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar15 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x198)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar39 = (double)((float)(dVar32 + 0.7853981852531433) * fVar7 + fVar10);
      }
      *(float *)(puVar14 + 0x11) = (float)dVar39;
      FastEulerToMtx(uVar19 - 0x180,uVar19 - 0x1a0);
      FastNormalizeRMtx4(uVar19 - 0x120,uVar19 - 0x180);
      *(undefined4 *)((int)puVar14 + 0x8c) = 0;
      *(undefined4 *)(puVar14 + 0x11) = 0;
      *(undefined4 *)((int)puVar14 + 0x84) = 0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      *(float *)(puVar14 + 0x11) = pfVar9[9];
      *(float *)((int)puVar14 + 0x84) = pfVar9[10];
      FastEulerToMtx(uVar19 - 0x150,uVar19 - 0x1a0);
      fVar10 = (float)((double)*(float *)((int)puVar14 + 0x124) * dVar37 +
                      (double)(float)((double)*(float *)((int)puVar14 + 0x104) * dVar41 +
                                     (double)(float)((double)*(float *)((int)puVar14 + 0x114) *
                                                    dVar40)));
      fVar7 = (float)((double)*(float *)(puVar14 + 0x24) * dVar37 +
                     (double)(float)((double)*(float *)(puVar14 + 0x20) * dVar41 +
                                    (double)(float)((double)*(float *)(puVar14 + 0x22) * dVar40)));
      fVar1 = (float)((double)*(float *)(puVar14 + 0x25) * dVar37 +
                     (double)(float)((double)*(float *)(puVar14 + 0x21) * dVar41 +
                                    (double)(float)((double)*(float *)(puVar14 + 0x23) * dVar40)));
      fVar17 = *(float *)((int)puVar14 + 0xf4) * fVar1 +
               *(float *)((int)puVar14 + 0xd4) * fVar7 + *(float *)((int)puVar14 + 0xe4) * fVar10;
      fVar16 = *(float *)(puVar14 + 0x1e) * fVar1 +
               *(float *)(puVar14 + 0x1a) * fVar7 + *(float *)(puVar14 + 0x1c) * fVar10;
      fVar6 = *(float *)(puVar14 + 0x1f) * fVar1 +
              *(float *)(puVar14 + 0x1b) * fVar7 + *(float *)(puVar14 + 0x1d) * fVar10;
      fVar4 = pfVar9[1];
      fVar5 = pfVar9[2];
      *(float *)(puVar14 + 0xe) =
           (float)((double)(float)((double)(*(float *)(puVar14 + 0x18) * fVar6 +
                                           *(float *)(puVar14 + 0x14) * fVar16 +
                                           *(float *)(puVar14 + 0x16) * fVar17) - (double)*pfVar9) *
                   dVar34 + (double)*pfVar9);
      *(float *)((int)puVar14 + 0x74) =
           (float)((double)((*(float *)((int)puVar14 + 0xc4) * fVar6 +
                            *(float *)((int)puVar14 + 0xa4) * fVar16 +
                            *(float *)((int)puVar14 + 0xb4) * fVar17) - fVar4) * dVar34 +
                  (double)pfVar9[1]);
      fVar4 = pfVar9[2];
      *(float *)((int)puVar14 + 0x7c) =
           *(float *)((int)puVar14 + 0xbc) * fVar17 +
           *(float *)((int)puVar14 + 0xcc) * fVar6 +
           *(float *)((int)puVar14 + 0xac) * fVar16 +
           *(float *)((int)puVar14 + 0xec) * fVar10 +
           *(float *)((int)puVar14 + 0xfc) * fVar1 +
           *(float *)((int)puVar14 + 0xdc) * fVar7 +
           (float)((double)*(float *)((int)puVar14 + 0x11c) * dVar40 +
                  (double)(float)((double)*(float *)((int)puVar14 + 300) * dVar37 +
                                 (double)(float)((double)*(float *)((int)puVar14 + 0x10c) * dVar41 +
                                                dVar36)));
      *(float *)(puVar14 + 0xf) =
           (float)((double)((*(float *)(puVar14 + 0x19) * fVar6 +
                            *(float *)(puVar14 + 0x15) * fVar16 +
                            *(float *)(puVar14 + 0x17) * fVar17) - fVar5) * dVar34 + (double)fVar4);
      M564_003ba908(lVar20,uVar19 - 0x1b0);
      uVar11 = *(uint *)(puVar14 + 0xe);
      dVar36 = (double)*(float *)(puVar14 + 0xe);
      uVar12 = *(uint *)((int)puVar14 + 0x74);
      dVar37 = (double)*(float *)((int)puVar14 + 0x74);
      dVar38 = ABS(dVar36);
      dVar34 = ABS(dVar37);
      fVar10 = (moby->pos).y;
      fVar7 = (moby->pos).z;
      uVar13 = *(uint *)(puVar14 + 0xf);
      fVar1 = *(float *)(puVar14 + 0xf);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar36);
      *(float *)(puVar14 + 0x29) = (float)(dVar38 - dVar34);
      (moby->pos).y = (float)((double)fVar10 + dVar37);
      (moby->pos).z = (float)((double)fVar7 + (double)fVar1);
      fVar10 = (moby->rotation).x;
      uVar25 = (ulonglong)(uVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1e) & 2 | (ulonglong)(uVar12 >> 0x1d) & 4;
      dVar32 = dVar38;
      if ((double)*(float *)(puVar14 + 0x29) - dVar33 < 0.0) {
        dVar32 = dVar34;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)(puVar14 + 0x29) - dVar33 < 0.0) {
        dVar34 = dVar38;
      }
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar38 = dVar33;
      if (dVar33 < dVar32) {
        lVar21 = uVar19 - 0x210;
        lVar26 = uVar19 - 0xa8;
        lVar29 = uVar19 - 0x98;
        lVar31 = 2;
        fVar5 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar14 + 0x184) = fVar5;
        *(float *)((int)puVar14 + 0x17c) = fVar5;
        *(float *)(puVar14 + 0x30) = fVar5;
        *(float *)(puVar14 + 0x2f) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar6;
        *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar5;
        *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar21 + 0x178) = *(float *)((int)lVar21 + 0x168) * fVar5 * fVar5;
          iVar24 = (int)lVar26;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 0xa8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar26 = lVar29;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar21 + 0x178) = *(float *)((int)lVar21 + 0x178) * fVar5;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar21 = lVar22;
        dVar34 = dVar33;
        do {
          iVar24 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar15 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x178)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar38 = (double)((float)(dVar34 + dVar35) * fVar7 + fVar4);
      }
      (moby->rotation).z = (float)dVar38;
      dVar34 = ABS((double)fVar1);
      fVar7 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar37 * dVar37)));
      dVar36 = ABS((double)fVar7);
      *(float *)(puVar14 + 0x28) = fVar7;
      *(float *)((int)puVar14 + 0x144) = (float)(dVar36 - dVar34);
      uVar25 = (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar32 = ABS((double)*(float *)(puVar14 + 0x28));
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar33 < 0.0) {
        dVar32 = dVar34;
      }
      fVar1 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar33 < 0.0) {
        dVar34 = dVar36;
      }
      if (dVar33 < dVar32) {
        lVar21 = uVar19 - 0x210;
        lVar26 = uVar19 - 200;
        lVar29 = uVar19 - 0xb8;
        lVar31 = 2;
        fVar4 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x164) = fVar4;
        *(float *)((int)puVar14 + 0x15c) = fVar4;
        *(float *)(puVar14 + 0x2c) = fVar4;
        *(float *)(puVar14 + 0x2b) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar5;
        *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar4;
        *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar21 + 0x158) = *(float *)((int)lVar21 + 0x148) * fVar4 * fVar4;
          iVar24 = (int)lVar26;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 200;
        pfVar27 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar26 = lVar29;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar21 + 0x158) = *(float *)((int)lVar21 + 0x158) * fVar4;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar21 = 2;
        do {
          iVar24 = (int)lVar22;
          iVar15 = (int)lVar29;
          lVar22 = lVar22 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar24 + 0x158)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar33 = (double)((float)(dVar33 + dVar35) * fVar7 + fVar1);
      }
      (moby->rotation).y = (float)-dVar33;
      dVar34 = (double)FastWrapRot(fVar10,g_FrameTime * 18.849556);
      fVar10 = pfVar9[0xb];
      (moby->rotation).x = (float)dVar34;
      pfVar9[0xb] = (float)((int)fVar10 + 1);
      iVar24 = CollLine(uVar19 - 400,lVar20 + 0x10,0,lVar20,0);
      auVar43 = loadVectorLeftIndexed(0x2c,uVar30);
      auVar42 = loadVectorLeftIndexed(0x34,uVar30);
      auVar44 = loadVectorRightIndexed(0x3c,uVar30);
      auVar45 = loadVectorRightIndexed(0x44,uVar30);
      pMVar28 = (MobyInstance *)0x2c;
      if ((iVar24 != 0) && (pMVar28 = g_CollOutput.pMoby, g_CollOutput.pMoby != (MobyInstance *)0x0)) {
        MVar8 = (g_CollOutput.pMoby)->oClass;
        pMVar28 = (MobyInstance *)(uint)MVar8;
        if (MVar8 == DRONE) {
          pMVar28 = (MobyInstance *)((uint)pfVar9[0xe] & 4);
          pfVar9[0xe] = (float)pMVar28;
        }
        else if (MVar8 != GIANT_CLANK) {
          iVar24 = 0;
        }
      }
      if ((pfVar9[0xb] == pfVar9[0xd]) || (iVar24 != 0)) {
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(puVar14 + 0xe);
        *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(puVar14 + 0xf);
        *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)((int)puVar14 + 0x74);
        *(undefined4 *)((int)puVar14 + 0x4c) = *(undefined4 *)((int)puVar14 + 0x7c);
        M564_003ba730(lVar20,pMVar28,puVar14[8],puVar14[9],0x3c,0x44);
        ppuVar23 = (undefined **)DeleteMoby(moby);
      }
      else {
        ppuVar23 = (undefined **)((uint)pfVar9[0xe] & 2);
        if (ppuVar23 != (undefined **)0x0) {
          auVar43 = vectorSubtractUnsignedWordModulo(auVar42 | auVar45,auVar43 | auVar44);
          ppuVar23 = &PTR_DAT_00840000;
          auVar42 = ZEXT416(0xffffffff);
          auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar42 = vectorConvertFromSignedFixedPointWord(auVar43,0);
          auVar43 = vectorShiftLeftIntegerWord(auVar44,auVar44);
          auVar44 = loadVectorLeftIndexed(0x5bd4,0x840000);
          auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar43 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar43);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanFloatingPoint
                    (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                     auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            ppuVar23 = (undefined **)RegisterMobyDraw(&PTR_M566_003bb988_0070d2e0,moby);
          }
        }
      }
    }
  }
  return ppuVar23;
}


