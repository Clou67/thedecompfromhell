// sdk/libscream/sndhost.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 161 functions, 0x63ff34-0x648b10
#include <stdio.h>
#include <string.h>
#include "sdk/libscream/sndhost.h"
#include "idol/9Unk.h"
#include "idol/idol_draw.h"
#include "idol/mathfunc.h"
#include "idol/sUnk.h"
#include "sdk/cell.h"
#include "sdk/lUnk.h"
#include "sdk/libscream/989snd.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x063ff34 (0xcc bytes)
// strings: 006732a8: 'ERROR in sndHost_FileAsyncIsReadComplete: attempt to read past EOF' | 00673278: 'ERROR in sndHost_FileAsyncIsReadComplete: %s\n'

int sndHost_FileAsyncIsReadComplete
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
  printf(*(char **)(puVar1 + -0x7fe8),uVar2 & 0xffffffff);
  return *(int *)(iVar3 + 0x38);
}


// 0x0640000 (0x11c bytes)
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
  iVar4 = cellFsAioRead(ZEXT48(puVar3),puVar3 + 10,uVar5);
  uVar5 = 1;
  if (iVar4 != -0x7ffefff6) {
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar2 = FUN_0063fdcc(iVar4);
      printf(*(char **)(puVar1 + -0x7fdc),uVar2 & 0xffffffff);
      uVar5 = 0xfffffffc;
    }
  }
  return uVar5;
}


// 0x064011c (0x44 bytes)
uint FUN_0064011c(undefined4 param_1)

{
  uint uVar2;
  ulonglong uVar1;
  
  uVar2 = cellFsClose(param_1);
  uVar2 = (int)(((int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f ^ uVar2)) >> 0x1f;
  uVar1 = ((ulonglong)uVar2 & 3) << 0x1d | (ulonglong)(uVar2 >> 3);
  return (uint)(uVar1 << 3) | (uint)uVar1 >> 0x1d;
}


// 0x0640160 (0x4 bytes)
uint thunk_FUN_0064011c(undefined4 param_1)

{
  uint uVar2;
  ulonglong uVar1;
  
  uVar2 = cellFsClose(param_1);
  uVar2 = (int)(((int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f ^ uVar2)) >> 0x1f;
  uVar1 = ((ulonglong)uVar2 & 3) << 0x1d | (ulonglong)(uVar2 >> 3);
  return (uint)(uVar1 << 3) | (uint)uVar1 >> 0x1d;
}


// 0x0640164 (0x74 bytes)
undefined4
FUN_00640164(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<4> local_30;
  undefined4 uStack_2c;
  
  iVar1 = cellFsRead(param_1,param_2,param_3,local_30);
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


// 0x06401d8 (0xac bytes)
undefined8 FUN_006401d8(undefined4 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  GPiece<32> local_20;
  
  if (param_3 == 1) {
    iVar1 = cellFsLseek(param_1,param_2,1,local_20);
  }
  else if (param_3 == 0) {
    iVar1 = cellFsLseek(param_1,param_2,0,local_20);
  }
  else {
    if (param_3 != 2) {
      return 0xfffffffffffffffd;
    }
    iVar1 = cellFsLseek(param_1,param_2,2,local_20);
  }
  if (iVar1 != 0) {
    return 0xfffffffffffffffd;
  }
  return 0xffffffffffffffff;
}


// 0x0640284 (0x68 bytes)
undefined4 FUN_00640284(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];
  
  iVar1 = cellFsOpen(param_1,0,local_20,0,0);
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


// 0x06402ec (0x30 bytes)
int FUN_006402ec(void)

{
  int iVar1;
  
  iVar1 = FUN_00640284();
  if (-1 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x064031c (0x50 bytes)
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


// 0x064036c (0x64 bytes)
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


// 0x06403d0 (0x5c bytes)
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


// 0x064042c (0x60 bytes)
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


// 0x064048c (0x2c bytes)
undefined8 FUN_0064048c(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) < 1) {
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_0064042c(param_1,*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


// 0x06404b8 (0x38 bytes)
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


// 0x06404f0 (0x74 bytes)
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


// 0x0640564 (0x8 bytes)
undefined4 FUN_00640564(undefined4 *param_1)

{
  return *param_1;
}


// 0x064056c (0x14 bytes)
int FUN_0064056c(int param_1)

{
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
}


// 0x0640580 (0x74 bytes)
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


// 0x06405f4 (0x74 bytes)
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


// 0x0640668 (0x3c bytes)
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


// 0x06406a4 (0x40 bytes)
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


// 0x06406e4 (0x3c bytes)
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


// 0x0640720 (0x40 bytes)
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


// 0x0640760 (0x20 bytes)
undefined1 FUN_00640760(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2 * 0xc + 0x1c);
}


// 0x0640780 (0x20 bytes)
undefined1 FUN_00640780(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2 * 0xc + 0x1d);
}


// 0x06407a0 (0x20 bytes)
undefined4 FUN_006407a0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0xc + 0x14);
}


// 0x06407c0 (0x20 bytes)
void FUN_006407c0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0xc + 0x14) = param_3;
  return;
}


// 0x06407e0 (0x20 bytes)
undefined4 FUN_006407e0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0xc + 0x18);
}


// 0x0640800 (0x20 bytes)
void FUN_00640800(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0xc + 0x18) = param_3;
  return;
}


// 0x0640820 (0x50 bytes)
void FUN_00640820(undefined4 *param_1,undefined4 param_2)

{
  memset(param_1,0,0xd4);
  FUN_0064031c(param_1);
  *param_1 = param_2;
  return;
}


// 0x0640870 (0xcc bytes)
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


// 0x064093c (0x14 bytes)
longlong FUN_0064093c(longlong *param_1)

{
  return (longlong)*(int *)((int)param_1 + 0x1c) + *param_1;
}


// 0x0640950 (0x3c bytes)
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


// 0x064098c (0x94 bytes)
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


// 0x0640a20 (0x218 bytes)
int FUN_00640a20(longlong *param_1,void *param_2,uint param_3,uint *param_4,undefined4 param_5,
                undefined1 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint __n;
  GPiece<24> local_70;
  
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
        memcpy(param_2,(void *)(iVar3 + *(int *)(param_1 + 2)),__n);
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


// 0x0640c38 (0x4c bytes)
uint FUN_00640c38(void)

{
  if (((*(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) & 1) != 0) &&
     (**(int **)(PTR_PTR_0071b074 + -0x7ffc) != 0)) {
    return *(uint *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x2b4c) >> 1 & 1;
  }
  return 0;
}


// 0x0640c84 (0x18 bytes)
double FUN_00640c84(void)

{
  return (double)**(float **)(PTR_PTR_0071b074 + -0x7ff8);
}


// 0x0640c9c (0x18 bytes)
undefined4 FUN_00640c9c(void)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x54);
}


// 0x0640cb4 (0x18 bytes)
undefined4 FUN_00640cb4(void)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x5c);
}


// 0x0640ccc (0x48 bytes)
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


// 0x0640d14 (0x18 bytes)
undefined4 FUN_00640d14(void)

{
  return **(undefined4 **)(PTR_PTR_0071b074 + -0x7fec);
}


// 0x0640d2c (0x18 bytes)
undefined4 FUN_00640d2c(void)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x1f8);
}


// 0x0640d44 (0x10c bytes)
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


// 0x0640e50 (0x74 bytes)
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


// 0x0640ec4 (0x74 bytes)
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


// 0x0640f38 (0x30 bytes)
void FUN_00640f38(double param_1,int param_2)

{
  if (*(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x154) != 0) {
    *(float *)(param_2 * 4 + *(int *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x154)) =
         (float)param_1;
  }
  return;
}


// 0x0640f68 (0x20 bytes)
double FUN_00640f68(void)

{
  return *(double *)(*(int *)(PTR_PTR_0071b074 + -0x8000) + 0x1a8) *
         *(double *)(PTR_PTR_0071b074 + -0x7fe0);
}


// 0x0640f88 (0x18c bytes)
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


// 0x0641114 (0x10 bytes)
void FUN_00641114(void)

{
  FUN_00640f88(0,0xffff);
  return;
}


// 0x0641124 (0x10 bytes)
void FUN_00641124(void)

{
  FUN_00640f88(1,0xffff);
  return;
}


// 0x0641134 (0x5b8 bytes)
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


// 0x06416ec (0xb4 bytes)
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


// 0x06417a0 (0x170 bytes)
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


// 0x0641910 (0x12c bytes)
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
  GPiece<1040> auStack_438;
  
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


// 0x0641a3c (0x11c bytes)
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


// 0x0641b58 (0x368 bytes)
// strings: 006734e8: "brb_CreateRackUnit(): Requested polyphony (%d) for rack unit '%s' (%s) is less than is possible (%d).\nYou may be wasting CPU!" | 00673450: 'GetPluginClassFromSID(): SID 0x%X was not registered in session.' | 006734a8: 'brb_CreateRackUnit(): SID 0x%X was not registered in session!' | 00673598: "brb_CreateRackUnit(): Requested polyphony (%d) for rack unit '%s' (%s) exceeds the maximum system polyphony of %d!" | 00673568: 'brb_CreateRackUnit(): OUT OF MEM for SID 0x%X!'

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
  GPiece<4> local_b0;
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


// 0x0641ec0 (0xc4 bytes)
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


// 0x0641f84 (0xdc bytes)
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


// 0x0642060 (0x40 bytes)
void FUN_00642060(undefined8 param_1,undefined8 param_2)

{
  FUN_00646858(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f94),param_1,param_2);
  return;
}


// 0x06420a0 (0x44 bytes)
undefined8 FUN_006420a0(undefined8 param_1,undefined8 param_2)

{
  FUN_00645cc4(*(undefined4 *)(PTR_PTR_0071b074 + -0x7f78),param_1,param_2);
  return 0;
}


// 0x06420e4 (0xa0 bytes)
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


// 0x0642184 (0x194 bytes)
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


// 0x0642318 (0x3c bytes)
undefined4 FUN_00642318(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c380(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1);
  return uVar1;
}


// 0x0642354 (0x3c bytes)
undefined4 FUN_00642354(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c168(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1);
  return uVar1;
}


// 0x0642390 (0x4c bytes)
undefined4 FUN_00642390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c764(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1,param_2,param_3);
  return uVar1;
}


// 0x06423dc (0x4c bytes)
undefined4 FUN_006423dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0064c428(*(undefined4 *)(PTR_PTR_0071b074 + -0x7fac),param_1,param_2,param_3);
  return uVar1;
}


// 0x0642428 (0xa4 bytes)
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


// 0x06424cc (0x128 bytes)
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
    iVar3 = printf(*(char **)(puVar1 + -0x7f4c),param_1 & 0xffffffff);
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
      iVar3 = printf(*(char **)(puVar1 + -0x7f4c),param_1 & 0xffffffff);
      return (longlong)iVar3;
    }
    if (param_2 == 3) {
      printf(*(char **)(PTR_PTR_0071b074 + -0x7f54));
      goto LAB_00642530;
    }
  }
  printf(*(char **)(PTR_PTR_0071b074 + -0x7f50));
  if (2 < param_2) {
LAB_00642530:
    uVar2 = FUN_005c756c(param_1 & 0xffffffff);
    return uVar2;
  }
LAB_00642574:
  iVar3 = printf(*(char **)(puVar1 + -0x7f4c),param_1 & 0xffffffff);
  return (longlong)iVar3;
}


// 0x06425f4 (0x54 bytes)
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


// 0x0642648 (0x78 bytes)
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


// 0x06426c0 (0xb0 bytes)
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


// 0x0642770 (0x78 bytes)
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


// 0x06427e8 (0x268 bytes)
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


// 0x0642a50 (0xad0 bytes)
// strings: 00673990: 'brb_Initialize(): custom report handler installed...\n' | 00673c98: 'SYNTHESIS Rack' | 00673ca8: 'SUBMIXING Rack' | 00673cb8: 'AUXILIARY Rack' | 00673cc8: 'MASTERING Rack' | 00673d40: 'core_plugins' | 00673d90: 'Output Primary' | 00673e80: 'Output Secondary' | 00673f48: 'InitOutput(): SECONDARY OUTPUT VOICE ALLOC FAILED!' | 00673b18: 'brb_Initialize(): DRIVER  ERROR!' | 006739c8: '================================================================' | 00673a10: ' BoomRangBuss (c)2007-2008 Sony Computer Entertainment America' | 00673a50: ' Version: %d.%d.%d' | 00673a68: ' Built %s at %s' | 00673a78: 'Mar  6 2012' | 00673a88: '12:06:45' | 00673a98: '================================================================\n' | 00673b98: '/app_home/audio_sys/boomrang/bin/ps3spu/gnu' | 00673bc8: '/release' | 00673ae0: 'Initialize(): OUT OF MEM for ring buffer!' | 00673930: 'brb_Initialize(): No report handler provided, installing default (TTY) report handler...\n' | 00673b40: 'brb_Initialize(): SPEAKER INITIALIZATION ERROR!' | 00673c60: 'brb_Initialize(): AUDIT SYSTEM INITIALIZATION ERROR!' | 00673640: '----------------------------------------' | 00674040: '\t\tbrb_Initialize(): OK' | 00673688: '----------------------------------------\n' | 00673d10: 'brb_Initialize(): CAPTURE INITIALIZATION ERROR!' | 00673d50: 'brb_Initialize(): Failed to register internal output plugin!' | 00673b70: 'brb_Initialize(): BUSS MANAGER ERROR!' | 00673da0: 'InitOutput(): Failed to create rack unit for internal primary output plugin!'

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
  GPiece<4> local_180;
  GPiece<4> local_17c;
  GPiece<304> auStack_178;
  
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
      sVar22 = strlen(__s);
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
      strcpy(__s,(char *)param_1[0xd]);
    }
    sVar22 = strlen(__s);
    if (sVar22 < 0x100) {
      iVar20 = FUN_0064cb60((ulonglong)*(uint *)(puVar19 + -0x7fac),param_1[0xc],
                            (ulonglong)*(uint *)(puVar19 + -0x7fac) - 0x280,__s);
      if (iVar20 < 0) {
        FUN_00641910(1,*(undefined4 *)(puVar19 + -0x7ed8));
      }
      else {
        if ((*(int *)(iVar10 + 0x24) == 0) || (*(int *)(iVar10 + 0x28) == 0)) {
          cellSpursGetInfo(param_1[0x1a],auStack_178);
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


// 0x0643520 (0x244 bytes)
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
  GPiece<16> local_40;
  
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


// 0x0643764 (0x120 bytes)
// strings: 00674128: 'brb_AllocVoice(): Invalid rack unit ID!' | 006740e8: 'brb_AllocVoice(): Unable to find rack unit with RUID 0x%llX'

undefined4 FUN_00643764(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_3c;
  GPiece<16> local_38;
  
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


// 0x0643884 (0x20c bytes)
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


// 0x0643a90 (0xbc bytes)
// strings: 00674150: 'brb_GetRackUnitByRUID(): Invalid rack unit ID!'

int FUN_00643a90(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  byte local_1c;
  GPiece<8> local_18;
  
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


// 0x0643b4c (0x44 bytes)
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


// 0x0643b90 (0x7c bytes)
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


// 0x0643c0c (0x78 bytes)
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


// 0x0643c84 (0xb4 bytes)
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


// 0x0643d38 (0x200 bytes)
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


// 0x0643f38 (0x8 bytes)
void FUN_00643f38(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  return;
}


// 0x0643f40 (0xa8 bytes)
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


// 0x0643fe8 (0x40 bytes)
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


// 0x0644028 (0x34 bytes)
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


// 0x064405c (0x1dc bytes)
// strings: 006741d0: "s_WalkFiltergraph: FEEDBACK LOOP DETECTED! Voice 0x%p from RU '%s' feeds back to itself via voice 0x%p from RU '%s'." | 00674180: "s_WalkFiltergraph: Reached maximum submix depth (%d) for '%s' stage."

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


// 0x0644238 (0x40 bytes)
uint FUN_00644238(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0064405c(param_2,param_1);
  return (int)-(uVar1 & 0xff) >> 0x1f | 1;
}


// 0x0644278 (0xc8 bytes)
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


// 0x0644340 (0x1a0 bytes)
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


// 0x06444e0 (0xec bytes)
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


// 0x06445cc (0x138 bytes)
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


// 0x0644704 (0xc8 bytes)
// strings: 00674250: 'SetName( %s ): Rack name too long! (max len: %d).'

char * FUN_00644704(int param_1,char *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  char *pcVar3;
  
  puVar1 = PTR_PTR_0071b07c;
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if (0xf < sVar2) {
      FUN_00641910(3,*(undefined4 *)(puVar1 + -0x7fec),param_2,0xf);
      param_2[0xf] = '\0';
    }
    pcVar3 = strcpy((char *)(param_1 + 0xc),param_2);
    return pcVar3;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_2;
}


// 0x06447cc (0x44 bytes)
void FUN_006447cc(undefined4 *param_1)

{
  FUN_00644704(param_1,0);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// 0x0644810 (0x3c bytes)
undefined8 FUN_00644810(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_00644704(param_1);
  return 0;
}


// 0x064484c (0x78 bytes)
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


// 0x06448c4 (0x1cc bytes)
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


// 0x0644a90 (0xec bytes)
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


// 0x0644b7c (0x108 bytes)
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


// 0x0644c84 (0x8 bytes)
undefined8 FUN_00644c84(void)

{
  return 0;
}


// 0x0644c8c (0x4 bytes)
void FUN_00644c8c(void)

{
  return;
}


// 0x0644c90 (0x34 bytes)
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


// 0x0644cc4 (0x1c bytes)
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


// 0x0644ce0 (0xc4 bytes)
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


// 0x0644da4 (0x44 bytes)
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


// 0x0644de8 (0xc0 bytes)
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


// 0x0644ea8 (0x94 bytes)
// strings: 006742f8: 'SetVoicePriority(): Voice %p is not from this rack unit (%s)!'

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


// 0x0644f3c (0xec bytes)
// strings: 00674348: 'This thread was not the first to operate this rack unit (%s)!\nFirst thread was id: 0x%X'

undefined4 FUN_00644f3c(int param_1)

{
  undefined *puVar1;
  ulonglong local_20 [2];
  
  puVar1 = PTR_PTR_0071b080;
  if ((*(uint *)(param_1 + 0x74) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x88) == 0xffffffff) {
      sys_ppu_thread_get_id(param_1 + 0x88);
      return 1;
    }
    sys_ppu_thread_get_id(local_20);
    if (*(ulonglong *)(param_1 + 0x88) != local_20[0]) {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff8),*(int *)(param_1 + 0x18) + 8,
                   *(ulonglong *)(param_1 + 0x88) & 0xffffffff);
      return 0;
    }
  }
  return 1;
}


// 0x0645028 (0xa4 bytes)
// strings: 006743a0: 'GetVoicePriority(): Voice %p is not from this rack unit (%s)!'

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


// 0x06450cc (0xcc bytes)
// strings: 00674468: 'Validate(): Attempting to access a voice in a rack unit (%s/%s) that is pending utter destruction or has possibly already been destroyed!' | 006743f0: 'Validate(): This thread was not the first to operate this rack unit (%s/%s)!\nFirst thread was id: 0x%X'

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


// 0x0645198 (0x1c8 bytes)
// strings: 00674500: 'FreeVoice(): Voice %p is not from this rack unit (%s)!'

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


// 0x0645360 (0x11c bytes)
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


// 0x064547c (0x46c bytes)
// strings: 00674548: 'AllocVoice(): Attempting to allocate a voice with priority %d. Clamping to max priority (%d)!' | 006745b8: 'AllocVoice()[%s (%s)]: WARNING: No non-paused or non-sync-start voices available!' | 00674620: 'AllocVoice()[%s (%s)]: WARNING: No non-paused voices available with priority < %d. Lowest available prio = %d (voice %d which %s paused).' | 00674610: 'is NOT'

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
    sys_process_is_stack(param_3);
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


// 0x06458e8 (0xcc bytes)
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


// 0x06459b4 (0x310 bytes)
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


// 0x0645cc4 (0x3c bytes)
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


// 0x0645d00 (0x11c bytes)
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


// 0x0645fe0 (0x84 bytes)
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


// 0x0646064 (0x134 bytes)
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


// 0x06464b0 (0x2c bytes)
void FUN_006464b0(undefined8 param_1)

{
  memset(param_1,0,0xae0);
  return;
}


// 0x06464dc (0x15c bytes)
// strings: 006746b8: 'SetSpeakerMode() Invalid speaker count: %d.'

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


// 0x0646638 (0x100 bytes)
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


// 0x0646738 (0x20 bytes)
undefined8 FUN_00646738(int param_1)

{
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return 0;
}


// 0x0646758 (0x100 bytes)
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


// 0x0646858 (0x64 bytes)
char * FUN_00646858(char *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b088;
  if (param_2 != (char *)0x0) {
    param_1 = strcpy(*(char **)(PTR_PTR_0071b088 + -0x8000),param_2);
  }
  if (param_3 != (char *)0x0) {
    param_1 = strcpy(*(char **)(puVar1 + -0x7ffc),param_3);
  }
  return param_1;
}


// 0x06468bc (0x200 bytes)
// strings: 006746f8: 'Shutdown(): waiting for recording to finish...'

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
  GPiece<4> local_50;
  GPiece<12> local_4c;
  
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
      syscall_sys_timer_usleep(10000);
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


// 0x0646abc (0x564 bytes)
// strings: 00646bac: '}@X09k' (raw) | 00674798: 'SCEA_SHARED' | 00674788: '/app_home' | 006747a8: 'brb_output_capture' | 00674738: 'Initialize(): FAILED TO ALLOCATE CAPTURE MEM BUFFER (%d kB)!'

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


// 0x0647020 (0x49c bytes)
// strings: 00674800: 'Process(): Blocking on unfinished file transfer' | 006747c0: 'Process(): failed to start async file write!'

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
  GPiece<4> local_80;
  GPiece<4> local_7c;
  GPiece<4> local_78;
  GPiece<4> local_74;
  GPiece<4> local_70;
  GPiece<4> local_6c;
  GPiece<4> local_68;
  GPiece<12> local_64;
  
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


// 0x06474bc (0xd8 bytes)
undefined8 FUN_006474bc(double param_1,double param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<16> local_28;
  
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


// 0x0647594 (0x600 bytes)
// strings: 00674878: 'Start(): FYI, recording hot swapped' | 00674798: 'SCEA_SHARED' | 006748a8: '.raw' (raw) | 006748b0: 'creating empty file %s...' | 006748d0: "Start(): couldn't create all files needed for recording!" | 006747a8: 'brb_output_capture' | 00674840: 'Start(): capture sub-system uninitialized!' | 00674918: 'Start(): no capture setup params interface found on plugin %s!' | 00674968: 'Start(): no capture buffer params interface found on plugin %s!' | 006749b8: 'Start(): no capture module found on plugin %s!'

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
  GPiece<4> local_ac;
  GPiece<24> local_a8;
  
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
      strcpy(__dest,*(char **)(puVar28 + -0x7ff4));
    }
    if (*__dest == '\0') {
      strcpy(__dest,*(char **)(puVar28 + -0x7ff4));
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
          strcpy(pcVar24,__dest);
          if (*pcVar24 == '\0') {
            iVar29 = *(int *)(puVar28 + -0x7fcc);
          }
          else {
            sVar30 = strlen(pcVar24);
            iVar29 = *(int *)(puVar28 + -0x7fcc);
            ((undefined1 *)(sVar30 + iVar29))[1] = 0;
            *(undefined1 *)(sVar30 + iVar29) = 0x2f;
          }
          FUN_005cc44c(pcVar24,pcVar22);
          FUN_005cc44c(pcVar24,*puVar32);
          sVar30 = strlen(pcVar24);
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
      strcpy(pcVar24,__dest);
      if (*pcVar24 == '\0') {
        iVar29 = *(int *)(puVar28 + -0x7fcc);
      }
      else {
        sVar30 = strlen(pcVar24);
        iVar29 = *(int *)(puVar28 + -0x7fcc);
        ((undefined1 *)(sVar30 + iVar29))[1] = 0;
        *(undefined1 *)(sVar30 + iVar29) = 0x2f;
      }
      FUN_005cc44c(pcVar24,pcVar22);
      sVar30 = strlen(pcVar24);
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


// 0x0647b94 (0x9c bytes)
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


// 0x0647c30 (0x34 bytes)
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


// 0x0647c64 (0x38 bytes)
void FUN_00647c64(undefined8 param_1,byte *param_2)

{
  ulonglong uVar1;
  
  uVar1 = storeDoubleWordConditionalIndexed
                    ((*(ulonglong *)param_1 | 1L << ((ulonglong)*param_2 + 0x20 & 0x7f)) &
                     0xffffffff03ffffff,0,param_1);
  *(ulonglong *)param_1 = uVar1;
  return;
}


// 0x0647c9c (0x2c bytes)
void FUN_00647c9c(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)param_1;
  uVar1 = storeDoubleWordConditionalIndexed
                    (uVar1 & 0xffffffff00000000 | param_2 << 0x20 | uVar1 & 0x3ffffff,0,param_1);
  *(ulonglong *)param_1 = uVar1;
  return;
}


// 0x0647cc8 (0x8c bytes)
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


// 0x0647d54 (0x34 bytes)
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


// 0x0647d88 (0x8 bytes)
undefined8 FUN_00647d88(void)

{
  return 0;
}


// 0x0647d90 (0x4 bytes)
void FUN_00647d90(void)

{
  return;
}


// 0x0647d94 (0x3c bytes)
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


// 0x0647dd0 (0xa4 bytes)
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


// 0x0647e74 (0x24 bytes)
void FUN_00647e74(int param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  uVar2 = storeDoubleWordConditionalIndexed(*puVar1 | 8,0,ZEXT48(puVar1));
  *puVar1 = uVar2;
  return;
}


// 0x0647e98 (0x38 bytes)
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


// 0x0647ed0 (0x64 bytes)
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


// 0x0647f34 (0x6c bytes)
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


// 0x0647fa0 (0x40 bytes)
undefined8 FUN_00647fa0(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00647cc8(*(undefined4 *)(param_1 + 0x10),1,*(uint *)(*(int *)(param_1 + 0x18) + 0x74) >> 1 & 1
               ,param_2,param_3);
  return 0;
}


// 0x0647fe0 (0x364 bytes)
// strings: 00674c60: "FindModuleData(): [%s ('%s')] States version mismatch @ slot index %d (requested version = %d, actual version = %d)!\n(Most likely plugin code out of s" | 00674ab0: "FindModuleData(): [%s ('%s')] Param version mismatch @ slot index %d (requested version = %d, actual version = %d)!\n(Most likely out of sync data)." | 00674b50: "FindModuleData(): [%s ('%s')] Params GUID mismatch @ slot index %d (requested GUID = 0x%0x, actual GUID = 0x%0x)!\n(Most likely out of sync data)." | 00674bf0: "FindModuleData(): [%s ('%s')] States requested @ slot index %d but module ID provided was for params!" | 00674d18: "FindModuleData(): [%s ('%s')] States GUID mismatch @ slot index %d (requested GUID = 0x%0x, actual GUID = 0x%0x)!\n(Most likely plugin code out of sync" | 00674a40: "FindModuleData(): [%s ('%s')] Params requested @ slot index %d but module ID provided was for states!"

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


// 0x0648344 (0x34 bytes)
undefined8 FUN_00648344(int param_1,undefined8 param_2)

{
  FUN_00645028(*(undefined4 *)(param_1 + 0x18),param_1,param_2);
  return 0;
}


// 0x0648378 (0x30 bytes)
undefined4 FUN_00648378(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00645198(*(undefined4 *)(param_1 + 0x18),param_1);
  return uVar1;
}


// 0x06483a8 (0x84 bytes)
// strings: 00674dd0: 'SetPriority(): Attempting to set voice to priority %d. Clamping to max priority (%d)!'

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


// 0x064842c (0x15c bytes)
void FUN_0064842c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  char local_50;
  char local_4c;
  GPiece<16> local_48;
  
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


// 0x0648588 (0x68 bytes)
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


// 0x06485f0 (0x108 bytes)
undefined4 FUN_006485f0(int param_1,undefined8 param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  GPiece<4> local_40;
  GPiece<4> local_3c;
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


// 0x06486f8 (0x38 bytes)
undefined8 FUN_006486f8(int param_1)

{
  GPiece<32> local_20;
  
  FUN_00647c64(*(undefined4 *)(param_1 + 0x10),local_20);
  return 0;
}


// 0x0648730 (0x90 bytes)
undefined4 FUN_00648730(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<4> local_40;
  GPiece<20> auStack_3c;
  
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


// 0x06487c0 (0x60 bytes)
int FUN_006487c0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  GPiece<4> local_30;
  GPiece<20> auStack_2c;
  
  uVar1 = FUN_00647fe0(param_1,local_30,auStack_2c,0);
  *param_3 = uVar1;
  return (((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1e & 2) - 2;
}


// 0x0648820 (0x58 bytes)
undefined4 FUN_00648820(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<4> local_20;
  GPiece<12> auStack_1c;
  
  iVar2 = FUN_00647fe0(param_1,local_20,auStack_1c,1);
  uVar1 = 0xfffffffe;
  if (iVar2 != 0) {
    uVar1 = 0;
    *param_3 = iVar2;
  }
  return uVar1;
}


// 0x0648878 (0xcc bytes)
undefined8 FUN_00648878(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  GPiece<24> local_40;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 0x18) + 0xa4);
  FUN_00647ed0(param_1,local_40);
  memcpy((void *)0x0,param_2,uVar1 & 0xfffffffc);
  if (param_3 != 0) {
    FUN_00647fa0(param_1,0);
    return 0;
  }
  FUN_00647f34(param_1,0xffffffff,0);
  return 0;
}


// 0x0648944 (0x88 bytes)
undefined4 FUN_00648944(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<4> local_30;
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


// 0x06489cc (0x88 bytes)
undefined4 FUN_006489cc(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<4> local_30;
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


// 0x0648a54 (0xbc bytes)
undefined4 FUN_00648a54(int param_1,undefined1 *param_2,void *param_3)

{
  void *__dest;
  undefined4 uVar1;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  int local_38 [4];
  
  __dest = (void *)FUN_00647fe0(param_1,local_3c,local_38,1);
  uVar1 = 0xfffffffe;
  if (__dest != (void *)0x0) {
    FUN_00647c30(*(undefined4 *)(param_1 + 0x10),*param_2);
    memcpy(__dest,param_3,local_38[0] * 4 + 4);
    FUN_00647c64(*(undefined4 *)(param_1 + 0x10),local_40);
    uVar1 = 0;
  }
  return uVar1;
}


