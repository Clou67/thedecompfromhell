// sdk/libc/xfemu.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x5d600c-0x5d68b0
#include "sdk/libc/xfemu.h"
#include "sdk/libc/asctime.h"

// SDK libc.a(xfemu.o): _Fd2rv  [fuzzy 1.000 match]
// 0x05d600c (0xa4 bytes)
// strings: 005d6068: '}iH08' (raw)

int * FUN_005d600c(double param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  fVar1 = (float)param_1;
  param_2[2] = -0x80000000;
  param_2[3] = 0;
  if (((uint)fVar1 & 0x7f800000) == 0) {
    lVar4 = 0x17;
    uVar2 = 9;
    do {
      if ((0x80000000U >> (uVar2 & 0x3f) & (uint)fVar1 & 0x7fffff) != 0) {
        iVar3 = uVar2 - 9;
        uVar2 = uVar2 + 0x20;
        goto LAB_005d6068;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = 0;
    iVar3 = 0x17;
LAB_005d6068:
    *(ulonglong *)(param_2 + 2) =
         (longlong)(int)(((uint)fVar1 & 0x7fffff) << (uVar2 & 0x3f)) | 0x8000000000000000;
  }
  else {
    iVar3 = 0;
    param_2[2] = -0x80000000;
    param_2[3] = 0;
  }
  *param_2 = (((uint)fVar1 >> 0x17 & 0xff) + 0x3f80) - iVar3;
  return param_2;
}


// SDK libc.a(xfemu.o): _Ld2rv  [fuzzy 1.000 match]
// 0x05d60b0 (0xac bytes)
// strings: 005d6100: '}@L6|' (raw)

int * FUN_005d60b0(ulonglong param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  param_2[2] = -0x80000000;
  param_2[3] = 0;
  if ((param_1 & 0x7ff0000000000000) == 0) {
    uVar2 = 0xc;
    lVar3 = 0x34;
    do {
      if ((0x8000000000000000U >> (uVar2 & 0x7f) & param_1 & 0xfffffffffffff) != 0) {
        iVar1 = (int)uVar2 + -0xc;
        goto LAB_005d6114;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    iVar1 = 0x34;
LAB_005d6114:
    *(ulonglong *)(param_2 + 2) = (param_1 & 0xfffffffffffff) << (uVar2 & 0x7f) | 0x8000000000000000
    ;
  }
  else {
    iVar1 = 0;
    *(ulonglong *)(param_2 + 2) = (param_1 & 0xfffffffffffff) << 0xb | 0x8000000000000000;
  }
  *param_2 = (((uint)(param_1 >> 0x34) & 0x7ff) + 0x3c00) - iVar1;
  return param_2;
}


// SDK libc.a(xfemu.o): _Emul  [fuzzy 1.000 match]
// 0x05d615c (0x11c bytes)
int * FUN_005d615c(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iStack00000038;
  int iStack00000048;
  
  uVar2 = (param_3 & 0xffffffff) * (param_5 >> 0x20);
  iStack00000048 = (int)((ulonglong)param_4 >> 0x20);
  lVar4 = 0;
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  uVar7 = (param_3 >> 0x20) * (param_5 & 0xffffffff);
  uVar6 = ((param_3 & 0xffffffff) * (param_5 & 0xffffffff) >> 0x20) + (uVar7 & 0xffffffff) +
          (uVar2 & 0xffffffff);
  lVar9 = 0x20;
  lVar8 = (uVar7 >> 0x20) + (uVar2 >> 0x20) +
          (param_3 >> 0x20) * (param_5 >> 0x20) + (uVar6 >> 0x20);
  uVar3 = (uint)((ulonglong)lVar8 >> 0x20);
  *(longlong *)(param_1 + 2) = lVar8;
  do {
    if ((0x80000000U >> ((uint)lVar4 & 0x3f) & uVar3) != 0) break;
    lVar4 = lVar4 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar1 = param_1[3];
  uVar5 = (uint)lVar4;
  param_1[3] = uVar1 << (uVar5 & 0x3f);
  param_1[2] = uVar3 << (uVar5 & 0x3f) | uVar1 >> ((uint)(0x20U - lVar4) & 0x3f);
  uVar7 = (uVar6 & 0xffffffff) >> (0x20U - lVar4 & 0x7f) | *(ulonglong *)(param_1 + 2);
  uVar2 = uVar7 + (uVar6 >> (0x1fU - lVar4 & 0x7f) & 1);
  *(ulonglong *)(param_1 + 2) = uVar2;
  *param_1 = ((iStack00000038 + iStack00000048) - uVar5) + (uint)(uVar2 < uVar7) + -0x3ffe;
  return param_1;
}


// SDK libc.a(xfemu.o): _Esub  [fuzzy 1.000 match]
// 0x05d6278 (0x13c bytes)
// strings: 005d6338: '})8P9`' (raw)

void FUN_005d6278(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 ulonglong param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iStack00000038;
  uint uStack00000040;
  int iStack00000050;
  
  uStack00000040 = (uint)(param_3 >> 0x20);
  uVar5 = (param_3 & 0xffffffff) - (param_5 & 0xffffffff);
  iStack00000050 = (int)(param_5 >> 0x20);
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  uVar3 = uStack00000040 - iStack00000050;
  param_1[3] = (int)uVar5;
  if ((param_3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    bVar1 = uStack00000040 < uVar3;
    uVar3 = uVar3 - 1;
    uVar2 = (int)~uVar3 >> 0x1f;
    uVar2 = (uint)bVar1 | ((uVar2 ^ ~uVar3) - uVar2) - 1 >> 0x1f;
  }
  else {
    uVar2 = 1;
    if (uVar3 <= uStack00000040) {
      uVar2 = 0;
    }
  }
  param_1[2] = uVar3;
  if (uVar2 == 0) {
    uVar2 = param_1[3];
  }
  else {
    uVar2 = -param_1[3];
    param_1[2] = ~uVar3;
    param_1[3] = uVar2;
  }
  uVar3 = param_1[2];
  uVar4 = 0;
  lVar6 = 0x20;
  if (uVar3 != 0) {
    do {
      if ((0x80000000U >> (uVar4 & 0x3f) & uVar3) != 0) break;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_1[2] = uVar3 << (uVar4 & 0x3f) | uVar2 >> (0x20 - uVar4 & 0x3f);
    param_1[3] = uVar2 << (uVar4 & 0x3f);
    *param_1 = iStack00000038 - uVar4;
    return;
  }
  uVar3 = 0;
  do {
    if ((0x80000000U >> (uVar3 & 0x3f) & uVar2) != 0) break;
    uVar3 = uVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[3] = 0;
  *param_1 = (iStack00000038 - uVar3) + -0x20;
  return;
}


// SDK libc.a(xfemu.o): _Eadd  [fuzzy 1.000 match]
// 0x05d63b4 (0x9c bytes)
// strings: 005d6418: '}`D6|' (raw)

void FUN_005d63b4(int *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                 ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uStack00000038;
  
  uStack00000038 = (uint)((ulonglong)param_2 >> 0x20);
  uVar2 = 0;
  param_5 = param_5 >> ((ulonglong)uStack00000038 - (param_4 >> 0x20) & 0x7f);
  uVar3 = (param_5 & 0xffffffff) + (param_3 & 0xffffffff);
  uVar1 = (param_5 >> 0x20) + (param_3 >> 0x20) + (uVar3 >> 0x20);
  lVar4 = 0x40;
  do {
    if ((0x8000000000000000U >> (uVar2 & 0x7f) & uVar1) != 0) break;
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = (uStack00000038 - (int)uVar2) + 0x20;
  *(ulonglong *)(param_1 + 2) =
       uVar1 << (uVar2 & 0x7f) | (uVar3 & 0xffffffff) >> (0x20 - uVar2 & 0x7f);
  return;
}


// SDK libc.a(xfemu.o): _Etentox  [fuzzy 1.000 match]
// 0x05d6450 (0x218 bytes)
undefined4 FUN_005d6450(undefined4 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  GPiece<4> local_40;
  undefined4 uStack_3c;
  
  puVar3 = PTR_DAT_0071c4f8;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  if ((int)param_4 < 0) {
    if ((int)-param_4 == 0) {
LAB_005d6510:
      FUN_005d615c(param_1,uStack00000038,uStack00000040,CONCAT44(0x3fff,uStack_3c),
                   0x8000000000000000);
    }
    else {
      iVar4 = 0;
      iVar5 = 0;
      uVar6 = -param_4;
      while( true ) {
        uVar7 = (uVar6 << 0x20) >> 0x21;
        if ((uVar6 & 1) != 0) {
          FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                       *(undefined8 *)(puVar3 + iVar5),*(undefined8 *)(puVar3 + iVar5 + 8));
        }
        puVar2 = PTR_DAT_0071c4f8;
        bVar1 = iVar4 == 7;
        iVar4 = iVar4 + 1;
        if ((uint)uVar6 >> 1 == 0) goto LAB_005d6510;
        if (bVar1) break;
        iVar5 = iVar4 * 0x10;
        uVar6 = uVar7;
      }
      do {
        uVar7 = uVar7 - 1;
        FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                     *(undefined8 *)(puVar2 + 0x90),*(undefined8 *)(puVar2 + 0x98));
      } while ((int)uVar7 != 0);
      FUN_005d615c(param_1,uStack00000038,uStack00000040,CONCAT44(0x3fff,uStack_3c),
                   0x8000000000000000);
    }
  }
  else if ((int)param_4 != 0) {
    iVar5 = 0;
    do {
      iVar4 = (int)param_4 >> 1;
      puVar2 = PTR_DAT_0071c4f8;
      if ((param_4 & 1) != 0) {
        FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                     *(undefined8 *)(puVar3 + iVar5 * 0x10 + 0xa0),
                     *(undefined8 *)(puVar3 + iVar5 * 0x10 + 0xa8));
        puVar2 = PTR_DAT_0071c4f8;
      }
      PTR_DAT_0071c4f8 = puVar2;
      if (iVar4 < 1) goto LAB_005d6510;
      bVar1 = iVar5 != 7;
      param_4 = (ulonglong)iVar4;
      iVar5 = iVar5 + 1;
    } while (bVar1);
    do {
      param_4 = param_4 - 1;
      FUN_005d615c(local_40,CONCAT44(0x3fff,uStack_3c),0x8000000000000000,
                   *(undefined8 *)(puVar2 + 0x130),*(undefined8 *)(puVar2 + 0x138));
    } while (0 < (int)param_4);
    FUN_005d615c(param_1,uStack00000038,uStack00000040,CONCAT44(0x3fff,uStack_3c),0x8000000000000000
                );
  }
  return param_1;
}


// SDK libc.a(xfemu.o): _Lrv2d  [fuzzy 1.000 match]
// 0x05d6668 (0x128 bytes)
ulonglong FUN_005d6668(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uStack00000030;
  longlong lStack00000038;
  
  uVar3 = (param_1 >> 0x20) - 0x3c00;
  if (0x7fe < (uVar3 & 0xffffffff)) {
    uVar5 = DAT_0071c500 & 0x8000000000000000;
    uStack00000030 = param_1;
    lStack00000038 = param_2;
    puVar2 = (undefined4 *)FUN_005d5904();
    *puVar2 = 0x8001001c;
    if (param_3 != (uint *)0x0) {
      *param_3 = *param_3 | 1;
    }
    return ((ulonglong)(uint)((int)~(uint)uVar3 >> 0x1f) & 0x7ff) << 0x34 | uVar5;
  }
  uVar5 = (ulonglong)(param_2 << 1) >> 0xc;
  iVar4 = 10;
  lStack00000038.piece<4,4>() = (uint)param_2;
  if ((uVar3 & 0x7ff) == 0) {
    uVar5 = (ulonglong)(param_2 << 1) >> 0xd;
    iVar4 = 0xb;
  }
  uVar1 = ((ulonglong)(lStack00000038.piece<4,4>() >> iVar4) & 1) + uVar5 & 0xfffffffffffff;
  return ((uVar3 & 0x7ff) + (ulonglong)(uVar1 < uVar5) & 0x7ff) << 0x34 |
         uVar1 | DAT_0071c500 & 0x8000000000000000;
}


// SDK libc.a(xfemu.o): _Frv2d  [fuzzy 1.000 match]
// 0x05d6790 (0x120 bytes)
double FUN_005d6790(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uStack00000030;
  uint uStack00000038;
  
  uVar3 = (param_1 >> 0x20) - 0x3f80;
  uVar5 = (uint)((uVar3 & 0xff) << 0x17);
  if (0xfe < (uVar3 & 0xffffffff)) {
    uStack00000030 = param_1;
    _uStack00000038 = param_2;
    puVar2 = (undefined4 *)FUN_005d5904();
    *puVar2 = 0x8001001c;
    if (param_3 != (uint *)0x0) {
      *param_3 = *param_3 | 1;
    }
    return (double)(float)((uint)(((longlong)(~uVar3 << 0x20) >> 0x3f & 0xffffffffU) << 0x17) &
                          0x7f800000);
  }
  uStack00000038 = (uint)((ulonglong)param_2 >> 0x20);
  iVar4 = 6;
  if (uVar5 == 0) {
    uVar3 = (((ulonglong)uStack00000038 & 0x7fffffff) << 0x20) >> 0x27;
  }
  else {
    uVar3 = (((ulonglong)uStack00000038 & 0x7fffffff) << 0x20) >> 0x28;
    iVar4 = 7;
  }
  uVar1 = uVar3 + ((ulonglong)(uStack00000038 >> iVar4) & 1) & 0x7fffff;
  return (double)(float)((uint)(uVar1 << 1) >> 1 |
                        ((uVar5 >> 0x17) + (uint)(uVar1 < uVar3)) * 0x800000 & 0x7f800000);
}


