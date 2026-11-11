// game/fUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x7a338-0x7b0f4
#include <stdio.h>
#include "game/fUnk.h"
#include "game/draw.h"
#include "game/pause.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "sdk/fios.h"

// 0x007a338 (0x14 bytes)
void SECTION_HEADER_UNKNOWN(void)

{
  DAT_0071f3d8 = 0x10000;
  return;
}


// 0x007a350 (0xcac bytes)
void InitGsRegPresets_7a350(void)

{
  DAT_0071fbac = 0x10000;
  DAT_0071f430 = FUN_00502ea0(1,0,0,0,0,2);
  DAT_0071f440 = idol_draw::Blend(0,0,0,0,0,0,1,1);
  DAT_0071f450 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  DAT_0071f460 = FUN_00502ea0(0x10,1,0,0,1,2);
  DAT_0071f470 = FUN_00502fec(0x7000,0x7300,0);
  DAT_0071f478 = FUN_00502fec(0x7200,0x8d00,0);
  DAT_0071f480 = FUN_00502fec(0x7200,0x7300,0);
  DAT_0071f488 = FUN_00502fec(0x7400,0x8d00,0);
  DAT_0071f490 = FUN_00502fec(0x7400,0x7300,0);
  DAT_0071f498 = FUN_00502fec(0x7600,0x8d00,0);
  DAT_0071f4a0 = FUN_00502fec(0x7600,0x7300,0);
  DAT_0071f4a8 = FUN_00502fec(0x7800,0x8d00,0);
  DAT_0071f4b0 = FUN_00502fec(0x7800,0x7300,0);
  DAT_0071f4b8 = FUN_00502fec(0x7a00,0x8d00,0);
  DAT_0071f4c0 = FUN_00502fec(0x7a00,0x7300,0);
  DAT_0071f4c8 = FUN_00502fec(0x7c00,0x8d00,0);
  DAT_0071f4d0 = FUN_00502fec(0x7c00,0x7300,0);
  DAT_0071f4d8 = FUN_00502fec(0x7e00,0x8d00,0);
  DAT_0071f4e0 = FUN_00502fec(0x7e00,0x7300,0);
  DAT_0071f4e8 = FUN_00502fec(0x8000,0x8d00,0);
  DAT_0071f4f0 = FUN_00502fec(0x8000,0x7300,0);
  DAT_0071f4f8 = FUN_00502fec(0x8200,0x8d00,0);
  DAT_0071f500 = FUN_00502fec(0x8200,0x7300,0);
  DAT_0071f508 = FUN_00502fec(0x8400,0x8d00,0);
  DAT_0071f510 = FUN_00502fec(0x8400,0x7300,0);
  DAT_0071f518 = FUN_00502fec(0x8600,0x8d00,0);
  DAT_0071f520 = FUN_00502fec(0x8600,0x7300,0);
  DAT_0071f528 = FUN_00502fec(0x8800,0x8d00,0);
  DAT_0071f530 = FUN_00502fec(0x8800,0x7300,0);
  DAT_0071f538 = FUN_00502fec(0x8a00,0x8d00,0);
  DAT_0071f540 = FUN_00502fec(0x8a00,0x7300,0);
  DAT_0071f548 = FUN_00502fec(0x8c00,0x8d00,0);
  DAT_0071f550 = FUN_00502fec(0x8c00,0x7300,0);
  DAT_0071f558 = FUN_00502fec(0x8e00,0x8d00,0);
  DAT_0071f560 = FUN_00502fec(0x8e00,0x7300,0);
  DAT_0071f568 = FUN_00502fec(0x9000,0x8d00,0);
  DAT_0071f570 = FUN_00502ea0(1,0,0,0,0,2);
  DAT_0071f580 = idol_draw::Blend(0,0,0,0,0,0,1,1);
  DAT_0071f590 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  DAT_0071f5a0 = FUN_00502ea0(0x10,1,0,0,1,2);
  DAT_0071f5b0 = FUN_00502fec(0x7000,0x7200,0);
  DAT_0071f5b8 = FUN_00502fec(0x7200,0x8e00,0);
  DAT_0071f5c0 = FUN_00502fec(0x7200,0x7200,0);
  DAT_0071f5c8 = FUN_00502fec(0x7400,0x8e00,0);
  DAT_0071f5d0 = FUN_00502fec(0x7400,0x7200,0);
  DAT_0071f5d8 = FUN_00502fec(0x7600,0x8e00,0);
  DAT_0071f5e0 = FUN_00502fec(0x7600,0x7200,0);
  DAT_0071f5e8 = FUN_00502fec(0x7800,0x8e00,0);
  DAT_0071f5f0 = FUN_00502fec(0x7800,0x7200,0);
  DAT_0071f5f8 = FUN_00502fec(0x7a00,0x8e00,0);
  DAT_0071f600 = FUN_00502fec(0x7a00,0x7200,0);
  DAT_0071f608 = FUN_00502fec(0x7c00,0x8e00,0);
  DAT_0071f610 = FUN_00502fec(0x7c00,0x7200,0);
  DAT_0071f618 = FUN_00502fec(0x7e00,0x8e00,0);
  DAT_0071f620 = FUN_00502fec(0x7e00,0x7200,0);
  DAT_0071f628 = FUN_00502fec(0x8000,0x8e00,0);
  DAT_0071f630 = FUN_00502fec(0x8000,0x7200,0);
  DAT_0071f638 = FUN_00502fec(0x8200,0x8e00,0);
  DAT_0071f640 = FUN_00502fec(0x8200,0x7200,0);
  DAT_0071f648 = FUN_00502fec(0x8400,0x8e00,0);
  DAT_0071f650 = FUN_00502fec(0x8400,0x7200,0);
  DAT_0071f658 = FUN_00502fec(0x8600,0x8e00,0);
  DAT_0071f660 = FUN_00502fec(0x8600,0x7200,0);
  DAT_0071f668 = FUN_00502fec(0x8800,0x8e00,0);
  DAT_0071f670 = FUN_00502fec(0x8800,0x7200,0);
  DAT_0071f678 = FUN_00502fec(0x8a00,0x8e00,0);
  DAT_0071f680 = FUN_00502fec(0x8a00,0x7200,0);
  DAT_0071f688 = FUN_00502fec(0x8c00,0x8e00,0);
  DAT_0071f690 = FUN_00502fec(0x8c00,0x7200,0);
  DAT_0071f698 = FUN_00502fec(0x8e00,0x8e00,0);
  DAT_0071f6a0 = FUN_00502fec(0x8e00,0x7200,0);
  DAT_0071f6a8 = FUN_00502fec(0x9000,0x8e00,0);
  DAT_0071f6b0 = FUN_00502ea0(1,1,0,0,0,10);
  DAT_0071f760 = FUN_00502ea0(0x12,1,0,0,0,1);
  DAT_0071f770 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_0071f780 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_0071f790 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f7a0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f7b0 = FUN_00502e00(1);
  DAT_0071f7c0 = FUN_00502e08(0,0,0,0,0,0,0,0);
  DAT_0071f7d0 = FUN_00502e10(0);
  DAT_0071f7e0 = FUN_00502e50(0);
  DAT_0071f7f0 = FUN_00502e50(0);
  DAT_0071f800 = FUN_00502e18(0);
  DAT_0071f810 = FUN_00502e20(0,0,0,0,0,0,0,0);
  DAT_0071f820 = FUN_00502e28(1);
  DAT_0071f830 = FUN_00502e30(0);
  DAT_0071f840 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  DAT_0071f850 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  DAT_0071f860 = FUN_00502e38(0,0,0x80);
  DAT_0071f870 = FUN_00502e40(1,0,0);
  DAT_0071f890 = FUN_00502ea0(1,1,0,0,0,6);
  DAT_0071f8a0 = VU1_addGSregister(0,0x24,0);
  DAT_0071f8b0 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f8c0 = FUN_00502f08(1,1,0,0,0,0);
  DAT_0071f8d0 = idol_draw::Blend(0,0,0,0,0,0,1,1);
  DAT_0071f8e0 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_0071f900 = FUN_00502ea0(1,1,0,0,0,6);
  DAT_0071f910 = VU1_addGSregister(0,0x24,1);
  DAT_0071f920 = idol_draw::Blend(1,5,0x80,1,0,0,1,1);
  DAT_0071f930 = FUN_00502f08(1,1,0,0,0,0);
  DAT_0071f940 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f950 = idol_draw::PackCmd(0,1,0,1,0x20);
  return;
}


// 0x007affc (0xb8 bytes)
// strings: 0065204c: 'Bink MALLOC!' | 0065205c: 'Global_QuickMovieMalloc:Bink Allocator used %d bytes\n'

uint Global_QuickMovieMalloc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  printf("Bink MALLOC!");
  uVar2 = g_NpcBuffer + DAT_00a1073c;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0) {
    uVar2 = (uVar2 - uVar1) + 0x20;
    print_tty2("Global_QuickMovieMalloc:Bink Allocator used %d bytes\n",0x20 - uVar1);
  }
  DAT_00a1073c = param_1 + (0x20 - uVar1) + DAT_00a1073c;
  return uVar2;
}


// 0x007b0b4 (0x10 bytes)
void ____ClearFlag_a1073c(void)

{
  DAT_00a1073c = 0;
  return;
}


// 0x007b0c4 (0x30 bytes)
void ____FreeTexBase(void)

{
  FUN_005084c0(&TEX_BASE,2);
  return;
}


