// sdk/libc/xfofind.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8dcc-0x5c8e64
#include "sdk/libc/xfofind.h"
#include "sdk/libc/asctime.h"
#include "sdk/mUnk3.h"

// SDK libc.a(xfofind.o): _Fofind  [fuzzy 1.000 match]
// 0x05c8dcc (0x98 bytes)
undefined2 * FUN_005c8dcc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined2 *)FUN_005d5838(0x68);
  puVar2 = PTR_DAT_0071c290;
  if (puVar3 == (undefined2 *)0x0) {
    puVar4 = (undefined4 *)FUN_005d5904();
    puVar3 = (undefined2 *)0x0;
    *puVar4 = 0x80010004;
  }
  else {
    *(undefined4 *)(puVar3 + 0x1e) = 0;
    iVar1 = *(int *)puVar2;
    if (iVar1 == 0) {
      *(undefined2 **)puVar2 = puVar3;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    else {
      *(int *)(puVar3 + 0x1e) = iVar1;
      *(undefined2 **)puVar2 = puVar3;
      *(char *)(puVar3 + 1) = *(char *)(iVar1 + 2) + '\x01';
    }
    *puVar3 = 0x80;
  }
  return puVar3;
}


