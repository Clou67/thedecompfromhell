// sdk/libm/tanf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd1f4-0x5dd378
#include <math.h>
#include "sdk/libm/tanf.h"
#include "sdk/lUnk.h"

// SDK libm.a(tanf.o): tanf  [exact match]
// 0x05dd1f4 (0x184 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_005dd1f4(double param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  float fStack00000030;
  
  fStack00000030 = (float)param_1;
  sVar3 = FUN_005dd48c(&stack0x00000030);
  if (sVar3 != 1) {
    if ((sVar3 == 2) || (sVar3 == 0)) {
      dVar5 = (double)fStack00000030;
    }
    else {
      dVar5 = (double)fStack00000030;
      if ((dVar5 < DAT_0071c608) || (DAT_0071c610 < dVar5)) {
        dVar5 = (double)fmodf(dVar5,(double)DAT_0071c618);
      }
      fVar2 = (float)(dVar5 * (double)DAT_0071c61c);
      if (fVar2 <= DAT_0071c644) {
        fVar2 = fVar2 - DAT_0071c620;
      }
      else {
        fVar2 = fVar2 + DAT_0071c620;
      }
      uVar4 = (uint)fVar2;
      dVar5 = (double)(float)((double)(longlong)(int)uVar4 * (double)DAT_0071c628 +
                             (double)(float)((double)(longlong)(int)uVar4 * (double)DAT_0071c624 +
                                            dVar5));
      if ((dVar5 <= -(double)*(float *)PTR_DAT_0071c62c) ||
         ((double)*(float *)PTR_DAT_0071c62c <= dVar5)) {
        dVar6 = (double)(float)(dVar5 * dVar5);
        fVar2 = (float)(dVar6 * (double)(float)(dVar6 * (double)DAT_0071c634 - (double)DAT_0071c638)
                       + (double)DAT_0071c63c);
        fVar1 = (float)((double)(float)(dVar5 * dVar6) * (double)DAT_0071c640 + dVar5);
        if ((uVar4 & 1) == 0) {
          dVar5 = (double)(fVar1 / fVar2);
        }
        else {
          dVar5 = (double)(-fVar2 / fVar1);
        }
      }
      else if ((uVar4 & 1) != 0) {
        dVar5 = (double)(float)((double)DAT_0071c630 / dVar5);
      }
    }
    return dVar5;
  }
  FUN_005dd4f8(0x20000000);
  return (double)*(float *)PTR_DAT_0071c600;
}


