// game/update/moby879.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x49f894-0x49fb70
#include "game/update/moby879.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/water.h"

// 0x049f894 (0x14 bytes)
void M879_0049f894(void)

{
  DAT_008c80a8 = 0x10000;
  return;
}


// 0x049f8a8 (0x88 bytes)
void M879_Rilgar_SubmitOcean(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = *(int **)(param_1 + 0x78);
  while ((*piVar3 == -1 ||
         (iVar1 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar3), iVar1 == 0
         ))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (7 < iVar2) {
      SubmitZone(&OCEAN_RILGAR);
      return;
    }
  }
  return;
}


// 0x049f960 (0x210 bytes)
/* Moby 879 */

void UpdateMoby_879_RilgarOcean(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (moby->state == 0) {
    OceanPlane_SetDefaultDepth(0x3ff0000000000000,&OCEAN_RILGAR);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    if (g_heroStateType == 0x16) {
      fVar2 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
      fVar1 = 61.5;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
    }
    else {
      fVar2 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
      fVar1 = 59.5;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
    }
    fVar5 = fVar4 * fVar4;
    fVar3 = fVar5 * fVar5 * fVar4;
    fVar2 = fVar5 * fVar3;
    OCEAN_RILGAR.z =
         (fVar5 * fVar2 * 2.601887e-06 +
         fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 0.25
         + fVar1;
    RegisterOceanUpdate(&PTR_M879_Rilgar_SubmitOcean_0070f340,moby);
  }
  return;
}


