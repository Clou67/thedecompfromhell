#pragma once
// game/skyfunc.h
#include "types.h"
#include "game/partproc.h"
#include "game/pause.h"

// ---- types
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

struct sky_tex {
    uint tex0;
    uint tex1;
    ushort tex_ofs;
    ushort pal_ofs;
    ushort u_log;
    ushort v_log;
};

// ---- globals
extern undefined4 DAT_00731a6c; /* 0x731a6c */
extern undefined4 DAT_00731a90; /* no defined data */
extern undefined4 DAT_00731ae0; /* no defined data */
extern undefined4 DAT_00731aec; /* no defined data */
extern undefined4 DAT_00a56150; /* 0xa56150 */
extern undefined4 DAT_00a56154; /* 0xa56154 */
extern undefined4 DAT_00a56158; /* 0xa56158 */
extern undefined4 DAT_00a5615c; /* 0xa5615c */
extern undefined4 DAT_00a56160; /* 0xa56160 */
extern undefined4 DAT_00a56164; /* 0xa56164 */
extern undefined4 DAT_00a56170; /* 0xa56170 */
extern undefined4 DAT_00a56184; /* 0xa56184 */
extern undefined4 DAT_00a56188; /* 0xa56188 */
extern undefined4 DAT_00a5618c; /* 0xa5618c */
extern undefined4 DAT_00a56190; /* 0xa56190 */
extern undefined4 DAT_00a56194; /* 0xa56194 */
extern undefined4 DAT_00a56198; /* 0xa56198 */
extern undefined4 DAT_00a5619c; /* 0xa5619c */
extern undefined4 DAT_00a561a0; /* 0xa561a0 */
extern undefined4 DAT_00a561a4; /* 0xa561a4 */
extern undefined4 DAT_00a561a8; /* 0xa561a8 */
extern undefined4 DAT_00a561ac; /* 0xa561ac */
extern undefined4 DAT_00a561b0; /* 0xa561b0 */
extern undefined4 DAT_00a561b4; /* 0xa561b4 */
extern undefined4 DAT_00a561b8; /* 0xa561b8 */
extern undefined4 DAT_00a561bc; /* 0xa561bc */
extern RenderingStep * DepthPass; /* 0x8fa414 */
extern SKY * Sky; /* 0xa1a79c */
extern undefined4 outMatrix; /* 0xa56180 */

// ---- functions
void SECTION_HEADER_SKYFUNC(void);
void SkyInitNightSprites(int param_1,int param_2);
void SkyUpdateNightSprites(void);
void SkyDrawShell(undefined8 param_1);
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
int GetSkyShellTexIndex(int param_1);
void SkyDrawShellTextured(int *param_1);
void SkyDrawShellGouraud(int *param_1);
