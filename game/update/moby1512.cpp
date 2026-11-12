// game/update/moby1512.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x28f3f0-0x29014c
#include "game/update/moby1512.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1511.h"
#include "idol/fastfunc.h"

// 0x028f3f0 (0x3c0 bytes)
// inlined: FastRSqrt @0x28f57c, FastRSqrt @0x28f5ec
void M1512_0028f3f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  double dVar11;
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
  float local_120 [38];
  
  iVar4 = *(int *)(param_1 + 0x78);
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  dVar15 = (double)(*(float *)(param_1 + 0xe4) * DAT_007ab2a0 + *(float *)(param_1 + 0x14));
  dVar16 = (double)(*(float *)(param_1 + 0xe0) * DAT_007ab2a0 + *(float *)(param_1 + 0x10));
  dVar14 = (double)(*(float *)(param_1 + 0xe8) * DAT_007ab2a0 + *(float *)(param_1 + 0x18));
  dVar23 = 0.0;
  fVar1 = (float)((double)GameCamera.posY - dVar15);
  fVar2 = (float)((double)GameCamera.posX - dVar16);
  fVar3 = (float)((double)GameCamera.posZ - dVar14);
  dVar27 = (double)*(float *)(param_1 + 0x1c);
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar26 = (double)(float)GameCamera.field8_0x14c;
  dVar17 = dVar23;
  dVar18 = dVar23;
  dVar19 = dVar23;
  if (SQRT(fVar5) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar5);
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar17 = (double)(fVar2 * fVar6);
    dVar18 = (double)(fVar1 * fVar6);
    dVar19 = (double)(fVar3 * fVar6);
  }
  fVar1 = (float)(dVar17 * dVar17 + --(double)(float)(dVar18 * dVar18));
  dVar20 = dVar23;
  dVar21 = dVar23;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar20 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    dVar21 = (double)(float)(dVar17 * dVar20);
    dVar20 = -(double)(float)(dVar18 * dVar20);
  }
  dVar25 = (double)(float)(dVar19 * dVar21);
  dVar24 = (double)(float)(dVar18 * dVar20);
  dVar22 = (double)DAT_007ab2a4;
  if ((*(char *)(iVar4 + 0x67) != '\0') && (iVar7 = MB_randInt(8), iVar7 == 0)) {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) >> 1;
  }
  pfVar8 = local_120;
  pfVar9 = (float *)&DAT_007ab2b0;
  lVar10 = 4;
  do {
    fVar1 = *(float *)(iVar4 + 0x70);
    dVar11 = (double)(*pfVar9 * fVar1);
    *pfVar8 = *pfVar9 * fVar1;
    dVar12 = (double)(pfVar9[1] * fVar1);
    pfVar8[1] = pfVar9[1] * fVar1;
    fVar1 = pfVar9[2] * fVar1;
    pfVar8[2] = fVar1;
    dVar13 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)(dVar13 * dVar27 + (double)(float)(dVar11 * dVar26));
    pfVar8[2] = (float)((double)(float)(dVar19 * dVar22 + dVar14) * dVar13 +
                       (double)((float)(dVar17 * dVar21 - dVar24) * fVar1 +
                               (float)(dVar11 * dVar19 + dVar23)));
    *pfVar8 = (float)((double)(float)(dVar17 * dVar22 + dVar16) * dVar13 +
                     (double)((float)(dVar18 * dVar23 - dVar25) * fVar1 +
                             (float)(dVar11 * dVar17 + (double)(float)(dVar12 * dVar20))));
    pfVar8[1] = (float)((double)(float)(dVar18 * dVar22 + dVar15) * dVar13 +
                       (double)((float)(dVar19 * dVar20 - dVar23) * fVar1 +
                               (float)(dVar11 * dVar18 + (double)(float)(dVar12 * dVar21))));
    pfVar8 = pfVar8 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FastDrawQuad(local_120,0,0,EffectTexHeaders,9);
  return;
}


// 0x028f7d0 (0x97c bytes)
/* Moby 1512 */

void UpdateMoby_1512(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar10;
  u8 uVar12;
  int iVar11;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  undefined4 local_90 [8];
  
  lVar4 = (longlong)(int)moby;
  piVar1 = (int *)moby->pVar;
  iVar10 = FastCheckBsphereInView(0x4050000000000000,local_e0);
  if (iVar10 != -1) {
    uVar12 = moby->state;
    if (uVar12 == '\x04') {
      uVar13 = 1;
      iVar10 = FastDecTimerS32(piVar1 + 9);
      if (iVar10 != 0) {
        dVar14 = (double)MB_randRangeFloat(60.0,120.0);
        iVar10 = FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
        uVar13 = 5;
        piVar1[9] = iVar10;
      }
      iVar10 = MB_randInt(4);
      if (((iVar10 == 0) || (1 < uVar13)) && (iVar10 = 0, uVar13 != 0)) {
        dVar14 = 1.0;
        dVar17 = 0.0;
        do {
          MB_randRangeFloat(-DAT_007ab2fc,DAT_007ab2fc);
          MB_randRangeFloat(-DAT_007ab2fc,DAT_007ab2fc);
          MB_randRangeFloat(-DAT_007ab2f8,DAT_007ab2f8);
          MB_randRangeFloat(DAT_007ab310,DAT_007ab314);
          MB_randRangeFloat(DAT_007ab318,DAT_007ab31c);
          uVar3 = DAT_007ab324;
          uVar2 = DAT_007ab320;
          MB_randRangeFloat((float)dVar17,(float)dVar14);
          uVar5 = FastLerpColor(uVar2,uVar3);
          uVar3 = DAT_007ab32c;
          uVar2 = DAT_007ab328;
          MB_randRangeFloat((float)dVar17,(float)dVar14);
          uVar6 = FastLerpColor(uVar2,uVar3);
          dVar15 = (double)MB_randRangeFloat((float)dVar17,(float)dVar14);
          uVar7 = FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)((double)(longlong)DAT_007ab300 * dVar15 + dVar14)));
          dVar16 = (double)(longlong)DAT_007ab304;
          dVar15 = (double)MB_randRangeFloat(-DAT_007ab30c,DAT_007ab30c);
          uVar8 = FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar16 * (double)(float)(dVar15 + dVar14))));
          dVar16 = (double)(longlong)DAT_007ab308;
          dVar15 = (double)MB_randRangeFloat(-DAT_007ab30c,DAT_007ab30c);
          uVar9 = FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar16 * (double)(float)(dVar15 + dVar14))));
          SpawnPart_2(lVar4 + 0x10,local_d0,local_c0,uVar5,uVar6,uVar7,uVar8,uVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar13);
      }
    }
    else if (uVar12 == '\x03') {
      iVar10 = FastDecTimerS32(piVar1 + 8);
      if (iVar10 != 0) {
        dVar14 = (double)MB_randRangeFloat
                                   ((float)(longlong)DAT_007ab370,(float)(longlong)DAT_007ab374);
        iVar10 = FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
        piVar1[8] = iVar10;
        iVar11 = 1;
        iVar10 = MB_randInt(7);
        if (iVar10 == 0) {
          iVar11 = MB_randInt(5);
          iVar11 = iVar11 + 5;
        }
        iVar10 = 0;
        if (0 < iVar11) {
          dVar14 = 0.0;
          dVar17 = 1.0;
          do {
            MB_randSphere(dVar14,(double)(DAT_007ab340 * g_FrameTime),local_90);
            MB_randRangeFloat(-DAT_007ab33c,DAT_007ab33c);
            MB_randRangeFloat(-DAT_007ab33c,DAT_007ab33c);
            MB_randRangeFloat(DAT_007ab350,DAT_007ab354);
            MB_randRangeFloat(DAT_007ab358,DAT_007ab35c);
            uVar3 = DAT_007ab364;
            uVar2 = DAT_007ab360;
            MB_randRangeFloat((float)dVar14,(float)dVar17);
            uVar5 = FastLerpColor(uVar2,uVar3);
            uVar3 = DAT_007ab36c;
            uVar2 = DAT_007ab368;
            MB_randRangeFloat((float)dVar14,(float)dVar17);
            uVar6 = FastLerpColor(uVar2,uVar3);
            dVar15 = (double)MB_randRangeFloat((float)dVar14,(float)dVar17);
            uVar7 = FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)((double)(longlong)DAT_00fada70 * dVar15 + dVar17)));
            dVar16 = (double)(longlong)DAT_007ab344;
            dVar15 = (double)MB_randRangeFloat(-DAT_007ab34c,DAT_007ab34c);
            uVar8 = FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar16 * (double)(float)(dVar15 + dVar17))));
            dVar16 = (double)(longlong)DAT_007ab348;
            dVar15 = (double)MB_randRangeFloat(-DAT_007ab34c,DAT_007ab34c);
            uVar9 = FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar16 * (double)(float)(dVar15 + dVar17))));
            SpawnPart_2(lVar4 + 0x10,local_b0,local_a0,uVar5,uVar6,uVar7,uVar8,uVar9);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
      }
    }
    else if (uVar12 == '\x02') {
      iVar10 = FastDecTimerS32(piVar1 + 10);
      if (iVar10 != 0) {
        MB_SpawnExplosionSparks
                  (0x3fd54fdf40000000,0x402a000000000000,lVar4,lVar4 + 0x10,&DAT_0028f7b0,
                   0xffffffffffffffff);
        moby->state = (char)(ZERO_MASK(*piVar1)) + '\x04';
      }
    }
    else if (uVar12 == '\0') {
      FastEulerToMtx(lVar4 + 0xc0,lVar4 + 0x40);
      uVar12 = '\x01';
      if (piVar1[1] == 0) {
        uVar12 = (char)(ZERO_MASK(*piVar1)) + '\x04';
      }
      moby->state = uVar12;
    }
  }
  return;
}


