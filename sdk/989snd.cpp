// sdk/989snd.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 524 functions, 0x61948c-0x63fb20
#include <stdio.h>
#include <string.h>
#include "sdk/989snd.h"
#include "idol/9Unk.h"
#include "idol/9Unk2.h"
#include "sdk/9Unk.h"
#include "sdk/cell.h"
#include "sdk/lUnk.h"
#include "sdk/lUnk2.h"
#include "sdk/libc/xscanf.h"
#include "sdk/libc/xstoul.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libscream/LFO.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x061948c (0x68 bytes)
void snd_Printf(char asdf)

{
  if (**(int **)(PTR_PTR_0071b018 + -0x7fec) == 0) {
    FUN_00619370(asdf,&stack0x00000038);
  }
  return;
}


// 0x06194f4 (0xb4 bytes)
// strings: 0066c0e8: 'SCREAM Error: cause %d -> %u, %u, %u, %u\n'

void FUN_006194f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  if ((undefined4 *)**(int **)(PTR_PTR_0071b018 + -0x7ff4) == (undefined4 *)0x0) {
    if (**(int **)(PTR_PTR_0071b018 + -0x7fec) == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b018 + -0x7fe8));
      return;
    }
  }
  else {
    (**(code **)**(int **)(PTR_PTR_0071b018 + -0x7ff4))
              (param_1,param_2,param_3,param_4,param_5 & 0xffffffff,param_5);
  }
  return;
}


// 0x06195a8 (0xc8 bytes)
char * FUN_006195a8(char *param_1,uint param_2,undefined4 param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (param_1 != (char *)0x0) {
    if (sVar1 + 1 < param_2) {
      param_1[param_2 - 1] = '\0';
      strcpy(param_1 + sVar1,param_3,(param_2 - sVar1) + -1);
      return param_1;
    }
  }
  return param_1;
}


// 0x0619670 (0x84 bytes)
int FUN_00619670(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + param_2 + -1) = 0;
      strcpy(param_1,param_3,param_2 + -1);
      return param_1;
    }
  }
  return param_1;
}


// 0x06196f4 (0x24 bytes)
int32_t FUN_006196f4(char *param_1)

{
  int32_t iVar1;
  
  iVar1 = printf(param_1);
  return iVar1;
}


// 0x0619718 (0x7c bytes)
ulonglong FUN_00619718(byte *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((*param_1 & 0x1f) == 4) {
    uVar3 = -(ulonglong)param_1[0x245] >> 0x3f;
  }
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    lVar2 = FUN_00619718(iVar1);
    uVar3 = uVar3 + lVar2;
  }
  return uVar3 & 0xffffffff;
}


// 0x0619794 (0xb4 bytes)
ulonglong FUN_00619794(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short sVar3;
  
  uVar2 = (ulonglong)*param_1;
  if ((((*param_1 >> 0x18 & 0x1f) != 4) || (*(char *)((int)param_1 + 0x245) == '\0')) ||
     (sVar3 = (short)param_2, param_2 = param_2 - 1, sVar3 != 0)) {
    uVar1 = param_1[0x8b];
    uVar2 = param_2;
    while( true ) {
      if (uVar1 == 0) {
        return (longlong)(short)uVar2 & 0xffffffff;
      }
      uVar2 = FUN_00619794(uVar1,(short)uVar2);
      if (((uint)(uVar2 >> 0x18) & 0x1f) == 4) break;
      uVar1 = *(uint *)(uVar1 + 0x230);
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x0619848 (0x18 bytes)
undefined4 FUN_00619848(void)

{
  return **(undefined4 **)(PTR_PTR_0071b01c + -0x8000);
}


// 0x0619860 (0x70 bytes)
undefined4 FUN_00619860(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = **(int **)(PTR_PTR_0071b01c + -0x7ffc) + 0x1f;
  uVar3 = ((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0);
  if (0 < (int)uVar3) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar4 = (ulonglong)uVar3;
    piVar2 = (int *)(param_1 + 0x18);
    while( true ) {
      if (iVar1 != 0) {
        return 1;
      }
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) break;
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  return 0;
}


// 0x06198d0 (0x44 bytes)
undefined4 FUN_006198d0(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x22c);
  while( true ) {
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    if ((*pbVar1 & 0x1f) == 4) break;
    pbVar1 = *(byte **)(pbVar1 + 0x230);
  }
  return 1;
}


// 0x0619914 (0x4c bytes)
int * FUN_00619914(int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 8;
  piVar2 = *(int **)(PTR_PTR_0071b01c + -0x7ff8);
  while( true ) {
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) break;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 1;
    if (lVar3 == 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}


// 0x0619960 (0x30 bytes)
undefined4 FUN_00619960(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b01c + -0x7ff8) + param_1 * 4);
  }
  return uVar1;
}


// 0x0619990 (0x24 bytes)
void FUN_00619990(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x130);
  param_2[1] = *(undefined4 *)(param_1 + 300);
  param_2[2] = *(undefined4 *)(param_1 + 0x134);
  param_2[3] = *(undefined4 *)(param_1 + 0x138);
  return;
}


// 0x06199b4 (0x24 bytes)
void FUN_006199b4(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x148);
  param_2[1] = *(undefined4 *)(param_1 + 0x144);
  param_2[2] = *(undefined4 *)(param_1 + 0x14c);
  param_2[3] = *(undefined4 *)(param_1 + 0x150);
  return;
}


// 0x06199d8 (0x24 bytes)
void FUN_006199d8(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x158);
  param_2[1] = *(undefined4 *)(param_1 + 0x154);
  param_2[2] = *(undefined4 *)(param_1 + 0x15c);
  param_2[3] = *(undefined4 *)(param_1 + 0x160);
  return;
}


// 0x06199fc (0x94 bytes)
void FUN_006199fc(int param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_0061db74(0x20);
  *param_2 = (float)dVar1;
  param_2[1] = *(float *)(param_1 + 0x11c);
  param_2[2] = *(float *)(param_1 + 0x120);
  param_2[3] = *(float *)(param_1 + 0x124);
  param_2[4] = *(float *)(param_1 + 0x128);
  dVar1 = (double)FUN_0061db74(*(undefined1 *)(param_1 + 0x10));
  param_2[5] = (float)dVar1;
  dVar1 = (double)FUN_0061dab4(*(undefined1 *)(param_1 + 0x10));
  param_2[6] = (float)dVar1;
  param_2[7] = *(float *)(param_1 + 0x1d0);
  return;
}


// 0x0619a90 (0xd8 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_00619a90(int *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    iVar1 = param_1[0x16];
  }
  else {
    iVar1 = param_1[0x16];
  }
  if (iVar1 != 0) {
    do {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar3 + 0xc);
    } while (iVar1 != 0);
    *(int *)(iVar3 + 0xc) = param_2;
    return;
  }
  param_1[0x16] = param_2;
  return;
}


// 0x0619b68 (0xe4 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

uint * FUN_00619b68(int param_1,uint param_2)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar1 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return (uint *)0x0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  puVar2 = *(uint **)(param_1 + 0x58);
  if (puVar2 != (uint *)0x0) {
    while ((param_2 & *puVar2) == 0) {
      puVar2 = (uint *)puVar2[3];
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
  }
  return puVar2;
}


// 0x0619c4c (0x8c bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_00619c4c(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b01c;
  if (param_1 == (undefined4 *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  if (param_1[3] != 0) {
    FUN_00619c4c(param_1[3]);
  }
  *param_1 = 0;
  return;
}


// 0x0619cd8 (0x144 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

undefined4 FUN_00619cd8(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_0071b01c;
  if (((param_2 == (int *)0x0) || (-1 < *param_2)) || (param_1 == (int *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  if ((param_1[3] != 0) && (iVar2 = FUN_00619cd8(param_1[3],param_2), iVar2 == 1)) {
    return 1;
  }
  if (-1 < *param_1) {
    if (param_1[2] == 1) {
      iVar2 = param_1[1] + -1;
      param_1[1] = iVar2;
    }
    else {
      iVar2 = param_1[1];
    }
    if (iVar2 == 0) {
      uVar3 = (**(code **)param_1[4])(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}


// 0x0619e1c (0x144 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_00619e1c(uint *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((((param_1 == (uint *)0x0) || (7 < param_3)) || (param_2 < 0)) ||
     ((0x100 < param_2 || (param_4 < 0x234)))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  if (0 < param_2) {
    piVar1 = *(int **)(puVar2 + -0x7ffc);
    iVar3 = 0;
    while( true ) {
      *(undefined1 *)(param_1 + 4) = 0;
      *param_1 = iVar3 << 0x10 | param_3 << 0x18 | 1;
      param_1[1] = 0;
      iVar4 = *piVar1;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      if (0 < iVar4) {
        iVar4 = 0;
        puVar5 = param_1 + 5;
        do {
          iVar4 = iVar4 + 1;
          *puVar5 = 0;
          uVar6 = *piVar1 + 0x1f;
          puVar5 = puVar5 + 1;
        } while (iVar4 < (int)(((int)uVar6 >> 5) + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)));
      }
      iVar3 = iVar3 + 1;
      if (param_2 == iVar3) break;
      param_1 = (uint *)((int)param_1 + param_4);
    }
  }
  return;
}


// 0x0619f60 (0x70 bytes)
void FUN_00619f60(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar1 = PTR_PTR_0071b01c;
  FUN_00619e1c(*(undefined4 *)(PTR_PTR_0071b01c + -0x7fe0),0x100,5,0x24c);
  lVar3 = 0x40;
  puVar2 = *(undefined4 **)(puVar1 + -0x7fe4);
  do {
    puVar2[3] = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 9;
  } while (lVar3 != 0);
  puVar2 = *(undefined4 **)(puVar1 + -0x7fdc);
  **(undefined4 **)(puVar1 + -0x8000) = 0;
  *puVar2 = 0;
  return;
}


// 0x0619fd0 (0x120 bytes)
// strings: 0066c138: 'common/sndhand.cpp' | 0066c150: '%s(%d) : Registered sound type %d handler missmatch.\n' | 0066c118: '%s(%d) : Invalid parameter.\n'

void FUN_00619fd0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (7 < *(uint *)(param_1 + 4))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar4 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fe8),0);
    snd_SynthLock();
    iVar1 = *(int *)(puVar4 + -0x7ff8);
    iVar3 = *(int *)(param_1 + 4) * 4;
    iVar2 = *(int *)(iVar1 + iVar3);
  }
  else {
    snd_SynthLock(param_1,param_2,0x960);
    iVar1 = *(int *)(puVar4 + -0x7ff8);
    iVar3 = *(int *)(param_1 + 4) * 4;
    iVar2 = *(int *)(iVar1 + iVar3);
  }
  if (iVar2 != param_1) {
    snd_Printf((char)*(undefined4 *)(puVar4 + -0x7fd8));
    snd_SynthUnlock();
    return;
  }
  *(undefined4 *)(iVar1 + iVar3) = 0;
  snd_SynthUnlock();
  return;
}


// 0x061a0f0 (0x138 bytes)
// strings: 0066c138: 'common/sndhand.cpp' | 0066c188: '%s(%d) : Handler for sound type %d already registered.\n' | 0066c118: '%s(%d) : Invalid parameter.\n'

void FUN_0061a0f0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  puVar8 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (7 < *(uint *)(param_1 + 4))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar8 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    snd_SynthLock();
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(puVar8 + -0x7ff8);
    iVar7 = iVar1 * 4;
    iVar6 = *(int *)(iVar2 + iVar7);
  }
  else {
    snd_SynthLock(param_1,param_2,0x93d);
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(puVar8 + -0x7ff8);
    iVar7 = iVar1 * 4;
    iVar6 = *(int *)(iVar2 + iVar7);
  }
  if (iVar6 != 0) {
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fd4));
    snd_SynthUnlock();
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(iVar2 + iVar7) = param_1;
  FUN_00619e1c(uVar5,uVar3,iVar1,uVar4);
  snd_SynthUnlock();
  return;
}


// 0x061a228 (0x124 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061a228(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == (uint *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar3 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fe8),0);
    if (param_2 == (uint *)0x0) {
      return;
    }
    snd_SynthLock();
    puVar1 = (uint *)param_1[0x16];
    *param_2 = *param_2 & 0xfffffffe;
  }
  else {
    snd_SynthLock();
    puVar1 = (uint *)param_1[0x16];
    *param_2 = *param_2 & 0xfffffffe;
  }
  if (param_2 == puVar1) {
    param_1[0x16] = param_2[3];
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (uint *)0x0) goto LAB_0061a2c8;
      puVar1 = (uint *)puVar2[3];
    } while (param_2 != (uint *)puVar2[3]);
    puVar2[3] = param_2[3];
  }
LAB_0061a2c8:
  snd_SynthUnlock();
  return;
}


// 0x061a34c (0xcc bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061a34c(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  iVar2 = FUN_00619b68(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_0061a228(param_1,iVar2);
  return;
}


// 0x061a418 (0xe0 bytes)
uint * FUN_0061a418(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  snd_SynthLock();
  if (0 < (int)param_2) {
    uVar4 = (ulonglong)param_2;
    uVar1 = *param_1;
    puVar3 = (uint *)(param_3 + (int)param_1);
    while( true ) {
      puVar2 = puVar3;
      if ((uVar1 & 1) == 0) {
        param_1[3] = 0;
        *param_1 = uVar1 | 1;
        snd_SynthUnlock();
        return param_1;
      }
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) break;
      uVar1 = *puVar2;
      puVar3 = (uint *)((int)puVar2 + param_3);
      param_1 = puVar2;
    }
  }
  snd_SynthUnlock();
  return (uint *)0x0;
}


// 0x061a4f8 (0xc0 bytes)
int FUN_0061a4f8(void)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar3 = PTR_PTR_0071b01c;
  snd_SynthLock();
  puVar1 = *(uint **)(puVar3 + -0x7fe4);
  iVar4 = 0;
  iVar2 = *(int *)(puVar3 + -0x7fe4);
  lVar6 = 0x40;
  puVar5 = puVar1;
  do {
    if ((*puVar5 & 1) == 0) {
      *(undefined4 *)(iVar2 + iVar4) = 1;
      *(undefined4 *)(iVar4 + iVar2 + 0xc) = 0;
      snd_SynthUnlock();
      return iVar4 + (int)puVar1;
    }
    iVar4 = iVar4 + 0x24;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 9;
  } while (lVar6 != 0);
  snd_SynthUnlock();
  return 0;
}


// 0x061a5b8 (0x128 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

uint FUN_0061a5b8(int param_1,uint param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  puVar2 = PTR_PTR_0071b01c;
  if (((param_1 == 0) || ((int)param_2 < 0)) ||
     (piVar1 = *(int **)(PTR_PTR_0071b01c + -0x7ffc), *piVar1 < (int)param_2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    piVar1 = *(int **)(puVar2 + -0x7ffc);
  }
  snd_SynthLock();
  if ((int)param_2 < *piVar1) {
    uVar4 = (ulonglong)(*piVar1 - param_2);
    do {
      iVar3 = ((int)param_2 >> 5) + (uint)((int)param_2 < 0 && (param_2 & 0x1f) != 0);
      if ((1 << (param_2 + iVar3 * -0x20 & 0x3f) & *(uint *)(param_1 + iVar3 * 4 + 0x14)) != 0)
      goto LAB_0061a670;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_2 = 0xffffffff;
LAB_0061a670:
  snd_SynthUnlock();
  return param_2;
}


// 0x061a6e0 (0xb0 bytes)
int FUN_0061a6e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (iVar2 = *(int *)(param_1 + 0x22c), iVar2 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_0061a6e0(iVar2,param_2);
      iVar2 = *(int *)(iVar2 + 0x230);
      iVar3 = iVar3 + iVar1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_0061a5b8(param_1,iVar2);
    iVar2 = iVar1 + 1;
    if (iVar1 < 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


// 0x061a790 (0x140 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

ulonglong FUN_0061a790(ulonglong param_1)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_PTR_0071b01c;
  uVar3 = param_1 >> 0x10 & 0xff;
  if (0xff < uVar3) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  if (-1 < (int)param_1) {
    return 0;
  }
  uVar5 = param_1 >> 0x18 & 0x1f;
  snd_SynthLock();
  uVar4 = (uint)uVar3;
  if ((int)uVar5 == 5) {
    if (uVar4 < 0x100) {
      uVar3 = uVar3 * 0x24c + (ulonglong)*(uint *)(puVar2 + -0x7fe0);
      goto LAB_0061a838;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(puVar2 + -0x7ff8) + (int)(uVar5 << 2));
    if ((iVar1 != 0) && ((int)uVar4 < *(int *)(iVar1 + 8))) {
      uVar3 = (longlong)(int)uVar4 * (longlong)*(int *)(iVar1 + 0xc) +
              (ulonglong)*(uint *)(iVar1 + 0x10);
LAB_0061a838:
      uVar5 = 0;
      if (((int *)uVar3 == (int *)0x0) ||
         (uVar5 = uVar3 & 0xffffffff, *(int *)uVar3 == (int)param_1)) goto LAB_0061a858;
    }
  }
  uVar5 = 0;
LAB_0061a858:
  snd_SynthUnlock();
  return uVar5;
}


// 0x061a8d0 (0x184 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp' | 0066c1f8: '%s(%d) : Handle %x is already a child.\n' | 0066c1c0: '%s(%d) : Attempt to make handle %x a child of itself.\n'

void FUN_0061a8d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (-1 < param_2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  snd_SynthLock();
  iVar3 = FUN_0061a790(param_2);
  if (iVar3 != 0) {
    if (param_1 == iVar3) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fd0));
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7ff4));
      if (**(char **)(puVar2 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    }
    if (*(int *)(iVar3 + 0x228) != 0) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fcc));
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7ff4));
      if (**(char **)(puVar2 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x22c);
    *(int *)(iVar3 + 0x228) = param_1;
    *(int *)(param_1 + 0x22c) = iVar3;
    *(undefined4 *)(iVar3 + 0x230) = uVar1;
  }
  snd_SynthUnlock();
  return;
}


// 0x061aa54 (0x218 bytes)
// strings: 0066c220: '%s(%d) : Handler %x already on list.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c248: '%s(%d) : Corrupt handler list.\n'

void FUN_0061aa54(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_0071b01c;
  if ((param_1 == (uint *)0x0) || ((int)*param_1 < 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar6 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fe8),0);
  }
  snd_SynthLock();
  puVar1 = *(uint **)(puVar6 + -0x8000);
  for (puVar2 = (uint *)*puVar1; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x89]) {
    if (param_1 == puVar2) {
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc8));
    }
  }
  piVar3 = *(int **)(puVar6 + -0x7fdc);
  param_1[0x89] = 0;
  iVar4 = *piVar3;
  *param_1 = *param_1 | 0x80000000;
  param_1[0x88] = 0;
  if (iVar4 == 0) {
    if (*puVar1 != 0) goto LAB_0061abf4;
LAB_0061ac48:
    *puVar1 = (uint)param_1;
    *piVar3 = (int)param_1;
  }
  else {
    if (*puVar1 == 0) {
LAB_0061abf4:
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc4));
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
      if (**(char **)(puVar6 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fe8),0);
      if (*puVar1 == 0) goto LAB_0061ac48;
    }
    puVar2 = (uint *)*piVar3;
    if (param_1 == puVar2) {
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc4));
    }
    else if ((param_1[1] & 0x40000) == 0) {
      param_1[0x88] = (uint)puVar2;
      puVar2[0x89] = (uint)param_1;
      *piVar3 = (int)param_1;
    }
    else {
      uVar5 = *puVar1;
      param_1[0x88] = 0;
      param_1[0x89] = uVar5;
      *(uint **)(uVar5 + 0x220) = param_1;
      *puVar1 = (uint)param_1;
    }
  }
  *(int *)(*(int *)(puVar6 + -0x7fc0) + *(char *)(param_1 + 4) * 4) =
       *(int *)(*(int *)(puVar6 + -0x7fc0) + *(char *)(param_1 + 4) * 4) + 1;
  snd_SynthUnlock();
  return;
}


// 0x061ac6c (0xb8 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061ac6c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061ac6c(iVar1);
  }
  FUN_0061f0ec(param_1);
  return;
}


// 0x061ad24 (0xb8 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061ad24(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061ad24(iVar1);
  }
  FUN_0061f100(param_1);
  return;
}


// 0x061addc (0xb4 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061addc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061addc(iVar1);
  }
  FUN_0061f114(param_1);
  return;
}


// 0x061ae90 (0xb4 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061ae90(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061ae90(iVar1);
  }
  FUN_0061f128(param_1);
  return;
}


// 0x061af44 (0x184 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061af44(byte *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b01c;
  if ((param_1 == (byte *)0x0) || (-1 < *(int *)param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar4 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fe8),0);
  }
  if (param_2 != 0) {
    for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
      FUN_0061af44(iVar1,1,param_3);
    }
  }
  uVar2 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar2 & ~param_3;
  if ((uVar2 & ~param_3 & 0xe) == 0) {
    FUN_0061f13c(param_1);
    if ((((uint)((ulonglong)*param_1 & 0x1f) < 8) &&
        (iVar1 = *(int *)(*(int *)(puVar4 + -0x7ff8) + (int)(((ulonglong)*param_1 & 0x1f) << 2)),
        iVar1 != 0)) && (puVar3 = *(undefined4 **)(iVar1 + 0x24), puVar3 != (undefined4 *)0x0)) {
      (*(code *)*puVar3)(param_1,0);
      return;
    }
  }
  return;
}


// 0x061b0c8 (0x150 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061b0c8(byte *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b01c;
  if ((param_1 == (byte *)0x0) || (-1 < *(int *)param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar3 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fe8),0);
  }
  if (param_2 != 0) {
    for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
      FUN_0061b0c8(iVar1,1,param_3);
    }
  }
  FUN_0061f3e0(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3;
  if ((((uint)((ulonglong)*param_1 & 0x1f) < 8) &&
      (iVar1 = *(int *)(*(int *)(puVar3 + -0x7ff8) + (int)(((ulonglong)*param_1 & 0x1f) << 2)),
      iVar1 != 0)) && (puVar2 = *(undefined4 **)(iVar1 + 0x24), puVar2 != (undefined4 *)0x0)) {
    (*(code *)*puVar2)(param_1,1);
  }
  return;
}


// 0x061b218 (0x654 bytes)
// strings: 0066c268: '%s(%d) : Corrupt handler list found unlinking handle %x.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c300: '%s(%d) : Corrupt family list found unlinking handle %x.\n' | 0066c2d0: '%s(%d) : Invalid playing handler count.\n' | 0066c2a8: '%s(%d) : Handler with active LFO\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b01c : 0x0061b898 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0061b218(uint *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar8 = PTR_PTR_0071b01c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == (uint *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar8 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    return;
  }
  if (-1 < (int)*param_1) {
    return;
  }
  bVar1 = param_2 == 0;
  if (((bVar1) && (param_1[0x8a] == 0)) && (param_1[0x8b] != 0)) {
    param_2 = 1;
    bVar1 = false;
    FUN_006194f4(0x78,0,0,0,0);
  }
  snd_SynthLock();
  if (((param_1[1] & 0x20000) != 0) &&
     ((undefined4 *)**(int **)(puVar8 + -0x7fbc) != (undefined4 *)0x0)) {
    (**(code **)**(int **)(puVar8 + -0x7fbc))(*param_1,param_1[2],0);
  }
  if (!bVar1) {
    uVar16 = param_1[0x8b];
    while (uVar16 != 0) {
      FUN_0061b218(uVar16,param_2);
      uVar16 = param_1[0x8b];
    }
  }
  if (param_1[0x16] != 0) {
    FUN_00619c4c(param_1[0x16]);
    param_1[0x16] = 0;
  }
  uVar16 = param_1[0x88];
  if (uVar16 == 0) {
    puVar5 = *(uint **)(puVar8 + -0x8000);
    if (param_1 != (uint *)*puVar5) {
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    }
    *puVar5 = param_1[0x89];
  }
  else {
    if (*(uint **)(uVar16 + 0x224) != param_1) {
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
      uVar16 = param_1[0x88];
    }
    *(uint *)(uVar16 + 0x224) = param_1[0x89];
  }
  uVar16 = param_1[0x89];
  if (uVar16 == 0) {
    puVar5 = *(uint **)(puVar8 + -0x7fdc);
    if (param_1 != (uint *)*puVar5) {
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    }
    *puVar5 = param_1[0x88];
  }
  else {
    if (*(uint **)(uVar16 + 0x220) != param_1) {
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
      uVar16 = param_1[0x89];
    }
    *(uint *)(uVar16 + 0x220) = param_1[0x88];
  }
  uVar16 = *param_1;
  param_1[0x15] = 0;
  *param_1 = (uint)((ulonglong)uVar16 & 0x7fffffff);
  if (((uint)(((ulonglong)uVar16 & 0x7fffffff) >> 0x18) & 0x1f) == 5) {
    iVar13 = 0;
    do {
      if ((*(byte *)((int)param_1 + iVar13 + 0x61) & 1) != 0) {
        snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb4));
      }
      bVar1 = iVar13 != 0x90;
      iVar13 = iVar13 + 0x30;
    } while (bVar1);
  }
  iVar13 = *(int *)(puVar8 + -0x7fc0);
  iVar15 = (int)(((longlong)*(char *)(param_1 + 4) & 0x3fffffffU) << 2);
  iVar12 = *(int *)(iVar13 + iVar15);
  if (iVar12 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb0));
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
    if (**(char **)(puVar8 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    iVar15 = (int)(((longlong)*(char *)(param_1 + 4) & 0xffffffffU) << 2);
    iVar12 = *(int *)(iVar13 + iVar15);
    if (iVar12 == 0) goto LAB_0061b46c;
  }
  *(int *)(iVar13 + iVar15) = iVar12 + -1;
LAB_0061b46c:
  uVar16 = param_1[0x8a];
  if (uVar16 != 0) {
    puVar5 = *(uint **)(uVar16 + 0x22c);
    if (param_1 == *(uint **)(uVar16 + 0x22c)) {
      *(uint *)(uVar16 + 0x22c) = param_1[0x8c];
    }
    else {
      do {
        puVar3 = puVar5;
        if (puVar3 == (uint *)0x0) {
          snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
          snd_SynthUnlock();
          return;
        }
        puVar5 = (uint *)puVar3[0x8c];
      } while (param_1 != (uint *)puVar3[0x8c]);
      puVar3[0x8c] = param_1[0x8c];
    }
    if (param_1[0x8b] != 0) {
      uVar17 = 0;
      iVar13 = *(int *)(puVar8 + -0x7ff0);
      pcVar4 = *(char **)(puVar8 + -0x7fec);
      pbVar11 = *(byte **)(puVar8 + -0x7fe8);
      uVar16 = param_1[0x8b];
      do {
        if (*(uint **)(uVar16 + 0x228) != param_1) {
          uVar14 = *param_1 | 0x80000000;
          snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
          piVar10 = *(int **)(puVar8 + -0x7ff4);
          iVar15 = 0x321;
          iVar12 = iVar13;
          snd_Printf((char)piVar10);
          puVar9 = PTR_PTR_0071b01c;
          if (*pcVar4 != '\0') {
            return;
          }
          bVar2 = *pbVar11;
          if (bVar2 != 0) {
            trapWord(0x1f,(ulonglong)bVar2,(ulonglong)bVar2);
            if ((uVar14 == 0) || (iVar15 != 0)) {
              snd_SynthLock();
              iVar13 = *piVar10;
            }
            else {
              if ((piVar10[1] & 0x80U) != 0) {
                return;
              }
              snd_SynthLock();
              iVar13 = *piVar10;
            }
            if (-1 < iVar13) {
              snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fa8));
              snd_SynthUnlock();
              return;
            }
            if (uVar14 == 0) {
              uVar16 = piVar10[1];
              if ((uVar16 & 0x80) != 0) goto LAB_0061bae0;
LAB_0061b96c:
              if ((uVar16 & 0xe) != 0) {
                iVar15 = 1;
              }
              piVar10[1] = uVar16 | 0x80;
              if (iVar12 == 0) goto LAB_0061b9c8;
            }
            else {
              uVar17 = piVar10[1];
              uVar16 = uVar17 | 0x20;
              piVar10[1] = uVar16;
              if ((uVar17 & 0x80) == 0) goto LAB_0061b96c;
LAB_0061bae0:
              iVar12 = 1;
              iVar15 = 1;
              piVar10[1] = uVar16 | 0x80;
            }
            for (iVar6 = piVar10[0x8b]; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x230)) {
              FUN_0061b86c(iVar6,iVar12,iVar15,uVar14);
            }
LAB_0061b9c8:
            pbVar11 = (byte *)FUN_0061a790(iVar13);
            if (pbVar11 == (byte *)0x0) {
              snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fa4));
              snd_SynthUnlock();
              return;
            }
            if ((int)((ulonglong)*pbVar11 & 0x1f) == 5) {
              iVar12 = FUN_0060e160(pbVar11,iVar15,uVar14);
            }
            else {
              iVar12 = *(int *)(*(int *)(puVar9 + -0x7ff8) +
                               (int)(((ulonglong)*pbVar11 & 0x1f) << 2));
              if ((iVar12 == 0) ||
                 (puVar7 = *(undefined4 **)(iVar12 + 0x20), puVar7 == (undefined4 *)0x0)) {
                iVar12 = 0;
              }
              else {
                iVar12 = (*(code *)*puVar7)(pbVar11,iVar15);
              }
            }
            if (iVar12 == 0 && iVar15 == 0) {
              FUN_00621460(pbVar11);
            }
            else {
              FUN_0062112c(pbVar11);
              FUN_00616c14(pbVar11);
              iVar13 = FUN_0061a790(iVar13);
              if (iVar13 != 0) {
                uVar16 = 0;
                if (*(int *)(iVar13 + 0x228) == 0) {
                  uVar16 = (int)*(uint *)(iVar13 + 0x22c) >> 0x1f;
                  uVar16 = uVar16 - (uVar16 ^ *(uint *)(iVar13 + 0x22c)) >> 0x1f;
                }
                FUN_0061b218(iVar13,uVar16);
              }
            }
            snd_SynthUnlock();
            return;
          }
        }
        uVar14 = *(uint *)(uVar16 + 0x230);
        if (uVar14 == 0) {
          uVar17 = uVar16;
        }
        *(uint *)(uVar16 + 0x228) = param_1[0x8a];
        uVar16 = uVar14;
      } while (uVar14 != 0);
      uVar16 = param_1[0x8a];
      iVar13 = *(int *)(uVar16 + 0x22c);
      if (iVar13 == 0) {
        *(uint *)(uVar16 + 0x22c) = param_1[0x8b];
      }
      else if (uVar17 == 0) {
        snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
        snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
        if (**(char **)(puVar8 + -0x7fec) != '\0') {
          return;
        }
        trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
      }
      else {
        *(uint *)(uVar16 + 0x22c) = param_1[0x8b];
        *(int *)(uVar17 + 0x230) = iVar13;
      }
    }
  }
  snd_SynthUnlock();
  return;
}


// 0x061b86c (0x2f0 bytes)
// strings: 0066c138: 'common/sndhand.cpp' | 0066c340: '%s(%d) : Attempt to stop an inactive handler.\n' | 0066c370: '%s(%d) : Children stopped the parent. How the heck did that happen_q\n'

void FUN_0061b86c(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar3 = PTR_PTR_0071b01c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_4 == 0) || (param_3 != 0)) {
    snd_SynthLock();
    iVar6 = *param_1;
  }
  else {
    if ((param_1[1] & 0x80U) != 0) {
      return;
    }
    snd_SynthLock();
    iVar6 = *param_1;
  }
  if (-1 < iVar6) {
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fa8));
    snd_SynthUnlock();
    return;
  }
  if (param_4 == 0) {
    uVar7 = param_1[1];
    if ((uVar7 & 0x80) != 0) goto LAB_0061bae0;
LAB_0061b96c:
    if ((uVar7 & 0xe) != 0) {
      param_3 = 1;
    }
    param_1[1] = uVar7 | 0x80;
    if (param_2 == 0) goto LAB_0061b9c8;
  }
  else {
    uVar1 = param_1[1];
    uVar7 = uVar1 | 0x20;
    param_1[1] = uVar7;
    if ((uVar1 & 0x80) == 0) goto LAB_0061b96c;
LAB_0061bae0:
    param_2 = 1;
    param_3 = 1;
    param_1[1] = uVar7 | 0x80;
  }
  for (iVar5 = param_1[0x8b]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x230)) {
    FUN_0061b86c(iVar5,param_2,param_3,param_4);
  }
LAB_0061b9c8:
  pbVar4 = (byte *)FUN_0061a790(iVar6);
  if (pbVar4 == (byte *)0x0) {
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fa4));
    snd_SynthUnlock();
    return;
  }
  if ((int)((ulonglong)*pbVar4 & 0x1f) == 5) {
    iVar5 = FUN_0060e160(pbVar4,param_3,param_4);
  }
  else {
    iVar5 = *(int *)(*(int *)(puVar3 + -0x7ff8) + (int)(((ulonglong)*pbVar4 & 0x1f) << 2));
    if ((iVar5 == 0) || (puVar2 = *(undefined4 **)(iVar5 + 0x20), puVar2 == (undefined4 *)0x0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(code *)*puVar2)(pbVar4,param_3);
    }
  }
  if (iVar5 == 0 && param_3 == 0) {
    FUN_00621460(pbVar4);
  }
  else {
    FUN_0062112c(pbVar4);
    FUN_00616c14(pbVar4);
    iVar6 = FUN_0061a790(iVar6);
    if (iVar6 != 0) {
      uVar7 = 0;
      if (*(int *)(iVar6 + 0x228) == 0) {
        uVar7 = (int)*(uint *)(iVar6 + 0x22c) >> 0x1f;
        uVar7 = uVar7 - (uVar7 ^ *(uint *)(iVar6 + 0x22c)) >> 0x1f;
      }
      FUN_0061b218(iVar6,uVar7);
    }
  }
  snd_SynthUnlock();
  return;
}


// 0x061bb5c (0x240 bytes)
void FUN_0061bb5c(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  
  puVar6 = PTR_PTR_0071b01c;
  snd_SynthLock();
  lVar11 = 0x20;
  puVar10 = *(undefined4 **)(puVar6 + -0x7fa0);
  do {
    *puVar10 = 0;
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar11 != 0);
  pbVar8 = (byte *)**(undefined4 **)(puVar6 + -0x8000);
  if (pbVar8 != (byte *)0x0) {
    iVar1 = *(int *)(puVar6 + -0x7ff8);
    iVar9 = 0;
    puVar2 = *(uint **)(puVar6 + -0x7f9c);
    iVar3 = *(int *)(puVar6 + -0x7f98);
    iVar4 = *(int *)(puVar6 + -0x7fa0);
    dVar12 = (double)*(float *)(puVar6 + -0x7f94);
    dVar13 = (double)param_1;
LAB_0061bc04:
    do {
      if ((*(uint *)(pbVar8 + 4) & 1) != 0) {
        *(int *)(iVar4 + (char)pbVar8[0x10] * 4) = *(int *)(iVar4 + (char)pbVar8[0x10] * 4) + 1;
      }
      if ((double)((float)*puVar2 /
                  (float)((double)*(float *)(iVar3 + (char)pbVar8[0x10] * 4) * dVar12)) <= dVar13) {
        uVar7 = (uint)((ulonglong)*pbVar8 & 0x1f);
        if (uVar7 == 5) {
          if (((*(uint *)(pbVar8 + 4) & 0xe) == 0) &&
             ((*(uint *)(*(int *)(pbVar8 + 0x240) + 8) & 0x400) == 0)) {
            iVar9 = FUN_0060e31c(pbVar8);
          }
        }
        else if (((uVar7 < 8) &&
                 (iVar5 = *(int *)(iVar1 + (int)(((ulonglong)*pbVar8 & 0x1f) << 2)), iVar5 != 0)) &&
                (puVar10 = *(undefined4 **)(iVar5 + 0x1c), puVar10 != (undefined4 *)0x0)) {
          iVar9 = (*(code *)*puVar10)(pbVar8);
        }
        if ((iVar9 != 0) ||
           (((*(int *)(pbVar8 + 0x58) != 0 && ((*(uint *)(pbVar8 + 4) & 0xe) == 0)) &&
            (iVar9 = FUN_00619cd8(*(int *)(pbVar8 + 0x58),pbVar8), iVar9 != 0)))) {
          FUN_0061b86c(pbVar8,1,0,0);
          pbVar8 = *(byte **)(pbVar8 + 0x224);
          iVar9 = 0;
          if (pbVar8 == (byte *)0x0) break;
          goto LAB_0061bc04;
        }
      }
      pbVar8 = *(byte **)(pbVar8 + 0x224);
    } while (pbVar8 != (byte *)0x0);
  }
  snd_SynthUnlock();
  return;
}


// 0x061bd9c (0xe4 bytes)
void FUN_0061bd9c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar3 = PTR_PTR_0071b01c;
  snd_SynthLock();
  pbVar5 = (byte *)**(undefined4 **)(puVar3 + -0x8000);
  if (pbVar5 != (byte *)0x0) {
    iVar1 = *(int *)(puVar3 + -0x7ff8);
    do {
      uVar4 = (uint)((ulonglong)*pbVar5 & 0x1f);
      if (((uVar4 != 5) && (uVar4 < 8)) &&
         (iVar6 = *(int *)(iVar1 + (int)(((ulonglong)*pbVar5 & 0x1f) << 2)), iVar6 != 0)) {
        puVar2 = *(undefined4 **)(iVar6 + 0x18);
        if (puVar2 != (undefined4 *)0x0) {
          iVar6 = (*(code *)*puVar2)(pbVar5);
          if (iVar6 != 0) {
            FUN_0061b86c(pbVar5,1,0,0);
          }
        }
      }
      pbVar5 = *(byte **)(pbVar5 + 0x224);
    } while (pbVar5 != (byte *)0x0);
  }
  snd_SynthUnlock();
  return;
}


// 0x061be80 (0x130 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

undefined4 FUN_0061be80(int *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  if (param_1[0x8b] != 0) {
    iVar3 = param_1[0x8b];
    iVar4 = 0;
    do {
      iVar1 = iVar3;
      if (*(int *)(iVar1 + 0x54) == param_2) {
        if (iVar4 == 0) {
          param_1[0x8b] = *(int *)(iVar1 + 0x230);
        }
        else {
          *(undefined4 *)(iVar4 + 0x230) = *(undefined4 *)(iVar1 + 0x230);
        }
        *(undefined4 *)(iVar1 + 0x230) = 0;
        *(undefined4 *)(iVar1 + 0x228) = 0;
        FUN_0061b86c(iVar1,1,0,0);
        return 1;
      }
      iVar3 = *(int *)(iVar1 + 0x230);
      iVar4 = iVar1;
    } while (*(int *)(iVar1 + 0x230) != 0);
  }
  return 0;
}


// 0x061bfb0 (0x164 bytes)
// strings: 0066c3b8: '%s(%d) : Deactivated handler on active list.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n'

void FUN_0061bfb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  
  puVar5 = PTR_PTR_0071b01c;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar5 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fe8),0);
  }
  snd_SynthLock();
  piVar7 = (int *)**(int **)(puVar5 + -0x8000);
  if (piVar7 != (int *)0x0) {
    pcVar2 = *(char **)(puVar5 + -0x7fec);
    pbVar3 = *(byte **)(puVar5 + -0x7fe8);
    do {
      while( true ) {
        if (-1 < *piVar7) {
          snd_Printf((char)*(undefined4 *)(puVar5 + -0x7f8c));
          snd_Printf((char)*(undefined4 *)(puVar5 + -0x7ff4));
          puVar6 = PTR_PTR_0071b01c;
          if (*pcVar2 != '\0') {
            return;
          }
          bVar1 = *pbVar3;
          if (bVar1 != 0) {
            trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
            snd_SynthLock();
            piVar7 = *(int **)(puVar6 + -0x8000);
            piVar8 = (int *)*piVar7;
            if (piVar8 == (int *)0x0) goto LAB_0061c1f0;
            pcVar2 = *(char **)(puVar6 + -0x7fec);
            pbVar3 = *(byte **)(puVar6 + -0x7fe8);
            goto LAB_0061c17c;
          }
        }
        if (piVar7[0x15] != param_1) break;
        FUN_0061b86c(piVar7,1,param_2,param_3);
        piVar7 = (int *)piVar7[0x89];
        if (piVar7 == (int *)0x0) goto LAB_0061c0a4;
      }
      piVar7 = (int *)piVar7[0x89];
    } while (piVar7 != (int *)0x0);
  }
LAB_0061c0a4:
  snd_SynthUnlock();
  return;
LAB_0061c17c:
  if (*piVar8 < 0) {
LAB_0061c164:
    if (piVar8[0x8a] == 0) goto LAB_0061c1d0;
    piVar8 = (int *)piVar8[0x89];
  }
  else {
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f8c));
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
    if (*pcVar2 != '\0') {
      return;
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0) goto LAB_0061c164;
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061c1d0:
    FUN_0061b86c(piVar8,1,1,0);
    piVar8 = (int *)piVar8[0x89];
  }
  if (piVar8 == (int *)0x0) {
LAB_0061c1f0:
    snd_SynthUnlock();
    if (*piVar7 != 0) {
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f88));
      iVar4 = *piVar7;
      while (iVar4 != 0) {
        syscall();
        iVar4 = *piVar7;
      }
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f84));
    }
    return;
  }
  goto LAB_0061c17c;
}


// 0x061c114 (0x16c bytes)
// strings: 0066c3b8: '%s(%d) : Deactivated handler on active list.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c3e8: '%s(%d) : Starting wait loop.\n' | 0066c408: '%s(%d) : Ending wait loop.\n'

void FUN_0061c114(void)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  
  puVar6 = PTR_PTR_0071b01c;
  snd_SynthLock();
  piVar2 = *(int **)(puVar6 + -0x8000);
  piVar7 = (int *)*piVar2;
  if (piVar7 != (int *)0x0) {
    pcVar3 = *(char **)(puVar6 + -0x7fec);
    pbVar4 = *(byte **)(puVar6 + -0x7fe8);
    do {
      while (-1 < *piVar7) {
        snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f8c));
        snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
        if (*pcVar3 != '\0') {
          return;
        }
        bVar1 = *pbVar4;
        if (bVar1 == 0) break;
        trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061c1d0:
        FUN_0061b86c(piVar7,1,1,0);
        piVar7 = (int *)piVar7[0x89];
        if (piVar7 == (int *)0x0) goto LAB_0061c1f0;
      }
      if (piVar7[0x8a] == 0) goto LAB_0061c1d0;
      piVar7 = (int *)piVar7[0x89];
    } while (piVar7 != (int *)0x0);
  }
LAB_0061c1f0:
  snd_SynthUnlock();
  if (*piVar2 != 0) {
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f88));
    iVar5 = *piVar2;
    while (iVar5 != 0) {
      syscall();
      iVar5 = *piVar2;
    }
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f84));
  }
  return;
}


// 0x061c280 (0x3a8 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp' | 0066c428: '%s(%d) : Invalid handler array.\n' | 0066c450: '%s(%d) : Inactive handler with effects.\n'

uint * FUN_0061c280(double param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6,
                   undefined8 param_7,uint param_8,byte param_9)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  uint uStack00000008;
  uint in_stack_00000074;
  
  puVar6 = PTR_PTR_0071b01c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar9 = param_5;
  if ((param_2 != (uint *)0x0) && (iVar8 = param_3, param_4 < 0x20)) goto LAB_0061c408;
LAB_0061c318:
  snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
  if (**(char **)(puVar6 + -0x7fec) != '\0') {
    return (uint *)0x0;
  }
  bVar1 = 0 < param_3;
  trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fe8),0);
LAB_0061c34c:
  snd_SynthLock();
  if (!bVar1) {
LAB_0061c494:
    snd_SynthUnlock();
    return (uint *)0x0;
  }
  iVar11 = 0;
  iVar3 = *(int *)(puVar6 + -0x7ff0);
  iVar4 = *(int *)(puVar6 + -0x7f78);
  piVar5 = *(int **)(puVar6 + -0x7ffc);
  dVar14 = (double)*(float *)(puVar6 + -0x7f74);
  do {
    if ((*(byte *)param_2 & 0x1f) != param_4) {
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f80));
      iVar8 = iVar3;
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
      if (**(char **)(puVar6 + -0x7fec) != '\0') {
        return (uint *)0x0;
      }
      bVar2 = **(byte **)(puVar6 + -0x7fe8);
      if (bVar2 != 0) break;
    }
    if (param_2[0x15] == 0) {
      if (param_2[0x16] != 0) {
        snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f7c));
        param_2[0x16] = 0;
      }
      param_2[1] = in_stack_00000074 & 0x10000;
      iVar9 = *piVar5;
      param_2[0x15] = param_6;
      *param_2 = *param_2 & 0xffff0000 | *param_2 + 1 & 0xffff;
      uVar7 = *(uint *)(iVar4 + (char)param_9 * 4);
      param_2[0x8c] = 0;
      param_2[0x89] = 0;
      param_2[0x88] = 0;
      param_2[0x8a] = 0;
      param_2[1] = (uint)(((ulonglong)(uVar7 >> 1) & 1) << 2) | in_stack_00000074 & 0x10000;
      param_2[0x8b] = 0;
      if (0 < iVar9) {
        uVar7 = iVar9 + 0x1f;
        uVar7 = ((int)uVar7 >> 5) + (uint)((int)uVar7 < 0 && (uVar7 & 0x1f) != 0);
        puVar10 = param_2 + 5;
        uVar12 = (ulonglong)uVar7;
        if ((int)uVar7 < 1) {
          uVar12 = 1;
        }
        do {
          *puVar10 = 0;
          uVar12 = uVar12 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != 0);
      }
      param_2[0x47] = (uint)(float)param_1;
      *(byte *)(param_2 + 4) = param_9;
      param_2[0x4a] = (uint)(float)dVar14;
      param_2[0x4c] = param_8;
      param_2[0x58] = 0;
      *(byte *)((int)param_2 + 0x167) = 0;
      param_2[2] = 0;
      param_2[0x48] = (uint)(float)dVar14;
      param_2[0x49] = (uint)(float)dVar14;
      param_2[0x4b] = 0;
      param_2[0x4d] = 0;
      param_2[0x4e] = 0;
      param_2[0x50] = 0;
      param_2[0x4f] = 0;
      param_2[0x56] = 0;
      param_2[0x55] = 0;
      param_2[0x57] = 0;
      param_2[0x52] = 0;
      param_2[0x51] = 0;
      param_2[0x53] = 0;
      param_2[0x54] = 0;
      *(byte *)(param_2 + 0x59) = 0;
      *(byte *)((int)param_2 + 0x165) = 0;
      *(byte *)((int)param_2 + 0x166) = 0;
      FUN_00616c14(param_2);
      lVar13 = 4;
      puVar10 = param_2 + 0x17;
      do {
        puVar10[10] = (uint)param_2;
        *(undefined2 *)puVar10 = 0;
        puVar10[3] = 0;
        *(byte *)((int)puVar10 + 2) = 0;
        *(byte *)(puVar10 + 1) = 0;
        *(byte *)((int)puVar10 + 5) = 0;
        lVar13 = lVar13 + -1;
        puVar10 = puVar10 + 0xc;
      } while (lVar13 != 0);
      FUN_00625884(param_2 + 0x5a);
      uVar7 = FUN_00604918();
      param_2[3] = uVar7;
      snd_SynthUnlock();
      return param_2;
    }
    iVar11 = iVar11 + 1;
    if (param_3 == iVar11) goto LAB_0061c494;
    param_2 = (uint *)((int)param_2 + param_5);
  } while( true );
  trapWord(0x1f,(ulonglong)bVar2,(ulonglong)bVar2);
LAB_0061c408:
  bVar1 = 0 < iVar8;
  if (((iVar8 < 0) || (0x100 < iVar8)) || (iVar9 < 0x234)) goto LAB_0061c318;
  goto LAB_0061c34c;
}


// 0x061c628 (0x354 bytes)
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061c628(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  puVar4 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar4 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fe8),0);
  }
  for (iVar7 = *(int *)(param_1 + 0x22c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x230)) {
    FUN_0061c628(iVar7,param_2);
  }
  uVar5 = *(uint *)(param_2 + 4);
  if ((uVar5 & 0x100000) != 0) {
    if (-1 < (int)uVar5) {
      *(uint *)(param_1 + 4) = (*(uint *)(param_2 + 8) & 1) << 0x11 | *(uint *)(param_1 + 4);
    }
    uVar5 = (uint)(((ulonglong)(*(uint *)(param_2 + 8) >> 1) & 1) << 0x15) | *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar5;
    *(uint *)(param_1 + 4) = (uint)(((ulonglong)(*(uint *)(param_2 + 8) >> 2) & 1) << 0x16) | uVar5;
    uVar5 = *(uint *)(param_2 + 4);
  }
  if ((uVar5 & 0x40) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = uVar6;
  if ((uVar5 & 0xf0000) != 0) {
    uVar8 = 0;
    lVar9 = 4;
    do {
      iVar7 = uVar8 + param_2;
      iVar3 = uVar8 + param_1;
      uVar2 = uVar8 & 0x3f;
      uVar8 = uVar8 + 1;
      if ((0x10000 << uVar2 & uVar5) != 0) {
        *(undefined1 *)(iVar3 + 0x164) = *(undefined1 *)(iVar7 + 0x24);
        uVar5 = *(uint *)(param_2 + 4);
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((uVar5 & 4) != 0) {
    fVar1 = *(float *)(param_2 + 0x10);
    *(float *)(param_1 + 0x120) = fVar1;
    if ((int)fVar1 < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else if (*(float *)(puVar4 + -0x7f74) < fVar1) {
      *(float *)(param_1 + 0x120) = *(float *)(puVar4 + -0x7f74);
    }
  }
  if ((uVar5 & 8) == 0) {
    uVar5 = *(uint *)(param_1 + 300);
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x14);
  }
  *(uint *)(param_1 + 300) = uVar5;
  if ((-1 < (int)uVar5) && (0x167 < uVar5)) {
    *(undefined4 *)(param_1 + 300) = 0x167;
  }
  if ((*(uint *)(param_2 + 4) & 0x10) == 0) {
    uVar5 = *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x13c) = uVar5;
    if (-1 < (int)uVar5) goto LAB_0061c7ec;
LAB_0061c928:
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x18);
    *(uint *)(param_1 + 0x13c) = uVar5;
    if ((int)uVar5 < 0) goto LAB_0061c928;
LAB_0061c7ec:
    if (0x168 < uVar5) {
      *(undefined4 *)(param_1 + 0x13c) = 0x168;
    }
  }
  if ((*(uint *)(param_2 + 4) & 1) == 0) {
    iVar7 = *(int *)(param_1 + 0x144);
  }
  else {
    iVar7 = *(int *)(param_2 + 0x1c);
  }
  *(int *)(param_1 + 0x144) = iVar7;
  if (iVar7 < -0x1e00) {
    *(undefined4 *)(param_1 + 0x144) = 0xffffe200;
  }
  else if (0x1e00 < iVar7) {
    *(undefined4 *)(param_1 + 0x144) = 0x1e00;
    uVar5 = *(uint *)(param_2 + 4);
    goto joined_r0x0061c8dc;
  }
  uVar5 = *(uint *)(param_2 + 4);
joined_r0x0061c8dc:
  if ((uVar5 & 2) == 0) {
    fVar1 = *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x154) = fVar1;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x20);
    *(float *)(param_1 + 0x154) = fVar1;
  }
  if ((int)fVar1 < -1) {
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(puVar4 + -0x7f6c);
  }
  else if (*(float *)(puVar4 + -0x7f74) < fVar1) {
    *(float *)(param_1 + 0x154) = *(float *)(puVar4 + -0x7f74);
  }
  if ((uVar5 & 0x20) != 0) {
    FUN_00625424(param_1 + 0x168,param_2 + 0x28);
  }
  return;
}


// 0x061c97c (0x18 bytes)
void FUN_0061c97c(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b020 + -0x8000) = param_1;
  return;
}


// 0x061c994 (0x3e8 bytes)
// strings: 0061caf8: 'W)(4;9' (raw)

undefined8 FUN_0061c994(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar15;
  char cVar16;
  ulonglong uVar14;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint local_b0 [16];
  ulonglong local_70;
  
  puVar12 = PTR_PTR_0071b020;
  iVar15 = FUN_0062730c();
  if (iVar15 == 0) {
    **(int **)(puVar12 + -0x7ffc) = param_1 + **(int **)(puVar12 + -0x7ffc);
    return 0;
  }
  puVar2 = *(uint **)(puVar12 + -0x7ff8);
  puVar3 = *(uint **)(puVar12 + -0x7ffc);
  uVar21 = *puVar2;
  *puVar3 = *puVar3 + param_1;
  if (0x3e < uVar21 + 0x3e) {
    uVar22 = 0;
    uVar21 = 0x20;
    uVar20 = 0;
    local_b0[0] = 0;
    while( true ) {
      if (uVar22 < *puVar2) {
        piVar4 = *(int **)(puVar12 + -0x7ff4);
        iVar15 = uVar22 * 0x68;
        do {
          iVar10 = iVar15 + *piVar4;
          iVar15 = iVar15 + 0x68;
          iVar10 = *(int *)(iVar10 + 0x60);
          if (iVar10 != 0) {
            cVar16 = snd_SynthIsVoiceContextFinished(iVar10);
            if (cVar16 != '\0') {
              local_b0[uVar20] = local_b0[uVar20] | 1 << (uVar22 & 0x1f);
            }
          }
          uVar22 = uVar22 + 1;
        } while ((uVar22 < uVar21) && (uVar22 < *puVar2));
      }
      iVar15 = uVar20 * 0x20;
      uVar18 = uVar20 + 1;
      uVar17 = *puVar2 + 0x1f;
      uVar22 = iVar15 + 0x20;
      bVar1 = uVar22 < iVar15 + 0x40U;
      puVar19 = local_b0 + uVar20 + 1;
      uVar13 = iVar15 + 0x60;
      uVar21 = iVar15 + 0x40U;
      uVar20 = uVar18;
      if (((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0) <= uVar18) break;
      while( true ) {
        uVar17 = uVar13;
        *puVar19 = 0;
        if (bVar1) break;
        uVar20 = uVar20 + 1;
        uVar18 = *puVar2 + 0x1f;
        uVar22 = uVar17 - 0x20;
        bVar1 = uVar22 < uVar17;
        puVar19 = puVar19 + 1;
        uVar13 = uVar17 + 0x20;
        uVar21 = uVar17;
        if (((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0) <= uVar20)
        goto LAB_0061cb78;
      }
    }
  }
LAB_0061cb78:
  FUN_00620e68(local_b0);
  FUN_0061bd9c();
  puVar2 = *(uint **)(puVar12 + -0x7ff0);
  pfVar5 = *(float **)(puVar12 + -0x7fec);
  dVar23 = (double)*(float *)(puVar12 + -0x7fe8);
  uVar14 = (ulonglong)*puVar2;
  fVar11 = (float)uVar14 / (float)((double)*pfVar5 * dVar23);
  local_70 = uVar14;
  if (fVar11 < (float)*puVar3) {
    puVar19 = *(uint **)(puVar12 + -0x8000);
    puVar6 = *(uint **)(puVar12 + -0x7fd4);
    piVar4 = *(int **)(puVar12 + -0x7fe0);
    puVar7 = *(uint **)(puVar12 + -0x7fdc);
    puVar8 = *(uint **)(puVar12 + -0x7fd8);
    do {
      puVar9 = (undefined4 *)*piVar4;
      *puVar19 = *puVar19 + 1;
      if (puVar9 != (undefined4 *)0x0) {
        local_70 = (ulonglong)fVar11;
        (*(code *)*puVar9)(uVar14,local_70 & 0xffffffff);
      }
      FUN_0061bb5c(*puVar3);
      uVar21 = *puVar7;
      if ((uVar21 != 0) && (*puVar19 == (*puVar19 / uVar21) * uVar21)) {
        FUN_00617084();
      }
      uVar21 = *puVar8;
      if ((uVar21 != 0) && (*puVar19 == (*puVar19 / uVar21) * uVar21)) {
        FUN_0061d100();
      }
      uVar21 = *puVar6;
      if ((uVar21 != 0) && (*puVar19 == (*puVar19 / uVar21) * uVar21)) {
        FUN_006152a4();
      }
      uVar14 = (ulonglong)*puVar2;
      fVar11 = (float)uVar14 / (float)((double)*pfVar5 * dVar23);
      local_70 = (ulonglong)*puVar3 - (longlong)fVar11 & 0xffffffff;
      *puVar3 = (uint)((ulonglong)*puVar3 - (longlong)fVar11);
    } while (fVar11 < (float)local_70);
  }
  FUN_0061fa5c();
  FUN_0061de48();
  FUN_0061870c();
  snd_SynthUnlock();
  return 0;
}


// 0x061cd7c (0x4c bytes)
void FUN_0061cd7c(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b020;
  snd_SynthLock();
  **(undefined4 **)(puVar1 + -0x7fe0) = param_1;
  snd_SynthUnlock();
  return;
}


// 0x061cdc8 (0x78 bytes)
void FUN_0061cdc8(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b024;
  piVar1 = *(int **)(PTR_PTR_0071b024 + -0x8000);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)**(undefined4 **)(PTR_PTR_0071b024 + -0x7ffc))(iVar2);
    *piVar1 = 0;
  }
  **(undefined4 **)(puVar3 + -0x7ff8) = 0;
  return;
}


// 0x061ce40 (0x2c bytes)
undefined4 FUN_0061ce40(int param_1)

{
  return *(undefined4 *)(param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000) + 0x10);
}


// 0x061ce6c (0x40 bytes)
undefined1 FUN_0061ce6c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0xff;
  iVar1 = param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000);
  if (*(int *)(iVar1 + 0x10) != 0) {
    uVar2 = *(undefined1 *)(iVar1 + 0xb);
  }
  return uVar2;
}


// 0x061ceac (0x4c bytes)
void FUN_0061ceac(void)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = **(int **)(PTR_PTR_0071b024 + -0x7ff0) + 0x1f;
  uVar2 = ((int)uVar2 >> 5) + (uint)((int)uVar2 < 0 && (uVar2 & 0x1f) != 0);
  if (0 < (int)uVar2) {
    uVar3 = (ulonglong)uVar2;
    puVar1 = *(undefined4 **)(PTR_PTR_0071b024 + -0x7ff4);
    do {
      *puVar1 = 0xffffffff;
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != 0);
  }
  return;
}


// 0x061cef8 (0x20 bytes)
undefined4 FUN_0061cef8(int param_1)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b024 + -0x7fec) + param_1 * 4);
}


// 0x061cf18 (0x20 bytes)
undefined4 FUN_0061cf18(int param_1)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b024 + -0x7fe8) + param_1 * 4);
}


// 0x061cf38 (0x30 bytes)
int FUN_0061cf38(int param_1)

{
  return *(int *)(*(int *)(PTR_PTR_0071b024 + -0x7fe4) + param_1 * 4) -
         *(int *)(*(int *)(PTR_PTR_0071b024 + -0x7fe0) + param_1 * 4);
}


// 0x061cf68 (0x20 bytes)
undefined4 FUN_0061cf68(int param_1)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b024 + -0x7fe4) + param_1 * 4);
}


// 0x061cf88 (0x20 bytes)
void FUN_0061cf88(void)

{
  **(int **)(PTR_PTR_0071b024 + -0x7fdc) = **(int **)(PTR_PTR_0071b024 + -0x7fdc) + 1;
  return;
}


// 0x061cfa8 (0x28 bytes)
void FUN_0061cfa8(void)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b024 + -0x7fdc);
  if (0 < iVar1) {
    **(int **)(PTR_PTR_0071b024 + -0x7fdc) = iVar1 + -1;
  }
  return;
}


// 0x061cfd0 (0x20 bytes)
void FUN_0061cfd0(void)

{
  **(int **)(PTR_PTR_0071b024 + -0x7fd8) = **(int **)(PTR_PTR_0071b024 + -0x7fd8) + 1;
  return;
}


// 0x061cff0 (0x28 bytes)
void FUN_0061cff0(void)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b024 + -0x7fd8);
  if (0 < iVar1) {
    **(int **)(PTR_PTR_0071b024 + -0x7fd8) = iVar1 + -1;
  }
  return;
}


// 0x061d018 (0x74 bytes)
undefined4 FUN_0061d018(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x80000) == 0) {
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + 4);
    while ((uVar2 & 0x80000) == 0) {
      iVar1 = *(int *)(iVar1 + 0x228);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(iVar1 + 4);
    }
  }
  return 1;
}


// 0x061d08c (0x74 bytes)
undefined4 FUN_0061d08c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + 4);
    while ((uVar2 & 0x100000) == 0) {
      iVar1 = *(int *)(iVar1 + 0x228);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(iVar1 + 4);
    }
  }
  return 1;
}


// 0x061d100 (0x248 bytes)
void FUN_0061d100(void)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  float afStack_c0 [32];
  longlong local_40;
  
  puVar9 = PTR_PTR_0071b024;
  iVar16 = 0;
  lVar18 = 0x20;
  uVar1 = *(undefined4 *)(PTR_PTR_0071b024 + -0x7fd0);
  do {
    puVar15 = (undefined4 *)(iVar16 + (int)afStack_c0);
    iVar16 = iVar16 + 4;
    *puVar15 = uVar1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  piVar3 = *(int **)(PTR_PTR_0071b024 + -0x7fc8);
  iVar16 = *piVar3;
  if (iVar16 != 0) {
    fVar2 = *(float *)(PTR_PTR_0071b024 + -0x7fc0);
    iVar4 = *(int *)(PTR_PTR_0071b024 + -0x7fe8);
    iVar5 = *(int *)(PTR_PTR_0071b024 + -0x7fc4);
    do {
      if (((*(uint *)(iVar16 + 0x24) & 1) == 0) &&
         (iVar17 = *(int *)(iVar16 + 4) * 4, *(uint *)(iVar5 + iVar17) < *(uint *)(iVar4 + iVar17)))
      {
        iVar10 = *(int *)(iVar16 + 0x20);
        iVar17 = *(int *)(iVar16 + 0xc);
        if (iVar17 < iVar10) {
          iVar10 = iVar10 - *(int *)(iVar16 + 0x14);
          *(int *)(iVar16 + 0x20) = iVar10;
          if (iVar10 < iVar17) {
LAB_0061d2e4:
            *(int *)(iVar16 + 0x20) = iVar17;
          }
        }
        else if ((iVar10 < iVar17) &&
                (iVar10 = iVar10 + *(int *)(iVar16 + 0x1c), *(int *)(iVar16 + 0x20) = iVar10,
                iVar17 < iVar10)) {
          *(int *)(iVar16 + 0x20) = iVar17;
        }
      }
      else if (*(int *)(iVar16 + 0x20) < 0x10000) {
        iVar17 = 0x10000;
        uVar12 = *(int *)(iVar16 + 0x20) + *(int *)(iVar16 + 0x1c);
        *(uint *)(iVar16 + 0x20) = uVar12;
        if (0x10000 < uVar12) goto LAB_0061d2e4;
      }
      iVar17 = *(int *)(iVar16 + 0x20);
      uVar14 = 0;
      uVar12 = *(uint *)(iVar16 + 8);
      iVar10 = 0;
      local_40 = (longlong)iVar17;
      lVar18 = 0x20;
      fVar8 = (float)(longlong)iVar17 * fVar2;
      do {
        pfVar11 = (float *)(iVar10 + (int)afStack_c0);
        uVar7 = uVar14 & 0x3f;
        uVar14 = uVar14 + 1;
        iVar10 = iVar10 + 4;
        if (((1 << uVar7 & uVar12) != 0) && (fVar8 < *pfVar11)) {
          *pfVar11 = fVar8;
        }
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (((*(uint *)(iVar16 + 0x24) & 1) != 0) && (iVar17 == 0x10000)) {
        iVar17 = *piVar3;
        if (iVar16 == *piVar3) {
          *piVar3 = *(int *)(iVar16 + 0x28);
        }
        else {
          do {
            iVar10 = iVar17;
            iVar17 = *(int *)(iVar10 + 0x28);
            if (iVar17 == 0) goto LAB_0061d240;
          } while (iVar16 != iVar17);
          *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar16 + 0x28);
        }
      }
LAB_0061d240:
      iVar16 = *(int *)(iVar16 + 0x28);
    } while (iVar16 != 0);
  }
  puVar6 = *(uint **)(puVar9 + -0x7fb8);
  uVar14 = 0;
  lVar18 = 0x20;
  uVar12 = *puVar6;
  pfVar11 = afStack_c0;
  pfVar13 = *(float **)(puVar9 + -0x7fd4);
  do {
    uVar7 = uVar14 & 0x3f;
    uVar14 = uVar14 + 1;
    if (*pfVar13 != *pfVar11) {
      uVar12 = uVar12 | 1 << uVar7;
    }
    *pfVar13 = *pfVar11;
    lVar18 = lVar18 + -1;
    pfVar11 = pfVar11 + 1;
    pfVar13 = pfVar13 + 1;
  } while (lVar18 != 0);
  *puVar6 = uVar12;
  return;
}


// 0x061d348 (0x40 bytes)
void FUN_0061d348(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0x20;
  iVar1 = *(int *)(PTR_PTR_0071b024 + -0x7fb4);
  do {
    puVar2 = (undefined4 *)(iVar4 + iVar1);
    puVar3 = (undefined4 *)(iVar4 + param_1);
    iVar4 = iVar4 + 4;
    *puVar3 = *puVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x061d388 (0x18 bytes)
double FUN_0061d388(void)

{
  return (double)**(float **)(PTR_PTR_0071b024 + -0x7fb0);
}


// 0x061d3a0 (0x338 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061d3a0(int param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar7 = PTR_PTR_0071b024;
  if ((((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) ||
      (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar7 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7fa0),0);
  }
  iVar9 = param_1 * 0x68 + **(int **)(puVar7 + -0x8000);
  iVar3 = *(int *)(iVar9 + 0x28);
  uVar11 = *(uint *)(iVar9 + 0x38);
  uVar10 = *(uint *)(iVar9 + 0x40);
  if (iVar3 == 0) goto LAB_0061d51c;
  uVar4 = *(uint *)(iVar3 + 300);
  uVar8 = uVar4;
  if (-1 < (int)uVar4) {
    uVar5 = *(uint *)(iVar3 + 0x130);
    uVar8 = uVar5;
    if ((-1 < (int)uVar5) && (uVar8 = uVar11, -1 < (int)uVar11)) {
      uVar12 = (ulonglong)uVar5 + (ulonglong)*(uint *)(iVar3 + 0x134) +
               (ulonglong)uVar11 + (ulonglong)*(uint *)(iVar3 + 0x138);
      if ((*(uint *)(iVar3 + 4) & 0x10000) != 0) {
        fVar6 = *(float *)(iVar3 + 0x120) * *(float *)(iVar3 + 0x1d0);
        iVar9 = *(char *)(iVar9 + 10) * 4;
        fVar1 = *(float *)(*(int *)(puVar7 + -0x7f9c) + iVar9);
        if (fVar6 < fVar1) {
          fVar2 = *(float *)(*(int *)(puVar7 + -0x7f98) + iVar9);
          if (fVar6 <= fVar2) {
            uVar12 = 0;
          }
          else if ((uVar12 & 0xffffffff) < 0xb5) {
            uVar12 = (ulonglong)((float)(uVar12 & 0xffffffff) * ((fVar6 - fVar2) / (fVar1 - fVar2)))
            ;
          }
          else {
            uVar12 = (ulonglong)
                     (*(float *)(puVar7 + -0x7f94) -
                     (float)(0x168 - uVar12 & 0xffffffff) * ((fVar6 - fVar2) / (fVar1 - fVar2)));
          }
        }
      }
      uVar8 = (int)(uVar12 + uVar4) + (int)((uVar12 + uVar4 << 0x20) / 0x16800000000) * -0x168;
    }
  }
  uVar11 = uVar8;
  if ((*(uint *)(*(int *)(puVar7 + -0x7f8c) + *(char *)(iVar3 + 0x10) * 4) & 8) != 0) {
    if ((int)uVar11 < 0) {
      if (uVar11 == 0x80000001) {
        uVar11 = 0x80000002;
      }
      else {
        uVar4 = 0x80000001;
        if (uVar11 == 0x80000002) {
LAB_0061d664:
          uVar11 = uVar4;
        }
        else if (uVar11 == 0x80000003) {
          uVar11 = 0x80000004;
        }
        else {
          uVar4 = 0x80000003;
          if (uVar11 == 0x80000004) goto LAB_0061d664;
          if (uVar11 == 0x80000007) {
            uVar11 = 0x80000008;
          }
          else {
            uVar4 = 0x80000007;
            if (uVar11 == 0x80000008) goto LAB_0061d664;
            if (uVar11 == 0x80000009) {
              uVar11 = 0x8000000a;
            }
            else {
              uVar4 = 0x80000009;
              if (uVar11 == 0x8000000a) goto LAB_0061d664;
            }
          }
        }
      }
    }
    else {
      uVar11 = 0x168 - uVar11;
    }
  }
  uVar10 = uVar10 + *(int *)(iVar3 + 0x13c);
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  else if (0x168 < uVar10) {
    uVar10 = 0x168;
  }
LAB_0061d51c:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar11;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar10;
  }
  return;
}


// 0x061d6d8 (0x178 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 00702450: '?fff' (raw)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0061d6d8(double param_1,double param_2,int param_3,char param_4)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b024;
  if (((((param_3 == 0) || (param_4 < '\0')) ||
       (param_1 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))) ||
      (((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_1 ||
       (param_2 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))))) ||
     ((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  iVar3 = (int)param_4;
  if ((iVar3 < 0x7e) && (param_2 != (double)*(float *)(puVar2 + -0x7f78))) {
    fVar1 = *(float *)(param_3 + 0x11c) * *(float *)(param_3 + 0x120) * *(float *)(param_3 + 0x128)
            * (float)(param_1 *
                     (double)*(float *)(*(int *)(puVar2 + -0x7fb4) + *(char *)(param_3 + 0x10) * 4))
    ;
    if (fVar1 < *(float *)(puVar2 + -0x7f88)) {
      iVar3 = (int)(char)(param_4 -
                         (char)(int)((float)(param_2 *
                                            (double)(fVar1 / *(float *)(puVar2 + -0x7f80) +
                                                    *(float *)(puVar2 + -0x7f88))) *
                                    (float)(longlong)iVar3));
    }
  }
  return iVar3;
}


// 0x061d850 (0x264 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061d850(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 uVar9;
  int iVar8;
  uint *puVar10;
  longlong lVar11;
  double dVar12;
  
  puVar6 = PTR_PTR_0071b024;
  if ((param_2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    param_1 = (double)*(float *)(puVar6 + -0x7f78);
    if (**(char **)(puVar6 + -0x7fa4) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fa0),0);
    iVar8 = **(int **)(puVar6 + -0x7fd8);
  }
  else {
    iVar8 = **(int **)(PTR_PTR_0071b024 + -0x7fd8);
  }
  if (iVar8 == 0) {
    piVar2 = *(int **)(puVar6 + -0x8000);
    iVar8 = **(int **)(puVar6 + -0x7fdc);
  }
  else {
    piVar2 = *(int **)(puVar6 + -0x8000);
    iVar8 = FUN_0061d08c(param_1,*(undefined4 *)(param_2 * 0x68 + *piVar2 + 0x28));
    param_1 = (double)*(float *)(puVar6 + -0x7f78);
    if (iVar8 != 0) {
      return param_1;
    }
    iVar8 = **(int **)(puVar6 + -0x7fdc);
  }
  if (iVar8 != 0) {
    iVar8 = FUN_0061d018(param_1,*(undefined4 *)(param_2 * 0x68 + *piVar2 + 0x28));
    if (iVar8 == 0) {
      return (double)*(float *)(puVar6 + -0x7f78);
    }
  }
  iVar8 = param_2 * 0x68 + *piVar2;
  if (*(int *)(iVar8 + 0x28) != 0) {
    uVar9 = FUN_0061d6d8((double)*(float *)(iVar8 + 0x30),(double)*(float *)(iVar8 + 0xc),
                         *(int *)(iVar8 + 0x28),*(undefined1 *)(iVar8 + 8));
    *(undefined1 *)(iVar8 + 9) = uVar9;
  }
  iVar7 = param_2 * 0x68 + *piVar2;
  lVar11 = 0x20;
  iVar8 = *(char *)(iVar7 + 10) * 4;
  puVar10 = *(uint **)(puVar6 + -0x7f8c);
  do {
    if ((*puVar10 & 0x10) != 0) {
      bVar5 = true;
      goto LAB_0061d93c;
    }
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar11 != 0);
  bVar5 = false;
LAB_0061d93c:
  bVar4 = (*(uint *)(*(int *)(puVar6 + -0x7f8c) + iVar8) & 0x20) == 0;
  if ((!bVar4) || (fVar1 = *(float *)(*(int *)(puVar6 + -0x7fb4) + iVar8), bVar5)) {
    fVar1 = *(float *)(puVar6 + -0x7f78);
  }
  if (((*(uint *)(*(int *)(puVar6 + -0x7f8c) + iVar8) & 0x10) != 0) && (bVar4)) {
    fVar1 = *(float *)(*(int *)(puVar6 + -0x7fb4) + iVar8);
  }
  iVar3 = *(int *)(iVar7 + 0x28);
  dVar12 = (double)(fVar1 * *(float *)(iVar7 + 0x30) *
                    *(float *)(*(int *)(puVar6 + -0x7fd4) + iVar8) *
                    *(float *)(*(int *)(puVar6 + -0x7f70) + iVar8) * **(float **)(puVar6 + -0x7fb0)
                   * **(float **)(puVar6 + -0x7f6c));
  if (iVar3 != 0) {
    dVar12 = (double)(float)(dVar12 * (double)(*(float *)(iVar3 + 0x11c) * *(float *)(iVar3 + 0x120)
                                               * *(float *)(iVar3 + 0x124) *
                                              *(float *)(iVar3 + 0x128)));
  }
  return dVar12;
}


// 0x061dab4 (0xc0 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061dab4(uint param_1)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 < 0x21) {
    fVar1 = *(float *)(PTR_PTR_0071b024 + -0x7f78);
  }
  else {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar2 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    fVar1 = *(float *)(puVar2 + -0x7f78);
  }
  if (param_1 != 0x20) {
    if ((int)param_1 < 0x1f) {
      fVar1 = *(float *)(*(int *)(puVar2 + -0x7fd4) + param_1 * 4);
    }
    return (double)fVar1;
  }
  return (double)*(float *)(puVar2 + -0x7fd0);
}


// 0x061db74 (0xc4 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061db74(uint param_1)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 < 0x21) {
    fVar1 = *(float *)(PTR_PTR_0071b024 + -0x7f78);
  }
  else {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar2 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    fVar1 = *(float *)(puVar2 + -0x7f78);
  }
  if (param_1 != 0x20) {
    if ((int)param_1 < 0x1f) {
      fVar1 = *(float *)(*(int *)(puVar2 + -0x7fb4) + param_1 * 4);
    }
    return (double)fVar1;
  }
  return (double)**(float **)(puVar2 + -0x7fb0);
}


// 0x061dc38 (0x210 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061dc38(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  
  puVar16 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar16 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar16 + -0x7fa0),0);
  }
  iVar17 = ((int)param_1 >> 5) + (uint)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
  iVar2 = *(int *)(puVar16 + -0x7f68);
  iVar3 = *(int *)(puVar16 + -0x7f64);
  iVar15 = iVar17 * 4;
  iVar4 = *(int *)(puVar16 + -0x7f60);
  uVar1 = *(undefined4 *)(puVar16 + -0x7fd0);
  uVar14 = 1 << (param_1 + iVar17 * -0x20 & 0x3f);
  uVar18 = ~uVar14;
  puVar19 = (undefined4 *)(param_1 * 0x68 + **(int **)(puVar16 + -0x8000));
  puVar19[0x19] = 0;
  *(undefined1 *)((int)puVar19 + 10) = 0;
  puVar19[4] = 0;
  puVar19[6] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[0xe] = 0;
  puVar19[0x10] = 0;
  *(undefined1 *)((int)puVar19 + 0xb) = 0xff;
  puVar19[7] = 0xffffffff;
  *(undefined1 *)(puVar19 + 2) = 0xff;
  *(undefined1 *)((int)puVar19 + 9) = 0xff;
  uVar8 = *(uint *)(iVar2 + iVar15);
  uVar9 = *(uint *)(iVar3 + iVar15);
  uVar10 = *(uint *)(iVar4 + iVar15);
  puVar19[0x16] = uVar1;
  puVar19[0x14] = uVar1;
  *(uint *)(iVar3 + iVar15) = uVar9 & uVar18;
  *(uint *)(iVar2 + iVar15) = uVar8 | uVar14;
  puVar19[0x12] = 0;
  *puVar19 = 0;
  puVar19[3] = 0;
  puVar19[10] = 0;
  puVar19[0xb] = 0;
  puVar19[0xc] = 0;
  puVar19[0x17] = 0;
  puVar19[0x15] = uVar1;
  puVar19[0x18] = 0;
  *(uint *)(iVar4 + iVar15) = uVar18 & uVar10;
  iVar2 = *(int *)(puVar16 + -0x7f44);
  iVar3 = *(int *)(puVar16 + -0x7f58);
  iVar4 = *(int *)(puVar16 + -0x7f54);
  iVar17 = *(int *)(puVar16 + -0x7f50);
  iVar5 = *(int *)(puVar16 + -0x7ff4);
  iVar6 = *(int *)(puVar16 + -0x7f4c);
  iVar7 = *(int *)(puVar16 + -0x7f48);
  uVar8 = *(uint *)(iVar3 + iVar15);
  uVar9 = *(uint *)(iVar4 + iVar15);
  uVar10 = *(uint *)(iVar17 + iVar15);
  uVar14 = *(uint *)(iVar5 + iVar15);
  uVar11 = *(uint *)(iVar6 + iVar15);
  uVar12 = *(uint *)(iVar7 + iVar15);
  uVar13 = *(uint *)(iVar2 + iVar15);
  *(uint *)(*(int *)(puVar16 + -0x7f5c) + iVar15) =
       uVar18 & *(uint *)(*(int *)(puVar16 + -0x7f5c) + iVar15);
  *(uint *)(iVar2 + iVar15) = uVar18 & uVar13;
  *(uint *)(iVar3 + iVar15) = uVar18 & uVar8;
  *(uint *)(iVar4 + iVar15) = uVar18 & uVar9;
  *(uint *)(iVar17 + iVar15) = uVar18 & uVar10;
  *(uint *)(iVar5 + iVar15) = uVar18 & uVar14;
  *(uint *)(iVar6 + iVar15) = uVar18 & uVar11;
  *(uint *)(iVar7 + iVar15) = uVar18 & uVar12;
  return;
}


// 0x061de48 (0x600 bytes)
// strings: 0066c4b8: '%s(%d) : Invalid voice channel pending pause states.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4f0: '%s(%d) : Invalid voice channel pending key states.\n' | 0066c528: '%s(%d) : Invalid voice channel.\n'

void FUN_0061de48(void)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined *puVar6;
  uint uVar8;
  ulonglong uVar7;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint *puVar14;
  uint *unaff_r26;
  uint *puVar15;
  uint *unaff_r27;
  uint *puVar16;
  uint *unaff_r28;
  uint *puVar17;
  char *pcVar18;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  int local_94;
  
  puVar6 = PTR_PTR_0071b024;
  snd_SynthLock();
  piVar2 = *(int **)(puVar6 + -0x7ff0);
  if (*piVar2 < 1) {
LAB_0061e324:
    snd_SynthUnlock();
    return;
  }
  pcVar18 = (char *)0x0;
  local_98 = *(uint **)(puVar6 + -0x7f54);
  uVar10 = 0;
  puVar13 = *(uint **)(puVar6 + -0x7f50);
  pcVar12 = *(char **)(puVar6 + -0x7fa4);
  puVar11 = *(uint **)(puVar6 + -0x7fa0);
  local_a0 = *(uint **)(puVar6 + -0x7f60);
  puVar14 = *(uint **)(puVar6 + -0x7f68);
  local_a4 = *(uint **)(puVar6 + -0x7f64);
LAB_0061df44:
  do {
    puVar15 = local_a4;
    puVar16 = puVar14;
    puVar17 = local_a0;
    local_a4 = puVar15;
    local_a0 = puVar17;
    puVar14 = puVar16;
    if ((*(uint *)(uVar10 + (int)local_98) & *(uint *)(uVar10 + (int)puVar13)) != 0) {
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f40));
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
      if (*pcVar12 != '\0') {
        return;
      }
      uVar7 = (ulonglong)*(byte *)puVar11;
      if (*(byte *)puVar11 != 0) goto LAB_0061dfa8;
    }
    if ((*(uint *)(uVar10 + (int)puVar16) & *(uint *)(uVar10 + (int)puVar15) &
        *(uint *)(uVar10 + (int)puVar17)) != 0) goto LAB_0061dfac;
    iVar9 = *piVar2;
    pcVar18 = pcVar18 + 1;
    uVar10 = uVar10 + 4;
    uVar8 = iVar9 + 0x1f;
    unaff_r28 = puVar17;
    unaff_r27 = puVar16;
    unaff_r26 = puVar15;
  } while ((int)pcVar18 < (int)(((int)uVar8 >> 5) + (uint)((int)uVar8 < 0 && (uVar8 & 0x1f) != 0)));
LAB_0061e00c:
  if (0 < iVar9) {
    local_ac = *(uint **)(puVar6 + -0x7f58);
    pcVar12 = (char *)0x0;
    local_b0 = *(uint **)(puVar6 + -0x7f5c);
    local_94 = 0;
    puVar14 = (uint *)0x20;
    local_a8 = (uint *)0x0;
    local_a4 = puVar15;
    local_a0 = puVar16;
    local_9c = puVar13;
    puVar11 = puVar17;
    do {
      if ((((*local_98 != 0) || (*local_9c != 0)) && ((int)pcVar12 < (int)puVar14)) &&
         ((int)pcVar12 < *piVar2)) {
        piVar3 = *(int **)(puVar6 + -0x8000);
        pcVar18 = pcVar12;
        puVar13 = local_a8;
        do {
          uVar10 = 1 << ((uint)(pcVar18 +
                               (((int)pcVar18 >> 5) +
                               (uint)((int)pcVar18 < 0 && ((uint)pcVar18 & 0x1f) != 0)) * -0x20) &
                        0x3f);
          if ((uVar10 & *local_98) == 0) {
            if ((uVar10 & *local_9c) != 0) {
              iVar9 = *piVar3;
              snd_SynthUnpauseVoice
                        ((double)*(float *)((int)puVar13 + iVar9 + 0x4c),
                         *(undefined4 *)((int)puVar13 + iVar9 + 0x60));
            }
          }
          else {
            snd_SynthPauseVoice(*(undefined4 *)((int)puVar13 + *piVar3 + 0x60));
          }
          if ((int)puVar14 <= (int)(pcVar18 + 1)) break;
          pcVar18 = pcVar18 + 1;
          puVar13 = puVar13 + 0x1a;
        } while ((int)pcVar18 < *piVar2);
      }
      if ((((*local_a0 != 0) || (*local_a4 != 0)) || (*puVar11 != 0)) &&
         (((int)pcVar12 < (int)puVar14 && ((int)pcVar12 < *piVar2)))) {
        puVar13 = *(uint **)(puVar6 + -0x7fa8);
        pcVar4 = *(char **)(puVar6 + -0x7fa4);
        pbVar5 = *(byte **)(puVar6 + -0x7fa0);
        pcVar18 = pcVar12;
        unaff_r28 = local_a8;
        do {
          uVar10 = 1 << ((uint)(pcVar18 +
                               (((int)pcVar18 >> 5) +
                               (uint)((int)pcVar18 < 0 && ((uint)pcVar18 & 0x1f) != 0)) * -0x20) &
                        0x3f);
          unaff_r27 = local_b0;
          unaff_r26 = local_ac;
          if ((uVar10 & *local_a4) == 0) {
            if ((uVar10 & *local_a0) == 0) {
              if ((uVar10 & *puVar11) != 0) {
                piVar3 = *(int **)(puVar6 + -0x8000);
                if (*(int *)((int)unaff_r28 + *piVar3 + 0x10) == 0) {
                  snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f38));
                  snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
                  if (*pcVar4 != '\0') {
                    return;
                  }
                  bVar1 = *pbVar5;
                  uVar7 = (ulonglong)bVar1;
                  if (bVar1 != 0) goto LAB_0061dfa8;
                }
                snd_SynthKeyOffVoice(*(undefined4 *)((int)unaff_r28 + *piVar3 + 0x60));
                uVar8 = *local_ac;
                *local_b0 = *local_b0 & ~uVar10;
                *local_ac = uVar10 | uVar8;
              }
            }
            else {
              iVar9 = *(int *)((int)unaff_r28 + **(int **)(puVar6 + -0x8000) + 0x60);
              if (iVar9 != 0) {
                snd_SynthSilenceVoice(iVar9);
              }
            }
          }
          else {
            piVar3 = *(int **)(puVar6 + -0x8000);
            if (*(int *)((int)unaff_r28 + *piVar3 + 0x10) == 0) {
              snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f38));
              snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
              if (*pcVar4 != '\0') {
                return;
              }
              bVar1 = *pbVar5;
              uVar7 = (ulonglong)bVar1;
              if (bVar1 != 0) goto LAB_0061dfa8;
            }
            snd_SynthKeyOnVoice(*(undefined4 *)((int)unaff_r28 + *piVar3 + 0x60));
            uVar8 = *local_b0;
            *local_ac = *local_ac & ~uVar10;
            *local_b0 = uVar10 | uVar8;
          }
          if ((int)puVar14 <= (int)(pcVar18 + 1)) break;
          pcVar18 = pcVar18 + 1;
          unaff_r28 = unaff_r28 + 0x1a;
        } while ((int)pcVar18 < *piVar2);
      }
      puVar14 = puVar14 + 8;
      uVar10 = *piVar2 + 0x1f;
      local_94 = local_94 + 1;
      pcVar12 = pcVar12 + 0x20;
      *local_9c = 0;
      local_9c = local_9c + 1;
      local_a8 = local_a8 + 0x340;
      local_ac = local_ac + 1;
      local_b0 = local_b0 + 1;
      *local_98 = 0;
      *local_a0 = 0;
      *local_a4 = 0;
      *puVar11 = 0;
      local_a4 = local_a4 + 1;
      local_a0 = local_a0 + 1;
      local_98 = local_98 + 1;
      puVar11 = puVar11 + 1;
    } while (local_94 < (int)(((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)))
    ;
  }
  goto LAB_0061e324;
LAB_0061dfa8:
  do {
    puVar15 = unaff_r26;
    puVar16 = unaff_r27;
    trapWord(0x1f,uVar7,uVar7);
    puVar17 = unaff_r28;
LAB_0061dfac:
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f3c));
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
    if (*pcVar12 != '\0') {
      return;
    }
    uVar7 = (ulonglong)*(byte *)puVar11;
    unaff_r28 = puVar17;
    unaff_r27 = puVar16;
    unaff_r26 = puVar15;
  } while (*(byte *)puVar11 != 0);
  iVar9 = *piVar2;
  pcVar18 = pcVar18 + 1;
  uVar10 = uVar10 + 4;
  uVar8 = iVar9 + 0x1f;
  if ((int)pcVar18 < (int)(((int)uVar8 >> 5) + (uint)((int)uVar8 < 0 && (uVar8 & 0x1f) != 0)))
  goto LAB_0061df44;
  goto LAB_0061e00c;
}


// 0x061e448 (0x340 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061e448(uint param_1,uint *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  puVar9 = PTR_PTR_0071b024;
  if (0x1f < param_1) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar9 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar9 + -0x7fa0),0);
  }
  snd_SynthLock();
  if (param_2 == (uint *)0x0) {
    puVar4 = (uint *)**(int **)(puVar9 + -0x7fc8);
    if (puVar4 != (uint *)0x0) {
      uVar14 = *puVar4;
      while (uVar14 != param_1) {
        puVar4 = (uint *)puVar4[10];
        if (puVar4 == (uint *)0x0) goto LAB_0061e6a8;
        uVar14 = *puVar4;
      }
      puVar4[9] = puVar4[9] | 1;
    }
  }
  else {
    puVar4 = *(uint **)(puVar9 + -0x7f34);
    if (*puVar4 != 0) {
      uVar14 = *param_2;
      if (0x1e < uVar14) {
        snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fac));
        if (**(char **)(puVar9 + -0x7fa4) != '\0') {
          return;
        }
        trapWord(0x18,(ulonglong)**(byte **)(puVar9 + -0x7fa0),0);
        uVar14 = *param_2;
      }
      piVar5 = *(int **)(puVar9 + -0x7fc8);
      puVar6 = (uint *)*piVar5;
      bVar1 = puVar6 == (uint *)0x0;
      if (bVar1) {
LAB_0061e51c:
        iVar11 = *(int *)(puVar9 + -0x7f30);
        iVar15 = *(int *)(puVar9 + -0x7f30);
        *(uint **)(param_1 * 0x2c + iVar11 + 0x28) = puVar6;
        *piVar5 = param_1 * 0x2c + iVar15;
      }
      else {
        uVar7 = *puVar6;
        puVar8 = puVar6;
        while (uVar7 != param_1) {
          puVar8 = (uint *)puVar8[10];
          bVar1 = puVar8 == (uint *)0x0;
          if (bVar1) goto LAB_0061e51c;
          uVar7 = *puVar8;
        }
        iVar11 = *(int *)(puVar9 + -0x7f30);
      }
      iVar12 = param_1 * 0x2c;
      fVar2 = (float)param_2[2];
      fVar3 = *(float *)(puVar9 + -0x7f78);
      iVar15 = 0;
      *(uint *)(iVar12 + iVar11 + 4) = uVar14;
      *(uint *)(iVar12 + iVar11 + 8) = param_2[1];
      if ((fVar3 <= fVar2) && (iVar15 = 0x10000, fVar2 <= *(float *)(puVar9 + -0x7fd0))) {
        iVar15 = (int)(fVar2 * *(float *)(puVar9 + -0x7f2c));
      }
      fVar2 = (float)param_2[3];
      fVar3 = *(float *)(puVar9 + -0x7f78);
      iVar10 = 0;
      *(int *)(iVar12 + iVar11 + 0xc) = iVar15;
      if ((fVar3 <= fVar2) && (iVar10 = 0xa0000, fVar2 <= *(float *)(puVar9 + -0x7f24))) {
        iVar10 = (int)(fVar2 * *(float *)(puVar9 + -0x7f2c));
      }
      fVar2 = (float)param_2[4];
      fVar3 = *(float *)(puVar9 + -0x7f78);
      iVar15 = 0;
      *(int *)(iVar12 + iVar11 + 0x10) = iVar10;
      if ((fVar3 <= fVar2) && (iVar15 = 0xa0000, fVar2 <= *(float *)(puVar9 + -0x7f24))) {
        iVar15 = (int)(fVar2 * *(float *)(puVar9 + -0x7f2c));
      }
      iVar10 = iVar12 + 0x10 + iVar11;
      *(int *)(iVar10 + 8) = iVar15;
      *(undefined4 *)(iVar12 + iVar11 + 0x24) = 0;
      if (bVar1) {
        *(undefined4 *)(iVar10 + 0x10) = 0x10000;
      }
      iVar13 = (int)(0xf0 / (ulonglong)*puVar4);
      iVar15 = iVar13 * *(int *)(iVar12 + iVar11 + 0x10) >> 0x10;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      iVar11 = 0x10000 - *(int *)(iVar12 + iVar11 + 0xc);
      iVar15 = iVar11 / iVar15;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      *(int *)(iVar10 + 4) = iVar15;
      iVar15 = iVar13 * *(int *)(iVar10 + 8) >> 0x10;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      iVar11 = iVar11 / iVar15;
      if (iVar11 == 0) {
        iVar11 = 1;
      }
      *(int *)(iVar10 + 0xc) = iVar11;
    }
  }
LAB_0061e6a8:
  snd_SynthUnlock();
  return;
}


// 0x061e788 (0xcc bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e788(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  snd_SynthLock();
  uVar5 = 0;
  lVar6 = 0x20;
  puVar4 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar3 = ((ulonglong)*puVar4 & 0x1f) << 0x1a | (ulonglong)(*puVar4 >> 6);
      *puVar4 = (uint)(uVar3 << 6) | (uint)uVar3 >> 0x1a;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  snd_SynthUnlock();
  return;
}


// 0x061e854 (0xc8 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e854(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  snd_SynthLock();
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      *puVar3 = *puVar3 | 0x20;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  snd_SynthUnlock();
  return;
}


// 0x061e91c (0xcc bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e91c(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  snd_SynthLock();
  uVar5 = 0;
  lVar6 = 0x20;
  puVar4 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar3 = ((ulonglong)*puVar4 & 0xf) << 0x1b | (ulonglong)(*puVar4 >> 5);
      *puVar4 = (uint)(uVar3 << 5) | (uint)uVar3 >> 0x1b;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  snd_SynthUnlock();
  return;
}


// 0x061e9e8 (0xc8 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e9e8(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  snd_SynthLock();
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      *puVar3 = *puVar3 | 0x10;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  snd_SynthUnlock();
  return;
}


// 0x061eab0 (0xc0 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061eab0(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  snd_SynthLock();
  uVar5 = 0;
  lVar6 = 0x20;
  puVar4 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar3 = ((ulonglong)*puVar4 & 1) << 0x1e | (ulonglong)(*puVar4 >> 2);
      *puVar4 = (uint)(uVar3 << 2) | (uint)uVar3 >> 0x1e;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  snd_SynthUnlock();
  return;
}


// 0x061eb70 (0xbc bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061eb70(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  snd_SynthLock();
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      *puVar3 = *puVar3 | 2;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  snd_SynthUnlock();
  return;
}


// 0x061ec2c (0xb0 bytes)
void FUN_0061ec2c(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  snd_SynthLock();
  puVar5 = *(uint **)(puVar2 + -0x7f8c);
  uVar3 = 0;
  lVar6 = 0x20;
  do {
    if ((1 << (uVar3 & 0x3f) & param_1) == 0) {
      uVar1 = *puVar5;
      uVar4 = ((ulonglong)uVar1 & 3) << 0x1d | (ulonglong)(uVar1 >> 3);
      if ((uVar1 & 4) != 0) {
        *puVar5 = (uint)(uVar4 << 3) | (uint)uVar4 >> 0x1d;
      }
    }
    else {
      *puVar5 = *puVar5 | 4;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  snd_SynthUnlock();
  return;
}


// 0x061ecdc (0xb0 bytes)
void FUN_0061ecdc(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  snd_SynthLock();
  puVar5 = *(uint **)(puVar2 + -0x7f8c);
  uVar3 = 0;
  lVar6 = 0x20;
  do {
    if ((1 << (uVar3 & 0x3f) & param_1) == 0) {
      uVar1 = *puVar5;
      uVar4 = ((ulonglong)uVar1 & 7) << 0x1c | (ulonglong)(uVar1 >> 4);
      if ((uVar1 & 8) != 0) {
        *puVar5 = (uint)(uVar4 << 4) | (uint)uVar4 >> 0x1c;
      }
    }
    else {
      *puVar5 = *puVar5 | 8;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  snd_SynthUnlock();
  return;
}


// 0x061ed8c (0xac bytes)
void FUN_0061ed8c(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  puVar1 = PTR_PTR_0071b024;
  snd_SynthLock();
  puVar3 = *(uint **)(puVar1 + -0x7f8c);
  uVar2 = 0;
  lVar4 = 0x20;
  do {
    if ((1 << (uVar2 & 0x3f) & param_1) == 0) {
      if ((*puVar3 & 1) != 0) {
        *puVar3 = *puVar3 & 0xfffffffe;
      }
    }
    else {
      *puVar3 = *puVar3 | 1;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  snd_SynthUnlock();
  return;
}


// 0x061ee38 (0xf0 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void snd_UpdateGroupOrMasterVolume(double param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b024;
  if (((0x20 < param_2) || (param_1 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))) ||
     ((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar4 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
  }
  snd_SynthLock();
  if (param_2 == 0x20) {
    pfVar3 = *(float **)(puVar4 + -0x7fb0);
    **(undefined4 **)(puVar4 + -0x7fb8) = 0xffffffff;
    *pfVar3 = (float)param_1;
  }
  else if ((int)param_2 < 0x1f) {
    puVar1 = *(uint **)(puVar4 + -0x7fb8);
    uVar2 = *puVar1;
    *(float *)(*(int *)(puVar4 + -0x7fb4) + param_2 * 4) = (float)param_1;
    *puVar1 = 1 << (param_2 & 0x3f) | uVar2;
  }
  snd_SynthUnlock();
  return;
}


// 0x061ef28 (0x60 bytes)
void FUN_0061ef28(ulonglong param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b024;
  snd_SynthLock();
  *(undefined4 *)(*(int *)(puVar1 + -0x7f1c) + (int)((param_1 & 0xffffffff) << 2)) = param_2;
  snd_SynthUnlock();
  return;
}


// 0x061ef88 (0x74 bytes)
void FUN_0061ef88(ulonglong param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b024;
  iVar2 = (int)((param_1 & 0xffffffff) << 2);
  snd_SynthLock();
  iVar1 = *(int *)(puVar3 + -0x7f18);
  *(undefined2 *)(iVar1 + iVar2) = param_2;
  *(undefined2 *)(iVar2 + iVar1 + 2) = param_3;
  snd_SynthUnlock();
  return;
}


// 0x061effc (0xf0 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061effc(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  puVar3 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar3 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fa0),0);
  }
  snd_SynthLock();
  if (0 < **(int **)(puVar3 + -0x7ff0)) {
    uVar4 = **(int **)(puVar3 + -0x7ff0) + 0x1f;
    iVar5 = 0;
    uVar4 = ((int)uVar4 >> 5) + (uint)((int)uVar4 < 0 && (uVar4 & 0x1f) != 0);
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar6 = 1;
    }
    do {
      puVar2 = (uint *)(iVar5 + param_2);
      iVar1 = iVar5 + param_1;
      iVar5 = iVar5 + 4;
      *puVar2 = *puVar2 | *(uint *)(iVar1 + 0x14);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  snd_SynthUnlock();
  return;
}


// 0x061f0ec (0x14 bytes)
void FUN_0061f0ec(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7f44));
  return;
}


// 0x061f100 (0x14 bytes)
void FUN_0061f100(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7f48));
  return;
}


// 0x061f114 (0x14 bytes)
void FUN_0061f114(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7f4c));
  return;
}


// 0x061f128 (0x14 bytes)
void FUN_0061f128(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7ff4));
  return;
}


// 0x061f13c (0x2a4 bytes)
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_0061f13c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  puVar8 = PTR_PTR_0071b024;
  if (param_1 == 0) goto LAB_0061f3ac;
  do {
    snd_SynthLock();
    piVar2 = *(int **)(puVar8 + -0x7ff0);
    if (*piVar2 < 1) {
LAB_0061f348:
      snd_SynthUnlock();
      return;
    }
    puVar13 = (uint *)(param_1 + 0x14);
    iVar12 = 0;
    iVar11 = 0;
    uVar17 = 0;
    while( true ) {
      uVar10 = *puVar13;
      uVar14 = uVar17 + 0x20;
      if ((uVar10 != 0) && ((int)uVar17 < *piVar2)) break;
LAB_0061f320:
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
      uVar10 = *piVar2 + 0x1f;
      iVar11 = iVar11 + 0xd00;
      uVar17 = uVar14;
      if ((int)(((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)) <= iVar12)
      goto LAB_0061f348;
    }
    piVar3 = *(int **)(puVar8 + -0x8000);
    pcVar4 = *(char **)(puVar8 + -0x7fa4);
    pbVar5 = *(byte **)(puVar8 + -0x7fa0);
    iVar6 = *(int *)(puVar8 + -0x7f50);
    iVar16 = iVar11;
LAB_0061f22c:
    iVar15 = ((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0);
    uVar7 = 1 << (uVar17 + iVar15 * -0x20 & 0x3f);
    if ((uVar7 & uVar10) == 0) goto joined_r0x0061f214;
    iVar9 = iVar16 + *piVar3;
    if ((*(int *)(iVar9 + 0x10) != 0) && (*(int *)(iVar9 + 0x28) == param_1)) {
LAB_0061f2c8:
      if ((*(uint *)(*(int *)(puVar8 + -0x7f8c) + *(char *)(param_1 + 0x10) * 4) & 2) == 0) {
        iVar15 = iVar15 * 4;
        uVar10 = *(uint *)(iVar6 + iVar15);
        *(uint *)(*(int *)(puVar8 + -0x7f54) + iVar15) =
             *(uint *)(*(int *)(puVar8 + -0x7f54) + iVar15) & ~uVar7;
        *(uint *)(iVar6 + iVar15) = uVar7 | uVar10;
      }
joined_r0x0061f214:
      if ((int)uVar14 <= (int)(uVar17 + 1)) goto LAB_0061f320;
      uVar17 = uVar17 + 1;
      iVar16 = iVar16 + 0x68;
      if (*piVar2 <= (int)uVar17) goto LAB_0061f320;
      uVar10 = *puVar13;
      goto LAB_0061f22c;
    }
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f14));
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
    if (*pcVar4 != '\0') {
      return;
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      if (*(int *)(iVar16 + *piVar3 + 0x28) != param_1) goto joined_r0x0061f214;
      goto LAB_0061f2c8;
    }
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061f3ac:
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
    if (**(char **)(puVar8 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
  } while( true );
}


// 0x061f3e0 (0x278 bytes)
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_0061f3e0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  puVar9 = PTR_PTR_0071b024;
  if (param_1 == 0) goto LAB_0061f624;
  do {
    snd_SynthLock();
    piVar2 = *(int **)(puVar9 + -0x7ff0);
    if (*piVar2 < 1) {
LAB_0061f5c0:
      snd_SynthUnlock();
      return;
    }
    puVar14 = (uint *)(param_1 + 0x14);
    iVar13 = 0;
    iVar12 = 0;
    uVar18 = 0;
    while( true ) {
      uVar11 = *puVar14;
      uVar15 = uVar18 + 0x20;
      if ((uVar11 != 0) && ((int)uVar18 < *piVar2)) break;
LAB_0061f598:
      iVar13 = iVar13 + 1;
      puVar14 = puVar14 + 1;
      uVar11 = *piVar2 + 0x1f;
      iVar12 = iVar12 + 0xd00;
      uVar18 = uVar15;
      if ((int)(((int)uVar11 >> 5) + (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) <= iVar13)
      goto LAB_0061f5c0;
    }
    piVar3 = *(int **)(puVar9 + -0x8000);
    pcVar4 = *(char **)(puVar9 + -0x7fa4);
    pbVar5 = *(byte **)(puVar9 + -0x7fa0);
    iVar6 = *(int *)(puVar9 + -0x7f50);
    iVar7 = *(int *)(puVar9 + -0x7f54);
    iVar17 = iVar12;
LAB_0061f4d0:
    iVar16 = ((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
    uVar8 = 1 << (uVar18 + iVar16 * -0x20 & 0x3f);
    if ((uVar8 & uVar11) == 0) goto joined_r0x0061f4b8;
    iVar10 = iVar17 + *piVar3;
    if ((*(int *)(iVar10 + 0x10) != 0) && (*(int *)(iVar10 + 0x28) == param_1)) {
LAB_0061f56c:
      iVar16 = iVar16 * 4;
      uVar11 = *(uint *)(iVar7 + iVar16);
      *(uint *)(iVar6 + iVar16) = *(uint *)(iVar6 + iVar16) & ~uVar8;
      *(uint *)(iVar7 + iVar16) = uVar8 | uVar11;
joined_r0x0061f4b8:
      if ((int)uVar15 <= (int)(uVar18 + 1)) goto LAB_0061f598;
      uVar18 = uVar18 + 1;
      iVar17 = iVar17 + 0x68;
      if (*piVar2 <= (int)uVar18) goto LAB_0061f598;
      uVar11 = *puVar14;
      goto LAB_0061f4d0;
    }
    snd_Printf((char)*(undefined4 *)(puVar9 + -0x7f14));
    snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fac));
    if (*pcVar4 != '\0') {
      return;
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      if (*(int *)(iVar17 + *piVar3 + 0x28) != param_1) goto joined_r0x0061f4b8;
      goto LAB_0061f56c;
    }
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061f624:
    snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fac));
    if (**(char **)(puVar9 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar9 + -0x7fa0),0);
  } while( true );
}


// 0x061f658 (0x150 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c570: '%s(%d) : Invlaid voice owner.\n'

void FUN_0061f658(double param_1,int param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b024;
  if ((((param_2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_2)) ||
      (param_1 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))) ||
     (((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_1 || (0x168 < param_5)))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar1 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fa0),0);
  }
  snd_SynthLock();
  iVar2 = param_2 * 0x68 + **(int **)(puVar1 + -0x8000);
  if (*(int *)(iVar2 + 0x28) != param_6) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f10));
    snd_SynthUnlock();
    return;
  }
  *(uint *)(iVar2 + 0x40) = param_5;
  *(float *)(iVar2 + 0x30) = (float)param_1;
  *(undefined4 *)(iVar2 + 0x38) = param_4;
  snd_SynthUnlock();
  return;
}


// 0x061f7a8 (0x24 bytes)
void FUN_0061f7a8(void)

{
  snd_SynthUnlock();
  return;
}


// 0x061f7cc (0x290 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_0061f7cc(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar7;
  uint uStack00000008;
  
  puVar5 = PTR_PTR_0071b024;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar5 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar5 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fa0),0);
    piVar2 = *(int **)(puVar5 + -0x8000);
    iVar6 = param_1 * 0x68 + *piVar2;
    iVar3 = *(int *)(iVar6 + 0x28);
  }
  else {
    piVar2 = *(int **)(PTR_PTR_0071b024 + -0x8000);
    iVar6 = param_1 * 0x68 + *piVar2;
    iVar3 = *(int *)(iVar6 + 0x28);
  }
  if (iVar3 == 0) {
    iVar6 = (int)((float)*(uint *)(iVar6 + 0x20) * *(float *)(puVar5 + -0x7f78));
    goto LAB_0061f8bc;
  }
  fVar1 = *(float *)(iVar3 + 0x158) + *(float *)(iVar3 + 0x154) + *(float *)(iVar3 + 0x15c) +
          *(float *)(iVar3 + 0x160);
  if ((int)fVar1 < -1) {
    fVar1 = *(float *)(puVar5 + -0x7f0c);
LAB_0061fa54:
    uVar4 = *(uint *)(iVar6 + 0x24);
LAB_0061fa28:
    fVar1 = fVar1 * (float)uVar4;
  }
  else {
    if (fVar1 <= *(float *)(puVar5 + -0x7fd0)) {
      if (fVar1 < *(float *)(puVar5 + -0x7f78)) goto LAB_0061fa54;
      uVar4 = *(uint *)(iVar6 + 0x20);
      goto LAB_0061fa28;
    }
    fVar1 = (float)*(uint *)(iVar6 + 0x20);
  }
  iVar6 = *(int *)(iVar3 + 0x144) + *(int *)(iVar3 + 0x14c) +
          *(int *)(iVar3 + 0x148) + *(int *)(iVar3 + 0x150) + (int)fVar1;
LAB_0061f8bc:
  if (0x1e00 < iVar6) {
    iVar6 = 0x1e00;
  }
  if (iVar6 < -0x1e00) {
    iVar6 = -0x1e00;
  }
  dVar7 = (double)FUN_005dcbd8((double)*(float *)(puVar5 + -0x7f04),
                               (double)((float)(longlong)iVar6 / *(float *)(puVar5 + -0x7efc)));
  dVar7 = (double)(float)(dVar7 * (double)*(float *)(param_1 * 0x68 + *piVar2 + 0x48));
  if ((**(uint **)(puVar5 + -0x7ef4) & 1) != 0) {
    dVar7 = (double)(float)(dVar7 * (double)**(float **)(puVar5 + -0x7ef0));
  }
  if ((iVar3 != 0) &&
     (iVar3 = *(char *)(iVar3 + 0x10) * 4, (*(uint *)(*(int *)(puVar5 + -0x7eec) + iVar3) & 1) != 0)
     ) {
    dVar7 = (double)(float)(dVar7 * (double)*(float *)(*(int *)(puVar5 + -0x7ee8) + iVar3));
  }
  return dVar7;
}


// 0x061fa5c (0x59c bytes)
void FUN_0061fa5c(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  double dVar15;
  uint *local_a0;
  uint *local_9c;
  int local_98;
  
  puVar4 = PTR_PTR_0071b024;
  snd_SynthLock();
  puVar9 = *(uint **)(puVar4 + -0x7fb8);
  if (*puVar9 == 0) {
    piVar1 = *(int **)(puVar4 + -0x7ff0);
    iVar8 = *piVar1;
  }
  else {
    for (iVar8 = FUN_00619848(); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x224)) {
      while (((1 << ((int)*(char *)(iVar8 + 0x10) & 0x3fU) | 0x80000000U) & *puVar9) != 0) {
        FUN_0061f128(iVar8);
        iVar8 = *(int *)(iVar8 + 0x224);
        if (iVar8 == 0) goto LAB_0061ffd8;
      }
    }
LAB_0061ffd8:
    piVar1 = *(int **)(puVar4 + -0x7ff0);
    *puVar9 = 0;
    iVar8 = *piVar1;
  }
  if (iVar8 < 1) {
    piVar2 = *(int **)(puVar4 + -0x7ee4);
  }
  else {
    iVar12 = 0x20;
    local_98 = 0;
    uVar11 = 0;
    iVar8 = 0;
    piVar2 = *(int **)(puVar4 + -0x7ee4);
    puVar9 = *(uint **)(puVar4 + -0x7f48);
    puVar10 = *(uint **)(puVar4 + -0x7f44);
    local_a0 = *(uint **)(puVar4 + -0x7f4c);
    local_9c = *(uint **)(puVar4 + -0x7ff4);
    do {
      if (((*local_9c != 0) && ((int)uVar11 < iVar12)) && ((int)uVar11 < *piVar1)) {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          if ((*(int *)(iVar5 + 0x10) != 0) &&
             ((1 << (uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0))
                              * -0x20 & 0x3f) & *local_9c) != 0)) {
            dVar15 = (double)FUN_0061d850(uVar14);
            iVar6 = *piVar3;
            *(float *)(iVar5 + 0x34) = (float)dVar15;
            iVar6 = iVar13 + iVar6;
            FUN_00625f8c((double)*(float *)(iVar6 + 0x34),(double)*(float *)(iVar6 + 0x50),
                         (double)*(float *)(iVar6 + 0x54),(double)*(float *)(iVar6 + 0x58),
                         *(undefined4 *)(iVar6 + 0x60));
          }
          if (iVar12 <= (int)(uVar14 + 1)) break;
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 0x68;
        } while ((int)uVar14 < *piVar1);
      }
      if (((*local_a0 != 0) && ((int)uVar11 < iVar12)) && ((int)uVar11 < *piVar1)) {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          if (*(int *)(iVar5 + 0x10) != 0) {
            if ((1 << (uVar14 + (((int)uVar14 >> 5) +
                                (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) * -0x20 & 0x3f) &
                *local_a0) != 0) {
              FUN_0061d3a0(uVar14,iVar5 + 0x3c,iVar5 + 0x44);
              iVar5 = 0;
              iVar6 = iVar13 + *piVar3;
              if (*(int *)(iVar6 + 0x28) != 0) {
                iVar5 = *(int *)(iVar6 + 0x28) + 0x168;
              }
              FUN_0062c3a0(*(undefined4 *)(iVar6 + 0x60),*(undefined4 *)(iVar6 + 0x3c),
                           *(undefined4 *)(iVar6 + 0x44),iVar5);
            }
          }
          if (iVar12 <= (int)(uVar14 + 1)) break;
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 0x68;
        } while ((int)uVar14 < *piVar1);
      }
      if ((((*puVar9 != 0) || (*piVar2 != 0)) && ((int)uVar11 < iVar12)) && ((int)uVar11 < *piVar1))
      {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          if ((*(int *)(iVar5 + 0x10) != 0) &&
             (((1 << (uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)
                               ) * -0x20 & 0x3f) & *puVar9) != 0 || (*piVar2 != 0)))) {
            dVar15 = (double)FUN_0061f7cc(uVar14);
            iVar6 = *piVar3;
            *(float *)(iVar5 + 0x4c) = (float)dVar15;
            iVar6 = iVar13 + iVar6;
            FUN_00626434((double)*(float *)(iVar6 + 0x4c),*(undefined4 *)(iVar6 + 0x60));
          }
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 0x68;
        } while (((int)uVar14 < iVar12) && ((int)uVar14 < *piVar1));
      }
      if ((*puVar10 != 0) && (((int)uVar11 < iVar12 && ((int)uVar11 < *piVar1)))) {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          uVar7 = uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) *
                           -0x20;
          iVar13 = iVar13 + 0x68;
          uVar14 = uVar14 + 1;
          if ((*(int *)(iVar5 + 0x10) != 0) && ((1 << (uVar7 & 0x3f) & *puVar10) != 0)) {
            FUN_0062de84((double)*(float *)(iVar5 + 0x34),(double)*(float *)(iVar5 + 0x50),
                         (double)*(float *)(iVar5 + 0x54),(double)*(float *)(iVar5 + 0x58),
                         *(undefined4 *)(iVar5 + 0x60));
          }
        } while (((int)uVar14 < iVar12) && ((int)uVar14 < *piVar1));
      }
      uVar14 = *piVar1 + 0x1f;
      local_98 = local_98 + 1;
      *local_9c = 0;
      *local_a0 = 0;
      *puVar9 = 0;
      *puVar10 = 0;
      iVar12 = iVar12 + 0x20;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 0xd00;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
      local_a0 = local_a0 + 1;
      local_9c = local_9c + 1;
    } while (local_98 < (int)(((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)))
    ;
  }
  *piVar2 = 0;
  snd_SynthUnlock();
  return;
}


// 0x061fff8 (0x158 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061fff8(uint param_1,undefined1 param_2,undefined1 param_3)

{
  float fVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  double dVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar2 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    fVar1 = *(float *)(puVar2 + -0x7f78);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(puVar2 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  else {
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    fVar1 = *(float *)(PTR_PTR_0071b024 + -0x7f78);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(PTR_PTR_0071b024 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  if (uVar4 != 0) {
    return (double)fVar1;
  }
  dVar5 = (double)snd_SynthGetVoiceOutputLevel
                            ((double)fVar1,
                             *(undefined4 *)(param_1 * 0x68 + **(int **)(puVar2 + -0x8000) + 0x60),
                             param_2,param_3);
  return dVar5;
}


// 0x0620150 (0x140 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

undefined4 FUN_00620150(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  puVar1 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar1 + -0x7fa4) != '\0') {
      return 0;
    }
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fa0),0);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(puVar1 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  else {
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(PTR_PTR_0071b024 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  if (uVar4 != 0) {
    return 0;
  }
  uVar2 = snd_SynthGetVoicePlaybackPosition
                    (*(undefined4 *)(param_1 * 0x68 + **(int **)(puVar1 + -0x8000) + 0x60),param_2);
  return uVar2;
}


// 0x0620290 (0x154 bytes)
// strings: 0066c4a0: 'common/valloc.cpp' | 0066c570: '%s(%d) : Invlaid voice owner.\n' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_00620290(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b024;
  if (((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) || ((int)param_2 == 0))
  {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    snd_SynthLock();
    iVar3 = param_1 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  else {
    snd_SynthLock(param_1,param_2,0x3d9);
    iVar3 = param_1 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  if (iVar1 != param_3) {
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f10));
    snd_SynthUnlock();
    return;
  }
  FUN_0062ee18(*(undefined4 *)(iVar3 + 0x60),iVar1 + 0x168,param_2 & 0xffffffff);
  snd_SynthUnlock();
  return;
}


// 0x06203e4 (0x388 bytes)
// strings: 0066c4a0: 'common/valloc.cpp' | 0066c5c0: '%s(%d) : Voice index %d was already on the playing list.\n' | 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c590: '%s(%d) : Voice index %d is already playing.\n' | 0066c600: '%s(%d) : Voice index %d has an invalid voice group.\n'

void FUN_006203e4(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined *puVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  
  puVar19 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar19 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar19 + -0x7fa0),0);
    puVar23 = (undefined4 *)(param_1 * 0x68 + **(int **)(puVar19 + -0x8000));
    iVar1 = puVar23[4];
  }
  else {
    puVar23 = (undefined4 *)(param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000));
    iVar1 = puVar23[4];
  }
  if (iVar1 == 1) {
    snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ee0));
    snd_Printf((char)*(undefined4 *)(puVar19 + -0x7fac));
    if (**(char **)(puVar19 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar19 + -0x7fa0),0);
    puVar23[4] = 1;
    uVar20 = FUN_00604918();
    puVar2 = *(undefined4 **)(puVar19 + -0x7edc);
    puVar23[5] = uVar20;
    *puVar23 = 0;
    puVar3 = (undefined4 *)*puVar2;
  }
  else {
    puVar23[4] = 1;
    uVar20 = FUN_00604918();
    puVar2 = *(undefined4 **)(puVar19 + -0x7edc);
    puVar23[5] = uVar20;
    *puVar23 = 0;
    puVar3 = (undefined4 *)*puVar2;
  }
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar23 == puVar3) {
      snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ed8));
    }
    else {
      do {
        puVar2 = (undefined4 *)*puVar3;
        if (puVar2 == (undefined4 *)0x0) {
          *puVar3 = puVar23;
          goto LAB_006205d0;
        }
        puVar3 = puVar2;
      } while (puVar23 != puVar2);
      snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ed8));
    }
    return;
  }
  *puVar2 = puVar23;
LAB_006205d0:
  if (*(byte *)((int)puVar23 + 10) < 0x20) {
    iVar1 = (char)*(byte *)((int)puVar23 + 10) * 4;
    *(int *)(*(int *)(puVar19 + -0x7fec) + iVar1) =
         *(int *)(*(int *)(puVar19 + -0x7fec) + iVar1) + 1;
  }
  else {
    snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ed4));
  }
  iVar21 = ((int)param_1 >> 5) + (uint)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
  iVar1 = *(int *)(puVar19 + -0x7f64);
  iVar4 = *(int *)(puVar19 + -0x7ff4);
  iVar5 = *(int *)(puVar19 + -0x7f4c);
  iVar18 = iVar21 * 4;
  iVar6 = *(int *)(puVar19 + -0x7f44);
  iVar7 = *(int *)(puVar19 + -0x7f60);
  iVar8 = *(int *)(puVar19 + -0x7f5c);
  iVar9 = *(int *)(puVar19 + -0x7f58);
  uVar17 = 1 << (param_1 + iVar21 * -0x20 & 0x3f);
  uVar10 = *(uint *)(iVar1 + iVar18);
  uVar22 = ~uVar17;
  uVar11 = *(uint *)(iVar4 + iVar18);
  uVar12 = *(uint *)(iVar5 + iVar18);
  uVar13 = *(uint *)(iVar6 + iVar18);
  uVar14 = *(uint *)(iVar7 + iVar18);
  uVar15 = *(uint *)(iVar8 + iVar18);
  uVar16 = *(uint *)(iVar9 + iVar18);
  *(uint *)(*(int *)(puVar19 + -0x7f48) + iVar18) =
       uVar17 | *(uint *)(*(int *)(puVar19 + -0x7f48) + iVar18);
  *(uint *)(iVar6 + iVar18) = uVar17 | uVar13;
  *(uint *)(iVar1 + iVar18) = uVar10 | uVar17;
  *(uint *)(iVar4 + iVar18) = uVar17 | uVar11;
  *(uint *)(iVar5 + iVar18) = uVar17 | uVar12;
  *(uint *)(iVar7 + iVar18) = uVar14 & uVar22;
  *(uint *)(iVar8 + iVar18) = uVar22 & uVar15;
  *(uint *)(iVar9 + iVar18) = uVar22 & uVar16;
  if ((*(uint *)(*(int *)(puVar19 + -0x7f8c) + *(char *)((int)puVar23 + 10) * 4) & 2) == 0) {
    *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18) =
         uVar22 & *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18);
  }
  else {
    *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18) =
         uVar17 | *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18);
  }
  *(uint *)(*(int *)(puVar19 + -0x7f50) + iVar18) =
       uVar22 & *(uint *)(*(int *)(puVar19 + -0x7f50) + iVar18);
  return;
}


// 0x062076c (0x278 bytes)
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b024 : 0x00620a10 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0062076c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  
  puVar7 = PTR_PTR_0071b024;
  dVar18 = (double)snd_SynthLock();
  piVar2 = *(int **)(puVar7 + -0x7ff0);
  if (0 < *piVar2) {
    puVar15 = (uint *)(param_1 + 0x14);
    pcVar3 = *(char **)(puVar7 + -0x7fa4);
    iVar14 = 0;
    pbVar4 = *(byte **)(puVar7 + -0x7fa0);
    piVar5 = *(int **)(puVar7 + -0x8000);
    iVar13 = 0;
    uVar9 = 0;
    do {
      uVar12 = *puVar15;
      uVar16 = uVar9 + 0x20;
      if ((uVar12 != 0) && ((int)uVar9 < *piVar2)) {
        uVar6 = *(uint *)(puVar7 + -0x7fa8);
        iVar17 = iVar13;
        do {
          if ((1 << (uVar9 + (((int)uVar9 >> 5) + (uint)((int)uVar9 < 0 && (uVar9 & 0x1f) != 0)) *
                             -0x20 & 0x3f) & uVar12) != 0) {
            iVar10 = iVar17 + *piVar5;
            if (((*(int *)(iVar10 + 0x10) == 0) || (*(int *)(iVar10 + 0x28) != param_1)) ||
               (*(int *)(iVar10 + 0x2c) == 0)) {
              snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f14));
              iVar10 = *(int *)(puVar7 + -0x7fac);
              uVar11 = (ulonglong)uVar6;
              snd_Printf((char)iVar10);
              puVar8 = PTR_PTR_0071b024;
              if (*pcVar3 != '\0') {
                return;
              }
              bVar1 = *pbVar4;
              if (bVar1 != 0) {
                trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
                if (((iVar10 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= iVar10)) ||
                   (dVar18 < 0.0)) {
                  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
                  if (**(char **)(puVar8 + -0x7fa4) != '\0') {
                    return;
                  }
                  trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
                  snd_SynthLock();
                  iVar14 = iVar10 * 0x68 + **(int **)(puVar8 + -0x8000);
                  iVar13 = *(int *)(iVar14 + 0x28);
                }
                else {
                  snd_SynthLock();
                  iVar14 = iVar10 * 0x68 + **(int **)(puVar8 + -0x8000);
                  iVar13 = *(int *)(iVar14 + 0x28);
                }
                if (iVar13 != (int)param_4) {
                  snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f10));
                  snd_SynthUnlock();
                  return;
                }
                *(float *)(iVar14 + 0x48) = (float)dVar18;
                FUN_006299b8(*(undefined4 *)(iVar14 + 0x60),uVar11 & 0xffffffff,0x403);
                FUN_006203e4(iVar10);
                snd_SynthUnlock();
                return;
              }
              if (*(int *)(iVar17 + *piVar5 + 0x28) != param_1) goto joined_r0x00620840;
            }
            dVar18 = (double)FUN_006203e4(uVar9);
            iVar10 = iVar17 + *piVar5;
            if (*(undefined4 **)(iVar10 + 0x2c) != (undefined4 *)0x0) {
              dVar18 = (double)(*(code *)**(undefined4 **)(iVar10 + 0x2c))
                                         (iVar10,*(undefined4 *)(iVar10 + 0x28),5);
            }
          }
joined_r0x00620840:
          if ((int)uVar16 <= (int)(uVar9 + 1)) break;
          uVar9 = uVar9 + 1;
          iVar17 = iVar17 + 0x68;
          if (*piVar2 <= (int)uVar9) break;
          uVar12 = *puVar15;
        } while( true );
      }
      iVar14 = iVar14 + 1;
      puVar15 = puVar15 + 1;
      uVar12 = *piVar2 + 0x1f;
      iVar13 = iVar13 + 0xd00;
      uVar9 = uVar16;
    } while (iVar14 < (int)(((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0)));
  }
  snd_SynthUnlock();
  return;
}


// 0x06209e4 (0x170 bytes)
// strings: 0066c4a0: 'common/valloc.cpp' | 0066c570: '%s(%d) : Invlaid voice owner.\n' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_006209e4(double param_1,int param_2,ulonglong param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b024;
  if (((param_2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_2)) || (param_1 < 0.0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    snd_SynthLock();
    iVar3 = param_2 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  else {
    snd_SynthLock(param_2,param_3,0x3fb);
    iVar3 = param_2 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  if (iVar1 != param_5) {
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f10));
    snd_SynthUnlock();
    return;
  }
  *(float *)(iVar3 + 0x48) = (float)param_1;
  FUN_006299b8(*(undefined4 *)(iVar3 + 0x60),param_3 & 0xffffffff,0x403);
  FUN_006203e4(param_2);
  snd_SynthUnlock();
  return;
}


// 0x0620b54 (0x314 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c660: '%s(%d) : Invalid data type.\n' | 0066c638: '%s(%d) : Invalid playing group count.\n'

void FUN_00620b54(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  
  puVar8 = PTR_PTR_0071b024;
  if ((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar8 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
    piVar2 = *(int **)(puVar8 + -0x7edc);
    piVar3 = (int *)*piVar2;
    piVar9 = (int *)(param_1 * 0x68 + **(int **)(puVar8 + -0x8000));
    if (piVar9 != piVar3) goto LAB_00620bbc;
LAB_00620cb8:
    *piVar2 = *piVar9;
    bVar1 = *(byte *)((int)piVar9 + 10);
  }
  else {
    piVar2 = *(int **)(PTR_PTR_0071b024 + -0x7edc);
    piVar3 = (int *)*piVar2;
    piVar9 = (int *)(param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000));
    if (piVar9 == piVar3) goto LAB_00620cb8;
LAB_00620bbc:
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)*piVar3;
      while (piVar7 = piVar2, piVar9 != piVar7) {
        if (piVar7 == (int *)0x0) {
          bVar1 = *(byte *)((int)piVar9 + 10);
          goto joined_r0x00620e58;
        }
        piVar3 = piVar7;
        piVar2 = (int *)*piVar7;
      }
      *piVar3 = *piVar9;
    }
    bVar1 = *(byte *)((int)piVar9 + 10);
  }
joined_r0x00620e58:
  if (0x1f < bVar1) goto LAB_00620c08;
  if (**(int **)(puVar8 + -0x7ff8) == 0) {
    iVar10 = *(int *)(puVar8 + -0x7fec);
LAB_00620db8:
    iVar6 = *(char *)((int)piVar9 + 10) * 4;
    iVar5 = *(int *)(iVar10 + iVar6);
    if (iVar5 == 0) goto LAB_00620c08;
    iVar4 = piVar9[4];
  }
  else {
    iVar10 = *(int *)(puVar8 + -0x7fec);
    iVar6 = (char)bVar1 * 4;
    iVar5 = *(int *)(iVar10 + iVar6);
    if (iVar5 == 0) {
      if (piVar9[4] != 1) goto LAB_00620c08;
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ed0));
      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
      if (**(char **)(puVar8 + -0x7fa4) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
      goto LAB_00620db8;
    }
    iVar4 = piVar9[4];
  }
  if (iVar4 == 1) {
    *(int *)(iVar10 + iVar6) = iVar5 + -1;
  }
LAB_00620c08:
  if (4 < *(byte *)((int)piVar9 + 0xb)) {
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ecc));
    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
    if (**(char **)(puVar8 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
  }
  iVar10 = *(char *)((int)piVar9 + 0xb) * 4;
  *(int *)(*(int *)(puVar8 + -0x7fe0) + iVar10) = *(int *)(*(int *)(puVar8 + -0x7fe0) + iVar10) + 1;
  if (param_2 == 0) {
    FUN_0062a824(piVar9[0x18]);
    FUN_0061dc38(param_1);
    return;
  }
  FUN_0061dc38(param_1);
  return;
}


// 0x0620e68 (0x2c4 bytes)
// strings: 0066c680: '%s(%d) : Invalid keyed states.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b024 : 0x00621138 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00620e68(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  
  puVar7 = PTR_PTR_0071b024;
  piVar2 = *(int **)(PTR_PTR_0071b024 + -0x7ff0);
  if (0 < *piVar2) {
    iVar19 = 0;
    puVar21 = *(uint **)(PTR_PTR_0071b024 + -0x7f58);
    iVar23 = 0;
    puVar20 = *(uint **)(PTR_PTR_0071b024 + -0x7f5c);
    iVar12 = 0;
    piVar3 = *(int **)(PTR_PTR_0071b024 + -0x8000);
    uVar13 = 0;
    do {
      if ((*puVar21 & *puVar20) != 0) {
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7ec8));
        iVar26 = *(int *)(puVar7 + -0x7fac);
        snd_Printf((char)iVar26);
        puVar8 = PTR_PTR_0071b024;
        if (**(char **)(puVar7 + -0x7fa4) != '\0') {
          return;
        }
        bVar1 = **(byte **)(puVar7 + -0x7fa0);
        if (bVar1 != 0) {
          trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
          snd_SynthLock();
          piVar2 = *(int **)(puVar8 + -0x7ff0);
          if (0 < *piVar2) {
            puVar21 = *(uint **)(puVar8 + -0x7f68);
            iVar19 = 0;
            puVar20 = *(uint **)(puVar8 + -0x7f64);
            iVar23 = 0;
            iVar12 = 0;
            uVar13 = 0;
            do {
              uVar16 = uVar13 + 0x20;
              if ((*(int *)(iVar26 + iVar23 + 0x14) != 0) && ((int)uVar13 < *piVar2)) {
                iVar18 = *(int *)(puVar8 + -0x7f5c);
                iVar14 = *(int *)(puVar8 + -0x7f58);
                piVar3 = *(int **)(puVar8 + -0x8000);
                iVar10 = iVar12;
                do {
                  uVar15 = (longlong)((int)uVar13 >> 5) +
                           (ulonglong)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
                  uVar17 = 1 << (uVar13 - (int)((uVar15 & 0xffffffff) << 5) & 0x3f);
                  if ((uVar17 & *(uint *)(iVar26 + iVar23 + 0x14)) != 0) {
                    iVar6 = iVar10 + *piVar3;
                    if (((*(int *)(iVar6 + 0x10) == 0) || (*(int *)(iVar6 + 0x28) != iVar26)) ||
                       (*(int *)(iVar6 + 0x2c) == 0)) {
                      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f14));
                      uVar11 = (ulonglong)*(uint *)(puVar8 + -0x7fac);
                      snd_Printf((char)*(uint *)(puVar8 + -0x7fac));
                      puVar7 = PTR_PTR_0071b024;
                      if (**(char **)(puVar8 + -0x7fa4) != '\0') {
                        return;
                      }
                      bVar1 = **(byte **)(puVar8 + -0x7fa0);
                      if (bVar1 != 0) {
                        trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
                        iVar12 = (int)uVar11;
                        if (iVar12 == 0) goto LAB_00621790;
                        goto LAB_006214c4;
                      }
                      if (*(int *)(iVar10 + *piVar3 + 0x28) != iVar26) goto joined_r0x0062122c;
                    }
                    if ((uVar17 & *puVar20) == 0) {
                      if (((uVar17 & *(uint *)(iVar23 + iVar18)) != 0) ||
                         ((uVar17 & *(uint *)(iVar23 + iVar14)) != 0)) {
                        *puVar21 = uVar17 | *puVar21;
                      }
                    }
                    else {
                      iVar9 = iVar10 + *piVar3;
                      iVar6 = iVar26 + (int)((uVar15 & 0xffffffff) << 2) + 0x10;
                      puVar4 = *(undefined4 **)(iVar9 + 0x2c);
                      *puVar20 = *puVar20 & ~uVar17;
                      *(uint *)(iVar6 + 4) = ~uVar17 & *(uint *)(iVar6 + 4);
                      if (puVar4 != (undefined4 *)0x0) {
                        (*(code *)*puVar4)(iVar9,*(undefined4 *)(iVar9 + 0x28),2);
                      }
                      FUN_00620b54(uVar13,0);
                    }
                  }
joined_r0x0062122c:
                  if ((int)uVar16 <= (int)(uVar13 + 1)) break;
                  uVar13 = uVar13 + 1;
                  iVar10 = iVar10 + 0x68;
                } while ((int)uVar13 < *piVar2);
              }
              iVar19 = iVar19 + 1;
              iVar23 = iVar23 + 4;
              uVar17 = *piVar2 + 0x1f;
              iVar12 = iVar12 + 0xd00;
              puVar21 = puVar21 + 1;
              puVar20 = puVar20 + 1;
              uVar13 = uVar16;
            } while (iVar19 < (int)(((int)uVar17 >> 5) +
                                   (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0)));
          }
          snd_SynthUnlock();
          return;
        }
      }
      uVar16 = *puVar20;
      uVar17 = *puVar21;
      uVar25 = uVar13 + 0x20;
      if ((((uVar17 | uVar16) & *(uint *)(iVar23 + param_1)) != 0) &&
         (iVar26 = iVar12, (int)uVar13 < *piVar2)) {
        do {
          uVar15 = (longlong)((int)uVar13 >> 5) +
                   (ulonglong)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
          uVar5 = 1 << (uVar13 - (int)((uVar15 & 0xffffffff) << 5) & 0x3f);
          if (((uVar5 & *(uint *)(iVar23 + param_1) & (uVar17 | uVar16)) != 0) &&
             (iVar18 = iVar26 + *piVar3, *(int *)(iVar18 + 0x10) != 0)) {
            if ((*(int *)(iVar18 + 0x28) != 0) && ((*(uint *)(iVar18 + 0x18) & 3) != 3)) {
              iVar18 = *(int *)(iVar18 + 0x28) + (int)((uVar15 & 0xffffffff) << 2) + 0x10;
              *(uint *)(iVar18 + 4) = *(uint *)(iVar18 + 4) & ~uVar5;
            }
            iVar18 = *piVar3;
            iVar14 = iVar26 + iVar18;
            if (*(undefined4 **)(iVar14 + 0x2c) != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)(iVar14 + 0x2c))(iVar14,*(undefined4 *)(iVar14 + 0x28),2);
              iVar18 = *piVar3;
            }
            if ((*(uint *)(iVar26 + iVar18 + 0x18) & 3) != 3) {
              FUN_00620b54(uVar13,0);
            }
          }
          uVar13 = uVar13 + 1;
        } while (((int)uVar13 < (int)uVar25) && (iVar26 = iVar26 + 0x68, (int)uVar13 < *piVar2));
      }
      iVar19 = iVar19 + 1;
      puVar21 = puVar21 + 1;
      uVar16 = *piVar2 + 0x1f;
      iVar23 = iVar23 + 4;
      puVar20 = puVar20 + 1;
      iVar12 = iVar12 + 0xd00;
      uVar13 = uVar25;
    } while (iVar19 < (int)(((int)uVar16 >> 5) + (uint)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0)));
  }
  return;
LAB_006214c4:
  snd_SynthLock();
  piVar2 = *(int **)(puVar7 + -0x7ff0);
  if (*piVar2 < 1) {
LAB_006216c4:
    snd_SynthUnlock();
    return;
  }
  lVar24 = uVar11 + 0x14;
  puVar21 = *(uint **)(puVar7 + -0x7f5c);
  iVar23 = 0;
  puVar20 = *(uint **)(puVar7 + -0x7f60);
  puVar22 = *(uint **)(puVar7 + -0x7f64);
  iVar19 = 0;
  uVar13 = 0;
  while( true ) {
    uVar16 = *(uint *)lVar24;
    uVar17 = uVar13 + 0x20;
    if ((uVar16 != 0) && ((int)uVar13 < *piVar2)) break;
LAB_00621690:
    iVar23 = iVar23 + 1;
    lVar24 = lVar24 + 4;
    uVar16 = *piVar2 + 0x1f;
    iVar19 = iVar19 + 0xd00;
    puVar21 = puVar21 + 1;
    puVar20 = puVar20 + 1;
    puVar22 = puVar22 + 1;
    uVar13 = uVar17;
    if ((int)(((int)uVar16 >> 5) + (uint)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0)) <= iVar23)
    goto LAB_006216c4;
  }
  piVar3 = *(int **)(puVar7 + -0x8000);
  iVar26 = iVar19;
LAB_00621554:
  iVar18 = ((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
  uVar25 = 1 << (uVar13 + iVar18 * -0x20 & 0x3f);
  if ((uVar25 & uVar16) == 0) goto joined_r0x0062153c;
  iVar14 = iVar26 + *piVar3;
  if (((*(int *)(iVar14 + 0x10) != 0) && (*(int *)(iVar14 + 0x28) == iVar12)) &&
     (*(int *)(iVar14 + 0x2c) != 0)) {
LAB_00621600:
    if ((uVar25 & *puVar22) == 0) {
      if ((uVar25 & *puVar21) != 0) {
        puVar4 = *(undefined4 **)(iVar14 + 0x2c);
        *puVar20 = uVar25 | *puVar20;
        if (puVar4 != (undefined4 *)0x0) {
          (*(code *)*puVar4)(iVar14,*(undefined4 *)(iVar14 + 0x28),3);
        }
      }
    }
    else {
      iVar10 = iVar26 + *piVar3;
      iVar18 = *(int *)(iVar14 + 0x28) + iVar18 * 4 + 0x10;
      puVar4 = *(undefined4 **)(iVar10 + 0x2c);
      *puVar22 = *puVar22 & ~uVar25;
      *(uint *)(iVar18 + 4) = ~uVar25 & *(uint *)(iVar18 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)*puVar4)(iVar10,*(undefined4 *)(iVar10 + 0x28),2);
      }
      FUN_00620b54(uVar13,0);
    }
joined_r0x0062153c:
    if ((int)uVar17 <= (int)(uVar13 + 1)) goto LAB_00621690;
    uVar13 = uVar13 + 1;
    iVar26 = iVar26 + 0x68;
    if (*piVar2 <= (int)uVar13) goto LAB_00621690;
    uVar16 = *(uint *)lVar24;
    goto LAB_00621554;
  }
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f14));
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  bVar1 = **(byte **)(puVar7 + -0x7fa0);
  if (bVar1 == 0) {
    iVar14 = iVar26 + *piVar3;
    if (*(int *)(iVar14 + 0x28) != iVar12) goto joined_r0x0062153c;
    goto LAB_00621600;
  }
  trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_00621790:
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7fa0),0);
  goto LAB_006214c4;
}


// 0x062112c (0x334 bytes)
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b024 : 0x006214b8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0062112c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  
  puVar6 = PTR_PTR_0071b024;
  snd_SynthLock();
  piVar2 = *(int **)(puVar6 + -0x7ff0);
  if (0 < *piVar2) {
    puVar18 = *(uint **)(puVar6 + -0x7f68);
    iVar16 = 0;
    puVar17 = *(uint **)(puVar6 + -0x7f64);
    iVar20 = 0;
    iVar11 = 0;
    uVar12 = 0;
    do {
      uVar15 = uVar12 + 0x20;
      if ((*(int *)(param_1 + iVar20 + 0x14) != 0) && ((int)uVar12 < *piVar2)) {
        iVar24 = *(int *)(puVar6 + -0x7f5c);
        iVar23 = *(int *)(puVar6 + -0x7f58);
        piVar3 = *(int **)(puVar6 + -0x8000);
        iVar13 = iVar11;
        do {
          uVar22 = (longlong)((int)uVar12 >> 5) +
                   (ulonglong)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0);
          uVar14 = 1 << (uVar12 - (int)((uVar22 & 0xffffffff) << 5) & 0x3f);
          if ((uVar14 & *(uint *)(param_1 + iVar20 + 0x14)) != 0) {
            iVar9 = iVar13 + *piVar3;
            if (((*(int *)(iVar9 + 0x10) == 0) || (*(int *)(iVar9 + 0x28) != param_1)) ||
               (*(int *)(iVar9 + 0x2c) == 0)) {
              snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f14));
              uVar10 = (ulonglong)*(uint *)(puVar6 + -0x7fac);
              snd_Printf((char)*(uint *)(puVar6 + -0x7fac));
              puVar7 = PTR_PTR_0071b024;
              if (**(char **)(puVar6 + -0x7fa4) != '\0') {
                return;
              }
              bVar1 = **(byte **)(puVar6 + -0x7fa0);
              if (bVar1 != 0) {
                trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
                iVar11 = (int)uVar10;
                if (iVar11 == 0) goto LAB_00621790;
                goto LAB_006214c4;
              }
              if (*(int *)(iVar13 + *piVar3 + 0x28) != param_1) goto joined_r0x0062122c;
            }
            if ((uVar14 & *puVar17) == 0) {
              if (((uVar14 & *(uint *)(iVar20 + iVar24)) != 0) ||
                 ((uVar14 & *(uint *)(iVar20 + iVar23)) != 0)) {
                *puVar18 = uVar14 | *puVar18;
              }
            }
            else {
              iVar8 = iVar13 + *piVar3;
              iVar9 = param_1 + (int)((uVar22 & 0xffffffff) << 2) + 0x10;
              puVar4 = *(undefined4 **)(iVar8 + 0x2c);
              *puVar17 = *puVar17 & ~uVar14;
              *(uint *)(iVar9 + 4) = ~uVar14 & *(uint *)(iVar9 + 4);
              if (puVar4 != (undefined4 *)0x0) {
                (*(code *)*puVar4)(iVar8,*(undefined4 *)(iVar8 + 0x28),2);
              }
              FUN_00620b54(uVar12,0);
            }
          }
joined_r0x0062122c:
          if ((int)uVar15 <= (int)(uVar12 + 1)) break;
          uVar12 = uVar12 + 1;
          iVar13 = iVar13 + 0x68;
        } while ((int)uVar12 < *piVar2);
      }
      iVar16 = iVar16 + 1;
      iVar20 = iVar20 + 4;
      uVar14 = *piVar2 + 0x1f;
      iVar11 = iVar11 + 0xd00;
      puVar18 = puVar18 + 1;
      puVar17 = puVar17 + 1;
      uVar12 = uVar15;
    } while (iVar16 < (int)(((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)));
  }
  snd_SynthUnlock();
  return;
LAB_006214c4:
  snd_SynthLock();
  piVar2 = *(int **)(puVar7 + -0x7ff0);
  if (*piVar2 < 1) {
LAB_006216c4:
    snd_SynthUnlock();
    return;
  }
  lVar21 = uVar10 + 0x14;
  puVar18 = *(uint **)(puVar7 + -0x7f5c);
  iVar20 = 0;
  puVar17 = *(uint **)(puVar7 + -0x7f60);
  puVar19 = *(uint **)(puVar7 + -0x7f64);
  iVar16 = 0;
  uVar12 = 0;
  while( true ) {
    uVar15 = *(uint *)lVar21;
    uVar14 = uVar12 + 0x20;
    if ((uVar15 != 0) && ((int)uVar12 < *piVar2)) break;
LAB_00621690:
    iVar20 = iVar20 + 1;
    lVar21 = lVar21 + 4;
    uVar15 = *piVar2 + 0x1f;
    iVar16 = iVar16 + 0xd00;
    puVar18 = puVar18 + 1;
    puVar17 = puVar17 + 1;
    puVar19 = puVar19 + 1;
    uVar12 = uVar14;
    if ((int)(((int)uVar15 >> 5) + (uint)((int)uVar15 < 0 && (uVar15 & 0x1f) != 0)) <= iVar20)
    goto LAB_006216c4;
  }
  piVar3 = *(int **)(puVar7 + -0x8000);
  iVar24 = iVar16;
LAB_00621554:
  iVar23 = ((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0);
  uVar5 = 1 << (uVar12 + iVar23 * -0x20 & 0x3f);
  if ((uVar5 & uVar15) == 0) goto joined_r0x0062153c;
  iVar13 = iVar24 + *piVar3;
  if (((*(int *)(iVar13 + 0x10) != 0) && (*(int *)(iVar13 + 0x28) == iVar11)) &&
     (*(int *)(iVar13 + 0x2c) != 0)) {
LAB_00621600:
    if ((uVar5 & *puVar19) == 0) {
      if ((uVar5 & *puVar18) != 0) {
        puVar4 = *(undefined4 **)(iVar13 + 0x2c);
        *puVar17 = uVar5 | *puVar17;
        if (puVar4 != (undefined4 *)0x0) {
          (*(code *)*puVar4)(iVar13,*(undefined4 *)(iVar13 + 0x28),3);
        }
      }
    }
    else {
      iVar9 = iVar24 + *piVar3;
      iVar23 = *(int *)(iVar13 + 0x28) + iVar23 * 4 + 0x10;
      puVar4 = *(undefined4 **)(iVar9 + 0x2c);
      *puVar19 = *puVar19 & ~uVar5;
      *(uint *)(iVar23 + 4) = ~uVar5 & *(uint *)(iVar23 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)*puVar4)(iVar9,*(undefined4 *)(iVar9 + 0x28),2);
      }
      FUN_00620b54(uVar12,0);
    }
joined_r0x0062153c:
    if ((int)uVar14 <= (int)(uVar12 + 1)) goto LAB_00621690;
    uVar12 = uVar12 + 1;
    iVar24 = iVar24 + 0x68;
    if (*piVar2 <= (int)uVar12) goto LAB_00621690;
    uVar15 = *(uint *)lVar21;
    goto LAB_00621554;
  }
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f14));
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  bVar1 = **(byte **)(puVar7 + -0x7fa0);
  if (bVar1 == 0) {
    iVar13 = iVar24 + *piVar3;
    if (*(int *)(iVar13 + 0x28) != iVar11) goto joined_r0x0062153c;
    goto LAB_00621600;
  }
  trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_00621790:
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7fa0),0);
  goto LAB_006214c4;
}


// 0x0621460 (0x364 bytes)
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_00621460(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  puVar6 = PTR_PTR_0071b024;
  if (param_1 == 0) goto LAB_00621790;
  do {
    snd_SynthLock();
    piVar2 = *(int **)(puVar6 + -0x7ff0);
    if (*piVar2 < 1) {
LAB_006216c4:
      snd_SynthUnlock();
      return;
    }
    puVar16 = (uint *)(param_1 + 0x14);
    puVar12 = *(uint **)(puVar6 + -0x7f5c);
    iVar15 = 0;
    puVar13 = *(uint **)(puVar6 + -0x7f60);
    puVar14 = *(uint **)(puVar6 + -0x7f64);
    iVar11 = 0;
    uVar8 = 0;
    while( true ) {
      uVar10 = *puVar16;
      uVar17 = uVar8 + 0x20;
      if ((uVar10 != 0) && ((int)uVar8 < *piVar2)) break;
LAB_00621690:
      iVar15 = iVar15 + 1;
      puVar16 = puVar16 + 1;
      uVar10 = *piVar2 + 0x1f;
      iVar11 = iVar11 + 0xd00;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      uVar8 = uVar17;
      if ((int)(((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)) <= iVar15)
      goto LAB_006216c4;
    }
    piVar3 = *(int **)(puVar6 + -0x8000);
    iVar19 = iVar11;
LAB_00621554:
    iVar18 = ((int)uVar8 >> 5) + (uint)((int)uVar8 < 0 && (uVar8 & 0x1f) != 0);
    uVar5 = 1 << (uVar8 + iVar18 * -0x20 & 0x3f);
    if ((uVar5 & uVar10) == 0) goto joined_r0x0062153c;
    iVar9 = iVar19 + *piVar3;
    if (((*(int *)(iVar9 + 0x10) != 0) && (*(int *)(iVar9 + 0x28) == param_1)) &&
       (*(int *)(iVar9 + 0x2c) != 0)) {
LAB_00621600:
      if ((uVar5 & *puVar14) == 0) {
        if ((uVar5 & *puVar12) != 0) {
          puVar4 = *(undefined4 **)(iVar9 + 0x2c);
          *puVar13 = uVar5 | *puVar13;
          if (puVar4 != (undefined4 *)0x0) {
            (*(code *)*puVar4)(iVar9,*(undefined4 *)(iVar9 + 0x28),3);
          }
        }
      }
      else {
        iVar7 = iVar19 + *piVar3;
        iVar18 = *(int *)(iVar9 + 0x28) + iVar18 * 4 + 0x10;
        puVar4 = *(undefined4 **)(iVar7 + 0x2c);
        *puVar14 = *puVar14 & ~uVar5;
        *(uint *)(iVar18 + 4) = ~uVar5 & *(uint *)(iVar18 + 4);
        if (puVar4 != (undefined4 *)0x0) {
          (*(code *)*puVar4)(iVar7,*(undefined4 *)(iVar7 + 0x28),2);
        }
        FUN_00620b54(uVar8,0);
      }
joined_r0x0062153c:
      if ((int)uVar17 <= (int)(uVar8 + 1)) goto LAB_00621690;
      uVar8 = uVar8 + 1;
      iVar19 = iVar19 + 0x68;
      if (*piVar2 <= (int)uVar8) goto LAB_00621690;
      uVar10 = *puVar16;
      goto LAB_00621554;
    }
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f14));
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
    if (**(char **)(puVar6 + -0x7fa4) != '\0') {
      return;
    }
    bVar1 = **(byte **)(puVar6 + -0x7fa0);
    if (bVar1 == 0) {
      iVar9 = iVar19 + *piVar3;
      if (*(int *)(iVar9 + 0x28) != param_1) goto joined_r0x0062153c;
      goto LAB_00621600;
    }
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_00621790:
    snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
    if (**(char **)(puVar6 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fa0),0);
  } while( true );
}


// 0x06217c4 (0x11c bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_006217c4(ulonglong param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071b024;
  iVar2 = (int)param_1;
  if ((iVar2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= iVar2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar1 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fa0),0);
  }
  iVar3 = iVar2 * 0x68 + **(int **)(puVar1 + -0x8000);
  if (*(int *)(iVar3 + 0x10) != 0) {
    iVar3 = *(int *)(iVar3 + 0x28);
    if (iVar3 == param_2) {
      if (iVar3 != 0) {
        iVar3 = iVar3 + (int)(((longlong)(iVar2 >> 5) +
                               (ulonglong)(iVar2 < 0 && (param_1 & 0x1f) != 0) & 0xffffffff) << 2) +
                        0x10;
        *(uint *)(iVar3 + 4) =
             *(uint *)(iVar3 + 4) &
             ((uint)(-0x100000002 << (param_1 & 0x1f)) |
             (uint)(0xfffffffefffffffe >> 0x40 - (param_1 & 0x1f)));
      }
      FUN_00620b54(iVar2,0);
      return;
    }
  }
  return;
}


// 0x06218e0 (0x764 bytes)
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c6a0: '%s(%d) : Stealing unowned voice channel.\n' | 0066c6d0: '%s(%d) : Mismanaged voice type count.\n'

uint FUN_006218e0(double param_1,double param_2,uint param_3,char param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar7;
  char cVar10;
  ulonglong uVar6;
  undefined4 uVar8;
  char cVar11;
  int iVar9;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  short sVar23;
  int iVar21;
  int iVar22;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar24;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  uint in_stack_00000084;
  int in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  undefined1 in_stack_000000a7;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  int in_stack_000000c4;
  undefined4 in_stack_000000cc;
  int local_ac;
  
  puVar4 = PTR_PTR_0071b024;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((0x1e < param_3) || (param_4 < '\0')) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar4 + -0x7fa4) != '\0') {
      return 0xffffffff;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
  }
  if ((int)param_3 < 0x20) {
    local_ac = param_3 * 4;
    bVar24 = (in_stack_000000c4 == 0) << 1;
    snd_SynthLock();
    sVar20 = *(short *)(*(int *)(puVar4 + -0x7f18) + local_ac);
    sVar23 = *(short *)(local_ac + *(int *)(puVar4 + -0x7f18) + 2);
    iVar7 = FUN_00604918();
    if ((bool)(bVar24 >> 1 & 1)) goto LAB_00621e9c;
LAB_006219c8:
    uVar15 = (undefined1)param_3;
    cVar10 = FUN_0061d6d8(param_2,param_1,in_stack_000000c4,param_4);
  }
  else {
    param_3 = 0x1f;
    bVar24 = (in_stack_000000c4 == 0) << 1;
    local_ac = 0x7c;
    snd_SynthLock();
    sVar20 = *(short *)(*(int *)(puVar4 + -0x7f18) + 0x7c);
    sVar23 = *(short *)(*(int *)(puVar4 + -0x7f18) + 0x7e);
    iVar7 = FUN_00604918();
    if (!(bool)(bVar24 >> 1 & 1)) goto LAB_006219c8;
LAB_00621e9c:
    uVar15 = (undefined1)param_3;
    cVar10 = param_4;
  }
  uVar6 = snd_SynthGetVoiceType(in_stack_000000b4);
  if ((int)uVar6 == -1) goto LAB_00621bec;
  iVar13 = (int)((uVar6 & 0xffffffff) << 2);
  iVar9 = 0;
  if (*(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) != 0) {
    iVar9 = FUN_00624738(uVar6 & 0xffffffff);
  }
  uVar19 = (uint)sVar20;
  iVar18 = sVar23 + 1;
  if (sVar20 < iVar18) {
    piVar2 = *(int **)(puVar4 + -0x8000);
    puVar3 = *(uint **)(puVar4 + -0x7ec4);
    iVar21 = 0;
    iVar22 = uVar19 * 0x68;
    uVar17 = 0xffffffff;
    uVar16 = uVar19;
    do {
      while( true ) {
        iVar12 = *piVar2;
        iVar5 = iVar22 + iVar12;
        if (*(int *)(iVar5 + 0x10) != 0) break;
        if (iVar9 != 0) goto LAB_00621c14;
LAB_00621a54:
        iVar21 = iVar21 + 1;
        iVar22 = iVar22 + 0x68;
        uVar16 = uVar19 + iVar21;
        if (iVar18 <= (int)uVar16) goto LAB_00621b10;
      }
      if ((((*(int *)(iVar5 + 0x10) == 1) && ((uint)(iVar7 - *(int *)(iVar5 + 0x14)) < *puVar3)) ||
          ((bool)(bVar24 >> 1 & 1))) ||
         ((*(int *)(iVar5 + 0x28) == in_stack_000000c4 || ((*(uint *)(iVar5 + 0x18) & 1) != 0))))
      goto LAB_00621a54;
      if (iVar9 == 0) {
        if (((int)*(char *)(iVar5 + 0xb) != (int)uVar6) ||
           (cVar11 = FUN_00624730(*(undefined4 *)(iVar5 + 0x60)), cVar11 == '\0'))
        goto LAB_00621a54;
        iVar12 = **(int **)(puVar4 + -0x8000);
      }
      if ((int)uVar17 < 0) {
        if (*(char *)(iVar22 + iVar12 + 9) <= cVar10) goto LAB_00621afc;
        goto LAB_00621a54;
      }
      iVar5 = iVar12 + uVar17 * 0x68;
      cVar11 = *(char *)(iVar12 + iVar22 + 9);
      cVar1 = *(char *)(iVar5 + 9);
      if ((cVar1 <= cVar11) &&
         ((cVar11 != cVar1 || (*(uint *)(iVar5 + 0x14) <= *(uint *)(iVar12 + iVar22 + 0x14)))))
      goto LAB_00621a54;
LAB_00621afc:
      iVar21 = iVar21 + 1;
      iVar22 = iVar22 + 0x68;
      uVar17 = uVar16;
      uVar16 = uVar19 + iVar21;
    } while ((int)(uVar19 + iVar21) < iVar18);
LAB_00621b10:
    if (-1 < (int)uVar17) {
      iVar22 = uVar17 * 0x68;
      iVar7 = *(int *)(iVar22 + *piVar2 + 0x28);
      if ((iVar7 == 0) || (*(int *)(iVar22 + *piVar2 + 0x2c) == 0)) {
        snd_Printf((char)*(undefined4 *)(puVar4 + -0x7ec0));
        snd_Printf((char)*(undefined4 *)(puVar4 + -0x7fac));
        if (**(char **)(puVar4 + -0x7fa4) != '\0') {
          return 0xffffffff;
        }
        trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
        iVar7 = *(int *)(iVar22 + *piVar2 + 0x28);
        if (iVar7 != 0) goto LAB_00621b40;
      }
      else {
LAB_00621b40:
        iVar7 = iVar7 + (((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0)) * 4 +
                        0x10;
        *(uint *)(iVar7 + 4) =
             *(uint *)(iVar7 + 4) &
             ((uint)(-0x100000002 << (uVar17 & 0x1f)) |
             (uint)(0xfffffffefffffffe >> 0x40 - (uVar17 & 0x1f)));
      }
      iVar7 = iVar22 + *piVar2;
      if (*(undefined4 **)(iVar7 + 0x2c) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(iVar7 + 0x2c))(iVar7,*(undefined4 *)(iVar7 + 0x28),1);
      }
      if (iVar9 == 0) {
        iVar9 = *(int *)(iVar22 + *piVar2 + 0x60);
        FUN_00620b54(uVar17,1);
      }
      else {
        FUN_00620b54(uVar17,0);
      }
      uVar16 = uVar17;
      if ((int)uVar17 < iVar18) {
LAB_00621c14:
        if (*(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) == 0) {
          snd_Printf((char)*(undefined4 *)(puVar4 + -0x7ebc));
          snd_Printf((char)*(undefined4 *)(puVar4 + -0x7fac));
          if (**(char **)(puVar4 + -0x7fa4) != '\0') {
            return 0xffffffff;
          }
          trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
        }
        iVar7 = *piVar2;
        iVar22 = uVar16 * 0x68;
        *(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) =
             *(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) + -1;
        *(undefined4 *)(iVar22 + iVar7 + 0x10) = 2;
        uVar8 = FUN_00604918();
        iVar13 = *piVar2;
        iVar18 = *(int *)(puVar4 + -0x7f8c);
        *(undefined4 *)(iVar22 + iVar7 + 0x14) = uVar8;
        *(char *)(iVar22 + iVar13 + 8) = param_4;
        *(char *)(iVar22 + *piVar2 + 9) = cVar10;
        iVar7 = *piVar2;
        *(undefined1 *)(iVar22 + iVar7 + 10) = uVar15;
        iVar13 = *piVar2;
        *(float *)(iVar22 + iVar7 + 0xc) = (float)param_1;
        iVar13 = iVar22 + iVar13;
        *(char *)(iVar13 + 0xb) = (char)uVar6;
        iVar22 = iVar22 + *piVar2;
        uVar14 = ((ulonglong)*(uint *)(iVar18 + local_ac) & 1) << 5 | (ulonglong)in_stack_00000084;
        *(int *)(iVar13 + 0x28) = in_stack_000000c4;
        *(undefined4 *)(iVar13 + 0x2c) = in_stack_000000cc;
        *(int *)(iVar22 + 0x18) = (int)uVar14;
        uVar14 = ((ulonglong)(*(uint *)(iVar18 + local_ac) >> 2) & 1) << 6 | uVar14;
        *(int *)(iVar22 + 0x18) = (int)uVar14;
        if (in_stack_0000008c == -2) {
          in_stack_0000008c = *(int *)(*(int *)(puVar4 + -0x7f1c) + local_ac);
        }
        *(undefined4 *)(iVar22 + 0x38) = param_7;
        *(undefined4 *)(iVar22 + 0x40) = param_8;
        *(undefined4 *)(iVar22 + 0x20) = in_stack_00000074;
        uVar8 = *(undefined4 *)(puVar4 + -0x7fd0);
        *(undefined4 *)(iVar22 + 0x24) = in_stack_0000007c;
        *(float *)(iVar22 + 0x30) = (float)param_2;
        *(undefined4 *)(iVar22 + 0x58) = uVar8;
        *(int *)(iVar22 + 0x1c) = in_stack_0000008c;
        *(undefined4 *)(iVar22 + 0x50) = uVar8;
        *(undefined4 *)(iVar22 + 0x54) = uVar8;
        *(int *)(iVar22 + 0x60) = iVar9;
        if (*(int *)(iVar22 + 0x28) != 0) {
          iVar7 = ((int)uVar16 >> 5) + (uint)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0);
          iVar13 = *(int *)(iVar22 + 0x28) + iVar7 * 4 + 0x10;
          *(uint *)(iVar13 + 4) = *(uint *)(iVar13 + 4) | 1 << (uVar16 + iVar7 * -0x20 & 0x3f);
          uVar14 = (ulonglong)*(uint *)(iVar22 + 0x18);
        }
        snd_SynthSetVoiceData
                  (iVar9,in_stack_00000094,in_stack_000000ac,uVar6 & 0xffffffff,in_stack_000000bc,
                   in_stack_0000009c,in_stack_000000a7,uVar14);
        snd_SynthUnlock();
        return uVar16;
      }
    }
  }
  if (iVar9 != 0) {
    FUN_0062a824(iVar9);
  }
LAB_00621bec:
  snd_SynthUnlock();
  return 0xffffffff;
}


// 0x0622044 (0x50 bytes)
undefined4 FUN_00622044(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_0062730c();
    return uVar1;
  }
  snd_SynthLock();
  return 1;
}


// 0x0622094 (0x2e4 bytes)
// strings: 0066c6f8: 'snd_InitVoiceAllocator(): Unable to allocate %d bytes required for a polyphony of %d!\n'

undefined4 snd_InitVoiceAllocator(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  puVar7 = PTR_PTR_0071b024;
  iVar18 = 0;
  lVar20 = 5;
  iVar8 = *(int *)(PTR_PTR_0071b024 + -0x7fe4);
  iVar9 = *(int *)(PTR_PTR_0071b024 + -0x7fe0);
  do {
    iVar13 = param_1 + iVar18;
    puVar5 = (undefined4 *)(iVar18 + iVar8);
    puVar14 = (undefined4 *)(iVar18 + iVar9);
    iVar18 = iVar18 + 4;
    uVar2 = *(undefined4 *)(iVar13 + 0x34);
    *puVar5 = uVar2;
    *puVar14 = uVar2;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  uVar3 = *(uint *)(param_1 + 0x60);
  iVar8 = 0xd000;
  uVar15 = 0x200;
  if (uVar3 < 0x201) {
    iVar8 = uVar3 * 0x68;
    uVar15 = uVar3;
  }
  puVar4 = *(uint **)(puVar7 + -0x7ff0);
  puVar5 = (undefined4 *)**(undefined4 **)(puVar7 + -0x7eb8);
  *puVar4 = uVar15;
  iVar9 = (*(code *)*puVar5)(iVar8,0);
  piVar10 = *(int **)(puVar7 + -0x8000);
  *piVar10 = iVar9;
  if (iVar9 != 0) {
    iVar18 = 0;
    memset(iVar9,0,iVar8);
    uVar3 = *puVar4;
    iVar8 = 0;
    if (0 < (int)uVar3) {
      do {
        FUN_0061dc38(iVar18);
        uVar3 = *puVar4;
        iVar9 = iVar8 + *piVar10;
        iVar8 = iVar8 + 0x68;
        *(int *)(iVar9 + 4) = iVar18;
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uVar3);
    }
    piVar10 = *(int **)(puVar7 + -0x7f30);
    lVar20 = 0x20;
    iVar17 = 0;
    puVar12 = *(undefined2 **)(puVar7 + -0x7f18);
    iVar13 = 0;
    iVar8 = *(int *)(puVar7 + -0x7fec);
    iVar9 = *(int *)(puVar7 + -0x7fe8);
    iVar18 = *(int *)(puVar7 + -0x7fc4);
    **(undefined4 **)(puVar7 + -0x7edc) = 0;
    do {
      puVar14 = (undefined4 *)(iVar13 + iVar8);
      puVar5 = (undefined4 *)(iVar13 + iVar9);
      puVar16 = (undefined4 *)(iVar13 + iVar18);
      *piVar10 = iVar17;
      iVar13 = iVar13 + 4;
      piVar10[10] = 0;
      puVar12[1] = (short)uVar3 + -1;
      *puVar14 = 0;
      *puVar5 = 0;
      *puVar16 = 0;
      *puVar12 = 0;
      iVar17 = iVar17 + 1;
      lVar20 = lVar20 + -1;
      piVar10 = piVar10 + 0xb;
      puVar12 = puVar12 + 2;
    } while (lVar20 != 0);
    pfVar11 = (float *)FUN_00615218();
    if (pfVar11 != (float *)0x0) {
      pfVar19 = pfVar11 + 5;
      iVar8 = *(int *)(puVar7 + -0x7fb4);
      iVar18 = 0;
      iVar9 = *(int *)(puVar7 + -0x7f1c);
      dVar23 = (double)*(float *)(puVar7 + -0x7f24);
      dVar22 = (double)*(float *)(puVar7 + -0x7eb0);
      do {
        dVar21 = (double)FUN_005dcbd8(dVar23,(double)(float)((double)*pfVar19 / dVar22));
        pcVar6 = (char *)((int)pfVar19 + -3);
        piVar10 = (int *)(iVar18 + iVar9);
        bVar1 = iVar18 != 0x7c;
        *(float *)(iVar18 + iVar8) = (float)dVar21;
        pfVar19 = pfVar19 + 2;
        iVar18 = iVar18 + 4;
        *piVar10 = (int)*pcVar6;
      } while (bVar1);
      dVar22 = (double)FUN_005dcbd8(dVar23,(double)(float)((double)*pfVar11 / dVar22));
      **(float **)(puVar7 + -0x7fb0) = (float)dVar22;
    }
    **(undefined4 **)(puVar7 + -0x7ff8) = 1;
    return 1;
  }
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7eb4));
  return 0;
}


// 0x0622378 (0x28 bytes)
void FUN_00622378(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b028;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *(undefined4 *)(puVar1 + -0x8000);
  return;
}


// 0x06223a0 (0x28 bytes)
void FUN_006223a0(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b028;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *(undefined4 *)(puVar1 + -0x8000);
  return;
}


// 0x06223c8 (0x24 bytes)
char FUN_006223c8(undefined8 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = param_2 + -0x20;
  if (0x19 < (byte)(param_2 + 0x9fU)) {
    cVar1 = param_2;
  }
  return cVar1;
}


// 0x06223ec (0x2b8 bytes)
int FUN_006223ec(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 != 0) && (0 < iVar2)) {
      iVar10 = 0;
      do {
        uVar11 = (ulonglong)(uint)(iVar2 - iVar10);
        pcVar7 = (char *)(iVar1 + iVar10);
        if ((iVar2 < iVar10 + 1) || (iVar2 == -0x80000000)) {
          uVar11 = 1;
        }
        while (*pcVar7 != '[') {
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 - 1;
          pcVar7 = pcVar7 + 1;
          if (uVar11 == 0) {
            return -1;
          }
        }
        uVar11 = (ulonglong)(uint)(iVar2 - iVar10);
        pcVar7 = (char *)(iVar1 + iVar10 + 1);
        if ((iVar2 < iVar10 + 1) || (iVar2 == -0x80000000)) {
          uVar11 = 1;
        }
        while( true ) {
          iVar6 = iVar10 + 1;
          if ((' ' < *pcVar7) && (*pcVar7 != '\x7f')) break;
          uVar11 = uVar11 - 1;
          iVar10 = iVar6;
          pcVar7 = pcVar7 + 1;
          if (uVar11 == 0) {
            return -1;
          }
        }
        pcVar5 = (char *)(iVar1 + iVar6);
        uVar11 = (ulonglong)(uint)(iVar2 - iVar6);
        iVar9 = iVar6;
        pcVar7 = pcVar5;
        if ((iVar2 < iVar10 + 2) || (iVar10 = iVar6, iVar2 == -0x80000000)) {
          uVar11 = 1;
          iVar10 = iVar6;
        }
        while( true ) {
          if (*pcVar7 == ']') break;
          if (*pcVar7 != ' ') {
            iVar9 = iVar10;
          }
          uVar11 = uVar11 - 1;
          iVar10 = iVar10 + 1;
          pcVar7 = pcVar7 + 1;
          if (uVar11 == 0) {
            return -1;
          }
        }
        if ((iVar6 < iVar9) && (cVar3 = *param_2, cVar3 != '\0')) {
          iVar8 = 0;
          do {
            iVar6 = iVar6 + 1;
            cVar3 = FUN_006223c8(param_1,cVar3);
            cVar4 = FUN_006223c8(param_1,*pcVar5);
            if (cVar3 != cVar4) break;
            if (iVar9 < iVar6) {
              if (param_2[iVar8 + 1] == '\0') {
                pcVar7 = (char *)(iVar1 + iVar9);
                cVar3 = *pcVar7;
                while (cVar3 != '\n') {
                  pcVar7 = pcVar7 + 1;
                  iVar9 = iVar9 + 1;
                  cVar3 = *pcVar7;
                }
                return iVar9 + 1;
              }
              break;
            }
            iVar8 = iVar8 + 1;
            cVar3 = param_2[iVar8];
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
        }
      } while (iVar10 < iVar2);
    }
  }
  return -1;
}


// 0x06226a4 (0x324 bytes)
int FUN_006226a4(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 <= param_3) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 8);
  do {
    pcVar7 = (char *)(iVar2 + param_3);
    if (*pcVar7 == '[') {
      return -1;
    }
    uVar10 = (ulonglong)(uint)(iVar1 - param_3);
    iVar5 = param_3;
    if ((iVar1 < param_3 + 1) || (iVar1 == -0x80000000)) {
      uVar10 = 1;
    }
    while (0x5d < (byte)(*pcVar7 - 0x21U)) {
      uVar10 = uVar10 - 1;
      pcVar7 = pcVar7 + 1;
      iVar5 = iVar5 + 1;
      if (uVar10 == 0) {
        return -1;
      }
    }
    pcVar6 = (char *)(iVar2 + iVar5);
    uVar10 = (ulonglong)(uint)(iVar1 - iVar5);
    param_3 = iVar5;
    iVar8 = iVar5;
    pcVar7 = pcVar6;
    if ((iVar1 < iVar5 + 1) || (iVar1 == -0x80000000)) {
      uVar10 = 1;
    }
    while( true ) {
      if (*pcVar7 == '=') break;
      if (*pcVar7 != ' ') {
        iVar8 = param_3;
      }
      uVar10 = uVar10 - 1;
      param_3 = param_3 + 1;
      pcVar7 = pcVar7 + 1;
      if (uVar10 == 0) {
        return -1;
      }
    }
    if ((iVar5 < iVar8) && (cVar3 = *param_2, cVar3 != '\0')) {
      iVar9 = 0;
      do {
        iVar5 = iVar5 + 1;
        cVar3 = FUN_006223c8(param_1,cVar3);
        cVar4 = FUN_006223c8(param_1,*pcVar6);
        if (cVar3 != cVar4) break;
        if (iVar8 < iVar5) {
          if (param_2[iVar9 + 1] == '\0') {
            uVar10 = (ulonglong)(uint)(iVar1 - iVar8);
            pcVar7 = (char *)(iVar2 + iVar8);
            if ((iVar1 < iVar8 + 1) || (iVar1 == -0x80000000)) {
              uVar10 = 1;
            }
            do {
              if (*pcVar7 == '=') {
                uVar10 = (ulonglong)(uint)(iVar1 - param_3);
                pcVar7 = (char *)(iVar2 + param_3 + 1);
                if ((iVar1 < param_3 + 1) || (iVar1 == -0x80000000)) {
                  uVar10 = 1;
                }
                do {
                  param_3 = param_3 + 1;
                  if (*pcVar7 != ' ') {
                    return param_3;
                  }
                  uVar10 = uVar10 - 1;
                  pcVar7 = pcVar7 + 1;
                } while (uVar10 != 0);
                return -1;
              }
              uVar10 = uVar10 - 1;
              pcVar7 = pcVar7 + 1;
            } while (uVar10 != 0);
            return -1;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        cVar3 = param_2[iVar9];
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
    }
    uVar10 = (ulonglong)(uint)(iVar1 - param_3);
    pcVar7 = (char *)(iVar2 + param_3 + 1);
    if ((iVar1 < param_3 + 1) || (iVar1 == -0x80000000)) {
      uVar10 = 1;
    }
    do {
      param_3 = param_3 + 1;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return -1;
      }
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\n');
  } while( true );
}


// 0x06229c8 (0x80 bytes)
void FUN_006229c8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      (**(code **)**(undefined4 **)(PTR_PTR_0071b028 + -0x7ffc))(*(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// 0x0622a48 (0xe4 bytes)
int FUN_00622a48(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 != 0) && (0 < iVar3)) {
      iVar6 = 0;
      iVar4 = 0;
      do {
        iVar5 = iVar3 - iVar6;
        pcVar7 = (char *)(iVar2 + iVar6);
        if ((iVar3 < iVar6 + 1) || (iVar3 == -0x80000000)) {
          iVar5 = 1;
        }
        while (*pcVar7 != '[') {
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
          if (iVar5 == 0) {
            return iVar4;
          }
        }
        iVar5 = iVar3 - iVar6;
        pcVar7 = (char *)(iVar2 + iVar6 + 1);
        if ((iVar3 < iVar6 + 1) || (iVar3 == -0x80000000)) {
          iVar5 = 1;
        }
        do {
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            return iVar4;
          }
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != ']');
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return 0;
}


// 0x0622b2c (0x28c bytes)
void FUN_00622b2c(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 < 1) {
    return;
  }
  iVar5 = 0;
  iVar10 = 0;
  do {
    iVar3 = iVar2 - iVar5;
    pcVar7 = (char *)(iVar6 + iVar5);
    if ((iVar2 < iVar5 + 1) || (iVar2 == -0x80000000)) {
      iVar3 = 1;
    }
    while (*pcVar7 != '[') {
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar7 + 1;
      if (iVar3 == 0) {
        return;
      }
    }
    if (param_2 == iVar10) {
      iVar9 = iVar2 - iVar5;
      pcVar8 = (char *)(iVar6 + iVar5);
      pcVar7 = pcVar8 + 1;
      iVar3 = iVar5;
      if ((iVar2 < iVar5 + 1) || (iVar2 == -0x80000000)) {
        iVar9 = 1;
      }
      while( true ) {
        iVar1 = iVar3 + 1;
        pcVar8 = pcVar8 + 1;
        if ((' ' < *pcVar7) && (*pcVar7 != '\x7f')) break;
        iVar9 = iVar9 + -1;
        iVar3 = iVar1;
        pcVar7 = pcVar7 + 1;
        if (iVar9 == 0) {
          return;
        }
      }
      iVar4 = iVar2 - iVar1;
      iVar5 = iVar1;
      iVar9 = iVar1;
      pcVar7 = pcVar8;
      if ((iVar2 < iVar3 + 2) || (iVar2 == -0x80000000)) {
        iVar4 = 1;
      }
      do {
        if (*pcVar7 == ']') break;
        if (*pcVar7 != ' ') {
          iVar9 = iVar5;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
        pcVar7 = pcVar7 + 1;
      } while (iVar4 != 0);
      if (iVar1 < iVar9) {
        iVar3 = iVar3 + 2;
        iVar6 = 1;
        *param_3 = *pcVar8;
        lVar11 = 0xfe;
        iVar2 = 1;
        if (param_4 != 2) break;
        goto LAB_00622d64;
      }
    }
    iVar3 = iVar2 - iVar5;
    pcVar7 = (char *)(iVar6 + iVar5);
    if ((iVar2 < iVar5 + 1) || (iVar2 == -0x80000000)) {
      iVar3 = 1;
    }
    while (*pcVar7 != ']') {
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar7 + 1;
      if (iVar3 == 0) {
        return;
      }
    }
    if (iVar2 <= iVar5) {
      return;
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    iVar2 = iVar6 + 1;
    pcVar7 = (char *)(iVar3 + *(int *)(param_1 + 8));
    iVar3 = iVar3 + 1;
    param_3[iVar6] = *pcVar7;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      iVar6 = 0xff;
      break;
    }
    iVar6 = param_4 + -1;
    if (param_4 + -1 == iVar2) break;
    iVar6 = iVar2;
    if (iVar9 < iVar3) break;
  }
LAB_00622d64:
  param_3[iVar6] = '\0';
  return;
}


// 0x0622db8 (0x170 bytes)
undefined4 FUN_00622db8(int param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = FUN_006223ec();
  if (0 < iVar1) {
    iVar1 = FUN_006226a4(param_1,param_3,iVar1);
    if (0 < iVar1) {
      pcVar2 = (char *)(*(int *)(param_1 + 8) + iVar1);
      iVar5 = iVar1;
      pcVar4 = pcVar2;
      do {
        iVar3 = iVar5 + 1;
        if (0x5e < (byte)(*pcVar4 - 0x20U)) break;
        iVar5 = iVar3;
        pcVar4 = pcVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
      iVar3 = 0;
      if (iVar1 < iVar5) {
        iVar3 = iVar5 - iVar1;
        lVar6 = 0xfe;
        iVar5 = 1;
        *param_4 = *pcVar2;
        do {
          pcVar4 = param_4 + iVar5;
          if (iVar3 == iVar5) goto LAB_00622eb8;
          pcVar2 = (char *)(iVar1 + *(int *)(param_1 + 8) + iVar5);
          iVar5 = iVar5 + 1;
          *pcVar4 = *pcVar2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        iVar3 = 0xff;
      }
LAB_00622eb8:
      param_4[iVar3] = '\0';
      return 1;
    }
  }
  return 0;
}


// 0x0622f28 (0x94 bytes)
// strings: 0066c798: 'Scream IniFile Load Error:  Size can not be NULL.\n' | 0066c760: 'Scream IniFile Load Error:  Location can not be NULL.\n'

void FUN_00622f28(int param_1,longlong param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b028;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b028 + -0x7ff8));
  }
  if (param_3 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff4));
  }
  *(int *)(param_1 + 8) = (int)param_2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(int *)(param_1 + 4) = param_3;
  return;
}


// 0x0622fbc (0x15c bytes)
// strings: 0066c7d0: '/app_home' | 0066c7f8: '%s%s' (raw) | 0066c7e8: '/app_home/' | 0066c800: 'Scream IniFile Load Error:  File not found.\n'

void FUN_00622fbc(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  GPiece<1032> auStack_420;
  
  puVar1 = PTR_PTR_0071b028;
  iVar2 = FUN_005c8700(param_2,*(undefined4 *)(PTR_PTR_0071b028 + -0x7ff0));
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(puVar1 + -0x7fe8);
  }
  else {
    uVar3 = *(undefined4 *)(puVar1 + -0x7fec);
  }
  FUN_006193e0(auStack_420,0x400,*(undefined4 *)(puVar1 + -0x7fe4),uVar3,param_2);
  iVar2 = FUN_00630808(auStack_420,0);
  if (-1 < iVar2) {
    uVar3 = FUN_006307ac(iVar2,0,2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_006307ac(iVar2,0,0);
    iVar4 = (**(code **)**(undefined4 **)(puVar1 + -0x7fe0))(*(undefined4 *)(param_1 + 4),3);
    *(int *)(param_1 + 8) = iVar4;
    if (iVar4 != 0) {
      FUN_00630754(iVar2,iVar4,*(undefined4 *)(param_1 + 4));
    }
    cellFsClose(iVar2);
    return;
  }
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fdc));
  return;
}


// 0x0623118 (0x4c bytes)
void FUN_00623118(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b028 + -0x8000);
  FUN_006229c8();
  FUN_005e387c(param_1);
  return;
}


// 0x0623164 (0x1c bytes)
void FUN_00623164(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b028 + -0x8000);
  FUN_006229c8();
  return;
}


// 0x0623180 (0x1c bytes)
void FUN_00623180(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b028 + -0x8000);
  FUN_006229c8();
  return;
}


// 0x062319c (0x3c bytes)
// strings: 0066c840: 'INVALID!'

ulonglong FUN_0062319c(ulonglong param_1)

{
  ulonglong uVar1;
  
  if ((param_1 & 0xffffffff) < 5) {
                    /* WARNING: Could not recover jumptable at 0x006231c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(*(int *)((int)(param_1 << 2) + *(int *)(PTR_PTR_0071b02c + -0x8000)) +
                      *(int *)(PTR_PTR_0071b02c + -0x8000)))();
    return uVar1;
  }
  return (ulonglong)*(uint *)(PTR_PTR_0071b02c + -0x7ff8);
}


// 0x062323c (0x4c bytes)
int FUN_0062323c(int *param_1)

{
  if ((*param_1 != 1) && (*param_1 != 3)) {
    return 0;
  }
  return param_1[(param_1[1] + -1) * 2 + 2] + param_1[(param_1[1] + -1) * 2 + 3];
}


// 0x0623288 (0x28 bytes)
undefined1 FUN_00623288(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_006247ec();
  return uVar1;
}


// 0x06232b0 (0x28 bytes)
undefined4 FUN_006232b0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006248a4();
  return uVar1;
}


// 0x06232d8 (0x21c bytes)
// strings: 0066c890: 'snd_RelocateBank(): Only one relocation operation is permitted at a time!\n' | 0066c8e0: '%s(%d) : Attempt to relocate unloaded block handle %x.\n' | 0066c918: 'common/boomrang/api_brb.cpp' | 0066c938: '%s(%d) : Attempt to relocate block that is locked%x.\n'

undefined4 snd_RelocateBank(int *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  puVar1 = PTR_PTR_0071b02c;
  iVar3 = FUN_00623288();
  if (iVar3 == 0) {
    iVar3 = FUN_00617cac(param_3);
    if (iVar3 == 0) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fe0));
      return 0;
    }
    if ((*(uint *)(param_3 + 8) & 0x400) != 0) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd8));
      return 0;
    }
    if ((*param_1 != 3) || ((int)param_1 + param_1[2] != param_3)) {
      return 0;
    }
    snd_SynthLock();
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x400;
    snd_SynthUnlock();
    uVar4 = FUN_0062323c(param_1);
    cVar5 = FUN_00625b20(param_3,param_3 + (param_2 - (int)param_1),param_1,param_2,uVar4);
    uVar4 = 1;
    if (cVar5 == '\0') {
      snd_SynthLock();
      uVar2 = ((ulonglong)*(uint *)(param_3 + 8) & 0x3ff) << 0x15 |
              (ulonglong)(*(uint *)(param_3 + 8) >> 0xb);
      *(uint *)(param_3 + 8) = (uint)(uVar2 << 0xb) | (uint)uVar2 >> 0x15;
      snd_SynthUnlock();
      uVar4 = 0;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fe4));
    uVar4 = 0;
  }
  return uVar4;
}


// 0x06234f4 (0x60 bytes)
void FUN_006234f4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  
  _uStack00000038 = param_2;
  _fStack00000040 = param_3;
  snd_SynthLock();
  snd_SynthSetMasterEQBand
            ((double)fStack0000003c,(double)fStack00000040,(double)fStack00000044,param_1,
             uStack00000038);
  snd_SynthUnlock();
  return;
}


// 0x0623554 (0x24 bytes)
void FUN_00623554(void)

{
  FUN_0062ae84();
  return;
}


// 0x0623578 (0x24 bytes)
void FUN_00623578(void)

{
  FUN_00627c40();
  return;
}


// 0x062359c (0x24 bytes)
void FUN_0062359c(void)

{
  FUN_00626670();
  return;
}


// 0x06235c0 (0x24 bytes)
void FUN_006235c0(void)

{
  FUN_0062db94();
  return;
}


// 0x06235e4 (0x24 bytes)
void FUN_006235e4(void)

{
  FUN_00626bb4();
  return;
}


// 0x0623608 (0x24 bytes)
void FUN_00623608(void)

{
  snd_SynthLR1Insert();
  return;
}


// 0x062362c (0x198 bytes)
void FUN_0062362c(undefined8 param_1,float *param_2)

{
  ulonglong uVar1;
  
  FUN_00628050((double)*param_2);
  FUN_00627f54((double)param_2[5],(double)param_2[9],(double)param_2[0xd],param_1,0,param_2[1]);
  FUN_00627f54((double)param_2[6],(double)param_2[10],(double)param_2[0xe],param_1,1,param_2[2]);
  FUN_00627f54((double)param_2[7],(double)param_2[0xb],(double)param_2[0xf],param_1,2,param_2[3]);
  FUN_00627f54((double)param_2[8],(double)param_2[0xc],(double)param_2[0x10],param_1,3,param_2[4]);
  uVar1 = (ulonglong)((int)param_2[0x11] >> 0x1f);
  FUN_00627e64((double)param_2[0x14],param_1,uVar1 - (uVar1 ^ (uint)param_2[0x11]) >> 0x1f & 1);
  FUN_006298b4((double)param_2[0x15],(double)param_2[0x16],(double)param_2[0x17],
               (double)param_2[0x18],(double)param_2[0x19],(double)param_2[0x1a],param_1);
  FUN_006297b0((double)param_2[0x1b],(double)param_2[0x1c],(double)param_2[0x1d],
               (double)param_2[0x1e],(double)param_2[0x1f],(double)param_2[0x20],param_1);
  uVar1 = (ulonglong)((int)param_2[0x21] >> 0x1f);
  FUN_00629650(param_1,uVar1 - (uVar1 ^ (uint)param_2[0x21]) >> 0x1f & 1);
  FUN_0062958c((double)param_2[0x22],(double)param_2[0x23],param_1);
  return;
}


// 0x06237c4 (0x24 bytes)
void FUN_006237c4(void)

{
  snd_SynthLR1Destroy();
  return;
}


// 0x06237e8 (0x28 bytes)
undefined4 FUN_006237e8(void)

{
  undefined4 uVar1;
  
  uVar1 = snd_SynthLR1Create();
  return uVar1;
}


// 0x0623810 (0x24 bytes)
void FUN_00623810(void)

{
  snd_DumpOutputCaptureBuffer();
  return;
}


// 0x0623834 (0x810 bytes)
// strings: 0066c970: 'preAmpGainLinear' | 0066c988: 'peqBand0Mode' | 0066c998: 'peqBand0Gain' | 0066c9a8: 'peqBand0Freq' | 0066c9b8: 'peqBand0Q' | 0066c9c8: 'peqBand1Mode' | 0066c9d8: 'peqBand1Gain' | 0066c9e8: 'peqBand1Freq' | 0066c9f8: 'peqBand1Q' | 0066ca08: 'peqBand2Mode' | 0066ca18: 'peqBand2Gain' | 0066ca28: 'peqBand2Freq' | 0066ca38: 'peqBand2Q' | 0066ca48: 'peqBand3Mode' | 0066ca58: 'peqBand3Gain' | 0066ca68: 'peqBand3Freq' | 0066ca78: 'peqBand3Q' | 0066ca88: 'compEffectOn' | 0066ca98: 'compSideChaining' | 0066cab0: 'compLinkedChannels' | 0066cac8: 'compLookAheadMS' | 0066cad8: 'compFRSthresholdDB' | 0066caf0: 'compFRSratio' | 0066cb00: 'compFRSattackTimeMS' | 0066cb18: 'compFRSreleaseTimeMS' | 0066cb30: 'compFRSmakeupGainDB' | 0066cb48: 'compFRSpassthruGainDB' | 0066cb60: 'compLFEthresholdDB' | 0066cb78: 'compLFEratio' | 0066cb88: 'compLFEattackTimeMS'

void FUN_00623834(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  GPiece<144> local_1c0;
  GPiece<264> auStack_130;
  
  puVar1 = PTR_PTR_0071b02c;
  if (param_2 != 0) {
    cVar2 = FUN_00622db8(param_2,param_3,*(undefined4 *)(PTR_PTR_0071b02c + -0x7fd4),auStack_130);
    if (cVar2 != '\0') {
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fd0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fcc),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fc8),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fc4),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fc0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fbc),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fb8),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fb4),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fb0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fac),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fa8),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fa4),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fa0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f9c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f98),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f94),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f90),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f8c),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f88),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f84),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f80),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f7c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f78),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f74),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f70),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f6c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f68),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f64),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f60),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f5c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f58),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f54),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f50),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f4c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f48),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_0062362c(param_1,local_1c0);
      return;
    }
  }
  return;
}


// 0x0624044 (0x34c bytes)
// strings: 0066cc20: 'EffectMode' | 0066cc30: 'EffectLevel' | 0066cc40: 'EarlyReflectionsDelay' | 0066cc58: 'EarlyReflectionsTimeFactor' | 0066cc78: 'EarlyReflectionsLevel' | 0066cc90: 'EarlyReflectionsSlapBack' | 0066ccb0: 'EarlyReflectionsHFRatio' | 0066ccc8: 'DecayTime' | 0066ccd8: 'DecayLevel' | 0066cce8: 'DecayHFRatio' | 0066ccf8: 'DecayDiffusion' | 0066cd08: 'EffectLowPassCutoff' | 0066cd20: 'EffectHighPassCutoff'

void FUN_00624044(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  GPiece<56> local_170;
  GPiece<272> auStack_138;
  
  puVar1 = PTR_PTR_0071b02c;
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar2 = FUN_00622db8(param_2,param_3,*(undefined4 *)(PTR_PTR_0071b02c + -0x7f44),auStack_138);
    if (cVar2 != '\0') {
      FUN_005caf74(auStack_138,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f40),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f3c),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f38),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f34),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f30),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f2c),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f28),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f24),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f20),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f1c),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f18),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f14),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_0060637c(param_1,local_170);
      return;
    }
  }
  return;
}


// 0x0624390 (0x19c bytes)
// strings: 0066d518: 'BRB (CLIENT): ' | 0066d528: '\n********************************************\n\n' | 0066d4a0: '\n\n**********    BRB ERROR REPORT    **********\n\n' | 0066d510: 'BRB: ' | 0066d4d8: '\n\n**********   BRB WARNING REPORT   **********\n\n' | 0066d464: '<e`B\n\n*****   BRB !!!FATAL ERROR!!! REPORT   *****\n\n'

void FUN_00624390(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
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
  
  puVar1 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (**(int **)(PTR_PTR_0071b030 + -0x8000) != 0) {
    return;
  }
  if (param_2 == 1) {
    puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
    uVar2 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7ff4);
LAB_00624478:
    (**(code **)*puVar3)(uVar2);
    (**(code **)*puVar3)(param_1);
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) {
        if (param_2 != 3) goto LAB_006243e4;
        puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
        (**(code **)*puVar3)(*(undefined4 *)(PTR_PTR_0071b030 + -0x7fec));
        (**(code **)*puVar3)(param_1);
LAB_006244fc:
        puVar3 = (undefined4 *)*puVar3;
        uVar2 = *(undefined4 *)(puVar1 + -0x7fe0);
        goto LAB_00624434;
      }
      puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
      uVar2 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7ff0);
      goto LAB_00624478;
    }
    if (param_2 == 0) {
      puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
      uVar2 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7ff8);
      goto LAB_00624478;
    }
LAB_006243e4:
    puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
    (**(code **)*puVar3)(*(undefined4 *)(PTR_PTR_0071b030 + -0x7fe8));
    (**(code **)*puVar3)(param_1);
    if (2 < param_2) goto LAB_006244fc;
  }
  puVar3 = (undefined4 *)*puVar3;
  uVar2 = *(undefined4 *)(puVar1 + -0x7fe4);
LAB_00624434:
  (*(code *)*puVar3)(uVar2);
  return;
}


// 0x062452c (0x5c bytes)
void FUN_0062452c(undefined8 param_1,int param_2)

{
  (**(code **)**(undefined4 **)(PTR_PTR_0071b030 + -0x7fdc))(param_2 - *(int *)(param_2 + -8));
  return;
}


// 0x0624588 (0x8 bytes)
undefined8 FUN_00624588(void)

{
  return 0;
}


// 0x0624590 (0x48 bytes)
int FUN_00624590(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 8;
  iVar1 = 0;
  piVar2 = *(int **)(PTR_PTR_0071b030 + -0x7fd8);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 4;
  } while (lVar3 != 0);
  return -1;
}


// 0x06245d8 (0xcc bytes)
void FUN_006245d8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = 8;
  piVar1 = *(int **)(PTR_PTR_0071b030 + -0x7fcc);
  uVar4 = 0;
  piVar5 = *(int **)(PTR_PTR_0071b030 + -0x7fd4);
  do {
    iVar2 = *piVar5;
    if (iVar2 == param_1) {
      puVar3 = (undefined4 *)**(undefined4 **)(PTR_PTR_0071b030 + -0x7fd0);
      *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7fd4) + (int)((uVar4 & 0xffffffff) << 4)) = 0;
      (*(code *)*puVar3)(iVar2,0,1);
      *piVar1 = *piVar1 + -1;
      return;
    }
    lVar6 = lVar6 + -1;
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 4;
  } while (lVar6 != 0);
  return;
}


// 0x06246a4 (0x18 bytes)
void FUN_006246a4(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b030 + -0x7fc8) = param_1;
  return;
}


// 0x06246bc (0x8 bytes)
undefined8 FUN_006246bc(void)

{
  return 3;
}


// 0x06246c4 (0x14 bytes)
// strings: 0066d560: 'BoomRangBuss'

undefined4 FUN_006246c4(void)

{
  return *(undefined4 *)(PTR_PTR_0071b030 + -0x7fc4);
}


// 0x06246d8 (0x54 bytes)
void FUN_006246d8(undefined4 *param_1)

{
  *param_1 = 100;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[7] = 0;
  param_1[3] = 0x80;
  param_1[4] = 0x20;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


// 0x062472c (0x4 bytes)
void FUN_0062472c(void)

{
  return;
}


// 0x0624730 (0x8 bytes)
undefined8 FUN_00624730(void)

{
  return 1;
}


// 0x0624738 (0x58 bytes)
undefined4 FUN_00624738(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  piVar1 = (int *)(param_1 * 0x10 + (param_1 & 0x3fffffff) * -4 +
                  *(int *)(PTR_PTR_0071b030 + -0x7fc0));
  iVar2 = piVar1[1] + -1;
  if (piVar1[1] != 0) {
    piVar1[1] = iVar2;
    uVar3 = *(undefined4 *)(iVar2 * 4 + *piVar1);
  }
  return uVar3;
}


// 0x0624790 (0x8 bytes)
undefined8 FUN_00624790(void)

{
  return 2;
}


// 0x0624798 (0x48 bytes)
double FUN_00624798(int param_1,int param_2)

{
  if (param_1 == 1) {
    if (param_2 != 0) goto LAB_006247c4;
  }
  else {
    if (param_1 != 2) {
      return (double)*(float *)(PTR_PTR_0071b030 + -0x7fac);
    }
    if (param_2 == 0) {
LAB_006247c4:
      return (double)*(float *)(PTR_PTR_0071b030 + -0x7fb4);
    }
  }
  return (double)*(float *)(PTR_PTR_0071b030 + -0x7fbc);
}


// 0x06247e0 (0xc bytes)
void FUN_006247e0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// 0x06247ec (0x34 bytes)
uint FUN_006247ec(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (**(char **)(PTR_PTR_0071b030 + -0x7fa4) != '\0') {
    uVar1 = (uint)((ulonglong)(byte)(*(char **)(PTR_PTR_0071b030 + -0x7fa4))[1] - 1 >> 0x3f);
  }
  return uVar1;
}


// 0x0624820 (0x18 bytes)
undefined4 FUN_00624820(void)

{
  return **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
}


// 0x0624838 (0x3c bytes)
void FUN_00624838(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  FUN_005e387c();
  return;
}


// 0x0624874 (0x18 bytes)
void FUN_00624874(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  return;
}


// 0x062488c (0x18 bytes)
void FUN_0062488c(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  return;
}


// 0x06248a4 (0x4c bytes)
undefined4 FUN_006248a4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa4);
  if (*(char *)((int)puVar1 + 1) != '\0') {
    uVar2 = puVar1[4];
    puVar1[6] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
  }
  return uVar2;
}


// 0x06248f0 (0x130 bytes)
int FUN_006248f0(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1 << (param_3 & 0x1f);
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  uVar1 = (**(code **)**(undefined4 **)(PTR_PTR_0071b030 + -0x7f98))
                    (uVar4 + param_2,**(undefined4 **)(PTR_PTR_0071b030 + -0x7f94));
  iVar2 = uVar4 + (-uVar4 & uVar1);
  iVar3 = 0;
  if (uVar1 != 0) {
    *(int *)(iVar2 + -4) = param_2;
    *(uint *)(iVar2 + -8) = iVar2 - uVar1;
    iVar3 = iVar2;
    if ((param_3 & 0x40) != 0) {
      memset(iVar2,0,param_2);
      return iVar2;
    }
  }
  return iVar3;
}


// 0x0624a20 (0xf0 bytes)
uint FUN_00624a20(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  GPiece<4> local_20;
  int local_1c [3];
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 < 0) {
    if (param_1 == -1) {
      iVar3 = **(int **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      iVar3 = **(int **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_006487c0(iVar3,local_20,local_1c);
  uVar2 = 0;
  if (local_1c[0] != 0) {
    sync(1);
    if ((**(uint **)(iVar3 + 0x14) & 1) == 0) {
      uVar2 = 0;
      if (*(float *)(*(int *)(iVar3 + 0x10) + 0xc) < **(float **)(puVar1 + -0x7f88)) {
        uVar2 = *(uint *)(local_1c[0] + 0x2c) & 1;
      }
    }
    else {
      uVar2 = *(uint *)(local_1c[0] + 0x2c) & 1;
    }
  }
  return uVar2;
}


// 0x0624b18 (0x9c bytes)
undefined4 FUN_00624b18(int param_1)

{
  undefined4 uVar1;
  GPiece<4> local_20;
  int local_1c [3];
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_006487c0(uVar1,local_20,local_1c);
  uVar1 = 0;
  if (local_1c[0] != 0) {
    uVar1 = *(undefined4 *)(local_1c[0] + 0x3c);
  }
  return uVar1;
}


// 0x0624bbc (0x114 bytes)
uint FUN_00624bbc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  GPiece<4> local_20;
  int local_1c [3];
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 < 0) {
    if (param_1 == -1) {
      iVar2 = **(int **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      iVar2 = **(int **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_006487c0(iVar2,local_20,local_1c);
  uVar3 = 0;
  if (local_1c[0] != 0) {
    sync(1);
    if ((**(uint **)(iVar2 + 0x14) & 1) == 0) {
      uVar3 = 0;
      if (*(float *)(*(int *)(iVar2 + 0x10) + 0xc) < **(float **)(puVar1 + -0x7f88)) {
        uVar3 = (int)*(uint *)(local_1c[0] + 8) >> 0x1f;
        uVar3 = ((uVar3 ^ *(uint *)(local_1c[0] + 8)) - uVar3) - 1 >> 0x1f;
      }
    }
    else {
      uVar3 = (int)*(uint *)(local_1c[0] + 8) >> 0x1f;
      uVar3 = ((uVar3 ^ *(uint *)(local_1c[0] + 8)) - uVar3) - 1 >> 0x1f;
    }
  }
  return uVar3;
}


// 0x0624cd8 (0xec bytes)
/* WARNING: Removing unreachable block (ram,0x00624d58) */

void FUN_00624cd8(int param_1)

{
  undefined4 uVar1;
  GPiece<8> local_40;
  GPiece<8> local_38;
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_00648730(uVar1,local_40,local_38);
  return;
}


// 0x0624dcc (0xec bytes)
/* WARNING: Removing unreachable block (ram,0x00624e4c) */

void FUN_00624dcc(int param_1)

{
  undefined4 uVar1;
  GPiece<8> local_40;
  GPiece<8> local_38;
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_00648730(uVar1,local_40,local_38);
  return;
}


// 0x0624ec0 (0x19c bytes)
/* WARNING: Removing unreachable block (ram,0x00624fbc) */

void FUN_00624ec0(int param_1)

{
  undefined4 uVar1;
  GPiece<8> local_70;
  GPiece<8> local_68;
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_00648730(uVar1,local_70,local_68);
  return;
}


// 0x0625064 (0x40 bytes)
// strings: 0066d570: 'snd_DumpOutputCaptureBuffer() is deprecated.\n' | 0066d5a0: 'Please use snd_StartDebugD2Drecording() and snd_StopDebugD2Drecording() instead.\n'

void snd_DumpOutputCaptureBuffer(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f84));
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f80));
  return;
}


// 0x06250a4 (0xf8 bytes)
// strings: 0066d5f8: 'snd_SynthGetVoiceType(): Data type %d is not recognized by this synthesizer (BRB)!\n'

undefined8 snd_SynthGetVoiceType(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 3) {
    if (param_1 < 4) {
      if (param_1 == 1) {
        return 1;
      }
      if (param_1 < 2) {
        return 0;
      }
    }
    else {
      if (param_1 == 0x80000000) {
        return 1;
      }
      if (param_1 < 0x80000001) {
        if (param_1 == 4) {
          return 4;
        }
LAB_00625168:
        snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f7c));
        return 0xffffffff;
      }
      if (param_1 == 0x80000001) {
        return 0;
      }
      if (param_1 != 0x80000002) goto LAB_00625168;
    }
    uVar1 = 2;
  }
  return uVar1;
}


// 0x062519c (0xb0 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d650: '%s(%d) : s_FindEffectSlotByHandle(): LR1 instance not found!\n'

int FUN_0062519c(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = -1;
  if (param_1 != 0) {
    iVar2 = 0;
    lVar3 = 8;
    piVar1 = *(int **)(PTR_PTR_0071b030 + -0x7fd4);
    do {
      if (*piVar1 == param_1) {
        if (-1 < iVar2) {
          return iVar2;
        }
        goto LAB_006251f4;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + -1;
      piVar1 = piVar1 + 4;
    } while (lVar3 != 0);
    iVar2 = -1;
LAB_006251f4:
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f78));
  }
  return iVar2;
}


// 0x062524c (0x94 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062524c(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    *(undefined1 *)((int)((uVar2 & 0xffffffff) << 4) + *(int *)(puVar1 + -0x7fd4) + 0xd) = 1;
  }
  return;
}


// 0x06252e0 (0x94 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_006252e0(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    *(undefined1 *)((int)((uVar2 & 0xffffffff) << 4) + *(int *)(puVar1 + -0x7fd4) + 0xc) = 1;
  }
  return;
}


// 0x0625374 (0xb0 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

undefined4 FUN_00625374(uint param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b030;
  if (8 < param_1) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_00624590(param_1);
  if ((int)uVar2 < 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4));
}


// 0x0625424 (0x460 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Type propagation algorithm not settling */

void FUN_00625424(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  puVar4 = PTR_PTR_0071b030;
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar4 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7f68),0);
  }
  *param_1 = *param_1 | *param_2;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    param_1[3] = param_1[3];
    param_1[4] = param_1[4];
  }
  else {
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  if ((uVar2 & 2) == 0) {
    param_1[5] = param_1[5];
    param_1[6] = param_1[6];
    param_1[7] = param_1[7];
    param_1[8] = param_1[8];
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
  }
  if ((uVar2 & 4) == 0) {
    param_1[9] = param_1[9];
    param_1[10] = param_1[10];
    param_1[0xb] = param_1[0xb];
    param_1[0xc] = param_1[0xc];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
  }
  if ((uVar2 & 8) == 0) {
    param_1[0xd] = param_1[0xd];
    param_1[0xe] = param_1[0xe];
    param_1[0xf] = param_1[0xf];
    param_1[0x10] = param_1[0x10];
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
  }
  if ((uVar2 & 0x10) == 0) {
    param_1[0x11] = param_1[0x11];
    param_1[0x12] = param_1[0x12];
    param_1[0x13] = param_1[0x13];
  }
  else {
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
  }
  if ((uVar2 & 0x80) == 0) {
    uVar6 = param_1[0x1a];
  }
  else {
    uVar6 = param_2[0x1a];
  }
  param_1[0x1a] = uVar6;
  puVar8 = param_2 + 0x1b;
  if ((uVar2 & 0x100) == 0) {
    puVar8 = param_1 + 0x1b;
  }
  param_1[0x1b] = *puVar8;
  param_1[0x1c] = puVar8[1];
  param_1[0x1d] = puVar8[2];
  param_1[0x1e] = puVar8[3];
  if ((uVar2 & 0x200) == 0) {
    param_1[0x1f] = param_1[0x1f];
  }
  else {
    param_1[0x1f] = param_2[0x1f];
  }
  if ((uVar2 & 0x400) == 0) {
    uVar6 = param_1[0x20];
  }
  else {
    uVar6 = param_2[0x20];
  }
  puVar8 = param_1 + 0x24;
  param_1[0x20] = uVar6;
  bVar3 = (uVar2 & 0x400) == 0;
  iVar7 = 0;
  do {
    if (bVar3) {
      uVar6 = puVar8[3];
    }
    else {
      uVar6 = *(uint *)((int)param_2 + iVar7 + 0x9c);
    }
    puVar8[3] = uVar6;
    if (bVar3) {
      uVar5 = *(undefined4 *)((int)param_1 + iVar7 + 0x84);
    }
    else {
      uVar5 = *(undefined4 *)((int)param_2 + iVar7 + 0x84);
    }
    *(undefined4 *)((int)param_1 + iVar7 + 0x84) = uVar5;
    if (bVar3) {
      *puVar8 = *puVar8;
      if (bVar3) goto LAB_006257f0;
LAB_0062562c:
      uVar5 = *(undefined4 *)((int)param_2 + iVar7 + 0xa8);
    }
    else {
      *puVar8 = *(uint *)((int)param_2 + iVar7 + 0x90);
      if (!bVar3) goto LAB_0062562c;
LAB_006257f0:
      uVar5 = *(undefined4 *)((int)param_1 + iVar7 + 0xa8);
    }
    bVar1 = iVar7 != 8;
    puVar8 = puVar8 + 1;
    *(undefined4 *)((int)param_1 + iVar7 + 0xa8) = uVar5;
    iVar7 = iVar7 + 4;
  } while (bVar1);
  param_1 = param_1 + 0x17;
  iVar7 = 0;
  bVar3 = (uVar2 & 0x40) != 0;
  do {
    puVar8 = param_1 + -3;
    if ((uVar2 & 0x20) == 0) {
      *puVar8 = *puVar8;
      if (!bVar3) goto LAB_0062582c;
LAB_00625694:
      uVar6 = *(uint *)((int)param_2 + iVar7 + 0x5c);
    }
    else {
      *puVar8 = *(uint *)((int)param_2 + iVar7 + 0x50);
      if (bVar3) goto LAB_00625694;
LAB_0062582c:
      uVar6 = *param_1;
    }
    bVar1 = iVar7 == 8;
    *param_1 = uVar6;
    iVar7 = iVar7 + 4;
    param_1 = param_1 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}


// 0x0625884 (0x134 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_00625884(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == (undefined4 *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar2 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7f68),0);
  }
  uVar1 = *(undefined4 *)(puVar2 + -0x7f64);
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
  *param_1 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x2c] = uVar1;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x20] = 0;
  param_1[0x27] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = uVar1;
  param_1[0x28] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = uVar1;
  param_1[0x23] = 0;
  return;
}


// 0x06259b8 (0x6c bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6d8: 'snd_SynthSetMasterEQBand(BOOMRANG): This function is not yet implemented!\n'

void snd_SynthSetMasterEQBand(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  if (3 < param_1) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f5c));
  return;
}


// 0x0625a24 (0x50 bytes)
void FUN_00625a24(int param_1,int param_2)

{
  idol::brbVoice_ConnectPort
            (*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4),2,
             *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_2 * 4));
  return;
}


// 0x0625a74 (0xac bytes)
int FUN_00625a74(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (3 < param_1) {
    param_1 = 3;
  }
  uVar1 = *(uint *)(*(int *)(PTR_PTR_0071b030 + -0x7f58) + param_1 * 4);
  if ((uVar1 < 3) || (uVar3 = uVar1 + 3 & 0xfffffffc, param_4 == 0)) {
    uVar3 = uVar1;
  }
  iVar2 = FUN_00640d2c();
  return uVar3 * (((param_3 & 0xff) - 1 >> 0x1e & 2) + 2) * iVar2 * param_2;
}


// 0x0625b20 (0xb0 bytes)
undefined4
FUN_00625b20(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  
  puVar2 = PTR_PTR_0071b030;
  uVar3 = 0;
  pcVar1 = *(char **)(PTR_PTR_0071b030 + -0x7fa4);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    pcVar1[1] = '\0';
    *(uint *)(pcVar1 + 4) = param_3;
    *(uint *)(pcVar1 + 8) = param_4;
    *(undefined4 *)(pcVar1 + 0xc) = param_1;
    *(undefined4 *)(pcVar1 + 0x10) = param_2;
    *(undefined4 *)(pcVar1 + 0x18) = param_5;
    if (param_3 < param_4) {
      *(uint *)(pcVar1 + 0x14) = param_4 - param_3;
    }
    else {
      *(uint *)(pcVar1 + 0x14) = param_4 - param_3;
    }
    cVar4 = FUN_006426c0(*(undefined4 *)(puVar2 + -0x7f54),pcVar1,1);
    uVar3 = 1;
    if (cVar4 == '\0') {
      uVar3 = 0;
      *pcVar1 = '\0';
    }
  }
  return uVar3;
}


// 0x0625bd0 (0xb8 bytes)
/* WARNING: Removing unreachable block (ram,0x00625c2c) */
/* WARNING: Removing unreachable block (ram,0x00625c74) */
/* WARNING: Removing unreachable block (ram,0x00625c40) */
/* WARNING: Removing unreachable block (ram,0x00625c4c) */

void FUN_00625bd0(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  GPiece<16> local_20;
  
  puVar1 = PTR_PTR_0071b030;
  uVar2 = FUN_0062519c();
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_20);
  }
  return;
}


// 0x0625c88 (0xf0 bytes)
// strings: 0066d728: 'voice->LockModuleParams(kMID_DISTORTION, &pparams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x00625d0c) */

int FUN_00625c88(int param_1)

{
  undefined *puVar1;
  int iVar2;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = PTR_PTR_0071b030;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  iVar2 = FUN_00648730(iVar2,local_3c,local_38);
  if (iVar2 != 0) {
    iVar2 = printf(*(char **)(puVar1 + -0x7f4c),iVar2);
  }
  return iVar2;
}


// 0x0625d80 (0xd8 bytes)
// strings: 0066d7a8: 'ERROR: illegal aux send destination: %i\n' | 0066d7d8: 'voice->ConnectPort(SidePort0 + sendIndex, s_auxBussVoices[dest]) failed (returned %i)\n' | 0066d780: 'ERROR: illegal aux send index: %i\n'

ulonglong FUN_00625d80(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int32_t iVar4;
  
  puVar2 = PTR_PTR_0071b030;
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (param_2 < 3) {
    if (param_3 < 8) {
      uVar3 = idol::brbVoice_ConnectPort
                        (iVar1,param_2 + 2,
                         *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f40) + param_3 * 4));
      if ((int)uVar3 != 0) {
        iVar4 = printf(*(char **)(puVar2 + -0x7f3c),(int)uVar3);
        return (longlong)iVar4;
      }
    }
    else {
      uVar3 = (ulonglong)*(uint *)(PTR_PTR_0071b030 + -0x7f44);
      snd_Printf((char)*(uint *)(PTR_PTR_0071b030 + -0x7f44));
    }
    return uVar3;
  }
  uVar3 = (ulonglong)*(uint *)(PTR_PTR_0071b030 + -0x7f48);
  snd_Printf((char)*(uint *)(PTR_PTR_0071b030 + -0x7f48));
  return uVar3;
}


// 0x0625e58 (0x12c bytes)
// strings: 0066d780: 'ERROR: illegal aux send index: %i\n' | 0066d840: 'voice->LockModuleParams(modID, &pparams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x00625f20) */

void FUN_00625e58(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  GPiece<8> local_2c;
  GPiece<4> local_24;
  
  puVar1 = PTR_PTR_0071b030;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  if (param_2 < 3) {
    iVar2 = FUN_00648730(iVar2,local_2c,local_24);
    if (iVar2 != 0) {
      printf(*(char **)(puVar1 + -0x7f38),iVar2);
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f48));
  }
  return;
}


// 0x0625f8c (0x3c8 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_00625f8c(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  float fVar5;
  ulonglong uVar4;
  uint *in_r8;
  float fVar6;
  uint in_r9;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float *pfVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar11;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar12;
  double dVar13;
  uint uStack00000008;
  
  puVar3 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((((((param_5 == (float *)0x0) ||
         (dVar12 = (double)*(float *)(PTR_PTR_0071b030 + -0x7fac), param_1 < dVar12)) ||
        (dVar13 = (double)*(float *)(PTR_PTR_0071b030 + -0x7f64), dVar13 < param_1)) ||
       ((param_2 < dVar12 || (dVar13 < param_2)))) ||
      ((param_3 < dVar12 || ((dVar13 < param_3 || (param_4 < dVar12)))))) || (dVar13 < param_4)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  pfVar10 = (float *)(in_r8 + 0x14);
  uVar8 = 0;
  bVar11 = ((in_r9 & 8) == 0) << 1;
  bVar1 = in_r8 == (uint *)0x0;
  do {
    iVar9 = (int)uVar8;
    iVar7 = iVar9 >> 0x1f;
    if (bVar1) {
      uVar4 = ((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) - (longlong)iVar7;
      iVar7 = (int)((uVar8 - ((uVar4 & 0x7fffffff) * 2 + uVar4) & 0xffffffff) << 2);
      fVar6 = *(float *)((int)param_5 + iVar7 + 0x14);
      dVar12 = (double)(float)((double)(float)(param_1 *
                                              (double)*(float *)((int)param_5 + iVar7 + 8)) *
                              param_4);
    }
    else {
      if ((*in_r8 & 0x40) == 0) {
        uVar4 = ((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) - (longlong)iVar7;
        fVar6 = *(float *)((int)param_5 +
                          (int)((uVar8 - ((uVar4 & 0x7fffffff) * 2 + uVar4) & 0xffffffff) << 2) +
                          0x14);
      }
      else {
        fVar6 = pfVar10[3];
      }
      if ((bool)(bVar11 >> 1 & 1)) {
        if ((*in_r8 & 0x20) == 0) {
          uVar4 = ((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) - (longlong)iVar7;
          dVar12 = (double)(float)(param_4 *
                                  (double)(float)(param_1 *
                                                 (double)*(float *)((int)param_5 +
                                                                   (int)((uVar8 - ((uVar4 & 
                                                  0x7fffffff) * 2 + uVar4) & 0xffffffff) << 2) + 8))
                                  );
        }
        else {
          dVar12 = (double)(float)(param_4 * (double)(float)(param_1 * (double)*pfVar10));
        }
      }
      else {
        dVar12 = (double)*(float *)(puVar3 + -0x7fac);
      }
    }
    uVar4 = uVar8 & 0xffffffff;
    uVar8 = uVar8 + 1;
    FUN_00625d80(param_5,uVar4,fVar6);
    pfVar10 = pfVar10 + 1;
    FUN_00625e58(dVar12,param_5,uVar4);
  } while (uVar8 != 3);
  if (bVar1) {
    fVar5 = (float)(param_1 * param_3);
    fVar6 = 0.0;
  }
  else {
    fVar5 = *(float *)(puVar3 + -0x7fac);
    if ((in_r9 & 4) == 0) {
      fVar5 = (float)(param_3 * (double)(float)(param_1 * (double)(float)in_r8[0x1a]));
    }
    fVar6 = 0.0;
    if ((in_r9 & 0x10) != 0) {
      fVar6 = (float)(param_2 * (double)(float)(param_1 * (double)(float)in_r8[0x1f]));
    }
  }
  fVar2 = param_5[0xb];
  *param_5 = fVar5;
  param_5[1] = fVar6;
  if (fVar2 != 0.0) {
    uVar8 = (ulonglong)(uint)fVar2;
    iVar7 = 0;
    if (fVar2 == 0.0) {
      uVar8 = 1;
    }
    do {
      while (bVar1) {
        *(undefined4 *)((int)param_5 + iVar7 + 0x54) = 0;
        *(float *)((int)param_5 + iVar7 + 0x48) = (float)(param_1 * param_3);
        uVar8 = uVar8 - 1;
        iVar7 = iVar7 + 4;
        if (uVar8 == 0) goto LAB_006261ac;
      }
      if ((in_r9 & 4) == 0) {
        fVar6 = (float)(param_3 *
                       (double)(float)(param_1 * (double)*(float *)((int)in_r8 + iVar7 + 0x9c)));
      }
      else {
        fVar6 = *(float *)(puVar3 + -0x7fac);
      }
      fVar5 = 0.0;
      if ((in_r9 & 0x10) != 0) {
        fVar5 = (float)((double)(float)(param_1 * (double)*(float *)((int)in_r8 + iVar7 + 0xa8)) *
                       param_2);
      }
      *(float *)((int)param_5 + iVar7 + 0x54) = fVar5;
      *(float *)((int)param_5 + iVar7 + 0x48) = fVar6;
      uVar8 = uVar8 - 1;
      iVar7 = iVar7 + 4;
    } while (uVar8 != 0);
  }
LAB_006261ac:
  *(undefined1 *)((int)param_5 + 0x6a) = 1;
  return;
}


// 0x0626354 (0xd8 bytes)
// strings: 0066d880: 'voice->LockModuleParams(kMID_PITCH, &pparams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x006263b8) */
/* WARNING: Removing unreachable block (ram,0x00626408) */
/* WARNING: Removing unreachable block (ram,0x00626414) */
/* WARNING: Removing unreachable block (ram,0x006263c4) */
/* WARNING: Removing unreachable block (ram,0x006263c8) */

int FUN_00626354(int param_1)

{
  undefined *puVar1;
  int iVar2;
  GPiece<4> local_2c;
  GPiece<16> local_28;
  
  puVar1 = PTR_PTR_0071b030;
  iVar2 = FUN_00648730(*(undefined4 *)(param_1 + 0x6c),local_2c,local_28);
  if (iVar2 != 0) {
    iVar2 = printf(*(char **)(puVar1 + -0x7f34),iVar2);
  }
  return iVar2;
}


// 0x0626434 (0xc8 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_00626434(double param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_2 != 0) {
    FUN_00626354((double)(float)(param_1 / (double)*(float *)(PTR_PTR_0071b030 + -0x7f20)),param_2,
                 param_3,0xfa6);
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
  if (**(char **)(puVar1 + -0x7f6c) == '\0') {
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
    FUN_00626354((double)(float)(param_1 / (double)*(float *)(puVar1 + -0x7f20)),0);
    return;
  }
  return;
}


// 0x06264fc (0x164 bytes)
// strings: 0066d8d0: 'voice->LockModuleParams( kMID_OUTMIXER_SETUP, &pParams ) failed (returned %i)\n' | 0066d930: 'voice->LockModuleParams( kMID_OUTMIXER_PAN, &pParams ) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x0062656c) */
/* WARNING: Removing unreachable block (ram,0x00626618) */
/* WARNING: Removing unreachable block (ram,0x0062657c) */
/* WARNING: Removing unreachable block (ram,0x0062658c) */
/* WARNING: Removing unreachable block (ram,0x006265e0) */

int FUN_006264fc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  GPiece<8> local_3c;
  GPiece<4> local_34;
  GPiece<24> local_30;
  
  puVar1 = PTR_PTR_0071b030;
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  iVar2 = FUN_00648730(iVar3,local_3c,local_30);
  if (iVar2 != 0) {
    printf(*(char **)(puVar1 + -0x7f18),iVar2);
  }
  iVar3 = FUN_00648730(iVar3,local_34,local_30);
  if (iVar3 != 0) {
    iVar3 = printf(*(char **)(puVar1 + -0x7f14),iVar3);
  }
  return iVar3;
}


// 0x0626670 (0x1d4 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x0062671c) */
/* WARNING: Removing unreachable block (ram,0x00626734) */
/* WARNING: Removing unreachable block (ram,0x0062682c) */
/* WARNING: Removing unreachable block (ram,0x00626768) */
/* WARNING: Removing unreachable block (ram,0x00626788) */
/* WARNING: Removing unreachable block (ram,0x006267a4) */

void FUN_00626670(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  ulonglong uVar2;
  GPiece<24> local_80;
  
  puVar1 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (3 < param_4)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_80);
  }
  return;
}


// 0x0626844 (0x40 bytes)
void FUN_00626844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_00623578(param_1,0,param_3,param_4,param_4,param_5,param_6,param_7);
  return;
}


// 0x0626884 (0x1b8 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n'

/* WARNING: Removing unreachable block (ram,0x00626980) */

void FUN_00626884(int param_1,int param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  GPiece<72> local_60;
  
  puVar1 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_60);
  }
  return;
}


// 0x0626a3c (0x178 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n'

/* WARNING: Removing unreachable block (ram,0x00626ad8) */

void FUN_00626a3c(int param_1,uint param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  GPiece<16> local_50;
  
  puVar1 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (0x21 < param_2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_50);
  }
  return;
}


// 0x0626bb4 (0x100 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n'

void FUN_00626bb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  
  puVar5 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar5 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7f68),0);
  }
  uVar6 = FUN_0062519c(param_1);
  iVar4 = (int)((uVar6 & 0xffffffff) << 4);
  if (-1 < (int)uVar6) {
    iVar7 = iVar4 + *(int *)(puVar5 + -0x7fd4);
    iVar1 = *(int *)(iVar7 + 8);
    if (-1 < iVar1) {
      uVar2 = *(undefined4 *)(*(int *)(puVar5 + -0x7fd4) + iVar4);
      uVar3 = *(undefined4 *)(*(int *)(puVar5 + -0x7f40) + iVar1 * 4);
      FUN_00647dd0(uVar3,0);
      FUN_0064842c(uVar3,1);
      FUN_00647dd0(uVar2,0);
      FUN_00648588(uVar2);
      *(undefined4 *)(iVar7 + 8) = 0xffffffff;
    }
  }
  return;
}


// 0x0626cb4 (0x1cc bytes)
// strings: 0066d988: 'snd_SynthLR1Insert(): Buss %d is already occupied!' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x00626df8) */

void snd_SynthLR1Insert(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar7;
  ulonglong uVar6;
  GPiece<16> local_40;
  
  puVar5 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (7 < (param_2 & 0xffffffff))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar5 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7f68),0);
    iVar7 = FUN_00624590(param_2 & 0xffffffff);
  }
  else {
    iVar7 = FUN_00624590(param_2 & 0xffffffff);
  }
  if (iVar7 < 0) {
    uVar6 = FUN_0062519c(param_1);
    if (-1 < (int)uVar6) {
      iVar3 = (int)((uVar6 & 0xffffffff) << 4);
      iVar4 = (int)((param_2 & 0xffffffff) << 2);
      iVar7 = *(int *)(puVar5 + -0x7f40);
      uVar1 = *(undefined4 *)(*(int *)(puVar5 + -0x7fd4) + iVar3);
      uVar2 = *(undefined4 *)(iVar7 + iVar4);
      *(int *)(iVar3 + *(int *)(puVar5 + -0x7fd4) + 8) = (int)param_2;
      idol::brbVoice_ConnectPort(uVar2,1,uVar1);
      FUN_00647ed0(*(undefined4 *)(iVar7 + iVar4),local_40);
      idol::brbVoice_ConnectPort(uVar1,1,**(undefined4 **)(puVar5 + -0x7fa0));
      FUN_00647ed0(uVar1,local_40);
      FUN_00647fa0(uVar1,0,0);
      return;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7f0c));
  }
  return;
}


// 0x0626e80 (0x180 bytes)
// strings: 0066da28: 'brb_DestroyRackUnit( pru, synchronous, synchronous ? NULL : LR1DestroyedCB, g_effectList[slot].pVoice ) failed (returned %i)\n' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d9c0: 'snd_SynthLR1Destroy(): ERROR: A SndEventCallback must be set in order to use asynchronous destroy!\n'

void snd_SynthLR1Destroy(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  if ((param_2 == '\0') && (**(int **)(puVar3 + -0x7fd0) == 0)) {
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f08));
  }
  else {
    FUN_00626bb4(param_1);
    uVar4 = FUN_0062519c(param_1);
    if (-1 < (int)uVar4) {
      iVar2 = (int)((uVar4 & 0xffffffff) << 4);
      iVar5 = *(int *)(puVar3 + -0x7fd4);
      iVar6 = iVar2 + iVar5;
      uVar1 = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(iVar6 + 8) = 0xffffffff;
      *(undefined1 *)(iVar6 + 0xc) = 0;
      *(undefined1 *)(iVar6 + 0xd) = 0;
      *(undefined4 *)(iVar6 + 4) = 0;
      if (param_2 == '\0') {
        iVar5 = FUN_00643884(uVar1,0,*(undefined4 *)(puVar3 + -0x7f04),
                             *(undefined4 *)(iVar5 + iVar2));
      }
      else {
        *(undefined4 *)(iVar5 + iVar2) = 0;
        iVar5 = FUN_00643884(uVar1,param_2,0,*(undefined4 *)(iVar5 + iVar2));
      }
      if (iVar5 != 0) {
        printf(*(char **)(puVar3 + -0x7f00),iVar5);
      }
      if (param_2 != '\0') {
        **(int **)(puVar3 + -0x7fcc) = **(int **)(puVar3 + -0x7fcc) + -1;
      }
    }
  }
  return;
}


// 0x0627000 (0x1c0 bytes)
// strings: 0066daa8: 'snd_SynthGetFreeVoiceBufferId(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066db40: 'pv->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066db98: 'pv->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066daf0: 'pv->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n'

undefined4 snd_SynthGetFreeVoiceBufferId(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<4> local_28;
  GPiece<4> local_24;
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7efc));
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  if (*(int *)(*(int *)(iVar5 + 0x14) + 0x24) == *(int *)(*(int *)(iVar5 + 0x10) + 0x10)) {
    iVar3 = FUN_00640c9c();
    iVar4 = FUN_006246bc();
    if (iVar4 <= iVar3 - *(int *)(param_1 + 100)) {
      cVar1 = *(char *)(param_1 + 0x68);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        iVar5 = FUN_006487c0(iVar5,local_28,local_24);
        if (iVar5 != 0) {
          printf(*(char **)(puVar2 + -0x7ef8),iVar5);
        }
      }
      else {
        if (cVar1 != '\x04') {
          iVar5 = FUN_006487c0(iVar5,local_30,local_24);
          if (iVar5 != 0) {
            printf(*(char **)(puVar2 + -0x7ef0),iVar5);
          }
          if (iRam0000005c != 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(param_1 + 0x60);
        }
        iVar5 = FUN_006487c0(iVar5,local_2c,local_24);
        if (iVar5 != 0) {
          printf(*(char **)(puVar2 + -0x7ef4),iVar5);
        }
      }
      if (iRam000001c4 == 0) {
        return *(undefined4 *)(param_1 + 0x60);
      }
    }
  }
  return 0xffffffff;
}


// 0x06271cc (0x28 bytes)
undefined4 FUN_006271cc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00640c9c();
  return uVar1;
}


// 0x06271f4 (0x24 bytes)
void snd_SynthUnlock(void)

{
  FUN_0062fca0();
  return;
}


// 0x0627218 (0xd0 bytes)
void FUN_00627218(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  puVar5 = PTR_PTR_0071b030;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  FUN_00617938(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  if (**(int **)(puVar5 + -0x7eec) != 0) {
    (*(code *)**(undefined4 **)(**(int **)(puVar5 + -0x7eec) + 8))
              (uVar1,uVar2,uVar3,*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 1) = 1;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  uVar6 = ((ulonglong)uVar4 & 0x3ff) << 0x15 | (ulonglong)(uVar4 >> 0xb);
  *(uint *)(*(int *)(param_1 + 0x10) + 8) = (uint)(uVar6 << 0xb) | (uint)uVar6 >> 0x15;
  snd_SynthUnlock();
  return;
}


// 0x06272e8 (0x24 bytes)
void snd_SynthLock(void)

{
  FUN_0062fcdc();
  return;
}


// 0x062730c (0x28 bytes)
undefined4 FUN_0062730c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0062fc4c();
  return uVar1;
}


// 0x0627334 (0x114 bytes)
void FUN_00627334(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  int *piVar6;
  
  puVar4 = PTR_PTR_0071b030;
  piVar6 = *(int **)(PTR_PTR_0071b030 + -0x7ee8);
  iVar1 = *piVar6;
  if (iVar1 != 0) {
    (**(code **)**(undefined4 **)(PTR_PTR_0071b030 + -0x7fdc))(iVar1);
    *piVar6 = 0;
  }
  lVar5 = 0;
  iVar1 = *(int *)(puVar4 + -0x7fc0);
  puVar2 = *(undefined4 **)(puVar4 + -0x7fdc);
  do {
    uVar3 = (uint)lVar5;
    lVar5 = lVar5 + 1;
    piVar6 = (int *)(uVar3 * 0x10 + (uVar3 & 0x3fffffff) * -4 + iVar1);
    if (*piVar6 != 0) {
      (**(code **)*puVar2)(*piVar6);
    }
    piVar6[2] = 0;
    piVar6[1] = 0;
  } while (lVar5 != 5);
  FUN_0063049c(**(undefined4 **)(puVar4 + -0x7ee4));
  FUN_006427e8();
  FUN_0062fd18();
  return;
}


// 0x0627448 (0x224 bytes)
// strings: 0066ddb8: 'brb_UnregisterPluginPackFromMem(_binary_scream_plugin_pack_mp3_elf_start) failed (returned %i)\n' | 0066dc20: 'brb_DestroyRackUnit( s_rackUnits[i], i == kRackUnit_MasteringPrimary) failed (returned %i)\n' | 0066dbf0: 'brb_StopSession(NULL) failed (returned %i)\n' | 0066dc80: 'brb_UnregisterPluginPackFromMem(_binary_mp3_sampler_surround_elf_start) failed (returned %i)\n' | 0066dce0: 'brb_UnregisterPluginPackFromMem(_binary_scream_plugin_pack_aux_master_elf_start) failed (returned %i)\n' | 0066dd48: 'brb_UnregisterPluginPackFromMem(_binary_scream_plugin_pack_synth_submix_elf_start) failed (returned %i)\n'

int FUN_00627448(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar10;
  ulonglong uVar9;
  longlong lVar11;
  
  puVar2 = PTR_PTR_0071b030;
  iVar4 = FUN_00642184(0);
  if (iVar4 != 0) {
    printf(*(char **)(puVar2 + -0x7edc),iVar4);
  }
  if (**(int **)(puVar2 + -0x7fcc) != 0) {
    piVar8 = *(int **)(puVar2 + -0x7fd4) + 0x20;
    piVar7 = *(int **)(puVar2 + -0x7fd4);
    do {
      while( true ) {
        piVar10 = piVar7 + 4;
        if (*piVar7 == 0) break;
        snd_SynthLR1Destroy(*piVar7,1);
        piVar7 = piVar10;
        if (piVar10 == piVar8) goto LAB_006274cc;
      }
      piVar7 = piVar10;
    } while (piVar10 != piVar8);
  }
LAB_006274cc:
  uVar9 = 0;
  piVar7 = *(int **)(puVar2 + -0x7ee0);
  do {
    uVar3 = uVar9 ^ 9;
    uVar5 = (ulonglong)((int)uVar3 >> 0x1f);
    uVar9 = uVar9 + 1;
    if (*piVar7 != 0) {
      iVar4 = FUN_00643884(*piVar7,((uVar5 ^ uVar3) - uVar5) - 1 >> 0x1f & 1,0,0);
      if (iVar4 != 0) {
        printf(*(char **)(puVar2 + -0x7ed8),iVar4);
      }
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
  } while (uVar9 != 10);
  lVar11 = 0x10;
  puVar6 = *(undefined4 **)(puVar2 + -0x7f90);
  do {
    *puVar6 = 0;
    lVar11 = lVar11 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar11 != 0);
  puVar6 = *(undefined4 **)(puVar2 + -0x7f8c);
  uVar1 = *(undefined4 *)(puVar2 + -0x7ed4);
  **(undefined4 **)(puVar2 + -0x7fa0) = 0;
  *puVar6 = 0;
  iVar4 = FUN_00642354(uVar1);
  if (iVar4 == 0) {
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ecc));
  }
  else {
    printf(*(char **)(puVar2 + -0x7ed0),iVar4);
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ecc));
  }
  if (iVar4 == 0) {
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ec4));
  }
  else {
    printf(*(char **)(puVar2 + -0x7ec8),iVar4);
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ec4));
  }
  if (iVar4 != 0) {
    printf(*(char **)(puVar2 + -0x7ec0),iVar4);
  }
  iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ebc));
  if (iVar4 != 0) {
    iVar4 = printf(*(char **)(puVar2 + -0x7eb8),iVar4);
  }
  return iVar4;
}


// 0x062766c (0x3c bytes)
void FUN_0062766c(void)

{
  FUN_00630388(**(undefined4 **)(PTR_PTR_0071b030 + -0x7ee4));
  return;
}


// 0x06276a8 (0x3c bytes)
void FUN_006276a8(void)

{
  FUN_006303cc(**(undefined4 **)(PTR_PTR_0071b030 + -0x7ee4));
  return;
}


// 0x06276e4 (0x24 bytes)
void FUN_006276e4(void)

{
  FUN_00641ec0();
  return;
}


// 0x0627708 (0x74 bytes)
void FUN_00627708(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      iVar1 = **(int **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      iVar1 = **(int **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  if (iVar1 != 0) {
    FUN_00641f84(iVar1);
  }
  return;
}


// 0x062777c (0xb4 bytes)
double FUN_0062777c(uint param_1)

{
  double dVar1;
  
  if (-1 < (int)param_1) {
    return (double)(*(float *)(PTR_PTR_0071b030 + -0x7e9c) -
                   (float)param_1 * *(float *)(PTR_PTR_0071b030 + -0x7ea4));
  }
  if (9 < param_1 + 0x7fffffff) {
    return (double)*(float *)(PTR_PTR_0071b030 + -0x7fac);
  }
                    /* WARNING: Could not recover jumptable at 0x0062782c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)(*(int *)((param_1 + 0x7fffffff) * 4 +
                                     *(int *)(PTR_PTR_0071b030 + -0x7eb4)) +
                            *(int *)(PTR_PTR_0071b030 + -0x7eb4)))();
  return dVar1;
}


// 0x06279c8 (0x270 bytes)
// strings: 0066d930: 'voice->LockModuleParams( kMID_OUTMIXER_PAN, &pParams ) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x00627b34) */
/* WARNING: Removing unreachable block (ram,0x00627b44) */
/* WARNING: Removing unreachable block (ram,0x00627b64) */
/* WARNING: Removing unreachable block (ram,0x00627ba8) */
/* WARNING: Removing unreachable block (ram,0x00627bb4) */
/* WARNING: Removing unreachable block (ram,0x00627bc4) */

int FUN_006279c8(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  GPiece<4> local_bc;
  GPiece<4> local_b8;
  float local_b4 [17];
  ulonglong local_70;
  
  puVar4 = PTR_PTR_0071b030;
  iVar5 = *(int *)(param_5 + 0x70);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_5 + 0x6c);
  }
  local_b4[8] = (float)param_3;
  local_b4[4] = (float)param_4;
  local_b4[0] = (float)param_1;
  local_b4[0xf] = 0.0;
  local_b4[0xc] = (float)param_2;
  local_b4[9] = 0.0;
  local_b4[10] = 0.0;
  local_b4[0xb] = 0.0;
  local_b4[5] = 0.0;
  local_b4[6] = 0.0;
  local_b4[7] = 0.0;
  local_b4[1] = 0.0;
  local_b4[2] = 0.0;
  local_b4[3] = 0.0;
  local_b4[0xd] = 0.0;
  local_b4[0xe] = 0.0;
  if (*(int *)(param_5 + 0x2c) != 0) {
    dVar9 = (double)*(float *)(PTR_PTR_0071b030 + -0x7ea4);
    uVar6 = 0;
    puVar7 = (undefined4 *)(param_5 + 0x30);
    do {
      uVar6 = uVar6 + 1;
      dVar8 = (double)FUN_0062777c(*puVar7);
      uVar1 = puVar7[3];
      iVar3 = (int)((uVar6 & 0x3fffffff) << 2);
      uVar2 = *(uint *)(param_5 + 0x2c);
      local_70 = (ulonglong)uVar1;
      *(float *)((int)local_b4 + iVar3 + 0x20) = (float)dVar8;
      *(float *)((int)local_b4 + iVar3 + 0x10) = (float)((double)uVar1 * dVar9);
      *(undefined4 *)((int)local_b4 + iVar3) = puVar7[6];
      *(undefined4 *)((int)local_b4 + iVar3 + 0x30) = puVar7[9];
      puVar7 = puVar7 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar2);
  }
  iVar5 = FUN_00648730(iVar5,local_bc,local_b8);
  if (iVar5 != 0) {
    iVar5 = printf(*(char **)(puVar4 + -0x7f14),iVar5);
  }
  return iVar5;
}


// 0x0627c40 (0x224 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x00627d14) */
/* WARNING: Removing unreachable block (ram,0x00627e4c) */
/* WARNING: Removing unreachable block (ram,0x00627d20) */
/* WARNING: Removing unreachable block (ram,0x00627d30) */
/* WARNING: Removing unreachable block (ram,0x00627e38) */
/* WARNING: Removing unreachable block (ram,0x00627d3c) */
/* WARNING: Removing unreachable block (ram,0x00627d48) */
/* WARNING: Removing unreachable block (ram,0x00627e24) */
/* WARNING: Removing unreachable block (ram,0x00627d58) */
/* WARNING: Removing unreachable block (ram,0x00627d64) */

void FUN_00627c40(double param_1,double param_2,int param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7,uint param_8)

{
  undefined *puVar1;
  ulonglong uVar2;
  GPiece<32> local_60;
  
  puVar1 = PTR_PTR_0071b030;
  if ((((param_3 == 0) || (3 < param_4)) || (0x168 < param_8)) ||
     (((0x168 < param_7 || (param_1 < (double)*(float *)(PTR_PTR_0071b030 + -0x7fac))) ||
      (param_2 < (double)*(float *)(PTR_PTR_0071b030 + -0x7fac))))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_3);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_60);
  }
  return;
}


// 0x0627e64 (0xe8 bytes)
void FUN_00627e64(double param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_50;
  GPiece<4> local_4c;
  GPiece<8> local_48;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_2 * 4),local_4c,local_48);
  if (-1 < iVar2) {
    uRam00000000 = param_3 & 0xff;
    uRam00000004 = param_5 & 0xff;
    uRam00000008 = param_6 & 0xff;
    fRam0000000c = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_2 * 4),local_50);
  }
  return;
}


// 0x0627f54 (0xf4 bytes)
void FUN_00627f54(double param_1,double param_2,double param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<16> local_58;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar4 = FUN_00648730(*(undefined4 *)(iVar1 + param_4 * 4),local_5c,local_58);
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(param_5 * 0x10);
    uVar2 = *(undefined4 *)(iVar1 + param_4 * 4);
    puVar3[3] = (float)param_3;
    *puVar3 = param_6;
    puVar3[1] = (float)param_1;
    puVar3[2] = (float)param_2;
    FUN_006486f8(uVar2,local_60);
  }
  return;
}


// 0x0628050 (0xac bytes)
void FUN_00628050(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_2 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_2 * 4),local_40);
  }
  return;
}


// 0x0628104 (0xa0 bytes)
void FUN_00628104(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x06281ac (0x9c bytes)
void FUN_006281ac(double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x0628250 (0xbc bytes)
void FUN_00628250(double param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<8> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000008 = (float)param_3;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x0628314 (0xb4 bytes)
void FUN_00628314(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    uRam00000004 = param_2 & 0xff;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x06283d0 (0x9c bytes)
void FUN_006283d0(double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x0628474 (0xa0 bytes)
void FUN_00628474(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x062851c (0xbc bytes)
void FUN_0062851c(double param_1,double param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar2 = PTR_PTR_0071b030;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar3 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar3) {
    uRam00000004 = *(undefined4 *)(puVar2 + -0x7e94);
    fRam0000000c = (float)param_2;
    uRam00000000 = 0;
    fRam00000008 = (float)param_1;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x06285e0 (0xac bytes)
void FUN_006285e0(double param_1,double param_2)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000004 = (float)param_2;
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x0628694 (0xa0 bytes)
void FUN_00628694(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x062873c (0x98 bytes)
void FUN_0062873c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  GPiece<4> local_20;
  int local_1c [3];
  
  iVar3 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0),local_20,local_1c);
  if (-1 < iVar3) {
    iVar3 = 0;
    lVar4 = 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + local_1c[0] + 0x140);
      puVar2 = (undefined4 *)(iVar3 + param_1);
      iVar3 = iVar3 + 4;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


// 0x06287dc (0xbc bytes)
void FUN_006287dc(double param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<8> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000008 = (float)param_3;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x06288a0 (0xbc bytes)
void FUN_006288a0(double param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<8> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000008 = (float)param_3;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x0628964 (0xb4 bytes)
void FUN_00628964(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    uRam00000004 = param_2 & 0xff;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x0628a20 (0xc8 bytes)
void FUN_00628a20(double param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar3 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar3) {
    if (0x17 < (param_2 & 0xffffffff)) {
      param_2 = 0x17;
    }
    uVar2 = *puVar1;
    *(float *)((param_2 & 0xffffffff) << 2) = (float)param_1;
    FUN_006486f8(uVar2,local_40);
  }
  return;
}


// 0x0628af0 (0xc4 bytes)
void FUN_00628af0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<16> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    lVar4 = 0x18;
    puVar3 = (undefined4 *)0x0;
    do {
      *puVar3 = *(undefined4 *)((int)puVar3 + param_1);
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x0628bbc (0xa0 bytes)
void FUN_00628bbc(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x0628c64 (0xec bytes)
void FUN_00628c64(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<16> local_58;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*puVar1,local_60);
  }
  return;
}


// 0x0628d58 (0xec bytes)
void FUN_00628d58(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<16> local_58;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*puVar1,local_60);
  }
  return;
}


// 0x0628e4c (0xd0 bytes)
void FUN_00628e4c(double param_1,uint param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_50;
  GPiece<4> local_4c;
  GPiece<16> local_48;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_4c,local_48);
  if (-1 < iVar2) {
    uRam00000000 = param_2 & 0xff;
    uRam00000008 = param_4 & 0xff;
    fRam0000000c = (float)param_1;
    uRam00000004 = 0;
    FUN_006486f8(*puVar1,local_50);
  }
  return;
}


// 0x0628f24 (0xe4 bytes)
void FUN_00628f24(double param_1,double param_2,double param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  GPiece<4> local_50;
  GPiece<4> local_4c;
  GPiece<8> local_48;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar4 = FUN_00648730(*puVar1,local_4c,local_48);
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(param_4 * 0x10);
    uVar2 = *puVar1;
    puVar3[3] = (float)param_3;
    *puVar3 = param_5;
    puVar3[1] = (float)param_1;
    puVar3[2] = (float)param_2;
    FUN_006486f8(uVar2,local_50);
  }
  return;
}


// 0x0629010 (0xac bytes)
void FUN_00629010(double param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    uRam00000004 = param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}


// 0x06290c4 (0x104 bytes)
void FUN_006290c4(double param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar3 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar3) {
    fRam00000000 = (float)param_1;
    if (param_3 == 0) {
      uRam00000004 = uRam00000004 & 0xfffffffe;
    }
    else {
      uRam00000004 = uRam00000004 | 1;
    }
    if (param_4 == 0) {
      uVar2 = ((ulonglong)uRam00000004 & 1) << 0x1e | (ulonglong)(uRam00000004 >> 2);
      uRam00000004 = (uint)(uVar2 << 2) | (uint)uVar2 >> 0x1e;
    }
    else {
      uRam00000004 = uRam00000004 | 2;
    }
    FUN_006486f8(*puVar1,local_40);
    return;
  }
  return;
}


// 0x06291d0 (0x9c bytes)
void FUN_006291d0(double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}


// 0x0629274 (0xd0 bytes)
void FUN_00629274(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  GPiece<4> local_30;
  int local_2c [5];
  
  iVar3 = FUN_006487c0(*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4),local_30,
                       local_2c);
  if (-1 < iVar3) {
    if (param_3 == 0) {
      iVar3 = local_2c[0] + 0x10 + *(int *)(local_2c[0] + 8) * 4;
    }
    else {
      iVar3 = local_2c[0] + 0x10;
    }
    iVar4 = 0;
    lVar5 = 8;
    do {
      puVar1 = (undefined4 *)(iVar4 + iVar3);
      puVar2 = (undefined4 *)(iVar4 + param_2);
      iVar4 = iVar4 + 4;
      *puVar2 = *puVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}


// 0x062934c (0xb0 bytes)
void FUN_0062934c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_1 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_2 & 0xff;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_1 * 4),local_40);
  }
  return;
}


// 0x0629404 (0xac bytes)
void FUN_00629404(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_2 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_2 * 4),local_40);
  }
  return;
}


// 0x06294b8 (0xcc bytes)
void FUN_006294b8(double param_1,double param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<8> local_38;
  
  puVar2 = PTR_PTR_0071b030;
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar3 = FUN_00648730(*(undefined4 *)(iVar1 + param_3 * 4),local_3c,local_38);
  if (-1 < iVar3) {
    uRam00000004 = *(undefined4 *)(puVar2 + -0x7e94);
    fRam0000000c = (float)param_2;
    uRam00000000 = 0;
    fRam00000008 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_3 * 4),local_40);
  }
  return;
}


// 0x062958c (0xbc bytes)
void FUN_0062958c(double param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<8> local_38;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_3 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000004 = (float)param_2;
    fRam00000000 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_3 * 4),local_40);
  }
  return;
}


// 0x0629650 (0xb0 bytes)
void FUN_00629650(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_1 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_2 & 0xff;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_1 * 4),local_40);
  }
  return;
}


// 0x0629708 (0xa0 bytes)
void FUN_00629708(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  GPiece<4> local_20;
  int local_1c [3];
  
  iVar3 = FUN_006487c0(*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4),local_20,
                       local_1c);
  if (-1 < iVar3) {
    iVar3 = 0;
    lVar4 = 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + local_1c[0] + 0x120);
      puVar2 = (undefined4 *)(iVar3 + param_2);
      iVar3 = iVar3 + 4;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


// 0x06297b0 (0xfc bytes)
void FUN_006297b0(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<8> local_58;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_7 * 4),local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_7 * 4),local_60);
  }
  return;
}


// 0x06298b4 (0xfc bytes)
void FUN_006298b4(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<8> local_58;
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_7 * 4),local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_7 * 4),local_60);
  }
  return;
}


// 0x06299b8 (0x1f8 bytes)
// strings: 0066de68: 'pv->UnlockModuleParams(kMID_ENVELOPE) failed (returned %i)\n' | 0066de18: 'pv->LockModuleParams(kMID_ENVELOPE, &pparams) failed (returned %i)\n'

int FUN_006299b8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  double dVar4;
  GPiece<4> local_50;
  GPiece<4> local_4c;
  GPiece<16> local_48;
  
  puVar2 = PTR_PTR_0071b030;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  iVar3 = FUN_00648730(uVar1,local_4c,local_48);
  if (iVar3 == 0) {
    uRam00000010 = 1;
    if (*(float *)(puVar2 + -0x7fac) < (float)param_2[2]) goto LAB_00629a48;
  }
  else {
    printf(*(char **)(puVar2 + -0x7e8c),iVar3);
    uRam00000010 = 1;
    if (*(float *)(puVar2 + -0x7fac) < (float)param_2[2]) goto LAB_00629a48;
  }
  uRam00000010 = 2;
LAB_00629a48:
  uRam00000000 = 4;
  uRam00000004 = *(undefined4 *)(puVar2 + -0x7f64);
  uRam0000000c = *param_2;
  dVar4 = (double)FUN_00624798(param_2[1],1);
  fRam00000008 = (float)dVar4;
  uRam00000014 = param_2[4];
  uRam00000020 = 2;
  uRam0000001c = param_2[2];
  dVar4 = (double)FUN_00624798(param_2[3],0);
  fRam00000018 = (float)dVar4;
  uRam00000024 = param_2[5];
  uRam0000002c = param_2[6];
  iRam00000030 = 2 - ((int)(*(byte *)(param_2 + 8) - 1) >> 0x1f);
  dVar4 = (double)FUN_00624798(param_2[7],0);
  fRam00000028 = (float)dVar4;
  uRam00000034 = 0;
  uRam00000040 = 4;
  uRam0000003c = param_2[9];
  dVar4 = (double)FUN_00624798(param_2[10],0);
  fRam00000038 = (float)dVar4;
  iVar3 = FUN_006486f8(uVar1,local_50);
  if (iVar3 != 0) {
    iVar3 = printf(*(char **)(puVar2 + -0x7e88),iVar3);
  }
  return iVar3;
}


// 0x0629bb8 (0x80 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066deb0: 'snd_SynthUnpauseVoice(): %s(%d) : Invalid voice context.\n'

void snd_SynthUnpauseVoice(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00647e98(*(undefined4 *)(param_1 + 0x6c),param_2,0xdc9);
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e84));
  FUN_00647e98(uRam0000006c);
  return;
}


// 0x0629c38 (0x80 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066def0: 'snd_SynthPauseVoice(): %s(%d) : Invalid voice context.\n'

void snd_SynthPauseVoice(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00647e74(*(undefined4 *)(param_1 + 0x6c),param_2,0xdb0);
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e80));
  FUN_00647e74(uRam0000006c);
  return;
}


// 0x0629cb8 (0x1f8 bytes)
/* WARNING: Removing unreachable block (ram,0x00629de0) */
/* WARNING: Removing unreachable block (ram,0x00629e04) */
/* WARNING: Removing unreachable block (ram,0x00629e14) */
/* WARNING: Removing unreachable block (ram,0x00629e1c) */
/* WARNING: Removing unreachable block (ram,0x00629dec) */
/* WARNING: Removing unreachable block (ram,0x00629d50) */
/* WARNING: Removing unreachable block (ram,0x00629dfc) */
/* WARNING: Removing unreachable block (ram,0x00629d58) */
/* WARNING: Removing unreachable block (ram,0x00629d74) */
/* WARNING: Removing unreachable block (ram,0x00629d78) */
/* WARNING: Removing unreachable block (ram,0x00629d88) */

void FUN_00629cb8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  GPiece<16> local_90;
  
  puVar6 = PTR_PTR_0071b030;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x18);
  snd_SynthLock();
  puVar4 = *(uint **)(puVar6 + -0x7e7c);
  if (*puVar4 != 0) {
    uVar7 = 0;
    piVar5 = *(int **)(puVar6 + -0x7ee8);
    iVar8 = 0;
    do {
      FUN_00647ed0(*(undefined4 *)(iVar8 + *piVar5 + 0x6c),local_90);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x74;
    } while (uVar7 < *puVar4);
  }
  FUN_00642648(uVar2,uVar1,iVar3 + 0xfU & 0xfffffff0);
  FUN_006426c0(*(undefined4 *)(puVar6 + -0x7e78),*(undefined4 *)(puVar6 + -0x7fa4),1);
  return;
}


// 0x0629eb0 (0xc8 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066df28: 'snd_SynthKeyOffVoice(): %s(%d) : Invalid voice context.\n'

void snd_SynthKeyOffVoice(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e74));
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x70);
  sync(1);
  if ((**(uint **)(iVar1 + 0x14) & 4) == 0) {
    sync(1);
    uVar3 = 0;
    if ((**(ulonglong **)(iVar1 + 0x10) & 8) == 0) goto LAB_00629f18;
  }
  uVar3 = 1;
LAB_00629f18:
  FUN_00647dd0(iVar1,uVar3);
  if (iVar2 != 0) {
    FUN_00647dd0(iVar2,uVar3);
  }
  return;
}


// 0x0629f78 (0x80 bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066df68: 'snd_SynthSilenceVoice(): %s(%d) : Invalid voice context.\n'

void snd_SynthSilenceVoice(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e70));
  }
  iVar1 = *(int *)(param_1 + 0x70);
  FUN_00647dd0(*(undefined4 *)(param_1 + 0x6c),1);
  if (iVar1 != 0) {
    FUN_00647dd0(iVar1,1);
  }
  return;
}


// 0x0629ff8 (0x26c bytes)
undefined4 FUN_00629ff8(undefined4 param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  undefined *puVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  puVar6 = PTR_PTR_0071b030;
  puVar4 = *(uint **)(PTR_PTR_0071b030 + -0x7e7c);
  if (*puVar4 != 0) {
    uVar14 = (ulonglong)*puVar4;
    iVar8 = 0;
    iVar13 = **(int **)(PTR_PTR_0071b030 + -0x7ee8);
    do {
      iVar5 = iVar8 + iVar13;
      iVar8 = iVar8 + 0x74;
      *(undefined1 *)(iVar5 + 0x6a) = 0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  piVar9 = *(int **)(puVar6 + -0x7e6c) + 0x20;
  piVar11 = *(int **)(puVar6 + -0x7e6c);
LAB_0062a0a4:
  do {
    if (*piVar11 != 0) {
      if (*(char *)(piVar11 + 2) == '\0') {
        cVar1 = *(char *)((int)piVar11 + 9);
      }
      else {
        FUN_00647e74(piVar11[-1]);
        cVar1 = *(char *)((int)piVar11 + 9);
        *(undefined1 *)(piVar11 + 2) = 0;
      }
      if (cVar1 != '\0') {
        piVar12 = piVar11 + 4;
        FUN_00647e98(piVar11[-1]);
        *(undefined1 *)((int)piVar11 + 9) = 0;
        piVar11 = piVar12;
        if (piVar12 == piVar9) break;
        goto LAB_0062a0a4;
      }
    }
    piVar11 = piVar11 + 4;
  } while (piVar11 != piVar9);
  FUN_0061c994(param_1);
  if (*puVar4 != 0) {
    uVar10 = 0;
    piVar11 = *(int **)(puVar6 + -0x7ee8);
    dVar16 = (double)*(float *)(puVar6 + -0x7ea4);
    iVar13 = 0;
    dVar17 = (double)**(float **)(puVar6 + -0x7f88);
    do {
      while( true ) {
        pfVar7 = (float *)(iVar13 + *piVar11);
        sync(1);
        if ((((**(uint **)((int)pfVar7[0x1b] + 0x14) & 1) != 0) ||
            ((double)*(float *)(*(int *)((int)pfVar7[0x1b] + 0x10) + 0xc) < dVar17)) &&
           (*(char *)((int)pfVar7 + 0x6a) != '\0')) break;
LAB_0062a148:
        uVar10 = uVar10 + 1;
        iVar13 = iVar13 + 0x74;
        if (*puVar4 <= uVar10) {
          return param_1;
        }
      }
      dVar18 = (double)(float)((double)(uint)pfVar7[9] * dVar16);
      uVar15 = FUN_0062777c(pfVar7[8]);
      if ((int)pfVar7[8] < 0) {
        if (pfVar7[8] == -8.40779e-45) {
          fVar3 = *pfVar7;
          fVar2 = *(float *)(puVar6 + -0x7fac);
        }
        else {
          fVar2 = *pfVar7;
          fVar3 = *(float *)(puVar6 + -0x7fac);
        }
        FUN_006279c8((double)fVar2,(double)fVar3,uVar15,dVar18,pfVar7);
        goto LAB_0062a148;
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 0x74;
      FUN_006279c8((double)*pfVar7,(double)pfVar7[1],uVar15,dVar18,pfVar7);
    } while (uVar10 < *puVar4);
  }
  return param_1;
}


// 0x062a264 (0x130 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062a264(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b030;
  if ((((param_1 == param_2) || (**(uint **)(PTR_PTR_0071b030 + -0x7e68) <= param_1)) ||
      ((int)param_2 < -1)) || ((int)**(uint **)(PTR_PTR_0071b030 + -0x7e68) < (int)(param_2 + 1))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  if (param_2 == 0xffffffff) {
    iVar1 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_1 * 4);
    if (*(int *)(iVar1 + 0x24) != **(int **)(puVar3 + -0x7fa0)) {
      idol::brbVoice_ConnectPort(iVar1,1,**(int **)(puVar3 + -0x7fa0));
      return;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_1 * 4);
    iVar2 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_2 * 4);
    if (*(int *)(iVar1 + 0x24) != iVar2) {
      idol::brbVoice_ConnectPort(iVar1,1,iVar2);
    }
  }
  return;
}


// 0x062a394 (0x134 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062a394(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  
  puVar3 = PTR_PTR_0071b030;
  if (((param_1 == 0) || (param_2 < -1)) || (**(int **)(PTR_PTR_0071b030 + -0x7e68) < param_2 + 1))
  {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  uVar4 = FUN_0062519c(param_1);
  if (-1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)(puVar3 + -0x7fd4) + (int)((uVar4 & 0xffffffff) << 4));
    if (param_2 == -1) {
      if (*(int *)(iVar1 + 0x24) != **(int **)(puVar3 + -0x7fa0)) {
        idol::brbVoice_ConnectPort(iVar1,1,**(int **)(puVar3 + -0x7fa0));
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_2 * 4);
      if (*(int *)(iVar1 + 0x24) != iVar2) {
        idol::brbVoice_ConnectPort(iVar1,1,iVar2);
      }
    }
  }
  return;
}


// 0x062a4c8 (0x35c bytes)
// strings: 0066e038: 's_masterVoicePrimary->UnlockPluginParams( 1L << kIndex_outMixer_pan ) failed (returned %i)\n' | 0066dfa8: 'snd_SynthSetSpeakerMode(): %s(%d) : Invalid speaker mode.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066dfe8: 's_masterVoicePrimary->LockPluginParams( &pparams ) failed (returned %i)\n'

uint snd_SynthSetSpeakerMode(uint param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  double dVar16;
  int local_80;
  float afStack_7c [15];
  
  puVar9 = PTR_PTR_0071b030;
  pfVar11 = (float *)0x0;
  if (param_2 != 0) {
    iVar10 = 0;
    fVar2 = *(float *)(PTR_PTR_0071b030 + -0x7ea4);
    pfVar11 = afStack_7c;
    fVar3 = *(float *)(PTR_PTR_0071b030 + -0x7e9c);
    do {
      fVar8 = fVar3 - (float)*(uint *)(iVar10 + param_2) * fVar2;
      *(float *)((int)pfVar11 + iVar10) = fVar8;
      if (fVar3 <= fVar8) {
        do {
          fVar8 = fVar8 - fVar3;
        } while (fVar3 <= fVar8);
        *(float *)((int)pfVar11 + iVar10) = fVar8;
      }
      bVar1 = iVar10 != 0x1c;
      iVar10 = iVar10 + 4;
    } while (bVar1);
  }
  if (param_1 == 3) {
    iVar10 = FUN_006420e4(0xb,pfVar11);
    if (iVar10 < 0) goto LAB_0062a7a0;
    **(undefined4 **)(puVar9 + -0x7eb0) = 0xb;
  }
  else if (param_1 < 3) {
    iVar10 = FUN_006420e4(1,pfVar11);
    if (iVar10 < 0) {
LAB_0062a7a0:
      return **(uint **)(puVar9 + -0x7e64);
    }
    **(undefined4 **)(puVar9 + -0x7eb0) = 1;
    if (param_1 == 2) {
      **(undefined1 **)(puVar9 + -0x7f50) = 1;
      goto LAB_0062a5c8;
    }
  }
  else {
    if (param_1 != 4) {
      snd_Printf((char)*(undefined4 *)(puVar9 + -0x7e60));
      return **(uint **)(puVar9 + -0x7e64);
    }
    iVar10 = FUN_006420e4(0xd,pfVar11);
    if (iVar10 < 0) goto LAB_0062a7a0;
    **(undefined4 **)(puVar9 + -0x7eb0) = 0xd;
  }
  **(undefined1 **)(puVar9 + -0x7f50) = 0;
LAB_0062a5c8:
  puVar4 = *(uint **)(puVar9 + -0x7e64);
  if (param_1 != *puVar4) {
    puVar5 = *(uint **)(puVar9 + -0x7e7c);
    if (*puVar5 != 0) {
      uVar12 = 0;
      iVar10 = 0;
      piVar14 = *(int **)(puVar9 + -0x7ee8);
      dVar16 = (double)**(float **)(puVar9 + -0x7f88);
      do {
        while( true ) {
          iVar6 = *(int *)(iVar10 + *piVar14 + 0x6c);
          sync(1);
          uVar12 = uVar12 + 1;
          iVar10 = iVar10 + 0x74;
          if (((**(uint **)(iVar6 + 0x14) & 1) != 0) ||
             ((double)*(float *)(*(int *)(iVar6 + 0x10) + 0xc) < dVar16)) break;
          if (*puVar5 <= uVar12) goto LAB_0062a648;
        }
        FUN_006264fc();
      } while (uVar12 < *puVar5);
    }
LAB_0062a648:
    piVar13 = *(int **)(puVar9 + -0x7fd4) + 0x20;
    piVar14 = *(int **)(puVar9 + -0x7fd4);
    do {
      while( true ) {
        piVar15 = piVar14 + 4;
        if (*piVar14 == 0) break;
        FUN_00625bd0(*piVar14);
        piVar14 = piVar15;
        if (piVar15 == piVar13) goto LAB_0062a680;
      }
      piVar14 = piVar15;
    } while (piVar15 != piVar13);
LAB_0062a680:
    puVar7 = *(undefined4 **)(puVar9 + -0x7fa0);
    *puVar4 = param_1;
    iVar10 = FUN_00647ed0(*puVar7,&local_80);
    if (iVar10 != 0) {
      printf(*(char **)(puVar9 + -0x7e5c),iVar10);
    }
    if ((local_80 != 0) && (iVar10 = FUN_00647f34(*puVar7,0x2000), iVar10 != 0)) {
      printf(*(char **)(puVar9 + -0x7e58),iVar10);
      return param_1;
    }
  }
  return param_1;
}


// 0x062a824 (0xe8 bytes)
void FUN_0062a824(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  puVar3 = PTR_PTR_0071b030;
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x70);
  sync(1);
  if ((**(uint **)(iVar1 + 0x14) & 1) == 0) {
    if (**(float **)(PTR_PTR_0071b030 + -0x7f88) <= *(float *)(*(int *)(iVar1 + 0x10) + 0xc))
    goto LAB_0062a884;
  }
  FUN_00647dd0(iVar1,1);
LAB_0062a884:
  if (iVar2 != 0) {
    FUN_00647dd0(iVar2,1);
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 0x68) * 0xc + *(int *)(puVar3 + -0x7fc0));
  iVar1 = piVar4[1];
  if (piVar4[2] != iVar1) {
    piVar4[1] = iVar1 + 1;
    *(int *)(iVar1 * 4 + *piVar4) = param_1;
  }
  return;
}


// 0x062a90c (0xa8 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062a90c(double param_1,float *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  if (((param_2 == (float *)0x0) || ((double)*(float *)(PTR_PTR_0071b030 + -0x7f64) < param_1)) ||
     (param_1 < 0.0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  *param_2 = (float)param_1;
  *(undefined1 *)((int)param_2 + 0x6a) = 1;
  return;
}


// 0x062a9b4 (0x4d0 bytes)
// strings: 0066e1b8: 'psynv->UnlockPluginParamsAndKeyOn( false ) failed (returned %i)\n' | 0066e180: 'psynv->LockPluginParams(&pparams) failed (returned %i)\n' | 0066e118: 'psubv->UnlockPluginParams(1L << kIndex_outMixer_pan) failed (returned %i)\n' | 0066e0a8: 'snd_SynthKeyOnVoice(): %s(%d) : Invalid voice context.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066e0e0: 'psubv->LockPluginParams(&pParams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x0062acdc) */
/* WARNING: Removing unreachable block (ram,0x0062ace4) */
/* WARNING: Removing unreachable block (ram,0x0062ad00) */
/* WARNING: Removing unreachable block (ram,0x0062ad48) */
/* WARNING: Removing unreachable block (ram,0x0062ad60) */
/* WARNING: Removing unreachable block (ram,0x0062ab6c) */
/* WARNING: Removing unreachable block (ram,0x0062ab74) */
/* WARNING: Removing unreachable block (ram,0x0062ab80) */
/* WARNING: Removing unreachable block (ram,0x0062ae28) */
/* WARNING: Removing unreachable block (ram,0x0062ab88) */
/* WARNING: Removing unreachable block (ram,0x0062abb8) */
/* WARNING: Removing unreachable block (ram,0x0062ad74) */
/* WARNING: Removing unreachable block (ram,0x0062ac18) */
/* WARNING: Removing unreachable block (ram,0x0062ada4) */
/* WARNING: Removing unreachable block (ram,0x0062ae04) */
/* WARNING: Removing unreachable block (ram,0x0062ae24) */
/* WARNING: Removing unreachable block (ram,0x0062ac84) */

int snd_SynthKeyOnVoice(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  double dVar8;
  double dVar9;
  GPiece<4> local_e0;
  GPiece<4> local_dc;
  uint local_d8 [4];
  longlong local_c8;
  undefined8 local_c0;
  float local_b8 [4];
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  puVar4 = PTR_PTR_0071b030;
  if (param_1 == (uint *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e54));
  }
  local_90 = (ulonglong)param_1[9];
  uVar1 = param_1[0x1c];
  dVar9 = (double)*(float *)(puVar4 + -0x7ea4);
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_c0 = 0;
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_a0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c8 = (ulonglong)*param_1 << 0x20;
  uVar2 = param_1[0x1b];
  local_a8 = (ulonglong)(uint)(float)((double)local_90 * dVar9) << 0x20;
  dVar8 = (double)FUN_0062777c(param_1[8]);
  local_b8[0] = (float)dVar8;
  local_d8[0] = param_1[1];
  if (param_1[0xb] != 0) {
    uVar6 = 0;
    puVar7 = param_1 + 0xf;
    do {
      uVar6 = uVar6 + 1;
      local_90 = (ulonglong)*puVar7;
      iVar5 = (int)((uVar6 & 0x3fffffff) << 2);
      uVar3 = puVar7[-3];
      *(uint *)((int)&local_c8 + iVar5) = puVar7[3];
      *(float *)((int)&local_a8 + iVar5) = (float)((double)local_90 * dVar9);
      dVar8 = (double)FUN_0062777c(uVar3);
      uVar3 = param_1[0xb];
      *(float *)((int)local_b8 + iVar5) = (float)dVar8;
      *(uint *)((int)local_d8 + iVar5) = puVar7[6];
      puVar7 = puVar7 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar3);
  }
  if (((longlong)
       ((longlong)((int)uVar1 >> 0x1f) - ((longlong)((int)uVar1 >> 0x1f) ^ (ulonglong)uVar1) << 0x20
       ) < 0) && (iVar5 = FUN_00647ed0(uVar1,local_e0), iVar5 != 0)) {
    printf(*(char **)(puVar4 + -0x7e50),iVar5);
  }
  iVar5 = FUN_00647ed0(uVar2,local_dc);
  if (iVar5 != 0) {
    iVar5 = printf(*(char **)(puVar4 + -0x7e48),iVar5);
  }
  return iVar5;
}


// 0x062ae84 (0x1a4 bytes)
double FUN_0062ae84(uint param_1)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  
  puVar3 = PTR_PTR_0071b030;
  fVar1 = *(float *)(PTR_PTR_0071b030 + -0x7fac);
  if ((param_1 & 1) != 0) {
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7ee0) + 4));
    fVar1 = (float)(dVar7 + (double)*(float *)(puVar3 + -0x7fac));
  }
  dVar7 = (double)fVar1;
  if ((param_1 & 2) != 0) {
    dVar6 = (double)FUN_00640ccc(**(undefined4 **)(puVar3 + -0x7ee0));
    dVar7 = (double)(float)(dVar7 + dVar6);
  }
  if ((param_1 & 4) != 0) {
    iVar2 = *(int *)(puVar3 + -0x7ee0);
    dVar6 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 8));
    dVar6 = (double)(float)(dVar7 + dVar6);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0xc));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x10));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x14));
    dVar7 = (double)(float)(dVar6 + dVar7);
  }
  if ((param_1 & 8) != 0) {
    dVar6 = (double)FUN_00640ccc(*(undefined4 *)(*(int *)(puVar3 + -0x7ee0) + 0x18));
    dVar7 = (double)(float)(dVar7 + dVar6);
    lVar5 = 8;
    piVar4 = *(int **)(puVar3 + -0x7fd4);
    do {
      if (*piVar4 != 0) {
        dVar7 = (double)(float)(dVar7 + (double)*(float *)(*(int *)(*piVar4 + 0x18) + 0x70));
      }
      lVar5 = lVar5 + -1;
      piVar4 = piVar4 + 4;
    } while (lVar5 != 0);
  }
  if ((param_1 & 0x10) != 0) {
    iVar2 = *(int *)(puVar3 + -0x7ee0);
    dVar6 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x1c));
    dVar6 = (double)(float)(dVar7 + dVar6);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x24));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x20));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(1);
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(2);
    dVar7 = (double)(float)(dVar6 + dVar7);
  }
  return dVar7;
}


// 0x062b028 (0xe0 bytes)
// strings: 0066e200: 'snd_SynthIsVoiceContextFinished(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

uint snd_SynthIsVoiceContextFinished(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar3 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e40));
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar4 = 0;
  if (iVar1 != 0) {
    puVar2 = *(uint **)(iVar1 + 0x14);
    if (puVar2[9] == *(uint *)(*(int *)(iVar1 + 0x10) + 0x10)) {
      sync(1);
      uVar4 = (*puVar2 ^ 1) & 1;
    }
    else {
      sync(1);
      if (((*puVar2 & 1) != 0) ||
         (*(float *)(*(int *)(iVar1 + 0x10) + 0xc) < **(float **)(puVar3 + -0x7f88))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// 0x062b108 (0xa8 bytes)
void FUN_0062b108(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  GPiece<4> local_30;
  int local_2c [5];
  
  iVar1 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c),local_30,local_2c);
  if (-1 < iVar1) {
    if (param_2 == 0) {
      puVar2 = (undefined4 *)(local_2c[0] + 0x10 + *(int *)(local_2c[0] + 8) * 4);
    }
    else {
      puVar2 = (undefined4 *)(local_2c[0] + 0x10);
    }
    *param_1 = *puVar2;
  }
  return;
}


// 0x062b1b8 (0xc8 bytes)
void FUN_0062b1b8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  GPiece<4> local_30;
  int local_2c [5];
  
  iVar3 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0),local_30,local_2c);
  if (-1 < iVar3) {
    if (param_2 == 0) {
      iVar3 = local_2c[0] + 0x10 + *(int *)(local_2c[0] + 8) * 4;
    }
    else {
      iVar3 = local_2c[0] + 0x10;
    }
    iVar4 = 0;
    lVar5 = 8;
    do {
      puVar1 = (undefined4 *)(iVar4 + iVar3);
      puVar2 = (undefined4 *)(iVar4 + param_1);
      iVar4 = iVar4 + 4;
      *puVar2 = *puVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}


// 0x062b288 (0x1f0 bytes)
// strings: 0066e290: 'voice->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e248: 'snd_SynthGetVoicePlaybackPosition(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066e2e8: 'voice->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e340: 'voice->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n'

int snd_SynthGetVoicePlaybackPosition(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<4> local_28;
  GPiece<4> local_24;
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e3c));
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  if (((*(uint **)(iVar4 + 0x14))[9] != *(uint *)(*(int *)(iVar4 + 0x10) + 0x10)) ||
     ((sync(1), (**(uint **)(iVar4 + 0x14) & 1) == 0 &&
      (**(float **)(puVar2 + -0x7f88) <= *(float *)(*(int *)(iVar4 + 0x10) + 0xc))))) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x68);
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      iVar5 = FUN_006487c0(iVar4,local_28,local_24);
      uVar3 = uRam00000010;
      iVar4 = iRam00000014;
      if (iVar5 != 0) {
        printf(*(char **)(puVar2 + -0x7e38),iVar5);
        uVar3 = uRam00000010;
        iVar4 = iRam00000014;
      }
    }
    else if (cVar1 == '\x04') {
      iVar5 = FUN_006487c0(iVar4,local_2c,local_24);
      uVar3 = uRam00000010;
      iVar4 = iRam00000014;
      if (iVar5 != 0) {
        printf(*(char **)(puVar2 + -0x7e34),iVar5);
        uVar3 = uRam00000010;
        iVar4 = iRam00000014;
      }
    }
    else {
      iVar4 = FUN_006487c0(iVar4,local_30,local_24);
      if (iVar4 != 0) {
        printf(*(char **)(puVar2 + -0x7e30),iVar4);
      }
      uVar3 = uRam00000038;
      iVar4 = iRam00000018;
      if (iRam00000000 == 0) {
        iVar4 = iRam0000001c - iRam0000000c;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  return iVar4;
}


// 0x062b484 (0x1d0 bytes)
// strings: 0066e3e8: 'voice->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e290: 'voice->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e2e8: 'voice->GetModuleStates( kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e3a0: 'snd_SynthGetVoicePlaybackLength(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

undefined4 snd_SynthGetVoicePlaybackLength(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  GPiece<4> local_20;
  GPiece<4> local_1c;
  GPiece<4> local_18;
  GPiece<4> local_14;
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e2c));
  }
  iVar3 = *(int *)(param_1 + 0x6c);
  if (((*(uint **)(iVar3 + 0x14))[9] == *(uint *)(*(int *)(iVar3 + 0x10) + 0x10)) &&
     ((sync(1), (**(uint **)(iVar3 + 0x14) & 1) != 0 ||
      (*(float *)(*(int *)(iVar3 + 0x10) + 0xc) < **(float **)(puVar2 + -0x7f88))))) {
    cVar1 = *(char *)(param_1 + 0x68);
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      iVar3 = FUN_006487c0(iVar3,local_18,local_14);
      if (iVar3 != 0) {
        printf(*(char **)(puVar2 + -0x7e38),iVar3);
      }
    }
    else {
      if (cVar1 != '\x04') {
        iVar3 = FUN_006487c0(iVar3,local_20,local_14);
        if (iVar3 != 0) {
          printf(*(char **)(puVar2 + -0x7e28),iVar3);
        }
        return uRam0000003c;
      }
      iVar3 = FUN_006487c0(iVar3,local_1c,local_14);
      if (iVar3 != 0) {
        printf(*(char **)(puVar2 + -0x7e34),iVar3);
      }
    }
    return uRam00000018;
  }
  return 0;
}


// 0x062b660 (0x3ec bytes)
// strings: 0066e440: '%s(%d) : snd_SynthLR1Create(BOOMRANG): Too many LR1 instances!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066e480: 'LR1:%d' | 0066e4c8: 'brb_InsertRackUnitLast( g_effectList[slot].pRackUnit ) failed (returned %i)\n' | 0066e590: 'pReverbVoice->LockPluginParams(&pParams) failed (returned %i)\n' | 0066e518: 'g_effectList[slot].pRackUnit->AllocVoice( MaxPriority, &g_effectList[slot].pVoice) failed (returned %i)\n' | 0066e488: 'snd_SynthLR1Create(BRB): Failed to create LR1 instance!\n'

/* WARNING: Removing unreachable block (ram,0x0062b824) */
/* WARNING: Removing unreachable block (ram,0x0062b9e4) */
/* WARNING: Removing unreachable block (ram,0x0062b8a4) */
/* WARNING: Removing unreachable block (ram,0x0062b8fc) */

undefined4 snd_SynthLR1Create(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  GPiece<4> local_70;
  GPiece<4> local_6c;
  GPiece<24> auStack_68;
  
  puVar3 = PTR_PTR_0071b030;
  iVar4 = 0;
  piVar7 = *(int **)(PTR_PTR_0071b030 + -0x7fd4);
  lVar9 = 8;
  piVar6 = piVar7;
  do {
    if (*piVar6 == 0) {
      if (-1 < iVar4) {
        iVar8 = iVar4 * 0x10;
        FUN_005cd198(auStack_68,0x10,*(undefined4 *)(PTR_PTR_0071b030 + -0x7e20),iVar4);
        puVar1 = *(undefined4 **)(puVar3 + -0x7f94);
        piVar7 = piVar7 + iVar4 * 4;
        uVar2 = *puVar1;
        *puVar1 = 2;
        iVar4 = FUN_00641b58(local_70,1,0,0,0,0,piVar7 + 1,auStack_68);
        *puVar1 = uVar2;
        if (iVar4 < 0) {
          snd_Printf((char)*(undefined4 *)(puVar3 + -0x7e1c));
          return 0;
        }
        iVar4 = *(int *)(puVar3 + -0x7fd4);
        iVar5 = FUN_00641a3c(*(undefined4 *)(iVar8 + iVar4 + 4),0,0);
        if (iVar5 != 0) {
          printf(*(char **)(puVar3 + -0x7e18),iVar5);
        }
        iVar5 = FUN_0064547c(*(undefined4 *)(iVar8 + iVar4 + 4),100,piVar7,0);
        if (iVar5 != 0) {
          printf(*(char **)(puVar3 + -0x7e14),iVar5);
        }
        iVar5 = FUN_00647ed0(*(undefined4 *)(iVar4 + iVar8),local_6c);
        if (iVar5 != 0) {
          printf(*(char **)(puVar3 + -0x7e10),iVar5);
        }
        piVar7 = *(int **)(puVar3 + -0x7fcc);
        uVar2 = *(undefined4 *)(iVar4 + iVar8);
        iVar5 = *piVar7;
        *(undefined4 *)(iVar8 + iVar4 + 8) = 0xffffffff;
        *piVar7 = iVar5 + 1;
        return uVar2;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e24));
  return 0;
}


// 0x062ba54 (0x2bc bytes)
// strings: 0066e610: 'snd_SynthQueueVoiceBuffer(): %s(%d) : Invalid buffer!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066e648: 'snd_SynthQueueVoiceBuffer(): No available buffer!\n' | 0066e5d0: 'snd_SynthQueueVoiceBuffer(): %s(%d) : Invalid voice context!\n'

undefined4
snd_SynthQueueVoiceBuffer
          (int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<4> local_58;
  GPiece<4> local_54;
  undefined4 *local_50 [4];
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7de4));
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7de0));
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  iVar3 = snd_SynthGetFreeVoiceBufferId(param_1);
  if (iVar3 < 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ddc));
    uVar2 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x68) - 2 < 3) {
      FUN_00648730(uVar2,local_5c,local_50);
      if (local_50[0] == (undefined4 *)0x0) {
        return 0;
      }
      local_50[0][0xb] = 2;
      local_50[0][1] = param_2;
      *local_50[0] = 0;
      local_50[0][2] = param_3;
      local_50[0][6] = param_4;
      local_50[0][7] = param_5;
      FUN_006486f8(uVar2,local_58);
    }
    else {
      uVar5 = param_3 >> 1;
      if (*(byte *)(param_1 + 0x68) != 1) {
        uVar5 = (param_3 >> 4) * 0x1c;
      }
      FUN_00648730(uVar2,local_54,local_50);
      if (local_50[0] == (undefined4 *)0x0) {
        return 0;
      }
      local_50[0][9] = 2;
      local_50[0][2] = 0xffffffff;
      local_50[0][3] = uVar5;
      local_50[0][7] = param_2;
      local_50[0][6] = 0;
      local_50[0][8] = param_3;
      local_50[0][1] = uVar5;
      local_50[0][5] = param_2;
      local_50[0][4] = 0;
      FUN_006486f8(uVar2,local_60);
    }
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) ^ 1;
    uVar4 = FUN_00640c9c();
    uVar2 = 1;
    *(undefined4 *)(param_1 + 100) = uVar4;
  }
  return uVar2;
}


// 0x062bd20 (0x98 bytes)
void FUN_0062bd20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  GPiece<4> local_20;
  int local_1c [3];
  
  iVar3 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0),local_20,local_1c);
  if (-1 < iVar3) {
    iVar3 = 0;
    lVar4 = 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + local_1c[0] + 0x120);
      puVar2 = (undefined4 *)(iVar3 + param_1);
      iVar3 = iVar3 + 4;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


// 0x062bdc0 (0x70 bytes)
void FUN_0062bdc0(undefined4 *param_1)

{
  int iVar1;
  GPiece<4> local_20;
  int local_1c [3];
  
  iVar1 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c),local_20,local_1c);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(local_1c[0] + 0x140);
  }
  return;
}


// 0x062be38 (0x4c0 bytes)
// strings: 0066e740: 'Unknown (%d)' | 0066e750: '\t\tm_dataType = %s\n' | 0066e768: '\t\tm_gain     = %f\n' | 0066e780: '\t\tm_lfeGain  = %f\n' | 0066e798: '\t\tm_azim     = %d\n' | 0066e7b0: '\t\tm_focus    = %d\n' | 0066e7c8: '\t\tm_flags    = 0x%X\n' | 0066e7e0: 'true' (raw) | 0066e7e8: 'false' | 0066e7f0: '\t\tm_dirty    = %s\n' | 0066e808: '\t\tm_pSynthVoice  = 0x%X\n' | 0066e828: '\t\tm_pSubmixVoice = 0x%X\n' | 0066e848: '\n\t\tSynth voice 0x%X PARAMS...\n' | 0066e868: '\t\t\teventBits = 0x%X\n' | 0066e880: '\t\t\teaWrkArea = 0x%X\n' | 0066e898: '\t\t\ttime      = %f\n' | 0066e8b0: '\t\t\tkeyOnCounter = %d\n' | 0066e8c8: '\t\t\tpitch.factor = %f\n' | 0066e8e0: '\n\t\tSynth voice 0x%X STATES...\n' | 0066e900: '\t\t\tstatusBits = 0x%X\n' | 0066e918: '\t\t\teaBase     = 0x%X\n' | 0066e930: '\t\t\tindex      = %d\n' | 0066e948: '\t\t\ttime       = %f\n' | 0066e960: '\t\t\tbadParamMID         = %d\n' | 0066e980: '\t\t\tbadParamModuleDepth = %d\n' | 0066e9a0: '\t\t\tbadContextualU32    = %d\n' | 0066e9c0: '\t\t\twrkAreaSize         = %d\n' | 0066e9e0: '\t\t\tkeyOnCounter        = %d\n' | 0066ea00: '\t\t\tsampler.m_pitch     = %f\n' | 0066ea20: '\n\t\tSubmix voice 0x%X PARAMS...\n'

/* WARNING: Removing unreachable block (ram,0x0062c020) */

void FUN_0062be38(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  GPiece<4> local_80;
  GPiece<4> local_7c;
  GPiece<64> local_78;
  
  puVar5 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7dd8));
  }
  else {
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0x70);
    bVar1 = *(byte *)(param_1 + 0x68);
    bVar2 = *(byte *)(param_1 + 0x68);
    if (bVar2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0062c2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)((uint)bVar2 * 4 + *(int *)(PTR_PTR_0071b030 + -0x7dd4)) +
                *(int *)(PTR_PTR_0071b030 + -0x7dd4)))();
      return;
    }
    FUN_005cd198(local_78,0x20,*(undefined4 *)(PTR_PTR_0071b030 + -0x7dbc),bVar2);
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7db8));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7db4));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7db0));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7dac));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7da8));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7da4));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d98));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d94));
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d90));
    if (iVar3 != 0) {
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d8c));
      sync(1);
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d88));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d84));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d80));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d7c));
      FUN_00648820(iVar3,local_80,local_7c);
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d74));
      sync(1);
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d70));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d6c));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d68));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d64));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d60));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d5c));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d58));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d54));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d50));
      if ((*(uint *)(*(int *)(*(int *)(iVar3 + 0x18) + 0x18) + 0x244) | 1) * 8 +
          *(int *)(iVar3 + 0x14) != -0x28) {
        if (bVar1 - 2 < 3) {
          snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d4c));
        }
        else {
          snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d4c));
        }
      }
    }
    if (iVar4 != 0) {
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d48));
      sync(1);
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d88));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d84));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d80));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d7c));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d44));
      sync(1);
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d70));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d6c));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d68));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d64));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d60));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d5c));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d58));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d54));
      snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d50));
    }
  }
  return;
}


// 0x062c3a0 (0x150 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062c3a0(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0x24) = param_3 & (int)~param_2 >> 0x1f;
  if (uVar5 != 0) {
    uVar6 = (ulonglong)uVar5;
    iVar3 = 0;
    if (uVar5 == 0) {
      uVar6 = 1;
    }
    do {
      iVar2 = iVar3 + param_4;
      iVar4 = param_1 + iVar3;
      iVar3 = iVar3 + 4;
      uVar5 = 0;
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar2 + 0x84) % 0x168;
      if (-1 < *(int *)(iVar2 + 0x84)) {
        uVar5 = *(uint *)(iVar2 + 0x90) % 0x168;
      }
      *(uint *)(iVar4 + 0x3c) = uVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x6a) = 1;
  return;
}


// 0x062c4f0 (0x3c bytes)
void FUN_0062c4f0(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  FUN_005e387c();
  return;
}


// 0x062c52c (0x13ec bytes)
// strings: 0066ea60: 'scream_plugin_pack_mp3' | 0066eb20: 'scream_plugin_pack_synth_submix' | 0066ec08: 'scream_plugin_pack_aux_master' | 0066ece8: 'mp3_sampler_surround' | 0066eda8: 'Master Speakers' | 0066f2d8: 'Premaster Submixes' | 0066f410: 's_rackUnits[kRackUnit_PreMasteringGroupSubmix]->AllocVoice( MaxPriority, &s_premasterVoices[j] ) failed (returned %i)\n' | 0066f498: 's_premasterVoices[j]->ConnectPort( OutputPort, s_masterVoicePrimary ) failed (returned %i)\n' | 0066f610: 'Aux Busses' | 0066f738: 's_rackUnits[kRackUnit_AuxBusses]->AllocVoice(MaxPriority, &s_auxBussVoices[i]) failed (returned %i)\n' | 0066fc38: 'MP3 Stereo Sampler' | 0066fdb0: 's_rackUnits[kRackUnit_SamplerMp3Stereo]->AllocVoice(MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 0066fe48: 'MP3 Mono Sampler' | 0066ffb8: 's_rackUnits[kRackUnit_SamplerMp3Mono]->AllocVoice(MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 00670050: 'PCMI16 Sampler' | 006701b0: 's_rackUnits[kRackUnit_SamplerPcmI16]->AllocVoice(MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 00670248: 'ADPCM Sampler' | 006703a0: 's_rackUnits[kRackUnit_SamplerAdpcm]->AllocVoice(MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 0066f5c0: 's_premasterVoices[j]->UnlockPluginParamsAndKeyOn() failed (returned %i)\n' | 0066f578: 's_premasterVoices[j]->LockPluginParams( &pp ) failed (returned %i)\n' | 0066f508: 's_premasterVoices[j]->ConnectPort( SidePort1, s_masterVoiceSecondary ) failed (returned %i)\n' | 0066f620: 'brb_CreateRackUnit(brbSID(BRBSID_AUX_SINK_MONO_MONO), MAX_LR1_INSTANCES, 0L, NULL, NULL, NULL, &s_rackUnits[kRackUnit_AuxBusses], "Aux Busses") failed (returned' | 0066f6c8: 'brb_InsertRackUnit( s_rackUnits[kRackUnit_AuxBusses], NULL, InsertBefore ) failed (returned %i)\n' | 0066ed00: 'brb_RegisterPluginPackFromMem(_binary_mp3_sampler_surround_elf_start, (U32) _binary_mp3_sampler_surround_elf_size, "mp3_sampler_surround") failed (returned %i)\n' | 0066ec28: 'brb_RegisterPluginPackFromMem(_binary_scream_plugin_pack_aux_master_elf_start, (U32) _binary_scream_plugin_pack_aux_master_elf_size, "scream_plugin_pack_aux_mas' | 0066eb40: 'brb_RegisterPluginPackFromMem(_binary_scream_plugin_pack_synth_submix_elf_start, (U32) _binary_scream_plugin_pack_synth_submix_elf_size, "scream_plugin_pack_syn' | 0066ea78: 'brb_RegisterPluginPackFromMem(_binary_scream_plugin_pack_mp3_elf_start, (U32) _binary_scream_plugin_pack_mp3_elf_size, "scream_plugin_pack_mp3") failed (returne' | 0066f7a8: 'MP3 Surround Submix' | 0066f8f8: 's_rackUnits[kRackUnit_SubmixMp3Surround]->AllocVoice(MaxPriority, s_voiceContexts[contextIndex].GetSubmixVoiceAddr()) failed (returned %i)\n' | 0066f990: 'MP3 Surround Sampler'

uint FUN_0062c52c(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  GPiece<4> local_f0;
  GPiece<4> local_ec;
  float *local_e8;
  GPiece<4> local_e4;
  GPiece<4> local_e0;
  GPiece<4> local_dc;
  GPiece<4> local_d8;
  GPiece<4> local_d4;
  GPiece<4> local_d0;
  GPiece<4> local_cc;
  GPiece<4> local_c8;
  GPiece<12> local_c4;
  
  puVar11 = PTR_PTR_0071b030;
  uVar13 = FUN_00640d14();
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ebc),*(undefined4 *)(puVar11 + -0x7d40),
                        *(undefined4 *)(puVar11 + -0x7d3c));
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7d38),iVar14);
  }
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ec4),*(undefined4 *)(puVar11 + -0x7d34),
                        *(undefined4 *)(puVar11 + -0x7d30));
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7d2c),iVar14);
  }
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ecc),*(undefined4 *)(puVar11 + -0x7d28),
                        *(undefined4 *)(puVar11 + -0x7d24));
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7d20),iVar14);
  }
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ed4),*(undefined4 *)(puVar11 + -0x7d1c),
                        *(undefined4 *)(puVar11 + -0x7d18));
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7d14),iVar14);
  }
  puVar5 = *(uint **)(puVar11 + -0x7e0c);
  uVar12 = *puVar5;
  iVar14 = FUN_00641b58(local_ec,1,0,0,0,0,*(undefined4 *)(puVar11 + -0x7d10),
                        *(undefined4 *)(puVar11 + -0x7d0c));
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7d08),iVar14);
  }
  puVar6 = *(undefined4 **)(puVar11 + -0x7ee0);
  iVar14 = FUN_00641a3c(puVar6[9],0,1);
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7d04),iVar14);
  }
  puVar7 = *(undefined4 **)(puVar11 + -0x7fa0);
  iVar14 = FUN_0064547c(puVar6[9],100,puVar7,0);
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -32000),iVar14);
  }
  iVar14 = idol::brbVoice_ConnectPort(*puVar7,1,1);
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7cfc),iVar14);
  }
  iVar14 = FUN_00647ed0(*puVar7,&local_e8);
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7cf8),iVar14);
  }
  fVar22 = (float)(uVar13 - (2 < uVar13));
  fVar23 = (float)(uint)(2 < uVar13);
  if (local_e8 != (float *)0x0) {
    fVar20 = 4.2039e-45;
    if ((uVar12 & 0x40) == 0) {
      fVar20 = (float)(uVar12 >> 5 & 1);
    }
    fVar1 = *(float *)(puVar11 + -0x7fac);
    fVar2 = *(float *)(puVar11 + -0x7f64);
    fVar3 = *(float *)(puVar11 + -0x7cec);
    fVar4 = *(float *)(puVar11 + -0x7ce4);
    *local_e8 = *(float *)(puVar11 + -0x7cf4);
    local_e8[3] = fVar20;
    local_e8[0x13] = fVar3;
    local_e8[1] = 1.12104e-44;
    local_e8[0x14] = fVar4;
    local_e8[2] = fVar2;
    iVar14 = 0;
    local_e8[4] = fVar2;
    lVar27 = 0x18;
    local_e8[5] = 0.0;
    local_e8[9] = 0.0;
    local_e8[0xd] = 0.0;
    local_e8[0x11] = 0.0;
    local_e8[6] = fVar2;
    local_e8[10] = fVar2;
    local_e8[0xe] = fVar2;
    local_e8[0x12] = fVar2;
    local_e8[7] = fVar3;
    local_e8[0xb] = fVar3;
    local_e8[0xf] = fVar3;
    local_e8[8] = fVar4;
    local_e8[0xc] = fVar4;
    local_e8[0x10] = fVar4;
    local_e8[0x15] = 0.0;
    local_e8[0x16] = 0.0;
    local_e8[0x17] = 0.0;
    local_e8[0x18] = fVar1;
    local_e8[0x19] = fVar1;
    local_e8[0x1a] = fVar2;
    local_e8[0x1b] = fVar1;
    local_e8[0x1c] = fVar1;
    fVar20 = *(float *)(puVar11 + -0x7cdc);
    local_e8[0x1d] = fVar1;
    local_e8[0x24] = fVar20;
    local_e8[0x39] = 0.0;
    local_e8[0x1e] = fVar20;
    local_e8[0x1f] = fVar1;
    local_e8[0x20] = fVar2;
    local_e8[0x21] = fVar1;
    local_e8[0x22] = fVar1;
    local_e8[0x23] = fVar1;
    do {
      iVar16 = iVar14 + 0xe8;
      iVar14 = iVar14 + 4;
      *(float *)((int)local_e8 + iVar16) = fVar1;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    fVar20 = *(float *)(puVar11 + -0x7cd4);
    fVar3 = *(float *)(puVar11 + -0x7e9c);
    uVar19 = *puVar7;
    local_e8[0x2b] = fVar20;
    local_e8[0x55] = 0.0;
    local_e8[0x34] = fVar1;
    local_e8[0x35] = fVar3;
    local_e8[0x37] = fVar2;
    local_e8[0x38] = 1.4013e-45;
    local_e8[0x25] = 1.4013e-45;
    local_e8[0x26] = 1.4013e-45;
    local_e8[0x27] = fVar1;
    local_e8[0x28] = fVar20;
    local_e8[0x29] = fVar1;
    local_e8[0x2a] = fVar1;
    local_e8[0x2c] = fVar1;
    local_e8[0x2d] = 0.0;
    local_e8[0x2e] = fVar1;
    local_e8[0x2f] = fVar1;
    local_e8[0x30] = 0.0;
    local_e8[0x33] = 1.4013e-45;
    local_e8[0x31] = fVar22;
    local_e8[0x32] = fVar23;
    local_e8[0x36] = fVar2;
    iVar14 = FUN_00647fa0(uVar19,0,0);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7ccc),iVar14);
    }
  }
  if ((*puVar5 & 0x80) != 0) {
    iVar14 = FUN_00641b58(local_e4,1,0,0,0,0,*(undefined4 *)(puVar11 + -0x7cc8),
                          *(undefined4 *)(puVar11 + -0x7cc4));
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7cc0),iVar14);
    }
    iVar14 = FUN_00641a3c(puVar6[8],0,1);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7cbc),iVar14);
    }
    puVar24 = *(undefined4 **)(puVar11 + -0x7f8c);
    iVar14 = FUN_0064547c(puVar6[8],100,puVar24,0);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7cb8),iVar14);
    }
    iVar14 = idol::brbVoice_ConnectPort(*puVar24,1,2);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7cb4),iVar14);
    }
    iVar14 = FUN_00647ed0(*puVar24,&local_e8);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7cb0),iVar14);
    }
    if (local_e8 != (float *)0x0) {
      fVar20 = *(float *)(puVar11 + -0x7f64);
      uVar19 = *puVar24;
      local_e8[3] = *(float *)(puVar11 + -0x7cd4);
      local_e8[0xb] = 0.0;
      local_e8[1] = 1.4013e-45;
      local_e8[4] = 0.0;
      local_e8[6] = fVar20;
      local_e8[5] = fVar20;
      *local_e8 = 1.4013e-45;
      local_e8[2] = 0.0;
      local_e8[7] = 0.0;
      iVar14 = FUN_00647fa0(uVar19,0,0);
      if (iVar14 != 0) {
        printf(*(char **)(puVar11 + -0x7cac),iVar14);
      }
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7e68);
  uVar13 = *puVar5;
  if (uVar13 != 0) {
    if (0x10 < uVar13) {
      uVar13 = 0x10;
    }
    *puVar5 = uVar13;
    FUN_006425f4(3,local_c4);
    FUN_00643f38(0,1);
    iVar14 = FUN_00641b58(local_e0,*puVar5,0,0,0,0,*(undefined4 *)(puVar11 + -0x7ca8),
                          *(undefined4 *)(puVar11 + -0x7ca4));
    if (iVar14 == 0) {
      iVar14 = FUN_00641a3c(puVar6[7],0,1);
      if (iVar14 != 0) goto LAB_0062d71c;
LAB_0062c924:
      uVar13 = *puVar5;
    }
    else {
      printf(*(char **)(puVar11 + -0x7ca0),iVar14);
      iVar14 = FUN_00641a3c(puVar6[7],0,1);
      if (iVar14 == 0) goto LAB_0062c924;
LAB_0062d71c:
      printf(*(char **)(puVar11 + -0x7c9c),iVar14);
      uVar13 = *puVar5;
    }
    if (uVar13 != 0) {
      puVar24 = *(undefined4 **)(puVar11 + -0x7f90);
      uVar13 = 0;
      piVar8 = *(int **)(puVar11 + -0x7f8c);
      dVar33 = (double)*(float *)(puVar11 + -0x7f64);
      dVar35 = (double)*(float *)(puVar11 + -0x7cec);
      dVar34 = (double)*(float *)(puVar11 + -0x7ce4);
      dVar32 = (double)*(float *)(puVar11 + -0x7cdc);
      dVar28 = (double)*(float *)(puVar11 + -0x7e9c);
      dVar30 = (double)*(float *)(puVar11 + -0x7c88);
      dVar29 = (double)*(float *)(puVar11 + -0x7c80);
      dVar31 = (double)*(float *)(puVar11 + -0x7c78);
      puVar25 = puVar24;
      do {
        iVar14 = FUN_0064547c(puVar6[7],100,puVar25,0);
        if (iVar14 == 0) {
          iVar14 = idol::brbVoice_ConnectPort(*puVar24,1,*puVar7);
        }
        else {
          printf(*(char **)(puVar11 + -0x7c98),iVar14);
          iVar14 = idol::brbVoice_ConnectPort(*puVar24,1,*puVar7);
        }
        if (iVar14 != 0) {
          printf(*(char **)(puVar11 + -0x7c94),iVar14);
        }
        if ((*piVar8 != 0) && (iVar14 = idol::brbVoice_ConnectPort(*puVar24,3,*piVar8), iVar14 != 0)
           ) {
          printf(*(char **)(puVar11 + -0x7c90),iVar14);
        }
        iVar14 = FUN_00647ed0(*puVar24,&local_e8);
        if (iVar14 != 0) {
          printf(*(char **)(puVar11 + -0x7c8c),iVar14);
        }
        *local_e8 = (float)dVar33;
        local_e8[1] = 0.0;
        local_e8[5] = 0.0;
        local_e8[9] = 0.0;
        local_e8[0xd] = 0.0;
        local_e8[2] = (float)dVar33;
        local_e8[6] = (float)dVar33;
        local_e8[10] = (float)dVar33;
        local_e8[0xe] = (float)dVar33;
        local_e8[3] = (float)dVar35;
        local_e8[7] = (float)dVar35;
        local_e8[0xb] = (float)dVar35;
        local_e8[0xf] = (float)dVar35;
        local_e8[4] = (float)dVar34;
        local_e8[8] = (float)dVar34;
        local_e8[0xc] = (float)dVar34;
        local_e8[0x10] = (float)dVar34;
        local_e8[0x11] = 0.0;
        local_e8[0x12] = 0.0;
        local_e8[0x13] = 0.0;
        local_e8[0x14] = 0.0;
        local_e8[0x15] = (float)dVar30;
        local_e8[0x16] = (float)dVar29;
        local_e8[0x17] = 0.0;
        local_e8[0x18] = (float)dVar31;
        local_e8[0x19] = 0.0;
        local_e8[0x1a] = (float)dVar32;
        local_e8[0x1b] = (float)dVar30;
        local_e8[0x1c] = (float)dVar29;
        local_e8[0x1d] = 0.0;
        local_e8[0x1e] = (float)dVar31;
        local_e8[0x1f] = 0.0;
        local_e8[0x20] = (float)dVar32;
        uVar19 = *puVar24;
        local_e8[0x2e] = 3.57331e-43;
        local_e8[0x33] = 0.0;
        local_e8[0x21] = 0.0;
        local_e8[0x22] = 0.0;
        local_e8[0x23] = 0.0;
        local_e8[0x24] = 0.0;
        local_e8[0x27] = 1.4013e-45;
        local_e8[0x25] = fVar22;
        local_e8[0x26] = fVar23;
        local_e8[0x28] = 0.0;
        local_e8[0x29] = (float)dVar28;
        local_e8[0x2a] = (float)dVar33;
        local_e8[0x2b] = (float)dVar33;
        local_e8[0x2d] = 1.4013e-45;
        local_e8[0x2f] = 0.0;
        local_e8[0x2c] = 0.0;
        iVar14 = FUN_00647fa0(uVar19,0,0);
        if (iVar14 != 0) {
          printf(*(char **)(puVar11 + -0x7c70),iVar14);
        }
        uVar13 = uVar13 + 1;
        puVar25 = puVar25 + 1;
        puVar24 = puVar24 + 1;
      } while (uVar13 < *puVar5);
    }
  }
  iVar14 = FUN_00641b58(local_dc,8,0,0,0,0,*(undefined4 *)(puVar11 + -0x7c6c),
                        *(undefined4 *)(puVar11 + -0x7c68));
  if (iVar14 == 0) {
    iVar14 = FUN_00641a3c(puVar6[6],0,0);
  }
  else {
    printf(*(char **)(puVar11 + -0x7c64),iVar14);
    iVar14 = FUN_00641a3c(puVar6[6],0,0);
  }
  if (iVar14 != 0) {
    printf(*(char **)(puVar11 + -0x7c60),iVar14);
  }
  FUN_006425f4(2,local_c4);
  uVar26 = 0;
  FUN_00643f38(0,1);
  uVar13 = *(uint *)(puVar11 + -0x7f40);
  uVar12 = *(uint *)(puVar11 + -0x7ee0);
  do {
    while (iVar14 = FUN_0064547c(puVar6[6],100,
                                 (uVar26 & 0x3fffffff) * 4 + (ulonglong)uVar13 & 0xffffffff,0),
          iVar14 == 0) {
      uVar26 = uVar26 + 1;
      if (uVar26 == 8) goto LAB_0062cc1c;
    }
    uVar26 = uVar26 + 1;
    printf(*(char **)(puVar11 + -0x7c5c),iVar14);
  } while (uVar26 != 8);
LAB_0062cc1c:
  puVar5 = *(uint **)(puVar11 + -0x7c58);
  if (*puVar5 == 0) {
LAB_0062cc2c:
    bVar21 = false;
    uVar13 = 0;
  }
  else {
    iVar14 = FUN_00641b58(local_c8,*puVar5,0,0,0,0,(ulonglong)uVar12 + 0x14,
                          *(undefined4 *)(puVar11 + -0x7c54));
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7c50),iVar14);
    }
    iVar14 = FUN_00641a3c(puVar6[5],0,0);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7c4c),iVar14);
    }
    if (*puVar5 == 0) goto LAB_0062cc2c;
    uVar12 = 0;
    piVar8 = *(int **)(puVar11 + -0x7ee8);
    iVar14 = 0;
    uVar13 = *(uint *)(puVar11 + -0x7ee0);
    do {
      while (iVar16 = FUN_0064547c(puVar6[5],100,iVar14 + *piVar8 + 0x70,0), iVar16 == 0) {
        uVar12 = uVar12 + 1;
        uVar18 = *puVar5;
        iVar14 = iVar14 + 0x74;
        if (uVar18 <= uVar12) goto LAB_0062d3c4;
      }
      uVar12 = uVar12 + 1;
      printf(*(char **)(puVar11 + -0x7c48),iVar16);
      uVar18 = *puVar5;
      iVar14 = iVar14 + 0x74;
    } while (uVar12 < uVar18);
LAB_0062d3c4:
    if (uVar18 == 0) goto LAB_0062cc2c;
    iVar14 = FUN_00641b58(local_f0,uVar18,0,*(undefined4 *)(puVar11 + -0x7c44),0,0,
                          (ulonglong)uVar13 + 0x10,*(undefined4 *)(puVar11 + -0x7c40));
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7c3c),iVar14);
    }
    iVar14 = FUN_00641a3c(puVar6[4],0,0);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7c38),iVar14);
    }
    bVar21 = true;
    uVar13 = 0;
    if (*puVar5 != 0) {
      iVar16 = 0;
      iVar14 = *(int *)(puVar11 + -0x7fc0);
      piVar10 = *(int **)(puVar11 + -0x7ee8);
      do {
        iVar17 = FUN_0064547c(puVar6[4],100,iVar16 + *piVar8 + 0x6c,0);
        if (iVar17 == 0) {
          iVar17 = idol::brbVoice_ConnectPort
                             (*(undefined4 *)(iVar16 + *piVar10 + 0x6c),1,
                              *(undefined4 *)(iVar16 + *piVar10 + 0x70));
        }
        else {
          printf(*(char **)(puVar11 + -0x7c34),iVar17);
          iVar17 = idol::brbVoice_ConnectPort
                             (*(undefined4 *)(iVar16 + *piVar10 + 0x6c),1,
                              *(undefined4 *)(iVar16 + *piVar10 + 0x70));
        }
        if (iVar17 != 0) {
          printf(*(char **)(puVar11 + -0x7c30),iVar17);
        }
        *(undefined1 *)(iVar16 + *piVar10 + 0x68) = 4;
        iVar17 = *(int *)(iVar14 + 0x34);
        iVar15 = *piVar10;
        if (*(int *)(iVar14 + 0x38) != iVar17) {
          *(int *)(iVar14 + 0x34) = iVar17 + 1;
          *(int *)(iVar17 * 4 + *(int *)(iVar14 + 0x30)) = iVar16 + iVar15;
        }
        uVar13 = uVar13 + 1;
        iVar16 = iVar16 + 0x74;
      } while (uVar13 < *puVar5);
      bVar21 = true;
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7c2c);
  if (*puVar5 != 0) {
    uVar19 = 0;
    if (!bVar21) {
      uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
    }
    iVar14 = FUN_00641b58(local_d8,*puVar5,0,uVar19,0,0,*(undefined4 *)(puVar11 + -0x7c28),
                          *(undefined4 *)(puVar11 + -0x7c24));
    if (iVar14 == 0) {
      iVar14 = FUN_00641a3c(puVar6[3],0,0);
      if (iVar14 != 0) goto LAB_0062d838;
LAB_0062ccb4:
      uVar12 = *puVar5;
    }
    else {
      printf(*(char **)(puVar11 + -0x7c20),iVar14);
      iVar14 = FUN_00641a3c(puVar6[3],0,0);
      if (iVar14 == 0) goto LAB_0062ccb4;
LAB_0062d838:
      printf(*(char **)(puVar11 + -0x7c1c),iVar14);
      uVar12 = *puVar5;
    }
    bVar21 = true;
    if (uVar12 != 0) {
      piVar8 = *(int **)(puVar11 + -0x7ee8);
      iVar16 = 0;
      iVar14 = *(int *)(puVar11 + -0x7fc0);
      iVar17 = uVar13 * 0x74;
      do {
        iVar15 = FUN_0064547c(puVar6[3],100,iVar17 + *piVar8 + 0x6c,0);
        if (iVar15 != 0) {
          printf(*(char **)(puVar11 + -0x7c18),iVar15);
        }
        *(undefined1 *)(iVar17 + *piVar8 + 0x68) = 3;
        iVar15 = *(int *)(iVar14 + 0x28);
        iVar9 = *piVar8;
        if (*(int *)(iVar14 + 0x2c) != iVar15) {
          *(int *)(iVar14 + 0x28) = iVar15 + 1;
          *(int *)(iVar15 * 4 + *(int *)(iVar14 + 0x24)) = iVar9 + iVar17;
        }
        uVar12 = iVar16 + 1;
        iVar16 = iVar16 + 1;
        iVar17 = iVar17 + 0x74;
      } while (uVar12 < *puVar5);
      uVar13 = uVar13 + iVar16;
      bVar21 = true;
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7c14);
  if (*puVar5 != 0) {
    uVar19 = 0;
    if (!bVar21) {
      uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
    }
    iVar14 = FUN_00641b58(local_d4,*puVar5,0,uVar19,0,0,*(undefined4 *)(puVar11 + -0x7c10),
                          *(undefined4 *)(puVar11 + -0x7c0c));
    if (iVar14 == 0) {
      iVar14 = FUN_00641a3c(puVar6[2],0,0);
      if (iVar14 != 0) goto LAB_0062d798;
LAB_0062ce04:
      uVar12 = *puVar5;
    }
    else {
      printf(*(char **)(puVar11 + -0x7c08),iVar14);
      iVar14 = FUN_00641a3c(puVar6[2],0,0);
      if (iVar14 == 0) goto LAB_0062ce04;
LAB_0062d798:
      printf(*(char **)(puVar11 + -0x7c04),iVar14);
      uVar12 = *puVar5;
    }
    bVar21 = true;
    if (uVar12 != 0) {
      piVar8 = *(int **)(puVar11 + -0x7ee8);
      iVar16 = 0;
      iVar14 = *(int *)(puVar11 + -0x7fc0);
      iVar17 = uVar13 * 0x74;
      do {
        iVar15 = FUN_0064547c(puVar6[2],100,iVar17 + *piVar8 + 0x6c,0);
        if (iVar15 != 0) {
          printf(*(char **)(puVar11 + -0x7c00),iVar15);
        }
        *(undefined1 *)(iVar17 + *piVar8 + 0x68) = 2;
        iVar15 = *(int *)(iVar14 + 0x1c);
        iVar9 = *piVar8;
        if (*(int *)(iVar14 + 0x20) != iVar15) {
          *(int *)(iVar14 + 0x1c) = iVar15 + 1;
          *(int *)(iVar15 * 4 + *(int *)(iVar14 + 0x18)) = iVar9 + iVar17;
        }
        uVar12 = iVar16 + 1;
        iVar16 = iVar16 + 1;
        iVar17 = iVar17 + 0x74;
      } while (uVar12 < *puVar5);
      uVar13 = uVar13 + iVar16;
      bVar21 = true;
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7bfc);
  if (*puVar5 == 0) goto LAB_0062d024;
  uVar19 = 0;
  if (!bVar21) {
    uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
  }
  iVar14 = FUN_00641b58(local_d0,*puVar5,0,uVar19,0,0,*(undefined4 *)(puVar11 + -0x7bf8),
                        *(undefined4 *)(puVar11 + -0x7bf4));
  if (iVar14 == 0) {
    iVar14 = FUN_00641a3c(puVar6[1],0,0);
    if (iVar14 != 0) goto LAB_0062d7e8;
LAB_0062cf54:
    uVar12 = *puVar5;
  }
  else {
    printf(*(char **)(puVar11 + -0x7bf0),iVar14);
    iVar14 = FUN_00641a3c(puVar6[1],0,0);
    if (iVar14 == 0) goto LAB_0062cf54;
LAB_0062d7e8:
    printf(*(char **)(puVar11 + -0x7bec),iVar14);
    uVar12 = *puVar5;
  }
  bVar21 = true;
  if (uVar12 != 0) {
    piVar8 = *(int **)(puVar11 + -0x7ee8);
    iVar16 = 0;
    iVar14 = *(int *)(puVar11 + -0x7fc0);
    iVar17 = uVar13 * 0x74;
    do {
      iVar15 = FUN_0064547c(puVar6[1],100,iVar17 + *piVar8 + 0x6c,0);
      if (iVar15 != 0) {
        printf(*(char **)(puVar11 + -0x7be8),iVar15);
      }
      *(undefined1 *)(iVar17 + *piVar8 + 0x68) = 1;
      iVar15 = *(int *)(iVar14 + 0x10);
      iVar9 = *piVar8;
      if (*(int *)(iVar14 + 0x14) != iVar15) {
        *(int *)(iVar14 + 0x10) = iVar15 + 1;
        *(int *)(iVar15 * 4 + *(int *)(iVar14 + 0xc)) = iVar9 + iVar17;
      }
      uVar12 = iVar16 + 1;
      iVar16 = iVar16 + 1;
      iVar17 = iVar17 + 0x74;
    } while (uVar12 < *puVar5);
    uVar13 = uVar13 + iVar16;
    bVar21 = true;
  }
LAB_0062d024:
  puVar5 = *(uint **)(puVar11 + -0x7be4);
  if (*puVar5 != 0) {
    uVar19 = 0;
    if (!bVar21) {
      uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
    }
    iVar14 = FUN_00641b58(local_cc,*puVar5,0,uVar19,0,0,puVar6,*(undefined4 *)(puVar11 + -0x7be0));
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7bdc),iVar14);
    }
    iVar14 = FUN_00641a3c(*puVar6,0,0);
    if (iVar14 != 0) {
      printf(*(char **)(puVar11 + -0x7bd8),iVar14);
    }
    if (*puVar5 != 0) {
      uVar12 = 0;
      piVar8 = *(int **)(puVar11 + -0x7fc0);
      piVar10 = *(int **)(puVar11 + -0x7ee8);
      iVar14 = uVar13 * 0x74;
      do {
        iVar16 = FUN_0064547c(*puVar6,100,iVar14 + *piVar10 + 0x6c,0);
        if (iVar16 != 0) {
          printf(*(char **)(puVar11 + -0x7bd4),iVar16);
        }
        *(undefined1 *)(iVar14 + *piVar10 + 0x68) = 0;
        iVar16 = piVar8[1];
        iVar17 = *piVar10;
        if (piVar8[2] != iVar16) {
          piVar8[1] = iVar16 + 1;
          *(int *)(iVar16 * 4 + *piVar8) = iVar17 + iVar14;
        }
        uVar12 = uVar12 + 1;
        iVar14 = iVar14 + 0x74;
      } while (uVar12 < *puVar5);
    }
  }
  uVar13 = FUN_00643520(0);
  return uVar13 >> 0x1f ^ 1;
}


// 0x062d940 (0x254 bytes)
// strings: 00702ab0: '?333' (raw)

void FUN_0062d940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double extraout_f1_05;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar3 = PTR_PTR_0071b030;
  uVar4 = FUN_005dd718(param_3,1);
  dVar8 = (double)*(float *)(puVar3 + -0x7bd0);
  dVar10 = (double)*(float *)(puVar3 + -0x7bc8);
  dVar9 = dVar10;
  if (dVar10 <= (double)(float)(extraout_f1 * dVar8)) {
    uVar4 = FUN_005dd718(param_1,uVar4,1);
    dVar10 = (double)*(float *)(puVar3 + -0x7fac);
    if ((double)(float)(extraout_f1_02 * dVar8) <= dVar10) {
      uVar4 = FUN_005dd718(param_1,uVar4,1);
      dVar5 = (double)*(float *)(puVar3 + -0x7bb8);
      dVar10 = (double)(float)(extraout_f1_05 * dVar8);
      fVar1 = (float)(dVar5 - dVar10);
      goto LAB_0062d9b8;
    }
    dVar5 = (double)*(float *)(puVar3 + -0x7bb8);
    dVar6 = dVar5;
    uVar4 = FUN_005dd718(param_2,uVar4,1);
    if ((double)(float)(extraout_f1_03 * dVar8) < dVar9) goto LAB_0062d9d4;
  }
  else {
    fVar1 = *(float *)(puVar3 + -0x7bc0);
    dVar5 = (double)*(float *)(puVar3 + -0x7bb8);
LAB_0062d9b8:
    dVar6 = (double)fVar1;
    uVar4 = FUN_005dd718(param_2,uVar4,1);
    if ((double)(float)(extraout_f1_00 * dVar8) < dVar9) {
LAB_0062d9d4:
      dVar7 = (double)*(float *)(puVar3 + -0x7bc0);
      goto LAB_0062d9dc;
    }
  }
  dVar7 = dVar5;
  uVar4 = FUN_005dd718(param_2,uVar4,1);
  dVar9 = (double)*(float *)(puVar3 + -0x7fac);
  if ((double)(float)(extraout_f1_04 * dVar8) <= dVar9) {
    dVar9 = (double)FUN_005dd718(param_2,uVar4,1);
    dVar9 = (double)(float)(dVar9 * dVar8);
    dVar7 = (double)(float)(dVar5 - dVar9);
  }
LAB_0062d9dc:
  if (dVar10 <= dVar5) {
    fVar1 = *(float *)(puVar3 + -0x7bb0);
  }
  else {
    fVar1 = *(float *)(puVar3 + -0x7f64);
  }
  if (dVar5 < dVar9) {
    dVar9 = -(double)((float)(dVar9 / dVar5) * *(float *)(puVar3 + -0x7ba0) +
                     *(float *)(puVar3 + -0x7b98));
  }
  else {
    dVar9 = (double)*(float *)(puVar3 + -0x7ba8);
  }
  dVar8 = (double)*(float *)(puVar3 + -0x7ce4);
  dVar10 = (double)FUN_005dcbd8(dVar8,(double)(float)(dVar6 / (double)fVar1));
  dVar10 = (double)(float)(dVar10 * (double)*(float *)(puVar3 + -0x7b90));
  uVar4 = FUN_005dcbd8(dVar8,(double)(float)(dVar7 / dVar9));
  dVar9 = (double)FUN_005dd718((double)(float)((double)(float)(extraout_f1_01 *
                                                              (double)*(float *)(puVar3 + -0x7b88))
                                              / dVar10),uVar4,0);
  fVar1 = (float)(dVar9 * (double)*(float *)(puVar3 + -0x7b80));
  fVar2 = *(float *)(puVar3 + -0x7b78);
  if (fVar1 < fVar2) {
    dVar9 = (double)*(float *)(puVar3 + -0x7b70);
  }
  else {
    fVar2 = *(float *)(puVar3 + -0x7b68);
    if (fVar2 < fVar1) {
      dVar9 = (double)*(float *)(puVar3 + -0x7b60);
    }
    else {
      dVar9 = (double)(fVar1 * *(float *)(puVar3 + -0x7eac));
      fVar2 = fVar1;
    }
  }
  *param_6 = fVar2;
  dVar9 = (double)FUN_005dcbd8(dVar8,dVar9);
  *param_5 = (float)(dVar10 * dVar9);
  return;
}


// 0x062db94 (0x14c bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x0062dc54) */
/* WARNING: Removing unreachable block (ram,0x0062dcbc) */
/* WARNING: Removing unreachable block (ram,0x0062dc60) */
/* WARNING: Removing unreachable block (ram,0x0062dc74) */

void FUN_0062db94(int param_1,int *param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  GPiece<24> local_30;
  
  puVar1 = PTR_PTR_0071b030;
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (*param_2 < 0)) || (9 < *param_2)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_30);
  }
  return;
}


// 0x062dce0 (0x19c bytes)
// strings: 0066d840: 'voice->LockModuleParams(modID, &pparams) failed (returned %i)\n' | 00670430: 'ERROR: illegal filter index: %i\n'

/* WARNING: Removing unreachable block (ram,0x0062dd8c) */
/* WARNING: Removing unreachable block (ram,0x0062ddf4) */
/* WARNING: Removing unreachable block (ram,0x0062ddb8) */

ulonglong FUN_0062dce0(int param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int32_t iVar4;
  int local_4c;
  GPiece<8> local_48;
  GPiece<4> local_40;
  int local_3c [5];
  
  puVar2 = PTR_PTR_0071b030;
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (4 < (param_2 & 0xffffffff)) {
    uVar3 = (ulonglong)*(uint *)(PTR_PTR_0071b030 + -0x7b58);
    snd_Printf((char)*(uint *)(PTR_PTR_0071b030 + -0x7b58));
    return uVar3;
  }
  if (*param_3 == 9) {
    FUN_0062d940((double)(float)param_3[1],(double)(float)param_3[2],iVar1,param_2,&local_4c,
                 local_3c);
    *param_3 = 4;
    param_3[2] = local_4c;
    param_3[3] = local_3c[0];
  }
  uVar3 = FUN_00648730(iVar1,local_40,local_48);
  if ((int)uVar3 != 0) {
    iVar4 = printf(*(char **)(puVar2 + -0x7f38),(int)uVar3);
    uVar3 = (ulonglong)iVar4;
  }
  return uVar3;
}


// 0x062de84 (0x2bc bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062de84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  uint *in_r8;
  ulonglong uVar4;
  GPiece<16> local_60;
  
  puVar3 = PTR_PTR_0071b030;
  if (param_5 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  if (in_r8 != (uint *)0x0) {
    uVar1 = *in_r8;
    if ((uVar1 & 1) != 0) {
      FUN_0062dce0(param_5,0,in_r8 + 1);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 2) != 0) {
      FUN_0062dce0(param_5,1,in_r8 + 5);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 4) != 0) {
      FUN_0062dce0(param_5,2,in_r8 + 9);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 8) != 0) {
      FUN_0062dce0(param_5,3,in_r8 + 0xd);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 0x10) != 0) {
      FUN_00625c88((double)(float)in_r8[0x11],(double)(float)in_r8[0x12],param_5);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 0x100) != 0) {
      FUN_0062dce0(param_5,4,in_r8 + 0x1b);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 0x2a0) == 0) {
      return;
    }
    FUN_00625f8c(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    FUN_0062dce0(param_5,uVar2,local_60);
  } while (uVar4 != 5);
  FUN_00625c88((double)*(float *)(puVar3 + -0x7fac),(double)*(float *)(puVar3 + -0x7fac),param_5);
  return;
}


// 0x062e140 (0xcd8 bytes)
// strings: 00670640: 'psv->UnlockPluginParamsAndKeyOn( false ) failed (returned %i)\n' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 00670560: 'pcv->ConnectPort( OutputPort, s_premasterVoices[voiceOutputDest] ) failed (returned %i)\n' | 00670458: 'SCREAM ERROR: THIS SYSTEM ONLY SUPPORTS ADPCM, MP3, AND PCMI16 VOICE DATA! (NOT %d)\n' | 00670608: 'pv->UnlockPluginParams( 0L ) failed (returned %i)\n' | 006705d0: 'pv->LockPluginParams(&pparams) failed (returned %i)\n' | 00670500: 'pcv->ConnectPort( OutputPort, s_masterVoicePrimary ) failed (returned %i)\n' | 006704b0: 'snd_SynthSetVoiceData(): Synth not initialized to play voices of type %d!\n'

undefined4
snd_SynthSetVoiceData
          (int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,char param_7,
          ulonglong param_8)

{
  bool bVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int32_t iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  double dVar22;
  double dVar23;
  int in_stack_00000074;
  uint *in_stack_0000007c;
  char in_stack_00000087;
  int in_stack_0000008c;
  GPiece<4> local_f0;
  undefined4 *local_ec;
  float local_e8 [10];
  char local_c0;
  longlong local_b0;
  
  puVar7 = PTR_PTR_0071b030;
  local_c0 = param_7;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar7 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7f68),0);
    param_2 = param_2 + **(int **)(puVar7 + -0x7fc8);
    iVar11 = param_2;
    if (param_4 != 1) goto LAB_0062e1fc;
LAB_0062e7c8:
    uVar20 = param_3 >> 1;
    lVar15 = 1;
    uVar12 = 1;
    iVar10 = -1;
    if (param_6 != 0) {
      uVar8 = param_6 - iVar11;
      iVar10 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
    }
  }
  else {
    param_2 = param_2 + **(int **)(PTR_PTR_0071b030 + -0x7fc8);
    iVar11 = param_2;
    if (param_4 == 1) goto LAB_0062e7c8;
LAB_0062e1fc:
    iVar11 = param_2;
    if (param_4 == 0) {
      lVar15 = 0;
      uVar20 = (param_3 >> 4) * 0x1c;
      uVar12 = 0;
      iVar10 = -1;
      if (param_6 != 0) {
        uVar8 = param_6 - param_2;
        iVar10 = (((int)uVar8 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0)) * 0x1c;
      }
    }
    else {
      if (2 < param_4 - 2U) {
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7b4c));
        return 0;
      }
      if (param_5 == 0) {
        param_3 = param_3 - 0x80;
        iVar11 = param_2 + 0x80;
        param_5 = param_2;
      }
      lVar15 = 2;
      uVar12 = 0;
      uVar20 = 0;
      iVar10 = -1;
      if ((*(int *)(param_5 + 0x18) != 1) && (lVar15 = 3, *(int *)(param_5 + 0x18) != 2)) {
        lVar15 = 4;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar13 = *(int *)(param_1 + 0x70);
  if (*(int *)(*(int *)(puVar7 + -0x7ee0) + (int)(lVar15 << 2)) == 0) {
    snd_Printf((char)*(undefined4 *)(puVar7 + -0x7b48));
    return 0;
  }
  *(uint *)(param_1 + 0x28) = (uint)param_8;
  if (*(char *)(param_1 + 0x69) != in_stack_00000074) {
    iVar9 = iVar13;
    if (iVar13 == 0) {
      iVar9 = iVar5;
    }
    if (in_stack_00000074 == -1) {
      iVar9 = idol::brbVoice_ConnectPort(iVar9,1,**(undefined4 **)(puVar7 + -0x7fa0));
      if (iVar9 != 0) {
        printf(*(char **)(puVar7 + -0x7b44),iVar9);
      }
    }
    else {
      iVar9 = idol::brbVoice_ConnectPort
                        (iVar9,1,*(undefined4 *)(*(int *)(puVar7 + -0x7f90) + in_stack_00000074 * 4)
                        );
      if (iVar9 != 0) {
        printf(*(char **)(puVar7 + -0x7b40),iVar9);
      }
    }
    *(char *)(param_1 + 0x69) = (char)in_stack_00000074;
  }
  lVar15 = 0;
  do {
    iVar18 = (int)lVar15;
    uVar17 = ((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) -
             (longlong)(iVar18 >> 0x1f);
    uVar17 = lVar15 - ((uVar17 & 0x7fffffff) * 2 + uVar17);
    lVar15 = lVar15 + 1;
    iVar9 = (int)((uVar17 & 0xffffffff) << 2);
    *(undefined4 *)(param_1 + iVar9 + 8) = 0;
    *(undefined4 *)(param_1 + iVar9 + 0x14) = 0;
  } while (iVar18 != 2);
  if ((in_stack_0000007c == (uint *)0x0) || ((*in_stack_0000007c & 0x400) == 0)) {
    uVar8 = 0;
    uVar19 = 1;
  }
  else {
    uVar8 = in_stack_0000007c[0x20];
    uVar19 = uVar8 + 1;
  }
  *(uint *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (2 < param_4 - 2U) {
    iVar13 = FUN_00647ed0(iVar5,local_f0);
    if (iVar13 != 0) {
      printf(*(char **)(puVar7 + -0x7b3c),iVar13);
    }
    uRam00000010 = 0;
    iRam0000001c = iVar11;
    if (param_6 != 0) {
      iRam0000001c = param_6;
    }
    fRam00000028 = *(float *)(puVar7 + -0x7f64);
    dVar23 = (double)fRam00000028;
    uRam0000002c = 4;
    uRam00000018 = 0;
    uRam00000024 = 0;
    uRam00000000 = uVar12;
    uRam00000004 = uVar20;
    iRam00000008 = iVar10;
    uRam0000000c = uVar20;
    iRam00000014 = iVar11;
    uRam00000020 = param_3;
    FUN_0063000c(0x80ff,0xdfe0,0x2c);
    uVar12 = *(undefined4 *)(puVar7 + -0x7cec);
    uVar4 = *(undefined4 *)(puVar7 + -0x7ce4);
    lVar15 = 5;
    uRam00000070 = 0;
    fRam00000074 = (float)dVar23;
    fRam00000078 = (float)dVar23;
    iVar11 = 0;
    do {
      *(undefined4 *)(iVar11 + 0x88) = uVar4;
      *(undefined4 *)(iVar11 + 0x7c) = 0;
      *(float *)(iVar11 + 0x80) = (float)dVar23;
      *(undefined4 *)(iVar11 + 0x84) = uVar12;
      lVar15 = lVar15 + -1;
      iVar11 = iVar11 + 0x10;
    } while (lVar15 != 0);
    uRam000000e4 = (uint)param_8 & 0x20;
    uRam000000d4 = 0;
    uRam000000cc = 0;
    uRam000000d0 = 0;
    uRam000000d8 = 0;
    uRam000000e0 = 0;
    if ((param_8 & 0x20) != 0) {
      uRam000000e4 = 2;
    }
    if ((param_8 & 0x40) == 0) {
      uRam000000e4 = uRam000000e4 | 0x40;
    }
    if (**(char **)(puVar7 + -0x7f50) == '\0') {
      uVar17 = ((ulonglong)uRam000000e4 & 0xf) << 0x1a | (ulonglong)(uRam000000e4 >> 6);
      uRam000000e4 = (uint)(uVar17 << 6) | (uint)uVar17 >> 0x1a;
    }
    else {
      uRam000000e4 = uRam000000e4 | 0x30;
    }
    lVar15 = 4;
    puVar16 = (undefined4 *)0xe8;
    uRam000000dc = uVar19;
    do {
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      lVar15 = lVar15 + -1;
      puVar16 = puVar16 + 4;
    } while (lVar15 != 0);
    uRam00000128 = (uint)(param_8 >> 7) & 1;
    iVar11 = FUN_00647f34(iVar5,0);
    if (iVar11 != 0) goto LAB_0062ec58;
    goto LAB_0062e6e0;
  }
  pfVar21 = (float *)0x0;
  local_e8[6] = 0.0;
  local_e8[7] = 0.0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  local_e8[4] = 0.0;
  local_e8[5] = 0.0;
  if (in_stack_0000008c != 0) {
    iVar10 = 0;
    dVar23 = (double)*(float *)(puVar7 + -0x7e9c);
    pfVar21 = local_e8;
    do {
      dVar22 = (double)FUN_0062777c(*(undefined4 *)(iVar10 + in_stack_0000008c));
      *(float *)(iVar10 + (int)pfVar21) = (float)dVar22;
      if (dVar23 <= dVar22) {
        do {
          dVar2 = dVar22 - dVar23;
          dVar22 = (double)(float)dVar2;
        } while (dVar23 <= dVar22);
        *(float *)(iVar10 + (int)pfVar21) = (float)dVar2;
      }
      bVar1 = iVar10 != 0x1c;
      iVar10 = iVar10 + 4;
    } while (bVar1);
  }
  iVar10 = FUN_00647ed0(iVar5,local_f0);
  if (iVar10 != 0) {
    printf(*(char **)(puVar7 + -0x7b3c),iVar10);
  }
  uRam00000010 = 0;
  uRam00000004 = iVar11 + *(int *)(param_5 + 0x30);
  uRam00000000 = 0;
  iRam00000008 = *(int *)(param_5 + 0x34);
  uRam0000000c = 0;
  if (param_6 != 0) {
    uRam00000010 = *(undefined4 *)(param_5 + 0x34);
  }
  iRam00000014 = *(int *)(param_5 + 0x1c);
  uRam00000024 = 6;
  uRam00000018 = *(undefined4 *)(param_5 + 0x20);
  iRam0000001c = *(int *)(param_5 + 0x24);
  fRam00000028 = *(float *)(param_5 + 0x2c);
  uRam00000020 = *(uint *)(param_5 + 0x18);
  if (**(int **)(puVar7 + -0x7eb0) < 0xb) {
    uRam00000024 = 2;
  }
  fRam00000030 = *(float *)(puVar7 + -0x7fac);
  uRam0000002c = 0;
  if (local_c0 < '\0') {
LAB_0062e4dc:
    fRam00000034 = *(float *)(puVar7 + -0x7f64);
    dVar23 = (double)fRam00000034;
    uRam00000038 = 4;
    FUN_0063000c(0x80ff,0xdfe0,0x38);
  }
  else {
    if (local_c0 < 'd') {
      local_b0 = (longlong)(int)local_c0;
      fRam00000030 = (float)local_b0 / *(float *)(puVar7 + -0x7b2c);
      goto LAB_0062e4dc;
    }
    fRam00000030 = *(float *)(puVar7 + -0x7b34);
    fRam00000034 = *(float *)(puVar7 + -0x7f64);
    dVar23 = (double)fRam00000034;
    uRam00000038 = 4;
    FUN_0063000c(0x80ff,0xdfe0,0x38);
  }
  if (iVar13 == 0) {
    uVar12 = *(undefined4 *)(puVar7 + -0x7cec);
    uVar4 = *(undefined4 *)(puVar7 + -0x7ce4);
    lVar15 = 5;
    fRam00000080 = (float)dVar23;
    fRam00000084 = (float)dVar23;
    uRam0000007c = 0;
    puVar16 = (undefined4 *)0x88;
    do {
      puVar16[3] = uVar4;
      *puVar16 = 0;
      puVar16[1] = (float)dVar23;
      puVar16[2] = uVar12;
      lVar15 = lVar15 + -1;
      puVar16 = puVar16 + 4;
    } while (lVar15 != 0);
    if (*(uint *)(param_5 + 0x14) < 2) {
      uRam00000138 = 2;
    }
    else {
      uRam00000138 = 0;
      uRam0000013c = 0xff;
    }
    uRam000000e4 = 0;
    uRam000000d8 = 0;
    uRam000000dc = 0;
    uRam000000e0 = 0;
    uRam000000e8 = *(uint *)(param_5 + 0x14);
    if (*(uint *)(param_5 + 0x14) < 2) {
      uRam000000e8 = uVar19;
    }
    uRam000000ec = 0;
    if ((in_stack_00000087 == '\0') || (*(uint *)(param_5 + 0x14) < 2)) {
      uVar17 = ((ulonglong)uRam000000f0 & 0xfff) << 0x13 |
               (((ulonglong)uRam000000f0 | 0x10000) << 0x20) >> 0x2d;
      uRam000000f0 = (uint)(uVar17 << 0xd) | (uint)uVar17 >> 0x13;
    }
    else {
      uVar17 = ((ulonglong)uRam000000f0 & 0xffff) << 0xf | (ulonglong)(uRam000000f0 >> 0x11);
      uRam000000f0 = (uint)(uVar17 << 0x11) | (uint)uVar17 >> 0xf | 0x1000;
      if (pfVar21 == (float *)0x0) {
        fRam00000140 = 0.0;
        dVar22 = (double)FUN_0062777c(0x80000001);
        fRam00000144 = (float)dVar22;
        fRam00000154 = 0.0;
        fRam00000148 = 0.0;
        fRam0000014c = 0.0;
        fRam00000150 = 0.0;
        dVar22 = (double)FUN_0062777c(0x80000002);
        fRam00000158 = (float)dVar22;
      }
      else {
        fRam00000140 = *pfVar21;
        fRam00000144 = pfVar21[1];
        fRam00000148 = pfVar21[2];
        fRam0000014c = pfVar21[3];
        fRam00000150 = pfVar21[4];
        fRam00000154 = pfVar21[5];
        fRam00000158 = pfVar21[6];
      }
    }
    if ((param_8 & 0x20) == 0) {
      uVar17 = ((ulonglong)uRam000000f0 & 1) << 0x1e | (ulonglong)(uRam000000f0 >> 2);
      uRam000000f0 = (uint)(uVar17 << 2) | (uint)uVar17 >> 0x1e;
    }
    else {
      uRam000000f0 = uRam000000f0 | 2;
    }
    if ((*(int *)(param_5 + 0x14) == 1) && ((param_8 & 0x40) == 0)) {
      uRam000000f0 = uRam000000f0 | 0x40;
    }
    else {
      uVar17 = ((ulonglong)uRam000000f0 & 0x3f) << 0x19 | (ulonglong)(uRam000000f0 >> 7);
      uRam000000f0 = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    }
    if (**(char **)(puVar7 + -0x7f50) == '\0') {
      uVar17 = ((ulonglong)uRam000000f0 & 0xf) << 0x1a | (ulonglong)(uRam000000f0 >> 6);
      uRam000000f0 = (uint)(uVar17 << 6) | (uint)uVar17 >> 0x1a;
    }
    else {
      uRam000000f0 = uRam000000f0 | 0x30;
    }
    lVar15 = 4;
    puVar16 = (undefined4 *)0xf4;
    do {
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      lVar15 = lVar15 + -1;
      puVar16 = puVar16 + 4;
    } while (lVar15 != 0);
    uRam00000134 = (uint)(param_8 >> 7) & 1;
    iVar11 = FUN_00647f34(iVar5,0);
    if (iVar11 == 0) {
      uVar12 = FUN_00640c9c();
      *(undefined4 *)(param_1 + 100) = uVar12;
      FUN_0062de84(dVar23,dVar23,dVar23,dVar23,param_1);
      *(undefined4 *)(param_1 + 0x60) = 1;
      return 1;
    }
LAB_0062ec58:
    iVar14 = printf(*(char **)(puVar7 + -0x7b38),iVar11);
    uVar12 = FUN_00640c9c(iVar14);
    *(undefined4 *)(param_1 + 100) = uVar12;
    FUN_0062de84(dVar23,dVar23,dVar23,dVar23,param_1);
    *(undefined4 *)(param_1 + 0x60) = 1;
    return 1;
  }
  iVar11 = FUN_00647f34(iVar5,0);
  if (iVar11 != 0) {
    printf(*(char **)(puVar7 + -0x7b38),iVar11);
  }
  iVar11 = FUN_00647ed0(iVar13,&local_ec);
  if (local_ec == (undefined4 *)0x0) goto LAB_0062e6e0;
  uVar12 = *(undefined4 *)(puVar7 + -0x7cec);
  uVar4 = *(undefined4 *)(puVar7 + -0x7ce4);
  lVar15 = 5;
  *local_ec = 0;
  local_ec[1] = (float)dVar23;
  local_ec[2] = (float)dVar23;
  iVar11 = 0;
  do {
    *(undefined4 *)((int)local_ec + iVar11 + 0x18) = uVar4;
    *(undefined4 *)((int)local_ec + iVar11 + 0xc) = 0;
    *(float *)((int)local_ec + iVar11 + 0x10) = (float)dVar23;
    *(undefined4 *)((int)local_ec + iVar11 + 0x14) = uVar12;
    lVar15 = lVar15 + -1;
    iVar11 = iVar11 + 0x10;
  } while (lVar15 != 0);
  local_ec[0x30] = 0xff;
  local_ec[0x19] = 0;
  local_ec[0x1b] = 5;
  local_ec[0x1c] = 1;
  local_ec[0x1d] = 0;
  local_ec[0x2f] = 0;
  local_ec[0x17] = 0;
  local_ec[0x18] = 0;
  local_ec[0x1a] = 0;
  if ((param_8 & 0x20) == 0) {
    pcVar6 = *(char **)(puVar7 + -0x7f50);
    local_ec[0x1d] = 0;
    uVar20 = local_ec[0x1d];
    uVar17 = ((ulonglong)uVar20 & 0x3f) << 0x19 | (ulonglong)(uVar20 >> 7);
    cVar3 = *pcVar6;
    uVar8 = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    local_ec[0x1d] = uVar8;
    if (cVar3 != '\0') goto LAB_0062e604;
LAB_0062ea78:
    uVar17 = ((ulonglong)uVar20 & 0xf) << 0x19 | ((ulonglong)uVar20 << 0x20) >> 0x27;
    local_ec[0x1d] = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    if (in_stack_00000087 != '\0') goto LAB_0062e618;
LAB_0062ea90:
    local_ec[0x1d] = local_ec[0x1d] | 0x10000;
  }
  else {
    pcVar6 = *(char **)(puVar7 + -0x7f50);
    local_ec[0x1d] = 2;
    uVar20 = local_ec[0x1d];
    cVar3 = *pcVar6;
    uVar17 = ((ulonglong)uVar20 & 0x3f) << 0x19 | (ulonglong)(uVar20 >> 7);
    uVar8 = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    local_ec[0x1d] = uVar8;
    if (cVar3 == '\0') goto LAB_0062ea78;
LAB_0062e604:
    local_ec[0x1d] = uVar8 | 0x30;
    if (in_stack_00000087 == '\0') goto LAB_0062ea90;
LAB_0062e618:
    uVar17 = ((ulonglong)(uint)local_ec[0x1d] & 0xffff) << 0xf |
             (ulonglong)((uint)local_ec[0x1d] >> 0x11);
    uVar20 = (uint)(uVar17 << 0x11) | (uint)uVar17 >> 0xf;
    local_ec[0x1d] = uVar20;
    if (pfVar21 != (float *)0x0) {
      local_ec[0x1d] = uVar20 | 0x1000;
      local_ec[0x31] = *pfVar21;
      local_ec[0x32] = pfVar21[1];
      local_ec[0x33] = pfVar21[2];
      local_ec[0x34] = pfVar21[3];
      local_ec[0x35] = pfVar21[4];
      local_ec[0x36] = pfVar21[5];
      local_ec[0x37] = pfVar21[6];
    }
  }
  uVar12 = *(undefined4 *)(puVar7 + -0x7e9c);
  lVar15 = 4;
  iVar11 = 0;
  do {
    *(undefined4 *)((int)local_ec + iVar11 + 0x84) = 0;
    *(undefined4 *)((int)local_ec + iVar11 + 0x78) = 0;
    *(undefined4 *)((int)local_ec + iVar11 + 0x7c) = uVar12;
    *(undefined4 *)((int)local_ec + iVar11 + 0x80) = 0;
    lVar15 = lVar15 + -1;
    iVar11 = iVar11 + 0x10;
  } while (lVar15 != 0);
  local_ec[0x2e] = (uint)(param_8 >> 7) & 1;
  iVar11 = FUN_00647fa0(iVar13,0,0);
  if (iVar11 != 0) {
    iVar11 = printf(*(char **)(puVar7 + -0x7b24),iVar11);
  }
LAB_0062e6e0:
  uVar12 = FUN_00640c9c(iVar11);
  *(undefined4 *)(param_1 + 100) = uVar12;
  FUN_0062de84(dVar23,dVar23,dVar23,dVar23,param_1);
  *(undefined4 *)(param_1 + 0x60) = 1;
  return 1;
}


// 0x062ee18 (0x230 bytes)
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062ee18(int param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<16> local_50;
  
  puVar3 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (param_3 == (int *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  iVar4 = *param_3;
  if (iVar4 != 0) {
    bVar1 = param_2 == (uint *)0x0;
    do {
      while (iVar4 == 2) {
        if ((!bVar1) && ((*param_2 & 0x10) != 0)) {
          FUN_00625c88((double)(float)param_2[0x11],(double)(float)param_2[0x12],param_1);
          goto LAB_0062eea8;
        }
        FUN_00625c88((double)(float)param_3[3],(double)(float)param_3[4],param_1);
        param_3 = (int *)((int)param_3 + param_3[1]);
        iVar4 = *param_3;
        if (iVar4 == 0) {
          return;
        }
      }
      if (iVar4 == 5) {
        if (!bVar1) {
          if (param_3[5] != -1) {
            iVar4 = param_3[2];
            *(int *)(param_1 + 0x14) = param_3[5];
            *(int *)(param_1 + 8) = iVar4;
          }
          if (param_3[6] != -1) {
            iVar4 = param_3[3];
            *(int *)(param_1 + 0x18) = param_3[6];
            *(int *)(param_1 + 0xc) = iVar4;
          }
          if (param_3[7] != -1) {
            iVar4 = param_3[4];
            *(int *)(param_1 + 0x1c) = param_3[7];
            *(int *)(param_1 + 0x10) = iVar4;
          }
        }
      }
      else if (iVar4 == 1) {
        uVar2 = *(ushort *)((int)param_3 + 10);
        if ((bVar1) || ((1 << (uVar2 & 0x3f) & *param_2) == 0)) {
          FUN_0062dce0(param_1,uVar2,local_50);
        }
        else {
          FUN_0062dce0(param_1,uVar2,param_2 + (uint)uVar2 * 4 + 1);
        }
      }
LAB_0062eea8:
      param_3 = (int *)((int)param_3 + param_3[1]);
      iVar4 = *param_3;
    } while (iVar4 != 0);
  }
  return;
}


// 0x062f048 (0x1a4 bytes)
double FUN_0062f048(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  double dVar2;
  GPiece<4> local_30;
  int local_2c [3];
  
  puVar1 = PTR_PTR_0071b030;
  if (**(int **)(PTR_PTR_0071b030 + -0x7fa0) != 0) {
    FUN_006487c0(**(int **)(PTR_PTR_0071b030 + -0x7fa0),local_30,local_2c);
    if (local_2c[0] != 0) {
      if (param_2 == 0) {
        if (param_3 != 0) {
          return (double)*(float *)(param_1 * 4 + local_2c[0] + 0x10);
        }
        dVar2 = (double)FUN_005dd718((double)*(float *)(param_1 * 4 + local_2c[0] + 0x10),
                                     local_2c[0],1);
        return (double)(float)(dVar2 * (double)*(float *)(puVar1 + -0x7c80));
      }
      if (param_3 != 0) {
        return (double)*(float *)((param_1 + *(int *)(local_2c[0] + 8)) * 4 + local_2c[0] + 0x10);
      }
      dVar2 = (double)FUN_005dd718((double)*(float *)((param_1 + *(int *)(local_2c[0] + 8)) * 4 +
                                                      local_2c[0] + 0x10),local_2c[0],1);
      return (double)(float)(dVar2 * (double)*(float *)(puVar1 + -0x7c80));
    }
  }
  return (double)*(float *)(puVar1 + -0x7fac);
}


// 0x062f1f4 (0x2bc bytes)
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 00670680: 'snd_SynthGetVoiceOutputLevel(): %s(%d) : Invalid voice context!\n'

double snd_SynthGetVoiceOutputLevel(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  double extraout_f1_00;
  GPiece<4> local_40;
  int local_3c [3];
  
  puVar3 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7b20));
    return (double)*(float *)(puVar3 + -0x7fac);
  }
  iVar2 = *(int *)(param_1 + 0x70);
  if (((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0x6c), iVar2 == 0)) ||
     (FUN_006487c0(iVar2,local_40,local_3c), local_3c[0] == 0)) {
    return (double)*(float *)(puVar3 + -0x7fac);
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (*(int *)(*(int *)(puVar3 + -0x7ee0) + 0xc) != iVar2) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        dVar6 = (double)FUN_005dd718((double)*(float *)(local_3c[0] + 0x10),iVar2,1);
        return (double)(float)(dVar6 * (double)*(float *)(puVar3 + -0x7c80));
      }
      return (double)*(float *)(local_3c[0] + 0x10);
    }
    if (param_3 != 0) {
      return (double)*(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] + 0x10);
    }
    dVar6 = (double)FUN_005dd718((double)*(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] +
                                                   0x10),iVar2,1);
    return (double)(float)(dVar6 * (double)*(float *)(puVar3 + -0x7c80));
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      pfVar5 = (float *)(local_3c[0] + 0x10);
      fVar1 = *(float *)(puVar3 + -0x7eac);
      goto LAB_0062f368;
    }
    uVar4 = FUN_005dd718((double)*(float *)(local_3c[0] + 0x10),iVar2,1);
    fVar1 = *(float *)(local_3c[0] + 0x14);
    dVar6 = extraout_f1_00;
  }
  else {
    if (param_3 != 0) {
      fVar1 = *(float *)(puVar3 + -0x7eac);
      pfVar5 = (float *)(local_3c[0] + 0x10 + *(int *)(local_3c[0] + 8) * 4);
LAB_0062f368:
      return (double)((*pfVar5 + pfVar5[1]) * fVar1);
    }
    uVar4 = FUN_005dd718((double)*(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] + 0x10),
                         iVar2,1);
    fVar1 = *(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] + 0x10 + 4);
    dVar6 = extraout_f1;
  }
  dVar7 = (double)FUN_005dd718((double)fVar1,uVar4,1);
  return (double)((float)(dVar6 * (double)*(float *)(puVar3 + -0x7c80) +
                         (double)(float)(dVar7 * (double)*(float *)(puVar3 + -0x7c80))) *
                 *(float *)(puVar3 + -0x7eac));
}


// 0x062f4b8 (0x6e8 bytes)
// strings: 006706c8: "snd_SynthInit(BRB): The spurs instance passed manages %d SPUs, but you're specifying spuIndex %d specifically.  This may cause problems!\n" | 00670758: 'snd_SynthInit(): %s(%d) : Unexpected max channel count (%d) from driver!\n' | 006707a8: 'libMp3' | 006707b0: 'snd_SynthInit(): %s(%d) : Attempted to initialize synthesizer with no voices of any type!\n'

undefined4 snd_SynthInit(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar16;
  ulonglong uVar17;
  uint uStack00000008;
  GPiece<144> local_200;
  int local_170 [74];
  
  puVar12 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar15 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7e0c);
  **(undefined4 **)(PTR_PTR_0071b030 + -0x7e68) = *(undefined4 *)(param_2 + 0x20);
  *puVar15 = param_1;
  iVar13 = cellSpursGetInfo(*(undefined4 *)(param_2 + 4),local_170);
  if (iVar13 == 0) {
    if ((1 < local_170[0]) && (*(char *)(param_2 + 8) != -1)) {
      snd_Printf((char)*(undefined4 *)(puVar12 + -0x7b14));
    }
    iVar13 = FUN_00642a50(local_200);
    if (-1 < iVar13) {
      iVar13 = FUN_00640d14();
      if (iVar13 == 6) {
        puVar15 = *(undefined4 **)(puVar12 + -0x7b10);
        **(undefined4 **)(puVar12 + -0x7e64) = 3;
        *puVar15 = 3;
      }
      else if (iVar13 == 8) {
        puVar15 = *(undefined4 **)(puVar12 + -0x7b10);
        **(undefined4 **)(puVar12 + -0x7e64) = 4;
        *puVar15 = 4;
      }
      else {
        if (iVar13 != 2) {
          snd_Printf((char)*(undefined4 *)(puVar12 + -0x7b0c));
          return 0;
        }
        puVar15 = *(undefined4 **)(puVar12 + -0x7b10);
        **(undefined4 **)(puVar12 + -0x7e64) = 0;
        *puVar15 = 0;
      }
      iVar13 = FUN_00630554(*(undefined4 *)(puVar12 + -0x7b08),0);
      **(int **)(puVar12 + -0x7ee4) = iVar13;
      if (iVar13 != -1) {
        lVar16 = 8;
        puVar15 = *(undefined4 **)(puVar12 + -0x7fd4);
        do {
          puVar15[2] = 0xffffffff;
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
          *(undefined1 *)((int)puVar15 + 0xd) = 0;
          lVar16 = lVar16 + -1;
          puVar15 = puVar15 + 4;
        } while (lVar16 != 0);
        FUN_0062fd54();
        iVar13 = *(int *)(param_2 + 0xc);
        iVar1 = *(int *)(param_2 + 0x10);
        iVar2 = *(int *)(param_2 + 0x1c);
        iVar3 = *(int *)(param_2 + 0x14);
        iVar4 = *(int *)(param_2 + 0x18);
        piVar5 = *(int **)(puVar12 + -0x7bfc);
        piVar6 = *(int **)(puVar12 + -0x7c14);
        uVar14 = iVar3 + iVar4 + iVar2 + iVar13 + iVar1;
        piVar7 = *(int **)(puVar12 + -0x7c2c);
        piVar8 = *(int **)(puVar12 + -0x7c58);
        puVar9 = *(uint **)(puVar12 + -0x7e7c);
        **(int **)(puVar12 + -0x7be4) = iVar13;
        *piVar5 = iVar1;
        *piVar6 = iVar3;
        *piVar7 = iVar4;
        *piVar8 = iVar2;
        *puVar9 = uVar14;
        if (uVar14 == 0) {
          snd_Printf((char)*(undefined4 *)(puVar12 + -0x7b04));
        }
        else {
          if (iVar13 == 0) {
            puVar15 = *(undefined4 **)(puVar12 + -0x7f98);
          }
          else {
            puVar15 = *(undefined4 **)(puVar12 + -0x7f98);
            piVar11 = *(int **)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            piVar11[2] = iVar13;
            piVar11[1] = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *piVar11 = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar5;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(int *)(iVar1 + 0x14) = iVar13;
            *(undefined4 *)(iVar1 + 0x10) = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0xc) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar6;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(int *)(iVar1 + 0x20) = iVar13;
            *(undefined4 *)(iVar1 + 0x1c) = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0x18) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar7;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(int *)(iVar1 + 0x2c) = iVar13;
            *(undefined4 *)(iVar1 + 0x28) = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0x24) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar8;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(undefined4 *)(iVar1 + 0x34) = 0;
            *(int *)(iVar1 + 0x38) = iVar13;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0x30) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = (**(code **)*puVar15)(*puVar9 * 0x74,0);
          piVar5 = *(int **)(puVar12 + -0x7ee8);
          *piVar5 = iVar13;
          if (iVar13 != 0) {
            memset(iVar13,0,*puVar9 * 0x74);
            if (*puVar9 != 0) {
              uVar17 = (ulonglong)*puVar9;
              iVar13 = 0;
              do {
                iVar1 = iVar13 + *piVar5;
                iVar13 = iVar13 + 0x74;
                *(undefined1 *)(iVar1 + 0x69) = 0xf0;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


// 0x062fba0 (0x8c bytes)
void FUN_0062fba0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      puVar2 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fc0);
      lVar3 = 5;
      **(undefined4 **)(PTR_PTR_0071b030 + -0x7b1c) = *(undefined4 *)(PTR_PTR_0071b030 + -0x7b00);
      do {
        puVar2[2] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar3 = lVar3 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      return;
    }
  }
  else if ((param_1 == 0) && (param_2 == 0xffff)) {
    puVar2 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7b1c);
    uVar1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
    **(undefined4 **)(PTR_PTR_0071b030 + -0x7b1c) = *(undefined4 *)(PTR_PTR_0071b030 + -0x7b00);
    *puVar2 = uVar1;
  }
  return;
}


// 0x062fc2c (0x10 bytes)
void FUN_0062fc2c(void)

{
  FUN_0062fba0(0,0xffff);
  return;
}


// 0x062fc3c (0x10 bytes)
void FUN_0062fc3c(void)

{
  FUN_0062fba0(1,0xffff);
  return;
}


// 0x062fc4c (0x54 bytes)
uint FUN_0062fc4c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0063042c(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
}


// 0x062fca0 (0x3c bytes)
void FUN_0062fca0(void)

{
  FUN_00630388(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return;
}


// 0x062fcdc (0x3c bytes)
void FUN_0062fcdc(void)

{
  FUN_006303cc(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return;
}


// 0x062fd18 (0x3c bytes)
void FUN_0062fd18(void)

{
  FUN_0063049c(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return;
}


// 0x062fd54 (0x40 bytes)
// strings: 00670810: 'synth'

void FUN_0062fd54(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071b034;
  uVar2 = FUN_00630554(*(undefined4 *)(PTR_PTR_0071b034 + -0x7ffc),0);
  **(undefined4 **)(puVar1 + -0x8000) = uVar2;
  return;
}


// 0x062fd94 (0x278 bytes)
void FUN_0062fd94(int param_1,int param_2,int param_3,int param_4,int param_5,ulonglong param_6,
                 undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  float *pfVar7;
  
  puVar4 = PTR_PTR_0071b038;
  *param_7 = 4;
  if (0xe < param_3) {
    fVar1 = *(float *)(puVar4 + -0x8000);
    param_7[1] = fVar1;
    param_7[4] = 2;
  }
  else {
    fVar1 = *(float *)(puVar4 + -0x8000);
    param_7[1] = fVar1;
    param_7[4] = 1;
  }
  if ((param_6 & 1) == 0) {
    iVar6 = *(int *)(puVar4 + -0x7ff8);
    fVar2 = *(float *)(puVar4 + -0x7ff4);
    param_7[2] = 0;
    param_7[3] = *(float *)(iVar6 + param_1 * 4) * fVar2;
    param_7[8] = 2;
  }
  else {
    iVar6 = *(int *)(puVar4 + -0x7fec);
    fVar2 = *(float *)(puVar4 + -0x7ff4);
    param_7[2] = *(undefined4 *)(puVar4 + -0x7fe8);
    param_7[3] = *(float *)(iVar6 + param_1 * 4) * fVar2;
    param_7[8] = 2;
  }
  if (0xe < param_3) {
    fVar3 = *(float *)(puVar4 + -0x7fe0);
    param_7[7] = 0;
    param_7[5] = fVar1;
    fVar3 = (float)(longlong)(param_3 + 1) * fVar3;
  }
  else {
    iVar6 = *(int *)(puVar4 + -0x7fd8);
    fVar3 = *(float *)(puVar4 + -0x7fe0);
    param_7[6] = *(undefined4 *)(puVar4 + -0x7fe8);
    fVar3 = (float)(longlong)(param_3 + 1) * fVar3;
    param_7[7] = *(float *)(iVar6 + param_2 * 4) * fVar2;
    param_7[5] = fVar3;
  }
  pfVar7 = (float *)(param_7 + 9);
  *pfVar7 = fVar3;
  param_7[0xc] = 2;
  param_7[10] = 0;
  if (param_4 == 0x7f) {
    param_7[0xb] = fVar1;
  }
  else {
    uVar5 = param_6 >> 1 & 3;
    iVar6 = (int)uVar5;
    if (iVar6 == 1) {
      iVar6 = *(int *)(puVar4 + -0x7fd0);
      *pfVar7 = 0.0;
      param_7[0xc] = 4;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
    else if (uVar5 == 0) {
      iVar6 = *(int *)(puVar4 + -0x7fd4);
      *pfVar7 = 0.0;
      param_7[0xc] = 4;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
    else if (iVar6 == 2) {
      iVar6 = *(int *)(puVar4 + -0x7fec);
      *pfVar7 = fVar1;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
    else if (iVar6 == 3) {
      iVar6 = *(int *)(puVar4 + -0x7ff8);
      *pfVar7 = fVar1;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
  }
  param_7[0xd] = 0;
  param_7[0x10] = 4;
  if ((param_6 & 8) == 0) {
    iVar6 = *(int *)(puVar4 + -0x7fd4);
    param_7[0xe] = 0;
    param_7[0xf] = *(float *)(iVar6 + param_5 * 0x10) * fVar2;
    return;
  }
  iVar6 = *(int *)(puVar4 + -0x7fd0);
  param_7[0xe] = *(undefined4 *)(puVar4 + -0x7fe8);
  param_7[0xf] = *(float *)(iVar6 + param_5 * 0x10) * fVar2;
  return;
}


// 0x063000c (0x84 bytes)
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


// 0x0630090 (0x20 bytes)
void FUN_00630090(undefined8 param_1)

{
  GPiece<32> auStack_20;
  
  syscall_sys_ppu_thread_join(param_1,auStack_20);
  return;
}


// 0x06300b0 (0x6c bytes)
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
  iVar2 = syscall_sys_semaphore_post
                    (*(undefined4 *)(param_1 * 8 + *(int *)(PTR_PTR_0071b03c + -0x8000) + 4),1);
  if (iVar2 != 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ffc));
  }
  return;
}


// 0x063011c (0x6c bytes)
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
  iVar2 = syscall_sys_semaphore_wait
                    (*(undefined4 *)(param_1 * 8 + *(int *)(PTR_PTR_0071b03c + -0x8000) + 4),0);
  if (iVar2 != 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff8));
  }
  return;
}


// 0x0630188 (0x94 bytes)
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
    iVar3 = syscall_sys_semaphore_destroy(*(undefined4 *)(param_1 + iVar1 + 4));
    if (iVar3 != 0) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7ff4));
      return;
    }
    *(undefined4 *)(iVar1 + param_1) = 0;
  }
  return;
}


// 0x063021c (0x16c bytes)
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
  snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fec));
  return -1;
}


// 0x0630388 (0x44 bytes)
void FUN_00630388(int param_1)

{
  sys_lwmutex_unlock(param_1 * 0x20 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8);
  return;
}


// 0x06303cc (0x60 bytes)
// strings: 006710f8: 'result = %d\n'

void FUN_006303cc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = sys_lwmutex_lock(param_1 * 0x20 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8,0);
  if (iVar2 != 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fe4));
  }
  return;
}


// 0x063042c (0x70 bytes)
undefined4 FUN_0063042c(int param_1)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_trylock(param_1 * 0x20 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8);
  if (iVar1 == 0) {
    return 0;
  }
  return 0x8001000a;
}


// 0x063049c (0xb8 bytes)
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
  iVar3 = sys_lwmutex_destroy(param_1 + *(int *)(PTR_PTR_0071b03c + -0x7fe8) + 8);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar1 + param_1) = 0;
    return;
  }
  snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fe0));
  return;
}


// 0x0630554 (0x178 bytes)
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
  GPiece<8> local_40;
  GPiece<16> local_38;
  
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
      strcpy(local_38,param_1,8);
      iVar2 = sys_lwmutex_create(piVar5 + iVar6 * 8 + 2,local_40);
      if (iVar2 != 0) {
        snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd8));
        return -1;
      }
      *(undefined4 *)(*(int *)(puVar1 + -0x7fe8) + iVar6 * 0x20) = 1;
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + -1;
    piVar4 = piVar4 + 8;
  } while (lVar7 != 0);
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd8));
  return -1;
}


// 0x06306cc (0x3c bytes)
undefined8 FUN_006306cc(void)

{
  int iVar1;
  undefined8 local_20 [4];
  
  iVar1 = sys_ppu_thread_get_id(local_20);
  if (iVar1 != 0) {
    local_20[0] = 0;
  }
  return local_20[0];
}


// 0x0630708 (0x4c bytes)
undefined8 FUN_00630708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 local_20 [4];
  
  iVar2 = sys_ppu_thread_create(local_20,param_2,0,param_3,param_4,1,param_1);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = local_20[0];
  }
  return uVar1;
}


// 0x0630754 (0x58 bytes)
// strings: 00671158: 'SCREAM: cellFsRead failed with error code -> %d\n'

undefined4 FUN_00630754(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  GPiece<4> auStack_20;
  undefined4 local_1c;
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = cellFsRead(param_1,param_2,param_3,auStack_20);
  if (iVar2 != 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd4));
  }
  return local_1c;
}


// 0x06307ac (0x5c bytes)
// strings: 00671190: 'SCREAM: cellFsLSeek failed with error code -> %d\n'

undefined4 FUN_006307ac(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uStack_1c;
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = cellFsLseek();
  if (iVar2 != 0) {
    uStack_1c = 0;
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd0));
  }
  return uStack_1c;
}


// 0x0630808 (0x70 bytes)
// strings: 006711c8: 'SCREAM: cellFsOpen failed for -> %s\n'

undefined4 FUN_00630808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_30 [6];
  
  puVar1 = PTR_PTR_0071b03c;
  iVar2 = cellFsOpen(param_1,param_2,local_30,0,0);
  if (iVar2 != 0) {
    local_30[0] = 0xffffffff;
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fcc));
  }
  return local_30[0];
}


// 0x0630878 (0x6c bytes)
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


// 0x06308e4 (0x150 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ffc));
  }
  else {
    if ((int)param_2 < *(int *)(iVar2 + 4)) {
      uVar3 = (*(code *)**(undefined4 **)(iVar2 + (int)((param_2 & 0xffffffff) << 2) + 0x10))
                        (param_3,param_4,param_5,param_6,param_7);
      return uVar3;
    }
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff4));
  }
  return 0;
}


// 0x0630a34 (0x11c bytes)
// strings: 00630ae4: '}+H.{d' (raw) | 00671270: '%s(%d) : Proc ID %d not found for callback with data.\n' | 00671220: 'common/989snd.cpp'

undefined4 FUN_00630a34(undefined8 param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_0071b040;
  iVar2 = FUN_00630878();
  if (iVar2 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff0));
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


// 0x0630b50 (0x140 bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b040 + -0x7fec));
    if (**(char **)(puVar2 + -0x7fe8) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe4),0);
  }
  iVar3 = FUN_00630878(*param_1);
  if (iVar3 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fe0));
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


// 0x0630c90 (0x10c bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b040 + -0x7fec));
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
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fdc));
    uVar5 = 0;
  }
  return uVar5;
}


// 0x0630d9c (0xdc bytes)
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


// 0x0630e78 (0x64 bytes)
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


// 0x0630edc (0x24 bytes)
int FUN_00630edc(void)

{
  return *(int *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x4c) -
         *(int *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 0x50);
}


// 0x0630f00 (0x158 bytes)
int FUN_00630f00(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*param_1 == 0x6c) {
    memcpy(param_1,(void *)(*(int *)(PTR_PTR_0071b044 + -0x7ffc) + 8),0x6c);
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


// 0x0631058 (0x1c bytes)
uint FUN_00631058(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(uint *)(param_1 + 0x240) >> 0x1f;
  return uVar1 - (uVar1 ^ *(uint *)(param_1 + 0x240)) >> 0x1f;
}


// 0x0631074 (0x2c bytes)
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


// 0x06310a0 (0x78 bytes)
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


// 0x0631118 (0xc bytes)
undefined8 FUN_00631118(void)

{
  return 0x70033;
}


// 0x0631124 (0x2c bytes)
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


// 0x0631150 (0x6c bytes)
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


// 0x06311bc (0x158 bytes)
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


// 0x0631314 (0x34 bytes)
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


// 0x0631348 (0x10 bytes)
undefined8 FUN_00631348(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}


// 0x0631358 (0xa0 bytes)
uint FUN_00631358(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x585) != '\0') {
    uVar1 = 0;
    if ((((*(char *)(param_1 + 0x585) == *(char *)(param_2 + 0x14)) &&
         (*(char *)(param_1 + 0x588) == *(char *)(param_2 + 0x17))) &&
        (*(char *)(param_1 + 0x587) == *(char *)(param_2 + 0x16))) &&
       (*(char *)(param_1 + 0x586) == *(char *)(param_2 + 0x15))) {
      uVar1 = ((*(uint *)(param_1 + 0x580) ^ *(uint *)(param_2 + 0x58)) == 0);
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


// 0x06313f8 (0x3c bytes)
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


// 0x0631434 (0x8c bytes)
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


// 0x06314c0 (0x184 bytes)
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
          memcpy(__dest,__src,0x198);
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


// 0x0631644 (0x48 bytes)
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


// 0x063168c (0x34 bytes)
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


// 0x06316c0 (0xbc bytes)
void FUN_006316c0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  GPiece<40> local_40;
  
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


// 0x063177c (0x34 bytes)
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


// 0x06317b0 (0x144 bytes)
// strings: 00671470: '%s(%d) : Storage size %d is too small for even one file token!\n' | 00671358: 'common/snd_stream.cpp' | 006713b0: '%s(%d) : Invalid SndStreamFileTokenStorage ID = 0x%08X.\n' | 006713f0: '%s(%d) : Invalid SndStreamFileTokenStorage version = %d.\n' | 00671430: '%s(%d) : Invalid SndStreamFileInfo size = %d. This is a BUG!\n' | 00671370: '%s(%d) : SndStreamFileTokenStorage needs byte reversal.\n' | 00671328: '%s(%d) : NULL SndStreamFileTokenStorage.\n'

undefined4 FUN_006317b0(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fd8));
    uVar1 = 0xffffff92;
  }
  else if (*param_1 == 0x41544653) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fd0));
    uVar1 = 0xffffff90;
  }
  else if (*param_1 == 0x53465441) {
    if (*(short *)(param_1 + 4) == 2) {
      if (*(short *)((int)param_1 + 0x16) == 0x198) {
        if ((param_2 == 0) || (*(ushort *)(param_1 + 5) + 0x198 <= param_2)) {
          uVar1 = 0;
        }
        else {
          snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc0));
          uVar1 = 0xffffff93;
        }
      }
      else {
        snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc4));
        uVar1 = 0xffffff95;
      }
    }
    else {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc8));
      uVar1 = 0xffffff91;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fcc));
    uVar1 = 0xffffff94;
  }
  return uVar1;
}


// 0x06318f4 (0x118 bytes)
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


// 0x0631a0c (0x4c4 bytes)
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
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fcc));
      return 0xffffff94;
    }
    local_ac = uVar5;
    if (uVar3 != 2) {
LAB_00631e90:
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fc8));
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


// 0x0631ed0 (0x198 bytes)
// strings: 006716e0: 'ERROR SndFileInterface missing m_pFileAsyncClose !\n' | 006714b0: 'ERROR SndFileInterface missing m_pFileOpen !\n' | 006714e0: 'ERROR SndFileInterface missing m_pFileSeek !\n' | 00671540: 'ERROR SndFileInterface missing m_pFileClose !\n' | 00671510: 'ERROR SndFileInterface missing m_pFileRead !\n' | 00671628: 'ERROR SndFileInterface missing m_pFileAsyncRead !\n' | 006715e8: 'ERROR SndFileInterface missing m_pFileAsyncOpenBitstream !\n' | 006715a8: 'ERROR SndFileInterface missing m_pFileAsyncIsOpenComplete !\n' | 00671570: 'ERROR SndFileInterface missing m_pFileAsyncOpen !\n' | 006716a0: 'ERROR SndFileInterface missing m_pFileAsyncCloseBitstream !\n' | 00671660: 'ERROR SndFileInterface missing m_pFileAsyncIsReadComplete !\n'

undefined4 FUN_00631ed0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fbc));
      return 0xffffff92;
    }
    if (param_1[2] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fb8));
      return 0xffffff92;
    }
    if (param_1[3] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fb4));
      return 0xffffff92;
    }
    if (param_1[4] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fb0));
      return 0xffffff92;
    }
    if (param_1[5] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fac));
      return 0xffffff92;
    }
    if (param_1[6] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fa8));
      return 0xffffff92;
    }
    if (param_1[7] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fa4));
      return 0xffffff92;
    }
    if (param_1[8] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7fa0));
      return 0xffffff92;
    }
    if (param_1[9] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f9c));
      return 0xffffff92;
    }
    if (param_1[10] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f98));
      return 0xffffff92;
    }
    if (param_1[0xb] == 0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f94));
      return 0xffffff92;
    }
  }
  return 0;
}


// 0x0632068 (0xbc bytes)
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
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f90));
    }
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  return;
}


// 0x0632124 (0x5c bytes)
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


// 0x0632180 (0x64 bytes)
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


// 0x06321e4 (0x44 bytes)
void FUN_006321e4(undefined4 *param_1)

{
  memset(param_1,0,0x198);
  *param_1 = 0x5afe2b46;
  return;
}


// 0x0632228 (0x64 bytes)
int FUN_00632228(int param_1)

{
  FUN_006321e4(param_1);
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(int *)(param_1 + 400) = param_1 + 0x198;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 8;
  return param_1;
}


// 0x063228c (0x50 bytes)
void FUN_0063228c(int param_1,undefined4 param_2)

{
  memset(param_1,0,0x2e0);
  *(undefined1 *)(param_1 + 0x2dc) = 0x1e;
  *(undefined4 *)(param_1 + 0x2b8) = param_2;
  return;
}


// 0x06322dc (0x80 bytes)
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


// 0x063235c (0xa8 bytes)
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


// 0x0632404 (0x104 bytes)
uint FUN_00632404(uint param_1,uint *param_2)

{
  uint uVar1;
  GPiece<224> local_110;
  
  if ((*param_2 & 0x10) == 0) {
    return param_1;
  }
  memset(local_110,0,0xdc);
  uVar1 = FUN_00607dcc(param_1,local_110);
  return param_1 & (int)-(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) >> 0x1f;
}


// 0x0632508 (0x16c bytes)
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


// 0x0632674 (0x11c bytes)
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


// 0x0632790 (0x2a8 bytes)
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
        memcpy((void *)(iVar2 + 0x248),param_2,0x1b0);
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
        memcpy((void *)(iVar2 + 0x3f8),__src,0xc4);
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


// 0x0632a38 (0x294 bytes)
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


// 0x0632ccc (0x60 bytes)
int FUN_00632ccc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006370e4(param_1 + 0x6b8);
  iVar1 = iVar1 * 0x2e0 + param_1 + 0x6c8;
  FUN_0063228c(iVar1,param_1);
  return iVar1;
}


// 0x0632d2c (0x100 bytes)
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
      strcpy(param_1 + 0x66,*param_2,0xff);
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f8c));
  return 0xffffff95;
}


// 0x0632e2c (0x94 bytes)
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


// 0x0632ec0 (0x148 bytes)
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


// 0x0633008 (0x58 bytes)
void FUN_00633008(int param_1)

{
  FUN_0061c628(param_1,param_1 + 0x31c);
  FUN_00632ec0(param_1,param_1 + 600,0x10);
  return;
}


// 0x0633060 (0x68 bytes)
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


// 0x06330c8 (0xc0 bytes)
void FUN_006330c8(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_0071b044;
  memset(param_1 + 0x6b8,0,0x17c8);
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


// 0x0633188 (0xcc bytes)
void FUN_00633188(int param_1)

{
  FUN_00636f14(param_1 + 8);
  FUN_006330c8(param_1);
  memset(param_1 + 0x1ee8,0,0x68);
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


// 0x0633254 (0x88 bytes)
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


// 0x06332dc (0x278 bytes)
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
            snd_Printf((char)*(undefined4 *)(puVar9 + -0x7f88));
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
          memcpy((void *)(*(int *)(iVar11 + 0x6a8) + 0x168),(void *)(iVar4 + 0x168),0xb4);
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


// 0x0633554 (0xd4 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f80));
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


// 0x0633628 (0x1fc bytes)
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
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f78));
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
    pvVar2 = memcpy(param_5,param_4,0x198);
    if (*(int *)((int)param_4 + 0x78) != 0) {
      pvVar2 = (void *)FUN_00639c80(pvVar2);
      *(void **)((int)param_5 + 0x78) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f74));
        return 0xffffffff;
      }
      memcpy(pvVar2,*(void **)((int)param_4 + 0x78),**(size_t **)(puVar1 + -0x7f70));
    }
    strcpy((int)param_5 + 0x198,*(undefined4 *)((int)param_4 + 400),0xff);
    *(int *)((int)param_5 + 400) = (int)param_5 + 0x198;
    FUN_0063a134(iVar6 + 0x6b8);
    uVar3 = 0;
  }
  return uVar3;
}


// 0x0633824 (0x154 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f6c));
    return -1;
  }
  uVar5 = FUN_006371fc(iVar2);
  if (uVar5 <= param_2) {
    uVar6 = FUN_00632ccc(iVar1);
    uVar5 = FUN_00633628(param_1,param_3,param_4,param_5,uVar6,1);
    return (int)(((int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f ^ uVar5)) >> 0x1f;
  }
  snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
  return -1;
}


// 0x0633978 (0xb8 bytes)
// strings: 00671908: '%s(%d) : Could not open and parse sound file: %s.\n' | 00671358: 'common/snd_stream.cpp'

int FUN_00633978(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar2 = FUN_00632d2c();
  if ((iVar2 == 0) && (iVar2 = FUN_0063ba6c(param_1,*(undefined8 *)(param_2 + 0x10),0), iVar2 != 0))
  {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f64));
    return iVar2;
  }
  return iVar2;
}


// 0x0633a30 (0x1c8 bytes)
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


// 0x0633bf8 (0x104 bytes)
// strings: 00671358: 'common/snd_stream.cpp' | 00671990: '%s(%d) : ERROR bogus handle 0x%08X passed to SndStreamEx function.\n' | 00671940: '%s(%d) : ERROR non SndStreamEx handle 0x%08X passed to SndStreamEx function.\n'

ulonglong FUN_00633bf8(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 >> 0x10 & 0xff;
  if (((uint)(param_1 >> 0x18) & 0x1f) != 4) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f60));
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f5c));
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}


// 0x0633cfc (0x74 bytes)
// strings: 00671358: 'common/snd_stream.cpp' | 006719d8: '%s(%d) : ERROR SndStreamEx handle not top of tree.\n'

int FUN_00633cfc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar2 = FUN_00633bf8();
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x245) == '\0')) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f58));
    iVar2 = 0;
  }
  return iVar2;
}


// 0x0633d70 (0x34 bytes)
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


// 0x0633da4 (0x90 bytes)
// strings: 00671a10: 'ERROR: sndi_MySynthUnlock: Attempt to unlock when not locked!'

void FUN_00633da4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(PTR_PTR_0071b044 + -0x7ffc);
  if (0 < *(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x58)) {
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
    snd_SynthUnlock();
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f54));
  *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
  snd_SynthUnlock();
  return;
}


// 0x0633e34 (0x40 bytes)
void FUN_00633e34(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b044;
  snd_SynthLock();
  *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x54) = *(int *)(*(int *)(puVar1 + -0x7ffc) + 0x54) + 1;
  return;
}


// 0x0633e74 (0x4c bytes)
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


// 0x0633ec0 (0x184 bytes)
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}


// 0x0634044 (0x190 bytes)
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}


// 0x06341d4 (0xb4 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar4 + -0x7f48));
  }
  FUN_00633da4();
  return 0;
}


// 0x0634288 (0x8c bytes)
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


// 0x0634314 (0xa8 bytes)
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


// 0x06343bc (0xe4 bytes)
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


// 0x06344a0 (0x258 bytes)
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


// 0x06346f8 (0x84 bytes)
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


// 0x063477c (0x138 bytes)
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


// 0x06348b4 (0xa8 bytes)
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


// 0x063495c (0x4c bytes)
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


// 0x06349a8 (0x6c bytes)
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


// 0x0634a14 (0xc0 bytes)
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


// 0x0634ad4 (0xc0 bytes)
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


// 0x0634b94 (0x4c bytes)
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


// 0x0634be0 (0xb0 bytes)
// strings: 00671aa8: '%s(%d) : ERROR snd_GetStreamLayerHandle: handle is invalid!\n' | 00671358: 'common/snd_stream.cpp'

undefined8 FUN_00634be0(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar3;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071b044;
  iVar3 = FUN_00634b94();
  if (iVar3 < 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f1c));
    return 0;
  }
  if (iVar3 == 0) {
    return param_1;
  }
  uVar2 = FUN_00634ad4(param_1,param_2,0x14f8);
  return uVar2;
}


// 0x0634c90 (0x164 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f18));
    return;
  }
  iVar4 = 0;
  if (param_2 < 1) {
    if (param_2 == 0) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f0c));
      goto LAB_00634d34;
    }
  }
  else {
    do {
      while (param_2 + -1 <= iVar4) {
        iVar4 = iVar4 + 1;
        snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f10));
        if (param_2 == iVar4) goto LAB_00634d24;
      }
      iVar4 = iVar4 + 1;
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f14));
    } while (param_2 != iVar4);
  }
LAB_00634d24:
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f08));
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


// 0x0634df4 (0x8 bytes)
void FUN_00634df4(undefined8 param_1)

{
  FUN_00634c90(param_1,0);
  return;
}


// 0x0634dfc (0x200 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f04));
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


// 0x0634ffc (0x54 bytes)
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


// 0x0635050 (0xcc bytes)
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

ulonglong FUN_00635050(ulonglong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
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


// 0x063511c (0xe8 bytes)
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

ulonglong FUN_0063511c(ulonglong param_1,uint *param_2)

{
  int iVar1;
  
  if (param_2 == (uint *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
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


// 0x0635204 (0x1fc bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f50));
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


// 0x0635400 (0xc4 bytes)
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


// 0x06354c4 (0x80 bytes)
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


// 0x0635544 (0x78 bytes)
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


// 0x06355bc (0x120 bytes)
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4
FUN_006355bc(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<16> local_40;
  
  uVar2 = 0;
  if (param_2 == (undefined4 *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
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


// 0x06356dc (0x140 bytes)
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_006356dc(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  GPiece<40> local_50;
  
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}


// 0x063581c (0x128 bytes)
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_0063581c(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  GPiece<40> local_50;
  
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}


// 0x0635944 (0x128 bytes)
// strings: 00671a50: '%s(%d) : Invalid parameter.\n' | 00671358: 'common/snd_stream.cpp'

undefined4 FUN_00635944(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<32> local_50;
  
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}


// 0x0635a6c (0x2a4 bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
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
      memcpy((void *)(*(int *)(iVar5 + 0x6a8) + 0x248),param_2,0x1b0);
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ee8));
  return 0;
}


// 0x0635d10 (0x2e8 bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ee0));
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
          snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ed8));
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
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7edc));
    }
  }
  return 0;
}


// 0x0635ff8 (0x1ec bytes)
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
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ed8));
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
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ed4));
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


// 0x06361e4 (0xc0 bytes)
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
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ed0));
  return 0;
}


// 0x06362a4 (0x88 bytes)
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
  return 0;
}


// 0x063632c (0xb8 bytes)
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
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ecc));
  return 0;
}


// 0x06363e4 (0xbc bytes)
// strings: 00671358: 'common/snd_stream.cpp' | 00671d18: '%s(%d) : Invalid SndFileParams.\n'

undefined8 FUN_006363e4(int *param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ec8));
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


// 0x06364a0 (0x278 bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    return 0;
  }
  if ((*param_2 & 0xfffffffc) != 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ec4));
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
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ec0));
  return 0;
}


// 0x0636718 (0xc4 bytes)
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


// 0x06367dc (0x5a4 bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7f50));
    uVar21 = 0xfffffff9;
  }
  else {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b044 + -0x7ea8));
    snd_Printf((char)*(undefined4 *)(puVar18 + -0x7ea4));
    piVar1 = *(int **)(puVar18 + -0x7ffc);
    memset(piVar1,0,0x240);
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
          snd_Printf((char)*(undefined4 *)(puVar18 + -0x7e94));
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
              memset(uVar35 & 0xffffffff,0,iVar30);
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
                memset(puVar26,0,0x1f58);
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
                memset(iVar37,0,0x58c);
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
          snd_Printf((char)*(undefined4 *)(puVar18 + -0x7e90));
        }
        uVar21 = 0xfffffffd;
        piVar1[0x28] = 0;
        *piVar3 = 0;
      }
    }
  }
  return uVar21;
}


// 0x0636d80 (0xc bytes)
ulonglong FUN_00636d80(ulonglong param_1,ulonglong param_2)

{
  return (param_1 & 0xffffffff) / (param_2 & 0xffffffff) & 0xffffff80;
}


// 0x0636d8c (0x20 bytes)
undefined4 FUN_00636d8c(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0xc + 0x14);
}


// 0x0636dac (0x8 bytes)
undefined4 FUN_00636dac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x69c);
}


// 0x0636db4 (0x1c bytes)
undefined4 FUN_00636db4(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + 0xd4);
}


// 0x0636dd0 (0x18 bytes)
void FUN_00636dd0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0xd4) = param_3;
  return;
}


// 0x0636de8 (0x18 bytes)
undefined4 FUN_00636de8(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x160);
}


// 0x0636e00 (0x18 bytes)
void FUN_00636e00(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x160) = param_3;
  return;
}


// 0x0636e18 (0x18 bytes)
undefined4 FUN_00636e18(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x15c);
}


// 0x0636e30 (0x18 bytes)
void FUN_00636e30(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x15c) = param_3;
  return;
}


// 0x0636e48 (0x18 bytes)
undefined4 FUN_00636e48(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x164);
}


// 0x0636e60 (0x18 bytes)
void FUN_00636e60(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x164) = param_3;
  return;
}


// 0x0636e78 (0x14 bytes)
int FUN_00636e78(int param_1,int param_2)

{
  return param_2 * 0x58 + param_1 + 0x118;
}


// 0x0636e8c (0x18 bytes)
undefined4 FUN_00636e8c(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x168);
}


// 0x0636ea4 (0x18 bytes)
void FUN_00636ea4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x168) = param_3;
  return;
}


// 0x0636ebc (0x18 bytes)
undefined4 FUN_00636ebc(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x58 + 0x158);
}


// 0x0636ed4 (0x18 bytes)
void FUN_00636ed4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x58 + 0x158) = param_3;
  return;
}


// 0x0636eec (0x28 bytes)
undefined4 FUN_00636eec(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006407e0();
  return uVar1;
}


// 0x0636f14 (0x58 bytes)
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


// 0x0636f6c (0xe8 bytes)
undefined4 FUN_00636f6c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  memset(param_1,0,0x6a0);
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


// 0x0637054 (0x40 bytes)
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


// 0x0637094 (0x28 bytes)
uint FUN_00637094(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 4);
  uVar1 = (int)uVar2 >> 0x1f;
  return ((uVar1 ^ uVar2) - uVar1) - 1 >> 0x1f;
}


// 0x06370bc (0x28 bytes)
int FUN_006370bc(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_1[2];
  if (iVar1 < 0) {
    iVar1 = iVar1 + *param_1 * 2;
  }
  return iVar1;
}


// 0x06370e4 (0x1c bytes)
int FUN_006370e4(int *param_1)

{
  return param_1[1] - (param_1[1] / *param_1) * *param_1;
}


// 0x0637100 (0x1c bytes)
int FUN_00637100(int *param_1)

{
  return param_1[2] - (param_1[2] / *param_1) * *param_1;
}


// 0x063711c (0x30 bytes)
int FUN_0063711c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (param_2 + param_1[2]) - ((param_2 + param_1[2]) / (iVar1 * 2)) * iVar1 * 2;
  return iVar2 - (iVar2 / iVar1) * iVar1;
}


// 0x063714c (0x24 bytes)
void FUN_0063714c(int *param_1)

{
  param_1[1] = (param_1[1] + 1) - ((param_1[1] + 1) / (*param_1 * 2)) * *param_1 * 2;
  return;
}


// 0x0637170 (0x24 bytes)
void FUN_00637170(int *param_1)

{
  param_1[2] = (param_1[2] + 1) - ((param_1[2] + 1) / (*param_1 * 2)) * *param_1 * 2;
  return;
}


// 0x0637194 (0x40 bytes)
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


// 0x06371d4 (0x28 bytes)
uint FUN_006371d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 4);
  uVar1 = (int)uVar2 >> 0x1f;
  return ((uVar1 ^ uVar2) - uVar1) - 1 >> 0x1f;
}


// 0x06371fc (0x28 bytes)
int FUN_006371fc(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_1[3];
  if (iVar1 < 0) {
    iVar1 = iVar1 + *param_1 * 2;
  }
  return iVar1;
}


// 0x0637224 (0x24 bytes)
void FUN_00637224(int *param_1)

{
  param_1[3] = (param_1[3] + 1) - ((param_1[3] + 1) / (*param_1 * 2)) * *param_1 * 2;
  return;
}


// 0x0637248 (0x18 bytes)
void FUN_00637248(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// 0x0637260 (0x44 bytes)
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


// 0x06372a4 (0x1c bytes)
ulonglong FUN_006372a4(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1 & 0x7fff;
  if ((short)param_1 < 0) {
    uVar1 = uVar1 | 0x80000000;
  }
  return uVar1;
}


// 0x06372c0 (0x24 bytes)
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


// 0x06372e4 (0x4 bytes)
void FUN_006372e4(void)

{
  return;
}


// 0x06372e8 (0xe0 bytes)
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


// 0x06373c8 (0x2c bytes)
int FUN_006373c8(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (**(int **)(PTR_PTR_0071b050 + -0x7ff4) != 0) {
    iVar1 = **(int **)(PTR_PTR_0071b050 + -0x7ff4) + 0x1ee8;
  }
  return iVar1;
}


// 0x06373f4 (0xfc bytes)
// strings: 00671ed0: 'path: %s\n' | 00671ee0: 'userContext: %d\n' | 00671f38: 'dataType: %s\n' | 00671f08: 'Unknown' | 00671f48: 'sampleRate: %f\n' | 00671f58: 'numChannels: %d\n'

void FUN_006373f4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b050;
  if ((((*(char *)(param_1 + 0x245) != '\0') && (*(int *)(param_1 + 0x57c) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x57c) + 0x1e5c), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x12) != '\0')) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b050 + -0x7ff0));
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fec));
    if (6 < *(byte *)(iVar1 + 0x14)) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc8));
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc4));
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc0));
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


// 0x063753c (0x7c bytes)
// strings: 00671fa0: 'common/snd_stream_scream.cpp' | 00671f70: '%s(%d) : Invalid voice callback type %d.\n'

void FUN_0063753c(undefined8 param_1,ulonglong param_2,longlong param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if ((iVar1 == 3) || (iVar1 == 5)) {
    return;
  }
  if ((1 < (param_3 - 1U & 0xffffffff)) && (param_3 = 99, param_4 = iVar1, iVar1 != 4)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b050 + -0x7fbc));
    return;
  }
  FUN_00637260(param_2 & 0xffffffff,param_2,param_3,param_4);
  return;
}


// 0x06375b8 (0x68 bytes)
void FUN_006375b8(undefined4 *param_1,int param_2)

{
  if (*(char *)(param_2 + 0x2dc) != '\x1f') {
    return;
  }
  FUN_006316c0(*param_1,6,*(undefined4 *)(param_2 + 0xc),0);
  *(undefined1 *)(param_2 + 0x2dc) = 0x20;
  return;
}


// 0x0637620 (0xa0 bytes)
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


// 0x06376c0 (0x13c bytes)
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


// 0x06377fc (0x54 bytes)
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


// 0x0637850 (0x40 bytes)
int FUN_00637850(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ed8);
  if (iVar1 == 0) {
    iVar1 = FUN_0063e9c4(*(undefined4 *)(param_1 + 0x6a8));
  }
  return iVar1;
}


// 0x0637890 (0x1a8 bytes)
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


// 0x0637a38 (0x214 bytes)
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
  GPiece<24> local_40;
  
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


// 0x0637d2c (0x32c bytes)
// strings: 006722b8: '%s(%d) ERROR AUDIO snd_ProcessStreamTick unrecognized state = %d!\n' | 00671fa0: 'common/snd_stream_scream.cpp' | 00671fc0: 'snd_ProcessStreamTick: topTreeNode not allocated!\n' | 00671ff8: '[%d]: SndStreamEx: Rebuffering stopped. Continuing.\n' | 00672030: '[%d]: SndStreamEx: Gave up rebuffering. Just stop the sound.\n' | 00672070: '[%d]: SndStreamEx: Rebuffering....\n'

undefined4 snd_ProcessStreamTick(int param_1)

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


// 0x0638ea0 (0x338 bytes)
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


// 0x06391d8 (0x8c bytes)
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


// 0x0639264 (0xd8 bytes)
void FUN_00639264(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  GPiece<56> auStack_340;
  GPiece<736> auStack_308;
  
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


// 0x063933c (0x2b0 bytes)
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
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f60));
      return 0;
    }
    if (*(int *)(iVar7 + 0x1ee4) != *(int *)(param_2 + 0x240)) {
      snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f5c));
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


// 0x06395ec (0x1d8 bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f58));
  }
  else {
    iVar3 = *(int *)(iVar8 + 0x1ed8);
    iVar9 = 0;
    if (iVar3 == param_2) {
      iVar9 = 0;
      if (*(int *)(iVar8 + 0x1ee4) == *(int *)(iVar3 + 0x240)) {
        iVar9 = FUN_006362a4(param_4,param_5,param_6,param_7);
        if (param_4 != iVar9) {
          snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f4c));
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
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f50));
      }
    }
    else {
      snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f54));
    }
  }
  return iVar9;
}


// 0x06397c4 (0x264 bytes)
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
  GPiece<56> auStack_a0;
  
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


// 0x0639a28 (0x258 bytes)
undefined4 FUN_00639a28(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_r7;
  GPiece<12> local_30;
  GPiece<20> local_24;
  
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


// 0x0639c80 (0xa4 bytes)
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


// 0x0639d24 (0x94 bytes)
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


// 0x0639db8 (0x108 bytes)
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


// 0x0639ec0 (0xb0 bytes)
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


// 0x0639f70 (0x90 bytes)
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


// 0x063a000 (0x44 bytes)
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


// 0x063a044 (0x8 bytes)
void FUN_0063a044(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x17b0) = param_2;
  return;
}


// 0x063a04c (0x84 bytes)
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


// 0x063a0d0 (0x58 bytes)
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


// 0x063a128 (0xc bytes)
void FUN_0063a128(int param_1)

{
  *(undefined1 *)(param_1 + 0x58a) = 1;
  return;
}


// 0x063a134 (0x18 bytes)
void FUN_0063a134(int param_1)

{
  if (*(int *)(param_1 + 0x17b0) != 10) {
    return;
  }
  FUN_0063a044(param_1,0xb);
  return;
}


// 0x063a14c (0xbc bytes)
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


// 0x063a208 (0x70 bytes)
// strings: 006724d8: 'common/snd_stream_threading.cpp' | 006724a0: '%s(%d) : ERROR Interleave size %d too big in %s\n'

undefined4 FUN_0063a208(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(uint *)(*(int *)(PTR_PTR_0071b054 + -0x7ff4) + 0xa4) <
      (uint)(*(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x60))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b054 + -0x7fd8));
    uVar1 = 0xffffff93;
  }
  return uVar1;
}


// 0x063a278 (0x118 bytes)
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b054 + -0x7fcc));
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
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b054 + -0x7fd0));
  }
  return 0xffffff95;
}


// 0x063a390 (0x5c bytes)
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


// 0x063a3ec (0x18 bytes)
undefined8 FUN_0063a3ec(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_0063a390(param_1);
  return uVar1;
}


// 0x063a404 (0x7c bytes)
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


// 0x063a480 (0x44 bytes)
void FUN_0063a480(undefined4 *param_1,undefined8 param_2)

{
  FUN_0063a044(param_2,0x10);
  FUN_006084f4(*param_1,1);
  return;
}


// 0x063a4c4 (0x3d0 bytes)
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
  GPiece<8> auStack_a0;
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
            snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fbc));
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
                snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc4));
LAB_0063a868:
                iVar14 = -0x68;
                snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc0));
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


// 0x063a894 (0x224 bytes)
// strings: 00672610: '[%d]: WARNING: sndi_CloseAsyncFilePlayer has %d requests outstanding.\n'

void sndi_CloseAsyncFilePlayer(int param_1,int param_2)

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


// 0x063aab8 (0x2c0 bytes)
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
            snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f88));
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


// 0x063b9e8 (0x84 bytes)
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


// 0x063ba6c (0x3cc bytes)
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
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f80));
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
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f78));
    }
    else {
      iVar5 = FUN_0063f8ec(*(undefined1 *)(param_1 + 0x14));
      if (iVar5 == 0) {
        iVar5 = -0x69;
        snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f74));
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
              snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f58));
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
            snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f6c));
          }
        }
      }
      else {
        iVar5 = -0x68;
        snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f70));
      }
    }
  }
  else {
    iVar5 = -0x6a;
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f7c));
  }
  FUN_00639d24(param_1);
  return iVar5;
}


// 0x063be38 (0x3f0 bytes)
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
  GPiece<680> auStack_330;
  
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
          pvVar13 = memcpy(auStack_330,pvVar5,0x298);
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
                  memcpy(pvVar5,auStack_330,0x198);
                  *(int *)((int)pvVar5 + 400) = (int)pvVar5 + 0x198;
                  bVar1 = *(byte *)((int)puVar12 + 0x587);
                  bVar2 = *(byte *)((int)puVar12 + 0x586);
                  iVar14 = FUN_00631358(puVar12,pvVar5);
                  if (iVar14 == 0) {
                    snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f50));
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
                      snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f4c));
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


// 0x063c228 (0x24 bytes)
undefined1 * FUN_0063c228(undefined1 *param_1,undefined2 *param_2)

{
  *param_2 = CONCAT11(param_1[1],*param_1);
  return param_1 + 2;
}


// 0x063c24c (0x3c bytes)
undefined1 * FUN_0063c24c(undefined1 *param_1,uint *param_2)

{
  *param_2 = (uint)CONCAT11(param_1[1],*param_1) |
             (uint)(byte)param_1[2] << 0x10 | (uint)(byte)param_1[3] << 0x18;
  return param_1 + 4;
}


// 0x063c288 (0xa8 bytes)
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


// 0x063c330 (0x190 bytes)
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


// 0x063c4c0 (0xa4 bytes)
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


// 0x063c564 (0x33c bytes)
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
  GPiece<272> auStack_138;
  
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
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fec));
    uVar5 = 0xffffff99;
  }
  else {
    iVar6 = *(int *)(puVar2 + -0x7fe4);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
    *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
    uVar3 = (*(code *)*puVar1)(local_140,0,2,uVar5);
    if ((longlong)uVar3 < 0) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fe0));
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0x10))
                (local_140,*(undefined4 *)(param_1 + 0xc));
      uVar5 = 0xffffff96;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    }
    else if ((longlong)(ulonglong)**(uint **)(puVar2 + -0x7fdc) < (longlong)uVar3) {
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fd8));
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
        snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fd4));
        uVar5 = 0xffffff96;
      }
    }
  }
  return uVar5;
}


// 0x063c8a0 (0x7ec bytes)
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
  GPiece<4> local_220;
  GPiece<92> local_21c;
  GPiece<64> auStack_1c0;
  GPiece<264> auStack_180;
  
  puVar1 = PTR_PTR_0071b058;
  FUN_0064098c(auStack_1c0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),auStack_180,
               0x100,*(undefined4 *)(param_1 + 0xc));
  iVar2 = FUN_00640870(auStack_1c0,0xc,1,*(undefined4 *)(param_1 + 0xc));
  if (iVar2 < 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd0));
  }
  else if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fb8));
    FUN_00640950(auStack_1c0);
  }
  else {
    FUN_00640a20(auStack_1c0,local_21c,8,local_220,0,0xfffffffffffffffc,
                 *(undefined4 *)(param_1 + 0xc));
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fcc));
  }
  return 0;
}


// 0x063d08c (0x1938 bytes)
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
  GPiece<8> local_de8;
  char local_de0;
  char local_ddf;
  char local_dde;
  char local_ddd;
  undefined4 local_ddc;
  char local_dd8;
  char local_dd7;
  char local_dd6;
  char local_dd5;
  GPiece<36> auStack_dbc;
  GPiece<76> auStack_d98;
  int local_d4c [3];
  uint local_d40;
  uint local_d3c;
  GPiece<256> auStack_c18;
  GPiece<4> auStack_b18;
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
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fac));
    return 0;
  }
  lVar4 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                    (*(undefined4 *)(param_1 + 4),0xfffffffffffffff4,1,
                     *(undefined4 *)(param_1 + 0xc));
  if (lVar4 < 0) {
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fa8));
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
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
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
          snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fd0));
        }
        else {
          snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fbc));
        }
      }
    }
    else if (local_de0 == 'X') {
      if (((local_ddf != 'V') || (local_dde != 'A')) || (local_ddd != 'G')) goto LAB_0063d23c;
      lVar4 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 8))
                        (*(undefined4 *)(param_1 + 4),0,1,*(undefined4 *)(param_1 + 0xc));
      if (lVar4 < 0) {
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fd0));
      }
      else {
        FUN_0064098c(auStack_d98,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                     auStack_c18,0x100,*(undefined4 *)(param_1 + 0xc));
        iVar6 = FUN_00640a20(auStack_d98,auStack_dbc,0x20,&local_dec,0,0xfffffffffffffffc,
                             *(undefined4 *)(param_1 + 0xc));
        if ((iVar6 < 0) || (local_dec != 0x20)) {
          snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
        }
        else {
          FUN_00640a20(auStack_d98,local_de8,8,&local_dec,0,0xfffffffffffffffc,
                       *(undefined4 *)(param_1 + 0xc));
          snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
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
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fcc));
        goto LAB_0063d260;
      }
LAB_0063d23c:
      snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
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


// 0x063e9c4 (0x54 bytes)
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


// 0x063ea18 (0x50 bytes)
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


// 0x063ea68 (0x44 bytes)
void FUN_0063ea68(void)

{
  int iVar1;
  
  iVar1 = FUN_0061a790();
  if (iVar1 != 0) {
    FUN_0061af44(iVar1,1,8);
  }
  return;
}


// 0x063eaac (0x44 bytes)
void FUN_0063eaac(void)

{
  int iVar1;
  
  iVar1 = FUN_0061a790();
  if (iVar1 != 0) {
    FUN_0061b0c8(iVar1,1,8);
  }
  return;
}


// 0x063eaf0 (0x10c bytes)
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


// 0x063ed38 (0x64 bytes)
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


// 0x063ed9c (0x8c bytes)
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


// 0x063ee28 (0x280 bytes)
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


// 0x063f0a8 (0xb4 bytes)
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


// 0x063f15c (0x36c bytes)
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


// 0x063f4c8 (0xe0 bytes)
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


// 0x063f5a8 (0x178 bytes)
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


// 0x063f720 (0x148 bytes)
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


// 0x063f868 (0x5c bytes)
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


// 0x063f8c4 (0x1c bytes)
void FUN_0063f8c4(void)

{
  syscall_sys_timer_usleep();
  return;
}


// 0x063f8e0 (0xc bytes)
undefined4 FUN_0063f8e0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// 0x063f8ec (0x3c bytes)
undefined4 FUN_0063f8ec(uint param_1)

{
  if ((param_1 < 7) && ((1L << ((longlong)(char)param_1 & 0x7fU) & 0x56U) != 0)) {
    return 1;
  }
  return 0;
}


// 0x063f928 (0x74 bytes)
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


// 0x063f99c (0x28 bytes)
undefined4 FUN_0063f99c(void)

{
  undefined4 uVar1;
  
  uVar1 = sys_time_get_system_time();
  return uVar1;
}


// 0x063f9c4 (0x44 bytes)
undefined4 FUN_0063f9c4(undefined8 param_1)

{
  undefined4 uVar1;
  GPiece<32> local_20;
  
  uVar1 = sys_lwmutex_create(param_1,local_20);
  return uVar1;
}


// 0x063fa08 (0x44 bytes)
longlong FUN_0063fa08(int param_1)

{
  uint uVar1;
  
  uVar1 = sys_lwcond_signal(param_1 + 0x28);
  return (longlong)((ulonglong)(((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1)) << 0x20) >>
         0x3f;
}


// 0x063fa4c (0xd4 bytes)
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
  GPiece<24> auStack_40;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = FUN_0063f8e0(param_1);
  if (iVar1 != 0) {
    *param_1 = 1;
    param_1[1] = 0;
    sys_lwcond_signal(param_1 + 10);
    iVar1 = syscall_sys_ppu_thread_join(*(undefined8 *)(param_1 + 2),auStack_40);
    uVar2 = 0xffffffff;
    if (iVar1 != 0) goto LAB_0063fa90;
  }
  uVar2 = 0;
LAB_0063fa90:
  *(undefined8 *)(param_1 + 2) = 0xffffffff;
  sys_lwcond_destroy(param_1 + 10);
  sys_lwmutex_destroy(param_1 + 4);
  return uVar2;
}


