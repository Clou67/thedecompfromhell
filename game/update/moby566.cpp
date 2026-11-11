// game/update/moby566.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3bb4a8-0x3bbbf4
#include "game/update/moby566.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x03bb4a8 (0x4b8 bytes)
// inlined: FastAtan2 @0x3bb674, FastAtan2 @0x3bb814
MobyInstance *
FUN_003bb4a8(double param_1,double param_2,f32 *param_3,float *param_4,float *param_5,
            undefined8 param_6,undefined8 param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMoby;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar15;
  longlong lVar14;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x110;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1b] = unaff_r27;
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1e] = unaff_r30;
  puVar6[0x1a] = unaff_r26;
  puVar6[0x19] = unaff_r25;
  pMoby = CreateMoby(ROCKET_0234);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    SetColorOfMoby(pMoby,0xc0,0xc0,0xc0);
    pfVar15 = (float *)pMoby->pVar;
    pMoby->scale = pMoby->scale * DAT_00845bd0;
    (pMoby->pos).x = *param_3;
    (pMoby->pos).y = param_3[1];
    (pMoby->pos).z = param_3[2];
    (pMoby->pos).w = param_3[3];
    *pfVar15 = *param_4;
    pfVar15[1] = param_4[1];
    pfVar15[2] = param_4[2];
    pfVar15[3] = param_4[3];
    pfVar15[4] = *param_5;
    pfVar15[5] = param_5[1];
    pfVar15[6] = param_5[2];
    fVar1 = param_5[3];
    pfVar15[0xb] = 0.0;
    pfVar15[7] = fVar1;
    pfVar15[0xd] = param_8;
    pfVar15[0xc] = (float)((int)param_8 >> 1);
    pfVar15[9] = (float)param_1;
    pfVar15[10] = (float)param_2;
    pfVar15[0xe] = param_9;
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar2 = ABS(*param_4);
    fVar3 = ABS(param_4[1]);
    *(float *)(puVar6 + 0xf) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar7 = fVar1;
    if (0.0 < fVar4) {
      lVar11 = uVar10 - 0x100;
      lVar16 = uVar10 - 100;
      lVar14 = uVar10 - 0x74;
      lVar17 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x15) = fVar4;
      *(float *)(puVar6 + 0x14) = fVar4;
      *(float *)((int)puVar6 + 0xa4) = fVar4;
      *(float *)((int)puVar6 + 0x9c) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar3;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar4;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar4 * fVar4;
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x74;
      pfVar15 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar14 = lVar16;
      do {
        fVar4 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar14 = 2;
      lVar11 = lVar12;
      fVar4 = fVar1;
      do {
        iVar8 = (int)lVar11;
        iVar9 = (int)lVar16;
        lVar11 = lVar11 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar8 + 0x9c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar7 = (fVar4 + 0.7853982) * fVar5 + fVar2;
    }
    (pMoby->rotation).z = fVar7;
    fVar4 = param_4[2];
    fVar5 = ABS(param_4[2]);
    fVar3 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1]);
    fVar2 = ABS(fVar3);
    *(float *)(puVar6 + 0xe) = fVar3;
    *(float *)((int)puVar6 + 0x74) = fVar2 - fVar5;
    uVar13 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)((int)puVar6 + 0x74) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    if (*(float *)((int)puVar6 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar11 = uVar10 - 0x100;
      lVar16 = uVar10 - 0x84;
      lVar14 = uVar10 - 0x94;
      lVar17 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x11) = fVar4;
      *(float *)(puVar6 + 0x10) = fVar4;
      *(float *)((int)puVar6 + 0x84) = fVar4;
      *(float *)((int)puVar6 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar4;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar4 * fVar4;
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x94;
      pfVar15 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar14 = lVar16;
      do {
        fVar4 = *pfVar15;
        fVar5 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
    }
    (pMoby->rotation).y = -fVar1;
    PlayMobySound(0,0,pMoby);
  }
  return pMoby;
}


// 0x03bb988 (0x250 bytes)
void M566_003bb988(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar14 = uVar6 - 0x120;
  puVar4 = (ulonglong *)lVar14;
  *puVar4 = uVar6;
  puVar4[0x26] = in_LR;
  puVar4[0x22] = unaff_r30;
  iVar3 = *(int *)(param_1 + 0x78);
  puVar4[0x23] = unaff_r31;
  puVar4[0x20] = (longlong)(int)(*(uint *)(iVar3 + 0x2c) & 0xf);
  dVar18 = (double)FastAddRots((float)(longlong)puVar4[0x20] * 0.0625 * 6.28318);
  dVar20 = (double)(float)(3.141592502593994 - dVar18);
  if (dVar18 - (double)(float)(3.141592502593994 - dVar18) < 0.0) {
    dVar20 = dVar18;
  }
  dVar19 = (double)(float)(-3.141592502593994 - dVar18);
  if ((double)(float)(-3.141592502593994 - dVar18) - dVar20 < 0.0) {
    dVar19 = dVar20;
  }
  dVar20 = (double)(float)(dVar19 * dVar19);
  dVar21 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
  dVar18 = (double)(float)(dVar20 * dVar21);
  uVar8 = FastLerpColor
                    ((double)(((float)(dVar20 * dVar18) * 2.601887e-06 +
                               (float)(dVar18 * -0.0001980741071747616 +
                                      (double)(float)(dVar21 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar20 * dVar19
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar19))
                                      ) + 1.0) * 0.5),DAT_00845c48,DAT_00845c4c);
  uVar7 = GetEffectTex(0xd);
  puVar4[0x1d] = uVar7;
  uVar7 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x1e] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x1c] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_010c9f4c,DAT_00845c40,DAT_010c9f50,DAT_00845c44,0x80);
  puVar4[0x1f] = uVar7;
  lVar10 = uVar6 - 0xb0;
  pfVar9 = (float *)&DAT_00845be0;
  puVar13 = &DAT_00845c20;
  puVar12 = &DAT_00845c24;
  lVar17 = 4;
  lVar15 = lVar14;
  lVar16 = lVar14;
  do {
    pfVar11 = (float *)lVar10;
    *pfVar11 = *pfVar9 + *(float *)(iVar3 + 0x10);
    pfVar11[1] = pfVar9[1] + *(float *)(iVar3 + 0x14);
    pfVar11[2] = pfVar9[2] + *(float *)(iVar3 + 0x18);
    pfVar5 = pfVar9 + 3;
    pfVar9 = pfVar9 + 4;
    pfVar11[3] = *pfVar5;
    uVar1 = *puVar13;
    lVar10 = lVar10 + 0x10;
    *(undefined4 *)((int)lVar16 + 0x7c) = 0x3f800000;
    puVar13 = puVar13 + 2;
    *(undefined4 *)((int)lVar15 + 0xb0) = uVar8;
    lVar16 = lVar16 + 0x10;
    uVar2 = *puVar12;
    lVar15 = lVar15 + 4;
    *(undefined4 *)((int)lVar14 + 0xc0) = uVar1;
    puVar12 = puVar12 + 2;
    *(undefined4 *)((int)lVar14 + 0xc4) = uVar2;
    lVar14 = lVar14 + 8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  FastDrawQuad(uVar6 - 0xb0,0,0,EffectTexHeaders,9);
  return;
}


// 0x03bbbd8 (0x14 bytes)
void M566_003bbbd8(void)

{
  DAT_00845c9c = 0x10000;
  return;
}


// 0x03bbbf0 (0x4 bytes)
/* Moby 566 */

MobyInstance * UpdateMoby_566(MobyInstance *moby)

{
  return moby;
}


