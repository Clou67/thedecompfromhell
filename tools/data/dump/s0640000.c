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



//==== 0064011c  ns=Global  size=0x44
// sig: undefined FUN_0064011c(void)
// callers(0): 
// callees(1): 0064f1c4 cell::cellFsClose

uint FUN_0064011c(undefined4 param_1)

{
  uint uVar2;
  ulonglong uVar1;
  
  uVar2 = cell::cellFsClose(param_1);
  uVar2 = (int)(((int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f ^ uVar2)) >> 0x1f;
  uVar1 = ((ulonglong)uVar2 & 3) << 0x1d | (ulonglong)(uVar2 >> 3);
  return (uint)(uVar1 << 3) | (uint)uVar1 >> 0x1d;
}



//==== 00640160  ns=Global  size=0x4
// sig: undefined thunk_FUN_0064011c(void)
// callers(0): 
// callees(0): 

uint thunk_FUN_0064011c(undefined4 param_1)

{
  uint uVar2;
  ulonglong uVar1;
  
  uVar2 = cell::cellFsClose(param_1);
  uVar2 = (int)(((int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f ^ uVar2)) >> 0x1f;
  uVar1 = ((ulonglong)uVar2 & 3) << 0x1d | (ulonglong)(uVar2 >> 3);
  return (uint)(uVar1 << 3) | (uint)uVar1 >> 0x1d;
}



//==== 00640164  ns=Global  size=0x74
// sig: undefined FUN_00640164(void)
// callers(0): 
// callees(1): 0064f1e4 cell::cellFsRead

undefined4
FUN_00640164(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [4];
  undefined4 uStack_2c;
  
  iVar1 = cell::cellFsRead(param_1,param_2,param_3,local_30);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uStack_2c;
    }
  }
  else {
    uVar2 = 0xfffffffc;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  return uVar2;
}



//==== 006401d8  ns=Global  size=0xac
// sig: undefined FUN_006401d8(void)
// callers(0): 
// callees(1): 0064ffe4 cell::cellFsLseek

undefined8 FUN_006401d8(undefined4 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_20 [32];
  
  if (param_3 == 1) {
    iVar1 = cell::cellFsLseek(param_1,param_2,1,local_20);
  }
  else if (param_3 == 0) {
    iVar1 = cell::cellFsLseek(param_1,param_2,0,local_20);
  }
  else {
    if (param_3 != 2) {
      return 0xfffffffffffffffd;
    }
    iVar1 = cell::cellFsLseek(param_1,param_2,2,local_20);
  }
  if (iVar1 != 0) {
    return 0xfffffffffffffffd;
  }
  return 0xffffffffffffffff;
}



//==== 00640284  ns=Global  size=0x68
// sig: undefined FUN_00640284(void)
// callers(1): 006402ec FUN_006402ec
// callees(1): 0064f204 cell::cellFsOpen

undefined4 FUN_00640284(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];
  
  iVar1 = cell::cellFsOpen(param_1,0,local_20,0,0);
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    uVar2 = 0;
    *param_2 = local_20[0];
  }
  else {
    *param_2 = 0xffffffff;
  }
  return uVar2;
}



//==== 006402ec  ns=Global  size=0x30
// sig: undefined FUN_006402ec(void)
// callers(0): 
// callees(1): 00640284 FUN_00640284

int FUN_006402ec(void)

{
  int iVar1;
  
  iVar1 = FUN_00640284();
  if (-1 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 0064031c  ns=Global  size=0x50
// sig: undefined FUN_0064031c(void)
// callers(2): 00636f14 FUN_00636f14; 00640820 FUN_00640820
// callees(0): 

void FUN_0064031c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar2 = (undefined1 *)(param_1 + 0x1d);
  lVar4 = 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    puVar1 = puVar2 + -1;
    puVar3 = (undefined4 *)(puVar2 + -5);
    *puVar2 = 0;
    puVar2 = puVar2 + 0xc;
    *puVar1 = 0;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



//==== 0064036c  ns=Global  size=0x64
// sig: undefined FUN_0064036c(void)
// callers(0): 
// callees(0): 

uint FUN_0064036c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1[2] - param_1[4] < *param_1) {
    uVar1 = param_1[1];
    if ((param_1[(uVar1 * 4 + 7) - (uVar1 & 0x3fffffff)] & 0xffff0000) == 0) {
      *(undefined1 *)(param_1 + ((uVar1 * 4 + 7) - (uVar1 & 0x3fffffff))) = 1;
      uVar2 = uVar1;
    }
  }
  return uVar2;
}



//==== 006403d0  ns=Global  size=0x5c
// sig: undefined FUN_006403d0(void)
// callers(0): 
// callees(0): 

uint FUN_006403d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x10)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    param_1 = uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4 + param_1;
    if ((*(uint *)(param_1 + 0x1c) & 0xffff0000) == 0) {
      *(undefined1 *)(param_1 + 0x1d) = 1;
      uVar2 = uVar1;
    }
  }
  return uVar2;
}



//==== 0064042c  ns=Global  size=0x60
// sig: undefined FUN_0064042c(void)
// callers(2): 0064048c FUN_0064048c; 006404b8 FUN_006404b8
// callees(0): 

uint FUN_0064042c(int *param_1,uint param_2)

{
  do {
    if ((*(char *)((int)param_1 + param_2 * 0x10 + (param_2 & 0x3fffffff) * -4 + 0x1d) == '\0') &&
       (*(char *)(param_1 + ((param_2 * 4 + 7) - (param_2 & 0x3fffffff))) != '\0')) {
      return param_2;
    }
    param_2 = param_2 + 1;
    if (*param_1 <= (int)param_2) {
      param_2 = 0;
    }
  } while (param_1[1] != param_2);
  return 0xffffffff;
}



//==== 0064048c  ns=Global  size=0x2c
// sig: undefined FUN_0064048c(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(1): 0064042c FUN_0064042c

undefined8 FUN_0064048c(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) < 1) {
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_0064042c(param_1,*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}



//==== 006404b8  ns=Global  size=0x38
// sig: undefined FUN_006404b8(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(1): 0064042c FUN_0064042c

undefined8 FUN_006404b8(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 + 1;
  if (*param_1 <= param_2) {
    param_2 = 0;
  }
  if (param_1[1] == param_2) {
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_0064042c(param_1,param_2);
  return uVar1;
}



//==== 006404f0  ns=Global  size=0x74
// sig: undefined FUN_006404f0(void)
// callers(0): 
// callees(0): 

int FUN_006404f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = 0;
  uVar2 = param_1[3];
  if (0 < (int)(param_1[2] - param_1[4])) {
    uVar4 = (ulonglong)(param_1[2] - param_1[4]);
    do {
      uVar3 = uVar2 + 1;
      if (*(char *)(param_1 + ((uVar2 * 4 + 7) - (uVar2 & 0x3fffffff))) == '\0') {
        iVar1 = iVar1 + param_1[(uVar2 * 4 + 6) - (uVar2 & 0x3fffffff)];
      }
      uVar2 = uVar3;
      if (*param_1 <= uVar3) {
        uVar2 = 0;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return iVar1;
}



//==== 00640564  ns=Global  size=0x8
// sig: undefined FUN_00640564(void)
// callers(1): 00637d2c 989snd::snd_ProcessStreamTick
// callees(0): 

undefined4 FUN_00640564(undefined4 *param_1)

{
  return *param_1;
}



//==== 0064056c  ns=Global  size=0x14
// sig: undefined FUN_0064056c(void)
// callers(1): 00637d2c 989snd::snd_ProcessStreamTick
// callees(0): 

int FUN_0064056c(int param_1)

{
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
}



//==== 00640580  ns=Global  size=0x74
// sig: undefined FUN_00640580(void)
// callers(1): 00637d2c 989snd::snd_ProcessStreamTick
// callees(0): 

ulonglong FUN_00640580(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar2 = param_1[3];
  if (0 < (int)(param_1[2] - param_1[4])) {
    uVar4 = (ulonglong)(param_1[2] - param_1[4]);
    do {
      uVar3 = uVar2 + 1;
      uVar1 = uVar1 - ((longlong)(-(ulonglong)*(byte *)(param_1 + uVar2 * 3 + 7) << 0x20) >> 0x3f);
      uVar2 = uVar3;
      if (*param_1 <= uVar3) {
        uVar2 = 0;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar1 & 0xffffffff;
}



//==== 006405f4  ns=Global  size=0x74
// sig: undefined FUN_006405f4(void)
// callers(1): 00637d2c 989snd::snd_ProcessStreamTick
// callees(0): 

ulonglong FUN_006405f4(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar2 = param_1[1];
  uVar3 = *param_1 - (param_1[2] - param_1[4]);
  if (0 < (int)uVar3) {
    uVar4 = (ulonglong)uVar3;
    do {
      uVar3 = uVar2 + 1;
      uVar1 = uVar1 - ((longlong)(-(ulonglong)*(byte *)((int)param_1 + uVar2 * 0xc + 0x1d) << 0x20)
                      >> 0x3f);
      uVar2 = uVar3;
      if (*param_1 <= uVar3) {
        uVar2 = 0;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar1 & 0xffffffff;
}



//==== 00640668  ns=Global  size=0x3c
// sig: undefined FUN_00640668(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(0): 

undefined4 FUN_00640668(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  param_1 = ((int)((param_2 & 0xffffffff) << 4) - (int)((param_2 & 0xffffffff) << 2)) + param_1;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return uVar1;
}



//==== 006406a4  ns=Global  size=0x40
// sig: undefined FUN_006406a4(void)
// callers(0): 
// callees(0): 

void FUN_006406a4(uint *param_1)

{
  if (param_1[1] + 1 < *param_1) {
    param_1[1] = param_1[1] + 1;
    param_1[2] = param_1[2] + 1;
    return;
  }
  param_1[1] = 0;
  param_1[2] = param_1[2] + 1;
  return;
}



//==== 006406e4  ns=Global  size=0x3c
// sig: undefined FUN_006406e4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_006406e4(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  param_1 = ((int)((param_2 & 0xffffffff) << 4) - (int)((param_2 & 0xffffffff) << 2)) + param_1;
  if (*(char *)(param_1 + 0x1d) != '\0') {
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  return uVar1;
}



//==== 00640720  ns=Global  size=0x40
// sig: undefined FUN_00640720(void)
// callers(0): 
// callees(0): 

void FUN_00640720(uint *param_1)

{
  if (param_1[3] + 1 < *param_1) {
    param_1[3] = param_1[3] + 1;
    param_1[4] = param_1[4] + 1;
    return;
  }
  param_1[3] = 0;
  param_1[4] = param_1[4] + 1;
  return;
}



//==== 00640760  ns=Global  size=0x20
// sig: undefined FUN_00640760(void)
// callers(0): 
// callees(0): 

undefined1 FUN_00640760(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2 * 0xc + 0x1c);
}



//==== 00640780  ns=Global  size=0x20
// sig: undefined FUN_00640780(void)
// callers(0): 
// callees(0): 

undefined1 FUN_00640780(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2 * 0xc + 0x1d);
}



//==== 006407a0  ns=Global  size=0x20
// sig: undefined FUN_006407a0(void)
// callers(0): 
// callees(0): 

undefined4 FUN_006407a0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0xc + 0x14);
}



//==== 006407c0  ns=Global  size=0x20
// sig: undefined FUN_006407c0(void)
// callers(1): 00636f6c FUN_00636f6c
// callees(0): 

void FUN_006407c0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0xc + 0x14) = param_3;
  return;
}



//==== 006407e0  ns=Global  size=0x20
// sig: undefined FUN_006407e0(void)
// callers(1): 00636eec FUN_00636eec
// callees(0): 

undefined4 FUN_006407e0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0xc + 0x18);
}



//==== 00640800  ns=Global  size=0x20
// sig: undefined FUN_00640800(void)
// callers(1): 0063a4c4 FUN_0063a4c4
// callees(0): 

void FUN_00640800(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0xc + 0x18) = param_3;
  return;
}



//==== 00640820  ns=Global  size=0x50
// sig: undefined FUN_00640820(void)
// callers(1): 00636f6c FUN_00636f6c
// callees(2): 005d0140 libc::memset; 0064031c FUN_0064031c

void FUN_00640820(undefined4 *param_1,undefined4 param_2)

{
  libc::memset(param_1,0,0xd4);
  FUN_0064031c(param_1);
  *param_1 = param_2;
  return;
}



//==== 00640870  ns=Global  size=0xcc
// sig: undefined FUN_00640870(void)
// callers(2): 0063c8a0 FUN_0063c8a0; 0063d08c FUN_0063d08c
// callees(0): 

undefined4 FUN_00640870(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1 + (longlong)*(int *)((int)param_1 + 0x1c) + param_2;
  if ((param_3 == 1) || (uVar1 = 0xffffffff, lVar3 = param_2, param_3 == 0)) {
    lVar2 = lVar3 - *param_1;
    if ((-1 < lVar2) && (lVar2 < *(int *)(param_1 + 3))) {
      *(int *)((int)param_1 + 0x1c) = (int)lVar2;
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = lVar3;
    (*(code *)**(undefined4 **)(*(int *)(param_1 + 1) + 8))
              (*(undefined4 *)((int)param_1 + 0xc),lVar3,0,param_4);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0064093c  ns=Global  size=0x14
// sig: undefined FUN_0064093c(void)
// callers(1): 0063c8a0 FUN_0063c8a0
// callees(0): 

longlong FUN_0064093c(longlong *param_1)

{
  return (longlong)*(int *)((int)param_1 + 0x1c) + *param_1;
}



//==== 00640950  ns=Global  size=0x3c
// sig: undefined FUN_00640950(void)
// callers(2): 0063c8a0 FUN_0063c8a0; 0063d08c FUN_0063d08c
// callees(0): 

longlong FUN_00640950(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(int *)((int)param_1 + 0xc) != 0) {
    param_1[3] = 0;
    lVar1 = (longlong)*(int *)((int)param_1 + 0x1c) + *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return lVar1;
}



//==== 0064098c  ns=Global  size=0x94
// sig: undefined FUN_0064098c(void)
// callers(2): 0063c8a0 FUN_0063c8a0; 0063d08c FUN_0063d08c
// callees(0): 

longlong FUN_0064098c(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  puVar1 = *(undefined4 **)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = param_4;
  *(int *)((int)param_1 + 0xc) = (int)param_3;
  *(undefined4 *)((int)param_1 + 0x14) = param_5;
  *(int *)(param_1 + 1) = param_2;
  lVar2 = (*(code *)*puVar1)(param_3,0,1,param_6);
  *param_1 = lVar2;
  return -(ulonglong)(lVar2 < 0);
}



//==== 00640a20  ns=Global  size=0x218
// sig: undefined FUN_00640a20(void)
// callers(2): 0063c8a0 FUN_0063c8a0; 0063d08c FUN_0063d08c
// callees(1): 005c5ad0 libc::memcpy

int FUN_00640a20(longlong *param_1,void *param_2,uint param_3,uint *param_4,undefined4 param_5,
                undefined1 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint __n;
  undefined1 local_70 [24];
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      iVar3 = *(int *)((int)param_1 + 0x1c);
      __n = param_3 - uVar4;
      uVar2 = *(int *)(param_1 + 3) - iVar3;
      pvVar5 = param_2;
      if (uVar2 != 0) {
        if (uVar2 <= __n) {
          __n = uVar2;
        }
        uVar4 = uVar4 + __n;
        pvVar5 = (void *)((int)param_2 + __n);
        libc::memcpy(param_2,(void *)(iVar3 + *(int *)(param_1 + 2)),__n);
        iVar3 = __n + *(int *)((int)param_1 + 0x1c);
        __n = param_3 - uVar4;
        *(int *)((int)param_1 + 0x1c) = iVar3;
      }
      uVar2 = *(uint *)((int)param_1 + 0x14);
      if (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) < __n) {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 1) + 0xc);
        *param_1 = *param_1 + (longlong)iVar3;
        iVar3 = (*(code *)*puVar1)(*(undefined4 *)((int)param_1 + 0xc),pvVar5,__n,local_70,param_5,
                                   param_6,param_7);
        if (iVar3 != 0) {
          return iVar3;
        }
        *(undefined4 *)(param_1 + 3) = 0;
        *param_1 = *param_1;
        *(undefined4 *)((int)param_1 + 0x1c) = 0;
joined_r0x00640c30:
        if (__n != 0) break;
      }
      else if (__n != 0) {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 1) + 0xc);
        *param_1 = *param_1 + (longlong)iVar3;
        iVar3 = (*(code *)*puVar1)(*(undefined4 *)((int)param_1 + 0xc),*(undefined4 *)(param_1 + 2),
                                   uVar2,local_70,param_5,param_6,param_7);
        if (iVar3 != 0) {
          return iVar3;
        }
        *(undefined4 *)((int)param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        goto joined_r0x00640c30;
      }
      param_2 = pvVar5;
    } while (uVar4 < param_3);
  }
  *param_4 = uVar4;
  return 0;
}



//==== 00640c38  ns=Global  size=0x4c
// sig: undefined FUN_00640c38(void)
// callers(0): 
// callees(0): 

uint FUN_00640c38(void)

{
  if (((*(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) & 1) != 0) &&
     (**(int **)(PTR_PTR_0071b074 + -0x7ffc) != 0)) {
    return *(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) >> 1 & 1;
  }
  return 0;
}



//==== 00640c84  ns=Global  size=0x18
// sig: undefined FUN_00640c84(void)
// callers(0): 
// callees(0): 

double FUN_00640c84(void)

{
  return (double)**(float **)(PTR_PTR_0071b074 + -0x7ff8);
}



//==== 00640c9c  ns=Global  size=0x18
// sig: undefined FUN_00640c9c(void)
// callers(4): 00627000 989snd::snd_SynthGetFreeVoiceBufferId; 006271cc FUN_006271cc; 0062ba54 989snd::snd_SynthQueueVoiceBuffer; 0062e140 989snd::snd_SynthSetVoiceData
// callees(0): 

undefined4 FUN_00640c9c(void)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x54);
}



//==== 00640cb4  ns=Global  size=0x18
// sig: undefined FUN_00640cb4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00640cb4(void)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x5c);
}



//==== 00640ccc  ns=Global  size=0x48
// sig: undefined FUN_00640ccc(void)
// callers(1): 0062ae84 FUN_0062ae84
// callees(0): 

double FUN_00640ccc(int param_1)

{
  float fVar1;
  
  if (param_1 == 1) {
    param_1 = *(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b44);
  }
  else if (param_1 == 2) {
    param_1 = *(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b48);
  }
  fVar1 = *(float *)(PTR_PTR_0071b074 + -0x7ff4);
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x70);
  }
  return (double)fVar1;
}



//==== 00640d14  ns=Global  size=0x18
// sig: undefined FUN_00640d14(void)
// callers(2): 0062c52c FUN_0062c52c; 0062f4b8 989snd::snd_SynthInit
// callees(0): 

undefined4 FUN_00640d14(void)

{
  return **(undefined4 **)(PTR_PTR_0071b074 + -0x7fec);
}



//==== 00640d2c  ns=Global  size=0x18
// sig: undefined FUN_00640d2c(void)
// callers(1): 00625a74 FUN_00625a74
// callees(0): 

undefined4 FUN_00640d2c(void)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x1f8);
}



//==== 00640d44  ns=Global  size=0x10c
// sig: undefined FUN_00640d44(void)
// callers(0): 
// callees(0): 

double FUN_00640d44(int param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_2;
  if ((param_2 & 0xffffffff) < 0xe) {
    uVar2 = 1L << (param_2 & 0x7f);
    if ((uVar2 & 0x102) != 0) {
      if ((param_1 == 1) || (param_1 == 6)) goto LAB_00640dfc;
      goto LAB_00640d7c;
    }
    if ((uVar2 & 0x810) == 0) {
      if ((uVar2 & 0x2040) == 0) goto LAB_00640d7c;
    }
    else if (param_1 - 3U < 2) goto LAB_00640d7c;
LAB_00640dfc:
    if (iVar1 == 0xff) {
      iVar1 = *(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x1e80) * 0x20 + 0x26a0 +
              *(int *)(PTR_PTR_0071b074 + -0x8000);
      goto LAB_00640d90;
    }
  }
  else {
LAB_00640d7c:
    iVar1 = 0xd;
  }
  iVar1 = iVar1 * 0x20 + 0x26a0 + *(int *)(PTR_PTR_0071b074 + -0x8000);
LAB_00640d90:
  if ((*(uint *)(iVar1 + 0xc) < 0xe) && (1 < *(uint *)(iVar1 + 4))) {
    return (double)*(float *)(*(uint *)(iVar1 + 4) * 0xa0 +
                              *(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x1e84) + -0x140 +
                             param_1 * 4);
  }
  return (double)*(float *)(param_1 << 2);
}



//==== 00640e50  ns=Global  size=0x74
// sig: undefined FUN_00640e50(void)
// callers(1): 00642a50 FUN_00642a50
// callees(0): 

undefined4 FUN_00640e50(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 4;
  iVar1 = 0;
  piVar2 = *(int **)(PTR_PTR_0071b074 + -0x7fe8);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)(iVar1 * 4 + *(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b34) = param_1;
      return 1;
    }
    lVar3 = lVar3 + -1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (lVar3 != 0);
  return 0;
}



//==== 00640ec4  ns=Global  size=0x74
// sig: undefined FUN_00640ec4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00640ec4(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 4;
  iVar1 = 0;
  piVar2 = *(int **)(PTR_PTR_0071b074 + -0x7fe8);
  do {
    if (*piVar2 == param_1) {
      *(undefined4 *)(iVar1 * 4 + *(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b34) = 0;
      return 1;
    }
    lVar3 = lVar3 + -1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (lVar3 != 0);
  return 0;
}



//==== 00640f38  ns=Global  size=0x30
// sig: undefined FUN_00640f38(void)
// callers(0): 
// callees(0): 

void FUN_00640f38(double param_1,int param_2)

{
  if (*(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x154) != 0) {
    *(float *)(param_2 * 4 + *(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x154)) =
         (float)param_1;
  }
  return;
}



//==== 00640f68  ns=Global  size=0x20
// sig: undefined FUN_00640f68(void)
// callers(0): 
// callees(0): 

double FUN_00640f68(void)

{
  return *(double *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x1a8) *
         *(double *)(PTR_PTR_0071b074 + -0x7fe0);
}



//==== 00640f88  ns=Global  size=0x18c
// sig: undefined FUN_00640f88(void)
// callers(2): 00641114 FUN_00641114; 00641124 FUN_00641124
// callees(1): 0064dac8 FUN_0064dac8

void FUN_00640f88(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  puVar3 = PTR_PTR_0071b074;
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
      FUN_0064dac8(iVar1);
      puVar2 = *(undefined4 **)(puVar3 + -0x7fd8);
      lVar5 = 0x20;
      *(undefined8 *)(iVar1 + 0x1c8) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x1e4) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x284) = 0;
      *(undefined8 *)(iVar1 + 0x1c0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x1e0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x1e8) = 0;
      *(undefined4 *)(iVar1 + 0x1ec) = 0;
      *(undefined4 *)(iVar1 + 0x1f0) = 0;
      *(undefined4 *)(iVar1 + 500) = 0;
      *(undefined1 *)(iVar1 + 0x21c) = 0;
      *(undefined4 *)(iVar1 + 0x280) = 0;
      do {
        puVar4 = puVar2;
        *(undefined1 *)(puVar4 + 3) = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        lVar5 = lVar5 + -1;
        puVar2 = puVar4 + 0xb;
      } while (lVar5 != 0);
      lVar5 = 4;
      *(undefined4 *)(iVar1 + 0x1514) = 0;
      *(undefined4 *)(iVar1 + 0x1510) = 0;
      puVar2 = puVar4 + 0x268;
      do {
        puVar4 = puVar2;
        puVar4[8] = 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 7) = 0;
        puVar4[0xb] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        lVar5 = lVar5 + -1;
        puVar2 = puVar4 + 0x8c;
      } while (lVar5 != 0);
      puVar4 = puVar4 + 0x3b6;
      lVar5 = 8;
      *(undefined4 *)(iVar1 + 0x2adc) = 0;
      *(undefined4 *)(iVar1 + 0x1e40) = 0;
      *(undefined4 *)(iVar1 + 0x2980) = 0;
      *(undefined4 *)(iVar1 + 0x2984) = 0;
      *(undefined4 *)(iVar1 + 0x2988) = 0;
      *(undefined4 *)(iVar1 + 0x2a88) = 0;
      do {
        puVar4[1] = 0;
        enforceInOrderExecutionIO();
        puVar4 = puVar4 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(undefined4 *)(iVar1 + 0x2b40) = 0;
      *(undefined4 *)(iVar1 + 0x2b30) = 0;
      *(undefined4 *)(iVar1 + 0x2b44) = 0;
      *(undefined4 *)(iVar1 + 0x2b48) = 0;
      *(undefined4 *)(iVar1 + 0x2b4c) = 0;
      *(undefined4 *)(iVar1 + 0x2b34) = 0;
      *(undefined4 *)(iVar1 + 0x2b38) = 0;
      *(undefined4 *)(iVar1 + 0x2b3c) = 0;
    }
  }
  else if ((param_1 == 0) && (param_2 == 0xffff)) {
    lVar5 = 4;
    do {
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



//==== 00641114  ns=Global  size=0x10
// sig: undefined FUN_00641114(void)
// callers(0): 
// callees(1): 00640f88 FUN_00640f88

void FUN_00641114(void)

{
  FUN_00640f88(0,0xffff);
  return;
}



//==== 00641124  ns=Global  size=0x10
// sig: undefined FUN_00641124(void)
// callers(0): 
// callees(1): 00640f88 FUN_00640f88

void FUN_00641124(void)

{
  FUN_00640f88(1,0xffff);
  return;
}



//==== 00641134  ns=Global  size=0x5b8
// sig: undefined FUN_00641134(void)
// callers(1): 006417a0 FUN_006417a0
// callees(12): 00643fe8 FUN_00643fe8; 00644028 FUN_00644028; 00644a90 FUN_00644a90; 00644b7c FUN_00644b7c; 00644c90 FUN_00644c90; 00647020 FUN_00647020; 00647d54 FUN_00647d54; 0064ced4 FUN_0064ced4; 0064cf1c FUN_0064cf1c; 0064cf44 FUN_0064cf44; 0064d8bc FUN_0064d8bc; 0064db64 FUN_0064db64

void FUN_00641134(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,uint param_6,undefined8 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar19;
  uint uStack00000008;
  int aiStack_e0 [7];
  int *piStack_c4;
  
  puVar6 = PTR_PTR_0071b074;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((((*(uint *)(param_5 + 0x2b4c) & 1) != 0) && (**(int **)(PTR_PTR_0071b074 + -0x7ffc) != 0)) &&
     ((*(uint *)(param_5 + 0x2b4c) & 2) != 0)) {
    if ((param_6 & 1) == 0) {
      piStack_c4 = *(int **)(PTR_PTR_0071b074 + -0x7fd4);
    }
    else {
      piStack_c4 = *(int **)(PTR_PTR_0071b074 + -0x7fd4);
      *piStack_c4 = 0;
      FUN_0064cf44(param_5,param_6);
    }
    FUN_0064ced4(param_5,param_1,param_2,param_4,param_7);
    uVar2 = *(undefined4 *)(param_5 + 0x5c);
    iVar12 = 0;
    dVar19 = (double)**(float **)(puVar6 + -0x7fd0);
    do {
      piVar10 = (int *)(param_5 + iVar12 * 0x230 + 0x1580);
      FUN_00644a90(piVar10,uVar2,*(undefined4 *)(param_5 + 0x2b30));
      if (*(char *)(piVar10 + 7) == '\0') {
        for (iVar18 = *piVar10; iVar18 != 0; iVar18 = *(int *)(iVar18 + 4)) {
          sync(1);
          if (((*(uint *)(iVar18 + 0x80) & 2) == 0) ||
             (*(uint *)(iVar18 + 0x5c) <= *(uint *)(iVar18 + 0x4c))) {
            cVar7 = FUN_00644c90(iVar18);
            uVar14 = *(uint *)(iVar18 + 0x98);
            uVar17 = *(uint *)(iVar18 + 100);
            if (uVar17 < uVar14) {
              do {
                iVar15 = uVar17 * 0x40 + (uVar17 & 0xfffffff) * -0x10;
                uVar13 = 0;
                bVar1 = false;
                piVar10 = aiStack_e0;
                do {
                  iVar16 = iVar15 + *(int *)(iVar18 + 0x90);
                  if ((cVar7 != '\0') && (sync(1), (**(ulonglong **)(iVar16 + 0x10) & 2) != 0)) {
                    FUN_00647d54(*(undefined4 *)(iVar16 + 0x10));
                  }
                  if ((1 << (uVar17 & 0x1f) & *(uint *)(iVar18 + (uVar17 >> 3 & 0x1ffffffc) + 0xa4))
                      != 0) {
                    sync(1);
                    if ((**(uint **)(iVar16 + 0x14) & 1) == 0) {
                      puVar3 = *(ulonglong **)(iVar16 + 0x10);
                      if (dVar19 <= (double)*(float *)((int)puVar3 + 0xc)) goto LAB_006413cc;
                    }
                    else {
                      puVar3 = *(ulonglong **)(iVar16 + 0x10);
                    }
                    uVar13 = uVar13 + 1;
                    *piVar10 = iVar16;
                    sync(1);
                    if ((*puVar3 & 0x21) == 0x21) {
                      if (!bVar1) {
                        uVar17 = uVar17 - 1;
                        iVar15 = iVar15 + -0x30;
                      }
                      bVar1 = (bool)(bVar1 ^ 1);
                    }
                    piVar10 = piVar10 + 1;
                    if (*(uint *)(*(int *)(iVar18 + 0x18) + 0x230) <= uVar13) break;
                  }
LAB_006413cc:
                  uVar17 = uVar17 + 1;
                  iVar15 = iVar15 + 0x30;
                } while (uVar17 < uVar14);
                *(uint *)(iVar18 + 100) = uVar17 + 1;
                if (uVar13 == 0) goto LAB_00641430;
                FUN_0064db64(param_5,iVar18,aiStack_e0,uVar13,uVar14 <= uVar17 + 1);
                uVar14 = *(uint *)(iVar18 + 0x98);
                uVar17 = *(uint *)(iVar18 + 100);
              } while (uVar17 < uVar14);
            }
            *(uint *)(iVar18 + 100) = uVar17 + 1;
          }
LAB_00641430:
        }
      }
      else {
        cVar7 = FUN_00643fe8(piVar10);
        if (cVar7 != '\0') {
          FUN_00644b7c(piVar10);
        }
        iVar18 = piVar10[9];
        if (iVar18 != 0) {
          do {
            uVar14 = *(uint *)(iVar18 + 0x18);
            sync(1);
            bVar1 = iVar18 == 0;
            if (((*(uint *)(uVar14 + 0x80) & 2) == 0) ||
               (*(uint *)(uVar14 + 0x5c) <= *(uint *)(uVar14 + 0x4c))) {
              do {
                if (bVar1) {
                  uVar17 = 0;
LAB_006416b8:
                  uVar11 = 1;
                }
                else {
                  uVar17 = 0;
                  bVar4 = false;
                  piVar8 = aiStack_e0;
                  if (*(uint *)(iVar18 + 0x18) == uVar14) {
                    do {
                      sync(1);
                      bVar5 = bVar4;
                      if (((**(uint **)(iVar18 + 0x14) & 1) != 0) ||
                         (piVar9 = piVar8,
                         (double)*(float *)(*(int *)(iVar18 + 0x10) + 0xc) < dVar19)) {
                        puVar3 = *(ulonglong **)(iVar18 + 0x10);
                        uVar17 = uVar17 + 1;
                        piVar9 = piVar8 + 1;
                        *piVar8 = iVar18;
                        sync(1);
                        if (((*puVar3 & 0x21) != 0x21) ||
                           (bVar5 = (bool)(bVar4 ^ 1), piVar8 = piVar9, bVar4)) goto LAB_00641694;
                      }
                      else {
LAB_00641694:
                        iVar18 = *(int *)(iVar18 + 4);
                        bVar1 = iVar18 == 0;
                        piVar8 = piVar9;
                      }
                      bVar4 = bVar5;
                      if (*(uint *)(*(int *)(uVar14 + 0x18) + 0x230) <= uVar17) {
                        if (bVar1) goto LAB_006416b8;
                        break;
                      }
                      if (bVar1) goto LAB_006416b8;
                    } while (*(uint *)(iVar18 + 0x18) == uVar14);
                  }
                  else {
                    uVar17 = 0;
                  }
                  uVar13 = uVar14 ^ *(uint *)(iVar18 + 0x18);
                  uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
                  uVar11 = (uVar11 - (uVar11 ^ uVar13) << 0x20) >> 0x3f;
                }
                if (uVar17 == 0) goto LAB_0064158c;
                FUN_0064db64(param_5,uVar14,aiStack_e0,uVar17,uVar11);
              } while( true );
            }
            iVar18 = *(int *)(iVar18 + 4);
            bVar1 = iVar18 == 0;
LAB_0064158c:
          } while (!bVar1);
        }
        FUN_00644028(piVar10,0);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 4);
    FUN_0064cf1c(param_5);
    FUN_00647020(param_5 + 0x2a80);
    iVar12 = *piStack_c4;
    *piStack_c4 = iVar12 + 1;
    if ((param_6 & 2) != 0) {
      FUN_0064d8bc(param_5,iVar12 + 1);
    }
  }
  return;
}



//==== 006416ec  ns=Global  size=0xb4
// sig: undefined FUN_006416ec(void)
// callers(1): 006417a0 FUN_006417a0
// callees(1): 0064484c FUN_0064484c

void FUN_006416ec(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((*(uint *)(param_2 + 0x2b4c) & 1) != 0) && (**(int **)(PTR_PTR_0071b074 + -0x7ffc) != 0)) &&
     ((*(uint *)(param_2 + 0x2b4c) & 2) != 0)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 0x230;
      iVar2 = iVar2 + 1;
      iVar1 = param_2 + iVar1 + 0x1580;
      if (*(char *)(iVar1 + 0x1c) == '\0') {
        FUN_0064484c(iVar1,param_1);
      }
    } while (iVar2 != 4);
  }
  return;
}



//==== 006417a0  ns=Global  size=0x170
// sig: undefined FUN_006417a0(void)
// callers(1): 00643520 FUN_00643520
// callees(3): 004f234c FUN_004f234c; 00641134 FUN_00641134; 006416ec FUN_006416ec

void FUN_006417a0(double param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar3 = PTR_PTR_0071b074;
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  dVar8 = *(double *)(PTR_PTR_0071b074 + -0x7fe0);
  dVar10 = (double)*(float *)(PTR_PTR_0071b074 + -0x7ff4);
  uVar2 = *(undefined4 *)(PTR_PTR_0071b074 + -0x7fcc);
  dVar9 = *(double *)(PTR_PTR_0071b074 + -0x7fc8);
  do {
    dVar6 = *(double *)(iVar1 + 0x1a8);
    uVar5 = (ulonglong)dVar6;
    if (dVar9 <= dVar6) {
      uVar5 = (longlong)(dVar6 - dVar9) ^ 0x8000000000000000;
    }
    dVar6 = dVar6 + *(double *)(iVar1 + 0x208);
    uVar7 = (ulonglong)dVar6;
    if (*(double *)(puVar3 + -0x7fc8) <= dVar6) {
      uVar7 = (longlong)(dVar6 - *(double *)(puVar3 + -0x7fc8)) ^ 0x8000000000000000;
    }
    FUN_00641134(*(undefined4 *)(iVar1 + 0x1e8),0,*(undefined4 *)(iVar1 + 0x1f8),uVar5,iVar1,3,uVar7
                );
    do {
      do {
        cVar4 = FUN_004f234c(uVar2,0);
      } while (cVar4 == '\0');
      cVar4 = FUN_004f234c(uVar2,1);
    } while (cVar4 == '\0');
    *(double *)(iVar1 + 0x1a8) = *(double *)(iVar1 + 0x1a8) + *(double *)(iVar1 + 0x208);
    FUN_006416ec(*(undefined4 *)(iVar1 + 0x1f8),iVar1);
    dVar10 = (double)(float)(dVar10 + (double)(float)(*(double *)(iVar1 + 0x208) * dVar8));
  } while (dVar10 < param_1);
  return;
}



//==== 00641910  ns=Global  size=0x12c
// sig: undefined FUN_00641910(void)
// callers(45): 00641a3c FUN_00641a3c; 00641b58 FUN_00641b58; 00641ec0 FUN_00641ec0; 00641f84 FUN_00641f84; 00642184 FUN_00642184; 00642648 FUN_00642648; 006426c0 FUN_006426c0; 006427e8 FUN_006427e8; 00642a50 FUN_00642a50; 00643520 FUN_00643520; 00643764 FUN_00643764; 00643a90 FUN_00643a90; 0064405c FUN_0064405c; 00644704 FUN_00644704; 00644de8 FUN_00644de8; 00644ea8 FUN_00644ea8; 00644f3c FUN_00644f3c; 00645028 FUN_00645028; 006450cc FUN_006450cc; 00645198 FUN_00645198; 0064547c FUN_0064547c; 006464dc FUN_006464dc; 006468bc FUN_006468bc; 00646abc FUN_00646abc; 00647020 FUN_00647020
// callees(1): 005c8a94 FUN_005c8a94

undefined8
FUN_00641910(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined1 auStack_438 [1040];
  
  puVar2 = PTR_PTR_0071b074;
  if (param_1 < 4) {
    *(int *)(*(int *)(PTR_PTR_0071b074 + -0x7fc0) + param_1 * 4) =
         *(int *)(*(int *)(PTR_PTR_0071b074 + -0x7fc0) + param_1 * 4) + 1;
  }
  if (**(int **)(puVar2 + -0x7fbc) < param_1) {
    return 1;
  }
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005c8a94(auStack_438,0x400,param_2,&stack0x00000040);
  piVar1 = *(int **)(puVar2 + -0x7fe8);
  piVar3 = piVar1;
  do {
    piVar4 = piVar3 + 1;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (**(code **)*piVar3)(auStack_438,param_1);
    }
    piVar3 = piVar4;
  } while (piVar4 != piVar1 + 4);
  return 1;
}



//==== 00641a3c  ns=Global  size=0x11c
// sig: undefined FUN_00641a3c(void)
// callers(3): 0062b660 989snd::snd_SynthLR1Create; 0062c52c FUN_0062c52c; 00642a50 FUN_00642a50
// callees(2): 00641910 FUN_00641910; 006445cc FUN_006445cc
// strings: 00673368: 'brb_InsertRackUnit(): Both rack units must be from the same rack!' | 006733b0: "brb_InsertRackUnit(): %s ('%s') This SID/name combination has already been used! Rack units of the same type (SID) within the same rack MUST have unique names." | 00673320: 'brb_InsertRackUnit(): Maximum number of rack units (%d) exceeded!'

undefined4 FUN_00641a3c(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b074;
  iVar4 = (*(uint *)(param_1 + 0x10) >> 0x18) * 0x230 + 0x1580 +
          *(int *)(PTR_PTR_0071b074 + -0x8000);
  if (*(int *)(iVar4 + 8) == 0x20) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b074 + -0x7fb8),0x20);
    uVar2 = 0xffffffff;
  }
  else {
    if ((param_2 != 0) &&
       ((*(uint *)(param_2 + 0x10) >> 0x18) * 0x230 + 0x1580 + *(int *)(PTR_PTR_0071b074 + -0x8000)
        != iVar4)) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b074 + -0x7fb4),param_2,param_3);
      return 0xffffffff;
    }
    cVar3 = FUN_006445cc(iVar4,param_1);
    uVar2 = 0;
    if (cVar3 == '\0') {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fb0),*(int *)(param_1 + 0x18) + 8,param_1 + 0x1c);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



//==== 00641b58  ns=Global  size=0x368
// sig: undefined FUN_00641b58(void)
// callers(3): 0062b660 989snd::snd_SynthLR1Create; 0062c52c FUN_0062c52c; 00642a50 FUN_00642a50
// callees(8): 00641910 FUN_00641910; 00644cc4 FUN_00644cc4; 00644de8 FUN_00644de8; 006458e8 FUN_006458e8; 006459b4 FUN_006459b4; 00648f2c FUN_00648f2c; 0064cdb0 FUN_0064cdb0; 0064e064 FUN_0064e064
// strings: 006734e8: "brb_CreateRackUnit(): Requested polyphony (%d) for rack unit '%s' (%s) is less than is possible (%d).\nYou may be wasting CPU!" | 00673450: 'brbPluginRegBase::GetPluginClassFromSID(): SID 0x%X was not registered in session.' | 006734a8: 'brb_CreateRackUnit(): SID 0x%X was not registered in session!' | 00673598: "brb_CreateRackUnit(): Requested polyphony (%d) for rack unit '%s' (%s) exceeds the maximum system polyphony of %d!" | 00673568: 'brb_CreateRackUnit(): OUT OF MEM for SID 0x%X!'

undefined4
FUN_00641b58(undefined4 *param_1,uint param_2,ulonglong param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 in_stack_00000074;
  undefined1 local_b0 [4];
  char local_ac;
  byte bStack_a3;
  
  puVar2 = PTR_PTR_0071b074;
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x7fac);
  uVar9 = *param_1;
  uVar4 = FUN_00648f2c(iVar1,local_b0);
  if ((int)uVar4 == -1) {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fa8),uVar9);
  }
  else {
    iVar1 = *(int *)(iVar1 + (int)((uVar4 & 0xffffffff) << 2) + 8);
    if (iVar1 != 0) {
      uVar3 = *(uint *)(iVar1 + 0x230);
      if (param_2 < uVar3) {
        FUN_00641910(2,*(undefined4 *)(puVar2 + -0x7fa0),param_2,param_8,iVar1 + 8,uVar3);
      }
      else {
        param_2 = (uVar3 + param_2) - 1 & -uVar3;
      }
      local_ac = (char)((uint)*(undefined4 *)(iVar1 + 0x220) >> 0x18);
      if (local_ac == '\0') {
        uVar9 = 0;
        iVar10 = *(int *)(puVar2 + -0x8000);
      }
      else {
        bStack_a3 = (byte)((uint)*(undefined4 *)(iVar1 + 0x24c) >> 0x10);
        if (bStack_a3 == 0xff) {
          iVar10 = *(int *)(puVar2 + -0x8000);
          uVar9 = *(undefined4 *)(iVar10 + 0x1bc);
        }
        else {
          iVar10 = *(int *)(puVar2 + -0x8000);
          uVar9 = *(undefined4 *)(iVar10 + (uint)bStack_a3 * 0x20 + 0x26a0);
        }
      }
      uVar3 = param_2 + *(int *)(iVar10 + 0x150);
      if (uVar3 <= *(uint *)(iVar10 + 0x14c)) {
        *(uint *)(iVar10 + 0x150) = uVar3;
        uVar5 = FUN_00644de8(iVar1,param_8,in_stack_00000074);
        iVar6 = FUN_006458e8(iVar1,param_2,*(undefined4 *)(iVar10 + 0x1f8),uVar9,
                             *(undefined4 *)(iVar10 + 0x200),uVar5);
        iVar7 = FUN_0064cdb0(iVar1,param_2,*(undefined4 *)(iVar10 + 0x200),param_3 >> 1 & 1);
        iVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(iVar10 + 0x2b30))
                          (*(undefined4 **)(iVar10 + 0x2b30),iVar6 + iVar7,0xfff0147,0,0);
        if (iVar8 != 0) {
          FUN_006459b4(iVar8,iVar1,param_2,*(undefined4 *)(iVar10 + 0x1f8),uVar9,
                       *(undefined4 *)(iVar10 + 0x200),param_3 & 0xffffffff,param_8);
          FUN_00644cc4((double)*(float *)(puVar2 + -0x7ff4),iVar8,param_4,param_5,param_6);
          FUN_0064e064(iVar10,iVar8,iVar8 + iVar6,iVar7);
          *param_7 = iVar8;
          return 0;
        }
        uVar9 = *(undefined4 *)(puVar2 + -0x7f9c);
        *(uint *)(iVar10 + 0x150) = *(int *)(iVar10 + 0x150) - param_2;
        FUN_00641910(1,uVar9,*param_1);
        return 0xfffffffa;
      }
      FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7f98),param_2,param_8,iVar1 + 8,
                   *(uint *)(iVar10 + 0x14c));
      return 0xffffffff;
    }
  }
  FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fa4),*param_1);
  return 0xffffffff;
}



//==== 00641ec0  ns=Global  size=0xc4
// sig: undefined FUN_00641ec0(void)
// callers(1): 006276e4 FUN_006276e4
// callees(2): 00641910 FUN_00641910; 00646738 FUN_00646738
// strings: 00673640: '----------------------------------------' | 00673670: '\t\tbrb_StopCapture(): OK' | 00673688: '----------------------------------------\n' | 00673610: "brb_StopCapture(): CAPTURE COULDN'T STOP!"

undefined8 FUN_00641ec0(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b074;
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x7f94);
  iVar3 = FUN_00646738(iVar1);
  if (iVar3 < 0) {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7f90));
    return 0;
  }
  if ((*(uint *)(iVar1 + 0xcc) & 4) != 0) {
    return 0;
  }
  FUN_00641910(3,*(undefined4 *)(puVar2 + -0x7f8c));
  FUN_00641910(3,*(undefined4 *)(puVar2 + -0x7f88));
  FUN_00641910(3,*(undefined4 *)(puVar2 + -0x7f84));
  return 0;
}



//==== 00641f84  ns=Global  size=0xdc
// sig: undefined FUN_00641f84(void)
// callers(1): 00627708 FUN_00627708
// callees(2): 00641910 FUN_00641910; 00647594 FUN_00647594
// strings: 00673640: '----------------------------------------' | 006736e8: '\t\tbrb_StartCapture(): OK' | 00673688: '----------------------------------------\n' | 006736b8: "brb_StartCapture(): CAPTURE COULDN'T START!"

int FUN_00641f84(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b074;
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x7f94);
  iVar3 = FUN_00647594(iVar1,param_1);
  if (iVar3 < 0) {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7f80));
    return iVar3;
  }
  if ((*(uint *)(iVar1 + 0xcc) & 4) != 0) {
    return iVar3;
  }
  FUN_00641910(3,*(undefined4 *)(puVar2 + -0x7f8c));
  FUN_00641910(3,*(undefined4 *)(puVar2 + -0x7f7c));
  FUN_00641910(3,*(undefined4 *)(puVar2 + -0x7f84));
  return iVar3;
}



//==== 00642060  ns=Global  size=0x40
// sig: undefined FUN_00642060(void)
// callers(0): 
// callees(1): 00646858 FUN_00646858

void FUN_00642060(undefined8 param_1,undefined8 param_2)

{
  FUN_00646858(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f94),param_1,param_2);
  return;
}



//==== 006420a0  ns=Global  size=0x44
// sig: undefined FUN_006420a0(void)
// callers(0): 
// callees(1): 00645cc4 FUN_00645cc4

undefined8 FUN_006420a0(undefined8 param_1,undefined8 param_2)

{
  FUN_00645cc4(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f78),param_1,param_2);
  return 0;
}



//==== 006420e4  ns=Global  size=0xa0
// sig: undefined FUN_006420e4(void)
// callers(1): 0062a4c8 989snd::snd_SynthSetSpeakerMode
// callees(1): 006464dc FUN_006464dc

undefined4 FUN_006420e4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 3) {
    uVar2 = 4;
  }
  else if (param_1 < 4) {
    if (param_1 != 1) {
      return 0xffffffff;
    }
    uVar2 = 2;
  }
  else if (param_1 == 0xb) {
    uVar2 = 6;
  }
  else {
    if (param_1 != 0xd) {
      return 0xffffffff;
    }
    uVar2 = 8;
  }
  uVar1 = FUN_006464dc(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f78),uVar2,param_2);
  return uVar1;
}



//==== 00642184  ns=Global  size=0x194
// sig: undefined FUN_00642184(void)
// callers(2): 00627448 FUN_00627448; 006427e8 FUN_006427e8
// callees(2): 00641910 FUN_00641910; 00647dd0 FUN_00647dd0
// strings: 00673708: 'brb_StopSession(): session processing time-out!' | 00673750: 'brb_StopSession(): session already stopped' | 00673640: '----------------------------------------' | 00673738: '\t\tbrb_StopSession(): OK' | 00673688: '----------------------------------------\n'

undefined8 FUN_00642184(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar3 = PTR_PTR_0071b074;
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  if ((*(uint *)(iVar1 + 0x2b4c) & 2) == 0) {
    FUN_00641910(3,*(undefined4 *)(PTR_PTR_0071b074 + -0x7f68));
    return 0;
  }
  FUN_00647dd0(**(undefined4 **)(PTR_PTR_0071b074 + -0x7ffc),1);
  if (**(int **)(puVar3 + -0x7f74) != 0) {
    FUN_00647dd0(**(int **)(puVar3 + -0x7f74),1);
  }
  uVar5 = 0;
  lVar6 = 0x14;
  uVar4 = ((ulonglong)*(uint *)(iVar1 + 0x2b4c) & 1) << 0x1e |
          (ulonglong)(*(uint *)(iVar1 + 0x2b4c) >> 2);
  *(uint *)(iVar1 + 0x2b4c) = (uint)(uVar4 << 2) | (uint)uVar4 >> 0x1e;
  if (*(char *)(iVar1 + 0x70) == '\0') {
LAB_00642214:
    uVar2 = *(uint *)(iVar1 + 0x2b4c);
  }
  else {
    do {
      syscall();
      uVar5 = uVar5 + 10;
      if (*(char *)(iVar1 + 0x70) == '\0') {
        if ((uVar5 & 0xffffffff) < 200) goto LAB_00642214;
        break;
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7f70));
    uVar2 = *(uint *)(iVar1 + 0x2b4c);
  }
  if ((uVar2 & 4) != 0) {
    return 0;
  }
  FUN_00641910(3,*(undefined4 *)(puVar3 + -0x7f8c));
  FUN_00641910(3,*(undefined4 *)(puVar3 + -0x7f6c));
  FUN_00641910(3,*(undefined4 *)(puVar3 + -0x7f84));
  return 0;
}



//==== 00642318  ns=Global  size=0x3c
// sig: undefined FUN_00642318(void)
// callers(0): 
// callees(1): 0064c380 FUN_0064c380

undefined4 FUN_00642318(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c380(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1);
  return uVar1;
}



//==== 00642354  ns=Global  size=0x3c
// sig: undefined FUN_00642354(void)
// callers(2): 00627448 FUN_00627448; 006427e8 FUN_006427e8
// callees(1): 0064c168 FUN_0064c168

undefined4 FUN_00642354(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c168(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1);
  return uVar1;
}



//==== 00642390  ns=Global  size=0x4c
// sig: undefined FUN_00642390(void)
// callers(0): 
// callees(1): 0064c764 FUN_0064c764

undefined4 FUN_00642390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c764(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1,param_2,param_3);
  return uVar1;
}



//==== 006423dc  ns=Global  size=0x4c
// sig: undefined FUN_006423dc(void)
// callers(2): 0062c52c FUN_0062c52c; 00642a50 FUN_00642a50
// callees(1): 0064c428 FUN_0064c428

undefined4 FUN_006423dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c428(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1,param_2,param_3);
  return uVar1;
}



//==== 00642428  ns=Global  size=0xa4
// sig: undefined FUN_00642428(void)
// callers(0): 
// callees(1): 005c756c FUN_005c756c
// strings: 00673780: '\nbrb_SetCustomAuditData(): Must be called PRIOR to synth initialization!!'

undefined4 FUN_00642428(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  if ((*(uint *)(iVar1 + 0x2b4c) & 1) != 0) {
    FUN_005c756c(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f64));
    return 0;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(iVar1 + 0x28) = param_2;
    *(int *)(iVar1 + 0x24) = param_1;
    return 1;
  }
  return 0;
}



//==== 006424cc  ns=Global  size=0x128
// sig: undefined FUN_006424cc(void)
// callers(0): 
// callees(2): 005c756c FUN_005c756c; 005cd098 libc::printf
// strings: 00673868: 'CLIENT: ' | 006737d0: '\n\n*****   BRB !!!FATAL ERROR!!! REPORT   *****\n' | 00673878: '%s\n********************************************\n\n' | 00673800: '\n\n**********    BRB ERROR REPORT    **********\n' | 00673860: 'INFO: ' | 00673830: '\n\n**********   BRB WARNING REPORT   **********\n'

ulonglong FUN_006424cc(ulonglong param_1,int param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  int32_t iVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071b074;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((*(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) & 4) != 0) {
    return param_1;
  }
  if (param_2 == 1) {
    FUN_005c756c(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f5c));
    iVar3 = libc::printf(*(char **)(puVar1 + -0x7f4c),param_1 & 0xffffffff);
    return (longlong)iVar3;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      FUN_005c756c(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f60));
      goto LAB_00642574;
    }
  }
  else {
    if (param_2 == 2) {
      FUN_005c756c(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f58));
      iVar3 = libc::printf(*(char **)(puVar1 + -0x7f4c),param_1 & 0xffffffff);
      return (longlong)iVar3;
    }
    if (param_2 == 3) {
      libc::printf(*(char **)(PTR_PTR_0071b074 + -0x7f54));
      goto LAB_00642530;
    }
  }
  libc::printf(*(char **)(PTR_PTR_0071b074 + -0x7f50));
  if (2 < param_2) {
LAB_00642530:
    uVar2 = FUN_005c756c(param_1 & 0xffffffff);
    return uVar2;
  }
LAB_00642574:
  iVar3 = libc::printf(*(char **)(puVar1 + -0x7f4c),param_1 & 0xffffffff);
  return (longlong)iVar3;
}



//==== 006425f4  ns=Global  size=0x54
// sig: undefined FUN_006425f4(void)
// callers(3): 0062c52c FUN_0062c52c; 0064842c FUN_0064842c; 00648b10 idol::brbVoice_ConnectPort
// callees(0): 

undefined4 FUN_006425f4(uint param_1,int *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b074;
  if ((param_2 != (int *)0x0) && (*param_2 = 0, param_1 < 4)) {
    *param_2 = param_1 * 0x230 + 0x1580 + *(int *)(puVar1 + -0x8000);
    return 0;
  }
  return 0xffffffff;
}



//==== 00642648  ns=Global  size=0x78
// sig: undefined FUN_00642648(void)
// callers(1): 00629cb8 FUN_00629cb8
// callees(2): 00641910 FUN_00641910; 0064cea4 FUN_0064cea4
// strings: 006738b0: 'brb_ScheduleMemMove(): Synth not initialized!'

undefined4 FUN_00642648(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) & 1) == 0) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b074 + -0x7f48),param_2,param_3);
    uVar1 = 0xfffffff8;
  }
  else {
    uVar1 = FUN_0064cea4(*(int *)(PTR_PTR_0071b074 + -0x8000),param_1);
  }
  return uVar1;
}



//==== 006426c0  ns=Global  size=0xb0
// sig: undefined FUN_006426c0(void)
// callers(2): 00625b20 FUN_00625b20; 00629cb8 FUN_00629cb8
// callees(1): 00641910 FUN_00641910
// strings: 006738e0: 'brb_SetProcessSyncFunction(): Synth not initialized!'

undefined4 FUN_006426c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  if ((*(uint *)(iVar1 + 0x2b4c) & 1) == 0) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b074 + -0x7f44));
    return 0;
  }
  if ((param_1 != 0) && (*(int *)(iVar1 + 0x2c) == 0)) {
    *(int *)(iVar1 + 0x2c) = param_1;
    *(undefined4 *)(iVar1 + 0x30) = param_2;
    *(undefined4 *)(iVar1 + 0x34) = param_3;
    return 1;
  }
  return 0;
}



//==== 00642770  ns=Global  size=0x78
// sig: undefined FUN_00642770(void)
// callers(0): 
// callees(1): 0064ba20 FUN_0064ba20

uint FUN_00642770(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) & 1) != 0) {
    if (param_1 != 0) {
      uVar1 = FUN_0064ba20(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x280,param_1,param_2,param_3);
      uVar1 = ~uVar1 >> 0x1f;
    }
  }
  return uVar1;
}



//==== 006427e8  ns=Global  size=0x268
// sig: undefined FUN_006427e8(void)
// callers(1): 00627334 FUN_00627334
// callees(16): 00641910 FUN_00641910; 00642184 FUN_00642184; 00642354 FUN_00642354; 006444e0 FUN_006444e0; 006447cc FUN_006447cc; 006464b0 FUN_006464b0; 006468bc FUN_006468bc; 00648ec0 FUN_00648ec0; 00648edc FUN_00648edc; 0064a35c FUN_0064a35c; 0064aa68 FUN_0064aa68; 0064abc0 FUN_0064abc0; 0064cbbc FUN_0064cbbc; 0064ce94 FUN_0064ce94; 0064d090 FUN_0064d090; 0064ecb8 FUN_0064ecb8
// strings: 00673640: '----------------------------------------' | 00673918: '\t\tbrb_Shutdown(): OK' | 00673688: '----------------------------------------\n'

undefined8 FUN_006427e8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  puVar6 = PTR_PTR_0071b074;
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  if ((*(uint *)(iVar1 + 0x2b4c) & 1) != 0) {
    FUN_00642184(0);
    if ((*(uint *)(iVar1 + 0x2b4c) & 0x10) == 0) {
      FUN_0064aa68(iVar1 + 0x180);
    }
    else {
      FUN_00648ec0(iVar1 + 0x180);
    }
    iVar8 = 0;
    FUN_0064ce94(iVar1);
    iVar3 = *(int *)(puVar6 + -0x8000);
    do {
      piVar7 = (int *)(iVar8 * 0x230 + 0x1580 + iVar3);
      iVar5 = *piVar7;
      while (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 4);
        FUN_006444e0(piVar7,iVar5,*(undefined4 *)(iVar1 + 0x2b30));
        iVar5 = iVar4;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    FUN_00642354(*(undefined4 *)(puVar6 + -0x7f40));
    iVar3 = *(int *)(puVar6 + -0x7f94);
    FUN_006468bc(iVar3);
    FUN_006447cc(iVar3 + -0x1500);
    FUN_006447cc(iVar3 + -0x12d0);
    FUN_006447cc(iVar3 + -0x10a0);
    FUN_006447cc(iVar3 + -0xe70);
    *(undefined4 *)(iVar3 + -0xc40) = 0;
    FUN_0064d090(iVar3 + -0x2a80);
    FUN_0064a35c(iVar3 + -0x100,*(undefined4 *)(iVar3 + 0xb0));
    FUN_0064ecb8(iVar3 + -0x80);
    FUN_0064cbbc(iVar3 + -0x2800);
    FUN_006464b0(iVar3 + -0xc00);
    if ((*(uint *)(iVar3 + 0xcc) & 0x10) != 0) {
      if (*(int *)(iVar3 + -0x2898) != 0) {
        (*(code *)**(undefined4 **)(**(int **)(iVar3 + 0xb0) + 4))
                  (*(int **)(iVar3 + 0xb0),*(int *)(iVar3 + -0x2898),0xfff0147,0,0);
        *(undefined4 *)(iVar3 + -0x2898) = 0;
      }
      FUN_00648edc(iVar3 + -0x2900);
      uVar2 = *(uint *)(iVar1 + 0x2b4c);
      goto joined_r0x00642a04;
    }
    FUN_0064abc0(iVar3 + -0x2900);
  }
  uVar2 = *(uint *)(iVar1 + 0x2b4c);
joined_r0x00642a04:
  if ((uVar2 & 4) == 0) {
    FUN_00641910(3,*(undefined4 *)(puVar6 + -0x7f8c));
    FUN_00641910(3,*(undefined4 *)(puVar6 + -0x7f3c));
    FUN_00641910(3,*(undefined4 *)(puVar6 + -0x7f84));
  }
  *(undefined4 *)(iVar1 + 0x2b4c) = 0;
  *(undefined4 *)(iVar1 + 0x2b34) = 0;
  *(undefined4 *)(iVar1 + 0x2b38) = 0;
  *(undefined4 *)(iVar1 + 0x2b3c) = 0;
  *(undefined4 *)(iVar1 + 0x2b40) = 0;
  return 0;
}



//==== 00642a50  ns=Global  size=0xad0
// sig: undefined FUN_00642a50(void)
// callers(1): 0062f4b8 989snd::snd_SynthInit
// callees(21): 005c8510 libc::strlen; 005cc8d8 libc::strcpy; 00640e50 FUN_00640e50; 00641910 FUN_00641910; 00641a3c FUN_00641a3c; 00641b58 FUN_00641b58; 006423dc FUN_006423dc; 00644810 FUN_00644810; 0064547c FUN_0064547c; 00646638 FUN_00646638; 00646abc FUN_00646abc; 00648e20 FUN_00648e20; 00648e98 FUN_00648e98; 0064a460 FUN_0064a460; 0064b124 FUN_0064b124; 0064b650 FUN_0064b650; 0064cb60 FUN_0064cb60; 0064ce88 FUN_0064ce88; 0064d340 FUN_0064d340; 0064ec4c FUN_0064ec4c; 0064fa44 cell::cellSpursGetInfo
// strings: 00673990: 'brb_Initialize(): custom report handler installed...\n' | 00673c98: 'SYNTHESIS Rack' | 00673ca8: 'SUBMIXING Rack' | 00673cb8: 'AUXILIARY Rack' | 00673cc8: 'MASTERING Rack' | 00673d40: 'core_plugins' | 00673d90: 'Output Primary' | 00673e80: 'Output Secondary' | 00673f48: 'brbCore::InitOutput(): SECONDARY OUTPUT VOICE ALLOC FAILED!' | 00673b18: 'brb_Initialize(): DRIVER  ERROR!' | 006739c8: '================================================================' | 00673a10: ' BoomRangBuss (c)2007-2008 Sony Computer Entertainment America' | 00673a50: ' Version: %d.%d.%d' | 00673a68: ' Built %s at %s' | 00673a78: 'Mar  6 2012' | 00673a88: '12:06:45' | 00673a98: '================================================================\n' | 00673b98: '/app_home/audio_sys/boomrang/bin/ps3spu/gnu' | 00673bc8: '/release' | 00673ae0: 'brbDriver::Initialize(): OUT OF MEM for ring buffer!' | 00673930: 'brb_Initialize(): No report handler provided, installing default (TTY) report handler...\n' | 00673b40: 'brb_Initialize(): SPEAKER INITIALIZATION ERROR!' | 00673c60: 'brb_Initialize(): AUDIT SYSTEM INITIALIZATION ERROR!' | 00673640: '----------------------------------------' | 00674040: '\t\tbrb_Initialize(): OK' | 00673688: '----------------------------------------\n' | 00673d10: 'brb_Initialize(): CAPTURE INITIALIZATION ERROR!' | 00673d50: 'brb_Initialize(): Failed to register internal output plugin!' | 00673b70: 'brb_Initialize(): BUSS MANAGER ERROR!' | 00673da0: 'brbCore::InitOutput(): Failed to create rack unit for internal primary output plugin!'

int FUN_00642a50(int *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *__s;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  int iVar20;
  int iVar21;
  size_t sVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined1 auStack_178 [304];
  
  puVar19 = PTR_PTR_0071b074;
  uVar9 = param_1[0x19];
  if ((uVar9 & 1) == 0) {
    iVar10 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  }
  else {
    iVar10 = *(int *)(PTR_PTR_0071b074 + -0x8000);
    *(uint *)(iVar10 + 0x2b4c) = *(uint *)(iVar10 + 0x2b4c) | 4;
    uVar9 = param_1[0x19];
  }
  if ((uVar9 & 2) != 0) {
    *(uint *)(iVar10 + 0x2b4c) = *(uint *)(iVar10 + 0x2b4c) | 8;
    uVar9 = param_1[0x19];
  }
  if ((uVar9 & 0x100) != 0) {
    *(uint *)(iVar10 + 0x2b4c) = *(uint *)(iVar10 + 0x2b4c) | 0x10;
  }
  *(undefined **)(iVar10 + 0x2b50) = &DAT_00989680;
  if ((param_1[0x19] & 4U) != 0) {
    *(undefined4 *)(iVar10 + 0x2b50) = 0xffffffff;
  }
  piVar11 = *(int **)(puVar19 + -0x7f38);
  iVar20 = param_1[0xe];
  iVar21 = param_1[0x10];
  **(int **)(puVar19 + -0x7fbc) = param_1[0xf];
  *piVar11 = iVar21;
  if (iVar20 == 0) {
    FUN_00640e50(*(undefined4 *)(puVar19 + -0x7f34));
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f30));
  }
  else {
    FUN_00640e50(iVar20);
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f2c));
  }
  uVar9 = *(uint *)(iVar10 + 0x2b4c);
  if ((uVar9 & 4) == 0) {
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f28));
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f24));
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f20),1,0,0x22);
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f1c),*(undefined4 *)(puVar19 + -0x7f18),
                 *(undefined4 *)(puVar19 + -0x7f14));
    FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f10));
    uVar9 = *(uint *)(iVar10 + 0x2b4c);
  }
  if ((uVar9 & 0x10) == 0) {
    iVar20 = FUN_0064b124(iVar10 + 0x180,param_1[0xc],param_1);
    if (iVar20 < 0) goto LAB_00642fc4;
  }
  else {
    iVar20 = (**(code **)**(undefined4 **)param_1[0xc])
                       ((undefined4 *)param_1[0xc],param_1[3] * 4 * *param_1 * param_1[2],0xfff0147,
                        0,0);
    *(int *)(iVar10 + 0x1e8) = iVar20;
    if (iVar20 == 0) {
      iVar20 = -5;
      FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7f0c));
LAB_00642fc4:
      FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7f00));
      return iVar20;
    }
    FUN_00648e20(iVar10 + 0x180,*param_1,*param_1,param_1[2],param_1[3],param_1[4]);
    *(int *)(iVar10 + 0x1f8) = param_1[3];
    *(int *)(iVar10 + 0x200) = param_1[2];
    uVar9 = param_1[2];
    uVar25 = 1;
    if ((uVar9 == 0) || (uVar25 = uVar9, uVar9 <= uVar9 - 1)) {
      fVar7 = *(float *)(puVar19 + -0x7f08);
      *(uint *)(iVar10 + 0x1fc) = uVar25;
      *(double *)(iVar10 + 0x208) =
           (double)(((float)*(uint *)(iVar10 + 0x1f8) * fVar7) / (float)*(uint *)(iVar10 + 0x194));
    }
    else {
      fVar7 = *(float *)(puVar19 + -0x7f08);
      *(uint *)(iVar10 + 0x1fc) = uVar9 - 1;
      *(double *)(iVar10 + 0x208) =
           (double)(((float)*(uint *)(iVar10 + 0x1f8) * fVar7) / (float)*(uint *)(iVar10 + 0x194));
    }
  }
  iVar20 = *(int *)(puVar19 + -0x7f78);
  iVar21 = FUN_00646638(iVar20,*(undefined4 *)(iVar20 + -0x1cc8),0);
  if (iVar21 < 0) {
    FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7efc));
    return iVar21;
  }
  uVar12 = *(undefined4 *)(iVar20 + -0x1cec);
  uVar13 = *(undefined4 *)(iVar20 + -0x1c88);
  **(undefined4 **)(puVar19 + -0x7ef8) = *(undefined4 *)(puVar19 + -0x7ef4);
  iVar20 = FUN_0064ec4c(iVar20 + 0xb80,uVar13,uVar12);
  if (iVar20 < 0) {
    FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7ef0));
  }
  else {
    if ((char *)param_1[0xd] == (char *)0x0) {
      pcVar17 = *(char **)(puVar19 + -0x7ee8);
      __s = *(char **)(puVar19 + -0x7eec);
      cVar1 = pcVar17[1];
      cVar2 = pcVar17[2];
      cVar3 = pcVar17[3];
      *__s = *pcVar17;
      __s[1] = cVar1;
      __s[2] = cVar2;
      __s[3] = cVar3;
      cVar1 = pcVar17[5];
      cVar2 = pcVar17[6];
      cVar3 = pcVar17[7];
      __s[4] = pcVar17[4];
      __s[5] = cVar1;
      __s[6] = cVar2;
      __s[7] = cVar3;
      cVar1 = pcVar17[9];
      cVar2 = pcVar17[10];
      cVar3 = pcVar17[0xb];
      __s[8] = pcVar17[8];
      __s[9] = cVar1;
      __s[10] = cVar2;
      __s[0xb] = cVar3;
      cVar1 = pcVar17[0xd];
      cVar2 = pcVar17[0xe];
      cVar3 = pcVar17[0xf];
      __s[0xc] = pcVar17[0xc];
      __s[0xd] = cVar1;
      __s[0xe] = cVar2;
      __s[0xf] = cVar3;
      cVar1 = pcVar17[0x11];
      cVar2 = pcVar17[0x12];
      cVar3 = pcVar17[0x13];
      __s[0x10] = pcVar17[0x10];
      __s[0x11] = cVar1;
      __s[0x12] = cVar2;
      __s[0x13] = cVar3;
      cVar1 = pcVar17[0x15];
      cVar2 = pcVar17[0x16];
      cVar3 = pcVar17[0x17];
      __s[0x14] = pcVar17[0x14];
      __s[0x15] = cVar1;
      __s[0x16] = cVar2;
      __s[0x17] = cVar3;
      cVar1 = pcVar17[0x19];
      cVar2 = pcVar17[0x1a];
      cVar3 = pcVar17[0x1b];
      __s[0x18] = pcVar17[0x18];
      __s[0x19] = cVar1;
      __s[0x1a] = cVar2;
      __s[0x1b] = cVar3;
      cVar1 = pcVar17[0x1d];
      cVar2 = pcVar17[0x1e];
      cVar3 = pcVar17[0x1f];
      __s[0x1c] = pcVar17[0x1c];
      __s[0x1d] = cVar1;
      __s[0x1e] = cVar2;
      __s[0x1f] = cVar3;
      cVar1 = pcVar17[0x21];
      cVar2 = pcVar17[0x22];
      cVar3 = pcVar17[0x23];
      __s[0x20] = pcVar17[0x20];
      __s[0x21] = cVar1;
      __s[0x22] = cVar2;
      __s[0x23] = cVar3;
      cVar1 = pcVar17[0x25];
      cVar2 = pcVar17[0x26];
      cVar3 = pcVar17[0x27];
      __s[0x24] = pcVar17[0x24];
      __s[0x27] = cVar3;
      __s[0x25] = cVar1;
      __s[0x26] = cVar2;
      cVar1 = pcVar17[0x29];
      cVar2 = pcVar17[0x2a];
      cVar3 = pcVar17[0x2b];
      __s[0x28] = pcVar17[0x28];
      __s[0x29] = cVar1;
      __s[0x2a] = cVar2;
      __s[0x2b] = cVar3;
      sVar22 = libc::strlen(__s);
      puVar18 = *(undefined1 **)(puVar19 + -0x7ee4);
      puVar23 = (undefined1 *)(sVar22 + *(int *)(puVar19 + -0x7eec));
      uVar4 = puVar18[1];
      uVar5 = puVar18[2];
      uVar6 = puVar18[3];
      *puVar23 = *puVar18;
      puVar23[1] = uVar4;
      puVar23[2] = uVar5;
      puVar23[3] = uVar6;
      uVar4 = puVar18[5];
      uVar5 = puVar18[6];
      uVar6 = puVar18[7];
      puVar23[4] = puVar18[4];
      puVar23[5] = uVar4;
      puVar23[6] = uVar5;
      puVar23[7] = uVar6;
      puVar23[8] = puVar18[8];
    }
    else {
      __s = *(char **)(puVar19 + -0x7eec);
      libc::strcpy(__s,(char *)param_1[0xd]);
    }
    sVar22 = libc::strlen(__s);
    if (sVar22 < 0x100) {
      iVar20 = FUN_0064cb60((ulonglong)*(uint *)(puVar19 + -0x7fac),param_1[0xc],
                            (ulonglong)*(uint *)(puVar19 + -0x7fac) - 0x280,__s);
      if (iVar20 < 0) {
        FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7ed8));
      }
      else {
        if ((*(int *)(iVar10 + 0x24) == 0) || (*(int *)(iVar10 + 0x28) == 0)) {
          cell::cellSpursGetInfo(param_1[0x1a],auStack_178);
          iVar20 = *(int *)(puVar19 + -0x7e6c);
          iVar20 = FUN_0064a460(iVar20,param_1[0xc],param_1[0x1e],*(undefined4 *)(iVar20 + -0x2788),
                                *(undefined4 *)(iVar20 + -0x27ec),iVar20 + -0x1400,iVar20 + -0x2980,
                                iVar20 + -0x2700);
          if (iVar20 < 0) {
            FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7ed4));
            return iVar20;
          }
        }
        iVar21 = *(int *)(puVar19 + -0x7ed0);
        FUN_00644810(iVar21,*(undefined4 *)(puVar19 + -0x7ecc));
        FUN_00644810(iVar21 + 0x230,*(undefined4 *)(puVar19 + -0x7ec8));
        FUN_00644810(iVar21 + 0x460,*(undefined4 *)(puVar19 + -0x7ec4));
        FUN_00644810(iVar21 + 0x690,*(undefined4 *)(puVar19 + -0x7ec0));
        iVar20 = param_1[0xc];
        *(undefined4 *)(iVar21 + 0x8c0) = 1;
        iVar20 = FUN_0064d340(iVar21 + -0x1580,param_1 + 0x1a,iVar20,iVar21,iVar21 + -0x1300,
                              iVar21 + 0x900,iVar21 + -0x1400,iVar21 + 0x1480);
        if (iVar20 < 0) {
          FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7eb8));
        }
        else {
          fVar7 = (float)param_1[0x13];
          fVar8 = (float)param_1[0x14];
          *(uint *)(iVar21 + 0x15cc) = *(uint *)(iVar21 + 0x15cc) | 1;
          uVar9 = param_1[0x19];
          uVar25 = param_1[0x11];
          iVar20 = param_1[0x12];
          uVar24 = (ulonglong)((int)uVar25 >> 0x1f);
          iVar14 = param_1[0x15];
          iVar15 = param_1[0x16];
          *(int *)(iVar21 + 0x15b0) = param_1[0xc];
          iVar20 = FUN_00646abc((double)fVar7,(double)fVar8,iVar21 + 0x1500,iVar21 + 0x900,iVar20,
                                iVar14,iVar15,*(undefined4 *)(iVar21 + -5000),
                                ((ulonglong)(uVar9 >> 8) & 1) << 6 |
                                ((ulonglong)(uVar9 >> 3) & 1) << 1 |
                                ((ulonglong)(uVar9 >> 6) & 1) << 4 |
                                ((ulonglong)(uVar9 >> 7) & 1) << 5 |
                                ((ulonglong)(uVar9 >> 4) & 1) << 2 |
                                ((ulonglong)(uVar9 >> 5) & 1) << 3 |
                                (uVar24 - (uVar24 ^ uVar25) << 0x20) >> 0x3f);
          if (iVar20 < 0) {
            FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7eb4));
          }
          else {
            iVar20 = FUN_006423dc(*(undefined4 *)(puVar19 + -0x7f40),
                                  *(undefined4 *)(puVar19 + -0x7eb0),
                                  *(undefined4 *)(puVar19 + -0x7eac));
            if (-1 < iVar20) {
              uVar9 = param_1[7];
              iVar20 = FUN_00641b58(local_180,1,0,0,0,0,iVar21 + 0x15c4,
                                    *(undefined4 *)(puVar19 + -0x7ea4));
              if (iVar20 < 0) {
                FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7ea0));
              }
              else {
                iVar20 = FUN_00641a3c(*(undefined4 *)(iVar21 + 0x15c4),0,0);
                if (iVar20 < 0) {
                  FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7e9c));
                }
                else {
                  puVar16 = *(undefined4 **)(puVar19 + -0x7ffc);
                  iVar20 = FUN_0064547c(*(undefined4 *)(iVar21 + 0x15c4),100,puVar16,0);
                  if (iVar20 < 0) {
                    FUN_00641910(0,*(undefined4 *)(puVar19 + -0x7e98));
                  }
                  else {
                    if ((uVar9 & 0x10) == 0) {
LAB_0064334c:
                      iVar20 = FUN_0064ce88(iVar10,*puVar16);
                      if (iVar20 < 0) {
                        FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7e80));
                        return iVar20;
                      }
                      if ((*(uint *)(iVar10 + 0x2b4c) & 0x10) == 0) {
                        iVar20 = FUN_0064b650(iVar10 + 0x180,*(undefined4 *)(puVar19 + -0x7e7c),
                                              iVar10,*(undefined4 *)(puVar19 + -0x7e78),iVar10);
                      }
                      else {
                        iVar20 = FUN_00648e98(iVar10 + 0x180,*(undefined4 *)(puVar19 + -0x7e7c),
                                              iVar10,*(undefined4 *)(puVar19 + -0x7e78),iVar10);
                      }
                      if (-1 < iVar20) {
                        if ((*(uint *)(iVar10 + 0x2b4c) & 4) != 0) {
                          return iVar20;
                        }
                        FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f8c));
                        FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7e70));
                        FUN_00641910(3,*(undefined4 *)(puVar19 + -0x7f84));
                        return iVar20;
                      }
                      FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7e74));
                      return iVar20;
                    }
                    iVar20 = FUN_00641b58(local_17c,1,0,0,0,0,iVar21 + 0x15c8,
                                          *(undefined4 *)(puVar19 + -0x7e94));
                    if (iVar20 < 0) {
                      FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7e90));
                    }
                    else {
                      iVar20 = FUN_00641a3c(*(undefined4 *)(iVar21 + 0x15c8),
                                            *(undefined4 *)(iVar21 + 0x15c4),0);
                      if (iVar20 < 0) {
                        FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7e8c));
                      }
                      else {
                        iVar20 = FUN_0064547c(*(undefined4 *)(iVar21 + 0x15c8),100,
                                              *(undefined4 *)(puVar19 + -0x7f74),0);
                        if (-1 < iVar20) goto LAB_0064334c;
                        FUN_00641910(0,*(undefined4 *)(puVar19 + -0x7e88));
                      }
                    }
                  }
                }
              }
              FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7e84));
              return iVar20;
            }
            FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7ea8));
          }
        }
      }
    }
    else {
      iVar20 = -1;
      FUN_00641910(0,*(undefined4 *)(puVar19 + -0x7ee0),__s);
      FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7edc));
    }
  }
  return iVar20;
}



//==== 00643520  ns=Global  size=0x244
// sig: undefined FUN_00643520(void)
// callers(1): 0062c52c FUN_0062c52c
// callees(4): 006417a0 FUN_006417a0; 00641910 FUN_00641910; 00647ed0 FUN_00647ed0; 00647fa0 FUN_00647fa0
// strings: 00674058: 'brb_StartSession(): SESSION ALREADY STARTED!' | 006740a8: 'brb_StartSession(): s_pPrimaryOutput %d sec wait TIME-OUT!\n' | 00673640: '----------------------------------------' | 00674088: '\t\tbrb_StartSession(): OK' | 00673688: '----------------------------------------\n'

/* WARNING: Removing unreachable block (ram,0x006435d4) */
/* WARNING: Removing unreachable block (ram,0x006436f8) */
/* WARNING: Removing unreachable block (ram,0x00643718) */
/* WARNING: Removing unreachable block (ram,0x00643630) */
/* WARNING: Removing unreachable block (ram,0x00643674) */
/* WARNING: Removing unreachable block (ram,0x00643688) */
/* WARNING: Removing unreachable block (ram,0x00643640) */
/* WARNING: Removing unreachable block (ram,0x006436b8) */
/* WARNING: Removing unreachable block (ram,0x006436cc) */
/* WARNING: Removing unreachable block (ram,0x00643664) */
/* WARNING: Removing unreachable block (ram,0x00643690) */

undefined4 FUN_00643520(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_40 [16];
  
  uVar1 = *(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c);
  if ((uVar1 & 2) == 0) {
    puVar2 = *(undefined4 **)(PTR_PTR_0071b074 + -0x7ffc);
    *(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) = uVar1 | 2;
    FUN_00647ed0(*puVar2,local_40);
    uVar3 = 0xffffffff;
  }
  else {
    FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b074 + -0x7e68));
    uVar3 = 0;
  }
  return uVar3;
}



//==== 00643764  ns=Global  size=0x120
// sig: undefined FUN_00643764(void)
// callers(0): 
// callees(3): 00641910 FUN_00641910; 00643f40 FUN_00643f40; 0064547c FUN_0064547c
// strings: 00674128: 'brb_AllocVoice(): Invalid rack unit ID!' | 006740e8: 'brb_AllocVoice(): Unable to find rack unit with RUID 0x%llX'

undefined4 FUN_00643764(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_3c;
  undefined1 local_38 [16];
  
  puVar1 = PTR_PTR_0071b074;
  if ((*param_1 == 0) || (local_3c = (byte)((uint)*param_1 >> 0x18), 3 < local_3c)) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b074 + -0x7e58));
  }
  else {
    iVar2 = FUN_00643f40((uint)local_3c * 0x230 + 0x1580 + *(int *)(PTR_PTR_0071b074 + -0x8000),
                         local_38);
    if (iVar2 != 0) {
      uVar3 = FUN_0064547c(iVar2,param_2,param_3);
      return uVar3;
    }
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7e5c),*(undefined8 *)param_1,param_4);
  }
  return 0xffffffff;
}



//==== 00643884  ns=Global  size=0x20c
// sig: undefined FUN_00643884(void)
// callers(2): 00626e80 989snd::snd_SynthLR1Destroy; 00627448 FUN_00627448
// callees(6): 00643b4c FUN_00643b4c; 006444e0 FUN_006444e0; 006448c4 FUN_006448c4; 00644da4 FUN_00644da4; 00645360 FUN_00645360; 006468bc FUN_006468bc

undefined4 FUN_00643884(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  byte local_70;
  
  puVar2 = PTR_PTR_0071b074;
  local_70 = (byte)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x18);
  iVar1 = *(int *)(PTR_PTR_0071b074 + -0x8000);
  iVar5 = (uint)local_70 * 0x230 + 0x1580 + iVar1;
  cVar4 = FUN_00643b4c(iVar5,param_1);
  uVar3 = 0xffffffff;
  if (cVar4 != '\0') {
    if (local_70 != 0) {
      piVar6 = (int *)(iVar1 + 0x1580);
      uVar7 = 0;
      do {
        iVar1 = *piVar6;
        while (iVar1 != 0) {
          iVar8 = param_1;
          if (param_1 != iVar1) {
            FUN_00645360(iVar1,param_1);
            iVar8 = iVar1;
          }
          iVar1 = *(int *)(iVar8 + 4);
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 0x8c;
      } while (uVar7 <= local_70);
    }
    iVar1 = *(int *)(puVar2 + -0x8000);
    if ((*(int *)(iVar1 + 0x2adc) != 0) && (*(int *)(*(int *)(iVar1 + 0x2adc) + 0x18) == param_1)) {
      FUN_006468bc(iVar1 + 0x2a80);
    }
    FUN_006448c4(iVar5,param_1,param_2 & 0xff,param_3,param_4,*(undefined4 *)(iVar1 + 0x5c));
    uVar3 = 0;
    *(int *)(iVar1 + 0x150) = *(int *)(iVar1 + 0x150) - *(int *)(param_1 + 0x98);
    if (param_2 != 0) {
      if ((*(uint *)(iVar1 + 0x2b4c) & 2) != 0) {
        do {
          syscall();
          if ((*(uint *)(iVar1 + 0x2b4c) & 2) == 0) break;
          cVar4 = FUN_00644da4(param_1);
        } while (cVar4 == '\0');
      }
      FUN_006444e0(iVar5,param_1,*(undefined4 *)(iVar1 + 0x2b30));
      uVar3 = 0;
    }
  }
  return uVar3;
}



//==== 00643a90  ns=Global  size=0xbc
// sig: undefined FUN_00643a90(void)
// callers(0): 
// callees(2): 00641910 FUN_00641910; 00643f40 FUN_00643f40
// strings: 00674150: 'brb_GetRackUnitByRUID(): Invalid rack unit ID!'

int FUN_00643a90(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  byte local_1c;
  undefined1 local_18 [8];
  
  if ((*param_1 == 0) || (local_1c = (byte)((uint)*param_1 >> 0x18), 3 < local_1c)) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b074 + -0x7e54));
    iVar1 = -1;
  }
  else {
    uVar2 = FUN_00643f40((uint)local_1c * 0x230 + 0x1580 + *(int *)(PTR_PTR_0071b074 + -0x8000),
                         local_18);
    *param_2 = uVar2;
    iVar1 = (int)((((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) + -1) >> 0x1f;
  }
  return iVar1;
}



//==== 00643b4c  ns=Global  size=0x44
// sig: undefined FUN_00643b4c(void)
// callers(1): 00643884 FUN_00643884
// callees(0): 

uint FUN_00643b4c(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    do {
      piVar3 = param_2;
      param_2 = (int *)*piVar3;
    } while (param_2 != (int *)0x0);
    uVar2 = (uint)piVar3 ^ *param_1;
    uVar1 = (int)uVar2 >> 0x1f;
    uVar1 = ((uVar1 ^ uVar2) - uVar1) - 1 >> 0x1f;
  }
  return uVar1;
}



//==== 00643b90  ns=Global  size=0x7c
// sig: undefined FUN_00643b90(void)
// callers(1): 006445cc FUN_006445cc
// callees(0): 

void FUN_00643b90(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  param_1[2] = param_1[2] + 1;
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    *param_1 = (int)param_2;
    param_1[1] = (int)param_2;
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  iVar1 = param_1[1];
  if (iVar1 != param_3) {
    iVar1 = *(int *)(param_3 + 4);
    *param_2 = param_3;
    param_2[1] = iVar1;
    *(int **)(param_3 + 4) = param_2;
    return;
  }
  *param_2 = iVar1;
  param_2[1] = 0;
  *(int **)(iVar1 + 4) = param_2;
  param_1[1] = (int)param_2;
  return;
}



//==== 00643c0c  ns=Global  size=0x78
// sig: undefined FUN_00643c0c(void)
// callers(1): 006445cc FUN_006445cc
// callees(0): 

void FUN_00643c0c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  param_1[2] = param_1[2] + 1;
  if ((puVar1 == (undefined4 *)0x0) && (param_1[1] == 0)) {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  if (puVar1 != param_3) {
    uVar2 = *param_3;
    param_2[1] = param_3;
    *param_2 = uVar2;
    *param_3 = param_2;
    return;
  }
  param_2[1] = puVar1;
  *param_2 = 0;
  *puVar1 = param_2;
  *param_1 = param_2;
  return;
}



//==== 00643c84  ns=Global  size=0xb4
// sig: undefined FUN_00643c84(void)
// callers(1): 006444e0 FUN_006444e0
// callees(0): 

void FUN_00643c84(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  param_1[2] = param_1[2] + -1;
  if ((int *)*param_1 == (int *)param_1[1]) {
    *param_2 = 0;
    param_2[1] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((int *)*param_1 != param_2) {
    if ((int *)param_1[1] != param_2) {
      iVar1 = *param_2;
      *(int *)(iVar1 + 4) = param_2[1];
      piVar2 = (int *)param_2[1];
      param_2[1] = 0;
      *piVar2 = iVar1;
      *param_2 = 0;
      return;
    }
    iVar1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    param_2[1] = 0;
    param_1[1] = iVar1;
    return;
  }
  puVar3 = (undefined4 *)param_2[1];
  param_2[1] = 0;
  *puVar3 = 0;
  *param_2 = 0;
  *param_1 = puVar3;
  return;
}



//==== 00643d38  ns=Global  size=0x200
// sig: undefined FUN_00643d38(void)
// callers(1): 00644b7c FUN_00644b7c
// callees(0): 

void FUN_00643d38(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
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
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar3 = (undefined4 *)*param_1;
  param_1[2] = param_1[2] + 1;
  if ((puVar3 != (undefined4 *)0x0) || (param_1[1] != 0)) {
    iVar2 = (*(code *)*param_3)(puVar3,param_2,param_4);
    if (iVar2 < 0) {
      param_2[1] = puVar3;
      *param_2 = 0;
      *puVar3 = param_2;
      *param_1 = param_2;
      return;
    }
    puVar1 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      while (puVar3 = puVar1, puVar1 = (undefined4 *)puVar3[1], puVar1 != (undefined4 *)0x0) {
        iVar2 = (*(code *)*param_3)(puVar1,param_2,param_4);
        if (iVar2 < 0) {
          param_2[1] = puVar1;
          *param_2 = puVar3;
          puVar3[1] = param_2;
          *puVar1 = param_2;
          return;
        }
      }
    }
    *param_2 = puVar3;
    param_2[1] = 0;
    puVar3[1] = param_2;
    param_1[1] = param_2;
  }
  else {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}



//==== 00643f38  ns=Global  size=0x8
// sig: undefined FUN_00643f38(void)
// callers(1): 0062c52c FUN_0062c52c
// callees(0): 

void FUN_00643f38(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  return;
}



//==== 00643f40  ns=Global  size=0xa8
// sig: undefined FUN_00643f40(void)
// callers(2): 00643764 FUN_00643764; 00643a90 FUN_00643a90
// callees(0): 

undefined4 FUN_00643f40(int param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  
  iVar4 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar4) {
    iVar2 = 0;
    do {
      while( true ) {
        uVar1 = iVar4 + iVar2;
        iVar5 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
        iVar3 = iVar5 * 0x10 + 0x30;
        puVar6 = (ulonglong *)(param_1 + iVar3);
        if ((*(int *)puVar6 == *(int *)param_2) && ((int)*param_2 == (int)*puVar6)) {
          return *(undefined4 *)(param_1 + iVar3 + 8);
        }
        if (*param_2 < *puVar6) break;
        iVar2 = iVar5 + 1;
        if (iVar4 < iVar2) {
          return 0;
        }
      }
      iVar4 = iVar5 + -1;
    } while (iVar2 <= iVar4);
  }
  return 0;
}



//==== 00643fe8  ns=Global  size=0x40
// sig: undefined FUN_00643fe8(void)
// callers(6): 00641134 FUN_00641134; 006444e0 FUN_006444e0; 006445cc FUN_006445cc; 0064484c FUN_0064484c; 0064842c FUN_0064842c; 00648b10 idol::brbVoice_ConnectPort
// callees(0): 

uint FUN_00643fe8(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    do {
      puVar3 = (uint *)(param_1 + 0x20U);
      uVar1 = *puVar3;
    } while ((uVar1 & 2) != 0);
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 | 2,0,param_1 + 0x20U & 0xffffffff);
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return uVar1 & 1;
}



//==== 00644028  ns=Global  size=0x34
// sig: undefined FUN_00644028(void)
// callers(6): 00641134 FUN_00641134; 006444e0 FUN_006444e0; 006445cc FUN_006445cc; 0064484c FUN_0064484c; 0064842c FUN_0064842c; 00648b10 idol::brbVoice_ConnectPort
// callees(0): 

void FUN_00644028(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar3 = (uint *)(param_1 + 0x20U);
    uVar2 = (ulonglong)*puVar3 & 0xfffffffc;
    if (param_2 != 0) {
      uVar2 = uVar2 | 1;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2,0,param_1 + 0x20U & 0xffffffff);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return;
}



//==== 0064405c  ns=Global  size=0x1dc
// sig: undefined FUN_0064405c(void)
// callers(2): 0064405c FUN_0064405c; 00644238 FUN_00644238
// callees(2): 00641910 FUN_00641910; 0064405c FUN_0064405c
// strings: 006741d0: "brbRack::s_WalkFiltergraph: FEEDBACK LOOP DETECTED! Voice 0x%p from RU '%s' feeds back to itself via voice 0x%p from RU '%s'." | 00674180: "brbRack::s_WalkFiltergraph: Reached maximum submix depth (%d) for '%s' stage."

undefined4 FUN_0064405c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  char local_60;
  char local_5c;
  
  puVar7 = PTR_PTR_0071b07c;
  puVar2 = *(uint **)(PTR_PTR_0071b07c + -0x7ffc);
  piVar3 = *(int **)(PTR_PTR_0071b07c + -0x7ff8);
  uVar4 = *puVar2;
  uVar9 = uVar4 + 1;
  local_5c = (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10) >> 0x18);
  *puVar2 = uVar9;
  piVar3[uVar4] = param_1;
  if (uVar9 == 0xb) {
    FUN_00641910(0,*(undefined4 *)(puVar7 + -0x7ff4),10,param_3 + 0xc);
  }
  iVar11 = 0;
  do {
    iVar5 = *(int *)(param_1 + iVar11 + 0x20);
    if (iVar5 != 0) {
      local_60 = (char)((uint)*(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x10) >> 0x18);
      if (local_60 == local_5c) {
        uVar4 = *puVar2;
        if (uVar4 == 0) {
LAB_006441a4:
          if (iVar5 == param_2) {
            *puVar2 = uVar4 - 1;
            return 1;
          }
          cVar8 = FUN_0064405c(iVar5,param_2,param_3);
          if (cVar8 != '\0') {
            *puVar2 = *puVar2 - 1;
            return 1;
          }
        }
        else {
          if (*piVar3 != iVar5) {
            uVar12 = (ulonglong)uVar4;
            piVar10 = *(int **)(puVar7 + -0x8000);
            do {
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_006441a4;
              iVar6 = *piVar10;
              piVar10 = piVar10 + 1;
            } while (iVar5 != iVar6);
          }
          FUN_00641910(0,*(undefined4 *)(puVar7 + -0x7ff0),iVar5,*(int *)(iVar5 + 0x18) + 0x1c,
                       param_1,*(int *)(param_1 + 0x18) + 0x1c);
        }
      }
    }
    bVar1 = iVar11 == 0xc;
    iVar11 = iVar11 + 4;
    if (bVar1) {
      *puVar2 = *puVar2 - 1;
      return 0;
    }
  } while( true );
}



//==== 00644238  ns=Global  size=0x40
// sig: undefined FUN_00644238(void)
// callers(0): 
// callees(1): 0064405c FUN_0064405c

uint FUN_00644238(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0064405c(param_2,param_1);
  return (int)-(uVar1 & 0xff) >> 0x1f | 1;
}



//==== 00644278  ns=Global  size=0xc8
// sig: undefined FUN_00644278(void)
// callers(1): 006444e0 FUN_006444e0
// callees(1): 005c6094 FUN_005c6094

undefined4 FUN_00644278(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1;
    uVar3 = 0;
    do {
      piVar2 = (int *)(param_1 + uVar3 * 0x10 + 0x30);
      if ((*piVar2 == *(int *)(param_2 + 0x10)) && (piVar2[1] == *(int *)(param_2 + 0x14))) {
        if (uVar1 - 1 <= uVar3) {
          return 1;
        }
        FUN_005c6094(piVar2,param_1 + uVar3 * 0x10 + 0x40,(uVar1 - uVar3) * 0x10 + -0x10);
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}



//==== 00644340  ns=Global  size=0x1a0
// sig: undefined FUN_00644340(void)
// callers(1): 006445cc FUN_006445cc
// callees(1): 005c6094 FUN_005c6094

undefined4 FUN_00644340(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  int *piVar9;
  ulonglong uVar10;
  
  uVar1 = *(uint *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  if (uVar1 == 0) {
    *(int *)(param_1 + 0x30) = iVar3;
    *(int *)(param_1 + 0x34) = iVar2;
    *(int *)(param_1 + 0x38) = param_2;
    return 1;
  }
  uVar10 = (ulonglong)uVar1;
  uVar6 = 0;
  iVar7 = 0;
  puVar8 = (ulonglong *)(param_1 + 0x30);
  uVar4 = 0xffffffff;
  do {
    if ((*(int *)puVar8 == iVar3) && ((int)*puVar8 == iVar2)) {
      return 0;
    }
    uVar5 = uVar4;
    if (((uVar4 == 0xffffffff) && (uVar5 = uVar6, *puVar8 <= *(ulonglong *)(param_2 + 0x10))) &&
       (uVar5 = uVar4, uVar1 - 1 == iVar7)) {
      uVar5 = uVar1;
    }
    uVar6 = uVar6 + 1;
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + 1;
    uVar10 = uVar10 - 1;
    uVar4 = uVar5;
  } while (uVar10 != 0);
  iVar7 = uVar5 * 0x10 + 0x30;
  piVar9 = (int *)(param_1 + iVar7);
  FUN_005c6094(param_1 + uVar5 * 0x10 + 0x40,piVar9,uVar1 - uVar5 & 0xfffffff);
  *piVar9 = iVar3;
  piVar9[1] = iVar2;
  *(int *)(param_1 + iVar7 + 8) = param_2;
  return 1;
}



//==== 006444e0  ns=Global  size=0xec
// sig: undefined FUN_006444e0(void)
// callers(3): 006427e8 FUN_006427e8; 00643884 FUN_00643884; 00644a90 FUN_00644a90
// callees(4): 00643c84 FUN_00643c84; 00643fe8 FUN_00643fe8; 00644028 FUN_00644028; 00644278 FUN_00644278

void FUN_006444e0(undefined8 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  FUN_00643fe8();
  FUN_00644278(param_1,param_2);
  FUN_00643c84(param_1,param_2);
  FUN_00644028(param_1,1);
  (*(code *)**(undefined4 **)(*param_3 + 4))(param_3,param_2,0xfff0147,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)(uVar2);
  }
  return;
}



//==== 006445cc  ns=Global  size=0x138
// sig: undefined FUN_006445cc(void)
// callers(1): 00641a3c FUN_00641a3c
// callees(5): 00643b90 FUN_00643b90; 00643c0c FUN_00643c0c; 00643fe8 FUN_00643fe8; 00644028 FUN_00644028; 00644340 FUN_00644340

undefined4 FUN_006445cc(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  
  FUN_00643fe8(param_1);
  cVar1 = FUN_00644340(param_1,param_2);
  if (cVar1 != '\0') {
    if (param_3 == 0) {
      if (param_4 == 1) {
        FUN_00643c0c(param_1,param_2,*param_1);
      }
      else {
        FUN_00643b90(param_1,param_2,param_1[1]);
      }
    }
    else if (param_4 == 1) {
      FUN_00643b90(param_1,param_2,param_3);
    }
    else {
      FUN_00643c0c(param_1,param_2,param_3);
    }
    FUN_00644028(param_1,1);
    return 1;
  }
  FUN_00644028(param_1,0);
  return 0;
}



//==== 00644704  ns=Global  size=0xc8
// sig: undefined FUN_00644704(void)
// callers(2): 006447cc FUN_006447cc; 00644810 FUN_00644810
// callees(3): 005c8510 libc::strlen; 005cc8d8 libc::strcpy; 00641910 FUN_00641910
// strings: 00674250: 'brbRack::SetName( %s ): Rack name too long! (max len: %d).'

char * FUN_00644704(int param_1,char *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  char *pcVar3;
  
  puVar1 = PTR_PTR_0071b07c;
  if (param_2 != (char *)0x0) {
    sVar2 = libc::strlen(param_2);
    if (0xf < sVar2) {
      FUN_00641910(3,*(undefined4 *)(puVar1 + -0x7fec),param_2,0xf);
      param_2[0xf] = '\0';
    }
    pcVar3 = libc::strcpy((char *)(param_1 + 0xc),param_2);
    return pcVar3;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_2;
}



//==== 006447cc  ns=Global  size=0x44
// sig: undefined FUN_006447cc(void)
// callers(1): 006427e8 FUN_006427e8
// callees(1): 00644704 FUN_00644704

void FUN_006447cc(undefined4 *param_1)

{
  FUN_00644704(param_1,0);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



//==== 00644810  ns=Global  size=0x3c
// sig: undefined FUN_00644810(void)
// callers(1): 00642a50 FUN_00642a50
// callees(1): 00644704 FUN_00644704

undefined8 FUN_00644810(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_00644704(param_1);
  return 0;
}



//==== 0064484c  ns=Global  size=0x78
// sig: undefined FUN_0064484c(void)
// callers(1): 006416ec FUN_006416ec
// callees(3): 00643fe8 FUN_00643fe8; 00644028 FUN_00644028; 00644ce0 FUN_00644ce0

void FUN_0064484c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00643fe8();
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_00644ce0(iVar1,param_2);
  }
  FUN_00644028(param_1,0);
  return;
}



//==== 006448c4  ns=Global  size=0x1cc
// sig: undefined FUN_006448c4(void)
// callers(1): 00643884 FUN_00643884
// callees(1): 00647dd0 FUN_00647dd0

void FUN_006448c4(undefined8 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  char in_RESERVE;
  byte in_cr0;
  double dVar7;
  double dVar8;
  
  uVar3 = *(uint *)(param_2 + 0x98);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(int *)(param_2 + 0x90) + 0x10);
    uVar5 = 0;
    dVar7 = (double)**(float **)(PTR_PTR_0071b07c + -0x7fe4);
    dVar8 = (double)**(float **)(PTR_PTR_0071b07c + -0x7fe8);
LAB_00644990:
    do {
      bVar1 = (1 << (uVar5 & 0x1f) & *(uint *)(param_2 + 0x98 + (uVar5 >> 3 & 0x1ffffffc) + 0xc)) ==
              0;
      in_cr0 = bVar1 << 1;
      if (!bVar1) {
        sync(1);
        if ((*(uint *)piVar6[1] & 1) == 0) {
          if (dVar7 <= (double)*(float *)(*piVar6 + 0xc)) goto LAB_00644980;
          fVar2 = *(float *)(*piVar6 + 0xc);
        }
        else {
          fVar2 = *(float *)(*piVar6 + 0xc);
        }
        if ((double)fVar2 != dVar8) {
          uVar5 = uVar5 + 1;
          FUN_00647dd0(piVar6 + -4,1);
          piVar6 = piVar6 + 0xc;
          if (uVar3 == uVar5) break;
          goto LAB_00644990;
        }
      }
LAB_00644980:
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0xc;
    } while (uVar3 != uVar5);
  }
  puVar4 = (uint *)(param_2 + 0x80);
  *(undefined4 *)(param_2 + 0x48) = param_5;
  *(undefined4 *)(param_2 + 0x4c) = param_6;
  *(undefined4 *)(param_2 + 0x44) = param_4;
  do {
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed
                        (((ulonglong)(uint)((int)((param_3 & 0xff) - 1) >> 0x1f) & 0xfffffffc) + 6 |
                         (ulonglong)*puVar4,0,ZEXT48(puVar4));
      *puVar4 = uVar3;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return;
}



//==== 00644a90  ns=Global  size=0xec
// sig: undefined FUN_00644a90(void)
// callers(1): 00641134 FUN_00641134
// callees(2): 006444e0 FUN_006444e0; 00644da4 FUN_00644da4

void FUN_00644a90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *param_1;
  do {
    if (iVar2 == 0) {
      return;
    }
    while( true ) {
      sync(1);
      if ((((*(uint *)(iVar2 + 0x80) & 2) != 0) && (sync(1), (*(uint *)(iVar2 + 0x80) & 4) == 0)) &&
         (cVar3 = FUN_00644da4(iVar2), cVar3 != '\0')) break;
      piVar1 = (int *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 100) = 0;
      *(undefined4 *)(iVar2 + 0x5c) = param_2;
      iVar2 = *piVar1;
      if (*piVar1 == 0) {
        return;
      }
    }
    FUN_006444e0(param_1,iVar2,param_3);
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}



//==== 00644b7c  ns=Global  size=0x108
// sig: undefined FUN_00644b7c(void)
// callers(1): 00641134 FUN_00641134
// callees(1): 00643d38 FUN_00643d38

void FUN_00644b7c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  
  param_1[9] = 0;
  puVar5 = PTR_PTR_0071b07c;
  iVar1 = *param_1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(uint *)(iVar1 + 0x98);
    if (uVar2 != 0) {
      uVar6 = 0;
      iVar7 = *(int *)(iVar1 + 0x90);
      do {
        while( true ) {
          uVar3 = uVar6 >> 3;
          uVar4 = uVar6 & 0x1f;
          uVar6 = uVar6 + 1;
          if ((1 << uVar4 & *(uint *)(iVar1 + (uVar3 & 0x1ffffffc) + 0xa4)) == 0) break;
          FUN_00643d38(param_1 + 9,iVar7,*(undefined4 *)(puVar5 + -0x7fe0),param_1);
          iVar7 = iVar7 + 0x30;
          if (uVar2 == uVar6) goto LAB_00644c48;
        }
        iVar7 = iVar7 + 0x30;
      } while (uVar2 != uVar6);
    }
LAB_00644c48:
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}



//==== 00644c84  ns=Global  size=0x8
// sig: undefined FUN_00644c84(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00644c84(void)

{
  return 0;
}



//==== 00644c8c  ns=Global  size=0x4
// sig: undefined FUN_00644c8c(void)
// callers(0): 
// callees(0): 

void FUN_00644c8c(void)

{
  return;
}



//==== 00644c90  ns=Global  size=0x34
// sig: undefined FUN_00644c90(void)
// callers(1): 00641134 FUN_00641134
// callees(0): 

uint FUN_00644c90(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar3 = (uint *)(param_1 + 0x80U);
    uVar1 = *puVar3;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed
                        ((ulonglong)uVar1 & 0xfffffffe,0,param_1 + 0x80U & 0xffffffff);
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return uVar1 & 1;
}



//==== 00644cc4  ns=Global  size=0x1c
// sig: undefined FUN_00644cc4(void)
// callers(1): 00641b58 FUN_00641b58
// callees(0): 

void FUN_00644cc4(double param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(float *)(param_2 + 0x54) = (float)param_1;
  *(undefined4 *)(param_2 + 0x3c) = param_3;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x40) = param_4;
  *(undefined4 *)(param_2 + 0x50) = param_5;
  return;
}



//==== 00644ce0  ns=Global  size=0xc4
// sig: undefined FUN_00644ce0(void)
// callers(1): 0064484c FUN_0064484c
// callees(0): 

void FUN_00644ce0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x60);
    if (uVar3 < param_2) {
      while( true ) {
        iVar2 = (*(code *)*puVar1)(param_2 - uVar3,*(undefined4 *)(param_1 + 0x50));
        uVar3 = uVar3 + iVar2;
        if (param_2 <= uVar3) break;
        puVar1 = *(undefined4 **)(param_1 + 0x3c);
      }
    }
    *(uint *)(param_1 + 0x60) = uVar3 - param_2;
  }
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x40))(0);
  }
  return;
}



//==== 00644da4  ns=Global  size=0x44
// sig: undefined FUN_00644da4(void)
// callers(2): 00643884 FUN_00643884; 00644a90 FUN_00644a90
// callees(0): 

bool FUN_00644da4(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  bVar2 = false;
  if ((uVar1 != 0xffffffff) && (uVar1 <= *(uint *)(param_1 + 0x5c))) {
    bVar2 = *(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x5c) - uVar1;
  }
  return bVar2;
}



//==== 00644de8  ns=Global  size=0xc0
// sig: undefined FUN_00644de8(void)
// callers(1): 00641b58 FUN_00641b58
// callees(1): 00641910 FUN_00641910
// strings: 00674290: '\tRackUnit:   %s \n\tPluginClass:   %s \n\treason:   BAD WORK AREA SIZE OVERRIDE! %d (min %d, max %d)\n'

uint FUN_00644de8(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0x270) + 0x7fU & 0xffffff80;
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar2 = uVar1, param_3 != 0)) {
    if ((param_3 < uVar1) || (uVar2 = param_3 + 0x7f & 0xffffff80, 0xa00000 < param_3)) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b080 + -0x8000),param_2,param_1 + 8,param_3,uVar1,
                   0xa00000);
      return uVar1;
    }
  }
  return uVar2;
}



//==== 00644ea8  ns=Global  size=0x94
// sig: undefined FUN_00644ea8(void)
// callers(2): 0064547c FUN_0064547c; 006483a8 FUN_006483a8
// callees(1): 00641910 FUN_00641910
// strings: 006742f8: 'brbRackUnit::SetVoicePriority(): Voice %p is not from this rack unit (%s)!'

undefined4 FUN_00644ea8(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_2 - *(int *)(param_1 + 0x90) >> 4) * -0x55555555;
  uVar2 = 0;
  if (uVar1 < *(uint *)(param_1 + 0x98)) {
    *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x94)) = param_3;
  }
  else {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b080 + -0x7ffc),param_2,*(int *)(param_1 + 0x18) + 8)
    ;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 00644f3c  ns=Global  size=0xec
// sig: undefined FUN_00644f3c(void)
// callers(1): 006450cc FUN_006450cc
// callees(2): 00641910 FUN_00641910; 006505c4 sys::sys_ppu_thread_get_id
// strings: 00674348: 'This thread was not the first to operate this rack unit (%s)!\nFirst thread was id: 0x%X'

undefined4 FUN_00644f3c(int param_1)

{
  undefined *puVar1;
  ulonglong local_20 [2];
  
  puVar1 = PTR_PTR_0071b080;
  if ((*(uint *)(param_1 + 0x74) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x88) == 0xffffffff) {
      sys::sys_ppu_thread_get_id(param_1 + 0x88);
      return 1;
    }
    sys::sys_ppu_thread_get_id(local_20);
    if (*(ulonglong *)(param_1 + 0x88) != local_20[0]) {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff8),*(int *)(param_1 + 0x18) + 8,
                   *(ulonglong *)(param_1 + 0x88) & 0xffffffff);
      return 0;
    }
  }
  return 1;
}



//==== 00645028  ns=Global  size=0xa4
// sig: undefined FUN_00645028(void)
// callers(1): 00648344 FUN_00648344
// callees(1): 00641910 FUN_00641910
// strings: 006743a0: 'brbRackUnit::GetVoicePriority(): Voice %p is not from this rack unit (%s)!'

undefined4 FUN_00645028(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_2 - *(int *)(param_1 + 0x90) >> 4) * -0x55555555;
  uVar2 = 0;
  if (uVar1 < *(uint *)(param_1 + 0x98)) {
    if (param_3 != (undefined1 *)0x0) {
      uVar2 = 0;
      *param_3 = *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x94));
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b080 + -0x7ff4),param_2,*(int *)(param_1 + 0x18) + 8)
    ;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 006450cc  ns=Global  size=0xcc
// sig: undefined FUN_006450cc(void)
// callers(0): 
// callees(2): 00641910 FUN_00641910; 00644f3c FUN_00644f3c
// strings: 00674468: 'brbRackUnit::Validate(): Attempting to access a voice in a rack unit (%s/%s) that is pending utter destruction or has possibly already been destroyed!' | 006743f0: 'brbRackUnit::Validate(): This thread was not the first to operate this rack unit (%s/%s)!\nFirst thread was id: 0x%X'

bool FUN_006450cc(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  
  puVar2 = PTR_PTR_0071b080;
  cVar3 = FUN_00644f3c(param_1);
  if (cVar3 == '\0') {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7ff0),*(int *)(param_1 + 0x18) + 8,param_1 + 0x1c,
                 *(undefined4 *)(param_1 + 0x8c));
  }
  sync(1);
  bVar1 = (*(uint *)(param_1 + 0x80) & 2) != 0;
  if (bVar1) {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fec),*(int *)(param_1 + 0x18) + 8,param_1 + 0x1c);
  }
  return !bVar1 && cVar3 != '\0';
}



//==== 00645198  ns=Global  size=0x1c8
// sig: undefined FUN_00645198(void)
// callers(1): 00648378 FUN_00648378
// callees(4): 00641910 FUN_00641910; 00647dd0 FUN_00647dd0; 00648588 FUN_00648588; 0064eaf8 FUN_0064eaf8
// strings: 00674500: 'brbRackUnit::FreeVoice(): Voice %p is not from this rack unit (%s)!'

undefined4 FUN_00645198(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  
  puVar5 = PTR_PTR_0071b080;
  iVar6 = param_2 - *(int *)(param_1 + 0x90) >> 4;
  uVar7 = iVar6 * -0x55555555;
  if (*(uint *)(param_1 + 0x98) <= uVar7) {
    FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b080 + -0x7fe0),param_2,*(int *)(param_1 + 0x18) + 8)
    ;
    return 0xffffffff;
  }
  iVar6 = *(int *)(param_1 + 0x90) + iVar6 * 0x10;
  puVar1 = *(undefined4 **)(iVar6 + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *puVar1 = 0;
  }
  sync(1);
  if ((**(uint **)(iVar6 + 0x14) & 1) == 0) {
    iVar2 = *(int *)(iVar6 + 0x10);
    pfVar8 = *(float **)(puVar5 + -0x7fe8);
    if (*(float *)(iVar2 + 0xc) < *pfVar8) goto LAB_006452c4;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x10);
    pfVar8 = *(float **)(puVar5 + -0x7fe8);
LAB_006452c4:
    if (*(float *)(iVar2 + 0xc) != **(float **)(puVar5 + -0x7fe4)) {
      FUN_00647dd0(iVar6,1);
      goto LAB_00645280;
    }
  }
  sync(1);
  if ((**(ulonglong **)(iVar6 + 0x10) & 2) != 0) {
    puVar3 = *(ulonglong **)(iVar6 + 0x10);
    uVar4 = storeDoubleWordConditionalIndexed(*puVar3 & 0xfffffffffffffffd,0,ZEXT48(puVar3));
    *puVar3 = uVar4;
  }
LAB_00645280:
  while ((sync(1), (**(uint **)(iVar6 + 0x14) & 1) != 0 ||
         (*(float *)(*(int *)(iVar6 + 0x10) + 0xc) < *pfVar8))) {
    syscall();
  }
  FUN_0064eaf8((uint *)(param_1 + 0x98),uVar7);
  FUN_00648588(iVar6);
  return 0;
}



//==== 00645360  ns=Global  size=0x11c
// sig: undefined FUN_00645360(void)
// callers(1): 00643884 FUN_00643884
// callees(1): 00647d94 FUN_00647d94

void FUN_00645360(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar7;
  uint uStack00000008;
  int local_50 [4];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar4 = *(uint *)(param_2 + 0x90);
  uVar3 = uVar4 + *(uint *)(param_2 + 0x98) * 0x40 + (*(uint *)(param_2 + 0x98) & 0xfffffff) * -0x10
  ;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 0x244);
  if (uVar4 < uVar3) {
    do {
      uVar6 = *(uint *)(param_1 + 0x90);
      uVar5 = uVar6 + *(uint *)(param_1 + 0x98) * 0x40 +
                      (*(uint *)(param_1 + 0x98) & 0xfffffff) * -0x10;
      FUN_00647d94(local_50,uVar4);
      for (; uVar6 < uVar5; uVar6 = uVar6 + 0x30) {
        if (uVar1 != 0) {
          uVar7 = (ulonglong)uVar1;
          piVar2 = (int *)(*(int *)(uVar6 + 0x10) + 0x18);
          do {
            if (*piVar2 == local_50[0]) {
              piVar2[0] = 0;
              piVar2[1] = 0;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
      }
      uVar4 = uVar4 + 0x30;
    } while (uVar4 < uVar3);
  }
  return;
}



//==== 0064547c  ns=Global  size=0x46c
// sig: undefined FUN_0064547c(void)
// callers(4): 0062b660 989snd::snd_SynthLR1Create; 0062c52c FUN_0062c52c; 00642a50 FUN_00642a50; 00643764 FUN_00643764
// callees(6): 00641910 FUN_00641910; 00644ea8 FUN_00644ea8; 00647dd0 FUN_00647dd0; 00648588 FUN_00648588; 0064e9d4 FUN_0064e9d4; 00650644 sys::sys_process_is_stack
// strings: 00674548: 'brbRackUnit::AllocVoice(): Attempting to allocate a voice with priority %d. Clamping to max priority (%d)!' | 006745b8: 'AllocVoice()[%s (%s)]: WARNING: No non-paused or non-sync-start voices available!' | 00674620: 'AllocVoice()[%s (%s)]: WARNING: No non-paused voices available with priority < %d. Lowest available prio = %d (voice %d which %s paused).' | 00674610: 'is NOT'

undefined4 FUN_0064547c(int param_1,byte param_2,int *param_3,uint param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  byte bVar12;
  uint *puVar13;
  longlong lVar14;
  
  puVar3 = PTR_PTR_0071b080;
  bVar12 = param_2;
  if (100 < param_2) {
    bVar12 = 100;
    FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b080 + -0x7fdc),param_2,100);
  }
  if ((param_4 & 1) == 0) {
    sys::sys_process_is_stack(param_3);
  }
  puVar13 = (uint *)(param_1 + 0x98);
  *param_3 = 0;
  uVar6 = FUN_0064e9d4(puVar13);
  lVar14 = (uVar6 & 0x3ffffff) * 0x40 + (uVar6 & 0xfffffff) * -0x10;
  if ((int)uVar6 == -1) {
    uVar7 = 0xffffffff;
    if ((*(uint *)(param_1 + 0x74) & 1) != 0) {
      if (*puVar13 != 0) {
        uVar6 = 0;
        iVar10 = 0;
LAB_006455d8:
        iVar5 = iVar10 + *(int *)(param_1 + 0x90);
        sync(1);
        if ((((**(uint **)(iVar5 + 0x14) & 4) != 0) ||
            (sync(1), (**(ulonglong **)(iVar5 + 0x10) & 8) != 0)) ||
           (sync(1), (**(ulonglong **)(iVar10 + *(int *)(param_1 + 0x90) + 0x10) & 2) != 0))
        goto LAB_00645638;
        if ((int)uVar6 != -1) {
          uVar9 = (ulonglong)*puVar13;
          if (*puVar13 == 0) {
            iVar10 = *(int *)(param_1 + 0x94);
          }
          else {
            uVar8 = 0;
            iVar10 = *(int *)(param_1 + 0x94);
            iVar5 = 0;
            do {
              if (*(byte *)(iVar10 + (int)uVar8) < *(byte *)(iVar10 + (int)uVar6)) {
                iVar10 = iVar5 + *(int *)(param_1 + 0x90);
                sync(1);
                if ((((**(uint **)(iVar10 + 0x14) & 4) == 0) &&
                    (sync(1), (**(ulonglong **)(iVar10 + 0x10) & 8) == 0)) &&
                   (sync(1), (**(ulonglong **)(iVar5 + *(int *)(param_1 + 0x90) + 0x10) & 2) == 0))
                {
                  uVar9 = (ulonglong)*puVar13;
                  iVar10 = *(int *)(param_1 + 0x94);
                  uVar6 = uVar8;
                }
                else {
                  uVar9 = (ulonglong)*puVar13;
                  iVar10 = *(int *)(param_1 + 0x94);
                }
              }
              uVar4 = uVar8 + 1;
              iVar5 = iVar5 + 0x30;
              uVar8 = uVar8 + 1;
            } while ((uVar4 & 0xffffffff) < uVar9);
          }
          bVar1 = *(byte *)((int)uVar6 + iVar10);
          if (bVar12 <= bVar1) {
            iVar10 = ((int)((uVar6 & 0xffffffff) << 6) - (int)((uVar6 & 0xffffffff) << 4)) +
                     *(int *)(param_1 + 0x90);
            sync(1);
            if (((**(uint **)(iVar10 + 0x14) & 4) == 0) &&
               (sync(1), (**(ulonglong **)(iVar10 + 0x10) & 8) == 0)) {
              uVar7 = *(undefined4 *)(puVar3 + -0x7fd4);
            }
            else {
              uVar7 = *(undefined4 *)(puVar3 + -0x7fd0);
            }
            FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fcc),*(int *)(param_1 + 0x18) + 8,
                         param_1 + 0x1c,bVar12,bVar1,(int)uVar6,uVar7);
            return 0xffffffff;
          }
          iVar10 = *(int *)(param_1 + 0x90);
          lVar14 = (uVar6 & 0x3ffffff) * 0x40 + (uVar6 & 0xfffffff) * -0x10;
          iVar5 = (int)lVar14;
          puVar2 = *(undefined4 **)(iVar5 + iVar10 + 0x1c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            iVar10 = *(int *)(param_1 + 0x90);
            *(undefined4 *)(iVar5 + iVar10 + 0x1c) = 0;
          }
          iVar5 = iVar5 + iVar10;
          sync(1);
          if ((**(uint **)(iVar5 + 0x14) & 1) == 0) {
            iVar10 = *(int *)(iVar5 + 0x10);
            if (*(float *)(iVar10 + 0xc) < **(float **)(puVar3 + -0x7fe8)) goto LAB_00645804;
          }
          else {
            iVar10 = *(int *)(iVar5 + 0x10);
LAB_00645804:
            if (*(float *)(iVar10 + 0xc) != **(float **)(puVar3 + -0x7fe4)) {
              FUN_00647dd0(lVar14 + (ulonglong)*(uint *)(param_1 + 0x90) & 0xffffffff,1);
            }
          }
          FUN_00648588(lVar14 + (ulonglong)*(uint *)(param_1 + 0x90) & 0xffffffff);
          goto LAB_0064550c;
        }
      }
LAB_0064564c:
      FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fd8),*(int *)(param_1 + 0x18) + 8,param_1 + 0x1c);
      uVar7 = 0xffffffff;
    }
  }
  else {
LAB_0064550c:
    uVar6 = lVar14 + (ulonglong)*(uint *)(param_1 + 0x90);
    piVar11 = param_3;
    if ((param_4 & 1) != 0) {
      piVar11 = (int *)0x0;
    }
    iVar10 = (int)uVar6;
    *(int **)(iVar10 + 0x1c) = piVar11;
    FUN_00644ea8(param_1,uVar6 & 0xffffffff,bVar12);
    uVar7 = 0;
    *param_3 = iVar10;
  }
  return uVar7;
LAB_00645638:
  uVar6 = uVar6 + 1;
  iVar10 = iVar10 + 0x30;
  if ((ulonglong)*puVar13 <= (uVar6 & 0xffffffff)) goto LAB_0064564c;
  goto LAB_006455d8;
}



//==== 006458e8  ns=Global  size=0xcc
// sig: undefined FUN_006458e8(void)
// callers(2): 00641b58 FUN_00641b58; 006459b4 FUN_006459b4
// callees(1): 0064eae8 FUN_0064eae8

uint FUN_006458e8(int param_1,int param_2,ulonglong param_3,int param_4,undefined8 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0064eae8(param_2);
  iVar1 = (int)(((ulonglong)*(uint *)(param_1 + 0x244) | 1) << 3);
  return (param_2 + 0x7fU & 0xffffff80) +
         param_2 * (param_4 * (int)((param_3 & 0xffffffff) << 2) +
                   (iVar1 + *(int *)(param_1 + 0xa4) + 0x97 & 0xffffff80U) +
                   (iVar1 + *(int *)(param_1 + 0x124) + 0xa7 & 0xffffff80U) + param_6 + 0x30) +
         (iVar2 + 0x127U & 0xffffff80) + 0x7f & 0xffffff80;
}



//==== 006459b4  ns=Global  size=0x310
// sig: undefined FUN_006459b4(void)
// callers(1): 00641b58 FUN_00641b58
// callees(6): 005cd198 FUN_005cd198; 006168e8 FUN_006168e8; 006458e8 FUN_006458e8; 00648d8c FUN_00648d8c; 0064e7fc FUN_0064e7fc; 0064eae8 FUN_0064eae8

int FUN_006459b4(int param_1,int param_2,int param_3,ulonglong param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  int unaff_10000582;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int in_stack_00000074;
  
  puVar3 = PTR_PTR_0071b080;
  FUN_006458e8(param_2,param_3,param_4 & 0xffffffff,param_5,param_6,in_stack_00000074);
  iVar4 = FUN_0064eae8(param_3);
  iVar8 = (*(uint *)(param_2 + 0x244) & 0x1fffffff | 1) * 8;
  uVar1 = iVar8 + *(int *)(param_2 + 0xa4) + 0x97 & 0xffffff80;
  param_5 = param_5 * (int)((param_4 & 0xffffffff) << 2);
  uVar2 = iVar8 + *(int *)(param_2 + 0x124) + 0xa7 & 0xffffff80;
  iVar5 = param_1 + (iVar4 + 0x127U & 0xffffff80);
  iVar10 = unaff_10000582 * uVar2;
  iVar13 = iVar5 + (param_3 + 0x7fU & 0xffffff80);
  iVar4 = unaff_10000582 * in_stack_00000074;
  iVar9 = iVar13 + unaff_10000582 * uVar1;
  iVar14 = unaff_10000582 * param_5;
  iVar11 = iVar9 + iVar10;
  iVar8 = iVar11;
  if (iVar14 == 0) {
    iVar11 = 0;
    iVar14 = iVar10;
    iVar8 = iVar9;
  }
  if (iVar4 == 0) {
    iVar10 = 0;
    iVar4 = iVar14;
  }
  else {
    iVar10 = iVar8 + iVar14;
    iVar8 = iVar10;
  }
  *(int *)(param_1 + 0x18) = param_2;
  if (unaff_10000582 != 0) {
    iVar12 = 0;
    iVar14 = iVar8 + iVar4;
    do {
      iVar6 = FUN_00648d8c(iVar14,param_1,iVar13,iVar9,param_4 & 0xffffffff,iVar11,iVar10,
                           in_stack_00000074);
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + uVar1;
      iVar9 = iVar9 + uVar2;
      iVar10 = iVar10 + in_stack_00000074;
      iVar11 = iVar11 + param_5;
      iVar14 = iVar14 + 0x30;
      if (iVar6 < 0) {
        return iVar6;
      }
    } while (unaff_10000582 != iVar12);
  }
  uVar7 = *(undefined4 *)(param_2 + 0x220);
  *(int *)(param_1 + 0x94) = iVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  uVar7 = FUN_006168e8(param_8,0x811c9dc5);
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar7 = *(undefined4 *)(puVar3 + -0x7fc8);
  *(int *)(param_1 + 0x90) = iVar8 + iVar4;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_6;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x7c) = in_stack_00000074;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_005cd198(param_1 + 0x1c,0x20,uVar7,param_8);
  *(undefined8 *)(param_1 + 0x88) = 0xffffffff;
  iVar8 = FUN_0064e7fc(param_1 + 0x98,param_3);
  return iVar8;
}



//==== 00645cc4  ns=Global  size=0x3c
// sig: undefined FUN_00645cc4(void)
// callers(1): 006420a0 FUN_006420a0
// callees(0): 

void FUN_00645cc4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar4 = 8;
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x20 + 0x20);
  do {
    puVar1 = (undefined4 *)(iVar3 + param_3);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
    lVar4 = lVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (lVar4 != 0);
  return;
}



//==== 00645d00  ns=Global  size=0x11c
// sig: undefined FUN_00645d00(void)
// callers(1): 00646638 FUN_00646638
// callees(0): 
// strings: 00645d8c: '}`H0|\n`8,\n' (raw)

void FUN_00645d00(int param_1,uint param_2)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar8;
  longlong lVar10;
  
  puVar1 = PTR_PTR_0071b084;
  lVar10 = 8;
  piVar2 = (int *)(param_1 + param_2 * 0x20 + 0x820);
  cVar4 = '\0';
  piVar5 = piVar2 + 4;
  do {
    *(char *)(piVar5 + 2) = cVar4;
    *(char *)piVar5 = cVar4;
    cVar4 = cVar4 + '\x01';
    lVar10 = lVar10 + -1;
    piVar5 = (int *)((int)piVar5 + 1);
  } while (lVar10 != 0);
  uVar9 = param_2 - 0xd;
  uVar7 = 0;
  uVar6 = (1 << (uVar9 & 0x3f)) - 1;
  if (param_2 < 0xe) {
    uVar8 = (ulonglong)param_2 + 1;
    uVar9 = (uint)uVar8;
    uVar6 = 0;
    if (6 < param_2) {
      uVar8 = (ulonglong)param_2 - 6;
      uVar9 = (uint)uVar8;
      uVar6 = 0x80;
      *(undefined1 *)((int)piVar2 + param_2 + 10) = 7;
      *(char *)((int)piVar2 + 0x1f) = (char)uVar8;
    }
    uVar7 = (uint)(6 < param_2);
    if ((uVar8 & 0xffffffff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00645dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)((int)(uVar8 << 2) + *(int *)(puVar1 + -0x8000)) +
                *(int *)(puVar1 + -0x8000)))();
      return;
    }
    uVar3 = 0;
    lVar10 = 8;
    do {
      if ((1 << (uVar3 & 0x3f) & uVar6) != 0) {
        uVar6 = uVar6 | 1 << (0x1f - uVar3 & 0x3f);
      }
      uVar3 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  piVar2[1] = uVar9;
  piVar2[3] = param_2;
  *piVar2 = uVar7 + uVar9;
  piVar2[2] = uVar6;
  return;
}



//==== 00645fe0  ns=Global  size=0x84
// sig: undefined FUN_00645fe0(void)
// callers(1): 00646064 FUN_00646064
// callees(0): 

void FUN_00645fe0(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = param_4 * 4;
  iVar3 = param_3 * 4;
  if (param_4 != 0xffffffff) {
    fVar4 = *(float *)(param_2 + iVar3) - *(float *)(param_2 + iVar2);
    if (param_3 < param_4) {
      fVar4 = fVar4 + *(float *)(PTR_PTR_0071b084 + -0x7ffc);
    }
    fVar1 = *(float *)(PTR_PTR_0071b084 + -0x7ff4);
    *(float *)(param_2 + iVar3 + 0x40) = fVar4;
    *(float *)(param_2 + iVar2 + 0x20) = fVar4;
    *(float *)(param_2 + iVar3 + 0x80) = fVar1 / fVar4;
    *(float *)(param_2 + iVar2 + 0x60) = fVar1 / fVar4;
  }
  return;
}



//==== 00646064  ns=Global  size=0x134
// sig: undefined FUN_00646064(void)
// callers(1): 006464dc FUN_006464dc
// callees(1): 00645fe0 FUN_00645fe0

/* WARNING: Removing unreachable block (ram,0x0064618c) */
/* WARNING: Removing unreachable block (ram,0x006461ac) */

void FUN_00646064(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0x1ffffff) * 0x80;
  lVar1 = (param_2 & 0x7ffffff) * 0x20 + lVar2 + 0x460;
  if (*(int *)((int)param_1 + 4) != (int)param_1 + 0xa0) {
    lVar1 = (param_2 & 0x7ffffff) * 0x20 + lVar2 + 0xa0;
  }
  if (5 < (param_2 & 0xffffffff)) {
    for (lVar2 = 0; lVar2 != 6; lVar2 = lVar2 + 1) {
    }
    FUN_00645fe0(param_1 & 0xffffffff,param_1 + lVar1 & 0xffffffff,0xffffffff,0xffffffff);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006460f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)((int)(param_2 << 2) + *(int *)(PTR_PTR_0071b084 + -0x7fec)) +
            *(int *)(PTR_PTR_0071b084 + -0x7fec)))();
  return;
}



//==== 006464b0  ns=Global  size=0x2c
// sig: undefined FUN_006464b0(void)
// callers(2): 006427e8 FUN_006427e8; 00646638 FUN_00646638
// callees(1): 005d0140 libc::memset

void FUN_006464b0(undefined8 param_1)

{
  libc::memset(param_1,0,0xae0);
  return;
}



//==== 006464dc  ns=Global  size=0x15c
// sig: undefined FUN_006464dc(void)
// callers(2): 006420e4 FUN_006420e4; 00646638 FUN_00646638
// callees(2): 00641910 FUN_00641910; 00646064 FUN_00646064
// strings: 006746b8: 'brbSpeakers::SetSpeakerMode() Invalid speaker count: %d.'

undefined4 FUN_006464dc(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (**(uint **)(PTR_PTR_0071b084 + -0x7fa0) < param_2) {
    return 0xffffffff;
  }
  if (param_2 == 4) {
    *param_1 = 3;
  }
  else if (param_2 < 5) {
    if (param_2 != 2) {
LAB_0064653c:
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b084 + -0x7f9c),param_2);
      return 0xffffffff;
    }
    *param_1 = 1;
  }
  else if (param_2 == 6) {
    *param_1 = 0xb;
  }
  else {
    if (param_2 != 8) goto LAB_0064653c;
    *param_1 = 0xd;
  }
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xffffffff;
    uVar2 = uVar2 + 1;
    FUN_00646064(param_1,uVar1,param_3);
  } while (uVar2 != 6);
  if ((undefined4 *)param_1[1] == param_1 + 0x28) {
    param_1[1] = param_1 + 0x118;
    return 0;
  }
  param_1[1] = param_1 + 0x28;
  return 0;
}



//==== 00646638  ns=Global  size=0x100
// sig: undefined FUN_00646638(void)
// callers(1): 00642a50 FUN_00642a50
// callees(3): 00645d00 FUN_00645d00; 006464b0 FUN_006464b0; 006464dc FUN_006464dc
// strings: 006466c0: 'UI(48' (raw)

undefined8 FUN_00646638(int param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b084;
  FUN_006464b0(param_1);
  puVar4 = *(undefined4 **)(puVar2 + -0x7fa0);
  *(int *)(param_1 + 0x10) = param_1;
  uVar5 = 0;
  *puVar4 = param_2;
  FUN_006464dc(param_1,param_2,0);
  do {
    uVar1 = uVar5 & 0xffffffff;
    uVar5 = uVar5 + 1;
    FUN_00645d00(param_1,uVar1);
  } while (uVar5 != 0x16);
  iVar3 = 0;
  do {
    lVar6 = 8;
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x20 + 0x20);
    do {
      *puVar4 = 0x3f800000;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = 0xbeefbeef;
  return 0;
}



//==== 00646738  ns=Global  size=0x20
// sig: undefined FUN_00646738(void)
// callers(4): 00641ec0 FUN_00641ec0; 006468bc FUN_006468bc; 00647020 FUN_00647020; 00647594 FUN_00647594
// callees(0): 

undefined8 FUN_00646738(int param_1)

{
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return 0;
}



//==== 00646758  ns=Global  size=0x100
// sig: undefined FUN_00646758(void)
// callers(2): 006468bc FUN_006468bc; 00647020 FUN_00647020
// callees(1): 0064e58c FUN_0064e58c

int FUN_00646758(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar3 = 0;
    iVar4 = 0;
    do {
      iVar1 = iVar4 + *(int *)(param_1 + 0xa8);
      while( true ) {
        iVar2 = 1000;
        if ((*(int *)(iVar1 + 0x34) != 0) && (*(int *)(iVar1 + 0x28) == 0)) break;
        syscall();
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x38;
    } while (uVar3 < *(uint *)(param_1 + 0x54));
  }
  piVar5 = (int *)(param_1 + 0x68);
  iVar4 = 0;
  do {
    while( true ) {
      iVar1 = iVar4 + 1;
      if (*piVar5 != -1) break;
      piVar5 = piVar5 + 2;
      iVar4 = iVar1;
      if (iVar1 == 8) {
        return iVar2;
      }
    }
    iVar2 = FUN_0064e58c(iVar4 * 8 + param_1 + 0x68);
    *piVar5 = -1;
    piVar5 = piVar5 + 2;
    iVar4 = iVar1;
  } while (iVar1 != 8);
  return iVar2;
}



//==== 00646858  ns=Global  size=0x64
// sig: undefined FUN_00646858(void)
// callers(1): 00642060 FUN_00642060
// callees(1): 005cc8d8 libc::strcpy

char * FUN_00646858(char *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b088;
  if (param_2 != (char *)0x0) {
    param_1 = libc::strcpy(*(char **)(PTR_PTR_0071b088 + -0x8000),param_2);
  }
  if (param_3 != (char *)0x0) {
    param_1 = libc::strcpy(*(char **)(puVar1 + -0x7ffc),param_3);
  }
  return param_1;
}



//==== 006468bc  ns=Global  size=0x200
// sig: undefined FUN_006468bc(void)
// callers(3): 006427e8 FUN_006427e8; 00643884 FUN_00643884; 00646abc FUN_00646abc
// callees(6): 00641910 FUN_00641910; 00646738 FUN_00646738; 00646758 FUN_00646758; 006487c0 FUN_006487c0; 0064e6e8 FUN_0064e6e8; 0800008d syscall::syscall_sys_timer_usleep
// strings: 006746f8: 'brbCapture::Shutdown(): waiting for recording to finish...'

undefined8 FUN_006468bc(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  undefined *puVar4;
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
  undefined1 local_50 [4];
  undefined1 local_4c [12];
  
  puVar4 = PTR_PTR_0071b088;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1[0x17] == 0) {
    pcVar3 = *(char **)(PTR_PTR_0071b088 + -0x7ff4);
    cVar2 = *pcVar3;
  }
  else {
    FUN_00646738();
    iVar5 = 0;
    FUN_00641910(2,*(undefined4 *)(puVar4 + -0x7ff8));
    do {
      FUN_006487c0(param_1[0x17],local_50,local_4c);
      if ((uRam0000002c & 1) == 0) break;
      syscall::syscall_sys_timer_usleep(10000);
      bVar1 = iVar5 != 1000;
      iVar5 = iVar5 + 10;
    } while (bVar1);
    FUN_00646758(param_1);
    pcVar3 = *(char **)(puVar4 + -0x7ff4);
    cVar2 = *pcVar3;
  }
  if (cVar2 != '\0') {
    FUN_0064e6e8(pcVar3);
    *pcVar3 = '\0';
  }
  if (param_1[2] != 0) {
    (*(code *)**(undefined4 **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[2],0xfff0147,0,0);
    param_1[2] = 0;
  }
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x12] = 0;
  return 0;
}



//==== 00646abc  ns=Global  size=0x564
// sig: undefined FUN_00646abc(void)
// callers(1): 00642a50 FUN_00642a50
// callees(3): 00641910 FUN_00641910; 006468bc FUN_006468bc; 0064e720 FUN_0064e720
// strings: 00646bac: '}@X09k' (raw) | 00674798: 'SCEA_SHARED' | 00674788: '/app_home' | 006747a8: 'brb_output_capture' | 00674738: 'brbCapture::Initialize(): FAILED TO ALLOCATE CAPTURE MEM BUFFER (%d kB)!'

/* WARNING: Removing unreachable block (ram,0x00646f6c) */

undefined4
FUN_00646abc(double param_1,double param_2,undefined4 *param_3,int *param_4,ulonglong param_5,
            int param_6,int param_7,int param_8,ulonglong param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  bool bVar23;
  undefined *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  uint uVar29;
  ulonglong uVar28;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  int in_stack_0000007c;
  undefined4 *in_stack_00000084;
  
  puVar24 = PTR_PTR_0071b088;
  uVar31 = (uint)param_9;
  iVar30 = (int)param_5;
  if (param_3[2] == 0) {
    if (in_stack_0000007c == 0) {
      FUN_006468bc(param_3);
      return 0;
    }
    if (iVar30 != 0) goto LAB_00646b68;
LAB_00646f50:
    uVar31 = (uint)(((param_9 << 0x20) >> 0x23) << 3) | (uint)((param_9 & 3) << 0x1d) >> 0x1d;
    param_3[0x15] = 0;
    bVar23 = true;
LAB_00646b7c:
    if (iVar30 == 0xff) {
      iVar25 = *param_4 << 5;
    }
    else {
      iVar25 = (int)((param_5 & 0xffffffff) << 5);
    }
    iVar32 = param_3[0x15];
    uVar29 = 0;
    lVar35 = 8;
    uVar16 = *(uint *)((int)param_4 + iVar25 + 0x828);
    do {
      uVar22 = uVar29 & 0x3f;
      uVar29 = uVar29 + 1;
      if ((1 << uVar22 & uVar16) != 0) {
        iVar32 = iVar32 + 1;
        param_3[0x15] = iVar32;
      }
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    uVar28 = (longlong)iVar32 * (longlong)(param_6 + -1);
    param_3[0x16] = 0;
    param_3[0x15] = (int)uVar28;
    if (iVar30 != 0xff) {
LAB_00646f24:
      uVar16 = *(uint *)((int)param_4 + (int)((param_5 & 0xffffffff) << 5) + 0x820);
      goto joined_r0x00646c00;
    }
  }
  else {
    FUN_006468bc(param_3);
    if (in_stack_0000007c == 0) {
      return 0;
    }
    if (iVar30 == 0) goto LAB_00646f50;
LAB_00646b68:
    bVar23 = (param_9 & 4) == 0;
    param_3[0x15] = 0;
    if (bVar23) goto LAB_00646b7c;
    param_3[0x15] = 1;
    param_3[0x16] = 0;
    uVar28 = (ulonglong)(param_6 + -1);
    param_3[0x15] = param_6 + -1;
    if (iVar30 != 0xff) goto LAB_00646f24;
  }
  uVar16 = param_4[*param_4 * 8 + 0x208];
joined_r0x00646c00:
  uVar29 = uVar16;
  if ((2 < uVar16) && (!bVar23)) {
    uVar29 = uVar16 + 3 & 0xfffffffc;
  }
  iVar32 = (((uVar31 & 2) - 1 >> 0x1e & 2) + 2) * param_8 * param_7;
  iVar33 = uVar29 * iVar32;
  uVar34 = (longlong)param_6 * (longlong)iVar33;
  iVar25 = (*(code *)**(undefined4 **)*in_stack_00000084)
                     (in_stack_00000084,
                      uVar34 + (uVar28 & 0x3ffffff) * 0x40 + (uVar28 & 0x1fffffff) * -8 & 0xfffffffe
                      ,0xfff0147,0,0);
  if (iVar25 == 0) {
    FUN_00641910(1,*(undefined4 *)(puVar24 + -0x7ff0),uVar34 >> 10 & 0x3fffff);
    uVar26 = 0xffffffff;
  }
  else {
    *param_3 = in_stack_00000084;
    param_3[1] = param_4;
    param_3[2] = iVar25;
    param_3[3] = iVar25 + (int)uVar34;
    param_3[4] = iVar32;
    param_3[5] = iVar33;
    param_3[6] = (int)uVar34;
    param_3[8] = 0;
    param_3[9] = iVar30;
    param_3[10] = param_6;
    param_3[7] = 0;
    uVar26 = 0xffffffff;
    if (in_stack_0000007c != -1) {
      uVar26 = (undefined4)
               (((longlong)in_stack_0000007c * 48000 & 0xffffffffU) /
               ((longlong)param_8 * (longlong)param_7 & 0xffffffffU));
    }
    iVar30 = param_3[3];
    param_3[0x12] = (float)param_1;
    param_3[0x13] = (float)param_2;
    param_3[0xb] = uVar26;
    param_3[0xd] = uVar16;
    param_3[0xe] = uVar29;
    param_3[0xf] = param_7;
    param_3[0x10] = param_8;
    param_3[0x11] = uVar31;
    param_3[0x17] = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    param_3[0xc] = 0;
    *(undefined1 *)(param_3 + 0x14) = 0;
    *(undefined1 *)((int)param_3 + 0x51) = 0;
    param_3[0x2a] = iVar30;
    if (param_3[0x15] != 0) {
      uVar31 = 0;
      iVar25 = 0;
      do {
        puVar27 = (undefined4 *)(iVar25 + iVar30);
        uVar31 = uVar31 + 1;
        iVar25 = iVar25 + 0x38;
        puVar27[0xd] = 1;
        *puVar27 = 0xffffffff;
        puVar27[10] = 0;
        puVar27[0xb] = 0xffffffff;
        puVar27[0xc] = 0;
        uVar16 = param_3[0x15];
        *(undefined8 *)(puVar27 + 2) = 0;
        puVar27[4] = 0;
        *(undefined8 *)(puVar27 + 6) = 0;
      } while (uVar31 < uVar16);
    }
    lVar35 = 8;
    iVar30 = 0;
    do {
      *(undefined4 *)((int)param_3 + iVar30 + 0x68) = 0xffffffff;
      lVar35 = lVar35 + -1;
      iVar30 = iVar30 + 8;
    } while (lVar35 != 0);
    puVar17 = *(undefined1 **)(puVar24 + -0x7fe8);
    puVar18 = *(undefined1 **)(puVar24 + -0x7fec);
    puVar19 = *(undefined1 **)(puVar24 + -0x7ff4);
    puVar20 = *(undefined1 **)(puVar24 + -0x8000);
    uVar1 = *puVar17;
    uVar2 = puVar18[9];
    uVar3 = puVar18[1];
    uVar4 = puVar18[2];
    uVar5 = puVar18[3];
    uVar6 = puVar18[4];
    uVar7 = puVar18[5];
    uVar8 = puVar18[6];
    uVar9 = puVar18[7];
    uVar10 = puVar18[8];
    uVar11 = puVar17[1];
    uVar12 = puVar17[2];
    uVar13 = puVar17[3];
    uVar14 = puVar17[4];
    *puVar19 = *puVar18;
    puVar19[1] = uVar3;
    puVar19[2] = uVar4;
    puVar19[3] = uVar5;
    puVar19[4] = uVar6;
    puVar19[5] = uVar7;
    puVar19[6] = uVar8;
    puVar19[7] = uVar9;
    puVar19[8] = uVar10;
    puVar20[1] = uVar11;
    puVar20[2] = uVar12;
    puVar20[3] = uVar13;
    puVar19[9] = uVar2;
    *puVar20 = uVar1;
    uVar1 = puVar17[5];
    uVar2 = puVar17[6];
    uVar3 = puVar17[7];
    puVar20[4] = uVar14;
    puVar18 = *(undefined1 **)(puVar24 + -0x7fe4);
    puVar21 = *(undefined1 **)(puVar24 + -0x7ffc);
    uVar4 = puVar17[8];
    uVar5 = puVar17[9];
    uVar6 = puVar17[10];
    uVar7 = *puVar18;
    uVar8 = puVar18[1];
    uVar9 = puVar18[2];
    uVar10 = puVar18[3];
    uVar11 = puVar18[4];
    uVar12 = puVar18[5];
    uVar13 = puVar18[6];
    uVar14 = puVar18[7];
    uVar15 = puVar18[8];
    puVar20[0xb] = puVar17[0xb];
    puVar20[5] = uVar1;
    puVar20[6] = uVar2;
    puVar20[7] = uVar3;
    puVar20[8] = uVar4;
    puVar20[9] = uVar5;
    puVar20[10] = uVar6;
    *puVar21 = uVar7;
    puVar21[1] = uVar8;
    puVar21[2] = uVar9;
    puVar21[3] = uVar10;
    puVar21[4] = uVar11;
    puVar21[5] = uVar12;
    puVar21[6] = uVar13;
    puVar21[7] = uVar14;
    uVar1 = puVar18[9];
    uVar2 = puVar18[10];
    uVar3 = puVar18[0xb];
    puVar21[8] = uVar15;
    uVar4 = puVar18[0xc];
    uVar5 = puVar18[0xd];
    uVar6 = puVar18[0xe];
    uVar7 = puVar18[0xf];
    uVar8 = puVar18[0x10];
    uVar9 = puVar18[0x11];
    puVar21[0x12] = puVar18[0x12];
    puVar21[9] = uVar1;
    puVar21[10] = uVar2;
    puVar21[0xb] = uVar3;
    puVar21[0xc] = uVar4;
    puVar21[0xd] = uVar5;
    puVar21[0xe] = uVar6;
    puVar21[0xf] = uVar7;
    puVar21[0x10] = uVar8;
    puVar21[0x11] = uVar9;
    uVar26 = FUN_0064e720(puVar19);
  }
  return uVar26;
}



//==== 00647020  ns=Global  size=0x49c
// sig: undefined FUN_00647020(void)
// callers(1): 00641134 FUN_00641134
// callees(7): 00641910 FUN_00641910; 00646738 FUN_00646738; 00646758 FUN_00646758; 006486f8 FUN_006486f8; 00648730 FUN_00648730; 006487c0 FUN_006487c0; 0064e5cc FUN_0064e5cc
// strings: 00674800: 'brbCapture::Process(): Blocking on unfinished file transfer' | 006747c0: 'brbCapture::Process(): failed to start async file write!'

undefined4 FUN_00647020(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  
  puVar3 = PTR_PTR_0071b088;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_006487c0(*(int *)(param_1 + 0x5c),local_74,local_78);
    if (*(char *)(param_1 + 0x50) == '\0') {
      if ((uRam0000002c & 1) == 0) {
        FUN_00646758(param_1);
        *(undefined4 *)(param_1 + 0x5c) = 0;
        return 0;
      }
      FUN_00648730(*(undefined4 *)(param_1 + 0x5c),local_70,local_64);
      uRam0000000c = uRam0000000c & 0xfffffffe;
      FUN_006486f8(*(undefined4 *)(param_1 + 0x5c),local_6c);
    }
    iVar2 = iRam00000018;
    if (iRam00000008 != 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
      return 0;
    }
    if (*(char *)(param_1 + 0x51) == '\0') {
      bVar1 = (*(uint *)(param_1 + 0x44) & 4) == 0;
      if (bVar1) {
        uVar6 = *(uint *)(param_1 + 0x10);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x14);
      }
      if (iRam0000003c != 0) {
        if (bVar1) {
          iVar4 = *(int *)(param_1 + 0x24);
          if (iVar4 == 0xff) {
            iVar4 = **(int **)(param_1 + 4);
          }
          uVar8 = (*(int **)(param_1 + 4))[iVar4 * 8 + 0x20a];
        }
        else {
          uVar8 = 1;
        }
        iVar4 = 0;
        uVar7 = 0;
        iVar9 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x14);
        do {
          if ((1 << (uVar7 & 0x3f) & uVar8) != 0) {
            iVar4 = *(uint *)(param_1 + 0x58) * 0x40 + (*(uint *)(param_1 + 0x58) & 0x1fffffff) * -8
                    + *(int *)(param_1 + 0xa8);
            if (((*(uint *)(param_1 + 0x44) & 0x40) == 0) &&
               ((*(int *)(iVar4 + 0x34) == 0 || (*(int *)(iVar4 + 0x28) != 0)))) {
              FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fdc));
            }
            while ((*(int *)(iVar4 + 0x34) == 0 || (*(int *)(iVar4 + 0x28) != 0))) {
              syscall();
            }
            iVar4 = FUN_0064e5cc(uVar7 * 8 + param_1 + 0x68,iVar4,iVar9,uVar6,
                                 *(undefined8 *)(param_1 + 0x60));
            if (iVar4 < 0) goto LAB_00647484;
            uVar5 = *(int *)(param_1 + 0x58) + 1;
            *(uint *)(param_1 + 0x58) = uVar5;
            if (*(uint *)(param_1 + 0x54) <= uVar5) {
              uVar5 = 0;
            }
            iVar9 = iVar9 + iVar2;
            *(uint *)(param_1 + 0x58) = uVar5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 8);
        if (iVar4 < 0) {
LAB_00647484:
          FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fe0));
          FUN_00646738(param_1);
          return 0xffffffff;
        }
        uVar8 = *(int *)(param_1 + 0x20) + 1;
        *(uint *)(param_1 + 0x20) = uVar8;
        if (*(uint *)(param_1 + 0x28) <= uVar8) {
          uVar8 = 0;
        }
        uVar7 = *(int *)(param_1 + 0x30) + 1;
        *(uint *)(param_1 + 0x20) = uVar8;
        *(uint *)(param_1 + 0x30) = uVar7;
        if (*(uint *)(param_1 + 0x2c) <= uVar7) {
          uVar7 = 0;
        }
        *(uint *)(param_1 + 0x30) = uVar7;
        *(ulonglong *)(param_1 + 0x60) =
             (ulonglong)uVar6 + *(longlong *)(param_1 + 0x60) &
             (longlong)((int)(((int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f ^ uVar7)) >> 0x1f);
      }
      FUN_00648730(*(undefined4 *)(param_1 + 0x5c),local_68,local_7c);
      iRam00000004 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x14);
      uRam00000000 = 0;
      iRam00000008 = *(undefined4 *)(param_1 + 0x14);
      FUN_006486f8(*(undefined4 *)(param_1 + 0x5c),local_80);
      uVar6 = *(int *)(param_1 + 0x1c) + 1;
      *(uint *)(param_1 + 0x1c) = uVar6;
      if (*(uint *)(param_1 + 0x28) <= uVar6) {
        uVar6 = 0;
      }
      *(undefined1 *)(param_1 + 0x51) = 1;
      *(uint *)(param_1 + 0x1c) = uVar6;
      return 0;
    }
  }
  return 0;
}



//==== 006474bc  ns=Global  size=0xd8
// sig: undefined FUN_006474bc(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

undefined8 FUN_006474bc(double param_1,double param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [16];
  
  *(float *)(param_3 + 0x48) = (float)param_1;
  *(float *)(param_3 + 0x4c) = (float)param_2;
  if (param_4 == 0) {
    uVar1 = ((ulonglong)*(uint *)(param_3 + 0x44) & 0x1f) << 0x1a |
            (ulonglong)(*(uint *)(param_3 + 0x44) >> 6);
    *(uint *)(param_3 + 0x44) = (uint)(uVar1 << 6) | (uint)uVar1 >> 0x1a;
  }
  else {
    *(uint *)(param_3 + 0x44) = *(uint *)(param_3 + 0x44) | 0x20;
  }
  if (*(int *)(param_3 + 0x5c) != 0) {
    FUN_00648730(*(int *)(param_3 + 0x5c),local_2c,local_28);
    uRam00000000 = *(undefined4 *)(param_3 + 0x24);
    uRam00000004 = *(undefined4 *)(param_3 + 0x48);
    uRam0000000c = *(uint *)(param_3 + 0x44) | 1;
    uRam00000008 = *(undefined4 *)(param_3 + 0x4c);
    FUN_006486f8(*(undefined4 *)(param_3 + 0x5c),local_30);
  }
  return 0;
}



//==== 00647594  ns=Global  size=0x600
// sig: undefined FUN_00647594(void)
// callers(1): 00641f84 FUN_00641f84
// callees(10): 005c8510 libc::strlen; 005cc44c FUN_005cc44c; 005cc784 FUN_005cc784; 005cc8d8 libc::strcpy; 00641910 FUN_00641910; 00646738 FUN_00646738; 006486f8 FUN_006486f8; 00648730 FUN_00648730; 006487c0 FUN_006487c0; 0064e670 FUN_0064e670
// strings: 00674878: 'brbCapture::Start(): FYI, recording hot swapped' | 00674798: 'SCEA_SHARED' | 006748a8: '.raw' (raw) | 006748b0: 'creating empty file %s...' | 006748d0: "brbCapture::Start(): couldn't create all files needed for recording!" | 006747a8: 'brb_output_capture' | 00674840: 'brbCapture::Start(): capture sub-system uninitialized!' | 00674918: 'brbCapture::Start(): no capture setup params interface found on plugin %s!' | 00674968: 'brbCapture::Start(): no capture buffer params interface found on plugin %s!' | 006749b8: 'brbCapture::Start(): no capture module found on plugin %s!'

/* WARNING: Removing unreachable block (ram,0x00647980) */
/* WARNING: Removing unreachable block (ram,0x00647b84) */
/* WARNING: Removing unreachable block (ram,0x00647918) */
/* WARNING: Removing unreachable block (ram,0x00647b74) */
/* WARNING: Removing unreachable block (ram,0x006479dc) */

undefined4 FUN_00647594(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char *__dest;
  char *pcVar22;
  int iVar23;
  char *pcVar24;
  undefined1 *puVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined *puVar28;
  int iVar29;
  size_t sVar30;
  undefined1 *puVar31;
  undefined4 *puVar32;
  uint uVar33;
  undefined1 local_ac [4];
  undefined1 local_a8 [24];
  
  puVar28 = PTR_PTR_0071b088;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b088 + -0x7fd4));
  }
  else {
    if (*(int *)(param_1 + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x5c) == param_2) {
        return 0;
      }
      FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b088 + -0x7fd0));
      FUN_00646738(param_1);
    }
    __dest = *(char **)(puVar28 + -0x8000);
    iVar29 = FUN_005cc784(__dest,*(undefined4 *)(puVar28 + -0x7fe8));
    if (iVar29 == 0) {
      libc::strcpy(__dest,*(char **)(puVar28 + -0x7ff4));
    }
    if (*__dest == '\0') {
      libc::strcpy(__dest,*(char **)(puVar28 + -0x7ff4));
    }
    pcVar22 = *(char **)(puVar28 + -0x7ffc);
    if (*pcVar22 == '\0') {
      pcVar24 = *(char **)(puVar28 + -0x7fe4);
      cVar4 = pcVar24[0x12];
      cVar5 = pcVar24[0xe];
      cVar6 = pcVar24[0xf];
      cVar7 = pcVar24[0x11];
      cVar8 = pcVar24[0x10];
      cVar9 = pcVar24[1];
      cVar10 = pcVar24[2];
      cVar11 = pcVar24[3];
      cVar12 = pcVar24[4];
      cVar13 = pcVar24[5];
      cVar14 = pcVar24[6];
      cVar15 = pcVar24[7];
      cVar16 = pcVar24[8];
      cVar17 = pcVar24[9];
      cVar18 = pcVar24[10];
      cVar19 = pcVar24[0xb];
      cVar20 = pcVar24[0xc];
      cVar21 = pcVar24[0xd];
      *pcVar22 = *pcVar24;
      pcVar22[1] = cVar9;
      pcVar22[2] = cVar10;
      pcVar22[3] = cVar11;
      pcVar22[4] = cVar12;
      pcVar22[5] = cVar13;
      pcVar22[6] = cVar14;
      pcVar22[7] = cVar15;
      pcVar22[8] = cVar16;
      pcVar22[9] = cVar17;
      pcVar22[10] = cVar18;
      pcVar22[0xb] = cVar19;
      pcVar22[0xc] = cVar20;
      pcVar22[0xd] = cVar21;
      pcVar22[0xe] = cVar5;
      pcVar22[0xf] = cVar6;
      pcVar22[0x10] = cVar8;
      pcVar22[0x11] = cVar7;
      pcVar22[0x12] = cVar4;
    }
    if ((*(uint *)(param_1 + 0x44) & 4) == 0) {
      iVar23 = *(int *)(param_1 + 0x24);
      if (iVar23 == 0xff) {
        iVar23 = **(int **)(param_1 + 4);
      }
      puVar32 = *(undefined4 **)(puVar28 + -0x7fd8);
      iVar29 = 0;
      pcVar24 = *(char **)(puVar28 + -0x7fcc);
      uVar33 = 0;
      puVar25 = *(undefined1 **)(puVar28 + -0x7fc8);
      uVar26 = (*(int **)(param_1 + 4))[iVar23 * 8 + 0x20a];
      do {
        if ((1 << (uVar33 & 0x3f) & uVar26) != 0) {
          libc::strcpy(pcVar24,__dest);
          if (*pcVar24 == '\0') {
            iVar29 = *(int *)(puVar28 + -0x7fcc);
          }
          else {
            sVar30 = libc::strlen(pcVar24);
            iVar29 = *(int *)(puVar28 + -0x7fcc);
            ((undefined1 *)(sVar30 + iVar29))[1] = 0;
            *(undefined1 *)(sVar30 + iVar29) = 0x2f;
          }
          FUN_005cc44c(pcVar24,pcVar22);
          FUN_005cc44c(pcVar24,*puVar32);
          sVar30 = libc::strlen(pcVar24);
          uVar1 = *puVar25;
          puVar31 = (undefined1 *)(iVar29 + sVar30);
          uVar2 = puVar25[1];
          uVar3 = puVar25[2];
          uVar27 = *(undefined4 *)(puVar28 + -0x7fc4);
          puVar31[3] = puVar25[3];
          *puVar31 = uVar1;
          puVar31[1] = uVar2;
          puVar31[2] = uVar3;
          puVar31[4] = puVar25[4];
          FUN_00641910(3,uVar27,pcVar24);
          iVar29 = FUN_0064e670(uVar33 * 8 + param_1 + 0x68,pcVar24,0);
          if (iVar29 < 0) goto LAB_006477bc;
        }
        uVar33 = uVar33 + 1;
        puVar32 = puVar32 + 1;
      } while (uVar33 != 8);
    }
    else {
      pcVar24 = *(char **)(puVar28 + -0x7fcc);
      libc::strcpy(pcVar24,__dest);
      if (*pcVar24 == '\0') {
        iVar29 = *(int *)(puVar28 + -0x7fcc);
      }
      else {
        sVar30 = libc::strlen(pcVar24);
        iVar29 = *(int *)(puVar28 + -0x7fcc);
        ((undefined1 *)(sVar30 + iVar29))[1] = 0;
        *(undefined1 *)(sVar30 + iVar29) = 0x2f;
      }
      FUN_005cc44c(pcVar24,pcVar22);
      sVar30 = libc::strlen(pcVar24);
      puVar25 = *(undefined1 **)(puVar28 + -0x7fc8);
      uVar27 = *(undefined4 *)(puVar28 + -0x7fc4);
      puVar31 = (undefined1 *)(iVar29 + sVar30);
      uVar1 = puVar25[1];
      uVar2 = puVar25[2];
      uVar3 = puVar25[3];
      *puVar31 = *puVar25;
      puVar31[1] = uVar1;
      puVar31[2] = uVar2;
      puVar31[3] = uVar3;
      puVar31[4] = puVar25[4];
      FUN_00641910(3,uVar27,pcVar24);
      iVar29 = FUN_0064e670(param_1 + 0x68,pcVar24,0);
    }
    if (iVar29 < 0) {
LAB_006477bc:
      FUN_00641910(1,*(undefined4 *)(puVar28 + -0x7fc0));
    }
    else {
      FUN_00648730(param_2,local_a8,local_ac);
      FUN_00641910(1,*(undefined4 *)(puVar28 + -0x7fbc),
                   *(int *)(*(int *)(param_2 + 0x18) + 0x18) + 8);
    }
  }
  return 0xffffffff;
}



//==== 00647b94  ns=Global  size=0x9c
// sig: undefined FUN_00647b94(void)
// callers(1): 0064db64 FUN_0064db64
// callees(0): 
// strings: 00647be0: '}i[x|' (raw)

ulonglong FUN_00647b94(undefined8 param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = (ulonglong *)param_1;
  uVar4 = *puVar2;
  uVar1 = uVar4 & 0xfc000000;
  if ((uVar4 & 0x20) != 0) {
    uVar1 = uVar1 | (uVar4 >> 7 & 0xfffffffffe000000) << 7 | uVar4 & 0x40;
    if ((uVar4 & 1) == 0) {
      if (param_2 == 0) {
        uVar1 = storeDoubleWordConditionalIndexed(uVar1 | 0x20,0,param_1);
        *puVar2 = uVar1;
        return uVar4;
      }
    }
    else {
      uVar1 = uVar1 | 1;
      uVar3 = uVar4 & 0xfffffffffffffffe;
      if (param_3 == 0) goto LAB_00647be4;
    }
  }
  uVar3 = uVar4;
LAB_00647be4:
  uVar1 = storeDoubleWordConditionalIndexed(uVar1,0,param_1);
  *puVar2 = uVar1;
  return uVar3;
}



//==== 00647c30  ns=Global  size=0x34
// sig: undefined FUN_00647c30(void)
// callers(3): 00647ed0 FUN_00647ed0; 00648730 FUN_00648730; 00648a54 FUN_00648a54
// callees(0): 

void FUN_00647c30(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  do {
    uVar1 = *(ulonglong *)param_1;
  } while ((uVar1 & 0xfc000000) != 0);
  uVar1 = storeDoubleWordConditionalIndexed(uVar1 | (param_2 + 1) * 0x4000000,0,param_1);
  *(ulonglong *)param_1 = uVar1;
  return;
}



//==== 00647c64  ns=Global  size=0x38
// sig: undefined FUN_00647c64(void)
// callers(3): 006485f0 FUN_006485f0; 006486f8 FUN_006486f8; 00648a54 FUN_00648a54
// callees(0): 

void FUN_00647c64(undefined8 param_1,byte *param_2)

{
  ulonglong uVar1;
  
  uVar1 = storeDoubleWordConditionalIndexed
                    ((*(ulonglong *)param_1 | 1L << ((ulonglong)*param_2 + 0x20 & 0x7f)) &
                     0xffffffff03ffffff,0,param_1);
  *(ulonglong *)param_1 = uVar1;
  return;
}



//==== 00647c9c  ns=Global  size=0x2c
// sig: undefined FUN_00647c9c(void)
// callers(1): 00647f34 FUN_00647f34
// callees(0): 

void FUN_00647c9c(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)param_1;
  uVar1 = storeDoubleWordConditionalIndexed
                    (uVar1 & 0xffffffff00000000 | param_2 << 0x20 | uVar1 & 0x3ffffff,0,param_1);
  *(ulonglong *)param_1 = uVar1;
  return;
}



//==== 00647cc8  ns=Global  size=0x8c
// sig: undefined FUN_00647cc8(void)
// callers(2): 00647f34 FUN_00647f34; 00647fa0 FUN_00647fa0
// callees(0): 

void FUN_00647cc8(ulonglong param_1,int param_2,int param_3,int param_4,ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = ~param_5 << 0x20;
  puVar1 = (ulonglong *)param_1;
  if (param_2 != 0) {
    if (param_4 == 0) {
      uVar3 = uVar3 | 1;
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      *(undefined4 *)((int)puVar1 + 0xc) = 0;
    }
    else {
      uVar3 = uVar3 | 2;
    }
  }
  uVar4 = *puVar1;
  uVar2 = uVar4;
  if ((param_2 != 0) && (uVar2 = uVar4 & 0xfffffffffffffff3, param_3 == 0)) {
    uVar2 = uVar4 & 0xffffffffffffffd3;
  }
  uVar3 = storeDoubleWordConditionalIndexed
                    (uVar2 & 0xffffffff03ffffff | uVar3,0,param_1 & 0xffffffff);
  *puVar1 = uVar3;
  return;
}



//==== 00647d54  ns=Global  size=0x34
// sig: undefined FUN_00647d54(void)
// callers(1): 00641134 FUN_00641134
// callees(0): 

void FUN_00647d54(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)param_1;
  *(undefined4 *)((int)puVar2 + 0xc) = 0;
  uVar1 = storeDoubleWordConditionalIndexed(*puVar2 & 0xfffffffffffffffd | 1,0,param_1);
  *puVar2 = uVar1;
  return;
}



//==== 00647d88  ns=Global  size=0x8
// sig: undefined FUN_00647d88(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00647d88(void)

{
  return 0;
}



//==== 00647d90  ns=Global  size=0x4
// sig: undefined FUN_00647d90(void)
// callers(0): 
// callees(0): 

void FUN_00647d90(void)

{
  return;
}



//==== 00647d94  ns=Global  size=0x3c
// sig: undefined FUN_00647d94(void)
// callers(2): 00645360 FUN_00645360; 00648b10 idol::brbVoice_ConnectPort
// callees(0): 

undefined4 * FUN_00647d94(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x18) + 0x18) + 0x248) * 8 + *(int *)(param_2 + 0x10)
  ;
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  param_1[1] = *(undefined4 *)(iVar2 + 0x1c);
  *param_1 = uVar1;
  return param_1;
}



//==== 00647dd0  ns=Global  size=0xa4
// sig: undefined FUN_00647dd0(void)
// callers(8): 00626bb4 FUN_00626bb4; 00629eb0 989snd::snd_SynthKeyOffVoice; 00629f78 989snd::snd_SynthSilenceVoice; 0062a824 FUN_0062a824; 00642184 FUN_00642184; 006448c4 FUN_006448c4; 00645198 FUN_00645198; 0064547c FUN_0064547c
// callees(0): 

/* WARNING: Removing unreachable block (ram,0x00647e34) */

void FUN_00647dd0(int param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  *(undefined4 *)((int)puVar1 + 0xc) = *(undefined4 *)(PTR_PTR_0071b08c + -0x8000);
  uVar3 = *puVar1;
  if ((param_2 & 1) == 0) {
    uVar3 = storeDoubleWordConditionalIndexed(uVar3 | 4,0,ZEXT48(puVar1));
    *puVar1 = uVar3;
  }
  else {
    uVar2 = uVar3 & 0xfc0000c0;
    if ((uVar3 & 0x20) != 0) {
      uVar2 = uVar3 & 0xfffffffffc0000c0;
    }
    uVar3 = storeDoubleWordConditionalIndexed(uVar2 | 0x20,0,ZEXT48(puVar1));
    *puVar1 = uVar3;
  }
  return;
}



//==== 00647e74  ns=Global  size=0x24
// sig: undefined FUN_00647e74(void)
// callers(2): 00629c38 989snd::snd_SynthPauseVoice; 00629ff8 FUN_00629ff8
// callees(0): 

void FUN_00647e74(int param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  uVar2 = storeDoubleWordConditionalIndexed(*puVar1 | 8,0,ZEXT48(puVar1));
  *puVar1 = uVar2;
  return;
}



//==== 00647e98  ns=Global  size=0x38
// sig: undefined FUN_00647e98(void)
// callers(2): 00629bb8 989snd::snd_SynthUnpauseVoice; 00629ff8 FUN_00629ff8
// callees(0): 

void FUN_00647e98(int param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  uVar3 = *puVar1;
  uVar2 = uVar3 | 0x10;
  if ((uVar3 & 8) != 0) {
    uVar2 = uVar3 & 0xfffffffffffffff7;
  }
  uVar2 = storeDoubleWordConditionalIndexed(uVar2,0,ZEXT48(puVar1));
  *puVar1 = uVar2;
  return;
}



//==== 00647ed0  ns=Global  size=0x64
// sig: undefined FUN_00647ed0(void)
// callers(15): 00625bd0 FUN_00625bd0; 00626670 FUN_00626670; 00626884 FUN_00626884; 00626a3c FUN_00626a3c; 00626cb4 989snd::snd_SynthLR1Insert; 00627c40 FUN_00627c40; 00629cb8 FUN_00629cb8; 0062a4c8 989snd::snd_SynthSetSpeakerMode; 0062a9b4 989snd::snd_SynthKeyOnVoice; 0062b660 989snd::snd_SynthLR1Create; 0062c52c FUN_0062c52c; 0062db94 FUN_0062db94; 0062e140 989snd::snd_SynthSetVoiceData; 00643520 FUN_00643520; 00648878 FUN_00648878
// callees(1): 00647c30 FUN_00647c30

undefined8 FUN_00647ed0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 0x18) + 0x244);
  FUN_00647c30(iVar1,0x1f);
  *param_2 = iVar1 + (int)(((ulonglong)uVar2 | 1) << 3) + 0x18;
  return 0;
}



//==== 00647f34  ns=Global  size=0x6c
// sig: undefined FUN_00647f34(void)
// callers(12): 00625bd0 FUN_00625bd0; 00626670 FUN_00626670; 00626884 FUN_00626884; 00626a3c FUN_00626a3c; 00627c40 FUN_00627c40; 00629cb8 FUN_00629cb8; 0062a4c8 989snd::snd_SynthSetSpeakerMode; 0062a9b4 989snd::snd_SynthKeyOnVoice; 0062b660 989snd::snd_SynthLR1Create; 0062db94 FUN_0062db94; 0062e140 989snd::snd_SynthSetVoiceData; 00648878 FUN_00648878
// callees(2): 00647c9c FUN_00647c9c; 00647cc8 FUN_00647cc8

undefined8 FUN_00647f34(int param_1,int param_2)

{
  if (param_2 != -1) {
    FUN_00647c9c(*(undefined4 *)(param_1 + 0x10),param_2);
    return 0;
  }
  FUN_00647cc8(*(undefined4 *)(param_1 + 0x10),0,*(uint *)(*(int *)(param_1 + 0x18) + 0x74) >> 1 & 1
               ,0,0);
  return 0;
}



//==== 00647fa0  ns=Global  size=0x40
// sig: undefined FUN_00647fa0(void)
// callers(6): 00626cb4 989snd::snd_SynthLR1Insert; 0062a9b4 989snd::snd_SynthKeyOnVoice; 0062c52c FUN_0062c52c; 0062e140 989snd::snd_SynthSetVoiceData; 00643520 FUN_00643520; 00648878 FUN_00648878
// callees(1): 00647cc8 FUN_00647cc8

undefined8 FUN_00647fa0(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00647cc8(*(undefined4 *)(param_1 + 0x10),1,*(uint *)(*(int *)(param_1 + 0x18) + 0x74) >> 1 & 1
               ,param_2,param_3);
  return 0;
}



//==== 00647fe0  ns=Global  size=0x364
// sig: undefined FUN_00647fe0(void)
// callers(7): 006485f0 FUN_006485f0; 00648730 FUN_00648730; 006487c0 FUN_006487c0; 00648820 FUN_00648820; 00648944 FUN_00648944; 006489cc FUN_006489cc; 00648a54 FUN_00648a54
// callees(1): 00641910 FUN_00641910
// strings: 00674c60: "brbVoice::FindModuleData(): [%s ('%s')] States version mismatch @ slot index %d (requested version = %d, actual version = %d)!\n(Most likely plugin code out of s" | 00674ab0: "brbVoice::FindModuleData(): [%s ('%s')] Param version mismatch @ slot index %d (requested version = %d, actual version = %d)!\n(Most likely out of sync data)." | 00674b50: "brbVoice::FindModuleData(): [%s ('%s')] Params GUID mismatch @ slot index %d (requested GUID = 0x%0x, actual GUID = 0x%0x)!\n(Most likely out of sync data)." | 00674bf0: "brbVoice::FindModuleData(): [%s ('%s')] States requested @ slot index %d but module ID provided was for params!" | 00674d18: "brbVoice::FindModuleData(): [%s ('%s')] States GUID mismatch @ slot index %d (requested GUID = 0x%0x, actual GUID = 0x%0x)!\n(Most likely plugin code out of sync" | 00674a40: "brbVoice::FindModuleData(): [%s ('%s')] Params requested @ slot index %d but module ID provided was for states!"

int FUN_00647fe0(int param_1,byte *param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte bStack_2f;
  short sStack_2e;
  byte bStack_2b;
  short sStack_2a;
  
  puVar4 = PTR_PTR_0071b08c;
  iVar5 = *(int *)(param_1 + 0x18);
  bVar1 = *param_2;
  iVar2 = *(int *)(iVar5 + 0x18);
  if (param_4 == 1) {
    iVar3 = (uint)bVar1 * 4;
    iVar6 = *(int *)(iVar2 + iVar3 + 0x128);
    if (iVar6 == *(int *)param_2) {
      iVar5 = *(int *)(param_1 + 0x10);
      iVar6 = iVar2 + iVar3 + 0x20;
      *param_3 = ((uint)(*(int *)(iVar2 + iVar3 + 0x2c) - *(int *)(iVar6 + 8)) >> 2) - 1;
      return (*(uint *)(iVar2 + 0x244) & 0x1fffffff | 1) * 8 + iVar5 + 0x18 + *(int *)(iVar6 + 8);
    }
    if (*(int *)(iVar2 + iVar3 + 0x1a4) == *(int *)param_2) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7ff8),iVar2 + 8,iVar5 + 0x1c,bVar1);
      iVar5 = 0;
    }
    else {
      bStack_2b = (byte)((uint)iVar6 >> 0x10);
      if (bStack_2b != param_2[1]) {
        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7ff4),iVar2 + 8,iVar5 + 0x1c,bVar1,
                     param_2[1],bStack_2b);
      }
      sStack_2a = (short)iVar6;
      if (sStack_2a == *(short *)(param_2 + 2)) {
        return 0;
      }
      FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7ff0),*(int *)(*(int *)(param_1 + 0x18) + 0x18) + 8
                   ,*(int *)(param_1 + 0x18) + 0x1c,bVar1,*(short *)(param_2 + 2),sStack_2a);
      iVar5 = 0;
    }
  }
  else {
    iVar3 = (uint)bVar1 * 4;
    iVar6 = *(int *)(iVar2 + iVar3 + 0x1a4);
    if (iVar6 == *(int *)param_2) {
      iVar5 = *(int *)(param_1 + 0x14);
      iVar6 = iVar2 + iVar3 + 0xa0;
      *param_3 = ((uint)(*(int *)(iVar2 + iVar3 + 0xac) - *(int *)(iVar6 + 8)) >> 2) - 1;
      iVar5 = (*(uint *)(iVar2 + 0x244) & 0x1fffffff | 1) * 8 + iVar5 + 0x28 + *(int *)(iVar6 + 8);
    }
    else {
      if (*(int *)(iVar2 + iVar3 + 0x128) == *(int *)param_2) {
        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fec),iVar2 + 8,iVar5 + 0x1c,bVar1);
        return 0;
      }
      bStack_2f = (byte)((uint)iVar6 >> 0x10);
      if (bStack_2f != param_2[1]) {
        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fe8),iVar2 + 8,iVar5 + 0x1c,bVar1,
                     param_2[1],bStack_2f);
      }
      sStack_2e = (short)iVar6;
      if (sStack_2e == *(short *)(param_2 + 2)) {
        return 0;
      }
      FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fe4),*(int *)(*(int *)(param_1 + 0x18) + 0x18) + 8
                   ,*(int *)(param_1 + 0x18) + 0x1c,bVar1,*(short *)(param_2 + 2),sStack_2e);
      iVar5 = 0;
    }
  }
  return iVar5;
}



//==== 00648344  ns=Global  size=0x34
// sig: undefined FUN_00648344(void)
// callers(0): 
// callees(1): 00645028 FUN_00645028

undefined8 FUN_00648344(int param_1,undefined8 param_2)

{
  FUN_00645028(*(undefined4 *)(param_1 + 0x18),param_1,param_2);
  return 0;
}



//==== 00648378  ns=Global  size=0x30
// sig: undefined FUN_00648378(void)
// callers(0): 
// callees(1): 00645198 FUN_00645198

undefined4 FUN_00648378(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00645198(*(undefined4 *)(param_1 + 0x18),param_1);
  return uVar1;
}



//==== 006483a8  ns=Global  size=0x84
// sig: undefined FUN_006483a8(void)
// callers(0): 
// callees(2): 00641910 FUN_00641910; 00644ea8 FUN_00644ea8
// strings: 00674dd0: 'brbVoice::SetPriority(): Attempting to set voice to priority %d. Clamping to max priority (%d)!'

undefined4 FUN_006483a8(int param_1,byte param_2)

{
  undefined4 uVar1;
  
  if (100 < param_2) {
    FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fe0),param_2,100);
    param_2 = 100;
  }
  uVar1 = FUN_00644ea8(*(undefined4 *)(param_1 + 0x18),param_1,param_2);
  return uVar1;
}



//==== 0064842c  ns=Global  size=0x15c
// sig: undefined FUN_0064842c(void)
// callers(3): 00626670 FUN_00626670; 00626bb4 FUN_00626bb4; 00648588 FUN_00648588
// callees(3): 006425f4 FUN_006425f4; 00643fe8 FUN_00643fe8; 00644028 FUN_00644028

void FUN_0064842c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  char local_50;
  char local_4c;
  undefined1 local_48 [16];
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x18);
  uVar1 = *(uint *)(iVar4 + param_2 * 8 + 0x248);
  if (uVar1 < *(uint *)(iVar4 + 0x244)) {
    local_4c = (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10) >> 0x18);
    FUN_006425f4(local_4c,local_48);
    iVar4 = param_2 * 4 + 0x1c;
    if (*(int *)(param_1 + iVar4) != 0) {
      local_50 = (char)((uint)*(undefined4 *)(*(int *)(*(int *)(param_1 + iVar4) + 0x18) + 0x10) >>
                       0x18);
      if (local_50 != local_4c) {
        iVar2 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + iVar4) = 0;
        *(undefined8 *)(uVar1 * 8 + iVar2 + 0x18) = 0;
        return;
      }
      uVar3 = FUN_00643fe8(0);
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + iVar4) = 0;
      *(undefined8 *)(uVar1 * 8 + iVar2 + 0x18) = 0;
      FUN_00644028(0,uVar3);
    }
  }
  return;
}



//==== 00648588  ns=Global  size=0x68
// sig: undefined FUN_00648588(void)
// callers(3): 00626bb4 FUN_00626bb4; 00645198 FUN_00645198; 0064547c FUN_0064547c
// callees(1): 0064842c FUN_0064842c

void FUN_00648588(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 1;
  piVar4 = (int *)(param_1 + 0x20);
  do {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar2 != 0) {
      FUN_0064842c(param_1,iVar3);
    }
    bVar1 = iVar3 != 4;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  return;
}



//==== 006485f0  ns=Global  size=0x108
// sig: undefined FUN_006485f0(void)
// callers(0): 
// callees(2): 00647c64 FUN_00647c64; 00647fe0 FUN_00647fe0

undefined4 FUN_006485f0(int param_1,undefined8 param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  uint local_38 [4];
  
  iVar2 = FUN_00647fe0(param_1,local_3c,local_38,1);
  uVar4 = 0xfffffffe;
  if (iVar2 != 0) {
    uVar4 = 0;
    if ((param_3 & 0xffffffff) < (ulonglong)local_38[0]) {
      iVar1 = *param_4;
      piVar3 = (int *)(iVar2 + (int)((param_3 & 0xffffffff) << 2));
      iVar2 = *piVar3;
      *piVar3 = iVar1;
      if (iVar2 != iVar1) goto LAB_006486bc;
    }
    else {
      iVar1 = *param_4;
      piVar3 = (int *)(iVar2 + local_38[0] * 4);
      iVar2 = *piVar3;
      *piVar3 = iVar1;
      if (iVar2 != iVar1) {
LAB_006486bc:
        FUN_00647c64(*(undefined4 *)(param_1 + 0x10),local_40);
        return 0;
      }
    }
  }
  return uVar4;
}



//==== 006486f8  ns=Global  size=0x38
// sig: undefined FUN_006486f8(void)
// callers(46): 00624cd8 FUN_00624cd8; 00624dcc FUN_00624dcc; 00624ec0 FUN_00624ec0; 00625c88 FUN_00625c88; 00625e58 FUN_00625e58; 00626354 FUN_00626354; 006264fc FUN_006264fc; 006279c8 FUN_006279c8; 00627e64 FUN_00627e64; 00627f54 FUN_00627f54; 00628050 FUN_00628050; 00628104 FUN_00628104; 006281ac FUN_006281ac; 00628250 FUN_00628250; 00628314 FUN_00628314; 006283d0 FUN_006283d0; 00628474 FUN_00628474; 0062851c FUN_0062851c; 006285e0 FUN_006285e0; 00628694 FUN_00628694; 006287dc FUN_006287dc; 006288a0 FUN_006288a0; 00628964 FUN_00628964; 00628a20 FUN_00628a20; 00628af0 FUN_00628af0
// callees(1): 00647c64 FUN_00647c64

undefined8 FUN_006486f8(int param_1)

{
  undefined1 local_20 [32];
  
  FUN_00647c64(*(undefined4 *)(param_1 + 0x10),local_20);
  return 0;
}



//==== 00648730  ns=Global  size=0x90
// sig: undefined FUN_00648730(void)
// callers(46): 00624cd8 FUN_00624cd8; 00624dcc FUN_00624dcc; 00624ec0 FUN_00624ec0; 00625c88 FUN_00625c88; 00625e58 FUN_00625e58; 00626354 FUN_00626354; 006264fc FUN_006264fc; 006279c8 FUN_006279c8; 00627e64 FUN_00627e64; 00627f54 FUN_00627f54; 00628050 FUN_00628050; 00628104 FUN_00628104; 006281ac FUN_006281ac; 00628250 FUN_00628250; 00628314 FUN_00628314; 006283d0 FUN_006283d0; 00628474 FUN_00628474; 0062851c FUN_0062851c; 006285e0 FUN_006285e0; 00628694 FUN_00628694; 006287dc FUN_006287dc; 006288a0 FUN_006288a0; 00628964 FUN_00628964; 00628a20 FUN_00628a20; 00628af0 FUN_00628af0
// callees(2): 00647c30 FUN_00647c30; 00647fe0 FUN_00647fe0

undefined4 FUN_00648730(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [4];
  undefined1 auStack_3c [20];
  
  iVar1 = FUN_00647fe0(param_1,local_40,auStack_3c,1);
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  else {
    FUN_00647c30(*(undefined4 *)(param_1 + 0x10),*param_2);
    uVar2 = 0;
    *param_3 = iVar1;
  }
  return uVar2;
}



//==== 006487c0  ns=Global  size=0x60
// sig: undefined FUN_006487c0(void)
// callers(18): 00624a20 FUN_00624a20; 00624b18 FUN_00624b18; 00624bbc FUN_00624bbc; 00627000 989snd::snd_SynthGetFreeVoiceBufferId; 0062873c FUN_0062873c; 00629274 FUN_00629274; 00629708 FUN_00629708; 0062b108 FUN_0062b108; 0062b1b8 FUN_0062b1b8; 0062b288 989snd::snd_SynthGetVoicePlaybackPosition; 0062b484 989snd::snd_SynthGetVoicePlaybackLength; 0062bd20 FUN_0062bd20; 0062bdc0 FUN_0062bdc0; 0062f048 FUN_0062f048; 0062f1f4 989snd::snd_SynthGetVoiceOutputLevel; 006468bc FUN_006468bc; 00647020 FUN_00647020; 00647594 FUN_00647594
// callees(1): 00647fe0 FUN_00647fe0

int FUN_006487c0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 local_30 [4];
  undefined1 auStack_2c [20];
  
  uVar1 = FUN_00647fe0(param_1,local_30,auStack_2c,0);
  *param_3 = uVar1;
  return (((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1e & 2) - 2;
}



//==== 00648820  ns=Global  size=0x58
// sig: undefined FUN_00648820(void)
// callers(1): 0062be38 FUN_0062be38
// callees(1): 00647fe0 FUN_00647fe0

undefined4 FUN_00648820(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20 [4];
  undefined1 auStack_1c [12];
  
  iVar2 = FUN_00647fe0(param_1,local_20,auStack_1c,1);
  uVar1 = 0xfffffffe;
  if (iVar2 != 0) {
    uVar1 = 0;
    *param_3 = iVar2;
  }
  return uVar1;
}



//==== 00648878  ns=Global  size=0xcc
// sig: undefined FUN_00648878(void)
// callers(0): 
// callees(4): 005c5ad0 libc::memcpy; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34; 00647fa0 FUN_00647fa0

undefined8 FUN_00648878(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  undefined1 local_40 [24];
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 0x18) + 0xa4);
  FUN_00647ed0(param_1,local_40);
  libc::memcpy((void *)0x0,param_2,uVar1 & 0xfffffffc);
  if (param_3 != 0) {
    FUN_00647fa0(param_1,0);
    return 0;
  }
  FUN_00647f34(param_1,0xffffffff,0);
  return 0;
}



//==== 00648944  ns=Global  size=0x88
// sig: undefined FUN_00648944(void)
// callers(0): 
// callees(1): 00647fe0 FUN_00647fe0

undefined4 FUN_00648944(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30 [4];
  uint local_2c [5];
  
  iVar2 = FUN_00647fe0(param_1,local_30,local_2c,0);
  uVar3 = 0xfffffffe;
  if (iVar2 != 0) {
    uVar3 = 0;
    iVar1 = local_2c[0] << 2;
    if (param_3 <= local_2c[0]) {
      iVar1 = param_3 << 2;
    }
    *param_4 = *(undefined4 *)(iVar2 + iVar1);
  }
  return uVar3;
}



//==== 006489cc  ns=Global  size=0x88
// sig: undefined FUN_006489cc(void)
// callers(0): 
// callees(1): 00647fe0 FUN_00647fe0

undefined4 FUN_006489cc(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30 [4];
  uint local_2c [5];
  
  iVar2 = FUN_00647fe0(param_1,local_30,local_2c,1);
  uVar3 = 0xfffffffe;
  if (iVar2 != 0) {
    uVar3 = 0;
    iVar1 = local_2c[0] << 2;
    if (param_3 <= local_2c[0]) {
      iVar1 = param_3 << 2;
    }
    *param_4 = *(undefined4 *)(iVar2 + iVar1);
  }
  return uVar3;
}



//==== 00648a54  ns=Global  size=0xbc
// sig: undefined FUN_00648a54(void)
// callers(0): 
// callees(4): 005c5ad0 libc::memcpy; 00647c30 FUN_00647c30; 00647c64 FUN_00647c64; 00647fe0 FUN_00647fe0

undefined4 FUN_00648a54(int param_1,undefined1 *param_2,void *param_3)

{
  void *__dest;
  undefined4 uVar1;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  int local_38 [4];
  
  __dest = (void *)FUN_00647fe0(param_1,local_3c,local_38,1);
  uVar1 = 0xfffffffe;
  if (__dest != (void *)0x0) {
    FUN_00647c30(*(undefined4 *)(param_1 + 0x10),*param_2);
    libc::memcpy(__dest,param_3,local_38[0] * 4 + 4);
    FUN_00647c64(*(undefined4 *)(param_1 + 0x10),local_40);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00648b10  ns=idol  size=0x27c
// sig: undefined brbVoice_ConnectPort(void)
// callers(8): 00625a24 FUN_00625a24; 00625d80 FUN_00625d80; 00626670 FUN_00626670; 00626cb4 989snd::snd_SynthLR1Insert; 0062a264 FUN_0062a264; 0062a394 FUN_0062a394; 0062c52c FUN_0062c52c; 0062e140 989snd::snd_SynthSetVoiceData
// callees(6): 00641910 FUN_00641910; 006425f4 FUN_006425f4; 00643fe8 FUN_00643fe8; 00644028 FUN_00644028; 00647d94 FUN_00647d94; 0064eb50 FUN_0064eb50
// strings: 00674f28: 'brbVoice::ConnectPort(): DESTINATION PORT IS INVALID!' | 00674e30: 'brbVoice::ConnectPort(): CANNOT CONNECT TO A SYNTH VOICE!' | 00674ee0: 'brbVoice::ConnectPort(): OUTPUT MUST BE FROM SAME OR LATER STAGE RACK!' | 00674e70: 'brbVoice::ConnectPort(): CHANNEL CONFIG OF SOURCE VOICE PORT IS INCOMPATIBLE WITH INPUT PORT OF TARGET VOICE!'

undefined4 idol::brbVoice_ConnectPort(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte local_70;
  undefined1 local_6c [4];
  byte local_68;
  char cStack_67;
  ushort uStack_66;
  undefined1 local_64 [4];
  byte local_60;
  undefined8 local_58 [2];
  
  puVar4 = PTR_PTR_0071b08c;
  if (param_3 == 1) {
    param_3 = **(int **)(PTR_PTR_0071b08c + -0x7fdc);
  }
  else if (param_3 == 2) {
    param_3 = **(int **)(PTR_PTR_0071b08c + -0x7fd8);
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x18) + param_2 * 8 + 0x248);
  local_70 = (byte)((uint)*(undefined4 *)(*(int *)(param_3 + 0x18) + 0x10) >> 0x18);
  if (local_70 == 0) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fd4));
    uVar5 = 0xfffffff5;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x18) + 0x18) + 0x24c);
    local_68 = (byte)((uint)uVar2 >> 0x18);
    if (((local_68 < 5) &&
        (cStack_67 = (char)((uint)uVar2 >> 0x10), 0xe8 < (byte)(cStack_67 - 0x16U))) &&
       (uStack_66 = (ushort)uVar2, uStack_66 < 0xbb81)) {
      cVar6 = FUN_0064eb50(local_6c,**(undefined4 **)(PTR_PTR_0071b08c + -0x7fd0),&local_68);
      if (cVar6 == '\0') {
        FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fcc));
        uVar5 = 0xfffffff5;
      }
      else {
        local_60 = (byte)((uint)uVar5 >> 0x18);
        if (local_70 < local_60) {
          FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fc8));
          uVar5 = 0xfffffff5;
        }
        else {
          FUN_006425f4(local_60,local_64);
          if (local_70 == local_60) {
            uVar7 = FUN_00643fe8(0);
            iVar3 = *(int *)(param_1 + 0x10);
            FUN_00647d94(local_58,param_3);
            *(int *)(param_1 + param_2 * 4 + 0x1c) = param_3;
            *(undefined8 *)(iVar3 + iVar1 * 8 + 0x18) = local_58[0];
            FUN_00644028(0,uVar7);
            uVar5 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x10);
            FUN_00647d94(local_58,param_3);
            uVar5 = 0;
            *(int *)(param_1 + param_2 * 4 + 0x1c) = param_3;
            *(undefined8 *)(iVar3 + iVar1 * 8 + 0x18) = local_58[0];
          }
        }
      }
    }
    else {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fc4));
      uVar5 = 0xfffffff5;
    }
  }
  return uVar5;
}



//==== 00648d8c  ns=Global  size=0x94
// sig: undefined FUN_00648d8c(void)
// callers(1): 006459b4 FUN_006459b4
// callees(0): 

undefined8
FUN_00648d8c(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,undefined4 param_6,
            undefined4 param_7,longlong param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 in_stack_00000074;
  char local_20;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = PTR_PTR_0071b08c;
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_4;
  if (param_8 != 0) {
    *(undefined4 *)(param_3 + 8) = param_7;
    *(int *)(param_4 + 0x1c) = (int)param_8;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  *(int *)(param_4 + 8) = param_4;
  *(undefined4 *)(param_4 + 4) = in_stack_00000074;
  uVar1 = *(undefined4 *)(puVar4 + -0x8000);
  *(undefined4 *)(param_4 + 0xc) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x220);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  local_20 = (char)((uint)uVar3 >> 0x18);
  if (local_20 != '\0') {
    uVar1 = *(undefined4 *)(iVar2 + 0x24c);
    param_3 = *(int *)(iVar2 + 0x248) * 8 + param_3;
    *(undefined4 *)(param_3 + 0x18) = param_6;
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
  }
  return 0;
}



//==== 00648e20  ns=Global  size=0x78
// sig: undefined FUN_00648e20(void)
// callers(2): 00642a50 FUN_00642a50; 0064b124 FUN_0064b124
// callees(0): 

undefined8
FUN_00648e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
            longlong param_5,longlong param_6)

{
  float fVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar2 = PTR_PTR_0071b090;
  fVar1 = *(float *)(PTR_PTR_0071b090 + -0x8000);
  *param_1 = 1;
  param_1[0xf] = param_2;
  param_1[0xe] = param_3;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar2 + -0x7ff8);
  param_1[0xc] = (int)param_5;
  param_1[0xd] = (int)param_4;
  param_1[5] = (int)param_6;
  dVar3 = ((double)param_5 * (double)fVar1) / (double)param_6;
  *(double *)(param_1 + 8) = dVar3;
  *(double *)(param_1 + 6) = dVar3 * (double)param_4;
  return 0;
}



//==== 00648e98  ns=Global  size=0x28
// sig: undefined FUN_00648e98(void)
// callers(2): 00642a50 FUN_00642a50; 0064b650 FUN_0064b650
// callees(0): 

undefined8 FUN_00648e98(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[1] = param_2;
  param_1[3] = param_3;
  *param_1 = *param_1 | 2;
  param_1[2] = param_4;
  param_1[4] = param_5;
  return 0;
}



//==== 00648ec0  ns=Global  size=0x1c
// sig: undefined FUN_00648ec0(void)
// callers(2): 006427e8 FUN_006427e8; 0064aa68 FUN_0064aa68
// callees(0): 

undefined8 FUN_00648ec0(uint *param_1)

{
  ulonglong uVar1;
  
  uVar1 = ((ulonglong)*param_1 & 1) << 0x1e | (ulonglong)(*param_1 >> 2);
  *param_1 = (uint)(uVar1 << 2) | (uint)uVar1 >> 0x1e;
  return 0;
}



//==== 00648edc  ns=Global  size=0x50
// sig: undefined FUN_00648edc(void)
// callers(2): 006427e8 FUN_006427e8; 0064abc0 FUN_0064abc0
// callees(0): 

undefined8 FUN_00648edc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(PTR_PTR_0071b090 + -0x7ff8);
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  return 0;
}



//==== 00648f2c  ns=Global  size=0x50
// sig: undefined FUN_00648f2c(void)
// callers(4): 00641b58 FUN_00641b58; 00649110 FUN_00649110; 0064932c FUN_0064932c; 0064bfbc FUN_0064bfbc
// callees(0): 

int FUN_00648f2c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    param_1 = param_1 + 0x82;
    iVar2 = 0;
    lVar3 = 0x80;
    do {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      if (iVar1 == *param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return -1;
}



//==== 00648f7c  ns=Global  size=0x34
// sig: undefined FUN_00648f7c(void)
// callers(1): 00649110 FUN_00649110
// callees(0): 

void FUN_00648f7c(int *param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)((param_3 & 0xffffffff) << 2);
  uVar1 = *(undefined4 *)(param_2 + 0x220);
  *(int *)((int)param_1 + iVar2 + 8) = param_2;
  *(undefined4 *)((int)param_1 + iVar2 + 0x208) = uVar1;
  *param_1 = *param_1 + 1;
  return;
}



//==== 00648fb0  ns=Global  size=0x34
// sig: undefined FUN_00648fb0(void)
// callers(4): 00648fe4 FUN_00648fe4; 0064932c FUN_0064932c; 0064c168 FUN_0064c168; 0064c428 FUN_0064c428
// callees(0): 

void FUN_00648fb0(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)((param_2 & 0xffffffff) << 2);
  *(undefined4 *)((int)param_1 + iVar1 + 8) = 0;
  *(undefined4 *)((int)param_1 + iVar1 + 0x208) = 0;
  *param_1 = *param_1 + -1;
  return;
}



//==== 00648fe4  ns=Global  size=0x98
// sig: undefined FUN_00648fe4(void)
// callers(0): 
// callees(2): 00641910 FUN_00641910; 00648fb0 FUN_00648fb0
// strings: 00674f60: 'brbPluginRegBase::UnregisterPluginClass() called with bad index! (%d)' | 00674fa8: "brbPluginRegBase::UnregisterPluginClass() Can't unregister, slot %d is empty!"

undefined4 FUN_00648fe4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x81) {
    if (*(int *)(param_1 + param_2 * 4 + 8) == 0) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7ffc));
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00648fb0(param_1,param_2);
      uVar1 = 0;
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x8000),param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



//==== 0064907c  ns=Global  size=0x94
// sig: undefined FUN_0064907c(void)
// callers(1): 00649110 FUN_00649110
// callees(1): 00641910 FUN_00641910
// strings: 00674ff8: 'brbPluginRegBase::FindFreeSlot(): No available slots!'

int FUN_0064907c(int param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0x80;
  pbVar1 = (byte *)(param_1 + 0x208);
  while( true ) {
    if ((*(int *)pbVar1 == 0) || (3 < *pbVar1)) break;
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + -1;
    pbVar1 = pbVar1 + 4;
    if (lVar3 == 0) {
      FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b094 + -0x7ff8));
      return -1;
    }
  }
  return iVar2;
}



//==== 00649110  ns=Global  size=0x194
// sig: undefined FUN_00649110(void)
// callers(1): 0064c428 FUN_0064c428
// callees(5): 005d0218 libc::memcmp; 00641910 FUN_00641910; 00648f2c FUN_00648f2c; 00648f7c FUN_00648f7c; 0064907c FUN_0064907c
// strings: 00675070: 'brbPluginRegBase::RegisterPluginClass( %s ): ALREADY REGISTERED!' | 006750b8: "brbPluginRegBase::RegisterPluginClass( %s ): ALREADY REGISTERED AS '%s'!" | 00675030: 'brbPluginRegBase::RegisterPluginClass(): Plugin registry full!'

undefined4 FUN_00649110(int *param_1,void *param_2,int *param_3)

{
  void *__s1;
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  undefined1 local_50 [16];
  
  puVar2 = PTR_PTR_0071b094;
  if (*param_1 == 0x80) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7ff4));
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00648f2c(param_1,local_50);
    if ((int)uVar3 == -1) {
LAB_0064921c:
      uVar4 = FUN_0064907c(param_1);
      FUN_00648f7c(param_1,param_2,uVar4);
      *param_3 = (int)uVar4;
      return 0;
    }
    __s1 = *(void **)((int)param_1 + (int)((uVar3 & 0xffffffff) << 2) + 8);
    iVar5 = libc::memcmp(__s1,param_2,0x284);
    iVar1 = (int)__s1 + 8;
    if (iVar5 == 0) {
      FUN_00641910(2,*(undefined4 *)(puVar2 + -0x7ff0),(int)param_2 + 8,iVar1);
      uVar6 = 0;
      if (param_3 == (int *)0x0) goto LAB_0064921c;
      *param_3 = (int)uVar3;
    }
    else {
      FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fec),(int)param_2 + 8,iVar1);
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}



//==== 006492a4  ns=Global  size=0x2c
// sig: undefined FUN_006492a4(void)
// callers(1): 0064cbbc FUN_0064cbbc
// callees(1): 005d0140 libc::memset

void FUN_006492a4(undefined8 param_1)

{
  libc::memset(param_1,0,0x40c);
  return;
}



//==== 006492d0  ns=Global  size=0x5c
// sig: undefined FUN_006492d0(void)
// callers(1): 0064cb60 FUN_0064cb60
// callees(1): 005d0140 libc::memset

undefined8 FUN_006492d0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  libc::memset(param_1,0,0x40c);
  *(undefined4 *)(param_1 + 0x408) = param_4;
  *(undefined4 *)(param_1 + 4) = param_3;
  return 0;
}



//==== 0064932c  ns=Global  size=0x94
// sig: undefined FUN_0064932c(void)
// callers(0): 
// callees(3): 00641910 FUN_00641910; 00648f2c FUN_00648f2c; 00648fb0 FUN_00648fb0
// strings: 00675108: 'brbPluginRegBase::UnregisterPluginClass( %s ): CLASS NOT CURRENTLY REGISTERED!.'

undefined4 FUN_0064932c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30 [24];
  
  puVar1 = PTR_PTR_0071b094;
  iVar2 = FUN_00648f2c(param_1,local_30);
  if (iVar2 == -1) {
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fe8),param_2 + 8);
    uVar3 = 0xffffffff;
  }
  else {
    FUN_00648fb0(param_1,iVar2);
    uVar3 = 0;
  }
  return uVar3;
}



//==== 006493c0  ns=Global  size=0x69c
// sig: undefined FUN_006493c0(void)
// callers(1): 0064c090 FUN_0064c090
// callees(1): 00641910 FUN_00641910
// strings: 00675620: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nINVALID PADDING FOR MODULE PARAMS OFFSET FOR UNUSED SLOT INDEX %d' | 00675ac0: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nINVALID SID!' | 00675b00: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nINVALID INPUT BUSS FORMAT FOR A NON SYNTH PLUGIN!' | 006751b8: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nINVALID PROC ADDRESS!' | 00675910: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nINVALID PADDING FOR MODULE STATES OFFSET FOR UNUSED SLOT INDEX %d' | 00675750: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBAD PARAMS TOTAL SIZE!\nMISSING 1 OR MORE PARAMS PADDINGS IN PLUGIN CLASS' | 00675470: "****  brbProcBase::CheckPluginClass( %s ) ****\n\nFOUND TOTAL STATES SIZE == 0!\nTHIS PLUGIN DOESN'T DO ANYTHING?" | 00675158: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBRB VERSION MISMATCH (0x%0X SHOULD BE 0x%0X)!' | 00675a40: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBAD STATES TOTAL SIZE!\nMISSING 1 OR MORE STATES PADDINGS IN PLUGIN CLASS' | 006754e0: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nPARAM MODULE ID INDEX (%d) DOES NOT MATCH THE SLOT INDEX (%d)!' | 00675550: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nEXPECTED VALID PARAMS OFFSET FOR MODULE INDEX %d, BUT FOUND PADDING!' | 006755c8: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBAD PARAMS OFFSET FOR MODULE INDEX %d!' | 00675260: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nNUM PORTS (%d) DOES NOT MATCH NUMBER OF VALID PORTS IN PORT MAP (%d)' | 006758b8: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBAD STATES OFFSET FOR MODULE INDEX %d!' | 00675390: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nNUM VOICES PER PACKET %d MUST BE A POWER OF 2' | 00675840: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nEXPECTED VALID STATES OFFSET FOR MODULE INDEX %d, BUT FOUND PADDING!' | 006757d0: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nSTATES MODULE ID INDEX (%d) DOES NOT MATCH THE SLOT INDEX (%d)!' | 00675200: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBAD NUMBER OF BUSS PORTS %d (MIN %d, MAX %d)' | 006752d8: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nBAD WORK AREA SIZE %d (MIN %d, MAX %d)' | 00675330: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nTOO MANY VOICES PER PACKET %d (BRB_MAX %d)' | 006753f0: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nFOUND TOTAL PARAMS SIZE == 0!\nHOW DO YOU PLAN ON CONTROLLING THIS PLUGIN?' | 00675698: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nPARAMS MODULE COUNT %d SHOULD BE %d!' | 006756f0: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nPARAMS MODULE PADDING COUNT %d SHOULD BE %d!' | 006759e0: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nSTATES MODULE PADDING COUNT %d SHOULD BE %d!' | 00675988: '****  brbProcBase::CheckPluginClass( %s ) ****\n\nSTATES MODULE COUNT %d SHOULD BE %d!'

undefined4 FUN_006493c0(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  byte local_3c;
  byte local_38;
  byte local_34;
  char cStack_33;
  ushort uStack_32;
  byte local_30;
  
  if (*(int *)(param_2 + 0x280) == 0x10022) {
    if ((*(int *)(param_2 + 0x220) == 0) ||
       (local_38 = (byte)((uint)*(int *)(param_2 + 0x220) >> 0x18), 3 < local_38)) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f88),param_2 + 8);
      uVar4 = 0xffffffff;
    }
    else if ((*(int *)(param_2 + 0x228) == 0) || (*(int *)(param_2 + 0x22c) == 0)) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fe0),param_2 + 8);
      uVar4 = 0xffffffff;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x244);
      uVar5 = 0;
      iVar9 = 0;
      lVar11 = 5;
      if (iVar3 - 1U < 5) {
        do {
          iVar1 = iVar9 + param_2;
          iVar9 = iVar9 + 8;
          uVar2 = ~*(uint *)(iVar1 + 0x248);
          uVar8 = (int)uVar2 >> 0x1f;
          uVar5 = uVar5 - ((longlong)((ulonglong)(uVar8 - (uVar8 ^ uVar2)) << 0x20) >> 0x3f);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if ((int)uVar5 == iVar3) {
          uVar8 = *(int *)(param_2 + 0x270) + 0x7fU & 0xffffff80;
          if (uVar8 < 0x100001) {
            if (local_38 != 0) {
              uVar4 = *(undefined4 *)(param_2 + 0x24c);
              local_34 = (byte)((uint)uVar4 >> 0x18);
              if (((4 < local_34) ||
                  (cStack_33 = (char)((uint)uVar4 >> 0x10), (byte)(cStack_33 - 0x16U) < 0xe9)) ||
                 (uStack_32 = (ushort)uVar4, 48000 < uStack_32)) {
                FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f84),param_2 + 8);
                return 0xffffffff;
              }
            }
            uVar8 = *(uint *)(param_2 + 0x230);
            if (uVar8 - 1 < 4) {
              if ((uVar8 & -uVar8) == uVar8) {
                uVar8 = *(uint *)(param_2 + 0xa4);
                uVar2 = *(uint *)(param_2 + 0x124);
                if (uVar8 == 0) {
                  FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fc8),param_2 + 8);
                  uVar4 = 0xffffffff;
                }
                else if (uVar2 == 0) {
                  FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fc4),param_2 + 8);
                  uVar4 = 0xffffffff;
                }
                else {
                  puVar6 = (uint *)(param_2 + 0x28);
                  lVar11 = 0x1f;
                  iVar9 = 0;
                  iVar3 = 0;
                  uVar7 = 0;
                  uVar10 = 0;
                  do {
                    if (puVar6[0x40] == 0) {
                      iVar9 = iVar9 + 1;
                      if ((*puVar6 < uVar7) || (uVar8 < *puVar6)) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fb4),param_2 + 8,
                                     uVar10);
                        return 0xffffffff;
                      }
                    }
                    else {
                      local_3c = (byte)(puVar6[0x40] >> 0x18);
                      iVar3 = iVar3 + 1;
                      uVar7 = *puVar6;
                      if (local_3c != uVar10) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fc0),param_2 + 8,
                                     local_3c,uVar10);
                        return 0xffffffff;
                      }
                      if (uVar8 == uVar7) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fbc),param_2 + 8,
                                     uVar10);
                        return 0xffffffff;
                      }
                      if (0x19000 < uVar7) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fb8),param_2 + 8,
                                     uVar10);
                        return 0xffffffff;
                      }
                    }
                    uVar10 = uVar10 + 1;
                    puVar6 = puVar6 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                  if (iVar3 == *(int *)(param_2 + 0x234)) {
                    if (iVar9 == 0x1f - iVar3) {
                      if ((uVar7 == 0) || (uVar7 < uVar8)) {
                        puVar6 = (uint *)(param_2 + 0xa8);
                        iVar9 = 0;
                        lVar11 = 0x1f;
                        iVar3 = 0;
                        uVar8 = 0;
                        uVar7 = 0;
                        do {
                          if (puVar6[0x3f] == 0) {
                            iVar9 = iVar9 + 1;
                            if ((*puVar6 < uVar8) || (uVar2 < *puVar6)) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f98),param_2 + 8
                                           ,uVar7);
                              return 0xffffffff;
                            }
                          }
                          else {
                            local_30 = (byte)(puVar6[0x3f] >> 0x18);
                            iVar3 = iVar3 + 1;
                            uVar8 = *puVar6;
                            if (uVar7 != local_30) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fa4),param_2 + 8
                                           ,local_30,uVar7);
                              return 0xffffffff;
                            }
                            if (uVar2 == uVar8) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fa0),param_2 + 8
                                           ,uVar7);
                              return 0xffffffff;
                            }
                            if (((uVar8 & 0xf) != 0) || (0x19000 < uVar8)) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f9c),param_2 + 8
                                           ,uVar7);
                              return 0xffffffff;
                            }
                          }
                          uVar7 = uVar7 + 1;
                          puVar6 = puVar6 + 1;
                          lVar11 = lVar11 + -1;
                        } while (lVar11 != 0);
                        if (iVar3 == *(int *)(param_2 + 0x238)) {
                          if (iVar9 == 0x1f - iVar3) {
                            if ((uVar8 == 0) || (uVar8 < uVar2)) {
                              uVar4 = 0;
                            }
                            else {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f8c),param_2 + 8
                                          );
                              uVar4 = 0xffffffff;
                            }
                          }
                          else {
                            FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f90),param_2 + 8,
                                         iVar9,0x1f - iVar3);
                            uVar4 = 0xffffffff;
                          }
                        }
                        else {
                          FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f94),param_2 + 8,
                                       *(int *)(param_2 + 0x238),iVar3);
                          uVar4 = 0xffffffff;
                        }
                      }
                      else {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fa8),param_2 + 8);
                        uVar4 = 0xffffffff;
                      }
                    }
                    else {
                      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fac),param_2 + 8,iVar9,
                                   0x1f - iVar3);
                      uVar4 = 0xffffffff;
                    }
                  }
                  else {
                    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fb0),param_2 + 8,
                                 *(int *)(param_2 + 0x234),iVar3);
                    uVar4 = 0xffffffff;
                  }
                }
              }
              else {
                FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fcc),param_2 + 8,uVar8);
                uVar4 = 0xffffffff;
              }
            }
            else {
              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fd0),param_2 + 8,uVar8,4);
              uVar4 = 0xffffffff;
            }
          }
          else {
            FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fd4),param_2 + 8,uVar8,0,0x100000)
            ;
            uVar4 = 0xffffffff;
          }
        }
        else {
          FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fd8),param_2 + 8,iVar3,
                       uVar5 & 0xffffffff);
          uVar4 = 0xffffffff;
        }
      }
      else {
        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fdc),param_2 + 8,iVar3,1,5);
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fe4),param_2 + 8,*(int *)(param_2 + 0x280)
                 ,0x10022);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



//==== 00649a5c  ns=Global  size=0xd8
// sig: undefined FUN_00649a5c(void)
// callers(1): 00649b34 FUN_00649b34
// callees(1): 004fa5b4 FUN_004fa5b4

void FUN_00649a5c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
  puVar2 = PTR_PTR_0071b098;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    uVar3 = FUN_004fa5b4(*(undefined4 *)(PTR_PTR_0071b098 + -0x8000));
    puVar1 = *(undefined4 **)(puVar2 + -0x7ffc);
    puVar1[0x10] = 0;
    puVar1[10] = 0;
    syscall();
    puVar1[0xe] = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[0xf] = (int)(3200000000 / uVar3);
    return;
  }
  return;
}



//==== 00649b34  ns=Global  size=0x10
// sig: undefined FUN_00649b34(void)
// callers(1): 00014f5c crt0::__do_global_ctors_aux
// callees(1): 00649a5c FUN_00649a5c

void FUN_00649b34(void)

{
  FUN_00649a5c(1,0xffff);
  return;
}



//==== 00649b44  ns=Global  size=0x104
// sig: undefined FUN_00649b44(void)
// callers(1): 0064a4b0 FUN_0064a4b0
// callees(1): 005c756c FUN_005c756c
// strings: 00675c38: 'Warning: Did you forget to use BRB_MULTI_TRACE_END()?!?!'

undefined8 FUN_00649b44(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (**(char **)(PTR_PTR_0071b098 + -0x7ff4) != '\0') {
    if (param_3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00649c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(*(int *)((param_3 & 0xffff) * 4 + *(int *)(PTR_PTR_0071b098 + -0x7ff0)) +
                        *(int *)(PTR_PTR_0071b098 + -0x7ff0)))();
      return uVar1;
    }
    if (0x20 < **(int **)(PTR_PTR_0071b098 + -0x7fdc)) {
      FUN_005c756c(*(undefined4 *)(PTR_PTR_0071b098 + -0x7f98));
      return 0;
    }
  }
  return 0;
}



//==== 0064a104  ns=Global  size=0x258
// sig: undefined FUN_0064a104(void)
// callers(1): 0064d8bc FUN_0064d8bc
// callees(2): 004f9c74 FUN_004f9c74; 004f9e90 FUN_004f9e90

void FUN_0064a104(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined *puVar15;
  int iVar17;
  ulonglong uVar16;
  uint uVar18;
  int iVar19;
  undefined1 local_50 [40];
  
  puVar15 = PTR_PTR_0071b098;
  if (**(char **)(PTR_PTR_0071b098 + -0x7ff4) != '\0') {
    uVar5 = *(undefined4 *)(PTR_PTR_0071b098 + -0x8000);
    FUN_004f9c74(uVar5,param_2,*(undefined4 *)(PTR_PTR_0071b098 + -0x7f94),0,local_50);
    FUN_004f9e90(uVar5,param_2);
    puVar6 = *(uint **)(puVar15 + -0x7f90);
    cVar2 = **(char **)(puVar15 + -0x7f8c);
    uVar18 = param_3 + *puVar6;
    *puVar6 = uVar18;
    if ((cVar2 != '\0') && (*(uint *)(param_1 + 0xc) <= uVar18)) {
      uVar7 = *(uint *)(param_1 + 4);
      uVar8 = *(uint *)(param_1 + 8);
      puVar9 = *(undefined4 **)(puVar15 + -0x7ffc);
      iVar10 = *(int *)(param_1 + 0x10);
      iVar19 = 0;
      fVar3 = *(float *)(puVar15 + -0x7f88);
      puVar9[1] = 0;
      puVar9[0xe] = 0;
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      fVar4 = *(float *)(puVar15 + -0x7f7c);
      fVar13 = *(float *)(puVar15 + -0x7f74) / ((float)uVar18 * ((float)uVar7 / (float)uVar8));
      do {
        iVar17 = *(int *)(iVar19 + iVar10);
        while (iVar17 != 0) {
          while( true ) {
            uVar16 = (ulonglong)(uint)puVar9[0xf] * *(longlong *)(iVar17 + 0x68);
            if (-1 < (longlong)uVar16) break;
            iVar11 = *(int *)(iVar17 + 4);
            *(undefined8 *)(iVar17 + 0x68) = 0;
            *(undefined4 *)(*(int *)(iVar17 + 0x84) + 0x10) = 0;
            fVar14 = (float)uVar16 * fVar13;
            fVar4 = fVar4 + fVar14;
            *(float *)(iVar17 + 0x70) = fVar14 * fVar3;
            iVar17 = iVar11;
            if (iVar11 == 0) goto LAB_0064a318;
          }
          fVar14 = (float)(longlong)uVar16 * fVar13;
          iVar11 = *(int *)(iVar17 + 4);
          *(undefined8 *)(iVar17 + 0x68) = 0;
          *(undefined4 *)(*(int *)(iVar17 + 0x84) + 0x10) = 0;
          fVar4 = fVar4 + fVar14;
          *(float *)(iVar17 + 0x70) = fVar14 * fVar3;
          iVar17 = iVar11;
        }
LAB_0064a318:
        bVar1 = iVar19 == 0x690;
        iVar19 = iVar19 + 0x230;
        if (bVar1) {
          pfVar12 = *(float **)(puVar15 + -0x7f80);
          *puVar6 = 0;
          *pfVar12 = fVar4 * fVar3;
          return;
        }
      } while( true );
    }
  }
  return;
}



//==== 0064a35c  ns=Global  size=0x104
// sig: undefined FUN_0064a35c(void)
// callers(1): 006427e8 FUN_006427e8
// callees(4): 004f95dc FUN_004f95dc; 004f95e8 FUN_004f95e8; 004f9e90 FUN_004f9e90; 004fa73c FUN_004fa73c

void FUN_0064a35c(int param_1,int *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b098;
  pcVar1 = *(char **)(PTR_PTR_0071b098 + -0x7ff4);
  if (*pcVar1 != '\0') {
    uVar2 = *(undefined4 *)(PTR_PTR_0071b098 + -0x8000);
    FUN_004f95dc(uVar2,0);
    FUN_004f95e8(uVar2,0);
    FUN_004f9e90(uVar2,0);
    FUN_004f9e90(uVar2,1);
    FUN_004fa73c(uVar2);
    puVar3 = *(undefined4 **)(puVar4 + -0x7f6c);
    (*(code *)**(undefined4 **)(*param_2 + 4))(param_2,*puVar3,0xfff0147,0,0);
    *pcVar1 = '\0';
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



//==== 0064a460  ns=Global  size=0x50
// sig: undefined FUN_0064a460(void)
// callers(1): 00642a50 FUN_00642a50
// callees(1): 00641910 FUN_00641910
// strings: 00675c78: 'brbAudits::Initialize(): Rounding requested auditBufferSize (%d bytes) to %d bytes!'

undefined8 FUN_0064a460(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 0xffff) {
    FUN_00641910(3,*(undefined4 *)(PTR_PTR_0071b098 + -0x7f68),param_3,0x10000);
  }
  return 0;
}



//==== 0064a4b0  ns=Global  size=0xc8
// sig: undefined FUN_0064a4b0(void)
// callers(0): 
// callees(1): 00649b44 FUN_00649b44

uint FUN_0064a4b0(undefined4 param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,
                 undefined1 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 *in_stack_00000074;
  
  uVar1 = 0;
  if (**(char **)(PTR_PTR_0071b098 + -0x7ff4) != '\0') {
    if ((param_3 & 0xffffffff) < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0064a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(*(int *)(((uint)((param_3 & 0xffffffff) << 2) & 0x3fffc) +
                                 *(int *)(PTR_PTR_0071b098 + -0x7f64)) +
                        *(int *)(PTR_PTR_0071b098 + -0x7f64)))();
      return uVar1;
    }
    uVar1 = FUN_00649b44(param_1,param_2,param_3 - *(uint *)*in_stack_00000074 & 0xffff,param_4,
                         param_5,param_6,param_7,param_8);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



//==== 0064a780  ns=Global  size=0x2e8
// sig: undefined FUN_0064a780(void)
// callers(1): 0064b124 FUN_0064b124
// callees(3): 00641910 FUN_00641910; 0064f5a4 cell::cellAudioOutConfigure; 0064f684 cell::cellAudioOutGetSoundAvailability
// strings: 00675d10: 'cellAudioOutConfigure() FAILED!' | 00675d30: '*******************************************************************' | 00675dc8: 'Audio output: %d channels of %s @ 48kHz sample rate' | 00675d78: 'Maximum detected channel count (%d) overridden to %d!'

uint FUN_0064a780(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 local_60 [24];
  
  puVar5 = PTR_PTR_0071b09c;
  uVar6 = cell::cellAudioOutGetSoundAvailability(0,0,4,0);
  uVar9 = 0;
  if ((param_3 & 0x20) == 0) {
    uVar9 = cell::cellAudioOutGetSoundAvailability(0,1,4,0);
  }
  uVar8 = 0;
  if ((param_3 & 0x40) == 0) {
    uVar8 = cell::cellAudioOutGetSoundAvailability(0,6,4,0);
  }
  if (uVar9 <= uVar6) {
    bVar3 = false;
    bVar4 = false;
    if (uVar8 <= uVar6) goto joined_r0x0064a8b4;
  }
  bVar3 = true;
  bVar4 = true;
  uVar6 = uVar8;
  if (uVar8 < uVar9) {
    bVar4 = false;
    uVar6 = uVar9;
  }
joined_r0x0064a8b4:
  if (((param_4 == 2) || (param_4 == 6)) || (param_4 == 8)) {
    bVar2 = true;
  }
  else {
    if (bVar3) {
      iVar7 = cell::cellAudioOutConfigure(0,local_60,0,0);
    }
    else {
      iVar7 = cell::cellAudioOutConfigure(0,local_60,0,0);
    }
    bVar2 = false;
    param_4 = uVar6;
    if (iVar7 != 0) {
      bVar2 = false;
      FUN_00641910(3,*(undefined4 *)(puVar5 + -0x8000));
    }
  }
  if ((param_3 & 8) == 0) {
    uVar1 = *(undefined4 *)(puVar5 + -0x7ffc);
    FUN_00641910(3,uVar1);
    if ((bVar2) && (param_2 == 0)) {
      FUN_00641910(3,*(undefined4 *)(puVar5 + -0x7ff8),uVar6,param_4);
    }
    else {
      if (bVar3) {
        if (bVar4) {
          uVar10 = *(undefined4 *)(puVar5 + -0x7ff0);
        }
        else {
          uVar10 = *(undefined4 *)(puVar5 + -0x7fec);
        }
      }
      else {
        uVar10 = *(undefined4 *)(puVar5 + -0x7ff4);
      }
      FUN_00641910(3,*(undefined4 *)(puVar5 + -0x7fe8),param_4,uVar10);
    }
    FUN_00641910(3,uVar1);
    return param_4;
  }
  return param_4;
}



//==== 0064aa68  ns=Global  size=0x158
// sig: undefined FUN_0064aa68(void)
// callers(2): 006427e8 FUN_006427e8; 0064abc0 FUN_0064abc0
// callees(1): 00648ec0 FUN_00648ec0

undefined8 FUN_0064aa68(uint *param_1)

{
  if ((*param_1 & 3) == 3) {
    FUN_00648ec0(param_1);
    if (*(longlong *)(param_1 + 0x10) != 0xffffffff) {
      syscall();
      param_1[0x10] = 0;
      param_1[0x11] = 0xffffffff;
    }
    if (param_1[0x14] != 0xffffffff) {
      syscall();
      syscall();
      syscall();
      param_1[0x14] = 0xffffffff;
    }
    if (param_1[0x15] != 0xffffffff) {
      syscall();
      param_1[0x15] = 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x12) != 0xffffffff) {
      syscall();
      param_1[0x12] = 0;
      param_1[0x13] = 0xffffffff;
      if (param_1[0x16] != 0xffffffff) {
        syscall();
        syscall();
        param_1[0x16] = 0xffffffff;
      }
      if (param_1[0x17] != 0xffffffff) {
        syscall();
        param_1[0x17] = 0xffffffff;
        return 0;
      }
    }
  }
  return 0;
}



//==== 0064abc0  ns=Global  size=0xfc
// sig: undefined FUN_0064abc0(void)
// callers(1): 006427e8 FUN_006427e8
// callees(5): 00648edc FUN_00648edc; 0064aa68 FUN_0064aa68; 0064fde4 cell::cellAudioPortClose; 00650484 cell::cellAudioPortStop; 006504a4 cell::cellAudioQuit

undefined4 FUN_0064abc0(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071b09c;
  FUN_0064aa68();
  if (*(int *)(param_1 + 0x60) != -1) {
    cell::cellAudioPortStop(*(int *)(param_1 + 0x60));
    cell::cellAudioPortClose(*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  if (*(int *)(param_1 + 100) != -1) {
    cell::cellAudioPortStop(*(int *)(param_1 + 100));
    cell::cellAudioPortClose(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x9c) == '\0') {
    cell::cellAudioQuit();
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(puVar1 + -0x7fe0);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar2 = FUN_00648edc(param_1);
  return uVar2;
}



//==== 0064acbc  ns=Global  size=0x468
// sig: undefined FUN_0064acbc(void)
// callers(0): 
// callees(4): 005dc924 FUN_005dc924; 00641910 FUN_00641910; 00650744 sys::sys_ppu_thread_exit; 08000093 syscall::syscall_sys_time_get_timebase_frequency
// strings: 00675e00: 'BRB DRIVER: ! EVENT QUEUE FULL -> CLIENT THREAD FALLING BEHIND !'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0064acbc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar15;
  ulonglong uVar16;
  double dVar17;
  uint uStack00000008;
  
  puVar6 = PTR_PTR_0071b09c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar7 = (ulonglong)((int)param_1[0x1d] >> 0x1f);
  uVar1 = param_1[0x1e];
  uVar2 = param_1[0xf];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(PTR_PTR_0071b09c + -0x7fe0);
  lVar4 = uVar7 - (uVar7 ^ param_1[0x1d]) << 0x20;
  uVar3 = param_1[0x15];
  dVar15 = (double)param_1[0x1f] * *(double *)(param_1 + 0x22);
  uVar7 = syscall::syscall_sys_time_get_timebase_frequency();
  dVar15 = (double)uVar7 * dVar15 * *(double *)(puVar6 + -0x7fd8);
  uVar7 = (ulonglong)dVar15;
  if (*(double *)(puVar6 + -0x7fc8) <= dVar15) {
    uVar7 = (longlong)(dVar15 - *(double *)(puVar6 + -0x7fc8)) ^ 0x8000000000000000;
  }
  uVar10 = 0xffffffff;
  uVar9 = 0xffffffff;
  do {
    uVar14 = *param_1;
    while( true ) {
      if ((uVar14 & 3) != 3) {
        sys::sys_ppu_thread_exit(1);
        return;
      }
      syscall::syscall_sys_time_get_timebase_frequency(uVar3);
      dVar17 = (double)(float)param_1[0x24];
      dVar15 = (double)FUN_005dc924((double)(float)((double)*(ulonglong *)param_1[0x1c] * dVar17));
      uVar14 = (uint)dVar15;
      iVar8 = 0;
      if (lVar4 < 0) {
        dVar15 = (double)FUN_005dc924((double)(float)(dVar17 * (double)*(ulonglong *)param_1[0x1d]))
        ;
        iVar8 = (int)dVar15;
      }
      if (uVar10 == 0xffffffff) {
        uVar9 = param_1[0x20] - 1 & iVar8 + param_1[0x1f];
        uVar10 = uVar14 + param_1[0x1f] & param_1[0x20] - 1;
      }
      iVar8 = -uVar10;
      if (uVar14 <= uVar10) {
        iVar8 = param_1[0x20] - uVar10;
      }
      uVar14 = uVar14 + iVar8;
      dVar15 = *(double *)(param_1 + 10);
      if (uVar14 < param_1[0x20]) {
        if (uVar14 != 0) {
          uVar11 = 1;
          uVar13 = 0;
          do {
            iVar8 = 0;
            uVar12 = uVar11;
            if (uVar14 - 1 == uVar13) {
              uVar12 = uVar11 | 2;
            }
            if (lVar4 < 0) {
              iVar8 = uVar9 * uVar1 * 8 + param_1[0x1b];
            }
            do {
              lVar5 = TBLr;
            } while ((int)lVar5 == 0);
            dVar17 = *(double *)(param_1 + 10);
            uVar16 = (ulonglong)dVar17;
            uVar13 = uVar13 + 1;
            uVar11 = uVar12 & 0xfffffffe;
            if (*(double *)(puVar6 + -0x7fc8) <= dVar17) {
              uVar16 = (longlong)(dVar17 - *(double *)(puVar6 + -0x7fc8)) ^ 0x8000000000000000;
            }
            (**(code **)param_1[1])
                      (param_1[0x1a] + uVar1 * uVar2 * 4 * uVar10,iVar8,param_1[0x1e],uVar16,
                       param_1[3],uVar12,uVar7 + lVar5);
            uVar10 = uVar10 + 1 & param_1[0x20] - 1;
            uVar9 = param_1[0x20] - 1 & uVar9 + 1;
            *(double *)(param_1 + 10) = *(double *)(param_1 + 10) + *(double *)(param_1 + 0x22);
          } while (uVar14 != uVar13);
        }
      }
      else {
        uVar14 = 0;
      }
      if ((param_1[0x16] == 0xffffffff) || (uVar14 == 0)) break;
      uVar11 = (ulonglong)dVar15;
      if (*(double *)(puVar6 + -0x7fc8) <= dVar15) {
        uVar11 = (longlong)(dVar15 - *(double *)(puVar6 + -0x7fc8)) ^ 0x8000000000000000;
      }
      iVar8 = syscall::syscall_sys_time_get_timebase_frequency(param_1[0x16],uVar14,uVar11);
      if (iVar8 == 0) break;
      FUN_00641910(2,*(undefined4 *)(puVar6 + -0x7fd0));
      uVar14 = *param_1;
    }
  } while( true );
}



//==== 0064b124  ns=Global  size=0x52c
// sig: undefined FUN_0064b124(void)
// callers(1): 00642a50 FUN_00642a50
// callees(8): 00641910 FUN_00641910; 00648e20 FUN_00648e20; 0064a780 FUN_0064a780; 0064f4a4 cell::cellSysmoduleLoadModule; 0064fdc4 cell::cellAudioInit; 0064fe04 cell::cellAudioGetPortConfig; 0064fe24 cell::cellAudioPortStart; 0064fe44 cell::cellAudioPortOpen
// strings: 00675f50: 'brbDriver_Initialize(): HARD CODED SAMPLERATE ( %d Hz ).' | 00675f10: 'brbDriver_Initialize(): NUM CHANNELS ( %d ) CLAMPED TO %d.' | 00675f90: 'brbDriver::Initialize(): cellAudioInit() has already been called!' | 00675e90: 'brbDriver_Initialize(): YOUR RECEIVER MIGHT CURRENTLY BE OFF!' | 00675fd8: 'brbDriver::Initialize(): cellAudioInit failed with error 0x%X' | 00675e48: 'cellSysmoduleLoadModule(CELL_SYSMODULE_AUDIO) failed with error 0x%x' | 00675ed0: 'brbDriver_Initialize() INSUFFICIENT NUM CHANNELS ( %d )!.'

undefined4 FUN_0064b124(int param_1,undefined8 param_2,uint *param_3)

{
  double dVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar14;
  double dVar15;
  double dVar16;
  uint uStack00000008;
  undefined1 local_f0 [32];
  undefined4 local_d0 [7];
  undefined4 local_b4;
  
  puVar3 = PTR_PTR_0071b09c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar4 = cell::cellSysmoduleLoadModule(0x11);
  if (iVar4 != 0) {
    FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fc0),iVar4);
    return 0xffffffff;
  }
  uVar5 = FUN_0064a780(param_1,param_3[7] & 1,param_3[7],param_3[1]);
  if (uVar5 == 0) {
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fbc));
  }
  uVar7 = *param_3;
  if (uVar7 < 2) {
    FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fb8),uVar7);
    return 0xffffffff;
  }
  if ((uVar5 == 0) || (uVar7 <= uVar5)) {
    uVar5 = param_3[4];
    if (uVar5 != 48000) goto LAB_0064b1f8;
  }
  else {
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fb4),uVar7,uVar5);
    *param_3 = uVar5;
    if (param_3[4] == 48000) {
      uVar5 = 48000;
    }
    else {
LAB_0064b1f8:
      uVar5 = 48000;
      FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fb0),48000);
      param_3[4] = 48000;
    }
  }
  uVar7 = param_3[3];
  uVar6 = (ulonglong)uVar7;
  uVar12 = uVar6;
  if ((uVar7 & -uVar7) == uVar7) {
LAB_0064b420:
    fVar9 = *(float *)(puVar3 + -0x7f9c);
    param_3[3] = (uint)uVar12;
    fVar2 = *(float *)(puVar3 + -0x7f94);
    if (0x7f < uVar12) {
      if (0x200 < uVar12) {
        uVar12 = 0x200;
      }
      param_3[3] = (uint)uVar12;
      dVar15 = (double)uVar12;
      dVar16 = (double)(float)(dVar15 * (double)*(float *)(puVar3 + -0x7f8c));
      dVar1 = (double)param_3[2] * dVar16;
      goto joined_r0x0064b498;
    }
  }
  else {
    uVar8 = 2;
    lVar14 = 0x1f;
    if (uVar7 == 0) goto LAB_0064b420;
    do {
      if (uVar6 < uVar8) {
        uVar12 = (uVar8 << 0x20) >> 0x21;
        if ((uVar8 - uVar6 & 0xffffffff) <= (uVar8 << 0x20) >> 0x22) {
          uVar12 = uVar8;
        }
        goto LAB_0064b420;
      }
      uVar8 = (uVar8 & 0x7fffffff) << 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar9 = *(float *)(puVar3 + -0x7f9c);
    fVar2 = *(float *)(puVar3 + -0x7f94);
    param_3[3] = (uint)uVar8;
  }
  dVar16 = (double)fVar2;
  dVar15 = (double)fVar9;
  param_3[3] = 0x80;
  dVar1 = (double)param_3[2] * dVar16;
joined_r0x0064b498:
  if (((longlong)dVar1 & 0xffffffffU) < 9) {
    fVar9 = 2048.0;
    FUN_00648e20(param_1,8,*param_3,8,0x100,uVar5);
    iVar4 = cell::cellAudioInit();
  }
  else {
    fVar9 = 8192.0;
    FUN_00648e20(param_1,8,*param_3,0x20,0x100,uVar5);
    iVar4 = cell::cellAudioInit();
  }
  if (iVar4 != 0) {
    if (iVar4 != -0x7fcef8ff) {
      FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fa8),iVar4);
      return 0xfffffffb;
    }
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fac));
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  uVar5 = param_3[7];
  uVar12 = 0;
  puVar13 = (undefined4 *)(param_1 + 0x60);
  puVar10 = (undefined4 *)(param_1 + 0x68);
  puVar11 = (undefined4 *)(param_1 + 0x70);
  do {
    uVar12 = uVar12 + 1;
    iVar4 = cell::cellAudioPortOpen(local_f0,puVar13);
    if ((iVar4 != 0) || (iVar4 = cell::cellAudioGetPortConfig(*puVar13,local_d0), iVar4 != 0)) {
      return 0xfffffffb;
    }
    iVar4 = cell::cellAudioPortStart(*puVar13);
    if (iVar4 != 0) {
      return 0xfffffffb;
    }
    *puVar10 = local_b4;
    *puVar11 = local_d0[0];
    puVar13 = (undefined4 *)(param_1 + 100);
    puVar10 = (undefined4 *)(param_1 + 0x6c);
    puVar11 = (undefined4 *)(param_1 + 0x74);
  } while ((uVar12 & 0xffffffff) <
           (2 - ((ulonglong)(LZCOUNT(uVar5 & 0x10) << 0x20) >> 0x25) & 0xffffffff));
  *(uint *)(param_1 + 0x78) = param_3[3];
  *(int *)(param_1 + 0x80) = (int)(longlong)((double)fVar9 / dVar15);
  uVar5 = param_3[2];
  uVar7 = 1;
  if ((uVar5 != 0) &&
     (uVar12 = (longlong)((double)fVar9 / dVar15) - 1, uVar7 = uVar5,
     (uVar12 & 0xffffffff) < (ulonglong)uVar5)) {
    uVar7 = (uint)uVar12;
  }
  fVar9 = *(float *)(puVar3 + -0x7fa4);
  fVar2 = *(float *)(puVar3 + -0x7f84);
  *(uint *)(param_1 + 0x7c) = uVar7;
  *(uint *)(param_1 + 0x94) = param_3[5];
  *(uint *)(param_1 + 0x98) = param_3[6];
  *(float *)(param_1 + 0x90) = (float)((double)fVar2 / dVar16);
  *(double *)(param_1 + 0x88) =
       ((double)*(uint *)(param_1 + 0x78) * (double)fVar9) / (double)*(uint *)(param_1 + 0x14);
  return 0;
}



//==== 0064b650  ns=Global  size=0x2d4
// sig: undefined FUN_0064b650(void)
// callers(1): 00642a50 FUN_00642a50
// callees(3): 00648e98 FUN_00648e98; 00650524 sys::sys_ppu_thread_create; 08000080 syscall::syscall_sys_event_queue_create
// strings: 00676018: 'brbdq' (raw) | 00676019: 'rbdq' (raw) | 00676020: 'brbDriver' | 00676030: 'brbcq' (raw) | 00676031: 'rbcq' (raw) | 00676038: 'brbClient'

int FUN_0064b650(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar5;
  ulonglong uVar6;
  uint uStack00000008;
  undefined1 local_60 [40];
  
  puVar1 = PTR_PTR_0071b09c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_00648e98(param_1,param_2,param_3,param_4);
  iVar2 = syscall::syscall_sys_event_queue_create(param_1 + 0x50);
  iVar4 = -9;
  if (iVar2 == 0) {
    iVar2 = syscall::syscall_sys_event_queue_create(param_1 + 0x54,local_60,0,4);
    iVar4 = -9;
    if (iVar2 == 0) {
      iVar2 = syscall::syscall_sys_event_queue_create
                        (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),0,0,0);
      iVar4 = -9;
      if (iVar2 == 0) {
        iVar2 = sys::sys_ppu_thread_create
                          (param_1 + 0x40,*(undefined4 *)(puVar1 + -0x7f78),param_1,
                           *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),1,
                           *(undefined4 *)(puVar1 + -0x7f74));
        iVar4 = -9;
        if (iVar2 == 0) {
          if (param_4 != 0) {
            iVar2 = syscall::syscall_sys_event_queue_create(param_1 + 0x58,1,0xb00bb00b);
            if (iVar2 != 0) {
              return -9;
            }
            iVar2 = syscall::syscall_sys_event_queue_create(param_1 + 0x5c,local_60,0,4);
            if (iVar2 != 0) {
              return -9;
            }
            iVar2 = syscall::syscall_sys_event_queue_create
                              (*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
            if (iVar2 != 0) {
              return -9;
            }
            iVar2 = sys::sys_ppu_thread_create
                              (param_1 + 0x48,*(undefined4 *)(puVar1 + -0x7f6c),param_1,
                               *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),1,
                               *(undefined4 *)(puVar1 + -0x7f68));
            if (iVar2 != 0) {
              return -9;
            }
          }
          dVar5 = *(double *)(param_1 + 0x88);
          uVar6 = (ulonglong)dVar5;
          if (*(double *)(puVar1 + -0x7fc8) <= dVar5) {
            uVar6 = (longlong)(dVar5 - *(double *)(puVar1 + -0x7fc8)) ^ 0x8000000000000000;
          }
          uVar3 = syscall::syscall_sys_event_queue_create(*(undefined4 *)(param_1 + 0x50),0,uVar6);
          iVar4 = ((int)((((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) + -1) >> 0x1f & 9U) -
                  9;
        }
      }
    }
  }
  return iVar4;
}



//==== 0064b924  ns=Global  size=0xfc
// sig: undefined FUN_0064b924(void)
// callers(0): 
// callees(2): 00650744 sys::sys_ppu_thread_exit; 08000082 syscall::syscall_sys_event_queue_receive

void FUN_0064b924(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[4];
  uVar2 = param_1[0x1e];
  uVar3 = param_1[0x17];
  while ((*param_1 & 3) == 3) {
    iVar4 = 0;
    syscall::syscall_sys_event_queue_receive(uVar3);
    if (iVar4 != 0) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        (**(code **)param_1[2])(uVar2,uVar1);
      } while (iVar4 != iVar5);
    }
  }
  sys::sys_ppu_thread_exit(1);
  return;
}



//==== 0064ba20  ns=Global  size=0x80
// sig: undefined FUN_0064ba20(void)
// callers(1): 00642770 FUN_00642770
// callees(0): 

undefined8 FUN_0064ba20(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  piVar3 = (int *)(param_1 + 0x40c);
  lVar5 = 0x20;
  iVar4 = 0;
  iVar2 = 0;
  do {
    if (*piVar3 != 0) {
      if (iVar4 == param_3) break;
      iVar1 = piVar3[1];
      iVar4 = iVar4 + 1;
      *param_2 = *piVar3;
      param_2[1] = iVar1;
      param_2[2] = iVar2 * 0x2c + param_1 + 0x418;
      param_2 = param_2 + 3;
    }
    piVar3 = piVar3 + 0xb;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + 1;
  } while (lVar5 != 0);
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return 0;
}



//==== 0064baa0  ns=Global  size=0x38
// sig: undefined FUN_0064baa0(void)
// callers(6): 0064bb10 FUN_0064bb10; 0064bbf8 FUN_0064bbf8; 0064bc5c FUN_0064bc5c; 0064bdec FUN_0064bdec; 0064c168 FUN_0064c168; 0064c764 FUN_0064c764
// callees(0): 

ulonglong FUN_0064baa0(uint *param_1)

{
  return (((ulonglong)*param_1 & 0x1fffe00) << 7 | (ulonglong)(param_1[1] >> 9) & 0xffff) << 0x20 |
         ((ulonglong)param_1[2] & 0x1fffe00) << 7 | (ulonglong)(param_1[3] >> 9) & 0xffff;
}



//==== 0064bad8  ns=Global  size=0x38
// sig: undefined FUN_0064bad8(void)
// callers(1): 0064bbf0 FUN_0064bbf0
// callees(0): 

int * FUN_0064bad8(int *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*param_1 == param_2) {
      return param_1;
    }
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0xb;
  } while (lVar1 != 0);
  return (int *)0x0;
}



//==== 0064bb10  ns=Global  size=0xa4
// sig: undefined FUN_0064bb10(void)
// callers(6): 0064bbb4 FUN_0064bbb4; 0064bbf8 FUN_0064bbf8; 0064bc5c FUN_0064bc5c; 0064bcac FUN_0064bcac; 0064bce0 FUN_0064bce0; 0064bdec FUN_0064bdec
// callees(1): 0064baa0 FUN_0064baa0

int * FUN_0064bb10(int *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  while( true ) {
    piVar3 = piVar2 + 0xb;
    if ((*piVar2 != 0) && (lVar1 = FUN_0064baa0(*piVar2), lVar1 == param_2)) break;
    piVar2 = piVar3;
    if (piVar3 == param_1 + 0x160) {
      return (int *)0x0;
    }
  }
  return piVar2;
}



//==== 0064bbb4  ns=Global  size=0x3c
// sig: undefined FUN_0064bbb4(void)
// callers(0): 
// callees(1): 0064bb10 FUN_0064bb10

uint FUN_0064bbb4(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0064bb10(param_1 + 0x40c);
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}



//==== 0064bbf0  ns=Global  size=0x8
// sig: undefined FUN_0064bbf0(void)
// callers(1): 0064bdec FUN_0064bdec
// callees(1): 0064bad8 FUN_0064bad8

void FUN_0064bbf0(undefined8 param_1)

{
  FUN_0064bad8(param_1,0);
  return;
}



//==== 0064bbf8  ns=Global  size=0x64
// sig: undefined FUN_0064bbf8(void)
// callers(2): 0064c168 FUN_0064c168; 0064c428 FUN_0064c428
// callees(2): 0064baa0 FUN_0064baa0; 0064bb10 FUN_0064bb10

void FUN_0064bbf8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_0064baa0(param_2);
    puVar3 = (undefined4 *)FUN_0064bb10(param_1,uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = puVar3[2];
      puVar3[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        *puVar3 = 0;
      }
    }
  }
  return;
}



//==== 0064bc5c  ns=Global  size=0x50
// sig: undefined FUN_0064bc5c(void)
// callers(3): 0064c168 FUN_0064c168; 0064c428 FUN_0064c428; 0064c764 FUN_0064c764
// callees(2): 0064baa0 FUN_0064baa0; 0064bb10 FUN_0064bb10

uint FUN_0064bc5c(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0064baa0(param_2);
  uVar2 = FUN_0064bb10(param_1,uVar1);
  return ((int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f ^ uVar2) >> 0x1f;
}



//==== 0064bcac  ns=Global  size=0x34
// sig: undefined FUN_0064bcac(void)
// callers(1): 0064c764 FUN_0064c764
// callees(1): 0064bb10 FUN_0064bb10

undefined4 FUN_0064bcac(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0064bb10();
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
  }
  return uVar1;
}



//==== 0064bce0  ns=Global  size=0x84
// sig: undefined FUN_0064bce0(void)
// callers(0): 
// callees(2): 005cccec libc::strcpy; 0064bb10 FUN_0064bb10

undefined4
FUN_0064bce0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0064bb10();
  if (iVar1 != 0) {
    libc::strcpy(param_3,iVar1 + 0xc,param_4);
    return 1;
  }
  *param_3 = 0;
  return 0;
}



//==== 0064bd64  ns=Global  size=0x88
// sig: undefined FUN_0064bd64(void)
// callers(1): 0064c764 FUN_0064c764
// callees(1): 00641910 FUN_00641910
// strings: 00676048: 'brbPluginRegistry::FindFreeFileSlot(): Unable to find a free slot.  Maximum (%d) already reached!'

int FUN_0064bd64(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  piVar2 = (int *)(param_1 + 0x990);
  iVar3 = 0;
  lVar4 = 0x20;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 6;
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b0a0 + -0x8000),0x20);
  return -1;
}



//==== 0064bdec  ns=Global  size=0x1d0
// sig: undefined FUN_0064bdec(void)
// callers(1): 0064c428 FUN_0064c428
// callees(9): 004f4e78 FUN_004f4e78; 004f4f84 FUN_004f4f84; 004f539c FUN_004f539c; 004f5898 FUN_004f5898; 005cccec libc::strcpy; 00641910 FUN_00641910; 0064baa0 FUN_0064baa0; 0064bb10 FUN_0064bb10; 0064bbf0 FUN_0064bbf0
// strings: 00676180: '[brbPluginPackMgr::RegisterPluginPack]: "%s" is not a valid SPU module' | 006761c8: '[brbPluginPackMgr::RegisterPluginPack]: module at 0x%08X is not a valid SPU module' | 006760b0: 'No name' | 006760b8: '[brbPluginPackMgr::RegisterPluginPack] Unable to register module: %s.  No remaining slots!!' | 00676118: '[brbPluginPackMgr::RegisterPluginPack] Unable to register module at 0x%08X.  No remaining slots!!'

undefined4 FUN_0064bdec(undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar6;
  undefined1 auStack_60 [24];
  
  puVar1 = PTR_PTR_0071b0a0;
  FUN_004f5898(auStack_60,param_2,param_4,param_3);
  cVar5 = FUN_004f4e78(auStack_60);
  if (cVar5 == '\0') {
    FUN_004f4f84(auStack_60);
    if (param_3 == 0) {
      uVar6 = 0;
      FUN_00641910(0,*(undefined4 *)(puVar1 + -0x7fec),param_2);
    }
    else {
      uVar6 = 0;
      FUN_00641910(0,*(undefined4 *)(puVar1 + -0x7ff0),param_3);
    }
  }
  else {
    uVar2 = FUN_0064baa0(param_2);
    iVar3 = FUN_0064bb10(param_1,uVar2);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_0064bbf0(param_1);
      if (puVar4 == (undefined4 *)0x0) {
        if (param_3 == 0) {
          uVar6 = 0;
          FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff4),param_2);
        }
        else {
          uVar6 = 0;
          FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff8),param_3);
        }
      }
      else {
        puVar4[1] = (int)param_4;
        puVar4[2] = 1;
        *puVar4 = (int)param_2;
        if (param_3 == 0) {
          param_3 = *(int *)(puVar1 + -0x7ffc);
        }
        uVar6 = 1;
        libc::strcpy(puVar4 + 3,param_3,0x20);
      }
    }
    else {
      uVar6 = 1;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
  }
  FUN_004f539c(auStack_60);
  return uVar6;
}



//==== 0064bfbc  ns=Global  size=0xd4
// sig: undefined FUN_0064bfbc(void)
// callers(1): 0064e064 FUN_0064e064
// callees(1): 00648f2c FUN_00648f2c

undefined4
FUN_0064bfbc(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 local_40 [24];
  
  uVar5 = 0xfffffff8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    uVar4 = FUN_00648f2c(param_1,local_40);
    iVar3 = (int)((uVar4 & 0x3fffffff) << 2);
    uVar5 = 0xffffffff;
    if ((int)uVar4 != -1) {
      uVar5 = 0;
      uVar1 = *(undefined4 *)(param_1 + iVar3 + 0xc90);
      *param_4 = *(undefined4 *)(param_1 + iVar3 + 0xe90);
      uVar2 = *(undefined4 *)(param_1 + iVar3 + 0x1090);
      *param_3 = uVar1;
      *param_5 = uVar2;
    }
  }
  return uVar5;
}



//==== 0064c090  ns=Global  size=0xd8
// sig: undefined FUN_0064c090(void)
// callers(1): 0064c428 FUN_0064c428
// callees(2): 006493c0 FUN_006493c0; 0064e408 FUN_0064e408

int FUN_0064c090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = -8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    iVar1 = FUN_006493c0(param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = FUN_0064e408(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 0064c168  ns=Global  size=0x218
// sig: undefined FUN_0064c168(void)
// callers(2): 00642354 FUN_00642354; 0064c380 FUN_0064c380
// callees(4): 00648fb0 FUN_00648fb0; 0064baa0 FUN_0064baa0; 0064bbf8 FUN_0064bbf8; 0064bc5c FUN_0064bc5c

undefined4 FUN_0064c168(int param_1,char *param_2)

{
  bool bVar1;
  char cVar3;
  longlong lVar2;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  
  uVar4 = 0xfffffff8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    if ((((*param_2 == '\x7f') && (param_2[1] == 'E')) && (param_2[2] == 'L')) &&
       (param_2[3] == 'F')) {
      param_2 = param_2 + 0x80;
    }
    iVar5 = param_1 + 0x40c;
    cVar3 = FUN_0064bc5c(iVar5,param_2);
    uVar4 = 0xfffffff9;
    if (cVar3 != '\0') {
      FUN_0064bbf8(iVar5,param_2);
      cVar3 = FUN_0064bc5c(iVar5,param_2);
      if (cVar3 == '\0') {
        plVar7 = (longlong *)(param_1 + 0x998);
        lVar2 = FUN_0064baa0(param_2);
        iVar5 = 0;
        puVar6 = (undefined4 *)(param_1 + 0x990);
        do {
          if (*plVar7 == lVar2) {
            if (*(char *)(plVar7 + 1) != '\0') {
              (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x1290) + 4))
                        (*(int **)(param_1 + 0x1290),*(undefined4 *)(plVar7 + -1),0xfff0107,0,0);
            }
            *(undefined8 *)(puVar6 + 2) = 0;
            *puVar6 = 0;
            *(undefined1 *)(puVar6 + 4) = 0;
          }
          bVar1 = iVar5 != 0x1f;
          puVar6 = puVar6 + 6;
          plVar7 = plVar7 + 3;
          iVar5 = iVar5 + 1;
        } while (bVar1);
        puVar6 = (undefined4 *)(param_1 + 0xc90);
        iVar5 = 0;
        do {
          if ((char *)*puVar6 == param_2) {
            FUN_00648fb0(param_1,iVar5);
            puVar6[0x100] = 0;
            *puVar6 = 0;
            puVar6[0x80] = 0;
          }
          bVar1 = iVar5 != 0x7f;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + 1;
        } while (bVar1);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}



//==== 0064c380  ns=Global  size=0xa8
// sig: undefined FUN_0064c380(void)
// callers(1): 00642318 FUN_00642318
// callees(1): 0064c168 FUN_0064c168

undefined4 FUN_0064c380(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0xfffffff8;
  iVar3 = param_2 * 0x20 + (param_2 & 0x1fffffff) * -8 + 0x990;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    uVar1 = FUN_0064c168(param_1,*(undefined4 *)(param_1 + iVar3));
    puVar2 = (undefined4 *)(param_1 + iVar3);
    *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + -1;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = 0;
  }
  return uVar1;
}



//==== 0064c428  ns=Global  size=0x33c
// sig: undefined FUN_0064c428(void)
// callers(2): 006423dc FUN_006423dc; 0064c764 FUN_0064c764
// callees(7): 00641910 FUN_00641910; 00648fb0 FUN_00648fb0; 00649110 FUN_00649110; 0064bbf8 FUN_0064bbf8; 0064bc5c FUN_0064bc5c; 0064bdec FUN_0064bdec; 0064c090 FUN_0064c090
// strings: 006762c8: 'BRBPLUG' | 0064c5e8: '}<Kx9J' (raw) | 0064c634: '}XSx{7' (raw) | 00676290: "brbPluginRegistry: No plugin classes found in '%s'" | 00676220: "[brbPluginRegistry::RegisterPluginPackFromMem]: Failed to register plugin class '%s' in plugin pack '%s'!"

/* WARNING: Type propagation algorithm not settling */

int FUN_0064c428(int param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar6;
  longlong lVar5;
  char cVar8;
  char cVar9;
  int iVar7;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  int local_d0 [20];
  
  puVar4 = PTR_PTR_0071b0a0;
  iVar15 = -8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    pcVar10 = (char *)param_2;
    if ((((*pcVar10 == '\x7f') && (pcVar10[1] == 'E')) && (pcVar10[2] == 'L')) &&
       (pcVar10[3] == 'F')) {
      param_2 = param_2 + 0x80;
      param_3 = param_3 - 0x80;
    }
    iVar6 = param_1 + 0x40c;
    uVar2 = param_2 & 0xffffffff;
    cVar8 = FUN_0064bc5c(iVar6,uVar2);
    iVar15 = -1;
    cVar9 = FUN_0064bdec(iVar6,uVar2,param_4,param_3 & 0xffffffff);
    if (cVar9 != '\0') {
      if (cVar8 == '\0') {
        uVar1 = (param_3 << 0x20) >> 0x23;
        iVar15 = 0;
        iVar13 = 0;
        local_d0[0x10] = 0;
        local_d0[1] = 0;
        local_d0[2] = 0;
        local_d0[3] = 0;
        local_d0[4] = 0;
        local_d0[5] = 0;
        local_d0[6] = 0;
        local_d0[7] = 0;
        local_d0[8] = 0;
        local_d0[9] = 0;
        local_d0[10] = 0;
        local_d0[0xb] = 0;
        local_d0[0xc] = 0;
        local_d0[0xd] = 0;
        local_d0[0xe] = 0;
        local_d0[0xf] = 0;
        for (uVar11 = 0; (uVar11 & 0xffffffff) < uVar1; uVar11 = uVar11 + 1) {
          uVar12 = param_2 + (uVar11 & 0x1fffffff) * 8;
          uVar16 = uVar1 - uVar11 & 0xffffffff;
          lVar5 = *(longlong *)uVar12;
          while (lVar5 != **(longlong **)(puVar4 + -0x7fe0)) {
            uVar12 = uVar12 + 8;
            uVar11 = uVar11 + 1;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0064c5fc;
            lVar5 = *(longlong *)uVar12;
          }
          iVar7 = FUN_0064c090(param_1,uVar12 & 0xffffffff,uVar2,param_3 & 0xffffffff);
          if ((iVar7 < 0) || (iVar7 = FUN_00649110(param_1,uVar12 & 0xffffffff,local_d0), iVar7 < 0)
             ) {
            FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fe4),uVar12 + 8 & 0xffffffff,param_4);
            if (0 < iVar15) {
              iVar13 = 0;
              piVar14 = local_d0;
              do {
                piVar14 = piVar14 + 1;
                iVar13 = iVar13 + 1;
                FUN_00648fb0(param_1,*piVar14);
              } while (iVar13 != iVar15);
            }
            FUN_0064bbf8(iVar6,uVar2);
            return iVar7;
          }
          iVar7 = local_d0[0] * 4;
          iVar3 = iVar13 + 4;
          iVar15 = iVar15 + 1;
          iVar13 = iVar13 + 4;
          *(int *)((int)local_d0 + iVar3) = local_d0[0];
          *(int *)(param_1 + iVar7 + 0xc90) = (int)param_2;
          *(int *)(param_1 + iVar7 + 0x1090) = ((int)uVar12 - (int)param_2) + 0x4000;
          *(int *)(param_1 + iVar7 + 0xe90) = (int)param_3;
        }
LAB_0064c5fc:
        if (iVar15 == 0) {
          FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fdc),param_4);
          FUN_0064bbf8(iVar6,uVar2);
          return -1;
        }
      }
      iVar15 = 0;
    }
  }
  return iVar15;
}



//==== 0064c764  ns=Global  size=0x3fc
// sig: undefined FUN_0064c764(void)
// callers(1): 00642390 FUN_00642390
// callees(13): 005c4f10 FUN_005c4f10; 005c52f0 FUN_005c52f0; 005c5364 FUN_005c5364; 005c5568 FUN_005c5568; 005c55dc FUN_005c55dc; 005c8700 FUN_005c8700; 005cd198 FUN_005cd198; 00641910 FUN_00641910; 0064baa0 FUN_0064baa0; 0064bc5c FUN_0064bc5c; 0064bcac FUN_0064bcac; 0064bd64 FUN_0064bd64; 0064c428 FUN_0064c428
// strings: 006762d0: '.elf' (raw) | 006762e0: '%s/%s%s' | 006762e8: '%s%s' (raw) | 006762f8: "[brbPluginRegistry::RegisterPluginPackFromFile] Unable to open file '%s'."

int FUN_0064c764(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar10;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar9;
  int iVar11;
  undefined1 auStack_e0 [136];
  
  puVar2 = PTR_PTR_0071b0a0;
  cVar10 = **(char **)(PTR_PTR_0071b0a0 + -0x7fe8);
  *param_4 = -1;
  if (cVar10 == '\0') {
    return -8;
  }
  if (0x1f < *(uint *)(param_1 + 0x1294)) {
    return -1;
  }
  uVar5 = FUN_005c8700(param_3,*(undefined4 *)(puVar2 + -0x7fd8));
  iVar6 = (((int)uVar5 >> 0x1f ^ uVar5) - ((int)uVar5 >> 0x1f)) + -1;
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x408);
    if (param_2 == 0) {
      if (iVar6 < 0) {
        uVar9 = *(undefined4 *)(puVar2 + -0x7fd8);
      }
      else {
        uVar9 = *(undefined4 *)(puVar2 + -0x7fd4);
      }
      FUN_005cd198(auStack_e0,0x80,*(undefined4 *)(puVar2 + -0x7fcc),param_3,uVar9);
      goto LAB_0064c87c;
    }
    if (iVar6 < 0) {
      uVar9 = *(undefined4 *)(puVar2 + -0x7fd8);
    }
    else {
      uVar9 = *(undefined4 *)(puVar2 + -0x7fd4);
    }
  }
  else if (iVar6 < 0) {
    uVar9 = *(undefined4 *)(puVar2 + -0x7fd8);
  }
  else {
    uVar9 = *(undefined4 *)(puVar2 + -0x7fd4);
  }
  FUN_005cd198(auStack_e0,0x80,*(undefined4 *)(puVar2 + -0x7fd0),param_2,param_3,uVar9);
LAB_0064c87c:
  iVar6 = FUN_005c52f0(auStack_e0,*(undefined4 *)(puVar2 + -0x7fc8));
  if (iVar6 == 0) {
    iVar7 = -1;
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fc4),auStack_e0);
  }
  else {
    FUN_005c5568(iVar6,0,2);
    iVar7 = FUN_005c55dc(iVar6);
    FUN_005c5568(iVar6,0x80,0);
    iVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(param_1 + 0x1290))
                      (*(undefined4 **)(param_1 + 0x1290),iVar7 + 0x37fU & 0xfffffc00,0xfff0107,0,0)
    ;
    if (iVar8 == 0) {
      iVar7 = -6;
      FUN_005c4f10(iVar6);
    }
    else {
      FUN_005c5364(iVar8,1,iVar7 + -0x80,iVar6);
      FUN_005c4f10(iVar6);
      cVar10 = FUN_0064bc5c(param_1 + 0x40c,iVar8);
      iVar7 = FUN_0064c428(param_1,iVar8,iVar7 + -0x80,param_3);
      uVar3 = FUN_0064bd64(param_1);
      if ((int)uVar3 == -1) {
        iVar7 = -1;
      }
      else if (-1 < iVar7) {
        *param_4 = (int)uVar3;
        uVar4 = FUN_0064baa0(iVar8);
        if (cVar10 == '\0') {
          iVar6 = (int)((uVar3 & 0x7ffffff) << 5);
          iVar11 = (int)((uVar3 & 0x1fffffff) << 3);
          *(undefined1 *)(param_1 + (iVar6 - iVar11) + 0x9a0) = 1;
          *(int *)(param_1 + (iVar6 - iVar11) + 0x990) = iVar8;
        }
        else {
          iVar6 = (int)((uVar3 & 0x7ffffff) << 5);
          iVar11 = (int)((uVar3 & 0x1fffffff) << 3);
          uVar9 = FUN_0064bcac(param_1 + 0x40c,uVar4);
          piVar1 = *(int **)(param_1 + 0x1290);
          *(undefined1 *)(param_1 + (iVar6 - iVar11) + 0x9a0) = 0;
          *(undefined4 *)(param_1 + (iVar6 - iVar11) + 0x990) = uVar9;
          (*(code *)**(undefined4 **)(*piVar1 + 4))(piVar1,iVar8,0xfff0107,0,0);
        }
        *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + 1;
        *(undefined8 *)(param_1 + (iVar6 - iVar11) + 0x998) = uVar4;
        return iVar7;
      }
      (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x1290) + 4))
                (*(int **)(param_1 + 0x1290),iVar8,0xfff0107,0,0);
    }
  }
  return iVar7;
}



//==== 0064cb60  ns=Global  size=0x5c
// sig: undefined FUN_0064cb60(void)
// callers(1): 00642a50 FUN_00642a50
// callees(1): 006492d0 FUN_006492d0

undefined8 FUN_0064cb60(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b0a0;
  FUN_006492d0();
  puVar1 = *(undefined1 **)(puVar2 + -0x7fe8);
  *(undefined4 *)(param_1 + 0x1290) = param_2;
  *puVar1 = 1;
  return 0;
}



//==== 0064cbbc  ns=Global  size=0x130
// sig: undefined FUN_0064cbbc(void)
// callers(1): 006427e8 FUN_006427e8
// callees(1): 006492a4 FUN_006492a4

void FUN_0064cbbc(int param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  pcVar3 = *(char **)(PTR_PTR_0071b0a0 + -0x7fe8);
  if (*pcVar3 != '\0') {
    pcVar7 = (char *)(param_1 + 0x9a0);
    iVar5 = 0;
    puVar6 = (undefined4 *)(param_1 + 0x990);
    do {
      while( true ) {
        pcVar4 = pcVar7 + -0x10;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 0x18;
        if (cVar2 == '\0') break;
        (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x1290) + 4))
                  (*(int **)(param_1 + 0x1290),*(undefined4 *)pcVar4,0xfff0107,0,0);
        bVar1 = iVar5 == 0x1f;
        iVar5 = iVar5 + 1;
        *(undefined8 *)(puVar6 + 2) = 0;
        *puVar6 = 0;
        *(undefined1 *)(puVar6 + 4) = 0;
        puVar6 = puVar6 + 6;
        if (bVar1) goto LAB_0064cca4;
      }
      bVar1 = iVar5 != 0x1f;
      puVar6 = puVar6 + 6;
      iVar5 = iVar5 + 1;
    } while (bVar1);
LAB_0064cca4:
    *pcVar3 = '\0';
  }
  FUN_006492a4(param_1);
  return;
}



//==== 0064ccec  ns=Global  size=0x9c
// sig: undefined FUN_0064ccec(void)
// callers(0): 
// callees(0): 

void FUN_0064ccec(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[1] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x4d] = 0;
  param_1[0x43] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x48] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  return;
}



//==== 0064cd88  ns=Global  size=0x28
// sig: undefined FUN_0064cd88(void)
// callers(2): 0064cdb0 FUN_0064cdb0; 0064e064 FUN_0064e064
// callees(0): 

uint FUN_0064cd88(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x100;
  if (1 < *(uint *)(param_1 + 0x230)) {
    uVar1 = (*(uint *)(param_1 + 0x230) + 1 & 0xffffffe) * 0x10 + 0x11f & 0xffffff80;
  }
  return uVar1;
}



//==== 0064cdb0  ns=Global  size=0xb4
// sig: undefined FUN_0064cdb0(void)
// callers(1): 00641b58 FUN_00641b58
// callees(1): 0064cd88 FUN_0064cd88

int FUN_0064cdb0(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 != 0) {
    param_2 = (uint)(longlong)((float)param_2 * *(float *)(PTR_PTR_0071b0a4 + -0x8000));
  }
  uVar1 = *(uint *)(param_1 + 0x230);
  iVar2 = FUN_0064cd88(param_1);
  return ((int)(((longlong)(int)((param_2 + uVar1) - 1 & -uVar1) * (longlong)param_3 & 0xffffffffU)
               / (ulonglong)uVar1) * iVar2 + 0x3ffU & 0x7ffffc00) * 2 + 0x80;
}



//==== 0064ce64  ns=Global  size=0x14
// sig: undefined FUN_0064ce64(void)
// callers(1): 0064d340 FUN_0064d340
// callees(0): 

longlong FUN_0064ce64(int param_1,int param_2)

{
  return ((longlong)param_2 * (longlong)(param_1 << 3) + 0x3ffU & 0x7ffffc00) << 1;
}



//==== 0064ce78  ns=Global  size=0x10
// sig: undefined FUN_0064ce78(void)
// callers(1): 0064d340 FUN_0064d340
// callees(0): 

int FUN_0064ce78(int param_1,int param_2)

{
  return param_2 * param_1 * 8;
}



//==== 0064ce88  ns=Global  size=0xc
// sig: undefined FUN_0064ce88(void)
// callers(1): 00642a50 FUN_00642a50
// callees(0): 

undefined8 FUN_0064ce88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return 0;
}



//==== 0064ce94  ns=Global  size=0x10
// sig: undefined FUN_0064ce94(void)
// callers(1): 006427e8 FUN_006427e8
// callees(0): 

undefined8 FUN_0064ce94(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}



//==== 0064cea4  ns=Global  size=0x30
// sig: undefined FUN_0064cea4(void)
// callers(1): 00642648 FUN_00642648
// callees(0): 

undefined8 FUN_0064cea4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (int)(((ulonglong)*(uint *)(param_1 + 0x60) ^ 1) << 2) + 0x40);
  *(undefined4 *)(iVar1 + 0x28) = param_4;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  return 0;
}



//==== 0064ced4  ns=Global  size=0x48
// sig: undefined FUN_0064ced4(void)
// callers(1): 00641134 FUN_00641134
// callees(0): 

void FUN_0064ced4(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x70) = 1;
  puVar2 = (undefined8 *)
           (*(int *)(param_1 + 0x58) * 0x80 +
           *(int *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x40));
  *(undefined4 *)(puVar2 + 3) = param_3;
  *puVar2 = param_4;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  puVar2[1] = param_5;
  *(undefined4 *)((int)puVar2 + 0x14) = param_2;
  return;
}



//==== 0064cf1c  ns=Global  size=0x28
// sig: undefined FUN_0064cf1c(void)
// callers(1): 00641134 FUN_00641134
// callees(0): 

void FUN_0064cf1c(int param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



//==== 0064cf44  ns=Global  size=0x14c
// sig: undefined FUN_0064cf44(void)
// callers(1): 00641134 FUN_00641134
// callees(3): 004f14c8 idol_draw::CmdQueue_ResetCounters; 004f234c FUN_004f234c; 004f2cdc idol_draw::CmdQueue_ZeroCacheLines

void FUN_0064cf44(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)(param_1 + 0x54) & 1;
  cVar5 = FUN_004f234c(param_1 + 0x100,uVar4);
  if (cVar5 == '\0') {
    uVar4 = uVar4 ^ 1;
  }
  idol_draw::CmdQueue_ZeroCacheLines(param_1 + uVar4 * 0x14 + 0x120);
  idol_draw::CmdQueue_ResetCounters(param_1 + 0x100,uVar4);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  do {
    for (iVar3 = *(int *)(iVar1 + (int)lVar6 * 0x230); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      puVar2 = *(uint **)(iVar3 + 0x84);
      uVar4 = (*puVar2 >> 1) + puVar2[2];
      puVar2[3] = 0;
      puVar2[2] = uVar4;
      if ((int)(puVar2 + 0x20) + *puVar2 <= uVar4) {
        puVar2[2] = (uint)(puVar2 + 0x20);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return;
}



//==== 0064d090  ns=Global  size=0x2b0
// sig: undefined FUN_0064d090(void)
// callers(1): 006427e8 FUN_006427e8
// callees(4): 004f13c8 FUN_004f13c8; 004f19e8 FUN_004f19e8; 004f2a10 FUN_004f2a10; 004f2cd0 FUN_004f2cd0

undefined8 FUN_0064d090(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x40;
  FUN_004f19e8(piVar1);
  FUN_004f2a10(piVar1,0,param_1 + 0x48);
  FUN_004f2a10(piVar1,1,param_1 + 0x4d);
  FUN_004f2cd0(param_1 + 0x48);
  FUN_004f2cd0(param_1 + 0x4d);
  FUN_004f13c8(piVar1);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    if (param_1[0x12] != 0) {
      (*(code *)**(undefined4 **)(*piVar1 + 4))(piVar1,param_1[0x12],0xfff0147,0,0);
      param_1[0x12] = 0;
    }
    if (param_1[0x55] != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))
                ((int *)param_1[2],param_1[0x55],0xfff0147,0,0);
      param_1[0x55] = 0;
    }
    if (param_1[0xf] != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))
                ((int *)param_1[2],param_1[0xf],0xfff0147,0,0);
      param_1[0xf] = 0;
    }
    if (param_1[0x52] != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))
                ((int *)param_1[2],param_1[0x52],0xfff0147,0,0);
      param_1[0x52] = 0;
    }
    if (*param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))((int *)param_1[2],*param_1,0xfff0147,0,0)
      ;
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  param_1[0x1b] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x52] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[1] = -1;
  return 0;
}



//==== 0064d340  ns=Global  size=0x57c
// sig: undefined FUN_0064d340(void)
// callers(1): 00642a50 FUN_00642a50
// callees(7): 004f1c18 FUN_004f1c18; 004f1f60 FUN_004f1f60; 004f20b4 FUN_004f20b4; 004f33f8 FUN_004f33f8; 00641910 FUN_00641910; 0064ce64 FUN_0064ce64; 0064ce78 FUN_0064ce78
// strings: 006763b0: 'BrBDblBufWrkld' | 00676378: 'brbProc::Initialize(): RACK UNIT/JOB LIST ALLOC ERROR!' | 006763c0: 'brbProc::Initialize(): PROC CTX DATA ALLOC ERROR!' | 006763f8: 'brbProc::Initialize(): USER DATA ALLOC ERROR!' | 00676348: 'brbProc::Initialize(): JOB LIST ALLOC ERROR!' | 00676428: 'brbProc::Initialize(): GLOBAL DMA LIST ALLOC ERROR!'

undefined4
FUN_0064d340(uint *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,uint param_8)

{
  undefined *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint in_stack_00000074;
  undefined8 local_b0 [2];
  longlong local_a0;
  
  puVar1 = PTR_PTR_0071b0a4;
  local_a0 = (longlong)((float)(uint)param_2[1] * *(float *)(PTR_PTR_0071b0a4 + -0x8000));
  param_1[0x53] = (uint)(local_a0 + 2U);
  uVar3 = FUN_0064ce64(local_a0 + 2U & 0xffffffff,*(undefined4 *)(param_7 + 0x80));
  uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,uVar3 & 0xffffffff,0xfff0147,0,0);
  *param_1 = uVar4;
  if (uVar4 == 0) {
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff8));
    return 0xfffffffa;
  }
  if (**(char **)(puVar1 + -0x7ff4) != '\0') {
    uVar6 = FUN_0064ce78(param_1[0x53],*(undefined4 *)(param_7 + 0x80));
    uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,uVar6,0xfff0147,0,0);
    param_1[0x52] = uVar4;
    if (uVar4 == 0) {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff0));
      return 0xfffffffa;
    }
  }
  uVar4 = param_2[3];
  local_b0[0] = 0;
  uVar8 = 1;
  if ((uVar4 == 0) || (uVar8 = uVar4, uVar4 < 0x10)) {
    iVar9 = param_2[2];
    param_2[3] = uVar8;
  }
  else {
    iVar9 = param_2[2];
    uVar8 = 0xf;
    param_2[3] = 0xf;
  }
  if (iVar9 == -1) {
    iVar9 = 0;
    lVar10 = 8;
    do {
      puVar7 = (undefined1 *)((int)local_b0 + iVar9);
      iVar9 = iVar9 + 1;
      *puVar7 = (char)param_2[3];
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    if (5 < iVar9) {
      iVar9 = 5;
    }
    param_2[2] = iVar9;
    *(char *)((int)local_b0 + iVar9) = (char)uVar8;
  }
  puVar2 = param_1 + 0x40;
  uVar3 = (uVar3 << 0x20) >> 0x21;
  FUN_004f20b4(puVar2,param_1 + 0x20,*(undefined4 *)(puVar1 + -0x7fec));
  FUN_004f33f8(param_1 + 0x48,*param_1,uVar3);
  FUN_004f33f8(param_1 + 0x4d,uVar3 + *param_1 & 0xffffffff,uVar3);
  FUN_004f1f60(puVar2,0,param_1 + 0x48);
  FUN_004f1f60(puVar2,1,param_1 + 0x4d);
  uVar4 = param_1[9];
  if (uVar4 == 0) {
    uVar4 = *(uint *)(puVar1 + -0x7fe8);
  }
  FUN_004f1c18(puVar2,*param_2,local_b0,1,0x10,uVar4);
  lVar10 = ((ulonglong)*(uint *)(param_7 + 0x80) & 0xffffff) << 8;
  uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,lVar10,0xfff0147,0,0);
  param_1[0xf] = uVar4;
  if (uVar4 == 0) {
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fe4));
    uVar6 = 0xfffffffa;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,0x400,0xfff0147,0,0);
    param_1[0x55] = uVar4;
    if (uVar4 == 0) {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fe0));
      uVar6 = 0xfffffffa;
    }
    else {
      puVar5 = (undefined4 *)(*(code *)**(undefined4 **)*param_3)(param_3,0x80,0xfff0147,0,0);
      param_1[0x12] = (uint)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fdc));
        uVar6 = 0xfffffffa;
      }
      else {
        uVar4 = param_1[0x55];
        *puVar5 = 0xb00;
        puVar5[2] = 0x80;
        puVar5[4] = 0x80;
        puVar5[6] = 0x400;
        puVar5[1] = param_6;
        puVar5[3] = param_8;
        puVar5[5] = in_stack_00000074;
        puVar5[7] = uVar4;
        param_1[1] = param_2[2];
        iVar9 = *(int *)(param_7 + 0x80);
        param_1[0x54] = 0;
        param_1[0x11] = param_1[0xf] + ((uint)lVar10 >> 1);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[2] = (uint)param_3;
        param_1[0xe] = param_4;
        param_1[3] = param_5;
        param_1[4] = param_6;
        param_1[5] = param_7;
        param_1[8] = in_stack_00000074;
        param_1[6] = param_8;
        param_1[0x10] = param_1[0xf];
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0x13] = param_1[0x53] * iVar9;
        uVar4 = param_2[5];
        if ((uVar4 & 2) != 0) {
          param_1[0x1b] = 2;
          uVar4 = param_2[5];
        }
        uVar6 = 0;
        if ((uVar4 & 4) != 0) {
          param_1[0x1b] = param_1[0x1b] | 4;
        }
      }
    }
  }
  return uVar6;
}



//==== 0064d8bc  ns=Global  size=0x20c
// sig: undefined FUN_0064d8bc(void)
// callers(1): 00641134 FUN_00641134
// callees(5): 004f1bb8 idol_draw::CmdQueue_Submit; 004f234c FUN_004f234c; 004f95f4 FUN_004f95f4; 0064a104 FUN_0064a104; 0800008d syscall::syscall_sys_timer_usleep

void FUN_0064d8bc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char cVar6;
  int *piVar7;
  
  puVar5 = PTR_PTR_0071b0a4;
  piVar7 = (int *)(param_1 + 0x100);
  while( true ) {
    cVar6 = FUN_004f234c(piVar7,*(uint *)(param_1 + 0x60) ^ 1);
    if (cVar6 != '\0') break;
    syscall::syscall_sys_timer_usleep(1000);
  }
  pcVar1 = *(char **)(puVar5 + -0x7ff4);
  if (*pcVar1 == '\0') {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_004f95f4(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x60));
    }
  }
  else {
    FUN_004f95f4(*(undefined4 *)(puVar5 + -0x7fe8),*(undefined4 *)(param_1 + 0x60));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)
       (*(int *)(param_1 + (int)(((ulonglong)*(uint *)(param_1 + 0x60) ^ 1) << 2) + 0x40) + 0x20) =
           0;
      (*(code *)*puVar2)(uVar4);
    }
    else {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
  }
  iVar3 = *piVar7;
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x60);
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
  idol_draw::CmdQueue_Submit(piVar7,1);
  if (*pcVar1 == '\0') {
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + 0x28))(*(uint *)(param_1 + 0x60) ^ 1);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    return;
  }
  FUN_0064a104(*(undefined4 *)(param_1 + 0x20),*(uint *)(param_1 + 0x60) ^ 1,param_2);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  return;
}



//==== 0064dac8  ns=Global  size=0x9c
// sig: undefined FUN_0064dac8(void)
// callers(1): 00640f88 FUN_00640f88
// callees(0): 

void FUN_0064dac8(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[1] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x4d] = 0;
  param_1[0x43] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x48] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  return;
}



//==== 0064db64  ns=Global  size=0x500
// sig: undefined FUN_0064db64(void)
// callers(1): 00641134 FUN_00641134
// callees(5): 004f2f88 FUN_004f2f88; 004f3080 FUN_004f3080; 004fb500 FUN_004fb500; 005d0140 libc::memset; 00647b94 FUN_00647b94

void FUN_0064db64(int param_1,int param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  double dVar17;
  double dVar18;
  
  iVar1 = *(int *)(param_2 + 0x84);
  iVar11 = *(int *)(param_2 + 0x18);
  uVar2 = *(uint *)(iVar1 + 0xc);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  *(uint *)(iVar1 + 0xc) = uVar2 + *(int *)(iVar1 + 4);
  puVar9 = PTR_PTR_0071b0a4;
  uVar13 = (ulonglong)uVar2 + (ulonglong)*(uint *)(iVar1 + 8);
  uVar15 = uVar13 + 0xa0;
  uVar12 = uVar15 + ((ulonglong)*(uint *)(iVar11 + 0x230) + 1 & 0x1ffffffe) * 8;
  uVar2 = *(uint *)(param_1 + 0x50) & 1;
  iVar1 = (int)uVar13;
  if ((param_4 & 0xffffffff) < 2) {
    *(ulonglong *)(iVar1 + 0x18) =
         (ulonglong)uVar2 << 0x20 | 0x2000000000 |
         (ulonglong)*(uint *)(*param_3 + 0x10) & 0xfffffff0 |
         (((ulonglong)*(uint *)(iVar11 + 0x244) & 0x1fffffff | 1) * 8 +
          (ulonglong)*(uint *)(iVar11 + 0xa4) + 0x97 & 0x3ff80) << 0x2e | 0x840000000000;
    *(ulonglong *)(iVar1 + 0x28) =
         (ulonglong)uVar2 << 0x20 | 0x4000000000 |
         (ulonglong)*(uint *)(*param_3 + 0x14) & 0xfffffff0 |
         (((ulonglong)*(uint *)(iVar11 + 0x244) & 0x1fffffff | 1) * 8 +
          (ulonglong)*(uint *)(iVar11 + 0x124) + 0xa7 & 0x3ff80) << 0x2e | 0x840000000000;
    *(ulonglong *)(iVar1 + 0x48) =
         ((ulonglong)*(uint *)(param_1 + 0x58) & 0x1ffffff) * 0x80 +
         (ulonglong)*(uint *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x40) & 0xfffffff0 |
         0x20848000000000;
    if ((int)param_4 == 0) goto LAB_0064dde8;
  }
  else {
    libc::memset(uVar15 & 0xffffffff,0,(param_4 + 1 & 0xffffffe) << 4);
    uVar6 = (param_4 + 1 & 0x1ffffffe) << 0x31;
    *(ulonglong *)(iVar1 + 0x18) =
         uVar15 & 0xfffffff0 | (ulonglong)uVar2 << 0x20 | 0x2000000000 | uVar6 | 0xc40000000000;
    *(ulonglong *)(iVar1 + 0x28) =
         uVar12 & 0xfffffff0 | uVar6 | (ulonglong)uVar2 << 0x20 | 0x4000000000 | 0xc40000000000;
    *(ulonglong *)(iVar1 + 0x48) =
         ((ulonglong)*(uint *)(param_1 + 0x58) & 0x1ffffff) * 0x80 +
         (ulonglong)*(uint *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x40) & 0xfffffff0 |
         0x20848000000000;
  }
  iVar14 = 0;
  uVar15 = 0;
  dVar18 = (double)**(float **)(puVar9 + -0x7fd8);
  piVar16 = param_3;
  do {
    iVar7 = iVar14 + iVar1;
    puVar8 = (uint *)((int)uVar12 + iVar14);
    iVar14 = iVar14 + 8;
    uVar6 = uVar15 & 0xffffffff;
    if (1 < (param_4 & 0xffffffff)) {
      uVar3 = *(uint *)(*piVar16 + 0x14);
      *(undefined4 *)(iVar7 + 0xa4) = *(undefined4 *)(*piVar16 + 0x10);
      uVar4 = *(uint *)(iVar11 + 0x244);
      iVar5 = *(int *)(iVar11 + 0xa4);
      puVar8[1] = uVar3;
      *(uint *)(iVar7 + 0xa0) = (int)(((ulonglong)uVar4 | 1) << 3) + iVar5 + 0x97 & 0xffffff80;
      *puVar8 = (int)(((ulonglong)*(uint *)(iVar11 + 0x244) | 1) << 3) +
                *(int *)(iVar11 + 0x124) + 0xa7 & 0xffffff80;
    }
    uVar15 = uVar15 + 1;
    uVar10 = FUN_00647b94(*(undefined4 *)(*piVar16 + 0x10),*(uint *)(param_1 + 0x68) >> 1 & 1,
                          *(uint *)(param_2 + 0x74) >> 1 & 1);
    iVar5 = iVar1 + 0x70 + (int)(uVar6 << 3);
    iVar7 = *(int *)(*piVar16 + 0x10);
    *(int *)(iVar5 + 0x10) = (int)((ulonglong)uVar10 >> 0x20);
    dVar17 = (double)*(float *)(iVar7 + 0xc);
    *(int *)(iVar5 + 0x14) = (int)uVar10;
    if (dVar17 != dVar18) {
      *(float *)(iVar7 + 0xc) =
           (float)(*(double *)(*(int *)(param_1 + 0x14) + 0x20) * *(double *)(puVar9 + -0x7fd0) +
                  dVar17);
    }
    piVar16 = piVar16 + 1;
  } while ((uVar15 & 0xffffffff) < (param_4 & 0xffffffff));
LAB_0064dde8:
  uVar13 = uVar13 & 0xffffffff;
  puVar8 = (uint *)(iVar1 + 0x78);
  *(int *)(iVar1 + 0x74) = (int)param_4;
  *puVar8 = uVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    *puVar8 = uVar2 | 8;
  }
  if (*param_3 == *(int *)(param_1 + 0x1c)) {
    *puVar8 = *puVar8 | 4;
  }
  uVar2 = *(uint *)(param_2 + 0x78);
  if ((uVar2 & 4) != 0) {
    FUN_004fb500(uVar13,0x14,0xf,1);
    uVar2 = *(uint *)(param_2 + 0x78);
  }
  if (((uVar2 & 1) == 0) && (((uVar2 & 2) == 0 || (*(int *)(param_1 + 0x50) != 0)))) {
    FUN_004f2f88(param_1 + *(int *)(param_1 + 0x60) * 0x14 + 0x120,uVar13,0xa0);
    iVar1 = *(int *)(param_1 + 0x148);
  }
  else {
    FUN_004f3080(param_1 + *(int *)(param_1 + 0x60) * 0x14 + 0x120,uVar13,0xa0);
    iVar1 = *(int *)(param_1 + 0x148);
  }
  if (iVar1 == 0) {
    iVar11 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar11 = *(int *)(param_1 + 0x50);
    *(int *)(iVar11 * 8 + iVar1 + *(int *)(param_1 + 0x60) * 4) = param_2;
  }
  *(int *)(param_1 + 0x50) = iVar11 + 1;
  return;
}



//==== 0064e064  ns=Global  size=0x3a4
// sig: undefined FUN_0064e064(void)
// callers(1): 00641b58 FUN_00641b58
// callees(6): 004f539c FUN_004f539c; 004f5898 FUN_004f5898; 005c5ad0 libc::memcpy; 00641910 FUN_00641910; 0064bfbc FUN_0064bfbc; 0064cd88 FUN_0064cd88
// strings: 00676460: 'brbProc::PrepareRackUnit(): SID 0x%X was not found in session!'

undefined4 FUN_0064e064(int param_1,int param_2,longlong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong *__src;
  ulonglong uVar14;
  int iVar15;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0 [6];
  
  puVar4 = PTR_PTR_0071b0a4;
  iVar15 = *(int *)(param_2 + 0x18);
  lVar13 = param_3 + 0x80;
  uVar12 = param_4 - 0x80;
  uVar5 = FUN_0064cd88(iVar15);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  puVar8 = (uint *)param_3;
  *puVar8 = uVar12;
  puVar8[4] = 0;
  puVar8[1] = (size_t)uVar5;
  __src = (ulonglong *)lVar13;
  puVar8[2] = (uint)__src;
  puVar8[3] = 0;
  iVar6 = FUN_0064bfbc(uVar7,local_b0,&local_a4,&local_ac,&local_a8);
  if (iVar6 < 0) {
    FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fc8),*(undefined4 *)(param_2 + 0x10));
    uVar7 = 0xffffffff;
  }
  else {
    FUN_004f5898(local_a0,local_a4,local_ac,iVar15 + 8);
    uVar3 = ((ulonglong)*(uint *)(local_a0[0] + 0x14) + 0x3ff +
             (ulonglong)*(uint *)(local_a0[0] + 0x18) << 0x20) >> 0x2a;
    __src[1] = (ulonglong)local_a0[0] & 0xfffffff0 | 0x200000000000 | uVar3 << 0x38 | 0x840000000000
    ;
    *__src = uVar3 << 0x10 | 0x20010000100;
    uVar1 = *(uint *)(iVar15 + 0x244);
    iVar6 = *(int *)(iVar15 + 0xa4);
    iVar2 = *(int *)(iVar15 + 0x230);
    __src[3] = 0;
    uVar14 = (ulonglong)uVar12 / ((uVar5 & 0x7fffffff) << 1);
    uVar11 = (ulonglong)
             ((longlong)(int)((int)(((ulonglong)uVar1 | 1) << 3) + iVar6 + 0x97 & 0xffffff80) *
              (longlong)iVar2 + 0x3ff << 0x20) >> 0x29 & 0x7ffffe;
    __src[2] = (uVar11 >> 1) << 0x10 | (uVar3 + 0x10) * 0x1000000 | 0x22000000200;
    uVar1 = *(uint *)(iVar15 + 0x244);
    iVar6 = *(int *)(iVar15 + 0x124);
    iVar15 = *(int *)(iVar15 + 0x230);
    __src[6] = 0x2a0f4040100;
    __src[5] = 0;
    uVar10 = (ulonglong)
             ((longlong)(int)((int)(((ulonglong)uVar1 | 1) << 3) + iVar6 + 0xa7 & 0xffffff80) *
              (longlong)iVar15 + 0x3ff << 0x20) >> 0x29 & 0x7ffffe;
    lVar9 = ((-uVar11 - uVar3) - uVar10) + 0xe3;
    __src[4] = (uVar10 >> 1) << 0x10 | (uVar3 + 0x10 + uVar11) * 0x1000000 | 0x24000000200;
    uVar1 = *(uint *)(param_1 + 0x48);
    __src[8] = 0x280f3010100;
    __src[7] = (ulonglong)uVar1 & 0xfffffff0 | 0x8e4a000000006;
    __src[9] = 0;
    __src[10] = lVar9 * 0x10000 & 0xffffffff0000U | 0x6000000000 |
                (0xf3 - lVar9) * 0x1000000 & 0xffffffff000000U | 0x20000000100;
    __src[0xb] = 0x46000000000;
    __src[0xc] = 0x6000000003f;
    __src[0xd] = 0xa0000000000;
    *(undefined4 *)(__src + 0xe) = local_a8;
    if (1 < uVar14) {
      iVar15 = 1;
      do {
        lVar13 = lVar13 + uVar5;
        iVar15 = iVar15 + 1;
        libc::memcpy((void *)lVar13,__src,(size_t)uVar5);
      } while ((int)uVar14 != iVar15);
    }
    libc::memcpy((void *)((int)__src + (uVar12 >> 1)),__src,uVar12 >> 1);
    *(uint **)(param_2 + 0x84) = puVar8;
    FUN_004f539c(local_a0);
    uVar7 = 0;
  }
  return uVar7;
}



//==== 0064e408  ns=Global  size=0x148
// sig: undefined FUN_0064e408(void)
// callers(1): 0064c090 FUN_0064c090
// callees(3): 004f539c FUN_004f539c; 004f5898 FUN_004f5898; 00641910 FUN_00641910
// strings: 006764a0: '****  brbProc::CheckPluginClassProcFootprint( %s ) ****\nOUT OF MEM FOR SCRATCH-PAD AND BUSS-CACHE!\nTry reducing code size, states size, params size or numVoices' | 00676550: '****  brbProc::CheckPluginClassProcFootprint( %s ) ****\nscratch-pad size (%d bytes) should be at least %d bytes!\nTry reducing bussCacheSize or numVoicesPerJob i'

undefined4 FUN_0064e408(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  undefined4 uVar6;
  int local_40 [6];
  
  puVar2 = PTR_PTR_0071b0a4;
  iVar4 = param_2 + 8;
  FUN_004f5898(local_40,param_3,param_4,iVar4);
  iVar1 = (int)(((ulonglong)*(uint *)(param_2 + 0x244) | 1) << 3);
  uVar6 = 0xfffffffa;
  uVar5 = (((ulonglong)*(uint *)(local_40[0] + 0x14) + 0x3ff +
            (ulonglong)*(uint *)(local_40[0] + 0x18) << 0x20) >> 0x2a) +
          ((ulonglong)
           ((longlong)*(int *)(param_2 + 0x230) *
            (longlong)(int)(iVar1 + *(int *)(param_2 + 0xa4) + 0x97 & 0xffffff80) + 0x3ff << 0x20)
           >> 0x29 & 0x7ffffe) +
          ((ulonglong)
           ((longlong)*(int *)(param_2 + 0x230) *
            (longlong)(int)(iVar1 + *(int *)(param_2 + 0x124) + 0xa7 & 0xffffff80) + 0x3ff << 0x20)
           >> 0x29 & 0x7ffffe) + 5;
  uVar3 = (0xe8 - uVar5 & 0x3fffff) << 10;
  if (uVar5 < 0xe9) {
    uVar6 = 0;
    if (uVar3 < 0x801) {
      uVar6 = 0xfffffffa;
      FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fc0),iVar4,uVar3,0x800);
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fc4),iVar4);
  }
  FUN_004f539c(local_40);
  return uVar6;
}



//==== 0064e550  ns=Global  size=0x3c
// sig: undefined FUN_0064e550(void)
// callers(0): 
// callees(0): 

void FUN_0064e550(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  uVar2 = *(longlong *)(param_1 + 0x20) + 4;
  do {
    puVar3 = (uint *)uVar2;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 - 1,0,uVar2 & 0xffffffff);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  return;
}



//==== 0064e58c  ns=Global  size=0x40
// sig: undefined FUN_0064e58c(void)
// callers(1): 00646758 FUN_00646758
// callees(1): 0064f1c4 cell::cellFsClose

longlong FUN_0064e58c(undefined4 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = cell::cellFsClose(*param_1);
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}



//==== 0064e5cc  ns=Global  size=0xa4
// sig: undefined FUN_0064e5cc(void)
// callers(1): 00647020 FUN_00647020
// callees(1): 0064fee4 cell::cellFsAioWrite
// strings: 0064e614: '} P(9)' (raw)

longlong FUN_0064e5cc(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = PTR_PTR_0071b0a8;
  *param_2 = *(undefined4 *)param_1;
  *(undefined8 *)(param_2 + 2) = param_5;
  param_2[4] = param_3;
  *(undefined8 *)(param_2 + 6) = param_4;
  param_2[0xc] = 0;
  *(longlong *)(param_2 + 8) = param_1;
  param_2[10] = 0;
  param_2[0xd] = 0;
  do {
    puVar5 = (uint *)(param_1 + 4U);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,param_1 + 4U & 0xffffffff);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  uVar4 = cell::cellFsAioWrite(param_2,param_2 + 0xb,*(undefined4 *)(puVar2 + -0x8000));
  uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
  uVar3 = uVar3 - (uVar3 ^ uVar4);
  return (longlong)(uVar3 << 0x20 | uVar3 >> 0x20) >> 0x3f;
}



//==== 0064e670  ns=Global  size=0x78
// sig: undefined FUN_0064e670(void)
// callers(1): 00647594 FUN_00647594
// callees(1): 0064f204 cell::cellFsOpen

longlong FUN_0064e670(int param_1,undefined4 param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  enforceInOrderExecutionIO();
  uVar2 = cell::cellFsOpen(param_2,(int)((param_3 & 0xff) - 1) >> 0x1f & 0x241,param_1,0,0);
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}



//==== 0064e6e8  ns=Global  size=0x38
// sig: undefined FUN_0064e6e8(void)
// callers(1): 006468bc FUN_006468bc
// callees(1): 0064ffc4 cell::cellFsAioFinish

longlong FUN_0064e6e8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = cell::cellFsAioFinish();
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}



//==== 0064e720  ns=Global  size=0x38
// sig: undefined FUN_0064e720(void)
// callers(1): 00646abc FUN_00646abc
// callees(1): 00650084 cell::cellFsAioInit

longlong FUN_0064e720(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = cell::cellFsAioInit();
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}



//==== 0064e758  ns=Global  size=0xa4
// sig: undefined FUN_0064e758(void)
// callers(0): 
// callees(1): 00650064 cell::cellFsAioRead
// strings: 0064e7a0: '} P(9)' (raw)

longlong FUN_0064e758(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = PTR_PTR_0071b0a8;
  *param_2 = *(undefined4 *)param_1;
  *(undefined8 *)(param_2 + 2) = param_5;
  param_2[4] = param_3;
  *(undefined8 *)(param_2 + 6) = param_4;
  param_2[0xc] = 0;
  *(longlong *)(param_2 + 8) = param_1;
  param_2[10] = 0;
  param_2[0xd] = 0;
  do {
    puVar5 = (uint *)(param_1 + 4U);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,param_1 + 4U & 0xffffffff);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  uVar4 = cell::cellFsAioRead(param_2,param_2 + 0xb,*(undefined4 *)(puVar2 + -0x8000));
  uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
  uVar3 = uVar3 - (uVar3 ^ uVar4);
  return (longlong)(uVar3 << 0x20 | uVar3 >> 0x20) >> 0x3f;
}



//==== 0064e7fc  ns=Global  size=0x48
// sig: undefined FUN_0064e7fc(void)
// callers(1): 006459b4 FUN_006459b4
// callees(0): 

undefined8 FUN_0064e7fc(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  uVar3 = ((ulonglong)param_2 + 0x1f << 0x20) >> 0x25;
  uVar1 = (uint)((ulonglong)param_2 + 0x1f) >> 5;
  puVar2 = param_1;
  if (uVar1 != 0) {
    do {
      puVar2[3] = 0;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
  }
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = uVar1;
  return 0;
}



//==== 0064e844  ns=Global  size=0x54
// sig: undefined FUN_0064e844(void)
// callers(0): 
// callees(0): 

ulonglong FUN_0064e844(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  piVar1 = (int *)(param_1 + 4);
  uVar5 = 0;
  if (*piVar1 != 0) {
    iVar4 = 0;
    do {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 0xc) != 0) {
        lVar6 = 0x20;
        do {
          uVar2 = uVar3 & 1;
          uVar3 = (uVar3 << 0x20) >> 0x21;
          uVar5 = uVar5 + uVar2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 4;
    } while (*piVar1 != iVar4);
  }
  return uVar5 & 0xffffffff;
}



//==== 0064e898  ns=Global  size=0x10c
// sig: undefined FUN_0064e898(void)
// callers(0): 
// callees(0): 

uint FUN_0064e898(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar9;
  ulonglong uVar8;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar3 = (ulonglong)*param_1;
  puVar10 = param_1 + 3;
  uVar1 = param_1[1];
  uVar11 = 0xffffffff;
  if (*param_1 != 0) {
    puVar5 = (uint *)((int)puVar10 + (param_1[2] >> 3 & 0x1ffffffc));
    do {
      puVar4 = puVar5 + 1;
      if ((puVar10 + uVar1 == puVar4) && (uVar6 = (ulonglong)*param_1 & 0x1f, (int)uVar6 != 0)) {
        uVar2 = *puVar5;
      }
      else {
        uVar6 = 0x20;
        uVar2 = *puVar5;
      }
      uVar9 = 1;
      iVar7 = 0;
      if ((uVar2 & 1) != 0) {
        uVar8 = 1;
        iVar7 = 0;
        uVar12 = uVar6;
        if (uVar6 == 0) {
          uVar12 = 1;
        }
        do {
          uVar8 = (uVar8 & 0x7fffffff) << 1;
          iVar7 = iVar7 + 1;
          uVar9 = (uint)uVar8;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar3 = uVar3 - uVar6;
            goto LAB_0064e934;
          }
        } while ((uVar2 & uVar9) != 0);
      }
      uVar3 = 0;
      uVar11 = ((int)puVar5 - (int)puVar10) * 8 + iVar7;
      *puVar5 = uVar2 | uVar9;
      param_1[2] = uVar11;
LAB_0064e934:
      puVar5 = puVar10;
      if (puVar4 < puVar10 + uVar1) {
        puVar5 = puVar4;
      }
    } while ((int)uVar3 != 0);
  }
  return uVar11;
}



//==== 0064e9a4  ns=Global  size=0x30
// sig: undefined FUN_0064e9a4(void)
// callers(0): 
// callees(0): 

void FUN_0064e9a4(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 3 & 0x1ffffffc;
  if (*param_1 <= param_2) {
    return;
  }
  *(uint *)((int)param_1 + uVar1 + 0xc) =
       *(uint *)((int)param_1 + uVar1 + 0xc) &
       ((uint)(-0x100000002 << ((ulonglong)param_2 & 0x1f)) |
       (uint)(0xfffffffefffffffe >> 0x40 - ((ulonglong)param_2 & 0x1f)));
  return;
}



//==== 0064e9d4  ns=Global  size=0x114
// sig: undefined FUN_0064e9d4(void)
// callers(1): 0064547c FUN_0064547c
// callees(0): 
// strings: 0064ea34: '} X(} @89@' (raw)

uint FUN_0064e9d4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  char in_RESERVE;
  
  puVar12 = param_1 + 3;
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uVar11 = 0xffffffff;
  if (uVar4 != 0) {
    puVar5 = (uint *)((int)puVar12 + (param_1[2] >> 3 & 0x1ffffffc));
    do {
      puVar10 = puVar5 + 1;
      if ((puVar12 + uVar2 != puVar10) || (uVar6 = *param_1 & 0x1f, uVar6 == 0)) {
        uVar6 = 0x20;
      }
      uVar8 = 1;
      uVar7 = 0;
      while( true ) {
        do {
          uVar9 = (ulonglong)*puVar5;
          bVar1 = (*puVar5 & (uint)uVar8) == 0;
          if (bVar1) {
            uVar9 = uVar9 | uVar8;
          }
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(uVar9,0,ZEXT48(puVar5));
            *puVar5 = uVar3;
          }
        } while (in_RESERVE == '\0' && !bVar1);
        if (bVar1) {
          uVar4 = 0;
          uVar11 = ((int)puVar5 - (int)puVar12) * 8 + uVar7;
          param_1[2] = uVar11;
          goto LAB_0064eab0;
        }
        uVar7 = uVar7 + 1;
        if (uVar6 <= uVar7) break;
        uVar8 = (uVar8 & 0x7fffffff) << 1;
      }
      uVar4 = uVar4 - uVar6;
LAB_0064eab0:
      puVar5 = puVar12;
      if (puVar10 < puVar12 + uVar2) {
        puVar5 = puVar10;
      }
    } while (uVar4 != 0);
  }
  return uVar11;
}



//==== 0064eae8  ns=Global  size=0x10
// sig: undefined FUN_0064eae8(void)
// callers(2): 006458e8 FUN_006458e8; 006459b4 FUN_006459b4
// callees(0): 

longlong FUN_0064eae8(longlong param_1)

{
  return ((ulonglong)(param_1 + 0x1f << 0x20) >> 0x23 & 0x1ffffffc) + 0xc;
}



//==== 0064eaf8  ns=Global  size=0x48
// sig: undefined FUN_0064eaf8(void)
// callers(1): 00645198 FUN_00645198
// callees(0): 

void FUN_0064eaf8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  char in_RESERVE;
  byte in_cr0;
  
  if ((ulonglong)*(uint *)param_1 <= (param_2 & 0xffffffff)) {
    return;
  }
  uVar3 = param_1 + ((param_2 << 0x20) >> 0x23 & 0x1ffffffc) + 0xc;
  do {
    puVar2 = (uint *)uVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed
                        ((ulonglong)*puVar2 &
                         (-0x100000002 << (param_2 & 0x1f) |
                         0xfffffffefffffffeU >> 0x40 - (param_2 & 0x1f)) & 0xffffffff,0,
                         uVar3 & 0xffffffff);
      *puVar2 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return;
}



//==== 0064eb40  ns=Global  size=0x10
// sig: undefined FUN_0064eb40(void)
// callers(0): 
// callees(0): 

void FUN_0064eb40(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 2) = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



//==== 0064eb50  ns=Global  size=0xfc
// sig: undefined FUN_0064eb50(void)
// callers(1): 00648b10 idol::brbVoice_ConnectPort
// callees(0): 

undefined4 FUN_0064eb50(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar6 = (uint)bVar1;
  if (bVar1 == 0xff) {
    uVar6 = *param_2;
  }
  bVar2 = *(byte *)(param_3 + 1);
  uVar5 = (uint)bVar2;
  if (bVar2 == 0xff) {
    uVar5 = *param_2;
  }
  uVar4 = (uint)bVar1;
  if (bVar1 == 0xff) {
    uVar4 = *param_2;
  }
  uVar3 = (uint)bVar2;
  if (bVar2 == 0xff) {
    uVar3 = *param_2;
  }
  uVar7 = 0;
  if ((param_2[uVar4 * 8 + 0x209] <= param_2[uVar3 * 8 + 0x209]) &&
     (uVar7 = 1, param_2[uVar5 * 8 + 0x208] < param_2[uVar6 * 8 + 0x208])) {
    return 0;
  }
  return uVar7;
}



//==== 0064ec4c  ns=Global  size=0x6c
// sig: undefined FUN_0064ec4c(void)
// callers(1): 00642a50 FUN_00642a50
// callees(0): 

undefined8 FUN_0064ec4c(int *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b0b4;
  param_1[5] = (int)param_2 << 2;
  *param_1 = (int)param_2;
  param_1[2] = (int)param_3;
  fVar1 = *(float *)(puVar2 + -0x7ffc);
  param_1[7] = *(int *)(puVar2 + -0x8000);
  param_1[1] = (int)(fVar1 / (float)param_2);
  fVar1 = fVar1 / (float)param_3;
  param_1[3] = (int)fVar1;
  param_1[4] = (int)((float)param_2 * fVar1);
  return 0;
}



//==== 0064ecb8  ns=Global  size=0x28
// sig: undefined FUN_0064ecb8(void)
// callers(1): 006427e8 FUN_006427e8
// callees(0): 

void FUN_0064ecb8(undefined4 *param_1)

{
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



//==== 0064ece0  ns=Global  size=0x8
// sig: undefined FUN_0064ece0(void)
// callers(0): 
// callees(0): 
// strings: 0067fde0: 'bad allocation'

undefined * FUN_0064ece0(void)

{
  return PTR_s_bad_allocation_0071c768;
}



//==== 0064ece8  ns=Global  size=0x24
// sig: undefined FUN_0064ece8(void)
// callers(0): 
// callees(1): 005e3b94 FUN_005e3b94

void FUN_0064ece8(void)

{
  FUN_005e3b94();
  return;
}



//==== 0064ed0c  ns=Global  size=0x44
// sig: undefined FUN_0064ed0c(void)
// callers(0): 
// callees(2): 005e387c FUN_005e387c; 005e3cd4 FUN_005e3cd4

void FUN_0064ed0c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c774;
  FUN_005e3cd4();
  FUN_005e387c(param_1);
  return;
}



//==== 0064ed50  ns=Global  size=0x30
// sig: undefined FUN_0064ed50(void)
// callers(0): 
// callees(1): 005e3cd4 FUN_005e3cd4

void FUN_0064ed50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c774;
  FUN_005e3cd4();
  return;
}



//==== 0064ed80  ns=Global  size=0x24
// sig: undefined FUN_0064ed80(void)
// callers(2): 00014c0c crt0::exit; 005c4ec8 idol::exit
// callees(1): 00014e50 crt0::__do_global_dtors_aux

void FUN_0064ed80(void)

{
  crt0::__do_global_dtors_aux();
  return;
}



//==== 0064eda4  ns=cell  size=0x20
// sig: undefined cellHttpInit(void)
// callers(1): 004efb80 FUN_004efb80
// callees(0): 

void cell::cellHttpInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064edc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellHttp_func_address_table[0])();
  return;
}



//==== 0064edc4  ns=cell  size=0x20
// sig: undefined cellHttpsInit(void)
// callers(1): 004efb80 FUN_004efb80
// callees(0): 

void cell::cellHttpsInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ede0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellHttp_func_address_table[1])();
  return;
}



//==== 0064ede4  ns=cell  size=0x20
// sig: undefined cellSslCertificateLoader(void)
// callers(1): 004efb80 FUN_004efb80
// callees(0): 

void cell::cellSslCertificateLoader(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSsl_func_address_table[0])();
  return;
}



//==== 0064ee04  ns=cell  size=0x20
// sig: undefined cellSslInit(void)
// callers(1): 004efb80 FUN_004efb80
// callees(0): 

void cell::cellSslInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSsl_func_address_table[1])();
  return;
}



//==== 0064ee24  ns=cell  size=0x20
// sig: undefined cellVideoOutGetScreenSize(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellVideoOutGetScreenSize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutilAvconfExt_func_address_table[0])();
  return;
}



//==== 0064ee44  ns=cell  size=0x20
// sig: undefined cellSslEnd(void)
// callers(4): 004f7c34 FUN_004f7c34; 004f7ca0 FUN_004f7ca0; 004f7eb8 FUN_004f7eb8; 004f8f68 FUN_004f8f68
// callees(0): 

void cell::cellSslEnd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSsl_func_address_table[2])();
  return;
}



//==== 0064ee64  ns=sce  size=0x20
// sig: undefined sceNpBasicGetFriendListEntry(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpBasicGetFriendListEntry(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0])();
  return;
}



//==== 0064ee84  ns=sce  size=0x20
// sig: undefined sceNpManagerGetTicket(void)
// callers(1): 004f766c FUN_004f766c
// callees(0): 

void sce::sceNpManagerGetTicket(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064eea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[1])();
  return;
}



//==== 0064eea4  ns=sce  size=0x20
// sig: undefined sceNpBasicAddBlockListEntry(void)
// callers(1): 004f9298 FUN_004f9298
// callees(0): 

void sce::sceNpBasicAddBlockListEntry(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064eec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[2])();
  return;
}



//==== 0064eec4  ns=sce  size=0x20
// sig: undefined sceNpBasicGetFriendPresenceByNpId2(void)
// callers(2): 004f77a0 FUN_004f77a0; 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpBasicGetFriendPresenceByNpId2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064eee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[3])();
  return;
}



//==== 0064eee4  ns=sce  size=0x20
// sig: undefined sceNpBasicAddFriend(void)
// callers(1): 004f9130 FUN_004f9130
// callees(0): 

void sce::sceNpBasicAddFriend(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[4])();
  return;
}



//==== 0064ef04  ns=sce  size=0x20
// sig: undefined sceNpScoreInit(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpScoreInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[5])();
  return;
}



//==== 0064ef24  ns=sce  size=0x20
// sig: undefined sceNpBasicRegisterContextSensitiveHandler(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpBasicRegisterContextSensitiveHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[6])();
  return;
}



//==== 0064ef44  ns=sce  size=0x20
// sig: undefined sceNpManagerUnregisterCallback(void)
// callers(4): 004f7c34 FUN_004f7c34; 004f7ca0 FUN_004f7ca0; 004f7eb8 FUN_004f7eb8; 004f8f68 FUN_004f8f68
// callees(0): 

void sce::sceNpManagerUnregisterCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[7])();
  return;
}



//==== 0064ef64  ns=sce  size=0x20
// sig: undefined sceNpBasicSetPresenceDetails2(void)
// callers(1): 004f8f68 FUN_004f8f68
// callees(0): 

void sce::sceNpBasicSetPresenceDetails2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[8])();
  return;
}



//==== 0064ef84  ns=sce  size=0x20
// sig: undefined sceNpLookupInit(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpLookupInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[9])();
  return;
}



//==== 0064efa4  ns=sce  size=0x20
// sig: undefined sceNpBasicGetBlockListEntryCount(void)
// callers(2): 004f77a0 FUN_004f77a0; 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpBasicGetBlockListEntryCount(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[10])();
  return;
}



//==== 0064efc4  ns=sce  size=0x20
// sig: undefined sceNpLookupPollAsync(void)
// callers(1): 004f8c68 FUN_004f8c68
// callees(0): 

void sce::sceNpLookupPollAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064efe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xb])();
  return;
}



//==== 0064efe4  ns=sce  size=0x20
// sig: undefined sceNpManagerRequestTicket2(void)
// callers(2): 004f7e34 FUN_004f7e34; 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpManagerRequestTicket2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xc])();
  return;
}



//==== 0064f004  ns=sce  size=0x20
// sig: undefined sceNpManagerGetStatus(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpManagerGetStatus(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xd])();
  return;
}



//==== 0064f024  ns=sce  size=0x20
// sig: undefined sceNpBasicUnregisterHandler(void)
// callers(4): 004f7c34 FUN_004f7c34; 004f7ca0 FUN_004f7ca0; 004f7eb8 FUN_004f7eb8; 004f8f68 FUN_004f8f68
// callees(0): 

void sce::sceNpBasicUnregisterHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xe])();
  return;
}



//==== 0064f044  ns=sce  size=0x20
// sig: undefined sceNpBasicGetFriendListEntryCount(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpBasicGetFriendListEntryCount(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xf])();
  return;
}



//==== 0064f064  ns=sce  size=0x20
// sig: undefined sceNpScoreCreateTitleCtx(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpScoreCreateTitleCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x10])();
  return;
}



//==== 0064f084  ns=sce  size=0x20
// sig: undefined sceNpInit(void)
// callers(1): 004f7d7c FUN_004f7d7c
// callees(0): 

void sce::sceNpInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x11])();
  return;
}



//==== 0064f0a4  ns=sce  size=0x20
// sig: undefined sceNpLookupCreateTitleCtx(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpLookupCreateTitleCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x12])();
  return;
}



//==== 0064f0c4  ns=sce  size=0x20
// sig: undefined sceNpLookupNpIdAsync(void)
// callers(1): 004f8c68 FUN_004f8c68
// callees(0): 

void sce::sceNpLookupNpIdAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x13])();
  return;
}



//==== 0064f0e4  ns=sce  size=0x20
// sig: undefined sceNpBasicGetEvent(void)
// callers(1): 004f77a0 FUN_004f77a0
// callees(0): 

void sce::sceNpBasicGetEvent(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x14])();
  return;
}



//==== 0064f104  ns=sce  size=0x20
// sig: undefined sceNpManagerRegisterCallback(void)
// callers(1): 004f7d7c FUN_004f7d7c
// callees(0): 

void sce::sceNpManagerRegisterCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x15])();
  return;
}



//==== 0064f124  ns=sce  size=0x20
// sig: undefined sceNpLookupCreateTransactionCtx(void)
// callers(1): 004f8c68 FUN_004f8c68
// callees(0): 

void sce::sceNpLookupCreateTransactionCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x16])();
  return;
}



//==== 0064f144  ns=sce  size=0x20
// sig: undefined sceNpBasicGetBlockListEntry(void)
// callers(2): 004f77a0 FUN_004f77a0; 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpBasicGetBlockListEntry(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x17])();
  return;
}



//==== 0064f164  ns=sce  size=0x20
// sig: undefined sceNpLookupDestroyTransactionCtx(void)
// callers(1): 004f8c68 FUN_004f8c68
// callees(0): 

void sce::sceNpLookupDestroyTransactionCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x18])();
  return;
}



//==== 0064f184  ns=sce  size=0x20
// sig: undefined sceNpManagerGetNpId(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpManagerGetNpId(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x19])();
  return;
}



//==== 0064f1a4  ns=sce  size=0x20
// sig: undefined sceNpClansInit(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpClansInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpClans_func_address_table[0])();
  return;
}



//==== 0064f1c4  ns=cell  size=0x20
// sig: undefined cellFsClose(void)
// callers(7): 004e81ec idol::fileAllocLoad; 00528598 FUN_00528598; 00529808 FUN_00529808; 00618fac FUN_00618fac; 00622fbc FUN_00622fbc; 0064011c FUN_0064011c; 0064e58c FUN_0064e58c
// callees(0): 

void cell::cellFsClose(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0])();
  return;
}



//==== 0064f1e4  ns=cell  size=0x20
// sig: undefined cellFsRead(void)
// callers(3): 004e81ec idol::fileAllocLoad; 00630754 FUN_00630754; 00640164 FUN_00640164
// callees(0): 

void cell::cellFsRead(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[1])();
  return;
}



//==== 0064f204  ns=cell  size=0x20
// sig: undefined cellFsOpen(void)
// callers(5): 004e81ec idol::fileAllocLoad; 00528598 FUN_00528598; 00630808 FUN_00630808; 00640284 FUN_00640284; 0064e670 FUN_0064e670
// callees(0): 

void cell::cellFsOpen(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[2])();
  return;
}



//==== 0064f224  ns=cell  size=0x20
// sig: undefined cellFsFstat(void)
// callers(3): 004e81ec idol::fileAllocLoad; 00528598 FUN_00528598; 00529808 FUN_00529808
// callees(0): 

void cell::cellFsFstat(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[3])();
  return;
}



//==== 0064f244  ns=cell  size=0x20
// sig: undefined cellGcmGetTiledPitchSize(void)
// callers(4): 004d72d8 FUN_004d72d8; 004d7464 FUN_004d7464; 004e3ee8 FUN_004e3ee8; 004e580c FUN_004e580c
// callees(0): 

void cell::cellGcmGetTiledPitchSize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0])();
  return;
}



//==== 0064f264  ns=cell  size=0x20
// sig: undefined _cellGcmInitBody(void)
// callers(1): 0050f034 FUN_0050f034
// callees(0): 

void cell::_cellGcmInitBody(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[1])();
  return;
}



//==== 0064f284  ns=cell  size=0x20
// sig: undefined _cellGcmSetFlipCommand(void)
// callers(1): 0050e8dc idol::GcmFlipCommand_Thunk
// callees(0): 

void cell::_cellGcmSetFlipCommand(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[2])();
  return;
}



//==== 0064f2a4  ns=cell  size=0x20
// sig: undefined cellGcmAddressToOffset(void)
// callers(21): 00163aa0 space::SpaceTransition_LoadWad; 004d71c0 FUN_004d71c0; 004d7464 FUN_004d7464; 004d8148 FUN_004d8148; 004ded28 FUN_004ded28; 004defb0 FUN_004defb0; 004e31c8 FUN_004e31c8; 004e3e24 FUN_004e3e24; 004e40d8 FUN_004e40d8; 004e47cc FUN_004e47cc; 004e4bb8 FUN_004e4bb8; 004e4d3c FUN_004e4d3c; 004e5458 FUN_004e5458; 004e54e8 FUN_004e54e8; 004e580c FUN_004e580c; 004e5cd4 FUN_004e5cd4; 00507460 FUN_00507460; 005075f0 FUN_005075f0; 0050795c FUN_0050795c; 00507b6c FUN_00507b6c; 00507df8 FUN_00507df8
// callees(0): 

void cell::cellGcmAddressToOffset(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[3])();
  return;
}



//==== 0064f2c4  ns=cell  size=0x20
// sig: undefined _cellGcmFunc15(void)
// callers(1): 0050f00c FUN_0050f00c
// callees(0): 

void cell::_cellGcmFunc15(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[4])();
  return;
}



//==== 0064f2e4  ns=cell  size=0x20
// sig: undefined cellGcmBindTile(void)
// callers(3): 004e535c FUN_004e535c; 004e54e8 FUN_004e54e8; 004e5db0 FUN_004e5db0
// callees(0): 

void cell::cellGcmBindTile(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[5])();
  return;
}



//==== 0064f304  ns=cell  size=0x20
// sig: undefined cellGcmSetFlipMode(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellGcmSetFlipMode(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[6])();
  return;
}



//==== 0064f324  ns=cell  size=0x20
// sig: undefined cellGcmMapEaIoAddress(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellGcmMapEaIoAddress(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[7])();
  return;
}



//==== 0064f344  ns=cell  size=0x20
// sig: undefined cellGcmSetDisplayBuffer(void)
// callers(5): 004e40d8 FUN_004e40d8; 004e47cc FUN_004e47cc; 004e535c FUN_004e535c; 004e54e8 FUN_004e54e8; 004e5db0 FUN_004e5db0
// callees(0): 

void cell::cellGcmSetDisplayBuffer(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[8])();
  return;
}



//==== 0064f364  ns=cell  size=0x20
// sig: undefined cellGcmGetControlRegister(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellGcmGetControlRegister(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[9])();
  return;
}



//==== 0064f384  ns=cell  size=0x20
// sig: undefined cellGcmSetVBlankHandler(void)
// callers(2): 004dc99c idol_draw::Gfx_ReconfigureVideoOut; 004dcb80 idol_draw::Gfx_EnableSpecialVideoOutMode
// callees(0): 

void cell::cellGcmSetVBlankHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[10])();
  return;
}



//==== 0064f3a4  ns=cell  size=0x20
// sig: undefined cellGcmSetTileInfo(void)
// callers(3): 004e535c FUN_004e535c; 004e54e8 FUN_004e54e8; 004e5db0 FUN_004e5db0
// callees(0): 

void cell::cellGcmSetTileInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xb])();
  return;
}



//==== 0064f3c4  ns=cell  size=0x20
// sig: undefined cellGcmSetTile(void)
// callers(5): 004e3e24 FUN_004e3e24; 004e40d8 FUN_004e40d8; 004e47cc FUN_004e47cc; 004e4d3c FUN_004e4d3c; 004e580c FUN_004e580c
// callees(0): 

void cell::cellGcmSetTile(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xc])();
  return;
}



//==== 0064f3e4  ns=cell  size=0x20
// sig: undefined cellGcmSetZcull(void)
// callers(2): 004e40d8 FUN_004e40d8; 004e4d3c FUN_004e4d3c
// callees(0): 

void cell::cellGcmSetZcull(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xd])();
  return;
}



//==== 0064f404  ns=cell  size=0x20
// sig: undefined _cellGcmSetFlipCommandWithWaitLabel(void)
// callers(1): 0050e7f8 FUN_0050e7f8
// callees(0): 

void cell::_cellGcmSetFlipCommandWithWaitLabel(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xe])();
  return;
}



//==== 0064f424  ns=cell  size=0x20
// sig: undefined cellGcmUnbindTile(void)
// callers(2): 004e535c FUN_004e535c; 004e5db0 FUN_004e5db0
// callees(0): 

void cell::cellGcmUnbindTile(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xf])();
  return;
}



//==== 0064f444  ns=cell  size=0x20
// sig: undefined cellGcmGetConfiguration(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellGcmGetConfiguration(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0x10])();
  return;
}



//==== 0064f464  ns=cell  size=0x20
// sig: undefined cellGcmGetLabelAddress(void)
// callers(1): 004ec568 FUN_004ec568
// callees(0): 

void cell::cellGcmGetLabelAddress(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0x11])();
  return;
}



//==== 0064f484  ns=cell  size=0x20
// sig: undefined cellSysmoduleUnloadModule(void)
// callers(7): 004d7464 FUN_004d7464; 004e7710 FUN_004e7710; 004e7738 FUN_004e7738; 004e776c FUN_004e776c; 004e77c0 FUN_004e77c0; 004e77f4 FUN_004e77f4; 005c16e0 FUN_005c16e0
// callees(0): 

void cell::cellSysmoduleUnloadModule(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysmodule_func_address_table[0])();
  return;
}



//==== 0064f4a4  ns=cell  size=0x20
// sig: undefined cellSysmoduleLoadModule(void)
// callers(7): 004d7464 FUN_004d7464; 004e64b4 FUN_004e64b4; 004e68bc FUN_004e68bc; 004efb80 FUN_004efb80; 0052ea40 FUN_0052ea40; 005c18d0 FUN_005c18d0; 0064b124 FUN_0064b124
// callees(0): 

void cell::cellSysmoduleLoadModule(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysmodule_func_address_table[1])();
  return;
}



//==== 0064f4c4  ns=cell  size=0x20
// sig: undefined cellVideoOutConfigure(void)
// callers(3): 004d7464 FUN_004d7464; 004dc99c idol_draw::Gfx_ReconfigureVideoOut; 004dcb80 idol_draw::Gfx_EnableSpecialVideoOutMode
// callees(0): 

void cell::cellVideoOutConfigure(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0])();
  return;
}



//==== 0064f4e4  ns=cell  size=0x20
// sig: undefined cellSaveDataUserListSave(void)
// callers(1): 004e8714 idol::SaveSystem_PS::SaveGameData
// callees(0): 

void cell::cellSaveDataUserListSave(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[1])();
  return;
}



//==== 0064f504  ns=cell  size=0x20
// sig: undefined cellSysutilCheckCallback(void)
// callers(25): 00010238 boot::PlayLogoMovie; 00012048 boot::PrepareFrontbin; 00012b0c boot::ShowSplash; 00012ccc boot::LoadAndShowSplash; 00012ec8 boot::GameStart; 00013760 boot::LoadAndShowSplashVram; 0001401c boot::boot; 000d8be8 initonce::InitOnce; 000dcf58 loaders::NAVG_LoadFile; 000e0e60 main::startLevel; 000e7ac8 memcard::memcard_InitSaveMsg; 000e8ca0 memcard::memcard_RestoreSaveGame; 001643e0 space::PlaySpaceMovie; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic; 004d4dd0 FUN_004d4dd0; 004d59e8 FUN_004d59e8; 004ee3fc FUN_004ee3fc; 004f69b8 FUN_004f69b8; 004f8c68 FUN_004f8c68; 00503a3c FUN_00503a3c; 00503e00 fios::LoadAssetFromFile; 00503f8c FUN_00503f8c; 00504468 FUN_00504468; 00507f68 fios::read_file_sync
// callees(0): 

void cell::cellSysutilCheckCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[2])();
  return;
}



//==== 0064f524  ns=cell  size=0x20
// sig: undefined cellVideoOutGetDeviceInfo(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellVideoOutGetDeviceInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[3])();
  return;
}



//==== 0064f544  ns=cell  size=0x20
// sig: undefined cellSaveDataListAutoLoad(void)
// callers(1): 004e903c idol::thr_SaveSystem_CheckExisting
// callees(0): 

void cell::cellSaveDataListAutoLoad(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[4])();
  return;
}



//==== 0064f564  ns=cell  size=0x20
// sig: undefined cellSaveDataUserListLoad(void)
// callers(1): 004e8d7c idol::SaveSystem_PS::LoadGameData
// callees(0): 

void cell::cellSaveDataUserListLoad(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[5])();
  return;
}



//==== 0064f584  ns=cell  size=0x20
// sig: undefined cellSysutilGetSystemParamInt(void)
// callers(1): 004e6038 FUN_004e6038
// callees(0): 

void cell::cellSysutilGetSystemParamInt(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[6])();
  return;
}



//==== 0064f5a4  ns=cell  size=0x20
// sig: undefined cellAudioOutConfigure(void)
// callers(2): 0050565c FUN_0050565c; 0064a780 FUN_0064a780
// callees(0): 

void cell::cellAudioOutConfigure(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[7])();
  return;
}



//==== 0064f5c4  ns=cell  size=0x20
// sig: undefined cellSaveDataUserAutoSave(void)
// callers(1): 004e8a70 idol::SaveSystem_PS::AutoSaveGameData
// callees(0): 

void cell::cellSaveDataUserAutoSave(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[8])();
  return;
}



//==== 0064f5e4  ns=cell  size=0x20
// sig: undefined cellMsgDialogAbort(void)
// callers(1): 004eb1ac FUN_004eb1ac
// callees(0): 

void cell::cellMsgDialogAbort(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[9])();
  return;
}



//==== 0064f604  ns=cell  size=0x20
// sig: undefined cellMsgDialogOpen2(void)
// callers(2): 000e8ca0 memcard::memcard_RestoreSaveGame; 004eb088 FUN_004eb088
// callees(0): 

void cell::cellMsgDialogOpen2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[10])();
  return;
}



//==== 0064f624  ns=cell  size=0x20
// sig: undefined cellVideoOutGetState(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellVideoOutGetState(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xb])();
  return;
}



//==== 0064f644  ns=cell  size=0x20
// sig: undefined cellSysutilRegisterCallback(void)
// callers(2): 0001401c boot::boot; 004f7eb8 FUN_004f7eb8
// callees(0): 

void cell::cellSysutilRegisterCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xc])();
  return;
}



//==== 0064f664  ns=cell  size=0x20
// sig: undefined cellVideoOutGetResolutionAvailability(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

void cell::cellVideoOutGetResolutionAvailability(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xd])();
  return;
}



//==== 0064f684  ns=cell  size=0x20
// sig: undefined cellAudioOutGetSoundAvailability(void)
// callers(2): 0050565c FUN_0050565c; 0064a780 FUN_0064a780
// callees(0): 

void cell::cellAudioOutGetSoundAvailability(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xe])();
  return;
}



//==== 0064f6a4  ns=cell  size=0x20
// sig: undefined cellVideoOutGetResolution(void)
// callers(2): 004d7464 FUN_004d7464; 004e61f4 FUN_004e61f4
// callees(0): 

void cell::cellVideoOutGetResolution(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xf])();
  return;
}



//==== 0064f6c4  ns=cell  size=0x20
// sig: undefined cellGameGetParamString(void)
// callers(1): 004eedc8 FUN_004eedc8
// callees(0): 

void cell::cellGameGetParamString(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[0])();
  return;
}



//==== 0064f6e4  ns=cell  size=0x20
// sig: undefined cellGameCreateGameData(void)
// callers(1): 004ee958 FUN_004ee958
// callees(0): 

void cell::cellGameCreateGameData(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[1])();
  return;
}



//==== 0064f704  ns=cell  size=0x20
// sig: undefined cellGameContentPermit(void)
// callers(5): 004ee65c FUN_004ee65c; 004ee818 FUN_004ee818; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc; 004eef00 FUN_004eef00
// callees(0): 

void cell::cellGameContentPermit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[2])();
  return;
}



//==== 0064f724  ns=cell  size=0x20
// sig: undefined cellGameContentErrorDialog(void)
// callers(4): 004e7534 FUN_004e7534; 004ee65c FUN_004ee65c; 004ee958 FUN_004ee958; 0050476c FUN_0050476c
// callees(0): 

void cell::cellGameContentErrorDialog(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[3])();
  return;
}



//==== 0064f744  ns=cell  size=0x20
// sig: undefined cellGameGetParamInt(void)
// callers(1): 004eedc8 FUN_004eedc8
// callees(0): 

void cell::cellGameGetParamInt(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[4])();
  return;
}



//==== 0064f764  ns=cell  size=0x20
// sig: undefined cellGameDataCheck(void)
// callers(3): 004ee818 FUN_004ee818; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc
// callees(0): 

void cell::cellGameDataCheck(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[5])();
  return;
}



//==== 0064f784  ns=cell  size=0x20
// sig: undefined cellGameGetSizeKB(void)
// callers(1): 004eebfc FUN_004eebfc
// callees(0): 

void cell::cellGameGetSizeKB(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[6])();
  return;
}



//==== 0064f7a4  ns=cell  size=0x20
// sig: undefined cellGameBootCheck(void)
// callers(2): 004ee65c FUN_004ee65c; 004eef00 FUN_004eef00
// callees(0): 

void cell::cellGameBootCheck(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[7])();
  return;
}



//==== 0064f7c4  ns=sce  size=0x20
// sig: undefined sceNpTrophyRegisterContext(void)
// callers(1): 004f06ac FUN_004f06ac
// callees(0): 

void sce::sceNpTrophyRegisterContext(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[0])();
  return;
}



//==== 0064f7e4  ns=sce  size=0x20
// sig: undefined sceNpTrophyCreateHandle(void)
// callers(1): 004eff54 idol::RegisterTrophyCtxHandle
// callees(0): 

void sce::sceNpTrophyCreateHandle(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[1])();
  return;
}



//==== 0064f804  ns=sce  size=0x20
// sig: undefined sceNpTrophyGetRequiredDiskSpace(void)
// callers(1): 004f06ac FUN_004f06ac
// callees(0): 

void sce::sceNpTrophyGetRequiredDiskSpace(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[2])();
  return;
}



//==== 0064f824  ns=sce  size=0x20
// sig: undefined sceNpTrophyDestroyContext(void)
// callers(5): 004efdf4 sce::sceNpTrophyDestroyHandle; 004efe84 FUN_004efe84; 004f0094 FUN_004f0094; 004f04fc FUN_004f04fc; 004f0828 FUN_004f0828
// callees(0): 

void sce::sceNpTrophyDestroyContext(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[3])();
  return;
}



//==== 0064f844  ns=sce  size=0x20
// sig: undefined sceNpTrophyInit(void)
// callers(1): 004eff54 idol::RegisterTrophyCtxHandle
// callees(0): 

void sce::sceNpTrophyInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[4])();
  return;
}



//==== 0064f864  ns=sce  size=0x20
// sig: undefined sceNpTrophyGetGameInfo(void)
// callers(1): 004f0094 FUN_004f0094
// callees(0): 

void sce::sceNpTrophyGetGameInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[5])();
  return;
}



//==== 0064f884  ns=sce  size=0x20
// sig: undefined sceNpTrophyDestroyHandle(void)
// callers(5): 004efdf4 sce::sceNpTrophyDestroyHandle; 004efe84 FUN_004efe84; 004f0094 FUN_004f0094; 004f04fc FUN_004f04fc; 004f0828 FUN_004f0828
// callees(0): 

void sce::sceNpTrophyDestroyHandle(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[6])();
  return;
}



//==== 0064f8a4  ns=sce  size=0x20
// sig: undefined sceNpTrophyUnlockTrophy(void)
// callers(1): 004f0828 FUN_004f0828
// callees(0): 

void sce::sceNpTrophyUnlockTrophy(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[7])();
  return;
}



//==== 0064f8c4  ns=sce  size=0x20
// sig: undefined sceNpTrophyCreateContext(void)
// callers(1): 004eff54 idol::RegisterTrophyCtxHandle
// callees(0): 

void sce::sceNpTrophyCreateContext(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[8])();
  return;
}



//==== 0064f8e4  ns=sce  size=0x20
// sig: undefined sceNpTrophyGetTrophyInfo(void)
// callers(2): 004f0094 FUN_004f0094; 004f04fc FUN_004f04fc
// callees(0): 

void sce::sceNpTrophyGetTrophyInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[9])();
  return;
}



//==== 0064f904  ns=sce  size=0x20
// sig: undefined sceNpTusCreateTitleCtx(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpTusCreateTitleCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTus_func_address_table[0])();
  return;
}



//==== 0064f924  ns=sce  size=0x20
// sig: undefined sceNpTusInit(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void sce::sceNpTusInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTus_func_address_table[1])();
  return;
}



//==== 0064f944  ns=cell  size=0x20
// sig: undefined cellPadInit(void)
// callers(1): 004eb5e4 FUN_004eb5e4
// callees(0): 

void cell::cellPadInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[0])();
  return;
}



//==== 0064f964  ns=cell  size=0x20
// sig: undefined cellPadEnd(void)
// callers(1): 004eb678 FUN_004eb678
// callees(0): 

void cell::cellPadEnd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[1])();
  return;
}



//==== 0064f984  ns=cell  size=0x20
// sig: undefined cellPadSetPortSetting(void)
// callers(1): 004ec160 idol::Pad_PS_Update
// callees(0): 

void cell::cellPadSetPortSetting(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[2])();
  return;
}



//==== 0064f9a4  ns=cell  size=0x20
// sig: undefined cellPadGetData(void)
// callers(2): 004eb5e4 FUN_004eb5e4; 004ec160 idol::Pad_PS_Update
// callees(0): 

void cell::cellPadGetData(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[3])();
  return;
}



//==== 0064f9c4  ns=cell  size=0x20
// sig: undefined cellPadGetInfo2(void)
// callers(1): 004ec160 idol::Pad_PS_Update
// callees(0): 

void cell::cellPadGetInfo2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[4])();
  return;
}



//==== 0064f9e4  ns=cell  size=0x20
// sig: undefined cellSpursAttributeSetNamePrefix(void)
// callers(1): 004e64b4 FUN_004e64b4
// callees(0): 

void cell::cellSpursAttributeSetNamePrefix(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0])();
  return;
}



//==== 0064fa04  ns=cell  size=0x20
// sig: undefined _cellSpursTasksetAttributeInitialize(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(0): 

void cell::_cellSpursTasksetAttributeInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[1])();
  return;
}



//==== 0064fa24  ns=cell  size=0x20
// sig: undefined cellSpursRequestIdleSpu(void)
// callers(1): 004f1c18 FUN_004f1c18
// callees(0): 

void cell::cellSpursRequestIdleSpu(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[2])();
  return;
}



//==== 0064fa44  ns=cell  size=0x20
// sig: undefined cellSpursGetInfo(void)
// callers(4): 004f1c18 FUN_004f1c18; 004f9ee4 FUN_004f9ee4; 0062f4b8 989snd::snd_SynthInit; 00642a50 FUN_00642a50
// callees(0): 

void cell::cellSpursGetInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[3])();
  return;
}



//==== 0064fa64  ns=cell  size=0x20
// sig: undefined cellSpursEventFlagDetachLv2EventQueue(void)
// callers(5): 004de940 FUN_004de940; 005e7238 FUN_005e7238; 005e72cc FUN_005e72cc; 005e7770 FUN_005e7770; 005e7820 FUN_005e7820
// callees(0): 

void cell::cellSpursEventFlagDetachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[4])();
  return;
}



//==== 0064fa84  ns=cell  size=0x20
// sig: undefined cellSpursEventFlagWait(void)
// callers(1): 005e7608 FUN_005e7608
// callees(0): 

void cell::cellSpursEventFlagWait(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[5])();
  return;
}



//==== 0064faa4  ns=cell  size=0x20
// sig: undefined cellSpursWorkloadAttributeSetName(void)
// callers(1): 004f1c18 FUN_004f1c18
// callees(0): 

void cell::cellSpursWorkloadAttributeSetName(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[6])();
  return;
}



//==== 0064fac4  ns=cell  size=0x20
// sig: undefined cellSpursEventFlagClear(void)
// callers(1): 005e7380 FUN_005e7380
// callees(0): 

void cell::cellSpursEventFlagClear(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[7])();
  return;
}



//==== 0064fae4  ns=cell  size=0x20
// sig: undefined cellSpursGetWorkloadInfo(void)
// callers(8): 004f1a9c FUN_004f1a9c; 004f1b50 FUN_004f1b50; 004f1b84 FUN_004f1b84; 004f22c0 idol_draw::Spurs_WaitWorkloadIdle; 004f234c FUN_004f234c; 004f2550 FUN_004f2550; 004f2750 FUN_004f2750; 004f2a10 FUN_004f2a10
// callees(0): 

void cell::cellSpursGetWorkloadInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[8])();
  return;
}



//==== 0064fb04  ns=cell  size=0x20
// sig: undefined cellSpursRemoveWorkload(void)
// callers(1): 004f19e8 FUN_004f19e8
// callees(0): 

void cell::cellSpursRemoveWorkload(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[9])();
  return;
}



//==== 0064fb24  ns=cell  size=0x20
// sig: undefined _cellSpursEventFlagInitialize(void)
// callers(2): 004e64b4 FUN_004e64b4; 005e6af0 FUN_005e6af0
// callees(0): 

void cell::_cellSpursEventFlagInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[10])();
  return;
}



//==== 0064fb44  ns=cell  size=0x20
// sig: undefined cellSpursWaitForWorkloadShutdown(void)
// callers(1): 004f19e8 FUN_004f19e8
// callees(0): 

void cell::cellSpursWaitForWorkloadShutdown(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xb])();
  return;
}



//==== 0064fb64  ns=cell  size=0x20
// sig: undefined cellSpursTasksetAttributeSetName(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(0): 

void cell::cellSpursTasksetAttributeSetName(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xc])();
  return;
}



//==== 0064fb84  ns=cell  size=0x20
// sig: undefined cellSpursSetPriorities(void)
// callers(1): 004f1a6c FUN_004f1a6c
// callees(0): 

void cell::cellSpursSetPriorities(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xd])();
  return;
}



//==== 0064fba4  ns=cell  size=0x20
// sig: undefined cellSpursEventFlagAttachLv2EventQueue(void)
// callers(2): 004e64b4 FUN_004e64b4; 005e6af0 FUN_005e6af0
// callees(0): 

void cell::cellSpursEventFlagAttachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xe])();
  return;
}



//==== 0064fbc4  ns=cell  size=0x20
// sig: undefined _cellSpursAttributeInitialize(void)
// callers(1): 004e64b4 FUN_004e64b4
// callees(0): 

void cell::_cellSpursAttributeInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xf])();
  return;
}



//==== 0064fbe4  ns=cell  size=0x20
// sig: undefined cellSpursShutdownWorkload(void)
// callers(1): 004f19e8 FUN_004f19e8
// callees(0): 

void cell::cellSpursShutdownWorkload(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x10])();
  return;
}



//==== 0064fc04  ns=cell  size=0x20
// sig: undefined cellSpursJoinTaskset(void)
// callers(4): 005e7238 FUN_005e7238; 005e72cc FUN_005e72cc; 005e7770 FUN_005e7770; 005e7820 FUN_005e7820
// callees(0): 

void cell::cellSpursJoinTaskset(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x11])();
  return;
}



//==== 0064fc24  ns=cell  size=0x20
// sig: undefined cellSpursShutdownTaskset(void)
// callers(4): 005e7238 FUN_005e7238; 005e72cc FUN_005e72cc; 005e7770 FUN_005e7770; 005e7820 FUN_005e7820
// callees(0): 

void cell::cellSpursShutdownTaskset(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x12])();
  return;
}



//==== 0064fc44  ns=cell  size=0x20
// sig: undefined cellSpursInitializeWithAttribute(void)
// callers(1): 004e64b4 FUN_004e64b4
// callees(0): 

void cell::cellSpursInitializeWithAttribute(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x13])();
  return;
}



//==== 0064fc64  ns=cell  size=0x20
// sig: undefined cellSpursAddWorkloadWithAttribute(void)
// callers(1): 004f1c18 FUN_004f1c18
// callees(0): 

void cell::cellSpursAddWorkloadWithAttribute(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x14])();
  return;
}



//==== 0064fc84  ns=cell  size=0x20
// sig: undefined cellSpursCreateTasksetWithAttribute(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(0): 

void cell::cellSpursCreateTasksetWithAttribute(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x15])();
  return;
}



//==== 0064fca4  ns=cell  size=0x20
// sig: undefined cellSpursFinalize(void)
// callers(2): 004de940 FUN_004de940; 004e6734 FUN_004e6734
// callees(0): 

void cell::cellSpursFinalize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x16])();
  return;
}



//==== 0064fcc4  ns=cell  size=0x20
// sig: undefined cellSpursSetExceptionEventHandler(void)
// callers(1): 004f1c18 FUN_004f1c18
// callees(0): 

void cell::cellSpursSetExceptionEventHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x17])();
  return;
}



//==== 0064fce4  ns=cell  size=0x20
// sig: undefined _cellSpursWorkloadAttributeInitialize(void)
// callers(1): 004f1c18 FUN_004f1c18
// callees(0): 

void cell::_cellSpursWorkloadAttributeInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x18])();
  return;
}



//==== 0064fd04  ns=cell  size=0x20
// sig: undefined cellSpursReadyCountStore(void)
// callers(1): 004f1bb8 idol_draw::CmdQueue_Submit
// callees(0): 

void cell::cellSpursReadyCountStore(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x19])();
  return;
}



//==== 0064fd24  ns=sys  size=0x20
// sig: undefined sys_net_finalize_network(void)
// callers(5): 004f7c34 FUN_004f7c34; 004f7ca0 FUN_004f7ca0; 004f7eb8 FUN_004f7eb8; 004f8f68 FUN_004f8f68; 005c16e0 FUN_005c16e0
// callees(0): 

void sys::sys_net_finalize_network(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[0])();
  return;
}



//==== 0064fd44  ns=cell  size=0x20
// sig: undefined cellNetCtlNetStartDialogLoadAsync(void)
// callers(1): 004f7eb8 FUN_004f7eb8
// callees(0): 

void cell::cellNetCtlNetStartDialogLoadAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[0])();
  return;
}



//==== 0064fd64  ns=cell  size=0x20
// sig: undefined cellNetCtlNetStartDialogUnloadAsync(void)
// callers(1): 004f7a58 FUN_004f7a58
// callees(0): 

void cell::cellNetCtlNetStartDialogUnloadAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[1])();
  return;
}



//==== 0064fd84  ns=cell  size=0x20
// sig: undefined cellNetCtlGetState(void)
// callers(5): 004e668c FUN_004e668c; 004f7eb8 FUN_004f7eb8; 004f93f0 FUN_004f93f0; 005c1788 FUN_005c1788; 005c18d0 FUN_005c18d0
// callees(0): 

void cell::cellNetCtlGetState(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[2])();
  return;
}



//==== 0064fda4  ns=cell  size=0x20
// sig: undefined cellNetCtlInit(void)
// callers(2): 004e668c FUN_004e668c; 005c18d0 FUN_005c18d0
// callees(0): 

void cell::cellNetCtlInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[3])();
  return;
}



//==== 0064fdc4  ns=cell  size=0x20
// sig: undefined cellAudioInit(void)
// callers(2): 0050565c FUN_0050565c; 0064b124 FUN_0064b124
// callees(0): 

void cell::cellAudioInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[0])();
  return;
}



//==== 0064fde4  ns=cell  size=0x20
// sig: undefined cellAudioPortClose(void)
// callers(2): 005e9848 FUN_005e9848; 0064abc0 FUN_0064abc0
// callees(0): 

void cell::cellAudioPortClose(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[1])();
  return;
}



//==== 0064fe04  ns=cell  size=0x20
// sig: undefined cellAudioGetPortConfig(void)
// callers(2): 005e95f8 FUN_005e95f8; 0064b124 FUN_0064b124
// callees(0): 

void cell::cellAudioGetPortConfig(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[2])();
  return;
}



//==== 0064fe24  ns=cell  size=0x20
// sig: undefined cellAudioPortStart(void)
// callers(2): 005e99f8 FUN_005e99f8; 0064b124 FUN_0064b124
// callees(0): 

void cell::cellAudioPortStart(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[3])();
  return;
}



//==== 0064fe44  ns=cell  size=0x20
// sig: undefined cellAudioPortOpen(void)
// callers(2): 005e95f8 FUN_005e95f8; 0064b124 FUN_0064b124
// callees(0): 

void cell::cellAudioPortOpen(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[4])();
  return;
}



//==== 0064fe64  ns=cell  size=0x20
// sig: undefined L10nConvertStr(void)
// callers(1): 00503ccc FUN_00503ccc
// callees(0): 

void cell::L10nConvertStr(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellL10n_func_address_table[0])();
  return;
}



//==== 0064fe84  ns=sce  size=0x20
// sig: undefined sceNpDrmIsAvailable2(void)
// callers(0): 
// callees(0): 

void sce::sceNpDrmIsAvailable2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x1a])();
  return;
}



//==== 0064fea4  ns=cell  size=0x20
// sig: undefined cellFsRmdir(void)
// callers(0): 
// callees(0): 

void cell::cellFsRmdir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[4])();
  return;
}



//==== 0064fec4  ns=cell  size=0x20
// sig: undefined cellFsOpendir(void)
// callers(1): 00528fc8 FUN_00528fc8
// callees(0): 

void cell::cellFsOpendir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[5])();
  return;
}



//==== 0064fee4  ns=cell  size=0x20
// sig: undefined cellFsAioWrite(void)
// callers(1): 0064e5cc FUN_0064e5cc
// callees(0): 

void cell::cellFsAioWrite(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[6])();
  return;
}



//==== 0064ff04  ns=cell  size=0x20
// sig: undefined cellFsReaddir(void)
// callers(1): 00528fc8 FUN_00528fc8
// callees(0): 

void cell::cellFsReaddir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[7])();
  return;
}



//==== 0064ff24  ns=cell  size=0x20
// sig: undefined cellFsSdataOpenByFd(void)
// callers(1): 00528598 FUN_00528598
// callees(0): 

void cell::cellFsSdataOpenByFd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[8])();
  return;
}



//==== 0064ff44  ns=cell  size=0x20
// sig: undefined cellFsStat(void)
// callers(3): 005283d4 FUN_005283d4; 00528fc8 FUN_00528fc8; 00529808 FUN_00529808
// callees(0): 

void cell::cellFsStat(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[9])();
  return;
}



//==== 0064ff64  ns=cell  size=0x20
// sig: undefined cellFsAioCancel(void)
// callers(1): 0063fea8 FUN_0063fea8
// callees(0): 

void cell::cellFsAioCancel(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[10])();
  return;
}



//==== 0064ff84  ns=cell  size=0x20
// sig: undefined cellFsUnlink(void)
// callers(0): 
// callees(0): 

void cell::cellFsUnlink(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xb])();
  return;
}



//==== 0064ffa4  ns=cell  size=0x20
// sig: undefined cellFsFsync(void)
// callers(0): 
// callees(0): 

void cell::cellFsFsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xc])();
  return;
}



//==== 0064ffc4  ns=cell  size=0x20
// sig: undefined cellFsAioFinish(void)
// callers(1): 0064e6e8 FUN_0064e6e8
// callees(0): 

void cell::cellFsAioFinish(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ffe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xd])();
  return;
}



//==== 0064ffe4  ns=cell  size=0x20
// sig: undefined cellFsLseek(void)
// callers(2): 006307ac FUN_006307ac; 006401d8 FUN_006401d8
// callees(0): 

void cell::cellFsLseek(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xe])();
  return;
}



