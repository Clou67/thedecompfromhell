// sdk/libc/xfdnorm.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5e687c-0x5e6a0c
#include <stdlib.h>
#include "sdk/libc/xfdnorm.h"

// SDK libc.a(xfdnorm.o): _FDnorm  [fuzzy 1.000 match]
// 0x05e687c (0x104 bytes)
short FUN_005e687c(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  sVar5 = 1;
  uVar2 = *param_1;
  uVar7 = (ulonglong)uVar2 & 0x7f;
  uVar4 = (ushort)uVar7;
  *param_1 = uVar4;
  if ((uVar2 & 0x7f) == 0) {
    sVar5 = 1;
    uVar3 = param_1[1];
    if (uVar3 == 0) goto LAB_005e696c;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    sVar5 = -0xf;
    uVar7 = (ulonglong)*param_1;
  }
  if (uVar7 < 0x80) {
    puVar1 = param_1 + 1;
    uVar6 = (ulonglong)*puVar1;
    do {
      sVar5 = sVar5 + -1;
      *param_1 = (ushort)(uVar7 << 1) | (ushort)(uVar6 >> 0xf) & 1;
      uVar6 = (ulonglong)*puVar1 << 1;
      *puVar1 = (ushort)uVar6;
      uVar7 = (ulonglong)*param_1;
    } while (uVar7 < 0x80);
  }
  uVar4 = (ushort)uVar7;
  if (0xff < uVar7) {
    do {
      sVar5 = sVar5 + 1;
      param_1[1] = (ushort)(((ulonglong)param_1[1] << 0x20) >> 0x21) | (ushort)(uVar7 << 0xf);
      uVar7 = ((ulonglong)*param_1 << 0x20) >> 0x21;
      uVar4 = (ushort)uVar7;
      *param_1 = uVar4;
    } while (0xff < uVar7);
  }
  uVar4 = uVar4 & 0x7f;
  *param_1 = uVar4;
LAB_005e696c:
  *param_1 = uVar2 & 0x8000 | uVar4;
  return sVar5;
}


// 0x05e6980 (0x3c bytes)
void FUN_005e6980(void)

{
  if (*(undefined4 **)PTR_PTR_0071c7d0 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)PTR_PTR_0071c7d0)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e69c0 (0x3c bytes)
void FUN_005e69c0(void)

{
  int unaff_r2;
  
  if ((undefined4 *)**(int **)(unaff_r2 + -0x5b54) != (undefined4 *)0x0) {
    (**(code **)**(int **)(unaff_r2 + -0x5b54))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}


// 0x05e69fc (0x10 bytes)
void FUN_005e69fc(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


