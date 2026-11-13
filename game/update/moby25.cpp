// game/update/moby25.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x316620-0x316948
#include "game/update/moby25.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0316620 (0x328 bytes)
// inlined: FastAtan2 @0x3167bc
/* Moby 25 */

void UpdateMoby_25(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xc0;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar12;
  puVar6[0x1a] = in_LR;
  puVar6[0x17] = in_f31;
  puVar6[0x16] = unaff_r31;
  puVar6[0x15] = unaff_r30;
  MB_SphericalToVector(127.9,0.95,0.71,&(moby->pos).x);
  (moby->pos).x = (moby->pos).x + GameCamera.posX;
  (moby->pos).y = (moby->pos).y + GameCamera.posY;
  (moby->pos).z = (moby->pos).z + GameCamera.posZ;
  SetColorOfMoby(moby,0x7f,0,0);
  Camera_CreateReticule(moby);
  fVar11 = GameCamera.rot.radius;
  fVar5 = GameCamera.posZ;
  if (g_ReticuleActive == 1) {
    fVar3 = *(float *)(Reticule + 0x10) - GameCamera.posX;
    fVar4 = *(float *)(Reticule + 0x14) - GameCamera.posY;
    fVar1 = *(float *)(Reticule + 0x18);
    fVar7 = GameCamera.posY - *(float *)(Reticule + 0x14);
    fVar2 = GameCamera.posX - *(float *)(Reticule + 0x10);
    fVar8 = ABS(fVar3);
    fVar9 = ABS(fVar4);
    *(float *)(puVar6 + 0xe) = fVar3;
    fVar5 = fVar5 - fVar1;
    *(float *)((int)puVar6 + 0x74) = fVar4;
    *(float *)(puVar6 + 0xf) = fVar8 - fVar9;
    fVar1 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    dVar22 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar7 * fVar7);
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar3 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    if (0.0 < fVar3) {
      lVar18 = uVar12 - 0xb0;
      lVar16 = uVar12 - 0x34;
      lVar17 = uVar12 - 0x44;
      lVar20 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x11) = fVar3;
      *(float *)(puVar6 + 0x10) = fVar3;
      *(float *)((int)puVar6 + 0x84) = fVar3;
      *(float *)((int)puVar6 + 0x7c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar12 - 0x44;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar10 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar15 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8)
                + *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    dVar21 = (double)FastSubRots(fVar11,fVar1);
    if (((dVar22 < 480.0) && (dVar21 < 1.5707963705062866)) &&
       (iVar15 = CollLine(0x951500,Reticule + 0x10,0x84,Reticule,0),
       iVar15 == 0)) {
      g_ReticuleDraw = 0x3f800000;
    }
  }
  return;
}


