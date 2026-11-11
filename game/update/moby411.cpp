// game/update/moby411.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3667a0-0x366940
#include "game/update/moby411.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera5.h"

// 0x03667a0 (0x70 bytes)
void M411_003667a0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  if ((g_Pad.downButtons & TRIANGLE) == 0) {
    if ((g_Pad.downButtons & CROSS) == 0) {
      if ((g_Pad.downButtons & CIRCLE) == 0) {
        if ((g_Pad.downButtons & SQUARE) != 0) {
          *puVar1 = 5;
        }
      }
      else {
        *puVar1 = 4;
      }
    }
    else {
      *puVar1 = 2;
    }
  }
  else {
    *puVar1 = 3;
  }
  return;
}


// 0x0366818 (0x124 bytes)
void M411_00366818(undefined8 param_1,int param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_20 = *(float *)(param_2 + 0x10) + DAT_00840c80;
  local_18 = DAT_00840c84 + *(float *)(param_2 + 0x18);
  local_1c = *(float *)(param_2 + 0x14) + DAT_010c5130;
  local_14 = 0;
  if (DAT_00840c98 < local_20) {
    local_20 = DAT_00840c98;
  }
  if (DAT_00840ca0 < local_1c) {
    local_1c = DAT_00840ca0;
  }
  if (local_20 < DAT_00840c94) {
    local_20 = DAT_00840c94;
  }
  if (local_1c < DAT_00840c9c) {
    local_1c = DAT_00840c9c;
  }
  Camera_SetMobyDrivenTargetPos(&local_20);
  local_10 = 0.0;
  local_c = DAT_00840c8c * 0.017453292;
  local_8 = DAT_00840c88 * 0.017453292;
  Camera_SetMobyDrivenTargetRot(&local_10);
  return;
}


// 0x036693c (0x4 bytes)
/* Moby 411 */

MobyInstance * UpdateMoby_411(MobyInstance *moby)

{
  return moby;
}


