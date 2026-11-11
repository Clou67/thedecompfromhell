// game/update/moby1504.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x28d9b0-0x28df68
#include <math.h>
#include "game/update/moby1504.h"
#include "game/camera.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x028d9b0 (0x5b8 bytes)
/* Moby 1504 */

void UpdateMoby_1504(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  char cVar9;
  float fVar8;
  uint uVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  bVar1 = moby->state;
  pfVar2 = (float *)moby->pVar;
  uVar10 = (uint)bVar1;
  bVar11 = (uVar10 == 0xffffffff) << 1;
  if (bVar1 == 0) {
    if (-1 < (int)uVar10) {
      if ((int)pfVar2[0x16] < 2) {
        DeleteMoby(moby);
      }
      else {
        iVar7 = 0;
        pfVar6 = pfVar2;
        if (0 < (int)pfVar2[0x16]) {
          do {
            iVar7 = iVar7 + 1;
            fVar8 = pfVar2[0x16];
            *pfVar6 = *pfVar6 * 0.00390625;
            pfVar6[1] = pfVar6[1] * 0.00390625;
            pfVar6[2] = pfVar6[2] * 0.00390625;
            pfVar6[3] = pfVar6[3] * 0.00390625;
            pfVar6 = pfVar6 + 4;
          } while (iVar7 < (int)fVar8);
        }
        pfVar2[0x1a] = -NAN;
        bVar11 = moby->updateDistance;
        iVar7 = FastDoubleToInt((double)pfVar2[0x17]);
        if ((int)(uint)bVar11 < iVar7 + 4) {
          cVar9 = FastDoubleToInt((double)pfVar2[0x17]);
          moby->updateDistance = cVar9 + '\x04';
        }
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 < 2) {
    auVar16 = ZEXT416(0);
    auVar15 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    fVar8 = (moby->pos).y - GameCamera.posY;
    fVar3 = (moby->pos).x - GameCamera.posX;
    dVar14 = (double)SQRT(fVar3 * fVar3 + fVar8 * fVar8);
    auVar16 = auVar15;
    if (dVar14 < (double)pfVar2[0x17]) {
      auVar16 = ZEXT416(1);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    }
    auVar16 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    vectorCompareEqualToFloatingPoint(auVar16,auVar15);
    if (((uVar10 == 0xffffffff) && (pfVar2[0x20] != -NAN)) &&
       (iVar7 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar2[0x20]),
       iVar7 == 0)) {
      auVar16 = auVar15;
    }
    if ((pfVar2[0x21] == -NAN) || (g_MobyInstance[(int)pfVar2[0x21]].state < 0x80)) {
      vectorCompareEqualToFloatingPoint(auVar16,auVar15);
      if ((bool)(bVar11 >> 1 & 1)) {
        iVar7 = FastDecTimerS32(pfVar2 + 0x1b);
        if (iVar7 != 0) {
          fVar8 = (float)MB_randRange(pfVar2[0x14],pfVar2[0x15]);
          pfVar2[0x1c] = fVar8;
          pfVar2[0x1b] = fVar8;
          pfVar2[0x1d] = pfVar2[0x1e];
          iVar7 = MB_randRange(1,(int)pfVar2[0x16] + -1);
          pfVar2[0x1e] = (float)(((int)pfVar2[0x1e] + iVar7) -
                                (((int)pfVar2[0x1e] + iVar7) / (int)pfVar2[0x16]) *
                                (int)pfVar2[0x16]);
          pfVar2[0x1f] = (float)((pfVar2[0x1f] == 0));
        }
        dVar12 = (double)FastIntToDouble((int)pfVar2[0x1c] - (int)pfVar2[0x1b]);
        dVar13 = (double)FastIntToDouble(pfVar2[0x1c]);
        fVar8 = (float)(dVar12 / dVar13) * 3.1415927 * 0.5;
        if (pfVar2[0x1f] != 0.0) {
          fVar8 = fVar8 + 1.5707964;
        }
        pfVar6 = pfVar2 + 0x10;
        fVar3 = 3.1415925 - fVar8;
        if (fVar8 - (3.1415925 - fVar8) < 0.0) {
          fVar3 = fVar8;
        }
        fVar4 = -3.1415925 - fVar8;
        if ((-3.1415925 - fVar8) - fVar3 < 0.0) {
          fVar4 = fVar3;
        }
        fVar8 = fVar4 * fVar4;
        fVar3 = fVar8 * fVar8 * fVar4;
        fVar5 = fVar8 * fVar3;
        fVar8 = fVar8 * fVar5 * 2.601887e-06 +
                fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar8 * fVar4 * -0.16666657 + fVar4;
        if (pfVar2[0x1f] == 0.0) {
          Lerp_vec4(fVar8,pfVar6);
        }
        else {
          Lerp_vec4(fVar8,pfVar6);
        }
        dVar12 = (double)(float)((double)pfVar2[0x17] * 0.75);
        if (dVar12 < dVar14) {
          Lerp_vec4((float)(dVar14 - dVar12) / (float)((double)pfVar2[0x17] - dVar12),
                              pfVar6);
        }
        fVar8 = pfVar2[0x1a];
        if (fVar8 == -NAN) {
          fVar8 = (float)CreatePointLight2
                                   (pfVar2[0x18],(double)pfVar2[0x13],(double)pfVar2[0x10],
                                    (double)pfVar2[0x11],(double)pfVar2[0x12],(Vec4 *)&moby->pos);
          pfVar2[0x1a] = fVar8;
        }
        else {
          PointLights[(int)fVar8].pos.x = (moby->pos).x;
          PointLights[(int)fVar8].pos.y = (moby->pos).y;
          PointLights[(int)fVar8].pos.z = (moby->pos).z;
          PointLights[(int)fVar8].pos.w = (moby->pos).w;
          PointLights[(int)fVar8].pos.w = pfVar2[0x18];
          PointLights[(int)fVar8].color.x = pfVar2[0x10];
          PointLights[(int)fVar8].color.y = pfVar2[0x11];
          PointLights[(int)fVar8].color.z = pfVar2[0x12];
          PointLights[(int)fVar8].color.w = pfVar2[0x13];
        }
      }
      else if (pfVar2[0x1a] != -NAN) {
        DeletePointLight(pfVar2[0x1a]);
        pfVar2[0x1a] = -NAN;
      }
    }
    else {
      if (pfVar2[0x1a] != -NAN) {
        DeletePointLight(pfVar2[0x1a]);
      }
      DeleteMoby(moby);
    }
  }
  return;
}


