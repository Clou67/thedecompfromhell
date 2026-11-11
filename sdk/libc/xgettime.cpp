// sdk/libc/xgettime.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dc734-0x5dc84c
#include <string.h>
#include "sdk/libc/xgettime.h"

// SDK libc.a(xgettime.o): _Gettime  [fuzzy 1.000 match]
// 0x05dc734 (0x118 bytes)
char * FUN_005dc734(char *param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  int __c;
  
  cVar1 = *param_1;
  __c = 0;
  if (cVar1 != 0) {
    param_1 = param_1 + 1;
    __c = (int)cVar1;
  }
  while( true ) {
    pcVar2 = strchr(param_1,__c);
    if (pcVar2 == (char *)0x0) {
      sVar3 = strlen(param_1);
      pcVar2 = param_1 + sVar3;
    }
    if (param_2 < 1) break;
    param_2 = param_2 + -1;
    param_1 = pcVar2 + 1;
    if (*pcVar2 == '\0') {
      *param_3 = 0;
      return pcVar2;
    }
  }
  *param_3 = (int)pcVar2 - (int)param_1;
  return param_1;
}


