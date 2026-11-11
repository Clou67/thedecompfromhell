#pragma once
// game/initsky.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00724684; /* 0x724684 */
extern undefined4 DAT_0095cecc; /* 0x95cecc */
extern undefined4 DAT_0095ced4; /* 0x95ced4 */
extern undefined4 DAT_0095ced8; /* 0x95ced8 */
extern pointer32 PTR_DrawSceneShipEffect_007059a8; /* 0x7059a8 */
extern int g_SceneId; /* 0x95cd80 */

// ---- functions
void SECTION_HEADER_INITSKY(void);
void InitSky(void);
void DrawSceneShipEffect(undefined8 param_1);
void SpawnSceneShipParticles(undefined8 param_1);
void UpdateSpaceSceneEffects(void);
