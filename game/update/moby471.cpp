// game/update/moby471.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x399a30-0x39a148
#include "game/update/moby471.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0399a30 (0x2f0 bytes)
void M471_00399a30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ushort uVar9;
  int iVar10;
  float fVar11;
  MobyInstance *pMoby;
  int iVar12;
  ushort *puVar13;
  MobyInstance *pMVar14;
  
  fVar1 = 1024.0;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar13 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar13 != (ushort *)0x0) {
    pMoby = (MobyInstance *)0x0;
    do {
      pMVar14 = g_MobyInstance + (*puVar13 & 0x7fff);
      if ((pMVar14->oClass == CONVEYOR_BELT_01D7) &&
         (fVar3 = GameCamera.posY - (pMVar14->pos).y, fVar2 = GameCamera.posX - (pMVar14->pos).x,
         fVar4 = GameCamera.posZ - (pMVar14->pos).z,
         fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3), fVar2 < fVar1)) {
        fVar1 = fVar2;
        pMoby = pMVar14;
      }
      uVar9 = *puVar13;
      puVar13 = puVar13 + 1;
    } while (-1 < (short)uVar9);
    fVar1 = (pMoby->pos).y;
    fVar2 = (pMoby->pos).x;
    fVar3 = (pMoby->pos).z;
    fVar5 = fVar1 - GameCamera.posY;
    fVar4 = fVar2 - GameCamera.posX;
    fVar6 = fVar3 - GameCamera.posZ;
    if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 64.0) {
      iVar12 = *(int *)(iVar10 + 0x74);
      if (-1 < iVar12) {
        if ((g_SoundChannels[iVar12].pMoby != (MobyInstance *)0x0) &&
           ((g_SoundChannels[iVar12].pMoby)->oClass == CONVEYOR_BELT_01D7)) {
          fVar4 = (pMoby->transform).v2.y;
          fVar5 = (pMoby->transform).v2.x;
          fVar6 = (pMoby->transform).v2.z;
          fVar7 = 0.0;
          fVar11 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
          if (fVar11 == 0.0) {
            fVar5 = (pMoby->transform).v2.w;
            fVar4 = fVar7;
            fVar6 = fVar7;
          }
          else {
            fVar11 = 2.5 / fVar11;
            fVar7 = fVar5 * fVar11;
            fVar4 = fVar4 * fVar11;
            fVar5 = (pMoby->transform).v2.w;
            fVar6 = fVar6 * fVar11;
          }
          g_SoundChannels[iVar12].pos[3] = fVar5;
          g_SoundChannels[iVar12].pos[0] = fVar7 + fVar2;
          g_SoundChannels[iVar12].pos[1] = fVar4 + fVar1;
          g_SoundChannels[iVar12].pos[2] = fVar6 + fVar3;
          g_SoundChannels[*(int *)(iVar10 + 0x74)].pMoby = pMoby;
          return;
        }
      }
      iVar12 = PlayMobySound(0,0xd,pMoby);
      fVar1 = *(float *)(param_1 + 0x10);
      *(int *)(iVar10 + 0x74) = iVar12;
      fVar2 = *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x18);
      if (-1 < iVar12) {
        fVar4 = *(float *)(param_1 + 0xe4);
        fVar5 = *(float *)(param_1 + 0xe0);
        fVar6 = *(float *)(param_1 + 0xe8);
        fVar7 = 0.0;
        fVar11 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        if (fVar11 == 0.0) {
          uVar8 = *(undefined4 *)(param_1 + 0xec);
          fVar4 = fVar7;
          fVar6 = fVar7;
        }
        else {
          fVar11 = 2.5 / fVar11;
          fVar7 = fVar5 * fVar11;
          fVar4 = fVar4 * fVar11;
          uVar8 = *(undefined4 *)(param_1 + 0xec);
          fVar6 = fVar6 * fVar11;
        }
        iVar10 = (int)((longlong)iVar12 << 7) - (int)((longlong)iVar12 << 4);
        *(float *)((int)g_SoundChannels + iVar10 + 0x20) = fVar7 + fVar1;
        *(float *)((int)g_SoundChannels + iVar10 + 0x24) = fVar4 + fVar2;
        *(undefined4 *)((int)g_SoundChannels + iVar10 + 0x2c) = uVar8;
        *(float *)((int)g_SoundChannels + iVar10 + 0x28) = fVar6 + fVar3;
      }
    }
  }
  return;
}


// 0x0399d20 (0xa0 bytes)
void M471_00399d20(longlong param_1,Vec4 *param_2)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar2 = g_MobyInstance + (*puVar3 & 0x7fff);
      if (pMVar2->oClass == CONVEYOR_BELT_01D7) {
        MB_GetOrientation
                  ((MobyInstance *)((int)pMVar2->pVar + 0x20),param_2,ZEXT48(pMVar2) + 0x40,
                   ZEXT48(pMVar2) + 0x40);
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0399dc8 (0x380 bytes)
/* Moby 471 */

void UpdateMoby_471(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyModeBit MVar3;
  ushort uVar4;
  void *pvVar5;
  float fVar6;
  MobyInstance *pMVar7;
  int iVar8;
  ushort *puVar9;
  Vec4 local_40;
  Vec4 local_30;
  
  bVar1 = moby->state;
  pvVar5 = moby->pVar;
  if (bVar1 == 0) {
    MVar3 = moby->modeBits;
    *(uint *)((int)pvVar5 + 0x5c) = *(uint *)((int)pvVar5 + 0x5c) | 4;
    moby->enabled = '\0';
    iVar8 = *(int *)((int)pvVar5 + 0x60);
    moby->modeBits = MVar3 | DISABLED;
    if (iVar8 == -1) {
      moby->modeBits = MVar3 | (NO_UPDATE|DISABLED);
    }
    else {
      moby->state = '\x02';
    }
    *(undefined4 *)((int)pvVar5 + 0x74) = 0xffffffff;
  }
  else if (bVar1 < 2) {
    if (*(float *)((int)pvVar5 + 0x6c) != DAT_00842e90 * g_FrameTime) {
      Delt(DAT_00842e90 * g_FrameTime,g_FrameTimeSq * 12.0,
                     (float *)((int)pvVar5 + 0x6c));
      local_30.y = (moby->transform).v0.y;
      fVar2 = (moby->transform).v0.x;
      local_30.z = (moby->transform).v0.z;
      local_30.x = 0.0;
      fVar6 = SQRT(local_30.z * local_30.z + fVar2 * fVar2 + local_30.y * local_30.y);
      if (fVar6 == 0.0) {
        local_30.w = (moby->transform).v0.w;
        local_30.z = local_30.x;
        local_30.y = local_30.x;
      }
      else {
        fVar6 = *(float *)((int)pvVar5 + 0x6c) / fVar6;
        local_30.w = (moby->transform).v0.w;
        local_30.y = local_30.y * fVar6;
        local_30.x = fVar2 * fVar6;
        local_30.z = local_30.z * fVar6;
      }
      puVar9 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      if (puVar9 != (ushort *)0x0) {
        do {
          pMVar7 = g_MobyInstance + (*puVar9 & 0x7fff);
          if (pMVar7->oClass == CONVEYOR_BELT_01D7) {
            MB_GetOrientation
                      ((MobyInstance *)((int)pMVar7->pVar + 0x20),&local_30,ZEXT48(pMVar7) + 0x40,
                       ZEXT48(pMVar7) + 0x40);
          }
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
        } while (-1 < (short)uVar4);
      }
    }
    iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 100));
    if (iVar8 != 0) {
      moby->state = '\x02';
    }
    RegisterMobyDraw(&PTR_M475_0039a180_0070ce70,moby);
  }
  else if (bVar1 < 3) {
    if (*(float *)((int)pvVar5 + 0x6c) != -(DAT_00842e90 * g_FrameTime)) {
      Delt(-(DAT_00842e90 * g_FrameTime),g_FrameTimeSq * 12.0,
                     (float *)((int)pvVar5 + 0x6c));
      local_40.y = (moby->transform).v0.y;
      fVar2 = (moby->transform).v0.x;
      local_40.z = (moby->transform).v0.z;
      local_40.x = 0.0;
      fVar6 = SQRT(local_40.z * local_40.z + fVar2 * fVar2 + local_40.y * local_40.y);
      if (fVar6 == 0.0) {
        local_40.w = (moby->transform).v0.w;
        local_40.z = local_40.x;
        local_40.y = local_40.x;
      }
      else {
        fVar6 = *(float *)((int)pvVar5 + 0x6c) / fVar6;
        local_40.w = (moby->transform).v0.w;
        local_40.y = local_40.y * fVar6;
        local_40.x = fVar2 * fVar6;
        local_40.z = local_40.z * fVar6;
      }
      puVar9 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      if (puVar9 != (ushort *)0x0) {
        do {
          pMVar7 = g_MobyInstance + (*puVar9 & 0x7fff);
          if (pMVar7->oClass == CONVEYOR_BELT_01D7) {
            MB_GetOrientation
                      ((MobyInstance *)((int)pMVar7->pVar + 0x20),&local_40,ZEXT48(pMVar7) + 0x40,
                       ZEXT48(pMVar7) + 0x40);
          }
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
        } while (-1 < (short)uVar4);
      }
    }
    iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x68));
    if (iVar8 != 0) {
      moby->state = '\x01';
    }
    RegisterMobyDraw(&PTR_M475_0039a180_0070ce70,moby);
  }
  if (moby->state != '\0') {
    M471_00399a30(moby);
  }
  return;
}


