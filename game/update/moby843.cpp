// game/update/moby843.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48243c-0x4828d8
#include "game/update/moby843.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"

// 0x048243c (0x14 bytes)
void M843_0048243c(void)

{
  DAT_008acfcc = 0x10000;
  return;
}


// 0x0482470 (0x468 bytes)
/* Moby 843 */

void UpdateMoby_843(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Cuboid *pCVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float local_50;
  float local_4c;
  
  pCVar15 = Cuboids;
  bVar1 = moby->state;
  pfVar9 = (float *)moby->pVar;
  MVar8 = moby->modeBits;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      fVar10 = pfVar9[4];
      fVar2 = Cuboids[(int)fVar10].pos.x;
      (moby->pos).x = fVar2;
      fVar3 = pCVar15[(int)fVar10].pos.y;
      (moby->pos).y = fVar3;
      fVar4 = pCVar15[(int)fVar10].pos.z;
      (moby->pos).z = fVar4;
      (moby->pos).w = pCVar15[(int)fVar10].pos.w;
      (moby->rotation).z = pCVar15[(int)fVar10].rot.z;
      fVar5 = pCVar15[(int)fVar10].matrix.v1.y;
      fVar6 = pCVar15[(int)fVar10].matrix.v1.x;
      fVar10 = pCVar15[(int)fVar10].matrix.v1.z;
      fVar7 = 0.0;
      fVar14 = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar13 = pfVar9[6] / fVar14;
      fVar12 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      fVar11 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar11 = fVar5 * fVar13;
      }
      if (0.0 - fVar14 < 0.0) {
        fVar7 = fVar6 * fVar13;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar11 = fVar5 * fVar13;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar7 = fVar6 * fVar13;
      }
      if (pfVar9[7] != 0.0) {
        fVar7 = -fVar7;
        fVar11 = -fVar11;
        fVar12 = -fVar12;
        moby->modeBits = MVar8 | MIRROR;
      }
      moby->state = '\x01';
      (moby->pos).x = fVar2 + fVar7;
      (moby->pos).y = fVar3 + fVar11;
      (moby->pos).z = fVar4 + fVar12;
    }
    else if (g_MobyInstance[(int)pfVar9[5]].setByGroup != '\0') {
      PlayMobySound(0,0,moby);
      moby->state = '\x02';
      pfVar9[3] = 0.0;
      pfVar9[2] = 0.0;
      pfVar9[1] = 0.0;
      *pfVar9 = 0.0;
    }
  }
  else if (bVar1 < 3) {
    fVar5 = pfVar9[4];
    dVar22 = 0.0;
    local_4c = 0.0;
    fVar2 = Cuboids[(int)fVar5].matrix.v1.y;
    fVar3 = Cuboids[(int)fVar5].matrix.v1.x;
    fVar4 = Cuboids[(int)fVar5].matrix.v1.z;
    fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar23 = (double)Cuboids[(int)fVar5].pos.w;
    fVar10 = (pfVar9[6] * 3.0) / fVar6;
    dVar24 = dVar22;
    if (0.0 - fVar6 < 0.0) {
      dVar24 = (double)(fVar4 * fVar10);
    }
    dVar17 = dVar22;
    if (0.0 - fVar6 < 0.0) {
      dVar17 = (double)(fVar2 * fVar10);
    }
    dVar18 = dVar22;
    if (0.0 - fVar6 < 0.0) {
      dVar18 = (double)(fVar3 * fVar10);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar24 = (double)(fVar4 * fVar10);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar17 = (double)(fVar2 * fVar10);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar18 = (double)(fVar3 * fVar10);
    }
    if (pfVar9[7] != 0.0) {
      dVar18 = -dVar18;
      dVar17 = -dVar17;
      dVar24 = -dVar24;
    }
    dVar21 = (double)((float)((double)Cuboids[(int)fVar5].pos.y + dVar17) - (moby->pos).y);
    dVar20 = (double)((float)((double)Cuboids[(int)fVar5].pos.x + dVar18) - (moby->pos).x);
    dVar19 = (double)((float)((double)Cuboids[(int)fVar5].pos.z + dVar24) - (moby->pos).z);
    local_50 = SQRT(pfVar9[2] * pfVar9[2] + *pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
    fVar2 = SQRT((float)(dVar19 * dVar19 +
                        (double)(float)(dVar20 * dVar20 + (double)(float)(dVar21 * dVar21))));
    dVar18 = (double)fVar2;
    OrganicDelt
              (fVar2,g_FrameTimeSq * 20.0,g_FrameTimeSq * 30.0,g_FrameTime * 10.0,&local_4c,
               0x720000,&local_50);
    dVar17 = (double)(float)((double)local_50 / dVar18);
    pfVar9[3] = (float)dVar23;
    dVar24 = dVar22;
    if (dVar22 - dVar18 < 0.0) {
      dVar24 = (double)(float)(dVar21 * dVar17);
    }
    dVar23 = dVar22;
    if (dVar22 - dVar18 < 0.0) {
      dVar23 = (double)(float)(dVar20 * dVar17);
    }
    dVar16 = dVar22;
    if (dVar22 - dVar18 < 0.0) {
      dVar16 = (double)(float)(dVar19 * dVar17);
    }
    if (dVar18 - dVar22 < 0.0) {
      dVar24 = (double)(float)(dVar21 * dVar17);
    }
    if (dVar18 - dVar22 < 0.0) {
      dVar23 = (double)(float)(dVar20 * dVar17);
    }
    if (dVar18 - dVar22 < 0.0) {
      dVar16 = (double)(float)(dVar19 * dVar17);
    }
    pfVar9[1] = (float)dVar24;
    *pfVar9 = (float)dVar23;
    pfVar9[2] = (float)dVar16;
    (moby->pos).x = (float)((double)(moby->pos).x + dVar23);
    (moby->pos).y = (moby->pos).y + pfVar9[1];
    (moby->pos).z = (moby->pos).z + pfVar9[2];
    if (dVar18 < 0.009999999776482582) {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    fVar2 = pfVar9[4];
    dVar24 = 5.900000095367432;
    OrganicDelt
              (Cuboids[(int)fVar2].pos.z - 5.9,g_FrameTimeSq * 20.0,g_FrameTimeSq * 40.0,
               g_FrameTime * 10.0,&(moby->pos).z,0x720000,pfVar9 + 2);
    if ((moby->pos).z < (float)((double)pCVar15[(int)fVar2].pos.z - dVar24)) {
      moby->state = '\x04';
    }
  }
  return;
}


