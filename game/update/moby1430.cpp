// game/update/moby1430.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x27b904-0x27c5a4
#include "game/update/moby1430.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update/camera19.h"
#include "game/update/moby1118.h"
#include "game/update/moby1428.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x027b904 (0x14 bytes)
void M1430_0027b904(void)

{
  DAT_007aa690 = 0x10000;
  return;
}


// 0x027b918 (0x98 bytes)
void M1430_SetCodeBotState_Crates(longlong param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  u16 *puVar6;
  
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      pMVar4 = g_MobyInstance;
      uVar2 = *puVar5 & 0x7fff;
      if (param_2 == '\0') {
        pMVar3 = g_MobyInstance + uVar2;
        puVar6 = (u16 *)0x0;
        g_MobyInstance[uVar2].enabled = '\0';
        pMVar4[uVar2].modeBits = pMVar3->modeBits | (NO_UPDATE|DISABLED);
      }
      else {
        pMVar3 = g_MobyInstance + uVar2;
        puVar6 = (g_MobyInstance[uVar2].pClass)->collision;
        g_MobyInstance[uVar2].enabled = '\x01';
        pMVar4[uVar2].modeBits =
             pMVar3->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE);
      }
      uVar1 = *puVar5;
      pMVar4[uVar2].collision = puVar6;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x027b9b0 (0x80 bytes)
int M1430_0027b9b0(longlong param_1)

{
  u8 uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 == (ushort *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      if (((g_MobyInstance + (*puVar3 & 0x7fff) == (MobyInstance *)0x0) ||
          (uVar1 = g_MobyInstance[*puVar3 & 0x7fff].state, uVar1 == 0xfe)) || (uVar1 == 0xfd)) {
        iVar4 = iVar4 + 1;
      }
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar2);
  }
  return iVar4;
}


// 0x027ba70 (0xb34 bytes)
/* Moby 1430 */

void UpdateMoby_1430(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  MobyInstance *pMVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ushort *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> auStack_130;
  float local_120 [3];
  undefined4 local_114;
  float local_110 [4];
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  GPiece<24> auStack_90;
  
  lVar12 = (longlong)(int)moby;
  piVar14 = (int *)moby->pVar;
  iVar13 = piVar14[3];
  if (iVar13 != -1) {
    if (moby->state != '\0') {
      FastVecSub(local_140,&g_MobyInstance[iVar13].pos,piVar14 + 4);
      FastVecAddSelf(auStack_130,lVar12 + 0x10,local_150);
      iVar13 = piVar14[3];
    }
    pMVar11 = g_MobyInstance;
    piVar14[4] = (int)g_MobyInstance[iVar13].pos.x;
    piVar14[5] = (int)pMVar11[iVar13].pos.y;
    piVar14[6] = (int)pMVar11[iVar13].pos.z;
    piVar14[7] = (int)pMVar11[iVar13].pos.w;
  }
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    DAT_00a2082c = 1;
    if (piVar14[1] == 0) {
      dVar27 = -1.5707963705062866;
      dVar16 = (double)FastWrapRot((moby->rotation).z,-1.5707964);
      dVar26 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar25 = -3.141592502593994;
      dVar24 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar21 = 2.601886990305502e-06;
      dVar16 = 0.5;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      local_c0 = (fVar8 * fVar5 * 2.601887e-06 +
                 fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7)
                 * 0.5;
      dVar18 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
      dVar27 = (double)(float)(dVar26 - dVar18);
      if (dVar18 - (double)(float)(dVar26 - dVar18) < 0.0) {
        dVar27 = dVar18;
      }
      dVar26 = (double)(float)(dVar25 - dVar18);
      if ((double)(float)(dVar25 - dVar18) - dVar27 < 0.0) {
        dVar26 = dVar27;
      }
      dVar25 = (double)(float)(dVar26 * dVar26);
      dVar18 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
      dVar27 = (double)(float)(dVar25 * dVar18);
      local_bc = (float)((double)(float)((double)(float)(dVar25 * dVar27) * dVar21 +
                                        (double)(float)(dVar27 * dVar22 +
                                                       (double)(float)(dVar18 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar25 * dVar26) * dVar24 + dVar26)))) * dVar16)
      ;
      dVar16 = 0.0;
      local_b8 = 0;
      FastVecAddSelf(auStack_b0,&local_c0,lVar12 + 0x10);
      dVar22 = 1.5707963705062866;
      dVar21 = (double)FastWrapRot((moby->rotation).z,1.5707964);
      uVar9.piece<0,4>() = (moby->pos).x;
      uVar9.piece<4,4>() = (moby->pos).y;
      uVar10.piece<0,4>() = (moby->pos).z;
      uVar10.piece<4,4>() = (moby->pos).w;
      iVar13 = FUN_0027b170(uVar9,uVar10,CONCAT44((float)dVar16,(float)dVar22),
                            CONCAT44((float)dVar21,(float)dVar16));
      piVar14[1] = iVar13;
    }
    else {
      dVar27 = -1.5707963705062866;
      dVar16 = (double)FastWrapRot((moby->rotation).z,-1.5707964);
      dVar26 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar25 = -3.141592502593994;
      dVar24 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar21 = 2.601886990305502e-06;
      dVar16 = 0.5;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      local_a0 = (fVar8 * fVar5 * 2.601887e-06 +
                 fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7)
                 * 0.5;
      dVar18 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
      local_98 = 0;
      dVar27 = (double)(float)(dVar26 - dVar18);
      if (dVar18 - (double)(float)(dVar26 - dVar18) < 0.0) {
        dVar27 = dVar18;
      }
      dVar26 = (double)(float)(dVar25 - dVar18);
      if ((double)(float)(dVar25 - dVar18) - dVar27 < 0.0) {
        dVar26 = dVar27;
      }
      dVar25 = (double)(float)(dVar26 * dVar26);
      dVar18 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
      dVar27 = (double)(float)(dVar25 * dVar18);
      local_9c = (float)((double)(float)((double)(float)(dVar25 * dVar27) * dVar21 +
                                        (double)(float)(dVar27 * dVar22 +
                                                       (double)(float)(dVar18 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar25 * dVar26) * dVar24 + dVar26)))) * dVar16)
      ;
      FastVecAddSelf(auStack_90,&local_a0,lVar12 + 0x10);
      dVar16 = (double)FastWrapRot((moby->rotation).z,1.5707964);
      iVar13 = piVar14[1];
      *(float *)(iVar13 + 0x10) = local_a0;
      *(float *)(iVar13 + 0x14) = local_9c;
      *(undefined4 *)(iVar13 + 0x18) = local_98;
      *(undefined4 *)(iVar13 + 0x1c) = local_94;
      iVar13 = piVar14[1];
      *(undefined4 *)(iVar13 + 0x40) = 0;
      *(undefined4 *)(iVar13 + 0x44) = 0x3fc90fdb;
      *(float *)(iVar13 + 0x48) = (float)dVar16;
      *(undefined4 *)(iVar13 + 0x4c) = 0;
    }
    if ((g_MiscLevelFlags.field109_0x6d == 0) &&
       (puVar15 = (ushort *)(&g_MobyGroups)[piVar14[8]], puVar15 != (ushort *)0x0)) {
      iVar13 = 0;
      do {
        if (((g_MobyInstance + (*puVar15 & 0x7fff) == (MobyInstance *)0x0) ||
            (uVar2 = g_MobyInstance[*puVar15 & 0x7fff].state, uVar2 == 0xfe)) || (uVar2 == 0xfd)) {
          iVar13 = iVar13 + 1;
        }
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
      } while (-1 < (short)uVar3);
      if (9 < iVar13) {
        g_MiscLevelFlags.field109_0x6d = 1;
        g_boltCount = g_boltCount + 15000;
        g_totalBoltsCollected = g_totalBoltsCollected + 15000;
      }
    }
  }
  else if (uVar2 == '\x03') {
    if (piVar14[1] != 0) {
      dVar16 = (double)FastWrapRot
                                 ((float)piVar14[2],(360.0 / (animationSpeed * 360.0)) * 0.017453292
                                 );
      piVar14[2] = (int)(float)dVar16;
      dVar26 = 1.570796251296997;
      dVar25 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar24 = -3.141592502593994;
      dVar23 = -0.16666656732559204;
      dVar22 = 0.008333025500178337;
      dVar21 = -0.0001980741071747616;
      dVar16 = 2.601886990305502e-06;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      dVar17 = -1.5707963705062866;
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      dVar18 = (double)(fVar8 * fVar5 * 2.601887e-06 +
                        fVar5 * -0.0001980741 +
                        fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7 + 1.0);
      dVar27 = (double)FastWrapRot((moby->rotation).z,-1.5707964);
      dVar27 = (double)(float)(dVar27 + dVar26);
      dVar26 = (double)(float)(dVar25 - dVar27);
      if (dVar27 - (double)(float)(dVar25 - dVar27) < 0.0) {
        dVar26 = dVar27;
      }
      dVar19 = (double)(float)(dVar24 - dVar27);
      if ((double)(float)(dVar24 - dVar27) - dVar26 < 0.0) {
        dVar19 = dVar26;
      }
      dVar26 = (double)(float)(dVar19 * dVar19);
      dVar27 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar19));
      dVar20 = (double)(float)(dVar26 * dVar27);
      local_e0 = (float)((double)(float)((double)(float)(dVar26 * dVar20) * dVar16 +
                                        (double)(float)(dVar20 * dVar21 +
                                                       (double)(float)(dVar27 * dVar22 +
                                                                      (double)(float)((double)(float
                                                  )(dVar26 * dVar19) * dVar23 + dVar19)))) * dVar18)
      ;
      dVar27 = (double)FastWrapRot((moby->rotation).z,(float)dVar17);
      local_d8 = 0;
      dVar26 = (double)(float)(dVar25 - dVar27);
      if (dVar27 - (double)(float)(dVar25 - dVar27) < 0.0) {
        dVar26 = dVar27;
      }
      dVar25 = (double)(float)(dVar24 - dVar27);
      if ((double)(float)(dVar24 - dVar27) - dVar26 < 0.0) {
        dVar25 = dVar26;
      }
      dVar24 = (double)(float)(dVar25 * dVar25);
      dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar25));
      dVar26 = (double)(float)(dVar24 * dVar27);
      local_dc = (float)((double)(float)((double)(float)(dVar24 * dVar26) * dVar16 +
                                        (double)(float)(dVar26 * dVar21 +
                                                       (double)(float)(dVar27 * dVar22 +
                                                                      (double)(float)((double)(float
                                                  )(dVar24 * dVar25) * dVar23 + dVar25)))) * dVar18)
      ;
      FastVecAdd(&local_d0,lVar12 + 0x10,&local_e0);
      iVar13 = piVar14[1];
      *(undefined4 *)(iVar13 + 0x10) = local_d0;
      *(undefined4 *)(iVar13 + 0x14) = local_cc;
      *(undefined4 *)(iVar13 + 0x18) = local_c8;
      *(undefined4 *)(iVar13 + 0x1c) = local_c4;
      if (dVar18 < 0.5) {
        uVar3 = moby->uid;
        iVar6 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        iVar13 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar4 = *(uint *)(&g_CheckpointBits + iVar13);
        *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) =
             *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) | 1 << (uVar3 & 0x1f);
        *(uint *)(&g_CheckpointBits + iVar13) = uVar4 | 1 << (uVar3 & 0x1f);
        moby->state = '\x04';
      }
    }
  }
  else if (uVar2 == '\x02') {
    iVar13 = Cam19_IsDone(*piVar14);
    if (iVar13 != 0) {
      dVar27 = -1.5707963705062866;
      dVar16 = (double)FastWrapRot((moby->rotation).z,-1.5707964);
      dVar26 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar25 = -3.141592502593994;
      dVar24 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar21 = 2.601886990305502e-06;
      dVar16 = 2.0;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      dVar17 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
      dVar18 = (double)(float)(dVar26 - dVar17);
      if (dVar17 - (double)(float)(dVar26 - dVar17) < 0.0) {
        dVar18 = dVar17;
      }
      dVar26 = (double)(float)(dVar25 - dVar17);
      if ((double)(float)(dVar25 - dVar17) - dVar18 < 0.0) {
        dVar26 = dVar18;
      }
      dVar18 = (double)(float)(dVar26 * dVar26);
      dVar19 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar26));
      dVar17 = (double)(float)(dVar18 * dVar19);
      FastVecAddSelf(auStack_100,local_120,lVar12 + 0x10);
      local_110[3] = 0.0;
      local_110[2] = 0.0;
      local_110[1] = 0.0;
      local_110[0] = 0.0;
      dVar20 = 1.5707963705062866;
      dVar25 = (double)FastWrapRot((moby->rotation).z,1.5707964);
      local_110[2] = (float)dVar25;
      local_110[1] = 1.5707964;
      iVar13 = FUN_0027b170(CONCAT44((fVar8 * fVar5 * 2.601887e-06 +
                                     fVar5 * -0.0001980741 +
                                     fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7) *
                                     2.0,(float)((double)(float)((double)(float)(dVar18 * dVar17) *
                                                                 dVar21 + (double)(float)(dVar17 * 
                                                  dVar22 + (double)(float)(dVar19 * dVar23 +
                                                                          (double)(float)((double)(
                                                  float)(dVar18 * dVar26) * dVar24 + dVar26)))) *
                                                dVar16)),local_114,
                            CONCAT44(local_110[0],(float)dVar20),
                            CONCAT44((float)dVar25,local_110[3]));
      piVar14[2] = 0;
      fVar1 = (moby->rotation).z;
      piVar14[1] = iVar13;
      FastWrapRot(fVar1,(float)dVar27);
      FastWrapRot((moby->rotation).z,(float)dVar27);
      FastVecAddSelf(auStack_f0,local_120,lVar12 + 0x10);
      GetGroundZ(0x3fe0000000000000,local_120,0);
      local_110[3] = 0.0;
      local_110[2] = 0.0;
      local_110[1] = 0.0;
      local_110[0] = 0.0;
      dVar16 = (double)FastWrapRot((moby->rotation).z,(float)dVar20);
      local_110[2] = (float)dVar16;
      Hero_Warp(local_120,local_110,0x72,0);
      if (piVar14[8] != -1) {
        M1430_SetCodeBotState_Crates(piVar14[8],1);
      }
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x01') {
    if (((g_MiscLevelFlags.Codebot != false) &&
        (fVar1 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
        SQRT(fVar5 * fVar5 + fVar1 * fVar1) < 3.0)) && (g_heroType == '\0')) {
      Cam19_Enable(*piVar14);
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\0') {
    uVar3 = moby->uid;
    if (((&g_Checkpoint.objState[0])[(short)uVar3] == '\0') &&
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2)) &
        1 << (uVar3 & 0x1f)) == 0)) {
      iVar13 = 0;
      DAT_00a2082c = 0;
      moby->state = '\x01';
      do {
        if (piVar14[8] != -1) {
          M1430_SetCodeBotState_Crates(piVar14[8],0);
        }
        iVar13 = iVar13 + 1;
        piVar14 = piVar14 + 1;
      } while (iVar13 < 0x18);
    }
    else {
      moby->state = '\x04';
    }
  }
  return;
}


