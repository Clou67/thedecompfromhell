// sdk/libm/xfdint.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd378-0x5dd48c
#include "sdk/libm/xfdint.h"

// SDK libm.a(xfdint.o): _FDint  [exact match]
// 0x05dd378 (0x114 bytes)
undefined4 FUN_005dd378(ushort *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  short sVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  uVar3 = (ulonglong)(uVar1 >> 7) & 0xff;
  if ((int)uVar3 == 0xff) {
    if (((uVar1 & 0x7f) != 0) || (uVar5 = 1, param_1[1] != 0)) {
      return 2;
    }
  }
  else if (((uVar1 & 0x7fff) == 0) && (param_1[1] == 0)) {
    uVar5 = 0;
  }
  else {
    uVar3 = (-param_2 - uVar3) + 0x96;
    sVar4 = (short)uVar3;
    if (0 < sVar4) {
      if (0x17 < sVar4) {
        param_1[1] = 0;
        *param_1 = uVar1 & 0x8000;
        return 0xffffffff;
      }
      uVar1 = param_1[*(int *)(PTR_DAT_0071c648 + ((int)sVar4 >> 4) * 4 + 0x20)];
      uVar2 = *(ushort *)(PTR_DAT_0071c648 + ((uint)((uVar3 & 0xffffffff) << 1) & 0x1e)) & uVar1;
      param_1[*(int *)(PTR_DAT_0071c648 + ((int)sVar4 >> 4) * 4 + 0x20)] = uVar2 ^ uVar1;
      if (0 < (int)sVar4 >> 4) {
        uVar2 = uVar2 | param_1[1];
        param_1[1] = 0;
      }
      if (uVar2 != 0) {
        return 0xffffffff;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


