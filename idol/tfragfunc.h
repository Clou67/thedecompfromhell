#pragma once
// idol/tfragfunc.h
#include "types.h"

// ---- types
struct Tfrag {
    struct BSphere bSphere;
    char _unknown_10[12];
    ushort point_lights;
    char occlIndex[3];
    char dir_lights_upd;
    char _unknown_22[14];
};

// ---- globals
extern undefined4 DAT_00041848; /* 0x41848 */
extern undefined1 DAT_0159c365; /* 0x159c365 */
extern undefined1 DAT_0159c366; /* 0x159c366 */
extern undefined1 DAT_0159c368; /* 0x159c368 */
extern pointer32 PTR_FUN_00712268; /* 0x712268 */

// ---- functions
void DrawTfrag(int param_1,RsxCmd *param_2,int *param_3);
void DrawTfrag(int param_1,undefined8 param_2);
int TerrainMaterialCompare(uint *param_1,uint *param_2);
void SortTerrainMaterials(int param_1);
void CullTieInstances(int param_1,undefined4 *param_2);
