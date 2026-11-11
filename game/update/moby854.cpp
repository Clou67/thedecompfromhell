// game/update/moby854.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48e9d0-0x48ec58
#include "game/update/moby854.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"

// 0x048e9d0 (0x1a0 bytes)
void M854_Aridia_SubmitOcean(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x78);
  SetFogVars(0.0,260080.0,255.0,0.0);
  if ((OcclMode != 0) ||
     ((*piVar1 != -1 &&
      (iVar2 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar1), iVar2 != 0)))
     ) {
    OceanPass_Thunk(&OceanPlane_008c7880);
  }
  if ((OcclMode != 0) ||
     ((piVar1[1] != -1 &&
      (iVar2 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[1]), iVar2 != 0)
      ))) {
    OceanPass_Thunk(&OceanPlane_008c7950);
    OceanPass_Thunk(&OceanPlane_008c79b0);
    OceanPass_Thunk(&OceanPlane_008c7a10);
    OceanPass_Thunk(&OceanPlane_008c7a60);
    OceanPass_Thunk(&OceanPlane_008c7ab0);
  }
  if (OcclMode == 0) {
    if (piVar1[2] == -1) goto LAB_0048eb54;
    iVar2 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[2]);
    if (iVar2 == 0) goto LAB_0048eb54;
  }
  OceanPass_Thunk(&OceanPlane_008c78e0);
LAB_0048eb54:
  RestoreFogVars();
  return;
}


// 0x048eb78 (0xe0 bytes)
/* Moby 854 */

void UpdateMoby_854_AridiaOcean(MobyInstance *moby)

{
  if (moby->state == 0) {
    OceanPlane_008c7880.depth = 0x80;
    OceanPlane_008c79b0.depth = 0x80;
    OceanPlane_008c78e0.depth = 0x80;
    OceanPlane_008c7a10.depth = 0x80;
    OceanPlane_008c7950.depth = 0x80;
    OceanPlane_008c7a60.depth = 0x80;
    OceanPlane_008c7ab0.depth = 0x80;
    ScaleWaveTable(0.16666667);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterOceanUpdate(&PTR_M854_Aridia_SubmitOcean_0070f0f8,moby);
  }
  return;
}


