// game/initsky.cpp -- InitSky: the level's sky draw (probably PS3-only)
// STATUS: CLEAN (checked against the asm; local names are mine)
// 2 functions, 0xd93a8-0xd9668
#include "game/initsky.h"
#include "game/boot.h"
#include "game/hero.h"
#include "game/skyfunc.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/tiefunc.h"
#include "sdk/linked.h"

// 0x00d93a8 (0x14 bytes)
void SECTION_HEADER_INITSKY(void)
{
    DAT_00724684 = 0x10000;
}

// 0x00d93c0 (0x28c bytes)
void InitSky(void)
{
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass, (char *)"Sky");
    SetupGifPaging();
    switch (Level) {
    case 0:  SkyLevel_00(); break;
    case 1:  SkyLevel_01(); break;
    case 2:  SkyLevel_02(); break;
    case 3:  SkyLevel_03(); break;
    case 4:  SkyLevel_04(); break;
    case 5:  SkyLevel_05(); break;
    case 6:  SkyLevel_06(); break;
    case 7:  SkyLevel_07(); break;
    case 8:  SkyLevel_08(); break;
    case 9:  SkyLevel_09(); break;
    case 10: SkyLevel_10(); break;
    case 11: SkyLevel_11(); break;
    case 12: SkyLevel_12(); break;
    case 13: SkyLevel_13(); break;
    case 14: SkyLevel_14(); break;
    case 15: SkyLevel_15(); break;
    case 16: SkyLevel_16(); break;
    case 17: SkyLevel_17(); break;
    case 18: SkyLevel_18(); break;
    case 19: SkyLevel_19(); break;
    default: SkyLevelNone(); break;
    }
    DoSkyGifPaging();
    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2));
    SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 0));
    idol_draw::RsxCmd_WritePass(ForwardPass);
}
