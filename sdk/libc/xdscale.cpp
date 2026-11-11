// sdk/libc/xdscale.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d5d10-0x5d5f5c
#include "sdk/libc/xdscale.h"
#include "sdk/libc/xdnorm.h"

// SDK libc.a(xdscale.o): _Dscale  [fuzzy 1.000 match]
// 0x05d5d10 (0x24c bytes)
// strings: 005d5df8: '}#KxH' (raw)

undefined4 FUN_005d5d10(double *param_1,int param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar9;
  uint uVar8;
  undefined4 uVar11;
  ulonglong uVar10;
  double dVar12;
  
  uVar1 = *(ushort *)param_1;
  uVar5 = uVar1 >> 4 & 0x7ff;
  if (uVar5 == 0x7ff) {
    if (((((uVar1 & 0xf) != 0) || (*(ushort *)((int)param_1 + 2) != 0)) ||
        (*(ushort *)((int)param_1 + 4) != 0)) || (uVar11 = 1, *(ushort *)((int)param_1 + 6) != 0)) {
      return 2;
    }
  }
  else {
    if ((uVar1 >> 4 & 0x7ff) == 0) {
      sVar4 = FUN_005dad7c(param_1);
      uVar5 = (uint)sVar4;
      if (0 < sVar4) {
        return 0;
      }
      uVar1 = *(ushort *)param_1;
    }
    uVar7 = (ulonglong)uVar1;
    if ((param_2 < 0x7ff) && (param_2 = param_2 + uVar5, param_2 < 0x7ff)) {
      if (param_2 < 1) {
        param_2 = param_2 + -1;
        uVar7 = uVar7 & 0xf | 0x10;
        iVar3 = (int)uVar7;
        *(ushort *)param_1 = (ushort)uVar7;
        if (param_2 < -0x34) {
          *(ushort *)param_1 = uVar1 & 0x8000;
          *(ushort *)((int)param_1 + 6) = 0;
          *(ushort *)((int)param_1 + 2) = 0;
          *(ushort *)((int)param_1 + 4) = 0;
          return 0;
        }
        if ((short)param_2 < -0xf) {
          uVar2 = (ulonglong)*(ushort *)((int)param_1 + 2);
          uVar6 = (ulonglong)*(ushort *)((int)param_1 + 4);
          do {
            uVar10 = uVar6;
            uVar6 = uVar2;
            param_2 = param_2 + 0x10;
            iVar3 = 0;
            *(ushort *)((int)param_1 + 2) = (ushort)uVar7;
            *(ushort *)param_1 = 0;
            uVar2 = uVar7;
            uVar7 = 0;
          } while ((short)param_2 < -0xf);
          *(ushort *)((int)param_1 + 4) = (ushort)uVar6;
          *(ushort *)((int)param_1 + 6) = (ushort)uVar10;
        }
        uVar9 = (ushort)iVar3;
        sVar4 = -(short)param_2;
        if ((int)sVar4 != 0) {
          uVar8 = 0x10 - (int)sVar4;
          uVar5 = (uint)sVar4;
          uVar9 = (ushort)(iVar3 >> (uVar5 & 0x3f));
          *(ushort *)((int)param_1 + 6) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 6) >> (uVar5 & 0x3f)) |
               *(ushort *)((int)param_1 + 4) << (uVar8 & 0x3f);
          *(ushort *)((int)param_1 + 4) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 4) >> ((int)sVar4 & 0x3fU)) |
               *(ushort *)((int)param_1 + 2) << (uVar8 & 0x3f);
          *(ushort *)((int)param_1 + 2) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 2) >> (uVar5 & 0x3f)) |
               (ushort)(iVar3 << (uVar8 & 0x3f));
          *(ushort *)param_1 = uVar9;
        }
        uVar11 = 0xffffffff;
        *(ushort *)param_1 = uVar1 & 0x8000 | uVar9;
      }
      else {
        uVar11 = 0xffffffff;
        *(ushort *)param_1 =
             (ushort)(((uVar7 << 0x20) >> 0x2f) << 0xf) |
             (ushort)(((uVar7 & 0xf) << 0x11) >> 0x10) >> 1 |
             (ushort)(((longlong)(short)param_2 & 0xffffffffU) << 4);
      }
    }
    else {
      if ((short)uVar1 < 0) {
        dVar12 = -*(double *)PTR_DAT_0071c4ec;
      }
      else {
        dVar12 = *(double *)PTR_DAT_0071c4ec;
      }
      uVar11 = 1;
      *param_1 = dVar12;
    }
  }
  return uVar11;
}


