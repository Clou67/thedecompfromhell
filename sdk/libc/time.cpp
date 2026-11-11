// sdk/libc/time.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cede8-0x5cee5c
#include "sdk/libc/time.h"

// SDK libc.a(time.o): time  [fuzzy 1.000 match]
// 0x05cede8 (0x74 bytes)
undefined8 FUN_005cede8(undefined8 *param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined8 local_30;
  GPiece<16> auStack_28;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = syscall_sys_time_get_current_time(&local_30,auStack_28);
  if (iVar1 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = local_30;
    }
  }
  else {
    local_30 = 0xffffffffffffffff;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0xffffffffffffffff;
    }
  }
  return local_30;
}


