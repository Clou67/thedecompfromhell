// sdk/libm/xfsin.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd914-0x5ddaec
#include <math.h>
#include "sdk/libm/xfsin.h"
#include "sdk/lUnk.h"

// SDK libm.a(xfsin.o): _FSin  [exact match]
// 0x05dd914 (0x1d8 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

double _FSin(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  float fStack00000030;
  
  fStack00000030 = (float)param_1;
  sVar2 = FUN_005dd48c(&stack0x00000030);
  if (sVar2 == 1) {
    FUN_005dd4f8(0x20000000);
    return (double)*(float *)PTR_DAT_0071c6cc;
  }
  if (sVar2 != 2) {
    if (sVar2 != 0) {
      dVar4 = (double)fStack00000030;
      if ((dVar4 < DAT_0071c6d0) || (DAT_0071c6d8 < dVar4)) {
        dVar4 = (double)fmod(dVar4,(double)DAT_0071c6e0);
      }
      fVar1 = (float)(dVar4 * (double)DAT_0071c6e4);
      if (fVar1 <= DAT_0071c710) {
        fVar1 = fVar1 - DAT_0071c6e8;
      }
      else {
        fVar1 = fVar1 + DAT_0071c6e8;
      }
      uVar3 = ((int)fVar1 & 3U) + param_3;
      dVar5 = (double)(longlong)(int)fVar1;
      dVar4 = (double)(float)(dVar5 * (double)DAT_0071c6f0 +
                             (double)(float)(dVar5 * (double)DAT_0071c6ec + dVar4));
      if ((dVar4 <= -(double)*(float *)PTR_DAT_0071c6f4) ||
         ((double)*(float *)PTR_DAT_0071c6f4 <= dVar4)) {
        dVar5 = (double)(float)(dVar4 * dVar4);
        if ((uVar3 & 1) == 0) {
          dVar4 = (double)(float)((double)(float)(dVar4 * dVar5) *
                                  (double)(float)(dVar5 * (double)(float)(dVar5 * (double)
                                                  DAT_0071c704 + (double)DAT_0071c708) -
                                                 (double)DAT_0071c70c) + dVar4);
        }
        else {
          dVar4 = (double)(float)(dVar5 * (double)(float)(dVar5 * (double)(float)(dVar5 * (double)
                                                  DAT_0071c6f8 + (double)DAT_0071c6fc) -
                                                  (double)DAT_0071c700) + (double)DAT_0071c6c8);
        }
      }
      else if ((uVar3 & 1) != 0) {
        dVar4 = (double)DAT_0071c6c8;
      }
      if ((uVar3 & 2) == 0) {
        return dVar4;
      }
      return -dVar4;
    }
    if (param_3 != 0) {
      return (double)DAT_0071c6c8;
    }
  }
  return (double)fStack00000030;
}


