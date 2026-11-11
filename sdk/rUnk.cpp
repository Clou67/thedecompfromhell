// sdk/rUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8420-0x5c8440
#include "sdk/rUnk.h"

// 0x05c8420 (0x20 bytes)
void seedRand(undefined4 number)

{
  int rand_register_r13;
  
  *(undefined4 *)(rand_register_r13 + -0x7000) = number;
  *(undefined1 *)(rand_register_r13 + -0x6ff8) = 0;
  return;
}


