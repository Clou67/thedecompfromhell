// sdk/libc/xstoll.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5da55c-0x5da754
#include "sdk/libc/xstoll.h"
#include "sdk/libc/asctime.h"
#include "sdk/libc/xstoull.h"

// SDK libc.a(xstoll.o): _Stollx  [fuzzy 1.000 match]
// 0x05da55c (0x1f0 bytes)
ulonglong FUN_005da55c(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 auStack_40 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_40;
  }
  bVar5 = *param_1;
  pbVar6 = param_1;
  while ((*(ushort *)((uint)bVar5 * 2 + *(int *)PTR_PTR_0071c580) & 0x144) != 0) {
    pbVar6 = pbVar6 + 1;
    bVar5 = *pbVar6;
  }
  if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
    uVar2 = FUN_005da754(pbVar6 + 1,param_2,param_3,param_4);
    pbVar1 = (byte *)*param_2;
    if (pbVar6 + 1 == pbVar1) goto LAB_005da688;
LAB_005da614:
    uVar4 = uVar2;
    if (param_1 == pbVar1) goto LAB_005da68c;
  }
  else {
    bVar5 = 0x2b;
    uVar2 = FUN_005da754(pbVar6,param_2,param_3,param_4);
    pbVar1 = (byte *)*param_2;
    if (pbVar6 != pbVar1) goto LAB_005da614;
LAB_005da688:
    *param_2 = param_1;
LAB_005da68c:
    uVar4 = uVar2;
    if (uVar2 != 0) goto LAB_005da694;
  }
  if (bVar5 == 0x2b) {
    uVar2 = uVar4;
    if (-1 < (longlong)uVar4) {
      return uVar4;
    }
  }
  else {
    if (bVar5 != 0x2d) {
      return uVar4;
    }
    uVar2 = -uVar4;
    if (uVar4 < 0x8000000000000001) {
      return uVar2;
    }
  }
LAB_005da694:
  puVar3 = (undefined4 *)FUN_005d5904(uVar2);
  *puVar3 = 0x8001001c;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  if (bVar5 == 0x2d) {
    return 0x8000000000000000;
  }
  return 0x7fffffffffffffff;
}


// 0x05da74c (0x8 bytes)
void FUN_005da74c(void)

{
  FUN_005da55c();
  return;
}


