// sdk/libc/localtim.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c5900-0x5c5984
#include "sdk/libc/localtim.h"
#include "sdk/libc/xttotm.h"

// SDK libc.a(localtim.o): localtime  [fuzzy 1.000 match]
// 0x05c5900 (0x84 bytes)
undefined4 FUN_005c5900(longlong *param_1)

{
  undefined4 uVar1;
  int local_30;
  uint local_2c [3];
  
  syscall_sys_time_get_timezone(&local_30,local_2c);
  uVar1 = FUN_005cbe4c(0,(longlong)(local_30 * 0x3c) + *param_1,
                       ((int)local_2c[0] >> 0x1f) - ((int)local_2c[0] >> 0x1f ^ local_2c[0]) >> 0x1f
                      );
  return uVar1;
}


