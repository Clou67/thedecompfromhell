// game/update/moby13.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x240678-0x242708
// shared update function UpdateMoby_{13_14_15_16}; registered for oClasses 13, 14, 15, 16
#include <string.h>
#include "game/update/moby13.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0240678 (0x314 bytes)
// strings: 00240658: '?333A ' (raw)

void M16_00240678(MobyInstance *param_1)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  GPiece<16> local_80;
  GPiece<40> local_70;
  
  MVar2 = param_1->oClass;
  if ((short)MVar2 < 0xf) {
    if (0xd < (short)MVar2) {
      iVar3 = 5;
      goto LAB_002406f4;
    }
  }
  else {
    if ((short)MVar2 < 0x10) {
      iVar3 = 0x14;
      goto LAB_002406f4;
    }
    if ((short)MVar2 < 0x11) {
      iVar3 = 0x32;
      goto LAB_002406f4;
    }
  }
  iVar3 = 1;
LAB_002406f4:
  if ((param_1->field80_0xb8 != (MobyInstance *)0x0) &&
     (bVar1 = param_1->field80_0xb8->field74_0xb1, (bVar1 & 0x80) == 0)) {
    *(short *)((uint)bVar1 * 4 + 0xa0e11e + Level * 0x100) =
         *(short *)((uint)bVar1 * 4 + 0xa0e11e + Level * 0x100) + (short)iVar3;
  }
  g_boltCount = g_boltCount + iVar3;
  g_totalBoltsCollected = g_totalBoltsCollected + iVar3;
  if ((*(char *)((int)param_1->pVar + 0x40) != '\0') ||
     ((g_boltMiningActive != 0 && (param_1 < MobyInstancePermEnd)))) {
    g_boltsMined = g_boltsMined + iVar3;
  }
  *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar3;
  RegisterHUDCallback
            (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
             &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
  dVar7 = 0.699999988079071;
  MB_randSphere
            ((double)(float)((double)g_FrameTime * 0.699999988079071),
             (double)g_FrameTime,local_80);
  MB_randInt(2);
  dVar4 = (double)MB_randRangeFloat(0.4,0.5);
  dVar6 = 25.5;
  uVar5 = 0;
  SpawnPart_53
            ((double)(float)(dVar4 * 0.20000000298023224),dVar4,0,local_70,
             (int)(animationSpeed * 25.5));
  SpawnPart_53
            ((double)(float)(dVar4 * 0.14000000059604645),(double)(float)(dVar4 * dVar7),uVar5,
             local_70,(int)((double)animationSpeed * dVar6));
  return;
}


// 0x02409e0 (0x52c bytes)
void M16_002409e0(int param_1,float *param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  float *pfVar8;
  int iVar9;
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
  double dVar20;
  undefined8 uVar21;
  GPiece<16> auStack_110;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  GPiece<48> auStack_e0;
  GPiece<32> auStack_b0;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  
  pfVar8 = *(float **)(param_1 + 0x78);
  if (pfVar8[0x17] == 0.0) {
    local_100 = *pfVar8;
    local_fc = pfVar8[1];
    local_f8 = pfVar8[2];
    local_f4 = pfVar8[3];
    local_f0 = pfVar8[4];
    local_ec = pfVar8[5];
    local_e8 = pfVar8[6];
    local_e4 = pfVar8[7];
  }
  else {
    MB_PlatformGetDelta(param_1,pfVar8[0x17],pfVar8,pfVar8 + 4,&local_100,&local_f0);
  }
  sVar7 = *(short *)(param_1 + 0xa6);
  if (sVar7 < 0xe) {
    if (0xc < sVar7) {
      dVar11 = 0.03999999910593033;
      dVar19 = 0.04874999821186066;
      dVar20 = 0.32499998807907104;
      uVar21 = 0x3fc3333340000000;
      goto LAB_00240b5c;
    }
  }
  else {
    uVar21 = 0x3fcd70a3e0000000;
    if (sVar7 < 0xf) {
      dVar11 = 0.029999999329447746;
      dVar19 = 0.02449999935925007;
      dVar20 = 0.3499999940395355;
      goto LAB_00240b5c;
    }
    if (sVar7 < 0x10) {
      dVar11 = 0.02500000037252903;
      dVar19 = 0.05624999850988388;
      dVar20 = 0.375;
      goto LAB_00240b5c;
    }
  }
  dVar11 = 0.017500000074505806;
  dVar19 = 0.13500000536441803;
  dVar20 = 0.30000001192092896;
  uVar21 = 0x3fd0000000000000;
LAB_00240b5c:
  dVar18 = -0.012500000186264515;
  if ((*(byte *)((int)pfVar8 + 0x55) & 1) == 0) {
    dVar11 = (double)FastDiffRots((double)pfVar8[0x14],dVar11);
    pfVar8[0x14] = (float)dVar11;
    dVar11 = (double)FastDiffRots((double)pfVar8[0x16],dVar18);
  }
  else {
    dVar11 = (double)FastWrapRot(pfVar8[0x14],(float)dVar11);
    pfVar8[0x14] = (float)dVar11;
    dVar11 = (double)FastWrapRot(pfVar8[0x16],(float)dVar18);
  }
  pfVar8[0x16] = (float)dVar11;
  memcpy(auStack_110,pfVar8 + 0x14,0x10);
  FastEulerToMtx(auStack_e0,auStack_110);
  FastEulerToMtx(auStack_b0,&local_f0);
  FastVecMtx4MultBatch3(param_1 + 0xc0,auStack_b0,auStack_e0);
  *(undefined4 *)(param_1 + 0x1c) = local_84;
  *(float *)(param_1 + 0x10) =
       (float)((double)local_90 * dVar19 +
              (double)(float)((double)*(float *)(param_1 + 0xc0) * dVar20)) + local_100;
  *(float *)(param_1 + 0x14) =
       (float)((double)local_8c * dVar19 +
              (double)(float)((double)*(float *)(param_1 + 0xc4) * dVar20)) + local_fc;
  *(float *)(param_1 + 0x18) =
       (float)((double)local_88 * dVar19 +
              (double)(float)((double)*(float *)(param_1 + 200) * dVar20)) + local_f8;
  if (param_2 != (float *)0x0) {
    *param_2 = local_100;
    param_2[1] = local_fc;
    param_2[2] = local_f8;
    param_2[3] = local_f4;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_f0;
    param_3[1] = local_ec;
    param_3[2] = local_e8;
    param_3[3] = local_e4;
  }
  if ((((*(char *)(param_1 + 0x20) == '\x03') && (pfVar8[0x17] != 0.0)) &&
      (*(char *)((int)pfVar8 + 0x57) == '\0')) &&
     (((cVar1 = *(char *)((int)pfVar8[0x17] + 0x20), cVar1 == -2 || (cVar1 == -3)) ||
      (iVar9 = CollSphere(uVar21,param_1 + 0x10,0,0x22,param_1), iVar9 == 0)))) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    dVar11 = 0.0;
    pfVar8[0xe] = 0.0;
    pfVar8[0xd] = 0.0;
    pfVar8[0xc] = 0.0;
    pfVar8[0xf] = 1.0;
    iVar9 = MB_GetPlatformParent(pfVar8[0x17]);
    if (iVar9 == 0) {
      pfVar8[10] = 0.0;
      pfVar8[9] = 0.0;
      pfVar8[8] = 0.0;
      dVar19 = dVar11;
      dVar20 = dVar11;
      dVar18 = dVar11;
      dVar12 = dVar11;
    }
    else {
      fVar2 = *(float *)(iVar9 + 0x10);
      pfVar8[8] = fVar2;
      fVar3 = *(float *)(iVar9 + 0x14);
      pfVar8[9] = fVar3;
      fVar4 = *(float *)(iVar9 + 0x18);
      pfVar8[10] = fVar4;
      dVar19 = (double)*(float *)(iVar9 + 0x1c);
      dVar20 = (double)fVar4;
      dVar18 = (double)fVar3;
      dVar12 = (double)fVar2;
    }
    pfVar8[0xb] = (float)dVar19;
    fVar4 = *(float *)(param_1 + 0xc4);
    fVar5 = *(float *)(param_1 + 0xc0);
    fVar6 = *(float *)(param_1 + 200);
    dVar19 = (double)g_FrameTime;
    pfVar8[0x17] = 0.0;
    dVar13 = (double)SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    dVar17 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar2 = (float)(dVar19 / dVar13);
    fVar3 = (float)(dVar19 / dVar17);
    dVar19 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar19 = (double)(local_8c * fVar2);
    }
    dVar10 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar10 = (double)(local_88 * fVar2);
    }
    dVar14 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar14 = (double)(local_90 * fVar2);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar19 = (double)(local_8c * fVar2);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar10 = (double)(local_88 * fVar2);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar14 = (double)(local_90 * fVar2);
    }
    dVar13 = dVar11;
    if (dVar11 - dVar17 < 0.0) {
      dVar13 = (double)(fVar4 * fVar3);
    }
    dVar15 = dVar11;
    if (dVar11 - dVar17 < 0.0) {
      dVar15 = (double)(fVar6 * fVar3);
    }
    dVar16 = dVar11;
    if (dVar11 - dVar17 < 0.0) {
      dVar16 = (double)(fVar5 * fVar3);
    }
    if (dVar17 - dVar11 < 0.0) {
      dVar13 = (double)(fVar4 * fVar3);
    }
    if (dVar17 - dVar11 < 0.0) {
      dVar15 = (double)(fVar6 * fVar3);
    }
    if (dVar17 - dVar11 < 0.0) {
      dVar16 = (double)(fVar5 * fVar3);
    }
    fVar2 = (float)(dVar12 + (double)(float)(dVar14 + dVar16));
    pfVar8[9] = (float)(dVar18 + (double)(float)(dVar19 + dVar13));
    pfVar8[10] = (float)(dVar20 + (double)(float)(dVar10 + dVar15));
    pfVar8[8] = fVar2;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar2;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + pfVar8[9];
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + pfVar8[10];
  }
  return;
}


// 0x0240f38 (0x360 bytes)
// inlined: FastRSqrt @0x2411ac
undefined8
M16_00240f38(double param_1,double param_2,MobyInstance *param_3,int param_4)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<32> auStack_80;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  
  pvVar2 = param_3->pVar;
  if (param_3->state == '\x04') {
    uVar9 = 0;
  }
  else {
    if ((DAT_00f1559c + (int)(animationSpeed * 3.5) < worldUpdateTime) ||
       (worldUpdateTime < DAT_00f1559c)) {
      DAT_00f1559c = worldUpdateTime;
      PlayMobySound(0,0x20,param_3);
    }
    else {
      dVar12 = 0.0;
      dVar11 = 30.0;
      if (param_1 == 0.0) {
        dVar10 = (double)MB_randRangeFloat(-30.0,30.0);
        param_1 = (double)(float)(dVar10 * 0.01745329238474369);
      }
      if (param_2 == dVar12) {
        dVar11 = (double)MB_randRangeFloat((float)dVar12,(float)dVar11);
        param_2 = (double)(float)(dVar11 * 0.01745329238474369);
      }
    }
    if (param_3->state == '\x03') {
      FastEulerToMtx(auStack_80,(int)pvVar2 + 0x10);
      dVar11 = (double)MB_randRangeFloat(3.0,7.0);
      fVar1 = SQRT(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c);
      if (fVar1 == 0.0) {
        *(float *)((int)pvVar2 + 0x20) = local_60;
        *(float *)((int)pvVar2 + 0x24) = local_5c;
        *(float *)((int)pvVar2 + 0x28) = local_58;
        *(undefined4 *)((int)pvVar2 + 0x28) = 0;
        *(undefined4 *)((int)pvVar2 + 0x24) = 0;
        *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      }
      else {
        fVar1 = (float)(dVar11 * (double)g_FrameTime) / fVar1;
        *(float *)((int)pvVar2 + 0x20) = local_60 * fVar1;
        *(float *)((int)pvVar2 + 0x24) = local_5c * fVar1;
        *(float *)((int)pvVar2 + 0x28) = local_58 * fVar1;
      }
      *(undefined4 *)((int)pvVar2 + 0x2c) = local_54;
    }
    fVar1 = 0.0;
    *(undefined4 *)((int)pvVar2 + 100) = 0;
    *(float *)((int)pvVar2 + 0x4c) = (float)param_1;
    *(float *)((int)pvVar2 + 0x48) = (float)param_2;
    fVar3 = *(float *)(param_4 + 0x10) - (param_3->pos).x;
    fVar4 = *(float *)(param_4 + 0x18) - (param_3->pos).z;
    fVar5 = *(float *)(param_4 + 0x14) - (param_3->pos).y;
    fVar6 = fVar4 * *(float *)((int)pvVar2 + 0x20) - fVar3 * *(float *)((int)pvVar2 + 0x28);
    fVar7 = fVar5 * *(float *)((int)pvVar2 + 0x28) - fVar4 * *(float *)((int)pvVar2 + 0x24);
    fVar5 = fVar3 * *(float *)((int)pvVar2 + 0x24) - fVar5 * *(float *)((int)pvVar2 + 0x20);
    *(int *)((int)pvVar2 + 0x60) = param_4;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
    fVar3 = fVar1;
    fVar4 = fVar1;
    if (SQRT(fVar8) != 0.0) {
      fVar1 = 1.0 / SQRT(fVar8);
      fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar4 = fVar7 * fVar1;
      fVar3 = fVar6 * fVar1;
      fVar1 = fVar5 * fVar1;
    }
    *(float *)((int)pvVar2 + 0x30) = fVar4;
    *(float *)((int)pvVar2 + 0x34) = fVar3;
    *(float *)((int)pvVar2 + 0x38) = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
    dVar11 = (double)MB_randRangeFloat(DAT_0078e0b0 * 0.333,DAT_0078e0b0);
    MB_AxisAngleToQuat
              ((float)(dVar11 * 0.01745329238474369) * g_FrameTime,
               (float *)((int)pvVar2 + 0x30),(float *)((int)pvVar2 + 0x30));
    uVar9 = 1;
    param_3->state = '\x04';
  }
  return uVar9;
}


// shared update function, registered for oClasses 13, 14, 15, 16
// 0x0241320 (0x13e8 bytes)
// strings: 002412a8: '?&ff_q333_q@' (raw) | 002412ac: '?333_q@' (raw)

/* Moby 13
   Moby 14
   Moby 15
   Moby 16 */

void UpdateMoby_13(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  MOBY_OCLASSES MVar18;
  ushort uVar19;
  float *pfVar20;
  int iVar21;
  MobyInstance *pMVar22;
  longlong lVar23;
  int iVar24;
  undefined2 uVar25;
  undefined1 uVar27;
  char cVar28;
  short sVar26;
  MobyModeBit MVar29;
  uint uVar30;
  float *pfVar31;
  longlong lVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<32> auStack_160;
  float local_140;
  MobyClass *local_13c;
  void *local_138;
  f32 local_134;
  float afStack_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  f32 local_114;
  Vec4 local_110;
  void *local_100;
  Manipulator *local_fc;
  void *local_f8;
  void *local_f4;
  GPiece<48> auStack_f0;
  GPiece<48> auStack_c0;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  ulonglong local_60;
  
  lVar23 = (longlong)(int)moby;
  pfVar20 = (float *)moby->pVar;
  uVar2 = moby->state;
  fVar4 = (moby->pos).x;
  bVar1 = g_gameMode != GAME_MODE_SCENE;
  fVar5 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  fVar7 = (moby->pos).w;
  if (bVar1) {
    MVar29 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    moby->enabled = '\x01';
    moby->modeBits = MVar29;
  }
  else {
    MVar29 = moby->modeBits | DISABLED;
    moby->enabled = '\0';
    moby->modeBits = MVar29;
  }
  if (uVar2 != '\x04') {
    if (uVar2 == '\x03') {
      fVar5 = fVar5 - g_heroPosition.y;
      fVar4 = fVar4 - g_heroPosition.x;
      fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
      if ((fVar4 < DAT_0096bf68) && (ABS(fVar6 - g_heroPosition.z) < DAT_0096bf6c)) {
        M16_00240f38(0,0,lVar23,g_heroMobyPtr);
        return;
      }
      if ((moby <= MobyInstancePermEnd) || ((199 < numSpawnableMobys || (fVar4 <= 48.0)))) {
        if ((!bVar1) && (pfVar20[0x17] == 0.0)) {
          if (*(char *)((int)pfVar20 + 0x57) == '\0') {
            return;
          }
          *(char *)((int)pfVar20 + 0x57) = *(char *)((int)pfVar20 + 0x57) + -1;
          return;
        }
      }
      else if (!bVar1) {
        DeleteMoby(moby);
        return;
      }
      M16_002409e0(lVar23,0,0);
      if (*(char *)((int)pfVar20 + 0x57) != '\0') {
        dVar33 = (double)FastIntToDouble();
        dVar41 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar20 + 0x56));
        local_60 = (ulonglong)*(byte *)((int)pfVar20 + 0x56);
        fVar4 = (float)(dVar33 / dVar41) - 0.5;
        (moby->pos).z = (float)local_60 * 0.0125 * -(fVar4 * fVar4 - 0.25) + (moby->pos).z;
        *(char *)((int)pfVar20 + 0x57) = *(char *)((int)pfVar20 + 0x57) + -1;
      }
      if (-1 < *(short *)(pfVar20 + 0x1b)) {
        fVar4 = (moby->transform).v1.y;
        iVar24 = (int)((longlong)(short)moby->oClass << 4);
        fVar5 = *(float *)(&DAT_0078dff4 + iVar24);
        fVar6 = *(float *)(iVar24 + 0x78dff0);
        fVar8 = *(float *)(s_ICON0_PNG_0078dff8 + iVar24);
        iVar21 = (int)((longlong)*(short *)(pfVar20 + 0x1b) << 5);
        fVar9 = (moby->transform).v0.y;
        fVar10 = (moby->transform).v1.z;
        fVar11 = (moby->transform).v2.y;
        fVar12 = (moby->transform).v1.w;
        fVar13 = (moby->transform).v0.z;
        fVar14 = (moby->transform).v0.w;
        fVar15 = (moby->transform).v2.z;
        fVar16 = (moby->transform).v2.w;
        fVar17 = *(float *)(s_ICON0_PNG_0078dff8 + iVar24 + 4);
        *(float *)((int)&DAT_0095ee40 + iVar21) =
             (moby->transform).v2.x * fVar8 +
             (moby->transform).v0.x * fVar6 + (moby->transform).v1.x * fVar5 + (moby->pos).x;
        *(float *)((int)&DAT_0095ee44 + iVar21) =
             fVar11 * fVar8 + fVar9 * fVar6 + fVar4 * fVar5 + (moby->pos).y;
        fVar4 = (moby->pos).z;
        *(float *)((int)&DAT_0095ee4c + iVar21) =
             fVar16 * fVar8 + fVar14 * fVar6 + fVar12 * fVar5 + fVar17;
        *(float *)((int)&DAT_0095ee48 + iVar21) =
             fVar15 * fVar8 + fVar13 * fVar6 + fVar10 * fVar5 + fVar4;
        uVar30 = (int)moby - (int)g_MobyInstance;
        if ((int)*(short *)(&DAT_0095ee54 + (int)((longlong)*(short *)(pfVar20 + 0x1b) << 5)) ==
            ((int)uVar30 >> 8) + (uint)((int)uVar30 < 0 && (uVar30 & 0xff) != 0)) {
          return;
        }
        *(undefined2 *)(pfVar20 + 0x1b) = 0xffff;
        return;
      }
      sVar26 = *(short *)((int)pfVar20 + 0x6e) + -1;
      *(short *)((int)pfVar20 + 0x6e) = sVar26;
      if (0 < sVar26) {
        return;
      }
      iVar24 = (int)((longlong)(short)moby->oClass << 4);
      fVar4 = *(float *)(&DAT_0078dff4 + iVar24);
      fVar5 = *(float *)(iVar24 + 0x78dff0);
      fVar6 = *(float *)(s_ICON0_PNG_0078dff8 + iVar24);
      uVar25 = ImpactSprite_Add
                         (0x3ff6666660000000,
                          CONCAT44((moby->transform).v2.x * fVar6 +
                                   (moby->transform).v0.x * fVar5 + (moby->transform).v1.x * fVar4 +
                                   (moby->pos).x,
                                   (moby->transform).v2.y * fVar6 +
                                   (moby->transform).v0.y * fVar5 + (moby->transform).v1.y * fVar4 +
                                   (moby->pos).y),
                          CONCAT44((moby->transform).v2.z * fVar6 +
                                   (moby->transform).v0.z * fVar5 + (moby->transform).v1.z * fVar4 +
                                   (moby->pos).z,
                                   (moby->transform).v2.w * fVar6 +
                                   (moby->transform).v0.w * fVar5 + (moby->transform).v1.w * fVar4 +
                                   *(float *)(s_ICON0_PNG_0078dff8 + iVar24 + 4)));
      *(undefined2 *)(pfVar20 + 0x1b) = uVar25;
      local_60 = (ulonglong)(int)(animationSpeed * 600.5);
      uVar25 = MB_randRange((int)(animationSpeed * 300.5),(int)(animationSpeed * 600.5));
      *(undefined2 *)((int)pfVar20 + 0x6e) = uVar25;
      return;
    }
    if (uVar2 == '\x02') {
      M16_002409e0(lVar23,&local_140,0);
      dVar37 = 0.25;
      local_138 = (void *)((float)local_138 + 0.25);
      MB_MtxToEuler((int)(lVar23 + 0xc0),(MobyInstance *)(auStack_160 + 0x10));
      MB_EulerToQuat(afStack_130,(Vec3 *)(auStack_160 + 0x10));
      dVar33 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar20 + 0x57));
      dVar40 = (double)(float)(1.0 / dVar33);
      dVar33 = (double)FastIntToDouble
                                 (dVar33,0x3ff0000000000000,*(undefined1 *)((int)pfVar20 + 0x57));
      dVar41 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar20 + 0x56));
      dVar39 = (double)(float)(dVar33 / dVar41);
      pfVar31 = pfVar20 + 0xc;
      FastSlerp(dVar40,pfVar31,pfVar31,afStack_130);
      dVar33 = (double)(moby->pos).x;
      dVar41 = (double)(moby->pos).y;
      dVar40 = (double)(moby->pos).z;
      (moby->pos).w = local_134;
      fVar4 = (float)(dVar39 * (double)(float)((double)(float)local_138 - dVar40) + dVar40);
      (moby->pos).x = (float)(dVar39 * (double)(float)((double)local_140 - dVar33) + dVar33);
      (moby->pos).y = (float)(dVar39 * (double)(float)((double)(float)local_13c - dVar41) + dVar41);
      (moby->pos).z = fVar4;
      local_60 = (ulonglong)*(byte *)((int)pfVar20 + 0x56);
      (moby->pos).z =
           (float)local_60 * 0.025 *
           -(float)((double)(float)(dVar39 - 0.5) * (double)(float)(dVar39 - 0.5) - dVar37) + fVar4;
      FastQuaternionToMtx4(pfVar31,lVar23 + 0xc0);
      cVar28 = *(char *)((int)pfVar20 + 0x57) + -1;
      *(char *)((int)pfVar20 + 0x57) = cVar28;
      if (cVar28 != '\0') {
        return;
      }
      moby->state = '\x03';
      dVar33 = (double)MB_randRangeFloat(10.0,20.0);
      uVar27 = FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
      *(undefined1 *)((int)pfVar20 + 0x57) = uVar27;
      *(undefined1 *)((int)pfVar20 + 0x56) = uVar27;
      return;
    }
    if (uVar2 != '\x01') {
      if (uVar2 != '\0') {
        return;
      }
      moby->state = '\x03';
      moby->field46_0x73 = '\x14';
      moby->modeBits = MVar29 | LOCK_ROTATION;
      moby->updateDistance = ' ';
      moby->drawDistance = 0x20;
      iVar24 = MB_randInt(2);
      if (iVar24 == 0) {
        *(byte *)((int)pfVar20 + 0x55) = *(byte *)((int)pfVar20 + 0x55) | 1;
      }
      iVar24 = CollLine(local_190,local_180,0x22,0,0);
      if ((*(char *)(pfVar20 + 0x15) == '\0') && (iVar24 != 0)) {
        *pfVar20 = g_CollOutput.ip.x;
        pfVar20[1] = g_CollOutput.ip.y;
        pfVar20[2] = g_CollOutput.ip.z;
        fVar4 = g_CollOutput.ip.w;
        pfVar20[7] = 0.0;
        pfVar20[3] = fVar4;
        pfVar20[6] = 0.0;
        pfVar20[5] = 0.0;
        pfVar20[4] = 0.0;
        dVar33 = (double)FUN_005e8338((double)g_CollOutput.normal.x,(double)g_CollOutput.normal.y);
        pfVar20[6] = (float)dVar33;
        dVar33 = (double)FUN_005e8338((double)g_CollOutput.normal.z,
                                      (double)SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                                                   g_CollOutput.normal.y * g_CollOutput.normal.y));
        pMVar22 = g_CollOutput.pMoby;
        pfVar20[5] = (float)dVar33;
        if ((pMVar22 != (MobyInstance *)0x0) &&
           (iVar24 = MB_GetPlatformParent(), pMVar22 = g_CollOutput.pMoby, iVar24 != 0)) {
          pfVar20[0x17] = (float)g_CollOutput.pMoby;
          MB_PlatformWorldToLocal(lVar23,pMVar22,pfVar20,pfVar20 + 4,pfVar20,pfVar20 + 4);
        }
      }
      else {
        *pfVar20 = (moby->pos).x;
        pfVar20[1] = (moby->pos).y;
        pfVar20[2] = (moby->pos).z;
        fVar4 = (moby->pos).w;
        pfVar20[7] = 0.0;
        pfVar20[3] = fVar4;
        pfVar20[6] = 0.0;
        pfVar20[5] = 0.0;
        pfVar20[4] = 0.0;
      }
      dVar33 = (double)MB_randRot();
      pfVar20[0x14] = (float)dVar33;
      dVar33 = (double)MB_randRot();
      pfVar20[0x16] = (float)dVar33;
      pfVar20[0x1a] = (moby->pos).z;
      local_60 = (ulonglong)(int)(animationSpeed * 600.5);
      uVar25 = MB_randRange(0,(int)(animationSpeed * 600.5));
      *(undefined2 *)((int)pfVar20 + 0x6e) = uVar25;
      *(undefined2 *)(pfVar20 + 0x1b) = 0xffff;
      MVar18 = moby->oClass;
      if (0xe < (short)MVar18) {
        if ((short)MVar18 < 0x10) {
          moby->scale = moby->pClass->gScale * 0.75;
          return;
        }
        if (0x10 < (short)MVar18) {
          return;
        }
        moby->scale = moby->pClass->gScale * 0.6;
        return;
      }
      if ((short)MVar18 < 0xd) {
        return;
      }
      if (0xd < (short)MVar18) {
        moby->scale = moby->pClass->gScale * 0.7;
        return;
      }
      moby->scale = moby->pClass->gScale * 0.65;
      return;
    }
    pfVar20[10] = -(DAT_0071f418 * 10.8 - pfVar20[10]);
    (moby->pos).x = (moby->pos).x + pfVar20[8];
    (moby->pos).y = (moby->pos).y + pfVar20[9];
    (moby->pos).z = (moby->pos).z + pfVar20[10];
    FastQuaternionToMtx4(pfVar20 + 0xc,auStack_f0);
    lVar32 = lVar23 + 0xc0;
    FastVecMtx4MultBatch3(lVar32,auStack_f0,lVar32);
    pMVar22 = g_heroMobyPtr;
    MVar18 = moby->oClass;
    if ((short)MVar18 < 0xe) {
      if (0xc < (short)MVar18) {
        uVar34 = 0x3fc3333340000000;
        goto LAB_00241820;
      }
    }
    else {
      uVar34 = 0x3fcd70a3e0000000;
      if (((short)MVar18 < 0xf) || ((short)MVar18 < 0x10)) goto LAB_00241820;
    }
    uVar34 = 0x3fd0000000000000;
LAB_00241820:
    fVar4 = (moby->pos).z;
    if ((fVar4 < pfVar20[0x1a] - 2.0) && (fVar4 < g_heroPosition.z - 2.0)) {
      dVar33 = (double)MB_randRangeFloat(-15.0,15.0);
      M16_00240f38
                ((double)(float)(dVar33 * 0.01745329238474369),0,lVar23,pMVar22);
      return;
    }
    iVar24 = CollSphere(uVar34,lVar23 + 0x10);
    if (iVar24 == 0) {
      return;
    }
    *pfVar20 = g_CollOutput.ip.x;
    pfVar20[1] = g_CollOutput.ip.y;
    pfVar20[2] = g_CollOutput.ip.z;
    pfVar20[3] = g_CollOutput.ip.w;
    dVar41 = 0.0;
    pfVar20[7] = 0.0;
    pfVar20[6] = 0.0;
    pfVar20[5] = 0.0;
    pfVar20[4] = 0.0;
    dVar33 = (double)FUN_005e8338((double)g_CollOutput.normal.x,(double)g_CollOutput.normal.y);
    pfVar20[6] = (float)dVar33;
    dVar33 = (double)FUN_005e8338((double)g_CollOutput.normal.z,
                                  (double)SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                                               g_CollOutput.normal.y * g_CollOutput.normal.y));
    pfVar20[5] = (float)dVar33;
    fVar4 = (moby->pos).x - g_CollOutput.ip.x;
    fVar5 = (moby->pos).y - g_CollOutput.ip.y;
    fVar6 = (moby->pos).z - g_CollOutput.ip.z;
    FastVecReflect(pfVar20 + 8,pfVar20 + 8,local_170);
    fVar8 = (moby->pos).y - g_heroPosition.y;
    fVar9 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar9 * fVar9 + fVar8 * fVar8) < DAT_0096bf68) &&
       (ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf6c)) {
      if (g_heroHealth == 0) {
        return;
      }
      dVar33 = (double)MB_randRangeFloat(3.0,7.0);
      pMVar22 = g_heroMobyPtr;
      fVar5 = pfVar20[9];
      fVar6 = pfVar20[8];
      fVar8 = pfVar20[10];
      dVar37 = (double)SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar4 = (float)((double)(float)(dVar33 * (double)g_FrameTime) / dVar37);
      dVar33 = dVar41;
      if (dVar41 - dVar37 < 0.0) {
        dVar33 = (double)(fVar6 * fVar4);
      }
      dVar40 = dVar41;
      if (dVar41 - dVar37 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      dVar39 = dVar41;
      if (dVar41 - dVar37 < 0.0) {
        dVar39 = (double)(fVar8 * fVar4);
      }
      if (dVar37 - dVar41 < 0.0) {
        dVar33 = (double)(fVar6 * fVar4);
      }
      if (dVar37 - dVar41 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      if (dVar37 - dVar41 < 0.0) {
        dVar39 = (double)(fVar8 * fVar4);
      }
      pfVar20[8] = (float)dVar33;
      pfVar20[9] = (float)dVar40;
      pfVar20[10] = (float)dVar39;
      M16_00240f38(dVar41,dVar41,lVar23,pMVar22);
      return;
    }
    dVar33 = (double)FUN_005e8338((double)fVar6,(double)SQRT(fVar4 * fVar4 + fVar5 * fVar5));
    dVar41 = 0.7853981852531433;
    if (0.7853981852531433 <= dVar33) {
      return;
    }
    dVar33 = (double)FUN_005e8338((double)g_CollOutput.normal.z,
                                  (double)SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                                               g_CollOutput.normal.y * g_CollOutput.normal.y));
    if (dVar41 <= dVar33) {
      return;
    }
    moby->state = '\x02';
    dVar33 = (double)MB_randRangeFloat(30.0,40.0);
    uVar27 = FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
    *(undefined1 *)((int)pfVar20 + 0x57) = uVar27;
    *(undefined1 *)((int)pfVar20 + 0x56) = uVar27;
    if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
       (iVar24 = MB_GetPlatformParent(), pMVar22 = g_CollOutput.pMoby, iVar24 != 0)) {
      pfVar20[0x17] = (float)g_CollOutput.pMoby;
      MB_PlatformWorldToLocal(lVar23,pMVar22,pfVar20,pfVar20 + 4,pfVar20,pfVar20 + 4);
    }
    MB_MtxToEuler((int)lVar32,(MobyInstance *)auStack_160);
    MB_EulerToQuat(pfVar20 + 0xc,(Vec3 *)auStack_160);
    return;
  }
  if (*(short *)((int)pfVar20[0x18] + 0xa6) == 0) {
    local_120 = fVar4 - g_heroGroundPoint;
    local_11c = fVar5 - DAT_00969f84;
    local_118 = fVar6 - DAT_00969f88;
    local_114 = fVar7;
    FUN_005e825c(&local_120,&local_120,&g_heroGravityMtx);
    fVar4 = 0.0;
    if ((int)local_118 < 0) {
      fVar6 = SQRT(DAT_00969d08 * DAT_00969d08 +
                   DAT_00969d00 * DAT_00969d00 + DAT_00969d04 * DAT_00969d04);
      fVar5 = (g_FrameTime * 7.0) / fVar6;
      local_110.x = fVar4;
      if (0.0 - fVar6 < 0.0) {
        local_110.x = DAT_00969d00 * fVar5;
      }
      local_110.y = fVar4;
      if (0.0 - fVar6 < 0.0) {
        local_110.y = DAT_00969d04 * fVar5;
      }
      if (0.0 - fVar6 < 0.0) {
        fVar4 = DAT_00969d08 * fVar5;
      }
      if (fVar6 - 0.0 < 0.0) {
        local_110.x = DAT_00969d00 * fVar5;
      }
      if (fVar6 - 0.0 < 0.0) {
        local_110.y = DAT_00969d04 * fVar5;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar4 = DAT_00969d08 * fVar5;
      }
      local_110.x = local_110.x - pfVar20[8];
      local_110.y = local_110.y - pfVar20[9];
      local_110.w = DAT_00969d0c;
      local_110.z = fVar4 - pfVar20[10];
      ClampVec3Magnitude((double)(DAT_0071f418 * 50.0),&local_110);
      pfVar20[8] = pfVar20[8] + local_110.x;
      pfVar20[9] = pfVar20[9] + local_110.y;
      pfVar20[10] = pfVar20[10] + local_110.z;
      goto LAB_002423f0;
    }
  }
  fVar9 = DAT_0071f418;
  fVar4 = pfVar20[9];
  fVar5 = pfVar20[8];
  fVar6 = pfVar20[10];
  fVar8 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (DAT_0071f418 * 10.0 < fVar8) {
    fVar12 = (DAT_0071f418 * 10.0) / fVar8;
    fVar10 = 0.0;
    fVar11 = fVar10;
    if (0.0 - fVar8 < 0.0) {
      fVar11 = fVar6 * fVar12;
    }
    fVar13 = fVar10;
    if (0.0 - fVar8 < 0.0) {
      fVar13 = fVar4 * fVar12;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar10 = fVar5 * fVar12;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar11 = fVar6 * fVar12;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar13 = fVar4 * fVar12;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar10 = fVar5 * fVar12;
    }
    pfVar20[10] = fVar6 - fVar11;
    pfVar20[9] = fVar4 - fVar13;
    pfVar20[8] = fVar5 - fVar10;
  }
  Delt(g_FrameTime * 48.0,fVar9 * 16.0,pfVar20 + 0x19);
  if (g_FrameTime * 8.0 < DAT_00969e40) {
    fVar4 = 0.0;
    fVar8 = SQRT(DAT_00969de8 * DAT_00969de8 +
                 DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4);
    fVar6 = (-(g_FrameTime * 8.0 - DAT_00969e40) * 0.5) / fVar8;
    fVar5 = fVar4;
    if (0.0 - fVar8 < 0.0) {
      fVar5 = DAT_00969de8 * fVar6;
    }
    fVar9 = fVar4;
    if (0.0 - fVar8 < 0.0) {
      fVar9 = DAT_00969de4 * fVar6;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar4 = DAT_00969de0 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar5 = DAT_00969de8 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar9 = DAT_00969de4 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar4 = DAT_00969de0 * fVar6;
    }
    (moby->pos).z = (moby->pos).z + fVar5;
    (moby->pos).y = (moby->pos).y + fVar9;
    (moby->pos).x = (moby->pos).x + fVar4;
  }
LAB_002423f0:
  FastQuaternionToMtx4(pfVar20 + 0xc,auStack_c0);
  FastVecMtx4MultBatch3(lVar23 + 0xc0,auStack_c0,lVar23 + 0xc0);
  fVar4 = (moby->pos).x + pfVar20[8];
  dVar41 = (double)fVar4;
  (moby->pos).x = fVar4;
  fVar4 = (moby->pos).y + pfVar20[9];
  dVar37 = (double)fVar4;
  (moby->pos).y = fVar4;
  fVar4 = (moby->pos).z + pfVar20[10];
  dVar40 = (double)fVar4;
  (moby->pos).z = fVar4;
  fVar4 = (float)((double)DAT_00969db4 - dVar37);
  fVar5 = (float)((double)g_heroCGPos - dVar41);
  fVar6 = (float)((double)DAT_00969db8 - dVar40);
  dVar33 = (double)pfVar20[0x19];
  if ((double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <= dVar33) {
    M16_00240678(lVar23);
    if (moby < MobyInstancePermEnd) {
      bVar3 = moby->levelFlagIdx;
      uVar19 = moby->uid;
      (&g_CheckpointLive.objState[0])[(short)uVar19] = bVar3 + 2;
      if ((bVar3 == 0xff) || (((&DAT_00a202c0)[bVar3] != -1 && (g_LevelFlags[Level][bVar3] == -1))))
      {
        (&g_Checkpoint.objState[0])[(short)uVar19] = bVar3 + 2;
      }
    }
    DeleteMoby(moby);
  }
  else {
    dVar39 = 0.0;
    if ((pfVar20[0x13] != 0.0) || (pfVar20[0x12] != 0.0)) {
      local_f4 = (void *)0x0;
      local_100 = (void *)0x0;
      local_fc = (Manipulator *)pfVar20[0x12];
      dVar37 = (double)(DAT_00969d44 * fVar6 + DAT_00969d24 * fVar5 + DAT_00969d34 * fVar4);
      dVar33 = (double)(DAT_00969d40 * fVar6 + g_heroGravityMtx * fVar5 + DAT_00969d30 * fVar4
                       );
      dVar41 = (double)(DAT_00969d48 * fVar6 + DAT_00969d28 * fVar5 + DAT_00969d38 * fVar4);
      local_f8 = (void *)pfVar20[0x13];
      FastEulerToMtx(&local_90,&local_100);
      fVar6 = (float)((double)local_6c * dVar41 +
                     (double)(float)((double)local_8c * dVar33 +
                                    (double)(float)((double)local_7c * dVar37)));
      fVar8 = (float)((double)local_70 * dVar41 +
                     (double)(float)((double)local_90 * dVar33 +
                                    (double)(float)((double)local_80 * dVar37)));
      fVar9 = (float)((double)local_68 * dVar41 +
                     (double)(float)((double)local_88 * dVar33 +
                                    (double)(float)((double)local_78 * dVar37)));
      dVar33 = (double)pfVar20[0x19];
      dVar41 = (double)(moby->pos).x;
      dVar37 = (double)(moby->pos).y;
      dVar40 = (double)(moby->pos).z;
      fVar5 = DAT_00969d00 * fVar9 + g_heroMtx * fVar8 + DAT_00969cf0 * fVar6;
      fVar4 = DAT_00969d04 * fVar9 + DAT_00969ce4 * fVar8 + DAT_00969cf4 * fVar6;
      fVar6 = DAT_00969d08 * fVar9 + DAT_00969ce8 * fVar8 + DAT_00969cf8 * fVar6;
    }
    dVar38 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar8 = (float)(dVar33 / dVar38);
    dVar33 = dVar39;
    if (dVar39 - dVar38 < 0.0) {
      dVar33 = (double)(fVar6 * fVar8);
    }
    dVar35 = dVar39;
    if (dVar39 - dVar38 < 0.0) {
      dVar35 = (double)(fVar4 * fVar8);
    }
    dVar36 = dVar39;
    if (dVar39 - dVar38 < 0.0) {
      dVar36 = (double)(fVar5 * fVar8);
    }
    if (dVar38 - dVar39 < 0.0) {
      dVar33 = (double)(fVar6 * fVar8);
    }
    if (dVar38 - dVar39 < 0.0) {
      dVar35 = (double)(fVar4 * fVar8);
    }
    if (dVar38 - dVar39 < 0.0) {
      dVar36 = (double)(fVar5 * fVar8);
    }
    (moby->pos).z = (float)(dVar40 + dVar33);
    (moby->pos).y = (float)(dVar37 + dVar35);
    (moby->pos).x = (float)(dVar41 + dVar36);
  }
  return;
}


