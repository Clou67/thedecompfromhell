#pragma once
// game/initspace.h
#include "types.h"

// ---- globals
extern int g_SceneId; /* 0x95cd80 */

// ---- functions
void DrawSceneShipEffect(MobyInstance *moby);
void SpawnSceneShipParticles(MobyInstance *moby);
void UpdateSpaceSceneEffects(void);
