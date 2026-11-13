// game/update/moby709.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x42a688-0x42b610
// shared update function UpdateMoby_{709_710_711}; registered for oClasses 709, 710, 711
#include "game/update/moby709.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update/moby121.h"
#include "game/update/moby200.h"
#include "idol/fastfunc.h"

// 0x042a688 (0x14 bytes)
void M711_0042a688(void)

{
  DAT_00857c44 = 0x10000;
  return;
}


// shared update function, registered for oClasses 709, 710, 711
// 0x042a6e0 (0x474 bytes)
/* Moby 709
   Moby 710
   Moby 711 */

void UpdateMoby_709(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float local_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar12 = MB_damage(moby,&DAT_00830000,0);
  uVar7 = moby->uid;
  if (((&g_Checkpoint.objState[0])[(short)uVar7] != '\0') ||
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar7 >> 5) << 2)) &
      1 << (uVar7 & 0x1f)) != 0)) {
    DeleteMoby(moby);
  }
  moby->drawDistance = 32000;
  if ((iVar12 == 0) || (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) != 0x2ae)) {
    moby->damage = -1;
  }
  else {
    iVar12 = 0;
    dVar23 = 0.0;
    dVar24 = 2.0;
    dVar26 = 1.570796251296997;
    dVar27 = 3.141592502593994;
    dVar28 = -3.141592502593994;
    dVar29 = -0.16666656732559204;
    uVar36 = 0x3fa99999a0000000;
    uVar37 = 0x3ff0000000000000;
    uVar38 = 0x3fe8000000000000;
    fVar2 = 3.0;
    fVar3 = 0.0083330255;
    fVar4 = -0.0001980741;
    fVar5 = 2.601887e-06;
    fVar6 = 5.0;
    fVar1 = 20.0;
    do {
      dVar34 = (double)fVar1;
      dVar33 = (double)fVar6;
      dVar32 = (double)fVar5;
      dVar31 = (double)fVar4;
      dVar30 = (double)fVar3;
      dVar25 = (double)fVar2;
      dVar13 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime);
      dVar14 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime);
      dVar15 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime);
      local_e0[3] = (float)dVar25;
      dVar16 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar17 = (double)MB_randRot();
      dVar18 = (double)(float)(dVar17 + dVar26);
      dVar25 = (double)(float)(dVar27 - dVar17);
      if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
        dVar25 = dVar17;
      }
      dVar19 = (double)(float)(dVar27 - dVar18);
      if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
        dVar19 = dVar18;
      }
      dVar35 = (double)(float)(dVar28 - dVar17);
      if ((double)(float)(dVar28 - dVar17) - dVar25 < 0.0) {
        dVar35 = dVar25;
      }
      local_cc = (float)dVar33;
      local_d0 = (float)dVar34;
      local_c0 = (float)dVar30;
      local_c4 = (float)dVar31;
      local_c8 = (float)dVar32;
      dVar25 = (double)(float)(dVar28 - dVar18);
      if ((double)(float)(dVar28 - dVar18) - dVar19 < 0.0) {
        dVar25 = dVar19;
      }
      dVar18 = (double)(float)(dVar35 * dVar35);
      dVar19 = (double)(float)(dVar25 * dVar25);
      dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar35));
      dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar25));
      dVar22 = (double)(float)(dVar18 * dVar20);
      dVar17 = (double)(float)(dVar19 * dVar21);
      dVar35 = (double)(float)((double)(float)(dVar18 * dVar22) * dVar32 +
                              (double)(float)(dVar22 * dVar31 +
                                             (double)(float)(dVar20 * dVar30 +
                                                            (double)(float)((double)(float)(dVar18 *
                                                                                           dVar35) *
                                                                            dVar29 + dVar35))));
      dVar19 = (double)(float)((double)(float)(dVar19 * dVar17) * dVar32 +
                              (double)(float)(dVar17 * dVar31 +
                                             (double)(float)(dVar21 * dVar30 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar25) *
                                                                            dVar29 + dVar25))));
      dVar25 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar33),
                                  (float)((double)g_FrameTime * dVar34));
      dVar32 = (double)(moby->pos).x;
      dVar31 = (double)(moby->pos).y;
      dVar30 = (double)(moby->pos).z;
      dVar18 = (double)SQRT((float)(dVar15 * dVar15 +
                                   (double)(float)(dVar13 * dVar13 +
                                                  (double)(float)(dVar14 * dVar14))));
      dVar17 = (double)(float)(dVar25 / dVar18);
      dVar25 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar25 = (double)(float)(dVar15 * dVar17);
      }
      dVar33 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar33 = (double)(float)(dVar14 * dVar17);
      }
      dVar34 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar34 = (double)(float)(dVar13 * dVar17);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar25 = (double)(float)(dVar15 * dVar17);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar33 = (double)(float)(dVar14 * dVar17);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar34 = (double)(float)(dVar13 * dVar17);
      }
      lVar11 = MB_randInt(3);
      local_e0[2] = 9.78106e-43;
      local_e0[1] = 9.76705e-43;
      local_e0[0] = 9.75304e-43;
      uVar8 = *(undefined4 *)((int)local_e0 + (int)(lVar11 << 2));
      MB_randRange(0xb4,300);
      fVar1 = (float)(dVar19 * dVar16 + dVar32);
      FUN_00425540(uVar36,uVar37,uVar37,uVar38,CONCAT44(fVar1,(float)(dVar35 * dVar16 + dVar31)),
                   CONCAT44((float)dVar30,fVar1),CONCAT44((float)dVar34,(float)dVar33),
                   CONCAT44((float)dVar25,(float)dVar23),uVar8);
      iVar12 = iVar12 + 1;
      fVar2 = local_e0[3];
      fVar3 = local_c0;
      fVar4 = local_c4;
      fVar5 = local_c8;
      fVar6 = local_cc;
      fVar1 = local_d0;
    } while (iVar12 < 0x14);
    uVar7 = moby->uid;
    iVar10 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
    iVar12 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
    uVar9 = *(uint *)(&g_CheckpointBits + iVar12);
    *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar10) =
         *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar10) | 1 << (uVar7 & 0x1f);
    *(uint *)(&g_CheckpointBits + iVar12) = uVar9 | 1 << (uVar7 & 0x1f);
    DeleteMoby(moby);
  }
  return;
}


// 0x042ab54 (0x14 bytes)
void M711_0042ab54(void)

{
  DAT_00857cb4 = 0x10000;
  return;
}


// 0x042ab78 (0x5dc bytes)
void M711_0042ab78(int param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float *pfVar19;
  int iVar20;
  ushort uVar21;
  ulonglong unaff_r14;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r15;
  int iVar24;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  longlong lVar25;
  ulonglong unaff_r18;
  longlong lVar26;
  ulonglong unaff_r19;
  longlong lVar27;
  ulonglong unaff_r20;
  int iVar28;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int iVar29;
  ulonglong unaff_r24;
  undefined8 uVar30;
  int iVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar32;
  short *psVar33;
  ulonglong unaff_r30;
  undefined *puVar34;
  ulonglong unaff_r31;
  ulonglong uVar35;
  byte in_cr6;
  ulonglong in_LR;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1c0;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar16;
  puVar14[0x3a] = in_LR;
  puVar14[0x34] = in_f28;
  puVar14[0x35] = in_f29;
  puVar14[0x36] = in_f30;
  puVar14[0x37] = in_f31;
  puVar14[0x33] = unaff_r31;
  puVar14[0x29] = unaff_r21;
  pfVar11 = *(float **)(param_1 + 0x78);
  uVar35 = ZEXT48(pfVar11);
  puVar14[0x32] = unaff_r30;
  puVar14[0x31] = unaff_r29;
  puVar14[0x30] = unaff_r28;
  puVar14[0x2f] = unaff_r27;
  puVar14[0x2e] = unaff_r26;
  puVar14[0x2d] = unaff_r25;
  puVar14[0x2c] = unaff_r24;
  puVar14[0x2b] = unaff_r23;
  puVar14[0x2a] = unaff_r22;
  puVar14[0x28] = unaff_r20;
  puVar14[0x27] = unaff_r19;
  puVar14[0x26] = unaff_r18;
  puVar14[0x25] = unaff_r17;
  puVar14[0x24] = unaff_r16;
  puVar14[0x23] = unaff_r15;
  puVar14[0x22] = unaff_r14;
  if (pfVar11 != (float *)0x0) {
    auVar41 = loadVectorLeftIndexed(0x70,uVar35);
    auVar42 = loadVectorRightIndexed(0x80,uVar35);
    auVar43 = ZEXT416(0);
    auVar44 = (auVar41 | auVar42) >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    vectorCompareEqualToFloatingPoint
              (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar43 = loadVectorLeftIndexed(in_LR,0x42ab68);
      dVar38 = 1.0;
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      vectorCompareEqualToFloatingPoint(auVar44,auVar43);
      if (((bool)(in_cr6 >> 1 & 1)) ||
         ((g_heroMobyPtr->updateId == g_heroMobyPtr->animationId &&
          (g_heroMobyPtr->updateId != 0xff)))) {
        uVar17 = 0x14;
        uVar30 = 1;
        puVar34 = &DAT_00808080;
        bVar3 = g_heroMobyPtr->updateId;
        uVar21 = (ushort)bVar3;
        if (((bVar3 < 0x17) || (0x19 < bVar3)) && (bVar3 != 0x2b)) {
          uVar21 = *(ushort *)(pfVar11 + 0x1e);
        }
        bVar2 = uVar21 == 0x18;
        dVar39 = dVar38;
        dVar40 = dVar38;
        if (uVar21 == 0x17) {
          lVar32 = 0;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x17;
        }
        else if (bVar2) {
          lVar32 = 1;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x18;
        }
        else if (uVar21 == 0x19) {
          lVar32 = 2;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x19;
        }
        else {
          lVar32 = 3;
          uVar30 = 2;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x2b;
          dVar40 = 0.699999988079071;
          uVar17 = 0xc;
          dVar39 = 1.25;
          puVar34 = (undefined *)0x408080;
        }
        pMVar15 = g_heroMobyPtr;
        vectorCompareEqualToFloatingPoint(auVar44,auVar43);
        lVar32 = ZEXT48(&DAT_00859af0) + lVar32 * 0x60;
        psVar33 = (short *)lVar32;
        sVar6 = *psVar33;
        sVar7 = psVar33[1];
        sVar8 = psVar33[2];
        sVar9 = psVar33[3];
        if (!bVar2) {
          *pfVar11 = (g_heroMobyPtr->transform).v0.x;
          pfVar11[1] = (pMVar15->transform).v0.y;
          pfVar11[2] = (pMVar15->transform).v0.z;
          pfVar11[3] = (pMVar15->transform).v0.w;
          pfVar11[4] = (pMVar15->transform).v1.x;
          pfVar11[5] = (pMVar15->transform).v1.y;
          pfVar11[6] = (pMVar15->transform).v1.z;
          pfVar11[7] = (pMVar15->transform).v1.w;
          pfVar11[8] = (pMVar15->transform).v2.x;
          pfVar11[9] = (pMVar15->transform).v2.y;
          pfVar11[10] = (pMVar15->transform).v2.z;
          pfVar11[0xb] = (pMVar15->transform).v2.w;
        }
        auVar43 = ZEXT416(1);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar44 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar45 = loadVectorLeftIndexed(0xffffffffffffcce8,0x10d0000);
        auVar46 = vectorSubtractUnsignedWordModulo(auVar44,auVar45);
        auVar45 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = loadVectorLeftIndexed(0x48,lVar32);
        auVar44 = vectorCompareGreaterThanSignedWord(auVar43,auVar46);
        auVar44 = vectorConditionalSelect(auVar46,auVar43,auVar44);
        auVar47 = loadVectorRightIndexed(0x58,lVar32);
        auVar43 = ZEXT416(0xfffffff0);
        auVar46 = vectorConvertFromSignedFixedPointWord(auVar44,0);
        auVar44 = ZEXT416(2);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar46,auVar48 | auVar47,auVar41 | auVar42);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        uVar13 = storeVectorElementWordIndexed(auVar41,0x70,uVar35);
        *(undefined4 *)((uint)(pfVar11 + 0x1c) & 0xfffffffc) = uVar13;
        DAT_010ccce8 = storeVectorElementWordIndexed
                                 (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                                  0xffffffffffffcce8,0x10d0000);
        auVar42 = loadVectorLeftIndexed(0x58,lVar32);
        auVar45 = loadVectorRightIndexed(0x68,lVar32);
        auVar43 = vectorShiftRightAlgebraicWord
                            (auVar42 | auVar45,
                             auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        auVar43 = vectorMultiplyOddSignedHalfWord
                            (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
        auVar43 = vectorConvertFromSignedFixedPointWord(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        if (bVar2) {
          uVar18 = GetEffectTex(uVar17);
          puVar14[0x1d] = uVar18;
          uVar18 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
          puVar14[0x1e] = uVar18;
          uVar18 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
          puVar14[0x1c] = uVar18;
          uVar18 = idol_draw::PackCmd(0,uVar30,0,1,0x80);
          pMVar15 = g_heroMobyPtr;
          iVar31 = 0;
          puVar14[0x1f] = uVar18;
          pfVar11[0xc] = (pMVar15->pos).x;
          pfVar11[0xd] = (pMVar15->pos).y;
          pfVar11[0xe] = (pMVar15->pos).z;
          pfVar11[0xf] = (pMVar15->pos).w;
          if (0 < psVar33[0x2c]) {
            iVar24 = 0;
            do {
              iVar29 = 0;
              dVar37 = 0.5;
              lVar22 = uVar16 - 0x150;
              iVar28 = 0;
              lVar25 = lVar1;
              lVar26 = lVar1;
              lVar27 = lVar32;
              do {
                sVar10 = *(short *)(*(int *)(psVar33 + 0x28) + iVar24 + iVar28);
                iVar12 = (int)lVar27;
                if (sVar6 == iVar31) {
                  iVar20 = *(int *)(iVar12 + 8);
                }
                else if (sVar7 == iVar31) {
                  iVar20 = *(int *)(iVar12 + 0x18);
                }
                else if (sVar8 == iVar31) {
                  iVar20 = *(int *)(iVar12 + 0x28);
                }
                else {
                  iVar20 = 0x50808080;
                  if (sVar9 == iVar31) {
                    iVar20 = *(int *)(iVar12 + 0x38);
                  }
                }
                puVar14[0x20] = (longlong)(iVar20 >> 0x18);
                *(int *)((int)lVar26 + 0xb0) = iVar20;
                uVar18 = FastDoubleToInt
                                   ((double)(float)((double)(longlong)puVar14[0x20] * dVar40));
                *(uint *)((int)lVar26 + 0xb0) =
                     (uint)((uVar18 & 0xffffffff) << 0x18) | (uint)puVar34;
                pfVar19 = (float *)(*(int *)(psVar33 + 0x26) + (int)((longlong)sVar10 << 4));
                iVar29 = iVar29 + 1;
                lVar27 = lVar27 + 4;
                lVar26 = lVar26 + 4;
                pfVar23 = (float *)lVar22;
                *pfVar23 = (float)((double)*pfVar19 * dVar39);
                pfVar23[1] = (float)((double)pfVar19[1] * dVar39);
                pfVar23[2] = (float)((double)pfVar19[2] * dVar39);
                pfVar23[3] = pfVar19[3];
                iVar12 = *(int *)(psVar33 + 0x2a);
                dVar36 = (double)DAT_00859aec;
                iVar20 = *(int *)(psVar33 + 0x28) + iVar24 + iVar28;
                lVar22 = lVar22 + 0x10;
                iVar28 = iVar28 + 4;
                fVar4 = pfVar11[0x1c];
                iVar20 = (int)((longlong)*(short *)(iVar20 + 2) << 3);
                fVar5 = *(float *)(psVar33 + 0x2e);
                *(float *)((int)lVar25 + 0xc0) =
                     (float)((double)(float)((double)*(float *)(iVar12 + iVar20) - dVar37) * dVar36
                            + dVar37);
                *(float *)((int)lVar25 + 0xc4) =
                     (float)((double)(float)((double)*(float *)(iVar12 + iVar20 + 4) - dVar37) *
                             dVar36 + dVar37) + -(float)((double)fVar4 * (double)fVar5 - dVar38);
                lVar25 = lVar25 + 8;
              } while (iVar29 < 4);
              FastDrawQuad(uVar16 - 0x150,uVar35,0,EffectTexHeaders,9);
              iVar31 = iVar31 + 1;
              iVar24 = iVar24 + 0x10;
            } while (iVar31 < psVar33[0x2c]);
          }
        }
        else {
          bVar3 = g_heroMobyPtr->updateId;
          if (((bVar3 < 0x17) || (0x19 < bVar3)) && (bVar3 != 0x2b)) {
            pfVar11[0x1c] = 0.0;
          }
        }
      }
      else {
        pfVar11[0x1c] = 0.0;
      }
    }
  }
  return;
}


// 0x042b160 (0x14c bytes)
void M711_0042b160(MobyInstance *param_1)

{
  char cVar1;
  MobyInstance *pMVar2;
  longlong lVar3;
  u8 uVar4;
  
  pMVar2 = g_heroMobyPtr;
  if (g_heroState == BOLT_CRANK_TURNING) {
    lVar3 = (ZERO_MASK((0x40 - (uint)g_heroMobyPtr->animationId)) & 8U) + 0xb;
    uVar4 = (u8)lVar3;
    if (g_heroMobyPtr->animationId == 0x41) {
      uVar4 = '\x12';
    }
    else if (((int)lVar3 != 0x13) && ((int)lVar3 != 0x12)) {
      MB_SetAnimation(param_1,lVar3,0,(int)(animationSpeed * 7.5));
      return;
    }
    param_1->updateId = uVar4;
    param_1->animationId = uVar4;
    param_1->animationBlend = pMVar2->animationBlend;
    param_1->previousAnimationFrame = pMVar2->previousAnimationFrame;
    cVar1 = pMVar2->animationFrame;
    param_1->animationFrame = cVar1;
    if (pMVar2->updateId != pMVar2->animationId) {
      param_1->previousAnimationFrame = cVar1;
    }
    UpdateMobyFrameData(param_1);
  }
  else if ((DAT_0096bd70 == 0x3b) && (g_heroStateTimer == 1)) {
    MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 17.5));
  }
  return;
}


// 0x042b2ac (0x60 bytes)
undefined8 M711_0042b2ac(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
      (iVar1 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby), iVar1 != 0)) &&
     (*(char *)(iVar1 + 9) == '\x01')) {
    uVar2 = 1;
  }
  return uVar2;
}


// 0x042b30c (0x54 bytes)
undefined8 M711_0042b30c(void)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
  if ((iVar2 == 0) || ((*(ushort *)(iVar2 + 0x1e) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x042b390 (0x280 bytes)
// strings: 0042b388: '?333`'

void M711_0042b390(float *param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  float afStack_c0 [4];
  longlong local_b0;
  
  iVar1 = 0;
  if (0 < param_2) {
    dVar6 = 0.10000000149011612;
    dVar7 = 2.0;
    dVar8 = 0.3490658402442932;
    dVar9 = 1.535889744758606;
    dVar10 = 0.05000000074505806;
    uVar11 = 0;
    uVar12 = 0x3fc3333340000000;
    dVar13 = 30.5;
    uVar14 = 0x3f689374c0000000;
    dVar15 = 0.07000000029802322;
    dVar16 = 0.699999988079071;
    do {
      dVar2 = (double)MB_randRangeFloat((float)dVar6,(float)dVar7);
      MB_randInt(2);
      dVar3 = (double)MB_randRot();
      dVar4 = (double)MB_randRangeFloat((float)dVar8,(float)dVar9);
      dVar5 = (double)MB_randRangeFloat((float)dVar10,(float)dVar6);
      MB_SphericalToVector((float)dVar5,(float)dVar3,(float)dVar4,afStack_c0);
      dVar3 = (double)MB_randRangeSigned(uVar11,uVar12);
      *param_1 = (float)((double)*param_1 + dVar3);
      dVar3 = (double)MB_randRangeSigned(uVar11,uVar12);
      param_1[1] = (float)((double)param_1[1] + dVar3);
      dVar3 = (double)MB_randRangeSigned(uVar11,uVar12);
      param_1[2] = (float)((double)param_1[2] + dVar3);
      local_b0 = (longlong)(int)((double)animationSpeed * dVar13);
      SpawnPart_53
                ((double)(float)(dVar2 * dVar6),dVar2,uVar14,param_1,
                 (int)((double)animationSpeed * dVar13));
      local_b0 = (longlong)(int)((double)animationSpeed * dVar13);
      SpawnPart_53
                ((double)(float)(dVar2 * dVar15),(double)(float)(dVar2 * dVar16),uVar14,param_1,
                 (int)((double)animationSpeed * dVar13));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}


