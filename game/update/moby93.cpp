// game/update/moby93.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4bb3d4-0x4bb938
// shared update function UpdateMoby_{93_990}; registered for oClasses 93, 990
#include <math.h>
#include "game/update/moby93.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1111.h"
#include "idol/fastfunc.h"

// 0x04bb3d4 (0x14 bytes)
void M990_004bb3d4(void)

{
  DAT_008f4850 = 0x10000;
  return;
}


// shared update function, registered for oClasses 93, 990
// 0x04bb3f8 (0x428 bytes)
/* Moby 93
   Moby 990 */

void UpdateMoby_93(MobyInstance *moby)

{
  u8 uVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  MobyInstance *moby_00;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  bVar3 = false;
  pfVar2 = (float *)moby->pVar;
  bVar5 = false;
  bVar4 = false;
  fVar7 = pfVar2[5];
  if (fVar7 == -NAN) {
    if (moby->state == '\0') goto LAB_004bb5a0;
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[1]);
    bVar4 = bVar5;
    if ((iVar6 == 0) &&
       (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar2[1]),
       iVar6 == 0)) {
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[2]);
      moby_00 = MobyUpdateChainStart;
      if ((iVar6 == 0) &&
         (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar2[2]),
         moby_00 = MobyUpdateChainStart, iVar6 == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar3 = true;
      moby_00 = MobyUpdateChainStart;
    }
    for (; moby_00 != (MobyInstance *)0x0; moby_00 = (MobyInstance *)moby_00->pChain) {
      iVar6 = MB_GetPvarsIfMobyHasThem(moby_00);
      if (iVar6 != 0) {
        iVar6 = MB_IsPntInCuboid((Vec4 *)&moby_00->pos,(longlong)(int)pfVar2[1]);
        if (iVar6 == 0) {
          iVar6 = MB_IsPntInCuboid((Vec4 *)&moby_00->pos,(longlong)(int)pfVar2[2]);
          if (iVar6 == 0) {
            bVar4 = true;
          }
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (!bVar3) goto LAB_004bb5a0;
  }
  else {
    if ((g_MobyInstance[(int)fVar7].oClass != THRUSTER_PACK_LOCK) ||
       (g_MobyInstance[(int)fVar7].state != '\x02')) goto LAB_004bb5a0;
    bVar3 = true;
  }
  bVar4 = false;
LAB_004bb5a0:
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    dVar8 = (double)FastWrapRot
                              (pfVar2[3],
                               -((DAT_008f4874 / DAT_008f4878) * 0.017453292 * g_FrameTime
                                ));
    pfVar2[3] = (float)dVar8;
    if (0.0 < dVar8) {
      pfVar2[3] = 0.0;
      moby->state = '\x01';
    }
    if (pfVar2[4] == 0.0) {
      fVar7 = pfVar2[3];
    }
    else {
      fVar7 = -pfVar2[3];
    }
    dVar8 = (double)FastWrapRot(*pfVar2,fVar7);
    (moby->rotation).z = (float)dVar8;
    if (bVar3) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (bVar4) {
      moby->state = '\x04';
      fVar7 = (float)PlayMobySound(0,0,moby);
      pfVar2[6] = fVar7;
    }
  }
  else if (uVar1 == '\x02') {
    dVar9 = 0.01745329238474369;
    dVar8 = (double)FastWrapRot
                              (pfVar2[3],
                               (DAT_008f4874 / DAT_008f4878) * 0.017453292 * g_FrameTime);
    pfVar2[3] = (float)dVar8;
    if (dVar8 < (double)(float)((double)DAT_008f4874 * dVar9)) {
      pfVar2[3] = (float)((double)DAT_008f4874 * dVar9);
      moby->state = '\x03';
    }
    if (pfVar2[4] == 0.0) {
      fVar7 = pfVar2[3];
    }
    else {
      fVar7 = -pfVar2[3];
    }
    dVar8 = (double)FastWrapRot(*pfVar2,fVar7);
    (moby->rotation).z = (float)dVar8;
  }
  else if (uVar1 == '\x01') {
    pfVar2[3] = 0.0;
    (moby->rotation).z = *pfVar2;
    if (bVar3) {
      moby->state = '\x02';
      fVar7 = (float)PlayMobySound(0,0,moby);
      pfVar2[6] = fVar7;
    }
  }
  else if (uVar1 == '\0') {
    fVar7 = pfVar2[4];
    if (fVar7 != 0.0) {
      fVar7 = pfVar2[4];
      moby->modeBits = moby->modeBits | MIRROR;
    }
    if (fVar7 == 0.0) {
      fVar7 = -0.017453292;
    }
    else {
      fVar7 = 0.017453292;
    }
    dVar8 = (double)FastWrapRot((moby->rotation).z,DAT_008f4874 * fVar7);
    *pfVar2 = (float)dVar8;
    pfVar2[3] = 0.0;
    (moby->rotation).z = (float)dVar8;
    moby->state = '\x01';
  }
  return;
}


// 0x04bb820 (0x14 bytes)
void M990_004bb820(void)

{
  DAT_008f48c8 = 0x10000;
  return;
}


// 0x04bb840 (0x74 bytes)
void M990_004bb840(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  do {
    MB_SetGroupActive(*(int *)(iVar2 + 0x60),0,0,0);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x10);
  FUN_001d0f24(0x4059000000000000);
  return;
}


// 0x04bb8b8 (0x80 bytes)
void M990_004bb8b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  do {
    MB_SetGroupActive(*(int *)(iVar2 + 0x60),1,1,1);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x10);
  HeroDeathHeight = 0x42940000;
  FUN_001d0f24(0x4053000000000000);
  return;
}


