// sdk/lUnk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 42 functions, 0x61768c-0x61948c
#include <string.h>
#include "sdk/lUnk2.h"
#include "sdk/989snd.h"
#include "sdk/lUnk.h"
#include "sdk/libscream/LFO.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"

// 0x061768c (0x60 bytes)
void FUN_0061768c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b010;
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7ff0);
  puVar2 = *(undefined4 **)(PTR_PTR_0071b010 + -0x7ff4);
  iVar3 = *piVar1;
  **(undefined4 **)(PTR_PTR_0071b010 + -0x7ff8) = 0;
  *puVar2 = 0;
  if (iVar3 == 0) {
    *piVar1 = *(int *)(puVar4 + -0x7fec);
  }
  if (**(int **)(puVar4 + -0x7fe8) != 0) {
    return;
  }
  **(int **)(puVar4 + -0x7fe8) = *(int *)(puVar4 + -0x7fe4);
  return;
}


// 0x06176ec (0x4 bytes)
void FUN_006176ec(void)

{
  return;
}


// 0x06176f0 (0x3c bytes)
uint FUN_006176f0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    uVar2 = uVar2 * 0x1000193 ^ (int)cVar1;
    cVar1 = *param_1;
  }
  return uVar2;
}


// 0x061772c (0xc8 bytes)
// strings: 0066be68: 'Warning : Ran out of SCREAM bank reference tokens!  Increase the maxBanks value at SCREAM init time to fix.\n'

int FUN_0061772c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  
  puVar3 = PTR_PTR_0071b010;
  puVar1 = *(uint **)(PTR_PTR_0071b010 + -0x8000);
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    uVar4 = 0;
    piVar5 = (int *)**(undefined4 **)(PTR_PTR_0071b010 + -0x7ffc);
    if (*piVar5 != 0) {
      uVar6 = (ulonglong)uVar2;
      uVar4 = 0;
      do {
        piVar5 = piVar5 + 1;
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_006177a0;
      } while (*piVar5 != 0);
    }
    *piVar5 = param_1;
    if (uVar4 < *puVar1) {
      return uVar4 + 1;
    }
  }
LAB_006177a0:
  snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fe0));
  return 0;
}


// 0x06177f4 (0x3c bytes)
// strings: 0066bf20: 'common/loader.cpp' | 0066bed8: '%s(%d) : External memory functions are required for this platform.\n'

void FUN_006177f4(void)

{
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fdc));
  return;
}


// 0x0617830 (0x40 bytes)
// strings: 0066bed8: '%s(%d) : External memory functions are required for this platform.\n' | 0066bf20: 'common/loader.cpp'

undefined8 FUN_00617830(void)

{
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fdc));
  return 0;
}


// 0x0617870 (0xc8 bytes)
int FUN_00617870(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  snd_SynthLock();
  iVar2 = **(int **)(puVar1 + -0x7ff4);
  if (param_1 != 0) {
    for (; iVar2 != 0; iVar2 = FUN_0060d6f4(iVar2)) {
      if (iVar2 == param_1) {
        iVar2 = FUN_0060d6f4(param_1);
        snd_SynthUnlock();
        return iVar2;
      }
    }
  }
  snd_SynthUnlock();
  return iVar2;
}


// 0x0617938 (0x1cc bytes)
void FUN_00617938(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  
  puVar3 = PTR_PTR_0071b010;
  if ((byte *)**(undefined4 **)(PTR_PTR_0071b010 + -0x7fd4) != (byte *)0x0) {
    pbVar8 = (byte *)**(undefined4 **)(PTR_PTR_0071b010 + -0x7fd4);
    do {
      while (((*pbVar8 & 0x1f) != 5 || (*(int *)(pbVar8 + 0x240) != param_1))) {
        pbVar8 = *(byte **)(pbVar8 + 0x224);
        if (pbVar8 == (byte *)0x0) goto LAB_006179cc;
      }
      *(int *)(pbVar8 + 0x244) = param_3 + *(int *)(pbVar8 + 0x244);
      pbVar2 = pbVar8 + 0x224;
      *(int *)(pbVar8 + 0x240) = param_3 + param_1;
      *(int *)(pbVar8 + 0x54) = *(int *)(pbVar8 + 0x54) + param_3;
      pbVar8 = *(byte **)pbVar2;
    } while (*(byte **)pbVar2 != (byte *)0x0);
  }
LAB_006179cc:
  uVar1 = **(uint **)(puVar3 + -0x7fd0);
  if (0 < (int)uVar1) {
    uVar9 = (ulonglong)uVar1;
    iVar6 = 0;
    iVar5 = **(int **)(puVar3 + -0x7fcc);
    if ((int)uVar1 < 1) {
      uVar9 = 1;
    }
    do {
      while( true ) {
        iVar4 = iVar6 + iVar5;
        iVar6 = iVar6 + 0x68;
        if (*(int *)(iVar4 + 0x5c) == param_1) break;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_00617a1c;
      }
      *(int *)(iVar4 + 0x5c) = param_1 + param_3 * 0x40;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_00617a1c:
  iVar5 = **(int **)(puVar3 + -0x7ff4);
  if (iVar5 == param_1) {
    **(int **)(puVar3 + -0x7ff4) = param_2;
    return;
  }
  while( true ) {
    iVar6 = FUN_0060d6f4(iVar5);
    if (param_1 == iVar6) break;
    iVar5 = FUN_0060d6f4(iVar5);
  }
  iVar6 = FUN_0060d6f4(iVar5);
  if (param_1 == iVar6) {
    if (*(int *)(iVar5 + 0x30) != 0) {
      FUN_00617644(*(int *)(iVar5 + 0x30));
    }
    uVar7 = FUN_0061772c(param_2);
    *(undefined4 *)(iVar5 + 0x30) = uVar7;
    return;
  }
  return;
}


// 0x0617b04 (0x1a8 bytes)
// strings: 0066bf38: '%s(%d) : Unable to find start of bank in memory. Handle %x\n' | 0066bf20: 'common/loader.cpp'

void FUN_00617b04(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b010;
  piVar2 = *(int **)(PTR_PTR_0071b010 + -0x7fc8);
  iVar3 = *piVar2;
  if ((param_1 == 0) || (iVar3 == 0)) {
    return;
  }
  if (iVar3 == param_1) {
    snd_SynthLock();
  }
  else {
    do {
      iVar4 = iVar3;
      iVar3 = FUN_0060d6f4(iVar4);
      if (iVar3 == 0) {
        return;
      }
    } while (param_1 != iVar3);
    snd_SynthLock();
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x30) != 0) {
        FUN_00617644(*(int *)(iVar4 + 0x30));
      }
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      goto LAB_00617bd4;
    }
  }
  iVar3 = FUN_0060d6f4(param_1);
  *piVar2 = iVar3;
LAB_00617bd4:
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    piVar2 = (int *)(param_1 - *(short *)(param_1 + 0x12));
    if ((*piVar2 != 3) && (piVar2 = (int *)((uint)piVar2 & 0xfffffff0), *piVar2 != 3)) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fc4));
    }
    (**(code **)**(undefined4 **)(puVar1 + -0x7fe8))(piVar2);
  }
  snd_SynthUnlock();
  return;
}


// 0x0617cac (0xa4 bytes)
undefined4 FUN_00617cac(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b010 + -0x7ff4);
  if (param_1 - 1U < 0xfffffffe) {
    for (; iVar1 != 0; iVar1 = FUN_0060d6f4(iVar1)) {
      if (iVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}


// 0x0617d50 (0xc4 bytes)
uint FUN_00617d50(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = FUN_00617cac(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  snd_SynthLock();
  iVar2 = **(int **)(puVar1 + -0x7fc8);
  do {
    if (iVar2 == 0) {
      uVar3 = 0;
LAB_00617de0:
      snd_SynthUnlock();
      return uVar3 ^ 1;
    }
    if (param_1 == iVar2) {
      uVar3 = 1;
      goto LAB_00617de0;
    }
    iVar2 = FUN_0060d6f4(iVar2);
  } while( true );
}


// 0x0617e14 (0x94 bytes)
undefined4 FUN_00617e14(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b010 + -0x7ff8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = FUN_0060d6f4(iVar1);
  }
  return 1;
}


// 0x0617ea8 (0xc4 bytes)
void FUN_00617ea8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  snd_SynthLock();
  iVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar2 == 0) {
    *param_2 = param_1;
    snd_SynthUnlock();
    return;
  }
  iVar1 = *(int *)(iVar2 + 0x30);
  while (iVar1 != 0) {
    iVar2 = FUN_0060d6f4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x30);
  }
  uVar3 = FUN_0061772c(param_1);
  *(undefined4 *)(iVar2 + 0x30) = uVar3;
  snd_SynthUnlock();
  return;
}


// 0x0617f6c (0x44 bytes)
undefined8 FUN_00617f6c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(PTR_PTR_0071b010 + -0x7ff4);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  FUN_00617ea8(param_1,uVar1);
  return 0;
}


// 0x0617fb0 (0xe8 bytes)
// strings: 0066bf78: '%s(%d) : Invalid .bnk file.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00617fb0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar3;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b010;
  if ((*param_1 == 1) || (param_3 = 0x1a9, *param_1 == 3)) {
    iVar3 = (int)param_1 + param_1[2];
    if ((*(uint *)(iVar3 + 8) & 1) != 0) {
      FUN_00617ea8(iVar3,*(undefined4 *)(PTR_PTR_0071b010 + -0x7ff4),param_3);
      return iVar3;
    }
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x20;
    *(int *)(iVar3 + 0x24) = param_1[4] - param_1[2];
    FUN_00617f6c(iVar3);
    uVar2 = ((ulonglong)*(uint *)(iVar3 + 8) & 7) << 0x1c | (ulonglong)(*(uint *)(iVar3 + 8) >> 4);
    *(uint *)(iVar3 + 8) = (uint)(uVar2 << 4) | (uint)uVar2 >> 0x1c;
  }
  else {
    iVar3 = 0;
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fc0));
    **(undefined4 **)(puVar1 + -0x7fbc) = 0x107;
  }
  return iVar3;
}


// 0x0618098 (0x2f4 bytes)
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

short FUN_00618098(int *param_1,int param_2,ulonglong param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar2 = PTR_PTR_0071b010;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_2 == 0) || (param_4 == (int *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar2 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fb0),0);
    snd_SynthLock();
  }
  else {
    snd_SynthLock();
  }
  if (param_1 == (int *)0x0) {
    iVar5 = **(int **)(puVar2 + -0x7ff4);
    if (iVar5 != 0) {
      do {
        sVar7 = FUN_00618098(iVar5,param_2,param_3 & 0xffffffff,param_4);
        if (-1 < sVar7) goto LAB_0061831c;
        iVar5 = FUN_0060d6f4(iVar5);
      } while (iVar5 != 0);
    }
    iVar5 = **(int **)(puVar2 + -0x7fac);
    if (iVar5 != 0) {
      do {
        sVar7 = FUN_00618098(iVar5,param_2,param_3 & 0xffffffff,param_4);
        if (-1 < sVar7) {
LAB_0061831c:
          *param_4 = iVar5;
          snd_SynthUnlock();
          return sVar7;
        }
        iVar5 = FUN_0060d6f4(iVar5);
      } while (iVar5 != 0);
    }
  }
  else if (((*param_1 == 0x6b6c4253) && ((param_1[2] & 0x100U) != 0)) &&
          (*(short *)((int)param_1 + 0x16) != 0)) {
    if ((uint)param_1[1] < 4) {
      return -1;
    }
    iVar3 = FUN_0060d8b0(param_1);
    uVar9 = param_3 - (longlong)
                      (int)((param_3 & 0xffffffff) /
                           ((longlong)*(short *)((int)param_1 + 0x16) & 0xffffffffU)) *
                      (longlong)(int)*(short *)((int)param_1 + 0x16);
    iVar4 = FUN_0060d824(param_1);
    iVar5 = FUN_0060d824(param_1);
    lVar8 = (uVar9 & 0xfffffff) << 4;
    iVar5 = *(int *)(iVar5 + 0xc);
    if ((int)*(short *)((int)lVar8 + iVar3 + 8) == (int)uVar9) {
      do {
        piVar1 = (int *)(iVar3 + (int)lVar8);
        if ((piVar1[1] == (int)param_3) &&
           (iVar6 = FUN_005cc784(iVar4 + iVar5 + *piVar1,param_2), iVar6 == 0)) {
          if (param_4 != (int *)0x0) {
            *param_4 = (int)param_1;
          }
          snd_SynthUnlock();
          return *(short *)(piVar1 + 3);
        }
        lVar8 = ((longlong)*(short *)((int)piVar1 + 10) & 0xfffffffU) << 4;
      } while (*(short *)((int)piVar1 + 10) != -1);
    }
  }
  snd_SynthUnlock();
  return -1;
}


// 0x061838c (0x58 bytes)
void FUN_0061838c(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006176f0(param_2);
  FUN_00618098(param_1,param_2,uVar1,param_3);
  return;
}


// 0x06183e4 (0x164 bytes)
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

undefined4 FUN_006183e4(int param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_PTR_0071b010;
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar1 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fb0),0);
  }
  snd_SynthLock();
  iVar2 = **(int **)(puVar1 + -0x7ff4);
  do {
    if (iVar2 == 0) {
      uVar4 = 0;
LAB_00618470:
      snd_SynthUnlock();
      return uVar4;
    }
    if (param_1 == iVar2) {
      if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
        uVar4 = 1;
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
        uVar3 = FUN_0060d824(param_1);
        uVar4 = 1;
        strcpy(param_2,uVar3,8);
        param_2[8] = 0;
      }
      goto LAB_00618470;
    }
    iVar2 = FUN_0060d6f4(iVar2);
  } while( true );
}


// 0x0618548 (0xf8 bytes)
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618548(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b010;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar1 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fb0),0);
  }
  snd_SynthLock();
  for (iVar4 = **(int **)(puVar1 + -0x7ff4); iVar4 != 0; iVar4 = FUN_0060d6f4(iVar4)) {
    if ((*(uint *)(iVar4 + 8) & 0x100) != 0) {
      uVar2 = FUN_0060d824(iVar4);
      iVar3 = FUN_005ccb28(uVar2,param_1,8);
      if (iVar3 == 0) break;
    }
  }
  snd_SynthUnlock();
  return iVar4;
}


// 0x0618640 (0xcc bytes)
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618640(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  
  puVar3 = PTR_PTR_0071b010;
  if (param_1 == (char *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar3 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fb0),0);
  }
  sVar4 = strlen(param_1);
  iVar6 = 0;
  uVar5 = 0;
  while( true ) {
    bVar1 = (int)sVar4 <= iVar6;
    pcVar2 = param_1 + iVar6;
    iVar6 = iVar6 + 4;
    if (bVar1) break;
    uVar5 = uVar5 + (int)*pcVar2;
  }
  uVar5 = ((int)uVar5 >> 0x1f ^ uVar5) - ((int)uVar5 >> 0x1f);
  return uVar5 + (((int)uVar5 >> 5) + (uint)((int)uVar5 < 0 && (uVar5 & 0x1f) != 0)) * -0x20;
}


// 0x061870c (0xbc bytes)
void FUN_0061870c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = **(int **)(PTR_PTR_0071b010 + -0x7fc8);
  do {
    iVar1 = iVar2;
    if (iVar2 == 0) {
      return;
    }
    while( true ) {
      iVar2 = FUN_0060d6f4(iVar1);
      uVar3 = FUN_006271cc();
      uVar4 = (uVar3 & 0xffff) - (uint)*(ushort *)(iVar1 + 0x14);
      if ((uVar3 & 0xffff) < (uint)*(ushort *)(iVar1 + 0x14)) {
        uVar4 = uVar4 + 0x10000;
      }
      uVar3 = FUN_006246bc();
      if (uVar4 < uVar3) break;
      FUN_00617b04(iVar1);
      iVar1 = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
  } while( true );
}


// 0x06187c8 (0x170 bytes)
void FUN_006187c8(int param_1,int *param_2)

{
  undefined2 uVar2;
  int iVar1;
  int iVar3;
  
  iVar1 = *param_2;
  if ((param_1 == 0) || (iVar1 == 0)) {
    return;
  }
  if (iVar1 == param_1) {
    FUN_0060abc8(iVar1,1);
    uVar2 = FUN_006271cc();
    *(undefined2 *)(iVar1 + 0x14) = uVar2;
    FUN_0060efb4(iVar1,1);
    snd_SynthLock();
    param_1 = iVar1;
  }
  else {
    do {
      iVar3 = iVar1;
      iVar1 = FUN_0060d6f4(iVar3);
      if (iVar1 == 0) {
        return;
      }
    } while (param_1 != iVar1);
    FUN_0060abc8(param_1,1);
    uVar2 = FUN_006271cc();
    *(undefined2 *)(param_1 + 0x14) = uVar2;
    FUN_0060efb4(param_1,1);
    snd_SynthLock();
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x30) != 0) {
        FUN_00617644(*(int *)(iVar3 + 0x30));
      }
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      goto LAB_006188b0;
    }
  }
  iVar1 = FUN_0060d6f4(param_1);
  *param_2 = iVar1;
LAB_006188b0:
  snd_SynthUnlock();
  return;
}


// 0x0618938 (0xf0 bytes)
// strings: 0066bf20: 'common/loader.cpp' | 0066bfb8: '%s(%d) : Attempt to unload unloaded block handle %x.\n' | 0066bff0: '%s(%d) : ERROR: Attempt to unload a block that is being relocated. %x.\n'

void FUN_00618938(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = FUN_00617cac();
  if (iVar2 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fa8));
    return;
  }
  snd_SynthLock();
  if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
    FUN_006187c8(param_1,*(undefined4 *)(puVar1 + -0x7ff4),0x292,param_1);
    FUN_00617ea8(param_1,*(undefined4 *)(puVar1 + -0x7fc8));
    snd_SynthUnlock();
    return;
  }
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fa4));
  snd_SynthUnlock();
  return;
}


// 0x0618a28 (0x80 bytes)
void FUN_00618a28(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b010;
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7ff8);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    snd_UnloadBank(iVar2,1);
    iVar2 = *piVar1;
  }
  piVar1 = *(int **)(puVar3 + -0x7ff4);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    FUN_00618938(iVar2);
    iVar2 = *piVar1;
  }
  return;
}


// 0x0618aa8 (0x174 bytes)
void FUN_00618aa8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7ff8);
  piVar2 = (int *)*piVar1;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0x6b6c4253) {
    FUN_006187c8(param_1,*(undefined4 *)(PTR_PTR_0071b010 + -0x7ff4));
    return;
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (piVar2 == param_1) {
    FUN_0060abc8(param_1,1);
    snd_SynthLock();
  }
  else {
    do {
      piVar4 = piVar2;
      piVar2 = (int *)FUN_0060d6f4(piVar4);
      if (piVar2 == (int *)0x0) {
        return;
      }
    } while (param_1 != piVar2);
    FUN_0060abc8(piVar2,1);
    snd_SynthLock();
    if (piVar4 != (int *)0x0) {
      if (piVar4[0xc] != 0) {
        FUN_00617644(piVar4[0xc]);
      }
      piVar4[0xc] = piVar2[0xc];
      goto LAB_00618b90;
    }
  }
  iVar3 = FUN_0060d6f4(piVar2);
  *piVar1 = iVar3;
LAB_00618b90:
  snd_SynthUnlock();
  return;
}


// 0x0618c1c (0x94 bytes)
// strings: 0066c038: '%s(%d) : File read error.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618c1c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = 0;
  if (-1 < **(int **)(PTR_PTR_0071b010 + -0x7fa0)) {
    iVar2 = FUN_00630754(**(int **)(PTR_PTR_0071b010 + -0x7fa0),param_1,param_2);
    if (param_2 != iVar2) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f9c));
      **(undefined4 **)(puVar1 + -0x7fbc) = 0x101;
    }
  }
  return iVar2;
}


// 0x0618cb0 (0x88 bytes)
undefined4 FUN_00618cb0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7fa0);
  iVar2 = *piVar1;
  if (-1 < iVar2) {
    FUN_006307ac(iVar2,param_1 + **(int **)(PTR_PTR_0071b010 + -0x7f98),0);
    uVar3 = FUN_006307ac(*piVar1,0,1);
  }
  return uVar3;
}


// 0x0618d38 (0x140 bytes)
// strings: 0066c058: '%s(%d) : Invalid .bnk file format. May be for different platform.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618d38(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iStack_30;
  uint uStack_2c;
  uint auStack_28 [6];
  
  puVar2 = PTR_PTR_0071b010;
  if (-1 < **(int **)(PTR_PTR_0071b010 + -0x7fa0)) {
    FUN_00618cb0(0);
    iVar3 = FUN_00618c1c(&iStack_30,0x20);
    if (iVar3 == 0x20) {
      if (iStack_30 - 1U < 3) {
        iVar3 = 0;
        if (1 < (int)uStack_2c) {
          uVar5 = 1;
          uVar7 = (ulonglong)uStack_2c - 1 & 0xffffffff;
          lVar4 = 0;
          do {
            lVar6 = (uVar5 & 0x1fffffff) << 3;
            uVar5 = uVar5 + 1;
            if (*(uint *)((int)auStack_28 + (int)lVar4) < *(uint *)((int)auStack_28 + (int)lVar6)) {
              lVar4 = lVar6;
            }
            iVar3 = (int)lVar4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        iVar1 = *(int *)((int)auStack_28 + iVar3);
        iVar3 = *(int *)((int)auStack_28 + iVar3 + 4);
        FUN_00618cb0(0);
        return iVar1 + iVar3;
      }
      snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f94));
      return 0;
    }
  }
  return 0;
}


// 0x0618e78 (0x134 bytes)
// strings: 0066bf20: 'common/loader.cpp' | 0066c0a0: '%s(%d) : Memory allocation error.\n'

int FUN_00618e78(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_PTR_0071b010;
  iVar3 = FUN_00618d38();
  if (iVar3 != 0) {
    iVar4 = (**(code **)**(undefined4 **)(puVar1 + -0x7ff0))(iVar3,1);
    if (iVar4 == 0) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f90));
    }
    else {
      iVar5 = FUN_00618c1c(iVar4,iVar3,0x1c9);
      if (iVar3 == iVar5) {
        iVar3 = FUN_00617fb0();
        *(short *)(iVar3 + 0x12) = (short)iVar3 - (short)iVar4;
        uVar2 = ((ulonglong)*(uint *)(iVar3 + 8) & 0x1f) << 0x1a |
                (ulonglong)(*(uint *)(iVar3 + 8) >> 6);
        *(uint *)(iVar3 + 8) = (uint)(uVar2 << 6) | (uint)uVar2 >> 0x1a;
        return iVar3;
      }
      (**(code **)**(undefined4 **)(puVar1 + -0x7fe8))(iVar4);
    }
  }
  return 0;
}


// 0x0618fac (0x54 bytes)
void FUN_00618fac(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7fa0);
  iVar2 = *piVar1;
  if (-1 < iVar2) {
    cellFsClose(iVar2);
    *piVar1 = -1;
  }
  return;
}


// 0x0619000 (0xb8 bytes)
// strings: 0066c0c8: '%s(%d) : File open error.\n' | 0066bf20: 'common/loader.cpp'

undefined4 FUN_00619000(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = FUN_00630808(param_1,0);
  **(int **)(puVar1 + -0x7fa0) = iVar2;
  if (-1 < iVar2) {
    **(undefined4 **)(puVar1 + -0x7f98) = param_2;
    FUN_006307ac(iVar2,param_2,0);
    return 1;
  }
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f8c));
  return 0;
}


// 0x06190b8 (0x98 bytes)
ushort FUN_006190b8(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  psVar2 = *(short **)(PTR_PTR_0071b014 + -0x8000);
  sVar1 = *psVar2;
  iVar4 = (int)(((longlong)sVar1 & 0xffffffffU) << 1);
  if (sVar1 < 0x93) {
    iVar3 = *(int *)(PTR_PTR_0071b014 + -0x7ffc);
    uVar5 = *(ushort *)(iVar3 + iVar4 + 0xce) ^ *(ushort *)(iVar3 + iVar4);
    *(ushort *)(iVar3 + iVar4) = uVar5;
  }
  else {
    iVar3 = *(int *)(PTR_PTR_0071b014 + -0x7ffc);
    uVar5 = *(ushort *)(iVar3 + iVar4) ^ *(ushort *)(iVar3 + iVar4 + -0x126);
    *(ushort *)(iVar3 + iVar4) = uVar5;
    if (0xf8 < sVar1) {
      *psVar2 = 0;
      return uVar5;
    }
  }
  *psVar2 = sVar1 + 1;
  return uVar5;
}


// 0x0619150 (0x30 bytes)
ulonglong FUN_00619150(void)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)**(int **)(PTR_PTR_0071b014 + -0x7ff8) * 0x15a4e35 + 1;
  **(int **)(PTR_PTR_0071b014 + -0x7ff8) = (int)uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}


// 0x0619180 (0xe4 bytes)
void FUN_00619180(uint param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  longlong lVar10;
  
  puVar1 = *(undefined2 **)(PTR_PTR_0071b014 + -0x8000);
  puVar5 = *(ushort **)(PTR_PTR_0071b014 + -0x7ffc);
  **(uint **)(PTR_PTR_0071b014 + -0x7ff8) = param_1 & 0xffff;
  *puVar1 = 0;
  puVar8 = puVar5;
  do {
    uVar4 = FUN_00619150();
    puVar9 = puVar8 + 1;
    *puVar8 = uVar4;
    puVar8 = puVar9;
    puVar3 = puVar5;
  } while (puVar9 != puVar5 + 0xfa);
  do {
    puVar8 = puVar3;
    uVar4 = FUN_00619150();
    if (0x4000 < uVar4) {
      *puVar8 = *puVar8 | 0x8000;
    }
    puVar3 = puVar8 + 1;
  } while (puVar8 + 1 != puVar5 + 0xfa);
  uVar6 = 0xffffffffffffffff;
  lVar10 = 0x10;
  uVar7 = 0xffffffffffff8000;
  puVar5 = puVar8 + -0xf6;
  do {
    uVar2 = (ushort)uVar6;
    uVar6 = (uVar6 << 0x20) >> 0x21 & 0x7fff;
    uVar4 = (ushort)uVar7;
    uVar7 = (uVar7 << 0x20) >> 0x21 & 0x7fff;
    *puVar5 = uVar2 & *puVar5 | uVar4;
    lVar10 = lVar10 + -1;
    puVar5 = puVar5 + 0xb;
  } while (lVar10 != 0);
  return;
}


// 0x0619264 (0x18 bytes)
void FUN_00619264(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b018 + -0x8000) = param_1;
  return;
}


// 0x061927c (0x1c bytes)
undefined4 FUN_0061927c(void)

{
  return **(undefined4 **)(PTR_PTR_0071b018 + -0x8000);
}


// 0x0619298 (0x34 bytes)
void FUN_00619298(longlong param_1)

{
  if (param_1 != 0) {
    **(undefined4 **)(PTR_PTR_0071b018 + -0x7ffc) = (int)param_1;
    return;
  }
  **(undefined4 **)(PTR_PTR_0071b018 + -0x7ffc) = *(undefined4 *)(PTR_PTR_0071b018 + -0x7ff8);
  return;
}


// 0x06192cc (0x18 bytes)
void FUN_006192cc(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b018 + -0x7ff4) = param_1;
  return;
}


// 0x06192e4 (0x8c bytes)
undefined4 FUN_006192e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + param_2 + -1) = 0;
      uVar1 = FUN_005c8a94(param_1,param_2 + -1,param_3,param_4);
      return uVar1;
    }
  }
  uVar1 = FUN_005c8a94(0,0,param_3,param_4);
  return uVar1;
}


// 0x0619370 (0x70 bytes)
void FUN_00619370(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b018;
  uVar1 = *(undefined4 *)(PTR_PTR_0071b018 + -0x7ff0);
  FUN_005c8a94(uVar1,0x200,param_1,param_2);
  (**(code **)**(undefined4 **)(puVar2 + -0x7ffc))(uVar1);
  return;
}


// 0x06193e0 (0x44 bytes)
undefined4 FUN_006193e0(void)

{
  undefined4 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  uVar1 = FUN_006192e4();
  return uVar1;
}


// 0x0619424 (0x68 bytes)
void FUN_00619424(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  if (**(int **)(PTR_PTR_0071b018 + -0x8000) != 0) {
    uStack00000038 = param_2;
    uStack00000040 = param_3;
    uStack00000048 = param_4;
    uStack00000050 = param_5;
    uStack00000058 = param_6;
    uStack00000060 = param_7;
    uStack00000068 = param_8;
    FUN_00619370(param_1,&stack0x00000038);
  }
  return;
}


