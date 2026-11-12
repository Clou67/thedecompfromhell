// game/update/moby55.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3b17e8-0x3b1bf0
#include "game/update/moby55.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "idol/fastfunc.h"

// 0x03b17e8 (0x408 bytes)
/* Moby 55 */

double UpdateMoby_55(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  Cuboid *pCVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  piVar4 = (int *)moby->pVar;
  if (g_gameMode == GAME_MODE_SPACE) {
    if (piVar4[4] == 0) {
      piVar4[4] = 0;
      if (g_SpaceCutscene == 8) {
        piVar4[5] = 0;
        piVar4[4] = 1;
        piVar4[6] = 0x3eb2b8c2;
      }
      else if (g_SpaceCutscene == 3) {
        piVar4[4] = 1;
        piVar4[6] = 0;
        piVar4[5] = 0x3eb2b8c2;
      }
    }
  }
  else {
    piVar4[4] = 0;
  }
  if (piVar4[6] != piVar4[5]) {
    OrganicDeltAng
              ((float)piVar4[5],g_FrameTimeSq * 1.5707964,g_FrameTimeSq * 1.5707964,
               g_FrameTime * 1.5707964,(float *)(piVar4 + 6),0x720000,
               (float *)(piVar4 + 2));
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    fVar2 = (moby->pos).y - Cuboids[*piVar4].pos.y;
    fVar3 = (moby->pos).x - Cuboids[*piVar4].pos.x;
    piVar4[3] = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    fVar2 = (moby->rotation).z;
    dVar7 = (double)fVar2;
    piVar4[1] = (int)fVar2;
    moby->state = ((byte)(ZERO_MASK((int)(moby->rotation).y)) & 1) + 1;
  }
  else {
    dVar16 = -0.16666656732559204;
    dVar7 = -1.5707950592041016;
    dVar13 = 1.570796251296997;
    dVar17 = 0.008333025500178337;
    dVar14 = 3.141592502593994;
    dVar18 = -0.0001980741071747616;
    dVar15 = -3.141592502593994;
    dVar19 = 2.601886990305502e-06;
    if (bVar1 < 2) {
      dVar12 = (double)(moby->pos).z;
      dVar8 = (double)FastWrapRot((float)piVar4[6],-1.570795);
      pCVar6 = Cuboids;
      dVar13 = (double)(float)(dVar8 + dVar13);
      dVar7 = (double)(float)(dVar14 - dVar8);
      if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
        dVar7 = dVar8;
      }
      dVar9 = (double)(float)(dVar14 - dVar13);
      if (dVar13 - (double)(float)(dVar14 - dVar13) < 0.0) {
        dVar9 = dVar13;
      }
      dVar14 = (double)(float)(dVar15 - dVar8);
      if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
        dVar14 = dVar7;
      }
      dVar7 = (double)(float)(dVar15 - dVar13);
      if ((double)(float)(dVar15 - dVar13) - dVar9 < 0.0) {
        dVar7 = dVar9;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      iVar5 = *piVar4;
      dVar15 = (double)(float)(dVar7 * dVar7);
      dVar10 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar8 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar7));
      dVar9 = (double)(float)(dVar13 * dVar10);
      dVar11 = (double)(float)(dVar15 * dVar8);
      fVar3 = (float)((double)(float)(dVar15 * dVar11) * dVar19 +
                     (double)(float)(dVar11 * dVar18 +
                                    (double)(float)(dVar8 * dVar17 +
                                                   (double)(float)((double)(float)(dVar15 * dVar7) *
                                                                   dVar16 + dVar7)))) *
              (float)piVar4[3];
      (moby->pos).x = fVar3;
      fVar2 = (float)piVar4[3];
      (moby->pos).z = 0.0;
      fVar2 = (float)((double)(float)(dVar13 * dVar9) * dVar19 +
                     (double)(float)(dVar9 * dVar18 +
                                    (double)(float)(dVar10 * dVar17 +
                                                   (double)(float)((double)(float)(dVar13 * dVar14)
                                                                   * dVar16 + dVar14)))) * fVar2;
      (moby->pos).y = fVar2;
      (moby->pos).x = fVar3 + pCVar6[iVar5].pos.x;
      fVar3 = pCVar6[iVar5].pos.y;
      (moby->pos).z = (float)dVar12;
      (moby->pos).y = fVar2 + fVar3;
      dVar7 = (double)FastWrapRot((float)piVar4[1],(float)piVar4[6]);
      (moby->rotation).z = (float)dVar7;
    }
    else if (bVar1 < 3) {
      dVar12 = (double)(moby->pos).z;
      dVar8 = (double)FastDiffRots(0xbff921fa00000000,(double)(float)piVar4[6]);
      pCVar6 = Cuboids;
      dVar13 = (double)(float)(dVar8 + dVar13);
      dVar7 = (double)(float)(dVar14 - dVar8);
      if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
        dVar7 = dVar8;
      }
      dVar9 = (double)(float)(dVar14 - dVar13);
      if (dVar13 - (double)(float)(dVar14 - dVar13) < 0.0) {
        dVar9 = dVar13;
      }
      dVar14 = (double)(float)(dVar15 - dVar8);
      if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
        dVar14 = dVar7;
      }
      dVar7 = (double)(float)(dVar15 - dVar13);
      if ((double)(float)(dVar15 - dVar13) - dVar9 < 0.0) {
        dVar7 = dVar9;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      iVar5 = *piVar4;
      dVar15 = (double)(float)(dVar7 * dVar7);
      dVar10 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar8 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar7));
      dVar9 = (double)(float)(dVar13 * dVar10);
      dVar11 = (double)(float)(dVar15 * dVar8);
      fVar3 = (float)((double)(float)(dVar15 * dVar11) * dVar19 +
                     (double)(float)(dVar11 * dVar18 +
                                    (double)(float)(dVar8 * dVar17 +
                                                   (double)(float)((double)(float)(dVar15 * dVar7) *
                                                                   dVar16 + dVar7)))) *
              (float)piVar4[3];
      (moby->pos).x = fVar3;
      fVar2 = (float)piVar4[3];
      (moby->pos).z = 0.0;
      fVar2 = (float)((double)(float)(dVar13 * dVar9) * dVar19 +
                     (double)(float)(dVar9 * dVar18 +
                                    (double)(float)(dVar10 * dVar17 +
                                                   (double)(float)((double)(float)(dVar13 * dVar14)
                                                                   * dVar16 + dVar14)))) * fVar2;
      (moby->pos).y = fVar2;
      (moby->pos).x = fVar3 + pCVar6[iVar5].pos.x;
      fVar3 = pCVar6[iVar5].pos.y;
      (moby->pos).z = (float)dVar12;
      (moby->pos).y = fVar2 + fVar3;
      dVar7 = (double)FastDiffRots((double)(float)piVar4[1],(double)(float)piVar4[6]);
      (moby->rotation).z = (float)dVar7;
    }
  }
  return dVar7;
}


