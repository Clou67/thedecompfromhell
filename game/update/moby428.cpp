// game/update/moby428.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x370f9c-0x3714d8
#include <math.h>
#include <stdlib.h>
#include "game/update/moby428.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "idol/fastfunc.h"

// 0x0370f9c (0x14 bytes)
void M428_00370f9c(void)

{
  DAT_008414cc = 0x10000;
  return;
}


// 0x0370ff0 (0x334 bytes)
// strings: 00370fb4: '?333@@' (raw)

MobyInstance * SpawnMoby_428_Feather(undefined8 param_1,f32 *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  MobyInstance *pMVar5;
  uint uVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pMVar5 = CreateMoby(FEATHER);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = '@';
    pMVar5->drawDistance = 0x20;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->modeBits = pMVar5->modeBits | CAN_BE_AUTO_TARGETED;
    pMVar5->setByGroup = '\0';
    (pMVar5->pos).x = *param_2;
    (pMVar5->pos).y = param_2[1];
    pfVar1 = (float *)pMVar5->pVar;
    (pMVar5->pos).z = param_2[2];
    (pMVar5->pos).w = param_2[3];
    dVar9 = 0.699999988079071;
    dVar8 = (double)MB_randRangeFloat(0.2,0.7);
    (pMVar5->pos).z = (float)((double)(pMVar5->pos).z + dVar8);
    (pMVar5->pos).x = *param_3 * 3.0 + (pMVar5->pos).x;
    (pMVar5->pos).y = param_3[1] * 3.0 + (pMVar5->pos).y;
    *pfVar1 = *param_3;
    pfVar1[1] = param_3[1];
    pfVar1[2] = param_3[2];
    pfVar1[3] = param_3[3];
    dVar10 = 0.1745329201221466;
    dVar8 = (double)MB_randRangeSigned(0x3fc6571840000000,0x3fe0c15240000000);
    (pMVar5->rotation).y = (float)dVar8;
    dVar8 = (double)MB_randRangeFloat((float)dVar10,0.7853982);
    (pMVar5->rotation).x = (float)dVar8;
    dVar10 = 200.0;
    dVar8 = (double)MB_randRangeFloat(200.0,370.0);
    fVar2 = g_FrameTime;
    dVar11 = 0.01745329238474369;
    pfVar1[9] = -NAN;
    pfVar1[0xb] = (float)(dVar8 * 0.01745329238474369) * fVar2;
    uVar6 = rand();
    if ((uVar6 & 1) != 0) {
      pfVar1[9] = 1.4013e-45;
      (pMVar5->rotation).y = -(pMVar5->rotation).y;
    }
    dVar8 = (double)MB_randRot();
    (pMVar5->rotation).z = (float)dVar8;
    dVar8 = (double)MB_randRangeFloat((float)dVar10,550.0);
    pfVar1[10] = -((float)(dVar8 * dVar11) * g_FrameTime);
    dVar8 = (double)MB_randRot();
    pfVar1[4] = (float)dVar8;
    dVar8 = (double)MB_randRot();
    pfVar1[5] = (float)dVar8;
    uVar3 = FastDoubleToInt((double)(float)((double)(longlong)DAT_008414f4 * dVar9));
    uVar4 = FastDoubleToInt((double)((float)(longlong)DAT_008414f4 * 1.2));
    iVar7 = MB_randRange(uVar3,uVar4);
    pfVar1[7] = (float)(int)(animationSpeed * ((float)(longlong)iVar7 + 0.5));
    fVar2 = pMVar5->scale * DAT_008414f0;
    pMVar5->scale = fVar2;
    if (g_goldWeaponsArray.morphORay != '\0') {
      pMVar5->scale = fVar2 * 2.0;
    }
    dVar8 = (double)MB_randRangeFloat(-1.2,-0.4);
    pfVar1[8] = (float)(dVar8 * (double)g_FrameTime);
    UpdateMobyTransform(pMVar5);
    MB_CopyHeroLights(pMVar5);
  }
  return pMVar5;
}


// 0x0371330 (0x1a8 bytes)
/* Moby 428 */

void UpdateMoby_428(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  
  pfVar1 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar1;
  (moby->pos).y = (moby->pos).y + pfVar1[1];
  (moby->pos).z = (moby->pos).z + pfVar1[2];
  fVar2 = pfVar1[1] * DAT_008414f8;
  *pfVar1 = *pfVar1 * DAT_008414f8;
  pfVar1[1] = fVar2;
  fVar2 = -(DAT_0071f418 * 15.0 - pfVar1[2]);
  pfVar1[2] = fVar2;
  if (fVar2 < pfVar1[8]) {
    pfVar1[2] = pfVar1[8];
  }
  dVar4 = (double)FastWrapRot((moby->rotation).z,pfVar1[10]);
  fVar2 = pfVar1[9];
  (moby->rotation).z = (float)dVar4;
  dVar4 = (double)FastWrapRot
                            ((moby->rotation).x,pfVar1[0xb] * (float)(longlong)(int)fVar2);
  (moby->rotation).x = (float)dVar4;
  if (0.7853981852531433 < ABS(dVar4)) {
    pfVar1[9] = (float)-(int)pfVar1[9];
  }
  iVar3 = FastDecTimerS32(pfVar1 + 7);
  if ((iVar3 == 0) && (moby->enabled != '\0')) {
    if (((int)pfVar1[7] < (int)(animationSpeed * 30.5)) &&
       (iVar3 = FastDecTimerS8((longlong)(int)moby + 0x23), iVar3 != 0)) {
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


