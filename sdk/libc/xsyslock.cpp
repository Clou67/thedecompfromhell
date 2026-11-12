// sdk/libc/xsyslock.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cbc68-0x5cbdbc
#include "sdk/libc/xsyslock.h"
#include "sdk/libc/xlv2mtx.h"

// SDK libc.a(xsyslock.o): _Initlocks  [fuzzy 1.000 match]
// 0x05cbc68 (0xf8 bytes)
void _Initlocks(void)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar3 = PTR_DAT_0071c3a4;
  puVar6 = PTR_DAT_0071c3a4 + 0xd0;
  puVar7 = PTR_DAT_0071c3a4 + 0x148;
  puVar9 = puVar6;
  do {
    puVar8 = puVar9 + 0x28;
    FUN_005d04b0(puVar9);
    puVar5 = PTR_DAT_0071c3b0;
    puVar4 = PTR_DAT_0071c3ac;
    puVar9 = puVar8;
  } while (puVar7 != puVar8);
  sVar1 = *(short *)(PTR_DAT_0071c3b0 + 4);
  sVar2 = *(short *)(PTR_DAT_0071c3ac + 4);
  *(undefined **)(PTR_DAT_0071c3a8 + 0x44) = puVar6 + *(short *)(PTR_DAT_0071c3a8 + 4) * 0x28;
  *(undefined **)(puVar4 + 0x44) = puVar6 + sVar2 * 0x28;
  *(undefined **)(puVar5 + 0x44) = puVar6 + sVar1 * 0x28;
  *(undefined4 *)(puVar3 + 0x148) = 0x100;
  puVar9 = puVar3 + 8;
  do {
    puVar6 = puVar9 + 0x28;
    FUN_005d04b0(puVar9);
    puVar9 = puVar6;
  } while (puVar3 + 0xd0 != puVar6);
  *(undefined4 *)puVar3 = 5;
  return;
}


// SDK libc.a(xsyslock.o): _Clearlocks  [fuzzy 1.000 match]
// 0x05cbd60 (0x5c bytes)
void _Clearlocks(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0071c3a4;
  puVar2 = PTR_DAT_0071c3a4 + 8;
  puVar1 = PTR_DAT_0071c3a4 + 0xd0;
  *(undefined4 *)PTR_DAT_0071c3a4 = 0;
  *(undefined4 *)(puVar3 + 0x148) = 0;
  do {
    puVar3 = puVar2 + 0x28;
    FUN_005d045c(puVar2);
    puVar2 = puVar3;
  } while (puVar3 != puVar1);
  return;
}


