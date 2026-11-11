// sdk/libm/xflog.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd718-0x5dd914
#include "sdk/libm/xflog.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xfdunsca.h"

// SDK libm.a(xflog.o): _FLog  [exact match]
// 0x05dd718 (0x1fc bytes)
double FUN_005dd718(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float fStack00000030;
  short local_30 [20];
  
  fStack00000030 = (float)param_1;
  sVar5 = FUN_005e6774(local_30,&stack0x00000030);
  if (sVar5 == 1) {
    if (((uint)fStack00000030 >> 0x10 & 0x8000) == 0) {
      return (double)fStack00000030;
    }
  }
  else {
    if (sVar5 == 2) {
      return (double)fStack00000030;
    }
    if (sVar5 == 0) {
      FUN_005dd4f8(0x4000000);
      return -(double)*(float *)PTR_DAT_0071c680;
    }
  }
  if (((uint)fStack00000030 >> 0x10 & 0x8000) != 0) {
    FUN_005dd4f8(0x20000000);
    return (double)*(float *)PTR_DAT_0071c684;
  }
  if (fStack00000030 < DAT_0071c688) {
    fStack00000030 = fStack00000030 + fStack00000030;
    local_30[0] = local_30[0] + -1;
  }
  fVar4 = fStack00000030 - DAT_0071c68c;
  fVar3 = (float)(longlong)local_30[0];
  fVar1 = fVar4 / (fStack00000030 + DAT_0071c68c);
  fVar2 = fVar1 * fVar1;
  fVar1 = fVar1 * (fVar4 - fVar2 * (fVar2 * (fVar2 * DAT_0071c690 + DAT_0071c694) + DAT_0071c698));
  if (param_3 != 0) {
    if (param_3 < 1) {
      DAT_0071c6c0 = DAT_0071c6c0;
      DAT_0071c6bc = DAT_0071c6bc;
      DAT_0071c6b8 = DAT_0071c6b8;
      DAT_0071c6b4 = DAT_0071c6b4;
      DAT_0071c6b0 = DAT_0071c6b0;
      DAT_0071c6ac = DAT_0071c6ac;
      DAT_0071c6a8 = DAT_0071c6a8;
      DAT_0071c6a4 = DAT_0071c6a4;
      DAT_0071c6a0 = DAT_0071c6a0;
      DAT_0071c69c = DAT_0071c69c;
      DAT_0071c698 = DAT_0071c698;
      DAT_0071c694 = DAT_0071c694;
      DAT_0071c690 = DAT_0071c690;
      DAT_0071c688 = DAT_0071c688;
      PTR_DAT_0071c684 = PTR_DAT_0071c684;
      PTR_DAT_0071c680 = PTR_DAT_0071c680;
      return (double)(fVar3 + fVar4 * DAT_0071c6b8 + fVar4 * DAT_0071c6bc + fVar1 * DAT_0071c6c0);
    }
    return (double)(fVar3 * DAT_0071c6b4 +
                   fVar4 * DAT_0071c6a4 +
                   (fVar4 * DAT_0071c6a8 - (fVar1 * DAT_0071c6ac + fVar3 * DAT_0071c6b0)));
  }
  return (double)(fVar3 * DAT_0071c6a0 + (fVar4 - (fVar3 * DAT_0071c69c + fVar1)));
}


