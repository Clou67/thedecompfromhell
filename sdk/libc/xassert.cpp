// sdk/libc/xassert.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5cee5c-0x5cef90
#include <stdlib.h>
#include <string.h>
#include "sdk/libc/xassert.h"

// SDK libc.a(xassert.o): _Nonfatal_Assert  [fuzzy 1.000 match]
// 0x05cee5c (0xfc bytes)
// strings: 0067ec98: 'In function ' | 0067eca8: ' -- ' (raw) | 0067ecb0: ' -- assertion failed\n'

void FUN_005cee5c(char *param_1,char *param_2)

{
  size_t sVar1;
  GPiece<24> auStack_30;
  
  FUN_005c50cc(0);
  if (param_2 != (char *)0x0) {
    syscall_sys_tty_write(1,PTR_s_In_function_0071c404,0xc,auStack_30);
    sVar1 = strlen(param_2);
    syscall_sys_tty_write(1,param_2,sVar1,auStack_30);
    syscall_sys_tty_write(1,PTR_DAT_0071c408,4,auStack_30);
  }
  sVar1 = strlen(param_1);
  syscall_sys_tty_write(1,param_1,sVar1,auStack_30);
  syscall_sys_tty_write(1,PTR_s____assertion_failed_0071c40c,0x15,auStack_30);
  FUN_005c50cc(0);
  return;
}


// 0x05cef58 (0x24 bytes)
void FUN_005cef58(void)

{
  undefined8 in_LR;
  
  FUN_005cee5c();
  trapWord(0x1f,in_LR,in_LR);
  return;
}


// 0x05cef7c (0x14 bytes)
void FUN_005cef7c(void)

{
  FUN_005cee5c();
                    /* WARNING: Subroutine does not return */
  abort();
}


