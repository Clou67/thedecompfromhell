// sdk/libc/xputstr.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d9b44-0x5d9d68
#include <string.h>
#include "sdk/libc/xputstr.h"
#include "game/hero.h"
#include "sdk/libc/xputtxt.h"
#include "sdk/libc/xwctomb.h"
#include "sdk/mUnk3.h"

// SDK libc.a(xputstr.o): _Putstr  [fuzzy 1.000 match]
// 0x05d9b44 (0x224 bytes)
int FUN_005d9b44(int param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  size_t __n;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  GPiece<4> auStack_b0;
  GPiece<12> local_ac;
  GPiece<64> auStack_a0;
  
  iVar7 = *(int *)(param_1 + 0x44);
  if (iVar7 < 0) {
    iVar7 = 0x7fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (((*(ushort *)(param_1 + 0x50) & 4) == 0) && (uVar6 = iVar3 + 3, 0x40 < iVar3 + 3U)) {
    puVar4 = (undefined1 *)FUN_005d5838(iVar3 + 3);
    if (puVar4 == (undefined1 *)0x0) {
      return -1;
    }
  }
  else {
    puVar4 = &stack0x00000000 + -0xa0;
    uVar6 = 0x40;
  }
  if (0 < iVar7) {
    iVar3 = 0;
    while( true ) {
      __n = FUN_005cc418(&stack0x00000000 + -0xb0,*param_2,&stack0x00000000 + -0xac);
      bVar1 = __n == 0;
      if (((int)__n < 0) || ((*param_2 == 0 && (__n = __n - 1, bVar1)))) {
        iVar3 = -1;
        goto LAB_005d9cb0;
      }
      bVar1 = iVar7 < (int)__n;
      iVar7 = iVar7 - __n;
      if (bVar1) break;
      iVar5 = *(int *)(param_1 + 0x2c);
      if (uVar6 < __n + iVar5) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        iVar3 = FUN_005d9d68(param_1,puVar4);
        iVar5 = 0;
        if (iVar3 < 0) goto LAB_005d9cb0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      memcpy(puVar4 + iVar5,&stack0x00000000 + -0xb0,__n);
      sVar2 = *param_2;
      param_2 = param_2 + 1;
      *(size_t *)(param_1 + 0x2c) = __n + *(int *)(param_1 + 0x2c);
      if ((sVar2 == 0) || (iVar7 < 1)) break;
    }
    if (iVar3 != 0) goto LAB_005d9cb0;
  }
  iVar3 = FUN_005d9d68(param_1,puVar4);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_005d9cb0:
  if (puVar4 != auStack_a0) {
    FUN_005d580c(puVar4);
  }
  return iVar3;
}


