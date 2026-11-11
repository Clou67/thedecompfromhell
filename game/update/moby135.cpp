// game/update/moby135.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x254ea0-0x255240
#include "game/update/moby135.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0254ea0 (0x3a0 bytes)
/* Moby 135 */

void UpdateMoby_135(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  void *pvVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 in_LR;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  
  lVar12 = (longlong)(int)moby;
  piVar8 = (int *)moby->pVar;
  uVar15 = ZEXT48(piVar8);
  bVar1 = moby->state;
  pSVar10 = Splines[piVar8[1]];
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        if ((piVar8[1] == -1) || (pSVar10->cnt == 0)) {
          DeleteMoby(moby);
          return;
        }
        if (*piVar8 == -1) {
          DeleteMoby(moby);
          return;
        }
        moby->state = '\x01';
        iVar13 = MB_randInt(2);
        fVar2 = pSVar10->points[0].x;
        fVar3 = pSVar10->points[1].x;
        fVar4 = pSVar10->points[0].y;
        fVar5 = pSVar10->points[1].y;
        fVar6 = pSVar10->points[0].z;
        fVar7 = pSVar10->points[1].z;
        if (iVar13 != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        fVar4 = fVar4 - fVar5;
        fVar6 = fVar6 - fVar7;
        fVar2 = fVar2 - fVar3;
        pvVar9 = moby->pVar;
        piVar8[3] = (int)((DAT_0079ba20 * g_FrameTime) /
                         SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar4 * fVar4));
        iVar13 = *(int *)((int)pvVar9 + 4);
        dVar16 = (double)(moby->rotation).x;
        MB_PathEvalSpline
                  ((double)*(float *)((int)pvVar9 + 8),Splines[iVar13],iVar13,0,lVar12 + 0x10,
                   lVar12 + 0x40,0);
        (moby->rotation).x = (float)dVar16;
        (moby->pos).z = (moby->pos).z - 0.4;
        (moby->rotation).x = DAT_0079ba24 * 0.017453292;
      }
      DeltAng(DAT_0079ba24 * 0.017453292,g_FrameTime * 12.566371,
                        &(moby->rotation).x,0x254e90,0x720000,0);
      iVar13 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar8);
      if (iVar13 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    auVar17 = loadVectorLeftIndexed(8,uVar15);
    auVar18 = loadVectorLeftIndexed(0xc,uVar15);
    auVar19 = loadVectorRightIndexed(0x18,uVar15);
    auVar21 = loadVectorRightIndexed(0x1c,uVar15);
    auVar20 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar10));
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar18 = vectorAddFloatingPoint(auVar17 | auVar19,auVar18 | auVar21);
    pvVar9 = moby->pVar;
    auVar17 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    uVar11 = storeVectorElementWordIndexed(auVar18,8,uVar15);
    *(undefined4 *)((uint)(piVar8 + 2) & 0xfffffffc) = uVar11;
    dVar16 = (double)(moby->rotation).x;
    if (bVar1 != 0) {
      moby->state = '\x03';
    }
    MB_PathEvalSpline
              ((double)*(float *)((int)pvVar9 + 8),Splines[*(int *)((int)pvVar9 + 4)],0xc,0,
               lVar12 + 0x10,lVar12 + 0x40,0);
    (moby->rotation).x = (float)dVar16;
    (moby->pos).z = (moby->pos).z - 0.4;
    DeltAng(0.0,g_FrameTime * 12.566371,&(moby->rotation).x,0x254e90,0x720000,0)
    ;
  }
  else if (bVar1 < 4) {
    fVar2 = (float)piVar8[2];
    piVar8[2] = (int)(fVar2 - (float)piVar8[3]);
    if (fVar2 - (float)piVar8[3] < 0.0) {
      moby->state = '\x01';
      piVar8[2] = 0;
    }
    dVar16 = (double)(moby->rotation).x;
    lVar14 = ((ulonglong)*(uint *)((int)moby->pVar + 4) & 0x3fffffff) << 2;
    MB_PathEvalSpline
              ((double)*(float *)((int)moby->pVar + 8),*(undefined4 *)((int)Splines + (int)lVar14),
               lVar14,0,lVar12 + 0x10,lVar12 + 0x40,0);
    (moby->rotation).x = (float)dVar16;
    (moby->pos).z = (moby->pos).z - 0.4;
    DeltAng(DAT_0079ba24 * 0.017453292,g_FrameTime * 12.566371,
                      &(moby->rotation).x,0x254e90,0x7a0000,0);
  }
  return;
}


