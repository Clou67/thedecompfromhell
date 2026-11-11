// game/update/moby1221.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x20c118-0x20c5a0
#include "game/update/moby1221.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x020c118 (0x36c bytes)
MobyInstance * M1221_0020c118(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  float fVar3;
  MobyInstance *pMVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  pMVar4 = CreateMoby(0x4c5);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar4->pVar;
    dVar14 = -3.1415927410125732;
    dVar12 = 3.1415927410125732;
    dVar11 = 0.0;
    dVar6 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar12);
    dVar14 = (double)MB_randRangeFloat((float)dVar14,(float)dVar12);
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    fVar1 = param_2[3];
    (pMVar4->rotation).z = (float)dVar14;
    (pMVar4->pos).w = fVar1;
    dVar13 = (double)SQRT((float)(dVar14 * dVar14 +
                                 (double)(float)(dVar6 * dVar6 + (double)(float)(dVar7 * dVar7))));
    FastVecAdd(&local_80,local_90,local_a0);
    *puVar2 = local_80;
    puVar2[1] = local_7c;
    puVar2[2] = local_78;
    puVar2[3] = local_74;
    fVar3 = g_FrameTime * 6.2831855;
    puVar2[7] = 0;
    dVar8 = (double)(float)((double)fVar3 / dVar13);
    dVar12 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar12 = (double)(float)(dVar6 * dVar8);
    }
    dVar10 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar10 = (double)(float)(dVar7 * dVar8);
    }
    dVar9 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar9 = (double)(float)(dVar14 * dVar8);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar12 = (double)(float)(dVar6 * dVar8);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar10 = (double)(float)(dVar7 * dVar8);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar9 = (double)(float)(dVar14 * dVar8);
    }
    puVar2[4] = (float)dVar12;
    puVar2[5] = (float)dVar10;
    puVar2[6] = (float)dVar9;
    dVar14 = -45.0;
    dVar7 = 45.0;
    dVar12 = (double)MB_randRangeFloat(-45.0,45.0);
    dVar6 = 0.01745329238474369;
    puVar2[4] = (float)(dVar12 * 0.01745329238474369) * g_FrameTime;
    dVar12 = (double)MB_randRangeFloat((float)dVar14,(float)dVar7);
    fVar3 = g_FrameTime;
    puVar2[5] = (float)(dVar12 * dVar6) * g_FrameTime;
    puVar2[6] = fVar3 * 12.566371;
    uVar5 = MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
    puVar2[9] = uVar5;
    puVar2[8] = uVar5;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x020c490 (0x110 bytes)
/* Moby 1221 */

void UpdateMoby_1221(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  s8 sVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  GPiece<16> auStack_30;
  
  pvVar1 = moby->pVar;
  *(float *)((int)pvVar1 + 8) = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar1 + 8));
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


