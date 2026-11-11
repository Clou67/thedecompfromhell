// sdk/libc/gmtime.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c58b0-0x5c5900
#include "sdk/libc/gmtime.h"
#include "sdk/libc/xttotm.h"

// SDK libc.a(gmtime.o): gmtime  [fuzzy 1.000 match]
// 0x05c58b0 (0x50 bytes)
undefined4 FUN_005c58b0(undefined8 *param_1)

{
  undefined4 uVar1;
  GPiece<4> auStack_30;
  GPiece<20> auStack_2c;
  
  syscall_sys_time_get_timezone(auStack_30,auStack_2c);
  uVar1 = FUN_005cbe4c(0,*param_1,0);
  return uVar1;
}


