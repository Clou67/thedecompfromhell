// sdk/libc/xfdscale.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5e659c-0x5e6774
#include "sdk/libc/xfdscale.h"
#include "sdk/libc/xfdnorm.h"

// SDK libc.a(xfdscale.o): _FDscale  [fuzzy 1.000 match]
// 0x05e659c (0x1d8 bytes)
// strings: 005e6678: '}#KxH' (raw)

undefined4 FUN_005e659c(float *param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar2 = *(ushort *)param_1;
  uVar4 = uVar2 >> 7 & 0xff;
  if (uVar4 == 0xff) {
    if (((uVar2 & 0x7f) != 0) || (uVar8 = 1, *(ushort *)((int)param_1 + 2) != 0)) {
      return 2;
    }
  }
  else {
    if ((uVar2 >> 7 & 0xff) == 0) {
      sVar3 = FUN_005e687c(param_1);
      uVar4 = (uint)sVar3;
      if (0 < sVar3) {
        return 0;
      }
      uVar2 = *(ushort *)param_1;
    }
    uVar7 = (ulonglong)uVar2;
    if ((param_2 < 0xff) && (param_2 = param_2 + uVar4, param_2 < 0xff)) {
      if (param_2 < 1) {
        iVar9 = param_2 + -1;
        uVar7 = uVar7 & 0x7f | 0x80;
        iVar5 = (int)uVar7;
        uVar6 = (ushort)uVar7;
        *(ushort *)param_1 = uVar6;
        if (iVar9 < -0x17) {
          *(ushort *)param_1 = uVar2 & 0x8000;
          *(ushort *)((int)param_1 + 2) = 0;
          return 0;
        }
        if ((short)iVar9 < -0xf) {
          iVar5 = 0;
          iVar9 = param_2 + 0xf;
          *(ushort *)((int)param_1 + 2) = uVar6;
          *(ushort *)param_1 = 0;
        }
        uVar6 = (ushort)iVar5;
        sVar3 = -(short)iVar9;
        if ((int)sVar3 != 0) {
          uVar6 = (ushort)(iVar5 >> ((int)sVar3 & 0x3fU));
          *(ushort *)((int)param_1 + 2) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 2) >> ((int)sVar3 & 0x3fU)) |
               (ushort)(iVar5 << (0x10U - (int)sVar3 & 0x3f));
          *(ushort *)param_1 = uVar6;
        }
        uVar8 = 0xffffffff;
        *(ushort *)param_1 = uVar2 & 0x8000 | uVar6;
      }
      else {
        uVar8 = 0xffffffff;
        *(ushort *)param_1 =
             (ushort)(((uVar7 << 0x20) >> 0x2f) << 0xf) |
             (ushort)(((uVar7 & 0x7f) << 0x11) >> 0x10) >> 1 |
             (ushort)(((longlong)(short)param_2 & 0xffffffffU) << 7);
      }
    }
    else {
      if ((short)uVar2 < 0) {
        fVar1 = -*(float *)PTR_DAT_0071c7cc;
      }
      else {
        fVar1 = *(float *)PTR_DAT_0071c7cc;
      }
      uVar8 = 1;
      *param_1 = fVar1;
    }
  }
  return uVar8;
}


