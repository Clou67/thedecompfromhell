#pragma once
// game/mesh.h
#include "types.h"

// ---- types
struct Vec2 {
    float x;
    float y;
};

struct Vec3 {
    float x;
    float y;
    float z;
};

// ---- globals
extern undefined4 DAT_00726aac; /* 0x726aac */
extern undefined4 _DAT_000e93b0; /* direct read */
extern undefined4 _DAT_000e93c0; /* direct read */
extern undefined4 _DAT_000e93d0; /* direct read */
extern undefined4 _DAT_000e93e0; /* direct read */
extern undefined4 _DAT_000e9420; /* direct read */
extern undefined4 _DAT_000e9430; /* direct read */
extern undefined4 _DAT_000e9450; /* direct read */
extern undefined4 minHeight; /* 0x73aa1c */

// ---- functions
void SECTION_HEADER_MESH(void);
void STUB_000e9130(...);
void STUB_000e9134(...);
void STUB_000e9138(...);
void STUB_000e913c(...);
int STUB_000e9140(...);
void STUB_000e9148(...);
void STUB_000e914c(...);
int STUB_000e9150(...);
void STUB_000e9158(...);
void AddUVOffsets(Vec2 *dst, Vec2 *src, int count, Vec2 *offset);
void StageTileBuf(float (*stage)[24], WaterTileBuf *buf);
void WaterTileBufLerp(float t, float *dst, float *bufA, float *bufB);
void ShadeVerts(WaterTile *tile);
void WaterTile_StepWave(float (*stage)[24], int tileIdx, int bufIdx, WaterTile *tiles);
void STUB_000e9f28(...);
void BuildVerts(WaterSheet *sheet,WaterSheetVert *outVerts);
void STUB_000ea1e8(...);
void NormalsToEnvUV(int count, Vec3 *positions, Vec3 *normals, Vec2 *outUV);
