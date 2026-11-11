// game/update/moby660.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x407eec-0x40822c
#include "game/update/moby660.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1511.h"
#include "game/update/moby42.h"
#include "idol/fastfunc.h"

// 0x0407eec (0x14 bytes)
void M660_00407eec(void)

{
  DAT_00854c2c = 0x10000;
  return;
}


// 0x0407f28 (0x304 bytes)
/* Moby 660 */

void UpdateMoby_660(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  f32 fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  s8 sVar11;
  void *pvVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_50;
  GPiece<24> local_40;
  
  lVar9 = (longlong)(int)moby;
  pvVar12 = moby->pVar;
  iVar10 = MB_damage(lVar9,0x800000,0);
  moby->damage = -1;
  fVar2 = *(float *)((int)pvVar12 + 0x170);
  if (moby->state == '\0') {
    fVar2 = moby->scale;
    *(float *)((int)pvVar12 + 0x170) = fVar2;
    *(undefined4 *)((int)pvVar12 + 0x174) = *(undefined4 *)((int)pvVar12 + 0xfc);
  }
  fVar5 = (moby->pos).y - GameCamera.posY;
  fVar6 = (moby->pos).x - GameCamera.posX;
  fVar7 = (moby->pos).z - GameCamera.posZ;
  dVar14 = (double)DAT_00854c50;
  fVar8 = (float)(1.0 - dVar14) / (DAT_00854c54 - DAT_00854c58);
  dVar13 = (double)(-(fVar8 * SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)) +
                   (1.0 - -(fVar8 * DAT_00854c58)));
  if (1.0 - dVar13 < 0.0) {
    dVar13 = 1.0;
  }
  if (dVar13 - dVar14 < 0.0) {
    dVar13 = dVar14;
  }
  moby->scale = (float)((double)fVar2 * dVar13);
  *(float *)((int)pvVar12 + 0xfc) = (float)((double)*(float *)((int)pvVar12 + 0x174) * dVar13);
  bVar1 = moby->state == 'e';
  if ((iVar10 == 0) || (bVar1)) {
    if (!bVar1) {
      UpdateMoby_42(moby);
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar12 + 0x2b) = 1;
      *(undefined1 *)((int)pvVar12 + 0x2c) = 100;
      fVar3 = (moby->pos).z;
      uVar4 = (int)fVar3 >> 0x1f;
      iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
      if (iVar10 < 0x432f0000) {
        if ((iVar10 < 0x42fa0001) || (0x432effff < iVar10)) {
          if (iVar10 < 0x42fa0001) {
            moby->alpha = -0x80;
          }
        }
        else {
          sVar11 = FastDoubleToInt((double)((175.0 - (moby->pos).z) * 128.0 * 0.02));
          moby->alpha = sVar11;
        }
      }
      else {
        moby->alpha = '\0';
      }
    }
  }
  else {
    MB_UnlockSkillPoint(0);
    FastVecSub(local_40,(int)pvVar12 + 0xd0,(int)pvVar12 + 0xe0);
    iVar10 = 0;
    moby->state = 'e';
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar9,local_50,lVar9 + 0x10,1,0xffffffffffffffff,0x14,3,4);
    FUN_0028e510(dVar13,lVar9,local_50);
    do {
      if (*(int *)((int)pvVar12 + 0x140) != -1) {
        DeleteMoby(g_MobyInstance + *(int *)((int)pvVar12 + 0x140));
      }
      iVar10 = iVar10 + 1;
      pvVar12 = (void *)((int)pvVar12 + 4);
    } while (iVar10 < 4);
    DeleteMoby(moby);
  }
  return;
}


