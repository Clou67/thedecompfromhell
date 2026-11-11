// sdk/libc/asctime.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5d58bc-0x5d5914
#include "sdk/libc/asctime.h"
#include "sdk/libc/xstrftim.h"

// SDK libc.a(asctime.o): asctime  [fuzzy 1.000 match]
// 0x05d58bc (0x48 bytes)
ulonglong FUN_005d58bc(undefined8 param_1)

{
  longlong in_r13;
  
  FUN_005daab0(in_r13 + -0x6f30,0x1a,PTR_DAT_0071c4e0,param_1,PTR_PTR_0071c4e4);
  return in_r13 - 0x6f30U & 0xffffffff;
}


// 0x05d5904 (0x10 bytes)
int FUN_005d5904(void)

{
  int in_r13;
  
  return in_r13 + -0x6f10;
}


