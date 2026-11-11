typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef int    int3;
typedef long long    int5;
typedef long long    int6;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _2legAnim _2legAnim, *P_2legAnim;

struct _2legAnim {
    int anim;
    float stride;
    float frame0;
    float frames;
    int fromIdle;
    int pad[3];
    float heelRange[2];
    float heelDown[2];
    float heelUp[2];
    float footRange[2];
    float footDown[2];
    float footUp[2];
};

typedef struct _2legData _2legData, *P_2legData;

typedef struct vec4 vec4, *Pvec4;

typedef struct legData legData, *PlegData;

typedef struct Vec4 Vec4, *PVec4;

typedef struct Manipulator Manipulator, *PManipulator;

typedef struct quat quat, *Pquat;

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct quat {
    struct Vec4 quat;
};

struct vec4 {
    struct Vec4 m;
};

struct Manipulator {
    char animJoint;
    char state;
    char scaleOn;
    char absolute;
    int jointId;
    struct Manipulator *pChain;
    float interp;
    struct quat q;
    struct vec4 scale;
    struct vec4 trans;
};

struct legData {
    char jiFoot;
    char jiHeel;
    char jiAnkle;
    char jiHip;
    float frAct;
    float frDest;
    float frSpeed;
    struct Manipulator MAnkle;
    struct Manipulator MHip;
    void *_pBHip;
    float twistLow;
    float twistHigh;
    short idle;
    short _2mainIdle;
};

struct _2legData {
    struct vec4 fpos[5];
    short onground;
    short state;
    float yrot;
    float yrSpeed;
    short idle;
    short stand;
    struct _2legAnim walk;
    struct _2legAnim run;
    float speed;
    int counter;
    int moveJoint;
    int pad[1];
    struct legData legs[2];
};

typedef void *__gnuc_va_list;

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union _union_54 _union_54, *P_union_54;

union _union_54 {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union _union_54 __value;
};

typedef struct ABGR ABGR, *PABGR;

typedef uchar u8;

struct ABGR {
    u8 A;
    u8 B;
    u8 G;
    u8 R;
};

typedef struct astruct astruct, *Pastruct;

struct astruct {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined1 field32_0x20;
};

typedef struct astruct_1 astruct_1, *Pastruct_1;

struct astruct_1 {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    undefined field268_0x10c;
    undefined field269_0x10d;
    undefined field270_0x10e;
    undefined field271_0x10f;
    undefined field272_0x110;
    undefined field273_0x111;
    undefined field274_0x112;
    undefined field275_0x113;
    undefined field276_0x114;
    undefined field277_0x115;
    undefined field278_0x116;
    undefined field279_0x117;
    undefined field280_0x118;
    undefined field281_0x119;
    undefined field282_0x11a;
    undefined field283_0x11b;
    undefined field284_0x11c;
    undefined field285_0x11d;
    undefined field286_0x11e;
    undefined field287_0x11f;
    undefined field288_0x120;
    undefined field289_0x121;
    undefined field290_0x122;
    undefined field291_0x123;
    undefined field292_0x124;
    undefined field293_0x125;
    undefined field294_0x126;
    undefined field295_0x127;
    undefined field296_0x128;
    undefined field297_0x129;
    undefined field298_0x12a;
    undefined field299_0x12b;
    undefined field300_0x12c;
    undefined field301_0x12d;
    undefined field302_0x12e;
    undefined field303_0x12f;
    undefined field304_0x130;
    undefined field305_0x131;
    undefined field306_0x132;
    undefined field307_0x133;
    undefined field308_0x134;
    undefined field309_0x135;
    undefined field310_0x136;
    undefined field311_0x137;
    undefined field312_0x138;
    undefined field313_0x139;
    undefined field314_0x13a;
    undefined field315_0x13b;
    undefined field316_0x13c;
    undefined field317_0x13d;
    undefined field318_0x13e;
    undefined field319_0x13f;
    undefined field320_0x140;
    undefined field321_0x141;
    undefined field322_0x142;
    undefined field323_0x143;
    undefined field324_0x144;
    undefined field325_0x145;
    undefined field326_0x146;
    undefined field327_0x147;
    undefined field328_0x148;
    undefined field329_0x149;
    undefined field330_0x14a;
    undefined field331_0x14b;
    undefined field332_0x14c;
    undefined field333_0x14d;
    undefined field334_0x14e;
    undefined field335_0x14f;
    undefined field336_0x150;
    undefined field337_0x151;
    undefined field338_0x152;
    undefined field339_0x153;
    undefined field340_0x154;
    undefined field341_0x155;
    undefined field342_0x156;
    undefined field343_0x157;
    int field344_0x158;
};

typedef struct astruct_2 astruct_2, *Pastruct_2;

struct astruct_2 {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined4 field128_0x80;
    undefined4 field129_0x84;
    undefined4 field130_0x88;
    undefined field131_0x8c;
    undefined field132_0x8d;
    undefined field133_0x8e;
    undefined field134_0x8f;
    undefined field135_0x90;
    undefined field136_0x91;
    undefined field137_0x92;
    undefined field138_0x93;
    undefined field139_0x94;
    undefined field140_0x95;
    undefined field141_0x96;
    undefined field142_0x97;
    undefined field143_0x98;
    undefined field144_0x99;
    undefined field145_0x9a;
    undefined field146_0x9b;
    undefined field147_0x9c;
    undefined field148_0x9d;
    undefined field149_0x9e;
    undefined field150_0x9f;
    undefined field151_0xa0;
    undefined field152_0xa1;
    undefined field153_0xa2;
    undefined field154_0xa3;
    undefined field155_0xa4;
    undefined field156_0xa5;
    undefined field157_0xa6;
    undefined field158_0xa7;
    undefined field159_0xa8;
    undefined field160_0xa9;
    undefined field161_0xaa;
    undefined field162_0xab;
    undefined field163_0xac;
    undefined field164_0xad;
    undefined field165_0xae;
    undefined field166_0xaf;
    undefined field167_0xb0;
    undefined field168_0xb1;
    undefined field169_0xb2;
    undefined field170_0xb3;
    undefined field171_0xb4;
    undefined field172_0xb5;
    undefined field173_0xb6;
    undefined field174_0xb7;
    undefined field175_0xb8;
    undefined field176_0xb9;
    undefined field177_0xba;
    undefined field178_0xbb;
    undefined field179_0xbc;
    undefined field180_0xbd;
    undefined field181_0xbe;
    undefined field182_0xbf;
    undefined field183_0xc0;
    undefined field184_0xc1;
    undefined field185_0xc2;
    undefined field186_0xc3;
    undefined field187_0xc4;
    undefined field188_0xc5;
    undefined field189_0xc6;
    undefined field190_0xc7;
    undefined field191_0xc8;
    undefined field192_0xc9;
    undefined field193_0xca;
    undefined field194_0xcb;
    undefined field195_0xcc;
    undefined field196_0xcd;
    undefined field197_0xce;
    undefined field198_0xcf;
    undefined field199_0xd0;
    undefined field200_0xd1;
    undefined field201_0xd2;
    undefined field202_0xd3;
    undefined field203_0xd4;
    undefined field204_0xd5;
    undefined field205_0xd6;
    undefined field206_0xd7;
    undefined field207_0xd8;
    undefined field208_0xd9;
    undefined field209_0xda;
    undefined field210_0xdb;
    undefined field211_0xdc;
    undefined field212_0xdd;
    undefined field213_0xde;
    undefined field214_0xdf;
    undefined field215_0xe0;
    undefined field216_0xe1;
    undefined field217_0xe2;
    undefined field218_0xe3;
    undefined field219_0xe4;
    undefined field220_0xe5;
    undefined field221_0xe6;
    undefined field222_0xe7;
    undefined field223_0xe8;
    undefined field224_0xe9;
    undefined field225_0xea;
    undefined field226_0xeb;
    undefined field227_0xec;
    undefined field228_0xed;
    undefined field229_0xee;
    undefined field230_0xef;
    undefined field231_0xf0;
    undefined field232_0xf1;
    undefined field233_0xf2;
    undefined field234_0xf3;
    undefined field235_0xf4;
    undefined field236_0xf5;
    undefined field237_0xf6;
    undefined field238_0xf7;
    undefined field239_0xf8;
    undefined field240_0xf9;
    undefined field241_0xfa;
    undefined field242_0xfb;
    undefined field243_0xfc;
    undefined field244_0xfd;
    undefined field245_0xfe;
    undefined field246_0xff;
    undefined field247_0x100;
    undefined field248_0x101;
    undefined field249_0x102;
    undefined field250_0x103;
    undefined field251_0x104;
    undefined field252_0x105;
    undefined field253_0x106;
    undefined field254_0x107;
    undefined field255_0x108;
    undefined field256_0x109;
    undefined field257_0x10a;
    undefined field258_0x10b;
    undefined field259_0x10c;
    undefined field260_0x10d;
    undefined field261_0x10e;
    undefined field262_0x10f;
    undefined field263_0x110;
    undefined field264_0x111;
    undefined field265_0x112;
    undefined field266_0x113;
    undefined field267_0x114;
    undefined field268_0x115;
    undefined field269_0x116;
    undefined field270_0x117;
    undefined field271_0x118;
    undefined field272_0x119;
    undefined field273_0x11a;
    undefined field274_0x11b;
    undefined field275_0x11c;
    undefined field276_0x11d;
    undefined field277_0x11e;
    undefined field278_0x11f;
    undefined field279_0x120;
    undefined field280_0x121;
    undefined field281_0x122;
    undefined field282_0x123;
    undefined field283_0x124;
    undefined field284_0x125;
    undefined field285_0x126;
    undefined field286_0x127;
    undefined field287_0x128;
    undefined field288_0x129;
    undefined field289_0x12a;
    undefined field290_0x12b;
    undefined field291_0x12c;
    undefined field292_0x12d;
    undefined field293_0x12e;
    undefined field294_0x12f;
    undefined field295_0x130;
    undefined field296_0x131;
    undefined field297_0x132;
    undefined field298_0x133;
    undefined field299_0x134;
    undefined field300_0x135;
    undefined field301_0x136;
    undefined field302_0x137;
    undefined field303_0x138;
    undefined field304_0x139;
    undefined field305_0x13a;
    undefined field306_0x13b;
    undefined field307_0x13c;
    undefined field308_0x13d;
    undefined field309_0x13e;
    undefined field310_0x13f;
    undefined field311_0x140;
    undefined field312_0x141;
    undefined field313_0x142;
    undefined field314_0x143;
    undefined field315_0x144;
    undefined field316_0x145;
    undefined field317_0x146;
    undefined field318_0x147;
    undefined field319_0x148;
    undefined field320_0x149;
    undefined field321_0x14a;
    undefined field322_0x14b;
    undefined field323_0x14c;
    undefined field324_0x14d;
    undefined field325_0x14e;
    undefined field326_0x14f;
    undefined field327_0x150;
    undefined field328_0x151;
    undefined field329_0x152;
    undefined field330_0x153;
    undefined field331_0x154;
    undefined field332_0x155;
    undefined field333_0x156;
    undefined field334_0x157;
    uint field335_0x158;
};

typedef struct Blender Blender, *PBlender;

typedef struct Mtx4 Mtx4, *PMtx4;

typedef uint u32;


/* WARNING! conflicting data type names: /Vec4 - /camera.h/Vec4 */

struct Mtx4 {
    struct Vec4 v0;
    struct Vec4 v1;
    struct Vec4 v2;
    struct Vec4 v3;
};

struct Blender {
    struct Mtx4 invMatrix;
    struct ABGR ambientA;
    struct ABGR ambientB;
    struct ABGR dLightA;
    struct ABGR dLightB;
    u32 flags;
    struct ABGR fogColor1;
    struct ABGR fogColor2;
    float fogNearDist1;
    float fogNearIntensity1;
    float fogFarDist1;
    float fogFarIntensity1;
    float fogNearDist2;
    float fogNearIntensity2;
    float fogFarDist2;
    float fogFarIntensity2;
    undefined4 unk;
};


/* WARNING! conflicting data type names: /EBOOT.ELF.h/bool - /bool */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/bool - /bool */


/* WARNING! conflicting data type names: /item.h/bool - /bool */


/* WARNING! conflicting data type names: /legdata.h/bool - /bool */


/* WARNING! conflicting data type names: /ocean.h/bool - /bool */


/* WARNING! conflicting data type names: /playerstate (1).h/bool - /bool */


/* WARNING! conflicting data type names: /sky.h/bool - /bool */


/* WARNING! conflicting data type names: /sps.h/bool - /bool */


/* WARNING! conflicting data type names: /stringids.h/bool - /bool */


/* WARNING! conflicting data type names: /yo.h/bool - /bool */

typedef struct BSphere BSphere, *PBSphere;

typedef float f32;

struct BSphere {
    f32 x;
    f32 y;
    f32 z;
    f32 rad;
};


/* WARNING! conflicting data type names: /EBOOT.ELF.h/byte - /byte */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/byte - /byte */


/* WARNING! conflicting data type names: /item.h/byte - /byte */


/* WARNING! conflicting data type names: /legdata.h/byte - /byte */


/* WARNING! conflicting data type names: /ocean.h/byte - /byte */


/* WARNING! conflicting data type names: /playerstate (1).h/byte - /byte */


/* WARNING! conflicting data type names: /sky.h/byte - /byte */


/* WARNING! conflicting data type names: /sps.h/byte - /byte */


/* WARNING! conflicting data type names: /stringids.h/byte - /byte */


/* WARNING! conflicting data type names: /yo.h/byte - /byte */

typedef struct CamBlender CamBlender, *PCamBlender;

typedef short s16;

typedef struct PolarSm PolarSm, *PPolarSm;

struct PolarSm {
    float azimuth;
    float elevation;
    float radius;
};

struct CamBlender {
    s16 state;
    u8 type;
    u8 reqType;
    u8 pad_04[12];
    u32 field_10;
    f32 quatInterp;
    f32 reqQuatInterpAdd;
    u32 field_1C;
    f32 posInterp;
    f32 reqPosInterpAdd;
    u8 pad_28[8];
    struct Vec4 pose1;
    struct Vec4 pose0;
    struct Vec4 activeCam0;
    struct Vec4 activeCam1;
    struct PolarSm polar;
    u32 blendStep;
    f32 blendStepInv;
    u32 reqInterpFrames;
    u8 pad_88[40];
    struct Vec4 blendWork;
    struct Vec4 pendingCam0;
    struct Vec4 pendingCam1;
};

typedef struct Camera Camera, *PCamera;

struct Camera {
    struct Vec4 fwd;
    struct Vec4 right;
    struct Vec4 up;
    struct Vec4 pos;
};

typedef struct CameraControlActivation CameraControlActivation, *PCameraControlActivation;

struct CameraControlActivation { /* DL struct CameraControlActivation (UpdateCam+0x74) */
    int activationType;
    float blendSpeed;
    char priority;
    char activate;
    short deactivate;
    short repCam;
    short orgCam;
};

typedef struct CameraMatrix CameraMatrix, *PCameraMatrix;

struct CameraMatrix {
    struct Vec4 forward;
    struct Vec4 right;
    struct Vec4 up;
    struct Vec4 position;
};

typedef struct CameraVTable CameraVTable, *PCameraVTable;

struct CameraVTable {
    int type;
    void *activate;
    void *init;
    void *update;
    void *exit;
};

typedef struct CamOffsetRec CamOffsetRec, *PCamOffsetRec;

struct CamOffsetRec {
    float amp;
    float result;
    int total;
    int elapsed;
};

typedef enum COLL_FLAGS {
    COLL_NO_ENV=1,
    COLL_MESH_ONLY=2,
    COLL_ALT_PRIMSET=4,
    COLL_DAMAGEABLE_ONLY=8,
    COLL_DOUBLE_SIDED=16,
    COLL_IGNORE_MATERIAL=32,
    COLL_CAMERA=128
} COLL_FLAGS;

typedef enum COLL_MATERIAL {
    COLL_WATER=0,
    COLL_LAVA=1,
    COLL_MAGNETIC_RAMP=2,
    COLL_MUD_QUICKSAND=3,
    COLL_WATER_SLIDE=4,
    COLL_GRINDRAIL_HOVERBOARD_RAMP=5,
    COLL_SPIDERBOT_TUNNEL=6,
    COLL_ICE_SLIDING=7,
    COLL_SLIDING_OFF=8,
    COLL_NO_LEDGE_GRAB=9,
    COLL_NO_WALL_JUMP=10,
    COLL_DEATH_MUD=11,
    COLL_SLIDING_OFF_NO_WALLJUMP_LEDGE=12,
    COLL_DEATH_ICE=13,
    COLL_WATER_RIPPLES=14,
    COLL_WALL_JUMP=15,
    COLL_MAGNETIC_ELECTRIC_RAMP=17,
    COLL_CRASHSITE_RAMP=18,
    COLL_DEFAULT=31
} COLL_MATERIAL;

typedef struct CollCell CollCell, *PCollCell;

struct CollCell { /* Env collision cell header. Followed by float verts[vertCount][3] (cell-local, (world - cellCenter)*1024, cellCenter = 4*idx+2), CollTri tris[faceCount], char quadV3[quadCount] (first quadCount tris are quads). */
    short faceCount;
    char vertCount;
    char quadCount;
};

typedef struct CollDamageOut CollDamageOut, *PCollDamageOut;

typedef struct MobyInstance MobyInstance, *PMobyInstance;

typedef ushort u16;


/* WARNING! conflicting data type names: /mobyfunc.h/vec4 - /legdata.h/vec4 */

typedef char s8;

typedef struct MobyClass MobyClass, *PMobyClass;

typedef enum MobyModeBit {
    NONE=0,
    DISABLED=1,
    NO_UPDATE=2,
    NO_POST_UPDATE=4,
    TRANSPARENT=8,
    HAS_GLOW=16,
    HAS_SPECIAL_VARS=32,
    UNK_40=64,
    NO_DRAW=128,
    LOCK_ROTATION=256,
    DRAW_TRANSPARENT_WEIRD=512,
    DRAW_SHADOW=1024,
    DISABLE_Z_WRITE=2048,
    CAN_BE_AUTO_TARGETED=4096,
    HIDE_BACKFACES=8192,
    CAN_BE_DAMAGED=16384,
    MIRROR=32768
} MobyModeBit;


/* WARNING! conflicting data type names: /mobyfunc.h/Manipulator - /legdata.h/Manipulator */

typedef enum MOBY_OCLASSES {
    RATCHET=0,
    BLARG_HEAVY_INTERCEPTOR_0008=8,
    CLANK_000A=10,
    VENDOR=11,
    VENDOR_GUY=12,
    BOLT=13,
    BOLT_HEXNUT=14,
    BOLT_STARNUT=15,
    BOLT_CIRCLENUT=16,
    MAGNETBOOTS_0012=18,
    ELEVATOR_0015=21,
    UNKNOWN_RELATED_TO_FIGHTER_JET=27,
    PLASMABOT_001C=28,
    BLARG_TURRET=29,
    MACHINEGUN_TURRET_001E=30,
    MINIBOMBER=31,
    FISH=35,
    BLARG_GUNNER=36,
    TAXI_PLATFORM_0026=38,
    METAL_DETECTOR_0027=39,
    ROCKET_0029=41,
    PLATFORM_002B=43,
    SENTRY_BOT=44,
    ROCKET_0031=49,
    ROCKET_0032=50,
    SEEKER=52,
    SUCKCANNON_0036=54,
    HANGAR_DOOR_0037=55,
    ROBOSQUAWKER=63,
    FAN_0042=66,
    SUCKCANNON_0044=68,
    FIGHTER_JET_0045=69,
    WRENCH_0047=71,
    MINE_004A=74,
    RED_SHIP_1=75,
    MINE_004D=77,
    SPIKEBALL=78,
    SCENERY_SHIP=79,
    TRESPASSER_0050=80,
    ROCKET_0052=82,
    MINE_0053=83,
    HOVERBOARD_0054=84,
    BUTTERFLY=85,
    CLANK_0057=87,
    BOB=90,
    GATE_005C=92,
    GATE_005D=93,
    BLARG_SPACE_FIGHTER_0065=101,
    BRIDGE_0068=104,
    BRIDGE_006A=106,
    WRENCH_006E=110,
    BLARG_SPACE_FIGHTER_006F=111,
    EXPLOSION_0070=112,
    THE_GUY=114,
    WHITE_SHIP=115,
    RED_SHIP_2=116,
    YELLOW_SHIP=117,
    TRUCK_SHIP=118,
    GREEN_SHIP_0077=119,
    BEIGE_SHIP=120,
    SPIDERBOT=123,
    PURPLE_SHIP_0084=132,
    AMOEBOID=133,
    GOLD_DEVASTATOR_MISSILE=153,
    DEVASTATOR=157,
    VISIBOMB=163,
    DRILL_00A4=164,
    BLASTER=168,
    FORCEFIELD_TOWER=170,
    VISIBOMB_MISSILE=172,
    MAGNETBOOTS_00AD=173,
    TAUNTER_00AF=175,
    PYROCITOR=176,
    TESLA_CLAW=177,
    WALLOPER=180,
    DOOR_00B6=182,
    DOOR_00B7=183,
    MORPH_O_RAY_00B9=185,
    DOOM_BOT=186,
    BLARG_SHIP_00BB=187,
    TRESPASSER_00BC=188,
    MINE_GLOVE=190,
    BOMB_GLOVE=192,
    CHOMPER_00C1=193,
    GRINDBOOT=195,
    DOOR_00C4=196,
    DOOR_00C5=197,
    DECOY=203,
    DEVESTATOR_AMMO=204,
    SWINGSHOT_00D0=208,
    SWINGSHOT_HOOK=209,
    PLASMABOT_00D3=211,
    ASTEROID_00D4=212,
    TESLA_CLAW_AMMO=213,
    PYROCITOR_AMMO=214,
    BIG_AXEBOT=217,
    CONSTRUCTION_ARM=221,
    VISIBOMB_AMMO=222,
    GLOVE_OF_DOOM_AMMO=223,
    AMMOCRATE_00E0=224,
    MINE_GLOVE_AMMO=225,
    BOMB_GLOVE_AMMO=226,
    JET_FIGHTER_HEALTH_CRATE_00E4=228,
    GLOVE_OF_DOOM=229,
    BOMB_00E6=230,
    HELICOPTER_00E9=233,
    PLATFORM_00F0=240,
    ELEVATOR_00F4=244,
    BOMB_00F8=248,
    PLASMABOT_HATCH=250,
    SCOUTBOT=252,
    CANNONBALL_TANK_00FD=253,
    ROCKET_0100=256,
    ASTEROID_0107=263,
    ASTEROID_0108=264,
    ASTEROID_0109=265,
    ASTEROID_010A=266,
    ASTEROID_010B=267,
    MORPH_O_RAY_CHICKEN=270,
    TURRET_0110=272,
    ANTENNA_0112=274,
    DISPLAY=276,
    BOLT_CRANK=280,
    BOMB_0119=281,
    MINER=282,
    DRILL_011F=287,
    BLARG_TROOPER_0126=294,
    ROCKET_0127=295,
    CONVEYOR_BELT_0128=296,
    FRED_012A=298,
    GADGEBOT_SPAWN_CONTAINER=302,
    GADGEBOT_SPAWN_PAD=303,
    GOLD_WEAPON_CASE=304,
    PLATFORM_0135=309,
    FAN_SHROUD=310,
    TELEPORTER=318,
    BLARG_HELICOPTER_0146=326,
    EDWINA=328,
    TRACKDRIVE_LEFT=331,
    TRACKDRIVE_RIGHT=332,
    BLARG_BOMBTHROWER=333,
    HELICOPTER_0150=336,
    CRANE_ARM=339,
    CIRCULAR_SAW_ENEMY=340,
    HYDRODISPLACER_PAD=341,
    BLARG_GUN_0158=344,
    DREKS_FLEET_TURRET=347,
    NANOTECH_CRATE_FRAGMENT_015C=348,
    NANOTECH_CRATE_FRAGMENT_015D=349,
    GADGEBOT_TELEPOT_PAD=351,
    GATE_0161=353,
    METAL_CRATE_FRAGMENT_0162=354,
    METAL_CRATE_FRAGMENT_0163=355,
    METAL_CRATE_FRAGMENT_0164=356,
    CRATE_FRAGMENT_0165=357,
    CRATE_FRAGMENT_0166=358,
    CRATE_FRAGMENT_0167=359,
    HANGAR_DOOR_0168=360,
    EXPLOSIVE_CRATE_FRAGMENT_016B=363,
    EXPLOSIVE_CRATE_FRAGMENT_016C=364,
    WATER_RESERVOIR=384,
    QWARKS_STARFIGHTER_PART_0184=388,
    QWARKS_STARFIGHTER_PART_0185=389,
    QWARKS_STARFIGHTER_PART_0186=390,
    QWARKS_STARFIGHTER_PART_0187=391,
    QWARKS_STARFIGHTER_PART_0188=392,
    QWARKS_STARFIGHTER_PART_0189=393,
    QWARKS_STARFIGHTER_PART_018A=394,
    QWARKS_STARFIGHTER_PART_018B=395,
    QWARKS_STARFIGHTER_PART_018C=396,
    QWARKS_STARFIGHTER_PART_018D=397,
    QWARKS_STARFIGHTER_PART_018E=398,
    QWARKS_STARFIGHTER_PART_018F=399,
    QWARKS_STARFIGHTER_PART_0190=400,
    FORCEFIELD_0194=404,
    FORCEFIELD_0195=405,
    EDWINAS_WELDING_SHIELD=406,
    PERSUADER_0197=407,
    SENTRY_BOT_ALARM=408,
    ROCKET_0199=409,
    GIANT_CLANK=419,
    SHUTTLE_01A8=424,
    BOMB_01A9=425,
    BLARG_TROOPER_01AB=427,
    FEATHER=428,
    EUDORA_BRIDGE=432,
    SONIC_SUMMONER=433,
    PLATFORM_BOOSTER=434,
    ROCKET_01B3=435,
    SAND_MOUSE=437,
    HOVERBOARD_01B7=439,
    HELIPACK_01BE=446,
    QUARK_01BF=447,
    BOLT_THIEF_01C4=452,
    R_Y_N_O_01C6=454,
    SPAWNER_01C7=455,
    ROCKET_01C9=457,
    ROCKET_01CA=458,
    BIRDBOT=459,
    QWARKS_STARFIGHTER=461,
    SHRUB=462,
    SNOW_PLOW=466,
    ROCKET_01D6=470,
    CONVEYOR_BELT_01D7=471,
    SHORT_LOG=476,
    LONG_LOG=477,
    THIN_LOG=478,
    DRONE=479,
    GRAB_HELICOPTER=480,
    FLOATING_PLATFORM_01E1=481,
    HOLOGUISE_01E3=483,
    TRANSPORT_SHIP=484,
    BALL_SHIP_1=485,
    BALL_SHIP_2=486,
    CIRCULAR_SAW_SHIP=488,
    CHAINSAW_SHIP=490,
    ULTRA_MECH_UNLIMITED=491,
    BOMBTHROWER_GRASS_01EC=492,
    TANK_SHIP=493,
    LOG_SHIP_1=494,
    LOG_SHIP_2=495,
    LOG_SHIP_CARRIER=498,
    GUN_01F3=499,
    BOLT_CRATE=500,
    NANOTECH_CRATE=501,
    METAL_CRATE=502,
    EXPLOSIVE_CRATE=505,
    AMMO_CRATE=511,
    PURPLE_SHIP_0211=529,
    VELDIN_SHIP=530,
    GREEN_SHIP_0213=531,
    RED_SHIP=532,
    PURPLE_SHIP_0215=533,
    TEST_DUMMY=541,
    BOMB_0221=545,
    WALL_BUTTON=546,
    LOG_SHIP_END=555,
    TEST_DUMMY_ON_HOVERBOARD=556,
    SHUTTLE_022D=557,
    DECOY_GLOVE=562,
    WOODCUT_BOT=563,
    ROCKET_0234=564,
    ROCKET_0237=567,
    MINE_0238=568,
    AXE=570,
    SLIME_PARENT=572,
    ROBOT_DOG_023D=573,
    BLARG_COMMANDER_023E=574,
    PECKBOT=577,
    MINE_LAYER=578,
    SANDSHARK_0244=580,
    THRUSTER_PACK_LOCK_GREEN=583,
    YELLOW_PLATFORM=584,
    METAL_DETECTOR_0249=585,
    THRUSTER_PACK_LOCK_RED=586,
    FLOATING_PLATFORM_024B=587,
    CLANK_BACKPACK=601,
    SANDMOUSE_HOUSE=604,
    METAL_DETECTOR_SPOT_MESHLESS=605,
    HELIPACK_025F=607,
    THRUSTERPACK=608,
    HYDROPACK=609,
    YELLOW_ENEMY=612,
    UNKNOWN_USUALLY_IN_RIVERS=613,
    MAPPER=614,
    TRESSPASSER_PAD=615,
    ARMOR_MAGNETIZER=618,
    PDA=619,
    EXTERMIBOT=623,
    EXTERMITANK=625,
    MINE_0273=627,
    BLARG_HELICOPTER_0277=631,
    TREE=633,
    HOLOGUISE_027A=634,
    BLARG_ELITE_COMMANDO=638,
    CAVE_DOOR=641,
    LEAF=642,
    MINE_0283=643,
    NANOTECH_UPGRADE_CAN=645,
    DOOR_0287=647,
    TEST_DUMMY_DOOR=650,
    ELEVATOR_028B=651,
    ESCALATOR=652,
    ESCALATOR_END=653,
    BULLDOZER=656,
    BOMB_0291=657,
    FIGHTER_JET_0294=660,
    DUMP_TRUCK=662,
    PLATFORM_0298=664,
    DOOR_HALF=665,
    STATIONARY_SHIP=666,
    SANDSHARK_SPAWNER=668,
    GRAB_CRANE=675,
    SANDSHARK_02AA=682,
    ELEVATOR_02AD=685,
    BRIDGE_02AF=687,
    BOMBER_JET=688,
    LIFTCAR=690,
    PERSUADER_02B4=692,
    WATER_LILY=695,
    ROCK_02B8=696,
    ROCK_02B9=697,
    ROCK_02BA=698,
    FALLING_ROCK=701,
    PISTON_PLATFORM=703,
    ROCK_FORMATION=704,
    FAN_02C1=705,
    FAN_PLATFORM=706,
    PLATFORM_02C3=707,
    BRIDGE_PIECE_1=709,
    BRIDGE_PIECE_2=710,
    BRIDGE_PIECE_3=711,
    TAXI_02C8=712,
    TRANSPORT_POD=713,
    PISTON_PLATFORM_2=715,
    SKID_MCMARX=717,
    ELEVATOR_FRAME=718,
    LIGHT=719,
    SHIP_WRECK=720,
    GREEN_LEAVES=724,
    BLUE_LEAVES=725,
    NOVALIS_ELEVATOR=726,
    POD_PLATFORM_RIGHT=727,
    POD_PLATFORM_LEFT=728,
    DESTROYABLE_CAVE_WALL=729,
    AGNOGG_SHIP_FRONT=730,
    AGNOGG_SHIP_BACK=731,
    CRANE=732,
    ROCKET_LAUNCHER=733,
    PLATFORM_02DE=734,
    ROCKET_DOOR1=735,
    ROCKET_DOOR2=736,
    DOOR_FRAME=742,
    TRESSPASSER_DOOR1=743,
    TRESSPASSER_DOOR2=744,
    BRIDGE_HALF=746,
    INNER_SUPPORT=747,
    VELDIN_FROG=749,
    INFOBOT=750,
    GADGETRON_STAND=753,
    GREEN_MUSHROOM=754,
    SANDSHARK_EGG=755,
    SWINGSHOT_PULL=758,
    PARTICLE_SPAWNER_SMOKE_FIRE=760,
    ROCKS=762,
    STATUE_02FD=765,
    PLANT_02FE=766,
    PLANT_02FF=767,
    DOOR_LEFT=768,
    DOOR_RIGHT=769,
    HELIPACK_0302=770,
    PLUMBER_0306=774,
    SPLASH_EFFECT=775,
    PIPE_030A=778,
    BROKEN_PIPE_030B=779,
    BRIDGE_PLATFORM=780,
    CRANE_TOP=781,
    SKIDDS_AGENT=786,
    SKIDD=788,
    LIFTCAR_POLE=789,
    SHIP_REAR=790,
    LIFTCAR_PLATFORM=792,
    BLIMP=795,
    SWINGSHOT_SWING=803,
    SPAWN_POINT=805,
    NANOTECH_BALL=806,
    FLOATING_PLATFORM_032A=810,
    AGNOGG_BUCKWASH=811,
    BOX=812,
    BEEHIVE=815,
    TAXI_0330=816,
    STATUE_0331=817,
    ROCKET_0333=819,
    TRAIN_LOCOMOTIVE=822,
    LAMP_0337=823,
    ROBO_SHACK_SIGN=825,
    FROG=827,
    BUTTON_033E=830,
    WATER_033F=831,
    ROCKET_0341=833,
    CLANK_CUTSCENE_TRIGGER=834,
    MINE_0343=835,
    ELECTRIC_GATE=838,
    BROKEN_BUTTON=842,
    DOOR_034B=843,
    DRAIN_COVER=844,
    UNDERWATER_GATE=846,
    SUCKCANNON_0351=849,
    QWARK=851,
    BRIDGE_PART=852,
    BRIDGE_PILE=853,
    SEWER_PIPE_WITH_SLUDGE=855,
    GADGEBOT_0359=857,
    TEST_DUMMY_BOMB_GLOVE=863,
    MEDIUM_SLIME=865,
    SMALL_SLIME=866,
    MOVING_PLATFORM_SMALL=868,
    BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR=871,
    TEST_DUMMY_PYROCITOR=876,
    ELEVATOR_WITH_BUTTON=877,
    BOMB_0372=882,
    TRAIN_CARRIAGE_0373=883,
    TEST_DUMMY_WALLOPER=884,
    TIMED_ACTIVATION_PADS=886,
    HELGA=890,
    HYDRODISPLACER_PUZZLE_DOOR=893,
    GRILL_DOOR=895,
    CEILING=898,
    WATER_0386=902,
    PLATFORM_0387=903,
    MOVING_PLATFORM_MEDIUM=905,
    JET_038C=908,
    BIG_AL=909,
    TOXIC_GAS_VENT=911,
    PURPLE_SHIP_0391=913,
    ROBOT_QWARK=914,
    FRED_1=915,
    FRED_2=916,
    FRED_3=917,
    HOVERBOARD_LADY=918,
    QUARKS_BOUNCER=919,
    QUARK_0398=920,
    JET_0399=921,
    ROCKET_039A=922,
    BOLT_THIEF_039B=923,
    SAM=924,
    SHADY_SALESMAN=925,
    MOVING_PLATFORM_LARGE=928,
    MINE_03A5=933,
    BOMB_03AA=938,
    BOMBTHROWER_GRASS_03AB=939,
    WATER_03AD=941,
    WATER_03AF=943,
    WATER_03B0=944,
    WATER_03B4=948,
    WATER_03B5=949,
    WATER_03B6=950,
    WATER_03B8=952,
    WATER_03BA=954,
    WATER_03BB=955,
    WATER_03BE=958,
    UNKNOWN_PLANE=982,
    TELEVISION=984,
    SWINGSHOT_03E0=992,
    R_Y_N_O_03E1=993,
    GARAGE_DOOR=997,
    TAXI_03E6=998,
    PLATINUM_ZOOMERATOR=1002,
    TRESSPASSER=1005,
    BLASTER_AMMO=1006,
    CAMERA_OBJECT=1007,
    TAXI_03F4=1012,
    DOOR_03F7=1015,
    HYDRODISPLACER_03F8=1016,
    CIRCULAR_DOOR_PART=1021,
    BLARG_PARATROOPER=1023,
    BLARG_GUN_0401=1025,
    PLATFORM_0404=1028,
    BUTTON_0407=1031,
    PLATFORM_0409=1033,
    ROCKET_040A=1034,
    CIRCULAR_ELECTRIC_GATE=1035,
    ENERGY_SPHERE_HOLDER=1038,
    ENERGY_SPHERE_0410=1040,
    BOMB_O_MATIC=1041,
    MUSHROOM_UNDERSIDE=1042,
    ALIEN_SNAPPER=1048,
    ALIEN_QUEEN=1051,
    BRIDGE_041C=1052,
    WARSHIP_DOOR_HIGH_PART=1054,
    WARSHIP_DOOR_LOW_PART=1055,
    TRANSPORT_POD_RING=1056,
    TELEPORT_TUBE_0421=1057,
    TELEPORT_TUBE_0422=1058,
    SHARKIGATOR=1059,
    RED_ORB=1060,
    CIRCULAR_ELEVATOR_WITH_BUTTON=1061,
    FROG_SPAWNER=1066,
    BLARG_SPACE_COMMANDO_042C=1068,
    QWARK_STATUE=1071,
    BOAT=1075,
    ALIEN_SNAPPER_CAGE=1083,
    ALIEN_SNAPPER_CAGE_DAMAGED=1084,
    WARSHIP_TOP=1091,
    WARSHIP_WING_0444=1092,
    WARSHIP_GUNNER_0445=1093,
    WARSHIP_GUNNER_0446=1094,
    WARSHIP_BASE=1095,
    WARSHIP_THING=1096,
    WARSHIP_FRONT=1097,
    WARSHIP_WING_044A=1098,
    QUARKS_TRAILER=1099,
    UPPER_DOOR_044D=1101,
    LOWER_DOOR_044E=1102,
    DESTROYABLE_SHIP_LEFT_WING=1103,
    FRED_0451=1105,
    BLARGIAN_SNAGGLEBEAST=1106,
    SHUTTLE_0455=1109,
    MINE_0456=1110,
    MINE_0458=1112,
    PLATFORM_045D=1117,
    RED_BUTTON=1118,
    SUCK_CANNON=1120,
    ELECTRIC_GATE_POLES=1123,
    GLASS=1125,
    MACHINEGUN_TURRET_0466=1126,
    BATALIA_COMMANDO=1130,
    GOLD_BOLT=1134,
    TELEPORT_PAD=1135,
    FRAME=1138,
    HOVERBOARD_RING=1139,
    HOVERBOARD_BOOST_PAD=1140,
    ELEVATOR_0475=1141,
    VENDOR_ORB=1143,
    BATALIA_DESERTER=1144,
    BUTTON_COVER=1145,
    HELIPACK_047A=1146,
    TAUNTER_047C=1148,
    ELEVATOR_047E=1150,
    ELEVATOR_047F=1151,
    ROBOT_DOG_0489=1161,
    GEARS=1162,
    ROBOT_HAND=1163,
    ROBOT_TORSO=1164,
    WHEEL=1165,
    ROBOT_FOOT=1166,
    REFUELING_STATION=1172,
    CANNONBALL_TANK_0495=1173,
    SEESAW_PLATFORM=1178,
    THRUSTER_PACK_LOCK=1179,
    AIRSHIP_PART_049D=1181,
    AIRSHIP_PART_049E=1182,
    AIRSHIP_PART_049F=1183,
    AIRSHIP_PART_04A0=1184,
    AIRSHIP_PART_04A1=1185,
    AIRSHIP_PART_04A2=1186,
    AIRSHIP_PART_04A3=1187,
    AIRSHIP_PART_04A4=1188,
    AIRSHIP_PART_04A5=1189,
    LIEUTENANT=1190,
    EXPLOSION_04A8=1192,
    ROBOT_FACE=1195,
    SCREAMER=1196,
    DARTER=1199,
    FIGHTER_JET_DAMAGED=1200,
    TURRET_04B1=1201,
    TOXIC_CRAB=1202,
    ROBOT_STATUE=1205,
    CONSTRUCTORBOT=1208,
    UNDERWATER_RING=1209,
    TRAIN_CARRIAGE_04BA=1210,
    BACKGROUND_SHIP_1=1212,
    BACKGROUND_SHIP_2=1213,
    AMMOCRATE_04C2=1218,
    JET_FIGHTER_HEALTH_CRATE_04C4=1220,
    PROPELLER=1222,
    BLARG_SHIP_04CD=1229,
    PSY_TCOPUS=1231,
    ROCKET_04D1=1233,
    ANTENNA_04D7=1239,
    JET_FIGHTER=1242,
    MICROPHONE=1245,
    PUFFOID=1246,
    DREK=1249,
    CONVEYOR_BELT_04E2=1250,
    HYDRODISPLACER_04E3=1251,
    POISON_VESSEL_04E9=1257,
    POISON_VESSEL_04ED=1261,
    BLARG_SPACE_COMMANDO_04EE=1262,
    OIL_TANKER_FRONT=1264,
    OIL_TANKER_PART=1265,
    HOVEN_TURRET=1267,
    MINE_04F5=1269,
    ELEVATOR_04F6=1270,
    PLANETBUSTER_MAXIMUS_PART_04F8=1272,
    PLANETBUSTER_MAXIMUS_PART_04F9=1273,
    PLANETBUSTER_MAXIMUS_PART_04FA=1274,
    PLANETBUSTER_MAXIMUS_PART_04FB=1275,
    PLANETBUSTER_MAXIMUS_PART_04FC=1276,
    PLANETBUSTER_MAXIMUS_PART_04FD=1277,
    PLANETBUSTER_MAXIMUS_PART_04FE=1278,
    PLANETBUSTER_MAXIMUS_PART_04FF=1279,
    PLANETBUSTER_MAXIMUS_PART_0500=1280,
    HOMING_MINE_SPAWNER=1281,
    DOOR_0502=1282,
    PLUMBER_0503=1283,
    BARRIER_0505=1285,
    BARRIER_0506=1286,
    BARRIER_0507=1287,
    BARRIER_0508=1288,
    O2_MASK=1289,
    PILOTS_HELMET=1290,
    ENERGY_SPHERE_0511=1297,
    DISPLAY_DAMAGED_0512=1298,
    DISPLAY_DAMAGED_0513=1299,
    DISPLAY_DAMAGED_0514=1300,
    GADGEBOT_TELEPORTER_ENTRANCE=1301,
    GADGEBOT_ENTRANCE=1302,
    BLARG_SHIP_0527=1319,
    ICE_CUBE=1322,
    SWINGSHOT_SKILL_POINT_MANAGER=1324,
    NANOTECH_UPGRADE_VENDOR=1326,
    UNKNOWN_GADGETRON_RATCHET_TELEPORT_LOCATION=1341,
    GUN_0542=1346,
    MORPH_O_RAY_054A=1354,
    DREK_FIGHT_MISSILE=1355,
    ARMED_TRANSPORT=1356,
    DOOR_054F=1359,
    DOOR_0550=1360,
    DOOR_0551=1361,
    DOOR_0552=1362,
    DOOR_0553=1363,
    DOOR_0554=1364,
    CLANK_0555=1365,
    DOOR_0557=1367,
    DOOR_0559=1369,
    BLARG_COMMANDER_055B=1371,
    DOOR_055C=1372,
    DOOR_055D=1373,
    HELP_DESK_LADY=1377,
    FIGHTER_JET_0563=1379,
    MAGNET_ELEVATOR=1380,
    ROBOT_DOG_0566=1382,
    GUN_0567=1383,
    HYDRODISPLACER_056A=1386,
    BOLT_GRABBER=1388,
    BOLT_THIEF_0579=1401,
    TAXI_0582=1410,
    ASTEROID_0584=1412,
    BUTTON_0588=1416,
    BLARG_HEAVY_INTERCEPTOR_0589=1417,
    GATE_058D=1421,
    DREK_FINAL_BOSS_ROBOT=1422,
    GATE_0590=1424,
    CODEBOT=1428,
    CODEBOT_SLOT=1430,
    NANOTECH_CAN=1433,
    DEPLANETIZER_GUN_059A=1434,
    R_Y_N_O_AMMO=1438,
    GRINDRAIL_GATE_059F=1439,
    VELDIN_ROBOT_ENEMY=1440,
    GRINDRAIL_GATE_05A1=1441,
    GRINDRAIL_BUTTON=1442,
    GRINDRAIL_BARRIER=1443,
    CHOMPER_05A5=1445,
    ULTRA_MECH_SCIENTIST=1446,
    DRONE_DEVICE_AMMO=1447,
    SHUTTLE_05A8=1448,
    DECOY_AMMO=1449,
    GIANT_CLANK_PAD_05AB=1451,
    ROCKET_TANK=1454,
    GADGETRON_CEO=1455,
    GOLD_BOMB_GLOVE=1456,
    GOLD_PYROCITOR=1457,
    GOLD_BLASTER=1458,
    GOLD_GLOVE_OF_DOOM=1459,
    GOLD_MINE_GLOVE=1460,
    GOLD_DEVASTATOR=1461,
    GOLD_DECOY_GLOVE=1462,
    GOLD_TESLA_CLAW=1463,
    GOLD_SUCK_CANNON=1464,
    GOLD_MORPH_O_RAY=1465,
    MORPH_O_RAY_05BC=1468,
    TAXI_PLATFORM_05C2=1474,
    ROCKET_05C3=1475,
    CAMERA=1478,
    HOLOGUISE_05E5=1509,
    LAMP_05E7=1511,
    LAMP_DESTROYED=1514,
    CLANKS_SHIP=1515,
    CLANKS_SHIP_CRASHED=1520,
    LOWER_DOOR_05FB=1531,
    UPPER_DOOR_05FC=1532,
    PTERODACTYL=1564,
    DEPLANETIZER_GUN_0620=1568,
    THRUSTER_PACK_BACKPACK=1630,
    FAKE_BOLTCRATE=1635,
    MUSHROOM=1650,
    COMPUTER_WITH_DAN_JOHNSON=1655,
    COMPUTER_DAMAGED=1656,
    COMPUTER_PART_DAMAGED_0679=1657,
    COMPUTER_PART_DAMAGED_067A=1658,
    COMPUTER_PART_DAMAGED_067B=1659,
    ORANGE_LIGHT=1660,
    ORANGE_LIGHT_DAMAGED_067D=1661,
    ORANGE_LIGHT_DAMAGED_067E=1662,
    ROBOT_HEAD=1663,
    GREEN_LIGHT_0680=1664,
    GREEN_LIGHT_0681=1665,
    POWER_UNIT=1672,
    POWER_UNIT_DAMAGED_0689=1673,
    POWER_UNIT_DAMAGED_068A=1674,
    POWER_UNIT_DAMAGED_068B=1675,
    POWER_UNIT_DAMAGED_068C=1676,
    SEASHELL=1686,
    SPAWNER_LEG_DAMAGED_06C5=1733,
    SPAWNER_LEG_DAMAGED_06C6=1734,
    SPAWNER_TOP_DAMAGED=1735,
    ROBOT_DOG_JAW_DAMAGED=1742,
    ROBOT_DOG_HEAD_DAMAGED=1743,
    BLARG_COMMANDER_WEAPON_DAMAGED=1744,
    BLARG_COMMANDER_SHOE_DAMAGED=1746,
    SHUTTLE_06E6=1766,
    RED_PLANT=1781,
    GREEN_PLANT=1782,
    HOVERBOARD_06FA=1786,
    BLARG_SHIP_070D=1805,
    TALL_SHROOM=1813,
    SANDMOUSE=1818,
    WHITE_FLOWER_071B=1819,
    WHITE_FLOWER_071C=1820,
    ELEVATOR_0722=1826,
    LIGHTPOST=1827,
    LIGHTPOST_BOTTOM_DAMAGED=1828,
    LIGHTPOST_TOP_DAMAGED=1829,
    LIGHTPOST_SPHERE_DAMAGED=1830,
    PIPE_072A=1834,
    BROKEN_PIPE_072B=1835,
    FIREPLUG=1840,
    BLARG_SHIP_0733=1843,
    LAMP_0739=1849,
    LAMP_DAMAGED_073A=1850,
    LAMP_0743=1859,
    LAMP_DAMAGED_0744=1860,
    LAMP_0746=1862,
    LAMP_DAMAGED_0747=1863,
    GADGETRON_SIGN_074F=1871,
    SPAWNER_075D=1885,
    SPAWNER_EGG=1886,
    GADGETRON_SIGN_0763=1891,
    GIANT_CLANK_PAD_076B=1899,
    GOLD_DECOY=1900,
    GADGEBOT_0772=1906,
    ROBOT_ARM_078D=1933,
    ROBOT_ARM_078E=1934,
    HELPDESK_LADY_CREDITS=1957,
    UNDERWATER_DOOR=1958,
    VELDIN_BARRIER=1964,
    SHIP=1973,
    STALACTITE=2103,
    CAVE_ROCK=2104,
    CAVE_ROCK_GROUP=2105,
    CAVE_ROOF=2106
} MOBY_OCLASSES;


/* WARNING! conflicting data type names: /mobyfunc.h/undefined - /undefined */

typedef struct MobySeq MobySeq, *PMobySeq;

struct MobyInstance {
    struct BSphere bSphere;
    struct vec4 pos;
    u8 state;
    s8 group;
    u8 mClass;
    s8 alpha;
    struct MobyClass *pClass;
    void *pChain;
    float scale;
    char updateDistance;
    char enabled;
    short drawDistance;
    enum MobyModeBit modeBits;
    ushort occlIndex;
    uint color;
    uint light;
    struct vec4 rotation;
    char previousAnimationFrame;
    char animationFrame;
    u8 updateId;
    u8 animationId;
    float animationBlend;
    float unk58;
    float frameSpeed;
    void *pAnimationLayers;
    struct Manipulator *pManipulators;
    void *pPreviousAnimationData;
    void *pCurrentAnimationData;
    char field43_0x70;
    char field44_0x71;
    char field45_0x72;
    char field46_0x73;
    void *pUpdate;
    void *pVar;
    char unk7c;
    char unk7d;
    char unk7e;
    char shadow;
    int colorManipulator;
    int unk84;
    int unk88;
    char field56_0x8c;
    char field57_0x8d;
    char field58_0x8e;
    char field59_0x8f;
    uint field60_0x90;
    ushort *collision;
    float *collisionMesh;
    int collQueryStamp; /* = CollOutput.collCount of last coll query that tested this moby */
    uint collCount;
    s8 damage;
    char previousAnimationId;
    enum MOBY_OCLASSES oClass;
    int field71_0xa8;
    uint field72_0xac;
    char levelFlagIdx;
    char field74_0xb1;
    ushort uid;
    char field76_0xb4;
    char field77_0xb5;
    char field78_0xb6;
    char field79_0xb7;
    struct MobyInstance *field80_0xb8; /* Type 'Moby *' was deleted */
    char setByGroup;
    char field82_0xbd;
    char field83_0xbe;
    char field84_0xbf;
    struct Mtx4 transform;
};

struct MobySeq {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    u8 frame_count;
    u8 next_seq;
    u8 trigsCnt;
    u8 pad;
    short *trigs;
    void *animInfo;
    void *frameData;
};

struct MobyClass {
    void *packets;
    u8 pakcet_cnt_0;
    u8 packet_cnt_1;
    u8 metal_cnt;
    u8 metal_ofs;
    u8 joint_cnt;
    u8 pad;
    u8 packet_cnt_2;
    u8 team_texs;
    u8 seq_cnt;
    u8 sound_cnt;
    u8 lod_trans;
    u8 shadow;
    u16 *collision;
    void *skeleton;
    void *common_trans;
    void *anim_joints;
    void *gif_usage;
    float gScale;
    void *SoundDefs;
    char bangles;
    char mip_dist;
    s16 corncob;
    undefined field23_0x30;
    undefined field24_0x31;
    undefined field25_0x32;
    undefined field26_0x33;
    undefined field27_0x34;
    undefined field28_0x35;
    undefined field29_0x36;
    undefined field30_0x37;
    undefined field31_0x38;
    undefined field32_0x39;
    undefined field33_0x3a;
    undefined field34_0x3b;
    undefined field35_0x3c;
    undefined field36_0x3d;
    undefined field37_0x3e;
    undefined field38_0x3f;
    /* ignoring dynamic datatype inside composite: -BAD- */
-BAD- unk_ptr; /* Type 'Moby *' was deleted */
    u32 mode_bits;
    char type;
    char mode_bits2;
    struct MobySeq *seqs;
};

struct CollDamageOut {
    struct Vec4 ip?;
    struct Vec4 impact;
    struct MobyInstance *pDamager;
    uint damageFlags;
    char damageClass;
    char damageStrength;
    u16 damageIndex;
    float damageHp;
    u32 unk30_flags?;
    struct MobyInstance *pVictimMoby;
    char padding[8];
};

typedef struct CollGridLevel CollGridLevel, *PCollGridLevel;

struct CollGridLevel { /* One level of the env collision grid (z, y or x). shift = first cell index, count = number of cells, followed by count int offsets (relative to grid base) to the next level / CollCell. 0 = empty. Cells are 4 world units. */
    short shift;
    short count;
    int offsets[1];
};

typedef struct CollHit CollHit, *PCollHit;

struct CollHit { /* Per-query best-hit record filled by the tri/sphere tests. poly: env = collType+0x1000, moby = -triIndex. t = hit fraction (line) or dist^2 (sphere). */
    int poly;
    struct MobyInstance *moby;
    float t;
    float ip[3];
    float normal[3];
};

typedef struct CollMobyVertCacheEntry CollMobyVertCacheEntry, *PCollMobyVertCacheEntry;

struct CollMobyVertCacheEntry { /* Cache of world-transformed moby collision verts for meshes with >150 verts (8 entries at 0x9540c0). Reused while the 3x3 matrix is unchanged. */
    int oClass;
    float mtx[9];
    float verts[768];
};

typedef struct CollOutput CollOutput, *PCollOutput;

struct CollOutput {
    void *grid;
    int padding[3];
    int collCount;
    int damageNext;
    struct MobyInstance *pMoby;
    int poly;
    struct Vec4 ip;
    struct Vec4 push;
    struct Vec4 normal;
    struct Vec4 v0;
    struct Vec4 v1;
    struct Vec4 v2;
};

typedef struct CollPrim CollPrim, *PCollPrim;

struct CollPrim { /* Moby collision primitive (32 bytes). type 0/1 = sphere/pill variants; flags bit0 = alt set, bit1 = normal set; joint = joint index (offset<<4 into joint cache). Rest are floats (offset/radius/height). Disabled per-prim by bitmask MobyInstance+0x98. */
    char type;
    undefined field1_0x1;
    short flags;
    short joint;
    undefined field4_0x6;
    undefined field5_0x7;
    undefined field6_0x8;
    undefined field7_0x9;
    undefined field8_0xa;
    undefined field9_0xb;
    undefined field10_0xc;
    undefined field11_0xd;
    undefined field12_0xe;
    undefined field13_0xf;
    undefined field14_0x10;
    undefined field15_0x11;
    undefined field16_0x12;
    undefined field17_0x13;
    undefined field18_0x14;
    undefined field19_0x15;
    undefined field20_0x16;
    undefined field21_0x17;
    undefined field22_0x18;
    undefined field23_0x19;
    undefined field24_0x1a;
    undefined field25_0x1b;
    undefined field26_0x1c;
    undefined field27_0x1d;
    undefined field28_0x1e;
    undefined field29_0x1f;
};

typedef struct CollTri CollTri, *PCollTri;

struct CollTri { /* Env/moby collision face: 3 vertex indices + collision type (low5=material, bits5-6=group/sound surface, bit7=camera ignores). */
    char v0;
    char v1;
    char v2;
    char collType;
};

typedef enum CONTROLLER_INPUT {
    L2=1,
    R2=2,
    L1=4,
    R1=8,
    TRIANGLE=16,
    CIRCLE=32,
    CROSS=64,
    SQUARE=128,
    SELECT=256,
    L3=512,
    R3=1024,
    START=2048,
    UP=4096,
    RIGHT=8192,
    DOWN=16384,
    LEFT=32768
} CONTROLLER_INPUT;

typedef struct Cuboid Cuboid, *PCuboid;

typedef struct Mtx3 Mtx3, *PMtx3;

struct Mtx3 {
    struct Vec4 v0;
    struct Vec4 v1;
    struct Vec4 v2;
};

struct Cuboid {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

typedef struct Cylinder Cylinder, *PCylinder;

struct Cylinder {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

typedef enum DEBUG_OPTION {
    NONE=0,
    UPDATE_HERO=1,
    UPDATE_MOBYS=2,
    UPDATE_PARTICLES=4,
    UPDATE_CAMERA=8,
    ENABLE_STEPPING=16
} DEBUG_OPTION;

typedef struct DebugCameraSpeeds DebugCameraSpeeds, *PDebugCameraSpeeds;

struct DebugCameraSpeeds {
    float horizontal;
    float vertical;
    float roll;
    float pitch;
    float yaw;
};

typedef enum DebugDrawMode {
    Darken=1,
    EnvColl=2,
    MobyColl=4,
    HeroColl=8,
    Bspheres=16,
    Cameras=32,
    Cuboids=64,
    Samples=128,
    Text=256
} DebugDrawMode;

typedef struct DebugFontString DebugFontString, *PDebugFontString;

struct DebugFontString { /* queued debug text entry (debug font) */
    int x;
    int y;
    int color;
    char *str;
};

#define EDGE_DECOMPRESSOR_ASSERT 1

#define FIOS_COMPUTETHREAD_PRIORITY 257

#define FIOS_COMPUTETHREAD_STACKSIZE 65536

#define FIOS_INSTRUMENT 0

#define FIOS_IOTHREAD_PRIORITY 99

#define FIOS_IOTHREAD_STACKSIZE 32768

#define FIOS_LOWPRIORITYTHREAD_PRIORITY 1500

#define FIOS_LOWPRIORITYTHREAD_STACKSIZE 32768

#define FIOS_NORMALTHREAD_PRIORITY 1000

#define FIOS_NORMALTHREAD_STACKSIZE 32768

#define FIOS_PATH_MAX 256

#define FIOS_PROFILING 1

#define FIOS_PS3MAXFILES 256

#define FIOS_SCHEDULERTHREAD_PRIORITY 100

#define FIOS_SCHEDULERTHREAD_STACKSIZE 65536

#define FIOS_SIZET_MAX 4294967295

#define FIOS_USE_DIRTY_BLOCK_OPT 0

#define FIOS_VERSION 20267008

#define FIOS_VERSION_BUGFIX 5

#define FIOS_VERSION_MAJOR 1

#define FIOS_VERSION_MINOR 3

#define FIOS_VERSION_STAGE 4

#define FIOS_VERSION_STAGENUM 0

#define FIOSDEBUG 0

#define kDATE_EARLIEST 1

#define kDATE_HIGHBIT -9223372036854775808

#define kDATE_LATEST 9223372036854775807

#define kDATE_NULL 0

#define kDEADLINE_ASAP 2

#define kDEADLINE_LATER 9223372036854775807

#define kDEADLINE_NOW 1

#define kFIOS_VERSION_STAGE_a 1

#define kFIOS_VERSION_STAGE_b 2

#define kFIOS_VERSION_STAGE_d 0

#define kFIOS_VERSION_STAGE_f 4

#define kFIOS_VERSION_STAGE_rc 3

#define kTIME_EARLIEST 1

#define kTIME_LATEST 9223372036854775807

#define kTIME_NULL 0

#define MD5_DIGEST_SIZE 16

#define NULL 0

#define nullptr 0

#define PSARC_OFFSET_TABLE_DIV 32

typedef struct DirectionalLight DirectionalLight, *PDirectionalLight;

struct DirectionalLight {
    struct Vec4 color1;
    struct Vec4 direction1;
    struct Vec4 color2;
    struct Vec4 direction2;
};


/* WARNING! conflicting data type names: /EBOOT.ELF.h/dword - /dword */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/dword - /dword */


/* WARNING! conflicting data type names: /item.h/dword - /dword */


/* WARNING! conflicting data type names: /legdata.h/dword - /dword */


/* WARNING! conflicting data type names: /ocean.h/dword - /dword */


/* WARNING! conflicting data type names: /playerstate (1).h/dword - /dword */


/* WARNING! conflicting data type names: /sky.h/dword - /dword */


/* WARNING! conflicting data type names: /sps.h/dword - /dword */


/* WARNING! conflicting data type names: /stringids.h/dword - /dword */


/* WARNING! conflicting data type names: /yo.h/dword - /dword */

typedef struct EffectTexHeader EffectTexHeader, *PEffectTexHeader;

struct EffectTexHeader { /* Pre-baked RSX texture registers; words 0-6 go to methods 0x1A00+unit*0x20 (OFFSET,FORMAT,ADDRESS,CONTROL0,CONTROL1,FILTER,IMAGE_RECT), word 7 to 0x1840+unit*4 (CONTROL3) */
    int offset;
    int format;
    int address;
    int control0;
    int control1;
    int filter;
    int imageRect;
    int control3;
    int unknown_20;
};

typedef enum enum_1 {
    ANTI_CHICKEN_DEFAULT=0,
    SANDSHARK=2000,
    SANDSHARK_SPAWNER=2001,
    CHICKEN_METER=30003,
    NANOTECH_ANIMATION=30006,
    OXYGEN_METER=30015,
    BUTTONS=30020,
    BOLTS_ANIMATION=30031,
    MEMORY_CARD=30045,
    QUICK_SELECT=59700,
    VENDOR_FONT=59701,
    MAP_GRID=59801,
    MAP_ICONS=59802,
    COMPLETED_FILE_ICONS=59806,
    ITEMS_NON_SELECTED=59900,
    ITEMS_SELECTED=59901,
    GADGET_ICONS=59902,
    GADGET_ICONS_SELECTED=59903,
    AMMO_ICONS=59904,
    AMMO_PICKUP_ICONS=59905,
    HELI_PACK=60002,
    THRUSTER_PACK=60003,
    HYDRO_PACK=60004,
    SONIC_SUMMONER=60005,
    O2_MASK=60006,
    PILOTS_HELMET=60007,
    SUCK_CANNON=60009,
    BOMB_GLOVE=60010,
    DEVASTATOR=60011,
    SWINGSHOT=60012,
    VISIBOMB=60013,
    TAUNTER=60014,
    BLASTER=60015,
    PYROCITOR=60016,
    MINE_GLOVE=60017,
    WALLOPER=60018,
    TESLA_CLAW=60019,
    GLOVE_OF_DOOM=60020,
    MORPH_O_RAY=60021,
    HYDRODISPLACER=60022,
    RYNO=60023,
    DRONE_DEVICE=60024,
    DECOY=60025,
    TRESPASSER=60026,
    METAL_DETECTOR=60027,
    MAGNEBOOTS=60028,
    GRINDBOOTS=60029,
    HOVERBOARD=60030,
    HOLOGUISE=60031,
    PDA=60032,
    KEY_ITEMS=60104,
    UPGRADE_ITEMS=60105
} enum_1;


/* WARNING! conflicting data type names: /gameglobals.h/enum_1 - /TEXCATEGORIES.h/enum_1 */


/* WARNING! conflicting data type names: /stringids.h/enum_1 - /TEXCATEGORIES.h/enum_1 */

typedef double f64;

typedef struct FontWindow FontWindow, *PFontWindow;

struct FontWindow { /* DL struct FontWindow; verified by SetFontWindow 0x6ac90 */
    short win_top;
    short win_bot;
    short win_left;
    short win_right;
    short text_x;
    short text_y;
    short max_width;
    short max_height;
    short line_spacing;
    short flags;
    short sub_pixel_x;
    short sub_pixel_y;
    undefined field12_0x18;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
};

typedef struct GAMECAMERA GAMECAMERA, *PGAMECAMERA;

struct GAMECAMERA {
    struct Mtx4 mtx0;
    struct Mtx4 matrix;
    struct Mtx4 mtx2;
    struct Mtx4 mtx3;
    struct Mtx4 mtx4;
    float posX;
    float posY;
    float posZ;
    char field8_0x14c[4];
    struct PolarSm rot;
    char field10_0x15c[4];
    struct CamOffsetRec offset0;
    struct CamOffsetRec offset1;
    void *pCurrentUpdCam;
    void *pLastUpdCam;
    char field15_0x188[40];
    float field16_0x1b0;
    char field17_0x1b4[164];
    float screenFade;
    char field19_0x25c[20];
    struct CamBlender blender;
    struct CameraMatrix orientMtx;
    char field22_0x390[4];
    u32 camUnderWater;
    u32 camTimer;
};

typedef enum enum_1 gameMode_t;

typedef struct GameSettings GameSettings, *PGameSettings;

struct GameSettings {
    dword CameraUpDown;
    dword CameraLeftRight;
    dword CameraSpeed;
    dword Stereo;
    dword MusicVolume;
    dword SfxVolume;
};

typedef struct GSMEM_UNUSED GSMEM_UNUSED, *PGSMEM_UNUSED;

struct GSMEM_UNUSED {
    int display;
    int draw;
    int zbuf;
    int base;
};

typedef struct HeroCollCell HeroCollCell, *PHeroCollCell;

struct HeroCollCell { /* Hero-only collision cell (camera passes through). Coords are u16 = world*64. data -> HeroCollVert[vertCount] then HeroCollTri-style 4-byte index records[triCount]. data is relocated to an absolute pointer by ParseColl. */
    short bsphereX;
    short bsphereY;
    short bsphereZ;
    short bsphereRad;
    short triCount;
    short vertCount;
    void *data;
};

typedef struct HeroCollHeader HeroCollHeader, *PHeroCollHeader;

struct HeroCollHeader { /* Hero collision block: cellCount, 12 bytes pad, then HeroCollCell[cellCount]. */
    int cellCount;
    int pad[3];
    struct HeroCollCell cells[1];
};

typedef struct HeroCollVert HeroCollVert, *PHeroCollVert;

struct HeroCollVert { /* u16 coords = world*64 */
    short x;
    short y;
    short z;
    short pad;
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    int h_addrtype;
    int h_length;
    char **h_addr_list;
};

typedef struct HudElement HudElement, *PHudElement;

struct HudElement { /* RC1 HUD entry, 13 x 0x90 at HudEntries (existing HudEntry[13] type is 0x20-stride and wrong). Offsets from HudEntry_Reset/CalcNumberSize/ApplyAlignment/ShowEntryById. */
    int iconId;
    int value;
    int maxValue;
    int *pValue;
    void *initCb;
    void *updateCb;
    void *drawCb;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    int regIconId;
    int regValue;
    int regMaxValue;
    int *regPValue;
    void *regInitCb;
    void *regUpdateCb;
    void *regDrawCb;
    undefined field18_0x3c;
    undefined field19_0x3d;
    undefined field20_0x3e;
    undefined field21_0x3f;
    short iconIdx;
    char iconBaseIdx;
    undefined field24_0x43;
    int iconVariantsCnt;
    short offsX;
    short offsY;
    undefined field28_0x4c;
    undefined field29_0x4d;
    undefined field30_0x4e;
    undefined field31_0x4f;
    int x;
    int y;
    int width;
    int height;
    int alignFlags;
    undefined field37_0x64;
    undefined field38_0x65;
    undefined field39_0x66;
    undefined field40_0x67;
    int locked;
    int id;
    char animA;
    char animB;
    undefined field45_0x72;
    undefined field46_0x73;
    int displayedValue;
    int targetValue;
    int showTimer;
    undefined field50_0x80;
    undefined field51_0x81;
    undefined field52_0x82;
    undefined field53_0x83;
    undefined field54_0x84;
    undefined field55_0x85;
    undefined field56_0x86;
    undefined field57_0x87;
    undefined field58_0x88;
    undefined field59_0x89;
    undefined field60_0x8a;
    undefined field61_0x8b;
    undefined field62_0x8c;
    undefined field63_0x8d;
    undefined field64_0x8e;
    undefined field65_0x8f;
};

typedef struct HudEntry HudEntry, *PHudEntry;

struct HudEntry {
    dword ctx;
    dword pad;
    dword pad2;
    dword pad3;
    void *ptr1;
    void *ptr2;
    void *callbackPtr;
    dword field7_0x1c;
};

typedef struct IceSheet IceSheet, *PIceSheet;

typedef int int32_t;

struct IceSheet {
    struct BSphere bSphere;
    int32_t meshParamA;
    float *vertexData;
    int32_t meshParamB;
    int32_t vertexCount;
};

typedef struct IconTableEntries IconTableEntries, *PIconTableEntries;

struct IconTableEntries {
    ushort iconId;
    ushort unknown;
    ushort variantsCnt;
    ushort baseIdx;
};

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

typedef longlong int16;

typedef enum ITEM_ENUM {
    UNK_00=0,
    UNK_01=1,
    HELI_PACK=2,
    THRUSTER_PACK=3,
    HYDRO_PACK=4,
    SONIC_SUMMONER=5,
    O2_MASK=6,
    PILOTS_HELMET=7,
    WRENCH=8,
    SUCK_CANNON=9,
    BOMB_GLOVE=10,
    DEVASTATOR=11,
    SWINGSHOT=12,
    VISIBOMB_GUN=13,
    TAUNTER=14,
    BLASTER=15,
    PYROCITOR=16,
    MINEGLOVE=17,
    WALLOPER=18,
    TESLA_CLAW=19,
    GLOVE_OF_DOOM=20,
    MORPH_O_RAY=21,
    HYDRODISPLACER=22,
    RYNO=23,
    DRONE_DEVICE=24,
    DECOY_GLOVE=25,
    TRESPASSER=26,
    METAL_DETECTOR=27,
    MAGNEBOOTS=28,
    GRINDBOOTS=29,
    HOVERBOARD=30,
    HOLOGUISE=31,
    PDA=32,
    MAPOMATIC=33,
    BOLT_GRABBER=34,
    PERSUADER=35
} ITEM_ENUM;

typedef struct Items Items, *PItems;


/* WARNING! conflicting data type names: /EBOOT.ELF.h/undefined - /undefined */

struct Items {
    undefined field0_0x0;
    undefined field1_0x1;
    bool heliPack;
    bool thrusterPack;
    bool hydroPack;
    bool sonicSummoner;
    bool o2Mask;
    bool pilotsHelmet;
    bool missingNo1;
    bool suckCannon;
    bool bombGlove;
    bool devastator;
    bool swingshot;
    bool visibombGun;
    bool taunter;
    bool blaster;
    bool pyrocitor;
    bool mineGlove;
    bool walloper;
    bool teslaClaw;
    bool gloveOfDoom;
    bool morphORay;
    bool hydrodisplacer;
    bool ryno;
    bool droneDevice;
    bool decoyGlove;
    bool trespasser;
    bool metalDetector;
    bool magneboots;
    bool grindboots;
    bool hoverboard;
    bool hologuise;
    bool pda;
    bool mapOMatic;
    bool boltGrabber;
    bool persuader;
    bool field36_0x24;
};

typedef struct Items32 Items32, *PItems32;

struct Items32 {
    uint field0_0x0;
    uint field1_0x1;
    dword heliPack;
    dword thrusterPack;
    dword hydroPack;
    dword sonicSummoner;
    dword o2Mask;
    dword pilotsHelmet;
    dword missingNo1;
    dword suckCannon;
    dword bombGlove;
    dword devastator;
    dword swingshot;
    dword visibombGun;
    dword taunter;
    dword blaster;
    dword pyrocitor;
    dword mineGlove;
    dword walloper;
    dword teslaClaw;
    dword gloveOfDoom;
    dword morphORay;
    dword hydrodisplacer;
    dword ryno;
    dword droneDevice;
    dword decoyGlove;
    dword trespasser;
    dword metalDetector;
    dword magneboots;
    dword grindboots;
    dword hoverboard;
    dword hologuise;
    dword pda;
    dword mapOMatic;
    dword boltGrabber;
    dword persuader;
    dword field36_0x24;
};

typedef struct KickVars KickVars, *PKickVars;

struct KickVars { /* DL struct KickVars (mobyutil.cpp) */
    float kickVel[4];
    float grav;
    float drag;
    float xySpeed;
    float zSpeed;
    int radius;
    int flag;
    float zOfs;
    short timeout;
    char effectType;
    char effectPrimMask;
    float xyBounceDamp;
    float zBounceDamp;
    float wallBounceDamp;
    char kickActive;
    char type;
    short stage;
    float faceAng;
    float faceSpeed;
    float faceLimit;
    float minXySpeed;
    float peakFrame;
    undefined field22_0x54;
    undefined field23_0x55;
    undefined field24_0x56;
    undefined field25_0x57;
    undefined field26_0x58;
    undefined field27_0x59;
    undefined field28_0x5a;
    undefined field29_0x5b;
    undefined field30_0x5c;
    undefined field31_0x5d;
    undefined field32_0x5e;
    undefined field33_0x5f;
};

typedef struct LevelCamData LevelCamData, *PLevelCamData;

typedef struct LevelCamInner LevelCamInner, *PLevelCamInner;

struct LevelCamInner {
    char pad_00[96];
    f32 dir80[4];
    char pad_70[8];
    f32 f98;
    char pad_7C[500];
    f32 dir290[4];
    char pad_280[80];
    f32 waterHeight;
    char pad_2D4[8];
    u32 pCollMoby;
    char pad_2E0[1428];
    u32 bestTimeRef;
    char pad_898[2];
    u16 rank;
    char pad_89C[12];
    u32 hiScore;
    char pad_8AC[20];
    u32 ordinal;
    char pad_8C4[2592];
    u8 hotSpotWater;
    u8 hotSpotLava;
    u8 hotSpotQuickSand;
    char pad_12C7[4];
    u8 hotSpotDeathSand;
    u8 hotSpotIceWater;
    char pad_12CD[3479];
    int heroState;
    char pad_2068[4];
    u32 heroStateType;
    char pad_2070[500];
    int i2284;
    char pad_2268[136];
};

struct LevelCamData {
    char pad_00[32];
    struct LevelCamInner inner;
};

typedef struct LevelCollHeader LevelCollHeader, *PLevelCollHeader;

struct LevelCollHeader { /* Level collision block header (Replanetizer Collision ctor). Offsets are relative to this header. +0x8 (Replanetizer 'unknown' collision) is never read by RC1 PS3. */
    int envGridOffset;
    int heroCollOffset;
    int unkCollOffset;
    int pad;
};

typedef enum LevelId {
    Veldin=0,
    Novalis=1,
    Aridia=2,
    Kerwan=3,
    Eudora=4,
    Rilgar=5,
    Blarg=6,
    Umbris=7,
    Batalia=8,
    Gaspar=9,
    Orxon=10,
    Pokitaru=11,
    Hoven=12,
    Gemlik=13,
    Oltanis=14,
    Quartu=15,
    Kalebo=16,
    Fleet=17,
    Veldin2=18
} LevelId;


/* WARNING! conflicting data type names: /EBOOT.ELF.h/longlong - /longlong */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/longlong - /longlong */


/* WARNING! conflicting data type names: /item.h/longlong - /longlong */


/* WARNING! conflicting data type names: /ocean.h/longlong - /longlong */


/* WARNING! conflicting data type names: /playerstate (1).h/longlong - /longlong */


/* WARNING! conflicting data type names: /sps.h/longlong - /longlong */


/* WARNING! conflicting data type names: /stringids.h/longlong - /longlong */


/* WARNING! conflicting data type names: /yo.h/longlong - /longlong */

typedef struct __mbstate_t mbstate_t;

typedef struct mc_data mc_data, *Pmc_data;

struct mc_data { /* DL struct mc_data (memcard.cpp): save chunk descriptor, list terminated by addr==0 */
    void *addr;
    int size;
    int iff;
    int mark;
};

typedef struct MiscLevelFlags MiscLevelFlags, *PMiscLevelFlags;

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

typedef struct Mission Mission, *PMission;

struct Mission {
    short id;
    short pad[7];
    short flags;
    short descBase;
    short status;
    short step;
    short stepText;
};

typedef struct Moby Moby, *PMoby;

struct Moby {
};

typedef struct Moby1267Vars Moby1267Vars, *PMoby1267Vars;

struct Moby1267Vars { /* pVars of oClass 1267 (mounted turret used by UpdateMoby_1267). Offsets from PS3 code; no DL equivalent. */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    int targetIdx[10];
    undefined field65_0x68;
    undefined field66_0x69;
    undefined field67_0x6a;
    undefined field68_0x6b;
    undefined field69_0x6c;
    undefined field70_0x6d;
    undefined field71_0x6e;
    undefined field72_0x6f;
    short fireTimer;
    short unk72;
    float pitch;
    float pitchVel;
    float yawVel;
    int barrelSide;
    int unk84;
    int lockTimer;
    float health;
    int hitTimer;
    int bossIdx;
    int soundHandle;
    undefined field85_0x9c;
    undefined field86_0x9d;
    undefined field87_0x9e;
    undefined field88_0x9f;
    float baseZ;
    float yawSmooth;
    undefined field91_0xa8;
    undefined field92_0xa9;
    undefined field93_0xaa;
    undefined field94_0xab;
    short deathTimer;
    short shakeTimer;
};

typedef struct moby_update moby_update, *Pmoby_update;

struct moby_update { /* PlaceHolder Class Structure */
};

typedef struct MobyAnimLayer MobyAnimLayer, *PMobyAnimLayer;

struct MobyAnimLayer {
    struct MobySeq *animSeq;
    float animSeqT;
    float animSpeed;
    short animIScale;
    short poseCacheEntryIndex;
    struct MobyAnimLayer *nextLayer;
    char animSeqId;
    char animFlags;
    char animJointIndexA;
    char animJointIndexB;
    float blendWeight;
    float blendFade;
};

typedef struct MobyCollHeader MobyCollHeader, *PMobyCollHeader;

struct MobyCollHeader { /* MobyInstance.collision (+0x94). +0x10: CollPrim[primBytes/32] (spheres/pills attached to joints); then at (this+primBytes+0x10): verts float[4][vertBytes/16] (x1024 local), then CollTri[triBytes/4]. primSetA/B = joint counts selecting prim set (COLL_ALT_PRIMSET picks A). Moby collision is in x1024 space like env. */
    short primSetA;
    short primSetB;
    int primBytes;
    int triBytes;
    int vertBytes;
};

typedef struct MobyGridCell MobyGridCell, *PMobyGridCell;

struct MobyGridCell { /* Moby broadphase grid cell (64x64, XY, 16 world units). listStart in 32-byte blocks of g_MobyGridLists (16 moby indices per block). */
    short listStart;
    char count;
    char blocks;
};

typedef struct MobyVTable MobyVTable, *PMobyVTable;

struct MobyVTable {
    uint idx;
    void **update;
    void **exit;
};

typedef struct music_Playing music_Playing, *Pmusic_Playing;

struct music_Playing { /* DL struct music_Playing (PS3 is 0x1c, no pMoby/channel/timer); instances at 0x963708/0x963724/0x963740 */
    int handle;
    short track;
    short volume;
    short flags;
    short status;
    short pause;
    short unpause;
    short transition;
    short fade;
    int queuelen;
    int remain;
};

typedef struct OcclCamParamBlock OcclCamParamBlock, *POcclCamParamBlock;

typedef ulong u64;

struct OcclCamParamBlock {
    u8 pad_000[48];
    u64 giftagDrawLarge;
    u8 pad_038[136];
    u64 giftagDrawSmall;
    u8 pad_0C8[136];
    u16 drawW;
    u16 drawH;
    u16 pad_154;
    u16 pad_156;
    s16 zbufW;
    s16 zbufH;
    s16 pad_15C;
    s16 pad_15E;
    s16 pad_160;
    s16 pad_162;
    s16 pad_164;
    s16 pad_166;
    s16 pad_168;
    s16 pad_16A;
    s16 pad_16C;
    s16 effectBufBaseGs;
    u32 pad_170;
};

typedef struct OcclCamState OcclCamState, *POcclCamState;

typedef int s32;

struct OcclCamState {
    u8 pad_04[4];
    u32 bits1;
    u32 bits0;
    u32 state;
    u32 subState;
    u32 staged;
    u32 step1;
    u32 step2;
    u32 flagA;
    u32 flagB;
    u32 flagC;
    u32 stepD;
    u32 flagE;
    u32 flagF;
    u32 stepG;
    u32 index;
    u8 pad_40[68];
    f32 angleA;
    f32 angleB;
    f32 angleC;
    f32 angleD;
    s32 posIntX;
    s32 posIntY;
    s32 posIntZ;
    u8 pad_a0[4];
    u32 bgColorCache;
    u8 pad_a8[72];
    u32 toggleH;
    u32 toggleI;
    u8 logFlag0;
    u8 logFlag1;
    u8 pad_fa[6];
};

typedef struct OcclViewParams OcclViewParams, *POcclViewParams;

struct OcclViewParams {
    s32 paramX;
    s32 paramY;
    s32 halfX;
    s32 halfY;
    s32 minX;
    s32 minY;
    s32 maxX;
    s32 maxY;
};

typedef struct OceanPlane OceanPlane, *POceanPlane;


/* WARNING! conflicting data type names: /ocean.h/ushort - /ushort */


/* WARNING! conflicting data type names: /ocean.h/uchar - /uchar */

typedef uchar uint8_t;


/* WARNING! conflicting data type names: /ocean.h/undefined - /undefined */

struct OceanPlane {
    float x;
    float y;
    float z;
    float field3_0xc;
    float scaleX;
    float scaleY;
    ushort cellsX;
    ushort cellsY;
    void *wave_table;
    float fogNearDist;
    float fogFarDist;
    float fogNearIntensity;
    float fogFarIntensity;
    uint8_t fogR;
    undefined fogG;
    undefined fogB;
    byte field16_0x33;
    void *vertex_color_ptr;
    char *occupied_ocean_cells;
    ushort tex_offset;
    byte num_texs_to_cycle;
    byte depth;
};

typedef struct PartInstance PartInstance, *PPartInstance;

struct PartInstance {
    char iClass;
    byte type;
    byte tex;
    byte gsAlpha;
    uint color;
    char rot;
    char drawDist;
    short timer;
    float scale;
    struct Vec4 pos;
    int update[8];
};

typedef struct partupd partupd, *Ppartupd;

struct partupd { /* PlaceHolder Class Structure */
};

typedef struct PathFollower PathFollower, *PPathFollower;

typedef struct Spline Spline, *PSpline;

struct PathFollower {
    s32 idx;
    u8 direction;
    u8 state;
    u16 flags;
    float timer;
    float distance;
    struct Spline *pSpline;
    s32 splineIdx;
    float head;
};

struct Spline {
    int32_t cnt;
    int32_t cap;
    int32_t cursor;
    float zOff;
    struct Vec4 points[30];
};

typedef struct PL_Data PL_Data, *PPL_Data;

struct PL_Data {
    short tieOffset;
    short tieCnt;
    short shrubOffset;
    short shrubCnt;
    short tfragOffset;
    short tfragCnt;
    short *list;
    struct Vec4 updatePos;
    int state;
};

typedef struct Planets Planets, *PPlanets;

struct Planets {
    char Veldin;
    char Novalis;
    char Aridia;
    char Kerwan;
    char Eudora;
    char Rilgar;
    byte BlargStation;
    byte Umbris;
    byte Batalia;
    byte Gaspar;
    char Orxon;
    byte Pokitaru;
    byte Hoven;
    byte Gemlik;
    byte Oltanis;
    byte Quartu;
    byte Kalebo;
    byte Fleet;
    byte VeldinRevisit;
    byte Unk;
};

typedef struct Planets32 Planets32, *PPlanets32;

struct Planets32 {
    dword Veldin;
    dword Novalis;
    dword Aridia;
    dword Kerwan;
    dword Eudora;
    dword Rilgar;
    dword BlargStation;
    dword Umbris;
    dword Batalia;
    dword Gaspar;
    dword Orxon;
    dword Pokitaru;
    dword Hoven;
    dword Gemlik;
    dword Oltanis;
    dword Quartu;
    dword Kalebo;
    dword Fleet;
    dword VeldinRevisit;
};

typedef struct PlanetsPage PlanetsPage, *PPlanetsPage;

struct PlanetsPage {
    uint nameId;
    uint subPlanetNameId;
    uint value;
};

typedef enum PlayerState {
    STANDING=0,
    FIRST_PERSON_VIEW=1,
    WALKING=2,
    STOPPING=3,
    CROUCHING=4,
    UNK_5=5,
    NEUTRAL_JUMP=6,
    GLIDING=7,
    FALLING=8,
    MOVEMENT_JUMP=9,
    HELI_PACK_FWD_JUMP=10,
    FLIP_JUMP=11,
    UNK_C=12,
    THRUSTER_PACK_HIGH_JUMP=13,
    DOUBLE_JUMP=14,
    HELI_PACK_HIGH_JUMP=15,
    THRUSTER_PACK_FORWARD_JUMP=16,
    WALL_JUMP=17,
    WATER_JUMP=18,
    WRENCH_ATTACK=19,
    HYPER_STRIKE=20,
    CROUCH_WRENCH_THROW=21,
    TAKING_DAMAGE=22,
    UNK_17=23,
    EDGE_GRAB=24,
    EDGE_HANG=25,
    EDGE_HANG_MOVE_LEFT=26,
    EDGE_HANG_MOVE_RIGHT=27,
    EDGE_JUMP=28,
    VISIBOMB_CONTROL=29,
    WEAPON_FIRST_PERSON_VIEW=30,
    ACTIVATE_SONIC_SUMMONER_MOUSE=31,
    WALLOPER_SOMETHING=32,
    UNK_BONK=33,
    THRUSTER_PACK_BONK_JUMP=34,
    THROWING_ITEM=35,
    THROWING_GREEN_SWINGSHOT=36,
    PULLING_GREEN_SWINGSHOT=37,
    UNK_26=38,
    UNK_27=39,
    GRINDRAIL_USE=40,
    GRINDRAIL_JUMP=41,
    GRINDRAIL_SWITCH=42,
    GRINDRAIL_WRENCH_ATTACK=43,
    SWINGING_YELLOW_SWINGSHOT=44,
    DISENGAGE_YELLOW_SWINGSHOT=45,
    UNK_2E=46,
    ICE_SLIDING=47,
    UNK_30=48,
    WATER_SLIDING=49,
    TURRET_PLANE_UI=50,
    UNDERWATER_MOVING=51,
    UNDERWATER_STANDING=52,
    HYDRO_PACK_MOVING=53,
    WATER_SWIMMING=54,
    UNK_37=55,
    HYDRODISPLACER_CONNECTING=56,
    HYDRODISPLACER_WAITING=57,
    HYDRODISPLACER_DISCONNECTING=58,
    BOLT_CRANK_TURNING=59,
    TAKING_DAMAGE_LAVA=60,
    DYING_GROUNDED=61,
    UNK_3E=62,
    MAGNERAMP_WAITING=63,
    UNK_40=64,
    UNK_41=65,
    GRINDRAIL_DAMAGE=66,
    CLANK_STANDING=67,
    CLANK_WALKING=68,
    CLANK_FALLING=69,
    CLANK_DAMAGE=70,
    CLANK_DYING=71,
    UNK_48=72,
    CLANK_JUMP=73,
    CLANK_EDGE_ENGAGING=74,
    CLANK_EDGE_HANG=75,
    CLANK_EDGE_JUMP=76,
    CLANK_EDGE_MOVE_LEFT=77,
    CLANK_EDGE_MOVE_RIGHT=78,
    CLANK_GLIDING=79,
    UNK_50=80,
    CLANK_ATTACK=81,
    UNK_52=82,
    HOLOGUISE_STANDING=83,
    HOLOGUISE_WALKING=84,
    UNK_55=85,
    UNK_56=86,
    HOLOGUISE_DYING=87,
    UNK_58=88,
    HOLOGUISE_WAVE=89,
    GIANT_CLANK_STANDING=90,
    GIANT_CLANK_WALKING=91,
    GIANT_CLANK_FALLING=92,
    GIANT_CLANK_DAMAGE=93,
    GIANT_CLANK_JUMP=94,
    GIANT_CLANK_FIRE_WEAPONS=95,
    GIANT_CLANK_ATTACK=96,
    GIANT_CLANK_CHARGE_ATTACK=97,
    GIANT_CLANK_DYING=98,
    UNK_63=99,
    CUSTOM_UI=100,
    ANIM_TARGET_WALK=101,
    UNK_66=102,
    TELEPORTER_USE=103,
    MUD_SINKING=104,
    MUD_JUMP=105,
    DEATH_DROWNING=106,
    HOVERBOARD_RIDING=107,
    HOVEDBOARD_JUMP=108,
    HOVERBOARD_DYING=109,
    HOVERBOARD_WATER_DYING=110,
    HOVERBOARD_WALL_BONK=111,
    MAGNERAMP_ATTACK=112,
    MAGNERAMP_JUMP=113,
    MOVEMENT_LOCKED=114,
    WATER_WALKING=115,
    UNK_74=116,
    UNK_75=117,
    UNDERWATER_DAMAGE=118,
    DEATH_FALLING=119,
    UNK_78=120,
    SLIDING_OFF_SOMETHING=121,
    WALL_BONK=122,
    DEATH_MUD=123,
    DEATH_LAVA=124,
    UNK_7D=125,
    UNK_7E=126,
    DEATH_ICE=127,
    DEATH_LASER=128,
    THRUSTER_PACK_HOVER=129,
    DEATH_WATER_LASER=130
} PlayerState;

typedef struct PointLight PointLight, *PPointLight;

struct PointLight {
    struct Vec4 color;
    struct Vec4 pos;
};

typedef struct SKY SKY, *PSKY;

typedef struct sky_shell sky_shell, *Psky_shell;

typedef struct sky_cluster sky_cluster, *Psky_cluster;

struct SKY {
    int pad;
    short clear_screen;
    short shell_cnt;
    short sprite_cnt;
    short sprite_max;
    short tex_cnt;
    short fx_cnt;
    void *tex_defs;
    void *vtx_data;
    void *idx_data;
    struct sky_shell *shells[8];
};

struct sky_cluster {
    void *tex;
    dword idx_start;
    dword idx_cnt;
    dword field3_0xc;
};

struct sky_shell {
    ushort flags;
    word clusterCnt;
    uint pad[3];
    struct sky_cluster cluster;
};


/* WARNING! conflicting data type names: /yo.h/vec4 - /legdata.h/vec4 */

typedef struct w_2legAnim w_2legAnim, *Pw_2legAnim;

struct w_2legAnim {
    int anim;
    float stride;
    float speed;
    float frame0;
    float frames;
    int fromIdle;
    float move1Reset;
    float move2Reset;
    float heelRange[2];
    float heelDown[2];
    float heelUp[2];
    float footRange[2];
    float footDown[2];
    float footUp[2];
};

typedef struct w_2legData w_2legData, *Pw_2legData;

typedef struct w_legData w_legData, *Pw_legData;

struct w_legData {
    char jiFoot;
    char jiHeel;
    char jiAnkle;
    char jiHip;
    short idle;
    short _2mainIdle;
    float frDest;
    float arAct;
    float arSpeed;
    float hrAct;
    float hrSpeed;
    float twistLow;
    float twistHigh;
    int pad[3];
    struct Manipulator MAnkle;
    struct Manipulator MHip;
};

struct w_2legData {
    struct vec4 fpos[6];
    struct vec4 jumpPos;
    struct w_2legAnim *anims[13];
    int pad[3];
    char idle;
    char stand;
    char jumpc;
    char rjumpc;
    char moveJoint1;
    char moveJoint2;
    char onground;
    char state;
    float yrot;
    float yrSpeed;
    float speed;
    float acc;
    float angVel;
    float angGain;
    float angDamp;
    float angLimit;
    float zVel;
    float grav;
    float stepHeight;
    float stepZ;
    float collZAdj;
    short counter;
    short flags;
    struct w_legData legs[2];
};


/* WARNING! conflicting data type names: /EBOOT.ELF.h/qword - /qword */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/qword - /qword */


/* WARNING! conflicting data type names: /item.h/qword - /qword */


/* WARNING! conflicting data type names: /ocean.h/qword - /qword */


/* WARNING! conflicting data type names: /playerstate (1).h/qword - /qword */


/* WARNING! conflicting data type names: /sps.h/qword - /qword */


/* WARNING! conflicting data type names: /stringids.h/qword - /qword */


/* WARNING! conflicting data type names: /yo.h/qword - /qword */

typedef enum RENDER {
    Sky=1,
    Tfrags=2,
    Ties=4,
    Shrubs=8,
    Ocean=32,
    Screen_Overlays=64,
    HUD=128
} RENDER;

typedef struct RenderingStep RenderingStep, *PRenderingStep;

typedef enum RsxCmd {
    NV4097_SET_OBJECT_x1=262144,
    NV4097_NO_OPERATION_x1=262400,
    NV4097_NOTIFY_x1=262404,
    NV4097_WAIT_FOR_IDLE_x1=262416,
    NV4097_PM_TRIGGER_x1=262464,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x1=262528,
    NV4097_SET_CONTEXT_DMA_A_x1=262532,
    NV4097_SET_CONTEXT_DMA_B_x1=262536,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x1=262540,
    NV4097_SET_CONTEXT_DMA_STATE_x1=262544,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x1=262548,
    NV4097_SET_CONTEXT_DMA_ZETA_x1=262552,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x1=262556,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x1=262560,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x1=262564,
    NV4097_SET_CONTEXT_DMA_REPORT_x1=262568,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x1=262572,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x1=262576,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x1=262580,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x1=262584,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x1=262656,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x1=262660,
    NV4097_SET_SURFACE_FORMAT_x1=262664,
    NV4097_SET_SURFACE_PITCH_A_x1=262668,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x1=262672,
    NV4097_SET_SURFACE_ZETA_OFFSET_x1=262676,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x1=262680,
    NV4097_SET_SURFACE_PITCH_B_x1=262684,
    NV4097_SET_SURFACE_COLOR_TARGET_x1=262688,
    NV4097_SET_SURFACE_PITCH_Z_x1=262700,
    NV4097_INVALIDATE_ZCULL_x1=262708,
    NV4097_SET_CYLINDRICAL_WRAP_x1=262712,
    NV4097_SET_CYLINDRICAL_WRAP1_x1=262716,
    NV4097_SET_SURFACE_PITCH_C_x1=262784,
    NV4097_SET_SURFACE_PITCH_D_x1=262788,
    NV4097_SET_SURFACE_COLOR_COFFSET_x1=262792,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x1=262796,
    NV4097_SET_WINDOW_OFFSET_x1=262840,
    NV4097_SET_WINDOW_CLIP_TYPE_x1=262844,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x1=262848,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x1=262852,
    NV4097_SET_DITHER_ENABLE_x1=262912,
    NV4097_SET_ALPHA_TEST_ENABLE_x1=262916,
    NV4097_SET_ALPHA_FUNC_x1=262920,
    NV4097_SET_ALPHA_REF_x1=262924,
    NV4097_SET_BLEND_ENABLE_x1=262928,
    NV4097_SET_BLEND_FUNC_SFACTOR_x1=262932,
    NV4097_SET_BLEND_FUNC_DFACTOR_x1=262936,
    NV4097_SET_BLEND_COLOR_x1=262940,
    NV4097_SET_BLEND_EQUATION_x1=262944,
    NV4097_SET_COLOR_MASK_x1=262948,
    NV4097_SET_STENCIL_TEST_ENABLE_x1=262952,
    NV4097_SET_STENCIL_MASK_x1=262956,
    NV4097_SET_STENCIL_FUNC_x1=262960,
    NV4097_SET_STENCIL_FUNC_REF_x1=262964,
    NV4097_SET_STENCIL_FUNC_MASK_x1=262968,
    NV4097_SET_STENCIL_OP_FAIL_x1=262972,
    NV4097_SET_STENCIL_OP_ZFAIL_x1=262976,
    NV4097_SET_STENCIL_OP_ZPASS_x1=262980,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x1=262984,
    NV4097_SET_BACK_STENCIL_MASK_x1=262988,
    NV4097_SET_BACK_STENCIL_FUNC_x1=262992,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x1=262996,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x1=263000,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x1=263004,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x1=263008,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x1=263012,
    NV4097_SET_SHADE_MODE_x1=263016,
    NV4097_SET_BLEND_ENABLE_MRT_x1=263020,
    NV4097_SET_COLOR_MASK_MRT_x1=263024,
    NV4097_SET_LOGIC_OP_ENABLE_x1=263028,
    NV4097_SET_LOGIC_OP_x1=263032,
    NV4097_SET_BLEND_COLOR2_x1=263036,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x1=263040,
    NV4097_SET_DEPTH_BOUNDS_MIN_x1=263044,
    NV4097_SET_DEPTH_BOUNDS_MAX_x1=263048,
    NV4097_SET_CLIP_MIN_x1=263060,
    NV4097_SET_CLIP_MAX_x1=263064,
    NV4097_SET_CONTROL0_x1=263088,
    NV4097_SET_LINE_WIDTH_x1=263096,
    NV4097_SET_LINE_SMOOTH_ENABLE_x1=263100,
    NV4097_SET_ANISO_SPREAD_x1=263104,
    NV4097_SET_SCISSOR_HORIZONTAL_x1=264384,
    NV4097_SET_SCISSOR_VERTICAL_x1=264388,
    NV4097_SET_FOG_MODE_x1=264396,
    NV4097_SET_FOG_PARAMS_x1=264400,
    NV4097_SET_SHADER_PROGRAM_x1=264420,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x1=264448,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x1=264452,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x1=264456,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x1=264460,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x1=264464,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x1=264468,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x1=264472,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x1=264476,
    NV4097_SET_VIEWPORT_HORIZONTAL_x1=264704,
    NV4097_SET_VIEWPORT_VERTICAL_x1=264708,
    NV4097_SET_POINT_CENTER_MODE_x1=264716,
    NV4097_ZCULL_SYNC_x1=264732,
    NV4097_SET_VIEWPORT_OFFSET_x1=264736,
    NV4097_SET_VIEWPORT_SCALE_x1=264752,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x1=264800,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x1=264804,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x1=264808,
    NV4097_SET_DEPTH_FUNC_x1=264812,
    NV4097_SET_DEPTH_MASK_x1=264816,
    NV4097_SET_DEPTH_TEST_ENABLE_x1=264820,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x1=264824,
    NV4097_SET_POLYGON_OFFSET_BIAS_x1=264828,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x1=264832,
    NV4097_SET_TEXTURE_CONTROL2_x1=264960,
    NV4097_SET_TEX_COORD_CONTROL_x1=265024,
    NV4097_SET_TRANSFORM_PROGRAM_x1=265088,
    NV4097_SET_SPECULAR_ENABLE_x1=267304,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x1=267308,
    NV4097_CLEAR_ZCULL_SURFACE_x1=267320,
    NV4097_SET_PERFORMANCE_PARAMS_x1=267344,
    NV4097_SET_FLAT_SHADE_OP_x1=267348,
    NV4097_SET_EDGE_FLAG_x1=267356,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x1=267384,
    NV4097_SET_POLYGON_STIPPLE_x1=267388,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x1=267392,
    NV4097_SET_VERTEX_DATA3F_M_x1=267520,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1=267904,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x1=268048,
    NV4097_INVALIDATE_VERTEX_FILE_x1=268052,
    NV4097_PIPE_NOP_x1=268056,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x1=268088,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x1=268092,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1=268096,
    NV4097_CLEAR_REPORT_VALUE_x1=268232,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x1=268236,
    NV4097_GET_REPORT_x1=268288,
    NV4097_SET_ZCULL_STATS_ENABLE_x1=268292,
    NV4097_SET_BEGIN_END_x1=268296,
    NV4097_ARRAY_ELEMENT16_x1=268300,
    NV4097_ARRAY_ELEMENT32_x1=268304,
    NV4097_DRAW_ARRAYS_x1=268308,
    NV4097_INLINE_ARRAY_x1=268312,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x1=268316,
    NV4097_SET_INDEX_ARRAY_DMA_x1=268320,
    NV4097_DRAW_INDEX_ARRAY_x1=268324,
    NV4097_SET_FRONT_POLYGON_MODE_x1=268328,
    NV4097_SET_BACK_POLYGON_MODE_x1=268332,
    NV4097_SET_CULL_FACE_x1=268336,
    NV4097_SET_FRONT_FACE_x1=268340,
    NV4097_SET_POLY_SMOOTH_ENABLE_x1=268344,
    NV4097_SET_CULL_FACE_ENABLE_x1=268348,
    NV4097_SET_TEXTURE_CONTROL3_x1=268352,
    NV4097_SET_VERTEX_DATA2F_M_x1=268416,
    NV4097_SET_VERTEX_DATA2S_M_x1=268544,
    NV4097_SET_VERTEX_DATA4UB_M_x1=268608,
    NV4097_SET_VERTEX_DATA4S_M_x1=268672,
    NV4097_SET_TEXTURE_OFFSET_x1=268800,
    NV4097_SET_TEXTURE_FORMAT_x1=268804,
    NV4097_SET_TEXTURE_ADDRESS_x1=268808,
    NV4097_SET_TEXTURE_CONTROL0_x1=268812,
    NV4097_SET_TEXTURE_CONTROL1_x1=268816,
    NV4097_SET_TEXTURE_FILTER_x1=268820,
    NV4097_SET_TEXTURE_IMAGE_RECT_x1=268824,
    NV4097_SET_TEXTURE_BORDER_COLOR_x1=268828,
    NV4097_SET_VERTEX_DATA4F_M_x1=269312,
    NV4097_SET_COLOR_KEY_COLOR_x1=269568,
    NV4097_SET_SHADER_CONTROL_x1=269664,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x1=269668,
    NV4097_SET_SEMAPHORE_OFFSET_x1=269676,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x1=269680,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x1=269684,
    NV4097_SET_ZMIN_MAX_CONTROL_x1=269688,
    NV4097_SET_ANTI_ALIASING_CONTROL_x1=269692,
    NV4097_SET_SURFACE_COMPRESSION_x1=269696,
    NV4097_SET_ZCULL_EN_x1=269700,
    NV4097_SET_SHADER_WINDOW_x1=269704,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1=269708,
    NV4097_SET_COLOR_CLEAR_VALUE_x1=269712,
    NV4097_CLEAR_SURFACE_x1=269716,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x1=269720,
    NV4097_SET_CLEAR_RECT_VERTICAL_x1=269724,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x1=269732,
    NV4097_SET_RESTART_INDEX_ENABLE_x1=269740,
    NV4097_SET_RESTART_INDEX_x1=269744,
    NV4097_SET_LINE_STIPPLE_x1=269748,
    NV4097_SET_LINE_STIPPLE_PATTERN_x1=269752,
    NV4097_SET_VERTEX_DATA1F_M_x1=269888,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x1=269972,
    NV4097_SET_RENDER_ENABLE_x1=269976,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x1=269980,
    NV4097_SET_TRANSFORM_PROGRAM_START_x1=269984,
    NV4097_SET_ZCULL_CONTROL0_x1=269988,
    NV4097_SET_ZCULL_CONTROL1_x1=269992,
    NV4097_SET_SCULL_CONTROL_x1=269996,
    NV4097_SET_POINT_SIZE_x1=270048,
    NV4097_SET_POINT_PARAMS_ENABLE_x1=270052,
    NV4097_SET_POINT_SPRITE_CONTROL_x1=270056,
    NV4097_SET_TRANSFORM_TIMEOUT_x1=270072,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x1=270076,
    NV4097_SET_TRANSFORM_CONSTANT_x1=270080,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x1=270272,
    NV4097_SET_ATTRIB_COLOR_x1=270276,
    NV4097_SET_ATTRIB_TEX_COORD_x1=270280,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x1=270284,
    NV4097_SET_ATTRIB_UCLIP0_x1=270288,
    NV4097_SET_ATTRIB_UCLIP1_x1=270292,
    NV4097_INVALIDATE_L2_x1=270296,
    NV4097_SET_REDUCE_DST_COLOR_x1=270304,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x1=270312,
    NV4097_SET_SHADER_PACKER_x1=270316,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x1=270320,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x1=270324,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x1=270328,
    NV4097_SET_OBJECT_x2=524288,
    NV4097_NO_OPERATION_x2=524544,
    NV4097_NOTIFY_x2=524548,
    NV4097_WAIT_FOR_IDLE_x2=524560,
    NV4097_PM_TRIGGER_x2=524608,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x2=524672,
    NV4097_SET_CONTEXT_DMA_A_x2=524676,
    NV4097_SET_CONTEXT_DMA_B_x2=524680,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x2=524684,
    NV4097_SET_CONTEXT_DMA_STATE_x2=524688,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x2=524692,
    NV4097_SET_CONTEXT_DMA_ZETA_x2=524696,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x2=524700,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x2=524704,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x2=524708,
    NV4097_SET_CONTEXT_DMA_REPORT_x2=524712,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x2=524716,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x2=524720,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x2=524724,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x2=524728,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2=524800,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x2=524804,
    NV4097_SET_SURFACE_FORMAT_x2=524808,
    NV4097_SET_SURFACE_PITCH_A_x2=524812,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x2=524816,
    NV4097_SET_SURFACE_ZETA_OFFSET_x2=524820,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x2=524824,
    NV4097_SET_SURFACE_PITCH_B_x2=524828,
    NV4097_SET_SURFACE_COLOR_TARGET_x2=524832,
    NV4097_SET_SURFACE_PITCH_Z_x2=524844,
    NV4097_INVALIDATE_ZCULL_x2=524852,
    NV4097_SET_CYLINDRICAL_WRAP_x2=524856,
    NV4097_SET_CYLINDRICAL_WRAP1_x2=524860,
    NV4097_SET_SURFACE_PITCH_C_x2=524928,
    NV4097_SET_SURFACE_PITCH_D_x2=524932,
    NV4097_SET_SURFACE_COLOR_COFFSET_x2=524936,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x2=524940,
    NV4097_SET_WINDOW_OFFSET_x2=524984,
    NV4097_SET_WINDOW_CLIP_TYPE_x2=524988,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x2=524992,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x2=524996,
    NV4097_SET_DITHER_ENABLE_x2=525056,
    NV4097_SET_ALPHA_TEST_ENABLE_x2=525060,
    NV4097_SET_ALPHA_FUNC_x2=525064,
    NV4097_SET_ALPHA_REF_x2=525068,
    NV4097_SET_BLEND_ENABLE_x2=525072,
    NV4097_SET_BLEND_FUNC_SFACTOR_x2=525076,
    NV4097_SET_BLEND_FUNC_DFACTOR_x2=525080,
    NV4097_SET_BLEND_COLOR_x2=525084,
    NV4097_SET_BLEND_EQUATION_x2=525088,
    NV4097_SET_COLOR_MASK_x2=525092,
    NV4097_SET_STENCIL_TEST_ENABLE_x2=525096,
    NV4097_SET_STENCIL_MASK_x2=525100,
    NV4097_SET_STENCIL_FUNC_x2=525104,
    NV4097_SET_STENCIL_FUNC_REF_x2=525108,
    NV4097_SET_STENCIL_FUNC_MASK_x2=525112,
    NV4097_SET_STENCIL_OP_FAIL_x2=525116,
    NV4097_SET_STENCIL_OP_ZFAIL_x2=525120,
    NV4097_SET_STENCIL_OP_ZPASS_x2=525124,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x2=525128,
    NV4097_SET_BACK_STENCIL_MASK_x2=525132,
    NV4097_SET_BACK_STENCIL_FUNC_x2=525136,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x2=525140,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x2=525144,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x2=525148,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x2=525152,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x2=525156,
    NV4097_SET_SHADE_MODE_x2=525160,
    NV4097_SET_BLEND_ENABLE_MRT_x2=525164,
    NV4097_SET_COLOR_MASK_MRT_x2=525168,
    NV4097_SET_LOGIC_OP_ENABLE_x2=525172,
    NV4097_SET_LOGIC_OP_x2=525176,
    NV4097_SET_BLEND_COLOR2_x2=525180,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x2=525184,
    NV4097_SET_DEPTH_BOUNDS_MIN_x2=525188,
    NV4097_SET_DEPTH_BOUNDS_MAX_x2=525192,
    NV4097_SET_CLIP_MIN_x2=525204,
    NV4097_SET_CLIP_MAX_x2=525208,
    NV4097_SET_CONTROL0_x2=525232,
    NV4097_SET_LINE_WIDTH_x2=525240,
    NV4097_SET_LINE_SMOOTH_ENABLE_x2=525244,
    NV4097_SET_ANISO_SPREAD_x2=525248,
    NV4097_SET_SCISSOR_HORIZONTAL_x2=526528,
    NV4097_SET_SCISSOR_VERTICAL_x2=526532,
    NV4097_SET_FOG_MODE_x2=526540,
    NV4097_SET_FOG_PARAMS_x2=526544,
    NV4097_SET_SHADER_PROGRAM_x2=526564,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x2=526592,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x2=526596,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x2=526600,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x2=526604,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x2=526608,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x2=526612,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x2=526616,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x2=526620,
    NV4097_SET_VIEWPORT_HORIZONTAL_x2=526848,
    NV4097_SET_VIEWPORT_VERTICAL_x2=526852,
    NV4097_SET_POINT_CENTER_MODE_x2=526860,
    NV4097_ZCULL_SYNC_x2=526876,
    NV4097_SET_VIEWPORT_OFFSET_x2=526880,
    NV4097_SET_VIEWPORT_SCALE_x2=526896,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x2=526944,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x2=526948,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x2=526952,
    NV4097_SET_DEPTH_FUNC_x2=526956,
    NV4097_SET_DEPTH_MASK_x2=526960,
    NV4097_SET_DEPTH_TEST_ENABLE_x2=526964,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x2=526968,
    NV4097_SET_POLYGON_OFFSET_BIAS_x2=526972,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x2=526976,
    NV4097_SET_TEXTURE_CONTROL2_x2=527104,
    NV4097_SET_TEX_COORD_CONTROL_x2=527168,
    NV4097_SET_TRANSFORM_PROGRAM_x2=527232,
    NV4097_SET_SPECULAR_ENABLE_x2=529448,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x2=529452,
    NV4097_CLEAR_ZCULL_SURFACE_x2=529464,
    NV4097_SET_PERFORMANCE_PARAMS_x2=529488,
    NV4097_SET_FLAT_SHADE_OP_x2=529492,
    NV4097_SET_EDGE_FLAG_x2=529500,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x2=529528,
    NV4097_SET_POLYGON_STIPPLE_x2=529532,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x2=529536,
    NV4097_SET_VERTEX_DATA3F_M_x2=529664,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x2=530048,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x2=530192,
    NV4097_INVALIDATE_VERTEX_FILE_x2=530196,
    NV4097_PIPE_NOP_x2=530200,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x2=530232,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x2=530236,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x2=530240,
    NV4097_CLEAR_REPORT_VALUE_x2=530376,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x2=530380,
    NV4097_GET_REPORT_x2=530432,
    NV4097_SET_ZCULL_STATS_ENABLE_x2=530436,
    NV4097_SET_BEGIN_END_x2=530440,
    NV4097_ARRAY_ELEMENT16_x2=530444,
    NV4097_ARRAY_ELEMENT32_x2=530448,
    NV4097_DRAW_ARRAYS_x2=530452,
    NV4097_INLINE_ARRAY_x2=530456,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x2=530460,
    NV4097_SET_INDEX_ARRAY_DMA_x2=530464,
    NV4097_DRAW_INDEX_ARRAY_x2=530468,
    NV4097_SET_FRONT_POLYGON_MODE_x2=530472,
    NV4097_SET_BACK_POLYGON_MODE_x2=530476,
    NV4097_SET_CULL_FACE_x2=530480,
    NV4097_SET_FRONT_FACE_x2=530484,
    NV4097_SET_POLY_SMOOTH_ENABLE_x2=530488,
    NV4097_SET_CULL_FACE_ENABLE_x2=530492,
    NV4097_SET_TEXTURE_CONTROL3_x2=530496,
    NV4097_SET_VERTEX_DATA2F_M_x2=530560,
    NV4097_SET_VERTEX_DATA2S_M_x2=530688,
    NV4097_SET_VERTEX_DATA4UB_M_x2=530752,
    NV4097_SET_VERTEX_DATA4S_M_x2=530816,
    NV4097_SET_TEXTURE_OFFSET_x2=530944,
    NV4097_SET_TEXTURE_FORMAT_x2=530948,
    NV4097_SET_TEXTURE_ADDRESS_x2=530952,
    NV4097_SET_TEXTURE_CONTROL0_x2=530956,
    NV4097_SET_TEXTURE_CONTROL1_x2=530960,
    NV4097_SET_TEXTURE_FILTER_x2=530964,
    NV4097_SET_TEXTURE_IMAGE_RECT_x2=530968,
    NV4097_SET_TEXTURE_BORDER_COLOR_x2=530972,
    NV4097_SET_VERTEX_DATA4F_M_x2=531456,
    NV4097_SET_COLOR_KEY_COLOR_x2=531712,
    NV4097_SET_SHADER_CONTROL_x2=531808,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x2=531812,
    NV4097_SET_SEMAPHORE_OFFSET_x2=531820,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x2=531824,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x2=531828,
    NV4097_SET_ZMIN_MAX_CONTROL_x2=531832,
    NV4097_SET_ANTI_ALIASING_CONTROL_x2=531836,
    NV4097_SET_SURFACE_COMPRESSION_x2=531840,
    NV4097_SET_ZCULL_EN_x2=531844,
    NV4097_SET_SHADER_WINDOW_x2=531848,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x2=531852,
    NV4097_SET_COLOR_CLEAR_VALUE_x2=531856,
    NV4097_CLEAR_SURFACE_x2=531860,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x2=531864,
    NV4097_SET_CLEAR_RECT_VERTICAL_x2=531868,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x2=531876,
    NV4097_SET_RESTART_INDEX_ENABLE_x2=531884,
    NV4097_SET_RESTART_INDEX_x2=531888,
    NV4097_SET_LINE_STIPPLE_x2=531892,
    NV4097_SET_LINE_STIPPLE_PATTERN_x2=531896,
    NV4097_SET_VERTEX_DATA1F_M_x2=532032,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x2=532116,
    NV4097_SET_RENDER_ENABLE_x2=532120,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x2=532124,
    NV4097_SET_TRANSFORM_PROGRAM_START_x2=532128,
    NV4097_SET_ZCULL_CONTROL0_x2=532132,
    NV4097_SET_ZCULL_CONTROL1_x2=532136,
    NV4097_SET_SCULL_CONTROL_x2=532140,
    NV4097_SET_POINT_SIZE_x2=532192,
    NV4097_SET_POINT_PARAMS_ENABLE_x2=532196,
    NV4097_SET_POINT_SPRITE_CONTROL_x2=532200,
    NV4097_SET_TRANSFORM_TIMEOUT_x2=532216,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x2=532220,
    NV4097_SET_TRANSFORM_CONSTANT_x2=532224,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x2=532416,
    NV4097_SET_ATTRIB_COLOR_x2=532420,
    NV4097_SET_ATTRIB_TEX_COORD_x2=532424,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x2=532428,
    NV4097_SET_ATTRIB_UCLIP0_x2=532432,
    NV4097_SET_ATTRIB_UCLIP1_x2=532436,
    NV4097_INVALIDATE_L2_x2=532440,
    NV4097_SET_REDUCE_DST_COLOR_x2=532448,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x2=532456,
    NV4097_SET_SHADER_PACKER_x2=532460,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x2=532464,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x2=532468,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x2=532472,
    NV4097_SET_OBJECT_x3=786432,
    NV4097_NO_OPERATION_x3=786688,
    NV4097_NOTIFY_x3=786692,
    NV4097_WAIT_FOR_IDLE_x3=786704,
    NV4097_PM_TRIGGER_x3=786752,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x3=786816,
    NV4097_SET_CONTEXT_DMA_A_x3=786820,
    NV4097_SET_CONTEXT_DMA_B_x3=786824,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x3=786828,
    NV4097_SET_CONTEXT_DMA_STATE_x3=786832,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x3=786836,
    NV4097_SET_CONTEXT_DMA_ZETA_x3=786840,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x3=786844,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x3=786848,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x3=786852,
    NV4097_SET_CONTEXT_DMA_REPORT_x3=786856,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x3=786860,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x3=786864,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x3=786868,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x3=786872,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x3=786944,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x3=786948,
    NV4097_SET_SURFACE_FORMAT_x3=786952,
    NV4097_SET_SURFACE_PITCH_A_x3=786956,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x3=786960,
    NV4097_SET_SURFACE_ZETA_OFFSET_x3=786964,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x3=786968,
    NV4097_SET_SURFACE_PITCH_B_x3=786972,
    NV4097_SET_SURFACE_COLOR_TARGET_x3=786976,
    NV4097_SET_SURFACE_PITCH_Z_x3=786988,
    NV4097_INVALIDATE_ZCULL_x3=786996,
    NV4097_SET_CYLINDRICAL_WRAP_x3=787000,
    NV4097_SET_CYLINDRICAL_WRAP1_x3=787004,
    NV4097_SET_SURFACE_PITCH_C_x3=787072,
    NV4097_SET_SURFACE_PITCH_D_x3=787076,
    NV4097_SET_SURFACE_COLOR_COFFSET_x3=787080,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x3=787084,
    NV4097_SET_WINDOW_OFFSET_x3=787128,
    NV4097_SET_WINDOW_CLIP_TYPE_x3=787132,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x3=787136,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x3=787140,
    NV4097_SET_DITHER_ENABLE_x3=787200,
    NV4097_SET_ALPHA_TEST_ENABLE_x3=787204,
    NV4097_SET_ALPHA_FUNC_x3=787208,
    NV4097_SET_ALPHA_REF_x3=787212,
    NV4097_SET_BLEND_ENABLE_x3=787216,
    NV4097_SET_BLEND_FUNC_SFACTOR_x3=787220,
    NV4097_SET_BLEND_FUNC_DFACTOR_x3=787224,
    NV4097_SET_BLEND_COLOR_x3=787228,
    NV4097_SET_BLEND_EQUATION_x3=787232,
    NV4097_SET_COLOR_MASK_x3=787236,
    NV4097_SET_STENCIL_TEST_ENABLE_x3=787240,
    NV4097_SET_STENCIL_MASK_x3=787244,
    NV4097_SET_STENCIL_FUNC_x3=787248,
    NV4097_SET_STENCIL_FUNC_REF_x3=787252,
    NV4097_SET_STENCIL_FUNC_MASK_x3=787256,
    NV4097_SET_STENCIL_OP_FAIL_x3=787260,
    NV4097_SET_STENCIL_OP_ZFAIL_x3=787264,
    NV4097_SET_STENCIL_OP_ZPASS_x3=787268,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x3=787272,
    NV4097_SET_BACK_STENCIL_MASK_x3=787276,
    NV4097_SET_BACK_STENCIL_FUNC_x3=787280,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x3=787284,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x3=787288,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x3=787292,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x3=787296,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x3=787300,
    NV4097_SET_SHADE_MODE_x3=787304,
    NV4097_SET_BLEND_ENABLE_MRT_x3=787308,
    NV4097_SET_COLOR_MASK_MRT_x3=787312,
    NV4097_SET_LOGIC_OP_ENABLE_x3=787316,
    NV4097_SET_LOGIC_OP_x3=787320,
    NV4097_SET_BLEND_COLOR2_x3=787324,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x3=787328,
    NV4097_SET_DEPTH_BOUNDS_MIN_x3=787332,
    NV4097_SET_DEPTH_BOUNDS_MAX_x3=787336,
    NV4097_SET_CLIP_MIN_x3=787348,
    NV4097_SET_CLIP_MAX_x3=787352,
    NV4097_SET_CONTROL0_x3=787376,
    NV4097_SET_LINE_WIDTH_x3=787384,
    NV4097_SET_LINE_SMOOTH_ENABLE_x3=787388,
    NV4097_SET_ANISO_SPREAD_x3=787392,
    NV4097_SET_SCISSOR_HORIZONTAL_x3=788672,
    NV4097_SET_SCISSOR_VERTICAL_x3=788676,
    NV4097_SET_FOG_MODE_x3=788684,
    NV4097_SET_FOG_PARAMS_x3=788688,
    NV4097_SET_SHADER_PROGRAM_x3=788708,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x3=788736,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x3=788740,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x3=788744,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x3=788748,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x3=788752,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x3=788756,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x3=788760,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x3=788764,
    NV4097_SET_VIEWPORT_HORIZONTAL_x3=788992,
    NV4097_SET_VIEWPORT_VERTICAL_x3=788996,
    NV4097_SET_POINT_CENTER_MODE_x3=789004,
    NV4097_ZCULL_SYNC_x3=789020,
    NV4097_SET_VIEWPORT_OFFSET_x3=789024,
    NV4097_SET_VIEWPORT_SCALE_x3=789040,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x3=789088,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x3=789092,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x3=789096,
    NV4097_SET_DEPTH_FUNC_x3=789100,
    NV4097_SET_DEPTH_MASK_x3=789104,
    NV4097_SET_DEPTH_TEST_ENABLE_x3=789108,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x3=789112,
    NV4097_SET_POLYGON_OFFSET_BIAS_x3=789116,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x3=789120,
    NV4097_SET_TEXTURE_CONTROL2_x3=789248,
    NV4097_SET_TEX_COORD_CONTROL_x3=789312,
    NV4097_SET_TRANSFORM_PROGRAM_x3=789376,
    NV4097_SET_SPECULAR_ENABLE_x3=791592,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x3=791596,
    NV4097_CLEAR_ZCULL_SURFACE_x3=791608,
    NV4097_SET_PERFORMANCE_PARAMS_x3=791632,
    NV4097_SET_FLAT_SHADE_OP_x3=791636,
    NV4097_SET_EDGE_FLAG_x3=791644,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x3=791672,
    NV4097_SET_POLYGON_STIPPLE_x3=791676,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x3=791680,
    NV4097_SET_VERTEX_DATA3F_M_x3=791808,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x3=792192,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x3=792336,
    NV4097_INVALIDATE_VERTEX_FILE_x3=792340,
    NV4097_PIPE_NOP_x3=792344,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x3=792376,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x3=792380,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x3=792384,
    NV4097_CLEAR_REPORT_VALUE_x3=792520,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x3=792524,
    NV4097_GET_REPORT_x3=792576,
    NV4097_SET_ZCULL_STATS_ENABLE_x3=792580,
    NV4097_SET_BEGIN_END_x3=792584,
    NV4097_ARRAY_ELEMENT16_x3=792588,
    NV4097_ARRAY_ELEMENT32_x3=792592,
    NV4097_DRAW_ARRAYS_x3=792596,
    NV4097_INLINE_ARRAY_x3=792600,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x3=792604,
    NV4097_SET_INDEX_ARRAY_DMA_x3=792608,
    NV4097_DRAW_INDEX_ARRAY_x3=792612,
    NV4097_SET_FRONT_POLYGON_MODE_x3=792616,
    NV4097_SET_BACK_POLYGON_MODE_x3=792620,
    NV4097_SET_CULL_FACE_x3=792624,
    NV4097_SET_FRONT_FACE_x3=792628,
    NV4097_SET_POLY_SMOOTH_ENABLE_x3=792632,
    NV4097_SET_CULL_FACE_ENABLE_x3=792636,
    NV4097_SET_TEXTURE_CONTROL3_x3=792640,
    NV4097_SET_VERTEX_DATA2F_M_x3=792704,
    NV4097_SET_VERTEX_DATA2S_M_x3=792832,
    NV4097_SET_VERTEX_DATA4UB_M_x3=792896,
    NV4097_SET_VERTEX_DATA4S_M_x3=792960,
    NV4097_SET_TEXTURE_OFFSET_x3=793088,
    NV4097_SET_TEXTURE_FORMAT_x3=793092,
    NV4097_SET_TEXTURE_ADDRESS_x3=793096,
    NV4097_SET_TEXTURE_CONTROL0_x3=793100,
    NV4097_SET_TEXTURE_CONTROL1_x3=793104,
    NV4097_SET_TEXTURE_FILTER_x3=793108,
    NV4097_SET_TEXTURE_IMAGE_RECT_x3=793112,
    NV4097_SET_TEXTURE_BORDER_COLOR_x3=793116,
    NV4097_SET_VERTEX_DATA4F_M_x3=793600,
    NV4097_SET_COLOR_KEY_COLOR_x3=793856,
    NV4097_SET_SHADER_CONTROL_x3=793952,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x3=793956,
    NV4097_SET_SEMAPHORE_OFFSET_x3=793964,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x3=793968,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x3=793972,
    NV4097_SET_ZMIN_MAX_CONTROL_x3=793976,
    NV4097_SET_ANTI_ALIASING_CONTROL_x3=793980,
    NV4097_SET_SURFACE_COMPRESSION_x3=793984,
    NV4097_SET_ZCULL_EN_x3=793988,
    NV4097_SET_SHADER_WINDOW_x3=793992,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x3=793996,
    NV4097_SET_COLOR_CLEAR_VALUE_x3=794000,
    NV4097_CLEAR_SURFACE_x3=794004,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x3=794008,
    NV4097_SET_CLEAR_RECT_VERTICAL_x3=794012,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x3=794020,
    NV4097_SET_RESTART_INDEX_ENABLE_x3=794028,
    NV4097_SET_RESTART_INDEX_x3=794032,
    NV4097_SET_LINE_STIPPLE_x3=794036,
    NV4097_SET_LINE_STIPPLE_PATTERN_x3=794040,
    NV4097_SET_VERTEX_DATA1F_M_x3=794176,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x3=794260,
    NV4097_SET_RENDER_ENABLE_x3=794264,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x3=794268,
    NV4097_SET_TRANSFORM_PROGRAM_START_x3=794272,
    NV4097_SET_ZCULL_CONTROL0_x3=794276,
    NV4097_SET_ZCULL_CONTROL1_x3=794280,
    NV4097_SET_SCULL_CONTROL_x3=794284,
    NV4097_SET_POINT_SIZE_x3=794336,
    NV4097_SET_POINT_PARAMS_ENABLE_x3=794340,
    NV4097_SET_POINT_SPRITE_CONTROL_x3=794344,
    NV4097_SET_TRANSFORM_TIMEOUT_x3=794360,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x3=794364,
    NV4097_SET_TRANSFORM_CONSTANT_x3=794368,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x3=794560,
    NV4097_SET_ATTRIB_COLOR_x3=794564,
    NV4097_SET_ATTRIB_TEX_COORD_x3=794568,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x3=794572,
    NV4097_SET_ATTRIB_UCLIP0_x3=794576,
    NV4097_SET_ATTRIB_UCLIP1_x3=794580,
    NV4097_INVALIDATE_L2_x3=794584,
    NV4097_SET_REDUCE_DST_COLOR_x3=794592,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x3=794600,
    NV4097_SET_SHADER_PACKER_x3=794604,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x3=794608,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x3=794612,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x3=794616,
    NV4097_SET_OBJECT_x4=1048576,
    NV4097_NO_OPERATION_x4=1048832,
    NV4097_NOTIFY_x4=1048836,
    NV4097_WAIT_FOR_IDLE_x4=1048848,
    NV4097_PM_TRIGGER_x4=1048896,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x4=1048960,
    NV4097_SET_CONTEXT_DMA_A_x4=1048964,
    NV4097_SET_CONTEXT_DMA_B_x4=1048968,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x4=1048972,
    NV4097_SET_CONTEXT_DMA_STATE_x4=1048976,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x4=1048980,
    NV4097_SET_CONTEXT_DMA_ZETA_x4=1048984,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x4=1048988,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x4=1048992,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x4=1048996,
    NV4097_SET_CONTEXT_DMA_REPORT_x4=1049000,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x4=1049004,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x4=1049008,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x4=1049012,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x4=1049016,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x4=1049088,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x4=1049092,
    NV4097_SET_SURFACE_FORMAT_x4=1049096,
    NV4097_SET_SURFACE_PITCH_A_x4=1049100,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x4=1049104,
    NV4097_SET_SURFACE_ZETA_OFFSET_x4=1049108,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x4=1049112,
    NV4097_SET_SURFACE_PITCH_B_x4=1049116,
    NV4097_SET_SURFACE_COLOR_TARGET_x4=1049120,
    NV4097_SET_SURFACE_PITCH_Z_x4=1049132,
    NV4097_INVALIDATE_ZCULL_x4=1049140,
    NV4097_SET_CYLINDRICAL_WRAP_x4=1049144,
    NV4097_SET_CYLINDRICAL_WRAP1_x4=1049148,
    NV4097_SET_SURFACE_PITCH_C_x4=1049216,
    NV4097_SET_SURFACE_PITCH_D_x4=1049220,
    NV4097_SET_SURFACE_COLOR_COFFSET_x4=1049224,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x4=1049228,
    NV4097_SET_WINDOW_OFFSET_x4=1049272,
    NV4097_SET_WINDOW_CLIP_TYPE_x4=1049276,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x4=1049280,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x4=1049284,
    NV4097_SET_DITHER_ENABLE_x4=1049344,
    NV4097_SET_ALPHA_TEST_ENABLE_x4=1049348,
    NV4097_SET_ALPHA_FUNC_x4=1049352,
    NV4097_SET_ALPHA_REF_x4=1049356,
    NV4097_SET_BLEND_ENABLE_x4=1049360,
    NV4097_SET_BLEND_FUNC_SFACTOR_x4=1049364,
    NV4097_SET_BLEND_FUNC_DFACTOR_x4=1049368,
    NV4097_SET_BLEND_COLOR_x4=1049372,
    NV4097_SET_BLEND_EQUATION_x4=1049376,
    NV4097_SET_COLOR_MASK_x4=1049380,
    NV4097_SET_STENCIL_TEST_ENABLE_x4=1049384,
    NV4097_SET_STENCIL_MASK_x4=1049388,
    NV4097_SET_STENCIL_FUNC_x4=1049392,
    NV4097_SET_STENCIL_FUNC_REF_x4=1049396,
    NV4097_SET_STENCIL_FUNC_MASK_x4=1049400,
    NV4097_SET_STENCIL_OP_FAIL_x4=1049404,
    NV4097_SET_STENCIL_OP_ZFAIL_x4=1049408,
    NV4097_SET_STENCIL_OP_ZPASS_x4=1049412,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x4=1049416,
    NV4097_SET_BACK_STENCIL_MASK_x4=1049420,
    NV4097_SET_BACK_STENCIL_FUNC_x4=1049424,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x4=1049428,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x4=1049432,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x4=1049436,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x4=1049440,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x4=1049444,
    NV4097_SET_SHADE_MODE_x4=1049448,
    NV4097_SET_BLEND_ENABLE_MRT_x4=1049452,
    NV4097_SET_COLOR_MASK_MRT_x4=1049456,
    NV4097_SET_LOGIC_OP_ENABLE_x4=1049460,
    NV4097_SET_LOGIC_OP_x4=1049464,
    NV4097_SET_BLEND_COLOR2_x4=1049468,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x4=1049472,
    NV4097_SET_DEPTH_BOUNDS_MIN_x4=1049476,
    NV4097_SET_DEPTH_BOUNDS_MAX_x4=1049480,
    NV4097_SET_CLIP_MIN_x4=1049492,
    NV4097_SET_CLIP_MAX_x4=1049496,
    NV4097_SET_CONTROL0_x4=1049520,
    NV4097_SET_LINE_WIDTH_x4=1049528,
    NV4097_SET_LINE_SMOOTH_ENABLE_x4=1049532,
    NV4097_SET_ANISO_SPREAD_x4=1049536,
    NV4097_SET_SCISSOR_HORIZONTAL_x4=1050816,
    NV4097_SET_SCISSOR_VERTICAL_x4=1050820,
    NV4097_SET_FOG_MODE_x4=1050828,
    NV4097_SET_FOG_PARAMS_x4=1050832,
    NV4097_SET_SHADER_PROGRAM_x4=1050852,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x4=1050880,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x4=1050884,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x4=1050888,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x4=1050892,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x4=1050896,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x4=1050900,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x4=1050904,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x4=1050908,
    NV4097_SET_VIEWPORT_HORIZONTAL_x4=1051136,
    NV4097_SET_VIEWPORT_VERTICAL_x4=1051140,
    NV4097_SET_POINT_CENTER_MODE_x4=1051148,
    NV4097_ZCULL_SYNC_x4=1051164,
    NV4097_SET_VIEWPORT_OFFSET_x4=1051168,
    NV4097_SET_VIEWPORT_SCALE_x4=1051184,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x4=1051232,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x4=1051236,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x4=1051240,
    NV4097_SET_DEPTH_FUNC_x4=1051244,
    NV4097_SET_DEPTH_MASK_x4=1051248,
    NV4097_SET_DEPTH_TEST_ENABLE_x4=1051252,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x4=1051256,
    NV4097_SET_POLYGON_OFFSET_BIAS_x4=1051260,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x4=1051264,
    NV4097_SET_TEXTURE_CONTROL2_x4=1051392,
    NV4097_SET_TEX_COORD_CONTROL_x4=1051456,
    NV4097_SET_TRANSFORM_PROGRAM_x4=1051520,
    NV4097_SET_SPECULAR_ENABLE_x4=1053736,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x4=1053740,
    NV4097_CLEAR_ZCULL_SURFACE_x4=1053752,
    NV4097_SET_PERFORMANCE_PARAMS_x4=1053776,
    NV4097_SET_FLAT_SHADE_OP_x4=1053780,
    NV4097_SET_EDGE_FLAG_x4=1053788,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x4=1053816,
    NV4097_SET_POLYGON_STIPPLE_x4=1053820,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x4=1053824,
    NV4097_SET_VERTEX_DATA3F_M_x4=1053952,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x4=1054336,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x4=1054480,
    NV4097_INVALIDATE_VERTEX_FILE_x4=1054484,
    NV4097_PIPE_NOP_x4=1054488,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x4=1054520,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x4=1054524,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x4=1054528,
    NV4097_CLEAR_REPORT_VALUE_x4=1054664,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x4=1054668,
    NV4097_GET_REPORT_x4=1054720,
    NV4097_SET_ZCULL_STATS_ENABLE_x4=1054724,
    NV4097_SET_BEGIN_END_x4=1054728,
    NV4097_ARRAY_ELEMENT16_x4=1054732,
    NV4097_ARRAY_ELEMENT32_x4=1054736,
    NV4097_DRAW_ARRAYS_x4=1054740,
    NV4097_INLINE_ARRAY_x4=1054744,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x4=1054748,
    NV4097_SET_INDEX_ARRAY_DMA_x4=1054752,
    NV4097_DRAW_INDEX_ARRAY_x4=1054756,
    NV4097_SET_FRONT_POLYGON_MODE_x4=1054760,
    NV4097_SET_BACK_POLYGON_MODE_x4=1054764,
    NV4097_SET_CULL_FACE_x4=1054768,
    NV4097_SET_FRONT_FACE_x4=1054772,
    NV4097_SET_POLY_SMOOTH_ENABLE_x4=1054776,
    NV4097_SET_CULL_FACE_ENABLE_x4=1054780,
    NV4097_SET_TEXTURE_CONTROL3_x4=1054784,
    NV4097_SET_VERTEX_DATA2F_M_x4=1054848,
    NV4097_SET_VERTEX_DATA2S_M_x4=1054976,
    NV4097_SET_VERTEX_DATA4UB_M_x4=1055040,
    NV4097_SET_VERTEX_DATA4S_M_x4=1055104,
    NV4097_SET_TEXTURE_OFFSET_x4=1055232,
    NV4097_SET_TEXTURE_FORMAT_x4=1055236,
    NV4097_SET_TEXTURE_ADDRESS_x4=1055240,
    NV4097_SET_TEXTURE_CONTROL0_x4=1055244,
    NV4097_SET_TEXTURE_CONTROL1_x4=1055248,
    NV4097_SET_TEXTURE_FILTER_x4=1055252,
    NV4097_SET_TEXTURE_IMAGE_RECT_x4=1055256,
    NV4097_SET_TEXTURE_BORDER_COLOR_x4=1055260,
    NV4097_SET_VERTEX_DATA4F_M_x4=1055744,
    NV4097_SET_COLOR_KEY_COLOR_x4=1056000,
    NV4097_SET_SHADER_CONTROL_x4=1056096,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x4=1056100,
    NV4097_SET_SEMAPHORE_OFFSET_x4=1056108,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x4=1056112,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x4=1056116,
    NV4097_SET_ZMIN_MAX_CONTROL_x4=1056120,
    NV4097_SET_ANTI_ALIASING_CONTROL_x4=1056124,
    NV4097_SET_SURFACE_COMPRESSION_x4=1056128,
    NV4097_SET_ZCULL_EN_x4=1056132,
    NV4097_SET_SHADER_WINDOW_x4=1056136,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x4=1056140,
    NV4097_SET_COLOR_CLEAR_VALUE_x4=1056144,
    NV4097_CLEAR_SURFACE_x4=1056148,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x4=1056152,
    NV4097_SET_CLEAR_RECT_VERTICAL_x4=1056156,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x4=1056164,
    NV4097_SET_RESTART_INDEX_ENABLE_x4=1056172,
    NV4097_SET_RESTART_INDEX_x4=1056176,
    NV4097_SET_LINE_STIPPLE_x4=1056180,
    NV4097_SET_LINE_STIPPLE_PATTERN_x4=1056184,
    NV4097_SET_VERTEX_DATA1F_M_x4=1056320,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x4=1056404,
    NV4097_SET_RENDER_ENABLE_x4=1056408,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x4=1056412,
    NV4097_SET_TRANSFORM_PROGRAM_START_x4=1056416,
    NV4097_SET_ZCULL_CONTROL0_x4=1056420,
    NV4097_SET_ZCULL_CONTROL1_x4=1056424,
    NV4097_SET_SCULL_CONTROL_x4=1056428,
    NV4097_SET_POINT_SIZE_x4=1056480,
    NV4097_SET_POINT_PARAMS_ENABLE_x4=1056484,
    NV4097_SET_POINT_SPRITE_CONTROL_x4=1056488,
    NV4097_SET_TRANSFORM_TIMEOUT_x4=1056504,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x4=1056508,
    NV4097_SET_TRANSFORM_CONSTANT_x4=1056512,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x4=1056704,
    NV4097_SET_ATTRIB_COLOR_x4=1056708,
    NV4097_SET_ATTRIB_TEX_COORD_x4=1056712,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x4=1056716,
    NV4097_SET_ATTRIB_UCLIP0_x4=1056720,
    NV4097_SET_ATTRIB_UCLIP1_x4=1056724,
    NV4097_INVALIDATE_L2_x4=1056728,
    NV4097_SET_REDUCE_DST_COLOR_x4=1056736,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x4=1056744,
    NV4097_SET_SHADER_PACKER_x4=1056748,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x4=1056752,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x4=1056756,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x4=1056760,
    NV4097_SET_OBJECT_x5=1310720,
    NV4097_NO_OPERATION_x5=1310976,
    NV4097_NOTIFY_x5=1310980,
    NV4097_WAIT_FOR_IDLE_x5=1310992,
    NV4097_PM_TRIGGER_x5=1311040,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x5=1311104,
    NV4097_SET_CONTEXT_DMA_A_x5=1311108,
    NV4097_SET_CONTEXT_DMA_B_x5=1311112,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x5=1311116,
    NV4097_SET_CONTEXT_DMA_STATE_x5=1311120,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x5=1311124,
    NV4097_SET_CONTEXT_DMA_ZETA_x5=1311128,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x5=1311132,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x5=1311136,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x5=1311140,
    NV4097_SET_CONTEXT_DMA_REPORT_x5=1311144,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x5=1311148,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x5=1311152,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x5=1311156,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x5=1311160,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x5=1311232,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x5=1311236,
    NV4097_SET_SURFACE_FORMAT_x5=1311240,
    NV4097_SET_SURFACE_PITCH_A_x5=1311244,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x5=1311248,
    NV4097_SET_SURFACE_ZETA_OFFSET_x5=1311252,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x5=1311256,
    NV4097_SET_SURFACE_PITCH_B_x5=1311260,
    NV4097_SET_SURFACE_COLOR_TARGET_x5=1311264,
    NV4097_SET_SURFACE_PITCH_Z_x5=1311276,
    NV4097_INVALIDATE_ZCULL_x5=1311284,
    NV4097_SET_CYLINDRICAL_WRAP_x5=1311288,
    NV4097_SET_CYLINDRICAL_WRAP1_x5=1311292,
    NV4097_SET_SURFACE_PITCH_C_x5=1311360,
    NV4097_SET_SURFACE_PITCH_D_x5=1311364,
    NV4097_SET_SURFACE_COLOR_COFFSET_x5=1311368,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x5=1311372,
    NV4097_SET_WINDOW_OFFSET_x5=1311416,
    NV4097_SET_WINDOW_CLIP_TYPE_x5=1311420,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x5=1311424,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x5=1311428,
    NV4097_SET_DITHER_ENABLE_x5=1311488,
    NV4097_SET_ALPHA_TEST_ENABLE_x5=1311492,
    NV4097_SET_ALPHA_FUNC_x5=1311496,
    NV4097_SET_ALPHA_REF_x5=1311500,
    NV4097_SET_BLEND_ENABLE_x5=1311504,
    NV4097_SET_BLEND_FUNC_SFACTOR_x5=1311508,
    NV4097_SET_BLEND_FUNC_DFACTOR_x5=1311512,
    NV4097_SET_BLEND_COLOR_x5=1311516,
    NV4097_SET_BLEND_EQUATION_x5=1311520,
    NV4097_SET_COLOR_MASK_x5=1311524,
    NV4097_SET_STENCIL_TEST_ENABLE_x5=1311528,
    NV4097_SET_STENCIL_MASK_x5=1311532,
    NV4097_SET_STENCIL_FUNC_x5=1311536,
    NV4097_SET_STENCIL_FUNC_REF_x5=1311540,
    NV4097_SET_STENCIL_FUNC_MASK_x5=1311544,
    NV4097_SET_STENCIL_OP_FAIL_x5=1311548,
    NV4097_SET_STENCIL_OP_ZFAIL_x5=1311552,
    NV4097_SET_STENCIL_OP_ZPASS_x5=1311556,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x5=1311560,
    NV4097_SET_BACK_STENCIL_MASK_x5=1311564,
    NV4097_SET_BACK_STENCIL_FUNC_x5=1311568,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x5=1311572,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x5=1311576,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x5=1311580,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x5=1311584,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x5=1311588,
    NV4097_SET_SHADE_MODE_x5=1311592,
    NV4097_SET_BLEND_ENABLE_MRT_x5=1311596,
    NV4097_SET_COLOR_MASK_MRT_x5=1311600,
    NV4097_SET_LOGIC_OP_ENABLE_x5=1311604,
    NV4097_SET_LOGIC_OP_x5=1311608,
    NV4097_SET_BLEND_COLOR2_x5=1311612,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x5=1311616,
    NV4097_SET_DEPTH_BOUNDS_MIN_x5=1311620,
    NV4097_SET_DEPTH_BOUNDS_MAX_x5=1311624,
    NV4097_SET_CLIP_MIN_x5=1311636,
    NV4097_SET_CLIP_MAX_x5=1311640,
    NV4097_SET_CONTROL0_x5=1311664,
    NV4097_SET_LINE_WIDTH_x5=1311672,
    NV4097_SET_LINE_SMOOTH_ENABLE_x5=1311676,
    NV4097_SET_ANISO_SPREAD_x5=1311680,
    NV4097_SET_SCISSOR_HORIZONTAL_x5=1312960,
    NV4097_SET_SCISSOR_VERTICAL_x5=1312964,
    NV4097_SET_FOG_MODE_x5=1312972,
    NV4097_SET_FOG_PARAMS_x5=1312976,
    NV4097_SET_SHADER_PROGRAM_x5=1312996,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x5=1313024,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x5=1313028,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x5=1313032,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x5=1313036,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x5=1313040,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x5=1313044,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x5=1313048,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x5=1313052,
    NV4097_SET_VIEWPORT_HORIZONTAL_x5=1313280,
    NV4097_SET_VIEWPORT_VERTICAL_x5=1313284,
    NV4097_SET_POINT_CENTER_MODE_x5=1313292,
    NV4097_ZCULL_SYNC_x5=1313308,
    NV4097_SET_VIEWPORT_OFFSET_x5=1313312,
    NV4097_SET_VIEWPORT_SCALE_x5=1313328,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x5=1313376,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x5=1313380,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x5=1313384,
    NV4097_SET_DEPTH_FUNC_x5=1313388,
    NV4097_SET_DEPTH_MASK_x5=1313392,
    NV4097_SET_DEPTH_TEST_ENABLE_x5=1313396,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x5=1313400,
    NV4097_SET_POLYGON_OFFSET_BIAS_x5=1313404,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x5=1313408,
    NV4097_SET_TEXTURE_CONTROL2_x5=1313536,
    NV4097_SET_TEX_COORD_CONTROL_x5=1313600,
    NV4097_SET_TRANSFORM_PROGRAM_x5=1313664,
    NV4097_SET_SPECULAR_ENABLE_x5=1315880,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x5=1315884,
    NV4097_CLEAR_ZCULL_SURFACE_x5=1315896,
    NV4097_SET_PERFORMANCE_PARAMS_x5=1315920,
    NV4097_SET_FLAT_SHADE_OP_x5=1315924,
    NV4097_SET_EDGE_FLAG_x5=1315932,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x5=1315960,
    NV4097_SET_POLYGON_STIPPLE_x5=1315964,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x5=1315968,
    NV4097_SET_VERTEX_DATA3F_M_x5=1316096,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x5=1316480,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x5=1316624,
    NV4097_INVALIDATE_VERTEX_FILE_x5=1316628,
    NV4097_PIPE_NOP_x5=1316632,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x5=1316664,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x5=1316668,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x5=1316672,
    NV4097_CLEAR_REPORT_VALUE_x5=1316808,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x5=1316812,
    NV4097_GET_REPORT_x5=1316864,
    NV4097_SET_ZCULL_STATS_ENABLE_x5=1316868,
    NV4097_SET_BEGIN_END_x5=1316872,
    NV4097_ARRAY_ELEMENT16_x5=1316876,
    NV4097_ARRAY_ELEMENT32_x5=1316880,
    NV4097_DRAW_ARRAYS_x5=1316884,
    NV4097_INLINE_ARRAY_x5=1316888,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x5=1316892,
    NV4097_SET_INDEX_ARRAY_DMA_x5=1316896,
    NV4097_DRAW_INDEX_ARRAY_x5=1316900,
    NV4097_SET_FRONT_POLYGON_MODE_x5=1316904,
    NV4097_SET_BACK_POLYGON_MODE_x5=1316908,
    NV4097_SET_CULL_FACE_x5=1316912,
    NV4097_SET_FRONT_FACE_x5=1316916,
    NV4097_SET_POLY_SMOOTH_ENABLE_x5=1316920,
    NV4097_SET_CULL_FACE_ENABLE_x5=1316924,
    NV4097_SET_TEXTURE_CONTROL3_x5=1316928,
    NV4097_SET_VERTEX_DATA2F_M_x5=1316992,
    NV4097_SET_VERTEX_DATA2S_M_x5=1317120,
    NV4097_SET_VERTEX_DATA4UB_M_x5=1317184,
    NV4097_SET_VERTEX_DATA4S_M_x5=1317248,
    NV4097_SET_TEXTURE_OFFSET_x5=1317376,
    NV4097_SET_TEXTURE_FORMAT_x5=1317380,
    NV4097_SET_TEXTURE_ADDRESS_x5=1317384,
    NV4097_SET_TEXTURE_CONTROL0_x5=1317388,
    NV4097_SET_TEXTURE_CONTROL1_x5=1317392,
    NV4097_SET_TEXTURE_FILTER_x5=1317396,
    NV4097_SET_TEXTURE_IMAGE_RECT_x5=1317400,
    NV4097_SET_TEXTURE_BORDER_COLOR_x5=1317404,
    NV4097_SET_VERTEX_DATA4F_M_x5=1317888,
    NV4097_SET_COLOR_KEY_COLOR_x5=1318144,
    NV4097_SET_SHADER_CONTROL_x5=1318240,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x5=1318244,
    NV4097_SET_SEMAPHORE_OFFSET_x5=1318252,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x5=1318256,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x5=1318260,
    NV4097_SET_ZMIN_MAX_CONTROL_x5=1318264,
    NV4097_SET_ANTI_ALIASING_CONTROL_x5=1318268,
    NV4097_SET_SURFACE_COMPRESSION_x5=1318272,
    NV4097_SET_ZCULL_EN_x5=1318276,
    NV4097_SET_SHADER_WINDOW_x5=1318280,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x5=1318284,
    NV4097_SET_COLOR_CLEAR_VALUE_x5=1318288,
    NV4097_CLEAR_SURFACE_x5=1318292,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x5=1318296,
    NV4097_SET_CLEAR_RECT_VERTICAL_x5=1318300,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x5=1318308,
    NV4097_SET_RESTART_INDEX_ENABLE_x5=1318316,
    NV4097_SET_RESTART_INDEX_x5=1318320,
    NV4097_SET_LINE_STIPPLE_x5=1318324,
    NV4097_SET_LINE_STIPPLE_PATTERN_x5=1318328,
    NV4097_SET_VERTEX_DATA1F_M_x5=1318464,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x5=1318548,
    NV4097_SET_RENDER_ENABLE_x5=1318552,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x5=1318556,
    NV4097_SET_TRANSFORM_PROGRAM_START_x5=1318560,
    NV4097_SET_ZCULL_CONTROL0_x5=1318564,
    NV4097_SET_ZCULL_CONTROL1_x5=1318568,
    NV4097_SET_SCULL_CONTROL_x5=1318572,
    NV4097_SET_POINT_SIZE_x5=1318624,
    NV4097_SET_POINT_PARAMS_ENABLE_x5=1318628,
    NV4097_SET_POINT_SPRITE_CONTROL_x5=1318632,
    NV4097_SET_TRANSFORM_TIMEOUT_x5=1318648,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5=1318652,
    NV4097_SET_TRANSFORM_CONSTANT_x5=1318656,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x5=1318848,
    NV4097_SET_ATTRIB_COLOR_x5=1318852,
    NV4097_SET_ATTRIB_TEX_COORD_x5=1318856,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x5=1318860,
    NV4097_SET_ATTRIB_UCLIP0_x5=1318864,
    NV4097_SET_ATTRIB_UCLIP1_x5=1318868,
    NV4097_INVALIDATE_L2_x5=1318872,
    NV4097_SET_REDUCE_DST_COLOR_x5=1318880,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x5=1318888,
    NV4097_SET_SHADER_PACKER_x5=1318892,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x5=1318896,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x5=1318900,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x5=1318904,
    NV4097_SET_OBJECT_x6=1572864,
    NV4097_NO_OPERATION_x6=1573120,
    NV4097_NOTIFY_x6=1573124,
    NV4097_WAIT_FOR_IDLE_x6=1573136,
    NV4097_PM_TRIGGER_x6=1573184,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x6=1573248,
    NV4097_SET_CONTEXT_DMA_A_x6=1573252,
    NV4097_SET_CONTEXT_DMA_B_x6=1573256,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x6=1573260,
    NV4097_SET_CONTEXT_DMA_STATE_x6=1573264,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x6=1573268,
    NV4097_SET_CONTEXT_DMA_ZETA_x6=1573272,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x6=1573276,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x6=1573280,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x6=1573284,
    NV4097_SET_CONTEXT_DMA_REPORT_x6=1573288,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x6=1573292,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x6=1573296,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x6=1573300,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x6=1573304,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x6=1573376,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x6=1573380,
    NV4097_SET_SURFACE_FORMAT_x6=1573384,
    NV4097_SET_SURFACE_PITCH_A_x6=1573388,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x6=1573392,
    NV4097_SET_SURFACE_ZETA_OFFSET_x6=1573396,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x6=1573400,
    NV4097_SET_SURFACE_PITCH_B_x6=1573404,
    NV4097_SET_SURFACE_COLOR_TARGET_x6=1573408,
    NV4097_SET_SURFACE_PITCH_Z_x6=1573420,
    NV4097_INVALIDATE_ZCULL_x6=1573428,
    NV4097_SET_CYLINDRICAL_WRAP_x6=1573432,
    NV4097_SET_CYLINDRICAL_WRAP1_x6=1573436,
    NV4097_SET_SURFACE_PITCH_C_x6=1573504,
    NV4097_SET_SURFACE_PITCH_D_x6=1573508,
    NV4097_SET_SURFACE_COLOR_COFFSET_x6=1573512,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x6=1573516,
    NV4097_SET_WINDOW_OFFSET_x6=1573560,
    NV4097_SET_WINDOW_CLIP_TYPE_x6=1573564,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x6=1573568,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x6=1573572,
    NV4097_SET_DITHER_ENABLE_x6=1573632,
    NV4097_SET_ALPHA_TEST_ENABLE_x6=1573636,
    NV4097_SET_ALPHA_FUNC_x6=1573640,
    NV4097_SET_ALPHA_REF_x6=1573644,
    NV4097_SET_BLEND_ENABLE_x6=1573648,
    NV4097_SET_BLEND_FUNC_SFACTOR_x6=1573652,
    NV4097_SET_BLEND_FUNC_DFACTOR_x6=1573656,
    NV4097_SET_BLEND_COLOR_x6=1573660,
    NV4097_SET_BLEND_EQUATION_x6=1573664,
    NV4097_SET_COLOR_MASK_x6=1573668,
    NV4097_SET_STENCIL_TEST_ENABLE_x6=1573672,
    NV4097_SET_STENCIL_MASK_x6=1573676,
    NV4097_SET_STENCIL_FUNC_x6=1573680,
    NV4097_SET_STENCIL_FUNC_REF_x6=1573684,
    NV4097_SET_STENCIL_FUNC_MASK_x6=1573688,
    NV4097_SET_STENCIL_OP_FAIL_x6=1573692,
    NV4097_SET_STENCIL_OP_ZFAIL_x6=1573696,
    NV4097_SET_STENCIL_OP_ZPASS_x6=1573700,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x6=1573704,
    NV4097_SET_BACK_STENCIL_MASK_x6=1573708,
    NV4097_SET_BACK_STENCIL_FUNC_x6=1573712,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x6=1573716,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x6=1573720,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x6=1573724,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x6=1573728,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x6=1573732,
    NV4097_SET_SHADE_MODE_x6=1573736,
    NV4097_SET_BLEND_ENABLE_MRT_x6=1573740,
    NV4097_SET_COLOR_MASK_MRT_x6=1573744,
    NV4097_SET_LOGIC_OP_ENABLE_x6=1573748,
    NV4097_SET_LOGIC_OP_x6=1573752,
    NV4097_SET_BLEND_COLOR2_x6=1573756,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x6=1573760,
    NV4097_SET_DEPTH_BOUNDS_MIN_x6=1573764,
    NV4097_SET_DEPTH_BOUNDS_MAX_x6=1573768,
    NV4097_SET_CLIP_MIN_x6=1573780,
    NV4097_SET_CLIP_MAX_x6=1573784,
    NV4097_SET_CONTROL0_x6=1573808,
    NV4097_SET_LINE_WIDTH_x6=1573816,
    NV4097_SET_LINE_SMOOTH_ENABLE_x6=1573820,
    NV4097_SET_ANISO_SPREAD_x6=1573824,
    NV4097_SET_SCISSOR_HORIZONTAL_x6=1575104,
    NV4097_SET_SCISSOR_VERTICAL_x6=1575108,
    NV4097_SET_FOG_MODE_x6=1575116,
    NV4097_SET_FOG_PARAMS_x6=1575120,
    NV4097_SET_SHADER_PROGRAM_x6=1575140,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x6=1575168,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x6=1575172,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x6=1575176,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x6=1575180,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x6=1575184,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x6=1575188,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x6=1575192,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x6=1575196,
    NV4097_SET_VIEWPORT_HORIZONTAL_x6=1575424,
    NV4097_SET_VIEWPORT_VERTICAL_x6=1575428,
    NV4097_SET_POINT_CENTER_MODE_x6=1575436,
    NV4097_ZCULL_SYNC_x6=1575452,
    NV4097_SET_VIEWPORT_OFFSET_x6=1575456,
    NV4097_SET_VIEWPORT_SCALE_x6=1575472,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x6=1575520,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x6=1575524,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x6=1575528,
    NV4097_SET_DEPTH_FUNC_x6=1575532,
    NV4097_SET_DEPTH_MASK_x6=1575536,
    NV4097_SET_DEPTH_TEST_ENABLE_x6=1575540,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x6=1575544,
    NV4097_SET_POLYGON_OFFSET_BIAS_x6=1575548,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x6=1575552,
    NV4097_SET_TEXTURE_CONTROL2_x6=1575680,
    NV4097_SET_TEX_COORD_CONTROL_x6=1575744,
    NV4097_SET_TRANSFORM_PROGRAM_x6=1575808,
    NV4097_SET_SPECULAR_ENABLE_x6=1578024,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x6=1578028,
    NV4097_CLEAR_ZCULL_SURFACE_x6=1578040,
    NV4097_SET_PERFORMANCE_PARAMS_x6=1578064,
    NV4097_SET_FLAT_SHADE_OP_x6=1578068,
    NV4097_SET_EDGE_FLAG_x6=1578076,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x6=1578104,
    NV4097_SET_POLYGON_STIPPLE_x6=1578108,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x6=1578112,
    NV4097_SET_VERTEX_DATA3F_M_x6=1578240,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x6=1578624,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x6=1578768,
    NV4097_INVALIDATE_VERTEX_FILE_x6=1578772,
    NV4097_PIPE_NOP_x6=1578776,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x6=1578808,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x6=1578812,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x6=1578816,
    NV4097_CLEAR_REPORT_VALUE_x6=1578952,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x6=1578956,
    NV4097_GET_REPORT_x6=1579008,
    NV4097_SET_ZCULL_STATS_ENABLE_x6=1579012,
    NV4097_SET_BEGIN_END_x6=1579016,
    NV4097_ARRAY_ELEMENT16_x6=1579020,
    NV4097_ARRAY_ELEMENT32_x6=1579024,
    NV4097_DRAW_ARRAYS_x6=1579028,
    NV4097_INLINE_ARRAY_x6=1579032,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x6=1579036,
    NV4097_SET_INDEX_ARRAY_DMA_x6=1579040,
    NV4097_DRAW_INDEX_ARRAY_x6=1579044,
    NV4097_SET_FRONT_POLYGON_MODE_x6=1579048,
    NV4097_SET_BACK_POLYGON_MODE_x6=1579052,
    NV4097_SET_CULL_FACE_x6=1579056,
    NV4097_SET_FRONT_FACE_x6=1579060,
    NV4097_SET_POLY_SMOOTH_ENABLE_x6=1579064,
    NV4097_SET_CULL_FACE_ENABLE_x6=1579068,
    NV4097_SET_TEXTURE_CONTROL3_x6=1579072,
    NV4097_SET_VERTEX_DATA2F_M_x6=1579136,
    NV4097_SET_VERTEX_DATA2S_M_x6=1579264,
    NV4097_SET_VERTEX_DATA4UB_M_x6=1579328,
    NV4097_SET_VERTEX_DATA4S_M_x6=1579392,
    NV4097_SET_TEXTURE_OFFSET_x6=1579520,
    NV4097_SET_TEXTURE_FORMAT_x6=1579524,
    NV4097_SET_TEXTURE_ADDRESS_x6=1579528,
    NV4097_SET_TEXTURE_CONTROL0_x6=1579532,
    NV4097_SET_TEXTURE_CONTROL1_x6=1579536,
    NV4097_SET_TEXTURE_FILTER_x6=1579540,
    NV4097_SET_TEXTURE_IMAGE_RECT_x6=1579544,
    NV4097_SET_TEXTURE_BORDER_COLOR_x6=1579548,
    NV4097_SET_VERTEX_DATA4F_M_x6=1580032,
    NV4097_SET_COLOR_KEY_COLOR_x6=1580288,
    NV4097_SET_SHADER_CONTROL_x6=1580384,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x6=1580388,
    NV4097_SET_SEMAPHORE_OFFSET_x6=1580396,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x6=1580400,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x6=1580404,
    NV4097_SET_ZMIN_MAX_CONTROL_x6=1580408,
    NV4097_SET_ANTI_ALIASING_CONTROL_x6=1580412,
    NV4097_SET_SURFACE_COMPRESSION_x6=1580416,
    NV4097_SET_ZCULL_EN_x6=1580420,
    NV4097_SET_SHADER_WINDOW_x6=1580424,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x6=1580428,
    NV4097_SET_COLOR_CLEAR_VALUE_x6=1580432,
    NV4097_CLEAR_SURFACE_x6=1580436,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x6=1580440,
    NV4097_SET_CLEAR_RECT_VERTICAL_x6=1580444,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x6=1580452,
    NV4097_SET_RESTART_INDEX_ENABLE_x6=1580460,
    NV4097_SET_RESTART_INDEX_x6=1580464,
    NV4097_SET_LINE_STIPPLE_x6=1580468,
    NV4097_SET_LINE_STIPPLE_PATTERN_x6=1580472,
    NV4097_SET_VERTEX_DATA1F_M_x6=1580608,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x6=1580692,
    NV4097_SET_RENDER_ENABLE_x6=1580696,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x6=1580700,
    NV4097_SET_TRANSFORM_PROGRAM_START_x6=1580704,
    NV4097_SET_ZCULL_CONTROL0_x6=1580708,
    NV4097_SET_ZCULL_CONTROL1_x6=1580712,
    NV4097_SET_SCULL_CONTROL_x6=1580716,
    NV4097_SET_POINT_SIZE_x6=1580768,
    NV4097_SET_POINT_PARAMS_ENABLE_x6=1580772,
    NV4097_SET_POINT_SPRITE_CONTROL_x6=1580776,
    NV4097_SET_TRANSFORM_TIMEOUT_x6=1580792,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x6=1580796,
    NV4097_SET_TRANSFORM_CONSTANT_x6=1580800,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x6=1580992,
    NV4097_SET_ATTRIB_COLOR_x6=1580996,
    NV4097_SET_ATTRIB_TEX_COORD_x6=1581000,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x6=1581004,
    NV4097_SET_ATTRIB_UCLIP0_x6=1581008,
    NV4097_SET_ATTRIB_UCLIP1_x6=1581012,
    NV4097_INVALIDATE_L2_x6=1581016,
    NV4097_SET_REDUCE_DST_COLOR_x6=1581024,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x6=1581032,
    NV4097_SET_SHADER_PACKER_x6=1581036,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x6=1581040,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x6=1581044,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x6=1581048,
    NV4097_SET_OBJECT_x7=1835008,
    NV4097_NO_OPERATION_x7=1835264,
    NV4097_NOTIFY_x7=1835268,
    NV4097_WAIT_FOR_IDLE_x7=1835280,
    NV4097_PM_TRIGGER_x7=1835328,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x7=1835392,
    NV4097_SET_CONTEXT_DMA_A_x7=1835396,
    NV4097_SET_CONTEXT_DMA_B_x7=1835400,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x7=1835404,
    NV4097_SET_CONTEXT_DMA_STATE_x7=1835408,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x7=1835412,
    NV4097_SET_CONTEXT_DMA_ZETA_x7=1835416,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x7=1835420,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x7=1835424,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x7=1835428,
    NV4097_SET_CONTEXT_DMA_REPORT_x7=1835432,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x7=1835436,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x7=1835440,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x7=1835444,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x7=1835448,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x7=1835520,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x7=1835524,
    NV4097_SET_SURFACE_FORMAT_x7=1835528,
    NV4097_SET_SURFACE_PITCH_A_x7=1835532,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x7=1835536,
    NV4097_SET_SURFACE_ZETA_OFFSET_x7=1835540,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x7=1835544,
    NV4097_SET_SURFACE_PITCH_B_x7=1835548,
    NV4097_SET_SURFACE_COLOR_TARGET_x7=1835552,
    NV4097_SET_SURFACE_PITCH_Z_x7=1835564,
    NV4097_INVALIDATE_ZCULL_x7=1835572,
    NV4097_SET_CYLINDRICAL_WRAP_x7=1835576,
    NV4097_SET_CYLINDRICAL_WRAP1_x7=1835580,
    NV4097_SET_SURFACE_PITCH_C_x7=1835648,
    NV4097_SET_SURFACE_PITCH_D_x7=1835652,
    NV4097_SET_SURFACE_COLOR_COFFSET_x7=1835656,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x7=1835660,
    NV4097_SET_WINDOW_OFFSET_x7=1835704,
    NV4097_SET_WINDOW_CLIP_TYPE_x7=1835708,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x7=1835712,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x7=1835716,
    NV4097_SET_DITHER_ENABLE_x7=1835776,
    NV4097_SET_ALPHA_TEST_ENABLE_x7=1835780,
    NV4097_SET_ALPHA_FUNC_x7=1835784,
    NV4097_SET_ALPHA_REF_x7=1835788,
    NV4097_SET_BLEND_ENABLE_x7=1835792,
    NV4097_SET_BLEND_FUNC_SFACTOR_x7=1835796,
    NV4097_SET_BLEND_FUNC_DFACTOR_x7=1835800,
    NV4097_SET_BLEND_COLOR_x7=1835804,
    NV4097_SET_BLEND_EQUATION_x7=1835808,
    NV4097_SET_COLOR_MASK_x7=1835812,
    NV4097_SET_STENCIL_TEST_ENABLE_x7=1835816,
    NV4097_SET_STENCIL_MASK_x7=1835820,
    NV4097_SET_STENCIL_FUNC_x7=1835824,
    NV4097_SET_STENCIL_FUNC_REF_x7=1835828,
    NV4097_SET_STENCIL_FUNC_MASK_x7=1835832,
    NV4097_SET_STENCIL_OP_FAIL_x7=1835836,
    NV4097_SET_STENCIL_OP_ZFAIL_x7=1835840,
    NV4097_SET_STENCIL_OP_ZPASS_x7=1835844,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x7=1835848,
    NV4097_SET_BACK_STENCIL_MASK_x7=1835852,
    NV4097_SET_BACK_STENCIL_FUNC_x7=1835856,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x7=1835860,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x7=1835864,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x7=1835868,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x7=1835872,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x7=1835876,
    NV4097_SET_SHADE_MODE_x7=1835880,
    NV4097_SET_BLEND_ENABLE_MRT_x7=1835884,
    NV4097_SET_COLOR_MASK_MRT_x7=1835888,
    NV4097_SET_LOGIC_OP_ENABLE_x7=1835892,
    NV4097_SET_LOGIC_OP_x7=1835896,
    NV4097_SET_BLEND_COLOR2_x7=1835900,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x7=1835904,
    NV4097_SET_DEPTH_BOUNDS_MIN_x7=1835908,
    NV4097_SET_DEPTH_BOUNDS_MAX_x7=1835912,
    NV4097_SET_CLIP_MIN_x7=1835924,
    NV4097_SET_CLIP_MAX_x7=1835928,
    NV4097_SET_CONTROL0_x7=1835952,
    NV4097_SET_LINE_WIDTH_x7=1835960,
    NV4097_SET_LINE_SMOOTH_ENABLE_x7=1835964,
    NV4097_SET_ANISO_SPREAD_x7=1835968,
    NV4097_SET_SCISSOR_HORIZONTAL_x7=1837248,
    NV4097_SET_SCISSOR_VERTICAL_x7=1837252,
    NV4097_SET_FOG_MODE_x7=1837260,
    NV4097_SET_FOG_PARAMS_x7=1837264,
    NV4097_SET_SHADER_PROGRAM_x7=1837284,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x7=1837312,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x7=1837316,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x7=1837320,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x7=1837324,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x7=1837328,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x7=1837332,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x7=1837336,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x7=1837340,
    NV4097_SET_VIEWPORT_HORIZONTAL_x7=1837568,
    NV4097_SET_VIEWPORT_VERTICAL_x7=1837572,
    NV4097_SET_POINT_CENTER_MODE_x7=1837580,
    NV4097_ZCULL_SYNC_x7=1837596,
    NV4097_SET_VIEWPORT_OFFSET_x7=1837600,
    NV4097_SET_VIEWPORT_SCALE_x7=1837616,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x7=1837664,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x7=1837668,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x7=1837672,
    NV4097_SET_DEPTH_FUNC_x7=1837676,
    NV4097_SET_DEPTH_MASK_x7=1837680,
    NV4097_SET_DEPTH_TEST_ENABLE_x7=1837684,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x7=1837688,
    NV4097_SET_POLYGON_OFFSET_BIAS_x7=1837692,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x7=1837696,
    NV4097_SET_TEXTURE_CONTROL2_x7=1837824,
    NV4097_SET_TEX_COORD_CONTROL_x7=1837888,
    NV4097_SET_TRANSFORM_PROGRAM_x7=1837952,
    NV4097_SET_SPECULAR_ENABLE_x7=1840168,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x7=1840172,
    NV4097_CLEAR_ZCULL_SURFACE_x7=1840184,
    NV4097_SET_PERFORMANCE_PARAMS_x7=1840208,
    NV4097_SET_FLAT_SHADE_OP_x7=1840212,
    NV4097_SET_EDGE_FLAG_x7=1840220,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x7=1840248,
    NV4097_SET_POLYGON_STIPPLE_x7=1840252,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x7=1840256,
    NV4097_SET_VERTEX_DATA3F_M_x7=1840384,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x7=1840768,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x7=1840912,
    NV4097_INVALIDATE_VERTEX_FILE_x7=1840916,
    NV4097_PIPE_NOP_x7=1840920,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x7=1840952,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x7=1840956,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x7=1840960,
    NV4097_CLEAR_REPORT_VALUE_x7=1841096,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x7=1841100,
    NV4097_GET_REPORT_x7=1841152,
    NV4097_SET_ZCULL_STATS_ENABLE_x7=1841156,
    NV4097_SET_BEGIN_END_x7=1841160,
    NV4097_ARRAY_ELEMENT16_x7=1841164,
    NV4097_ARRAY_ELEMENT32_x7=1841168,
    NV4097_DRAW_ARRAYS_x7=1841172,
    NV4097_INLINE_ARRAY_x7=1841176,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x7=1841180,
    NV4097_SET_INDEX_ARRAY_DMA_x7=1841184,
    NV4097_DRAW_INDEX_ARRAY_x7=1841188,
    NV4097_SET_FRONT_POLYGON_MODE_x7=1841192,
    NV4097_SET_BACK_POLYGON_MODE_x7=1841196,
    NV4097_SET_CULL_FACE_x7=1841200,
    NV4097_SET_FRONT_FACE_x7=1841204,
    NV4097_SET_POLY_SMOOTH_ENABLE_x7=1841208,
    NV4097_SET_CULL_FACE_ENABLE_x7=1841212,
    NV4097_SET_TEXTURE_CONTROL3_x7=1841216,
    NV4097_SET_VERTEX_DATA2F_M_x7=1841280,
    NV4097_SET_VERTEX_DATA2S_M_x7=1841408,
    NV4097_SET_VERTEX_DATA4UB_M_x7=1841472,
    NV4097_SET_VERTEX_DATA4S_M_x7=1841536,
    NV4097_SET_TEXTURE_OFFSET_x7=1841664,
    NV4097_SET_TEXTURE_FORMAT_x7=1841668,
    NV4097_SET_TEXTURE_ADDRESS_x7=1841672,
    NV4097_SET_TEXTURE_CONTROL0_x7=1841676,
    NV4097_SET_TEXTURE_CONTROL1_x7=1841680,
    NV4097_SET_TEXTURE_FILTER_x7=1841684,
    NV4097_SET_TEXTURE_IMAGE_RECT_x7=1841688,
    NV4097_SET_TEXTURE_BORDER_COLOR_x7=1841692,
    NV4097_SET_VERTEX_DATA4F_M_x7=1842176,
    NV4097_SET_COLOR_KEY_COLOR_x7=1842432,
    NV4097_SET_SHADER_CONTROL_x7=1842528,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x7=1842532,
    NV4097_SET_SEMAPHORE_OFFSET_x7=1842540,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x7=1842544,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x7=1842548,
    NV4097_SET_ZMIN_MAX_CONTROL_x7=1842552,
    NV4097_SET_ANTI_ALIASING_CONTROL_x7=1842556,
    NV4097_SET_SURFACE_COMPRESSION_x7=1842560,
    NV4097_SET_ZCULL_EN_x7=1842564,
    NV4097_SET_SHADER_WINDOW_x7=1842568,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x7=1842572,
    NV4097_SET_COLOR_CLEAR_VALUE_x7=1842576,
    NV4097_CLEAR_SURFACE_x7=1842580,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x7=1842584,
    NV4097_SET_CLEAR_RECT_VERTICAL_x7=1842588,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x7=1842596,
    NV4097_SET_RESTART_INDEX_ENABLE_x7=1842604,
    NV4097_SET_RESTART_INDEX_x7=1842608,
    NV4097_SET_LINE_STIPPLE_x7=1842612,
    NV4097_SET_LINE_STIPPLE_PATTERN_x7=1842616,
    NV4097_SET_VERTEX_DATA1F_M_x7=1842752,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x7=1842836,
    NV4097_SET_RENDER_ENABLE_x7=1842840,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x7=1842844,
    NV4097_SET_TRANSFORM_PROGRAM_START_x7=1842848,
    NV4097_SET_ZCULL_CONTROL0_x7=1842852,
    NV4097_SET_ZCULL_CONTROL1_x7=1842856,
    NV4097_SET_SCULL_CONTROL_x7=1842860,
    NV4097_SET_POINT_SIZE_x7=1842912,
    NV4097_SET_POINT_PARAMS_ENABLE_x7=1842916,
    NV4097_SET_POINT_SPRITE_CONTROL_x7=1842920,
    NV4097_SET_TRANSFORM_TIMEOUT_x7=1842936,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x7=1842940,
    NV4097_SET_TRANSFORM_CONSTANT_x7=1842944,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x7=1843136,
    NV4097_SET_ATTRIB_COLOR_x7=1843140,
    NV4097_SET_ATTRIB_TEX_COORD_x7=1843144,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x7=1843148,
    NV4097_SET_ATTRIB_UCLIP0_x7=1843152,
    NV4097_SET_ATTRIB_UCLIP1_x7=1843156,
    NV4097_INVALIDATE_L2_x7=1843160,
    NV4097_SET_REDUCE_DST_COLOR_x7=1843168,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x7=1843176,
    NV4097_SET_SHADER_PACKER_x7=1843180,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x7=1843184,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x7=1843188,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x7=1843192,
    NV4097_SET_OBJECT_x8=2097152,
    NV4097_NO_OPERATION_x8=2097408,
    NV4097_NOTIFY_x8=2097412,
    NV4097_WAIT_FOR_IDLE_x8=2097424,
    NV4097_PM_TRIGGER_x8=2097472,
    NV4097_SET_CONTEXT_DMA_NOTIFIES_x8=2097536,
    NV4097_SET_CONTEXT_DMA_A_x8=2097540,
    NV4097_SET_CONTEXT_DMA_B_x8=2097544,
    NV4097_SET_CONTEXT_DMA_COLOR_B_x8=2097548,
    NV4097_SET_CONTEXT_DMA_STATE_x8=2097552,
    NV4097_SET_CONTEXT_DMA_COLOR_A_x8=2097556,
    NV4097_SET_CONTEXT_DMA_ZETA_x8=2097560,
    NV4097_SET_CONTEXT_DMA_VERTEX_A_x8=2097564,
    NV4097_SET_CONTEXT_DMA_VERTEX_B_x8=2097568,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE_x8=2097572,
    NV4097_SET_CONTEXT_DMA_REPORT_x8=2097576,
    NV4097_SET_CONTEXT_DMA_CLIP_ID_x8=2097580,
    NV4097_SET_CONTEXT_DMA_CULL_DATA_x8=2097584,
    NV4097_SET_CONTEXT_DMA_COLOR_C_x8=2097588,
    NV4097_SET_CONTEXT_DMA_COLOR_D_x8=2097592,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL_x8=2097664,
    NV4097_SET_SURFACE_CLIP_VERTICAL_x8=2097668,
    NV4097_SET_SURFACE_FORMAT_x8=2097672,
    NV4097_SET_SURFACE_PITCH_A_x8=2097676,
    NV4097_SET_SURFACE_COLOR_AOFFSET_x8=2097680,
    NV4097_SET_SURFACE_ZETA_OFFSET_x8=2097684,
    NV4097_SET_SURFACE_COLOR_BOFFSET_x8=2097688,
    NV4097_SET_SURFACE_PITCH_B_x8=2097692,
    NV4097_SET_SURFACE_COLOR_TARGET_x8=2097696,
    NV4097_SET_SURFACE_PITCH_Z_x8=2097708,
    NV4097_INVALIDATE_ZCULL_x8=2097716,
    NV4097_SET_CYLINDRICAL_WRAP_x8=2097720,
    NV4097_SET_CYLINDRICAL_WRAP1_x8=2097724,
    NV4097_SET_SURFACE_PITCH_C_x8=2097792,
    NV4097_SET_SURFACE_PITCH_D_x8=2097796,
    NV4097_SET_SURFACE_COLOR_COFFSET_x8=2097800,
    NV4097_SET_SURFACE_COLOR_DOFFSET_x8=2097804,
    NV4097_SET_WINDOW_OFFSET_x8=2097848,
    NV4097_SET_WINDOW_CLIP_TYPE_x8=2097852,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL_x8=2097856,
    NV4097_SET_WINDOW_CLIP_VERTICAL_x8=2097860,
    NV4097_SET_DITHER_ENABLE_x8=2097920,
    NV4097_SET_ALPHA_TEST_ENABLE_x8=2097924,
    NV4097_SET_ALPHA_FUNC_x8=2097928,
    NV4097_SET_ALPHA_REF_x8=2097932,
    NV4097_SET_BLEND_ENABLE_x8=2097936,
    NV4097_SET_BLEND_FUNC_SFACTOR_x8=2097940,
    NV4097_SET_BLEND_FUNC_DFACTOR_x8=2097944,
    NV4097_SET_BLEND_COLOR_x8=2097948,
    NV4097_SET_BLEND_EQUATION_x8=2097952,
    NV4097_SET_COLOR_MASK_x8=2097956,
    NV4097_SET_STENCIL_TEST_ENABLE_x8=2097960,
    NV4097_SET_STENCIL_MASK_x8=2097964,
    NV4097_SET_STENCIL_FUNC_x8=2097968,
    NV4097_SET_STENCIL_FUNC_REF_x8=2097972,
    NV4097_SET_STENCIL_FUNC_MASK_x8=2097976,
    NV4097_SET_STENCIL_OP_FAIL_x8=2097980,
    NV4097_SET_STENCIL_OP_ZFAIL_x8=2097984,
    NV4097_SET_STENCIL_OP_ZPASS_x8=2097988,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE_x8=2097992,
    NV4097_SET_BACK_STENCIL_MASK_x8=2097996,
    NV4097_SET_BACK_STENCIL_FUNC_x8=2098000,
    NV4097_SET_BACK_STENCIL_FUNC_REF_x8=2098004,
    NV4097_SET_BACK_STENCIL_FUNC_MASK_x8=2098008,
    NV4097_SET_BACK_STENCIL_OP_FAIL_x8=2098012,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL_x8=2098016,
    NV4097_SET_BACK_STENCIL_OP_ZPASS_x8=2098020,
    NV4097_SET_SHADE_MODE_x8=2098024,
    NV4097_SET_BLEND_ENABLE_MRT_x8=2098028,
    NV4097_SET_COLOR_MASK_MRT_x8=2098032,
    NV4097_SET_LOGIC_OP_ENABLE_x8=2098036,
    NV4097_SET_LOGIC_OP_x8=2098040,
    NV4097_SET_BLEND_COLOR2_x8=2098044,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE_x8=2098048,
    NV4097_SET_DEPTH_BOUNDS_MIN_x8=2098052,
    NV4097_SET_DEPTH_BOUNDS_MAX_x8=2098056,
    NV4097_SET_CLIP_MIN_x8=2098068,
    NV4097_SET_CLIP_MAX_x8=2098072,
    NV4097_SET_CONTROL0_x8=2098096,
    NV4097_SET_LINE_WIDTH_x8=2098104,
    NV4097_SET_LINE_SMOOTH_ENABLE_x8=2098108,
    NV4097_SET_ANISO_SPREAD_x8=2098112,
    NV4097_SET_SCISSOR_HORIZONTAL_x8=2099392,
    NV4097_SET_SCISSOR_VERTICAL_x8=2099396,
    NV4097_SET_FOG_MODE_x8=2099404,
    NV4097_SET_FOG_PARAMS_x8=2099408,
    NV4097_SET_SHADER_PROGRAM_x8=2099428,
    NV4097_SET_VERTEX_TEXTURE_OFFSET_x8=2099456,
    NV4097_SET_VERTEX_TEXTURE_FORMAT_x8=2099460,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS_x8=2099464,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0_x8=2099468,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3_x8=2099472,
    NV4097_SET_VERTEX_TEXTURE_FILTER_x8=2099476,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT_x8=2099480,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR_x8=2099484,
    NV4097_SET_VIEWPORT_HORIZONTAL_x8=2099712,
    NV4097_SET_VIEWPORT_VERTICAL_x8=2099716,
    NV4097_SET_POINT_CENTER_MODE_x8=2099724,
    NV4097_ZCULL_SYNC_x8=2099740,
    NV4097_SET_VIEWPORT_OFFSET_x8=2099744,
    NV4097_SET_VIEWPORT_SCALE_x8=2099760,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE_x8=2099808,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE_x8=2099812,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE_x8=2099816,
    NV4097_SET_DEPTH_FUNC_x8=2099820,
    NV4097_SET_DEPTH_MASK_x8=2099824,
    NV4097_SET_DEPTH_TEST_ENABLE_x8=2099828,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR_x8=2099832,
    NV4097_SET_POLYGON_OFFSET_BIAS_x8=2099836,
    NV4097_SET_VERTEX_DATA_SCALED4S_M_x8=2099840,
    NV4097_SET_TEXTURE_CONTROL2_x8=2099968,
    NV4097_SET_TEX_COORD_CONTROL_x8=2100032,
    NV4097_SET_TRANSFORM_PROGRAM_x8=2100096,
    NV4097_SET_SPECULAR_ENABLE_x8=2102312,
    NV4097_SET_TWO_SIDE_LIGHT_EN_x8=2102316,
    NV4097_CLEAR_ZCULL_SURFACE_x8=2102328,
    NV4097_SET_PERFORMANCE_PARAMS_x8=2102352,
    NV4097_SET_FLAT_SHADE_OP_x8=2102356,
    NV4097_SET_EDGE_FLAG_x8=2102364,
    NV4097_SET_USER_CLIP_PLANE_CONTROL_x8=2102392,
    NV4097_SET_POLYGON_STIPPLE_x8=2102396,
    NV4097_SET_POLYGON_STIPPLE_PATTERN_x8=2102400,
    NV4097_SET_VERTEX_DATA3F_M_x8=2102528,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x8=2102912,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE_x8=2103056,
    NV4097_INVALIDATE_VERTEX_FILE_x8=2103060,
    NV4097_PIPE_NOP_x8=2103064,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET_x8=2103096,
    NV4097_SET_VERTEX_DATA_BASE_INDEX_x8=2103100,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x8=2103104,
    NV4097_CLEAR_REPORT_VALUE_x8=2103240,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE_x8=2103244,
    NV4097_GET_REPORT_x8=2103296,
    NV4097_SET_ZCULL_STATS_ENABLE_x8=2103300,
    NV4097_SET_BEGIN_END_x8=2103304,
    NV4097_ARRAY_ELEMENT16_x8=2103308,
    NV4097_ARRAY_ELEMENT32_x8=2103312,
    NV4097_DRAW_ARRAYS_x8=2103316,
    NV4097_INLINE_ARRAY_x8=2103320,
    NV4097_SET_INDEX_ARRAY_ADDRESS_x8=2103324,
    NV4097_SET_INDEX_ARRAY_DMA_x8=2103328,
    NV4097_DRAW_INDEX_ARRAY_x8=2103332,
    NV4097_SET_FRONT_POLYGON_MODE_x8=2103336,
    NV4097_SET_BACK_POLYGON_MODE_x8=2103340,
    NV4097_SET_CULL_FACE_x8=2103344,
    NV4097_SET_FRONT_FACE_x8=2103348,
    NV4097_SET_POLY_SMOOTH_ENABLE_x8=2103352,
    NV4097_SET_CULL_FACE_ENABLE_x8=2103356,
    NV4097_SET_TEXTURE_CONTROL3_x8=2103360,
    NV4097_SET_VERTEX_DATA2F_M_x8=2103424,
    NV4097_SET_VERTEX_DATA2S_M_x8=2103552,
    NV4097_SET_VERTEX_DATA4UB_M_x8=2103616,
    NV4097_SET_VERTEX_DATA4S_M_x8=2103680,
    NV4097_SET_TEXTURE_OFFSET_x8=2103808,
    NV4097_SET_TEXTURE_FORMAT_x8=2103812,
    NV4097_SET_TEXTURE_ADDRESS_x8=2103816,
    NV4097_SET_TEXTURE_CONTROL0_x8=2103820,
    NV4097_SET_TEXTURE_CONTROL1_x8=2103824,
    NV4097_SET_TEXTURE_FILTER_x8=2103828,
    NV4097_SET_TEXTURE_IMAGE_RECT_x8=2103832,
    NV4097_SET_TEXTURE_BORDER_COLOR_x8=2103836,
    NV4097_SET_VERTEX_DATA4F_M_x8=2104320,
    NV4097_SET_COLOR_KEY_COLOR_x8=2104576,
    NV4097_SET_SHADER_CONTROL_x8=2104672,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS_x8=2104676,
    NV4097_SET_SEMAPHORE_OFFSET_x8=2104684,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE_x8=2104688,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE_x8=2104692,
    NV4097_SET_ZMIN_MAX_CONTROL_x8=2104696,
    NV4097_SET_ANTI_ALIASING_CONTROL_x8=2104700,
    NV4097_SET_SURFACE_COMPRESSION_x8=2104704,
    NV4097_SET_ZCULL_EN_x8=2104708,
    NV4097_SET_SHADER_WINDOW_x8=2104712,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE_x8=2104716,
    NV4097_SET_COLOR_CLEAR_VALUE_x8=2104720,
    NV4097_CLEAR_SURFACE_x8=2104724,
    NV4097_SET_CLEAR_RECT_HORIZONTAL_x8=2104728,
    NV4097_SET_CLEAR_RECT_VERTICAL_x8=2104732,
    NV4097_SET_CLIP_ID_TEST_ENABLE_x8=2104740,
    NV4097_SET_RESTART_INDEX_ENABLE_x8=2104748,
    NV4097_SET_RESTART_INDEX_x8=2104752,
    NV4097_SET_LINE_STIPPLE_x8=2104756,
    NV4097_SET_LINE_STIPPLE_PATTERN_x8=2104760,
    NV4097_SET_VERTEX_DATA1F_M_x8=2104896,
    NV4097_SET_TRANSFORM_EXECUTION_MODE_x8=2104980,
    NV4097_SET_RENDER_ENABLE_x8=2104984,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD_x8=2104988,
    NV4097_SET_TRANSFORM_PROGRAM_START_x8=2104992,
    NV4097_SET_ZCULL_CONTROL0_x8=2104996,
    NV4097_SET_ZCULL_CONTROL1_x8=2105000,
    NV4097_SET_SCULL_CONTROL_x8=2105004,
    NV4097_SET_POINT_SIZE_x8=2105056,
    NV4097_SET_POINT_PARAMS_ENABLE_x8=2105060,
    NV4097_SET_POINT_SPRITE_CONTROL_x8=2105064,
    NV4097_SET_TRANSFORM_TIMEOUT_x8=2105080,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD_x8=2105084,
    NV4097_SET_TRANSFORM_CONSTANT_x8=2105088,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION_x8=2105280,
    NV4097_SET_ATTRIB_COLOR_x8=2105284,
    NV4097_SET_ATTRIB_TEX_COORD_x8=2105288,
    NV4097_SET_ATTRIB_TEX_COORD_EX_x8=2105292,
    NV4097_SET_ATTRIB_UCLIP0_x8=2105296,
    NV4097_SET_ATTRIB_UCLIP1_x8=2105300,
    NV4097_INVALIDATE_L2_x8=2105304,
    NV4097_SET_REDUCE_DST_COLOR_x8=2105312,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES_x8=2105320,
    NV4097_SET_SHADER_PACKER_x8=2105324,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK_x8=2105328,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK_x8=2105332,
    NV4097_SET_TRANSFORM_BRANCH_BITS_x8=2105336
} RsxCmd;

struct RenderingStep {
    byte field0_0x0;
    byte field1_0x1;
    byte field2_0x2;
    byte field3_0x3;
    uint commandLen;
    enum RsxCmd *command;
    pointer callback;
    uint field7_0x10;
};

typedef struct RGBA RGBA, *PRGBA;

struct RGBA {
    u8 r;
    u8 g;
    u8 b;
    u8 a;
};

typedef enum RsxMethod {
    NV4097_SET_OBJECT=0,
    NV4097_NO_OPERATION=256,
    NV4097_NOTIFY=260,
    NV4097_WAIT_FOR_IDLE=272,
    NV4097_PM_TRIGGER=320,
    NV4097_SET_CONTEXT_DMA_NOTIFIES=384,
    NV4097_SET_CONTEXT_DMA_A=388,
    NV4097_SET_CONTEXT_DMA_B=392,
    NV4097_SET_CONTEXT_DMA_COLOR_B=396,
    NV4097_SET_CONTEXT_DMA_STATE=400,
    NV4097_SET_CONTEXT_DMA_COLOR_A=404,
    NV4097_SET_CONTEXT_DMA_ZETA=408,
    NV4097_SET_CONTEXT_DMA_VERTEX_A=412,
    NV4097_SET_CONTEXT_DMA_VERTEX_B=416,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE=420,
    NV4097_SET_CONTEXT_DMA_REPORT=424,
    NV4097_SET_CONTEXT_DMA_CLIP_ID=428,
    NV4097_SET_CONTEXT_DMA_CULL_DATA=432,
    NV4097_SET_CONTEXT_DMA_COLOR_C=436,
    NV4097_SET_CONTEXT_DMA_COLOR_D=440,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL=512,
    NV4097_SET_SURFACE_CLIP_VERTICAL=516,
    NV4097_SET_SURFACE_FORMAT=520,
    NV4097_SET_SURFACE_PITCH_A=524,
    NV4097_SET_SURFACE_COLOR_AOFFSET=528,
    NV4097_SET_SURFACE_ZETA_OFFSET=532,
    NV4097_SET_SURFACE_COLOR_BOFFSET=536,
    NV4097_SET_SURFACE_PITCH_B=540,
    NV4097_SET_SURFACE_COLOR_TARGET=544,
    NV4097_SET_SURFACE_PITCH_Z=556,
    NV4097_INVALIDATE_ZCULL=564,
    NV4097_SET_CYLINDRICAL_WRAP=568,
    NV4097_SET_CYLINDRICAL_WRAP1=572,
    NV4097_SET_SURFACE_PITCH_C=640,
    NV4097_SET_SURFACE_PITCH_D=644,
    NV4097_SET_SURFACE_COLOR_COFFSET=648,
    NV4097_SET_SURFACE_COLOR_DOFFSET=652,
    NV4097_SET_WINDOW_OFFSET=696,
    NV4097_SET_WINDOW_CLIP_TYPE=700,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL=704,
    NV4097_SET_WINDOW_CLIP_VERTICAL=708,
    NV4097_SET_DITHER_ENABLE=768,
    NV4097_SET_ALPHA_TEST_ENABLE=772,
    NV4097_SET_ALPHA_FUNC=776,
    NV4097_SET_ALPHA_REF=780,
    NV4097_SET_BLEND_ENABLE=784,
    NV4097_SET_BLEND_FUNC_SFACTOR=788,
    NV4097_SET_BLEND_FUNC_DFACTOR=792,
    NV4097_SET_BLEND_COLOR=796,
    NV4097_SET_BLEND_EQUATION=800,
    NV4097_SET_COLOR_MASK=804,
    NV4097_SET_STENCIL_TEST_ENABLE=808,
    NV4097_SET_STENCIL_MASK=812,
    NV4097_SET_STENCIL_FUNC=816,
    NV4097_SET_STENCIL_FUNC_REF=820,
    NV4097_SET_STENCIL_FUNC_MASK=824,
    NV4097_SET_STENCIL_OP_FAIL=828,
    NV4097_SET_STENCIL_OP_ZFAIL=832,
    NV4097_SET_STENCIL_OP_ZPASS=836,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE=840,
    NV4097_SET_BACK_STENCIL_MASK=844,
    NV4097_SET_BACK_STENCIL_FUNC=848,
    NV4097_SET_BACK_STENCIL_FUNC_REF=852,
    NV4097_SET_BACK_STENCIL_FUNC_MASK=856,
    NV4097_SET_BACK_STENCIL_OP_FAIL=860,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL=864,
    NV4097_SET_BACK_STENCIL_OP_ZPASS=868,
    NV4097_SET_SHADE_MODE=872,
    NV4097_SET_BLEND_ENABLE_MRT=876,
    NV4097_SET_COLOR_MASK_MRT=880,
    NV4097_SET_LOGIC_OP_ENABLE=884,
    NV4097_SET_LOGIC_OP=888,
    NV4097_SET_BLEND_COLOR2=892,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE=896,
    NV4097_SET_DEPTH_BOUNDS_MIN=900,
    NV4097_SET_DEPTH_BOUNDS_MAX=904,
    NV4097_SET_CLIP_MIN=916,
    NV4097_SET_CLIP_MAX=920,
    NV4097_SET_CONTROL0=944,
    NV4097_SET_LINE_WIDTH=952,
    NV4097_SET_LINE_SMOOTH_ENABLE=956,
    NV4097_SET_ANISO_SPREAD=960,
    NV4097_SET_SCISSOR_HORIZONTAL=2240,
    NV4097_SET_SCISSOR_VERTICAL=2244,
    NV4097_SET_FOG_MODE=2252,
    NV4097_SET_FOG_PARAMS=2256,
    NV4097_SET_SHADER_PROGRAM=2276,
    NV4097_SET_VERTEX_TEXTURE_OFFSET=2304,
    NV4097_SET_VERTEX_TEXTURE_FORMAT=2308,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS=2312,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0=2316,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3=2320,
    NV4097_SET_VERTEX_TEXTURE_FILTER=2324,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT=2328,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR=2332,
    NV4097_SET_VIEWPORT_HORIZONTAL=2560,
    NV4097_SET_VIEWPORT_VERTICAL=2564,
    NV4097_SET_POINT_CENTER_MODE=2572,
    NV4097_ZCULL_SYNC=2588,
    NV4097_SET_VIEWPORT_OFFSET=2592,
    NV4097_SET_VIEWPORT_SCALE=2608,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE=2656,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE=2660,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE=2664,
    NV4097_SET_DEPTH_FUNC=2668,
    NV4097_SET_DEPTH_MASK=2672,
    NV4097_SET_DEPTH_TEST_ENABLE=2676,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR=2680,
    NV4097_SET_POLYGON_OFFSET_BIAS=2684,
    NV4097_SET_VERTEX_DATA_SCALED4S_M=2688,
    NV4097_SET_TEXTURE_CONTROL2=2816,
    NV4097_SET_TEX_COORD_CONTROL=2880,
    NV4097_SET_TRANSFORM_PROGRAM=2944,
    NV4097_SET_SPECULAR_ENABLE=5160,
    NV4097_SET_TWO_SIDE_LIGHT_EN=5164,
    NV4097_CLEAR_ZCULL_SURFACE=5176,
    NV4097_SET_PERFORMANCE_PARAMS=5200,
    NV4097_SET_FLAT_SHADE_OP=5204,
    NV4097_SET_EDGE_FLAG=5212,
    NV4097_SET_USER_CLIP_PLANE_CONTROL=5240,
    NV4097_SET_POLYGON_STIPPLE=5244,
    NV4097_SET_POLYGON_STIPPLE_PATTERN=5248,
    NV4097_SET_VERTEX_DATA3F_M=5376,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET=5760,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE=5904,
    NV4097_INVALIDATE_VERTEX_FILE=5908,
    NV4097_PIPE_NOP=5912,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET=5944,
    NV4097_SET_VERTEX_DATA_BASE_INDEX=5948,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT=5952,
    NV4097_CLEAR_REPORT_VALUE=6088,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE=6092,
    NV4097_GET_REPORT=6144,
    NV4097_SET_ZCULL_STATS_ENABLE=6148,
    NV4097_SET_BEGIN_END=6152,
    NV4097_ARRAY_ELEMENT16=6156,
    NV4097_ARRAY_ELEMENT32=6160,
    NV4097_DRAW_ARRAYS=6164,
    NV4097_INLINE_ARRAY=6168,
    NV4097_SET_INDEX_ARRAY_ADDRESS=6172,
    NV4097_SET_INDEX_ARRAY_DMA=6176,
    NV4097_DRAW_INDEX_ARRAY=6180,
    NV4097_SET_FRONT_POLYGON_MODE=6184,
    NV4097_SET_BACK_POLYGON_MODE=6188,
    NV4097_SET_CULL_FACE=6192,
    NV4097_SET_FRONT_FACE=6196,
    NV4097_SET_POLY_SMOOTH_ENABLE=6200,
    NV4097_SET_CULL_FACE_ENABLE=6204,
    NV4097_SET_TEXTURE_CONTROL3=6208,
    NV4097_SET_VERTEX_DATA2F_M=6272,
    NV4097_SET_VERTEX_DATA2S_M=6400,
    NV4097_SET_VERTEX_DATA4UB_M=6464,
    NV4097_SET_VERTEX_DATA4S_M=6528,
    NV4097_SET_TEXTURE_OFFSET=6656,
    NV4097_SET_TEXTURE_FORMAT=6660,
    NV4097_SET_TEXTURE_ADDRESS=6664,
    NV4097_SET_TEXTURE_CONTROL0=6668,
    NV4097_SET_TEXTURE_CONTROL1=6672,
    NV4097_SET_TEXTURE_FILTER=6676,
    NV4097_SET_TEXTURE_IMAGE_RECT=6680,
    NV4097_SET_TEXTURE_BORDER_COLOR=6684,
    NV4097_SET_VERTEX_DATA4F_M=7168,
    NV4097_SET_COLOR_KEY_COLOR=7424,
    NV4097_SET_SHADER_CONTROL=7520,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS=7524,
    NV4097_SET_SEMAPHORE_OFFSET=7532,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE=7536,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE=7540,
    NV4097_SET_ZMIN_MAX_CONTROL=7544,
    NV4097_SET_ANTI_ALIASING_CONTROL=7548,
    NV4097_SET_SURFACE_COMPRESSION=7552,
    NV4097_SET_ZCULL_EN=7556,
    NV4097_SET_SHADER_WINDOW=7560,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE=7564,
    NV4097_SET_COLOR_CLEAR_VALUE=7568,
    NV4097_CLEAR_SURFACE=7572,
    NV4097_SET_CLEAR_RECT_HORIZONTAL=7576,
    NV4097_SET_CLEAR_RECT_VERTICAL=7580,
    NV4097_SET_CLIP_ID_TEST_ENABLE=7588,
    NV4097_SET_RESTART_INDEX_ENABLE=7596,
    NV4097_SET_RESTART_INDEX=7600,
    NV4097_SET_LINE_STIPPLE=7604,
    NV4097_SET_LINE_STIPPLE_PATTERN=7608,
    NV4097_SET_VERTEX_DATA1F_M=7744,
    NV4097_SET_TRANSFORM_EXECUTION_MODE=7828,
    NV4097_SET_RENDER_ENABLE=7832,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD=7836,
    NV4097_SET_TRANSFORM_PROGRAM_START=7840,
    NV4097_SET_ZCULL_CONTROL0=7844,
    NV4097_SET_ZCULL_CONTROL1=7848,
    NV4097_SET_SCULL_CONTROL=7852,
    NV4097_SET_POINT_SIZE=7904,
    NV4097_SET_POINT_PARAMS_ENABLE=7908,
    NV4097_SET_POINT_SPRITE_CONTROL=7912,
    NV4097_SET_TRANSFORM_TIMEOUT=7928,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD=7932,
    NV4097_SET_TRANSFORM_CONSTANT=7936,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION=8128,
    NV4097_SET_ATTRIB_COLOR=8132,
    NV4097_SET_ATTRIB_TEX_COORD=8136,
    NV4097_SET_ATTRIB_TEX_COORD_EX=8140,
    NV4097_SET_ATTRIB_UCLIP0=8144,
    NV4097_SET_ATTRIB_UCLIP1=8148,
    NV4097_INVALIDATE_L2=8152,
    NV4097_SET_REDUCE_DST_COLOR=8160,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES=8168,
    NV4097_SET_SHADER_PACKER=8172,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK=8176,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK=8180,
    NV4097_SET_TRANSFORM_BRANCH_BITS=8184
} RsxMethod;

typedef long s64;

typedef ushort sa_family_t;

typedef struct SaveDataInfo SaveDataInfo, *PSaveDataInfo;

struct SaveDataInfo {
    undefined **field0_0x0;
    undefined4 field1_0x4;
    undefined4 field2_0x8;
    undefined4 field3_0xc;
    undefined4 field4_0x10;
    undefined4 field5_0x14;
    undefined4 field6_0x18;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    undefined1 field11_0x20;
    undefined1 field12_0x21;
    undefined1 field13_0x22;
    undefined1 field14_0x23;
    undefined1 field15_0x24;
    undefined1 field16_0x25;
    undefined1 field17_0x26;
    undefined1 field18_0x27;
    undefined1 field19_0x28;
    undefined1 field20_0x29;
    undefined1 field21_0x2a;
    undefined1 field22_0x2b;
    undefined1 field23_0x2c;
    undefined1 field24_0x2d;
    undefined1 field25_0x2e;
    undefined1 field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined field39_0x3c;
    undefined field40_0x3d;
    undefined field41_0x3e;
    undefined field42_0x3f;
    undefined field43_0x40;
    undefined field44_0x41;
    undefined field45_0x42;
    undefined field46_0x43;
    undefined field47_0x44;
    undefined field48_0x45;
    undefined field49_0x46;
    undefined field50_0x47;
    undefined field51_0x48;
    undefined field52_0x49;
    undefined field53_0x4a;
    undefined field54_0x4b;
    undefined field55_0x4c;
    undefined field56_0x4d;
    undefined field57_0x4e;
    undefined field58_0x4f;
    undefined field59_0x50;
    undefined field60_0x51;
    undefined field61_0x52;
    undefined field62_0x53;
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    undefined field83_0x68;
    undefined field84_0x69;
    undefined field85_0x6a;
    undefined field86_0x6b;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    undefined field95_0x74;
    undefined field96_0x75;
    undefined field97_0x76;
    undefined field98_0x77;
    undefined field99_0x78;
    undefined field100_0x79;
    undefined field101_0x7a;
    undefined field102_0x7b;
    undefined field103_0x7c;
    undefined field104_0x7d;
    undefined field105_0x7e;
    undefined field106_0x7f;
    undefined field107_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
    undefined field111_0x84;
    undefined field112_0x85;
    undefined field113_0x86;
    undefined field114_0x87;
    undefined field115_0x88;
    undefined field116_0x89;
    undefined field117_0x8a;
    undefined field118_0x8b;
    undefined field119_0x8c;
    undefined field120_0x8d;
    undefined field121_0x8e;
    undefined field122_0x8f;
    undefined field123_0x90;
    undefined field124_0x91;
    undefined field125_0x92;
    undefined field126_0x93;
    undefined field127_0x94;
    undefined field128_0x95;
    undefined field129_0x96;
    undefined field130_0x97;
    undefined field131_0x98;
    undefined field132_0x99;
    undefined field133_0x9a;
    undefined field134_0x9b;
    undefined field135_0x9c;
    undefined field136_0x9d;
    undefined field137_0x9e;
    undefined field138_0x9f;
    undefined field139_0xa0;
    undefined field140_0xa1;
    undefined field141_0xa2;
    undefined field142_0xa3;
    undefined field143_0xa4;
    undefined field144_0xa5;
    undefined field145_0xa6;
    undefined field146_0xa7;
    undefined field147_0xa8;
    undefined field148_0xa9;
    undefined field149_0xaa;
    undefined field150_0xab;
    undefined field151_0xac;
    undefined field152_0xad;
    undefined field153_0xae;
    undefined field154_0xaf;
    undefined field155_0xb0;
    undefined field156_0xb1;
    undefined field157_0xb2;
    undefined field158_0xb3;
    undefined field159_0xb4;
    undefined field160_0xb5;
    undefined field161_0xb6;
    undefined field162_0xb7;
    undefined field163_0xb8;
    undefined field164_0xb9;
    undefined field165_0xba;
    undefined field166_0xbb;
    undefined field167_0xbc;
    undefined field168_0xbd;
    undefined field169_0xbe;
    undefined field170_0xbf;
    undefined field171_0xc0;
    undefined field172_0xc1;
    undefined field173_0xc2;
    undefined field174_0xc3;
    undefined field175_0xc4;
    undefined field176_0xc5;
    undefined field177_0xc6;
    undefined field178_0xc7;
    undefined field179_0xc8;
    undefined field180_0xc9;
    undefined field181_0xca;
    undefined field182_0xcb;
    undefined field183_0xcc;
    undefined field184_0xcd;
    undefined field185_0xce;
    undefined field186_0xcf;
    undefined field187_0xd0;
    undefined field188_0xd1;
    undefined field189_0xd2;
    undefined field190_0xd3;
    undefined field191_0xd4;
    undefined field192_0xd5;
    undefined field193_0xd6;
    undefined field194_0xd7;
    undefined field195_0xd8;
    undefined field196_0xd9;
    undefined field197_0xda;
    undefined field198_0xdb;
    undefined field199_0xdc;
    undefined field200_0xdd;
    undefined field201_0xde;
    undefined field202_0xdf;
    undefined field203_0xe0;
    undefined field204_0xe1;
    undefined field205_0xe2;
    undefined field206_0xe3;
    undefined field207_0xe4;
    undefined field208_0xe5;
    undefined field209_0xe6;
    undefined field210_0xe7;
    undefined field211_0xe8;
    undefined field212_0xe9;
    undefined field213_0xea;
    undefined field214_0xeb;
    undefined field215_0xec;
    undefined field216_0xed;
    undefined field217_0xee;
    undefined field218_0xef;
    undefined field219_0xf0;
    undefined field220_0xf1;
    undefined field221_0xf2;
    undefined field222_0xf3;
    undefined field223_0xf4;
    undefined field224_0xf5;
    undefined field225_0xf6;
    undefined field226_0xf7;
    undefined field227_0xf8;
    undefined field228_0xf9;
    undefined field229_0xfa;
    undefined field230_0xfb;
    undefined field231_0xfc;
    undefined field232_0xfd;
    undefined field233_0xfe;
    undefined field234_0xff;
    undefined field235_0x100;
    undefined field236_0x101;
    undefined field237_0x102;
    undefined field238_0x103;
    undefined field239_0x104;
    undefined field240_0x105;
    undefined field241_0x106;
    undefined field242_0x107;
    undefined field243_0x108;
    undefined field244_0x109;
    undefined field245_0x10a;
    undefined field246_0x10b;
    undefined field247_0x10c;
    undefined field248_0x10d;
    undefined field249_0x10e;
    undefined field250_0x10f;
    undefined field251_0x110;
    undefined field252_0x111;
    undefined field253_0x112;
    undefined field254_0x113;
    undefined field255_0x114;
    undefined field256_0x115;
    undefined field257_0x116;
    undefined field258_0x117;
    undefined field259_0x118;
    undefined field260_0x119;
    undefined field261_0x11a;
    undefined field262_0x11b;
    undefined field263_0x11c;
    undefined field264_0x11d;
    undefined field265_0x11e;
    undefined field266_0x11f;
    undefined field267_0x120;
    undefined field268_0x121;
    undefined field269_0x122;
    undefined field270_0x123;
    undefined field271_0x124;
    undefined field272_0x125;
    undefined field273_0x126;
    undefined field274_0x127;
    undefined field275_0x128;
    undefined field276_0x129;
    undefined field277_0x12a;
    undefined field278_0x12b;
    undefined field279_0x12c;
    undefined field280_0x12d;
    undefined field281_0x12e;
    undefined field282_0x12f;
    undefined field283_0x130;
    undefined field284_0x131;
    undefined field285_0x132;
    undefined field286_0x133;
    undefined field287_0x134;
    undefined field288_0x135;
    undefined field289_0x136;
    undefined field290_0x137;
    undefined field291_0x138;
    undefined field292_0x139;
    undefined field293_0x13a;
    undefined field294_0x13b;
    undefined field295_0x13c;
    undefined field296_0x13d;
    undefined field297_0x13e;
    undefined field298_0x13f;
    undefined field299_0x140;
    undefined field300_0x141;
    undefined field301_0x142;
    undefined field302_0x143;
    undefined field303_0x144;
    undefined field304_0x145;
    undefined field305_0x146;
    undefined field306_0x147;
    undefined field307_0x148;
    undefined field308_0x149;
    undefined field309_0x14a;
    undefined field310_0x14b;
    undefined field311_0x14c;
    undefined field312_0x14d;
    undefined field313_0x14e;
    undefined field314_0x14f;
    undefined field315_0x150;
    undefined field316_0x151;
    undefined field317_0x152;
    undefined field318_0x153;
    undefined field319_0x154;
    undefined field320_0x155;
    undefined field321_0x156;
    undefined field322_0x157;
    undefined field323_0x158;
    undefined field324_0x159;
    undefined field325_0x15a;
    undefined field326_0x15b;
    undefined field327_0x15c;
    undefined field328_0x15d;
    undefined field329_0x15e;
    undefined field330_0x15f;
    undefined field331_0x160;
    undefined field332_0x161;
    undefined field333_0x162;
    undefined field334_0x163;
    undefined field335_0x164;
    undefined field336_0x165;
    undefined field337_0x166;
    undefined field338_0x167;
    undefined field339_0x168;
    undefined field340_0x169;
    undefined field341_0x16a;
    undefined field342_0x16b;
    undefined field343_0x16c;
    undefined field344_0x16d;
    undefined field345_0x16e;
    undefined field346_0x16f;
    undefined field347_0x170;
    undefined field348_0x171;
    undefined field349_0x172;
    undefined field350_0x173;
    undefined field351_0x174;
    undefined field352_0x175;
    undefined field353_0x176;
    undefined field354_0x177;
    undefined field355_0x178;
    undefined field356_0x179;
    undefined field357_0x17a;
    undefined field358_0x17b;
    undefined field359_0x17c;
    undefined field360_0x17d;
    undefined field361_0x17e;
    undefined field362_0x17f;
    undefined field363_0x180;
    undefined field364_0x181;
    undefined field365_0x182;
    undefined field366_0x183;
    undefined field367_0x184;
    undefined field368_0x185;
    undefined field369_0x186;
    undefined field370_0x187;
    undefined field371_0x188;
    undefined field372_0x189;
    undefined field373_0x18a;
    undefined field374_0x18b;
    undefined field375_0x18c;
    undefined field376_0x18d;
    undefined field377_0x18e;
    undefined field378_0x18f;
    undefined field379_0x190;
    undefined field380_0x191;
    undefined field381_0x192;
    undefined field382_0x193;
    undefined field383_0x194;
    undefined field384_0x195;
    undefined field385_0x196;
    undefined field386_0x197;
    undefined field387_0x198;
    undefined field388_0x199;
    undefined field389_0x19a;
    undefined field390_0x19b;
    undefined field391_0x19c;
    undefined field392_0x19d;
    undefined field393_0x19e;
    undefined field394_0x19f;
    undefined field395_0x1a0;
    undefined field396_0x1a1;
    undefined field397_0x1a2;
    undefined field398_0x1a3;
    undefined field399_0x1a4;
    undefined field400_0x1a5;
    undefined field401_0x1a6;
    undefined field402_0x1a7;
    undefined field403_0x1a8;
    undefined field404_0x1a9;
    undefined field405_0x1aa;
    undefined field406_0x1ab;
    undefined field407_0x1ac;
    undefined field408_0x1ad;
    undefined field409_0x1ae;
    undefined field410_0x1af;
    undefined field411_0x1b0;
    undefined field412_0x1b1;
    undefined field413_0x1b2;
    undefined field414_0x1b3;
    undefined field415_0x1b4;
    undefined field416_0x1b5;
    undefined field417_0x1b6;
    undefined field418_0x1b7;
    undefined field419_0x1b8;
    undefined field420_0x1b9;
    undefined field421_0x1ba;
    undefined field422_0x1bb;
    undefined field423_0x1bc;
    undefined field424_0x1bd;
    undefined field425_0x1be;
    undefined field426_0x1bf;
    undefined field427_0x1c0;
    undefined field428_0x1c1;
    undefined field429_0x1c2;
    undefined field430_0x1c3;
    undefined field431_0x1c4;
    undefined field432_0x1c5;
    undefined field433_0x1c6;
    undefined field434_0x1c7;
    undefined field435_0x1c8;
    undefined field436_0x1c9;
    undefined field437_0x1ca;
    undefined field438_0x1cb;
    undefined field439_0x1cc;
    undefined field440_0x1cd;
    undefined field441_0x1ce;
    undefined field442_0x1cf;
    undefined field443_0x1d0;
    undefined field444_0x1d1;
    undefined field445_0x1d2;
    undefined field446_0x1d3;
    undefined field447_0x1d4;
    undefined field448_0x1d5;
    undefined field449_0x1d6;
    undefined field450_0x1d7;
    undefined field451_0x1d8;
    undefined field452_0x1d9;
    undefined field453_0x1da;
    undefined field454_0x1db;
    undefined field455_0x1dc;
    undefined field456_0x1dd;
    undefined field457_0x1de;
    undefined field458_0x1df;
    undefined field459_0x1e0;
    undefined field460_0x1e1;
    undefined field461_0x1e2;
    undefined field462_0x1e3;
    undefined field463_0x1e4;
    undefined field464_0x1e5;
    undefined field465_0x1e6;
    undefined field466_0x1e7;
    undefined field467_0x1e8;
    undefined field468_0x1e9;
    undefined field469_0x1ea;
    undefined field470_0x1eb;
    undefined field471_0x1ec;
    undefined field472_0x1ed;
    undefined field473_0x1ee;
    undefined field474_0x1ef;
    undefined field475_0x1f0;
    undefined field476_0x1f1;
    undefined field477_0x1f2;
    undefined field478_0x1f3;
    undefined field479_0x1f4;
    undefined field480_0x1f5;
    undefined field481_0x1f6;
    undefined field482_0x1f7;
    undefined field483_0x1f8;
    undefined field484_0x1f9;
    undefined field485_0x1fa;
    undefined field486_0x1fb;
    undefined field487_0x1fc;
    undefined field488_0x1fd;
    undefined field489_0x1fe;
    undefined field490_0x1ff;
    undefined field491_0x200;
    undefined field492_0x201;
    undefined field493_0x202;
    undefined field494_0x203;
    undefined field495_0x204;
    undefined field496_0x205;
    undefined field497_0x206;
    undefined field498_0x207;
    undefined field499_0x208;
    undefined field500_0x209;
    undefined field501_0x20a;
    undefined field502_0x20b;
    undefined field503_0x20c;
    undefined field504_0x20d;
    undefined field505_0x20e;
    undefined field506_0x20f;
    undefined field507_0x210;
    undefined field508_0x211;
    undefined field509_0x212;
    undefined field510_0x213;
    undefined field511_0x214;
    undefined field512_0x215;
    undefined field513_0x216;
    undefined field514_0x217;
    undefined field515_0x218;
    undefined field516_0x219;
    undefined field517_0x21a;
    undefined field518_0x21b;
    undefined field519_0x21c;
    undefined field520_0x21d;
    undefined field521_0x21e;
    undefined field522_0x21f;
    undefined field523_0x220;
    undefined field524_0x221;
    undefined field525_0x222;
    undefined field526_0x223;
    undefined field527_0x224;
    undefined field528_0x225;
    undefined field529_0x226;
    undefined field530_0x227;
    undefined field531_0x228;
    undefined field532_0x229;
    undefined field533_0x22a;
    undefined field534_0x22b;
    undefined field535_0x22c;
    undefined field536_0x22d;
    undefined field537_0x22e;
    undefined field538_0x22f;
    undefined field539_0x230;
    undefined field540_0x231;
    undefined field541_0x232;
    undefined field542_0x233;
    undefined field543_0x234;
    undefined field544_0x235;
    undefined field545_0x236;
    undefined field546_0x237;
    undefined field547_0x238;
    undefined field548_0x239;
    undefined field549_0x23a;
    undefined field550_0x23b;
    undefined field551_0x23c;
    undefined field552_0x23d;
    undefined field553_0x23e;
    undefined field554_0x23f;
    undefined field555_0x240;
    undefined field556_0x241;
    undefined field557_0x242;
    undefined field558_0x243;
    undefined field559_0x244;
    undefined field560_0x245;
    undefined field561_0x246;
    undefined field562_0x247;
    undefined field563_0x248;
    undefined field564_0x249;
    undefined field565_0x24a;
    undefined field566_0x24b;
    undefined field567_0x24c;
    undefined field568_0x24d;
    undefined field569_0x24e;
    undefined field570_0x24f;
    undefined field571_0x250;
    undefined field572_0x251;
    undefined field573_0x252;
    undefined field574_0x253;
    undefined field575_0x254;
    undefined field576_0x255;
    undefined field577_0x256;
    undefined field578_0x257;
    undefined field579_0x258;
    undefined field580_0x259;
    undefined field581_0x25a;
    undefined field582_0x25b;
    undefined field583_0x25c;
    undefined field584_0x25d;
    undefined field585_0x25e;
    undefined field586_0x25f;
    undefined field587_0x260;
    undefined field588_0x261;
    undefined field589_0x262;
    undefined field590_0x263;
    undefined field591_0x264;
    undefined field592_0x265;
    undefined field593_0x266;
    undefined field594_0x267;
    undefined field595_0x268;
    undefined field596_0x269;
    undefined field597_0x26a;
    undefined field598_0x26b;
    undefined field599_0x26c;
    undefined field600_0x26d;
    undefined field601_0x26e;
    undefined field602_0x26f;
    undefined field603_0x270;
    undefined field604_0x271;
    undefined field605_0x272;
    undefined field606_0x273;
    undefined field607_0x274;
    undefined field608_0x275;
    undefined field609_0x276;
    undefined field610_0x277;
    undefined field611_0x278;
    undefined field612_0x279;
    undefined field613_0x27a;
    undefined field614_0x27b;
    undefined field615_0x27c;
    undefined field616_0x27d;
    undefined field617_0x27e;
    undefined field618_0x27f;
    undefined field619_0x280;
    undefined field620_0x281;
    undefined field621_0x282;
    undefined field622_0x283;
    undefined field623_0x284;
    undefined field624_0x285;
    undefined field625_0x286;
    undefined field626_0x287;
    undefined field627_0x288;
    undefined field628_0x289;
    undefined field629_0x28a;
    undefined field630_0x28b;
    undefined field631_0x28c;
    undefined field632_0x28d;
    undefined field633_0x28e;
    undefined field634_0x28f;
    undefined field635_0x290;
    undefined field636_0x291;
    undefined field637_0x292;
    undefined field638_0x293;
    undefined field639_0x294;
    undefined field640_0x295;
    undefined field641_0x296;
    undefined field642_0x297;
    undefined field643_0x298;
    undefined field644_0x299;
    undefined field645_0x29a;
    undefined field646_0x29b;
    undefined field647_0x29c;
    undefined field648_0x29d;
    undefined field649_0x29e;
    undefined field650_0x29f;
    undefined field651_0x2a0;
    undefined field652_0x2a1;
    undefined field653_0x2a2;
    undefined field654_0x2a3;
    undefined field655_0x2a4;
    undefined field656_0x2a5;
    undefined field657_0x2a6;
    undefined field658_0x2a7;
    undefined field659_0x2a8;
    undefined field660_0x2a9;
    undefined field661_0x2aa;
    undefined field662_0x2ab;
    undefined field663_0x2ac;
    undefined field664_0x2ad;
    undefined field665_0x2ae;
    undefined field666_0x2af;
    undefined field667_0x2b0;
    undefined field668_0x2b1;
    undefined field669_0x2b2;
    undefined field670_0x2b3;
    undefined field671_0x2b4;
    undefined field672_0x2b5;
    undefined field673_0x2b6;
    undefined field674_0x2b7;
    undefined field675_0x2b8;
    undefined field676_0x2b9;
    undefined field677_0x2ba;
    undefined field678_0x2bb;
    undefined field679_0x2bc;
    undefined field680_0x2bd;
    undefined field681_0x2be;
    undefined field682_0x2bf;
    undefined field683_0x2c0;
    undefined field684_0x2c1;
    undefined field685_0x2c2;
    undefined field686_0x2c3;
    undefined field687_0x2c4;
    undefined field688_0x2c5;
    undefined field689_0x2c6;
    undefined field690_0x2c7;
    undefined field691_0x2c8;
    undefined field692_0x2c9;
    undefined field693_0x2ca;
    undefined field694_0x2cb;
    undefined field695_0x2cc;
    undefined field696_0x2cd;
    undefined field697_0x2ce;
    undefined field698_0x2cf;
    undefined field699_0x2d0;
    undefined field700_0x2d1;
    undefined field701_0x2d2;
    undefined field702_0x2d3;
    undefined field703_0x2d4;
    undefined field704_0x2d5;
    undefined field705_0x2d6;
    undefined field706_0x2d7;
    undefined field707_0x2d8;
    undefined field708_0x2d9;
    undefined field709_0x2da;
    undefined field710_0x2db;
    undefined field711_0x2dc;
    undefined field712_0x2dd;
    undefined field713_0x2de;
    undefined field714_0x2df;
    undefined field715_0x2e0;
    undefined field716_0x2e1;
    undefined field717_0x2e2;
    undefined field718_0x2e3;
    undefined field719_0x2e4;
    undefined field720_0x2e5;
    undefined field721_0x2e6;
    undefined field722_0x2e7;
    undefined field723_0x2e8;
    undefined field724_0x2e9;
    undefined field725_0x2ea;
    undefined field726_0x2eb;
    undefined field727_0x2ec;
    undefined field728_0x2ed;
    undefined field729_0x2ee;
    undefined field730_0x2ef;
    undefined field731_0x2f0;
    undefined field732_0x2f1;
    undefined field733_0x2f2;
    undefined field734_0x2f3;
    undefined field735_0x2f4;
    undefined field736_0x2f5;
    undefined field737_0x2f6;
    undefined field738_0x2f7;
    undefined field739_0x2f8;
    undefined field740_0x2f9;
    undefined field741_0x2fa;
    undefined field742_0x2fb;
    undefined field743_0x2fc;
    undefined field744_0x2fd;
    undefined field745_0x2fe;
    undefined field746_0x2ff;
    undefined field747_0x300;
    undefined field748_0x301;
    undefined field749_0x302;
    undefined field750_0x303;
    undefined field751_0x304;
    undefined field752_0x305;
    undefined field753_0x306;
    undefined field754_0x307;
    undefined field755_0x308;
    undefined field756_0x309;
    undefined field757_0x30a;
    undefined field758_0x30b;
    undefined field759_0x30c;
    undefined field760_0x30d;
    undefined field761_0x30e;
    undefined field762_0x30f;
    undefined field763_0x310;
    undefined field764_0x311;
    undefined field765_0x312;
    undefined field766_0x313;
    undefined field767_0x314;
    undefined field768_0x315;
    undefined field769_0x316;
    undefined field770_0x317;
    undefined field771_0x318;
    undefined field772_0x319;
    undefined field773_0x31a;
    undefined field774_0x31b;
    undefined field775_0x31c;
    undefined field776_0x31d;
    undefined field777_0x31e;
    undefined field778_0x31f;
    undefined field779_0x320;
    undefined field780_0x321;
    undefined field781_0x322;
    undefined field782_0x323;
    undefined field783_0x324;
    undefined field784_0x325;
    undefined field785_0x326;
    undefined field786_0x327;
    undefined field787_0x328;
    undefined field788_0x329;
    undefined field789_0x32a;
    undefined field790_0x32b;
    undefined field791_0x32c;
    undefined field792_0x32d;
    undefined field793_0x32e;
    undefined field794_0x32f;
    undefined field795_0x330;
    undefined field796_0x331;
    undefined field797_0x332;
    undefined field798_0x333;
    undefined field799_0x334;
    undefined field800_0x335;
    undefined field801_0x336;
    undefined field802_0x337;
    undefined field803_0x338;
    undefined field804_0x339;
    undefined field805_0x33a;
    undefined field806_0x33b;
    undefined field807_0x33c;
    undefined field808_0x33d;
    undefined field809_0x33e;
    undefined field810_0x33f;
    undefined field811_0x340;
    undefined field812_0x341;
    undefined field813_0x342;
    undefined field814_0x343;
    undefined field815_0x344;
    undefined field816_0x345;
    undefined field817_0x346;
    undefined field818_0x347;
    undefined field819_0x348;
    undefined field820_0x349;
    undefined field821_0x34a;
    undefined field822_0x34b;
    undefined field823_0x34c;
    undefined field824_0x34d;
    undefined field825_0x34e;
    undefined field826_0x34f;
    undefined field827_0x350;
    undefined field828_0x351;
    undefined field829_0x352;
    undefined field830_0x353;
    undefined field831_0x354;
    undefined field832_0x355;
    undefined field833_0x356;
    undefined field834_0x357;
    undefined field835_0x358;
    undefined field836_0x359;
    undefined field837_0x35a;
    undefined field838_0x35b;
    undefined field839_0x35c;
    undefined field840_0x35d;
    undefined field841_0x35e;
    undefined field842_0x35f;
    undefined field843_0x360;
    undefined field844_0x361;
    undefined field845_0x362;
    undefined field846_0x363;
    undefined field847_0x364;
    undefined field848_0x365;
    undefined field849_0x366;
    undefined field850_0x367;
    undefined field851_0x368;
    undefined field852_0x369;
    undefined field853_0x36a;
    undefined field854_0x36b;
    undefined field855_0x36c;
    undefined field856_0x36d;
    undefined field857_0x36e;
    undefined field858_0x36f;
    undefined field859_0x370;
    undefined field860_0x371;
    undefined field861_0x372;
    undefined field862_0x373;
    undefined field863_0x374;
    undefined field864_0x375;
    undefined field865_0x376;
    undefined field866_0x377;
    undefined field867_0x378;
    undefined field868_0x379;
    undefined field869_0x37a;
    undefined field870_0x37b;
    undefined field871_0x37c;
    undefined field872_0x37d;
    undefined field873_0x37e;
    undefined field874_0x37f;
    undefined field875_0x380;
    undefined field876_0x381;
    undefined field877_0x382;
    undefined field878_0x383;
    undefined field879_0x384;
    undefined field880_0x385;
    undefined field881_0x386;
    undefined field882_0x387;
    undefined field883_0x388;
    undefined field884_0x389;
    undefined field885_0x38a;
    undefined field886_0x38b;
    undefined field887_0x38c;
    undefined field888_0x38d;
    undefined field889_0x38e;
    undefined field890_0x38f;
    undefined field891_0x390;
    undefined field892_0x391;
    undefined field893_0x392;
    undefined field894_0x393;
    undefined field895_0x394;
    undefined field896_0x395;
    undefined field897_0x396;
    undefined field898_0x397;
    undefined field899_0x398;
    undefined field900_0x399;
    undefined field901_0x39a;
    undefined field902_0x39b;
    undefined field903_0x39c;
    undefined field904_0x39d;
    undefined field905_0x39e;
    undefined field906_0x39f;
    undefined field907_0x3a0;
    undefined field908_0x3a1;
    undefined field909_0x3a2;
    undefined field910_0x3a3;
    undefined field911_0x3a4;
    undefined field912_0x3a5;
    undefined field913_0x3a6;
    undefined field914_0x3a7;
    undefined field915_0x3a8;
    undefined field916_0x3a9;
    undefined field917_0x3aa;
    undefined field918_0x3ab;
    undefined field919_0x3ac;
    undefined field920_0x3ad;
    undefined field921_0x3ae;
    undefined field922_0x3af;
    undefined field923_0x3b0;
    undefined field924_0x3b1;
    undefined field925_0x3b2;
    undefined field926_0x3b3;
    undefined field927_0x3b4;
    undefined field928_0x3b5;
    undefined field929_0x3b6;
    undefined field930_0x3b7;
    undefined field931_0x3b8;
    undefined field932_0x3b9;
    undefined field933_0x3ba;
    undefined field934_0x3bb;
    undefined field935_0x3bc;
    undefined field936_0x3bd;
    undefined field937_0x3be;
    undefined field938_0x3bf;
    undefined field939_0x3c0;
    undefined field940_0x3c1;
    undefined field941_0x3c2;
    undefined field942_0x3c3;
    undefined field943_0x3c4;
    undefined field944_0x3c5;
    undefined field945_0x3c6;
    undefined field946_0x3c7;
    undefined field947_0x3c8;
    undefined field948_0x3c9;
    undefined field949_0x3ca;
    undefined field950_0x3cb;
    undefined field951_0x3cc;
    undefined field952_0x3cd;
    undefined field953_0x3ce;
    undefined field954_0x3cf;
    undefined field955_0x3d0;
    undefined field956_0x3d1;
    undefined field957_0x3d2;
    undefined field958_0x3d3;
    undefined field959_0x3d4;
    undefined field960_0x3d5;
    undefined field961_0x3d6;
    undefined field962_0x3d7;
    undefined field963_0x3d8;
    undefined field964_0x3d9;
    undefined field965_0x3da;
    undefined field966_0x3db;
    undefined field967_0x3dc;
    undefined field968_0x3dd;
    undefined field969_0x3de;
    undefined field970_0x3df;
    undefined field971_0x3e0;
    undefined field972_0x3e1;
    undefined field973_0x3e2;
    undefined field974_0x3e3;
    undefined field975_0x3e4;
    undefined field976_0x3e5;
    undefined field977_0x3e6;
    undefined field978_0x3e7;
    undefined field979_0x3e8;
    undefined field980_0x3e9;
    undefined field981_0x3ea;
    undefined field982_0x3eb;
    undefined field983_0x3ec;
    undefined field984_0x3ed;
    undefined field985_0x3ee;
    undefined field986_0x3ef;
    undefined field987_0x3f0;
    undefined field988_0x3f1;
    undefined field989_0x3f2;
    undefined field990_0x3f3;
    undefined field991_0x3f4;
    undefined field992_0x3f5;
    undefined field993_0x3f6;
    undefined field994_0x3f7;
    undefined field995_0x3f8;
    undefined field996_0x3f9;
    undefined field997_0x3fa;
    undefined field998_0x3fb;
    undefined field999_0x3fc;
    undefined field1000_0x3fd;
    undefined field1001_0x3fe;
    undefined field1002_0x3ff;
    undefined field1003_0x400;
    undefined field1004_0x401;
    undefined field1005_0x402;
    undefined field1006_0x403;
    undefined field1007_0x404;
    undefined field1008_0x405;
    undefined field1009_0x406;
    undefined field1010_0x407;
    undefined field1011_0x408;
    undefined field1012_0x409;
    undefined field1013_0x40a;
    undefined field1014_0x40b;
    undefined field1015_0x40c;
    undefined field1016_0x40d;
    undefined field1017_0x40e;
    undefined field1018_0x40f;
    undefined field1019_0x410;
    undefined field1020_0x411;
    undefined field1021_0x412;
    undefined field1022_0x413;
    undefined field1023_0x414;
    undefined field1024_0x415;
    undefined field1025_0x416;
    undefined field1026_0x417;
    undefined field1027_0x418;
    undefined field1028_0x419;
    undefined field1029_0x41a;
    undefined field1030_0x41b;
    undefined field1031_0x41c;
    undefined field1032_0x41d;
    undefined field1033_0x41e;
    undefined field1034_0x41f;
    undefined field1035_0x420;
    undefined field1036_0x421;
    undefined field1037_0x422;
    undefined field1038_0x423;
    undefined field1039_0x424;
    undefined field1040_0x425;
    undefined field1041_0x426;
    undefined field1042_0x427;
    undefined field1043_0x428;
    undefined field1044_0x429;
    undefined field1045_0x42a;
    undefined field1046_0x42b;
    undefined field1047_0x42c;
    undefined field1048_0x42d;
    undefined field1049_0x42e;
    undefined field1050_0x42f;
    undefined4 field1051_0x430;
    undefined field1052_0x434;
    undefined field1053_0x435;
    undefined field1054_0x436;
    undefined field1055_0x437;
    undefined field1056_0x438;
    undefined field1057_0x439;
    undefined field1058_0x43a;
    undefined field1059_0x43b;
    undefined field1060_0x43c;
    undefined field1061_0x43d;
    undefined field1062_0x43e;
    undefined field1063_0x43f;
    undefined field1064_0x440;
    undefined field1065_0x441;
    undefined field1066_0x442;
    undefined field1067_0x443;
    undefined field1068_0x444;
    undefined field1069_0x445;
    undefined field1070_0x446;
    undefined field1071_0x447;
    undefined field1072_0x448;
    undefined field1073_0x449;
    undefined field1074_0x44a;
    undefined field1075_0x44b;
    undefined field1076_0x44c;
    undefined field1077_0x44d;
    undefined field1078_0x44e;
    undefined field1079_0x44f;
    undefined4 field1080_0x450;
    undefined4 field1081_0x454;
    undefined4 field1082_0x458;
    undefined1 field1083_0x45c;
    undefined1 field1084_0x45d;
    undefined field1085_0x45e;
    undefined field1086_0x45f;
    undefined4 field1087_0x460;
};

typedef char sbyte;

typedef struct ScreenVBEffect ScreenVBEffect, *PScreenVBEffect;

struct ScreenVBEffect {
    u32 enabled;
    u32 bkgColor;
    u64 bkgAlpha;
    s32 aLines;
    u32 aColor;
    u64 aAlpha;
    s32 bLines;
    u32 bColor;
    u64 bAlpha;
};

typedef struct ShipsKilledStruct ShipsKilledStruct, *PShipsKilledStruct;

struct ShipsKilledStruct {
    int Aridia;
    int Eudora;
    int Gaspar;
    int Pokitaru;
    int Hoven;
    int Oltanis;
    int Unknown;
    int Veldin2;
};

typedef struct ShrubInstance ShrubInstance, *PShrubInstance;


/* WARNING! conflicting data type names: /instancesswag.h/ushort - /ushort */

struct ShrubInstance {
    char _unknown_00[64];
    struct BSphere bSphere;
    char _unknown_50[13];
    char dir_lights_upd;
    char _unknown_5e[12];
    ushort point_lights;
    char _unknown_6c[4];
};

typedef ulong size_t;

typedef struct sky_sprite sky_sprite, *Psky_sprite;

struct sky_sprite {
    char type;
    char drawn;
    char tex;
    char gs_alpha;
    int rgba;
    float rot;
    int user;
    struct Vec4 pos;
};

typedef struct sky_tex sky_tex, *Psky_tex;

struct sky_tex {
    uint tex0;
    uint tex1;
    ushort tex_ofs;
    ushort pal_ofs;
    ushort u_log;
    ushort v_log;
};

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef struct SoundData SoundData, *PSoundData;

struct SoundData { /* sound channel slot (DL _sound_data), 30 slots at 0x9637d0 */
    int handle;
    char state;
    char flags;
    undefined field3_0x6;
    undefined field4_0x7;
    void *pSoundDef;
    short bank_id;
    short sound_index;
    int vol;
    int pitch;
    struct MobyInstance *pMoby;
    void *pSoundInstance;
    float pos[4];
    float offset[4];
    int unk_40;
    undefined field15_0x44;
    undefined field16_0x45;
    undefined field17_0x46;
    undefined field18_0x47;
    undefined field19_0x48;
    undefined field20_0x49;
    undefined field21_0x4a;
    undefined field22_0x4b;
    undefined field23_0x4c;
    undefined field24_0x4d;
    undefined field25_0x4e;
    undefined field26_0x4f;
    undefined field27_0x50;
    undefined field28_0x51;
    undefined field29_0x52;
    undefined field30_0x53;
    undefined field31_0x54;
    undefined field32_0x55;
    undefined field33_0x56;
    undefined field34_0x57;
    undefined field35_0x58;
    undefined field36_0x59;
    undefined field37_0x5a;
    undefined field38_0x5b;
    undefined field39_0x5c;
    undefined field40_0x5d;
    undefined field41_0x5e;
    undefined field42_0x5f;
    undefined field43_0x60;
    undefined field44_0x61;
    undefined field45_0x62;
    undefined field46_0x63;
    undefined field47_0x64;
    undefined field48_0x65;
    undefined field49_0x66;
    undefined field50_0x67;
    undefined field51_0x68;
    undefined field52_0x69;
    undefined field53_0x6a;
    undefined field54_0x6b;
    undefined field55_0x6c;
    undefined field56_0x6d;
    undefined field57_0x6e;
    undefined field58_0x6f;
};

typedef struct soundGlobals soundGlobals, *PsoundGlobals;

struct soundGlobals {
    float sfxVolume;
    float musicVolume;
    float dialogVolume;
    float ambientVolume;
    float shellVolume;
    float mpegVolume;
};

typedef struct SoundVTable SoundVTable, *PSoundVTable;

struct SoundVTable {
    uint idx;
    void *update;
};

typedef struct Spawnpoint Spawnpoint, *PSpawnpoint;

struct Spawnpoint {
    struct Vec4 pos;
    struct Vec4 rot;
    struct ABGR colorReadOnly;
    struct ABGR light;
    undefined4 colorManipulator;
    undefined4 field5_0x2c;
    byte field6_0x30;
    byte field7_0x31;
    byte field8_0x32;
    byte field9_0x33;
    int heroType;
    struct MobyInstance *heroMobyPtr;
    int field12_0x3c;
};

typedef struct Sphere Sphere, *PSphere;

struct Sphere {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

typedef enum enum_1 StringId;

typedef struct Tfrag Tfrag, *PTfrag;

struct Tfrag {
    struct BSphere bSphere;
    char _unknown_10[12];
    ushort point_lights;
    char occlIndex[3];
    char dir_lights_upd;
    char _unknown_22[14];
};

typedef struct TieInstance TieInstance, *PTieInstance;

struct TieInstance {
    char _unknown_00[64];
    struct BSphere bSphere;
    char field2_0x50[8];
    char occlIndex[12];
    undefined1 field4_0x64;
    undefined1 field5_0x65;
    undefined1 field6_0x66;
    undefined1 field7_0x67;
    undefined1 field8_0x68;
    ushort point_lights;
    char _unknown_6c[4];
};

typedef enum TROPHIES_ENUM {
    GADGET_MASTER=0,
    BOLT_COMMANDO=1,
    SKILLFUL=2,
    RACHET_KING_MIDAS=3,
    DREK_THIS=4,
    SPEEDY=5,
    ULTIMATE_ANIMAL=6,
    TWISTED_HOVERBOARD=7,
    UNLOCK_SKETCHBOOK=8,
    VANDAL=9,
    GIRL_TROUBLE=10,
    GADGETEER=11,
    NANO_THIS=12,
    BOLT_COLLECTOR=13,
    ALL_QWARKD_UP=14,
    EAT_LEAD=15,
    HEY_OVER_HERE=16,
    STRIKE_A_POSE=17,
    VEHICLE_BOMBARDER=18,
    CLUCK_CLUCK=19,
    QWARKTASTIC=20,
    TAKE_AIM=21,
    TRANSPORTED=22,
    DESTROYED=23,
    SNIPER=24,
    LOMBAX_MAGNETIC=25,
    BURIED_TREASURE=26,
    HIT_ME_MORE=27,
    THESE_ARE_NOT_THE_DROIDS=28,
    MAGICIAN=29,
    VERY_SUCKY=30,
    PEST_CONTROL=31,
    SITTING_DUCKS=32,
    CAREFUL_CRUISE=33,
    GOING_COMMANDO=34
} TROPHIES_ENUM;


/* WARNING! conflicting data type names: /EBOOT.ELF.h/uchar - /uchar */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/uchar - /uchar */


/* WARNING! conflicting data type names: /item.h/uchar - /uchar */


/* WARNING! conflicting data type names: /legdata.h/uchar - /uchar */


/* WARNING! conflicting data type names: /playerstate (1).h/uchar - /uchar */


/* WARNING! conflicting data type names: /sky.h/uchar - /uchar */


/* WARNING! conflicting data type names: /sps.h/uchar - /uchar */


/* WARNING! conflicting data type names: /stringids.h/uchar - /uchar */


/* WARNING! conflicting data type names: /yo.h/uchar - /uchar */


/* WARNING! conflicting data type names: /EBOOT.ELF.h/uint - /uint */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/uint - /uint */


/* WARNING! conflicting data type names: /item.h/uint - /uint */


/* WARNING! conflicting data type names: /legdata.h/uint - /uint */


/* WARNING! conflicting data type names: /ocean.h/uint - /uint */


/* WARNING! conflicting data type names: /playerstate (1).h/uint - /uint */


/* WARNING! conflicting data type names: /sky.h/uint - /uint */


/* WARNING! conflicting data type names: /sps.h/uint - /uint */


/* WARNING! conflicting data type names: /stringids.h/uint - /uint */


/* WARNING! conflicting data type names: /yo.h/uint - /uint */

typedef ulonglong uint16;

typedef enum enum_1 UiTexCategory;


/* WARNING! conflicting data type names: /EBOOT.ELF.h/ulong - /ulong */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/ulong - /ulong */


/* WARNING! conflicting data type names: /item.h/ulong - /ulong */


/* WARNING! conflicting data type names: /legdata.h/ulong - /ulong */


/* WARNING! conflicting data type names: /ocean.h/ulong - /ulong */


/* WARNING! conflicting data type names: /playerstate (1).h/ulong - /ulong */


/* WARNING! conflicting data type names: /sky.h/ulong - /ulong */


/* WARNING! conflicting data type names: /sps.h/ulong - /ulong */


/* WARNING! conflicting data type names: /stringids.h/ulong - /ulong */


/* WARNING! conflicting data type names: /yo.h/ulong - /ulong */


/* WARNING! conflicting data type names: /EBOOT.ELF.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /item.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /ocean.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /playerstate (1).h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /sps.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /stringids.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /yo.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/undefined - /undefined */


/* WARNING! conflicting data type names: /item.h/undefined - /undefined */


/* WARNING! conflicting data type names: /legdata.h/undefined - /undefined */


/* WARNING! conflicting data type names: /playerstate (1).h/undefined - /undefined */


/* WARNING! conflicting data type names: /sky.h/undefined - /undefined */


/* WARNING! conflicting data type names: /sps.h/undefined - /undefined */


/* WARNING! conflicting data type names: /stringids.h/undefined - /undefined */


/* WARNING! conflicting data type names: /yo.h/undefined - /undefined */


/* WARNING! conflicting data type names: /EBOOT.ELF.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /item.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /legdata.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /ocean.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /playerstate (1).h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /sky.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /sps.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /stringids.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /yo.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /EBOOT.ELF.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /item.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /legdata.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /ocean.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /playerstate (1).h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /sky.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /sps.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /stringids.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /yo.h/undefined2 - /undefined2 */

typedef uint undefined3;


/* WARNING! conflicting data type names: /EBOOT.ELF.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /item.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /legdata.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /ocean.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /playerstate (1).h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /sky.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /sps.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /stringids.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /yo.h/undefined4 - /undefined4 */

typedef ulong undefined5;

typedef ulong undefined6;


/* WARNING! conflicting data type names: /EBOOT.ELF.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /item.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /legdata.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /ocean.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /playerstate (1).h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /sky.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /sps.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /stringids.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /yo.h/undefined8 - /undefined8 */

typedef struct UpdateCam UpdateCam, *PUpdateCam;

struct UpdateCam { /* DL struct UpdateCam (RC1 size 0xa0); 48 of them at UpdateCams 0x951a60 */
    float mtx[12];
    float pos[4];
    float rot[4];
    float pol[5];
    float lPos[3];
    void *control;
    struct CameraControlActivation activation;
    short importCameraIdx;
    short type;
    char subType;
    char bumped;
    short bumpOff;
    short funcIdx;
    short active;
    undefined field14_0x90;
    undefined field15_0x91;
    undefined field16_0x92;
    undefined field17_0x93;
    undefined field18_0x94;
    undefined field19_0x95;
    undefined field20_0x96;
    undefined field21_0x97;
    undefined field22_0x98;
    undefined field23_0x99;
    undefined field24_0x9a;
    undefined field25_0x9b;
    undefined field26_0x9c;
    undefined field27_0x9d;
    undefined field28_0x9e;
    undefined field29_0x9f;
};


/* WARNING! conflicting data type names: /EBOOT.ELF.h/ushort - /ushort */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/ushort - /ushort */


/* WARNING! conflicting data type names: /item.h/ushort - /ushort */


/* WARNING! conflicting data type names: /legdata.h/ushort - /ushort */


/* WARNING! conflicting data type names: /playerstate (1).h/ushort - /ushort */


/* WARNING! conflicting data type names: /sky.h/ushort - /ushort */


/* WARNING! conflicting data type names: /sps.h/ushort - /ushort */


/* WARNING! conflicting data type names: /stringids.h/ushort - /ushort */


/* WARNING! conflicting data type names: /yo.h/ushort - /ushort */

typedef struct Vec2 Vec2, *PVec2;

struct Vec2 {
    float x;
    float y;
};

typedef struct Vec3 Vec3, *PVec3;

struct Vec3 {
    float x;
    float y;
    float z;
};


/* WARNING! conflicting data type names: /sky.h/vec4 - /legdata.h/vec4 */

typedef struct ViewContext ViewContext, *PViewContext;

struct ViewContext {
    u32 pad_00[16];
    struct CameraMatrix field_40;
    u32 pad_80[8];
    float nearClip;
    float farClip;
    float xclipratio;
    float yclipratio;
    float xratio;
    float yratio;
    float xradpad;
    float yradpad;
    struct CameraMatrix fMtx;
    struct CameraMatrix nfMtx;
    struct CameraMatrix hMtx;
    u32 pad_180[4];
    struct Vec4 fontClipScale;
    float hvdf[4];
    u32 pad_1B0[4];
    float guardX;
    u32 pad_1C4[15];
    float xpix;
    float ypix;
    float xclip;
    float yclip;
    float perspScale;
    float fog1;
    float fogNearDist;
    float fogFarDist;
    float fogMult;
    float fogAdd;
    float fogNearIntensity;
    float fogFarIntensity;
    int fogR;
    int fogG;
    int fogB;
    int occlColor0;
    int occlColor1;
    int occlColor2;
};

typedef struct WaterSheet WaterSheet, *PWaterSheet;

struct WaterSheet {
    uint8_t unknown0[8];
    void *cullData;
    int32_t vertexCount;
    float scrollSpeedLayer0;
    float scrollSpeedLayer1;
    uint8_t unknown18[4];
    int32_t frameRate;
    float velocityU0;
    float velocityV0;
    float velocityU1;
    float velocityV1;
    uint8_t unknown30[4];
    int32_t textureId0;
    int32_t textureId1;
    uint8_t depthBias0;
    uint8_t depthBias1;
    uint8_t unknown3e[2];
    float offsetU0;
    float offsetV0;
    float offsetU1;
    float offsetV1;
    uint32_t frameCounter;
    uint8_t unknown54[12];
};

typedef struct WaterSheetVert WaterSheetVert, *PWaterSheetVert;

struct WaterSheetVert {
    struct Vec3 pos;
    struct Vec2 uv0;
    struct Vec2 uv1;
    uint32_t color;
};

typedef struct WaterTile WaterTile, *PWaterTile;

typedef struct WaterTileBuf WaterTileBuf, *PWaterTileBuf;

struct WaterTileBuf {
    float height[16][16];
    float heightTop[16];
    float heightLeft[16];
    float heightBottom[16];
    float heightRight[16];
    float heightBottom2[16];
    float heightRight2[16];
    float heightCorner[6];
    float pad2[10];
};

struct WaterTile {
    struct Vec3 tilePos;
    byte tileLinkTop;
    byte tileLinkLeft;
    byte tileLinkBottom;
    byte tileLinkRight;
    byte tileLinkCorners[4];
    uint baseTex;
    uint ovlTex;
    u8 baseAlpha;
    u8 ovlAlpha;
    u16 mask;
    struct Vec2 scroll;
    struct Vec2 scrollRate;
    struct Vec2 rotAngle;
    struct Vec2 rotRate;
    float wig_size;
    uint32_t flags;
    struct WaterTileBuf buf[3];
};

typedef struct WaterTileBox WaterTileBox, *PWaterTileBox;

struct WaterTileBox {
    s32 min_x;
    s32 min_y;
    s32 min_z;
    u16 size_x;
    u16 size_y;
};

typedef struct WaterTileConst WaterTileConst, *PWaterTileConst;

struct WaterTileConst {
    struct Vec2 TileSize;
    struct Vec2 TileOffset;
    struct Vec2 TileGridSize;
    float texScale;
    float minHeight;
    float waveInc;
    u32 pad0;
    u32 tex0;
    u32 tex1;
    struct Vec3 lightDir;
    byte alpha0;
    byte alpha1;
    char pad[2];
};


/* WARNING! conflicting data type names: /EBOOT.ELF.h/word - /word */


/* WARNING! conflicting data type names: /EBOOT.ELF.hasdfasdfasdf.h/word - /word */


/* WARNING! conflicting data type names: /item.h/word - /word */


/* WARNING! conflicting data type names: /legdata.h/word - /word */


/* WARNING! conflicting data type names: /ocean.h/word - /word */


/* WARNING! conflicting data type names: /playerstate (1).h/word - /word */


/* WARNING! conflicting data type names: /sky.h/word - /word */


/* WARNING! conflicting data type names: /sps.h/word - /word */


/* WARNING! conflicting data type names: /stringids.h/word - /word */


/* WARNING! conflicting data type names: /yo.h/word - /word */

