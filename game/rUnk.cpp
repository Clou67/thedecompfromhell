// game/rUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 17 functions, 0x15251c-0x15350c
#include "game/rUnk.h"
#include "game/draw.h"
#include "game/hud.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x015251c (0x14 bytes)
void SECTION_HEADER_S_UNKNOWN_STUBBED(void)

{
  DAT_007317dc = 0x10000;
  return;
}


// 0x0152540 (0x21c bytes)
// inlined: FastRSqrt @0x1525dc, FastRSqrt @0x1526f8
void ____DrawScreenEffect_BuildPacketA(double param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  undefined4 uStack0000003c;
  
  fStack00000034 = (float)param_2;
  dVar14 = (double)fStack00000034;
  fStack00000030 = (float)((ulonglong)param_2 >> 0x20);
  dVar17 = (double)fStack00000030;
  fStack00000038 = (float)((ulonglong)param_3 >> 0x20);
  dVar16 = (double)fStack00000038;
  dVar12 = 0.0;
  iVar8 = FLOAT_ORDER(fStack00000034);
  fVar1 = (float)(dVar16 * dVar16 +
                 (double)(float)(dVar17 * dVar17 + (double)(float)(dVar14 * dVar14)));
  iVar7 = FLOAT_ORDER(fStack00000030);
  iVar6 = FLOAT_ORDER(fStack00000038);
  uStack0000003c = (undefined4)param_3;
  dVar10 = dVar12;
  dVar13 = dVar12;
  dVar11 = dVar12;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar10 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    dVar10 = (double)(float)(dVar17 * dVar10);
    dVar13 = (double)(float)(dVar14 * dVar10);
    dVar11 = (double)(float)(dVar16 * dVar10);
  }
  DAT_00a54ed0 = (float)dVar10;
  DAT_00a54ed4 = (float)dVar13;
  DAT_00a54ed8 = (float)dVar11;
  DAT_00a54edc = uStack0000003c;
  DAT_00a54ef0 = (float)(dVar10 * param_1);
  DAT_00a54ef4 = (float)(dVar13 * param_1);
  DAT_00a54ef8 = (float)(dVar11 * param_1);
  dVar9 = dVar14;
  dVar15 = dVar17;
  if (iVar7 < iVar8) {
    if (iVar7 < iVar6) {
      dVar9 = dVar17;
      dVar15 = dVar16;
      dVar16 = dVar14;
    }
  }
  else if (iVar8 < iVar6) {
    dVar9 = dVar16;
    dVar15 = dVar14;
    dVar16 = dVar17;
  }
  DAT_00a54eec = 0;
  fVar1 = (float)(dVar13 * dVar16 - (double)(float)(dVar11 * dVar15));
  fVar2 = (float)(dVar11 * dVar9 - (double)(float)(dVar10 * dVar16));
  fVar3 = (float)(dVar10 * dVar15 - (double)(float)(dVar13 * dVar9));
  fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  dVar10 = dVar12;
  dVar13 = dVar12;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar13 = (double)(fVar1 * fVar5);
    dVar12 = (double)(fVar2 * fVar5);
    dVar10 = (double)(fVar3 * fVar5);
  }
  DAT_00a54ee0 = (float)dVar13;
  DAT_00a54ee4 = (float)dVar12;
  DAT_00a54ee8 = (float)dVar10;
  return;
}


// 0x015275c (0x64 bytes)
short * ____DrawScreenEffect_DispatchCmd(short *param_1)

{
  if (*param_1 == 0) {
    STUB_001534ec(param_1);
    param_1 = param_1 + 0x10;
  }
  else if (*param_1 == 1) {
    STUB_001534f0(param_1);
    param_1 = param_1 + 0x18;
  }
  return param_1;
}


// 0x01527c0 (0xc0 bytes)
void ____DrawScreenEffect_WriteGifTag(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  
  *DAT_00e5aa58 = 3;
  DAT_00e5aa58[1] = (char)(param_3 << 4) * '\x03' + '\x10';
  DAT_00e5aa58[2] = 0;
  uVar1 = FUN_0050300c(3,0);
  DAT_00e5aa58[3] = uVar1;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  STUB_001534e8(param_1,*(undefined4 *)((int)&DAT_00731800 + (int)(param_2 << 2)));
  return;
}


// 0x0152880 (0x2c4 bytes)
void ____DrawScreenEffect_BuildPacketB(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = (uint)g_FrameBufWidth;
  uVar9 = (ulonglong)g_FrameBufHeight;
  iVar6 = ((int)g_FrameBufWidth >> 5) +
          (uint)(g_FrameBufWidth < 0 && (g_FrameBufWidth & 0x1fU) != 0);
  lVar5 = (longlong)iVar6;
  uVar3 = idol_draw::PackCmd(0,1,2,1,0);
  SetGSReg(3,uVar3);
  *DAT_00e5aa58 = (char)(lVar5 + 5);
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar4 = FUN_0050300c((int)(lVar5 + 5),0);
  DAT_00e5aa58[3] = uVar4;
  puVar2 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar3 = FUN_00502ea0(1,0,0,0,0,1);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = 0xe;
  uVar3 = FUN_00502f98(1,0,0,1,0,0,1,1);
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = 0x16;
  uVar3 = FUN_00502ea0(1,1,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  *(undefined8 *)(puVar2 + 0x38) = 0x10;
  uVar3 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  uVar3 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x7f,0);
  *(undefined8 *)(puVar2 + 0x48) = uVar3;
  uVar3 = FUN_00502ea0(lVar5,1,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x50) = uVar3;
  *(undefined8 *)(puVar2 + 0x58) = 0x44;
  if (0 < iVar6) {
    iVar1 = (int)((uVar9 & 0xffffffff) << 3);
    iVar7 = 0;
    puVar10 = (undefined8 *)(puVar2 + 0x60);
    iVar12 = (uVar11 & 0x1fffffff) * -8;
    iVar8 = 0x50;
    do {
      uVar3 = FUN_00502fec(iVar12 + 0x8000,0x8000 - iVar1,0);
      *puVar10 = uVar3;
      uVar3 = FUN_00502fec(iVar12 + 0x8200,iVar1 + 0x7ff0,0);
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 2;
      iVar12 = iVar12 + 0x200;
      *(undefined8 *)(puVar2 + iVar8 + 0x18) = uVar3;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < iVar6);
  }
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(lVar5 << 4) + 0x50;
  return;
}


// 0x0152b44 (0x2b0 bytes)
void ____DrawScreenEffect_BuildBlendPacket(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar4;
  undefined8 uVar3;
  int iVar6;
  longlong lVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = (uint)g_FrameBufWidth;
  uVar9 = (ulonglong)g_FrameBufHeight;
  iVar6 = ((int)g_FrameBufWidth >> 5) +
          (uint)(g_FrameBufWidth < 0 && (g_FrameBufWidth & 0x1fU) != 0);
  lVar5 = (longlong)iVar6;
  *DAT_00e5aa58 = (char)(lVar5 + 5);
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar4 = FUN_0050300c((int)(lVar5 + 5),0);
  DAT_00e5aa58[3] = uVar4;
  puVar2 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar3 = FUN_00502ea0(1,0,0,0,0,1);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = 0xe;
  uVar3 = idol_draw::Blend(1,0,0x80,1,1,1,1,1);
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = 0x16;
  uVar3 = FUN_00502ea0(1,0,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  *(undefined8 *)(puVar2 + 0x38) = 0x10;
  uVar3 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  *(undefined8 *)(puVar2 + 0x48) = param_1;
  uVar3 = FUN_00502ea0(lVar5,1,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x50) = uVar3;
  *(undefined8 *)(puVar2 + 0x58) = 0x44;
  if (0 < iVar6) {
    iVar1 = (int)((uVar9 & 0xffffffff) << 3);
    iVar7 = 0;
    puVar10 = (undefined8 *)(puVar2 + 0x60);
    iVar12 = (uVar11 & 0x1fffffff) * -8;
    iVar8 = 0x50;
    do {
      uVar3 = FUN_00502fec(iVar12 + 0x8000,0x8000 - iVar1,0);
      *puVar10 = uVar3;
      uVar3 = FUN_00502fec(iVar12 + 0x8200,iVar1 + 0x7ff0,0);
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 2;
      iVar12 = iVar12 + 0x200;
      *(undefined8 *)(puVar2 + iVar8 + 0x18) = uVar3;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < iVar6);
  }
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(lVar5 << 4) + 0x50;
  *DAT_00e5aa58 = 0;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}


// 0x0152df8 (0x39c bytes)
void DrawScreenEffect_152df8(int *param_1)

{
  undefined1 uVar2;
  undefined8 uVar1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  GPiece<16> local_70;
  GPiece<24> local_60;
  
  ____DrawScreenEffect_BuildPacketB();
  *DAT_00e5aa58 = 7;
  DAT_00e5aa58[1] = ((byte)(ZERO_MASK(Cutscene)) & 0x90) + 0x40;
  DAT_00e5aa58[2] = 0;
  uVar2 = FUN_0050300c(7,0);
  DAT_00e5aa58[3] = uVar2;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  iVar3 = *param_1;
  while (iVar3 != 0) {
    piVar4 = param_1 + 8;
    ____DrawScreenEffect_BuildPacketA
              (0x408f400000000000,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
    if (0 < *param_1) {
      iVar3 = 0;
      piVar5 = piVar4;
      do {
        if (*(short *)piVar4 == 0) {
          STUB_001534ec(piVar4);
          piVar4 = piVar5 + 8;
          piVar5 = piVar4;
        }
        else if (*(short *)piVar4 == 1) {
          STUB_001534f0(piVar4);
          piVar5 = piVar5 + 0xc;
          piVar4 = piVar4 + 0xc;
        }
        STUB_001534f4(local_70,local_60);
        STUB_001534f8(0x70000000,DAT_00a54f00,param_1[1]);
        *DAT_00e5aa58 = 3;
        DAT_00e5aa58[1] = 0x70;
        DAT_00e5aa58[2] = 0;
        uVar2 = FUN_0050300c(3,0);
        DAT_00e5aa58[3] = uVar2;
        DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
        STUB_001534e8(2,DAT_00731804);
        *DAT_00e5aa58 = 3;
        DAT_00e5aa58[1] = 0x70;
        DAT_00e5aa58[2] = 0;
        uVar2 = FUN_0050300c(3,0);
        DAT_00e5aa58[3] = uVar2;
        DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
        STUB_001534e8(1,DAT_00731800);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    param_1 = piVar4;
    iVar3 = *piVar4;
  }
  if (Cutscene == 0) {
    SetGSReg(0x28,0x80070);
  }
  else {
    SetGSReg(0x28,0x80080);
  }
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  SetGSReg(3,uVar1);
  ____DrawScreenEffect_BuildBlendPacket(0);
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar1);
  return;
}


// 0x0153194 (0x350 bytes)
void InitGsRegPresets_153194(void)

{
  DAT_007319fc = 0x10000;
  DAT_00731810 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_00731820 = FUN_00502f98(1,0,0,1,0,0,1,0);
  DAT_00731840 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_00731850 = FUN_00502f98(1,0,0,1,0,0,1,1);
  DAT_00731870 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_00731880 = FUN_00502f98(1,0,0,1,0,0,1,2);
  DAT_007318a0 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_007318b0 = FUN_00502f98(1,0,0,1,0,0,1,3);
  DAT_007318d0 = FUN_00502ea0(6,1,0,0,0,1);
  DAT_007318f0 = FUN_00502e50(0);
  DAT_00731900 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00731910 = STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  DAT_00731920 = STUB_00502fbc_RET_0(0xe00,8,0x12,9,9,1,0,0);
  DAT_00731930 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_00731940 = FUN_00502ea0(6,1,0,0,0,1);
  DAT_00731960 = FUN_00502e50(0);
  DAT_00731970 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00731980 = STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  DAT_00731990 = STUB_00502fbc_RET_0(0x1000,8,0x12,9,9,1,0,0);
  DAT_007319a0 = idol_draw::PackCmd(0,1,0,1,0x80);
  return;
}


// 0x01534e8 (0x4 bytes)
void STUB_001534e8(...)

{
  return;
}


// 0x01534ec (0x4 bytes)
void STUB_001534ec(...)

{
  return;
}


// 0x01534f0 (0x4 bytes)
void STUB_001534f0(...)

{
  return;
}


// 0x01534f4 (0x4 bytes)
void STUB_001534f4(...)

{
  return;
}


// 0x01534f8 (0x4 bytes)
void STUB_001534f8(...)

{
  return;
}


// 0x01534fc (0x4 bytes)
void STUB_001534fc(...)

{
  return;
}


// 0x0153500 (0x4 bytes)
void STUB_00153500(...)

{
  return;
}


// 0x0153504 (0x4 bytes)
void STUB_00153504(...)

{
  return;
}


// 0x0153508 (0x4 bytes)
void STUB_00153508(...)

{
  return;
}


