// game/update/moby922.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4b56cc-0x4b62f8
#include "game/update/moby922.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04b56cc (0x14 bytes)
void M922_004b56cc(void)

{
  DAT_008f45a4 = 0x10000;
  return;
}


// 0x04b5710 (0x49c bytes)
// strings: 004b56e8: '?fffHCP' (raw)

void M922_004b5710(void)

{
  float fVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar7;
  int iVar6;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<48> local_d0;
  
  iVar5 = 0;
  iVar6 = 0;
  uVar9 = 0x3fc99999a0000000;
  uVar14 = 0x3ff0000000000000;
  uVar11 = 0x3fecccccc0000000;
  uVar12 = 0x41086a0000000000;
  auVar17 = loadVectorLeftIndexed(0x10,0x4b56e0);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    MB_randInt(0x10);
    MB_randInt(2);
    uVar3 = SpawnPart_23(uVar9,uVar14,uVar11,uVar12,local_d0);
    iVar4 = (int)uVar3;
    if (iVar4 != 0) {
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar15);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar16 = vectorSplatHalfWord(auVar15,1);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xff;
      uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar3);
      *(undefined2 *)(iVar4 + 10) = uVar2;
      *(undefined4 *)(iVar4 + 0x24) = 2;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      uVar7 = storeVectorElementByteIndexed
                        (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                         auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                         auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                         auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0x2b,
                         uVar3);
      *(undefined1 *)(iVar4 + 0x2b) = uVar7;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
  fVar1 = 100000.0;
  uVar9 = 0x3fa99999a0000000;
  dVar13 = 20000.0;
  do {
    dVar10 = (double)fVar1;
    iVar5 = SpawnPart_23(uVar9,uVar14,uVar14,dVar10,local_d0);
    if (iVar5 != 0) {
      *(short *)(iVar5 + 10) = (short)uVar8;
      uVar7 = MB_randInt(0xff);
      *(undefined1 *)(iVar5 + 8) = uVar7;
      *(undefined4 *)(iVar5 + 0x24) = 2;
      *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
    }
    iVar6 = iVar6 + 1;
    fVar1 = (float)(dVar10 - dVar13);
    uVar8 = uVar8 << 1;
  } while (iVar6 < 3);
  MB_randRange(0x40,0x80);
  iVar5 = MB_randInt(3);
  if (iVar5 != 0) {
    MB_randInt(4);
    MB_randInt(2);
    uVar9 = SpawnPart_23(uVar9,uVar14,uVar14,0x41124f8000000000,local_d0);
    iVar5 = (int)uVar9;
    if (iVar5 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0x28,0x4b56e0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar18 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar15);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = vectorSplatHalfWord(auVar17,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar17,10,uVar9);
      *(undefined2 *)(iVar5 + 10) = uVar2;
      iVar6 = MB_randInt(2);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar5 + 3) = 0x44;
      }
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      *(undefined1 *)(iVar5 + 0x2a) = 0x40;
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      *(undefined4 *)(iVar5 + 0x24) = 2;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint(auVar15,auVar18,auVar17);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xff;
      uVar7 = storeVectorElementByteIndexed
                        (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                         auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                         auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                         auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,0x2b,
                         uVar9);
      *(undefined1 *)(iVar5 + 0x2b) = uVar7;
    }
  }
  return;
}


// 0x04b5bd8 (0x720 bytes)
// inlined: FastAtan2 @0x4b5f98, FastAtan2 @0x4b6148
/* Moby 922 */

void UpdateMoby_922(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f26;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x180;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar13;
  puVar9[0x32] = in_LR;
  puVar9[0x2a] = in_f26;
  puVar9[0x2b] = in_f27;
  puVar9[0x2c] = in_f28;
  puVar9[0x2d] = in_f29;
  puVar9[0x2e] = in_f30;
  puVar9[0x2f] = in_f31;
  puVar9[0x29] = unaff_r31;
  bVar1 = moby->state;
  puVar9[0x28] = unaff_r30;
  piVar7 = (int *)moby->pVar;
  puVar9[0x27] = unaff_r29;
  puVar9[0x26] = unaff_r28;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*piVar7 < 0) {
        DeleteMoby(moby);
      }
      else if (piVar7[1] < 0) {
        DeleteMoby(moby);
      }
      else {
        fVar2 = (moby->pos).z;
        auVar31 = ZEXT416(0xffffffff);
        auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        moby->updateDistance = -1;
        moby->state = '\x01';
        piVar7[2] = -1;
        auVar31 = loadVectorLeftIndexed(0x45e0,0x8f0000);
        auVar32 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        (moby->pos).z = fVar2 + 1.5;
        auVar31 = loadVectorLeftIndexed(4,0x4b5bac);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = vectorAddFloatingPoint
                            (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar33);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0xc,
                           ZEXT48(piVar7));
        *(undefined4 *)((uint)(piVar7 + 3) & 0xfffffffc) = uVar8;
      }
    }
  }
  else if (bVar1 < 3) {
    iVar18 = *piVar7;
    dVar29 = (double)(Cuboids[iVar18].pos.y - (moby->pos).y);
    dVar30 = (double)(Cuboids[iVar18].pos.x - (moby->pos).x);
    dVar27 = (double)(Cuboids[iVar18].pos.z - (moby->pos).z);
    dVar23 = (double)(float)(dVar30 * dVar30 + (double)(float)(dVar29 * dVar29));
    dVar25 = (double)SQRT((float)(dVar27 * dVar27 + dVar23));
    FastDecTimerS32(ZEXT48(piVar7) + 0xc);
    dVar24 = (double)(g_FrameTime * DAT_008f45d8);
    if ((dVar25 < dVar24) || (dVar26 = 0.0, dVar25 <= 0.0)) {
      iVar18 = piVar7[2];
      if ((iVar18 != -1) &&
         ((g_SoundChannels[iVar18].pMoby == moby &&
          (g_SoundChannels[iVar18].state != '\0')))) {
        sound_Kill(iVar18);
      }
      pMVar11 = g_MobyInstance;
      piVar7[2] = -1;
      if (pMVar11 + piVar7[1] != (MobyInstance *)0x0) {
        DeleteMoby(pMVar11 + piVar7[1]);
      }
      pCVar12 = Cuboids;
      iVar18 = *piVar7;
      fVar2 = (moby->transform).v0.x;
      (moby->pos).x = Cuboids[iVar18].pos.x;
      (moby->pos).y = pCVar12[iVar18].pos.y;
      fVar3 = (moby->transform).v0.y;
      (moby->pos).z = pCVar12[iVar18].pos.z;
      fVar4 = pCVar12[iVar18].pos.w;
      *(float *)(puVar9 + 0x18) = fVar2;
      (moby->pos).w = fVar4;
      fVar2 = (moby->transform).v0.w;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      *(float *)((int)puVar9 + 0xcc) = fVar2;
      *(undefined4 *)(puVar9 + 0x19) = 0x3f800000;
      puVar9[0x12] = 0;
      puVar9[0x14] = 1;
      puVar9[0x15] = 10;
      puVar9[0x16] = 0xffffffffffffffff;
      puVar9[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4024000000000000,0x4018000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x403e000000000000,lVar14,uVar13 - 0xc0,lVar14 + 0x10,&DAT_004b5bac,0,0x14,10,0xc);
      DeleteMoby(moby);
    }
    else {
      dVar25 = (double)FastWrapRot((moby->rotation).x,0.034906585);
      *(float *)(puVar9 + 0x1c) = (float)dVar27;
      (moby->rotation).x = (float)dVar25;
      fVar2 = (moby->rotation).y;
      dVar25 = ABS((double)(float)SQRT(dVar23));
      *(float *)((int)puVar9 + 0xdc) = (float)SQRT(dVar23);
      *(float *)((int)puVar9 + 0xe4) = (float)(dVar25 - ABS(dVar27));
      dVar28 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0xdc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1d) & 4;
      dVar23 = ABS((double)*(float *)((int)puVar9 + 0xdc));
      if ((double)*(float *)((int)puVar9 + 0xe4) - dVar26 < 0.0) {
        dVar23 = ABS(dVar27);
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar27 = ABS((double)*(float *)(puVar9 + 0x1c));
      if ((double)*(float *)((int)puVar9 + 0xe4) - dVar26 < 0.0) {
        dVar27 = dVar25;
      }
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar25 = dVar26;
      if (dVar26 < dVar23) {
        lVar16 = uVar13 - 0x170;
        lVar21 = uVar13 - 0x68;
        lVar19 = uVar13 - 0x78;
        lVar22 = 2;
        fVar5 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x114) = fVar5;
        *(float *)((int)puVar9 + 0x10c) = fVar5;
        *(float *)(puVar9 + 0x22) = fVar5;
        *(float *)(puVar9 + 0x21) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar6;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar5;
        *(float *)((int)puVar9 + 0x114) = *(float *)((int)puVar9 + 0x114) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0xf8) * fVar5 * fVar5;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar13 - 0x78;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar5 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0x108) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar19 = 2;
        lVar16 = lVar17;
        dVar23 = dVar26;
        do {
          iVar18 = (int)lVar16;
          iVar10 = (int)lVar21;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar18 + 0x108)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar25 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
      }
      dVar23 = (double)MB_LerpRot((double)fVar2,-dVar25,(double)DAT_008f45dc);
      *(float *)(puVar9 + 0x1a) = (float)dVar30;
      *(float *)((int)puVar9 + 0xd4) = (float)dVar29;
      (moby->rotation).y = (float)dVar23;
      fVar2 = (moby->rotation).z;
      *(float *)(puVar9 + 0x1b) = (float)(ABS(dVar30) - ABS(dVar29));
      dVar25 = (double)DAT_008f45dc;
      uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1d) & 4;
      dVar23 = ABS((double)*(float *)(puVar9 + 0x1a));
      if ((double)*(float *)(puVar9 + 0x1b) - dVar26 < 0.0) {
        dVar23 = ABS(dVar29);
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar27 = ABS((double)*(float *)((int)puVar9 + 0xd4));
      if ((double)*(float *)(puVar9 + 0x1b) - dVar26 < 0.0) {
        dVar27 = ABS(dVar30);
      }
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar26 < dVar23) {
        lVar16 = uVar13 - 0x170;
        lVar21 = uVar13 - 0x88;
        lVar19 = uVar13 - 0x98;
        lVar22 = 2;
        fVar5 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xf4) = fVar5;
        *(float *)((int)puVar9 + 0xec) = fVar5;
        *(float *)(puVar9 + 0x1e) = fVar5;
        *(float *)(puVar9 + 0x1d) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar6;
        *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar5;
        *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xd8) * fVar5 * fVar5;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar13 - 0x98;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar5 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xe8) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar10 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0xe8)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar26 = (double)((float)(dVar26 + dVar28) * fVar3 + fVar4);
      }
      dVar23 = (double)MB_LerpRot((double)fVar2,dVar26,dVar25);
      fVar2 = (moby->transform).v0.x;
      fVar3 = (moby->transform).v0.y;
      fVar4 = (moby->transform).v0.z;
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      (moby->rotation).z = (float)dVar23;
      (moby->pos).x = (float)((double)fVar2 * dVar24 + (double)fVar5);
      (moby->pos).y = (float)((double)fVar3 * dVar24 + (double)fVar6);
      (moby->pos).z = (float)((double)fVar4 * dVar24 + (double)(moby->pos).z);
      M922_004b5710(lVar14);
      iVar18 = IsMobyPlayingSound(moby,piVar7[2]);
      if (iVar18 == 0) {
        iVar18 = PlayMobySound(1,4,moby);
        piVar7[2] = iVar18;
      }
    }
  }
  return;
}


