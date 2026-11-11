// game/update/moby1349.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x254604-0x254e90
#include "game/update/moby1349.h"
#include "game/camera.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/moby1118.h"

// 0x0254604 (0x14 bytes)
void M1349_00254604(void)

{
  DAT_0079b98c = 0x10000;
  return;
}


// 0x0254630 (0x768 bytes)
// strings: 00a1000c: 'None'

/* Moby 1349 */

void UpdateMoby_1349(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  piVar1 = (int *)moby->pVar;
  iVar3 = piVar1[4];
  if (iVar3 < 1) {
    if (((-1 < iVar3) &&
        (iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[2]), iVar3 != 0)) &&
       (g_heroStateType == 0xf)) {
      piVar1[4] = 1;
    }
  }
  else if (iVar3 < 2) {
    if (g_heroState == GRINDRAIL_DAMAGE) {
      piVar1[4] = 0;
    }
    else {
      iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[3]);
      if (iVar3 != 0) {
        MB_UnlockSkillPoint(0xb);
      }
    }
  }
  if ((UnlockableItems.grindboots == '\0') &&
     (iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1), iVar3 != 0)) {
    iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<386,2>() * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<386,2>() * 600 == 0)) {
      Help_QueueMessage(STR_THERE_IS_NOTHING_YOU_0x1F40,0x30);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<386,2>() < iVar3 / 600) {
      sVar2 = (short)(iVar3 >> 0x1f);
      CHAR_ARRAY_00a1000c.piece<386,2>() =
           ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  if (((UnlockableItems.grindboots != '\0') &&
      (iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1), iVar3 != 0)) &&
     (g_MiscLevelFlags.field47_0x2f == 0)) {
    if (CHAR_ARRAY_00a1000c.piece<392,2>() == 0) {
      CHAR_ARRAY_00a1000c[0x188] = '\0';
      CHAR_ARRAY_00a1000c[0x189] = '\x01';
      iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<394,2>() < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<394,2>() =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
      CHAR_ARRAY_00a1000c.piece<396,4>() = CHAR_ARRAY_00a1000c.piece<396,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    else {
      iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
           (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<394,2>() * -600)) ||
         ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<394,2>() * 600 == 0)) {
        Help_QueueMessage(STR_YOU_CAN_USE_YOUR_0x1F41,0x31);
      }
      else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<394,2>() < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<394,2>() =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
    }
  }
  if (((UnlockableItems.magneboots == '\0') &&
      (iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[1]), iVar3 != 0)) &&
     (g_SeenPlanets.Orxon != '\0')) {
    iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<402,2>() * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<402,2>() * 600 == 0)) {
      Help_QueueMessage(STR_YOU_WILL_NEED_A_0x1F42,0x32);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<402,2>() < iVar3 / 600) {
      sVar2 = (short)(iVar3 >> 0x1f);
      CHAR_ARRAY_00a1000c.piece<402,2>() =
           ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  else if (((UnlockableItems.magneboots != '\0') &&
           (iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[1]), iVar3 != 0)) &&
          (g_SeenPlanets.Orxon != '\0')) {
    if (CHAR_ARRAY_00a1000c.piece<896,2>() == 0) {
      CHAR_ARRAY_00a1000c[0x380] = '\0';
      CHAR_ARRAY_00a1000c[0x381] = '\x01';
      iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<898,2>() < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<898,2>() =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
      CHAR_ARRAY_00a1000c.piece<900,4>() = CHAR_ARRAY_00a1000c.piece<900,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    else {
      iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
           (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<898,2>() * -600)) ||
         ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<898,2>() * 600 == 0)) {
        Help_QueueMessage(STR_YOU_CAN_USE_YOUR_0x1F45,0x70);
      }
      else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<898,2>() < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<898,2>() =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
    }
  }
  if (DAT_00969f78 * -1.0 < 0.1) {
    CHAR_ARRAY_00a1000c[0x380] = -1;
    CHAR_ARRAY_00a1000c[0x381] = -1;
  }
  if ((g_MiscLevelFlags.field47_0x2f == 0) && (g_heroStateType == 0xf)) {
    g_MiscLevelFlags.field47_0x2f = 1;
  }
  return;
}


// 0x0254d98 (0x14 bytes)
void M1349_00254d98(void)

{
  DAT_0079b9fc = 0x10000;
  return;
}


// 0x0254db8 (0x44 bytes)
double M1349_00254db8(double param_1,int param_2)

{
  float fVar1;
  
  fVar1 = DeltAng((float)param_1,g_FrameTime * 12.566371,
                            (float *)(param_2 + 0x40),0x254db0,0x720000,0);
  return (double)fVar1;
}


// 0x0254e00 (0x90 bytes)
void M1349_00254e00(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(param_1 + 0x40);
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 4);
  MB_PathEvalSpline
            ((double)*(float *)(*(int *)(param_1 + 0x78) + 8),Splines[iVar1],iVar1 * 4,0,
             param_1 + 0x10,param_1 + 0x40,0);
  *(float *)(param_1 + 0x40) = (float)dVar2;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - 0.4;
  return;
}


