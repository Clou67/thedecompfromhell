// game/update/moby280.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x329e48-0x32c410
#include <math.h>
#include "game/update/moby280.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby1118.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x0329e48 (0xbac bytes)
// inlined: FastRSqrt @0x329f20, FastRSqrt @0x32a1f0, FastRSqrt @0x32a3e8, FastRSqrt @0x32a5ec, FastRSqrt @0x32a7f4
void M280_00329e48(int param_1)

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
  float fVar10;
  undefined4 uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
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
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float local_150 [36];
  
  iVar9 = *(int *)(param_1 + 0x78);
  dVar33 = (double)*(float *)(iVar9 + 0x1e4);
  dVar35 = (double)*(float *)(iVar9 + 0x1e0);
  fVar5 = (float)((double)GameCamera.posY - dVar33);
  dVar32 = (double)*(float *)(iVar9 + 0x1e8);
  fVar6 = (float)((double)GameCamera.posX - dVar35);
  fVar7 = (float)((double)GameCamera.posZ - dVar32);
  dVar28 = 0.0;
  dVar31 = 1.0;
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar25 = 0.5;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if (SQRT(fVar8) != 0.0) {
    fVar1 = 1.0 / SQRT(fVar8);
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar23 = (double)(fVar6 * fVar1);
    dVar22 = (double)(fVar5 * fVar1);
    dVar21 = (double)(fVar7 * fVar1);
  }
  fVar5 = (float)((double)DAT_00969f78 * dVar23 -
                 (double)(float)((double)g_heroGravityDir * dVar21));
  fVar6 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar22));
  fVar7 = (float)((double)g_heroGravityDir * dVar22 -
                 (double)(float)((double)DAT_00969f74 * dVar23));
  dVar24 = -1.0;
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  fVar1 = -1.0 / fVar8;
  dVar34 = dVar28;
  if (0.0 - fVar8 < 0.0) {
    dVar34 = (double)(fVar6 * fVar1);
  }
  dVar17 = dVar28;
  if (0.0 - fVar8 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  dVar36 = dVar28;
  if (0.0 - fVar8 < 0.0) {
    dVar36 = (double)(fVar7 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar34 = (double)(fVar6 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar36 = (double)(fVar7 * fVar1);
  }
  dVar26 = (double)(float)(dVar23 * dVar17 - (double)(float)(dVar22 * dVar34));
  dVar30 = (double)(float)(dVar22 * dVar36 - (double)(float)(dVar21 * dVar17));
  dVar27 = (double)(float)(dVar21 * dVar34 - (double)(float)(dVar23 * dVar36));
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  pfVar15 = local_150;
  pfVar14 = (float *)&DAT_00800290;
  lVar16 = 4;
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar6 = *pfVar13;
    fVar5 = (float)((double)fVar6 * 0.4000000059604645);
    dVar18 = (double)fVar5;
    *pfVar12 = fVar5;
    fVar5 = pfVar13[1];
    pfVar12[1] = fVar5 * 0.4;
    dVar19 = (double)(pfVar13[2] * 0.4);
    pfVar12[2] = pfVar13[2] * 0.4;
    dVar20 = (double)pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = (float)((double)fVar6 * (double)(float)(dVar29 * 0.4000000059604645) + dVar20);
    *pfVar12 = (float)(dVar20 * dVar35 +
                      (double)(float)(dVar19 * dVar30 +
                                     (double)(float)(dVar18 * dVar23 +
                                                    (double)(fVar5 * (float)(dVar34 * 
                                                  0.4000000059604645)))));
    pfVar12[1] = (float)(dVar20 * dVar33 +
                        (double)(float)(dVar19 * dVar27 +
                                       (double)(float)(dVar18 * dVar22 +
                                                      (double)(fVar5 * (float)(dVar17 * 
                                                  0.4000000059604645)))));
    pfVar12[2] = (float)(dVar20 * dVar32 +
                        (double)(float)(dVar19 * dVar26 +
                                       (double)(float)(dVar18 * dVar21 +
                                                      (double)(fVar5 * (float)(dVar36 * 
                                                  0.4000000059604645)))));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,EffectTexHeaders,9);
  uVar11 = EffectTexHeaders;
  fVar5 = *(float *)(iVar9 + 0x204);
  fVar6 = *(float *)(iVar9 + 0x200);
  fVar1 = GameCamera.posY - fVar5;
  fVar7 = *(float *)(iVar9 + 0x208);
  fVar4 = GameCamera.posX - fVar6;
  fVar3 = GameCamera.posZ - fVar7;
  fVar8 = *(float *)(iVar9 + 0x20c);
  dVar29 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar29) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar29);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar29 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar22 = (double)(fVar4 * fVar2);
    dVar23 = (double)(fVar1 * fVar2);
    dVar21 = (double)(fVar3 * fVar2);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar22 -
                 (double)(float)((double)g_heroGravityDir * dVar21));
  fVar4 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar23));
  fVar2 = (float)((double)g_heroGravityDir * dVar23 -
                 (double)(float)((double)DAT_00969f74 * dVar22));
  dVar33 = 0.20000000298023224;
  fVar10 = (float)GameCamera.field8_0x14c * 0.2;
  lVar16 = 4;
  dVar32 = (double)SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar1 = (float)(dVar24 / dVar32);
  dVar29 = dVar28;
  if (dVar28 - dVar32 < 0.0) {
    dVar29 = (double)(fVar4 * fVar1);
  }
  dVar35 = dVar28;
  if (dVar28 - dVar32 < 0.0) {
    dVar35 = (double)(fVar3 * fVar1);
  }
  dVar34 = dVar28;
  if (dVar28 - dVar32 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  if (dVar32 - dVar28 < 0.0) {
    dVar29 = (double)(fVar4 * fVar1);
  }
  if (dVar32 - dVar28 < 0.0) {
    dVar35 = (double)(fVar3 * fVar1);
  }
  if (dVar32 - dVar28 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar1 = *pfVar13;
    fVar3 = fVar1 * 0.2;
    dVar32 = (double)fVar3;
    *pfVar12 = fVar3;
    fVar3 = pfVar13[1];
    pfVar12[1] = fVar3 * 0.2;
    fVar2 = pfVar13[2] * 0.2;
    pfVar12[2] = fVar2;
    fVar4 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = fVar4 * fVar8 + fVar1 * fVar10;
    *pfVar12 = fVar4 * fVar6 +
               fVar2 * (float)(dVar23 * dVar34 - (double)(float)(dVar21 * dVar35)) +
               (float)(dVar32 * dVar22 + (double)(fVar3 * (float)(dVar29 * 0.20000000298023224)));
    pfVar12[1] = fVar4 * fVar5 +
                 fVar2 * (float)(dVar21 * dVar29 - (double)(float)(dVar22 * dVar34)) +
                 (float)(dVar32 * dVar23 + (double)(fVar3 * (float)(dVar35 * 0.20000000298023224)));
    pfVar12[2] = fVar4 * fVar7 +
                 fVar2 * (float)(dVar22 * dVar35 - (double)(float)(dVar23 * dVar29)) +
                 (float)(dVar32 * dVar21 + (double)(fVar3 * (float)(dVar34 * 0.20000000298023224)));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,uVar11,9);
  uVar11 = EffectTexHeaders;
  fVar8 = *(float *)(iVar9 + 500);
  fVar1 = *(float *)(iVar9 + 0x1f0);
  fVar5 = (float)((double)GameCamera.posY - (double)fVar8);
  fVar3 = *(float *)(iVar9 + 0x1f8);
  fVar6 = (float)((double)GameCamera.posX - (double)fVar1);
  fVar7 = (float)((double)GameCamera.posZ - (double)fVar3);
  fVar4 = *(float *)(iVar9 + 0x1fc);
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar32 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar32) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar32);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar22 = (double)(fVar6 * fVar2);
    dVar23 = (double)(fVar5 * fVar2);
    dVar21 = (double)(fVar7 * fVar2);
  }
  fVar6 = (float)((double)DAT_00969f78 * dVar22 -
                 (double)(float)((double)g_heroGravityDir * dVar21));
  fVar7 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar23));
  fVar2 = (float)((double)g_heroGravityDir * dVar23 -
                 (double)(float)((double)DAT_00969f74 * dVar22));
  dVar35 = (double)DAT_00800244;
  lVar16 = 4;
  dVar34 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  fVar5 = (float)(dVar24 / dVar34);
  dVar32 = dVar28;
  if (dVar28 - dVar34 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  dVar17 = dVar28;
  if (dVar28 - dVar34 < 0.0) {
    dVar17 = (double)(fVar6 * fVar5);
  }
  dVar36 = dVar28;
  if (dVar28 - dVar34 < 0.0) {
    dVar36 = (double)(fVar2 * fVar5);
  }
  if (dVar34 - dVar28 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  if (dVar34 - dVar28 < 0.0) {
    dVar17 = (double)(fVar6 * fVar5);
  }
  if (dVar34 - dVar28 < 0.0) {
    dVar36 = (double)(fVar2 * fVar5);
  }
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar6 = *pfVar13;
    fVar5 = (float)((double)fVar6 * dVar33);
    dVar26 = (double)fVar5;
    *pfVar12 = fVar5;
    dVar34 = (double)pfVar13[1];
    pfVar12[1] = (float)(dVar34 * dVar33);
    fVar5 = (float)((double)pfVar13[2] * dVar33);
    pfVar12[2] = fVar5;
    fVar7 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = fVar7 * fVar4 + (float)((double)fVar6 * (double)(float)(dVar33 * dVar29));
    *pfVar12 = fVar7 * (float)(dVar22 * dVar35 + (double)fVar1) +
               fVar5 * (float)(dVar23 * dVar36 - (double)(float)(dVar21 * dVar17)) +
               (float)(dVar26 * dVar22 + (double)(float)(dVar34 * (double)(float)(dVar33 * dVar32)))
    ;
    pfVar12[1] = fVar7 * (float)(dVar23 * dVar35 + (double)fVar8) +
                 fVar5 * (float)(dVar21 * dVar32 - (double)(float)(dVar22 * dVar36)) +
                 (float)(dVar26 * dVar23 +
                        (double)(float)(dVar34 * (double)(float)(dVar33 * dVar17)));
    pfVar12[2] = fVar7 * (float)(dVar21 * dVar35 + (double)fVar3) +
                 fVar5 * (float)(dVar22 * dVar17 - (double)(float)(dVar23 * dVar32)) +
                 (float)(dVar26 * dVar21 +
                        (double)(float)(dVar34 * (double)(float)(dVar33 * dVar36)));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,uVar11,9);
  uVar11 = EffectTexHeaders;
  fVar8 = *(float *)(iVar9 + 0x214);
  fVar1 = *(float *)(iVar9 + 0x210);
  fVar5 = (float)((double)GameCamera.posY - (double)fVar8);
  fVar3 = *(float *)(iVar9 + 0x218);
  fVar6 = (float)((double)GameCamera.posX - (double)fVar1);
  fVar7 = (float)((double)GameCamera.posZ - (double)fVar3);
  fVar4 = *(float *)(iVar9 + 0x21c);
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar32 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar32) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar32);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar22 = (double)(fVar6 * fVar2);
    dVar23 = (double)(fVar5 * fVar2);
    dVar21 = (double)(fVar7 * fVar2);
  }
  fVar6 = (float)((double)DAT_00969f78 * dVar22 -
                 (double)(float)((double)g_heroGravityDir * dVar21));
  fVar7 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar23));
  fVar2 = (float)((double)g_heroGravityDir * dVar23 -
                 (double)(float)((double)DAT_00969f74 * dVar22));
  lVar16 = 4;
  dVar35 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  dVar33 = (double)DAT_00800254;
  fVar5 = (float)(dVar24 / dVar35);
  dVar32 = dVar28;
  if (dVar28 - dVar35 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  dVar34 = dVar28;
  if (dVar28 - dVar35 < 0.0) {
    dVar34 = (double)(fVar6 * fVar5);
  }
  dVar17 = dVar28;
  if (dVar28 - dVar35 < 0.0) {
    dVar17 = (double)(fVar2 * fVar5);
  }
  if (dVar35 - dVar28 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  if (dVar35 - dVar28 < 0.0) {
    dVar34 = (double)(fVar6 * fVar5);
  }
  if (dVar35 - dVar28 < 0.0) {
    dVar17 = (double)(fVar2 * fVar5);
  }
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    dVar36 = (double)(*pfVar13 * DAT_00800258);
    *pfVar12 = *pfVar13 * DAT_00800258;
    dVar35 = (double)(pfVar13[1] * DAT_00800258);
    pfVar12[1] = pfVar13[1] * DAT_00800258;
    fVar6 = pfVar13[2] * DAT_00800258;
    pfVar12[2] = fVar6;
    fVar5 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = fVar5 * fVar4 + (float)(dVar36 * dVar29);
    *pfVar12 = fVar5 * (float)(dVar22 * dVar33 + (double)fVar1) +
               fVar6 * (float)(dVar23 * dVar17 - (double)(float)(dVar21 * dVar34)) +
               (float)(dVar36 * dVar22 + (double)(float)(dVar35 * dVar32));
    pfVar12[1] = fVar5 * (float)(dVar23 * dVar33 + (double)fVar8) +
                 fVar6 * (float)(dVar21 * dVar32 - (double)(float)(dVar22 * dVar17)) +
                 (float)(dVar36 * dVar23 + (double)(float)(dVar35 * dVar34));
    pfVar12[2] = fVar5 * (float)(dVar21 * dVar33 + (double)fVar3) +
                 fVar6 * (float)(dVar22 * dVar34 - (double)(float)(dVar23 * dVar32)) +
                 (float)(dVar36 * dVar21 + (double)(float)(dVar35 * dVar17));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,uVar11,9);
  uVar11 = EffectTexHeaders;
  fVar8 = *(float *)(iVar9 + 0x224);
  fVar1 = *(float *)(iVar9 + 0x220);
  fVar5 = (float)((double)GameCamera.posY - (double)fVar8);
  fVar3 = *(float *)(iVar9 + 0x228);
  fVar6 = (float)((double)GameCamera.posX - (double)fVar1);
  fVar7 = (float)((double)GameCamera.posZ - (double)fVar3);
  fVar4 = *(float *)(iVar9 + 0x22c);
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar32 = (double)DAT_00800254;
  dVar33 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar33) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar33);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar33 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar23 = (double)(fVar6 * fVar2);
    dVar22 = (double)(fVar5 * fVar2);
    dVar21 = (double)(fVar7 * fVar2);
  }
  fVar6 = (float)((double)DAT_00969f78 * dVar23 -
                 (double)(float)((double)g_heroGravityDir * dVar21));
  fVar7 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar22));
  fVar2 = (float)((double)g_heroGravityDir * dVar22 -
                 (double)(float)((double)DAT_00969f74 * dVar23));
  lVar16 = 4;
  dVar31 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  fVar5 = (float)(dVar24 / dVar31);
  dVar25 = dVar28;
  if (dVar28 - dVar31 < 0.0) {
    dVar25 = (double)(fVar7 * fVar5);
  }
  dVar33 = dVar28;
  if (dVar28 - dVar31 < 0.0) {
    dVar33 = (double)(fVar6 * fVar5);
  }
  dVar35 = dVar28;
  if (dVar28 - dVar31 < 0.0) {
    dVar35 = (double)(fVar2 * fVar5);
  }
  if (dVar31 - dVar28 < 0.0) {
    dVar25 = (double)(fVar7 * fVar5);
  }
  if (dVar31 - dVar28 < 0.0) {
    dVar33 = (double)(fVar6 * fVar5);
  }
  if (dVar31 - dVar28 < 0.0) {
    dVar35 = (double)(fVar2 * fVar5);
  }
  do {
    dVar28 = (double)(*pfVar14 * DAT_00800258);
    *pfVar15 = *pfVar14 * DAT_00800258;
    dVar31 = (double)(pfVar14[1] * DAT_00800258);
    pfVar15[1] = pfVar14[1] * DAT_00800258;
    fVar6 = pfVar14[2] * DAT_00800258;
    pfVar15[2] = fVar6;
    fVar5 = pfVar14[3];
    pfVar14 = pfVar14 + 4;
    pfVar15[3] = fVar5 * fVar4 + (float)(dVar28 * dVar29);
    *pfVar15 = fVar5 * (float)(dVar23 * dVar32 + (double)fVar1) +
               fVar6 * (float)(dVar22 * dVar35 - (double)(float)(dVar21 * dVar33)) +
               (float)(dVar28 * dVar23 + (double)(float)(dVar31 * dVar25));
    pfVar15[1] = fVar5 * (float)(dVar22 * dVar32 + (double)fVar8) +
                 fVar6 * (float)(dVar21 * dVar25 - (double)(float)(dVar23 * dVar35)) +
                 (float)(dVar28 * dVar22 + (double)(float)(dVar31 * dVar33));
    pfVar15[2] = fVar5 * (float)(dVar21 * dVar32 + (double)fVar3) +
                 fVar6 * (float)(dVar23 * dVar33 - (double)(float)(dVar22 * dVar25)) +
                 (float)(dVar28 * dVar21 + (double)(float)(dVar31 * dVar35));
    pfVar15 = pfVar15 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,uVar11,9);
  return;
}


// 0x032aa00 (0x2c4 bytes)
void M280_0032aa00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float local_b0 [36];
  
  dVar13 = (double)*(float *)(param_1 + 0x10);
  dVar14 = (double)*(float *)(param_1 + 0x14);
  dVar15 = (double)(*(float *)(param_1 + 0x18) + 0.01);
  GetEffectTex(0xb);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar5 = FUN_00502e50(0);
  SetGSReg(8,uVar5);
  uVar5 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar5);
  fVar2 = (float)((double)GameCamera.posY - dVar14);
  fVar3 = (float)((double)GameCamera.posX - dVar13);
  fVar4 = (float)((double)GameCamera.posZ - dVar15);
  dVar10 = 0.0;
  dVar12 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (0.0 < dVar12) {
    dVar9 = (double)(float)(dVar12 - (double)DAT_008002d8);
    dVar11 = (double)DAT_008002d4;
    if ((dVar9 < (double)DAT_008002d4) && (dVar11 = dVar9, dVar9 < 0.0)) {
      dVar11 = dVar10;
    }
    fVar1 = (float)(dVar11 / dVar12);
    dVar11 = dVar10;
    if (0.0 - dVar12 < 0.0) {
      dVar11 = (double)(fVar4 * fVar1);
    }
    dVar9 = dVar10;
    if (0.0 - dVar12 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (0.0 - dVar12 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    if (dVar12 - 0.0 < 0.0) {
      dVar11 = (double)(fVar4 * fVar1);
    }
    if (dVar12 - 0.0 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (dVar12 - 0.0 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    dVar15 = (double)(float)(dVar15 + dVar11);
    dVar14 = (double)(float)(dVar14 + dVar9);
    dVar13 = (double)(float)(dVar13 + dVar10);
  }
  lVar8 = 4;
  pfVar6 = (float *)&DAT_008002e0;
  pfVar7 = local_b0;
  do {
    fVar3 = *pfVar6 * DAT_008002d0;
    *pfVar7 = fVar3;
    fVar4 = pfVar6[1] * DAT_008002d0;
    pfVar7[1] = fVar4;
    fVar1 = pfVar6[2] * DAT_008002d0;
    pfVar7[2] = fVar1;
    fVar2 = pfVar6[3];
    *pfVar7 = (float)((double)fVar3 + dVar13);
    pfVar7[1] = (float)((double)fVar4 + dVar14);
    pfVar6 = pfVar6 + 4;
    pfVar7[3] = fVar2;
    pfVar7[2] = (float)((double)fVar1 + dVar15);
    pfVar7 = pfVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FastDrawQuad(local_b0,0,0,EffectTexHeaders,9);
  return;
}


// 0x032acc4 (0x14 bytes)
void M280_0032acc4(void)

{
  DAT_0080036c = 0x10000;
  return;
}


// 0x032acd8 (0x80 bytes)
void M280_0032acd8(int param_1)

{
  if ((((Level == Novalis) && (*(short *)(param_1 + 0xb2) == 0x34)) &&
      (*(short *)(param_1 + 0xa6) == 0x118)) && (*(char *)(param_1 + 0x20) == '\x05')) {
    g_MiscLevelFlags.field12_0xc = 1;
  }
  if (((Level == Novalis) && (*(short *)(param_1 + 0xb2) == 0x35)) &&
     ((*(short *)(param_1 + 0xa6) == 0x118 && (*(char *)(param_1 + 0x20) == '\x05')))) {
    g_MiscLevelFlags.field13_0xd = 1;
  }
  return;
}


// 0x032adf8 (0x1618 bytes)
// inlined: FastAtan2 @0x32b088, FastAtan2 @0x32b6a0, FastRSqrt @0x32ba04, FastAtan2 @0x32beb4
// strings: 0096c074: 'None'

/* Moby 280 */

void UpdateMoby_280(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  float *val;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  undefined4 *unused2;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
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
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar33;
  ulonglong in_f21;
  double dVar34;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  double in_f27;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x1f0;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar13;
  puVar12[0x40] = in_LR;
  puVar12[0x30] = in_f18;
  puVar12[0x31] = in_f19;
  puVar12[0x32] = in_f20;
  puVar12[0x33] = in_f21;
  puVar12[0x34] = in_f22;
  puVar12[0x35] = in_f23;
  puVar12[0x36] = in_f24;
  puVar12[0x37] = in_f25;
  puVar12[0x38] = in_f26;
  puVar12[0x39] = (ulonglong)in_f27;
  puVar12[0x3a] = in_f28;
  puVar12[0x3b] = in_f29;
  puVar12[0x3c] = in_f30;
  puVar12[0x3d] = in_f31;
  puVar12[0x2e] = unaff_r30;
  val = (float *)moby->pVar;
  puVar12[0x2f] = unaff_r31;
  fVar2 = (moby->pos).z;
  fVar3 = (moby->pos).x;
  puVar12[0x2d] = unaff_r29;
  puVar12[0x2c] = unaff_r28;
  fVar4 = (moby->pos).y;
  if (val == (float *)0x0) {
    dVar23 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 6.2831855);
    (moby->rotation).z = (float)dVar23;
    return;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x03' && g_heroState != BOLT_CRANK_TURNING) {
    moby->state = '\x01';
    if (GameCamera.pCurrentUpdCam == (void *)0x0) {
      return;
    }
    Camera_DeactivateMobyDrivenCam(4);
    return;
  }
  if (uVar1 == '\x05') {
    *val = 1.0;
  }
  else if (uVar1 == '\x04') {
    fVar2 = -(g_FrameTime * 0.5 - fVar2);
    (moby->pos).z = fVar2;
    if (fVar2 <= val[0xf] - 0.5) {
      (moby->pos).z = val[0xf] - 0.5;
      moby->state = '\x05';
      *val = 1.0;
    }
  }
  else if (uVar1 == '\x03') {
    dVar23 = 0.0;
    *(undefined4 *)(puVar12 + 0xe) = 0;
    *(undefined4 *)((int)puVar12 + 0x74) = 0;
    *(undefined4 *)(puVar12 + 0xf) = 0;
    *(undefined4 *)((int)puVar12 + 0x7c) = 0;
    *(float *)(puVar12 + 0xf) = GameCamera.rot.radius;
    fVar3 = g_heroPosition.x - fVar3;
    fVar4 = g_heroPosition.y - fVar4;
    fVar9 = ABS(fVar3);
    fVar5 = ABS(fVar4);
    *(float *)(puVar12 + 0x1a) = fVar3;
    *(float *)((int)puVar12 + 0xd4) = fVar4;
    *(float *)(puVar12 + 0x1b) = fVar9 - fVar5;
    uVar14 = (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar12 + 0x1a));
    if (*(float *)(puVar12 + 0x1b) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0xd4));
    if (*(float *)(puVar12 + 0x1b) - 0.0 < 0.0) {
      fVar5 = fVar9;
    }
    dVar26 = dVar23;
    if (0.0 < fVar2) {
      lVar15 = uVar13 - 0x1e0;
      lVar19 = uVar13 - 0xe8;
      lVar21 = uVar13 - 0xd8;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar12 + 0x114) = fVar2;
      *(float *)((int)puVar12 + 0x10c) = fVar2;
      *(float *)(puVar12 + 0x22) = fVar2;
      *(float *)(puVar12 + 0x21) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar5;
      *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar2;
      *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0xf8) * fVar2 * fVar2;
        iVar17 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0xe8;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar21;
      do {
        fVar2 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0x108) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        iVar18 = (int)lVar21;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0x108)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
    }
    dVar41 = 7.5;
    puVar12[0x29] = (longlong)(int)(animationSpeed * 7.5);
    iVar18 = PadRingBitsOn(0x80,*(int *)((int)puVar12 + 0x14c),(int *)0x0);
    iVar17 = g_heroStateTimer;
    dVar27 = (double)g_heroPadStick;
    dVar29 = (double)DAT_0096ba04;
    if (((iVar18 != 0) &&
        (puVar12[0x29] = (longlong)(int)(animationSpeed * 60.5),
        *(int *)((int)puVar12 + 0x14c) < iVar17)) || (dVar40 = 1.0, *val == 1.0)) {
      TransitionMovement(0,1);
      if (val[0xe] == 0.0) {
        if (*val == 1.0) {
          SaveCheckpointMobyVar(val,4,moby,2,(int *)&DAT_00a53560);
          uVar10 = moby->uid;
          moby->state = '\x04';
          iVar18 = (int)((longlong)((int)(short)uVar10 >> 5) << 2);
          iVar17 = (int)((longlong)((int)(short)uVar10 >> 5) << 2);
          uVar11 = *(uint *)(&DAT_00a54dd0 + iVar17);
          *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) =
               *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) | 1 << (uVar10 & 0x1f);
          *(uint *)(&DAT_00a54dd0 + iVar17) = uVar11 | 1 << (uVar10 & 0x1f);
          PlayMobySound(0,0,moby);
          if ((val[0xd] != -NAN) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
            SaveCheckpointMobyVar(val,4,moby,2,(int *)&DAT_00a53560);
            SetLevelFlag(moby->levelFlagIdx);
            fVar2 = val[0xd];
            if (fVar2 != -NAN) {
              SetSpawnPoint
                        ((Vec4 *)&Cuboids[(int)fVar2].pos,(Vec4 *)&Cuboids[(int)fVar2].rot);
            }
          }
        }
      }
      else {
        moby->state = '\x01';
      }
      Camera_DeactivateMobyDrivenCam(4);
      return;
    }
    dVar24 = (double)(--(float)(dVar29 * dVar29) + --(float)(dVar27 * dVar27));
    if (1.0 < (float)SQRT(dVar24)) {
      dVar30 = 1.0 / SQRT(dVar24);
      dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar24 * dVar30) * dVar30 - 1.0) *
                               (double)(float)(dVar30 * 0.5) + dVar30);
      dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar24 * dVar30) * dVar30 - 1.0) *
                               (double)(float)(dVar30 * 0.5) + dVar30);
      dVar24 = -(double)(float)((double)(float)(dVar24 * dVar30) * dVar30 - 1.0);
      dVar30 = (double)(float)(dVar24 * (double)(float)(dVar30 * 0.5) + dVar30);
      dVar29 = (double)(float)(dVar29 * dVar30);
      dVar27 = (double)(float)(dVar27 * dVar30);
      in_f27 = (double)(float)(dVar24 * dVar30);
    }
    dVar29 = -dVar29;
    FastEulerToMtx1(uVar13 - 0x170,uVar13 - 0x180);
    dVar24 = (double)*(float *)(puVar12 + 0x10);
    dVar30 = 1.570796251296997;
    dVar39 = 3.141592502593994;
    fVar2 = (g_heroMobyPtr->rotation).z;
    dVar38 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar36 = 0.008333025500178337;
    fVar4 = fVar2 + 1.5707963;
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    dVar35 = -0.0001980741071747616;
    dVar34 = 2.601886990305502e-06;
    fVar2 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = fVar5 * fVar5;
    fVar9 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
      fVar9 = fVar2;
    }
    fVar2 = fVar3 * fVar3 * fVar5;
    fVar7 = fVar9 * fVar9;
    fVar4 = fVar3 * fVar2;
    fVar6 = fVar7 * fVar7 * fVar9;
    fVar4 = fVar3 * fVar4 * 2.601887e-06 +
            fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5;
    fVar2 = fVar7 * fVar6;
    fVar5 = fVar7 * fVar2 * 2.601887e-06 +
            fVar2 * -0.0001980741 + fVar6 * 0.0083330255 + fVar7 * fVar9 * -0.16666657 + fVar9;
    fVar3 = DAT_0071f418 * 5.5;
    dVar32 = (double)animationSpeed;
    fVar2 = (fVar5 * (float)((double)*(float *)(puVar12 + 0x16) * dVar24 +
                            (double)(float)((double)*(float *)(puVar12 + 0x14) * in_f27 +
                                           (double)(float)(dVar24 * dVar29 +
                                                          -(double)(float)(dVar27 * (double)*(float 
                                                  *)(puVar12 + 0x12))))) +
            fVar4 * (float)((double)*(float *)((int)puVar12 + 0xb4) * dVar24 +
                           (double)(float)((double)*(float *)((int)puVar12 + 0xa4) * in_f27 +
                                          (double)(float)((double)*(float *)((int)puVar12 + 0x84) *
                                                          dVar29 + -(double)(float)(dVar27 * (double
                                                  )*(float *)((int)puVar12 + 0x94)))))) - val[7];
    if (fVar3 - fVar2 < 0.0) {
      fVar2 = fVar3;
    }
    if (fVar2 - DAT_0071f418 * -5.5 < 0.0) {
      fVar2 = DAT_0071f418 * -5.5;
    }
    fVar2 = val[7] + fVar2;
    dVar27 = (double)fVar2;
    val[7] = fVar2;
    dVar29 = (double)g_FrameTime;
    dVar33 = 3.700000047683716;
    dVar24 = (double)(float)(dVar29 * 3.700000047683716);
    if (dVar24 < dVar27) {
      val[7] = (float)(dVar29 * 3.700000047683716);
      dVar27 = dVar24;
    }
    if (dVar27 < dVar23) {
      val[7] = 0.0;
      dVar27 = dVar23;
    }
    if (ABS(dVar27) < (double)(fVar3 * 0.25)) {
      val[7] = 0.0;
      dVar27 = dVar23;
    }
    dVar24 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
    dVar25 = (double)(fVar4 * (float)(dVar27 / dVar24));
    dVar28 = (double)(fVar5 * (float)(dVar27 / dVar24));
    dVar27 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar27 = dVar25;
    }
    dVar31 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar31 = dVar28;
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar27 = dVar25;
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar31 = dVar28;
    }
    if (((DAT_0096a778 & 2) != 0) && (g_heroMobyPtr->animationId == 'D')) {
      Hero_TransAnim((float)(longlong)(dVar32 * dVar41),0x3f,0);
      dVar29 = (double)g_FrameTime;
      dVar32 = (double)animationSpeed;
    }
    if ((g_heroMobyPtr->animationId != 'D') && (DAT_0096a77c == 0)) {
      uVar1 = g_heroMobyPtr->updateId;
      if ((uVar1 != '@') || (ABS(val[7]) != 0.0)) {
        if (uVar1 == '?') {
          if (0 < (int)val[7]) {
            Hero_TransAnim((float)(longlong)(dVar32 * 14.5),0x40,0);
          }
        }
        else if ((uVar1 != '@') || (val[7] <= (float)(dVar29 * dVar33) * 0.6)) {
          if ((uVar1 == 'A') && (val[7] < (float)(dVar29 * dVar33) * 0.4)) {
            Hero_TransAnim((float)(longlong)(dVar32 * 16.5),0x40,0);
          }
        }
        else {
          Hero_TransAnim((float)(longlong)(dVar32 * 14.5),0x41,0);
        }
      }
      else {
        Hero_TransAnim((float)(longlong)(dVar32 * 14.5),0x3f,0);
      }
    }
    fVar2 = (float)((double)g_heroPosition.x + dVar31);
    fVar3 = (float)((double)g_heroPosition.y + dVar27);
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    fVar9 = fVar2 - fVar4;
    fVar6 = fVar3 - fVar5;
    dVar29 = ABS((double)fVar9);
    dVar41 = ABS((double)fVar6);
    g_heroPosition.x = fVar2;
    g_heroPosition.y = fVar3;
    *(float *)((int)puVar12 + 0xc4) = fVar9;
    *(float *)(puVar12 + 0x19) = fVar6;
    dVar24 = (double)g_heroPosition.z;
    *(float *)((int)puVar12 + 0xcc) = (float)(dVar29 - dVar41);
    uVar14 = (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1d) & 4;
    dVar27 = ABS((double)*(float *)((int)puVar12 + 0xc4));
    if ((double)*(float *)((int)puVar12 + 0xcc) - dVar23 < 0.0) {
      dVar27 = dVar41;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    dVar41 = ABS((double)*(float *)(puVar12 + 0x19));
    if ((double)*(float *)((int)puVar12 + 0xcc) - dVar23 < 0.0) {
      dVar41 = dVar29;
    }
    fVar6 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar29 = dVar23;
    if (dVar23 < dVar27) {
      lVar15 = uVar13 - 0x1e0;
      lVar21 = uVar13 - 0xf8;
      lVar19 = uVar13 - 0x108;
      lVar22 = 2;
      fVar7 = (float)(dVar41 - dVar27) / (float)(dVar41 + dVar27);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar12 + 0xf4) = fVar7;
      *(float *)((int)puVar12 + 0xec) = fVar7;
      *(float *)(puVar12 + 0x1e) = fVar7;
      *(float *)(puVar12 + 0x1d) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar8;
      *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar7;
      *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xd8) * fVar7 * fVar7;
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar7 * fVar7;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x108;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar21;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xe8) * fVar7;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar15 = 2;
      dVar27 = dVar23;
      do {
        iVar17 = (int)lVar16;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xe8)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar9 + fVar6);
    }
    fVar6 = g_FrameTime;
    fVar9 = DAT_0071f40c;
    dVar41 = (double)(float)(dVar29 + dVar30);
    dVar27 = (double)(float)(dVar39 - dVar29);
    if (dVar29 - (double)(float)(dVar39 - dVar29) < 0.0) {
      dVar27 = dVar29;
    }
    dVar30 = (double)(float)(dVar39 - dVar41);
    if (dVar41 - (double)(float)(dVar39 - dVar41) < 0.0) {
      dVar30 = dVar41;
    }
    unused2 = &DAT_010bca40;
    dVar39 = (double)(float)(dVar38 - dVar29);
    if ((double)(float)(dVar38 - dVar29) - dVar27 < 0.0) {
      dVar39 = dVar27;
    }
    dVar27 = (double)(float)(dVar38 - dVar41);
    if ((double)(float)(dVar38 - dVar41) - dVar30 < 0.0) {
      dVar27 = dVar30;
    }
    dVar41 = (double)(float)(dVar39 * dVar39);
    dVar30 = (double)(float)(dVar27 * dVar27);
    dVar33 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar39));
    dVar38 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar27));
    dVar32 = (double)(float)(dVar41 * dVar33);
    dVar25 = (double)(float)(dVar30 * dVar38);
    dVar41 = (double)(((float)((double)(float)(dVar41 * dVar32) * dVar34 +
                              (double)(float)(dVar32 * dVar35 +
                                             (double)(float)(dVar33 * dVar36 +
                                                            (double)(float)((double)(float)(dVar41 *
                                                                                           dVar39) *
                                                                            dVar37 + dVar39)))) *
                       1.05 + fVar5) - fVar3);
    dVar27 = (double)(((float)((double)(float)(dVar30 * dVar25) * dVar34 +
                              (double)(float)(dVar25 * dVar35 +
                                             (double)(float)(dVar38 * dVar36 +
                                                            (double)(float)((double)(float)(dVar30 *
                                                                                           dVar27) *
                                                                            dVar37 + dVar27)))) *
                       1.05 + fVar4) - fVar2);
    dVar30 = (double)SQRT((float)(dVar27 * dVar27 + (double)(float)(dVar41 * dVar41)));
    *(float *)(puVar12 + 0x18) = (float)-dVar30;
    AccelDelt((float)dVar23,fVar9 * 0.015,fVar9 * 0.3,fVar6 * 7.0,
                        (float *)(puVar12 + 0x18),0x32ad58,&DAT_010bca40);
    g_heroPosition.z = (float)dVar24;
    dVar24 = (double)(float)((double)(float)((double)DAT_010bca40 / dVar30) * dVar41);
    dVar41 = (double)(float)((double)(float)((double)DAT_010bca40 / dVar30) * dVar27);
    dVar27 = dVar23;
    if (dVar23 - dVar30 < 0.0) {
      dVar27 = dVar24;
    }
    dVar36 = dVar23;
    if (dVar23 - dVar30 < 0.0) {
      dVar36 = dVar41;
    }
    if (dVar30 - dVar23 < 0.0) {
      dVar27 = dVar24;
    }
    if (dVar30 - dVar23 < 0.0) {
      dVar36 = dVar41;
    }
    g_heroPosition.y = (float)((double)g_heroPosition.y + dVar27);
    g_heroPosition.x = (float)((double)g_heroPosition.x + dVar36);
    if (Cheats[5] == '\0') {
      dVar27 = (double)FastWrapRot(1.5707964,(float)dVar29);
    }
    else {
      dVar27 = (double)FastWrapRot(-1.5707964,(float)dVar29);
    }
    g_heroIdealRotZ = (float)dVar27;
    dVar41 = 6.2831854820251465;
    DeltAng((float)dVar27,g_FrameTime * 6.2831855,&g_heroRotation.z,0x720000,
                      (int)unused2,0);
    fVar2 = DAT_0071f418 * 9.8 + val[9];
    val[9] = fVar2;
    dVar24 = 2.0;
    g_heroPosition.z = g_heroPosition.z - (fVar2 - 2.0);
    dVar27 = (double)GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
    g_heroPosition.z = (float)((double)g_heroPosition.z - dVar24);
    if ((double)g_heroPosition.z < dVar27) {
      g_heroPosition.z = (float)dVar27;
      val[9] = 0.0;
    }
    if (g_heroMobyPtr->animationId != 'D') {
      dVar27 = (double)FastWrapRot(0.2617994,(float)dVar29);
      DeltAng((float)dVar27,g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000
                        ,(int)unused2,0);
      dVar24 = (double)FastDiffRots((double)(moby->rotation).z,dVar27);
      dVar30 = 1.0471975803375244;
      if (dVar24 <= 1.0471975803375244) {
        dVar27 = (double)FastDiffRots((double)(moby->rotation).z,dVar27);
        if (dVar27 < -1.0471975803375244) {
          dVar27 = (double)FastWrapRot((moby->rotation).z,(float)dVar30);
          (moby->rotation).z = (float)dVar27;
        }
      }
      else {
        dVar27 = (double)FastDiffRots((double)(moby->rotation).z,0x3ff0c15240000000);
        (moby->rotation).z = (float)dVar27;
      }
    }
    dVar27 = (double)FastSubRots((float)dVar29,(float)dVar26);
    fVar2 = (float)((double)val[6] + dVar27) / (float)((double)val[0xc] * dVar41);
    dVar26 = (double)fVar2;
    val[6] = (float)((double)val[6] + dVar27);
    *val = fVar2;
    if (dVar40 < dVar26) {
      *val = 1.0;
      dVar26 = dVar40;
    }
    if (dVar26 < dVar23) {
      *val = 0.0;
    }
    FastMemSetZero(&g_heroVelocity,0x90);
  }
  else if (uVar1 == '\x01') {
    uVar10 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar10] == '\0') &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar10 >> 5) << 2))
        & 1 << (uVar10 & 0x1f)) == 0)) {
      fVar4 = fVar4 - g_heroPosition.y;
      fVar3 = fVar3 - g_heroPosition.x;
      if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 1.75) && (g_heroType == '\0')) {
        *(float *)((int)puVar12 + 0xdc) = fVar3;
        *(float *)(puVar12 + 0x1c) = fVar4;
        *(float *)((int)puVar12 + 0xe4) = ABS(fVar3) - ABS(fVar4);
        fVar9 = g_heroRotation.z;
        fVar2 = 0.0;
        uVar14 = (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar12 + 0xdc));
        if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
          fVar5 = ABS(fVar4);
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
        fVar6 = ABS(*(float *)(puVar12 + 0x1c));
        if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
          fVar6 = ABS(fVar3);
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (0.0 < fVar5) {
          lVar15 = uVar13 - 0x1e0;
          lVar19 = uVar13 - 200;
          lVar21 = uVar13 - 0xb8;
          lVar22 = 2;
          fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x134) = fVar5;
          *(float *)((int)puVar12 + 300) = fVar5;
          *(float *)(puVar12 + 0x26) = fVar5;
          *(float *)(puVar12 + 0x25) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar6;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar5;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x118) * fVar5 * fVar5;
            iVar17 = (int)lVar19;
            lVar15 = lVar15 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
            lVar21 = lVar21 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar21 = uVar13 - 200;
          pfVar20 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar19 = lVar21;
          do {
            fVar5 = *pfVar20;
            fVar6 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x128) * fVar5;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar18 = (int)lVar21;
            lVar16 = lVar16 + 0x10;
            lVar21 = lVar21 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar17 + 0x128) + *(float *)(iVar18 + 4) +
                    *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar3;
        }
        dVar23 = (double)FastSubRots(fVar9,fVar2);
        if ((((dVar23 < 1.5707963705062866) && (ABS((g_heroPosition.z - 0.3) - (moby->pos).z) < 0.2)
             ) && (g_CurrentWeapon == 8)) && (g_currentWeaponMoby != (MobyInstance *)0x0)) {
          puVar12[0x29] = (longlong)(int)(animationSpeed * 7.5);
          iVar17 = PadRingBitsOn(0x80,*(int *)((int)puVar12 + 0x14c),(int *)0x0);
          if (((iVar17 != 0) &&
              (fVar2 = val[5], puVar12[0x29] = (longlong)(int)(animationSpeed * 30.5),
              (uint)*(float *)((int)puVar12 + 0x14c) < (uint)fVar2)) &&
             (((moby->pos).z == val[0xf] &&
              (uVar11 = (int)*val >> 0x1f, (int)((uVar11 >> 1 ^ (uint)*val) - uVar11) < 0x3f800000))
             )) {
            val[5] = 0.0;
            DAT_010bca40 = 0.0;
            if (MobyUpdateChainStart != 0) {
              iVar17 = MobyUpdateChainStart;
              do {
                if (((*(ushort *)(iVar17 + 0x34) & 0x1000) != 0) &&
                   (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
                   fVar2 = (moby->pos).x - *(float *)(iVar17 + 0x10),
                   SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 3.25)) goto LAB_0032c344;
                iVar17 = *(int *)(iVar17 + 0x28);
              } while (iVar17 != 0);
            }
            TransitionMovement(0x3b,1);
            puVar12[0x29] = (longlong)(int)(animationSpeed * 180.5);
            SetCameraPosition(0x951500,0x951510,3,*(undefined4 *)((int)puVar12 + 0x14c),0);
            Camera_SetMobyDrivenTargetRot(&Cuboids[(int)val[8]].rot.x);
            Camera_SetMobyDrivenTargetPos(&Cuboids[(int)val[8]].pos.x);
            Camera_SetMobyDrivenPolarRadiusCurve(val[10],val[0xb]);
            moby->state = '\x03';
            val[9] = 0.0;
            val[6] = val[0xc] * 6.2831855 * *val;
            goto LAB_0032c344;
          }
        }
      }
      uVar11 = (int)*val >> 0x1f;
      if ((int)((uVar11 >> 1 ^ (uint)*val) - uVar11) < 0x3f800000) {
        val[5] = (float)((int)val[5] + 1);
        dVar23 = 60.5;
        Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 60.5),val);
        if (0 < (int)*val) {
          dVar23 = (double)FastDiffRots
                                     ((double)(moby->rotation).z,
                                      (double)((val[0xc] * 6.2831855) /
                                              (float)(longlong)((double)animationSpeed * dVar23)));
          (moby->rotation).z = (float)dVar23;
        }
        fVar2 = g_FrameTime * 0.5 + (moby->pos).z;
        (moby->pos).z = fVar2;
        if (val[0xf] <= fVar2) {
          (moby->pos).z = val[0xf];
        }
      }
      else if (val[0xe] != 0.0) {
        if ((val[0xd] != -NAN) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
          SaveCheckpointMobyVar(val,4,moby,2,(int *)&DAT_00a53560);
          SetLevelFlag(moby->levelFlagIdx);
          fVar2 = val[0xd];
          if (fVar2 != -NAN) {
            SetSpawnPoint
                      ((Vec4 *)&Cuboids[(int)fVar2].pos,(Vec4 *)&Cuboids[(int)fVar2].rot);
          }
        }
        fVar2 = -(g_FrameTime * 0.5 - (moby->pos).z);
        (moby->pos).z = fVar2;
        if (fVar2 <= val[0xf] - 0.5) {
          (moby->pos).z = val[0xf] - 0.5;
        }
      }
    }
    else {
      moby->state = '\x05';
      (moby->pos).z = fVar2 - 0.5;
      *val = 1.0;
    }
  }
  else if (uVar1 == '\0') {
    val[0xf] = fVar2;
    moby->state = '\x01';
  }
LAB_0032c344:
  if ((((Level == Novalis) && (moby->uid == 0x34)) && (moby->oClass == BOLT_CRANK)) &&
     (moby->state == '\x05')) {
    g_MiscLevelFlags.field12_0xc = 1;
  }
  if (((Level == Novalis) && (moby->uid == 0x35)) &&
     ((moby->oClass == BOLT_CRANK && (moby->state == '\x05')))) {
    g_MiscLevelFlags.field13_0xd = 1;
  }
  return;
}


