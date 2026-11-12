#pragma once
// game/initsky.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00724684; /* 0x724684 */
extern int g_SceneId; /* 0x95cd80 */

// ---- functions
void SECTION_HEADER_INITSKY(void);
void InitSky(void);
void DrawSceneShipEffect(MobyInstance *moby);
void SpawnSceneShipParticles(MobyInstance *moby);
void UpdateSpaceSceneEffects(void);
