// game/update/moby1395.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x26a268-0x26a850
#include "game/update/moby1395.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1397.h"
#include "idol/fastfunc.h"

// 0x026a268 (0x5e8 bytes)
/* Moby 1395 */

undefined4 * UpdateMoby_1395(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  MobyInstance *pMVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  undefined4 *puVar13;
  uint uVar14;
  longlong lVar11;
  int iVar15;
  uint uVar16;
  ulonglong uVar12;
  short sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 in_LR;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  float fVar29;
  
  bVar1 = moby->state;
  puVar13 = (undefined4 *)(uint)bVar1;
  puVar5 = (uint *)moby->pVar;
  uVar20 = ZEXT48(puVar5);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*puVar5 == 0) {
        uVar14 = FUN_0026a854(moby);
        fVar29 = (moby->transform).v0.x;
        fVar2 = (moby->pos).x;
        *puVar5 = uVar14;
        fVar10 = DAT_0079cb64;
        fVar3 = (moby->transform).v0.y;
        fVar4 = (moby->transform).v0.z;
        *(float *)(uVar14 + 0x10) = fVar29 * DAT_0079cb64 + fVar2;
        *(float *)(uVar14 + 0x14) = fVar3 * fVar10 + (moby->pos).y;
        *(float *)(uVar14 + 0x18) = fVar4 * fVar10 + (moby->pos).z;
        *(f32 *)(uVar14 + 0x1c) = (moby->pos).w;
      }
      iVar15 = 0;
      auVar22 = ZEXT416(0);
      auVar26 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      do {
        fVar29 = DAT_0079cb64;
        iVar9 = (int)uVar20;
        if (*(int *)(iVar9 + 4) == 0) {
          fVar2 = (moby->pos).x;
          pMVar6 = g_MobyInstance + *(int *)(iVar9 + 0x28);
          fVar10 = (moby->transform).v0.x * DAT_0079cb64;
          fVar3 = (moby->transform).v0.y;
          auVar22 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          fVar4 = (moby->transform).v0.z;
          *(MobyInstance **)(iVar9 + 4) = pMVar6;
          (pMVar6->pos).x = fVar10 + fVar2;
          (pMVar6->pos).y = fVar3 * fVar29 + (moby->pos).y;
          (pMVar6->pos).z = fVar4 * fVar29 + (moby->pos).z;
          (pMVar6->pos).w = (moby->pos).w;
          auVar23 = loadVectorLeftIndexed(0xffffffffffffcb68,0x7a0000);
          auVar24 = loadVectorLeftIndexed(0x4350,0xfa0000);
          uVar14 = *(uint *)(iVar9 + 4);
          auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar22,auVar24);
          auVar23 = loadVectorLeftIndexed(0x18,(ulonglong)uVar14);
          auVar22 = vectorAddFloatingPoint(auVar22,auVar23);
          auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x18,
                             (ulonglong)uVar14);
          *(undefined4 *)(uVar14 + 0x18 & 0xfffffffc) = uVar8;
        }
        iVar15 = iVar15 + 1;
        uVar20 = uVar20 + 4;
        auVar27.piece<0,4>() = auVar26.piece<0,4>() + 1;
        auVar27.piece<8,8>() = auVar26.piece<8,8>();
        auVar27.piece<4,4>() = auVar26.piece<4,4>() + 1;
        auVar25.piece<0,8>() = auVar27.piece<0,8>();
        auVar25.piece<12,4>() = auVar26.piece<12,4>();
        auVar25.piece<8,4>() = auVar26.piece<8,4>() + 1;
        auVar26.piece<0,12>() = auVar25.piece<0,12>();
        auVar26.piece<12,4>() = auVar25.piece<12,4>() + 1;
      } while (iVar15 < 6);
      puVar13 = (undefined4 *)0xffffffff;
      puVar5[0x10] = 0xffffffff;
      if (*puVar5 != 0) {
        puVar13 = (undefined4 *)0x1;
        moby->state = '\x01';
      }
    }
    else {
      puVar13 = (undefined4 *)(uint)g_MobyInstance[puVar5[7]].state;
      if (g_MobyInstance[puVar5[7]].state == 2) {
        moby->state = '\x02';
        lVar11 = (longlong)DAT_0079cb70;
        auVar22 = ZEXT416(0xffffffff);
        auVar26 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        *(undefined2 *)((int)puVar5 + 0x22) = 5;
        auVar22 = loadVectorLeftIndexed(0xffffffffffffcb70,0x7a0000);
        auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
        auVar22 = loadVectorLeftIndexed(in_LR,0x26a250);
        auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = vectorAddFloatingPoint
                            (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
        auVar23 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar22,auVar23);
        auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
        fVar29 = animationSpeed * ((float)lVar11 + 0.5);
        auVar22 = vectorSplatHalfWord(auVar22,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar22,0x20,uVar20);
        *(undefined2 *)(puVar5 + 8) = uVar7;
        dVar21 = (double)FastIntToDouble((short)(int)fVar29);
        pMVar6 = *(MobyInstance **)
                  ((int)puVar5 + (int)((longlong)*(short *)((int)puVar5 + 0x22) << 2) + 4);
        puVar5[9] = (uint)(float)(1.0 / dVar21);
        puVar13 = (undefined4 *)sound_MobyPlay_oClass(0,0,pMVar6,0x575);
      }
    }
  }
  else if (bVar1 < 3) {
    iVar15 = *(int *)((int)puVar5 + (int)((longlong)*(short *)((int)puVar5 + 0x22) << 2) + 4);
    FastDecTimerS16(uVar20 + 0x20);
    dVar21 = (double)FastIntToDouble(*(undefined2 *)(puVar5 + 8));
    dVar21 = (double)MB_LerpRot
                               (0x3ff921fb60000000,0,
                                (double)(float)(dVar21 * (double)(float)puVar5[9]));
    *(float *)(iVar15 + 0x44) = (float)dVar21;
    puVar13 = (undefined4 *)(uint)*(ushort *)(puVar5 + 8);
    if (*(ushort *)(puVar5 + 8) == 0) {
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0xffffffffffffcb70,0x7a0000);
      auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      auVar22 = loadVectorLeftIndexed(in_LR,0x26a250);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      sVar17 = *(short *)((int)puVar5 + 0x22) + -1;
      auVar23 = vectorAddFloatingPoint(auVar23,auVar22);
      auVar23 = vectorMultiplyAddFloatingPoint(auVar26,auVar23,auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      auVar23 = vectorSplatHalfWord(auVar23,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar23,0x20,uVar20);
      *(undefined2 *)(puVar5 + 8) = uVar7;
      *(short *)((int)puVar5 + 0x22) = sVar17;
      if (sVar17 < 0) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        moby->state = '\x03';
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = loadVectorLeftIndexed(0xffffffffffffcb74,0x7a0000);
        auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = vectorAddFloatingPoint(auVar23,auVar22);
        auVar22 = vectorMultiplyAddFloatingPoint(auVar26,auVar22,auVar24);
        auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
        fVar29 = animationSpeed * ((float)(longlong)DAT_0079cb74 + 0.5);
        auVar22 = vectorSplatHalfWord(auVar22,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar22,0x20,uVar20);
        *(undefined2 *)(puVar5 + 8) = uVar7;
        dVar21 = (double)FastIntToDouble((short)(int)fVar29);
        puVar13 = &DAT_0026a250;
        puVar5[9] = (uint)(float)(1.0 / dVar21);
      }
      else {
        puVar13 = (undefined4 *)
                  sound_MobyPlay_oClass
                            (0,0,*(MobyInstance **)((int)puVar5 + (int)((longlong)sVar17 << 2) + 4),
                             0x575);
      }
    }
  }
  else if (bVar1 < 4) {
    uVar14 = *puVar5;
    uVar19 = (ulonglong)uVar14;
    iVar15 = IsMobyPlayingSound(moby,puVar5[0x10]);
    if (iVar15 == 0) {
      uVar16 = PlayMobySound(0,4,moby);
      puVar5[0x10] = uVar16;
    }
    FastDecTimerS16(uVar20 + 0x20);
    dVar21 = (double)FastIntToDouble(*(undefined2 *)(puVar5 + 8));
    fVar29 = Lerp(DAT_0079cb6c * 0.017453292,0.0,
                            (float)(dVar21 * (double)(float)puVar5[9]));
    *(float *)(uVar14 + 0x44) = fVar29;
    auVar22 = ZEXT416(0);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    lVar11 = 6;
    uVar12 = uVar20;
    do {
      auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      auVar24 = loadVectorLeftIndexed(0xffffffffffffcb68,0x7a0000);
      auVar26 = loadVectorLeftIndexed(0x4350,0xfa0000);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
      auVar23 = loadVectorLeftIndexed(0xe0,uVar19);
      auVar24 = loadVectorLeftIndexed(0x10,uVar19);
      uVar16 = *(uint *)((int)uVar12 + 4);
      uVar18 = (ulonglong)uVar16;
      uVar12 = uVar12 + 4;
      auVar27 = loadVectorLeftIndexed(0xe4,uVar19);
      auVar28 = loadVectorLeftIndexed(0xe8,uVar19);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar24);
      auVar23.piece<0,4>() = auVar22.piece<0,4>() + 1;
      auVar23.piece<8,8>() = auVar22.piece<8,8>();
      auVar23.piece<4,4>() = auVar22.piece<4,4>() + 1;
      auVar24.piece<0,8>() = auVar23.piece<0,8>();
      auVar24.piece<12,4>() = auVar22.piece<12,4>();
      auVar24.piece<8,4>() = auVar22.piece<8,4>() + 1;
      auVar22.piece<0,12>() = auVar24.piece<0,12>();
      auVar22.piece<12,4>() = auVar24.piece<12,4>() + 1;
      auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x10,uVar18);
      *(undefined4 *)(uVar16 + 0x10 & 0xfffffffc) = uVar8;
      auVar23 = loadVectorLeftIndexed(0x14,uVar19);
      auVar23 = vectorMultiplyAddFloatingPoint(auVar27,auVar26,auVar23);
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x14,uVar18);
      *(undefined4 *)(uVar16 + 0x14 & 0xfffffffc) = uVar8;
      auVar23 = loadVectorLeftIndexed(0x18,uVar19);
      auVar23 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar23);
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x18,uVar18);
      *(undefined4 *)(uVar16 + 0x18 & 0xfffffffc) = uVar8;
      *(undefined4 *)(uVar16 + 0x1c) = *(undefined4 *)(uVar14 + 0x1c);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar13 = (undefined4 *)(uint)*(ushort *)(puVar5 + 8);
    if (*(ushort *)(puVar5 + 8) == 0) {
      uVar14 = puVar5[0x10];
      if (((uVar14 != 0xffffffff) && (g_SoundChannels[uVar14].pMoby == moby)) &&
         (g_SoundChannels[uVar14].state != '\0')) {
        sound_Kill(uVar14);
      }
      puVar13 = (undefined4 *)0x2;
      puVar5[0x10] = 0xffffffff;
      moby->state = '\x04';
      iVar15 = 0;
      do {
        iVar9 = (int)uVar20;
        iVar15 = iVar15 + 1;
        uVar20 = uVar20 + 4;
        *(undefined1 *)(*(int *)(iVar9 + 4) + 0x20) = 2;
      } while (iVar15 < 6);
    }
  }
  return puVar13;
}


