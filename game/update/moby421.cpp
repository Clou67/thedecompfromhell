// game/update/moby421.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x367f3c-0x36887c
#include "game/update/moby421.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0367f3c (0x14 bytes)
void M421_00367f3c(void)

{
  DAT_00840f4c = 0x10000;
  return;
}


// 0x0367f78 (0x904 bytes)
/* Moby 421 */

void UpdateMoby_421(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 in_r7;
  byte bVar11;
  undefined8 in_LR;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auStack_160;
  GPiece<16> auStack_150;
  GPiece<16> auStack_140;
  GPiece<16> auStack_130;
  GPiece<16> auStack_120;
  GPiece<16> auStack_110;
  GPiece<16> local_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  GPiece<16> auStack_c0;
  GPiece<16> auStack_b0;
  GPiece<16> auStack_a0;
  GPiece<32> local_90;
  
  lVar9 = (longlong)(int)moby;
  bVar3 = moby->state;
  piVar4 = (int *)moby->pVar;
  bVar11 = (bVar3 == 1) << 1;
  if (bVar3 == 0) {
    if (*piVar4 == 1) {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar9,1,0,0);
      }
      moby->state = '\x01';
      (moby->pos).z = (moby->pos).z + 1.0;
    }
    else {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar9,1,0,0);
      }
      moby->state = '\x02';
      (moby->pos).z = (moby->pos).z + 0.5;
    }
  }
  else if (bVar3 < 2) {
    GetBonePosition(lVar9,0,auStack_160);
    GetBonePosition(lVar9,1,auStack_150);
    GetBonePosition(lVar9,2,auStack_140);
    GetBonePosition(lVar9,3,auStack_130);
    GetBonePosition(lVar9,4,auStack_120);
    GetBonePosition(lVar9,5,auStack_110);
    dVar14 = 10.5;
    uVar13 = 0x40cd4c0000000000;
    dVar12 = 20.5;
    uVar10 = MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
    SpawnPart_21(uVar13,auStack_160,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    SpawnPart_21(uVar13,auStack_150,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    SpawnPart_21(uVar13,auStack_140,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    SpawnPart_21(uVar13,auStack_130,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar13 = 0x40c3880000000000;
    iVar1 = (int)((double)animationSpeed * dVar14);
    iVar2 = (int)((double)animationSpeed * dVar12);
    uVar10 = MB_randRange(iVar2,iVar1,0x40c3880000000000,iVar1,iVar2);
    SpawnPart_21(uVar13,auStack_120,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    SpawnPart_21(uVar13,auStack_110,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    dVar12 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 0.5235988);
    (moby->rotation).z = (float)dVar12;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar7 = g_heroPosition.z - (moby->pos).z;
    if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 2.0) {
      DeleteMoby(moby);
    }
  }
  else if (bVar3 < 3) {
    auVar15 = ZEXT416(0xfffffff0);
    auVar16 = loadVectorLeftIndexed(0x32,lVar9);
    auVar15 = vectorShiftRightAlgebraicWord
                        (auVar16,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar15,0);
    auVar15 = loadVectorLeftIndexed(in_LR,0x367f50);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
               auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
    if (bVar3 != 1) {
      GetBonePosition(lVar9,0,auStack_f0);
      GetBonePosition(lVar9,1,auStack_e0);
      GetBonePosition(lVar9,2,auStack_d0);
      GetBonePosition(lVar9,3,auStack_c0);
      GetBonePosition(lVar9,4,auStack_b0);
      GetBonePosition(lVar9,5,auStack_a0);
      dVar14 = 10.5;
      uVar13 = 0x40cd4c0000000000;
      dVar12 = 20.5;
      uVar10 = MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
      SpawnPart_21(uVar13,auStack_f0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      SpawnPart_21(uVar13,auStack_e0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      SpawnPart_21(uVar13,auStack_d0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      SpawnPart_21(uVar13,auStack_c0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar13 = 0x40c3880000000000;
      iVar1 = (int)((double)animationSpeed * dVar14);
      iVar2 = (int)((double)animationSpeed * dVar12);
      uVar10 = MB_randRange(iVar2,iVar1,0x40c3880000000000,iVar1,iVar2);
      SpawnPart_21(uVar13,auStack_b0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      SpawnPart_21(uVar13,auStack_a0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      auVar16 = loadVectorLeftIndexed(0x32,lVar9);
    }
    pMVar8 = g_MobyInstance;
    iVar1 = piVar4[1];
    auVar15 = ZEXT416(0xfffffff0);
    auVar15 = vectorShiftRightWord
                        (auVar16,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    if (g_MobyInstance[iVar1].state == '\0') {
      moby->drawDistance = 0x40;
    }
    else {
      fVar5 = g_MobyInstance[iVar1].pos.y - (moby->pos).y;
      fVar6 = g_MobyInstance[iVar1].pos.x - (moby->pos).x;
      fVar7 = g_MobyInstance[iVar1].pos.z - (moby->pos).z;
      if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 0.6) {
        auVar17 = ZEXT416(0xfffffff0);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord
                            (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar17);
        auVar17 = vectorShiftRightAlgebraicWord(auVar15,auVar17);
        auVar15 = ZEXT416(0);
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareEqualToFloatingPoint
                  (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                   auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        if ((bool)(bVar11 >> 1 & 1)) {
          iVar1 = piVar4[1];
          moby->drawDistance = 0;
          *(int *)((int)pMVar8[iVar1].pVar + 0x18) = *(int *)((int)pMVar8[iVar1].pVar + 0x18) + 1;
        }
      }
    }
  }
  return;
}


