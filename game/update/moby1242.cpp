// game/update/moby1242.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 21 functions, 0x21ccbc-0x222564
#include <stdio.h>
#include "game/update/moby1242.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1009.h"
#include "game/update/moby1034.h"
#include "game/update/moby1160.h"
#include "game/update/moby1266.h"
#include "game/update/moby1322.h"
#include "game/update/moby1379.h"
#include "game/update/moby291.h"
#include "game/update/moby335.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x021ccbc (0x14 bytes)
void M1242_0021ccbc(void)

{
  DAT_0076c644 = 0x10000;
  return;
}


// 0x021ccd0 (0x8 bytes)
void M1242_0021ccd0(void)

{
  trapWord(0x1f,ZEXT48(&stack0x00000000),ZEXT48(&stack0x00000000));
  return;
}


// 0x021ccd8 (0x2a8 bytes)
void M1242_0021ccd8
               (double param_1,double param_2,double param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong in_r8;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  iVar3 = EffectTexHeaders;
  auVar12.piece<0,4>() = (float)param_2;
  auVar12.piece<4,4>() = (float)param_2;
  auVar12.piece<8,4>() = (float)param_2;
  auVar12.piece<12,4>() = (float)param_2;
  auVar11.piece<0,4>() = (float)param_1;
  auVar11.piece<4,4>() = (float)param_1;
  auVar11.piece<8,4>() = (float)param_1;
  auVar11.piece<12,4>() = (float)param_1;
  uVar4 = 0x70;
  auVar10.piece<0,4>() = (float)param_3;
  auVar10.piece<4,4>() = (float)param_3;
  auVar10.piece<8,4>() = (float)param_3;
  auVar10.piece<12,4>() = (float)param_3;
  iVar5 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar3 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar2->command = pRVar2->command + 6;
  if (0 < param_5) {
    auVar7 = ZEXT416(0xfffffff0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    lVar6 = param_4 + 2;
    do {
      pRVar2 = HUD_Pass;
      auVar8 = loadVectorLeftIndexed(uVar4,param_4);
      auVar9 = loadVectorLeftIndexed(uVar4,lVar6);
      auVar8 = vectorShiftRightAlgebraicWord(auVar8,auVar7);
      auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar7);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      param_5 = param_5 + -1;
      lVar6 = lVar6 + 4;
      *HUD_Pass->command = 0x41904;
      param_4 = param_4 + 4;
      pRVar2->command[1] = 0;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar12);
      pRVar2->command = pRVar2->command + 2;
      pRVar2 = HUD_Pass;
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
      uVar1 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
      pRVar2->command = pRVar2->command + 3;
    } while (0 < param_5);
  }
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x021cf80 (0x314 bytes)
void M1242_0021cf80
               (double param_1,double param_2,double param_3,double param_4,longlong param_5,
               int param_6)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = in_f31;
  puVar4[0x28] = unaff_r31;
  puVar4[0x27] = unaff_r30;
  *(float *)(puVar4 + 0x18) = (float)param_2;
  *(float *)((int)puVar4 + 0xc4) = (float)param_2;
  *(float *)(puVar4 + 0x19) = (float)param_2;
  *(float *)((int)puVar4 + 0xcc) = (float)param_2;
  puVar4[0x25] = unaff_r28;
  puVar4[0x24] = unaff_r27;
  puVar4[0x23] = unaff_r26;
  puVar4[0x21] = unaff_r24;
  iVar6 = EffectTexHeaders;
  puVar4[0x22] = unaff_r25;
  auVar23 = *(undefined1 (*) [16])(puVar4 + 0x18);
  *(float *)(puVar4 + 0x18) = (float)param_1;
  *(float *)((int)puVar4 + 0xc4) = (float)param_1;
  *(float *)(puVar4 + 0x19) = (float)param_1;
  *(float *)((int)puVar4 + 0xcc) = (float)param_1;
  auVar22 = *(undefined1 (*) [16])(puVar4 + 0x18);
  uVar7 = 0xc0;
  *(float *)(puVar4 + 0x18) = (float)param_3;
  *(float *)((int)puVar4 + 0xc4) = (float)param_3;
  *(float *)(puVar4 + 0x19) = (float)param_3;
  *(float *)((int)puVar4 + 0xcc) = (float)param_3;
  puVar4[0x26] = unaff_r29;
  auVar21 = *(undefined1 (*) [16])(puVar4 + 0x18);
  iVar9 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar6 + iVar9 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar5->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar5->command[1] = 0;
  pRVar5->command[2] = 0;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 6;
  pRVar2 = pRVar5->command;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  pRVar5->command = pRVar2 + 6;
  *(float *)(puVar4 + 0xf) = (float)param_4;
  FastEulerToMtx1(uVar8 - 0xd0,uVar8 - 0xe0);
  if (0 < param_6) {
    auVar11 = ZEXT416(0xfffffff0);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x80,lVar1);
    auVar14 = loadVectorLeftIndexed(0x90,lVar1);
    auVar13 = loadVectorLeftIndexed(0x84,lVar1);
    lVar10 = param_5 + 2;
    auVar12 = loadVectorLeftIndexed(0x94,lVar1);
    do {
      pRVar5 = HUD_Pass;
      auVar18 = loadVectorLeftIndexed(uVar7,lVar10);
      auVar17 = ZEXT416(0xffffffff);
      auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftRightAlgebraicWord(auVar18,auVar11);
      auVar19 = loadVectorLeftIndexed(uVar7,param_5);
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = vectorShiftRightAlgebraicWord(auVar19,auVar11);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + 4;
      param_5 = param_5 + 4;
      *HUD_Pass->command = 0x41904;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar12,auVar19);
      pRVar5->command[1] = 0;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar15,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar13,auVar16);
      pRVar5->command = pRVar5->command + 2;
      pRVar5 = HUD_Pass;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar23);
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,4,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 1) & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,8,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 2) & 0xfffffffc) = uVar3;
      pRVar5->command = pRVar5->command + 3;
    } while (0 < param_6);
  }
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}


// 0x021d298 (0x84 bytes)
void M1242_0021d298
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  Sprite_DrawRotated((float)param_1,(float)param_2,param_3,param_4,param_5,0.0,0.0);
  return;
}


// 0x021d328 (0x228 bytes)
void M1242_0021d328
               (double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  GetEffectTex(0x42);
  dVar2 = 0.0;
  dVar4 = (double)(float)(param_3 * 20.0);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,param_4,0.0,0.0);
  dVar3 = 1.5707963705062866;
  dVar1 = (double)FastWrapRot((float)param_4,1.5707964);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)FastWrapRot((float)dVar1,(float)dVar3);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)FastWrapRot((float)dVar1,(float)dVar3);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  return;
}


// 0x021d558 (0xe0 bytes)
void M1242_0021d558
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}


// 0x021d650 (0x284 bytes)
void M1242_0021d650
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  FastDiffRots(0x3ff921fb60000000,dVar8);
  FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = FastDoubleToInt();
  iVar7 = FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)FastIntToDouble(param_7 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M1242_0021cf80((double)(longlong)(iVar6 + 0x1b0),
                   (double)(longlong)(iVar7 + g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
                   param_6);
  }
  return;
}


// 0x021d8f8 (0x4e0 bytes)
void M1242_0021d8f8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> local_110;
  GPiece<16> local_100;
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [6];
  
  iVar2 = 1;
  dVar3 = 0.019999999552965164;
  dVar4 = 0.009999999776482582;
  dVar5 = 6.0;
  dVar6 = 7.0;
  do {
    GetBonePosition(param_1,iVar2,local_100);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_f0);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_e0);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar3),local_d0);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_f0,local_110,&DAT_0076d078,1);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_e0,local_110,&DAT_0076d088,1);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_d0,local_110,&DAT_0076d098,1);
    uVar1 = (int)*(uint *)(param_2 + 0xc4) >> 0x1f;
    if (0x3f000000 < (int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0xc4)) - uVar1)) {
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_f0);
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_e0);
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar4),local_d0);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_f0,local_110,&DAT_0076d078,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_e0,local_110,&DAT_0076d088,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_d0,local_110,&DAT_0076d098,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_f0,local_110,&DAT_0076d0a8,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_100,local_110,&DAT_0076d0b8,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}


// 0x021ddf0 (0x2d4 bytes)
// strings: 0096c074: 'None'

void M1242_0021ddf0
               (int param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  GPiece<16> auStack_a0;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_60;
  float local_5c;
  float local_58;
  
  dVar9 = (double)*(float *)(param_1 + 8);
  uVar2 = (int)*(uint *)(param_1 + 4) >> 0x1f;
  iVar8 = (uVar2 >> 1 ^ *(uint *)(param_1 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar8) || (iVar8 < -0x3fc90fdb)) {
    dVar9 = -dVar9;
  }
  FastDiffRots(0x3ff921fb60000000,dVar9);
  FastEulerToMtx1(&local_90,auStack_a0);
  fVar3 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar4 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar9 = (double)((local_5c * fVar1 + local_8c * fVar4 + local_7c * fVar3) * 0.14285715);
  fVar5 = (local_60 * fVar1 + local_90 * fVar4 + local_80 * fVar3) * 0.14285715;
  fVar1 = (local_58 * fVar1 + local_88 * fVar4 + local_78 * fVar3) * 0.14285715;
  dVar10 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar9 * dVar9));
  iVar7 = FastDoubleToInt
                    ((double)((float)(longlong)
                                     (int)(((uint)(ZERO_MASK((uint)(byte)Cheats[4])
                                                  ) & 2) - 1) * fVar5));
  iVar8 = FastDoubleToInt(-dVar9);
  if (dVar10 < 46.0) {
    if (38.0 < dVar10) {
      dVar10 = (double)(float)(46.0 - dVar10);
      dVar9 = (double)FastIntToDouble(param_5 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar9 * dVar10) * 0.125));
    }
    iVar6 = (int)(param_4 << 4);
    iVar8 = iVar8 + g_ScreenHeight;
    GetEffectTex(*(undefined2 *)(iVar6 + 0x76d0c8));
    Sprite_DrawShapeWrapper
              ((iVar7 - *(short *)(iVar6 + 0x76d0d4)) + 0x1b0,
               (iVar8 - *(short *)(iVar6 + 0x76d0d6)) + -0x50,*(undefined2 *)(iVar6 + 0x76d0ce),
               *(undefined2 *)(iVar6 + 0x76d0d0),*(undefined2 *)(iVar6 + 0x76d0ca),
               *(undefined2 *)(iVar6 + 0x76d0cc),*(undefined2 *)(iVar6 + 0x76d0ce),
               *(undefined2 *)(iVar6 + 0x76d0d0));
  }
  return;
}


// 0x021e0d0 (0x2ac bytes)
double M1242_0021e0d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  GPiece<16> local_80;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_2 + 0x31) == '\0') {
    dVar7 = 10000.0;
  }
  else {
    ScreenPosFromWorldSpace(&local_60,param_2 + 0x10);
    dVar7 = 0.0625;
    iVar1 = FastDoubleToInt
                      ((double)((local_60 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
    iVar2 = FastDoubleToInt
                      ((double)(float)((double)(local_5c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar7));
    iVar5 = iVar1 - *(int *)(iVar3 + 0xe0);
    iVar6 = iVar2 - *(int *)(iVar3 + 0xe4);
    iVar5 = iVar5 * ((iVar5 >> 0x1f & 0xfffffffeU) + 1);
    iVar6 = iVar6 * ((iVar6 >> 0x1f & 0xfffffffeU) + 1);
    ScreenPosFromWorldSpace(&local_70,local_80);
    iVar3 = FastDoubleToInt
                      ((double)(float)((double)(local_70 - (float)(longlong)SCREEN_PROJECTION_MAP_X)
                                      * dVar7));
    iVar4 = FastDoubleToInt
                      ((double)(float)((double)(local_6c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar7));
    dVar7 = (double)FastIntToDouble
                              ((iVar3 - iVar1) * (iVar3 - iVar1) + (iVar4 - iVar2) * (iVar4 - iVar2)
                              );
    iVar3 = FastDoubleToInt((double)(float)SQRT(dVar7));
    if ((iVar5 < iVar3 + 0x1c) && (iVar6 < iVar3 + 0x1c)) {
      dVar7 = (double)(longlong)(iVar5 * iVar5 + iVar6 * iVar6);
    }
    else {
      dVar7 = 10000.0;
    }
  }
  return dVar7;
}


// 0x021e37c (0x90 bytes)
void M1242_0021e37c(int param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *param_2 = 0;
  *param_3 = 0;
  pMVar3 = g_MobyInstance;
  puVar4 = *(ushort **)
            ((int)&g_MobyGroups +
            (int)((longlong)(short)*(undefined4 *)(iVar2 + 0x108) << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar1 = *puVar4;
      if ((pMVar3[uVar1 & 0x7fff].state < 0x80) &&
         (*param_2 = *param_2 + 1, pMVar3[uVar1 & 0x7fff].enabled != '\0')) {
        *param_3 = *param_3 + 1;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x021e410 (0x1dc bytes)
ulonglong M1242_0021e410(int param_1,int param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  short sVar7;
  int iVar6;
  short sVar8;
  ulonglong in_r10;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar9;
  ulonglong unaff_r30;
  ushort *puVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar11;
  ulonglong in_f31;
  double dVar12;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xd0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = ZEXT48(&stack0x00000000);
  puVar4[0x1c] = in_LR;
  puVar4[0x19] = in_f31;
  puVar4[0x18] = unaff_r31;
  puVar4[0x17] = unaff_r30;
  puVar4[0x16] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  sVar8 = 0;
  puVar4[0x15] = unaff_r28;
  dVar12 = 1000.0;
  uVar3 = *(undefined4 *)(iVar6 + 0x108);
  *(undefined2 *)(param_2 + 0xe8) = 0;
  *(undefined2 *)(param_2 + 0xea) = 0;
  sVar7 = 0;
  puVar10 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)(short)uVar3 << 2));
  puVar4[0x14] = unaff_r27;
  puVar4[0x13] = unaff_r26;
  if (puVar10 != (ushort *)0x0) {
    do {
      iVar6 = (int)(((ulonglong)*puVar10 & 0x7fff) << 8);
      if ((&g_MobyInstance->state)[iVar6] < 0x80) {
        sVar8 = sVar8 + 1;
        *(short *)(param_2 + 0xe8) = sVar8;
        if ((&g_MobyInstance->enabled)[iVar6] != '\0') {
          sVar7 = sVar7 + 1;
          *(short *)(param_2 + 0xea) = sVar7;
        }
      }
      uVar2 = *puVar10;
      puVar10 = puVar10 + 1;
    } while (-1 < (short)uVar2);
  }
  if (((int)in_r10 == 0) || (dVar11 = (double)M1242_0021e0d0(param_1,in_r10), dVar12 <= dVar11)) {
    puVar10 = *(ushort **)
               ((int)&g_MobyGroups +
               (int)((longlong)(short)*(undefined4 *)(param_2 + 0x108) << 2));
    if (puVar10 == (ushort *)0x0) {
      in_r10 = 0;
    }
    else {
      in_r10 = 0;
      do {
        if (g_MobyInstance[*puVar10 & 0x7fff].state < 0x80) {
          iVar6 = M1266_00232a80
                            (g_MobyInstance + (*puVar10 & 0x7fff),puVar4 + 0xe);
          iVar9 = 1;
          lVar5 = lVar1;
          if (1 < iVar6) {
            do {
              dVar11 = (double)M1242_0021e0d0(param_1,*(undefined4 *)((int)lVar5 + 0x74));
              if (dVar11 < dVar12) {
                in_r10 = (ulonglong)*(uint *)((int)lVar5 + 0x74);
                dVar12 = dVar11;
              }
              iVar9 = iVar9 + 1;
              lVar5 = lVar5 + 4;
            } while (iVar9 < iVar6);
          }
        }
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (-1 < (short)uVar2);
    }
  }
  return in_r10;
}


// 0x021e5f8 (0x10c bytes)
void M1242_0021e5f8(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GPiece<24> local_20;
  
  if (DAT_0096b2d6 == '\0') {
    *(undefined4 *)(param_2 + 0x88) = 0;
  }
  else {
    if ((*(int *)(param_2 + 0x88) != 0) &&
       ((cVar1 = *(char *)(*(int *)(param_2 + 0x88) + 0x20), cVar1 == -2 || (cVar1 == -3)))) {
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
    iVar4 = M1242_0021e410(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2,
                           0x951500,local_20);
    iVar3 = DAT_0076c7fc;
    iVar2 = DAT_0076c7f8;
    if (iVar4 == *(int *)(param_2 + 0x88)) {
      if (*(int *)(param_2 + 0x88) != 0) {
        FastDecTimerS32(param_2 + 0x8c);
      }
    }
    else {
      *(int *)(param_2 + 0x88) = iVar4;
      *(int *)(param_2 + 0x8c) = iVar2 + iVar3;
    }
  }
  return;
}


// 0x021e750 (0xb48 bytes)
// strings: 00655038: 'minHealth' | 00a1000c: 'None'

void M1242_Hud_Draw(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  short sVar5;
  byte bVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar12;
  int iVar13;
  undefined8 uVar11;
  byte bVar14;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar15;
  ulonglong unaff_r27;
  longlong lVar16;
  ulonglong unaff_r28;
  ushort *puVar18;
  longlong lVar17;
  ulonglong unaff_r29;
  int iVar19;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  float fVar31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar16 = uVar8 - 0x180;
  puVar4 = (ulonglong *)lVar16;
  *puVar4 = uVar8;
  puVar4[0x32] = in_LR;
  puVar4[0x2b] = in_f27;
  puVar4[0x2c] = in_f28;
  puVar4[0x2d] = in_f29;
  puVar4[0x2e] = in_f30;
  puVar4[0x2f] = in_f31;
  puVar4[0x27] = unaff_r28;
  puVar4[0x2a] = unaff_r31;
  puVar4[0x28] = unaff_r29;
  puVar4[0x22] = unaff_r23;
  iVar19 = 0;
  puVar4[0x29] = unaff_r30;
  iVar15 = g_viewMtxPtr;
  uVar2 = *(uint *)(param_1 + 0x78);
  uVar20 = (ulonglong)uVar2;
  iVar13 = *(int *)(g_viewMtxPtr + 0xc);
  puVar4[0x26] = unaff_r27;
  puVar4[0x25] = unaff_r26;
  puVar4[0x24] = unaff_r25;
  puVar4[0x23] = unaff_r24;
  puVar4[0x21] = unaff_r22;
  puVar4[0x20] = unaff_r21;
  if (((iVar13 == 0) || (*(char *)(iVar15 + 0x11) == '\x04')) ||
     (*(char *)(iVar15 + 0x11) == '\x05')) {
    iVar19 = 1;
  }
  idol_draw::BindFragmentProgram(iVar15,HUD_Pass,0xd);
  auVar27 = loadVectorLeftIndexed(0xf4,uVar20);
  auVar28 = loadVectorRightIndexed(0x104,uVar20);
  auVar29 = ZEXT416(0xffffffff);
  auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar30 = loadVectorLeftIndexed(in_LR,0x21e708);
  auVar27 = vectorConvertFromSignedFixedPointWord(auVar27 | auVar28,0);
  auVar28 = vectorShiftLeftIntegerWord(auVar29,auVar29);
  auVar29 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar27,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar28
                      );
  auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xc0,lVar16);
  *(undefined4 *)(puVar4 + 0x18) = uVar3;
  uVar9 = FUN_004de9c4(iVar15,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(iVar15,HUD_Pass,0xd,uVar9,uVar8 - 0xc0,1);
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar9);
  uVar10 = GetEffectTex(0x3c);
  iVar12 = 0x170 - (((uint)(ZERO_MASK(iVar19)) & 0xffffffec) + 0x14);
  iVar13 = g_ScreenHeight + -0x90;
  puVar4[0xe] = 0x70808080;
  puVar4[0xf] = uVar10;
  Sprite_DrawShapeWrapper(iVar12,iVar13,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(iVar15,HUD_Pass,0xc);
  uVar10 = GetEffectTex(0x3d);
  iVar13 = g_ScreenHeight;
  puVar4[0xe] = 0x70808080;
  puVar4[0xf] = uVar10;
  Sprite_DrawShapeWrapper(iVar12,iVar13 + -0x90,0x80,0x80,0,0,0x80,0x80);
  uVar9 = idol_draw::PackCmd(0,2,0,1,0x80);
  SetGSReg(3,uVar9);
  GetEffectTex(0x3e);
  puVar18 = *(ushort **)
             ((int)&g_MobyGroups +
             (int)((longlong)(short)*(undefined4 *)(uVar2 + 0x108) << 2));
  if (puVar18 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar18 & 0x7fff].state < 0x80) {
        iVar13 = M1266_00232a80
                           (g_MobyInstance + (*puVar18 & 0x7fff),(int)puVar4 + 0xc4);
        iVar15 = 0;
        lVar17 = lVar16;
        if (0 < iVar13) {
          do {
            M1242_0021ddf0(0x951510,0x951500,*(undefined4 *)((int)lVar17 + 0xc4),0,0x75808080);
            iVar15 = iVar15 + 1;
            lVar17 = lVar17 + 4;
          } while (iVar15 < iVar13);
        }
      }
      uVar1 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar1);
  }
  uVar10 = (ulonglong)DAT_0096b2d7;
  lVar17 = 0x40;
  iVar13 = 0;
  lVar16 = (ZERO_MASK(iVar19) & 0xfffffffffffffff0U) + 0x28;
  if (DAT_0096b2d7 != 0) {
    uVar9 = 0x3fe0000000000000;
    bVar14 = 0x10;
    do {
      puVar4[0x1d] = (longlong)(int)lVar17;
      bVar6 = DAT_0096b2d6;
      uVar21 = puVar4[0x1d];
      puVar4[0x1d] = (longlong)(int)lVar16;
      if (iVar13 < (int)(uint)bVar6) {
        M1242_0021ccd8((double)(longlong)puVar4[0x1d],(double)(longlong)uVar21,uVar9,&DAT_0076cd1c,
                       0x19,bVar14,uVar10,&DAT_00fffff3,0x50008f00);
      }
      else {
        M1242_0021ccd8((double)(longlong)puVar4[0x1d],(double)(longlong)uVar21,uVar9,&DAT_0076cd1c,
                       0x19,bVar14,uVar10,&DAT_00fffff3,0x20004f00);
      }
      uVar10 = ZERO_MASK((((int)(uint)DAT_0096b2d7 >> 1) - iVar13));
      lVar16 = lVar16 + (ZERO_MASK((((int)(uint)DAT_0096b2d7 >> 1) - iVar13)) & 0x1eU)
      ;
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + (uVar10 & 0x2eU - lVar17) + 0x12;
      bVar14 = DAT_0096b2d7;
    } while (iVar13 < (int)(uint)DAT_0096b2d7);
  }
  iVar13 = *(int *)(uVar2 + 0xe0);
  iVar15 = *(int *)(uVar2 + 0xe4);
  GetEffectTex(0x11);
  puVar4[0x1d] = (longlong)iVar13;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0xe] = ZEXT48(&DAT_00fffff3);
  puVar4[0xf] = 0xffffffffff20ff20;
  uVar10 = puVar4[0x1d];
  puVar4[0x1d] = (longlong)iVar15;
  dVar24 = 40.0;
  dVar26 = 0.0;
  dVar25 = 0.5;
  puVar4[0x14] = 0;
  dVar23 = (double)(longlong)uVar10;
  dVar22 = (double)(longlong)puVar4[0x1d];
  Sprite_DrawRotated
            ((float)(longlong)uVar10,(float)(longlong)puVar4[0x1d],40.0,40.0,0.0,0.5,0.5);
  GetEffectTex(0x12);
  puVar4[0xe] = ZEXT48(&DAT_00fffff3);
  puVar4[0xf] = 0xffffffffff20ff20;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  Sprite_DrawRotated((float)dVar23,(float)dVar22,dVar24,dVar24,dVar26,dVar25,dVar25);
  GetEffectTex(8);
  puVar4[0xe] = ZEXT48(&DAT_00fffff3);
  puVar4[0xf] = 0xffffffffff20ff20;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  Sprite_DrawRotated((float)dVar23,(float)dVar22,10.0,10.0,dVar26,dVar25,dVar25);
  M1242_0021e5f8(param_1,uVar20);
  if (*(uint *)(uVar2 + 0x88) != 0) {
    ScreenPosFromWorldSpace(uVar8 - 0xd0,(ulonglong)*(uint *)(uVar2 + 0x88) + 0x10);
    puVar4[0x1d] = (longlong)SCREEN_PROJECTION_MAP_X;
    dVar22 = 0.0625;
    uVar9 = FastDoubleToInt
                      ((double)((*(float *)(puVar4 + 0x16) - (float)(longlong)puVar4[0x1d]) * 0.0625
                               ));
    puVar4[0x1d] = (longlong)SCREEN_PROJECTION_MAP_Y;
    uVar11 = FastDoubleToInt
                       ((double)(float)((double)(*(float *)((int)puVar4 + 0xb4) -
                                                (float)(longlong)puVar4[0x1d]) * dVar22));
    if (DAT_0076c7f8 < *(int *)(uVar2 + 0x8c)) {
      dVar22 = (double)FastIntToDouble(*(int *)(uVar2 + 0x8c) - DAT_0076c7f8);
      dVar23 = (double)FastIntToDouble(DAT_0076c7fc);
      dVar24 = (double)((float)(dVar22 / dVar23) * 5.0 + 1.0);
      dVar22 = (double)((1.0 - (float)(dVar22 / dVar23)) * 2.0);
      dVar23 = 1.0 - dVar22;
      if (dVar23 < 0.0) {
        dVar22 = 1.0;
      }
      FastDoubleToInt
                ((double)(float)(dVar22 * 96.0),0x3ff0000000000000,dVar23,0x4014000000000000);
      uVar9 = FastIntToDouble(uVar9);
      uVar11 = FastIntToDouble(uVar11);
      dVar22 = (double)FastIntToDouble(worldUpdateTime);
      fVar31 = MB_WrapRot((float)(dVar22 * 0.03333333507180214));
      M1242_0021d328(uVar9,uVar11,dVar24,(double)fVar31);
      *(undefined4 *)(uVar2 + 0xec) = 0;
    }
    else {
      puVar4[0x1d] = (longlong)(int)(animationSpeed * 20.5);
      uVar9 = FastIntToDouble(uVar9);
      uVar11 = FastIntToDouble(uVar11);
      M1242_0021d328(uVar9,uVar11,0x3ff0000000000000,dVar26);
      *(undefined4 *)(uVar2 + 0xec) = *(undefined4 *)(uVar2 + 0x88);
    }
  }
  if (DAT_0096b2e0 * 0.25 <= DAT_0096b2dc) {
    if (*(int *)(uVar2 + 0x11c) != 0) {
      if (g_HelpFlags.piece<704,2>() != -1) {
        g_HelpFlags.piece<704,2>() = g_HelpFlags.piece<704,2>() + 1;
      }
      puVar4[0x1d] = (longlong)g_GameFrameCount;
      uVar7 = g_HelpFlags.piece<706,2>();
      puVar4[0x1d] = (longlong)
                     (int)(animationSpeed * (float)((double)(longlong)puVar4[0x1d] + dVar25));
      iVar13 = *(int *)((int)puVar4 + 0xec);
      if ((int)(uint)(ushort)uVar7 < iVar13 / 600) {
        sVar5 = (short)(iVar13 >> 0x1f);
        g_HelpFlags.piece<706,2>() =
             ((short)(iVar13 / 600) + sVar5) - ((short)((short)(iVar13 / 0x2580000) + sVar5) >> 0xf)
        ;
      }
      g_HelpFlags.piece<708,4>() = g_HelpFlags.piece<708,4>() | 1 << (Level & 0x3f) | 0x80000000;
      *(undefined4 *)(uVar2 + 0x11c) = 0;
    }
  }
  else if (g_HelpFlags.piece<704,2>() == 0) {
    Help_QueueMessage(STR_SHOOT_DOWN_THOSE_SMALL_0x2AFF,0x58);
  }
  else if ((ushort)g_HelpFlags.piece<704,2>() < 2) {
    iVar13 = *(int *)(uVar2 + 0x11c) + 1;
    *(int *)(uVar2 + 0x11c) = iVar13;
    puVar4[0x1d] = (longlong)(int)(animationSpeed * 1800.5);
    if (*(int *)((int)puVar4 + 0xec) < iVar13) {
      Help_QueueMessage(STR_SHOOT_DOWN_THOSE_SMALL_0x2AFF,0x58);
    }
  }
  FastDecTimerS32(uVar20 + 0x120);
  if (((DAT_0096b2d6 < 5) && (g_HelpFlags.piece<696,2>() == 0)) ||
     ((DAT_0096b2d6 == 0 &&
      (((ushort)g_HelpFlags.piece<696,2>() < 2 && (*(int *)(uVar2 + 0x120) == 0)))))) {
    Help_QueueMessage(STR_SHOOT_DOWN_THOSE_SMALL_0x2AFE,0x57);
    auVar29 = ZEXT416(0xffffffff);
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    auVar27 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = loadVectorLeftIndexed(0x38,0x21e708);
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar29 = vectorMultiplyAddFloatingPoint
                        (auVar28,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                         auVar27);
    auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x120,uVar20);
    *(undefined4 *)(uVar2 + 0x120 & 0xfffffffc) = uVar3;
  }
  if (g_HelpFlags.piece<688,2>() == 0) {
    iVar13 = *(int *)(uVar2 + 0x128);
    *(int *)(uVar2 + 0x128) = iVar13 + 1;
    puVar4[0x1d] = (longlong)(int)(animationSpeed * 3600.5);
    if (*(int *)((int)puVar4 + 0xec) < iVar13) {
      Help_QueueMessage(STR_POSITION_THE_TARGETING_RETICULE_0x2AFD,0x56);
    }
  }
  if (*(char *)(param_1 + 0x20) == '\b') {
    uVar9 = help_msg_string_by_index(STR_MISSION_COMPLETED);
    FontPrintLargeCenter(0x100,200,0x80005080,uVar9,0x11);
  }
  fVar31 = (DAT_0096b2dc - *(float *)(uVar2 + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar31) < 0.0) {
    fVar31 = fVar31 / ABS(fVar31);
  }
  fVar31 = *(float *)(uVar2 + 0xf0) + fVar31;
  *(float *)(uVar2 + 0xf0) = fVar31;
  iVar13 = FastDoubleToInt((double)((fVar31 * 251.0) / DAT_0096b2e0));
  iVar13 = iVar13 + 2;
  iVar13 = iVar13 + ((uint)(0xfd - (longlong)iVar13 >> 0x3f) & 0xfdU - iVar13);
  *(uint *)(uVar2 + 0xf4) = iVar13 + ((uint)((longlong)iVar13 + -2 >> 0x3f) & 2U - iVar13);
  return;
}


// 0x021f2b0 (0x2fc bytes)
void M1242_0021f2b0
               (double param_1,double param_2,MobyInstance *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  longlong local_50;
  
  MB_SphericalToVector
            (DAT_0076c6f8 * DAT_0076c72c,(float)param_1,(float)param_2,&local_90);
  local_90 = local_90 + *param_4;
  local_8c = local_8c + param_4[1];
  local_88 = local_88 + param_4[2];
  iVar5 = FastDecTimerS32(param_4 + 0x20);
  if ((iVar5 != 0) && ((g_Pad.padDownButtons & 0x84) != 0)) {
    dVar7 = 0.0;
    fVar6 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    fVar1 = 2.2 / fVar6;
    dVar9 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    dVar8 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (0.0 - fVar6 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    GetBonePosition(param_3,(*(byte *)((int)param_4 + 0x61) & 1) + 3,&local_80);
    local_80 = (float)((double)local_80 + dVar7);
    local_7c = (float)((double)local_7c + dVar8);
    local_78 = (float)((double)local_78 + dVar9);
    M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_3,&local_90,&local_80);
    fVar6 = DAT_0076c6fc;
    *(byte *)((int)param_4 + 0x61) = *(byte *)((int)param_4 + 0x61) ^ 1;
    param_4[0x20] = fVar6;
    PlayMobySound(3,0,param_3);
  }
  fVar4 = 0.0;
  local_64 = local_84;
  fVar3 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar2 = 23.0 / fVar3;
  fVar1 = local_90 * fVar2;
  fVar6 = local_8c * fVar2;
  fVar2 = local_88 * fVar2;
  local_90 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_90 = fVar1;
  }
  local_8c = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_8c = fVar6;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_90 = fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_8c = fVar6;
  }
  local_88 = fVar4;
  if (fVar3 - 0.0 < 0.0) {
    local_88 = fVar2;
  }
  local_70 = local_90 + (param_3->pos).x;
  local_6c = local_8c + (param_3->pos).y;
  local_68 = local_88 + (param_3->pos).z;
  ScreenPosFromWorldSpace(&local_60,&local_70);
  local_50 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar9 = 0.0625;
  fVar6 = (float)FastDoubleToInt((double)((local_60 - (float)local_50) * 0.0625));
  param_4[0x38] = fVar6;
  local_50 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar6 = (float)FastDoubleToInt
                           ((double)(float)((double)(local_5c - (float)local_50) * dVar9));
  param_4[0x39] = fVar6;
  return;
}


// 0x021f5b8 (0x1e0 bytes)
void M1242_0021f5b8(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  GPiece<40> local_40;
  
  iVar2 = FastDecTimerS32(param_2 + 0x84);
  if (((iVar2 != 0) && ((g_Pad.padDownButtons & 0x28) != 0)) && (DAT_0096b2d6 != '\0')) {
    uVar1 = *(short *)(param_2 + 0x6a) + 1U & 3;
    *(ushort *)(param_2 + 0x6a) = uVar1;
    GetBonePosition(param_1,(longlong)(short)uVar1 + 7,local_40);
    iVar2 = 0;
    if ((*(int *)(param_2 + 0x88) != 0) && (*(int *)(param_2 + 0x8c) < 0x1f5)) {
      iVar2 = *(int *)(param_2 + 0x88);
    }
    iVar2 = Spawn_Moby1034
                      ((double)(DAT_0076c700 * DAT_0076c72c),param_1,local_40,iVar2,param_1 + 0x40,
                       &PTR_DAT_00770000,(int)(animationSpeed * 300.5));
    if (iVar2 != 0) {
      PlayMobySound(2,0,(MobyInstance *)param_1);
      DAT_0096b2d6 = DAT_0096b2d6 + -1;
      *(undefined4 *)(param_2 + 0x84) = DAT_0076c704;
    }
  }
  return;
}


// 0x021f7a8 (0x98 bytes)
double M1242_0021f7a8(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_3 + 0x14) - DAT_0076d184;
  fVar2 = *(float *)(param_3 + 0x10) - DAT_0076d180;
  fVar3 = *(float *)(param_3 + 0x18) - DAT_0076d188;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (220.0 < fVar1) {
    dVar4 = (double)((fVar1 - 220.0) * 0.0055555557);
    if (dVar4 - 0.0 < 0.0) {
      dVar4 = 0.0;
    }
    if (1.0 - dVar4 < 0.0) {
      dVar4 = 1.0;
    }
    param_1 = (double)(float)((double)(float)(1.0 - dVar4) * param_1 +
                             (double)(float)(dVar4 * param_2));
  }
  return param_1;
}


// 0x021f870 (0x6c0 bytes)
// inlined: FastAtan2 @0x21fac0
undefined4 *
M1242_0021f870(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  Cuboid *pCVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x110;
  puVar7 = (ulonglong *)lVar17;
  *puVar7 = uVar15;
  puVar7[0x24] = in_LR;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  lVar13 = uVar15 - 0x50;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = loadVectorLeftIndexed(lVar13,0x21f840);
  fVar8 = animationSpeed * 60.5;
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  puVar7[0x1c] = unaff_r29;
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar9 = (int)param_1;
  uVar5 = *(uint *)(iVar9 + 0x78);
  uVar23 = (ulonglong)uVar5;
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  fVar1 = *(float *)(uVar5 + 100);
  auVar33 = loadVectorLeftIndexed(100,uVar23);
  auVar34 = loadVectorRightIndexed(0x74,uVar23);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  fVar2 = *(float *)(uVar5 + 0x10);
  auVar36 = loadVectorLeftIndexed(0x10,uVar23);
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
  fVar3 = *(float *)(uVar5 + 0x14);
  auVar32 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = loadVectorRightIndexed(0x20,uVar23);
  puVar7[0x1d] = unaff_r30;
  fVar4 = *(float *)(iVar9 + 0x10);
  puVar7[0x1e] = unaff_r31;
  auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
  fVar1 = fVar1 * (float)(longlong)fVar8;
  auVar40 = vectorMultiplyAddFloatingPoint(auVar33 | auVar34,auVar31,auVar32);
  auVar31 = loadVectorLeftIndexed(0x14,uVar23);
  auVar32 = loadVectorRightIndexed(0x24,uVar23);
  auVar33 = loadVectorLeftIndexed(0x10,param_1);
  pCVar22 = Cuboids + *(int *)(uVar5 + 0x104);
  uVar16 = ZEXT48(pCVar22);
  auVar34 = loadVectorLeftIndexed(0x14,param_1);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar36 | auVar35,auVar40,auVar33);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar31 | auVar32,auVar40,auVar34);
  auVar32 = loadVectorLeftIndexed(0x30,uVar16);
  fVar8 = (fVar2 * fVar1 + fVar4) - (pCVar22->pos).x;
  fVar10 = (fVar3 * fVar1 + *(float *)(iVar9 + 0x14)) - (pCVar22->pos).y;
  auVar33 = vectorSubtractFloatingPoint(auVar33,auVar32);
  auVar32 = loadVectorLeftIndexed(0x34,uVar16);
  auVar35 = loadVectorLeftIndexed(0x18,uVar23);
  auVar32 = vectorSubtractFloatingPoint(auVar31,auVar32);
  auVar36 = loadVectorRightIndexed(0x28,uVar23);
  fVar1 = (pCVar22->matrix).v0.x;
  fVar2 = (pCVar22->matrix).v0.y;
  auVar39 = loadVectorLeftIndexed(0x28,uVar16);
  auVar34 = loadVectorLeftIndexed(0x38,uVar16);
  auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar6 = storeVectorElementWordIndexed
                    (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x70,lVar17);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  auVar33 = vectorAddFloatingPoint(auVar39,auVar34);
  uVar6 = storeVectorElementWordIndexed
                    (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x74,lVar17);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  auVar31 = loadVectorLeftIndexed(0x18,param_1);
  *(float *)(puVar7 + 0xf) = ABS(fVar8) - ABS(fVar10);
  dVar30 = 0.0;
  uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  auVar31 = vectorMultiplyAddFloatingPoint(auVar35 | auVar36,auVar40,auVar31);
  dVar27 = (double)SQRT(fVar8 * fVar8 + fVar10 * fVar10);
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar12 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar12 = ABS(fVar10);
  }
  dVar29 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  puVar7[0x1b] = unaff_r28;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar1 = ABS(fVar8);
  }
  dVar26 = dVar30;
  if (0.0 < fVar12) {
    lVar20 = uVar15 - 0x100;
    lVar19 = uVar15 - 0x94;
    lVar18 = uVar15 - 0x84;
    lVar24 = 2;
    fVar1 = (fVar1 - fVar12) / (fVar1 + fVar12);
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar7 + 0x11) = fVar1;
    *(float *)(puVar7 + 0x10) = fVar1;
    *(float *)((int)puVar7 + 0x84) = fVar1;
    *(float *)((int)puVar7 + 0x7c) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar1;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar1 * fVar1;
      iVar9 = (int)lVar19;
      lVar20 = lVar20 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar20 = uVar15 - 0x94;
    pfVar21 = (float *)&DAT_007358e0;
    lVar24 = 4;
    lVar18 = lVar20;
    lVar19 = lVar17;
    do {
      fVar1 = *pfVar21;
      fVar2 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x7c) * fVar1;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    do {
      iVar9 = (int)lVar17;
      iVar11 = (int)lVar20;
      lVar17 = lVar17 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  uVar25 = FastWrapRot((float)dVar26,3.14159);
  auVar32 = loadVectorLeftIndexed(0x10,0x21f840);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  if ((double)(float)(dVar29 - 10.0) < dVar27) {
    dVar28 = (double)(((float)(dVar27 - dVar29) + 10.0) * 0.1);
    dVar29 = (double)FastDiffRots(uVar25,(double)*(float *)(uVar5 + 0x38));
    dVar26 = 1.0;
    dVar27 = dVar26;
    if ((dVar28 <= 1.0) && (dVar27 = dVar28, dVar28 < dVar30)) {
      dVar27 = dVar30;
    }
    if (dVar29 <= dVar30) {
      fVar1 = *param_2;
    }
    else {
      fVar1 = *param_2;
      dVar26 = -1.0;
    }
    *param_2 = (float)((double)(float)(dVar26 - (double)fVar1) * dVar27 + (double)fVar1);
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  auVar36 = vectorSubtractFloatingPoint(auVar33,auVar32);
  auVar34 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  auVar34 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar14 = &DAT_0021f840;
    auVar33 = loadVectorLeftIndexed(0x28,0x21f840);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x2c,0x21f840);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0x14,0x21f840);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = vectorSubtractFloatingPoint
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar31);
      auVar36 = vectorAddFloatingPoint(auVar31,auVar32);
      auVar33 = loadVectorLeftIndexed(0x34,uVar23);
      auVar39 = loadVectorRightIndexed(0x44,uVar23);
      auVar31 = loadVectorLeftIndexed(0x20,0x21f840);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0x18,0x21f840);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar39 = vectorAddFloatingPoint
                          (auVar33 | auVar39,
                           auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar31 = ZEXT416(0xffffffff);
      auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = loadVectorLeftIndexed(0x24,0x21f840);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar33);
      auVar31 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar33,auVar32);
      auVar31 = auVar32;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar31 = auVar34;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar31 = ZEXT416(0);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        }
      }
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar34,auVar32);
      auVar33 = auVar32;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar33 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
        auVar33 = auVar35;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar33 = ZEXT416(0);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        }
      }
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = loadVectorLeftIndexed(lVar13,param_3);
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar35);
      puVar14 = &g_heroMtx;
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar34);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar35);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
      *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
      DAT_0096b2ef = DAT_0096b2ef | 2;
    }
  }
  else {
    auVar34 = vectorSubtractFloatingPoint(auVar31,auVar33);
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0x14,0x21f840);
    auVar39 = loadVectorLeftIndexed(0x34,uVar23);
    auVar33 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = loadVectorLeftIndexed(0x18,0x21f840);
    auVar32 = vectorAddFloatingPoint(auVar34,auVar32);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar40 = loadVectorRightIndexed(0x44,uVar23);
    auVar38 = loadVectorLeftIndexed(0x20,0x21f840);
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar36 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar35);
    auVar31 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = loadVectorLeftIndexed(0x24,0x21f840);
    auVar33 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar39 | auVar40);
    auVar31 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar35,auVar34);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar37);
    auVar31 = auVar34;
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar31 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar31 = auVar36;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      }
    }
    auVar33 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanFloatingPoint(auVar33,auVar34);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar34 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar33,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
      auVar34 = auVar32;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar32 = ZEXT416(0);
        auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      }
    }
    auVar32 = ZEXT416(0xffffffff);
    auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar32 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = loadVectorLeftIndexed(lVar13,param_3);
    auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar35 = loadVectorLeftIndexed(0x1c,0x21f840);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar33);
    auVar31 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    puVar14 = &g_heroMtx;
    auVar31 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar34);
    auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar32,auVar34);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
    *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  return puVar14;
}


// 0x021ff90 (0x1078 bytes)
// inlined: FastRSqrt @0x220424, FastAtan2 @0x220af8, FastAtan2 @0x220cc4
// strings: 00a0feec: 'None'

void M1242_0021ff90(MobyInstance *param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  short sVar11;
  MOBY_OCLASSES MVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  CONTROLLER_INPUT CVar18;
  undefined2 uVar19;
  ulonglong uVar20;
  int iVar23;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  ulonglong in_f27;
  ulonglong in_f28;
  undefined8 uVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  float fVar42;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar22 = uVar20 - 0x1e0;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar20;
  puVar13[0x3e] = in_LR;
  puVar13[0x37] = in_f27;
  puVar13[0x38] = in_f28;
  puVar13[0x39] = in_f29;
  puVar13[0x3a] = in_f30;
  puVar13[0x3b] = in_f31;
  puVar13[0x36] = unaff_r31;
  puVar13[0x35] = unaff_r30;
  dVar33 = 0.0;
  *(undefined4 *)(puVar13 + 0x18) = 0;
  *(undefined4 *)((int)puVar13 + 0xc4) = 0;
  *(undefined4 *)(puVar13 + 0x19) = 0;
  *(undefined4 *)((int)puVar13 + 0xcc) = 0;
  fVar2 = DAT_0076c72c;
  uVar32 = 0x4020000000000000;
  fVar42 = g_FrameTime * 8.0;
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  fVar3 = DAT_0076c72c;
  iVar14 = (int)param_2;
  sVar11 = *(short *)(iVar14 + 0x68);
  bVar1 = DAT_0076c68c < sVar11;
  puVar13[0x34] = unaff_r29;
  puVar13[0x33] = unaff_r28;
  *(float *)(puVar13 + 0x19) = fVar42 * fVar2;
  fVar2 = DAT_0076c72c;
  fVar42 = DAT_0076c684;
  if (bVar1) {
    if ((g_Pad.padDownButtons & 0x40) == 0) {
      fVar2 = *(float *)(iVar14 + 100);
      if (DAT_0076c690 * fVar3 - DAT_0076c688 * fVar3 <= fVar2) {
        fVar42 = DAT_0076c690 * fVar3;
        if (fVar42 < fVar2) {
          fVar42 = (DAT_0076c690 * fVar3 - fVar2) * DAT_0076c69c + fVar2;
        }
      }
      else {
        fVar42 = DAT_0076c688 * fVar3 + fVar2;
      }
      *(float *)(iVar14 + 100) = fVar42;
    }
    else {
      if (CHAR_ARRAY_00a0feec.piece<224,2>() != -1) {
        CHAR_ARRAY_00a0feec.piece<224,2>() = CHAR_ARRAY_00a0feec.piece<224,2>() + 1;
      }
      puVar13[0x31] = (longlong)g_GameFrameCount;
      uVar19 = CHAR_ARRAY_00a0feec.piece<226,2>();
      puVar13[0x31] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x31] + 0.5));
      iVar23 = *(int *)((int)puVar13 + 0x18c);
      if ((int)(uint)(ushort)uVar19 < iVar23 / 600) {
        sVar11 = (short)(iVar23 >> 0x1f);
        CHAR_ARRAY_00a0feec.piece<226,2>() =
             ((short)(iVar23 / 600) + sVar11) -
             ((short)((short)(iVar23 / 0x2580000) + sVar11) >> 0xf);
      }
      fVar42 = DAT_0076c698 * fVar3 + *(float *)(iVar14 + 100);
      CHAR_ARRAY_00a0feec.piece<228,4>() = CHAR_ARRAY_00a0feec.piece<228,4>() | 1 << (Level & 0x3f) | 0x80000000;
      *(float *)(iVar14 + 100) = fVar42;
      fVar2 = DAT_0076c694 * DAT_0076c72c;
      if (fVar2 < fVar42) {
        *(float *)(iVar14 + 100) = fVar2;
        fVar42 = fVar2;
      }
    }
  }
  else {
    *(short *)(iVar14 + 0x68) = sVar11 + 1;
    fVar42 = fVar42 * fVar2 + *(float *)(iVar14 + 100);
    *(float *)(iVar14 + 100) = fVar42;
  }
  fVar4 = DAT_0096ba04;
  fVar5 = g_heroPadStick;
  fVar3 = DAT_0076c750;
  fVar2 = DAT_0076c740;
  if (DAT_0076c6a0 < *(short *)(iVar14 + 0x68)) {
    CVar18 = g_Pad.downButtons & L3;
    *(float *)(puVar13 + 0x26) = g_heroPadStick;
    *(float *)((int)puVar13 + 0x134) = fVar4;
    fVar7 = DAT_0076c754;
    fVar6 = DAT_0076c744;
    fVar42 = DAT_0076c6b8;
    if (CVar18 != 0) {
      fVar4 = fVar4 / DAT_0076c6b0;
      fVar2 = DAT_0076c6bc * (fVar5 / DAT_0076c6b4);
      *(float *)(puVar13 + 0x26) = fVar5 / DAT_0076c6b4;
      *(float *)(puVar13 + 0x26) = fVar2;
      *(float *)((int)puVar13 + 0x134) = fVar4;
      *(float *)((int)puVar13 + 0x134) = fVar42 * fVar4;
      fVar3 = fVar7;
      fVar2 = fVar6;
    }
    dVar36 = (double)fVar2;
    dVar34 = (double)fVar3;
    M1242_0021f870(param_1,uVar20 - 0xb0,uVar20 - 0xac);
    AccelDelt(*(float *)(puVar13 + 0x26),DAT_0076c738,DAT_0076c73c,(float)dVar36,
                        (float *)(iVar14 + 0x6c),0x770000,(float *)(iVar14 + 0x90));
    AccelDelt(*(float *)((int)puVar13 + 0x134),DAT_0076c748,DAT_0076c74c,(float)dVar34,
                        (float *)(iVar14 + 0x70),0x770000,(float *)(iVar14 + 0x94));
    AccelDeltAng
              ((double)(*(float *)(iVar14 + 0x6c) * DAT_0076c718),(double)DAT_0076c758,
               (double)DAT_0076c75c,(double)DAT_0076c760,param_2 + 0x30,&PTR_DAT_00770000,
               param_2 + 0x98);
    dVar34 = (double)FastDiffRots
                               ((double)*(float *)(iVar14 + 0x34),
                                (double)(*(float *)(iVar14 + 0x70) * DAT_0076c6b0));
    *(float *)(iVar14 + 0x34) = (float)dVar34;
    if (dVar34 <= 1.3962633609771729) {
      if (dVar34 < -1.3962633609771729) {
        *(undefined4 *)(iVar14 + 0x34) = 0xbfb2b8c2;
      }
    }
    else {
      *(undefined4 *)(iVar14 + 0x34) = 0x3fb2b8c2;
    }
    dVar34 = (double)FastDiffRots
                               ((double)*(float *)(iVar14 + 0x38),
                                (double)(*(float *)(iVar14 + 0x6c) * DAT_0076c6b4));
    *(float *)(iVar14 + 0x38) = (float)dVar34;
    fVar42 = *(float *)(iVar14 + 100);
  }
  MB_SphericalToVector
            (fVar42,*(float *)(iVar14 + 0x38),-*(float *)(iVar14 + 0x34),(float *)(puVar13 + 0x1a));
  fVar42 = *(float *)((int)puVar13 + 0xd4);
  fVar2 = *(float *)(puVar13 + 0x1a);
  fVar3 = *(float *)(puVar13 + 0x1b);
  fVar4 = *(float *)(iVar14 + 100);
  fVar5 = *(float *)(iVar14 + 0x70);
  fVar6 = *(float *)(iVar14 + 0x6c);
  fVar7 = (param_1->pos).x;
  fVar8 = (param_1->pos).y;
  fVar9 = (param_1->pos).z;
  fVar15 = fVar3 * fVar3 + fVar2 * fVar2 + fVar42 * fVar42;
  if ((double)SQRT(fVar15) == dVar33) {
    uVar10 = *(undefined4 *)((int)puVar13 + 0xdc);
    dVar34 = dVar33;
    dVar36 = dVar33;
    dVar37 = dVar33;
  }
  else {
    fVar16 = 1.0 / SQRT(fVar15);
    uVar10 = *(undefined4 *)((int)puVar13 + 0xdc);
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    dVar37 = (double)(fVar2 * fVar16);
    dVar36 = (double)(fVar42 * fVar16);
    dVar34 = (double)(fVar3 * fVar16);
  }
  *(float *)(iVar14 + 0x10) = (float)dVar37;
  *(float *)(iVar14 + 0x14) = (float)dVar36;
  *(float *)(iVar14 + 0x18) = (float)dVar34;
  *(undefined4 *)(iVar14 + 0x1c) = uVar10;
  (param_1->pos).x = fVar7 + fVar2;
  (param_1->pos).y = fVar8 + fVar42;
  (param_1->pos).z = fVar9 + fVar3;
  dVar34 = (double)(fVar4 - DAT_0076c690);
  if (dVar34 - dVar33 < 0.0) {
    dVar34 = dVar33;
  }
  fVar42 = (float)(dVar34 / (double)(DAT_0076c694 - DAT_0076c690));
  *(float *)(iVar14 + 0xc4) = fVar42;
  dVar36 = (double)(fVar6 * DAT_0076c71c * DAT_0076c728);
  dVar34 = (double)((fVar5 * DAT_0076c7c8 + DAT_0076c6c4) * DAT_0076c728);
  AccelDelt(-(DAT_0076c7cc * fVar42 - -(fVar5 * DAT_0076c7c4 - DAT_0076c6c0)) *
                      DAT_0076c728,DAT_0076c7a0,DAT_0076c7a4,DAT_0076c7a8,(float *)(iVar14 + 0xb4),
                      0x770000,(float *)(iVar14 + 200));
  AccelDelt((float)dVar36,DAT_0076c7ac,DAT_0076c7b0,DAT_0076c7b4,(float *)(iVar14 + 0xb8),
                      0x770000,(float *)(iVar14 + 0xcc));
  fVar42 = AccelDelt((float)dVar34,DAT_0076c7b8,DAT_0076c7bc,DAT_0076c7c0,
                               (float *)(iVar14 + 0xbc),0x770000,(float *)(iVar14 + 0xd0));
  dVar37 = (double)*(float *)(iVar14 + 0xb4);
  dVar36 = (double)*(float *)(iVar14 + 0xb8);
  dVar34 = (double)*(float *)(iVar14 + 0xbc);
  FastEulerToMtx((double)fVar42,uVar20 - 0xe0,param_2 + 0x30);
  fVar42 = (param_1->pos).x;
  fVar2 = (param_1->pos).y;
  fVar3 = (param_1->pos).z;
  *(f32 *)((int)puVar13 + 0xfc) = (param_1->pos).w;
  *(float *)(puVar13 + 0x1e) =
       fVar42 + (float)((double)*(float *)(puVar13 + 0x24) * dVar34 +
                       (double)(float)((double)*(float *)(puVar13 + 0x20) * dVar37 +
                                      (double)(float)((double)*(float *)(puVar13 + 0x22) * dVar36)))
  ;
  *(float *)((int)puVar13 + 0xf4) =
       fVar2 + (float)((double)*(float *)((int)puVar13 + 0x124) * dVar34 +
                      (double)(float)((double)*(float *)((int)puVar13 + 0x104) * dVar37 +
                                     (double)(float)((double)*(float *)((int)puVar13 + 0x114) *
                                                    dVar36)));
  *(float *)(puVar13 + 0x1f) =
       fVar3 + (float)((double)*(float *)(puVar13 + 0x25) * dVar34 +
                      (double)(float)((double)*(float *)(puVar13 + 0x21) * dVar37 +
                                     (double)(float)((double)*(float *)(puVar13 + 0x23) * dVar36)));
  Camera_SetMobyDrivenTargetPos((float *)(puVar13 + 0x1e));
  uVar29 = FastWrapRot
                     (*(float *)(iVar14 + 0x30) * DAT_0076c6d4,
                      *(float *)(iVar14 + 0x6c) * DAT_0076c6d0);
  uVar30 = FastWrapRot(*(float *)(iVar14 + 0x34),DAT_0076c6d8);
  uVar30 = FastDiffRots(uVar30,(double)(*(float *)(iVar14 + 0x70) * DAT_0076c6b0));
  dVar34 = (double)*(float *)(iVar14 + 0x38);
  AccelDeltAng
            (uVar29,(double)DAT_0076c77c,(double)DAT_0076c780,(double)DAT_0076c784,param_2 + 0x20,
             &PTR_DAT_00770000,param_2 + 0xa0);
  AccelDeltAng
            (uVar30,(double)DAT_0076c788,(double)DAT_0076c78c,(double)DAT_0076c790,param_2 + 0x24,
             &PTR_DAT_00770000,param_2 + 0xa4);
  AccelDeltAng
            (dVar34,(double)DAT_0076c794,(double)DAT_0076c798,(double)DAT_0076c79c,param_2 + 0x28,
             &PTR_DAT_00770000,param_2 + 0xa8);
  fVar42 = *(float *)(iVar14 + 0x28);
  fVar2 = *(float *)(iVar14 + 0xd4);
  *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(iVar14 + 0x20);
  dVar34 = (double)FastDiffRots((double)fVar42,(double)fVar2);
  fVar42 = *(float *)(iVar14 + 0x24);
  *(float *)(puVar13 + 0x1d) = (float)dVar34;
  dVar34 = (double)FastDiffRots((double)fVar42,(double)*(float *)(iVar14 + 0xd8));
  *(float *)((int)puVar13 + 0xe4) = (float)dVar34;
  Camera_SetMobyDrivenTargetRot((float *)(puVar13 + 0x1c));
  fVar42 = DAT_0076c7d0;
  if ((g_Pad.padDownButtons & 0x40) != 0) {
    fVar42 = DAT_0076c7d4;
  }
  dVar34 = 2.0;
  OrganicDelt
            (fVar42,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,g_FrameTime * 2.0,
             (float *)(iVar14 + 0xb0),0x720000,(float *)(iVar14 + 0xc0));
  fVar42 = *(float *)(iVar14 + 0xb0) * 0.5;
  fVar3 = fVar42 + 1.5707963;
  fVar2 = 3.1415925 - fVar42;
  if (fVar42 - (3.1415925 - fVar42) < 0.0) {
    fVar2 = fVar42;
  }
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = -3.1415925 - fVar42;
  if ((-3.1415925 - fVar42) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = fVar5 * fVar5;
  fVar42 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar42 = fVar4;
  }
  fVar3 = fVar42 * fVar42;
  fVar4 = fVar2 * fVar2 * fVar5;
  fVar6 = fVar2 * fVar4;
  fVar7 = fVar3 * fVar3 * fVar42;
  fVar8 = fVar3 * fVar7;
  g_ViewContext.xratio =
       (fVar2 * fVar6 * 2.601887e-06 +
       fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) /
       (fVar3 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar3 * fVar42 * -0.16666657 + fVar42);
  UpdateViewContext();
  dVar36 = (double)FastWrapRot
                             (*(float *)(iVar14 + 0x30),*(float *)(iVar14 + 0x6c) * DAT_0076c7ec);
  (param_1->rotation).x = (float)dVar36;
  dVar36 = (double)FastWrapRot
                             (*(float *)(iVar14 + 0x34),-(*(float *)(iVar14 + 0x70) * DAT_0076c7f0))
  ;
  (param_1->rotation).y = (float)dVar36;
  dVar36 = (double)FastWrapRot
                             (*(float *)(iVar14 + 0x38),-(*(float *)(iVar14 + 0x6c) * DAT_00f0cec4))
  ;
  (param_1->rotation).z = (float)dVar36;
  iVar23 = CollSphere(dVar34,&param_1->pos);
  if (iVar23 != 0) {
    if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
      puVar13[0x12] = 0xffffffffffffffff;
      puVar13[0x14] = 1;
      puVar13[0x15] = 1;
      puVar13[0x16] = 0xffffffffffffffff;
      puVar13[0x17] = 0;
      MB_genericExplosion
                (uVar32,0x4059000000000000,0x4030000000000000,uVar32,0x4022000000000000,
                 0x3ff0000000000000,0x4049000000000000,param_1,&DAT_00a15d30,0,1,0xffffffffffffffff,
                 0x1e,10,0x18);
      param_1->enabled = '\0';
      auVar39 = ZEXT416(0xffffffff);
      auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      param_1->state = '\a';
      param_1->modeBits = param_1->modeBits | DISABLED;
      auVar39 = loadVectorLeftIndexed(0x48,0x21ff30);
      auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xf8,param_2
                         );
      *(undefined4 *)(iVar14 + 0xf8U & 0xfffffffc) = uVar10;
    }
    else {
      MVar12 = (g_CollOutput.pMoby)->oClass;
      if (((MVar12 != 0x192 && MVar12 != RATCHET) && (MVar12 != AMMOCRATE_04C2)) &&
         (MVar12 != 0x4c3)) {
        (param_1->pos).x = g_CollOutput.push.x;
        (param_1->pos).y = g_CollOutput.push.y;
        (param_1->pos).z = g_CollOutput.push.z;
        (param_1->pos).w = g_CollOutput.push.w;
        FastVecReflect(uVar20 - 0x110,uVar20 - 0x110,0xa10980);
        dVar31 = ABS((double)*(float *)(puVar13 + 0x1a));
        dVar38 = (double)*(float *)(iVar14 + 0x38);
        dVar36 = ABS((double)*(float *)((int)puVar13 + 0xd4));
        *(float *)(puVar13 + 0x28) = (float)(dVar31 - dVar36);
        dVar35 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x28) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
        dVar37 = dVar31;
        if ((double)*(float *)(puVar13 + 0x28) - dVar33 < 0.0) {
          dVar37 = dVar36;
        }
        fVar42 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        if ((double)*(float *)(puVar13 + 0x28) - dVar33 < 0.0) {
          dVar36 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar31 = dVar33;
        if (dVar33 < dVar37) {
          lVar21 = uVar20 - 0x1d0;
          lVar27 = uVar20 - 0x6c;
          lVar25 = uVar20 - 0x7c;
          lVar28 = 2;
          fVar3 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar13 + 0x2e) = fVar3;
          *(float *)(puVar13 + 0x2d) = fVar3;
          *(float *)((int)puVar13 + 0x16c) = fVar3;
          *(float *)((int)puVar13 + 0x164) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x2d) = *(float *)(puVar13 + 0x2d) * fVar4;
          *(float *)((int)puVar13 + 0x16c) = *(float *)((int)puVar13 + 0x16c) * fVar3;
          *(float *)(puVar13 + 0x2e) = *(float *)(puVar13 + 0x2e) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x164) = *(float *)((int)lVar21 + 0x154) * fVar3 * fVar3;
            iVar23 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar20 - 0x7c;
          pfVar26 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar21 + 0x164) = *(float *)((int)lVar21 + 0x164) * fVar3;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar25 = 2;
          lVar21 = lVar22;
          dVar36 = dVar33;
          do {
            iVar23 = (int)lVar21;
            iVar17 = (int)lVar27;
            lVar21 = lVar21 + 0x10;
            lVar27 = lVar27 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0x164)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar31 = (double)((float)(dVar36 + 0.7853981852531433) * fVar42 + fVar2);
        }
        dVar36 = (double)FastDiffRots(dVar31,dVar38);
        dVar36 = (double)FastWrapRot((float)dVar38,(float)(dVar36 * (double)DAT_0076c6a4))
        ;
        fVar42 = *(float *)((int)puVar13 + 0xd4);
        fVar2 = *(float *)(puVar13 + 0x1a);
        *(float *)(iVar14 + 0x38) = (float)dVar36;
        dVar38 = (double)*(float *)(iVar14 + 0x34);
        dVar36 = ABS((double)*(float *)(puVar13 + 0x1b));
        fVar42 = SQRT(fVar2 * fVar2 + fVar42 * fVar42);
        dVar31 = ABS((double)fVar42);
        *(float *)(puVar13 + 0x27) = fVar42;
        *(float *)((int)puVar13 + 0x13c) = (float)(dVar31 - dVar36);
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0x27) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x13c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1d) & 4;
        dVar37 = ABS((double)*(float *)(puVar13 + 0x27));
        if ((double)*(float *)((int)puVar13 + 0x13c) - dVar33 < 0.0) {
          dVar37 = dVar36;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar42 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if ((double)*(float *)((int)puVar13 + 0x13c) - dVar33 < 0.0) {
          dVar36 = dVar31;
        }
        dVar31 = dVar33;
        if (dVar33 < dVar37) {
          lVar21 = uVar20 - 0x1d0;
          lVar25 = uVar20 - 0x9c;
          lVar27 = uVar20 - 0x8c;
          lVar28 = 2;
          fVar3 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar13 + 0x2a) = fVar3;
          *(float *)(puVar13 + 0x29) = fVar3;
          *(float *)((int)puVar13 + 0x14c) = fVar3;
          *(float *)((int)puVar13 + 0x144) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar4;
          *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar3;
          *(float *)(puVar13 + 0x2a) = *(float *)(puVar13 + 0x2a) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x144) = *(float *)((int)lVar21 + 0x134) * fVar3 * fVar3;
            iVar23 = (int)lVar25;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar20 - 0x9c;
          pfVar26 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar21 + 0x144) = *(float *)((int)lVar21 + 0x144) * fVar3;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar21 = 2;
          dVar36 = dVar33;
          do {
            iVar23 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar17 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0x144)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar31 = (double)((float)(dVar36 + dVar35) * fVar2 + fVar42);
        }
        dVar36 = (double)FastDiffRots(-dVar31,dVar38);
        dVar36 = (double)FastWrapRot((float)dVar38,(float)(dVar36 * (double)DAT_0076c6a8))
        ;
        *(float *)(iVar14 + 0x34) = (float)dVar36;
        *(float *)(iVar14 + 100) = *(float *)(iVar14 + 100) * DAT_0076c6e8;
        if (*(int *)(iVar14 + 0xdc) == 0) {
          DAT_0096b2dc = DAT_0096b2dc - DAT_0076c6ec;
          if ((double)DAT_0096b2dc < dVar33) {
            FastVecReflect(uVar20 - 0x120,uVar20 - 0x110,0xa10980);
            fVar2 = *(float *)((int)puVar13 + 0xc4);
            fVar3 = *(float *)(puVar13 + 0x18);
            fVar4 = *(float *)(puVar13 + 0x19);
            dVar37 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            dVar36 = (double)g_FrameTime;
            puVar13[0x12] = 0xffffffffffffffff;
            puVar13[0x14] = 1;
            puVar13[0x15] = 1;
            puVar13[0x16] = 0xffffffffffffffff;
            puVar13[0x17] = 0;
            fVar42 = (float)((double)(float)(dVar36 * dVar34) / dVar37);
            dVar34 = dVar33;
            if (dVar33 - dVar37 < 0.0) {
              dVar34 = (double)(fVar3 * fVar42);
            }
            dVar36 = dVar33;
            if (dVar33 - dVar37 < 0.0) {
              dVar36 = (double)(fVar2 * fVar42);
            }
            dVar31 = dVar33;
            if (dVar33 - dVar37 < 0.0) {
              dVar31 = (double)(fVar4 * fVar42);
            }
            if (dVar37 - dVar33 < 0.0) {
              dVar34 = (double)(fVar3 * fVar42);
            }
            if (dVar37 - dVar33 < 0.0) {
              dVar36 = (double)(fVar2 * fVar42);
            }
            if (dVar37 - dVar33 < 0.0) {
              dVar31 = (double)(fVar4 * fVar42);
            }
            *(float *)(puVar13 + 0x18) = (float)dVar34;
            *(float *)((int)puVar13 + 0xc4) = (float)dVar36;
            *(float *)(puVar13 + 0x19) = (float)dVar31;
            MB_genericExplosion
                      (uVar32,0x4059000000000000,0x4030000000000000,uVar32,0x4022000000000000,
                       0x3ff0000000000000,0x4049000000000000,param_1,uVar20 - 0x120,0,1,
                       &DAT_0021ff30,0x1e,10,0x18);
            param_1->state = '\a';
          }
          *(undefined4 *)(iVar14 + 0xdc) = DAT_0076c7e8;
        }
      }
    }
  }
  if (g_HelpFlags.piece<680,2>() == 0) {
    Help_QueueMessage(STR_PRESS__TO_FIRE_0x2AFC,0x55);
  }
  RegisterFuncForMoby(&PTR_M1242_Hud_Draw_00709798,param_1);
  M1242_0021f5b8(param_1,param_2);
  uVar32 = FastWrapRot
                     (*(float *)(iVar14 + 0x28),-(*(float *)(iVar14 + 0x6c) * 0.14285715));
  dVar33 = (double)FastWrapRot
                             (*(float *)(iVar14 + 0x24),
                              *(float *)(iVar14 + 0x70) * -0.14285715 - 0.1);
  M1242_0021f2b0(uVar32,-dVar33,param_1,param_2);
  return;
}


// 0x0221048 (0x151c bytes)
// inlined: FastAtan2 @0x22124c, FastAtan2 @0x221424, FastAtan2 @0x221820
// strings: 00a1000c: 'None' | 00655044: 'no final place for jet during victory, so use init pos\n' | 0065507c: 'no final place for hero during victory, so just fall\n'

/* Moby 1242 */

void UpdateMoby_1242_JetFighterPoki(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  MobyClass *pMVar10;
  f32 fVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  undefined2 uVar17;
  Cuboid *pCVar18;
  ulonglong uVar19;
  int iVar21;
  longlong lVar20;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  undefined8 uVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar20 = uVar19 - 0x1b0;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar19;
  puVar14[0x38] = in_LR;
  puVar14[0x33] = in_f29;
  puVar14[0x34] = in_f30;
  puVar14[0x35] = in_f31;
  puVar14[0x32] = unaff_r31;
  puVar14[0x31] = unaff_r30;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  puVar14[0x2e] = unaff_r27;
  puVar14[0x2d] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    pvVar9 = moby->pVar;
    uVar27 = ZEXT48(pvVar9);
    FastDecTimerS32(uVar27 + 0xdc);
    uVar1 = moby->state;
    if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
       ((iVar21 = MB_damage(moby,0x30001,0), iVar21 != 0 && (moby->state == '\x04')))) {
      uVar12 = (int)*(uint *)(iVar21 + 0x2c) >> 0x1f;
      if ((int)((uVar12 >> 1 ^ *(uint *)(iVar21 + 0x2c)) - uVar12) <
          (int)(FLOAT_ORDER(DAT_0096b2dc))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar21 + 0x2c);
        if ((*(uint *)(iVar21 + 0x30) & 1) != 0) {
          lVar26 = uVar19 - 0xf0;
          dVar34 = (double)(*(float *)(iVar21 + 0x2c) * DAT_0076c714);
          MB_SphericalToVector
                    (*(float *)((int)pvVar9 + 100),*(float *)((int)pvVar9 + 0x38),
                     -*(float *)((int)pvVar9 + 0x34),(float *)lVar26);
          (moby->pos).x = (moby->pos).x + *(float *)(iVar21 + 0x10);
          (moby->pos).y = (moby->pos).y + *(float *)(iVar21 + 0x14);
          (moby->pos).z = (moby->pos).z + *(float *)(iVar21 + 0x18);
          FastVecReflect(lVar26,lVar26,iVar21 + 0x10);
          fVar3 = ABS(*(float *)(puVar14 + 0x18));
          dVar32 = (double)*(float *)((int)pvVar9 + 0x38);
          fVar7 = ABS(*(float *)((int)puVar14 + 0xc4));
          *(float *)(puVar14 + 0x1e) = fVar3 - fVar7;
          dVar31 = 0.0;
          uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
          fVar4 = fVar3;
          if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
            fVar4 = fVar7;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
            fVar7 = fVar3;
          }
          fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar29 = dVar31;
          if (0.0 < fVar4) {
            lVar26 = uVar19 - 0x1a0;
            lVar25 = uVar19 - 0x6c;
            lVar23 = uVar19 - 0x7c;
            lVar28 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar7 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x28) = fVar4;
            *(float *)(puVar14 + 0x27) = fVar4;
            *(float *)((int)puVar14 + 0x13c) = fVar4;
            *(float *)((int)puVar14 + 0x134) = fVar4;
            fVar4 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar7;
            *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar4;
            *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar4 * fVar7;
            do {
              *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x124) * fVar4 * fVar4;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar25 = uVar19 - 0x7c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar26 = lVar20;
            lVar23 = lVar25;
            do {
              fVar4 = *pfVar24;
              fVar7 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x134) * fVar4;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar23 = 2;
            lVar26 = lVar20;
            do {
              iVar21 = (int)lVar26;
              iVar15 = (int)lVar25;
              lVar26 = lVar26 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0x134)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar3);
          }
          dVar29 = (double)FastDiffRots(dVar29,dVar32);
          dVar32 = (double)FastWrapRot
                                     ((float)dVar32,
                                      (float)((double)(float)(dVar29 * (double)DAT_0076c6a4) *
                                             dVar34));
          *(float *)((int)pvVar9 + 0x38) = (float)dVar32;
          dVar33 = (double)*(float *)((int)pvVar9 + 0x34);
          dVar32 = ABS((double)*(float *)(puVar14 + 0x19));
          fVar4 = SQRT(*(float *)(puVar14 + 0x18) * *(float *)(puVar14 + 0x18) +
                       *(float *)((int)puVar14 + 0xc4) * *(float *)((int)puVar14 + 0xc4));
          dVar30 = ABS((double)fVar4);
          *(float *)(puVar14 + 0x1d) = fVar4;
          *(float *)((int)puVar14 + 0xec) = (float)(dVar30 - dVar32);
          uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar14 + 0x1d));
          if ((double)*(float *)((int)puVar14 + 0xec) - dVar31 < 0.0) {
            dVar29 = dVar32;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if ((double)*(float *)((int)puVar14 + 0xec) - dVar31 < 0.0) {
            dVar32 = dVar30;
          }
          if (dVar31 < dVar29) {
            lVar26 = uVar19 - 0x1a0;
            lVar25 = uVar19 - 0x8c;
            lVar23 = uVar19 - 0x9c;
            lVar28 = 2;
            fVar3 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x24) = fVar3;
            *(float *)(puVar14 + 0x23) = fVar3;
            *(float *)((int)puVar14 + 0x11c) = fVar3;
            *(float *)((int)puVar14 + 0x114) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar6;
            *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar3;
            *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x104) * fVar3 * fVar3;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar25 = uVar19 - 0x9c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar26 = lVar20;
            lVar23 = lVar25;
            do {
              fVar3 = *pfVar24;
              fVar6 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x114) * fVar3;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar23 = 2;
            lVar26 = lVar20;
            do {
              iVar21 = (int)lVar26;
              iVar15 = (int)lVar25;
              lVar26 = lVar26 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x114)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar4);
          }
          dVar31 = (double)FastDiffRots(dVar31,dVar33);
          dVar31 = (double)FastWrapRot
                                     ((float)dVar33,
                                      (float)((double)(float)(dVar31 * (double)DAT_0076c6a8) *
                                             dVar34));
          *(float *)((int)pvVar9 + 0x34) = (float)dVar31;
        }
      }
      else {
        MB_SphericalToVector
                  (*(float *)((int)pvVar9 + 100),*(float *)((int)pvVar9 + 0x38),
                   -*(float *)((int)pvVar9 + 0x34),(float *)(uVar19 - 0xe0));
        uVar35 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        *(undefined2 *)((int)pvVar9 + 0x62) = 0xb4;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        MB_genericExplosion
                  (uVar35,uVar35,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,moby,uVar19 - 0xe0,0,0xffffffffffffffff,1,
                   10,3,0x10);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar36 = loadVectorLeftIndexed(0xffffffffffffc710,0x770000);
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar36);
      auVar39 = loadVectorLeftIndexed(0x10,0x221008);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = ZEXT416(0xffffffff);
      auVar41 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = ZEXT416(0xffffffff);
      auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = ZEXT416(0xffffffff);
      auVar45 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar39,auVar40);
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x20,0x221008);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      DAT_0096b2ef = DAT_0096b2ef & 0xfd;
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar44,auVar42);
      auVar42 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar41);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar43);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar42);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1608
                                ,0x969ce0);
    }
    bVar2 = moby->state;
    if (bVar2 < 5) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          moby->state = '\x01';
          *(undefined1 *)((int)pvVar9 + 0x60) = 0;
          moby->scale = moby->pClass->gScale;
          *(undefined4 *)((int)pvVar9 + 0x20) = *(undefined4 *)((int)pvVar9 + 0x30);
          *(undefined4 *)((int)pvVar9 + 0x24) = *(undefined4 *)((int)pvVar9 + 0x34);
          fVar3 = ABS(g_ViewContext.xratio);
          uVar12 = (uint)g_ViewContext.xratio >> 0x1d;
          *(undefined4 *)(puVar14 + 0x1c) = 0x3f800000;
          *(float *)((int)puVar14 + 0xe4) = 1.0 - fVar3;
          fVar4 = 0.0;
          uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar12 & 4;
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar6 = ABS(*(float *)(puVar14 + 0x1c));
          if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
            fVar6 = fVar3;
          }
          fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
            fVar3 = 1.0;
          }
          if (0.0 < fVar6) {
            lVar26 = uVar19 - 0x1a0;
            lVar23 = uVar19 - 0xbc;
            lVar25 = uVar19 - 0xac;
            lVar28 = 2;
            fVar3 = (fVar3 - fVar6) / (fVar3 + fVar6);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x20) = fVar3;
            *(float *)(puVar14 + 0x1f) = fVar3;
            *(float *)((int)puVar14 + 0xfc) = fVar3;
            *(float *)((int)puVar14 + 0xf4) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar6;
            *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar3;
            *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xe4) * fVar3 * fVar3;
              iVar21 = (int)lVar23;
              lVar26 = lVar26 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar25 = uVar19 - 0xbc;
            pfVar24 = (float *)&DAT_007358e0;
            lVar26 = lVar20;
            lVar23 = lVar25;
            do {
              fVar3 = *pfVar24;
              fVar6 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xf4) * fVar3;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar26 = 2;
            do {
              iVar21 = (int)lVar20;
              iVar15 = (int)lVar25;
              lVar20 = lVar20 + 0x10;
              lVar25 = lVar25 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar21 + 0xf4) + *(float *)(iVar15 + 4) +
                      *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar7 + fVar5;
          }
          *(undefined4 *)((int)pvVar9 + 0xc0) = 0;
          *(float *)((int)pvVar9 + 0xac) = fVar4 * 2.0;
          *(float *)((int)pvVar9 + 0xb0) = fVar4 * 2.0;
          *(f32 *)((int)pvVar9 + 0x30) = (moby->rotation).x;
          *(f32 *)((int)pvVar9 + 0x34) = (moby->rotation).y;
          *(f32 *)((int)pvVar9 + 0x38) = (moby->rotation).z;
          *(f32 *)((int)pvVar9 + 0x3c) = (moby->rotation).w;
          *(f32 *)((int)pvVar9 + 0x50) = (moby->rotation).x;
          *(f32 *)((int)pvVar9 + 0x54) = (moby->rotation).y;
          *(f32 *)((int)pvVar9 + 0x58) = (moby->rotation).z;
          *(f32 *)((int)pvVar9 + 0x5c) = (moby->rotation).w;
          *(f32 *)((int)pvVar9 + 0x40) = (moby->pos).x;
          *(f32 *)((int)pvVar9 + 0x44) = (moby->pos).y;
          *(f32 *)((int)pvVar9 + 0x48) = (moby->pos).z;
          *(f32 *)((int)pvVar9 + 0x4c) = (moby->pos).w;
          DAT_00f0d2c8 = 1;
          *(undefined4 *)((int)pvVar9 + 0xf8) = 1;
          *(undefined2 *)((int)pvVar9 + 0xe8) = 1;
          *(undefined4 *)((int)pvVar9 + 0x130) = 0;
          if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1))
          {
            moby->collision = (ushort *)0x0;
            moby->enabled = '\0';
            moby->state = '\t';
            moby->modeBits = moby->modeBits | DISABLED;
          }
        }
        else {
          dVar31 = (double)MB_BSphereGap(moby,g_heroMobyPtr);
          if ((((double)DAT_00f0cec0 <= dVar31) ||
              (g_heroState == VISIBOMB_CONTROL || g_heroState == TURRET_PLANE_UI)) ||
             (g_heroType != '\0')) {
            *(undefined4 *)((int)pvVar9 + 0x118) = 0xffffffff;
            if (*(int *)((int)pvVar9 + 0x130) != 0) {
              Delt(0.0,g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
              SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
            }
          }
          else {
            if (UnlockableItems.pilotsHelmet == '\0') {
              puVar14[0x2b] = (longlong)g_GameFrameCount;
              fVar4 = animationSpeed;
              puVar14[0x2b] =
                   (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x2b] + 0.5));
              uVar17 = g_HelpFlags.piece<482,2>();
              iVar21 = *(int *)((int)puVar14 + 0x15c);
              uVar12 = (uint)(ushort)g_HelpFlags.piece<482,2>();
              uVar16 = (uint)(ushort)g_HelpFlags.piece<482,2>();
              puVar14[0x2b] = (longlong)(int)((float)(longlong)(fVar4 * 18.5) * 60.0);
              if ((*(int *)((int)puVar14 + 0x15c) < (int)(iVar21 + uVar16 * -600)) ||
                 (uVar12 * 600 == 0)) {
                Help_QueueMessage(STR_YOU_WILL_NEED_A_0x2AFA,0x3c);
              }
              else if ((int)(uint)(ushort)uVar17 < iVar21 / 600) {
                sVar8 = (short)(iVar21 >> 0x1f);
                g_HelpFlags.piece<482,2>() =
                     ((short)(iVar21 / 600) + sVar8) -
                     ((short)((short)(iVar21 / 0x2580000) + sVar8) >> 0xf);
              }
            }
            else {
              MB_ShowPersistentMessage(7,0x2b09);
            }
            if ((UnlockableItems.pilotsHelmet != '\0') &&
               ((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) {
              moby->state = '\x02';
              TransitionMovement(0x32,1);
              *(undefined4 *)((int)pvVar9 + 0x118) = 0xffffffff;
            }
          }
        }
      }
      else if (bVar2 < 3) {
        Delt(1.0,g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
        SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
        if (*(int *)((int)pvVar9 + 0x130) == 0x3f800000) {
          (moby->pos).z = (moby->pos).z + 30.0;
          music_SetTransition(2,6);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0x3c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x38) = 0;
          *(undefined4 *)((int)pvVar9 + 0x34) = 0;
          *(undefined4 *)((int)pvVar9 + 0x30) = 0;
          *(undefined4 *)((int)pvVar9 + 0x2c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x28) = 0;
          *(undefined4 *)((int)pvVar9 + 0x24) = 0;
          *(undefined4 *)((int)pvVar9 + 0x20) = 0;
          fVar11 = (moby->rotation).z;
          auVar36 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          *(f32 *)((int)pvVar9 + 0x28) = fVar11;
          *(f32 *)((int)pvVar9 + 0x38) = fVar11;
          auVar39 = loadVectorLeftIndexed(0x34,0x221008);
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar36);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x114,
                              uVar27);
          *(undefined4 *)((int)pvVar9 + 0x114U & 0xfffffffc) = uVar13;
          if (g_HelpFlags.piece<680,2>() == 0) {
            Help_QueueMessage(STR_PRESS__TO_FIRE_0x2AFC,0x55);
          }
          moby->state = '\x04';
          DAT_0096b2d4 = moby->oClass;
          DAT_0096b2ee = 1;
          DAT_0096b2d6 = (undefined1)DAT_0076c6f0;
          DAT_0096b2d7 = (undefined1)DAT_0076c6f4;
          DAT_0096b2dc = DAT_0076c6e4;
          DAT_0096b2d0 = moby;
          DAT_0096b2d8 = DAT_0096b2d7;
          *(undefined4 *)((int)pvVar9 + 0xf0) = 0;
          *(undefined4 *)((int)pvVar9 + 0xf4) = 0xff;
          DAT_0096b2e4 = 0x42c80000;
          DAT_0096b2e0 = DAT_0076c710;
          DAT_0096b2d9 = 3;
          DAT_0096b2da = 3;
          DAT_0096b2db = 3;
          DAT_0096b2ef = 0;
          SetCameraPosition(0x951500,0x951510,1,0,0);
          uVar13 = DAT_0076c670;
          *(undefined2 *)((int)pvVar9 + 0x68) = 0;
          *(undefined4 *)((int)pvVar9 + 100) = uVar13;
          *(undefined4 *)((int)pvVar9 + 0x6c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x70) = 0;
          *(undefined4 *)((int)pvVar9 + 0x84) = 0;
          *(undefined4 *)((int)pvVar9 + 0x80) = 0;
          *(undefined4 *)((int)pvVar9 + 0xd4) = 0;
          *(undefined4 *)((int)pvVar9 + 0xd8) = 0;
          moby->updateDistance = -1;
          fVar7 = DAT_0076c728;
          fVar4 = DAT_0076c6c0;
          moby->drawDistance = 0xff;
          *(undefined4 *)((int)pvVar9 + 0xb8) = 0;
          *(float *)((int)pvVar9 + 0xb4) = fVar4 * fVar7;
          *(float *)((int)pvVar9 + 0xbc) = DAT_0076c6c4 * fVar7;
          g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
          moby->scale = moby->pClass->gScale * DAT_0076c728;
          g_heroInvisible = 1;
        }
      }
      else if (3 < bVar2) {
        if (*(int *)((int)pvVar9 + 0x130) != 0) {
          Delt(0.0,g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
          SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
        }
        OcclMode = 2;
        M1242_0021ff90(moby,uVar27);
        iVar21 = FUN_00248c9c(*(undefined4 *)((int)pvVar9 + 0x10c));
        if (((*(short *)((int)pvVar9 + 0xea) != 0) && (iVar21 < 5 - *(short *)((int)pvVar9 + 0xe8)))
           && ((iVar21 = FastDecTimerS32(uVar27 + 0x114), iVar21 != 0 &&
               (iVar21 = FUN_00248d40(*(undefined4 *)((int)pvVar9 + 0x10c)), iVar21 != 0)))) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x38,0x221008);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar36);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x114,
                              uVar27);
          *(undefined4 *)((int)pvVar9 + 0x114U & 0xfffffffc) = uVar13;
        }
        if (*(short *)((int)pvVar9 + 0xe8) < 1) {
          *(undefined4 *)((int)pvVar9 + 0xf8) = DAT_0076c800;
          moby->state = '\b';
        }
        if ((DAT_0096b2ef & 1) != 0) {
          moby->state = '\x05';
        }
      }
    }
    else if (bVar2 < 8) {
      if (bVar2 < 6) {
        g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        Camera_DeactivateMobyDrivenCam(0);
        Hud_SetEntryValueById((int)DAT_0096b2ec,0);
        music_SetTransition(0,8);
        (moby->pos).x = *(f32 *)((int)pvVar9 + 0x40);
        (moby->pos).y = *(f32 *)((int)pvVar9 + 0x44);
        (moby->pos).z = *(f32 *)((int)pvVar9 + 0x48);
        (moby->pos).w = *(f32 *)((int)pvVar9 + 0x4c);
        (moby->rotation).x = *(f32 *)((int)pvVar9 + 0x50);
        pMVar10 = moby->pClass;
        (moby->rotation).y = *(f32 *)((int)pvVar9 + 0x54);
        (moby->rotation).z = *(f32 *)((int)pvVar9 + 0x58);
        (moby->rotation).w = *(f32 *)((int)pvVar9 + 0x5c);
        moby->scale = pMVar10->gScale;
        PostUpdateMobyLockTransform(moby);
        Hero_Warp(&Cuboids[*(int *)((int)pvVar9 + 0xfc)].pos.x,
                        &Cuboids[*(int *)((int)pvVar9 + 0xfc)].rot.x,0,1);
        sVar8 = *(short *)((int)pvVar9 + 300);
        if (((sVar8 != -1) &&
            (iVar21 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
            *(MobyInstance **)((int)g_SoundChannels + iVar21 + 0x18) == moby)) &&
           (*(char *)((int)g_SoundChannels + iVar21 + 4) != '\0')) {
          sound_Kill((int)sVar8);
        }
        sVar8 = *(short *)((int)pvVar9 + 0x12e);
        *(undefined2 *)((int)pvVar9 + 300) = 0xffff;
        if (((sVar8 != -1) &&
            (iVar21 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
            *(MobyInstance **)((int)g_SoundChannels + iVar21 + 0x18) == moby)) &&
           (*(char *)((int)g_SoundChannels + iVar21 + 4) != '\0')) {
          sound_Kill((int)sVar8);
        }
        *(undefined2 *)((int)pvVar9 + 0x12e) = 0xffff;
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar9 + 0x130) = 0x3f7d70a4;
        SceneScreenFade = 0.99;
      }
      else if (6 < bVar2) {
        OcclMode = 2;
        iVar21 = FastDecTimerS32(uVar27 + 0xf8);
        if (iVar21 != 0) {
          HandleHeroDeath();
        }
      }
    }
    else if (bVar2 < 9) {
      OcclMode = 2;
      M1242_0021ff90(moby,uVar27);
      iVar21 = FastDecTimerS32(uVar27 + 0xf8);
      if (iVar21 != 0) {
        Delt(1.0,g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
        SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
        uVar12 = (int)*(uint *)((int)pvVar9 + 0x130) >> 0x1f;
        if (0x3f7fffff < (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar9 + 0x130)) - uVar12)) {
          g_heroInvisible = 0;
          g_heroMobyPtr->collisionMesh = (float *)0x0;
          TransitionMovement(0,1);
          Camera_DeactivateMobyDrivenCam(0);
          music_SetTransition(0,8);
          moby->enabled = '\0';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
          pCVar18 = Cuboids;
          iVar21 = *(int *)((int)pvVar9 + 0x100);
          if (iVar21 == -1) {
            printf("no final place for jet during victory, so use init pos\n");
            (moby->pos).x = *(f32 *)((int)pvVar9 + 0x40);
            (moby->pos).y = *(f32 *)((int)pvVar9 + 0x44);
            (moby->pos).z = *(f32 *)((int)pvVar9 + 0x48);
            (moby->pos).w = *(f32 *)((int)pvVar9 + 0x4c);
            (moby->rotation).x = *(f32 *)((int)pvVar9 + 0x50);
            (moby->rotation).y = *(f32 *)((int)pvVar9 + 0x54);
            (moby->rotation).z = *(f32 *)((int)pvVar9 + 0x58);
            fVar4 = *(float *)((int)pvVar9 + 0x5c);
          }
          else {
            (moby->pos).x = Cuboids[iVar21].pos.x;
            (moby->pos).y = pCVar18[iVar21].pos.y;
            (moby->pos).z = pCVar18[iVar21].pos.z;
            (moby->pos).w = pCVar18[iVar21].pos.w;
            iVar21 = *(int *)((int)pvVar9 + 0x100);
            (moby->rotation).x = pCVar18[iVar21].rot.x;
            (moby->rotation).y = pCVar18[iVar21].rot.y;
            (moby->rotation).z = pCVar18[iVar21].rot.z;
            fVar4 = pCVar18[iVar21].rot.w;
          }
          (moby->rotation).w = fVar4;
          PostUpdateMobyLockTransform(moby);
          iVar21 = *(int *)((int)pvVar9 + 0xfc);
          if (iVar21 == -1) {
            printf("no final place for hero during victory, so just fall\n");
          }
          else {
            Hero_Warp(&Cuboids[iVar21].pos.x,&Cuboids[iVar21].rot.x,0,1);
          }
          if (moby->levelFlagIdx != -1) {
            SetLevelFlag();
          }
          moby->state = '\t';
        }
      }
    }
    else if ((bVar2 < 10) && (*(int *)((int)pvVar9 + 0x130) != 0)) {
      Delt(0.0,g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
      SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
    }
    fVar11 = (moby->pos).x;
    uVar12 = (int)fVar11 >> 0x1f;
    fVar7 = 15.0;
    fVar4 = (moby->pos).x;
    if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41700000) {
      (moby->pos).x = 15.0;
      fVar4 = fVar7;
    }
    fVar3 = 1008.0;
    if (1008.0 < fVar4) {
      (moby->pos).x = 1008.0;
      fVar4 = fVar3;
    }
    fVar11 = (moby->pos).y;
    uVar12 = (int)fVar11 >> 0x1f;
    fVar6 = (moby->pos).y;
    if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41700000) {
      (moby->pos).y = 15.0;
      fVar6 = fVar7;
    }
    if (1008.0 < fVar6) {
      (moby->pos).y = 1008.0;
      fVar6 = fVar3;
    }
    fVar11 = (moby->pos).z;
    uVar12 = (int)fVar11 >> 0x1f;
    fVar5 = (moby->pos).z;
    if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41700000) {
      (moby->pos).z = 15.0;
      fVar5 = fVar7;
    }
    if (1008.0 < fVar5) {
      (moby->pos).z = 1008.0;
      fVar5 = fVar3;
    }
    bVar2 = moby->state;
    if (bVar2 == 4) {
      g_heroPosition.w = (moby->pos).w;
      g_heroRotation.x = *(float *)((int)pvVar9 + 0x30);
      g_heroRotation.y = *(float *)((int)pvVar9 + 0x34);
      g_heroRotation.z = *(float *)((int)pvVar9 + 0x38);
      g_heroRotation.w = *(float *)((int)pvVar9 + 0x3c);
      g_heroPosition.x = fVar4;
      g_heroPosition.y = fVar6;
      g_heroPosition.z = fVar5;
    }
    if ((bVar2 < 3) || (4 < bVar2)) {
      sVar8 = *(short *)((int)pvVar9 + 300);
      if ((sVar8 != -1) &&
         ((iVar21 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar21 + 0x18) == moby &&
          (*(char *)((int)g_SoundChannels + iVar21 + 4) != '\0')))) {
        sound_Kill((int)sVar8);
      }
      *(undefined2 *)((int)pvVar9 + 300) = 0xffff;
    }
    else {
      M1242_0021d8f8(moby,uVar27);
      iVar21 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar9 + 300));
      if (iVar21 == 0) {
        iVar21 = PlayMobySound(0,4,moby);
        *(short *)((int)pvVar9 + 300) = (short)iVar21;
      }
    }
  }
  return;
}


