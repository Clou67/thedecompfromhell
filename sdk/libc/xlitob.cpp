// sdk/libc/xlitob.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d9584-0x5d97dc
#include <string.h>
#include "sdk/libc/xlitob.h"

// SDK libc.a(xlitob.o): _Litob  [fuzzy 1.000 match]
// 0x05d9584 (0x258 bytes)
void * FUN_005d9584(ulonglong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  char acStack_31 [24];
  undefined1 local_19;
  
  if (param_2 == 0x58) {
    iVar4 = 0x10;
    uVar8 = 0x10;
    puVar6 = PTR_s_0123456789ABCDEF_0071c550;
LAB_005d977c:
    uVar3 = *param_1;
joined_r0x005d9788:
    if (param_2 == 0x69) {
      uVar8 = (ulonglong)iVar4;
      goto LAB_005d9790;
    }
  }
  else {
    if (param_2 == 0x6f) {
      iVar4 = 8;
      uVar8 = 8;
      puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
      goto LAB_005d977c;
    }
    if (param_2 == 0x78) {
      iVar4 = 0x10;
      uVar8 = 0x10;
      puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
      goto LAB_005d977c;
    }
    uVar3 = *param_1;
    if (param_2 != 100) {
      iVar4 = 10;
      puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
      uVar8 = 10;
      goto joined_r0x005d9788;
    }
    iVar4 = 10;
    puVar6 = PTR_s_0123456789ABCDEF_0071c550 + 0x18;
    uVar8 = 10;
LAB_005d9790:
    if ((longlong)uVar3 < 0) {
      uVar3 = -uVar3;
    }
  }
  if (uVar3 == 0) {
    uVar7 = 0x18;
    uVar10 = 0;
    if (*(int *)((int)param_1 + 0x44) == 0) goto LAB_005d9614;
  }
  uVar7 = 0x17;
  uVar10 = uVar3 / uVar8;
  local_19 = puVar6[(int)uVar3 - (int)uVar10 * (int)uVar8];
LAB_005d9614:
  *param_1 = uVar10;
  if ((0 < (longlong)uVar10) && (uVar7 != 0)) {
    uVar9 = uVar7;
    uVar11 = uVar7;
    do {
      uVar7 = uVar9 - 1;
      uVar8 = (longlong)uVar10 / (longlong)iVar4;
      cVar1 = puVar6[(int)uVar10 - iVar4 * (int)uVar8];
      *param_1 = uVar8;
      acStack_31[uVar9] = cVar1;
      if ((longlong)uVar8 < 1) break;
      uVar11 = uVar11 - 1;
      uVar10 = uVar8;
      uVar9 = uVar7;
    } while (uVar11 != 0);
  }
  uVar9 = uVar7;
  if (((iVar4 == 8) && ((param_1[10] & 0x8000000000000) != 0)) &&
     ((0x17 < uVar7 || (acStack_31[uVar7 + 1] != '0')))) {
    uVar9 = uVar7 - 1;
    acStack_31[uVar7] = '0';
  }
  *(size_t *)((int)param_1 + 0x34) = 0x18 - uVar9;
  pvVar5 = memcpy(*(void **)(param_1 + 5),acStack_31 + uVar9 + 1,0x18 - uVar9);
  iVar4 = *(int *)((int)param_1 + 0x34);
  iVar2 = *(int *)((int)param_1 + 0x44);
  if (iVar4 < iVar2) {
    *(int *)(param_1 + 6) = iVar2 - iVar4;
    *(ushort *)(param_1 + 10) =
         (ushort)((((ulonglong)*(ushort *)(param_1 + 10) << 0x20) >> 0x25) << 5) |
         (ushort)((((ulonglong)*(ushort *)(param_1 + 10) & 0xf) << 0x1b) >> 0x10) >> 0xb;
  }
  else if (((iVar2 < 0) && ((param_1[10] & 0x14000000000000) == 0x10000000000000)) &&
          (iVar4 = ((*(int *)((int)param_1 + 0x4c) - *(int *)((int)param_1 + 0x2c)) -
                   *(int *)(param_1 + 6)) - iVar4, 0 < iVar4)) {
    *(int *)(param_1 + 6) = iVar4;
  }
  return pvVar5;
}


