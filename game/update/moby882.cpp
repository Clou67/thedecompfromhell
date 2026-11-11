// game/update/moby882.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4a1030-0x4a1674
#include "game/update/moby882.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a1030 (0x180 bytes)
MobyInstance *
M881_004a1030(f32 *param_1,undefined4 *param_2,undefined4 param_3,short param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pMVar3 = CreateMoby(BOMB_0372);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).x = (float)dVar4;
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).y = (float)dVar4;
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    uVar7 = 0x4059000000000000;
    uVar6 = 0x4072c00000000000;
    dVar4 = (double)MB_randRangeSigned(0x4059000000000000,0x4072c00000000000);
    dVar5 = 0.01745329238474369;
    puVar2[6] = (float)(dVar4 * 0.01745329238474369) * g_FrameTime;
    dVar4 = (double)MB_randRangeSigned(uVar7,uVar6);
    puVar2[7] = (float)(dVar4 * dVar5) * g_FrameTime;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    uVar1 = param_2[3];
    puVar2[4] = param_3;
    puVar2[3] = uVar1;
    puVar2[5] = (int)param_4;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x04a11e0 (0x494 bytes)
/* Moby 882 */

void UpdateMoby_882(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  f32 fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  GPiece<24> local_30;
  
  lVar7 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar1;
  (moby->pos).y = (moby->pos).y + pfVar1[1];
  (moby->pos).z = (moby->pos).z + pfVar1[2];
  pfVar1[2] = -(DAT_0071f418 * 9.8 - pfVar1[2]);
  dVar9 = (double)FastWrapRot((moby->rotation).y,pfVar1[6]);
  (moby->rotation).y = (float)dVar9;
  dVar9 = (double)FastWrapRot((moby->rotation).z,pfVar1[7]);
  (moby->rotation).z = (float)dVar9;
  iVar8 = CollLine(local_30,lVar7 + 0x10,0,pfVar1[4],0);
  if (((iVar8 == 0) &&
      (iVar8 = CollSphere(0x3fe0000000000000,lVar7 + 0x10,&DAT_004a11b0,0,pfVar1[4]),
      iVar8 == 0)) ||
     ((g_CollOutput.pMoby != (MobyInstance *)0x0 &&
      (((g_CollOutput.pMoby)->oClass == 0x371 || ((g_CollOutput.pMoby)->oClass == BOMB_0372)))))) {
    fVar3 = (moby->pos).x;
    uVar4 = (int)fVar3 >> 0x1f;
    iVar8 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
    if ((((0x3fffffff < iVar8) && (iVar8 < 0x447f4001)) &&
        (fVar3 = (moby->pos).y, uVar4 = (int)fVar3 >> 0x1f,
        iVar8 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, iVar8 < 0x447f4001 && 0x3fffffff < iVar8)) &&
       ((fVar3 = (moby->pos).z, uVar4 = (int)fVar3 >> 0x1f,
        iVar8 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, 0x3fffffff < iVar8 && (iVar8 < 0x447f4001)))) {
      return;
    }
    DeleteMoby(moby);
  }
  else {
    if ((moby->enabled != '\0') ||
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 5.0)) {
      fVar2 = pfVar1[5];
      uVar10 = 0;
      if ((int)fVar2 % 3 == 0) {
        uVar10 = 0x4024000000000000;
      }
      fVar5 = (moby->pos).y - GameCamera.posY;
      fVar6 = (moby->pos).x - GameCamera.posX;
      if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) <= 50.0) {
        if (((uint)fVar2 & 1) == 0) {
          MB_genericExplosion
                    (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff0000000000000
                     ,uVar10,lVar7,pfVar1,0,1,0xffffffffffffffff,1,2,4);
        }
        else {
          MB_genericExplosion
                    (0x4000000000000000,0x3ff0000000000000,0,0x3ff0000000000000,0x408f400000000000,
                     0x3ff0000000000000,uVar10,lVar7,pfVar1,0,1,0xffffffffffffffff,0,2,4);
        }
      }
      else if (((uint)fVar2 & 1) == 0) {
        MB_genericExplosion
                  (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff3333340000000,
                   uVar10,lVar7,pfVar1,0,1,&DAT_004a11b0,0,2,3);
      }
      else {
        MB_genericExplosion
                  (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff4ccccc0000000,
                   uVar10,lVar7,pfVar1,0,1,0xffffffffffffffff,1,2,3);
      }
    }
    else {
      PlayMobySound(0,0,moby);
    }
    DeleteMoby(moby);
  }
  return;
}


