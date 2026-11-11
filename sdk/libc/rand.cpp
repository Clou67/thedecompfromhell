// sdk/libc/rand.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8318-0x5c8420
#include <stdlib.h>
#include "sdk/libc/rand.h"

// SDK libc.a(rand.o): rand  [fuzzy 1.000 match]
// 0x05c8318 (0x108 bytes)
int rand(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int in_r13;
  longlong lVar7;
  
  if (*(char *)(in_r13 + -0x6ff8) == '\0') {
    lVar7 = 8;
    iVar3 = *(int *)(in_r13 + -0x7000);
    do {
      iVar3 = iVar3 * 0x19660d + 0x3c6ef35f;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(int *)(in_r13 + -0x7000) = iVar3;
    piVar4 = (int *)(in_r13 + -0x6ff0);
    do {
      piVar5 = piVar4 + 1;
      iVar3 = iVar3 * 0x19660d + 0x3c6ef35f;
      *piVar4 = iVar3;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(in_r13 + -0x6f70));
    *(undefined1 *)(in_r13 + -0x6ff8) = 1;
    *(int *)(in_r13 + -0x7000) = iVar3;
    *(undefined4 *)(in_r13 + -0x6ff4) = *(undefined4 *)(in_r13 + -0x6f74);
  }
  puVar2 = (uint *)((*(uint *)(in_r13 + -0x6ff4) & 0x1f) * 4 + in_r13 + -0x6ff0);
  uVar6 = *(uint *)(in_r13 + -0x7000) * 0x19660d + 0x3c6ef35f;
  *(uint *)(in_r13 + -0x7000) = uVar6;
  uVar1 = *puVar2;
  *(uint *)(in_r13 + -0x6ff4) = uVar1;
  *puVar2 = uVar6;
  return uVar1 & 0x3fffffff;
}


