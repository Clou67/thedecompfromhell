// sdk/libm/fesetenv.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5ddbd8-0x5ddc68
#include "sdk/libm/fesetenv.h"

// SDK libm.a(fesetenv.o): _Force_raise  [exact match]
// 0x05ddbd8 (0x3c bytes)
double FUN_005ddbd8(uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = 5;
  dVar3 = DAT_0071c718;
  puVar1 = (uint *)PTR_DAT_0071c720;
  do {
    if ((param_1 & *puVar1) != 0) {
      dVar3 = *(double *)(puVar1 + 2) / *(double *)(puVar1 + 4);
    }
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0);
  return dVar3;
}


// SDK libm.a(fesetenv.o): fesetenv  [exact match]
// 0x05ddc14 (0x3c bytes)
undefined8 FUN_005ddc14(void)

{
  return 0;
}


// 0x05ddc50 (0x18 bytes)
undefined8 FUN_005ddc50(uint *param_1)

{
  byte in_fp_fx;
  byte in_fp_fex;
  byte in_fp_vx;
  byte in_fp_ox;
  byte in_fp_ux;
  byte in_fp_zx;
  byte in_fp_xx;
  byte in_fp_vxsnan;
  byte in_fp_vxisi;
  byte in_fp_vxidi;
  byte in_fp_vxzdz;
  byte in_fp_vximz;
  byte in_fp_vxvc;
  byte in_fp_fr;
  byte in_fp_fi;
  byte in_fp_c;
  byte in_fp_cc0;
  byte in_fp_cc1;
  byte in_fp_cc2;
  byte in_fp_cc3;
  byte in_fp_reserve1;
  byte in_fp_vxsoft;
  byte in_fp_vxsqrt;
  byte in_fp_vxcvi;
  byte in_fp_ve;
  byte in_fp_oe;
  byte in_fp_ue;
  byte in_fp_ze;
  byte in_fp_xe;
  byte in_fp_ni;
  byte in_fp_rn0;
  byte in_fp_rn1;
  
  *param_1 = in_fp_rn1 & 1 | (uint)in_fp_fx << 0x1f | (in_fp_fex & 1) << 0x1e |
             (in_fp_vx & 1) << 0x1d | (in_fp_ox & 1) << 0x1c | (in_fp_ux & 1) << 0x1b |
             (in_fp_zx & 1) << 0x1a | (in_fp_xx & 1) << 0x19 | (in_fp_vxsnan & 1) << 0x18 |
             (in_fp_vxisi & 1) << 0x17 | (in_fp_vxidi & 1) << 0x16 | (in_fp_vxzdz & 1) << 0x15 |
             (in_fp_vximz & 1) << 0x14 | (in_fp_vxvc & 1) << 0x13 | (in_fp_fr & 1) << 0x12 |
             (in_fp_fi & 1) << 0x11 | (in_fp_c & 1) << 0x10 | (in_fp_cc0 & 1) << 0xf |
             (in_fp_cc1 & 1) << 0xe | (in_fp_cc2 & 1) << 0xd | (in_fp_cc3 & 1) << 0xc |
             (in_fp_reserve1 & 1) << 0xb | (in_fp_vxsoft & 1) << 10 | (in_fp_vxsqrt & 1) << 9 |
             (in_fp_vxcvi & 1) << 8 | (in_fp_ve & 1) << 7 | (in_fp_oe & 1) << 6 |
             (in_fp_ue & 1) << 5 | (in_fp_ze & 1) << 4 | (in_fp_xe & 1) << 3 | (in_fp_ni & 1) << 2 |
             (in_fp_rn0 & 1) << 1;
  return 0;
}


