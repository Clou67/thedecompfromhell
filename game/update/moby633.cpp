// game/update/moby633.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3f3e00-0x3f5af8
// shared update function UpdateMoby_{633_773_988_989}; registered for oClasses 633, 773, 988, 989
#include <math.h>
#include "game/update/moby633.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby987.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// shared update function, registered for oClasses 633, 773, 988, 989
// 0x03f3e00 (0x1cf8 bytes)
// strings: 00a0ca34: 'None' | 003f3dd0: '?333A ' (raw)

/* Moby 633
   Moby 773
   Moby 988
   Moby 989 */

void UpdateMoby_633(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  ushort uVar6;
  float *pfVar7;
  void *pvVar8;
  f32 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte *pbVar13;
  float fVar14;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined8 uVar15;
  longlong lVar20;
  int in_r5;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  MobyInstance *pMVar26;
  ulonglong uVar24;
  longlong lVar25;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  float local_130;
  float local_12c;
  float local_120;
  float local_11c;
  float local_118;
  GPiece<16> local_110;
  float local_100;
  float local_fc;
  float local_f8;
  Vec4 local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  f32 local_b4;
  GPiece<64> auStack_b0;
  longlong local_70;
  
  lVar25 = (longlong)(int)moby;
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    pfVar7 = (float *)moby->pVar;
    dVar27 = (double)FastWrapRot((moby->rotation).x,pfVar7[0x14]);
    (moby->rotation).x = (float)dVar27;
    dVar27 = (double)FastWrapRot((moby->rotation).y,pfVar7[0x15]);
    (moby->rotation).y = (float)dVar27;
    dVar27 = (double)FastWrapRot((moby->rotation).z,pfVar7[0x16]);
    (moby->rotation).z = (float)dVar27;
    (moby->pos).x = (moby->pos).x + pfVar7[0x10];
    (moby->pos).y = (moby->pos).y + pfVar7[0x11];
    (moby->pos).z = (moby->pos).z + pfVar7[0x12];
    dVar27 = 10.800000190734863;
    pfVar7[0x12] = -(g_FrameTimeSq * 10.8 - pfVar7[0x12]);
    iVar16 = FastDecTimerS32(ZEXT48(pfVar7) + 0x68);
    pvVar8 = moby->pVar;
    if (iVar16 == 0) {
      return;
    }
    if ((ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf68) &&
       (fVar17 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar3 * fVar3 + fVar17 * fVar17) < DAT_0096bf6c)) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,
                          ZEXT48(pfVar7));
      *(undefined4 *)((uint)(pfVar7 + 0x1a) & 0xfffffffc) = uVar18;
      moby->state = '\x02';
      return;
    }
    if (moby->setByGroup == '\0') {
      uVar15 = FastDoubleToInt((double)(longlong)(animationSpeed * 20.5));
      dVar30 = (double)FastIntToDouble();
      dVar28 = (double)(float)(1.0 / dVar30);
      fVar17 = (moby->rotation).x;
      moby->setByGroup = moby->setByGroup + '\x01';
      dVar30 = (double)FastDiffRots((double)pfVar7[0xc],(double)fVar17);
      pfVar7[0x14] = (float)(dVar30 * dVar28);
      dVar30 = (double)FastDiffRots((double)pfVar7[0xd],(double)(moby->rotation).y);
      pfVar7[0x15] = (float)(dVar30 * dVar28);
      dVar30 = (double)FastDiffRots((double)pfVar7[0xe],(double)(moby->rotation).z);
      pfVar7[0x16] = (float)(dVar30 * dVar28);
      fVar3 = pfVar7[8] - (moby->pos).x;
      pfVar7[0x10] = fVar3;
      fVar4 = pfVar7[9] - (moby->pos).y;
      pfVar7[0x11] = fVar4;
      fVar17 = (moby->pos).z;
      pfVar7[0x13] = pfVar7[0xb];
      pfVar7[0x10] = (float)((double)fVar3 * dVar28);
      pfVar7[0x1a] = (float)uVar15;
      pfVar7[0x11] = (float)((double)fVar4 * dVar28);
      pfVar7[0x12] = (float)((double)(pfVar7[10] - fVar17) * dVar28);
      if ((pfVar7[0x1f] != 0.0) && (iVar16 = MB_GetPlatformParent(), iVar16 != 0)) {
        pfVar7[0x10] = pfVar7[0x10] + *(float *)(iVar16 + 0x10);
        pfVar7[0x11] = pfVar7[0x11] + *(float *)(iVar16 + 0x14);
        pfVar7[0x12] = pfVar7[0x12] + *(float *)(iVar16 + 0x18);
        dVar30 = (double)FastIntToDouble(uVar15);
        fVar17 = *(float *)(iVar16 + 0x10);
        fVar3 = *(float *)(iVar16 + 0x14);
        fVar4 = *(float *)(iVar16 + 0x18);
        pfVar7[8] = (float)((double)fVar17 * dVar30 + (double)pfVar7[8]);
        pfVar7[9] = (float)((double)fVar3 * dVar30 + (double)pfVar7[9]);
        pfVar7[10] = (float)((double)fVar4 * dVar30 + (double)pfVar7[10]);
        *pfVar7 = (float)((double)fVar17 * dVar30 + (double)*pfVar7);
        pfVar7[1] = (float)((double)fVar3 * dVar30 + (double)pfVar7[1]);
        pfVar7[2] = (float)((double)fVar4 * dVar30 + (double)pfVar7[2]);
      }
      pfVar7[0x12] = (float)((double)g_FrameTimeSq * dVar27) *
                     (float)(longlong)((int)(float)uVar15 >> 1) + pfVar7[0x12];
      return;
    }
    moby->state = '\x01';
    if (pfVar7[0x1f] != 0.0) {
      MB_PlatformWorldToLocal
                (lVar25,*(undefined4 *)((int)pvVar8 + 0x7c),pvVar8,(int)pvVar8 + 0x10,
                 (int)pvVar8 + 0x20,(int)pvVar8 + 0x30);
      return;
    }
    (moby->pos).x = pfVar7[8];
    (moby->pos).y = pfVar7[9];
    (moby->pos).z = pfVar7[10];
    (moby->pos).w = pfVar7[0xb];
    (moby->rotation).x = pfVar7[0xc];
    (moby->rotation).y = pfVar7[0xd];
    (moby->rotation).z = pfVar7[0xe];
    (moby->rotation).w = pfVar7[0xf];
    return;
  }
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      pvVar8 = moby->pVar;
      if (*(uint *)((int)pvVar8 + 0x78) == 0) {
        return;
      }
      FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x7c),&local_120,
                   (ulonglong)*(uint *)((int)pvVar8 + 0x78) + 0xe0);
      iVar16 = *(int *)((int)pvVar8 + 0x78);
      fVar10 = local_120 + *(float *)(iVar16 + 0x10);
      fVar17 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).z;
      fVar11 = local_11c + *(float *)(iVar16 + 0x14);
      local_130 = fVar10 - fVar17;
      fVar12 = local_118 + *(float *)(iVar16 + 0x18);
      local_12c = fVar11 - fVar3;
      fVar14 = fVar12 - fVar4;
      dVar27 = 0.0;
      if (*(int *)((int)pvVar8 + 100) != 0) {
        dVar30 = (double)FUN_005e8128((double)*(float *)((int)pvVar8 + 100));
        dVar28 = (double)cosf(*(float *)((int)pvVar8 + 100));
        fVar17 = (moby->pos).x;
        fVar4 = (moby->pos).z;
        local_130 = (float)(dVar28 * (double)local_130 + (double)(float)(dVar30 * (double)local_12c)
                           );
        local_12c = (float)(dVar28 * (double)local_12c - (double)(float)(dVar30 * (double)local_130)
                           );
        fVar3 = (moby->pos).y;
      }
      dVar30 = (double)SQRT((fVar12 - fVar4) * (fVar12 - fVar4) +
                            (fVar10 - fVar17) * (fVar10 - fVar17) +
                            (fVar11 - fVar3) * (fVar11 - fVar3));
      FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x70),(int)pvVar8 + 0x40,(int)pvVar8 + 0x40);
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x48);
      FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x74),&local_130,&local_130);
      (moby->pos).x = (moby->pos).x + local_130 + g_heroFrameMove.x;
      (moby->pos).y = (moby->pos).y + local_12c + g_heroFrameMove.y;
      fVar17 = (moby->pos).z + fVar14 + g_heroFrameMove.z;
      (moby->pos).z = fVar17;
      fVar17 = fVar17 - DAT_00969f88;
      FUN_005e825c(local_110,local_110,&g_heroGravityMtx);
      if ((*(short *)(*(int *)((int)pvVar8 + 0x78) + 0xa6) == 0) && ((int)fVar17 < 1)) {
        FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x70),&local_100,&DAT_00969d00);
        local_f0.x = local_100 - *(float *)((int)pvVar8 + 0x40);
        local_f0.y = local_fc - *(float *)((int)pvVar8 + 0x44);
        local_f0.z = local_f8 - *(float *)((int)pvVar8 + 0x48);
        ClampVec3Magnitude((double)(DAT_00854460 * g_FrameTimeSq),&local_f0);
        *(float *)((int)pvVar8 + 0x40) = *(float *)((int)pvVar8 + 0x40) + local_f0.x;
        *(float *)((int)pvVar8 + 0x44) = *(float *)((int)pvVar8 + 0x44) + local_f0.y;
        *(float *)((int)pvVar8 + 0x48) = *(float *)((int)pvVar8 + 0x48) + local_f0.z;
      }
      else {
        Delt((float)dVar27,DAT_00854460 * g_FrameTimeSq,(float *)((int)pvVar8 + 0x70));
        Delt(DAT_0085445c * g_FrameTime,DAT_00854460 * g_FrameTimeSq,
                       (float *)((int)pvVar8 + 0x74));
      }
      dVar28 = (double)*(float *)((int)pvVar8 + 0x74);
      if (dVar30 < (double)*(float *)((int)pvVar8 + 0x74)) {
        *(float *)((int)pvVar8 + 0x74) = (float)dVar30;
        dVar28 = dVar30;
      }
      dVar28 = (double)(float)(dVar28 * (double)(longlong)(animationSpeed * 20.5));
      if (dVar28 <= dVar30) {
LAB_003f509c:
        FastVecMtx4MultBatch3(lVar25 + 0xc0,pvVar8,lVar25 + 0xc0);
        return;
      }
      fVar11 = fVar11 - (moby->pos).y;
      fVar10 = fVar10 - (moby->pos).x;
      fVar12 = fVar12 - (moby->pos).z;
      dVar30 = (double)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
      if (0.5199999809265137 < dVar30) {
        fVar17 = (float)(dVar30 + dVar28);
        if (DAT_010cbbd0 != 0) {
          local_70 = (longlong)((fVar17 * 128.0) / (float)(dVar28 * 2.0));
          moby->alpha = (s8)local_70;
        }
        if (DAT_00854494 != 0) {
          moby->scale = (moby->pClass->gScale * DAT_00854488 * fVar17) / (float)(dVar28 * 2.0);
        }
        goto LAB_003f509c;
      }
      MVar5 = moby->oClass;
      if ((short)MVar5 < 0x3dc) {
        if (MVar5 == 0x305) {
          pcVar19 = g_CollectedGoldBolts;
          g_CollectedGoldBolts[Level * 4 + (uint)(byte)moby->setByGroup] = '\x01';
          iVar16 = MB_CountGoldBolts();
          if (iVar16 == 0x28) {
            MB_UnlockTrophy(BOLT_COMMANDO);
          }
          lVar25 = 0;
          lVar20 = 0x14;
          do {
            lVar25 = lVar25 + 1 +
                     (ZERO_MASK((uint)(byte)*pcVar19) & lVar25 - (lVar25 + 1));
            lVar21 = lVar25 + 1;
            lVar21 = lVar21 + (ZERO_MASK((uint)((byte *)pcVar19)[1]) &
                              lVar25 - lVar21);
            pbVar13 = (byte *)pcVar19 + 3;
            lVar22 = lVar21 + 1;
            lVar22 = lVar22 + (ZERO_MASK((uint)((byte *)pcVar19)[2]) &
                              lVar21 - lVar22);
            lVar25 = lVar22 + 1;
            pcVar19 = (char *)((byte *)pcVar19 + 4);
            lVar25 = lVar25 + (ZERO_MASK((uint)*pbVar13) & lVar22 - lVar25);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          iVar16 = (int)(lVar25 * 0x21) * 4 + (int)lVar25 * -0x20;
          goto LAB_003f4dec;
        }
      }
      else {
        if ((short)MVar5 < 0x3dd) {
          iVar16 = 5;
          goto LAB_003f4dec;
        }
        if ((short)MVar5 < 0x3de) {
          iVar16 = 10;
          goto LAB_003f4dec;
        }
      }
      iVar16 = 1;
LAB_003f4dec:
      dVar31 = 0.699999988079071;
      MB_randSphere
                ((double)(float)((double)g_FrameTime * 0.699999988079071),
                 (double)g_FrameTime,&local_e0);
      local_d0 = local_e0 * 10.0 + (moby->pos).x;
      local_cc = local_dc * 10.0 + (moby->pos).y;
      local_c8 = local_d8 * 10.0 + (moby->pos).z;
      local_c4 = local_d4;
      MB_randInt(2);
      dVar30 = (double)MB_randRangeFloat(0.4,0.5);
      dVar28 = 25.5;
      local_70 = (longlong)(int)(animationSpeed * 25.5);
      SpawnPart_53
                ((double)(float)(dVar30 * 0.20000000298023224),dVar30,dVar27,&local_d0,
                 (int)(animationSpeed * 25.5));
      local_70 = (longlong)(int)((double)animationSpeed * dVar28);
      SpawnPart_53
                ((double)(float)(dVar30 * 0.14000000059604645),(double)(float)(dVar30 * dVar31),
                 dVar27,&local_d0,(int)((double)animationSpeed * dVar28));
      if ((moby->field80_0xb8 != (MobyInstance *)0x0) &&
         (bVar2 = moby->field80_0xb8->field74_0xb1, (bVar2 & 0x80) == 0)) {
        *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) =
             *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) + (short)iVar16;
      }
      g_boltCount = g_boltCount + iVar16;
      g_totalBoltsCollected = g_totalBoltsCollected + iVar16;
      *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar16;
      RegisterHUDCallback
                (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                 &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
      if (moby < MobyInstancePermEnd) {
        bVar2 = moby->levelFlagIdx;
        uVar6 = moby->uid;
        (&g_CheckpointLive.objState[0])[(short)uVar6] = bVar2 + 2;
        if ((bVar2 == 0xff) ||
           (((&g_CheckpointLevelFlags)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1)))) {
          (&g_Checkpoint.objState[0])[(short)uVar6] = bVar2 + 2;
        }
      }
      DeleteMoby(moby);
      return;
    }
    if (uVar1 == '\x02') {
      pvVar8 = moby->pVar;
      FastEulerToMtx1(auStack_b0,(int)pvVar8 + 0x10);
      iVar16 = FastDecTimerS32((int)pvVar8 + 0x68);
      if (iVar16 != 0) {
        pvVar8 = moby->pVar;
        FUN_005e7f98(0x3ff0000000000000,local_140,local_140);
        FUN_005e8f4c(local_140,local_150,local_140);
        dVar30 = 0.01745329238474369;
        MB_MtxFromDir
                  ((double)(DAT_00854468 * 0.017453292 * g_FrameTime),pvVar8,local_140);
        fVar17 = g_FrameTime;
        moby->modeBits = moby->modeBits | LOCK_ROTATION;
        dVar27 = 8.0;
        FUN_005e7f98((double)(fVar17 * 8.0),(int)pvVar8 + 0x40,local_150);
        *(float *)((int)pvVar8 + 0x70) = (float)((double)g_FrameTime * dVar27);
        dVar27 = 0.0;
        *(undefined4 *)((int)pvVar8 + 0x74) = 0;
        pMVar26 = g_heroMobyPtr;
        *(undefined4 *)((int)pvVar8 + 0x7c) = 0x3f000000;
        *(MobyInstance **)((int)pvVar8 + 0x78) = pMVar26;
        local_70 = (longlong)(int)(animationSpeed * 3.5);
        if (DAT_010cbbd4 + (int)(animationSpeed * 3.5) < worldUpdateTime) {
          DAT_010cbbd4 = worldUpdateTime;
          PlayMobySound(0,0x20,moby);
        }
        else {
          dVar27 = (double)MB_randRangeFloat(-30.0,30.0);
          dVar27 = (double)(float)(dVar27 * dVar30);
        }
        *(float *)((int)pvVar8 + 100) = (float)dVar27;
        moby->state = '\x03';
        return;
      }
      uVar23 = *(uint *)((int)pvVar8 + 0x68);
      iVar16 = (int)(animationSpeed * 10.5);
      local_70 = (longlong)iVar16;
      if (iVar16 < (int)uVar23) {
        iVar16 = 0x3f0000;
        local_70 = (longlong)
                   (int)(uVar23 + (((int)uVar23 >> 3) + (uint)((int)uVar23 < 0 && (uVar23 & 7) != 0)
                                  ) * -8 + -4);
        dVar27 = (double)FUN_005e8128((double)((float)local_70 * 0.7854));
        dVar27 = (double)FastWrapRot
                                   (*(float *)((int)pvVar8 + 0x60),
                                    (float)(dVar27 * 0.1745329201221466));
        fVar17 = DeltAng((float)dVar27,0.5235988,(float *)((int)pvVar8 + 0x60),iVar16,
                                   in_r5,0);
        dVar27 = (double)fVar17;
      }
      else {
        dVar27 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar27 = (double)FastWrapRot((float)dVar27,1.5707964);
        dVar30 = 0.0872664600610733;
        DeltAng((float)dVar27,0.08726646,(float *)((int)pvVar8 + 0x60),iVar16,in_r5,0);
        dVar27 = (double)FastSubRots(*(float *)((int)pvVar8 + 0x60),(float)dVar27);
        if (dVar27 < dVar30) {
          *(undefined4 *)((int)pvVar8 + 0x68) = 0;
        }
      }
      M987_003f3388(dVar27,lVar25,lVar25 + 0x10,lVar25 + 0x40);
      return;
    }
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') {
        return;
      }
      MVar5 = moby->oClass;
      pfVar7 = (float *)moby->pVar;
      if ((short)MVar5 < 0x3dc) {
        if (MVar5 == TREE) {
          moby->scale = moby->pClass->gScale * DAT_00854488;
        }
      }
      else if ((short)MVar5 < 0x3dd) {
        moby->scale = moby->pClass->gScale * DAT_0085448c;
      }
      else if ((short)MVar5 < 0x3de) {
        moby->scale = moby->pClass->gScale * DAT_00854490;
      }
      pMVar26 = (MobyInstance *)0x0;
      uVar23 = worldUpdateTime - DAT_010cbbd4;
      fVar17 = (moby->pos).x;
      lVar20 = (longlong)worldUpdateTime;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE|DISABLED);
      DAT_010cbbd4 = DAT_010cbbd4 + ((uint)(lVar20 - DAT_010cbbd4 >> 0x3f) & uVar23);
      *pfVar7 = fVar17;
      pfVar7[1] = (moby->pos).y;
      pfVar7[2] = (moby->pos).z;
      pfVar7[3] = (moby->pos).w;
      if (*(short *)((int)pfVar7 + 0x6e) == 0) {
        FUN_005e7f98(0x3fb99999a0000000,local_170,lVar25 + 0xe0);
        iVar16 = CollLine(local_170,local_160,2,0,0);
        if (iVar16 == 0) {
          *pfVar7 = (moby->pos).x;
          pfVar7[1] = (moby->pos).y;
          pfVar7[2] = (moby->pos).z;
          pfVar7[3] = (moby->pos).w;
        }
        else {
          *pfVar7 = g_CollOutput.ip.x;
          pfVar7[1] = g_CollOutput.ip.y;
          pfVar7[2] = g_CollOutput.ip.z;
          pfVar7[3] = g_CollOutput.ip.w;
          pMVar26 = g_CollOutput.pMoby;
          FUN_005e7f98(0x3ff0000000000000,local_180,0xa10980);
        }
      }
      M987_003f3c7c(lVar25,local_180);
      dVar27 = (double)MB_randRot();
      pfVar7[0x18] = (float)dVar27;
      pfVar7[0x19] = (moby->rotation).x;
      M987_003f3388(lVar25,lVar25 + 0x10,lVar25 + 0x40);
      if ((pMVar26 != (MobyInstance *)0x0) &&
         (iVar16 = MB_GetPlatformParent(pMVar26), iVar16 != 0)) {
        pfVar7[0x1f] = (float)pMVar26;
        MB_PlatformWorldToLocal(lVar25,pMVar26,pfVar7,pfVar7 + 4,pfVar7 + 8,pfVar7 + 0xc);
      }
      moby->state = '\x01';
      *(undefined2 *)(pfVar7 + 0x1b) = 0;
      MB_randRangeFloat(0.0,(float)(longlong)(animationSpeed * 600.5));
      fVar17 = (float)FastDoubleToInt();
      pfVar7[0x1c] = fVar17;
      pfVar7[0x1e] = (float)PTR_DAT_0085449c;
      return;
    }
    pvVar8 = moby->pVar;
    uVar24 = ZEXT48(pvVar8);
    if ((*(int *)((int)pvVar8 + 0x7c) != 0) &&
       (MB_PlatformGetDelta
                  (lVar25,*(int *)((int)pvVar8 + 0x7c),uVar24 + 0x20,uVar24 + 0x30,uVar24,
                   uVar24 + 0x10), 0x7f < *(byte *)(*(int *)((int)pvVar8 + 0x7c) + 0x20))) {
      pvVar8 = moby->pVar;
      *(undefined4 *)((int)pvVar8 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x48) = 0;
      *(undefined4 *)((int)pvVar8 + 0x44) = 0;
      *(undefined4 *)((int)pvVar8 + 0x40) = 0;
      MB_MtxFromDir
                ((double)(DAT_0085446c * 0.017453292 * g_FrameTime),pvVar8,lVar25 + 0xd0);
      moby->state = '\x04';
      return;
    }
    if ((ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf68) &&
       (fVar17 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar3 * fVar3 + fVar17 * fVar17) < DAT_0096bf6c)) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,uVar24)
      ;
      *(undefined4 *)((int)pvVar8 + 0x68U & 0xfffffffc) = uVar18;
      moby->state = '\x02';
    }
    if (moby->enabled == '\0') {
      if (moby <= MobyInstancePermEnd) {
        return;
      }
      fVar17 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar3 * fVar3 + fVar17 * fVar17) <= 24.0) {
        return;
      }
      DeleteMoby(moby);
      return;
    }
    MVar5 = moby->oClass;
    if ((short)MVar5 < 0x3dd) {
      if (0x3db < (short)MVar5) {
        dVar30 = 0.01745329238474369;
        dVar27 = (double)FastWrapRot
                                   (*(float *)((int)pvVar8 + 0x60),
                                    DAT_00854478 * 0.017453292 * g_FrameTime);
        *(float *)((int)pvVar8 + 0x60) = (float)dVar27;
        dVar27 = (double)FastWrapRot
                                   (*(float *)((int)pvVar8 + 100),
                                    (float)((double)DAT_0085447c * dVar30) * g_FrameTime);
        *(float *)((int)pvVar8 + 100) = (float)dVar27;
        goto LAB_003f4428;
      }
    }
    else if ((short)MVar5 < 0x3de) {
      dVar30 = 0.01745329238474369;
      dVar27 = (double)FastWrapRot
                                 (*(float *)((int)pvVar8 + 0x60),
                                  DAT_00854480 * 0.017453292 * g_FrameTime);
      *(float *)((int)pvVar8 + 0x60) = (float)dVar27;
      dVar27 = (double)FastWrapRot
                                 (*(float *)((int)pvVar8 + 100),
                                  (float)((double)DAT_00854484 * dVar30) * g_FrameTime);
      *(float *)((int)pvVar8 + 100) = (float)dVar27;
      goto LAB_003f4428;
    }
    dVar30 = 0.01745329238474369;
    dVar27 = (double)FastWrapRot
                               (*(float *)((int)pvVar8 + 0x60),
                                DAT_00854470 * 0.017453292 * g_FrameTime);
    *(float *)((int)pvVar8 + 0x60) = (float)dVar27;
    dVar27 = (double)FastWrapRot
                               (*(float *)((int)pvVar8 + 100),
                                (float)((double)DAT_00854474 * dVar30) * g_FrameTime);
    *(float *)((int)pvVar8 + 100) = (float)dVar27;
LAB_003f4428:
    M987_003f3388(lVar25,lVar25 + 0x10,lVar25 + 0x40);
    if (*(short *)((int)pvVar8 + 0x6c) == 0) {
      iVar16 = FastDecTimerS32(uVar24 + 0x70);
      if (iVar16 == 0) {
        return;
      }
      *(undefined4 *)((int)pvVar8 + 0x70) = 0x18;
      dVar27 = (double)MB_randRot();
      *(float *)((int)pvVar8 + 0x74) = (float)dVar27;
      *(undefined2 *)((int)pvVar8 + 0x6c) = 1;
      return;
    }
    dVar27 = (double)FastWrapRot
                               (*(float *)((int)pvVar8 + 0x74),g_FrameTime * 5.2359877);
    *(float *)((int)pvVar8 + 0x74) = (float)dVar27;
    if (*(int *)((int)pvVar8 + 0x70) < 0xd) {
      iVar16 = *(int *)((int)pvVar8 + 0x78) + -0x5000000;
    }
    else {
      iVar16 = *(int *)((int)pvVar8 + 0x78) + 0x5000000;
    }
    *(int *)((int)pvVar8 + 0x78) = iVar16;
    iVar16 = FastDecTimerS32(uVar24 + 0x70);
    if (iVar16 != 0) {
      *(undefined2 *)((int)pvVar8 + 0x6c) = 0;
      MB_randRangeFloat
                ((float)(longlong)(animationSpeed * 300.5),(float)(longlong)(animationSpeed * 600.5)
                );
      uVar18 = FastDoubleToInt();
      *(undefined4 *)((int)pvVar8 + 0x70) = uVar18;
      return;
    }
    if (moby->enabled == '\0') {
      return;
    }
    if (DAT_00854498 == 0) {
      return;
    }
    RegisterMobyDraw(&PTR_M1382_003f5d90_0070dc68,moby);
    return;
  }
  pvVar8 = moby->pVar;
  lVar20 = lVar25 + 0xc0;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0x40);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x44);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x48);
  dVar27 = 10.800000190734863;
  *(float *)((int)pvVar8 + 0x48) = -(g_FrameTimeSq * 10.8 - *(float *)((int)pvVar8 + 0x48));
  FastVecMtx4MultBatch3(lVar20,pvVar8,lVar20);
  fVar9 = (moby->pos).z;
  fVar17 = (moby->pos).z;
  uVar23 = (int)fVar9 >> 0x1f;
  if ((((0x3fffffff < (int)((uVar23 >> 1 ^ (uint)fVar9) - uVar23)) &&
       (fVar9 = (moby->pos).x, uVar23 = (int)fVar9 >> 0x1f,
       iVar16 = (uVar23 >> 1 ^ (uint)fVar9) - uVar23, 0x3fffffff < iVar16 && iVar16 < 0x43ff0001))
      && (fVar9 = (moby->pos).y, uVar23 = (int)fVar9 >> 0x1f,
         iVar16 = (uVar23 >> 1 ^ (uint)fVar9) - uVar23, iVar16 < 0x43ff0001)) &&
     (0x3fffffff < iVar16)) {
    if ((fVar17 < *(float *)((int)pvVar8 + 0x60) - 4.0) && (fVar17 < g_heroPosition.z - 4.0)) {
      pvVar8 = moby->pVar;
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      *(float *)((int)pvVar8 + 0x10) = g_heroRotation.x;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      *(float *)((int)pvVar8 + 0x14) = g_heroRotation.y;
      *(float *)((int)pvVar8 + 0x18) = g_heroRotation.z;
      *(float *)((int)pvVar8 + 0x1c) = g_heroRotation.w;
      auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,
                          ZEXT48(pvVar8));
      *(undefined4 *)((int)pvVar8 + 0x68U & 0xfffffffc) = uVar18;
      moby->state = '\x02';
      return;
    }
    iVar16 = CollSphere(0x3fd0000000000000,lVar25 + 0x10,&DAT_003f3d58,0x22,lVar25);
    if (iVar16 == 0) {
      return;
    }
    local_c0 = (moby->pos).x - g_CollOutput.ip.x;
    local_bc = (moby->pos).y - g_CollOutput.ip.y;
    local_b8 = (moby->pos).z - g_CollOutput.ip.z;
    local_b4 = (moby->pos).w;
    FastVecReflect((int)pvVar8 + 0x40,(int)pvVar8 + 0x40,&local_c0);
    dVar30 = (double)FUN_005e8338((double)local_b8,
                                  (double)SQRT(local_c0 * local_c0 + local_bc * local_bc));
    dVar28 = 0.7853981852531433;
    if (0.7853981852531433 <= dVar30) {
      return;
    }
    dVar30 = (double)FUN_005e8338((double)g_CollOutput.normal.z,
                                  (double)SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                                               g_CollOutput.normal.y * g_CollOutput.normal.y));
    if (dVar28 <= dVar30) {
      return;
    }
    pfVar7 = (float *)moby->pVar;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE
          |NO_UPDATE|DISABLED);
    dVar30 = (double)MB_randRangeFloat(-10.0,10.0);
    uVar15 = FastDoubleToInt
                       ((double)(animationSpeed * (float)((double)DAT_008544a0 + dVar30)));
    dVar30 = (double)FastIntToDouble();
    uVar29 = 0x3ff0000000000000;
    dVar28 = (double)(float)(1.0 / dVar30);
    *pfVar7 = g_CollOutput.ip.x;
    pfVar7[1] = g_CollOutput.ip.y;
    pfVar7[2] = g_CollOutput.ip.z;
    pfVar7[3] = g_CollOutput.ip.w;
    MB_MtxToEuler((int)lVar20,(MobyInstance *)&moby->rotation);
    FUN_005e7f98(uVar29,&local_c0,0xa10980);
    M987_003f3c7c(lVar25,&local_c0);
    dVar30 = (double)MB_randRot();
    pfVar7[0x18] = (float)dVar30;
    dVar30 = (double)MB_randRot();
    pfVar7[0x19] = (float)dVar30;
    M987_003f3388(lVar25,pfVar7 + 8,pfVar7 + 0xc);
    fVar3 = pfVar7[8] - (moby->pos).x;
    pfVar7[0x10] = fVar3;
    fVar4 = pfVar7[9] - (moby->pos).y;
    pfVar7[0x11] = fVar4;
    fVar17 = (moby->pos).z;
    pfVar7[0x13] = pfVar7[0xb];
    pfVar7[0x10] = (float)((double)fVar3 * dVar28);
    pfVar7[0x11] = (float)((double)fVar4 * dVar28);
    pfVar7[0x12] = (float)((double)(pfVar7[10] - fVar17) * dVar28);
    if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
       (iVar16 = MB_GetPlatformParent(), iVar16 != 0)) {
      pfVar7[0x10] = pfVar7[0x10] + *(float *)(iVar16 + 0x10);
      pfVar7[0x11] = pfVar7[0x11] + *(float *)(iVar16 + 0x14);
      pfVar7[0x12] = pfVar7[0x12] + *(float *)(iVar16 + 0x18);
      dVar30 = (double)FastIntToDouble(uVar15);
      fVar17 = *(float *)(iVar16 + 0x10);
      fVar3 = *(float *)(iVar16 + 0x14);
      fVar4 = *(float *)(iVar16 + 0x18);
      pfVar7[8] = (float)((double)fVar17 * dVar30 + (double)pfVar7[8]);
      pfVar7[9] = (float)((double)fVar3 * dVar30 + (double)pfVar7[9]);
      pfVar7[10] = (float)((double)fVar4 * dVar30 + (double)pfVar7[10]);
      *pfVar7 = (float)((double)fVar17 * dVar30 + (double)*pfVar7);
      pfVar7[1] = (float)((double)fVar3 * dVar30 + (double)pfVar7[1]);
      pfVar7[2] = (float)((double)fVar4 * dVar30 + (double)pfVar7[2]);
    }
    local_70 = (longlong)((int)(float)uVar15 >> 1);
    pfVar7[0x12] = (float)((double)g_FrameTimeSq * dVar27) * (float)local_70 + pfVar7[0x12];
    dVar27 = (double)FastDiffRots((double)pfVar7[0xc],(double)(moby->rotation).x);
    pfVar7[0x14] = (float)(dVar27 * dVar28);
    dVar27 = (double)FastDiffRots((double)pfVar7[0xd],(double)(moby->rotation).y);
    pfVar7[0x15] = (float)(dVar27 * dVar28);
    dVar27 = (double)FastDiffRots((double)pfVar7[0xe],(double)(moby->rotation).z);
    pfVar7[0x16] = (float)(dVar27 * dVar28);
    moby->state = '\x05';
    pfVar7[0x1a] = (float)uVar15;
    pfVar7[0x1f] = (float)g_CollOutput.pMoby;
    if (DAT_0096bf68 <= ABS((moby->pos).z - g_heroPosition.z)) {
      return;
    }
    fVar17 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (DAT_0096bf6c <= SQRT(fVar3 * fVar3 + fVar17 * fVar17)) {
      return;
    }
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar18 = storeVectorElementWordIndexed
                       (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,
                        ZEXT48(moby->pVar));
    *(undefined4 *)((int)moby->pVar + 0x68U & 0xfffffffc) = uVar18;
    moby->state = '\x02';
    return;
  }
  MVar5 = moby->oClass;
  if ((short)MVar5 < 0x3dd) {
    if (0x3db < (short)MVar5) {
      iVar16 = 5;
      goto LAB_003f51d4;
    }
  }
  else if ((short)MVar5 < 0x3de) {
    iVar16 = 10;
    goto LAB_003f51d4;
  }
  iVar16 = 1;
LAB_003f51d4:
  if ((moby->field80_0xb8 != (MobyInstance *)0x0) &&
     (bVar2 = moby->field80_0xb8->field74_0xb1, (bVar2 & 0x80) == 0)) {
    *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) =
         *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) + (short)iVar16;
  }
  g_boltCount = g_boltCount + iVar16;
  g_totalBoltsCollected = g_totalBoltsCollected + iVar16;
  *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar16;
  DeleteMoby(moby);
  return;
}


