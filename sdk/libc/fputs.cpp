// sdk/libc/fputs.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5d5a08-0x5d5c2c
#include <string.h>
#include "sdk/libc/fputs.h"
#include "sdk/libc/xfwprep.h"
#include "sdk/xUnk.h"

// SDK libc.a(fputs.o): fputs  [fuzzy 1.000 match]
// 0x05d5a08 (0x21c bytes)
undefined4 FUN_005d5a08(char *param_1,ushort *param_2)

{
  int iVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  char *pcVar3;
  size_t __n_00;
  
  FUN_005cbc38(param_2);
LAB_005d5a48:
  if (*param_1 != '\0') {
    do {
      iVar1 = 0;
      if ((*(uint *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) &&
         (iVar2 = FUN_005c9998(param_2), iVar2 < 0)) {
        FUN_005cbbbc(param_2);
        return 0xffffffff;
      }
      if ((*param_2 & 0x400) == 0) {
LAB_005d5b38:
        __n = strlen(param_1);
        __dest = *(void **)(param_2 + 8);
        __n_00 = *(int *)(param_2 + 0xc) - (int)__dest;
        if (__n <= __n_00) goto LAB_005d5ac4;
      }
      else {
        iVar1 = FUN_005c85b4(param_1,10);
        __n = (iVar1 - (int)param_1) + 1;
        if (iVar1 == 0) goto LAB_005d5b38;
        __dest = *(void **)(param_2 + 8);
        __n_00 = *(int *)(param_2 + 0xc) - (int)__dest;
        if (__n <= __n_00) goto LAB_005d5ac4;
      }
      pcVar3 = param_1 + __n_00;
      memcpy(__dest,param_1,__n_00);
      *(size_t *)(param_2 + 8) = *(int *)(param_2 + 8) + __n_00;
      param_1 = pcVar3;
      if (*pcVar3 == '\0') break;
    } while( true );
  }
  if (((*param_2 & 0x800) == 0) || (iVar1 = FUN_005c50cc(), iVar1 == 0)) {
    FUN_005cbbbc(param_2);
    return 0;
  }
  goto LAB_005d5af8;
LAB_005d5ac4:
  memcpy(__dest,param_1,__n);
  param_1 = param_1 + __n;
  *(size_t *)(param_2 + 8) = *(int *)(param_2 + 8) + __n;
  if ((iVar1 != 0) && (iVar1 = FUN_005c50cc(param_2), iVar1 != 0)) {
LAB_005d5af8:
    FUN_005cbbbc(param_2);
    return 0xffffffff;
  }
  goto LAB_005d5a48;
}


// 0x05d5c24 (0x8 bytes)
undefined * FUN_005d5c24(void)

{
  return PTR_PTR_0071c4e8;
}


