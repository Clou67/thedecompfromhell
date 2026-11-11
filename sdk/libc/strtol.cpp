// sdk/libc/strtol.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5c8890-0x5c8a94
#include "sdk/libc/strtol.h"
#include "sdk/libc/asctime.h"
#include "sdk/libc/xstoul.h"

// SDK libc.a(strtol.o): _Stolx  [fuzzy 1.000 match]
// 0x05c8890 (0x1fc bytes)
uint FUN_005c8890(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 auStack_40 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_40;
  }
  bVar1 = *param_1;
  pbVar7 = param_1;
  while ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c284) & 0x144) != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  uVar6 = (uint)(char)bVar1;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    uVar3 = FUN_005cac2c(pbVar7 + 1,param_2,param_3,param_4);
    pbVar2 = (byte *)*param_2;
    if (pbVar7 + 1 != pbVar2) goto LAB_005c8948;
LAB_005c89c0:
    *param_2 = param_1;
LAB_005c89c4:
    if (uVar3 != 0) goto LAB_005c89cc;
  }
  else {
    uVar6 = 0x2b;
    uVar3 = FUN_005cac2c(pbVar7,param_2,param_3,param_4);
    pbVar2 = (byte *)*param_2;
    if (pbVar7 == pbVar2) goto LAB_005c89c0;
LAB_005c8948:
    if (param_1 == pbVar2) goto LAB_005c89c4;
  }
  if (uVar6 == 0x2b) {
    if (-1 < (int)uVar3) {
      return uVar3;
    }
  }
  else {
    uVar5 = uVar3;
    if ((uVar6 != 0x2d) || (uVar5 = -uVar3, uVar3 < 0x80000001)) {
      return uVar5;
    }
  }
LAB_005c89cc:
  puVar4 = (undefined4 *)FUN_005d5904();
  *puVar4 = 0x8001001c;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  uVar3 = (int)(uVar6 ^ 0x2d) >> 0x1f;
  return ((int)(uVar3 - (uVar3 ^ uVar6 ^ 0x2d)) >> 0x1f) + 0x80000000;
}


// 0x05c8a8c (0x8 bytes)
void FUN_005c8a8c(void)

{
  FUN_005c8890();
  return;
}


