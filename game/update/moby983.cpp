// game/update/moby983.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x4c84b4-0x4caa88
#include "game/update/moby983.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "game/update/moby177.h"
#include "game/update/moby1898.h"
#include "idol/fastfunc.h"

// 0x04c84b4 (0x14 bytes)
void M983_004c84b4(void)

{
  DAT_008f4eec = 0x10000;
  return;
}


// 0x04c8510 (0x86c bytes)
void M983_004c8510(MobyInstance *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  float local_120 [4];
  GPiece<16> local_110;
  float afStack_100 [4];
  GPiece<40> local_f0;
  
  uVar3.piece<0,4>() = (param_1->pos).x;
  uVar3.piece<4,4>() = (param_1->pos).y;
  uVar4.piece<0,4>() = (param_1->pos).z;
  uVar4.piece<4,4>() = (param_1->pos).w;
  FUN_002d1440(uVar3,uVar4,(int)(animationSpeed * 30.5),0xffffffff80806060,&DAT_00801010);
  sound_MobyPlay_oClass(0x10,0,param_1,0x58e);
  iVar7 = 0;
  if (0 < DAT_008f50c4) {
    dVar11 = -0.3490658402442932;
    dVar12 = 0.3490658402442932;
    dVar13 = 0.800000011920929;
    dVar14 = 1.2000000476837158;
    dVar15 = 0.5;
    do {
      dVar8 = (double)MB_randRangeFloat((float)dVar11,(float)dVar12);
      dVar9 = (double)MB_randRot();
      dVar10 = (double)MB_randRangeFloat(DAT_008f50c8,DAT_008f50cc);
      MB_SphericalToVector
                ((float)(dVar10 * (double)g_FrameTime),(float)dVar9,(float)dVar8,local_120
                );
      MB_randRangeFloat((float)dVar13,(float)dVar14);
      dVar8 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
      uVar2 = DAT_008f50d4;
      uVar1 = DAT_008f50d0;
      uVar3 = FastDoubleToInt
                        ((double)(float)((double)(longlong)
                                                 (animationSpeed *
                                                 (float)((double)(longlong)DAT_008f50d8 + dVar15)) *
                                        dVar8));
      uVar4 = FastDoubleToInt
                        ((double)(float)((double)(longlong)
                                                 (animationSpeed *
                                                 (float)((double)(longlong)DAT_008f50dc + dVar15)) *
                                        dVar8));
      uVar5 = FastDoubleToInt
                        ((double)(float)((double)(longlong)
                                                 (animationSpeed *
                                                 (float)((double)(longlong)DAT_008f50e0 + dVar15)) *
                                        dVar8));
      SpawnPart_2(&param_1->pos,local_120,local_110,uVar1,uVar2,uVar3,uVar4,uVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_008f50c4);
  }
  iVar7 = 0;
  if (0 < DAT_008f50f0) {
    dVar11 = 1.0471975803375244;
    dVar12 = 1.3962633609771729;
    dVar13 = 0.0;
    dVar14 = 400000.0;
    do {
      dVar15 = (double)MB_randRangeFloat(DAT_008f50f4,DAT_008f50f8);
      dVar9 = (double)(float)(dVar15 * (double)g_FrameTime);
      dVar15 = (double)MB_randRangeFloat((float)dVar11,(float)dVar12);
      dVar8 = (double)MB_randRot();
      MB_SphericalToVector((float)dVar9,(float)dVar8,(float)dVar15,afStack_100);
      MB_randRot();
      MB_randRangeFloat((float)dVar13,DAT_008f5140);
      MB_randRangeFloat((float)dVar13,DAT_008f5140);
      lVar6 = MB_randInt(6);
      uVar1 = *(undefined4 *)(&DAT_008f50fc + (int)(lVar6 << 2));
      lVar6 = MB_randInt(6);
      uVar2 = *(undefined4 *)(&DAT_008f5114 + (int)(lVar6 << 2));
      dVar15 = (double)(float)((double)DAT_008f512c * dVar14);
      MB_randRange((double)DAT_008f512c,DAT_008f5130,DAT_008f5134);
      MB_randRange(DAT_008f5138,DAT_008f513c);
      SpawnPart_11(dVar15,dVar9,local_f0,afStack_100,uVar1,uVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_008f50f0);
  }
  if (0 < (int)DAT_008f5144) {
    FUN_001d4d88((double)DAT_008f5144,param_1,&param_1->pos,&DAT_00a15d30,DAT_008f514c >> 0x18,
                 (int)(animationSpeed * ((float)(longlong)DAT_008f5148 + 0.5)),DAT_008f514c & 0xff,
                 DAT_008f514c >> 8 & 0xff,DAT_008f514c >> 0x10 & 0xff);
  }
  if (0 < (int)DAT_008f5150) {
    FUN_001d4d88((double)DAT_008f5150,param_1,&param_1->pos,&DAT_00a15d30,DAT_008f5158 >> 0x18,
                 (int)(animationSpeed * ((float)(longlong)DAT_008f5154 + 0.5)),DAT_008f5158 & 0xff,
                 DAT_008f5158 >> 8 & 0xff,DAT_008f5158 >> 0x10 & 0xff);
  }
  if (0 < (int)DAT_008f515c) {
    FUN_001d4d88((double)DAT_008f515c,param_1,&param_1->pos,&DAT_00a15d30,DAT_008f5164 >> 0x18,
                 (int)(animationSpeed * ((float)(longlong)DAT_008f5160 + 0.5)),DAT_008f5164 & 0xff,
                 DAT_008f5164 >> 8 & 0xff,DAT_008f5164 >> 0x10 & 0xff);
  }
  if (0 < (int)DAT_008f5168) {
    auVar16 = ZEXT416(0xffffffff);
    auVar18 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = loadVectorLeftIndexed(0x516c,0x8f0000);
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    GameCamera.offset0.amp = DAT_008f5168;
    auVar16 = loadVectorLeftIndexed(0x14,0x4c84c8);
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = vectorAddFloatingPoint
                        (auVar17,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
    auVar17 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar17);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x168,0x9513c0);
  }
  return;
}


// 0x04c8df0 (0x1300 bytes)
// inlined: FastRSqrt @0x4c8fcc, FastAtan2 @0x4c9558, FastRSqrt @0x4c9894, FastRSqrt @0x4c9934
// strings: 008f51a0: '=Vwp>VwP' (raw) | 008f51a4: '>VwP' (raw)

void M983_004c8df0(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar14;
  undefined2 uVar15;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  int iVar16;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  float *pfVar20;
  ulonglong unaff_r29;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r30;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  ulonglong unaff_r31;
  ulonglong uVar26;
  int iVar27;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar38;
  double dVar39;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar40;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar41;
  ulonglong in_f23;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  double dVar45;
  undefined8 uVar46;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  double dVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  float fVar57;
  float fVar58;
  float local_240 [8];
  float local_220 [136];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x2c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x5a] = in_LR;
  puVar9[0x46] = in_f14;
  puVar9[0x47] = in_f15;
  puVar9[0x48] = in_f16;
  puVar9[0x49] = in_f17;
  puVar9[0x4a] = in_f18;
  puVar9[0x4b] = in_f19;
  puVar9[0x4c] = in_f20;
  puVar9[0x4d] = in_f21;
  puVar9[0x4e] = in_f22;
  puVar9[0x4f] = in_f23;
  puVar9[0x50] = in_f24;
  puVar9[0x51] = in_f25;
  puVar9[0x52] = in_f26;
  puVar9[0x53] = in_f27;
  puVar9[0x54] = in_f28;
  puVar9[0x55] = in_f29;
  puVar9[0x56] = in_f30;
  puVar9[0x57] = in_f31;
  puVar9[0x3a] = unaff_r20;
  puVar9[0x35] = unaff_r15;
  puVar9[0x45] = unaff_r31;
  puVar9[0x36] = unaff_r16;
  fVar57 = DAT_010e4c54;
  dVar38 = 0.05000000074505806;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar9[0x44] = unaff_r30;
  bVar12 = g_goldWeaponsArray.teslaClaw;
  fVar58 = DAT_008f518c;
  puVar9[0x43] = unaff_r29;
  puVar9[0x42] = unaff_r28;
  puVar9[0x41] = unaff_r27;
  puVar9[0x40] = unaff_r26;
  puVar9[0x3f] = unaff_r25;
  puVar9[0x3e] = unaff_r24;
  puVar9[0x3d] = unaff_r23;
  puVar9[0x3c] = unaff_r22;
  puVar9[0x3b] = unaff_r21;
  puVar9[0x39] = unaff_r19;
  puVar9[0x38] = unaff_r18;
  puVar9[0x37] = unaff_r17;
  puVar9[0x34] = unaff_r14;
  puVar9[0x2d] = 0x3fa99999a0000000;
  dVar29 = (double)FastWrapRot(fVar57,fVar58);
  DAT_010e4c54 = (float)dVar29;
  dVar29 = (double)FastDiffRots((double)DAT_010e4c58,(double)DAT_008f5190);
  DAT_010e4c58 = (float)dVar29;
  dVar29 = (double)FastWrapRot(DAT_010e4c5c,DAT_008f51a0);
  DAT_010e4c5c = (float)dVar29;
  fVar5 = *(float *)(iVar8 + 0x10) - *(float *)(param_1 + 0x10);
  fVar58 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x10);
  fVar2 = fVar58 - *(float *)(iVar8 + 0x14);
  fVar57 = *(float *)(param_1 + 0x18);
  fVar11 = fVar57 - *(float *)(iVar8 + 0x18);
  *(float *)(puVar9 + 0x10) = fVar5;
  fVar58 = *(float *)(iVar8 + 0x14) - fVar58;
  *(float *)((int)puVar9 + 0x84) = fVar58;
  PTR_DAT_008f51c4 =
       (undefined *)(((uint)(ZERO_MASK((uint)bVar12)) & 0xffffffe0) + 0x7f2040);
  fVar57 = *(float *)(iVar8 + 0x18) - fVar57;
  *(float *)(puVar9 + 0x11) = fVar57;
  fVar10 = fVar57 * fVar57 + fVar5 * fVar5 + fVar58 * fVar58;
  *(undefined4 *)((int)puVar9 + 0x8c) = *(undefined4 *)(iVar8 + 0x1c);
  dVar52 = 0.0;
  dVar39 = (double)(float)((double)SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar2 * fVar2) * dVar38);
  dVar29 = dVar52;
  dVar38 = dVar52;
  dVar40 = dVar52;
  if (SQRT(fVar10) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar38 = (double)(fVar5 * fVar4);
    dVar29 = (double)(fVar58 * fVar4);
    dVar40 = (double)(fVar57 * fVar4);
  }
  dVar31 = (double)DAT_00969f74;
  dVar33 = (double)DAT_00969f78;
  dVar35 = (double)g_heroGravityDir;
  *(float *)(puVar9 + 0x10) = (float)dVar38;
  *(float *)((int)puVar9 + 0x84) = (float)dVar29;
  *(float *)(puVar9 + 0x11) = (float)dVar40;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0;
  *(float *)(puVar9 + 0x1b) = (float)(dVar35 * dVar29 - (double)(float)(dVar31 * dVar38));
  *(float *)(puVar9 + 0x1a) = (float)(dVar31 * dVar40 - (double)(float)(dVar33 * dVar29));
  *(float *)((int)puVar9 + 0xd4) = (float)(dVar33 * dVar38 - (double)(float)(dVar35 * dVar40));
  dVar29 = 0.1745329201221466;
  MB_RotateQuatAxisAngle(0.17453292,local_240,local_240);
  DAT_010e47f0 = *(undefined4 *)(param_1 + 0x10);
  uVar26 = 1;
  dVar38 = (double)(float)((double)*(float *)(puVar9 + 0x10) * dVar39);
  DAT_010e47f4 = *(undefined4 *)(param_1 + 0x14);
  DAT_010e47f8 = *(undefined4 *)(param_1 + 0x18);
  DAT_010e47fc = *(undefined4 *)(param_1 + 0x1c);
  dVar40 = (double)(float)((double)*(float *)((int)puVar9 + 0x84) * dVar39);
  DAT_010e4930 = *(undefined4 *)(param_1 + 0x10);
  dVar31 = (double)(float)((double)*(float *)(puVar9 + 0x11) * dVar39);
  DAT_010e4934 = *(undefined4 *)(param_1 + 0x14);
  DAT_010e4938 = *(undefined4 *)(param_1 + 0x18);
  DAT_010e493c = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)puVar9 + 0x164) = DAT_010e493c;
  puVar9[0x2e] = 1;
  do {
    dVar33 = (double)FastIntToDouble(uVar26);
    iVar27 = (int)uVar26;
    puVar9[0x2f] = (longlong)iVar27;
    dVar50 = (double)((DAT_008f5188 - DAT_008f5184) * (float)(dVar33 * (double)puVar9[0x2d]) +
                     DAT_008f5184);
    dVar45 = (double)(longlong)puVar9[0x2f];
    fVar57 = MB_WrapRot((float)(dVar45 * (double)DAT_008f5180 + (double)DAT_010e4c54));
    dVar33 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar41 = -0.16666656732559204;
    dVar42 = 0.008333025500178337;
    dVar43 = -0.0001980741071747616;
    dVar44 = 2.601886990305502e-06;
    fVar58 = 3.1415925 - fVar57;
    if (fVar57 - (3.1415925 - fVar57) < 0.0) {
      fVar58 = fVar57;
    }
    fVar5 = -3.1415925 - fVar57;
    if ((-3.1415925 - fVar57) - fVar58 < 0.0) {
      fVar5 = fVar58;
    }
    fVar4 = fVar5 * fVar5;
    fVar58 = fVar4 * fVar4 * fVar5;
    fVar57 = fVar4 * fVar58;
    dVar48 = (double)(fVar4 * fVar57 * 2.601887e-06 +
                     fVar57 * -0.0001980741 +
                     fVar58 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5);
    dVar30 = (double)MB_randRangeSigned((double)DAT_010e4c60,(double)DAT_008f51b8);
    iVar23 = iVar27 * 0x10;
    fVar58 = (float)(dVar50 * dVar48 + dVar30);
    dVar48 = (double)fVar58;
    iVar16 = (int)((uVar26 & 0xffffffff) << 2);
    fVar5 = *(float *)(&DAT_010e4a70 + iVar16);
    fVar57 = (float)(&DAT_010e47f8)[iVar27 * 4];
    *(float *)(&DAT_010e4a70 + iVar16) = fVar58;
    (&DAT_010e47f8)[iVar27 * 4] = fVar57 - fVar5;
    dVar50 = (double)MB_randRot();
    dVar30 = (double)MB_randRot();
    MB_SphericalToVector
              ((float)dVar39,(float)dVar50,(float)dVar30,(float *)(puVar9 + 0x12));
    dVar30 = 0.5;
    fVar5 = *(float *)(puVar9 + 0x13);
    dVar50 = (double)DAT_008f51fc;
    fVar58 = (float)(dVar50 * (double)(float)((double)*(float *)((int)puVar9 + 0x94) - dVar40) +
                    dVar40);
    fVar57 = (float)(dVar50 * (double)(float)((double)*(float *)(puVar9 + 0x12) - dVar38) + dVar38);
    pfVar19 = (float *)(&DAT_010e47f0 + iVar27 * 4);
    pfVar24 = (float *)(&DAT_010e47e0 + iVar27 * 4);
    *(float *)(puVar9 + 0x13) = fVar5 * 0.5;
    fVar5 = (float)(dVar50 * (double)(float)((double)(fVar5 * 0.5) - dVar31) + dVar31);
    dVar50 = (double)SQRT(fVar5 * fVar5 + fVar57 * fVar57 + fVar58 * fVar58);
    if (dVar50 == dVar52) {
      *pfVar19 = *pfVar24;
      (&DAT_010e47f4)[iVar27 * 4] = (&DAT_010e47e4)[iVar27 * 4];
      (&DAT_010e47f8)[iVar27 * 4] = *(undefined4 *)(iVar23 + 0x10e47e8);
      uVar3 = *(undefined4 *)(iVar23 + 0x10e47ec);
    }
    else {
      fVar4 = (float)(dVar39 / dVar50);
      dVar38 = (double)(fVar4 * fVar57);
      dVar40 = (double)(fVar4 * fVar58);
      dVar31 = (double)(fVar4 * fVar5);
      *pfVar19 = (float)((double)*pfVar24 + dVar38);
      (&DAT_010e47f4)[iVar27 * 4] = (float)((double)(float)(&DAT_010e47e4)[iVar27 * 4] + dVar40);
      (&DAT_010e47f8)[iVar27 * 4] = (float)((double)*(float *)(iVar23 + 0x10e47e8) + dVar31);
      uVar3 = *(undefined4 *)(iVar23 + 0x10e47ec);
    }
    (&DAT_010e47fc)[iVar27 * 4] = uVar3;
    (&DAT_010e47f8)[iVar27 * 4] = (float)((double)(float)(&DAT_010e47f8)[iVar27 * 4] + dVar48);
    *(float *)(puVar9 + 0x12) = *pfVar19 - *pfVar24;
    *(float *)((int)puVar9 + 0x94) =
         (float)(&DAT_010e47f4)[iVar27 * 4] - (float)(&DAT_010e47e4)[iVar27 * 4];
    *(float *)(puVar9 + 0x13) = (float)(&DAT_010e47f8)[iVar27 * 4] - *(float *)(iVar23 + 0x10e47e8);
    *(undefined4 *)((int)puVar9 + 0x9c) = (&DAT_010e47fc)[iVar27 * 4];
    dVar47 = (double)(*(float *)(iVar8 + 0x14) - (float)(&DAT_010e47f4)[iVar27 * 4]);
    dVar48 = (double)(*(float *)(iVar8 + 0x10) - *pfVar19);
    dVar49 = (double)(*(float *)(iVar8 + 0x18) - (float)(&DAT_010e47f8)[iVar27 * 4]);
    dVar51 = (double)SQRT((float)(dVar49 * dVar49 +
                                 (double)(float)(dVar48 * dVar48 + (double)(float)(dVar47 * dVar47))
                                 ));
    dVar50 = dVar39;
    if (dVar51 != dVar52) {
      dVar34 = dVar30;
      dVar50 = dVar51;
      if ((iVar27 != 0x13) && (dVar34 = 0.10000000149011612, dVar50 = dVar39, 0xf < iVar27)) {
        dVar39 = (double)FastIntToDouble(0x13 - iVar27);
        dVar34 = dVar30;
        dVar50 = (double)(float)(dVar51 / dVar39);
      }
      dVar39 = (double)(float)(dVar50 / dVar51);
      dVar38 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar48 - dVar38) + dVar38);
      dVar40 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar47 - dVar40) + dVar40);
      dVar31 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar49 - dVar31) + dVar31);
    }
    if (iVar27 < 10) {
      fVar58 = MB_WrapRot((float)(dVar45 * (double)DAT_008f5194 + (double)DAT_010e4c58));
      dVar48 = (double)fVar58;
      fVar57 = MB_WrapRot((float)(dVar45 * (double)DAT_008f51a4 + (double)DAT_010e4c5c));
      fVar58 = DAT_008f5198;
      dVar45 = (double)fVar57;
      pfVar24 = (float *)(&DAT_010e4930 + iVar27 * 4);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar47 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar47 = dVar39;
      }
      *pfVar24 = *pfVar19;
      (&DAT_010e4934)[iVar27 * 4] = (&DAT_010e47f4)[iVar27 * 4];
      (&DAT_010e4938)[iVar27 * 4] = (&DAT_010e47f8)[iVar27 * 4];
      dVar39 = (double)(float)(dVar47 * dVar47);
      (&DAT_010e493c)[iVar27 * 4] = (&DAT_010e47fc)[iVar27 * 4];
      dVar49 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar47));
      dVar45 = (double)(float)(dVar39 * dVar49);
      dVar47 = (double)(fVar58 * (float)((double)(float)(dVar39 * dVar45) * dVar44 +
                                        (double)(float)(dVar45 * dVar43 +
                                                       (double)(float)(dVar49 * dVar42 +
                                                                      (double)(float)((double)(float
                                                  )(dVar39 * dVar47) * dVar41 + dVar47)))));
      dVar45 = (double)MB_randRangeSigned(dVar52,0x3fb99999a0000000);
      dVar39 = (double)(float)(dVar33 - dVar48);
      if (dVar48 - (double)(float)(dVar33 - dVar48) < 0.0) {
        dVar39 = dVar48;
      }
      dVar34 = ABS((double)*(float *)(puVar9 + 0x12));
      dVar49 = ABS((double)*(float *)((int)puVar9 + 0x94));
      dVar51 = (double)(float)(dVar35 - dVar48);
      if ((double)(float)(dVar35 - dVar48) - dVar39 < 0.0) {
        dVar51 = dVar39;
      }
      *(float *)(puVar9 + 0x28) = (float)(dVar34 - dVar49);
      fVar58 = (float)(&DAT_010e4938)[iVar27 * 4];
      dVar32 = (double)(float)(dVar51 * dVar51);
      uVar26 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
      dVar36 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar51));
      dVar37 = (double)(float)(dVar32 * dVar36);
      dVar39 = dVar34;
      if ((double)*(float *)(puVar9 + 0x28) - dVar52 < 0.0) {
        dVar39 = dVar49;
      }
      fVar57 = (float)(dVar47 * (double)(float)((double)(float)(dVar32 * dVar37) * dVar44 +
                                               (double)(float)(dVar37 * dVar43 +
                                                              (double)(float)(dVar36 * dVar42 +
                                                                             (double)(float)((double
                                                  )(float)(dVar32 * dVar51) * dVar41 + dVar51)))) +
                      dVar45);
      if ((double)*(float *)(puVar9 + 0x28) - dVar52 < 0.0) {
        dVar49 = dVar34;
      }
      *(float *)((int)&DAT_010e4c00 + iVar16) = fVar57;
      (&DAT_010e4938)[iVar27 * 4] = fVar58 + fVar57;
      fVar57 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar58 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      dVar45 = dVar52;
      if (dVar52 < dVar39) {
        lVar17 = uVar13 - 0x2b0;
        lVar28 = uVar13 - 0x17c;
        lVar21 = uVar13 - 0x16c;
        lVar18 = 2;
        fVar5 = (float)(dVar49 - dVar39) / (float)(dVar49 + dVar39);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2a) = fVar5;
        *(float *)(puVar9 + 0x29) = fVar5;
        *(float *)((int)puVar9 + 0x14c) = fVar5;
        *(float *)((int)puVar9 + 0x144) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar4;
        *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar5;
        *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x144) = *(float *)((int)lVar17 + 0x134) * fVar5 * fVar5;
          iVar16 = (int)lVar28;
          lVar17 = lVar17 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar21 = uVar13 - 0x17c;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar28 = lVar21;
        do {
          fVar5 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x144) = *(float *)((int)lVar17 + 0x144) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
          lVar28 = lVar28 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar28 = 2;
        lVar17 = lVar1;
        dVar39 = dVar52;
        do {
          iVar16 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar16 + 0x144)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar45 = (double)((float)(dVar39 + 0.7853981852531433) * fVar57 + fVar58);
      }
      dVar45 = (double)FastWrapRot((float)dVar45,1.5707964);
      fVar58 = DAT_008f519c;
      dVar47 = (double)(float)(dVar48 + 1.570796251296997);
      dVar48 = (double)(float)(dVar45 + 1.570796251296997);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar49 = (double)(float)(dVar33 - dVar47);
      if (dVar47 - (double)(float)(dVar33 - dVar47) < 0.0) {
        dVar49 = dVar47;
      }
      dVar51 = (double)(float)(dVar33 - dVar48);
      if (dVar48 - (double)(float)(dVar33 - dVar48) < 0.0) {
        dVar51 = dVar48;
      }
      dVar33 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar33 = dVar39;
      }
      dVar39 = (double)(float)(dVar35 - dVar47);
      if ((double)(float)(dVar35 - dVar47) - dVar49 < 0.0) {
        dVar39 = dVar49;
      }
      dVar47 = (double)(float)(dVar33 * dVar33);
      dVar45 = (double)(float)(dVar35 - dVar48);
      if ((double)(float)(dVar35 - dVar48) - dVar51 < 0.0) {
        dVar45 = dVar51;
      }
      dVar35 = (double)(float)(dVar39 * dVar39);
      dVar48 = (double)(float)(dVar45 * dVar45);
      dVar36 = (double)(float)(dVar47 * (double)(float)(dVar47 * dVar33));
      dVar37 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar39));
      dVar51 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar45));
      dVar49 = (double)(float)(dVar35 * dVar37);
      dVar32 = (double)(float)(dVar48 * dVar51);
      dVar34 = (double)(float)(dVar47 * dVar36);
      fVar57 = *pfVar24;
      fVar5 = (float)(&DAT_010e4934)[iVar27 * 4];
      uVar3 = *(undefined4 *)((int)puVar9 + 0x164);
      *(undefined4 *)(iVar23 + 0x10e4ac8) = 0;
      *(undefined4 *)(iVar23 + 0x10e4acc) = uVar3;
      fVar58 = fVar58 * (float)((double)(float)(dVar35 * dVar49) * dVar44 +
                               (double)(float)(dVar49 * dVar43 +
                                              (double)(float)(dVar37 * dVar42 +
                                                             (double)(float)((double)(float)(dVar35 
                                                  * dVar39) * dVar41 + dVar39))));
      fVar4 = (float)((double)(float)(dVar48 * dVar32) * dVar44 +
                     (double)(float)(dVar32 * dVar43 +
                                    (double)(float)(dVar51 * dVar42 +
                                                   (double)(float)((double)(float)(dVar48 * dVar45)
                                                                   * dVar41 + dVar45)))) * fVar58;
      fVar58 = (float)((double)(float)(dVar47 * dVar34) * dVar44 +
                      (double)(float)(dVar34 * dVar43 +
                                     (double)(float)(dVar36 * dVar42 +
                                                    (double)(float)((double)(float)(dVar47 * dVar33)
                                                                    * dVar41 + dVar33)))) * fVar58;
      *(float *)(iVar23 + 0x10e4ac0) = fVar4;
      *(float *)(iVar23 + 0x10e4ac4) = fVar58;
      *pfVar24 = fVar57 + fVar4;
      (&DAT_010e4934)[iVar27 * 4] = fVar5 + fVar58;
    }
    else {
      pfVar24 = (float *)(&DAT_010e4930 + iVar27 * 4);
      iVar16 = (int)(0x15 - uVar26);
      *pfVar24 = *pfVar19;
      iVar14 = iVar16 * 0x10;
      (&DAT_010e4934)[iVar27 * 4] = (&DAT_010e47f4)[iVar27 * 4];
      (&DAT_010e4938)[iVar27 * 4] = (&DAT_010e47f8)[iVar27 * 4];
      (&DAT_010e493c)[iVar27 * 4] = (&DAT_010e47fc)[iVar27 * 4];
      (&DAT_010e4938)[iVar27 * 4] =
           (float)(&DAT_010e4938)[iVar27 * 4] + (float)(&DAT_010e4c00)[iVar16];
      *pfVar24 = *pfVar24 + *(float *)(iVar14 + 0x10e4ac0);
      (&DAT_010e4934)[iVar27 * 4] =
           (float)(&DAT_010e4934)[iVar27 * 4] + *(float *)(iVar14 + 0x10e4ac4);
      (&DAT_010e4938)[iVar27 * 4] =
           (float)(&DAT_010e4938)[iVar27 * 4] + *(float *)(iVar14 + 0x10e4ac8);
      *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)(iVar23 + 0x10e4acc);
    }
    uVar26 = (ulonglong)(iVar27 + 1);
    dVar39 = dVar50;
  } while (iVar27 + 1 < 0x14);
  fVar57 = DAT_00969f78 * *(float *)(puVar9 + 0x10) -
           g_heroGravityDir * *(float *)(puVar9 + 0x11);
  fVar58 = DAT_00969f74 * *(float *)(puVar9 + 0x11) - DAT_00969f78 * *(float *)((int)puVar9 + 0x84);
  fVar5 = g_heroGravityDir * *(float *)((int)puVar9 + 0x84) -
          DAT_00969f74 * *(float *)(puVar9 + 0x10);
  auVar56 = loadVectorLeftIndexed(8,0x4c8d7c);
  *(undefined4 *)((int)puVar9 + 0xbc) = 0;
  fVar4 = g_heroGravityDir;
  auVar56 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
  dVar31 = (double)(fVar5 * fVar5 + fVar58 * fVar58 + fVar57 * fVar57);
  dVar38 = dVar52;
  dVar39 = dVar52;
  dVar40 = dVar52;
  if ((double)(float)SQRT(dVar31) != dVar52) {
    dVar38 = 1.0 / SQRT(dVar31);
    dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                             (double)(float)(dVar30 * dVar38) + dVar38);
    dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                             (double)(float)(dVar30 * dVar38) + dVar38);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                    (double)(float)(dVar30 * dVar38) + dVar38);
    dVar40 = (double)(fVar58 * fVar2);
    dVar39 = (double)(fVar57 * fVar2);
    dVar38 = (double)(fVar5 * fVar2);
  }
  fVar58 = DAT_00969f74 * DAT_00969f74;
  *(float *)(puVar9 + 0x17) = (float)dVar38;
  fVar5 = DAT_00969f78;
  *(float *)(puVar9 + 0x16) = (float)dVar40;
  *(float *)((int)puVar9 + 0xb4) = (float)dVar39;
  uVar3 = DAT_00969f7c;
  fVar57 = DAT_00969f74;
  dVar38 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar58);
  if ((double)(float)SQRT(dVar38) == dVar52) {
    *(float *)(puVar9 + 0x18) = fVar4;
    fVar58 = DAT_00969f78;
    *(float *)((int)puVar9 + 0xc4) = fVar57;
    uVar3 = DAT_00969f7c;
    *(float *)(puVar9 + 0x19) = fVar58;
    *(undefined4 *)(puVar9 + 0x19) = 0;
    *(undefined4 *)((int)puVar9 + 0xc4) = 0;
    *(undefined4 *)(puVar9 + 0x18) = 0;
  }
  else {
    dVar39 = 1.0 / SQRT(dVar38);
    dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                             (double)(float)(dVar30 * dVar39) + dVar39);
    dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                             (double)(float)(dVar30 * dVar39) + dVar39);
    fVar58 = (float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                     (double)(float)(dVar30 * dVar39) + dVar39);
    fVar57 = DAT_00969f74 * fVar58;
    fVar5 = DAT_00969f78 * fVar58;
    *(float *)(puVar9 + 0x18) = fVar4 * fVar58;
    *(float *)((int)puVar9 + 0xc4) = fVar57;
    *(float *)(puVar9 + 0x19) = fVar5;
  }
  lVar17 = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = uVar3;
  iVar16 = 0;
  iVar27 = 0;
  do {
    if (iVar27 < 2) {
      fVar57 = *(float *)(param_1 + 0x10);
      fVar58 = *(float *)(param_1 + 0x14);
      fVar5 = *(float *)(param_1 + 0x18);
      fVar4 = *(float *)(param_1 + 0x1c);
      dVar38 = 0.4000000059604645;
    }
    else {
      fVar57 = *(float *)(iVar8 + 0x10);
      fVar58 = *(float *)(iVar8 + 0x14);
      fVar5 = *(float *)(iVar8 + 0x18);
      fVar4 = *(float *)(iVar8 + 0x1c);
      dVar38 = dVar30;
    }
    dVar35 = (double)fVar57;
    dVar33 = (double)fVar58;
    dVar31 = (double)fVar5;
    dVar40 = (double)fVar4;
    iVar14 = FastDecTimerS16(ZEXT48(&DAT_010e4db0) + lVar17 & 0xffffffff);
    dVar39 = 15.5;
    iVar23 = (int)lVar17;
    if (iVar14 == 0) {
      uVar26 = puVar9[0x2e];
      lVar18 = uVar13 - 0x1c0;
      uVar46 = 0x3fb99999a0000000;
      pfVar20 = (float *)((int)&DAT_010e4c70 + iVar16);
      pfVar25 = (float *)((int)&DAT_010e4c80 + iVar16);
      lVar21 = lVar18;
      lVar28 = lVar1;
      pfVar19 = pfVar25;
      pfVar24 = pfVar20;
      do {
        pfVar22 = (float *)lVar21;
        *pfVar22 = *pfVar19 - *pfVar24;
        pfVar22[1] = pfVar19[1] - pfVar24[1];
        pfVar22[2] = pfVar19[2] - pfVar24[2];
        pfVar22[3] = pfVar19[3];
        dVar38 = (double)MB_randRangeSigned(dVar52,uVar46);
        iVar14 = (int)lVar28;
        *(float *)(iVar14 + 0x100) = (float)((double)*(float *)(iVar14 + 0x100) + dVar38);
        dVar38 = (double)MB_randRangeSigned(dVar52,uVar46);
        *(float *)(iVar14 + 0x104) = (float)((double)*(float *)(iVar14 + 0x104) + dVar38);
        dVar38 = (double)MB_randRangeSigned(dVar52,uVar46);
        uVar26 = uVar26 + 1;
        lVar21 = lVar21 + 0x10;
        pfVar19 = pfVar19 + 4;
        pfVar24 = pfVar24 + 4;
        *(float *)(iVar14 + 0x108) = (float)((double)*(float *)(iVar14 + 0x108) + dVar38);
        lVar28 = lVar28 + 0x10;
      } while ((int)uVar26 < 5);
      lVar28 = 4;
      *(float *)((int)&DAT_010e4c70 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010e4c74 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010e4c78 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010e4c7c + iVar16) = (float)dVar40;
      sVar6 = *(short *)((int)&DAT_010e4db0 + iVar23);
      do {
        pfVar19 = (float *)lVar18;
        *pfVar25 = *pfVar20 + *pfVar19;
        pfVar25[1] = pfVar20[1] + pfVar19[1];
        lVar18 = lVar18 + 0x10;
        pfVar25[2] = pfVar20[2] + pfVar19[2];
        pfVar19 = pfVar20 + 3;
        pfVar20 = pfVar20 + 4;
        pfVar25[3] = *pfVar19;
        pfVar25 = pfVar25 + 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar38 = 32.0;
      sVar7 = *(short *)((int)&DAT_010e4dc8 + iVar23);
      if (sVar7 < sVar6) {
        dVar40 = (double)FastIntToDouble((longlong)sVar6 - (longlong)sVar7);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010e4db8 + iVar23) = uVar15;
      }
      else {
        dVar40 = (double)FastIntToDouble((longlong)sVar7 - (longlong)sVar6);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010e4db8 + iVar23) = uVar15;
      }
    }
    else {
      auVar53 = ZEXT416(0xfffffff0);
      auVar54 = loadVectorLeftIndexed(lVar17,0x10e4dc0);
      auVar54 = vectorShiftRightAlgebraicWord
                          (auVar54,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
      auVar53 = ZEXT416(0xffffffff);
      auVar55 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      auVar53 = vectorConvertFromSignedFixedPointWord(auVar54,0);
      auVar54 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar53 = vectorAddFloatingPoint(auVar53,auVar56);
      auVar53 = vectorMultiplyAddFloatingPoint(auVar55,auVar53,auVar54);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      auVar53 = vectorSplatHalfWord(auVar53,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar53,lVar17,0x10e4db0);
      *(undefined2 *)((int)&DAT_010e4db0 + iVar23) = uVar15;
      *(undefined2 *)((int)&DAT_010e4db8 + iVar23) = 0;
      dVar41 = (double)MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
      dVar42 = (double)MB_randRangeFloat(-1.0471976,(float)dVar29);
      *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(float *)(puVar9 + 0x14) = (float)((double)*(float *)(puVar9 + 0x10) * dVar38);
      *(float *)((int)puVar9 + 0xa4) = (float)((double)*(float *)((int)puVar9 + 0x84) * dVar38);
      *(float *)(puVar9 + 0x15) = (float)((double)*(float *)(puVar9 + 0x11) * dVar38);
      MB_RotateQuatAxisAngle((float)dVar42,local_220,local_220);
      MB_RotateQuatAxisAngle((float)dVar41,local_220,local_220);
      pfVar19 = (float *)((int)&DAT_010e4c80 + iVar16);
      *(float *)((int)&DAT_010e4c70 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010e4c74 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010e4c78 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010e4c7c + iVar16) = (float)dVar40;
      pfVar24 = (float *)((int)&DAT_010e4c90 + iVar16);
      iVar23 = 2;
      *(float *)((int)&DAT_010e4c80 + iVar16) = (float)(dVar35 + (double)*(float *)(puVar9 + 0x14));
      *(float *)((int)&DAT_010e4c84 + iVar16) =
           (float)(dVar33 + (double)*(float *)((int)puVar9 + 0xa4));
      fVar58 = *(float *)(puVar9 + 0x15);
      *(float *)((int)&DAT_010e4c8c + iVar16) = (float)dVar40;
      *(float *)((int)&DAT_010e4c88 + iVar16) = (float)(dVar31 + (double)fVar58);
      dVar40 = 1.0;
      dVar38 = 0.9599310755729675;
      do {
        fVar57 = GameCamera.posZ;
        fVar58 = GameCamera.posY;
        *(float *)(puVar9 + 0x1c) = *pfVar19 - GameCamera.posX;
        *(float *)((int)puVar9 + 0xe4) = pfVar19[1] - fVar58;
        *(float *)(puVar9 + 0x1d) = pfVar19[2] - fVar57;
        *(float *)((int)puVar9 + 0xec) = pfVar19[3];
        dVar31 = (double)MB_randRangeFloat((float)dVar29,(float)dVar38);
        dVar31 = dVar31 * dVar40;
        dVar40 = -dVar40;
        MB_RotateQuatAxisAngle((float)dVar31,local_220,local_220);
        iVar23 = iVar23 + 1;
        *pfVar24 = *pfVar19 + *(float *)(puVar9 + 0x14);
        pfVar24[1] = pfVar19[1] + *(float *)((int)puVar9 + 0xa4);
        pfVar24[2] = pfVar19[2] + *(float *)(puVar9 + 0x15);
        pfVar25 = pfVar19 + 3;
        pfVar19 = pfVar19 + 4;
        pfVar24[3] = *pfVar25;
        pfVar24 = pfVar24 + 4;
      } while (iVar23 < 5);
    }
    iVar27 = iVar27 + 1;
    lVar17 = lVar17 + 2;
    iVar16 = iVar16 + 0x50;
  } while (iVar27 < 4);
  dVar38 = 1.0471975803375244;
  dVar29 = (double)MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
  dVar38 = (double)MB_randRangeFloat(-0.5235988,(float)dVar38);
  fVar58 = DAT_0071f408 * DAT_008f51f4;
  *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
  *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x10) * fVar58;
  *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0x84) * fVar58;
  *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x11) * fVar58;
  MB_RotateQuatAxisAngle((float)dVar38,local_220,local_220);
  MB_RotateQuatAxisAngle((float)dVar29,local_220,local_220);
  MB_randRange(1,8);
  MB_randInt(2);
  dVar29 = (double)MB_randRangeFloat(0.2,0.6);
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  SpawnPart_53
            ((double)(float)(dVar29 * 0.30000001192092896),dVar29,dVar52,param_1 + 0x10,
             *(undefined4 *)((int)puVar9 + 0x17c));
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  dVar38 = 0.15000000596046448;
  SpawnPart_53
            ((double)(float)(dVar29 * 0.15000000596046448),(double)(float)(dVar29 * dVar30),dVar52,
             param_1 + 0x10,*(undefined4 *)((int)puVar9 + 0x17c));
  MB_randRange(1,8);
  MB_randInt(2);
  dVar29 = (double)MB_randRangeFloat((float)dVar38,3.0);
  puVar9[0x2f] = (longlong)(int)(animationSpeed * 12.5);
  SpawnPart_53
            ((double)(float)(dVar29 * 0.10000000149011612),dVar29,dVar52,iVar8 + 0x10,
             *(undefined4 *)((int)puVar9 + 0x17c));
  return;
}


// 0x04ca100 (0x244 bytes)
void M983_004ca100(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined8 in_r0;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (DAT_008f5170 != 0) {
    fVar3 = *(float *)(iVar2 + 0x14) - *(float *)(param_1 + 0x14);
    DAT_010e47f0 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(iVar2 + 0x10) - DAT_010e47f0;
    auVar17 = loadVectorLeftIndexed(0x51f0,0x8f0000);
    DAT_008f5170 = 0;
    fVar5 = *(float *)(iVar2 + 0x18) - *(float *)(param_1 + 0x18);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar17,0);
    DAT_010e4dd4 = 0;
    auVar17 = loadVectorLeftIndexed(in_r0,0x4ca0f0);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar18 = vectorAddFloatingPoint
                        (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    auVar17 = ZEXT416(0xffffffff);
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar17);
    fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    pfVar12 = &DAT_010e47f0;
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010e4dd0 = storeVectorElementWordIndexed
                             (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x4dd0,
                              0x10e0000);
    PTR_DAT_008f51c4 = &DAT_007f2020;
    fVar1 = 0.0;
    DAT_010e47f4 = *(undefined4 *)(param_1 + 0x14);
    DAT_010e47f8 = *(undefined4 *)(param_1 + 0x18);
    DAT_010e47fc = *(undefined4 *)(param_1 + 0x1c);
    lVar16 = 0x13;
    puVar15 = &DAT_010e4a74;
    puVar14 = &DAT_010e4c04;
    pfVar13 = (float *)&DAT_010e4800;
    fVar7 = (DAT_008f5174 * 0.05) / fVar6;
    puVar11 = &DAT_010e4ad0;
    fVar9 = fVar1;
    if (0.0 - fVar6 < 0.0) {
      fVar9 = fVar5 * fVar7;
    }
    fVar8 = fVar1;
    if (0.0 - fVar6 < 0.0) {
      fVar8 = fVar3 * fVar7;
    }
    if (0.0 - fVar6 < 0.0) {
      fVar1 = fVar4 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar9 = fVar5 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar7;
    }
    do {
      *pfVar13 = *pfVar12 + fVar1;
      pfVar13[1] = pfVar12[1] + fVar8;
      pfVar13[2] = pfVar12[2] + fVar9;
      pfVar10 = pfVar12 + 3;
      pfVar12 = pfVar12 + 4;
      pfVar13[3] = *pfVar10;
      *puVar15 = 0;
      puVar11[3] = 0;
      pfVar13 = pfVar13 + 4;
      puVar11[2] = 0;
      puVar15 = puVar15 + 1;
      puVar11[1] = 0;
      *puVar11 = 0;
      *puVar14 = 0;
      puVar11 = puVar11 + 4;
      puVar14 = puVar14 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    DAT_010e4db0 = 0xffff;
    DAT_010e4db2 = 0xffff;
    DAT_010e4db4 = 0xffff;
    DAT_010e4db6 = 0xffff;
    DAT_010e4dc0 = 8;
    DAT_010e4dc8 = 4;
    DAT_010e4dc2 = 4;
    DAT_010e4dca = 2;
    DAT_010e4dc4 = 8;
    DAT_010e4dcc = 4;
    DAT_010e4dc6 = 4;
    DAT_010e4dce = 2;
    DAT_010e4c54 = 0;
    DAT_010e4c58 = 0;
    DAT_010e4c5c = 0;
  }
  return;
}


// 0x04ca350 (0x3ac bytes)
void M983_004ca350(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  
  dVar14 = 0.0;
  iVar8 = 0;
  dVar10 = (double)(DAT_008f50ac * g_FrameTime);
  dVar11 = (double)(DAT_008f50b0 * g_FrameTime);
  dVar15 = 1.0;
  dVar12 = (double)(DAT_008f50b8 * g_FrameTime);
  dVar13 = (double)(DAT_008f50bc * g_FrameTime);
  do {
    MB_randSphere(dVar10,dVar11,local_c0);
    MB_randRangeFloat((float)dVar12,(float)dVar13);
    dVar9 = (double)MB_randRangeFloat(DAT_008f5094,DAT_008f5098);
    uVar3 = FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
    dVar9 = (double)MB_randRangeFloat(DAT_008f509c,DAT_008f50a0);
    uVar4 = FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
    dVar9 = (double)MB_randRangeFloat(DAT_008f50a4,DAT_008f50a8);
    uVar5 = FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
    MB_randRangeFloat(DAT_008f5084,DAT_008f5088);
    MB_randRangeFloat(DAT_008f508c,DAT_008f5090);
    MB_randRangeFloat((float)dVar14,(float)dVar15);
    uVar2 = DAT_008f5078;
    uVar1 = DAT_008f5074;
    MB_randRangeFloat((float)dVar14,(float)dVar15);
    uVar6 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_008f5080;
    uVar1 = DAT_008f507c;
    MB_randRangeFloat((float)dVar14,(float)dVar15);
    uVar7 = FastLerpColor(uVar1,uVar2);
    SpawnPart_2(local_d0,local_c0,local_b0,uVar6,uVar7,uVar3,uVar4,uVar5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  return;
}


// 0x04ca718 (0x370 bytes)
/* Moby 983 */

void UpdateMoby_983(MobyInstance *moby)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> local_60;
  
  lVar2 = (longlong)(int)moby;
  dVar13 = 0.01745329238474369;
  pfVar1 = (float *)moby->pVar;
  dVar4 = (double)FastWrapRot
                            (pfVar1[0xb],DAT_008f4f10 * 0.017453292 * g_FrameTime);
  pfVar1[0xb] = (float)dVar4;
  dVar4 = (double)FastWrapRot
                            (pfVar1[0xc],
                             (float)((double)DAT_008f4f14 * dVar13) * g_FrameTime);
  pfVar1[0xc] = (float)dVar4;
  if (moby->state == 0) {
    iVar3 = FastDecTimerS32(pfVar1 + 10);
    if (iVar3 != 0) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (moby->state < 2) {
    dVar11 = (double)(pfVar1[1] - (moby->pos).y);
    dVar9 = (double)(*pfVar1 - (moby->pos).x);
    dVar14 = (double)(pfVar1[2] - (moby->pos).z);
    dVar4 = (double)(DAT_008f4f20 * g_FrameTime);
    dVar13 = (double)SQRT((float)(dVar14 * dVar14 +
                                 (double)(float)(dVar9 * dVar9 + (double)(float)(dVar11 * dVar11))))
    ;
    M983_004ca350(lVar2);
    MB_randSphere
              ((double)(DAT_008f4f18 * pfVar1[9]),(double)(DAT_008f4f18 * pfVar1[9]),pfVar1 + 4);
    pfVar1[4] = pfVar1[4] + (moby->pos).x;
    pfVar1[5] = pfVar1[5] + (moby->pos).y;
    pfVar1[6] = pfVar1[6] + (moby->pos).z;
    M983_004ca100(lVar2);
    M983_004c8df0(lVar2);
    RegisterPostDraw(&PTR_M984_004cc120_0070f908,moby);
    if (dVar13 < dVar4) {
      M983_004c8510(lVar2);
      DeleteMoby(moby);
      return;
    }
    dVar5 = (double)(float)(dVar4 / dVar13);
    dVar15 = 0.0;
    dVar4 = dVar15;
    if (0.0 - dVar13 < 0.0) {
      dVar4 = (double)(float)(dVar14 * dVar5);
    }
    dVar7 = dVar15;
    if (0.0 - dVar13 < 0.0) {
      dVar7 = (double)(float)(dVar11 * dVar5);
    }
    dVar6 = dVar15;
    if (0.0 - dVar13 < 0.0) {
      dVar6 = (double)(float)(dVar9 * dVar5);
    }
    if (dVar13 - 0.0 < 0.0) {
      dVar4 = (double)(float)(dVar14 * dVar5);
    }
    if (dVar13 - 0.0 < 0.0) {
      dVar7 = (double)(float)(dVar11 * dVar5);
    }
    if (dVar13 - 0.0 < 0.0) {
      dVar6 = (double)(float)(dVar9 * dVar5);
    }
    (moby->pos).z = (float)((double)(moby->pos).z + dVar4);
    (moby->pos).y = (float)((double)(moby->pos).y + dVar7);
    (moby->pos).x = (float)((double)(moby->pos).x + dVar6);
    GetGroundZ(0x3fe0000000000000,local_60,0);
    uVar12 = 0x4000000000000000;
    uVar10 = 0x4014000000000000;
    uVar8 = 0x3ff0000000000000;
    DamageSphereAtPos
              (0x4000000000000000,0x4014000000000000,0x3ff0000000000000,pfVar1[8],lVar2 + 0x10);
    DamageSphereAtPos(uVar12,uVar10,uVar8,pfVar1[8],local_60);
    iVar3 = FastDecTimerS32(pfVar1 + 0xd);
    if ((iVar3 != 0) && (Delt((float)dVar15,0.2,pfVar1 + 9), pfVar1[9] == 0.0)) {
      DeleteMoby(moby);
      return;
    }
  }
  RegisterFuncForMoby(&PTR_M984_004cabd8_0070f8f0,moby);
  return;
}


