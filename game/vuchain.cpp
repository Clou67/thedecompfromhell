// game/vuchain.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 29 functions, 0x174b0c-0x175558
#include <stdio.h>
#include "game/vuchain.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0174b0c (0x14 bytes)
void ____Unused_VuChain_SetBufSize_10000(void)

{
  DAT_0073a768 = 0x10000;
  return;
}


// 0x0174b20 (0xb8 bytes)
int VU0_loadMicroProgram(int *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar3 = 0;
  cVar1 = *(char *)((int)param_1 + 7);
  while( true ) {
    if (cVar1 != 'J') {
      return iVar3;
    }
    bVar2 = *(byte *)((int)param_1 + 6);
    iVar6 = 0;
    param_1 = param_1 + 2;
    iVar4 = (uint)bVar2 + ((uint)(ZERO_MASK((uint)bVar2)) & 0x100 - bVar2);
    puVar5 = param_2;
    if (0 < iVar4) {
      do {
        if (*param_1 == -0x7ffffcc4) {
          *param_1 = -0x7fffffd0;
        }
        iVar6 = iVar6 + 1;
        param_2 = puVar5 + 1;
        *puVar5 = *(undefined8 *)param_1;
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 2;
        puVar5 = param_2;
      } while (iVar6 < iVar4);
    }
    if (iVar4 != 0x100) break;
    cVar1 = *(char *)((int)param_1 + 7);
  }
  return iVar3;
}


// 0x0174bd8 (0x4 bytes)
void STUB_00174bd8(...)

{
  return;
}


// 0x0174bdc (0x48 bytes)
void VU1_setBufSizeByLevel(void)

{
  DAT_00e5aa64 = *(undefined4 *)
                  (&DAT_00735524 +
                  (int)(((ulonglong)Level +
                         (0x12 - (longlong)(int)Level >> 0x3f & -(ulonglong)Level) & 0xffffffff) <<
                       2));
  return;
}


// 0x0174c24 (0x64 bytes)
void VU1_initChain(void)

{
  DAT_00e5aa50 = DAT_00a108dc;
  DAT_00e5aa54 = DAT_00a108e0;
  DAT_00a10738 = (DAT_00a108dc + DAT_00e5aa64) - DAT_0071fbd4;
  DAT_00e5aa68 = 0;
  g_pPacket = DAT_00a108dc;
  DAT_00a10740 = DAT_00a10738 + -0x2000;
  return;
}


// 0x0174c88 (0x68 bytes)
void VU1_swapChain(void)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_00e5aa68;
  DAT_00e5aa68 = (int)(1 - uVar2);
  iVar1 = *(int *)((int)&DAT_00e5aa50 + (int)((1 - uVar2 & 0xffffffff) << 2));
  DAT_00e5aa5c = g_pPacket;
  g_pPacket = iVar1;
  DAT_00a10738 = (iVar1 + DAT_00e5aa64) - DAT_0071fbd4;
  DAT_00a10740 = DAT_00a10738 + -0x2000;
  return;
}


// 0x0174cf0 (0x4 bytes)
void STUB_00174cf0(...)

{
  return;
}


// 0x0174cf4 (0x4 bytes)
void STUB_00174cf4(...)

{
  return;
}


// 0x0174cf8 (0x3c bytes)
void VU1_addDataRef(undefined1 param_1,undefined1 param_2)

{
  *g_pPacket = param_2;
  g_pPacket[1] = param_1;
  g_pPacket[2] = 0;
  g_pPacket[3] = 0;
  g_pPacket = g_pPacket + 0x10;
  return;
}


// 0x0174d34 (0x9c bytes)
void VU1_addDataRefToLoc(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  *g_pPacket = (char)param_3;
  g_pPacket[1] = param_2;
  uVar1 = FUN_00502e98(4,4,0);
  g_pPacket[2] = uVar1;
  uVar1 = FUN_00503104(param_1,param_3,0xc,0);
  g_pPacket[3] = uVar1;
  g_pPacket = g_pPacket + 0x10;
  return;
}


// 0x0174dd0 (0xd0 bytes)
void VU1_addDataDirect(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 uVar1;
  
  *g_pPacket = (char)param_3;
  g_pPacket[1] = 0;
  uVar1 = FUN_00502e98(4,4,0);
  g_pPacket[2] = uVar1;
  uVar1 = FUN_00503104(param_1,param_3,0xc,0);
  g_pPacket[3] = uVar1;
  g_pPacket = g_pPacket + 0x10;
  FastMemCopy(g_pPacket,param_2,(int)((param_3 & 0xffffffff) << 4));
  g_pPacket = g_pPacket + (int)(param_3 << 4);
  return;
}


// 0x0174ea0 (0xa8 bytes)
void VU1_skipData(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  *g_pPacket = (char)param_2;
  g_pPacket[1] = 0;
  uVar1 = FUN_00502e98(4,4,0);
  g_pPacket[2] = uVar1;
  uVar1 = FUN_00503104(param_1,param_2,0xc,0);
  g_pPacket[3] = uVar1;
  g_pPacket = g_pPacket + (int)(param_2 << 4) + 0x10;
  return;
}


// 0x0174f48 (0x38 bytes)
void VU1_addVIFcode(undefined1 param_1)

{
  *g_pPacket = 0;
  g_pPacket[1] = 0;
  g_pPacket[2] = 0;
  g_pPacket[3] = param_1;
  g_pPacket = g_pPacket + 0x10;
  return;
}


// 0x0174f80 (0xec bytes)
void SetGSReg(int param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = TexSamplerFlags;
  lVar2 = DAT_010ee2f0;
  lVar3 = DAT_010ee300;
  lVar4 = DAT_010ee308;
  lVar5 = DAT_010ee310;
  lVar6 = DAT_010ee318;
  if (param_1 < 8) {
    if (param_1 < 6) {
      lVar6 = param_2;
      if (param_1 != 3) {
        lVar6 = DAT_010ee318;
      }
    }
    else {
      lVar1 = param_2;
      if (6 < param_1) {
        lVar1 = TexSamplerFlags;
        DAT_010ee2e8 = param_2;
      }
    }
  }
  else {
    lVar4 = param_2;
    if ((param_1 != 0x21) && (lVar3 = param_2, lVar4 = DAT_010ee308, param_1 != 0x1a)) {
      if (param_1 == 0x19) {
        DAT_010ee2fc = EffectTexHeaders + (int)(param_2 << 5) + (int)(param_2 << 2);
        lVar3 = DAT_010ee300;
      }
      else if (param_1 == 0x18) {
        DAT_010ee2f8 = EffectTexHeaders + (int)(param_2 << 5) + (int)(param_2 << 2);
        lVar3 = DAT_010ee300;
      }
      else {
        lVar2 = param_2;
        lVar3 = DAT_010ee300;
        if ((param_1 != 0x16) && (lVar2 = DAT_010ee2f0, lVar5 = param_2, param_1 != 8)) {
          lVar5 = DAT_010ee310;
        }
      }
    }
  }
  DAT_010ee318 = lVar6;
  DAT_010ee310 = lVar5;
  DAT_010ee308 = lVar4;
  DAT_010ee300 = lVar3;
  DAT_010ee2f0 = lVar2;
  TexSamplerFlags = lVar1;
  return;
}


// 0x017506c (0x4c bytes)
void VU1_addDataInLine(longlong param_1)

{
  *g_pPacket = 0;
  g_pPacket[1] = (char)g_pPacket + (char)(param_1 << 4) + '\x10';
  g_pPacket[2] = 0;
  g_pPacket[3] = 0;
  g_pPacket = g_pPacket + (int)(param_1 << 4) + 0x10;
  return;
}


// 0x01750c8 (0x328 bytes)
void VU1_setScissor(int left,int right,int top,int bot)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  RenderingStep *pRVar3;
  RenderingStep *pRVar4;
  ulonglong uVar5;
  RsxCmd *pRVar6;
  longlong lVar7;
  RsxCmd *pRVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar11;
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
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar7 = uVar5 - 0xc0;
  puVar2 = (ulonglong *)lVar7;
  *puVar2 = uVar5;
  *(int *)(puVar2 + 0x10) = bot;
  *(int *)((int)puVar2 + 0x84) = bot;
  *(int *)(puVar2 + 0x11) = bot;
  *(int *)((int)puVar2 + 0x8c) = bot;
  auVar12 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *(int *)(puVar2 + 0x10) = top;
  puVar2[0x17] = unaff_r31;
  *(int *)((int)puVar2 + 0x84) = top;
  *(int *)(puVar2 + 0x11) = top;
  *(int *)((int)puVar2 + 0x8c) = top;
  auVar13 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *(int *)(puVar2 + 0x10) = right;
  *(int *)((int)puVar2 + 0x84) = right;
  *(int *)(puVar2 + 0x11) = right;
  RVar10 = (RsxCmd)((((longlong)right - (longlong)left) + 1U & 0xffffffff) << 0x10) | left & 0xffff;
  *(int *)((int)puVar2 + 0x8c) = right;
  pRVar3 = HUD_Pass;
  auVar12 = vectorSubtractUnsignedWordModulo(auVar12,auVar13);
  puVar2[0x16] = unaff_r30;
  pRVar6 = pRVar3->command;
  RVar9 = (RsxCmd)((((longlong)bot - (longlong)top) + 1U & 0xffffffff) << 0x10) | top & 0xffff;
  auVar14.piece<0,4>() = auVar12.piece<0,4>() + 1;
  auVar14.piece<8,8>() = auVar12.piece<8,8>();
  auVar14.piece<4,4>() = auVar12.piece<4,4>() + 1;
  auVar17.piece<0,8>() = auVar14.piece<0,8>();
  auVar17.piece<12,4>() = auVar12.piece<12,4>();
  auVar17.piece<8,4>() = auVar12.piece<8,4>() + 1;
  auVar20.piece<0,12>() = auVar17.piece<0,12>();
  auVar20.piece<12,4>() = auVar17.piece<12,4>() + 1;
  auVar14 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *(int *)(puVar2 + 0x10) = left;
  *(int *)((int)puVar2 + 0x84) = left;
  *(int *)(puVar2 + 0x11) = left;
  *(int *)((int)puVar2 + 0x8c) = left;
  auVar12 = loadVectorLeftIndexed(0x80,0x1750b8);
  auVar17 = loadVectorLeftIndexed(4,0x1750b8);
  auVar19 = loadVectorLeftIndexed(8,0x1750b8);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar15 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar22 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *pRVar6 = (RsxCmd)&DAT_00080a00;
  auVar17 = vectorSubtractUnsignedWordModulo(auVar14,auVar22);
  auVar12 = vectorLogicalAnd(auVar20,auVar15);
  auVar14 = vectorLogicalAnd(auVar13,auVar15);
  auVar21.piece<0,4>() = auVar17.piece<0,4>() + 1;
  auVar21.piece<8,8>() = auVar17.piece<8,8>();
  auVar21.piece<4,4>() = auVar17.piece<4,4>() + 1;
  auVar16.piece<0,8>() = auVar21.piece<0,8>();
  auVar16.piece<12,4>() = auVar17.piece<12,4>();
  auVar16.piece<8,4>() = auVar17.piece<8,4>() + 1;
  auVar13.piece<0,12>() = auVar16.piece<0,12>();
  auVar13.piece<12,4>() = auVar16.piece<12,4>() + 1;
  auVar20 = vectorLogicalAnd(auVar22,auVar15);
  pRVar3->command[1] = RVar10;
  auVar17 = vectorConvertFromUnsignedFixedPointWord(auVar12,0);
  auVar13 = vectorLogicalAnd(auVar13,auVar15);
  auVar12 = ZEXT416(0xffffffff);
  auVar16 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar21 = vectorConvertFromUnsignedFixedPointWord(auVar20,0);
  auVar12 = ZEXT416(0xffffffff);
  auVar15 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar20 = vectorConvertFromUnsignedFixedPointWord(auVar14,0);
  auVar12 = vectorConvertFromUnsignedFixedPointWord(auVar13,0);
  pRVar3->command[2] = RVar9;
  pRVar6 = pRVar3->command;
  auVar13 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar14 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  pRVar3->command = pRVar6 + 3;
  pRVar6[3] = NV4097_SET_CLIP_MIN_x2;
  auVar13 = vectorMultiplyAddFloatingPoint(auVar12,auVar18,auVar13);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar16);
  pRVar3->command[1] = 0;
  pRVar6 = pRVar3->command;
  puVar2[0x13] = unaff_r27;
  auVar12 = ZEXT416(0xffffffff);
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  pRVar6[2] = 0x3f800000;
  pRVar6 = pRVar3->command;
  auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar21 = vectorAddFloatingPoint(auVar21,auVar13);
  auVar20 = vectorAddFloatingPoint(auVar20,auVar16);
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar17,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar12
                      );
  pRVar3->command = pRVar6 + 3;
  pRVar6[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  pRVar6 = pRVar3->command;
  puVar2[0x14] = unaff_r28;
  uVar1 = storeVectorElementWordIndexed(auVar21,4,ZEXT48(pRVar6));
  *(undefined4 *)((uint)(pRVar6 + 1) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar20,8,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 2) & 0xfffffffc) = uVar1;
  pRVar3->command[3] = 0x3f000000;
  pRVar3->command[4] = 0;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x14,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 5) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar12,0x18,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 6) & 0xfffffffc) = uVar1;
  pRVar3->command[7] = 0x3f000000;
  pRVar3->command[8] = 0;
  puVar2[0x15] = unaff_r29;
  pRVar6 = pRVar3->command;
  pRVar3->command = pRVar6 + 9;
  puVar2[0x12] = unaff_r26;
  pRVar6[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar1 = storeVectorElementWordIndexed(auVar21,4,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 1) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar20,8,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 2) & 0xfffffffc) = uVar1;
  pRVar3->command[3] = 0x3f000000;
  pRVar3->command[4] = 0;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x14,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 5) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar12,0x18,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 6) & 0xfffffffc) = uVar1;
  pRVar3->command[7] = 0x3f000000;
  pRVar3->command[8] = 0;
  pRVar6 = pRVar3->command;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x70,lVar7);
  *(undefined4 *)(puVar2 + 0xe) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,0x74,lVar7);
  *(undefined4 *)((int)puVar2 + 0x74) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x78,lVar7);
  *(undefined4 *)(puVar2 + 0xf) = uVar1;
  lVar11 = 2;
  pRVar3->command = pRVar6 + 9;
  pRVar3 = HUD_Pass;
  uVar1 = storeVectorElementWordIndexed(auVar12,0x7c,lVar7);
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar1;
  lVar7 = uVar5 - 0x50;
  *pRVar3->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar3->command[1] = 0x12;
  pRVar6 = pRVar3->command + 2;
  pRVar3->command = pRVar6;
  do {
    pRVar8 = (RsxCmd *)lVar7;
    *pRVar6 = *pRVar8;
    pRVar6 = pRVar3->command;
    pRVar3->command = pRVar6 + 1;
    lVar7 = lVar7 + 8;
    pRVar6[1] = pRVar8[1];
    pRVar6 = pRVar3->command + 1;
    pRVar3->command = pRVar6;
    pRVar4 = HUD_Pass;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar4->command[1] = RVar10;
  pRVar4->command[2] = RVar9;
  pRVar4->command = pRVar4->command + 3;
  return;
}


// 0x01753f0 (0xd0 bytes)
// strings: 00653ffc: '%x %x %x %x\n'

void VU1_dumpChain(void)

{
  GPiece<16> auVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  GPiece<16> auVar6;
  byte local_20;
  
  uVar5 = (&DAT_00e5aa50)[DAT_00e5aa68];
  if (uVar5 != g_pPacket) {
    do {
      auVar6 = *(undefined1 (*) [16])(uVar5 & 0xfffffff0);
      auVar1 = auVar6 >> 0x70 & (GPiece<16>)0xff;
      local_20 = auVar1[1] | auVar1[2] | auVar1[3] | auVar1[4] | auVar1[5] | auVar1[6] | auVar1[7] |
                 auVar6[1];
      bVar2 = local_20;
      auVar1 = auVar6 >> 0x68 & (GPiece<16>)0xff;
      local_20 = auVar1[1] | auVar1[2] | auVar1[3] | auVar1[4] | auVar1[5] | auVar1[6] | auVar1[7] |
                 auVar6[2];
      bVar3 = local_20;
      local_20 = auVar6[0];
      uVar4 = (ulonglong)local_20;
      auVar1 = auVar6 >> 0x60 & (GPiece<16>)0xff;
      local_20 = auVar1[1] | auVar1[2] | auVar1[3] | auVar1[4] | auVar1[5] | auVar1[6] | auVar1[7] |
                 auVar6[3];
      printf("%x %x %x %x\n",uVar4,(ulonglong)bVar2,(ulonglong)bVar3,(ulonglong)local_20);
      uVar5 = uVar5 + 0x10;
    } while (uVar5 != g_pPacket);
  }
  return;
}


// 0x01754c0 (0x4 bytes)
void STUB_001754c0(...)

{
  return;
}


// 0x01754c4 (0x4 bytes)
void STUB_001754c4(...)

{
  return;
}


// 0x01754c8 (0x4 bytes)
void STUB_001754c8(...)

{
  return;
}


// 0x01754cc (0x4 bytes)
void STUB_001754cc(...)

{
  return;
}


// 0x01754d0 (0x4 bytes)
void STUB_001754d0(...)

{
  return;
}


// 0x01754d4 (0x4 bytes)
void STUB_001754d4(...)

{
  return;
}


// 0x01754d8 (0x4 bytes)
void STUB_001754d8(...)

{
  return;
}


// 0x01754dc (0x4 bytes)
void STUB_001754dc(...)

{
  return;
}


// 0x01754e0 (0x4 bytes)
void STUB_001754e0(...)

{
  return;
}


// 0x01754e4 (0x8 bytes)
undefined8 STUB_001754e4_RET_0(...)

{
  return 0;
}


// 0x01754ec (0x68 bytes)
// strings: 0065400c: 'DMAC(15) - Bus Error\n' | 00654024: 'D1_CHCR=%X\nD1_TADR=%X' | 0065403c: "Why doesn't this work_q"

void DMAC_BEIS_Handler(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *DAT_0159b368;
  uVar2 = *DAT_0159b36c;
  printf("DMAC(15) - Bus Error\n");
  printf("D1_CHCR=%X\nD1_TADR=%X",(ulonglong)uVar1,(ulonglong)uVar2);
  printf("Why doesn\'t this work_q");
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 0x0175554 (0x4 bytes)
void STUB_00175554(...)

{
  return;
}


