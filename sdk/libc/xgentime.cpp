// sdk/libc/xgentime.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x5db6ac-0x5dbdbc
#include "sdk/libc/xgentime.h"
#include "sdk/libc/strtol.h"
#include "sdk/libc/xgettime.h"

// SDK libc.a(xgentime.o): isleapyr  [fuzzy 1.000 match]
// 0x05db6ac (0x74 bytes)
bool FUN_005db6ac(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 & 3) == 0) {
    bVar1 = true;
    if ((param_1 == ((int)param_1 / 100) * 100) && (399 < param_1 - 40000)) {
      return param_1 + 0x1d64f < 400;
    }
  }
  return bVar1;
}


// SDK libc.a(xgentime.o): wkyr  [fuzzy 1.000 match]
// 0x05db720 (0x54 bytes)
int FUN_005db720(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) + 7;
  uVar1 = (longlong)(iVar2 / 7 + (iVar2 >> 0x1f)) - (longlong)(iVar2 >> 0x1f);
  return ((param_3 - (iVar2 - ((int)((uVar1 & 0xffffffff) << 3) - (int)uVar1))) + 7) / 7;
}


// SDK libc.a(xgentime.o): ISOwkyr  [fuzzy 1.000 match]
// 0x05db774 (0x114 bytes)
int FUN_005db774(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar1 = FUN_005db6ac();
  iVar2 = param_3 - iVar1;
  iVar4 = ((param_2 - param_3) + 0x173) % 7;
  iVar1 = iVar4 + iVar1 + 0x16d;
  uVar3 = (longlong)(iVar1 / 7 + (iVar1 >> 0x1f)) - (longlong)(iVar1 >> 0x1f);
  iVar1 = iVar1 - ((int)((uVar3 & 0xffffffff) << 3) - (int)uVar3);
  if (iVar2 < 0x16c) {
    if (0x16a < iVar2) goto LAB_005db85c;
    if (iVar2 < 0x16a) goto LAB_005db814;
  }
  else {
    if (iVar1 == 2) {
      return -1;
    }
LAB_005db85c:
    if (iVar1 == 3) {
      return -1;
    }
  }
  if (iVar1 == 4) {
    return -1;
  }
LAB_005db814:
  iVar1 = FUN_005db720(1,param_2,param_3);
  if (iVar4 - 2U < 3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// SDK libc.a(xgentime.o): ISOyear  [fuzzy 1.000 match]
// 0x05db888 (0x78 bytes)
int FUN_005db888(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005db774(param_1);
  if (iVar1 == 0) {
    param_1 = param_1 + -1;
  }
  else if (iVar1 < 1) {
    return param_1 + 1;
  }
  return param_1;
}


// SDK libc.a(xgentime.o): getval  [fuzzy 1.000 match]
// 0x05db900 (0xf0 bytes)
char * FUN_005db900(int param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  param_2 = param_2 & (longlong)((int)~(uint)param_2 >> 0x1f);
  if ((param_5 != 0x4f) ||
     (pcVar4 = (char *)FUN_005dc734(*(undefined4 *)(param_6 + 0x48),(int)param_2,param_4),
     *param_4 < 1)) {
    pcVar3 = (char *)(param_3 + param_1);
    *param_4 = param_3;
    *pcVar3 = '\0';
    pcVar4 = pcVar3;
    if (0 < param_3) {
      pcVar4 = pcVar3 + -param_3;
      do {
        iVar1 = (int)param_2 >> 0x1f;
        pcVar3 = pcVar3 + -1;
        uVar2 = (longlong)((int)param_2 / 10 + iVar1) - (longlong)iVar1;
        *pcVar3 = ((char)param_2 -
                  ((char)((uVar2 & 0xffffffff) << 1) + (char)((uVar2 & 0xffffffff) << 3))) + '0';
        param_3 = param_3 + -1;
        param_2 = uVar2;
      } while (param_3 != 0);
    }
  }
  return pcVar4;
}


// SDK libc.a(xgentime.o): cmp_era_date  [fuzzy 1.000 match]
// 0x05db9f0 (0x140 bytes)
undefined4 FUN_005db9f0(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_30 [6];
  
  iVar2 = FUN_005c8a8c(param_2,local_30,10);
  if ((param_2 == local_30[0]) || (*local_30[0] != '/')) {
LAB_005dba4c:
    uVar3 = 2;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14) + 0x76c;
    bVar1 = iVar4 < iVar2;
    if (iVar2 == iVar4) {
      iVar2 = FUN_005c8a8c(local_30[0] + 1,local_30,10);
      if ((local_30[0] + 1 == local_30[0]) || (*local_30[0] != '/')) goto LAB_005dba4c;
      iVar4 = *(int *)(param_1 + 0x10) + 1;
      bVar1 = iVar4 < iVar2;
      if (iVar2 == iVar4) {
        iVar2 = FUN_005c8a8c(local_30[0] + 1,local_30,10);
        if (local_30[0] + 1 == local_30[0]) goto LAB_005dba4c;
        bVar1 = *(int *)(param_1 + 0xc) < iVar2;
        if (iVar2 == *(int *)(param_1 + 0xc)) {
          return 0;
        }
      }
    }
    if (!bVar1) {
      return 1;
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// SDK libc.a(xgentime.o): getera  [fuzzy 1.000 match]
// 0x05dbb30 (0x1a8 bytes)
char * FUN_005dbb30(undefined8 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  GPiece<16> auStack_50;
  
  iVar6 = 0;
  pcVar2 = (char *)FUN_005dc734(*(undefined4 *)(param_2 + 0x44),0,auStack_50);
  cVar1 = *pcVar2;
  do {
    if (cVar1 == '\0') {
      return PTR_DAT_0071c594;
    }
    uVar3 = FUN_005dc734(pcVar2 + 1,1,auStack_50);
    uVar4 = FUN_005db9f0(param_1,uVar3);
    if (*pcVar2 == '-') {
      uVar4 = uVar4 + 1;
joined_r0x005dbcbc:
      if (uVar4 < 2) {
        pcVar5 = (char *)FUN_005dc734(pcVar2 + 1,2,auStack_50);
        if ((*pcVar5 == *pcVar2) && (pcVar5[1] == '*')) {
          return pcVar2;
        }
        uVar4 = FUN_005db9f0(param_1,pcVar5);
        if (*pcVar2 != '-') {
          if (*pcVar2 != '+') goto LAB_005dbbdc;
          uVar4 = uVar4 + 1;
        }
        if (uVar4 < 2) {
          return pcVar2;
        }
      }
    }
    else if (*pcVar2 == '+') goto joined_r0x005dbcbc;
LAB_005dbbdc:
    iVar6 = iVar6 + 1;
    pcVar2 = (char *)FUN_005dc734(*(undefined4 *)(param_2 + 0x44),iVar6,auStack_50);
    cVar1 = *pcVar2;
  } while( true );
}


// 0x05dbcd8 (0xe4 bytes)
char * FUN_005dbcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                   undefined4 *param_5,char *param_6)

{
  char *pcVar1;
  
  if ((byte)(param_4 - 0x25U) < 0x56) {
                    /* WARNING: Could not recover jumptable at 0x005dbd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(*(code *)(PTR_DAT_0071c598 +
                               *(int *)(PTR_DAT_0071c598 + (uint)(byte)(param_4 - 0x25) * 4)))
                               (param_2);
    return pcVar1;
  }
  param_6[1] = '\0';
  *param_6 = param_4;
  *param_5 = 2;
  return param_6;
}


