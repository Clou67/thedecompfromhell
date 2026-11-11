// sdk/libc/strcspn.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d5c2c-0x5d5c9c
#include "sdk/libc/strcspn.h"

// SDK libc.a(strcspn.o): strcspn  [fuzzy 1.000 match]
// 0x05d5c2c (0x70 bytes)
int FUN_005d5c2c(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  cVar1 = *param_1;
  iVar5 = 0;
  if (cVar1 != '\0') {
    cVar2 = *param_2;
    pcVar3 = param_2;
    pcVar4 = param_1;
    do {
      while (cVar2 != '\0') {
        if (cVar2 == cVar1) goto LAB_005d5c90;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
      cVar2 = *param_2;
      pcVar3 = param_2;
    } while (cVar1 != '\0');
LAB_005d5c90:
    iVar5 = (int)pcVar4 - (int)param_1;
  }
  return iVar5;
}


