// sdk/libm/floorf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dc924-0x5dc9a4
#include "sdk/libm/floorf.h"
#include "sdk/libm/xfdint.h"

// SDK libm.a(floorf.o): floorf  [exact match]
// 0x05dc924 (0x80 bytes)
double FUN_005dc924(double param_1)

{
  float fVar1;
  short sVar2;
  GPiece<48> local_30;
  
  fVar1 = (float)param_1;
  sVar2 = FUN_005dd378(local_30,0);
  if ((sVar2 < 0) && (param_1 < 0.0)) {
    return (double)(fVar1 - DAT_0071c5c8);
  }
  return (double)fVar1;
}


