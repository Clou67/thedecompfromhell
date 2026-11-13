// game/update/moby436.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x374e80-0x375fd0
#include "game/update/moby436.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"

// 0x0374e80 (0x5a4 bytes)
void M436_00374e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  Vec4 local_140;
  GPiece<16> local_130;
  undefined4 local_120 [24];
  longlong local_c0;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    iVar5 = 0;
    param_1 = param_1 + 0x10;
    dVar16 = 0.0;
    dVar17 = -1.0;
    dVar18 = 1.0;
    dVar7 = 8.0;
    dVar8 = 10.0;
    uVar9 = 0x41186a0000000000;
    dVar10 = 15.5;
    dVar11 = 20.5;
    dVar19 = 45.5;
    dVar12 = 60.5;
    dVar13 = 5.5;
    dVar14 = 10.5;
    dVar15 = 0.5;
    do {
      MB_randRangeFloat((float)dVar17,(float)dVar18);
      MB_randRangeFloat((float)dVar17,(float)dVar18);
      MB_randRangeFloat((float)dVar17,(float)dVar18);
      local_120[0] = 0x4f008fff;
      local_120[1] = 0x4f008fff;
      local_120[2] = 0x4f007fff;
      local_120[3] = 0x4f006fff;
      local_120[4] = 0x2fffffff;
      local_120[5] = 0x2fffffff;
      local_120[6] = 0x2f005f7f;
      local_120[7] = 0x2f004f7f;
      local_120[8] = 0x2f003f7f;
      local_120[9] = 0x2f00004f;
      local_120[10] = 0x2f000000;
      local_120[0xb] = 0x3f000000;
      dVar6 = (double)MB_randRangeFloat
                                ((float)((double)g_FrameTime * dVar7),
                                 (float)((double)g_FrameTime * dVar8));
      ClampVec3Magnitude(dVar6,&local_140);
      lVar4 = MB_randInt(6);
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2));
      lVar4 = MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar11);
      local_c0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar10),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar12);
      local_c0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
      SpawnPart_11(uVar9,dVar6,param_1,&local_140,uVar2,uVar3);
      iVar1 = (int)((double)animationSpeed * dVar14);
      local_c0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar13),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar11);
      local_c0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar10),iVar1);
      SpawnPart_11
                (uVar9,(double)(float)(dVar6 * dVar15),param_1,&local_140,0x7fffffff,0xffffff);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x14);
    iVar5 = 0;
    dVar7 = 3.0;
    uVar9 = 0x41086a0000000000;
    dVar8 = 30.5;
    do {
      local_120[0xc] = 0x4f008fff;
      local_120[0xd] = 0x4f008fff;
      local_120[0xe] = 0x4f007fff;
      local_120[0xf] = 0x4f006fff;
      local_120[0x10] = 0x2fffffff;
      local_120[0x11] = 0x2fffffff;
      local_120[0x12] = 0x2f005f7f;
      local_120[0x13] = 0x2f004f7f;
      local_120[0x14] = 0x2f003f7f;
      local_120[0x15] = 0x2f00004f;
      local_120[0x16] = 0x2f000000;
      local_120[0x17] = 0x3f000000;
      MB_randRangeFloat((float)dVar17,(float)dVar18);
      MB_randRangeFloat((float)dVar17,(float)dVar18);
      MB_randRangeFloat((float)dVar17,(float)dVar18);
      MB_randRangeFloat((float)dVar16,(float)dVar7);
      lVar4 = MB_randInt(6);
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2) + 0x30);
      lVar4 = MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2) + 0x48);
      iVar1 = (int)((double)animationSpeed * dVar19);
      local_c0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar8),iVar1);
      SpawnPart_8(uVar9,param_1,local_130,uVar2,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x32);
  }
  return;
}


// 0x0375430 (0x4b0 bytes)
// inlined: FastAtan2 @0x375580, FastAtan2 @0x375718
MobyInstance *
FUN_00375430(double param_1,double param_2,float *param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyClass *pMVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  MobyInstance *pMVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar20;
  longlong lVar18;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x100;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x22] = in_LR;
  puVar10[0x1e] = in_f30;
  puVar10[0x1f] = in_f31;
  puVar10[0x1d] = unaff_r31;
  puVar10[0x1b] = unaff_r29;
  puVar10[0x1c] = unaff_r30;
  puVar10[0x1a] = unaff_r28;
  pMVar15 = CreateMoby(ROCKET_01B3);
  if (pMVar15 != (MobyInstance *)0x0) {
    fVar1 = *param_3;
    (pMVar15->pos).x = fVar1;
    fVar2 = param_3[1];
    (pMVar15->pos).y = fVar2;
    fVar3 = param_3[2];
    (pMVar15->pos).z = fVar3;
    (pMVar15->pos).w = param_3[3];
    fVar2 = GameCamera.posY - fVar2;
    fVar1 = GameCamera.posX - fVar1;
    pvVar8 = pMVar15->pVar;
    fVar3 = GameCamera.posZ - fVar3;
    fVar7 = ABS(fVar3);
    *(float *)(puVar10 + 0x10) = fVar3;
    fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    fVar4 = ABS(fVar3);
    *(float *)((int)puVar10 + 0x7c) = fVar3;
    *(float *)((int)puVar10 + 0x84) = fVar4 - fVar7;
    fVar3 = 0.0;
    uVar17 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar10 + 0x7c));
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar5 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar11 = fVar3;
    if (0.0 < fVar6) {
      lVar19 = uVar14 - 0xf0;
      lVar18 = uVar14 - 0x48;
      lVar21 = uVar14 - 0x58;
      lVar22 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0xb4) = fVar6;
      *(float *)((int)puVar10 + 0xac) = fVar6;
      *(float *)(puVar10 + 0x16) = fVar6;
      *(float *)(puVar10 + 0x15) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar5;
      *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar6;
      *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0x98) * fVar6 * fVar6;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar18 = uVar14 - 0x58;
      pfVar20 = (float *)&DAT_007358e0;
      lVar19 = lVar16;
      lVar21 = lVar18;
      do {
        fVar6 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0xa8) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar21 = 2;
      lVar19 = lVar16;
      fVar6 = fVar3;
      do {
        iVar12 = (int)lVar19;
        iVar13 = (int)lVar18;
        lVar19 = lVar19 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar12 + 0xa8) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar11 = (fVar6 + 0.7853982) * fVar7 + fVar4;
    }
    (pMVar15->rotation).y = -fVar11;
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar2;
    *(float *)(puVar10 + 0xf) = ABS(fVar1) - ABS(fVar2);
    uVar17 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0xe));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar6 = ABS(fVar2);
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar10 + 0x74));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar7 = ABS(fVar1);
    }
    if (0.0 < fVar6) {
      lVar19 = uVar14 - 0xf0;
      lVar18 = uVar14 - 0x68;
      lVar21 = uVar14 - 0x78;
      lVar22 = 2;
      fVar1 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar6 = fVar1 * fVar1;
      *(float *)((int)puVar10 + 0x94) = fVar1;
      *(float *)((int)puVar10 + 0x8c) = fVar1;
      *(float *)(puVar10 + 0x12) = fVar1;
      *(float *)(puVar10 + 0x11) = fVar1;
      fVar1 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar6;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar1;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar1 * fVar6;
      do {
        *(float *)((int)lVar19 + 0x88) = *(float *)((int)lVar19 + 0x78) * fVar1 * fVar1;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar1 * fVar1;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar18 = uVar14 - 0x78;
      pfVar20 = (float *)&DAT_007358e0;
      lVar19 = lVar16;
      lVar21 = lVar18;
      do {
        fVar1 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar19 + 0x88) = *(float *)((int)lVar19 + 0x88) * fVar1;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar19 = 2;
      do {
        iVar12 = (int)lVar16;
        iVar13 = (int)lVar18;
        lVar16 = lVar16 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar12 + 0x88) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar4 + fVar2;
    }
    pMVar9 = pMVar15->pClass;
    (pMVar15->rotation).z = fVar3;
    fVar2 = DAT_0084178c;
    fVar1 = pMVar9->gScale;
    pMVar15->updateDistance = -1;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\x01';
    pMVar15->drawDistance = 0xff;
    lVar16 = (longlong)DAT_00841780;
    lVar19 = (longlong)DAT_00841784;
    lVar21 = (longlong)DAT_00841788;
    pMVar15->scale = fVar1 * fVar2;
    SetColorOfMoby(pMVar15,lVar16,lVar19,lVar21);
    *(float *)((int)pvVar8 + 0x40) = (float)param_1;
    *(float *)((int)pvVar8 + 0x44) = (float)param_2;
    *(undefined4 *)((int)pvVar8 + 0x4c) = param_4;
    *(undefined4 *)((int)pvVar8 + 0x48) = 0x428c0000;
    *(undefined4 *)((int)pvVar8 + 0x20) = *param_7;
    *(undefined4 *)((int)pvVar8 + 0x24) = param_7[1];
    *(undefined4 *)((int)pvVar8 + 0x28) = param_7[2];
    *(undefined4 *)((int)pvVar8 + 0x2c) = param_7[3];
    UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}


// 0x03758e0 (0x14 bytes)
void M436_003758e0(void)

{
  DAT_008417dc = 0x10000;
  return;
}


// 0x0375900 (0x6d0 bytes)
// strings: 003758f8: '?fff`'

/* Moby 436 */

void UpdateMoby_436_UmbrisInfobot___(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  MobyInstance *pMVar13;
  
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (g_gameMode != GAME_MODE_SCENE) {
        iVar12 = piVar3[6];
        if (iVar12 != -1) {
          Hero_Warp(&Cuboids[iVar12].pos.x,&Cuboids[iVar12].rot.x,0,1);
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 5) {
      if (g_gameMode != GAME_MODE_SCENE) {
        iVar12 = piVar3[3];
        if (iVar12 != -1) {
          g_MobyInstance[iVar12].modeBits = g_MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
        }
        moby->state = '\x06';
        mode_sceneInit(2);
      }
    }
    else if (bVar1 == 4) {
      if (g_MiscLevelFlags.UmbrisRelated2 == 0) {
        if (*piVar3 == -1) {
          moby->state = '\b';
        }
        else {
          iVar12 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3);
          if (iVar12 != 0) {
            g_MiscLevelFlags.UmbrisRelated2 = 1;
            iVar12 = piVar3[3];
            if (iVar12 != -1) {
              g_MobyInstance[iVar12].modeBits = g_MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
            }
            iVar12 = piVar3[5];
            if (iVar12 != -1) {
              g_MobyInstance[iVar12].modeBits = g_MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
            }
            moby->state = '\x05';
            mode_sceneInit(1);
          }
        }
      }
      else {
        moby->state = '\a';
      }
      if ((moby->state != '\x04') && (piVar3[2] != -1)) {
        DeleteMoby(g_MobyInstance + piVar3[2]);
      }
    }
    else if (bVar1 == 3) {
      moby->state = '\x04';
    }
    else if (bVar1 == 2) {
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 1) {
      if (g_MiscLevelFlags.UmbrisRelated1 == 0) {
        g_MiscLevelFlags.UmbrisRelated1 = 1;
        moby->state = '\x02';
        mode_sceneInit(0);
      }
      else {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 0) {
      if ((g_MiscLevelFlags.UmbrisRelated2 != 0) && (piVar3[2] != -1)) {
        DeleteMoby(g_MobyInstance + piVar3[2]);
      }
      if (g_gameMode == GAME_MODE_NORMAL) {
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 == 0xd) {
    DeleteMoby(moby);
  }
  else if (bVar1 == 0xc) {
    if (((piVar3[4] != -1) && (pMVar13 = g_MobyInstance + piVar3[4], pMVar13 != (MobyInstance *)0x0))
       && (pMVar13->state != 0xfd && pMVar13->state != 0xfe)) {
      DeleteMoby(pMVar13);
    }
    moby->state = '\r';
  }
  else {
    if (bVar1 != 0xb) {
      if (bVar1 != 10) {
        if (bVar1 == 9) {
          if (g_gameMode == GAME_MODE_SCENE) {
            return;
          }
          moby->state = '\n';
          PlayInfobotMovie(8);
          return;
        }
        if (bVar1 != 8) {
          if (bVar1 != 7) {
            return;
          }
          iVar12 = piVar3[3];
          if (iVar12 != -1) {
            g_MobyInstance[iVar12].modeBits =
                 g_MobyInstance[iVar12].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
          iVar12 = piVar3[5];
          if (iVar12 != -1) {
            g_MobyInstance[iVar12].modeBits =
                 g_MobyInstance[iVar12].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
          music_SetTransition(2,4);
          moby->state = '\b';
          return;
        }
        if (g_MiscLevelFlags.UmbrisRelated3 == 0) {
          if (((piVar3[3] == -1) || (g_MobyInstance + piVar3[3] == (MobyInstance *)0x0)) ||
             ((uVar2 = g_MobyInstance[piVar3[3]].state, uVar2 == 0xfe || (uVar2 == 0xfd)))) {
            if (piVar3[1] == -1) {
              moby->state = '\r';
            }
            else {
              iVar12 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[1]);
              if (iVar12 != 0) {
                Hero_Warp(&Cuboids[piVar3[7]].pos.x,&Cuboids[piVar3[7]].rot.x,0x72,1);
                g_MiscLevelFlags.UmbrisRelated3 = 1;
                moby->state = '\t';
                mode_sceneInit(3);
              }
            }
          }
        }
        else {
          moby->state = '\f';
        }
        if (moby->state == '\b') {
          return;
        }
        iVar12 = piVar3[4];
        if (iVar12 == -1) {
          return;
        }
        g_MobyInstance[iVar12].modeBits = g_MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
        return;
      }
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\v';
        mode_sceneInit(4);
      }
    }
    if (g_gameMode != GAME_MODE_SCENE) {
      iVar12 = piVar3[7];
      if (iVar12 != -1) {
        Hero_Warp(&Cuboids[iVar12].pos.x,&Cuboids[iVar12].rot.x,0,1);
      }
      fVar11 = g_heroPosition.z;
      fVar10 = g_heroPosition.y;
      fVar9 = g_heroPosition.x;
      if (piVar3[4] != -1) {
        pMVar13 = g_MobyInstance + piVar3[4];
        fVar4 = g_heroPosition.y - (pMVar13->pos).y;
        fVar5 = g_heroPosition.x - (pMVar13->pos).x;
        fVar6 = g_heroPosition.z - (pMVar13->pos).z;
        (pMVar13->pos).w = g_heroPosition.w;
        fVar8 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar7 = (float)0x3f666666 / fVar8;
        if ((float)0x3f666666 - fVar8 < 0.0) {
          fVar6 = fVar6 * fVar7;
        }
        if ((float)0x3f666666 - fVar8 < 0.0) {
          fVar4 = fVar4 * fVar7;
        }
        if ((float)0x3f666666 - fVar8 < 0.0) {
          fVar5 = fVar5 * fVar7;
        }
        (pMVar13->pos).z = fVar11 + fVar6;
        (pMVar13->pos).y = fVar10 + fVar4;
        (pMVar13->pos).x = fVar9 + fVar5;
        DeleteMoby(pMVar13);
      }
      Map_RevealRect(0x87,0xc,0x56,0x3c);
      MB_UnlockLevel(Batalia);
      memcard_Save(0,8);
      ChangeLevel(Batalia);
      moby->state = '\f';
    }
  }
  return;
}


