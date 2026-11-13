// game/update/moby1222.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x20c5c0-0x20c9f8
#include "game/update/moby1222.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x020c5c0 (0x31c bytes)
MobyInstance * M1222_0020c5c0(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  pMVar5 = CreateMoby(PROPELLER);
  if (pMVar5 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar5->pVar;
    dVar11 = -3.1415927410125732;
    dVar10 = 3.1415927410125732;
    dVar9 = 0.0;
    dVar7 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar8 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
    dVar10 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
    pMVar5->updateDistance = -1;
    pMVar5->drawDistance = 0xff;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    (pMVar5->pos).x = *param_2;
    (pMVar5->pos).y = param_2[1];
    (pMVar5->pos).z = param_2[2];
    fVar1 = param_2[3];
    (pMVar5->rotation).x = (float)dVar7;
    (pMVar5->pos).w = fVar1;
    (pMVar5->rotation).y = (float)dVar8;
    (pMVar5->rotation).z = (float)dVar10;
    (pMVar5->rotation).w = 0.0;
    dVar12 = (double)SQRT((float)(dVar10 * dVar10 +
                                 (double)(float)(dVar7 * dVar7 + (double)(float)(dVar8 * dVar8))));
    FastVecAdd(&local_90,local_a0,local_b0);
    *puVar2 = local_90;
    puVar2[1] = local_8c;
    puVar2[2] = local_88;
    puVar2[3] = local_84;
    fVar4 = g_FrameTime;
    fVar3 = g_FrameTime * 1.5707964;
    puVar2[7] = 0;
    dVar10 = (double)(float)((double)fVar3 / dVar12);
    dVar11 = (double)(float)(dVar7 * dVar10);
    dVar8 = (double)(float)(dVar8 * dVar10);
    dVar7 = dVar9;
    if (dVar9 - dVar12 < 0.0) {
      dVar7 = dVar11;
    }
    dVar10 = dVar9;
    if (dVar9 - dVar12 < 0.0) {
      dVar10 = dVar8;
    }
    if (dVar12 - dVar9 < 0.0) {
      dVar7 = dVar11;
    }
    if (dVar12 - dVar9 < 0.0) {
      dVar10 = dVar8;
    }
    puVar2[4] = (float)dVar7;
    puVar2[5] = (float)dVar10;
    puVar2[6] = fVar4 * 12.566371;
    uVar6 = MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
    puVar2[9] = uVar6;
    puVar2[8] = uVar6;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


// 0x020c8e8 (0x110 bytes)
/* Moby 1222 */

void UpdateMoby_1222(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  s8 sVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  GPiece<16> auStack_30;
  
  pvVar1 = moby->pVar;
  *(float *)((int)pvVar1 + 8) = -(g_FrameTimeSq * 9.8 - *(float *)((int)pvVar1 + 8));
  FastVecAddSelf(auStack_30,(longlong)(int)moby + 0x10,pvVar1);
  dVar5 = (double)FastWrapRot((moby->rotation).x,*(float *)((int)pvVar1 + 0x10));
  (moby->rotation).x = (float)dVar5;
  dVar5 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar1 + 0x14));
  (moby->rotation).y = (float)dVar5;
  dVar5 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar1 + 0x18));
  uVar2 = *(undefined4 *)((int)pvVar1 + 0x20);
  (moby->rotation).z = (float)dVar5;
  dVar5 = (double)FastIntToDouble(uVar2);
  dVar6 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar1 + 0x24));
  sVar4 = FastDoubleToInt((double)(float)((double)(float)(dVar6 * 255.0) / dVar5));
  moby->alpha = sVar4;
  iVar3 = FastDecTimerS32((int)pvVar1 + 0x24);
  if (iVar3 != 0) {
    DeleteMoby(moby);
  }
  return;
}


