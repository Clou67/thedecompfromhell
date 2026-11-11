// sdk/libc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x5cccec-0x5cd360
#include <stdio.h>
#include <string.h>
#include "sdk/libc.h"
#include "sdk/lUnk.h"
#include "sdk/xUnk.h"

// 0x05cccec (0x2a4 bytes)
ulonglong strcpy(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar2 = (uint)param_3;
  uVar13 = param_1;
  if (((param_1 | param_2) & 7) == 0) {
    uVar7 = (param_3 << 0x20) >> 0x23;
    param_3 = param_3 & 7;
    if (uVar2 >> 3 != 0) {
      uVar8 = *(ulonglong *)param_2;
      uVar12 = (uVar8 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar8 | 0x7f7f7f7f7f7f7f7f;
      uVar11 = uVar7;
      while( true ) {
        if (~uVar12 != 0) break;
        *(ulonglong *)uVar13 = uVar8;
        param_2 = param_2 + 8;
        uVar13 = uVar13 + 8;
        uVar7 = uVar7 - 1;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_005ccd94;
        uVar8 = *(ulonglong *)param_2;
        uVar12 = (uVar8 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar8 | 0x7f7f7f7f7f7f7f7f;
      }
      lVar9 = uVar13 + 8;
      *(ulonglong *)uVar13 = uVar8 & ~(0xffffffffffffffffU >> LZCOUNT(~uVar12));
      if ((int)(uVar7 - 1) != 0) {
        uVar13 = uVar7 - 1 & 0xffffffff;
        lVar10 = lVar9;
        do {
          puVar4 = (undefined8 *)lVar10;
          lVar10 = lVar10 + 8;
          *puVar4 = 0;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        lVar9 = (uVar7 & 0x1fffffff) * 8 + lVar9 + -8;
      }
      if ((int)param_3 != 0) {
        do {
          puVar5 = (undefined1 *)lVar9;
          lVar9 = lVar9 + 1;
          *puVar5 = 0;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return param_1 & 0xffffffff;
      }
      goto LAB_005ccdd0;
    }
  }
  else if (((param_1 | param_2) & 3) == 0) {
    uVar7 = (param_3 << 0x20) >> 0x22;
    param_3 = param_3 & 3;
    if (uVar2 >> 2 != 0) {
      uVar2 = *(uint *)(ulonglong *)param_2;
      uVar3 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
      uVar12 = uVar7;
      while( true ) {
        if (~uVar3 != 0) break;
        *(uint *)uVar13 = uVar2;
        param_2 = param_2 + 4;
        uVar13 = uVar13 + 4;
        uVar7 = uVar7 - 1;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_005ccd94;
        uVar2 = *(uint *)param_2;
        uVar3 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
      }
      lVar9 = uVar13 + 4;
      *(uint *)uVar13 = uVar2 & ~(0xffffffffU >> (int)LZCOUNT(~uVar3));
      if ((int)(uVar7 - 1) != 0) {
        uVar13 = uVar7 - 1 & 0xffffffff;
        lVar10 = lVar9;
        do {
          puVar6 = (undefined4 *)lVar10;
          lVar10 = lVar10 + 4;
          *puVar6 = 0;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        lVar9 = (uVar7 & 0x3fffffff) * 4 + lVar9 + -4;
      }
      if ((int)param_3 != 0) {
        do {
          puVar5 = (undefined1 *)lVar9;
          lVar9 = lVar9 + 1;
          *puVar5 = 0;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return param_1 & 0xffffffff;
      }
      goto LAB_005ccdd0;
    }
  }
LAB_005ccd94:
  if ((int)param_3 != 0) {
    cVar1 = *(char *)param_2;
    if (cVar1 != '\0') {
      uVar7 = param_3 & 0xffffffff;
      do {
        *(char *)uVar13 = cVar1;
        param_3 = param_3 - 1;
        uVar13 = uVar13 + 1;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_005ccdd0;
        param_2 = param_2 + 1;
        cVar1 = *(char *)param_2;
      } while (cVar1 != '\0');
    }
    param_3 = param_3 & 0xffffffff;
    do {
      *(undefined1 *)uVar13 = 0;
      uVar13 = uVar13 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return param_1 & 0xffffffff;
  }
LAB_005ccdd0:
  return param_1 & 0xffffffff;
}


// SDK libc.a(fscanf.o): fscanf  [fuzzy 1.000 match]
// 0x05ccf90 (0x98 bytes)
int FUN_005ccf90(size_t param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  puVar1 = PTR_DAT_0071c3bc;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cbc38(PTR_DAT_0071c3bc);
  iVar2 = vsnprintf(PTR_PTR_0071c3c0,param_1,param_2,&stack0x00000040);
  FUN_005cbbbc(puVar1);
  return iVar2;
}


// 0x05cd028 (0x70 bytes)
uint FUN_005cd028(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}


// 0x05cd098 (0x90 bytes)
int32_t printf(char *param_1,...)

{
  undefined *__maxlen;
  int iVar1;
  undefined8 in_r4;
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  __maxlen = PTR_DAT_0071c3c4;
  uStack00000038 = in_r4;
  uStack00000040 = in_r5;
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cbc38(PTR_DAT_0071c3c4);
  iVar1 = vsnprintf(PTR_PTR_0071c3c8,(size_t)__maxlen,param_1,&stack0x00000038);
  FUN_005cbbbc(__maxlen);
  return iVar1;
}


// 0x05cd128 (0x70 bytes)
uint FUN_005cd128(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}


// SDK libc.a(snprintf.o): snprintf  [fuzzy 1.000 match]
// 0x05cd198 (0x8c bytes)
int FUN_005cd198(undefined1 *param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined1 *local_c;
  int local_8;
  
  local_8 = param_2 + -1;
  local_c = param_1;
  if (param_2 == 0) {
    local_8 = 0;
    local_c = (undefined1 *)0x0;
  }
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  iVar1 = vsnprintf(PTR_PTR_0071c3cc,(size_t)&local_c,param_3,&stack0x00000048);
  if (local_c != (undefined1 *)0x0) {
    *local_c = 0;
  }
  return iVar1;
}


// 0x05cd224 (0x84 bytes)
int * FUN_005cd224(int *param_1,void *param_2,uint param_3)

{
  uint __n;
  
  __n = param_1[1];
  if (param_3 < (uint)param_1[1]) {
    __n = param_3;
  }
  if (__n != 0) {
    memcpy((void *)*param_1,param_2,__n);
    *param_1 = *param_1 + __n;
    param_1[1] = param_1[1] - __n;
  }
  return param_1;
}


// 0x05cd2a8 (0x7c bytes)
int snprintf(char *__s,char *__format,...)

{
  int iVar1;
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = in_r5;
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  iVar1 = vsnprintf(PTR_PTR_0071c3d0,(size_t)__s,__format,&stack0x00000040);
  if (-1 < iVar1) {
    __s[iVar1] = '\0';
  }
  return iVar1;
}


// 0x05cd324 (0x3c bytes)
int FUN_005cd324(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy(param_1,param_2,param_3);
  return (int)pvVar1 + param_3;
}


