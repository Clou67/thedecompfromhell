// sdk/libc/fs_init.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5cffa8-0x5d0140
#include "sdk/libc/fs_init.h"
#include "sdk/xUnk.h"

// SDK libc.a(fs_init.o): _fs_initialize  [fuzzy 1.000 match]
// 0x05cffa8 (0x64 bytes)
void _fs_initialize(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_0071c418;
  lVar3 = 0xfd;
  *(undefined4 *)(PTR_DAT_0071c418 + 4) = 1;
  *(undefined4 *)(puVar1 + 8) = 2;
  *(undefined4 *)(puVar1 + 0x408) = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 0x400) = 0;
  *(undefined4 *)(puVar1 + 0x404) = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(puVar1 + iVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar2 + 0x40c) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 4;
  } while (lVar3 != 0);
  return;
}


// 0x05d000c (0x4 bytes)
void FUN_005d000c(void)

{
  return;
}


// SDK libc.a(fs_init.o): _put_fd  [fuzzy 1.000 match]
// 0x05d0010 (0x60 bytes)
void FUN_005d0010(uint param_1)

{
  FUN_005cbbec(4);
  if (param_1 < 0x100) {
    *(undefined4 *)(PTR_DAT_0071c418 + param_1 * 4) = 0xffffffff;
  }
  FUN_005cbb70(4);
  return;
}


// SDK libc.a(fs_init.o): _get_fd  [fuzzy 1.000 match]
// 0x05d0070 (0xd0 bytes)
int FUN_005d0070(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_005cbbec(4);
  puVar1 = PTR_DAT_0071c418;
  iVar3 = 0;
  lVar4 = 0x100;
  piVar2 = (int *)PTR_DAT_0071c418;
  do {
    if (*piVar2 == -1) {
      *(undefined4 *)(PTR_DAT_0071c418 + iVar3 * 4) = param_1;
      *(undefined4 *)(puVar1 + iVar3 * 4 + 0x400) = param_2;
      FUN_005cbb70(4);
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar4 != 0);
  FUN_005cbb70(4);
  return -1;
}


