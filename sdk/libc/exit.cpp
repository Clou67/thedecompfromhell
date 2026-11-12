// sdk/libc/exit.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c4ec8-0x5c4f10
#include <stdlib.h>
#include "sdk/libc/exit.h"
#include "game/crt0.h"
#include "idol/sUnk.h"
#include "sdk/libc/abort.h"
#include "sdk/libc/fclose.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/libc/vsnprint.h"
#include "sdk/libc/xfoprep.h"
#include "sdk/libc/xlv2mtx.h"
#include "sdk/mUnk3.h"
#include "sdk/xUnk.h"

// SDK libc.a(exit.o): exit  [fuzzy 1.000 match]
// 0x05c4ec8 (0x48 bytes)
void exit(int __status)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  syscall_syscall_988(1,0);
  ExitToSystem();
  FUN_005c49c8();
  FUN_0064ed80();
  puVar2 = (ushort *)FUN_005c8b94(__status);
  if (((*puVar2 & 3) != 0) && (-1 < (short)puVar2[2])) {
    FUN_005c50cc(puVar2);
    FUN_005cbbec(2);
    uVar1 = *(undefined4 *)(puVar2 + 0x22);
    FUN_005d03b4(uVar1);
    if ((*puVar2 & 0x40) != 0) {
      FUN_005d580c(*(undefined4 *)(puVar2 + 4));
    }
    puVar2[4] = 0;
    puVar2[5] = 0;
    FUN_005cf554(puVar2[2]);
    FUN_005c8e64(puVar2);
    FUN_005d0370(uVar1);
    FUN_005d045c(uVar1);
    if (((puVar2 != (ushort *)PTR_DAT_0071c258) && (puVar2 != (ushort *)PTR_DAT_0071c25c)) &&
       (puVar2 != (ushort *)PTR_DAT_0071c260)) {
      FUN_005d580c(uVar1);
    }
    FUN_005cbb70(2);
  }
  return;
}


