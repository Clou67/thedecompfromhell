// sdk/libc/xstrftim.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5daab0-0x5dad7c
#include <string.h>
#include "sdk/libc/xstrftim.h"
#include "sdk/libc/xgentime.h"
#include "sdk/xUnk3.h"

// SDK libc.a(xstrftim.o): _CStrftime  [fuzzy 1.000 match]
// 0x05daab0 (0x29c bytes)
ulonglong FUN_005daab0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                      undefined4 param_5)

{
  char cVar1;
  undefined1 *__dest;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  size_t sVar5;
  void *__src;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t local_b0 [2];
  uint local_ac;
  mbstate_t local_a8;
  uint auStack_a0 [6];
  GPiece<32> auStack_88;
  
  sVar5 = strlen((char *)param_3);
  uVar10 = (ulonglong)(int)sVar5;
  uVar9 = 0;
  local_a8.__value.__wch.piece<2,2>() = 0;
  local_a8.__count = 0;
  local_a8.__value.__wch.piece<0,2>() = 0;
  lVar6 = param_1;
  do {
    while( true ) {
      iVar7 = (int)param_2;
      uVar3 = uVar9 | uVar10;
      iVar4 = (int)uVar3;
      while( true ) {
        __dest = (undefined1 *)lVar6;
        if (iVar4 == 0) {
          if (iVar7 == 0) goto LAB_005dabf4;
          uVar9 = lVar6 - param_1;
          *__dest = (char)uVar3;
          goto LAB_005dabf8;
        }
        if ((int)uVar10 == 0) {
          uVar9 = uVar9 - 1;
          iVar7 = (int)((uVar9 & 0xffffffff) << 2);
          uVar10 = (ulonglong)*(uint *)((int)auStack_a0 + iVar7);
          param_3 = (ulonglong)*(uint *)((int)auStack_a0 + iVar7 + 0xc);
        }
        sVar5 = mbrtowc(local_b0,(char *)(byte *)param_3,(size_t)uVar10,&local_a8);
        uVar3 = (ulonglong)(int)sVar5;
        if ((int)sVar5 < 1) {
          uVar3 = -(ulonglong)*(byte *)param_3 >> 0x3f;
        }
        param_3 = param_3 + uVar3;
        uVar10 = uVar10 - uVar3;
        pcVar2 = (char *)param_3;
        if ((local_b0[0] == L'%') && ((int)uVar10 != 0)) break;
        if ((param_2 & 0xffffffff) < (uVar3 & 0xffffffff)) goto LAB_005dabf4;
        param_2 = param_2 - uVar3;
        iVar7 = (int)param_2;
        lVar6 = lVar6 + uVar3;
        memcpy(__dest,pcVar2 + -(size_t)uVar3,(size_t)uVar3);
        uVar3 = uVar9 | uVar10;
        iVar4 = (int)uVar3;
      }
      cVar1 = *pcVar2;
      if ((cVar1 != 'E') && (cVar1 != 'O')) break;
      uVar3 = param_3 + 2;
      uVar8 = (undefined4)uVar3;
      uVar10 = uVar10 - 2;
      iVar7 = (int)uVar10;
      param_3 = FUN_005dbcd8(param_4,param_5,cVar1,pcVar2[1],&local_ac,auStack_88);
      __src = (void *)param_3;
      if (0 < (int)local_ac) goto LAB_005dac98;
LAB_005dad18:
      if ((iVar7 != 0) && ((uVar9 & 0xffffffff) < 3)) {
        iVar4 = (int)((uVar9 & 0xffffffff) << 2);
        uVar9 = uVar9 + 1;
        *(int *)((int)auStack_a0 + iVar4) = iVar7;
        *(undefined4 *)((int)auStack_a0 + iVar4 + 0xc) = uVar8;
      }
      uVar10 = -(ulonglong)local_ac;
    }
    uVar3 = param_3 + 1;
    uVar8 = (undefined4)uVar3;
    param_3 = FUN_005dbcd8(param_4,param_5,0,cVar1,&local_ac,auStack_88);
    __src = (void *)param_3;
    uVar10 = uVar10 - 1;
    iVar7 = (int)uVar10;
    if ((int)local_ac < 1) goto LAB_005dad18;
LAB_005dac98:
    param_3 = uVar3;
    if ((param_2 & 0xffffffff) < (ulonglong)local_ac) {
LAB_005dabf4:
      uVar9 = 0;
LAB_005dabf8:
      return uVar9 & 0xffffffff;
    }
    memcpy(__dest,__src,local_ac);
    param_2 = param_2 - local_ac;
    lVar6 = lVar6 + (ulonglong)local_ac;
  } while( true );
}


// 0x05dad4c (0x10 bytes)
int FUN_005dad4c(void)

{
  int in_r13;
  
  return in_r13 + -0x6ecc;
}


// 0x05dad5c (0x20 bytes)
int * FUN_005dad5c(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 / param_3;
  param_1[1] = param_2 - param_3 * (param_2 / param_3);
  return param_1;
}


