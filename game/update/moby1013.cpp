// game/update/moby1013.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x187538-0x187a54
// shared update function UpdateMoby_{1013_1014_1064_1065}; registered for oClasses 1013, 1014, 1064, 1065
#include <math.h>
#include "game/update/moby1013.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"

// 0x0187538 (0x14 bytes)
void M1065_00187538(void)

{
  DAT_0073ba48 = 0x10000;
  return;
}


// shared update function, registered for oClasses 1013, 1014, 1064, 1065
// 0x0187558 (0x4fc bytes)
/* Moby 1013
   Moby 1014
   Moby 1064
   Moby 1065 */

void UpdateMoby_1013(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  
  pfVar9 = (float *)moby->pVar;
  fVar3 = *pfVar9;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar9[4] = -NAN;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((((pfVar9[4] != -NAN) && (g_MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
        (bVar2 = g_MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((ushort)bVar2 != *(ushort *)((int)pfVar9 + 0x16))) {
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar6 = fVar5 - fVar3;
      fVar7 = fVar4 - pfVar9[1];
      fVar10 = DAT_0071f408 * 0.01;
      if (SQRT(fVar6 * fVar6 + fVar7 * fVar7) <= fVar10) {
        (moby->pos).x = fVar3;
        sVar8 = *(short *)(pfVar9 + 3);
        (moby->pos).y = pfVar9[1];
        fVar3 = pfVar9[2];
        (moby->pos).w = 0.0;
        (moby->pos).z = fVar3;
        if (((sVar8 != -1) &&
            (iVar11 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
            *(MobyInstance **)((int)g_SoundChannels + iVar11 + 0x18) == moby)) &&
           (*(char *)((int)g_SoundChannels + iVar11 + 4) != '\0')) {
          sound_Kill((int)sVar8);
        }
        *(undefined2 *)(pfVar9 + 3) = 0xffff;
        if (*(char *)((int)pfVar9 + 0xf) != -1) {
          PlayMobySound((int)*(char *)((int)pfVar9 + 0xf),0,moby);
        }
        if (*(short *)(pfVar9 + 5) != -1) {
          *(undefined4 *)((int)&DAT_00a20828 + (int)((longlong)*(short *)(pfVar9 + 5) << 2)) = 0;
        }
        moby->state = '\x01';
        return;
      }
      if ((moby->oClass == 0x3f5) || (moby->oClass == 0x429)) {
        fVar10 = -fVar10;
      }
      fVar3 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * fVar10 + fVar5;
      (moby->pos).y = fVar3 * fVar10 + fVar4;
      (moby->pos).z = fVar6 * fVar10 + (moby->pos).z;
      return;
    }
    PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
    moby->state = '\x02';
  }
  else if (uVar1 == '\x03') {
    if ((((pfVar9[4] != -NAN) && (g_MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
        (bVar2 = g_MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((float)(uint)bVar2 == pfVar9[6])) {
      if (*(char *)((int)pfVar9 + 0xe) != -1) {
        PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (((pfVar9[4] != -NAN) && (g_MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
       ((bVar2 = g_MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
        ((float)(uint)bVar2 == pfVar9[6])))) {
      PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
      moby->state = '\x04';
      return;
    }
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar6 = fVar4 - pfVar9[1];
    fVar3 = fVar5 - fVar3;
    if (SQRT(fVar3 * fVar3 + fVar6 * fVar6) <= pfVar9[7]) {
      fVar3 = DAT_0071f408 * -0.01;
      if ((moby->oClass == 0x3f5) || (moby->oClass == 0x429)) {
        fVar3 = -fVar3;
      }
      fVar6 = (moby->transform).v1.y;
      fVar7 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * fVar3 + fVar5;
      (moby->pos).y = fVar6 * fVar3 + fVar4;
      (moby->pos).z = fVar7 * fVar3 + (moby->pos).z;
    }
    else {
      if (*(char *)((int)pfVar9 + 0xf) != -1) {
        PlayMobySound((int)*(char *)((int)pfVar9 + 0xf),0,moby);
      }
      if (*(short *)(pfVar9 + 5) != -1) {
        *(undefined4 *)((int)&DAT_00a20828 + (int)((longlong)*(short *)(pfVar9 + 5) << 2)) = 1;
      }
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if ((((pfVar9[4] != -NAN) && (g_MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
        (bVar2 = g_MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((ushort)bVar2 != *(ushort *)((int)pfVar9 + 0x16))) {
      return;
    }
    if (*(char *)((int)pfVar9 + 0xe) != -1) {
      PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\0') {
    *pfVar9 = (moby->pos).x;
    pfVar9[1] = (moby->pos).y;
    fVar3 = (moby->pos).z;
    *(undefined2 *)(pfVar9 + 3) = 0xffff;
    pfVar9[2] = fVar3;
    if (*(short *)(pfVar9 + 5) != -1) {
      *(undefined4 *)((int)&DAT_00a20828 + (int)((longlong)*(short *)(pfVar9 + 5) << 2)) = 0;
    }
    moby->state = '\x01';
  }
  return;
}


