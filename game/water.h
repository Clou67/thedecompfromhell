#pragma once
// game/water.h
#include "types.h"
#include "game/mesh.h"

// ---- types
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

struct WaterSheetVert {
    struct Vec3 pos;
    struct Vec2 uv0;
    struct Vec2 uv1;
    uint32_t color;
};

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

struct WaterTileBox {
    s32 min_x;
    s32 min_y;
    s32 min_z;
    u16 size_x;
    u16 size_y;
};

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

// ---- globals
extern float CONST_1_0f; /* 0x73ab00 */
extern undefined4 DAT_0073a924; /* 0x73a924 */
extern undefined8 DAT_0073a980; /* 0x73a980 */
extern undefined8 DAT_0073a990; /* 0x73a990 */
extern undefined8 DAT_0073a9a0; /* 0x73a9a0 */
extern undefined8 DAT_0073a9b0; /* 0x73a9b0 */
extern undefined8 DAT_0073a9c0; /* 0x73a9c0 */
extern undefined8 DAT_0073a9d0; /* 0x73a9d0 */
extern undefined8 DAT_0073a9e0; /* 0x73a9e0 */
extern undefined4 DAT_0073a9f0; /* 0x73a9f0 */
extern undefined4 DAT_0073a9f4; /* 0x73a9f4 */
extern undefined4 DAT_0073aa40; /* 0x73aa40 */
extern undefined4 DAT_0073aa44; /* 0x73aa44 */
extern undefined4 DAT_0073aa48; /* 0x73aa48 */
extern undefined4 DAT_0073aa4c; /* 0x73aa4c */
extern undefined4 DAT_0073aa50; /* 0x73aa50 */
extern undefined2 DAT_0073aa60; /* 0x73aa60 */
extern undefined4 DAT_0073aac0; /* 0x73aac0 */
extern undefined4 DAT_0073aac4; /* 0x73aac4 */
extern undefined4 DAT_0073ac40; /* 0x73ac40 */
extern undefined4 DAT_0073ac44; /* 0x73ac44 */
extern undefined4 DAT_0073adc8; /* 0x73adc8 */
extern undefined4 DAT_0073adf4; /* 0x73adf4 */
extern undefined4 DAT_0073ae08; /* 0x73ae08 */
extern undefined4 DAT_0073ae20; /* 0x73ae20 */
extern undefined4 DAT_0073ae60; /* 0x73ae60 */
extern undefined4 DAT_0073ae70; /* no defined data */
extern undefined4 DAT_0073af50; /* 0x73af50 */
extern undefined2 DAT_0073b330; /* 0x73b330 */
extern undefined8 DAT_0073b430; /* 0x73b430 */
extern undefined8 DAT_0073b440; /* 0x73b440 */
extern undefined8 DAT_0073b450; /* 0x73b450 */
extern undefined8 DAT_0073b460; /* 0x73b460 */
extern undefined8 DAT_0073b470; /* 0x73b470 */
extern undefined8 DAT_0073b480; /* 0x73b480 */
extern undefined8 DAT_0073b490; /* 0x73b490 */
extern undefined8 DAT_0073b4a0; /* 0x73b4a0 */
extern undefined8 DAT_0073b4b0; /* 0x73b4b0 */
extern undefined4 DAT_0073b50c; /* 0x73b50c */
extern undefined4 DAT_0073b58c; /* 0x73b58c */
extern undefined4 DAT_00902ec8; /* 0x902ec8 */
extern undefined4 DAT_00e5aaa4; /* 0xe5aaa4 */
extern undefined4 DAT_00e5aad0; /* 0xe5aad0 */
extern undefined4 DAT_00e5aad4; /* 0xe5aad4 */
extern undefined4 DAT_00e5aee0; /* 0xe5aee0 */
extern undefined4 DAT_00e5aee4; /* 0xe5aee4 */
extern undefined4 DAT_00e5aee8; /* 0xe5aee8 */
extern undefined2 DAT_00e5aeec; /* 0xe5aeec */
extern undefined2 DAT_00e5aeee; /* 0xe5aeee */
extern undefined4 DAT_00e5aef0; /* 0xe5aef0 */
extern undefined4 DAT_00e5aef4; /* 0xe5aef4 */
extern undefined4 DAT_00e5aef8; /* 0xe5aef8 */
extern undefined2 DAT_00e5aefc; /* 0xe5aefc */
extern undefined2 DAT_00e5aefe; /* 0xe5aefe */
extern undefined4 DAT_00e5af00; /* 0xe5af00 */
extern undefined4 LevelFogMode; /* 0x95ea10 */
extern undefined4 OceanFogB; /* 0xe5aed0 */
extern undefined4 OceanFogFarDist; /* 0xe5aebc */
extern undefined4 OceanFogFarIntensity; /* 0xe5aec4 */
extern undefined4 OceanFogG; /* 0xe5aecc */
extern undefined4 OceanFogNearDist; /* 0xe5aeb8 */
extern undefined4 OceanFogNearIntensity; /* 0xe5aec0 */
extern undefined4 OceanFogR; /* 0xe5aec8 */
extern WaterTileBox * WaterTileBoxes; /* 0xe5aa84 */
extern int WaterTileCnt; /* 0xe5aa88 */
extern WaterTileConst WaterTileConsts; /* 0x73aa00 */
extern WaterTile * WaterTiles; /* 0xe5aa80 */
extern undefined4 _DAT_0017d880; /* direct read */
extern undefined4 _DAT_0017d890; /* direct read */
extern undefined4 _DAT_0017d8a0; /* direct read */
extern undefined4 _DAT_0017d8b0; /* direct read */
extern undefined4 _DAT_0017d8c0; /* direct read */
extern undefined4 _DAT_0017d8d0; /* direct read */
extern undefined4 _DAT_0017dcc0; /* direct read */
extern undefined4 _DAT_0017dcd0; /* direct read */
extern undefined4 _DAT_0017dce0; /* direct read */
extern undefined4 _DAT_0017dcf0; /* direct read */
extern undefined4 _DAT_0017dd00; /* direct read */
extern undefined4 _DAT_0017dd10; /* direct read */
extern undefined4 fogNearDist; /* 0x95d198 */

// ---- functions
void SECTION_HEADER_WATER(void);
void WaterTile_InitAll(WaterTile *tiles,int tileCnt);
void WaterTile_CalcGridBSphere(WaterTile *tile,BSphere *bounds);
int WaterTile_LookupTile(float x,float y,float z);
void WaterWave_ScaleTable(float scale);
void WaterTile_StepSim(WaterTile *tile,int cnt);
void WaterTile_UpdateWaves(WaterTile *tiles,int nTiles);
void WaterTile_UpdateWaves(WaterTile *tile);
void WaterTile_PutDrop (float x,float y,float radius,float height,WaterTile *tiles,int tileCount,float add);
void WaterTile_PutDrop_Thunk (double param_1,double param_2,double param_3,double param_4,double param_5, WaterTile *param_6,int param_7);
float WaterTile_GetHeight(float x,float y,float z);
void WaterTile_BuildVertexGrid(WaterTile *tile);
void WaterTile_DrawCellBase(WaterTile *tile,uint idx);
void WaterTile_DrawCellOvl(WaterTile *tile,uint idx);
void WaterTile_CullAndDrawCell(WaterTile *tile,uint idx,int clipMode);
void ____Unused_Water_ResetIds_73aa44(void);
void WaterTile_DrawAll(WaterTile *tile,int cnt);
void Sheet_ResetScroll(int cnt,WaterSheet *sheet);
void CALL_STUB_0017d488(void);
void WaterSheet_DrawAll(int cnt,WaterSheet *sheet);
void STUB_0017d870(...);
void SubmitOceanCell (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5, undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9);
double OceanPass(OceanPlane *ocean);
void OceanPlane_SetDepth(float scale,OceanPlane *ocean,undefined8 param_3,byte depth);
void OceanPlane_SetDefaultDepth(double scale,OceanPlane *param_2);
void PushOceanFog(OceanPlane *ocean);
void PopZoneFog(OceanPlane *ocean);
undefined8 SubmitZone(OceanPlane *ocean);
void OceanSpecialPass(undefined8 param_1,OceanPlane *param_2,int param_3,int param_4);
void ScaleWaveTable(float scale);
void SetFogVars(float neardist,float fardist,float nearintensity,float farintensity);
void RestoreFogVars(void);
void OceanPass_Thunk(OceanPlane *ocean);
void IcePass(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
void Water_StaticInitGsPackets(void);
void WaterDrift_Set (double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5, undefined2 param_6);
void WaterDrift_Update(void);
void UpdateSound_0(void *param_1);
void UpdateSound_1(void *param_1);
void UpdateSound_2(void *param_1);
void UpdateSound_3(int param_1);
void Water_StaticInit2(void);
void UpdateSound_4(void *param_1);
void UpdateSound_5(void *param_1);
void UpdateSound_6(int param_1);
