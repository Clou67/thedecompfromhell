// sdk/libc/vsprintf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cd52c-0x5cd5c4
#include <stdio.h>
#include <string.h>
#include "sdk/libc/vsprintf.h"
#include "sdk/libc/vfscanf.h"

// SDK libc.a(vsprintf.o): vsprintf  [fuzzy 1.000 match]
// 0x05cd52c (0x5c bytes)
int FUN_005cd52c(size_t param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  
  iVar1 = vsnprintf(PTR_PTR_0071c3e0,param_1,param_2,param_3);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + iVar1) = 0;
  }
  return iVar1;
}


// 0x05cd588 (0x3c bytes)
int FUN_005cd588(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy(param_1,param_2,param_3);
  return (int)pvVar1 + param_3;
}


