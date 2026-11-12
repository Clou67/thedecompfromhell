// game/update/moby177.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2b4818-0x2b77c8
#include <math.h>
#include "game/update/moby177.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x02b4818 (0x1b84 bytes)
// inlined: FastRSqrt @0x2b4e28, FastRSqrt @0x2b56ac, FastRSqrt @0x2b5944, FastRSqrt @0x2b5aec
// strings: 007b7800: '=Vwp>VwP' (raw) | 007b7804: '>VwP' (raw)

void M177_002b4818(ulonglong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  MOBY_OCLASSES MVar4;
  short sVar5;
  short sVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  MobyInstance *pMVar11;
  int iVar12;
  bool bVar13;
  ulonglong uVar14;
  int iVar17;
  int iVar18;
  ulonglong uVar15;
  int iVar19;
  longlong lVar16;
  undefined2 uVar20;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong uVar21;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar22;
  uint uVar23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong unaff_r30;
  MobyInstance *pMVar28;
  MobyInstance *pMVar29;
  MobyInstance *pMVar30;
  float *pfVar31;
  float *pfVar32;
  ulonglong uVar27;
  ulonglong unaff_r31;
  MobyInstance *pMVar34;
  MobyInstance *pMVar35;
  longlong lVar33;
  float *pfVar36;
  ulonglong in_LR;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar52;
  ulonglong in_f19;
  ulonglong in_f20;
  double in_f21;
  double dVar53;
  double dVar54;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar55;
  ulonglong in_f24;
  double dVar56;
  ulonglong in_f25;
  double dVar57;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar58;
  double dVar59;
  ulonglong in_f28;
  double dVar60;
  ulonglong in_f29;
  double dVar61;
  ulonglong in_f30;
  double dVar62;
  ulonglong in_f31;
  double dVar63;
  double dVar64;
  GPiece<16> auVar65;
  GPiece<16> auVar66;
  GPiece<16> auVar67;
  GPiece<16> auVar68;
  GPiece<16> auVar69;
  float fVar70;
  float fVar71;
  float local_500 [4];
  float local_4f0 [316];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x590;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0xb4] = in_LR;
  puVar10[0xa0] = in_f14;
  puVar10[0xa1] = in_f15;
  puVar10[0xa2] = in_f16;
  puVar10[0xa3] = in_f17;
  puVar10[0xa4] = in_f18;
  puVar10[0xa5] = in_f19;
  puVar10[0xa6] = in_f20;
  puVar10[0xa7] = (ulonglong)in_f21;
  puVar10[0xa8] = in_f22;
  puVar10[0xa9] = in_f23;
  puVar10[0xaa] = in_f24;
  puVar10[0xab] = in_f25;
  puVar10[0xac] = in_f26;
  puVar10[0xad] = in_f27;
  puVar10[0xae] = in_f28;
  puVar10[0xaf] = in_f29;
  puVar10[0xb0] = in_f30;
  puVar10[0xb1] = in_f31;
  puVar10[0x90] = unaff_r16;
  puVar10[0x96] = unaff_r22;
  puVar10[0x9c] = unaff_r28;
  puVar10[0x9f] = unaff_r31;
  puVar10[0x91] = unaff_r17;
  puVar10[0x97] = unaff_r23;
  fVar71 = DAT_010a06a4;
  bVar13 = g_goldWeaponsArray.teslaClaw;
  fVar70 = DAT_007b77ec;
  pMVar11 = (MobyInstance *)param_1;
  pfVar7 = (float *)pMVar11->pVar;
  uVar21 = ZEXT48(pfVar7);
  uVar22 = (ulonglong)g_goldWeaponsArray.teslaClaw;
  dVar63 = (double)DAT_007b77d4;
  puVar10[0x9e] = unaff_r30;
  puVar10[0x9d] = unaff_r29;
  puVar10[0x9b] = unaff_r27;
  puVar10[0x9a] = unaff_r26;
  puVar10[0x99] = unaff_r25;
  puVar10[0x98] = unaff_r24;
  puVar10[0x95] = unaff_r21;
  puVar10[0x94] = unaff_r20;
  puVar10[0x93] = unaff_r19;
  puVar10[0x92] = unaff_r18;
  puVar10[0x8f] = unaff_r15;
  puVar10[0x8e] = unaff_r14;
  puVar10[0x88] = 0x3fa99999a0000000;
  dVar37 = (double)FastWrapRot(fVar71,fVar70);
  DAT_010a06a4 = (float)dVar37;
  dVar37 = (double)FastDiffRots((double)DAT_010a06a8,(double)DAT_007b77f0);
  DAT_010a06a8 = (float)dVar37;
  dVar37 = (double)FastWrapRot(DAT_010a06ac,DAT_007b7800);
  DAT_010a06ac = (float)dVar37;
  dVar37 = 0.0;
  fVar70 = pfVar7[8];
  puVar10[0x83] = 0;
  uVar23 = (uint)bVar13;
  if ((fVar70 == 0.0) || ((uVar23 != 0 && (pfVar7[0xe] == 0.0)))) {
    if (pfVar7[0xe] == 0.0) {
      if (DAT_00a49344 != (MobyInstance *)0x0) {
        dVar58 = dVar37;
        dVar60 = dVar37;
        iVar18 = 0;
        pMVar30 = DAT_00a49344;
        pMVar28 = (MobyInstance *)0x0;
        pMVar34 = (MobyInstance *)0x0;
        do {
          dVar61 = dVar58;
          dVar52 = dVar60;
          pMVar35 = pMVar34;
          pMVar29 = pMVar28;
          if ((((pMVar30 != (MobyInstance *)pfVar7[8]) && (pMVar30 != (MobyInstance *)pfVar7[0xe]))
              && (pMVar30->pClass != (MobyClass *)0x0)) &&
             ((((short)pMVar30->pClass->mode_bits == 5 &&
               (pMVar30->state != 0xfd && pMVar30->state != 0xfe)) &&
              (iVar17 = MB_GetPvarsIfMobyHasThem(pMVar30), dVar61 = dVar58,
              dVar52 = dVar60, iVar17 != 0)))) {
            fVar70 = (pMVar30->pos).y;
            fVar71 = (pMVar30->pos).x;
            fVar2 = fVar70 - pfVar7[1];
            fVar8 = fVar71 - *pfVar7;
            dVar41 = (double)SQRT(fVar8 * fVar8 + fVar2 * fVar2);
            if (dVar41 <= (double)DAT_007b77d4) {
              dVar52 = (double)GameCamera.rot.radius;
              dVar61 = (double)FUN_005e8338((double)(fVar71 - GameCamera.posX),
                                            (double)(fVar70 - GameCamera.posY));
              dVar44 = (double)FastSubRots((float)dVar52,(float)dVar61);
              dVar61 = dVar58;
              dVar52 = dVar60;
              if (dVar44 <= (double)DAT_007b77dc) {
                dVar61 = (double)FUN_005e8338((double)((pMVar30->pos).x - g_heroPosition.x),
                                              (double)((pMVar30->pos).y - g_heroPosition.y));
                dVar47 = (double)FastSubRots((float)dVar61,g_heroRotation.z);
                dVar61 = dVar58;
                dVar52 = dVar60;
                if (dVar47 <= (double)DAT_007b77d8) {
                  dVar41 = (double)(DAT_007b7858 *
                                    (float)((double)(float)((double)DAT_007b77dc - dVar44) /
                                           (double)DAT_007b77dc) +
                                   (float)((double)(float)((double)DAT_007b77d4 - dVar41) /
                                          (double)DAT_007b77d4));
                  dVar61 = dVar60;
                  dVar52 = dVar41;
                  pMVar35 = pMVar30;
                  pMVar29 = pMVar34;
                  if ((dVar41 <= dVar60) &&
                     (dVar61 = dVar58, dVar52 = dVar60, pMVar35 = pMVar34, pMVar29 = pMVar28,
                     dVar58 < dVar41)) {
                    dVar61 = dVar41;
                    pMVar29 = pMVar30;
                  }
                }
              }
            }
          }
          pMVar30 = *(MobyInstance **)((int)&DAT_00a49348 + iVar18);
          dVar58 = dVar61;
          dVar60 = dVar52;
          iVar18 = iVar18 + 4;
          pMVar28 = pMVar29;
          pMVar34 = pMVar35;
        } while (pMVar30 != (MobyInstance *)0x0);
        pMVar30 = pMVar29;
        if ((pMVar35 != (MobyInstance *)0x0) && (pMVar30 = pMVar35, pfVar7[8] == 0.0)) {
          uVar15 = puVar10[0x83];
          pfVar7[8] = (float)pMVar35;
          *(short *)(pfVar7 + 0x10) = (short)uVar15;
          PlayMobySound(1,0,pMVar11);
          pMVar30 = pMVar29;
        }
        if ((pMVar30 != (MobyInstance *)0x0) && (uVar23 != 0)) {
          fVar70 = (pMVar35->pos).y;
          fVar8 = pfVar7[1] - fVar70;
          fVar71 = (pMVar35->pos).x;
          fVar9 = *pfVar7 - fVar71;
          fVar2 = (pMVar35->pos).z;
          fVar3 = pfVar7[2] - fVar2;
          fVar8 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar8 * fVar8);
          if ((fVar8 < DAT_007b77d4) &&
             (fVar70 = fVar70 - (pMVar30->pos).y, fVar71 = fVar71 - (pMVar30->pos).x,
             fVar2 = fVar2 - (pMVar30->pos).z,
             fVar8 + SQRT(fVar2 * fVar2 + fVar71 * fVar71 + fVar70 * fVar70) < DAT_007b77d4)) {
            uVar15 = puVar10[0x83];
            pfVar7[0xe] = (float)pMVar30;
            *(short *)((int)pfVar7 + 0x42) = (short)uVar15;
          }
        }
      }
    }
    else {
      pfVar7[8] = pfVar7[0xe];
      *(undefined2 *)(pfVar7 + 0x10) = *(undefined2 *)((int)pfVar7 + 0x42);
      pfVar7[0xe] = 0.0;
      *(undefined2 *)((int)pfVar7 + 0x42) = 0;
    }
  }
  dVar58 = in_f21;
  dVar60 = in_f21;
  dVar61 = dVar37;
  dVar52 = in_f21;
  if ((MobyInstance *)pfVar7[8] != (MobyInstance *)0x0) {
    iVar18 = MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar7[8]);
    fVar70 = pfVar7[8];
    dVar60 = (double)*(float *)((int)fVar70 + 0x14);
    in_f21 = (double)*(float *)((int)fVar70 + 0x10);
    dVar58 = (double)(*(float *)((int)fVar70 + 0x18) + *(float *)(iVar18 + 0x10));
    dVar61 = (double)SQRT((float)((double)pfVar7[2] - dVar58) * (float)((double)pfVar7[2] - dVar58)
                          + (float)((double)*pfVar7 - in_f21) * (float)((double)*pfVar7 - in_f21) +
                            (float)((double)pfVar7[1] - dVar60) *
                            (float)((double)pfVar7[1] - dVar60));
    dVar63 = dVar61;
  }
  pMVar30 = (MobyInstance *)pfVar7[0xe];
  *(float *)(puVar10 + 0x82) = (float)dVar58;
  *(float *)(puVar10 + 0x81) = (float)dVar60;
  *(float *)((int)puVar10 + 0x424) = (float)dVar52;
  *(float *)(puVar10 + 0x85) = (float)dVar52;
  *(float *)(puVar10 + 0x84) = (float)dVar52;
  if (pMVar30 != (MobyInstance *)0x0) {
    *(float *)(puVar10 + 0x82) = (float)dVar58;
    *(float *)(puVar10 + 0x81) = (float)dVar60;
    iVar18 = MB_GetPvarsIfMobyHasThem(pMVar30);
    fVar8 = pfVar7[0xe];
    fVar2 = *(float *)((int)fVar8 + 0x14);
    fVar70 = (float)(dVar60 - (double)fVar2);
    fVar71 = (float)(in_f21 - (double)*(float *)((int)fVar8 + 0x10));
    fVar9 = *(float *)((int)fVar8 + 0x18) + *(float *)(iVar18 + 0x10);
    *(float *)((int)puVar10 + 0x424) = *(float *)((int)fVar8 + 0x10);
    *(float *)(puVar10 + 0x84) = fVar2;
    fVar2 = (float)(dVar58 - (double)fVar9);
    *(float *)(puVar10 + 0x85) = fVar9;
    dVar63 = (double)(float)((double)SQRT(fVar2 * fVar2 + fVar71 * fVar71 + fVar70 * fVar70) +
                            dVar61);
  }
  puVar10[0x8a] = (longlong)(int)uVar23;
  puVar10[0x87] = param_1;
  puVar10[0x86] = uVar22;
  *(float *)((int)puVar10 + 0x8c) = (float)dVar37;
  *(float *)(puVar10 + 0x11) = (float)dVar37;
  PTR_DAT_007b7824 =
       (undefined *)(((uint)(ZERO_MASK((uint)bVar13)) & 0x5ea100) + 0x207f20);
  *(float *)((int)puVar10 + 0x84) = (float)dVar37;
  *(float *)(puVar10 + 0x10) = (float)dVar37;
  dVar58 = (double)((float)(longlong)puVar10[0x8a] + 2.0);
  SetCollDamIn(dVar58,uVar14 - 0x490,param_1,0x210000,0x207f20,uVar14 - 0x510);
  MVar4 = pMVar11->oClass;
  *(undefined1 *)(puVar10 + 0x23) = 5;
  *(undefined1 *)((int)puVar10 + 0x119) = 1;
  *(MOBY_OCLASSES *)((int)puVar10 + 0x11a) = MVar4;
  *(undefined2 *)((int)pfVar7 + 0x3e) = 0x14;
  pMVar11 = g_heroMobyPtr;
  *(undefined4 *)((int)puVar10 + 0x44c) = 0x3e99999a;
  CollMobySphere(0x3fd3333340000000,uVar21,1,0x10,pMVar11,uVar14 - 0x490);
  fVar71 = pfVar7[4] - *pfVar7;
  *(float *)(puVar10 + 0x12) = fVar71;
  fVar8 = pfVar7[5] - pfVar7[1];
  *(float *)((int)puVar10 + 0x94) = fVar8;
  fVar9 = pfVar7[6] - pfVar7[2];
  fVar2 = fVar9 * fVar9 + fVar71 * fVar71 + fVar8 * fVar8;
  *(float *)(puVar10 + 0x13) = fVar9;
  fVar70 = pfVar7[7];
  *(float *)(puVar10 + 0x89) = (float)dVar58;
  *(float *)((int)puVar10 + 0x9c) = fVar70;
  dVar58 = dVar37;
  dVar60 = dVar37;
  dVar61 = dVar37;
  if ((double)SQRT(fVar2) != dVar37) {
    fVar70 = 1.0 / SQRT(fVar2);
    fVar70 = -(fVar2 * fVar70 * fVar70 - 1.0) * fVar70 * 0.5 + fVar70;
    fVar70 = -(fVar2 * fVar70 * fVar70 - 1.0) * fVar70 * 0.5 + fVar70;
    fVar70 = -(fVar2 * fVar70 * fVar70 - 1.0) * fVar70 * 0.5 + fVar70;
    dVar61 = (double)(fVar71 * fVar70);
    dVar60 = (double)(fVar8 * fVar70);
    dVar58 = (double)(fVar9 * fVar70);
  }
  *(float *)(puVar10 + 0x12) = (float)dVar61;
  *(float *)((int)puVar10 + 0x94) = (float)dVar60;
  fVar70 = pfVar7[8];
  *(float *)(puVar10 + 0x13) = (float)dVar58;
  dVar41 = (double)DAT_00969f74;
  dVar44 = (double)DAT_00969f78;
  dVar47 = (double)g_heroGravityDir;
  if ((fVar70 != 0.0) || (pfVar7[0xe] != 0.0)) {
    *(float *)((int)puVar10 + 0xbc) = (float)dVar37;
    *(float *)(puVar10 + 0x16) = (float)(dVar41 * dVar58 - (double)(float)(dVar44 * dVar60));
    *(float *)((int)puVar10 + 0xb4) = (float)(dVar44 * dVar61 - (double)(float)(dVar47 * dVar58));
    *(float *)(puVar10 + 0x17) = (float)(dVar47 * dVar60 - (double)(float)(dVar41 * dVar61));
    MB_RotateQuatAxisAngle(0.17453292,local_500,local_500);
    dVar61 = (double)*(float *)(puVar10 + 0x12);
    dVar60 = (double)*(float *)((int)puVar10 + 0x94);
    dVar58 = (double)*(float *)(puVar10 + 0x13);
  }
  DAT_010a0240 = *pfVar7;
  DAT_010a0244 = pfVar7[1];
  DAT_010a0248 = pfVar7[2];
  DAT_010a024c = pfVar7[3];
  DAT_010a0380 = *pfVar7;
  dVar63 = (double)(float)(dVar63 * (double)puVar10[0x88]);
  DAT_010a0384 = pfVar7[1];
  uVar22 = puVar10[0x83];
  DAT_010a0388 = pfVar7[2];
  *(float *)((int)puVar10 + 0x40c) = (float)in_f21;
  DAT_010a038c = pfVar7[3];
  dVar56 = (double)(float)(dVar60 * dVar63);
  dVar55 = (double)(float)(dVar61 * dVar63);
  dVar57 = (double)(float)(dVar58 * dVar63);
  dVar60 = 3.141592502593994;
  uVar26 = 1;
  dVar61 = -3.141592502593994;
  dVar41 = -0.16666656732559204;
  *(float *)((int)puVar10 + 0x404) = (float)dVar52;
  dVar52 = 0.008333025500178337;
  dVar44 = -0.0001980741071747616;
  dVar47 = 2.601886990305502e-06;
  dVar59 = 0.10000000149011612;
  puVar10[0x7f] = 0x3feb333340000000;
  auVar69 = loadVectorLeftIndexed(0x10,0x2b4798);
  *(undefined4 *)((int)puVar10 + 0x42c) = 0x3fc90fdb;
  dVar58 = 0.5;
  *(undefined4 *)(puVar10 + 0x80) = 0x3fc90fda;
  auVar69 = auVar69 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar69 = auVar69 | auVar69 << 0x20 | auVar69 << 0x40 | auVar69 << 0x60;
  puVar10[0x7e] = 0x3ff0000000000000;
  lVar16 = lVar1;
  uVar15 = uVar22;
  do {
    dVar38 = (double)FastIntToDouble(uVar26);
    iVar18 = (int)uVar26;
    puVar10[0x8a] = (longlong)iVar18;
    dVar62 = (double)((DAT_007b77e8 - DAT_007b77e4) * (float)(dVar38 * (double)puVar10[0x88]) +
                     DAT_007b77e4);
    dVar53 = (double)(longlong)puVar10[0x8a];
    fVar70 = MB_WrapRot((float)(dVar53 * (double)DAT_007b77e0 + (double)DAT_010a06a4));
    dVar39 = (double)fVar70;
    dVar38 = (double)(float)(dVar60 - dVar39);
    if (dVar39 - (double)(float)(dVar60 - dVar39) < 0.0) {
      dVar38 = dVar39;
    }
    dVar64 = (double)(float)(dVar61 - dVar39);
    if ((double)(float)(dVar61 - dVar39) - dVar38 < 0.0) {
      dVar64 = dVar38;
    }
    dVar38 = (double)(float)(dVar64 * dVar64);
    dVar42 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar64));
    dVar39 = (double)(float)(dVar38 * dVar42);
    dVar39 = (double)(float)((double)(float)(dVar38 * dVar39) * dVar47 +
                            (double)(float)(dVar39 * dVar44 +
                                           (double)(float)(dVar42 * dVar52 +
                                                          (double)(float)((double)(float)(dVar38 * 
                                                  dVar64) * dVar41 + dVar64))));
    dVar38 = (double)MB_randRangeSigned((double)DAT_010a06b0,(double)DAT_007b7818);
    lVar33 = (uVar26 & 0xfffffff) * 0x10;
    iVar17 = (int)((uVar26 & 0xffffffff) << 2);
    fVar70 = (float)(dVar62 * dVar39 + dVar38);
    iVar19 = (int)lVar33;
    fVar2 = *(float *)(iVar17 + 0x10a04c0);
    fVar71 = *(float *)((int)&DAT_010a0248 + iVar19);
    *(float *)(iVar17 + 0x10a04c0) = fVar70;
    dVar39 = (double)puVar10[0x7f];
    *(float *)((int)&DAT_010a0248 + iVar19) = fVar71 - fVar2;
    pfVar31 = (float *)(ZEXT48(&DAT_010a0240) + lVar33);
    dVar38 = (double)pfVar31[-3];
    dVar64 = (double)pfVar31[-4];
    dVar62 = (double)pfVar31[-2];
    fVar71 = (float)((double)(float)(dVar56 - (double)(float)((double)pfVar31[1] - dVar38)) * dVar39
                    + (double)(float)((double)pfVar31[1] - dVar38));
    fVar2 = (float)((double)(float)(dVar55 - (double)(float)((double)*pfVar31 - dVar64)) * dVar39 +
                   (double)(float)((double)*pfVar31 - dVar64));
    fVar8 = (float)((double)(float)(dVar57 - (double)(float)((double)pfVar31[2] - dVar62)) * dVar39
                   + (double)(float)((double)pfVar31[2] - dVar62));
    dVar39 = (double)SQRT(fVar8 * fVar8 + fVar2 * fVar2 + fVar71 * fVar71);
    if (dVar39 == dVar37) {
      fVar3 = pfVar31[-1];
    }
    else {
      fVar9 = (float)(dVar63 / dVar39);
      fVar3 = pfVar31[-1];
      dVar55 = (double)(fVar9 * fVar2);
      dVar56 = (double)(fVar9 * fVar71);
      dVar57 = (double)(fVar9 * fVar8);
      dVar64 = (double)(float)(dVar64 + dVar55);
      dVar38 = (double)(float)(dVar38 + dVar56);
      dVar62 = (double)(float)(dVar62 + dVar57);
    }
    *pfVar31 = (float)dVar64;
    pfVar31[1] = (float)dVar38;
    pfVar31[2] = (float)dVar62;
    pfVar31[3] = fVar3;
    fVar9 = pfVar7[8];
    *(float *)((int)&DAT_010a0248 + iVar19) = *(float *)((int)&DAT_010a0248 + iVar19) + fVar70;
    fVar70 = pfVar31[-3];
    fVar71 = *pfVar31;
    fVar2 = pfVar31[1];
    fVar8 = pfVar31[2];
    puVar10[0x7d] = (ulonglong)(double)(fVar71 - pfVar31[-4]);
    puVar10[0x7c] = (ulonglong)(double)(fVar2 - fVar70);
    if (fVar9 != 0.0) {
      if (((int)puVar10[0x86] == 0) || (pfVar7[0xe] == 0.0)) {
        dVar39 = (double)(*(float *)(puVar10 + 0x81) - fVar2);
        dVar38 = (double)(*(float *)((int)puVar10 + 0x40c) - fVar71);
        dVar62 = (double)(*(float *)(puVar10 + 0x82) - fVar8);
        dVar64 = (double)SQRT((float)(dVar62 * dVar62 +
                                     (double)(float)(dVar38 * dVar38 +
                                                    (double)(float)(dVar39 * dVar39))));
        if (dVar64 != dVar37) {
          dVar42 = dVar58;
          dVar54 = dVar64;
          if ((iVar18 != 0x13) && (dVar42 = dVar59, dVar54 = dVar63, 0xf < iVar18)) {
            dVar63 = (double)FastIntToDouble(0x13 - iVar18);
            dVar42 = dVar58;
            dVar54 = (double)(float)(dVar64 / dVar63);
          }
          dVar63 = dVar54;
          dVar64 = (double)(float)(dVar63 / dVar64);
          dVar55 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar38 - dVar55) + dVar55);
          dVar56 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar39 - dVar56) + dVar56);
          dVar57 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar62 - dVar57) + dVar57);
        }
      }
      else {
        fVar9 = *(float *)(puVar10 + 0x82);
        fVar70 = *(float *)((int)puVar10 + 0x40c);
        fVar3 = *(float *)(puVar10 + 0x81);
        if (9 < iVar18) {
          fVar9 = *(float *)(puVar10 + 0x85);
          fVar70 = *(float *)((int)puVar10 + 0x424);
          fVar3 = *(float *)(puVar10 + 0x84);
        }
        dVar62 = (double)(fVar70 - fVar71);
        dVar38 = (double)(fVar9 - fVar8);
        dVar39 = (double)(fVar3 - fVar2);
        dVar64 = (double)SQRT((float)(dVar38 * dVar38 +
                                     (double)(float)(dVar62 * dVar62 +
                                                    (double)(float)(dVar39 * dVar39))));
        if (dVar64 != dVar37) {
          if ((iVar18 == 9) || (iVar18 == 0x13)) {
            dVar42 = 0.699999988079071;
            dVar63 = dVar64;
          }
          else if (iVar18 < 10 && 4 < iVar18) {
            dVar63 = (double)FastIntToDouble(9 - iVar18);
            dVar42 = 0.699999988079071;
            dVar63 = (double)(float)(dVar64 / dVar63);
          }
          else if (iVar18 < 0xf) {
            dVar42 = 0.20000000298023224;
          }
          else {
            dVar63 = (double)FastIntToDouble(0x13 - iVar18);
            dVar42 = 0.699999988079071;
            dVar63 = (double)(float)(dVar64 / dVar63);
          }
          dVar64 = (double)(float)(dVar63 / dVar64);
          dVar55 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar62 - dVar55) + dVar55);
          dVar56 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar39 - dVar56) + dVar56);
          dVar57 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar38 - dVar57) + dVar57);
        }
      }
    }
    if (iVar18 < 10) {
      dVar42 = (double)*(float *)((int)puVar10 + 0x42c);
      dVar64 = (double)*(float *)((int)puVar10 + 0x404);
      dVar62 = (double)*(float *)(puVar10 + 0x80);
      fVar70 = MB_WrapRot((float)(dVar53 * (double)DAT_007b77f4 + (double)DAT_010a06a8));
      dVar39 = (double)fVar70;
      fVar71 = MB_WrapRot((float)(dVar53 * (double)DAT_007b7804 + (double)DAT_010a06ac));
      fVar70 = DAT_007b77f8;
      dVar53 = (double)fVar71;
      dVar38 = (double)(float)(dVar60 - dVar53);
      if (dVar53 - (double)(float)(dVar60 - dVar53) < 0.0) {
        dVar38 = dVar53;
      }
      dVar54 = (double)(float)(dVar61 - dVar53);
      if ((double)(float)(dVar61 - dVar53) - dVar38 < 0.0) {
        dVar54 = dVar38;
      }
      pfVar31[0x50] = *pfVar31;
      pfVar31[0x51] = pfVar31[1];
      pfVar31[0x52] = pfVar31[2];
      dVar53 = (double)(float)(dVar54 * dVar54);
      pfVar31[0x53] = pfVar31[3];
      dVar38 = (double)(float)(dVar53 * (double)(float)(dVar53 * dVar54));
      dVar45 = (double)(float)(dVar53 * dVar38);
      dVar54 = (double)(fVar70 * (float)((double)(float)(dVar53 * dVar45) * dVar47 +
                                        (double)(float)(dVar45 * dVar44 +
                                                       (double)(float)(dVar38 * dVar52 +
                                                                      (double)(float)((double)(float
                                                  )(dVar53 * dVar54) * dVar41 + dVar54)))));
      dVar53 = (double)MB_randRangeSigned(dVar37,dVar59);
      dVar38 = (double)(float)(dVar60 - dVar39);
      if (dVar39 - (double)(float)(dVar60 - dVar39) < 0.0) {
        dVar38 = dVar39;
      }
      dVar45 = (double)(float)(dVar61 - dVar39);
      if ((double)(float)(dVar61 - dVar39) - dVar38 < 0.0) {
        dVar45 = dVar38;
      }
      fVar71 = *(float *)((int)&DAT_010a0388 + iVar19);
      dVar38 = (double)(float)(dVar45 * dVar45);
      dVar43 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar45));
      uVar40 = puVar10[0x7c];
      uVar48 = puVar10[0x7d];
      dVar46 = (double)(float)(dVar38 * dVar43);
      fVar70 = (float)(dVar54 * (double)(float)((double)(float)(dVar38 * dVar46) * dVar47 +
                                               (double)(float)(dVar46 * dVar44 +
                                                              (double)(float)(dVar43 * dVar52 +
                                                                             (double)(float)((double
                                                  )(float)(dVar38 * dVar45) * dVar41 + dVar45)))) +
                      dVar53);
      *(float *)((int)&DAT_010a0650 + iVar17) = fVar70;
      *(float *)((int)&DAT_010a0388 + iVar19) = fVar71 + fVar70;
      dVar38 = (double)FUN_005e8338(uVar48,uVar40);
      dVar53 = (double)FastWrapRot((float)dVar38,(float)dVar42);
      fVar71 = DAT_007b77fc;
      dVar39 = (double)(float)(dVar39 + dVar62);
      dVar62 = (double)(float)(dVar53 + dVar62);
      dVar38 = (double)(float)(dVar60 - dVar53);
      if (dVar53 - (double)(float)(dVar60 - dVar53) < 0.0) {
        dVar38 = dVar53;
      }
      dVar42 = (double)(float)(dVar60 - dVar39);
      if (dVar39 - (double)(float)(dVar60 - dVar39) < 0.0) {
        dVar42 = dVar39;
      }
      dVar54 = (double)(float)(dVar60 - dVar62);
      if (dVar62 - (double)(float)(dVar60 - dVar62) < 0.0) {
        dVar54 = dVar62;
      }
      dVar45 = (double)(float)(dVar61 - dVar53);
      if ((double)(float)(dVar61 - dVar53) - dVar38 < 0.0) {
        dVar45 = dVar38;
      }
      dVar38 = (double)(float)(dVar61 - dVar39);
      if ((double)(float)(dVar61 - dVar39) - dVar42 < 0.0) {
        dVar38 = dVar42;
      }
      dVar53 = (double)(float)(dVar45 * dVar45);
      dVar39 = (double)(float)(dVar61 - dVar62);
      if ((double)(float)(dVar61 - dVar62) - dVar54 < 0.0) {
        dVar39 = dVar54;
      }
      dVar62 = (double)(float)(dVar38 * dVar38);
      dVar42 = (double)(float)(dVar39 * dVar39);
      dVar50 = (double)(float)(dVar53 * (double)(float)(dVar53 * dVar45));
      dVar54 = (double)(float)(dVar62 * (double)(float)(dVar62 * dVar38));
      dVar46 = (double)(float)(dVar42 * (double)(float)(dVar42 * dVar39));
      dVar49 = (double)(float)(dVar53 * dVar50);
      dVar51 = (double)(float)(dVar62 * dVar54);
      dVar43 = (double)(float)(dVar42 * dVar46);
      fVar2 = pfVar31[0x50];
      fVar8 = pfVar31[0x51];
      *(float *)(iVar19 + 0x10a0518) = (float)dVar37;
      *(float *)(iVar19 + 0x10a051c) = (float)dVar64;
      fVar71 = fVar71 * (float)((double)(float)(dVar62 * dVar51) * dVar47 +
                               (double)(float)(dVar51 * dVar44 +
                                              (double)(float)(dVar54 * dVar52 +
                                                             (double)(float)((double)(float)(dVar62 
                                                  * dVar38) * dVar41 + dVar38))));
      fVar70 = (float)((double)(float)(dVar42 * dVar43) * dVar47 +
                      (double)(float)(dVar43 * dVar44 +
                                     (double)(float)(dVar46 * dVar52 +
                                                    (double)(float)((double)(float)(dVar42 * dVar39)
                                                                    * dVar41 + dVar39)))) * fVar71;
      fVar71 = (float)((double)(float)(dVar53 * dVar49) * dVar47 +
                      (double)(float)(dVar49 * dVar44 +
                                     (double)(float)(dVar50 * dVar52 +
                                                    (double)(float)((double)(float)(dVar53 * dVar45)
                                                                    * dVar41 + dVar45)))) * fVar71;
      *(float *)(iVar19 + 0x10a0510) = fVar70;
      *(float *)(iVar19 + 0x10a0514) = fVar71;
    }
    else {
      pfVar31[0x52] = pfVar31[2];
      iVar17 = (int)(0x15 - uVar26);
      iVar12 = iVar17 * 0x10;
      pfVar31[0x50] = *pfVar31;
      pfVar31[0x51] = pfVar31[1];
      pfVar31[0x53] = pfVar31[3];
      *(float *)((int)&DAT_010a0388 + iVar19) =
           *(float *)((int)&DAT_010a0388 + iVar19) + (float)(&DAT_010a0650)[iVar17];
      fVar70 = *(float *)(iVar12 + 0x10a0510);
      fVar2 = pfVar31[0x50];
      fVar71 = *(float *)(iVar12 + 0x10a0514);
      fVar8 = pfVar31[0x51];
      pfVar31[0x52] = pfVar31[0x52] + *(float *)(iVar12 + 0x10a0518);
      *(undefined4 *)((int)puVar10 + 0x404) = *(undefined4 *)(iVar19 + 0x10a051c);
    }
    pfVar31[0x50] = fVar2 + fVar70;
    pfVar31[0x51] = fVar8 + fVar71;
    pMVar11 = g_heroMobyPtr;
    lVar24 = lVar16;
    if ((iVar18 == 0x13 || iVar18 == 1) ||
       (iVar18 == ((iVar18 >> 1) + (uint)(iVar18 < 0 && (uVar26 & 1) != 0)) * 2)) {
      if (iVar18 == 1) {
        dVar38 = (double)g_heroPosition.x;
        dVar39 = (double)g_heroPosition.y;
        dVar53 = (double)g_heroPosition.z;
        fVar70 = (g_heroMobyPtr->transform).v2.x;
        fVar71 = (g_heroMobyPtr->transform).v2.y;
        fVar2 = (g_heroMobyPtr->transform).v2.z;
        *(float *)((int)puVar10 + 0xcc) = g_heroPosition.w;
        *(float *)(puVar10 + 0x18) = (float)((double)fVar70 * dVar58 + dVar38);
        *(float *)((int)puVar10 + 0xc4) = (float)((double)fVar71 * dVar58 + dVar39);
        *(float *)(puVar10 + 0x19) = (float)((double)fVar2 * dVar58 + dVar53);
        uVar15 = CollLine(uVar14 - 0x4d0,uVar21,0x10,pMVar11,0);
      }
      else {
        uVar15 = CollLine(lVar33 + 0x10a0220U & 0xffffffff,
                                    ZEXT48(&DAT_010a0240) + lVar33 & 0xffffffff,0x10,puVar10[0x87],0
                                   );
      }
      fVar71 = GameCamera.posY;
      fVar70 = *pfVar31 - GameCamera.posX;
      iVar17 = (int)uVar15;
      *(float *)(puVar10 + 0x10) = fVar70;
      fVar71 = pfVar31[1] - fVar71;
      *(float *)((int)puVar10 + 0x84) = fVar71;
      dVar38 = (double)(float)(dVar37 * dVar37 + (double)(fVar70 * fVar70 + fVar71 * fVar71));
      if ((double)(float)SQRT(dVar38) != dVar37) {
        dVar39 = 1.0 / SQRT(dVar38);
        dVar53 = (double)puVar10[0x7e];
        dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - dVar53
                                                 ) * (double)(float)(dVar58 * dVar39) + dVar39);
        dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - dVar53
                                                 ) * (double)(float)(dVar58 * dVar39) + dVar39);
        fVar2 = (float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - dVar53) *
                        (double)(float)(dVar58 * dVar39) + dVar39);
        fVar70 = fVar70 * fVar2;
        fVar71 = fVar71 * fVar2;
        *(float *)(puVar10 + 0x10) = fVar70;
        *(float *)((int)puVar10 + 0x84) = fVar71;
      }
      *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
      *(undefined4 *)((int)puVar10 + 0x8c) = 0x45afdf66;
      *(float *)(puVar10 + 0x20) = fVar70;
      *(float *)((int)puVar10 + 0x104) = fVar71;
      *(undefined4 *)(puVar10 + 0x21) = 0x3f800000;
      *(undefined4 *)((int)puVar10 + 0x10c) = 0x45afdf66;
      pMVar11 = g_CollOutput.pMoby;
      if (iVar17 != 0) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          iVar19 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
          if (iVar19 == 0) {
            *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x10c);
            *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x21);
            *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x104);
            *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x20);
            *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x11c);
            *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x23);
            *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x114);
            *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x22);
            *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 300);
            *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x25);
            *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x124);
            *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x24);
            CollDamageMobyDirect
                      (pMVar11,0x40,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                       puVar10[0xd]);
          }
          else {
            if ((pMVar11->pClass != (MobyClass *)0x0) && ((short)pMVar11->pClass->mode_bits == 5)) {
              uVar15 = puVar10[0x83];
              lVar24 = lVar16 + 4;
              uVar22 = uVar22 + 1;
              *(MobyInstance **)((int)lVar16 + 0x1e0) = pMVar11;
              pMVar11->collision = (ushort *)uVar15;
              goto LAB_002b5880;
            }
            *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x10c);
            *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x21);
            *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x104);
            *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x20);
            *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x11c);
            *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x23);
            *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x114);
            *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x22);
            *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 300);
            *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x25);
            *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x124);
            *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x24);
            CollDamageMobyDirect
                      (pMVar11,0x50,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                       puVar10[0xd]);
          }
        }
        *pfVar31 = g_CollOutput.ip.x;
        pfVar31[1] = g_CollOutput.ip.y;
        pfVar31[2] = g_CollOutput.ip.z;
        pfVar31[3] = g_CollOutput.ip.w;
        fVar70 = g_CollOutput.ip.x;
        *(short *)((int)pfVar7 + 0x3e) = (short)uVar26;
        pfVar7[4] = fVar70;
        pMVar11 = g_CollOutput.pMoby;
        pfVar7[5] = g_CollOutput.ip.y;
        pfVar7[6] = g_CollOutput.ip.z;
        pfVar7[7] = g_CollOutput.ip.w;
        if ((pMVar11 == (MobyInstance *)0x0) ||
           (iVar18 = MB_HasCollPrims(pMVar11), iVar18 != 0)) {
          uVar15 = puVar10[0x83];
          pfVar7[8] = (float)uVar15;
          *(short *)(pfVar7 + 0x10) = (short)uVar15;
        }
        goto LAB_002b5890;
      }
    }
LAB_002b5880:
    iVar17 = (int)uVar15;
    uVar26 = (ulonglong)(iVar18 + 1);
    lVar16 = lVar24;
    if (0x13 < iVar18 + 1) {
LAB_002b5890:
      iVar18 = (int)uVar22;
      lVar16 = lVar1;
      while (0 < iVar18) {
        iVar18 = *(int *)((int)lVar16 + 0x1e0);
        uVar22 = uVar22 - 1;
        lVar16 = lVar16 + 4;
        *(undefined4 *)(iVar18 + 0x94) = *(undefined4 *)(*(int *)(iVar18 + 0x24) + 0x10);
        iVar18 = (int)uVar22;
      }
      if (iVar17 == 0) {
        pfVar7[4] = DAT_010a0370;
        pfVar7[5] = DAT_010a0374;
        pfVar7[6] = DAT_010a0378;
        pfVar7[7] = DAT_010a037c;
      }
      fVar71 = GameCamera.posY;
      fVar70 = pfVar7[8];
      if (((fVar70 != 0.0) && (*(short *)(pfVar7 + 0x10) == 0)) && (*(short *)(pfVar7 + 0x11) == 0))
      {
        fVar2 = *(float *)((int)fVar70 + 0x10) - GameCamera.posX;
        *(float *)(puVar10 + 0x1a) = fVar2;
        fVar71 = *(float *)((int)fVar70 + 0x14) - fVar71;
        dVar61 = (double)(float)(dVar37 * dVar37 + (double)(fVar2 * fVar2 + fVar71 * fVar71));
        dVar63 = dVar37;
        dVar60 = dVar37;
        if ((double)(float)SQRT(dVar61) != dVar37) {
          dVar63 = 1.0 / SQRT(dVar61);
          dVar60 = (double)puVar10[0x7e];
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          fVar70 = (float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 - dVar60) *
                           (double)(float)(dVar58 * dVar63) + dVar63);
          dVar60 = (double)(fVar2 * fVar70);
          dVar63 = (double)(fVar71 * fVar70);
        }
        *(float *)(puVar10 + 0x1a) = (float)dVar60;
        *(float *)((int)puVar10 + 0xd4) = (float)dVar63;
        *(undefined4 *)(puVar10 + 0x1b) = 0x3f800000;
        uVar22 = puVar10[0x87];
        *(undefined4 *)((int)puVar10 + 0xdc) = 0x45afdf66;
        SetCollDamIn
                  ((double)*(float *)(puVar10 + 0x89),uVar14 - 0x460,uVar22,0x210000,0x45afdf66,
                   uVar14 - 0x4c0);
        *(undefined1 *)(puVar10 + 0x29) = 5;
        uVar20 = *(undefined2 *)((int)uVar22 + 0xa6);
        *(undefined1 *)((int)puVar10 + 0x149) = 3;
        *(undefined2 *)((int)puVar10 + 0x14a) = uVar20;
        fVar70 = pfVar7[8];
        *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x13c);
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x27);
        *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x134);
        *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x26);
        *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x14c);
        *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x29);
        *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x144);
        *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x28);
        *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 0x15c);
        *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x2b);
        *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x154);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x2a);
        CollDamageMobyDirect
                  (fVar70,fVar70,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                   puVar10[0xd]);
        iVar18 = MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar7[8]);
        auVar65 = ZEXT416(5);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        if (iVar18 != 0) {
          auVar65 = ZEXT416(5);
          auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          if (*(short *)(iVar18 + 4) == 1) {
            auVar65 = ZEXT416(1);
            auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          }
        }
        auVar66 = vectorConvertFromSignedFixedPointWord(auVar65,0);
        auVar65 = ZEXT416(0xffffffff);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        auVar67 = vectorShiftLeftIntegerWord(auVar65,auVar65);
        auVar68 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar65 = vectorAddFloatingPoint(auVar66,auVar69);
        auVar65 = vectorMultiplyAddFloatingPoint(auVar68,auVar65,auVar67);
        auVar65 = vectorConvertToSignedFixedPointWordSaturate(auVar65,0);
        auVar65 = vectorSplatHalfWord(auVar65,1);
        uVar20 = storeVectorElementHalfWordIndexed(auVar65,0x44,uVar21);
        *(undefined2 *)(pfVar7 + 0x11) = uVar20;
      }
      fVar71 = GameCamera.posY;
      fVar70 = pfVar7[0xe];
      if (((fVar70 != 0.0) && (*(short *)((int)pfVar7 + 0x42) == 0)) &&
         (*(short *)((int)pfVar7 + 0x46) == 0)) {
        fVar2 = *(float *)((int)fVar70 + 0x10) - GameCamera.posX;
        *(float *)(puVar10 + 0x1c) = fVar2;
        fVar71 = *(float *)((int)fVar70 + 0x14) - fVar71;
        dVar61 = (double)(float)(dVar37 * dVar37 + (double)(fVar2 * fVar2 + fVar71 * fVar71));
        dVar63 = dVar37;
        dVar60 = dVar37;
        if ((double)(float)SQRT(dVar61) != dVar37) {
          dVar63 = 1.0 / SQRT(dVar61);
          dVar60 = (double)puVar10[0x7e];
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          fVar70 = (float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 - dVar60) *
                           (double)(float)(dVar58 * dVar63) + dVar63);
          dVar60 = (double)(fVar2 * fVar70);
          dVar63 = (double)(fVar71 * fVar70);
        }
        uVar22 = puVar10[0x87];
        *(float *)(puVar10 + 0x1c) = (float)dVar60;
        *(float *)((int)puVar10 + 0xe4) = (float)dVar63;
        *(undefined4 *)(puVar10 + 0x1d) = 0x3f800000;
        *(undefined4 *)((int)puVar10 + 0xec) = 0x45afdf66;
        SetCollDamIn
                  ((double)*(float *)(puVar10 + 0x89),uVar14 - 0x430,uVar22,0x210000,0x3f800000,
                   uVar14 - 0x4b0);
        *(undefined1 *)(puVar10 + 0x2f) = 5;
        uVar20 = *(undefined2 *)((int)uVar22 + 0xa6);
        *(undefined1 *)((int)puVar10 + 0x179) = 3;
        *(undefined2 *)((int)puVar10 + 0x17a) = uVar20;
        fVar70 = pfVar7[0xe];
        *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x16c);
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x2d);
        *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x164);
        *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x2c);
        *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x17c);
        *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x2f);
        *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x174);
        *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x2e);
        *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 0x18c);
        *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x31);
        *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x184);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x30);
        CollDamageMobyDirect
                  (fVar70,fVar70,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                   puVar10[0xd]);
        iVar18 = MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar7[0xe]);
        auVar65 = ZEXT416(5);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        if (iVar18 != 0) {
          auVar65 = ZEXT416(5);
          auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          if (*(short *)(iVar18 + 4) == 1) {
            auVar65 = ZEXT416(1);
            auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          }
        }
        auVar66 = vectorConvertFromSignedFixedPointWord(auVar65,0);
        auVar65 = ZEXT416(0xffffffff);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        auVar67 = vectorShiftLeftIntegerWord(auVar65,auVar65);
        auVar68 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar65 = vectorAddFloatingPoint(auVar66,auVar69);
        auVar65 = vectorMultiplyAddFloatingPoint(auVar68,auVar65,auVar67);
        auVar65 = vectorConvertToSignedFixedPointWordSaturate(auVar65,0);
        auVar65 = vectorSplatHalfWord(auVar65,1);
        uVar20 = storeVectorElementHalfWordIndexed(auVar65,0x46,uVar21);
        *(undefined2 *)((int)pfVar7 + 0x46) = uVar20;
      }
      uVar26 = puVar10[0x83];
      uVar22 = uVar26;
      uVar15 = uVar26;
      do {
        if ((int)uVar26 < 2) {
          fVar8 = *pfVar7;
          fVar2 = pfVar7[1];
          fVar71 = pfVar7[2];
          fVar70 = pfVar7[3];
          dVar63 = 0.4000000059604645;
        }
        else {
          fVar8 = pfVar7[4];
          fVar2 = pfVar7[5];
          fVar71 = pfVar7[6];
          fVar70 = pfVar7[7];
          dVar63 = dVar58;
        }
        dVar41 = (double)fVar8;
        dVar60 = (double)fVar2;
        dVar52 = (double)fVar71;
        dVar61 = (double)fVar70;
        iVar19 = FastDecTimerS16(ZEXT48(&DAT_010a0800) + uVar15 & 0xffffffff);
        iVar18 = (int)uVar15;
        iVar17 = (int)uVar22;
        if (iVar19 == 0) {
          lVar24 = uVar14 - 0x3f0;
          iVar19 = 1;
          uVar40 = ZEXT48(&DAT_010a06c0) + uVar22 & 0xffffffff;
          uVar48 = uVar22 + 0x10a06d0 & 0xffffffff;
          uVar25 = uVar40;
          lVar33 = lVar24;
          uVar27 = uVar48;
          lVar16 = lVar1;
          do {
            pfVar32 = (float *)uVar27;
            pfVar31 = (float *)uVar25;
            pfVar36 = (float *)lVar33;
            *pfVar36 = *pfVar32 - *pfVar31;
            pfVar36[1] = pfVar32[1] - pfVar31[1];
            pfVar36[2] = pfVar32[2] - pfVar31[2];
            pfVar36[3] = pfVar32[3];
            dVar63 = (double)MB_randRangeSigned(dVar37,dVar59);
            iVar12 = (int)lVar16;
            *(float *)(iVar12 + 0x1a0) = (float)((double)*(float *)(iVar12 + 0x1a0) + dVar63);
            dVar63 = (double)MB_randRangeSigned(dVar37,dVar59);
            *(float *)(iVar12 + 0x1a4) = (float)((double)*(float *)(iVar12 + 0x1a4) + dVar63);
            dVar63 = (double)MB_randRangeSigned(dVar37,dVar59);
            iVar19 = iVar19 + 1;
            lVar33 = lVar33 + 0x10;
            uVar27 = uVar27 + 0x10;
            uVar25 = uVar25 + 0x10;
            *(float *)(iVar12 + 0x1a8) = (float)((double)*(float *)(iVar12 + 0x1a8) + dVar63);
            lVar16 = lVar16 + 0x10;
          } while (iVar19 < 5);
          lVar16 = 4;
          *(float *)(&DAT_010a06c0 + iVar17) = (float)dVar41;
          *(float *)(iVar17 + 0x10a06c4) = (float)dVar60;
          *(float *)(iVar17 + 0x10a06c8) = (float)dVar52;
          *(float *)(iVar17 + 0x10a06cc) = (float)dVar61;
          sVar5 = *(short *)((int)&DAT_010a0800 + iVar18);
          do {
            pfVar31 = (float *)uVar40;
            pfVar32 = (float *)lVar24;
            pfVar36 = (float *)uVar48;
            *pfVar36 = *pfVar31 + *pfVar32;
            pfVar36[1] = pfVar31[1] + pfVar32[1];
            lVar24 = lVar24 + 0x10;
            pfVar36[2] = pfVar31[2] + pfVar32[2];
            uVar40 = uVar40 + 0x10;
            pfVar36[3] = pfVar31[3];
            uVar48 = uVar48 + 0x10;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar63 = 32.0;
          sVar6 = *(short *)((int)&DAT_010a0818 + iVar18);
          if (sVar6 < sVar5) {
            dVar60 = (double)FastIntToDouble((longlong)sVar5 - (longlong)sVar6);
            puVar10[0x8a] = (longlong)(int)(animationSpeed * 15.5);
            dVar61 = (double)FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x454));
            uVar20 = FastDoubleToInt
                               ((double)(float)((double)(float)((double)puVar10[0x7e] -
                                                               (double)(float)(dVar60 / dVar61)) *
                                               dVar63));
            *(undefined2 *)((int)&DAT_010a0808 + iVar18) = uVar20;
          }
          else {
            dVar60 = (double)FastIntToDouble((longlong)sVar6 - (longlong)sVar5);
            puVar10[0x8a] = (longlong)(int)(animationSpeed * 15.5);
            dVar61 = (double)FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x454));
            uVar20 = FastDoubleToInt
                               ((double)(float)((double)(float)((double)puVar10[0x7e] -
                                                               (double)(float)(dVar60 / dVar61)) *
                                               dVar63));
            *(undefined2 *)((int)&DAT_010a0808 + iVar18) = uVar20;
          }
        }
        else {
          auVar65 = ZEXT416(0xfffffff0);
          auVar66 = loadVectorLeftIndexed(uVar15,0x10a0810);
          auVar66 = vectorShiftRightAlgebraicWord
                              (auVar66,auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60
                              );
          auVar65 = ZEXT416(0xffffffff);
          auVar67 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          auVar65 = vectorConvertFromSignedFixedPointWord(auVar66,0);
          auVar66 = vectorShiftLeftIntegerWord(auVar67,auVar67);
          auVar67 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar40 = puVar10[0x83];
          auVar65 = vectorAddFloatingPoint(auVar65,auVar69);
          auVar65 = vectorMultiplyAddFloatingPoint(auVar67,auVar65,auVar66);
          auVar65 = vectorConvertToSignedFixedPointWordSaturate(auVar65,0);
          auVar65 = vectorSplatHalfWord(auVar65,1);
          uVar20 = storeVectorElementHalfWordIndexed(auVar65,uVar15,0x10a0800);
          *(undefined2 *)((int)&DAT_010a0800 + iVar18) = uVar20;
          *(short *)((int)&DAT_010a0808 + iVar18) = (short)uVar40;
          dVar44 = (double)MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
          dVar55 = 0.1745329201221466;
          dVar47 = (double)MB_randRangeFloat(-1.0471976,0.17453292);
          *(undefined4 *)((int)puVar10 + 0xac) = *(undefined4 *)((int)puVar10 + 0x9c);
          *(float *)(puVar10 + 0x14) = (float)((double)*(float *)(puVar10 + 0x12) * dVar63);
          *(float *)((int)puVar10 + 0xa4) =
               (float)((double)*(float *)((int)puVar10 + 0x94) * dVar63);
          *(float *)(puVar10 + 0x15) = (float)((double)*(float *)(puVar10 + 0x13) * dVar63);
          MB_RotateQuatAxisAngle((float)dVar47,local_4f0,local_4f0);
          MB_RotateQuatAxisAngle((float)dVar44,local_4f0,local_4f0);
          iVar18 = 2;
          *(float *)(&DAT_010a06c0 + iVar17) = (float)dVar41;
          *(float *)(iVar17 + 0x10a06c4) = (float)dVar60;
          *(float *)(iVar17 + 0x10a06c8) = (float)dVar52;
          *(float *)(iVar17 + 0x10a06cc) = (float)dVar61;
          dVar44 = (double)puVar10[0x7e];
          uVar40 = uVar22 + 0x10a06d0 & 0xffffffff;
          uVar48 = uVar22 + 0x10a06e0 & 0xffffffff;
          *(float *)(iVar17 + 0x10a06d0) = (float)(dVar41 + (double)*(float *)(puVar10 + 0x14));
          *(float *)(iVar17 + 0x10a06d4) = (float)(dVar60 + (double)*(float *)((int)puVar10 + 0xa4))
          ;
          fVar70 = *(float *)(puVar10 + 0x15);
          *(float *)(iVar17 + 0x10a06dc) = (float)dVar61;
          *(float *)(iVar17 + 0x10a06d8) = (float)(dVar52 + (double)fVar70);
          dVar63 = 0.9599310755729675;
          do {
            fVar71 = GameCamera.posZ;
            fVar70 = GameCamera.posY;
            pfVar31 = (float *)uVar40;
            *(float *)(puVar10 + 0x1e) = *pfVar31 - GameCamera.posX;
            *(float *)((int)puVar10 + 0xf4) = pfVar31[1] - fVar70;
            *(float *)(puVar10 + 0x1f) = pfVar31[2] - fVar71;
            *(float *)((int)puVar10 + 0xfc) = pfVar31[3];
            dVar60 = (double)MB_randRangeFloat((float)dVar55,(float)dVar63);
            dVar60 = dVar60 * dVar44;
            dVar44 = -dVar44;
            MB_RotateQuatAxisAngle((float)dVar60,local_4f0,local_4f0);
            iVar18 = iVar18 + 1;
            pfVar36 = (float *)uVar48;
            *pfVar36 = *pfVar31 + *(float *)(puVar10 + 0x14);
            pfVar36[1] = pfVar31[1] + *(float *)((int)puVar10 + 0xa4);
            pfVar36[2] = pfVar31[2] + *(float *)(puVar10 + 0x15);
            uVar40 = uVar40 + 0x10;
            pfVar36[3] = pfVar31[3];
            uVar48 = uVar48 + 0x10;
          } while (iVar18 < 5);
        }
        uVar26 = uVar26 + 1;
        uVar15 = uVar15 + 2;
        uVar22 = uVar22 + 0x50;
      } while ((int)uVar26 < 4);
      dVar60 = 1.0471975803375244;
      dVar61 = (double)*(float *)((int)puVar10 + 0x44c);
      dVar63 = (double)MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
      dVar60 = (double)MB_randRangeFloat(-0.5235988,(float)dVar60);
      fVar70 = DAT_0071f408 * DAT_007b7854;
      *(undefined4 *)((int)puVar10 + 0xac) = *(undefined4 *)((int)puVar10 + 0x9c);
      *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x12) * fVar70;
      *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0x94) * fVar70;
      *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x13) * fVar70;
      MB_RotateQuatAxisAngle((float)dVar60,local_4f0,local_4f0);
      MB_RotateQuatAxisAngle((float)dVar63,local_4f0,local_4f0);
      MB_randRange(1,8);
      MB_randInt(2);
      dVar63 = (double)MB_randRangeFloat(0.2,0.6);
      dVar60 = 15.5;
      puVar10[0x8a] = (longlong)(int)(animationSpeed * 15.5);
      SpawnPart_53
                ((double)(float)(dVar63 * dVar61),dVar63,dVar37,uVar21,
                 *(undefined4 *)((int)puVar10 + 0x454));
      puVar10[0x8a] = (longlong)(int)((double)animationSpeed * dVar60);
      dVar60 = 0.15000000596046448;
      SpawnPart_53
                ((double)(float)(dVar63 * 0.15000000596046448),(double)(float)(dVar63 * dVar58),
                 dVar37,uVar21,*(undefined4 *)((int)puVar10 + 0x454));
      MB_randRange(1,8);
      MB_randInt(2);
      dVar63 = (double)MB_randRangeFloat((float)dVar60,3.0);
      puVar10[0x8a] = (longlong)(int)(animationSpeed * 12.5);
      SpawnPart_53
                ((double)(float)(dVar63 * dVar59),dVar63,dVar37,uVar21 + 0x10,
                 *(undefined4 *)((int)puVar10 + 0x454));
      return;
    }
  } while( true );
}


// 0x02b63a8 (0x244 bytes)
void M177_002b63a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined8 in_r0;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  
  pfVar12 = *(float **)(param_1 + 0x78);
  if (DAT_007b77d0 != 0) {
    fVar2 = pfVar12[5] - pfVar12[1];
    DAT_010a0240 = *pfVar12;
    fVar3 = pfVar12[4] - DAT_010a0240;
    auVar16 = loadVectorLeftIndexed(0x7850,0x7b0000);
    DAT_007b77d0 = 0;
    fVar4 = pfVar12[6] - pfVar12[2];
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    DAT_010a0824 = 0;
    auVar16 = loadVectorLeftIndexed(in_r0,0x2b639c);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar17 = vectorAddFloatingPoint
                        (auVar17,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
    auVar16 = ZEXT416(0xffffffff);
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar17,auVar16);
    fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    pfVar11 = &DAT_010a0240;
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010a0820 = storeVectorElementWordIndexed
                             (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x820,
                              0x10a0000);
    PTR_DAT_007b7824 = &DAT_007f2020;
    fVar1 = 0.0;
    DAT_010a0244 = pfVar12[1];
    DAT_010a0248 = pfVar12[2];
    DAT_010a024c = pfVar12[3];
    lVar15 = 0x13;
    puVar14 = &DAT_010a04c4;
    puVar13 = &DAT_010a0654;
    pfVar12 = (float *)&DAT_010a0250;
    fVar6 = (DAT_007b77d4 * 0.05) / fVar5;
    puVar10 = &DAT_010a0520;
    fVar8 = fVar1;
    if (0.0 - fVar5 < 0.0) {
      fVar8 = fVar4 * fVar6;
    }
    fVar7 = fVar1;
    if (0.0 - fVar5 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (0.0 - fVar5 < 0.0) {
      fVar1 = fVar3 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar8 = fVar4 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar1 = fVar3 * fVar6;
    }
    do {
      *pfVar12 = *pfVar11 + fVar1;
      pfVar12[1] = pfVar11[1] + fVar7;
      pfVar12[2] = pfVar11[2] + fVar8;
      pfVar9 = pfVar11 + 3;
      pfVar11 = pfVar11 + 4;
      pfVar12[3] = *pfVar9;
      *puVar14 = 0;
      puVar10[3] = 0;
      pfVar12 = pfVar12 + 4;
      puVar10[2] = 0;
      puVar14 = puVar14 + 1;
      puVar10[1] = 0;
      *puVar10 = 0;
      *puVar13 = 0;
      puVar10 = puVar10 + 4;
      puVar13 = puVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    DAT_010a0800 = 0xffff;
    DAT_010a0802 = 0xffff;
    DAT_010a0804 = 0xffff;
    DAT_010a0806 = 0xffff;
    DAT_010a0810 = 8;
    DAT_010a0818 = 4;
    DAT_010a0812 = 4;
    DAT_010a081a = 2;
    DAT_010a0814 = 8;
    DAT_010a081c = 4;
    DAT_010a0816 = 4;
    DAT_010a081e = 2;
    DAT_010a06a4 = 0;
    DAT_010a06a8 = 0;
    DAT_010a06ac = 0;
  }
  return;
}


// 0x02b6630 (0x1198 bytes)
// inlined: FastAtan2 @0x2b6944, FastAtan2 @0x2b6ba0
// strings: 00a1000c: 'None' | 002b6604: '?333_q' (raw)

/* Moby 177 */

void UpdateMoby_177(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  Vec4 *pVVar10;
  MobyInstance *moby_00;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  ushort uVar17;
  ulonglong uVar18;
  CONTROLLER_INPUT CVar20;
  int iVar21;
  float fVar22;
  MobyInstance *moby_01;
  longlong lVar19;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar19 = uVar18 - 0x130;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar18;
  puVar13[0x28] = in_LR;
  puVar13[0x24] = in_f30;
  puVar13[0x25] = in_f31;
  puVar13[0x1d] = unaff_r25;
  puVar13[0x21] = unaff_r29;
  puVar13[0x22] = unaff_r30;
  pVVar10 = (Vec4 *)moby->pVar;
  uVar29 = ZEXT48(pVVar10);
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar16 = DAT_0096ad94;
  CVar20 = g_Pad.buttonsPressedThisFrame & DAT_0096ad80;
  puVar13[0x1f] = unaff_r27;
  puVar13[0x1e] = unaff_r26;
  puVar13[0x1c] = unaff_r24;
  if ((CVar20 != 0) && (DAT_0096bd8c == '\0')) {
    pVVar10[2].y = 0.8;
  }
  uVar24 = ZEXT48(&g_heroTweakers);
  bVar15 = false;
  DAT_0072240c = 0x3f666666;
  iVar21 = Hero_GetWeaponAmmo(-1);
  if ((((HelpData.piece<1032,2>() == 0) && (CHAR_ARRAY_00a0feec.piece<208,2>() == 0)) &&
      (2 < DAT_0096bd95)) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
    Help_QueueMessage(STR_TO_USE_THE_TESLA_0x4E30,0x81);
  }
  if ((((g_Pad.downButtons & DAT_0096ad80) == 0) || (moby->state == '\0' || moby->state == '\x04')) ||
     ((DAT_0096bd8c != '\0' || (g_heroState == MOVEMENT_LOCKED)))) {
    pVVar10[2].x = 0.0;
    pVVar10[3].z = 0.0;
    *(undefined2 *)&pVVar10[4].x = 0;
    *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
  }
  else if (pVVar10[2].w == 0.0) {
    if (0 < iVar21) {
      iVar21 = FastDecTimerS16(uVar29 + 0x3c);
      if (iVar21 != 0) {
        FastDecTimerS16(uVar29 + 0x44);
        FastDecTimerS16(uVar29 + 0x46);
        hero_ConsumeAmmo(-1,1);
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        uVar24 = 0xfffffffffffff410;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar34 = loadVectorLeftIndexed(in_LR,0x2b65ec);
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
        auVar34 = vectorSplatHalfWord(auVar34,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar34,0x3c,uVar29);
        *(undefined2 *)&pVVar10[3].w = uVar11;
      }
      if (pVVar10[3].x == -NAN) {
        fVar22 = (float)CreatePointLight3
                                  (0x401e000000000000,0,(Vec4 *)&moby->pos,ZEXT48(&DAT_002b65ec),
                                   uVar24,0);
        pVVar10[3].x = fVar22;
      }
      else {
        fVar22 = pVVar10[3].y;
        puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
        if ((int)fVar22 < *(int *)((int)puVar13 + 0xcc)) {
          pVVar10[3].y = (float)((int)fVar22 + 1);
        }
      }
      fVar22 = pVVar10[2].x;
      bVar15 = true;
      if (fVar22 != 0.0) {
        fVar4 = *(float *)((int)fVar22 + 0x10) - g_heroPosition.x;
        fVar22 = *(float *)((int)fVar22 + 0x14) - g_heroPosition.y;
        fVar5 = ABS(fVar4);
        fVar3 = ABS(fVar22);
        *(float *)((int)puVar13 + 0x7c) = fVar4;
        *(float *)(puVar13 + 0x10) = fVar22;
        fVar6 = g_heroRotation.z;
        *(float *)((int)puVar13 + 0x84) = fVar5 - fVar3;
        fVar22 = 0.0;
        uVar24 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar13 + 0x7c));
        if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)(puVar13 + 0x10));
        if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar26 = uVar18 - 0x120;
          lVar27 = uVar18 - 0x88;
          lVar25 = uVar18 - 0x78;
          lVar30 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xb4) = fVar4;
          *(float *)((int)puVar13 + 0xac) = fVar4;
          *(float *)(puVar13 + 0x16) = fVar4;
          *(float *)(puVar13 + 0x15) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar5;
          *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar4;
          *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar26 + 0xa8) = *(float *)((int)lVar26 + 0x98) * fVar4 * fVar4;
            iVar21 = (int)lVar27;
            lVar26 = lVar26 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar25 = uVar18 - 0x88;
          pfVar23 = (float *)&DAT_007358e0;
          lVar26 = lVar19;
          lVar27 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar5 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar26 + 0xa8) = *(float *)((int)lVar26 + 0xa8) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
            lVar27 = lVar27 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar27 = 2;
          lVar26 = lVar19;
          do {
            iVar21 = (int)lVar26;
            iVar28 = (int)lVar25;
            lVar26 = lVar26 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar22 = fVar22 + *(float *)(iVar21 + 0xa8) + *(float *)(iVar28 + 4) +
                     *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar22 = (fVar22 + 0.7853982) * fVar8 + fVar3;
        }
        dVar31 = (double)FastSubRots(fVar6,fVar22);
        if (((2.0943000316619873 < dVar31) ||
            (fVar22 = pVVar10[2].x, *(char *)((int)fVar22 + 0x31) == '\0')) ||
           (fVar4 = *(float *)((int)fVar22 + 0x14) - g_heroPosition.y,
           fVar5 = *(float *)((int)fVar22 + 0x10) - g_heroPosition.x,
           fVar22 = *(float *)((int)fVar22 + 0x18) - g_heroPosition.z,
           20.0 < SQRT(fVar22 * fVar22 + fVar5 * fVar5 + fVar4 * fVar4))) {
          pVVar10[2].x = 0.0;
          *(undefined2 *)&pVVar10[4].x = 0;
        }
      }
      moby_01 = (MobyInstance *)pVVar10[3].z;
      if (moby_01 != (MobyInstance *)0x0) {
        fVar22 = (moby_01->pos).x - g_heroPosition.x;
        fVar4 = (moby_01->pos).y - g_heroPosition.y;
        fVar5 = ABS(fVar22);
        fVar3 = ABS(fVar4);
        *(float *)(puVar13 + 0xe) = fVar22;
        *(float *)((int)puVar13 + 0x74) = fVar4;
        fVar6 = g_heroRotation.z;
        *(float *)(puVar13 + 0xf) = fVar5 - fVar3;
        fVar22 = 0.0;
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar13 + 0xe));
        if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)((int)puVar13 + 0x74));
        if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar26 = uVar18 - 0x120;
          lVar25 = uVar18 - 0x98;
          lVar27 = uVar18 - 0xa8;
          lVar30 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x94) = fVar4;
          *(float *)((int)puVar13 + 0x8c) = fVar4;
          *(float *)(puVar13 + 0x12) = fVar4;
          *(float *)(puVar13 + 0x11) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar5;
          *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar4;
          *(float *)((int)puVar13 + 0x94) = *(float *)((int)puVar13 + 0x94) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar26 + 0x88) = *(float *)((int)lVar26 + 0x78) * fVar4 * fVar4;
            iVar21 = (int)lVar27;
            lVar27 = lVar27 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar25 = uVar18 - 0xa8;
          pfVar23 = (float *)&DAT_007358e0;
          lVar26 = lVar19;
          lVar27 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar5 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar26 + 0x88) = *(float *)((int)lVar26 + 0x88) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
            lVar27 = lVar27 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar26 = 2;
          do {
            iVar21 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            iVar28 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            fVar22 = fVar22 + *(float *)(iVar21 + 0x88) + *(float *)(iVar28 + 4) +
                     *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc);
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          fVar22 = (fVar22 + 0.7853982) * fVar8 + fVar3;
        }
        dVar31 = (double)FastSubRots(fVar6,fVar22);
        if (((2.0943000316619873 < dVar31) ||
            (moby_01 = (MobyInstance *)pVVar10[3].z, moby_01->enabled == '\0')) ||
           (fVar22 = (moby_01->pos).y - g_heroPosition.y,
           fVar4 = (moby_01->pos).x - g_heroPosition.x, fVar5 = (moby_01->pos).z - g_heroPosition.z,
           20.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar22 * fVar22))) {
          moby_01 = (MobyInstance *)0x0;
          pVVar10[3].z = 0.0;
          *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
        }
      }
      fVar22 = (moby->pos).x;
      pVVar10->x = fVar22;
      fVar4 = (moby->pos).y;
      pVVar10->y = fVar4;
      fVar5 = (moby->pos).z;
      pVVar10->z = fVar5;
      fVar3 = (moby->pos).w;
      pVVar10->w = fVar3;
      pVVar10[1].x = fVar22;
      fVar5 = fVar5 + 0.7;
      moby_00 = (MobyInstance *)pVVar10[2].x;
      pVVar10[1].y = fVar4;
      pVVar10[1].w = fVar3;
      pVVar10->z = fVar5;
      pVVar10[1].z = fVar5;
      if ((moby_00 == (MobyInstance *)0x0) || (*(short *)&pVVar10[4].x == 0)) {
        *(undefined2 *)&pVVar10[2].z = 0;
      }
      else {
        iVar28 = 0x32;
        *(short *)&pVVar10[2].z = *(short *)&pVVar10[2].z + 1;
        iVar21 = MB_GetPvarsIfMobyHasThem(moby_00);
        sVar9 = *(short *)&pVVar10[2].z;
        moby_01 = (MobyInstance *)pVVar10[3].z;
        if ((iVar21 != 0) && (*(short *)(iVar21 + 4) == 1)) {
          iVar28 = 5;
        }
        puVar13[0x19] = (longlong)iVar28;
        puVar13[0x19] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x19] + 0.5));
        if (*(int *)((int)puVar13 + 0xcc) <= (int)sVar9) {
          pVVar10[2].x = 0.0;
          *(undefined2 *)&pVVar10[4].x = 0;
        }
      }
      if ((moby_01 == (MobyInstance *)0x0) || (*(short *)((int)&pVVar10[4].x + 2) == 0)) {
        *(undefined2 *)((int)&pVVar10[2].z + 2) = 0;
      }
      else {
        iVar28 = 0x32;
        *(short *)((int)&pVVar10[2].z + 2) = *(short *)((int)&pVVar10[2].z + 2) + 1;
        iVar21 = MB_GetPvarsIfMobyHasThem(moby_01);
        sVar9 = *(short *)((int)&pVVar10[2].z + 2);
        if ((iVar21 != 0) && (*(short *)(iVar21 + 4) == 1)) {
          iVar28 = 5;
        }
        puVar13[0x19] = (longlong)iVar28;
        puVar13[0x19] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x19] + 0.5));
        if (*(int *)((int)puVar13 + 0xcc) <= (int)sVar9) {
          pVVar10[3].z = 0.0;
          *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
        }
      }
      dVar33 = (double)pVVar10[2].y;
      dVar32 = (double)(DAT_0071f408 * 0.07);
      dVar31 = (double)FastIntToDouble(g_goldWeaponsArray.teslaClaw);
      bVar1 = g_heroState == FIRST_PERSON_VIEW;
      fVar22 = (float)(dVar32 * (double)((float)(dVar31 * 6.0 + 12.0) - pVVar10[2].y) + dVar33);
      pVVar10[2].y = fVar22;
      fVar5 = GameCamera.orientMtx.forward.y;
      fVar4 = GameCamera.orientMtx.forward.x;
      if (bVar1) {
        fVar6 = GameCamera.orientMtx.forward.z * 1.2 + (moby->pos).z;
        pVVar10->z = fVar6;
        fVar3 = fVar4 * 1.2 + g_heroPosition.x;
        pVVar10->x = fVar3;
        fVar4 = fVar5 * 1.2 + g_heroPosition.y;
        pVVar10->y = fVar4;
        fVar7 = GameCamera.orientMtx.forward.z;
        fVar5 = GameCamera.orientMtx.forward.x * fVar22;
        fVar8 = GameCamera.orientMtx.forward.y * fVar22;
        pVVar10[1].w = pVVar10->w;
        pVVar10[1].x = fVar5 + fVar3;
        pVVar10[1].y = fVar8 + fVar4;
        pVVar10[1].z = fVar7 * fVar22 + fVar6;
      }
      else if (DAT_0096bfa8 == 1) {
        GetBonePosition(moby,0,uVar29);
        fVar22 = pVVar10[2].y;
        fVar4 = (moby->transform).v1.x;
        fVar5 = (moby->transform).v1.y;
        fVar3 = (moby->transform).v1.z;
        fVar6 = pVVar10->x;
        fVar8 = pVVar10->y;
        fVar7 = pVVar10->z;
        pVVar10[1].w = pVVar10->w;
        pVVar10[1].x = fVar6 + -(fVar22 * fVar4);
        pVVar10[1].y = fVar8 + -(fVar22 * fVar5);
        pVVar10[1].z = fVar7 + -(fVar22 * fVar3);
      }
      else {
        GetBonePosition(moby,0,uVar29);
        fVar7 = 0.0;
        fVar22 = pVVar10->x;
        fVar4 = pVVar10->y;
        fVar5 = pVVar10->z;
        fVar3 = pVVar10->w;
        fVar14 = SQRT(DAT_0096a328 * DAT_0096a328 +
                      DAT_0096a320 * DAT_0096a320 + DAT_0096a324 * DAT_0096a324);
        fVar6 = fVar7;
        fVar8 = fVar7;
        if (fVar14 != 0.0) {
          fVar7 = pVVar10[2].y / fVar14;
          fVar6 = DAT_0096a320 * fVar7;
          pVVar10[1].x = fVar6;
          fVar8 = DAT_0096a324 * fVar7;
          pVVar10[1].y = fVar8;
          fVar7 = DAT_0096a328 * fVar7;
        }
        pVVar10[1].w = fVar3;
        pVVar10[1].x = fVar22 + fVar6;
        pVVar10[1].y = fVar4 + fVar8;
        pVVar10[1].z = fVar5 + fVar7;
      }
      M177_002b63a8(moby);
      M177_002b4818(moby);
      RegisterPostDraw(&PTR_M1772_002b8520_0070aec8,moby);
      iVar21 = IsMobyPlayingSound(moby,(int)pVVar10[4].z);
      if (iVar21 == 0) {
        fVar22 = (float)PlayMobySound(4,4,moby);
        pVVar10[4].z = fVar22;
      }
      goto LAB_002b71a4;
    }
    pVVar10[2].x = 0.0;
    pVVar10[3].z = 0.0;
    *(undefined2 *)&pVVar10[4].x = 0;
    *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
    *(undefined2 *)&pVVar10[4].y = 0;
    *(undefined2 *)((int)&pVVar10[4].y + 2) = 0;
  }
  DAT_007b77d0 = 1;
  if (0 < (int)pVVar10[3].y) {
    pVVar10[3].y = (float)((int)pVVar10[3].y + -1);
  }
  fVar22 = pVVar10[4].z;
  if (((fVar22 != -NAN) && (g_SoundChannels[(int)fVar22].pMoby == moby)) &&
     (g_SoundChannels[(int)fVar22].state != '\0')) {
    sound_Kill((int)fVar22);
  }
  pVVar10[4].z = -NAN;
LAB_002b71a4:
  fVar22 = pVVar10[2].x;
  if (((fVar22 == 0.0) ||
      (*(char *)((int)fVar22 + 0x20) == -3 || *(char *)((int)fVar22 + 0x20) == -2)) ||
     ((*(ushort *)((int)fVar22 + 0x34) & 0x1000) == 0)) {
    *(undefined2 *)&pVVar10[4].x = 1;
  }
  fVar22 = pVVar10[3].z;
  if (((fVar22 == 0.0) ||
      (*(char *)((int)fVar22 + 0x20) == -3 || *(char *)((int)fVar22 + 0x20) == -2)) ||
     ((*(ushort *)((int)fVar22 + 0x34) & 0x1000) == 0)) {
    *(undefined2 *)((int)&pVVar10[4].x + 2) = 1;
  }
  iVar21 = DAT_00969e9c;
  fVar22 = animationSpeed;
  uVar2 = moby->state;
  if (uVar2 != '\x04') {
    if (uVar2 == '\x03') {
      if (((g_Pad.unk0a8 & DAT_0096ad80) != 0 || !bVar15) || (DAT_0096bd8c != '\0')) {
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = loadVectorLeftIndexed(0x1bc,0x969ce0);
        puVar13[0x19] = (longlong)(int)(animationSpeed * 70.5);
        if ((*(int *)((int)puVar13 + 0xcc) < iVar21) && (CHAR_ARRAY_00a0feec.piece<208,2>() != -1)) {
          CHAR_ARRAY_00a0feec.piece<208,2>() = CHAR_ARRAY_00a0feec.piece<208,2>() + 1;
        }
        puVar13[0x19] = (longlong)g_GameFrameCount;
        uVar11 = CHAR_ARRAY_00a0feec.piece<210,2>();
        puVar13[0x19] = (longlong)(int)(fVar22 * ((float)(longlong)puVar13[0x19] + 0.5));
        iVar21 = *(int *)((int)puVar13 + 0xcc);
        if ((int)(uint)(ushort)uVar11 < iVar21 / 600) {
          sVar9 = (short)(iVar21 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<210,2>() =
               ((short)(iVar21 / 600) + sVar9) -
               ((short)((short)(iVar21 / 0x2580000) + sVar9) >> 0xf);
        }
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        CHAR_ARRAY_00a0feec.piece<212,4>() = CHAR_ARRAY_00a0feec.piece<212,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
        auVar36 = loadVectorLeftIndexed(0x38,0x2b65ec);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar34 = ZEXT416(0xfffffff8);
        auVar37 = loadVectorLeftIndexed(0x20b5,0x969ce0);
        auVar34 = vectorShiftRightWord
                            (auVar37,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        auVar37.piece<0,4>() = auVar34.piece<0,4>() + 1;
        auVar37.piece<8,8>() = auVar34.piece<8,8>();
        auVar37.piece<4,4>() = auVar34.piece<4,4>() + 1;
        auVar39.piece<0,8>() = auVar37.piece<0,8>();
        auVar39.piece<12,4>() = auVar34.piece<12,4>();
        auVar39.piece<8,4>() = auVar34.piece<8,4>() + 1;
        auVar38.piece<0,12>() = auVar39.piece<0,12>();
        auVar38.piece<12,4>() = auVar39.piece<12,4>() + 1;
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar34 = vectorCompareGreaterThanSignedWord(auVar34,auVar35);
        auVar34 = vectorLogicalAnd(auVar38,auVar34);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xff;
        DAT_0096bd95 = storeVectorElementByteIndexed
                                 (auVar34 | auVar34 << 8 | auVar34 << 0x10 | auVar34 << 0x18 |
                                  auVar34 << 0x20 | auVar34 << 0x28 | auVar34 << 0x30 |
                                  auVar34 << 0x38 | auVar34 << 0x40 | auVar34 << 0x48 |
                                  auVar34 << 0x50 | auVar34 << 0x58 | auVar34 << 0x60 |
                                  auVar34 << 0x68 | auVar34 << 0x70 | auVar34 << 0x78,0x20b5,
                                  0x969ce0);
        pVVar10[2].x = 0.0;
        pVVar10[3].z = 0.0;
        *(undefined2 *)&pVVar10[4].x = 0;
        *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
        pVVar10[2].y = 0.0;
        Hero_EndFiringAnim();
        moby->state = '\x01';
      }
    }
    else if (uVar2 == '\x01') {
      FastDecTimerS32(uVar29 + 0x2c);
      if (bVar15) {
        Hero_PlayFiringAnim();
        moby->state = '\x03';
      }
      if (((g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0) && (DAT_0096bd8c == '\0')) {
        if (bVar15) {
          if (DAT_00a0fdbc != -1) {
            DAT_00a0fdbc = DAT_00a0fdbc + 1;
          }
          puVar13[0x19] = (longlong)g_GameFrameCount;
          uVar17 = DAT_00a0fdbe;
          puVar13[0x19] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x19] + 0.5));
          iVar21 = *(int *)((int)puVar13 + 0xcc);
          if ((int)(uint)uVar17 < iVar21 / 600) {
            sVar9 = (short)(iVar21 >> 0x1f);
            DAT_00a0fdbe = ((short)(iVar21 / 600) + sVar9) -
                           ((short)((short)(iVar21 / 0x2580000) + sVar9) >> 0xf);
          }
          DAT_00a0fdc0 = DAT_00a0fdc0 | 1 << (Level & 0x3f) | 0x80000000;
          Hero_PlayFiringAnim();
          moby->state = '\x03';
        }
        else {
          pVVar10[2].x = 0.0;
          pVVar10[3].z = 0.0;
          *(undefined2 *)&pVVar10[4].x = 0;
          *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
          moby->state = '\x01';
          iVar21 = PlayMobySound(0,0,moby);
          Hero_EndFiringAnim(iVar21);
        }
      }
    }
    else if (uVar2 == '\0') {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x30,0x2b65ec);
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x2c,uVar29)
      ;
      *(undefined4 *)((uint)&pVVar10[2].w & 0xfffffffc) = uVar12;
      fVar22 = (float)CreatePointLight3(0,0,pVVar10,0x2c,ZEXT48(&DAT_002b65ec),0);
      pVVar10[3].x = fVar22;
      DAT_007b77d0 = 1;
      moby->state = '\x01';
      pVVar10[3].z = 0.0;
      pVVar10[2].x = 0.0;
      *(undefined2 *)&pVVar10[4].x = 0;
      *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
      *(undefined2 *)((int)&pVVar10[3].w + 2) = 0x14;
      pVVar10[4].z = -NAN;
      *(undefined2 *)((int)&pVVar10[4].y + 2) = 0;
      *(undefined2 *)&pVVar10[4].y = 0;
    }
  }
  if (pVVar10[3].x != -NAN) {
    auVar34 = ZEXT416(0xffffffff);
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = ZEXT416(0xffffffff);
    auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = ZEXT416(0xffffffff);
    auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar34 = loadVectorLeftIndexed(0x3c,0x2b65ec);
    auVar35 = loadVectorLeftIndexed(0x640,0x969ce0);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar38 = loadVectorLeftIndexed(0x644,0x969ce0);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar36);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar37);
    auVar38 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar36 = loadVectorLeftIndexed(0x648,0x969ce0);
    auVar39 = loadVectorLeftIndexed(0x660,0x969ce0);
    auVar40 = loadVectorLeftIndexed(0x664,0x969ce0);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar38);
    auVar38 = loadVectorLeftIndexed(0x668,0x969ce0);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar34,auVar35);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar34,auVar37);
    auVar39 = loadVectorLeftIndexed(0x80,0x969ce0);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar36);
    auVar36 = loadVectorLeftIndexed(0x84,0x969ce0);
    auVar38 = loadVectorLeftIndexed(0x88,0x969ce0);
    auVar35 = vectorAddFloatingPoint(auVar39,auVar35);
    auVar37 = vectorAddFloatingPoint(auVar36,auVar37);
    fVar22 = pVVar10[3].x;
    lVar19 = ZEXT48(PointLights) + (longlong)((int)pVVar10[3].x << 5);
    auVar36 = vectorAddFloatingPoint(auVar38,auVar34);
    lVar26 = ZEXT48(PointLights) + (longlong)((int)fVar22 << 5);
    lVar27 = ZEXT48(PointLights) + (longlong)((int)fVar22 << 5);
    auVar34 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x10,lVar19);
    *(undefined4 *)((int)lVar19 + 0x10) = uVar12;
    auVar34 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x14,lVar26);
    *(undefined4 *)((int)lVar26 + 0x14) = uVar12;
    fVar4 = pVVar10[3].y;
    uVar12 = storeVectorElementWordIndexed
                       (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x18,lVar27);
    *(undefined4 *)((int)lVar27 + 0x18) = uVar12;
    PointLights[(int)fVar22].pos.w = 7.5;
    dVar31 = (double)FastIntToDouble(fVar4);
    fVar4 = pVVar10[3].x;
    fVar22 = (float)(dVar31 / (double)(longlong)(animationSpeed * 10.5));
    PointLights[(int)fVar4].color.z = fVar22;
    PointLights[(int)fVar4].color.y = fVar22 * 0.7;
    PointLights[(int)fVar4].color.x = PointLights[(int)fVar4].color.y;
    if (iVar16 != 3) {
      return;
    }
    if (pVVar10[3].x != -NAN) {
      DeletePointLight(pVVar10[3].x);
      pVVar10[3].x = -NAN;
    }
  }
  if ((iVar16 == 3) && (pVVar10[3].x == -NAN)) {
    moby->state = '\x04';
  }
  return;
}


