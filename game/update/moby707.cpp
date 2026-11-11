// game/update/moby707.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x429f78-0x42a014
#include "game/update/moby707.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0429f78 (0x9c bytes)
/* Moby 707 */

void UpdateMoby_707(MobyInstance *moby)

{
  void *pvVar1;
  double dVar2;
  Vec4 VStack_30;
  f32 local_20;
  f32 local_1c;
  float local_18;
  f32 local_14;
  
  pvVar1 = moby->pVar;
  VStack_30.w = 0.0;
  VStack_30.z = 0.0;
  VStack_30.y = 0.0;
  VStack_30.x = 0.0;
  local_20 = (moby->rotation).x;
  local_1c = (moby->rotation).y;
  local_18 = (moby->rotation).z;
  local_14 = (moby->rotation).w;
  dVar2 = (double)FastWrapRot(local_18,g_FrameTime * 0.08726646);
  (moby->rotation).z = (float)dVar2;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar1 + 0x20),&VStack_30,ZEXT48(&stack0x00000000) - 0x20,
             (longlong)(int)moby + 0x40);
  return;
}


