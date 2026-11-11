// game/update/moby885.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4a1674-0x4a20b0
// shared update function UpdateMoby_a_lot_22; registered for oClasses 885, 888, 891, 892, 894, 900, 901, 936
#include "game/update/moby885.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a1674 (0x14 bytes)
void M936_004a1674(void)

{
  DAT_008cbeec = 0x10000;
  return;
}


// 0x04a1688 (0x28 bytes)
void M936_004a1688(undefined8 param_1)

{
  MB_SetStateByGroup(param_1,2);
  return;
}


// shared update function, registered for oClasses 885, 888, 891, 892, 894, 900, 901, 936
// 0x04a1708 (0x994 bytes)
/* Moby 885
   Moby 888
   Moby 891
   Moby 892
   Moby 894
   Moby 900
   Moby 901
   Moby 936 */

void UpdateMoby_885(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar26;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_140 [24];
  longlong local_e0;
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  puVar7 = (undefined4 *)(uVar8 - 0xc0);
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  bVar2 = moby->state;
  puVar7 = (undefined4 *)moby->pVar;
  bVar11 = (bVar2 == 2) << 1;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
        moby->state = '\x01';
        if ((undefined4 *)*puVar7 != (undefined4 *)0x0) {
          *(undefined4 *)*puVar7 = 3;
        }
      }
      else {
        DeleteMoby(moby);
      }
    }
    else {
      iVar10 = MB_damage(lVar9,0x80000,0);
      if (iVar10 != 0) {
        MB_SetStateByGroup(moby->group,2);
        sound_MobyPlay_oClass(0,0,moby,0x375);
      }
      moby->damage = -1;
    }
  }
  else if (bVar2 < 3) {
    if (moby->oClass == 0x37c) {
      auVar25 = ZEXT416(0);
      auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      iVar10 = 0;
      auVar25 = loadVectorLeftIndexed(uVar8 - 0xc0,0x4a16b0);
      dVar13 = 10.0;
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      vectorCompareGreaterThanOrEqualToFloatingPoint(auVar26,auVar25);
      if (bVar2 == 2) {
        dVar24 = 8.0;
        dVar23 = 0.0;
        dVar22 = 6.0;
        uVar21 = 0x4136e36000000000;
        dVar20 = 15.5;
        dVar19 = 20.5;
        dVar18 = 30.5;
        dVar17 = 45.5;
        dVar16 = 5.5;
        dVar15 = 10.5;
        dVar14 = 0.5;
        do {
          dVar12 = (double)MB_randRangeFloat((float)dVar24,(float)dVar13);
          local_140[0] = 0x4f008fff;
          local_140[1] = 0x4f008fff;
          local_140[3] = 0x4f006fff;
          dVar12 = (double)(float)(dVar12 * (double)g_FrameTime);
          local_140[2] = 0x4f007fff;
          local_140[4] = 0x2fffffff;
          local_140[5] = 0x2fffffff;
          local_140[6] = 0x2f005f7f;
          local_140[7] = 0x2f004f7f;
          local_140[8] = 0x2f003f7f;
          local_140[9] = 0x2f00004f;
          local_140[10] = 0x2f000000;
          local_140[0xb] = 0x3f000000;
          MB_randRangeFloat((float)dVar23,(float)dVar22);
          lVar9 = MB_randInt(6);
          uVar3 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2));
          lVar9 = MB_randInt(6);
          uVar4 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar19);
          local_e0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar17);
          local_e0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar18),iVar1);
          SpawnPart_11(uVar21,dVar12,uVar8 - 0x180,&DAT_00a15d30,uVar3,uVar4);
          iVar1 = (int)((double)animationSpeed * dVar15);
          local_e0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar16),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar19);
          local_e0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
          SpawnPart_11
                    (uVar21,(double)(float)(dVar12 * dVar14),uVar8 - 0x180,&DAT_00a15d30,0x7fffffff,
                     0xffffff);
          iVar10 = iVar10 + 1;
          local_e0 = (longlong)iVar10;
        } while ((double)local_e0 < dVar13);
      }
      vectorCompareGreaterThanOrEqualToFloatingPoint(auVar26,auVar25);
      iVar10 = 0;
      if ((bool)(bVar11 >> 1 & 1)) {
        dVar20 = 0.0;
        dVar19 = 6.0;
        dVar18 = -1.0;
        dVar17 = 1.0;
        dVar16 = 3.0;
        uVar21 = 0x411e848000000000;
        dVar15 = 30.5;
        dVar14 = 45.5;
        do {
          MB_randRangeFloat((float)dVar20,(float)dVar19);
          local_140[0xc] = 0x4f008fff;
          local_140[0xd] = 0x4f008fff;
          local_140[0x10] = 0x2fffffff;
          local_140[0x11] = 0x2fffffff;
          local_140[0xe] = 0x4f007fff;
          local_140[0xf] = 0x4f006fff;
          local_140[0x12] = 0x2f005f7f;
          local_140[0x13] = 0x2f004f7f;
          local_140[0x14] = 0x2f003f7f;
          local_140[0x15] = 0x2f00004f;
          local_140[0x16] = 0x2f000000;
          local_140[0x17] = 0x3f000000;
          MB_randRangeFloat((float)dVar18,(float)dVar17);
          MB_randRangeFloat((float)dVar18,(float)dVar17);
          MB_randRangeFloat((float)dVar18,(float)dVar17);
          MB_randRangeFloat((float)dVar20,(float)dVar16);
          lVar9 = MB_randInt(6);
          uVar3 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2) + 0x30);
          lVar9 = MB_randInt(6);
          uVar4 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2) + 0x48);
          iVar1 = (int)((double)animationSpeed * dVar14);
          local_e0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
          SpawnPart_8(uVar21,uVar8 - 0x170,uVar8 - 0x160,uVar3,uVar4);
          iVar10 = iVar10 + 1;
          local_e0 = (longlong)iVar10;
        } while ((double)local_e0 < dVar13);
      }
      DeleteMoby(moby);
    }
    else {
      dVar13 = (double)MB_randRangeFloat(10.0,15.0);
      dVar14 = (double)g_FrameTime;
      moby->state = '\x03';
      moby->collision = (ushort *)0x0;
      dVar18 = (double)(float)(dVar13 * dVar14);
      dVar14 = 0.0;
      uVar21 = 0x4056800000000000;
      dVar13 = (double)MB_randRangeSigned(0,0x4056800000000000);
      dVar15 = 0.01745329238474369;
      puVar7[2] = (float)(dVar13 * 0.01745329238474369) * g_FrameTime;
      dVar13 = (double)MB_randRangeSigned(dVar14,uVar21);
      puVar7[3] = (float)(dVar13 * dVar15) * g_FrameTime;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      puVar7[4] = fVar5;
      fVar6 = (moby->pos).y - g_heroPosition.y;
      puVar7[5] = fVar6;
      dVar17 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6);
      puVar7[6] = (moby->pos).z - g_heroPosition.z;
      puVar7[7] = (moby->pos).w;
      puVar7[6] = 0;
      dVar15 = (double)(fVar5 * (float)(dVar18 / dVar17));
      dVar16 = (double)(fVar6 * (float)(dVar18 / dVar17));
      dVar13 = dVar14;
      if (dVar14 - dVar17 < 0.0) {
        dVar13 = dVar15;
      }
      dVar19 = dVar14;
      if (dVar14 - dVar17 < 0.0) {
        dVar19 = dVar16;
      }
      if (dVar17 - dVar14 < 0.0) {
        dVar13 = dVar15;
      }
      if (dVar17 - dVar14 < 0.0) {
        dVar19 = dVar16;
      }
      puVar7[4] = (float)dVar13;
      puVar7[5] = (float)dVar19;
      MB_randSphere(dVar18,dVar18,uVar8 - 0x150);
      puVar7[4] = (float)puVar7[4] + local_150;
      puVar7[5] = (float)puVar7[5] + local_14c;
      puVar7[6] = ABS((float)puVar7[6] + local_148);
      puVar7[7] = (moby->pos).z;
    }
  }
  else if (bVar2 < 4) {
    dVar13 = (double)FastWrapRot((moby->rotation).x,(float)puVar7[2]);
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)FastWrapRot((moby->rotation).y,(float)puVar7[2]);
    (moby->rotation).y = (float)dVar13;
    puVar7[6] = -(DAT_0071f418 * 20.0 - (float)puVar7[6]);
    (moby->pos).x = (moby->pos).x + (float)puVar7[4];
    (moby->pos).y = (moby->pos).y + (float)puVar7[5];
    fVar5 = (moby->pos).z + (float)puVar7[6];
    (moby->pos).z = fVar5;
    if ((fVar5 < (float)puVar7[7] - 16.0) ||
       (iVar10 = CollSphere(0x3ff0000000000000,lVar9 + 0x10,&DAT_004a16b0,2,lVar9),
       iVar10 != 0)) {
      MB_SpawnExplosionSparks
                (0x3ff8000000000000,0,lVar9,lVar9 + 0x10,&DAT_004a16b0,0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x04a209c (0x14 bytes)
void M936_004a209c(void)

{
  DAT_008cbf5c = 0x10000;
  return;
}


