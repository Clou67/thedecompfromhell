// sdk/cUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x50fbfc-0x510704
#include <stdio.h>
#include <string.h>
#include "sdk/cUnk.h"
#include "sdk/cell.h"
#include "sdk/libc/xassert.h"
#include "sdk/libcgb/cgb.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x050fbfc (0x420 bytes)
undefined4
FUN_0050fbfc(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 param_6
            ,ushort param_7,int param_8)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort in_stack_00000076;
  int *in_stack_0000007c;
  int in_stack_00000094;
  int iStack_f4;
  GPiece<40> local_b0;
  
  uVar1 = (uint)param_7;
  uVar2 = (ulonglong)param_4;
  uVar5 = uVar1 + param_8 + (uint)in_stack_00000076;
  iVar3 = sys_process_is_stack(uVar2);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a0c));
    iVar3 = sys_process_is_stack(uVar2);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7a08),0);
    }
  }
  iVar3 = sys_process_is_stack(param_6);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a04));
    iVar3 = sys_process_is_stack(param_6);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7a00),0);
    }
  }
  if (uVar5 < uVar1 + in_stack_00000076) {
    printf(*(char **)(iStack_f4 + -0x79fc),uVar1,(uint)in_stack_00000076,(ulonglong)uVar5);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79f8),0);
  }
  if (0x10000 < param_5) {
    printf(*(char **)(iStack_f4 + -0x79f4),(ulonglong)param_5,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79f0),0);
  }
  if (0x10000 < uVar5) {
    printf(*(char **)(iStack_f4 + -0x79ec),(ulonglong)uVar5,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79e8),0);
  }
  if ((in_stack_0000007c != (int *)0x0) && (*in_stack_0000007c == 0)) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79e4),0);
  }
  if (uVar5 < param_5) {
    printf(*(char **)(iStack_f4 + -0x79e0),uVar2,(ulonglong)param_5,(ulonglong)uVar5);
  }
  if (((uint)in_stack_0000007c & 3) != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79dc),0);
  }
  if (in_stack_00000094 == 0) {
    if (param_2 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79d0),0);
    }
    if (param_3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79cc),0);
    }
  }
  else if (in_stack_00000094 == 1) {
    if (param_3 != 5) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79d8),0);
    }
    if (0x10000 < ((ulonglong)*(byte *)(param_2 + 2) << 8 |
                  (ulonglong)*(byte *)(param_2 + 4) << 0x18 |
                  (ulonglong)*(byte *)(param_2 + 3) << 0x10 | (ulonglong)*(byte *)(param_2 + 1))) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79d4),0);
    }
  }
  else {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79c8),0);
  }
  sync(1);
  iVar3 = _cellSpursLFQueuePushBody(param_1,local_b0,0);
  uVar4 = 0;
  if ((iVar3 != -0x7fbef6ff) && (uVar4 = 1, iVar3 != 0)) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79c4),0);
    uVar4 = 1;
  }
  return uVar4;
}


// 0x051001c (0x60 bytes)
undefined1 FUN_0051001c(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0050fbfc();
  return uVar1;
}


// 0x051007c (0x3fc bytes)
void FUN_0051007c(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,
                 undefined4 param_6,ushort param_7,int param_8)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ushort in_stack_00000076;
  int *in_stack_0000007c;
  int in_stack_00000094;
  int iStack_f4;
  GPiece<40> local_b0;
  
  uVar1 = (uint)param_7;
  uVar2 = (ulonglong)param_4;
  uVar4 = uVar1 + param_8 + (uint)in_stack_00000076;
  iVar3 = sys_process_is_stack(uVar2);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a0c));
    iVar3 = sys_process_is_stack(uVar2);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79c0),0);
    }
  }
  iVar3 = sys_process_is_stack(param_6);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a04));
    iVar3 = sys_process_is_stack(param_6);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79bc),0);
    }
  }
  if (uVar4 < uVar1 + in_stack_00000076) {
    printf(*(char **)(iStack_f4 + -0x79fc),uVar1,(uint)in_stack_00000076,(ulonglong)uVar4);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79b8),0);
  }
  if (0x10000 < param_5) {
    printf(*(char **)(iStack_f4 + -0x79f4),(ulonglong)param_5,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79b4),0);
  }
  if (0x10000 < uVar4) {
    printf(*(char **)(iStack_f4 + -0x79ec),(ulonglong)uVar4,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79b0),0);
  }
  if ((in_stack_0000007c != (int *)0x0) && (*in_stack_0000007c == 0)) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79ac),0);
  }
  if (uVar4 < param_5) {
    printf(*(char **)(iStack_f4 + -0x79e0),uVar2,(ulonglong)param_5,(ulonglong)uVar4);
  }
  if (((uint)in_stack_0000007c & 3) != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79a8),0);
  }
  if (in_stack_00000094 == 0) {
    if (param_2 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x799c),0);
    }
    if (param_3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7998),0);
    }
  }
  else if (in_stack_00000094 == 1) {
    if (param_3 != 5) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79a4),0);
    }
    if (0x10000 < ((ulonglong)*(byte *)(param_2 + 2) << 8 |
                  (ulonglong)*(byte *)(param_2 + 4) << 0x18 |
                  (ulonglong)*(byte *)(param_2 + 3) << 0x10 | (ulonglong)*(byte *)(param_2 + 1))) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79a0),0);
    }
  }
  else {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7994),0);
  }
  sync(1);
  iVar3 = _cellSpursLFQueuePushBody(param_1,local_b0,3);
  if (iVar3 != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7990),0);
  }
  return;
}


// 0x0510478 (0x5c bytes)
void FUN_00510478(void)

{
  FUN_0051007c();
  return;
}


// 0x05104d4 (0x164 bytes)
// strings: 00666e38: 'edgelzma_inflate_queue.cpp:115 (bufferSize == edgeLzmaGetInflateQueueSize( maxNumQueueEntries ))' | 00666ea0: 'edgelzma_inflate_queue.cpp:116 (bufferSize == (128 + (maxNumQueueEntries * 32)))' | 00666f40: 'edgelzma_inflate_queue.cpp:131 (0 == ret)' | 00666ef8: 'edgelzma_inflate_queue.cpp:117 ((((uint32_t)pBuffer) & 0x7F) == 0)'

uint FUN_005104d4(uint param_1,ulonglong param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puStack_74;
  
  iVar2 = FUN_0050fbb0(param_2 & 0xffffffff);
  if (iVar2 != param_4) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_115___0071a99c,0);
  }
  if ((int)((param_2 & 0xffffffff) << 5) + 0x80 != param_4) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_116___0071a9a0,0);
  }
  if ((param_3 & 0x7f) != 0) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_117___0071a9a4,0);
  }
  memset(param_3,0,param_4);
  puVar1 = &TOC_BASE;
  if (((param_1 == 0) || ((param_1 & 0x7f) != 0)) ||
     (iVar2 = _cellSpursLFQueueInitialize
                        (param_1 | 1,param_3,param_3 + 0x80,0x20,param_2 & 0xffffffff,3),
     puVar1 = puStack_74, iVar2 != 0)) {
    FUN_005cef58(*(undefined4 *)(puVar1 + -0x7980),0);
  }
  iVar2 = cellSpursLFQueueAttachLv2EventQueue(param_3);
  if (iVar2 != 0) {
    FUN_005cef58(*(undefined4 *)(puStack_74 + -0x797c),0);
  }
  return param_3;
}


// 0x0510638 (0x94 bytes)
// strings: 00666fa0: 'edgelzma_inflate_queue.cpp:57 ((1024+2048) == edgeLzmaGetInflateTaskContextSaveSize())'

undefined4 FUN_00510638(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_74;
  undefined4 local_30 [2];
  GPiece<24> local_28;
  
  iVar1 = FUN_0050fb6c();
  if (iVar1 != 0xc00) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_57____0071a9b0,0);
  }
  iVar1 = cellSpursCreateTask
                    (param_1,local_30,PTR_DAT_0071a9b4,param_2,0xc00,PTR_DAT_0071a9b8,local_28);
  if (iVar1 != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_74 + -0x796c),0);
  }
  return local_30[0];
}


// 0x05106cc (0x1c bytes)
void FUN_005106cc(undefined4 *param_1)

{
  *param_1 = 0x46494f53;
  param_1[1] = 0x6f626a20;
  return;
}


// 0x05106e8 (0x1c bytes)
void FUN_005106e8(undefined4 *param_1)

{
  *param_1 = 0x46494f53;
  param_1[1] = 0x6f626a20;
  return;
}


