// game/update/moby1077.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1b67d0-0x1b7020
#include "game/update/moby1077.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby112.h"
#include "idol/fastfunc.h"

// 0x01b67d0 (0xa0 bytes)
undefined8 FUN_001b67d0(int param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x20) == '\x01') && (g_standingOnMoby == param_1)) &&
     (g_framesNotGrounded == 0)) {
    *(undefined1 *)(param_1 + 0x20) = 2;
    if (*(char *)(param_1 + 0x53) != '\0') {
      MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x01b6870 (0x1c bytes)
bool FUN_001b6870(int param_1)

{
  return *(char *)(param_1 + 0x20) == '\x05';
}


// 0x01b688c (0x10 bytes)
void M1077_001b688c(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xb8) = 1;
  return;
}


// 0x01b689c (0x14 bytes)
void M1077_001b689c(void)

{
  DAT_00757f34 = 0x10000;
  return;
}


// 0x01b6918 (0x708 bytes)
/* Moby 1077 */

void UpdateMoby_1077(MobyInstance *moby)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar13;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar14;
  int iVar15;
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
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  undefined4 local_e0 [12];
  longlong local_b0;
  
  lVar9 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  iVar13 = FastDecTimerS32(pfVar2 + 4);
  if (iVar13 == 0) {
    dVar26 = 0.0;
    MB_randRangeFloat(0.0,2.0);
    MB_randRot();
    uVar4 = DAT_00757f64;
    uVar3 = DAT_00757f60;
    lVar14 = lVar9 + 0x10;
    dVar25 = 20.5;
    fVar6 = animationSpeed * 20.5;
    local_b0 = (longlong)(int)fVar6;
    uVar10 = FastDoubleToInt((double)DAT_00757f58);
    uVar11 = FastDoubleToInt((double)DAT_00757f5c);
    SpawnPart_4(lVar14,local_100,uVar3,uVar4,(int)fVar6,uVar10,uVar11,1);
    (moby->pos).x = (moby->pos).x + *pfVar2;
    (moby->pos).y = (moby->pos).y + pfVar2[1];
    (moby->pos).z = (moby->pos).z + pfVar2[2];
    iVar13 = CollLine(local_110,lVar14,0,lVar9,0);
    if (iVar13 != 0) {
      fVar6 = GameCamera.posY - (moby->pos).y;
      fVar7 = GameCamera.posX - (moby->pos).x;
      fVar8 = GameCamera.posZ - (moby->pos).z;
      iVar13 = 10;
      dVar24 = 8.0;
      dVar27 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      if (dVar27 < 8.0) {
        iVar13 = FastDoubleToInt(dVar27);
        iVar13 = iVar13 + 2;
      }
      dVar19 = dVar26;
      if (dVar27 - 7.0 < 0.0) {
        dVar19 = (double)(float)(7.0 - dVar27);
      }
      if (0 < iVar13) {
        iVar15 = 0;
        dVar23 = 10.0;
        uVar10 = 0x41186a0000000000;
        dVar22 = 15.5;
        dVar21 = 25.5;
        dVar20 = 30.5;
        do {
          dVar16 = (double)MB_randRangeFloat((float)dVar24,(float)dVar23);
          dVar17 = (double)g_FrameTime;
          local_e0[0] = 0x4f008fff;
          local_e0[1] = 0x4f008fff;
          local_e0[3] = 0x4f006fff;
          local_e0[4] = 0x2fffffff;
          local_e0[2] = 0x4f007fff;
          local_e0[5] = 0x2fffffff;
          dVar18 = (double)(float)(dVar16 * dVar17 - (double)(float)(dVar17 * dVar19));
          local_e0[6] = 0x2f005f7f;
          local_e0[7] = 0x2f004f7f;
          local_e0[8] = 0x2f003f7f;
          local_e0[9] = 0x2f00004f;
          local_e0[10] = 0x2f000000;
          local_e0[0xb] = 0x3f000000;
          lVar12 = MB_randInt(dVar16,dVar17,(double)(float)(dVar17 * dVar19),6);
          uVar3 = *(undefined4 *)((int)local_e0 + (int)(lVar12 << 2));
          lVar12 = MB_randInt(6);
          uVar4 = *(undefined4 *)((int)local_e0 + (int)(lVar12 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar25);
          local_b0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar22),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar20);
          local_b0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
          SpawnPart_11(uVar10,dVar18,lVar14,local_f0,uVar3,uVar4);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar13);
      }
      uVar5 = (int)g_FrameLoad >> 0x1f;
      uVar10 = 0x4010000000000000;
      if (((int)((uVar5 >> 1 ^ g_FrameLoad) - uVar5) < 0x3f733333) && (9.0 < dVar27)) {
        local_b0 = (longlong)(int)(animationSpeed * 15.5);
        FUN_001d4d88(0x4010000000000000,lVar9,lVar14,local_f0,uVar5,(int)(animationSpeed * 15.5),
                     0x7f,0x7f,0x7f);
        local_b0 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(uVar10,lVar9,lVar14,local_f0);
      }
      local_b0 = (longlong)(int)((double)animationSpeed * dVar25);
      FUN_001d4d88(uVar10,lVar9,lVar14,local_f0,0x30,(int)((double)animationSpeed * dVar25),0x7f,
                   0x40,0);
      local_b0 = (longlong)(int)(animationSpeed * 27.5);
      FUN_001d4d88(0x400c000000000000,lVar9,lVar14,local_f0,0x40,(int)(animationSpeed * 27.5),0x60,
                   0x10,0);
      local_b0 = (longlong)(int)(animationSpeed * 29.5);
      FUN_001d4d88(0x4008000000000000,lVar9,lVar14,local_f0,0x20,(int)(animationSpeed * 29.5),0x20,0
                   ,0);
      DamageSphereAtPos(0x3ff8000000000000,0x3ff0000000000000,dVar26,lVar9,lVar14);
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


