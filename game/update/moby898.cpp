// game/update/moby898.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4a4300-0x4a4538
#include "game/update/moby898.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby899.h"
#include "idol/fastfunc.h"

// 0x04a4300 (0x238 bytes)
/* Moby 898 */

void UpdateMoby_898(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  Vec4 local_50;
  
  pvVar8 = moby->pVar;
  dVar16 = (double)(moby->pos).x;
  dVar17 = (double)(moby->pos).y;
  dVar18 = (double)(moby->pos).z;
  fVar2 = *(float *)((int)pvVar8 + 100) + DAT_010e4500;
  *(float *)((int)pvVar8 + 100) = fVar2;
  fVar1 = (moby->rotation).z;
  fVar3 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar5 = fVar3;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar6 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = fVar6 * fVar6;
  iVar9 = *(int *)((int)pvVar8 + 0x60);
  fVar4 = fVar1 * fVar1;
  fVar11 = fVar3 * fVar3 * fVar6;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar12 = fVar3 * fVar11;
  fVar7 = fVar4 * fVar5;
  local_50.x = (fVar4 * fVar7 * 2.601887e-06 +
               fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
               fVar2 + *(float *)(iVar9 + 0x10);
  local_50.y = (fVar3 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6)
               * *(float *)((int)pvVar8 + 100) + *(float *)(iVar9 + 0x14);
  local_50.z = *(float *)(iVar9 + 0x18);
  lVar13 = FastDoubleToInt
                     ((double)(*(float *)((int)pvVar8 + 100) / *(float *)(iVar9 + 0x1c)));
  dVar15 = (double)*(float *)((int)pvVar8 + 100);
  dVar14 = (double)FastIntToDouble();
  piVar10 = *(int **)((int)pvVar8 + 0x60);
  fVar1 = (float)(-(double)(float)(dVar14 * (double)(float)piVar10[7] - dVar15) /
                 (double)(float)piVar10[7]);
  if ((int)lVar13 < *piVar10 + -2) {
    iVar9 = (int)(lVar13 << 4);
    fVar2 = *(float *)((int)piVar10 + iVar9 + 0x20);
    fVar3 = *(float *)((int)piVar10 + iVar9 + 0x10);
    fVar4 = *(float *)((int)piVar10 + iVar9 + 0x24);
    fVar5 = *(float *)((int)piVar10 + iVar9 + 0x14);
    fVar6 = *(float *)((int)piVar10 + iVar9 + 0x28);
    fVar7 = *(float *)((int)piVar10 + iVar9 + 0x18);
    local_50.w = *(f32 *)((int)piVar10 + iVar9 + 0x2c);
    (moby->pos).w = local_50.w;
    fVar3 = (fVar2 - fVar3) * fVar1 + fVar3;
    fVar5 = (fVar4 - fVar5) * fVar1 + fVar5;
    fVar7 = (fVar6 - fVar7) * fVar1 + fVar7;
    local_50.x = (float)((double)fVar3 - dVar16);
    (moby->pos).x = fVar3;
    local_50.y = (float)((double)fVar5 - dVar17);
    (moby->pos).y = fVar5;
    local_50.z = (float)((double)fVar7 - dVar18);
    (moby->pos).z = fVar7;
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar8 + 0x20),&local_50,(longlong)(int)moby + 0x40,
               (longlong)(int)moby + 0x40);
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


