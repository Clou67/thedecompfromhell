// sdk/fUnk3.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 19 functions, 0x539920-0x53c1f0
#include <stdio.h>
#include <string.h>
#include "sdk/fUnk3.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xassert.h"
#include "sdk/libfios/fios_filehandle.h"
#include "sdk/mUnk3.h"

// 0x0539920 (0x448 bytes)
void FUN_00539920(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1) = 0xff;
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1 + 1) = 0xff;
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1 + 2) = 0xff;
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1 + 3) = 0xff;
    }
  }
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    if ((int)((ulonglong)local_24 / (ulonglong)param_5) ==
        (int)(((ulonglong)local_24 / (ulonglong)param_5) / (ulonglong)param_6) * param_6) {
      for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1) = 0xff;
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1 + 1) = 0;
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1 + 2) = 0;
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1 + 3) = 0;
      }
    }
    else {
      for (local_2c = 0; local_2c < param_2; local_2c = local_2c + param_5 * param_6) {
        if ((int)((ulonglong)local_2c / (ulonglong)param_5) ==
            (int)(((ulonglong)local_2c / (ulonglong)param_5) / (ulonglong)param_6) * param_6) {
          for (local_30 = 0; local_30 < param_5; local_30 = local_30 + 1) {
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1) = 0xff;
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1 + 1) = 0;
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1 + 2) = 0;
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1 + 3) = 0;
          }
        }
      }
    }
  }
  return;
}


// 0x0539d68 (0x3ec bytes)
void FUN_00539d68(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  uint uStack00000048;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  uint local_30;
  
  local_3c = param_2 * param_3 * param_4;
  local_40 = 0;
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uVar1 = FUN_005395bc(param_2);
  uVar2 = FUN_005395bc(uStack00000040);
  if (uVar2 < uVar1) {
    iVar3 = FUN_005395bc(uStack00000038);
  }
  else {
    iVar3 = FUN_005395bc(uStack00000040);
  }
  local_30 = iVar3 + 1;
  local_48 = uStack00000038;
  local_4c = uStack00000040;
  if (uStack00000038 != 1) {
    local_48 = uStack00000038 >> 1;
  }
  if (uStack00000040 != 1) {
    local_4c = uStack00000040 >> 1;
  }
  for (local_50 = 1; local_50 < local_30; local_50 = local_50 + 1) {
    for (local_54 = 0; local_54 < local_4c; local_54 = local_54 + 1) {
      for (local_58 = 0; local_58 < local_48; local_58 = local_58 + 1) {
        for (local_5c = 0; local_5c < uStack00000048; local_5c = local_5c + 1) {
          *(char *)((param_2 * local_54 + local_58) * uStack00000048 + local_3c + local_5c +
                   iStack00000030) =
               (char)((uint)*(byte *)((param_2 * local_54 + local_58) * uStack00000048 * 2 +
                                      local_40 + local_5c + iStack00000030) +
                      (uint)*(byte *)(((param_2 * local_54 + local_58) * 2 + 1) * uStack00000048 +
                                      local_40 + local_5c + iStack00000030) +
                      (uint)*(byte *)(((local_54 * 2 + 1) * param_2 + local_58 * 2) * uStack00000048
                                      + local_40 + local_5c + iStack00000030) +
                      (uint)*(byte *)(((local_54 * 2 + 1) * param_2 + local_58 * 2 + 1) *
                                      uStack00000048 + local_40 + local_5c + iStack00000030) >> 2);
        }
      }
    }
    local_40 = local_3c;
    local_3c = local_3c + param_2 * local_4c * uStack00000048;
    if (local_48 != 1) {
      local_48 = local_48 >> 1;
    }
    if (local_4c != 1) {
      local_4c = local_4c >> 1;
    }
  }
  return;
}


// 0x053a154 (0x3e4 bytes)
// strings: 0065fea0: 'format:%x\n' | 0065feb0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:337 false'

undefined4 FUN_0053a154(uint param_1,uint *param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uStack00000030;
  uint *puStack00000038;
  undefined4 *puStack00000040;
  int iStack00000048;
  int iStack00000050;
  
  if (param_1 == 0x83f3) {
    *param_2 = 0x88;
    *param_3 = 0xaae4;
    return 0;
  }
  if (param_1 < 0x83f4) {
    if (param_1 == 0x83f1) {
      *param_2 = 0x86;
      *param_3 = 0xaae4;
      return 0;
    }
    if (0x83f1 < param_1) {
      *param_2 = 0x87;
      *param_3 = 0xaae4;
      return 0;
    }
    if (param_1 == 0x8058) {
      *param_2 = 0x85;
      if (param_4 == 0) {
        *param_2 = *param_2 | 0x20;
      }
      if (param_5 == 0) {
        *param_2 = *param_2 | 0x40;
      }
      *param_3 = 0xaa93;
      return 0;
    }
  }
  else {
    if (param_1 == 0x881a) {
LAB_0053a44c:
      if (param_1 == 0x881a) {
        *param_2 = 0x9a;
      }
      else {
        *param_2 = 0x9b;
      }
      if (param_4 == 0) {
        *param_2 = *param_2 | 0x20;
      }
      if (param_5 == 0) {
        *param_2 = *param_2 | 0x40;
      }
      *param_3 = 0xaae4;
      return 0;
    }
    if (param_1 < 0x881b) {
      if (param_1 == 0x8814) goto LAB_0053a44c;
    }
    else {
      if (param_1 == 0xff00) {
        *param_2 = 0x85;
        if (param_4 == 0) {
          *param_2 = *param_2 | 0x20;
        }
        if (param_5 == 0) {
          *param_2 = *param_2 | 0x40;
        }
        *param_3 = 0xaae4;
        return 0;
      }
      if (param_1 == 0xff01) {
        *param_2 = 0x85;
        if (param_4 == 0) {
          *param_2 = *param_2 | 0x20;
        }
        if (param_5 == 0) {
          *param_2 = *param_2 | 0x40;
        }
        *param_3 = 0xaa1b;
        return 0;
      }
    }
  }
  uStack00000030 = param_1;
  puStack00000038 = param_2;
  puStack00000040 = param_3;
  iStack00000048 = param_4;
  iStack00000050 = param_5;
  printf(PTR_s_format__x_0071b0bc,param_1);
  FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0c0,0);
  return 0;
}


// 0x053a538 (0x310 bytes)
// strings: 0065ff00: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:197 p != NULL'

void FUN_0053a538(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  int iStack00000048;
  int iStack00000050;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_60;
  undefined4 auStack_58 [20];
  
  local_60 = 0;
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  iStack00000050 = param_5;
  memcpy(auStack_58,PTR_DAT_0071b0c4,0x48);
  iVar1 = FUN_005d5838(uStack00000038 * uStack00000040 * iStack00000048);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0c8,0);
  }
  for (local_68 = 0; local_68 < 6; local_68 = local_68 + 1) {
    for (local_6c = 0; local_6c < uStack00000040; local_6c = local_6c + 1) {
      for (local_70 = 0; local_70 < uStack00000038; local_70 = local_70 + 1) {
        *(undefined1 *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1) = 0xff;
        *(char *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1 + 1) =
             (char)*(undefined4 *)
                    ((int)auStack_58 +
                    ((int)(((ulonglong)local_68 & 0x3fffffff) << 4) -
                    (int)(((ulonglong)local_68 & 0x3fffffff) << 2)));
        *(char *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1 + 2) =
             (char)*(undefined4 *)
                    ((int)auStack_58 +
                    ((int)(((ulonglong)local_68 & 0x3fffffff) << 4) -
                    (int)(((ulonglong)local_68 & 0x3fffffff) << 2)) + 4);
        *(char *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1 + 3) =
             (char)*(undefined4 *)
                    ((int)auStack_58 +
                    ((int)(((ulonglong)local_68 & 0x3fffffff) << 4) -
                    (int)(((ulonglong)local_68 & 0x3fffffff) << 2)) + 8);
      }
    }
    if (iStack00000050 != 0) {
      FUN_0053bac0(local_60 + iStack00000030,iVar1,uStack00000038,uStack00000040,iStack00000048);
    }
    local_60 = local_60 + param_2 * uStack00000040 * iStack00000048;
  }
  FUN_005d580c(iVar1);
  return;
}


// 0x053a848 (0x104 bytes)
// strings: 0065ff50: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:91 p != NULL'

void FUN_0053a848(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uStack00000030;
  uint uStack00000038;
  int iStack00000040;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  iVar1 = FUN_005d5838(((longlong)(int)param_2 * (longlong)param_3 & 0xfffffffU) << 4);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0cc,0);
  }
  FUN_00539610(iVar1,uStack00000038,iStack00000040);
  FUN_0053bac0(uStack00000030,iVar1,((ulonglong)uStack00000038 & 0x3fffffff) << 2,iStack00000040,
               0x10);
  FUN_005d580c(iVar1);
  return;
}


// 0x053a94c (0x368 bytes)
void FUN_0053a94c(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  undefined4 local_80;
  undefined4 local_7c;
  
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  for (local_7c = 0; local_7c < uStack00000038; local_7c = local_7c + 1) {
    for (local_80 = 0; local_80 < uStack00000040; local_80 = local_80 + 1) {
      lVar1 = (longlong)(int)uStack00000038;
      uVar2 = FUN_0053b258((double)DAT_0071b0b8);
      *(undefined2 *)
       ((int)((lVar1 * (int)local_80 + (ulonglong)local_7c & 0xffffffff) << 3) + param_1) = uVar2;
      iVar3 = uStack00000038 * local_80;
      uVar2 = FUN_0053b258((double)((float)local_7c / (float)uStack00000038));
      *(undefined2 *)((iVar3 + local_7c) * 8 + param_1 + 2) = uVar2;
      iVar3 = uStack00000038 * local_80;
      uVar2 = FUN_0053b258((double)((float)local_80 / (float)uStack00000040));
      *(undefined2 *)((iVar3 + local_7c) * 8 + param_1 + 4) = uVar2;
      lVar1 = (longlong)(int)uStack00000038;
      uVar2 = FUN_0053b258((double)DAT_0071b0b8);
      *(undefined2 *)
       ((int)((lVar1 * (int)local_80 + (ulonglong)local_7c & 0xffffffff) << 3) + param_1 + 6) =
           uVar2;
    }
  }
  return;
}


// 0x053acb4 (0x104 bytes)
// strings: 0065ffa0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:63 p != NULL'

void FUN_0053acb4(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uStack00000030;
  uint uStack00000038;
  int iStack00000040;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  iVar1 = FUN_005d5838(((longlong)(int)param_2 * (longlong)param_3 & 0x1fffffffU) << 3);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0d0,0);
  }
  FUN_0053a94c(iVar1,uStack00000038,iStack00000040);
  FUN_0053bac0(uStack00000030,iVar1,((ulonglong)uStack00000038 & 0x7fffffff) << 1,iStack00000040,8);
  FUN_005d580c(iVar1);
  return;
}


// 0x053adb8 (0x380 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0053adb8(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  double dVar2;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  int iStack00000048;
  undefined4 local_80;
  undefined4 local_7c;
  
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  for (local_7c = 0; local_7c < uStack00000038; local_7c = local_7c + 1) {
    for (local_80 = 0; local_80 < uStack00000040; local_80 = local_80 + 1) {
      *(undefined1 *)((uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030) =
           0xff;
      *(undefined1 *)((uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030 + 1)
           = 0xff;
      iVar1 = (uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030;
      dVar2 = (double)FUN_005dc924((double)(((float)local_7c * DAT_0071b0d4) / (float)uStack00000038
                                           ));
      *(char *)(iVar1 + 2) = (char)(int)dVar2;
      iVar1 = (uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030;
      dVar2 = (double)FUN_005dc924((double)(((float)local_80 * DAT_0071b0d4) / (float)uStack00000040
                                           ));
      *(char *)(iVar1 + 3) = (char)(int)dVar2;
    }
  }
  return;
}


// 0x053b138 (0x120 bytes)
// strings: 0065fff0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:35 p != NULL'

void FUN_0053b138(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  iStack00000040 = param_3;
  iStack00000048 = param_4;
  iVar1 = FUN_005d5838(param_2 * param_3 * param_4);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0d8,0);
  }
  FUN_0053adb8(iVar1,iStack00000038,iStack00000040,iStack00000048);
  FUN_0053bac0(uStack00000030,iVar1,iStack00000038,iStack00000040,iStack00000048);
  FUN_005d580c(iVar1);
  return;
}


// 0x053b258 (0x148 bytes)
/* WARNING: Heritage AFTER dead removal. Example location: x0x00000030 : 0x0053b278 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0053b258(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_stack_00000030;
  undefined4 local_38;
  undefined4 local_20;
  
  uVar2 = (in_stack_00000030 >> 0x10 & 0xff) << 0x10;
  uVar1 = in_stack_00000030 & 0xff000000 | uVar2;
  uVar3 = in_stack_00000030 >> 8 & 0xff;
  if ((uVar1 == 0 && uVar3 == 0) && (char)in_stack_00000030 == '\0') {
    local_20 = 0;
  }
  else {
    local_38 = ((uVar1 & 0x7f800000) >> 0x17) - 0x70;
    if ((int)local_38 < 0) {
      local_20 = 0;
    }
    else {
      if (0x1f < (int)local_38) {
        local_38 = 0x1f;
      }
      local_20 = (in_stack_00000030 & 0x80000000) >> 0x10 | (local_38 & 0x1f) << 10 |
                 (uVar2 & 0x7fffff | uVar3 << 8) >> 0xd;
    }
  }
  return local_20;
}


// 0x053b3a0 (0x114 bytes)
double FUN_0053b3a0(short param_1)

{
  undefined4 local_2c;
  undefined4 local_20;
  
  if (param_1 == 0) {
    local_20 = 0.0;
  }
  else {
    local_20 = local_2c;
  }
  return (double)local_20;
}


// 0x053b4b4 (0x11c bytes)
int FUN_0053b4b4(uint param_1)

{
  uint uStack00000030;
  undefined4 local_30;
  undefined4 local_20;
  
  local_30 = 0x20;
  uStack00000030 = param_1;
  if (param_1 >> 0x10 != 0) {
    local_30 = 0x10;
    uStack00000030 = param_1 >> 0x10;
  }
  if (uStack00000030 >> 8 != 0) {
    local_30 = local_30 + -8;
    uStack00000030 = uStack00000030 >> 8;
  }
  if (uStack00000030 >> 4 != 0) {
    local_30 = local_30 + -4;
    uStack00000030 = uStack00000030 >> 4;
  }
  if (uStack00000030 >> 2 != 0) {
    local_30 = local_30 + -2;
    uStack00000030 = uStack00000030 >> 2;
  }
  if (uStack00000030 >> 1 == 0) {
    local_20 = local_30 - uStack00000030;
  }
  else {
    local_20 = local_30 + -2;
  }
  return local_20;
}


// 0x053b5d0 (0x54 bytes)
int FUN_0053b5d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack00000030;
  
  uStack00000030 = param_1;
  iVar1 = FUN_0053b4b4(param_1);
  return 0x1f - iVar1;
}


// 0x053b624 (0x49c bytes)
// strings: 00660088: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/swizzle.cpp:34 0'

void FUN_0053b624(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piStack00000030;
  int *piStack00000038;
  int iStack00000040;
  int iStack00000048;
  int iStack00000050;
  int iStack00000058;
  int iStack00000060;
  
  piStack00000030 = param_1;
  piStack00000038 = param_2;
  iStack00000040 = param_3;
  iStack00000048 = param_4;
  iStack00000050 = param_5;
  iStack00000058 = param_6;
  iStack00000060 = param_7;
  if (param_7 == 1) {
    if (param_4 == 0x10) {
      puVar1 = (undefined4 *)*param_1;
      *puVar1 = *(undefined4 *)(*param_2 + (param_6 * param_3 + param_5) * 4);
      *param_1 = (int)(puVar1 + 1);
    }
    else if (param_4 == 8) {
      puVar1 = (undefined4 *)*param_1;
      *puVar1 = *(undefined4 *)(*param_2 + (param_6 * param_3 + param_5) * 4);
      *param_1 = (int)(puVar1 + 1);
    }
    else if (param_4 == 4) {
      puVar1 = (undefined4 *)*param_1;
      *puVar1 = *(undefined4 *)(*param_2 + (param_6 * param_3 + param_5) * 4);
      *param_1 = (int)(puVar1 + 1);
    }
    else if (param_4 == 3) {
      puVar2 = (undefined1 *)*param_1;
      *puVar2 = *(undefined1 *)(*param_2 + (param_6 * param_3 + param_5) * 3);
      *param_1 = (int)(puVar2 + 1);
      puVar2 = (undefined1 *)*param_1;
      *puVar2 = *(undefined1 *)(*param_2 + (param_6 * param_3 + param_5) * 3 + 1);
      *param_1 = (int)(puVar2 + 1);
      puVar2 = (undefined1 *)*param_1;
      *puVar2 = *(undefined1 *)(*param_2 + (param_6 * param_3 + param_5) * 3 + 2);
      *param_1 = (int)(puVar2 + 1);
    }
    else {
      FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0dc,0);
    }
  }
  else {
    FUN_0053b624(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + -1);
    FUN_0053b624(piStack00000030,piStack00000038,iStack00000040,iStack00000048,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000050,iStack00000058,
                 iStack00000060 + -1);
    FUN_0053b624(piStack00000030,piStack00000038,iStack00000040,iStack00000048,iStack00000050,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000058,iStack00000060 + -1);
    FUN_0053b624(piStack00000030,piStack00000038,iStack00000040,iStack00000048,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000050,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000058,iStack00000060 + -1);
  }
  return;
}


// 0x053bac0 (0x33c bytes)
void FUN_0053bac0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5
                 )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  uint uStack00000040;
  uint uStack00000048;
  undefined4 uStack00000050;
  uint local_40;
  uint local_38;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  if (param_3 == param_4) {
    iVar2 = FUN_0053b5d0(param_3);
    FUN_0053b624(&stack0x00000030,&stack0x00000038,uStack00000040,uStack00000050,0,0,iVar2 + 1);
  }
  else if (param_4 < param_3) {
    iVar2 = FUN_0053b5d0(param_3);
    iVar3 = FUN_0053b5d0(uStack00000040);
    iVar4 = FUN_0053b5d0(uStack00000048);
    uVar1 = iVar2 - (iVar3 - iVar4);
    local_38 = 0;
    while( true ) {
      iVar2 = FUN_0053b5d0(uStack00000040);
      iVar3 = FUN_0053b5d0(uStack00000048);
      if ((uint)(1 << (iVar2 - iVar3 & 0x3fU)) <= local_38) break;
      FUN_0053b624(&stack0x00000030,&stack0x00000038,uStack00000040,uStack00000050,
                   local_38 << (uVar1 & 0x3f),0,uVar1 + 1);
      local_38 = local_38 + 1;
    }
  }
  else if (param_3 < param_4) {
    iVar2 = FUN_0053b5d0(param_4);
    iVar3 = FUN_0053b5d0(uStack00000048);
    iVar4 = FUN_0053b5d0(uStack00000040);
    uVar1 = iVar2 - (iVar3 - iVar4);
    local_40 = 0;
    while( true ) {
      iVar2 = FUN_0053b5d0(uStack00000048);
      iVar3 = FUN_0053b5d0(uStack00000040);
      if ((uint)(1 << (iVar2 - iVar3 & 0x3fU)) <= local_40) break;
      FUN_0053b624(&stack0x00000030,&stack0x00000038,uStack00000040,uStack00000050,0,
                   local_40 << (uVar1 & 0x3f),uVar1 + 1);
      local_40 = local_40 + 1;
    }
  }
  return;
}


// 0x053bdfc (0xfc bytes)
ulonglong FUN_0053bdfc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_005427d0(param_1,param_2,param_3);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053bef8 (0x140 bytes)
ulonglong FUN_0053bef8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  
  puVar2 = PTR_DAT_0071b0e8;
  puVar1 = PTR_PTR_0071b0e4;
  if (*(int *)PTR_DAT_0071b0e0 != 1) {
    return 2;
  }
  uVar3 = 2000;
  if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
    if (*(int *)PTR_DAT_0071b0e8 == 0) {
      return 2;
    }
    uVar5 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
    uVar6 = 0xf;
    uVar3 = FUN_00540808(uVar5);
    if ((int)uVar3 == 0) {
      if (*(int *)puVar2 != 0) {
        uVar6 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0xe0))(param_1);
      }
      uVar5 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
      uVar4 = FUN_00540808(uVar5);
      uVar3 = uVar6;
      if (uVar4 != 0) {
        uVar3 = uVar4;
      }
    }
  }
  return uVar3 & 0xffffffff;
}


// 0x053c038 (0xdc bytes)
ulonglong FUN_0053c038(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_005426d4(param_1);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053c114 (0xdc bytes)
ulonglong FUN_0053c114(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_00543b9c(param_1);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


