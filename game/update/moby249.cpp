// game/update/moby249.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x316008-0x316600
#include "game/update/moby249.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "idol/fastfunc.h"

// 0x0316008 (0x14 bytes)
void M249_00316008(void)

{
  DAT_007ffad8 = 0x10000;
  return;
}


// 0x0316050 (0x59c bytes)
/* Moby 249 */

void UpdateMoby_249(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  Cuboid *pCVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int iVar17;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<40> local_a0;
  
  pfVar10 = (float *)moby->pVar;
  pCVar11 = Cuboids + (int)pfVar10[3];
  fVar1 = (pCVar11->matrix).v0.y;
  fVar2 = (pCVar11->matrix).v1.y;
  fVar3 = (pCVar11->matrix).v0.x;
  fVar4 = (pCVar11->matrix).v1.x;
  fVar5 = (pCVar11->matrix).v2.y;
  fVar6 = (pCVar11->matrix).v0.z;
  fVar7 = (pCVar11->matrix).v1.z;
  fVar8 = (pCVar11->matrix).v2.x;
  fVar9 = (pCVar11->matrix).v2.z;
  iVar17 = FastDoubleToInt
                     ((double)(DAT_007ffb18 *
                              (SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar1 * fVar1) +
                               SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar2 * fVar2) +
                              SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5))));
  iVar18 = 0;
  if (0 < iVar17) {
    dVar20 = -1.0;
    dVar21 = 1.0;
    dVar22 = 1.2000000476837158;
    do {
      MB_randRangeFloat((float)dVar20,(float)dVar21);
      MB_randRangeFloat((float)dVar20,(float)dVar21);
      MB_randRangeFloat((float)dVar20,(float)dVar21);
      puVar13 = PTR_DAT_007ffb00;
      uVar12 = DAT_007ffafc;
      dVar19 = (double)MB_randRangeFloat
                                 ((float)(longlong)DAT_007ffb04,(float)(longlong)(DAT_007ffb04 << 1)
                                 );
      uVar14 = FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
      dVar19 = (double)MB_randRangeFloat
                                 ((float)(longlong)DAT_007ffb08,
                                  (float)((double)(longlong)DAT_007ffb08 * dVar22));
      uVar15 = FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
      dVar19 = (double)MB_randRangeFloat
                                 ((float)(longlong)DAT_007ffb0c,
                                  (float)((double)(longlong)DAT_007ffb0c * dVar22));
      uVar16 = FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
      SpawnPart_2(local_a0,local_c0,local_b0,uVar12,puVar13,uVar14,uVar15,uVar16);
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar17);
  }
  iVar17 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar10[3]);
  if (iVar17 != 0) {
    fVar1 = Cuboids[(int)pfVar10[3]].rot.z + 1.5707963;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    DAT_00969dd0 = *pfVar10 * g_FrameTime *
                   (fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) + DAT_00969dd0;
    fVar1 = Cuboids[(int)pfVar10[3]].rot.z;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    DAT_00969dd4 = *pfVar10 * g_FrameTime *
                   (fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) + DAT_00969dd4;
  }
  return;
}


// 0x03165ec (0x14 bytes)
void M249_003165ec(void)

{
  DAT_007ffb68 = 0x10000;
  return;
}


