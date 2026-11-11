// sdk/libc/xdtento.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d5f5c-0x5d600c
#include "sdk/libc/xdtento.h"
#include "sdk/libc/xfemu.h"

// SDK libc.a(xdtento.o): _Dtentox  [fuzzy 1.000 match]
// 0x05d5f5c (0xb0 bytes)
double FUN_005d5f5c(double param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  double dVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  if ((param_3 != 0) && (param_1 != DAT_0071c4f0)) {
    FUN_005d60b0(&local_30);
    FUN_005d6450(local_20,CONCAT44(local_30,uStack_2c),local_28,param_3);
    dVar1 = (double)FUN_005d6668(CONCAT44(local_20[0],uStack_2c),local_18,param_4);
    return dVar1;
  }
  return param_1;
}


