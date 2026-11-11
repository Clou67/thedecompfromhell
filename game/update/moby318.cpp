// game/update/moby318.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x340610-0x341198
#include "game/update/moby318.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x0340610 (0x14 bytes)
void M318_00340610(void)

{
  DAT_0083bc0c = 0x10000;
  return;
}


// 0x0340640 (0x1d4 bytes)
void M318_00340640(int param_1)

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
         *(float *)(*(int *)(iVar8 + 0x14) + 0x18) + DAT_0083bc40;
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) = (float)((double)DAT_0083bc48 * dVar13);
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


// 0x0340814 (0x70 bytes)
void M318_00340814(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  do {
    iVar1 = *(int *)(iVar2 + 0x14);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + 0x31) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x94) =
           *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x14) + 0x24) + 0x10);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 3);
  return;
}


// 0x0340884 (0xc0 bytes)
void M318_00340884(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x10);
  if (iVar1 == 4) {
    MB_ShowPersistentMessage(0xb,0x2b0c);
  }
  else if (iVar1 == 3) {
    MB_ShowPersistentMessage(0xb,0x2b0b);
  }
  else if (iVar1 == 2) {
    MB_ShowPersistentMessage(0xb,0x2b0c);
  }
  else if (iVar1 == 1) {
    MB_ShowPersistentMessage(0xb,0x2b0c);
  }
  else if (iVar1 == 0) {
    MB_ShowPersistentMessage(0xb,0x2b0d);
  }
  else {
    MB_ShowPersistentMessage(0xb,0);
  }
  return;
}


// 0x0340968 (0x830 bytes)
/* Moby 318 */

void UpdateMoby_318(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  f32 local_60;
  f32 local_5c;
  float local_58;
  f32 local_54;
  longlong local_50;
  
  lVar5 = (longlong)(int)moby;
  uVar1 = moby->state;
  piVar11 = (int *)moby->pVar;
  if (uVar1 == '\x04') {
    if ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
             ((int)g_heroPosition.z >> 0x1f)) < 0x430a0000) {
      g_MiscLevelFlags.field85_0x55 = 1;
    }
    uVar3 = piVar11[0xf] >> 0x1f;
    dVar14 = 1.9500000476837158;
    if ((int)((uVar3 >> 1 ^ piVar11[0xf]) - uVar3) < 0x3ff9999a) {
      RegisterFuncForMoby(&PTR_M319_003411d0_0070c278,moby);
      fVar15 = Delt((float)dVar14,g_FrameTime * 4.0,(float *)(piVar11 + 0xf));
      dVar14 = (double)fVar15;
    }
    else {
      dVar14 = 0.0;
      if (piVar11[9] < 1) {
        if (piVar11[8] < 1) {
          moby->state = '\x01';
        }
        else {
          fVar15 = OrganicDelt
                             (0.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                              DAT_0083bc58 * g_FrameTime,(float *)(piVar11 + 8),0x840000,
                              (float *)(piVar11 + 0xb));
          dVar14 = (double)fVar15;
        }
      }
      else {
        fVar15 = OrganicDelt
                           (0.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                            DAT_0083bc58 * g_FrameTime,(float *)(piVar11 + 9),0x720000,
                            (float *)(piVar11 + 10));
        dVar14 = (double)fVar15;
      }
    }
    M318_00340640(dVar14,lVar5);
  }
  else if (uVar1 == '\x03') {
    dVar14 = 0.0;
    if (piVar11[0xf] == 0) {
      pMVar6 = g_MobyInstance + *piVar11;
      if ((piVar11[1] != -1) && (g_LevelFlags[Level][piVar11[3]] == -1)) {
        pMVar6 = g_MobyInstance + piVar11[1];
      }
      local_60 = (pMVar6->pos).x;
      pvVar2 = pMVar6->pVar;
      local_5c = (pMVar6->pos).y;
      local_54 = (pMVar6->pos).w;
      local_58 = (pMVar6->pos).z + 0.2;
      Hero_Warp(&local_60,&(pMVar6->rotation).x,0,1);
      g_heroInvisible = 1;
      if ((piVar11[0xc] != -1) && (piVar11[0xd] != -1)) {
        music_SetTransition(piVar11[0xc],piVar11[0xd]);
      }
      iVar7 = 0;
      pvVar9 = pMVar6->pVar;
      pMVar6->enabled = '\x01';
      pMVar6->modeBits =
           pMVar6->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      pMVar6->collision = pMVar6->pClass->collision;
      do {
        iVar8 = *(int *)((int)pvVar9 + 0x14);
        if (iVar8 != 0) {
          *(ushort *)(iVar8 + 0x34) = *(ushort *)(iVar8 + 0x34) & 0xfffe;
          *(undefined1 *)(*(int *)((int)pvVar9 + 0x14) + 0x31) = 1;
          *(undefined4 *)(*(int *)((int)pvVar9 + 0x14) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar9 + 0x14) + 0x24) + 0x10);
        }
        iVar7 = iVar7 + 1;
        pvVar9 = (void *)((int)pvVar9 + 4);
      } while (iVar7 < 3);
      pMVar6->state = '\x04';
      *(undefined4 *)((int)pvVar2 + 0x20) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x24) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x28) = 0;
      *(undefined4 *)((int)pvVar2 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
      PlayMobySound(1,0,pMVar6);
      moby->state = '\x01';
      piVar11[8] = 0;
      piVar11[9] = 0;
      piVar11[10] = 0;
      piVar11[0xb] = 0;
      piVar11[0xf] = 0x3ff9999a;
      M318_00340640(lVar5);
    }
    else {
      RegisterFuncForMoby(&PTR_M319_003411d0_0070c278,moby);
      Delt((float)dVar14,g_FrameTime * 4.0,(float *)(piVar11 + 0xf));
    }
  }
  else if (uVar1 == '\x02') {
    iVar7 = Hero_GetSpecialStateKind();
    uVar3 = piVar11[8] >> 0x1f;
    iVar8 = (uVar3 >> 1 ^ piVar11[8]) - uVar3;
    dVar14 = 1.0;
    if (iVar8 < 0x3f800000) {
      fVar15 = OrganicDelt
                         (1.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                          DAT_0083bc58 * g_FrameTime,(float *)(piVar11 + 8),0x720000,
                          (float *)(piVar11 + 10));
      dVar14 = (double)fVar15;
    }
    else {
      uVar3 = piVar11[9] >> 0x1f;
      if ((int)((uVar3 >> 1 ^ piVar11[9]) - uVar3) < 0x3f800000) {
        fVar15 = OrganicDelt
                           (1.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                            DAT_0083bc58 * g_FrameTime,(float *)(piVar11 + 9),0x720000,
                            (float *)(piVar11 + 0xb));
        dVar14 = (double)fVar15;
      }
      else if ((g_HelpMsgOwner != 0xb) || (iVar8 < 0x3e800001)) {
        if (iVar7 == 2) {
          piVar11[0xf] = 0x3ff9999a;
          moby->state = '\x03';
        }
        else if (iVar7 == 0) {
          moby->state = '\x04';
        }
      }
    }
    M318_00340640(dVar14,lVar5);
  }
  else if (uVar1 == '\x01') {
    if (*piVar11 != -1) {
      if ((((moby->modeBits & DISABLED) != NONE) && (-1 < piVar11[2])) &&
         (g_LevelFlags[Level][piVar11[2]] == -1)) {
        iVar7 = 0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        moby->enabled = '\x01';
        moby->collision = moby->pClass->collision;
        piVar10 = piVar11;
        do {
          iVar8 = piVar10[5];
          if (iVar8 != 0) {
            *(ushort *)(iVar8 + 0x34) = *(ushort *)(iVar8 + 0x34) & 0xfffe;
            *(undefined1 *)(piVar10[5] + 0x31) = 1;
            *(undefined4 *)(piVar10[5] + 0x94) = *(undefined4 *)(*(int *)(piVar10[5] + 0x24) + 0x10)
            ;
          }
          iVar7 = iVar7 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar7 < 3);
      }
      if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
         ((M318_00340884(lVar5), (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0 &&
          (g_HelpMsgOwner == 0xb)))) {
        lVar12 = 0;
        PlayMobySound(0,0,moby);
        moby->state = '\x02';
        piVar11[10] = 0;
        piVar11[0xb] = 0;
        Hero_WalkToPos((moby->rotation).z,(float *)(lVar5 + 0x10),lVar12,0);
        DamageSphereAtPos
                  (0x3ff8000000000000,0x4034000000000000,0x3ff0000000000000,lVar5,lVar5 + 0x10,
                   &DAT_00340944,0x10000);
      }
    }
  }
  else if (uVar1 == '\0') {
    iVar7 = 0;
    moby->state = '\x01';
    dVar14 = 2.094395160675049;
    piVar10 = piVar11;
    do {
      pMVar6 = CreateMoby(GOLD_WEAPON_CASE|VENDOR);
      piVar10[5] = (int)pMVar6;
      pMVar6->drawDistance = 0x40;
      local_50 = (longlong)iVar7;
      *(undefined1 *)(piVar10[5] + 0x31) = 1;
      *(undefined8 *)(piVar10[5] + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(MobyModeBit *)(piVar10[5] + 0x34) = moby->modeBits;
      iVar8 = piVar10[5];
      *(f32 *)(iVar8 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar8 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar8 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar8 + 0x1c) = (moby->pos).w;
      iVar8 = piVar10[5];
      *(f32 *)(iVar8 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar8 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar8 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar8 + 0x4c) = (moby->rotation).w;
      dVar13 = (double)FastWrapRot
                                 (*(float *)(piVar10[5] + 0x48),(float)((double)local_50 * dVar14));
      piVar4 = piVar10 + 5;
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
      *(float *)(*piVar4 + 0x48) = (float)dVar13;
    } while (iVar7 < 3);
    if ((-1 < piVar11[2]) && (g_LevelFlags[Level][piVar11[2]] != -1)) {
      lVar12 = 3;
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | DISABLED;
      do {
        *(ushort *)(piVar11[5] + 0x34) = *(ushort *)(piVar11[5] + 0x34) | 1;
        *(undefined1 *)(piVar11[5] + 0x31) = 0;
        piVar10 = piVar11 + 5;
        piVar11 = piVar11 + 1;
        *(undefined4 *)(*piVar10 + 0x94) = 0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    M318_00340640(lVar5);
  }
  return;
}


