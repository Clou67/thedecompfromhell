// sdk/libc/xttotm.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cbdbc-0x5cc0a8
#include "sdk/libc/xttotm.h"

// SDK libc.a(xttotm.o): _Daysto  [fuzzy 1.000 match]
// 0x05cbdbc (0x90 bytes)
int FUN_005cbdbc(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1;
  iVar2 = ((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0);
  if ((int)param_1 < 1) {
    iVar2 = 0;
    if ((int)param_1 < -3) {
      iVar2 = ((int)(4 - param_1) >> 2) + 1;
    }
  }
  if (((param_1 & 3) == 0) && (param_1 != 0)) {
    return iVar2 + *(short *)(PTR_DAT_0071c3b4 + param_2 * 2);
  }
  return iVar2 + *(short *)(PTR_DAT_0071c3b4 + param_2 * 2 + 0x18);
}


// SDK libc.a(xttotm.o): _Ttotm  [fuzzy 1.000 match]
// 0x05cbe4c (0x25c bytes)
int * FUN_005cbe4c(int *param_1,longlong param_2,int param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  int iVar6;
  longlong lVar5;
  short *psVar7;
  int in_r13;
  int iVar8;
  uint uVar9;
  int local_3c;
  
  param_2 = param_2 + 0x83aa7e80;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(in_r13 + -0x6f58);
  }
  param_1[8] = param_3;
  if (param_3 != 0) {
    syscall();
    param_2 = param_2 + local_3c * 0x3c;
  }
  iVar2 = (int)(param_2 / 0x15180);
  iVar6 = iVar2 + 1;
  uVar3 = (longlong)(iVar6 / 7 + (iVar6 >> 0x1f)) - (longlong)(iVar6 >> 0x1f);
  uVar9 = iVar2 / 0x16d;
  iVar8 = uVar9 * 0x16d;
  param_1[6] = iVar6 - ((int)((uVar3 & 0xffffffff) << 3) - (int)uVar3);
  while( true ) {
    iVar6 = FUN_005cbdbc(uVar9,0);
    iVar6 = iVar6 + iVar8;
    iVar8 = iVar8 + -0x16d;
    if (iVar6 <= iVar2) break;
    uVar9 = uVar9 - 1;
  }
  iVar2 = iVar2 - iVar6;
  param_1[5] = uVar9;
  param_1[7] = iVar2;
  if (((uVar9 & 3) != 0) || (puVar4 = PTR_DAT_0071c3b4, uVar9 == 0)) {
    puVar4 = PTR_DAT_0071c3b4 + 0x18;
  }
  iVar6 = 0xc;
  psVar7 = (short *)(puVar4 + 0x16);
  do {
    iVar6 = iVar6 + -1;
    sVar1 = *psVar7;
    psVar7 = psVar7 + -1;
  } while (iVar2 < sVar1);
  param_1[3] = (iVar2 - sVar1) + 1;
  param_1[4] = iVar6;
  param_1[2] = (int)((param_2 % 0x15180) / 0xe10);
  lVar5 = (param_2 % 0x15180) % 0xe10;
  iVar2 = (int)(lVar5 / 0x3c);
  param_1[1] = iVar2;
  *param_1 = (int)lVar5 + iVar2 * -0x3c;
  return param_1;
}


