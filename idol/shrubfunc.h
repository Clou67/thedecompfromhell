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
extern undefined1 DAT_0159c364; /* 0x159c364 */
extern RenderingStep * DL_DepthPass; /* 0x8fa434 */
extern RenderingStep * M_Depth; /* 0x8fa420 */
extern RenderingStep * M_Pass; /* 0x8fa424 */
extern undefined4 _DAT_00508bd0; /* direct read */
extern undefined4 _DAT_00508be0; /* direct read */
extern undefined4 _DAT_00508bf0; /* direct read */
extern undefined4 _DAT_00508c00; /* direct read */
extern undefined4 _DAT_00509d50; /* direct read */
extern undefined4 _DAT_0050a520; /* direct read */

// ---- functions
void DrawShrub(int param_1,ulonglong param_2);
void DrawSky(int param_1);
void DrawSkyIfLoaded(int param_1);
namespace idol_draw { void DrawSkyShell(SKY *sky,int shell,Mtx4 mtx); } 
void CullTerrainChunks(undefined4 *param_1,int param_2,int *param_3);
void CullTerrain(int param_1,undefined8 param_2);
