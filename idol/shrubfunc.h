#pragma once
// idol/shrubfunc.h
#include "types.h"

// ---- types
struct ShrubInstance {
    char _unknown_00[64];
    struct BSphere bSphere;
    char _unknown_50[13];
    char dir_lights_upd;
    char _unknown_5e[12];
    ushort point_lights;
    char _unknown_6c[4];
};

// ---- globals
extern undefined1 DAT_0159c361; /* 0x159c361 */
extern undefined1 DAT_0159c362; /* 0x159c362 */
extern RenderingStep * DL_DepthPass; /* 0x8fa434 */
extern RenderingStep * M_Depth; /* 0x8fa420 */
extern RenderingStep * M_Pass; /* 0x8fa424 */
extern undefined4 _DAT_00508bd0; /* direct read */
extern undefined4 _DAT_00508be0; /* direct read */
extern undefined4 _DAT_00508bf0; /* direct read */
extern undefined4 _DAT_00508c00; /* direct read */
extern undefined4 _DAT_00509d50; /* direct read */

// ---- functions
void DrawShrub(int param_1,ulonglong param_2);
void DrawSky(int param_1);
void DrawSkyIfLoaded(int param_1);
