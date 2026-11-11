// idol/9Unk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x63fb20-0x63ff34
#include "idol/9Unk.h"
#include "sdk/989snd.h"
#include "sdk/cell.h"
#include "sdk/sys.h"

// 0x063fb20 (0x138 bytes)
// strings: 00673150: 'snd_stream_parsing_thread'

undefined4 idol::CreateSndParsingThread(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r7;
  GPiece<8> local_60;
  GPiece<24> local_58;
  
  *(undefined8 *)(param_1 + 2) = 0xffffffff;
  *param_1 = 0;
  sys_lwmutex_create(param_1 + 4,local_58);
  iVar1 = sys_lwcond_create(param_1 + 10,param_1 + 4,local_60);
  if (iVar1 == 0) {
    iVar1 = sys_ppu_thread_create(param_1 + 2,in_r7,param_1);
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


// 0x063fc58 (0x28 bytes)
undefined4 FUN_0063fc58(void)

{
  undefined4 uVar1;
  
  uVar1 = sys_lwmutex_destroy();
  return uVar1;
}


// 0x063fc80 (0x30 bytes)
void FUN_0063fc80(int param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  sys_ppu_thread_exit(param_2);
  return;
}


// 0x063fcb0 (0x28 bytes)
undefined4 FUN_0063fcb0(void)

{
  undefined4 uVar1;
  
  uVar1 = sys_lwmutex_lock();
  return uVar1;
}


// 0x063fcd8 (0xcc bytes)
undefined4 FUN_0063fcd8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sys_lwmutex_lock(param_1 + 4,0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = sys_lwcond_wait(param_1 + 10,param_2);
    sys_lwmutex_unlock(param_1 + 4);
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


// 0x063fda4 (0x28 bytes)
undefined4 FUN_0063fda4(void)

{
  undefined4 uVar1;
  
  uVar1 = sys_lwmutex_unlock();
  return uVar1;
}


// 0x063fdcc (0x88 bytes)
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


// 0x063fe54 (0x8 bytes)
undefined8 FUN_0063fe54(void)

{
  return 1;
}


// 0x063fe5c (0x8 bytes)
undefined8 FUN_0063fe5c(void)

{
  return 0;
}


// 0x063fe64 (0x8 bytes)
undefined8 FUN_0063fe64(void)

{
  return 0;
}


// 0x063fe6c (0x3c bytes)
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


// 0x063fea8 (0x8c bytes)
undefined4 FUN_0063fea8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00636e78(param_3 * 0x1f58 + **(int **)(PTR_PTR_0071b068 + -0x7fec) + 8,param_4);
  if (-1 < *(int *)(iVar1 + 0x28)) {
    iVar2 = cellFsAioCancel(*(int *)(iVar1 + 0x28));
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
    if (iVar2 != 0) {
      return 0xfffffffc;
    }
  }
  return 0;
}


