// game/crt0.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x14b7c-0x14fc8
#include <stdlib.h>
#include "game/crt0.h"
#include "game/boot.h"
#include "idol/sUnk.h"
#include "sdk/libc/abort.h"
#include "sdk/libc/fclose.h"
#include "sdk/libc/fs_init.h"
#include "sdk/libc/xlv2mtx.h"
#include "sdk/libc/xsyslock.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/mUnk3.h"
#include "sdk/sys.h"

// 0x0014b7c (0x10 bytes)
undefined4 GetArgc(void)

{
  return *(undefined4 *)PTR_DAT_0071a328;
}


// 0x0014b8c (0xc bytes)
undefined4 GetArgv(void)

{
  return *(undefined4 *)(PTR_DAT_0071a328 + 4);
}


// 0x0014b98 (0x28 bytes)
void idol::ExitToSystem(void)

{
  sys_prx_exitspawn_with_level(0);
  return;
}


// 0x0014bc0 (0x4c bytes)
void _libc_cleanup(void)

{
  FUN_005c505c();
  FUN_005d000c();
  FUN_005cbd60();
  FUN_005d0488();
  FUN_005d5868();
  return;
}


// 0x0014c0c (0x38 bytes)
void crt0_exit(void)

{
  idol::ExitToSystem();
  FUN_005c49c8();
  FUN_0064ed80();
  _libc_cleanup();
  return;
}


// 0x0014c44 (0x38 bytes)
void _exit(int status)

{
  _libc_cleanup();
  sys_process_exit(status);
  return;
}


// 0x0014c7c (0x1d4 bytes)
void entry(ulonglong param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4,
                undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  int __status;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 in_r12;
  undefined4 *puVar4;
  int iStack_74;
  
  *DAT_0071a32c = in_r12;
  sys_initialize_tls(param_5,param_6,param_7,param_8);
  uVar2 = 0;
  puVar3 = param_2 + 1;
  puVar4 = param_2;
  do {
    uVar2 = uVar2 + 1;
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 1;
  } while (uVar2 <= param_1);
  puVar3 = *(undefined4 **)(iStack_74 + -0x8000);
  uVar2 = 0;
  *puVar3 = (int)param_1;
  puVar3[1] = param_2;
  puVar3 = param_3 + 1;
  puVar4 = param_3;
  do {
    uVar2 = uVar2 + 1;
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 1;
  } while (uVar2 <= param_4);
  FUN_005d588c();
  FUN_005d05b8(*(undefined4 *)(iStack_74 + -0x7ff8),*(undefined4 *)(iStack_74 + -0x7ff4));
  FUN_005cbc68();
  FUN_005cffa8();
  uVar1 = sys_time_get_system_time
                    (*(undefined4 *)(iStack_74 + -0x7ff0),*(undefined4 *)(iStack_74 + -0x7fec));
  **(undefined8 **)(iStack_74 + -0x7fe8) = uVar1;
  _init();
  if (**(int **)(iStack_74 + -0x7fe4) != 0) {
    sys_prx_register_library();
  }
  if (**(int **)(iStack_74 + -0x7fe0) != 0) {
    sys_prx_register_library();
  }
  if (**(int **)(iStack_74 + -0x7fdc) != 0) {
    sys_prx_register_library();
  }
  _sys_process_atexitspawn(*(undefined4 *)(iStack_74 + -0x7fd8));
  _sys_process_at_Exitspawn(*(undefined4 *)(iStack_74 + -0x7fd4));
  __status = boot((int)param_1,param_2,param_3);
  exit(__status);
  return;
}


// 0x0014e50 (0x9c bytes)
void __do_global_dtors_aux(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071a35c;
  puVar3 = PTR_DAT_0071a358;
  if (*PTR_DAT_0071a358 == '\0') {
    while( true ) {
      puVar1 = *(undefined4 **)puVar4;
      puVar2 = (undefined4 *)*puVar1;
      if (puVar2 == (undefined4 *)0x0) break;
      *(undefined4 **)puVar4 = puVar1 + 1;
      (*(code *)*puVar2)();
    }
    if (PTR_PTR_0071a360 != (undefined *)0x0) {
      FUN_005e21b8(DAT_0071a364);
    }
    *puVar3 = 1;
  }
  return;
}


// 0x0014eec (0x70 bytes)
void frame_dummy(void)

{
  if (PTR_PTR_0071a368 != (undefined *)0x0) {
    FUN_005e1fc0(DAT_0071a364,PTR_DAT_0071a36c);
  }
  if (*(int *)PTR_DAT_0071a370 != 0) {
    if (DAT_0071a374 != (undefined4 *)0x0) {
      (*(code *)*DAT_0071a374)();
    }
  }
  return;
}


// 0x0014f5c (0x6c bytes)
void __do_global_ctors_aux(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(PTR_DAT_0071a378 + -4);
  puVar1 = (undefined4 *)*puVar2;
  while (puVar1 != (undefined4 *)0xffffffff) {
    puVar2 = puVar2 + -1;
    (*(code *)*puVar1)();
    puVar1 = (undefined4 *)*puVar2;
  }
  return;
}


