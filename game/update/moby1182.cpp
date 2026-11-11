// game/update/moby1182.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1f0658-0x1f1a2c
// shared update function UpdateMoby_a_lot_6; registered for oClasses 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189
#include <math.h>
#include <stdio.h>
#include "game/update/moby1182.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1000.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x01f0658 (0x14 bytes)
void M1189_001f0658(void)

{
  DAT_00765f68 = 0x10000;
  return;
}


// 0x01f0670 (0x1bc bytes)
MobyInstance * M1189_001f0670(int param_1,float *param_2,MOBY_OCLASSES param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  MobyInstance *pMVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float local_30;
  float local_2c;
  float local_28;
  
  pMVar13 = CreateMoby(param_3);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    pvVar7 = pMVar13->pVar;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    *(float *)((int)pvVar7 + 0x10) = *param_2;
    *(float *)((int)pvVar7 + 0x14) = param_2[1];
    *(float *)((int)pvVar7 + 0x18) = param_2[2];
    fVar1 = param_2[3];
    *(int *)((int)pvVar7 + 0x2c) = param_1;
    *(float *)((int)pvVar7 + 0x1c) = fVar1;
    UpdateMobyTransform(pMVar13);
    GetBonePosition(pMVar13,0,&local_30);
    fVar8 = *param_2 - local_30;
    fVar9 = param_2[1] - local_2c;
    fVar10 = param_2[2] - local_28;
    fVar1 = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xd8);
    fVar4 = *(float *)(param_1 + 0xe4);
    fVar5 = *(float *)(param_1 + 200);
    fVar6 = *(float *)(param_1 + 0xe8);
    (pMVar13->pos).x =
         *(float *)(param_1 + 0xd0) * fVar9 +
         *(float *)(param_1 + 0xe0) * fVar10 + *(float *)(param_1 + 0xc0) * fVar8 + *param_2;
    (pMVar13->pos).y = param_2[1] + fVar4 * fVar10 + fVar2 * fVar8 + fVar1 * fVar9;
    (pMVar13->pos).z = param_2[2] + fVar6 * fVar10 + fVar5 * fVar8 + fVar3 * fVar9;
    (pMVar13->pos).w = param_2[3];
    (pMVar13->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar13->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar13->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar13->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar11 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar16 = puVar11[2];
    uVar15 = puVar11[1];
    uVar14 = *puVar11;
    puVar12 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    uVar18 = puVar12[1];
    uVar17 = *puVar12;
    puVar12 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar24 = puVar12[3];
    uVar23 = puVar12[2];
    uVar22 = puVar12[1];
    uVar21 = *puVar12;
    puVar12 = (undefined4 *)((uint)&pMVar13->transform & 0xfffffff0);
    puVar12[3] = puVar11[3];
    puVar12[2] = uVar16;
    puVar12[1] = uVar15;
    *puVar12 = uVar14;
    puVar11 = (undefined4 *)((uint)&(pMVar13->transform).v1 & 0xfffffff0);
    puVar11[3] = uVar20;
    puVar11[2] = uVar19;
    puVar11[1] = uVar18;
    *puVar11 = uVar17;
    puVar11 = (undefined4 *)((uint)&(pMVar13->transform).v2 & 0xfffffff0);
    puVar11[3] = uVar24;
    puVar11[2] = uVar23;
    puVar11[1] = uVar22;
    *puVar11 = uVar21;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x01f0830 (0x98 bytes)
int M1189_001f0830(float *param_1,short param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  iVar6 = 0;
  fVar1 = 100000.0;
  iVar2 = MobyUpdateChainStart;
  if (MobyUpdateChainStart != 0) {
    do {
      if (*(short *)(iVar2 + 0xa6) == param_2) {
        fVar3 = param_1[1] - *(float *)(iVar2 + 0x14);
        fVar4 = *param_1 - *(float *)(iVar2 + 0x10);
        fVar5 = param_1[2] - *(float *)(iVar2 + 0x18);
        fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        if (fVar3 < fVar1) {
          fVar1 = fVar3;
          iVar6 = iVar2;
        }
      }
      iVar2 = *(int *)(iVar2 + 0x28);
    } while (iVar2 != 0);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
  }
  return iVar6;
}


// shared update function, registered for oClasses 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189
// 0x01f0948 (0x10e4 bytes)
// strings: 00654d5c: "Bigship moby %d (oClass:%d) can't find parent! dist:%f\n"

/* Moby 1182
   Moby 1183
   Moby 1184
   Moby 1185
   Moby 1186
   Moby 1187
   Moby 1188
   Moby 1189 */

void UpdateMoby_1182(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  f32 fVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  MobyModeBit MVar14;
  undefined4 uVar15;
  longlong lVar16;
  float fVar20;
  int iVar21;
  undefined2 uVar22;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  MOBY_OCLASSES MVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auStack_1a0;
  float local_190;
  float local_18c;
  float local_188;
  f32 local_184;
  float local_180;
  float local_17c;
  float local_178;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<48> auStack_130;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  GPiece<4> local_ac;
  undefined4 local_a8 [2];
  longlong local_a0;
  
  lVar16 = (longlong)(int)moby;
  pfVar5 = (float *)moby->pVar;
  uVar24 = ZEXT48(pfVar5);
  DAT_00f08e20 = DAT_00f08e20 + 1;
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      GetBonePosition(lVar16,0,auStack_1a0);
      fVar6 = (moby->pos).x;
      fVar7 = (moby->pos).y;
      fVar2 = (moby->pos).z;
      if ((pfVar5[0x1a] == -NAN) || ((&g_MiscLevelFlags.field57_0x39)[(int)pfVar5[0x1a]] == 0)) {
        moby->drawDistance = 0x3ff;
        if (moby->oClass == AIRSHIP_PART_04A0) {
          if (*(short *)(pfVar5 + 10) != 0) {
            iVar21 = 0x49e;
            moby->drawDistance = 0xff;
            pfVar5[0xb] = 0.0;
            do {
              if (iVar21 != 0x4a0) {
                M1189_001f0670(lVar16,auStack_1a0,iVar21);
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < 0x4a6);
          }
        }
        else {
          fVar20 = 0.0;
          dVar27 = 100000.0;
          for (fVar3 = MobyUpdateChainStart; fVar3 != 0.0; fVar3 = *(float *)((int)fVar3 + 0x28)) {
            if ((*(short *)((int)fVar3 + 0xa6) == 0x4a0) &&
               (fVar4 = fVar7 - *(float *)((int)fVar3 + 0x14),
               fVar12 = fVar6 - *(float *)((int)fVar3 + 0x10),
               fVar13 = fVar2 - *(float *)((int)fVar3 + 0x18),
               dVar26 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar4 * fVar4),
               dVar26 < dVar27)) {
              dVar27 = dVar26;
              fVar20 = fVar3;
            }
          }
          dVar26 = 100000.0;
          if (&stack0x00000000 != (undefined1 *)0xb0) {
            dVar26 = dVar27;
          }
          if (20.0 <= dVar26) {
            printf("Bigship moby %d (oClass:%d) can\'t find parent! dist:%f\n",moby->uid,
                         moby->oClass,dVar26);
          }
          else {
            MVar23 = moby->oClass;
            pfVar5[0xb] = fVar20;
            *(MobyInstance **)
             (*(int *)((int)fVar20 + 0x78) + (int)((longlong)(short)MVar23 << 2) + -0x120c) = moby;
          }
        }
        dVar27 = (double)moby->scale;
        MB_ComputeSelectedJoints(lVar16,1,local_ac,auStack_130);
        pfVar5[0xc] = (float)((double)local_100 * dVar27);
        pfVar5[0xd] = (float)((double)local_fc * dVar27);
        pfVar5[0xe] = (float)((double)local_f8 * dVar27);
        pfVar5[0xf] = local_f4;
        moby->state = '\x01';
      }
      else {
        DeleteMoby(moby);
      }
    }
    else {
      MVar23 = moby->oClass;
      if (MVar23 == AIRSHIP_PART_04A0) {
        dVar27 = 0.01745329238474369;
        MB_BobMotion
                  (pfVar5[0x12],pfVar5[0x13] * 0.017453292 * g_FrameTime,moby,
                   pfVar5 + 0x10,pfVar5 + 0x11);
        MB_SwingMotion
                  ((double)(float)((double)pfVar5[0x16] * dVar27),
                   (double)((float)((double)pfVar5[0x17] * dVar27) * g_FrameTime),
                   (double)((float)((double)pfVar5[0x18] * dVar27) * g_FrameTime),lVar16,
                   uVar24 + 0x50,uVar24 + 0x54);
        MVar23 = moby->oClass;
      }
      if (((MVar23 != AIRSHIP_PART_04A0) && (fVar6 = pfVar5[0xb], fVar6 != 0.0)) &&
         (*(char *)((int)fVar6 + 0x20) != '\x03')) {
        (moby->rotation).x = *(f32 *)((int)fVar6 + 0x40);
        (moby->rotation).y = *(f32 *)((int)fVar6 + 0x44);
        fVar7 = pfVar5[0xb];
        (moby->rotation).z = *(f32 *)((int)fVar6 + 0x48);
        (moby->rotation).w = *(f32 *)((int)fVar6 + 0x4c);
        FastEulerToMtx1(&local_f0,(ulonglong)(uint)fVar7 + 0x40);
        fVar6 = pfVar5[0xd];
        fVar7 = pfVar5[0xc];
        fVar2 = pfVar5[0xe];
        fVar3 = pfVar5[0xf];
        dVar28 = (double)(local_c0 * fVar3 + local_d0 * fVar2 + local_f0 * fVar7 + local_e0 * fVar6)
        ;
        dVar26 = (double)(local_bc * fVar3 + local_cc * fVar2 + local_ec * fVar7 + local_dc * fVar6)
        ;
        dVar27 = (double)(local_b8 * fVar3 + local_c8 * fVar2 + local_e8 * fVar7 + local_d8 * fVar6)
        ;
        GetBonePosition(pfVar5[0xb],0,&local_190);
        MVar23 = moby->oClass;
        (moby->pos).w = local_184;
        (moby->pos).x = (float)((double)local_190 - dVar28);
        (moby->pos).y = (float)((double)local_18c - dVar26);
        (moby->pos).z = (float)((double)local_188 - dVar27);
      }
      if (pfVar5[0xb] != 0.0) {
        fVar6 = pfVar5[0xb];
        MVar14 = moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        moby->modeBits = MVar14;
        moby->modeBits = MVar14 | *(MobyModeBit *)((int)fVar6 + 0x34) & DISABLED;
        moby->setByGroup = *(char *)((int)fVar6 + 0xbc);
      }
      if (moby->state == '\x02') {
        if (MVar23 == AIRSHIP_PART_04A0) {
          dVar27 = (double)FastWrapRot
                                     ((moby->rotation).x,
                                      DAT_00765fe0 * 0.017453292 * g_FrameTime);
          (moby->rotation).x = (float)dVar27;
        }
        iVar21 = FastDecTimerS16(uVar24 + 0x2a);
        if (iVar21 != 0) {
          moby->state = '\x03';
        }
      }
      else if (moby->setByGroup == '\x01') {
        moby->updateDistance = -1;
        iVar21 = (int)(animationSpeed * ((float)(longlong)DAT_00765fe8 + 0.5));
        local_a0 = (longlong)iVar21;
        uVar22 = MB_randRange
                           ((int)(animationSpeed * ((float)(longlong)DAT_00765fe4 + 0.5)),iVar21);
        *(undefined2 *)((int)pfVar5 + 0x2a) = uVar22;
        iVar21 = 0;
        do {
          iVar8 = *(int *)((int)uVar24 + 0x6c);
          if (iVar8 != 0) {
            *(undefined1 *)(iVar8 + 0x30) = 0xff;
          }
          iVar21 = iVar21 + 1;
          uVar24 = uVar24 + 4;
        } while (iVar21 < 9);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 < 4) {
      FastDecTimerS16(uVar24 + 0x2a);
      g_MiscLevelFlags.field56_0x38 = 1;
      if (pfVar5[0x1a] != -NAN) {
        (&g_MiscLevelFlags.field57_0x39)[(int)pfVar5[0x1a]] = 1;
      }
      MB_SpawnBoltsFromCrate(lVar16,0x200,0xffffffffffffffff);
      MB_SpawnExplosionSparks
                (0x4010000000000000,0x402a000000000000,lVar16,lVar16 + 0x10,&DAT_001f08c8,
                 0xffffffffffffffff);
      if (moby->oClass == AIRSHIP_PART_04A0) {
        PlayMobySound(2,0,moby);
      }
      GetBonePosition(lVar16,0,&local_180);
      fVar6 = (moby->pos).x - local_180;
      *pfVar5 = fVar6;
      fVar7 = (moby->pos).y - local_17c;
      pfVar5[1] = fVar7;
      MVar23 = moby->oClass;
      fVar2 = (moby->pos).z - local_178;
      pfVar5[2] = fVar2;
      pfVar5[3] = (moby->pos).w;
      fVar3 = g_FrameTime;
      fVar20 = DAT_00765fcc * g_FrameTime * 0.05;
      fVar6 = fVar6 * fVar20;
      fVar7 = fVar7 * fVar20;
      *pfVar5 = fVar6;
      pfVar5[1] = fVar7;
      pfVar5[2] = fVar2 * fVar20;
      fVar2 = local_180 - g_heroPosition.x;
      fVar20 = local_17c - g_heroPosition.y;
      fVar12 = local_178 - g_heroPosition.z;
      if ((MVar23 == AIRSHIP_PART_04A1) || (MVar23 == AIRSHIP_PART_04A2)) {
        fVar4 = 0.0;
        fVar13 = SQRT(fVar12 * fVar12 + fVar2 * fVar2 + fVar20 * fVar20);
        fVar12 = fVar4;
        if (fVar13 != 0.0) {
          fVar13 = (DAT_00765fdc * fVar3) / fVar13;
          fVar4 = fVar2 * fVar13;
          fVar12 = fVar20 * fVar13;
        }
      }
      else {
        fVar4 = 0.0;
        fVar13 = SQRT(fVar12 * fVar12 + fVar2 * fVar2 + fVar20 * fVar20);
        fVar12 = fVar4;
        if (fVar13 != 0.0) {
          fVar13 = (DAT_00765fd0 * fVar3) / fVar13;
          fVar4 = fVar2 * fVar13;
          fVar12 = fVar20 * fVar13;
        }
      }
      pfVar5[2] = 0.0;
      *pfVar5 = fVar6 + fVar4;
      pfVar5[1] = fVar7 + fVar12;
      dVar26 = 0.01745329238474369;
      fVar3 = DAT_00765fd4 * 0.017453292 * fVar3;
      dVar27 = (double)MB_randRangeFloat(-fVar3,fVar3);
      pfVar5[8] = (float)dVar27;
      fVar6 = (float)((double)DAT_00765fd8 * dVar26) * g_FrameTime;
      dVar27 = (double)MB_randRangeFloat(-fVar6,fVar6);
      pfVar5[9] = (float)dVar27;
      dVar27 = (double)MB_randRangeFloat
                                 ((float)(longlong)(animationSpeed * 90.5),
                                  (float)(longlong)(animationSpeed * 150.5));
      local_a0 = (longlong)(int)dVar27;
      *(short *)((int)pfVar5 + 0x2a) = (short)(int)dVar27;
      dVar27 = (double)MB_randRangeFloat
                                 (DAT_00765fbc * DAT_0071f418,DAT_00765fc0 * DAT_0071f418);
      MVar23 = moby->oClass;
      pfVar5[0x19] = (float)dVar27;
      fVar6 = DAT_0071f418;
      if ((MVar23 == AIRSHIP_PART_04A1) || (MVar23 == AIRSHIP_PART_04A2)) {
        auVar29 = loadVectorLeftIndexed(0x20,uVar24);
        auVar30 = loadVectorLeftIndexed(0x2a,uVar24);
        auVar32 = loadVectorRightIndexed(0x30,uVar24);
        auVar33 = loadVectorRightIndexed(0x3a,uVar24);
        auVar29 = auVar29 | auVar32;
        auVar32 = ZEXT416(0xfffffff0);
        auVar31 = ZEXT416(0xffffffff);
        auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar34 = vectorReciprocalEstimateFloatingPoint(auVar29);
        auVar31 = vectorShiftRightAlgebraicWord
                            (auVar30 | auVar33,
                             auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
        auVar32 = loadVectorLeftIndexed(0x28,0x1f08c8);
        auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar30 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar32 = ZEXT416(0xffffffff);
        auVar31 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar32 = ZEXT416(0xffffffff);
        auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar32 = ZEXT416(0xffffffff);
        auVar39 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar32 = ZEXT416(0xffffffff);
        auVar40 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar29,auVar33);
        auVar32 = ZEXT416(0xffffffff);
        auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar37 = vectorReciprocalEstimateFloatingPoint(auVar30);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar35);
        auVar31 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar30,auVar33);
        auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar29,auVar33);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar36);
        auVar37 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar31);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar31 = loadVectorLeftIndexed(0x2c,0x1f08c8);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar33);
        auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar29,auVar33);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar39);
        auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar37);
        auVar37 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar33);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar29,auVar35);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar38);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar37);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar33);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x20,
                            uVar24);
        *(undefined4 *)((uint)(pfVar5 + 8) & 0xfffffffc) = uVar10;
        dVar27 = (double)MB_randRangeFloat(DAT_00765fc4 * fVar6,DAT_00765fc8 * fVar6);
        pfVar5[0x19] = (float)dVar27;
      }
      moby->collision = (ushort *)0x0;
      moby->state = '\x04';
    }
    else {
      pfVar5[2] = pfVar5[2] - pfVar5[0x19];
      fVar6 = (moby->rotation).x;
      (moby->pos).x = (moby->pos).x + *pfVar5;
      (moby->pos).y = (moby->pos).y + pfVar5[1];
      (moby->pos).z = (moby->pos).z + pfVar5[2];
      dVar27 = (double)FastWrapRot(fVar6,pfVar5[8]);
      (moby->rotation).x = (float)dVar27;
      dVar27 = (double)FastWrapRot((moby->rotation).y,pfVar5[9]);
      fVar9 = (moby->pos).x;
      (moby->rotation).y = (float)dVar27;
      uVar11 = (int)fVar9 >> 0x1f;
      iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
      if ((((iVar21 < 0x41400000) || (0x447cc000 < iVar21)) ||
          (fVar9 = (moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
          iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, 0x447cc000 < iVar21 || iVar21 < 0x41400000)
          ) || ((fVar9 = (moby->pos).z, uVar11 = (int)fVar9 >> 0x1f,
                iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, iVar21 < 0x41400000 ||
                (0x447cc000 < iVar21)))) {
        DeleteMoby(moby);
      }
      else {
        iVar21 = MB_randInt(3);
        if (iVar21 == 0) {
          local_a8[0] = 0x2f000000;
          local_a8[1] = 0x3f000000;
          lVar17 = MB_randInt(2);
          dVar27 = (double)animationSpeed;
          uVar25 = 0x41186a0000000000;
          uVar10 = *(undefined4 *)((int)local_a8 + (int)(lVar17 << 2));
          local_a0 = (longlong)(int)(dVar27 * 20.5);
          MB_randRange
                    (local_a0,dVar27,0x41186a0000000000,(int)(dVar27 * 15.5),(int)(dVar27 * 20.5));
          local_a0 = (longlong)(int)(animationSpeed * 30.5);
          MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
          dVar27 = (double)MB_randRangeFloat(8.0,16.0);
          SpawnPart_11
                    (uVar25,(double)(float)(dVar27 * (double)g_FrameTime),lVar16 + 0x10,
                     local_170,0x2f3f3f7f,uVar10);
        }
        fVar9 = (moby->pos).z;
        uVar11 = (int)fVar9 >> 0x1f;
        if ((int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11) < 0x41c80000) {
          iVar21 = 0;
          if (0 < DAT_00765f8c) {
            dVar26 = -3.0;
            dVar27 = 3.0;
            do {
              MB_randRot();
              MB_randRangeFloat((float)dVar26,(float)dVar27);
              MB_randRangeFloat((float)dVar26,(float)dVar27);
              uVar15 = DAT_00765f94;
              uVar10 = DAT_00765f90;
              local_a0 = (longlong)(DAT_00765fa8 << 1);
              dVar28 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_00765fa8,(float)local_a0);
              uVar25 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_a0 = (longlong)(DAT_00765fac << 1);
              dVar28 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_00765fac,(float)local_a0);
              uVar18 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_a0 = (longlong)(DAT_00765fb0 << 1);
              dVar28 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_00765fb0,(float)local_a0);
              uVar19 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              SpawnPart_2(local_140,local_160,local_150,uVar10,uVar15,uVar25,uVar18,uVar19)
              ;
              iVar21 = iVar21 + 1;
            } while (iVar21 < DAT_00765f8c);
          }
          *pfVar5 = *pfVar5 * 0.45;
          pfVar5[1] = pfVar5[1] * 0.45;
          pfVar5[2] = pfVar5[2] * 0.45;
          pfVar5[8] = pfVar5[8] * 0.9;
          pfVar5[9] = pfVar5[9] * 0.9;
          PlayMobySound(0,0,moby);
          moby->state = '\x05';
        }
      }
    }
  }
  else if (bVar1 < 6) {
    pfVar5[2] = -(DAT_0071f418 * 10.8 * 0.33333334 - pfVar5[2]);
    fVar6 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar5;
    (moby->pos).y = (moby->pos).y + pfVar5[1];
    (moby->pos).z = (moby->pos).z + pfVar5[2];
    dVar27 = (double)FastWrapRot(fVar6,pfVar5[8]);
    (moby->rotation).x = (float)dVar27;
    dVar27 = (double)FastWrapRot((moby->rotation).y,pfVar5[9]);
    fVar9 = (moby->pos).x;
    (moby->rotation).y = (float)dVar27;
    uVar11 = (int)fVar9 >> 0x1f;
    iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
    if ((((iVar21 < 0x41400000) || (0x447cc000 < iVar21)) ||
        (fVar9 = (moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
        iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, 0x447cc000 < iVar21 || iVar21 < 0x41400000))
       || ((fVar9 = (moby->pos).z, uVar11 = (int)fVar9 >> 0x1f,
           iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, iVar21 < 0x41400000 ||
           (0x447cc000 < iVar21)))) {
      DeleteMoby(moby);
    }
  }
  return;
}


