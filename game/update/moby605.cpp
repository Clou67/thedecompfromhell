// game/update/moby605.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3d919c-0x3d9450
#include <math.h>
#include "game/update/moby605.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby585.h"

// 0x03d919c (0x14 bytes)
void M605_003d919c(void)

{
  DAT_00853744 = 0x10000;
  return;
}


// 0x03d91b8 (0x298 bytes)
/* Moby 605 */

void UpdateMoby_605_MetalDetectorSpot(MobyInstance *moby)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  MobyModeBit MVar4;
  f32 *pfVar5;
  void *pvVar6;
  float fVar7;
  uint uVar8;
  f32 fVar9;
  int iVar10;
  Vec4 local_30;
  
  pfVar5 = (f32 *)moby->pVar;
  if (moby->state == '\0') {
    if (pfVar5 == (f32 *)0x0) {
      DeleteMoby(moby);
      return;
    }
    fVar9 = (moby->pos).x;
    moby->updateDistance = -1;
    *pfVar5 = fVar9;
    pfVar5[1] = (moby->pos).y;
    MVar4 = moby->modeBits;
    pfVar5[2] = (moby->pos).z;
    pfVar5[3] = (moby->pos).w;
    moby->state = '\x01';
    moby->modeBits = MVar4 | (UNK_40|DISABLED);
    if ((moby->setByGroup == '\0') && ((int)Level < 0x14)) {
      bVar1 = (int)DAT_010cafd0 < 0;
      uVar2 = DAT_010cafd0 & 1;
      iVar10 = (int)DAT_010cafd0 >> 1;
      uVar8 = DAT_010cafd0 & 1;
      DAT_010cafd0 = DAT_010cafd0 + 1;
      bVar3 = (&DAT_00a0cbc4)[Level * 0x10 + iVar10 + (uint)(bVar1 && uVar2 != 0)];
      uVar2 = bVar3 & 0xf;
      moby->setByGroup = (char)DAT_010cafd0;
      fVar9 = (f32)((int)pfVar5[6] +
                   (uVar2 + ((uint)(ZERO_MASK(uVar8)) & (bVar3 >> 4) - uVar2)) * -5
                   );
      pfVar5[6] = fVar9;
      if ((int)fVar9 < 1) {
        DeleteMoby(moby);
        return;
      }
    }
  }
  else {
    DAT_010cafd0 = 0;
  }
  if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_CurrentWeapon != 0x1b)) {
    local_30.x = g_heroPosition.x;
    local_30.y = g_heroPosition.y;
    local_30.z = g_heroPosition.z;
    local_30.w = g_heroPosition.w;
  }
  else {
    pvVar6 = g_currentWeaponMoby->pVar;
    local_30.x = *(float *)((int)pvVar6 + 0x10);
    local_30.y = *(float *)((int)pvVar6 + 0x14);
    local_30.z = *(float *)((int)pvVar6 + 0x18);
    local_30.w = *(float *)((int)pvVar6 + 0x1c);
  }
  if (((((pfVar5[4] != -NAN) &&
        (iVar10 = PointInsideComplexPoly
                            (&local_30,(Vec4 *)Splines[(int)pfVar5[4]]->points,
                             Splines[(int)pfVar5[4]]->cnt), iVar10 != 0)) ||
       ((pfVar5[5] != -NAN &&
        (iVar10 = MB_IsPntInCuboid(&local_30,(longlong)(int)pfVar5[5]), iVar10 != 0)))) ||
      ((pfVar5[4] == -NAN && (pfVar5[5] == -NAN)))) &&
     ((local_30.y = (moby->pos).y - local_30.y, local_30.x = (moby->pos).x - local_30.x,
      fVar7 = SQRT(local_30.x * local_30.x + local_30.y * local_30.y), fVar7 < DAT_0096bd24 &&
      (DAT_0096bd20 = moby, DAT_0096bd24 = fVar7, fVar7 < 20.0)))) {
    g_MetalDetectorSpotIsClose = 1;
  }
  return;
}


