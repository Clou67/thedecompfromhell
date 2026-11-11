// sdk/libc/strspn.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d5c9c-0x5d5d10
#include "sdk/libc/strspn.h"

// SDK libc.a(strspn.o): strspn  [fuzzy 1.000 match]
// 0x05d5c9c (0x74 bytes)
int FUN_005d5c9c(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  
  cVar3 = *param_1;
  iVar6 = 0;
  if (cVar3 != '\0') {
    pcVar2 = param_1;
    cVar5 = *param_2;
    while (pcVar1 = param_2, cVar4 = *param_2, cVar5 != '\0') {
      while (cVar4 != cVar3) {
        pcVar1 = pcVar1 + 1;
        cVar4 = *pcVar1;
        if (cVar4 == '\0') goto LAB_005d5cf0;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
      cVar5 = cVar3;
    }
LAB_005d5cf0:
    iVar6 = (int)pcVar2 - (int)param_1;
  }
  return iVar6;
}


