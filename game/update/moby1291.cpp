// game/update/moby1291.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x23e4b0-0x23e6bc
#include "game/update/moby1291.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x023e4b0 (0x14 bytes)
void M1291_0023e4b0(void)

{
  DAT_0078deb0 = 0x10000;
  return;
}


// 0x023e4d0 (0x74 bytes)
bool M1291_0023e4d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  Delt(0.0,g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  SceneScreenFade = *(float *)(iVar1 + 0x104);
  return *(int *)(iVar1 + 0x104) < 1;
}


// 0x023e550 (0x90 bytes)
bool M1291_0023e550(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  Delt(1.0,g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  uVar2 = (int)*(uint *)(iVar1 + 0x104) >> 0x1f;
  SceneScreenFade = *(float *)(iVar1 + 0x104);
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x104)) - uVar2);
}


// 0x023e5e8 (0xb0 bytes)
void M1291_0023e5e8(int param_1)

{
  float fVar1;
  int iVar2;
  Spline *pSVar3;
  float fVar4;
  
  fVar4 = DAT_0078ded4;
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(float *)(param_1 + 0x2c) = fVar1 * fVar4;
  *(undefined4 *)(iVar2 + 0xf8) = 0x437f0000;
  pSVar3 = Splines[*(int *)(iVar2 + 0xc0)];
  MB_getTargetInArea
            (0x406fe00000000000,param_1,iVar2 + 0x70,pSVar3,0,0,pSVar3->points,pSVar3->cnt);
  if (*(int *)(iVar2 + 0xb0) == 0) {
    *(MobyInstance **)(iVar2 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x023e698 (0x24 bytes)
/* Moby 1291 */

void UpdateMoby_1291(MobyInstance *moby)

{
  DeleteMoby(moby);
  return;
}


