//==== 0063000c  ns=Global  size=0x84
// sig: undefined FUN_0063000c(void)
// callers(1): 0062e140 989snd::snd_SynthSetVoiceData
// callees(1): 0062fd94 FUN_0062fd94

void FUN_0063000c(ulonglong param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (uint)param_2 & 0xe000;
  uVar2 = param_1 >> 0xf & 1;
  if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 4;
  }
  else if (uVar1 == 0xc000) {
    uVar2 = uVar2 | 2;
  }
  else if ((param_2 & 0xe000) == 0) {
    uVar2 = uVar2 | 6;
  }
  if ((param_2 & 0x20) != 0) {
    uVar2 = uVar2 | 8;
  }
  FUN_0062fd94(param_1 >> 8 & 0x7f,param_1 >> 4 & 0xf,param_1 & 0xf,param_2 >> 6 & 0x7f,
               param_2 & 0x1f,uVar2,param_3);
  return;
}



//==== 00630090  ns=Global  size=0x20
// sig: undefined FUN_00630090(void)
// callers(0): 
// callees(1): 0800002c syscall::syscall_sys_ppu_thread_join

void FUN_00630090(undefined8 param_1)

{
  undefined1 auStack_20 [32];
  
  syscall::syscall_sys_ppu_thread_join(param_1,auStack_20);
  return;
}



//==== 006300b0  ns=Global  size=0x6c
// sig: undefined FUN_006300b0(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0800005e syscall::syscall_sys_semaphore_post
// strings: 00671058: 'SCREAM: error signaling on semaphore!\n'

void FUN_006300b0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071b03c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar2 = syscall::syscall_sys_semaphore_post
                    (*(undefined4 *)(param_1 * 8 + *(int *)(PTR_PTR_0071b03c + -0x8000) + 4),1);
  if (iVar2 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ffc));
  }
  return;
}



//==== 0063011c  ns=Global  size=0x6c
// sig: undefined FUN_0063011c(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0800005c syscall::syscall_sys_semaphore_wait
// strings: 00671080: 'SCREAM: error waiting on semaphore!\n'

void FUN_0063011c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071b03c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar2 = syscall::syscall_sys_semaphore_wait
                    (*(undefined4 *)(param_1 * 8 + *(int *)(PTR_PTR_0071b03c + -0x8000) + 4),0);
  if (iVar2 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff8));
  }
  return;
}



//==== 00630188  ns=Global  size=0x94
// sig: undefined FUN_00630188(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0800005b syscall::syscall_sys_semaphore_destroy
// strings: 006710a8: "SCREAM: couldn't destroy semaphore!\n"

void FUN_00630188(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b03c;
  param_1 = param_1 * 8;
  iVar1 = *(int *)(PTR_PTR_0071b03c + -0x8000);
  if (*(int *)(iVar1 + param_1) != 0) {
    iVar3 = syscall::syscall_sys_semaphore_destroy(*(undefined4 *)(param_1 + iVar1 + 4));
    if (iVar3 != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7ff4));
      return;
    }
    *(undefined4 *)(iVar1 + param_1) = 0;
  }
  return;
}



//==== 0063021c  ns=Global  size=0x16c
// sig: undefined FUN_0063021c(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 006710d0: "SCREAM: couldn't create semaphore %s\n"

int FUN_0063021c(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar7;
  uint uStack00000008;
  
  puVar3 = PTR_PTR_0071b03c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  piVar1 = *(int **)(PTR_PTR_0071b03c + -0x7ff0);
  if (*piVar1 == 0) {
    piVar4 = *(int **)(PTR_PTR_0071b03c + -0x8000);
    lVar7 = 8;
    piVar5 = piVar4;
    do {
      *piVar5 = 0;
      lVar7 = lVar7 + -1;
      piVar5 = piVar5 + 2;
    } while (lVar7 != 0);
    *piVar1 = 1;
  }
  else {
    piVar4 = *(int **)(PTR_PTR_0071b03c + -0x8000);
  }
  iVar6 = 0;
  lVar7 = 8;
  do {
    if (*piVar4 == 0) {
      iVar2 = *(int *)(puVar3 + -0x8000);
      syscall();
      if (iVar6 * 8 + iVar2 == -4) {
        *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
        return iVar6;
      }
      break;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + -1;
    piVar4 = piVar4 + 2;
  } while (lVar7 != 0);
  989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fec));
  return -1;
}



//==== 00630388  ns=Global  size=0x44
// sig: undefined FUN_00630388(void)
// callers(2): 0062766c FUN_0062766c; 0062fca0 FUN_0062fca0
// callees(1): 006504e4 sys::sys_lwmutex_unlock

void FUN_00630388(int param_1)

{
  sys::sys_lwmutex_unlock(param_1 * 0x20 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8);
  return;
}



//==== 006303cc  ns=Global  size=0x60
// sig: undefined FUN_006303cc(void)
// callers(2): 006276a8 FUN_006276a8; 0062fcdc FUN_0062fcdc
// callees(2): 0061948c 989snd::snd_Printf; 006504c4 sys::sys_lwmutex_lock
// strings: 006710f8: 'result = %d\n'

void FUN_006303cc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = sys::sys_lwmutex_lock(param_1 * 0x20 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8,0);
  if (iVar2 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fe4));
  }
  return;
}



//==== 0063042c  ns=Global  size=0x70
// sig: undefined FUN_0063042c(void)
// callers(1): 0062fc4c FUN_0062fc4c
// callees(1): 00650724 sys::sys_lwmutex_trylock

undefined4 FUN_0063042c(int param_1)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_trylock(param_1 * 0x20 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8);
  if (iVar1 == 0) {
    return 0;
  }
  return 0x8001000a;
}



//==== 0063049c  ns=Global  size=0xb8
// sig: undefined FUN_0063049c(void)
// callers(2): 00627334 FUN_00627334; 0062fd18 FUN_0062fd18
// callees(2): 0061948c 989snd::snd_Printf; 00650784 sys::sys_lwmutex_destroy
// strings: 00671108: "SCREAM: couldn't destroy mutex!\n"

void FUN_0063049c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b03c;
  param_1 = param_1 * 0x20;
  iVar1 = *(int *)(PTR_PTR_0071b03c + -0x7fe8);
  if (*(int *)(iVar1 + param_1) == 0) {
    return;
  }
  iVar3 = sys::sys_lwmutex_destroy(param_1 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar1 + param_1) = 0;
    return;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fe0));
  return;
}



//==== 00630554  ns=Global  size=0x178
// sig: undefined FUN_00630554(void)
// callers(2): 0062f4b8 989snd::snd_SynthInit; 0062fd54 FUN_0062fd54
// callees(3): 005cccec libc::strcpy; 0061948c 989snd::snd_Printf; 006505a4 sys::sys_lwmutex_create
// strings: 00671130: "SCREAM: couldn't create mutex %s\n"

int FUN_00630554(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  puVar1 = PTR_PTR_0071b03c;
  piVar4 = *(int **)(PTR_PTR_0071b03c + -0x7fdc);
  if (*piVar4 == 0) {
    piVar5 = *(int **)(PTR_PTR_0071b03c + -0x7fe8);
    lVar7 = 8;
    piVar3 = piVar5;
    do {
      *piVar3 = 0;
      lVar7 = lVar7 + -1;
      piVar3 = piVar3 + 8;
    } while (lVar7 != 0);
    *piVar4 = 1;
  }
  else {
    piVar5 = *(int **)(PTR_PTR_0071b03c + -0x7fe8);
  }
  iVar6 = 0;
  lVar7 = 8;
  piVar4 = piVar5;
  do {
    if (*piVar4 == 0) {
      libc::strcpy(local_38,param_1,8);
      iVar2 = sys::sys_lwmutex_create(piVar5 + iVar6 * 8 + 2,local_40);
      if (iVar2 != 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd8));
        return -1;
      }
      *(undefined4 *)(*(int *)(puVar1 + -0x7fe8) + iVar6 * 0x20) = 1;
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + -1;
    piVar4 = piVar4 + 8;
  } while (lVar7 != 0);
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd8));
  return -1;
}



//==== 006306cc  ns=Global  size=0x3c
// sig: undefined FUN_006306cc(void)
// callers(0): 
// callees(1): 006505c4 sys::sys_ppu_thread_get_id

undefined8 FUN_006306cc(void)

{
  int iVar1;
  undefined8 local_20 [4];
  
  iVar1 = sys::sys_ppu_thread_get_id(local_20);
  if (iVar1 != 0) {
    local_20[0] = 0;
  }
  return local_20[0];
}



//==== 00630708  ns=Global  size=0x4c
// sig: undefined FUN_00630708(void)
// callers(0): 
// callees(1): 00650524 sys::sys_ppu_thread_create

undefined8 FUN_00630708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 local_20 [4];
  
  iVar2 = sys::sys_ppu_thread_create(local_20,param_2,0,param_3,param_4,1,param_1);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = local_20[0];
  }
  return uVar1;
}



//==== 00630754  ns=Global  size=0x58
// sig: undefined FUN_00630754(void)
// callers(2): 00618c1c FUN_00618c1c; 00622fbc FUN_00622fbc
// callees(2): 0061948c 989snd::snd_Printf; 0064f1e4 cell::cellFsRead
// strings: 00671158: 'SCREAM: cellFsRead failed with error code -> %d\n'

undefined4 FUN_00630754(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = cell::cellFsRead(param_1,param_2,param_3,auStack_20);
  if (iVar2 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd4));
  }
  return local_1c;
}



//==== 006307ac  ns=Global  size=0x5c
// sig: undefined FUN_006307ac(void)
// callers(3): 00618cb0 FUN_00618cb0; 00619000 FUN_00619000; 00622fbc FUN_00622fbc
// callees(2): 0061948c 989snd::snd_Printf; 0064ffe4 cell::cellFsLseek
// strings: 00671190: 'SCREAM: cellFsLSeek failed with error code -> %d\n'

undefined4 FUN_006307ac(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uStack_1c;
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = cell::cellFsLseek();
  if (iVar2 != 0) {
    uStack_1c = 0;
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd0));
  }
  return uStack_1c;
}



//==== 00630808  ns=Global  size=0x70
// sig: undefined FUN_00630808(void)
// callers(2): 00619000 FUN_00619000; 00622fbc FUN_00622fbc
// callees(2): 0061948c 989snd::snd_Printf; 0064f204 cell::cellFsOpen
// strings: 006711c8: 'SCREAM: cellFsOpen failed for -> %s\n'

undefined4 FUN_00630808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_30 [6];
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = cell::cellFsOpen(param_1,param_2,local_30,0,0);
  if (iVar2 != 0) {
    local_30[0] = 0xffffffff;
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fcc));
  }
  return local_30[0];
}



//==== 00630878  ns=Global  size=0x6c
// sig: undefined FUN_00630878(void)
// callers(4): 006308e4 FUN_006308e4; 00630a34 FUN_00630a34; 00630b50 FUN_00630b50; 00630c90 FUN_00630c90
// callees(0): 

int * FUN_00630878(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(int **)(PTR_PTR_0071b040 + -0x8000);
  piVar2 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && (piVar2 = piVar1, *piVar1 != param_1)) {
    while (piVar1 = (int *)piVar1[2], piVar1 != (int *)0x0) {
      if (*piVar1 == param_1) {
        return piVar1;
      }
    }
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



//==== 006308e4  ns=Global  size=0x150
// sig: undefined FUN_006308e4(void)
// callers(1): 006125e4 FUN_006125e4
// callees(2): 0061948c 989snd::snd_Printf; 00630878 FUN_00630878
// strings: 00671238: '%s(%d) : Proc ID %d callback index %d is invalid.\n' | 00671220: 'common/989snd.cpp' | 006711f0: '%s(%d) : Proc ID %d not found for callback.\n'

undefined4
FUN_006308e4(undefined8 param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_0071b040;
  iVar2 = FUN_00630878();
  if (iVar2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ffc));
  }
  else {
    if ((int)param_2 < *(int *)(iVar2 + 4)) {
      uVar3 = (*(code *)**(undefined4 **)(iVar2 + (int)((param_2 & 0xffffffff) << 2) + 0x10))
                        (param_3,param_4,param_5,param_6,param_7);
      return uVar3;
    }
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff4));
  }
  return 0;
}



//==== 00630a34  ns=Global  size=0x11c
// sig: undefined FUN_00630a34(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006194f4 FUN_006194f4; 00630878 FUN_00630878
// strings: 00630ae4: '}+H.{d' (raw) | 00671270: '%s(%d) : Proc ID %d not found for callback with data.\n' | 00671220: 'common/989snd.cpp'

undefined4 FUN_00630a34(undefined8 param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_0071b040;
  iVar2 = FUN_00630878();
  if (iVar2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff0));
  }
  else {
    if ((int)param_2 < *(int *)(iVar2 + 4)) {
      uVar3 = (*(code *)**(undefined4 **)(iVar2 + (int)((param_2 & 0xffffffff) << 2) + 0x10))
                        (param_3,param_4,0,0,0);
      return uVar3;
    }
    FUN_006194f4(4,param_1,0,0,0);
  }
  return 0;
}



//==== 00630b50  ns=Global  size=0x140
// sig: undefined FUN_00630b50(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00630878 FUN_00630878
// strings: 006712a8: '%s(%d) : Invalid parameter.\n' | 00671220: 'common/989snd.cpp' | 006712c8: '%s(%d) : Proc ID %d was never registered.\n'

undefined4 FUN_00630b50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar2 = PTR_PTR_0071b040;
  if (param_1 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b040 + -0x7fec));
    if (**(char **)(puVar2 + -0x7fe8) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe4),0);
  }
  iVar3 = FUN_00630878(*param_1);
  if (iVar3 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fe0));
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined4 *)**(undefined4 **)(puVar2 + -0x8000);
    if (param_1 == puVar5) {
      **(undefined4 **)(puVar2 + -0x8000) = param_1[2];
      return 1;
    }
    if (puVar5 != (undefined4 *)0x0) {
      for (puVar1 = (undefined4 *)puVar5[2]; puVar1 != param_1; puVar1 = (undefined4 *)puVar1[2]) {
        if (puVar1 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
          break;
        }
        puVar5 = puVar1;
      }
    }
    uVar4 = 1;
    puVar5[2] = *(undefined4 *)(puVar5[2] + 8);
  }
  return uVar4;
}



//==== 00630c90  ns=Global  size=0x10c
// sig: undefined FUN_00630c90(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00630878 FUN_00630878
// strings: 006712f8: '%s(%d) : Proc ID %d is already registered.\n' | 00671220: 'common/989snd.cpp' | 006712a8: '%s(%d) : Invalid parameter.\n'

undefined4 FUN_00630c90(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = PTR_PTR_0071b040;
  if (param_1 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b040 + -0x7fec));
    if (**(char **)(puVar3 + -0x7fe8) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fe4),0);
  }
  iVar4 = FUN_00630878(*param_1);
  if (iVar4 == 0) {
    piVar1 = *(int **)(puVar3 + -0x8000);
    param_1[3] = 0;
    param_1[2] = 0;
    iVar4 = *piVar1;
    if (iVar4 != 0) {
      do {
        iVar2 = iVar4;
        iVar4 = *(int *)(iVar2 + 8);
      } while (iVar4 != 0);
      *(undefined4 **)(iVar2 + 8) = param_1;
      return 1;
    }
    uVar5 = 1;
    *piVar1 = (int)param_1;
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fdc));
    uVar5 = 0;
  }
  return uVar5;
}



//==== 00630d9c  ns=Global  size=0xdc
// sig: undefined FUN_00630d9c(void)
// callers(3): 006314c0 FUN_006314c0; 00633a30 FUN_00633a30; 006367dc FUN_006367dc
// callees(0): 

ulonglong FUN_00630d9c(int param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar1 = PTR_PTR_0071b044;
  uVar3 = 0;
  if ((param_2 != 0) && (uVar3 = 1, 2 < param_2)) {
    uVar3 = 4;
    lVar4 = 0x1e;
    do {
      if (param_2 <= uVar3) break;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar3 = uVar3 - 1;
  }
  lVar4 = (**(code **)**(undefined4 **)(PTR_PTR_0071b044 + -0x8000))
                    ((int)uVar3 + param_1 + 4,param_3);
  uVar2 = 0;
  if ((int)lVar4 != 0) {
    uVar2 = lVar4 + uVar3 + 4 & ~uVar3;
    *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x4c) = *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x4c) + 1;
    *(int *)((int)uVar2 + -4) = (int)lVar4;
  }
  return uVar2 & 0xffffffff;
}



//==== 00630e78  ns=Global  size=0x64
// sig: undefined FUN_00630e78(void)
// callers(4): 006310a0 FUN_006310a0; 006314c0 FUN_006314c0; 006318f4 FUN_006318f4; 006322dc FUN_006322dc
// callees(0): 

void FUN_00630e78(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + -4);
  puVar2 = (undefined4 *)**(undefined4 **)(PTR_PTR_0071b044 + -0x7ff8);
  *(int *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x50) =
       *(int *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x50) + 1;
  (*(code *)*puVar2)(uVar1);
  return;
}



//==== 00630edc  ns=Global  size=0x24
// sig: undefined FUN_00630edc(void)
// callers(0): 
// callees(0): 

int FUN_00630edc(void)

{
  return *(int *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x4c) -
         *(int *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x50);
}



//==== 00630f00  ns=Global  size=0x158
// sig: undefined FUN_00630f00(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

int FUN_00630f00(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*param_1 == 0x6c) {
    libc::memcpy(param_1,(void *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 8),0x6c);
    *param_1 = 0x6c;
    iVar2 = -2;
    if ((((((param_1[1] == param_1[2]) && (iVar2 = -3, param_1[3] == param_1[4])) &&
          (iVar2 = -4, param_1[5] == param_1[6])) &&
         ((iVar2 = -5, param_1[7] == param_1[8] && (iVar2 = -6, param_1[0xb] == param_1[0xc])))) &&
        ((iVar2 = -7, param_1[0xd] == param_1[0xe] &&
         ((iVar2 = -8, param_1[0xf] == param_1[0x10] && (iVar2 = -9, param_1[0x11] == param_1[0x12])
          ))))) &&
       ((iVar2 = -10, param_1[0x13] == param_1[0x14] && (iVar2 = -0xb, param_1[9] == param_1[10]))))
    {
      uVar1 = (param_1[0x15] ^ param_1[0x16]) >> 0x1f;
      iVar2 = ((int)(((uVar1 ^ param_1[0x15] ^ param_1[0x16]) - uVar1) + -1) >> 0x1f & 0xcU) - 0xc;
    }
  }
  return iVar2;
}



//==== 00631058  ns=Global  size=0x1c
// sig: undefined FUN_00631058(void)
// callers(7): 00631150 FUN_00631150; 00632674 FUN_00632674; 00632790 FUN_00632790; 00635ff8 FUN_00635ff8; 006364a0 FUN_006364a0; 00637d2c 989snd::snd_ProcessStreamTick; 0063aab8 FUN_0063aab8
// callees(0): 

uint FUN_00631058(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(uint *)(param_1 + 0x240) >> 0x1f;
  return uVar1 - (uVar1 ^ *(uint *)(param_1 + 0x240)) >> 0x1f;
}



//==== 00631074  ns=Global  size=0x2c
// sig: undefined FUN_00631074(void)
// callers(7): 006313f8 FUN_006313f8; 006314c0 FUN_006314c0; 0063177c FUN_0063177c; 006322dc FUN_006322dc; 00633a30 FUN_00633a30; 006361e4 FUN_006361e4; 0063632c FUN_0063632c
// callees(0): 

int * FUN_00631074(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*param_1 == 0x5afe2b46) {
    return param_1;
  }
  return (int *)0x0;
}



//==== 006310a0  ns=Global  size=0x78
// sig: undefined FUN_006310a0(void)
// callers(2): 00636718 FUN_00636718; 006367dc FUN_006367dc
// callees(1): 00630e78 FUN_00630e78

void FUN_006310a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_0071b044;
  piVar1 = *(int **)(PTR_PTR_0071b044 + -0x7ffc);
  if (*piVar1 != 0) {
    FUN_00630e78(*piVar1);
    *piVar1 = 0;
  }
  puVar2 = *(undefined4 **)(puVar5 + -0x7fe8);
  puVar3 = *(undefined4 **)(puVar5 + -0x7ff4);
  piVar1[0x28] = 0;
  piVar1[0x27] = 0;
  puVar4 = *(undefined4 **)(puVar5 + -0x7ff0);
  *puVar2 = 0;
  *puVar3 = 0;
  *puVar4 = *(undefined4 *)(puVar5 + -0x7fec);
  return;
}



//==== 00631118  ns=Global  size=0xc
// sig: undefined FUN_00631118(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00631118(void)

{
  return 0x70033;
}



//==== 00631124  ns=Global  size=0x2c
// sig: undefined FUN_00631124(void)
// callers(1): 00633628 FUN_00633628
// callees(0): 

void FUN_00631124(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[7];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar4;
  return;
}



//==== 00631150  ns=Global  size=0x6c
// sig: undefined FUN_00631150(void)
// callers(1): 00632a38 FUN_00632a38
// callees(1): 00631058 FUN_00631058

void FUN_00631150(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b044;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  iVar2 = FUN_00631058();
  if (iVar2 != 0) {
    iVar2 = *(int *)(puVar1 + -0x7ffc);
    *(undefined1 *)(param_1 + 0x245) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
  }
  return;
}



//==== 006311bc  ns=Global  size=0x158
// sig: undefined FUN_006311bc(void)
// callers(1): 00632ec0 FUN_00632ec0
// callees(0): 

void FUN_006311bc(int param_1,uint *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = PTR_PTR_0071b044;
  uVar3 = *param_2;
  if ((uVar3 & 4) != 0) {
    fVar1 = (float)param_2[param_3 + 1];
    *(float *)(param_1 + 0x11c) = fVar1;
    if (param_4 != 0) {
      *(float *)(param_1 + 0x11c) = fVar1 * *(float *)(param_4 + 0x11c);
    }
    if ((int)*(float *)(param_1 + 0x11c) < 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else if (*(float *)(puVar2 + -0x7fe4) < *(float *)(param_1 + 0x11c)) {
      *(float *)(param_1 + 0x11c) = *(float *)(puVar2 + -0x7fe4);
    }
  }
  if ((uVar3 & 8) != 0) {
    uVar3 = param_2[param_3 + 0x11];
    *(uint *)(param_1 + 0x130) = uVar3;
    if ((int)uVar3 < 0) {
      uVar3 = *param_2;
    }
    else {
      if (param_4 != 0) {
        *(uint *)(param_1 + 0x130) = uVar3 + *(int *)(param_4 + 0x130);
      }
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) % 0x168;
      uVar3 = *param_2;
    }
  }
  if ((uVar3 & 0x10) != 0) {
    uVar3 = param_2[param_3 + 0x21];
    *(uint *)(param_1 + 0x140) = uVar3;
    if (param_4 != 0) {
      *(uint *)(param_1 + 0x140) = uVar3 + *(int *)(param_4 + 0x140);
    }
    *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) % 0x168;
  }
  return;
}



//==== 00631314  ns=Global  size=0x34
// sig: undefined FUN_00631314(void)
// callers(1): 00635d10 FUN_00635d10
// callees(0): 

void FUN_00631314(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x17a4) == 0) {
    *(undefined4 *)(param_1 + 0x17a4) = param_2;
  }
  if (*(int *)(param_1 + 0x17a0) != 0) {
    *(undefined4 *)(param_1 + 0x179c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x17a0) = param_2;
  *(undefined4 *)(param_1 + 0x179c) = param_2;
  return;
}



//==== 00631348  ns=Global  size=0x10
// sig: undefined FUN_00631348(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00631348(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



//==== 00631358  ns=Global  size=0xa0
// sig: undefined FUN_00631358(void)
// callers(3): 00635d10 FUN_00635d10; 00635ff8 FUN_00635ff8; 0063be38 FUN_0063be38
// callees(0): 

uint FUN_00631358(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x585) != '\0') {
    uVar1 = 0;
    if ((((*(char *)(param_1 + 0x585) == *(char *)(param_2 + 0x14)) &&
         (*(char *)(param_1 + 0x588) == *(char *)(param_2 + 0x17))) &&
        (*(char *)(param_1 + 0x587) == *(char *)(param_2 + 0x16))) &&
       (*(char *)(param_1 + 0x586) == *(char *)(param_2 + 0x15))) {
      uVar1 = (uint)LZCOUNT(*(uint *)(param_1 + 0x580) ^ *(uint *)(param_2 + 0x58)) >> 5;
    }
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0x585) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x588) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x587) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x586) = *(undefined1 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x58);
  return 1;
}



//==== 006313f8  ns=Global  size=0x3c
// sig: undefined FUN_006313f8(void)
// callers(0): 
// callees(1): 00631074 FUN_00631074

int FUN_006313f8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00631074();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x16);
  }
  return iVar1;
}



//==== 00631434  ns=Global  size=0x8c
// sig: undefined FUN_00631434(void)
// callers(1): 006314c0 FUN_006314c0
// callees(0): 

int FUN_00631434(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b044;
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 8))) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x14) + param_1 + param_2 * *(ushort *)(param_1 + 0x16);
    if (param_3 != (undefined4 *)0x0) {
      iVar1 = param_3[1];
      *(undefined4 *)(iVar3 + 400) = *param_3;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar3 + 8) = **(undefined4 **)(puVar2 + -0x7ff0);
      }
      else {
        *(int *)(iVar3 + 8) = iVar1;
      }
      *(undefined4 *)(iVar3 + 0xc) = param_3[6];
    }
    return iVar3;
  }
  return 0;
}



//==== 006314c0  ns=Global  size=0x184
// sig: undefined FUN_006314c0(void)
// callers(0): 
// callees(5): 005c5ad0 libc::memcpy; 00630d9c FUN_00630d9c; 00630e78 FUN_00630e78; 00631074 FUN_00631074; 00631434 FUN_00631434

undefined4 * FUN_006314c0(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  void *__dest;
  void *__src;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (param_3 != (int *)0x0)) {
    iVar2 = param_2 * 0x198 + 0x18;
    puVar1 = (undefined4 *)FUN_00630d9c(iVar2,8,0x200);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2 * 0x198 + 0x10;
      *puVar1 = 0x53465441;
      *(undefined2 *)((int)puVar1 + 0x16) = 0x198;
      *(undefined2 *)((int)puVar1 + 0x12) = 0;
      *(undefined2 *)(puVar1 + 4) = 2;
      puVar1[2] = param_2;
      *(undefined2 *)(puVar1 + 5) = 0x18;
      puVar1[3] = 0;
      if (param_2 != 0) {
        iVar3 = 0;
        do {
          __src = (void *)FUN_00631074(*param_1);
          iVar4 = iVar3 + 1;
          if (__src == (void *)0x0) {
            FUN_00630e78(puVar1);
            return (undefined4 *)0x0;
          }
          __dest = (void *)FUN_00631434(puVar1,iVar3,0);
          libc::memcpy(__dest,__src,0x198);
          *(undefined4 *)((int)__dest + 400) = 0;
          iVar3 = iVar4;
          param_1 = param_1 + 1;
        } while (param_2 != iVar4);
      }
      *param_3 = iVar2;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}



//==== 00631644  ns=Global  size=0x48
// sig: undefined FUN_00631644(void)
// callers(1): 00631a0c FUN_00631a0c
// callees(0): 

undefined8 FUN_00631644(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar4 = 8;
  iVar3 = 0;
  local_20 = param_1;
  local_18 = 0;
  puVar1 = (undefined1 *)((int)&local_18 + 7);
  do {
    puVar2 = (undefined1 *)((int)&local_20 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar1 = *puVar2;
    lVar4 = lVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (lVar4 != 0);
  return 0;
}



//==== 0063168c  ns=Global  size=0x34
// sig: undefined FUN_0063168c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0063168c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffff92;
  if (param_1 != 0) {
    iVar1 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0x234) = param_2;
    *(int *)(iVar1 + 0x230) = (int)param_1;
  }
  return uVar2;
}



//==== 006316c0  ns=Global  size=0xbc
// sig: undefined FUN_006316c0(void)
// callers(3): 006375b8 FUN_006375b8; 0063a894 989snd::sndi_CloseAsyncFilePlayer; 0063be38 FUN_0063be38
// callees(0): 

void FUN_006316c0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 local_40 [40];
  
  puVar1 = *(undefined4 **)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x230);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = *(int **)(PTR_PTR_0071b044 + -0x7fdc);
    if (*piVar2 == 0) {
      *piVar2 = 1;
      (*(code *)*puVar1)(local_40);
      *piVar2 = 0;
      return;
    }
  }
  return;
}



//==== 0063177c  ns=Global  size=0x34
// sig: undefined FUN_0063177c(void)
// callers(0): 
// callees(1): 00631074 FUN_00631074

undefined1 FUN_0063177c(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00631074();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(iVar2 + 0x15);
  }
  return uVar1;
}



//==== 006317b0  ns=Global  size=0x144
// sig: undefined FUN_006317b0(void)
// callers(1): 006318f4 FUN_006318f4
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00671470: '%s(%d) : Storage size %d is too small for even one file token!\n' | 00671358: 'common/snd_stream.cpp' | 006713b0: '%s(%d) : Invalid SndStreamFileTokenStorage ID = 0x%08X.\n' | 006713f0: '%s(%d) : Invalid SndStreamFileTokenStorage version = %d.\n' | 00671430: '%s(%d) : Invalid SndStreamFileInfo size = %d. This is a BUG!\n' | 00671370: '%s(%d) : SndStreamFileTokenStorage needs byte reversal.\n' | 00671328: '%s(%d) : NULL SndStreamFileTokenStorage.\n'

undefined4 FUN_006317b0(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fd8));
    uVar1 = 0xffffff92;
  }
  else if (*param_1 == 0x41544653) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fd0));
    uVar1 = 0xffffff90;
  }
  else if (*param_1 == 0x53465441) {
    if (*(short *)(param_1 + 4) == 2) {
      if (*(short *)((int)param_1 + 0x16) == 0x198) {
        if ((param_2 == 0) || (*(ushort *)(param_1 + 5) + 0x198 <= param_2)) {
          uVar1 = 0;
        }
        else {
          989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc0));
          uVar1 = 0xffffff93;
        }
      }
      else {
        989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc4));
        uVar1 = 0xffffff95;
      }
    }
    else {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc8));
      uVar1 = 0xffffff91;
    }
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fcc));
    uVar1 = 0xffffff94;
  }
  return uVar1;
}



//==== 006318f4  ns=Global  size=0x118
// sig: undefined FUN_006318f4(void)
// callers(0): 
// callees(2): 00630e78 FUN_00630e78; 006317b0 FUN_006317b0

undefined4 FUN_006318f4(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = 0xffffff92;
  if (param_1 != (int *)0x0) {
    iVar3 = FUN_006317b0(param_1,0);
    if (iVar3 == 0) {
      uVar1 = *(ushort *)(param_1 + 5);
      if (param_1[2] != 0) {
        uVar5 = 0;
        do {
          puVar4 = (undefined4 *)
                   ((int)param_1 + *(ushort *)((int)param_1 + 0x16) * uVar5 + (uint)uVar1);
          uVar5 = uVar5 + 1;
          *(undefined1 *)((int)puVar4 + 0x12) = 0;
          *puVar4 = 0;
        } while (uVar5 < (uint)param_1[2]);
      }
      *param_1 = 0;
      FUN_00630e78(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (*param_1 == 0x41544653) {
        *param_1 = 0;
        FUN_00630e78(param_1);
        return 0;
      }
    }
  }
  return uVar2;
}



//==== 00631a0c  ns=Global  size=0x4c4
// sig: undefined FUN_00631a0c(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00631644 FUN_00631644
// strings: 006713f0: '%s(%d) : Invalid SndStreamFileTokenStorage version = %d.\n' | 00671358: 'common/snd_stream.cpp' | 006713b0: '%s(%d) : Invalid SndStreamFileTokenStorage ID = 0x%08X.\n'

undefined4 FUN_00631a0c(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar13;
  undefined8 uVar12;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint *local_c0;
  undefined8 *local_b8;
  uint *local_b4;
  uint local_b0;
  uint local_ac;
  
  if (param_1 == 0) {
    return 0xffffff92;
  }
  puVar13 = (uint *)param_1;
  uVar4 = *puVar13;
  uVar5 = puVar13[2];
  uVar1 = *(ushort *)(puVar13 + 5);
  uVar15 = (ulonglong)uVar1;
  uVar2 = *(ushort *)((int)puVar13 + 0x16);
  uVar16 = (uint)uVar2;
  uVar3 = *(ushort *)(puVar13 + 4);
  if (uVar4 == 0x41544653) {
    local_ac = uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar15 = (uVar15 << 0x20) >> 0x28 | (uVar15 & 0xff) << 8;
    uVar16 = (uint)(uVar2 >> 8) | (uVar2 & 0xff) << 8;
    if (((uint)(uVar3 >> 8) | (uVar3 & 0xff) << 8) != 2) goto LAB_00631e90;
  }
  else {
    if (uVar4 != 0x53465441) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fcc));
      return 0xffffff94;
    }
    local_ac = uVar5;
    if (uVar3 != 2) {
LAB_00631e90:
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc8));
      return 0xffffff91;
    }
  }
  uVar6 = puVar13[1];
  uVar7 = puVar13[3];
  *puVar13 = uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  puVar13[1] = uVar6 >> 0x18 | uVar6 >> 8 & 0xff00 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  puVar13[2] = uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  puVar13[3] = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  *(ushort *)(puVar13 + 4) = uVar3 >> 8 | uVar3 << 8;
  *(ushort *)((int)puVar13 + 0x12) =
       *(ushort *)((int)puVar13 + 0x12) >> 8 | *(ushort *)((int)puVar13 + 0x12) << 8;
  *(ushort *)(puVar13 + 5) = uVar1 >> 8 | uVar1 << 8;
  *(ushort *)((int)puVar13 + 0x16) = uVar2 >> 8 | uVar2 << 8;
  param_1 = uVar15 + param_1;
  if (local_ac != 0) {
    iVar10 = (int)param_1;
    local_c0 = (uint *)(iVar10 + 0x54);
    local_b4 = (uint *)(iVar10 + 0x60);
    local_b8 = (undefined8 *)(iVar10 + 0x70);
    local_b0 = 0;
    do {
      puVar13 = (uint *)param_1;
      uVar4 = *puVar13;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *puVar13 = uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = puVar13[6];
      uVar12 = *local_b8;
      puVar13[6] = uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = local_b4[3];
      uVar5 = *local_b4;
      uVar6 = *local_c0;
      uVar7 = local_c0[1];
      uVar8 = local_c0[2];
      uVar9 = local_b4[1];
      local_c0[2] = uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      local_b4[3] = uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      *local_c0 = uVar6 >> 0x18 | uVar6 >> 8 & 0xff00 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      local_c0[1] = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      *local_b4 = uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      local_b4[1] = uVar9 >> 0x18 | uVar9 >> 8 & 0xff00 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar12 = FUN_00631644(uVar12);
      lVar14 = param_1 + 0x90;
      lVar17 = 0x80;
      *local_b8 = uVar12;
      *(undefined4 *)(local_b8 + 1) = 0;
      do {
        puVar11 = (ushort *)lVar14;
        lVar14 = lVar14 + 2;
        uVar1 = *puVar11;
        *puVar11 = uVar1 >> 8 | uVar1 << 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      local_b0 = local_b0 + 1;
      local_c0 = (uint *)((int)local_c0 + uVar16);
      local_b4 = (uint *)((int)local_b4 + uVar16);
      local_b8 = (undefined8 *)((int)local_b8 + uVar16);
      puVar13[100] = 0;
      param_1 = param_1 + (ulonglong)uVar16;
    } while (local_ac != local_b0);
  }
  return 0;
}



//==== 00631ed0  ns=Global  size=0x198
// sig: undefined FUN_00631ed0(void)
// callers(2): 006343bc FUN_006343bc; 006363e4 FUN_006363e4
// callees(1): 0061948c 989snd::snd_Printf
// strings: 006716e0: 'ERROR SndFileInterface missing m_pFileAsyncClose !\n' | 006714b0: 'ERROR SndFileInterface missing m_pFileOpen !\n' | 006714e0: 'ERROR SndFileInterface missing m_pFileSeek !\n' | 00671540: 'ERROR SndFileInterface missing m_pFileClose !\n' | 00671510: 'ERROR SndFileInterface missing m_pFileRead !\n' | 00671628: 'ERROR SndFileInterface missing m_pFileAsyncRead !\n' | 006715e8: 'ERROR SndFileInterface missing m_pFileAsyncOpenBitstream !\n' | 006715a8: 'ERROR SndFileInterface missing m_pFileAsyncIsOpenComplete !\n' | 00671570: 'ERROR SndFileInterface missing m_pFileAsyncOpen !\n' | 006716a0: 'ERROR SndFileInterface missing m_pFileAsyncCloseBitstream !\n' | 00671660: 'ERROR SndFileInterface missing m_pFileAsyncIsReadComplete !\n'

undefined4 FUN_00631ed0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fbc));
      return 0xffffff92;
    }
    if (param_1[2] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fb8));
      return 0xffffff92;
    }
    if (param_1[3] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fb4));
      return 0xffffff92;
    }
    if (param_1[4] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fb0));
      return 0xffffff92;
    }
    if (param_1[5] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fac));
      return 0xffffff92;
    }
    if (param_1[6] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fa8));
      return 0xffffff92;
    }
    if (param_1[7] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fa4));
      return 0xffffff92;
    }
    if (param_1[8] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fa0));
      return 0xffffff92;
    }
    if (param_1[9] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f9c));
      return 0xffffff92;
    }
    if (param_1[10] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f98));
      return 0xffffff92;
    }
    if (param_1[0xb] == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f94));
      return 0xffffff92;
    }
  }
  return 0;
}



//==== 00632068  ns=Global  size=0xbc
// sig: undefined FUN_00632068(void)
// callers(1): 00632124 FUN_00632124
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00671358: 'common/snd_stream.cpp' | 00671718: '%s(%d) : sndsi_FreeStreamBuffer: but not owner or thief! streamHandler = %p\n'

void FUN_00632068(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x6ac);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == param_1) {
      iVar2 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
      iVar3 = piVar1[1];
      piVar1[1] = 0;
      *piVar1 = iVar3;
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
    }
    else if (piVar1[1] == param_1) {
      iVar2 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
      piVar1[1] = 0;
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
    }
    else {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f90));
    }
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  return;
}



//==== 00632124  ns=Global  size=0x5c
// sig: undefined FUN_00632124(void)
// callers(1): 00632a38 FUN_00632a38
// callees(1): 00632068 FUN_00632068

void FUN_00632124(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b044;
  if (*(char *)(param_1 + 0x6b0) != '\0') {
    FUN_00632068();
    *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x40) = *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x40) + 1;
    *(undefined1 *)(param_1 + 0x6b0) = 0;
  }
  return;
}



//==== 00632180  ns=Global  size=0x64
// sig: undefined FUN_00632180(void)
// callers(1): 00505954 FUN_00505954
// callees(0): 

undefined4 FUN_00632180(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffff9;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x28)) {
    *param_1 = 0x28;
    param_1[7] = 8;
    param_1[1] = 0x65;
    param_1[9] = 0;
    param_1[4] = 0x800;
    uVar1 = 0;
    param_1[2] = -1;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
  }
  return uVar1;
}



//==== 006321e4  ns=Global  size=0x44
// sig: undefined FUN_006321e4(void)
// callers(2): 00632228 FUN_00632228; 00633a30 FUN_00633a30
// callees(1): 005d0140 libc::memset

void FUN_006321e4(undefined4 *param_1)

{
  libc::memset(param_1,0,0x198);
  *param_1 = 0x5afe2b46;
  return;
}



//==== 00632228  ns=Global  size=0x64
// sig: undefined FUN_00632228(void)
// callers(3): 00633628 FUN_00633628; 00633a30 FUN_00633a30; 00635a6c FUN_00635a6c
// callees(1): 006321e4 FUN_006321e4

int FUN_00632228(int param_1)

{
  FUN_006321e4(param_1);
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(int *)(param_1 + 400) = param_1 + 0x198;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 8;
  return param_1;
}



//==== 0063228c  ns=Global  size=0x50
// sig: undefined FUN_0063228c(void)
// callers(2): 00632ccc FUN_00632ccc; 006330c8 FUN_006330c8
// callees(1): 005d0140 libc::memset

void FUN_0063228c(int param_1,undefined4 param_2)

{
  libc::memset(param_1,0,0x2e0);
  *(undefined1 *)(param_1 + 0x2dc) = 0x1e;
  *(undefined4 *)(param_1 + 0x2b8) = param_2;
  return;
}



//==== 006322dc  ns=Global  size=0x80
// sig: undefined FUN_006322dc(void)
// callers(1): 00633a30 FUN_00633a30
// callees(3): 00630e78 FUN_00630e78; 00631074 FUN_00631074; 0063a390 FUN_0063a390

void FUN_006322dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00631074();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0063a390(puVar1);
    *puVar1 = 0;
    if ((*(byte *)((int)puVar1 + 0x11) & 4) != 0) {
      FUN_00630e78(puVar1);
      return;
    }
  }
  return;
}



//==== 0063235c  ns=Global  size=0xa8
// sig: undefined FUN_0063235c(void)
// callers(2): 00632508 FUN_00632508; 006344a0 FUN_006344a0
// callees(1): 00609078 FUN_00609078

uint FUN_0063235c(uint param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(param_3 * 4 + param_4);
  if ((*param_2 & 8) == 0) {
    return param_1;
  }
  uVar1 = FUN_00609078((double)*pfVar2,param_1,param_2[param_3 + 0x11],pfVar2,
                       *(undefined4 *)(param_3 * 4 + param_5));
  return param_1 & (int)-(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) >> 0x1f;
}



//==== 00632404  ns=Global  size=0x104
// sig: undefined FUN_00632404(void)
// callers(2): 00632508 FUN_00632508; 006344a0 FUN_006344a0
// callees(2): 005d0140 libc::memset; 00607dcc FUN_00607dcc

uint FUN_00632404(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined1 local_110 [224];
  
  if ((*param_2 & 0x10) == 0) {
    return param_1;
  }
  libc::memset(local_110,0,0xdc);
  uVar1 = FUN_00607dcc(param_1,local_110);
  return param_1 & (int)-(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) >> 0x1f;
}



//==== 00632508  ns=Global  size=0x16c
// sig: undefined FUN_00632508(void)
// callers(1): 00634dfc FUN_00634dfc
// callees(3): 00608578 FUN_00608578; 0063235c FUN_0063235c; 00632404 FUN_00632404

int FUN_00632508(int param_1,uint *param_2,ulonglong param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (int)((param_3 & 0x3fffffff) << 2);
  if (((*param_2 & 4) == 0) ||
     (iVar1 = FUN_00608578((double)*(float *)((int)param_2 + iVar1 + 4),
                           (double)*(float *)(param_4 + iVar1),param_1,param_2,param_3,
                           *(undefined4 *)(param_5 + iVar1)), iVar1 != 0)) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_0063235c(param_1,param_2,param_3 & 0xffffffff,param_4,param_5);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_00632404(param_1,param_2,param_3 & 0xffffffff,param_4,param_5), iVar1 != 0)) {
      return param_1;
    }
  }
  return 0;
}



//==== 00632674  ns=Global  size=0x11c
// sig: undefined FUN_00632674(void)
// callers(2): 0011cd1c music::music_Stop; 00636718 FUN_00636718
// callees(3): 006084f4 FUN_006084f4; 00631058 FUN_00631058; 0063f8c4 FUN_0063f8c4

void FUN_00632674(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
  if (0 < *(int *)(iVar2 + 0xa0)) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      while( true ) {
        iVar6 = iVar6 + 1;
        puVar3 = (undefined4 *)(iVar7 + *(int *)(iVar2 + 0x9c));
        iVar7 = iVar7 + 0x58c;
        if (*(char *)((int)puVar3 + 0x245) == '\0') break;
        FUN_006084f4(*puVar3,1);
        iVar4 = *(int *)(iVar2 + 0xa0);
        if (iVar4 <= iVar6) goto LAB_00632700;
      }
      iVar4 = *(int *)(iVar2 + 0xa0);
    } while (iVar6 < iVar4);
LAB_00632700:
    if (0 < iVar4) {
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar4 = iVar7 + *(int *)(iVar2 + 0x9c);
        cVar1 = *(char *)(iVar4 + 0x245);
        while ((cVar1 != '\0' && (iVar5 = FUN_00631058(iVar4), iVar5 != 0))) {
          FUN_0063f8c4(100000);
          cVar1 = *(char *)(iVar4 + 0x245);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x58c;
      } while (iVar6 < *(int *)(iVar2 + 0xa0));
    }
  }
  return;
}



//==== 00632790  ns=Global  size=0x2a8
// sig: undefined FUN_00632790(void)
// callers(2): 00632a38 FUN_00632a38; 006332dc FUN_006332dc
// callees(3): 005c5ad0 libc::memcpy; 0061c280 FUN_0061c280; 00631058 FUN_00631058

int FUN_00632790(double param_1,void *param_2)

{
  int iVar1;
  uint *__src;
  int iVar2;
  undefined8 in_r8;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  
  iVar1 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
  if (0 < *(int *)(iVar1 + 0xa0)) {
    iVar3 = 0;
    dVar7 = (double)*(float *)(PTR_PTR_0071b044 + -0x7fe4);
    iVar5 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar5 + *(int *)(iVar1 + 0x9c);
      iVar5 = iVar5 + 0x58c;
      dVar8 = dVar7;
      iVar2 = FUN_00631058(param_1,iVar4);
      param_1 = dVar7;
      dVar7 = param_1;
      if ((iVar2 == 0) &&
         (iVar2 = FUN_0061c280(iVar4,1,4,0x58c,1,in_r8,0,*(undefined1 *)((int)param_2 + 4)),
         param_1 = extraout_f1, iVar2 != 0)) {
        *(undefined1 *)(iVar2 + 0x584) = 1;
        *(undefined4 *)(iVar2 + 0x580) = 0;
        *(undefined4 *)(iVar2 + 0x238) = 0;
        *(undefined1 *)(iVar2 + 0x588) = 0;
        *(undefined1 *)(iVar2 + 0x587) = 1;
        *(undefined1 *)(iVar2 + 0x586) = 1;
        *(undefined1 *)(iVar2 + 0x244) = 0;
        *(undefined1 *)(iVar2 + 0x589) = 0;
        *(undefined1 *)(iVar2 + 0x245) = 0;
        *(undefined4 *)(iVar2 + 0x23c) = 0;
        *(undefined4 *)(iVar2 + 0x57c) = 0;
        *(undefined1 *)(iVar2 + 0x58a) = 0;
        *(undefined1 *)(iVar2 + 0x585) = 0;
        libc::memcpy((void *)(iVar2 + 0x248),param_2,0x1b0);
        __src = (uint *)(iVar2 + 600);
        if ((*__src & 4) == 0) {
          lVar6 = 0x10;
          iVar3 = 0;
          do {
            *(float *)((int)__src + iVar3 + 4) = (float)dVar8;
            lVar6 = lVar6 + -1;
            iVar3 = iVar3 + 4;
          } while (lVar6 != 0);
        }
        if ((*__src & 8) == 0) {
          lVar6 = 0x10;
          iVar3 = 0;
          do {
            *(undefined4 *)((int)__src + iVar3 + 0x44) = 0;
            lVar6 = lVar6 + -1;
            iVar3 = iVar3 + 4;
          } while (lVar6 != 0);
        }
        if ((*__src & 0x10) == 0) {
          lVar6 = 0x10;
          iVar3 = 0;
          do {
            *(undefined4 *)((int)__src + iVar3 + 0x84) = 0;
            lVar6 = lVar6 + -1;
            iVar3 = iVar3 + 4;
          } while (lVar6 != 0);
        }
        libc::memcpy((void *)(iVar2 + 0x3f8),__src,0xc4);
        iVar3 = 0;
        lVar6 = 0x10;
        do {
          iVar5 = iVar2 + iVar3;
          iVar3 = iVar3 + 4;
          *(undefined4 *)(iVar5 + 0x4bc) = 0;
          *(undefined4 *)(iVar5 + 0x4fc) = 0;
          *(undefined4 *)(iVar5 + 0x53c) = 0;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        *(undefined4 *)(iVar2 + 0x240) = 1;
        *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
        return iVar2;
      }
    } while (iVar3 < *(int *)(iVar1 + 0xa0));
  }
  return 0;
}



//==== 00632a38  ns=Global  size=0x294
// sig: undefined FUN_00632a38(void)
// callers(3): 006332dc FUN_006332dc; 00635a6c FUN_00635a6c; 00635d10 FUN_00635d10
// callees(6): 006084f4 FUN_006084f4; 00631150 FUN_00631150; 00632124 FUN_00632124; 00632790 FUN_00632790; 00636f6c FUN_00636f6c; 0063e9c4 FUN_0063e9c4
// strings: 00632ad4: '}=KxB' (raw)

int FUN_00632a38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  
  puVar5 = PTR_PTR_0071b044;
  iVar6 = FUN_00632790();
  if (iVar6 != 0) {
    if (0 < (int)**(uint **)(puVar5 + -0x7fe8)) {
      uVar11 = (ulonglong)**(uint **)(puVar5 + -0x7fe8);
      cVar8 = *(char *)(**(int **)(puVar5 + -0x7ff4) + 0x6b0);
      iVar4 = **(int **)(puVar5 + -0x7ff4);
      while (cVar8 != '\0') {
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_00632adc;
        cVar8 = *(char *)(iVar4 + 0x2608);
        iVar4 = iVar4 + 0x1f58;
      }
      iVar1 = *(int *)(puVar5 + -0x7ffc);
      *(undefined1 *)(iVar4 + 0x6b0) = 1;
      *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + 1;
      if ((int)*(uint *)(iVar1 + 0xac) < 1) {
        iVar9 = 0;
        cVar8 = '\x7f';
LAB_00632c54:
        if ((*(char *)(param_1 + 5) <= cVar8) || (iVar9 == 0)) {
          FUN_00632124(iVar4);
          FUN_00631150(iVar6);
          return 0;
        }
        *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + 1;
        piVar10 = *(int **)(iVar9 + 0x6ac);
        uVar3 = *(undefined4 *)(iVar9 + 0x6a8);
        piVar10[1] = iVar4;
        puVar7 = (undefined4 *)FUN_0063e9c4(uVar3);
        FUN_006084f4(*puVar7,1);
      }
      else {
        uVar11 = (ulonglong)*(uint *)(iVar1 + 0xac);
        cVar8 = '\x7f';
        iVar9 = 0;
        iVar2 = **(int **)(iVar1 + 0xa8);
        piVar10 = *(int **)(iVar1 + 0xa8);
        while (iVar2 != 0) {
          if ((((piVar10[1] == 0) && (*(char *)(iVar2 + 0x6b3) < cVar8)) &&
              ((*(uint *)(iVar2 + 0x1ed0) & 1) == 0)) && (*(int **)(iVar2 + 0x6ac) == piVar10)) {
            cVar8 = *(char *)(iVar2 + 0x6b3);
            iVar9 = iVar2;
          }
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_00632c54;
          iVar2 = piVar10[4];
          piVar10 = piVar10 + 4;
        }
        iVar9 = *(int *)(iVar1 + 0x34);
        *piVar10 = iVar4;
        *(int *)(iVar1 + 0x34) = iVar9 + 1;
      }
      iVar9 = piVar10[3];
      *(int **)(iVar4 + 0x6ac) = piVar10;
      FUN_00636f6c(iVar4 + 8,piVar10[2],iVar9,*(undefined1 *)(iVar1 + 0x238));
      *(int *)(iVar6 + 0x23c) = iVar4;
      *(int *)(iVar4 + 0x6a8) = iVar6;
      return iVar4;
    }
LAB_00632adc:
    FUN_00631150(iVar6);
  }
  return 0;
}



//==== 00632ccc  ns=Global  size=0x60
// sig: undefined FUN_00632ccc(void)
// callers(3): 00633824 FUN_00633824; 00635a6c FUN_00635a6c; 00635d10 FUN_00635d10
// callees(2): 0063228c FUN_0063228c; 006370e4 FUN_006370e4

int FUN_00632ccc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006370e4(param_1 + 0x6b8);
  iVar1 = iVar1 * 0x2e0 + param_1 + 0x6c8;
  FUN_0063228c(iVar1,param_1);
  return iVar1;
}



//==== 00632d2c  ns=Global  size=0x100
// sig: undefined FUN_00632d2c(void)
// callers(2): 00633628 FUN_00633628; 00633978 FUN_00633978
// callees(2): 005cccec libc::strcpy; 0061948c 989snd::snd_Printf
// strings: 00671768: '%s(%d) : sndsi_SetupFileInfoFromParseParams failed! FileToken not allocated.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_00632d2c(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b044;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x5afe2b46)) {
    if ((*(byte *)((int)param_1 + 0x11) & 8) == 0) {
      param_1[100] = *param_2;
    }
    else {
      libc::strcpy(param_1 + 0x66,*param_2,0xff);
    }
    if (param_2[1] == 0) {
      param_1[2] = **(int **)(puVar2 + -0x7ff0);
    }
    else {
      param_1[2] = param_2[1];
    }
    iVar1 = param_2[6];
    *(char *)(param_1 + 4) = (char)param_2[2];
    param_1[3] = iVar1;
    return 0;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f8c));
  return 0xffffff95;
}



//==== 00632e2c  ns=Global  size=0x94
// sig: undefined FUN_00632e2c(void)
// callers(2): 00635a6c FUN_00635a6c; 00635d10 FUN_00635d10
// callees(2): 0061aa54 FUN_0061aa54; 0061b0c8 FUN_0061b0c8

void FUN_00632e2c(undefined4 *param_1,uint *param_2)

{
  if ((*param_2 & 8) != 0) {
    param_1[1] = param_1[1] | 0x40000;
  }
  FUN_0061aa54(param_1);
  param_1[0x90] = *param_1;
  if ((*param_2 & 1) != 0) {
    FUN_0061b0c8(param_1,0,2);
  }
  return;
}



//==== 00632ec0  ns=Global  size=0x148
// sig: undefined FUN_00632ec0(void)
// callers(3): 00633008 FUN_00633008; 006346f8 FUN_006346f8; 00639264 FUN_00639264
// callees(3): 0061addc FUN_0061addc; 0061ae90 FUN_0061ae90; 006311bc FUN_006311bc

uint FUN_00632ec0(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x57c);
  uVar2 = *(undefined4 *)(param_1 + 0x228);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x1e79);
    if (param_3 < *(byte *)(iVar1 + 0x1e79)) {
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      piVar6 = (int *)(iVar1 + 0x1dc8);
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        FUN_006311bc(*(undefined4 *)(iVar1 + 0x6a8),param_2,uVar4,uVar2);
        uVar4 = uVar5;
      } while (uVar3 != uVar5);
    }
    uVar4 = *param_2;
    if ((uVar4 & 4) != 0) {
      FUN_0061ae90(param_1);
      uVar4 = *param_2;
    }
    if ((uVar4 & 0x18) != 0) {
      FUN_0061addc(param_1);
      return uVar3;
    }
  }
  return uVar3;
}



//==== 00633008  ns=Global  size=0x58
// sig: undefined FUN_00633008(void)
// callers(2): 00635d10 FUN_00635d10; 0063be38 FUN_0063be38
// callees(2): 0061c628 FUN_0061c628; 00632ec0 FUN_00632ec0

void FUN_00633008(int param_1)

{
  FUN_0061c628(param_1,param_1 + 0x31c);
  FUN_00632ec0(param_1,param_1 + 600,0x10);
  return;
}



//==== 00633060  ns=Global  size=0x68
// sig: undefined FUN_00633060(void)
// callers(1): 006332dc FUN_006332dc
// callees(2): 0061a8d0 FUN_0061a8d0; 0061aa54 FUN_0061aa54

void FUN_00633060(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  FUN_0061aa54(param_2);
  FUN_0061a8d0(param_1,*param_2);
  cVar1 = *(char *)(param_1 + 0x244);
  param_2[0x8e] = param_1;
  *(char *)(param_1 + 0x244) = cVar1 + '\x01';
  return;
}



//==== 006330c8  ns=Global  size=0xc0
// sig: undefined FUN_006330c8(void)
// callers(2): 00633188 FUN_00633188; 006367dc FUN_006367dc
// callees(3): 005d0140 libc::memset; 0063228c FUN_0063228c; 00637248 FUN_00637248

void FUN_006330c8(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_0071b044;
  libc::memset(param_1 + 0x6b8,0,0x17c8);
  *(undefined4 *)(param_1 + 0x1e4c) = *(undefined4 *)(puVar2 + -0x7fe4);
  *(undefined4 *)(param_1 + 0x1e08) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e68) = 10;
  iVar3 = 0;
  FUN_00637248(param_1 + 0x6b8,8);
  iVar4 = param_1 + 0x6c8;
  do {
    FUN_0063228c(iVar4,param_1);
    bVar1 = iVar3 != 7;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2e0;
  } while (bVar1);
  return;
}



//==== 00633188  ns=Global  size=0xcc
// sig: undefined FUN_00633188(void)
// callers(1): 00633254 FUN_00633254
// callees(4): 005d0140 libc::memset; 0060fec8 FUN_0060fec8; 006330c8 FUN_006330c8; 00636f14 FUN_00636f14

void FUN_00633188(int param_1)

{
  FUN_00636f14(param_1 + 8);
  FUN_006330c8(param_1);
  libc::memset(param_1 + 0x1ee8,0,0x68);
  *(undefined4 *)(param_1 + 0x1f54) = 0;
  *(undefined4 *)(param_1 + 0x1e98) = 0;
  *(undefined1 *)(param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0x1e94) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6b1) = 0;
  *(undefined1 *)(param_1 + 0x6b2) = 0;
  *(undefined8 *)(param_1 + 0x1e88) = 0;
  *(undefined4 *)(param_1 + 0x1e90) = 0;
  *(undefined4 *)(param_1 + 0x1ed8) = 0;
  *(undefined4 *)(param_1 + 0x1edc) = 0;
  *(undefined4 *)(param_1 + 0x1ee0) = 0;
  *(undefined4 *)(param_1 + 0x1ee4) = 0;
  *(undefined4 *)(param_1 + 0x1e9c) = 0;
  *(undefined4 *)(param_1 + 0x1ec0) = 0;
  *(undefined4 *)(param_1 + 0x1f50) = 0;
  FUN_0060fec8(0x80ff,0xdfe0,param_1 + 0x1e20);
  return;
}



//==== 00633254  ns=Global  size=0x88
// sig: undefined FUN_00633254(void)
// callers(3): 006332dc FUN_006332dc; 00635a6c FUN_00635a6c; 00635d10 FUN_00635d10
// callees(1): 00633188 FUN_00633188

void FUN_00633254(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_00633188();
  *(byte *)(param_1 + 0x6b5) = (byte)(*param_2 >> 3) & 1;
  uVar1 = *param_2 >> 1 & 1;
  *(uint *)(param_1 + 0x1ed0) = uVar1;
  *(uint *)(param_1 + 0x1ed0) = (uint)(((ulonglong)(*param_2 >> 4) & 1) << 7) | uVar1;
  *(undefined1 *)(param_1 + 0x6b3) = *(undefined1 *)((int)param_2 + 5);
  uVar1 = param_2[2];
  *(undefined4 *)(*(int *)(param_1 + 0x6a8) + 0x21c) = param_3;
  *(uint *)(param_1 + 0x1ed4) = uVar1;
  return;
}



//==== 006332dc  ns=Global  size=0x278
// sig: undefined FUN_006332dc(void)
// callers(3): 006332dc FUN_006332dc; 00635d10 FUN_00635d10; 0063be38 FUN_0063be38
// callees(7): 005c5ad0 libc::memcpy; 0061948c 989snd::snd_Printf; 00632790 FUN_00632790; 00632a38 FUN_00632a38; 00633060 FUN_00633060; 00633254 FUN_00633254; 006332dc FUN_006332dc
// strings: 006717b8: '%s(%d) ERROR Could not allocate enough stream handlers.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_006332dc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar9 = PTR_PTR_0071b044;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar2 = *(int *)(param_2 + 0x6a8);
  iVar10 = FUN_00632790(iVar2 + 0x248);
  if (iVar10 != 0) {
    *(undefined4 *)(iVar2 + 0x23c) = 0;
    *(int *)(param_2 + 0x6a8) = iVar10;
    *(int *)(iVar2 + 0x57c) = param_2;
    *(int *)(iVar10 + 0x23c) = param_2;
    FUN_00633060(iVar2,iVar10);
    if ((param_4 < 2) || (iVar10 = FUN_006332dc(param_1,param_2,param_4,1,param_5 + 1), -1 < iVar10)
       ) {
      if (1 < param_3) {
        iVar10 = 1;
        do {
          iVar10 = iVar10 + 1;
          iVar11 = FUN_00632a38(*(int *)(param_2 + 0x6a8) + 0x248);
          if (iVar11 == 0) {
            989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7f88));
            return 0xffffffff;
          }
          bVar1 = *(byte *)(param_1 + 0x17c1);
          *(byte *)(param_1 + 0x17c1) = bVar1 + 1;
          iVar3 = *(int *)(iVar11 + 0x6a8);
          *(int *)(param_1 + (uint)bVar1 * 4 + 0x1710) = iVar11;
          *(undefined1 *)(iVar3 + 0x245) = 0;
          FUN_00633254(iVar11,iVar2 + 0x248,*(undefined4 *)(*(int *)(param_2 + 0x6a8) + 0x21c));
          iVar4 = *(int *)(param_2 + 0x6a8);
          uVar5 = *(undefined4 *)(param_2 + 0x1edc);
          uVar6 = *(undefined4 *)(param_2 + 0x1ee0);
          uVar7 = *(undefined4 *)(param_2 + 0x1ed0);
          *(undefined4 *)(iVar11 + 0x1ed8) = *(undefined4 *)(param_2 + 0x1ed8);
          *(undefined4 *)(iVar11 + 0x1edc) = uVar5;
          *(undefined4 *)(iVar11 + 0x1ee0) = uVar6;
          *(undefined4 *)(iVar11 + 0x1ed0) = uVar7;
          libc::memcpy((void *)(*(int *)(iVar11 + 0x6a8) + 0x168),(void *)(iVar4 + 0x168),0xb4);
          iVar4 = *(int *)(param_2 + 0x6a8);
          iVar8 = *(int *)(iVar11 + 0x6a8);
          uVar7 = *(undefined4 *)(iVar4 + 0x138);
          uVar5 = *(undefined4 *)(iVar4 + 0x128);
          uVar6 = *(undefined4 *)(iVar4 + 0x160);
          *(undefined4 *)(iVar8 + 0x150) = *(undefined4 *)(iVar4 + 0x150);
          *(undefined4 *)(iVar8 + 0x128) = uVar5;
          *(undefined4 *)(iVar8 + 0x138) = uVar7;
          *(undefined4 *)(iVar8 + 0x160) = uVar6;
          FUN_00633060(iVar2,iVar3);
          if ((param_4 >= 2) &&
             (iVar11 = FUN_006332dc(param_1,iVar11,param_4,1,param_5 + 1), iVar11 < 0)) {
            return 0xffffffff;
          }
        } while (param_3 != iVar10);
      }
      *(char *)(iVar2 + 0x587) = (char)param_4;
      *(char *)(iVar2 + 0x586) = (char)param_3;
      return 0;
    }
  }
  return 0xffffffff;
}



//==== 00633554  ns=Global  size=0xd4
// sig: undefined FUN_00633554(void)
// callers(1): 00633628 FUN_00633628
// callees(5): 0061948c 989snd::snd_Printf; 00637054 FUN_00637054; 006370e4 FUN_006370e4; 0063714c FUN_0063714c; 0063fa08 FUN_0063fa08
// strings: 006717f8: '%s(%d) : ERROR Parsing queue is full.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_00633554(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  
  puVar2 = PTR_PTR_0071b044;
  uVar5 = (ulonglong)*(uint *)(PTR_PTR_0071b044 + -0x7f84);
  iVar4 = FUN_00637054(uVar5);
  if (iVar4 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f80));
    return 1;
  }
  uVar3 = FUN_006370e4(uVar5);
  piVar1 = (int *)((int)((uVar3 & 0xffffffff) << 2) + *(int *)(puVar2 + -0x7ffc) + 0xcc);
  *(int **)(param_2 + 700) = piVar1;
  *piVar1 = param_2;
  FUN_0063714c(uVar5);
  FUN_0063fa08(uVar5 + 0x114);
  return 0;
}



//==== 00633628  ns=Global  size=0x1fc
// sig: undefined FUN_00633628(void)
// callers(2): 00633824 FUN_00633824; 00635d10 FUN_00635d10
// callees(11): 005c5ad0 libc::memcpy; 005cccec libc::strcpy; 0061948c 989snd::snd_Printf; 00631124 FUN_00631124; 00632228 FUN_00632228; 00632d2c FUN_00632d2c; 00633554 FUN_00633554; 0063714c FUN_0063714c; 00639c80 FUN_00639c80; 0063a134 FUN_0063a134; 0063f8e0 FUN_0063f8e0
// strings: 00671820: '%s(%d) ERROR Background parsing thread has died!\n' | 00671358: 'common/snd_stream.cpp' | 00671858: '%s(%d) : ERROR Allocating MIDI buffer for copy of file token.\n'

undefined4
FUN_00633628(int param_1,int param_2,undefined4 *param_3,void *param_4,void *param_5,int param_6)

{
  undefined *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_PTR_0071b044;
  iVar6 = *(int *)(param_1 + 0x57c);
  if (param_3 == (undefined4 *)0x0) {
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)((int)param_5 + 0x2d8) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)((int)param_5 + 0x2cc) = uVar3;
    }
  }
  else {
    uVar3 = *param_3;
    *(undefined4 *)((int)param_5 + 0x2d8) = param_3[1];
    *(undefined4 *)((int)param_5 + 0x2cc) = uVar3;
  }
  if (param_6 != 0) {
    FUN_0063714c(iVar6 + 0x6b8);
  }
  if (param_4 == (void *)0x0) {
    FUN_00631124((int)param_5 + 0x298,param_2);
    iVar4 = FUN_00632228(param_5);
    uVar3 = *(undefined4 *)(puVar1 + -0x7f7c);
    *(undefined1 *)(iVar4 + 0x12) = 0;
    iVar5 = FUN_0063f8e0(uVar3);
    if (iVar5 == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f78));
      uVar3 = 0xffffffff;
    }
    else {
      iVar4 = FUN_00632d2c(iVar4,(int)param_5 + 0x298);
      if ((iVar4 == 0) && (iVar6 = FUN_00633554(iVar6,param_5), iVar6 == 0)) {
        return 0;
      }
      uVar3 = 0xffffffff;
    }
  }
  else {
    pvVar2 = libc::memcpy(param_5,param_4,0x198);
    if (*(int *)((int)param_4 + 0x78) != 0) {
      pvVar2 = (void *)FUN_00639c80(pvVar2);
      *(void **)((int)param_5 + 0x78) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f74));
        return 0xffffffff;
      }
      libc::memcpy(pvVar2,*(void **)((int)param_4 + 0x78),**(size_t **)(puVar1 + -0x7f70));
    }
    libc::strcpy((int)param_5 + 0x198,*(undefined4 *)((int)param_4 + 400),0xff);
    *(int *)((int)param_5 + 400) = (int)param_5 + 0x198;
    FUN_0063a134(iVar6 + 0x6b8);
    uVar3 = 0;
  }
  return uVar3;
}



//==== 00633824  ns=Global  size=0x154
// sig: undefined FUN_00633824(void)
// callers(1): 00635ff8 FUN_00635ff8
// callees(5): 0061948c 989snd::snd_Printf; 00632ccc FUN_00632ccc; 00633628 FUN_00633628; 00637194 FUN_00637194; 006371fc FUN_006371fc
// strings: 006718b8: '%s(%d) ERROR Inserting into the middle of a queue is not currently supported!\n' | 00671358: 'common/snd_stream.cpp' | 00671898: '%s(%d) : Queue limit exceeded.\n'

int FUN_00633824(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar3 = PTR_PTR_0071b044;
  iVar1 = *(int *)(param_1 + 0x57c);
  iVar2 = iVar1 + 0x6b8;
  if ((6 < param_2) && (iVar4 = FUN_00637194(iVar2), iVar4 != 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f6c));
    return -1;
  }
  uVar5 = FUN_006371fc(iVar2);
  if (uVar5 <= param_2) {
    uVar6 = FUN_00632ccc(iVar1);
    uVar5 = FUN_00633628(param_1,param_3,param_4,param_5,uVar6,1);
    return (int)(((int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f ^ uVar5)) >> 0x1f;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
  return -1;
}



//==== 00633978  ns=Global  size=0xb8
// sig: undefined FUN_00633978(void)
// callers(1): 00633a30 FUN_00633a30
// callees(3): 0061948c 989snd::snd_Printf; 00632d2c FUN_00632d2c; 0063ba6c FUN_0063ba6c
// strings: 00671908: '%s(%d) : Could not open and parse sound file: %s.\n' | 00671358: 'common/snd_stream.cpp'

int FUN_00633978(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar2 = FUN_00632d2c();
  if ((iVar2 == 0) && (iVar2 = FUN_0063ba6c(param_1,*(undefined8 *)(param_2 + 0x10),0), iVar2 != 0))
  {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f64));
    return iVar2;
  }
  return iVar2;
}



//==== 00633a30  ns=Global  size=0x1c8
// sig: undefined FUN_00633a30(void)
// callers(0): 
// callees(6): 00630d9c FUN_00630d9c; 00631074 FUN_00631074; 006321e4 FUN_006321e4; 00632228 FUN_00632228; 006322dc FUN_006322dc; 00633978 FUN_00633978

int * FUN_00633a30(int param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  
  puVar3 = PTR_PTR_0071b044;
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  *param_2 = 0;
  if (param_1 == 0) {
    *param_2 = -0x6e;
    return (int *)0x0;
  }
  iVar6 = *(int *)(puVar3 + -0x7ffc);
  piVar4 = *(int **)(iVar6 + 0xb8);
  if (*(uint *)(iVar6 + 0xb4) != 0) {
    if (*piVar4 != 0) {
      uVar8 = (ulonglong)*(uint *)(iVar6 + 0xb4);
      do {
        piVar4 = (int *)((int)piVar4 + *(int *)(iVar6 + 0xb0));
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_00633ad8;
      } while (*piVar4 != 0);
    }
    uVar1 = *(uint *)(iVar6 + 0xb0);
    bVar2 = false;
joined_r0x00633b0c:
    if (uVar1 < 0x298) {
      FUN_006321e4(piVar4);
    }
    else {
      FUN_00632228(piVar4);
    }
    if (bVar2) {
      *(byte *)((int)piVar4 + 0x11) = *(byte *)((int)piVar4 + 0x11) | 4;
    }
    uVar5 = FUN_00631074(piVar4);
    iVar6 = FUN_00633978(uVar5,param_1);
    piVar7 = piVar4;
    if (iVar6 < 0) {
      piVar7 = (int *)0x0;
      FUN_006322dc(piVar4);
      *param_2 = iVar6;
    }
    return piVar7;
  }
LAB_00633ad8:
  if ((*(uint *)(param_1 + 8) & 2) != 0) {
    bVar2 = true;
    piVar4 = (int *)FUN_00630d9c(*(undefined4 *)(iVar6 + 0xb0),8,0x200);
    if (piVar4 != (int *)0x0) {
      uVar1 = *(uint *)(iVar6 + 0xb0);
      goto joined_r0x00633b0c;
    }
  }
  *param_2 = -0x72;
  return (int *)0x0;
}



//==== 00633bf8  ns=Global  size=0x104
// sig: undefined FUN_00633bf8(void)
// callers(5): 00633cfc FUN_00633cfc; 00634a14 FUN_00634a14; 00634ad4 FUN_00634ad4; 00634b94 FUN_00634b94; 00639264 FUN_00639264
// callees(2): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790
// strings: 00671358: 'common/snd_stream.cpp' | 00671990: '%s(%d) : ERROR bogus handle 0x%08X passed to SndStreamEx function.\n' | 00671940: '%s(%d) : ERROR non SndStreamEx handle 0x%08X passed to SndStreamEx function.\n'

ulonglong FUN_00633bf8(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 >> 0x10 & 0xff;
  if (((uint)(param_1 >> 0x18) & 0x1f) != 4) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f60));
    return 0;
  }
  iVar1 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
  if (uVar3 < *(uint *)(iVar1 + 0xa0)) {
    iVar2 = FUN_0061a790(param_1 & 0xffffffff,param_2,0xd1,param_1 & 0xffffffff);
    if ((iVar2 == 0) ||
       (uVar3 = uVar3 * 0x58c + (ulonglong)*(uint *)(iVar1 + 0x9c), (int)uVar3 != iVar2)) {
      return 0;
    }
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f5c));
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



//==== 00633cfc  ns=Global  size=0x74
// sig: undefined FUN_00633cfc(void)
// callers(12): 00633d70 FUN_00633d70; 00633e74 FUN_00633e74; 006344a0 FUN_006344a0; 006346f8 FUN_006346f8; 0063477c FUN_0063477c; 006348b4 FUN_006348b4; 006349a8 FUN_006349a8; 00634ffc FUN_00634ffc; 00635204 FUN_00635204; 00635400 FUN_00635400; 006354c4 FUN_006354c4; 00635ff8 FUN_00635ff8
// callees(2): 0061948c 989snd::snd_Printf; 00633bf8 FUN_00633bf8
// strings: 00671358: 'common/snd_stream.cpp' | 006719d8: '%s(%d) : ERROR SndStreamEx handle not top of tree.\n'

int FUN_00633cfc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar2 = FUN_00633bf8();
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x245) == '\0')) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f58));
    iVar2 = 0;
  }
  return iVar2;
}



//==== 00633d70  ns=Global  size=0x34
// sig: undefined FUN_00633d70(void)
// callers(9): 0063495c FUN_0063495c; 00635050 FUN_00635050; 0063511c FUN_0063511c; 00635544 FUN_00635544; 006364a0 FUN_006364a0; 00637a38 FUN_00637a38; 0063933c FUN_0063933c; 006395ec FUN_006395ec; 006397c4 FUN_006397c4
// callees(1): 00633cfc FUN_00633cfc

undefined4 FUN_00633d70(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00633cfc();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x57c);
  }
  return uVar1;
}



//==== 00633da4  ns=Global  size=0x90
// sig: undefined FUN_00633da4(void)
// callers(36): 00633e74 FUN_00633e74; 00633ec0 FUN_00633ec0; 00634044 FUN_00634044; 006341d4 FUN_006341d4; 00634288 FUN_00634288; 00634314 FUN_00634314; 006343bc FUN_006343bc; 006344a0 FUN_006344a0; 006346f8 FUN_006346f8; 0063477c FUN_0063477c; 006348b4 FUN_006348b4; 0063495c FUN_0063495c; 006349a8 FUN_006349a8; 00634a14 FUN_00634a14; 00634ad4 FUN_00634ad4; 00634b94 FUN_00634b94; 00634ffc FUN_00634ffc; 00635050 FUN_00635050; 0063511c FUN_0063511c; 00635204 FUN_00635204; 00635400 FUN_00635400; 006354c4 FUN_006354c4; 00635544 FUN_00635544; 006355bc FUN_006355bc; 006356dc FUN_006356dc
// callees(2): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock
// strings: 00671a10: 'ERROR: sndi_MySynthUnlock: Attempt to unlock when not locked!'

void FUN_00633da4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
  if (0 < *(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x58)) {
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
    989snd::snd_SynthUnlock();
    return;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f54));
  *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
  989snd::snd_SynthUnlock();
  return;
}



//==== 00633e34  ns=Global  size=0x40
// sig: undefined FUN_00633e34(void)
// callers(32): 00633e74 FUN_00633e74; 00633ec0 FUN_00633ec0; 00634044 FUN_00634044; 006341d4 FUN_006341d4; 00634288 FUN_00634288; 00634314 FUN_00634314; 006343bc FUN_006343bc; 006344a0 FUN_006344a0; 006346f8 FUN_006346f8; 0063477c FUN_0063477c; 006348b4 FUN_006348b4; 0063495c FUN_0063495c; 006349a8 FUN_006349a8; 00634a14 FUN_00634a14; 00634ad4 FUN_00634ad4; 00634b94 FUN_00634b94; 00634ffc FUN_00634ffc; 00635050 FUN_00635050; 0063511c FUN_0063511c; 00635204 FUN_00635204; 00635400 FUN_00635400; 006354c4 FUN_006354c4; 00635544 FUN_00635544; 00635a6c FUN_00635a6c; 00635d10 FUN_00635d10
// callees(1): 006272e8 989snd::snd_SynthLock

void FUN_00633e34(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b044;
  989snd::snd_SynthLock();
  *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x54) = *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x54) + 1;
  return;
}



//==== 00633e74  ns=Global  size=0x4c
// sig: undefined FUN_00633e74(void)
// callers(0): 
// callees(3): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined1 FUN_00633e74(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  FUN_00633e34();
  uVar2 = 0;
  iVar1 = FUN_00633cfc(param_1);
  if (iVar1 != 0) {
    uVar2 = *(undefined1 *)(iVar1 + 0x586);
  }
  FUN_00633da4();
  return uVar2;
}



//==== 00633ec0  ns=Global  size=0x184
// sig: undefined FUN_00633ec0(void)
// callers(0): 
// callees(6): 006084f4 FUN_006084f4; 006095c8 FUN_006095c8; 00609a5c FUN_00609a5c; 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_00633ec0(undefined4 param_1,int param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar3 = PTR_PTR_0071b044;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != (uint *)0x0)) {
    FUN_00633e34();
    piVar1 = *(int **)(puVar3 + -0x7f4c);
    if ((*piVar1 == 0) && (uVar4 = 0, (*param_4 & 1) == 0)) {
      FUN_00633da4();
    }
    else {
      uVar4 = FUN_006095c8(param_1,param_2,param_3,0xffffffffffffffff);
      if (*piVar1 != 0) {
        FUN_00609a5c(uVar4);
        iVar2 = *piVar1;
        if (*(int *)(iVar2 + 0x1ec0) != 0) {
          FUN_006084f4(*(int *)(iVar2 + 0x1ec0),1);
          iVar2 = *piVar1;
        }
        *(undefined4 *)(iVar2 + 0x1ec0) = uVar4;
        *(uint *)(iVar2 + 0x1ec4) = *param_4;
        *(uint *)(iVar2 + 0x1ec8) = param_4[1];
        *(uint *)(iVar2 + 0x1ecc) = param_4[2];
      }
      FUN_00633da4();
    }
    return uVar4;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}



//==== 00634044  ns=Global  size=0x190
// sig: undefined FUN_00634044(void)
// callers(0): 
// callees(6): 006084f4 FUN_006084f4; 00609814 FUN_00609814; 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063eaac FUN_0063eaac
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_00634044(int param_1,short param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar3 = PTR_PTR_0071b044;
  if ((((param_1 != 0) && (-1 < param_2)) && (param_3 != 0)) && (param_4 != (uint *)0x0)) {
    FUN_00633e34();
    piVar1 = *(int **)(puVar3 + -0x7f4c);
    if ((*piVar1 == 0) && (uVar4 = 0, (*param_4 & 1) == 0)) {
      FUN_00633da4();
    }
    else {
      uVar4 = FUN_00609814(param_1,param_2,param_3,0xffffffffffffffff);
      if (*piVar1 != 0) {
        FUN_0063eaac(uVar4);
        iVar2 = *piVar1;
        if (*(int *)(iVar2 + 0x1ec0) != 0) {
          FUN_006084f4(*(int *)(iVar2 + 0x1ec0),1);
          iVar2 = *piVar1;
        }
        *(undefined4 *)(iVar2 + 0x1ec0) = uVar4;
        *(uint *)(iVar2 + 0x1ec4) = *param_4;
        *(uint *)(iVar2 + 0x1ec8) = param_4[1];
        *(uint *)(iVar2 + 0x1ecc) = param_4[2];
      }
      FUN_00633da4();
    }
    return uVar4;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}



//==== 006341d4  ns=Global  size=0xb4
// sig: undefined FUN_006341d4(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063ea18 FUN_0063ea18
// strings: 00671358: 'common/snd_stream.cpp' | 00671a70: '%s(%d) : ERROR g_masterClockStreamHandler is invalid!\n'

undefined4 FUN_006341d4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  puVar4 = PTR_PTR_0071b044;
  FUN_00633e34();
  piVar1 = *(int **)(puVar4 + -0x7f4c);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    puVar5 = (undefined4 *)FUN_0063ea18(*(undefined4 *)(iVar2 + 0x6a8));
    if (puVar5[0x15f] == *piVar1) {
      uVar3 = *puVar5;
      FUN_00633da4();
      return uVar3;
    }
    989snd::snd_Printf((char)*(undefined4 *)(puVar4 + -0x7f48));
  }
  FUN_00633da4();
  return 0;
}



//==== 00634288  ns=Global  size=0x8c
// sig: undefined FUN_00634288(void)
// callers(0): 
// callees(2): 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

void FUN_00634288(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b044;
  FUN_00633e34();
  puVar1 = *(undefined4 **)(puVar3 + -0x7f40);
  **(undefined4 **)(puVar3 + -0x7f44) = param_2;
  *puVar1 = param_3;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(puVar3 + -0x7f3c);
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
  }
  FUN_00633da4();
  return;
}



//==== 00634314  ns=Global  size=0xa8
// sig: undefined FUN_00634314(void)
// callers(0): 
// callees(2): 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

void FUN_00634314(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_0071b044;
  FUN_00633e34();
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)**(int **)(puVar5 + -0x7ff0);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = puVar1[5];
    uVar3 = puVar1[6];
    uVar4 = puVar1[7];
    param_1[4] = puVar1[4];
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar2 = puVar1[8];
    uVar3 = puVar1[9];
    uVar4 = puVar1[10];
    param_1[0xb] = puVar1[0xb];
    param_1[8] = uVar2;
    param_1[9] = uVar3;
    param_1[10] = uVar4;
  }
  FUN_00633da4();
  return;
}



//==== 006343bc  ns=Global  size=0xe4
// sig: undefined FUN_006343bc(void)
// callers(3): 005058a0 FUN_005058a0; 00505954 FUN_00505954; 006367dc FUN_006367dc
// callees(3): 00631ed0 FUN_00631ed0; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

void FUN_006343bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  
  puVar7 = PTR_PTR_0071b044;
  FUN_00633e34();
  if (param_1 != (undefined4 *)0x0) {
    iVar8 = FUN_00631ed0();
    if (-1 < iVar8) {
      puVar1 = *(undefined4 **)(puVar7 + -0x7f38);
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *puVar1 = *param_1;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar4 = param_1[7];
      puVar5 = *(undefined4 **)(puVar7 + -0x7ff0);
      puVar1[4] = param_1[4];
      puVar1[5] = uVar2;
      puVar1[6] = uVar3;
      puVar1[7] = uVar4;
      uVar2 = param_1[8];
      uVar3 = param_1[9];
      uVar4 = param_1[10];
      uVar6 = *(undefined4 *)(puVar7 + -0x7f38);
      puVar1[0xb] = param_1[0xb];
      *puVar5 = uVar6;
      puVar1[8] = uVar2;
      puVar1[9] = uVar3;
      puVar1[10] = uVar4;
    }
    FUN_00633da4();
    return;
  }
  **(undefined4 **)(puVar7 + -0x7ff0) = *(undefined4 *)(puVar7 + -0x7fec);
  FUN_00633da4(0);
  return;
}



//==== 006344a0  ns=Global  size=0x258
// sig: undefined FUN_006344a0(void)
// callers(0): 
// callees(5): 0063235c FUN_0063235c; 00632404 FUN_00632404; 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

uint FUN_006344a0(undefined4 param_1,uint *param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  
  puVar7 = PTR_PTR_0071b044;
  if (((param_2 == (uint *)0x0) || (param_4 == 0)) || (param_5 == 0)) {
    return 0;
  }
  FUN_00633e34();
  iVar8 = FUN_00633cfc(param_1);
  if ((iVar8 == 0) || (iVar3 = *(int *)(iVar8 + 0x57c), iVar3 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar11 = (uint)*(byte *)(iVar3 + 0x1e79);
    if (param_3 < *(byte *)(iVar3 + 0x1e79)) {
      uVar11 = param_3;
    }
    uVar12 = *param_2;
    if (((uVar12 & 4) != 0) && (uVar11 != 0)) {
      uVar15 = (ulonglong)uVar11;
      fVar1 = *(float *)(puVar7 + -0x7f2c);
      fVar2 = *(float *)(puVar7 + -0x7f34);
      iVar10 = 0;
      do {
        iVar5 = iVar10 + iVar8;
        pfVar6 = (float *)(iVar10 + param_4);
        if (*pfVar6 < fVar2) {
          *pfVar6 = fVar2;
        }
        *(undefined4 *)(iVar5 + 0x25c) = *(undefined4 *)((int)param_2 + iVar10 + 4);
        *(float *)(iVar5 + 0x4bc) =
             (*(float *)((int)param_2 + iVar10 + 4) - *(float *)(iVar5 + 0x3fc)) / (*pfVar6 * fVar1)
        ;
        uVar15 = uVar15 - 1;
        iVar10 = iVar10 + 4;
      } while (uVar15 != 0);
    }
    uVar9 = uVar11;
    if (((uVar12 & 0x18) != 0) && (uVar11 != 0)) {
      piVar14 = (int *)(iVar3 + 0x1dc8);
      uVar12 = 0;
      while( true ) {
        iVar8 = *piVar14;
        uVar13 = uVar12 + 1;
        piVar14 = piVar14 + 1;
        uVar4 = **(undefined4 **)(iVar8 + 0x6a8);
        uVar9 = FUN_0063235c(uVar4,param_2,uVar12,param_4,param_5);
        if (uVar9 == 0) break;
        uVar9 = FUN_00632404(uVar4,param_2,uVar12,param_4,param_5);
        if ((uVar9 == 0) || (uVar12 = uVar13, uVar9 = uVar11, uVar13 == uVar11)) break;
      }
    }
  }
  FUN_00633da4();
  return uVar9;
}



//==== 006346f8  ns=Global  size=0x84
// sig: undefined FUN_006346f8(void)
// callers(0): 
// callees(4): 00632ec0 FUN_00632ec0; 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined4 FUN_006346f8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    FUN_00633e34();
    iVar1 = FUN_00633cfc(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_00632ec0(iVar1,param_2,param_3);
    }
    FUN_00633da4();
  }
  return uVar2;
}



//==== 0063477c  ns=Global  size=0x138
// sig: undefined FUN_0063477c(void)
// callers(0): 
// callees(3): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined4 FUN_0063477c(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar7 = 0;
  if (param_2 != (undefined4 *)0x0) {
    FUN_00633e34();
    iVar3 = FUN_00633cfc(param_1);
    if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x57c), iVar3 == 0)) {
      uVar7 = 0;
      FUN_00633da4();
    }
    else {
      uVar6 = 0;
      if (*(char *)(iVar3 + 0x1e79) != '\0') {
        uVar4 = 0;
        iVar5 = 0;
        do {
          uVar4 = uVar4 + 1;
          iVar1 = *(int *)(*(int *)(iVar3 + iVar5 + 0x1dc8) + 0x6a8);
          uVar7 = *(undefined4 *)(iVar1 + 0x11c);
          *(undefined4 *)((int)param_2 + iVar5 + 0x44) = *(undefined4 *)(iVar1 + 0x130);
          uVar2 = *(undefined4 *)(iVar1 + 0x140);
          *(undefined4 *)((int)param_2 + iVar5 + 4) = uVar7;
          *(undefined4 *)((int)param_2 + iVar5 + 0x84) = uVar2;
          *param_2 = 0x1c;
          uVar6 = (uint)*(byte *)(iVar3 + 0x1e79);
          iVar5 = iVar5 + 4;
        } while (uVar4 < uVar6);
      }
      uVar7 = param_1;
      if (param_3 == (uint *)0x0) {
        FUN_00633da4();
      }
      else {
        *param_3 = uVar6;
        FUN_00633da4();
      }
    }
  }
  return uVar7;
}



//==== 006348b4  ns=Global  size=0xa8
// sig: undefined FUN_006348b4(void)
// callers(0): 
// callees(3): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined4 FUN_006348b4(undefined4 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00633e34();
  iVar2 = FUN_00633cfc(param_1);
  if (iVar2 != 0) {
    if ((param_2 & 0xffffffff) < (ulonglong)*(byte *)(*(int *)(iVar2 + 0x57c) + 0x1e79)) {
      uVar1 = **(undefined4 **)
                (*(int *)(*(int *)(iVar2 + 0x57c) + (int)((param_2 & 0xffffffff) << 2) + 0x1dc8) +
                0x6a8);
      FUN_00633da4();
      return uVar1;
    }
  }
  FUN_00633da4();
  return 0;
}



//==== 0063495c  ns=Global  size=0x4c
// sig: undefined FUN_0063495c(void)
// callers(0): 
// callees(3): 00633d70 FUN_00633d70; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

void FUN_0063495c(double param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00633e34();
  iVar1 = FUN_00633d70(param_2);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x1f54) = (float)param_1;
  }
  FUN_00633da4();
  return;
}



//==== 006349a8  ns=Global  size=0x6c
// sig: undefined FUN_006349a8(void)
// callers(0): 
// callees(4): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063f8c4 FUN_0063f8c4

void FUN_006349a8(int param_1)

{
  int iVar1;
  
  FUN_00633e34();
  iVar1 = FUN_00633cfc(param_1);
  FUN_00633da4();
  if (iVar1 != 0) {
    while (*(int *)(iVar1 + 0x240) == param_1) {
      FUN_0063f8c4(100000);
    }
  }
  return;
}



//==== 00634a14  ns=Global  size=0xc0
// sig: undefined FUN_00634a14(void)
// callers(0): 
// callees(4): 0061fff8 FUN_0061fff8; 00633bf8 FUN_00633bf8; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

double FUN_00634a14(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined *puVar1;
  int iVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_0071b044;
  FUN_00633e34();
  dVar3 = (double)*(float *)(puVar1 + -0x7f24);
  iVar2 = FUN_00633bf8(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x23c);
    if ((iVar2 != 0) &&
       (dVar3 = (double)*(float *)(puVar1 + -0x7f24), (*(uint *)(iVar2 + 0x1ed0) & 0x80) != 0)) {
      dVar3 = (double)*(float *)(puVar1 + -0x7f24);
      if (*(int *)(iVar2 + 0x1e94) != -1) {
        dVar3 = (double)FUN_0061fff8(*(int *)(iVar2 + 0x1e94),param_2,param_3);
      }
    }
  }
  FUN_00633da4();
  return dVar3;
}



//==== 00634ad4  ns=Global  size=0xc0
// sig: undefined FUN_00634ad4(void)
// callers(3): 00634be0 FUN_00634be0; 00634c90 FUN_00634c90; 00634dfc FUN_00634dfc
// callees(3): 00633bf8 FUN_00633bf8; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined4 FUN_00634ad4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  FUN_00633e34();
  iVar3 = FUN_00633bf8(param_1);
  if (iVar3 != 0) {
    puVar2 = *(undefined4 **)(iVar3 + 0x22c);
    if (puVar2 != (undefined4 *)0x0) {
      param_2 = (uint)*(byte *)(iVar3 + 0x244) - param_2;
      uVar4 = (ulonglong)(param_2 - 1);
      if (param_2 != 1) {
        do {
          puVar2 = (undefined4 *)puVar2[0x8c];
          if (puVar2 == (undefined4 *)0x0) goto LAB_00634b48;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar1 = *puVar2;
      FUN_00633da4();
      return uVar1;
    }
  }
LAB_00634b48:
  FUN_00633da4();
  return 0;
}



//==== 00634b94  ns=Global  size=0x4c
// sig: undefined FUN_00634b94(void)
// callers(3): 00634be0 FUN_00634be0; 00634c90 FUN_00634c90; 00634dfc FUN_00634dfc
// callees(3): 00633bf8 FUN_00633bf8; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

uint FUN_00634b94(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00633e34();
  uVar2 = 0xffffff8d;
  iVar1 = FUN_00633bf8(param_1);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x244);
  }
  FUN_00633da4();
  return uVar2;
}



//==== 00634be0  ns=Global  size=0xb0
// sig: undefined FUN_00634be0(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00634ad4 FUN_00634ad4; 00634b94 FUN_00634b94
// strings: 00671aa8: '%s(%d) : ERROR snd_GetStreamLayerHandle: handle is invalid!\n' | 00671358: 'common/snd_stream.cpp'

undefined8 FUN_00634be0(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar3;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar3 = FUN_00634b94();
  if (iVar3 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f1c));
    return 0;
  }
  if (iVar3 == 0) {
    return param_1;
  }
  uVar2 = FUN_00634ad4(param_1,param_2,0x14f8);
  return uVar2;
}



//==== 00634c90  ns=Global  size=0x164
// sig: undefined FUN_00634c90(void)
// callers(2): 00634c90 FUN_00634c90; 00634df4 FUN_00634df4
// callees(4): 0061948c 989snd::snd_Printf; 00634ad4 FUN_00634ad4; 00634b94 FUN_00634b94; 00634c90 FUN_00634c90
// strings: 00671b20: '    ' (raw) | 00671b28: ' |--' (raw) | 00671b48: 'Substream handle 0x%08X\n' | 00671358: 'common/snd_stream.cpp' | 00671ae8: '%s(%d) : ERROR snd_PrintStreamTree: handle is invalid!\n' | 00671b30: 'Stream handle 0x%08X\n'

void FUN_00634c90(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071b044;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar2 = FUN_00634b94();
  if (iVar2 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f18));
    return;
  }
  iVar4 = 0;
  if (param_2 < 1) {
    if (param_2 == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f0c));
      goto LAB_00634d34;
    }
  }
  else {
    do {
      while (param_2 + -1 <= iVar4) {
        iVar4 = iVar4 + 1;
        989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f10));
        if (param_2 == iVar4) goto LAB_00634d24;
      }
      iVar4 = iVar4 + 1;
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f14));
    } while (param_2 != iVar4);
  }
LAB_00634d24:
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f08));
LAB_00634d34:
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      uVar3 = FUN_00634ad4(param_1,iVar4);
      FUN_00634c90(uVar3,param_2 + 1);
      iVar4 = iVar5;
    } while (iVar2 != iVar5);
  }
  return;
}



//==== 00634df4  ns=Global  size=0x8
// sig: undefined FUN_00634df4(void)
// callers(0): 
// callees(1): 00634c90 FUN_00634c90

void FUN_00634df4(undefined8 param_1)

{
  FUN_00634c90(param_1,0);
  return;
}



//==== 00634dfc  ns=Global  size=0x200
// sig: undefined FUN_00634dfc(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 00632508 FUN_00632508; 00634ad4 FUN_00634ad4; 00634b94 FUN_00634b94
// strings: 00671b68: '%s(%d) : ERROR snd_SetStreamLayerParams: handle is invalid!\n' | 00671358: 'common/snd_stream.cpp'

ulonglong FUN_00634dfc(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar3;
  uint uVar7;
  
  puVar1 = PTR_PTR_0071b044;
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = FUN_00634b94(param_1);
  if ((int)uVar4 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f04));
    uVar6 = 0;
  }
  else {
    if (uVar4 == 0) {
      uVar3 = FUN_00632508(param_1,param_2,0,param_4,param_5);
      uVar2 = (ulonglong)((int)uVar3 >> 0x1f);
      return (((uVar2 ^ uVar3) - uVar2) + -1 << 0x20) >> 0x3f ^ 1;
    }
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    if (uVar4 == 0) {
      return 0;
    }
    uVar6 = 0;
    while( true ) {
      uVar7 = uVar6 + 1;
      uVar5 = FUN_00634ad4(param_1,uVar6);
      uVar6 = FUN_00632508(uVar5,param_2,uVar6,param_4,param_5);
      if (uVar6 == 0) break;
      uVar6 = uVar7;
      if (uVar4 == uVar7) {
        return (ulonglong)uVar7;
      }
    }
  }
  return (ulonglong)uVar6;
}



//==== 00634ffc  ns=Global  size=0x54
// sig: undefined FUN_00634ffc(void)
// callers(0): 
// callees(3): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

int FUN_00634ffc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00633e34();
  iVar2 = 0;
  iVar1 = FUN_00633cfc(param_1);
  if (iVar1 != 0) {
    iVar2 = (uint)*(byte *)(iVar1 + 0x586) * (uint)*(byte *)(iVar1 + 0x587);
  }
  FUN_00633da4();
  return iVar2;
}



//==== 00635050  ns=Global  size=0xcc
// sig: undefined FUN_00635050(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 00633d70 FUN_00633d70; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

ulonglong FUN_00635050(ulonglong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    return 0;
  }
  FUN_00633e34(param_1,param_2,0xd97);
  iVar1 = FUN_00633d70(param_1 & 0xffffffff);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 0x1e98);
    FUN_00633da4();
    return param_1 & 0xffffffff;
  }
  FUN_00633da4();
  return 0;
}



//==== 0063511c  ns=Global  size=0xe8
// sig: undefined FUN_0063511c(void)
// callers(1): 00505d78 FUN_00505d78
// callees(5): 0061948c 989snd::snd_Printf; 00633d70 FUN_00633d70; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 006371fc FUN_006371fc
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

ulonglong FUN_0063511c(ulonglong param_1,uint *param_2)

{
  int iVar1;
  
  if (param_2 == (uint *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    return 0;
  }
  FUN_00633e34(param_1,param_2,0xd5a);
  iVar1 = FUN_00633d70(param_1 & 0xffffffff);
  if (iVar1 != 0) {
    iVar1 = FUN_006371fc();
    *param_2 = iVar1 - 1U & (int)~(iVar1 - 1U) >> 0x1f;
    FUN_00633da4();
    return param_1 & 0xffffffff;
  }
  FUN_00633da4(iVar1 + 0x6b8);
  return 0;
}



//==== 00635204  ns=Global  size=0x1fc
// sig: undefined FUN_00635204(void)
// callers(2): 00505e98 FUN_00505e98; 00637a38 FUN_00637a38
// callees(4): 0061948c 989snd::snd_Printf; 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4
FUN_00635204(undefined4 param_1,undefined4 *param_2,int *param_3,uint *param_4,float *param_5)

{
  char cVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte bVar5;
  byte in_cr3;
  byte bVar6;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar7;
  uint uStack00000008;
  
  puVar3 = PTR_PTR_0071b044;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  bVar6 = (param_4 == (uint *)0x0) << 1;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  bVar5 = (param_5 == (float *)0x0) << 1;
  if (param_5 != (float *)0x0) {
    *param_5 = 0.0;
  }
  if (param_2 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f50));
    return 0;
  }
  FUN_00633e34();
  iVar4 = FUN_00633cfc(param_1);
  if (iVar4 == 0) {
    param_1 = 0;
    FUN_00633da4();
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x57c);
    if (*(byte *)(iVar4 + 0x1e79) == 0) {
LAB_00635300:
      *param_2 = 1;
      iVar4 = *(int *)(iVar4 + 0x1e5c);
      if (iVar4 != 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = (uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x16);
        }
        if (!(bool)(bVar6 >> 1 & 1)) {
          *param_4 = (uint)*(byte *)(iVar4 + 0x17);
        }
        if (!(bool)(bVar5 >> 1 & 1)) {
          *param_5 = (float)*(uint *)(iVar4 + 0x58);
        }
      }
    }
    else {
      uVar7 = (ulonglong)*(byte *)(iVar4 + 0x1e79);
      cVar1 = *(char *)(*(int *)(iVar4 + 0x1dc8) + 0x6b2);
      piVar2 = (int *)(iVar4 + 0x1dcc);
      while (cVar1 != '\0') {
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_00635300;
        cVar1 = *(char *)(*piVar2 + 0x6b2);
        piVar2 = piVar2 + 1;
      }
    }
    FUN_00633da4();
  }
  return param_1;
}



//==== 00635400  ns=Global  size=0xc4
// sig: undefined FUN_00635400(void)
// callers(1): 006397c4 FUN_006397c4
// callees(3): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined4 FUN_00635400(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00633e34();
  iVar4 = FUN_00633cfc(param_1);
  if (iVar4 == 0) {
    param_1 = 0;
    FUN_00633da4();
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x57c);
    if (iVar4 != 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(iVar4 + 0x1e20) = *param_2;
      *(undefined4 *)(iVar4 + 0x1e24) = uVar1;
      *(undefined4 *)(iVar4 + 0x1e28) = uVar2;
      *(undefined4 *)(iVar4 + 0x1e2c) = uVar3;
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      uVar3 = param_2[7];
      *(undefined4 *)(iVar4 + 0x1e30) = param_2[4];
      *(undefined4 *)(iVar4 + 0x1e34) = uVar1;
      *(undefined4 *)(iVar4 + 0x1e38) = uVar2;
      *(undefined4 *)(iVar4 + 0x1e3c) = uVar3;
      uVar1 = param_2[8];
      uVar2 = param_2[9];
      *(undefined4 *)(iVar4 + 0x1e48) = param_2[10];
      *(undefined4 *)(iVar4 + 0x1e40) = uVar1;
      *(undefined4 *)(iVar4 + 0x1e44) = uVar2;
    }
    FUN_00633da4();
  }
  return param_1;
}



//==== 006354c4  ns=Global  size=0x80
// sig: undefined FUN_006354c4(void)
// callers(0): 
// callees(3): 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

undefined4 FUN_006354c4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00633e34();
  iVar1 = FUN_00633cfc(param_1);
  if (iVar1 == 0) {
    param_1 = 0;
    FUN_00633da4();
  }
  else {
    if (*(int *)(iVar1 + 0x57c) != 0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x57c) + 0x1e54);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x2cc) = param_2;
      }
    }
    FUN_00633da4();
  }
  return param_1;
}



//==== 00635544  ns=Global  size=0x78
// sig: undefined FUN_00635544(void)
// callers(4): 006355bc FUN_006355bc; 006356dc FUN_006356dc; 0063581c FUN_0063581c; 00635944 FUN_00635944
// callees(3): 00633d70 FUN_00633d70; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34

int FUN_00635544(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  FUN_00633e34();
  iVar1 = FUN_00633d70(param_1);
  if (iVar1 == 0) {
    FUN_00633da4();
    iVar1 = 0;
  }
  else if (*(int *)(iVar1 + 0x1e5c) == 0) {
    FUN_00633da4();
    iVar1 = 0;
  }
  else {
    *param_2 = *(int *)(iVar1 + 0x1e5c);
  }
  return iVar1;
}



//==== 006355bc  ns=Global  size=0x120
// sig: undefined FUN_006355bc(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00635544 FUN_00635544
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4
FUN_006355bc(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [16];
  
  uVar2 = 0;
  if (param_2 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
      return 0;
    }
    iVar1 = FUN_00635544(param_1,local_40,0xc43);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *param_2 = uRam000002cc;
      *param_3 = uRam000002d4;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = uRam0000000c;
      }
      FUN_00633da4();
      uVar2 = param_1;
    }
  }
  return uVar2;
}



//==== 006356dc  ns=Global  size=0x140
// sig: undefined FUN_006356dc(void)
// callers(1): 00505e08 FUN_00505e08
// callees(3): 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00635544 FUN_00635544
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_006356dc(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 local_50 [40];
  
  puVar2 = PTR_PTR_0071b044;
  if (param_2 != (float *)0x0) {
    iVar3 = FUN_00635544(param_1,local_50,0xbe2);
    fVar1 = *(float *)(puVar2 + -0x7f24);
    if (iVar3 == 0) {
      param_1 = 0;
    }
    else {
      if (uRam000002c8 < uRam00000068) {
        fVar1 = (float)(uRam00000068 - uRam000002c8);
      }
      *param_2 = fVar1 / (float)uRam00000058;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uRam0000000c;
      }
      *param_2 = *param_2 - fRam000002d8;
      FUN_00633da4();
    }
    return param_1;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}



//==== 0063581c  ns=Global  size=0x128
// sig: undefined FUN_0063581c(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00635544 FUN_00635544
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_0063581c(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 local_50 [40];
  
  puVar3 = PTR_PTR_0071b044;
  if (param_2 != (float *)0x0) {
    iVar4 = FUN_00635544(param_1,local_50,0xb96);
    fVar2 = fRam000002d8;
    fVar1 = *(float *)(puVar3 + -0x7f24);
    if (iVar4 == 0) {
      param_1 = 0;
    }
    else {
      if (uRam00000058 != 0) {
        fVar1 = (float)uRam000002c8 / (float)uRam00000058;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uRam0000000c;
      }
      *param_2 = fVar1 + fVar2;
      FUN_00633da4();
    }
    return param_1;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}



//==== 00635944  ns=Global  size=0x128
// sig: undefined FUN_00635944(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00633da4 FUN_00633da4; 00635544 FUN_00635544
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_00635944(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_50 [32];
  
  if (param_2 != (float *)0x0) {
    iVar1 = FUN_00635544(param_1,local_50,0xb48);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (cRam00000012 != '\0') {
        *param_2 = (float)uRam00000068 / (float)uRam00000058;
        uVar2 = param_1;
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = uRam0000000c;
        }
      }
      FUN_00633da4();
    }
    return uVar2;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}



//==== 00635a6c  ns=Global  size=0x2a4
// sig: undefined FUN_00635a6c(void)
// callers(0): 
// callees(11): 005c5ad0 libc::memcpy; 0061948c 989snd::snd_Printf; 0061c628 FUN_0061c628; 00632228 FUN_00632228; 00632a38 FUN_00632a38; 00632ccc FUN_00632ccc; 00632e2c FUN_00632e2c; 00633254 FUN_00633254; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063714c FUN_0063714c
// strings: 00671ba8: '%s(%d) : Sample rate must be an integer.\n' | 00671358: 'common/snd_stream.cpp' | 00671a50: '%s(%d) : Invalid parameter.\n' | 00671ec0: 'BUFFER.###'

undefined4 FUN_00635a6c(int *param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  double dVar10;
  
  puVar4 = PTR_PTR_0071b044;
  if ((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    return 0;
  }
  uVar9 = (ulonglong)((float)param_1[3] + *(float *)(PTR_PTR_0071b044 + -0x7f00));
  dVar10 = (double)((float)param_1[3] - (float)(uVar9 & 0xffffffff));
  if ((dVar10 <= *(double *)(PTR_PTR_0071b044 + -0x7ef8)) &&
     (*(double *)(PTR_PTR_0071b044 + -0x7ef0) <= dVar10)) {
    FUN_00633e34();
    uVar8 = 0;
    iVar5 = FUN_00632a38(param_2);
    if (iVar5 != 0) {
      libc::memcpy((void *)(*(int *)(iVar5 + 0x6a8) + 0x248),param_2,0x1b0);
      FUN_0061c628(*(undefined4 *)(iVar5 + 0x6a8),(int)param_2 + 0xd4);
      FUN_00633254(iVar5,param_2,param_3);
      iVar6 = FUN_00632ccc(iVar5);
      iVar7 = FUN_00632228(iVar6);
      *(undefined4 *)(iVar6 + 0x2cc) = 0xffffffff;
      FUN_0063714c(iVar5 + 0x6b8);
      iVar6 = *param_1;
      *(undefined4 *)(iVar7 + 400) = **(undefined4 **)(puVar4 + -0x7ee4);
      if (iVar6 == 0) {
        iVar6 = **(int **)(puVar4 + -0x7ff0);
      }
      iVar1 = param_1[4];
      *(undefined1 *)(iVar7 + 0x10) = 0;
      uVar2 = param_1[1];
      *(int *)(iVar7 + 0x58) = (int)uVar9;
      *(uint *)(iVar7 + 0x54) = uVar2;
      *(undefined4 *)(iVar7 + 0x6c) = 0;
      uVar3 = param_1[2];
      *(undefined1 *)(iVar7 + 0x11) = 2;
      uVar9 = ((ulonglong)uVar3 & 0xff) << 1;
      *(undefined1 *)(iVar7 + 0x14) = 1;
      *(char *)(iVar7 + 0x17) = (char)uVar3;
      *(undefined1 *)(iVar7 + 0x13) = 2;
      uVar8 = *(undefined4 *)(iVar5 + 0x6a8);
      *(int *)(iVar7 + 8) = iVar6;
      *(int *)(iVar7 + 0xc) = iVar1;
      *(undefined8 *)(iVar7 + 0x70) = 0;
      *(int *)(iVar7 + 0x60) = (int)uVar9;
      *(undefined4 *)(iVar7 + 0x5c) = 1;
      *(int *)(iVar7 + 0x68) = (int)(uVar2 / uVar9) * *(int *)(iVar7 + 100);
      FUN_00632e2c(uVar8,param_2);
      uVar8 = **(undefined4 **)(iVar5 + 0x6a8);
    }
    FUN_00633da4();
    return uVar8;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ee8));
  return 0;
}



//==== 00635d10  ns=Global  size=0x2e8
// sig: undefined FUN_00635d10(void)
// callers(3): 00635ff8 FUN_00635ff8; 0063632c FUN_0063632c; 006363e4 FUN_006363e4
// callees(16): 0061948c 989snd::snd_Printf; 0061b86c FUN_0061b86c; 0061c628 FUN_0061c628; 00631314 FUN_00631314; 00631358 FUN_00631358; 00632a38 FUN_00632a38; 00632ccc FUN_00632ccc; 00632e2c FUN_00632e2c; 00633008 FUN_00633008; 00633254 FUN_00633254; 006332dc FUN_006332dc; 00633628 FUN_00633628; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063a134 FUN_0063a134; 0063a208 FUN_0063a208
// strings: 00671358: 'common/snd_stream.cpp' | 00671c00: '%s(%d) : ERROR stray bits in SndStartParams.bitstreamParams.mask = 0x%08X\n' | 00671c50: '%s(%d) : ERROR NULL file pathname in FileToken\n' | 00671bd8: '%s(%d) : Invalid SndStartParams.\n'

undefined4
FUN_00635d10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_3 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ee0));
  }
  else {
    uVar4 = ((ulonglong)*(uint *)(param_3 + 0x10) & 3) << 0x1b |
            (ulonglong)(*(uint *)(param_3 + 0x10) >> 5);
    if ((int)(uVar4 << 5) == 0 && (uint)uVar4 >> 0x1b == 0) {
      bVar1 = param_5 == 0;
      if (bVar1) {
        uVar10 = 1;
        uVar9 = 1;
        FUN_00633e34();
      }
      else {
        if (*(int *)(param_5 + 400) == 0) {
          989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ed8));
          return 0;
        }
        iVar5 = FUN_0063a208(param_5);
        if (iVar5 != 0) {
          return 0;
        }
        FUN_00633e34();
        uVar9 = (uint)*(byte *)(param_5 + 0x16);
        uVar10 = (uint)*(byte *)(param_5 + 0x15);
      }
      iVar5 = FUN_00632a38(param_3);
      if (iVar5 != 0) {
        puVar3 = *(undefined4 **)(iVar5 + 0x6a8);
        *(undefined1 *)((int)puVar3 + 0x585) = 0;
        *(undefined1 *)((int)puVar3 + 0x245) = 1;
        puVar3[0x15f] = iVar5;
        if (!bVar1) {
          FUN_00631358(puVar3,param_5);
        }
        FUN_0061c628(puVar3,param_3 + 0xd4);
        FUN_00633254(iVar5,param_3,param_4);
        iVar8 = iVar5 + 0x6b8;
        bVar2 = *(byte *)(iVar5 + 0x1e79);
        *(byte *)(iVar5 + 0x1e79) = bVar2 + 1;
        *(int *)(iVar8 + (uint)bVar2 * 4 + 0x1710) = iVar5;
        uVar6 = FUN_00632ccc(iVar5);
        FUN_00631314(iVar8,uVar6);
        iVar7 = FUN_00633628(puVar3,param_1,param_2,param_5,uVar6,1);
        if (iVar7 == 0) {
          *(char *)((int)puVar3 + 0x586) = (char)uVar10;
          *(char *)((int)puVar3 + 0x587) = (char)uVar9;
          FUN_00632e2c(puVar3,param_3);
          if ((uVar10 * uVar9 < 2) || (iVar5 = FUN_006332dc(iVar8,iVar5,uVar10,uVar9,1), iVar5 == 0)
             ) {
            FUN_00633008(puVar3);
            if (!bVar1) {
              FUN_0063a134(iVar8);
            }
            *(undefined1 *)((int)puVar3 + 0x589) = 1;
            uVar6 = *puVar3;
            FUN_00633da4();
            return uVar6;
          }
        }
        FUN_0061b86c(puVar3,1,1,0);
      }
      FUN_00633da4();
    }
    else {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7edc));
    }
  }
  return 0;
}



//==== 00635ff8  ns=Global  size=0x1ec
// sig: undefined FUN_00635ff8(void)
// callers(2): 006361e4 FUN_006361e4; 006362a4 FUN_006362a4
// callees(9): 0061948c 989snd::snd_Printf; 00631058 FUN_00631058; 00631358 FUN_00631358; 00633824 FUN_00633824; 00633cfc FUN_00633cfc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 00635d10 FUN_00635d10; 0063a208 FUN_0063a208
// strings: 00671358: 'common/snd_stream.cpp' | 00671c50: '%s(%d) : ERROR NULL file pathname in FileToken\n' | 00671c80: '%s(%d) : File of incompatible type queued to stream: %s\n'

ulonglong FUN_00635ff8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      int param_5,int param_6)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071b044;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_6 != 0) {
    if (*(int *)(param_6 + 400) == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ed8));
      return 0;
    }
    iVar2 = FUN_0063a208(param_6);
    if (iVar2 != 0) {
      return 0;
    }
  }
  FUN_00633e34();
  puVar3 = (uint *)FUN_00633cfc(param_1);
  if (puVar3 == (uint *)0x0) {
    uVar4 = 0;
LAB_0063613c:
    FUN_00633da4();
    if (param_5 == 0) {
      return uVar4;
    }
    uVar4 = FUN_00635d10(param_3,param_4,param_5,0xffffffffffffffff,param_6);
    return uVar4;
  }
  uVar4 = (ulonglong)*puVar3;
  iVar2 = FUN_00631058(puVar3);
  if (iVar2 == 0) goto LAB_0063613c;
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    iVar2 = FUN_00631358(puVar3,param_6);
    if (iVar2 == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ed4));
      goto LAB_006361d0;
    }
  }
  iVar2 = FUN_00633824(puVar3,param_2,param_3,param_4,param_6);
  if (-1 < iVar2) {
    FUN_00633da4();
    return uVar4;
  }
LAB_006361d0:
  FUN_00633da4();
  return 0;
}



//==== 006361e4  ns=Global  size=0xc0
// sig: undefined FUN_006361e4(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00631074 FUN_00631074; 00635ff8 FUN_00635ff8
// strings: 00671cc0: '%s(%d) : Invalid SndStreamFileToken .\n' | 00671358: 'common/snd_stream.cpp'

undefined8
FUN_006361e4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined *puVar1;
  int iVar3;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar3 = FUN_00631074(param_3);
  if (iVar3 != 0) {
    uVar2 = FUN_00635ff8(param_1,param_2,0,param_4,param_5,iVar3);
    return uVar2;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ed0));
  return 0;
}



//==== 006362a4  ns=Global  size=0x88
// sig: undefined FUN_006362a4(void)
// callers(2): 00506444 FUN_00506444; 006395ec FUN_006395ec
// callees(2): 0061948c 989snd::snd_Printf; 00635ff8 FUN_00635ff8
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined8 FUN_006362a4(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != (int *)0x0) {
    if (*param_3 != 0) {
      uVar1 = FUN_00635ff8(param_1,param_2,param_3,0,param_4,0);
      return uVar1;
    }
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}



//==== 0063632c  ns=Global  size=0xb8
// sig: undefined FUN_0063632c(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00631074 FUN_00631074; 00635d10 FUN_00635d10
// strings: 00671ce8: '%s(%d) : invalid SndStreamFileToken = 0x%08X\n' | 00671358: 'common/snd_stream.cpp'

undefined8 FUN_0063632c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar3;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar3 = FUN_00631074();
  if (iVar3 != 0) {
    uVar2 = FUN_00635d10(0,param_2,param_3,param_4,iVar3);
    return uVar2;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ecc));
  return 0;
}



//==== 006363e4  ns=Global  size=0xbc
// sig: undefined FUN_006363e4(void)
// callers(4): 00506444 FUN_00506444; 006364a0 FUN_006364a0; 0063933c FUN_0063933c; 006397c4 FUN_006397c4
// callees(3): 0061948c 989snd::snd_Printf; 00631ed0 FUN_00631ed0; 00635d10 FUN_00635d10
// strings: 00671358: 'common/snd_stream.cpp' | 00671d18: '%s(%d) : Invalid SndFileParams.\n'

undefined8 FUN_006363e4(int *param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ec8));
  }
  else {
    iVar2 = FUN_00631ed0(param_1[1],param_2,0x88f);
    if (-1 < iVar2) {
      uVar1 = FUN_00635d10(param_1,0,param_2 & 0xffffffff,param_3,0);
      return uVar1;
    }
  }
  return 0;
}



//==== 006364a0  ns=Global  size=0x278
// sig: undefined FUN_006364a0(void)
// callers(1): 0063933c FUN_0063933c
// callees(8): 006084f4 FUN_006084f4; 0061948c 989snd::snd_Printf; 00631058 FUN_00631058; 00633d70 FUN_00633d70; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 006363e4 FUN_006363e4; 0063eaac FUN_0063eaac
// strings: 00671358: 'common/snd_stream.cpp' | 00671a50: '%s(%d) : Invalid parameter.\n' | 00671d80: '%s(%d) : ERROR invalid SndSyncParams.syncUnit = %d\n' | 00671d40: '%s(%d) : ERROR stray bits in SndSyncParams.syncFlags = 0x%08X\n'

int FUN_006364a0(int param_1,uint *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     ((param_4 == 0 || (param_5 == 0)))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    return 0;
  }
  if ((*param_2 & 0xfffffffc) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ec4));
    return 0;
  }
  if (param_2[1] < 5) {
    FUN_00633e34();
    iVar6 = FUN_00633d70(param_1);
    if (((iVar6 == 0) || (*(int *)(iVar6 + 0x6a8) == 0)) ||
       (iVar7 = FUN_00631058(*(int *)(iVar6 + 0x6a8)), iVar7 == 0)) {
      iVar7 = 0;
      if ((*param_2 & 1) != 0) {
        iVar6 = FUN_006363e4(param_4,param_5,0xffffffffffffffff);
        FUN_00633da4();
        return iVar6;
      }
    }
    else {
      if (*(int *)(iVar6 + 0x1e9c) < 0) {
        FUN_006084f4(*(int *)(iVar6 + 0x1e9c),1);
        *(undefined4 *)(iVar6 + 0x1e9c) = 0;
      }
      iVar8 = FUN_006363e4(param_4,param_5,0xffffffffffffffff);
      iVar7 = 0;
      if (iVar8 != 0) {
        FUN_0063eaac(iVar8);
        *(int *)(iVar6 + 0x1e9c) = iVar8;
        uVar1 = *param_3;
        *(uint *)(iVar6 + 0x1ea0) = *param_2;
        uVar2 = param_3[2];
        *(uint *)(iVar6 + 0x1ea4) = param_2[1];
        uVar3 = param_3[1];
        uVar4 = param_3[3];
        uVar5 = param_2[2];
        *(undefined4 *)(iVar6 + 0x1eac) = uVar1;
        *(undefined4 *)(iVar6 + 0x1eb0) = uVar3;
        *(undefined4 *)(iVar6 + 0x1eb4) = uVar2;
        *(undefined4 *)(iVar6 + 0x1eb8) = uVar4;
        uVar1 = param_3[4];
        *(uint *)(iVar6 + 0x1ea8) = uVar5;
        *(undefined4 *)(iVar6 + 0x1ebc) = uVar1;
        iVar7 = iVar8;
        if (uVar5 == 0) {
          *(undefined4 *)(iVar6 + 0x1ea8) = 1;
        }
      }
    }
    FUN_00633da4();
    return iVar7;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ec0));
  return 0;
}



//==== 00636718  ns=Global  size=0xc4
// sig: undefined FUN_00636718(void)
// callers(1): 00505acc FUN_00505acc
// callees(6): 00619fd0 FUN_00619fd0; 006310a0 FUN_006310a0; 00632674 FUN_00632674; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063b9e8 FUN_0063b9e8

undefined4 FUN_00636718(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  puVar8 = PTR_PTR_0071b044;
  uVar9 = 0xffffffff;
  piVar1 = *(int **)(PTR_PTR_0071b044 + -0x7fe8);
  if (*piVar1 != 0) {
    FUN_00633e34();
    **(undefined4 **)(puVar8 + -0x7ebc) = 0;
    FUN_00633da4();
    FUN_00632674();
    FUN_00619fd0(*(undefined4 *)(puVar8 + -0x7eb8));
    FUN_0063b9e8();
    FUN_006310a0();
    iVar2 = *(int *)(puVar8 + -0x7ffc);
    uVar9 = 0;
    puVar3 = *(undefined4 **)(puVar8 + -0x7ff0);
    puVar4 = *(undefined4 **)(puVar8 + -0x7ff4);
    puVar5 = *(undefined4 **)(puVar8 + -0x7eb4);
    puVar6 = *(undefined4 **)(puVar8 + -0x7f70);
    puVar7 = *(undefined4 **)(puVar8 + -0x7eb0);
    **(undefined4 **)(puVar8 + -0x7eac) = 0;
    *puVar3 = 0;
    *puVar4 = 0;
    *piVar1 = 0;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
    *puVar5 = 0;
    *puVar6 = 0;
    *puVar7 = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
  }
  return uVar9;
}



//==== 006367dc  ns=Global  size=0x5a4
// sig: undefined FUN_006367dc(void)
// callers(1): 00505954 FUN_00505954
// callees(12): 005d0140 libc::memset; 0061948c 989snd::snd_Printf; 0061a0f0 FUN_0061a0f0; 00630d9c FUN_00630d9c; 006310a0 FUN_006310a0; 006330c8 FUN_006330c8; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 006343bc FUN_006343bc; 00636d80 FUN_00636d80; 00637248 FUN_00637248; 0063a14c FUN_0063a14c
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp' | 00671db8: 'SndStreamEx Version %d.%d.%d ' | 00671dd8: 'Built on %s at %s\n' | 00671df0: 'Mar  6 2012' | 00671e00: '12:17:24' | 00671e10: '%s(%d) : Too many extraStreamsForStealing = %d. Can only use 2*handleCount in worst case.\n' | 00671e70: '%s(%d) : ERROR number of SndStreamTreeNodes %d exceeds HANDLER_MAX_INDEX.\n'

undefined4 FUN_006367dc(ulonglong param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined *puVar18;
  ulonglong uVar19;
  undefined4 uVar21;
  longlong lVar20;
  int iVar22;
  ulonglong uVar23;
  uint uVar25;
  longlong lVar24;
  undefined4 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  int iVar36;
  int iVar37;
  undefined1 uStack_8d;
  
  puVar18 = PTR_PTR_0071b044;
  iVar22 = (int)param_1;
  if (((iVar22 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    uVar21 = 0xfffffff9;
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ea8));
    989snd::snd_Printf((char)*(undefined4 *)(puVar18 + -0x7ea4));
    piVar1 = *(int **)(puVar18 + -0x7ffc);
    libc::memset(piVar1,0,0x240);
    puVar2 = *(undefined1 **)(puVar18 + -0x7e98);
    *(undefined1 *)((int)piVar1 + 0x239) = 1;
    iVar36 = *param_3;
    iVar30 = param_3[1];
    iVar33 = param_3[3];
    piVar1[0x1f] = param_3[2];
    piVar1[0x1d] = iVar36;
    piVar1[0x1e] = iVar30;
    piVar1[0x20] = iVar33;
    iVar36 = param_3[5];
    iVar30 = param_3[6];
    iVar33 = param_3[7];
    piVar1[0x21] = param_3[4];
    piVar1[0x22] = iVar36;
    piVar1[0x23] = iVar30;
    piVar1[0x24] = iVar33;
    iVar36 = param_3[9];
    piVar1[0x25] = param_3[8];
    piVar1[0x26] = iVar36;
    *puVar2 = uStack_8d;
    FUN_00637248(piVar1 + 0x2f,0x40);
    piVar3 = *(int **)(puVar18 + -0x7fe8);
    uVar21 = 0xfffffffb;
    if ((*piVar3 == 0) && (uVar21 = 0xfffffff9, *param_3 == 0x28)) {
      if ((param_3[7] == 1) || (0x10 < (uint)param_3[7])) {
        uVar21 = 0xfffffff9;
      }
      else {
        uVar29 = param_1 + (uint)param_3[9];
        if ((param_1 & 0xffffffff) < (ulonglong)(uint)param_3[9]) {
          uVar29 = (param_1 & 0x7fffffff) << 1;
          989snd::snd_Printf((char)*(undefined4 *)(puVar18 + -0x7e94));
        }
        uVar28 = uVar29;
        if ((param_3[5] & 8U) == 0) {
          uVar28 = ((uVar29 & 0x7fffffff) * 2 + uVar29 + 3 << 0x20) >> 0x21;
        }
        if ((uVar28 & 0xffffffff) < 0x100) {
          uVar25 = 8;
          if (1 < (uint)param_3[7]) {
            uVar25 = param_3[7];
          }
          *(char *)(piVar1 + 0x8e) = (char)uVar25;
          uVar35 = (param_1 & 0xfffffff) * 0x10 + 0x7f & 0xffffff80;
          uVar15 = (ulonglong)(param_2 + 0x7f) & 0xffffff80;
          lVar27 = (longlong)iVar22 * (longlong)(int)uVar15;
          uVar16 = uVar29 * 0x1f58 + 0x7f & 0xffffff80;
          uVar17 = uVar28 * 0x58c + 0x7f & 0xffffff80;
          if ((param_3[5] & 4U) == 0) {
            piVar1[0x2c] = 0x298;
          }
          else {
            piVar1[0x2c] = 0x198;
          }
          iVar36 = param_3[6];
          piVar1[0x2d] = iVar36;
          uVar25 = param_3[3];
          uVar23 = (ulonglong)uVar25;
          uVar32 = uVar16 + lVar27 + uVar35 + uVar17 + (longlong)iVar36 * (longlong)piVar1[0x2c];
          if (uVar25 != 0) {
            uVar19 = (uVar29 & 0x1fffffff) << 3;
            if (0x20 < uVar25) {
              uVar23 = 0x20;
            }
            iVar36 = (int)uVar19;
            if (uVar23 < uVar19) {
              iVar36 = (int)uVar23;
            }
            puVar4 = *(uint **)(puVar18 + -0x7f70);
            uVar25 = param_3[4] + 0x7fU & 0xffffff80;
            **(int **)(puVar18 + -0x7eb0) = iVar36;
            *puVar4 = uVar25;
            if (uVar25 == 0) {
              *puVar4 = 0x800;
            }
            uVar32 = uVar32 + (longlong)iVar36 * (longlong)(int)*puVar4;
          }
          lVar20 = FUN_00630d9c(uVar32 & 0xffffffff,0x80,0x200);
          iVar36 = (int)lVar20;
          *piVar1 = iVar36;
          if (iVar36 != 0) {
            lVar20 = lVar20 + uVar16;
            piVar5 = *(int **)(puVar18 + -0x7ff4);
            iVar30 = piVar1[0x2d];
            lVar24 = lVar20 + uVar35;
            lVar31 = lVar24 + uVar17;
            piVar1[1] = (int)uVar32;
            *piVar5 = iVar36;
            piVar1[0x2a] = (int)lVar20;
            piVar1[0x27] = (int)lVar24;
            uVar35 = lVar31 + lVar27;
            iVar36 = (int)uVar35;
            if (iVar30 != 0) {
              piVar1[0x2e] = iVar36;
              iVar30 = iVar30 * piVar1[0x2c];
              iVar36 = iVar36 + iVar30;
              libc::memset(uVar35 & 0xffffffff,0,iVar30);
            }
            if (**(int **)(puVar18 + -0x7eb0) != 0) {
              **(int **)(puVar18 + -0x7eac) = iVar36;
            }
            param_1 = param_1 & 0xffffffff;
            puVar26 = (undefined4 *)piVar1[0x2a];
            do {
              puVar26[2] = (int)lVar31;
              *puVar26 = 0;
              puVar26[1] = 0;
              puVar26[3] = (int)uVar15;
              lVar31 = lVar31 + uVar15;
              param_1 = param_1 - 1;
              puVar26 = puVar26 + 4;
            } while (param_1 != 0);
            iVar36 = FUN_00636d80(uVar15,*(undefined1 *)(piVar1 + 0x8e));
            iVar30 = (int)uVar29;
            piVar1[0x29] = iVar36;
            if (iVar30 != 0) {
              iVar36 = 0;
              iVar33 = 0;
              do {
                puVar26 = (undefined4 *)(iVar33 + *piVar5);
                iVar33 = iVar33 + 0x1f58;
                libc::memset(puVar26,0,0x1f58);
                puVar26[1] = iVar36;
                iVar36 = iVar36 + 1;
                *puVar26 = 0xa1559abf;
                FUN_006330c8(puVar26);
              } while (iVar30 != iVar36);
            }
            iVar36 = (int)uVar28;
            if (iVar36 != 0) {
              iVar34 = 0;
              iVar33 = 0;
              do {
                iVar37 = iVar33 + piVar1[0x27];
                iVar33 = iVar33 + 0x58c;
                libc::memset(iVar37,0,0x58c);
                *(int *)(iVar37 + 0x234) = iVar34;
                iVar34 = iVar34 + 1;
              } while (iVar36 != iVar34);
            }
            puVar26 = *(undefined4 **)(puVar18 + -0x7fec);
            uVar21 = *(undefined4 *)(puVar18 + -0x7e8c);
            uVar6 = *(undefined4 *)(puVar18 + -0x7e88);
            uVar7 = *(undefined4 *)(puVar18 + -0x7e84);
            uVar8 = *(undefined4 *)(puVar18 + -0x7e80);
            uVar9 = *(undefined4 *)(puVar18 + -0x7e7c);
            uVar10 = *(undefined4 *)(puVar18 + -0x7e78);
            uVar11 = *(undefined4 *)(puVar18 + -0x7e74);
            puVar26[0xb] = *(undefined4 *)(puVar18 + -0x7e64);
            uVar12 = *(undefined4 *)(puVar18 + -0x7e70);
            uVar13 = *(undefined4 *)(puVar18 + -0x7e6c);
            uVar14 = *(undefined4 *)(puVar18 + -0x7e68);
            puVar26[1] = 0;
            *puVar26 = uVar21;
            puVar26[2] = uVar6;
            puVar26[3] = uVar7;
            puVar26[4] = uVar8;
            puVar26[5] = uVar9;
            puVar26[6] = uVar10;
            puVar26[7] = uVar11;
            puVar26[8] = uVar12;
            puVar26[9] = uVar13;
            puVar26[10] = uVar14;
            *piVar3 = iVar30;
            piVar1[0x2b] = iVar22;
            piVar1[0x28] = iVar36;
            FUN_006343bc(0);
            iVar22 = FUN_0063a14c(param_3);
            if (iVar22 == 0) {
              iVar22 = *(int *)(puVar18 + -0x7eb8);
              iVar36 = piVar1[0x27];
              *(int *)(iVar22 + 8) = piVar1[0x28];
              *(undefined4 *)(iVar22 + 0xc) = 0x58c;
              *(int *)(iVar22 + 0x10) = iVar36;
              FUN_0061a0f0(iVar22);
              FUN_00633e34();
              **(undefined4 **)(puVar18 + -0x7ebc) = *(undefined4 *)(puVar18 + -0x7e60);
              FUN_00633da4();
              return 0;
            }
            FUN_006310a0();
            return 0xfffffffc;
          }
        }
        else {
          989snd::snd_Printf((char)*(undefined4 *)(puVar18 + -0x7e90));
        }
        uVar21 = 0xfffffffd;
        piVar1[0x28] = 0;
        *piVar3 = 0;
      }
    }
  }
  return uVar21;
}



//==== 00636d80  ns=Global  size=0xc
// sig: undefined FUN_00636d80(void)
// callers(2): 006367dc FUN_006367dc; 00636f6c FUN_00636f6c
// callees(0): 

ulonglong FUN_00636d80(ulonglong param_1,ulonglong param_2)

{
  return (param_1 & 0xffffffff) / (param_2 & 0xffffffff) & 0xffffff80;
}



//==== 00636d8c  ns=Global  size=0x20
// sig: undefined FUN_00636d8c(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(0): 

undefined4 FUN_00636d8c(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0xc + 0x14);
}



//==== 00636dac  ns=Global  size=0x8
// sig: undefined FUN_00636dac(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636dac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x69c);
}



//==== 00636db4  ns=Global  size=0x1c
// sig: undefined FUN_00636db4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636db4(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + 0xd4);
}



//==== 00636dd0  ns=Global  size=0x18
// sig: undefined FUN_00636dd0(void)
// callers(0): 
// callees(0): 

void FUN_00636dd0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0xd4) = param_3;
  return;
}



//==== 00636de8  ns=Global  size=0x18
// sig: undefined FUN_00636de8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636de8(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x160);
}



//==== 00636e00  ns=Global  size=0x18
// sig: undefined FUN_00636e00(void)
// callers(0): 
// callees(0): 

void FUN_00636e00(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x160) = param_3;
  return;
}



//==== 00636e18  ns=Global  size=0x18
// sig: undefined FUN_00636e18(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636e18(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x15c);
}



//==== 00636e30  ns=Global  size=0x18
// sig: undefined FUN_00636e30(void)
// callers(0): 
// callees(0): 

void FUN_00636e30(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x15c) = param_3;
  return;
}



//==== 00636e48  ns=Global  size=0x18
// sig: undefined FUN_00636e48(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636e48(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x164);
}



//==== 00636e60  ns=Global  size=0x18
// sig: undefined FUN_00636e60(void)
// callers(0): 
// callees(0): 

void FUN_00636e60(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x164) = param_3;
  return;
}



//==== 00636e78  ns=Global  size=0x14
// sig: undefined FUN_00636e78(void)
// callers(3): 0063fea8 FUN_0063fea8; 0063ff34 989snd::sndHost_FileAsyncIsReadComplete; 00640000 FUN_00640000
// callees(0): 

int FUN_00636e78(int param_1,int param_2)

{
  return param_2 * 0x58 + param_1 + 0x118;
}



//==== 00636e8c  ns=Global  size=0x18
// sig: undefined FUN_00636e8c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636e8c(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x168);
}



//==== 00636ea4  ns=Global  size=0x18
// sig: undefined FUN_00636ea4(void)
// callers(0): 
// callees(0): 

void FUN_00636ea4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x168) = param_3;
  return;
}



//==== 00636ebc  ns=Global  size=0x18
// sig: undefined FUN_00636ebc(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00636ebc(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x158);
}



//==== 00636ed4  ns=Global  size=0x18
// sig: undefined FUN_00636ed4(void)
// callers(0): 
// callees(0): 

void FUN_00636ed4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x158) = param_3;
  return;
}



//==== 00636eec  ns=Global  size=0x28
// sig: undefined FUN_00636eec(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(1): 006407e0 FUN_006407e0

undefined4 FUN_00636eec(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006407e0();
  return uVar1;
}



//==== 00636f14  ns=Global  size=0x58
// sig: undefined FUN_00636f14(void)
// callers(2): 00633188 FUN_00633188; 00636f6c FUN_00636f6c
// callees(1): 0064031c FUN_0064031c

void FUN_00636f14(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_0064031c(param_1);
  iVar2 = 0;
  lVar3 = 0x10;
  do {
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 4;
    *(undefined4 *)(iVar1 + 0xd4) = 0xffffffff;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



//==== 00636f6c  ns=Global  size=0xe8
// sig: undefined FUN_00636f6c(void)
// callers(1): 00632a38 FUN_00632a38
// callees(5): 005d0140 libc::memset; 00636d80 FUN_00636d80; 00636f14 FUN_00636f14; 006407c0 FUN_006407c0; 00640820 FUN_00640820

undefined4 FUN_00636f6c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  libc::memset(param_1,0,0x6a0);
  *(int *)(param_1 + 0x698) = param_2;
  uVar1 = FUN_00636d80(param_3,param_4);
  *(undefined4 *)(param_1 + 0x69c) = uVar1;
  FUN_00640820(param_1,param_4);
  if (param_4 != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      FUN_006407c0(param_1,iVar2,param_2 + iVar2 * *(int *)(param_1 + 0x69c));
      iVar2 = iVar3;
    } while (param_4 != iVar3);
  }
  FUN_00636f14(param_1);
  return *(undefined4 *)(param_1 + 0x69c);
}



//==== 00637054  ns=Global  size=0x40
// sig: undefined FUN_00637054(void)
// callers(1): 00633554 FUN_00633554
// callees(0): 

uint FUN_00637054(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_1 * 2;
  iVar3 = *param_1 + param_1[2];
  uVar4 = iVar3 - (iVar3 / iVar2) * iVar2 ^ param_1[1];
  uVar1 = (int)uVar4 >> 0x1f;
  return ((uVar1 ^ uVar4) - uVar1) - 1 >> 0x1f;
}



//==== 00637094  ns=Global  size=0x28
// sig: undefined FUN_00637094(void)
// callers(2): 0063a404 FUN_0063a404; 0063be38 FUN_0063be38
// callees(0): 

uint FUN_00637094(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 4);
  uVar1 = (int)uVar2 >> 0x1f;
  return ((uVar1 ^ uVar2) - uVar1) - 1 >> 0x1f;
}



//==== 006370bc  ns=Global  size=0x28
// sig: undefined FUN_006370bc(void)
// callers(0): 
// callees(0): 

int FUN_006370bc(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_1[2];
  if (iVar1 < 0) {
    iVar1 = iVar1 + *param_1 * 2;
  }
  return iVar1;
}



//==== 006370e4  ns=Global  size=0x1c
// sig: undefined FUN_006370e4(void)
// callers(2): 00632ccc FUN_00632ccc; 00633554 FUN_00633554
// callees(0): 

int FUN_006370e4(int *param_1)

{
  return param_1[1] - (param_1[1] / *param_1) * *param_1;
}



//==== 00637100  ns=Global  size=0x1c
// sig: undefined FUN_00637100(void)
// callers(1): 0063be38 FUN_0063be38
// callees(0): 

int FUN_00637100(int *param_1)

{
  return param_1[2] - (param_1[2] / *param_1) * *param_1;
}



//==== 0063711c  ns=Global  size=0x30
// sig: undefined FUN_0063711c(void)
// callers(0): 
// callees(0): 

int FUN_0063711c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (param_2 + param_1[2]) - ((param_2 + param_1[2]) / (iVar1 * 2)) * iVar1 * 2;
  return iVar2 - (iVar2 / iVar1) * iVar1;
}



//==== 0063714c  ns=Global  size=0x24
// sig: undefined FUN_0063714c(void)
// callers(3): 00633554 FUN_00633554; 00633628 FUN_00633628; 00635a6c FUN_00635a6c
// callees(0): 

void FUN_0063714c(int *param_1)

{
  param_1[1] = (param_1[1] + 1) - ((param_1[1] + 1) / (*param_1 * 2)) * *param_1 * 2;
  return;
}



//==== 00637170  ns=Global  size=0x24
// sig: undefined FUN_00637170(void)
// callers(1): 0063be38 FUN_0063be38
// callees(0): 

void FUN_00637170(int *param_1)

{
  param_1[2] = (param_1[2] + 1) - ((param_1[2] + 1) / (*param_1 * 2)) * *param_1 * 2;
  return;
}



//==== 00637194  ns=Global  size=0x40
// sig: undefined FUN_00637194(void)
// callers(1): 00633824 FUN_00633824
// callees(0): 

uint FUN_00637194(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_1 * 2;
  iVar3 = *param_1 + param_1[3];
  uVar4 = iVar3 - (iVar3 / iVar2) * iVar2 ^ param_1[1];
  uVar1 = (int)uVar4 >> 0x1f;
  return ((uVar1 ^ uVar4) - uVar1) - 1 >> 0x1f;
}



//==== 006371d4  ns=Global  size=0x28
// sig: undefined FUN_006371d4(void)
// callers(0): 
// callees(0): 

uint FUN_006371d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 4);
  uVar1 = (int)uVar2 >> 0x1f;
  return ((uVar1 ^ uVar2) - uVar1) - 1 >> 0x1f;
}



//==== 006371fc  ns=Global  size=0x28
// sig: undefined FUN_006371fc(void)
// callers(2): 00633824 FUN_00633824; 0063511c FUN_0063511c
// callees(0): 

int FUN_006371fc(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_1[3];
  if (iVar1 < 0) {
    iVar1 = iVar1 + *param_1 * 2;
  }
  return iVar1;
}



//==== 00637224  ns=Global  size=0x24
// sig: undefined FUN_00637224(void)
// callers(0): 
// callees(0): 

void FUN_00637224(int *param_1)

{
  param_1[3] = (param_1[3] + 1) - ((param_1[3] + 1) / (*param_1 * 2)) * *param_1 * 2;
  return;
}



//==== 00637248  ns=Global  size=0x18
// sig: undefined FUN_00637248(void)
// callers(2): 006330c8 FUN_006330c8; 006367dc FUN_006367dc
// callees(0): 

void FUN_00637248(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



//==== 00637260  ns=Global  size=0x44
// sig: undefined FUN_00637260(void)
// callers(1): 0063753c FUN_0063753c
// callees(0): 

void FUN_00637260(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x23c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1e94) != -1)) {
    iVar2 = *(int *)(PTR_PTR_0071b050 + -0x8000);
    *(undefined4 *)(iVar1 + 0x1e94) = 0xffffffff;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  }
  return;
}



//==== 006372a4  ns=Global  size=0x1c
// sig: undefined FUN_006372a4(void)
// callers(0): 
// callees(0): 

ulonglong FUN_006372a4(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1 & 0x7fff;
  if ((short)param_1 < 0) {
    uVar1 = uVar1 | 0x80000000;
  }
  return uVar1;
}



//==== 006372c0  ns=Global  size=0x24
// sig: undefined FUN_006372c0(void)
// callers(0): 
// callees(0): 

void FUN_006372c0(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x17a0) == param_2) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1760);
  *(int *)(param_1 + 0x17a0) = param_2;
  *(undefined4 *)(param_2 + 0x2c8) = 0;
  *(undefined8 *)(param_2 + 0x2c0) = uVar1;
  return;
}



//==== 006372e4  ns=Global  size=0x4
// sig: undefined FUN_006372e4(void)
// callers(0): 
// callees(0): 

void FUN_006372e4(void)

{
  return;
}



//==== 006372e8  ns=Global  size=0xe0
// sig: undefined FUN_006372e8(void)
// callers(0): 
// callees(0): 

void FUN_006372e8(uint param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar4 = param_1 + param_3;
  uVar1 = **(uint **)(PTR_PTR_0071b050 + -0x7ffc);
  if (0 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
    iVar5 = 0;
    iVar2 = **(int **)(PTR_PTR_0071b050 + -0x7ff8);
    if ((int)uVar1 < 1) {
      uVar6 = 1;
    }
    do {
      iVar3 = iVar5 + iVar2;
      if ((*(int **)(iVar3 + 0x6a8) != (int *)0x0) && (**(int **)(iVar3 + 0x6a8) < 0)) {
        uVar1 = *(uint *)(iVar3 + 0x1ee0);
        if ((param_1 <= uVar1) && (uVar1 < uVar4)) {
          *(uint *)(iVar3 + 0x1ee0) = param_4 + uVar1;
        }
        uVar1 = *(uint *)(iVar3 + 0x1ee4);
        if ((param_1 <= uVar1) && (uVar1 < uVar4)) {
          *(uint *)(iVar3 + 0x1ee4) = uVar1 + param_4 * 0x40;
        }
        if ((param_1 <= *(uint *)(iVar3 + 0x1edc)) && (*(uint *)(iVar3 + 0x1edc) < uVar4)) {
          *(int *)(iVar3 + 0x1edc) = *(int *)(iVar5 + iVar2 + 0x1edc) + param_4;
        }
      }
      iVar5 = iVar5 + 0x1f58;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



//==== 006373c8  ns=Global  size=0x2c
// sig: undefined FUN_006373c8(void)
// callers(0): 
// callees(0): 

int FUN_006373c8(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (**(int **)(PTR_PTR_0071b050 + -0x7ff4) != 0) {
    iVar1 = **(int **)(PTR_PTR_0071b050 + -0x7ff4) + 0x1ee8;
  }
  return iVar1;
}



//==== 006373f4  ns=Global  size=0xfc
// sig: undefined FUN_006373f4(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00671ed0: 'path: %s\n' | 00671ee0: 'userContext: %d\n' | 00671f38: 'dataType: %s\n' | 00671f08: 'Unknown' | 00671f48: 'sampleRate: %f\n' | 00671f58: 'numChannels: %d\n'

void FUN_006373f4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b050;
  if ((((*(char *)(param_1 + 0x245) != '\0') && (*(int *)(param_1 + 0x57c) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x57c) + 0x1e5c), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x12) != '\0')) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b050 + -0x7ff0));
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fec));
    if (6 < *(byte *)(iVar1 + 0x14)) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc8));
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc4));
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc0));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x006374ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)((uint)*(byte *)(iVar1 + 0x14) * 4 + *(int *)(puVar2 + -0x7fe8)) +
              *(int *)(puVar2 + -0x7fe8)))();
    return;
  }
  return;
}



//==== 0063753c  ns=Global  size=0x7c
// sig: undefined FUN_0063753c(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00637260 FUN_00637260
// strings: 00671fa0: 'common/snd_stream_scream.cpp' | 00671f70: '%s(%d) : Invalid voice callback type %d.\n'

void FUN_0063753c(undefined8 param_1,ulonglong param_2,longlong param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if ((iVar1 == 3) || (iVar1 == 5)) {
    return;
  }
  if ((1 < (param_3 - 1U & 0xffffffff)) && (param_3 = 99, param_4 = iVar1, iVar1 != 4)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b050 + -0x7fbc));
    return;
  }
  FUN_00637260(param_2 & 0xffffffff,param_2,param_3,param_4);
  return;
}



//==== 006375b8  ns=Global  size=0x68
// sig: undefined FUN_006375b8(void)
// callers(1): 00637620 FUN_00637620
// callees(1): 006316c0 FUN_006316c0

void FUN_006375b8(undefined4 *param_1,int param_2)

{
  if (*(char *)(param_2 + 0x2dc) != '\x1f') {
    return;
  }
  FUN_006316c0(*param_1,6,*(undefined4 *)(param_2 + 0xc),0);
  *(undefined1 *)(param_2 + 0x2dc) = 0x20;
  return;
}



//==== 00637620  ns=Global  size=0xa0
// sig: undefined FUN_00637620(void)
// callers(0): 
// callees(3): 006375b8 FUN_006375b8; 0063a128 FUN_0063a128; 0063ea18 FUN_0063ea18

undefined4 FUN_00637620(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0063ea18(param_1);
  uVar3 = 0;
  if ((*(char *)(iVar2 + 0x584) == '\x01') || (param_2 != 0)) {
    uVar3 = 1;
    if (*(char *)(param_1 + 0x245) != '\0') {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x57c) + 0x1e5c);
      if (iVar1 != 0) {
        FUN_006375b8(iVar2,iVar1);
      }
      FUN_0063a128(iVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}



//==== 006376c0  ns=Global  size=0x13c
// sig: undefined FUN_006376c0(void)
// callers(0): 
// callees(1): 0061ae90 FUN_0061ae90

undefined8 FUN_006376c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  
  if (((*(char *)(param_1 + 0x245) != '\0') && (*(char *)(param_1 + 0x584) == '\x02')) &&
     (iVar3 = *(int *)(param_1 + 0x57c), iVar3 != 0)) {
    iVar9 = iVar3 + 0x6b8;
    if (*(char *)(iVar3 + 0x1e79) != '\0') {
      fVar1 = *(float *)(PTR_PTR_0071b050 + -0x7fb4);
      pfVar10 = (float *)(param_1 + 0x3fc);
      bVar7 = false;
      iVar8 = 0;
      do {
        fVar2 = pfVar10[-0x68];
        if (*pfVar10 != fVar2) {
          fVar6 = *pfVar10 + pfVar10[0x30];
          if (pfVar10[0x30] < fVar1) {
            if (fVar6 < fVar2) goto LAB_006377f4;
          }
          else if (fVar2 < fVar6) {
LAB_006377f4:
            fVar6 = fVar2;
          }
          if (*(int *)(iVar9 + 0x1710) != 0) {
            iVar4 = *(int *)(*(int *)(iVar9 + 0x1710) + 0x6a8);
            if (iVar4 != 0) {
              iVar5 = *(int *)(param_1 + 0x228);
              *(float *)(iVar4 + 0x11c) = fVar6;
              if (iVar5 != 0) {
                *(float *)(iVar4 + 0x11c) = fVar6 * *(float *)(iVar5 + 0x11c);
              }
            }
          }
          bVar7 = true;
          *pfVar10 = fVar6;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
        pfVar10 = pfVar10 + 1;
      } while (iVar8 < (int)(uint)*(byte *)(iVar3 + 0x1e79));
      if (bVar7) {
        FUN_0061ae90(param_1);
      }
    }
  }
  return 0;
}



//==== 006377fc  ns=Global  size=0x54
// sig: undefined FUN_006377fc(void)
// callers(1): 00637d2c 989snd::snd_ProcessStreamTick
// callees(1): 0063f99c FUN_0063f99c

void FUN_006377fc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b050;
  iVar2 = FUN_0063f99c();
  if (*(uint *)(*(int *)(puVar1 + -0x8000) + 0x6c) < (uint)(iVar2 - param_1)) {
    *(int *)(*(int *)(puVar1 + -0x8000) + 0x6c) = iVar2 - param_1;
  }
  return;
}



//==== 00637850  ns=Global  size=0x40
// sig: undefined FUN_00637850(void)
// callers(0): 
// callees(1): 0063e9c4 FUN_0063e9c4

int FUN_00637850(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ed8);
  if (iVar1 == 0) {
    iVar1 = FUN_0063e9c4(*(undefined4 *)(param_1 + 0x6a8));
  }
  return iVar1;
}



//==== 00637890  ns=Global  size=0x1a8
// sig: undefined FUN_00637890(void)
// callers(0): 
// callees(2): 006084f4 FUN_006084f4; 0063ea68 FUN_0063ea68

void FUN_00637890(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar3;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1ec0);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x1ec8);
  if (uVar2 == 2) {
    uVar2 = *(uint *)(param_1 + 0x1f3c);
    if ((uVar2 & 2) != 0) {
      uVar4 = *(int *)(param_1 + 0x1f30) + 1;
      iVar5 = uVar4 - (uVar4 / *(uint *)(param_1 + 0x1ecc)) * *(uint *)(param_1 + 0x1ecc);
      goto LAB_006378d8;
    }
  }
  else if (uVar2 < 3) {
    if (uVar2 == 1) {
      uVar2 = *(uint *)(param_1 + 0x1f3c);
      if ((uVar2 & 1) != 0) {
        uVar3 = (((ulonglong)*(uint *)(param_1 + 0x1f2c) & 0x7ffffff) * 0x20 +
                 ((ulonglong)*(uint *)(param_1 + 0x1f2c) & 0x1fffffff) * -8 & 0xffffffff) /
                (ulonglong)*(uint *)(param_1 + 0x1f24) + 1;
        iVar5 = (int)uVar3 -
                (int)((uVar3 & 0xffffffff) / (ulonglong)*(uint *)(param_1 + 0x1ecc)) *
                *(uint *)(param_1 + 0x1ecc);
        goto LAB_006378d8;
      }
    }
    else {
LAB_006378d0:
      uVar2 = *(uint *)(param_1 + 0x1f3c);
    }
  }
  else if (uVar2 == 3) {
    uVar2 = *(uint *)(param_1 + 0x1f3c);
    if ((uVar2 & 4) != 0) {
      iVar5 = *(uint *)(param_1 + 0x1f34) -
              (*(uint *)(param_1 + 0x1f34) / *(uint *)(param_1 + 0x1ecc)) *
              *(uint *)(param_1 + 0x1ecc);
      goto LAB_006378d8;
    }
  }
  else {
    if (uVar2 != 4) goto LAB_006378d0;
    uVar2 = *(uint *)(param_1 + 0x1f3c);
    if ((uVar2 & 0x100) != 0) {
      iVar5 = *(uint *)(param_1 + 0x1f38) -
              (*(uint *)(param_1 + 0x1f38) / *(uint *)(param_1 + 0x1ecc)) *
              *(uint *)(param_1 + 0x1ecc);
      goto LAB_006378d8;
    }
  }
  iVar5 = 1;
LAB_006378d8:
  if ((uVar2 & 0x40) == 0) {
    if (iVar5 != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x1ec4) & 2) == 0) {
    FUN_006084f4(iVar1,1);
    *(undefined4 *)(param_1 + 0x1ec0) = 0;
    return;
  }
  FUN_0063ea68(iVar1);
  *(undefined4 *)(param_1 + 0x1ec0) = 0;
  return;
}



//==== 00637a38  ns=Global  size=0x214
// sig: undefined FUN_00637a38(void)
// callers(0): 
// callees(6): 006084f4 FUN_006084f4; 00608578 FUN_00608578; 00633d70 FUN_00633d70; 00635204 FUN_00635204; 0063ea18 FUN_0063ea18; 0063ea68 FUN_0063ea68

/* WARNING: Removing unreachable block (ram,0x00637ab8) */
/* WARNING: Removing unreachable block (ram,0x00637ad4) */
/* WARNING: Removing unreachable block (ram,0x00637aec) */
/* WARNING: Removing unreachable block (ram,0x00637b18) */
/* WARNING: Removing unreachable block (ram,0x00637cfc) */
/* WARNING: Removing unreachable block (ram,0x00637d28) */
/* WARNING: Removing unreachable block (ram,0x00637b44) */
/* WARNING: Removing unreachable block (ram,0x00637ccc) */
/* WARNING: Removing unreachable block (ram,0x00637cf0) */
/* WARNING: Removing unreachable block (ram,0x00637b4c) */

void FUN_00637a38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [24];
  
  iVar1 = *(int *)(param_1 + 0x1e9c);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 0x1ea0) & 1) == 0) {
      return;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x1ea4) < 5) {
                    /* WARNING: Could not recover jumptable at 0x00637bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(*(uint *)(param_1 + 0x1ea4) * 4 + *(int *)(PTR_PTR_0071b050 + -0x7fac)) +
                *(int *)(PTR_PTR_0071b050 + -0x7fac)))();
      return;
    }
    if ((*(uint *)(param_1 + 0x1f3c) & 0x40) == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x1ea0) & 2) == 0) {
      FUN_006084f4(iVar1,1);
      *(undefined4 *)(param_1 + 0x1e9c) = 0;
      return;
    }
  }
  uVar2 = FUN_00635204(iVar1,local_40,0,0,0);
  *(undefined4 *)(param_1 + 0x1e9c) = uVar2;
  return;
}



//==== 00637d2c  ns=989snd  size=0x32c
// sig: undefined snd_ProcessStreamTick(void)
// callers(0): 
// callees(13): 00604918 FUN_00604918; 006084f4 FUN_006084f4; 0061948c 989snd::snd_Printf; 00631058 FUN_00631058; 006377fc FUN_006377fc; 0063a404 FUN_0063a404; 0063e9c4 FUN_0063e9c4; 0063ea68 FUN_0063ea68; 0063f99c FUN_0063f99c; 00640564 FUN_00640564; 0064056c FUN_0064056c; 00640580 FUN_00640580; 006405f4 FUN_006405f4
// strings: 006722b8: '%s(%d) ERROR AUDIO snd_ProcessStreamTick unrecognized state = %d!\n' | 00671fa0: 'common/snd_stream_scream.cpp' | 00671fc0: 'snd_ProcessStreamTick: topTreeNode not allocated!\n' | 00671ff8: '[%d]: SndStreamEx: Rebuffering stopped. Continuing.\n' | 00672030: '[%d]: SndStreamEx: Gave up rebuffering. Just stop the sound.\n' | 00672070: '[%d]: SndStreamEx: Rebuffering....\n'

undefined4 989snd::snd_ProcessStreamTick(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar2 = PTR_PTR_0071b050;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar10 = *(undefined1 *)(param_1 + 0x584);
  uVar3 = FUN_0063f99c();
  if (*(char *)(param_1 + 0x245) == '\0') {
    return 0;
  }
  iVar4 = FUN_00631058(param_1);
  if (iVar4 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fa8));
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x57c);
  if ((*(uint *)(param_1 + 4) & 0xe) == 0) {
    if (5 < *(byte *)(param_1 + 0x584)) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f64));
      iVar4 = *(int *)(puVar2 + -0x8000);
      *(undefined1 *)(param_1 + 0x584) = 4;
      FUN_006377fc(uVar3);
      *(int *)(iVar4 + 0x70) = *(int *)(iVar4 + 0x70) + 1;
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00637e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(*(int *)((uint)*(byte *)(param_1 + 0x584) * 4 + *(int *)(puVar2 + -0x7f98)) +
                      *(int *)(puVar2 + -0x7f98)))();
    return uVar3;
  }
  if (*(char *)(param_1 + 0x584) == '\x03') {
    iVar5 = FUN_0063a404(iVar4 + 0x6b8);
    if (iVar5 == 0) {
      iVar5 = iVar4 + 8;
      iVar6 = FUN_0064056c(iVar5);
      iVar7 = FUN_00640580(iVar5);
      uVar8 = FUN_00640564(iVar5);
      iVar5 = FUN_006405f4(iVar5);
      if ((iVar6 - iVar7 < 1) ||
         (uVar8 = uVar8 ^ (iVar6 - iVar7) + iVar5, uVar1 = (int)uVar8 >> 0x1f,
         -1 < (int)(((uVar1 ^ uVar8) - uVar1) + -1))) {
        iVar5 = *(int *)(iVar4 + 0x1e70);
        *(int *)(iVar4 + 0x1e70) = iVar5 + 1;
        if (iVar5 + 1U < 0x961) {
          uVar8 = FUN_00604918();
          if ((uVar8 & 0x3f) == 0) {
            FUN_00604918();
            snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f9c));
          }
        }
        else {
          FUN_00604918();
          snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fa0));
          puVar9 = (undefined4 *)FUN_0063e9c4(*(undefined4 *)(iVar4 + 0x6a8));
          FUN_006084f4(*puVar9,1);
        }
        goto LAB_00637ea0;
      }
    }
    uVar10 = 2;
    puVar9 = (undefined4 *)FUN_0063e9c4(*(undefined4 *)(iVar4 + 0x6a8));
    FUN_0063ea68(*puVar9);
    FUN_00604918();
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fa4));
    *(undefined1 *)(param_1 + 0x584) = 2;
  }
LAB_00637ea0:
  FUN_006377fc(uVar3);
  *(undefined1 *)(param_1 + 0x584) = uVar10;
  return 0;
}



//==== 00638ea0  ns=Global  size=0x338
// sig: undefined FUN_00638ea0(void)
// callers(2): 006391d8 FUN_006391d8; 00639264 FUN_00639264
// callees(6): 0061a5b8 FUN_0061a5b8; 0061f100 FUN_0061f100; 0061f114 FUN_0061f114; 0061f128 FUN_0061f128; 00620290 FUN_00620290; 006299b8 FUN_006299b8

void FUN_00638ea0(int param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar11 = PTR_PTR_0071b050;
  iVar2 = *(int *)(param_1 + 0x23c);
  if ((iVar2 != 0) && (-1 < *(int *)(iVar2 + 0x1e94))) {
    iVar12 = param_2[0x7f];
    uVar3 = *(undefined4 *)(*param_2 + 0x240);
    *(uint *)(iVar2 + 0x1ed0) = *(uint *)(iVar2 + 0x1ed0) | param_2[0x76];
    *(int *)(iVar2 + 0x1ee0) = iVar12;
    *(undefined4 *)(iVar2 + 0x1ee4) = uVar3;
    *(undefined1 *)(*(int *)(iVar2 + 0x6a8) + 0x10) = *(undefined1 *)(param_2 + 0xb);
    *(int *)(iVar2 + 0x1ed8) = *param_2;
    iVar12 = FUN_0061a5b8(param_1,0);
    if (iVar12 < 0) {
      piVar4 = *(int **)(puVar11 + -0x7f80);
    }
    else {
      piVar4 = *(int **)(puVar11 + -0x7f80);
      do {
        iVar5 = param_2[0x79];
        iVar10 = iVar12 * 0x68;
        iVar14 = iVar10 + *piVar4;
        *(int *)(iVar14 + 0x30) = param_2[0x78];
        *(int *)(iVar14 + 0x38) = iVar5;
        *(undefined1 *)(iVar14 + 8) = *(undefined1 *)((int)param_2 + 0x2d);
        iVar5 = param_2[0x7d];
        iVar14 = iVar10 + *piVar4;
        *(int *)(iVar14 + 0xc) = param_2[0xc];
        if (iVar5 != 0) {
          if ((*(ushort *)(iVar5 + 0xe) & 0x4000) == 0) {
            iVar13 = *piVar4;
            sVar1 = *(short *)(iVar5 + 0xe);
            *(undefined4 *)(iVar14 + 0x50) = *(undefined4 *)(puVar11 + -0x7f7c);
            if (-1 < sVar1) goto LAB_00638f68;
LAB_0063906c:
            iVar14 = *piVar4;
            sVar1 = *(short *)(iVar5 + 0xe);
            *(undefined4 *)(iVar10 + iVar13 + 0x54) = *(undefined4 *)(iVar5 + 0x28);
            if (sVar1 < 0) goto LAB_00639094;
LAB_00638f90:
            uVar3 = *(undefined4 *)(puVar11 + -0x7f7c);
          }
          else {
            iVar13 = *piVar4;
            sVar1 = *(short *)(iVar5 + 0xe);
            *(undefined4 *)(iVar14 + 0x50) = *(undefined4 *)(iVar5 + 0x24);
            if (sVar1 < 0) goto LAB_0063906c;
LAB_00638f68:
            iVar14 = *piVar4;
            sVar1 = *(short *)(iVar5 + 0xe);
            *(undefined4 *)(iVar10 + iVar13 + 0x54) = *(undefined4 *)(puVar11 + -0x7f7c);
            if (-1 < sVar1) goto LAB_00638f90;
LAB_00639094:
            uVar3 = *(undefined4 *)(iVar5 + 0x2c);
          }
          iVar13 = *piVar4;
          *(undefined4 *)(iVar10 + iVar14 + 0x58) = uVar3;
          *(int *)(iVar10 + iVar13 + 0x24) =
               (int)(((longlong)*(char *)(iVar5 + 8) & 0xffffffffU) << 7);
          *(int *)(iVar10 + iVar13 + 0x20) = (int)*(char *)(iVar5 + 9) << 7;
        }
        iVar12 = FUN_0061a5b8(param_1,iVar12 + 1);
      } while (-1 < iVar12);
    }
    *(undefined1 *)(iVar2 + 0x6b3) = *(undefined1 *)((int)param_2 + 0x2d);
    uVar6 = param_2[10];
    *(int *)(iVar2 + 0x1ed4) = param_2[0xc];
    *(uint *)(iVar2 + 0x1ed0) = *(uint *)(iVar2 + 0x1ed0) | uVar6 >> 1 & 1;
    *(byte *)(iVar2 + 0x6b5) = (byte)((uint)param_2[10] >> 3) & 1;
    if ((param_2[10] & 8U) != 0) {
      *(uint *)(*(int *)(iVar2 + 0x6a8) + 4) = *(uint *)(*(int *)(iVar2 + 0x6a8) + 4) | 0x40000;
    }
    iVar12 = param_2[0x7e];
    uVar3 = *(undefined4 *)(iVar12 + 0x10);
    *(undefined4 *)(iVar2 + 0x1ea0) = *(undefined4 *)(iVar12 + 4);
    uVar7 = *(undefined4 *)(iVar12 + 0x18);
    *(undefined4 *)(iVar2 + 0x1ea4) = *(undefined4 *)(iVar12 + 8);
    uVar8 = *(undefined4 *)(iVar12 + 0x14);
    uVar9 = *(undefined4 *)(iVar12 + 0x1c);
    iVar5 = *(int *)(iVar12 + 0xc);
    *(undefined4 *)(iVar2 + 0x1eac) = uVar3;
    *(undefined4 *)(iVar2 + 0x1eb0) = uVar8;
    *(undefined4 *)(iVar2 + 0x1eb4) = uVar7;
    *(undefined4 *)(iVar2 + 0x1eb8) = uVar9;
    uVar3 = *(undefined4 *)(iVar12 + 0x20);
    *(int *)(iVar2 + 0x1ea8) = iVar5;
    *(undefined4 *)(iVar2 + 0x1ebc) = uVar3;
    if (iVar5 == 0) {
      *(undefined4 *)(iVar2 + 0x1ea8) = 1;
    }
    FUN_006299b8(*(undefined4 *)(*(int *)(iVar2 + 0x1e94) * 0x68 + *piVar4 + 0x60),param_3);
    if (param_2[0x7f] != 0) {
      FUN_00620290(*(undefined4 *)(iVar2 + 0x1e94),param_2[0x7f],*(undefined4 *)(iVar2 + 0x6a8));
    }
    FUN_0061f128(*(undefined4 *)(iVar2 + 0x6a8));
    FUN_0061f114(*(undefined4 *)(iVar2 + 0x6a8));
    FUN_0061f100(*(undefined4 *)(iVar2 + 0x6a8));
  }
  return;
}



//==== 006391d8  ns=Global  size=0x8c
// sig: undefined FUN_006391d8(void)
// callers(2): 006391d8 FUN_006391d8; 00639264 FUN_00639264
// callees(2): 00638ea0 FUN_00638ea0; 006391d8 FUN_006391d8

void FUN_006391d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_00638ea0(iVar1,param_2,param_3);
    if (*(int *)(iVar1 + 0x22c) != 0) {
      FUN_006391d8(*(int *)(iVar1 + 0x22c),param_2,param_3);
    }
  }
  return;
}



//==== 00639264  ns=Global  size=0xd8
// sig: undefined FUN_00639264(void)
// callers(0): 
// callees(5): 00610c74 FUN_00610c74; 00632ec0 FUN_00632ec0; 00633bf8 FUN_00633bf8; 00638ea0 FUN_00638ea0; 006391d8 FUN_006391d8

void FUN_00639264(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_340 [56];
  undefined1 auStack_308 [736];
  
  iVar2 = FUN_00633bf8();
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x245) != '\0')) {
    iVar1 = *(int *)(iVar2 + 0x57c);
    if (iVar1 != 0) {
      FUN_00610c74(param_2,param_3,*(undefined4 *)(iVar1 + 0x1edc),auStack_340);
      FUN_00632ec0(iVar2,auStack_308,*(undefined1 *)(*(int *)(iVar2 + 0x57c) + 0x1e79));
      FUN_00638ea0(iVar2,auStack_340,iVar1 + 0x1e20);
      FUN_006391d8(iVar2,auStack_340,iVar1 + 0x1e20);
    }
  }
  return;
}



//==== 0063933c  ns=Global  size=0x2b0
// sig: undefined FUN_0063933c(void)
// callers(1): 00639a28 FUN_00639a28
// callees(5): 006084f4 FUN_006084f4; 0061948c 989snd::snd_Printf; 00633d70 FUN_00633d70; 006363e4 FUN_006363e4; 006364a0 FUN_006364a0
// strings: 00671fa0: 'common/snd_stream_scream.cpp' | 00672300: '%s(%d) : Attempt to transition to streaming grain with different parent.\n' | 00672350: '%s(%d) : Attempt to transition to streaming grain with different blockID.\n'

int FUN_0063933c(double param_1,int param_2,int param_3,undefined8 param_4,uint *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_stack_00000074;
  uint in_stack_0000007c;
  undefined4 in_stack_00000084;
  
  puVar6 = PTR_PTR_0071b050;
  iVar7 = FUN_00633d70(param_4);
  if (iVar7 == 0) {
    if ((*param_5 & 1) == 0) {
      return 0;
    }
    iVar7 = FUN_006363e4(param_7,param_8,0xffffffffffffffff);
    iVar8 = FUN_00633d70(iVar7);
    if ((iVar8 != 0) && (param_2 != 0)) {
      *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(iVar8 + 0x6a8);
    }
  }
  else {
    if (*(int *)(iVar7 + 0x1ed8) != param_2) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f60));
      return 0;
    }
    if (*(int *)(iVar7 + 0x1ee4) != *(int *)(param_2 + 0x240)) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f5c));
      return 0;
    }
    if (*(int *)(iVar7 + 0x1edc) == param_3) {
      if (*(int *)(iVar7 + 0x1e9c) != 0) {
        FUN_006084f4(*(int *)(iVar7 + 0x1e9c),1);
        *(undefined4 *)(iVar7 + 0x1e9c) = 0;
        return 0;
      }
      return 0;
    }
    iVar7 = FUN_006364a0(param_4,param_5,param_6,param_7,param_8);
  }
  if ((iVar7 != 0) && (iVar8 = FUN_00633d70(iVar7), iVar8 != 0)) {
    iVar3 = *(int *)(iVar8 + 0x6a8);
    uVar4 = *(undefined4 *)(param_2 + 0x240);
    uVar1 = *(undefined4 *)(param_2 + 0x128);
    *(uint *)(iVar8 + 0x1ed0) = *(uint *)(iVar8 + 0x1ed0) | in_stack_0000007c;
    uVar5 = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(iVar3 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    uVar2 = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(iVar8 + 0x1ee0) = in_stack_00000084;
    *(int *)(iVar8 + 0x1edc) = param_3;
    *(undefined4 *)(iVar8 + 0x1ee4) = uVar4;
    *(float *)(iVar3 + 0x11c) = (float)param_1;
    *(undefined4 *)(iVar3 + 0x130) = in_stack_00000074;
    *(undefined4 *)(iVar3 + 0x128) = uVar1;
    *(undefined4 *)(iVar3 + 0x138) = uVar5;
    *(undefined4 *)(iVar3 + 0x160) = uVar2;
    *(int *)(iVar8 + 0x1ed8) = param_2;
  }
  return iVar7;
}



//==== 006395ec  ns=Global  size=0x1d8
// sig: undefined FUN_006395ec(void)
// callers(1): 00639a28 FUN_00639a28
// callees(3): 0061948c 989snd::snd_Printf; 00633d70 FUN_00633d70; 006362a4 FUN_006362a4
// strings: 00671fa0: 'common/snd_stream_scream.cpp' | 006723d8: '%s(%d) : Attempt to queue to streaming grain with different parent.\n' | 00672420: '%s(%d) : Attempt to queue to streaming grain with different blockID.\n' | 006723a0: '%s(%d) : Stream grain no longer active for queueing.\n' | 00672468: '%s(%d) : Queued stream grain started new stream.\n'

int FUN_006395ec(double param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint in_stack_00000074;
  undefined4 in_stack_0000007c;
  
  puVar7 = PTR_PTR_0071b050;
  iVar8 = FUN_00633d70(param_4);
  iVar9 = 0;
  if (iVar8 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f58));
  }
  else {
    iVar3 = *(int *)(iVar8 + 0x1ed8);
    iVar9 = 0;
    if (iVar3 == param_2) {
      iVar9 = 0;
      if (*(int *)(iVar8 + 0x1ee4) == *(int *)(iVar3 + 0x240)) {
        iVar9 = FUN_006362a4(param_4,param_5,param_6,param_7);
        if (param_4 != iVar9) {
          989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f4c));
          iVar4 = *(int *)(iVar8 + 0x6a8);
          uVar5 = *(undefined4 *)(iVar3 + 0x240);
          uVar1 = *(undefined4 *)(iVar3 + 0x128);
          *(uint *)(iVar8 + 0x1ed0) = *(uint *)(iVar8 + 0x1ed0) | in_stack_00000074;
          uVar6 = *(undefined4 *)(iVar3 + 0x138);
          uVar2 = *(undefined4 *)(iVar3 + 0x160);
          *(undefined4 *)(iVar4 + 0x150) = *(undefined4 *)(iVar3 + 0x150);
          *(undefined4 *)(iVar8 + 0x1edc) = param_3;
          *(int *)(iVar3 + 0x248) = iVar4;
          *(undefined4 *)(iVar8 + 0x1ee0) = in_stack_0000007c;
          *(undefined4 *)(iVar8 + 0x1ee4) = uVar5;
          *(float *)(iVar4 + 0x11c) = (float)param_1;
          *(undefined4 *)(iVar4 + 0x130) = param_9;
          *(undefined4 *)(iVar4 + 0x128) = uVar1;
          *(undefined4 *)(iVar4 + 0x138) = uVar6;
          *(undefined4 *)(iVar4 + 0x160) = uVar2;
          *(int *)(iVar8 + 0x1ed8) = iVar3;
        }
      }
      else {
        989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f50));
      }
    }
    else {
      989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f54));
    }
  }
  return iVar9;
}



//==== 006397c4  ns=Global  size=0x264
// sig: undefined FUN_006397c4(void)
// callers(1): 00639a28 FUN_00639a28
// callees(9): 0060fabc FUN_0060fabc; 00610224 FUN_00610224; 006102b0 FUN_006102b0; 00610494 FUN_00610494; 00610bb4 FUN_00610bb4; 0061a790 FUN_0061a790; 00633d70 FUN_00633d70; 00635400 FUN_00635400; 006363e4 FUN_006363e4

undefined4
FUN_006397c4(double param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,uint param_8,undefined8 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar9;
  undefined4 uVar8;
  double dVar10;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined1 auStack_a0 [56];
  
  puVar4 = PTR_PTR_0071b050;
  uVar5 = FUN_006363e4(param_4,param_5,param_9);
  if (in_stack_00000074 != 0) {
    iVar6 = FUN_00610494(in_stack_00000074,4);
    iVar7 = FUN_00610494(in_stack_00000074,10);
    if (iVar7 == 0) {
      if (iVar6 != 0) {
        FUN_00610224(iVar6,auStack_a0);
        FUN_00635400(uVar5,auStack_a0);
      }
    }
    else {
      FUN_006102b0(iVar7,auStack_a0);
      FUN_00635400(uVar5,auStack_a0);
    }
  }
  iVar6 = FUN_00633d70(uVar5);
  if (iVar6 != 0) {
    if (in_stack_0000007c != 0) {
      *(char *)(iVar6 + 0x1e51) =
           (char)(((longlong)*(char *)(in_stack_0000007c + 9) & 0xffffffffU) << 7);
      *(char *)(iVar6 + 0x1e50) =
           (char)(((longlong)*(char *)(in_stack_0000007c + 8) & 0xffffffffU) << 7);
      uVar9 = FUN_00610bb4(param_2,*(undefined1 *)(in_stack_0000007c + 1));
      dVar10 = (double)FUN_0060fabc(uVar9,0);
      *(float *)(iVar6 + 0x1e4c) = (float)dVar10;
    }
    *(int *)(iVar6 + 0x1ee0) = in_stack_00000074;
    *(uint *)(iVar6 + 0x1ed0) = *(uint *)(iVar6 + 0x1ed0) | param_8;
    if (param_2 == 0) {
      iVar7 = *(int *)(iVar6 + 0x6a8);
      uVar8 = *(undefined4 *)(puVar4 + -0x7f7c);
      *(undefined4 *)(iVar6 + 0x1edc) = param_3;
      *(undefined4 *)(iVar6 + 0x1ed8) = 0;
      *(undefined4 *)(iVar6 + 0x1ee4) = 0;
      *(float *)(iVar7 + 0x11c) = (float)param_1;
      *(undefined4 *)(iVar7 + 0x130) = param_7;
      *(undefined4 *)(iVar7 + 0x128) = uVar8;
      *(undefined4 *)(iVar7 + 0x160) = 0;
      *(undefined4 *)(iVar7 + 0x150) = 0;
      *(undefined4 *)(iVar7 + 0x138) = 0;
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x6a8);
      uVar2 = *(undefined4 *)(param_2 + 0x240);
      uVar3 = *(undefined4 *)(param_2 + 0x138);
      uVar8 = *(undefined4 *)(param_2 + 0x128);
      uVar1 = *(undefined4 *)(param_2 + 0x160);
      *(undefined4 *)(iVar7 + 0x150) = *(undefined4 *)(param_2 + 0x150);
      *(undefined4 *)(iVar6 + 0x1edc) = param_3;
      *(undefined4 *)(iVar6 + 0x1ee4) = uVar2;
      *(float *)(iVar7 + 0x11c) = (float)param_1;
      *(undefined4 *)(iVar7 + 0x130) = param_7;
      *(undefined4 *)(iVar7 + 0x128) = uVar8;
      *(undefined4 *)(iVar7 + 0x138) = uVar3;
      *(undefined4 *)(iVar7 + 0x160) = uVar1;
      *(int *)(iVar6 + 0x1ed8) = param_2;
      uVar8 = FUN_0061a790(uVar5);
      *(undefined4 *)(param_2 + 0x248) = uVar8;
    }
  }
  return uVar5;
}



//==== 00639a28  ns=Global  size=0x258
// sig: undefined FUN_00639a28(void)
// callers(0): 
// callees(3): 0063933c FUN_0063933c; 006395ec FUN_006395ec; 006397c4 FUN_006397c4

undefined4 FUN_00639a28(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_r7;
  undefined1 local_30 [12];
  undefined1 local_24 [20];
  
  uVar2 = param_1[0x77] & 0xe;
  param_1[8] = 0;
  if (uVar2 == 2) {
    FUN_006395ec((double)(float)param_1[0x7a],*param_1,param_1[1],*(undefined4 *)param_1[0x80],0,
                 param_1 + 2,param_1 + 10,param_1[0x7f],param_1[0x7b]);
    return 0;
  }
  if (uVar2 != 6) {
    if (uVar2 == 8) {
      iVar1 = param_1[0x7e];
      if (iVar1 != 0) {
        uVar3 = FUN_0063933c((double)(float)param_1[0x7a],*param_1,param_1[1],
                             *(undefined4 *)param_1[0x80],iVar1 + 4,iVar1 + 0x10,param_1 + 2,
                             param_1 + 10);
        return uVar3;
      }
      uVar3 = FUN_0063933c((double)(float)param_1[0x7a],*param_1,param_1[1],
                           *(undefined4 *)param_1[0x80],local_30,local_24,param_1 + 2,param_1 + 10);
    }
    else {
      uVar3 = FUN_006397c4((double)(float)param_1[0x7a],*param_1,param_1[1],param_1 + 2,param_1 + 10
                           ,in_r7,param_1[0x7b],param_1[0x76],param_1[0x7c]);
    }
    return uVar3;
  }
  FUN_006395ec((double)(float)param_1[0x7a],*param_1,param_1[1],*(undefined4 *)param_1[0x80],7,
               param_1 + 2,param_1 + 10,param_1[0x7f],param_1[0x7b]);
  return 0;
}



//==== 00639c80  ns=Global  size=0xa4
// sig: undefined FUN_00639c80(void)
// callers(2): 00633628 FUN_00633628; 0063ba6c FUN_0063ba6c
// callees(0): 

int FUN_00639c80(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar3 = **(int **)(PTR_PTR_0071b054 + -0x8000);
  if (**(uint **)(PTR_PTR_0071b054 + -0x7ffc) == 0) {
    return 0;
  }
  uVar4 = 1;
  uVar1 = **(uint **)(PTR_PTR_0071b054 + -0x7ff8);
  if ((uVar1 & 1) != 0) {
    uVar6 = (ulonglong)**(uint **)(PTR_PTR_0071b054 + -0x7ffc);
    uVar5 = 0;
    do {
      iVar3 = iVar3 + **(int **)(PTR_PTR_0071b054 + -0x7ff0);
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0;
      }
      uVar4 = 1 << (uVar5 & 0x3f);
    } while ((uVar4 & uVar1) != 0);
  }
  iVar2 = *(int *)(PTR_PTR_0071b054 + -0x7ff4);
  **(uint **)(PTR_PTR_0071b054 + -0x7ff8) = uVar1 | uVar4;
  *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
  return iVar3;
}



//==== 00639d24  ns=Global  size=0x94
// sig: undefined FUN_00639d24(void)
// callers(1): 0063ba6c FUN_0063ba6c
// callees(0): 

void FUN_00639d24(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b054;
  if (((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) && (*(int *)(param_1 + 4) != -1)) {
    (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0x10))
              (*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    iVar1 = *(int *)(puVar2 + -0x7ff4);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  }
  return;
}



//==== 00639db8  ns=Global  size=0x108
// sig: undefined FUN_00639db8(void)
// callers(1): 00639f70 FUN_00639f70
// callees(0): 

int FUN_00639db8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x57c);
  iVar2 = *(int *)(iVar1 + 0x1e54);
  if (*(char *)(iVar1 + 0x1e79) != '\0') {
    iVar3 = *(int *)(PTR_PTR_0071b054 + -0x7ff4);
    uVar6 = 0;
    piVar7 = (int *)(iVar1 + 0x1dc8);
    do {
      uVar6 = uVar6 + 1;
      iVar4 = *piVar7;
      iVar5 = (*(code *)**(undefined4 **)(*(int *)(iVar2 + 8) + 0x1c))
                        (*(undefined4 *)(iVar1 + 0x1e08),*(undefined4 *)(iVar2 + 0xc),
                         *(undefined4 *)(iVar4 + 4));
      if (iVar5 != 0) {
        *(undefined1 *)(iVar4 + 0x6b4) = 0;
        return iVar5;
      }
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      *(undefined1 *)(iVar4 + 0x6b4) = 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < *(byte *)(iVar1 + 0x1e79));
  }
  return 0;
}



//==== 00639ec0  ns=Global  size=0xb0
// sig: undefined FUN_00639ec0(void)
// callers(0): 
// callees(0): 

int FUN_00639ec0(int param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(longlong *)(param_1 + 0x1758) - *(longlong *)(param_1 + 0x1760);
  if (-1 < (longlong)uVar1) {
    return (int)(((double)(longlong)uVar1 / (double)*(uint *)(param_2 + 0x58)) *
                (double)*(float *)(PTR_PTR_0071b054 + -0x7fec));
  }
  return (int)(((double)uVar1 / (double)*(uint *)(param_2 + 0x58)) *
              (double)*(float *)(PTR_PTR_0071b054 + -0x7fec));
}



//==== 00639f70  ns=Global  size=0x90
// sig: undefined FUN_00639f70(void)
// callers(0): 
// callees(1): 00639db8 FUN_00639db8

int FUN_00639f70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x57c);
  iVar1 = (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x1e54) + 8) + 0x18))
                    (*(undefined4 *)(iVar1 + 0x1e08),*(undefined4 *)(*(int *)(iVar1 + 0x1e54) + 0xc)
                     ,*(undefined4 *)(iVar1 + 4));
  if ((iVar1 == 1) && (iVar2 = FUN_00639db8(param_1), iVar2 < 0)) {
    iVar1 = iVar2;
  }
  return iVar1;
}



//==== 0063a000  ns=Global  size=0x44
// sig: undefined FUN_0063a000(void)
// callers(0): 
// callees(0): 

ulonglong FUN_0063a000(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x179c);
  uVar2 = (ulonglong)*(uint *)(iVar1 + 0x54) /
          ((longlong)(int)((uint)*(byte *)(iVar1 + 0x15) * (uint)*(byte *)(iVar1 + 0x16)) *
           (longlong)*(int *)(iVar1 + 0x60) & 0xffffffffU) -
          (longlong)*(int *)(param_1 + 0x17bc) * (longlong)*(int *)(iVar1 + 0x5c);
  return uVar2 & (longlong)((int)~(uint)uVar2 >> 0x1f) & 0xffffffff;
}



//==== 0063a044  ns=Global  size=0x8
// sig: undefined FUN_0063a044(void)
// callers(3): 0063a134 FUN_0063a134; 0063a480 FUN_0063a480; 0063aab8 FUN_0063aab8
// callees(0): 

void FUN_0063a044(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x17b0) = param_2;
  return;
}



//==== 0063a04c  ns=Global  size=0x84
// sig: undefined FUN_0063a04c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0063a04c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  if (*(byte *)(param_1 + 0x17c1) == 0) {
    return 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x1710) + 0x6ac);
  if (piVar1 != (int *)0x0) {
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x17c1);
    piVar3 = (int *)(param_1 + 0x1714);
    if (*piVar1 == *(int *)(param_1 + 0x1710)) {
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          return 1;
        }
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar1 = *(int **)(iVar2 + 0x6ac);
      } while ((piVar1 != (int *)0x0) && (*piVar1 == iVar2));
    }
  }
  return 0;
}



//==== 0063a0d0  ns=Global  size=0x58
// sig: undefined FUN_0063a0d0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0063a0d0(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if (*(byte *)(param_1 + 0x17c1) != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x17c1);
    piVar2 = (int *)(param_1 + 0x1714);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1710) + 0x1e94);
    while( true ) {
      if (iVar1 != -1) {
        return 0;
      }
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) break;
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar1 = *(int *)(iVar1 + 0x1e94);
    }
  }
  return 1;
}



//==== 0063a128  ns=Global  size=0xc
// sig: undefined FUN_0063a128(void)
// callers(1): 00637620 FUN_00637620
// callees(0): 

void FUN_0063a128(int param_1)

{
  *(undefined1 *)(param_1 + 0x58a) = 1;
  return;
}



//==== 0063a134  ns=Global  size=0x18
// sig: undefined FUN_0063a134(void)
// callers(3): 00633628 FUN_00633628; 00635d10 FUN_00635d10; 0063be38 FUN_0063be38
// callees(1): 0063a044 FUN_0063a044

void FUN_0063a134(int param_1)

{
  if (*(int *)(param_1 + 0x17b0) != 10) {
    return;
  }
  FUN_0063a044(param_1,0xb);
  return;
}



//==== 0063a14c  ns=Global  size=0xbc
// sig: undefined FUN_0063a14c(void)
// callers(1): 006367dc FUN_006367dc
// callees(1): 0063fb20 idol::CreateSndParsingThread

int FUN_0063a14c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_0071b054;
  iVar4 = 0x4000;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar4 = *(int *)(param_1 + 0x20);
  }
  uVar1 = *(uint *)(PTR_PTR_0071b054 + -0x7fe4);
  iVar3 = idol::CreateSndParsingThread
                    ((ulonglong)uVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     iVar4,*(undefined4 *)(PTR_PTR_0071b054 + -0x7fe0));
  if (iVar3 == 0) {
    iVar3 = idol::CreateSndParsingThread
                      ((ulonglong)uVar1 + 0x30,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8),iVar4,*(undefined4 *)(puVar2 + -0x7fdc));
  }
  return iVar3;
}



//==== 0063a208  ns=Global  size=0x70
// sig: undefined FUN_0063a208(void)
// callers(3): 00635d10 FUN_00635d10; 00635ff8 FUN_00635ff8; 0063ba6c FUN_0063ba6c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 006724d8: 'common/snd_stream_threading.cpp' | 006724a0: '%s(%d) : ERROR Interleave size %d too big in %s\n'

undefined4 FUN_0063a208(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(uint *)(*(int *)(PTR_PTR_0071b054 + -0x7ff4) + 0xa4) <
      (uint)(*(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x60))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b054 + -0x7fd8));
    uVar1 = 0xffffff93;
  }
  return uVar1;
}



//==== 0063a278  ns=Global  size=0x118
// sig: undefined FUN_0063a278(void)
// callers(2): 0063a390 FUN_0063a390; 0063ba6c FUN_0063ba6c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 006724d8: 'common/snd_stream_threading.cpp' | 00672528: '%s(%d) : ERROR Unrecognized MIDI buffer at %p.\n' | 006724f8: '%s(%d) : ERROR Double free of MIDI buffer %p.\n'

undefined4 FUN_0063a278(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (**(uint **)(PTR_PTR_0071b054 + -0x7ffc) == 0) {
LAB_0063a2e8:
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b054 + -0x7fcc));
  }
  else {
    uVar3 = 1;
    if (**(int **)(PTR_PTR_0071b054 + -0x8000) != param_1) {
      uVar5 = (ulonglong)**(uint **)(PTR_PTR_0071b054 + -0x7ffc);
      uVar3 = 0;
      iVar1 = **(int **)(PTR_PTR_0071b054 + -0x7ff0);
      iVar4 = **(int **)(PTR_PTR_0071b054 + -0x8000) + iVar1;
      do {
        iVar4 = iVar4 + iVar1;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_0063a2e8;
      } while (iVar4 - iVar1 != param_1);
      uVar3 = 1 << (uVar3 & 0x3f);
    }
    uVar2 = **(uint **)(PTR_PTR_0071b054 + -0x7ff8);
    if ((uVar2 & uVar3) != 0) {
      iVar1 = *(int *)(PTR_PTR_0071b054 + -0x7ff4);
      **(uint **)(PTR_PTR_0071b054 + -0x7ff8) = uVar2 & ~uVar3;
      *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
      return 0;
    }
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b054 + -0x7fd0));
  }
  return 0xffffff95;
}



//==== 0063a390  ns=Global  size=0x5c
// sig: undefined FUN_0063a390(void)
// callers(2): 006322dc FUN_006322dc; 0063a3ec FUN_0063a3ec
// callees(1): 0063a278 FUN_0063a278

undefined4 FUN_0063a390(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_0063a278(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  }
  return uVar1;
}



//==== 0063a3ec  ns=Global  size=0x18
// sig: undefined FUN_0063a3ec(void)
// callers(0): 
// callees(1): 0063a390 FUN_0063a390

undefined8 FUN_0063a3ec(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_0063a390(param_1);
  return uVar1;
}



//==== 0063a404  ns=Global  size=0x7c
// sig: undefined FUN_0063a404(void)
// callers(1): 00637d2c 989snd::snd_ProcessStreamTick
// callees(1): 00637094 FUN_00637094

ulonglong FUN_0063a404(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_00637094();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x17b0) == 0xb)) {
    uVar2 = (ulonglong)((int)*(uint *)(param_1 + 0x17ac) >> 0x1f);
    return (((uVar2 ^ *(uint *)(param_1 + 0x17ac)) - uVar2) + -1 << 0x20) >> 0x3f;
  }
  return 0;
}



//==== 0063a480  ns=Global  size=0x44
// sig: undefined FUN_0063a480(void)
// callers(0): 
// callees(2): 006084f4 FUN_006084f4; 0063a044 FUN_0063a044

void FUN_0063a480(undefined4 *param_1,undefined8 param_2)

{
  FUN_0063a044(param_2,0x10);
  FUN_006084f4(*param_1,1);
  return;
}



//==== 0063a4c4  ns=Global  size=0x3d0
// sig: undefined FUN_0063a4c4(void)
// callers(0): 
// callees(8): 0061948c 989snd::snd_Printf; 00636d8c FUN_00636d8c; 00636eec FUN_00636eec; 0063c4c0 FUN_0063c4c0; 0064048c FUN_0064048c; 006404b8 FUN_006404b8; 00640668 FUN_00640668; 00640800 FUN_00640800
// strings: 006725d8: '%s(%d) : ERROR AsyncIsReadComplete failed on %s\n' | 006724d8: 'common/snd_stream_threading.cpp' | 00672558: '%s:%d, ERROR read buffer size is zero!\n' | 00672580: '%s:%d, ERROR interleaved MP3 block sized %d contains no valid data. data[0] = 0x%02X\n'

int FUN_0063a4c4(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar8;
  int iVar9;
  ulonglong uVar7;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_a0 [8];
  int local_98;
  
  puVar6 = PTR_PTR_0071b054;
  if ((*(int *)(param_1 + 0x1e54) == 0) || (*(char *)(param_1 + 0x1e79) == '\0')) {
    return 0;
  }
  piVar13 = (int *)(param_1 + 0x1dc8);
  iVar2 = *(int *)(PTR_PTR_0071b054 + -0x7ff4);
  uVar12 = 0;
LAB_0063a544:
  iVar3 = *piVar13;
  iVar14 = 0;
  iVar5 = iVar3 + 8;
  iVar8 = FUN_0064048c(iVar5);
  iVar16 = 0;
  if (-1 < iVar8) {
    do {
      iVar14 = iVar16;
      iVar16 = *(int *)(param_1 + 0x1e54);
      if (iVar16 != 0) {
        iVar9 = (*(code *)**(undefined4 **)(*(int *)(iVar16 + 8) + 0x24))
                          (*(undefined4 *)(param_1 + 0x1e08),*(undefined4 *)(iVar16 + 0xc),
                           *(undefined4 *)(iVar3 + 4),iVar8);
        if (iVar9 < 1) {
          if (iVar9 != 0) {
            989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fbc));
            *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
            iVar14 = iVar9;
            if (*(int *)(param_1 + 0x1e64) == 0) {
              FUN_00640800(iVar5,iVar8,0);
            }
            else {
              *(int *)(param_1 + 0x1e64) = *(int *)(param_1 + 0x1e64) + -1;
              FUN_00640800(iVar5,iVar8,0);
            }
            goto LAB_0063a580;
          }
        }
        else {
          *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
          if (*(int *)(param_1 + 0x1e64) != 0) {
            *(int *)(param_1 + 0x1e64) = *(int *)(param_1 + 0x1e64) + -1;
          }
          if (*(char *)(iVar16 + 0x14) == '\x01') {
            if ((**(char **)(puVar6 + -0x7fc8) != '\0') && (*(char *)(iVar16 + 0x13) == '\x02')) {
              iVar9 = FUN_00636d8c(iVar5,iVar8);
              uVar7 = FUN_00636eec(iVar5,iVar8);
              uVar7 = (uVar7 & 0xffffffff) / (ulonglong)*(byte *)(iVar16 + 0x13);
              if ((int)uVar7 == 0) goto LAB_0063a574;
              iVar10 = 0;
              do {
                puVar4 = (ushort *)(iVar10 + iVar9);
                iVar10 = iVar10 + 2;
                uVar1 = *puVar4;
                *puVar4 = uVar1 >> 8 | uVar1 << 8;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
              if (*(char *)(iVar16 + 0x14) != '\x06') goto LAB_0063a580;
              goto LAB_0063a6c0;
            }
          }
          else {
LAB_0063a574:
            if (*(char *)(iVar16 + 0x14) == '\x06') {
LAB_0063a6c0:
              iVar15 = 0;
              iVar9 = FUN_00636d8c(iVar5,iVar8);
              iVar10 = FUN_00636eec(iVar5,iVar8);
              iVar16 = iVar10;
              if (iVar10 == 0) {
                iVar15 = 0;
                989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc4));
LAB_0063a868:
                iVar14 = -0x68;
                989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc0));
              }
              else {
                do {
                  iVar11 = FUN_0063c4c0(iVar9,auStack_a0);
                  if (iVar11 != 0) break;
                  iVar16 = iVar16 - local_98;
                  iVar9 = iVar9 + local_98;
                  iVar15 = iVar15 + local_98;
                } while (iVar16 != 0);
                if (iVar15 == 0) goto LAB_0063a868;
              }
              if (iVar10 != iVar15) {
                FUN_00640800(iVar5,iVar8,iVar15);
              }
            }
          }
LAB_0063a580:
          FUN_00640668(iVar5,iVar8);
        }
      }
      iVar8 = FUN_006404b8(iVar5,iVar8);
      if (iVar8 < 0) goto LAB_0063a808;
      iVar16 = iVar14;
      if (iVar14 < 0) {
        return iVar14;
      }
    } while( true );
  }
  goto LAB_0063a810;
LAB_0063a808:
  if (iVar14 < 0) {
    return iVar14;
  }
LAB_0063a810:
  uVar12 = uVar12 + 1;
  piVar13 = piVar13 + 1;
  if (*(byte *)(param_1 + 0x1e79) <= uVar12) {
    return iVar14;
  }
  goto LAB_0063a544;
}



//==== 0063a894  ns=989snd  size=0x224
// sig: undefined sndi_CloseAsyncFilePlayer(void)
// callers(0): 
// callees(6): 00604918 FUN_00604918; 0061948c 989snd::snd_Printf; 006316c0 FUN_006316c0; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063ea18 FUN_0063ea18
// strings: 00672610: '[%d]: WARNING: sndi_CloseAsyncFilePlayer has %d requests outstanding.\n'

void 989snd::sndi_CloseAsyncFilePlayer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  puVar3 = PTR_PTR_0071b054;
  if (((param_2 != 0) && (*(int *)(param_2 + 8) != 0)) && (*(int *)(param_1 + 0x1e08) != -1)) {
    if (*(int *)(param_1 + 0x1e64) != 0) {
      FUN_00604918();
      snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fb8));
    }
    puVar4 = (undefined4 *)FUN_0063ea18(*(undefined4 *)(param_1 + 0x6a8));
    iVar1 = puVar4[0x15f];
    iVar2 = *(int *)(iVar1 + 0x1e54);
    if (*(char *)(iVar1 + 0x1e79) == '\0') {
      iVar6 = *(int *)(puVar3 + -0x7ff4);
    }
    else {
      iVar6 = *(int *)(puVar3 + -0x7ff4);
      uVar7 = 0;
      piVar8 = (int *)(iVar1 + 0x1dc8);
LAB_0063a958:
      do {
        uVar7 = uVar7 + 1;
        iVar5 = *piVar8;
        if (*(char *)(iVar5 + 0x6b4) != '\0') {
          *(undefined1 *)(iVar5 + 0x6b4) = 0;
          iVar5 = (*(code *)**(undefined4 **)(*(int *)(iVar2 + 8) + 0x28))
                            (*(undefined4 *)(iVar1 + 0x1e08),*(undefined4 *)(iVar2 + 0xc),
                             *(undefined4 *)(iVar5 + 4));
          if (iVar5 == 0) {
            *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
            piVar8 = piVar8 + 1;
            if (*(byte *)(iVar1 + 0x1e79) <= uVar7) break;
            goto LAB_0063a958;
          }
        }
        piVar8 = piVar8 + 1;
      } while (uVar7 < *(byte *)(iVar1 + 0x1e79));
    }
    FUN_00633da4();
    (*(code *)**(undefined4 **)(*(int *)(param_2 + 8) + 0x2c))
              (*(undefined4 *)(param_1 + 0x1e08),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_1 + 4));
    FUN_006316c0(*puVar4,3,*(undefined4 *)(param_2 + 0xc),0);
    FUN_00633e34();
    *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x1e54) = 0;
    *(undefined4 *)(param_1 + 0x1e08) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e68) = 10;
    *(undefined4 *)(param_1 + 0x1e64) = 0;
    *(undefined4 *)(param_1 + 0x1e74) = 0;
    *(undefined1 *)(param_1 + 0x1e78) = 0;
  }
  return;
}



//==== 0063aab8  ns=Global  size=0x2c0
// sig: undefined FUN_0063aab8(void)
// callers(0): 
// callees(8): 0061948c 989snd::snd_Printf; 00631058 FUN_00631058; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 0063a044 FUN_0063a044; 0063f99c FUN_0063f99c; 0063fc80 FUN_0063fc80; 0063fcd8 FUN_0063fcd8
// strings: 00672868: '%s(%d) : BumpServiceStreamStateMachine: invalid state = %d\n' | 006724d8: 'common/snd_stream_threading.cpp'

undefined8 FUN_0063aab8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar10;
  uint uStack00000008;
  int local_dc;
  
  puVar3 = PTR_PTR_0071b054;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (*param_1 == 0) {
    iVar1 = *(int *)(PTR_PTR_0071b054 + -0x7ff4);
    do {
      FUN_00633e34();
      iVar5 = FUN_0063f99c();
      if (0 < *(int *)(iVar1 + 0xa0)) {
        iVar7 = 0;
        iVar8 = 0;
        local_dc = 0;
        do {
          while( true ) {
            iVar9 = iVar8 + *(int *)(iVar1 + 0x9c);
            if ((*(char *)(iVar9 + 0x245) == '\0') || (iVar6 = FUN_00631058(iVar9), iVar6 == 0))
            break;
            iVar6 = *(int *)(iVar9 + 0x57c);
            if (*(char *)(iVar9 + 0x58a) != '\0') {
              *(undefined1 *)(iVar9 + 0x58a) = 0;
              if (iVar6 != 0) {
                iVar9 = iVar6 + 0x6c8;
                lVar10 = 8;
                do {
                  puVar2 = *(undefined4 **)(iVar9 + 700);
                  if (puVar2 != (undefined4 *)0x0) {
                    *(undefined4 *)(iVar9 + 700) = 0;
                    *puVar2 = 0;
                  }
                  iVar9 = iVar9 + 0x2e0;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              if (*(int *)(iVar6 + 0x1e68) == 0xc) {
                FUN_0063a044(iVar6 + 0x6b8,0x11);
              }
              else {
                FUN_0063a044(iVar6 + 0x6b8,0x12);
              }
            }
            if (*(int *)(iVar6 + 0x1e68) - 10U < 10) {
              iVar1 = *(int *)(puVar3 + -0x7fb4);
                    /* WARNING: Could not recover jumptable at 0x0063ac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (*(code *)(*(int *)((*(int *)(iVar6 + 0x1e68) + -10) * 4 + iVar1) + iVar1))();
              return uVar4;
            }
            989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f88));
            local_dc = -0x6b;
            FUN_00633da4();
            FUN_00633e34();
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0x58c;
            if (*(int *)(iVar1 + 0xa0) <= iVar7) goto LAB_0063ad48;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x58c;
        } while (iVar7 < *(int *)(iVar1 + 0xa0));
LAB_0063ad48:
        if (local_dc < 0) {
          *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + 1;
        }
      }
      iVar7 = FUN_0063f99c();
      if (*(uint *)(iVar1 + 0x68) < (uint)(iVar7 - iVar5)) {
        *(int *)(iVar1 + 0x68) = iVar7 - iVar5;
      }
      FUN_00633da4();
      FUN_0063fcd8(param_1,5000);
    } while (*param_1 == 0);
  }
  FUN_0063fc80(param_1,0);
  return 0;
}



//==== 0063b9e8  ns=Global  size=0x84
// sig: undefined FUN_0063b9e8(void)
// callers(1): 00636718 FUN_00636718
// callees(2): 0063f8e0 FUN_0063f8e0; 0063fa4c FUN_0063fa4c

void FUN_0063b9e8(void)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(PTR_PTR_0071b054 + -0x7f84);
  iVar1 = FUN_0063f8e0(uVar2);
  if (iVar1 != 0) {
    FUN_0063fa4c(uVar2);
  }
  iVar1 = FUN_0063f8e0(uVar2 - 0x30);
  if (iVar1 != 0) {
    FUN_0063fa4c(uVar2 - 0x30);
  }
  return;
}



//==== 0063ba6c  ns=Global  size=0x3cc
// sig: undefined FUN_0063ba6c(void)
// callers(2): 00633978 FUN_00633978; 0063be38 FUN_0063be38
// callees(8): 0061948c 989snd::snd_Printf; 00639c80 FUN_00639c80; 00639d24 FUN_00639d24; 0063a208 FUN_0063a208; 0063a278 FUN_0063a278; 0063c564 FUN_0063c564; 0063d08c FUN_0063d08c; 0063f8ec FUN_0063f8ec
// strings: 006724d8: 'common/snd_stream_threading.cpp' | 00672948: '%s(%d) : ERROR File data size is not a multiple of the complete frame size. dataSize = %u, frameSize = %u\n' | 006728f0: '%s(%d) : ERROR File not parsed, \' "%s"\n' | 00672918: '%s(%d) : ERROR Unsupported file type for %s\n' | 006728d0: '%s(%d) : File seek error.\n' | 006729b8: '%s(%d) : ERROR File has multiple bitstreams but SND_SS_INIT_NO_MULTISTREAMS flag set.\n' | 006728a8: '%s(%d) : File open error for "%s"\n' | 00672a10: '%s(%d) : ERROR Unable to allocate midi file buffer.\n'

int FUN_0063ba6c(int param_1,longlong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar4;
  int iVar5;
  longlong lVar3;
  ulonglong uVar6;
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  puVar2 = PTR_PTR_0071b054;
  iVar4 = (**(code **)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 *)(param_1 + 400),param_1 + 4,0,0xfffffffffffffffd,
                     *(undefined4 *)(param_1 + 0xc));
  if (iVar4 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f80));
    return -0x67;
  }
  iVar4 = *(int *)(puVar2 + -0x7ff4);
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
  if ((param_2 == 0) ||
     (lVar3 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                        (*(undefined4 *)(param_1 + 4),param_2,0,*(undefined4 *)(param_1 + 0xc)),
     lVar3 == param_2)) {
    if (((*(byte *)(param_1 + 0x11) & 2) == 0) &&
       (iVar5 = FUN_0063d08c(param_1,param_3), iVar5 == 0)) {
      iVar5 = -0x68;
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f78));
    }
    else {
      iVar5 = FUN_0063f8ec(*(undefined1 *)(param_1 + 0x14));
      if (iVar5 == 0) {
        iVar5 = -0x69;
        989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f74));
      }
      else if (*(uint *)(param_1 + 0x54) ==
               (*(uint *)(param_1 + 0x54) / *(uint *)(param_1 + 0x60)) * *(uint *)(param_1 + 0x60))
      {
        iVar5 = FUN_0063a208(param_1);
        if (iVar5 == 0) {
          if (((uint)*(byte *)(param_1 + 0x16) * (uint)*(byte *)(param_1 + 0x15) < 2) ||
             ((*(uint *)(iVar4 + 0x88) & 8) == 0)) {
            puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 4);
            if (puVar1 != (undefined4 *)0x0) {
              if (*(char *)(param_1 + 0x14) == '\x01') {
                uVar6 = (ulonglong)
                        ((float)*(uint *)(param_1 + 0x58) * *(float *)(puVar2 + -0x7f68) *
                        (float)*(byte *)(param_1 + 0x17));
              }
              else {
                uVar6 = 0;
                if ((byte)(*(char *)(param_1 + 0x14) - 2U) < 3) {
                  uVar6 = (ulonglong)
                          (((float)*(uint *)(param_1 + 0x58) * *(float *)(puVar2 + -0x7f68) *
                           (float)*(byte *)(param_1 + 0x17)) / *(float *)(puVar2 + -0x7f60));
                }
              }
              (*(code *)*puVar1)(*(undefined4 *)(param_1 + 4),uVar6 & 0xffffffff,0);
            }
            if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
LAB_0063bd24:
              FUN_00639d24(param_1);
              *(undefined1 *)(param_1 + 0x12) = 1;
              return 0;
            }
            iVar4 = FUN_00639c80();
            *(int *)(param_1 + 0x78) = iVar4;
            if (iVar4 == 0) {
              iVar5 = -0x72;
              989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f58));
            }
            else {
              iVar5 = FUN_0063c564(param_1);
              if (iVar5 == 0) {
                *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
                goto LAB_0063bd24;
              }
              FUN_0063a278(*(undefined4 *)(param_1 + 0x78));
              *(undefined4 *)(param_1 + 0x78) = 0;
            }
          }
          else {
            iVar5 = -0x69;
            989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f6c));
          }
        }
      }
      else {
        iVar5 = -0x68;
        989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f70));
      }
    }
  }
  else {
    iVar5 = -0x6a;
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f7c));
  }
  FUN_00639d24(param_1);
  return iVar5;
}



//==== 0063be38  ns=Global  size=0x3f0
// sig: undefined FUN_0063be38(void)
// callers(0): 
// callees(20): 005c5ad0 libc::memcpy; 006084f4 FUN_006084f4; 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 00631358 FUN_00631358; 006316c0 FUN_006316c0; 00633008 FUN_00633008; 006332dc FUN_006332dc; 00633da4 FUN_00633da4; 00633e34 FUN_00633e34; 00637094 FUN_00637094; 00637100 FUN_00637100; 00637170 FUN_00637170; 0063a134 FUN_0063a134; 0063ba6c FUN_0063ba6c; 0063e9c4 FUN_0063e9c4; 0063ea18 FUN_0063ea18; 0063f99c FUN_0063f99c; 0063fc80 FUN_0063fc80; 0063fcd8 FUN_0063fcd8
// strings: 00672a90: '%s(%d) : ERROR Parsing Thread parsed file %s with different # substreams and bitstreams than current.\n' | 006724d8: 'common/snd_stream_threading.cpp' | 00672a48: '%s(%d) : ERROR Queued file of different type or channels or rate.\n'

undefined8 FUN_0063be38(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar10;
  int iVar11;
  ulonglong uVar9;
  undefined4 *puVar12;
  void *pvVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 auStack_330 [680];
  
  puVar8 = PTR_PTR_0071b054;
  FUN_00633e34();
  if (*param_1 == 0) {
    uVar3 = *(undefined4 *)(puVar8 + -0x7f54);
    iVar4 = *(int *)(puVar8 + -0x7ff4);
    do {
      iVar10 = FUN_0063f99c();
      iVar11 = FUN_00637094(uVar3);
      if (iVar11 == 0) {
        uVar9 = FUN_00637100(uVar3);
        puVar7 = (undefined4 *)
                 ((int)((uVar9 & 0xffffffff) << 2) + *(int *)(puVar8 + -0x7ff4) + 0xcc);
        pvVar5 = (void *)*puVar7;
        if (pvVar5 != (void *)0x0) {
          uVar17 = 0;
          if (*(int *)((int)pvVar5 + 0x2b8) != 0) {
            puVar12 = (undefined4 *)
                      FUN_0063ea18(*(undefined4 *)(*(int *)((int)pvVar5 + 0x2b8) + 0x6a8));
            uVar17 = *puVar12;
          }
          pvVar13 = libc::memcpy(auStack_330,pvVar5,0x298);
          uVar16 = *(undefined8 *)((int)pvVar5 + 0x2a8);
          FUN_00633da4(pvVar13);
          iVar11 = FUN_0063ba6c(auStack_330,uVar16,uVar17);
          FUN_00633e34();
          pvVar5 = (void *)*puVar7;
          if (iVar11 == 0) {
            if (pvVar5 != (void *)0x0) {
              iVar6 = *(int *)((int)pvVar5 + 0x2b8);
              if (iVar6 != 0) {
                puVar12 = (undefined4 *)FUN_0063ea18(*(undefined4 *)(iVar6 + 0x6a8));
                iVar14 = FUN_0061a790(*puVar12);
                if (iVar14 != 0) {
                  libc::memcpy(pvVar5,auStack_330,0x198);
                  *(int *)((int)pvVar5 + 400) = (int)pvVar5 + 0x198;
                  bVar1 = *(byte *)((int)puVar12 + 0x587);
                  bVar2 = *(byte *)((int)puVar12 + 0x586);
                  iVar14 = FUN_00631358(puVar12,pvVar5);
                  if (iVar14 == 0) {
                    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f50));
                    *(undefined4 *)((int)pvVar5 + 700) = 0;
                    FUN_006316c0(**(undefined4 **)(*(int *)((int)pvVar5 + 0x2b8) + 0x6a8),0,
                                 *(undefined4 *)((int)pvVar5 + 0xc),0);
                  }
                  else {
                    uVar15 = (uint)*(byte *)((int)pvVar5 + 0x15) *
                             (uint)*(byte *)((int)pvVar5 + 0x16);
                    if ((uint)bVar2 * (uint)bVar1 == uVar15) {
LAB_0063c09c:
                      FUN_00633008(puVar12);
                      FUN_0063a134(iVar6 + 0x6b8);
                      goto LAB_0063c0b0;
                    }
                    if (*(int *)(iVar6 + 0x1e68) == 10) {
                      if ((uVar15 < 2) ||
                         (iVar14 = FUN_006332dc(iVar6 + 0x6b8,iVar6,
                                                (uint)*(byte *)((int)pvVar5 + 0x15),
                                                (uint)*(byte *)((int)pvVar5 + 0x16),1), iVar14 == 0)
                         ) goto LAB_0063c09c;
                    }
                    else {
                      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f4c));
                    }
LAB_0063c0f8:
                    *(undefined4 *)((int)pvVar5 + 700) = 0;
                    FUN_006316c0(**(undefined4 **)(*(int *)((int)pvVar5 + 0x2b8) + 0x6a8),0,
                                 *(undefined4 *)((int)pvVar5 + 0xc),iVar11);
                  }
                  puVar12 = (undefined4 *)
                            FUN_0063e9c4(*(undefined4 *)(*(int *)((int)pvVar5 + 0x2b8) + 0x6a8));
                  FUN_006084f4(*puVar12,1);
                  goto LAB_0063c0d8;
                }
              }
LAB_0063c0b0:
              *(undefined4 *)((int)pvVar5 + 700) = 0;
              FUN_006316c0(**(undefined4 **)(*(int *)((int)pvVar5 + 0x2b8) + 0x6a8),0,
                           *(undefined4 *)((int)pvVar5 + 0xc),0);
            }
          }
          else if (pvVar5 != (void *)0x0) goto LAB_0063c0f8;
        }
LAB_0063c0d8:
        *puVar7 = 0;
        FUN_00637170(uVar3);
      }
      iVar11 = FUN_0063f99c();
      if (*(uint *)(iVar4 + 100) < (uint)(iVar11 - iVar10)) {
        *(int *)(iVar4 + 100) = iVar11 - iVar10;
      }
      FUN_00633da4();
      FUN_0063fcd8(param_1,50000);
      FUN_00633e34();
    } while (*param_1 == 0);
  }
  FUN_00633da4();
  FUN_0063fc80(param_1,0);
  return 0;
}



//==== 0063c228  ns=Global  size=0x24
// sig: undefined FUN_0063c228(void)
// callers(1): 0063c8a0 FUN_0063c8a0
// callees(0): 

undefined1 * FUN_0063c228(undefined1 *param_1,undefined2 *param_2)

{
  *param_2 = CONCAT11(param_1[1],*param_1);
  return param_1 + 2;
}



//==== 0063c24c  ns=Global  size=0x3c
// sig: undefined FUN_0063c24c(void)
// callers(1): 0063c8a0 FUN_0063c8a0
// callees(0): 

undefined1 * FUN_0063c24c(undefined1 *param_1,uint *param_2)

{
  *param_2 = (uint)CONCAT11(param_1[1],*param_1) |
             (uint)(byte)param_1[2] << 0x10 | (uint)(byte)param_1[3] << 0x18;
  return param_1 + 4;
}



//==== 0063c288  ns=Global  size=0xa8
// sig: undefined FUN_0063c288(void)
// callers(1): 0063c330 FUN_0063c330
// callees(0): 

uint FUN_0063c288(uint param_1)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if ((int)param_1 < 0) {
    iVar1 = 0;
    lVar3 = 10;
    pbVar2 = *(byte **)(PTR_PTR_0071b058 + -0x8000);
    while( true ) {
      if ((1 << (*pbVar2 & 0x3f) & param_1) != 0) break;
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + -1;
      pbVar2 = pbVar2 + 2;
      if (lVar3 == 0) {
        return 0;
      }
    }
    param_1 = *(byte *)(iVar1 * 2 + *(int *)(PTR_PTR_0071b058 + -0x8000) + 1) | 0xffff8000;
  }
  else {
    param_1 = param_1 + (int)(((ulonglong)param_1 << 0x20) / 0x16800000000) * -0x168;
  }
  return param_1 & 0xffff;
}



//==== 0063c330  ns=Global  size=0x190
// sig: undefined FUN_0063c330(void)
// callers(1): 0063d08c FUN_0063d08c
// callees(1): 0063c288 FUN_0063c288

void FUN_0063c330(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  
  puVar2 = PTR_PTR_0071b058;
  puVar9 = (ushort *)(param_2 + 0x90);
  if (*(char *)(param_2 + 0x7c) == '\0') {
    iVar6 = 0;
    uVar5 = (uint)*(byte *)(param_2 + 0x17) / (uint)*(byte *)(param_2 + 0x16);
    iVar4 = (uint)*(byte *)(param_2 + 0x16) * (uint)*(byte *)(param_2 + 0x15);
    if (iVar4 != 0) {
      do {
        if (uVar5 != 0) {
          puVar7 = *(undefined4 **)(puVar2 + -0x7ffc);
          puVar8 = puVar9;
          uVar10 = uVar5;
          do {
            *puVar8 = (ushort)*puVar7 | 0x8000;
            uVar10 = uVar10 - 1;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar10 != 0);
          puVar9 = puVar9 + uVar5;
        }
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
      return;
    }
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x17) * (uint)*(byte *)(param_2 + 0x15);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar10 = 0;
      puVar8 = puVar9;
      do {
        uVar1 = *param_1;
        uVar10 = uVar10 + 1;
        param_1 = param_1 + 4;
        uVar3 = FUN_0063c288(uVar1);
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
      } while (uVar5 != uVar10);
      puVar9 = puVar9 + uVar5;
      if (0x7f < uVar5) {
        return;
      }
    }
    iVar4 = 0x80 - uVar5;
    if (0x80 < uVar5 + 1) {
      iVar4 = 1;
    }
    do {
      *puVar9 = 0;
      iVar4 = iVar4 + -1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
  return;
}



//==== 0063c4c0  ns=Global  size=0xa4
// sig: undefined FUN_0063c4c0(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(0): 

undefined4 FUN_0063c4c0(char *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((*param_1 == -1) && (param_1[1] == -5)) {
    pbVar1 = (byte *)(param_1 + 2);
    iVar2 = *(int *)(PTR_PTR_0071b058 + -0x7ff4);
    iVar3 = *(int *)(PTR_PTR_0071b058 + -0x7ff0);
    iVar4 = *(int *)(*(int *)(PTR_PTR_0071b058 + -0x7ff8) + (*pbVar1 >> 2 & 0x3c));
    *param_2 = iVar4;
    iVar2 = *(int *)(iVar2 + (*pbVar1 & 0xc));
    param_2[1] = iVar2;
    *(char *)((int)param_2 + 0xd) = (char)*(undefined4 *)(iVar3 + ((byte)param_1[3] >> 4 & 0xc));
    uVar5 = *pbVar1 >> 1 & 1;
    *(char *)(param_2 + 3) = (char)uVar5;
    param_2[2] = uVar5 + (iVar4 * 0x23280) / iVar2;
    return 0;
  }
  return 1;
}



//==== 0063c564  ns=Global  size=0x33c
// sig: undefined FUN_0063c564(void)
// callers(1): 0063ba6c FUN_0063ba6c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00672c30: '%s(%d) : ERROR reading MIDI file.\n' | 00672ba8: 'common/snd_stream_parsing.cpp' | 00672bf0: '%s(%d) : ERROR MIDI file size exceeds max size of %d bytes.\n' | 00672b80: '%s(%d) : ERROR opening MIDI file.\n' | 00672bc8: '%s(%d) : ERROR MIDI file seek error.\n'

undefined4 FUN_0063c564(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_140;
  uint local_13c;
  undefined1 auStack_138 [272];
  
  puVar2 = PTR_PTR_0071b058;
  iVar4 = 0;
  iVar6 = *(int *)(param_1 + 400);
  lVar7 = 0xff;
  do {
    auStack_138[iVar4] = *(undefined1 *)(iVar4 + iVar6);
    iVar6 = *(int *)(param_1 + 400);
    if (*(char *)(iVar4 + iVar6) == '.') {
      iVar6 = iVar4 + 1;
      if (iVar6 < 0xff) {
        iVar6 = iVar4 + 2;
        auStack_138[iVar4 + 1] = 0x6d;
        if (iVar6 < 0xff) {
          iVar6 = iVar4 + 3;
          auStack_138[iVar4 + 2] = 0x69;
          if (iVar6 < 0xff) {
            auStack_138[iVar4 + 3] = 100;
          }
        }
      }
      goto LAB_0063c638;
    }
    iVar4 = iVar4 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar6 = 0x100;
LAB_0063c638:
  puVar1 = *(undefined4 **)(param_1 + 8);
  auStack_138[iVar6 + 1] = 0;
  iVar6 = (**(code **)*puVar1)
                    (auStack_138,&local_140,0,0xfffffffffffffff9,*(undefined4 *)(param_1 + 0xc));
  if (iVar6 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fec));
    uVar5 = 0xffffff99;
  }
  else {
    iVar6 = *(int *)(puVar2 + -0x7fe4);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
    *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
    uVar3 = (*(code *)*puVar1)(local_140,0,2,uVar5);
    if ((longlong)uVar3 < 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fe0));
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0x10))
                (local_140,*(undefined4 *)(param_1 + 0xc));
      uVar5 = 0xffffff96;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    }
    else if ((longlong)(ulonglong)**(uint **)(puVar2 + -0x7fdc) < (longlong)uVar3) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fd8));
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0x10))
                (local_140,*(undefined4 *)(param_1 + 0xc));
      uVar5 = 0xffffff8c;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    }
    else {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                (local_140,0,0,*(undefined4 *)(param_1 + 0xc));
      iVar4 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0xc))
                        (local_140,*(undefined4 *)(param_1 + 0x78),uVar3 & 0xffffffff,&local_13c,0,
                         0xfffffffffffffff8,*(undefined4 *)(param_1 + 0xc));
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0x10))
                (local_140,*(undefined4 *)(param_1 + 0xc));
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      if ((iVar4 < 0) || (uVar5 = 0, local_13c != uVar3)) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fd4));
        uVar5 = 0xffffff96;
      }
    }
  }
  return uVar5;
}



//==== 0063c8a0  ns=Global  size=0x7ec
// sig: undefined FUN_0063c8a0(void)
// callers(1): 0063d08c FUN_0063d08c
// callees(8): 0061948c 989snd::snd_Printf; 0063c228 FUN_0063c228; 0063c24c FUN_0063c24c; 00640870 FUN_00640870; 0064093c FUN_0064093c; 00640950 FUN_00640950; 0064098c FUN_0064098c; 00640a20 FUN_00640a20
// strings: 00672c78: '%s(%d) : File read error.\n' | 00672ba8: 'common/snd_stream_parsing.cpp' | 00672d50: "%s(%d) : Missing 'fact' chunk in WAVE file.\n" | 00672d20: "%s(%d) : Missing 'fmt ' chunk in WAVE file.\n" | 00672c58: '%s(%d) : File seek error.\n' | 00672d80: "%s(%d) : Missing 'data' chunk in WAVE file.\n" | 00672cd8: '%s(%d) : AT9 GUID does not match.\n' | 00672c98: '%s(%d) : File read extension not big enough for AT9 = %d\n' | 00672d00: '%s(%d) : File format error.\n'

/* WARNING: Removing unreachable block (ram,0x0063cfe0) */
/* WARNING: Removing unreachable block (ram,0x0063ca0c) */
/* WARNING: Removing unreachable block (ram,0x0063ca84) */
/* WARNING: Removing unreachable block (ram,0x0063cbd4) */
/* WARNING: Removing unreachable block (ram,0x0063cbe0) */
/* WARNING: Removing unreachable block (ram,0x0063cbec) */
/* WARNING: Removing unreachable block (ram,0x0063d004) */
/* WARNING: Removing unreachable block (ram,0x0063cc10) */
/* WARNING: Removing unreachable block (ram,0x0063cca0) */
/* WARNING: Removing unreachable block (ram,0x0063ccac) */
/* WARNING: Removing unreachable block (ram,0x0063d054) */
/* WARNING: Removing unreachable block (ram,0x0063cccc) */
/* WARNING: Removing unreachable block (ram,0x0063cdbc) */
/* WARNING: Removing unreachable block (ram,0x0063cdc8) */
/* WARNING: Removing unreachable block (ram,0x0063cdd4) */
/* WARNING: Removing unreachable block (ram,0x0063cde8) */
/* WARNING: Removing unreachable block (ram,0x0063ce0c) */
/* WARNING: Removing unreachable block (ram,0x0063ce10) */
/* WARNING: Removing unreachable block (ram,0x0063d03c) */
/* WARNING: Removing unreachable block (ram,0x0063d070) */
/* WARNING: Removing unreachable block (ram,0x0063d014) */
/* WARNING: Removing unreachable block (ram,0x0063ca94) */
/* WARNING: Removing unreachable block (ram,0x0063ca9c) */
/* WARNING: Removing unreachable block (ram,0x0063caa8) */
/* WARNING: Removing unreachable block (ram,0x0063cab4) */
/* WARNING: Removing unreachable block (ram,0x0063d00c) */
/* WARNING: Removing unreachable block (ram,0x0063cadc) */
/* WARNING: Removing unreachable block (ram,0x0063ca44) */
/* WARNING: Removing unreachable block (ram,0x0063cb78) */
/* WARNING: Removing unreachable block (ram,0x0063cb84) */
/* WARNING: Removing unreachable block (ram,0x0063cb90) */
/* WARNING: Removing unreachable block (ram,0x0063cb9c) */
/* WARNING: Removing unreachable block (ram,0x0063ca4c) */
/* WARNING: Removing unreachable block (ram,0x0063ca5c) */
/* WARNING: Removing unreachable block (ram,0x0063ca7c) */
/* WARNING: Removing unreachable block (ram,0x0063cfc4) */
/* WARNING: Removing unreachable block (ram,0x0063cfec) */
/* WARNING: Removing unreachable block (ram,0x0063ce2c) */
/* WARNING: Removing unreachable block (ram,0x0063cfac) */
/* WARNING: Removing unreachable block (ram,0x0063c9a4) */
/* WARNING: Removing unreachable block (ram,0x0063c99c) */
/* WARNING: Removing unreachable block (ram,0x0063ce24) */
/* WARNING: Removing unreachable block (ram,0x0063cf50) */
/* WARNING: Removing unreachable block (ram,0x0063ce34) */
/* WARNING: Removing unreachable block (ram,0x0063ce78) */
/* WARNING: Removing unreachable block (ram,0x0063d024) */

undefined4 FUN_0063c8a0(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_220 [4];
  undefined1 local_21c [92];
  undefined1 auStack_1c0 [64];
  undefined1 auStack_180 [264];
  
  puVar1 = PTR_PTR_0071b058;
  FUN_0064098c(auStack_1c0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),auStack_180,
               0x100,*(undefined4 *)(param_1 + 0xc));
  iVar2 = FUN_00640870(auStack_1c0,0xc,1,*(undefined4 *)(param_1 + 0xc));
  if (iVar2 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd0));
  }
  else if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fb8));
    FUN_00640950(auStack_1c0);
  }
  else {
    FUN_00640a20(auStack_1c0,local_21c,8,local_220,0,0xfffffffffffffffc,
                 *(undefined4 *)(param_1 + 0xc));
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fcc));
  }
  return 0;
}



//==== 0063d08c  ns=Global  size=0x1938
// sig: undefined FUN_0063d08c(void)
// callers(1): 0063ba6c FUN_0063ba6c
// callees(7): 0061948c 989snd::snd_Printf; 0063c330 FUN_0063c330; 0063c8a0 FUN_0063c8a0; 00640870 FUN_00640870; 00640950 FUN_00640950; 0064098c FUN_0064098c; 00640a20 FUN_00640a20
// strings: 00672db0: '%s(%d) : ERROR File read failed.\n' | 00672ba8: 'common/snd_stream_parsing.cpp' | 00673110: '%s(%d) : ERROR Unsupported file type = %02X,%02X,%02X,%02X\n' | 00672c78: '%s(%d) : File read error.\n' | 00672dd8: '%s(%d) : ERROR File seek failed.\n' | 00672d00: '%s(%d) : File format error.\n' | 00672c58: '%s(%d) : File seek error.\n' | 00672fc8: '%s(%d) : WARNING - only 1 MP3 frame with %d PCM frames in last interleave group. Try changing -il option. %s\n' | 006730c0: '%s(%d) : ERROR Multi-bitstream file not interleave padded. Use -ip with svag.\n' | 00672e48: '%s(%d) : ERROR File cpan contains %d channels/bitstream. Max is %d.\n' | 00672e00: '%s:%d : ERROR File format error. Too many channelsPerSubstream = %d\n' | 00672f88: '%s(%d) : Interleave must be >=%d for multisound streams.\n' | 00673038: '%s(%d) : WARNING - single bitstream file has interleave = %d. Setting it to 1. %s\n' | 00672f48: '%s(%d) : ERROR OFL is too big. codecDelay = %u, OFL = %u\n' | 00672f08: '%s(%d) : ERROR OFL is missing. Use -oofl option with svag.\n' | 00672ed0: '%s(%d) : ERROR Missing MPIN chunk from XVAG MP3\n' | 00673090: '%s(%d) : File encoding not supported = %d\n' | 00672ea8: '%s(%d) : num bitstreams too high\n' | 00672e90: '%s(%d) : num too high\n'

/* WARNING: Removing unreachable block (ram,0x0063e6e4) */
/* WARNING: Removing unreachable block (ram,0x0063e8d8) */
/* WARNING: Removing unreachable block (ram,0x0063e284) */
/* WARNING: Removing unreachable block (ram,0x0063e288) */
/* WARNING: Removing unreachable block (ram,0x0063e658) */
/* WARNING: Removing unreachable block (ram,0x0063d8f4) */
/* WARNING: Removing unreachable block (ram,0x0063d900) */
/* WARNING: Removing unreachable block (ram,0x0063d924) */
/* WARNING: Removing unreachable block (ram,0x0063dad4) */
/* WARNING: Removing unreachable block (ram,0x0063dae0) */
/* WARNING: Removing unreachable block (ram,0x0063daec) */
/* WARNING: Removing unreachable block (ram,0x0063daf8) */
/* WARNING: Removing unreachable block (ram,0x0063e880) */
/* WARNING: Removing unreachable block (ram,0x0063db3c) */
/* WARNING: Removing unreachable block (ram,0x0063e868) */
/* WARNING: Removing unreachable block (ram,0x0063db48) */
/* WARNING: Removing unreachable block (ram,0x0063e898) */
/* WARNING: Removing unreachable block (ram,0x0063db54) */
/* WARNING: Removing unreachable block (ram,0x0063e84c) */
/* WARNING: Removing unreachable block (ram,0x0063db64) */
/* WARNING: Removing unreachable block (ram,0x0063dbb4) */
/* WARNING: Removing unreachable block (ram,0x0063dbbc) */
/* WARNING: Removing unreachable block (ram,0x0063e7f4) */
/* WARNING: Removing unreachable block (ram,0x0063e8d0) */
/* WARNING: Removing unreachable block (ram,0x0063e828) */
/* WARNING: Removing unreachable block (ram,0x0063e8b4) */
/* WARNING: Removing unreachable block (ram,0x0063e830) */
/* WARNING: Removing unreachable block (ram,0x0063e8c0) */
/* WARNING: Removing unreachable block (ram,0x0063e83c) */
/* WARNING: Removing unreachable block (ram,0x0063dbcc) */
/* WARNING: Removing unreachable block (ram,0x0063e7d8) */
/* WARNING: Removing unreachable block (ram,0x0063dbd4) */
/* WARNING: Removing unreachable block (ram,0x0063e7c0) */
/* WARNING: Removing unreachable block (ram,0x0063dbe0) */
/* WARNING: Removing unreachable block (ram,0x0063e7a8) */
/* WARNING: Removing unreachable block (ram,0x0063dc14) */
/* WARNING: Removing unreachable block (ram,0x0063e788) */
/* WARNING: Removing unreachable block (ram,0x0063dc44) */
/* WARNING: Removing unreachable block (ram,0x0063dc58) */
/* WARNING: Removing unreachable block (ram,0x0063dc5c) */
/* WARNING: Removing unreachable block (ram,0x0063e750) */
/* WARNING: Removing unreachable block (ram,0x0063e75c) */
/* WARNING: Removing unreachable block (ram,0x0063dc64) */
/* WARNING: Removing unreachable block (ram,0x0063e734) */
/* WARNING: Removing unreachable block (ram,0x0063dc70) */
/* WARNING: Removing unreachable block (ram,0x0063dc84) */
/* WARNING: Removing unreachable block (ram,0x0063dcbc) */
/* WARNING: Removing unreachable block (ram,0x0063e8f8) */
/* WARNING: Removing unreachable block (ram,0x0063e904) */
/* WARNING: Removing unreachable block (ram,0x0063dcc8) */
/* WARNING: Removing unreachable block (ram,0x0063dcf0) */
/* WARNING: Removing unreachable block (ram,0x0063dd00) */
/* WARNING: Removing unreachable block (ram,0x0063d934) */
/* WARNING: Removing unreachable block (ram,0x0063dd18) */
/* WARNING: Removing unreachable block (ram,0x0063dd24) */
/* WARNING: Removing unreachable block (ram,0x0063dd30) */
/* WARNING: Removing unreachable block (ram,0x0063dd3c) */
/* WARNING: Removing unreachable block (ram,0x0063e728) */
/* WARNING: Removing unreachable block (ram,0x0063dd6c) */
/* WARNING: Removing unreachable block (ram,0x0063dd70) */
/* WARNING: Removing unreachable block (ram,0x0063dda4) */
/* WARNING: Removing unreachable block (ram,0x0063e710) */
/* WARNING: Removing unreachable block (ram,0x0063ddb4) */
/* WARNING: Removing unreachable block (ram,0x0063e700) */
/* WARNING: Removing unreachable block (ram,0x0063ddb8) */
/* WARNING: Removing unreachable block (ram,0x0063df78) */
/* WARNING: Removing unreachable block (ram,0x0063d93c) */
/* WARNING: Removing unreachable block (ram,0x0063dfc4) */
/* WARNING: Removing unreachable block (ram,0x0063dfd0) */
/* WARNING: Removing unreachable block (ram,0x0063dfdc) */
/* WARNING: Removing unreachable block (ram,0x0063dfe8) */
/* WARNING: Removing unreachable block (ram,0x0063e934) */
/* WARNING: Removing unreachable block (ram,0x0063e018) */
/* WARNING: Removing unreachable block (ram,0x0063e01c) */
/* WARNING: Removing unreachable block (ram,0x0063e050) */
/* WARNING: Removing unreachable block (ram,0x0063e91c) */
/* WARNING: Removing unreachable block (ram,0x0063e05c) */
/* WARNING: Removing unreachable block (ram,0x0063d944) */
/* WARNING: Removing unreachable block (ram,0x0063e068) */
/* WARNING: Removing unreachable block (ram,0x0063e074) */
/* WARNING: Removing unreachable block (ram,0x0063e080) */
/* WARNING: Removing unreachable block (ram,0x0063e08c) */
/* WARNING: Removing unreachable block (ram,0x0063e0d8) */
/* WARNING: Removing unreachable block (ram,0x0063e6cc) */
/* WARNING: Removing unreachable block (ram,0x0063d94c) */
/* WARNING: Removing unreachable block (ram,0x0063e21c) */
/* WARNING: Removing unreachable block (ram,0x0063e228) */
/* WARNING: Removing unreachable block (ram,0x0063e234) */
/* WARNING: Removing unreachable block (ram,0x0063d954) */
/* WARNING: Removing unreachable block (ram,0x0063d964) */
/* WARNING: Removing unreachable block (ram,0x0063d9d0) */
/* WARNING: Removing unreachable block (ram,0x0063d9e8) */
/* WARNING: Removing unreachable block (ram,0x0063da00) */
/* WARNING: Removing unreachable block (ram,0x0063da18) */
/* WARNING: Removing unreachable block (ram,0x0063da24) */
/* WARNING: Removing unreachable block (ram,0x0063da34) */
/* WARNING: Removing unreachable block (ram,0x0063da5c) */
/* WARNING: Removing unreachable block (ram,0x0063da60) */
/* WARNING: Removing unreachable block (ram,0x0063da8c) */
/* WARNING: Removing unreachable block (ram,0x0063e8e0) */
/* WARNING: Removing unreachable block (ram,0x0063da98) */
/* WARNING: Removing unreachable block (ram,0x0063dad0) */
/* WARNING: Removing unreachable block (ram,0x0063d978) */
/* WARNING: Removing unreachable block (ram,0x0063e240) */
/* WARNING: Removing unreachable block (ram,0x0063e27c) */
/* WARNING: Removing unreachable block (ram,0x0063e674) */
/* WARNING: Removing unreachable block (ram,0x0063e0e0) */
/* WARNING: Removing unreachable block (ram,0x0063e6c4) */
/* WARNING: Removing unreachable block (ram,0x0063e0e4) */
/* WARNING: Removing unreachable block (ram,0x0063e150) */
/* WARNING: Removing unreachable block (ram,0x0063e6a4) */
/* WARNING: Removing unreachable block (ram,0x0063e168) */
/* WARNING: Removing unreachable block (ram,0x0063e184) */
/* WARNING: Removing unreachable block (ram,0x0063e188) */
/* WARNING: Removing unreachable block (ram,0x0063e1bc) */
/* WARNING: Removing unreachable block (ram,0x0063e9ac) */
/* WARNING: Removing unreachable block (ram,0x0063e1c4) */
/* WARNING: Removing unreachable block (ram,0x0063e1c8) */
/* WARNING: Removing unreachable block (ram,0x0063e1d8) */
/* WARNING: Removing unreachable block (ram,0x0063e20c) */
/* WARNING: Removing unreachable block (ram,0x0063d984) */
/* WARNING: Removing unreachable block (ram,0x0063d980) */
/* WARNING: Removing unreachable block (ram,0x0063d990) */
/* WARNING: Removing unreachable block (ram,0x0063d998) */
/* WARNING: Removing unreachable block (ram,0x0063d9b8) */

int FUN_0063d08c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar6;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar7;
  char cVar8;
  char cVar9;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int local_df0;
  int local_dec;
  undefined1 local_de8 [8];
  char local_de0;
  char local_ddf;
  char local_dde;
  char local_ddd;
  undefined4 local_ddc;
  char local_dd8;
  char local_dd7;
  char local_dd6;
  char local_dd5;
  undefined1 auStack_dbc [36];
  undefined1 auStack_d98 [76];
  int local_d4c [3];
  uint local_d40;
  uint local_d3c;
  undefined1 auStack_c18 [256];
  undefined1 auStack_b18 [4];
  uint local_b14;
  uint local_b10;
  uint local_b0c;
  uint local_b08;
  uint local_b04;
  
  puVar3 = PTR_PTR_0071b058;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar6 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0xc))
                    (*(undefined4 *)(param_1 + 4),&local_de0,0xc,&local_df0,0,0xfffffffffffffffc,
                     *(undefined4 *)(param_1 + 0xc));
  if ((iVar6 < 0) || (local_df0 != 0xc)) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fac));
    return 0;
  }
  lVar4 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                    (*(undefined4 *)(param_1 + 4),0xfffffffffffffff4,1,
                     *(undefined4 *)(param_1 + 0xc));
  if (lVar4 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fa8));
    return 0;
  }
  if (local_de0 == 'R') {
    if ((((local_ddf != 'I') || (local_dde != 'F')) || (local_ddd != 'F')) ||
       (((local_dd8 != 'W' || (local_dd7 != 'A')) || ((local_dd6 != 'V' || (local_dd5 != 'E'))))))
    goto LAB_0063d23c;
    iVar6 = FUN_0063c8a0(param_1,local_ddc);
    if (iVar6 != 0) {
      cVar8 = *(char *)(param_1 + 0x15);
      cVar9 = *(char *)(param_1 + 0x16);
LAB_0063d340:
      if (*(int *)(param_1 + 0x68) == 0) {
        *(uint *)(param_1 + 0x68) =
             (*(uint *)(param_1 + 0x54) / *(uint *)(param_1 + 0x60)) * *(int *)(param_1 + 100);
      }
      goto LAB_0063d26c;
    }
  }
  else {
    if (local_de0 == ' ') {
      if (((local_ddf != 'K') || (local_dde != 'P')) || (local_ddd != 'V')) goto LAB_0063d23c;
      iVar6 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0xc))
                        (*(undefined4 *)(param_1 + 4),auStack_b18,0x118,&local_dec,0,
                         0xfffffffffffffffc,*(undefined4 *)(param_1 + 0xc));
      if ((iVar6 < 0) || (local_dec != 0x118)) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
      }
      else {
        uVar5 = (ulonglong)(local_b04 >> 0x18) | (ulonglong)(local_b04 >> 8) & 0xff00 |
                ((ulonglong)local_b04 & 0xff00) << 8 | ((ulonglong)local_b04 & 0xff) << 0x18;
        uVar7 = local_b0c >> 0x18 | local_b0c >> 8 & 0xff00 |
                (local_b0c & 0xff00) << 8 | local_b0c << 0x18;
        if (uVar5 < 9) {
          lVar4 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                            (*(undefined4 *)(param_1 + 4),
                             ((ulonglong)(local_b10 >> 0x18) | (ulonglong)(local_b10 >> 8) & 0xff00
                             | ((ulonglong)local_b10 & 0xff00) << 8 | (ulonglong)(local_b10 << 0x18)
                             ) - 0x118 & 0xffffffff,1,*(undefined4 *)(param_1 + 0xc));
          if (-1 < lVar4) {
            uVar2 = uVar7 >> 1;
            *(char *)(param_1 + 0x17) = (char)(local_b04 >> 0x18);
            *(undefined1 *)(param_1 + 0x13) = 1;
            puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
            *(uint *)(param_1 + 0x58) =
                 local_b08 >> 0x18 | local_b08 >> 8 & 0xff00 |
                 (local_b08 & 0xff00) << 8 | local_b08 << 0x18;
            *(uint *)(param_1 + 0x54) =
                 (int)((((ulonglong)
                         (local_b14 >> 0x18 | local_b14 >> 8 & 0xff00 |
                         (local_b14 & 0xff00) << 8 | local_b14 << 0x18) + (ulonglong)uVar2) - 1 &
                       0xffffffff) / (ulonglong)uVar2) * uVar2 * ((uint)uVar5 & 0xff);
            uVar5 = (*(code *)*puVar1)(*(undefined4 *)(param_1 + 4),0,1,
                                       *(undefined4 *)(param_1 + 0xc));
            cVar8 = *(char *)(param_1 + 0x15);
            cVar9 = *(char *)(param_1 + 0x16);
            *(uint *)(param_1 + 0x5c) = uVar7 >> 1;
            *(ulonglong *)(param_1 + 0x70) = uVar5 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x6c) = 0;
            *(undefined4 *)(param_1 + 0x60) = 0x10;
            iVar6 = 1;
            *(undefined4 *)(param_1 + 100) = 0x1c;
            *(undefined1 *)(param_1 + 0x14) = 3;
            goto LAB_0063d340;
          }
          989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fd0));
        }
        else {
          989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fbc));
        }
      }
    }
    else if (local_de0 == 'X') {
      if (((local_ddf != 'V') || (local_dde != 'A')) || (local_ddd != 'G')) goto LAB_0063d23c;
      lVar4 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                        (*(undefined4 *)(param_1 + 4),0,1,*(undefined4 *)(param_1 + 0xc));
      if (lVar4 < 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fd0));
      }
      else {
        FUN_0064098c(auStack_d98,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                     auStack_c18,0x100,*(undefined4 *)(param_1 + 0xc));
        iVar6 = FUN_00640a20(auStack_d98,auStack_dbc,0x20,&local_dec,0,0xfffffffffffffffc,
                             *(undefined4 *)(param_1 + 0xc));
        if ((iVar6 < 0) || (local_dec != 0x20)) {
          989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
        }
        else {
          FUN_00640a20(auStack_d98,local_de8,8,&local_dec,0,0xfffffffffffffffc,
                       *(undefined4 *)(param_1 + 0xc));
          989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
        }
      }
    }
    else {
      if (local_de0 == 'V') {
        if (((local_ddf == 'A') && (local_dde == 'G')) && (local_ddd == 'p')) goto LAB_0063d434;
      }
      else if ((((local_de0 == 'p') && (local_ddf == 'G')) && (local_dde == 'A')) &&
              (local_ddd == 'V')) {
LAB_0063d434:
        iVar6 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0xc))
                          (*(undefined4 *)(param_1 + 4),local_d4c,0x30,&local_dec,0,
                           0xfffffffffffffffc,*(undefined4 *)(param_1 + 0xc));
        if ((-1 < iVar6) && (local_dec == 0x30)) {
          if (local_d4c[0] == 0x70474156) {
            local_d3c = local_d3c >> 0x18 | local_d3c >> 8 & 0xff00 |
                        (uint)(((ulonglong)local_d3c & 0xff00) << 8) |
                        (uint)(((ulonglong)local_d3c & 0xff) << 0x18);
            local_d40 = local_d40 >> 0x18 | local_d40 >> 8 & 0xff00 |
                        (local_d40 & 0xff00) << 8 | local_d40 << 0x18;
          }
          *(uint *)(param_1 + 0x54) = local_d40;
          *(undefined1 *)(param_1 + 0x13) = 1;
          *(undefined1 *)(param_1 + 0x17) = 1;
          *(uint *)(param_1 + 0x58) = local_d3c;
          uVar5 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                            (*(undefined4 *)(param_1 + 4),0,1,*(undefined4 *)(param_1 + 0xc));
          *(undefined4 *)(param_1 + 0x5c) = 1;
          cVar8 = *(char *)(param_1 + 0x15);
          cVar9 = *(char *)(param_1 + 0x16);
          *(undefined4 *)(param_1 + 0x6c) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0x10;
          *(ulonglong *)(param_1 + 0x70) = uVar5 & 0xffffffff;
          *(undefined4 *)(param_1 + 100) = 0x1c;
          *(undefined1 *)(param_1 + 0x14) = 2;
          iVar6 = 1;
          goto LAB_0063d340;
        }
        989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
        goto LAB_0063d260;
      }
LAB_0063d23c:
      989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
    }
LAB_0063d260:
    iVar6 = 0;
  }
  cVar8 = *(char *)(param_1 + 0x15);
  cVar9 = *(char *)(param_1 + 0x16);
LAB_0063d26c:
  if (cVar8 == '\0') {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (*(char *)(param_1 + 0x17) == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  if (cVar9 == '\0') {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  return iVar6;
}



//==== 0063e9c4  ns=Global  size=0x54
// sig: undefined FUN_0063e9c4(void)
// callers(4): 00632a38 FUN_00632a38; 00637850 FUN_00637850; 00637d2c 989snd::snd_ProcessStreamTick; 0063be38 FUN_0063be38
// callees(0): 
// strings: 0063ea0c: '}c[xxc' (raw)

byte * FUN_0063e9c4(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)0x0;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    pbVar3 = param_1;
    while (((bVar1 & 0x1f) != 5 && (pbVar2 = *(byte **)(pbVar3 + 0x228), pbVar2 != (byte *)0x0))) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2;
    }
  }
  return pbVar3;
}



//==== 0063ea18  ns=Global  size=0x50
// sig: undefined FUN_0063ea18(void)
// callers(5): 006341d4 FUN_006341d4; 00637620 FUN_00637620; 00637a38 FUN_00637a38; 0063a894 989snd::sndi_CloseAsyncFilePlayer; 0063be38 FUN_0063be38
// callees(0): 

byte * FUN_0063ea18(byte *param_1)

{
  byte *pbVar1;
  
  if ((param_1 == (byte *)0x0) || ((*param_1 & 0x1f) == 5)) {
    pbVar1 = (byte *)0x0;
  }
  else {
    do {
      pbVar1 = param_1;
      param_1 = *(byte **)(pbVar1 + 0x228);
      if (param_1 == (byte *)0x0) {
        return pbVar1;
      }
    } while ((*param_1 & 0x1f) != 5);
  }
  return pbVar1;
}



//==== 0063ea68  ns=Global  size=0x44
// sig: undefined FUN_0063ea68(void)
// callers(3): 00637890 FUN_00637890; 00637a38 FUN_00637a38; 00637d2c 989snd::snd_ProcessStreamTick
// callees(2): 0061a790 FUN_0061a790; 0061af44 FUN_0061af44

void FUN_0063ea68(void)

{
  int iVar1;
  
  iVar1 = FUN_0061a790();
  if (iVar1 != 0) {
    FUN_0061af44(iVar1,1,8);
  }
  return;
}



//==== 0063eaac  ns=Global  size=0x44
// sig: undefined FUN_0063eaac(void)
// callers(2): 00634044 FUN_00634044; 006364a0 FUN_006364a0
// callees(2): 0061a790 FUN_0061a790; 0061b0c8 FUN_0061b0c8

void FUN_0063eaac(void)

{
  int iVar1;
  
  iVar1 = FUN_0061a790();
  if (iVar1 != 0) {
    FUN_0061b0c8(iVar1,1,8);
  }
  return;
}



//==== 0063eaf0  ns=Global  size=0x10c
// sig: undefined FUN_0063eaf0(void)
// callers(1): 0063f0a8 FUN_0063f0a8
// callees(0): 

void FUN_0063eaf0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '-') {
    if (*(char *)(param_2 + 2) == '1') {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return;
    }
  }
  else {
    if (cVar1 == '0') {
      if (param_3 != 2) {
        return;
      }
    }
    else {
      if (2 < (param_3 & 0xff)) {
        iVar3 = 2;
        uVar4 = (ulonglong)((param_3 & 0xff) - 2);
        cVar2 = *(char *)(param_2 + 2);
        while ((byte)(cVar2 - 0x30U) < 10) {
          iVar3 = iVar3 + 1;
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) break;
          cVar2 = *(char *)(iVar3 + param_2);
        }
      }
      if ((byte)(cVar1 + 0xbbU) < 0x30) {
                    /* WARNING: Could not recover jumptable at 0x0063ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)((uint)(byte)(cVar1 + 0xbb) * 4 + *(int *)(PTR_PTR_0071b060 + -0x8000)) +
                  *(int *)(PTR_PTR_0071b060 + -0x8000)))();
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  return;
}



//==== 0063ed38  ns=Global  size=0x64
// sig: undefined FUN_0063ed38(void)
// callers(1): 0063f4c8 FUN_0063f4c8
// callees(0): 

void FUN_0063ed38(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar2 = ((ulonglong)uVar1 & 7) << 0x1b | (ulonglong)(uVar1 >> 5);
  if ((uVar1 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x3c) =
         (int)(((ulonglong)*(ushort *)(param_1 + 100) << 2) / (ulonglong)*(uint *)(param_1 + 0x38));
  }
  if ((uVar1 & 8) != 0) {
    *(uint *)(param_1 + 0x40) =
         (uint)(*(int *)(param_1 + 0x30) * 1000) / (uint)*(ushort *)(param_1 + 100);
  }
  *(uint *)(param_1 + 0x54) = (uint)(uVar2 << 5) | (uint)uVar2 >> 0x1b;
  return;
}



//==== 0063ed9c  ns=Global  size=0x8c
// sig: undefined FUN_0063ed9c(void)
// callers(2): 0063f4c8 FUN_0063f4c8; 0063f5a8 FUN_0063f5a8
// callees(0): 

void FUN_0063ed9c(int *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[10];
  uVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  bVar1 = *(byte *)(iVar3 + *param_1);
  if ((char)bVar1 < '\0') {
    do {
      iVar4 = iVar3;
      iVar3 = iVar4 + 1;
      uVar2 = ((ulonglong)bVar1 & 0x7f | uVar2) << 7;
      param_1[10] = iVar3;
      *(ulonglong *)(param_1 + 4) = uVar2;
      bVar1 = *(byte *)(iVar3 + *param_1);
    } while ((char)bVar1 < '\0');
    param_1[10] = iVar4 + 2;
    *(ulonglong *)(param_1 + 4) = uVar2 | bVar1;
    return;
  }
  param_1[10] = iVar3 + 1;
  *(ulonglong *)(param_1 + 4) = *(ulonglong *)(param_1 + 4) | (ulonglong)bVar1;
  return;
}



//==== 0063ee28  ns=Global  size=0x280
// sig: undefined FUN_0063ee28(void)
// callers(1): 0063f0a8 FUN_0063f0a8
// callees(3): 00605e9c FUN_00605e9c; 00605f20 FUN_00605f20; 0061a790 FUN_0061a790

void FUN_0063ee28(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char cVar13;
  ulonglong uVar14;
  
  pbVar3 = (byte *)(param_2 + 2);
  uVar12 = 0;
  uVar7 = 3;
  if ((2 < param_3) && (uVar10 = (uint)*pbVar3, (uVar10 - 0x30 & 0xff) < 10)) {
    iVar4 = param_3 - 2;
    uVar12 = 0;
    iVar9 = 2;
    do {
      iVar8 = iVar9;
      iVar9 = iVar8 + 1;
      pbVar3 = (byte *)(param_2 + iVar9);
      uVar12 = (uVar12 * 10 + uVar10) - 0x30;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        pbVar3 = (byte *)(param_3 + param_2);
        uVar7 = param_3 + 1;
        goto LAB_0063eed0;
      }
      uVar10 = (uint)*pbVar3;
    } while ((uVar10 - 0x30 & 0xff) < 10);
    uVar7 = iVar8 + 2;
  }
LAB_0063eed0:
  bVar1 = *pbVar3;
  if (param_3 <= uVar7) {
    return;
  }
  cVar13 = '\0';
  cVar5 = *(char *)(param_2 + uVar7);
  if ((byte)(cVar5 - 0x30U) < 10) {
    uVar14 = (ulonglong)(param_3 - uVar7);
    pcVar11 = (char *)(param_2 + uVar7) + 1;
    cVar13 = '\0';
    if (param_3 < uVar7 + 1) {
      uVar14 = 1;
    }
    do {
      cVar13 = cVar13 * '\n' + cVar5 + -0x30;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) break;
      cVar5 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while ((byte)(cVar5 - 0x30U) < 10);
  }
  bVar2 = *(byte *)(param_2 + 1);
  if (bVar2 == 0x4c) {
LAB_0063efa8:
    if (3 < uVar12) {
      return;
    }
    iVar4 = FUN_0061a790(*(undefined4 *)(param_1 + 0x60));
    if (iVar4 == 0) {
      return;
    }
    cVar5 = *(char *)(iVar4 + uVar12 + 0x164);
  }
  else {
    if (bVar2 < 0x4d) {
      if (bVar2 != 0x47) {
        return;
      }
    }
    else if (bVar2 != 0x67) {
      if (bVar2 != 0x6c) {
        return;
      }
      goto LAB_0063efa8;
    }
    if (0x3f < uVar12) {
      return;
    }
    cVar5 = FUN_00605f20(uVar12);
    iVar4 = 0;
  }
  cVar6 = cVar13;
  if (bVar1 != 0x3d) {
    if (bVar1 == 0x2b) {
      cVar6 = cVar5 + cVar13;
    }
    else {
      cVar6 = cVar5;
      if (bVar1 == 0x2d) {
        cVar6 = cVar5 - cVar13;
      }
    }
  }
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 == 0x4c) {
LAB_0063f064:
    if (uVar12 < 4) {
      *(char *)(iVar4 + uVar12 + 0x164) = cVar13;
    }
  }
  else {
    if (bVar1 < 0x4d) {
      if (bVar1 != 0x47) {
        return;
      }
    }
    else if (bVar1 != 0x67) {
      if (bVar1 != 0x6c) {
        return;
      }
      goto LAB_0063f064;
    }
    if (uVar12 < 0x40) {
      FUN_00605e9c(uVar12,cVar6);
    }
  }
  return;
}



//==== 0063f0a8  ns=Global  size=0xb4
// sig: undefined FUN_0063f0a8(void)
// callers(1): 0063f15c FUN_0063f15c
// callees(2): 0063eaf0 FUN_0063eaf0; 0063ee28 FUN_0063ee28

void FUN_0063f0a8(int param_1,byte *param_2,undefined1 param_3)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (bVar1 == 0x58) {
LAB_0063f0e8:
    FUN_0063eaf0(param_1,param_2,param_3);
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x100;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    return;
  }
  if (bVar1 < 0x59) {
    if (bVar1 != 0x52) {
      return;
    }
  }
  else if (bVar1 != 0x72) {
    if (bVar1 != 0x78) {
      return;
    }
    goto LAB_0063f0e8;
  }
  FUN_0063ee28(param_1,param_2,param_3);
  return;
}



//==== 0063f15c  ns=Global  size=0x36c
// sig: undefined FUN_0063f15c(void)
// callers(1): 0063f4c8 FUN_0063f4c8
// callees(1): 0063f0a8 FUN_0063f0a8

void FUN_0063f15c(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar10;
  uint uVar9;
  
  puVar7 = PTR_PTR_0071b060;
  iVar3 = *param_1;
  iVar10 = param_1[10];
  bVar1 = *(byte *)(iVar3 + iVar10);
  if (bVar1 == 0xf0) {
    return;
  }
  if (bVar1 == 0xff) {
    param_1[10] = iVar10 + 1;
    bVar1 = *(byte *)(iVar3 + iVar10 + 1);
    if (bVar1 == 0x51) {
      param_1[10] = iVar10 + 3;
      bVar1 = *(byte *)(iVar10 + 3 + iVar3);
      param_1[10] = iVar10 + 4;
      param_1[0xc] = (uint)bVar1 << 8;
      uVar2 = *(undefined1 *)(iVar10 + 4 + iVar3);
      param_1[10] = iVar10 + 5;
      uVar6 = CONCAT11(bVar1,uVar2);
      param_1[0xc] = (uint)uVar6 << 8;
      uVar2 = *(undefined1 *)(iVar10 + 5 + iVar3);
      param_1[0x15] = param_1[0x15] | 8;
      param_1[10] = iVar10 + 6;
      param_1[0xc] = (uint)CONCAT21(uVar6,uVar2);
      return;
    }
    if (bVar1 < 0x52) {
      if (bVar1 == 6) {
        iVar10 = iVar10 + 2;
        uVar8 = 0;
        param_1[10] = iVar10;
        bVar1 = *(byte *)(iVar10 + iVar3);
        while ((char)bVar1 < '\0') {
          iVar10 = iVar10 + 1;
          param_1[10] = iVar10;
          uVar8 = (uVar8 & 0x1ffffff | (ulonglong)bVar1 & 0x7f) << 7;
          bVar1 = *(byte *)(iVar10 + iVar3);
        }
        uVar8 = uVar8 | bVar1;
        param_1[10] = iVar10 + 1;
        FUN_0063f0a8(param_1,iVar10 + 1 + iVar3,uVar8);
        param_1[10] = (int)uVar8 + param_1[10];
        return;
      }
      if (bVar1 == 0x2f) {
        iVar10 = iVar10 + 2;
        param_1[10] = iVar10;
        bVar1 = *(byte *)(iVar10 + iVar3);
        param_1[0x15] = param_1[0x15] | 0x40;
        param_1[10] = iVar10 + (uint)bVar1;
        return;
      }
    }
    else {
      if (bVar1 == 0x58) {
        iVar4 = *(int *)(puVar7 + -0x7ffc);
        param_1[10] = iVar10 + 3;
        bVar1 = *(byte *)(iVar10 + 3 + iVar3);
        param_1[10] = iVar10 + 4;
        param_1[0xd] = (uint)bVar1;
        iVar3 = *(int *)(iVar4 + (int)((ulonglong)*(byte *)(iVar10 + 4 + iVar3) % 10 << 2));
        param_1[0x15] = param_1[0x15] | 0x10;
        param_1[0xe] = iVar3;
        param_1[10] = iVar10 + 7;
        return;
      }
      if (bVar1 == 0x59) {
        param_1[10] = iVar10 + 2;
        param_1[10] = (uint)*(byte *)(iVar10 + 2 + iVar3) + iVar10 + 3;
        return;
      }
    }
    iVar10 = iVar10 + 2;
    uVar8 = 0;
    uVar9 = 0;
    param_1[10] = iVar10;
    bVar1 = *(byte *)(iVar10 + iVar3);
    while ((char)bVar1 < '\0') {
      iVar10 = iVar10 + 1;
      param_1[10] = iVar10;
      uVar8 = (uVar8 & 0x1ffffff | (ulonglong)bVar1 & 0x7f) << 7;
      uVar9 = (uint)uVar8;
      bVar1 = *(byte *)(iVar10 + iVar3);
    }
    param_1[10] = (uVar9 | bVar1) + iVar10 + 1;
    return;
  }
  bVar5 = bVar1 & 0xf0;
  if (bVar5 != 0xb0) {
    if (0xb0 < bVar5) {
      if (bVar5 != 0xd0) {
        if (0xd0 < bVar5) {
          if (bVar5 != 0xe0) {
            if (bVar5 != 0xf0) {
              return;
            }
            if ((((bVar1 & 8) != 0) || ((bVar1 & 0xf) < 2)) || (3 < (bVar1 & 0xf))) {
              param_1[10] = iVar10 + 1;
              return;
            }
          }
          goto LAB_0063f1f8;
        }
        if (bVar5 != 0xc0) {
          return;
        }
      }
      param_1[10] = iVar10 + 2;
      return;
    }
    if (((bVar5 != 0x90) && (bVar5 != 0xa0)) && (bVar5 != 0x80)) {
      return;
    }
  }
LAB_0063f1f8:
  param_1[10] = iVar10 + 3;
  return;
}



//==== 0063f4c8  ns=Global  size=0xe0
// sig: undefined FUN_0063f4c8(void)
// callers(2): 0063f5a8 FUN_0063f5a8; 0063f720 FUN_0063f720
// callees(3): 0063ed38 FUN_0063ed38; 0063ed9c FUN_0063ed9c; 0063f15c FUN_0063f15c

void FUN_0063f4c8(int *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 2);
  uVar1 = *(ulonglong *)(param_1 + 4);
  if (uVar1 <= uVar2) {
    do {
      *(ulonglong *)(param_1 + 2) = uVar2 - uVar1;
      FUN_0063f15c(param_1);
      do {
        if (*(char *)(param_1[10] + *param_1) != '\0') {
          uVar3 = param_1[0x15];
          break;
        }
        param_1[10] = param_1[10] + 1;
        FUN_0063f15c(param_1);
        uVar3 = param_1[0x15];
      } while ((uVar3 & 0x40) == 0);
      if ((uVar3 & 0x18) != 0) {
        FUN_0063ed38(param_1);
        uVar3 = param_1[0x15];
      }
      if ((uVar3 & 0x40) != 0) {
        return;
      }
      FUN_0063ed9c(param_1);
      uVar2 = *(ulonglong *)(param_1 + 2);
      uVar1 = *(ulonglong *)(param_1 + 4);
    } while (uVar1 <= uVar2);
  }
  return;
}



//==== 0063f5a8  ns=Global  size=0x178
// sig: undefined FUN_0063f5a8(void)
// callers(0): 
// callees(2): 0063ed9c FUN_0063ed9c; 0063f4c8 FUN_0063f4c8

undefined4 FUN_0063f5a8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_2 != (int *)0x0) {
    uVar1 = *(ushort *)(param_2 + 3);
    *param_1 = param_2;
    *(ushort *)(param_1 + 0x19) = uVar1;
    uVar2 = 0;
    if (((*param_2 == 0x4d546864) && (param_2[1] == 6)) && (*(ushort *)(param_2 + 2) < 3)) {
      if ((-1 < (short)uVar1) && (*(int *)((int)param_2 + 0xe) == 0x4d54726b)) {
        uVar2 = *(undefined4 *)((int)param_2 + 0x12);
        *(undefined8 *)(param_1 + 8) = 0;
        param_1[10] = 0x16;
        *(undefined8 *)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[0xb] = uVar2;
        param_1[0x18] = param_3;
        param_1[0xc] = 500000;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0xf] = (uint)uVar1;
        param_1[0xe] = 4;
        param_1[0xd] = 4;
        param_1[0x10] = (int)(500000000 / (ulonglong)(uint)uVar1);
        FUN_0063ed9c(param_1);
        FUN_0063f4c8(param_1);
        uVar2 = 1;
        param_1[0x15] = param_1[0x15] | 7;
      }
    }
    return uVar2;
  }
  param_1[0x15] = param_1[0x15] | 0x40;
  return 1;
}



//==== 0063f720  ns=Global  size=0x148
// sig: undefined FUN_0063f720(void)
// callers(1): 0063f868 FUN_0063f868
// callees(1): 0063f4c8 FUN_0063f4c8

void FUN_0063f720(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return;
    }
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x44) + 1;
      uVar1 = *(uint *)(param_1 + 0x54);
      *(longlong *)(param_1 + 0x18) = lVar2 + -1;
      *(uint *)(param_1 + 0x54) = uVar1 | 1;
      *(int *)(param_1 + 0x44) = iVar3;
      if (iVar3 == *(int *)(param_1 + 0x3c)) {
        iVar3 = *(int *)(param_1 + 0x48) + 1;
        *(uint *)(param_1 + 0x54) = uVar1 | 3;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(int *)(param_1 + 0x48) = iVar3;
        if (iVar3 == *(int *)(param_1 + 0x34)) {
          uVar4 = *(uint *)(param_1 + 0x5c);
          uVar5 = *(int *)(param_1 + 0x4c) + 1;
          *(uint *)(param_1 + 0x54) = uVar1 | 7;
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(uint *)(param_1 + 0x4c) = uVar5;
          if ((uVar4 != 0) && (uVar5 == (uVar5 / uVar4) * uVar4)) {
            *(uint *)(param_1 + 0x54) = uVar1 | 0x87;
          }
        }
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      FUN_0063f4c8(param_1);
      if ((*(uint *)(param_1 + 0x54) & 0x40) != 0) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x58);
      if ((uVar1 == 0) ||
         (uVar4 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44),
         uVar4 != (uVar4 / uVar1) * uVar1)) break;
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
      if (lVar2 == 0) {
        return;
      }
    }
  } while( true );
}



//==== 0063f868  ns=Global  size=0x5c
// sig: undefined FUN_0063f868(void)
// callers(0): 
// callees(1): 0063f720 FUN_0063f720

void FUN_0063f868(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(uint *)(param_1 + 0x54) & 0x40) != 0) {
    return;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x40);
  uVar1 = (param_2 & 0xffffffff) + *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffe78;
  *(ulonglong *)(param_1 + 0x20) = uVar1;
  if (uVar1 < uVar2) {
    return;
  }
  *(ulonglong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + uVar1 / uVar2;
  *(ulonglong *)(param_1 + 0x20) = uVar1 - (uVar1 / uVar2) * uVar2;
  FUN_0063f720();
  return;
}



//==== 0063f8c4  ns=Global  size=0x1c
// sig: undefined FUN_0063f8c4(void)
// callers(2): 00632674 FUN_00632674; 006349a8 FUN_006349a8
// callees(1): 0800008d syscall::syscall_sys_timer_usleep

void FUN_0063f8c4(void)

{
  syscall::syscall_sys_timer_usleep();
  return;
}



//==== 0063f8e0  ns=Global  size=0xc
// sig: undefined FUN_0063f8e0(void)
// callers(3): 00633628 FUN_00633628; 0063b9e8 FUN_0063b9e8; 0063fa4c FUN_0063fa4c
// callees(0): 

undefined4 FUN_0063f8e0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



//==== 0063f8ec  ns=Global  size=0x3c
// sig: undefined FUN_0063f8ec(void)
// callers(1): 0063ba6c FUN_0063ba6c
// callees(0): 

undefined4 FUN_0063f8ec(uint param_1)

{
  if ((param_1 < 7) && ((1L << ((longlong)(char)param_1 & 0x7fU) & 0x56U) != 0)) {
    return 1;
  }
  return 0;
}



//==== 0063f928  ns=Global  size=0x74
// sig: undefined FUN_0063f928(void)
// callers(0): 
// callees(0): 

int FUN_0063f928(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 5) {
    if (param_1 < 2) {
      if (param_1 != 1) {
        return -1;
      }
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    if (param_2 == 1) {
      return iVar2;
    }
  }
  else if (param_1 == 6) {
    if (param_2 != 1) {
      uVar1 = (int)(param_2 ^ 2) >> 0x1f;
      return 3 - ((int)(uVar1 - (uVar1 ^ param_2 ^ 2)) >> 0x1f);
    }
    return 2;
  }
  return -1;
}



//==== 0063f99c  ns=Global  size=0x28
// sig: undefined FUN_0063f99c(void)
// callers(4): 006377fc FUN_006377fc; 00637d2c 989snd::snd_ProcessStreamTick; 0063aab8 FUN_0063aab8; 0063be38 FUN_0063be38
// callees(1): 00650684 sys::sys_time_get_system_time

undefined4 FUN_0063f99c(void)

{
  undefined4 uVar1;
  
  uVar1 = sys::sys_time_get_system_time();
  return uVar1;
}



//==== 0063f9c4  ns=Global  size=0x44
// sig: undefined FUN_0063f9c4(void)
// callers(0): 
// callees(1): 006505a4 sys::sys_lwmutex_create

undefined4 FUN_0063f9c4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 local_20 [32];
  
  uVar1 = sys::sys_lwmutex_create(param_1,local_20);
  return uVar1;
}



//==== 0063fa08  ns=Global  size=0x44
// sig: undefined FUN_0063fa08(void)
// callers(1): 00633554 FUN_00633554
// callees(1): 00650844 sys::sys_lwcond_signal

longlong FUN_0063fa08(int param_1)

{
  uint uVar1;
  
  uVar1 = sys::sys_lwcond_signal(param_1 + 0x28);
  return (longlong)((ulonglong)(((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1)) << 0x20) >>
         0x3f;
}



//==== 0063fa4c  ns=Global  size=0xd4
// sig: undefined FUN_0063fa4c(void)
// callers(2): 0063b9e8 FUN_0063b9e8; 0063fb20 idol::CreateSndParsingThread
// callees(5): 0063f8e0 FUN_0063f8e0; 00650504 sys::sys_lwcond_destroy; 00650784 sys::sys_lwmutex_destroy; 00650844 sys::sys_lwcond_signal; 0800002c syscall::syscall_sys_ppu_thread_join

undefined4 FUN_0063fa4c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 auStack_40 [24];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = FUN_0063f8e0(param_1);
  if (iVar1 != 0) {
    *param_1 = 1;
    param_1[1] = 0;
    sys::sys_lwcond_signal(param_1 + 10);
    iVar1 = syscall::syscall_sys_ppu_thread_join(*(undefined8 *)(param_1 + 2),auStack_40);
    uVar2 = 0xffffffff;
    if (iVar1 != 0) goto LAB_0063fa90;
  }
  uVar2 = 0;
LAB_0063fa90:
  *(undefined8 *)(param_1 + 2) = 0xffffffff;
  sys::sys_lwcond_destroy(param_1 + 10);
  sys::sys_lwmutex_destroy(param_1 + 4);
  return uVar2;
}



//==== 0063fb20  ns=idol  size=0x138
// sig: undefined CreateSndParsingThread(void)
// callers(1): 0063a14c FUN_0063a14c
// callees(4): 0063fa4c FUN_0063fa4c; 00650524 sys::sys_ppu_thread_create; 006505a4 sys::sys_lwmutex_create; 006507a4 sys::sys_lwcond_create
// strings: 00673150: 'snd_stream_parsing_thread'

undefined4 idol::CreateSndParsingThread(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r7;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  *(undefined8 *)(param_1 + 2) = 0xffffffff;
  *param_1 = 0;
  sys::sys_lwmutex_create(param_1 + 4,local_58);
  iVar1 = sys::sys_lwcond_create(param_1 + 10,param_1 + 4,local_60);
  if (iVar1 == 0) {
    iVar1 = sys::sys_ppu_thread_create(param_1 + 2,in_r7,param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
      param_1[1] = 1;
    }
    else {
      FUN_0063fa4c(param_1);
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_0063fa4c(param_1,in_r7);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 0063fc58  ns=Global  size=0x28
// sig: undefined FUN_0063fc58(void)
// callers(0): 
// callees(1): 00650784 sys::sys_lwmutex_destroy

undefined4 FUN_0063fc58(void)

{
  undefined4 uVar1;
  
  uVar1 = sys::sys_lwmutex_destroy();
  return uVar1;
}



//==== 0063fc80  ns=Global  size=0x30
// sig: undefined FUN_0063fc80(void)
// callers(2): 0063aab8 FUN_0063aab8; 0063be38 FUN_0063be38
// callees(1): 00650744 sys::sys_ppu_thread_exit

void FUN_0063fc80(int param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  sys::sys_ppu_thread_exit(param_2);
  return;
}



//==== 0063fcb0  ns=Global  size=0x28
// sig: undefined FUN_0063fcb0(void)
// callers(0): 
// callees(1): 006504c4 sys::sys_lwmutex_lock

undefined4 FUN_0063fcb0(void)

{
  undefined4 uVar1;
  
  uVar1 = sys::sys_lwmutex_lock();
  return uVar1;
}



//==== 0063fcd8  ns=Global  size=0xcc
// sig: undefined FUN_0063fcd8(void)
// callers(2): 0063aab8 FUN_0063aab8; 0063be38 FUN_0063be38
// callees(3): 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 00650564 sys::sys_lwcond_wait

undefined4 FUN_0063fcd8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sys::sys_lwmutex_lock(param_1 + 4,0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = sys::sys_lwcond_wait(param_1 + 10,param_2);
    sys::sys_lwmutex_unlock(param_1 + 4);
    uVar2 = 1;
    if ((iVar1 != -0x7ffefff5) && (uVar2 = 0, iVar1 != 0)) {
      uVar2 = 0xffffffff;
      *param_1 = 1;
    }
  }
  else {
    *param_1 = 1;
  }
  return uVar2;
}



//==== 0063fda4  ns=Global  size=0x28
// sig: undefined FUN_0063fda4(void)
// callers(0): 
// callees(1): 006504e4 sys::sys_lwmutex_unlock

undefined4 FUN_0063fda4(void)

{
  undefined4 uVar1;
  
  uVar1 = sys::sys_lwmutex_unlock();
  return uVar1;
}



//==== 0063fdcc  ns=Global  size=0x88
// sig: undefined FUN_0063fdcc(void)
// callers(2): 0063ff34 989snd::sndHost_FileAsyncIsReadComplete; 00640000 FUN_00640000
// callees(0): 
// strings: 006731b0: 'Unrecognized error.' | 006731c8: 'CELL_FS_ENXIO - Did you initialize for async IO by calling cellFsAioInit(dir)?' | 00673170: 'CELL_FS_EBUSY - too many outstanding async read requests.' | 00673218: 'CELL_FS_EFAULT - aio, id or func is NULL' | 00673248: 'CELL_FS_EBADF - file descriptor is invalid'

undefined4 FUN_0063fdcc(int param_1)

{
  if (param_1 == -0x7ffefff3) {
    return *(undefined4 *)(PTR_PTR_0071b068 + -0x7ff4);
  }
  if (param_1 < -0x7ffefff2) {
    if (param_1 == -0x7ffefff6) {
      return *(undefined4 *)(PTR_PTR_0071b068 + -0x8000);
    }
  }
  else {
    if (param_1 == -0x7ffeffd6) {
      return *(undefined4 *)(PTR_PTR_0071b068 + -0x7ff0);
    }
    if (param_1 == -0x7ffeffd1) {
      return *(undefined4 *)(PTR_PTR_0071b068 + -0x7ff8);
    }
  }
  return *(undefined4 *)(PTR_PTR_0071b068 + -0x7ffc);
}



//==== 0063fe54  ns=Global  size=0x8
// sig: undefined FUN_0063fe54(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0063fe54(void)

{
  return 1;
}



//==== 0063fe5c  ns=Global  size=0x8
// sig: undefined FUN_0063fe5c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0063fe5c(void)

{
  return 0;
}



//==== 0063fe64  ns=Global  size=0x8
// sig: undefined FUN_0063fe64(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0063fe64(void)

{
  return 0;
}



//==== 0063fe6c  ns=Global  size=0x3c
// sig: undefined FUN_0063fe6c(void)
// callers(0): 
// callees(0): 

void FUN_0063fe6c(int param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x34) = param_4;
  *(int *)(iVar1 + 0x2c) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(iVar1 + 0x38) = 1;
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
    return;
  }
  *(undefined4 *)(iVar1 + 0x38) = 0xfffffffc;
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  return;
}



//==== 0063fea8  ns=Global  size=0x8c
// sig: undefined FUN_0063fea8(void)
// callers(0): 
// callees(2): 00636e78 FUN_00636e78; 0064ff64 cell::cellFsAioCancel

undefined4 FUN_0063fea8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00636e78(param_3 * 0x1f58 + **(int **)(PTR_PTR_0071b068 + -0x7fec) + 8,param_4);
  if (-1 < *(int *)(iVar1 + 0x28)) {
    iVar2 = cell::cellFsAioCancel(*(int *)(iVar1 + 0x28));
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
    if (iVar2 != 0) {
      return 0xfffffffc;
    }
  }
  return 0;
}



//==== 0063ff34  ns=989snd  size=0xcc
// sig: undefined sndHost_FileAsyncIsReadComplete(void)
// callers(0): 
// callees(4): 005c756c FUN_005c756c; 005cd098 libc::printf; 00636e78 FUN_00636e78; 0063fdcc FUN_0063fdcc
// strings: 006732a8: 'ERROR in sndHost_FileAsyncIsReadComplete: attempt to read past EOF' | 00673278: 'ERROR in sndHost_FileAsyncIsReadComplete: %s\n'

int 989snd::sndHost_FileAsyncIsReadComplete
              (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b068;
  iVar3 = FUN_00636e78(param_3 * 0x1f58 + **(int **)(PTR_PTR_0071b068 + -0x7fec) + 8,param_4);
  iVar4 = *(int *)(iVar3 + 0x38);
  if (-1 < iVar4) {
    if ((iVar4 != 0) && (*(int *)(iVar3 + 0x30) != *(int *)(iVar3 + 0x34))) {
      FUN_005c756c(*(undefined4 *)(puVar1 + -0x7fe4));
      iVar4 = -4;
      *(undefined4 *)(iVar3 + 0x38) = 0xfffffffc;
    }
    return iVar4;
  }
  uVar2 = FUN_0063fdcc(*(undefined4 *)(iVar3 + 0x2c));
  libc::printf(*(char **)(puVar1 + -0x7fe8),uVar2 & 0xffffffff);
  return *(int *)(iVar3 + 0x38);
}



//==== 00640000  ns=Global  size=0x11c
// sig: undefined FUN_00640000(void)
// callers(0): 
// callees(4): 005cd098 libc::printf; 00636e78 FUN_00636e78; 0063fdcc FUN_0063fdcc; 00650064 cell::cellFsAioRead
// strings: 006732f0: 'ERROR in sndHost_FileAsyncReadFunction: %s\n'

undefined4 FUN_00640000(undefined4 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar2;
  undefined4 uVar5;
  int in_r10;
  undefined4 in_stack_00000074;
  
  puVar1 = PTR_PTR_0071b068;
  puVar3 = (undefined4 *)
           FUN_00636e78(in_r10 * 0x1f58 + **(int **)(PTR_PTR_0071b068 + -0x7fec) + 8,
                        in_stack_00000074);
  uVar5 = *(undefined4 *)(puVar1 + -0x7fe0);
  puVar3[10] = 0xffffffff;
  *puVar3 = param_1;
  *(undefined8 *)(puVar3 + 2) = param_4;
  puVar3[4] = param_2;
  *(ulonglong *)(puVar3 + 6) = (ulonglong)param_3;
  puVar3[0xc] = param_3;
  puVar3[0xd] = 0;
  *(ulonglong *)(puVar3 + 8) = ZEXT48(puVar3);
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  iVar4 = cell::cellFsAioRead(ZEXT48(puVar3),puVar3 + 10,uVar5);
  uVar5 = 1;
  if (iVar4 != -0x7ffefff6) {
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar2 = FUN_0063fdcc(iVar4);
      libc::printf(*(char **)(puVar1 + -0x7fdc),uVar2 & 0xffffffff);
      uVar5 = 0xfffffffc;
    }
  }
  return uVar5;
}



