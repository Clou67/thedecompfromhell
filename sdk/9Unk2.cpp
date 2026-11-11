// sdk/9Unk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x64eda4-0x64ee64
#include "sdk/9Unk2.h"
#include "sdk/sce.h"

// 0x064eda4 (0x20 bytes)
void cellHttpInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064edc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellHttp_func_address_table[0])();
  return;
}


// 0x064edc4 (0x20 bytes)
void cellHttpsInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ede0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellHttp_func_address_table[1])();
  return;
}


// 0x064ede4 (0x20 bytes)
void cellSslCertificateLoader(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSsl_func_address_table[0])();
  return;
}


// 0x064ee04 (0x20 bytes)
void cellSslInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSsl_func_address_table[1])();
  return;
}


// 0x064ee24 (0x20 bytes)
void cellVideoOutGetScreenSize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutilAvconfExt_func_address_table[0])();
  return;
}


// 0x064ee44 (0x20 bytes)
void cellSslEnd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSsl_func_address_table[2])();
  return;
}


