// game/update/moby185.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2c5db8-0x2c7fa0
#include <math.h>
#include "game/update/moby185.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby1849.h"
#include "game/update/moby1850.h"
#include "game/update/moby270.h"
#include "game/update/moby804.h"
#include "idol/fastfunc.h"

// 0x02c5db8 (0x17c bytes)
void M1849_002c5db8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (DAT_010a10a0 != 0) {
    DAT_010a10a0 = 0;
    dVar12 = (double)FastIntToDouble(0xc);
    DAT_010a1300 = (float)((double)DAT_007bd344 / dVar12);
    pfVar8 = (float *)&DAT_010a10c0;
    lVar11 = 0xb;
    DAT_010a10c0 = *puVar2;
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
    DAT_010a10c4 = puVar2[1];
    DAT_010a10c8 = puVar2[2];
    fVar3 = -(DAT_010a1300 * *(float *)(param_1 + 0xd0));
    DAT_010a10cc = puVar2[3];
    fVar4 = -(DAT_010a1300 * *(float *)(param_1 + 0xd4));
    fVar5 = -(DAT_010a1300 * *(float *)(param_1 + 0xd8));
    pfVar6 = pfVar8;
    do {
      pfVar6[4] = *pfVar8 + fVar3;
      pfVar6[5] = pfVar8[1] + fVar4;
      pfVar6[6] = pfVar8[2] + fVar5;
      pfVar7 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      pfVar6[7] = *pfVar7;
      lVar11 = lVar11 + -1;
      pfVar6 = pfVar6 + 4;
    } while (lVar11 != 0);
    DAT_010a2210 = 0;
    DAT_010a22b4 = 0;
    DAT_010a2214 = 0;
    DAT_010a2218 = 0;
    DAT_010a1304 = 0;
    iVar9 = 0;
    do {
      iVar10 = iVar9 + 1;
      (&DAT_010a22b0)[iVar9] = 0;
      (&DAT_010a2250)[iVar9 * 4] = fVar3;
      (&DAT_010a2254)[iVar9 * 4] = fVar4;
      (&DAT_010a2258)[iVar9 * 4] = fVar5;
      (&DAT_010a225c)[iVar9 * 4] = uVar1;
      iVar9 = iVar10;
    } while (iVar10 < 3);
  }
  return;
}


// 0x02c5f88 (0x1364 bytes)
// inlined: FastRSqrt @0x2c6594, FastRSqrt @0x2c6600, FastRSqrt @0x2c6e90, FastRSqrt @0x2c7120, FastRSqrt @0x2c7204
// strings: 002c5f38: '?fff' (raw)

void M185_002c5f88(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar14;
  longlong lVar13;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  float fVar44;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float afStack_140 [4];
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120 [6];
  longlong local_108;
  
  pfVar9 = *(float **)((int)param_1 + 0x78);
  M1849_002c5db8();
  DAT_010a1304 = MB_WrapRot(DAT_010a1304 + DAT_007bd354);
  MB_SphericalToVector(DAT_010a1300,pfVar9[0x12],pfVar9[0x13],&local_1b0);
  if (((MobyInstance *)pfVar9[4] == (MobyInstance *)0x0) ||
     (iVar14 = MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar9[4]), iVar14 == 0)) {
    MB_SphericalToVector(DAT_007bd344,pfVar9[0x12],pfVar9[0x13],&local_1a0);
    local_1a0 = local_1a0 + *pfVar9;
    local_19c = local_19c + pfVar9[1];
    fVar10 = pfVar9[2];
  }
  else {
    fVar10 = pfVar9[4];
    local_1a0 = *(float *)((int)fVar10 + 0x10);
    local_19c = *(float *)((int)fVar10 + 0x14);
    local_198 = *(float *)((int)fVar10 + 0x18);
    local_194 = *(undefined4 *)((int)fVar10 + 0x1c);
    fVar10 = *(float *)(iVar14 + 0x10);
  }
  local_198 = local_198 + fVar10;
  fVar10 = pfVar9[4];
  dVar38 = (double)DAT_007bd344;
  if (fVar10 == 0.0) {
    iVar14 = CollLine(pfVar9,&local_1a0,0x14,g_heroMobyPtr,0);
    DAT_010a10c0 = *pfVar9;
    if (iVar14 != 0) {
      dVar38 = (double)SQRT((g_CollOutput.ip.x - DAT_010a10c0) * (g_CollOutput.ip.x - DAT_010a10c0) +
                            (g_CollOutput.ip.y - pfVar9[1]) * (g_CollOutput.ip.y - pfVar9[1]));
    }
  }
  else {
    DAT_010a10c0 = *pfVar9;
    fVar2 = *(float *)((int)fVar10 + 0x14) - pfVar9[1];
    fVar10 = *(float *)((int)fVar10 + 0x10) - DAT_010a10c0;
    dVar38 = (double)SQRT(fVar10 * fVar10 + fVar2 * fVar2);
  }
  DAT_010a1300 = (float)((double)DAT_007bd34c * dVar38);
  lVar21 = 1;
  DAT_010a10c4 = pfVar9[1];
  DAT_010a10c8 = pfVar9[2];
  DAT_010a10cc = pfVar9[3];
  DAT_010a1180 = *pfVar9;
  DAT_010a1184 = pfVar9[1];
  DAT_010a1188 = pfVar9[2];
  DAT_010a118c = pfVar9[3];
  DAT_010a1240 = *pfVar9;
  DAT_010a1244 = pfVar9[1];
  DAT_010a1248 = pfVar9[2];
  DAT_010a124c = pfVar9[3];
  do {
    iVar15 = (int)lVar21;
    iVar14 = iVar15 * 0x10;
    pfVar18 = &DAT_010a10c0 + iVar15 * 4;
    pfVar19 = (float *)(iVar14 + 0x10a10b0);
    dVar32 = (double)(*pfVar18 - *pfVar19);
    dVar36 = (double)((&DAT_010a10c4)[iVar15 * 4] - *(float *)(iVar14 + 0x10a10b4));
    dVar35 = (double)((&DAT_010a10c8)[iVar15 * 4] - (float)(&DAT_010a10b8)[iVar15 * 4]);
    dVar22 = (double)FastIntToDouble(lVar21);
    dVar23 = (double)local_1b0;
    dVar37 = (double)(float)(dVar22 * (double)DAT_007bd34c);
    dVar24 = (double)local_1ac;
    dVar25 = (double)local_1a8;
    dVar22 = (double)(float)(dVar37 * -0.4999999701976776 + 0.8999999761581421);
    if ((DAT_007bd350 < iVar15) && (fVar10 = pfVar9[4], fVar10 != 0.0)) {
      fVar2 = *(float *)((int)fVar10 + 0x14) - (&DAT_010a10c4)[iVar15 * 4];
      fVar44 = *(float *)((int)fVar10 + 0x10) - *pfVar18;
      fVar4 = *(float *)((int)fVar10 + 0x18) - (&DAT_010a10c8)[iVar15 * 4];
      dVar26 = 0.0;
      local_1a4 = *(undefined4 *)((int)fVar10 + 0x1c);
      fVar10 = SQRT(fVar4 * fVar4 + fVar44 * fVar44 + fVar2 * fVar2);
      fVar5 = DAT_010a1300 / fVar10;
      dVar33 = dVar26;
      if (0.0 - fVar10 < 0.0) {
        dVar33 = (double)(fVar5 * fVar4);
      }
      dVar29 = dVar26;
      if (0.0 - fVar10 < 0.0) {
        dVar29 = (double)(fVar5 * fVar2);
      }
      if (0.0 - fVar10 < 0.0) {
        dVar26 = (double)(fVar5 * fVar44);
      }
      if (fVar10 - 0.0 < 0.0) {
        dVar33 = (double)(fVar5 * fVar4);
      }
      if (fVar10 - 0.0 < 0.0) {
        dVar29 = (double)(fVar5 * fVar2);
      }
      if (fVar10 - 0.0 < 0.0) {
        dVar26 = (double)(fVar5 * fVar44);
      }
      local_1a8 = (float)((double)(float)(dVar33 - dVar25) * 0.20000000298023224 + dVar25);
      dVar25 = (double)local_1a8;
      local_1ac = (float)((double)(float)(dVar29 - dVar24) * 0.20000000298023224 + dVar24);
      dVar24 = (double)local_1ac;
      local_1b0 = (float)((double)(float)(dVar26 - dVar23) * 0.20000000298023224 + dVar23);
      dVar23 = (double)local_1b0;
    }
    fVar10 = (float)(dVar22 * (double)(float)(dVar24 - dVar36) + dVar36);
    fVar2 = (float)(dVar22 * (double)(float)(dVar23 - dVar32) + dVar32);
    fVar44 = (float)(dVar22 * (double)(float)(dVar25 - dVar35) + dVar35);
    dVar22 = 0.0;
    fVar4 = SQRT(fVar44 * fVar44 + fVar2 * fVar2 + fVar10 * fVar10);
    if (fVar4 == 0.0) {
      local_170 = *pfVar19;
      *pfVar18 = local_170;
      (&DAT_010a10c4)[iVar15 * 4] = (float)*(undefined4 *)(iVar14 + 0x10a10b4);
      (&DAT_010a10c8)[iVar15 * 4] = (float)(&DAT_010a10b8)[iVar15 * 4];
      uVar3 = *(undefined4 *)(iVar14 + 0x10a10bc);
    }
    else {
      fVar4 = DAT_010a1300 / fVar4;
      local_170 = fVar4 * fVar2 + *pfVar19;
      *pfVar18 = local_170;
      (&DAT_010a10c4)[iVar15 * 4] = fVar4 * fVar10 + *(float *)(iVar14 + 0x10a10b4);
      (&DAT_010a10c8)[iVar15 * 4] = fVar4 * fVar44 + (float)(&DAT_010a10b8)[iVar15 * 4];
      uVar3 = *(undefined4 *)(iVar14 + 0x10a10bc);
    }
    (&DAT_010a10cc)[iVar15 * 4] = (float)uVar3;
    local_170 = local_170 - *pfVar19;
    local_16c = (&DAT_010a10c4)[iVar15 * 4] - *(float *)(iVar14 + 0x10a10b4);
    local_168 = (&DAT_010a10c8)[iVar15 * 4] - (float)(&DAT_010a10b8)[iVar15 * 4];
    fVar2 = g_heroGravityDir * local_16c - DAT_00969f74 * local_170;
    iVar20 = 0;
    fVar44 = DAT_00969f74 * local_168 - DAT_00969f78 * local_16c;
    iVar14 = 0x10a1310;
    fVar10 = DAT_00969f78 * local_170 - g_heroGravityDir * local_168;
    local_164 = (&DAT_010a10cc)[iVar15 * 4];
    local_154 = 0.0;
    fVar4 = SQRT(fVar2 * fVar2 + fVar44 * fVar44 + fVar10 * fVar10);
    fVar5 = (float)((double)(float)((double)DAT_007bd368 - (double)DAT_007bd364) * dVar37 +
                   (double)DAT_007bd364) / fVar4;
    dVar23 = dVar22;
    if (0.0 - fVar4 < 0.0) {
      dVar23 = (double)(fVar44 * fVar5);
    }
    dVar24 = dVar22;
    if (0.0 - fVar4 < 0.0) {
      dVar24 = (double)(fVar10 * fVar5);
    }
    dVar25 = dVar22;
    if (0.0 - fVar4 < 0.0) {
      dVar25 = (double)(fVar2 * fVar5);
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar23 = (double)(fVar44 * fVar5);
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar24 = (double)(fVar10 * fVar5);
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar25 = (double)(fVar2 * fVar5);
    }
    local_160 = (float)dVar23;
    local_15c = (float)dVar24;
    local_158 = (float)dVar25;
    do {
      local_108 = (longlong)iVar20;
      MB_RotateQuatAxisAngle((float)local_108 * DAT_007bd360,&local_150,&local_160);
      dVar25 = (double)*pfVar18;
      pfVar19 = (float *)(iVar14 + (int)(lVar21 << 8) + (int)(lVar21 << 6));
      iVar20 = iVar20 + 1;
      iVar14 = iVar14 + 0x10;
      *pfVar19 = (float)((double)local_150 + dVar25);
      dVar24 = (double)(&DAT_010a10c4)[iVar15 * 4];
      pfVar19[1] = (float)((double)local_14c + dVar24);
      dVar23 = (double)(&DAT_010a10c8)[iVar15 * 4];
      pfVar19[2] = (float)((double)local_148 + dVar23);
      pfVar19[3] = local_144;
    } while (iVar20 < 0x14);
    dVar26 = (double)local_154;
    dVar33 = (double)(&DAT_010a10cc)[iVar15 * 4];
    fVar10 = local_168 * local_168 + local_170 * local_170 + local_16c * local_16c;
    dVar32 = dVar22;
    dVar35 = dVar22;
    dVar36 = dVar22;
    if ((double)SQRT(fVar10) != dVar22) {
      fVar2 = 1.0 / SQRT(fVar10);
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar36 = (double)(local_170 * fVar2);
      dVar35 = (double)(local_16c * fVar2);
      dVar32 = (double)(local_168 * fVar2);
    }
    fVar10 = local_158 * local_158 + local_160 * local_160 + local_15c * local_15c;
    dVar29 = dVar22;
    dVar30 = dVar22;
    dVar31 = dVar22;
    if ((double)SQRT(fVar10) != dVar22) {
      fVar2 = 1.0 / SQRT(fVar10);
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar29 = (double)(local_160 * fVar2);
      dVar30 = (double)(local_15c * fVar2);
      dVar31 = (double)(local_158 * fVar2);
    }
    dVar28 = (double)(float)(dVar35 * dVar31 - (double)(float)(dVar32 * dVar30));
    dVar27 = (double)(float)(dVar32 * dVar29 - (double)(float)(dVar36 * dVar31));
    dVar35 = (double)(float)(dVar36 * dVar30 - (double)(float)(dVar35 * dVar29));
    dVar36 = (double)(float)((double)(float)((double)DAT_007bd380 - (double)DAT_007bd37c) * dVar37 +
                            (double)DAT_007bd37c);
    dVar32 = (double)FastIntToDouble(lVar21);
    fVar44 = MB_WrapRot((float)((double)DAT_007bd358 * dVar32 + (double)DAT_010a1304));
    fVar10 = fVar44 + 1.5707963;
    fVar2 = 3.1415925 - fVar44;
    if (fVar44 - (3.1415925 - fVar44) < 0.0) {
      fVar2 = fVar44;
    }
    lVar21 = (longlong)(iVar15 + 1);
    fVar4 = 3.1415925 - fVar10;
    if (fVar10 - (3.1415925 - fVar10) < 0.0) {
      fVar4 = fVar10;
    }
    fVar5 = -3.1415925 - fVar44;
    if ((-3.1415925 - fVar44) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = -3.1415925 - fVar10;
    if ((-3.1415925 - fVar10) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    fVar10 = fVar5 * fVar5;
    fVar44 = fVar2 * fVar2;
    fVar7 = fVar10 * fVar10 * fVar5;
    fVar4 = fVar44 * fVar44 * fVar2;
    fVar1 = fVar10 * fVar7;
    fVar6 = fVar44 * fVar4;
    dVar32 = (double)(float)(dVar36 * (double)(fVar10 * fVar1 * 2.601887e-06 +
                                              fVar1 * -0.0001980741 +
                                              fVar7 * 0.0083330255 +
                                              fVar10 * fVar5 * -0.16666657 + fVar5));
    dVar36 = (double)(float)(dVar36 * (double)(fVar44 * fVar6 * 2.601887e-06 +
                                              fVar6 * -0.0001980741 +
                                              fVar4 * 0.0083330255 +
                                              fVar44 * fVar2 * -0.16666657 + fVar2));
    fVar10 = (float)(dVar26 * dVar32 + dVar33);
    (&DAT_010a118c)[iVar15 * 4] = fVar10;
    (&DAT_010a1180)[iVar15 * 4] =
         (float)(dVar28 * dVar36 + (double)(float)(dVar29 * dVar32 + dVar25));
    (&DAT_010a1184)[iVar15 * 4] =
         (float)(dVar27 * dVar36 + (double)(float)(dVar30 * dVar32 + dVar24));
    (&DAT_010a1188)[iVar15 * 4] =
         (float)(dVar35 * dVar36 + (double)(float)(dVar31 * dVar32 + dVar23));
    (&DAT_010a124c)[iVar15 * 4] = fVar10;
    (&DAT_010a1240)[iVar15 * 4] =
         (float)((double)(float)(dVar29 * dVar32 + -(double)(float)(dVar36 * dVar28)) + dVar25);
    (&DAT_010a1244)[iVar15 * 4] =
         (float)((double)(float)(dVar30 * dVar32 + -(double)(float)(dVar36 * dVar27)) + dVar24);
    (&DAT_010a1248)[iVar15 * 4] =
         (float)((double)(float)(dVar31 * dVar32 + -(double)(float)(dVar36 * dVar35)) + dVar23);
  } while (iVar15 + 1 < 0xc);
  RegisterPostDraw(&PTR_M1850_002c8ff8_0070b0f8,param_1);
  dVar24 = 0.10000000149011612;
  dVar23 = (double)MB_randRangeFloat(0.1,2.0);
  lVar21 = MB_randInt(2);
  lVar21 = lVar21 + (ZERO_MASK((int)lVar21) & ((int)lVar21 + -1) - lVar21);
  iVar14 = MB_randInt(2);
  if (iVar14 == 0) {
    local_190 = DAT_010a1230;
    local_18c = DAT_010a1234;
    local_188 = DAT_010a1238;
    local_184 = DAT_010a123c;
    dVar25 = 30.5;
    local_108 = (longlong)(int)(animationSpeed * 30.5);
    uVar34 = 0x3f689374c0000000;
    SpawnPart_53
              ((double)(float)(dVar23 * dVar24),dVar23,0x3f689374c0000000,&local_190,
               (int)(animationSpeed * 30.5));
    lVar21 = -lVar21;
    local_108 = (longlong)(int)((double)animationSpeed * dVar25);
    SpawnPart_53
              ((double)(float)(dVar23 * 0.07000000029802322),
               (double)(float)(dVar23 * 0.699999988079071),uVar34,&local_190,
               (int)((double)animationSpeed * dVar25));
  }
  iVar14 = MB_randInt(2);
  if (iVar14 == 0) {
    local_190 = DAT_010a12f0;
    local_18c = DAT_010a12f4;
    local_188 = DAT_010a12f8;
    local_184 = DAT_010a12fc;
    dVar25 = 30.5;
    local_108 = (longlong)(int)(animationSpeed * 30.5);
    uVar34 = 0x3f689374c0000000;
    SpawnPart_53
              ((double)(float)(dVar23 * dVar24),dVar23,0x3f689374c0000000,&local_190,
               (int)(animationSpeed * 30.5));
    lVar21 = -lVar21;
    local_108 = (longlong)(int)((double)animationSpeed * dVar25);
    SpawnPart_53
              ((double)(float)(dVar23 * 0.07000000029802322),
               (double)(float)(dVar23 * 0.699999988079071),uVar34,&local_190,
               (int)((double)animationSpeed * dVar25));
  }
  fVar2 = DAT_010a10d4 - DAT_010a10c4;
  fVar44 = DAT_010a10d0 - DAT_010a10c0;
  fVar4 = DAT_010a10d8 - DAT_010a10c8;
  local_174 = DAT_010a10dc;
  dVar32 = (double)SQRT(fVar4 * fVar4 + fVar44 * fVar44 + fVar2 * fVar2);
  fVar10 = (float)((double)(DAT_0071f408 * DAT_007bd384) / dVar32);
  dVar25 = dVar22;
  if (dVar22 - dVar32 < 0.0) {
    dVar25 = (double)(fVar44 * fVar10);
  }
  dVar35 = dVar22;
  if (dVar22 - dVar32 < 0.0) {
    dVar35 = (double)(fVar2 * fVar10);
  }
  dVar36 = dVar22;
  if (dVar22 - dVar32 < 0.0) {
    dVar36 = (double)(fVar4 * fVar10);
  }
  if (dVar32 - dVar22 < 0.0) {
    dVar25 = (double)(fVar44 * fVar10);
  }
  if (dVar32 - dVar22 < 0.0) {
    dVar35 = (double)(fVar2 * fVar10);
  }
  if (dVar32 - dVar22 < 0.0) {
    dVar36 = (double)(fVar4 * fVar10);
  }
  local_180 = (float)dVar25;
  local_17c = (float)dVar35;
  local_178 = (float)dVar36;
  iVar14 = MB_randInt(2);
  if (iVar14 == 0) {
    fVar2 = *(float *)((int)param_1 + 0xd4);
    fVar44 = *(float *)((int)param_1 + 0xd0);
    fVar4 = *(float *)((int)param_1 + 0xd8);
    local_184 = DAT_010a10cc;
    dVar32 = (double)SQRT(fVar4 * fVar4 + fVar44 * fVar44 + fVar2 * fVar2);
    local_120[0] = 0x7f207f7f;
    local_120[1] = 0x7f7f2020;
    local_120[2] = 0x7f20207f;
    local_120[3] = 0x7f7f207f;
    local_120[4] = 0x7f7f7f20;
    fVar10 = (float)((double)DAT_007bd390 / dVar32);
    dVar25 = dVar22;
    if (dVar22 - dVar32 < 0.0) {
      dVar25 = (double)(fVar4 * fVar10);
    }
    dVar35 = dVar22;
    if (dVar22 - dVar32 < 0.0) {
      dVar35 = (double)(fVar2 * fVar10);
    }
    dVar36 = dVar22;
    if (dVar22 - dVar32 < 0.0) {
      dVar36 = (double)(fVar44 * fVar10);
    }
    if (dVar32 - dVar22 < 0.0) {
      dVar25 = (double)(fVar4 * fVar10);
    }
    if (dVar32 - dVar22 < 0.0) {
      dVar35 = (double)(fVar2 * fVar10);
    }
    if (dVar32 - dVar22 < 0.0) {
      dVar36 = (double)(fVar44 * fVar10);
    }
    local_188 = (float)((double)DAT_010a10c8 + dVar25);
    local_18c = (float)((double)DAT_010a10c4 + dVar35);
    local_190 = (float)((double)DAT_010a10c0 + dVar36);
    lVar13 = MB_randInt(5);
    uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar13 << 2));
    dVar25 = (double)MB_randRangeSigned(dVar22,(double)DAT_007bd38c);
    dVar32 = (double)MB_randRangeSigned(dVar22,(double)DAT_007bd38c);
    MB_RotateQuatAxisAngle((float)dVar32,afStack_140,&local_180);
    local_124 = 0;
    local_130 = DAT_00969f74 * local_178 - DAT_00969f78 * local_17c;
    local_128 = g_heroGravityDir * local_17c - DAT_00969f74 * local_180;
    local_12c = DAT_00969f78 * local_180 - g_heroGravityDir * local_178;
    MB_RotateQuatAxisAngle((float)dVar25,afStack_140,afStack_140);
    lVar13 = FastDoubleToInt
                       ((double)((float)(dVar38 * 1.2000000476837158) /
                                (DAT_0071f408 * DAT_007bd384)));
    lVar16 = (longlong)((int)lVar13 * 3);
    uVar17 = ZERO_MASK((int)pfVar9[4]) & lVar13 - lVar16;
    lVar13 = lVar16 + uVar17;
    SpawnPart_78
              ((double)(float)(dVar23 * dVar24),dVar23,&local_190,lVar13,lVar16,uVar17,uVar3,0,
               lVar21,afStack_140);
    SpawnPart_78
              ((double)(float)(dVar23 * 0.07000000029802322),
               (double)(float)(dVar23 * 0.699999988079071),&local_190,lVar13);
  }
  iVar14 = FastDecTimerS32(&DAT_010a22b4);
  if (iVar14 != 0) {
    uVar17 = 0;
    auVar39 = loadVectorLeftIndexed(0xffffffffffffd394,0x7c0000);
    auVar40 = loadVectorLeftIndexed(0x10,0x2c5f34);
    auVar42 = vectorConvertFromSignedFixedPointWord(auVar39,0);
    auVar39 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar39 = ZEXT416(0xffffffff);
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    dVar38 = 0.5;
    auVar39 = vectorAddFloatingPoint(auVar42,auVar41);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar43);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010a22b4 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x22b4,
                              0x10a0000);
    do {
      iVar14 = (int)uVar17;
      if ((&DAT_010a22b0)[iVar14] == '\0') {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0xffffffffffffd39c,0x7c0000);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar39,0);
        (&DAT_010a22b0)[iVar14] = 1;
        fVar10 = DAT_007bd3ac;
        iVar20 = (int)((uVar17 & 0xffffffff) << 2);
        auVar39 = vectorAddFloatingPoint(auVar39,auVar41);
        iVar15 = DAT_007bd3b0 >> 0x18;
        auVar39 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar42);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           (longlong)iVar20,0x10a2280);
        *(undefined4 *)(&DAT_010a2280 + iVar20) = uVar3;
        *(undefined4 *)(&DAT_010a2298 + iVar20) = 0;
        *(float *)(&DAT_010a22a4 + iVar20) = fVar10;
        dVar23 = (double)FastIntToDouble(iVar15);
        *(float *)(&DAT_010a228c + iVar20) = (float)dVar23;
        (&DAT_010a2220)[iVar14 * 4] = *pfVar9;
        (&DAT_010a2224)[iVar14 * 4] = pfVar9[1];
        (&DAT_010a2228)[iVar14 * 4] = pfVar9[2];
        (&DAT_010a222c)[iVar14 * 4] = pfVar9[3];
        uVar3 = DAT_010a10dc;
        fVar10 = DAT_010a10d4 - DAT_010a10c4;
        fVar2 = DAT_010a10d0 - DAT_010a10c0;
        fVar44 = DAT_010a10d8 - DAT_010a10c8;
        dVar35 = (double)(fVar44 * fVar44 + fVar2 * fVar2 + fVar10 * fVar10);
        dVar23 = dVar22;
        dVar25 = dVar22;
        dVar32 = dVar22;
        if ((double)(float)SQRT(dVar35) != dVar22) {
          dVar23 = 1.0 / SQRT(dVar35);
          dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar23) * dVar23 - 1.0)
                                   * (double)(float)(dVar38 * dVar23) + dVar23);
          dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar23) * dVar23 - 1.0)
                                   * (double)(float)(dVar38 * dVar23) + dVar23);
          fVar4 = (float)(-(double)(float)((double)(float)(dVar35 * dVar23) * dVar23 - 1.0) *
                          (double)(float)(dVar38 * dVar23) + dVar23);
          dVar32 = (double)(fVar4 * fVar2);
          dVar25 = (double)(fVar4 * fVar10);
          dVar23 = (double)(fVar4 * fVar44);
        }
        (&DAT_010a2250)[iVar14 * 4] = (float)dVar32;
        (&DAT_010a2254)[iVar14 * 4] = (float)dVar25;
        (&DAT_010a2258)[iVar14 * 4] = (float)dVar23;
        (&DAT_010a225c)[iVar14 * 4] = uVar3;
        break;
      }
      uVar17 = (ulonglong)(iVar14 + 1);
    } while (iVar14 + 1 < 3);
  }
  iVar14 = 0;
  dVar23 = 1.0;
  dVar38 = 0.5;
  do {
    if ((&DAT_010a22b0)[iVar14] != '\0') {
      iVar20 = iVar14 * 4;
      iVar15 = FastDecTimerS32(&DAT_010a2280 + iVar20);
      fVar4 = DAT_010a1300;
      fVar44 = DAT_007bd398;
      fVar2 = DAT_007bd344;
      fVar10 = g_FrameTime;
      dVar25 = (double)DAT_007bd3a8;
      dVar32 = (double)DAT_007bd3ac;
      if (iVar15 == 0) {
        if (*(int *)(&DAT_010a2280 + iVar20) < DAT_007bd3a0) {
          *(float *)(&DAT_010a228c + iVar20) = *(float *)(&DAT_010a228c + iVar20) - DAT_007bd3b8;
        }
        fVar5 = fVar10 * fVar44 + *(float *)(&DAT_010a2298 + iVar20);
        dVar35 = (double)(fVar5 / fVar2);
        *(float *)(&DAT_010a2298 + iVar20) = fVar5;
        if (dVar23 - dVar35 < 0.0) {
          dVar35 = dVar23;
        }
        *(float *)(&DAT_010a22a4 + iVar20) =
             (float)((double)(float)(dVar25 - dVar32) * dVar35 + dVar32);
        if (fVar5 < fVar2) {
          lVar21 = FastDoubleToInt((double)(fVar5 / fVar4));
          dVar25 = (double)FastIntToDouble();
          fVar4 = *(float *)(&DAT_010a2298 + iVar20);
          dVar32 = (double)DAT_010a1300;
          iVar15 = (int)(lVar21 << 4);
          fVar10 = *(float *)((int)&DAT_010a10c0 + iVar15);
          (&DAT_010a2220)[iVar14 * 4] = fVar10;
          fVar2 = *(float *)((int)&DAT_010a10c4 + iVar15);
          (&DAT_010a2224)[iVar14 * 4] = fVar2;
          fVar44 = *(float *)((int)&DAT_010a10c8 + iVar15);
          (&DAT_010a2228)[iVar14 * 4] = fVar44;
          uVar3 = *(undefined4 *)((int)&DAT_010a10cc + iVar15);
          (&DAT_010a222c)[iVar14 * 4] = uVar3;
          if ((int)lVar21 == 0xb) {
            fVar7 = fVar44;
            fVar1 = *(float *)((int)&DAT_010a10b8 + iVar15);
            fVar6 = fVar2;
            fVar11 = *(float *)(iVar15 + 0x10a10b4);
            fVar5 = fVar10;
            fVar12 = *(float *)(iVar15 + 0x10a10b0);
            uVar8 = uVar3;
          }
          else {
            fVar5 = *(float *)((int)&DAT_010a10d0 + iVar15);
            fVar6 = *(float *)((int)&DAT_010a10d4 + iVar15);
            fVar7 = *(float *)((int)&DAT_010a10d8 + iVar15);
            uVar8 = *(undefined4 *)((int)&DAT_010a10dc + iVar15);
            fVar1 = fVar44;
            fVar11 = fVar2;
            fVar12 = fVar10;
          }
          fVar6 = fVar6 - fVar11;
          fVar7 = fVar7 - fVar1;
          fVar5 = fVar5 - fVar12;
          dVar36 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
          dVar35 = (double)(float)SQRT(dVar36);
          if (dVar35 != dVar22) {
            dVar37 = 1.0 / SQRT(dVar36);
            (&DAT_010a222c)[iVar14 * 4] = uVar3;
            dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar37) * dVar37 -
                                                     dVar23) * (double)(float)(dVar37 * dVar38) +
                                    dVar37);
            dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar37) * dVar37 -
                                                     dVar23) * (double)(float)(dVar37 * dVar38) +
                                    dVar37);
            dVar36 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar37) * dVar37 -
                                                     dVar23) * (double)(float)(dVar37 * dVar38) +
                                    dVar37);
            fVar1 = (float)(dVar36 / dVar35);
            fVar4 = (float)(dVar36 * -(double)(float)(dVar25 * dVar32 - (double)fVar4));
            (&DAT_010a2220)[iVar14 * 4] = fVar4 * fVar5 + fVar10;
            (&DAT_010a2224)[iVar14 * 4] = fVar4 * fVar6 + fVar2;
            (&DAT_010a2228)[iVar14 * 4] = fVar4 * fVar7 + fVar44;
            dVar32 = (double)(float)(&DAT_010a2250)[iVar14 * 4];
            dVar25 = dVar22;
            if (dVar22 - dVar35 < 0.0) {
              dVar25 = (double)(fVar6 * fVar1);
            }
            dVar36 = dVar22;
            if (dVar22 - dVar35 < 0.0) {
              dVar36 = (double)(fVar5 * fVar1);
            }
            dVar37 = dVar22;
            if (dVar22 - dVar35 < 0.0) {
              dVar37 = (double)(fVar7 * fVar1);
            }
            if (dVar35 - dVar22 < 0.0) {
              dVar25 = (double)(fVar6 * fVar1);
            }
            if (dVar35 - dVar22 < 0.0) {
              dVar36 = (double)(fVar5 * fVar1);
            }
            if (dVar35 - dVar22 < 0.0) {
              dVar37 = (double)(fVar7 * fVar1);
            }
            fVar10 = (float)((double)(float)(dVar25 - (double)(float)(&DAT_010a2254)[iVar14 * 4]) *
                             dVar24 + (double)(float)(&DAT_010a2254)[iVar14 * 4]);
            fVar2 = (float)((double)(float)(dVar36 - dVar32) * dVar24 + dVar32);
            fVar44 = (float)((double)(float)(dVar37 - (double)(float)(&DAT_010a2258)[iVar14 * 4]) *
                             dVar24 + (double)(float)(&DAT_010a2258)[iVar14 * 4]);
            dVar36 = (double)(fVar44 * fVar44 + fVar2 * fVar2 + fVar10 * fVar10);
            dVar25 = dVar22;
            dVar32 = dVar22;
            dVar35 = dVar22;
            if ((double)(float)SQRT(dVar36) != dVar22) {
              dVar25 = 1.0 / SQRT(dVar36);
              dVar25 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar25) * dVar25 -
                                                       dVar23) * (double)(float)(dVar25 * dVar38) +
                                      dVar25);
              dVar25 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar25) * dVar25 -
                                                       dVar23) * (double)(float)(dVar25 * dVar38) +
                                      dVar25);
              fVar4 = (float)(-(double)(float)((double)(float)(dVar36 * dVar25) * dVar25 - dVar23) *
                              (double)(float)(dVar25 * dVar38) + dVar25);
              dVar35 = (double)(fVar2 * fVar4);
              dVar32 = (double)(fVar10 * fVar4);
              dVar25 = (double)(fVar44 * fVar4);
            }
            (&DAT_010a2250)[iVar14 * 4] = (float)dVar35;
            (&DAT_010a2254)[iVar14 * 4] = (float)dVar32;
            (&DAT_010a2258)[iVar14 * 4] = (float)dVar25;
            (&DAT_010a225c)[iVar14 * 4] = uVar8;
          }
        }
        else {
          fVar10 = fVar10 * fVar44;
          (&DAT_010a2220)[iVar14 * 4] =
               (float)(&DAT_010a2250)[iVar14 * 4] * fVar10 + (float)(&DAT_010a2220)[iVar14 * 4];
          (&DAT_010a2224)[iVar14 * 4] =
               (float)(&DAT_010a2254)[iVar14 * 4] * fVar10 + (float)(&DAT_010a2224)[iVar14 * 4];
          (&DAT_010a2228)[iVar14 * 4] =
               (float)(&DAT_010a2258)[iVar14 * 4] * fVar10 + (float)(&DAT_010a2228)[iVar14 * 4];
        }
      }
      else {
        (&DAT_010a22b0)[iVar14] = 0;
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 3);
  return;
}


// 0x02c7328 (0xc78 bytes)
// inlined: FastAtan2 @0x2c76e8, FastAtan2 @0x2c788c
// strings: 00a0fdc4: 'None'

/* Moby 185 */

void UpdateMoby_185(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  bool bVar14;
  short sVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  MobyInstance *moby_00;
  float *pfVar24;
  float fVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  
  uVar30 = ZEXT48(&stack0x00000000);
  lVar23 = uVar30 - 0x180;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar30;
  puVar12[0x32] = in_LR;
  puVar12[0x2f] = in_f31;
  puVar12[0x2a] = unaff_r27;
  puVar12[0x2e] = unaff_r31;
  puVar12[0x2d] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  uVar32 = ZEXT48(pfVar9);
  uVar1 = moby->state;
  puVar12[0x2c] = unaff_r29;
  iVar20 = DAT_0096ad94;
  puVar12[0x2b] = unaff_r28;
  puVar12[0x29] = unaff_r26;
  if (uVar1 == '\0') {
    moby->state = '\x01';
    DAT_010a10a4 = 0xffffffff;
    DAT_010a10ac = -1;
    DAT_010a10a8 = 0;
  }
  bVar14 = true;
  if ((moby->animationId == '\0') && (dVar34 = (double)BlendAnimFrame(moby), dVar34 < 6.0)
     ) {
    bVar14 = false;
  }
  FastDecTimerS16(uVar32 + 0x1c);
  if (((((g_heroStateType == 0) || (g_heroStateType == 1)) ||
       (g_heroStateType == 0xc)) ||
      ((g_heroStateType == 4 || (g_heroStateType == 5)))) &&
     (((g_Pad.downButtons & DAT_0096ad80) != 0 && (bVar14 && iVar20 != 3)))) {
    if (DAT_0096bd88 == '\0') {
      Hero_PlayFiringAnim();
    }
    if (*(short *)((int)pfVar9 + 0x1e) == 0) {
      *(undefined2 *)((int)pfVar9 + 0x1e) = 1;
      uVar10 = CHAR_ARRAY_00a0fdc4.piece<10,2>();
      if (CHAR_ARRAY_00a0fdc4.piece<8,2>() != -1) {
        CHAR_ARRAY_00a0fdc4.piece<8,2>() = CHAR_ARRAY_00a0fdc4.piece<8,2>() + 1;
      }
      puVar12[0x27] = (longlong)g_GameFrameCount;
      puVar12[0x27] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar12[0x27] + 0.5));
      iVar26 = *(int *)((int)puVar12 + 0x13c);
      if ((int)(uint)(ushort)uVar10 < iVar26 / 600) {
        sVar15 = (short)(iVar26 >> 0x1f);
        CHAR_ARRAY_00a0fdc4.piece<10,2>() =
             ((short)(iVar26 / 600) + sVar15) -
             ((short)((short)(iVar26 / 0x2580000) + sVar15) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4.piece<12,4>() = CHAR_ARRAY_00a0fdc4.piece<12,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    if (*(short *)(pfVar9 + 7) == 0) {
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(8,0x2c72ec);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar10 = storeVectorElementHalfWordIndexed(auVar41,0x1c,uVar32);
      *(undefined2 *)(pfVar9 + 7) = uVar10;
    }
    GetBonePosition(moby,0,uVar32);
    if (g_heroState == FIRST_PERSON_VIEW) {
      TransitionMovement(0x1e,1);
    }
    dVar34 = 0.0;
    if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE))
    {
      FastApplyTransform((Vec4 *)(uVar30 - 0x110),(Vec4 *)&GameCamera);
      FastNormalizeRMtx4(uVar30 - 0xe0,uVar30 - 0x110);
      dVar40 = (double)*(float *)(puVar12 + 0x18);
      dVar39 = (double)*(float *)((int)puVar12 + 0xc4);
      dVar38 = (double)*(float *)(puVar12 + 0x19);
    }
    else if (DAT_0096bfa8 == 1) {
      dVar40 = -(double)(moby->transform).v1.x;
      dVar39 = -(double)(moby->transform).v1.y;
      dVar38 = -(double)(moby->transform).v1.z;
    }
    else {
      dVar40 = (double)DAT_0096a320;
      dVar39 = (double)DAT_0096a324;
      dVar38 = (double)DAT_0096a328;
    }
    *(float *)((int)puVar12 + 0xec) = (float)dVar40;
    *(float *)(puVar12 + 0x1e) = (float)dVar39;
    *(float *)((int)puVar12 + 0xf4) = (float)(ABS(dVar40) - ABS(dVar39));
    uVar31 = (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1d) & 4;
    dVar37 = ABS((double)*(float *)((int)puVar12 + 0xec));
    if ((double)*(float *)((int)puVar12 + 0xf4) - dVar34 < 0.0) {
      dVar37 = ABS(dVar39);
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
    fVar25 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
    dVar36 = ABS((double)*(float *)(puVar12 + 0x1e));
    if ((double)*(float *)((int)puVar12 + 0xf4) - dVar34 < 0.0) {
      dVar36 = ABS(dVar40);
    }
    dVar35 = dVar34;
    if (dVar34 < dVar37) {
      lVar22 = uVar30 - 0x170;
      lVar28 = uVar30 - 0x68;
      lVar29 = uVar30 - 0x58;
      lVar33 = 2;
      fVar3 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x124) = fVar3;
      *(float *)((int)puVar12 + 0x11c) = fVar3;
      *(float *)(puVar12 + 0x24) = fVar3;
      *(float *)(puVar12 + 0x23) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar4;
      *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar3;
      *(float *)((int)puVar12 + 0x124) = *(float *)((int)puVar12 + 0x124) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar22 + 0x118) = *(float *)((int)lVar22 + 0x108) * fVar3 * fVar3;
        iVar26 = (int)lVar28;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar30 - 0x68;
      pfVar24 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar28 = lVar29;
      do {
        fVar3 = *pfVar24;
        fVar4 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar22 + 0x118) = *(float *)((int)lVar22 + 0x118) * fVar3;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar28 = 2;
      lVar22 = lVar23;
      dVar37 = dVar34;
      do {
        iVar26 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar13 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar26 + 0x118)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar35 = (double)((float)(dVar37 + 0.7853981852531433) * fVar8 + fVar25);
    }
    pfVar9[0x12] = (float)dVar35;
    *(float *)((int)puVar12 + 0xe4) = (float)dVar38;
    fVar25 = SQRT((float)(dVar40 * dVar40 + (double)(float)(dVar39 * dVar39)));
    dVar40 = ABS((double)fVar25);
    *(float *)(puVar12 + 0x1c) = fVar25;
    *(float *)(puVar12 + 0x1d) = (float)(dVar40 - ABS(dVar38));
    uVar27 = (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1d) & 4;
    uVar31 = uVar27 << 2;
    dVar39 = ABS((double)*(float *)(puVar12 + 0x1c));
    if ((double)*(float *)(puVar12 + 0x1d) - dVar34 < 0.0) {
      dVar39 = ABS(dVar38);
    }
    fVar25 = *(float *)(&g_atanQuadrantTable + (int)uVar31);
    dVar38 = ABS((double)*(float *)((int)puVar12 + 0xe4));
    if ((double)*(float *)(puVar12 + 0x1d) - dVar34 < 0.0) {
      dVar38 = dVar40;
    }
    fVar8 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    dVar40 = dVar34;
    if (dVar34 < dVar39) {
      lVar22 = uVar30 - 0x170;
      lVar29 = uVar30 - 0x78;
      lVar28 = uVar30 - 0x88;
      lVar33 = 2;
      fVar3 = (float)(dVar38 - dVar39) / (float)(dVar38 + dVar39);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x104) = fVar3;
      *(float *)((int)puVar12 + 0xfc) = fVar3;
      *(float *)(puVar12 + 0x20) = fVar3;
      *(float *)(puVar12 + 0x1f) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar4;
      *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar3;
      *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar22 + 0xf8) = *(float *)((int)lVar22 + 0xe8) * fVar3 * fVar3;
        iVar26 = (int)lVar28;
        lVar28 = lVar28 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar30 - 0x88;
      uVar31 = ZEXT48(&DAT_007358e0);
      lVar22 = lVar23;
      lVar28 = lVar29;
      do {
        pfVar24 = (float *)uVar31;
        fVar3 = pfVar24[1];
        uVar31 = uVar31 + 8;
        *(float *)((int)lVar22 + 0xf8) = *(float *)((int)lVar22 + 0xf8) * *pfVar24;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar3;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar22 = 2;
      dVar38 = dVar34;
      do {
        iVar26 = (int)lVar23;
        iVar13 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar26 + 0xf8)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar40 = (double)((float)(dVar38 + 0.7853981852531433) * fVar25 + fVar8);
    }
    *(float *)(puVar12 + 8) = *pfVar9;
    *(float *)((int)puVar12 + 0x44) = pfVar9[1];
    *(float *)(puVar12 + 9) = pfVar9[2];
    pfVar9[0x13] = (float)dVar40;
    *(float *)((int)puVar12 + 0x4c) = pfVar9[3];
    uVar30 = puVar12[8];
    moby_00 = (MobyInstance *)
              M185_002c5358
                        (moby,uVar31,uVar30,puVar12[9],uVar32 + 0x48,uVar32 + 0x4c);
    FastDecTimerS32(uVar32 + 0x44);
    if ((pfVar9[4] != 0.0) &&
       ((cVar2 = *(char *)((int)pfVar9[4] + 0x20), cVar2 == -2 || (cVar2 == -3)))) {
      pfVar9[4] = 0.0;
      pfVar9[0x11] = 0.0;
    }
    if ((moby_00 != (MobyInstance *)0x0) || (pfVar9[0x11] != 0.0)) {
      if ((moby_00 != (MobyInstance *)0x0) &&
         ((pfVar24 = (float *)MB_GetPvarsIfMobyHasThem(moby_00),
          moby_00 != (MobyInstance *)pfVar9[4] && (pfVar9[0x11] == 0.0)))) {
        pfVar9[4] = (float)moby_00;
        dVar38 = (double)FastIntToDouble(*(undefined2 *)(pfVar24 + 1));
        pfVar9[5] = (float)dVar38;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        pfVar9[6] = *pfVar24;
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(0x14,0x2c72ec);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x44,
                            uVar32);
        *(undefined4 *)((uint)(pfVar9 + 0x11) & 0xfffffffc) = uVar11;
        if (dVar38 <= 1.0) {
          pfVar9[6] = 0.0;
        }
        fVar25 = (float)RegisterHUDCallback
                                  (4,0x7533,&PTR_Moby185Hud_Init_00705738,
                                   &PTR_Moby185Hud_Update_00705740,&PTR_Draw_Moby185Meter_00705748,
                                   &DAT_010a10b8,10000);
        pfVar9[0xd] = fVar25;
      }
      dVar38 = (double)FastIntToDouble(g_goldWeaponsArray.morphORay);
      uVar30 = ZEXT48(&DAT_00720000);
      dVar38 = -(double)(DAT_007bd348 * g_FrameTime *
                         (float)(dVar38 * 0.33000001311302185 + 1.0) - pfVar9[6]);
      pfVar9[6] = (float)dVar38;
      if (dVar38 < dVar34) {
        pfVar9[6] = 0.0;
        dVar38 = dVar34;
      }
      iVar26 = FastDoubleToInt((double)((float)(dVar38 * 10000.0) / pfVar9[5]));
      DAT_010a10b8 = 10000 - iVar26;
    }
    fVar25 = pfVar9[4];
    if ((fVar25 != 0.0) && ((int)pfVar9[6] < 1)) {
      if ((Level == Rilgar) && (*(short *)((int)fVar25 + 0xa6) == 0x271)) {
        MB_UnlockSkillPoint(8);
        fVar25 = pfVar9[4];
      }
      SpawnMoby_270_Chicken(fVar25);
      pfVar9[4] = 0.0;
    }
    M185_002c5f88(moby);
    uVar32 = (ulonglong)DAT_010a10a4;
    if (DAT_010a10a4 == 0xffffffff) {
      uVar32 = CreatePointLight3
                         (0x401e000000000000,dVar34,(Vec4 *)&moby->pos,ZEXT48(&DAT_002c72ec),uVar30,
                          0x207f7f);
      DAT_010a10a4 = (uint)uVar32;
    }
    if (-1 < (int)uVar32) {
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x28,0x2c72ec);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      iVar26 = (int)((uVar32 & 0xffffffff) << 5);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      DAT_010a10a8 = storeVectorElementWordIndexed
                               (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x10a8
                                ,0x10a0000);
      fVar8 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v1.x;
      fVar4 = (moby->transform).v1.z;
      fVar5 = *pfVar9;
      fVar6 = pfVar9[1];
      fVar7 = pfVar9[2];
      *(undefined4 *)((int)&PointLights[0].pos.w + iVar26) = 0x40f00000;
      dVar39 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar8 * fVar8);
      fVar25 = (float)(-0.5 / dVar39);
      dVar38 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar38 = (double)(fVar4 * fVar25);
      }
      dVar40 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar40 = (double)(fVar8 * fVar25);
      }
      dVar37 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar37 = (double)(fVar3 * fVar25);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar38 = (double)(fVar4 * fVar25);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar40 = (double)(fVar8 * fVar25);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar37 = (double)(fVar3 * fVar25);
      }
      *(float *)((int)&PointLights[0].pos.z + iVar26) = (float)((double)fVar7 + dVar38);
      *(float *)((int)&PointLights[0].pos.y + iVar26) = (float)((double)fVar6 + dVar40);
      *(float *)((int)&PointLights[0].pos.x + iVar26) = (float)((double)fVar5 + dVar37);
    }
    iVar26 = IsMobyPlayingSound(moby,DAT_010a10ac);
    if (iVar26 == 0) {
      DAT_010a10ac = PlayMobySound(0,4,moby);
    }
    goto LAB_002c7f44;
  }
  pfVar9[4] = 0.0;
  *(undefined2 *)((int)pfVar9 + 0x1e) = 0;
  pfVar9[0x11] = 0.0;
  if (pfVar9[0xd] != -NAN) {
    Hud_UnregisterById((int)pfVar9[0xd]);
    pfVar9[0xd] = -NAN;
  }
  iVar26 = DAT_010a10a8;
  uVar21 = DAT_010a10a4;
  DAT_010a10a0 = 1;
  if ((int)DAT_010a10a4 < 0) {
LAB_002c7ea4:
    if ((-1 < (int)DAT_010a10a4) && (DAT_010a10a8 == 0)) {
      DeletePointLight(DAT_010a10a4);
      DAT_010a10a4 = 0xffffffff;
    }
  }
  else {
    fVar25 = (moby->transform).v1.y;
    fVar8 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    fVar17 = 0.0;
    fVar4 = *pfVar9;
    fVar5 = pfVar9[1];
    fVar6 = pfVar9[2];
    fVar7 = SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar25 * fVar25);
    PointLights[DAT_010a10a4].pos.w = 7.5;
    fVar16 = -0.5 / fVar7;
    fVar18 = fVar17;
    if (0.0 - fVar7 < 0.0) {
      fVar18 = fVar3 * fVar16;
    }
    fVar19 = fVar17;
    if (0.0 - fVar7 < 0.0) {
      fVar19 = fVar25 * fVar16;
    }
    if (0.0 - fVar7 < 0.0) {
      fVar17 = fVar8 * fVar16;
    }
    if (fVar7 - 0.0 < 0.0) {
      fVar18 = fVar3 * fVar16;
    }
    if (fVar7 - 0.0 < 0.0) {
      fVar19 = fVar25 * fVar16;
    }
    if (fVar7 - 0.0 < 0.0) {
      fVar17 = fVar8 * fVar16;
    }
    PointLights[uVar21].pos.z = fVar6 + fVar18;
    PointLights[uVar21].pos.y = fVar5 + fVar19;
    PointLights[uVar21].pos.x = fVar4 + fVar17;
    dVar34 = (double)FastIntToDouble(iVar26);
    uVar21 = DAT_010a10a4;
    fVar25 = (float)(dVar34 * 0.05000000074505806);
    PointLights[DAT_010a10a4].color.y = fVar25;
    PointLights[uVar21].color.x = fVar25;
    PointLights[uVar21].color.z = fVar25 * 0.25;
    iVar26 = FastDecTimerS32(&DAT_010a10a8);
    if (iVar26 == 0) goto LAB_002c7ea4;
    DeletePointLight(DAT_010a10a4);
    DAT_010a10a4 = 0xffffffff;
  }
  if (-1 < DAT_010a10ac) {
    if (((DAT_010a10ac != -1) && (g_SoundChannels[DAT_010a10ac].pMoby == moby)) &&
       (g_SoundChannels[DAT_010a10ac].state != '\0')) {
      sound_Kill(DAT_010a10ac);
    }
    DAT_010a10ac = -1;
  }
  Hero_EndFiringAnim();
LAB_002c7f44:
  if ((iVar20 == 3) && (-1 < (int)DAT_010a10a4)) {
    DeletePointLight(DAT_010a10a4);
    DAT_010a10a4 = 0xffffffff;
  }
  return;
}


