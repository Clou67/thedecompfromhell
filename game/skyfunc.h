#pragma once
// game/skyfunc.h
#include "types.h"

// ---- types
/* the level's sky as the game draws it (Sky, set up by Idol); Ghidra's SKY with the sprite list
   and the texture base corrected from how skyfunc / skyproc use them */
struct SKY {
    int pad;                 /* 0x00 */
    short clear_screen;      /* 0x04 */
    u16 shell_cnt;           /* 0x06 */
    u16 sprite_cnt;          /* 0x08 */
    short sprite_max;        /* 0x0a */
    int texBase;             /* 0x0c  EffectTex index of the sky's first texture */
    struct sky_sprite *sprites; /* 0x10 */
    void *vtx_data;          /* 0x14 */
    void *idx_data;          /* 0x18 */
    void *shells[8];         /* 0x1c */
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

/* a sky sprite (sun, moons, ...) (DL: sky_sprite, same layout); RaC1's SKY keeps the list at +0x10,
   the field Ghidra named tex_defs */
struct sky_sprite {
    char type;               /* 0x00  0: drawn at 0.5 scale, else 0.4 */
    char drawn;              /* 0x01 */
    char tex;                /* 0x02 */
    char gs_alpha;           /* 0x03  blend mode for idol_draw::DrawDepth, 0 = none */
    int rgba;                /* 0x04 */
    float rot;               /* 0x08 */
    int user;                /* 0x0c */
    struct Vec4 pos;         /* 0x10  relative to the camera */
};
typedef char sky_sprite_size_check[sizeof(struct sky_sprite) == 0x20 ? 1 : -1];

// ---- globals
extern undefined4 DAT_00731a6c; /* 0x731a6c */
extern SKY * Sky; /* 0xa1a79c */
extern u32 g_CometColors[4]; /* 0x731aec: Levels 6 and 17 */ /* type set in global_types.tsv */
extern u32 g_SkyLightColors[3]; /* 0x731ae0: Level 6's blinking lights */ /* type set in global_types.tsv */
extern Vec4 g_SkyLightPositions[3]; /* 0x731ab0: their positions (w: scale) */ /* type set in global_types.tsv */
extern Vec4 g_SkyOrigin; /* 0xa56150: centre of the scaled sky shells (Level 19, space); set by space.cpp */ /* type set in global_types.tsv */
extern float g_SkyShellSpeed; /* 0xa56160: how fast Level 19's shells turn */ /* type set in global_types.tsv */
extern int g_SkyVuBuffer; /* 0xa56170: which of the two VU1 buffers the PS2 shell draw fills */ /* type set in global_types.tsv */
extern int g_SkyVuBufferAddrs[2]; /* 0x731a90 */ /* type set in global_types.tsv */
extern Mtx4 outMatrix; /* 0xa56180: the matrix the sky shells are drawn with */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_SKYFUNC(void);
void SkyInitNightSprites(int stars, int comets);
void SkyUpdateNightSprites(void);
void SkyDrawShell(int shell);
void SkyLevelNone(void);
void SkyLevel_00(void);
void SkyLevel_01(void);
void SkyLevel_02(void);
void SkyLevel_03(void);
void SkyLevel_04(void);
void SkyLevel_05(void);
void SkyLevel_06(void);
void SkyLevel_07(void);
void SkyLevel_08(void);
void SkyLevel_09(void);
void SkyLevel_10(void);
void SkyLevel_11(void);
void SkyLevel_12(void);
void SkyLevel_13(void);
void SkyLevel_14(void);
void SkyLevel_15(void);
void SkyLevel_16(void);
void SkyLevel_17(void);
void SkyLevel_18(void);
void SkyLevel_19(void);
void SkyLevelGeneric(void);
void DoSkyGifPaging(void);
void SetupGifPaging(void);
void Space_DrawSkyShell(void);
int GetSkyTex(int idx);
int GetSkyShellTexIndex(int shell);
void SkyDrawShellTextured(int *shell);
void SkyDrawShellGouraud(int *shell);
