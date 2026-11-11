#pragma once
// game/update/moby1118.h
#include "types.h"

// ---- types
struct MiscLevelFlags {
    bool Zoomerator;
    bool Raritanium;
    bool Codebot;
    bool Unknown;
    bool PremiumNanotech;
    bool UltraNanotech;
    char field6_0x6;
    byte field7_0x7;
    byte veldinClankCsTrigger;
    byte field9_0x9;
    byte field10_0xa;
    byte field11_0xb;
    byte field12_0xc;
    byte field13_0xd;
    byte field14_0xe;
    byte field15_0xf;
    byte field16_0x10;
    byte field17_0x11;
    byte field18_0x12;
    byte field19_0x13;
    byte field20_0x14;
    byte field21_0x15;
    byte field22_0x16;
    byte field23_0x17;
    byte field24_0x18;
    byte field25_0x19;
    byte field26_0x1a;
    byte field27_0x1b;
    byte field28_0x1c;
    byte field29_0x1d;
    byte field30_0x1e;
    byte field31_0x1f;
    byte field32_0x20;
    byte field33_0x21;
    byte field34_0x22;
    byte field35_0x23;
    byte field36_0x24;
    byte field37_0x25;
    byte field38_0x26;
    byte field39_0x27;
    byte UmbrisRelated1;
    byte UmbrisRelated2;
    byte UmbrisRelated3;
    byte field43_0x2b;
    byte field44_0x2c;
    byte field45_0x2d;
    byte field46_0x2e;
    byte field47_0x2f;
    byte field48_0x30;
    byte field49_0x31;
    byte field50_0x32;
    byte field51_0x33;
    byte field52_0x34;
    byte field53_0x35;
    byte field54_0x36;
    byte field55_0x37;
    byte field56_0x38;
    byte field57_0x39;
    byte field58_0x3a;
    byte field59_0x3b;
    byte field60_0x3c;
    byte field61_0x3d;
    byte field62_0x3e;
    byte field63_0x3f;
    byte field64_0x40;
    byte field65_0x41;
    byte field66_0x42;
    byte field67_0x43;
    byte field68_0x44;
    byte field69_0x45;
    byte field70_0x46;
    byte field71_0x47;
    byte SpaceshipRelated1;
    byte SpaceshipRelated2;
    byte SpaceshipRelated3;
    byte SpaceShipRelated4;
    byte field76_0x4c;
    byte field77_0x4d;
    byte field78_0x4e;
    byte field79_0x4f;
    byte field80_0x50;
    byte field81_0x51;
    byte field82_0x52;
    byte field83_0x53;
    byte field84_0x54;
    byte field85_0x55;
    byte field86_0x56;
    byte field87_0x57;
    byte field88_0x58;
    byte field89_0x59;
    byte field90_0x5a;
    byte field91_0x5b;
    byte field92_0x5c;
    byte field93_0x5d;
    byte field94_0x5e;
    byte field95_0x5f;
    byte field96_0x60;
    byte field97_0x61;
    byte field98_0x62;
    byte field99_0x63;
    byte GemlikRelated1;
    byte GemlikRelated2;
    byte GemlikRelated3;
    byte field103_0x67;
    byte field104_0x68;
    byte field105_0x69;
    byte field106_0x6a;
    byte field107_0x6b;
    byte field108_0x6c;
    byte field109_0x6d;
    byte field110_0x6e;
    byte field111_0x6f;
    byte field112_0x70;
    byte field113_0x71;
    byte field114_0x72;
    byte field115_0x73;
    byte field116_0x74;
    byte field117_0x75;
    byte field118_0x76;
    byte field119_0x77;
    byte field120_0x78;
    byte field121_0x79;
    byte field122_0x7a;
    byte field123_0x7b;
    byte field124_0x7c;
    byte field125_0x7d;
    byte field126_0x7e;
    byte field127_0x7f;
};

// ---- globals
extern undefined4 DAT_001d42cc; /* 0x1d42cc */
extern undefined4 DAT_007644cc; /* 0x7644cc */
extern undefined4 DAT_007644f0; /* 0x7644f0 */
extern undefined4 DAT_007644f4; /* 0x7644f4 */
extern undefined4 DAT_007644f8; /* 0x7644f8 */
extern undefined4 DAT_007644fc; /* 0x7644fc */
extern undefined4 DAT_00764500; /* 0x764500 */
extern undefined4 DAT_00764504; /* 0x764504 */
extern undefined4 DAT_00ef26c0; /* 0xef26c0 */
extern undefined4 DAT_00ef26c4; /* 0xef26c4 */

// ---- functions
void M1118_001d4010(void);
void M1118_001d4048(undefined8 param_1,undefined8 param_2);
MiscLevelFlags * UpdateMoby_1118(MobyInstance *moby);
