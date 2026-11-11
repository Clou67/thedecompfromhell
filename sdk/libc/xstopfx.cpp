// sdk/libc/xstopfx.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5ca99c-0x5cac2c
#include "sdk/libc/xstopfx.h"

// SDK libc.a(xstopfx.o): _Stopfx  [fuzzy 1.000 match]
// 0x05ca99c (0x290 bytes)
uint FUN_005ca99c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_1;
  while (bVar1 = *pbVar3, (*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c2d0) & 0x144) != 0) {
    pbVar3 = pbVar3 + 1;
  }
  if (bVar1 == 0x2d) {
    pbVar3 = pbVar3 + 1;
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
    if (bVar1 == 0x2b) {
      pbVar3 = pbVar3 + 1;
    }
  }
  bVar1 = *pbVar3;
  if ((bVar1 == 0x6e) || (bVar1 == 0x4e)) {
    pbVar4 = pbVar3 + 1;
    if ((*pbVar4 != 0x61) && (*pbVar4 != 0x41)) goto LAB_005caa78;
    pbVar4 = pbVar3 + 2;
    if ((*pbVar4 != 0x6e) && (*pbVar4 != 0x4e)) goto LAB_005caa78;
    pbVar4 = pbVar3 + 3;
    pbVar3 = pbVar4;
    if (*pbVar4 == 0x28) {
      do {
        do {
          pbVar3 = pbVar3 + 1;
        } while ((*(ushort *)((uint)*pbVar3 * 2 + *(int *)PTR_PTR_0071c2d0) & 0x232) != 0);
      } while (*pbVar3 == 0x5f);
    }
    uVar2 = 4;
    if (*pbVar3 == 0x29) {
      pbVar4 = pbVar3 + 1;
    }
  }
  else {
    if ((bVar1 != 0x69) && (bVar1 != 0x49)) {
      if ((bVar1 == 0x30) && ((pbVar3[1] == 0x78 || (pbVar3[1] == 0x58)))) {
        pbVar3 = pbVar3 + 2;
        uVar2 = uVar2 | 2;
      }
      else {
        uVar2 = uVar2 | 1;
      }
      goto LAB_005caa2c;
    }
    pbVar4 = pbVar3 + 1;
    if ((*pbVar4 == 0x6e) || (*pbVar4 == 0x4e)) {
      pbVar4 = pbVar3 + 2;
      if ((*pbVar4 == 0x66) || (*pbVar4 == 0x46)) {
        pbVar4 = pbVar3 + 3;
        uVar2 = uVar2 | 3;
        if ((((*pbVar4 == 0x69) || (*pbVar4 == 0x49)) &&
            ((pbVar3[4] == 0x6e || (pbVar3[4] == 0x4e)))) &&
           ((((pbVar3[5] == 0x69 || (pbVar3[5] == 0x49)) &&
             ((pbVar3[6] == 0x74 || (pbVar3[6] == 0x54)))) &&
            ((pbVar3[7] == 0x79 || (pbVar3[7] == 0x59)))))) {
          pbVar4 = pbVar3 + 8;
        }
        goto LAB_005caa7c;
      }
    }
LAB_005caa78:
    uVar2 = 0;
  }
LAB_005caa7c:
  pbVar3 = pbVar4;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar3;
    *param_1 = pbVar3;
    return uVar2;
  }
LAB_005caa2c:
  *param_1 = pbVar3;
  return uVar2;
}


