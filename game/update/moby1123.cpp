// game/update/moby1123.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1d590c-0x1d64a8
#include <math.h>
#include "game/update/moby1123.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01d590c (0x14 bytes)
void M1123_001d590c(void)

{
  DAT_00764634 = 0x10000;
  return;
}


// 0x01d5928 (0x370 bytes)
void M1123_001d5928(undefined4 param_1)

{
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<56> auStack_b0;
  
  SetCollDamIn(0x4018000000000000,auStack_b0,param_1,0x10000);
  CollLine(local_d0,local_c0,0,param_1,auStack_b0);
  CollLine(local_d0,local_c0,0,param_1,auStack_b0);
  return;
}


// 0x01d5cc0 (0x7e8 bytes)
/* Moby 1123 */

ulonglong UpdateMoby_1123(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  MobyClass *pMVar9;
  u16 *puVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar17;
  float fVar18;
  float *pfVar19;
  undefined8 uVar16;
  int iVar20;
  float *pfVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r22;
  float *pfVar24;
  ulonglong unaff_r23;
  longlong lVar25;
  ulonglong unaff_r24;
  float *pfVar26;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  float *pfVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar28;
  ulonglong unaff_r29;
  int iVar29;
  ulonglong unaff_r30;
  longlong lVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  
  lVar22 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar25 = uVar14 - 0x390;
  puVar12 = (ulonglong *)lVar25;
  *puVar12 = uVar14;
  puVar12[0x74] = in_LR;
  puVar12[0x6d] = in_f27;
  puVar12[0x6e] = in_f28;
  puVar12[0x6f] = in_f29;
  puVar12[0x70] = in_f30;
  puVar12[0x71] = in_f31;
  puVar12[0x6c] = unaff_r31;
  puVar12[0x68] = unaff_r27;
  puVar12[0x6b] = unaff_r30;
  bVar1 = moby->state;
  uVar15 = (ulonglong)bVar1;
  pfVar8 = (float *)moby->pVar;
  pMVar9 = moby->pClass;
  puVar12[0x6a] = unaff_r29;
  puVar12[0x69] = unaff_r28;
  puVar12[0x67] = unaff_r26;
  puVar12[0x66] = unaff_r25;
  puVar12[0x65] = unaff_r24;
  puVar12[100] = unaff_r23;
  puVar12[99] = unaff_r22;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_00ef26e0 = 0x16;
      fVar5 = pMVar9->gScale * DAT_00764784;
      DAT_00ef26dc = 6.30584e-44;
      fVar18 = pfVar8[0x3c4];
      pfVar8[0x3c0] = 0.0;
      pfVar8[0x3c1] = 1.54143e-44;
      pfVar8[0x3c2] = 3.22299e-44;
      pfVar8[0x3c3] = 4.76441e-44;
      pfVar8[0x3c6] = -NAN;
      moby->scale = fVar5;
      if (fVar18 == -NAN) {
        uVar15 = 2;
        moby->state = '\x02';
      }
      else {
        uVar15 = 1;
        moby->state = '\x01';
        moby->collision = (ushort *)0x0;
      }
    }
    else if ((g_MobyInstance[(int)pfVar8[0x3c4]].oClass != ELECTRIC_GATE_POLES) ||
            (uVar15 = (ulonglong)g_MobyInstance[(int)pfVar8[0x3c4]].state,
            2 < g_MobyInstance[(int)pfVar8[0x3c4]].state)) {
      moby->state = '\x02';
      puVar10 = pMVar9->collision;
      uVar15 = ZEXT48(puVar10);
      moby->collision = puVar10;
    }
  }
  else if (bVar1 < 3) {
    iVar17 = IsMobyPlayingSound(moby,(int)pfVar8[0x3c6]);
    if (iVar17 == 0) {
      fVar18 = (float)PlayMobySound(0,4,moby);
      pfVar8[0x3c6] = fVar18;
    }
    M1123_001d5928(lVar22);
    DAT_00ef26d8 = DAT_00764770 * g_FrameTime + DAT_00ef26d8;
    if (1.0 < DAT_00ef26d8) {
      DAT_00ef26d8 = DAT_00ef26d8 - 1.0;
    }
    iVar17 = 0;
    dVar39 = (double)DAT_00764778;
    dVar38 = 0.03333333507180214;
    dVar40 = (double)(float)(dVar39 * -0.5);
    pfVar24 = pfVar8;
    pfVar27 = pfVar8;
    do {
      if (pfVar27[0x3c0] == 0.0) {
        iVar28 = 0;
        lVar25 = uVar14 - 0x280;
        uVar16 = 0;
        pfVar26 = pfVar24;
        do {
          pfVar26[2] = 0.0;
          pfVar26[1] = 0.0;
          pfVar26[3] = 1.0;
          *pfVar26 = (float)dVar40;
          dVar40 = (double)(float)(dVar39 * dVar38 + dVar40);
          MB_randSphere(uVar16,(double)(DAT_00764774 * g_FrameTime),lVar25);
          iVar28 = iVar28 + 1;
          pfVar26 = pfVar26 + 4;
          lVar25 = lVar25 + 0x10;
        } while (iVar28 < 0x1e);
        pfVar26 = pfVar24 + 0x1e4;
        lVar25 = uVar14 - 0x280;
        lVar22 = uVar14 - 0x270;
        lVar30 = uVar14 - 0x260;
        lVar31 = 0x1c;
        do {
          pfVar21 = (float *)lVar25;
          fVar18 = *pfVar21;
          pfVar23 = (float *)lVar22;
          fVar5 = *pfVar23;
          *pfVar26 = fVar18 + fVar5;
          fVar6 = pfVar21[1];
          fVar7 = pfVar23[1];
          pfVar26[1] = fVar6 + fVar7;
          fVar2 = pfVar21[2];
          fVar3 = pfVar23[2];
          lVar22 = lVar22 + 0x10;
          pfVar26[2] = fVar2 + fVar3;
          fVar4 = pfVar21[3];
          pfVar26[3] = fVar4;
          pfVar21 = (float *)lVar30;
          fVar5 = fVar18 + fVar5 + *pfVar21;
          lVar25 = lVar25 + 0x10;
          *pfVar26 = fVar5;
          fVar6 = fVar6 + fVar7 + pfVar21[1];
          pfVar26[1] = fVar6;
          fVar18 = pfVar21[2];
          *pfVar26 = fVar5 * 0.333;
          pfVar26[3] = fVar4;
          lVar30 = lVar30 + 0x10;
          pfVar26[1] = fVar6 * 0.333;
          pfVar26[2] = (fVar2 + fVar3 + fVar18) * 0.333;
          pfVar26 = pfVar26 + 4;
          lVar31 = lVar31 + -1;
          fVar18 = DAT_00ef26dc;
        } while (lVar31 != 0);
      }
      else {
        pfVar21 = pfVar24 + 0x1e4;
        lVar25 = 0x1c;
        pfVar26 = pfVar24;
        do {
          pfVar19 = pfVar26 + 4;
          *pfVar19 = *pfVar19 + *pfVar21;
          pfVar26[5] = pfVar26[5] + pfVar21[1];
          pfVar23 = pfVar21 + 2;
          pfVar21 = pfVar21 + 4;
          pfVar26[6] = pfVar26[6] + *pfVar23;
          lVar25 = lVar25 + -1;
          pfVar26 = pfVar19;
        } while (lVar25 != 0);
        fVar18 = (float)((int)pfVar27[0x3c0] + -1);
      }
      iVar17 = iVar17 + 1;
      pfVar27[0x3c0] = fVar18;
      pfVar24 = pfVar24 + 0x78;
      pfVar27 = pfVar27 + 1;
    } while (iVar17 < 4);
    fVar18 = (moby->pos).y - GameCamera.posY;
    fVar5 = (moby->pos).x - GameCamera.posX;
    fVar6 = (moby->pos).z - GameCamera.posZ;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar18 * fVar18) < 48.0) {
      RegisterFuncForMoby(&PTR_M1124_001d64b0_00708e50,moby);
    }
    fVar18 = pfVar8[0x3c5];
    uVar15 = (ulonglong)(uint)fVar18;
    if ((-1 < (int)fVar18) &&
       (uVar15 = (ulonglong)(byte)g_MobyInstance[(int)fVar18].setByGroup,
       g_MobyInstance[(int)fVar18].setByGroup != 0)) {
      moby->collision = (ushort *)0x0;
      moby->state = '\x03';
      fVar18 = pfVar8[0x3c6];
      if ((fVar18 != -NAN) &&
         ((g_SoundChannels[(int)fVar18].pMoby == moby &&
          (g_SoundChannels[(int)fVar18].state != '\0')))) {
        sound_Kill((int)fVar18);
      }
      pfVar8[0x3c6] = -NAN;
      iVar17 = PlayMobySound(1,0,moby);
      uVar15 = (ulonglong)iVar17;
    }
  }
  else if (bVar1 < 4) {
    lVar30 = uVar14 - 0x300;
    FastEulerToMtx1(lVar30,lVar22 + 0x40);
    FastMtxScaleIdentity((double)DAT_0076477c,uVar14 - 0x2c0);
    FastVecMtx4Mul(lVar30,lVar30,uVar14 - 0x2c0);
    iVar28 = 0;
    auVar46 = ZEXT416(0);
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    iVar17 = 0;
    do {
      lVar30 = uVar14 - 0x2c0;
      FastEulerToMtx1(lVar30,&DAT_00764720 + iVar17);
      FastVecMtx4Mul(lVar30,uVar14 - 0x300,lVar30);
      fVar18 = (moby->pos).y;
      auVar42 = vectorConvertFromSignedFixedPointWord(auVar46,0);
      auVar43 = loadVectorLeftIndexed(0x108,lVar25);
      auVar45 = loadVectorLeftIndexed(0x18,lVar22);
      auVar44 = vectorAddFloatingPoint(auVar43,auVar45);
      iVar29 = 0;
      *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) + (moby->pos).x;
      *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) + fVar18;
      auVar43 = loadVectorLeftIndexed(0x18,0x1d5c98);
      auVar45 = loadVectorLeftIndexed(0x1c,0x1d5c98);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
      auVar43 = vectorAddFloatingPoint(auVar43,auVar44);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x108,lVar25
                         );
      *(undefined4 *)(puVar12 + 0x21) = uVar11;
      dVar41 = 1.0;
      *(undefined4 *)((int)puVar12 + 0x10c) = 0x3f800000;
      dVar40 = 0.0;
      dVar39 = 0.75;
      dVar38 = 0.5;
      do {
        dVar32 = (double)MB_randRangeSigned
                                   (dVar40,(double)(float)((double)DAT_00764778 * dVar39));
        fVar5 = *(float *)((int)puVar12 + 0xd4);
        fVar6 = *(float *)(puVar12 + 0x1a);
        fVar7 = *(float *)(puVar12 + 0x1b);
        dVar37 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        *(undefined4 *)((int)puVar12 + 0x7c) = *(undefined4 *)((int)puVar12 + 0xdc);
        uVar13 = DAT_0076478c;
        uVar11 = DAT_00764788;
        fVar18 = (float)(dVar32 / dVar37);
        dVar32 = dVar40;
        if (dVar40 - dVar37 < 0.0) {
          dVar32 = (double)(fVar7 * fVar18);
        }
        dVar35 = dVar40;
        if (dVar40 - dVar37 < 0.0) {
          dVar35 = (double)(fVar5 * fVar18);
        }
        dVar36 = dVar40;
        if (dVar40 - dVar37 < 0.0) {
          dVar36 = (double)(fVar6 * fVar18);
        }
        if (dVar37 - dVar40 < 0.0) {
          dVar32 = (double)(fVar7 * fVar18);
        }
        if (dVar37 - dVar40 < 0.0) {
          dVar35 = (double)(fVar5 * fVar18);
        }
        if (dVar37 - dVar40 < 0.0) {
          dVar36 = (double)(fVar6 * fVar18);
        }
        *(float *)(puVar12 + 0xf) = (float)(dVar32 + (double)*(float *)(puVar12 + 0x21));
        *(float *)((int)puVar12 + 0x74) = (float)(dVar35 + (double)*(float *)((int)puVar12 + 0x104))
        ;
        *(float *)(puVar12 + 0xe) = (float)(dVar36 + (double)*(float *)(puVar12 + 0x20));
        MB_randRangeFloat((float)dVar40,(float)dVar41);
        uVar16 = FastLerpColor(uVar11,uVar13);
        uVar33 = MB_randRangeFloat(DAT_00764790,DAT_00764794);
        uVar15 = (ulonglong)DAT_0076479c;
        puVar12[0x5e] = (longlong)DAT_00764798;
        uVar34 = puVar12[0x5e];
        puVar12[0x5e] = uVar15;
        MB_randRangeFloat((float)(longlong)uVar34,(float)(longlong)puVar12[0x5e]);
        iVar20 = FastDoubleToInt();
        MB_randSphere
                  ((double)(DAT_007647a0 * g_FrameTime),
                   (double)(DAT_007647a4 * g_FrameTime),uVar14 - 0x310);
        puVar12[0x5e] = (longlong)iVar20;
        puVar12[0x5e] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x5e] + dVar38));
        MB_randInt(0xff);
        SpawnPart_60(uVar33,uVar14 - 800,uVar14 - 0x310,uVar16);
        iVar29 = iVar29 + 1;
      } while (iVar29 < 0x32);
      iVar28 = iVar28 + 1;
      iVar17 = iVar17 + 0x10;
      auVar43.piece<0,4>() = auVar46.piece<0,4>() + 1;
      auVar43.piece<8,8>() = auVar46.piece<8,8>();
      auVar43.piece<4,4>() = auVar46.piece<4,4>() + 1;
      auVar45.piece<0,8>() = auVar43.piece<0,8>();
      auVar45.piece<12,4>() = auVar46.piece<12,4>();
      auVar45.piece<8,4>() = auVar46.piece<8,4>() + 1;
      auVar46.piece<0,12>() = auVar45.piece<0,12>();
      auVar46.piece<12,4>() = auVar45.piece<12,4>() + 1;
    } while (iVar28 < 4);
    uVar15 = 4;
    moby->state = '\x04';
  }
  return uVar15;
}


