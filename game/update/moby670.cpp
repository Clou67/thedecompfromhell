// game/update/moby670.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x40bd38-0x40c2f0
#include "game/update/moby670.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby42.h"
#include "idol/fastfunc.h"

// 0x040bd38 (0x14 bytes)
void M670_0040bd38(void)

{
  DAT_008550dc = 0x10000;
  return;
}


// 0x040bd50 (0x3cc bytes)
void M670_0040bd50
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  iVar5 = *(int *)(param_3 + 0x78);
  if ((g_standingOnMoby == param_3) && (g_framesNotGrounded == 0)) {
    dVar12 = (double)FastDiffRots(param_2,param_1);
    dVar12 = (double)FastWrapRot(g_heroRotation.z,(float)dVar12);
    g_heroRotation.z = (float)dVar12;
    FastNormalizeRMtx4(&local_d0,param_3 + 0xc0);
    FastEulerToMtx1(&local_90,param_3 + 0x40);
    if (g_heroStateType == 0) {
      fVar1 = *(float *)(iVar5 + 0x170);
      fVar2 = *(float *)(iVar5 + 0x174);
      fVar3 = *(float *)(iVar5 + 0x178);
      fVar4 = *(float *)(iVar5 + 0x17c);
      if (DAT_00969e7c < 2) {
        fVar4 = g_heroPosition.x - *(float *)(param_3 + 0x10);
        *(float *)(iVar5 + 0x170) = fVar4;
        fVar6 = g_heroPosition.y - *(float *)(param_3 + 0x14);
        *(float *)(iVar5 + 0x174) = fVar6;
        fVar7 = g_heroPosition.z - *(float *)(param_3 + 0x18);
        *(float *)(iVar5 + 0x178) = fVar7;
        fVar8 = g_heroPosition.w;
        *(float *)(iVar5 + 0x17c) = g_heroPosition.w;
        fVar1 = local_a0 * fVar8 + local_b0 * fVar7 + local_d0 * fVar4 + local_c0 * fVar6;
        fVar2 = local_9c * fVar8 + local_ac * fVar7 + local_cc * fVar4 + local_bc * fVar6;
        fVar3 = local_98 * fVar8 + local_a8 * fVar7 + local_c8 * fVar4 + local_b8 * fVar6;
        fVar4 = local_94 * fVar8 + local_a4 * fVar7 + local_c4 * fVar4 + local_b4 * fVar6;
        *(float *)(iVar5 + 0x170) = fVar1;
        *(float *)(iVar5 + 0x174) = fVar2;
        *(float *)(iVar5 + 0x178) = fVar3;
        *(float *)(iVar5 + 0x17c) = fVar4;
      }
      fVar9 = local_60 * fVar4 + local_70 * fVar3 + local_90 * fVar1 + local_80 * fVar2 +
              *(float *)(param_3 + 0x10);
      fVar8 = local_5c * fVar4 + local_6c * fVar3 + local_8c * fVar1 + local_7c * fVar2 +
              *(float *)(param_3 + 0x14);
      fVar11 = local_58 * fVar4 + local_68 * fVar3 + local_88 * fVar1 + local_78 * fVar2 +
               *(float *)(param_3 + 0x18);
      fVar6 = g_heroPosition.y;
      fVar7 = g_heroPosition.x;
      fVar10 = g_heroPosition.z;
    }
    else {
      fVar6 = g_heroPosition.y - *(float *)(param_3 + 0x14);
      fVar7 = g_heroPosition.x - *(float *)(param_3 + 0x10);
      fVar10 = g_heroPosition.z - *(float *)(param_3 + 0x18);
      fVar2 = local_9c * g_heroPosition.w + local_ac * fVar10 + local_cc * fVar7 + local_bc * fVar6;
      fVar1 = local_a0 * g_heroPosition.w + local_b0 * fVar10 + local_d0 * fVar7 + local_c0 * fVar6;
      fVar3 = local_98 * g_heroPosition.w + local_a8 * fVar10 + local_c8 * fVar7 + local_b8 * fVar6;
      fVar4 = local_94 * g_heroPosition.w + local_a4 * fVar10 + local_c4 * fVar7 + local_b4 * fVar6;
      fVar9 = local_60 * fVar4 + local_70 * fVar3 + local_90 * fVar1 + local_80 * fVar2;
      fVar8 = local_5c * fVar4 + local_6c * fVar3 + local_8c * fVar1 + local_7c * fVar2;
      fVar11 = local_58 * fVar4 + local_68 * fVar3 + local_88 * fVar1 + local_78 * fVar2;
    }
    DAT_00969dd0 = (fVar9 - fVar7) + *param_6;
    DAT_00969dd4 = (fVar8 - fVar6) + param_6[1];
    DAT_00969ddc = local_54 * fVar4 + local_64 * fVar3 + local_84 * fVar1 + local_74 * fVar2;
    DAT_00969dd8 = (fVar11 - fVar10) + param_6[2];
  }
  return;
}


// 0x040c11c (0x1d4 bytes)
/* Moby 670 */

void UpdateMoby_670(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  MobyInstance *pMVar7;
  f32 fVar8;
  longlong lVar9;
  double dVar10;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  lVar9 = (longlong)(int)moby;
  if ((moby != (MobyInstance *)0x0) && (pvVar5 = moby->pVar, pvVar5 != (void *)0x0)) {
    dVar10 = (double)(moby->rotation).z;
    UpdateMoby_42(moby);
    pMVar7 = g_MobyInstance;
    if ((*(int *)((int)pvVar5 + 0x158) == 0x3039) &&
       (iVar6 = *(int *)((int)pvVar5 + 0x150), iVar6 != -1)) {
      fVar1 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      fVar8 = (moby->pos).w;
      if (*(int *)((int)pvVar5 + 0x154) != -1) {
        GetBonePosition(lVar9,*(int *)((int)pvVar5 + 0x154),&local_90);
        fVar1 = local_90;
        fVar2 = local_8c;
        fVar3 = local_88;
        fVar8 = local_84;
      }
      local_84 = fVar8;
      local_88 = fVar3;
      local_8c = fVar2;
      local_90 = fVar1;
      FastEulerToMtx1(&local_80,lVar9 + 0x40);
      fVar1 = *(float *)((int)pvVar5 + 0x164);
      fVar2 = *(float *)((int)pvVar5 + 0x160);
      fVar3 = *(float *)((int)pvVar5 + 0x168);
      fVar4 = *(float *)((int)pvVar5 + 0x16c);
      pMVar7[iVar6].pos.x =
           local_90 + local_50 * fVar4 + local_60 * fVar3 + local_80 * fVar2 + local_70 * fVar1;
      pMVar7[iVar6].pos.y =
           local_8c + local_4c * fVar4 + local_5c * fVar3 + local_7c * fVar2 + local_6c * fVar1;
      pMVar7[iVar6].pos.z =
           local_88 + local_48 * fVar4 + local_58 * fVar3 + local_78 * fVar2 + local_68 * fVar1;
      pMVar7[iVar6].pos.w = local_84;
    }
    M670_0040bd50(dVar10,(double)(moby->rotation).z,lVar9);
  }
  return;
}


