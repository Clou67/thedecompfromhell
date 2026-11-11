// sdk/libm/xfexp.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dd5a8-0x5dd718
#include "sdk/libm/xfexp.h"
#include "sdk/libc/xfdscale.h"

// SDK libm.a(xfexp.o): _FExp  [exact match]
// 0x05dd5a8 (0x170 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 FUN_005dd5a8(double param_1,float *param_2,undefined8 param_3,short param_4)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  double dVar4;
  double dVar5;
  short sStack_1e;
  
  fVar1 = *param_2;
  if (DAT_0071c64c <= fVar1) {
    if (param_1 != (double)DAT_0071c67c) {
      if (DAT_0071c650 < fVar1) {
        *param_2 = *(float *)PTR_DAT_0071c654;
        return 1;
      }
      fVar2 = DAT_0071c65c;
      if ((double)DAT_0071c67c <= (double)(fVar1 * DAT_0071c658)) {
        fVar2 = DAT_0071c660;
      }
      sStack_1e = (short)(int)((double)fVar2 + (double)(fVar1 * DAT_0071c658));
      fVar1 = (float)(longlong)(int)sStack_1e * DAT_0071c668 +
              (float)(longlong)(int)sStack_1e * DAT_0071c664 + fVar1;
      if ((fVar1 <= -*(float *)PTR_DAT_0071c66c) || (*(float *)PTR_DAT_0071c66c <= fVar1)) {
        dVar4 = (double)(fVar1 * fVar1 * DAT_0071c670);
        dVar5 = (double)(fVar1 * (fVar1 * fVar1 * DAT_0071c674 + DAT_0071c660));
        *param_2 = (float)(((dVar4 + dVar5 + (double)DAT_0071c678) /
                           ((dVar4 - dVar5) + (double)DAT_0071c678)) * param_1);
      }
      else {
        *param_2 = (float)param_1;
      }
      uVar3 = FUN_005e659c(param_2,(int)sStack_1e + (int)param_4);
      return uVar3;
    }
    if (DAT_0071c64c <= fVar1) goto LAB_005dd6c8;
  }
  param_1 = (double)DAT_0071c67c;
LAB_005dd6c8:
  *param_2 = (float)param_1;
  return 0;
}


