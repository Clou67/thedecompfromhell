// sdk/libc/xscanf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5c9b38-0x5ca4a0
#include <string.h>
#include "sdk/libc/xscanf.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xdscale.h"
#include "sdk/libc/xdtento.h"
#include "sdk/libc/xfemu.h"
#include "sdk/libc/xfopen.h"
#include "sdk/libc/xstoflt.h"
#include "sdk/libc/xstopfx.h"
#include "sdk/libc/xstoxflt.h"
#include "sdk/libc/xwctob.h"
#include "sdk/xUnk2.h"
#include "sdk/xUnk3.h"

// SDK libc.a(xscanf.o): _Scanf  [fuzzy 1.000 match]
// 0x05c9b38 (0x5c8 bytes)
// strings: 0067e830: 'hjltzL' | 0067e838: 'cCn[' (raw)

int FUN_005c9b38(undefined4 *param_1,undefined4 param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  size_t sVar6;
  ulonglong uVar4;
  char cVar8;
  char *pcVar7;
  ulonglong uVar5;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  wchar_t local_70 [2];
  mbstate_t local_6c;
  undefined4 *local_64;
  undefined4 local_60;
  GPiece<4> auStack_5c;
  byte *local_58;
  int local_54;
  int local_4c;
  undefined1 local_48;
  byte local_47;
  char local_46;
  
  local_6c.__count = 0;
  local_6c.__value.__wch.piece<0,2>() = 0;
  local_6c.__value.__wch.piece<2,2>() = 0;
  local_64 = param_1;
  local_60 = param_2;
  memcpy4(auStack_5c,param_4);
  puVar3 = PTR_PTR_0071c2a4;
  lVar11 = 0;
  local_54 = 0;
  local_58 = param_3;
LAB_005c9bac:
  iVar12 = (int)lVar11;
  local_70[0] = L'\0';
  sVar6 = mbrtowc(local_70,(char *)local_58,0x7fffffff,&local_6c);
  do {
    uVar5 = (ulonglong)(int)sVar6;
    if ((int)sVar6 < 1) {
      uVar5 = -(ulonglong)*local_58 >> 0x3f;
    }
    uVar4 = FUN_005cc0d8(local_70[0]);
    if ((*(ushort *)((int)((uVar4 & 0xffffffff) << 1) + *(int *)puVar3) & 0x144) == 0) {
      uVar4 = ZEXT48(local_58);
      iVar14 = (int)uVar5 + ((int)(((ushort)local_70[0] ^ 0x25) - 1) >> 0x1f);
      if (iVar14 < 1) goto LAB_005c9da8;
      iVar13 = 0;
      do {
        iVar13 = iVar13 + 1;
        local_54 = local_54 + 1;
        cVar8 = (*(code *)*local_64)(local_60,0,1);
        pcVar7 = (char *)uVar4;
        uVar4 = uVar4 + 1;
        if (*pcVar7 != cVar8) {
          if (cVar8 == -1) {
            return iVar12;
          }
          local_54 = local_54 + -1;
          (*(code *)*local_64)(local_60,cVar8,0);
          return iVar12;
        }
      } while (iVar14 != iVar13);
      lVar9 = uVar5 + ZEXT48(local_58);
      local_58 = (byte *)lVar9;
    }
    else {
      do {
        local_54 = local_54 + 1;
        uVar4 = (*(code *)*local_64)(local_60,0,1);
      } while ((*(ushort *)(((uint)((uVar4 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar3) & 0x144)
               != 0);
      if ((int)uVar4 == -1) {
        uVar4 = ZEXT48(local_58);
        local_54 = local_54 + -1;
      }
      else {
        local_54 = local_54 + -1;
        (*(code *)*local_64)(local_60,(int)uVar4,0);
        uVar4 = ZEXT48(local_58);
      }
LAB_005c9da8:
      lVar9 = uVar5 + uVar4;
      local_58 = (byte *)lVar9;
    }
    if (local_70[0] == L'%') break;
    if (local_70[0] == L'\0') {
      return iVar12;
    }
    local_70[0] = L'\0';
    sVar6 = mbrtowc(local_70,(char *)local_58,0x7fffffff,&local_6c);
  } while( true );
  if (*(byte *)lVar9 == 0x2a) {
    lVar9 = lVar9 + 1;
    iVar14 = *(int *)puVar3;
    local_58 = (byte *)lVar9;
    local_48 = 0x2a;
    bVar1 = *local_58;
    uVar2 = *(ushort *)((uint)bVar1 * 2 + iVar14);
  }
  else {
    iVar14 = *(int *)puVar3;
    local_48 = 0;
    bVar1 = *(byte *)lVar9;
    uVar2 = *(ushort *)((uint)bVar1 * 2 + iVar14);
  }
  local_4c = 0;
  if ((uVar2 & 0x20) != 0) {
    do {
      local_4c = local_4c * 10 + (uint)bVar1 + -0x30;
      do {
        lVar9 = lVar9 + 1;
        local_58 = (byte *)lVar9;
        bVar1 = *local_58;
        if ((*(ushort *)((uint)bVar1 * 2 + iVar14) & 0x20) == 0) {
          pcVar7 = strchr(PTR_s_hjltzL_0071c2a8,(int)(char)bVar1);
          if (pcVar7 != (char *)0x0) goto LAB_005c9e8c;
          pcVar7 = (char *)0x0;
          goto LAB_005ca08c;
        }
      } while (local_4c == 0x7fffffff);
    } while( true );
  }
  local_4c = 0;
  pcVar7 = strchr(PTR_s_hjltzL_0071c2a8,(int)(char)bVar1);
  if (pcVar7 == (char *)0x0) {
LAB_005ca08c:
    local_47 = (byte)pcVar7;
    pbVar10 = local_58;
  }
  else {
LAB_005c9e8c:
    pbVar10 = local_58 + 1;
    local_47 = *local_58;
    if (local_47 == 0x68) {
      if (*pbVar10 == 0x68) {
        local_47 = 0x62;
        pbVar10 = local_58 + 2;
      }
    }
    else if ((local_47 == 0x6c) && (*pbVar10 == 0x6c)) {
      local_47 = 0x71;
      pbVar10 = local_58 + 2;
    }
  }
  local_58 = pbVar10;
  pcVar7 = strchr(PTR_DAT_0071c2ac,(int)(char)*local_58);
  if (pcVar7 == (char *)0x0) {
    do {
      local_54 = local_54 + 1;
      uVar5 = (*(code *)*local_64)(local_60,0,1);
    } while ((*(ushort *)(((uint)((uVar5 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar3) & 0x144) !=
             0);
    if ((int)uVar5 == -1) {
      local_54 = local_54 + -1;
    }
    else {
      local_54 = local_54 + -1;
      (*(code *)*local_64)(local_60,(int)uVar5,0);
    }
  }
  iVar14 = FUN_005d6920(&local_64);
  if (iVar14 < 1) {
    if (iVar12 == 0) {
      iVar12 = iVar14;
    }
    return iVar12;
  }
  local_58 = local_58 + 1;
  lVar11 = lVar11 - (((longlong)((int)local_46 >> 0x1f) -
                      ((longlong)((int)local_46 >> 0x1f) ^ (longlong)local_46) << 0x20) >> 0x3f);
  goto LAB_005c9bac;
}


// 0x05ca100 (0x398 bytes)
double FUN_005ca100(undefined4 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined4 uStack00000030;
  double local_e0;
  int local_d8 [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong local_60;
  
  uStack00000030 = param_1;
  uVar3 = FUN_005ca99c(&stack0x00000030);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar2 = (uVar3 & 7) << 0x1c | (uVar3 << 0x20) >> 0x24;
  uVar1 = (uint)(uVar2 << 4) | (uint)uVar2 >> 0x1c;
  if (uVar1 == 1) {
    iVar5 = FUN_005ca4a0(param_1,uStack00000030,param_2,local_d8,2);
    if ((iVar5 != 0) && (local_d8[1] != 0)) {
      local_60 = (longlong)local_d8[1];
      local_98 = 0x401c;
      local_90 = 0xee6b280000000000;
      FUN_005d60b0((double)local_60,&local_c8);
      if (1 < iVar5) {
        piVar10 = local_d8 + 1;
        iVar9 = 1;
        do {
          piVar10 = piVar10 + 1;
          iVar9 = iVar9 + 1;
          FUN_005d615c(&local_a8,CONCAT44(local_c8,uStack_c4),local_c0,CONCAT44(local_98,uStack_94),
                       local_90);
          local_60 = (longlong)*piVar10;
          FUN_005d60b0((double)local_60,&local_b8);
          FUN_005d63b4(local_80,local_a8,local_a0,local_b8,local_b0);
          local_c8 = local_80[0];
          local_c0 = local_78;
        } while (iVar5 != iVar9);
      }
      if (param_3 + local_d8[0] != 0) {
        FUN_005d6450(local_70,CONCAT44(local_c8,uStack_c4),local_c0,param_3 + local_d8[0]);
        local_c8 = local_70[0];
        local_c0 = local_68;
      }
      local_e0 = (double)FUN_005d6668(CONCAT44(local_c8,uStack_c4),local_c0,param_4);
      goto LAB_005ca19c;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar2 = FUN_005caf7c(param_1,uStack00000030,param_2,local_d8,2);
      if ((int)uVar2 == 0) {
        local_e0 = DAT_0071c2b0;
      }
      else {
        uVar11 = uVar2 & 0xffffffff;
        local_60 = (longlong)*(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
        local_e0 = (double)local_60;
        pdVar7 = (double *)PTR_DAT_0071c2b8;
        if ((int)uVar2 + -1 < 0) {
          uVar11 = 1;
        }
        while (uVar11 = uVar11 - 1, pdVar8 = pdVar7, uVar11 != 0) {
          while( true ) {
            uVar2 = uVar2 - 1;
            iVar5 = *(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
            lVar6 = (longlong)iVar5;
            pdVar7 = pdVar8 + 1;
            if (iVar5 == 0) break;
            local_e0 = (double)lVar6 * *pdVar8 + local_e0;
            uVar11 = uVar11 - 1;
            pdVar8 = pdVar8 + 1;
            local_60 = lVar6;
            if (uVar11 == 0) goto LAB_005ca39c;
          }
        }
      }
LAB_005ca39c:
      uVar4 = FUN_005d5d10(&local_e0,local_d8[0]);
      local_e0 = (double)FUN_005d5f5c(local_e0,uVar4,param_3,param_4);
      goto LAB_005ca19c;
    }
    if (uVar1 == 3) {
      local_e0 = *(double *)PTR_DAT_0071c2bc;
      goto LAB_005ca19c;
    }
    if (uVar1 == 4) {
      local_e0 = *(double *)PTR_DAT_0071c2c0;
      goto LAB_005ca19c;
    }
  }
  local_e0 = DAT_0071c2b0;
LAB_005ca19c:
  if ((uVar3 & 8) == 0) {
    return local_e0;
  }
  return -local_e0;
}


// 0x05ca498 (0x8 bytes)
void FUN_005ca498(void)

{
  FUN_005ca100();
  return;
}


