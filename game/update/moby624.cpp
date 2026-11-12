// game/update/moby624.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3e70b0-0x3e7fc0
#include "game/update/moby624.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x03e70b0 (0x14 bytes)
void M624_003e70b0(void)

{
  DAT_00853e5c = 0x10000;
  return;
}


// 0x03e70d8 (0x340 bytes)
void M624_003e70d8(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  undefined1 uVar6;
  undefined8 in_r6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  dVar9 = 0.5;
  iVar5 = FastCheckBsphereInView((double)DAT_00853e84,local_90);
  if (iVar5 != -1) {
    dVar10 = 0.0;
    dVar11 = 1.0;
    dVar8 = (double)DAT_00853f3c;
    dVar7 = (double)MB_randRangeFloat(0.0,1.0);
    if (dVar7 < dVar8) {
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      uVar3 = DAT_00853f2c;
      uVar2 = DAT_00853f28;
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      uVar4 = FastLerpColor(uVar2,uVar3);
      dVar7 = (double)DAT_00853f30;
      fVar1 = animationSpeed * (float)((double)(longlong)DAT_00853f34 + dVar9);
      uVar6 = MB_randInt(0xff);
      SpawnPart_60(dVar7,local_80,local_70,uVar4,in_r6,(int)fVar1 & 0xff,uVar6,0);
      dVar7 = (double)DAT_00853f30;
      fVar1 = animationSpeed * (float)((double)(longlong)DAT_00853f38 + dVar9);
      uVar6 = MB_randInt(0xff);
      SpawnPart_60(dVar7,local_80,local_70,uVar4,in_r6,(int)fVar1 & 0xff,uVar6,0);
    }
  }
  return;
}


// 0x03e7450 (0x3a4 bytes)
void M624_003e7450
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<56> auStack_b0;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  SetCollDamIn(0x4008000000000000,auStack_b0,param_1,0x10001,param_4,local_e0);
  dVar6 = (double)FastIntToDouble(0x40);
  dVar7 = -3.141590118408203;
  fVar4 = (float)(1.0 / dVar6) * 6.28318;
  dVar8 = (double)fVar4;
  dVar6 = (double)FastWrapRot(-3.14159,fVar4);
  do {
    CollLine(local_d0,local_c0,1,*(undefined4 *)(iVar1 + 0x34),auStack_b0);
    uVar2 = *(uint *)(iVar1 + 0x24);
    uVar3 = (int)uVar2 >> 0x1f;
    if ((int)((uVar3 >> 1 ^ uVar2) - uVar3) < 0x40400000) {
      M624_003e70d8(param_1,local_d0,local_c0);
    }
    dVar7 = (double)FastWrapRot((float)dVar7,(float)dVar8);
    dVar6 = (double)FastWrapRot((float)dVar6,(float)dVar8);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40);
  return;
}


// 0x03e7830 (0x790 bytes)
/* Moby 624 */

void UpdateMoby_624(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  float *pfVar3;
  f32 fVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<40> local_a0;
  
  pfVar3 = (float *)moby->pVar;
  if ((g_heroState == MOVEMENT_LOCKED) || (g_gameMode == GAME_MODE_SCENE)) {
    DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar14 = 0;
        if (0 < DAT_00853ed0) {
          dVar17 = 0.0;
          uVar19 = 0x3fe0000000000000;
          dVar16 = 1.0;
          do {
            MB_randSphere(dVar17,(double)(DAT_00853e9c * g_FrameTime),local_b0);
            MB_randSphere(dVar17,uVar19,local_a0);
            MB_randRangeFloat(DAT_00853eb0,DAT_00853eb4);
            MB_randRangeFloat(DAT_00853eb8,DAT_00853ebc);
            uVar7 = DAT_00853ec4;
            uVar6 = DAT_00853ec0;
            MB_randRangeFloat((float)dVar17,(float)dVar16);
            uVar8 = FastLerpColor(uVar6,uVar7);
            uVar7 = DAT_00853ecc;
            uVar6 = DAT_00853ec8;
            MB_randRangeFloat((float)dVar17,(float)dVar16);
            uVar9 = FastLerpColor(uVar6,uVar7);
            dVar15 = (double)MB_randRangeFloat((float)dVar17,(float)dVar16);
            uVar10 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)((double)(longlong)DAT_00853ea0 * dVar15 + dVar16)));
            dVar18 = (double)(longlong)DAT_00853ea4;
            dVar15 = (double)MB_randRangeFloat(-DAT_00853eac,DAT_00853eac);
            uVar11 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar18 * (double)(float)(dVar15 + dVar16))));
            dVar18 = (double)(longlong)DAT_00853ea8;
            dVar15 = (double)MB_randRangeFloat(-DAT_00853eac,DAT_00853eac);
            uVar12 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar18 * (double)(float)(dVar15 + dVar16))));
            SpawnPart_2(local_a0,local_d0,local_c0,uVar8,uVar9,uVar10,uVar11,uVar12);
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_00853ed0);
        }
        dVar16 = (double)FastWrapRot(pfVar3[0xc],g_FrameTime * 18.849556);
        uVar7 = DAT_00853e90;
        uVar6 = DAT_00853e8c;
        dVar17 = (double)(float)(3.141592502593994 - dVar16);
        if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
          dVar17 = dVar16;
        }
        dVar15 = (double)(float)(-3.141592502593994 - dVar16);
        if ((double)(float)(-3.141592502593994 - dVar16) - dVar17 < 0.0) {
          dVar15 = dVar17;
        }
        dVar20 = 1.0;
        uVar19 = 0x3fe0000000000000;
        pfVar3[0xc] = (float)dVar16;
        dVar16 = (double)(float)(dVar15 * dVar15);
        dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
        dVar17 = (double)(float)(dVar16 * dVar18);
        uVar13 = FastLerpColor
                           ((double)(((float)(dVar16 * dVar17) * 2.601887e-06 +
                                      (float)(dVar17 * -0.0001980741071747616 +
                                             (double)(float)(dVar18 * 0.008333025500178337 +
                                                            (double)(float)((double)(float)(dVar16 *
                                                                                           dVar15) *
                                                                            -0.16666656732559204 +
                                                                           dVar15))) + 1.0) * 0.5),
                            uVar6,uVar7);
        moby->glowRgba = uVar13;
        pfVar3[2] = -(DAT_0071f418 * 10.0 - pfVar3[2]);
        (moby->pos).x = (moby->pos).x + *pfVar3;
        (moby->pos).y = (moby->pos).y + pfVar3[1];
        (moby->pos).z = (moby->pos).z + pfVar3[2];
        dVar17 = (double)GetGroundZ(uVar19,(longlong)(int)moby + 0x10,0);
        if ((double)((moby->pos).z - 0.333) < dVar17) {
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          moby->state = '\x01';
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          (moby->pos).z = (float)(dVar17 + 0.3330000042915344);
          auVar21 = loadVectorLeftIndexed(0x30,0x3e77f4);
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar6 = storeVectorElementWordIndexed
                            (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x2c,
                             ZEXT48(pfVar3));
          *(undefined4 *)((uint)(pfVar3 + 0xb) & 0xfffffffc) = uVar6;
        }
        dVar17 = (double)FastWrapRot((moby->rotation).y,g_FrameTime * 8.726646);
        fVar4 = (moby->pos).z;
        (moby->rotation).y = (float)dVar17;
        uVar13 = (int)fVar4 >> 0x1f;
        if ((int)((uVar13 >> 1 ^ (uint)fVar4) - uVar13) < 0x41200000) {
          DeleteMoby(moby);
        }
        else {
          MB_RegisterLameShadow((float)dVar20,moby);
        }
      }
      else {
        dVar16 = (double)FastWrapRot(pfVar3[0xc],g_FrameTime * 18.849556);
        uVar7 = DAT_00853e90;
        uVar6 = DAT_00853e8c;
        dVar17 = (double)(float)(3.141592502593994 - dVar16);
        if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
          dVar17 = dVar16;
        }
        dVar15 = (double)(float)(-3.141592502593994 - dVar16);
        if ((double)(float)(-3.141592502593994 - dVar16) - dVar17 < 0.0) {
          dVar15 = dVar17;
        }
        pfVar3[0xc] = (float)dVar16;
        dVar17 = (double)(float)(dVar15 * dVar15);
        dVar18 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar15));
        dVar16 = (double)(float)(dVar17 * dVar18);
        uVar13 = FastLerpColor
                           ((double)(((float)(dVar17 * dVar16) * 2.601887e-06 +
                                      (float)(dVar16 * -0.0001980741071747616 +
                                             (double)(float)(dVar18 * 0.008333025500178337 +
                                                            (double)(float)((double)(float)(dVar17 *
                                                                                           dVar15) *
                                                                            -0.16666656732559204 +
                                                                           dVar15))) + 1.0) * 0.5),
                            uVar6,uVar7);
        moby->glowRgba = uVar13;
        iVar14 = FastDecTimerS32(ZEXT48(pfVar3) + 0x2c);
        if (iVar14 != 0) {
          sound_MobyPlay_oClass(0xf,0,moby,0x58e);
          MVar2 = moby->modeBits;
          moby->state = '\x02';
          pfVar3[9] = 0.5;
          moby->enabled = '\0';
          moby->modeBits = MVar2 | DISABLED;
          moby->collision = (ushort *)0x0;
        }
      }
    }
    else if (bVar1 < 3) {
      pfVar3[9] = pfVar3[9] + pfVar3[8];
      M624_003e7450((longlong)(int)moby);
      RegisterFuncForMoby(&PTR_M625_003e82b0_0070da40,moby);
      uVar13 = (int)pfVar3[9] >> 0x1f;
      uVar5 = (int)pfVar3[10] >> 0x1f;
      if ((int)((uVar5 >> 1 ^ (uint)pfVar3[10]) - uVar5) <
          (int)((uVar13 >> 1 ^ (uint)pfVar3[9]) - uVar13)) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 < 4) {
      DeleteMoby(moby);
    }
  }
  return;
}


