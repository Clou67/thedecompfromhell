// game/update/moby846.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48428c-0x484974
#include "game/update/moby846.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby344.h"
#include "idol/fastfunc.h"

// 0x048428c (0x14 bytes)
void M846_0048428c(void)

{
  DAT_008ad094 = 0x10000;
  return;
}


// 0x0484300 (0x674 bytes)
/* Moby 846 */

void UpdateMoby_846(MobyInstance *moby)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  MobyInstance *pMVar6;
  undefined8 uVar4;
  int iVar7;
  double dVar8;
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
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<32> local_100;
  
  iVar5 = MB_damage(moby,0xb30000,0);
  if (iVar5 == 0) {
    if (moby->setByGroup != '\0') {
      DeleteMoby(moby);
    }
  }
  else {
    pMVar6 = CreateMoby(DOOR_LEFT|ASTEROID_00D4);
    if (pMVar6 != (MobyInstance *)0x0) {
      uVar2 = moby->color;
      uVar3 = moby->light;
      pMVar6->drawDistance = 0x40;
      pMVar6->color = uVar2;
      pMVar6->light = uVar3;
      pMVar6->updateDistance = '@';
      pMVar6->enabled = '\x01';
      (pMVar6->pos).x = (moby->pos).x;
      (pMVar6->pos).y = (moby->pos).y;
      (pMVar6->pos).z = (moby->pos).z;
      pvVar1 = pMVar6->pVar;
      (pMVar6->pos).w = (moby->pos).w;
      (pMVar6->rotation).x = (moby->rotation).x;
      (pMVar6->rotation).y = (moby->rotation).y;
      (pMVar6->rotation).z = (moby->rotation).z;
      (pMVar6->rotation).w = (moby->rotation).w;
      MB_randRangeFloat(5.0,12.0);
      FUN_003509b0(pMVar6,moby,local_150,local_140,(int)(animationSpeed * 60.5));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0x200;
    }
    PlayMobySound(0,0,pMVar6);
    dVar9 = 0.0;
    iVar5 = 0;
    dVar10 = dVar9;
    do {
      dVar9 = (double)FastWrapRot((float)dVar9,1.0471976);
      pMVar6 = CreateMoby(DOOR_LEFT|TESLA_CLAW_AMMO);
      if (pMVar6 != (MobyInstance *)0x0) {
        pvVar1 = pMVar6->pVar;
        iVar7 = 0;
        dVar11 = 1.5;
        dVar12 = 2.0;
        dVar13 = 0.4000000059604645;
        dVar14 = 0.5;
        dVar15 = 25.5;
        dVar16 = 0.20000000298023224;
        dVar17 = 0.14000000059604645;
        dVar18 = 0.699999988079071;
        do {
          MB_randSphere
                    ((double)(float)((double)g_FrameTime * dVar11),
                     (double)(float)((double)g_FrameTime * dVar12),local_110);
          MB_randInt(2);
          dVar8 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
          SpawnPart_53
                    ((double)(float)(dVar8 * dVar16),dVar8,dVar10,local_100,
                     (int)((double)animationSpeed * dVar15));
          SpawnPart_53
                    ((double)(float)(dVar8 * dVar17),(double)(float)(dVar8 * dVar18),dVar10,
                     local_100,(int)((double)animationSpeed * dVar15));
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        uVar2 = moby->color;
        uVar3 = moby->light;
        pMVar6->drawDistance = 0x40;
        pMVar6->color = uVar2;
        pMVar6->light = uVar3;
        pMVar6->updateDistance = '@';
        pMVar6->enabled = '\x01';
        (pMVar6->pos).x = (moby->pos).x;
        (pMVar6->pos).y = (moby->pos).y;
        (pMVar6->pos).z = (moby->pos).z;
        (pMVar6->pos).w = (moby->pos).w;
        (pMVar6->rotation).x = (moby->rotation).x;
        (pMVar6->rotation).y = (moby->rotation).y;
        (pMVar6->rotation).z = (moby->rotation).z;
        (pMVar6->rotation).w = (moby->rotation).w;
        MB_randRangeFloat((float)dVar10,24.0);
        dVar11 = (double)MB_randRangeFloat(60.0,120.0);
        uVar4 = FastDoubleToInt((double)(float)((double)animationSpeed * dVar11));
        FUN_003509b0(pMVar6,moby,local_130,local_120,uVar4);
        *(undefined4 *)((int)pvVar1 + 0xc) = 0x200;
        (pMVar6->rotation).x = (float)dVar9;
        UpdateMobyTransform(pMVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    moby->setByGroup = '\x01';
    SaveCheckpointMobyVar(&moby->setByGroup,1,moby,1,(int *)&g_CheckpointLive.vars);
    DeleteMoby(moby);
  }
  return;
}


