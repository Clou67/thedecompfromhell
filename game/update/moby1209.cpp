// game/update/moby1209.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1ffaf0-0x200c24
#include "game/update/moby1209.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x01ffaf0 (0x474 bytes)
// inlined: FastAtan2 @0x1ffc40, FastAtan2 @0x1ffde0
MobyInstance * FUN_001ffaf0(int param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x19] = unaff_r29;
  puVar8[0x1a] = unaff_r30;
  puVar8[0x18] = unaff_r28;
  pMVar13 = CreateMoby(CONSTRUCTORBOT);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->enabled = '\x01';
    pMVar13->drawDistance = 0xff;
    SetColorOfMoby
              (pMVar13,(longlong)DAT_0076659c,(longlong)DAT_007665a0,(longlong)DAT_007665a4);
    pMVar13->modeBits = *(MobyModeBit *)(param_1 + 0x34);
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar8 + 0xf) = fVar2 - fVar3;
    fVar1 = 0.0;
    pfVar6 = (float *)pMVar13->pVar;
    uVar18 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar9 = fVar1;
    if (0.0 < fVar5) {
      lVar14 = uVar12 - 0xd0;
      lVar19 = uVar12 - 0x34;
      lVar16 = uVar12 - 0x44;
      lVar20 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      *(float *)(puVar8 + 0x14) = fVar5;
      *(float *)((int)puVar8 + 0xa4) = fVar5;
      *(float *)((int)puVar8 + 0x9c) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar5;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x8c) * fVar5 * fVar5;
        iVar10 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar12 - 0x44;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar5 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x9c) * fVar5;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar14 = lVar15;
      fVar5 = fVar1;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar9 = (fVar5 + 0.7853982) * fVar4 + fVar2;
    }
    (pMVar13->rotation).z = fVar9;
    fVar4 = param_3[2];
    fVar5 = ABS(param_3[2]);
    fVar3 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar2 = ABS(fVar3);
    *(float *)(puVar8 + 0xe) = fVar3;
    *(float *)((int)puVar8 + 0x74) = fVar2 - fVar5;
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar14 = uVar12 - 0xd0;
      lVar19 = uVar12 - 0x54;
      lVar16 = uVar12 - 100;
      lVar20 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x11) = fVar4;
      *(float *)(puVar8 + 0x10) = fVar4;
      *(float *)((int)puVar8 + 0x84) = fVar4;
      *(float *)((int)puVar8 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar4;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar4 * fVar4;
        iVar10 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar12 - 100;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
    }
    (pMVar13->rotation).y = fVar1;
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    pMVar13->state = '\x01';
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    *pfVar6 = *param_3;
    pfVar6[1] = param_3[1];
    pfVar6[2] = param_3[2];
    pfVar6[3] = param_3[3];
    auVar21 = loadVectorLeftIndexed(8,0x1ffae4);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x10,
                       ZEXT48(pfVar6));
    *(undefined4 *)((uint)(pfVar6 + 4) & 0xfffffffc) = uVar7;
  }
  return pMVar13;
}


// 0x01fff88 (0x64c bytes)
/* Moby 1209 */

void UpdateMoby_1209(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  short *psVar3;
  void *pvVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  float local_b0;
  float local_ac;
  float local_a8;
  GPiece<4> auStack_a0;
  float local_9c;
  float local_8c;
  float local_7c;
  float local_6c;
  MobyInstance *local_60 [8];
  
  psVar3 = (short *)moby->pVar;
  uVar15 = ZEXT48(psVar3);
  bVar12 = false;
  dVar18 = (double)(moby->pos).w;
  if ((moby->state == '\x01') || (moby->state == '\x02')) {
    dVar19 = (double)((moby->pos).y - g_heroPosition.y);
    dVar17 = (double)((moby->pos).x - g_heroPosition.x);
    dVar16 = (double)((moby->pos).z - g_heroPosition.z);
    if ((SQRT((float)(dVar16 * dVar16 +
                     (double)(float)(dVar17 * dVar17 + (double)(float)(dVar19 * dVar19)))) <
         *(float *)(psVar3 + 10)) &&
       (FastNormalizeRMtx4(auStack_a0,(longlong)(int)moby + 0xc0),
       (float)((double)local_6c * dVar18 +
              (double)(float)((double)local_7c * dVar16 +
                             (double)(float)((double)local_9c * dVar17 +
                                            (double)(float)((double)local_8c * dVar19)))) < 0.2)) {
      bVar12 = true;
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(char *)((int)psVar3 + 9) == '\0') {
        GetBonePosition((longlong)(int)moby,0,&local_b0);
        fVar9 = (moby->pos).y - local_ac;
        fVar10 = (moby->pos).x - local_b0;
        fVar11 = (moby->pos).z - local_a8;
        *(undefined1 *)((int)psVar3 + 0xb) = 0;
        *(MobyInstance **)(psVar3 + 8) = moby;
        *(float *)(psVar3 + 10) = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        MB_GetFirstMobyInGroup(local_60,(uint)(byte)moby->group,'\0','\0');
        while (local_60[0] != (MobyInstance *)0x0) {
          if ((local_60[0] != moby) && (local_60[0]->oClass == UNDERWATER_RING)) {
            pvVar4 = local_60[0]->pVar;
            *(MobyInstance **)((int)pvVar4 + 0x10) = moby;
            *(undefined1 *)((int)pvVar4 + 9) = 1;
            *(undefined4 *)((int)pvVar4 + 0x14) = *(undefined4 *)(psVar3 + 10);
          }
          *(char *)((int)psVar3 + 0xb) = *(char *)((int)psVar3 + 0xb) + '\x01';
          MB_GetNextMobyInGroup(local_60,local_60[0],'\0','\0');
        }
      }
      *psVar3 = 0;
      psVar3[1] = 0;
      *(undefined1 *)(psVar3 + 5) = 0;
      psVar3[2] = 0;
      psVar3[3] = 0;
      SetColorOfMoby(moby,0,0,0);
      moby->state = '\x01';
    }
    else {
      uVar2 = moby->uid;
      if ((((&g_Checkpoint.objState[0])[(short)uVar2] == '\0') &&
          ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) == 0)) || (*(int *)(psVar3 + 0xe) == 0)) {
        if (psVar3[2] == 0 && bVar12) {
          iVar13 = *(int *)(psVar3 + 8);
          puVar5 = *(undefined2 **)(iVar13 + 0x78);
          if (*(char *)(iVar13 + 0x20) == '\x01') {
            *(undefined1 *)(psVar3 + 5) = 0;
            *(undefined1 *)(iVar13 + 0x20) = 2;
            auVar20 = loadVectorLeftIndexed(4,0x1fff68);
            auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
            if (0 < *(int *)(puVar5 + 6)) {
              auVar20 = ZEXT416(0xffffffff);
              auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
              auVar22 = vectorShiftLeftIntegerWord(auVar20,auVar20);
              auVar20 = loadVectorLeftIndexed(0xc,uVar15);
              auVar21 = loadVectorRightIndexed(0x1c,uVar15);
              auVar21 = vectorConvertFromSignedFixedPointWord(auVar20 | auVar21,0);
              auVar20 = loadVectorLeftIndexed(8,0x1fff68);
              auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar20 = vectorAddFloatingPoint
                                  (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 |
                                           auVar20 << 0x60);
              auVar20 = vectorMultiplyAddFloatingPoint(auVar23,auVar20,auVar22);
              auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
            }
            auVar20 = vectorSplatHalfWord(auVar20,1);
            uVar7 = storeVectorElementHalfWordIndexed(auVar20,0,ZEXT48(puVar5));
            *puVar5 = uVar7;
          }
          *(char *)(puVar5 + 5) = *(char *)(puVar5 + 5) + '\x01';
          PlayMobySound(3,0x31,moby);
          SetColorOfMoby(moby,0,0xff,0);
          psVar3[2] = 1;
          bVar1 = moby->state;
        }
        if (bVar1 == 2) {
          if (*(byte *)(psVar3 + 5) < *(byte *)((int)psVar3 + 0xb)) {
            iVar13 = FastDecTimerS16(uVar15);
            if (iVar13 == 0) {
              iVar13 = FastDecTimerS16(uVar15 + 2);
              if (iVar13 != 0) {
                PlayMobySound(0,0x31,moby);
                iVar14 = (int)(animationSpeed * 5.5) + (int)*psVar3 / (int)(animationSpeed * 40.5);
                iVar13 = (int)(animationSpeed * 45.5);
                if (iVar14 <= (int)(animationSpeed * 45.5)) {
                  iVar13 = iVar14;
                }
                psVar3[1] = (short)iVar13;
              }
            }
            else {
              *(undefined1 *)(psVar3 + 5) = 0;
              psVar3[2] = 0;
              PlayMobySound(2,0x31,moby);
              MB_SetStateByGroup(moby->group,3);
            }
          }
          else {
            MB_SetStateByGroup(moby->group,4);
            PlayMobySound(1,0x31,moby);
            *psVar3 = (short)*(undefined4 *)(psVar3 + 0xc);
            moby->state = '\x04';
          }
        }
      }
      else {
        MB_SetStateByGroup(moby->group,4);
        *psVar3 = (short)*(undefined4 *)(psVar3 + 0xc);
        moby->state = '\x04';
      }
    }
  }
  else if (bVar1 < 4) {
    SetColorOfMoby(moby,0,0,0);
    *(undefined1 *)(psVar3 + 5) = 0;
    psVar3[2] = 0;
    moby->state = '\x01';
  }
  else if (bVar1 < 5) {
    iVar13 = FastDecTimerS16(uVar15 + 6);
    if (iVar13 != 0) {
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0x18,0x1fff68);
      auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                           auVar21);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      auVar20 = vectorSplatHalfWord(auVar20,1);
      sVar8 = storeVectorElementHalfWordIndexed(auVar20,6,uVar15);
      psVar3[3] = sVar8;
      if (*(char *)(psVar3 + 4) == '\0') {
        SetColorOfMoby(moby,0xff,0xff,0xff);
        *(undefined1 *)(psVar3 + 4) = 1;
      }
      else {
        SetColorOfMoby(moby,0,0xff,0);
        *(undefined1 *)(psVar3 + 4) = 0;
      }
    }
    uVar2 = moby->uid;
    iVar14 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    iVar13 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    uVar6 = *(uint *)(&g_CheckpointBits + iVar13);
    *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar14) =
         *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar14) | 1 << (uVar2 & 0x1f);
    *(uint *)(&g_CheckpointBits + iVar13) = uVar6 | 1 << (uVar2 & 0x1f);
  }
  return;
}


// 0x02005d4 (0x14 bytes)
void M1209_002005d4(void)

{
  DAT_00766600 = 0x10000;
  return;
}


// 0x0200608 (0x61c bytes)
// inlined: FastAtan2 @0x20070c, FastAtan2 @0x2008a8
void M1209_00200608(int param_1)

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
      uVar8 = *(uint *)(iVar7 + 0x24);
      fVar6 = ABS(*(float *)(iVar7 + 0x24));
      fVar3 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
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
      uVar8 = *(uint *)(iVar7 + 0x28);
      uVar9 = *(uint *)(iVar7 + 0x20);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x28));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x20));
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
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)puVar10 + 0xc4) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(puVar10 + 0x19) = *(undefined4 *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(puVar10 + 0x2a) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xcc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x154) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x2b) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x15c) = 0x80808080;
      uVar15 = GetEffectTex((ZERO_MASK((uVar20 & 1))) + 0x12);
      puVar10[0x31] = uVar15;
      uVar15 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      puVar10[0x32] = uVar15;
      uVar15 = FUN_00502f08(0,0,0,0,0,0);
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


