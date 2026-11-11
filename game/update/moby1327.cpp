// game/update/moby1327.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x24ab14-0x24bb4c
#include "game/update/moby1327.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x024ab14 (0x14 bytes)
void M1327_0024ab14(void)

{
  DAT_0078e61c = 0x10000;
  return;
}


// 0x024ab30 (0xd8 bytes)
/* Moby 1327 */

void UpdateMoby_1327(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)moby->pVar;
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    fVar2 = DAT_0078e644 * g_FrameTime + *pfVar1;
    *pfVar1 = fVar2;
    if (-1.0 <= fVar2) {
      if (1.0 < fVar2) {
        *pfVar1 = fVar2 + -1.0;
      }
    }
    else {
      *pfVar1 = fVar2 + 1.0;
    }
    if (DAT_0078e640 != 0) {
      RegisterFuncForMoby(&PTR_M1327_0024ac08_00709e58,moby);
    }
  }
  return;
}


// 0x024ac08 (0x21c bytes)
void M1327_0024ac08(void)

{
  undefined4 uVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar7;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  short *psVar15;
  ulonglong in_LR;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar6 - 0x140);
  *puVar3 = uVar6;
  puVar3[0x2a] = in_LR;
  iVar8 = DAT_0079b3fc + 0x28;
  puVar3[0x27] = unaff_r31;
  puVar3[0x26] = unaff_r30;
  puVar3[0x25] = unaff_r29;
  puVar3[0x24] = unaff_r28;
  puVar3[0x23] = unaff_r27;
  puVar3[0x22] = unaff_r26;
  puVar3[0x21] = unaff_r25;
  uVar7 = GetEffectTex(iVar8);
  puVar3[0x1d] = uVar7;
  uVar7 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x1e] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x1c] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_00fa2f04,DAT_0079b3f0,DAT_00fa2f08,DAT_0079b3f4,DAT_0079b3f8);
  puVar3[0x1f] = uVar7;
  uVar1 = DAT_0079b400;
  *(undefined4 *)((int)puVar3 + 0xbc) = DAT_0079b400;
  *(undefined4 *)(puVar3 + 0x17) = uVar1;
  *(undefined4 *)((int)puVar3 + 0xb4) = uVar1;
  iVar8 = 0;
  *(undefined4 *)(puVar3 + 0x16) = uVar1;
  psVar14 = &DAT_0078f0b0;
  psVar15 = &DAT_0078f0b2;
  do {
    lVar11 = uVar6 - 0xd0;
    lVar16 = 4;
    lVar13 = uVar6 - 0x140;
    psVar10 = psVar14;
    psVar9 = psVar15;
    do {
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      sVar2 = *psVar9;
      psVar9 = psVar9 + 2;
      iVar4 = (int)((longlong)sVar2 << 3);
      pfVar12 = (float *)lVar11;
      *pfVar12 = *(float *)(iVar5 + 0x78e650) * DAT_0079b404;
      pfVar12[1] = *(float *)(iVar5 + 0x78e654) * DAT_0079b404;
      pfVar12[2] = *(float *)(iVar5 + 0x78e658) * DAT_0079b404;
      pfVar12[3] = *(float *)(iVar5 + 0x78e65c);
      lVar11 = lVar11 + 0x10;
      uVar1 = *(undefined4 *)(&DAT_0078f8d4 + iVar4);
      *(undefined4 *)((int)lVar13 + 0xc0) = *(undefined4 *)(&DAT_0078f8d0 + iVar4);
      *(undefined4 *)((int)lVar13 + 0xc4) = uVar1;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FastDrawQuad(uVar6 - 0xd0,0,0,EffectTexHeaders,9);
    iVar8 = iVar8 + 1;
    psVar14 = psVar14 + 8;
    psVar15 = psVar15 + 8;
  } while (iVar8 < 0x82);
  return;
}


// 0x024ae24 (0x484 bytes)
void M1327_0024ae24(int param_1)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar12;
  undefined4 *puVar13;
  short *psVar14;
  short *psVar15;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  short *psVar16;
  ulonglong unaff_r25;
  short *psVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = unaff_r31;
  pfVar3 = *(float **)(param_1 + 0x78);
  iVar11 = DAT_0079b414 + 0x28;
  puVar4[0x28] = unaff_r30;
  puVar4[0x27] = unaff_r29;
  puVar4[0x26] = unaff_r28;
  puVar4[0x25] = unaff_r27;
  puVar4[0x24] = unaff_r26;
  puVar4[0x23] = unaff_r25;
  puVar4[0x22] = unaff_r24;
  puVar4[0x21] = unaff_r23;
  uVar9 = GetEffectTex(iVar11);
  puVar4[0x1d] = uVar9;
  uVar9 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x1e] = uVar9;
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x1c] = uVar9;
  uVar9 = idol_draw::PackCmd(DAT_00fa2f0c,DAT_0079b408,DAT_00fa2f10,DAT_0079b40c,DAT_0079b410);
  puVar4[0x1f] = uVar9;
  uVar7 = DAT_0079b418;
  iVar11 = 0;
  *(undefined4 *)((int)puVar4 + 0xbc) = DAT_0079b418;
  *(undefined4 *)(puVar4 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar4 + 0xb4) = uVar7;
  iVar18 = 0;
  psVar17 = &DAT_00793410;
  *(undefined4 *)(puVar4 + 0x16) = uVar7;
  psVar16 = &DAT_00793412;
  do {
    lVar19 = 4;
    lVar12 = uVar8 - 0xe0;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar6 = (int)((longlong)*psVar14 << 4);
      iVar5 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar6 + 0x792ce0);
      puVar13[1] = *(undefined4 *)(iVar6 + 0x792ce4);
      puVar13[2] = *(undefined4 *)(iVar6 + 0x792ce8);
      puVar13[3] = *(undefined4 *)(iVar6 + 0x792cec);
      fVar2 = *(float *)(&DAT_00793a54 + iVar5);
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar5);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar11 < 100);
  iVar11 = 0;
  psVar17 = &DAT_00796b80;
  psVar16 = &DAT_00796b82;
  do {
    lVar12 = uVar8 - 0xe0;
    lVar19 = 4;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar6 = (int)((longlong)*psVar14 << 4);
      iVar5 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar6 + 0x7963a0);
      puVar13[1] = *(undefined4 *)(iVar6 + 0x7963a4);
      puVar13[2] = *(undefined4 *)(iVar6 + 0x7963a8);
      puVar13[3] = *(undefined4 *)(iVar6 + 0x7963ac);
      fVar2 = *(float *)(&DAT_00793a54 + iVar5);
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar5);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar11 < 0x70);
  iVar11 = 0;
  psVar17 = &DAT_0079a430;
  psVar16 = &DAT_0079a432;
  do {
    lVar12 = uVar8 - 0xe0;
    lVar19 = 4;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar6 = (int)((longlong)*psVar14 << 4);
      iVar5 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar6 + 0x79a2b0);
      puVar13[1] = *(undefined4 *)(iVar6 + 0x79a2b4);
      puVar13[2] = *(undefined4 *)(iVar6 + 0x79a2b8);
      puVar13[3] = *(undefined4 *)(iVar6 + 0x79a2bc);
      fVar2 = *(float *)(&DAT_00793a54 + iVar5);
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar5);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar11 < 0xe);
  psVar17 = &DAT_0079acf0;
  psVar16 = &DAT_0079acf2;
  do {
    lVar12 = uVar8 - 0xe0;
    lVar19 = 4;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar5 = (int)((longlong)*psVar14 << 4);
      iVar11 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar5 + 0x79ab70);
      puVar13[1] = *(undefined4 *)(iVar5 + 0x79ab74);
      puVar13[2] = *(undefined4 *)(iVar5 + 0x79ab78);
      puVar13[3] = *(undefined4 *)(iVar5 + 0x79ab7c);
      lVar12 = lVar12 + 0x10;
      fVar2 = *(float *)(&DAT_00793a54 + iVar11);
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar11);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar18 = iVar18 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar18 < 0xe);
  return;
}


// 0x024b2e8 (0x3d0 bytes)
void M133_0024b2e8
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  GPiece<16> local_c0;
  GPiece<32> local_b0;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    iVar1 = MB_randInt(0x13);
    dVar6 = 120.0;
    dVar7 = 180.0;
    dVar5 = 0.5;
    dVar8 = 0.0;
    dVar4 = 0.10000000149011612;
    if (iVar1 == 0) {
      MB_randRot();
      MB_randRangeFloat((float)dVar8,(float)dVar4);
      uVar2 = MB_randRangeFloat((float)dVar8,(float)dVar5);
      uVar3 = MB_randRangeFloat((float)dVar5,1.0);
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      iVar1 = FastDoubleToInt();
      SpawnPart_52
                (uVar2,uVar3,local_c0,0x30002028,0x2020,param_4,param_5,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
    iVar1 = MB_randInt(4);
    if (iVar1 == 0) {
      MB_randRot();
      MB_randRangeFloat((float)dVar8,(float)dVar4);
      dVar4 = 1.75;
      uVar2 = MB_randRangeFloat((float)dVar8,1.75);
      uVar3 = MB_randRangeFloat((float)dVar4,2.25);
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      iVar1 = FastDoubleToInt();
      SpawnPart_52
                (uVar2,uVar3,local_b0,0x20002020,0x2030,param_4,param_5,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
  }
  return;
}


// 0x024b718 (0x434 bytes)
void M133_0024b718(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  longlong local_f0;
  
  iVar9 = 0;
  do {
    local_120 = *(float *)(param_1 + 0x10);
    local_11c = *(undefined4 *)(param_1 + 0x14);
    local_118 = *(float *)(param_1 + 0x18);
    local_114 = *(undefined4 *)(param_1 + 0x1c);
    MB_RandomizeVector(0.25,&local_120);
    dVar20 = 1.0;
    local_118 = local_118 + 1.0;
    dVar12 = (double)MB_randRot();
    dVar13 = (double)MB_randRangeFloat((float)dVar20,8.0);
    dVar14 = (double)MB_randRangeFloat(2.0,6.0);
    dVar21 = 0.0;
    dVar15 = (double)MB_randRangeFloat(0.0,(float)dVar20);
    fVar1 = (float)(dVar12 + 1.570796251296997);
    iVar10 = 0;
    dVar11 = (double)(float)(3.141592502593994 - dVar12);
    if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
      dVar11 = dVar12;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    dVar22 = (double)(float)(-3.141592502593994 - dVar12);
    if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
      dVar22 = dVar11;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar12 = (double)(float)(dVar22 * dVar22);
    fVar5 = fVar4 * fVar4;
    dVar11 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar22));
    local_104 = param_2[3];
    fVar1 = fVar5 * fVar5 * fVar4;
    dVar18 = (double)(float)(dVar12 * dVar11);
    dVar19 = (double)g_FrameTime;
    local_108 = (float)(dVar19 * dVar14 + (double)(float)((double)param_2[2] * dVar15));
    fVar3 = fVar5 * fVar1;
    local_10c = (float)(dVar19 * dVar13) *
                ((float)(dVar12 * dVar18) * 2.601887e-06 +
                (float)(dVar18 * -0.0001980741071747616 +
                       (double)(float)(dVar11 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar12 * dVar22) *
                                                      -0.16666656732559204 + dVar22)))) +
                (float)((double)param_2[1] * dVar15);
    local_110 = (float)(dVar19 * dVar13) *
                (fVar5 * fVar3 * 2.601887e-06 +
                fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
                + (float)((double)*param_2 * dVar15);
    dVar11 = 30.5;
    local_f8 = -(DAT_0071f418 * 20.0 * (float)(longlong)(animationSpeed * 30.5) - local_108);
    dVar12 = 0.5;
    dVar13 = 1.5;
    dVar14 = 0.125;
    dVar15 = 0.06499999761581421;
    dVar22 = 0.20000000298023224;
    dVar18 = 10.5;
    dVar19 = 5.0;
    dVar23 = 25.0;
    local_100 = local_110;
    local_fc = local_10c;
    local_f4 = local_104;
    do {
      dVar16 = (double)MB_randRangeFloat((float)dVar12,(float)dVar13);
      local_104 = (float)(dVar16 * dVar14);
      local_f4 = (float)(dVar16 * dVar15);
      MB_RandomizeVector((float)dVar22,&local_120);
      MB_RandomizeVector((float)((double)g_FrameTime * dVar12),&local_100);
      MB_randRangeFloat((float)dVar21,(float)dVar20);
      uVar6 = FastLerpColor(0xffffffff8000eeee,0xffffffff8000ff90);
      MB_randRangeFloat((float)dVar21,(float)dVar20);
      uVar7 = FastLerpColor(0xffee,0xffee);
      dVar16 = (double)animationSpeed * dVar18;
      iVar2 = (int)((double)animationSpeed * dVar11);
      local_f0 = (longlong)iVar2;
      dVar17 = (double)MB_randRangeFloat((float)dVar19,(float)dVar23);
      uVar8 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      SpawnPart_2(&local_120,&local_110,&local_100,uVar6,uVar7,(int)dVar16,iVar2,uVar8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 10);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x14);
  return;
}


