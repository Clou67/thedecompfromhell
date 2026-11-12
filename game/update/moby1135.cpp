// game/update/moby1135.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x1da838-0x1db910
#include "game/update/moby1135.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby1134.h"
#include "idol/fastfunc.h"

// 0x01da838 (0x1a8 bytes)
MobyInstance * Spawn_Moby1135_GoldBolt(f32 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  MobyInstance *pMVar5;
  MobyInstance *pMVar6;
  double dVar7;
  
  if ((param_2 < 4) && (g_CollectedGoldBolts[Level * 4 + param_2] == '\0')) {
    pMVar6 = CreateMoby(GOLD_BOLT);
    if (pMVar6 != (MobyInstance *)0x0) {
      (pMVar6->pos).x = *param_1;
      (pMVar6->pos).y = param_1[1];
      puVar1 = (uint *)pMVar6->pVar;
      (pMVar6->pos).z = param_1[2];
      pMVar5 = g_heroMobyPtr;
      (pMVar6->pos).w = param_1[3];
      uVar2 = pMVar5->color;
      uVar3 = pMVar5->light;
      pMVar6->updateDistance = '@';
      pMVar6->enabled = '\x01';
      pMVar6->color = uVar2;
      pMVar6->light = uVar3;
      pMVar6->drawDistance = 0x40;
      *puVar1 = param_2;
      puVar1[4] = (uint)(pMVar6->pos).x;
      puVar1[5] = (uint)(pMVar6->pos).y;
      puVar1[6] = (uint)(pMVar6->pos).z;
      puVar1[7] = (uint)(pMVar6->pos).w;
      puVar1[7] = (uint)(pMVar6->rotation).z;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).x = (float)dVar7;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).y = (float)dVar7;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).z = (float)dVar7;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).w = (float)dVar7;
      fVar4 = g_FrameTime;
      puVar1[0x1a] = (uint)(DAT_00764918 * 0.017453292 * g_FrameTime);
      puVar1[0x19] = (uint)(DAT_0076491c * 0.017453292 * fVar4);
      puVar1[0x18] = (uint)(DAT_00764920 * 0.017453292 * fVar4);
      pMVar6->state = '\x01';
      M1134_001d9bd0(pMVar6);
    }
  }
  else {
    pMVar6 = (MobyInstance *)0x0;
  }
  return pMVar6;
}


// 0x01da9e0 (0x14 bytes)
void M1135_001da9e0(void)

{
  DAT_007649b8 = 0x10000;
  return;
}


// 0x01da9f8 (0xb4 bytes)
void M1135_001da9f8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xb2);
  iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  iVar3 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  uVar2 = *(uint *)(&g_CheckpointBits + iVar3);
  *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) =
       *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
  *(uint *)(&g_CheckpointBits + iVar3) = uVar2 | 1 << (uVar1 & 0x1f);
  if (*(char *)(param_1 + 0x21) == -1) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    MB_SetStateByGroup(*(char *)(param_1 + 0x21),1);
  }
  return;
}


// 0x01daac8 (0x1d4 bytes)
void M1135_001daac8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar7 = 0;
  dVar13 = 0.01745329238474369;
  dVar14 = 2.4000000953674316;
  dVar15 = 1.2000000476837158;
  dVar16 = 0.0;
  dVar17 = -1.0471975803375244;
  dVar18 = 0.3490658402442932;
  iVar8 = iVar5;
  do {
    iVar6 = *(int *)(iVar8 + 0x14);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(float *)(*(int *)(iVar8 + 0x14) + 0x18) =
         *(float *)(*(int *)(iVar8 + 0x14) + 0x18) + DAT_007649dc;
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) = (float)((double)DAT_007649e4 * dVar13);
    dVar12 = (double)(float)((double)*(float *)(iVar5 + 0x20) * dVar14 - dVar15);
    FastEulerToMtx
              ((ulonglong)*(uint *)(iVar8 + 0x14) + 0xc0,(ulonglong)*(uint *)(iVar8 + 0x14) + 0x40);
    iVar6 = *(int *)(iVar8 + 0x14);
    fVar2 = *(float *)(iVar6 + 0xc4);
    fVar3 = *(float *)(iVar6 + 0xc0);
    fVar4 = *(float *)(iVar6 + 200);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)(dVar12 / dVar11);
    dVar12 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar12 = (double)(fVar4 * fVar1);
    }
    dVar9 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    dVar10 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar12 = (double)(fVar4 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar12);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar9);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) =
         (float)((double)*(float *)(iVar5 + 0x24) * dVar17 - dVar18);
    FastEulerToMtx
              ((ulonglong)*(uint *)(iVar8 + 0x14) + 0xc0,(ulonglong)*(uint *)(iVar8 + 0x14) + 0x40);
    UpdateMobyTransform(*(MobyInstance **)(iVar8 + 0x14));
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar7 < 3);
  return;
}


// 0x01dac9c (0x174 bytes)
void M1135_001dac9c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (Level == Veldin2) {
    MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764aec + *(int *)(iVar1 + 0x10) * 4));
  }
  else if (Level == Fleet) {
    MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764ad0 + *(int *)(iVar1 + 0x10) * 4));
  }
  else if (Level == Kalebo) {
    MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764ae4 + *(int *)(iVar1 + 0x10) * 4));
  }
  else {
    if (Level != Gemlik) {
      if (Level == Hoven) {
        MB_ShowPersistentMessage
                  (4,*(undefined4 *)(&DAT_00764ab0 + *(int *)(iVar1 + 0x10) * 4));
        return;
      }
      if (Level == Batalia) {
        MB_ShowPersistentMessage
                  (4,*(undefined4 *)(&DAT_00764aa8 + *(int *)(iVar1 + 0x10) * 4));
        return;
      }
      if ((Level != Umbris) && (Level != Novalis)) {
        return;
      }
    }
    MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764ab8 + *(int *)(iVar1 + 0x10) * 4));
  }
  return;
}


// 0x01dae10 (0x58 bytes)
void M1135_001dae10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
  do {
    iVar1 = *(int *)(iVar2 + 0x14);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) | 1;
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + 0x31) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 3);
  return;
}


// 0x01dae68 (0x60 bytes)
void M1135_001dae68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  iVar3 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
  do {
    iVar2 = *(int *)(iVar3 + 0x14);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x31) = 1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 3);
  return;
}


// 0x01daee8 (0xa28 bytes)
/* Moby 1135 */

void UpdateMoby_1135(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  u16 *puVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  byte bVar9;
  MobyInstance *pMVar8;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  f32 local_70;
  f32 local_6c;
  float local_68;
  f32 local_64;
  longlong local_60;
  
  lVar6 = (longlong)(int)moby;
  bVar13 = false;
  uVar1 = moby->uid;
  piVar2 = (int *)moby->pVar;
  if (((&g_Checkpoint.objState[0])[(short)uVar1] != '\0') ||
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) != 0)) {
    bVar13 = true;
  }
  bVar9 = moby->state;
  if ((bVar9 != 0) && (!bVar13 && piVar2[1] != -1)) {
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]);
    bVar9 = moby->state;
    if (iVar7 != 0) {
      uVar1 = moby->uid;
      iVar10 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar7 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar4 = *(uint *)(&g_CheckpointBits + iVar7);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar10) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar10) | 1 << (uVar1 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar7) = uVar4 | 1 << (uVar1 & 0x1f);
      if (moby->group == -1) {
        moby->state = '\x01';
      }
      else {
        MB_SetStateByGroup(moby->group,1);
      }
      iVar7 = 0;
      pvVar11 = moby->pVar;
      puVar3 = moby->pClass->collision;
      moby->enabled = '\x01';
      moby->collision = puVar3;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      do {
        iVar10 = *(int *)((int)pvVar11 + 0x14);
        if (iVar10 != 0) {
          *(ushort *)(iVar10 + 0x34) = *(ushort *)(iVar10 + 0x34) & 0xfffe;
          *(undefined1 *)(*(int *)((int)pvVar11 + 0x14) + 0x31) = 1;
        }
        iVar7 = iVar7 + 1;
        pvVar11 = (void *)((int)pvVar11 + 4);
      } while (iVar7 < 3);
      bVar9 = moby->state;
      bVar13 = true;
      if (bVar9 == 5) {
        bVar9 = 1;
        moby->state = '\x01';
        bVar13 = true;
      }
    }
  }
  if (piVar2[0xf] != 0) {
    if (g_ChallengeMode == 0) {
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      return;
    }
    moby->collision = moby->pClass->collision;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (bVar9 < 4) {
    if (bVar9 == 0) {
      iVar7 = 0;
      moby->updateDistance = -1;
      dVar15 = 2.094395160675049;
      piVar12 = piVar2;
      do {
        pMVar8 = CreateMoby(GOLD_WEAPON_CASE|VENDOR);
        piVar12[5] = (int)pMVar8;
        pMVar8->drawDistance = 0x40;
        local_60 = (longlong)iVar7;
        *(undefined1 *)(piVar12[5] + 0x31) = 1;
        *(undefined8 *)(piVar12[5] + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
        *(MobyModeBit *)(piVar12[5] + 0x34) = moby->modeBits;
        iVar10 = piVar12[5];
        *(f32 *)(iVar10 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar10 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar10 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar10 + 0x1c) = (moby->pos).w;
        iVar10 = piVar12[5];
        *(f32 *)(iVar10 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar10 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar10 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar10 + 0x4c) = (moby->rotation).w;
        dVar14 = (double)FastWrapRot
                                   (*(float *)(piVar12[5] + 0x48),(float)((double)local_60 * dVar15)
                                   );
        piVar5 = piVar12 + 5;
        iVar7 = iVar7 + 1;
        piVar12 = piVar12 + 1;
        *(float *)(*piVar5 + 0x48) = (float)dVar14;
      } while (iVar7 < 3);
      if ((piVar2[0xe] != 0) || (bVar13)) {
        moby->state = '\x06';
      }
      else {
        iVar7 = 0;
        pvVar11 = moby->pVar;
        moby->state = '\x05';
        moby->collision = (ushort *)0x0;
        moby->enabled = '\0';
        moby->modeBits = moby->modeBits | DISABLED;
        do {
          iVar10 = *(int *)((int)pvVar11 + 0x14);
          if (iVar10 != 0) {
            *(ushort *)(iVar10 + 0x34) = *(ushort *)(iVar10 + 0x34) | 1;
            *(undefined1 *)(*(int *)((int)pvVar11 + 0x14) + 0x31) = 0;
          }
          iVar7 = iVar7 + 1;
          pvVar11 = (void *)((int)pvVar11 + 4);
        } while (iVar7 < 3);
      }
      M1135_001daac8(lVar6);
      return;
    }
    if (1 < bVar9) {
      if (bVar9 < 3) {
        iVar7 = Hero_GetSpecialStateKind();
        uVar4 = piVar2[8] >> 0x1f;
        iVar10 = (uVar4 >> 1 ^ piVar2[8]) - uVar4;
        dVar15 = 1.0;
        if (iVar10 < 0x3f800000) {
          fVar16 = OrganicDelt
                             (1.0,DAT_007649ec * g_FrameTimeSq,DAT_007649f0 * g_FrameTimeSq,
                              DAT_007649f4 * g_FrameTime,(float *)(piVar2 + 8),0x720000,
                              (float *)(piVar2 + 10));
          dVar15 = (double)fVar16;
        }
        else {
          uVar4 = piVar2[9] >> 0x1f;
          if ((int)((uVar4 >> 1 ^ piVar2[9]) - uVar4) < 0x3f800000) {
            fVar16 = OrganicDelt
                               (1.0,DAT_007649ec * g_FrameTimeSq,DAT_007649f0 * g_FrameTimeSq,
                                DAT_007649f4 * g_FrameTime,(float *)(piVar2 + 9),0x720000,
                                (float *)(piVar2 + 0xb));
            dVar15 = (double)fVar16;
          }
          else if ((g_HelpMsgOwner != 4) || (iVar10 < 0x3e800001)) {
            if (iVar7 == 2) {
              piVar2[0xd] = 0x3ff9999a;
              moby->state = '\x03';
            }
            else if (iVar7 == 0) {
              moby->state = '\x04';
            }
          }
        }
        M1135_001daac8(dVar15,lVar6);
        return;
      }
      dVar15 = 0.0;
      if (piVar2[0xd] != 0) {
        RegisterFuncForMoby(&PTR_M1138_001db948_00708f10,moby);
        Delt((float)dVar15,g_FrameTime * 4.0,(float *)(piVar2 + 0xd));
        return;
      }
      pMVar8 = g_MobyInstance + *piVar2;
      local_70 = (pMVar8->pos).x;
      pvVar11 = pMVar8->pVar;
      local_6c = (pMVar8->pos).y;
      local_64 = (pMVar8->pos).w;
      local_68 = (pMVar8->pos).z + 0.2;
      Hero_Warp(&local_70,&(pMVar8->rotation).x,0,1);
      g_heroInvisible = 1;
      if ((piVar2[0x10] != -1) && (piVar2[0x11] != -1)) {
        music_SetTransition(piVar2[0x10],piVar2[0x11]);
      }
      pMVar8->state = '\x04';
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x3f800000;
      *(undefined4 *)((int)pvVar11 + 0x24) = 0x3f800000;
      *(undefined4 *)((int)pvVar11 + 0x28) = 0;
      *(undefined4 *)((int)pvVar11 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar11 + 0x34) = 0;
      PlayMobySound(1,0,pMVar8);
      moby->state = '\x01';
      piVar2[8] = 0;
      piVar2[9] = 0;
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      piVar2[0xd] = 0x3ff9999a;
      M1135_001daac8(lVar6);
      return;
    }
LAB_001db308:
    if ((((piVar2[2] < 0) || (g_LevelFlags[Level][piVar2[2]] == -1)) && (*piVar2 != -1)) &&
       (((g_heroType != '\x02' && (g_standingOnMoby == moby)) &&
        ((g_framesNotGrounded == 0 &&
         (M1135_001dac9c(lVar6), (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0))))
       )) {
      PlayMobySound(0,0,moby);
      moby->state = '\x02';
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      fVar16 = (moby->rotation).z;
      piVar2[0xc] = -1;
      Hero_WalkToPos(fVar16,(float *)(lVar6 + 0x10),-1,0);
      DamageSphereAtPos
                (0x3ff8000000000000,0x4034000000000000,0x3ff0000000000000,lVar6,lVar6 + 0x10,
                 &DAT_001daec8,0x10000);
    }
  }
  else {
    if (bVar9 < 7) {
      if (4 < bVar9) {
        if (bVar9 < 6) {
          return;
        }
        if (moby->group != -1) {
          MB_SetStateByGroup(moby->group,1);
        }
        moby->state = '\x01';
        goto LAB_001db308;
      }
    }
    else {
      if (bVar9 < 8) {
        uVar4 = piVar2[8] >> 0x1f;
        if ((int)((uVar4 >> 1 ^ piVar2[8]) - uVar4) < 0x3f800000) {
          OrganicDelt
                    (1.0,DAT_007649ec * g_FrameTimeSq,DAT_007649f0 * g_FrameTimeSq,
                     DAT_007649f4 * g_FrameTime,(float *)(piVar2 + 8),0x760000,
                     (float *)(piVar2 + 10));
        }
        else {
          uVar4 = piVar2[9] >> 0x1f;
          if ((int)((uVar4 >> 1 ^ piVar2[9]) - uVar4) < 0x3f800000) {
            OrganicDelt
                      (1.0,DAT_007649ec * g_FrameTimeSq,DAT_007649f0 * g_FrameTimeSq,
                       DAT_007649f4 * g_FrameTime,(float *)(piVar2 + 9),0x760000,
                       (float *)(piVar2 + 0xb));
          }
          else {
            PlayMobySound(1,0,moby);
            moby->state = '\b';
            piVar2[0xd] = 0;
          }
        }
        M1135_001daac8(lVar6);
        return;
      }
      if (8 < bVar9) {
        return;
      }
    }
    uVar4 = piVar2[0xd] >> 0x1f;
    dVar15 = 1.9500000476837158;
    if ((int)((uVar4 >> 1 ^ piVar2[0xd]) - uVar4) < 0x3ff9999a) {
      RegisterFuncForMoby(&PTR_M1138_001db948_00708f10,moby);
      fVar16 = Delt((float)dVar15,g_FrameTime * 4.0,(float *)(piVar2 + 0xd));
      dVar15 = (double)fVar16;
    }
    else {
      dVar15 = 0.0;
      if (piVar2[9] < 1) {
        if (piVar2[8] < 1) {
          moby->state = '\x01';
        }
        else {
          fVar16 = OrganicDelt
                             (0.0,DAT_007649ec * g_FrameTimeSq,DAT_007649f0 * g_FrameTimeSq,
                              DAT_007649f4 * g_FrameTime,(float *)(piVar2 + 8),0x720000,
                              (float *)(piVar2 + 0xb));
          dVar15 = (double)fVar16;
        }
      }
      else {
        fVar16 = OrganicDelt
                           (0.0,DAT_007649ec * g_FrameTimeSq,DAT_007649f0 * g_FrameTimeSq,
                            DAT_007649f4 * g_FrameTime,(float *)(piVar2 + 9),0x760000,
                            (float *)(piVar2 + 10));
        dVar15 = (double)fVar16;
      }
    }
    M1135_001daac8(dVar15,lVar6);
  }
  return;
}


