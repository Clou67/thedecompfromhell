// game/update/moby1403.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x26d8d8-0x26e290
#include "game/update/moby1403.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update/moby1402.h"
#include "idol/fastfunc.h"

// 0x026d8d8 (0x228 bytes)
// strings: 0079de28: '@PPP' (raw)

void M1403_0026d8d8(int param_1)

{
  float *pfVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar15;
  ulonglong unaff_r31;
  short *psVar16;
  ulonglong in_LR;
  longlong lVar17;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar7 - 0x180);
  *puVar2 = uVar7;
  puVar2[0x32] = in_LR;
  puVar2[0x2f] = unaff_r31;
  puVar2[0x2e] = unaff_r30;
  uVar6 = DAT_0079de24;
  pfVar1 = *(float **)(param_1 + 0x78);
  puVar2[0x2d] = unaff_r29;
  puVar2[0x2c] = unaff_r28;
  puVar2[0x2b] = unaff_r27;
  puVar2[0x2a] = unaff_r26;
  puVar2[0x29] = unaff_r25;
  uVar8 = GetEffectTex(uVar6);
  puVar2[0x25] = uVar8;
  uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar8;
  uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar2[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fa8a4c,DAT_0079de18,DAT_00fa8a50,DAT_0079de1c,DAT_0079de20);
  puVar2[0x27] = uVar8;
  FastMtx4Identity((float *)(puVar2 + 0xe));
  iVar14 = 0;
  psVar15 = &DAT_0079cf80;
  *(float *)(puVar2 + 0x15) = *(float *)(param_1 + 0x18) - *pfVar1;
  uVar6 = DAT_0079de28;
  psVar16 = &DAT_0079cf82;
  *(undefined4 *)((int)puVar2 + 0xfc) = DAT_0079de28;
  *(undefined4 *)(puVar2 + 0x1f) = uVar6;
  *(undefined4 *)((int)puVar2 + 0xf4) = uVar6;
  *(undefined4 *)(puVar2 + 0x1e) = uVar6;
  do {
    lVar17 = 4;
    lVar11 = uVar7 - 0xd0;
    lVar13 = uVar7 - 0x180;
    psVar10 = psVar15;
    psVar9 = psVar16;
    do {
      iVar4 = (int)((longlong)*psVar9 << 3);
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      psVar9 = psVar9 + 2;
      puVar12 = (undefined4 *)lVar11;
      *puVar12 = *(undefined4 *)(iVar5 + 0x79cd30);
      puVar12[1] = *(undefined4 *)(iVar5 + 0x79cd34);
      puVar12[2] = *(undefined4 *)(iVar5 + 0x79cd38);
      puVar12[3] = *(undefined4 *)(iVar5 + 0x79cd3c);
      lVar11 = lVar11 + 0x10;
      fVar3 = *(float *)(iVar4 + 0x79d110) + DAT_00fa8a48;
      *(undefined4 *)((int)lVar13 + 0x104) = *(undefined4 *)(iVar4 + 0x79d114);
      *(float *)((int)lVar13 + 0x100) = fVar3;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    FastDrawQuad(uVar7 - 0xd0,uVar7 - 0x110,0,EffectTexHeaders,9);
    iVar14 = iVar14 + 1;
    psVar15 = psVar15 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar14 < 0x19);
  return;
}


// 0x026db00 (0x228 bytes)
// strings: 0079de28: '@PPP' (raw)

void M1403_0026db00(int param_1)

{
  float *pfVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar15;
  ulonglong unaff_r31;
  short *psVar16;
  ulonglong in_LR;
  longlong lVar17;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar7 - 0x180);
  *puVar2 = uVar7;
  puVar2[0x32] = in_LR;
  puVar2[0x2f] = unaff_r31;
  puVar2[0x2e] = unaff_r30;
  uVar6 = DAT_0079de24;
  pfVar1 = *(float **)(param_1 + 0x78);
  puVar2[0x2d] = unaff_r29;
  puVar2[0x2c] = unaff_r28;
  puVar2[0x2b] = unaff_r27;
  puVar2[0x2a] = unaff_r26;
  puVar2[0x29] = unaff_r25;
  uVar8 = GetEffectTex(uVar6);
  puVar2[0x25] = uVar8;
  uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar8;
  uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar2[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fa8a4c,DAT_0079de18,DAT_00fa8a50,DAT_0079de1c,DAT_0079de20);
  puVar2[0x27] = uVar8;
  FastMtx4Identity((float *)(puVar2 + 0xe));
  iVar14 = 0;
  psVar15 = &DAT_0079d590;
  *(float *)(puVar2 + 0x15) = *(float *)(param_1 + 0x18) - *pfVar1;
  uVar6 = DAT_0079de28;
  psVar16 = &DAT_0079d592;
  *(undefined4 *)((int)puVar2 + 0xfc) = DAT_0079de28;
  *(undefined4 *)(puVar2 + 0x1f) = uVar6;
  *(undefined4 *)((int)puVar2 + 0xf4) = uVar6;
  *(undefined4 *)(puVar2 + 0x1e) = uVar6;
  do {
    lVar17 = 4;
    lVar11 = uVar7 - 0xd0;
    lVar13 = uVar7 - 0x180;
    psVar10 = psVar15;
    psVar9 = psVar16;
    do {
      iVar4 = (int)((longlong)*psVar9 << 3);
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      psVar9 = psVar9 + 2;
      puVar12 = (undefined4 *)lVar11;
      *puVar12 = *(undefined4 *)(iVar5 + 0x79d240);
      puVar12[1] = *(undefined4 *)(iVar5 + 0x79d244);
      puVar12[2] = *(undefined4 *)(iVar5 + 0x79d248);
      puVar12[3] = *(undefined4 *)(iVar5 + 0x79d24c);
      lVar11 = lVar11 + 0x10;
      fVar3 = *(float *)(iVar4 + 0x79d7f0) + DAT_00fa8a48;
      *(undefined4 *)((int)lVar13 + 0x104) = *(undefined4 *)(iVar4 + 0x79d7f4);
      *(float *)((int)lVar13 + 0x100) = fVar3;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    FastDrawQuad(uVar7 - 0xd0,uVar7 - 0x110,0,EffectTexHeaders,9);
    iVar14 = iVar14 + 1;
    psVar15 = psVar15 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar14 < 0x26);
  return;
}


// 0x026dd28 (0x228 bytes)
// strings: 0079de28: '@PPP' (raw)

void M1403_0026dd28(int param_1)

{
  float *pfVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar15;
  ulonglong unaff_r31;
  short *psVar16;
  ulonglong in_LR;
  longlong lVar17;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar7 - 0x180);
  *puVar2 = uVar7;
  puVar2[0x32] = in_LR;
  puVar2[0x2f] = unaff_r31;
  puVar2[0x2e] = unaff_r30;
  uVar6 = DAT_0079de24;
  pfVar1 = *(float **)(param_1 + 0x78);
  puVar2[0x2d] = unaff_r29;
  puVar2[0x2c] = unaff_r28;
  puVar2[0x2b] = unaff_r27;
  puVar2[0x2a] = unaff_r26;
  puVar2[0x29] = unaff_r25;
  uVar8 = GetEffectTex(uVar6);
  puVar2[0x25] = uVar8;
  uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar8;
  uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar2[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fa8a4c,DAT_0079de18,DAT_00fa8a50,DAT_0079de1c,DAT_0079de20);
  puVar2[0x27] = uVar8;
  FastMtx4Identity((float *)(puVar2 + 0xe));
  iVar14 = 0;
  psVar15 = &DAT_0079dbb0;
  *(float *)(puVar2 + 0x15) = *(float *)(param_1 + 0x18) - *pfVar1;
  uVar6 = DAT_0079de28;
  psVar16 = &DAT_0079dbb2;
  *(undefined4 *)((int)puVar2 + 0xfc) = DAT_0079de28;
  *(undefined4 *)(puVar2 + 0x1f) = uVar6;
  *(undefined4 *)((int)puVar2 + 0xf4) = uVar6;
  *(undefined4 *)(puVar2 + 0x1e) = uVar6;
  do {
    lVar17 = 4;
    lVar11 = uVar7 - 0xd0;
    lVar13 = uVar7 - 0x180;
    psVar10 = psVar15;
    psVar9 = psVar16;
    do {
      iVar4 = (int)((longlong)*psVar9 << 3);
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      psVar9 = psVar9 + 2;
      puVar12 = (undefined4 *)lVar11;
      *puVar12 = *(undefined4 *)(iVar5 + 0x79d9a0);
      puVar12[1] = *(undefined4 *)(iVar5 + 0x79d9a4);
      puVar12[2] = *(undefined4 *)(iVar5 + 0x79d9a8);
      puVar12[3] = *(undefined4 *)(iVar5 + 0x79d9ac);
      lVar11 = lVar11 + 0x10;
      fVar3 = *(float *)(&DAT_0079dd10 + iVar4) + DAT_00fa8a48;
      *(undefined4 *)((int)lVar13 + 0x104) = *(undefined4 *)(&DAT_0079dd14 + iVar4);
      *(float *)((int)lVar13 + 0x100) = fVar3;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    FastDrawQuad(uVar7 - 0xd0,uVar7 - 0x110,0,EffectTexHeaders,9);
    iVar14 = iVar14 + 1;
    psVar15 = psVar15 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar14 < 0x16);
  return;
}


// 0x026df50 (0x14 bytes)
void M1403_0026df50(void)

{
  DAT_0079de78 = 0x10000;
  return;
}


// 0x026df78 (0x318 bytes)
/* Moby 1403 */

void UpdateMoby_1403(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  int *piVar3;
  Spline *pSVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar10;
  float *pfVar11;
  MobyInstance *pMVar12;
  longlong lVar9;
  int iVar13;
  Spline *pSVar14;
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  uint local_20;
  int local_1c;
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == '\0') {
    moby->updateDistance = -1;
    if (piVar3[1] != -1) {
      iVar13 = 0;
      pSVar4 = Splines[piVar3[1]];
      iVar10 = pSVar4->cnt;
      pSVar14 = pSVar4;
      if (0 < iVar10) {
        do {
          iVar13 = iVar13 + 1;
          pfVar11 = (float *)((int)pSVar4 + ((iVar13 - (iVar13 / iVar10) * iVar10) * 4 + 4) * 4);
          fVar6 = pSVar14->points[0].y - pfVar11[1];
          fVar7 = pSVar14->points[0].x - *pfVar11;
          fVar8 = pSVar14->points[0].z - pfVar11[2];
          pSVar14->points[0].w = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
          iVar10 = pSVar4->cnt;
          pSVar14 = (Spline *)pSVar14->points;
        } while (iVar13 < iVar10);
      }
    }
    piVar3[2] = 0;
    piVar3[3] = 0;
    moby->state = '\x01';
    piVar3[4] = 0;
  }
  if (*piVar3 == -1) {
    return;
  }
  pMVar12 = g_MobyInstance + *piVar3;
  if (pMVar12 == (MobyInstance *)0x0) {
LAB_0026e0a0:
    DeleteMoby(moby);
    return;
  }
  bVar1 = pMVar12->state;
  if ((bVar1 == 0xfe) || (bVar1 == 0xfd)) goto LAB_0026e0a0;
  if (bVar1 < 7) {
    (moby->pos).x = (pMVar12->pos).x;
    (moby->pos).y = (pMVar12->pos).y;
    (moby->pos).z = (pMVar12->pos).z;
    (moby->pos).w = (pMVar12->pos).w;
    return;
  }
  piVar3[4] = piVar3[4] + 1;
  if (piVar3[1] == -1) {
    return;
  }
  uVar2 = moby->state;
  pSVar4 = Splines[piVar3[1]];
  if (uVar2 == '\x01') {
    MB_PathFollowToPos
              (0x4059000000000000,0x3ff0000000000000,0,pSVar4,&pMVar12->pos,&local_30,&local_1c,
               &local_20,&DAT_0026df68,0);
    if (((local_1c <= piVar3[2]) &&
        (uVar5 = piVar3[3] >> 0x1f,
        (int)(FLOAT_ORDER(local_20)) <=
        (int)((uVar5 >> 1 ^ piVar3[3]) - uVar5))) && (0x1d < piVar3[4])) {
      moby->state = '\x02';
      goto LAB_0026e1b4;
    }
    piVar3[3] = local_20;
    piVar3[2] = local_1c;
    (moby->pos).x = local_30;
    (moby->pos).y = local_2c;
    (moby->pos).z = local_28;
    (moby->pos).w = local_24;
    uVar2 = moby->state;
  }
  if (uVar2 != '\x02') {
    return;
  }
LAB_0026e1b4:
  if (pSVar4->cnt + -1 <= piVar3[2]) {
    moby->state = '\x03';
    return;
  }
  lVar9 = GetPathPnt(DAT_0071f408 * 0.25,moby,pSVar4,(Vec4 *)&moby->pos,piVar3[2],1);
  iVar10 = (int)(lVar9 << 4);
  piVar3[2] = (int)lVar9;
  fVar6 = (moby->pos).y - *(float *)((int)&pSVar4->points[0].y + iVar10);
  fVar7 = (moby->pos).x - *(float *)((int)&pSVar4->points[0].x + iVar10);
  fVar8 = (moby->pos).z - *(float *)((int)&pSVar4->points[0].z + iVar10);
  piVar3[3] = (int)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  return;
}


