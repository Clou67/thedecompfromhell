// game/update/moby1346.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x252318-0x253448
#include "game/update/moby1346.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update/moby1258.h"
#include "idol/fastfunc.h"

// 0x0252318 (0x3a0 bytes)
void M1346_00252318(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r25;
  int iVar19;
  ulonglong unaff_r26;
  int iVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar1 = uVar9 - 0x250;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar9;
  puVar7[0x4c] = in_LR;
  puVar7[0x43] = in_f25;
  puVar7[0x44] = in_f26;
  puVar7[0x45] = in_f27;
  puVar7[0x46] = in_f28;
  puVar7[0x47] = in_f29;
  puVar7[0x48] = in_f30;
  puVar7[0x49] = in_f31;
  puVar7[0x42] = unaff_r31;
  puVar7[0x3f] = unaff_r28;
  puVar7[0x41] = unaff_r30;
  puVar7[0x40] = unaff_r29;
  puVar7[0x3e] = unaff_r27;
  puVar7[0x3d] = unaff_r26;
  puVar7[0x3c] = unaff_r25;
  FastMtxCopyNoTranslate(uVar9 - 0x1e0,param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar7 + 0xa4) = uVar2;
  *(undefined4 *)(puVar7 + 0x15) = uVar3;
  dVar24 = 1.0;
  *(undefined4 *)((int)puVar7 + 0xac) = 0x3f800000;
  uVar10 = GetEffectTex(0xe);
  puVar7[0x37] = uVar10;
  puVar7[0x25] = uVar10;
  uVar10 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x38] = uVar10;
  puVar7[0x26] = uVar10;
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x36] = uVar10;
  puVar7[0x24] = uVar10;
  uVar10 = idol_draw::PackCmd(DAT_00fa3848,DAT_0079b738,DAT_00fa384c,DAT_0079b73c,0x80);
  puVar7[0x27] = uVar10;
  uVar10 = idol_draw::PackCmd(DAT_00fa3850,DAT_0079b740,DAT_00fa3854,DAT_0079b744,0x80);
  puVar7[0x39] = uVar10;
  uVar2 = DAT_0079b710;
  *(undefined4 *)((int)puVar7 + 0xfc) = DAT_0079b710;
  *(undefined4 *)(puVar7 + 0x1f) = uVar2;
  *(undefined4 *)((int)puVar7 + 0xf4) = uVar2;
  uVar3 = DAT_0079b714;
  *(undefined4 *)(puVar7 + 0x1e) = uVar2;
  *(undefined4 *)((int)puVar7 + 0x18c) = uVar3;
  *(undefined4 *)(puVar7 + 0x31) = uVar3;
  lVar15 = uVar9 - 0x110;
  *(undefined4 *)((int)puVar7 + 0x184) = uVar3;
  puVar14 = &DAT_0079b770;
  *(undefined4 *)(puVar7 + 0x30) = uVar3;
  lVar13 = uVar9 - 0x1a0;
  puVar11 = &DAT_0079b7b0;
  lVar21 = 4;
  lVar18 = lVar1;
  puVar12 = &DAT_0079b750;
  pfVar17 = (float *)&DAT_0079b74c;
  do {
    puVar16 = (undefined4 *)lVar15;
    *puVar16 = *puVar14;
    puVar16[1] = puVar14[1];
    puVar16[2] = puVar14[2];
    puVar8 = puVar14 + 3;
    puVar14 = puVar14 + 4;
    puVar16[3] = *puVar8;
    lVar15 = lVar15 + 0x10;
    puVar16 = (undefined4 *)lVar13;
    *puVar16 = *puVar11;
    puVar16[1] = puVar11[1];
    puVar16[2] = puVar11[2];
    puVar8 = puVar11 + 3;
    puVar11 = puVar11 + 4;
    puVar16[3] = *puVar8;
    fVar4 = *pfVar17;
    lVar13 = lVar13 + 0x10;
    iVar20 = (int)lVar18;
    *(float *)(iVar20 + 0x100) = fVar4;
    uVar2 = *puVar12;
    pfVar17 = pfVar17 + 2;
    *(float *)(iVar20 + 400) = fVar4;
    puVar12 = puVar12 + 2;
    *(undefined4 *)(iVar20 + 0x104) = uVar2;
    *(undefined4 *)(iVar20 + 0x194) = uVar2;
    lVar18 = lVar18 + 8;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  dVar25 = -0.5;
  dVar26 = 0.5;
  iVar20 = 0;
  dVar27 = -0.20000000298023224;
  dVar28 = 0.20000000298023224;
  do {
    dVar22 = (double)MB_randRangeFloat((float)dVar25,(float)dVar26);
    lVar15 = 4;
    lVar18 = lVar1;
    lVar13 = lVar1;
    puVar12 = &DAT_0079b750;
    pfVar17 = (float *)&DAT_0079b74c;
    do {
      iVar19 = (int)lVar13;
      fVar4 = *(float *)(iVar19 + 0xb8);
      fVar5 = *(float *)(iVar19 + 0x148);
      fVar6 = *pfVar17;
      pfVar17 = pfVar17 + 2;
      *(undefined4 *)((int)lVar18 + 0x104) = *puVar12;
      puVar12 = puVar12 + 2;
      *(float *)(iVar19 + 0xb8) = (float)((double)fVar4 + dVar24);
      *(float *)(iVar19 + 0x148) = (float)((double)fVar5 + dVar24);
      *(float *)((int)lVar18 + 0x100) = (float)((double)fVar6 + dVar22);
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar22 = 0.0;
    iVar19 = -3;
    dVar23 = dVar22;
    do {
      puVar7[0x3a] = (longlong)iVar19;
      *(float *)((int)puVar7 + 0xb4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      *(float *)((int)puVar7 + 0xc4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      dVar22 = dVar23;
      if (iVar19 < 4) {
        dVar22 = (double)MB_randRangeFloat((float)dVar27,(float)dVar28);
      }
      iVar19 = iVar19 + 1;
      puVar7[0x3a] = (longlong)iVar19;
      uVar2 = EffectTexHeaders;
      *(float *)((int)puVar7 + 0xd4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      *(float *)((int)puVar7 + 0xe4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      FastDrawQuad(uVar9 - 0x1a0,uVar9 - 0x1e0,0,uVar2,9);
    } while (iVar19 < 3);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 5);
  return;
}


// 0x02526b8 (0x14 bytes)
void M1346_002526b8(void)

{
  DAT_0079b83c = 0x10000;
  return;
}


// 0x0252710 (0xd38 bytes)
// inlined: FastAtan2 @0x252a48, FastAtan2 @0x252c2c, FastAtan2 @0x252ee4, FastAtan2 @0x25308c
/* Moby 1346 */

void UpdateMoby_1346(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  int *piVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  ulonglong uVar19;
  MobyInstance *pMVar22;
  longlong lVar20;
  longlong lVar21;
  MobyInstance *pMVar23;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x1b0;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar19;
  puVar15[0x38] = in_LR;
  puVar15[0x32] = in_f28;
  puVar15[0x33] = in_f29;
  puVar15[0x34] = in_f30;
  puVar15[0x35] = in_f31;
  puVar15[0x31] = unaff_r31;
  puVar15[0x30] = unaff_r30;
  bVar1 = moby->state;
  piVar13 = (int *)moby->pVar;
  fVar2 = (moby->rotation).z;
  puVar15[0x2f] = unaff_r29;
  puVar15[0x2e] = unaff_r28;
  puVar15[0x2d] = unaff_r27;
  puVar15[0x2c] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar12 = moby->uid;
      if (((&g_Checkpoint.objState[0])[(short)uVar12] == '\0') &&
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar12 >> 5) << 2)
                    ) & 1 << (uVar12 & 0x1f)) == 0)) {
        if (piVar13[1] == -1) {
          DeleteMoby(moby);
        }
        else {
          piVar13[4] = 0;
          moby->state = '\x01';
        }
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 3) {
    uVar12 = moby->uid;
    if (((&g_Checkpoint.objState[0])[(short)uVar12] == '\0') &&
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar12 >> 5) << 2))
        & 1 << (uVar12 & 0x1f)) == 0)) {
      pMVar23 = (MobyInstance *)0x0;
      if (((piVar13[1] != -1) &&
          (pMVar22 = g_MobyInstance + piVar13[1], pMVar22 != (MobyInstance *)0x0)) &&
         (pMVar22->state != 0xfd && pMVar22->state != 0xfe)) {
        pMVar23 = pMVar22;
      }
      if (((pMVar23 == (MobyInstance *)0x0) && (piVar13[2] != -1)) &&
         ((pMVar22 = g_MobyInstance + piVar13[2], pMVar22 != (MobyInstance *)0x0 &&
          (pMVar22->state != 0xfd && pMVar22->state != 0xfe)))) {
        pMVar23 = pMVar22;
      }
      if (((pMVar23 == (MobyInstance *)0x0) && (piVar13[3] != -1)) &&
         ((pMVar22 = g_MobyInstance + piVar13[3], pMVar22 != (MobyInstance *)0x0 &&
          (pMVar22->state != 0xfd && pMVar22->state != 0xfe)))) {
        pMVar23 = pMVar22;
      }
      if (pMVar23 == (MobyInstance *)0x0) {
        moby->state = '\x03';
        if (piVar13[5] != -1) {
          g_MobyInstance[piVar13[5]].state = '\x01';
          piVar13[5] = -1;
        }
      }
      else {
        dVar35 = 3.1415927410125732;
        dVar29 = (double)FastWrapRot(fVar2,3.1415927);
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        (moby->rotation).z = (float)dVar29;
        fVar2 = (pMVar23->pos).x - fVar2;
        fVar3 = (pMVar23->pos).y - fVar3;
        fVar4 = ABS(fVar2);
        fVar10 = ABS(fVar3);
        *(float *)((int)puVar15 + 0xc4) = fVar2;
        *(float *)(puVar15 + 0x19) = fVar3;
        *(float *)((int)puVar15 + 0xcc) = fVar4 - fVar10;
        dVar34 = 0.0;
        dVar33 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)((int)puVar15 + 0xc4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0xcc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar15 + 0x19) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)((int)puVar15 + 0xc4));
        if (*(float *)((int)puVar15 + 0xcc) - 0.0 < 0.0) {
          fVar2 = fVar10;
        }
        fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar5 = ABS(*(float *)(puVar15 + 0x19));
        if (*(float *)((int)puVar15 + 0xcc) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        dVar30 = dVar34;
        if (0.0 < fVar2) {
          lVar20 = uVar19 - 0x1a0;
          lVar25 = uVar19 - 0x80;
          lVar27 = uVar19 - 0x70;
          lVar28 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar4 = fVar2 * fVar2;
          *(float *)((int)puVar15 + 0x13c) = fVar2;
          *(float *)((int)puVar15 + 0x134) = fVar2;
          *(float *)(puVar15 + 0x27) = fVar2;
          *(float *)(puVar15 + 0x26) = fVar2;
          fVar2 = fVar4 * fVar4;
          *(float *)((int)puVar15 + 0x134) = *(float *)((int)puVar15 + 0x134) * fVar4;
          *(float *)(puVar15 + 0x27) = *(float *)(puVar15 + 0x27) * fVar2;
          *(float *)((int)puVar15 + 0x13c) = *(float *)((int)puVar15 + 0x13c) * fVar2 * fVar4;
          do {
            *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x120) * fVar2 * fVar2;
            iVar16 = (int)lVar25;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar19 - 0x80;
          pfVar26 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar2 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x130) * fVar2;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar25 = 2;
          lVar20 = lVar21;
          do {
            iVar16 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar17 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar16 + 0x130)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar10 + fVar3);
        }
        dVar30 = (double)MB_DeltAngSpeed
                                   (dVar29,dVar30,
                                    (double)(float)((double)DAT_0071f418 * 1.5707963705062866),
                                    (double)(float)((double)DAT_0071f418 * dVar35),
                                    (double)(g_FrameTime * 0.7853982),&DAT_002526d0,
                                    &DAT_00720000,piVar13 + 4);
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        (moby->rotation).z = (float)dVar30;
        fVar2 = (pMVar23->pos).x - fVar2;
        fVar3 = (pMVar23->pos).y - fVar3;
        dVar31 = ABS((double)fVar2);
        dVar32 = ABS((double)fVar3);
        *(float *)(puVar15 + 0x17) = fVar2;
        *(float *)((int)puVar15 + 0xbc) = fVar3;
        *(float *)(puVar15 + 0x18) = (float)(dVar31 - dVar32);
        uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x18) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0xbc) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar15 + 0x17));
        if ((double)*(float *)(puVar15 + 0x18) - dVar34 < 0.0) {
          dVar29 = dVar32;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar32 = ABS((double)*(float *)((int)puVar15 + 0xbc));
        if ((double)*(float *)(puVar15 + 0x18) - dVar34 < 0.0) {
          dVar32 = dVar31;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar31 = dVar34;
        if (dVar34 < dVar29) {
          lVar20 = uVar19 - 0x1a0;
          lVar27 = uVar19 - 0x90;
          lVar25 = uVar19 - 0xa0;
          lVar28 = 2;
          fVar10 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
          fVar4 = fVar10 * fVar10;
          *(float *)((int)puVar15 + 0x11c) = fVar10;
          *(float *)((int)puVar15 + 0x114) = fVar10;
          *(float *)(puVar15 + 0x23) = fVar10;
          *(float *)(puVar15 + 0x22) = fVar10;
          fVar10 = fVar4 * fVar4;
          *(float *)((int)puVar15 + 0x114) = *(float *)((int)puVar15 + 0x114) * fVar4;
          *(float *)(puVar15 + 0x23) = *(float *)(puVar15 + 0x23) * fVar10;
          *(float *)((int)puVar15 + 0x11c) = *(float *)((int)puVar15 + 0x11c) * fVar10 * fVar4;
          do {
            *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x100) * fVar10 * fVar10;
            iVar16 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar10 * fVar10;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar19 - 0xa0;
          pfVar26 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar10 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x110) * fVar10;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar25 = 2;
          lVar20 = lVar21;
          dVar29 = dVar34;
          do {
            iVar16 = (int)lVar20;
            iVar17 = (int)lVar27;
            lVar20 = lVar20 + 0x10;
            lVar27 = lVar27 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x110)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar31 = (double)((float)(dVar29 + dVar33) * fVar2 + fVar3);
        }
        dVar29 = (double)FastSubRots((float)dVar30,(float)dVar31);
        if (dVar29 < 0.04363323003053665) {
          fVar2 = (moby->rotation).z;
          fVar3 = fVar2 + 1.5707963;
          fVar10 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar10 = fVar2;
          }
          fVar4 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar4 = fVar3;
          }
          fVar5 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
            fVar5 = fVar10;
          }
          fVar2 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
            fVar2 = fVar4;
          }
          fVar3 = fVar5 * fVar5;
          fVar10 = fVar2 * fVar2;
          fVar18 = fVar3 * fVar3 * fVar5;
          *(undefined4 *)(puVar15 + 0x11) = 0;
          fVar4 = fVar10 * fVar10 * fVar2;
          fVar11 = fVar3 * fVar18;
          fVar6 = fVar10 * fVar4;
          *(float *)((int)puVar15 + 0x84) =
               (fVar3 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar18 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5)
               * 1.5;
          *(float *)(puVar15 + 0x10) =
               (fVar10 * fVar6 * 2.601887e-06 +
               fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar10 * fVar2 * -0.16666657 + fVar2)
               * 1.5;
          FastVecAddSelf(uVar19 - 0x120,uVar19 - 0x130,(longlong)(int)moby + 0x10);
          fVar2 = (pMVar23->pos).x;
          fVar3 = *(float *)(puVar15 + 0x10);
          fVar10 = (pMVar23->pos).y;
          fVar4 = *(float *)((int)puVar15 + 0x84);
          fVar5 = fVar2 - fVar3;
          fVar6 = fVar10 - fVar4;
          dVar30 = ABS((double)fVar5);
          dVar31 = ABS((double)fVar6);
          *(float *)((int)puVar15 + 0xac) = fVar5;
          *(float *)(puVar15 + 0x16) = fVar6;
          fVar5 = *(float *)(puVar15 + 0x11);
          *(float *)((int)puVar15 + 0xb4) = (float)(dVar30 - dVar31);
          fVar18 = g_FrameTime * 40.0;
          fVar6 = (pMVar23->pos).z;
          uVar24 = (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)((int)puVar15 + 0xac));
          if ((double)*(float *)((int)puVar15 + 0xb4) - dVar34 < 0.0) {
            dVar29 = dVar31;
          }
          fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar31 = ABS((double)*(float *)(puVar15 + 0x16));
          if ((double)*(float *)((int)puVar15 + 0xb4) - dVar34 < 0.0) {
            dVar31 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar30 = dVar34;
          if (dVar34 < dVar29) {
            lVar20 = uVar19 - 0x1a0;
            lVar27 = uVar19 - 0xb0;
            lVar25 = uVar19 - 0xc0;
            lVar28 = 2;
            fVar8 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar15 + 0xfc) = fVar8;
            *(float *)((int)puVar15 + 0xf4) = fVar8;
            *(float *)(puVar15 + 0x1f) = fVar8;
            *(float *)(puVar15 + 0x1e) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar9;
            *(float *)(puVar15 + 0x1f) = *(float *)(puVar15 + 0x1f) * fVar8;
            *(float *)((int)puVar15 + 0xfc) = *(float *)((int)puVar15 + 0xfc) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xe0) * fVar8 * fVar8;
              iVar16 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar8 * fVar8;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar27 = uVar19 - 0xc0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar20 = lVar21;
            lVar25 = lVar27;
            do {
              fVar8 = *pfVar26;
              fVar9 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xf0) * fVar8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar25 = 2;
            lVar20 = lVar21;
            dVar29 = dVar34;
            do {
              iVar16 = (int)lVar20;
              iVar17 = (int)lVar27;
              lVar20 = lVar20 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xf0)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            dVar30 = (double)((float)(dVar29 + dVar33) * fVar11 + fVar7);
          }
          fVar4 = fVar4 - fVar10;
          fVar3 = fVar3 - fVar2;
          fVar6 = fVar6 - fVar5;
          fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
          *(float *)((int)puVar15 + 0xa4) = fVar6;
          dVar32 = ABS((double)fVar6);
          dVar31 = ABS((double)fVar2);
          *(float *)(puVar15 + 0x14) = fVar2;
          *(float *)(puVar15 + 0x15) = (float)(dVar31 - dVar32);
          uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar15 + 0x14));
          if ((double)*(float *)(puVar15 + 0x15) - dVar34 < 0.0) {
            dVar29 = dVar32;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar32 = ABS((double)*(float *)((int)puVar15 + 0xa4));
          if ((double)*(float *)(puVar15 + 0x15) - dVar34 < 0.0) {
            dVar32 = dVar31;
          }
          fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          if (dVar34 < dVar29) {
            lVar20 = uVar19 - 0x1a0;
            lVar27 = uVar19 - 0xd0;
            lVar25 = uVar19 - 0xe0;
            lVar28 = 2;
            fVar10 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
            fVar4 = fVar10 * fVar10;
            *(float *)((int)puVar15 + 0xdc) = fVar10;
            *(float *)((int)puVar15 + 0xd4) = fVar10;
            *(float *)(puVar15 + 0x1b) = fVar10;
            *(float *)(puVar15 + 0x1a) = fVar10;
            fVar10 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xd4) = *(float *)((int)puVar15 + 0xd4) * fVar4;
            *(float *)(puVar15 + 0x1b) = *(float *)(puVar15 + 0x1b) * fVar10;
            *(float *)((int)puVar15 + 0xdc) = *(float *)((int)puVar15 + 0xdc) * fVar10 * fVar4;
            do {
              *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xc0) * fVar10 * fVar10;
              iVar16 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar10 * fVar10;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar27 = uVar19 - 0xe0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar20 = lVar21;
            lVar25 = lVar27;
            do {
              fVar10 = *pfVar26;
              fVar4 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xd0) * fVar10;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar20 = 2;
            do {
              iVar16 = (int)lVar21;
              iVar17 = (int)lVar27;
              lVar21 = lVar21 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar16 + 0xd0)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar34 = (double)((float)(dVar34 + dVar33) * fVar2 + fVar3);
          }
          MB_SphericalToVector
                    (fVar18,(float)dVar30,(float)dVar34,(float *)(puVar15 + 0xe));
          fVar2 = animationSpeed;
          *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(puVar15 + 0x10);
          *(undefined4 *)(puVar15 + 9) = *(undefined4 *)(puVar15 + 0x11);
          *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(puVar15 + 0xe);
          *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)(puVar15 + 0xf);
          *(undefined4 *)((int)puVar15 + 0x44) = *(undefined4 *)((int)puVar15 + 0x84);
          *(undefined4 *)((int)puVar15 + 0x4c) = *(undefined4 *)((int)puVar15 + 0x8c);
          *(undefined4 *)((int)puVar15 + 0x54) = *(undefined4 *)((int)puVar15 + 0x74);
          *(undefined4 *)((int)puVar15 + 0x5c) = *(undefined4 *)((int)puVar15 + 0x7c);
          puVar15[0x2a] = (longlong)(int)(fVar2 * 30.5);
          FUN_00229a90((longlong)(int)moby,&DAT_00720000,puVar15[8],puVar15[9],puVar15[10],
                       puVar15[0xb],*(undefined4 *)((int)puVar15 + 0x154));
          if (pMVar23 == g_MobyInstance + piVar13[1]) {
            piVar13[1] = -1;
          }
          else if (pMVar23 == g_MobyInstance + piVar13[2]) {
            piVar13[2] = -1;
          }
          else {
            piVar13[3] = -1;
          }
        }
        dVar29 = (double)FastWrapRot((moby->rotation).z,(float)dVar35);
        (moby->rotation).z = (float)dVar29;
      }
      if (*piVar13 != -1) {
        g_MobyInstance[*piVar13].setByGroup = '\x01';
        *piVar13 = -1;
      }
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    pMVar23 = (MobyInstance *)0x0;
    if ((((piVar13[1] != -1) &&
         (pMVar22 = g_MobyInstance + piVar13[1], pMVar22 != (MobyInstance *)0x0)) &&
        (pMVar22->state != 0xfe)) &&
       ((pMVar22->state != 0xfd && (pMVar23 = pMVar22, pMVar22 != (MobyInstance *)0x0)))) {
      DeleteMoby(pMVar22);
    }
    if (((pMVar23 == (MobyInstance *)0x0) && (piVar13[2] != -1)) &&
       ((pMVar22 = g_MobyInstance + piVar13[2], pMVar22 != (MobyInstance *)0x0 &&
        (pMVar22->state != 0xfd && pMVar22->state != 0xfe)))) {
      pMVar23 = pMVar22;
    }
    if (pMVar23 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar23);
    }
    uVar12 = moby->uid;
    iVar17 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
    iVar16 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
    uVar14 = *(uint *)(&g_CheckpointBits + iVar16);
    *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar17) =
         *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar17) | 1 << (uVar12 & 0x1f);
    *(uint *)(&g_CheckpointBits + iVar16) = uVar14 | 1 << (uVar12 & 0x1f);
  }
  return;
}


