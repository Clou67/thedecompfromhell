// game/tieproc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x1658d8-0x166e08
#include <stdio.h>
#include "game/tieproc.h"
#include "game/debug.h"
#include "game/loaders.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x01658d8 (0x10c4 bytes)
void InitGsRegPresets_1658d8(void)

{
  DAT_007386a0 = 0x10000;
  DAT_007359e0 = SCE_GIF_SET_TAG(6,1,0,0,1,10);
  DAT_007359f0 = SCE_GS_SET_PRIM(0x29,0,0,0,0,0,1,0);
  DAT_007359f8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735a00 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a08 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735a10 = FUN_00502e48(0);
  DAT_00735a18 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735a20 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a28 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_00735a30 = FUN_00502e48(1);
  DAT_00735a38 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735a40 = SCE_GS_SET_PRIM(0x29,0,0,0,0,0,1,0);
  DAT_00735a48 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735a50 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a58 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735a60 = FUN_00502e48(0);
  DAT_00735a68 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735a70 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a78 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_00735a80 = FUN_00502e48(1);
  DAT_00735a88 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735a90 = SCE_GS_SET_PRIM(0x29,0,0,0,0,0,1,0);
  DAT_00735a98 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735aa0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735aa8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735ab0 = FUN_00502e48(0);
  DAT_00735ab8 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735ac0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735ac8 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_00735ad0 = FUN_00502e48(1);
  DAT_00735ad8 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735ae0 = SCE_GS_SET_PRIM(0x29,0,0,0,0,0,1,0);
  DAT_00735ae8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735af0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735af8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735b00 = FUN_00502e48(0);
  DAT_00735b08 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735b10 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b18 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_00735b20 = FUN_00502e48(1);
  DAT_00735b28 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735b30 = SCE_GS_SET_PRIM(0x29,0,0,0,0,0,1,0);
  DAT_00735b38 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735b40 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b48 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735b50 = FUN_00502e48(0);
  DAT_00735b58 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735b60 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b68 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_00735b70 = FUN_00502e48(1);
  DAT_00735b78 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735b80 = SCE_GS_SET_PRIM(0x29,0,0,0,0,0,1,0);
  DAT_00735b88 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735b90 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b98 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_00735ba0 = FUN_00502e48(0);
  DAT_00735ba8 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735bb0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735bb8 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_00735bc0 = FUN_00502e48(1);
  DAT_00735bc8 = SCE_GS_SET_XYZ(0,0,0);
  DAT_00735ec8 = FUN_005030f4(0,0);
  DAT_00735ecc = FUN_00503104(0x3c6,9,0xc,0);
  DAT_00735ed8 = FUN_005030cc(8,0);
  DAT_00735eec = FUN_005030fc(0);
  DAT_00735f00 = FUN_005030ac(0,0);
  DAT_00735f04 = FUN_005030d4(0x2c,0);
  DAT_00735f08 = FUN_005030f4(0,0);
  DAT_00735f0c = FUN_00502e98(4,4,0);
  DAT_00735f18 = FUN_005030b4(0);
  DAT_00735f2c = Gs_DmaTagByte(2,0);
  DAT_00735f58 = FUN_005030f4(0,0);
  DAT_00735f5c = FUN_00503104(0x3c6,10,0xc,0);
  DAT_00735f68 = FUN_005030cc(8,0);
  DAT_00735f7c = FUN_005030fc(0);
  DAT_00735f90 = FUN_005030ac(0,0);
  DAT_00735f94 = FUN_005030d4(0x2c,0);
  DAT_00735f98 = FUN_005030f4(0,0);
  DAT_00735f9c = FUN_00502e98(4,4,0);
  DAT_00735fa8 = FUN_005030b4(0);
  DAT_0073608c = Gs_DmaTagByte(2,0);
  DAT_007360bc = Gs_DmaTagByte(2,0);
  DAT_007360ec = Gs_DmaTagByte(2,0);
  DAT_0073611c = Gs_DmaTagByte(3,0);
  DAT_00736198 = FUN_00502e98(4,4,0);
  DAT_0073619c = FUN_00503104(0x123,6,0xc,0);
  DAT_007361a8 = FUN_00502e98(4,4,0);
  DAT_007361ac = FUN_00503104(0x287,6,0xc,0);
  DAT_00736318 = FUN_00502e98(4,4,0);
  DAT_00736328 = FUN_00502e98(4,4,0);
  DAT_00736510 = SCE_GIF_SET_TAG(1,1,0,0,1,2);
  DAT_00736520 = SCE_GIF_SET_TAG(2,1,0,0,1,1);
  DAT_00736530 = SCE_GIF_SET_TAG(1,1,0,0,1,0xb);
  DAT_00736540 = SCE_GIF_SET_TAG(1,1,0,0,1,0xb);
  DAT_00736550 = SCE_GIF_SET_TAG(1,1,0,0,1,0xd);
  DAT_00736560 = SCE_GIF_SET_TAG(1,1,0,0,1,4);
  DAT_00736570 = SCE_GIF_SET_TAG(1,1,0,0,1,4);
  DAT_00736580 = SCE_GIF_SET_TAG(1,1,0,0,1,5);
  DAT_00736590 = SCE_GIF_SET_TAG(1,1,0,0,1,6);
  DAT_007365a0 = SCE_GIF_SET_TAG(1,1,0,0,1,7);
  DAT_007365b0 = SCE_GIF_SET_TAG(1,1,0,0,1,6);
  DAT_007365c0 = SCE_GIF_SET_TAG(1,0,0,0,1,0xf);
  DAT_007365d0 = SCE_GIF_SET_TAG(1,1,0,0,1,0xf);
  DAT_007365e0 = SCE_GIF_SET_TAG(1,1,0,0,0,1);
  DAT_007365f0 = SCE_GIF_SET_TAG(1,1,0,0,0,2);
  DAT_00736600 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0);
  DAT_00736610 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_00736620 = SCE_GIF_SET_TAG(1,0,0,0,0,2);
  DAT_00736630 = SCE_GIF_SET_TAG(1,1,0,0,1,10);
  DAT_00736640 = SCE_GIF_SET_TAG(1,1,0,0,1,2);
  DAT_00736650 = SCE_GIF_SET_TAG(1,1,0,0,1,10);
  DAT_00736660 = SCE_GIF_SET_TAG(1,1,1,0x7c,0,0xc);
  DAT_0073667c = Gs_DmaTagByte(2,0);
  DAT_007366d0 = SCE_GS_SET_TEX0(0,1,0x13,4,4,1,0,0);
  DAT_00736738 = FUN_005030f4(0,0);
  DAT_0073673c = FUN_00503104(0,1,0xc,0);
  DAT_00736748 = FUN_005030bc(4,0);
  DAT_0073674c = FUN_00503104(0x4000,0,0xe,0);
  DAT_0073675c = FUN_00503104(0x32,0,0xd,0);
  DAT_00736768 = FUN_005030f4(0,0);
  DAT_0073676c = FUN_00503104(0x40cc,0,0xe,0);
  DAT_0073677c = FUN_00503104(0x80c6,6,0xc,0);
  DAT_00736788 = FUN_005030f4(1,0);
  DAT_0073678c = FUN_00503104(0x4346,0x40,0xe,0);
  DAT_00736798 = FUN_005030f4(0,0);
  DAT_0073679c = FUN_005030bc(0,0);
  DAT_007367ac = FUN_00503104(0x1e,0,0xe,0);
  DAT_007367bc = FUN_005030fc(0);
  DAT_0073684c = Gs_DmaTagByte(4,0);
  DAT_0073686c = Gs_DmaTagByte(0xd,0);
  DAT_00736870 = SCE_GIF_SET_TAG(1,1,1,0x7c,0,0xc);
  DAT_00736888 = FUN_00502e98(4,4,0);
  DAT_0073688c = FUN_00503104(0,4,0xc,0);
  DAT_0073689c = FUN_005030c4(10,0);
  DAT_00737c48 = FUN_00502e98(4,4,0);
  DAT_00737c74 = FUN_005030dc(0);
  DAT_00737c88 = FUN_00502e98(1,3,0);
  DAT_00737ca0 = FUN_005030ec(0);
  DAT_00737ce0 = FUN_005030ec(0);
  return;
}


// 0x016699c (0x13c bytes)
// strings: 00653c74: 'tie texture overflow\n'

void DrawTies_CheckTexOverflow(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = g_pPacket;
  g_pPacket = g_pPacket + 0x10;
  *DAT_00e59c10 = 0;
  DAT_00e59c10[1] = (char)g_pPacket;
  DAT_00e59c10[2] = 0;
  DAT_00e59c10[3] = 0;
  if ((g_DebugEnables[6] != 0) && (g_DebugEnables[5] != 0)) {
    lVar3 = STUB_00166e20_RET_0(g_GsRamAlloc);
    STUB_001754c0();
    if (0x400000 < (int)lVar3) {
      printf("tie texture overflow\n");
    }
    DAT_00e58408 = DAT_00e58408 + ((uint)(DAT_00e58408 - lVar3 >> 0x3f) & (int)lVar3 - DAT_00e58408)
    ;
  }
  *g_pPacket = 0;
  g_pPacket[1] = (char)DAT_00e59c10 + '\x10';
  g_pPacket[2] = 0;
  g_pPacket[3] = 0;
  g_pPacket = g_pPacket + 0x10;
  *puVar1 = 0;
  puVar2 = g_pPacket;
  puVar1[2] = 0;
  puVar1[1] = (char)puVar2;
  puVar1[3] = 0;
  return;
}


// 0x0166ad8 (0x4 bytes)
void STUB_00166ad8(...)

{
  return;
}


// 0x0166adc (0x54 bytes)
void ____Unused_CopyBuffers_e58810(void)

{
  FastMemCopy(&DAT_00e58e10,&DAT_00e5a020,0x200);
  FastMemCopy(&DAT_00e58810,&DAT_00e59c20,0x400);
  return;
}


// 0x0166b30 (0x3c bytes)
void ____Unused_StubCall_e59010(void)

{
  STUB_00166e28(&DAT_00e59010);
  STUB_00166e28(&DAT_00e5a220);
  return;
}


// 0x0166b6c (0x4 bytes)
void STUB_00166b6c(...)

{
  return;
}


// 0x0166b70 (0x298 bytes)
// strings: 00653c8c: 'tie texs' | 00653c9c: 'tie draw'

void DrawTies(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 1;
  if (1 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f4;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) | 8;
    } while (iVar4 < DAT_00e583f0);
  }
  g_GsRamAlloc = DAT_00966ad4;
  DAT_00e59c10 = g_pPacket;
  g_pPacket = g_pPacket + 0x10;
  STUB_00065630("tie texs",1);
  if (g_DebugEnables[6] != 0) {
    FlushCache(0);
    STUB_00166e1c();
    STUB_0050045c(&DAT_00e5a220,0x3600,0x40);
  }
  DrawTies_CheckTexOverflow();
  FastMemCopy(&DAT_00e5a020,&DAT_00e58e10,0x200);
  FastMemCopy(&DAT_00e59c20,&DAT_00e58810,0x400);
  iVar4 = 1;
  if (1 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f4;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) & 0xfff7;
    } while (iVar4 < DAT_00e583f0);
  }
  iVar4 = 0;
  if (0 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f0;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) | 8;
    } while (iVar4 < DAT_00e583f0);
  }
  iVar4 = g_pPacket + 0x10;
  g_GsRamAlloc = DAT_00966ad4;
  DAT_00e59c10 = g_pPacket;
  g_pPacket = iVar4;
  if (g_DebugEnables[6] != 0) {
    FlushCache(0);
    STUB_00166e1c();
    STUB_0050045c(&DAT_00e59010,0x3600,0x40);
  }
  STUB_00065630("tie draw",5);
  DrawTies_CheckTexOverflow();
  iVar4 = 0;
  if (0 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f0;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      bVar1 = iVar4 < DAT_00e583f0;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) & 0xfff7;
    } while (bVar1);
  }
  FastMemCopy(g_pPacket,&DAT_007367b0,0x20);
  STUB_0006562c("tie draw",5);
  return;
}


