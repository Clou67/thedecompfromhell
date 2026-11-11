// game/update/moby648.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4010d8-0x401c34
#include "game/update/moby648.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x04010d8 (0xec bytes)
MobyInstance * FUN_004010d8(longlong param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ushort *puVar8;
  MobyInstance *pMVar9;
  MobyInstance *pMVar10;
  
  fVar1 = 1000.0;
  puVar8 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar8 == (ushort *)0x0) {
    pMVar9 = (MobyInstance *)0x0;
  }
  else {
    pMVar9 = (MobyInstance *)0x0;
    do {
      do {
        pMVar10 = g_MobyInstance + (*puVar8 & 0x7fff);
      } while (pMVar10->oClass != DOOR_0287);
      fVar4 = GameCamera.posY - (pMVar10->pos).y;
      fVar5 = GameCamera.posX - (pMVar10->pos).x;
      fVar6 = GameCamera.posZ - (pMVar10->pos).z;
      fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      if (fVar4 < fVar1) {
        fVar1 = fVar4;
        pMVar9 = pMVar10;
      }
      pvVar3 = pMVar10->pVar;
      pMVar10->state = '\x01';
      uVar7 = DAT_00854844;
      *(undefined4 *)((int)pvVar3 + 0x14) = DAT_00854844;
      if (param_2 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x18) = uVar7;
      }
      uVar2 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar9;
}


// 0x04011c8 (0xe8 bytes)
MobyInstance * FUN_004011c8(longlong param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort *puVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  
  fVar1 = 1000.0;
  puVar7 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar7 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      do {
        pMVar9 = g_MobyInstance + (*puVar7 & 0x7fff);
      } while (pMVar9->oClass != DOOR_0287);
      fVar4 = GameCamera.posY - (pMVar9->pos).y;
      fVar5 = GameCamera.posX - (pMVar9->pos).x;
      fVar6 = GameCamera.posZ - (pMVar9->pos).z;
      fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      if (fVar4 < fVar1) {
        fVar1 = fVar4;
        pMVar8 = pMVar9;
      }
      pvVar3 = pMVar9->pVar;
      pMVar9->state = '\x01';
      *(undefined4 *)((int)pvVar3 + 0x14) = 0;
      if (param_2 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x18) = 0;
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}


// 0x04012d0 (0x964 bytes)
/* Moby 648 */

void UpdateMoby_648(MobyInstance *moby)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  undefined4 local_f0 [16];
  undefined4 local_b0 [20];
  
  puVar1 = (undefined4 *)moby->pVar;
  iVar7 = FastDecTimerS32(puVar1 + 0xf);
  if (iVar7 != 0) {
    dVar10 = -0.05000000074505806;
    dVar11 = 0.05000000074505806;
    dVar9 = 0.1745329201221466;
    dVar13 = 1.5;
    dVar8 = -0.1745329201221466;
    dVar12 = 1.2000000476837158;
    if (puVar1[0xe] == 0) {
      puVar1[0xf] = puVar1[5];
      FastEulerToMtx1(local_b0,(longlong)(int)moby + 0x40);
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRangeFloat((float)puVar1[6],(float)((double)(float)puVar1[6] * dVar12));
      MB_randRangeFloat(-(float)puVar1[0xc],(float)puVar1[0xc]);
      MB_randRangeFloat((float)puVar1[7],(float)((double)(float)puVar1[7] * dVar12));
      MB_randRangeFloat((float)puVar1[8],(float)((double)(float)puVar1[8] * dVar13));
      MB_randRangeFloat(-(float)puVar1[0xd],(float)puVar1[0xd]);
      MB_randRangeFloat((float)puVar1[9],(float)((double)(float)puVar1[9] * dVar13));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      dVar8 = (double)MB_randRangeFloat
                                ((float)(longlong)(int)puVar1[2],
                                 (float)((double)(longlong)(int)puVar1[2] * dVar12));
      uVar4 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)MB_randRangeFloat
                                ((float)(longlong)(int)puVar1[3],
                                 (float)((double)(longlong)(int)puVar1[3] * dVar12));
      uVar5 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)MB_randRangeFloat
                                ((float)(longlong)(int)puVar1[4],
                                 (float)((double)(longlong)(int)puVar1[4] * dVar12));
      uVar6 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      SpawnPart_2(local_100,local_120,local_110,uVar2,uVar3,uVar4,uVar5,uVar6);
    }
    else {
      puVar1[0xf] = DAT_00854868;
      FastEulerToMtx1(local_f0,(longlong)(int)moby + 0x40);
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      MB_randRangeFloat((float)dVar10,(float)dVar11);
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRangeFloat(DAT_010cbbd8,(float)((double)DAT_010cbbd8 * dVar12));
      MB_randRangeFloat(-DAT_010cbbdc,DAT_010cbbdc);
      MB_randRangeFloat(DAT_00854850,(float)((double)DAT_00854850 * dVar12));
      MB_randRangeFloat(DAT_00854858,(float)((double)DAT_00854858 * dVar13));
      MB_randRangeFloat(-DAT_00854874,DAT_00854874);
      MB_randRangeFloat(DAT_00854854,(float)((double)DAT_00854854 * dVar13));
      uVar3 = DAT_0085484c;
      uVar2 = DAT_00854848;
      dVar8 = (double)MB_randRangeFloat
                                ((float)(longlong)DAT_0085485c,
                                 (float)((double)(longlong)DAT_0085485c * dVar12));
      uVar4 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)MB_randRangeFloat
                                ((float)(longlong)DAT_00854860,
                                 (float)((double)(longlong)DAT_00854860 * dVar12));
      uVar5 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)MB_randRangeFloat
                                ((float)(longlong)DAT_00854864,
                                 (float)((double)(longlong)DAT_00854864 * dVar12));
      uVar6 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      SpawnPart_2(local_130,local_150,local_140,uVar2,uVar3,uVar4,uVar5,uVar6);
    }
  }
  return;
}


