// game/partproc.cpp -- the particle pool: allocation, the per-frame update and drawing
// STATUS: IN PROGRESS
// MERGE (9 of 11 functions cleaned; the rest are generated)
// 11 functions, 0x11e448-0x11fb94
//
// Particles live in PartInstances[4096] (0x40 bytes each); g_PartUsed has a bit per slot.
// PartIndexNext is the lowest slot that may be free, PartIndexTop the highest one in use, so
// allocation and the update loop only look at that range. In Deadlocked this file is assembly
// (partproc.s); RaC1's PS3 build has it as C.
#include <math.h>
#include <stdio.h>
#include "game/partproc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hud.h"
#include "game/main.h"
#include "game/mesh.h"
#include "game/mission.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"

#define MAX_PARTS      4096
#define PART_DEAD      0x80             /* PartInstance.type: free slot */
#define PART_FADE_IN   8                /* frames a particle takes to fade out at the end of its life */

/* PartInstance.update[] as used by class 22 (a coloured, growing, falling puff) */
struct Part22 {
    Vec3 vel;                           /* 0x20 */
    float gravity;                      /* 0x2c  added to vel.z */
    u8 startColor[4];                   /* 0x30  RGBA at the start of its life */
    u8 endColor[4];                     /* 0x34  ... and at the end */
    short life;                         /* 0x38  frames */
    short _pad;
    float growth;                       /* 0x3c  added to scale */
};

static inline bool PartAlive(PartInstance *part)
{
    return (s8)part->type >= 0;
}

/* from the view: its x, y and z columns, the last two normalized, and its position */
static inline void SetPartView(void)
{
    float *view = (float *)(DAT_00902e9c + 0xa0);      /* 4x4 matrix, rows */
    float *pos = (float *)(DAT_00902e9c + 0x20);

    g_PartView.right.x = view[0];
    g_PartView.right.y = view[4];
    g_PartView.right.z = view[8];
    g_PartView.right.w = 0.0f;

    /* the binary includes the fourth row in the length (vrsqrtefp + one Newton step) */
    float upLen2 = view[1] * view[1] + view[5] * view[5] + view[9] * view[9] + view[13] * view[13];
    float upScale = 1.0f / sqrtf(upLen2);
    g_PartView.up.x = view[1] * upScale;
    g_PartView.up.y = view[5] * upScale;
    g_PartView.up.z = view[9] * upScale;
    g_PartView.up.w = 0.0f;

    float fwdLen2 = view[2] * view[2] + view[6] * view[6] + view[10] * view[10] + view[14] * view[14];
    float fwdScale = 1.0f / sqrtf(fwdLen2);
    g_PartView.fwd.x = view[2] * fwdScale;
    g_PartView.fwd.y = view[6] * fwdScale;
    g_PartView.fwd.z = view[10] * fwdScale;
    g_PartView.fwd.w = 0.0f;

    g_PartView.camPos.x = pos[0];
    g_PartView.camPos.y = pos[1];
    g_PartView.camPos.z = pos[2];
    g_PartView.camPos.w = 0.0f;
}

static inline void UpdateAllParts(void)
{
    for (int i = 0; i <= PartIndexTop; i++) {
        PartInstance *part = &PartInstances[i];

        if (PartAlive(part))
            PartUpdates[(u8)part->iClass](part);
    }
}

// 0x011e448 (0x14 bytes)
void SECTION_HEADER_PARTPROC(void)
{
    DAT_00729624 = 0x10000;
}


// 0x011e45c (0x11c bytes)
/* R1+R2+L2 held, L1 pressed: one update with the profile counters on, then print them */
void UpdatePartsDebug(void)
{
    if ((g_Pad.downButtons & (R1 | R2 | L2)) != (R1 | R2 | L2) || !(g_Pad.buttonsPressedThisFrame & L1)) {
        UpdateParts();
        return;
    }

    printf("\n");
    printf("*** frame %d ***\n", g_MainLoopFrames);
    printf("\n");
    *g_pDebugCounterMode = 0x81;
    UpdateParts_NotUsed();

    for (int i = 0; i < 128; i++) {
        u32 count = g_PartProfile[i].count;

        if (count != 0)
            printf("class: %d\tcount: %d\tcycles: %d\n", i, count, (int)(g_PartProfile[i].cycles << 5) / (int)count);
    }
}


// 0x011e580 (0x148 bytes)
PartInstance *CreatePartEx(int iClass, int unused)
{
    int index = PartIndexNext;

    if (index >= MAX_PARTS)
        return 0;

    PartIndexNext = index + 1;
    PartActiveCnt++;
    g_PartUsed[index >> 3] |= 1 << (index & 7);

    /* below the top: find the next free slot for PartIndexNext */
    if (PartIndexNext <= PartIndexTop) {
        PartIndexNext &= ~7;
        int byteIndex = PartIndexNext >> 3;

        while (PartIndexNext < MAX_PARTS) {
            bool found = false;

            for (int bit = 1; bit != 0x100; bit <<= 1) {
                if (!(bit & g_PartUsed[byteIndex])) {
                    found = true;
                    break;
                }
                PartIndexNext++;
            }
            if (found)
                break;

            byteIndex++;
        }
    }

    if (PartIndexNext - 1 > PartIndexTop)
        PartIndexTop = PartIndexNext - 1;

    PartInstance *part = &PartInstances[index];
    FastMemSetZero(part, sizeof(PartInstance));
    part->iClass = iClass;

    return part;
}


// 0x011e6c8 (0x24 bytes)
PartInstance *CreatePart(int iClass)
{
    return CreatePartEx(iClass, 0);
}


// 0x011e6ec (0x104 bytes)
void DeletePart(PartInstance *part)
{
    int index = part - PartInstances;

    PartActiveCnt--;
    g_PartUsed[index >> 3] &= ~(1 << (index & 7));

    /* it was the top one: move the top down to the next slot in use */
    if (PartIndexTop == index) {
        PartIndexTop = index - 1;

        int byteIndex = PartIndexTop >> 3;
        int bit = 1 << (PartIndexTop & 7);
        while (PartIndexTop >= 0) {
            u8 used = g_PartUsed[byteIndex];
            bool found = false;

            for (; bit != 0; bit >>= 1) {
                if (bit & used) {
                    found = true;
                    break;
                }
                PartIndexTop--;
            }
            if (found)
                break;

            byteIndex--;
            bit = 0x80;
        }
    }

    part->type = PART_DEAD;

    if (index < PartIndexNext)
        PartIndexNext = index;
}


// 0x011e7f0 (0x64 bytes)
/* particles in use, counting whole bytes of g_PartUsed below PartIndexTop */
int CountActiveParts(void)
{
    int count = 0;

    for (int i = 0; i < PartIndexTop >> 3; i++)
        count += g_NibbleBitCount[g_PartUsed[i] & 0xf] + g_NibbleBitCount[g_PartUsed[i] >> 4];

    return count;
}


// 0x011e8a0 (0x270 bytes)
void UpdateParts(void)
{
    SetPartView();
    UpdateAllParts();
}


// 0x011eb10 (0xb4 bytes)
void UpdateParts_NotUsed(void)
{
    UpdateAllParts();
}


// 0x011ebc4 (0x2f4 bytes)
void ____DrawParts_DepthPass(longlong param_1,int *param_2)

{
  bool bVar1;
  RsxCmd *pRVar2;
  int iVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  ulonglong uVar6;
  RsxCmd RVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar3 = DAT_00a52b80;
  pRVar5 = DL_Pass;
  iVar12 = *param_2;
  bVar1 = DAT_00a52b80 != 0;
  *param_2 = iVar12 + (int)(param_1 << 5) * 3;
  if (bVar1) {
    idol_draw::DrawDepth(pRVar5,(longlong)iVar3);
  }
  pRVar2 = DAT_00a52b84;
  *pRVar5->command = NV4097_SET_TEXTURE_OFFSET_x7;
  pRVar5->command[1] = *pRVar2;
  pRVar5->command[2] = pRVar2[1];
  pRVar5->command[3] = 0x10303;
  pRVar5->command[4] = pRVar2[3];
  pRVar5->command[5] = pRVar2[4];
  pRVar5->command[6] = pRVar2[5];
  pRVar5->command[7] = pRVar2[6];
  pRVar5->command[8] = (RsxCmd)&DAT_00041840;
  pRVar5->command[9] = pRVar2[7];
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 10;
  iVar3 = *(int *)(g_viewMtxPtr + 0x4a8);
  pRVar2[10] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar8 = iVar12 - iVar3;
  pRVar5->command[1] = RVar8 | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x41684;
  pRVar5->command[1] = RVar8 + 0xc | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x4168c;
  uVar9 = param_1 * 4 - 0x100;
  uVar10 = (uVar9 & (longlong)((int)uVar9 >> 0x1f)) + 0x100;
  pRVar5->command[1] = RVar8 + 0x14 | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x400c1714;
  uVar6 = param_1 * 4 - uVar10;
  pRVar5->command[1] = 0;
  uVar6 = uVar6 & ~(longlong)((int)uVar6 >> 0x1f);
  pRVar5->command[2] = 0;
  uVar11 = uVar6 - (uVar6 & 0xffffff00);
  iVar12 = (int)uVar11;
  uVar9 = (uVar6 << 0x20) >> 0x28;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 8;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 7;
  pRVar2[6] = (((uint)uVar6 >> 8) + ((iVar12 != 0)) +
              (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  uVar7 = 0;
  if ((int)uVar10 != 0) {
    pRVar2 = pRVar5->command;
    pRVar5->command = pRVar2 + 1;
    *pRVar2 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar7 = uVar10;
  }
  RVar8 = (RsxCmd)uVar7;
  if ((uint)uVar6 >> 8 != 0) {
    do {
      pRVar2 = pRVar5->command;
      RVar4 = (RsxCmd)uVar7;
      uVar9 = uVar9 - 1;
      uVar7 = uVar7 + 0x100;
      RVar8 = (RsxCmd)uVar7;
      pRVar5->command = pRVar2 + 1;
      *pRVar2 = RVar4 | 0xff000000;
    } while (0 < (int)uVar9);
  }
  if (iVar12 != 0) {
    pRVar2 = pRVar5->command;
    pRVar5->command = pRVar2 + 1;
    *pRVar2 = RVar8 | (int)((uVar11 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar5->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}


// 0x011ef18 (0x9f0 bytes)
void DrawParts(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  RsxCmd *pRVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RenderingStep *pRVar15;
  undefined4 uVar16;
  void *pvVar17;
  float *pfVar19;
  RsxCmd *pRVar20;
  undefined8 uVar18;
  RsxCmd *pRVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  double extraout_f1;
  double dVar31;
  double extraout_f1_00;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  RsxCmd local_f0 [16];
  GPiece<24> local_b0;
  
  pRVar15 = DL_Pass;
  pfVar19 = (float *)idol::AllocateMemAlign(FrameHeap,(PartIndexTop * 4 + 4) * 0x18,0x10);
  uVar16 = g_viewMtxPtr;
  idol_draw::BindVertexProgram(g_viewMtxPtr,pRVar15,5);
  idol_draw::BindFragmentProgram(uVar16,pRVar15,6);
  *pRVar15->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar15->command[1] = 0x1832;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  lVar30 = 8;
  pRVar21[2] = 0x41744;
  pRVar15->command[1] = 0x1822;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x4174c;
  pRVar20 = local_f0;
  pRVar15->command[1] = 0x1844;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x441efc;
  pRVar15->command[1] = 4;
  pRVar21 = pRVar15->command + 2;
  pRVar15->command = pRVar21;
  do {
    *pRVar21 = *pRVar20;
    pRVar21 = pRVar15->command;
    pRVar15->command = pRVar21 + 1;
    pRVar8 = pRVar20 + 1;
    pRVar20 = pRVar20 + 2;
    pRVar21[1] = *pRVar8;
    pRVar21 = pRVar15->command + 1;
    pRVar15->command = pRVar21;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  iVar29 = 0;
  if (-1 < PartIndexTop) {
    iVar25 = 0;
    pfVar26 = pfVar19;
    do {
      pvVar17 = PartInstances;
      iVar27 = EffectTexHeaders;
      bVar6 = *(byte *)((int)PartInstances + iVar25 + 1);
      if (-1 < (char)bVar6) {
        if ((bVar6 & 3) < 2) {
          iVar27 = 0;
          pfVar22 = (float *)&g_MissionState[0];
          dVar49 = (double)*(float *)((int)PartInstances + iVar25 + 0x10);
          dVar48 = (double)*(float *)((int)PartInstances + iVar25 + 0x14);
          dVar50 = (double)(*(float *)((int)PartInstances + iVar25 + 0xc) * 4.7619046e-06);
          dVar47 = (double)*(float *)((int)PartInstances + iVar25 + 0x18);
          dVar42 = 0.0;
          do {
            if ((float)((double)(float)((double)pfVar22[1] * dVar48 +
                                       (double)(float)((double)pfVar22[2] * dVar47 +
                                                      (double)(float)((double)*pfVar22 * dVar49 +
                                                                     (double)pfVar22[3]))) + dVar50)
                < 0.0) goto LAB_0011f80c;
            iVar27 = iVar27 + 1;
            pfVar22 = pfVar22 + 4;
          } while (iVar27 < 6);
          if ((PTR_DAT_008fa54c.piece<0,1>() == '\0') && (0.5 < dVar50)) {
            dVar44 = dVar50 * 0.6000000238418579;
            dVar50 = (double)(float)dVar44;
            if ((double)(float)dVar44 - 0.5 < 0.0) {
              dVar50 = 0.5;
            }
            *(float *)((int)PartInstances + iVar25 + 0xc) = (float)(dVar50 * 210000.0);
          }
          iVar27 = EffectTexHeaders;
          bVar6 = *(byte *)((int)pvVar17 + iVar25 + 3);
          lVar30 = GetEffectTexAddr(*(undefined1 *)((int)pvVar17 + iVar25 + 2));
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 4);
          fVar23 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x17] = fVar23;
          pfVar19[0x11] = fVar23;
          pfVar19[0xb] = fVar23;
          pfVar19[5] = fVar23;
          dVar44 = 1.0;
          pfVar19[9] = 1.0;
          pfVar19[10] = 1.0;
          pfVar19[3] = 1.0;
          pfVar19[4] = 0.0;
          pfVar19[0xf] = 0.0;
          pfVar19[0x10] = 1.0;
          pfVar19[0x15] = 0.0;
          pfVar19[0x16] = 0.0;
          iVar27 = iVar27 + (int)(lVar30 << 5) + (int)(lVar30 << 2);
          fVar23 = (float)(longlong)(int)(*(byte *)((int)pvVar17 + iVar25 + 8) + 0x20) * 3.1415927 *
                   0.0078125 + 3.1415927;
          if (*(char *)((int)pvVar17 + iVar25 + 1) == '\0') {
            dVar42 = (double)(fVar23 * 0.5);
            dVar43 = (double)g_PartView.fwd.x;
            dVar45 = (double)g_PartView.fwd.y;
            dVar44 = (double)g_PartView.fwd.z;
            uVar18 = _FSin(dVar42,&g_PartView.fwd.x,0);
            dVar41 = extraout_f1;
            dVar31 = (double)_FSin(dVar42,uVar18,1);
            dVar42 = (double)(float)(dVar45 * dVar41);
            dVar46 = (double)(float)(dVar44 * dVar41);
            dVar44 = (double)g_PartView.right.x;
            dVar45 = (double)g_PartView.right.y;
            dVar33 = (double)g_PartView.right.z;
            dVar34 = (double)g_PartView.up.x;
            dVar35 = (double)g_PartView.up.y;
            dVar37 = (double)g_PartView.up.z;
            dVar41 = (double)(float)(dVar43 * dVar41);
          }
          else {
            dVar45 = (double)(fVar23 * 0.5);
            uVar18 = _FSin(dVar45,&DAT_0011eec0,0);
            dVar46 = extraout_f1_00;
            dVar31 = (double)_FSin(dVar45,uVar18,1);
            dVar45 = dVar42;
            dVar33 = dVar42;
            dVar34 = dVar42;
            dVar35 = dVar44;
            dVar37 = dVar42;
            dVar41 = dVar42;
          }
          dVar32 = -(double)(float)(dVar46 * dVar45 -
                                   (double)(float)(dVar31 * dVar44 +
                                                  (double)(float)(dVar42 * dVar33)));
          dVar38 = -(double)(float)(dVar41 * dVar33 -
                                   (double)(float)(dVar31 * dVar45 +
                                                  (double)(float)(dVar46 * dVar44)));
          dVar43 = -(double)(float)(dVar42 * dVar44 -
                                   (double)(float)(dVar31 * dVar33 +
                                                  (double)(float)(dVar41 * dVar45)));
          dVar33 = (double)(float)(dVar46 * dVar33 +
                                  (double)(float)(dVar41 * dVar44 + (double)(float)(dVar42 * dVar45)
                                                 ));
          dVar36 = -(double)(float)(dVar46 * dVar35 -
                                   (double)(float)(dVar31 * dVar34 +
                                                  (double)(float)(dVar42 * dVar37)));
          dVar39 = -(double)(float)(dVar41 * dVar37 -
                                   (double)(float)(dVar31 * dVar35 +
                                                  (double)(float)(dVar46 * dVar34)));
          dVar40 = -(double)(float)(dVar42 * dVar34 -
                                   (double)(float)(dVar31 * dVar37 +
                                                  (double)(float)(dVar41 * dVar35)));
          dVar34 = (double)(float)(dVar46 * dVar37 +
                                  (double)(float)(dVar41 * dVar34 + (double)(float)(dVar42 * dVar35)
                                                 ));
          dVar44 = (double)(float)((double)(float)(dVar42 * dVar43 +
                                                  -(double)(float)(dVar46 * dVar38 -
                                                                  (double)(float)(dVar41 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar32)))) * dVar50);
          dVar45 = (double)(float)((double)(float)(dVar46 * dVar32 +
                                                  -(double)(float)(dVar41 * dVar43 -
                                                                  (double)(float)(dVar42 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar38)))) * dVar50);
          dVar33 = (double)(float)((double)(float)(dVar41 * dVar38 +
                                                  -(double)(float)(dVar42 * dVar32 -
                                                                  (double)(float)(dVar46 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar43)))) * dVar50);
          fVar24 = (float)((double)(float)(dVar42 * dVar40 +
                                          -(double)(float)(dVar46 * dVar39 -
                                                          (double)(float)(dVar41 * dVar34 +
                                                                         (double)(float)(dVar31 * 
                                                  dVar36)))) * dVar50);
          fVar4 = (float)((double)(float)(dVar46 * dVar36 +
                                         -(double)(float)(dVar41 * dVar40 -
                                                         (double)(float)(dVar42 * dVar34 +
                                                                        (double)(float)(dVar31 * 
                                                  dVar39)))) * dVar50);
          fVar5 = (float)((double)(float)(dVar41 * dVar39 +
                                         -(double)(float)(dVar42 * dVar36 -
                                                         (double)(float)(dVar46 * dVar34 +
                                                                        (double)(float)(dVar31 * 
                                                  dVar40)))) * dVar50);
          dVar42 = -(double)(fVar24 * 0.5 - -(float)(dVar44 * 0.5 - dVar49));
          dVar48 = -(double)(fVar4 * 0.5 - -(float)(dVar45 * 0.5 - dVar48));
          dVar50 = -(double)(fVar5 * 0.5 - -(float)(dVar33 * 0.5 - dVar47));
          fVar23 = (float)(dVar42 + dVar44);
          fVar2 = (float)(dVar48 + dVar45);
          fVar3 = (float)(dVar50 + dVar33);
          pfVar19[6] = (float)dVar42;
          pfVar19[7] = (float)dVar48;
          pfVar19[8] = (float)dVar50;
          *pfVar19 = fVar23;
          pfVar19[1] = fVar2;
          pfVar19[2] = fVar3;
          uVar28 = (uint)bVar6;
          bVar1 = uVar28 != DAT_00a52b80;
          fVar23 = (float)((double)(fVar23 + fVar24) - dVar44);
          fVar2 = (float)((double)(fVar2 + fVar4) - dVar45);
          fVar3 = (float)((double)(fVar3 + fVar5) - dVar33);
          pfVar19[0xc] = fVar23;
          pfVar19[0xd] = fVar2;
          pfVar19[0xe] = fVar3;
          pfVar19[0x12] = (float)((double)fVar23 + dVar44);
          pfVar19[0x13] = (float)((double)fVar2 + dVar45);
          pfVar19[0x14] = (float)((double)fVar3 + dVar33);
          pfVar26 = pfVar26 + 0x18;
          if ((bVar1) || (DAT_00a52b84 != iVar27)) {
            if (DAT_00729648 != 0) {
              ____DrawParts_DepthPass(DAT_00729648,local_b0);
            }
            DAT_00729648 = 0;
          }
          DAT_00729648 = DAT_00729648 + 1;
          DAT_00a52b80 = uVar28;
          DAT_00a52b84 = iVar27;
          pfVar19 = pfVar26;
        }
        else if ((bVar6 & 3) < 4) {
          dVar47 = (double)*(float *)((int)PartInstances + iVar25 + 0x10);
          dVar42 = (double)*(float *)((int)PartInstances + iVar25 + 0x14);
          dVar50 = (double)*(float *)((int)PartInstances + iVar25 + 0x18);
          dVar44 = (double)*(float *)((int)PartInstances + iVar25 + 0x20);
          dVar49 = (double)*(float *)((int)PartInstances + iVar25 + 0x24);
          dVar48 = (double)*(float *)((int)PartInstances + iVar25 + 0x28);
          bVar7 = *(byte *)((int)PartInstances + iVar25 + 3);
          if (bVar6 == 3) {
            lVar30 = GetEffectTexAddr(*(undefined1 *)((int)PartInstances + iVar25 + 2));
          }
          else {
            *(undefined4 *)((int)PartInstances + iVar25 + 0x1c) = 0x3d4ccccd;
            iVar27 = EffectTexHeaders;
            lVar30 = GetEffectTex(0x16);
          }
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 4);
          fVar23 = (float)(dVar48 - dVar50);
          fVar2 = (float)(dVar49 - dVar42);
          fVar3 = (float)(dVar44 - dVar47);
          fVar24 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x11] = fVar24;
          pfVar19[0xb] = fVar24;
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 0xc);
          fVar24 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x17] = fVar24;
          pfVar19[5] = fVar24;
          fVar24 = (float)(dVar47 + dVar44) * 0.5 - g_PartView.camPos.x;
          fVar5 = (float)(dVar50 + dVar48) * 0.5 - g_PartView.camPos.z;
          fVar4 = (float)(dVar42 + dVar49) * 0.5 - g_PartView.camPos.y;
          fVar10 = fVar5 * fVar3 - fVar24 * fVar23;
          fVar13 = fVar4 * fVar23 - fVar5 * fVar2;
          fVar9 = fVar24 * fVar2 - fVar4 * fVar3;
          fVar24 = *(float *)((int)pvVar17 + iVar25 + 0x1c);
          pfVar19[4] = 0.0;
          pfVar19[0xf] = 0.0;
          pfVar19[0x15] = 0.0;
          pfVar19[0x16] = 0.0;
          pfVar19[9] = 1.0;
          pfVar19[10] = 1.0;
          pfVar19[3] = 1.0;
          pfVar19[0x10] = 1.0;
          fVar4 = *(float *)((int)pvVar17 + iVar25 + 0x10);
          fVar11 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar10 * fVar10);
          iVar27 = iVar27 + (int)(lVar30 << 5) + (int)(lVar30 << 2);
          pfVar26 = pfVar26 + 0x18;
          uVar28 = (uint)bVar7;
          bVar1 = uVar28 != DAT_00a52b80;
          fVar5 = fVar9;
          if (0.0 - fVar11 < 0.0) {
            fVar5 = fVar9 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar5 = fVar9 / fVar11;
          }
          fVar9 = fVar10;
          if (0.0 - fVar11 < 0.0) {
            fVar9 = fVar10 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar9 = fVar10 / fVar11;
          }
          fVar12 = -(fVar5 * fVar24 * 0.5 - *(float *)((int)pvVar17 + iVar25 + 0x18));
          fVar10 = fVar13;
          if (0.0 - fVar11 < 0.0) {
            fVar10 = fVar13 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar10 = fVar13 / fVar11;
          }
          fVar13 = -(fVar9 * fVar24 * 0.5 - *(float *)((int)pvVar17 + iVar25 + 0x14));
          fVar11 = fVar12 + fVar23;
          fVar14 = fVar13 + fVar2;
          pfVar19[7] = fVar13;
          fVar13 = -(fVar10 * fVar24 * 0.5 - fVar4);
          fVar4 = (fVar11 + fVar5 * fVar24) - fVar23;
          fVar5 = fVar13 + fVar3;
          pfVar19[6] = fVar13;
          pfVar19[8] = fVar12;
          fVar13 = (fVar14 + fVar9 * fVar24) - fVar2;
          pfVar19[1] = fVar14;
          pfVar19[2] = fVar11;
          *pfVar19 = fVar5;
          pfVar19[0xe] = fVar4;
          pfVar19[0xd] = fVar13;
          pfVar19[0x14] = fVar4 + fVar23;
          fVar23 = (fVar5 + fVar10 * fVar24) - fVar3;
          pfVar19[0x13] = fVar13 + fVar2;
          pfVar19[0xc] = fVar23;
          pfVar19[0x12] = fVar23 + fVar3;
          if ((bVar1) || (DAT_00a52b84 != iVar27)) {
            if (DAT_00729648 != 0) {
              ____DrawParts_DepthPass(DAT_00729648,local_b0);
            }
            DAT_00729648 = 0;
          }
          DAT_00729648 = DAT_00729648 + 1;
          DAT_00a52b80 = uVar28;
          DAT_00a52b84 = iVar27;
          pfVar19 = pfVar19 + 0x18;
        }
      }
LAB_0011f80c:
      iVar29 = iVar29 + 1;
      iVar25 = iVar25 + 0x40;
    } while (iVar29 <= PartIndexTop);
  }
  if (DAT_00729648 != 0) {
    ____DrawParts_DepthPass(DAT_00729648,local_b0);
  }
  *pRVar15->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar15->command[1] = 2;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x41744;
  DAT_00729648 = 0;
  pRVar15->command[1] = 2;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x4174c;
  pRVar15->command[1] = 2;
  pRVar15->command = pRVar15->command + 2;
  return;
}


// 0x011f918 (0x27c bytes)
/* class 22: drifts and falls, grows, and fades from its start colour to its end colour; the
   last PART_FADE_IN frames also fade the alpha */
void UpdatePart_22(PartInstance *part)
{
    Part22 *data = (Part22 *)part->update;

    part->timer--;
    short timer = part->timer;
    if (timer < 1) {
        DeletePart(part);
        return;
    }

    part->rot++;

    float fade = (float)((timer < PART_FADE_IN ? timer : PART_FADE_IN) << 9) * (1.0f / 4096.0f);
    float age = (float)timer * (1.0f / (float)data->life);     /* 1 at birth, 0 at the end */
    float rest = 1.0f - age;

    part->pos.x = data->vel.x + part->pos.x;
    part->pos.y = data->vel.y + part->pos.y;
    part->pos.z = data->vel.z + part->pos.z;
    data->vel.z = data->gravity + data->vel.z;
    part->scale = part->scale + data->growth;

    u8 *color = (u8 *)&part->color;
    color[0] = (int)(data->endColor[0] * rest + data->startColor[0] * age);
    color[1] = (int)(data->endColor[1] * rest + data->startColor[1] * age);
    color[2] = (int)(data->endColor[2] * rest + data->startColor[2] * age);
    color[3] = (int)(data->endColor[3] * fade * rest + data->startColor[3] * fade * age);
}


