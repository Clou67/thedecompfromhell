// game/update/camera7.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 13 functions, 0x499fc-0x4b624
#include "game/update/camera7.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"

// 0x00499fc (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e7c0 = 0x10000;
  return;
}


// 0x0049a50 (0x548 bytes)
// inlined: FastRSqrt @0x49d54, FastAtan2 @0x49e3c
void InitCamera_7(UpdateCam *pCam)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  LevelId LVar19;
  MobyInstance *pMVar20;
  PlayerState PVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  float *pfVar29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar24 = uVar22 - 0x70;
  puVar13 = (ulonglong *)lVar24;
  *puVar13 = uVar22;
  pvVar9 = pCam->control;
  *(undefined4 *)((int)pvVar9 + 0x80) = 0;
  LVar19 = Level;
  puVar13[0xd] = unaff_r31;
  puVar13[0xc] = unaff_r30;
  if ((LVar19 == Oltanis) &&
     ((g_heroState == SWINGING_YELLOW_SWINGSHOT || (g_heroState == DISENGAGE_YELLOW_SWINGSHOT)))) {
    uVar1 = 0x40000000;
  }
  else {
    uVar1 = 0x3fc00000;
  }
  *(undefined4 *)((int)pvVar9 + 0x8c) = uVar1;
  pMVar20 = g_heroMobyPtr;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  *(undefined4 *)((int)pvVar9 + 0x88) = 0x3e567750;
  *(MobyInstance **)((int)pvVar9 + 0x84) = pMVar20;
  *(undefined4 *)((int)pvVar9 + 0x98) = 0x3ae4c388;
  pvVar10 = pCam->control;
  *(undefined4 *)((int)pvVar9 + 0x9c) = 0xbb8efa35;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  *(undefined4 *)((int)pvVar10 + 0xa0) = 0x40947ae1;
  *(undefined4 *)((int)pvVar10 + 0xa4) = 0x3f000000;
  *(undefined4 *)((int)pvVar10 + 0xb0) = 0x40000000;
  *(undefined4 *)((int)pvVar10 + 0xb4) = 0x3d4ccccd;
  puVar11 = (undefined4 *)pCam->control;
  puVar11[4] = 0x3c23d70a;
  puVar11[5] = 0x3e99999a;
  fVar2 = 0.0;
  puVar11[6] = 0;
  auVar31 = loadVectorLeftIndexed(0x10,0x49a10);
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
  auVar31 = vectorSplatHalfWord(auVar31,1);
  uVar12 = storeVectorElementHalfWordIndexed(auVar31,0x1e,ZEXT48(puVar11));
  *(undefined2 *)((int)puVar11 + 0x1e) = uVar12;
  *(undefined2 *)(puVar11 + 7) = 0;
  puVar11[3] = 0;
  puVar11[2] = 0;
  puVar11[1] = 0;
  *puVar11 = 0;
  pvVar10 = pCam->control;
  *(undefined4 *)((int)pvVar10 + 0x34) = 0x3ca3d70a;
  *(undefined4 *)((int)pvVar10 + 0x38) = 0x3e4ccccd;
  *(undefined4 *)((int)pvVar10 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar10 + 0x30) = 0;
  pvVar10 = pCam->control;
  *(undefined4 *)((int)pvVar10 + 0xbc) = 0;
  pvVar18 = GameCamera.pLastUpdCam;
  fVar3 = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[0] = fVar3;
  pCam->pos[1] = *(float *)((int)pvVar18 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar18 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar18 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  fVar4 = *pvVar18;
  pCam->mtx[0] = fVar4;
  fVar5 = *(float *)((int)pvVar18 + 4);
  pCam->mtx[1] = fVar5;
  fVar6 = *(float *)((int)pvVar18 + 8);
  pCam->mtx[2] = fVar6;
  fVar7 = *(float *)((int)pvVar18 + 0xc);
  pCam->mtx[3] = fVar7;
  pCam->mtx[4] = *(float *)((int)pvVar18 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar18 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar18 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar18 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar18 + 0x20);
  pCam->mtx[9] = *(float *)((int)pvVar18 + 0x24);
  pCam->mtx[10] = *(float *)((int)pvVar18 + 0x28);
  fVar8 = *(float *)((int)pvVar18 + 0x2c);
  (pCam->activation).deactivate = 0;
  pCam->mtx[0xb] = fVar8;
  pCam->rot[0] = fVar4;
  pCam->rot[1] = fVar5;
  pCam->rot[2] = fVar6;
  PVar21 = g_heroState;
  pCam->rot[3] = fVar7;
  fVar4 = DAT_0096a68c;
  iVar16 = DAT_0096a674;
  iVar23 = DAT_0096a644;
  if ((PVar21 == SWINGING_YELLOW_SWINGSHOT) || (PVar21 == DISENGAGE_YELLOW_SWINGSHOT)) {
    fVar2 = DAT_0096a68c + 1.5707963;
    fVar3 = 3.1415925 - DAT_0096a68c;
    if (DAT_0096a68c - (3.1415925 - DAT_0096a68c) < 0.0) {
      fVar3 = DAT_0096a68c;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = -3.1415925 - DAT_0096a68c;
    if ((-3.1415925 - DAT_0096a68c) - fVar3 < 0.0) {
      fVar6 = fVar3;
    }
    fVar3 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar3 = fVar5;
    }
    fVar2 = fVar6 * fVar6;
    *(undefined4 *)((int)pvVar9 + 0x78) = 0;
    fVar5 = fVar3 * fVar3;
    fVar14 = fVar2 * fVar2 * fVar6;
    fVar7 = fVar5 * fVar5 * fVar3;
    fVar15 = fVar2 * fVar14;
    fVar8 = fVar5 * fVar7;
    *(float *)((int)pvVar9 + 0x74) =
         fVar2 * fVar15 * 2.601887e-06 +
         fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6;
    *(float *)((int)pvVar9 + 0x70) =
         fVar5 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3;
    fVar2 = fVar4;
    iVar23 = iVar16;
  }
  else {
    fVar3 = *(float *)(DAT_0096a644 + 0x10) - fVar3;
    *(float *)((int)pvVar9 + 0x70) = fVar3;
    fVar7 = *(float *)(iVar23 + 0x14) - pCam->pos[1];
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0;
    fVar6 = fVar3 * fVar3 + fVar7 * fVar7;
    fVar4 = fVar2;
    fVar5 = fVar2;
    if (SQRT(fVar6) != 0.0) {
      fVar4 = 1.0 / SQRT(fVar6);
      fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar5 = fVar3 * fVar4;
      fVar4 = fVar7 * fVar4;
    }
    *(float *)((int)pvVar9 + 0x70) = fVar5;
    *(float *)((int)pvVar9 + 0x74) = fVar4;
    *(undefined4 *)((int)pvVar9 + 0x78) = 0;
    *(float *)(puVar13 + 6) = fVar5;
    *(float *)((int)puVar13 + 0x34) = fVar4;
    *(float *)(puVar13 + 7) = ABS(fVar5) - ABS(fVar4);
    uVar26 = (ulonglong)(*(uint *)(puVar13 + 6) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 7) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x34) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar13 + 6));
    if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
      fVar3 = ABS(fVar4);
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar4 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar13 + 0x34));
    if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
      fVar7 = ABS(fVar5);
    }
    if (0.0 < fVar3) {
      lVar28 = uVar22 - 0x60;
      lVar25 = uVar22 - 0x24;
      lVar27 = uVar22 - 0x34;
      lVar30 = 2;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar13 + 9) = fVar3;
      *(float *)(puVar13 + 8) = fVar3;
      *(float *)((int)puVar13 + 0x44) = fVar3;
      *(float *)((int)puVar13 + 0x3c) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar13 + 8) = *(float *)(puVar13 + 8) * fVar5;
      *(float *)((int)puVar13 + 0x44) = *(float *)((int)puVar13 + 0x44) * fVar3;
      *(float *)(puVar13 + 9) = *(float *)(puVar13 + 9) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar28 + 0x3c) = *(float *)((int)lVar28 + 0x2c) * fVar3 * fVar3;
        iVar16 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar28 = uVar22 - 0x34;
      lVar30 = 4;
      pfVar29 = (float *)&DAT_007358e0;
      lVar25 = lVar28;
      lVar27 = lVar24;
      do {
        fVar3 = *pfVar29;
        fVar5 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar27 + 0x3c) = *(float *)((int)lVar27 + 0x3c) * fVar3;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar25 = 2;
      do {
        iVar16 = (int)lVar24;
        iVar17 = (int)lVar28;
        lVar24 = lVar24 + 0x10;
        lVar28 = lVar28 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar16 + 0x3c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                + *(float *)(iVar17 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar4;
    }
  }
  *(float *)((int)pvVar10 + 0xb8) = fVar2;
  *(int *)((int)pvVar10 + 0xc0) = iVar23;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  GameCamera.blender.reqType = '\x02';
  GameCamera.blender.state = 1;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = loadVectorLeftIndexed(0x38,0x49a10);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  GameCamera.blender.reqInterpFrames =
       storeVectorElementWordIndexed
                 (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x2f4,0x9513c0);
  return;
}


// 0x0049ff0 (0xb84 bytes)
// inlined: FastRSqrt @0x4a2ec, FastAtan2 @0x4a4a8, FastAtan2 @0x4a9f4
// strings: 00049fbc: '>333Dz' (raw)

void Cam7_UpdatePos(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  MobyInstance *pMVar19;
  int iVar20;
  int iVar21;
  longlong lVar17;
  longlong lVar18;
  ushort *puVar23;
  float *pfVar24;
  longlong lVar22;
  MobyInstance *pMVar28;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar33;
  undefined8 uVar34;
  ulonglong in_f31;
  double dVar35;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x150;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar16;
  puVar9[0x2c] = in_LR;
  puVar9[0x21] = in_f23;
  puVar9[0x22] = in_f24;
  puVar9[0x23] = in_f25;
  puVar9[0x24] = in_f26;
  puVar9[0x25] = in_f27;
  puVar9[0x26] = in_f28;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x20] = unaff_r31;
  puVar9[0x1e] = unaff_r29;
  pMVar19 = DAT_0096a674;
  iVar8 = *(int *)(param_1 + 0x70);
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1c] = unaff_r27;
  puVar9[0x1b] = unaff_r26;
  if ((pMVar19 == (MobyInstance *)0x0) || (g_heroState != SWINGING_YELLOW_SWINGSHOT)) {
    fVar1 = 4.64;
    fVar3 = 2.0;
  }
  else {
    fVar1 = (pMVar19->pos).z - g_heroPosition.z;
    fVar4 = DAT_0096a680;
    if ((fVar1 <= DAT_0096a680) && (fVar4 = fVar1, fVar1 < 0.0)) {
      fVar4 = 0.0;
    }
    fVar3 = (fVar4 / DAT_0096a680) * 2.0;
    fVar1 = fVar4 / DAT_0096a680 + 3.65;
  }
  dVar35 = (double)fVar3;
  dVar33 = 8.0;
  Delt(fVar1,g_FrameTime * 8.0,
                 (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0xa0));
  Delt((float)dVar35,g_FrameTime * 4.0,
                 (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0xb0));
  if ((Level == Oltanis) && (g_heroState == SWINGING_YELLOW_SWINGSHOT)) {
    Delt((float)(dVar35 + 0.25),(float)((double)g_FrameTime * dVar33),
                   (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x8c));
  }
  else {
    Delt((float)(dVar35 - 0.5),(float)((double)g_FrameTime * dVar33),
                   (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x8c));
  }
  if (g_heroState == SWINGING_YELLOW_SWINGSHOT) {
    if (((Level == Umbris || Level == Oltanis) || (Level == Gaspar)) &&
       ((DAT_0096a674 == (MobyInstance *)0x0 || (DAT_0096a674->group != -1)))) {
      pMVar19 = (MobyInstance *)0x0;
      fVar1 = 1000.0;
      puVar23 = (ushort *)(&g_MobyGroups)[(byte)DAT_0096a674->group];
      if (puVar23 != (ushort *)0x0) {
        dVar33 = 0.0;
        do {
          pMVar28 = g_MobyInstance + (*puVar23 & 0x7fff);
          if ((pMVar28 != DAT_0096a674) &&
             ((pMVar28->oClass == SWINGSHOT_SWING || (pMVar28->oClass == SWINGSHOT_PULL)))) {
            fVar3 = (pMVar28->pos).y - (DAT_0096a674->pos).y;
            fVar4 = (pMVar28->pos).x - (DAT_0096a674->pos).x;
            fVar6 = (pMVar28->pos).z - (DAT_0096a674->pos).z;
            fVar6 = fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3;
            dVar35 = dVar33;
            dVar30 = dVar33;
            if (SQRT(fVar6) != 0.0) {
              fVar10 = 1.0 / SQRT(fVar6);
              fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
              fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
              fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
              dVar35 = (double)(fVar4 * fVar10);
              dVar30 = (double)(fVar3 * fVar10);
            }
            fVar3 = g_heroRotation.z + 1.5707963;
            fVar4 = 3.1415925 - g_heroRotation.z;
            if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
              fVar4 = g_heroRotation.z;
            }
            fVar10 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar10 = fVar3;
            }
            fVar11 = -3.1415925 - g_heroRotation.z;
            if ((-3.1415925 - g_heroRotation.z) - fVar4 < 0.0) {
              fVar11 = fVar4;
            }
            fVar4 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
              fVar4 = fVar10;
            }
            fVar3 = fVar11 * fVar11;
            fVar10 = fVar4 * fVar4;
            fVar14 = fVar3 * fVar3 * fVar11;
            fVar12 = fVar10 * fVar10 * fVar4;
            fVar15 = fVar3 * fVar14;
            fVar13 = fVar10 * fVar12;
            fVar3 = (float)((double)(fVar10 * fVar13 * 2.601887e-06 +
                                    fVar13 * -0.0001980741 +
                                    fVar12 * 0.0083330255 + fVar10 * fVar4 * -0.16666657 + fVar4) *
                            dVar35 + (double)(float)((double)(fVar3 * fVar15 * 2.601887e-06 +
                                                             fVar15 * -0.0001980741 +
                                                             fVar14 * 0.0083330255 +
                                                             fVar3 * fVar11 * -0.16666657 + fVar11)
                                                    * dVar30));
            if ((0.0 < fVar3) && (fVar3 = -(fVar3 * 10.0 - SQRT(fVar6)), fVar3 < fVar1)) {
              fVar1 = fVar3;
              pMVar19 = pMVar28;
            }
          }
          uVar7 = *puVar23;
          puVar23 = puVar23 + 1;
        } while (-1 < (short)uVar7);
        if (pMVar19 != (MobyInstance *)0x0) {
          fVar1 = (pMVar19->pos).x - (DAT_0096a674->pos).x;
          fVar3 = (pMVar19->pos).y - (DAT_0096a674->pos).y;
          fVar6 = ABS(fVar1);
          fVar4 = ABS(fVar3);
          *(float *)((int)puVar9 + 0x8c) = fVar1;
          *(float *)(puVar9 + 0x12) = fVar3;
          *(float *)((int)puVar9 + 0x94) = fVar6 - fVar4;
          uVar25 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
          uVar26 = uVar25 << 2 | 0x735900;
          fVar1 = ABS(*(float *)((int)puVar9 + 0x8c));
          if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
            fVar1 = fVar4;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
          fVar4 = ABS(*(float *)(puVar9 + 0x12));
          if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
            fVar4 = fVar6;
          }
          fVar6 = *(float *)((int)uVar26 + 4);
          if (0.0 < fVar1) {
            lVar17 = uVar16 - 0x140;
            lVar22 = uVar16 - 0x98;
            lVar27 = uVar16 - 0x88;
            lVar29 = 2;
            fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
            fVar4 = fVar1 * fVar1;
            *(float *)((int)puVar9 + 0xc4) = fVar1;
            *(float *)((int)puVar9 + 0xbc) = fVar1;
            *(float *)(puVar9 + 0x18) = fVar1;
            *(float *)(puVar9 + 0x17) = fVar1;
            fVar1 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
            *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar1;
            *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar1 * fVar4;
            do {
              *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar1 * fVar1;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar16 - 0x98;
            uVar26 = ZEXT48(&DAT_007358e0);
            lVar17 = lVar18;
            lVar22 = lVar27;
            do {
              pfVar24 = (float *)uVar26;
              fVar1 = pfVar24[1];
              uVar26 = uVar26 + 8;
              *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xb8) * *pfVar24;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
              lVar22 = lVar22 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar21 = (int)lVar27;
              lVar27 = lVar27 + 0x10;
              dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0xb8)) +
                                *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                               *(float *)(iVar21 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar6);
          }
          dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),dVar33,
                                            0x3f547ae140000000,0x3fc6666660000000,0,&DAT_00049f98,
                                            uVar26,iVar8 + 0xbc);
          *(float *)(iVar8 + 0xb8) = (float)dVar33;
          goto LAB_0004a6c0;
        }
      }
      if (*(int *)(iVar8 + 0x80) == 1) {
        dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),
                                          (double)*(float *)(*(int *)(iVar8 + 0x84) + 0x48),
                                          0x3f547ae140000000,0x3fc6666660000000,0,&DAT_00049f98,
                                          *(int *)(iVar8 + 0x84),iVar8 + 0xbc);
      }
      else {
        dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),(double)g_heroRotation.z,
                                          0x3f547ae140000000,0x3fc6666660000000,0,&DAT_00049f98,
                                          puVar23,iVar8 + 0xbc);
      }
      *(float *)(iVar8 + 0xb8) = (float)dVar33;
    }
    else {
      dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),(double)g_heroRotation.z,
                                        0x3f547ae140000000,0x3fc6666660000000,0);
      *(float *)(iVar8 + 0xb8) = (float)dVar33;
    }
  }
  else if (g_heroState == PULLING_GREEN_SWINGSHOT) {
    if (*(int *)(iVar8 + 0x80) == 1) {
      dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),
                                        (double)*(float *)(*(int *)(iVar8 + 0x84) + 0x48),
                                        (double)DAT_0071e7e4,0x3fc6666660000000,0,&DAT_00049f98,
                                        &DAT_00720000,iVar8 + 0xbc);
    }
    else {
      dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),(double)g_heroRotation.z,
                                        (double)DAT_0071e7e4,0x3fc6666660000000,0,&DAT_00049f98,
                                        &DAT_00720000,iVar8 + 0xbc);
    }
    *(float *)(iVar8 + 0xb8) = (float)dVar33;
  }
LAB_0004a6c0:
  fVar1 = *(float *)(iVar8 + 0xb8);
  fVar3 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar6 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar6 = fVar3;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
    fVar1 = fVar6;
  }
  fVar3 = fVar10 * fVar10;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar3 * fVar3 * fVar10;
  fVar6 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar3 * fVar12;
  fVar11 = fVar4 * fVar6;
  fVar10 = fVar3 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
  fVar3 = fVar4 * fVar11 * 2.601887e-06 +
          fVar11 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1;
  *(float *)(iVar8 + 0x70) = fVar3;
  *(float *)(iVar8 + 0x74) = fVar10;
  dVar33 = 0.0;
  fVar1 = SQRT(fVar3 * fVar3 + fVar10 * fVar10);
  *(undefined4 *)(iVar8 + 0x7c) = 0;
  *(undefined4 *)(iVar8 + 0x78) = 0;
  if (fVar1 == 0.0) {
    *(float *)(puVar9 + 0xe) = fVar3;
    *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)(iVar8 + 0x74);
    *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(iVar8 + 0x78);
    uVar2 = *(undefined4 *)(iVar8 + 0x7c);
    *(undefined4 *)(puVar9 + 0xf) = 0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    *(undefined4 *)(puVar9 + 0xe) = 0;
    dVar35 = dVar33;
    dVar30 = dVar33;
    dVar31 = dVar33;
  }
  else {
    fVar1 = -*(float *)(iVar8 + 0xa0) / fVar1;
    dVar30 = (double)(fVar3 * fVar1);
    *(float *)(puVar9 + 0xe) = fVar3 * fVar1;
    fVar3 = *(float *)(iVar8 + 0x74) * fVar1;
    dVar31 = (double)fVar3;
    *(float *)((int)puVar9 + 0x74) = fVar3;
    fVar1 = *(float *)(iVar8 + 0x78) * fVar1;
    dVar35 = (double)fVar1;
    *(float *)(puVar9 + 0xf) = fVar1;
    uVar2 = *(undefined4 *)(iVar8 + 0x7c);
  }
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar2;
  fVar1 = (float)(dVar35 + (double)*(float *)(iVar8 + 0xb0));
  dVar35 = (double)g_heroPosition.x;
  dVar32 = (double)g_heroPosition.y;
  fVar3 = fVar1 + g_heroPosition.z;
  *(float *)(puVar9 + 0xf) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar30 + dVar35);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar31 + dVar32);
  *(float *)(puVar9 + 0xf) = fVar3;
  iVar20 = CollLine(param_1 + 0x30,uVar16 - 0xe0,0x12,0,0);
  if (iVar20 == 0) {
    uVar2 = *(undefined4 *)((int)puVar9 + 0x74);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar9 + 0xe);
    uVar5 = *(undefined4 *)(puVar9 + 0xf);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    uVar2 = *(undefined4 *)((int)puVar9 + 0x7c);
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x34);
    fVar6 = g_CollOutput.ip.y - fVar1;
    fVar3 = *(float *)(param_1 + 0x30);
    fVar11 = g_CollOutput.ip.x - fVar3;
    fVar4 = *(float *)(param_1 + 0x38);
    fVar10 = g_CollOutput.ip.z - fVar4;
    fVar12 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar6 * fVar6);
    if (0.5 < fVar12) {
      iVar20 = 0;
      fVar12 = (fVar12 - 0.5) / fVar12;
      *(undefined4 *)((int)puVar9 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
      *(float *)(puVar9 + 0xe) = fVar11 * fVar12 + fVar3;
      *(float *)((int)puVar9 + 0x74) = fVar6 * fVar12 + fVar1;
      *(float *)(puVar9 + 0xf) = fVar10 * fVar12 + fVar4;
      uVar34 = 0x3fe8000000000000;
      do {
        iVar21 = CollSphere(uVar34,uVar16 - 0xe0);
        fVar1 = g_CollOutput.push.y;
        if (iVar21 == 0) break;
        iVar20 = iVar20 + 1;
        *(float *)(puVar9 + 0xe) = g_CollOutput.push.x;
        fVar3 = g_CollOutput.push.z;
        *(float *)((int)puVar9 + 0x74) = fVar1;
        fVar1 = g_CollOutput.push.w;
        *(float *)(puVar9 + 0xf) = fVar3;
        *(float *)((int)puVar9 + 0x7c) = fVar1;
      } while (iVar20 < 5);
    }
    fVar1 = *(float *)(puVar9 + 0xe);
    fVar3 = *(float *)((int)puVar9 + 0x74);
    *(float *)(param_1 + 0x30) = fVar1;
    uVar2 = *(undefined4 *)(puVar9 + 0xf);
    *(float *)(param_1 + 0x34) = fVar3;
    uVar5 = *(undefined4 *)((int)puVar9 + 0x7c);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    fVar1 = g_heroPosition.x - fVar1;
    fVar3 = g_heroPosition.y - fVar3;
    dVar30 = ABS((double)fVar1);
    dVar31 = ABS((double)fVar3);
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = fVar3;
    *(float *)(puVar9 + 0x11) = (float)(dVar30 - dVar31);
    uVar26 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
    dVar35 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)(puVar9 + 0x11) - dVar33 < 0.0) {
      dVar35 = dVar31;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar9 + 0x84));
    if ((double)*(float *)(puVar9 + 0x11) - dVar33 < 0.0) {
      dVar31 = dVar30;
    }
    fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (dVar33 < dVar35) {
      lVar17 = uVar16 - 0x140;
      lVar27 = uVar16 - 0xa8;
      lVar22 = uVar16 - 0xb8;
      lVar29 = 2;
      fVar4 = (float)(dVar31 - dVar35) / (float)(dVar31 + dVar35);
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xa4) = fVar4;
      *(float *)((int)puVar9 + 0x9c) = fVar4;
      *(float *)(puVar9 + 0x14) = fVar4;
      *(float *)(puVar9 + 0x13) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar6;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x88) * fVar4 * fVar4;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar27 = uVar16 - 0xb8;
      pfVar24 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar22 = lVar27;
      do {
        fVar4 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar17 = 2;
      do {
        iVar20 = (int)lVar18;
        iVar21 = (int)lVar27;
        lVar18 = lVar18 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0x98)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar1 + fVar3);
    }
    *(float *)(iVar8 + 0xb8) = (float)dVar33;
    *(undefined4 *)(iVar8 + 0xbc) = 0;
  }
  return;
}


// 0x004ab98 (0x3e8 bytes)
// inlined: FastRSqrt @0x4ac40, FastRSqrt @0x4ae08, FastRSqrt @0x4aed4
// strings: 0004ab90: '>333`'

void Cam7_UpdateRot(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  fVar5 = param_1[0x1c];
  fVar1 = g_heroPosition.y - param_1[0xd];
  fVar3 = g_heroPosition.x - param_1[0xc];
  fVar4 = (g_heroPosition.z + *(float *)((int)fVar5 + 0x8c)) - param_1[0xe];
  dVar9 = 0.0;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  dVar11 = dVar9;
  dVar12 = dVar9;
  dVar13 = dVar9;
  if (SQRT(fVar2) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar2);
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar13 = (double)(fVar3 * fVar6);
    dVar12 = (double)(fVar1 * fVar6);
    dVar11 = (double)(fVar4 * fVar6);
  }
  dVar8 = 1.0;
  fVar1 = (float)(dVar11 * (double)param_1[2] +
                 (double)(float)(dVar13 * (double)*param_1 +
                                (double)(float)(dVar12 * (double)param_1[1])));
  fVar3 = fVar1;
  if (fVar1 - 0.0 < 0.0) {
    fVar3 = ABS(fVar1);
  }
  dVar11 = (double)(1.0 - fVar3);
  if ((double)(1.0 - fVar3) - 0.0 < 0.0) {
    dVar11 = dVar9;
  }
  dVar12 = dVar8;
  if (fVar1 - 0.0 < 0.0) {
    dVar12 = -1.0;
  }
  dVar11 = -(double)(float)(-(double)((fVar3 * fVar3 * fVar3 * DAT_007358cc +
                                      fVar3 * fVar3 * DAT_007358c8 +
                                      fVar3 * DAT_007358c4 + DAT_007358c0) * (float)SQRT(dVar11) -
                                     1.5707964) * dVar12 - 1.5707963705062866);
  if (g_heroState == PULLING_GREEN_SWINGSHOT) {
    fVar1 = *(float *)((int)fVar5 + 0x30) + 0.017;
    dVar12 = (double)fVar1;
    *(float *)((int)fVar5 + 0x30) = fVar1;
    if (1.0 < dVar12) {
      *(undefined4 *)((int)fVar5 + 0x30) = 0x3f800000;
      dVar12 = dVar8;
    }
    dVar11 = (double)(float)(dVar11 * dVar12);
  }
  else {
    dVar11 = (double)Cam_InterpAngles(0,dVar11,0x3f947ae140000000,0x3fc6666660000000,0,
                                      (int)fVar5 + 0x30,&DAT_0004ab74,(int)fVar5 + 0x30);
  }
  MB_RotateQuatAxisAngle((float)dVar11,param_1,param_1 + 0x10);
  fVar5 = param_1[1];
  fVar1 = *param_1;
  fVar3 = param_1[2];
  dVar11 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  if ((double)(float)SQRT(dVar11) == dVar9) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar4 = param_1[3];
    param_1[0x12] = param_1[2];
    dVar11 = dVar9;
    dVar12 = dVar9;
    dVar13 = dVar9;
  }
  else {
    dVar12 = 1.0 / SQRT(dVar11);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar12) * dVar12 - dVar8) *
                             (double)(float)(dVar12 * 0.5) + dVar12);
    fVar4 = param_1[3];
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar12) * dVar12 - dVar8) *
                             (double)(float)(dVar12 * 0.5) + dVar12);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar11 * dVar12) * dVar12 - dVar8) *
                    (double)(float)(dVar12 * 0.5) + dVar12);
    dVar13 = (double)(fVar1 * fVar2);
    dVar12 = (double)(fVar5 * fVar2);
    dVar11 = (double)(fVar3 * fVar2);
  }
  param_1[0x10] = (float)dVar13;
  param_1[0x11] = (float)dVar12;
  param_1[0x12] = (float)dVar11;
  param_1[0x13] = fVar4;
  *param_1 = (float)dVar13;
  param_1[1] = (float)dVar12;
  param_1[2] = (float)dVar11;
  param_1[3] = fVar4;
  fVar5 = (float)((double)(float)GameCamera.field17_0x1b4.piece<4,4>() * dVar13 -
                 (double)(float)((double)GameCamera.field16_0x1b0 * dVar11));
  fVar1 = (float)((double)(float)GameCamera.field17_0x1b4.piece<0,4>() * dVar11 -
                 (double)(float)((double)(float)GameCamera.field17_0x1b4.piece<4,4>() * dVar12));
  fVar3 = (float)((double)GameCamera.field16_0x1b0 * dVar12 -
                 (double)(float)((double)(float)GameCamera.field17_0x1b4.piece<0,4>() * dVar13));
  param_1[7] = 0.0;
  dVar14 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  dVar7 = dVar9;
  dVar10 = dVar9;
  if ((double)(float)SQRT(dVar14) != dVar9) {
    dVar9 = 1.0 / SQRT(dVar14);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar9) * dVar9 - dVar8) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar9) * dVar9 - dVar8) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar14 * dVar9) * dVar9 - dVar8) *
                    (double)(float)(dVar9 * 0.5) + dVar9);
    dVar7 = (double)(fVar1 * fVar2);
    dVar9 = (double)(fVar5 * fVar2);
    dVar10 = (double)(fVar3 * fVar2);
  }
  param_1[4] = (float)dVar7;
  param_1[5] = (float)dVar9;
  param_1[6] = (float)dVar10;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar12 * dVar10 - (double)(float)(dVar11 * dVar9));
  param_1[9] = (float)(dVar11 * dVar7 - (double)(float)(dVar13 * dVar10));
  param_1[10] = (float)(dVar13 * dVar9 - (double)(float)(dVar12 * dVar7));
  return;
}


// 0x004af80 (0x34 bytes)
void UpdateCamera_7(undefined8 param_1)

{
  Cam7_UpdatePos();
  Cam7_UpdateRot(param_1);
  return;
}


// 0x004afb4 (0x34 bytes)
void CamZoomOfs_Reset(void)

{
  GameCamera.orientMtx.position.y = 0.0;
  GameCamera.orientMtx.position.x = 0.0;
  GameCamera.orientMtx.position.z = 10000.0;
  GameCamera.orientMtx.position.w = 0.0;
  GameCamera.field22_0x390 = (char  [4])&PTR_CamZoomOfs_Update_00704158;
  return;
}


// 0x004aff0 (0x64 bytes)
void CamZoomOfs_Update(void)

{
  if (GameCamera.orientMtx.position.w != 0.0) {
    Cam0_SetCamOfsZ
              ((double)(GameCamera.orientMtx.position.w * 0.35),0x3f747ae140000000,&DAT_0004afe8,1);
    Camera_AddPostUpdFunc(&PTR_CamZoomOfs_PostUpd_00704160);
  }
  return;
}


// 0x004b058 (0x64 bytes)
void CamZoomOfs_PostUpd(void)

{
  GameCamera.orientMtx.position.z = 10000.0;
  if (GameCamera.orientMtx.position.y == 0.0) {
    GameCamera.orientMtx.position.w = GameCamera.orientMtx.position.w - DAT_0071e7e8;
    if (GameCamera.orientMtx.position.w < 0.0) {
      GameCamera.orientMtx.position.w = 0.0;
    }
  }
  else {
    GameCamera.orientMtx.position.y = 0.0;
  }
  GameCamera.orientMtx.position.x = 0.0;
  return;
}


// 0x004b0e0 (0x264 bytes)
void ____Cam_NudgeTowardMoby(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) &&
     ((uint)ABS(g_Pad.sticks.y) < 0x3d4cccce)) {
    fVar1 = *(float *)((int)param_1 + 0x14) - g_heroPosition.y;
    fVar2 = *(float *)((int)param_1 + 0x10) - g_heroPosition.x;
    fVar3 = *(float *)((int)param_1 + 0x18) - g_heroPosition.z;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar4 < 22.0) {
      if (((0.0 < fVar4) && (fVar4 < GameCamera.orientMtx.position.z)) && (0.0 < fVar3)) {
                    /* WARNING: Load size is inaccurate */
        fVar4 = (*(float *)((int)GameCamera.pCurrentUpdCam + 8) * fVar3 +
                *GameCamera.pCurrentUpdCam * fVar2 +
                *(float *)((int)GameCamera.pCurrentUpdCam + 4) * fVar1) / fVar4;
        fVar1 = fVar4;
        if (fVar4 - 0.0 < 0.0) {
          fVar1 = ABS(fVar4);
        }
        fVar2 = 1.0;
        if (fVar4 - 0.0 < 0.0) {
          fVar2 = -1.0;
        }
        fVar3 = 1.0 - fVar1;
        if ((1.0 - fVar1) - 0.0 < 0.0) {
          fVar3 = 0.0;
        }
        if (-(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar3) -
               1.5707964) * fVar2 - 1.5707964) < 1.1170107) {
          fVar1 = *(float *)((int)param_1 + 0x14) -
                  *(float *)((int)GameCamera.pCurrentUpdCam + 0x34);
          fVar2 = *(float *)((int)param_1 + 0x10) -
                  *(float *)((int)GameCamera.pCurrentUpdCam + 0x30);
          fVar3 = *(float *)((int)param_1 + 0x18) -
                  *(float *)((int)GameCamera.pCurrentUpdCam + 0x38);
          fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          fVar4 = 0.0001;
          if (0.0 - fVar5 < 0.0) {
            fVar4 = fVar5;
          }
          if (fVar5 - 0.0 < 0.0) {
            fVar4 = fVar5;
          }
          fVar2 = (*(float *)((int)GameCamera.pCurrentUpdCam + 8) * fVar3 +
                  *GameCamera.pCurrentUpdCam * fVar2 +
                  *(float *)((int)GameCamera.pCurrentUpdCam + 4) * fVar1) / fVar4;
          fVar1 = fVar2;
          if (fVar2 - 0.0 < 0.0) {
            fVar1 = ABS(fVar2);
          }
          fVar3 = 1.0;
          if (fVar2 - 0.0 < 0.0) {
            fVar3 = -1.0;
          }
          fVar2 = 1.0 - fVar1;
          if ((1.0 - fVar1) - 0.0 < 0.0) {
            fVar2 = 0.0;
          }
          if (-(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                  fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar2)
                 - 1.5707964) * fVar3 - 1.5707964) < 0.62831855) {
            GameCamera.orientMtx.position.x = (float)GameCamera.pCurrentUpdCam;
            GameCamera.orientMtx.position.w = GameCamera.orientMtx.position.w + DAT_0071e7e8;
            GameCamera.orientMtx.position.y = param_1;
            GameCamera.orientMtx.position.z = fVar4;
            if (1.0 < GameCamera.orientMtx.position.w) {
              GameCamera.orientMtx.position.w = 1.0;
            }
          }
        }
      }
    }
  }
  return;
}


// 0x004b344 (0x8 bytes)
int ActivateCamera_7(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}


// 0x004b358 (0x24c bytes)
void UpdateCamera_7(UpdateCam *pCam)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 in_LR;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  pvVar1 = GameCamera.pLastUpdCam;
  lVar2 = (longlong)(int)pCam;
  if (g_heroState == SWINGING_YELLOW_SWINGSHOT) {
    if (*(int *)((int)pCam->control + 0xc0) != DAT_0096a674) {
      *(float *)((int)GameCamera.pLastUpdCam + 0x30) = pCam->pos[0];
      *(float *)((int)pvVar1 + 0x34) = pCam->pos[1];
      *(float *)((int)pvVar1 + 0x38) = pCam->pos[2];
      *(float *)((int)pvVar1 + 0x3c) = pCam->pos[3];
      *(float *)pvVar1 = pCam->mtx[0];
      *(float *)((int)pvVar1 + 4) = pCam->mtx[1];
      *(float *)((int)pvVar1 + 8) = pCam->mtx[2];
      *(float *)((int)pvVar1 + 0xc) = pCam->mtx[3];
      *(float *)((int)pvVar1 + 0x10) = pCam->mtx[4];
      *(float *)((int)pvVar1 + 0x14) = pCam->mtx[5];
      *(float *)((int)pvVar1 + 0x18) = pCam->mtx[6];
      *(float *)((int)pvVar1 + 0x1c) = pCam->mtx[7];
      *(float *)((int)pvVar1 + 0x20) = pCam->mtx[8];
      *(float *)((int)pvVar1 + 0x24) = pCam->mtx[9];
      *(float *)((int)pvVar1 + 0x28) = pCam->mtx[10];
      *(float *)((int)pvVar1 + 0x2c) = pCam->mtx[0xb];
      InitCamera_7(pCam);
      auVar3 = ZEXT416(0xffffffff);
      auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
      auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
      auVar3 = loadVectorLeftIndexed(in_LR,0x4b34c);
      auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar3 = vectorMultiplyAddFloatingPoint
                         (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
      auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
      auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.blender.reqInterpFrames =
           storeVectorElementWordIndexed
                     (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x2f4,0x9513c0);
    }
  }
  else if ((((g_heroState == THROWING_GREEN_SWINGSHOT) || (g_heroState == PULLING_GREEN_SWINGSHOT))
           || (g_heroState == UNK_26)) && (*(int *)((int)pCam->control + 0xc0) != DAT_0096a644)) {
    *(float *)((int)GameCamera.pLastUpdCam + 0x30) = pCam->pos[0];
    *(float *)((int)pvVar1 + 0x34) = pCam->pos[1];
    *(float *)((int)pvVar1 + 0x38) = pCam->pos[2];
    *(float *)((int)pvVar1 + 0x3c) = pCam->pos[3];
    *(float *)pvVar1 = pCam->mtx[0];
    *(float *)((int)pvVar1 + 4) = pCam->mtx[1];
    *(float *)((int)pvVar1 + 8) = pCam->mtx[2];
    *(float *)((int)pvVar1 + 0xc) = pCam->mtx[3];
    *(float *)((int)pvVar1 + 0x10) = pCam->mtx[4];
    *(float *)((int)pvVar1 + 0x14) = pCam->mtx[5];
    *(float *)((int)pvVar1 + 0x18) = pCam->mtx[6];
    *(float *)((int)pvVar1 + 0x1c) = pCam->mtx[7];
    *(float *)((int)pvVar1 + 0x20) = pCam->mtx[8];
    *(float *)((int)pvVar1 + 0x24) = pCam->mtx[9];
    *(float *)((int)pvVar1 + 0x28) = pCam->mtx[10];
    *(float *)((int)pvVar1 + 0x2c) = pCam->mtx[0xb];
    InitCamera_7(pCam);
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(in_LR,0x4b34c);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.blender.reqInterpFrames =
         storeVectorElementWordIndexed
                   (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x2f4,0x9513c0);
  }
  Cam7_UpdatePos(lVar2);
  Cam7_UpdateRot(lVar2);
  Camera_CollSphereBump(0x3fe0000000000000,lVar2 + 0x30);
  *(undefined4 *)((int)pCam->control + 0x80) = 0;
  return;
}


// 0x004b5a4 (0x3c bytes)
void ExitCamera_7(UpdateCam *pCam)

{
  if ((g_HeroRequestedCamType != pCam->type) && (g_heroState != NEUTRAL_JUMP)) {
    (pCam->activation).deactivate = 3;
    (pCam->activation).activate = '\0';
  }
  return;
}


// 0x004b5e0 (0x44 bytes)
void Cam7_SetTargetMoby(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 7) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined4 *)(iVar1 + 0x84) = param_1;
    iVar2 = *(int *)((int)pvVar3 + 0x70);
    *(undefined4 *)(iVar1 + 0x80) = 1;
    *(undefined4 *)(iVar1 + 0x8c) = 0x40000000;
    *(undefined4 *)(iVar2 + 0xa0) = 0x40e00000;
    *(undefined4 *)(iVar2 + 0xb0) = 0x40000000;
  }
  return;
}


