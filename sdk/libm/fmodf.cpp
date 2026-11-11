// sdk/libm/fmodf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dc9a4-0x5dcbd8
#include <math.h>
#include "sdk/libm/fmodf.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xfdscale.h"
#include "sdk/libc/xfdunsca.h"

// SDK libm.a(fmodf.o): fmodf  [exact match]
// 0x05dc9a4 (0x234 bytes)
double fmodf(double param_1,double param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  float fStack00000030;
  float fStack00000038;
  short local_40;
  short local_3e;
  GPiece<12> local_3c;
  
  fStack00000030 = (float)param_1;
  fStack00000038 = (float)param_2;
  sVar2 = FUN_005dd48c(&stack0x00000030);
  sVar3 = FUN_005dd48c(&stack0x00000038);
  if (sVar2 < 0) {
    if (sVar3 < 0) {
      if (fStack00000038 < DAT_0071c5d0) {
        fStack00000038 = -fStack00000038;
      }
      bVar6 = fStack00000030 < DAT_0071c5d0;
      if (bVar6) {
        fStack00000030 = -fStack00000030;
      }
      FUN_005e6774(&local_40,local_3c);
      while ((sVar2 = FUN_005e6774(&local_3e,local_3c), sVar2 != 0 &&
             (sVar2 = local_3e - local_40, -1 < sVar2))) {
        iVar5 = 0;
        sVar3 = sVar2;
        while( true ) {
          fVar1 = fStack00000038;
          iVar4 = sVar2 - iVar5;
          iVar5 = iVar5 + 1;
          FUN_005e659c(local_3c,iVar4);
          dVar7 = (double)fStack00000030;
          if ((double)fVar1 <= dVar7) break;
          sVar3 = sVar3 + -1;
          if (sVar3 == -1) goto LAB_005dcb80;
        }
        fStack00000030 = (float)(dVar7 - (double)fVar1);
        dVar7 = (double)fStack00000030;
        if (sVar3 < 0) goto LAB_005dcb80;
      }
      dVar7 = (double)fStack00000030;
LAB_005dcb80:
      if (!bVar6) {
        return dVar7;
      }
      return -dVar7;
    }
  }
  else if (sVar2 == 2) goto LAB_005dca58;
  if (sVar3 == 2) {
    return (double)fStack00000038;
  }
  if ((sVar2 == 1) || (sVar3 == 0)) {
    FUN_005dd4f8(0x20000000);
    return (double)*(float *)PTR_DAT_0071c5cc;
  }
LAB_005dca58:
  return (double)fStack00000030;
}


