//==== 0051001c  ns=Global  size=0x60
// sig: undefined FUN_0051001c(void)
// callers(0): 
// callees(1): 0050fbfc FUN_0050fbfc

undefined1 FUN_0051001c(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0050fbfc();
  return uVar1;
}



//==== 0051007c  ns=Global  size=0x3fc
// sig: undefined FUN_0051007c(void)
// callers(2): 00510478 FUN_00510478; 005e799c FUN_005e799c
// callees(5): 005c756c FUN_005c756c; 005cd098 libc::printf; 005cef58 FUN_005cef58; 00650164 cell::_cellSpursLFQueuePushBody; 00650644 sys::sys_process_is_stack

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
  undefined1 local_b0 [40];
  
  uVar1 = (uint)param_7;
  uVar2 = (ulonglong)param_4;
  uVar4 = uVar1 + param_8 + (uint)in_stack_00000076;
  iVar3 = sys::sys_process_is_stack(uVar2);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a0c));
    iVar3 = sys::sys_process_is_stack(uVar2);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79c0),0);
    }
  }
  iVar3 = sys::sys_process_is_stack(param_6);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a04));
    iVar3 = sys::sys_process_is_stack(param_6);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79bc),0);
    }
  }
  if (uVar4 < uVar1 + in_stack_00000076) {
    libc::printf(*(char **)(iStack_f4 + -0x79fc),uVar1,(uint)in_stack_00000076,(ulonglong)uVar4);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79b8),0);
  }
  if (0x10000 < param_5) {
    libc::printf(*(char **)(iStack_f4 + -0x79f4),(ulonglong)param_5,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79b4),0);
  }
  if (0x10000 < uVar4) {
    libc::printf(*(char **)(iStack_f4 + -0x79ec),(ulonglong)uVar4,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79b0),0);
  }
  if ((in_stack_0000007c != (int *)0x0) && (*in_stack_0000007c == 0)) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79ac),0);
  }
  if (uVar4 < param_5) {
    libc::printf(*(char **)(iStack_f4 + -0x79e0),uVar2,(ulonglong)param_5,(ulonglong)uVar4);
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
  iVar3 = cell::_cellSpursLFQueuePushBody(param_1,local_b0,3);
  if (iVar3 != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7990),0);
  }
  return;
}



//==== 00510478  ns=Global  size=0x5c
// sig: undefined FUN_00510478(void)
// callers(0): 
// callees(1): 0051007c FUN_0051007c

void FUN_00510478(void)

{
  FUN_0051007c();
  return;
}



//==== 005104d4  ns=Global  size=0x164
// sig: undefined FUN_005104d4(void)
// callers(1): 005e7930 FUN_005e7930
// callees(5): 0050fbb0 FUN_0050fbb0; 005cef58 FUN_005cef58; 005d0140 libc::memset; 00650104 cell::_cellSpursLFQueueInitialize; 00650124 cell::cellSpursLFQueueAttachLv2EventQueue
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
  libc::memset(param_3,0,param_4);
  puVar1 = &TOC_BASE;
  if (((param_1 == 0) || ((param_1 & 0x7f) != 0)) ||
     (iVar2 = cell::_cellSpursLFQueueInitialize
                        (param_1 | 1,param_3,param_3 + 0x80,0x20,param_2 & 0xffffffff,3),
     puVar1 = puStack_74, iVar2 != 0)) {
    FUN_005cef58(*(undefined4 *)(puVar1 + -0x7980),0);
  }
  iVar2 = cell::cellSpursLFQueueAttachLv2EventQueue(param_3);
  if (iVar2 != 0) {
    FUN_005cef58(*(undefined4 *)(puStack_74 + -0x797c),0);
  }
  return param_3;
}



//==== 00510638  ns=Global  size=0x94
// sig: undefined FUN_00510638(void)
// callers(1): 005e7968 FUN_005e7968
// callees(3): 0050fb6c FUN_0050fb6c; 005cef58 FUN_005cef58; 00650184 cell::cellSpursCreateTask
// strings: 00666fa0: 'edgelzma_inflate_queue.cpp:57 ((1024+2048) == edgeLzmaGetInflateTaskContextSaveSize())'

undefined4 FUN_00510638(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_74;
  undefined4 local_30 [2];
  undefined1 local_28 [24];
  
  iVar1 = FUN_0050fb6c();
  if (iVar1 != 0xc00) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_57____0071a9b0,0);
  }
  iVar1 = cell::cellSpursCreateTask
                    (param_1,local_30,PTR_DAT_0071a9b4,param_2,0xc00,PTR_DAT_0071a9b8,local_28);
  if (iVar1 != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_74 + -0x796c),0);
  }
  return local_30[0];
}



//==== 005106cc  ns=Global  size=0x1c
// sig: undefined FUN_005106cc(void)
// callers(14): 00519aa4 FUN_00519aa4; 00519c8c FUN_00519c8c; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052d478 FUN_0052d478; 0052d90c FUN_0052d90c; 0052dfc4 FUN_0052dfc4; 0052e0b8 FUN_0052e0b8; 0052e1dc FUN_0052e1dc; 0052e828 FUN_0052e828; 00539124 FUN_00539124; 005391f4 FUN_005391f4
// callees(0): 

void FUN_005106cc(undefined4 *param_1)

{
  *param_1 = 0x46494f53;
  param_1[1] = 0x6f626a20;
  return;
}



//==== 005106e8  ns=Global  size=0x1c
// sig: undefined FUN_005106e8(void)
// callers(0): 
// callees(0): 

void FUN_005106e8(undefined4 *param_1)

{
  *param_1 = 0x46494f53;
  param_1[1] = 0x6f626a20;
  return;
}



//==== 00510704  ns=Global  size=0x90
// sig: undefined FUN_00510704(void)
// callers(10): 005130cc FUN_005130cc; 005199ac FUN_005199ac; 0051a26c FUN_0051a26c; 0051a858 FUN_0051a858; 0051ace0 FUN_0051ace0; 005238c0 FUN_005238c0; 00529580 FUN_00529580; 0053126c FUN_0053126c; 00532e54 FUN_00532e54; 00535428 FUN_00535428
// callees(0): 

void FUN_00510704(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9c0 + 8) + 4))
            (*(int **)(PTR_DAT_0071a9c0 + 8),param_1,
             param_2 | 0x100 | *(uint *)(&stack0x00000000 + iVar1),0,0);
  return;
}



//==== 00510794  ns=Global  size=0x3c
// sig: undefined FUN_00510794(void)
// callers(0): 
// callees(1): 00604574 fios::check_magic2

void FUN_00510794(undefined4 *param_1)

{
  fios::check_magic2();
  *param_1 = 0x66696f53;
  return;
}



//==== 005107d0  ns=fios  size=0x3c
// sig: undefined handle_invalidate_magic(void)
// callers(16): 0051a858 FUN_0051a858; 0051a9f0 FUN_0051a9f0; 0051ab68 FUN_0051ab68; 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc; 0052cf74 FUN_0052cf74; 0052d018 FUN_0052d018; 0052d080 FUN_0052d080; 0052d0e8 FUN_0052d0e8; 0052d2c0 FUN_0052d2c0; 0052db8c FUN_0052db8c; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8; 005390ac fios::handle_destroy; 005390e8 FUN_005390e8
// callees(1): 00604574 fios::check_magic2

void fios::handle_invalidate_magic(undefined4 *param_1)

{
  check_magic2();
  *param_1 = 0x66696f53;
  return;
}



//==== 0051080c  ns=Global  size=0x94
// sig: undefined FUN_0051080c(void)
// callers(2): 0001401c boot::boot; 005199ac FUN_005199ac
// callees(0): 

undefined4 FUN_0051080c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  uVar2 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9c0 + 8))
                    (*(undefined4 **)(PTR_DAT_0071a9c0 + 8),param_1,
                     param_2 | 0x100 | *(uint *)(&stack0x00000000 + iVar1),0,0);
  return uVar2;
}



//==== 005108a0  ns=Global  size=0x8c
// sig: undefined FUN_005108a0(void)
// callers(0): 
// callees(0): 

void FUN_005108a0(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9c0 + 8) + 4))
            (*(int **)(PTR_DAT_0071a9c0 + 8),param_1,param_2 | *(uint *)(&stack0x00000000 + iVar1),0
             ,0);
  return;
}



//==== 0051092c  ns=Global  size=0x90
// sig: undefined FUN_0051092c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0051092c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack00000040;
  
  iVar1 = -0x10;
  if (1 < param_3) {
    iVar1 = 0x40;
  }
  uStack00000040 = param_3;
  uVar2 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9c0 + 8))
                    (*(undefined4 **)(PTR_DAT_0071a9c0 + 8),param_1,
                     param_2 | *(uint *)(&stack0x00000000 + iVar1),0,0);
  return uVar2;
}



//==== 005109bc  ns=Global  size=0xc4
// sig: undefined FUN_005109bc(void)
// callers(0): 
// callees(0): 
// strings: 00667058: 'PSARC_DECOMPRESS1_64K' | 00667040: 'PSARC_DECOMPRESS4_64K' | 00667070: 'PSARC_DECOMPRESS2_64K' | 00667028: 'PSARC_DECOMPRESS3_64K'

undefined * FUN_005109bc(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = param_2 - *(int *)(param_1 + 0x168);
  if (iVar1 == 1) {
    return PTR_s_PSARC_DECOMPRESS2_64K_0071a9d0;
  }
  puVar2 = PTR_s_PSARC_DECOMPRESS1_64K_0071a9cc;
  if (param_2 != *(int *)(param_1 + 0x168)) {
    if (iVar1 == 2) {
      return PTR_s_PSARC_DECOMPRESS3_64K_0071a9c4;
    }
    puVar2 = PTR_s_PSARC_DECOMPRESS4_64K_0071a9c8;
    if (iVar1 != 3) {
      puVar2 = (undefined *)
               (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x40) + 0xc))
                         (*(int **)(param_1 + 0x40),param_2);
      return puVar2;
    }
  }
  return puVar2;
}



//==== 00510a80  ns=Global  size=0x44
// sig: undefined FUN_00510a80(void)
// callers(0): 
// callees(0): 

void FUN_00510a80(int param_1)

{
  (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40));
  return;
}



//==== 00510ac4  ns=Global  size=0xc8
// sig: undefined FUN_00510ac4(void)
// callers(0): 
// callees(0): 

int FUN_00510ac4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = PTR_DAT_0071a9d4[*(byte *)*param_1];
  bVar3 = PTR_DAT_0071a9d4[*(byte *)*param_2];
  if (bVar2 != 0) {
    if (bVar3 == 0) {
      return 1;
    }
    iVar1 = 0;
    if (bVar2 == bVar3) {
      do {
        iVar1 = iVar1 + 1;
        bVar2 = PTR_DAT_0071a9d4[((byte *)*param_1)[iVar1]];
        bVar3 = PTR_DAT_0071a9d4[((byte *)*param_2)[iVar1]];
        if (bVar2 == 0) goto LAB_00510b54;
        if (bVar3 == 0) {
          return 1;
        }
      } while (bVar2 == bVar3);
    }
    return (int)(char)bVar2 - (int)(char)bVar3;
  }
LAB_00510b54:
  return (int)-(uint)bVar3 >> 0x1f;
}



//==== 00510b8c  ns=Global  size=0x160
// sig: undefined FUN_00510b8c(void)
// callers(1): 00512bac FUN_00512bac
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667088: 'fios dearchiver: allocator did not return a buffer with the required alignment!\n'

uint FUN_00510b8c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_0071a9d8;
  if (param_2 != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
              (*(int **)(PTR_DAT_0071a9d8 + 8),param_2,*(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
  }
  puVar1 = *(undefined4 **)(puVar3 + 8);
  uVar4 = (*(code *)**(undefined4 **)*puVar1)
                    (puVar1,param_3,*(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
  uVar5 = 0;
  if ((uVar4 != 0) &&
     (uVar5 = uVar4, ((1 << (*(uint *)(param_1 + 0x1b0) & 0x3f)) - 1U & uVar4) != 0)) {
    fios::print_tty4(PTR_s_fios_dearchiver__allocator_did_n_0071a9dc);
    piVar2 = *(int **)(puVar3 + 8);
    uVar5 = 0;
    (*(code *)**(undefined4 **)(*piVar2 + 4))
              (piVar2,uVar4,*(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
  }
  return uVar5;
}



//==== 00510cec  ns=Global  size=0x68
// sig: undefined FUN_00510cec(void)
// callers(1): 00517398 FUN_00517398
// callees(1): 005193cc FUN_005193cc

undefined4 FUN_00510cec(int param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x238)) {
    iVar1 = (int)((param_2 & 0x3fffffff) << 2);
  }
  FUN_005193cc(param_3,*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x230)),0x100);
  return param_3;
}



//==== 00510d54  ns=Global  size=0x118
// sig: undefined FUN_00510d54(void)
// callers(2): 00515a1c FUN_00515a1c; 00516fb8 FUN_00516fb8
// callees(3): 005c5ad0 libc::memcpy; 005c8510 libc::strlen; 005ccb28 FUN_005ccb28

undefined4 FUN_00510d54(int param_1,undefined8 param_2,void *param_3)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
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
  sVar2 = libc::strlen((char *)param_2);
  piVar1 = *(int **)(param_1 + 0x164);
  if (piVar1 != (int *)0x0) {
    do {
      if ((piVar1[99] == sVar2) && (iVar3 = FUN_005ccb28(piVar1 + 0x23,param_2,sVar2), iVar3 == 0))
      {
        if (param_3 != (void *)0x0) {
          libc::memcpy(param_3,piVar1 + 100,0x58);
        }
        return 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}



//==== 00510e6c  ns=Global  size=0xcc
// sig: undefined FUN_00510e6c(void)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 005ccb28 FUN_005ccb28

size_t FUN_00510e6c(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  sVar4 = libc::strlen(param_2);
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 != 0) {
    puVar7 = (uint *)(param_1 + 0x144);
    iVar6 = 0;
    do {
      puVar3 = puVar7 + -8;
      iVar6 = iVar6 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      if ((uVar2 < sVar4) &&
         (iVar5 = FUN_005ccb28(*puVar3,param_2 + (sVar4 - uVar2),uVar2), iVar5 == 0)) {
        return sVar4 - uVar2;
      }
    } while (iVar6 != iVar1);
  }
  return sVar4;
}



//==== 00510f38  ns=Global  size=0x1a0
// sig: undefined FUN_00510f38(void)
// callers(2): 005111e4 FUN_005111e4; 005177d8 FUN_005177d8
// callees(4): 005193cc FUN_005193cc; 005c8510 libc::strlen; 005cc578 libc::strchr; 005ccb28 FUN_005ccb28

undefined4 FUN_00510f38(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *__s;
  
  sVar2 = libc::strlen((char *)param_3);
  uVar1 = (int)(sVar2 ^ 1) >> 0x1f;
  iVar3 = 0;
  uVar1 = sVar2 & (int)(uVar1 - (uVar1 ^ sVar2 ^ 1)) >> 0x1f;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x238)) {
    iVar3 = (int)((param_2 & 0x3fffffff) << 2);
  }
  iVar3 = *(int *)(iVar3 + *(int *)(param_1 + 0x230));
  pcVar5 = (char *)(iVar3 + uVar1);
  iVar3 = FUN_005ccb28(param_3,iVar3,uVar1);
  uVar4 = 0;
  if (iVar3 == 0) {
    if (*pcVar5 == '/') {
      if (param_4 != 0) {
        FUN_005193cc(param_4,param_3,0x100);
        __s = (char *)(param_4 + uVar1 + 1);
        *(undefined1 *)(param_4 + uVar1) = 0x2f;
        FUN_005193cc(__s,pcVar5 + 1,0x100 - (uVar1 + 1));
        pcVar5 = libc::strchr(__s,0x2f);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
          return 1;
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}



//==== 005110d8  ns=Global  size=0x10c
// sig: undefined FUN_005110d8(void)
// callers(1): 005177d8 FUN_005177d8
// callees(3): 005c8510 libc::strlen; 005c85b4 FUN_005c85b4; 005ccb28 FUN_005ccb28

uint FUN_005110d8(int param_1,ulonglong param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x238)) {
    iVar4 = (int)((param_2 & 0x3fffffff) << 2);
  }
  iVar4 = *(int *)(iVar4 + *(int *)(param_1 + 0x230));
  iVar1 = FUN_005c85b4(iVar4,0x2f);
  sVar2 = libc::strlen(param_3);
  uVar3 = (int)(sVar2 ^ 1) >> 0x1f;
  if (iVar1 - iVar4 != (sVar2 & (int)(uVar3 - (uVar3 ^ sVar2 ^ 1)) >> 0x1f)) {
    return 0;
  }
  uVar3 = FUN_005ccb28(param_3,iVar4,iVar1 - iVar4);
  return (((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) - 1 >> 0x1f;
}



//==== 005111e4  ns=Global  size=0x1d0
// sig: undefined FUN_005111e4(void)
// callers(1): 005177d8 FUN_005177d8
// callees(5): 00510f38 FUN_00510f38; 00519310 FUN_00519310; 005193cc FUN_005193cc; 005c8510 libc::strlen; 005ccb28 FUN_005ccb28

int FUN_005111e4(int param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  size_t sVar6;
  char cVar7;
  ulonglong uVar8;
  int iVar9;
  char cStack_160;
  char local_15f;
  
  if (*(int *)(param_1 + 0x238) == 0) {
    return -1;
  }
  FUN_005193cc(&cStack_160,param_2,0x100);
  if (local_15f != '\0') {
    FUN_00519310(&cStack_160,PTR_DAT_0071a9e0,0x100);
  }
  uVar8 = 0;
  sVar6 = libc::strlen(&cStack_160);
  uVar1 = *(uint *)(param_1 + 0x238);
  uVar2 = (ulonglong)uVar1;
  do {
    iVar3 = (int)uVar2 + -1;
    iVar9 = (int)uVar8;
    iVar5 = iVar3 - iVar9;
    uVar4 = (longlong)(iVar5 >> 1) + uVar8 + 1;
    while( true ) {
      uVar2 = uVar4;
      if (iVar5 < 1) {
        cVar7 = FUN_00510f38(param_1,iVar9,param_2,0);
        if (cVar7 != '\0') {
          return iVar9;
        }
        if (iVar9 < *(int *)(param_1 + 0x238) + -1) {
          cVar7 = FUN_00510f38(param_1,iVar9 + 1,param_2,0);
          if (cVar7 != '\0') {
            return iVar9 + 1;
          }
        }
        return -1;
      }
      iVar9 = (int)uVar2;
      iVar5 = 0;
      if ((uVar2 & 0xffffffff) < (ulonglong)uVar1) {
        iVar5 = (int)((uVar2 & 0x3fffffff) << 2);
      }
      iVar5 = FUN_005ccb28(&cStack_160,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x230)),sVar6);
      if (iVar5 < 1) break;
      iVar5 = iVar3 - iVar9;
      uVar4 = (longlong)(iVar5 >> 1) + uVar2 + 1;
      uVar8 = uVar2;
    }
  } while( true );
}



//==== 005113b4  ns=Global  size=0x170
// sig: undefined FUN_005113b4(void)
// callers(3): 00513598 FUN_00513598; 00516bcc FUN_00516bcc; 00516fb8 FUN_00516fb8
// callees(4): 0052cbd8 fios::print_tty4; 0052fcbc FUN_0052fcbc; 0052fd8c FUN_0052fd8c; 005300ac FUN_005300ac
// strings: 006670e8: "fios read archive problem: can't load special '%s' from non-PSARC-MSELF archive\n" | 00667140: "fios read archive problem: lookup of block %lu in file '%s' in archive '%s' failed!\n" | 00667198: "FIOS dearchiver open file '%s' because it's compressed!\n"

longlong FUN_005113b4(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  char cVar6;
  undefined8 uVar5;
  longlong lVar7;
  char local_50 [8];
  longlong local_48;
  undefined1 auStack_40 [24];
  
  if (*(longlong *)(param_4 + 0x70) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 8);
    puVar1 = PTR_s_fios_read_archive_problem__can_t_0071a9e4;
    goto LAB_005114cc;
  }
  iVar4 = param_4 + 8;
  cVar6 = FUN_0052fd8c(iVar4,*(undefined4 *)(param_4 + 0x80),param_3,
                       *(undefined4 *)(param_4 + 0x1ec),0,auStack_40,&local_48,local_50);
  if (cVar6 == '\0') {
    fios::print_tty4(PTR_s_fios_read_archive_problem__looku_0071a9e8,0,*(undefined4 *)(param_2 + 8),
                     param_4 + 0x8c);
    *(undefined4 *)(param_2 + 4) = 0x8001070f;
    return -1;
  }
  lVar7 = *(longlong *)(param_4 + 0x70);
  if (local_50[0] == '\0') {
    uVar2 = *(undefined4 *)(param_4 + 0x80);
    uVar5 = FUN_0052fcbc(iVar4,uVar2,param_3);
    cVar6 = FUN_005300ac(iVar4,uVar2,param_3,0,uVar5);
    bVar3 = true;
    if (cVar6 == '\0') goto LAB_00511444;
  }
  else {
LAB_00511444:
    bVar3 = false;
  }
  if (bVar3) {
    return local_48 + lVar7;
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1 = PTR_s_FIOS_dearchiver_open_file___s__b_0071a9ec;
LAB_005114cc:
  fios::print_tty4(puVar1,uVar2);
  *(undefined4 *)(param_2 + 4) = 0x8001070f;
  return -1;
}



//==== 00511524  ns=Global  size=0x278
// sig: undefined FUN_00511524(void)
// callers(6): 005118e8 FUN_005118e8; 00511a80 FUN_00511a80; 00511c34 FUN_00511c34; 00511de8 FUN_00511de8; 00511f8c FUN_00511f8c; 00512130 FUN_00512130
// callees(2): 005c8510 libc::strlen; 005d0140 libc::memset

void FUN_00511524(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  char *__s;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uStack00000038;
  uint uStack00000048;
  
  *(undefined4 *)(param_1 + 0x1b0) = 7;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  uStack00000038 = param_2;
  uStack00000048 = param_4;
  libc::memset(param_1 + 0x1b4,0,0x60);
  libc::memset(param_1 + 0x268,0,0x860);
  *(undefined4 *)(param_1 + 0xac8) = 0;
  iVar7 = 0x38;
  if (3 < uStack00000038) {
    iVar7 = -0x48;
  }
  uStack00000038 = *(uint *)(&stack0x00000000 + iVar7);
  piVar6 = (int *)(param_1 + 0x104);
  *piVar6 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(uint *)(param_1 + 0x100) = uStack00000038;
  if (uStack00000038 != 0) {
    uVar9 = (ulonglong)uStack00000038;
    iVar7 = 0;
    if (uStack00000038 == 0) {
      uVar9 = 1;
    }
    do {
      puVar3 = (undefined4 *)(iVar7 + param_3);
      iVar2 = iVar7 + param_1;
      iVar7 = iVar7 + 4;
      *(undefined4 *)(iVar2 + 0x104) = *puVar3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar7 = 0x48;
  if (7 < uStack00000048) {
    iVar7 = -0x44;
  }
  uVar1 = *(uint *)(&stack0x00000000 + iVar7);
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 0x120) = uVar1;
  if (uVar1 != 0) {
    uVar8 = 0;
    iVar7 = 0;
    uStack00000048 = uVar1;
    do {
      puVar3 = (undefined4 *)(iVar7 + param_5);
      iVar2 = param_1 + iVar7;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      __s = (char *)*puVar3;
      *(char **)(iVar2 + 0x124) = __s;
      sVar5 = libc::strlen(__s);
      *(size_t *)(iVar2 + 0x144) = sVar5;
    } while (uVar8 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x100);
  if (uVar1 != 0) {
    uVar9 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      uVar9 = 1;
    }
    do {
      iVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar2 = -0x50;
      if (*(byte *)(iVar7 + 0x15) <= *(byte *)(iVar7 + 0x14)) {
        iVar2 = -0x4c;
      }
      puVar4 = (uint *)(&stack0x00000000 + iVar2);
      if (*(uint *)(&stack0x00000000 + iVar2) <= *(uint *)(param_1 + 0x1b0)) {
        puVar4 = (uint *)(param_1 + 0x1b0);
      }
      *(uint *)(param_1 + 0x1b0) = *puVar4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



//==== 0051179c  ns=Global  size=0x14c
// sig: undefined FUN_0051179c(void)
// callers(2): 00512bac FUN_00512bac; 00512e10 FUN_00512e10
// callees(1): 0052e49c FUN_0052e49c

undefined4 FUN_0051179c(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  do {
    iVar1 = 0;
    iVar2 = param_1 + 0x1b0;
    piVar3 = (int *)(param_1 + 0x1c8);
    while( true ) {
      iVar1 = iVar1 + 1;
      if ((((piVar3[-5] != 0) && (piVar3[-4] == param_3)) && (*piVar3 == param_4)) &&
         (((piVar3[1] == param_5 && (piVar3[2] == param_6)) && (*(byte *)(piVar3 + -1) == param_2)))
         ) break;
      iVar2 = iVar2 + 0x20;
      piVar3 = piVar3 + 8;
      if (2 < iVar1) {
        return 0;
      }
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      return *(undefined4 *)(iVar2 + 4);
    }
    FUN_0052e49c(param_1 + 0x198,param_1 + 0x170,0);
  } while( true );
}



//==== 005118e8  ns=Global  size=0x198
// sig: undefined FUN_005118e8(void)
// callers(0): 
// callees(5): 00511524 FUN_00511524; 00519ecc FUN_00519ecc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_005118e8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000040;
  undefined4 uStack00000058;
  
  uStack00000040 = param_3;
  uStack00000058 = param_6;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_4;
  param_1[0x47] = param_5 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x6c] = 7;
  param_1[0x8e] = 0;
  param_1[0x8d] = 4;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,1,&stack0x00000040,1,&stack0x00000058);
  return;
}



//==== 00511a80  ns=Global  size=0x1b4
// sig: undefined FUN_00511a80(void)
// callers(1): 0001401c boot::boot
// callees(5): 00511524 FUN_00511524; 00519ecc FUN_00519ecc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511a80(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,param_7,param_8);
  return;
}



//==== 00511c34  ns=Global  size=0x1b4
// sig: undefined FUN_00511c34(void)
// callers(0): 
// callees(5): 00511524 FUN_00511524; 00519ecc FUN_00519ecc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511c34(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,param_7,param_8);
  return;
}



//==== 00511de8  ns=Global  size=0x1a4
// sig: undefined FUN_00511de8(void)
// callers(0): 
// callees(5): 00511524 FUN_00511524; 00519ecc FUN_00519ecc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511de8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000060;
  
  uStack00000060 = param_7;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,1,&stack0x00000060);
  return;
}



//==== 00511f8c  ns=Global  size=0x1a4
// sig: undefined FUN_00511f8c(void)
// callers(0): 
// callees(5): 00511524 FUN_00511524; 00519ecc FUN_00519ecc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511f8c(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000060;
  
  uStack00000060 = param_7;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,1,&stack0x00000060);
  return;
}



//==== 00512130  ns=Global  size=0x198
// sig: undefined FUN_00512130(void)
// callers(0): 
// callees(5): 00511524 FUN_00511524; 00519ecc FUN_00519ecc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00512130(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000040;
  undefined4 uStack00000058;
  
  uStack00000040 = param_3;
  uStack00000058 = param_6;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_4;
  param_1[0x47] = param_5 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x6c] = 7;
  param_1[0x8e] = 0;
  param_1[0x8d] = 4;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,1,&stack0x00000040,1,&stack0x00000058);
  return;
}



//==== 005122c8  ns=Global  size=0xf0
// sig: undefined FUN_005122c8(void)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 005ccb28 FUN_005ccb28

undefined4 FUN_005122c8(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  sVar4 = libc::strlen(param_2);
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 != 0) {
    puVar6 = (uint *)(param_1 + 0x144);
    iVar7 = 0;
    do {
      uVar2 = *puVar6;
      puVar3 = puVar6 + -8;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      if ((uVar2 < sVar4) &&
         (iVar5 = FUN_005ccb28(*puVar3,param_2 + (sVar4 - uVar2),uVar2), iVar5 == 0)) {
        return 1;
      }
    } while (iVar7 != iVar1);
  }
  return 0;
}



//==== 005123b8  ns=Global  size=0x310
// sig: undefined FUN_005123b8(void)
// callers(2): 00517560 FUN_00517560; 005177d8 FUN_005177d8
// callees(3): 005c8308 FUN_005c8308; 005c8510 libc::strlen; 005cc784 FUN_005cc784

undefined4 FUN_005123b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  char *pcVar13;
  ulonglong uVar14;
  uint uVar15;
  char *__s;
  ulonglong uVar16;
  
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x238) = 0;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_005c8308(*(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238),4,
                   PTR_PTR_0071aa14);
      uVar15 = *(uint *)(param_1 + 0x238);
      if (1 < uVar15) {
        uVar14 = 0;
        uVar5 = *(uint *)(param_1 + 0x230);
        do {
          iVar10 = 0;
          if ((uVar14 & 0xffffffff) < (ulonglong)uVar15) {
            iVar10 = (int)((uVar14 & 0x3fffffff) << 2);
          }
          uVar16 = uVar14 + 1;
          iVar9 = 0;
          if ((uVar16 & 0xffffffff) < (ulonglong)uVar15) {
            iVar9 = (int)((uVar16 & 0x3fffffff) << 2);
          }
          iVar10 = FUN_005cc784(*(undefined4 *)(iVar10 + uVar5),*(undefined4 *)(uVar5 + iVar9));
          if (iVar10 == 0) {
            lVar11 = (ulonglong)uVar5 + (uVar14 & 0x3fffffff) * 4 + 4;
            iVar10 = (int)lVar11;
            while (uVar5 + uVar15 * 4 != iVar10) {
              puVar1 = (undefined4 *)lVar11;
              lVar11 = lVar11 + 4;
              puVar1[-1] = *puVar1;
              iVar10 = (int)lVar11;
            }
            uVar15 = uVar15 - 1;
            *(uint *)(param_1 + 0x238) = uVar15;
            uVar16 = uVar14;
          }
          uVar14 = uVar16;
        } while ((uVar14 & 0xffffffff) < (ulonglong)(uVar15 - 1));
      }
      return 1;
    }
    __s = (char *)puVar1[0x21];
    if (__s != (char *)0x0) {
      pcVar13 = __s + puVar1[0x22];
      for (; __s < pcVar13; __s = __s + sVar8 + 1) {
        uVar15 = *(uint *)(param_1 + 0x238);
        if (*(uint *)(param_1 + 0x234) == uVar15) {
          puVar2 = *(undefined4 **)(param_1 + 0x214);
          iVar10 = uVar15 << 1;
          iVar9 = (*(code *)**(undefined4 **)*puVar2)
                            (puVar2,((ulonglong)uVar15 & 0x1fffffff) << 3,
                             *(undefined4 *)(param_1 + 0x218),0,0);
          bVar7 = false;
          if (iVar9 != 0) {
            uVar15 = *(uint *)(param_1 + 0x238);
            if (uVar15 == 0) {
              iVar3 = *(int *)(param_1 + 0x230);
            }
            else {
              iVar3 = *(int *)(param_1 + 0x230);
              uVar14 = (ulonglong)uVar15;
              iVar12 = 0;
              if (uVar15 == 0) {
                uVar14 = 1;
              }
              do {
                puVar2 = (undefined4 *)(iVar12 + iVar3);
                puVar6 = (undefined4 *)(iVar12 + iVar9);
                iVar12 = iVar12 + 4;
                *puVar6 = *puVar2;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            if (*(int *)(param_1 + 0x21c) != iVar3) {
              piVar4 = *(int **)(param_1 + 0x214);
              (*(code *)**(undefined4 **)(*piVar4 + 4))
                        (piVar4,iVar3,*(undefined4 *)(param_1 + 0x218),0,0);
              uVar15 = *(uint *)(param_1 + 0x238);
            }
            *(int *)(param_1 + 0x230) = iVar9;
            *(int *)(param_1 + 0x234) = iVar10;
            goto LAB_00512420;
          }
        }
        else {
LAB_00512420:
          bVar7 = true;
          *(uint *)(param_1 + 0x238) = uVar15 + 1;
          *(char **)(uVar15 * 4 + *(int *)(param_1 + 0x230)) = __s;
        }
        if (!bVar7) {
          return 0;
        }
        sVar8 = libc::strlen(__s);
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}



//==== 005126c8  ns=Global  size=0x88
// sig: undefined FUN_005126c8(void)
// callers(0): 
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005d0140 libc::memset

void FUN_005126c8(int param_1,uint param_2)

{
  fios::lwmutex_lock_checked(param_1 + 0x240);
  libc::memset(param_1 + 0x268,0,0x860);
  sync(1);
  *(uint *)(param_1 + 0x11c) = param_2 & 0xff;
  fios::lwmutex_unlock_checked(param_1 + 0x240);
  return;
}



//==== 00512750  ns=Global  size=0xd0
// sig: undefined FUN_00512750(void)
// callers(0): 
// callees(3): 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 005cc784 FUN_005cc784

undefined4 FUN_00512750(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
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
  FUN_0052ce28(param_1 + 0x98);
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_005127d0:
      uVar3 = 0;
LAB_005127d4:
      FUN_0052cd7c(param_1 + 0x98);
      return uVar3;
    }
    iVar2 = FUN_005cc784(puVar1 + 0x23,param_2);
    if (iVar2 == 0) {
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = puVar1[0x1f];
        instructionSynchronize();
        goto LAB_005127d4;
      }
      goto LAB_005127d0;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}



//==== 00512820  ns=Global  size=0xd4
// sig: undefined FUN_00512820(void)
// callers(1): 005168a8 FUN_005168a8
// callees(2): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

void FUN_00512820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x170;
  fios::lwmutex_lock_checked(iVar2);
  if (*(int *)(param_1 + 0x1c8) == param_2) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    iVar1 = *(int *)(param_1 + 0x1e8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1e8);
  }
  if (iVar1 == param_2) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    iVar1 = *(int *)(param_1 + 0x208);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x208);
  }
  if (iVar1 != param_2) {
    fios::lwmutex_unlock_checked(iVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  fios::lwmutex_unlock_checked(iVar2);
  return;
}



//==== 005128f4  ns=Global  size=0x140
// sig: undefined FUN_005128f4(void)
// callers(2): 00512a34 FUN_00512a34; 00514124 FUN_00514124
// callees(3): 0052dc40 FUN_0052dc40; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

void FUN_005128f4(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = param_1 + 0x170;
  fios::lwmutex_lock_checked(iVar2);
  lVar3 = 0;
  if ((*(int *)(param_1 + 0x1b4) != param_2) && (lVar3 = 1, *(int *)(param_1 + 0x1d4) != param_2)) {
    if (*(int *)(param_1 + 500) != param_2) {
      fios::lwmutex_unlock_checked(iVar2);
      return;
    }
    lVar3 = 2;
  }
  iVar1 = (int)(lVar3 << 5);
  iVar4 = param_1 + iVar1 + 0x1b0;
  if (*(int *)(iVar4 + 0x10) == 0) {
    *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
  }
  else {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
  }
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + iVar1 + 0x1c8) = 0;
  }
  FUN_0052dc40(param_1 + 0x198);
  fios::lwmutex_unlock_checked(iVar2);
  return;
}



//==== 00512a34  ns=Global  size=0x7c
// sig: undefined FUN_00512a34(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 005128f4 FUN_005128f4

void FUN_00512a34(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  FUN_005128f4(param_1,*param_2);
  *param_2 = 0;
  FUN_005128f4(param_1,param_2[1],param_3);
  param_2[1] = 0;
  return;
}



//==== 00512ab0  ns=Global  size=0xfc
// sig: undefined FUN_00512ab0(void)
// callers(1): 00514124 FUN_00514124
// callees(3): 0052dc40 FUN_0052dc40; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked
// strings: 00512b58: 'U)(48' (raw)

void FUN_00512ab0(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x170;
  if (param_2 != 0) {
    fios::lwmutex_lock_checked(iVar1);
    lVar2 = 0;
    if (((*(int *)(param_1 + 0x1b4) == param_2) || (lVar2 = 1, *(int *)(param_1 + 0x1d4) == param_2)
        ) || (lVar2 = 2, *(int *)(param_1 + 500) == param_2)) {
      iVar3 = param_1 + (int)(lVar2 << 5) + 0x1b0;
      *(undefined4 *)(iVar3 + 0xc) = 1;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_0052dc40(param_1 + 0x198);
      fios::lwmutex_unlock_checked(iVar1);
      return;
    }
    fios::lwmutex_unlock_checked(iVar1);
  }
  return;
}



//==== 00512bac  ns=Global  size=0x264
// sig: undefined FUN_00512bac(void)
// callers(1): 00514124 FUN_00514124
// callees(5): 00510b8c FUN_00510b8c; 0051179c FUN_0051179c; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c

int FUN_00512bac(int param_1,char param_2,char param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar2 = param_1 + 0x170;
  fios::lwmutex_lock_checked(iVar2);
  *param_8 = 0;
  do {
    if ((param_3 == '\0') &&
       (iVar5 = FUN_0051179c(param_1,param_2,param_4,param_5,param_6,param_7), iVar5 != 0)) {
      *param_8 = 1;
      goto LAB_00512d94;
    }
    lVar7 = 0;
    iVar5 = 0;
    do {
      iVar3 = param_1 + iVar5;
      bVar1 = iVar5 != 0x40;
      iVar5 = iVar5 + 0x20;
      if (0 < *(int *)(iVar3 + 0x1bc) + *(int *)(iVar3 + 0x1c0)) {
        lVar7 = lVar7 - ((longlong)(-(ulonglong)*(byte *)(iVar3 + 0x1c4) << 0x20) >> 0x3f);
      }
    } while (bVar1);
    if ((param_2 == '\0') || ((int)lVar7 < 2)) {
      if ((*(int *)(param_1 + 0x1bc) == 0) && (uVar4 = *(uint *)(param_1 + 0x1c0), uVar4 == 0))
      goto LAB_00512d2c;
      if ((*(int *)(param_1 + 0x1dc) == 0) && (*(int *)(param_1 + 0x1e0) == 0)) {
        uVar4 = 1;
        goto LAB_00512d2c;
      }
      if ((*(int *)(param_1 + 0x1fc) == 0) && (*(int *)(param_1 + 0x200) == 0)) break;
    }
    FUN_0052e49c(param_1 + 0x198,iVar2,0);
  } while( true );
  uVar4 = 2;
LAB_00512d2c:
  iVar3 = (int)(((ulonglong)uVar4 & 0x7ffffff) << 5);
  iVar8 = param_1 + iVar3 + 0x1b0;
  if ((*(int *)(iVar8 + 4) == 0) || (*(uint *)(iVar8 + 8) < param_4)) {
    iVar5 = 0;
    iVar6 = FUN_00510b8c(param_1,*(int *)(iVar8 + 4),param_4);
    *(int *)(iVar8 + 4) = iVar6;
    if (iVar6 == 0) goto LAB_00512d94;
  }
  iVar8 = param_1 + iVar3 + 0x1b0;
  param_1 = param_1 + iVar3 + 0x1c0;
  iVar5 = *(int *)(iVar8 + 4);
  *(undefined4 *)(param_1 + 0x10) = param_7;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 1;
  *(char *)(param_1 + 4) = param_2;
  *(uint *)(iVar8 + 8) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
LAB_00512d94:
  fios::lwmutex_unlock_checked(iVar2);
  return iVar5;
}



//==== 00512e10  ns=Global  size=0xb0
// sig: undefined FUN_00512e10(void)
// callers(1): 00514124 FUN_00514124
// callees(3): 0051179c FUN_0051179c; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

undefined4
FUN_00512e10(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  fios::lwmutex_lock_checked(param_1 + 0x170);
  uVar1 = FUN_0051179c(param_1,param_2,param_3,param_4,param_5,param_6);
  fios::lwmutex_unlock_checked(param_1 + 0x170);
  return uVar1;
}



//==== 00512ec0  ns=Global  size=0xf4
// sig: undefined FUN_00512ec0(void)
// callers(3): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c
// callees(2): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

void FUN_00512ec0(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  fios::lwmutex_lock_checked(param_1 + 0x170);
  puVar2 = PTR_DAT_0071a9d8;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + param_1;
    if (*(int *)(iVar3 + 0x1b4) != 0) {
      (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                (*(int **)(puVar2 + 8),*(int *)(iVar3 + 0x1b4),
                 *(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
    }
    bVar1 = iVar4 != 0x40;
    *(undefined4 *)(iVar3 + 0x1c8) = 0;
    *(undefined4 *)(iVar3 + 0x1b4) = 0;
    iVar4 = iVar4 + 0x20;
  } while (bVar1);
  fios::lwmutex_unlock_checked(param_1 + 0x170);
  return;
}



//==== 00512fb4  ns=Global  size=0x118
// sig: undefined FUN_00512fb4(void)
// callers(3): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c
// callees(5): 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005d0140 libc::memset

void FUN_00512fb4(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  fios::rwlock_wlock_checked(param_1 + 0x98);
  puVar2 = PTR_DAT_0071a9d8;
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1[0x20] != 0) {
      (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                (*(int **)(puVar2 + 8),puVar1[0x20],0x10610200,0,0);
    }
    puVar1[0x20] = 0;
    puVar1[0x7b] = 0;
    puVar1 = (undefined4 *)*puVar1;
  }
  fios::lwmutex_lock_checked(param_1 + 0x240);
  libc::memset(param_1 + 0x268,0,0x860);
  fios::lwmutex_unlock_checked(param_1 + 0x240);
  FUN_0052cc20(param_1 + 0x98);
  return;
}



//==== 005130cc  ns=Global  size=0x154
// sig: undefined FUN_005130cc(void)
// callers(0): 
// callees(8): 00510704 FUN_00510704; 00512ec0 FUN_00512ec0; 00512fb4 FUN_00512fb4; 00513220 FUN_00513220; 0051ad6c FUN_0051ad6c; 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_005130cc(int *param_1)

{
  *param_1 = (int)PTR_PTR_0071a9f4;
  FUN_00512fb4(param_1);
  FUN_00512ec0(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  FUN_0052df14(param_1 + 0x90);
  param_1[0x8e] = 0;
  if (param_1[0x87] != param_1[0x8c]) {
    (*(code *)**(undefined4 **)(*(int *)param_1[0x85] + 4))
              ((int *)param_1[0x85],param_1[0x8c],param_1[0x86],0,0);
  }
  FUN_0052d0e8(param_1 + 0x66);
  FUN_0052df14(param_1 + 0x5c);
  FUN_0052df14(param_1 + 0x36);
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}



//==== 00513220  ns=Global  size=0x100
// sig: undefined FUN_00513220(void)
// callers(3): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c
// callees(4): 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

void FUN_00513220(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  FUN_0052ce28(param_1 + 0x98);
  fios::lwmutex_lock_checked(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x238) = 0;
  puVar2 = PTR_DAT_0071a9d8;
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1[0x21] != 0) {
      (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                (*(int **)(puVar2 + 8),puVar1[0x21],0x10620200,0,0);
    }
    puVar1[0x21] = 0;
    puVar1 = (undefined4 *)*puVar1;
  }
  fios::lwmutex_unlock_checked(param_1 + 0xb0);
  FUN_0052cd7c(param_1 + 0x98);
  return;
}



//==== 00513320  ns=Global  size=0x13c
// sig: undefined FUN_00513320(void)
// callers(0): 
// callees(7): 00512ec0 FUN_00512ec0; 00512fb4 FUN_00512fb4; 00513220 FUN_00513220; 0051ad6c FUN_0051ad6c; 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_00513320(int *param_1)

{
  *param_1 = (int)PTR_PTR_0071a9f4;
  FUN_00512fb4(param_1);
  FUN_00512ec0(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  FUN_0052df14(param_1 + 0x90);
  param_1[0x8e] = 0;
  if (param_1[0x87] != param_1[0x8c]) {
    (*(code *)**(undefined4 **)(*(int *)param_1[0x85] + 4))
              ((int *)param_1[0x85],param_1[0x8c],param_1[0x86],0,0);
  }
  FUN_0052d0e8(param_1 + 0x66);
  FUN_0052df14(param_1 + 0x5c);
  FUN_0052df14(param_1 + 0x36);
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}



//==== 0051345c  ns=Global  size=0x13c
// sig: undefined FUN_0051345c(void)
// callers(0): 
// callees(7): 00512ec0 FUN_00512ec0; 00512fb4 FUN_00512fb4; 00513220 FUN_00513220; 0051ad6c FUN_0051ad6c; 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_0051345c(int *param_1)

{
  *param_1 = (int)PTR_PTR_0071a9f4;
  FUN_00512fb4(param_1);
  FUN_00512ec0(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  FUN_0052df14(param_1 + 0x90);
  param_1[0x8e] = 0;
  if (param_1[0x87] != param_1[0x8c]) {
    (*(code *)**(undefined4 **)(*(int *)param_1[0x85] + 4))
              ((int *)param_1[0x85],param_1[0x8c],param_1[0x86],0,0);
  }
  FUN_0052d0e8(param_1 + 0x66);
  FUN_0052df14(param_1 + 0x5c);
  FUN_0052df14(param_1 + 0x36);
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}



//==== 00513598  ns=Global  size=0x404
// sig: undefined FUN_00513598(void)
// callers(1): 0051399c FUN_0051399c
// callees(3): 005113b4 FUN_005113b4; 0051c8d4 fios::hash_path_string; 0052cbd8 fios::print_tty4
// strings: 00667290: 'FIOS dearchiver: unrecognized mediarequest %d in executeReadSpecialFromArchive\n'

void FUN_00513598(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined2 local_6c;
  
  piVar1 = *(int **)(param_2 + 0x24);
  iVar2 = *piVar1;
  if ((1 < iVar2 - 0x12U) && (iVar2 != 10)) {
    fios::print_tty4(PTR_s_FIOS_dearchiver__unrecognized_me_0071aa18,iVar2);
    piVar1[1] = -0x7ffef8f3;
    return;
  }
  iVar2 = *(int *)(param_3 + 0x20);
  piVar10 = piVar1 + 4;
  iVar3 = *(int *)(param_3 + 0x80);
  iVar6 = *(int *)(param_3 + 0x50);
  iVar13 = *(int *)(param_3 + 0x68);
  iVar4 = *(int *)(param_3 + 0x58);
  uVar14 = *(undefined8 *)(param_3 + 0x60);
  piVar1[5] = *(int *)(param_3 + 0x54);
  *piVar10 = iVar6;
  piVar1[6] = iVar4;
  *(undefined8 *)(piVar1 + 8) = uVar14;
  piVar1[10] = iVar13;
  uVar14 = FUN_005113b4(param_1,piVar1,param_4 * iVar2 + iVar3,param_3);
  *(undefined8 *)(piVar1 + 0xe) = uVar14;
  piVar15 = (int *)PTR_DAT_0071aa1c;
  if (piVar1[1] == -0x7ffef8ff) {
    local_c0 = ZEXT816(0);
    auStack_80 = (undefined1  [16])0x0;
    local_70 = 0;
    local_6c = 0;
    local_b0 = (undefined1  [16])0x0;
    bVar7 = false;
    local_a0 = (undefined1  [16])0x0;
    param_3 = param_3 + 0x8c;
    local_90 = (undefined1  [16])0x0;
    uVar12 = fios::hash_path_string(0);
    auVar9 = local_b0;
    auVar8 = local_c0;
    piVar15 = (int *)PTR_DAT_0071aa1c;
    local_c0._12_4_ = uVar12;
    local_b0._4_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
    local_b0._0_4_ = *(undefined4 *)PTR_DAT_0071aa1c;
    local_b0._12_4_ = auVar9._12_4_;
    local_b0._8_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
    local_a0._8_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
    local_a0._0_8_ = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
    if (*piVar1 == 10) {
      local_90 = *(undefined1 (*) [16])(piVar1 + 0xc);
      local_b0._4_4_ = piVar1[5];
      local_b0._0_4_ = *piVar10;
      local_b0._8_4_ = piVar1[6];
      local_a0._8_4_ = piVar1[10];
      local_a0._0_8_ = *(undefined8 *)(piVar1 + 8);
      local_c0._0_8_ = auVar8._0_8_;
      local_c0._8_4_ = param_3;
      uVar12 = fios::hash_path_string(param_3);
      piVar5 = *(int **)(param_1 + 0x40);
      local_c0._0_4_ = 9;
      local_c0._12_4_ = uVar12;
      local_6c = 0x201;
      *(undefined1 **)(param_2 + 0x24) = local_c0;
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
      *(int **)(param_2 + 0x24) = piVar1;
      if (local_c0._4_4_ != 0) {
        piVar1[1] = local_c0._4_4_;
        return;
      }
      bVar7 = true;
      *piVar10 = local_b0._0_4_;
      piVar1[5] = local_b0._4_4_;
      piVar1[6] = local_b0._8_4_;
      *(undefined8 *)(piVar1 + 8) = local_a0._0_8_;
      piVar1[10] = local_a0._8_4_;
    }
    piVar11 = piVar1 + 2;
    iVar2 = *piVar11;
    *piVar11 = param_3;
    iVar13 = fios::hash_path_string(param_3);
    piVar5 = *(int **)(param_2 + 0x24);
    iVar3 = piVar1[3];
    piVar1[3] = iVar13;
    if (((*piVar5 == 0x10) && (piVar5[4] == 0)) && (piVar5[5] == param_1)) {
      piVar5[1] = 0;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x40);
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
    }
    piVar1[3] = iVar3;
    *piVar11 = iVar2;
    if (bVar7) {
      piVar5 = *(int **)(param_1 + 0x40);
      local_c0._0_4_ = 0xd;
      *(undefined1 **)(param_2 + 0x24) = local_c0;
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
      *(int **)(param_2 + 0x24) = piVar1;
    }
  }
  iVar2 = *piVar15;
  iVar3 = piVar15[1];
  iVar13 = piVar15[2];
  uVar14 = *(undefined8 *)(piVar15 + 4);
  piVar1[10] = piVar15[6];
  *piVar10 = iVar2;
  piVar1[5] = iVar3;
  piVar1[6] = iVar13;
  *(undefined8 *)(piVar1 + 8) = uVar14;
  return;
}



//==== 0051399c  ns=Global  size=0x328
// sig: undefined FUN_0051399c(void)
// callers(3): 00513cc4 FUN_00513cc4; 00514124 FUN_00514124; 00517d4c FUN_00517d4c
// callees(7): 00513598 FUN_00513598; 00513cc4 FUN_00513cc4; 00514124 FUN_00514124; 005155c4 FUN_005155c4; 0052cbd8 fios::print_tty4; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28
// strings: 006672e0: "fios read archive failed: archive containing '%s' is already closed!\n"

void FUN_0051399c(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  int *local_50;
  undefined1 local_4c [20];
  
  puVar5 = *(uint **)(param_2 + 0x24);
  local_50 = (int *)0x0;
  iVar2 = param_1 + 0x98;
  if ((((puVar5[4] == *(uint *)PTR_DAT_0071aa1c) && (puVar5[5] == *(uint *)(PTR_DAT_0071aa1c + 4)))
      && (puVar5[6] == *(uint *)(PTR_DAT_0071aa1c + 8))) &&
     ((*(longlong *)(puVar5 + 8) == *(longlong *)(PTR_DAT_0071aa1c + 0x10) &&
      (puVar5[10] == *(uint *)(PTR_DAT_0071aa1c + 0x18))))) {
    if ((puVar5[0x15] & 0x10000000) != 0) {
      puVar5[1] = 0x80010707;
      return;
    }
    if (((puVar5[0x15] & 0x20000000) != 0) ||
       (uVar4 = (ulonglong)*puVar5 ^ 0x13, uVar6 = (ulonglong)((int)uVar4 >> 0x1f),
       uVar6 = (((uVar6 ^ uVar4) - uVar6) + -1 << 0x20) >> 0x3f, *puVar5 == 0x12)) {
      uVar6 = 1;
    }
    FUN_0052ce28(iVar2);
    cVar3 = FUN_005155c4(param_1,param_2,&local_50,local_4c);
    uVar4 = 0;
    if (cVar3 == '\0') {
LAB_00513b58:
      if (local_50 == (int *)0x0) {
        FUN_0052cd7c(iVar2);
        puVar5 = *(uint **)(param_2 + 0x24);
LAB_00513a10:
        if (((*puVar5 == 0x10) && (puVar5[4] == 0)) && (puVar5[5] == param_1)) {
          puVar5[1] = 0;
          return;
        }
        piVar1 = *(int **)(param_1 + 0x40);
        if (piVar1 == (int *)0x0) {
          return;
        }
        (*(code *)**(undefined4 **)(*piVar1 + 0x14))(piVar1,param_2);
        return;
      }
    }
    else {
      uVar4 = (-(ulonglong)uRam00000080 & 0xffffffff) / (ulonglong)uRam00000020;
    }
    if (uVar6 == 0) {
      FUN_00514124(param_1,param_2,local_50,uVar4);
    }
    else {
      FUN_00513598(param_1,param_2,local_50,uVar4);
    }
  }
  else {
    if (puVar5[4] != param_1) goto LAB_00513a10;
    FUN_0052ce28(iVar2);
    local_50 = (int *)puVar5[5];
    if (local_50 != (int *)0x0) {
      for (piVar1 = *(int **)(param_1 + 0x164); (piVar1 != local_50 && (piVar1 != (int *)0x0));
          piVar1 = (int *)*piVar1) {
      }
      if (local_50 == piVar1) {
        if ((local_50[0x20] == 0) && (cVar3 = FUN_00513cc4(param_1,param_2), cVar3 == '\0')) {
          puVar5[1] = 0x8001070a;
          goto LAB_00513b8c;
        }
        uVar4 = (ulonglong)puVar5[9];
        uVar6 = 0;
        goto LAB_00513b58;
      }
    }
    fios::print_tty4(PTR_s_fios_read_archive_failed__archiv_0071aa20,puVar5[2]);
    puVar5[1] = 0x80010706;
  }
LAB_00513b8c:
  FUN_0052cd7c(iVar2);
  return;
}



//==== 00513cc4  ns=Global  size=0x2e4
// sig: undefined FUN_00513cc4(void)
// callers(4): 0051399c FUN_0051399c; 00513fa8 FUN_00513fa8; 005155c4 FUN_005155c4; 00517d4c FUN_00517d4c
// callees(5): 0051399c FUN_0051399c; 0051c8d4 fios::hash_path_string; 0052cbd8 fios::print_tty4; 00530480 FUN_00530480; 0053087c FUN_0053087c
// strings: 00667328: 'Allocation of %lu bytes for archive TOC failed!\n' | 00667360: "Reading TOC of '%s' failed! err = %d\n"

undefined4 FUN_00513cc4(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  ulonglong local_80;
  undefined8 local_78;
  int local_70;
  undefined2 local_6c;
  
  puVar3 = PTR_DAT_0071a9d8;
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 1;
    if (*(int *)(param_3 + 0x80) == 0) {
      uVar1 = *(uint *)(param_3 + 0x1c);
      iVar5 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9d8 + 8))
                        (*(undefined4 **)(PTR_DAT_0071a9d8 + 8),
                         (ulonglong)uVar1 +
                         ((((ulonglong)uVar1 -
                           ((longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_3 + 0x20)
                           & 0xffffffffU)) / (ulonglong)*(byte *)(param_3 + 0x40) + 0x1f << 0x20) >>
                         0x25) * 5 & 0xffffffff,0x10610200,0,0);
      *(int *)(param_3 + 0x80) = iVar5;
      if (iVar5 == 0) {
        fios::print_tty4(PTR_s_Allocation_of__lu_bytes_for_arch_0071aa24,uVar1);
        uVar4 = 0;
        *(undefined4 *)(param_3 + 0x1ec) = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x24);
        local_b8 = param_3 + 0x8c;
        *(uint *)(param_3 + 0x1ec) = iVar5 + uVar1;
        local_c0 = 10;
        local_bc = -0x7ffef8ff;
        local_a8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b4 = fios::hash_path_string(local_b8);
        local_80 = (ulonglong)uVar1;
        local_b0 = *(undefined4 *)(param_3 + 0x50);
        local_a0 = *(undefined8 *)(param_3 + 0x60);
        local_ac = *(undefined4 *)(param_3 + 0x54);
        local_98 = *(undefined4 *)(param_3 + 0x68);
        local_a8 = *(undefined4 *)(param_3 + 0x58);
        local_90 = *(longlong *)(param_3 + 0x70) + *(longlong *)(param_3 + 0x30);
        local_78 = 0;
        if ((*(ushort *)(iVar2 + 0x54) & 0x300) == 0) {
          local_6c = 0xc;
        }
        else {
          local_6c = 0xe;
        }
        *(undefined4 **)(param_2 + 0x24) = &local_c0;
        local_70 = iVar5;
        FUN_0051399c(param_1,param_2);
        *(int *)(param_2 + 0x24) = iVar2;
        if (local_bc == 0) {
          FUN_00530480(param_3 + 8,*(undefined4 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x1ec))
          ;
          FUN_0053087c(param_3 + 8,*(undefined4 *)(param_3 + 0x80));
          uVar4 = 1;
        }
        else {
          fios::print_tty4(PTR_s_Reading_TOC_of___s__failed__err___0071aa28,local_b8,local_bc);
          if (*(int *)(param_3 + 0x80) != 0) {
            (*(code *)**(undefined4 **)(**(int **)(puVar3 + 8) + 4))
                      (*(int **)(puVar3 + 8),*(int *)(param_3 + 0x80),0x10610200,0,0);
          }
          uVar4 = 0;
          *(undefined4 *)(param_3 + 0x1ec) = 0;
          *(undefined4 *)(param_3 + 0x80) = 0;
        }
      }
    }
  }
  return uVar4;
}



//==== 00513fa8  ns=Global  size=0x17c
// sig: undefined FUN_00513fa8(void)
// callers(1): 00514124 FUN_00514124
// callees(4): 00513cc4 FUN_00513cc4; 0051c8d4 fios::hash_path_string; 0052fcec FUN_0052fcec; 005300ac FUN_005300ac

void FUN_00513fa8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar7;
  longlong lVar6;
  char cVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_3 + 0x10);
  if (param_1 == iVar1) {
    do {
      iVar4 = *(int *)(param_3 + 0x14);
      if ((*(int *)(iVar4 + 0x80) == 0) &&
         (cVar8 = FUN_00513cc4(param_1,param_2,iVar4), cVar8 == '\0')) {
        return;
      }
      iVar5 = *(int *)(iVar4 + 0x20) * (int)*(undefined8 *)(param_3 + 0x20) + *(int *)(iVar4 + 0x80)
      ;
      cVar8 = FUN_005300ac(iVar4 + 8,*(int *)(iVar4 + 0x80),iVar5,*(undefined8 *)(param_3 + 0x30),
                           *(undefined8 *)(param_3 + 0x40));
      if (cVar8 == '\0') {
        return;
      }
      *(int *)(param_3 + 8) = iVar4 + 0x8c;
      uVar7 = fios::hash_path_string(iVar4 + 0x8c);
      *(undefined4 *)(param_3 + 0xc) = uVar7;
      uVar7 = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_3 + 0x18) = uVar7;
      uVar7 = *(undefined4 *)(iVar4 + 0x68);
      uVar2 = *(undefined4 *)(iVar4 + 0x50);
      uVar3 = *(undefined4 *)(iVar4 + 0x80);
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(iVar4 + 0x60);
      *(undefined4 *)(param_3 + 0x10) = uVar2;
      *(undefined4 *)(param_3 + 0x28) = uVar7;
      lVar9 = *(longlong *)(param_3 + 0x30);
      lVar6 = FUN_0052fcec(iVar4 + 8,uVar3,iVar5);
      *(longlong *)(param_3 + 0x30) = lVar9 + lVar6;
    } while (*(int *)(param_3 + 0x10) == iVar1);
  }
  return;
}



//==== 00514124  ns=Global  size=0x1028
// sig: undefined FUN_00514124(void)
// callers(2): 0051399c FUN_0051399c; 0051514c FUN_0051514c
// callees(21): 005128f4 FUN_005128f4; 00512a34 FUN_00512a34; 00512ab0 FUN_00512ab0; 00512bac FUN_00512bac; 00512e10 FUN_00512e10; 0051399c FUN_0051399c; 00513fa8 FUN_00513fa8; 0051c8d4 fios::hash_path_string; 0052663c FUN_0052663c; 00526774 FUN_00526774; 005268b4 FUN_005268b4; 005269f4 FUN_005269f4; 0052758c FUN_0052758c; 005276cc FUN_005276cc; 0052cbd8 fios::print_tty4; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052fcbc FUN_0052fcbc; 0052fd8c FUN_0052fd8c; 005c5ad0 libc::memcpy; 00650644 sys::sys_process_is_stack

/* WARNING: Removing unreachable block (ram,0x005146b4) */
/* WARNING: Removing unreachable block (ram,0x00514ca0) */
/* WARNING: Removing unreachable block (ram,0x00514cb4) */
/* WARNING: Removing unreachable block (ram,0x00514d54) */
/* WARNING: Removing unreachable block (ram,0x00515118) */
/* WARNING: Removing unreachable block (ram,0x00514d68) */
/* WARNING: Removing unreachable block (ram,0x00515134) */
/* WARNING: Removing unreachable block (ram,0x00514d90) */
/* WARNING: Removing unreachable block (ram,0x00514dbc) */
/* WARNING: Removing unreachable block (ram,0x005150c8) */
/* WARNING: Removing unreachable block (ram,0x005150d0) */
/* WARNING: Removing unreachable block (ram,0x005150dc) */
/* WARNING: Removing unreachable block (ram,0x00514a98) */
/* WARNING: Removing unreachable block (ram,0x00514aa8) */
/* WARNING: Removing unreachable block (ram,0x00515090) */
/* WARNING: Removing unreachable block (ram,0x00514af0) */
/* WARNING: Removing unreachable block (ram,0x00514ff0) */
/* WARNING: Removing unreachable block (ram,0x00514af8) */
/* WARNING: Removing unreachable block (ram,0x00514b18) */
/* WARNING: Removing unreachable block (ram,0x00514b34) */
/* WARNING: Removing unreachable block (ram,0x00514b40) */
/* WARNING: Removing unreachable block (ram,0x00514b4c) */
/* WARNING: Removing unreachable block (ram,0x00514b58) */
/* WARNING: Removing unreachable block (ram,0x00514b64) */
/* WARNING: Removing unreachable block (ram,0x00514c44) */
/* WARNING: Removing unreachable block (ram,0x00514f54) */
/* WARNING: Removing unreachable block (ram,0x00514c74) */
/* WARNING: Removing unreachable block (ram,0x00514b70) */
/* WARNING: Removing unreachable block (ram,0x00514b74) */
/* WARNING: Removing unreachable block (ram,0x00514b88) */
/* WARNING: Removing unreachable block (ram,0x00514e2c) */
/* WARNING: Removing unreachable block (ram,0x00514b8c) */
/* WARNING: Removing unreachable block (ram,0x00514f98) */
/* WARNING: Removing unreachable block (ram,0x00514bd8) */
/* WARNING: Removing unreachable block (ram,0x00514fa8) */
/* WARNING: Removing unreachable block (ram,0x00514c10) */
/* WARNING: Removing unreachable block (ram,0x0051493c) */
/* WARNING: Removing unreachable block (ram,0x005146e8) */
/* WARNING: Removing unreachable block (ram,0x005146f4) */
/* WARNING: Removing unreachable block (ram,0x00514720) */
/* WARNING: Removing unreachable block (ram,0x005150e4) */
/* WARNING: Removing unreachable block (ram,0x00514768) */
/* WARNING: Removing unreachable block (ram,0x005150f4) */
/* WARNING: Removing unreachable block (ram,0x00514770) */
/* WARNING: Removing unreachable block (ram,0x00514780) */

void FUN_00514124(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  ulonglong uVar7;
  undefined *puVar9;
  int iVar11;
  char cVar12;
  ulonglong uVar10;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined *puStack_254;
  undefined1 local_210;
  char local_20f [3];
  undefined1 local_20c [12];
  undefined1 local_200 [8];
  undefined1 local_1f8 [4];
  uint uStack_1f4;
  longlong local_1e8;
  longlong local_1c8;
  longlong local_1b8;
  undefined1 local_188 [119];
  byte local_111;
  byte local_101;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar2 = *(int *)(param_2 + 0x24);
  iVar8 = param_4 * *(int *)(param_3 + 0x20) + *(int *)(param_3 + 0x80);
  iVar3 = *(int *)(param_1 + *(int *)(param_3 + 0x48) * 4 + 0x104);
  local_1e8 = FUN_0052fcbc(param_3 + 8,*(int *)(param_3 + 0x80),iVar8);
  if (0x7fffffffffffffff - local_1e8 < 0) {
    local_1e8 = 0x7fffffffffffffff;
  }
  lVar14 = *(longlong *)(iVar2 + 0x30);
  local_1b8 = lVar14 + *(longlong *)(iVar2 + 0x40);
  if (0x7fffffffffffffff - *(longlong *)(iVar2 + 0x40) < lVar14) {
    local_1b8 = 0x7fffffffffffffff;
  }
  puVar9 = &TOC_BASE;
  if (((*(ushort *)(iVar2 + 0x54) & 0x40) == 0) &&
     (iVar11 = sys::sys_process_is_stack(*(undefined4 *)(iVar2 + 0x50)), puVar9 = puStack_254,
     iVar11 != 0)) {
    *(ushort *)(iVar2 + 0x54) = *(ushort *)(iVar2 + 0x54) | 0x40;
  }
  iVar11 = -0x1f0;
  if (-1 < lVar14) {
    iVar11 = -0x1c0;
  }
  iVar5 = -0x1e8;
  lVar14 = *(longlong *)(&stack0x00000000 + iVar11);
  if (local_1b8 < local_1e8) {
    iVar5 = -0x1b8;
  }
  lVar15 = *(longlong *)(&stack0x00000000 + iVar5);
  if (lVar14 < lVar15) {
    uVar22 = (ulonglong)*(uint *)(param_3 + 0x28);
    uVar1 = *(ushort *)(iVar2 + 0x54);
    uVar18 = lVar14 / (longlong)uVar22;
    if ((uVar1 >> 6 & 1) == 0) {
      local_111 = (byte)(*(uint *)(iVar3 + 0x14) >> 0xf);
      local_101 = (byte)(*(uint *)(iVar3 + 0x14) >> 0xb);
    }
    else {
      local_111 = (byte)(*(uint *)(iVar3 + 0x14) >> 0xe);
      local_101 = (byte)(*(uint *)(iVar3 + 0x14) >> 10);
    }
    local_101 = local_101 & 1;
    local_111 = local_111 & 1;
    iVar11 = param_1 + 0xd8;
    if ((uVar18 & 0xffffffff) <= (lVar15 / (longlong)uVar22 & 0xffffffffU)) {
      do {
        if ((*(int *)(param_2 + 0xc) != 0) &&
           ((*(uint *)(*(int *)(param_2 + 0xc) + 0x30) >> 9 & 1) != 0)) {
          *(undefined4 *)(iVar2 + 4) = 0x80010708;
          break;
        }
        uVar7 = uVar18 & 0xffffffff;
        local_1c8 = uVar22 * (uVar7 + 1);
        if ((longlong)(0x7fffffffffffffff - uVar22) < (longlong)(uVar22 * uVar7)) {
          local_1c8 = 0x7fffffffffffffff;
        }
        iVar5 = -0x1f0;
        if (-1 < (longlong)(uVar22 * uVar7)) {
          iVar5 = -0x1d0;
        }
        iVar6 = -0x1e8;
        lVar16 = *(longlong *)(&stack0x00000000 + iVar5);
        if (local_1c8 < local_1e8) {
          iVar6 = -0x1c8;
        }
        iVar5 = -0x1c0;
        lVar17 = *(longlong *)(&stack0x00000000 + iVar6);
        if (lVar14 <= lVar16) {
          iVar5 = -0x1e0;
        }
        iVar6 = -0x1d8;
        lVar23 = *(longlong *)(&stack0x00000000 + iVar5);
        if (lVar15 <= lVar17) {
          iVar6 = -0x1b8;
        }
        lVar19 = *(longlong *)(&stack0x00000000 + iVar6);
        if (lVar23 < lVar19) {
          cVar12 = FUN_0052fd8c(param_3 + 8,*(undefined4 *)(param_3 + 0x80),iVar8,
                                *(undefined4 *)(param_3 + 0x1ec),uVar7,local_1f8,local_200,local_20f
                               );
          if (cVar12 == '\0') {
            fios::print_tty4(*(undefined4 *)(puVar9 + -0x7940),uVar7,*(undefined4 *)(iVar2 + 8),
                             param_3 + 0x8c);
          }
          else {
            uVar20 = (lVar23 - lVar14) + (ulonglong)*(uint *)(iVar2 + 0x50);
            if (((lVar23 == lVar16) && (lVar19 == lVar17)) || (uVar21 = 0, local_101 != 0)) {
              if (((((ulonglong)uVar1 << 0x20) >> 0x25 & 1) == 0) && (local_111 != 0)) {
                uVar13 = (lVar19 - lVar23) + uVar20;
                uVar21 = uVar13 - uStack_1f4 &
                         (ulonglong)(uint)(-1 << (*(byte *)(iVar3 + 0x14) & 0x3f));
                if (((int)uVar21 == 0) ||
                   (((uVar20 & 0xffffffff) <= uVar21 &&
                    ((uStack_1f4 + uVar21 & 0xffffffff) <= (uVar13 & 0xffffffff)))))
                goto joined_r0x00514854;
              }
              uVar21 = 0;
            }
joined_r0x00514854:
            if (local_20f[0] == '\0') {
              fios::hash_path_string(param_3 + 0x8c);
              iVar3 = *(int *)(param_3 + 0x50);
              if (iVar3 == param_1) {
                FUN_00513fa8(param_1,param_2,local_188);
              }
              fios::lwmutex_lock_checked(iVar11);
              iVar8 = *(int *)(puVar9 + -0x7950);
              *(undefined1 **)(param_2 + 0x24) = local_188;
              if ((*(uint *)(iVar8 + 0x18) & 4) != 0) {
                FUN_005268b4(*(undefined4 *)(param_2 + 0xc),*(undefined8 *)(iVar2 + 0x30),
                             *(undefined8 *)(iVar2 + 0x40));
              }
              if (iVar3 == param_1) {
                FUN_0051399c(param_1,param_2);
              }
              else {
                piVar4 = *(int **)(param_2 + 0x24);
                if (((*piVar4 == 0x10) && (piVar4[4] == 0)) && (piVar4[5] == param_1)) {
                  piVar4[1] = 0;
                }
                else {
                  piVar4 = *(int **)(param_1 + 0x40);
                  if (piVar4 != (int *)0x0) {
                    (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
                  }
                }
              }
              *(undefined8 *)(iVar2 + 0x48) = *(undefined8 *)(iVar2 + 0x48);
              *(int *)(param_2 + 0x24) = iVar2;
              fios::print_tty4(*(undefined4 *)(puVar9 + -0x78fc),*(undefined4 *)(puVar9 + -0x78f8),
                               uVar7,*(undefined4 *)(iVar2 + 8),param_3 + 0x8c,0x80010701);
              *(undefined4 *)(iVar2 + 4) = 0x80010701;
            }
            else {
              uVar13 = ((ulonglong)*(ushort *)(iVar2 + 0x54) << 0x20) >> 0x21 & 1;
              if (((int)uVar13 == 0) &&
                 (uVar10 = FUN_00512e10(param_1,0,uVar22,param_3,param_4,uVar7), (int)uVar10 != 0))
              {
                iVar5 = *(int *)(puVar9 + -0x7950);
                if ((*(uint *)(iVar5 + 0x18) & 4) != 0) {
                  FUN_005276cc(*(undefined4 *)(param_2 + 0xc),lVar23,lVar19 - lVar23);
                }
                uVar21 = (lVar23 - lVar16) + uVar10;
                uVar7 = lVar19 - lVar23;
                if ((uVar7 & 0xffffffff) < 0x1000) {
                  libc::memcpy((void *)uVar20,(void *)uVar21,(size_t)uVar7);
                }
                else {
                  (*(code *)**(undefined4 **)(iVar5 + 0x10))
                            (uVar20 & 0xffffffff,uVar21 & 0xffffffff,uVar7 & 0xffffffff);
                }
                *(longlong *)(iVar2 + 0x48) = *(longlong *)(iVar2 + 0x48) + (lVar19 - lVar23);
                FUN_005128f4(param_1,uVar10 & 0xffffffff,1);
                goto LAB_0051435c;
              }
              fios::lwmutex_lock_checked(iVar11);
              if (((int)uVar21 == 0) &&
                 (uVar21 = FUN_00512bac(param_1,1,uVar13,uVar22,param_3,param_4,uVar7,&local_210),
                 (int)uVar21 == 0)) {
                fios::print_tty4(*(undefined4 *)(puVar9 + -0x78f4),*(undefined4 *)(iVar2 + 8),
                                 param_3 + 0x8c);
                *(undefined4 *)(iVar2 + 4) = 0x8001070a;
              }
              else {
                if ((*(uint *)(*(int *)(puVar9 + -0x7950) + 0x18) & 4) != 0) {
                  FUN_005269f4(*(undefined4 *)(param_2 + 0xc),lVar23,lVar19 - lVar23);
                }
                fios::hash_path_string(param_3 + 0x8c);
                iVar3 = *(int *)(param_3 + 0x50);
                if (iVar3 == param_1) {
                  FUN_00513fa8(param_1,param_2,local_188);
                }
                *(undefined1 **)(param_2 + 0x24) = local_188;
                if (param_1 == iVar3) {
                  FUN_0051399c(param_1,param_2);
                }
                else {
                  piVar4 = *(int **)(param_1 + 0x40);
                  if (piVar4 != (int *)0x0) {
                    (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
                  }
                }
                *(int *)(param_2 + 0x24) = iVar2;
                fios::print_tty4(*(undefined4 *)(puVar9 + -0x78fc),*(undefined4 *)(puVar9 + -0x78f0)
                                 ,uVar7,*(undefined4 *)(iVar2 + 8),param_3 + 0x8c,0x80010701);
                *(undefined4 *)(iVar2 + 4) = 0x80010701;
                FUN_005128f4(param_1,uVar21 & 0xffffffff,0);
              }
            }
            fios::lwmutex_unlock_checked(iVar11);
          }
          break;
        }
LAB_0051435c:
        uVar18 = uVar18 + 1;
      } while ((uVar18 & 0xffffffff) <= (lVar15 / (longlong)uVar22 & 0xffffffffU));
    }
    FUN_00512a34(param_1,local_20c,0);
    if (*(int *)(iVar2 + 4) == -0x7ffef8ff) {
      if (*(longlong *)(iVar2 + 0x48) == *(longlong *)(iVar2 + 0x40)) {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0x80010709;
      }
    }
  }
  else {
    uVar18 = (longlong)*(ulonglong *)(iVar2 + 0x40) >> 0x3f;
    *(uint *)(iVar2 + 4) =
         (uint)((longlong)(uVar18 - (uVar18 ^ *(ulonglong *)(iVar2 + 0x40))) >> 0x3f) & 0x8001070b;
  }
  return;
}



//==== 0051514c  ns=Global  size=0x478
// sig: undefined FUN_0051514c(void)
// callers(2): 00517560 FUN_00517560; 005177d8 FUN_005177d8
// callees(5): 00514124 FUN_00514124; 0051c8d4 fios::hash_path_string; 0052cbd8 fios::print_tty4; 0052fcbc FUN_0052fcbc; 005303c0 FUN_005303c0
// strings: 00667578: 'dearchiver::loadArchiveManifest - allocation of manifest failed!\n' | 006675c0: "Reading manifest of '%s' failed! err = %d\n"

undefined4 FUN_0051514c(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  undefined1 local_f0 [12];
  undefined4 local_e4;
  undefined1 local_e0 [8];
  undefined4 local_d8;
  uint uStack_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  char *local_a0;
  undefined2 local_9c;
  
  iVar4 = FUN_005303c0(param_3 + 8,*(undefined4 *)(param_3 + 0x80));
  uVar7 = 0;
  if (iVar4 != 0) {
    iVar10 = *(int *)(param_3 + 0x80);
    uVar1 = *(uint *)(param_3 + 0x20);
    uVar5 = FUN_0052fcbc(param_3 + 8,iVar10,iVar4);
    puVar2 = PTR_DAT_0071a9d8;
    iVar13 = uVar5 + 1;
    if ((*(uint *)(param_3 + 0x2c) & 2) == 0) {
      iVar13 = iVar13 + (*(int *)(param_3 + 0x24) + -1) * (*(int *)(param_3 + 0x18c) + 1);
    }
    pcVar6 = (char *)(*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9d8 + 8))
                               (*(undefined4 **)(PTR_DAT_0071a9d8 + 8),iVar13,0x10620200,0,0);
    if (pcVar6 == (char *)0x0) {
      fios::print_tty4(PTR_s_dearchiver_loadArchiveManifest___0071aa48);
      uVar7 = 0;
    }
    else {
      local_a0 = (char *)0x0;
      local_b0 = (undefined1  [16])0x0;
      local_9c = 0;
      _local_f0 = ZEXT816(0);
      _local_e0 = (undefined1  [16])0x0;
      pcVar14 = (char *)(param_3 + 0x8c);
      local_d0 = (undefined1  [16])0x0;
      local_c0 = (undefined1  [16])0x0;
      uVar7 = fios::hash_path_string(0);
      auVar3 = _local_e0;
      local_e4 = uVar7;
      local_e0._4_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
      local_e0._0_4_ = *(undefined4 *)PTR_DAT_0071aa1c;
      uStack_d4 = auVar3._12_4_;
      local_d8 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
      local_d0._8_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
      local_d0._0_8_ = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
      local_f0._4_4_ = 0x80010701;
      local_f0._0_4_ = 10;
      local_f0._8_4_ = pcVar14;
      uVar8 = fios::hash_path_string(pcVar14);
      uVar7 = *(undefined4 *)(param_2 + 0x24);
      local_e4 = uVar8;
      *(undefined1 **)(param_2 + 0x24) = local_f0;
      local_9c = 0xc;
      stack0xffffff24 = 0;
      local_e0._0_4_ = param_1;
      local_b0 = ZEXT416(uVar5) << 0x40;
      local_d0._8_8_ = local_d0._8_8_ & 0xffffffff;
      local_d0._0_8_ = 0;
      local_c0._0_8_ = 0;
      local_a0 = pcVar6;
      FUN_00514124(param_1,param_2,param_3,(ulonglong)(uint)(iVar4 - iVar10) / (ulonglong)uVar1);
      *(undefined4 *)(param_2 + 0x24) = uVar7;
      if (local_f0._4_4_ == 0) {
        pcVar12 = pcVar6 + uVar5 + 1;
        pcVar9 = pcVar6 + iVar13;
        pcVar6[uVar5] = '\0';
        if (pcVar6 < pcVar12) {
          do {
            while( true ) {
              pcVar12 = pcVar12 + -1;
              if (*pcVar12 != '\n') break;
              if ((*(uint *)(param_3 + 0x2c) & 2) == 0) {
                pcVar9 = pcVar9 + -1;
                *pcVar9 = '/';
                iVar4 = param_3 + *(int *)(param_3 + 0x18c) + 0x80;
                pcVar11 = (char *)(iVar4 + 0xc);
                if (pcVar14 < pcVar11) {
                  iVar10 = (int)pcVar11 - (int)pcVar14;
                  if ((char *)(iVar4 + 0xb) < pcVar14) {
                    iVar10 = 1;
                  }
                  do {
                    pcVar11 = pcVar11 + -1;
                    pcVar9 = pcVar9 + -1;
                    *pcVar9 = *pcVar11;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
              }
              pcVar9 = pcVar9 + -1;
              *pcVar9 = '\0';
              if (pcVar6 == pcVar12) goto LAB_0051544c;
            }
            pcVar9 = pcVar9 + -1;
            *pcVar9 = *pcVar12;
          } while (pcVar6 != pcVar12);
        }
LAB_0051544c:
        if ((*(uint *)(param_3 + 0x2c) & 2) == 0) {
          pcVar9 = pcVar9 + -1;
          *pcVar9 = '/';
          iVar4 = param_3 + *(int *)(param_3 + 0x18c) + 0x80;
          pcVar12 = (char *)(iVar4 + 0xc);
          if (pcVar14 < pcVar12) {
            iVar10 = (int)pcVar12 - (int)pcVar14;
            if ((char *)(iVar4 + 0xb) < pcVar14) {
              iVar10 = 1;
            }
            do {
              pcVar12 = pcVar12 + -1;
              pcVar9 = pcVar9 + -1;
              *pcVar9 = *pcVar12;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        uVar7 = 1;
        *(int *)(param_3 + 0x88) = iVar13;
        *(char **)(param_3 + 0x84) = pcVar6;
      }
      else {
        fios::print_tty4(PTR_s_Reading_manifest_of___s__failed__0071aa4c,local_f0._8_4_,
                         local_f0._4_4_);
        (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                  (*(int **)(puVar2 + 8),pcVar6,0x10620200,0,0);
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}



//==== 005155c4  ns=Global  size=0x458
// sig: undefined FUN_005155c4(void)
// callers(6): 0051399c FUN_0051399c; 00515a1c FUN_00515a1c; 00515ed4 FUN_00515ed4; 00516634 FUN_00516634; 00516bcc FUN_00516bcc; 00516fb8 FUN_00516fb8
// callees(9): 00513cc4 FUN_00513cc4; 0051c8d4 fios::hash_path_string; 0051ca84 FUN_0051ca84; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00530420 FUN_00530420; 005c8510 libc::strlen; 005cc784 FUN_005cc784; 005ccb28 FUN_005ccb28

uint FUN_005155c4(int param_1,int param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined4 *puVar7;
  int iVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined2 local_8c;
  
  iVar2 = *(int *)(param_2 + 0x24);
  puVar7 = (undefined4 *)(iVar2 + 8);
  sVar9 = libc::strlen((char *)*puVar7);
  iVar8 = param_1 + 0x240;
  fios::lwmutex_lock_checked(iVar8);
  iVar11 = *(int *)(iVar2 + 0xc);
  if (iVar11 != 0) {
    piVar16 = (int *)(param_1 + 0x268);
    iVar19 = 0;
    iVar17 = param_1 + 0x260;
    iVar15 = 0;
    do {
      iVar10 = *piVar16;
      piVar16 = piVar16 + 0x43;
      if ((iVar10 == iVar11) && (*(int *)(iVar17 + 8) == iVar11)) {
        if (*(char *)(iVar17 + 0xc) == '\0') {
          iVar10 = FUN_005cc784(*puVar7,0);
        }
        else {
          iVar10 = FUN_005cc784(*puVar7,iVar17 + 0xc);
        }
        if (iVar10 == 0) {
          param_1 = param_1 + iVar15 + 0x360;
          uVar14 = *(uint *)(param_1 + 0xc);
          *param_4 = *(int *)(param_1 + 0x10);
          *param_3 = uVar14;
          uVar14 = ((int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f ^ uVar14);
          fios::lwmutex_unlock_checked(iVar8);
          goto LAB_00515888;
        }
      }
      bVar1 = iVar19 != 7;
      iVar15 = iVar15 + 0x10c;
      iVar17 = iVar17 + 0x10c;
      iVar19 = iVar19 + 1;
    } while (bVar1);
  }
  fios::lwmutex_unlock_checked(iVar8);
  instructionSynchronize();
  if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(int *)(param_1 + 0x164) == 0) goto LAB_005157fc;
    local_e0 = ZEXT816(0);
    auStack_a0 = (undefined1  [16])0x0;
    local_90 = 0;
    local_8c = 0;
    local_d0 = (undefined1  [16])0x0;
    local_c0 = (undefined1  [16])0x0;
    auStack_b0 = (undefined1  [16])0x0;
    fios::hash_path_string(0);
    auVar6 = local_d0;
    piVar16 = *(int **)(param_1 + 0x40);
    local_e0._8_8_ = local_e0._4_8_ << 0x20;
    local_e0._4_4_ = 0x80010701;
    local_e0._0_4_ = 8;
    local_d0._4_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
    local_d0._0_4_ = *(undefined4 *)PTR_DAT_0071aa1c;
    local_d0._12_4_ = auVar6._12_4_;
    local_d0._8_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
    local_c0._8_4_ = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
    local_c0._0_8_ = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
    local_e0._8_4_ = *puVar7;
    local_e0._12_4_ = *(undefined4 *)(iVar2 + 0xc);
    *(undefined1 **)(param_2 + 0x24) = local_e0;
    if (piVar16 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar16 + 0x14))(piVar16,param_2);
    }
    *(int *)(param_2 + 0x24) = iVar2;
    if (local_e0._4_4_ == 0) goto LAB_005157fc;
  }
  for (puVar3 = *(uint **)(param_1 + 0x164); puVar3 != (uint *)0x0; puVar3 = (uint *)*puVar3) {
    pcVar18 = (char *)*puVar7;
    if ((((puVar3[0xb] & 2) != 0) ||
        (((uVar14 = puVar3[99], uVar14 <= sVar9 &&
          (iVar11 = FUN_005ccb28(puVar3 + 0x23,pcVar18,uVar14), iVar11 == 0)) &&
         (pcVar13 = pcVar18 + uVar14, pcVar18 = pcVar13 + 1, *pcVar13 == '/')))) &&
       ((puVar3[0x20] != 0 || (cVar12 = FUN_00513cc4(param_1,param_2,puVar3), cVar12 != '\0')))) {
      iVar11 = FUN_00530420(puVar3 + 2,puVar3[0x20],pcVar18);
      *param_4 = iVar11;
      if (iVar11 != 0) {
        *param_3 = (uint)puVar3;
        goto LAB_00515808;
      }
    }
  }
LAB_005157fc:
  *param_4 = 0;
  *param_3 = 0;
LAB_00515808:
  fios::lwmutex_lock_checked(iVar8);
  uVar4 = *puVar7;
  iVar11 = (*(uint *)(param_1 + 0xac8) & 7) * 0x10c;
  puVar7 = (undefined4 *)(iVar11 + param_1 + 0x268);
  iVar15 = param_1 + iVar11 + 0x360;
  *(uint *)(param_1 + 0xac8) = *(uint *)(param_1 + 0xac8) + 1;
  FUN_0051ca84(puVar7,uVar4);
  iVar11 = *param_4;
  *(uint *)(iVar15 + 0xc) = *param_3;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(iVar2 + 0xc);
  *(int *)(iVar15 + 0x10) = iVar11;
  uVar14 = (int)uVar5 >> 0x1f;
  *puVar7 = uVar4;
  uVar14 = uVar14 - (uVar14 ^ uVar5);
  fios::lwmutex_unlock_checked(iVar8);
LAB_00515888:
  return uVar14 >> 0x1f;
}



//==== 00515a1c  ns=Global  size=0x4b8
// sig: undefined FUN_00515a1c(void)
// callers(0): 
// callees(8): 00510d54 FUN_00510d54; 005155c4 FUN_005155c4; 005193cc FUN_005193cc; 0051c8d4 fios::hash_path_string; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052fcbc FUN_0052fcbc; 0052fd8c FUN_0052fd8c

uint FUN_00515a1c(int param_1,int param_2,undefined4 param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar7;
  undefined4 uVar6;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong local_120;
  longlong local_118;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  uVar5 = ZEXT48(&stack0x00000000);
  local_a8 = (ulonglong)(param_1 + 0x98);
  local_ac = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc);
  local_b0 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 8);
  FUN_0052ce28(local_a8);
  cVar7 = FUN_00510d54(param_1,param_3,0);
  if (cVar7 == '\0') {
    iVar1 = *(int *)(param_2 + 0x24);
    local_a0 = uVar5 - 300;
    local_98 = uVar5 - 0x128;
    *(undefined4 *)(iVar1 + 8) = param_3;
    uVar6 = fios::hash_path_string(param_3);
    *(undefined4 *)(iVar1 + 0xc) = uVar6;
    cVar7 = FUN_005155c4(param_1,param_2,local_a0 & 0xffffffff,local_98 & 0xffffffff);
    while (cVar7 != '\0') {
      local_e8 = FUN_0052fcbc(8,uRam00000080,0);
      local_f0 = 0;
      if (0x7fffffffffffffff - local_e8 < 0) {
        local_e8 = 0x7fffffffffffffff;
      }
      lVar9 = *param_4;
      local_b8 = lVar9 + *param_5;
      if (0x7fffffffffffffff - *param_5 < lVar9) {
        local_b8 = 0x7fffffffffffffff;
      }
      plVar8 = &local_f0;
      if (-1 < lVar9) {
        plVar8 = &local_c0;
      }
      local_c0 = *plVar8;
      plVar8 = &local_e8;
      if (local_b8 < local_e8) {
        plVar8 = &local_b8;
      }
      local_b8 = *plVar8;
      local_f8 = -0x8000000000000000;
      uVar11 = (ulonglong)uRam00000028;
      uVar10 = local_b8 / (longlong)uVar11;
      local_100 = 0x7fffffffffffffff;
      uVar4 = local_c0 / (longlong)uVar11;
      if ((uVar4 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
        do {
          uVar2 = uVar4 & 0xffffffff;
          local_c8 = uVar11 * (uVar2 + 1);
          if ((longlong)(0x7fffffffffffffff - uVar11) < (longlong)(uVar11 * uVar2)) {
            local_c8 = 0x7fffffffffffffff;
          }
          plVar8 = &local_f0;
          if (local_f0 <= (longlong)(uVar11 * uVar2)) {
            plVar8 = &local_d0;
          }
          local_d0 = *plVar8;
          plVar8 = &local_e8;
          if (local_c8 < local_e8) {
            plVar8 = &local_c8;
          }
          local_c8 = *plVar8;
          plVar8 = &local_c0;
          if (local_c0 <= local_d0) {
            plVar8 = &local_e0;
          }
          local_e0 = *plVar8;
          plVar8 = &local_d8;
          if (local_b8 <= local_c8) {
            plVar8 = &local_b8;
          }
          local_d8 = *plVar8;
          if (local_e0 < local_d8) {
            cVar7 = FUN_0052fd8c(8,uRam00000080,0,uRam000001ec,uVar2,uVar5 - 0x118 & 0xffffffff,
                                 uVar5 - 0x120 & 0xffffffff,uVar5 - 0x130 & 0xffffffff);
            if (cVar7 == '\0') break;
            iVar1 = -0x100;
            if (local_120 <= local_100) {
              iVar1 = -0x108;
            }
            iVar3 = -0x110;
            local_100 = *(longlong *)(&stack0x00000000 + iVar1);
            if (local_120 + local_118 <= local_f8) {
              iVar3 = -0xf8;
            }
            local_f8 = *(longlong *)(&stack0x00000000 + iVar3);
            if ((uVar10 & 0xffffffff) < (uVar4 + 1 & 0xffffffff)) break;
          }
          else if ((uVar10 & 0xffffffff) < (uVar4 + 1 & 0xffffffff)) break;
          uVar4 = uVar4 + 1;
        } while( true );
      }
      FUN_005193cc(param_3,0x8c,0x100);
      uVar6 = fios::hash_path_string(param_3);
      iVar1 = *(int *)(param_2 + 0x24);
      *param_4 = local_100;
      *param_5 = local_f8 - local_100;
      *(undefined4 *)(iVar1 + 0xc) = uVar6;
      *(undefined4 *)(iVar1 + 8) = param_3;
      cVar7 = FUN_005155c4(param_1,param_2,local_a0 & 0xffffffff,local_98 & 0xffffffff);
    }
    iVar1 = *(int *)(param_2 + 0x24);
    uVar12 = 1;
    *(undefined4 *)(iVar1 + 0xc) = local_ac;
    *(undefined4 *)(iVar1 + 8) = local_b0;
  }
  else {
    instructionSynchronize();
    uVar12 = (int)*(uint *)(param_1 + 0x11c) >> 0x1f;
    uVar12 = uVar12 - (uVar12 ^ *(uint *)(param_1 + 0x11c)) >> 0x1f;
  }
  FUN_0052cd7c(local_a8);
  return uVar12;
}



//==== 00515ed4  ns=Global  size=0x760
// sig: undefined FUN_00515ed4(void)
// callers(0): 
// callees(7): 005155c4 FUN_005155c4; 0051c8d4 fios::hash_path_string; 0051ca84 FUN_0051ca84; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052fcbc FUN_0052fcbc; 0052fd8c FUN_0052fd8c

void FUN_00515ed4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong local_2a0;
  longlong local_298;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  undefined4 local_220;
  int local_21c;
  char *local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined4 local_1c8;
  char local_1c4 [260];
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar1 = *(undefined4 **)(param_2 + 0x24);
  local_b0 = uVar10 - 0x1c8;
  uVar2 = puVar1[2];
  local_a8 = uVar10 - 0x2a8;
  local_1c8 = 0;
  local_a0 = uVar10 - 0x2ac;
  FUN_0051ca84(local_b0,uVar2);
  local_1c8 = fios::hash_path_string(uVar2);
  local_1f0 = *(longlong *)(puVar1 + 0xc);
  local_1d8 = *(longlong *)(puVar1 + 0x12);
  local_1d0 = puVar1[0x14];
  local_220 = *puVar1;
  local_21c = puVar1[1];
  local_218 = (char *)puVar1[2];
  local_200 = *(undefined8 *)(puVar1 + 8);
  local_b8 = (ulonglong)(param_1 + 0x98);
  local_20c = puVar1[5];
  local_208 = puVar1[6];
  local_214 = puVar1[3];
  local_1f8 = puVar1[10];
  local_210 = puVar1[4];
  local_1cc = *(undefined2 *)(puVar1 + 0x15);
  local_1e8 = *(undefined8 *)(puVar1 + 0xe);
  local_1e0 = *(longlong *)(puVar1 + 0x10);
  *(undefined4 **)(param_2 + 0x24) = &local_220;
  lVar7 = *(longlong *)(puVar1 + 0x10);
  local_c0 = lVar7;
  FUN_0052ce28(local_b8);
  while (cVar11 = FUN_005155c4(param_1,param_2,local_a8 & 0xffffffff,local_a0 & 0xffffffff),
        cVar11 != '\0') {
    local_268 = FUN_0052fcbc(8,uRam00000080,0);
    local_270 = 0;
    if (0x7fffffffffffffff - local_268 < 0) {
      local_268 = 0x7fffffffffffffff;
    }
    local_258 = local_1f0 + local_1e0;
    if (0x7fffffffffffffff - local_1e0 < local_1f0) {
      local_258 = 0x7fffffffffffffff;
    }
    plVar12 = &local_270;
    if (-1 < local_1f0) {
      plVar12 = &local_260;
    }
    local_260 = *plVar12;
    plVar12 = &local_268;
    if (local_258 < local_268) {
      plVar12 = &local_258;
    }
    local_258 = *plVar12;
    if (lVar7 == 0x7fffffffffffffff) {
      lVar7 = local_258 - local_260;
    }
    local_230 = 0x7fffffffffffffff;
    local_228 = -0x8000000000000000;
    uVar14 = (ulonglong)uRam00000028;
    uVar13 = local_258 / (longlong)uVar14;
    uVar8 = local_260 / (longlong)uVar14;
    if ((uVar8 & 0xffffffff) <= (uVar13 & 0xffffffff)) {
      do {
        uVar5 = uVar8 & 0xffffffff;
        local_238 = uVar14 * (uVar5 + 1);
        if ((longlong)(0x7fffffffffffffff - uVar14) < (longlong)(uVar14 * uVar5)) {
          local_238 = 0x7fffffffffffffff;
        }
        plVar12 = &local_270;
        if (local_270 <= (longlong)(uVar14 * uVar5)) {
          plVar12 = &local_240;
        }
        local_240 = *plVar12;
        plVar12 = &local_268;
        if (local_238 < local_268) {
          plVar12 = &local_238;
        }
        local_238 = *plVar12;
        plVar12 = &local_260;
        if (local_260 <= local_240) {
          plVar12 = &local_250;
        }
        local_250 = *plVar12;
        plVar12 = &local_248;
        if (local_258 <= local_238) {
          plVar12 = &local_258;
        }
        local_248 = *plVar12;
        if (local_250 < local_248) {
          cVar11 = FUN_0052fd8c(8,uRam00000080,0,uRam000001ec,uVar5,uVar10 - 0x298,uVar10 - 0x2a0,
                                uVar10 - 0x2b0);
          if (cVar11 == '\0') break;
          iVar9 = -0x230;
          if (local_2a0 <= local_230) {
            iVar9 = -0x278;
          }
          iVar6 = -0x280;
          local_230 = *(longlong *)(&stack0x00000000 + iVar9);
          if (local_2a0 + local_298 <= local_228) {
            iVar6 = -0x228;
          }
          local_228 = *(longlong *)(&stack0x00000000 + iVar6);
          if ((uVar13 & 0xffffffff) < (uVar8 + 1 & 0xffffffff)) break;
        }
        else if ((uVar13 & 0xffffffff) < (uVar8 + 1 & 0xffffffff)) break;
        uVar8 = uVar8 + 1;
      } while( true );
    }
    FUN_0051ca84(local_b0 & 0xffffffff,0x8c);
    local_214 = fios::hash_path_string(0x8c);
    local_218 = local_1c4;
    if (local_1c4[0] == '\0') {
      local_218 = (char *)0x0;
    }
    local_1f0 = local_230;
    local_1e0 = local_228 - local_230;
    local_1f8 = uRam00000068;
    local_210 = uRam00000050;
    local_20c = uRam00000054;
    local_208 = uRam00000058;
    local_200 = uRam00000060;
    local_1c8 = local_214;
    if ((uRam000001e8 & 0x300) != 0) {
      *(undefined4 **)(param_2 + 0x24) = puVar1;
      puVar1[1] = 0x80010707;
      FUN_0052cd7c(local_b8);
      return;
    }
  }
  piVar3 = *(int **)(param_2 + 0x24);
  if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
    piVar3[1] = 0;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x40);
    if (piVar3 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
    }
  }
  *(undefined4 **)(param_2 + 0x24) = puVar1;
  if (local_1d8 < local_1e0) {
    if (((local_21c == 0) && (local_1d8 != 0)) &&
       (cVar11 = FUN_005155c4(param_1,param_2,uVar10 - 0x2a8,uVar10 - 0x2ac), cVar11 != '\0')) {
      uVar13 = (ulonglong)uRam00000028;
      iVar9 = -0x290;
      uVar8 = *(longlong *)(puVar1 + 0xc) / (longlong)uVar13;
      if (0xffffffff <
          (*(longlong *)(puVar1 + 0xc) + *(longlong *)(puVar1 + 0x10)) / (longlong)uVar13) {
        iVar9 = -0x288;
      }
      lVar7 = 0;
      uVar4 = *(uint *)(&stack0x00000004 + iVar9);
      if ((uVar8 & 0xffffffff) <= (ulonglong)uVar4) {
        lVar15 = 0;
        do {
          uVar14 = uVar8 & 0xffffffff;
          uVar8 = uVar8 + 1;
          cVar11 = FUN_0052fd8c(8,uRam00000080,0,uRam000001ec,uVar14,uVar10 - 0x2a0 & 0xffffffff,
                                uVar10 - 0x298 & 0xffffffff,uVar10 - 0x2b0 & 0xffffffff);
          if ((cVar11 == '\0') || (lVar15 = local_2a0 + lVar15, local_1d8 < lVar15)) break;
          lVar7 = lVar7 + uVar13;
        } while ((uVar8 & 0xffffffff) <= (ulonglong)uVar4);
      }
      *(longlong *)(puVar1 + 0x12) = lVar7;
      plVar12 = (longlong *)(puVar1 + 0x12);
      if (*(longlong *)(puVar1 + 0x10) <= *(longlong *)(puVar1 + 0x12)) {
        plVar12 = (longlong *)(puVar1 + 0x10);
      }
      *(longlong *)(puVar1 + 0x12) = *plVar12;
      puVar1[1] = 0;
      goto LAB_005164a4;
    }
    *(longlong *)(puVar1 + 0x12) = local_1d8;
    iVar9 = local_21c;
  }
  else {
    *(longlong *)(puVar1 + 0x12) = lVar7;
    iVar9 = -0x7ffef8f7;
    if (local_c0 <= lVar7) {
      iVar9 = 0;
    }
  }
  puVar1[1] = iVar9;
LAB_005164a4:
  FUN_0052cd7c(local_b8);
  return;
}



//==== 00516634  ns=Global  size=0x274
// sig: undefined FUN_00516634(void)
// callers(2): 005168a8 FUN_005168a8; 00517d4c FUN_00517d4c
// callees(4): 005155c4 FUN_005155c4; 0052cbd8 fios::print_tty4; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28
// strings: 006675f0: "fios dearchiver: closing file '%s' has bad archive ptr in filehandle!\n"

void FUN_00516634(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  int *local_30;
  undefined1 local_2c [12];
  
  piVar1 = *(int **)(param_2 + 0x24);
  local_30 = (int *)0x0;
  if (piVar1[4] == param_1) {
    local_30 = (int *)piVar1[5];
  }
  else if (((*piVar1 == 0x10) && (piVar1[4] == 0)) && (piVar1[5] == param_1)) {
    piVar1[1] = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_2);
    }
  }
  if ((piVar1[4] != param_1) &&
     ((((*(ushort *)(piVar1 + 0x15) & 0x3000) == 0 ||
       (cVar6 = FUN_005155c4(param_1,param_2,&local_30,local_2c), cVar6 == '\0')) ||
      ((local_30[0x7a] & 0x800U) == 0)))) {
    return;
  }
  FUN_0052ce28(param_1 + 0x98);
  iVar5 = (((int)local_30 >> 0x1f ^ (uint)local_30) - ((int)local_30 >> 0x1f)) + -1;
  if (iVar5 < 0) {
    if (iVar5 < 0) goto LAB_0051686c;
  }
  else {
    for (piVar2 = *(int **)(param_1 + 0x164); (local_30 != piVar2 && (piVar2 != (int *)0x0));
        piVar2 = (int *)*piVar2) {
    }
  }
  if (iVar5 >= 0) {
    for (piVar2 = *(int **)(param_1 + 0x164); (local_30 != piVar2 && (piVar2 != (int *)0x0));
        piVar2 = (int *)*piVar2) {
    }
    uVar8 = (ulonglong)((int)((uint)local_30 ^ (uint)piVar2) >> 0x1f);
    if ((((uVar8 ^ ((uint)local_30 ^ (uint)piVar2)) - uVar8) - 1 >> 0x1f & 1) != 0) {
      do {
        puVar7 = (uint *)(ZEXT48(local_30) + 0x7c);
        uVar3 = *puVar7;
        instructionSynchronize();
        while (uVar3 == *puVar7) {
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed
                              ((ulonglong)uVar3 - 1,0,ZEXT48(local_30) + 0x7c & 0xffffffff);
            *puVar7 = uVar4;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            piVar1[1] = 0;
            goto LAB_0051682c;
          }
        }
      } while( true );
    }
  }
LAB_0051686c:
  fios::print_tty4(PTR_s_fios_dearchiver__closing_file____0071aa50,piVar1[2]);
  piVar1[1] = -0x7ffef8fa;
LAB_0051682c:
  FUN_0052cd7c(param_1 + 0x98);
  return;
}



//==== 005168a8  ns=Global  size=0x324
// sig: undefined FUN_005168a8(void)
// callers(0): 
// callees(10): 00512820 FUN_00512820; 00516634 FUN_00516634; 0052780c FUN_0052780c; 0052cbd8 fios::print_tty4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00530770 FUN_00530770; 005d0140 libc::memset
// strings: 00667638: "fios close archive ... '%s' is not in our list of open archives!\n" | 00516ab0: '}+Kxy)' (raw)

void FUN_005168a8(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  
  puVar5 = PTR_DAT_0071a9d8;
  if ((*(uint *)(PTR_DAT_0071a9d8 + 0x18) & 4) != 0) {
    FUN_0052780c(*(undefined4 *)(param_2 + 0xc));
  }
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  piVar6 = param_1 + 0x26;
  fios::rwlock_wlock_checked(piVar6);
  piVar7 = param_1 + 0x59;
  piVar4 = (int *)*piVar7;
  bVar1 = piVar4 == (int *)0x0;
  if (!bVar1) {
    iVar2 = *(int *)(param_2 + 0x24);
    do {
      if ((((piVar4[0x14] == *(int *)(iVar2 + 0x10)) && (piVar4[0x15] == *(int *)(iVar2 + 0x14))) &&
          (piVar4[0x16] == *(int *)(iVar2 + 0x18))) &&
         ((*(longlong *)(piVar4 + 0x18) == *(longlong *)(iVar2 + 0x20) &&
          (piVar4[0x1a] == *(int *)(iVar2 + 0x28))))) {
        if (!bVar1) {
          iVar2 = piVar4[0x1e];
          piVar4[0x1e] = iVar2 + -1;
          if (0 < iVar2 + -1) {
            *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
            FUN_0052cc20(piVar6);
            return;
          }
          instructionSynchronize();
          piVar3 = (int *)*piVar7;
          if (piVar4 == piVar3) goto LAB_00516ad0;
          piVar7 = piVar3;
          if (piVar3 == (int *)0x0) goto LAB_00516ae4;
          goto LAB_00516ab0;
        }
        break;
      }
      piVar4 = (int *)*piVar4;
      bVar1 = piVar4 == (int *)0x0;
    } while (!bVar1);
  }
  fios::print_tty4(PTR_s_fios_close_archive_______s__is_n_0071aa54,
                   *(undefined4 *)(*(int *)(param_2 + 0x24) + 8));
  goto LAB_00516a34;
LAB_00516ad0:
  *piVar7 = *piVar4;
  *piVar4 = 0;
  goto LAB_00516ae4;
  while (piVar7 = piVar3, piVar3 != (int *)0x0) {
LAB_00516ab0:
    piVar3 = (int *)*piVar7;
    if (piVar4 == piVar3) goto LAB_00516ad0;
  }
LAB_00516ae4:
  if (piVar4[0x20] != 0) {
    piVar7 = *(int **)(puVar5 + 8);
    (*(code *)**(undefined4 **)(*piVar7 + 4))(piVar7,piVar4[0x20],0x10610200,0,0);
  }
  piVar4[0x7b] = 0;
  piVar4[0x20] = 0;
  FUN_00512820(param_1,piVar4);
  FUN_00530770(piVar4 + 2);
  piVar7 = *(int **)(puVar5 + 8);
  (*(code *)**(undefined4 **)(*piVar7 + 4))(piVar7,piVar4,0x10600103,0,0);
  fios::lwmutex_lock_checked(param_1 + 0x90);
  libc::memset(param_1 + 0x9a,0,0x860);
  fios::lwmutex_unlock_checked(param_1 + 0x90);
LAB_00516a34:
  FUN_0052cc20(piVar6);
  FUN_00516634(param_1,param_2);
  return;
}



//==== 00516bcc  ns=Global  size=0x3ec
// sig: undefined FUN_00516bcc(void)
// callers(1): 00517d4c FUN_00517d4c
// callees(8): 005113b4 FUN_005113b4; 005155c4 FUN_005155c4; 005197dc FUN_005197dc; 0051c8d4 fios::hash_path_string; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052fcbc FUN_0052fcbc; 005c8510 libc::strlen
// strings: 00667680: '.sdat'

void FUN_00516bcc(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  char *__s;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  char cVar12;
  undefined8 uVar8;
  size_t sVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar13;
  char in_RESERVE;
  byte in_cr0;
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  
  FUN_0052ce28(param_1 + 0x98);
  iVar2 = *(int *)(param_2 + 0x24);
  cVar12 = FUN_005155c4(param_1,param_2,local_60,local_5c);
  if (cVar12 == '\0') {
    piVar5 = *(int **)(param_2 + 0x24);
    if (((*piVar5 == 0x10) && (piVar5[4] == 0)) && (piVar5[5] == param_1)) {
      piVar5[1] = 0;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x40);
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
    }
    goto LAB_00516dac;
  }
  uVar1 = *(ushort *)(*(int *)(param_2 + 0x24) + 0x54);
  if ((uVar1 & 3) != 1) {
    *(undefined4 *)(iVar2 + 4) = 0x80010710;
    goto LAB_00516dac;
  }
  if ((*(ushort *)(iVar2 + 0x54) & 0x200) == 0) {
    if ((uVar1 & 0x300) == 0) {
LAB_00516c90:
      uVar11 = uRam00000068;
      uVar8 = uRam00000060;
      uVar4 = uRam00000058;
      uVar3 = uRam00000054;
      if (((uRam000001e8 & 0x800) == 0) || ((uVar1 & 0x300) == 0)) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(int *)(iVar2 + 0x10) = param_1;
        *(undefined4 *)(iVar2 + 0x28) = 0;
        *(undefined8 *)(iVar2 + 0x20) = 0;
        uVar8 = FUN_0052fcbc(8,0,0);
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined8 *)(iVar2 + 0x48) = uVar8;
        *(ulonglong *)(iVar2 + 0x20) =
             (-(ulonglong)uRam00000080 & 0xffffffff) / (ulonglong)uRam00000020;
      }
      else {
        *(undefined4 *)(iVar2 + 0x10) = uRam00000050;
        *(undefined4 *)(iVar2 + 0x14) = uVar3;
        *(undefined4 *)(iVar2 + 0x18) = uVar4;
        *(undefined8 *)(iVar2 + 0x20) = uVar8;
        *(undefined4 *)(iVar2 + 0x28) = uVar11;
        uVar8 = FUN_005113b4(param_1,iVar2,0,0);
        *(undefined8 *)(iVar2 + 0x38) = uVar8;
        if (*(int *)(iVar2 + 4) != -0x7ffef8ff) {
          uVar3 = *(undefined4 *)PTR_DAT_0071aa1c;
          uVar4 = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
          uVar11 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
          uVar8 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
          *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
          *(undefined4 *)(iVar2 + 0x10) = uVar3;
          *(undefined4 *)(iVar2 + 0x14) = uVar4;
          *(undefined4 *)(iVar2 + 0x18) = uVar11;
          *(undefined8 *)(iVar2 + 0x20) = uVar8;
          goto LAB_00516dac;
        }
        puVar7 = (undefined4 *)(iVar2 + 8);
        uVar3 = *puVar7;
        *puVar7 = 0x8c;
        uVar11 = fios::hash_path_string(0x8c);
        piVar5 = *(int **)(param_2 + 0x24);
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = uVar11;
        if (((*piVar5 == 0x10) && (piVar5[4] == 0)) && (piVar5[5] == param_1)) {
          piVar5[1] = 0;
        }
        else {
          piVar5 = *(int **)(param_1 + 0x40);
          if (piVar5 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
          }
        }
        *(undefined4 *)(iVar2 + 0xc) = uVar4;
        *puVar7 = uVar3;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        do {
          uVar6 = uRam0000007c;
          uVar13 = (ulonglong)uRam0000007c;
          instructionSynchronize();
          while (uVar6 == uRam0000007c) {
            if (in_RESERVE != '\0') {
              uRam0000007c = storeWordConditionalIndexed(uVar13 + 1,0,0x7c);
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) goto LAB_00516dac;
          }
        } while( true );
      }
      goto LAB_00516dac;
    }
  }
  else {
    __s = *(char **)(iVar2 + 8);
    sVar9 = libc::strlen(__s);
    if (((lRam00000070 != 0) && (4 < sVar9)) &&
       (iVar10 = FUN_005197dc(__s + (sVar9 - 5),PTR_s__sdat_0071aa58), iVar10 == 0))
    goto LAB_00516c90;
  }
  *(undefined4 *)(iVar2 + 4) = 0x80010707;
LAB_00516dac:
  FUN_0052cd7c(param_1 + 0x98);
  return;
}



//==== 00516fb8  ns=Global  size=0x3e0
// sig: undefined FUN_00516fb8(void)
// callers(2): 00517398 FUN_00517398; 00517d4c FUN_00517d4c
// callees(8): 00510d54 FUN_00510d54; 005113b4 FUN_005113b4; 005155c4 FUN_005155c4; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052fcbc FUN_0052fcbc; 0052fcec FUN_0052fcec; 005c5ad0 libc::memcpy

void FUN_00516fb8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *__dest;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char cVar15;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar16;
  longlong lVar17;
  undefined1 local_70 [4];
  undefined1 local_6c [20];
  
  FUN_0052ce28(param_1 + 0x98);
  iVar2 = *(int *)(param_2 + 0x24);
  __dest = *(longlong **)(iVar2 + 0x50);
  cVar15 = FUN_00510d54(param_1,*(undefined4 *)(iVar2 + 8),__dest);
  if (cVar15 == '\0') {
    instructionSynchronize();
    bVar8 = false;
    if (*(int *)(param_1 + 0x11c) != 0) {
      piVar3 = *(int **)(param_2 + 0x24);
      if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
        piVar3[1] = 0;
      }
      else {
        piVar3 = *(int **)(param_1 + 0x40);
        if (piVar3 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
        }
      }
      if (*(int *)(iVar2 + 4) == 0) goto LAB_0051706c;
      bVar8 = true;
    }
    cVar15 = FUN_005155c4(param_1,param_2,local_70,local_6c);
    uVar11 = uRam00000068;
    uVar13 = uRam00000060;
    uVar10 = uRam00000058;
    uVar9 = uRam00000054;
    if (cVar15 == '\0') {
      if (!bVar8) {
        piVar3 = *(int **)(param_2 + 0x24);
        if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
          piVar3[1] = 0;
        }
        else {
          piVar3 = *(int **)(param_1 + 0x40);
          if (piVar3 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
          }
        }
      }
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0x54);
      if ((uVar1 & 0x2000) == 0) {
        uVar13 = FUN_0052fcbc(8,uRam00000080,0);
        *(undefined8 *)(iVar2 + 0x48) = uVar13;
        *(undefined2 *)(iVar2 + 0x54) = 2;
        *(uint *)(iVar2 + 4) = uVar1 & 0x2000;
        if (__dest != (longlong *)0x0) {
          libc::memcpy(__dest,(void *)0x190,0x58);
          lVar17 = *__dest;
          __dest[1] = *(longlong *)(iVar2 + 0x48);
          *(undefined4 *)(__dest + 5) = 2;
          if (lVar17 != 0) {
            lVar14 = FUN_0052fcec(8,uRam00000080,0);
            *__dest = lVar17 + lVar14;
          }
        }
      }
      else {
        puVar12 = (undefined4 *)(iVar2 + 0x10);
        uVar4 = *puVar12;
        *puVar12 = uRam00000050;
        uVar5 = *(undefined4 *)(iVar2 + 0x14);
        uVar6 = *(undefined4 *)(iVar2 + 0x18);
        uVar16 = *(undefined8 *)(iVar2 + 0x20);
        uVar7 = *(undefined4 *)(iVar2 + 0x28);
        *(undefined4 *)(iVar2 + 0x14) = uVar9;
        *(undefined4 *)(iVar2 + 0x18) = uVar10;
        *(undefined8 *)(iVar2 + 0x20) = uVar13;
        *(undefined4 *)(iVar2 + 0x28) = uVar11;
        uVar13 = FUN_005113b4(param_1,iVar2,0,0);
        *(undefined8 *)(iVar2 + 0x38) = uVar13;
        if (*(int *)(iVar2 + 4) == -0x7ffef8ff) {
          piVar3 = *(int **)(param_2 + 0x24);
          if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
            piVar3[1] = 0;
          }
          else {
            piVar3 = *(int **)(param_1 + 0x40);
            if (piVar3 != (int *)0x0) {
              (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
            }
          }
        }
        *(undefined4 *)(iVar2 + 0x28) = uVar7;
        *puVar12 = uVar4;
        *(undefined4 *)(iVar2 + 0x14) = uVar5;
        *(undefined4 *)(iVar2 + 0x18) = uVar6;
        *(undefined8 *)(iVar2 + 0x20) = uVar16;
      }
    }
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined2 *)(iVar2 + 0x54) = 3;
    *(undefined8 *)(iVar2 + 0x48) = 0;
    if (__dest != (longlong *)0x0) {
      __dest[1] = 0;
      *(undefined4 *)(__dest + 5) = 3;
    }
  }
LAB_0051706c:
  FUN_0052cd7c(param_1 + 0x98);
  return;
}



//==== 00517398  ns=Global  size=0x1c8
// sig: undefined FUN_00517398(void)
// callers(2): 00517560 FUN_00517560; 005177d8 FUN_005177d8
// callees(7): 00510cec FUN_00510cec; 00516fb8 FUN_00516fb8; 0051c8d4 fios::hash_path_string; 0052cbd8 fios::print_tty4; 005c8510 libc::strlen; 005c85b4 FUN_005c85b4; 005d0140 libc::memset
// strings: 00667688: 'Unexpected error from stat(%s) in dearchiver::executeReadDirectory: %d\n'

void FUN_00517398(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char *__s;
  short sVar4;
  size_t sVar3;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_d8;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined8 *local_58;
  
  iVar1 = *(int *)(param_2 + 0x24);
  puVar2 = *(undefined8 **)(iVar1 + 0x50);
  libc::memset(&local_a8,0,0x56);
  local_a0 = 0;
  local_9c = fios::hash_path_string(0);
  __s = (char *)((int)puVar2 + 0x1a);
  local_98 = *(undefined4 *)PTR_DAT_0071aa1c;
  local_80 = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
  local_94 = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
  local_90 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
  local_88 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
  local_a8 = 8;
  local_a0 = FUN_00510cec(param_1,param_3,__s);
  local_9c = fios::hash_path_string(local_a0);
  local_58 = &local_100;
  *(undefined4 **)(param_2 + 0x24) = &local_a8;
  local_68 = 0x58;
  FUN_00516fb8(param_1,param_2);
  *(int *)(param_2 + 0x24) = iVar1;
  if (local_a4 == 0) {
    sVar4 = FUN_005c85b4(__s,0x2f);
    *puVar2 = local_100;
    puVar2[1] = local_f8;
    *(undefined4 *)(puVar2 + 2) = local_d8;
    sVar4 = (sVar4 - (short)__s) + 1;
    sVar3 = libc::strlen(__s);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined8 *)(iVar1 + 0x48) = 0x120;
    *(short *)((int)puVar2 + 0x14) = (short)sVar3 - sVar4;
    *(short *)((int)puVar2 + 0x16) = (short)sVar3;
    *(short *)(puVar2 + 3) = sVar4;
  }
  else {
    fios::print_tty4(PTR_s_Unexpected_error_from_stat__s__i_0071aa5c,__s,local_a4);
    *(int *)(iVar1 + 4) = local_a4;
  }
  return;
}



//==== 00517560  ns=Global  size=0x278
// sig: undefined FUN_00517560(void)
// callers(0): 
// callees(9): 005123b8 FUN_005123b8; 0051514c FUN_0051514c; 00517398 FUN_00517398; 0052cbd8 fios::print_tty4; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005cc784 FUN_005cc784
// strings: 006676d0: "fios archive readdir: couldn't rebuild manifest path table!\n" | 00667710: "fios archive readdir: couldn't load manifest for archive '%s'\n"

void FUN_00517560(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  int iVar9;
  longlong lVar7;
  int iVar10;
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar15;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar8 = param_1 + 0x98;
  iVar1 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  FUN_0052ce28(iVar8);
  iVar9 = param_1 + 0xb0;
  fios::lwmutex_lock_checked(iVar9);
  puVar3 = *(undefined4 **)(param_1 + 0x164);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00517614:
      *(undefined4 *)(iVar1 + 4) = 0x80010706;
      fios::lwmutex_unlock_checked(iVar9);
      FUN_0052cd7c(iVar8);
      return;
    }
    iVar10 = FUN_005cc784(puVar3 + 0x23,uVar2);
    if (iVar10 == 0) {
      if (puVar3 != (undefined4 *)0x0) {
        if (puVar3[0x21] == 0) {
          cVar11 = FUN_0051514c(param_1,param_2,puVar3);
          if (cVar11 == '\0') {
            fios::print_tty4(PTR_s_fios_archive_readdir__couldn_t_l_0071aa64,puVar3 + 0x23);
          }
          else {
            cVar11 = FUN_005123b8(param_1);
            if (cVar11 == '\0') {
              fios::print_tty4(PTR_s_fios_archive_readdir__couldn_t_r_0071aa60);
            }
          }
        }
        iVar10 = puVar3[0x22];
        uVar4 = puVar3[0x21];
        FUN_0052cd7c(iVar8);
        uVar5 = *(uint *)(param_1 + 0x238);
        if (0 < (int)uVar5) {
          uVar15 = (ulonglong)uVar5;
          iVar14 = 0;
          iVar8 = 0;
          uVar13 = 0;
          do {
            iVar12 = 0;
            if ((uVar13 & 0xffffffff) < (ulonglong)uVar5) {
              iVar12 = (int)((uVar13 & 0x3fffffff) << 2);
            }
            uVar6 = *(uint *)(iVar12 + *(int *)(param_1 + 0x230));
            if (((uVar4 <= uVar6) && (lVar7 = (longlong)iVar8, uVar6 <= (uVar4 + iVar10) - 1)) &&
               (iVar8 = iVar8 + 1, lVar7 == *(longlong *)(iVar1 + 0x30))) {
              fios::lwmutex_unlock_checked(iVar9);
              FUN_00517398(param_1,param_2,iVar14);
              return;
            }
            iVar14 = iVar14 + 1;
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        *(undefined4 *)(iVar1 + 4) = 0x8001070b;
        fios::lwmutex_unlock_checked(iVar9);
        return;
      }
      goto LAB_00517614;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



//==== 005177d8  ns=Global  size=0x574
// sig: undefined FUN_005177d8(void)
// callers(0): 
// callees(16): 00510f38 FUN_00510f38; 005110d8 FUN_005110d8; 005111e4 FUN_005111e4; 005123b8 FUN_005123b8; 0051514c FUN_0051514c; 00517398 FUN_00517398; 005193cc FUN_005193cc; 0052cbd8 fios::print_tty4; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005c8510 libc::strlen; 005c85b4 FUN_005c85b4; 005cc784 FUN_005cc784; 005ccb28 FUN_005ccb28
// strings: 00667710: "fios archive readdir: couldn't load manifest for archive '%s'\n" | 006676d0: "fios archive readdir: couldn't rebuild manifest path table!\n"

void FUN_005177d8(int *param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  char cVar12;
  int iVar9;
  int iVar10;
  short sVar11;
  undefined4 *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 local_290 [256];
  undefined1 auStack_190 [264];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar1 = false;
  iVar10 = *(int *)(param_2 + 0x24);
  pcVar14 = *(char **)(iVar10 + 8);
  sVar7 = libc::strlen(pcVar14);
  piVar5 = param_1 + 0x26;
  puVar2 = *(undefined8 **)(iVar10 + 0x50);
  FUN_0052ce28(piVar5);
  piVar6 = param_1 + 0x2c;
  fios::lwmutex_lock_checked(piVar6);
  puVar13 = (undefined4 *)param_1[0x59];
joined_r0x0051789c:
  if (puVar13 != (undefined4 *)0x0) {
    do {
      if ((puVar13[0xb] & 2) == 0) {
        uVar3 = puVar13[99];
        if (sVar7 < uVar3) goto LAB_005178c0;
        iVar8 = FUN_005ccb28(puVar13 + 0x23,pcVar14,uVar3);
        if ((iVar8 != 0) || ((pcVar14[uVar3] != '\0' && (pcVar14[uVar3] != '/'))))
        goto LAB_005178c0;
      }
      if (puVar13[0x21] != 0) goto LAB_005178c0;
      cVar12 = FUN_0051514c(param_1,param_2,puVar13);
      bVar1 = true;
      if (cVar12 != '\0') goto LAB_005178c0;
      fios::print_tty4(PTR_s_fios_archive_readdir__couldn_t_l_0071aa64,puVar13 + 0x23);
      puVar13 = (undefined4 *)*puVar13;
      if (puVar13 == (undefined4 *)0x0) break;
    } while( true );
  }
  FUN_0052cd7c(piVar5);
  if ((bVar1) && (cVar12 = FUN_005123b8(param_1), cVar12 == '\0')) {
    fios::print_tty4(PTR_s_fios_archive_readdir__couldn_t_r_0071aa60);
  }
  lVar16 = *(longlong *)(iVar10 + 0x30);
  iVar8 = FUN_005111e4(param_1,pcVar14);
  bVar1 = iVar8 == -1;
  if ((!bVar1) && (iVar4 = param_1[0x8e], iVar8 < iVar4)) {
    do {
      while( true ) {
        cVar12 = FUN_005110d8(param_1,iVar8,pcVar14);
        bVar1 = lVar16 == 0;
        if (cVar12 == '\0') break;
        lVar16 = lVar16 + -1;
        iVar9 = iVar8 + 1;
        if (bVar1) {
          fios::lwmutex_unlock_checked(piVar6,iVar8,pcVar14,auStack_190);
          FUN_00517398(param_1,param_2,iVar8);
          goto LAB_00517ab0;
        }
        iVar8 = iVar9;
        if (iVar4 <= iVar9) goto LAB_00517a24;
      }
      cVar12 = FUN_00510f38(param_1);
      iVar9 = iVar8;
      if (cVar12 == '\0') break;
      iVar9 = FUN_005cc784(auStack_190,local_290);
      if (iVar9 != 0) {
        if (lVar16 == 0) {
          pcVar14 = (char *)((int)puVar2 + 0x1a);
          fios::lwmutex_unlock_checked(piVar6,auStack_190,0x100);
          FUN_005193cc(pcVar14,auStack_190,0x100);
          sVar11 = FUN_005c85b4(pcVar14,0x2f);
          *(undefined4 *)(puVar2 + 2) = 3;
          sVar11 = (sVar11 - (short)pcVar14) + 1;
          *puVar2 = 0;
          puVar2[1] = 0;
          sVar7 = libc::strlen(pcVar14);
          *(undefined8 *)(iVar10 + 0x48) = 0x120;
          *(undefined4 *)(iVar10 + 4) = 0;
          *(short *)((int)puVar2 + 0x14) = (short)sVar7 - sVar11;
          *(short *)((int)puVar2 + 0x16) = (short)sVar7;
          *(short *)(puVar2 + 3) = sVar11;
          goto LAB_00517ab0;
        }
        lVar16 = lVar16 + -1;
        FUN_005193cc(local_290);
      }
      iVar9 = iVar8 + 1;
      iVar8 = iVar9;
    } while (iVar9 < iVar4);
LAB_00517a24:
    bVar1 = iVar9 == -1;
  }
  fios::lwmutex_unlock_checked(piVar6);
  piVar6 = *(int **)(param_2 + 0x24);
  uVar15 = *(undefined8 *)(iVar10 + 0x30);
  *(longlong *)(iVar10 + 0x30) = lVar16;
  if (((*piVar6 == 0x10) && (piVar6[4] == 0)) && ((int *)piVar6[5] == param_1)) {
    piVar6[1] = 0;
  }
  else {
    piVar6 = (int *)param_1[0x10];
    if (piVar6 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar6 + 0x14))(piVar6,param_2);
    }
  }
  *(undefined8 *)(iVar10 + 0x30) = uVar15;
  if (((!bVar1) && (*(int *)(iVar10 + 4) != 0)) && (*(int *)(iVar10 + 4) != -0x7ffef8f5)) {
    *(undefined4 *)(iVar10 + 4) = 0x8001070b;
  }
LAB_00517ab0:
  if (*(int *)(iVar10 + 4) == 0) {
    cVar12 = (*(code *)**(undefined4 **)(*param_1 + 0x20))(param_1,(int)puVar2 + 0x1a);
    if (cVar12 != '\0') {
      FUN_0052ce28(piVar5);
      for (puVar13 = (undefined4 *)param_1[0x59]; puVar13 != (undefined4 *)0x0;
          puVar13 = (undefined4 *)*puVar13) {
        if (((puVar13[0xb] & 2) == 0) &&
           (iVar10 = FUN_005cc784(puVar13 + 0x23,(int)puVar2 + 0x1a), iVar10 == 0)) {
          puVar2[1] = 0;
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 2) = 3;
          sVar11 = (*(code *)**(undefined4 **)(*param_1 + 0x24))
                             (param_1,(int)puVar2 + *(ushort *)(puVar2 + 3) + 0x1a);
          *(short *)((int)puVar2 + 0x14) = sVar11;
          *(short *)((int)puVar2 + 0x16) = sVar11 + *(short *)(puVar2 + 3);
          *(undefined1 *)((int)puVar2 + (ushort)(sVar11 + *(short *)(puVar2 + 3)) + 0x1a) = 0;
          break;
        }
      }
      FUN_0052cd7c(piVar5);
    }
  }
  return;
LAB_005178c0:
  puVar13 = (undefined4 *)*puVar13;
  goto joined_r0x0051789c;
}



//==== 00517d4c  ns=Global  size=0xc5c
// sig: undefined FUN_00517d4c(void)
// callers(0): 
// callees(17): 0051399c FUN_0051399c; 00513cc4 FUN_00513cc4; 00516634 FUN_00516634; 00516bcc FUN_00516bcc; 00516fb8 FUN_00516fb8; 005193cc FUN_005193cc; 00527944 FUN_00527944; 0052cbd8 fios::print_tty4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052fc08 FUN_0052fc08; 00530770 FUN_00530770; 005308d4 FUN_005308d4; 005cc784 FUN_005cc784; 005d0140 libc::memset
// strings: 00667798: "fios open archive '%s' failed %s: err = %d\n" | 006677f8: 'allocating tracker' | 006677c8: 'reading header' | 005187f4: '}+Kxy)' (raw) | 00667750: "fios open archive '%s' will not read contents: mode != kO_RDONLY\n" | 00667860: 'closing file' | 00667858: 'stat' (raw) | 006677d8: 'close for reopen' | 00667840: 'reading/allocating TOC' | 00667810: 'algorithm check - no matching decompressor' | 006677f0: 'reopen'

void FUN_00517d4c(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  char cVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  longlong lVar24;
  int *piVar25;
  int local_220 [12];
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  int *local_148;
  undefined2 local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f8;
  int *local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  
  iVar2 = *(int *)(param_2 + 0x24);
  local_118 = 0;
  local_180 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_120 = 0;
  if ((*(ushort *)(iVar2 + 0x54) & 3) != 1) {
    fios::print_tty4(PTR_s_fios_open_archive___s__will_not_r_0071aa68,*(undefined4 *)(iVar2 + 8));
    FUN_00516bcc(param_1,param_2);
    return;
  }
  if ((*(uint *)(PTR_DAT_0071a9d8 + 0x18) & 4) != 0) {
    FUN_00527944(*(undefined4 *)(param_2 + 0xc));
  }
  piVar14 = param_1 + 0x26;
  fios::rwlock_wlock_checked(piVar14);
  piVar11 = param_1 + 0x59;
  piVar23 = (int *)*piVar11;
  if (piVar23 != (int *)0x0) {
    uVar3 = *(undefined4 *)(iVar2 + 8);
    do {
      iVar16 = FUN_005cc784(uVar3,piVar23 + 0x23);
      if (iVar16 == 0) {
        iVar16 = piVar23[0x1e];
        *(undefined8 *)(iVar2 + 0x20) = *(undefined8 *)(piVar23 + 0x18);
        uVar19 = *(undefined8 *)(piVar23 + 0x66);
        iVar4 = piVar23[0x14];
        iVar5 = piVar23[0x15];
        iVar6 = piVar23[0x16];
        piVar23[0x1e] = iVar16 + 1;
        *(int *)(iVar2 + 0x28) = piVar23[0x1a];
        *(undefined4 *)(iVar2 + 4) = 0;
        *(int *)(iVar2 + 0x10) = iVar4;
        *(int *)(iVar2 + 0x14) = iVar5;
        *(int *)(iVar2 + 0x18) = iVar6;
        *(undefined8 *)(iVar2 + 0x48) = uVar19;
        FUN_0052cc20(piVar14);
        return;
      }
      piVar23 = (int *)*piVar23;
    } while (piVar23 != (int *)0x0);
  }
  FUN_0052cc20(piVar14);
  FUN_00516bcc(param_1,param_2);
  if (*(int *)(iVar2 + 4) != 0) {
    return;
  }
  piVar23 = (int *)(iVar2 + 0x10);
  puVar15 = (undefined4 *)(iVar2 + 8);
  local_178 = *(undefined8 *)(iVar2 + 0x20);
  local_184 = *(undefined4 *)(iVar2 + 0x14);
  local_198 = 10;
  local_190 = *puVar15;
  local_194 = -0x7ffef8ff;
  local_180 = *(undefined4 *)(iVar2 + 0x18);
  local_18c = *(undefined4 *)(iVar2 + 0xc);
  local_188 = *piVar23;
  local_170 = *(undefined4 *)(iVar2 + 0x28);
  local_158 = 0x30;
  local_150 = 0;
  local_168 = 0;
  if ((*(ushort *)(iVar2 + 0x54) & 0x300) == 0) {
    local_144 = 0xc;
  }
  else {
    local_144 = 0xe;
  }
  *(undefined4 **)(param_2 + 0x24) = &local_198;
  local_148 = local_220;
  FUN_0051399c(param_1,param_2);
  *(int *)(param_2 + 0x24) = iVar2;
  if (local_194 != 0) {
LAB_005184a0:
    fios::print_tty4(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_190,
                     PTR_s_reading_header_0071aa70,local_194);
    *(int *)(iVar2 + 4) = local_194;
    goto LAB_005181d0;
  }
  lVar24 = 0;
  if (local_220[0] == 0x4d534600) {
    local_e8 = 0xd;
    local_c8 = *(undefined8 *)(iVar2 + 0x20);
    local_e4 = -0x7ffef8ff;
    local_d4 = *(undefined4 *)(iVar2 + 0x14);
    local_d0 = *(undefined4 *)(iVar2 + 0x18);
    local_e0 = *puVar15;
    local_dc = *(undefined4 *)(iVar2 + 0xc);
    local_d8 = *piVar23;
    local_c0 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 **)(param_2 + 0x24) = &local_e8;
    local_94 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b8 = 0;
    local_98 = 0;
    FUN_00516634(param_1,param_2);
    *(int *)(param_2 + 0x24) = iVar2;
    if (local_e4 != 0) {
      fios::print_tty4(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_e0,
                       PTR_s_close_for_reopen_0071aa74,local_e4);
      *(int *)(iVar2 + 4) = local_e4;
      return;
    }
    uVar3 = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
    iVar16 = *(int *)PTR_DAT_0071aa1c;
    uVar7 = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
    uVar8 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
    uVar19 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
    *(ushort *)(iVar2 + 0x54) = *(ushort *)(iVar2 + 0x54) | 0x800;
    *piVar23 = iVar16;
    *(undefined4 *)(iVar2 + 0x14) = uVar7;
    *(undefined4 *)(iVar2 + 0x18) = uVar8;
    *(undefined8 *)(iVar2 + 0x20) = uVar19;
    *(undefined4 *)(iVar2 + 0x28) = uVar3;
    FUN_00516bcc(param_1,param_2);
    *(ushort *)(iVar2 + 0x54) =
         (ushort)((((ulonglong)*(ushort *)(iVar2 + 0x54) << 0x20) >> 0x2c) << 0xc) |
         (ushort)((((ulonglong)*(ushort *)(iVar2 + 0x54) & 0x7ff) << 0x14) >> 0x10) >> 4;
    if (*(int *)(iVar2 + 4) != 0) {
      fios::print_tty4(PTR_s_fios_open_archive___s__failed__s_0071aa6c,*puVar15,
                       PTR_s_reopen_0071aa78,*(undefined4 *)(iVar2 + 4));
      return;
    }
    local_188 = *piVar23;
    local_178 = *(undefined8 *)(iVar2 + 0x20);
    local_184 = *(undefined4 *)(iVar2 + 0x14);
    lVar24 = 0x10000;
    local_180 = *(undefined4 *)(iVar2 + 0x18);
    local_170 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 **)(param_2 + 0x24) = &local_198;
    local_168 = 0x10000;
    local_150 = 0;
    local_194 = -0x7ffef8ff;
    FUN_0051399c(param_1,param_2);
    *(int *)(param_2 + 0x24) = iVar2;
    if (local_194 != 0) goto LAB_005184a0;
  }
  piVar17 = (int *)(*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9d8 + 8))
                             (*(undefined4 **)(PTR_DAT_0071a9d8 + 8),0x1f0,0x10600103,0,0);
  puVar13 = PTR_s_allocating_tracker_0071aa7c;
  puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
  if (piVar17 == (int *)0x0) {
    *(undefined4 *)(iVar2 + 4) = 0x8001070a;
    piVar17 = (int *)0x0;
    fios::print_tty4(puVar12,*puVar15,puVar13,0xffffffff8001070a);
LAB_00518128:
    if (piVar17 == (int *)0x0) goto LAB_005181d0;
    piVar25 = piVar17 + 2;
  }
  else {
    uVar3 = *puVar15;
    piVar25 = piVar17 + 2;
    *piVar17 = 0;
    FUN_005308d4(piVar25,local_220);
    iVar16 = *(int *)(iVar2 + 0x14);
    iVar4 = *(int *)(iVar2 + 0x18);
    uVar19 = *(undefined8 *)(iVar2 + 0x20);
    iVar5 = *piVar23;
    piVar17[0x1a] = *(int *)(iVar2 + 0x28);
    piVar17[0x12] = -1;
    piVar17[0x15] = iVar16;
    piVar17[0x16] = iVar4;
    *(undefined8 *)(piVar17 + 0x18) = uVar19;
    piVar17[0x14] = iVar5;
    piVar17[0x1e] = 1;
    piVar17[0x22] = 0;
    *(longlong *)(piVar17 + 0x1c) = lVar24;
    piVar17[0x1f] = 0;
    piVar17[0x20] = 0;
    piVar17[0x21] = 0;
    FUN_005193cc(piVar17 + 0x23,uVar3,0x100);
    cVar18 = FUN_0052fc08(piVar25);
    if ((cVar18 == '\0') ||
       (*(longlong *)(iVar2 + 0x48) <=
        (longlong)((ulonglong)(uint)piVar17[7] + *(longlong *)(piVar17 + 0xc)))) {
      *(undefined4 *)(iVar2 + 4) = 0x8001070f;
      goto LAB_00518128;
    }
    uVar20 = param_1[0x40];
    piVar22 = param_1 + 0x41;
    uVar21 = 0;
    if (uVar20 != 0) {
      do {
        iVar16 = *piVar22;
        piVar22 = piVar22 + 1;
        if (piVar17[6] == *(int *)(iVar16 + 4)) {
          piVar17[0x12] = uVar21;
          uVar20 = param_1[0x40];
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar20);
    }
    puVar13 = PTR_s_algorithm_check___no_matching_de_0071aa80;
    puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
    if (piVar17[0x12] == -1) {
      *(undefined4 *)(iVar2 + 4) = 0x8001070f;
      fios::print_tty4(puVar12,*puVar15,puVar13,0xffffffff8001070f);
    }
    else {
      cVar18 = FUN_00513cc4(param_1,param_2,piVar17);
      puVar13 = PTR_s_reading_allocating_TOC_0071aa84;
      puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
      if (cVar18 == '\0') {
        *(undefined4 *)(iVar2 + 4) = 0x8001070a;
        fios::print_tty4(puVar12,*puVar15,puVar13,0xffffffff8001070a);
      }
      else {
        iVar16 = (*(code *)**(undefined4 **)(*param_1 + 0x24))(param_1,*puVar15);
        uVar1 = *(ushort *)(iVar2 + 0x54);
        piVar17[99] = iVar16;
        piVar17[0x7a] = (uint)uVar1;
        if (lVar24 != 0) {
          piVar17[0x7a] = uVar1 | 0x800;
        }
        local_140 = 8;
        local_13c = -0x7ffef8ff;
        local_134 = *(undefined4 *)(iVar2 + 0xc);
        local_f0 = piVar17 + 100;
        local_138 = *puVar15;
        local_118 = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
        local_130 = *(undefined4 *)PTR_DAT_0071aa1c;
        local_12c = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
        local_128 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
        local_120 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
        local_100 = 0x58;
        local_ec = 0;
        local_110 = 0;
        local_f8 = 0;
        if ((piVar17[0x7a] & 0x100U) == 0) {
          if ((piVar17[0x7a] & 0x200U) != 0) {
            local_ec = 0x2000;
          }
        }
        else {
          local_ec = 0x1000;
        }
        *(undefined4 **)(param_2 + 0x24) = &local_140;
        FUN_00516fb8(param_1,param_2);
        *(int *)(param_2 + 0x24) = iVar2;
        puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
        if (local_13c == 0) {
          fios::rwlock_wlock_checked(piVar14);
          piVar22 = (int *)*piVar11;
          if (piVar22 != (int *)0x0) {
            uVar3 = *puVar15;
            piVar9 = piVar22;
            do {
              iVar16 = FUN_005cc784(uVar3,piVar9 + 0x23);
              if (iVar16 == 0) {
                if (piVar9 != (int *)0x0) {
                  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
                            (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17[0x20],0x10610200,0,0);
                  FUN_00530770(piVar25);
                  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
                            (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17,0x10600103,0,0);
                  local_e4 = -0x7ffef8ff;
                  local_e8 = 0xd;
                  local_c8 = *(undefined8 *)(iVar2 + 0x20);
                  local_d4 = *(undefined4 *)(iVar2 + 0x14);
                  local_d0 = *(undefined4 *)(iVar2 + 0x18);
                  local_dc = *(undefined4 *)(iVar2 + 0xc);
                  local_e0 = *puVar15;
                  local_d8 = *piVar23;
                  local_c0 = *(undefined4 *)(iVar2 + 0x28);
                  *(undefined4 **)(param_2 + 0x24) = &local_e8;
                  local_94 = 0;
                  local_a0 = 0;
                  local_a8 = 0;
                  local_b8 = 0;
                  local_98 = 0;
                  FUN_00516634(param_1,param_2);
                  *(int *)(param_2 + 0x24) = iVar2;
                  if (local_e4 != 0) {
                    fios::print_tty4(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_e0,
                                     PTR_s_closing_file_0071aa8c,local_e4);
                  }
                  iVar16 = piVar9[0x1e];
                  iVar4 = piVar9[0x1a];
                  *(undefined8 *)(iVar2 + 0x20) = *(undefined8 *)(piVar9 + 0x18);
                  uVar19 = *(undefined8 *)(piVar9 + 0x66);
                  iVar5 = piVar9[0x14];
                  iVar6 = piVar9[0x15];
                  iVar10 = piVar9[0x16];
                  piVar9[0x1e] = iVar16 + 1;
                  *(int *)(iVar2 + 0x28) = iVar4;
                  *(undefined4 *)(iVar2 + 4) = 0;
                  *piVar23 = iVar5;
                  *(int *)(iVar2 + 0x14) = iVar6;
                  *(int *)(iVar2 + 0x18) = iVar10;
                  *(undefined8 *)(iVar2 + 0x48) = uVar19;
                  FUN_0052cc20(piVar14);
                  return;
                }
                break;
              }
              piVar9 = (int *)*piVar9;
            } while (piVar9 != (int *)0x0);
          }
          if (param_1[0x46] == 0) {
            piVar23 = (int *)*piVar11;
            while (piVar25 = piVar23, piVar25 != (int *)0x0) {
              piVar11 = piVar25;
              piVar23 = (int *)*piVar25;
            }
            *piVar11 = (int)piVar17;
          }
          else {
            *piVar17 = (int)piVar22;
            *piVar11 = (int)piVar17;
          }
          fios::lwmutex_lock_checked(param_1 + 0x90);
          libc::memset(param_1 + 0x9a,0,0x860);
          fios::lwmutex_unlock_checked(param_1 + 0x90);
          FUN_0052cc20(piVar14);
          return;
        }
        *(int *)(iVar2 + 4) = local_13c;
        fios::print_tty4(puVar12,local_138,PTR_DAT_0071aa88,local_13c);
      }
    }
  }
  if (piVar17[0x20] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
              (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17[0x20],0x10610200,0,0);
  }
  FUN_00530770(piVar25);
  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
            (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17,0x10600103,0,0);
LAB_005181d0:
  local_1ec = -0x7ffef8ff;
  local_1f0 = 0xd;
  local_1d0 = *(undefined8 *)(iVar2 + 0x20);
  local_1dc = *(undefined4 *)(iVar2 + 0x14);
  local_1d8 = *(undefined4 *)(iVar2 + 0x18);
  local_1e4 = *(undefined4 *)(iVar2 + 0xc);
  local_1e8 = *puVar15;
  local_1e0 = *piVar23;
  local_1c8 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 **)(param_2 + 0x24) = &local_1f0;
  local_19c = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  FUN_00516634(param_1,param_2);
  *(int *)(param_2 + 0x24) = iVar2;
  if (local_1ec != 0) {
    fios::print_tty4(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_1e8,
                     PTR_s_closing_file_0071aa8c,local_1ec);
  }
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *piVar23 = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined8 *)(iVar2 + 0x20) = 0;
  return;
}



//==== 005189a8  ns=Global  size=0x1c4
// sig: undefined FUN_005189a8(void)
// callers(0): 
// callees(0): 

void FUN_005189a8(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x45) == '\0') {
    if ((*(ushort *)(param_2 + 0x28) & 1) != 0) {
      (*(code *)**(undefined4 **)(*param_1 + 8))(param_1,param_2);
      return;
    }
    puVar1 = *(uint **)(param_2 + 0x24);
    puVar1[1] = 0x80010701;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    if (*puVar1 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x00518a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_DAT_0071aa90 + *(int *)(PTR_DAT_0071aa90 + *puVar1 * 4)))();
      return;
    }
    if (((*puVar1 == 0x10) && (puVar1[4] == 0)) && ((int *)puVar1[5] == param_1)) {
      puVar1[1] = 0;
      return;
    }
    piVar2 = (int *)param_1[0x10];
  }
  else {
    piVar2 = *(int **)(param_2 + 0x24);
    if (((*piVar2 == 0x10) && (piVar2[4] == 0)) && ((int *)piVar2[5] == param_1)) {
      piVar2[1] = 0;
      return;
    }
    piVar2 = (int *)param_1[0x10];
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_2);
  return;
}



//==== 00518fcc  ns=Global  size=0xc
// sig: undefined FUN_00518fcc(void)
// callers(1): 0051ef8c FUN_0051ef8c
// callees(0): 

undefined1 FUN_00518fcc(void)

{
  return *PTR_DAT_0071aaa0;
}



//==== 00518fd8  ns=Global  size=0xc
// sig: undefined FUN_00518fd8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00518fd8(void)

{
  return *(undefined4 *)(PTR_DAT_0071aaa4 + 8);
}



//==== 00518fe4  ns=Global  size=0x8
// sig: undefined FUN_00518fe4(void)
// callers(0): 
// callees(0): 

undefined * FUN_00518fe4(void)

{
  return PTR_DAT_0071aaa4;
}



//==== 00518fec  ns=fios  size=0x164
// sig: undefined hash_buff(void)
// callers(2): 00519204 FUN_00519204; 0051c8d4 fios::hash_path_string
// callees(0): 

ulonglong fios::hash_buff(byte *param_1,uint param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (param_1 != (byte *)0x0)) {
    uVar3 = ((ulonglong)param_2 << 0x20) >> 0x22;
    uVar2 = (ulonglong)param_2;
    pbVar1 = param_1;
    if (param_2 >> 2 != 0) {
      do {
        uVar2 = (ulonglong)pbVar1[1] * 0x100 + (ulonglong)*pbVar1 + uVar2;
        uVar2 = uVar2 ^ ((ulonglong)pbVar1[3] * 0x100 + (ulonglong)pbVar1[2]) * 0x800 ^
                (uVar2 & 0xffff) << 0x10;
        uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x2b);
        uVar3 = uVar3 - 1;
        pbVar1 = pbVar1 + 4;
      } while (uVar3 != 0);
      param_1 = param_1 + (param_2 & 0xfffffffc);
    }
    param_2 = param_2 & 3;
    if (param_2 == 2) {
      uVar2 = (ulonglong)param_1[1] * 0x100 + (ulonglong)*param_1 + uVar2;
      uVar2 = uVar2 ^ (uVar2 & 0x1fffff) << 0xb;
      uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x31);
    }
    else if (param_2 == 3) {
      uVar2 = (ulonglong)param_1[1] * 0x100 + (ulonglong)*param_1 + uVar2;
      uVar2 = (uVar2 & 0xffff) << 0x10 ^ uVar2 ^ ((longlong)(char)param_1[2] & 0x3fffU) << 0x12;
      uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x2b);
    }
    else if (param_2 == 1) {
      uVar2 = (longlong)(char)*param_1 + uVar2 ^ ((longlong)(char)*param_1 + uVar2 & 0x3fffff) << 10
      ;
      uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x21);
    }
    uVar2 = uVar2 ^ (uVar2 & 0x1fffffff) << 3;
    uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x25);
    uVar2 = uVar2 ^ (uVar2 & 0x3fffffff) << 2;
    uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x2f);
    return (uVar2 ^ (uVar2 & 0x3fffff) << 10) & 0xffffffff;
  }
  return 0;
}



//==== 00519150  ns=Global  size=0xb4
// sig: undefined FUN_00519150(void)
// callers(1): 00532d1c FUN_00532d1c
// callees(0): 

void FUN_00519150(ulonglong param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071aab0;
  uVar4 = ((param_1 & 0x7ff) + 0x7ff | param_1) & 0xfffffffffffff800;
  if (((longlong)param_1 >> 0x35) + 1U < 2) {
    uVar4 = param_1;
  }
  fVar1 = (float)(longlong)uVar4;
  bVar5 = fVar1 < DAT_0071aab4;
  if (bVar5) {
    fVar1 = -fVar1;
  }
  iVar3 = 0;
  if (DAT_0071aaa8 <= fVar1) {
    lVar6 = 8;
    do {
      fVar1 = fVar1 * DAT_0071aaac;
      iVar3 = iVar3 + 1;
      if (fVar1 < DAT_0071aaa8) break;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (bVar5) {
    fVar1 = -fVar1;
  }
  *param_2 = fVar1;
  *param_3 = *(undefined4 *)(puVar2 + iVar3 * 4);
  return;
}



//==== 00519204  ns=Global  size=0x38
// sig: undefined FUN_00519204(void)
// callers(0): 
// callees(2): 00518fec fios::hash_buff; 005c8510 libc::strlen

void FUN_00519204(undefined8 param_1)

{
  size_t sVar1;
  
  sVar1 = libc::strlen((char *)param_1);
  fios::hash_buff(param_1,sVar1);
  return;
}



//==== 0051923c  ns=Global  size=0xd4
// sig: undefined FUN_0051923c(void)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 005ccb28 FUN_005ccb28

char * FUN_0051923c(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  
  sVar2 = libc::strlen(param_2);
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    while (sVar2 < param_3) {
      param_3 = param_3 - 1;
      if (*param_1 == '\0') break;
      if ((cVar1 == *param_1) && (iVar3 = FUN_005ccb28(param_1,param_2,sVar2), iVar3 == 0)) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}



//==== 00519310  ns=Global  size=0xbc
// sig: undefined FUN_00519310(void)
// callers(1): 005111e4 FUN_005111e4
// callees(2): 005c8510 libc::strlen; 005cccec libc::strcpy

int FUN_00519310(char *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  
  sVar1 = libc::strlen(param_1);
  iVar4 = param_3 - (sVar1 + 1);
  if (sVar1 + 1 < param_3) {
    iVar2 = libc::strcpy(param_1 + sVar1,param_2,iVar4);
    *(undefined1 *)(iVar2 + iVar4) = 0;
  }
  sVar3 = libc::strlen(param_2);
  return sVar1 + 1 + sVar3 + -1;
}



//==== 005193cc  ns=Global  size=0x78
// sig: undefined FUN_005193cc(void)
// callers(23): 00510cec FUN_00510cec; 00510f38 FUN_00510f38; 005111e4 FUN_005111e4; 00515a1c FUN_00515a1c; 005177d8 FUN_005177d8; 00517d4c FUN_00517d4c; 00519aa4 FUN_00519aa4; 00519c8c FUN_00519c8c; 0051b440 FUN_0051b440; 0051ca84 FUN_0051ca84; 0051cab4 FUN_0051cab4; 0051cb08 FUN_0051cb08; 0051daac FUN_0051daac; 00520d80 FUN_00520d80; 00528914 FUN_00528914; 00528c7c FUN_00528c7c; 00528fc8 FUN_00528fc8; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052d478 FUN_0052d478; 0052e0b8 FUN_0052e0b8; 00530f80 FUN_00530f80; 00532848 FUN_00532848
// callees(2): 005c8510 libc::strlen; 005cccec libc::strcpy

size_t FUN_005193cc(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if (param_3 != 0) {
    iVar1 = libc::strcpy(param_1,param_2,param_3 + -1);
    *(undefined1 *)(iVar1 + param_3 + -1) = 0;
  }
  sVar2 = libc::strlen(param_2);
  return sVar2;
}



//==== 00519444  ns=Global  size=0xac
// sig: undefined FUN_00519444(void)
// callers(0): 
// callees(5): 0051a26c FUN_0051a26c; 0051b8c4 FUN_0051b8c4; 00528b98 FUN_00528b98; 0052cbd8 fios::print_tty4; 005d0140 libc::memset
// strings: 00667888: '1.3.2' | 00667870: 'FIOS %s terminated\n'

void FUN_00519444(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0071aaa0;
  if (*PTR_DAT_0071aaa0 == '\0') {
    return;
  }
  FUN_0051a26c();
  FUN_0051b8c4();
  FUN_00528b98();
  puVar2 = PTR_DAT_0071aaa4;
  if (PTR_DAT_0071aaa4[0x44] == '\0') {
    fios::print_tty4(PTR_s_FIOS__s_terminated_0071aab8,PTR_s_1_3_2_0071aabc);
  }
  libc::memset(puVar2,0,0x44);
  *puVar1 = 0;
  return;
}



//==== 005194f0  ns=Global  size=0x1c0
// sig: undefined FUN_005194f0(void)
// callers(2): 0001401c boot::boot; 005196b0 FUN_005196b0
// callees(5): 0051a2f4 FUN_0051a2f4; 0051ba44 fios::trace_markers_alloc; 0052cbd8 fios::print_tty4; 0052ea40 FUN_0052ea40; 005c5ad0 libc::memcpy
// strings: 00667890: 'FIOSInit: invalid version/size in parameters! Header may not match the compiled library. Initialization failed.\n' | 00667888: '1.3.2' | 00667908: 'FIOS %s initialized\n'

void FUN_005194f0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  int iVar6;
  ushort uVar8;
  int *piVar7;
  int iVar9;
  longlong lVar10;
  undefined *local_20 [4];
  
  puVar4 = PTR_DAT_0071aaa4;
  puVar3 = PTR_DAT_0071aaa0;
  if ((*PTR_DAT_0071aaa0 == '\0') && (param_1[2] != 0)) {
    if ((param_1[1] == 0x1324000) && (*param_1 == 0x44)) {
      pvVar5 = libc::memcpy(PTR_DAT_0071aaa4,param_1,0x44);
      uVar8 = *(ushort *)(puVar4 + 0xc);
      if (0xff < (ushort)(uVar8 - 1)) {
        uVar8 = 0x100;
        *(undefined2 *)(puVar4 + 0xc) = 0x100;
      }
      if ((uVar8 & 1) != 0) {
        *(ushort *)(puVar4 + 0xc) = uVar8 + 1;
      }
      if (*(int *)(puVar4 + 0x10) == 0) {
        *(undefined **)(puVar4 + 0x10) = PTR_PTR_0071aac4;
      }
      local_20[0] = puVar4 + 100;
      local_20[1] = puVar4 + 0x78;
      local_20[2] = puVar4 + 0x1c;
      local_20[3] = puVar4 + 0x30;
      iVar6 = 0;
      do {
        iVar9 = 0;
        lVar10 = 5;
        iVar2 = *(int *)((int)local_20 + iVar6 + 8);
        do {
          piVar7 = (int *)(iVar9 + iVar2);
          if (*piVar7 == 0) {
            *piVar7 = *(int *)(iVar9 + *(int *)((int)local_20 + iVar6));
          }
          iVar9 = iVar9 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        bVar1 = iVar6 != 4;
        iVar6 = iVar6 + 4;
      } while (bVar1);
      FUN_0052ea40(pvVar5);
      fios::trace_markers_alloc(0,0);
      FUN_0051a2f4();
      if (puVar4[0x44] == '\0') {
        fios::print_tty4(PTR_s_FIOS__s_initialized_0071aac8,PTR_s_1_3_2_0071aabc);
      }
      *puVar3 = 1;
      return;
    }
    fios::print_tty4(PTR_s_FIOSInit__invalid_version_size_i_0071aac0);
  }
  return;
}



//==== 005196b0  ns=Global  size=0x5c
// sig: undefined FUN_005196b0(void)
// callers(0): 
// callees(2): 005194f0 FUN_005194f0; 005c5ad0 libc::memcpy

void FUN_005196b0(void)

{
  undefined1 auStack_70 [80];
  
  libc::memcpy(auStack_70,PTR_DAT_0071aaa4 + 0x48,0x44);
  FUN_005194f0(auStack_70);
  return;
}



//==== 0051970c  ns=Global  size=0xd0
// sig: undefined FUN_0051970c(void)
// callers(0): 
// callees(0): 

int FUN_0051970c(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int iVar7;
  
  iVar3 = *(int *)PTR_PTR_0071aacc;
  while( true ) {
    cVar1 = *param_1;
    iVar6 = (int)cVar1;
    iVar7 = (int)cVar1;
    bVar4 = (*(ushort *)(iVar6 * 2 + iVar3) & 2) != 0;
    iVar5 = iVar7;
    if (bVar4) {
      iVar5 = iVar6 + 0x20;
    }
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    iVar8 = (int)cVar2;
    if ((*(ushort *)(cVar2 * 2 + iVar3) & 2) != 0) {
      iVar8 = cVar2 + 0x20;
    }
    if (iVar8 != iVar5) break;
    if ((cVar1 == '\0') || (param_3 = param_3 + -1, param_2 = param_2 + 1, param_3 == 0)) {
      return 0;
    }
  }
  if (bVar4) {
    iVar7 = iVar6 + 0x20;
  }
  cVar1 = *param_2;
  iVar5 = (int)cVar1;
  if ((*(ushort *)(cVar1 * 2 + iVar3) & 2) != 0) {
    iVar5 = cVar1 + 0x20;
  }
  return iVar7 - iVar5;
}



//==== 005197dc  ns=Global  size=0x100
// sig: undefined FUN_005197dc(void)
// callers(2): 00516bcc FUN_00516bcc; 0051a528 FUN_0051a528
// callees(0): 

int FUN_005197dc(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar6;
  
  iVar7 = *(int *)PTR_PTR_0071aacc;
  while( true ) {
    cVar1 = *param_1;
    iVar5 = (int)cVar1;
    iVar6 = (int)cVar1;
    bVar4 = (*(ushort *)(iVar5 * 2 + iVar7) & 2) != 0;
    iVar8 = iVar6;
    if (bVar4) {
      iVar8 = iVar5 + 0x20;
    }
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    iVar9 = (int)cVar2;
    if ((*(ushort *)(cVar2 * 2 + iVar7) & 2) != 0) {
      iVar9 = cVar2 + 0x20;
    }
    if (iVar8 != iVar9) break;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (bVar4) {
    iVar6 = iVar5 + 0x20;
    cVar1 = *param_2;
    uVar3 = *(ushort *)(cVar1 * 2 + iVar7);
  }
  else {
    cVar1 = *param_2;
    uVar3 = *(ushort *)(cVar1 * 2 + iVar7);
  }
  if ((uVar3 & 2) == 0) {
    iVar7 = (int)cVar1;
  }
  else {
    iVar7 = cVar1 + 0x20;
  }
  return iVar6 - iVar7;
}



//==== 005198dc  ns=Global  size=0x40
// sig: undefined FUN_005198dc(void)
// callers(2): 0051991c FUN_0051991c; 0051992c FUN_0051992c
// callees(0): 

void FUN_005198dc(int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071aad0;
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  *(undefined4 *)(PTR_DAT_0071aad0 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  return;
}



//==== 0051991c  ns=Global  size=0x10
// sig: undefined FUN_0051991c(void)
// callers(0): 
// callees(1): 005198dc FUN_005198dc

void FUN_0051991c(void)

{
  FUN_005198dc(1,0xffff);
  return;
}



//==== 0051992c  ns=Global  size=0x10
// sig: undefined FUN_0051992c(void)
// callers(0): 
// callees(1): 005198dc FUN_005198dc

void FUN_0051992c(void)

{
  FUN_005198dc(0,0xffff);
  return;
}



//==== 0051993c  ns=Global  size=0x70
// sig: undefined FUN_0051993c(void)
// callers(1): 0051a528 FUN_0051a528
// callees(1): 00604710 FUN_00604710

void FUN_0051993c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00604710();
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x50);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x58);
  }
  return;
}



//==== 005199ac  ns=Global  size=0xf8
// sig: undefined FUN_005199ac(void)
// callers(5): 0051a2f4 FUN_0051a2f4; 0051a528 FUN_0051a528; 0051a754 FUN_0051a754; 0051ad94 FUN_0051ad94; 0051b3cc FUN_0051b3cc
// callees(4): 00510704 FUN_00510704; 0051080c FUN_0051080c; 0052d370 FUN_0052d370; 0052df14 FUN_0052df14
// strings: 00667988: 's_mediaListLock'

void FUN_005199ac(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = PTR_DAT_0071aad0;
  uVar4 = ZEXT48(PTR_DAT_0071aad0);
  instructionSynchronize();
  if (*(int *)PTR_DAT_0071aad0 == 0) {
    uVar3 = FUN_0051080c(0x28,0x10420000,3);
    FUN_0052d370(uVar3 & 0xffffffff,PTR_s_s_mediaListLock_0071aad4);
    do {
      if (*(int *)puVar2 != 0) {
        if ((int)uVar3 == 0) {
          return;
        }
        FUN_0052df14(uVar3 & 0xffffffff);
        FUN_00510704(uVar3 & 0xffffffff,0x10420000,3);
        return;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar3,0,uVar4);
        *(undefined4 *)puVar2 = uVar1;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
  }
  return;
}



//==== 00519aa4  ns=Global  size=0x1e8
// sig: undefined FUN_00519aa4(void)
// callers(0): 
// callees(5): 005106cc FUN_005106cc; 005193cc FUN_005193cc; 0052d370 FUN_0052d370; 005c8510 libc::strlen; 00604710 FUN_00604710
// strings: 00667998: 'media.m_objectLock'

void FUN_00519aa4(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  
  FUN_005106cc(param_1 + 1);
  puVar2 = PTR_s_media_m_objectLock_0071aadc;
  *param_1 = PTR_PTR_0071aad8;
  FUN_0052d370(param_1 + 4,puVar2);
  param_1[0x11] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00604710(param_1);
  puVar2 = PTR_DAT_0071aae0;
  param_1[2] = 0x6d646961;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  puVar3 = *(undefined4 **)(puVar2 + 8);
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)*puVar3)(puVar3,0x10,0x10010102,0,0);
  param_1[0x16] = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  if (param_2 != (char *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 8);
    sVar4 = libc::strlen(param_2);
    piVar1 = (int *)param_1[0x16];
    iVar5 = (*(code *)**(undefined4 **)*puVar3)(puVar3,sVar4 + 1,0x10020100,0,0);
    *piVar1 = iVar5;
    if (iVar5 != 0) {
      sVar4 = libc::strlen(param_2);
      FUN_005193cc(*(undefined4 *)param_1[0x16],param_2,sVar4 + 1);
    }
  }
  return;
}



//==== 00519c8c  ns=Global  size=0x1e8
// sig: undefined FUN_00519c8c(void)
// callers(4): 00519e74 FUN_00519e74; 00519ecc FUN_00519ecc; 00528914 FUN_00528914; 00528c7c FUN_00528c7c
// callees(5): 005106cc FUN_005106cc; 005193cc FUN_005193cc; 0052d370 FUN_0052d370; 005c8510 libc::strlen; 00604710 FUN_00604710
// strings: 00667998: 'media.m_objectLock'

void FUN_00519c8c(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  
  FUN_005106cc(param_1 + 1);
  puVar2 = PTR_s_media_m_objectLock_0071aadc;
  *param_1 = PTR_PTR_0071aad8;
  FUN_0052d370(param_1 + 4,puVar2);
  param_1[0x11] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00604710(param_1);
  puVar2 = PTR_DAT_0071aae0;
  param_1[2] = 0x6d646961;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  puVar3 = *(undefined4 **)(puVar2 + 8);
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)*puVar3)(puVar3,0x10,0x10010102,0,0);
  param_1[0x16] = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  if (param_2 != (char *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 8);
    sVar4 = libc::strlen(param_2);
    piVar1 = (int *)param_1[0x16];
    iVar5 = (*(code *)**(undefined4 **)*puVar3)(puVar3,sVar4 + 1,0x10020100,0,0);
    *piVar1 = iVar5;
    if (iVar5 != 0) {
      sVar4 = libc::strlen(param_2);
      FUN_005193cc(*(undefined4 *)param_1[0x16],param_2,sVar4 + 1);
    }
  }
  return;
}



//==== 00519e74  ns=Global  size=0x58
// sig: undefined FUN_00519e74(void)
// callers(0): 
// callees(1): 00519c8c FUN_00519c8c

void FUN_00519e74(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  FUN_00519c8c();
  puVar1 = PTR_PTR_0071aae4;
  param_1[0x10] = param_3;
  *param_1 = puVar1;
  if (param_3 != 0) {
    *(undefined4 **)(param_3 + 0x3c) = param_1;
  }
  return;
}



//==== 00519ecc  ns=Global  size=0x58
// sig: undefined FUN_00519ecc(void)
// callers(8): 005118e8 FUN_005118e8; 00511a80 FUN_00511a80; 00511c34 FUN_00511c34; 00511de8 FUN_00511de8; 00511f8c FUN_00511f8c; 00512130 FUN_00512130; 00531338 FUN_00531338; 00531b40 FUN_00531b40
// callees(1): 00519c8c FUN_00519c8c

void FUN_00519ecc(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  FUN_00519c8c();
  puVar1 = PTR_PTR_0071aae4;
  param_1[0x10] = param_3;
  *param_1 = puVar1;
  if (param_3 != 0) {
    *(undefined4 **)(param_3 + 0x3c) = param_1;
  }
  return;
}



//==== 00519f24  ns=Global  size=0x200
// sig: undefined FUN_00519f24(void)
// callers(3): 0051fa5c FUN_0051fa5c; 0051ff58 FUN_0051ff58; 0053299c FUN_0053299c
// callees(0): 

undefined4 FUN_00519f24(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  if ((param_1[1] == 0x3a) &&
     ((((((ulonglong)*param_1 << 0x20) >> 0x26) << 6 | (ulonglong)*param_1 & 0x1f) - 0x41 & 0xff) <
      0x1a)) {
    return 0;
  }
  bVar4 = 0x2f;
  pbVar2 = param_2;
  do {
    pbVar1 = param_1;
    if ((bVar4 == 0x5c) || (bVar4 == 0x2f)) {
      bVar4 = *param_1;
      if ((-1 < (longlong)(((ulonglong)bVar4 ^ 0x2f) - 1) &&
          -1 < (longlong)(((ulonglong)bVar4 ^ 0x5c) - 1)) && -1 < (longlong)((ulonglong)bVar4 - 1))
      {
        if (bVar4 == 0x2e) {
          pbVar1 = param_1 + 1;
          bVar4 = *pbVar1;
          if ((-1 < (longlong)(((ulonglong)bVar4 ^ 0x2f) - 1) &&
              -1 < (longlong)(((ulonglong)bVar4 ^ 0x5c) - 1)) &&
              -1 < (longlong)((ulonglong)bVar4 - 1)) {
            if ((bVar4 != 0x2e) ||
               (pbVar1 = param_1 + 2, bVar4 = *pbVar1,
               (-1 < (longlong)(((ulonglong)bVar4 ^ 0x2f) - 1) &&
               -1 < (longlong)(((ulonglong)bVar4 ^ 0x5c) - 1)) &&
               -1 < (longlong)((ulonglong)bVar4 - 1))) goto LAB_00519fcc;
            if (param_2 == pbVar2) {
              return 0;
            }
            iVar3 = (int)pbVar2 - (int)param_2;
            if ((pbVar2 + -1 < param_2) || (param_2 == (byte *)0xffffffff)) {
              iVar3 = 1;
            }
            do {
              pbVar2 = pbVar2 + -1;
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) break;
            } while (*pbVar2 != 0x2f);
          }
        }
        else {
LAB_00519fcc:
          *pbVar2 = 0x2f;
          pbVar1 = param_1;
          pbVar2 = pbVar2 + 1;
        }
      }
    }
    else {
      *pbVar2 = bVar4;
      pbVar2 = pbVar2 + 1;
    }
    if (param_2 + 0x100 <= pbVar2) {
      return 0;
    }
    bVar4 = *pbVar1;
    if (bVar4 == 0) {
      pbVar1 = pbVar2;
      if (pbVar2 == param_2) {
        pbVar1 = pbVar2 + 1;
        *pbVar2 = 0x2f;
      }
      *pbVar1 = 0;
      return 1;
    }
    param_1 = pbVar1 + 1;
  } while( true );
}



//==== 0051a124  ns=Global  size=0x148
// sig: undefined FUN_0051a124(void)
// callers(2): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc
// callees(2): 0051c8d4 fios::hash_path_string; 00604710 FUN_00604710

void FUN_0051a124(int *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auStack_e0 [64];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 auStack_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined2 local_4c;
  
  FUN_00604710();
  local_a0 = ZEXT816(0);
  local_90 = (undefined1  [16])0x0;
  local_50 = 0;
  local_4c = 0;
  local_80 = (undefined1  [16])0x0;
  auStack_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar2 = fios::hash_path_string(0);
  auVar1 = local_90;
  local_a0._12_4_ = uVar2;
  local_80._8_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0x20);
  local_90._4_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0xc);
  local_90._0_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 8);
  local_90._12_4_ = auVar1._12_4_;
  local_90._8_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0x10);
  local_80._0_8_ = *(undefined8 *)(PTR_DAT_0071aad0 + 0x18);
  local_60._0_8_ = ((ulonglong)(uint)param_1[0x23] & 0x1fffffff) << 3;
  local_a0._4_4_ = 0x80010701;
  local_a0._0_4_ = 1;
  local_50 = param_2;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,auStack_e0);
  return;
}



//==== 0051a26c  ns=Global  size=0x88
// sig: undefined FUN_0051a26c(void)
// callers(1): 00519444 FUN_00519444
// callees(2): 00510704 FUN_00510704; 0052df14 FUN_0052df14

void FUN_0051a26c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = PTR_DAT_0071aad0;
  uVar4 = ZEXT48(PTR_DAT_0071aad0);
  do {
    iVar1 = *(int *)puVar3;
    instructionSynchronize();
    if (iVar1 == 0) {
      return;
    }
    while (iVar1 == *(int *)puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar4);
        *(undefined4 *)puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        FUN_0052df14(iVar1);
        FUN_00510704(iVar1,0x10420000,3);
        return;
      }
    }
  } while( true );
}



//==== 0051a2f4  ns=Global  size=0x68
// sig: undefined FUN_0051a2f4(void)
// callers(1): 005194f0 FUN_005194f0
// callees(3): 005199ac FUN_005199ac; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

undefined4 FUN_0051a2f4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  FUN_005199ac();
  puVar3 = PTR_DAT_0071aad0;
  uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
  instructionSynchronize();
  fios::lwmutex_lock_checked(uVar1);
  uVar2 = *(undefined4 *)(puVar3 + 0x28);
  fios::lwmutex_unlock_checked(uVar1);
  return uVar2;
}



//==== 0051a35c  ns=Global  size=0x88
// sig: undefined FUN_0051a35c(void)
// callers(1): 0051a3e4 FUN_0051a3e4
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

undefined4 FUN_0051a35c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_00604710(param_1);
  fios::lwmutex_lock_checked(param_1 + 0x10);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  fios::lwmutex_unlock_checked(param_1 + 0x10);
  return uVar1;
}



//==== 0051a3e4  ns=Global  size=0x9c
// sig: undefined FUN_0051a3e4(void)
// callers(1): 00529808 FUN_00529808
// callees(2): 0051a35c FUN_0051a35c; 00604710 FUN_00604710

undefined4 FUN_0051a3e4(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_30 [24];
  
  FUN_00604710();
  puVar1 = (undefined4 *)FUN_0051a35c(param_1,local_30);
  uVar2 = 0x8001070c;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (*(code *)*puVar1)(0,param_1,param_2,param_3);
  }
  return uVar2;
}



//==== 0051a480  ns=Global  size=0xa8
// sig: undefined FUN_0051a480(void)
// callers(5): 0051ef8c FUN_0051ef8c; 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc; 00529808 FUN_00529808
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

int FUN_0051a480(int param_1)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = param_1 + 0x10;
    FUN_00604710(param_1);
    fios::lwmutex_lock_checked(iVar2);
    iVar1 = *(int *)(param_1 + 0x44);
    if ((iVar1 != 0) || (param_1 = *(int *)(param_1 + 0x3c), param_1 == 0)) break;
    fios::lwmutex_unlock_checked(iVar2);
  }
  fios::lwmutex_unlock_checked(iVar2);
  return iVar1;
}



//==== 0051a528  ns=Global  size=0x148
// sig: undefined FUN_0051a528(void)
// callers(1): 0051a670 FUN_0051a670
// callees(5): 005197dc FUN_005197dc; 0051993c FUN_0051993c; 005199ac FUN_005199ac; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

/* WARNING: Removing unreachable block (ram,0x0051a5dc) */
/* WARNING: Removing unreachable block (ram,0x0051a5ec) */
/* WARNING: Removing unreachable block (ram,0x0051a640) */

undefined4 FUN_0051a528(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 local_50 [4];
  undefined1 local_4c [12];
  
  if (param_1 != 0) {
    FUN_005199ac();
    puVar3 = PTR_DAT_0071aad0;
    uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
    instructionSynchronize();
    fios::lwmutex_lock_checked(uVar1);
    iVar2 = *(int *)(puVar3 + 0x28);
    if (iVar2 != 0) {
      do {
        FUN_0051993c(iVar2,local_50,local_4c);
        iVar2 = *(int *)(iVar2 + 0x38);
      } while (iVar2 != 0);
    }
    fios::lwmutex_unlock_checked(uVar1);
  }
  return 0;
}



//==== 0051a670  ns=Global  size=0xe4
// sig: undefined FUN_0051a670(void)
// callers(0): 
// callees(3): 0051a528 FUN_0051a528; 005c5ad0 libc::memcpy; 005cc578 libc::strchr

undefined4 FUN_0051a670(char *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *__dest;
  char *pcVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  size_t __n;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar2 = (ulonglong *)lVar1;
  *puVar2 = ZEXT48(&stack0x00000000);
  puVar2[0x12] = unaff_r30;
  puVar2[0xf] = unaff_r27;
  puVar2[0x10] = unaff_r28;
  puVar2[0x13] = unaff_r31;
  puVar2[0x16] = in_LR;
  puVar2[0x11] = unaff_r29;
  pcVar3 = libc::strchr(param_1,param_3);
  __n = (int)pcVar3 - (int)param_1;
  uVar4 = 0;
  if (pcVar3 != (char *)0x0) {
    uVar5 = *puVar2;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pcVar3 + 1;
    }
    lVar1 = lVar1 - ((ulonglong)(__n + 1) + 0x1e & 0xfffffffffffffff0);
    *(ulonglong *)lVar1 = uVar5;
    uVar5 = lVar1 + 0x70;
    __dest = (void *)uVar5;
    libc::memcpy(__dest,param_1,__n);
    *(undefined1 *)((int)__dest + __n) = 0;
    uVar4 = FUN_0051a528(uVar5 & 0xffffffff);
  }
  return uVar4;
}



//==== 0051a754  ns=Global  size=0x104
// sig: undefined FUN_0051a754(void)
// callers(3): 0051a858 FUN_0051a858; 0051a9f0 FUN_0051a9f0; 0051ab68 FUN_0051ab68
// callees(4): 005199ac FUN_005199ac; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

void FUN_0051a754(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  FUN_00604710(param_1);
  FUN_005199ac();
  puVar3 = PTR_DAT_0071aad0;
  uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
  instructionSynchronize();
  fios::lwmutex_lock_checked(uVar1);
  iVar2 = *(int *)(puVar3 + 0x28);
  if (iVar2 == 0) {
    piVar4 = (int *)(puVar3 + 0x28);
LAB_0051a7d8:
    if (param_1 != 0) {
      fios::lwmutex_unlock_checked(uVar1);
      return;
    }
  }
  else if (param_1 == iVar2) {
    piVar4 = (int *)(puVar3 + 0x28);
  }
  else {
    do {
      piVar4 = (int *)(iVar2 + 0x38);
      iVar2 = *piVar4;
      if (iVar2 == 0) goto LAB_0051a7d8;
    } while (param_1 != iVar2);
  }
  *piVar4 = *(int *)(param_1 + 0x38);
  fios::lwmutex_unlock_checked(uVar1);
  return;
}



//==== 0051a858  ns=Global  size=0x198
// sig: undefined FUN_0051a858(void)
// callers(0): 
// callees(5): 00510704 FUN_00510704; 005107d0 fios::handle_invalidate_magic; 0051a754 FUN_0051a754; 0052df14 FUN_0052df14; 00604710 FUN_00604710

void FUN_0051a858(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = PTR_PTR_0071aad8;
  FUN_00604710(param_1);
  FUN_0051a754(param_1);
  puVar4 = PTR_DAT_0071aae0;
  iVar5 = param_1[0x16];
  if (iVar5 != 0) {
    uVar6 = param_1[0x14];
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        iVar3 = (int)((uVar7 & 0xffffffff) << 2);
        uVar7 = uVar7 + 1;
        iVar1 = *(int *)(iVar3 + iVar5);
        if (iVar1 != 0) {
          piVar2 = *(int **)(puVar4 + 8);
          (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar1,0x10020100,0,0);
          iVar5 = param_1[0x16];
          uVar6 = param_1[0x14];
        }
        *(undefined4 *)(iVar3 + iVar5) = 0;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
    piVar2 = *(int **)(puVar4 + 8);
    (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar5,0x10010102,0,0);
    param_1[0x16] = 0;
  }
  FUN_0052df14(param_1 + 4);
  fios::handle_invalidate_magic(param_1 + 1);
  FUN_00510704(param_1,0x10000100,2);
  return;
}



//==== 0051a9f0  ns=Global  size=0x178
// sig: undefined FUN_0051a9f0(void)
// callers(0): 
// callees(4): 005107d0 fios::handle_invalidate_magic; 0051a754 FUN_0051a754; 0052df14 FUN_0052df14; 00604710 FUN_00604710

void FUN_0051a9f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = PTR_PTR_0071aad8;
  FUN_00604710(param_1);
  FUN_0051a754(param_1);
  puVar4 = PTR_DAT_0071aae0;
  iVar5 = param_1[0x16];
  if (iVar5 != 0) {
    uVar6 = param_1[0x14];
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        iVar3 = (int)((uVar7 & 0xffffffff) << 2);
        uVar7 = uVar7 + 1;
        iVar1 = *(int *)(iVar3 + iVar5);
        if (iVar1 != 0) {
          piVar2 = *(int **)(puVar4 + 8);
          (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar1,0x10020100,0,0);
          iVar5 = param_1[0x16];
          uVar6 = param_1[0x14];
        }
        *(undefined4 *)(iVar3 + iVar5) = 0;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
    piVar2 = *(int **)(puVar4 + 8);
    (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar5,0x10010102,0,0);
    param_1[0x16] = 0;
  }
  FUN_0052df14(param_1 + 4);
  fios::handle_invalidate_magic(param_1 + 1);
  return;
}



//==== 0051ab68  ns=Global  size=0x178
// sig: undefined FUN_0051ab68(void)
// callers(6): 0051ace0 FUN_0051ace0; 0051ad44 FUN_0051ad44; 0051ad6c FUN_0051ad6c; 00529580 FUN_00529580; 00529628 FUN_00529628; 005296b8 FUN_005296b8
// callees(4): 005107d0 fios::handle_invalidate_magic; 0051a754 FUN_0051a754; 0052df14 FUN_0052df14; 00604710 FUN_00604710

void FUN_0051ab68(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = PTR_PTR_0071aad8;
  FUN_00604710(param_1);
  FUN_0051a754(param_1);
  puVar4 = PTR_DAT_0071aae0;
  iVar5 = param_1[0x16];
  if (iVar5 != 0) {
    uVar6 = param_1[0x14];
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        iVar3 = (int)((uVar7 & 0xffffffff) << 2);
        uVar7 = uVar7 + 1;
        iVar1 = *(int *)(iVar3 + iVar5);
        if (iVar1 != 0) {
          piVar2 = *(int **)(puVar4 + 8);
          (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar1,0x10020100,0,0);
          iVar5 = param_1[0x16];
          uVar6 = param_1[0x14];
        }
        *(undefined4 *)(iVar3 + iVar5) = 0;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
    piVar2 = *(int **)(puVar4 + 8);
    (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,iVar5,0x10010102,0,0);
    param_1[0x16] = 0;
  }
  FUN_0052df14(param_1 + 4);
  fios::handle_invalidate_magic(param_1 + 1);
  return;
}



//==== 0051ace0  ns=Global  size=0x64
// sig: undefined FUN_0051ace0(void)
// callers(0): 
// callees(2): 00510704 FUN_00510704; 0051ab68 FUN_0051ab68

void FUN_0051ace0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aae4;
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 0x3c) = 0;
  }
  FUN_0051ab68();
  FUN_00510704(param_1,0x10000100,2);
  return;
}



//==== 0051ad44  ns=Global  size=0x28
// sig: undefined FUN_0051ad44(void)
// callers(0): 
// callees(1): 0051ab68 FUN_0051ab68

void FUN_0051ad44(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aae4;
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 0x3c) = 0;
  }
  FUN_0051ab68();
  return;
}



//==== 0051ad6c  ns=Global  size=0x28
// sig: undefined FUN_0051ad6c(void)
// callers(6): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c; 0053126c FUN_0053126c; 00532080 FUN_00532080; 00532134 FUN_00532134
// callees(1): 0051ab68 FUN_0051ab68

void FUN_0051ad6c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aae4;
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 0x3c) = 0;
  }
  FUN_0051ab68();
  return;
}



//==== 0051ad94  ns=Global  size=0xd8
// sig: undefined FUN_0051ad94(void)
// callers(1): 006045f8 FUN_006045f8
// callees(4): 005199ac FUN_005199ac; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

void FUN_0051ad94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  FUN_00604710(param_1);
  FUN_005199ac();
  puVar3 = PTR_DAT_0071aad0;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
    instructionSynchronize();
    fios::lwmutex_lock_checked(uVar1);
    iVar2 = *(int *)(puVar3 + 0x28);
    if (iVar2 == 0) {
      piVar4 = (int *)(puVar3 + 0x28);
    }
    else {
      do {
        if (param_1 == iVar2) {
          fios::lwmutex_unlock_checked(uVar1);
          return;
        }
        piVar4 = (int *)(iVar2 + 0x38);
        iVar2 = *piVar4;
      } while (iVar2 != 0);
    }
    *piVar4 = param_1;
    fios::lwmutex_unlock_checked(uVar1);
  }
  return;
}



//==== 0051ae6c  ns=Global  size=0x68
// sig: undefined FUN_0051ae6c(void)
// callers(0): 
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

undefined4 FUN_0051ae6c(int param_1)

{
  undefined4 uVar1;
  
  FUN_00604710(param_1);
  fios::lwmutex_lock_checked(param_1 + 0x10);
  uVar1 = **(undefined4 **)(param_1 + 0x58);
  fios::lwmutex_unlock_checked(param_1 + 0x10);
  return uVar1;
}



//==== 0051aed4  ns=Global  size=0x6c
// sig: undefined FUN_0051aed4(void)
// callers(0): 
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

undefined8 FUN_0051aed4(int param_1)

{
  undefined8 uVar1;
  
  FUN_00604710(param_1);
  fios::lwmutex_lock_checked(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  fios::lwmutex_unlock_checked(param_1 + 0x10);
  return uVar1;
}



//==== 0051af40  ns=Global  size=0x6c
// sig: undefined FUN_0051af40(void)
// callers(0): 
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

void FUN_0051af40(int param_1,undefined8 param_2)

{
  FUN_00604710(param_1);
  fios::lwmutex_lock_checked(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  fios::lwmutex_unlock_checked(param_1 + 0x10);
  return;
}



//==== 0051afac  ns=Global  size=0xc4
// sig: undefined FUN_0051afac(void)
// callers(2): 00528914 FUN_00528914; 00528c7c FUN_00528c7c
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

void FUN_0051afac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  FUN_00604710(param_1);
  fios::lwmutex_lock_checked(param_1 + 0x10);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x5c);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  fios::lwmutex_unlock_checked(param_1 + 0x10);
  return;
}



//==== 0051b070  ns=Global  size=0x17c
// sig: undefined FUN_0051b070(void)
// callers(3): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0051ef8c FUN_0051ef8c
// callees(2): 0051c8d4 fios::hash_path_string; 00604710 FUN_00604710

void FUN_0051b070(int *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auStack_f0 [64];
  undefined1 local_b0 [12];
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined1 local_70 [16];
  int *local_60;
  undefined2 local_5c;
  
  FUN_00604710(param_1);
  local_60 = (int *)0x0;
  local_a0 = (undefined1  [16])0x0;
  local_5c = 0;
  _local_b0 = ZEXT816(0);
  local_90 = (undefined1  [16])0x0;
  auStack_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  uVar2 = fios::hash_path_string(0);
  auVar1 = local_a0;
  local_a4 = uVar2;
  local_70._0_8_ = 0x30;
  local_a0._4_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0xc);
  local_a0._0_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 8);
  local_a0._12_4_ = auVar1._12_4_;
  local_a0._8_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0x10);
  local_90._8_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0x20);
  local_90._0_8_ = *(undefined8 *)(PTR_DAT_0071aad0 + 0x18);
  local_b0._4_4_ = 0x80010701;
  local_b0._0_4_ = 0;
  local_60 = param_1 + 0x1a;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,auStack_f0);
  (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1);
  return;
}



//==== 0051b1ec  ns=Global  size=0x12c
// sig: undefined FUN_0051b1ec(void)
// callers(1): 0051f1f4 FUN_0051f1f4
// callees(2): 0051c8d4 fios::hash_path_string; 00604710 FUN_00604710

void FUN_0051b1ec(int *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auStack_e0 [64];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined2 local_4c;
  
  FUN_00604710();
  local_a0 = ZEXT816(0);
  local_90 = (undefined1  [16])0x0;
  local_50 = 0;
  local_4c = 0;
  local_80 = (undefined1  [16])0x0;
  auStack_70 = (undefined1  [16])0x0;
  auStack_60 = (undefined1  [16])0x0;
  uVar2 = fios::hash_path_string(0);
  auVar1 = local_90;
  local_a0._12_4_ = uVar2;
  local_90._4_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0xc);
  local_90._0_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 8);
  local_90._12_4_ = auVar1._12_4_;
  local_90._8_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0x10);
  local_80._8_4_ = *(undefined4 *)(PTR_DAT_0071aad0 + 0x20);
  local_80._0_8_ = *(undefined8 *)(PTR_DAT_0071aad0 + 0x18);
  local_a0._4_4_ = 0x80010701;
  local_a0._0_4_ = 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,auStack_e0);
  return;
}



//==== 0051b318  ns=Global  size=0xb4
// sig: undefined FUN_0051b318(void)
// callers(5): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

void FUN_0051b318(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x10;
  FUN_00604710(param_1);
  fios::lwmutex_lock_checked(iVar1);
  if ((*(int *)(param_1 + 0x44) != 0) && (param_2 != 0)) {
    fios::lwmutex_unlock_checked(iVar1);
    return;
  }
  *(int *)(param_1 + 0x44) = param_2;
  fios::lwmutex_unlock_checked(iVar1);
  return;
}



//==== 0051b3cc  ns=Global  size=0x74
// sig: undefined FUN_0051b3cc(void)
// callers(0): 
// callees(4): 005199ac FUN_005199ac; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604710 FUN_00604710

undefined4 FUN_0051b3cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00604710();
  FUN_005199ac();
  uVar1 = *(undefined4 *)PTR_DAT_0071aad0;
  instructionSynchronize();
  fios::lwmutex_lock_checked(uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  fios::lwmutex_unlock_checked(uVar1);
  return uVar2;
}



//==== 0051b440  ns=Global  size=0x2d4
// sig: undefined FUN_0051b440(void)
// callers(0): 
// callees(7): 005193cc FUN_005193cc; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005c5ad0 libc::memcpy; 005c8510 libc::strlen; 005d0140 libc::memset; 00604710 FUN_00604710

void FUN_0051b440(int param_1,char *param_2)

{
  void *__src;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  void *__dest;
  size_t sVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_00604710(param_1);
  if (param_2 != (char *)0x0) {
    iVar5 = param_1 + 0x10;
    fios::lwmutex_lock_checked(iVar5);
    puVar4 = PTR_DAT_0071aae0;
    if ((ulonglong)*(uint *)(param_1 + 0x54) < (ulonglong)(*(int *)(param_1 + 0x50) + 1)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x54) + 4;
      __src = *(void **)(param_1 + 0x58);
      lVar9 = (uVar8 & 0x3fffffff) << 2;
      __dest = (void *)(*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071aae0 + 8))
                                 (*(undefined4 **)(PTR_DAT_0071aae0 + 8),lVar9,0x10010100,0,0);
      if (__dest == (void *)0x0) goto LAB_0051b6a0;
      libc::memset(__dest,0,lVar9);
      if (__src == (void *)0x0) {
        libc::memset((void *)(*(uint *)(param_1 + 0x50) * 4 + (int)__dest),0,
                     (uVar8 - *(uint *)(param_1 + 0x50) & 0x3fffffff) << 2);
        *(void **)(param_1 + 0x58) = __dest;
        *(int *)(param_1 + 0x54) = (int)uVar8;
      }
      else {
        libc::memcpy(__dest,__src,*(int *)(param_1 + 0x50) << 2);
        libc::memset((void *)(*(uint *)(param_1 + 0x50) * 4 + (int)__dest),0,
                     (uVar8 - *(uint *)(param_1 + 0x50) & 0x3fffffff) << 2);
        piVar1 = *(int **)(puVar4 + 8);
        *(void **)(param_1 + 0x58) = __dest;
        *(int *)(param_1 + 0x54) = (int)uVar8;
        (*(code *)**(undefined4 **)(*piVar1 + 4))(piVar1,__src,0x10010100,0,0);
      }
    }
    puVar2 = *(undefined4 **)(puVar4 + 8);
    sVar6 = libc::strlen(param_2);
    iVar7 = (*(code *)**(undefined4 **)*puVar2)(puVar2,sVar6 + 1,0x10020100,0,0);
    if (iVar7 == 0) {
LAB_0051b6a0:
      fios::lwmutex_unlock_checked(iVar5);
      return;
    }
    sVar6 = libc::strlen(param_2);
    FUN_005193cc(iVar7,param_2,sVar6 + 1);
    iVar3 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar3 + 1;
    *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x58)) = iVar7;
    fios::lwmutex_unlock_checked(iVar5);
  }
  return;
}



//==== 0051b714  ns=Global  size=0x2c
// sig: undefined FUN_0051b714(void)
// callers(1): 0051b740 FUN_0051b740
// callees(0): 

void FUN_0051b714(int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071aae8;
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  *(undefined4 *)PTR_DAT_0071aae8 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



//==== 0051b740  ns=Global  size=0x10
// sig: undefined FUN_0051b740(void)
// callers(0): 
// callees(1): 0051b714 FUN_0051b714

void FUN_0051b740(void)

{
  FUN_0051b714(1,0xffff);
  return;
}



//==== 0051b750  ns=Global  size=0x34
// sig: undefined FUN_0051b750(void)
// callers(3): 00506c10 FUN_00506c10; 00506f68 FUN_00506f68; 0051c260 FUN_0051c260
// callees(0): 

longlong FUN_0051b750(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (lVar1 < param_1 + lVar1) {
    return param_1 + lVar1;
  }
  return 0x7fffffffffffffff;
}



//==== 0051b784  ns=Global  size=0x140
// sig: undefined FUN_0051b784(void)
// callers(1): 0051be64 fios::op_wait
// callees(0): 
// strings: 0051b858: '} Kxy)' (raw)

void FUN_0051b784(int *param_1,int param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != 0) {
    bVar1 = param_3 != (undefined4 *)0x0;
    iVar7 = 0;
    do {
      while (iVar2 = *param_1, iVar2 != 0) {
        if (param_4 == '\0') {
          if (bVar1) {
            puVar5 = *(undefined4 **)(iVar2 + 0xd8);
            puVar4 = (undefined4 *)(iVar2 + 0xd8);
            while (puVar3 = puVar5, param_3 != puVar3) {
              if (puVar3 == (undefined4 *)0x0) goto joined_r0x0051b890;
              puVar4 = puVar3;
              puVar5 = (undefined4 *)*puVar3;
            }
            if (bVar1) {
              *puVar4 = *param_3;
              *param_3 = 0;
            }
          }
          break;
        }
        instructionSynchronize();
        if (*(int *)(iVar2 + 0x98) == 0) {
          if (bVar1) {
            *param_3 = *(undefined4 *)(iVar2 + 0xd8);
            *(undefined4 *)(iVar2 + 0xd8) = param_3;
            goto joined_r0x0051b8bc;
          }
          break;
        }
        param_3[1] = param_3[1] + 1;
        iVar6 = *(int *)(iVar2 + 0xd4);
        if ((iVar6 == 0) && (iVar6 = *(int *)(iVar2 + 0x44), iVar6 == 0)) break;
        param_3[3] = iVar6;
joined_r0x0051b8bc:
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 1;
        if (param_2 == iVar7) {
          return;
        }
      }
joined_r0x0051b890:
      param_1 = param_1 + 1;
      iVar7 = iVar7 + 1;
    } while (param_2 != iVar7);
  }
  return;
}



//==== 0051b8c4  ns=Global  size=0x180
// sig: undefined FUN_0051b8c4(void)
// callers(1): 00519444 FUN_00519444
// callees(2): 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071aae8 : 0x0051b984 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0051b8c4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  
  puVar7 = PTR_DAT_0071aaf0;
  puVar5 = PTR_DAT_0071aaec;
  puVar3 = PTR_DAT_0071aae8;
  uVar8 = ZEXT48(PTR_DAT_0071aaf0);
LAB_0051b8f4:
  iVar1 = *(int *)(puVar3 + 4);
  instructionSynchronize();
  while (puVar6 = PTR_DAT_0071aaec, puVar4 = PTR_DAT_0071aae8, iVar1 != 0) {
    do {
      if (iVar1 != *(int *)puVar7) goto LAB_0051b8f4;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar8);
        *(undefined4 *)puVar7 = uVar2;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    FUN_0052d0e8(iVar1);
    (*(code *)**(undefined4 **)(**(int **)(puVar5 + 8) + 4))
              (*(int **)(puVar5 + 8),iVar1,0x10340102,0,0);
    iVar1 = *(int *)(puVar3 + 4);
    instructionSynchronize();
  }
  uVar8 = ZEXT48(PTR_DAT_0071aae8);
LAB_0051b990:
  iVar1 = *(int *)puVar3;
  instructionSynchronize();
  do {
    if (iVar1 == 0) {
      return;
    }
    do {
      if (iVar1 != *(int *)puVar4) goto LAB_0051b990;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar8);
        *(undefined4 *)puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    FUN_0052df14(iVar1);
    (*(code *)**(undefined4 **)(**(int **)(puVar6 + 8) + 4))
              (*(int **)(puVar6 + 8),iVar1,0x10330103,0,0);
    iVar1 = *(int *)puVar3;
    instructionSynchronize();
  } while( true );
}



//==== 0051ba44  ns=fios  size=0x2bc
// sig: undefined trace_markers_alloc(void)
// callers(3): 005194f0 FUN_005194f0; 0051be64 fios::op_wait; 0051c390 fios::op_event_dispatch
// callees(4): 0052d0e8 FUN_0052d0e8; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052df14 FUN_0052df14
// strings: 006679b0: 'opWait'

/* WARNING: Removing unreachable block (ram,0x0051bcb0) */

void fios::trace_markers_alloc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  char in_RESERVE;
  byte in_cr0;
  
  puVar5 = PTR_DAT_0071aae8;
  uVar11 = ZEXT48(PTR_DAT_0071aae8);
  do {
    do {
      do {
        puVar6 = PTR_DAT_0071aaec;
        iVar3 = *(int *)puVar5;
        instructionSynchronize();
        if (iVar3 != 0) {
          do {
            do {
              do {
                puVar6 = PTR_DAT_0071aaec;
                iVar1 = *(int *)(puVar5 + 4);
                instructionSynchronize();
                if (iVar1 != 0) {
                  if (param_1 != (int *)0x0) {
                    *param_1 = iVar3;
                  }
                  if (param_2 != (int *)0x0) {
                    *param_2 = iVar1;
                  }
                  return;
                }
                uVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071aaec + 8))
                                  (*(undefined4 **)(PTR_DAT_0071aaec + 8),0x18,0x10340102,0,0);
                uVar9 = (uint)uVar8;
              } while (uVar9 == 0);
              FUN_0052d19c(uVar8 & 0xffffffff,PTR_s_opWait_0071aaf4,PTR_DAT_0071aaf8,iVar3);
              iVar1 = ((int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f ^ uVar9);
            } while (-1 < iVar1);
            uVar7 = uVar11 + 4;
            do {
              piVar10 = (int *)uVar7;
              iVar2 = *piVar10;
              if (iVar2 != 0) {
                if ((iVar2 != 0) && (iVar1 < 0)) {
                  FUN_0052d0e8(uVar8 & 0xffffffff);
                  (*(code *)**(undefined4 **)(**(int **)(puVar6 + 8) + 4))
                            (*(int **)(puVar6 + 8),uVar8 & 0xffffffff,0x10340102,0,0);
                }
                break;
              }
              if (in_RESERVE != '\0') {
                iVar2 = storeWordConditionalIndexed(uVar8,0,uVar7 & 0xffffffff);
                *piVar10 = iVar2;
                in_cr0 = 2;
              }
            } while ((in_cr0 & 2) == 0);
          } while( true );
        }
        uVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071aaec + 8))
                          (*(undefined4 **)(PTR_DAT_0071aaec + 8),0x28,0x10330103,0,0);
        uVar9 = (uint)uVar8;
      } while (uVar9 == 0);
      FUN_0052d370(uVar8 & 0xffffffff,PTR_s_opWait_0071aaf4);
      iVar3 = ((int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f ^ uVar9);
    } while (-1 < iVar3);
    do {
      iVar1 = *(int *)puVar5;
      if (iVar1 != 0) break;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar8,0,uVar11);
        *(undefined4 *)puVar5 = uVar4;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    if ((iVar1 != 0) && (iVar3 < 0)) {
      FUN_0052df14(uVar8 & 0xffffffff);
      (*(code *)**(undefined4 **)(**(int **)(puVar6 + 8) + 4))
                (*(int **)(puVar6 + 8),uVar8 & 0xffffffff,0x10330103,0,0);
    }
  } while( true );
}



//==== 0051bd00  ns=Global  size=0x64
// sig: undefined FUN_0051bd00(void)
// callers(0): 
// callees(0): 

void FUN_0051bd00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x46494f53;
  *(undefined4 *)(param_1 + 0xe0) = 0x6f626a20;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



//==== 0051bd64  ns=fios  size=0x9c
// sig: undefined op_reset(void)
// callers(2): 0051cfd8 fios::op_alloc; 0051e584 FUN_0051e584
// callees(1): 005d0140 libc::memset

void fios::op_reset(int param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  sync(1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  libc::memset(param_1 + 0x40,0,0x58);
  sync(1);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}



//==== 0051be00  ns=Global  size=0x64
// sig: undefined FUN_0051be00(void)
// callers(3): 0051cfd8 fios::op_alloc; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc
// callees(0): 

void FUN_0051be00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x46494f53;
  *(undefined4 *)(param_1 + 0xe0) = 0x6f626a20;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



//==== 0051be64  ns=fios  size=0x1cc
// sig: undefined op_wait(void)
// callers(6): 005040f4 FUN_005040f4; 00506c10 FUN_00506c10; 00506f68 FUN_00506f68; 0051c030 fios::op_wait_result; 0051c0ec FUN_0051c0ec; 00535d38 FUN_00535d38
// callees(5): 0051b784 FUN_0051b784; 0051ba44 fios::trace_markers_alloc; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c

int fios::op_wait(int param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [32];
  
  if (param_2 == (int *)0x0) {
LAB_0051c00c:
    iVar2 = -0x7ffef8f6;
  }
  else {
    if (param_1 == 1) {
      if (*param_2 == 0) goto LAB_0051c00c;
      instructionSynchronize();
      if (*(int *)(*param_2 + 0x98) != 0) {
        iVar2 = *(int *)(*param_2 + 0xd4);
        if (iVar2 != 0) {
          return iVar2;
        }
        return *(int *)(*param_2 + 0x44);
      }
    }
    trace_markers_alloc(local_60,local_5c);
    lwmutex_lock_checked(0);
    FUN_0051b784(param_2,param_1,local_58,1);
    lVar3 = 0x7fffffffffffffff;
    if (param_3 != 0) {
      lVar3 = param_3;
    }
    while (param_1 != 0) {
      do {
        lVar1 = TBLr;
      } while ((int)lVar1 == 0);
      if (lVar3 <= lVar1) break;
      FUN_0052e49c(0,0,param_3);
    }
    if (param_1 != 0) {
      FUN_0051b784(param_2,param_1,local_58,0);
    }
    lwmutex_unlock_checked(0);
    iVar2 = -0x7ffef8fc;
    if (param_1 == 0) {
      return 0;
    }
  }
  return iVar2;
}



//==== 0051c030  ns=fios  size=0xbc
// sig: undefined op_wait_result(void)
// callers(29): 0001401c boot::boot; 000dcf58 loaders::NAVG_LoadFile; 00503e00 fios::LoadAssetFromFile; 00503f8c FUN_00503f8c; 005040f4 FUN_005040f4; 00504178 fios::GetFileSize; 00504218 FUN_00504218; 00504468 FUN_00504468; 0050476c FUN_0050476c; 00506704 FUN_00506704; 00506854 FUN_00506854; 00506928 FUN_00506928; 00506ebc FUN_00506ebc; 00507f68 fios::read_file_sync; 00520d80 FUN_00520d80; 005240e4 FUN_005240e4; 00530f80 FUN_00530f80; 00531658 FUN_00531658; 0053299c FUN_0053299c; 00533140 FUN_00533140; 005337e8 FUN_005337e8; 00533ae0 FUN_00533ae0; 00533e7c FUN_00533e7c; 005342d4 FUN_005342d4; 005344e8 FUN_005344e8
// callees(3): 0051be64 fios::op_wait; 0051fd24 FUN_0051fd24; 00604738 fios::check_magic

undefined4 fios::op_wait_result(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 local_40 [16];
  
  uVar1 = 0x8001070a;
  if (param_1 != 0) {
    check_magic(param_1);
    uVar1 = op_wait(1,local_40,0);
    instructionSynchronize();
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0xb0);
    }
    FUN_0051fd24(*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  return uVar1;
}



//==== 0051c0ec  ns=Global  size=0x120
// sig: undefined FUN_0051c0ec(void)
// callers(3): 0051c20c FUN_0051c20c; 0051c260 FUN_0051c260; 0051c2bc FUN_0051c2bc
// callees(2): 0051be64 fios::op_wait; 00604738 fios::check_magic

int FUN_0051c0ec(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_50 [24];
  
  iVar3 = 0;
  if (param_2 != 0) {
    piVar4 = (int *)(param_3 + 4);
    bVar1 = false;
    iVar3 = 0;
    do {
      while( true ) {
        fios::check_magic(param_2);
        iVar2 = fios::op_wait(1,local_50,param_1);
        if (iVar2 != -0x7ffef8fc) break;
        param_2 = *piVar4;
        bVar1 = true;
        piVar4 = piVar4 + 2;
        if (param_2 == 0) goto LAB_0051c198;
      }
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      param_2 = *piVar4;
      piVar4 = piVar4 + 2;
    } while (param_2 != 0);
LAB_0051c198:
    if (bVar1) {
      return -0x7ffef8fc;
    }
  }
  return iVar3;
}



//==== 0051c20c  ns=Global  size=0x54
// sig: undefined FUN_0051c20c(void)
// callers(0): 
// callees(1): 0051c0ec FUN_0051c0ec

undefined4
FUN_0051c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
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
  uVar1 = FUN_0051c0ec(0,param_1,&stack0x00000038);
  return uVar1;
}



//==== 0051c260  ns=Global  size=0x5c
// sig: undefined FUN_0051c260(void)
// callers(0): 
// callees(2): 0051b750 FUN_0051b750; 0051c0ec FUN_0051c0ec

undefined4
FUN_0051c260(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_0051b750();
  uVar2 = FUN_0051c0ec(uVar1,param_2,&stack0x00000040);
  return uVar2;
}



//==== 0051c2bc  ns=Global  size=0x48
// sig: undefined FUN_0051c2bc(void)
// callers(0): 
// callees(1): 0051c0ec FUN_0051c0ec

undefined4
FUN_0051c2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_0051c0ec(param_1,param_2,&stack0x00000040);
  return uVar1;
}



//==== 0051c304  ns=Global  size=0x8c
// sig: undefined FUN_0051c304(void)
// callers(1): 00535d38 FUN_00535d38
// callees(2): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

undefined8 FUN_0051c304(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  instructionSynchronize();
  iVar1 = *(int *)(param_1 + 0x9c) + 0x38;
  if (*(int *)(param_1 + 0x98) != 0) {
    return *(undefined8 *)(param_1 + 0xb0);
  }
  fios::lwmutex_lock_checked(iVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  fios::lwmutex_unlock_checked(iVar1);
  return uVar2;
}



//==== 0051c390  ns=fios  size=0x1c4
// sig: undefined op_event_dispatch(void)
// callers(4): 0051e584 FUN_0051e584; 0051fe9c fios::op_complete_immediate; 00522b14 FUN_00522b14; 005241b8 FUN_005241b8
// callees(6): 0051ba44 fios::trace_markers_alloc; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052dc40 FUN_0052dc40; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

undefined4 fios::op_event_dispatch(int param_1,char param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piVar7;
  undefined1 local_60 [4];
  undefined1 local_5c [20];
  
  iVar3 = *(int *)(param_1 + 0x9c) + 0x60;
  rwlock_wlock_checked(iVar3);
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (param_2 == '\x01') {
    instructionSynchronize();
    sync(1);
    *(undefined4 *)(param_1 + 0x98) = 1;
    trace_markers_alloc(local_60,local_5c);
    lwmutex_lock_checked(0);
    piVar7 = *(int **)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (piVar7 != (int *)0x0) {
      bVar6 = false;
      do {
        while( true ) {
          iVar4 = *(int *)(param_1 + 0xd4);
          if ((iVar4 != 0) || (iVar4 = *(int *)(param_1 + 0x44), iVar4 != 0)) {
            piVar7[3] = iVar4;
          }
          iVar4 = piVar7[1];
          piVar7[1] = iVar4 + 1;
          if (piVar7[2] != iVar4 + 1) break;
          piVar7 = (int *)*piVar7;
          bVar6 = true;
          if (piVar7 == (int *)0x0) goto LAB_0051c528;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)0x0);
LAB_0051c528:
      if (bVar6) {
        FUN_0052dc40(0);
      }
    }
    lwmutex_unlock_checked(0);
  }
  FUN_0052cc20(iVar3);
  uVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar5 = (*(code *)*puVar1)(uVar2,param_1,param_2,param_3);
  }
  return uVar5;
}



//==== 0051c554  ns=Global  size=0x304
// sig: undefined FUN_0051c554(void)
// callers(1): 005241b8 FUN_005241b8
// callees(2): 005c5ad0 libc::memcpy; 005cc784 FUN_005cc784

uint FUN_0051c554(int param_1,int param_2)

{
  void *__src;
  void *__dest;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (((param_2 != param_1) &&
      ((((*(int *)(param_1 + 0x40) == 10 || (*(int *)(param_1 + 0x40) == 6)) &&
        (uVar6 = *(ulonglong *)(param_1 + 0x80), uVar6 != 0)) &&
       ((*(int *)(param_2 + 0x40) == 10 || (*(int *)(param_2 + 0x40) == 6)))))) &&
     ((((*(int *)PTR_DAT_0071aafc != *(int *)(param_1 + 0x50) ||
        (((*(int *)(param_1 + 0x54) != *(int *)(PTR_DAT_0071aafc + 4) ||
          (*(int *)(param_1 + 0x58) != *(int *)(PTR_DAT_0071aafc + 8))) ||
         ((*(longlong *)(param_1 + 0x60) != *(longlong *)(PTR_DAT_0071aafc + 0x10) ||
          (*(int *)(param_1 + 0x68) != *(int *)(PTR_DAT_0071aafc + 0x18))))))) &&
       ((((*(int *)(param_2 + 0x50) == *(int *)(param_1 + 0x50) &&
          (*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54))) &&
         (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))) &&
        ((*(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60) &&
         (*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68))))))) ||
      ((*(int *)(param_1 + 0x48) != 0 &&
       ((*(int *)(param_2 + 0x48) != 0 &&
        (iVar2 = FUN_005cc784(*(int *)(param_1 + 0x48),*(int *)(param_2 + 0x48)), iVar2 == 0))))))))
  {
    lVar1 = *(longlong *)(param_2 + 0xb8);
    lVar4 = *(longlong *)(param_1 + 0x70);
    __src = *(void **)(param_2 + 0xc0);
    lVar3 = lVar1 + *(longlong *)(param_2 + 0xa8);
    __dest = *(void **)(param_1 + 0x90);
    if ((lVar4 < lVar1) || (lVar3 <= lVar4)) {
      if ((lVar1 < (longlong)(lVar4 + uVar6)) && ((longlong)(lVar4 + uVar6) < lVar3)) {
        uVar5 = uVar6 - (lVar1 - lVar4);
        uVar6 = ZEXT48(__dest) + (lVar1 - lVar4);
        if ((uVar5 & 0xffffffff) < 0x1000) {
          libc::memcpy((void *)uVar6,__src,(size_t)uVar5);
        }
        else {
          (*(code *)**(undefined4 **)(PTR_DAT_0071aaec + 0x10))
                    (uVar6 & 0xffffffff,__src,uVar5 & 0xffffffff);
        }
        uVar6 = *(longlong *)(param_1 + 0x80) - uVar5;
        *(ulonglong *)(param_1 + 0x80) = uVar6;
        *(ulonglong *)(param_1 + 0xb0) = uVar5 + *(longlong *)(param_1 + 0xb0);
      }
    }
    else {
      uVar5 = *(longlong *)(param_2 + 0xa8) - (lVar4 - lVar1);
      if ((longlong)uVar6 < (longlong)uVar5) {
        uVar5 = uVar6;
      }
      uVar6 = ZEXT48(__src) + (lVar4 - lVar1);
      if ((uVar5 & 0xffffffff) < 0x1000) {
        libc::memcpy(__dest,(void *)uVar6,(size_t)uVar5);
      }
      else {
        (*(code *)**(undefined4 **)(PTR_DAT_0071aaec + 0x10))
                  (__dest,uVar6 & 0xffffffff,uVar5 & 0xffffffff);
      }
      uVar6 = *(longlong *)(param_1 + 0x80) - uVar5;
      *(ulonglong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + uVar5;
      *(ulonglong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + uVar5;
      *(size_t *)(param_1 + 0x90) = (int)__dest + (size_t)uVar5;
      *(ulonglong *)(param_1 + 0x80) = uVar6;
    }
    return (uint)((((longlong)uVar6 >> 0x3f ^ uVar6) - ((longlong)uVar6 >> 0x3f)) + -1 >> 0x3f);
  }
  return 0;
}



//==== 0051c858  ns=Global  size=0x7c
// sig: undefined FUN_0051c858(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0051c858(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar3 = PTR_DAT_0071ab00;
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  do {
    uVar6 = 0;
    lVar7 = 0x10;
    do {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar6 = uVar6 << 4 | (longlong)(char)puVar3[bVar2];
      if ((char)puVar3[bVar2] < '\0') {
        return 0;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar5 = (ulonglong *)(iVar4 + (int)param_1);
    bVar1 = iVar4 != 8;
    iVar4 = iVar4 + 8;
    *puVar5 = uVar6;
  } while (bVar1);
  return 1;
}



//==== 0051c8d4  ns=fios  size=0x58
// sig: undefined hash_path_string(void)
// callers(35): 00513598 FUN_00513598; 00513cc4 FUN_00513cc4; 00513fa8 FUN_00513fa8; 00514124 FUN_00514124; 0051514c FUN_0051514c; 005155c4 FUN_005155c4; 00515a1c FUN_00515a1c; 00515ed4 FUN_00515ed4; 00516bcc FUN_00516bcc; 00517398 FUN_00517398; 0051a124 FUN_0051a124; 0051b070 FUN_0051b070; 0051b1ec FUN_0051b1ec; 0051cb08 FUN_0051cb08; 0051daac FUN_0051daac; 005202c8 FUN_005202c8; 0052046c FUN_0052046c; 005207a0 fios::stat_setup; 00520a28 FUN_00520a28; 00520bd8 FUN_00520bd8; 00520e78 FUN_00520e78; 005210c4 FUN_005210c4; 00521228 FUN_00521228; 0052138c FUN_0052138c; 0052157c FUN_0052157c
// callees(2): 00518fec fios::hash_buff; 005c8510 libc::strlen

undefined4 fios::hash_path_string(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = libc::strlen(param_1);
    uVar2 = hash_buff(param_1,sVar1);
  }
  return uVar2;
}



//==== 0051c92c  ns=Global  size=0x4c
// sig: undefined FUN_0051c92c(void)
// callers(0): 
// callees(1): 005cd198 FUN_005cd198
// strings: 006679c0: '%016llx%016llx'

undefined8 FUN_0051c92c(undefined8 *param_1,undefined8 param_2)

{
  FUN_005cd198(param_2,0x21,PTR_s__016llx_016llx_0071ab04,*param_1,param_1[1]);
  return param_2;
}



//==== 0051c978  ns=Global  size=0x2c
// sig: undefined FUN_0051c978(void)
// callers(1): 00530efc FUN_00530efc
// callees(1): 005d0218 libc::memcmp

int FUN_0051c978(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = libc::memcmp(param_1,param_2,0x10);
  return iVar1;
}



//==== 0051c9a4  ns=Global  size=0xe0
// sig: undefined FUN_0051c9a4(void)
// callers(8): 00530d30 FUN_00530d30; 00531ce8 FUN_00531ce8; 00531e64 FUN_00531e64; 00531f64 FUN_00531f64; 00532468 FUN_00532468; 00533ae0 FUN_00533ae0; 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(1): 0052faf8 FUN_0052faf8

void FUN_0051c9a4(undefined8 *param_1,int param_2)

{
  undefined1 auStack_80 [88];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_0052faf8(auStack_80,param_2,0);
    *(undefined1 *)param_1 = uStack_28;
    *(undefined1 *)((int)param_1 + 1) = uStack_27;
    *(undefined1 *)((int)param_1 + 2) = uStack_26;
    *(undefined1 *)((int)param_1 + 3) = uStack_25;
    *(undefined1 *)((int)param_1 + 4) = uStack_24;
    *(undefined1 *)((int)param_1 + 5) = uStack_23;
    *(undefined1 *)((int)param_1 + 6) = uStack_22;
    *(undefined1 *)((int)param_1 + 7) = uStack_21;
    *(undefined1 *)(param_1 + 1) = uStack_20;
    *(undefined1 *)((int)param_1 + 9) = uStack_1f;
    *(undefined1 *)((int)param_1 + 10) = uStack_1e;
    *(undefined1 *)((int)param_1 + 0xb) = uStack_1d;
    *(undefined1 *)((int)param_1 + 0xf) = uStack_19;
    *(undefined1 *)((int)param_1 + 0xc) = uStack_1c;
    *(undefined1 *)((int)param_1 + 0xd) = uStack_1b;
    *(undefined1 *)((int)param_1 + 0xe) = uStack_1a;
  }
  return;
}



//==== 0051ca84  ns=Global  size=0x30
// sig: undefined FUN_0051ca84(void)
// callers(5): 005155c4 FUN_005155c4; 00515ed4 FUN_00515ed4; 005344e8 FUN_005344e8; 00534d38 FUN_00534d38; 005350b0 FUN_005350b0
// callees(1): 005193cc FUN_005193cc

void FUN_0051ca84(int param_1,undefined8 param_2)

{
  FUN_005193cc(param_1 + 4,param_2,0x100);
  return;
}



//==== 0051cab4  ns=Global  size=0x54
// sig: undefined FUN_0051cab4(void)
// callers(0): 
// callees(1): 005193cc FUN_005193cc

void FUN_0051cab4(undefined4 *param_1,undefined4 *param_2)

{
  FUN_005193cc(*param_1,*param_2,*(undefined2 *)(PTR_DAT_0071ab08 + 0xc));
  param_1[1] = param_2[1];
  return;
}



//==== 0051cb08  ns=Global  size=0x6c
// sig: undefined FUN_0051cb08(void)
// callers(3): 0051fa5c FUN_0051fa5c; 0051ff58 FUN_0051ff58; 005219b0 fios::filehandle_release
// callees(2): 005193cc FUN_005193cc; 0051c8d4 fios::hash_path_string

void FUN_0051cb08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_005193cc((undefined1 *)*param_1,param_2,*(undefined2 *)(PTR_DAT_0071ab08 + 0xc));
    uVar1 = fios::hash_path_string(*param_1);
    param_1[1] = uVar1;
  }
  return;
}



//==== 0051cb74  ns=Global  size=0x30
// sig: undefined FUN_0051cb74(void)
// callers(3): 005207a0 fios::stat_setup; 0052157c FUN_0052157c; 00521794 fios::read_setup
// callees(0): 

int FUN_0051cb74(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      param_1 = param_1 & param_1 - 1;
    } while (param_1 != 0);
  }
  return iVar1;
}



//==== 0051cba4  ns=Global  size=0x24
// sig: undefined FUN_0051cba4(void)
// callers(10): 0051cfd8 fios::op_alloc; 0051dcc4 FUN_0051dcc4; 0051e584 FUN_0051e584; 0051e6cc FUN_0051e6cc; 0051f1f4 FUN_0051f1f4; 0051f3e0 FUN_0051f3e0; 0051fa5c FUN_0051fa5c; 005219b0 fios::filehandle_release; 005238c0 FUN_005238c0; 005258cc FUN_005258cc
// callees(0): 

int FUN_0051cba4(int param_1)

{
  if (*(int *)(param_1 + 0x174) != 0) {
    return *(int *)(param_1 + 0x174);
  }
  return *(int *)(PTR_DAT_0071ab10 + 8);
}



//==== 0051cbc8  ns=Global  size=0x24
// sig: undefined FUN_0051cbc8(void)
// callers(3): 0051f1f4 FUN_0051f1f4; 005241b8 FUN_005241b8; 00525f48 FUN_00525f48
// callees(0): 

uint FUN_0051cbc8(int param_1)

{
  uint uVar1;
  
  instructionSynchronize();
  uVar1 = (int)*(uint *)(param_1 + 0x220) >> 0x1f;
  return ((uVar1 ^ *(uint *)(param_1 + 0x220)) - uVar1) - 1 >> 0x1f;
}



//==== 0051cbec  ns=Global  size=0x60
// sig: undefined FUN_0051cbec(void)
// callers(1): 005241b8 FUN_005241b8
// callees(0): 

uint FUN_0051cbec(int param_1)

{
  uint uVar1;
  
  instructionSynchronize();
  uVar1 = 0;
  if (*(int *)(param_1 + 0x180) == 0) {
    instructionSynchronize();
    uVar1 = 1;
    if ((*(int *)(param_1 + 0x20c) == 0) && (*(char *)(param_1 + 0x17c) == '\0')) {
      instructionSynchronize();
      uVar1 = (int)*(uint *)(param_1 + 0x184) >> 0x1f;
      return ((uVar1 ^ *(uint *)(param_1 + 0x184)) - uVar1) - 1 >> 0x1f;
    }
  }
  return uVar1;
}



//==== 0051cc4c  ns=fios  size=0x14
// sig: undefined get_default_fs(void)
// callers(15): 000dcf58 loaders::NAVG_LoadFile; 00503e00 fios::LoadAssetFromFile; 00503f8c FUN_00503f8c; 00504178 fios::GetFileSize; 00504218 FUN_00504218; 00504468 FUN_00504468; 0050476c FUN_0050476c; 00506704 FUN_00506704; 005067a8 FUN_005067a8; 00506854 FUN_00506854; 00506928 FUN_00506928; 00506a70 FUN_00506a70; 00506d20 FUN_00506d20; 00506ebc FUN_00506ebc; 00507f68 fios::read_file_sync
// callees(0): 

undefined4 fios::get_default_fs(void)

{
  instructionSynchronize();
  return *(undefined4 *)PTR_DAT_0071ab14;
}



//==== 0051cc60  ns=Global  size=0x144
// sig: undefined FUN_0051cc60(void)
// callers(1): 005241b8 FUN_005241b8
// callees(0): 

void FUN_0051cc60(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  char in_RESERVE;
  byte in_cr0;
  ulonglong uVar12;
  
  do {
    puVar6 = (uint *)(param_1 + 0x228U);
    uVar1 = *puVar6;
    instructionSynchronize();
    while (uVar1 == *puVar6) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,param_1 + 0x228U & 0xffffffff);
        *puVar6 = uVar3;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        iVar4 = (int)param_1;
        uVar1 = *(uint *)(*(int *)(iVar4 + 0x160) + 0x8c);
        if (uVar1 != 0) {
          uVar12 = (ulonglong)uVar1;
          lVar8 = 0;
          lVar7 = 0;
          piVar9 = param_2;
          puVar10 = *(ulonglong **)(iVar4 + 0x1ec);
          do {
            iVar2 = *piVar9;
            piVar9 = piVar9 + 1;
            lVar8 = lVar8 + iVar2;
            lVar7 = lVar7 + (longlong)iVar2 * *puVar10;
            uVar12 = uVar12 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar12 != 0);
          if (lVar8 != 0) {
            uVar12 = (ulonglong)uVar1;
            uVar5 = (param_3 - lVar7) / 10;
            puVar10 = *(ulonglong **)(iVar4 + 0x1ec);
            do {
              iVar2 = *param_2;
              param_2 = param_2 + 1;
              uVar11 = ((longlong)uVar5 / lVar8) * (longlong)iVar2 + *puVar10;
              *puVar10 = uVar11 & (longlong)~uVar11 >> 0x3f;
              uVar12 = uVar12 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar12 != 0);
            instructionSynchronize();
            if ((1000 < *puVar6) &&
               (lVar7 = ((longlong)uVar5 >> 0x3f ^ uVar5) - ((longlong)uVar5 >> 0x3f),
               *(longlong *)(iVar4 + 0x1f0) < lVar7)) {
              *(longlong *)(iVar4 + 0x1f0) = lVar7;
            }
          }
        }
        return;
      }
    }
  } while( true );
}



//==== 0051cda4  ns=Global  size=0x88
// sig: undefined FUN_0051cda4(void)
// callers(1): 0051ce2c FUN_0051ce2c
// callees(2): 00604738 fios::check_magic; 00604788 FUN_00604788

void FUN_0051cda4(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  cVar3 = FUN_00604788();
  if (cVar3 != '\0') {
    cVar3 = fios::check_magic(param_2);
    puVar4 = (uint *)(param_2 + 0x30);
    if (cVar3 != '\0') {
      do {
        uVar1 = *puVar4;
        instructionSynchronize();
        while (uVar1 == *puVar4) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 | 0x200,0,ZEXT48(puVar4));
            *puVar4 = uVar2;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            return;
          }
        }
      } while( true );
    }
  }
  return;
}



//==== 0051ce2c  ns=Global  size=0x30
// sig: undefined FUN_0051ce2c(void)
// callers(0): 
// callees(1): 0051cda4 FUN_0051cda4

void FUN_0051ce2c(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_0051cda4(*(undefined4 *)(param_2 + 0x9c),param_2);
    return;
  }
  if (*(int *)(param_2 + 0x40) == 0xd) {
    return;
  }
  FUN_0051cda4(*(undefined4 *)(param_2 + 0x9c),param_2);
  return;
}



//==== 0051ce5c  ns=Global  size=0x78
// sig: undefined FUN_0051ce5c(void)
// callers(0): 
// callees(1): 00604788 FUN_00604788

void FUN_0051ce5c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 == '\0') {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x180);
  do {
    uVar1 = *puVar3;
    instructionSynchronize();
    while (uVar1 == *puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar3));
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        return;
      }
    }
  } while( true );
}



//==== 0051ced4  ns=Global  size=0x54
// sig: undefined FUN_0051ced4(void)
// callers(1): 0001401c boot::boot
// callees(1): 00604788 FUN_00604788

void FUN_0051ced4(int param_1)

{
  char cVar1;
  
  if ((param_1 == 0) || (cVar1 = FUN_00604788(param_1), cVar1 != '\0')) {
    sync(1);
    *(int *)PTR_DAT_0071ab14 = param_1;
  }
  return;
}



//==== 0051cf28  ns=Global  size=0xb0
// sig: undefined FUN_0051cf28(void)
// callers(1): 005067a8 FUN_005067a8
// callees(2): 00539358 FUN_00539358; 00604760 fios::check_magic

undefined4
FUN_0051cf28(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined1 param_5,
            undefined4 param_6)

{
  char cVar2;
  undefined4 uVar1;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar2 = fios::check_magic(param_3);
  uVar1 = 0x80010706;
  if (cVar2 != '\0') {
    if (*(int *)(param_3 + 8) == param_1) {
      uVar1 = FUN_00539358(param_3,param_4,param_5,param_6);
    }
  }
  return uVar1;
}



//==== 0051cfd8  ns=fios  size=0x328
// sig: undefined op_alloc(void)
// callers(15): 005202c8 FUN_005202c8; 0052046c FUN_0052046c; 005205b4 FUN_005205b4; 005207a0 fios::stat_setup; 00520a28 FUN_00520a28; 00520bd8 FUN_00520bd8; 00520e78 FUN_00520e78; 005210c4 FUN_005210c4; 00521228 FUN_00521228; 0052138c FUN_0052138c; 0052157c FUN_0052157c; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 00525524 FUN_00525524
// callees(5): 0051bd64 fios::op_reset; 0051be00 FUN_0051be00; 0051cba4 FUN_0051cba4; 0052cbd8 fios::print_tty4; 00604788 FUN_00604788
// strings: 006679d0: 'Invalid fios::opattr_t.opflags: 0x%08X     Valid mask: 0x%08X\n'

uint * fios::op_alloc(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar7;
  undefined8 uVar6;
  char cVar10;
  undefined4 *puVar8;
  uint *puVar9;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  char in_RESERVE;
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
  cVar10 = FUN_00604788(param_1);
  if ((cVar10 == '\0') || (instructionSynchronize(), *(int *)(param_1 + 0x184) == 0)) {
    return (uint *)0x0;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar2 = *(uint *)((int)param_2 + 0x14);
    uVar13 = uVar2 >> 0xb & 1;
    bVar1 = (uVar2 & 0xffffc700) == 0;
    in_cr0 = bVar1 << 1;
    if (!bVar1) {
      print_tty4(PTR_s_Invalid_fios_opattr_t_opflags__0_0071ab18,uVar2,0x38ff);
    }
    if (uVar13 != 0) {
LAB_0051d258:
      puVar8 = (undefined4 *)FUN_0051cba4(param_1);
      puVar9 = (uint *)(*(code *)**(undefined4 **)*puVar8)
                                 (puVar8,(ulonglong)*(ushort *)(PTR_DAT_0071ab10 + 0xc) + 0xe8,
                                  0x10400303,0,0);
      if (puVar9 == (uint *)0x0) {
        return (uint *)0x0;
      }
      uVar13 = 1;
      FUN_0051be00(puVar9,puVar9 + 0x3a);
      goto LAB_0051d0c4;
    }
  }
  puVar8 = (undefined4 *)(param_1 + 0x208);
  do {
    puVar9 = (uint *)*puVar8;
    instructionSynchronize();
    if (puVar9 == (uint *)0x0) goto LAB_0051d258;
    uVar2 = *puVar9;
    do {
      puVar7 = (uint *)*puVar8;
      if (puVar9 != (uint *)*puVar8) break;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar2,0,ZEXT48(puVar8));
        *puVar8 = uVar3;
        in_cr0 = 2;
      }
      puVar7 = puVar9;
    } while ((in_cr0 & 2) == 0);
  } while (puVar9 != puVar7);
  *puVar9 = 0;
LAB_0051d0c4:
  op_reset(puVar9);
  puVar9[0x27] = param_1;
  if (param_2 != (undefined8 *)0x0) {
    uVar6 = param_2[1];
    uVar14 = param_2[2];
    uVar12 = param_2[3];
    *(undefined8 *)(puVar9 + 2) = *param_2;
    *(undefined8 *)(puVar9 + 4) = uVar6;
    *(undefined8 *)(puVar9 + 6) = uVar14;
    *(undefined8 *)(puVar9 + 8) = uVar12;
    *(undefined8 *)(puVar9 + 10) = param_2[4];
  }
  puVar5 = PTR_DAT_0071ab14;
  puVar7 = (uint *)(PTR_DAT_0071ab14 + 4);
  do {
    uVar2 = *(uint *)(puVar5 + 4);
    instructionSynchronize();
    while (uVar2 == *puVar7) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)uVar2 + 1,0,ZEXT48(puVar7));
        *puVar7 = uVar4;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        puVar9[0xf] = uVar2;
        uVar11 = ((ulonglong)puVar9[7] & 0x7ff) << 0x14 | (ulonglong)(puVar9[7] >> 0xc);
        uVar2 = (uint)(uVar11 << 0xc) | (uint)uVar11 >> 0x14;
        puVar9[7] = uVar2;
        if (uVar13 != 0) {
          puVar9[7] = uVar2 | 0x800;
        }
        puVar7 = (uint *)(param_1 + 0x220);
        do {
          uVar13 = *puVar7;
          instructionSynchronize();
          while (uVar13 == *puVar7) {
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)uVar13 + 1,0,ZEXT48(puVar7));
              *puVar7 = uVar2;
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) {
              uVar11 = (ulonglong)*puVar7;
              instructionSynchronize();
              puVar7 = (uint *)(param_1 + 0x22c);
              uVar13 = *puVar7;
              instructionSynchronize();
              if (uVar11 <= uVar13) {
                return puVar9;
              }
              do {
                while (*puVar7 != uVar13) {
                  uVar13 = *puVar7;
                  instructionSynchronize();
                  if (uVar11 <= uVar13) {
                    return puVar9;
                  }
                }
                if (in_RESERVE != '\0') {
                  uVar2 = storeWordConditionalIndexed(uVar11,0,ZEXT48(puVar7));
                  *puVar7 = uVar2;
                  in_cr0 = 2;
                }
              } while ((in_cr0 & 2) == 0);
              return puVar9;
            }
          }
        } while( true );
      }
    }
  } while( true );
}



//==== 0051d300  ns=Global  size=0x2c
// sig: undefined FUN_0051d300(void)
// callers(1): 0051d32c FUN_0051d32c
// callees(0): 

void FUN_0051d300(int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071ab14;
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  *(undefined4 *)PTR_DAT_0071ab14 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



//==== 0051d32c  ns=Global  size=0x10
// sig: undefined FUN_0051d32c(void)
// callers(0): 
// callees(1): 0051d300 FUN_0051d300

void FUN_0051d32c(void)

{
  FUN_0051d300(1,0xffff);
  return;
}



//==== 0051d33c  ns=Global  size=0x24c
// sig: undefined FUN_0051d33c(void)
// callers(3): 0051d588 FUN_0051d588; 00521d8c FUN_00521d8c; 00522c50 FUN_00522c50
// callees(1): 005d0140 libc::memset

undefined4
FUN_0051d33c(int param_1,int param_2,char *param_3,int *param_4,longlong *param_5,undefined4 param_6
            )

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar11;
  
  uVar11 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar11 - 0x100);
  *puVar5 = uVar11;
  puVar5[0x17] = unaff_r23;
  puVar5[0x22] = in_LR;
  uVar2 = *(uint *)(param_2 + 0x30);
  puVar5[0x18] = unaff_r24;
  puVar5[0x19] = unaff_r25;
  puVar5[0x1a] = unaff_r26;
  puVar5[0x1b] = unaff_r27;
  puVar5[0x1c] = unaff_r28;
  puVar5[0x1e] = unaff_r30;
  puVar5[0x1f] = unaff_r31;
  puVar5[0x1d] = unaff_r29;
  if (((uVar2 & 0x200) == 0) &&
     ((*(longlong *)(param_2 + 0x80) != 0 ||
      ((((iVar4 = *(int *)(param_2 + 0x40), 1 < iVar4 - 10U && (iVar4 != 6)) && (iVar4 != 7)) &&
       (iVar4 != 0x11)))))) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x160) + 0x8c);
    *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar5 + 0x14) = param_6;
    *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
    *(int *)((int)puVar5 + 0x94) = param_2 + 0x40;
    *(undefined1 (*) [16])(puVar5 + 0x10) = (undefined1  [16])0x0;
    lVar10 = (uVar11 - 0x100) - (((ulonglong)uVar2 & 0x3fffffff) * 4 + 0x1e & 0xfffffffffffffff0);
    puVar6 = (ulonglong *)lVar10;
    *puVar6 = *puVar5;
    uVar7 = lVar10 + 0x7fU & 0xfffffff0;
    *(int *)((int)puVar5 + 0xa4) = (int)uVar7;
    libc::memset(uVar7,0);
    piVar9 = *(int **)(param_1 + 0x160);
    pcVar3 = (code *)**(undefined4 **)(*piVar9 + 8);
    puVar6[5] = ZEXT48(&TOC_BASE);
    (*pcVar3)(piVar9,uVar11 - 0x90);
    if (uVar2 != 0) {
      uVar11 = (ulonglong)uVar2;
      lVar10 = *param_5;
      piVar9 = *(int **)((int)puVar5 + 0xa4);
      plVar8 = *(longlong **)(param_1 + 0x1ec);
      do {
        lVar10 = lVar10 + (longlong)*piVar9 * *plVar8;
        *param_5 = lVar10;
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar11 != 0);
    }
    if (((param_3 != (char *)0x0) && (param_4 != (int *)0x0)) &&
       (*(longlong *)(param_2 + 8) < *param_5)) {
      cVar1 = *(char *)(param_2 + 0x10);
      if (*param_3 < cVar1) {
        *param_3 = cVar1;
        *param_4 = 1;
        return 1;
      }
      if (cVar1 != *param_3) {
        return 1;
      }
      *param_4 = *param_4 + 1;
      return 1;
    }
  }
  return 0;
}



//==== 0051d588  ns=Global  size=0x4ac
// sig: undefined FUN_0051d588(void)
// callers(2): 00522c50 FUN_00522c50; 005241b8 FUN_005241b8
// callees(2): 0051d33c FUN_0051d33c; 005c5ad0 libc::memcpy
// strings: 0051d628: '}+Kxy)' (raw) | 0071ab20: 'BQvY.'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d588(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *__dest;
  void *pvVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong unaff_r14;
  uint *puVar18;
  ulonglong unaff_r15;
  char cVar19;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  uint uVar20;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar21;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint *puVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  uint *puVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar24;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  double dVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar12 - 0x150);
  *puVar5 = uVar12;
  puVar5[0x29] = unaff_r31;
  puVar5[0x1e] = unaff_r20;
  puVar5[0x27] = unaff_r29;
  puVar5[0x28] = unaff_r30;
  puVar5[0x18] = unaff_r14;
  puVar5[0x19] = unaff_r15;
  puVar5[0x1a] = unaff_r16;
  puVar5[0x1b] = unaff_r17;
  puVar5[0x1c] = unaff_r18;
  puVar5[0x1d] = unaff_r19;
  puVar5[0x1f] = unaff_r21;
  puVar5[0x20] = unaff_r22;
  puVar5[0x21] = unaff_r23;
  puVar5[0x22] = unaff_r24;
  puVar5[0x23] = unaff_r25;
  puVar5[0x24] = unaff_r26;
  puVar5[0x25] = unaff_r27;
  puVar5[0x26] = unaff_r28;
  *(uint **)(puVar5 + 0x12) = param_2;
  *(uint *)(puVar5 + 0x2b) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar5[0x2c] = in_LR;
  lVar9 = *(longlong *)(param_2 + 2);
  if (lVar9 < 1) {
    do {
      lVar9 = TBLr;
    } while ((int)lVar9 == 0);
    dVar25 = *(double *)PTR_DAT_0071ab1c * _s_BQvY__0071ab20;
    if ((double)DAT_0071ab28 <= dVar25) {
      puVar5[0x14] = (longlong)(dVar25 - (double)DAT_0071ab28);
      lVar9 = lVar9 + (puVar5[0x14] ^ 0x8000000000000000);
    }
    else {
      puVar5[0x14] = (longlong)dVar25;
      lVar9 = lVar9 + puVar5[0x14];
    }
  }
  *(longlong *)(param_2 + 2) = lVar9;
  if (param_2[0x34] - 9 < 3) {
    puVar8 = *(undefined4 **)(param_1 + 0x214);
    puVar7 = (undefined4 *)(param_1 + 0x214);
    while (puVar6 = puVar8, puVar6 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      puVar8 = (undefined4 *)*puVar6;
    }
    *puVar7 = *(undefined4 *)(puVar5 + 0x12);
  }
  else if ((*(uint *)(*(int *)(puVar5 + 0x12) + 0x30) & 0x200) == 0) {
    uVar15 = *puVar5;
    pvVar13 = *(void **)(param_1 + 0x1fc);
    uVar3 = *(uint *)(*(int *)(param_1 + 0x160) + 0x88);
    lVar10 = -((ulonglong)uVar3 + 0x1e & 0xfffffffffffffff0);
    lVar9 = (uVar12 - 0x150) + lVar10;
    *(ulonglong *)lVar9 = uVar15;
    lVar10 = lVar9 + lVar10;
    *(ulonglong *)lVar10 = uVar15;
    uVar11 = lVar10 + 0x70;
    uVar15 = uVar11 & 0xffffffff;
    __dest = (void *)(lVar9 + 0x70U);
    libc::memcpy(__dest,pvVar13,uVar3);
    pvVar13 = (void *)uVar11;
    libc::memcpy(pvVar13,*(void **)(param_1 + 0x1fc),uVar3);
    uVar11 = *(longlong *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x1f0);
    *(undefined1 *)(puVar5 + 0xe) = 0x80;
    *(undefined4 *)((int)puVar5 + 0x74) = 0;
    puVar5[0x10] = uVar11;
    if (uVar11 == 0) {
      do {
        lVar10 = TBLr;
      } while ((int)lVar10 == 0);
      dVar25 = *(double *)PTR_DAT_0071ab1c * (double)DAT_0071ab2c;
      if ((double)DAT_0071ab28 <= dVar25) {
        puVar5[0x14] = (longlong)(dVar25 - (double)DAT_0071ab28);
        uVar11 = puVar5[0x14] ^ 0x8000000000000000;
      }
      else {
        puVar5[0x14] = (longlong)dVar25;
        uVar11 = puVar5[0x14];
      }
      puVar5[0x10] = lVar10 + uVar11;
    }
    uVar20 = param_2[0x10];
    puVar22 = (uint *)(param_1 + 0x210);
    *(undefined4 *)(puVar5 + 0xf) = 0;
    puVar5[0x11] = puVar5[0x10];
    *(undefined1 *)((int)puVar5 + 0x71) = 0x80;
    if (((((ulonglong)uVar20 - 10 & 0xffffffff) < 2) || (uVar20 == 6)) ||
       (uVar11 = (ulonglong)uVar20 ^ 0x11, uVar16 = (ulonglong)((int)uVar11 >> 0x1f),
       uVar11 = (((uVar16 ^ uVar11) - uVar16) + -1 << 0x20) >> 0x3f, uVar20 == 7)) {
      uVar11 = 1;
    }
    uVar4 = *(undefined4 *)(puVar5 + 0x12);
    bVar24 = (uVar11 == 0) << 1;
    uVar11 = 0x7fffffffffffffff;
    cVar19 = '\x7f';
    uVar20 = 0;
    puVar5[0x15] = uVar12 - 0xe0;
    puVar5[0x16] = uVar12 - 0xdc;
    puVar5[0x17] = uVar12 - 0xd0;
    puVar18 = puVar22;
    do {
      puVar23 = (uint *)*puVar22;
      libc::memcpy(pvVar13,__dest,uVar3);
      *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)((int)puVar5 + 0x74);
      puVar5[0x11] = puVar5[0x10];
      *(undefined1 *)((int)puVar5 + 0x71) = *(undefined1 *)(puVar5 + 0xe);
      bVar1 = (int)(((int)puVar23 >> 0x1f) - ((int)puVar23 >> 0x1f ^ (uint)puVar23)) < 0;
      if (bVar1) {
        FUN_0051d33c(param_1,puVar23,puVar5[0x15] & 0xffffffff,puVar5[0x16] & 0xffffffff,
                     puVar5[0x17] & 0xffffffff,lVar9 + 0x70U & 0xffffffff);
      }
      uVar16 = puVar5[0x11];
      FUN_0051d33c(param_1,uVar4,uVar12 - 0xdf & 0xffffffff,uVar12 - 0xd8 & 0xffffffff,
                   uVar12 - 200 & 0xffffffff,uVar15);
      uVar21 = puVar5[0x11];
      if (bVar1) {
        do {
          FUN_0051d33c(param_1,puVar23,uVar12 - 0xdf & 0xffffffff,uVar12 - 0xd8 & 0xffffffff,
                       uVar12 - 200 & 0xffffffff,uVar15);
          puVar23 = (uint *)*puVar23;
        } while (puVar23 != (uint *)0x0);
      }
      cVar2 = *(char *)((int)puVar5 + 0x71);
      if (cVar2 < cVar19) {
        uVar17 = puVar5[0x11];
        uVar14 = *(uint *)(puVar5 + 0xf);
LAB_0051d948:
        cVar19 = cVar2;
        puVar23 = (uint *)*puVar22;
        uVar11 = uVar17;
        uVar20 = uVar14;
        puVar18 = puVar22;
      }
      else {
        if (cVar19 == cVar2) {
          uVar14 = *(uint *)(puVar5 + 0xf);
          if (uVar14 < uVar20) {
            uVar17 = puVar5[0x11];
            goto LAB_0051d948;
          }
          if (uVar20 == uVar14) {
            uVar17 = puVar5[0x11];
            if (((longlong)uVar17 < (longlong)uVar11) ||
               ((uVar11 == uVar17 &&
                ((!(bool)(bVar24 >> 1 & 1) || ((longlong)uVar16 < (longlong)uVar21))))))
            goto LAB_0051d948;
          }
        }
        puVar23 = (uint *)*puVar22;
      }
      puVar22 = puVar23;
    } while (puVar22 != (uint *)0x0);
    uVar3 = *(uint *)(puVar5 + 0x12);
    *param_2 = *puVar18;
    *puVar18 = uVar3;
  }
  else {
    uVar3 = *(uint *)(puVar5 + 0x12);
    *param_2 = *(uint *)(param_1 + 0x210);
    *(uint *)(param_1 + 0x210) = uVar3;
  }
  return;
}



//==== 0051da34  ns=Global  size=0x78
// sig: undefined FUN_0051da34(void)
// callers(0): 
// callees(1): 00604788 FUN_00604788

void FUN_0051da34(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 == '\0') {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x1c8);
  do {
    uVar1 = *puVar3;
    instructionSynchronize();
    while (uVar1 == *puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar3));
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        return;
      }
    }
  } while( true );
}



//==== 0051daac  ns=Global  size=0x218
// sig: undefined FUN_0051daac(void)
// callers(1): 00522104 FUN_00522104
// callees(3): 005193cc FUN_005193cc; 0051c8d4 fios::hash_path_string; 00532660 FUN_00532660

undefined4 FUN_0051daac(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  char cVar5;
  undefined1 auStack_1e0 [64];
  undefined1 local_1a0 [12];
  undefined4 local_194;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 *local_150;
  undefined2 local_14c;
  undefined1 auStack_148 [256];
  undefined8 local_48;
  undefined8 local_40;
  
  if ((*(int *)(param_2 + 0x40) == 10) && (**(char **)(param_2 + 0x34) != '\0')) {
    FUN_005193cc(auStack_148,*(char **)(param_2 + 0x34),0x100);
    local_40 = *(undefined8 *)(param_2 + 0xa8);
    local_48 = *(undefined8 *)(param_2 + 0xb8);
    local_160 = (undefined1  [16])0x0;
    _local_1a0 = ZEXT816(0);
    local_150 = (undefined1 *)0x0;
    local_14c = 0;
    _local_190 = (undefined1  [16])0x0;
    local_180 = (undefined1  [16])0x0;
    local_170 = (undefined1  [16])0x0;
    uVar4 = fios::hash_path_string(0);
    auVar3 = _local_190;
    local_194 = uVar4;
    local_190._4_4_ = *(undefined4 *)(PTR_DAT_0071ab30 + 4);
    local_190._0_4_ = *(undefined4 *)PTR_DAT_0071ab30;
    uStack_184 = auVar3._12_4_;
    local_188 = *(undefined4 *)(PTR_DAT_0071ab30 + 8);
    local_180._8_4_ = *(undefined4 *)(PTR_DAT_0071ab30 + 0x18);
    local_180._0_8_ = *(undefined8 *)(PTR_DAT_0071ab30 + 0x10);
    local_1a0._0_4_ = 10;
    piVar1 = *(int **)(param_1 + 0x160);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      if ((piVar2[2] == 0x63616368) && (cVar5 = FUN_00532660(piVar2,auStack_148), cVar5 != '\0')) {
        return 1;
      }
      auVar3 = _local_1a0;
      piVar1 = (int *)piVar2[0x10];
      if (piVar1 != (int *)0x0) {
        local_1a0._0_4_ = 0x10;
        local_194 = auVar3._12_4_;
        local_1a0._8_4_ = auStack_148;
        local_150 = auStack_148;
        uVar4 = fios::hash_path_string(auStack_148);
        local_194 = uVar4;
        local_160._0_8_ = local_40;
        local_190._4_4_ = piVar1;
        local_170._0_8_ = local_48;
        (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,auStack_1e0);
        if (local_1a0._4_4_ != 0) {
          return 0;
        }
        piVar1 = (int *)piVar2[0x10];
      }
    }
  }
  return 0;
}



//==== 0051dcc4  ns=Global  size=0x8c0
// sig: undefined FUN_0051dcc4(void)
// callers(0): 
// callees(16): 005106cc FUN_005106cc; 0051a124 FUN_0051a124; 0051b070 FUN_0051b070; 0051b318 FUN_0051b318; 0051be00 FUN_0051be00; 0051cba4 FUN_0051cba4; 005258cc FUN_005258cc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052d814 FUN_0052d814; 0052e1dc FUN_0052e1dc; 0052e828 FUN_0052e828; 00539124 FUN_00539124; 005d0140 libc::memset; 00604710 FUN_00604710; 00604788 FUN_00604788
// strings: 00667a10: 'scheduler.m_objectLock' | 00667a28: 'scheduler.m_opLock' | 00667a40: 'scheduler.m_opCallbackLock' | 00667a60: 'scheduler.m_completedLock' | 00667a80: 'fios scheduler' | 00667a90: 'scheduler.m_ioLock' | 00667aa8: 'scheduler.m_ioCond' | 00667ac8: 'scheduler.m_idleCond' | 00667ae0: 'scheduler.m_fhLock' | 00667af8: 'scheduler.m_workerLock' | 0051e250: '}@Sx9J' (raw) | 00667b10: 'fios worker cond' | 00667b28: 'fios mediathread'

void FUN_0051dcc4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  char in_RESERVE;
  byte in_cr0;
  uint local_84;
  
  FUN_005106cc(param_1 + 1);
  puVar5 = PTR_s_scheduler_m_objectLock_0071ab38;
  *param_1 = PTR_PTR_0071ab34;
  FUN_0052d370(param_1 + 4,puVar5);
  FUN_0052d370(param_1 + 0xe,PTR_s_scheduler_m_opLock_0071ab3c);
  FUN_0052e1dc(param_1 + 0x18,PTR_s_scheduler_m_opCallbackLock_0071ab40);
  puVar10 = param_1 + 0x38;
  FUN_0052d370(param_1 + 0x1e,PTR_s_scheduler_m_completedLock_0071ab44);
  FUN_0052e828(param_1 + 0x28,PTR_s_fios_scheduler_0071ab48,0,PTR_PTR_0071ab4c,param_1,0);
  FUN_0052d370(puVar10,PTR_s_scheduler_m_ioLock_0071ab50);
  puVar5 = PTR_DAT_0071ab58;
  FUN_0052d19c(param_1 + 0x42,PTR_s_scheduler_m_ioCond_0071ab54,PTR_DAT_0071ab58,puVar10);
  FUN_0052d19c(param_1 + 0x48,PTR_s_scheduler_m_idleCond_0071ab5c,puVar5,puVar10);
  FUN_0052d370(param_1 + 0x4e,PTR_s_scheduler_m_fhLock_0071ab60);
  uVar2 = *param_3;
  param_1[0x59] = param_3[1];
  puVar6 = PTR_s_scheduler_m_workerLock_0071ab64;
  piVar17 = param_1 + 0x8e;
  param_1[0x5a] = param_3[2];
  param_1[0x5d] = uVar2;
  param_1[0x60] = 0;
  param_1[0x58] = param_2;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 1;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 1;
  FUN_0052d370(param_1 + 0x62,puVar6);
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  piVar16 = param_1 + 0x82;
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_3 + 4);
  uVar14 = *(undefined8 *)(param_3 + 6);
  param_1[0x72] = 0;
  param_1[0x6d] = 0xffffffff;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x76) = uVar14;
  param_1[0x79] = 0;
  param_1[0x8d] = 0;
  param_1[0x6e] = 0;
  param_1[0x7a] = 0;
  *piVar17 = 0;
  *piVar16 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x83] = 0;
  param_1[0x7b] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0;
  param_1[0x8a] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_00604788(param_1);
  FUN_00604710(param_2);
  uVar20 = param_1[0x59];
  param_1[2] = 0x73636864;
  if (uVar20 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    uVar18 = (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1 + (ulonglong)uVar20 * 0xe8 &
             0xffffffff;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,uVar18,0x10130103,0,0);
    param_1[0x5b] = iVar11;
    if (iVar11 != 0) {
      libc::memset(iVar11,0,uVar18);
    }
    if (param_1[0x5b] == 0) {
      param_1[0x59] = 0;
    }
    else if (param_1[0x59] != 0) {
      uVar18 = (ulonglong)(uint)param_1[0x5b] + (ulonglong)uVar20 * 0xe8;
      uVar21 = 0;
      uVar19 = (uVar18 + (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1) - (ulonglong)uVar1;
      do {
        uVar18 = uVar18 - 0xe8;
        FUN_0051be00(uVar18 & 0xffffffff,uVar19 & 0xffffffff);
        if ((int *)uVar18 != (int *)0x0) {
          do {
            iVar11 = *piVar16;
            instructionSynchronize();
            *(int *)uVar18 = iVar11;
            do {
              iVar13 = *piVar16;
              if (iVar11 != *piVar16) break;
              if (in_RESERVE != '\0') {
                iVar13 = storeWordConditionalIndexed(uVar18,0,ZEXT48(piVar16));
                *piVar16 = iVar13;
                in_cr0 = 2;
              }
              iVar13 = iVar11;
            } while ((in_cr0 & 2) == 0);
          } while (iVar11 != iVar13);
        }
        uVar21 = uVar21 + 1;
        uVar19 = uVar19 - uVar1;
      } while (uVar21 < (uint)param_1[0x59]);
    }
  }
  iVar11 = param_1[0x5a];
  if (iVar11 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    iVar13 = iVar11 * (uint)uVar1 + iVar11 * 0x58;
    iVar12 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar13,0x10140103,0,0);
    param_1[0x5c] = iVar12;
    if (iVar12 != 0) {
      libc::memset(iVar12,0,iVar13);
    }
    if (param_1[0x5c] == 0) {
      param_1[0x5a] = 0;
    }
    else if (param_1[0x5a] != 0) {
      iVar13 = param_1[0x5c] + iVar11 * 0x58;
      uVar20 = 0;
      iVar11 = (iVar13 + iVar11 * (uint)uVar1) - (uint)uVar1;
      do {
        iVar12 = iVar13 + -0x58;
        uVar20 = uVar20 + 1;
        FUN_00539124(iVar12,iVar11);
        if (iVar12 != 0) {
          *(int *)(iVar13 + -0x4c) = *piVar17;
          *piVar17 = iVar12;
        }
        iVar13 = iVar12;
        iVar11 = iVar11 - (uint)uVar1;
      } while (uVar20 < (uint)param_1[0x5a]);
    }
  }
  FUN_0051b070(param_1[0x58]);
  iVar11 = *(int *)(param_1[0x58] + 0x90);
  param_1[0x5e] = iVar11;
  iVar13 = *(int *)(param_1[0x58] + 0x8c);
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = iVar11 * (iVar13 * 4 + 0x98);
  iVar13 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar11,local_84 | 0x10160100,0,0);
  param_1[0x8d] = iVar13;
  if (iVar13 != 0) {
    libc::memset(iVar13,0,iVar11);
  }
  iVar11 = param_1[0x8d];
  if (iVar11 == 0) {
    return;
  }
  uVar20 = param_1[0x5e];
  iVar13 = iVar11 + uVar20 * 0x40;
  iVar12 = iVar13 + uVar20 * 0x20 + (uVar20 & 0x1fffffff) * -8;
  if (uVar20 != 0) {
    iVar3 = param_1[0x58];
    uVar18 = (ulonglong)uVar20;
    iVar15 = 0;
    iVar4 = *(int *)(iVar3 + 0x8c);
    if (uVar20 == 0) {
      uVar18 = 1;
    }
    do {
      *(uint *)(iVar15 * 0x40 + iVar11 + 0x34) = uVar20 * 0x40 + iVar12 + iVar4 * 4 * iVar15;
      puVar6 = PTR_s_fios_worker_cond_0071ab68;
      uVar18 = uVar18 - 1;
      iVar15 = iVar15 + 1;
    } while (uVar18 != 0);
    if (uVar20 == 0) goto LAB_0051e348;
    uVar20 = 0;
    while( true ) {
      iVar4 = uVar20 * 0x40;
      uVar20 = uVar20 + 1;
      FUN_0052d19c(iVar13,puVar6,puVar5,param_1 + 0x62);
      uVar21 = param_1[0x5e];
      *(int *)(iVar4 + iVar11 + 8) = iVar13;
      puVar8 = PTR_PTR_0071ab70;
      puVar7 = PTR_s_fios_mediathread_0071ab6c;
      iVar13 = iVar13 + 0x18;
      if (uVar21 <= uVar20) break;
      iVar11 = param_1[0x8d];
    }
    if (uVar21 != 0) {
      uVar18 = 0;
      do {
        iVar11 = param_1[0x8d];
        iVar4 = (int)((uVar18 & 0xffffffff) << 6);
        FUN_0052e828(iVar12,puVar7,1,puVar8,param_1,0);
        iVar13 = param_1[0x8d];
        uVar18 = uVar18 + 1;
        *(int *)(iVar4 + iVar11 + 4) = iVar12;
        iVar12 = iVar12 + 0x40;
        FUN_0052d814(*(undefined4 *)(iVar4 + iVar13 + 4));
      } while ((uVar18 & 0xffffffff) < (ulonglong)(uint)param_1[0x5e]);
    }
  }
  iVar3 = param_1[0x58];
LAB_0051e348:
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = (*(code *)**(undefined4 **)*puVar10)
                     (puVar10,((ulonglong)*(uint *)(iVar3 + 0x8c) & 0x1fffffff) << 3,0x10170103,0,0)
  ;
  param_1[0x7b] = iVar11;
  if (iVar11 != 0) {
    libc::memset(iVar11,0,((ulonglong)*(uint *)(param_1[0x58] + 0x8c) & 0x1fffffff) << 3);
  }
  if (param_1[0x7b] != 0) {
    FUN_0051a124(param_1[0x58],param_1[0x7b]);
    iVar11 = -0x90;
    if (*(uint *)(param_1[0x58] + 0x88) < 2) {
      iVar11 = -0x8c;
    }
    uVar20 = *(uint *)(&stack0x00000000 + iVar11);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    lVar9 = ((ulonglong)uVar20 & 0x7fffffff) << 1;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,lVar9,0x10180103,0,0);
    param_1[0x7e] = iVar11;
    if (iVar11 != 0) {
      libc::memset(iVar11,0,lVar9);
    }
    if (param_1[0x7e] != 0) {
      param_1[0x7f] = param_1[0x7e] + uVar20;
      FUN_0052d814(param_1 + 0x28);
      if (*(char *)(param_1 + 0x33) != '\0') {
        if ((uint)param_1[0x5e] < 2) {
          iVar11 = param_1[0x58];
        }
        else {
          iVar11 = param_1[0x58];
          if (iVar11 != 0) {
            iVar13 = *(int *)(iVar11 + 0x40);
            iVar12 = *(int *)(iVar11 + 8);
            while (iVar12 != 0x63616368) {
              if (iVar13 == 0) goto LAB_0051e54c;
              piVar16 = (int *)(iVar13 + 8);
              iVar13 = *(int *)(iVar13 + 0x40);
              iVar12 = *piVar16;
            }
            param_1[0x6d] = 1;
          }
        }
LAB_0051e54c:
        FUN_0051b318(iVar11,param_1);
      }
    }
  }
  return;
}



//==== 0051e584  ns=Global  size=0x148
// sig: undefined FUN_0051e584(void)
// callers(1): 0051fd24 FUN_0051fd24
// callees(3): 0051bd64 fios::op_reset; 0051c390 fios::op_event_dispatch; 0051cba4 FUN_0051cba4

void FUN_0051e584(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  char in_RESERVE;
  byte in_cr0;
  
  uVar4 = param_2 & 0xffffffff;
  fios::op_event_dispatch(uVar4,2,0);
  puVar7 = (uint *)(param_1 + 0x220);
  do {
    uVar1 = *puVar7;
    instructionSynchronize();
    while (uVar1 == *puVar7) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar7));
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        piVar6 = (int *)param_2;
        if ((piVar6[7] & 0x800U) != 0) {
          piVar6[0x37] = 0x66696f53;
          piVar6 = (int *)FUN_0051cba4(param_1);
          (*(code *)**(undefined4 **)(*piVar6 + 4))(piVar6,uVar4,0x10400303,0,0);
          return;
        }
        fios::op_reset(uVar4);
        piVar8 = (int *)(param_1 + 0x208);
        piVar6[0x27] = param_1;
        goto LAB_0051e620;
      }
    }
  } while( true );
LAB_0051e620:
  iVar2 = *piVar8;
  instructionSynchronize();
  *piVar6 = iVar2;
  do {
    iVar5 = *piVar8;
    if (iVar2 != *piVar8) break;
    if (in_RESERVE != '\0') {
      iVar5 = storeWordConditionalIndexed(param_2,0,ZEXT48(piVar8));
      *piVar8 = iVar5;
      in_cr0 = 2;
    }
    iVar5 = iVar2;
  } while ((in_cr0 & 2) == 0);
  if (iVar2 == iVar5) {
    return;
  }
  goto LAB_0051e620;
}



//==== 0051e6cc  ns=Global  size=0x8c0
// sig: undefined FUN_0051e6cc(void)
// callers(1): 0051ef8c FUN_0051ef8c
// callees(16): 005106cc FUN_005106cc; 0051a124 FUN_0051a124; 0051b070 FUN_0051b070; 0051b318 FUN_0051b318; 0051be00 FUN_0051be00; 0051cba4 FUN_0051cba4; 005258cc FUN_005258cc; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052d814 FUN_0052d814; 0052e1dc FUN_0052e1dc; 0052e828 FUN_0052e828; 00539124 FUN_00539124; 005d0140 libc::memset; 00604710 FUN_00604710; 00604788 FUN_00604788
// strings: 00667a10: 'scheduler.m_objectLock' | 00667a28: 'scheduler.m_opLock' | 00667a40: 'scheduler.m_opCallbackLock' | 00667a60: 'scheduler.m_completedLock' | 00667a80: 'fios scheduler' | 00667a90: 'scheduler.m_ioLock' | 00667aa8: 'scheduler.m_ioCond' | 00667ac8: 'scheduler.m_idleCond' | 00667ae0: 'scheduler.m_fhLock' | 00667af8: 'scheduler.m_workerLock' | 0051ec58: '}@Sx9J' (raw) | 00667b10: 'fios worker cond' | 00667b28: 'fios mediathread'

void FUN_0051e6cc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  char in_RESERVE;
  byte in_cr0;
  uint local_84;
  
  FUN_005106cc(param_1 + 1);
  puVar5 = PTR_s_scheduler_m_objectLock_0071ab38;
  *param_1 = PTR_PTR_0071ab34;
  FUN_0052d370(param_1 + 4,puVar5);
  FUN_0052d370(param_1 + 0xe,PTR_s_scheduler_m_opLock_0071ab3c);
  FUN_0052e1dc(param_1 + 0x18,PTR_s_scheduler_m_opCallbackLock_0071ab40);
  puVar10 = param_1 + 0x38;
  FUN_0052d370(param_1 + 0x1e,PTR_s_scheduler_m_completedLock_0071ab44);
  FUN_0052e828(param_1 + 0x28,PTR_s_fios_scheduler_0071ab48,0,PTR_PTR_0071ab4c,param_1,0);
  FUN_0052d370(puVar10,PTR_s_scheduler_m_ioLock_0071ab50);
  puVar5 = PTR_DAT_0071ab58;
  FUN_0052d19c(param_1 + 0x42,PTR_s_scheduler_m_ioCond_0071ab54,PTR_DAT_0071ab58,puVar10);
  FUN_0052d19c(param_1 + 0x48,PTR_s_scheduler_m_idleCond_0071ab5c,puVar5,puVar10);
  FUN_0052d370(param_1 + 0x4e,PTR_s_scheduler_m_fhLock_0071ab60);
  uVar2 = *param_3;
  param_1[0x59] = param_3[1];
  puVar6 = PTR_s_scheduler_m_workerLock_0071ab64;
  piVar17 = param_1 + 0x8e;
  param_1[0x5a] = param_3[2];
  param_1[0x5d] = uVar2;
  param_1[0x60] = 0;
  param_1[0x58] = param_2;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 1;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 1;
  FUN_0052d370(param_1 + 0x62,puVar6);
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  piVar16 = param_1 + 0x82;
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_3 + 4);
  uVar14 = *(undefined8 *)(param_3 + 6);
  param_1[0x72] = 0;
  param_1[0x6d] = 0xffffffff;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x76) = uVar14;
  param_1[0x79] = 0;
  param_1[0x8d] = 0;
  param_1[0x6e] = 0;
  param_1[0x7a] = 0;
  *piVar17 = 0;
  *piVar16 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x83] = 0;
  param_1[0x7b] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0;
  param_1[0x8a] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_00604788(param_1);
  FUN_00604710(param_2);
  uVar20 = param_1[0x59];
  param_1[2] = 0x73636864;
  if (uVar20 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    uVar18 = (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1 + (ulonglong)uVar20 * 0xe8 &
             0xffffffff;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,uVar18,0x10130103,0,0);
    param_1[0x5b] = iVar11;
    if (iVar11 != 0) {
      libc::memset(iVar11,0,uVar18);
    }
    if (param_1[0x5b] == 0) {
      param_1[0x59] = 0;
    }
    else if (param_1[0x59] != 0) {
      uVar18 = (ulonglong)(uint)param_1[0x5b] + (ulonglong)uVar20 * 0xe8;
      uVar21 = 0;
      uVar19 = (uVar18 + (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1) - (ulonglong)uVar1;
      do {
        uVar18 = uVar18 - 0xe8;
        FUN_0051be00(uVar18 & 0xffffffff,uVar19 & 0xffffffff);
        if ((int *)uVar18 != (int *)0x0) {
          do {
            iVar11 = *piVar16;
            instructionSynchronize();
            *(int *)uVar18 = iVar11;
            do {
              iVar13 = *piVar16;
              if (iVar11 != *piVar16) break;
              if (in_RESERVE != '\0') {
                iVar13 = storeWordConditionalIndexed(uVar18,0,ZEXT48(piVar16));
                *piVar16 = iVar13;
                in_cr0 = 2;
              }
              iVar13 = iVar11;
            } while ((in_cr0 & 2) == 0);
          } while (iVar11 != iVar13);
        }
        uVar21 = uVar21 + 1;
        uVar19 = uVar19 - uVar1;
      } while (uVar21 < (uint)param_1[0x59]);
    }
  }
  iVar11 = param_1[0x5a];
  if (iVar11 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    iVar13 = iVar11 * (uint)uVar1 + iVar11 * 0x58;
    iVar12 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar13,0x10140103,0,0);
    param_1[0x5c] = iVar12;
    if (iVar12 != 0) {
      libc::memset(iVar12,0,iVar13);
    }
    if (param_1[0x5c] == 0) {
      param_1[0x5a] = 0;
    }
    else if (param_1[0x5a] != 0) {
      iVar13 = param_1[0x5c] + iVar11 * 0x58;
      uVar20 = 0;
      iVar11 = (iVar13 + iVar11 * (uint)uVar1) - (uint)uVar1;
      do {
        iVar12 = iVar13 + -0x58;
        uVar20 = uVar20 + 1;
        FUN_00539124(iVar12,iVar11);
        if (iVar12 != 0) {
          *(int *)(iVar13 + -0x4c) = *piVar17;
          *piVar17 = iVar12;
        }
        iVar13 = iVar12;
        iVar11 = iVar11 - (uint)uVar1;
      } while (uVar20 < (uint)param_1[0x5a]);
    }
  }
  FUN_0051b070(param_1[0x58]);
  iVar11 = *(int *)(param_1[0x58] + 0x90);
  param_1[0x5e] = iVar11;
  iVar13 = *(int *)(param_1[0x58] + 0x8c);
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = iVar11 * (iVar13 * 4 + 0x98);
  iVar13 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar11,local_84 | 0x10160100,0,0);
  param_1[0x8d] = iVar13;
  if (iVar13 != 0) {
    libc::memset(iVar13,0,iVar11);
  }
  iVar11 = param_1[0x8d];
  if (iVar11 == 0) {
    return;
  }
  uVar20 = param_1[0x5e];
  iVar13 = iVar11 + uVar20 * 0x40;
  iVar12 = iVar13 + uVar20 * 0x20 + (uVar20 & 0x1fffffff) * -8;
  if (uVar20 != 0) {
    iVar3 = param_1[0x58];
    uVar18 = (ulonglong)uVar20;
    iVar15 = 0;
    iVar4 = *(int *)(iVar3 + 0x8c);
    if (uVar20 == 0) {
      uVar18 = 1;
    }
    do {
      *(uint *)(iVar15 * 0x40 + iVar11 + 0x34) = uVar20 * 0x40 + iVar12 + iVar4 * 4 * iVar15;
      puVar6 = PTR_s_fios_worker_cond_0071ab68;
      uVar18 = uVar18 - 1;
      iVar15 = iVar15 + 1;
    } while (uVar18 != 0);
    if (uVar20 == 0) goto LAB_0051ed50;
    uVar20 = 0;
    while( true ) {
      iVar4 = uVar20 * 0x40;
      uVar20 = uVar20 + 1;
      FUN_0052d19c(iVar13,puVar6,puVar5,param_1 + 0x62);
      uVar21 = param_1[0x5e];
      *(int *)(iVar4 + iVar11 + 8) = iVar13;
      puVar8 = PTR_PTR_0071ab70;
      puVar7 = PTR_s_fios_mediathread_0071ab6c;
      iVar13 = iVar13 + 0x18;
      if (uVar21 <= uVar20) break;
      iVar11 = param_1[0x8d];
    }
    if (uVar21 != 0) {
      uVar18 = 0;
      do {
        iVar11 = param_1[0x8d];
        iVar4 = (int)((uVar18 & 0xffffffff) << 6);
        FUN_0052e828(iVar12,puVar7,1,puVar8,param_1,0);
        iVar13 = param_1[0x8d];
        uVar18 = uVar18 + 1;
        *(int *)(iVar4 + iVar11 + 4) = iVar12;
        iVar12 = iVar12 + 0x40;
        FUN_0052d814(*(undefined4 *)(iVar4 + iVar13 + 4));
      } while ((uVar18 & 0xffffffff) < (ulonglong)(uint)param_1[0x5e]);
    }
  }
  iVar3 = param_1[0x58];
LAB_0051ed50:
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = (*(code *)**(undefined4 **)*puVar10)
                     (puVar10,((ulonglong)*(uint *)(iVar3 + 0x8c) & 0x1fffffff) << 3,0x10170103,0,0)
  ;
  param_1[0x7b] = iVar11;
  if (iVar11 != 0) {
    libc::memset(iVar11,0,((ulonglong)*(uint *)(param_1[0x58] + 0x8c) & 0x1fffffff) << 3);
  }
  if (param_1[0x7b] != 0) {
    FUN_0051a124(param_1[0x58],param_1[0x7b]);
    iVar11 = -0x90;
    if (*(uint *)(param_1[0x58] + 0x88) < 2) {
      iVar11 = -0x8c;
    }
    uVar20 = *(uint *)(&stack0x00000000 + iVar11);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    lVar9 = ((ulonglong)uVar20 & 0x7fffffff) << 1;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,lVar9,0x10180103,0,0);
    param_1[0x7e] = iVar11;
    if (iVar11 != 0) {
      libc::memset(iVar11,0,lVar9);
    }
    if (param_1[0x7e] != 0) {
      param_1[0x7f] = param_1[0x7e] + uVar20;
      FUN_0052d814(param_1 + 0x28);
      if (*(char *)(param_1 + 0x33) != '\0') {
        if ((uint)param_1[0x5e] < 2) {
          iVar11 = param_1[0x58];
        }
        else {
          iVar11 = param_1[0x58];
          if (iVar11 != 0) {
            iVar13 = *(int *)(iVar11 + 0x40);
            iVar12 = *(int *)(iVar11 + 8);
            while (iVar12 != 0x63616368) {
              if (iVar13 == 0) goto LAB_0051ef54;
              piVar16 = (int *)(iVar13 + 8);
              iVar13 = *(int *)(iVar13 + 0x40);
              iVar12 = *piVar16;
            }
            param_1[0x6d] = 1;
          }
        }
LAB_0051ef54:
        FUN_0051b318(iVar11,param_1);
      }
    }
  }
  return;
}



//==== 0051ef8c  ns=Global  size=0x220
// sig: undefined FUN_0051ef8c(void)
// callers(2): 0001401c boot::boot; 0051f1ac FUN_0051f1ac
// callees(6): 00518fcc FUN_00518fcc; 0051a480 FUN_0051a480; 0051b070 FUN_0051b070; 0051e6cc FUN_0051e6cc; 0052cbd8 fios::print_tty4; 00604710 FUN_00604710
// strings: 00667b40: 'Must call FIOSInit before fios::scheduler::createSchedulerForMedia!\n'

undefined4 * FUN_0051ef8c(undefined4 param_1,undefined8 *param_2)

{
  char cVar3;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  int *local_40 [8];
  
  cVar3 = FUN_00518fcc();
  if (cVar3 == '\0') {
    fios::print_tty4(PTR_s_Must_call_FIOSInit_before_fios__0071ab74);
    return (undefined4 *)0x0;
  }
  cVar3 = FUN_00604710(param_1);
  if ((cVar3 != '\0') && (iVar1 = FUN_0051a480(param_1), iVar1 == 0)) {
    FUN_0051b070(param_1);
    if ((param_2 == (undefined8 *)0x0) ||
       (local_40[0] = (int *)((ulonglong)*param_2 >> 0x20), local_40[0] == (int *)0x0)) {
      local_40[0] = *(int **)(PTR_DAT_0071ab10 + 8);
    }
    puVar2 = (undefined4 *)
             (*(code *)**(undefined4 **)*local_40[0])(local_40[0],0x250,0x10100103,0,0);
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0051e6cc(puVar2,param_1,local_40);
      puVar4 = puVar2;
    }
    puVar2 = (undefined4 *)FUN_0051a480(param_1);
    if (puVar4 != puVar2) {
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*puVar4)(puVar4);
        (*(code *)**(undefined4 **)(*local_40[0] + 4))(local_40[0],puVar4,0x10100103,0,0);
      }
      puVar4 = (undefined4 *)0x0;
      FUN_0051a480(param_1);
    }
    return puVar4;
  }
  return (undefined4 *)0x0;
}



//==== 0051f1ac  ns=Global  size=0x48
// sig: undefined FUN_0051f1ac(void)
// callers(0): 
// callees(1): 0051ef8c FUN_0051ef8c

undefined4
FUN_0051f1ac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uStack00000040;
  undefined4 uStack00000058;
  undefined1 local_20 [32];
  
  uStack00000040 = param_3;
  uStack00000058 = param_6;
  uVar1 = FUN_0051ef8c(param_1,local_20);
  return uVar1;
}



//==== 0051f1f4  ns=Global  size=0x1ec
// sig: undefined FUN_0051f1f4(void)
// callers(0): 
// callees(8): 0051b1ec FUN_0051b1ec; 0051cba4 FUN_0051cba4; 0051cbc8 FUN_0051cbc8; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c; 00604788 FUN_00604788

void FUN_0051f1f4(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  char cVar6;
  int *piVar5;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  cVar6 = FUN_00604788(param_1);
  puVar3 = PTR_DAT_0071ab14;
  if (cVar6 != '\0') {
    uVar7 = ZEXT48(PTR_DAT_0071ab14);
    do {
      if (param_1 != *(undefined4 **)puVar3) break;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,uVar7);
        *(undefined4 *)puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    puVar4 = param_1 + 0x38;
    fios::lwmutex_lock_checked(puVar4);
    sync(1);
    param_1[0x61] = 0;
    FUN_0052dcf0(param_1 + 0x42);
    dVar9 = (double)DAT_0071ab78;
    dVar10 = (double)DAT_0071ab28;
    dVar11 = *(double *)PTR_DAT_0071ab1c;
    while( true ) {
      cVar6 = FUN_0051cbc8(param_1);
      if (cVar6 != '\0') break;
      do {
        lVar2 = TBLr;
      } while ((int)lVar2 == 0);
      dVar8 = dVar11 * dVar9;
      if (dVar8 < dVar10) {
        uVar7 = (ulonglong)dVar8;
      }
      else {
        uVar7 = (longlong)(dVar8 - dVar10) ^ 0x8000000000000000;
      }
      FUN_0052e49c(param_1 + 0x48,puVar4,lVar2 + uVar7);
    }
    fios::lwmutex_unlock_checked(puVar4);
    FUN_0051b1ec(param_1[0x58]);
    piVar5 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)*param_1)(param_1);
    (*(code *)**(undefined4 **)(*piVar5 + 4))(piVar5,param_1,0x10100103,0,0);
  }
  return;
}



//==== 0051f3e0  ns=Global  size=0x67c
// sig: undefined FUN_0051f3e0(void)
// callers(0): 
// callees(19): 005107d0 fios::handle_invalidate_magic; 0051a480 FUN_0051a480; 0051b318 FUN_0051b318; 0051cba4 FUN_0051cba4; 005238c0 FUN_005238c0; 0052cbd8 fios::print_tty4; 0052ced8 FUN_0052ced8; 0052d018 FUN_0052d018; 0052d0e8 FUN_0052d0e8; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8; 005390ac fios::handle_destroy; 00604710 FUN_00604710; 00604738 fios::check_magic; 00604760 fios::check_magic; 00604788 FUN_00604788
// strings: 00667b88: 'Scheduler shutting down\n' | 00667ba8: '  Total ops completed: %d\n' | 00667bc8: '  Ops completed by overlap: %d\n' | 00667be8: '  Emax = %lld ms\n' | 00667c00: '  Variables:\n' | 00667c10: '  %s = %lld us\n'

void FUN_0051f3e0(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = PTR_PTR_0071ab34;
  FUN_00604788(param_1);
  if (*PTR_PTR_0071ab7c == '\0') {
    fios::print_tty4(PTR_s_Scheduler_shutting_down_0071ab80);
    instructionSynchronize();
    fios::print_tty4(PTR_s_Total_ops_completed___d_0071ab84,param_1[0x8a]);
    fios::print_tty4(PTR_s_Ops_completed_by_overlap___d_0071ab88,param_1[0x8c]);
    dVar15 = *(double *)PTR_DAT_0071ab1c;
    dVar12 = (double)*(longlong *)(param_1 + 0x7c) / dVar15;
    if ((double)DAT_0071ab28 <= dVar12) {
      uVar13 = (longlong)(dVar12 - (double)DAT_0071ab28) ^ 0x8000000000000000;
    }
    else {
      uVar13 = (ulonglong)dVar12;
    }
    fios::print_tty4(PTR_s_Emax____lld_ms_0071ab8c,(longlong)(uVar13 + 999999) / 1000000);
    fios::print_tty4(PTR_s_Variables__0071ab90);
    puVar2 = PTR_s__s____lld_us_0071ab94;
    piVar4 = (int *)param_1[0x58];
    if (piVar4[0x23] != 0) {
      dVar12 = (double)DAT_0071ab28;
      uVar13 = 0;
      do {
        uVar5 = (*(code *)**(undefined4 **)(*piVar4 + 0xc))(piVar4,uVar13 & 0xffffffff);
        dVar14 = (double)*(longlong *)((int)((uVar13 & 0xffffffff) << 3) + param_1[0x7b]) / dVar15;
        if (dVar14 < dVar12) {
          uVar7 = (ulonglong)dVar14;
        }
        else {
          uVar7 = (longlong)(dVar14 - dVar12) ^ 0x8000000000000000;
        }
        fios::print_tty4(puVar2,uVar5,(longlong)(uVar7 + 999) / 1000);
        piVar4 = (int *)param_1[0x58];
        uVar7 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)piVar4[0x23]);
    }
  }
  else {
    piVar4 = (int *)param_1[0x58];
  }
  cVar6 = FUN_00604710(piVar4);
  if ((cVar6 != '\0') && (puVar3 = (undefined4 *)FUN_0051a480(param_1[0x58]), param_1 == puVar3)) {
    FUN_0051b318(param_1[0x58],0);
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_0052ced8(param_1 + 0x28);
  }
  iVar9 = param_1[0x7e];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10180103,0,0);
  }
  iVar9 = param_1[0x7b];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10170103,0,0);
  }
  puVar3 = param_1 + 0x62;
  if (param_1[0x8d] != 0) {
    fios::lwmutex_lock_checked(puVar3);
    iVar9 = param_1[0x5e];
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (iVar9 != 0) {
      iVar11 = 0;
      do {
        iVar1 = iVar11 * 0x40;
        iVar11 = iVar11 + 1;
        FUN_0052dcf0(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
      } while (iVar9 != iVar11);
    }
    fios::lwmutex_unlock_checked(puVar3);
    uVar10 = param_1[0x5e];
    if (uVar10 == 0) {
      iVar9 = param_1[0x8d];
    }
    else {
      uVar8 = 0;
      iVar9 = param_1[0x8d];
      do {
        uVar13 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        iVar1 = (int)((uVar13 & 0x3ffffff) << 6);
        iVar11 = *(int *)(iVar1 + iVar9 + 4);
        if (iVar11 != 0) {
          FUN_0052ced8(iVar11);
          FUN_0052d018(*(undefined4 *)(iVar1 + param_1[0x8d] + 4));
          FUN_0052d0e8(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
          iVar9 = param_1[0x8d];
        }
      } while (uVar10 != uVar8);
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10160103,0,0);
  }
  iVar9 = param_1[0x5c];
  if (iVar9 != 0) {
    if (param_1[0x5a] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        fios::check_magic(iVar9);
        fios::handle_destroy(iVar9);
        iVar9 = iVar9 + 0x58;
      } while (uVar10 < (uint)param_1[0x5a]);
      iVar9 = param_1[0x5c];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10140103,0,0);
  }
  iVar9 = param_1[0x5b];
  if (iVar9 != 0) {
    if (param_1[0x59] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        fios::check_magic(iVar9);
        iVar9 = iVar9 + 0xe8;
      } while (uVar10 < (uint)param_1[0x59]);
      iVar9 = param_1[0x5b];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10130103,0,0);
  }
  FUN_0052df14(puVar3);
  FUN_0052df14(param_1 + 0x4e);
  FUN_0052d0e8(param_1 + 0x48);
  FUN_0052d0e8(param_1 + 0x42);
  FUN_0052df14(param_1 + 0x38);
  FUN_0052d018(param_1 + 0x28);
  FUN_0052df14(param_1 + 0x1e);
  FUN_0052e5f8(param_1 + 0x18);
  FUN_0052df14(param_1 + 0xe);
  FUN_0052df14(param_1 + 4);
  fios::handle_invalidate_magic(param_1 + 1);
  return;
}



//==== 0051fa5c  ns=Global  size=0x2c8
// sig: undefined FUN_0051fa5c(void)
// callers(2): 005207a0 fios::stat_setup; 00520e78 FUN_00520e78
// callees(9): 00519f24 FUN_00519f24; 0051cb08 FUN_0051cb08; 0051cba4 FUN_0051cba4; 0052cbd8 fios::print_tty4; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005390ac fios::handle_destroy; 00539124 FUN_00539124; 00604788 FUN_00604788
// strings: 00667c20: "Filehandle path too long or invalid: '%s'\n"

int FUN_0051fa5c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *puVar5;
  char cVar9;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_150 [256];
  
  cVar9 = FUN_00604788(param_1);
  if (cVar9 == '\0') {
    return 0;
  }
  fios::lwmutex_lock_checked(param_1 + 0x10);
  if ((param_2 & 0x80) == 0) {
    iVar7 = *(int *)(param_1 + 0x238);
    if (iVar7 == 0) goto LAB_0051fae0;
    bVar4 = false;
    *(int *)(param_1 + 0x238) = *(int *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0xc) = 0;
  }
  else {
LAB_0051fae0:
    puVar6 = (undefined4 *)FUN_0051cba4(param_1);
    iVar7 = (*(code *)**(undefined4 **)*puVar6)
                      (puVar6,(ulonglong)*(ushort *)(PTR_DAT_0071ab10 + 0xc) + 0x58,0x10300003,0,0);
    iVar12 = 0;
    if (iVar7 == 0) goto LAB_0051fc1c;
    bVar4 = true;
    FUN_00539124(iVar7,iVar7 + 0x58);
  }
  puVar5 = PTR_DAT_0071ab30;
  *(undefined8 *)(iVar7 + 0x48) = 0;
  *(undefined8 *)(iVar7 + 0x38) = 0;
  *(undefined8 *)(iVar7 + 0x40) = 0;
  uVar1 = *(undefined4 *)puVar5;
  uVar2 = *(undefined4 *)(puVar5 + 4);
  uVar3 = *(undefined4 *)(puVar5 + 8);
  uVar10 = *(undefined8 *)(puVar5 + 0x10);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(puVar5 + 0x18);
  *(undefined4 *)(iVar7 + 0x54) = 0;
  *(uint *)(iVar7 + 0x50) = param_2;
  *(undefined4 *)(iVar7 + 0x10) = uVar1;
  *(undefined4 *)(iVar7 + 0x14) = uVar2;
  *(undefined4 *)(iVar7 + 0x18) = uVar3;
  *(undefined8 *)(iVar7 + 0x20) = uVar10;
  *(int *)(iVar7 + 8) = param_1;
  cVar9 = FUN_00519f24(param_3,auStack_150);
  if (cVar9 == '\0') {
    fios::print_tty4(PTR_s_Filehandle_path_too_long_or_inva_0071ab98,param_3);
    if (bVar4) {
      fios::handle_destroy(iVar7);
      piVar8 = (int *)FUN_0051cba4(param_1);
      iVar12 = 0;
      (*(code *)**(undefined4 **)(*piVar8 + 4))(piVar8,iVar7,0x10300003,0,0);
    }
    else {
      *(int *)(iVar7 + 0xc) = *(int *)(param_1 + 0x238);
      iVar12 = 0;
      *(int *)(param_1 + 0x238) = iVar7;
    }
  }
  else {
    FUN_0051cb08(iVar7 + 0x30,auStack_150);
    if (bVar4) {
      *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) | 0x80;
    }
    uVar11 = *(int *)(param_1 + 0x240) + 1;
    *(uint *)(param_1 + 0x240) = uVar11;
    if (*(uint *)(param_1 + 0x248) < uVar11) {
      *(uint *)(param_1 + 0x248) = uVar11;
    }
    *(int *)(iVar7 + 0xc) = *(int *)(param_1 + 0x23c);
    *(int *)(param_1 + 0x23c) = iVar7;
    iVar12 = iVar7;
  }
LAB_0051fc1c:
  fios::lwmutex_unlock_checked(param_1 + 0x10);
  return iVar12;
}



//==== 0051fd24  ns=Global  size=0x178
// sig: undefined FUN_0051fd24(void)
// callers(8): 005040f4 FUN_005040f4; 00506c10 FUN_00506c10; 00506f68 FUN_00506f68; 0050708c FUN_0050708c; 0051c030 fios::op_wait_result; 00522b14 FUN_00522b14; 005241b8 FUN_005241b8; 00535d38 FUN_00535d38
// callees(5): 0051e584 FUN_0051e584; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604738 fios::check_magic; 00604788 FUN_00604788
// strings: 0051fdfc: '}+Kxy)' (raw)

void FUN_0051fd24(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  char in_RESERVE;
  byte in_cr0;
  
  cVar7 = FUN_00604788(param_1);
  if (cVar7 == '\0') {
    return;
  }
  cVar7 = fios::check_magic(param_2);
  puVar8 = param_2 + 0xc;
  if (cVar7 == '\0') {
    return;
  }
  do {
    uVar1 = *puVar8;
    instructionSynchronize();
    while (uVar1 == *puVar8) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 | 0x300,0,ZEXT48(puVar8));
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        iVar6 = param_1 + 0x78;
        fios::lwmutex_lock_checked(iVar6);
        if (param_2 == (undefined4 *)0x0) goto LAB_0051fe68;
        puVar5 = *(undefined4 **)(param_1 + 0x21c);
        puVar4 = (undefined4 *)(param_1 + 0x21c);
        goto joined_r0x0051fde8;
      }
    }
  } while( true );
joined_r0x0051fde8:
  puVar3 = puVar5;
  if (param_2 == puVar3) {
    if (param_2 != (undefined4 *)0x0) {
      *puVar4 = *param_2;
      *param_2 = 0;
      fios::lwmutex_unlock_checked(iVar6);
      FUN_0051e584(param_1,param_2);
      return;
    }
LAB_0051fe68:
    fios::lwmutex_unlock_checked(iVar6);
    return;
  }
  if (puVar3 == (undefined4 *)0x0) goto LAB_0051fe68;
  puVar5 = (undefined4 *)*puVar3;
  puVar4 = puVar3;
  goto joined_r0x0051fde8;
}



//==== 0051fe9c  ns=fios  size=0xbc
// sig: undefined op_complete_immediate(void)
// callers(16): 0051ff58 FUN_0051ff58; 005202c8 FUN_005202c8; 0052046c FUN_0052046c; 005205b4 FUN_005205b4; 005207a0 fios::stat_setup; 00520a28 FUN_00520a28; 00520bd8 FUN_00520bd8; 00520e78 FUN_00520e78; 005210c4 FUN_005210c4; 00521228 FUN_00521228; 0052138c FUN_0052138c; 0052157c FUN_0052157c; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 00525524 FUN_00525524
// callees(4): 0051c390 fios::op_event_dispatch; 00526fa8 fios::op_trace_complete; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

undefined4 * fios::op_complete_immediate(int param_1,undefined4 *param_2)

{
  if ((*(uint *)(PTR_DAT_0071ab10 + 0x18) & 1) != 0) {
    op_trace_complete(param_2);
  }
  param_2[0x34] = 1;
  lwmutex_lock_checked(param_1 + 0x78);
  *param_2 = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x21c) = param_2;
  lwmutex_unlock_checked(param_1 + 0x78);
  op_event_dispatch(param_2,1,0);
  return param_2;
}



//==== 0051ff58  ns=Global  size=0x370
// sig: undefined FUN_0051ff58(void)
// callers(16): 005202c8 FUN_005202c8; 0052046c FUN_0052046c; 005205b4 FUN_005205b4; 005207a0 fios::stat_setup; 00520a28 FUN_00520a28; 00520bd8 FUN_00520bd8; 00520e78 FUN_00520e78; 005210c4 FUN_005210c4; 00521228 FUN_00521228; 0052138c FUN_0052138c; 0052157c FUN_0052157c; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 00525050 FUN_00525050; 0052521c fios::read_req_setup; 00525524 FUN_00525524
// callees(10): 00519f24 FUN_00519f24; 0051cb08 FUN_0051cb08; 0051fe9c fios::op_complete_immediate; 0052757c FUN_0052757c; 00527584 FUN_00527584; 0052cbd8 fios::print_tty4; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00650644 sys::sys_process_is_stack

ulonglong FUN_0051ff58(int param_1,ulonglong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar8;
  char cVar9;
  ulonglong uVar7;
  char *pcVar10;
  int *piVar11;
  char in_RESERVE;
  byte bVar12;
  int iStack_1c4;
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [264];
  
  piVar5 = (int *)param_2;
  uVar2 = piVar5[7];
  bVar1 = (uVar2 & 0xffffc700) == 0;
  bVar12 = bVar1 << 1;
  uVar7 = param_2 & 0xffffffff;
  if (bVar1) {
    uVar3 = piVar5[0x30];
    if ((uVar3 + 0x40000000 < 0x10000001) || (0xdfffffff < uVar3)) {
      piVar5[7] = uVar2 | 0x20;
    }
    iVar8 = sys::sys_process_is_stack(uVar3);
    if (iVar8 != 0) {
      piVar5[7] = piVar5[7] | 0x40;
    }
    piVar11 = piVar5 + 0x12;
    if (*piVar11 == 0) {
      FUN_0051cb08(param_2 + 0x34 & 0xffffffff,0);
    }
    else {
      cVar9 = FUN_00519f24(*piVar11,auStack_140);
      if (cVar9 == '\0') {
        fios::print_tty4(*(undefined4 *)(iStack_1c4 + -0x778c),*piVar11);
        piVar5[0x11] = -0x7ffef8fb;
        uVar7 = fios::op_complete_immediate(param_1,uVar7);
        return uVar7 & 0xffffffff;
      }
      FUN_0051cb08(param_2 + 0x34 & 0xffffffff,auStack_140);
      pcVar4 = (char *)*(undefined4 *)(param_2 + 0x34);
      pcVar10 = (char *)0x0;
      if (*pcVar4 != '\0') {
        pcVar10 = pcVar4;
      }
      *piVar11 = (int)pcVar10;
      piVar5[0x13] = piVar5[0xe];
    }
    iVar8 = *(int *)(iStack_1c4 + -0x7818);
    if ((*(uint *)(iVar8 + 0x18) & 1) != 0) {
      FUN_00527584(uVar7);
    }
    piVar11 = (int *)(param_1 + 0x20c);
    if ((piVar5[7] & 0x80U) == 0) {
      do {
        iVar8 = *piVar11;
        instructionSynchronize();
        *piVar5 = iVar8;
        do {
          iVar6 = *piVar11;
          if (iVar8 != *piVar11) break;
          if (in_RESERVE != '\0') {
            iVar6 = storeWordConditionalIndexed(param_2,0,ZEXT48(piVar11));
            *piVar11 = iVar6;
            bVar12 = 2;
          }
          iVar6 = iVar8;
        } while ((bVar12 & 2) == 0);
        if (iVar8 == iVar6) {
          fios::lwmutex_lock_checked(param_1 + 0xe0);
          FUN_0052dcf0(param_1 + 0x108);
          fios::lwmutex_unlock_checked(param_1 + 0xe0);
          return uVar7;
        }
      } while( true );
    }
    iVar6 = piVar5[0x10];
    if ((((iVar6 - 10U < 2) || (iVar6 == 6)) || (iVar6 == 7)) || (iVar6 == 0x11)) {
      *(ushort *)(piVar5 + 0x25) = (ushort)piVar5[7] & 0x30fe | *(ushort *)(piVar5 + 0x25);
    }
    if ((*(uint *)(iVar8 + 0x18) & 1) != 0) {
      FUN_0052757c(uVar7);
    }
    (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x160) + 0x14))
              (*(int **)(param_1 + 0x160),auStack_180);
    uVar7 = fios::op_complete_immediate(param_1,uVar7);
  }
  else {
    piVar5[0x11] = -0x7ffef8f9;
    piVar5[7] = uVar2 & 0x38ff;
    uVar7 = fios::op_complete_immediate(param_1,uVar7);
  }
  return uVar7 & 0xffffffff;
}



