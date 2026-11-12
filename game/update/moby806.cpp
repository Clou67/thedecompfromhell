// game/update/moby806.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x466090-0x4687bc
#include "game/update/moby806.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0466090 (0x14 bytes)
void M806_00466090(void)

{
  DAT_00874c0c = 0x10000;
  return;
}


// 0x04660a8 (0x1c bytes)
bool FUN_004660a8(int param_1)

{
  return *(char *)(param_1 + 0x20) == '\x01';
}


// 0x04660c4 (0x98 bytes)
MobyInstance * Spawn_Moby806_NanotechBall(int param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  if (*(byte *)(param_1 + 0x20) < 0x80) {
    pMVar4 = CreateMoby(NANOTECH_BALL);
    if (pMVar4 != (MobyInstance *)0x0) {
      pMVar4->state = '\0';
      pMVar4->updateDistance = '@';
      pvVar3 = pMVar4->pVar;
      MVar2 = pMVar4->modeBits;
      (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
      fVar1 = *(f32 *)(param_1 + 0x14);
      *(int *)((int)pvVar3 + 0xc) = param_1;
      (pMVar4->pos).y = fVar1;
      fVar1 = *(f32 *)(param_1 + 0x18);
      pMVar4->modeBits = MVar2 | (UNK_40|DISABLED);
      pMVar4->collision = (ushort *)0x0;
      (pMVar4->pos).z = fVar1;
      (pMVar4->pos).w = *(f32 *)(param_1 + 0x1c);
    }
  }
  else {
    pMVar4 = (MobyInstance *)0x0;
  }
  return pMVar4;
}


// 0x046615c (0xb4 bytes)
longlong FUN_0046615c(f32 *param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  longlong lVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = CreateMoby(NANOTECH_BALL);
  lVar4 = (longlong)(int)pMVar5;
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->state = '\0';
    pMVar5->updateDistance = '@';
    pvVar3 = pMVar5->pVar;
    MVar2 = pMVar5->modeBits;
    (pMVar5->pos).x = *param_1;
    fVar1 = param_1[1];
    *(MobyInstance **)((int)pvVar3 + 0xc) = pMVar5;
    (pMVar5->pos).y = fVar1;
    fVar1 = param_1[2];
    pMVar5->modeBits = MVar2 | (UNK_40|DISABLED);
    pMVar5->collision = (ushort *)0x0;
    (pMVar5->pos).z = fVar1;
    fVar1 = param_1[3];
    (pMVar5->rotation).w = 0.0;
    (pMVar5->pos).w = fVar1;
    (pMVar5->rotation).z = 0.0;
    (pMVar5->rotation).y = 0.0;
    (pMVar5->rotation).x = 0.0;
    FastEulerToMtx(lVar4 + 0xc0,lVar4 + 0x40);
  }
  return lVar4;
}


// 0x0466220 (0x248 bytes)
void M806_00466220(int param_1)

{
  float fVar1;
  f32 fVar2;
  short sVar3;
  int iVar4;
  MobyInstance *pMVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  dVar9 = 0.5;
  fVar1 = *(float *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x78);
  iVar6 = CollLine(local_50,local_40,2,param_1,0);
  if (iVar6 == 0) {
    dVar10 = (double)((fVar1 + 0.5) - 1.5);
  }
  else {
    dVar10 = (double)g_CollOutput.ip.z;
    if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
      bVar7 = MB_isCrate(g_CollOutput.pMoby);
      pMVar5 = g_CollOutput.pMoby;
      if (bVar7) {
        fVar2 = ((g_CollOutput.pMoby)->pos).x;
        *(f32 *)(iVar4 + 0x10) = fVar2;
        *(f32 *)(param_1 + 0x10) = fVar2;
        fVar2 = (pMVar5->pos).y;
        *(f32 *)(iVar4 + 0x14) = fVar2;
        *(f32 *)(param_1 + 0x14) = fVar2;
        dVar8 = (double)g_CollOutput.ip.z;
        *(float *)(param_1 + 0x18) = g_CollOutput.ip.z;
        *(float *)(iVar4 + 0x18) = (float)(dVar8 + dVar9);
      }
      else if (*(short *)(iVar4 + 10) == 0) {
        *(undefined2 *)(iVar4 + 10) = 1;
        *(float *)(iVar4 + 0x70) = *(float *)(param_1 + 0x10) - (pMVar5->pos).x;
        *(float *)(iVar4 + 0x74) = *(float *)(param_1 + 0x14) - (pMVar5->pos).y;
        *(float *)(iVar4 + 0x78) = *(float *)(param_1 + 0x18) - (pMVar5->pos).z;
      }
      else {
        fVar1 = ((g_CollOutput.pMoby)->pos).x + *(float *)(iVar4 + 0x70);
        *(float *)(iVar4 + 0x10) = fVar1;
        *(float *)(param_1 + 0x10) = fVar1;
        fVar1 = (pMVar5->pos).y + *(float *)(iVar4 + 0x74);
        *(float *)(iVar4 + 0x14) = fVar1;
        *(float *)(param_1 + 0x14) = fVar1;
        fVar1 = (pMVar5->pos).z + *(float *)(iVar4 + 0x78);
        *(float *)(param_1 + 0x18) = fVar1;
        *(float *)(iVar4 + 0x18) = (float)((double)fVar1 + dVar9);
      }
    }
  }
  dVar9 = (double)*(float *)(param_1 + 0x18);
  if (dVar10 < dVar9) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
    sVar3 = *(short *)(iVar4 + 10);
    *(float *)(param_1 + 0x18) = (float)(dVar9 - (double)*(float *)(iVar4 + 0x50));
    fVar1 = g_FrameTimeSq * 9.8 + *(float *)(iVar4 + 0x50);
    if (0.3 - fVar1 < 0.0) {
      fVar1 = 0.3;
    }
    *(float *)(iVar4 + 0x50) = fVar1;
    if (sVar3 != 0) {
      *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x78) - fVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if (*(short *)(iVar4 + 10) != 0) {
      *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x78) + (float)(dVar10 - dVar9);
    }
    *(float *)(param_1 + 0x18) = (float)dVar10;
    *(undefined4 *)(iVar4 + 0x50) = 0;
  }
  return;
}


// 0x0466468 (0x1b0 bytes)
void M806_00466468(int param_1)

{
  undefined4 uVar1;
  double dVar2;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float afStack_40 [4];
  
  dVar2 = (double)MB_randRangeFloat
                            (g_FrameTime * DAT_00874cb4,
                             g_FrameTime * DAT_00874cb8);
  local_50 = (float)((double)g_heroGravityDir * dVar2);
  local_4c = (float)((double)DAT_00969f74 * dVar2);
  local_48 = (float)((double)DAT_00969f78 * dVar2);
  local_44 = DAT_00969f7c;
  dVar2 = (double)MB_randRot();
  MB_RotateQuatAxisAngle((float)dVar2,afStack_40,&local_50);
  uVar1 = DAT_00874cc0;
  dVar2 = (double)DAT_00874cc8;
  MB_randInt(0xff);
  SpawnPart_60(dVar2,param_1 + 0x10,afStack_40,uVar1);
  uVar1 = DAT_00874cc4;
  dVar2 = (double)DAT_00874ccc;
  MB_randInt(0xff);
  SpawnPart_60(dVar2,param_1 + 0x10,afStack_40,uVar1);
  return;
}


// 0x0466640 (0x4fc bytes)
// strings: 00466638: '?333`'

undefined4 M806_00466640(int param_1)

{
  GPiece<16> auVar1;
  float fVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  ulonglong uVar6;
  undefined1 uVar10;
  int iVar9;
  undefined8 in_r9;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar31;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar3 = uVar5 - 0xb0;
  puVar4 = (undefined4 *)lVar3;
  puVar4[3] = in_vr31_32_3;
  puVar4[2] = in_vr31_32_2;
  puVar4[1] = in_vr31_32_1;
  *puVar4 = in_vr31_32_0;
  dVar20 = 0.0;
  auVar31 = ZEXT416(0);
  auVar26 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  pfVar15 = (float *)&DAT_00874cdc;
  iVar12 = 0;
  pfVar16 = (float *)&DAT_00874cec;
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x78);
  auVar31 = loadVectorLeftIndexed(0xc,0x466618);
  dVar21 = 255.0;
  dVar22 = 255.5;
  dVar23 = 0.5;
  dVar24 = 1.0;
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  dVar25 = 0.699999988079071;
  uVar14 = uVar13;
  do {
    lVar11 = uVar13 + 0x58;
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    iVar7 = FastDecTimerS16(lVar11);
    if (iVar7 == 0) {
      auVar1 = ZEXT416(0xffffffff);
      auVar27 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
      auVar1 = ZEXT416(1);
      auVar27 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar7 = (int)uVar14;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar31,auVar27);
      fVar2 = *(float *)(iVar7 + 0x60) + *pfVar15;
      dVar17 = (double)fVar2;
      auVar29 = loadVectorLeftIndexed(lVar3,lVar11);
      auVar30 = loadVectorRightIndexed(0x10,lVar11);
      dVar18 = (double)animationSpeed;
      auVar27 = ZEXT416(0xfffffff0);
      auVar29 = vectorShiftRightAlgebraicWord
                          (auVar29 | auVar30,
                           auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      *(float *)(iVar7 + 0x60) = fVar2;
      auVar27 = vectorCompareGreaterThanSignedWord(auVar29,auVar27);
      auVar26 = vectorConditionalSelect
                          (auVar26,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar27
                          );
      if (dVar17 < dVar21) {
        if (dVar17 <= dVar20) {
          *(float *)(iVar7 + 0x60) = (float)(dVar17 + dVar21);
        }
      }
      else {
        *(float *)(iVar7 + 0x60) = (float)(dVar17 - dVar21);
      }
      dVar17 = (double)FastIntToDouble
                                 ((int)(dVar18 * dVar22) - (int)*(short *)((int)uVar13 + 0x58));
      uVar8 = FastLerpColor
                        (ABS((double)(float)(dVar23 - (double)(float)(dVar17 / (double)(longlong)
                                                                                       ((double)
                                                  animationSpeed * dVar22)))),DAT_00874cd0,
                         DAT_00874cd4);
      dVar17 = (double)FastIntToDouble
                                 ((int)(animationSpeed *
                                       (float)((double)(longlong)DAT_00874c8c + dVar23)));
      dVar18 = (double)(longlong)(int)*(short *)((int)uVar13 + 0x58);
      dVar19 = (double)(float)(dVar24 - (double)(float)(dVar18 / dVar17));
      dVar17 = (double)FastIntToDouble(dVar17,dVar18,(int)uVar8 >> 0x18);
      uVar6 = FastDoubleToInt((double)(float)(dVar17 * (double)(float)(dVar24 - dVar19)));
      uVar10 = FastDoubleToInt((double)*(float *)(iVar7 + 0x60));
      iVar9 = SpawnPart_59
                        ((double)(float)((double)*pfVar16 * dVar19),uVar5 - 0xf0,
                         (uint)((uVar6 & 0xffffffff) << 0x18) | uVar8 & 0xffffff,uVar10,DAT_00874cd8
                         ,0,2,in_r9,1);
      if (iVar9 != 0) {
        *(undefined1 *)(iVar9 + 2) = *DAT_00a528fc;
      }
      uVar10 = FastDoubleToInt((double)*(float *)(iVar7 + 0x60));
      iVar7 = SpawnPart_59
                        ((double)((float)(dVar19 * dVar25) * *pfVar16),uVar5 - 0xf0,
                         (uint)((uVar6 & 0xffffffff) << 0x18) | 0xffffff,uVar10,DAT_00874cd8,
                         DAT_010cd080,2,in_r9,1);
      if (iVar7 != 0) {
        *(undefined1 *)(iVar7 + 2) = *DAT_00a528fc;
      }
    }
    iVar12 = iVar12 + 1;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
    uVar13 = uVar13 + 2;
    uVar14 = uVar14 + 4;
  } while (iVar12 < 4);
  return auVar26.piece<0,4>();
}


// 0x0466b40 (0x154 bytes)
void M806_00466b40(int param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  
  pfVar2 = *(float **)(param_1 + 0x78);
  MB_RotateQuatAxisAngle
            (pfVar2[0xb],&local_30,(float *)((int)&DAT_010ccf80 + (int)(param_3 << 4)));
  iVar3 = *(int *)((int)pfVar2 + (int)(param_3 << 2) + 0x30);
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x20) == '\x02')) {
    fVar1 = 0.0;
    fVar7 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
    fVar6 = *(float *)(iVar3 + 0x28) / fVar7;
    fVar5 = local_30 * fVar6;
    fVar4 = local_2c * fVar6;
    fVar6 = local_28 * fVar6;
    local_30 = fVar1;
    if (0.0 - fVar7 < 0.0) {
      local_30 = fVar5;
    }
    local_2c = fVar1;
    if (0.0 - fVar7 < 0.0) {
      local_2c = fVar4;
    }
    if (0.0 - fVar7 < 0.0) {
      fVar1 = fVar6;
    }
    if (fVar7 - 0.0 < 0.0) {
      local_30 = fVar5;
    }
    if (fVar7 - 0.0 < 0.0) {
      local_2c = fVar4;
    }
    local_28 = fVar1;
    if (fVar7 - 0.0 < 0.0) {
      local_28 = fVar6;
    }
  }
  *param_2 = pfVar2[4] + local_30;
  param_2[1] = pfVar2[5] + local_2c;
  fVar1 = pfVar2[6];
  param_2[2] = fVar1 + local_28;
  param_2[3] = pfVar2[7];
  param_2[2] = fVar1 + local_28 + *pfVar2;
  return;
}


// 0x0466c98 (0xf4 bytes)
void M806_00466c98(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *outQuat;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  outQuat = (float *)&DAT_010ccf80;
  iVar5 = 0;
  dVar9 = 0.0;
  do {
    MB_RotateQuatAxisAngle(DAT_00874c30,outQuat,outQuat);
    fVar2 = outQuat[1];
    fVar3 = *outQuat;
    fVar4 = outQuat[2];
    dVar7 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar7 == dVar9) {
      fVar3 = outQuat[3];
      dVar7 = dVar9;
      dVar6 = dVar9;
      dVar8 = dVar9;
    }
    else {
      fVar1 = (float)((double)DAT_00874c4c / dVar7);
      dVar8 = (double)(fVar4 * fVar1);
      dVar7 = (double)(fVar3 * fVar1);
      fVar3 = outQuat[3];
      dVar6 = (double)(fVar2 * fVar1);
    }
    *outQuat = (float)dVar7;
    iVar5 = iVar5 + 1;
    outQuat[1] = (float)dVar6;
    outQuat[2] = (float)dVar8;
    outQuat[3] = fVar3;
    outQuat = outQuat + 4;
  } while (iVar5 < 8);
  return;
}


// 0x0466d90 (0xb0 bytes)
bool M806_00466d90(void)

{
  int iVar1;
  GPiece<16> local_20;
  GPiece<16> local_10;
  
  iVar1 = CollLine(local_20,local_10,0x12,0,0);
  return iVar1 == 0;
}


// 0x0466e98 (0x1924 bytes)
// strings: 0096c074: 'None'

/* Moby 806 */

void UpdateMoby_806(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar16;
  int iVar15;
  MobyInstance *pMVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 in_LR;
  double dVar21;
  double extraout_f1;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> local_190;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  char local_124 [4];
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float afStack_110 [4];
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  f32 local_f0;
  f32 local_ec;
  float local_e8;
  f32 local_e4;
  longlong local_e0;
  
  lVar11 = (longlong)(int)moby;
  uVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  uVar20 = ZEXT48(pfVar4);
  if (uVar1 == '\x04') {
    if (DAT_00a15c7c == moby) {
      M806_00466c98();
    }
  }
  else if (uVar1 == '\x03') {
    if (DAT_00a15c7c == moby) {
      M806_00466c98();
    }
    if (*(short *)((int)pfVar4 + 0x56) != 0) {
      fVar2 = DAT_00874c88 * DAT_00969f74;
      fVar5 = DAT_00874c88 * DAT_00969f78;
      (moby->pos).x = g_heroPosition.x + -(DAT_00874c88 * g_heroGravityDir);
      (moby->pos).y = g_heroPosition.y + -fVar2;
      (moby->pos).z = g_heroPosition.z + -fVar5;
      fVar2 = g_heroPosition.w;
      (moby->rotation).w = 0.5235988;
      (moby->pos).w = fVar2;
      iVar13 = M806_00466640(lVar11);
      if ((iVar13 != 0) && (iVar13 = MB_randInt(5), iVar13 == 0)) {
        local_130 = GameCamera.posX - (moby->pos).x;
        local_12c = GameCamera.posY - (moby->pos).y;
        local_128 = GameCamera.posZ - (moby->pos).z;
        local_124[0] = GameCamera.field8_0x14c[0];
        local_124[1] = GameCamera.field8_0x14c[1];
        local_124[2] = GameCamera.field8_0x14c[2];
        local_124[3] = GameCamera.field8_0x14c[3];
        dVar21 = (double)MB_randRangeFloat
                                   (g_FrameTime * DAT_00874cb4,
                                    g_FrameTime * DAT_00874cb8);
        local_120 = (float)((double)g_heroGravityDir * dVar21);
        local_11c = (float)((double)DAT_00969f74 * dVar21);
        local_118 = (float)((double)DAT_00969f78 * dVar21);
        local_114 = DAT_00969f7c;
        dVar21 = (double)MB_randRot();
        MB_RotateQuatAxisAngle((float)dVar21,afStack_110,&local_120);
        uVar10 = DAT_00874cc0;
        dVar21 = (double)DAT_00874cc8;
        MB_randInt(0xff);
        SpawnPart_60(dVar21,lVar11 + 0x10,afStack_110,uVar10);
        uVar10 = DAT_00874cc4;
        dVar21 = (double)DAT_00874ccc;
        MB_randInt(0xff);
        SpawnPart_60(dVar21,lVar11 + 0x10,afStack_110,uVar10);
      }
    }
    if (((g_heroHealth ==
          g_heroMaxNanotech +
          ((uint)(ZERO_MASK((1 - (uint)g_heroType))) & 4U - g_heroMaxNanotech)) &&
        (DAT_00969ea0 != 0)) && (Cheats[6] != '\0')) {
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x4c74,0x870000);
      auVar41 = loadVectorLeftIndexed(in_LR,0x466e40);
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar42,0);
      auVar42 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar42 = vectorAddFloatingPoint
                          (auVar40,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar40,auVar42,auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      iVar13 = (int)(animationSpeed * ((float)(longlong)DAT_00874c74 + 0.5));
      local_e0 = (longlong)iVar13;
      if (*(short *)(pfVar4 + 0x15) < iVar13) {
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0x54,uVar20);
        *(undefined2 *)(pfVar4 + 0x15) = uVar16;
        *(short *)(pfVar4 + 0x16) = *(short *)(pfVar4 + 0x16) + 1;
        *(short *)((int)pfVar4 + 0x5a) = *(short *)((int)pfVar4 + 0x5a) + 1;
        *(short *)(pfVar4 + 0x17) = *(short *)(pfVar4 + 0x17) + 1;
        *(short *)((int)pfVar4 + 0x5e) = *(short *)((int)pfVar4 + 0x5e) + 1;
      }
    }
    iVar13 = FastDecTimerS16(uVar20 + 0x54);
    if (iVar13 == 0) {
      iVar13 = 0;
      dVar23 = 1.0;
      uVar33 = 0;
      uVar37 = 0x3f847ae140000000;
      dVar22 = 20.5;
      dVar39 = 0.5;
      dVar21 = -(double)(DAT_00874c88 * DAT_00969f78);
      dVar25 = (double)(g_heroPosition.x + -(DAT_00874c88 * g_heroGravityDir));
      dVar24 = (double)(g_heroPosition.y + -(DAT_00874c88 * DAT_00969f74));
      dVar38 = (double)(float)((double)g_heroPosition.z + dVar21);
      do {
        iVar12 = *(int *)((int)uVar20 + 0x30);
        if (iVar12 != 0) {
          iVar14 = FastDecTimerS16(dVar21,iVar12 + 0x3e);
          if (iVar14 == 0) {
            dVar36 = (double)*(float *)(iVar12 + 0x10);
            dVar35 = (double)*(float *)(iVar12 + 0x14);
            dVar34 = (double)*(float *)(iVar12 + 0x18);
            dVar21 = (double)FastIntToDouble(*(undefined2 *)(iVar12 + 0x3c));
            local_e0 = (longlong)(int)*(short *)(iVar12 + 0x3e);
            dVar32 = (double)*(float *)(iVar12 + 0x34);
            dVar31 = (double)*(float *)(iVar12 + 0x38);
            dVar30 = (double)(float)(dVar32 - (double)*(float *)(iVar12 + 0x28));
            dVar27 = (double)(float)(dVar24 - (double)*(float *)(iVar12 + 0x28));
            dVar29 = (double)(float)(dVar31 - (double)*(float *)(iVar12 + 0x2c));
            dVar28 = (double)(float)(dVar38 - (double)*(float *)(iVar12 + 0x2c));
            dVar26 = (double)(float)(dVar23 - (double)(float)((double)local_e0 / dVar21));
            dVar21 = (double)MB_catmullRom
                                       ((double)(float)((double)*(float *)(iVar12 + 0x30) -
                                                       (double)*(float *)(iVar12 + 0x24)),
                                        (double)*(float *)(iVar12 + 0x30),dVar25,
                                        (double)(float)(dVar25 - (double)*(float *)(iVar12 + 0x24)),
                                        dVar26);
            *(float *)(iVar12 + 0x10) = (float)dVar21;
            dVar21 = (double)MB_catmullRom(dVar30,dVar32,dVar24,dVar27,dVar26);
            *(float *)(iVar12 + 0x14) = (float)dVar21;
            dVar21 = (double)MB_catmullRom(dVar29,dVar31,dVar38,dVar28,dVar26);
            *(float *)(iVar12 + 0x18) = (float)dVar21;
            dVar21 = (double)MB_randRangeSigned(uVar33,uVar37);
            local_140 = (float)(dVar21 + (double)*(float *)(iVar12 + 0x10));
            dVar21 = (double)MB_randRangeSigned(uVar33,uVar37);
            local_13c = (float)(dVar21 + (double)*(float *)(iVar12 + 0x14));
            dVar21 = (double)MB_randRangeSigned(uVar33,uVar37);
            local_138 = (float)(dVar21 + (double)*(float *)(iVar12 + 0x18));
            local_e0 = (longlong)(int)((double)animationSpeed * dVar22);
            iVar14 = SpawnPart_62(&local_140,(int)((double)animationSpeed * dVar22),0);
            if (iVar14 != 0) {
              *(undefined4 *)(iVar14 + 4) = DAT_00874c40;
              *(float *)(iVar14 + 0xc) = DAT_00874c38;
            }
            dVar27 = (double)(float)((double)*(float *)(iVar12 + 0x10) + dVar36);
            dVar28 = (double)(float)((double)*(float *)(iVar12 + 0x14) + dVar35);
            dVar26 = (double)(float)((double)*(float *)(iVar12 + 0x18) + dVar34);
            dVar21 = (double)MB_randRangeSigned(uVar33,uVar37);
            local_140 = (float)(dVar27 * dVar39 + dVar21);
            dVar21 = (double)MB_randRangeSigned(uVar33,uVar37);
            local_13c = (float)(dVar28 * dVar39 + dVar21);
            dVar21 = (double)MB_randRangeSigned(uVar33,uVar37);
            local_138 = (float)(dVar26 * dVar39 + dVar21);
            local_e0 = (longlong)(int)((double)animationSpeed * dVar22);
            iVar12 = SpawnPart_62(&local_140,(int)((double)animationSpeed * dVar22),0);
            dVar21 = extraout_f1;
            if (iVar12 != 0) {
              *(undefined4 *)(iVar12 + 4) = DAT_00874c40;
              dVar21 = (double)DAT_00874c38;
              *(float *)(iVar12 + 0xc) = DAT_00874c38;
            }
          }
          else {
            if (*(short *)((int)pfVar4 + 0x56) == 0) {
              iVar14 = g_heroMaxNanotech +
                       ((uint)(ZERO_MASK((1 - (uint)g_heroType))) &
                       4U - g_heroMaxNanotech);
              if (g_heroHealth != 0) {
                iVar15 = g_heroHealth + 1;
                g_heroHealth = iVar15 + ((uint)((longlong)iVar14 - (longlong)iVar15 >> 0x3f) &
                                        iVar14 - iVar15);
              }
              pvVar6 = DAT_00a15c7c->pVar;
              iVar14 = *(int *)((int)pvVar6 + 0x7c) + -1;
              *(int *)((int)pvVar6 + 0x7c) = iVar14;
              if (iVar14 < 0) {
                *(undefined4 *)((int)pvVar6 + 0x7c) = 0;
              }
              sound_MobyPlay_oClass(1,0,moby,0x1f5);
              *(undefined2 *)((int)pfVar4 + 0x56) = 1;
            }
            dVar21 = (double)DeletePart(iVar12);
            *(undefined4 *)((int)uVar20 + 0x30) = 0;
          }
        }
        iVar13 = iVar13 + 1;
        uVar20 = uVar20 + 4;
      } while (iVar13 < 8);
    }
    else {
      iVar13 = 0;
      do {
        if (*(int *)((int)uVar20 + 0x30) != 0) {
          DeletePart();
          *(undefined4 *)((int)uVar20 + 0x30) = 0;
        }
        iVar13 = iVar13 + 1;
        uVar20 = uVar20 + 4;
      } while (iVar13 < 8);
      if (DAT_00a15c7c == moby) {
        moby->state = '\x04';
      }
      else {
        DeleteMoby(moby);
      }
    }
  }
  else {
    if (uVar1 != '\x02') {
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return;
        }
        iVar13 = 0;
        moby->collision = (ushort *)0x0;
        moby->state = '\x01';
        moby->setByGroup = '\0';
        fVar5 = pfVar4[3];
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        fVar2 = *(float *)((int)fVar5 + 0x10);
        (moby->pos).x = fVar2;
        (moby->pos).y = *(f32 *)((int)fVar5 + 0x14);
        (moby->pos).z = *(f32 *)((int)fVar5 + 0x18);
        (moby->pos).w = *(f32 *)((int)fVar5 + 0x1c);
        (moby->rotation).x = *(f32 *)((int)fVar5 + 0x40);
        (moby->rotation).y = *(f32 *)((int)fVar5 + 0x44);
        (moby->rotation).z = *(f32 *)((int)fVar5 + 0x48);
        (moby->rotation).w = *(f32 *)((int)fVar5 + 0x4c);
        pfVar4[4] = fVar2;
        pfVar4[5] = (moby->pos).y;
        fVar2 = (moby->pos).z;
        pfVar4[6] = fVar2;
        pfVar4[7] = (moby->pos).w;
        *(undefined2 *)(pfVar4 + 2) = 0;
        pfVar4[6] = fVar2 + 0.5;
        dVar39 = 0.0;
        *pfVar4 = 0.0;
        dVar21 = (double)MB_randRangeFloat(0.0,3.1415927);
        pfVar4[1] = (float)dVar21;
        *(undefined2 *)((int)pfVar4 + 0x56) = 0;
        *(undefined2 *)((int)pfVar4 + 10) = 0;
        uVar19 = uVar20;
        do {
          iVar12 = MB_randInt(0xff);
          local_e0 = (longlong)iVar12;
          iVar13 = iVar13 + 1;
          *(float *)((int)uVar19 + 0x60) = (float)local_e0;
          uVar19 = uVar19 + 4;
        } while (iVar13 < 4);
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x4c8c,0x870000);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = vectorConvertFromSignedFixedPointWord
                            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0);
        auVar42 = loadVectorLeftIndexed(in_LR,0x466e40);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorAddFloatingPoint
                            (auVar40,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x58);
        *(undefined2 *)(uVar20 + 0x58) = uVar16;
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x5a);
        *(undefined2 *)(uVar20 + 0x5a) = uVar16;
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x5c);
        *(undefined2 *)(uVar20 + 0x5c) = uVar16;
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x5e);
        *(undefined2 *)(uVar20 + 0x5e) = uVar16;
        pfVar4[0xc] = 0.0;
        pfVar4[0xd] = 0.0;
        pfVar4[0xe] = 0.0;
        pfVar4[0xf] = 0.0;
        pfVar4[0x10] = 0.0;
        pfVar4[0x11] = 0.0;
        pfVar4[0x12] = 0.0;
        pfVar4[0x13] = 0.0;
        if (DAT_00a15c7c == (MobyInstance *)0x0) {
          FastEulerToMtx(lVar11 + 0xc0,lVar11 + 0x40);
          fVar2 = (moby->transform).v0.y;
          fVar5 = (moby->transform).v0.x;
          fVar3 = (moby->transform).v0.z;
          DAT_00a15c7c = moby;
          moby->updateDistance = -1;
          pfVar4[0x1f] = 0.0;
          dVar22 = (double)DAT_00874c4c;
          dVar21 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
          if (dVar21 == dVar39) {
            DAT_010ccf8c = (moby->transform).v0.w;
            DAT_010ccf88 = 0.0;
            DAT_010ccf84 = 0.0;
            DAT_010ccf80 = 0.0;
          }
          else {
            fVar2 = (float)(dVar22 / dVar21);
            DAT_010ccf80 = fVar5 * fVar2;
            DAT_010ccf84 = (moby->transform).v0.y * fVar2;
            DAT_010ccf88 = (moby->transform).v0.z * fVar2;
            DAT_010ccf8c = (moby->transform).v0.w;
          }
          DAT_010cd000 = (moby->transform).v2.x;
          DAT_010cd004 = (moby->transform).v2.y;
          DAT_010cd008 = (moby->transform).v2.z;
          DAT_010cd00c = (moby->transform).v2.w;
          fVar2 = (moby->transform).v1.y;
          fVar5 = (moby->transform).v1.x;
          fVar3 = (moby->transform).v1.z;
          dVar21 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
          if (dVar21 == dVar39) {
            DAT_010ccf9c = (moby->transform).v1.w;
            DAT_010ccf98 = 0.0;
            DAT_010ccf94 = 0.0;
            DAT_010ccf90 = 0.0;
          }
          else {
            fVar2 = (float)(dVar22 / dVar21);
            DAT_010ccf90 = fVar5 * fVar2;
            DAT_010ccf94 = (moby->transform).v1.y * fVar2;
            DAT_010ccf98 = (moby->transform).v1.z * fVar2;
            DAT_010ccf9c = (moby->transform).v1.w;
          }
          DAT_010cd010 = (moby->transform).v0.x;
          DAT_010cd014 = (moby->transform).v0.y;
          DAT_010cd018 = (moby->transform).v0.z;
          DAT_010cd01c = (moby->transform).v0.w;
          fVar2 = (moby->transform).v2.y;
          fVar5 = (moby->transform).v2.x;
          fVar3 = (moby->transform).v2.z;
          dVar21 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
          if (dVar21 == dVar39) {
            DAT_010ccfac = (moby->transform).v2.w;
            DAT_010ccfa8 = 0.0;
            DAT_010ccfa4 = 0.0;
            DAT_010ccfa0 = 0.0;
          }
          else {
            fVar2 = (float)(dVar22 / dVar21);
            DAT_010ccfa0 = fVar5 * fVar2;
            DAT_010ccfa4 = (moby->transform).v2.y * fVar2;
            DAT_010ccfa8 = (moby->transform).v2.z * fVar2;
            DAT_010ccfac = (moby->transform).v2.w;
          }
          DAT_010cd020 = (moby->transform).v1.x;
          DAT_010cd024 = (moby->transform).v1.y;
          DAT_010cd028 = (moby->transform).v1.z;
          DAT_010cd02c = (moby->transform).v1.w;
          fVar5 = (moby->transform).v0.x + (moby->transform).v2.x;
          fVar3 = (moby->transform).v0.y + (moby->transform).v2.y;
          fVar7 = (moby->transform).v0.z + (moby->transform).v2.z;
          DAT_010ccfbc = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfb0 = (float)dVar21;
          DAT_010ccfb4 = (float)dVar38;
          DAT_010ccfb8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v1.y;
          dVar25 = (double)(moby->transform).v1.z;
          dVar26 = (double)(moby->transform).v1.x;
          DAT_010cd03c = 0;
          DAT_010cd030 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd034 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd038 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v0.x + (moby->transform).v1.x;
          fVar3 = (moby->transform).v0.y + (moby->transform).v1.y;
          fVar7 = (moby->transform).v0.z + (moby->transform).v1.z;
          DAT_010ccfcc = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfc0 = (float)dVar21;
          DAT_010ccfc4 = (float)dVar38;
          DAT_010ccfc8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v2.y;
          dVar25 = (double)(moby->transform).v2.z;
          dVar26 = (double)(moby->transform).v2.x;
          DAT_010cd04c = 0;
          DAT_010cd040 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd044 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd048 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v1.x - (moby->transform).v2.x;
          fVar3 = (moby->transform).v1.y - (moby->transform).v2.y;
          fVar7 = (moby->transform).v1.z - (moby->transform).v2.z;
          DAT_010ccfdc = (moby->transform).v1.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfd0 = (float)dVar21;
          DAT_010ccfd4 = (float)dVar38;
          DAT_010ccfd8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v0.y;
          dVar25 = (double)(moby->transform).v0.z;
          dVar26 = (double)(moby->transform).v0.x;
          DAT_010cd05c = 0;
          DAT_010cd050 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd054 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd058 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v0.x - (moby->transform).v2.x;
          fVar3 = (moby->transform).v0.y - (moby->transform).v2.y;
          fVar7 = (moby->transform).v0.z - (moby->transform).v2.z;
          DAT_010ccfec = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfe0 = (float)dVar21;
          DAT_010ccfe4 = (float)dVar38;
          DAT_010ccfe8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v1.y;
          dVar25 = (double)(moby->transform).v1.z;
          dVar26 = (double)(moby->transform).v1.x;
          DAT_010cd06c = 0;
          DAT_010cd060 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd064 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd068 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v0.x - (moby->transform).v1.x;
          fVar3 = (moby->transform).v0.y - (moby->transform).v1.y;
          fVar7 = (moby->transform).v0.z - (moby->transform).v1.z;
          DAT_010ccffc = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar22 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar22 = (double)(fVar3 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar22 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar7 * fVar2);
          }
          DAT_010ccff0 = (float)dVar21;
          DAT_010ccff4 = (float)dVar22;
          DAT_010ccff8 = (float)dVar38;
          dVar23 = (double)(moby->transform).v2.y;
          dVar24 = (double)(moby->transform).v2.z;
          dVar25 = (double)(moby->transform).v2.x;
          DAT_010cd07c = 0;
          DAT_010cd070 = (float)(dVar23 * dVar38 - (double)(float)(dVar24 * dVar22));
          DAT_010cd074 = (float)(dVar24 * dVar21 - (double)(float)(dVar25 * dVar38));
          DAT_010cd078 = (float)(dVar25 * dVar22 - (double)(float)(dVar23 * dVar21));
        }
        dVar22 = 1.0;
        dVar21 = (double)MB_randRangeFloat((float)dVar39,6.2831855);
        uVar37 = 0x3ff921fb60000000;
        dVar39 = (double)MB_randRangeFloat(-1.5707964,1.5707964);
        MB_SphericalToVector((float)dVar22,(float)dVar21,(float)dVar39,pfVar4 + 8);
        dVar21 = (double)MB_randRangeSigned(0x3fe921fb00000000,uVar37);
        pfVar4[0xb] = (float)dVar21;
      }
      fVar2 = pfVar4[3];
      pMVar17 = (MobyInstance *)pfVar4[3];
      (moby->pos).x = *(f32 *)((int)fVar2 + 0x10);
      (moby->pos).y = *(f32 *)((int)fVar2 + 0x14);
      (moby->pos).z = *(f32 *)((int)fVar2 + 0x18);
      (moby->pos).w = *(f32 *)((int)fVar2 + 0x1c);
      pfVar4[4] = (pMVar17->pos).x;
      pfVar4[5] = (pMVar17->pos).y;
      fVar2 = (pMVar17->pos).z;
      pfVar4[6] = fVar2;
      pfVar4[7] = (pMVar17->pos).w;
      pfVar4[6] = fVar2 + 0.5;
      if ((0x7f < pMVar17->state) || (pMVar17 == moby)) {
        moby->state = '\x02';
        pfVar4[0x14] = 0.0;
      }
    }
    if (moby->state == '\x02') {
      pfVar4[4] = (moby->pos).x;
      pfVar4[5] = (moby->pos).y;
      fVar2 = (moby->pos).z;
      pfVar4[6] = fVar2;
      pfVar4[7] = (moby->pos).w;
      pfVar4[6] = fVar2 + 0.5;
      M806_00466220(lVar11);
      dVar24 = 3.141592502593994;
      dVar38 = -3.141592502593994;
      dVar23 = -0.16666656732559204;
      iVar13 = 0;
      dVar22 = 0.008333025500178337;
      dVar39 = -0.0001980741071747616;
      pfVar18 = (float *)&DAT_00874c94;
      dVar21 = 2.601886990305502e-06;
      uVar19 = uVar20;
      do {
        iVar12 = *(int *)((int)uVar19 + 0x30);
        if (iVar12 != 0) {
          dVar26 = (double)*(float *)(iVar12 + 0x2c);
          dVar25 = (double)(float)(dVar24 - dVar26);
          if (dVar26 - (double)(float)(dVar24 - dVar26) < 0.0) {
            dVar25 = dVar26;
          }
          dVar28 = (double)(float)(dVar38 - dVar26);
          if ((double)(float)(dVar38 - dVar26) - dVar25 < 0.0) {
            dVar28 = dVar25;
          }
          dVar25 = (double)(float)(dVar28 * dVar28);
          dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar28));
          dVar26 = (double)(float)(dVar25 * dVar27);
          *(float *)(iVar12 + 0x28) =
               DAT_00874c90 *
               (float)((double)(float)(dVar25 * dVar26) * dVar21 +
                      (double)(float)(dVar26 * dVar39 +
                                     (double)(float)(dVar27 * dVar22 +
                                                    (double)(float)((double)(float)(dVar25 * dVar28)
                                                                    * dVar23 + dVar28)))) +
               DAT_00874c4c;
          dVar25 = (double)FastWrapRot(*(float *)(iVar12 + 0x2c),*pfVar18);
          *(float *)(iVar12 + 0x2c) = (float)dVar25;
        }
        iVar13 = iVar13 + 1;
        pfVar18 = pfVar18 + 1;
        uVar19 = uVar19 + 4;
      } while (iVar13 < 8);
    }
    if ((((moby->state != '\x01') && (DAT_00a15c7c != (MobyInstance *)0x0)) &&
        ((DAT_00a15c7c->pVar != (void *)0x0 && (g_heroHealth != 0)))) &&
       ((g_heroHealth + *(int *)((int)DAT_00a15c7c->pVar + 0x7c) <
         (int)(g_heroMaxNanotech +
              ((uint)(ZERO_MASK((1 - (uint)g_heroType))) & 4U - g_heroMaxNanotech)) ||
        ((Cheats[6] != '\0' && (DAT_00969ea0 == 0)))))) {
      fVar2 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar7 = fVar2 - g_heroPosition.y;
      fVar8 = fVar5 - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar9 = fVar3 - g_heroPosition.z;
      if (SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) < 10.0) {
        local_f4 = (moby->pos).w;
        dVar21 = 0.5;
        local_f8 = fVar3 + 0.5;
        local_f0 = (g_heroMobyPtr->pos).x;
        local_ec = (g_heroMobyPtr->pos).y;
        local_e8 = (g_heroMobyPtr->pos).z + 0.5;
        local_e4 = (g_heroMobyPtr->pos).w;
        local_100 = fVar5;
        local_fc = fVar2;
        iVar13 = CollLine(&local_100,&local_f0,0x12,0,0);
        pMVar17 = DAT_00a15c7c;
        if (iVar13 == 0) {
          moby->state = '\x03';
          *(int *)((int)pMVar17->pVar + 0x7c) = *(int *)((int)pMVar17->pVar + 0x7c) + 1;
          if (Cheats[6] != '\0') {
            auVar42 = ZEXT416(0xffffffff);
            auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            auVar42 = loadVectorLeftIndexed(0x3c,0x466e40);
            auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar42 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 |
                                         auVar42 << 0x60,auVar40);
            auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
            auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
            DAT_00969ea0 = storeVectorElementWordIndexed
                                     (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                                      0x1c0,0x969ce0);
          }
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x4c70,0x870000);
          auVar40 = vectorConvertFromSignedFixedPointWord(auVar42,0);
          auVar42 = loadVectorLeftIndexed(in_LR,0x466e40);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorAddFloatingPoint
                              (auVar40,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                              );
          auVar42 = vectorMultiplyAddFloatingPoint(auVar43,auVar42,auVar41);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar16 = storeVectorElementHalfWordIndexed(auVar42,0x54,uVar20);
          *(undefined2 *)(pfVar4 + 0x15) = uVar16;
          local_160 = (g_heroPosition.x + -(DAT_00874c88 * g_heroGravityDir)) - (moby->pos).x;
          local_15c = (g_heroPosition.y + -(DAT_00874c88 * DAT_00969f74)) - (moby->pos).y;
          iVar13 = 0;
          local_158 = (float)((double)((g_heroPosition.z + -(DAT_00874c88 * DAT_00969f78)) -
                                      (moby->pos).z) - dVar21);
          local_154 = g_heroPosition.w;
          dVar23 = 0.0;
          local_174 = 0;
          fVar5 = -(DAT_00874c84 * g_heroGravityDir * local_15c) -
                  -(DAT_00874c84 * DAT_00969f74 * local_160);
          fVar3 = -(DAT_00874c84 * DAT_00969f74 * local_158) -
                  -(DAT_00874c84 * DAT_00969f78 * local_15c);
          fVar2 = -(DAT_00874c84 * DAT_00969f78 * local_160) -
                  -(DAT_00874c84 * g_heroGravityDir * local_158);
          local_17c = local_158 * fVar3 - local_160 * fVar5;
          local_178 = local_160 * fVar2 - local_15c * fVar3;
          local_180 = local_15c * fVar5 - local_158 * fVar2;
          MB_RotateQuatAxisAngle(-1.5707964,&local_180,&local_180);
          dVar25 = (double)local_160;
          dVar24 = (double)local_15c;
          dVar38 = (double)local_158;
          dVar22 = (double)SQRT(local_178 * local_178 +
                                local_180 * local_180 + local_17c * local_17c);
          fVar2 = (float)((double)DAT_00874c84 / dVar22);
          dVar39 = dVar23;
          if (dVar23 - dVar22 < 0.0) {
            dVar39 = (double)(local_180 * fVar2);
          }
          dVar26 = dVar23;
          if (dVar23 - dVar22 < 0.0) {
            dVar26 = (double)(local_17c * fVar2);
          }
          dVar28 = dVar23;
          if (dVar23 - dVar22 < 0.0) {
            dVar28 = (double)(local_178 * fVar2);
          }
          if (dVar22 - dVar23 < 0.0) {
            dVar39 = (double)(local_180 * fVar2);
          }
          if (dVar22 - dVar23 < 0.0) {
            dVar26 = (double)(local_17c * fVar2);
          }
          if (dVar22 - dVar23 < 0.0) {
            dVar28 = (double)(local_178 * fVar2);
          }
          local_180 = (float)dVar39;
          local_17c = (float)dVar26;
          local_178 = (float)dVar28;
          dVar39 = 0.44854962825775146;
          do {
            iVar12 = *(int *)((int)uVar20 + 0x30);
            if (iVar12 != 0) {
              local_e0 = (longlong)iVar13;
              MB_RotateQuatAxisAngle
                        ((float)((double)local_e0 * dVar39),&local_170,&local_180);
              *(float *)(iVar12 + 0x24) = (float)(dVar25 * dVar21 + (double)local_170);
              *(float *)(iVar12 + 0x28) = (float)(dVar24 * dVar21 + (double)local_16c);
              *(float *)(iVar12 + 0x2c) = (float)(dVar38 * dVar21 + (double)local_168);
              iVar14 = *(int *)((int)uVar20 + 0x30);
              *(undefined4 *)(iVar12 + 0x30) = *(undefined4 *)(iVar14 + 0x10);
              *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
              *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar14 + 0x18);
              iVar14 = MB_randRange(DAT_00874c78,DAT_00874c7c);
              iVar14 = (int)(animationSpeed * (float)((double)(longlong)iVar14 + dVar21));
              local_e0 = (longlong)iVar14;
              uVar16 = (undefined2)iVar14;
              *(undefined2 *)(iVar12 + 0x3c) = uVar16;
              *(undefined2 *)(iVar12 + 0x3e) = uVar16;
            }
            iVar13 = iVar13 + 1;
            uVar20 = uVar20 + 4;
          } while (iVar13 < 8);
        }
      }
    }
    fVar2 = pfVar4[1];
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = fVar3 * fVar3;
    fVar7 = fVar5 * fVar5 * fVar3;
    fVar8 = fVar5 * fVar7;
    *pfVar4 = DAT_00874c48 *
              (fVar5 * fVar8 * 2.601887e-06 +
              fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3);
    dVar21 = (double)FastWrapRot(fVar2,DAT_00874c44);
    pfVar4[1] = (float)dVar21;
    if (DAT_00a15c7c == moby) {
      M806_00466c98();
    }
    iVar13 = FastCheckBsphereInView(0x4050000000000000,local_190);
    if (-1 < iVar13) {
      RegisterFuncForMoby(&PTR_M807_004687d8_0070eb90,moby);
      fVar2 = (moby->pos).y - GameCamera.posY;
      fVar5 = (moby->pos).x - GameCamera.posX;
      if (SQRT(fVar5 * fVar5 + fVar2 * fVar2) <= 10.0) {
        fVar2 = 40.5;
      }
      else {
        fVar2 = 5.5;
      }
      fVar2 = animationSpeed * fVar2;
      uVar20 = 0;
      local_e0 = (longlong)(int)fVar2;
      do {
        M806_00466b40(lVar11,&local_150,uVar20);
        iVar13 = SpawnPart_62(&local_150,(int)fVar2,2);
        if (iVar13 != 0) {
          *(float *)(iVar13 + 0x30) = *(float *)(iVar13 + 0x10) - (moby->pos).x;
          *(float *)(iVar13 + 0x34) = *(float *)(iVar13 + 0x14) - (moby->pos).y;
          *(float *)(iVar13 + 0x38) = *(float *)(iVar13 + 0x18) - (moby->pos).z;
          pMVar17 = moby;
          if (moby->state != '\x02') {
            pMVar17 = (MobyInstance *)pfVar4[3];
          }
          *(MobyInstance **)(iVar13 + 0x24) = pMVar17;
          *(undefined4 *)(iVar13 + 4) = DAT_00874c40;
          *(float *)(iVar13 + 0xc) = DAT_00874c38;
        }
        iVar12 = (int)((uVar20 & 0xffffffff) << 2);
        iVar13 = *(int *)((int)pfVar4 + iVar12 + 0x30);
        if (iVar13 == 0) {
          iVar13 = SpawnPart_62(&local_150,0,1);
          *(int *)((int)pfVar4 + iVar12 + 0x30) = iVar13;
          fVar5 = DAT_00874c4c;
          if (iVar13 != 0) {
            *(undefined4 *)(iVar13 + 0x2c) = 0;
            *(float *)(iVar13 + 0x28) = fVar5;
            *(undefined4 *)(*(int *)((int)pfVar4 + iVar12 + 0x30) + 0xc) = DAT_00874c3c;
            *(undefined4 *)(*(int *)((int)pfVar4 + iVar12 + 0x30) + 4) = DAT_00874c40;
          }
        }
        else {
          *(undefined4 *)(iVar13 + 0x10) = local_150;
          *(undefined4 *)(iVar13 + 0x14) = local_14c;
          *(undefined4 *)(iVar13 + 0x18) = local_148;
          *(undefined4 *)(iVar13 + 0x1c) = local_144;
          iVar13 = *(int *)((int)pfVar4 + iVar12 + 0x30);
          *(char *)(iVar13 + 8) = *(char *)(iVar13 + 8) + (char)DAT_00874c34;
        }
        iVar13 = (int)uVar20 + 1;
        uVar20 = (ulonglong)iVar13;
      } while (iVar13 < 8);
    }
  }
  return;
}


