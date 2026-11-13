// game/update/moby755.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x44de60-0x44e0e4
#include "game/update/moby755.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x044de60 (0x284 bytes)
// strings: 00871c80: 'oppp' (raw)

/* Moby 755 */

void UpdateMoby_755(MobyInstance *moby)

{
  byte bVar1;
  KickVars *kv;
  float fVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar6;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_80;
  GPiece<40> local_70;
  
  bVar1 = moby->state;
  kv = (KickVars *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      dVar9 = 0.0;
      uVar6 = MB_UpdateKick(moby,kv);
      if ((uVar6 & 1) != 0) {
        moby->state = '\x02';
      }
      iVar8 = 0;
      dVar10 = 0.5;
      dVar11 = -0.15000000596046448;
      dVar12 = 0.15000000596046448;
      do {
        MB_randRangeFloat((float)dVar9,(float)dVar10);
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        puVar4 = PTR_PTR_00871c84;
        uVar3 = DAT_00871c80;
        iVar7 = MB_randRange(0x14,0x28);
        fVar2 = animationSpeed * (float)((double)(longlong)iVar7 + dVar10);
        uVar5 = MB_randRange(0x14,0x28);
        SpawnPart_4(local_70,local_80,uVar3,puVar4,(int)fVar2,0x28,uVar5,1);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
    }
  }
  else if (bVar1 < 3) {
    fVar2 = kv[1].kickVel[0];
    *(f32 *)((int)fVar2 + 0x10) = (moby->pos).x;
    *(f32 *)((int)fVar2 + 0x14) = (moby->pos).y;
    *(f32 *)((int)fVar2 + 0x18) = (moby->pos).z;
    *(f32 *)((int)fVar2 + 0x1c) = (moby->pos).w;
    *(undefined1 *)((int)kv[1].kickVel[0] + 0x20) = 0x11;
    MB_SetAnimation(kv[1].kickVel[0],5,0,1);
    *(undefined4 *)((int)kv[1].kickVel[0] + 0x94) =
         *(undefined4 *)(*(int *)((int)kv[1].kickVel[0] + 0x24) + 0x10);
    *(undefined4 *)((int)kv[1].kickVel[0] + 0x58) = 0x3f800000;
    UpdateMobyTransform((MobyInstance *)kv[1].kickVel[0]);
    DeleteMoby(moby);
  }
  return;
}


