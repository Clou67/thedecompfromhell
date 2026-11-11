#pragma once
// game/lights.h
#include "types.h"

// ---- types
struct PL_Data {               /* PointLightData[8] @ 0xa1e100, 0x30 bytes: what one point light is attached to */
    short tieOffset;           /* 0x00  ranges into list[] */
    short tieCnt;
    short shrubOffset;         /* 0x04 */
    short shrubCnt;
    short tfragOffset;         /* 0x08 */
    short tfragCnt;
    short *list;               /* 0x0c  -> PointLightLists[i]: tie, tfrag then shrub indices */
    int state;                 /* 0x10  enum PointLightState */
    int pad[3];                /* 0x14 */
    struct Vec4 lastPos;       /* 0x20  light position the lists were last built at */
};

struct PointLight {
    struct Vec4 color;
    struct Vec4 pos;
};

// ---- globals
extern undefined4 DAT_007246f4; /* 0x7246f4 */
extern PL_Data PointLightData[8]; /* 0xa1e100 */ /* type set in global_types.tsv */
extern short PointLightLists[8][512]; /* 0xa1e280: 0x400 bytes per light */ /* type set in global_types.tsv */
extern PointLight PointLights[8]; /* 0xa1df00 */
extern ShrubInstance * g_ShrubInstance; /* 0xa54f10 */
extern Vec4 g_CamLightColor; /* 0xa1de40 */ /* type set in global_types.tsv */
extern Vec4 g_CamLightDir; /* 0xa1de50: camera-relative directional light, rebuilt every frame */ /* type set in global_types.tsv */
extern float g_PerfLoad; /* 0xa10718: guess - fraction of the frame budget in use (cf. 0xa10714 = ticks/9600); point lights are refused above 0.8 */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_LIGHTS(void);
undefined8 STUB_000da2f8_RET_0(...);
int CreatePointLight3(Vec4 *pos, float radius, float intensity, u32 rgb);
int CreatePointLight2(Vec4 *pos, float radius, float intensity, float r, float g, float b);
void DetachPointLight(int idx);
void DeletePointLight(int idx);
void CreatePointLight(int idx);
void RefreshPointLight(int idx);
void UpdatePointLights(void);
