// sdk/libc/fs_posix_api.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 24 functions, 0x5cef94-0x5cffa8
#include <string.h>
#include "sdk/libc/fs_posix_api.h"
#include "sdk/libc/asctime.h"
#include "sdk/mUnk3.h"

// SDK libc.a(fs_posix_api.o): copy_stat  [fuzzy 1.000 match]
// 0x05cef94 (0x8c bytes)
void FUN_005cef94(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_2[4] = param_1[1];
  uVar1 = param_1[2];
  param_2[0x11] = 0;
  param_2[5] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  uVar1 = *param_1;
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 3);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 5);
  uVar2 = *(undefined8 *)(param_1 + 7);
  param_2[2] = uVar1;
  *(undefined8 *)(param_2 + 0xe) = uVar2;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 9);
  param_2[0x10] = param_1[0xc];
  return;
}


// 0x05cf020 (0x54 bytes)
undefined4 FUN_005cf020(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_chmod();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// SDK libc.a(fs_posix_api.o): utime  [fuzzy 1.000 match]
// 0x05cf074 (0x94 bytes)
undefined4 FUN_005cf074(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  GPiece<24> local_20;
  
  if (param_2 == 0) {
    puVar3 = (undefined4 *)FUN_005d5904(param_1,local_20);
    uVar4 = 0xffffffff;
    *puVar3 = 0x8001000d;
  }
  else {
    iVar1 = syscall_sys_fs_utime();
    uVar4 = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005d5904();
      uVar4 = 0xffffffff;
      *piVar2 = iVar1;
    }
  }
  return uVar4;
}


// 0x05cf108 (0x54 bytes)
undefined4 FUN_005cf108(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_mkdir();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x05cf15c (0x54 bytes)
undefined4 FUN_005cf15c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_rmdir();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x05cf1b0 (0x7c bytes)
undefined4 FUN_005cf1b0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  GPiece<72> auStack_60;
  
  iVar2 = syscall_sys_fs_stat(param_1,auStack_60);
  if (iVar2 == 0) {
    FUN_005cef94();
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_005d5904(auStack_60,param_2);
    uVar1 = 0xffffffff;
    *piVar3 = iVar2;
  }
  return uVar1;
}


// 0x05cf22c (0x7c bytes)
undefined4 FUN_005cf22c(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  GPiece<72> auStack_60;
  
  iVar2 = syscall_sys_fs_fstat(param_1,auStack_60);
  if (iVar2 == 0) {
    FUN_005cef94();
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_005d5904(auStack_60,param_2);
    uVar1 = 0xffffffff;
    *piVar3 = iVar2;
  }
  return uVar1;
}


// 0x05cf2a8 (0x54 bytes)
undefined4 FUN_005cf2a8(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_truncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x05cf2fc (0x54 bytes)
undefined4 FUN_005cf2fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_ftruncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// SDK libc.a(fs_posix_api.o): fsync  [fuzzy 1.000 match]
// 0x05cf350 (0x80 bytes)
undefined4 FUN_005cf350(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_1 < 3) {
    puVar2 = (undefined4 *)FUN_005d5904(param_1);
    uVar4 = 0xffffffff;
    *puVar2 = 0x8001002a;
  }
  else {
    iVar1 = syscall_sys_fs_fsync();
    uVar4 = 0;
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_005d5904();
      uVar4 = 0xffffffff;
      *piVar3 = iVar1;
    }
  }
  return uVar4;
}


// 0x05cf3d0 (0x54 bytes)
undefined4 FUN_005cf3d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_rename();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x05cf424 (0x54 bytes)
undefined4 FUN_005cf424(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_link();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x05cf478 (0x54 bytes)
undefined4 FUN_005cf478(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_unlink();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// SDK libc.a(fs_posix_api.o): lseek64  [fuzzy 1.000 match]
// 0x05cf4cc (0x88 bytes)
undefined8 FUN_005cf4cc(uint param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 local_20 [3];
  
  if (param_1 < 3) {
    puVar2 = (undefined4 *)FUN_005d5904(param_1,param_2,param_3,local_20);
    local_20[0] = 0xffffffffffffffff;
    *puVar2 = 0x8001002a;
  }
  else {
    iVar1 = syscall_sys_fs_lseek();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_005d5904();
      local_20[0] = 0xffffffffffffffff;
      *piVar3 = iVar1;
    }
  }
  return local_20[0];
}


// SDK libc.a(fs_posix_api.o): close  [fuzzy 1.000 match]
// 0x05cf554 (0x64 bytes)
undefined4 FUN_005cf554(uint param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((2 < param_1) && (iVar1 = syscall_sys_fs_close(param_1), iVar1 != 0)) {
    piVar2 = (int *)FUN_005d5904();
    *piVar2 = iVar1;
    return 0xffffffff;
  }
  return 0;
}


// SDK libc.a(fs_posix_api.o): open  [fuzzy 1.000 match]
// 0x05cf5b8 (0x98 bytes)
undefined4 FUN_005cf5b8(undefined4 param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uStack00000040;
  undefined4 local_20 [6];
  
  uStack00000040.piece<4,4>() = 0;
  if ((param_2 & 0x40) != 0) {
    uStack00000040.piece<4,4>() = (undefined4)param_3;
  }
  uVar1 = uStack00000040.piece<4,4>();
  uStack00000040 = param_3;
  iVar2 = syscall_sys_fs_open(param_1,param_2,local_20,uVar1,0,0);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_005d5904();
    local_20[0] = 0xffffffff;
    *piVar3 = iVar2;
  }
  return local_20[0];
}


// SDK libc.a(fs_posix_api.o): readdir  [fuzzy 1.000 match]
// 0x05cf650 (0x17c bytes)
undefined4 * FUN_005cf650(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  longlong local_130;
  GPiece<2> local_128;
  char acStack_126 [270];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == (int *)0x0) {
    puVar3 = (undefined4 *)FUN_005d5904();
    *puVar3 = 0x8001000d;
  }
  else {
    syscall();
    if (param_1[4] == 0) {
      if (param_1[2] < param_1[3]) {
        iVar1 = *param_1;
        syscall();
        if (iVar1 == 0) {
          if (local_130 != 0) {
            puVar3 = (undefined4 *)(param_1[2] * 0x10c + param_1[1]);
            puVar3[1] = 0;
            *(undefined2 *)(puVar3 + 2) = 0;
            *puVar3 = 0;
            *(undefined1 *)((int)puVar3 + 10) = local_128[0];
            strcpy((char *)((int)puVar3 + 0xb),acStack_126);
            param_1[2] = param_1[2] + 1;
            syscall();
            return puVar3;
          }
        }
        else {
          piVar2 = (int *)FUN_005d5904(iVar1,local_128,&local_130);
          *piVar2 = iVar1;
        }
      }
      syscall();
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)FUN_005d5904(param_1[4],0);
    *puVar3 = 0x8001002a;
  }
  return (undefined4 *)0x0;
}


// SDK libc.a(fs_posix_api.o): closedir  [fuzzy 1.000 match]
// 0x05cf7cc (0x108 bytes)
undefined4 FUN_005cf7cc(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005d5904(0,0);
    uVar4 = 0xffffffff;
    *puVar3 = 0x8001000d;
  }
  else {
    iVar1 = syscall_sys_mutex_lock(param_1[4]);
    if (iVar1 == 0) {
      iVar1 = syscall_sys_mutex_lock(*param_1);
      if (iVar1 == 0) {
        syscall_sys_mutex_lock(param_1[4]);
        syscall_sys_mutex_lock(param_1[4]);
        FUN_005d580c(param_1[1]);
        FUN_005d580c(param_1);
        uVar4 = 0;
      }
      else {
        piVar2 = (int *)FUN_005d5904();
        *piVar2 = iVar1;
        syscall_sys_mutex_lock(param_1[4]);
        uVar4 = 0xffffffff;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_005d5904();
      uVar4 = 0xffffffff;
      *puVar3 = 0x8001002a;
    }
  }
  return uVar4;
}


// SDK libc.a(fs_posix_api.o): opendir  [fuzzy 1.000 match]
// 0x05cf8d4 (0x23c bytes)
undefined4 * FUN_005cf8d4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  GPiece<40> local_160;
  GPiece<272> auStack_138;
  
  iVar1 = syscall_sys_fs_opendir(param_1,&local_16c);
  if (iVar1 == 0) {
    iVar1 = syscall_sys_fs_opendir(local_16c,auStack_138,&local_168);
    if (iVar1 == 0) {
      iVar4 = 0;
      if (local_168 == 0) {
        iVar4 = 0;
      }
      else {
        do {
          iVar1 = syscall_sys_fs_opendir(local_16c,auStack_138,&local_168);
          iVar4 = iVar4 + 1;
          if (iVar1 != 0) goto LAB_005cf984;
        } while (local_168 != 0);
      }
      syscall_sys_fs_opendir(local_16c);
      iVar1 = syscall_sys_fs_opendir(param_1,&local_170);
      if (iVar1 == 0) {
        iVar1 = FUN_005d5838(iVar4 * 0x10c);
        puVar3 = (undefined4 *)FUN_005d5838(0x14);
        if (iVar1 == 0) {
          if (puVar3 != (undefined4 *)0x0) {
            FUN_005d580c(puVar3);
          }
        }
        else {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = local_170;
            puVar3[1] = iVar1;
            puVar3[2] = 0;
            puVar3[3] = iVar4;
            syscall_sys_fs_opendir(puVar3 + 4,local_160);
            return puVar3;
          }
          FUN_005d580c(iVar1);
        }
        syscall_sys_fs_opendir(local_170);
        puVar3 = (undefined4 *)FUN_005d5904();
        *puVar3 = 0x80010004;
        return (undefined4 *)0x0;
      }
    }
    else {
LAB_005cf984:
      syscall_sys_fs_opendir(local_16c);
    }
  }
  piVar2 = (int *)FUN_005d5904();
  *piVar2 = iVar1;
  return (undefined4 *)0x0;
}


// SDK libc.a(fs_posix_api.o): lseek  [fuzzy 1.000 match]
// 0x05cfb10 (0x8c bytes)
undefined4 FUN_005cfb10(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  GPiece<4> auStack_20;
  undefined4 local_1c;
  
  if (param_1 < 3) {
    puVar2 = (undefined4 *)FUN_005d5904(param_1,param_2,param_3,auStack_20);
    local_1c = 0xffffffff;
    *puVar2 = 0x8001002a;
  }
  else {
    iVar1 = syscall_sys_fs_lseek();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_005d5904();
      local_1c = 0xffffffff;
      *piVar3 = iVar1;
    }
  }
  return local_1c;
}


// 0x05cfb9c (0x54 bytes)
undefined4 FUN_005cfb9c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_truncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x05cfbf0 (0x54 bytes)
undefined4 FUN_005cfbf0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall_sys_fs_ftruncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// SDK libc.a(fs_posix_api.o): read  [fuzzy 1.000 match]
// 0x05cfc44 (0x228 bytes)
// strings: 0067ecc8: 'read: reading from stdout or stderr (fd 1 & 2) not allowed\n'

int FUN_005cfc44(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  char local_40 [4];
  GPiece<4> auStack_3c;
  GPiece<4> auStack_38;
  int local_34;
  
  puVar1 = PTR_s_read__reading_from_stdout_or_std_0071c410;
  if (param_1 == 0) {
    if (param_2 == 0) {
      puVar5 = (undefined4 *)FUN_005d5904();
      local_34 = -1;
      *puVar5 = 0x8001000d;
    }
    else {
      local_34 = 0;
      if (0 < (int)param_3) {
        iVar2 = syscall_sys_tty_write(0,local_40,1,auStack_3c);
        uVar6 = (ulonglong)param_3;
        while( true ) {
          if (iVar2 != 0) {
            piVar3 = (int *)FUN_005d5904();
            *piVar3 = iVar2;
            return -1;
          }
          if (local_40[0] == '\r') {
            local_40[0] = '\n';
            *(char *)(local_34 + param_2) = '\n';
          }
          else {
            *(char *)(local_34 + param_2) = local_40[0];
          }
          if (local_40[0] == '\n') {
            return local_34 + 1;
          }
          uVar6 = uVar6 - 1;
          local_34 = local_34 + 1;
          if (uVar6 == 0) break;
          iVar2 = syscall_sys_tty_write(0,local_40,1,auStack_3c);
        }
      }
    }
  }
  else if (param_1 - 1U < 2) {
    sVar4 = strlen(PTR_s_read__reading_from_stdout_or_std_0071c410);
    syscall_sys_tty_write(1,puVar1,sVar4,auStack_3c);
    puVar5 = (undefined4 *)FUN_005d5904();
    local_34 = -1;
    *puVar5 = 0x80010002;
  }
  else {
    iVar2 = syscall_sys_tty_write(param_1,param_2,param_3,auStack_38);
    if (iVar2 != 0) {
      local_34 = -1;
      piVar3 = (int *)FUN_005d5904();
      *piVar3 = iVar2;
    }
  }
  return local_34;
}


// SDK libc.a(fs_posix_api.o): write  [fuzzy 1.000 match]
// 0x05cfe6c (0x13c bytes)
// strings: 0067ed08: 'write: writing from stdin (fd 0) not allowed\n'

undefined4 FUN_005cfe6c(int param_1,int param_2,ulonglong param_3)

{
  bool bVar1;
  undefined *puVar2;
  uint *puVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int *piVar6;
  GPiece<8> auStack_30;
  GPiece<4> auStack_28;
  uint local_24;
  
  puVar2 = PTR_s_write__writing_from_stdin__fd_0__0071c414;
  if (param_1 - 1U < 2) {
    if (param_2 == 0) {
      puVar5 = (undefined4 *)FUN_005d5904();
      param_3 = 0xffffffffffffffff;
      *puVar5 = 0x8001000d;
    }
    else {
      bVar1 = param_1 != 1;
      syscall();
      if (bVar1) {
        puVar3 = (uint *)FUN_005d5904(bVar1,param_2,param_3,auStack_30);
        param_3 = 0xffffffffffffffff;
        *puVar3 = (uint)bVar1;
      }
    }
  }
  else if (param_1 == 0) {
    sVar4 = strlen(PTR_s_write__writing_from_stdin__fd_0__0071c414);
    syscall();
    puVar5 = (undefined4 *)FUN_005d5904(1,puVar2,sVar4,auStack_30);
    param_3 = 0xffffffffffffffff;
    *puVar5 = 0x80010002;
  }
  else {
    syscall();
    if (param_1 == 0) {
      param_3 = (ulonglong)local_24;
    }
    else {
      piVar6 = (int *)FUN_005d5904(param_1,param_2,param_3 & 0xffffffff,auStack_28);
      param_3 = 0xffffffffffffffff;
      *piVar6 = param_1;
    }
  }
  return (int)param_3;
}


