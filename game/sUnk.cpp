// game/sUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x165588-0x166e08
#include <stdio.h>
#include <string.h>
#include "game/sUnk.h"
#include "game/debug.h"
#include "game/fUnk.h"
#include "game/loaders.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x0165588 (0x14 bytes)
void SECTION_HEADER_UNKNOWN(void)

{
  DAT_00734adc = 0x10000;
  return;
}


// 0x01655a0 (0x4 bytes)
void STUB_001655a0(...)

{
  return;
}


// 0x01655a4 (0x70 bytes)
void InitIndexedBuffers(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  DAT_00a56eb0 = &DAT_00a572c4;
  DAT_00a56eb4 = 0x400000;
  puVar2 = &g_IndexedBufferSlots;
  DAT_00a56ebc = &DAT_00a572c4;
  puVar1 = &DAT_00a56ec8;
  lVar3 = 0x10;
  DAT_00a56ec0 = 0;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    puVar2[4] = 0;
    puVar1[4] = 0;
    puVar2[8] = 0;
    puVar1[8] = 0;
    puVar2[0xc] = 0;
    puVar1[0xc] = 0;
    puVar2 = puVar2 + 0x10;
    puVar1 = puVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}


// 0x0165614 (0xf8 bytes)
int AllocIndexedBuffer
              (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GPiece<24> local_30;
  
  if (DAT_00a56eb4 - (DAT_00a56ebc - DAT_00a56eb0) < (int)(param_3 << 4)) {
    iVar3 = -1;
  }
  else if (DAT_00a56ec0 == 0x40) {
    iVar3 = -2;
  }
  else {
    FUN_005031bc(local_30,1);
    iVar3 = DAT_00a56ec0;
    iVar1 = DAT_00a56ec0 * 0x10;
    iVar2 = DAT_00a56ec0 * 4;
    DAT_00a56ec0 = DAT_00a56ec0 + 1;
    (&g_IndexedBufferSlots)[iVar2] = DAT_00a56ebc;
    (&DAT_00a56ec8)[iVar3 * 4] = (int)param_3;
    *(undefined4 *)(&DAT_00a56ecc + iVar1) = param_4;
    DAT_00a56ebc = DAT_00a56ebc + (int)((param_3 & 0xffffffff) << 4);
  }
  return iVar3;
}


// 0x016570c (0xc0 bytes)
undefined8 WriteIndexedBuffer(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  GPiece<24> local_20;
  
  if (((int)param_2 < 0) || (0x3f < (int)param_2)) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)((int)&DAT_00a56ec8 + (int)(param_2 << 4));
    if (iVar1 == 0) {
      uVar2 = 0xfffffffffffffffd;
    }
    else if (iVar1 < param_4 + param_3) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      FUN_005031bc(local_20,1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x01657cc (0x34 bytes)
undefined4 GetIndexedBufferSize(longlong param_1)

{
  undefined4 uVar1;
  
  if (((int)param_1 < 0) || (0x3f < (int)param_1)) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar1 = *(undefined4 *)((int)&DAT_00a56ec8 + (int)(param_1 << 4));
  }
  return uVar1;
}


// 0x0165800 (0xd4 bytes)
undefined8 ReadIndexedBuffer(void *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  if (param_4 == -1) {
    if ((iVar3 < 0) || (0x3f < iVar3)) {
      param_4 = -3;
    }
    else {
      param_4 = *(int *)((int)&DAT_00a56ec8 + (int)(param_2 << 4));
    }
  }
  if ((iVar3 < 0) || (0x3f < iVar3)) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = (int)(param_2 << 4);
    iVar3 = *(int *)((int)&DAT_00a56ec8 + iVar1);
    if (iVar3 == 0) {
      uVar2 = 0xfffffffffffffffd;
    }
    else if (iVar3 < param_3 + param_4) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      memcpy(param_1,(void *)(*(int *)((int)&g_IndexedBufferSlots + iVar1) + param_3 * 0x10),
                   param_4 << 4);
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x01658d4 (0x4 bytes)
void STUB_001658d4(...)

{
  return;
}


// 0x01658d8 (0x10c4 bytes)
void InitGsRegPresets_1658d8(void)

{
  DAT_007386a0 = 0x10000;
  DAT_007359e0 = FUN_00502ea0(6,1,0,0,1,10);
  DAT_007359f0 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_007359f8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a00 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a08 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a10 = FUN_00502e48(0);
  DAT_00735a18 = FUN_00502fec(0,0,0);
  DAT_00735a20 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a28 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735a30 = FUN_00502e48(1);
  DAT_00735a38 = FUN_00502fec(0,0,0);
  DAT_00735a40 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735a48 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a50 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a58 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a60 = FUN_00502e48(0);
  DAT_00735a68 = FUN_00502fec(0,0,0);
  DAT_00735a70 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a78 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735a80 = FUN_00502e48(1);
  DAT_00735a88 = FUN_00502fec(0,0,0);
  DAT_00735a90 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735a98 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735aa0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735aa8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735ab0 = FUN_00502e48(0);
  DAT_00735ab8 = FUN_00502fec(0,0,0);
  DAT_00735ac0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735ac8 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735ad0 = FUN_00502e48(1);
  DAT_00735ad8 = FUN_00502fec(0,0,0);
  DAT_00735ae0 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735ae8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735af0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735af8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b00 = FUN_00502e48(0);
  DAT_00735b08 = FUN_00502fec(0,0,0);
  DAT_00735b10 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b18 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735b20 = FUN_00502e48(1);
  DAT_00735b28 = FUN_00502fec(0,0,0);
  DAT_00735b30 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735b38 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b40 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b48 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b50 = FUN_00502e48(0);
  DAT_00735b58 = FUN_00502fec(0,0,0);
  DAT_00735b60 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b68 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735b70 = FUN_00502e48(1);
  DAT_00735b78 = FUN_00502fec(0,0,0);
  DAT_00735b80 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735b88 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b90 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b98 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735ba0 = FUN_00502e48(0);
  DAT_00735ba8 = FUN_00502fec(0,0,0);
  DAT_00735bb0 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735bb8 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735bc0 = FUN_00502e48(1);
  DAT_00735bc8 = FUN_00502fec(0,0,0);
  DAT_00735ec8 = FUN_005030f4(0,0);
  DAT_00735ecc = FUN_00503104(0x3c6,9,0xc,0);
  DAT_00735ed8 = FUN_005030cc(8,0);
  DAT_00735eec = FUN_005030fc(0);
  DAT_00735f00 = FUN_005030ac(0,0);
  DAT_00735f04 = FUN_005030d4(0x2c,0);
  DAT_00735f08 = FUN_005030f4(0,0);
  DAT_00735f0c = FUN_00502e98(4,4,0);
  DAT_00735f18 = FUN_005030b4(0);
  DAT_00735f2c = FUN_0050300c(2,0);
  DAT_00735f58 = FUN_005030f4(0,0);
  DAT_00735f5c = FUN_00503104(0x3c6,10,0xc,0);
  DAT_00735f68 = FUN_005030cc(8,0);
  DAT_00735f7c = FUN_005030fc(0);
  DAT_00735f90 = FUN_005030ac(0,0);
  DAT_00735f94 = FUN_005030d4(0x2c,0);
  DAT_00735f98 = FUN_005030f4(0,0);
  DAT_00735f9c = FUN_00502e98(4,4,0);
  DAT_00735fa8 = FUN_005030b4(0);
  DAT_0073608c = FUN_0050300c(2,0);
  DAT_007360bc = FUN_0050300c(2,0);
  DAT_007360ec = FUN_0050300c(2,0);
  DAT_0073611c = FUN_0050300c(3,0);
  DAT_00736198 = FUN_00502e98(4,4,0);
  DAT_0073619c = FUN_00503104(0x123,6,0xc,0);
  DAT_007361a8 = FUN_00502e98(4,4,0);
  DAT_007361ac = FUN_00503104(0x287,6,0xc,0);
  DAT_00736318 = FUN_00502e98(4,4,0);
  DAT_00736328 = FUN_00502e98(4,4,0);
  DAT_00736510 = FUN_00502ea0(1,1,0,0,1,2);
  DAT_00736520 = FUN_00502ea0(2,1,0,0,1,1);
  DAT_00736530 = FUN_00502ea0(1,1,0,0,1,0xb);
  DAT_00736540 = FUN_00502ea0(1,1,0,0,1,0xb);
  DAT_00736550 = FUN_00502ea0(1,1,0,0,1,0xd);
  DAT_00736560 = FUN_00502ea0(1,1,0,0,1,4);
  DAT_00736570 = FUN_00502ea0(1,1,0,0,1,4);
  DAT_00736580 = FUN_00502ea0(1,1,0,0,1,5);
  DAT_00736590 = FUN_00502ea0(1,1,0,0,1,6);
  DAT_007365a0 = FUN_00502ea0(1,1,0,0,1,7);
  DAT_007365b0 = FUN_00502ea0(1,1,0,0,1,6);
  DAT_007365c0 = FUN_00502ea0(1,0,0,0,1,0xf);
  DAT_007365d0 = FUN_00502ea0(1,1,0,0,1,0xf);
  DAT_007365e0 = FUN_00502ea0(1,1,0,0,0,1);
  DAT_007365f0 = FUN_00502ea0(1,1,0,0,0,2);
  DAT_00736600 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0);
  DAT_00736610 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_00736620 = FUN_00502ea0(1,0,0,0,0,2);
  DAT_00736630 = FUN_00502ea0(1,1,0,0,1,10);
  DAT_00736640 = FUN_00502ea0(1,1,0,0,1,2);
  DAT_00736650 = FUN_00502ea0(1,1,0,0,1,10);
  DAT_00736660 = FUN_00502ea0(1,1,1,0x7c,0,0xc);
  DAT_0073667c = FUN_0050300c(2,0);
  DAT_007366d0 = STUB_00502fbc_RET_0(0,1,0x13,4,4,1,0,0);
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
  DAT_0073684c = FUN_0050300c(4,0);
  DAT_0073686c = FUN_0050300c(0xd,0);
  DAT_00736870 = FUN_00502ea0(1,1,1,0x7c,0,0xc);
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
  
  puVar1 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  *DAT_00e59c10 = 0;
  DAT_00e59c10[1] = (char)DAT_00e5aa58;
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
  *DAT_00e5aa58 = 0;
  DAT_00e5aa58[1] = (char)DAT_00e59c10 + '\x10';
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  *puVar1 = 0;
  puVar2 = DAT_00e5aa58;
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
  DAT_00e59c10 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
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
  iVar4 = DAT_00e5aa58 + 0x10;
  g_GsRamAlloc = DAT_00966ad4;
  DAT_00e59c10 = DAT_00e5aa58;
  DAT_00e5aa58 = iVar4;
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
  FastMemCopy(DAT_00e5aa58,&DAT_007367b0,0x20);
  STUB_0006562c("tie draw",5);
  return;
}


