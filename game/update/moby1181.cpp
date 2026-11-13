// game/update/moby1181.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1eede4-0x1f0658
#include <stdio.h>
#include "game/update/moby1181.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x01eede4 (0x24 bytes)
void FUN_001eede4(int param_1)

{
  if ((*(short *)(param_1 + 0xa6) == 0x49c) && (*(char *)(param_1 + 0x20) == '\x01')) {
    *(undefined1 *)(param_1 + 0x20) = 2;
  }
  return;
}


// 0x01eee08 (0x14 bytes)
void M1181_001eee08(void)

{
  DAT_00765ef8 = 0x10000;
  return;
}


// 0x01eee28 (0x25c bytes)
// strings: 00654cd4: 'Moby class %d Damage Received: %f\n'

void M1181_001eee28(MobyInstance *param_1,undefined8 param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  MOBY_OCLASSES MVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 in_LR;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  int local_30 [4];
  
  if (param_1->state != '\x03') {
    iVar7 = MB_damage(param_1,0x330000,0);
    if (iVar7 != 0) {
      printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar7 + 0x2c));
    }
    iVar8 = MB_HandleDamage(param_1,iVar7,param_3,0,local_30,0,0,4);
    pfVar9 = (float *)param_3;
    if ((0 < iVar8) && (iVar8 < 3)) {
      *pfVar9 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar3 = (int)*pfVar9 >> 0x1f;
      uVar4 = (int)*(uint *)(iVar7 + 0x2c) >> 0x1f;
      iVar8 = (int)param_2;
      if ((int)((uVar4 >> 1 ^ *(uint *)(iVar7 + 0x2c)) - uVar4) <
          (int)((uVar3 >> 1 ^ (uint)*pfVar9) - uVar3)) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        *pfVar9 = *pfVar9 - *(float *)(iVar7 + 0x2c);
        auVar10 = loadVectorLeftIndexed(in_LR,0x1eee20);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = vectorSplatHalfWord(auVar10,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x26,param_2);
        *(undefined2 *)(iVar8 + 0x26) = uVar5;
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar9 = 0.0;
        iVar7 = *(int *)(iVar8 + 0x60);
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (iVar7 != -1) {
          pMVar6 = g_MobyInstance + iVar7;
          if ((pMVar6 != (MobyInstance *)0x0) && (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
            MVar2 = pMVar6->oClass;
            if ((MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION) ||
               (MVar2 == AIRSHIP_PART_04A0)) {
              pMVar6->setByGroup = '\x01';
            }
          }
        }
        if (*(int *)(iVar8 + 100) != -1) {
          pMVar6 = g_MobyInstance + iVar7;
          if ((pMVar6 != (MobyInstance *)0x0) && (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
            MVar2 = pMVar6->oClass;
            if ((MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION) ||
               (MVar2 == AIRSHIP_PART_04A0)) {
              pMVar6->setByGroup = '\x01';
            }
          }
        }
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  return;
}


// 0x01ef090 (0x1a8 bytes)
// strings: 001ef084: 'Nnk(?' (raw)

int M1181_001ef090
              (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float local_60;
  float local_5c;
  float local_58;
  
  iVar6 = 0;
  dVar8 = 1000000000.0;
  if (MobyUpdateChainStart != 0) {
    fStack00000044 = (float)param_3;
    dVar10 = (double)fStack00000044;
    fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
    dVar9 = (double)fStack00000040;
    fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
    dVar11 = (double)fStack00000048;
    iVar5 = MobyUpdateChainStart;
    _fStack00000040 = param_3;
    _fStack00000048 = param_4;
    do {
      if ((iVar5 != param_1) && (*(char *)(iVar5 + 0x20) != -3 && *(char *)(iVar5 + 0x20) != -2)) {
        sVar4 = *(short *)(iVar5 + 0xa6);
        if ((sVar4 == 0x494 || sVar4 == 0x49d) || (sVar4 == 0x4a0)) {
          if ((int)param_5 == -1) {
            fVar1 = *(float *)(iVar5 + 0x10);
            fVar2 = *(float *)(iVar5 + 0x14);
            fVar3 = *(float *)(iVar5 + 0x18);
          }
          else {
            GetBonePosition(iVar5,param_5,&local_60);
            fVar2 = local_5c;
            fVar1 = local_60;
            fVar3 = local_58;
          }
          dVar7 = (double)SQRT((float)(dVar11 - (double)fVar3) * (float)(dVar11 - (double)fVar3) +
                               (float)(dVar9 - (double)fVar1) * (float)(dVar9 - (double)fVar1) +
                               (float)(dVar10 - (double)fVar2) * (float)(dVar10 - (double)fVar2));
          if (dVar7 < dVar8) {
            dVar8 = dVar7;
            iVar6 = iVar5;
          }
        }
      }
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    if (iVar6 != 0) {
      if (dVar8 < 0.5) {
        return iVar6;
      }
      if ((*(short *)(iVar6 + 0xa6) == 0x4a0) && (dVar8 < 10.0)) {
        return iVar6;
      }
    }
  }
  return 0;
}


// 0x01ef268 (0x13f0 bytes)
// inlined: FastAtan2 @0x1ef678, FastAtan2 @0x1ef864, FastAtan2 @0x1efbb8, FastAtan2 @0x1efda4, FastAtan2 @0x1f0174, FastAtan2 @0x1f035c
// strings: 00654cf8: ' could not link next on moby type 1181 #%d\n' | 00654d28: ' could not link prev on moby type 1181 #%d\n'

/* Moby 1181 */

void UpdateMoby_1181(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  short sVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  uint uVar21;
  MobyInstance *pMVar22;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x240;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar17;
  puVar13[0x4a] = in_LR;
  puVar13[0x44] = in_f28;
  puVar13[0x45] = in_f29;
  puVar13[0x46] = in_f30;
  puVar13[0x47] = in_f31;
  puVar13[0x43] = unaff_r31;
  puVar13[0x42] = unaff_r30;
  bVar2 = moby->state;
  pvVar11 = moby->pVar;
  puVar13[0x41] = unaff_r29;
  puVar13[0x40] = unaff_r28;
  if (bVar2 < 2) {
    if (-1 < (int)(uint)bVar2) {
      if (bVar2 == 0) {
        if ((*(char *)((int)pvVar11 + 0x69) == -1) ||
           ((&g_MiscLevelFlags.field57_0x39)[*(char *)((int)pvVar11 + 0x69)] == 0)) {
          if (*(int *)((int)pvVar11 + 0x60) == -1) {
            GetBonePosition(moby,0,uVar17 - 0x180);
            *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(puVar13 + 0x18);
            *(undefined4 *)(puVar13 + 9) = *(undefined4 *)(puVar13 + 0x19);
            *(undefined4 *)((int)puVar13 + 0x44) = *(undefined4 *)((int)puVar13 + 0xc4);
            *(undefined4 *)((int)puVar13 + 0x4c) = *(undefined4 *)((int)puVar13 + 0xcc);
            iVar20 = M1181_001ef090(moby);
            if (iVar20 == 0) {
              printf(" could not link next on moby type 1181 #%d\n",moby->uid);
            }
            else {
              uVar21 = iVar20 - (int)g_MobyInstance;
              *(uint *)((int)pvVar11 + 0x60) =
                   ((int)uVar21 >> 8) + (uint)((int)uVar21 < 0 && (uVar21 & 0xff) != 0);
            }
          }
          if (*(int *)((int)pvVar11 + 100) == -1) {
            fVar3 = (moby->pos).z;
            *(f32 *)(puVar13 + 8) = (moby->pos).x;
            *(f32 *)(puVar13 + 9) = fVar3;
            fVar3 = (moby->pos).w;
            *(f32 *)((int)puVar13 + 0x44) = (moby->pos).y;
            *(f32 *)((int)puVar13 + 0x4c) = fVar3;
            iVar20 = M1181_001ef090(moby);
            if (iVar20 == 0) {
              printf(" could not link prev on moby type 1181 #%d\n",moby->uid);
            }
            else {
              uVar21 = iVar20 - (int)g_MobyInstance;
              *(uint *)((int)pvVar11 + 100) =
                   ((int)uVar21 >> 8) + (uint)((int)uVar21 < 0 && (uVar21 & 0xff) != 0);
            }
          }
          moby->state = '\x01';
        }
        else {
          DeleteMoby(moby);
        }
      }
      else if (((moby->enabled != '\0') &&
               (fVar5 = (moby->pos).y - GameCamera.posY, fVar7 = (moby->pos).x - GameCamera.posX,
               fVar4 = (moby->pos).z - GameCamera.posZ,
               SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5) <= 32.0)) ||
              (uVar8 = moby->uid,
              worldUpdateTime +
              (((int)worldUpdateTime >> 3) +
              (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * -8 ==
              (int)(short)uVar8 +
              (((int)(short)uVar8 >> 3) + (uint)((short)uVar8 < 0 && (uVar8 & 7) != 0)) * -8)) {
        pMVar27 = (MobyInstance *)0x0;
        pMVar22 = (MobyInstance *)0x0;
        if ((*(int *)((int)pvVar11 + 0x60) != -1) &&
           (((pMVar27 = g_MobyInstance + *(int *)((int)pvVar11 + 0x60), pMVar27 == (MobyInstance *)0x0
             || (pMVar27->state == 0xfe)) || (pMVar27->state == 0xfd)))) {
          pMVar27 = (MobyInstance *)0x0;
        }
        if (*(int *)((int)pvVar11 + 100) != -1) {
          pMVar22 = g_MobyInstance + *(int *)((int)pvVar11 + 100);
          if (((pMVar22 == (MobyInstance *)0x0) || (pMVar22->state == 0xfe)) ||
             (pMVar22->state == 0xfd)) {
            pMVar22 = (MobyInstance *)0x0;
            *(undefined1 *)((int)pvVar11 + 0x68) = 0;
          }
          else if (*(char *)((int)pMVar22->pVar + 0x68) == '\0') {
            *(undefined1 *)((int)pvVar11 + 0x68) = 0;
          }
        }
        if (((*(char *)((int)pvVar11 + 0x68) != '\0') ||
            (pMVar22 == (MobyInstance *)0x0 || pMVar27 == (MobyInstance *)0x0)) ||
           (bVar1 = pMVar22->oClass != AIRSHIP_PART_049D, bVar1)) {
          *(undefined1 *)((int)pvVar11 + 0x68) = 1;
        }
        else if ((bVar1) || (*(char *)((int)pMVar22->pVar + 0x68) == '\0')) {
          dVar29 = (double)(moby->pos).y;
          fVar5 = (float)((double)(pMVar27->pos).y - dVar29);
          dVar35 = (double)(moby->pos).x;
          fVar4 = (moby->pos).z;
          fVar7 = (float)((double)(pMVar27->pos).x - dVar35);
          fVar6 = (pMVar27->pos).z - fVar4;
          fVar15 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
          dVar30 = 0.0;
          fVar16 = ((fVar15 - 1.3) * 0.7) / fVar15;
          dVar36 = dVar30;
          if (0.0 - fVar15 < 0.0) {
            dVar36 = (double)(fVar6 * fVar16);
          }
          dVar34 = dVar30;
          if (0.0 - fVar15 < 0.0) {
            dVar34 = (double)(fVar5 * fVar16);
          }
          dVar37 = dVar30;
          if (0.0 - fVar15 < 0.0) {
            dVar37 = (double)(fVar7 * fVar16);
          }
          if (fVar15 - 0.0 < 0.0) {
            dVar36 = (double)(fVar6 * fVar16);
          }
          if (fVar15 - 0.0 < 0.0) {
            dVar34 = (double)(fVar5 * fVar16);
          }
          if (fVar15 - 0.0 < 0.0) {
            dVar37 = (double)(fVar7 * fVar16);
          }
          if ((!bVar1) && (pMVar22->state != 0xfd && pMVar22->state != 0xfe)) {
            fVar5 = (float)((double)(pMVar22->pos).y - dVar29);
            fVar7 = (float)((double)(pMVar22->pos).x - dVar35);
            fVar6 = (pMVar22->pos).z - fVar4;
            fVar15 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
            fVar16 = ((fVar15 - 1.3) * 0.7) / fVar15;
            dVar31 = dVar30;
            if (0.0 - fVar15 < 0.0) {
              dVar31 = (double)(fVar6 * fVar16);
            }
            dVar32 = dVar30;
            if (0.0 - fVar15 < 0.0) {
              dVar32 = (double)(fVar5 * fVar16);
            }
            dVar33 = dVar30;
            if (0.0 - fVar15 < 0.0) {
              dVar33 = (double)(fVar7 * fVar16);
            }
            if (fVar15 - 0.0 < 0.0) {
              dVar31 = (double)(fVar6 * fVar16);
            }
            if (fVar15 - 0.0 < 0.0) {
              dVar32 = (double)(fVar5 * fVar16);
            }
            if (fVar15 - 0.0 < 0.0) {
              dVar33 = (double)(fVar7 * fVar16);
            }
            dVar36 = (double)(float)(dVar36 + dVar31);
            dVar34 = (double)(float)(dVar34 + dVar32);
            dVar37 = (double)(float)(dVar37 + dVar33);
          }
          dVar31 = (double)g_FrameTimeSq;
          (moby->pos).x = (float)(dVar35 + dVar37);
          (moby->pos).y = (float)(dVar29 + dVar34);
          fVar4 = fVar4 + -(float)(dVar31 * 9.800000190734863 - dVar36);
          (moby->pos).z = fVar4;
          fVar7 = (float)(dVar29 + dVar34) - (pMVar27->pos).y;
          fVar5 = (float)(dVar35 + dVar37) - (pMVar27->pos).x;
          dVar36 = (double)(moby->rotation).y;
          fVar4 = (pMVar27->pos).z - fVar4;
          fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
          *(float *)(puVar13 + 0x21) = fVar4;
          fVar4 = ABS(fVar4);
          fVar7 = ABS(fVar5);
          *(float *)((int)puVar13 + 0x104) = fVar5;
          *(float *)((int)puVar13 + 0x10c) = fVar7 - fVar4;
          uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x10c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0x21) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)((int)puVar13 + 0x104));
          if (*(float *)((int)puVar13 + 0x10c) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)(puVar13 + 0x21));
          if (*(float *)((int)puVar13 + 0x10c) - 0.0 < 0.0) {
            fVar15 = fVar7;
          }
          dVar35 = dVar30;
          if (0.0 < fVar5) {
            lVar18 = uVar17 - 0x230;
            lVar24 = uVar17 - 0xb8;
            lVar26 = uVar17 - 0xa8;
            lVar28 = 2;
            fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
            fVar7 = fVar5 * fVar5;
            *(float *)((int)puVar13 + 0x194) = fVar5;
            *(float *)((int)puVar13 + 0x18c) = fVar5;
            *(float *)(puVar13 + 0x32) = fVar5;
            *(float *)(puVar13 + 0x31) = fVar5;
            fVar5 = fVar7 * fVar7;
            *(float *)((int)puVar13 + 0x18c) = *(float *)((int)puVar13 + 0x18c) * fVar7;
            *(float *)(puVar13 + 0x32) = *(float *)(puVar13 + 0x32) * fVar5;
            *(float *)((int)puVar13 + 0x194) = *(float *)((int)puVar13 + 0x194) * fVar5 * fVar7;
            do {
              *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x178) * fVar5 * fVar5;
              iVar20 = (int)lVar24;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0xb8;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar5 = *pfVar25;
              fVar7 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x188) * fVar5;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x188)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar4);
          }
          dVar35 = (double)FastDiffRots(-dVar35,dVar36);
          dVar37 = 0.10000000149011612;
          dVar36 = (double)FastWrapRot
                                     ((float)dVar36,(float)(dVar35 * 0.10000000149011612));
          (moby->rotation).y = (float)dVar36;
          fVar5 = (pMVar27->pos).x - (moby->pos).x;
          fVar7 = (pMVar27->pos).y - (moby->pos).y;
          dVar35 = ABS((double)fVar5);
          dVar29 = ABS((double)fVar7);
          *(float *)(puVar13 + 0x1f) = fVar5;
          *(float *)((int)puVar13 + 0xfc) = fVar7;
          dVar34 = (double)(moby->rotation).z;
          *(float *)(puVar13 + 0x20) = (float)(dVar35 - dVar29);
          uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1d) & 4;
          dVar36 = ABS((double)*(float *)(puVar13 + 0x1f));
          if ((double)*(float *)(puVar13 + 0x20) - dVar30 < 0.0) {
            dVar36 = dVar29;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar29 = ABS((double)*(float *)((int)puVar13 + 0xfc));
          if ((double)*(float *)(puVar13 + 0x20) - dVar30 < 0.0) {
            dVar29 = dVar35;
          }
          if (dVar30 < dVar36) {
            lVar18 = uVar17 - 0x230;
            lVar26 = uVar17 - 200;
            lVar24 = uVar17 - 0xd8;
            lVar28 = 2;
            fVar4 = (float)(dVar29 - dVar36) / (float)(dVar29 + dVar36);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x174) = fVar4;
            *(float *)((int)puVar13 + 0x16c) = fVar4;
            *(float *)(puVar13 + 0x2e) = fVar4;
            *(float *)(puVar13 + 0x2d) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar13 + 0x16c) = *(float *)((int)puVar13 + 0x16c) * fVar6;
            *(float *)(puVar13 + 0x2e) = *(float *)(puVar13 + 0x2e) * fVar4;
            *(float *)((int)puVar13 + 0x174) = *(float *)((int)puVar13 + 0x174) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x158) * fVar4 * fVar4;
              iVar20 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0xd8;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar6 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x168) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar18 = 2;
            do {
              iVar20 = (int)lVar19;
              iVar14 = (int)lVar26;
              lVar19 = lVar19 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x168)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar5);
          }
          dVar36 = (double)FastDiffRots(dVar30,dVar34);
          dVar36 = (double)FastWrapRot((float)dVar34,(float)(dVar36 * dVar37));
          (moby->rotation).z = (float)dVar36;
        }
        else {
          fVar5 = (moby->pos).y - (pMVar27->pos).y;
          fVar7 = (moby->pos).x - (pMVar27->pos).x;
          dVar36 = (double)(moby->rotation).y;
          fVar4 = (pMVar27->pos).z - (moby->pos).z;
          fVar5 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
          *(float *)(puVar13 + 0x24) = fVar4;
          fVar4 = ABS(fVar4);
          fVar7 = ABS(fVar5);
          *(float *)((int)puVar13 + 0x11c) = fVar5;
          *(float *)((int)puVar13 + 0x124) = fVar7 - fVar4;
          dVar35 = 0.0;
          uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x11c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x124) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0x24) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)((int)puVar13 + 0x11c));
          if (*(float *)((int)puVar13 + 0x124) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)(puVar13 + 0x24));
          if (*(float *)((int)puVar13 + 0x124) - 0.0 < 0.0) {
            fVar15 = fVar7;
          }
          dVar29 = dVar35;
          if (0.0 < fVar5) {
            lVar18 = uVar17 - 0x230;
            lVar24 = uVar17 - 0x78;
            lVar26 = uVar17 - 0x68;
            lVar28 = 2;
            fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
            fVar7 = fVar5 * fVar5;
            *(float *)((int)puVar13 + 0x1d4) = fVar5;
            *(float *)((int)puVar13 + 0x1cc) = fVar5;
            *(float *)(puVar13 + 0x3a) = fVar5;
            *(float *)(puVar13 + 0x39) = fVar5;
            fVar5 = fVar7 * fVar7;
            *(float *)((int)puVar13 + 0x1cc) = *(float *)((int)puVar13 + 0x1cc) * fVar7;
            *(float *)(puVar13 + 0x3a) = *(float *)(puVar13 + 0x3a) * fVar5;
            *(float *)((int)puVar13 + 0x1d4) = *(float *)((int)puVar13 + 0x1d4) * fVar5 * fVar7;
            do {
              *(float *)((int)lVar18 + 0x1c8) = *(float *)((int)lVar18 + 0x1b8) * fVar5 * fVar5;
              iVar20 = (int)lVar24;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0x78;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar5 = *pfVar25;
              fVar7 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x1c8) = *(float *)((int)lVar18 + 0x1c8) * fVar5;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x1c8)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar4);
          }
          dVar29 = (double)FastDiffRots(-dVar29,dVar36);
          dVar37 = 0.10000000149011612;
          dVar36 = (double)FastWrapRot
                                     ((float)dVar36,(float)(dVar29 * 0.10000000149011612));
          (moby->rotation).y = (float)dVar36;
          fVar5 = (pMVar27->pos).x - (moby->pos).x;
          fVar7 = (pMVar27->pos).y - (moby->pos).y;
          dVar29 = ABS((double)fVar5);
          dVar30 = ABS((double)fVar7);
          *(float *)(puVar13 + 0x22) = fVar5;
          *(float *)((int)puVar13 + 0x114) = fVar7;
          dVar34 = (double)(moby->rotation).z;
          *(float *)(puVar13 + 0x23) = (float)(dVar29 - dVar30);
          uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x22) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x23) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x114) >> 0x1d) & 4;
          dVar36 = ABS((double)*(float *)(puVar13 + 0x22));
          if ((double)*(float *)(puVar13 + 0x23) - dVar35 < 0.0) {
            dVar36 = dVar30;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar30 = ABS((double)*(float *)((int)puVar13 + 0x114));
          if ((double)*(float *)(puVar13 + 0x23) - dVar35 < 0.0) {
            dVar30 = dVar29;
          }
          if (dVar35 < dVar36) {
            lVar18 = uVar17 - 0x230;
            lVar26 = uVar17 - 0x88;
            lVar24 = uVar17 - 0x98;
            lVar28 = 2;
            fVar4 = (float)(dVar30 - dVar36) / (float)(dVar30 + dVar36);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x1b4) = fVar4;
            *(float *)((int)puVar13 + 0x1ac) = fVar4;
            *(float *)(puVar13 + 0x36) = fVar4;
            *(float *)(puVar13 + 0x35) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar13 + 0x1ac) = *(float *)((int)puVar13 + 0x1ac) * fVar6;
            *(float *)(puVar13 + 0x36) = *(float *)(puVar13 + 0x36) * fVar4;
            *(float *)((int)puVar13 + 0x1b4) = *(float *)((int)puVar13 + 0x1b4) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar18 + 0x1a8) = *(float *)((int)lVar18 + 0x198) * fVar4 * fVar4;
              iVar20 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0x98;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar6 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x1a8) = *(float *)((int)lVar18 + 0x1a8) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar18 = 2;
            do {
              iVar20 = (int)lVar19;
              iVar14 = (int)lVar26;
              lVar19 = lVar19 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x1a8)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar7 + fVar5);
          }
          dVar36 = (double)FastDiffRots(dVar35,dVar34);
          dVar36 = (double)FastWrapRot((float)dVar34,(float)(dVar36 * dVar37));
          (moby->rotation).z = (float)dVar36;
        }
        if (moby->setByGroup == '\x01') {
          iVar20 = *(int *)((int)pvVar11 + 0x6c);
          if ((iVar20 != -1) && (g_MobyInstance[iVar20].state == '\x01')) {
            g_MobyInstance[iVar20].setByGroup = '\x01';
          }
          auVar38 = ZEXT416(0xffffffff);
          auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
          auVar38 = loadVectorLeftIndexed(0x1c,0x1ef238);
          auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar38 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                               ,auVar39);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar38 = vectorSplatHalfWord(auVar38,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar38,0x6a,ZEXT48(pvVar11));
          *(undefined2 *)((int)pvVar11 + 0x6a) = uVar12;
          moby->updateDistance = -1;
          moby->state = '\x02';
        }
      }
    }
  }
  else if (bVar2 < 3) {
    moby->updateDistance = -1;
    if ((((*(int *)((int)pvVar11 + 0x60) != -1) &&
         (pMVar27 = g_MobyInstance + *(int *)((int)pvVar11 + 0x60), pMVar27 != (MobyInstance *)0x0))
        && (pMVar27->state != 0xfe)) && (pMVar27->state != 0xfd)) {
      fVar5 = (pMVar27->pos).y - (moby->pos).y;
      fVar7 = (pMVar27->pos).x - (moby->pos).x;
      fVar4 = (pMVar27->pos).z - (moby->pos).z;
      dVar35 = 0.0;
      sVar9 = *(short *)((int)pvVar11 + 0x6a);
      fVar6 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5);
      puVar13[0x3d] = (longlong)(int)(animationSpeed * 10.5);
      fVar15 = (fVar6 - 1.3) / fVar6;
      dVar36 = dVar35;
      if (0.0 - fVar6 < 0.0) {
        dVar36 = (double)(fVar4 * fVar15);
      }
      dVar29 = dVar35;
      if (0.0 - fVar6 < 0.0) {
        dVar29 = (double)(fVar5 * fVar15);
      }
      dVar30 = dVar35;
      if (0.0 - fVar6 < 0.0) {
        dVar30 = (double)(fVar7 * fVar15);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar36 = (double)(fVar4 * fVar15);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar29 = (double)(fVar5 * fVar15);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar30 = (double)(fVar7 * fVar15);
      }
      dVar34 = (double)FastIntToDouble((*(int *)((int)puVar13 + 0x1ec) - (int)sVar9) + 3);
      fVar4 = g_FrameTimeSq * 9.8;
      fVar5 = (float)((double)(moby->pos).x + dVar30);
      fVar7 = (float)((double)(moby->pos).y + dVar29);
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar7;
      fVar4 = (moby->pos).z + -(float)((double)(fVar4 * 2.0) * dVar34 - dVar36);
      (moby->pos).z = fVar4;
      fVar7 = fVar7 - (pMVar27->pos).y;
      fVar5 = fVar5 - (pMVar27->pos).x;
      dVar34 = (double)(moby->rotation).y;
      fVar4 = (pMVar27->pos).z - fVar4;
      fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
      *(float *)(puVar13 + 0x1e) = fVar4;
      dVar30 = ABS((double)fVar4);
      dVar29 = ABS((double)fVar5);
      *(float *)((int)puVar13 + 0xec) = fVar5;
      *(float *)((int)puVar13 + 0xf4) = (float)(dVar29 - dVar30);
      uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1d) & 4;
      dVar36 = ABS((double)*(float *)((int)puVar13 + 0xec));
      if ((double)*(float *)((int)puVar13 + 0xf4) - dVar35 < 0.0) {
        dVar36 = dVar30;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar30 = ABS((double)*(float *)(puVar13 + 0x1e));
      if ((double)*(float *)((int)puVar13 + 0xf4) - dVar35 < 0.0) {
        dVar30 = dVar29;
      }
      fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar29 = dVar35;
      if (dVar35 < dVar36) {
        lVar18 = uVar17 - 0x230;
        lVar26 = uVar17 - 0xe8;
        lVar24 = uVar17 - 0xf8;
        lVar28 = 2;
        fVar4 = (float)(dVar30 - dVar36) / (float)(dVar30 + dVar36);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0x154) = fVar4;
        *(float *)((int)puVar13 + 0x14c) = fVar4;
        *(float *)(puVar13 + 0x2a) = fVar4;
        *(float *)(puVar13 + 0x29) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar6;
        *(float *)(puVar13 + 0x2a) = *(float *)(puVar13 + 0x2a) * fVar4;
        *(float *)((int)puVar13 + 0x154) = *(float *)((int)puVar13 + 0x154) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x148) = *(float *)((int)lVar18 + 0x138) * fVar4 * fVar4;
          iVar20 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar17 - 0xf8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x148) = *(float *)((int)lVar18 + 0x148) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar18 = lVar19;
        dVar36 = dVar35;
        do {
          iVar20 = (int)lVar18;
          iVar14 = (int)lVar26;
          lVar18 = lVar18 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar20 + 0x148)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar29 = (double)((float)(dVar36 + 0.7853981852531433) * fVar5 + fVar7);
      }
      dVar36 = (double)FastDiffRots(-dVar29,dVar34);
      dVar37 = 0.5;
      dVar36 = (double)FastWrapRot((float)dVar34,(float)(dVar36 * 0.5));
      (moby->rotation).y = (float)dVar36;
      fVar5 = (pMVar27->pos).x - (moby->pos).x;
      fVar7 = (pMVar27->pos).y - (moby->pos).y;
      dVar29 = ABS((double)fVar5);
      dVar30 = ABS((double)fVar7);
      *(float *)(puVar13 + 0x1c) = fVar5;
      *(float *)((int)puVar13 + 0xe4) = fVar7;
      dVar34 = (double)(moby->rotation).z;
      *(float *)(puVar13 + 0x1d) = (float)(dVar29 - dVar30);
      uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1d) & 4;
      dVar36 = ABS((double)*(float *)(puVar13 + 0x1c));
      if ((double)*(float *)(puVar13 + 0x1d) - dVar35 < 0.0) {
        dVar36 = dVar30;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar30 = ABS((double)*(float *)((int)puVar13 + 0xe4));
      if ((double)*(float *)(puVar13 + 0x1d) - dVar35 < 0.0) {
        dVar30 = dVar29;
      }
      if (dVar35 < dVar36) {
        lVar18 = uVar17 - 0x230;
        lVar26 = uVar17 - 0x108;
        lVar24 = uVar17 - 0x118;
        lVar28 = 2;
        fVar4 = (float)(dVar30 - dVar36) / (float)(dVar30 + dVar36);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0x134) = fVar4;
        *(float *)((int)puVar13 + 300) = fVar4;
        *(float *)(puVar13 + 0x26) = fVar4;
        *(float *)(puVar13 + 0x25) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar6;
        *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar4;
        *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x128) = *(float *)((int)lVar18 + 0x118) * fVar4 * fVar4;
          iVar20 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar17 - 0x118;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x128) = *(float *)((int)lVar18 + 0x128) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar20 = (int)lVar19;
          iVar14 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x128)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar7 + fVar5);
      }
      dVar36 = (double)FastDiffRots(dVar35,dVar34);
      dVar36 = (double)FastWrapRot((float)dVar34,(float)(dVar36 * dVar37));
      (moby->rotation).z = (float)dVar36;
    }
    iVar20 = FastDecTimerS16(ZEXT48(pvVar11) + 0x6a);
    if (iVar20 != 0) {
      if (((*(int *)((int)pvVar11 + 0x60) != -1) &&
          (pMVar27 = g_MobyInstance + *(int *)((int)pvVar11 + 0x60), pMVar27 != (MobyInstance *)0x0))
         && ((pMVar27->state != 0xfd && pMVar27->state != 0xfe &&
             ((MVar10 = pMVar27->oClass, MVar10 == AIRSHIP_PART_049D || MVar10 == REFUELING_STATION
              || (MVar10 == AIRSHIP_PART_04A0)))))) {
        pMVar27->updateDistance = -1;
        pMVar27->setByGroup = '\x01';
      }
      if ((((*(int *)((int)pvVar11 + 100) != -1) &&
           (pMVar27 = g_MobyInstance + *(int *)((int)pvVar11 + 100), pMVar27 != (MobyInstance *)0x0))
          && (pMVar27->state != 0xfd && pMVar27->state != 0xfe)) &&
         ((MVar10 = pMVar27->oClass, MVar10 == AIRSHIP_PART_049D || MVar10 == REFUELING_STATION ||
          (MVar10 == AIRSHIP_PART_04A0)))) {
        pMVar27->updateDistance = -1;
        pMVar27->setByGroup = '\x01';
      }
      moby->state = '\x03';
    }
  }
  else if (bVar2 < 4) {
    fVar5 = GameCamera.posX - (moby->pos).x;
    fVar7 = GameCamera.posY - (moby->pos).y;
    fVar4 = GameCamera.posZ - (moby->pos).z;
    *(char (*) [4])((int)puVar13 + 0xdc) = GameCamera.posW;
    *(float *)(puVar13 + 0x1a) = fVar5;
    *(float *)((int)puVar13 + 0xd4) = fVar7;
    *(float *)(puVar13 + 0x1b) = fVar4;
    puVar13[0x12] = 0;
    puVar13[0x14] = 0;
    puVar13[0x15] = 1;
    puVar13[0x16] = 0xffffffffffffffff;
    puVar13[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4024000000000000,0x3ff0000000000000,
               0x4024000000000000,moby,uVar17 - 0x170,0,0,1,10,5,8);
    DeleteMoby(moby);
  }
  return;
}


