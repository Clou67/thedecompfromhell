// sdk/libc/abort.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x5c4800-0x5c4b94
#include <stdlib.h>
#include "sdk/libc/abort.h"
#include "sdk/libc/atexit.h"
#include "sdk/sys.h"
#include "sdk/xUnk.h"

// SDK libc.a(abort.o): hex2str  [fuzzy 1.000 match]
// 0x05c4800 (0x40 bytes)
int FUN_005c4800(ulonglong param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0xf;
  lVar6 = 0x10;
  do {
    uVar3 = param_1 & 0xf;
    pcVar2 = (char *)(param_2 + iVar5);
    param_1 = param_1 >> 4;
    iVar5 = iVar5 + -1;
    cVar1 = (char)uVar3;
    cVar4 = cVar1 + '0';
    if (9 < uVar3) {
      cVar4 = cVar1 + 'W';
    }
    *pcVar2 = cVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_2;
}


// SDK libc.a(abort.o): abort  [fuzzy 0.986 match]
// 0x05c4840 (0x148 bytes)
// strings: 0067e7b8: 'abort() is called from 0x' | 0067e7e0: '                  from 0x' | 0067e800: '\n\nContinue... (Lv-2 is still running.)\n'

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005c48a4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int abort(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong in_stack_00000000;
  undefined8 in_stack_00000010;
  GPiece<8> auStack_50;
  GPiece<24> auStack_48;
  
  syscall_sys_tty_write(4,0);
  syscall_sys_tty_write(1,PTR_s_abort___is_called_from_0x_0071c23c,0x19,auStack_50);
  uVar3 = FUN_005c4800(in_stack_00000010,auStack_48);
  syscall_sys_tty_write(1,uVar3,0x10,auStack_50);
  puVar1 = PTR_DAT_0071c240;
  syscall_sys_tty_write(1,PTR_DAT_0071c240,1,auStack_50);
  puVar2 = PTR_s_from_0x_0071c244;
  if (in_stack_00000000 != 0) {
    do {
      syscall_sys_tty_write(1,puVar2,0x19,auStack_50);
      uVar3 = FUN_005c4800(((longlong *)in_stack_00000000)[2],auStack_48);
      syscall_sys_tty_write(1,uVar3,0x10,auStack_50);
      syscall_sys_tty_write(1,puVar1,1,auStack_50);
      in_stack_00000000 = *(longlong *)in_stack_00000000;
    } while (in_stack_00000000 != 0);
  }
  syscall_sys_tty_write(1,PTR_s_Continue_____Lv_2_is_still_runni_0071c248,0x27,auStack_50);
  sys_process_exit(1);
  uVar4 = 1;
  exit(1);
  return ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f);
}


// 0x05c4988 (0x14 bytes)
int FUN_005c4988(uint param_1)

{
  return ((int)param_1 >> 0x1f ^ param_1) - ((int)param_1 >> 0x1f);
}


// 0x05c499c (0x2c bytes)
uint * FUN_005c499c(uint *param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  
  puVar1 = param_1;
  if (param_3 != 0) {
    param_2 = param_2 | 1;
    puVar1 = param_1 + 1;
    *param_1 = (uint)param_3;
  }
  *puVar1 = param_2;
  return puVar1 + 1;
}


// 0x05c49c8 (0x1cc bytes)
void FUN_005c49c8(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_005cbbec(1);
  puVar3 = PTR_DAT_0071c24c;
  if (*(int *)PTR_DAT_0071c24c != 0) {
    *(int *)(PTR_DAT_0071c24c + 4) = *(int *)(PTR_DAT_0071c24c + 4) + -4;
    while (puVar1 = *(uint **)(puVar3 + 4), *(uint **)puVar3 <= puVar1) {
      while( true ) {
        puVar2 = (undefined4 *)*puVar1;
        if (((uint)puVar2 & 1) != 0) break;
        (*(code *)*puVar2)(0);
        *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + -4;
        puVar1 = *(uint **)(puVar3 + 4);
        if (puVar1 < *(uint **)puVar3) goto LAB_005c4a88;
      }
      (**(code **)((uint)puVar2 & 0xfffffffe))(puVar1[-1]);
      *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + -8;
    }
  }
LAB_005c4a88:
  puVar4 = PTR_DAT_0071c254;
  puVar3 = PTR_PTR_0071c250;
  *(int *)PTR_PTR_0071c250 = *(int *)PTR_PTR_0071c250 + -4;
  do {
    puVar1 = *(uint **)puVar3;
    while( true ) {
      if (puVar1 < puVar4) {
        FUN_005cbb70(1);
        return;
      }
      puVar2 = (undefined4 *)*puVar1;
      if (((uint)puVar2 & 1) != 0) break;
      (*(code *)*puVar2)(0);
      *(int *)puVar3 = *(int *)puVar3 + -4;
      puVar1 = *(uint **)puVar3;
    }
    (**(code **)((uint)puVar2 & 0xfffffffe))(puVar1[-1]);
    *(int *)puVar3 = *(int *)puVar3 + -8;
  } while( true );
}


