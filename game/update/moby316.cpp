// game/update/moby316.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x33fcc0-0x340168
#include "game/update/moby316.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby240.h"
#include "idol/fastfunc.h"

// 0x033fcc0 (0x14 bytes)
void M316_0033fcc0(void)

{
  DAT_00811fdc = 0x10000;
  return;
}


// 0x033fd00 (0x468 bytes)
/* Moby 316 */

void UpdateMoby_316(MobyInstance *moby)

{
  float fVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  GPiece<16> local_b0;
  GPiece<32> local_a0;
  
  iVar6 = 0;
  piVar8 = (int *)moby->pVar;
  iVar5 = MB_damage(moby,0x30000,0);
  if (iVar5 == 0) {
    if (piVar8[0xc] == -1) {
      if (piVar8[0xd] == -1) {
        if (piVar8[0xe] == -1) {
          if ((piVar8[0xf] != -1) && (0x7f < g_MobyInstance[piVar8[0xf]].state)) {
            iVar6 = 2;
          }
        }
        else if (0x7f < g_MobyInstance[piVar8[0xe]].state) {
          iVar6 = 2;
        }
      }
      else if (0x7f < g_MobyInstance[piVar8[0xd]].state) {
        iVar6 = 2;
      }
    }
    else if (0x7f < g_MobyInstance[piVar8[0xc]].state) {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = FastDoubleToInt((double)*(float *)(iVar5 + 0x2c));
  }
  uVar14 = 0x4000000000000000;
  if (2.0 <= (double)(longlong)iVar6) {
    moby->state = '\x01';
    dVar15 = -8.0;
    dVar16 = 8.0;
    uVar7 = 0;
    dVar17 = 10.0;
    uVar18 = 0x4010000000000000;
    uVar19 = 0x4022000000000000;
    uVar20 = 0x3ff0000000000000;
    uVar21 = 0x402e000000000000;
    dVar22 = 0.0;
    do {
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar15),
                 (float)((double)g_FrameTime * dVar16));
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar15),
                 (float)((double)g_FrameTime * dVar16));
      iVar5 = FUN_0030b568(local_a0,local_b0,8,0);
      *(undefined4 *)(iVar5 + 0x94) = 0;
      if ((uVar7 & 1) != 0) {
        MB_genericExplosion
                  (uVar14,uVar18,uVar18,uVar14,uVar19,uVar20,uVar21,iVar5,local_b0,0,1,
                   0xffffffffffffffff,10,3,0x10);
      }
      if (-1 < *piVar8) {
        iVar6 = *(int *)(iVar5 + 0x78);
        *(int *)(iVar6 + 0xb4) = *piVar8;
        *(Spline **)(iVar6 + 0xb0) = Splines[*piVar8];
        *(int *)(iVar6 + 0xe4) = piVar8[6];
        pSVar2 = Splines[*piVar8];
        fVar3 = pSVar2->points[0].x - *(float *)(iVar5 + 0x10);
        *(float *)(iVar6 + 0x40) = fVar3;
        fVar4 = pSVar2->points[0].y - *(float *)(iVar5 + 0x14);
        *(float *)(iVar6 + 0x44) = fVar4;
        *(float *)(iVar6 + 0x48) = pSVar2->points[0].z - *(float *)(iVar5 + 0x18);
        dVar12 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        *(float *)(iVar6 + 0x4c) = pSVar2->points[0].w;
        dVar13 = (double)g_FrameTime;
        *(float *)(iVar6 + 0x48) = (float)(dVar13 * dVar17);
        fVar1 = (float)((double)(float)(dVar13 * dVar17) / dVar12);
        dVar9 = (double)(fVar3 * fVar1);
        dVar10 = (double)(fVar4 * fVar1);
        dVar13 = dVar22;
        if (dVar22 - dVar12 < 0.0) {
          dVar13 = dVar9;
        }
        dVar11 = dVar22;
        if (dVar22 - dVar12 < 0.0) {
          dVar11 = dVar10;
        }
        if (dVar12 - dVar22 < 0.0) {
          dVar13 = dVar9;
        }
        if (dVar12 - dVar22 < 0.0) {
          dVar11 = dVar10;
        }
        *(float *)(iVar6 + 0x40) = (float)dVar13;
        *(float *)(iVar6 + 0x44) = (float)dVar11;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
    } while ((int)uVar7 < 6);
    DeleteMoby(moby);
  }
  moby->damage = -1;
  return;
}


