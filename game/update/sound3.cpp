// game/update/sound3.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x180210-0x1803e8
#include "game/update/sound3.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0180210 (0x1c4 bytes)
void UpdateSound_3(int param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  
  fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x44);
  fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x40);
  fVar4 = g_heroPosition.z - *(float *)(param_1 + 0x48);
  puVar1 = *(undefined1 **)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x70) * fVar4 +
          *(float *)(param_1 + 0x50) * fVar3 + *(float *)(param_1 + 0x60) * fVar2;
  if (((1.0 < ABS(fVar5)) ||
      (1.0 < ABS(*(float *)(param_1 + 0x74) * fVar4 +
                 *(float *)(param_1 + 0x54) * fVar3 + *(float *)(param_1 + 100) * fVar2))) ||
     (1.0 < ABS(*(float *)(param_1 + 0x78) * fVar4 +
                *(float *)(param_1 + 0x58) * fVar3 + *(float *)(param_1 + 0x68) * fVar2))) {
    if (puVar1[3] != '\0') {
      if (fVar5 <= 0.0) {
        sound_SetReverb(param_1,5,0,0,0);
      }
      else {
        sound_SetReverb(0,*puVar1,*(undefined4 *)(puVar1 + 4),puVar1[1],puVar1[2]);
      }
      puVar1[3] = 0;
    }
  }
  else {
    dVar8 = (double)(float)((double)(fVar5 + 1.0) * 0.5);
    dVar7 = (double)FastIntToDouble
                              ((double)(fVar5 + 1.0),0x3fe0000000000000,*(undefined4 *)(puVar1 + 4))
    ;
    lVar6 = FastDoubleToInt((double)(float)(dVar7 * dVar8));
    sound_SetReverb
              (param_1,*puVar1,
               lVar6 + (*(int *)(puVar1 + 4) - lVar6 >> 0x3f & *(int *)(puVar1 + 4) - lVar6),
               puVar1[1],puVar1[2]);
    puVar1[3] = 1;
  }
  return;
}


// 0x01803d4 (0x14 bytes)
void Water_StaticInit2(void)

{
  DAT_0073b58c = 0x10000;
  return;
}


