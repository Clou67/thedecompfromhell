// game/update/moby1047.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x19eb88-0x19f1bc
#include "game/update/moby1047.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby1122.h"
#include "game/update/moby1921.h"
#include "game/update/moby200.h"
#include "idol/fastfunc.h"

// 0x019eb88 (0x14 bytes)
void M1047_0019eb88(void)

{
  DAT_0074059c = 0x10000;
  return;
}


// 0x019ebd8 (0x5e4 bytes)
/* Moby 1047 */

void UpdateMoby_1047(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> auStack_d0;
  
  lVar8 = (longlong)(int)moby;
  uVar4 = moby->uid;
  if (((&g_Checkpoint.objState[0])[(short)uVar4] == '\0') &&
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar4 >> 5) << 2)) &
      1 << (uVar4 & 0x1f)) == 0)) {
    iVar9 = MB_damage(lVar8,0x40000,0);
    if (iVar9 == 0) {
      return;
    }
    dVar18 = 0.0;
    uVar19 = 0x4010000000000000;
    dVar20 = 2.0;
    uVar21 = 0x40f86a0000000000;
    dVar22 = 3.0;
    uVar23 = 0x402e000000000000;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar8,local_100,lVar8 + 0x10,0xffffffffffffffff,1,5,3,4);
    sound_MobyPlay_oClass(0,0,moby,0x99);
    dVar24 = -3.0;
    iVar9 = 0;
    dVar25 = 5.0;
    dVar26 = 10.0;
    dVar27 = 0.5;
    dVar28 = 1.0;
    do {
      dVar11 = (double)MB_randRangeFloat((float)dVar24,(float)dVar22);
      fVar6 = (float)dVar11;
      dVar11 = (double)MB_randRangeFloat((float)dVar24,(float)dVar22);
      fVar1 = (float)((double)(moby->transform).v2.x * dVar11 +
                     (double)((moby->transform).v0.x * -1.0 + (moby->transform).v1.x * fVar6));
      fVar2 = (float)((double)(moby->transform).v2.y * dVar11 +
                     (double)((moby->transform).v0.y * -1.0 + (moby->transform).v1.y * fVar6));
      fVar3 = (float)((double)(moby->transform).v2.z * dVar11 +
                     (double)((moby->transform).v0.z * -1.0 + (moby->transform).v1.z * fVar6));
      fVar7 = (float)((double)(moby->transform).v2.w * dVar11 +
                     (double)((moby->transform).v0.w * -1.0 + (moby->transform).v1.w * fVar6)) + 0.0
      ;
      dVar11 = (double)MB_randRangeFloat((float)dVar25,(float)dVar26);
      dVar17 = (double)fVar7;
      dVar14 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      fVar6 = (float)((double)(float)(dVar11 * (double)g_FrameTime) / dVar14);
      dVar11 = dVar18;
      if (dVar18 - dVar14 < 0.0) {
        dVar11 = (double)(fVar3 * fVar6);
      }
      dVar15 = dVar18;
      if (dVar18 - dVar14 < 0.0) {
        dVar15 = (double)(fVar2 * fVar6);
      }
      dVar16 = dVar18;
      if (dVar18 - dVar14 < 0.0) {
        dVar16 = (double)(fVar1 * fVar6);
      }
      if (dVar14 - dVar18 < 0.0) {
        dVar11 = (double)(fVar3 * fVar6);
      }
      if (dVar14 - dVar18 < 0.0) {
        dVar15 = (double)(fVar2 * fVar6);
      }
      if (dVar14 - dVar18 < 0.0) {
        dVar16 = (double)(fVar1 * fVar6);
      }
      FastVecAddSelf(auStack_d0,local_e0,lVar8 + 0x10);
      iVar10 = MB_randInt(1);
      uVar12 = MB_randRangeFloat((float)dVar27,(float)dVar28);
      MB_randRange(0x3c,0x78);
      uVar13 = MB_randRangeFloat((float)dVar20,(float)dVar22);
      MB_randInt(4);
      FUN_00425540(uVar12,uVar13,dVar28,dVar22,CONCAT44(fVar1,fVar2),CONCAT44(fVar3,fVar7),
                   CONCAT44((float)dVar16,(float)dVar15),CONCAT44((float)dVar11,(float)dVar17),
                   (ZERO_MASK(iVar10)) + 0x70f);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x1e);
    MB_genericExplosion
              (dVar18,dVar18,uVar19,dVar20,uVar21,dVar22,uVar23,lVar8,local_100,local_f0);
    FUN_001d5858(lVar8);
    FUN_002dbdc0(lVar8);
    uVar4 = moby->uid;
    iVar10 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
    iVar9 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
    uVar5 = *(uint *)(&g_CheckpointBits + iVar9);
    *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar10) =
         *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar10) | 1 << (uVar4 & 0x1f);
    *(uint *)(&g_CheckpointBits + iVar9) = uVar5 | 1 << (uVar4 & 0x1f);
    DeleteMoby(moby);
    return;
  }
  FUN_001d5858(lVar8);
  FUN_002dbdc0(lVar8);
  DeleteMoby(moby);
  return;
}


