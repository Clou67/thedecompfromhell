// game/sUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x165588-0x1658d8
#include <string.h>
#include "game/sUnk.h"
#include "game/fUnk.h"
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


