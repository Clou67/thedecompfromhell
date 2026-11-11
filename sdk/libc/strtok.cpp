// sdk/libc/strtok.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c87ac-0x5c8890
#include "sdk/libc/strtok.h"

// SDK libc.a(strtok.o): strtok  [fuzzy 1.000 match]
// 0x05c87ac (0xe4 bytes)
char * FUN_005c87ac(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int in_r13;
  char *pcVar4;
  
  if (param_1 == 0) {
    param_1 = *(int *)(in_r13 + -0x6ffc);
  }
  iVar2 = FUN_005d5c9c(param_1,param_2);
  pcVar4 = (char *)(param_1 + iVar2);
  if (*pcVar4 != '\0') {
    iVar2 = FUN_005d5c2c(pcVar4,param_2);
    pcVar1 = pcVar4 + iVar2;
    pcVar3 = pcVar1;
    if (*pcVar1 != '\0') {
      pcVar3 = pcVar1 + 1;
      *pcVar1 = '\0';
    }
    *(char **)(in_r13 + -0x6ffc) = pcVar3;
    return pcVar4;
  }
  *(undefined **)(in_r13 + -0x6ffc) = PTR_DAT_0071c280;
  return (char *)0x0;
}


