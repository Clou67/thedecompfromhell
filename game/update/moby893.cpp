// game/update/moby893.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4a3bc8-0x4a4134
#include "game/update/moby893.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a3bc8 (0x14 bytes)
void M893_004a3bc8(void)

{
  DAT_008cc124 = 0x10000;
  return;
}


// 0x04a3c20 (0x514 bytes)
/* Moby 893 */

void UpdateMoby_893(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
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
  float local_40 [2];
  
  bVar3 = moby->state;
  pfVar9 = (float *)moby->pVar;
  fVar5 = (moby->pos).x;
  dVar12 = (double)(moby->pos).z;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      if (pfVar9[0x14] != 0.0) {
        (moby->rotation).x = 3.1415927;
        (moby->pos).z = (float)(dVar12 + 4.0);
      }
      *pfVar9 = fVar5;
      pfVar9[1] = (moby->pos).y;
      pfVar9[2] = (moby->pos).z;
      pfVar9[3] = (moby->pos).w;
      AttachManipulator(moby,0,pfVar9 + 4);
      if (pfVar9[0x15] == 0.0) {
        moby->state = '\x01';
        pfVar9[0x18] = 0.5934119;
        FastQuaternionToEuler(0x3fe2fd3b00000000,pfVar9 + 8,0);
      }
      else {
        pfVar9[0x18] = 0.0;
        moby->state = '\x02';
        if (pfVar9[0x14] == 0.0) {
          fVar5 = (moby->transform).v1.x;
          fVar6 = (moby->transform).v1.y;
          fVar7 = -2.0;
          fVar8 = (moby->transform).v1.z;
        }
        else {
          fVar5 = (moby->transform).v1.x;
          fVar6 = (moby->transform).v1.y;
          fVar7 = 2.0;
          fVar8 = (moby->transform).v1.z;
        }
        (moby->pos).x = fVar5 * fVar7 + (moby->pos).x;
        (moby->pos).y = fVar6 * fVar7 + (moby->pos).y;
        (moby->pos).z = fVar8 * fVar7 + (moby->pos).z;
      }
      uVar10 = g_heroMobyPtr->light;
      moby->color = g_heroMobyPtr->color;
      moby->light = uVar10;
    }
    else if (g_MobyInstance[(int)pfVar9[0x16]].setByGroup != '\0') {
      if ((bVar3 == 2) && (g_MobyInstance[(int)pfVar9[0x16]].setByGroup != '\x02')) {
        moby->state = '\x04';
      }
      else if (bVar3 == 1) {
        PlayMobySound(0,0,moby);
        moby->state = '\x06';
      }
    }
  }
  else if (bVar3 < 5) {
    if (bVar3 == 3) {
      fVar6 = (moby->transform).v1.x * -1.9 + *pfVar9;
      fVar7 = (moby->transform).v1.y * -1.9 + pfVar9[1];
      fVar8 = (moby->transform).v1.z * -1.9 + pfVar9[2];
    }
    else {
      fVar6 = *pfVar9;
      fVar7 = pfVar9[1];
      fVar8 = pfVar9[2];
    }
    dVar22 = (double)fVar8;
    dVar21 = (double)fVar7;
    dVar19 = (double)fVar6;
    fVar6 = (float)(dVar21 - (double)(moby->pos).y);
    fVar5 = (float)(dVar19 - (double)fVar5);
    fVar7 = (float)(dVar22 - dVar12);
    dVar18 = 0.0;
    local_40[0] = 0.0;
    OrganicDelt
              (SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6),g_FrameTimeSq * 6.0,
               g_FrameTimeSq * 12.0,g_FrameTime * 10.0,local_40,0,pfVar9 + 0x17);
    dVar20 = (double)(moby->pos).y;
    dVar13 = (double)(moby->pos).x;
    fVar6 = (float)(dVar21 - dVar20);
    dVar15 = (double)(moby->pos).z;
    fVar7 = (float)(dVar19 - dVar13);
    fVar8 = (float)(dVar22 - dVar15);
    uVar4 = moby->state;
    dVar17 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar5 = (float)((double)pfVar9[0x17] / dVar17);
    dVar12 = dVar18;
    if (dVar18 - dVar17 < 0.0) {
      dVar12 = (double)(fVar6 * fVar5);
    }
    dVar14 = dVar18;
    if (dVar18 - dVar17 < 0.0) {
      dVar14 = (double)(fVar7 * fVar5);
    }
    dVar16 = dVar18;
    if (dVar18 - dVar17 < 0.0) {
      dVar16 = (double)(fVar8 * fVar5);
    }
    if (dVar17 - dVar18 < 0.0) {
      dVar12 = (double)(fVar6 * fVar5);
    }
    if (dVar17 - dVar18 < 0.0) {
      dVar14 = (double)(fVar7 * fVar5);
    }
    if (dVar17 - dVar18 < 0.0) {
      dVar16 = (double)(fVar8 * fVar5);
    }
    fVar5 = (float)(dVar20 + dVar12);
    fVar6 = (float)(dVar13 + dVar14);
    fVar7 = (float)(dVar15 + dVar16);
    fVar8 = (float)((double)fVar5 - dVar21);
    fVar1 = (float)((double)fVar6 - dVar19);
    fVar2 = (float)((double)fVar7 - dVar22);
    (moby->pos).x = fVar6;
    (moby->pos).y = fVar5;
    (moby->pos).z = fVar7;
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar8 * fVar8) < 0.0001) {
      if (uVar4 == '\x03') {
        PlayMobySound(1,0,moby);
        moby->state = '\a';
      }
      else {
        moby->state = '\x05';
      }
    }
  }
  else if (bVar3 < 7) {
    dVar20 = 0.0;
    fVar5 = -0.5934119;
    dVar12 = dVar20;
    if (bVar3 == 5) {
      dVar12 = 0.593411922454834;
      fVar5 = 1.1868238;
    }
    OrganicDeltAng
              (fVar5,g_FrameTimeSq * 4.1887903,g_FrameTimeSq * 4.1887903,
               g_FrameTime * 12.566371,pfVar9 + 0x18,0x4a3be0,pfVar9 + 0x19);
    uVar10 = (int)pfVar9[0x18] >> 0x1f;
    iVar11 = (uVar10 >> 1 ^ (uint)pfVar9[0x18]) - uVar10;
    if ((0x3f17e9d8 < iVar11) || (iVar11 < 0)) {
      if (iVar11 < 0x3f17e9d9) {
        dVar13 = (double)pfVar9[0x18];
        if (iVar11 < 0) {
          pfVar9[0x18] = (float)dVar20;
          dVar13 = dVar20;
        }
      }
      else {
        pfVar9[0x18] = 0.5934119;
        dVar13 = 0.593411922454834;
      }
      if (moby->setByGroup == '\0') {
        moby->setByGroup = '\x01';
        pfVar9[0x19] = pfVar9[0x19] * -0.33;
      }
      else if (dVar13 == dVar12) {
        moby->state = ((byte)(ZERO_MASK((5 - (uint)moby->state))) & 4) + 3;
      }
    }
    FastQuaternionToEuler((double)pfVar9[0x18],pfVar9 + 8,0);
  }
  return;
}


