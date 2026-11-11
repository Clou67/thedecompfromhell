// sdk/libc/xputtxt.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5d9d68-0x5da554
#include "sdk/libc/xputtxt.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xfemu.h"
#include "sdk/libc/xgetstr.h"
#include "sdk/libc/xldtento.h"
#include "sdk/libc/xstoflt.h"
#include "sdk/libc/xstopfx.h"
#include "sdk/libc/xstoxflt.h"

// SDK libc.a(xputtxt.o): _Puttxt  [fuzzy 1.000 match]
// 0x05d9d68 (0x430 bytes)
// strings: 00661550: '                                ' | 00661578: '00000000000000000000000000000000'

undefined4 FUN_005d9d68(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = PTR_s__0071c558;
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar4 = (((((*(int *)(param_1 + 0x4c) - iVar3) - *(int *)(param_1 + 0x30)) -
            *(int *)(param_1 + 0x34)) - *(int *)(param_1 + 0x38)) - *(int *)(param_1 + 0x3c)) -
          *(int *)(param_1 + 0x40);
  if (((*(ushort *)(param_1 + 0x50) & 4) == 0) && (uVar5 = uVar4, 0 < (int)uVar4)) {
    do {
      uVar6 = uVar5;
      if (0x20 < uVar5) {
        uVar6 = 0x20;
      }
      uVar5 = uVar5 - uVar6;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x24),puVar1,uVar6);
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
    } while (0 < (int)uVar5);
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  if (0 < iVar3) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),param_2,iVar3);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x2c);
  }
  puVar1 = PTR_s_00000000000000000000000000000000_0071c55c;
  uVar5 = *(uint *)(param_1 + 0x30);
  while (0 < (int)uVar5) {
    uVar6 = uVar5;
    if (0x20 < uVar5) {
      uVar6 = 0x20;
    }
    uVar5 = uVar5 - uVar6;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),puVar1,uVar6);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                       *(int *)(param_1 + 0x34));
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34);
  }
  puVar1 = PTR_s_00000000000000000000000000000000_0071c55c;
  uVar5 = *(uint *)(param_1 + 0x38);
  while (0 < (int)uVar5) {
    uVar6 = uVar5;
    if (0x20 < uVar5) {
      uVar6 = 0x20;
    }
    uVar5 = uVar5 - uVar6;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),puVar1,uVar6);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),
                       *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34),*(int *)(param_1 + 0x3c))
    ;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
  }
  puVar2 = PTR_s_00000000000000000000000000000000_0071c55c;
  uVar5 = *(uint *)(param_1 + 0x40);
  puVar1 = PTR_s__0071c558;
  while (PTR_s__0071c558 = puVar1, 0 < (int)uVar5) {
    uVar6 = uVar5;
    if (0x20 < uVar5) {
      uVar6 = 0x20;
    }
    uVar5 = uVar5 - uVar6;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x24),puVar2,uVar6);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x48) = uVar6 + *(int *)(param_1 + 0x48);
    puVar1 = PTR_s__0071c558;
  }
  if ((*(ushort *)(param_1 + 0x50) & 4) != 0) {
    while (0 < (int)uVar4) {
      uVar5 = uVar4;
      if (0x20 < uVar4) {
        uVar5 = 0x20;
      }
      uVar4 = uVar4 - uVar5;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x24),puVar1,uVar5);
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x48) = uVar5 + *(int *)(param_1 + 0x48);
    }
  }
  return 0;
}


// 0x05da198 (0x14 bytes)
undefined1 FUN_005da198(void)

{
  return *PTR_DAT_0071c560;
}


// 0x05da1ac (0x10 bytes)
int FUN_005da1ac(void)

{
  int in_r13;
  
  return in_r13 + -0x6f0c;
}


// 0x05da1bc (0x398 bytes)
double FUN_005da1bc(undefined4 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

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
      goto LAB_005da258;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar2 = FUN_005caf7c(param_1,uStack00000030,param_2,local_d8,2);
      if ((int)uVar2 == 0) {
        local_e0 = DAT_0071c568;
      }
      else {
        uVar11 = uVar2 & 0xffffffff;
        local_60 = (longlong)*(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
        local_e0 = (double)local_60;
        pdVar7 = (double *)PTR_DAT_0071c570;
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
            if (uVar11 == 0) goto LAB_005da458;
          }
        }
      }
LAB_005da458:
      uVar4 = FUN_005d8b80(&local_e0,local_d8[0]);
      local_e0 = (double)FUN_005dc84c(local_e0,uVar4,param_3,param_4);
      goto LAB_005da258;
    }
    if (uVar1 == 3) {
      local_e0 = *(double *)PTR_DAT_0071c574;
      goto LAB_005da258;
    }
    if (uVar1 == 4) {
      local_e0 = *(double *)PTR_DAT_0071c578;
      goto LAB_005da258;
    }
  }
  local_e0 = DAT_0071c568;
LAB_005da258:
  if ((uVar3 & 8) == 0) {
    return local_e0;
  }
  return -local_e0;
}


