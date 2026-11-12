// sdk/libc/xlv2mtx.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x5d0370-0x5d05f0
#include <stdlib.h>
#include "sdk/libc/xlv2mtx.h"
#include "sdk/sys.h"

// SDK libc.a(xlv2mtx.o): _Mtxunlock  [fuzzy 0.938 match]
// 0x05d0370 (0x44 bytes)
void FUN_005d0370(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    sys_lwmutex_unlock(param_1 + 4);
  }
  return;
}


// SDK libc.a(xlv2mtx.o): _Mtxlock  [fuzzy 0.950 match]
// 0x05d03b4 (0xa8 bytes)
void FUN_005d03b4(int *param_1)

{
  int iVar1;
  longlong local_30 [3];
  
  sys_ppu_thread_get_id(local_30);
  if (*param_1 != 0) {
    if (*(longlong *)(param_1 + 2) == local_30[0]) {
      *param_1 = *param_1 + 1;
      return;
    }
  }
  iVar1 = sys_lwmutex_lock(param_1 + 4,0);
  if (iVar1 == 0) {
    *(longlong *)(param_1 + 2) = local_30[0];
    *param_1 = *param_1 + 1;
  }
  return;
}


// 0x05d045c (0x2c bytes)
void FUN_005d045c(int param_1)

{
  sys_lwmutex_destroy(param_1 + 0x10);
  return;
}


// 0x05d0488 (0x28 bytes)
void FUN_005d0488(void)

{
  sys_lwmutex_destroy(PTR_DAT_0071c41c);
  return;
}


// SDK libc.a(xlv2mtx.o): _Mtxinit  [fuzzy 0.896 match]
// 0x05d04b0 (0x50 bytes)
void FUN_005d04b0(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c420;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = sys_lwmutex_create(param_1 + 4,puVar1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libc.a(xlv2mtx.o): _Once  [fuzzy 0.929 match]
// 0x05d0504 (0xb0 bytes)
void FUN_005d0504(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c41c;
  if (*param_1 != 0) {
    return;
  }
  iVar2 = sys_lwmutex_lock(PTR_DAT_0071c41c,0);
  if (iVar2 == 0) {
    if (*param_1 == 0) {
      (*(code *)*param_2)();
      *param_1 = 2;
    }
    iVar2 = sys_lwmutex_unlock(puVar1);
    if (iVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05d05b8 (0x38 bytes)
void FUN_005d05b8(u32 *param_1,u32 *param_2)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_create(PTR_DAT_0071c41c,PTR_DAT_0071c420);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


