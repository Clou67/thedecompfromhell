// sdk/libfios/fios_platform_ps3ppu.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 44 functions, 0x52c8c4-0x52ea40
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/cUnk.h"
#include "sdk/lUnk.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/mUnk4.h"
#include "sdk/sUnk.h"
#include "sdk/sys.h"

// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::currentDate()  [exact match]
// 0x052c8c4 (0x44 bytes)
longlong FUN_0052c8c4(void)

{
  longlong local_30;
  longlong local_28 [2];
  
  syscall_sys_time_get_current_time(&local_30,local_28);
  return local_30 * 1000000000 + local_28[0];
}


// 0x052c908 (0x14 bytes)
ulonglong FUN_0052c908(int param_1)

{
  return (*(ulonglong *)(param_1 + 0x38) ^ *(ulonglong *)(param_1 + 0x38) >> 0x20) & 0xffffffff;
}


// 0x052c91c (0x20 bytes)
uint FUN_0052c91c(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (int)(param_1 ^ param_2) >> 0x1f;
  return ((uVar1 ^ param_1 ^ param_2) - uVar1) - 1 >> 0x1f;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::nativeDateToDate(std::tm const*, unsigned long long*)  [fuzzy 1.000 match]
// 0x052c93c (0x100 bytes)
undefined4 FUN_0052c93c(int param_1,longlong *param_2)

{
  longlong lVar1;
  GPiece<48> local_40;
  
  lVar1 = FUN_005c7368(local_40);
  if (lVar1 != -1) {
    *param_2 = (lVar1 + *(int *)PTR_DAT_0071ae20) * 1000000000;
    return 1;
  }
  if (*(int *)(param_1 + 0x14) < 100) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0x7fffffffffffffff;
  }
  return 0;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): __static_initialization_and_destruction_0(int, int)  [fuzzy 1.000 match]
// 0x052ca3c (0x114 bytes)
// strings: 0071ae24: 'Nnk(' (raw)

void FUN_0052ca3c(int param_1,int param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  GPiece<32> local_40;
  
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    uVar2 = syscall_sys_time_get_timebase_frequency();
    puVar1 = PTR_DAT_0071ae20;
    *(double *)(PTR_DAT_0071ae20 + 8) = (double)uVar2 / (double)DAT_0071ae24;
    FUN_005cede8(0);
    uVar3 = FUN_005c5900(local_40);
    iVar4 = FUN_005c7368(uVar3);
    uVar3 = FUN_005c58b0(local_40);
    iVar5 = FUN_005c7368(uVar3);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(int *)puVar1 = iVar4 - iVar5;
    return;
  }
  return;
}


// 0x052cb50 (0x10 bytes)
void FUN_0052cb50(void)

{
  FUN_0052ca3c(1,0xffff);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::FIOSvprintf(char const*, char*)  [exact match]
// 0x052cb60 (0x78 bytes)
void FUN_0052cb60(undefined4 param_1,undefined4 param_2)

{
  if (*(undefined4 **)(PTR_DAT_0071ae28 + 0x14) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(PTR_DAT_0071ae28 + 0x14))(param_1);
    return;
  }
  FUN_005cd360(PTR_DAT_0071ae2c,param_1,param_2);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::FIOSprintf(char const*, ...)  [exact match]
// 0x052cbd8 (0x48 bytes)
void _ZN4cell4fios8platform10FIOSprintfEPKcz(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_0052cb60(param_1,&stack0x00000038);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::rwlock::writeUnlock()  [exact match]
// 0x052cc20 (0xac bytes)
// strings: 00668c68: "write-unlocking invalid rwlock '%s'\n" | 00668c20: "sys_rwlock_wunlock failed while write-unlocking rwlock '%s': %d (%s)\n"

void FUN_0052cc20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_write_unlocking_invalid_rwlock___0071ae34,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall_sys_rwlock_wunlock(*(int *)(param_1 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_wunlock_failed_while_w_0071ae30,uVar1,iVar2,uVar3);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::rwlock::writeLock()  [exact match]
// 0x052cccc (0xb0 bytes)
// strings: 00668cd8: "write-locking invalid rwlock '%s'\n" | 00668c90: "sys_rwlock_wlock failed while write-locking rwlock '%s': %d (%s)\n"

void _ZN4cell4fios8platform6rwlock9writeLockEv(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    print_tty4(PTR_s_write_locking_invalid_rwlock___s_0071ae3c,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall_sys_rwlock_wlock(*(int *)(param_1 + 0xc),0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  print_tty4(PTR_s_sys_rwlock_wlock_failed_while_wr_0071ae38,uVar1,iVar2,uVar3);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::rwlock::readUnlock()  [exact match]
// 0x052cd7c (0xac bytes)
// strings: 00668d48: "read-unlocking invalid rwlock '%s'\n" | 00668d00: "sys_rwlock_runlock failed while read-unlocking rwlock '%s': %d (%s)\n"

void FUN_0052cd7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_read_unlocking_invalid_rwlock____0071ae44,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall_sys_rwlock_runlock(*(int *)(param_1 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_runlock_failed_while_r_0071ae40,uVar1,iVar2,uVar3);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::rwlock::readLock()  [exact match]
// 0x052ce28 (0xb0 bytes)
// strings: 00668db8: "read-locking invalid rwlock '%s'\n" | 00668d70: "sys_rwlock_rlock failed while read-locking rwlock '%s': %d (%s)\n"

void FUN_0052ce28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_read_locking_invalid_rwlock___s__0071ae4c,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall_sys_rwlock_rlock(*(int *)(param_1 + 0xc),0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_rlock_failed_while_re_0071ae48,uVar1,iVar2,uVar3);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread::join()  [exact match]
// 0x052ced8 (0x9c bytes)
// strings: 00668de0: "sys_ppu_thread_join failed for thread '%s': %d (%s)\n"

void FUN_0052ced8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<16> local_30;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = syscall_sys_ppu_thread_join(*(longlong *)(param_1 + 0x38),local_30);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar2 = strerror_wrapper(iVar1);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_ppu_thread_join_failed_for_t_0071ae50,param_1 + 8,iVar1,uVar2);
    }
  }
  return;
}


// 0x052cf74 (0xa4 bytes)
// strings: 00668e60: "deleting invalid rwlock '%s'\n" | 00668e18: "sys_rwlock_destroy failed while destroying rwlock '%s': %d (%s)\n"

void FUN_0052cf74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_deleting_invalid_rwlock___s__0071ae58,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = syscall_sys_rwlock_destroy(*(int *)(param_1 + 0xc));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_destroy_failed_while_d_0071ae54,uVar1,iVar2,uVar3);
    }
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052d018 (0x68 bytes)
// strings: 00668e80: 'WARNING! FIOS thread %s is still running as object is destroyed.'

void FUN_0052d018(int param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_WARNING__FIOS_thread__s_is_still_0071ae5c,param_1 + 8);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052d080 (0x68 bytes)
// strings: 00668e80: 'WARNING! FIOS thread %s is still running as object is destroyed.'

void FUN_0052d080(int param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_WARNING__FIOS_thread__s_is_still_0071ae5c,param_1 + 8);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052d0e8 (0xb4 bytes)
void FUN_0052d0e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = sys_lwcond_destroy((int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74c8),uVar1,iVar2,uVar3);
    }
    uVar1 = **(undefined4 **)(iStack_64 + -0x74c4);
    *(undefined4 *)(param_1 + 0x14) = (*(undefined4 **)(iStack_64 + -0x74c4))[1];
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052d19c (0x124 bytes)
void FUN_0052d19c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_94;
  GPiece<16> local_50;
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_00604800(param_1);
  *(undefined4 *)(param_1 + 4) = 0x636f6e64;
  FUN_005193cc(local_50,param_2,8);
  uVar1 = *(undefined4 *)(PTR_DAT_0071ae64 + 4);
  uVar2 = *(undefined4 *)PTR_DAT_0071ae64;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar4 = sys_lwcond_create(param_1 + 0x10,param_4 + 0x10,local_50);
  if (iVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar5 = strerror_wrapper(iVar4);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_94 + -0x74c0),uVar3,iVar4,uVar5);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return;
}


// 0x052d2c0 (0xb0 bytes)
// strings: 00668f80: "deleting invalid mutex '%s'\n"

void FUN_0052d2c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_deleting_invalid_mutex___s__0071ae70,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = sys_lwmutex_destroy(param_1 + 0x10);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74bc),uVar1,iVar2,uVar3);
    }
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052d370 (0x108 bytes)
void FUN_0052d370(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack_84;
  GPiece<8> local_40;
  GPiece<8> local_38;
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00604828(param_1);
  *(undefined4 *)(param_1 + 4) = 0x6d757478;
  FUN_005193cc(local_38,param_2,8);
  uVar4 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x18);
  uVar5 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(PTR_DAT_0071ae64 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  iVar2 = sys_lwmutex_create(param_1 + 0x10,local_40);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = strerror_wrapper(iVar2);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_84 + -0x74b4),uVar1,iVar2,uVar3);
  }
  return;
}


// 0x052d478 (0x108 bytes)
void FUN_0052d478(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack_84;
  GPiece<8> local_40;
  GPiece<8> local_38;
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00604828(param_1);
  *(undefined4 *)(param_1 + 4) = 0x6d757478;
  FUN_005193cc(local_38,param_2,8);
  uVar4 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x18);
  uVar5 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(PTR_DAT_0071ae64 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  iVar2 = sys_lwmutex_create(param_1 + 0x10,local_40);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = strerror_wrapper(iVar2);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_84 + -0x74b4),uVar1,iVar2,uVar3);
  }
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread::getCurrentThreadType()  [fuzzy 0.977 match]
// 0x052d580 (0xd4 bytes)
int FUN_0052d580(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  int iStack_74;
  int local_30 [2];
  GPiece<4> local_28;
  int iStack_24;
  
  iVar2 = sys_ppu_thread_get_id(local_28);
  if (iVar2 == 0) {
    syscall();
    if (iStack_24 == 0) {
      iVar2 = 4;
      piVar4 = (int *)(*(int *)(iStack_74 + -0x7500) + 0x2c);
      lVar5 = 5;
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + -1;
        if (iVar1 == local_30[0]) {
          return iVar2;
        }
        iVar2 = iVar2 + -1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    else {
      uVar3 = strerror_wrapper(iStack_24,local_30);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_74 + -0x74b0),iStack_24,uVar3);
      iVar2 = -1;
    }
  }
  else {
    uVar3 = strerror_wrapper(iVar2);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_74 + -0x74ac),iVar2,uVar3);
    iVar2 = -1;
  }
  return iVar2;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread::setCurrentThreadType(int)  [fuzzy 0.976 match]
// 0x052d654 (0xd4 bytes)
undefined4 FUN_0052d654(ulonglong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  GPiece<4> local_20;
  int iStack_1c;
  
  uVar1 = FUN_0052d580();
  if ((param_1 & 0xffffffff) < 5) {
    iVar2 = sys_ppu_thread_get_id(local_20);
    if (iVar2 == 0) {
      syscall();
      if (iStack_1c != 0) {
        uVar3 = strerror_wrapper
                          (iStack_1c,
                           *(undefined4 *)
                            ((int)((param_1 & 0xffffffff) << 2) + *(int *)(iStack_64 + -0x7500) +
                            0x1c));
        _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74a8),iStack_1c,uVar3);
      }
    }
    else {
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74ac),iVar2,uVar3);
    }
  }
  return uVar1;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread::currentThreadID()  [fuzzy 0.958 match]
// 0x052d728 (0x74 bytes)
undefined4 FUN_0052d728(void)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_64;
  GPiece<24> local_20;
  
  iVar1 = sys_ppu_thread_get_id(local_20);
  if (iVar1 != 0) {
    uVar2 = strerror_wrapper(iVar1);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74ac),iVar1,uVar2);
  }
  return 0;
}


// 0x052d79c (0x28 bytes)
void FUN_0052d79c(void)

{
  sys_ppu_thread_exit(1);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread_entrypoint(unsigned long long)  [fuzzy 0.947 match]
// 0x052d7c4 (0x50 bytes)
void FUN_0052d7c4(int param_1)

{
  (*(code *)**(undefined4 **)(param_1 + 0x30))(param_1,*(undefined4 *)(param_1 + 0x34));
  sys_ppu_thread_exit(0);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread::start()  [fuzzy 0.981 match]
// 0x052d814 (0xf8 bytes)
void FUN_0052d814(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iStack_64;
  
  puVar2 = PTR_PTR_0071ae84;
  puVar1 = PTR_DAT_0071ae28;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(uint *)(param_1 + 0x28);
    if (4 < uVar5) {
      uVar5 = 3;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    iVar3 = sys_ppu_thread_create
                      (param_1 + 0x38,puVar2,param_1,*(undefined4 *)(puVar1 + uVar5 * 4 + 0x1c),
                       *(undefined4 *)(puVar1 + uVar5 * 4 + 0x30),1,param_1 + 8);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      uVar4 = strerror_wrapper(iVar3);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74a0),param_1 + 8,iVar3,uVar4);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}


// 0x052d90c (0x15c bytes)
// strings: 006690a0: '%s %d'

void FUN_0052d90c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_005106cc(param_1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00604850(param_1);
  puVar3 = PTR_DAT_0071ae20;
  puVar4 = (uint *)(PTR_DAT_0071ae20 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x74687264;
  do {
    uVar1 = *(uint *)(puVar3 + 0x10);
    instructionSynchronize();
    while (uVar1 == *puVar4) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar4));
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        instructionSynchronize();
        FUN_005cd198(param_1 + 8,0x20,PTR_s__s__d_0071ae8c,param_2,*(undefined4 *)(puVar3 + 0x10));
        if (param_6 == 0) {
          return;
        }
        FUN_0052d814(param_1);
        return;
      }
    }
  } while( true );
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::dateToNativeDate(unsigned long long, std::tm*)  [exact match]
// 0x052da68 (0x124 bytes)
int FUN_0052da68(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  GPiece<24> local_20;
  
  iVar4 = 0;
  if ((param_1 < 0) || (param_1 == 0)) {
    param_2[8] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  else {
    puVar5 = (undefined4 *)FUN_005c58b0(local_20);
    iVar4 = -((int)(((int)puVar5 >> 0x1f) - ((int)puVar5 >> 0x1f ^ (uint)puVar5)) >> 0x1f);
    if (iVar4 == 0) {
      param_2[8] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    else {
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *param_2 = *puVar5;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      uVar1 = puVar5[5];
      uVar2 = puVar5[6];
      uVar3 = puVar5[7];
      param_2[4] = puVar5[4];
      param_2[5] = uVar1;
      param_2[6] = uVar2;
      param_2[7] = uVar3;
      param_2[8] = puVar5[8];
    }
  }
  return iVar4;
}


// 0x052db8c (0xb4 bytes)
void FUN_0052db8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = sys_lwcond_destroy((int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74c8),uVar1,iVar2,uVar3);
    }
    uVar1 = **(undefined4 **)(iStack_64 + -0x74c4);
    *(undefined4 *)(param_1 + 0x14) = (*(undefined4 **)(iStack_64 + -0x74c4))[1];
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052dc40 (0xb0 bytes)
// strings: 006690e0: "broadcast of invalid cond '%s'\n"

void FUN_0052dc40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_broadcast_of_invalid_cond___s__0071ae94,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys_lwcond_signal_all((int *)(param_1 + 0x10));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x7498),uVar1,iVar2,uVar3);
  return;
}


// 0x052dcf0 (0xb0 bytes)
// strings: 00669138: "signal of invalid cond '%s'\n"

void FUN_0052dcf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_signal_of_invalid_cond___s__0071ae9c,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys_lwcond_signal((int *)(param_1 + 0x10));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x7490),uVar1,iVar2,uVar3);
  return;
}


// 0x052dda0 (0xb8 bytes)
// strings: 00669190: "attempt to unlock invalid mutex '%s'\n"

void lwmutex_unlock_checked(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    print_tty4(PTR_s_attempt_to_unlock_invalid_mutex___0071aea4,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys_lwmutex_unlock(param_1 + 0x10);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  print_tty4(*(undefined4 *)(iStack_64 + -0x7488),uVar1,iVar2,uVar3);
  return;
}


// 0x052de58 (0xbc bytes)
// strings: 006691e8: "attempt to lock invalid mutex '%s'\n"

void lwmutex_lock_checked(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    print_tty4(PTR_s_attempt_to_lock_invalid_mutex____0071aeac,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys_lwmutex_lock(param_1 + 0x10,0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  print_tty4(*(undefined4 *)(iStack_64 + -0x7480),uVar1,iVar2,uVar3);
  return;
}


// 0x052df14 (0xb0 bytes)
// strings: 00668f80: "deleting invalid mutex '%s'\n"

void FUN_0052df14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_deleting_invalid_mutex___s__0071ae70,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = sys_lwmutex_destroy(param_1 + 0x10);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_64 + -0x74bc),uVar1,iVar2,uVar3);
    }
  }
  handle_invalidate_magic(param_1);
  return;
}


// 0x052dfc4 (0xf4 bytes)
// strings: 00669210: "sys_rwlock_create failed while creating rwlock '%s': %d (%s)\n"

void FUN_0052dfc4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<32> local_50;
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_006047d8(param_1);
  *(undefined4 *)(param_1 + 4) = 0x72776c6b;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = syscall_sys_rwlock_create(param_1 + 0xc,local_50);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = strerror_wrapper(iVar2);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_create_failed_while_c_0071aeb0,uVar1,iVar2,uVar3);
  }
  return;
}


// 0x052e0b8 (0x124 bytes)
void FUN_0052e0b8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_94;
  GPiece<16> local_50;
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_00604800(param_1);
  *(undefined4 *)(param_1 + 4) = 0x636f6e64;
  FUN_005193cc(local_50,param_2,8);
  uVar1 = *(undefined4 *)(PTR_DAT_0071ae64 + 4);
  uVar2 = *(undefined4 *)PTR_DAT_0071ae64;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar4 = sys_lwcond_create(param_1 + 0x10,param_4 + 0x10,local_50);
  if (iVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar5 = strerror_wrapper(iVar4);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_94 + -0x74c0),uVar3,iVar4,uVar5);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return;
}


// 0x052e1dc (0xf4 bytes)
// strings: 00669210: "sys_rwlock_create failed while creating rwlock '%s': %d (%s)\n"

void FUN_0052e1dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<32> local_50;
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_006047d8(param_1);
  *(undefined4 *)(param_1 + 4) = 0x72776c6b;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = syscall_sys_rwlock_create(param_1 + 0xc,local_50);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = strerror_wrapper(iVar2);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_create_failed_while_c_0071aeb0,uVar1,iVar2,uVar3);
  }
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::dateToTime(unsigned long long, long long*)  [fuzzy 1.000 match]
// 0x052e2d0 (0x1cc bytes)
uint FUN_0052e2d0(ulonglong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  double dVar4;
  
  if ((longlong)param_1 < 1) {
    *param_2 = 1;
    return 0;
  }
  uVar2 = FUN_0052c8c4();
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (param_1 < uVar2) {
    dVar4 = (double)(uVar2 - param_1) * *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar4) {
      uVar2 = (longlong)(dVar4 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar2 = (ulonglong)dVar4;
    }
    *param_2 = lVar1 - uVar2;
    if (lVar1 < (longlong)uVar2) {
      uVar3 = 1;
      *param_2 = 1;
      goto LAB_0052e368;
    }
  }
  else {
    dVar4 = (double)(param_1 - uVar2) * *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar4) {
      uVar2 = (longlong)(dVar4 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar2 = (ulonglong)dVar4;
    }
    *param_2 = lVar1 + uVar2;
    if ((longlong)(0x7fffffffffffffff - uVar2) < lVar1) {
      uVar3 = 1;
      *param_2 = 0x7fffffffffffffff;
      goto LAB_0052e368;
    }
  }
  uVar3 = 0;
LAB_0052e368:
  return uVar3 ^ 1;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::cond::wait(cell::fios::platform::mutex&, long long)  [fuzzy 0.987 match]
// 0x052e49c (0x15c bytes)
// strings: 00669280: "wait for invalid cond '%s'\n"

undefined4 FUN_0052e49c(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  ulonglong uVar6;
  int iStack_74;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_wait_for_invalid_cond___s__0071aebc,*(undefined4 *)(param_1 + 8));
    return 0;
  }
  lVar3 = 0;
  if (param_3 != 0) {
    do {
      lVar3 = TBLr;
    } while ((int)lVar3 == 0);
    if (lVar3 <= param_3) {
      dVar5 = (double)(param_3 - lVar3) / *(double *)(PTR_DAT_0071ae20 + 8);
      if ((double)DAT_0071aeb4 <= dVar5) {
        uVar6 = (longlong)(dVar5 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
      }
      else {
        uVar6 = (ulonglong)dVar5;
      }
      lVar3 = (longlong)(uVar6 + 999) / 1000;
      if (lVar3 != 0) goto LAB_0052e4cc;
    }
    lVar3 = 1;
  }
LAB_0052e4cc:
  iVar1 = sys_lwcond_wait((int *)(param_1 + 0x10),lVar3);
  uVar4 = 1;
  if ((iVar1 != 0) && (uVar4 = 0, iVar1 != -0x7ffefff5)) {
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar2 = strerror_wrapper(iVar1);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_74 + -0x7470),uVar4,iVar1,uVar2);
    uVar4 = 0;
  }
  return uVar4;
}


// 0x052e5f8 (0xa4 bytes)
// strings: 00668e60: "deleting invalid rwlock '%s'\n" | 00668e18: "sys_rwlock_destroy failed while destroying rwlock '%s': %d (%s)\n"

void FUN_0052e5f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_deleting_invalid_rwlock___s__0071ae58,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = syscall_sys_rwlock_destroy(*(int *)(param_1 + 0xc));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = strerror_wrapper(iVar2);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_sys_rwlock_destroy_failed_while_d_0071ae54,uVar1,iVar2,uVar3);
    }
  }
  handle_invalidate_magic(param_1);
  return;
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::timeToDate(long long, unsigned long long*)  [fuzzy 1.000 match]
// 0x052e69c (0x18c bytes)
undefined8 FUN_0052e69c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_0052c8c4();
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (param_1 < lVar1) {
    dVar3 = (double)(lVar1 - param_1) / *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar3) {
      uVar4 = (longlong)(dVar3 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulonglong)dVar3;
    }
    *param_2 = uVar2 - uVar4;
    if (uVar2 < uVar4) {
      *param_2 = 1;
      return 0;
    }
  }
  else {
    dVar3 = (double)(param_1 - lVar1) / *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar3) {
      uVar4 = (longlong)(dVar3 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulonglong)dVar3;
    }
    *param_2 = uVar2 + uVar4;
    if (0x7fffffffffffffff - uVar4 < uVar2) {
      *param_2 = 0x7fffffffffffffff;
      return 0;
    }
  }
  return 1;
}


// 0x052e828 (0x15c bytes)
// strings: 006690a0: '%s %d'

void FUN_0052e828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_005106cc(param_1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00604850(param_1);
  puVar3 = PTR_DAT_0071ae20;
  puVar4 = (uint *)(PTR_DAT_0071ae20 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x74687264;
  do {
    uVar1 = *(uint *)(puVar3 + 0x10);
    instructionSynchronize();
    while (uVar1 == *puVar4) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar4));
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        instructionSynchronize();
        FUN_005cd198(param_1 + 8,0x20,PTR_s__s__d_0071ae8c,param_2,*(undefined4 *)(puVar3 + 0x10));
        if (param_6 == 0) {
          return;
        }
        FUN_0052d814(param_1);
        return;
      }
    }
  } while( true );
}


// SDK libfios.a(fios_platform_ps3ppu.ppu.o): cell::fios::platform::thread::sleep(long long)  [fuzzy 1.000 match]
// 0x052e984 (0xbc bytes)
longlong FUN_0052e984(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (lVar1 < param_1) {
    dVar2 = (double)(param_1 - lVar1) / *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar2) {
      uVar3 = (longlong)(dVar2 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar3 = (ulonglong)dVar2;
    }
    lVar1 = (longlong)(uVar3 + 999) / 1000;
    param_1 = 1;
    if (lVar1 != 0) {
      param_1 = lVar1;
    }
    syscall();
  }
  return param_1;
}


