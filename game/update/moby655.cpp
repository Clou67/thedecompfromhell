// game/update/moby655.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x403594-0x406418
#include "game/update/moby655.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby1180.h"
#include "game/update/moby177.h"
#include "idol/fastfunc.h"

// 0x0403594 (0x14 bytes)
void M655_00403594(void)

{
  DAT_00854a08 = 0x10000;
  return;
}


// 0x04035b8 (0xdc bytes)
undefined8 M655_004035b8(void)

{
  int iVar2;
  undefined8 uVar1;
  double dVar3;
  GPiece<16> local_20;
  
  iVar2 = Hero_IsSwimming();
  if (iVar2 == 0) {
    if (g_heroState == EDGE_HANG || g_heroState == EDGE_GRAB) {
      dVar3 = (double)GetGroundZ(0x3fe0000000000000,local_20,0);
      iVar2 = CollHotspot();
      if ((iVar2 != 0) || (dVar3 < (double)g_heroPosition.z)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x0403708 (0x12f8 bytes)
// inlined: FastRSqrt @0x4038ec, FastAtan2 @0x403e78, FastRSqrt @0x4041b4, FastRSqrt @0x404254
// strings: 00854a88: '=Vwp>VwP' (raw) | 00854a8c: '>VwP' (raw)

void M655_00403708(int param_1)

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
  int iVar16;
  ulonglong unaff_r19;
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
  puVar9[0x39] = unaff_r19;
  puVar9[0x45] = unaff_r31;
  dVar38 = 0.05000000074505806;
  puVar9[0x37] = unaff_r17;
  fVar58 = DAT_00854a74;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar9[0x44] = unaff_r30;
  fVar57 = DAT_010cc064;
  bVar12 = g_goldWeaponsArray.teslaClaw;
  puVar9[0x43] = unaff_r29;
  puVar9[0x42] = unaff_r28;
  puVar9[0x41] = unaff_r27;
  puVar9[0x40] = unaff_r26;
  puVar9[0x3f] = unaff_r25;
  puVar9[0x3e] = unaff_r24;
  puVar9[0x3d] = unaff_r23;
  puVar9[0x3c] = unaff_r22;
  puVar9[0x3b] = unaff_r21;
  puVar9[0x3a] = unaff_r20;
  puVar9[0x38] = unaff_r18;
  puVar9[0x36] = unaff_r16;
  puVar9[0x35] = unaff_r15;
  puVar9[0x34] = unaff_r14;
  puVar9[0x2d] = 0x3fa99999a0000000;
  dVar29 = (double)FastWrapRot(fVar57,fVar58);
  DAT_010cc064 = (float)dVar29;
  dVar29 = (double)FastDiffRots((double)DAT_010cc068,(double)DAT_00854a78);
  DAT_010cc068 = (float)dVar29;
  dVar29 = (double)FastWrapRot(DAT_010cc06c,DAT_00854a88);
  DAT_010cc06c = (float)dVar29;
  fVar58 = *(float *)(iVar8 + 0x100) - *(float *)(iVar8 + 0xf0);
  fVar57 = *(float *)(iVar8 + 0xf0) - *(float *)(iVar8 + 0x110);
  fVar5 = *(float *)(iVar8 + 0xf4) - *(float *)(iVar8 + 0x114);
  fVar2 = *(float *)(iVar8 + 0xf8) - *(float *)(iVar8 + 0x118);
  *(float *)(puVar9 + 0x10) = fVar58;
  fVar10 = *(float *)(iVar8 + 0x104) - *(float *)(iVar8 + 0xf4);
  *(float *)((int)puVar9 + 0x84) = fVar10;
  fVar11 = *(float *)(iVar8 + 0x108) - *(float *)(iVar8 + 0xf8);
  PTR_DAT_00854aac =
       (undefined *)(((uint)(ZERO_MASK((uint)bVar12)) & 0xffffffe0) + 0x7f2040);
  *(float *)(puVar9 + 0x11) = fVar11;
  *(undefined4 *)((int)puVar9 + 0x8c) = *(undefined4 *)(iVar8 + 0x10c);
  dVar52 = 0.0;
  fVar4 = fVar11 * fVar11 + fVar58 * fVar58 + fVar10 * fVar10;
  dVar39 = (double)(float)((double)SQRT(fVar2 * fVar2 + fVar57 * fVar57 + fVar5 * fVar5) * dVar38);
  dVar29 = dVar52;
  dVar38 = dVar52;
  dVar40 = dVar52;
  if (SQRT(fVar4) != 0.0) {
    fVar57 = 1.0 / SQRT(fVar4);
    fVar57 = -(fVar4 * fVar57 * fVar57 - 1.0) * fVar57 * 0.5 + fVar57;
    fVar57 = -(fVar4 * fVar57 * fVar57 - 1.0) * fVar57 * 0.5 + fVar57;
    fVar57 = -(fVar4 * fVar57 * fVar57 - 1.0) * fVar57 * 0.5 + fVar57;
    dVar38 = (double)(fVar58 * fVar57);
    dVar29 = (double)(fVar10 * fVar57);
    dVar40 = (double)(fVar11 * fVar57);
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
  DAT_010cbc00 = *(undefined4 *)(iVar8 + 0xf0);
  uVar26 = 1;
  dVar38 = (double)(float)((double)*(float *)(puVar9 + 0x10) * dVar39);
  DAT_010cbc04 = *(undefined4 *)(iVar8 + 0xf4);
  DAT_010cbc08 = *(undefined4 *)(iVar8 + 0xf8);
  DAT_010cbc0c = *(undefined4 *)(iVar8 + 0xfc);
  dVar40 = (double)(float)((double)*(float *)((int)puVar9 + 0x84) * dVar39);
  DAT_010cbd40 = *(undefined4 *)(iVar8 + 0xf0);
  dVar31 = (double)(float)((double)*(float *)(puVar9 + 0x11) * dVar39);
  DAT_010cbd44 = *(undefined4 *)(iVar8 + 0xf4);
  DAT_010cbd48 = *(undefined4 *)(iVar8 + 0xf8);
  DAT_010cbd4c = *(undefined4 *)(iVar8 + 0xfc);
  *(undefined4 *)((int)puVar9 + 0x164) = DAT_010cbd4c;
  puVar9[0x2e] = 1;
  do {
    dVar33 = (double)FastIntToDouble(uVar26);
    iVar27 = (int)uVar26;
    puVar9[0x2f] = (longlong)iVar27;
    dVar50 = (double)((DAT_00854a70 - DAT_00854a6c) * (float)(dVar33 * (double)puVar9[0x2d]) +
                     DAT_00854a6c);
    dVar45 = (double)(longlong)puVar9[0x2f];
    fVar57 = MB_WrapRot((float)(dVar45 * (double)DAT_00854a68 + (double)DAT_010cc064));
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
    dVar30 = (double)MB_randRangeSigned((double)DAT_010cc070,(double)DAT_00854aa0);
    iVar23 = iVar27 * 0x10;
    fVar58 = (float)(dVar50 * dVar48 + dVar30);
    dVar48 = (double)fVar58;
    iVar16 = (int)((uVar26 & 0xffffffff) << 2);
    fVar5 = *(float *)(&DAT_010cbe80 + iVar16);
    fVar57 = (float)(&DAT_010cbc08)[iVar27 * 4];
    *(float *)(&DAT_010cbe80 + iVar16) = fVar58;
    (&DAT_010cbc08)[iVar27 * 4] = fVar57 - fVar5;
    dVar50 = (double)MB_randRot();
    dVar30 = (double)MB_randRot();
    MB_SphericalToVector
              ((float)dVar39,(float)dVar50,(float)dVar30,(float *)(puVar9 + 0x12));
    dVar30 = 0.5;
    fVar5 = *(float *)(puVar9 + 0x13);
    dVar50 = (double)DAT_00854ae4;
    fVar58 = (float)(dVar50 * (double)(float)((double)*(float *)((int)puVar9 + 0x94) - dVar40) +
                    dVar40);
    fVar57 = (float)(dVar50 * (double)(float)((double)*(float *)(puVar9 + 0x12) - dVar38) + dVar38);
    pfVar19 = (float *)(&DAT_010cbc00 + iVar27 * 4);
    pfVar24 = (float *)(&DAT_010cbbf0 + iVar27 * 4);
    *(float *)(puVar9 + 0x13) = fVar5 * 0.5;
    fVar5 = (float)(dVar50 * (double)(float)((double)(fVar5 * 0.5) - dVar31) + dVar31);
    dVar50 = (double)SQRT(fVar5 * fVar5 + fVar57 * fVar57 + fVar58 * fVar58);
    if (dVar50 == dVar52) {
      *pfVar19 = *pfVar24;
      (&DAT_010cbc04)[iVar27 * 4] = (&DAT_010cbbf4)[iVar27 * 4];
      (&DAT_010cbc08)[iVar27 * 4] = *(undefined4 *)(iVar23 + 0x10cbbf8);
      uVar3 = *(undefined4 *)(iVar23 + 0x10cbbfc);
    }
    else {
      fVar4 = (float)(dVar39 / dVar50);
      dVar38 = (double)(fVar4 * fVar57);
      dVar40 = (double)(fVar4 * fVar58);
      dVar31 = (double)(fVar4 * fVar5);
      *pfVar19 = (float)((double)*pfVar24 + dVar38);
      (&DAT_010cbc04)[iVar27 * 4] = (float)((double)(float)(&DAT_010cbbf4)[iVar27 * 4] + dVar40);
      (&DAT_010cbc08)[iVar27 * 4] = (float)((double)*(float *)(iVar23 + 0x10cbbf8) + dVar31);
      uVar3 = *(undefined4 *)(iVar23 + 0x10cbbfc);
    }
    (&DAT_010cbc0c)[iVar27 * 4] = uVar3;
    (&DAT_010cbc08)[iVar27 * 4] = (float)((double)(float)(&DAT_010cbc08)[iVar27 * 4] + dVar48);
    *(float *)(puVar9 + 0x12) = *pfVar19 - *pfVar24;
    *(float *)((int)puVar9 + 0x94) =
         (float)(&DAT_010cbc04)[iVar27 * 4] - (float)(&DAT_010cbbf4)[iVar27 * 4];
    *(float *)(puVar9 + 0x13) = (float)(&DAT_010cbc08)[iVar27 * 4] - *(float *)(iVar23 + 0x10cbbf8);
    *(undefined4 *)((int)puVar9 + 0x9c) = (&DAT_010cbc0c)[iVar27 * 4];
    dVar47 = (double)(*(float *)(iVar8 + 0x114) - (float)(&DAT_010cbc04)[iVar27 * 4]);
    dVar48 = (double)(*(float *)(iVar8 + 0x110) - *pfVar19);
    dVar49 = (double)(*(float *)(iVar8 + 0x118) - (float)(&DAT_010cbc08)[iVar27 * 4]);
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
      fVar58 = MB_WrapRot((float)(dVar45 * (double)DAT_00854a7c + (double)DAT_010cc068));
      dVar48 = (double)fVar58;
      fVar57 = MB_WrapRot((float)(dVar45 * (double)DAT_00854a8c + (double)DAT_010cc06c));
      fVar58 = DAT_00854a80;
      dVar45 = (double)fVar57;
      pfVar24 = (float *)(&DAT_010cbd40 + iVar27 * 4);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar47 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar47 = dVar39;
      }
      *pfVar24 = *pfVar19;
      (&DAT_010cbd44)[iVar27 * 4] = (&DAT_010cbc04)[iVar27 * 4];
      (&DAT_010cbd48)[iVar27 * 4] = (&DAT_010cbc08)[iVar27 * 4];
      dVar39 = (double)(float)(dVar47 * dVar47);
      (&DAT_010cbd4c)[iVar27 * 4] = (&DAT_010cbc0c)[iVar27 * 4];
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
      fVar58 = (float)(&DAT_010cbd48)[iVar27 * 4];
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
      *(float *)((int)&DAT_010cc010 + iVar16) = fVar57;
      (&DAT_010cbd48)[iVar27 * 4] = fVar58 + fVar57;
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
      fVar58 = DAT_00854a84;
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
      fVar5 = (float)(&DAT_010cbd44)[iVar27 * 4];
      uVar3 = *(undefined4 *)((int)puVar9 + 0x164);
      *(undefined4 *)(iVar23 + 0x10cbed8) = 0;
      *(undefined4 *)(iVar23 + 0x10cbedc) = uVar3;
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
      *(float *)(iVar23 + 0x10cbed0) = fVar4;
      *(float *)(iVar23 + 0x10cbed4) = fVar58;
      *pfVar24 = fVar57 + fVar4;
      (&DAT_010cbd44)[iVar27 * 4] = fVar5 + fVar58;
    }
    else {
      pfVar24 = (float *)(&DAT_010cbd40 + iVar27 * 4);
      iVar16 = (int)(0x15 - uVar26);
      *pfVar24 = *pfVar19;
      iVar14 = iVar16 * 0x10;
      (&DAT_010cbd44)[iVar27 * 4] = (&DAT_010cbc04)[iVar27 * 4];
      (&DAT_010cbd48)[iVar27 * 4] = (&DAT_010cbc08)[iVar27 * 4];
      (&DAT_010cbd4c)[iVar27 * 4] = (&DAT_010cbc0c)[iVar27 * 4];
      (&DAT_010cbd48)[iVar27 * 4] =
           (float)(&DAT_010cbd48)[iVar27 * 4] + (float)(&DAT_010cc010)[iVar16];
      *pfVar24 = *pfVar24 + *(float *)(iVar14 + 0x10cbed0);
      (&DAT_010cbd44)[iVar27 * 4] =
           (float)(&DAT_010cbd44)[iVar27 * 4] + *(float *)(iVar14 + 0x10cbed4);
      (&DAT_010cbd48)[iVar27 * 4] =
           (float)(&DAT_010cbd48)[iVar27 * 4] + *(float *)(iVar14 + 0x10cbed8);
      *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)(iVar23 + 0x10cbedc);
    }
    uVar26 = (ulonglong)(iVar27 + 1);
    dVar39 = dVar50;
  } while (iVar27 + 1 < 0x14);
  fVar57 = DAT_00969f78 * *(float *)(puVar9 + 0x10) -
           g_heroGravityDir * *(float *)(puVar9 + 0x11);
  fVar58 = DAT_00969f74 * *(float *)(puVar9 + 0x11) - DAT_00969f78 * *(float *)((int)puVar9 + 0x84);
  fVar5 = g_heroGravityDir * *(float *)((int)puVar9 + 0x84) -
          DAT_00969f74 * *(float *)(puVar9 + 0x10);
  auVar56 = loadVectorLeftIndexed(8,0x403694);
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
      fVar57 = *(float *)(iVar8 + 0xf0);
      fVar58 = *(float *)(iVar8 + 0xf4);
      fVar5 = *(float *)(iVar8 + 0xf8);
      fVar4 = *(float *)(iVar8 + 0xfc);
      dVar38 = 0.4000000059604645;
    }
    else {
      fVar57 = *(float *)(iVar8 + 0x100);
      fVar58 = *(float *)(iVar8 + 0x104);
      fVar5 = *(float *)(iVar8 + 0x108);
      fVar4 = *(float *)(iVar8 + 0x10c);
      dVar38 = dVar30;
    }
    dVar35 = (double)fVar57;
    dVar33 = (double)fVar58;
    dVar31 = (double)fVar5;
    dVar40 = (double)fVar4;
    iVar14 = FastDecTimerS16(ZEXT48(&DAT_010cc1c0) + lVar17 & 0xffffffff);
    dVar39 = 15.5;
    iVar23 = (int)lVar17;
    if (iVar14 == 0) {
      uVar26 = puVar9[0x2e];
      lVar18 = uVar13 - 0x1c0;
      uVar46 = 0x3fb99999a0000000;
      pfVar20 = (float *)((int)&DAT_010cc080 + iVar16);
      pfVar25 = (float *)((int)&DAT_010cc090 + iVar16);
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
      *(float *)((int)&DAT_010cc080 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010cc084 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010cc088 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010cc08c + iVar16) = (float)dVar40;
      sVar6 = *(short *)((int)&DAT_010cc1c0 + iVar23);
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
      sVar7 = *(short *)((int)&DAT_010cc1d8 + iVar23);
      if (sVar7 < sVar6) {
        dVar40 = (double)FastIntToDouble((longlong)sVar6 - (longlong)sVar7);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010cc1c8 + iVar23) = uVar15;
      }
      else {
        dVar40 = (double)FastIntToDouble((longlong)sVar7 - (longlong)sVar6);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010cc1c8 + iVar23) = uVar15;
      }
    }
    else {
      auVar53 = ZEXT416(0xfffffff0);
      auVar54 = loadVectorLeftIndexed(lVar17,0x10cc1d0);
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
      uVar15 = storeVectorElementHalfWordIndexed(auVar53,lVar17,0x10cc1c0);
      *(undefined2 *)((int)&DAT_010cc1c0 + iVar23) = uVar15;
      *(undefined2 *)((int)&DAT_010cc1c8 + iVar23) = 0;
      dVar41 = (double)MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
      dVar42 = (double)MB_randRangeFloat(-1.0471976,(float)dVar29);
      *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(float *)(puVar9 + 0x14) = (float)((double)*(float *)(puVar9 + 0x10) * dVar38);
      *(float *)((int)puVar9 + 0xa4) = (float)((double)*(float *)((int)puVar9 + 0x84) * dVar38);
      *(float *)(puVar9 + 0x15) = (float)((double)*(float *)(puVar9 + 0x11) * dVar38);
      MB_RotateQuatAxisAngle((float)dVar42,local_220,local_220);
      MB_RotateQuatAxisAngle((float)dVar41,local_220,local_220);
      pfVar19 = (float *)((int)&DAT_010cc090 + iVar16);
      *(float *)((int)&DAT_010cc080 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010cc084 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010cc088 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010cc08c + iVar16) = (float)dVar40;
      pfVar24 = (float *)((int)&DAT_010cc0a0 + iVar16);
      iVar23 = 2;
      *(float *)((int)&DAT_010cc090 + iVar16) = (float)(dVar35 + (double)*(float *)(puVar9 + 0x14));
      *(float *)((int)&DAT_010cc094 + iVar16) =
           (float)(dVar33 + (double)*(float *)((int)puVar9 + 0xa4));
      fVar58 = *(float *)(puVar9 + 0x15);
      *(float *)((int)&DAT_010cc09c + iVar16) = (float)dVar40;
      *(float *)((int)&DAT_010cc098 + iVar16) = (float)(dVar31 + (double)fVar58);
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
        pfVar20 = pfVar19 + 3;
        pfVar19 = pfVar19 + 4;
        pfVar24[3] = *pfVar20;
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
  fVar58 = DAT_0071f408 * DAT_00854adc;
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
            ((double)(float)(dVar29 * 0.30000001192092896),dVar29,dVar52,iVar8 + 0xf0,
             *(undefined4 *)((int)puVar9 + 0x17c));
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  dVar38 = 0.15000000596046448;
  SpawnPart_53
            ((double)(float)(dVar29 * 0.15000000596046448),(double)(float)(dVar29 * dVar30),dVar52,
             iVar8 + 0xf0,*(undefined4 *)((int)puVar9 + 0x17c));
  MB_randRange(1,8);
  MB_randInt(2);
  dVar29 = (double)MB_randRangeFloat((float)dVar38,3.0);
  puVar9[0x2f] = (longlong)(int)(animationSpeed * 12.5);
  SpawnPart_53
            ((double)(float)(dVar29 * 0.10000000149011612),dVar29,dVar52,iVar8 + 0x110,
             *(undefined4 *)((int)puVar9 + 0x17c));
  return;
}


// 0x0404a10 (0x244 bytes)
void M655_00404a10(int param_1)

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
  if (DAT_00854a58 != 0) {
    fVar3 = *(float *)(iVar2 + 0x104) - *(float *)(iVar2 + 0xf4);
    DAT_010cbc00 = *(float *)(iVar2 + 0xf0);
    fVar4 = *(float *)(iVar2 + 0x100) - DAT_010cbc00;
    auVar17 = loadVectorLeftIndexed(0x4ad8,0x850000);
    DAT_00854a58 = 0;
    fVar5 = *(float *)(iVar2 + 0x108) - *(float *)(iVar2 + 0xf8);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar17,0);
    DAT_010cc1e4 = 0;
    auVar17 = loadVectorLeftIndexed(in_r0,0x404a00);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar18 = vectorAddFloatingPoint
                        (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    auVar17 = ZEXT416(0xffffffff);
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar17);
    fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    pfVar12 = &DAT_010cbc00;
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010cc1e0 = storeVectorElementWordIndexed
                             (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                              0xffffffffffffc1e0,0x10d0000);
    PTR_DAT_00854aac = &DAT_007f2020;
    fVar1 = 0.0;
    DAT_010cbc04 = *(undefined4 *)(iVar2 + 0xf4);
    DAT_010cbc08 = *(undefined4 *)(iVar2 + 0xf8);
    DAT_010cbc0c = *(undefined4 *)(iVar2 + 0xfc);
    lVar16 = 0x13;
    puVar15 = &DAT_010cbe84;
    puVar14 = &DAT_010cc014;
    pfVar13 = (float *)&DAT_010cbc10;
    fVar7 = (DAT_00854a5c * 0.05) / fVar6;
    puVar11 = &DAT_010cbee0;
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
    DAT_010cc1c0 = 0xffff;
    DAT_010cc1c2 = 0xffff;
    DAT_010cc1c4 = 0xffff;
    DAT_010cc1c6 = 0xffff;
    DAT_010cc1d0 = 8;
    DAT_010cc1d8 = 4;
    DAT_010cc1d2 = 4;
    DAT_010cc1da = 2;
    DAT_010cc1d4 = 8;
    DAT_010cc1dc = 4;
    DAT_010cc1d6 = 4;
    DAT_010cc1de = 2;
    DAT_010cc064 = 0;
    DAT_010cc068 = 0;
    DAT_010cc06c = 0;
  }
  return;
}


// 0x0404d18 (0x1700 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 655 */

void UpdateMoby_655(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Cuboid *pCVar14;
  longlong lVar15;
  int iVar17;
  undefined2 uVar20;
  int iVar18;
  longlong lVar16;
  undefined4 uVar19;
  int iVar21;
  MobyInstance *pMoby;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  MobyInstance *pMVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  GPiece<16> auStack_e0;
  GPiece<40> local_d0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  lVar15 = (longlong)(int)moby;
  uVar19 = 1;
  bVar1 = moby->state;
  pvVar8 = moby->pVar;
  uVar26 = ZEXT48(pvVar8);
  if (bVar1 != 0) {
    iVar17 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x124));
    bVar1 = moby->state;
    if (iVar17 == 0) {
      if (*(MobyInstance **)((int)pvVar8 + 0x84) != (MobyInstance *)0x0) {
        iVar17 = *(int *)((int)pvVar8 + 0x14);
        if (((iVar17 != -1) &&
            (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (g_SoundChannels[iVar17].state != '\0')) {
          sound_Kill(iVar17);
        }
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
        if (((iVar17 != -1) &&
            (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (g_SoundChannels[iVar17].state != '\0')) {
          sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      }
      if (*(int *)((int)pvVar8 + 0x120) == -1) {
        return;
      }
      DeletePointLight(*(int *)((int)pvVar8 + 0x120));
      *(undefined4 *)((int)pvVar8 + 0x120) = 0xffffffff;
      return;
    }
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar17 = 0;
      moby->updateDistance = -1;
      uVar24 = uVar26;
      do {
        pMVar25 = g_MobyInstance;
        piVar23 = (int *)uVar24;
        iVar18 = *piVar23;
        if ((iVar18 == -1) || (g_MobyInstance[iVar18].oClass != BUTTON_033E)) {
          if (iVar18 != -1) {
            FUN_001eec10(g_MobyInstance + iVar18);
          }
        }
        else {
          (&g_CheckpointLive.objState[0])[(short)g_MobyInstance[iVar18].uid] = 0;
          (&g_Checkpoint.objState[0])[(short)pMVar25[*piVar23].uid] = 0;
          iVar18 = (int)((longlong)((int)(short)pMVar25[*piVar23].uid >> 5) << 2);
          *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar18) =
               *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar18) &
               ~(1 << (pMVar25[*piVar23].uid & 0x1f));
          iVar18 = (int)((longlong)((int)(short)pMVar25[*piVar23].uid >> 5) << 2);
          *(uint *)(&g_CheckpointBits + iVar18) =
               *(uint *)(&g_CheckpointBits + iVar18) & ~(1 << (pMVar25[*piVar23].uid & 0x1f));
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 4);
      uVar20 = FastDoubleToInt((double)(animationSpeed * DAT_00854a30 * 60.0));
      *(undefined2 *)((int)pvVar8 + 0x10) = uVar20;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar39 = loadVectorLeftIndexed(4,0x404c60);
      auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar48);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar20 = storeVectorElementHalfWordIndexed(auVar41,0x12,uVar26);
      *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
      *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x120) = 0xffffffff;
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
      *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      goto LAB_00406360;
    }
    iVar17 = Hero_IsSwimming();
    if (iVar17 == 0) {
      if (g_heroState == EDGE_HANG || g_heroState == EDGE_GRAB) {
        dVar27 = (double)GetGroundZ(0x3fe0000000000000,local_d0,0);
        iVar17 = CollHotspot();
        if ((iVar17 != 0) || (dVar27 < (double)g_heroPosition.z)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
      }
      else {
        bVar10 = false;
      }
    }
    else {
      bVar10 = true;
    }
    iVar17 = FastDecTimerS16(uVar26 + 0x10);
    if (iVar17 != 0) {
      uVar20 = FastDoubleToInt((double)(animationSpeed * DAT_010cbbf0 * 60.0));
      *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
      moby->state = '\x02';
      if (*(MobyInstance **)((int)pvVar8 + 0x84) != (MobyInstance *)0x0) {
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        if (((iVar17 != -1) &&
            (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (g_SoundChannels[iVar17].state != '\0')) {
          sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      }
    }
    iVar17 = 0;
    bVar9 = false;
    uVar24 = uVar26;
    do {
      iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar24 + 0x20));
      if (iVar18 != 0) {
        bVar9 = true;
        break;
      }
      iVar17 = iVar17 + 1;
      uVar24 = uVar24 + 4;
    } while (iVar17 < 0xc);
    if (moby->state == '\x02') {
      iVar17 = 0;
      uVar24 = uVar26;
      do {
        iVar18 = *(int *)((int)uVar24 + 0x74);
        if (iVar18 != -1) {
          SetColorOfMoby(g_MobyInstance + iVar18,0x40,0x40,0x40);
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 3);
    }
    else {
      iVar17 = 0;
      uVar24 = uVar26;
      do {
        uVar30 = MB_randRange(0x40,0x7f);
        iVar18 = *(int *)((int)uVar24 + 0x74);
        if (iVar18 != -1) {
          SetColorOfMoby(g_MobyInstance + iVar18,uVar30,uVar30,uVar30);
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 3);
    }
    if (((!bVar9) || (!bVar10)) &&
       ((iVar17 = MB_randInt(1), iVar17 == 0 && (uVar30 = 0, DAT_010cbbf4 == 0)))) {
      iVar17 = 0;
      uVar24 = uVar26;
      lVar16 = 0;
      do {
        iVar18 = *(int *)((int)uVar24 + 0x90);
        lVar22 = lVar16;
        if (((iVar18 != -1) && (lVar22 = uVar24 + 0x90, (int *)lVar16 != (int *)0x0)) &&
           (iVar21 = *(int *)lVar16, fVar3 = Cuboids[iVar21].pos.y - g_heroPosition.y,
           fVar4 = Cuboids[iVar18].pos.y - g_heroPosition.y,
           fVar6 = Cuboids[iVar21].pos.x - g_heroPosition.x,
           fVar2 = Cuboids[iVar18].pos.x - g_heroPosition.x,
           fVar5 = Cuboids[iVar21].pos.z - g_heroPosition.z,
           fVar11 = Cuboids[iVar18].pos.z - g_heroPosition.z, lVar22 = lVar16,
           SQRT(fVar11 * fVar11 + fVar2 * fVar2 + fVar4 * fVar4) <
           SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3))) {
          lVar22 = uVar24 + 0x90;
        }
        iVar17 = iVar17 + 8;
        uVar24 = uVar24 + 0x20;
        lVar16 = lVar22;
      } while (iVar17 < 0x18);
      iVar17 = (int)lVar22;
      if (iVar17 != 0) {
        iVar21 = 0;
        iVar18 = 8;
        do {
          if (*(int *)lVar22 == -1) {
            iVar18 = iVar21;
            if (iVar21 < 2) goto LAB_00405564;
            break;
          }
          iVar21 = iVar21 + 1;
          lVar22 = lVar22 + 4;
        } while (iVar21 < 8);
        lVar16 = MB_randRange(0,iVar18 + -2);
        pCVar14 = Cuboids;
        iVar21 = (int)(lVar16 << 2);
        iVar18 = *(int *)(iVar21 + iVar17);
        fVar6 = Cuboids[iVar18].pos.x;
        *(float *)((int)pvVar8 + 0xf0) = fVar6;
        *(float *)((int)pvVar8 + 0xf4) = pCVar14[iVar18].pos.y;
        *(float *)((int)pvVar8 + 0xf8) = pCVar14[iVar18].pos.z;
        *(float *)((int)pvVar8 + 0xfc) = pCVar14[iVar18].pos.w;
        iVar17 = *(int *)(iVar17 + iVar21 + 4);
        iVar18 = *(int *)((int)pvVar8 + 0x120);
        fVar2 = pCVar14[iVar17].pos.x;
        *(float *)((int)pvVar8 + 0x100) = fVar2;
        fVar3 = pCVar14[iVar17].pos.y;
        *(float *)((int)pvVar8 + 0x104) = fVar3;
        fVar4 = pCVar14[iVar17].pos.z;
        *(float *)((int)pvVar8 + 0x108) = fVar4;
        fVar5 = pCVar14[iVar17].pos.w;
        *(float *)((int)pvVar8 + 0x110) = fVar2;
        *(float *)((int)pvVar8 + 0x10c) = fVar5;
        *(float *)((int)pvVar8 + 0x114) = fVar3;
        *(float *)((int)pvVar8 + 0x118) = fVar4;
        *(float *)((int)pvVar8 + 0x11c) = fVar5;
        if (iVar18 == -1) {
          uVar19 = CreatePointLight2
                             (8.0,uVar30,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                              (Vec4 *)((int)pvVar8 + 0xf0));
          *(undefined4 *)((int)pvVar8 + 0x120) = uVar19;
        }
        else {
          PointLights[iVar18].pos.x = fVar6;
          PointLights[iVar18].pos.y = *(float *)((int)pvVar8 + 0xf4);
          fVar6 = *(float *)((int)pvVar8 + 0xf8);
          PointLights[iVar18].pos.w = 8.0;
          PointLights[iVar18].pos.z = fVar6;
          PointLights[iVar18].color.x = 1.0;
          PointLights[iVar18].color.y = 1.0;
          PointLights[iVar18].color.z = 0.5;
          PointLights[iVar18].color.w = 0.0;
        }
        M655_00404a10(lVar15);
        M655_00403708(lVar15);
        RegisterPostDraw(&PTR_M656_004074c8_0070de90,moby);
      }
    }
LAB_00405564:
    if (bVar10 && bVar9) {
      pMVar25 = *(MobyInstance **)((int)pvVar8 + 0x84);
      if ((pMVar25 != (MobyInstance *)0x0) && (pMVar25 != g_heroMobyPtr)) {
        iVar17 = *(int *)((int)pvVar8 + 0x14);
        if ((iVar17 != -1) &&
           ((g_SoundChannels[iVar17].pMoby == pMVar25 &&
            (g_SoundChannels[iVar17].state != '\0')))) {
          sound_Kill(iVar17);
        }
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
        if (((iVar17 != -1) &&
            (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (g_SoundChannels[iVar17].state != '\0')) {
          sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      }
      *(MobyInstance **)((int)pvVar8 + 0x84) = g_heroMobyPtr;
      iVar17 = sound_MobyPlay_oClass(0,4,g_heroMobyPtr,0x28f);
      pMVar25 = g_heroMobyPtr;
      *(int *)((int)pvVar8 + 0x14) = iVar17;
      iVar17 = sound_MobyPlay_oClass(1,4,pMVar25,0x28f);
      *(int *)((int)pvVar8 + 0x80) = iVar17;
      if (*(int *)((int)pvVar8 + 0x1c) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x50) = LevelFogNearDist;
        *(float *)((int)pvVar8 + 0x54) = LevelFogFarDist;
        *(float *)((int)pvVar8 + 0x58) = LevelFogNearIntensity;
        *(float *)((int)pvVar8 + 0x5c) = LevelFogFarIntensity;
        *(u8 *)((int)pvVar8 + 0x88) = levelFog.r;
        *(u8 *)((int)pvVar8 + 0x89) = levelFog.g;
        *(u8 *)((int)pvVar8 + 0x8a) = levelFog.b;
      }
      auVar41 = ZEXT416(0);
      auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      *(int *)((int)pvVar8 + 0x1c) = *(int *)((int)pvVar8 + 0x1c) + 1;
      levelFog.r = '\x7f';
      levelFog.g = '\x7f';
      levelFog.b = '\x7f';
      dVar31 = 0.0;
      LevelFogNearDist = 0;
      LevelFogFarDist = 131072.0;
      dVar27 = (double)MB_randRangeFloat(128.0,255.0);
      LevelFogNearIntensity = (float)dVar27;
      LevelFogFarIntensity = 0.0;
      dVar27 = (double)MB_randRangeFloat(5.0,8.0);
      dVar28 = (double)MB_randRot();
      dVar29 = (double)MB_randRot();
      MB_SphericalToVector
                ((float)dVar27,(float)dVar28,(float)dVar29,(float *)(uVar26 + 0x110));
      FastVecAddSelf(auStack_e0,uVar26 + 0x110,&g_heroCGPos);
      *(undefined4 *)((int)pvVar8 + 0x100) = *(undefined4 *)((int)pvVar8 + 0x110);
      *(undefined4 *)((int)pvVar8 + 0x104) = *(undefined4 *)((int)pvVar8 + 0x114);
      *(undefined4 *)((int)pvVar8 + 0x108) = *(undefined4 *)((int)pvVar8 + 0x118);
      *(undefined4 *)((int)pvVar8 + 0x10c) = *(undefined4 *)((int)pvVar8 + 0x11c);
      *(undefined4 *)((int)pvVar8 + 0xf0) = g_heroCGPos;
      *(undefined4 *)((int)pvVar8 + 0xf4) = DAT_00969db4;
      *(undefined4 *)((int)pvVar8 + 0xf8) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0xfc) = DAT_00969dbc;
      M655_00404a10(lVar15);
      M655_00403708(lVar15);
      RegisterPostDraw(&PTR_M656_004074c8_0070de90,moby);
      fVar6 = (moby->rotation).z;
      fVar2 = fVar6 + 1.5707963;
      auVar41 = ZEXT416(0xffffffff);
      auVar39 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      fVar3 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar3 = fVar6;
      }
      auVar45 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      auVar32 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      fVar5 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
        fVar5 = fVar3;
      }
      auVar33 = loadVectorLeftIndexed(0x28,0x404c60);
      auVar35 = loadVectorLeftIndexed(0x48,lVar15);
      auVar36 = loadVectorLeftIndexed(0x2c,0x404c60);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar6 = fVar4;
      }
      fVar2 = fVar5 * fVar5;
      auVar34 = vectorAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      auVar33 = loadVectorLeftIndexed(0x30,0x404c60);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      fVar3 = fVar6 * fVar6;
      auVar38 = vectorSubtractFloatingPoint(auVar36,auVar34);
      auVar36 = vectorSubtractFloatingPoint(auVar36,auVar35);
      auVar40 = vectorSubtractFloatingPoint(auVar33,auVar34);
      auVar37 = vectorSubtractFloatingPoint(auVar33,auVar35);
      auVar33 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar46 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorCompareGreaterThanFloatingPoint(auVar38,auVar34);
      auVar44 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar35);
      fVar4 = fVar3 * fVar3 * fVar6;
      fVar12 = fVar2 * fVar2 * fVar5;
      auVar35 = vectorConditionalSelect(auVar36,auVar35,auVar44);
      auVar36 = vectorConditionalSelect(auVar38,auVar34,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar34 = loadVectorLeftIndexed(0x34,0x404c60);
      auVar44 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar37);
      auVar38 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar40);
      auVar35 = vectorConditionalSelect(auVar37,auVar35,auVar44);
      fVar11 = fVar3 * fVar4;
      fVar13 = fVar2 * fVar12;
      auVar37 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = vectorConditionalSelect(auVar40,auVar36,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar37);
      auVar41 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar42);
      auVar41 = ZEXT416(0xffffffff);
      auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar41 = ZEXT416(0xffffffff);
      auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar38);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar34);
      auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      fVar2 = (fVar2 * fVar13 * 2.601887e-06 +
              fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5)
              * 0.2;
      fVar6 = (fVar3 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6) *
              0.2;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar37,auVar41,auVar42);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar41,auVar36,auVar35);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar45);
      auVar41 = loadVectorLeftIndexed(0x38,0x404c60);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar39);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar41 = ZEXT416(0xffffffff);
      auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = loadVectorLeftIndexed(0x3c,0x404c60);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar45 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar43);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar42);
      auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar44,auVar35,auVar40);
      auVar40 = loadVectorLeftIndexed(0xa6,lVar15);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar35,auVar36,auVar39);
      auVar36 = loadVectorLeftIndexed(0x40,0x404c60);
      auVar41 = ZEXT416(0xffffffff);
      auVar39 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar32 = vectorMultiplyAddFloatingPoint(auVar37,auVar45,auVar32);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar45,auVar47,auVar43);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar44,auVar34,auVar33);
      auVar41 = ZEXT416(0xfffffff0);
      auVar33 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar45 = vectorShiftRightWord
                          (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar39 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar34,auVar47,auVar42);
      auVar41 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = loadVectorLeftIndexed(0x44,0x404c60);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorMultiplyAddFloatingPoint(auVar32,auVar34,auVar43);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar42);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar41,auVar36,auVar38);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar43,auVar36,auVar39);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar42,auVar33);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar41);
      auVar41 = auVar48;
      if ((double)SQRT(fVar6 * fVar6 + fVar2 * fVar2) != dVar31) {
        auVar32 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar43);
        auVar41 = ZEXT416(0xffffffff);
        auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar33 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
        auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar37 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(0xc,0x404c60);
        auVar33 = loadVectorLeftIndexed(0x18,0x404c60);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar33 = vectorMultiplyAddFloatingPoint(auVar43,auVar32,auVar48);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar36);
        auVar41 = ZEXT416(0xffffffff);
        auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar41 = ZEXT416(0xffffffff);
        auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar32,auVar34);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar41,auVar36,auVar32);
        auVar33 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar41 = ZEXT416(0xffffffff);
        auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar32,auVar37);
        auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar38);
        auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar32,auVar34);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar37,auVar32);
        auVar32 = vectorShiftLeftIntegerWord(auVar48,auVar48);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar33);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar35,auVar41,auVar36);
        auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar41,auVar34);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar43,auVar41);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar39,auVar48,auVar40);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar42,auVar48,auVar32);
      }
      auVar39.piece<0,4>() = moby;
      auVar39.piece<4,4>() = 0x10001;
      auVar39.piece<8,4>() = uStack_a8;
      auVar39.piece<12,4>() = 0x3f800000;
      auVar42 = loadVectorLeftIndexed(0x80,0x404c60);
      auVar48 = vectorPermute(auVar41,auVar48,_DAT_00404cc0);
      auVar41 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar48 = vectorPermute(auVar48,_DAT_00404cb0,_DAT_00404cd0);
      auVar41 = vectorPermute(auVar45,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                              _DAT_00404cf0);
      auVar41 = vectorPermute(auVar41,auVar39,_DAT_00404d00);
      local_110 = auVar48.piece<0,8>();
      local_108 = auVar48.piece<8,8>();
      local_100 = auVar41.piece<0,8>();
      local_f8 = auVar41.piece<8,8>();
      CollDamageMobyDirect
                (g_heroMobyPtr,0x40,local_110,local_108,local_100,local_f8,
                 CONCAT44(uStack_a0,uStack_9c),CONCAT44(uStack_98,uStack_94));
      if (moby->state == '\x02') {
        LevelFogNearDist = *(undefined4 *)((int)pvVar8 + 0x50);
        LevelFogFarDist = *(float *)((int)pvVar8 + 0x54);
        LevelFogNearIntensity = *(float *)((int)pvVar8 + 0x58);
        LevelFogFarIntensity = *(float *)((int)pvVar8 + 0x5c);
        levelFog.r = *(u8 *)((int)pvVar8 + 0x88);
        levelFog.g = *(u8 *)((int)pvVar8 + 0x89);
        levelFog.b = *(u8 *)((int)pvVar8 + 0x8a);
      }
    }
  }
  else if (2 < bVar1) {
    if (bVar1 < 4) {
      iVar17 = 0;
      uVar24 = uVar26;
      do {
        iVar18 = *(int *)((int)uVar24 + 0x74);
        if (iVar18 != -1) {
          SetColorOfMoby(g_MobyInstance + iVar18,0x40,0x40,0x40);
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 3);
      if (*(int *)((int)pvVar8 + 0x120) != -1) {
        DeletePointLight(*(int *)((int)pvVar8 + 0x120));
        *(undefined4 *)((int)pvVar8 + 0x120) = 0xffffffff;
      }
      if (*(short *)((int)pvVar8 + 0x12) != 0) {
        RegisterFuncForMoby(&PTR_M656_00406458_0070de78,moby);
      }
      if (*(MobyInstance **)((int)pvVar8 + 0x84) != (MobyInstance *)0x0) {
        iVar17 = *(int *)((int)pvVar8 + 0x14);
        if (((iVar17 != -1) &&
            (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (g_SoundChannels[iVar17].state != '\0')) {
          sound_Kill(iVar17);
        }
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
        if (((iVar17 != -1) &&
            (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (g_SoundChannels[iVar17].state != '\0')) {
          sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
        *(undefined4 *)((int)pvVar8 + 0x84) = 0;
      }
      iVar17 = 0;
      dVar28 = 60.0;
      dVar27 = 60.5;
      uVar24 = uVar26;
      do {
        iVar18 = *(int *)uVar24;
        if (((iVar18 != -1) && (g_standingOnMoby == g_MobyInstance + iVar18)) &&
           ((g_MobyInstance[iVar18].oClass == BUTTON_033E && (g_framesNotGrounded == 0)))) {
          if (*(int *)((int)pvVar8 + 0x8c) != 0) {
            sVar7 = *(short *)((int)pvVar8 + 0x12);
            iVar18 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)((double)*(float *)((int)pvVar8 + 0x18) * dVar28)));
            if ((int)sVar7 < iVar18 - (int)((double)animationSpeed * dVar27)) {
              uVar20 = FastDoubleToInt
                                 ((double)(float)((double)animationSpeed *
                                                 (double)(float)((double)*(float *)((int)pvVar8 +
                                                                                   0x18) * dVar28)))
              ;
              *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
              sound_MobyPlay_oClass(2,0,g_MobyInstance + *(int *)uVar24,0x28f);
            }
          }
          uVar19 = 0;
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 4);
      *(undefined4 *)((int)pvVar8 + 0x8c) = uVar19;
      iVar17 = FastDecTimerS16(uVar26 + 0x12);
      if (((iVar17 != 0) ||
          ((iVar17 = MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x70)), iVar17 != 0
           && (g_framesNotGrounded == 0)))) ||
         (iVar17 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x128)), iVar17 != 0)
         ) {
        iVar17 = 0;
        uVar24 = uVar26;
        do {
          iVar18 = *(int *)uVar24;
          if ((iVar18 == -1) || (g_MobyInstance[iVar18].oClass != BUTTON_033E)) {
            if (iVar18 != -1) {
              FUN_001eec10(g_MobyInstance + iVar18);
            }
          }
          else {
            g_MobyInstance[iVar18].state = '\x01';
          }
          iVar17 = iVar17 + 1;
          uVar24 = uVar24 + 4;
        } while (iVar17 < 4);
        uVar20 = FastDoubleToInt
                           ((double)(animationSpeed * (float)((double)DAT_00854a30 * dVar28)));
        *(undefined2 *)((int)pvVar8 + 0x10) = uVar20;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(4,0x404c60);
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar48);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar20 = storeVectorElementHalfWordIndexed(auVar41,0x12,uVar26);
        *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
        *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
        moby->state = '\x01';
      }
    }
    goto LAB_00406360;
  }
  iVar17 = 0;
  pMVar25 = (MobyInstance *)0x0;
  uVar24 = uVar26;
  do {
    iVar18 = *(int *)((int)uVar24 + 0x74);
    if ((iVar18 != -1) &&
       ((pMVar25 == (MobyInstance *)0x0 ||
        (fVar6 = (pMVar25->pos).y - GameCamera.posY, fVar3 = (pMVar25->pos).x - GameCamera.posX,
        fVar2 = g_MobyInstance[iVar18].pos.y - GameCamera.posY,
        fVar4 = g_MobyInstance[iVar18].pos.x - GameCamera.posX,
        SQRT(fVar4 * fVar4 + fVar2 * fVar2) < SQRT(fVar3 * fVar3 + fVar6 * fVar6))))) {
      pMVar25 = g_MobyInstance + iVar18;
    }
    iVar17 = iVar17 + 1;
    uVar24 = uVar24 + 4;
  } while (iVar17 < 3);
  pMoby = *(MobyInstance **)((int)pvVar8 + 0x84);
  if ((pMoby == (MobyInstance *)0x0) ||
     (fVar6 = (pMoby->pos).y - GameCamera.posY, fVar2 = (pMVar25->pos).y - GameCamera.posY,
     fVar3 = (pMoby->pos).x - GameCamera.posX, fVar4 = (pMVar25->pos).x - GameCamera.posX,
     SQRT(fVar4 * fVar4 + fVar2 * fVar2) < SQRT(fVar3 * fVar3 + fVar6 * fVar6))) {
    if (pMoby != (MobyInstance *)0x0) {
      iVar17 = *(int *)((int)pvVar8 + 0x14);
      if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == pMoby)) &&
         (g_SoundChannels[iVar17].state != '\0')) {
        sound_Kill(iVar17);
      }
      iVar17 = *(int *)((int)pvVar8 + 0x80);
      *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
      if (((iVar17 != -1) &&
          (g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
         (g_SoundChannels[iVar17].state != '\0')) {
        sound_Kill(iVar17);
      }
      *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
    }
    *(MobyInstance **)((int)pvVar8 + 0x84) = pMVar25;
    pMoby = pMVar25;
  }
  iVar17 = IsMobyPlayingSound(pMoby,*(int *)((int)pvVar8 + 0x14));
  if (iVar17 == 0) {
    iVar17 = sound_MobyPlay_oClass(0,5,*(MobyInstance **)((int)pvVar8 + 0x84),0x28f);
    *(int *)((int)pvVar8 + 0x14) = iVar17;
  }
  if ((moby->state == '\x01') &&
     (iVar17 = IsMobyPlayingSound
                         (*(MobyInstance **)((int)pvVar8 + 0x84),*(int *)((int)pvVar8 + 0x80)),
     iVar17 == 0)) {
    iVar17 = sound_MobyPlay_oClass(1,5,*(MobyInstance **)((int)pvVar8 + 0x84),0x28f);
    *(int *)((int)pvVar8 + 0x80) = iVar17;
  }
  iVar17 = FastDecTimerS16(uVar26 + 0x12);
  if ((iVar17 != 0) && (moby->state == '\x02')) {
    uVar20 = FastDoubleToInt((double)(animationSpeed * DAT_00854a30 * 60.0));
    *(undefined2 *)((int)pvVar8 + 0x10) = uVar20;
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar39 = loadVectorLeftIndexed(4,0x404c60);
    auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar39,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar48);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar20 = storeVectorElementHalfWordIndexed(auVar41,0x12,uVar26);
    *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
    *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
    moby->state = '\x01';
  }
  iVar17 = 0;
  dVar27 = 60.0;
  uVar24 = uVar26;
  do {
    piVar23 = (int *)uVar24;
    iVar18 = *piVar23;
    if (((iVar18 == -1) || (g_MobyInstance[iVar18].oClass != BUTTON_033E)) ||
       (g_MobyInstance[iVar18].state != '\x02')) {
      if ((iVar18 != -1) &&
         (iVar18 = M1180_001eebe4(g_MobyInstance + iVar18), iVar18 != 0)) {
        uVar20 = FastDoubleToInt
                           ((double)(animationSpeed *
                                    (float)((double)*(float *)((int)pvVar8 + 0x18) * dVar27)));
        *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
        moby->state = '\x03';
        sound_MobyPlay_oClass(2,0,g_MobyInstance + *piVar23,0x28f);
        *(undefined4 *)((int)pvVar8 + 0x8c) = 0;
      }
    }
    else {
      uVar20 = FastDoubleToInt
                         ((double)(animationSpeed *
                                  (float)((double)*(float *)((int)pvVar8 + 0x18) * dVar27)));
      *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
      moby->state = '\x03';
      sound_MobyPlay_oClass(2,0,g_MobyInstance + *piVar23,0x28f);
      *(undefined4 *)((int)pvVar8 + 0x8c) = 0;
    }
    iVar17 = iVar17 + 1;
    uVar24 = uVar24 + 4;
  } while (iVar17 < 4);
LAB_00406360:
  iVar17 = 0;
  do {
    iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar26 + 0x60));
    if ((iVar18 != 0) && (iVar18 = Hero_IsSwimming(), iVar18 != 0)) {
      g_heroWaterZ = Cuboids[*(int *)((int)uVar26 + 0x60)].pos.z;
    }
    iVar17 = iVar17 + 1;
    uVar26 = uVar26 + 4;
  } while (iVar17 < 4);
                    /* WARNING: Read-only address (ram,0x00404cb0) is written */
                    /* WARNING: Read-only address (ram,0x00404cc0) is written */
                    /* WARNING: Read-only address (ram,0x00404cd0) is written */
                    /* WARNING: Read-only address (ram,0x00404cf0) is written */
                    /* WARNING: Read-only address (ram,0x00404d00) is written */
  return;
}


