// sdk/libc/strstr.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8700-0x5c87ac
#include <string.h>
#include "sdk/libc/strstr.h"

// SDK libc.a(strstr.o): strstr  [fuzzy 1.000 match]
// 0x05c8700 (0xac bytes)
char * FUN_005c8700(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    while (param_1 = strchr(param_1,(int)cVar1), pcVar3 = param_2, pcVar2 = param_1,
          param_1 != (char *)0x0) {
      do {
        cVar1 = pcVar3[1];
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '\0') {
          return param_1;
        }
        pcVar3 = pcVar3 + 1;
      } while (*pcVar2 == cVar1);
      param_1 = param_1 + 1;
      cVar1 = *param_2;
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


