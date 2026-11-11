// sdk/mUnk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x50ef38-0x50efcc
#include "sdk/mUnk2.h"

// 0x050ef38 (0x10 bytes)
void FUN_0050ef38(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}


// 0x050ef48 (0x3c bytes)
ulonglong FUN_0050ef48(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (ZEXT48(pcVar1 + (3 - (int)param_2)) << 0x20) >> 0x22;
  }
  return param_1 + 2 + uVar2 & 0xffffffff;
}


// 0x050ef84 (0x3c bytes)
ulonglong FUN_0050ef84(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (ZEXT48(pcVar1 + (3 - (int)param_2)) << 0x20) >> 0x22;
  }
  return param_1 + 2 + uVar2 & 0xffffffff;
}


// 0x050efc0 (0xc bytes)
int FUN_0050efc0(int param_1)

{
  return param_1 + 2;
}


