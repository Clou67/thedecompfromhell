// sdk/libcgc/libcgc_cell_localize.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 79 functions, 0x5ddc68-0x5e3b90
#include <stdlib.h>
#include <string.h>
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "game/hero.h"
#include "idol/9Unk2.h"
#include "sdk/libc/atexit.h"
#include "sdk/libc/malloc.h"
#include "sdk/libstdc++/throw.h"
#include "sdk/mUnk3.h"
#include "sdk/sys.h"
#include "sdk/tUnk.h"

// SDK libcgc.a(libcgc_cell_localize.o): read_uleb128(unsigned char const*, unsigned long long*)  [exact match]
// 0x05ddc68 (0x38 bytes)
byte * FUN_005ddc68(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return param_1;
}


// 0x05ddca0 (0x58 bytes)
byte * FUN_005ddca0(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0xffffffff) < 0x40) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1L << (uVar4 & 0x7f);
  }
  *param_2 = uVar3;
  return param_1;
}


// 0x05ddcf8 (0x8 bytes)
undefined4 FUN_005ddcf8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x248);
}


// 0x05ddd00 (0x8 bytes)
undefined4 FUN_005ddd00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24c);
}


// 0x05ddd08 (0x8 bytes)
void FUN_005ddd08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  return;
}


// 0x05ddd10 (0x8 bytes)
undefined4 FUN_005ddd10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x250);
}


// 0x05ddd18 (0x8 bytes)
undefined4 FUN_005ddd18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x25c);
}


// 0x05ddd20 (0x8 bytes)
undefined4 FUN_005ddd20(int param_1)

{
  return *(undefined4 *)(param_1 + 600);
}


// 0x05ddd28 (0x8 bytes)
undefined4 FUN_005ddd28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x254);
}


// 0x05ddd30 (0x50 bytes)
void FUN_005ddd30(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 8))(1,param_1);
  }
  return;
}


// 0x05ddd80 (0x80 bytes)
void FUN_005ddd80(int param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  int unaff_r2;
  
  if (0x4b0 < (int)param_2) {
    param_2 = param_2 - 0x43f;
  }
  if ((int)param_2 < 0x92) {
    cVar1 = *(char *)(*(int *)(unaff_r2 + -0x5c00) + (int)param_2);
    puVar2 = *(undefined8 **)(param_1 + (int)((param_2 & 0xffffffff) << 2));
    if (cVar1 == '\x04') {
      *(int *)puVar2 = (int)param_3;
      return;
    }
    if (cVar1 == '\b') {
      *puVar2 = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05dde04 (0x80 bytes)
ulonglong FUN_005dde04(int param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  if (0x4b0 < (int)param_2) {
    param_2 = param_2 - 0x43f;
  }
  if ((int)param_2 < 0x92) {
    puVar1 = *(ulonglong **)(param_1 + (int)((param_2 & 0xffffffff) << 2));
    if (PTR_DAT_0071c728[(int)param_2] == '\x04') {
      return (ulonglong)*(uint *)puVar1;
    }
    if (PTR_DAT_0071c728[(int)param_2] == '\b') {
      return *puVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05dde88 (0xa8 bytes)
undefined4 * FUN_005dde88(ulonglong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (((uint)param_1 & 0xff) == 0x50) {
    puVar1 = (undefined4 *)(param_3 + 3U & 0xfffffffc);
    *param_4 = *puVar1;
    return puVar1 + 1;
  }
  if (0xc < (param_1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x005ddef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined4 *)
           (*(code *)(PTR_DAT_0071c72c + *(int *)(PTR_DAT_0071c72c + (int)((param_1 & 0xf) << 2))))
                     ();
  return puVar1;
}


// 0x05de08c (0xac bytes)
undefined4 FUN_005de08c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      uVar1 = FUN_005ddd28(param_2);
      return uVar1;
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) goto LAB_005de0c8;
    }
    else {
      if (param_1 == 0x40) {
        uVar1 = FUN_005ddd18(param_2);
        return uVar1;
      }
      if (param_1 != 0x50) {
        if (param_1 == 0x30) {
          uVar1 = FUN_005ddd20(param_2);
          return uVar1;
        }
LAB_005de0c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return 0;
}


// 0x05de13c (0x1dc bytes)
void FUN_005de13c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c728;
  *PTR_DAT_0071c728 = 8;
  puVar1[1] = 8;
  puVar1[2] = 8;
  puVar1[3] = 8;
  puVar1[4] = 8;
  puVar1[5] = 8;
  puVar1[6] = 8;
  puVar1[7] = 8;
  puVar1[8] = 8;
  puVar1[9] = 8;
  puVar1[10] = 8;
  puVar1[0xb] = 8;
  puVar1[0xc] = 8;
  puVar1[0xd] = 8;
  puVar1[0xe] = 8;
  puVar1[0xf] = 8;
  puVar1[0x10] = 8;
  puVar1[0x11] = 8;
  puVar1[0x12] = 8;
  puVar1[0x13] = 8;
  puVar1[0x14] = 8;
  puVar1[0x15] = 8;
  puVar1[0x16] = 8;
  puVar1[0x17] = 8;
  puVar1[0x18] = 8;
  puVar1[0x19] = 8;
  puVar1[0x1a] = 8;
  puVar1[0x1b] = 8;
  puVar1[0x1c] = 8;
  puVar1[0x1d] = 8;
  puVar1[0x1e] = 8;
  puVar1[0x1f] = 8;
  puVar1[0x20] = 8;
  puVar1[0x21] = 8;
  puVar1[0x22] = 8;
  puVar1[0x23] = 8;
  puVar1[0x24] = 8;
  puVar1[0x25] = 8;
  puVar1[0x26] = 8;
  puVar1[0x27] = 8;
  puVar1[0x28] = 8;
  puVar1[0x29] = 8;
  puVar1[0x2a] = 8;
  puVar1[0x2b] = 8;
  puVar1[0x2c] = 8;
  puVar1[0x2d] = 8;
  puVar1[0x2e] = 8;
  puVar1[0x2f] = 8;
  puVar1[0x30] = 8;
  puVar1[0x31] = 8;
  puVar1[0x32] = 8;
  puVar1[0x33] = 8;
  puVar1[0x34] = 8;
  puVar1[0x35] = 8;
  puVar1[0x36] = 8;
  puVar1[0x37] = 8;
  puVar1[0x38] = 8;
  puVar1[0x39] = 8;
  puVar1[0x3a] = 8;
  puVar1[0x3b] = 8;
  puVar1[0x3c] = 8;
  puVar1[0x3d] = 8;
  puVar1[0x3e] = 8;
  puVar1[0x3f] = 8;
  puVar1[0x40] = 8;
  puVar1[0x41] = 8;
  puVar1[0x42] = 8;
  puVar1[0x4c] = 4;
  puVar1[0x43] = 8;
  puVar1[0x44] = 4;
  puVar1[0x45] = 4;
  puVar1[0x46] = 4;
  puVar1[0x47] = 4;
  puVar1[0x48] = 4;
  puVar1[0x49] = 4;
  puVar1[0x4a] = 4;
  puVar1[0x4b] = 4;
  puVar1[0x4d] = 0x10;
  puVar1[0x4e] = 0x10;
  puVar1[0x4f] = 0x10;
  puVar1[0x50] = 0x10;
  puVar1[0x51] = 0x10;
  puVar1[0x52] = 0x10;
  puVar1[0x53] = 0x10;
  puVar1[0x54] = 0x10;
  puVar1[0x55] = 0x10;
  puVar1[0x56] = 0x10;
  puVar1[0x57] = 0x10;
  puVar1[0x58] = 0x10;
  puVar1[0x59] = 0x10;
  puVar1[0x5a] = 0x10;
  puVar1[0x5b] = 0x10;
  puVar1[0x5c] = 0x10;
  puVar1[0x5d] = 0x10;
  puVar1[0x5e] = 0x10;
  puVar1[0x5f] = 0x10;
  puVar1[0x60] = 0x10;
  puVar1[0x61] = 0x10;
  puVar1[0x62] = 0x10;
  puVar1[99] = 0x10;
  puVar1[100] = 0x10;
  puVar1[0x71] = 8;
  puVar1[0x6c] = 0x10;
  puVar1[0x65] = 0x10;
  puVar1[0x66] = 0x10;
  puVar1[0x67] = 0x10;
  puVar1[0x68] = 0x10;
  puVar1[0x69] = 0x10;
  puVar1[0x6a] = 0x10;
  puVar1[0x6b] = 0x10;
  puVar1[0x6d] = 8;
  puVar1[0x6e] = 8;
  puVar1[0x6f] = 8;
  puVar1[0x70] = 8;
  return;
}


// 0x05de318 (0x44 bytes)
undefined4 FUN_005de318(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<8> auStack_10;
  undefined4 local_8;
  
  iVar1 = FUN_005e2adc(param_1 + -1,auStack_10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8;
  }
  return uVar2;
}


// 0x05de35c (0x1f0 bytes)
// strings: 005de644: 'U) 68' (raw)

void FUN_005de35c(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_68 [3];
  
  *(undefined4 *)(param_4 + 0x920) = 0;
  if ((param_1 < param_2) &&
     (uVar5 = *(uint *)(param_4 + 0x940), uVar5 < *(uint *)(param_3 + 0x24c))) {
    do {
      pbVar3 = param_1 + 1;
      bVar1 = *param_1;
      bVar2 = bVar1 & 0xc0;
      if (bVar2 == 0x40) {
        *(uint *)(param_4 + 0x940) = uVar5 + (bVar1 & 0x3f) * (int)*(undefined8 *)(param_4 + 0x950);
      }
      else if (bVar2 == 0x80) {
        uVar6 = (ulonglong)bVar1 & 0x3f;
        pbVar3 = (byte *)FUN_005ddc68(pbVar3,local_68);
        lVar4 = *(longlong *)(param_4 + 0x948);
        uVar7 = uVar6;
        if (0x4b0 < uVar6) {
          uVar7 = uVar6 - 0x43f;
        }
        *(undefined4 *)(param_4 + (int)((uVar7 & 0xffffffff) << 4) + 8) = 1;
        if (0x4b0 < uVar6) {
          uVar6 = uVar6 - 0x43f;
        }
        *(longlong *)(param_4 + (int)((uVar6 & 0xffffffff) << 4)) = local_68[0] * lVar4;
      }
      else {
        if (bVar2 != 0xc0) {
          if (0x2f < bVar1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
                    /* WARNING: Could not recover jumptable at 0x005de41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(PTR_DAT_0071c730 + *(int *)(PTR_DAT_0071c730 + (uint)bVar1 * 4)))();
          return;
        }
        uVar7 = (ulonglong)bVar1 & 0x3f;
        if (uVar7 < 0x4b1) {
          *(undefined4 *)(param_4 + (int)(uVar7 << 4) + 8) = 0;
        }
        else {
          *(undefined4 *)(param_4 + (int)(uVar7 - 0x43f) * 0x10 + 8) = 0;
        }
      }
    } while ((pbVar3 < param_2) &&
            (uVar5 = *(uint *)(param_4 + 0x940), param_1 = pbVar3,
            uVar5 < *(uint *)(param_3 + 0x24c)));
  }
  return;
}


// 0x05deaa8 (0x40c bytes)
undefined8 FUN_005deaa8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar10;
  int iVar8;
  int *piVar9;
  char *__s;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  undefined4 local_70 [2];
  undefined8 local_68;
  
  memset(param_2,0,0x968);
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  if ((*(int *)(param_1 + 0x24c) == 0) ||
     (piVar3 = (int *)FUN_005e2adc(*(int *)(param_1 + 0x24c) + -1,param_1 + 0x254),
     piVar3 == (int *)0x0)) {
    return 5;
  }
  piVar9 = (int *)((int)piVar3 + (4 - piVar3[1]));
  *(undefined4 *)(param_2 + 0x940) = *(undefined4 *)(param_1 + 0x25c);
  __s = (char *)((int)piVar9 + 9);
  sVar4 = strlen(__s);
  pbVar7 = (byte *)(__s + sVar4 + 1);
  pcVar11 = __s;
  pbVar6 = pbVar7;
  if ((*__s == 'e') && (*(char *)((int)piVar9 + 10) == 'h')) {
    pbVar6 = (byte *)(__s + sVar4 + 5);
    pcVar11 = (char *)((int)piVar9 + 0xb);
    *(uint *)(param_2 + 0x964) =
         (uint)(byte)__s[sVar4 + 4] |
         (uint)(byte)__s[sVar4 + 3] << 8 |
         (uint)(byte)__s[sVar4 + 2] << 0x10 | (uint)*pbVar7 << 0x18;
  }
  uVar5 = FUN_005ddc68(pbVar6,param_2 + 0x950);
  pbVar6 = (byte *)FUN_005ddca0(uVar5,param_2 + 0x948);
  if (*(char *)(piVar9 + 2) == '\x01') {
    pbVar7 = pbVar6 + 1;
    *(ulonglong *)(param_2 + 0x958) = (ulonglong)*pbVar6;
    *(undefined1 *)(param_2 + 0x961) = 0xff;
    cVar10 = *pcVar11;
  }
  else {
    pbVar7 = (byte *)FUN_005ddc68(pbVar6,param_2 + 0x958);
    *(undefined1 *)(param_2 + 0x961) = 0xff;
    cVar10 = *pcVar11;
  }
  pbVar6 = (byte *)0x0;
  if (cVar10 == 'z') {
    pcVar11 = pcVar11 + 1;
    pbVar7 = (byte *)FUN_005ddc68(pbVar7,&local_68);
    pbVar6 = pbVar7 + local_68.piece<4,4>();
    *(undefined1 *)(param_2 + 0x962) = 1;
  }
LAB_005debe4:
  cVar10 = *pcVar11;
  pbVar13 = pbVar7;
  if (cVar10 != '\0') {
    while (cVar10 != 'L') {
      if (cVar10 == 'R') {
        pcVar11 = pcVar11 + 1;
        pbVar7 = pbVar13 + 1;
        *(byte *)(param_2 + 0x960) = *pbVar13;
        goto LAB_005debe4;
      }
      pbVar7 = pbVar6;
      if (cVar10 != 'P') goto LAB_005ded34;
      bVar1 = *pbVar13;
      pcVar11 = pcVar11 + 1;
      uVar5 = FUN_005de08c(bVar1,param_1);
      pbVar7 = (byte *)FUN_005dde88(bVar1,uVar5,pbVar13 + 1,local_70);
      *(undefined4 *)(param_2 + 0x944) = local_70[0];
      cVar10 = *pcVar11;
      pbVar13 = pbVar7;
      if (cVar10 == '\0') goto LAB_005dec50;
    }
    pcVar11 = pcVar11 + 1;
    pbVar7 = pbVar13 + 1;
    *(byte *)(param_2 + 0x961) = *pbVar13;
    goto LAB_005debe4;
  }
LAB_005dec50:
  if (pbVar6 == (byte *)0x0) {
LAB_005ded34:
    pbVar6 = pbVar7;
    if (pbVar7 == (byte *)0x0) {
      return 3;
    }
  }
  FUN_005de35c(pbVar6,(int)piVar9 + *piVar9 + 4,param_1,param_2);
  bVar1 = *(byte *)(param_2 + 0x960);
  if (bVar1 == 0xff) {
    iVar8 = 0;
  }
  else {
    bVar2 = bVar1 & 7;
    if (bVar2 != 2) {
      if (bVar2 < 3) {
        if ((bVar1 & 7) != 0) {
LAB_005deca8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else if (bVar2 != 3) {
        if (bVar2 != 4) goto LAB_005deca8;
        iVar8 = 0x10;
        goto LAB_005deddc;
      }
      cVar10 = *(char *)(param_2 + 0x962);
      piVar9 = piVar3 + 4;
      goto joined_r0x005dedf0;
    }
    iVar8 = 4;
  }
LAB_005deddc:
  cVar10 = *(char *)(param_2 + 0x962);
  piVar9 = (int *)((int)piVar3 + iVar8 + 8);
joined_r0x005dedf0:
  piVar12 = (int *)0x0;
  if (cVar10 != '\0') {
    piVar9 = (int *)FUN_005ddc68(piVar9,&local_68);
    piVar12 = (int *)((int)piVar9 + local_68.piece<4,4>());
  }
  cVar10 = *(char *)(param_2 + 0x961);
  if (cVar10 != -1) {
    uVar5 = FUN_005de08c(cVar10,param_1);
    piVar9 = (int *)FUN_005dde88(cVar10,uVar5,piVar9,local_70);
    *(undefined4 *)(param_1 + 0x250) = local_70[0];
  }
  if (piVar12 == (int *)0x0) {
    piVar12 = piVar9;
  }
  FUN_005de35c(piVar12,(int)piVar3 + *piVar3 + 4,param_1,param_2);
  return 0;
}


// 0x05deeb8 (0x134 bytes)
int FUN_005deeb8(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  GPiece<612> auStack_bf0;
  undefined4 uStack_98c;
  undefined8 uStack_988;
  undefined4 auStack_980 [585];
  undefined4 uStack_5c;
  undefined2 uStack_52;
  int local_4c;
  undefined2 uStack_2a;
  undefined4 local_24;
  
  memset(auStack_bf0,0,0x268);
  iVar3 = FUN_005deaa8(auStack_bf0,&uStack_988);
  if ((iVar3 == 0) && (local_4c != 2)) {
    pcVar4 = (char *)(param_2 + 0x14c);
    lVar6 = 0x4e;
    puVar5 = (undefined4 *)(param_2 + 0x10);
    iVar3 = 0;
    do {
      puVar1 = (undefined8 *)((int)&uStack_988 + iVar3);
      cVar2 = (char)*(undefined4 *)((int)auStack_980 + iVar3);
      *pcVar4 = cVar2;
      if (cVar2 == '\x01') {
        *puVar5 = (int)*puVar1;
      }
      else if (cVar2 == '\x02') {
        *puVar5 = (int)*puVar1;
      }
      else {
        *puVar5 = 0;
      }
      iVar3 = iVar3 + 0x10;
      pcVar4 = pcVar4 + 1;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined4 *)(param_2 + 8) = uStack_5c;
    *(undefined2 *)(param_2 + 0x148) = uStack_52;
    *(undefined2 *)(param_2 + 0x14a) = uStack_2a;
    *(undefined4 *)(param_2 + 0xc) = uStack_98c;
    *(undefined4 *)(param_2 + 4) = local_24;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


// 0x05defec (0xa8 bytes)
undefined8 FUN_005defec(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 <= param_1) {
    return param_4;
  }
  if ((byte)(*param_1 - 3U) < 0x94) {
                    /* WARNING: Could not recover jumptable at 0x005df05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071c734 +
                      *(int *)(PTR_DAT_0071c734 + (uint)(byte)(*param_1 - 3) * 4)))();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort(param_1 + 1);
}


// 0x05dfa80 (0x304 bytes)
void FUN_005dfa80(void *param_1,int param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  void *pvVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong local_2d0;
  longlong local_2c8;
  ulonglong *apuStack_2c0 [156];
  
  pvVar5 = memcpy(apuStack_2c0,param_1,0x268);
  uVar4 = (ulonglong)(int)pvVar5;
  if (apuStack_2c0[1] == (ulonglong *)0x0) {
    if (PTR_DAT_0071c728[1] == '\x04') {
      local_2d0 = CONCAT44(*(uint *)((int)param_1 + 0x248),local_2d0.piece<4,4>());
    }
    else {
      if (PTR_DAT_0071c728[1] != '\b') goto LAB_005dfb04;
      local_2d0 = (ulonglong)*(uint *)((int)param_1 + 0x248);
    }
    apuStack_2c0[1] = &local_2d0;
  }
  iVar10 = *(int *)(param_2 + 0x93c);
  *(undefined4 *)((int)param_1 + 4) = 0;
  if (iVar10 == 1) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x934);
    if (0x4b0 < (int)*(uint *)(param_2 + 0x934)) {
      uVar6 = uVar6 - 0x43f;
    }
    if (0x91 < (int)uVar6) goto LAB_005dfb04;
    puVar2 = *(ulonglong **)((int)apuStack_2c0 + (int)((uVar6 & 0xffffffff) << 2));
    if (PTR_DAT_0071c728[(int)uVar6] == '\x04') {
      uVar4 = (ulonglong)*(uint *)puVar2;
    }
    else {
      if (PTR_DAT_0071c728[(int)uVar6] != '\b') goto LAB_005dfb04;
      uVar4 = *puVar2;
    }
    uVar6 = uVar4 + *(longlong *)(param_2 + 0x928);
  }
  else {
    if (iVar10 != 2) goto LAB_005dfb04;
    uVar4 = FUN_005ddc68(*(undefined4 *)(param_2 + 0x938),&local_2c8);
    uVar4 = FUN_005defec(uVar4 & 0xffffffff,uVar4 + local_2c8 & 0xffffffff,apuStack_2c0,0);
    uVar6 = uVar4;
  }
  iVar11 = 0;
  iVar10 = 0;
  *(int *)((int)param_1 + 0x248) = (int)uVar6;
  do {
    while( true ) {
      puVar3 = (undefined8 *)(param_2 + iVar11);
      iVar7 = *(int *)(puVar3 + 1);
      if (iVar7 != 2) break;
      iVar7 = *(int *)((int)puVar3 + 4);
      if (0x4b0 < iVar7) {
        iVar7 = iVar7 + -0x43f;
      }
      puVar9 = (undefined4 *)(iVar10 + (int)param_1);
      bVar1 = iVar11 == 0x910;
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 0x10;
      *puVar9 = apuStack_2c0[iVar7];
      if (bVar1) goto LAB_005dfbe4;
    }
    if (iVar7 == 3) {
      uVar4 = FUN_005ddc68(*(undefined4 *)puVar3,&local_2c8);
      uVar4 = FUN_005defec(uVar4 & 0xffffffff,uVar4 + local_2c8 & 0xffffffff,apuStack_2c0,
                           uVar6 & 0xffffffff);
      *(int *)(iVar10 + (int)param_1) = (int)uVar4;
    }
    else if (iVar7 == 1) {
      *(int *)(iVar10 + (int)param_1) = (int)uVar6 + (int)*puVar3;
    }
    bVar1 = iVar11 != 0x910;
    iVar10 = iVar10 + 4;
    iVar11 = iVar11 + 0x10;
  } while (bVar1);
LAB_005dfbe4:
  if (*(int *)(param_2 + 0x28) == 0) {
    if (PTR_DAT_0071c728[0x41] == '\x04') {
      piVar8 = *(int **)*(undefined8 **)((int)param_1 + 0x104);
    }
    else {
      if (PTR_DAT_0071c728[0x41] != '\b') {
LAB_005dfb04:
                    /* WARNING: Subroutine does not return */
        abort(uVar4);
      }
      piVar8 = (int *)**(undefined8 **)((int)param_1 + 0x104);
    }
    if (*piVar8 == -0x17beffd8) {
      *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 0x248) + 0x28;
      return;
    }
  }
  return;
}


// 0x05dfd88 (0x2f0 bytes)
void FUN_005dfd88(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_LR;
  ulonglong local_9a0;
  GPiece<2344> auStack_998;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  
  memset(param_1,0,0x268);
  *(undefined4 *)(param_1 + 0x24c) = in_LR;
  iVar3 = FUN_005deaa8(param_1,auStack_998);
  puVar2 = PTR_DAT_0071c728;
  if (iVar3 == 0) {
    iVar3 = FUN_005e30a8(PTR_DAT_0071c728 + 0x94,PTR_PTR_0071c73c);
    if ((iVar3 == 0) && (*puVar2 != '\0')) {
      cVar1 = puVar2[1];
    }
    else {
      *puVar2 = 8;
      puVar2[1] = 8;
      puVar2[2] = 8;
      puVar2[3] = 8;
      puVar2[4] = 8;
      puVar2[5] = 8;
      puVar2[6] = 8;
      puVar2[7] = 8;
      puVar2[8] = 8;
      puVar2[9] = 8;
      puVar2[10] = 8;
      puVar2[0xb] = 8;
      puVar2[0xc] = 8;
      puVar2[0xd] = 8;
      puVar2[0xe] = 8;
      puVar2[0xf] = 8;
      puVar2[0x10] = 8;
      puVar2[0x11] = 8;
      puVar2[0x12] = 8;
      puVar2[0x13] = 8;
      puVar2[0x14] = 8;
      puVar2[0x15] = 8;
      puVar2[0x16] = 8;
      puVar2[0x17] = 8;
      puVar2[0x18] = 8;
      puVar2[0x19] = 8;
      puVar2[0x1a] = 8;
      puVar2[0x1b] = 8;
      puVar2[0x1c] = 8;
      puVar2[0x1d] = 8;
      puVar2[0x1e] = 8;
      puVar2[0x1f] = 8;
      puVar2[0x20] = 8;
      puVar2[0x21] = 8;
      puVar2[0x22] = 8;
      puVar2[0x23] = 8;
      puVar2[0x24] = 8;
      puVar2[0x25] = 8;
      puVar2[0x26] = 8;
      puVar2[0x27] = 8;
      puVar2[0x28] = 8;
      puVar2[0x29] = 8;
      puVar2[0x2a] = 8;
      puVar2[0x2b] = 8;
      puVar2[0x2c] = 8;
      puVar2[0x2d] = 8;
      puVar2[0x2e] = 8;
      puVar2[0x2f] = 8;
      puVar2[0x30] = 8;
      puVar2[0x31] = 8;
      puVar2[0x32] = 8;
      puVar2[0x33] = 8;
      puVar2[0x34] = 8;
      puVar2[0x35] = 8;
      puVar2[0x36] = 8;
      puVar2[0x37] = 8;
      puVar2[0x38] = 8;
      puVar2[0x39] = 8;
      puVar2[0x3a] = 8;
      puVar2[0x3b] = 8;
      puVar2[0x3c] = 8;
      puVar2[0x3d] = 8;
      puVar2[0x3e] = 8;
      puVar2[0x3f] = 8;
      puVar2[0x40] = 8;
      puVar2[0x41] = 8;
      puVar2[0x42] = 8;
      puVar2[0x43] = 8;
      puVar2[0x4c] = 4;
      puVar2[0x44] = 4;
      puVar2[0x45] = 4;
      puVar2[0x46] = 4;
      puVar2[0x47] = 4;
      puVar2[0x48] = 4;
      puVar2[0x49] = 4;
      puVar2[0x4a] = 4;
      puVar2[0x4b] = 4;
      puVar2[0x4d] = 0x10;
      puVar2[0x4e] = 0x10;
      puVar2[0x4f] = 0x10;
      puVar2[0x50] = 0x10;
      puVar2[0x51] = 0x10;
      puVar2[0x52] = 0x10;
      puVar2[0x53] = 0x10;
      puVar2[0x54] = 0x10;
      puVar2[0x55] = 0x10;
      puVar2[0x56] = 0x10;
      puVar2[0x57] = 0x10;
      puVar2[0x58] = 0x10;
      puVar2[0x59] = 0x10;
      puVar2[0x5a] = 0x10;
      puVar2[0x5b] = 0x10;
      puVar2[0x5c] = 0x10;
      puVar2[0x5d] = 0x10;
      puVar2[0x5e] = 0x10;
      puVar2[0x5f] = 0x10;
      puVar2[0x60] = 0x10;
      puVar2[0x61] = 0x10;
      puVar2[0x62] = 0x10;
      puVar2[99] = 0x10;
      puVar2[100] = 0x10;
      puVar2[0x65] = 0x10;
      cVar1 = puVar2[1];
      puVar2[0x6c] = 0x10;
      puVar2[0x71] = 8;
      puVar2[0x66] = 0x10;
      puVar2[0x67] = 0x10;
      puVar2[0x68] = 0x10;
      puVar2[0x69] = 0x10;
      puVar2[0x6a] = 0x10;
      puVar2[0x6b] = 0x10;
      puVar2[0x6d] = 8;
      puVar2[0x6e] = 8;
      puVar2[0x6f] = 8;
      puVar2[0x70] = 8;
    }
    if (cVar1 == '\x04') {
      local_9a0 = CONCAT44(param_2,local_9a0.piece<4,4>());
    }
    else {
      if (cVar1 != '\b') goto LAB_005e0074;
      local_9a0 = (ulonglong)param_2;
    }
    *(ulonglong **)(param_1 + 4) = &local_9a0;
    local_5c = 1;
    local_68 = 1;
    local_70 = 0;
    FUN_005dfa80(param_1,auStack_998);
    *(undefined4 *)(param_1 + 0x24c) = param_3;
    return;
  }
LAB_005e0074:
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e007c (0x1a0 bytes)
int FUN_005e007c(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  void *__src;
  void *__dest;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong local_50 [2];
  
  puVar3 = PTR_DAT_0071c728;
  if (*(int *)(param_2 + 4) == 0) {
    if (PTR_DAT_0071c728[1] == '\x04') {
      local_50[0] = CONCAT44(*(uint *)(param_2 + 0x248),local_50[0].piece<4,4>());
    }
    else {
      if (PTR_DAT_0071c728[1] != '\b') goto LAB_005e0218;
      local_50[0] = (ulonglong)*(uint *)(param_2 + 0x248);
    }
    *(ulonglong **)(param_2 + 4) = local_50;
  }
  iVar4 = 0;
  pbVar5 = puVar3;
  do {
    __src = *(void **)(iVar4 + param_2);
    __dest = *(void **)(iVar4 + param_1);
    if (((__src != (void *)0x0) && (__dest != (void *)0x0)) && (__dest != __src)) {
      memcpy(__dest,__src,(uint)*pbVar5);
    }
    bVar1 = iVar4 != 0x240;
    pbVar5 = pbVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (bVar1);
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  cVar2 = puVar3[1];
  if (cVar2 == '\x04') {
    iVar4 = **(int **)(param_2 + 4);
  }
  else {
    if (cVar2 != '\b') {
LAB_005e0218:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar4 = (int)*(undefined8 *)*(int **)(param_2 + 4);
  }
  return (iVar4 - *(int *)(param_1 + 0x248)) + (int)*(undefined8 *)(param_2 + 0x260);
}


// 0x05e0220 (0xbc bytes)
void FUN_005e0220(int param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  FUN_005dfa80();
  uVar2 = (ulonglong)*(uint *)(param_2 + 0x95c);
  if (0x4b0 < (int)*(uint *)(param_2 + 0x95c)) {
    uVar2 = uVar2 - 0x43f;
  }
  if ((int)uVar2 < 0x92) {
    puVar1 = *(undefined8 **)(param_1 + (int)((uVar2 & 0xffffffff) << 2));
    if (PTR_DAT_0071c728[(int)uVar2] == '\x04') {
      *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)puVar1;
      return;
    }
    if (PTR_DAT_0071c728[(int)uVar2] == '\b') {
      *(int *)(param_1 + 0x24c) = (int)*puVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e02e0 (0x22c bytes)
/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e038c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_005e02e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_LR;
  uint uStack00000008;
  GPiece<616> auStack_d20;
  GPiece<2456> auStack_ab8;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_d20,&stack0x00000000,in_LR);
  while( true ) {
    iVar1 = FUN_005deaa8(auStack_d20,auStack_ab8);
    if ((iVar1 != 0) && (iVar1 != 5)) {
      return 3;
    }
    iVar2 = (*(code *)*param_1)(auStack_d20,param_2);
    if (iVar2 != 0) {
      return 3;
    }
    if (iVar1 == 5) break;
    FUN_005e0220(auStack_d20,auStack_ab8);
  }
  return 5;
}


// 0x05e050c (0x10c bytes)
undefined4 FUN_005e050c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  GPiece<2372> auStack_9a0;
  undefined4 *local_5c;
  
  do {
    iVar3 = FUN_005deaa8(param_2,auStack_9a0);
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x24c) ^ param_1[3];
    uVar4 = (longlong)uVar2 >> 0x3f;
    if (iVar3 != 0) {
      return 2;
    }
    uVar1 = (uint)((((uVar4 ^ uVar2) - uVar4) - 1 >> 0x3f) << 2);
    if (local_5c != (undefined4 *)0x0) {
      iVar3 = (*(code *)*local_5c)(1,uVar1 | 2,*param_1,param_1,param_2);
      if (iVar3 == 7) {
        return 7;
      }
      if (iVar3 != 8) {
        return 2;
      }
    }
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_005e0220(param_2,auStack_9a0);
  } while( true );
}


// 0x05e061c (0x2fc bytes)
/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e06e0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 * FUN_005e061c(undefined8 *param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_LR;
  uint uStack00000008;
  GPiece<616> auStack_fd0;
  GPiece<588> auStack_d68;
  uint local_b1c;
  GPiece<2372> auStack_b00;
  undefined4 *local_1bc;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_fd0,&stack0x00000000,in_LR);
  memcpy(auStack_d68,auStack_fd0,0x268);
  do {
    iVar1 = FUN_005deaa8(auStack_d68,auStack_b00);
    if (iVar1 == 5) {
      return param_1;
    }
    if (iVar1 != 0) {
      return param_1;
    }
    if (local_1bc != (undefined4 *)0x0) {
      iVar1 = (*(code *)*local_1bc)(1,1,*param_1,param_1,auStack_d68);
      if (iVar1 == 6) {
        param_1[3] = (ulonglong)local_b1c;
        param_1[2] = 0;
        memcpy(auStack_d68,auStack_fd0,0x268);
        iVar1 = FUN_005e050c(param_1,auStack_d68);
        if (iVar1 == 7) {
          FUN_005e007c(auStack_fd0,auStack_d68);
        }
        return param_1;
      }
      if (iVar1 != 8) {
        return param_1;
      }
    }
    FUN_005e0220(auStack_d68,auStack_b00);
  } while( true );
}


// 0x05e0918 (0x13c bytes)
undefined4 FUN_005e0918(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  GPiece<2372> auStack_9b0;
  undefined4 *local_6c;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1c);
  puVar2 = *(undefined4 **)((int)param_1 + 0x14);
  do {
    iVar3 = FUN_005deaa8(param_2,auStack_9b0);
    uVar5 = 10;
    if (iVar3 != 0) {
      if (iVar3 != 5) {
        return 2;
      }
      uVar5 = 0x1a;
    }
    iVar4 = (*(code *)*puVar2)(1,uVar5,*param_1,param_1,param_2,uVar1);
    if (iVar4 != 0) {
      return 2;
    }
    if (iVar3 == 5) {
      return 5;
    }
    if (local_6c != (undefined4 *)0x0) {
      iVar3 = (*(code *)*local_6c)(1,10,*param_1,param_1,param_2);
      if (iVar3 == 7) {
        return 7;
      }
      if (iVar3 != 8) {
        return 2;
      }
    }
    FUN_005e0220(param_2,auStack_9b0);
  } while( true );
}


// 0x05e0a54 (0x23c bytes)
/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e0b18 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005e0a54(int param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_LR;
  uint uStack00000008;
  GPiece<616> auStack_630;
  GPiece<680> auStack_3c8;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_005e061c(param_1);
  }
  else {
    FUN_005dfd88(auStack_630,&stack0x00000000,in_LR);
    memcpy(auStack_3c8,auStack_630,0x268);
    iVar1 = FUN_005e0918(param_1,auStack_3c8);
    if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_005e007c(auStack_630,auStack_3c8);
  }
  return param_1;
}


// 0x05e0c94 (0x23c bytes)
/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e0d58 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005e0c94(int param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_LR;
  uint uStack00000008;
  GPiece<616> auStack_640;
  GPiece<696> auStack_3d8;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_640,&stack0x00000000,in_LR);
  memcpy(auStack_3d8,auStack_640,0x268);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_005e050c(param_1,auStack_3d8);
  }
  else {
    iVar1 = FUN_005e0918(param_1,auStack_3d8);
  }
  if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_005e007c(auStack_640,auStack_3d8);
  return param_1;
}


// 0x05e0ed4 (0x244 bytes)
/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e0f98 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005e0ed4(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_LR;
  uint uStack00000008;
  GPiece<616> auStack_640;
  GPiece<696> auStack_3d8;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_640,&stack0x00000000,in_LR);
  memcpy(auStack_3d8,auStack_640,0x268);
  *(ulonglong *)(param_1 + 0x18) = param_3 & 0xffffffff;
  *(ulonglong *)(param_1 + 0x10) = param_2 & 0xffffffff;
  iVar1 = FUN_005e0918(param_1,auStack_3d8);
  if (iVar1 == 7) {
    FUN_005e007c(auStack_640,auStack_3d8);
  }
  return param_1;
}


// SDK libcgc.a(libcgc_cell_localize.o): read_uleb128(unsigned char const*, unsigned long long*)  [exact match]
// 0x05e1118 (0x38 bytes)
byte * FUN_005e1118(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return param_1;
}


// 0x05e1150 (0x58 bytes)
byte * FUN_005e1150(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0xffffffff) < 0x40) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1L << (uVar4 & 0x7f);
  }
  *param_2 = uVar3;
  return param_1;
}


// 0x05e11a8 (0x28 bytes)
undefined4 FUN_005e11a8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8)) &&
     (uVar1 = 0xffffffff, *(uint *)(param_3 + 8) <= *(uint *)(param_2 + 8))) {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05e11d0 (0x13c bytes)
void FUN_005e11d0(undefined4 param_1,undefined4 *param_2,int param_3,ulonglong param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  uVar5 = (param_4 & 0x7fffffff) * 2 + 1;
  iVar4 = (int)uVar5;
  while( true ) {
    if (param_5 <= iVar4) {
      return;
    }
    iVar4 = (int)(uVar5 + 1);
    puVar7 = (undefined4 *)(param_3 + (int)uVar5 * 4);
    uVar6 = uVar5;
    if (iVar4 < param_5) {
      iVar3 = (*(code *)*param_2)(param_1,*puVar7,puVar7[1]);
      if (iVar3 < 0) {
        uVar6 = uVar5 + 1;
        puVar7 = (undefined4 *)(param_3 + iVar4 * 4);
      }
    }
    puVar2 = (undefined4 *)((int)((param_4 & 0xffffffff) << 2) + param_3);
    iVar3 = (*(code *)*param_2)(param_1,*puVar2,*puVar7);
    uVar5 = (uVar6 & 0x7fffffff) * 2 + 1;
    iVar4 = (int)uVar5;
    if (-1 < iVar3) break;
    uVar1 = *puVar2;
    *puVar2 = *puVar7;
    *puVar7 = uVar1;
    param_4 = uVar6;
  }
  return;
}


// 0x05e130c (0x118 bytes)
void FUN_005e130c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_3 + 4);
  uVar3 = uVar1 >> 1;
  puVar5 = (undefined4 *)(param_3 + 8);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    FUN_005e11d0(param_1,param_2,puVar5,uVar3,uVar1);
  }
  if (0 < (int)(uVar1 - 1)) {
    puVar4 = puVar5 + uVar1;
    iVar6 = uVar1 - 1;
    do {
      puVar4 = puVar4 + -1;
      uVar2 = *puVar5;
      iVar7 = iVar6 + -1;
      *puVar5 = *puVar4;
      *puVar4 = uVar2;
      FUN_005e11d0(param_1,param_2,puVar5,0,iVar6);
      iVar6 = iVar7;
    } while (0 < iVar7);
  }
  return;
}


// 0x05e1424 (0x2c bytes)
void FUN_005e1424(void)

{
  FUN_005e30a8(PTR_DAT_0071c740,PTR_PTR_0071c744);
  return;
}


// SDK libcgc.a(libcgc_cell_localize.o): emergency_mutex_init()  [exact match]
// 0x05e1450 (0x2c bytes)
void FUN_005e1450(void)

{
  FUN_005e2ec8(ZEXT48(PTR_DAT_0071c740) + 8);
  return;
}


// 0x05e147c (0x84 bytes)
undefined4 FUN_005e147c(uint param_1,int param_2)

{
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      return *(undefined4 *)(param_2 + 4);
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 0x30) {
        return *(undefined4 *)(param_2 + 8);
      }
      if (param_1 != 0x50) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return 0;
}


// 0x05e1508 (0xa8 bytes)
undefined4 * FUN_005e1508(ulonglong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (((uint)param_1 & 0xff) == 0x50) {
    puVar1 = (undefined4 *)(param_3 + 3U & 0xfffffffc);
    *param_4 = *puVar1;
    return puVar1 + 1;
  }
  if (0xc < (param_1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x005e1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined4 *)
           (*(code *)(PTR_DAT_0071c748 + *(int *)(PTR_DAT_0071c748 + (int)((param_1 & 0xf) << 2))))
                     ();
  return puVar1;
}


// 0x05e170c (0xb8 bytes)
undefined4 FUN_005e170c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint local_40;
  uint local_3c [3];
  
  uVar1 = FUN_005e147c(*(uint *)(param_1 + 0x10) >> 0x15 & 0xff,param_1);
  FUN_005e1508(*(uint *)(param_1 + 0x10) >> 0x15 & 0xff,uVar1,param_2 + 8,&local_40);
  FUN_005e1508(*(uint *)(param_1 + 0x10) >> 0x15 & 0xff,uVar1,param_3 + 8,local_3c);
  uVar1 = 1;
  if ((local_40 <= local_3c[0]) && (uVar1 = 0xffffffff, local_3c[0] <= local_40)) {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05e17c4 (0x13c bytes)
byte FUN_005e17c4(int param_1)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  GPiece<8> auStack_40;
  GPiece<8> auStack_38;
  GPiece<16> auStack_30;
  
  pcVar7 = (char *)(param_1 + 9);
  if (*pcVar7 == 'z') {
    sVar2 = strlen(pcVar7);
    uVar3 = FUN_005e1118(pcVar7 + sVar2 + 1,auStack_38);
    iVar4 = FUN_005e1150(uVar3,auStack_30);
    iVar5 = iVar4 + 1;
    if (*(char *)(param_1 + 8) != '\x01') {
      iVar5 = FUN_005e1118(iVar4,auStack_38);
    }
    pcVar7 = (char *)(param_1 + 10);
    pbVar6 = (byte *)FUN_005e1118(iVar5,auStack_38);
    cVar1 = *pcVar7;
    while( true ) {
      while( true ) {
        if (cVar1 == 'R') {
          return *pbVar6;
        }
        if (cVar1 != 'P') break;
        pbVar6 = (byte *)FUN_005e1508(*pbVar6 & 0x7f,0,pbVar6 + 1,auStack_40);
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      if (cVar1 != 'L') break;
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pbVar6 = pbVar6 + 1;
    }
  }
  return 0;
}


// 0x05e1900 (0x80 bytes)
undefined8 FUN_005e1900(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    param_1 = param_1 & 7;
    if (param_1 == 2) {
      return 2;
    }
    if (param_1 < 3) {
      if (param_1 != 0) goto LAB_005e1934;
    }
    else if (param_1 != 3) {
      if (param_1 == 4) {
        return 8;
      }
LAB_005e1934:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = 4;
  }
  return uVar1;
}


// 0x05e1984 (0x1e8 bytes)
int * FUN_005e1984(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar3;
  int iVar7;
  uint local_70;
  uint local_6c [5];
  
  uVar5 = *(uint *)(param_1 + 0x10) >> 0x15;
  uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
  if (*param_2 == 0) {
    return (int *)0x0;
  }
  uVar5 = uVar5 & 0xff;
  iVar7 = 0;
  do {
    while (param_2[1] == 0) {
LAB_005e1a38:
      param_2 = (int *)((int)param_2 + *param_2 + 4);
      if (*param_2 == 0) {
        return (int *)0x0;
      }
    }
    if (((*(uint *)(param_1 + 0x10) & 0x20000000) != 0) &&
       (iVar1 = (int)param_2 + (4 - param_2[1]), iVar7 != iVar1)) {
      uVar5 = FUN_005e17c4(iVar1);
      uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
      iVar7 = iVar1;
    }
    if (uVar5 == 0) {
      local_70 = param_2[2];
      local_6c[0] = param_2[3];
      if (local_70 != 0) goto LAB_005e1a28;
      goto LAB_005e1a38;
    }
    uVar6 = FUN_005e1508(uVar5 & 0xff,uVar4,param_2 + 2,&local_70);
    FUN_005e1508(uVar5 & 0xf,0,uVar6,local_6c);
    uVar3 = FUN_005e1900(uVar5 & 0xff);
    uVar2 = 0xffffffff;
    if ((uVar3 & 0xffffffff) < 4) {
      uVar2 = (1 << ((uint)((uVar3 & 0xffffffff) << 3) & 0x38)) - 1;
    }
    if ((uVar2 & local_70) != 0) {
LAB_005e1a28:
      if (param_3 - local_70 < local_6c[0]) {
        return param_2;
      }
      goto LAB_005e1a38;
    }
    param_2 = (int *)((int)param_2 + *param_2 + 4);
    if (*param_2 == 0) {
      return (int *)0x0;
    }
  } while( true );
}


// 0x05e1b6c (0x1d0 bytes)
void FUN_005e1b6c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar3;
  uint uVar6;
  int iVar7;
  uint local_60 [4];
  
  uVar5 = *(uint *)(param_1 + 0x10) >> 0x15;
  uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
  if (*param_3 == 0) {
    return;
  }
  uVar5 = uVar5 & 0xff;
  iVar7 = 0;
  do {
    while (iVar2 = iVar7, param_3[1] == 0) {
LAB_005e1c20:
      param_3 = (int *)((int)param_3 + *param_3 + 4);
      iVar7 = iVar2;
      if (*param_3 == 0) {
        return;
      }
    }
    if (((*(uint *)(param_1 + 0x10) & 0x20000000) != 0) &&
       (iVar2 = (int)param_3 + (4 - param_3[1]), iVar2 != iVar7)) {
      uVar5 = FUN_005e17c4(iVar2);
      uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
    }
    if (uVar5 == 0) {
      if (param_3[2] != 0) goto LAB_005e1bf4;
      goto LAB_005e1c20;
    }
    FUN_005e1508(uVar5 & 0xff,uVar4,param_3 + 2,local_60);
    uVar3 = FUN_005e1900(uVar5 & 0xff);
    uVar6 = 0xffffffff;
    if ((uVar3 & 0xffffffff) < 4) {
      uVar6 = (1 << ((uint)((uVar3 & 0xffffffff) << 3) & 0x38)) - 1;
    }
    if ((uVar6 & local_60[0]) != 0) {
LAB_005e1bf4:
      iVar7 = *param_2;
      if (iVar7 != 0) {
        iVar1 = *(int *)(iVar7 + 4);
        *(int *)(iVar7 + 4) = iVar1 + 1;
        *(int **)(iVar7 + iVar1 * 4 + 8) = param_3;
      }
      goto LAB_005e1c20;
    }
    param_3 = (int *)((int)param_3 + *param_3 + 4);
    iVar7 = iVar2;
    if (*param_3 == 0) {
      return;
    }
  } while( true );
}


// 0x05e1d3c (0x1cc bytes)
int FUN_005e1d3c(uint *param_1,int *param_2)

{
  uint uVar2;
  ulonglong uVar1;
  undefined4 uVar4;
  ulonglong uVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint local_70 [6];
  
  iVar6 = 0;
  if (*param_2 != 0) {
    uVar7 = 0;
    uVar4 = 0;
    iVar5 = 0;
    do {
      while (iVar8 = iVar5, param_2[1] != 0) {
        uVar3 = uVar7 & 0xff;
        iVar8 = (int)param_2 + (4 - param_2[1]);
        if (iVar8 != iVar5) {
          uVar7 = FUN_005e17c4(iVar8);
          uVar3 = uVar7 & 0xff;
          uVar4 = FUN_005e147c(uVar3,param_1);
          uVar2 = param_1[4];
          if ((uVar2 & 0x1fe00000) == 0x1fe00000) {
            uVar1 = ((ulonglong)uVar2 & 0x1fffff) << 3 | (ulonglong)(uVar2 >> 0x1d);
            param_1[4] = (uint)(uVar1 << 0x1d) | (uint)uVar1 >> 3 |
                         (uint)((uVar7 & 0xffffffff) << 0x15) & 0x1fe00000;
          }
          else if ((uVar2 >> 0x15 & 0xff) != (uint)uVar7) {
            param_1[4] = uVar2 | 0x20000000;
          }
        }
        FUN_005e1508(uVar3,uVar4,param_2 + 2,local_70);
        uVar3 = FUN_005e1900(uVar3);
        uVar2 = 0xffffffff;
        if ((uVar3 & 0xffffffff) < 4) {
          uVar2 = (1 << ((uint)((uVar3 & 0xffffffff) << 3) & 0x38)) - 1;
        }
        if (((uVar2 & local_70[0]) != 0) && (iVar6 = iVar6 + 1, local_70[0] < *param_1)) {
          *param_1 = local_70[0];
          break;
        }
        param_2 = (int *)((int)param_2 + *param_2 + 4);
        iVar5 = iVar8;
        if (*param_2 == 0) {
          return iVar6;
        }
      }
      param_2 = (int *)((int)param_2 + *param_2 + 4);
      iVar5 = iVar8;
    } while (*param_2 != 0);
  }
  return iVar6;
}


// 0x05e1f08 (0xb8 bytes)
void FUN_005e1f08(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_2[3] = param_1;
    *param_2 = 0xffffffff;
    param_2[1] = param_3;
    param_2[4] = 0x1fe00000;
    param_2[2] = param_4;
    FUN_005e1424();
    puVar2 = PTR_DAT_0071c740;
    puVar1 = PTR_DAT_0071c740 + 8;
    FUN_005e2e54(puVar1);
    param_2[5] = *(undefined4 *)(puVar2 + 0x20);
    *(undefined4 **)(puVar2 + 0x20) = param_2;
    FUN_005e2e1c(puVar1);
    return;
  }
  return;
}


// 0x05e1fc0 (0x2c bytes)
void FUN_005e1fc0(undefined8 param_1,undefined8 param_2)

{
  FUN_005e1f08(param_1,param_2,0,0);
  return;
}


// 0x05e1fec (0x54 bytes)
void FUN_005e1fec(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_005d5838(0x18);
    FUN_005e1fc0(param_1,uVar1);
  }
  return;
}


// 0x05e2040 (0x174 bytes)
int FUN_005e2040(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  FUN_005e1424();
  puVar1 = PTR_DAT_0071c740;
  FUN_005e2e54(PTR_DAT_0071c740 + 8);
  iVar3 = *(int *)(puVar1 + 0x20);
  if (iVar3 == 0) {
LAB_005e20ec:
    iVar3 = *(int *)(puVar1 + 0x24);
    if (iVar3 != 0) {
      piVar2 = (int *)(puVar1 + 0x24);
      do {
        if (*(int *)(iVar3 + 0x10) < 0) {
          if ((int *)**(undefined4 **)(iVar3 + 0xc) == param_1) {
            *piVar2 = *(int *)(iVar3 + 0x14);
            FUN_005d580c(*(undefined4 *)(iVar3 + 0xc));
            goto LAB_005e214c;
          }
        }
        else if (*(int **)(iVar3 + 0xc) == param_1) goto LAB_005e2144;
        piVar2 = (int *)(iVar3 + 0x14);
        iVar3 = *piVar2;
      } while (iVar3 != 0);
    }
    FUN_005e2e1c(puVar1 + 8);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int **)(iVar3 + 0xc) == param_1) {
    piVar2 = (int *)(puVar1 + 0x20);
  }
  else {
    do {
      piVar2 = (int *)(iVar3 + 0x14);
      iVar3 = *piVar2;
      if (iVar3 == 0) goto LAB_005e20ec;
    } while (*(int **)(iVar3 + 0xc) != param_1);
  }
LAB_005e2144:
  *piVar2 = *(int *)(iVar3 + 0x14);
LAB_005e214c:
  FUN_005e2e1c(puVar1 + 8);
  return iVar3;
}


// 0x05e21b8 (0x28 bytes)
undefined4 FUN_005e21b8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005e2040();
  return uVar1;
}


// 0x05e21e0 (0x40 bytes)
void FUN_005e21e0(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_005e21b8();
    FUN_005d580c(uVar1);
  }
  return;
}


// 0x05e2220 (0x88 bytes)
void FUN_005e2220(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_2 = 0xffffffff;
  param_2[3] = param_1;
  param_2[1] = param_3;
  param_2[2] = param_4;
  param_2[4] = 0x5fe00000;
  FUN_005e1424();
  puVar2 = PTR_DAT_0071c740;
  puVar1 = PTR_DAT_0071c740 + 8;
  FUN_005e2e54(puVar1);
  param_2[5] = *(undefined4 *)(puVar2 + 0x20);
  *(undefined4 **)(puVar2 + 0x20) = param_2;
  FUN_005e2e1c(puVar1);
  return;
}


// 0x05e22a8 (0x2c bytes)
void FUN_005e22a8(undefined8 param_1,undefined8 param_2)

{
  FUN_005e2220(param_1,param_2,0,0);
  return;
}


// 0x05e22d4 (0x44 bytes)
void FUN_005e22d4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d5838(0x18);
  FUN_005e22a8(param_1,uVar1);
  return;
}


// 0x05e2318 (0x7c0 bytes)
int FUN_005e2318(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  int *piVar21;
  uint uVar22;
  uint local_90;
  uint local_8c;
  GPiece<16> local_88;
  
  uVar18 = param_1[4];
  if ((int)uVar18 < 0) goto LAB_005e2440;
  uVar10 = uVar18 & 0x1fffff;
  if (uVar10 == 0) {
    if ((uVar18 & 0x40000000) == 0) {
      uVar10 = FUN_005e1d3c(param_1,param_1[3]);
      uVar18 = param_1[4];
      uVar17 = uVar10 & 0x1fffff;
    }
    else {
      piVar21 = (int *)param_1[3];
      uVar10 = 0;
      uVar17 = 0;
      iVar4 = *piVar21;
      if (iVar4 != 0) {
        do {
          piVar21 = piVar21 + 1;
          iVar4 = FUN_005e1d3c(param_1,iVar4);
          uVar10 = uVar10 + iVar4;
          iVar4 = *piVar21;
        } while (iVar4 != 0);
        uVar17 = uVar10 & 0x1fffff;
        uVar18 = param_1[4];
      }
    }
    param_1[4] = uVar18 & 0xffe00000 | uVar17;
    if (uVar17 != uVar10) {
      param_1[4] = uVar18 & 0xffe00000;
    }
    if (uVar10 != 0) goto LAB_005e2518;
  }
  else {
LAB_005e2518:
    iVar4 = uVar10 * 4 + 8;
    puVar5 = (uint *)FUN_005d5838(iVar4);
    if (puVar5 != (uint *)0x0) {
      puVar5[1] = 0;
      iVar4 = FUN_005d5838(iVar4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      if ((param_1[4] & 0x40000000) == 0) {
        FUN_005e1b6c(param_1,local_88,param_1[3]);
      }
      else {
        piVar21 = (int *)param_1[3];
        iVar6 = *piVar21;
        while (iVar6 != 0) {
          piVar21 = piVar21 + 1;
          FUN_005e1b6c(param_1,local_88,iVar6);
          iVar6 = *piVar21;
        }
      }
      puVar2 = PTR_DAT_0071c740;
      if (puVar5 == (uint *)0x0) {
        puVar15 = (uint *)0x0;
      }
      else {
        puVar15 = puVar5;
        if (puVar5[1] != uVar10) goto LAB_005e2ad4;
      }
      puVar14 = (undefined4 *)PTR_PTR_0071c74c;
      if (((param_1[4] & 0x20000000) == 0) &&
         (puVar14 = (undefined4 *)PTR_PTR_0071c754, (param_1[4] & 0x1fe00000) == 0)) {
        puVar14 = (undefined4 *)PTR_PTR_0071c750;
      }
      if (iVar4 == 0) {
        FUN_005e130c(param_1,puVar14,puVar15);
      }
      else {
        uVar18 = puVar15[1];
        uVar17 = 0;
        uVar8 = 0;
        if (uVar18 != 0) {
          lVar3 = 0;
          uVar17 = 1;
          *(undefined **)(iVar4 + 8) = PTR_DAT_0071c740 + 0x28;
          if (uVar18 != 1) {
            do {
              uVar19 = ZEXT48(puVar5) + lVar3 + 8;
              puVar20 = (undefined4 *)uVar19;
              if (puVar20 != (undefined4 *)(puVar2 + 0x28)) {
                do {
                  puVar20 = (undefined4 *)uVar19;
                  iVar6 = (*(code *)*puVar14)(param_1,puVar5[uVar17 + 2],*puVar20);
                  if (-1 < iVar6) break;
                  iVar6 = iVar4 + ((int)puVar20 - (int)(puVar5 + 2) & 0xfffffffcU);
                  puVar20 = *(undefined4 **)(iVar6 + 8);
                  uVar19 = ZEXT48(puVar20);
                  *(undefined4 *)(iVar6 + 8) = 0;
                } while (puVar20 != (undefined4 *)(puVar2 + 0x28));
              }
              lVar3 = ((ulonglong)uVar17 & 0x3fffffff) << 2;
              uVar17 = uVar17 + 1;
              *(undefined4 **)((int)lVar3 + iVar4 + 8) = puVar20;
            } while (uVar18 != uVar17);
          }
          uVar19 = (ulonglong)uVar18;
          uVar13 = 0;
          uVar12 = 0;
          iVar6 = 0;
          do {
            while( true ) {
              uVar8 = (undefined4)uVar12;
              uVar17 = (uint)uVar13;
              if (*(int *)(iVar4 + iVar6 + 8) == 0) break;
              uVar1 = uVar13 & 0xffffffff;
              uVar13 = uVar13 + 1;
              uVar17 = (uint)uVar13;
              *(undefined4 *)((int)puVar15 + (int)(uVar1 << 2) + 8) =
                   *(undefined4 *)((int)puVar5 + iVar6 + 8);
              uVar19 = uVar19 - 1;
              iVar6 = iVar6 + 4;
              if (uVar19 == 0) goto LAB_005e2754;
            }
            uVar1 = uVar12 & 0xffffffff;
            uVar12 = uVar12 + 1;
            uVar8 = (undefined4)uVar12;
            *(undefined4 *)(iVar4 + (int)(uVar1 << 2) + 8) =
                 *(undefined4 *)((int)puVar5 + iVar6 + 8);
            uVar19 = uVar19 - 1;
            iVar6 = iVar6 + 4;
          } while (uVar19 != 0);
        }
LAB_005e2754:
        puVar15[1] = uVar17;
        *(undefined4 *)(iVar4 + 4) = uVar8;
        if (puVar5[1] + *(int *)(iVar4 + 4) != uVar10) {
LAB_005e2ad4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_005e130c(param_1,puVar14);
        if (*(int *)(iVar4 + 4) != 0) {
          uVar18 = puVar5[1];
          iVar6 = *(int *)(iVar4 + 4);
          do {
            iVar16 = iVar6 + -1;
            uVar10 = *(uint *)(iVar4 + iVar16 * 4 + 8);
            iVar6 = uVar18 + iVar6;
            if (uVar18 != 0) {
              do {
                uVar17 = uVar18 - 1;
                iVar7 = (*(code *)*puVar14)(param_1,puVar5[uVar18 + 1],uVar10);
                if (iVar7 < 1) goto LAB_005e2834;
                puVar5[iVar6 + 1] = puVar5[uVar18 + 1];
                uVar18 = uVar17;
                iVar6 = iVar6 + -1;
              } while (uVar17 != 0);
              uVar18 = 0;
            }
LAB_005e2834:
            puVar5[uVar18 + iVar16 + 2] = uVar10;
            iVar6 = iVar16;
          } while (iVar16 != 0);
          puVar5[1] = puVar5[1] + *(int *)(iVar4 + 4);
        }
        FUN_005d580c(iVar4);
      }
      *puVar5 = param_1[3];
      param_1[3] = (uint)puVar5;
      param_1[4] = param_1[4] | 0x80000000;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
  uVar18 = param_1[4];
  if (-1 < (int)uVar18) {
    if ((uVar18 & 0x40000000) == 0) {
      iVar4 = FUN_005e1984(param_1,param_1[3],param_2);
      return iVar4;
    }
    piVar21 = (int *)param_1[3];
    iVar4 = *piVar21;
    while( true ) {
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_005e1984(param_1,iVar4,param_2);
      if (iVar4 != 0) break;
      piVar21 = piVar21 + 1;
      iVar4 = *piVar21;
    }
    return iVar4;
  }
LAB_005e2440:
  if ((uVar18 & 0x20000000) == 0) {
    if ((uVar18 & 0x1fe00000) == 0) {
      uVar18 = *(uint *)(param_1[3] + 4);
      if (uVar18 != 0) {
        uVar12 = 0;
        uVar19 = (ulonglong)uVar18;
        do {
          while( true ) {
            uVar13 = (uVar19 + uVar12 << 0x20) >> 0x21;
            iVar4 = *(int *)(param_1[3] + (int)(uVar13 << 2) + 8);
            if (param_2 < *(uint *)(iVar4 + 8)) break;
            if (param_2 < *(uint *)(iVar4 + 8) + *(int *)(iVar4 + 0xc)) {
              return iVar4;
            }
            uVar12 = uVar13 + 1;
            if (uVar19 <= uVar12) {
              return 0;
            }
          }
          uVar19 = uVar13;
        } while (uVar12 < uVar13);
      }
    }
    else {
      uVar10 = param_1[3];
      uVar22 = uVar18 >> 0x15 & 0xff;
      uVar8 = FUN_005e147c(uVar22,param_1);
      uVar17 = *(uint *)(uVar10 + 4);
      if (uVar17 != 0) {
        uVar12 = 0;
        uVar19 = (ulonglong)uVar17;
        do {
          uVar13 = (uVar19 + uVar12 << 0x20) >> 0x21;
          iVar4 = *(int *)(uVar10 + (int)(uVar13 << 2) + 8);
          uVar9 = FUN_005e1508(uVar22,uVar8,iVar4 + 8,&local_90);
          FUN_005e1508(uVar18 >> 0x15 & 0xf,0,uVar9,&local_8c);
          if (local_90 <= param_2) {
            if (param_2 < local_90 + local_8c) {
              return iVar4;
            }
            uVar12 = uVar13 + 1;
            uVar13 = uVar19;
          }
          uVar19 = uVar13;
        } while (uVar12 < uVar13);
      }
    }
  }
  else {
    uVar18 = param_1[3];
    uVar10 = *(uint *)(uVar18 + 4);
    if (uVar10 != 0) {
      uVar12 = 0;
      uVar19 = (ulonglong)uVar10;
      do {
        uVar13 = (uVar12 + uVar19 << 0x20) >> 0x21;
        iVar4 = *(int *)(uVar18 + (int)(uVar13 << 2) + 8);
        bVar11 = FUN_005e17c4((iVar4 + 4) - *(int *)(iVar4 + 4));
        uVar8 = FUN_005e147c(bVar11,param_1);
        uVar8 = FUN_005e1508(bVar11,uVar8,iVar4 + 8,&local_8c);
        FUN_005e1508(bVar11 & 0xf,0,uVar8,&local_90);
        if (local_8c <= param_2) {
          if (param_2 < local_8c + local_90) {
            return iVar4;
          }
          uVar12 = uVar13 + 1;
          uVar13 = uVar19;
        }
        uVar19 = uVar13;
      } while (uVar12 < uVar13);
    }
  }
  return 0;
}


// 0x05e2adc (0x250 bytes)
int FUN_005e2adc(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint local_40 [4];
  
  FUN_005e1424();
  puVar4 = PTR_DAT_0071c740;
  FUN_005e2e54(PTR_DAT_0071c740 + 8);
  puVar1 = *(uint **)(puVar4 + 0x24);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    while (param_1 < uVar2) {
      puVar1 = (uint *)puVar1[5];
      if (puVar1 == (uint *)0x0) goto LAB_005e2b58;
      uVar2 = *puVar1;
    }
    iVar7 = FUN_005e2318(puVar1,param_1);
    if (iVar7 != 0) {
      FUN_005e2e1c(puVar4 + 8);
      *param_2 = puVar1[1];
      param_2[1] = puVar1[2];
      uVar2 = puVar1[4];
      goto joined_r0x005e2c0c;
    }
  }
LAB_005e2b58:
  do {
    puVar1 = *(uint **)(puVar4 + 0x20);
    if (puVar1 == (uint *)0x0) {
      FUN_005e2e1c(puVar4 + 8);
      return 0;
    }
    *(uint *)(puVar4 + 0x20) = puVar1[5];
    iVar7 = FUN_005e2318(puVar1,param_1);
    puVar3 = *(uint **)(puVar4 + 0x24);
    if ((puVar3 != (uint *)0x0) && (*puVar1 <= *puVar3)) {
      do {
        puVar5 = puVar3 + 5;
        puVar3 = (uint *)*puVar5;
        if (puVar3 == (uint *)0x0) break;
      } while (*puVar1 <= *puVar3);
      puVar1[5] = (uint)puVar3;
      *puVar5 = (uint)puVar1;
      if (iVar7 != 0) break;
      goto LAB_005e2b58;
    }
    puVar1[5] = (uint)puVar3;
    *(uint **)(puVar4 + 0x24) = puVar1;
  } while (iVar7 == 0);
  FUN_005e2e1c(puVar4 + 8);
  *param_2 = puVar1[1];
  param_2[1] = puVar1[2];
  uVar2 = puVar1[4];
joined_r0x005e2c0c:
  uVar8 = uVar2 >> 0x15 & 0xff;
  if ((uVar2 & 0x20000000) != 0) {
    uVar8 = FUN_005e17c4((iVar7 + 4) - *(int *)(iVar7 + 4));
  }
  uVar6 = FUN_005e147c(uVar8 & 0xff,puVar1);
  FUN_005e1508(uVar8 & 0xff,uVar6,iVar7 + 8,local_40);
  param_2[2] = local_40[0];
  return iVar7;
}


// 0x05e2d2c (0xf0 bytes)
undefined4 FUN_005e2d2c(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar2;
  undefined4 uVar1;
  uint local_50;
  uint local_4c [5];
  
  uVar2 = FUN_005e17c4((param_2 + 4) - *(int *)(param_2 + 4));
  uVar1 = FUN_005e147c(uVar2,param_1);
  FUN_005e1508(uVar2,uVar1,param_2 + 8,&local_50);
  uVar2 = FUN_005e17c4((param_3 + 4) - *(int *)(param_3 + 4));
  uVar1 = FUN_005e147c(uVar2,param_1);
  FUN_005e1508(uVar2,uVar1,param_3 + 8,local_4c);
  uVar1 = 1;
  if ((local_50 <= local_4c[0]) && (uVar1 = 0xffffffff, local_4c[0] <= local_50)) {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05e2e1c (0x38 bytes)
uint FUN_005e2e1c(void)

{
  uint uVar1;
  
  uVar1 = sys_lwmutex_unlock();
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}


// 0x05e2e54 (0x3c bytes)
uint FUN_005e2e54(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = sys_lwmutex_lock(param_1,0);
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}


// 0x05e2e90 (0x38 bytes)
uint FUN_005e2e90(void)

{
  uint uVar1;
  
  uVar1 = sys_lwmutex_destroy();
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}


// 0x05e2ec8 (0x34 bytes)
void FUN_005e2ec8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_create(param_1,PTR_DAT_0071c758);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e2f00 (0x6c bytes)
undefined8 * FUN_005e2f00(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0071c75c;
  iVar3 = sys_lwmutex_create(PTR_DAT_0071c75c,PTR_DAT_0071c758);
  if (iVar3 == 0) {
    uVar4 = *(undefined8 *)(puVar1 + 8);
    *param_1 = *(undefined8 *)puVar1;
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    param_1[1] = uVar4;
    param_1[2] = uVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e2f70 (0xb0 bytes)
undefined4 FUN_005e2f70(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071c75c;
  if (3 < param_1) {
    return 1;
  }
  puVar2 = PTR_DAT_0071c75c + 0x18;
  iVar3 = sys_lwmutex_lock(puVar2,0);
  if (iVar3 == 0) {
    puVar1[param_1 * 8 + 0x30] = 0;
    if ((int)param_1 < *(int *)(puVar1 + 0x50)) {
      *(uint *)(puVar1 + 0x50) = param_1;
    }
    iVar3 = sys_lwmutex_unlock(puVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e3024 (0x38 bytes)
void FUN_005e3024(void)

{
  int iVar1;
  
  iVar1 = sys_lwmutex_destroy(ZEXT48(PTR_DAT_0071c75c) + 0x58);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e3060 (0x44 bytes)
void FUN_005e3060(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071c758;
  puVar2 = PTR_DAT_0071c75c + 0x58;
  *(undefined4 *)(PTR_DAT_0071c75c + 0x70) = 2;
  iVar3 = sys_lwmutex_create(puVar2,puVar1);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e30a8 (0x124 bytes)
uint FUN_005e30a8(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0071c75c;
  if (*param_1 == 0) {
    if (*(int *)(PTR_DAT_0071c75c + 0x70) == 0) {
      FUN_005e3060();
      iVar2 = sys_lwmutex_lock(puVar1 + 0x58,0);
    }
    else {
      iVar2 = sys_lwmutex_lock(PTR_DAT_0071c75c + 0x58,0);
    }
    if (iVar2 == 0) {
      if (*param_1 == 0) {
        (*(code *)*param_2)();
        *param_1 = 2;
      }
      uVar3 = sys_lwmutex_unlock(puVar1 + 0x58);
      return (((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) - 1 >> 0x1f ^ 1;
    }
  }
  return 1;
}


// 0x05e31cc (0x144 bytes)
undefined4 FUN_005e31cc(uint *param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  puVar2 = PTR_DAT_0071c75c;
  FUN_005e30a8(PTR_DAT_0071c75c + 0x74,PTR_PTR_0071c760);
  iVar3 = sys_lwmutex_lock(puVar2 + 0x18,0);
  if (iVar3 == 0) {
    uVar5 = *(uint *)(puVar2 + 0x50);
    uVar4 = (ulonglong)uVar5;
    if ((int)uVar5 < 4) {
      iVar3 = uVar5 * 8;
      if (puVar2[iVar3 + 0x30] != '\0') {
        uVar8 = 4 - uVar4 & 0xffffffff;
        pcVar6 = puVar2 + iVar3 + 0x38;
        do {
          uVar4 = uVar4 + 1;
          uVar8 = uVar8 - 1;
          uVar5 = (uint)uVar4;
          if (uVar8 == 0) {
            *(uint *)(puVar2 + 0x50) = uVar5;
            goto LAB_005e3280;
          }
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 8;
        } while (cVar1 != '\0');
        iVar3 = (int)((uVar4 & 0x1fffffff) << 3);
        *(uint *)(puVar2 + 0x50) = uVar5;
      }
      *param_1 = uVar5;
      *(uint *)(puVar2 + 0x50) = uVar5 + 1;
      puVar2[iVar3 + 0x30] = 1;
      uVar7 = 0;
      *(undefined4 *)(puVar2 + *param_1 * 8 + 0x34) = param_2;
      iVar3 = sys_lwmutex_unlock(puVar2 + 0x18);
    }
    else {
LAB_005e3280:
      uVar7 = 1;
      iVar3 = sys_lwmutex_unlock(puVar2 + 0x18);
    }
    if (iVar3 == 0) {
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e3314 (0xf0 bytes)
int FUN_005e3314(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iStack_64;
  longlong local_20 [2];
  
  sys_ppu_thread_get_id(local_20);
  if ((3 < param_1) ||
     (iVar4 = *(int *)(iStack_64 + -0x5bcc), *(char *)(param_1 * 8 + iVar4 + 0x30) == '\0')) {
    return 0;
  }
  iVar3 = sys_lwmutex_lock(iVar4 + 0x18,0);
  if (iVar3 == 0) {
    piVar1 = *(int **)(iVar4 + 0x78);
    if (piVar1 == (int *)0x0) {
LAB_005e33d4:
      iVar3 = 0;
    }
    else {
      lVar2 = *(longlong *)(piVar1 + 2);
      while (lVar2 != local_20[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005e33d4;
        lVar2 = *(longlong *)(piVar1 + 2);
      }
      iVar3 = piVar1[param_1 + 4];
    }
    iVar4 = sys_lwmutex_unlock(iVar4 + 0x18);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e3408 (0x14c bytes)
undefined4 FUN_005e3408(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iStack_74;
  longlong local_30 [3];
  
  sys_ppu_thread_get_id(local_30);
  if ((3 < param_1) ||
     (iVar6 = *(int *)(iStack_74 + -0x5bcc), *(char *)(param_1 * 8 + iVar6 + 0x30) == '\0')) {
    return 1;
  }
  iVar4 = sys_lwmutex_lock(iVar6 + 0x18,0);
  if (iVar4 == 0) {
    piVar1 = *(int **)(iVar6 + 0x78);
    if (piVar1 == (int *)0x0) {
LAB_005e34d4:
      puVar5 = (undefined4 *)FUN_005d5838(0x20);
      if (puVar5 == (undefined4 *)0x0) goto LAB_005e353c;
      uVar2 = *(undefined4 *)(iVar6 + 0x78);
      puVar5[7] = 0;
      *puVar5 = uVar2;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(longlong *)(puVar5 + 2) = local_30[0];
      *(undefined4 **)(iVar6 + 0x78) = puVar5;
      puVar5[param_1 + 4] = param_2;
    }
    else {
      lVar3 = *(longlong *)(piVar1 + 2);
      while (lVar3 != local_30[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005e34d4;
        lVar3 = *(longlong *)(piVar1 + 2);
      }
      piVar1[param_1 + 4] = param_2;
    }
    iVar6 = sys_lwmutex_unlock(iVar6 + 0x18);
    if (iVar6 == 0) {
      return 0;
    }
  }
LAB_005e353c:
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e3558 (0x4c bytes)
void FUN_005e3558(void)

{
  int iVar1;
  undefined4 uStack_44;
  
  iVar1 = sys_lwmutex_create(ZEXT48(PTR_DAT_0071c75c) + 0x18,ZEXT48(PTR_DAT_0071c758) + 0x10);
  if (iVar1 == 0) {
    FUN_005c4d80(*(undefined4 *)(uStack_44 + -0x5bc4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05e35a8 (0x104 bytes)
void FUN_005e35a8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = PTR_DAT_0071c75c;
  iVar4 = sys_lwmutex_lock(PTR_DAT_0071c75c + 0x18,0);
  if (iVar4 == 0) {
    puVar2 = *(undefined4 **)(puVar3 + 0x78);
    while (puVar2 != (undefined4 *)0x0) {
      piVar5 = puVar2 + 4;
      pcVar6 = puVar3 + 0x30;
      do {
        pcVar7 = pcVar6 + 8;
        if (((*pcVar6 != '\0') && (*(undefined4 **)(pcVar6 + 4) != (undefined4 *)0x0)) &&
           (*piVar5 != 0)) {
          (*(code *)**(undefined4 **)(pcVar6 + 4))(*piVar5);
        }
        piVar5 = piVar5 + 1;
        pcVar6 = pcVar7;
      } while (pcVar7 != puVar3 + 0x50);
      puVar1 = (undefined4 *)*puVar2;
      FUN_005d580c(puVar2);
      puVar2 = puVar1;
    }
    *(undefined4 *)(puVar3 + 0x78) = 0;
    sys_lwmutex_unlock(puVar3 + 0x18);
  }
  return;
}


// 0x05e36ac (0x1d0 bytes)
void FUN_005e36ac(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int iStack_a4;
  longlong local_60 [3];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  sys_ppu_thread_get_id(local_60);
  iVar3 = *(int *)(iStack_a4 + -0x5bcc);
  iVar7 = sys_lwmutex_lock(iVar3 + 0x18,0);
  if (iVar7 == 0) {
    piVar12 = *(int **)(iVar3 + 0x78);
    bVar1 = piVar12 == (int *)0x0;
    if (bVar1) {
LAB_005e3758:
      piVar8 = (int *)0x0;
    }
    else if (*(longlong *)(piVar12 + 2) == local_60[0]) {
      piVar8 = piVar12 + 4;
      *(int *)(iVar3 + 0x78) = *piVar12;
    }
    else {
      do {
        piVar6 = piVar12;
        piVar12 = (int *)*piVar6;
        bVar1 = piVar12 == (int *)0x0;
        if (bVar1) goto LAB_005e3758;
      } while (*(longlong *)(piVar12 + 2) != local_60[0]);
      piVar8 = piVar12 + 4;
      *piVar6 = *piVar12;
    }
    iVar11 = 0;
    iVar7 = 0;
    iVar9 = 0;
    pcVar10 = (char *)(iVar3 + 0x30);
    do {
      if ((*pcVar10 != '\0') && (*(int *)(pcVar10 + 4) != 0)) {
        iVar4 = *(int *)(iVar9 + (int)piVar8);
        if (iVar4 != 0) {
          iVar7 = iVar7 + 1;
          if (iVar11 == param_1) {
            puVar5 = *(undefined4 **)(iVar11 * 8 + iVar3 + 0x34);
            *(int *)(iVar9 + (int)piVar8) = 0;
            (*(code *)*puVar5)(iVar4);
          }
        }
      }
      bVar2 = iVar11 != 3;
      iVar9 = iVar9 + 4;
      iVar11 = iVar11 + 1;
      pcVar10 = pcVar10 + 8;
    } while (bVar2);
    if ((!bVar1) && (iVar7 < 2)) {
      FUN_005d580c(piVar12);
    }
    sys_lwmutex_unlock(iVar3 + 0x18);
  }
  return;
}


// 0x05e387c (0x34 bytes)
void FUN_005e387c(int param_1)

{
  if (param_1 != 0) {
    FUN_005d580c(param_1);
  }
  return;
}


// 0x05e38b0 (0xf4 bytes)
int FUN_005e38b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = PTR_PTR_0071c774;
  puVar2 = PTR_DAT_0071c770;
  puVar1 = PTR_DAT_0071c76c;
  do {
    iVar5 = FUN_005d5838(param_1);
    while( true ) {
      puVar4 = PTR_PTR_0071c778;
      if (iVar5 != 0) {
        return iVar5;
      }
      if (*(undefined4 **)puVar1 == (undefined4 *)0x0) break;
      (*(code *)**(undefined4 **)puVar1)();
      iVar5 = FUN_005d5838(param_1);
    }
    if (*puVar2 == '\0') {
      *(undefined **)(puVar2 + 8) = puVar3;
      *puVar2 = 1;
      FUN_005c4d80(puVar4);
    }
    FUN_005e3b94(puVar2 + 8);
  } while( true );
}


// 0x05e39a4 (0x38 bytes)
void FUN_005e39a4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c770 + 8;
  *(undefined **)(PTR_DAT_0071c770 + 8) = PTR_PTR_0071c774;
  FUN_005e3cd4(puVar1);
  return;
}


// 0x05e39dc (0x108 bytes)
int FUN_005e39dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = PTR_PTR_0071c788;
  puVar2 = PTR_DAT_0071c784;
  puVar1 = PTR_DAT_0071c780;
  do {
    iVar5 = FUN_005d5764(param_2,param_1);
    while( true ) {
      puVar4 = PTR_PTR_0071c78c;
      if (iVar5 != 0) {
        return iVar5;
      }
      if (*(undefined4 **)puVar1 == (undefined4 *)0x0) break;
      (*(code *)**(undefined4 **)puVar1)();
      iVar5 = FUN_005d5764(param_2,param_1);
    }
    if (*puVar2 == '\0') {
      *(undefined **)(puVar2 + 8) = puVar3;
      *puVar2 = 1;
      FUN_005c4d80(puVar4);
    }
    FUN_005e3b94(puVar2 + 8);
  } while( true );
}


// 0x05e3ae4 (0x38 bytes)
void FUN_005e3ae4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c784 + 8;
  *(undefined **)(PTR_DAT_0071c784 + 8) = PTR_PTR_0071c788;
  FUN_005e3cd4(puVar1);
  return;
}


// 0x05e3b1c (0x74 bytes)
// strings: 0067fe00: 'unknown'

void FUN_005e3b1c(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  FUN_005c50cc(0);
  puVar1 = PTR_DAT_0071c790;
  FUN_005d5a08(param_1,PTR_DAT_0071c790);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_s_unknown_0071c794;
  }
  FUN_005d5a08(param_2,puVar1);
  FUN_005d5a08(PTR_DAT_0071c798,puVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


