// game/update/moby122.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x20bb70-0x20c0e8
#include "game/update/moby122.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x020bb70 (0x1a8 bytes)
MobyInstance *
FUN_0020bb70(f32 *param_1,undefined4 *param_2,undefined2 param_3,int param_4,ulonglong param_5)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar3 = CreateMoby(0x7a);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->alpha = -0x80;
    SetColorOfMoby(pMVar3,0x7f,0x7f,0x7f);
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    dVar6 = 6.2831854820251465;
    dVar5 = 12.566370964050293;
    dVar4 = (double)MB_randRangeFloat
                              (g_FrameTime * 6.2831855,g_FrameTime * 12.566371);
    puVar2[4] = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar6),
                               (float)((double)g_FrameTime * dVar5));
    puVar2[5] = (float)dVar4;
    *(undefined2 *)(puVar2 + 6) = param_3;
    *(undefined2 *)((int)puVar2 + 0x1a) = param_3;
    fVar1 = pMVar3->scale;
    if (param_4 == 0) {
      dVar4 = (double)MB_randRangeFloat(0.5,0.75);
      fVar1 = (float)((double)pMVar3->scale * dVar4);
      pMVar3->scale = fVar1;
    }
    puVar2[7] = fVar1;
    pMVar3->setByGroup = (byte)param_4 | (byte)((param_5 & 0xffffffff) << 1);
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x020bd30 (0x3b8 bytes)
/* Moby 122 */

void UpdateMoby_122(MobyInstance *moby)

{
  ushort uVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> local_80;
  int local_70 [4];
  longlong local_60;
  
  pfVar2 = (float *)moby->pVar;
  if ((moby->setByGroup & 1U) != 0) {
    iVar7 = 0;
    dVar8 = -1.0;
    dVar9 = 1.0;
    dVar10 = 45.5;
    do {
      local_70[0] = 0x2fffffff;
      local_70[3] = 0x2f004fff;
      local_70[1] = 0x2f00ffff;
      local_70[2] = 0x2f007fff;
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      if ((moby->setByGroup & 0xfeU) == 0) {
        lVar3 = MB_randInt(4);
        local_60 = (longlong)(int)((double)animationSpeed * dVar10);
        SpawnPart_4
                  ((longlong)(int)moby + 0x10,local_80,
                   *(undefined4 *)((int)local_70 + (int)(lVar3 << 2)),0x4fff,
                   (int)((double)animationSpeed * dVar10),0x32,0x78,1);
      }
      else {
        lVar3 = MB_randInt(4);
        iVar4 = ReorderRGB
                          (*(int *)((int)local_70 + (int)(lVar3 << 2)),
                           (uint)((byte)moby->setByGroup >> 1));
        iVar5 = ReorderRGB(0x4fff,(uint)((byte)moby->setByGroup >> 1));
        local_60 = (longlong)(int)((double)animationSpeed * dVar10);
        SpawnPart_4
                  ((longlong)(int)moby + 0x10,local_80,iVar4,iVar5,
                   (int)((double)animationSpeed * dVar10),0x32,0x78,1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 1);
  }
  dVar8 = (double)FastWrapRot((moby->rotation).x,pfVar2[4]);
  (moby->rotation).x = (float)dVar8;
  dVar8 = (double)FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar8;
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  pfVar2[2] = -(g_FrameTimeSq * 14.6 - pfVar2[2]);
  if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) {
    DeleteMoby(moby);
  }
  else {
    uVar1 = *(ushort *)((int)pfVar2 + 0x1a);
    uVar6 = (uint)(short)uVar1;
    if ((int)*(short *)(pfVar2 + 6) <
        (int)(((int)uVar6 >> 2) + (uint)((short)uVar1 < 0 && (uVar1 & 3) != 0))) {
      dVar8 = (double)FastIntToDouble
                                (((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0));
      dVar9 = (double)FastIntToDouble(*(undefined2 *)(pfVar2 + 6));
      moby->scale = (float)((double)(float)((double)pfVar2[7] * dVar9) / dVar8);
    }
    iVar7 = FastDecTimerS16(pfVar2 + 6);
    if (iVar7 != 0) {
      DeleteMoby(moby);
    }
  }
  return;
}


