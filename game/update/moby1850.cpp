// game/update/moby1850.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2c7fb8-0x2c9594
#include "game/update/moby1850.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby185.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02c7fb8 (0x4a4 bytes)
// inlined: FastRSqrt @0x2c81b0
void M1850_002c7fb8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float local_120 [36];
  
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  dVar26 = 0.0;
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0xd8);
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar29 = (double)DAT_010a10cc;
  dVar28 = (double)(float)GameCamera.field8_0x14c;
  fVar5 = DAT_007bd448 / fVar4;
  dVar21 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar21 = (double)(fVar1 * fVar5);
  }
  dVar22 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar22 = (double)(fVar2 * fVar5);
  }
  dVar23 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar23 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar21 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar22 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar23 = (double)(fVar3 * fVar5);
  }
  dVar19 = (double)(float)((double)DAT_010a10c4 + dVar21);
  dVar18 = (double)(float)((double)DAT_010a10c0 + dVar22);
  dVar20 = (double)(float)((double)DAT_010a10c8 + dVar23);
  fVar1 = (float)((double)GameCamera.posY - dVar19);
  fVar2 = (float)((double)GameCamera.posX - dVar18);
  fVar3 = (float)((double)GameCamera.posZ - dVar20);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar21 = dVar26;
  dVar22 = dVar26;
  dVar23 = dVar26;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar21 = (double)(fVar5 * fVar2);
    dVar22 = (double)(fVar5 * fVar1);
    dVar23 = (double)(fVar5 * fVar3);
  }
  fVar1 = (float)((double)DAT_00969f78 * dVar21 -
                 (double)(float)((double)g_heroGravityDir * dVar23));
  fVar2 = (float)((double)DAT_00969f74 * dVar23 - (double)(float)((double)DAT_00969f78 * dVar22));
  fVar3 = (float)((double)g_heroGravityDir * dVar22 -
                 (double)(float)((double)DAT_00969f74 * dVar21));
  pfVar9 = local_120;
  pfVar10 = (float *)&DAT_007bd400;
  lVar11 = 4;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar15 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar15 = (double)(fVar2 * fVar5);
  }
  dVar17 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar17 = (double)(fVar1 * fVar5);
  }
  if (0.0 - fVar4 < 0.0) {
    dVar26 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar15 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar17 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar26 = (double)(fVar3 * fVar5);
  }
  dVar27 = (double)(float)(dVar21 * dVar17 - (double)(float)(dVar22 * dVar15));
  dVar24 = (double)(float)(dVar22 * dVar26 - (double)(float)(dVar23 * dVar17));
  dVar25 = (double)(float)(dVar23 * dVar15 - (double)(float)(dVar21 * dVar26));
  pfVar7 = pfVar10;
  pfVar8 = pfVar9;
  do {
    dVar13 = (double)(pfVar7[1] * DAT_007bd440);
    dVar14 = (double)(*pfVar7 * DAT_007bd440);
    dVar12 = (double)(pfVar7[2] * DAT_007bd440);
    dVar16 = (double)pfVar7[3];
    pfVar7 = pfVar7 + 4;
    pfVar8[3] = (float)(dVar16 * dVar29 + (double)(float)(dVar14 * dVar28));
    *pfVar8 = (float)(dVar16 * dVar18 +
                     (double)(float)(dVar12 * dVar24 +
                                    (double)(float)(dVar14 * dVar21 +
                                                   (double)(float)(dVar13 * dVar15))));
    pfVar8[1] = (float)(dVar16 * dVar19 +
                       (double)(float)(dVar12 * dVar25 +
                                      (double)(float)(dVar14 * dVar22 +
                                                     (double)(float)(dVar13 * dVar17))));
    pfVar8[2] = (float)(dVar16 * dVar20 +
                       (double)(float)(dVar12 * dVar27 +
                                      (double)(float)(dVar14 * dVar23 +
                                                     (double)(float)(dVar13 * dVar26))));
    pfVar8 = pfVar8 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_120,0,0,EffectTexHeaders,9);
  uVar6 = EffectTexHeaders;
  lVar11 = 4;
  do {
    dVar13 = (double)(pfVar10[1] * DAT_007bd444);
    dVar14 = (double)(*pfVar10 * DAT_007bd444);
    dVar12 = (double)(pfVar10[2] * DAT_007bd444);
    dVar16 = (double)pfVar10[3];
    pfVar10 = pfVar10 + 4;
    pfVar9[3] = (float)(dVar16 * dVar29 + (double)(float)(dVar14 * dVar28));
    *pfVar9 = (float)(dVar16 * dVar18 +
                     (double)(float)(dVar12 * dVar24 +
                                    (double)(float)(dVar14 * dVar21 +
                                                   (double)(float)(dVar13 * dVar15))));
    pfVar9[1] = (float)(dVar16 * dVar19 +
                       (double)(float)(dVar12 * dVar25 +
                                      (double)(float)(dVar14 * dVar22 +
                                                     (double)(float)(dVar13 * dVar17))));
    pfVar9[2] = (float)(dVar16 * dVar20 +
                       (double)(float)(dVar12 * dVar27 +
                                      (double)(float)(dVar14 * dVar23 +
                                                     (double)(float)(dVar13 * dVar26))));
    pfVar9 = pfVar9 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_120,0,0,uVar6,9);
  return;
}


// 0x02c8468 (0x390 bytes)
// inlined: FastRSqrt @0x2c868c
void M1850_002c8468(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float local_100 [38];
  
  GetEffectTex(8);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  dVar25 = 0.0;
  dVar24 = 1.0;
  uVar14 = 0;
  do {
    iVar9 = (int)uVar14;
    if ((&DAT_010a22b0)[iVar9] != '\0') {
      iVar10 = (int)((uVar14 & 0xffffffff) << 2);
      FastDoubleToInt((double)*(float *)(&DAT_010a228c + iVar10));
      dVar16 = (double)(float)(&DAT_010a2250)[iVar9 * 4];
      dVar18 = (double)(float)(&DAT_010a2258)[iVar9 * 4];
      dVar17 = (double)(float)(&DAT_010a2254)[iVar9 * 4];
      fVar7 = -(float)((double)DAT_00969f78 * dVar16) -
              -(float)((double)g_heroGravityDir * dVar18);
      fVar8 = -(float)((double)g_heroGravityDir * dVar17) -
              -(float)((double)DAT_00969f74 * dVar16);
      fVar11 = -(float)((double)DAT_00969f74 * dVar18) - -(float)((double)DAT_00969f78 * dVar17);
      fVar2 = (float)(&DAT_010a2220)[iVar9 * 4];
      fVar3 = (float)(&DAT_010a2224)[iVar9 * 4];
      fVar4 = (float)(&DAT_010a2228)[iVar9 * 4];
      fVar5 = (float)(&DAT_010a222c)[iVar9 * 4];
      fVar6 = (float)(&DAT_010a225c)[iVar9 * 4];
      dVar19 = (double)(fVar8 * fVar8 + fVar11 * fVar11 + fVar7 * fVar7);
      dVar20 = dVar25;
      dVar21 = dVar25;
      dVar22 = dVar25;
      if ((double)(float)SQRT(dVar19) != dVar25) {
        dVar20 = 1.0 / SQRT(dVar19);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar19 * dVar20) * dVar20 - dVar24
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar19 * dVar20) * dVar20 - dVar24
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar19 * dVar20) * dVar20 - dVar24) *
                        (double)(float)(dVar20 * 0.5) + dVar20);
        dVar22 = (double)(fVar11 * fVar1);
        dVar21 = (double)(fVar7 * fVar1);
        dVar20 = (double)(fVar8 * fVar1);
      }
      lVar15 = 4;
      pfVar12 = (float *)&DAT_007bd400;
      pfVar13 = local_100;
      do {
        fVar8 = *(float *)(&DAT_010a22a4 + iVar10);
        dVar23 = (double)(pfVar12[1] * fVar8);
        dVar19 = (double)(*pfVar12 * fVar8);
        fVar8 = pfVar12[2] * fVar8;
        fVar7 = pfVar12[3];
        pfVar12 = pfVar12 + 4;
        pfVar13[3] = fVar7 * fVar5 + (float)(dVar19 * (double)fVar6);
        *pfVar13 = fVar7 * fVar2 +
                   (float)(dVar17 * dVar20 - (double)(float)(dVar18 * dVar21)) * fVar8 +
                   (float)(dVar19 * dVar16 + (double)(float)(dVar23 * dVar22));
        pfVar13[1] = fVar7 * fVar3 +
                     (float)(dVar18 * dVar22 - (double)(float)(dVar16 * dVar20)) * fVar8 +
                     (float)(dVar19 * dVar17 + (double)(float)(dVar23 * dVar21));
        pfVar13[2] = fVar7 * fVar4 +
                     (float)(dVar16 * dVar21 - (double)(float)(dVar17 * dVar22)) * fVar8 +
                     (float)(dVar19 * dVar18 + (double)(float)(dVar23 * dVar20));
        pfVar13 = pfVar13 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      FastDrawQuad(local_100,0,0,EffectTexHeaders,9);
    }
    uVar14 = (ulonglong)(iVar9 + 1);
  } while (iVar9 + 1 < 3);
  return;
}


// 0x02c8808 (0x7d8 bytes)
// inlined: FastRSqrt @0x2c8a64, FastRSqrt @0x2c8b7c, FastRSqrt @0x2c8e24
void M1850_002c8808(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  GPiece<144> local_1d0;
  GPiece<144> local_140;
  
  GetEffectTex(DAT_007bd3ec);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  GetEffectTex(DAT_007bd3f0);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  return;
}


// 0x02c8ff8 (0x584 bytes)
// strings: 007bd3cc: '?fff' (raw)

void M1850_002c8ff8(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  GPiece<152> local_140;
  
  DAT_010a22b8 = -(DAT_0071f408 * DAT_007bd3dc - DAT_010a22b8);
  dVar11 = -8.0;
  if (DAT_010a22b8 <= -8.0) {
    DAT_010a22b8 = DAT_010a22b8 + 8.0;
  }
  M1850_002c8808((double)DAT_007bd3c4,(double)DAT_007bd3c8,(double)DAT_007bd3cc,&DAT_010a1180,
                 DAT_007bd3bc,DAT_007bd3c0);
  M1850_002c8808((double)DAT_007bd3c4,(double)DAT_007bd3c8,(double)DAT_007bd3cc,&DAT_010a1240,
                 DAT_007bd3bc,DAT_007bd3c0);
  M1850_002c8468(param_1);
  M1850_002c7fb8(param_1);
  GetEffectTex(DAT_007bd3e8);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  dVar10 = -(double)(DAT_0071f408 * DAT_007bd374 - DAT_010a2210);
  if (dVar10 <= dVar11) {
    dVar10 = dVar10 + 8.0;
  }
  DAT_010a2210 = (float)dVar10;
  DAT_010a2214 = -(DAT_0071f408 * DAT_007bd378 - DAT_010a2214);
  if (DAT_010a2214 <= -7.0) {
    DAT_010a2214 = DAT_010a2214 + 7.0;
  }
  DAT_010a2218 = DAT_0071f408 * DAT_007bd378 + DAT_010a2218;
  if (5.0 <= DAT_010a2218) {
    DAT_010a2218 = DAT_010a2218 - 5.0;
  }
  iVar5 = 2;
  iVar7 = 0x280;
  do {
    dVar11 = 0.0;
    pfVar8 = (float *)(iVar7 + 0x10a1310);
    pfVar9 = (float *)(iVar7 + 0x10a11d0);
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      pfVar4 = (float *)((iVar6 % 0x14) * 0x10 + 0x10a1310 + iVar7);
      fVar1 = *pfVar4;
      fVar2 = pfVar4[1];
      fVar3 = pfVar4[2];
      if ((double)(((*pfVar8 - fVar1) * (pfVar9[1] - fVar2) -
                   (pfVar8[1] - fVar2) * (*pfVar9 - fVar1)) * (fVar3 - GameCamera.posZ) +
                  ((pfVar8[1] - fVar2) * (pfVar9[2] - fVar3) -
                  (pfVar8[2] - fVar3) * (pfVar9[1] - fVar2)) * (fVar1 - GameCamera.posX) +
                  ((pfVar8[2] - fVar3) * (*pfVar9 - fVar1) - (*pfVar8 - fVar1) * (pfVar9[2] - fVar3)
                  ) * (fVar2 - GameCamera.posY)) < dVar11) {
        FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
        FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      }
      pfVar8 = pfVar8 + 4;
      pfVar9 = pfVar9 + 4;
    } while (iVar6 < 0x14);
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x140;
  } while (iVar5 < 0xc);
  return;
}


// 0x02c957c (0x14 bytes)
void M1850_002c957c(void)

{
  DAT_007bd49c = 0x10000;
  return;
}


// 0x02c9590 (0x4 bytes)
/* Moby 1850 */

MobyInstance * UpdateMoby_1850(MobyInstance *moby)

{
  return moby;
}


