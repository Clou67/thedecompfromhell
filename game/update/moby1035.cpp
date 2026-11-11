// game/update/moby1035.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x193078-0x1942f4
#include "game/update/moby1035.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0193078 (0x314 bytes)
void M1035_00193078(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  float local_250 [4];
  float local_240 [4];
  float local_230 [112];
  
  dVar18 = (double)FastWrapRot
                             (*(float *)(param_1 + 0x40),
                              DAT_00740054 * 0.017453292 * g_FrameTime);
  *(float *)(param_1 + 0x40) = (float)dVar18;
  *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_1 + 0x24) + 0x24) * DAT_00740058;
  DAT_00e5f000 = DAT_0073ff24 * g_FrameTime + DAT_00e5f000;
  if (1.0 < DAT_00e5f000) {
    DAT_00e5f000 = DAT_00e5f000 - 1.0;
  }
  iVar14 = 0;
  iVar15 = 0;
  dVar20 = (double)DAT_0073ff2c;
  dVar21 = 0.03333333507180214;
  iVar16 = 0;
  dVar18 = (double)(float)(dVar20 * -0.5);
  do {
    iVar8 = *(int *)((int)&DAT_00e5ff10 + iVar15);
    if (iVar8 == 0) {
      iVar8 = 0;
      uVar19 = 0;
      pfVar10 = local_250;
      puVar13 = (undefined4 *)((int)&DAT_00e5f010 + iVar16);
      pfVar12 = (float *)((int)&DAT_00e5f014 + iVar16);
      do {
        puVar13[2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0x3f800000;
        fVar1 = DAT_0073ff28;
        *pfVar12 = (float)dVar18;
        MB_randSphere(uVar19,(double)(fVar1 * g_FrameTime),pfVar10);
        iVar8 = iVar8 + 1;
        dVar18 = (double)(float)(dVar20 * dVar21 + dVar18);
        puVar13 = puVar13 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar10 = pfVar10 + 4;
      } while (iVar8 < 0x1e);
      pfVar10 = (float *)((int)&DAT_00e5f7a0 + iVar16);
      lVar17 = 0x1c;
      pfVar11 = local_250;
      pfVar9 = local_240;
      pfVar12 = local_230;
      do {
        fVar1 = *pfVar11;
        fVar2 = *pfVar9;
        *pfVar10 = fVar1 + fVar2;
        fVar3 = pfVar11[1];
        fVar4 = pfVar9[1];
        pfVar10[1] = fVar3 + fVar4;
        fVar5 = pfVar11[2];
        fVar6 = pfVar9[2];
        pfVar9 = pfVar9 + 4;
        pfVar10[2] = fVar5 + fVar6;
        fVar7 = pfVar11[3];
        pfVar10[3] = fVar7;
        fVar2 = fVar1 + fVar2 + *pfVar12;
        pfVar11 = pfVar11 + 4;
        *pfVar10 = fVar2;
        fVar3 = fVar3 + fVar4 + pfVar12[1];
        pfVar10[1] = fVar3;
        fVar1 = pfVar12[2];
        *pfVar10 = fVar2 * 0.333;
        pfVar10[3] = fVar7;
        pfVar12 = pfVar12 + 4;
        pfVar10[1] = fVar3 * 0.333;
        pfVar10[2] = (fVar5 + fVar6 + fVar1) * 0.333;
        pfVar10 = pfVar10 + 4;
        lVar17 = lVar17 + -1;
        iVar8 = DAT_00e5ff20;
      } while (lVar17 != 0);
    }
    else {
      lVar17 = 0x1c;
      pfVar10 = (float *)((int)&DAT_00e5f020 + iVar16);
      pfVar12 = (float *)((int)&DAT_00e5f7a0 + iVar16);
      do {
        *pfVar10 = *pfVar10 + *pfVar12;
        pfVar10[1] = pfVar10[1] + pfVar12[1];
        pfVar9 = pfVar12 + 2;
        pfVar12 = pfVar12 + 4;
        pfVar10[2] = pfVar10[2] + *pfVar9;
        pfVar10 = pfVar10 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      iVar8 = iVar8 + -1;
    }
    iVar14 = iVar14 + 1;
    *(int *)((int)&DAT_00e5ff10 + iVar15) = iVar8;
    iVar16 = iVar16 + 0x1e0;
    iVar15 = iVar15 + 4;
  } while (iVar14 < 4);
  return;
}


// 0x01933d8 (0xf1c bytes)
// inlined: FastRSqrt @0x193b30
// strings: 00a1000c: 'None'

/* Moby 1035 */

void UpdateMoby_1035(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  undefined2 uVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  float fVar31;
  GPiece<16> local_1d0;
  GPiece<32> local_1c0;
  GPiece<16> local_1a0;
  GPiece<16> auStack_190;
  GPiece<16> local_180;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  GPiece<64> local_150;
  GPiece<88> auStack_110;
  
  lVar14 = (longlong)(int)moby;
  bVar2 = moby->state;
  pvVar7 = moby->pVar;
  uVar17 = ZEXT48(pvVar7);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      DAT_00e5ff24 = 0x16;
      DAT_00e5ff14 = 0xb;
      DAT_00e5ff20 = 0x2d;
      DAT_00e5ff10 = 0;
      MVar6 = moby->modeBits;
      DAT_00e5ff18 = 0x17;
      DAT_00e5ff1c = 0x22;
      *(undefined4 *)((int)pvVar7 + 0x10) = 0xffffffff;
      moby->state = '\x01';
      moby->modeBits = MVar6 | CAN_BE_DAMAGED;
    }
    else {
      FastDecTimerS16(uVar17 + 0x16);
      iVar15 = IsMobyPlayingSound(moby,*(int *)((int)pvVar7 + 0x10));
      if (iVar15 == 0) {
        iVar15 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar7 + 0x10) = iVar15;
      }
      M1035_00193078(lVar14);
      fVar31 = (moby->pos).y - GameCamera.posY;
      fVar3 = (moby->pos).x - GameCamera.posX;
      fVar4 = (moby->pos).z - GameCamera.posZ;
      if (48.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar31 * fVar31)) {
        fVar31 = Delt(0.0,g_FrameTime * 2.0,(float *)((int)pvVar7 + 0x18));
        dVar23 = (double)fVar31;
      }
      else {
        dVar26 = 1.0;
        Delt(1.0,g_FrameTime * 2.0,(float *)((int)pvVar7 + 0x18));
        dVar25 = 0.5;
        dVar24 = 0.0;
        dVar23 = 1.5707963705062866;
        FastWrapRot((moby->rotation).z,1.5707964);
        FastWrapRot((moby->rotation).z,(float)dVar23);
        uVar22 = 0x4014000000000000;
        SetCollDamIn(0x4014000000000000,local_180,lVar14,0x10001);
        CollLine(local_1d0,local_1c0,0,lVar14,local_180);
        if (((CHAR_ARRAY_00a1000c.piece<344,2>() == 0) && (*(short *)((int)pvVar7 + 0x16) == 0)) &&
           (g_CollOutput.pMoby == g_heroMobyPtr)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
          auVar30 = loadVectorLeftIndexed(0x3c,0x19338c);
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar27 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = vectorSplatHalfWord(auVar27,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
          *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
        }
        dVar21 = 3.1415927410125732;
        FastWrapRot((moby->rotation).z,3.1415927);
        FastWrapRot((moby->rotation).z,(float)dVar21);
        FastWrapRot((moby->rotation).z,(float)dVar23);
        FastWrapRot((moby->rotation).z,(float)dVar23);
        SetCollDamIn(uVar22,local_180,lVar14,0x10001);
        dVar23 = (double)CollLine(local_1d0,local_1c0,0,lVar14,local_180);
        if (((CHAR_ARRAY_00a1000c.piece<344,2>() == 0) && (*(short *)((int)pvVar7 + 0x16) == 0)) &&
           (g_CollOutput.pMoby == g_heroMobyPtr)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
          auVar30 = loadVectorLeftIndexed(0x3c,0x19338c);
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar27 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = vectorSplatHalfWord(auVar27,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
          *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
        }
        if (DAT_00969f1c == moby) {
          fVar31 = (moby->transform).v0.y;
          fVar3 = (moby->transform).v0.x;
          fVar4 = (moby->transform).v0.z;
          dVar23 = dVar24;
          dVar21 = dVar24;
          if ((double)((g_heroPosition.z - (moby->pos).z) * fVar4 +
                      (g_heroPosition.x - (moby->pos).x) * fVar3 +
                      (g_heroPosition.y - (moby->pos).y) * fVar31) <= dVar24) {
            dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar31 * fVar31);
            if (dVar25 == dVar24) {
              fVar5 = (moby->transform).v0.w;
            }
            else {
              fVar1 = (float)(-1.0 / dVar25);
              fVar5 = (moby->transform).v0.w;
              dVar24 = (double)(fVar31 * fVar1);
              dVar23 = (double)(fVar3 * fVar1);
              dVar21 = (double)(fVar4 * fVar1);
            }
          }
          else {
            dVar20 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar31 * fVar31);
            if ((double)(float)SQRT(dVar20) == dVar24) {
              fVar5 = (moby->transform).v0.w;
            }
            else {
              dVar23 = 1.0 / SQRT(dVar20);
              fVar5 = (moby->transform).v0.w;
              dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar20 * dVar23) * dVar23 -
                                                       dVar26) * (double)(float)(dVar25 * dVar23) +
                                      dVar23);
              dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar20 * dVar23) * dVar23 -
                                                       dVar26) * (double)(float)(dVar25 * dVar23) +
                                      dVar23);
              fVar1 = (float)(-(double)(float)((double)(float)(dVar20 * dVar23) * dVar23 - dVar26) *
                              (double)(float)(dVar25 * dVar23) + dVar23);
              dVar23 = (double)(fVar3 * fVar1);
              dVar24 = (double)(fVar31 * fVar1);
              dVar21 = (double)(fVar4 * fVar1);
            }
          }
          dVar23 = (double)CollDamageMobyDirect
                                     (g_heroMobyPtr,0xc0,CONCAT44((float)dVar23,(float)dVar24),
                                      CONCAT44((float)dVar21,fVar5),CONCAT44(uStack_170,uStack_16c),
                                      CONCAT44(uStack_168,uStack_164),
                                      CONCAT44(uStack_160,uStack_15c),
                                      CONCAT44(uStack_158,uStack_154));
          if ((CHAR_ARRAY_00a1000c.piece<344,2>() == 0) && (*(short *)((int)pvVar7 + 0x16) == 0)) {
            auVar27 = ZEXT416(0xffffffff);
            auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
            auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
            auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
            auVar27 = loadVectorLeftIndexed(0x3c,0x19338c);
            auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar27 = vectorMultiplyAddFloatingPoint
                                (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                         auVar27 << 0x60,auVar28);
            auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
            auVar27 = vectorSplatHalfWord(auVar27,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
            *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
          }
        }
      }
      if (*(int *)((int)pvVar7 + 0x18) != 0) {
        dVar23 = (double)RegisterFuncForMoby(&PTR_M1038_001942f4_00708528,moby);
      }
      if (CHAR_ARRAY_00a1000c.piece<344,2>() == 0) {
        if ((*(short *)((int)pvVar7 + 0x16) == 0) &&
           (iVar15 = MB_damage(dVar23,lVar14,0x330000,0), iVar15 != 0)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
          auVar30 = loadVectorLeftIndexed(0x3c,0x19338c);
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar27 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = vectorSplatHalfWord(auVar27,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
          *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
        }
        moby->damage = -1;
        if (2 < *(short *)((int)pvVar7 + 0x14)) {
          Help_QueueMessage(STR_YOU_CAN_TURN_OFF_0x1774,0x2b);
        }
      }
      bVar10 = true;
      iVar15 = 0;
      bVar9 = true;
      do {
        iVar18 = *(int *)uVar17;
        if (-1 < iVar18) {
          if (g_MobyInstance[iVar18].oClass == GADGEBOT_ENTRANCE) {
            if (g_MobyInstance[iVar18].state == '\x02') {
              bVar10 = false;
            }
            else {
              bVar9 = false;
            }
          }
          else if (g_MobyInstance[iVar18].setByGroup == '\0') {
            bVar9 = false;
          }
        }
        iVar15 = iVar15 + 1;
        uVar17 = uVar17 + 4;
      } while (iVar15 < 4);
      if (bVar9) {
        moby->collision = (ushort *)0x0;
        moby->state = '\x02';
        iVar15 = *(int *)((int)pvVar7 + 0x10);
        if (((iVar15 != -1) && (g_SoundChannels[iVar15].pMoby == moby)) &&
           (g_SoundChannels[iVar15].state != '\0')) {
          sound_Kill(iVar15);
        }
        *(undefined4 *)((int)pvVar7 + 0x10) = 0xffffffff;
        PlayMobySound(1,0,moby);
        if ((bVar10) && (CHAR_ARRAY_00a1000c.piece<344,2>() != -1)) {
          CHAR_ARRAY_00a1000c.piece<344,2>() = CHAR_ARRAY_00a1000c.piece<344,2>() + 1;
        }
        iVar15 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<346,2>() < iVar15 / 600) {
          sVar11 = (short)(iVar15 >> 0x1f);
          CHAR_ARRAY_00a1000c.piece<346,2>() =
               ((short)(iVar15 / 600) + sVar11) -
               ((short)((short)(iVar15 / 0x2580000) + sVar11) >> 0xf);
        }
        CHAR_ARRAY_00a1000c.piece<348,4>() = CHAR_ARRAY_00a1000c.piece<348,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
  }
  else if (bVar2 < 3) {
    FastEulerToMtx1(local_150,lVar14 + 0x40);
    FastMtxScaleIdentity((double)DAT_00740050,auStack_110);
    FastVecMtx4Mul(local_150,local_150,auStack_110);
    iVar18 = 0;
    iVar15 = 0;
    do {
      FastEulerToMtx1(auStack_110,&DAT_0073ffc0 + iVar15);
      FastVecMtx4Mul(auStack_110,local_150,auStack_110);
      iVar16 = 0;
      dVar25 = 1.0;
      dVar24 = 0.0;
      dVar23 = 0.5;
      do {
        MB_randRangeSigned(dVar24,(double)(float)((double)DAT_0073ff2c * dVar23));
        uVar13 = DAT_00740064;
        uVar12 = DAT_00740060;
        MB_randRangeFloat((float)dVar24,(float)dVar25);
        uVar22 = FastLerpColor(uVar12,uVar13);
        uVar19 = MB_randRangeFloat(DAT_00740068,DAT_0074006c);
        MB_randRangeFloat((float)(longlong)DAT_00740070,(float)(longlong)DAT_00740074);
        FastDoubleToInt();
        MB_randSphere
                  ((double)(DAT_00740078 * g_FrameTime),
                   (double)(DAT_0074007c * g_FrameTime),auStack_190);
        MB_randInt(0xff);
        SpawnPart_60(uVar19,local_1a0,auStack_190,uVar22);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x14);
      iVar18 = iVar18 + 1;
      iVar15 = iVar15 + 0x10;
    } while (iVar18 < 9);
    moby->state = '\x03';
  }
  else if (bVar2 < 4) {
    DeleteMoby(moby);
  }
  return;
}


