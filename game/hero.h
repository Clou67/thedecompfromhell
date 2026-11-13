#pragma once
// game/hero.h
#include "types.h"
#include "game/collproc.h"

// ---- types
struct HeroCollVert { /* u16 coords = world*64 */
    short x;
    short y;
    short z;
    short pad;
};

struct HeroCollCell { /* Hero-only collision cell (camera passes through). Coords are u16 = world*64. data -> HeroCollVert[vertCount] then HeroCollTri-style 4-byte index records[triCount]. data is relocated to an absolute pointer by ParseColl. */
    short bsphereX;
    short bsphereY;
    short bsphereZ;
    short bsphereRad;
    short triCount;
    short vertCount;
    void *data;
};

struct HeroCollHeader { /* Hero collision block: cellCount, 12 bytes pad, then HeroCollCell[cellCount]. */
    int cellCount;
    int pad[3];
    struct HeroCollCell cells[1];
};

typedef enum ITEM_ENUM {
    UNK_00=0,
    UNK_01=1,
    ITEM_ENUM__HELI_PACK=2,
    ITEM_ENUM__THRUSTER_PACK=3,
    ITEM_ENUM__HYDRO_PACK=4,
    ITEM_ENUM__SONIC_SUMMONER=5,
    ITEM_ENUM__O2_MASK=6,
    ITEM_ENUM__PILOTS_HELMET=7,
    WRENCH=8,
    ITEM_ENUM__SUCK_CANNON=9,
    ITEM_ENUM__BOMB_GLOVE=10,
    ITEM_ENUM__DEVASTATOR=11,
    ITEM_ENUM__SWINGSHOT=12,
    VISIBOMB_GUN=13,
    ITEM_ENUM__TAUNTER=14,
    ITEM_ENUM__BLASTER=15,
    ITEM_ENUM__PYROCITOR=16,
    MINEGLOVE=17,
    ITEM_ENUM__WALLOPER=18,
    ITEM_ENUM__TESLA_CLAW=19,
    ITEM_ENUM__GLOVE_OF_DOOM=20,
    ITEM_ENUM__MORPH_O_RAY=21,
    ITEM_ENUM__HYDRODISPLACER=22,
    ITEM_ENUM__RYNO=23,
    ITEM_ENUM__DRONE_DEVICE=24,
    ITEM_ENUM__DECOY_GLOVE=25,
    ITEM_ENUM__TRESPASSER=26,
    ITEM_ENUM__METAL_DETECTOR=27,
    ITEM_ENUM__MAGNEBOOTS=28,
    ITEM_ENUM__GRINDBOOTS=29,
    ITEM_ENUM__HOVERBOARD=30,
    ITEM_ENUM__HOLOGUISE=31,
    ITEM_ENUM__PDA=32,
    MAPOMATIC=33,
    ITEM_ENUM__BOLT_GRABBER=34,
    PERSUADER=35
} ITEM_ENUM;

// ---- globals
extern char CHAR_ARRAY_00a0fdc4[296]; /* 0xa0fdc4 */
extern char CHAR_ARRAY_00a0feec[288]; /* 0xa0feec */
extern char Cheats[12]; /* 0x96c074 */
extern CollOutput g_CollOutput; /* 0xa10940 */
extern undefined4 DAT_00083aa4; /* 0x83aa4 */
extern undefined4 DAT_000878e0; /* 0x878e0 */
extern undefined4 DAT_00094b60; /* 0x94b60 */
extern undefined4 DAT_0009b8b0; /* 0x9b8b0 */
extern undefined4 DAT_0009ba80; /* 0x9ba80 */
extern undefined4 DAT_0009bee8; /* 0x9bee8 */
extern undefined4 DAT_000a52dc; /* 0xa52dc */
extern undefined1 DAT_0071eed0; /* 0x71eed0 */
extern undefined4 DAT_0071f40c; /* 0x71f40c */
extern undefined4 DAT_0071fb24; /* 0x71fb24 */
extern undefined4 DAT_00720000; /* no defined data */
extern undefined4 DAT_00720b70; /* 0x720b70 */
extern undefined4 DAT_00720bbc; /* 0x720bbc */
extern undefined4 DAT_00720bc0; /* 0x720bc0 */
extern undefined4 DAT_00720bc4; /* 0x720bc4 */
extern undefined4 DAT_00720bc8; /* no defined data */
extern undefined4 DAT_00720ca8; /* no defined data */
extern undefined4 DAT_00720d00; /* no defined data */
extern undefined4 DAT_00720d1c; /* no defined data */
extern undefined4 DAT_00720dd0; /* no defined data */
extern undefined4 DAT_00720e14; /* 0x720e14 */
extern undefined4 DAT_00720e20; /* 0x720e20 */
extern undefined4 DAT_00720e28; /* 0x720e28 */
extern undefined4 DAT_00720e30; /* 0x720e30 */
extern undefined4 DAT_00720ff0; /* 0x720ff0 */
extern undefined4 DAT_0072100c; /* no defined data */
extern undefined4 DAT_00721014; /* no defined data */
extern undefined4 DAT_00721018; /* no defined data */
extern undefined4 DAT_00721020; /* 0x721020 */
extern undefined4 DAT_00721024; /* 0x721024 */
extern undefined4 DAT_00721028; /* no defined data */
extern undefined4 DAT_0072102c; /* 0x72102c */
extern undefined4 DAT_00721030; /* no defined data */
extern undefined4 DAT_007219dc; /* 0x7219dc */
extern undefined4 DAT_00721a28; /* 0x721a28 */
extern undefined4 DAT_00721a74; /* 0x721a74 */
extern undefined4 DAT_00721afc; /* no defined data */
extern undefined4 DAT_00721b44; /* no defined data */
extern undefined4 DAT_00721b88; /* no defined data */
extern undefined4 DAT_00721b98; /* no defined data */
extern undefined4 DAT_00721bb0; /* no defined data */
extern undefined1 DAT_00721bd1; /* 0x721bd1 */
extern undefined4 DAT_00721c10; /* 0x721c10 */
extern undefined4 DAT_00721c14; /* 0x721c14 */
extern undefined4 DAT_00721c18; /* 0x721c18 */
extern undefined4 DAT_00721c1c; /* 0x721c1c */
extern undefined4 DAT_00721c20; /* 0x721c20 */
extern undefined4 DAT_00721c24; /* 0x721c24 */
extern undefined4 DAT_00721c28; /* 0x721c28 */
extern undefined4 DAT_00721c2c; /* 0x721c2c */
extern undefined4 DAT_00721c30; /* 0x721c30 */
extern undefined4 DAT_00721c34; /* 0x721c34 */
extern undefined4 DAT_00721c38; /* 0x721c38 */
extern undefined4 DAT_00721c3c; /* 0x721c3c */
extern undefined4 DAT_00721c40; /* 0x721c40 */
extern undefined4 DAT_00721c44; /* 0x721c44 */
extern undefined4 DAT_00721c48; /* 0x721c48 */
extern undefined4 DAT_00721c4c; /* 0x721c4c */
extern undefined4 DAT_00721c50; /* 0x721c50 */
extern undefined4 DAT_00721c54; /* 0x721c54 */
extern undefined4 DAT_00721c58; /* 0x721c58 */
extern undefined4 DAT_00721c5c; /* 0x721c5c */
extern undefined4 DAT_00721c60; /* 0x721c60 */
extern undefined4 DAT_00721c64; /* 0x721c64 */
extern undefined4 DAT_00721c68; /* 0x721c68 */
extern undefined4 DAT_00721c6c; /* 0x721c6c */
extern undefined2 DAT_00721c72; /* 0x721c72 */
extern undefined4 DAT_00721c74; /* 0x721c74 */
extern undefined4 DAT_00721c78; /* 0x721c78 */
extern undefined4 DAT_00721c7c; /* 0x721c7c */
extern undefined4 DAT_00721ce0; /* 0x721ce0 */
extern undefined4 DAT_00721ce4; /* 0x721ce4 */
extern undefined4 DAT_00721ce8; /* 0x721ce8 */
extern undefined4 DAT_00721d24; /* 0x721d24 */
extern undefined4 DAT_00721d28; /* 0x721d28 */
extern undefined4 DAT_00721d90; /* 0x721d90 */
extern undefined4 DAT_00721d98; /* 0x721d98 */
extern undefined4 DAT_00721dd4; /* 0x721dd4 */
extern undefined4 DAT_00721dd8; /* 0x721dd8 */
extern undefined4 DAT_00721e24; /* 0x721e24 */
extern undefined4 DAT_00721e28; /* 0x721e28 */
extern undefined4 DAT_00721e40; /* 0x721e40 */
extern undefined4 DAT_00721e44; /* 0x721e44 */
extern undefined4 DAT_00721e48; /* 0x721e48 */
extern undefined4 DAT_00721e84; /* 0x721e84 */
extern undefined4 DAT_00721e88; /* 0x721e88 */
extern undefined4 DAT_00721e8c; /* 0x721e8c */
extern undefined4 DAT_00721eb0; /* 0x721eb0 */
extern undefined4 DAT_00721eb4; /* 0x721eb4 */
extern undefined4 DAT_00721eb8; /* 0x721eb8 */
extern undefined4 DAT_00721ebc; /* 0x721ebc */
extern undefined4 DAT_00721ef0; /* 0x721ef0 */
extern undefined4 DAT_00721ef4; /* 0x721ef4 */
extern undefined4 DAT_00721ef8; /* 0x721ef8 */
extern undefined4 DAT_00721f34; /* 0x721f34 */
extern undefined4 DAT_00721f38; /* 0x721f38 */
extern undefined4 DAT_00721f3c; /* 0x721f3c */
extern undefined4 DAT_00721f60; /* 0x721f60 */
extern undefined4 DAT_00721f64; /* 0x721f64 */
extern undefined4 DAT_00721f68; /* 0x721f68 */
extern undefined4 DAT_00721f6c; /* 0x721f6c */
extern undefined4 DAT_00721fa0; /* 0x721fa0 */
extern undefined4 DAT_00721fa4; /* 0x721fa4 */
extern undefined4 DAT_00721fa8; /* 0x721fa8 */
extern undefined4 DAT_00721fe4; /* 0x721fe4 */
extern undefined4 DAT_00721fe8; /* 0x721fe8 */
extern undefined4 DAT_00721fec; /* 0x721fec */
extern undefined4 DAT_00722050; /* 0x722050 */
extern undefined4 DAT_00722100; /* 0x722100 */
extern undefined4 DAT_007221b4; /* 0x7221b4 */
extern undefined4 DAT_007221f4; /* 0x7221f4 */
extern undefined4 DAT_007221f8; /* 0x7221f8 */
extern undefined4 DAT_00722264; /* 0x722264 */
extern undefined4 DAT_007222a4; /* 0x7222a4 */
extern undefined4 DAT_007222a8; /* 0x7222a8 */
extern undefined4 DAT_00722474; /* 0x722474 */
extern undefined4 DAT_00722478; /* 0x722478 */
extern undefined4 DAT_00722520; /* 0x722520 */
extern undefined4 DAT_00722524; /* 0x722524 */
extern undefined4 DAT_00722528; /* 0x722528 */
extern undefined4 DAT_007225d0; /* 0x7225d0 */
extern undefined4 DAT_007225d4; /* 0x7225d4 */
extern undefined4 DAT_007225d8; /* 0x7225d8 */
extern undefined4 DAT_00722680; /* 0x722680 */
extern undefined4 DAT_00722684; /* 0x722684 */
extern undefined4 DAT_00722688; /* 0x722688 */
extern undefined4 DAT_00722730; /* 0x722730 */
extern undefined4 DAT_00722734; /* 0x722734 */
extern undefined4 DAT_00722738; /* 0x722738 */
extern undefined4 DAT_00722898; /* 0x722898 */
extern undefined4 DAT_007228c8; /* 0x7228c8 */
extern undefined4 DAT_007228d4; /* 0x7228d4 */
extern undefined4 DAT_007228d8; /* 0x7228d8 */
extern undefined4 DAT_007228dc; /* 0x7228dc */
extern undefined4 DAT_00722cb0; /* 0x722cb0 */
extern undefined4 DAT_00722cb8; /* 0x722cb8 */
extern undefined4 DAT_00722d60; /* 0x722d60 */
extern undefined4 DAT_00722d64; /* 0x722d64 */
extern undefined4 DAT_00722d68; /* 0x722d68 */
extern undefined4 DAT_00722dac; /* 0x722dac */
extern undefined4 DAT_00722e10; /* 0x722e10 */
extern undefined4 DAT_00722ec0; /* 0x722ec0 */
extern undefined4 DAT_00722ec8; /* 0x722ec8 */
extern undefined4 DAT_00722f04; /* 0x722f04 */
extern undefined4 DAT_00722f08; /* 0x722f08 */
extern undefined4 DAT_00722f78; /* 0x722f78 */
extern undefined4 DAT_00722fb4; /* 0x722fb4 */
extern undefined4 DAT_00722fb8; /* 0x722fb8 */
extern undefined4 DAT_00722fbc; /* 0x722fbc */
extern undefined4 DAT_00723064; /* 0x723064 */
extern undefined4 DAT_00723068; /* 0x723068 */
extern undefined4 DAT_0072311c; /* 0x72311c */
extern undefined2 DAT_00723120; /* 0x723120 */
extern undefined2 DAT_0072313c; /* 0x72313c */
extern undefined2 DAT_00723154; /* 0x723154 */
extern undefined2 DAT_00723160; /* 0x723160 */
extern undefined4 DAT_0072317c; /* no defined data */
extern undefined4 DAT_00723180; /* no defined data */
extern undefined4 DAT_00723190; /* no defined data */
extern undefined4 DAT_00723194; /* no defined data */
extern undefined4 DAT_0072319c; /* no defined data */
extern undefined4 DAT_00723308; /* no defined data */
extern undefined4 DAT_0072330c; /* no defined data */
extern undefined4 DAT_00723310; /* 0x723310 */
extern undefined4 DAT_00723314; /* 0x723314 */
extern undefined4 DAT_00723320; /* 0x723320 */
extern undefined4 DAT_00723338; /* no defined data */
extern undefined4 DAT_0072333c; /* 0x72333c */
extern undefined4 DAT_00723340; /* no defined data */
extern undefined4 DAT_0072348c; /* no defined data */
extern undefined4 DAT_00723498; /* no defined data */
extern undefined4 DAT_007234d4; /* no defined data */
extern undefined4 DAT_00723534; /* no defined data */
extern undefined4 DAT_007235b0; /* 0x7235b0 */
extern undefined4 DAT_007235b4; /* 0x7235b4 */
extern undefined4 DAT_007235b8; /* 0x7235b8 */
extern undefined4 DAT_007235bc; /* 0x7235bc */
extern undefined4 DAT_00723620; /* 0x723620 */
extern undefined4 DAT_00723624; /* 0x723624 */
extern undefined4 DAT_00723628; /* 0x723628 */
extern undefined4 DAT_0072362c; /* 0x72362c */
extern undefined4 DAT_00723690; /* 0x723690 */
extern undefined4 DAT_00723694; /* 0x723694 */
extern undefined4 DAT_00723698; /* 0x723698 */
extern undefined4 DAT_0072369c; /* 0x72369c */
extern undefined4 DAT_00723700; /* no defined data */
extern undefined4 DAT_00723730; /* 0x723730 */
extern undefined4 DAT_00723750; /* 0x723750 */
extern undefined4 DAT_00723754; /* 0x723754 */
extern undefined4 DAT_00723758; /* 0x723758 */
extern undefined4 DAT_0072375c; /* 0x72375c */
extern undefined4 DAT_00723790; /* 0x723790 */
extern undefined4 DAT_00723794; /* 0x723794 */
extern undefined4 DAT_00723798; /* 0x723798 */
extern undefined4 DAT_0072379c; /* 0x72379c */
extern undefined4 DAT_007237d0; /* 0x7237d0 */
extern undefined4 DAT_007237d4; /* 0x7237d4 */
extern undefined4 DAT_007237d8; /* 0x7237d8 */
extern undefined4 DAT_007237dc; /* 0x7237dc */
extern undefined4 DAT_00723810; /* no defined data */
extern undefined4 DAT_00723868; /* 0x723868 */
extern undefined4 DAT_00723880; /* 0x723880 */
extern undefined4 DAT_00723884; /* 0x723884 */
extern undefined4 DAT_00723888; /* 0x723888 */
extern undefined4 DAT_007358e0; /* 0x7358e0 */
extern undefined4 DAT_00735904; /* no defined data */
extern undefined4 DAT_00737994; /* no defined data */
extern undefined4 DAT_007379d0; /* no defined data */
extern undefined4 DAT_00965050; /* no defined data */
extern undefined4 DAT_00969c80; /* 0x969c80 */
extern undefined4 DAT_00969c84; /* 0x969c84 */
extern undefined4 DAT_00969c88; /* 0x969c88 */
extern undefined4 DAT_00969c98; /* 0x969c98 */
extern undefined4 DAT_00969c9c; /* 0x969c9c */
extern undefined4 DAT_00969ce4; /* 0x969ce4 */
extern undefined4 DAT_00969ce8; /* 0x969ce8 */
extern undefined4 DAT_00969cec; /* 0x969cec */
extern undefined4 DAT_00969cf0; /* 0x969cf0 */
extern undefined4 DAT_00969cf4; /* 0x969cf4 */
extern undefined4 DAT_00969cf8; /* 0x969cf8 */
extern undefined4 DAT_00969cfc; /* 0x969cfc */
extern undefined4 DAT_00969d00; /* 0x969d00 */
extern undefined4 DAT_00969d04; /* 0x969d04 */
extern undefined4 DAT_00969d08; /* 0x969d08 */
extern undefined4 DAT_00969d0c; /* 0x969d0c */
extern undefined4 DAT_00969d10; /* 0x969d10 */
extern undefined4 DAT_00969d14; /* 0x969d14 */
extern undefined4 DAT_00969d18; /* 0x969d18 */
extern undefined4 DAT_00969d1c; /* 0x969d1c */
extern undefined4 DAT_00969d24; /* 0x969d24 */
extern undefined4 DAT_00969d28; /* 0x969d28 */
extern undefined4 DAT_00969d2c; /* 0x969d2c */
extern undefined4 DAT_00969d30; /* 0x969d30 */
extern undefined4 DAT_00969d34; /* 0x969d34 */
extern undefined4 DAT_00969d38; /* 0x969d38 */
extern undefined4 DAT_00969d3c; /* 0x969d3c */
extern undefined4 DAT_00969d40; /* 0x969d40 */
extern undefined4 DAT_00969d44; /* 0x969d44 */
extern undefined4 DAT_00969d48; /* 0x969d48 */
extern undefined4 DAT_00969d4c; /* 0x969d4c */
extern undefined4 DAT_00969d50; /* 0x969d50 */
extern undefined4 DAT_00969d54; /* 0x969d54 */
extern undefined4 DAT_00969d58; /* 0x969d58 */
extern undefined4 DAT_00969d5c; /* 0x969d5c */
extern undefined4 DAT_00969d80; /* 0x969d80 */
extern undefined4 DAT_00969d84; /* 0x969d84 */
extern undefined4 DAT_00969d88; /* 0x969d88 */
extern undefined4 DAT_00969d8c; /* 0x969d8c */
extern undefined4 DAT_00969d90; /* 0x969d90 */
extern undefined4 DAT_00969d94; /* 0x969d94 */
extern undefined4 DAT_00969d98; /* 0x969d98 */
extern undefined4 DAT_00969d9c; /* 0x969d9c */
extern undefined4 DAT_00969da0; /* 0x969da0 */
extern undefined4 DAT_00969da4; /* 0x969da4 */
extern undefined4 DAT_00969da8; /* 0x969da8 */
extern undefined4 DAT_00969dac; /* 0x969dac */
extern undefined4 DAT_00969db4; /* 0x969db4 */
extern undefined4 DAT_00969db8; /* 0x969db8 */
extern undefined4 DAT_00969dbc; /* 0x969dbc */
extern undefined4 DAT_00969dc4; /* 0x969dc4 */
extern undefined4 DAT_00969dc8; /* 0x969dc8 */
extern undefined4 DAT_00969dcc; /* 0x969dcc */
extern undefined4 DAT_00969dd0; /* 0x969dd0 */
extern undefined4 DAT_00969dd4; /* 0x969dd4 */
extern undefined4 DAT_00969dd8; /* 0x969dd8 */
extern undefined4 DAT_00969ddc; /* 0x969ddc */
extern undefined4 DAT_00969de0; /* 0x969de0 */
extern undefined4 DAT_00969de4; /* 0x969de4 */
extern undefined4 DAT_00969de8; /* 0x969de8 */
extern undefined4 DAT_00969dec; /* 0x969dec */
extern undefined4 DAT_00969df0; /* 0x969df0 */
extern undefined4 DAT_00969df4; /* 0x969df4 */
extern undefined4 DAT_00969df8; /* 0x969df8 */
extern undefined4 DAT_00969dfc; /* 0x969dfc */
extern undefined4 DAT_00969e00; /* 0x969e00 */
extern undefined4 DAT_00969e04; /* 0x969e04 */
extern undefined4 DAT_00969e08; /* 0x969e08 */
extern undefined4 DAT_00969e0c; /* 0x969e0c */
extern undefined4 DAT_00969e10; /* 0x969e10 */
extern undefined4 DAT_00969e14; /* 0x969e14 */
extern undefined4 DAT_00969e18; /* 0x969e18 */
extern undefined4 DAT_00969e1c; /* 0x969e1c */
extern undefined4 DAT_00969e34; /* 0x969e34 */
extern undefined4 DAT_00969e38; /* 0x969e38 */
extern undefined4 DAT_00969e3c; /* 0x969e3c */
extern undefined4 DAT_00969e40; /* 0x969e40 */
extern undefined4 DAT_00969e44; /* 0x969e44 */
extern undefined4 DAT_00969e48; /* 0x969e48 */
extern undefined4 DAT_00969e4c; /* 0x969e4c */
extern undefined4 DAT_00969e50; /* 0x969e50 */
extern undefined4 DAT_00969e54; /* 0x969e54 */
extern undefined4 DAT_00969e58; /* 0x969e58 */
extern undefined4 DAT_00969e5c; /* 0x969e5c */
extern undefined4 DAT_00969e64; /* 0x969e64 */
extern undefined4 DAT_00969e68; /* 0x969e68 */
extern undefined4 DAT_00969e7c; /* 0x969e7c */
extern undefined4 DAT_00969e80; /* 0x969e80 */
extern undefined4 DAT_00969e84; /* 0x969e84 */
extern undefined4 DAT_00969e88; /* 0x969e88 */
extern undefined4 DAT_00969e8c; /* 0x969e8c */
extern undefined2 DAT_00969e90; /* 0x969e90 */
extern undefined2 DAT_00969e92; /* 0x969e92 */
extern undefined4 DAT_00969e94; /* 0x969e94 */
extern undefined4 DAT_00969e98; /* 0x969e98 */
extern undefined4 DAT_00969e9c; /* 0x969e9c */
extern undefined4 DAT_00969ea0; /* 0x969ea0 */
extern undefined4 DAT_00969ea4; /* 0x969ea4 */
extern undefined2 DAT_00969ea8; /* 0x969ea8 */
extern undefined2 DAT_00969eaa; /* 0x969eaa */
extern undefined4 DAT_00969eb0; /* 0x969eb0 */
extern undefined4 DAT_00969eb4; /* 0x969eb4 */
extern undefined2 DAT_00969eb8; /* 0x969eb8 */
extern undefined2 DAT_00969eba; /* 0x969eba */
extern undefined2 DAT_00969ebc; /* 0x969ebc */
extern undefined2 DAT_00969ebe; /* 0x969ebe */
extern undefined2 DAT_00969ec0; /* 0x969ec0 */
extern undefined2 DAT_00969ec2; /* 0x969ec2 */
extern undefined2 DAT_00969ec4; /* 0x969ec4 */
extern undefined2 DAT_00969ec8; /* 0x969ec8 */
extern undefined2 DAT_00969eca; /* 0x969eca */
extern undefined2 DAT_00969ecc; /* 0x969ecc */
extern undefined2 DAT_00969ece; /* 0x969ece */
extern undefined2 DAT_00969ed0; /* 0x969ed0 */
extern undefined2 DAT_00969ed2; /* 0x969ed2 */
extern undefined2 DAT_00969ed4; /* 0x969ed4 */
extern undefined2 DAT_00969ed6; /* 0x969ed6 */
extern undefined2 DAT_00969ed8; /* 0x969ed8 */
extern undefined4 DAT_00969ee0; /* 0x969ee0 */
extern undefined4 DAT_00969ee4; /* 0x969ee4 */
extern undefined4 DAT_00969ee8; /* 0x969ee8 */
extern undefined4 DAT_00969eec; /* 0x969eec */
extern undefined4 DAT_00969ef0; /* 0x969ef0 */
extern undefined4 DAT_00969ef4; /* 0x969ef4 */
extern undefined4 DAT_00969ef8; /* 0x969ef8 */
extern undefined4 DAT_00969efc; /* 0x969efc */
extern undefined4 DAT_00969f08; /* 0x969f08 */
extern undefined4 DAT_00969f0c; /* 0x969f0c */
extern undefined4 DAT_00969f10; /* 0x969f10 */
extern undefined4 DAT_00969f18; /* no defined data */
extern undefined4 DAT_00969f1c; /* 0x969f1c */
extern undefined4 DAT_00969f20; /* 0x969f20 */
extern undefined4 DAT_00969f24; /* 0x969f24 */
extern undefined4 DAT_00969f28; /* 0x969f28 */
extern undefined4 DAT_00969f30; /* 0x969f30 */
extern undefined1 DAT_00969f34; /* 0x969f34 */
extern undefined1 DAT_00969f35; /* 0x969f35 */
extern undefined1 DAT_00969f37; /* 0x969f37 */
extern undefined4 DAT_00969f38; /* 0x969f38 */
extern undefined4 DAT_00969f3c; /* 0x969f3c */
extern undefined4 DAT_00969f40; /* 0x969f40 */
extern undefined4 DAT_00969f54; /* 0x969f54 */
extern undefined4 DAT_00969f58; /* 0x969f58 */
extern undefined4 DAT_00969f5c; /* 0x969f5c */
extern undefined4 DAT_00969f60; /* no defined data */
extern undefined4 DAT_00969f84; /* 0x969f84 */
extern undefined4 DAT_00969f88; /* 0x969f88 */
extern undefined4 DAT_00969f8c; /* 0x969f8c */
extern undefined4 DAT_00969f90; /* 0x969f90 */
extern undefined4 DAT_00969f94; /* 0x969f94 */
extern undefined4 DAT_00969f98; /* 0x969f98 */
extern undefined4 DAT_00969f9c; /* 0x969f9c */
extern undefined4 DAT_00969fa0; /* 0x969fa0 */
extern undefined4 DAT_00969fa4; /* 0x969fa4 */
extern undefined4 DAT_00969fa8; /* 0x969fa8 */
extern undefined4 DAT_00969fac; /* 0x969fac */
extern undefined4 DAT_00969fb0; /* 0x969fb0 */
extern undefined4 DAT_00969fb4; /* 0x969fb4 */
extern undefined4 DAT_00969fc4; /* 0x969fc4 */
extern undefined4 DAT_00969fc8; /* 0x969fc8 */
extern undefined4 DAT_00969fcc; /* 0x969fcc */
extern undefined4 DAT_00969fd4; /* 0x969fd4 */
extern undefined4 DAT_00969fd8; /* 0x969fd8 */
extern undefined4 DAT_00969fe4; /* 0x969fe4 */
extern undefined2 DAT_00969fea; /* 0x969fea */
extern undefined2 DAT_00969fec; /* 0x969fec */
extern undefined4 DAT_00969ff0; /* no defined data */
extern undefined4 DAT_0096a000; /* no defined data */
extern undefined4 DAT_0096a010; /* no defined data */
extern undefined4 DAT_0096a030; /* 0x96a030 */
extern undefined4 DAT_0096a034; /* 0x96a034 */
extern undefined4 DAT_0096a038; /* 0x96a038 */
extern undefined4 DAT_0096a03c; /* 0x96a03c */
extern undefined4 DAT_0096a040; /* 0x96a040 */
extern undefined4 DAT_0096a044; /* 0x96a044 */
extern undefined4 DAT_0096a090; /* 0x96a090 */
extern undefined4 DAT_0096a094; /* 0x96a094 */
extern undefined2 DAT_0096a098; /* 0x96a098 */
extern undefined2 DAT_0096a09c; /* 0x96a09c */
extern undefined2 DAT_0096a09e; /* 0x96a09e */
extern undefined4 DAT_0096a0b0; /* 0x96a0b0 */
extern undefined4 DAT_0096a0b4; /* 0x96a0b4 */
extern undefined4 DAT_0096a0b8; /* 0x96a0b8 */
extern undefined4 DAT_0096a0bc; /* 0x96a0bc */
extern undefined4 DAT_0096a0c0; /* 0x96a0c0 */
extern undefined4 DAT_0096a0c4; /* 0x96a0c4 */
extern undefined4 DAT_0096a0c8; /* 0x96a0c8 */
extern undefined4 DAT_0096a0cc; /* 0x96a0cc */
extern undefined4 DAT_0096a0d0; /* 0x96a0d0 */
extern undefined4 DAT_0096a0d4; /* 0x96a0d4 */
extern undefined4 DAT_0096a0d8; /* 0x96a0d8 */
extern undefined4 DAT_0096a0e0; /* 0x96a0e0 */
extern undefined4 DAT_0096a0e4; /* 0x96a0e4 */
extern undefined4 DAT_0096a0e8; /* 0x96a0e8 */
extern undefined4 DAT_0096a0f0; /* 0x96a0f0 */
extern undefined4 DAT_0096a0f4; /* 0x96a0f4 */
extern undefined2 DAT_0096a0fc; /* 0x96a0fc */
extern undefined2 DAT_0096a0fe; /* 0x96a0fe */
extern undefined4 DAT_0096a100; /* 0x96a100 */
extern undefined4 DAT_0096a104; /* 0x96a104 */
extern undefined4 DAT_0096a108; /* 0x96a108 */
extern undefined4 DAT_0096a10c; /* 0x96a10c */
extern undefined4 DAT_0096a110; /* 0x96a110 */
extern undefined4 DAT_0096a114; /* 0x96a114 */
extern undefined4 DAT_0096a118; /* 0x96a118 */
extern undefined4 DAT_0096a11c; /* 0x96a11c */
extern undefined4 DAT_0096a120; /* 0x96a120 */
extern undefined4 DAT_0096a124; /* 0x96a124 */
extern undefined4 DAT_0096a128; /* 0x96a128 */
extern undefined4 DAT_0096a12c; /* 0x96a12c */
extern undefined4 DAT_0096a130; /* 0x96a130 */
extern undefined4 DAT_0096a134; /* 0x96a134 */
extern undefined4 DAT_0096a138; /* 0x96a138 */
extern undefined4 DAT_0096a13c; /* 0x96a13c */
extern undefined4 DAT_0096a140; /* 0x96a140 */
extern undefined4 DAT_0096a144; /* 0x96a144 */
extern undefined4 DAT_0096a148; /* 0x96a148 */
extern undefined4 DAT_0096a14c; /* 0x96a14c */
extern undefined4 DAT_0096a150; /* 0x96a150 */
extern undefined4 DAT_0096a154; /* 0x96a154 */
extern undefined4 DAT_0096a158; /* 0x96a158 */
extern undefined4 DAT_0096a15c; /* 0x96a15c */
extern undefined4 DAT_0096a160; /* 0x96a160 */
extern undefined4 DAT_0096a164; /* 0x96a164 */
extern undefined4 DAT_0096a168; /* 0x96a168 */
extern undefined4 DAT_0096a16c; /* 0x96a16c */
extern undefined4 DAT_0096a170; /* 0x96a170 */
extern undefined4 DAT_0096a174; /* 0x96a174 */
extern undefined2 DAT_0096a178; /* 0x96a178 */
extern undefined2 DAT_0096a17a; /* 0x96a17a */
extern undefined2 DAT_0096a17c; /* 0x96a17c */
extern undefined2 DAT_0096a17e; /* 0x96a17e */
extern undefined4 DAT_0096a180; /* 0x96a180 */
extern undefined2 DAT_0096a184; /* 0x96a184 */
extern undefined2 DAT_0096a186; /* 0x96a186 */
extern undefined2 DAT_0096a188; /* 0x96a188 */
extern undefined2 DAT_0096a18a; /* 0x96a18a */
extern undefined2 DAT_0096a18c; /* 0x96a18c */
extern undefined1 DAT_0096a18e; /* 0x96a18e */
extern undefined1 DAT_0096a18f; /* 0x96a18f */
extern undefined4 DAT_0096a190; /* 0x96a190 */
extern undefined4 DAT_0096a198; /* 0x96a198 */
extern undefined4 DAT_0096a19c; /* 0x96a19c */
extern undefined4 DAT_0096a1a0; /* 0x96a1a0 */
extern undefined4 DAT_0096a1a4; /* 0x96a1a4 */
extern undefined4 DAT_0096a1b0; /* 0x96a1b0 */
extern undefined4 DAT_0096a1b4; /* 0x96a1b4 */
extern undefined4 DAT_0096a1b8; /* 0x96a1b8 */
extern undefined4 DAT_0096a1bc; /* 0x96a1bc */
extern undefined4 DAT_0096a1c0; /* 0x96a1c0 */
extern undefined4 DAT_0096a1c4; /* 0x96a1c4 */
extern undefined4 DAT_0096a1c8; /* 0x96a1c8 */
extern undefined4 DAT_0096a1cc; /* 0x96a1cc */
extern undefined4 DAT_0096a1d0; /* 0x96a1d0 */
extern undefined4 DAT_0096a1d4; /* 0x96a1d4 */
extern undefined4 DAT_0096a1d8; /* 0x96a1d8 */
extern undefined4 DAT_0096a1e0; /* 0x96a1e0 */
extern undefined4 DAT_0096a1e4; /* 0x96a1e4 */
extern undefined4 DAT_0096a1e8; /* 0x96a1e8 */
extern undefined4 DAT_0096a1ec; /* 0x96a1ec */
extern undefined4 DAT_0096a1f0; /* 0x96a1f0 */
extern undefined4 DAT_0096a200; /* 0x96a200 */
extern undefined4 DAT_0096a210; /* 0x96a210 */
extern undefined4 DAT_0096a220; /* 0x96a220 */
extern undefined4 DAT_0096a224; /* 0x96a224 */
extern undefined4 DAT_0096a230; /* 0x96a230 */
extern undefined4 DAT_0096a234; /* 0x96a234 */
extern undefined4 DAT_0096a244; /* 0x96a244 */
extern undefined4 DAT_0096a248; /* 0x96a248 */
extern undefined4 DAT_0096a24c; /* 0x96a24c */
extern undefined4 DAT_0096a250; /* 0x96a250 */
extern undefined4 DAT_0096a254; /* 0x96a254 */
extern undefined4 DAT_0096a258; /* 0x96a258 */
extern undefined4 DAT_0096a25c; /* 0x96a25c */
extern undefined4 DAT_0096a260; /* 0x96a260 */
extern undefined4 DAT_0096a264; /* 0x96a264 */
extern undefined4 DAT_0096a268; /* 0x96a268 */
extern undefined4 DAT_0096a26c; /* 0x96a26c */
extern undefined4 DAT_0096a270; /* 0x96a270 */
extern undefined4 DAT_0096a274; /* 0x96a274 */
extern undefined4 DAT_0096a278; /* 0x96a278 */
extern undefined4 DAT_0096a27c; /* 0x96a27c */
extern undefined4 DAT_0096a280; /* 0x96a280 */
extern undefined4 DAT_0096a284; /* 0x96a284 */
extern undefined4 DAT_0096a288; /* 0x96a288 */
extern undefined4 DAT_0096a28c; /* 0x96a28c */
extern undefined4 DAT_0096a290; /* 0x96a290 */
extern undefined4 DAT_0096a294; /* 0x96a294 */
extern undefined4 DAT_0096a298; /* 0x96a298 */
extern undefined2 DAT_0096a29c; /* 0x96a29c */
extern undefined2 DAT_0096a29e; /* 0x96a29e */
extern undefined4 DAT_0096a2a0; /* 0x96a2a0 */
extern undefined4 DAT_0096a2a4; /* 0x96a2a4 */
extern undefined4 DAT_0096a2a8; /* 0x96a2a8 */
extern undefined4 DAT_0096a2ac; /* 0x96a2ac */
extern undefined4 DAT_0096a2b0; /* 0x96a2b0 */
extern undefined4 DAT_0096a2b8; /* 0x96a2b8 */
extern undefined4 DAT_0096a2bc; /* 0x96a2bc */
extern undefined4 DAT_0096a2c0; /* 0x96a2c0 */
extern undefined4 DAT_0096a2c4; /* 0x96a2c4 */
extern undefined4 DAT_0096a2c8; /* 0x96a2c8 */
extern undefined4 DAT_0096a2cc; /* 0x96a2cc */
extern undefined4 DAT_0096a2d0; /* 0x96a2d0 */
extern undefined4 DAT_0096a2d4; /* 0x96a2d4 */
extern undefined4 DAT_0096a2d8; /* 0x96a2d8 */
extern undefined4 DAT_0096a2dc; /* 0x96a2dc */
extern undefined4 DAT_0096a2e0; /* 0x96a2e0 */
extern undefined4 DAT_0096a2e4; /* 0x96a2e4 */
extern undefined4 DAT_0096a2ec; /* 0x96a2ec */
extern undefined4 DAT_0096a2f0; /* 0x96a2f0 */
extern undefined4 DAT_0096a2f4; /* 0x96a2f4 */
extern undefined4 DAT_0096a2f8; /* 0x96a2f8 */
extern undefined4 DAT_0096a320; /* 0x96a320 */
extern undefined4 DAT_0096a324; /* 0x96a324 */
extern undefined4 DAT_0096a328; /* 0x96a328 */
extern undefined4 DAT_0096a32c; /* 0x96a32c */
extern undefined4 DAT_0096a330; /* 0x96a330 */
extern undefined4 DAT_0096a334; /* 0x96a334 */
extern undefined4 DAT_0096a338; /* 0x96a338 */
extern undefined4 DAT_0096a33c; /* 0x96a33c */
extern undefined4 DAT_0096a340; /* 0x96a340 */
extern undefined4 DAT_0096a344; /* 0x96a344 */
extern undefined4 DAT_0096a348; /* 0x96a348 */
extern undefined4 DAT_0096a34c; /* 0x96a34c */
extern undefined4 DAT_0096a350; /* 0x96a350 */
extern undefined4 DAT_0096a354; /* 0x96a354 */
extern undefined4 DAT_0096a358; /* 0x96a358 */
extern undefined4 DAT_0096a35c; /* 0x96a35c */
extern undefined4 DAT_0096a360; /* 0x96a360 */
extern undefined4 DAT_0096a364; /* 0x96a364 */
extern undefined4 DAT_0096a368; /* 0x96a368 */
extern undefined4 DAT_0096a36c; /* 0x96a36c */
extern undefined4 DAT_0096a370; /* 0x96a370 */
extern undefined4 DAT_0096a374; /* 0x96a374 */
extern undefined4 DAT_0096a378; /* 0x96a378 */
extern undefined4 DAT_0096a37c; /* 0x96a37c */
extern undefined4 DAT_0096a380; /* 0x96a380 */
extern undefined4 DAT_0096a384; /* 0x96a384 */
extern undefined4 DAT_0096a388; /* no defined data */
extern undefined4 DAT_0096a38c; /* no defined data */
extern undefined4 DAT_0096a390; /* no defined data */
extern undefined4 DAT_0096a394; /* no defined data */
extern undefined4 DAT_0096a3a0; /* no defined data */
extern undefined4 DAT_0096a3b0; /* 0x96a3b0 */
extern undefined4 DAT_0096a3b4; /* 0x96a3b4 */
extern undefined4 DAT_0096a3d0; /* 0x96a3d0 */
extern undefined4 DAT_0096a3d4; /* 0x96a3d4 */
extern undefined4 DAT_0096a3d8; /* 0x96a3d8 */
extern undefined4 DAT_0096a3dc; /* 0x96a3dc */
extern undefined4 DAT_0096a3ec; /* 0x96a3ec */
extern undefined4 DAT_0096a3f0; /* 0x96a3f0 */
extern undefined4 DAT_0096a3f4; /* 0x96a3f4 */
extern undefined4 DAT_0096a400; /* no defined data */
extern undefined4 DAT_0096a420; /* no defined data */
extern undefined4 DAT_0096a430; /* no defined data */
extern undefined4 DAT_0096a440; /* no defined data */
extern undefined4 DAT_0096a450; /* 0x96a450 */
extern undefined4 DAT_0096a454; /* 0x96a454 */
extern undefined4 DAT_0096a458; /* 0x96a458 */
extern undefined4 DAT_0096a45c; /* 0x96a45c */
extern undefined4 DAT_0096a460; /* no defined data */
extern undefined4 DAT_0096a468; /* 0x96a468 */
extern undefined4 DAT_0096a470; /* no defined data */
extern undefined2 DAT_0096a480; /* 0x96a480 */
extern undefined2 DAT_0096a490; /* 0x96a490 */
extern undefined2 DAT_0096a4a0; /* 0x96a4a0 */
extern undefined4 DAT_0096a4b0; /* no defined data */
extern undefined4 DAT_0096a534; /* 0x96a534 */
extern undefined4 DAT_0096a538; /* no defined data */
extern undefined4 DAT_0096a53c; /* 0x96a53c */
extern undefined4 DAT_0096a540; /* 0x96a540 */
extern undefined4 DAT_0096a544; /* 0x96a544 */
extern undefined4 DAT_0096a548; /* 0x96a548 */
extern undefined4 DAT_0096a550; /* 0x96a550 */
extern undefined4 DAT_0096a554; /* 0x96a554 */
extern undefined4 DAT_0096a558; /* 0x96a558 */
extern undefined4 DAT_0096a55c; /* 0x96a55c */
extern undefined4 DAT_0096a560; /* 0x96a560 */
extern undefined2 DAT_0096a564; /* 0x96a564 */
extern undefined2 DAT_0096a566; /* 0x96a566 */
extern undefined2 DAT_0096a568; /* 0x96a568 */
extern undefined2 DAT_0096a56a; /* 0x96a56a */
extern undefined1 DAT_0096a56c; /* 0x96a56c */
extern undefined1 DAT_0096a56d; /* 0x96a56d */
extern undefined1 DAT_0096a56e; /* 0x96a56e */
extern undefined1 DAT_0096a56f; /* 0x96a56f */
extern undefined4 DAT_0096a570; /* 0x96a570 */
extern undefined2 DAT_0096a578; /* 0x96a578 */
extern undefined2 DAT_0096a57a; /* 0x96a57a */
extern undefined2 DAT_0096a57c; /* 0x96a57c */
extern undefined2 DAT_0096a57e; /* 0x96a57e */
extern undefined4 DAT_0096a580; /* 0x96a580 */
extern undefined4 DAT_0096a584; /* 0x96a584 */
extern undefined2 DAT_0096a58c; /* 0x96a58c */
extern undefined1 DAT_0096a58e; /* 0x96a58e */
extern undefined1 DAT_0096a58f; /* 0x96a58f */
extern undefined2 DAT_0096a590; /* 0x96a590 */
extern undefined2 DAT_0096a592; /* 0x96a592 */
extern undefined4 DAT_0096a594; /* 0x96a594 */
extern undefined4 DAT_0096a598; /* 0x96a598 */
extern undefined2 DAT_0096a59c; /* 0x96a59c */
extern undefined2 DAT_0096a59e; /* 0x96a59e */
extern undefined4 DAT_0096a5a4; /* 0x96a5a4 */
extern undefined2 DAT_0096a5a8; /* 0x96a5a8 */
extern undefined2 DAT_0096a5aa; /* 0x96a5aa */
extern undefined2 DAT_0096a5ac; /* 0x96a5ac */
extern undefined1 DAT_0096a5ae; /* 0x96a5ae */
extern undefined1 DAT_0096a5af; /* 0x96a5af */
extern undefined4 DAT_0096a5b0; /* no defined data */
extern undefined4 DAT_0096a5c0; /* 0x96a5c0 */
extern undefined4 DAT_0096a5cc; /* 0x96a5cc */
extern undefined4 DAT_0096a5d0; /* 0x96a5d0 */
extern undefined4 DAT_0096a5d4; /* 0x96a5d4 */
extern undefined2 DAT_0096a5d8; /* 0x96a5d8 */
extern undefined4 DAT_0096a5dc; /* 0x96a5dc */
extern undefined2 DAT_0096a5e0; /* 0x96a5e0 */
extern undefined2 DAT_0096a5e2; /* 0x96a5e2 */
extern undefined2 DAT_0096a5e4; /* 0x96a5e4 */
extern undefined2 DAT_0096a5e6; /* 0x96a5e6 */
extern undefined2 DAT_0096a5e8; /* 0x96a5e8 */
extern undefined2 DAT_0096a5ea; /* 0x96a5ea */
extern undefined2 DAT_0096a5ec; /* 0x96a5ec */
extern undefined2 DAT_0096a5ee; /* 0x96a5ee */
extern undefined4 DAT_0096a5f0; /* 0x96a5f0 */
extern undefined4 DAT_0096a5f4; /* 0x96a5f4 */
extern undefined4 DAT_0096a600; /* 0x96a600 */
extern undefined4 DAT_0096a604; /* 0x96a604 */
extern undefined4 DAT_0096a608; /* 0x96a608 */
extern undefined4 DAT_0096a60c; /* 0x96a60c */
extern undefined4 DAT_0096a610; /* 0x96a610 */
extern undefined4 DAT_0096a614; /* 0x96a614 */
extern undefined4 DAT_0096a618; /* 0x96a618 */
extern undefined4 DAT_0096a620; /* 0x96a620 */
extern undefined4 DAT_0096a624; /* 0x96a624 */
extern undefined4 DAT_0096a628; /* 0x96a628 */
extern undefined4 DAT_0096a62c; /* 0x96a62c */
extern undefined4 DAT_0096a630; /* 0x96a630 */
extern undefined4 DAT_0096a634; /* 0x96a634 */
extern undefined4 DAT_0096a640; /* 0x96a640 */
extern undefined4 DAT_0096a644; /* 0x96a644 */
extern undefined4 DAT_0096a648; /* 0x96a648 */
extern undefined4 DAT_0096a64c; /* 0x96a64c */
extern undefined4 DAT_0096a650; /* 0x96a650 */
extern undefined4 DAT_0096a654; /* 0x96a654 */
extern undefined4 DAT_0096a658; /* 0x96a658 */
extern undefined4 DAT_0096a65c; /* 0x96a65c */
extern undefined4 DAT_0096a660; /* 0x96a660 */
extern undefined4 DAT_0096a664; /* 0x96a664 */
extern undefined4 DAT_0096a668; /* 0x96a668 */
extern undefined4 DAT_0096a670; /* 0x96a670 */
extern undefined4 DAT_0096a674; /* 0x96a674 */
extern undefined4 DAT_0096a678; /* 0x96a678 */
extern undefined2 DAT_0096a67c; /* 0x96a67c */
extern undefined4 DAT_0096a680; /* 0x96a680 */
extern undefined4 DAT_0096a684; /* 0x96a684 */
extern undefined4 DAT_0096a688; /* 0x96a688 */
extern undefined4 DAT_0096a68c; /* 0x96a68c */
extern undefined4 DAT_0096a690; /* 0x96a690 */
extern undefined4 DAT_0096a694; /* 0x96a694 */
extern undefined4 DAT_0096a698; /* 0x96a698 */
extern undefined2 DAT_0096a69c; /* 0x96a69c */
extern undefined2 DAT_0096a69e; /* 0x96a69e */
extern undefined4 DAT_0096a6a4; /* 0x96a6a4 */
extern undefined4 DAT_0096a6a8; /* 0x96a6a8 */
extern undefined4 DAT_0096a6ac; /* 0x96a6ac */
extern undefined4 DAT_0096a6b0; /* 0x96a6b0 */
extern undefined4 DAT_0096a6b4; /* 0x96a6b4 */
extern undefined4 DAT_0096a730; /* 0x96a730 */
extern undefined4 DAT_0096a734; /* 0x96a734 */
extern undefined4 DAT_0096a738; /* 0x96a738 */
extern undefined4 DAT_0096a73c; /* 0x96a73c */
extern undefined4 DAT_0096a740; /* 0x96a740 */
extern undefined4 DAT_0096a744; /* 0x96a744 */
extern undefined4 DAT_0096a748; /* 0x96a748 */
extern undefined4 DAT_0096a74c; /* 0x96a74c */
extern undefined4 DAT_0096a750; /* 0x96a750 */
extern undefined4 DAT_0096a754; /* 0x96a754 */
extern undefined4 DAT_0096a758; /* 0x96a758 */
extern undefined4 DAT_0096a75c; /* 0x96a75c */
extern undefined4 DAT_0096a760; /* 0x96a760 */
extern undefined4 DAT_0096a764; /* 0x96a764 */
extern undefined4 DAT_0096a76c; /* 0x96a76c */
extern undefined4 DAT_0096a774; /* 0x96a774 */
extern undefined4 DAT_0096a778; /* 0x96a778 */
extern undefined4 DAT_0096a77c; /* 0x96a77c */
extern undefined4 DAT_0096a780; /* 0x96a780 */
extern undefined4 DAT_0096a784; /* 0x96a784 */
extern undefined4 DAT_0096a78c; /* 0x96a78c */
extern undefined4 DAT_0096a790; /* 0x96a790 */
extern undefined4 DAT_0096a794; /* 0x96a794 */
extern undefined4 DAT_0096a798; /* 0x96a798 */
extern undefined4 DAT_0096a7a0; /* no defined data */
extern undefined4 DAT_0096a9e0; /* 0x96a9e0 */
extern undefined4 DAT_0096a9e4; /* 0x96a9e4 */
extern undefined4 DAT_0096a9e8; /* 0x96a9e8 */
extern undefined4 DAT_0096a9f0; /* 0x96a9f0 */
extern undefined4 DAT_0096a9f4; /* 0x96a9f4 */
extern undefined4 DAT_0096aa00; /* 0x96aa00 */
extern undefined4 DAT_0096aa10; /* no defined data */
extern undefined1 DAT_0096aa11; /* 0x96aa11 */
extern undefined4 DAT_0096aa20; /* 0x96aa20 */
extern undefined4 DAT_0096aa24; /* 0x96aa24 */
extern undefined4 DAT_0096aa28; /* 0x96aa28 */
extern undefined4 DAT_0096aa2c; /* 0x96aa2c */
extern undefined4 DAT_0096aa30; /* 0x96aa30 */
extern undefined4 DAT_0096aa34; /* 0x96aa34 */
extern undefined4 DAT_0096aa38; /* 0x96aa38 */
extern undefined4 DAT_0096aa3c; /* 0x96aa3c */
extern undefined4 DAT_0096aa40; /* 0x96aa40 */
extern undefined4 DAT_0096aa44; /* 0x96aa44 */
extern undefined4 DAT_0096aa48; /* 0x96aa48 */
extern undefined4 DAT_0096aa4c; /* 0x96aa4c */
extern undefined4 DAT_0096abd0; /* no defined data */
extern undefined1 DAT_0096abd1; /* 0x96abd1 */
extern undefined4 DAT_0096abe0; /* 0x96abe0 */
extern undefined4 DAT_0096abe4; /* 0x96abe4 */
extern undefined4 DAT_0096abe8; /* 0x96abe8 */
extern undefined4 DAT_0096abec; /* 0x96abec */
extern undefined4 DAT_0096abf0; /* 0x96abf0 */
extern undefined4 DAT_0096abf4; /* 0x96abf4 */
extern undefined4 DAT_0096abf8; /* 0x96abf8 */
extern undefined4 DAT_0096abfc; /* 0x96abfc */
extern undefined4 DAT_0096ac00; /* 0x96ac00 */
extern undefined4 DAT_0096ac04; /* 0x96ac04 */
extern undefined4 DAT_0096ac08; /* 0x96ac08 */
extern undefined4 DAT_0096ac0c; /* 0x96ac0c */
extern undefined4 DAT_0096acd0; /* 0x96acd0 */
extern undefined4 DAT_0096acd4; /* 0x96acd4 */
extern undefined4 DAT_0096acd8; /* 0x96acd8 */
extern undefined2 DAT_0096acdc; /* 0x96acdc */
extern undefined2 DAT_0096acde; /* 0x96acde */
extern undefined4 DAT_0096ace4; /* 0x96ace4 */
extern undefined4 DAT_0096ace8; /* 0x96ace8 */
extern undefined4 DAT_0096acf0; /* 0x96acf0 */
extern undefined4 DAT_0096acf4; /* 0x96acf4 */
extern undefined4 DAT_0096acf8; /* 0x96acf8 */
extern undefined4 DAT_0096ad08; /* 0x96ad08 */
extern undefined4 DAT_0096ad40; /* 0x96ad40 */
extern undefined4 DAT_0096ad50; /* 0x96ad50 */
extern undefined4 DAT_0096ad54; /* 0x96ad54 */
extern undefined4 DAT_0096ad58; /* 0x96ad58 */
extern undefined4 DAT_0096ad5c; /* 0x96ad5c */
extern undefined4 DAT_0096ad60; /* no defined data */
extern undefined4 DAT_0096ad74; /* 0x96ad74 */
extern undefined4 DAT_0096ad80; /* 0x96ad80 */
extern undefined4 DAT_0096ad84; /* 0x96ad84 */
extern undefined2 DAT_0096ad88; /* 0x96ad88 */
extern undefined1 DAT_0096ad8a; /* 0x96ad8a */
extern undefined1 DAT_0096ad8b; /* 0x96ad8b */
extern undefined1 DAT_0096ad8c; /* 0x96ad8c */
extern undefined4 DAT_0096ad8d; /* no defined data */
extern undefined4 DAT_0096ad90; /* 0x96ad90 */
extern undefined4 DAT_0096ad94; /* 0x96ad94 */
extern undefined4 DAT_0096ad9c; /* 0x96ad9c */
extern undefined4 DAT_0096adc0; /* 0x96adc0 */
extern undefined4 DAT_0096adc4; /* 0x96adc4 */
extern undefined4 DAT_0096ade4; /* 0x96ade4 */
extern undefined4 DAT_0096ade8; /* 0x96ade8 */
extern undefined4 DAT_0096ae10; /* 0x96ae10 */
extern undefined4 DAT_0096ae34; /* 0x96ae34 */
extern undefined4 DAT_0096ae38; /* 0x96ae38 */
extern undefined4 DAT_0096ae60; /* 0x96ae60 */
extern undefined4 DAT_0096ae64; /* 0x96ae64 */
extern undefined4 DAT_0096ae6c; /* 0x96ae6c */
extern undefined4 DAT_0096ae84; /* 0x96ae84 */
extern undefined4 DAT_0096ae88; /* 0x96ae88 */
extern undefined4 DAT_0096aeb0; /* 0x96aeb0 */
extern undefined4 DAT_0096aeb4; /* 0x96aeb4 */
extern undefined4 DAT_0096aed4; /* 0x96aed4 */
extern undefined4 DAT_0096aed8; /* 0x96aed8 */
extern undefined4 DAT_0096af00; /* 0x96af00 */
extern undefined4 DAT_0096af24; /* 0x96af24 */
extern undefined4 DAT_0096af28; /* 0x96af28 */
extern undefined4 DAT_0096af80; /* 0x96af80 */
extern undefined4 DAT_0096af84; /* 0x96af84 */
extern undefined4 DAT_0096af88; /* 0x96af88 */
extern undefined2 DAT_0096af8c; /* 0x96af8c */
extern undefined2 DAT_0096af8e; /* 0x96af8e */
extern undefined1 DAT_0096afc2; /* 0x96afc2 */
extern undefined1 DAT_0096afc3; /* 0x96afc3 */
extern undefined1 DAT_0096afc7; /* 0x96afc7 */
extern undefined1 DAT_0096afc8; /* 0x96afc8 */
extern undefined1 DAT_0096afc9; /* 0x96afc9 */
extern undefined1 DAT_0096afca; /* 0x96afca */
extern undefined1 DAT_0096afcd; /* 0x96afcd */
extern undefined1 DAT_0096afce; /* 0x96afce */
extern undefined4 DAT_0096b2f4; /* 0x96b2f4 */
extern undefined4 DAT_0096b300; /* 0x96b300 */
extern undefined4 DAT_0096b304; /* 0x96b304 */
extern undefined4 DAT_0096b308; /* 0x96b308 */
extern undefined4 DAT_0096b30c; /* 0x96b30c */
extern undefined2 DAT_0096b314; /* 0x96b314 */
extern undefined2 DAT_0096b316; /* 0x96b316 */
extern undefined4 DAT_0096b320; /* 0x96b320 */
extern undefined4 DAT_0096b324; /* 0x96b324 */
extern undefined4 DAT_0096b328; /* 0x96b328 */
extern undefined4 DAT_0096b32c; /* 0x96b32c */
extern undefined4 DAT_0096b330; /* 0x96b330 */
extern undefined4 DAT_0096b340; /* 0x96b340 */
extern undefined4 DAT_0096b350; /* no defined data */
extern undefined4 DAT_0096b48c; /* 0x96b48c */
extern undefined4 DAT_0096b490; /* no defined data */
extern undefined4 DAT_0096b5d0; /* no defined data */
extern undefined4 DAT_0096ba04; /* 0x96ba04 */
extern undefined4 DAT_0096ba30; /* no defined data */
extern undefined4 DAT_0096ba60; /* 0x96ba60 */
extern undefined4 DAT_0096ba64; /* 0x96ba64 */
extern undefined4 DAT_0096ba68; /* 0x96ba68 */
extern undefined4 DAT_0096ba6c; /* 0x96ba6c */
extern undefined4 DAT_0096ba70; /* no defined data */
extern undefined1 DAT_0096ba71; /* 0x96ba71 */
extern undefined4 DAT_0096ba80; /* no defined data */
extern undefined4 DAT_0096bb30; /* no defined data */
extern undefined4 DAT_0096bb50; /* no defined data */
extern undefined4 DAT_0096bb70; /* no defined data */
extern undefined2 DAT_0096bb92; /* 0x96bb92 */
extern undefined1 DAT_0096bcd5; /* 0x96bcd5 */
extern undefined4 DAT_0096bd20; /* 0x96bd20 */
extern undefined4 DAT_0096bd24; /* 0x96bd24 */
extern undefined4 DAT_0096bd68; /* 0x96bd68 */
extern undefined4 DAT_0096bd70; /* 0x96bd70 */
extern undefined4 DAT_0096bd74; /* 0x96bd74 */
extern undefined4 DAT_0096bd78; /* 0x96bd78 */
extern undefined4 DAT_0096bd7c; /* 0x96bd7c */
extern undefined4 DAT_0096bd80; /* 0x96bd80 */
extern undefined1 DAT_0096bd86; /* 0x96bd86 */
extern undefined1 DAT_0096bd87; /* 0x96bd87 */
extern undefined1 DAT_0096bd88; /* 0x96bd88 */
extern undefined1 DAT_0096bd89; /* 0x96bd89 */
extern undefined1 DAT_0096bd8a; /* 0x96bd8a */
extern undefined1 DAT_0096bd8b; /* 0x96bd8b */
extern undefined1 DAT_0096bd8c; /* 0x96bd8c */
extern undefined1 DAT_0096bd8d; /* 0x96bd8d */
extern undefined1 DAT_0096bd8e; /* 0x96bd8e */
extern undefined1 DAT_0096bd8f; /* 0x96bd8f */
extern undefined1 DAT_0096bd92; /* 0x96bd92 */
extern undefined4 DAT_0096bd98; /* 0x96bd98 */
extern undefined4 DAT_0096bd9c; /* 0x96bd9c */
extern undefined4 DAT_0096bdbc; /* 0x96bdbc */
extern undefined4 DAT_0096bdc0; /* 0x96bdc0 */
extern undefined4 DAT_0096bdd0; /* 0x96bdd0 */
extern undefined4 DAT_0096bdd4; /* 0x96bdd4 */
extern undefined4 DAT_0096bdec; /* 0x96bdec */
extern undefined4 DAT_0096bdf0; /* 0x96bdf0 */
extern undefined4 DAT_0096be98; /* 0x96be98 */
extern undefined4 DAT_0096be9c; /* 0x96be9c */
extern undefined4 DAT_0096bea0; /* 0x96bea0 */
extern undefined4 DAT_0096bea4; /* no defined data */
extern undefined4 DAT_0096beb4; /* 0x96beb4 */
extern undefined2 DAT_0096beba; /* 0x96beba */
extern undefined4 DAT_0096bebc; /* no defined data */
extern undefined2 DAT_0096bebe; /* 0x96bebe */
extern undefined4 DAT_0096bf00; /* 0x96bf00 */
extern undefined4 DAT_0096bf04; /* 0x96bf04 */
extern undefined4 DAT_0096bf08; /* 0x96bf08 */
extern undefined4 DAT_0096bf0c; /* 0x96bf0c */
extern undefined4 DAT_0096bf10; /* 0x96bf10 */
extern undefined4 DAT_0096bf14; /* 0x96bf14 */
extern undefined4 DAT_0096bf50; /* 0x96bf50 */
extern undefined4 DAT_0096bf54; /* 0x96bf54 */
extern undefined4 DAT_0096bf58; /* 0x96bf58 */
extern undefined4 DAT_0096bf5c; /* 0x96bf5c */
extern undefined4 DAT_0096bf60; /* 0x96bf60 */
extern undefined4 DAT_0096bf68; /* 0x96bf68 */
extern undefined4 DAT_0096bf6c; /* 0x96bf6c */
extern undefined4 DAT_0096bf70; /* 0x96bf70 */
extern undefined4 DAT_0096bf74; /* 0x96bf74 */
extern undefined4 DAT_0096bf78; /* 0x96bf78 */
extern undefined4 DAT_0096bf84; /* 0x96bf84 */
extern undefined2 DAT_0096bf90; /* 0x96bf90 */
extern undefined2 DAT_0096bf92; /* 0x96bf92 */
extern undefined4 DAT_0096bf94; /* 0x96bf94 */
extern undefined4 DAT_0096bf98; /* 0x96bf98 */
extern undefined4 DAT_0096bfa0; /* 0x96bfa0 */
extern undefined4 DAT_0096bfa4; /* 0x96bfa4 */
extern undefined2 DAT_0096bfa8; /* 0x96bfa8 */
extern undefined1 DAT_0096bfaa; /* 0x96bfaa */
extern undefined1 DAT_0096bfab; /* 0x96bfab */
extern undefined2 DAT_0096bfac; /* 0x96bfac */
extern undefined2 DAT_0096bfae; /* 0x96bfae */
extern undefined2 DAT_0096bfb2; /* 0x96bfb2 */
extern undefined2 DAT_0096bfb4; /* 0x96bfb4 */
extern undefined2 DAT_0096bfb6; /* 0x96bfb6 */
extern undefined2 DAT_0096bfba; /* 0x96bfba */
extern undefined2 DAT_0096bfbc; /* 0x96bfbc */
extern undefined2 DAT_0096bfbe; /* 0x96bfbe */
extern undefined2 DAT_0096bfc0; /* 0x96bfc0 */
extern undefined4 DAT_0096bfc4; /* 0x96bfc4 */
extern undefined4 DAT_0096bfc8; /* 0x96bfc8 */
extern undefined4 DAT_0096bfcc; /* 0x96bfcc */
extern undefined4 DAT_0096bfd0; /* 0x96bfd0 */
extern undefined4 DAT_0096bfd4; /* 0x96bfd4 */
extern undefined4 DAT_0096bfd8; /* 0x96bfd8 */
extern undefined2 DAT_0096bfdc; /* 0x96bfdc */
extern undefined2 DAT_0096bfde; /* 0x96bfde */
extern undefined4 DAT_0096bfe0; /* 0x96bfe0 */
extern undefined4 DAT_00970000; /* no defined data */
extern undefined4 DAT_00a0cd08; /* 0xa0cd08 */
extern undefined4 DAT_00a0cd14; /* 0xa0cd14 */
extern undefined4 DAT_00a0f644; /* no defined data */
extern undefined4 DAT_00a0f6dc; /* 0xa0f6dc */
extern undefined4 DAT_00a0f734; /* no defined data */
extern undefined4 DAT_00a0f784; /* no defined data */
extern undefined4 DAT_00a0fcd4; /* 0xa0fcd4 */
extern undefined2 DAT_00a0fd64; /* 0xa0fd64 */
extern undefined2 DAT_00a0fd66; /* 0xa0fd66 */
extern undefined4 DAT_00a0fd68; /* 0xa0fd68 */
extern undefined2 DAT_00a0fd84; /* 0xa0fd84 */
extern undefined2 DAT_00a0fd86; /* 0xa0fd86 */
extern undefined4 DAT_00a0fd88; /* 0xa0fd88 */
extern undefined4 DAT_00a10548; /* 0xa10548 */
extern undefined4 DAT_00a1054c; /* 0xa1054c */
extern undefined4 DAT_00a15f34; /* 0xa15f34 */
extern undefined4 DAT_00a1a840; /* 0xa1a840 */
extern undefined4 DAT_00a1a844; /* 0xa1a844 */
extern undefined4 DAT_00a1a848; /* 0xa1a848 */
extern undefined4 DAT_00a1a84c; /* 0xa1a84c */
extern undefined4 DAT_00a1a850; /* 0xa1a850 */
extern undefined4 DAT_00a1a854; /* 0xa1a854 */
extern undefined4 DAT_00a1a858; /* 0xa1a858 */
extern undefined4 DAT_00a1a864; /* 0xa1a864 */
extern undefined4 DAT_00a1a880; /* no defined data */
extern undefined4 DAT_00a1b880; /* no defined data */
extern undefined4 DAT_00a1ba80; /* no defined data */
extern undefined4 DAT_00a1bc80; /* no defined data */
extern undefined4 DAT_00a1bd80; /* no defined data */
extern undefined1 DAT_00a1be81; /* 0xa1be81 */
extern undefined4 DAT_00a1bea0; /* 0xa1bea0 */
extern undefined4 DAT_00a1bea4; /* 0xa1bea4 */
extern undefined4 DAT_00a1bea8; /* 0xa1bea8 */
extern undefined4 DAT_00a1bf00; /* no defined data */
extern undefined4 DAT_00a1bf40; /* no defined data */
extern undefined4 DAT_00a1de00; /* 0xa1de00 */
extern undefined4 DAT_00a1de04; /* 0xa1de04 */
extern undefined4 DAT_00a1de08; /* 0xa1de08 */
extern undefined4 DAT_00a1de0c; /* 0xa1de0c */
extern undefined4 DAT_00a1de10; /* no defined data */
extern undefined4 DAT_00a354c1; /* no defined data */
extern undefined4 DAT_00a3563d; /* no defined data */
extern undefined4 DAT_00a49344; /* 0xa49344 */
extern undefined4 DAT_00a49348; /* 0xa49348 */
extern undefined4 DAT_00a4c4f0; /* 0xa4c4f0 */
extern undefined4 DAT_00a4c4f4; /* 0xa4c4f4 */
extern undefined4 DAT_00a4c4f8; /* 0xa4c4f8 */
extern undefined4 DAT_00a4c4fc; /* 0xa4c4fc */
extern undefined4 DAT_00aac8aa; /* no defined data */
extern undefined4 DAT_00d2d2d2; /* no defined data */
extern undefined4 DAT_00dcdcdc; /* no defined data */
extern float FLOAT_0071fb50; /* 0x71fb50 */
extern float FLOAT_0071fb54; /* 0x71fb54 */
extern float HeroDeathHeight; /* 0xa10934 */ /* type set in global_types.tsv */
extern LevelId Level; /* 0x969c70 */
extern pointer32 PTR_BoltHud_Init_00705810; /* 0x705810 */
extern pointer32 PTR_BoltHud_Update_00705818; /* 0x705818 */
extern pointer32 PTR_ClankCommandHud_Init_007057d8; /* 0x7057d8 */
extern pointer32 PTR_ClankCommandHud_Update_007057e0; /* 0x7057e0 */
extern pointer32 PTR_DrawOxygenMeter_00705730; /* 0x705730 */
extern pointer32 PTR_Draw_BoltCountUI_00705820; /* 0x705820 */
extern pointer32 PTR_Draw_ClankCommandHud_007057e8; /* 0x7057e8 */
extern pointer32 PTR_Draw_HoverboardTrickHud_00705860; /* 0x705860 */
extern pointer32 PTR_Draw_MetalDetectorHud_00705878; /* 0x705878 */
extern pointer32 PTR_Draw_QuickSelectHud_007057d0; /* 0x7057d0 */
extern pointer32 PTR_Draw_RaceLapPlaceHud_007058e0; /* 0x7058e0 */
extern pointer32 PTR_Draw_RaceTimeScoreHud_007058e8; /* 0x7058e8 */
extern pointer32 PTR_Hero_DrawGlows_00705228; /* 0x705228 */
extern pointer32 PTR_HudEntry_InitCounter32_007056a8; /* 0x7056a8 */
extern pointer32 PTR_MetalDetectorHud_Update_00705870; /* 0x705870 */
extern pointer32 PTR_OxygenHud_Init_007056f8; /* 0x7056f8 */
extern pointer32 PTR_OxygenHud_Update_00705700; /* 0x705700 */
extern pointer32 PTR_QuickSelectHud_Init_007057b8; /* 0x7057b8 */
extern pointer32 PTR_RaceHud_Init_007058c8; /* 0x7058c8 */
extern pointer32 PTR_RaceHud_Update_007058d0; /* 0x7058d0 */
extern pointer32 PTR_TrickHud_Init_00705848; /* 0x705848 */
extern pointer32 PTR_TrickHud_Update_00705850; /* 0x705850 */
extern pointer32 PTR_UpdateQuickSelect_007057c0; /* 0x7057c0 */
extern Items UnlockableItems; /* 0x96c140 */
extern float animationSpeed; /* 0x71f410 */
extern MobyInstance *g_CollMobyHits[256]; /* 0xa14a00: the mobys CollMobySphere/CollHeroSphere hit, NULL ended (the real length is unknown) */ /* type set in global_types.tsv */
extern undefined4 g_CurrentWeapon; /* 0x96ad98 */
extern undefined4 g_DustHoverState; /* 0x96a0f8 */
extern float g_FrameTime; /* 0x71f414 */
extern float g_FrameTimeSq; /* 0x71f418: g_FrameTime squared */ /* type set in global_types.tsv */
extern int g_GameFrameCount; /* 0xa0f6d8 */
extern undefined4 g_GiantClankHealth; /* 0x96b310 */
extern u32 g_GrindPaths; /* 0xa1a85c: the level's grind paths, 0x20 each (+0x10 their data) */ /* type set in global_types.tsv */
extern undefined1 g_HeroIsOutOfBounds; /* 0x96bd91 */
extern undefined2 g_HeroNearSwingshot; /* 0x96a67e */
extern undefined4 g_HeroRequestedCamType; /* 0x96bf64 */
extern undefined1 g_MetalDetectorSpotIsClose; /* 0x96bd28 */
extern undefined4 g_Oxygen; /* 0x96bf80 */
extern int g_RaceBestScore[2]; /* 0xa0cd10: best race score, [0] Rilgar, [1] Kalebo; guess */ /* type set in global_types.tsv */
extern int g_RaceBestTime[2]; /* 0xa0cd04: best race time in frames, [0] Rilgar, [1] Kalebo (was "BoltsRewardedFromRacePB"; it is compared with g_RaceTime) */ /* type set in global_types.tsv */
extern int g_RacePlace; /* 0x96a5a0: finishing place, 1 = first */ /* type set in global_types.tsv */
extern undefined4 g_RaceScore; /* 0x96a588 */
extern undefined4 g_RaceTime; /* 0x96a574 */
extern undefined2 g_SwingshotReleasedTimer; /* 0x969ec6 */
extern undefined4 g_WeaponToSwapTo; /* 0x96bdb4 */
extern undefined g_atanQuadrantTable; /* 0x735900 */
extern undefined4 g_clankMaxNanotech; /* 0x96bf8c */
extern MobyInstance * g_currentWeaponMoby; /* 0x96ad70 */
extern undefined4 g_deathCount; /* 0xa0f6e0 */
extern ITEM_ENUM g_equippedItem; /* 0x969c7c */
extern undefined4 g_framesGroundedCnt; /* 0x969fe0 */
extern undefined2 g_framesNotGrounded; /* 0x969fee */
extern undefined2 g_hasClank; /* 0x96bfb8 */
extern undefined4 g_heroAnimFrame; /* 0x96a788 */
extern undefined4 g_heroAnimSpeed; /* 0x96a770 */
extern undefined4 g_heroBoardMoby; /* 0x96a54c */
extern undefined4 g_heroCGPos; /* 0x969db0 */
extern undefined4 g_heroCollBottom; /* 0x969f04 */
extern undefined4 g_heroCollRadius; /* 0x969f14 */
extern undefined4 g_heroCollTop; /* 0x969f00 */
extern undefined4 g_heroExternalMomentum; /* 0x969e30 */
extern Vec4 g_heroFrameMove; /* 0x969e20: how far the hero moved this frame */ /* type set in global_types.tsv */
extern undefined4 g_heroGhostFrames; /* 0x969eac */
extern undefined2 g_heroGlowCount; /* 0x96bb90 */
extern undefined g_heroGlowPos; /* 0x96bab0 */
extern Vec4 g_heroGravityDir; /* 0x969f70: the hero's gravity direction */ /* type set in global_types.tsv */
extern undefined1 g_heroGravityMode; /* 0x96bd93 */
extern undefined4 g_heroGravityMtx; /* 0x969d20 */
extern int g_heroGrindPath; /* 0x96a240: the data of the grind path the hero is on */ /* type set in global_types.tsv */
extern undefined4 g_heroGroundDist; /* 0x969fbc */
extern undefined4 g_heroGroundNormal; /* 0x969f50 */
extern undefined4 g_heroGroundPoint; /* 0x969f80 */
extern undefined4 g_heroGroundSlope; /* 0x969fc0 */
extern undefined2 g_heroGroundType; /* 0x96afc0 */
extern undefined4 g_heroGroundZ; /* 0x969fb8 */
extern undefined4 g_heroHealth; /* 0x96bf88 */
extern u8 g_heroHotSpotDeathSand; /* 0x96afcb */ /* type set in global_types.tsv */
extern u8 g_heroHotSpotIceWater; /* 0x96afcc */ /* type set in global_types.tsv */
extern u8 g_heroHotSpotLava; /* 0x96afc5 */ /* type set in global_types.tsv */
extern u8 g_heroHotSpotQuickSand; /* 0x96afc6 */ /* type set in global_types.tsv */
extern u8 g_heroHotSpotWater; /* 0x96afc4: the hero is in water */ /* type set in global_types.tsv */
extern undefined4 g_heroIdealRotZ; /* 0x969e60 */
extern undefined4 g_heroIdealSpeed; /* 0x969e70 */
extern undefined1 g_heroInvisible; /* 0x96bd85 */
extern undefined4 g_heroLoopSoundMobys; /* 0x96bf18 */
extern undefined4 g_heroLoopSounds; /* 0x96bef8 */
extern undefined4 g_heroMaxNanotech; /* 0x71fb28 */
extern MobyInstance * g_heroMobyPtr; /* 0x96bd60 */
extern undefined4 g_heroMtx; /* 0x969ce0 */
extern undefined4 g_heroPadMagnitude; /* 0x96bf7c */
extern undefined4 g_heroPadStick; /* 0x96ba00 */
extern undefined g_heroPosHistory; /* 0x96b7e0 */
extern undefined4 g_heroPosHistoryCount; /* 0x96be94 */
extern undefined4 g_heroPosHistoryIdx; /* 0x96be90 */
extern Vec4 g_heroPosition; /* 0x969d60 */
extern undefined2 g_heroQueuedSounds; /* 0x96beb8 */
extern undefined g_heroRotZHistory; /* 0x96be08 */
extern undefined4 g_heroRotZHistoryCount; /* 0x96be8c */
extern undefined4 g_heroRotZHistoryIdx; /* 0x96be88 */
extern Vec4 g_heroRotation; /* 0x969d70 */
extern Vec4 g_heroSpawnPosition; /* 0x9645d0 */
extern Vec4 g_heroSpawnRot; /* 0x9645e0 */
extern PlayerState g_heroState; /* 0x96bd64 */
extern undefined4 g_heroStateTimer; /* 0x969e78 */
extern undefined4 g_heroStateType; /* 0x96bd6c */
extern undefined g_heroTweakers; /* 0x721bd0 */
extern undefined1 g_heroType; /* 0x96bd84 */
extern undefined4 g_heroVelocity; /* 0x969dc0 */
extern float g_heroWaterZ; /* 0x969fd0 */ /* type set in global_types.tsv */
extern undefined2 g_onMagnerail; /* 0x969fe8 */
extern undefined4 g_ratchetMoby; /* 0x96a768 */
extern undefined4 g_standingOnMoby; /* 0x969fdc */
extern undefined4 g_storedNeutralSpeed; /* 0x969e74 */
extern undefined4 g_totalBoltsCollected; /* 0x96ca04 */
extern undefined1 stack0x00000000[16]; /* stack slot, not a real global */

// ---- functions
void SECTION_HEADER_HERO(void);
void Hero_AddGravity(float amount,float *out,float *in);
void Hero_SubGravity(float amount,float *out,float *in);
int Hero_IsSwimming(void);
void Hero_RotEffects(void);
void Hero_PosEffects(void);
void Hero_MakeVisible(void);
void Hero_MakeInvisible(void);
void Hero_MapToMoby(void);
void Hero_GetHeroRelativeGroundAngs(float *normal,float *outAngs);
void Hero_GetHeroRelativePolarVector(float dist,float ang,float z,float *out);
float Hero_Slope(float *vector);
void Hero_GetGroundCollTestVecs (float top,float bot,float *outTop,float *outBot,longlong unused1,longlong unused2, int useGravity);
void Hero_GetGroundInfo(void);
void Hero_ResetHero(void);
void ____Hero_ResetVars_96a790(void);
int Hero_InitStuff(void);
int Hero_HandGadgetID(int slot);
int Hero_GetIdleAnim(int allowFiring);
void STUB_0007f52c(...);
void TakeDamage(int health);
MobyInstance * Hero_GetTweakerMoby(int mobyType);
void hero_SetManipulator(int param_1);
void Hero_UpdateTweakers(void);
void Hero_ResetTweakers(void);
void Hero_UpdateBlinkTimer(void);
void hero_SetEyeManipulator(void);
double Hero_UpdateGlowAndBlink(void);
void STUB_00080904(...);
undefined4 * MetalDetectorUpdate_Unused(void);
void Hero_PlayFootStep(int groundType,int whichFoot,int playSound);
int Hero_MayaFrameTrigger(float frame);
void Hero_FeetSounds(void);
void Hero_AttachRatchetToHeroBone(void);
void Hero_UpdateShadow(void);
int Hero_PlaySound(int sound,int flags);
void Hero_RegisterGlowDraw(void);
void Hero_SetRelativeZ(float z,float *out,float *in);
void Hero_UpdateScaleEffect(void);
void Hero_UpdateScreenFadeInOut(void);
void Hero_ShowMoby(void);
void Hero_HideMoby(void);
void Hero_MapToMobyNonRatchet(void);
MobyInstance * Hero_UpdateQueuedSounds(void);
void Hero_SetClankBankTwistSway(void);
void Hero_CheckLedgeGrab(void);
void Hero_KillLoopingSounds(void);
ulonglong Hero_RevertToRatchet(void);
void Hero_EndHologuise(void);
void HandleHeroDeath(void);
undefined4 * Hero_HandleGroundType(void);
void Hero_GetHeroRelativeVector(float x,float y,float z,float *out);
void ____Hero_UpdateIdleDetect(void);
float Hero_RelativeZComponent(float *v);
double Hero_UpdateCollisionSize(void);
int Hero_GetBoardAnim(short heroAnim,int *outAnim);
void Hero_TransBoardAnim (double param_1,short param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined2 param_6);
void Hero_SetLinkedAnimMoby(void);
undefined8 Hero_GetBackpackAnimTable(uint param_1,int *param_2);
int Hero_GetBackpackAnim(short heroAnim,int *anim1,int *anim2);
void Hero_TransBackpackAnim(double param_1,int param_2,undefined8 param_3);
void Hero_TransAnim(float blend,int seq,int frame);
void Hero_EndFiringAnim(void);
void ____Hero_IsGadgetType_SetVec(int param_1);
void ____Hero_GadgetSwitchSetup(int param_1);
void Hero_ClearIdleTweakVals(void);
int Hero_GetSpecialStateKind(void);
int Hero_CanSwitchGadget(void);
void Hero_HandleGadgetSwitching(int slot);
void Hero_KillGadget(int slot,int nextLevel);
void Hero_UpdateGadgetSlots(void);
void SetHeroType(int heroType,int state,MobyInstance *moby);
void Hero_Turn3D_XYZ (undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,uint param_5 );
void Hero_AlignToGravityInAir(void);
void Hero_AlignToGravity(void);
void Hero_UpdateTimers(void);
int Hero_CheckWall(float height,float dist,longlong unused1,longlong unused2,float *outDist);
double Hero_SnapToGround(double param_1);
void Hero_AddRelativeZ(float z,float *out,float *in);
void Hero_CollideSplineWall(undefined8 param_1,undefined8 param_2);
int Hero_ResolveCollision(int stateType);
void Hero_ResolveCollisionWithHistory(void);
float Hero_ForwardComponent(float *v);
void Hero_ScaleRelativeXY(float len,float *out,float *in);
void Hero_CancelGravity(float *out,float *in);
float Hero_RelativeXYComponent(float *v);
void Hero_MoveWithPlatform(void);
void Hero_ApplyMotion(void);
void ____Hero_UpdateGroundProbe(void);
float Hero_GetPadMagnitude(void);
int Hero_UseMagneGravity(void);
void Hero_UpdateMovement(void);
void Hero_SyncBoardAnimSpeed(void);
void Hero_SyncBackpackAnimSpeed(void);
void Hero_SyncBoardAnimFrame(void);
void Hero_UpdateAnim(void);
void HeroUpdateNonRatchet(void);
uint Hero_DisplayHelpMsgs(void);
void Hero_CheckCheatSequences(void);
void Hero_SetLightsFromMoby(undefined8 param_1,int param_2);
void Hero_SyncGadgetColors(void);
void Hero_UpdateColorEffects(void);
undefined8 ____Hero_GetSoundForLevel(int param_1);
void Hero_UpdateOverlayAnimLayer(void);
int Hero_GetWeaponAmmo(int weapon);
double Hero_UpdateFiringAnimLayer(void);
ulonglong ____Hero_DefaultByteIfFF(int param_1,ulonglong param_2);
undefined8 ____Hero_GetGadgetAnimBlend(int param_1,undefined4 *param_2);
void Hero_UpdateGadgetAnimLayers(double param_1);
void Hero_UpdateAnimLayers(void);
void Hero_AddGlow(float size,float intensity,float *pos,int color);
void Hero_UpdateGadgetGlows(void);
void ____Hero_UpdateManipulatorSpin(void);
double Mtx3_AbsDiffSum(int param_1,int param_2);
void Hero_PushGadgetMtxHistory(int param_1,Vec4 *param_2);
void Hero_BuildPoseFromJoints (int param_1,longlong param_2,int param_3,int param_4,ulonglong param_5);
int Hero_IsWearingBoots(int slot);
undefined8 Hero_IsWeaponGroupA(longlong param_1);
undefined8 Hero_IsWeaponGroupB(longlong param_1);
void Hero_UpdateGadgetMobys(void);
void EquipItem(void);
void Hero_UpdateGadgets(void);
void ____Hero_GetJoint9Mtx(ulonglong param_1);
void ____Hero_SetTweakPair_929e8(double param_1,double param_2);
void Hero_SetMagnebootsTweaks(void);
void Hero_UpdateIdleLook(void);
void ____Hero_SetTweak_721dd4(double param_1,double param_2);
void ____Hero_SetTweak_721e84(double param_1,double param_2);
void Hero_UpdateLookAtTarget(void);
void Hero_UpdateCheatTweaks(void);
void ____Hero_UpdateCrateTargeting(void);
void ____Unused_Hero_SetBlock_96af80 (double param_1,double param_2,short param_3,ushort param_4,ushort param_5, ushort param_6);
void ____Hero_UpdateTiltWobbleFx(void);
undefined8 Hero_FindGrindRail (undefined8 param_1,undefined8 param_2,undefined4 *param_3,float *param_4, undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,int param_8);
void Hero_GetGrindProbePos(float *param_1);
void Hero_CheckGrindRailAttach(void);
void Hero_CheckGrindAtPos(void);
void HeroUpdate(void);
void Hero_AddPulsingMobyGlow(MobyInstance *param_1);
void Hero_DrawGlows(void);
void Hero_GetPadFly(float accel,float *out,float *padWindUp);
void Hero_ScaleAnim(float frame,float time,float scale,float rate);
float Hero_GetAnimScaledVal(float *table,int count);
void Hero_RotateAroundPoint(undefined8 param_1,undefined8 param_2);
void Hero_RotateAroundCG(void);
void Hero_SpawnWaterRings(undefined8 param_1,short param_2);
void Hero_SpawnWaterWake(undefined8 param_1,short param_2);
void Hero_SpawnWaterDrops(undefined8 param_1,short param_2);
void Hero_SpawnWaterBubbles(int param_1,int param_2);
void Hero_SpawnWaterSplash(int param_1,int param_2,int param_3);
void Hero_SpawnLavaAssParticles(void);
void ____Hero_SetTweakPair_97b44(double param_1,double param_2);
int Hero_UpdateLedge(float *pos,float *rot);
void Hero_CheckLedgeAhead(void);
void STUB_00099330(...);
MobyInstance * Hero_GetGadgetMoby(int slot);
float Hero_RotZRingVal(int frame);
double Hero_ComputeTargetScore (double param_1,double param_2,double param_3,double param_4,int param_5);
MobyInstance * Hero_GetAutoTargetMoby(float a,float b,float c,float d);
void Hero_RestartFiringAnimLayer(int param_1,int param_2);
void Hero_PlayFiringAnim(void);
void Hero_ScaleGetHitMomentum (float xy,float z,float *momentum,longlong unused1,longlong unused2,int scale);
int Hero_HandleDamage(int transition);
ulonglong ____IsMobyField_a6_Eq47(int param_1);
void Hero_ZeroMovement(void);
float Hero_RelativeZAngle(void);
void Hero_GetIdealThrustFromPad(double param_1,undefined8 param_2,int param_3);
void Hero_GetIdealThrustForWalk(void);
void Hero_RotateByEuler(void);
void Hero_Turn3D(float gain,float damp,float limit);
void Hero_Turn(float gain,float damp,float limit);
void Hero_GunTurnWalk(void);
void Hero_TurnWalk(void);
void Hero_ThrustModeAccel(float acc,float dec);
void Hero_ThrustToMotionFwd(void);
void Hero_ThrustToMotion(float idealRotZ);
void Hero_WallSloopMotion(void);
void Hero_KneeBumpMotion(int straightAhead);
void Hero_UpdateExternalThrust(float scale,float decel);
void Hero_ScaleMotion(float scale);
void Hero_ForwardThrust(float amount,float *out,float *in);
void Hero_JumpTranslation(float accel);
void Hero_JumpThrustGrav(void);
void Hero_JumpTurnTrans(void);
void Hero_SetAttackRot(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void Hero_SetBankTwistSway(void);
void Hero_SetBackpackSway(void);
void ____Unused_Hero_RotateTowardDir (undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4, float *param_5);
void Hero_ApplyTaper(float decel);
void Hero_AttackMotion(void);
void Hero_PlayLoopSound(int slot,MobyInstance *moby,int sound);
void Hero_QueueSound(short sound,short timer,short flags);
void Hero_SnapAnim(int seq,int frame);
void Hero_Warp(float *pos,float *rot,longlong unused,int flags);
void Hero_EdgeStop(double param_1,double param_2);
MobyInstance * ____Hero_ApplyHitGravityToMobyList(MobyInstance *param_1,int param_2);
void Hero_SpawnLavaDeathParts(void);
void Hero_ThrowWrench(void);
int Hero_GetSnapJumpDir(void);
int Hero_GetSnapJumpSnapWindow(void);
void Hero_FindSwingshotTarget(void);
undefined4 Hero_FindPullTarget(void);
uint Hero_TransitionToDefault(void);
int Hero_IdleCycleFiringTransition(void);
undefined8 HandleUnderwaterSwimming(void);
int Hero_SwimSurfTransition(void);
void Hero_SurfBob(void);
bool ____Hero_UpdateWeaponInput(void);
int Hero_JumpOrSnapJumpCheck(int lookback,int noJump);
void Hero_UpdateWalkAnim(void);
void ____Hero_CleanupAttachedMobys(void);
int Hero_GetSpecialIdle(int *idle);
void Hero_SetNextAnimFrame(int seq,int frame);
void Hero_JumpLandTransitions(void);
int Hero_CrouchJumpTransitions(void);
undefined8 ____Hero_GetAnimId_55or7f(void);
float Hero_PredictLand(float frame_max,float grav,float groundZ);
void Hero_HandleHoverboardTricks(void);
void Hero_HoverboardBoostPads(void);
void Hero_UpdateHoverboardRaceStats(void);
void Hero_GetHoverboardRespawn(float *pos,float *rot);
void Hero_UpdateHoverboardRace(void);
undefined8 ____Hero_ProbeCollAlongVelocity(void);
undefined8 ____Hero_GetAnimId_52_68_7d_7e(void);
undefined8 Hero_GrindMotion(void);
undefined8 Hero_UpdateWeaponReadyAnim(void);
void Hero_PlayBackpackIdle(void);
void ____Hero_SetTimer_96a798(void);
void ____Unused_Hero_ClearBlock_96af80(void);
float Hero_GetJumpPeak(float grav,float *pos,float *vel,longlong unused,int *frames);
int hero_ConsumeAmmo(int weapon,int amount);
int hero_GiveAmmo(int weapon,int amount);
void Hero_WalkToPos(float rotZ,float *pos,longlong unused,int flags);
int ____Hero_TransitionByFallSpeed(void);
void Hero_UpdateGadgetsInScene(ulonglong param_1);
void Hero_UpdateInScene(MobyInstance *param_1);
void ____Hero_SnapMobyToBonePose(undefined8 param_1,MobyInstance *param_2);
ulonglong SetPositionAfterMovie(void);
void HandleHeroMovement(undefined8 param_1,MobyInstance *param_2,undefined4 *param_3);
int TransitionMovement(int state,int force);
void HeroMovement(undefined8 param_1,undefined8 param_2,ulonglong param_3);
