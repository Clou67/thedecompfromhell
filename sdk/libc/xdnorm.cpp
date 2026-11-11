// sdk/libc/xdnorm.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dad7c-0x5daf40
#include "sdk/libc/xdnorm.h"

// SDK libc.a(xdnorm.o): _Dnorm  [fuzzy 1.000 match]
// 0x05dad7c (0x1c4 bytes)
short FUN_005dad7c(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ushort *puVar8;
  
  sVar4 = 1;
  uVar1 = *param_1;
  uVar7 = (ulonglong)uVar1 & 0xf;
  uVar3 = (ushort)uVar7;
  *param_1 = uVar3;
  if ((int)uVar7 == 0) {
    puVar5 = param_1 + 1;
    uVar2 = *puVar5;
    if (((uVar2 == 0) && (param_1[2] == 0)) && (sVar4 = 1, param_1[3] == 0)) goto LAB_005daf08;
    sVar4 = 1;
    while( true ) {
      *param_1 = uVar2;
      sVar4 = sVar4 + -0x10;
      *puVar5 = param_1[2];
      param_1[2] = param_1[3];
      param_1[3] = 0;
      uVar7 = (ulonglong)*param_1;
      if (*param_1 != 0) break;
      uVar2 = *puVar5;
    }
  }
  if (uVar7 < 0x10) {
    puVar5 = param_1 + 1;
    puVar6 = param_1 + 2;
    puVar8 = param_1 + 3;
    do {
      sVar4 = sVar4 + -1;
      *param_1 = (ushort)(uVar7 << 1) | (ushort)(((ulonglong)*puVar5 << 0x20) >> 0x2f);
      *puVar5 = *puVar5 << 1 | (ushort)(((ulonglong)*puVar6 << 0x20) >> 0x2f);
      *puVar6 = *puVar6 << 1 | (ushort)(((ulonglong)*puVar8 << 0x20) >> 0x2f);
      *puVar8 = *puVar8 << 1;
      uVar7 = (ulonglong)*param_1;
    } while (uVar7 < 0x10);
  }
  uVar3 = (ushort)uVar7;
  if (0x1f < uVar7) {
    puVar5 = param_1 + 1;
    puVar6 = param_1 + 2;
    do {
      sVar4 = sVar4 + 1;
      param_1[3] = (ushort)(((ulonglong)param_1[3] << 0x20) >> 0x21) | *puVar6 << 0xf;
      *puVar6 = (ushort)(((ulonglong)*puVar6 << 0x20) >> 0x21) | *puVar5 << 0xf;
      *puVar5 = (ushort)(((ulonglong)*puVar5 << 0x20) >> 0x21) | *param_1 << 0xf;
      uVar7 = ((ulonglong)*param_1 << 0x20) >> 0x21;
      uVar3 = (ushort)uVar7;
      *param_1 = uVar3;
    } while (0x1f < uVar7);
  }
  uVar3 = uVar3 & 0xf;
  *param_1 = uVar3;
LAB_005daf08:
  *param_1 = uVar1 & 0x8000 | uVar3;
  return sVar4;
}


