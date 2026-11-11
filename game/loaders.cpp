// game/loaders.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 41 functions, 0xdb1e0-0xe0e14
#include <stdio.h>
#include <string.h>
#include "game/loaders.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initonce.h"
#include "game/initsky.h"
#include "game/lights.h"
#include "game/map.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sUnk.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/shrubfunc.h"
#include "idol/tfragfunc.h"
#include "idol/tiefunc.h"
#include "sdk/fios.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/mUnk4.h"
#include "sdk/rUnk.h"
#include "sdk/sce.h"

// 0x00db1e0 (0x14 bytes)
void SECTION_HEADER_LOADERS(void)

{
  DAT_0072479c = 0x10000;
  return;
}


// 0x00db200 (0x40 bytes)
void LoadByteGrid(undefined4 *param_1)

{
  g_byteGridStride = *param_1;
  DAT_00a2049c = param_1[1];
  DAT_00a204a0 = param_1[2];
  g_byteGridData = param_1 + 4;
  DAT_00a204a4 = param_1[3];
  return;
}


// 0x00db240 (0xac bytes)
void ____Loaders_RelocEffectTable(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_1;
  DAT_0095e9f4 = param_1 + 4;
  DAT_0095e9f8 = param_1 + iVar4 * 8 + 4;
  DAT_0095e9f0 = iVar4;
  if (0 < iVar4) {
    iVar6 = 0;
    iVar5 = iVar4;
    do {
      iVar5 = iVar5 + -1;
      *(int *)((int)DAT_0095e9f8 + iVar6) = *(int *)((int)DAT_0095e9f8 + iVar6) + (int)DAT_0095e9f8;
      piVar2 = DAT_0095e9f8;
      iVar6 = iVar6 + 4;
    } while (0 < iVar5);
    if (0 < iVar4) {
      iVar5 = 0;
      piVar3 = DAT_0095e9f8;
      do {
        iVar4 = iVar4 + -1;
        piVar1 = (int *)((int)piVar2 + iVar5);
        iVar6 = *piVar3;
        iVar5 = iVar5 + 4;
        piVar3 = piVar3 + 1;
        *(int *)(iVar6 + 4) = *(int *)(*piVar1 + 4) + (int)piVar2;
      } while (0 < iVar4);
    }
  }
  return;
}


// 0x00db2ec (0x4b8 bytes)
int ParsePif(void *pPif,longlong *tex_regs)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar11;
  ulonglong unaff_r27;
  uint uVar12;
  ulonglong unaff_r28;
  longlong lVar13;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar13 = uVar5 - 0x130;
  puVar2 = (ulonglong *)lVar13;
  *puVar2 = uVar5;
  puVar2[0x28] = in_LR;
  puVar2[0x24] = unaff_r30;
  puVar2[0x25] = unaff_r31;
  puVar2[0x23] = unaff_r29;
  puVar2[0x22] = unaff_r28;
  puVar2[0x21] = unaff_r27;
  puVar2[0x20] = unaff_r26;
  puVar2[0x1f] = unaff_r25;
  puVar2[0x1e] = unaff_r24;
  FastMemSet(uVar5 - 0x98,0,0x54);
  iVar6 = *(int *)((int)pPif + 0x10);
  if (iVar6 == 0x27) {
LAB_000db368:
    *(int *)(puVar2 + 0x13) = (int)pPif + 0x20;
    if (iVar6 == 0x27) {
      iVar6 = ((uint)(ZERO_MASK((0x12 - *(int *)((int)pPif + 0x14)))) & 0x20) + 0x20;
    }
    else {
      iVar6 = ((uint)(ZERO_MASK((0x12 - *(int *)((int)pPif + 0x14)))) & 0x200) + 0x200
      ;
    }
    *(int *)((int)puVar2 + 0xac) = iVar6;
  }
  else {
    if (iVar6 != 0x26) {
      if (iVar6 == 0x13) goto LAB_000db368;
      if (iVar6 != 0x12) goto LAB_000db3d8;
    }
    *(undefined4 *)(puVar2 + 0x13) = 0;
    *(undefined4 *)((int)puVar2 + 0xac) = 0;
  }
LAB_000db3d8:
  uVar7 = FastLog2(*(undefined4 *)((int)pPif + 8));
  uVar8 = *(undefined4 *)((int)pPif + 0xc);
  *(undefined4 *)((int)puVar2 + 0xe4) = uVar7;
  uVar8 = FastLog2(uVar8);
  *(undefined4 *)(puVar2 + 0x1d) = uVar8;
  *(int *)((int)puVar2 + 0x9c) = (int)pPif + *(int *)((int)puVar2 + 0xac) + 0x20;
  iVar6 = *(int *)((int)pPif + 0x10);
  if (iVar6 == 0x27) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc) >> 1;
  }
  else if (iVar6 == 0x26) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc) * 2;
  }
  else if (iVar6 == 0x13) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc);
  }
  else if (iVar6 == 0x12) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc) * 4;
  }
  if ((iVar6 == 0x27) || (iVar6 == 0x13)) {
    *(int *)(puVar2 + 0x18) = g_GsRamAlloc >> 8;
    if (iVar6 == 0x27) {
      g_GsRamAlloc = g_GsRamAlloc + 0x100;
      sceGsSetDefLoadImage
                (uVar5 - 0xa0,*(undefined4 *)(puVar2 + 0x18),1,*(undefined4 *)((int)pPif + 0x14),0,0
                 ,8,2);
    }
    else {
      g_GsRamAlloc = g_GsRamAlloc + *(int *)((int)puVar2 + 0xac);
      sceGsSetDefLoadImage
                (uVar5 - 0xa0,*(undefined4 *)(puVar2 + 0x18),1,*(undefined4 *)((int)pPif + 0x14),0,0
                 ,0x10,0x10);
    }
    FlushCache(0);
    sceGsExecLoadImage(uVar5 - 0xa0,*(undefined4 *)(puVar2 + 0x13));
    sceGsSyncPath(0,0);
  }
  iVar6 = *(int *)((int)pPif + 0x1c);
  if (1 < iVar6) {
    iVar9 = iVar6 + -1;
    lVar3 = lVar13;
    do {
      iVar10 = *(int *)((int)(lVar3 + 4) + 0xac);
      iVar9 = iVar9 + -1;
      iVar1 = (int)lVar3;
      *(int *)(iVar1 + 0xb4) = iVar10 >> 2;
      *(int *)(iVar1 + 0xa0) = *(int *)(iVar1 + 0x9c) + iVar10;
      lVar3 = lVar3 + 4;
    } while (0 < iVar9);
  }
  uVar11 = 0;
  if (0 < iVar6) {
    uVar12 = 0;
    do {
      iVar6 = *(int *)((int)pPif + 8);
      iVar10 = iVar6 >> (uVar11 + 6 & 0x3f);
      iVar1 = g_GsRamAlloc >> 8;
      iVar4 = (int)lVar13;
      *(int *)(iVar4 + 0xc4) = iVar1;
      iVar10 = iVar10 + ((uint)((longlong)iVar10 + -1 >> 0x3f) & 1U - iVar10);
      uVar8 = *(undefined4 *)((int)pPif + 0x10);
      iVar9 = *(int *)((int)pPif + 0xc);
      *(int *)(iVar4 + 0xd4) = iVar10;
      sceGsSetDefLoadImage
                (uVar5 - 0x9c,iVar1,iVar10,uVar8,0,0,iVar6 >> (uVar11 & 0x3f),
                 iVar9 >> (uVar11 & 0x3f));
      FlushCache(0);
      sceGsExecLoadImage(uVar5 - 0x9c,*(undefined4 *)(iVar4 + 0x9c));
      sceGsSyncPath(0,0);
      iVar6 = *(int *)(puVar2 + 0x16) >> (uVar12 & 0x3f);
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 2;
      lVar13 = lVar13 + 4;
      g_GsRamAlloc = g_GsRamAlloc +
                     iVar6 + ((uint)((longlong)iVar6 + -0x100 >> 0x3f) & 0x100U - iVar6);
    } while ((int)uVar11 < *(int *)((int)pPif + 0x1c));
  }
  uVar8 = *(undefined4 *)((int)pPif + 0x10);
  iVar6 = *(int *)((int)pPif + 0x14);
  puVar2[0xf] = 0;
  puVar2[0xe] = (longlong)iVar6;
  puVar2[0x10] = 0;
  puVar2[0x11] = 4;
  lVar13 = STUB_00502fbc_RET_0
                     (*(undefined4 *)((int)puVar2 + 0xc4),*(undefined4 *)((int)puVar2 + 0xd4),uVar8,
                      *(undefined4 *)((int)puVar2 + 0xe4),*(undefined4 *)(puVar2 + 0x1d),1,0,
                      *(undefined4 *)(puVar2 + 0x18));
  iVar6 = *(int *)((int)pPif + 0x1c);
  *tex_regs = lVar13;
  lVar13 = STUB_00502fd4_RET_0(0,iVar6 + -1,1,3,0,0,0xffa0);
  uVar8 = *(undefined4 *)(puVar2 + 0x19);
  tex_regs[1] = lVar13;
  lVar13 = STUB_00502f6c(uVar8,*(undefined4 *)(puVar2 + 0x1b),
                               *(undefined4 *)((int)puVar2 + 0xcc),
                               *(undefined4 *)((int)puVar2 + 0xdc),*(undefined4 *)(puVar2 + 0x1a),
                               *(undefined4 *)(puVar2 + 0x1c));
  tex_regs[2] = lVar13;
  return -1;
}


// 0x00db7a4 (0x134 bytes)
int LoadPifFile(char *filename)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong *tex_regs;
  
  piVar1 = DAT_00a10914;
  uVar2 = FUN_00502dcc(filename,0);
  if ((int)uVar2 < 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = STUB_00502de0_RET_0(uVar2,0,5);
    STUB_00502de0_RET_0(uVar2,0,6);
    iVar4 = STUB_00502dd4(uVar2,piVar1,uVar3);
    if (iVar4 == (int)uVar3) {
      STUB_00502ddc(uVar2);
      if ((int)uVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
        iVar6 = 0;
        if (0 < iVar4) {
          tex_regs = (longlong *)&DAT_00a202d0;
          piVar5 = piVar1;
          do {
            piVar5 = piVar5 + 1;
            ParsePif((void *)(*piVar5 + (int)piVar1),tex_regs);
            iVar6 = iVar6 + 1;
            tex_regs = tex_regs + 3;
          } while (iVar6 < iVar4);
        }
      }
    }
    else {
      STUB_00502ddc(uVar2);
      iVar4 = 0;
    }
  }
  return iVar4;
}


// 0x00db8d8 (0x54 bytes)
void ____Loaders_RelocSpaceWadPtrs(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = param_1 + 4;
  g_PartTexBaseIndex = param_1[1];
  iVar4 = *param_1;
  iVar1 = param_1[2];
  if (0 < iVar4) {
    piVar5 = &g_PartTexFrames;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + 1;
      *piVar5 = (int)param_1 + iVar2 + iVar1;
      piVar5 = piVar5 + 1;
    } while (0 < iVar4);
  }
  return;
}


// 0x00db92c (0x10c bytes)
void ParseEffectTexs(int *tex_defs,int tex_cnt)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar6;
  int iVar5;
  
  iVar5 = 0;
  g_EffectTexCnt = 0;
  if (0 < tex_cnt) {
    do {
      iVar1 = *tex_defs;
      iVar2 = tex_defs[1];
      iVar3 = tex_defs[2];
      iVar4 = tex_defs[3];
      tex_defs = tex_defs + 4;
      *(short *)(&DAT_0095d6da + iVar5 * 0x10) = (short)(iVar1 >> 4);
      *(short *)(&DAT_0095d6d8 + iVar5 * 0x10) = (short)(iVar2 >> 4);
      uVar6 = FastLog2(iVar3);
      *(undefined2 *)(&DAT_0095d6dc + g_EffectTexCnt * 0x10) = uVar6;
      uVar6 = FastLog2(iVar4);
      iVar1 = g_EffectTexCnt * 0x10;
      iVar5 = g_EffectTexCnt + 1;
      *(undefined8 *)(&g_EffectTexs + iVar1) = 0;
      g_EffectTexCnt = iVar5;
      *(undefined2 *)(&DAT_0095d6de + iVar1) = uVar6;
    } while (iVar5 < tex_cnt);
  }
  return;
}


// 0x00dba38 (0x1fc bytes)
void ParseSky(char *data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar6;
  int iVar5;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  g_SkyData = data;
  data[4] = '\0';
  data[5] = '\x01';
  *(char **)(g_SkyData + 0x10) = data + *(int *)(g_SkyData + 0x10);
  *(char **)(g_SkyData + 0x14) = data + *(int *)(g_SkyData + 0x14);
  *(char **)(g_SkyData + 0x18) = data + *(int *)(g_SkyData + 0x18);
  if (*(int *)(g_SkyData + 0x1c) != 0) {
    *(char **)(g_SkyData + 0x1c) = data + *(int *)(g_SkyData + 0x1c);
  }
  iVar7 = 0;
  piVar11 = *(int **)(g_SkyData + 0x10);
  pcVar8 = g_SkyData;
  if (0 < *(short *)(g_SkyData + 0xc)) {
    iVar5 = 0;
    do {
      iVar9 = *piVar11;
      iVar1 = piVar11[1];
      iVar2 = *(int *)(pcVar8 + 0x10);
      iVar3 = piVar11[2];
      iVar4 = piVar11[3];
      piVar11 = piVar11 + 4;
      *(short *)(iVar2 + iVar5 + 10) = (short)(iVar9 >> 4);
      *(short *)(iVar2 + iVar5 + 8) = (short)(iVar1 >> 4);
      uVar6 = FastLog2(iVar3);
      *(undefined2 *)(*(int *)(g_SkyData + 0x10) + iVar5 + 0xc) = uVar6;
      uVar6 = FastLog2(iVar4);
      pcVar8 = g_SkyData;
      iVar7 = iVar7 + 1;
      iVar9 = *(int *)(g_SkyData + 0x10) + iVar5;
      *(undefined8 *)(*(int *)(g_SkyData + 0x10) + iVar5) = 0;
      iVar5 = iVar5 + 0x10;
      *(undefined2 *)(iVar9 + 0xe) = uVar6;
    } while (iVar7 < *(short *)(pcVar8 + 0xc));
  }
  iVar7 = 0;
  if (0 < *(short *)(pcVar8 + 6)) {
    iVar5 = 0;
    do {
      iVar9 = 0;
      piVar10 = (int *)(data + *(int *)(pcVar8 + iVar5 + 0x20));
      *(int **)(pcVar8 + iVar5 + 0x20) = piVar10;
      piVar11 = piVar10;
      if (0 < *piVar10) {
        do {
          iVar9 = iVar9 + 1;
          iVar1 = *piVar10;
          piVar11[8] = (int)(data + piVar11[8]);
          piVar11 = piVar11 + 8;
        } while (iVar9 < iVar1);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      pcVar8 = g_SkyData;
    } while (iVar7 < *(short *)(g_SkyData + 6));
  }
  return;
}


// 0x00dbc38 (0x4b4 bytes)
void LoadMobyModel(MobyClass *pClass,void *tex_regs,char *tex_refs,int oClass)

{
  void *pvVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar12;
  MobyClass *pMVar13;
  longlong lVar11;
  uint uVar15;
  ulonglong uVar14;
  int iVar17;
  ulonglong uVar16;
  
  if (pClass->packets != (void *)0x0) {
    puVar4 = (uint *)((int)&pClass->packets + (int)pClass->packets);
    pClass->packets = puVar4;
    piVar8 = (int *)puVar4[2];
    piVar12 = (int *)puVar4[3];
    uVar15 = *puVar4;
    if (piVar8 != (int *)0x0) {
      piVar8 = (int *)((int)&pClass->packets + (int)piVar8);
      puVar4[2] = (uint)piVar8;
    }
    if (piVar12 != (int *)0x0) {
      piVar12 = (int *)((int)&pClass->packets + (int)piVar12);
      puVar4[3] = (uint)piVar12;
    }
    uVar5 = 0;
    iVar6 = *(int *)(g_viewMtxPtr + 0x4a8);
    uVar9 = 0;
    puVar4[5] = (int)pClass + (puVar4[5] - iVar6);
    puVar4[4] = (int)pClass + (puVar4[4] - iVar6);
    if (uVar15 != 0) {
      do {
        iVar3 = EffectTexHeaders;
        iVar6 = *piVar8;
        if (iVar6 < 0) {
          if (iVar6 == -1) {
            *piVar8 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -2) {
            *piVar8 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -3) {
            iVar6 = EffectTexHeaders + 0x24;
            *piVar8 = iVar6;
          }
        }
        else {
          iVar6 = EffectTexHeaders + iVar6 * 0x24;
          *piVar8 = iVar6;
        }
        if (*(char *)(piVar8 + 3) == '\0') {
          *(byte *)(piVar8 + 3) =
               (byte)(*(uint *)(iVar6 + 8) >> 6) & 0xc | (byte)*(uint *)(iVar6 + 8) & 3;
        }
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 < uVar15);
    }
    uVar15 = puVar4[1];
    if (uVar15 != 0) {
      do {
        iVar3 = EffectTexHeaders;
        iVar6 = *piVar12;
        if (iVar6 < 0) {
          if (iVar6 == -1) {
            *piVar12 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -2) {
            *piVar12 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -3) {
            iVar6 = EffectTexHeaders + 0x24;
            *piVar12 = iVar6;
          }
        }
        else {
          iVar6 = EffectTexHeaders + iVar6 * 0x24;
          *piVar12 = iVar6;
        }
        if (*(char *)(piVar12 + 3) == '\0') {
          *(byte *)(piVar12 + 3) =
               (byte)(*(uint *)(iVar6 + 8) >> 6) & 0xc | (byte)*(uint *)(iVar6 + 8) & 3;
        }
        uVar9 = uVar9 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 < uVar15);
    }
  }
  if (pClass->collision != (u16 *)0x0) {
    pClass->collision = (u16 *)((int)&pClass->packets + (int)pClass->collision);
  }
  if (pClass->skeleton != (void *)0x0) {
    pvVar1 = (void *)((int)&pClass->packets + (int)pClass->skeleton);
    uVar15 = 0;
    pClass->skeleton = pvVar1;
    if (pClass->joint_cnt != '\0') {
      do {
        uVar15 = uVar15 + 1;
        *(undefined4 *)((int)pvVar1 + 0xc) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x3c) = 0x3f800000;
        *(float *)((int)pvVar1 + 0x30) = *(float *)((int)pvVar1 + 0x30) * 0.0009765625;
        *(float *)((int)pvVar1 + 0x34) = *(float *)((int)pvVar1 + 0x34) * 0.0009765625;
        *(float *)((int)pvVar1 + 0x38) = *(float *)((int)pvVar1 + 0x38) * 0.0009765625;
        pvVar1 = (void *)((int)pvVar1 + 0x40);
      } while (uVar15 < pClass->joint_cnt);
    }
  }
  if (pClass->common_trans != (void *)0x0) {
    pfVar2 = (float *)((int)&pClass->packets + (int)pClass->common_trans);
    uVar15 = 0;
    pClass->common_trans = pfVar2;
    if (pClass->joint_cnt != '\0') {
      do {
        uVar15 = uVar15 + 1;
        *pfVar2 = *pfVar2 * 0.0009765625;
        pfVar2[1] = pfVar2[1] * 0.0009765625;
        pfVar2[2] = pfVar2[2] * 0.0009765625;
        pfVar2 = pfVar2 + 4;
      } while (uVar15 < pClass->joint_cnt);
    }
  }
  if (pClass->anim_joints != (void *)0x0) {
    piVar8 = (int *)((int)&pClass->packets + (int)pClass->anim_joints);
    pClass->anim_joints = piVar8;
    iVar6 = *piVar8;
    if (0 < iVar6) {
      iVar3 = 0;
      do {
        iVar6 = iVar6 + -1;
        *(int *)((int)pClass->anim_joints + iVar3 + 4) =
             (int)&pClass->packets + *(int *)((int)pClass->anim_joints + iVar3 + 4);
        iVar3 = iVar3 + 4;
      } while (0 < iVar6);
    }
  }
  if (pClass->SoundDefs != (void *)0x0) {
    pClass->SoundDefs = (void *)((int)&pClass->packets + (int)pClass->SoundDefs);
  }
  uVar15 = (uint)pClass->seq_cnt;
  iVar6 = 0;
  pMVar13 = pClass;
  if (pClass->seq_cnt != 0) {
    do {
      if (*(int *)&pMVar13->type != 0) {
        iVar3 = (int)&pClass->packets + *(int *)&pMVar13->type;
        *(int *)&pMVar13->type = iVar3;
        uVar15 = (uint)pClass->seq_cnt;
        if (*(int *)(iVar3 + 0x14) != 0) {
          *(int *)(iVar3 + 0x14) = (int)&pClass->packets + *(int *)(iVar3 + 0x14);
        }
        iVar10 = 0;
        iVar17 = iVar3;
        if (*(char *)(iVar3 + 0x10) != '\0') {
          do {
            iVar10 = iVar10 + 1;
            *(int *)(iVar17 + 0x1c) = (int)&pClass->packets + *(int *)(iVar17 + 0x1c);
            iVar17 = iVar17 + 4;
          } while (iVar10 < (int)(uint)*(byte *)(iVar3 + 0x10));
        }
      }
      iVar6 = iVar6 + 1;
      pMVar13 = (MobyClass *)&pMVar13->pakcet_cnt_0;
    } while (iVar6 < (int)uVar15);
  }
  if ((oClass == 0x472) && (*(int *)(g_viewMtxPtr + 0xc) != 0)) {
    piVar8 = &DAT_00724864;
    uVar15 = 0;
    puVar4 = &DAT_00724870;
    puVar7 = &DAT_0072486c;
    do {
      uVar14 = (ulonglong)*puVar4;
      uVar5 = *puVar7;
      uVar16 = (ulonglong)*(byte *)(*(int *)(&pClass->type + *piVar8 * 4) + 0x10);
      uVar14 = uVar14 + ((longlong)(uVar16 - uVar14) >> 0x3f & uVar16 - uVar14);
      if ((ulonglong)uVar5 < (uVar14 & 0xffffffff)) {
        lVar11 = uVar14 - uVar5;
        iVar6 = *(int *)(&pClass->type + *piVar8 * 4) + uVar5 * 4;
        do {
          piVar12 = (int *)(iVar6 + 0x1c);
          lVar11 = lVar11 + -1;
          iVar6 = iVar6 + 4;
          iVar3 = *piVar12 + (uint)*(ushort *)(*piVar12 + 0xc);
          *(short *)(iVar3 + 0x12) = *(short *)(iVar3 + 0x12) + (short)piVar8[1];
        } while (0 < (int)lVar11);
      }
      uVar15 = uVar15 + 1;
      puVar4 = puVar4 + 4;
      puVar7 = puVar7 + 4;
      piVar8 = piVar8 + 4;
    } while (uVar15 < 0x21);
  }
  return;
}


// 0x00dc0ec (0xf4 bytes)
void LoadMobyPClasses(MobyClass *pClass,void *tex_regs,char *tex_refs,int oClass)

{
  int iVar1;
  int iVar2;
  MOBY_OCLASSES oClass_00;
  
  iVar2 = oClass_to_mClass_lookup;
  iVar1 = oClass_to_mClass_lookup * 4;
  (&MobyClassLookup)[oClass] = (char)oClass_to_mClass_lookup;
  oClass_00 = (MOBY_OCLASSES)oClass;
  (&mClass_to_oClass)[iVar2] = oClass_00;
  MobyClasses[iVar2] = pClass;
  if (pClass == (MobyClass *)0x0) {
    GetMobyFunction(oClass_00);
    oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
  }
  else {
    *(undefined4 *)(&MobyMipDists + iVar1) = *(undefined4 *)&pClass->bangles;
    GetMobyFunction(oClass_00);
    oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
    LoadMobyModel(pClass,tex_regs,tex_refs,oClass);
  }
  return;
}


// 0x00dc210 (0x5ec bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int LoadSpaceshipModel(int *data,int *gs_addrs)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  MobyClass *pMVar11;
  int iVar12;
  MOBY_OCLASSES MVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auStack_80;
  
  lVar8 = (longlong)(int)gs_addrs;
  lVar6 = (longlong)(int)data;
  FastMemCopy
            (lVar6,DAT_0096456c,
             *(int *)(&DAT_010ea114 + (int)((longlong)g_SpaceshipVariant << 3)) << 0xb);
  iVar1 = *data;
  iVar12 = 0;
  uVar9 = (ulonglong)(uint)data[1];
  iVar2 = data[2];
  uVar3 = data[3];
  do {
    if (iVar12 == 0) {
      sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2b] >> 8,1,0x13,0,0,0x40,0x40);
      lVar7 = uVar9 + 0x14430;
    }
    else if (iVar12 == 1) {
      sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2c] >> 8,1,0x13,0,0,0x20,0x20);
      lVar7 = uVar9 + 0x15430;
    }
    else if (iVar12 == 2) {
      sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2d] >> 8,1,0x12,0,0,0x10,0x10);
      lVar7 = uVar9 + 0x30;
    }
    else {
      sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2e] >> 8,1,0x12,0,0,0x10,0x10);
      lVar7 = (ulonglong)uVar3 + 0x30;
    }
    FlushCache(0);
    sceGsExecLoadImage(auStack_80,lVar7 + lVar6 & 0xffffffff);
    sceGsSyncPath(0,0);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  auVar14 = ZEXT416(8);
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  auVar15 = loadVectorLeftIndexed(0xb4,lVar8);
  auVar17 = loadVectorLeftIndexed(0xac,lVar8);
  auVar16 = vectorShiftRightAlgebraicWord(auVar15,auVar14);
  auVar15 = loadVectorLeftIndexed(0xb0,lVar8);
  auVar17 = vectorShiftRightAlgebraicWord(auVar17,auVar14);
  auVar15 = vectorShiftRightAlgebraicWord(auVar15,auVar14);
  auVar19 = vectorSplatHalfWord(auVar16,1);
  auVar14.piece<0,10>() = _DAT_007247c0;
  auVar14.piece<10,2>() = DAT_007247ca;
  auVar14.piece<12,2>() = DAT_007247cc;
  auVar14.piece<14,2>() = DAT_007247ce;
  auVar18 = vectorSplatHalfWord(auVar17,1);
  uVar10 = lVar6 + uVar9 & 0xffffffff;
  DAT_007247ca = storeVectorElementHalfWordIndexed(auVar19,10,0x7247c0);
  auVar19 = vectorSplatHalfWord(auVar15,1);
  DAT_007247cc = storeVectorElementHalfWordIndexed(auVar18,0xc,0x7247c0);
  DAT_007247ce = storeVectorElementHalfWordIndexed(auVar19,0xe,0x7247c0);
  auVar16 = vectorPermute(auVar14,auVar16,_DAT_000dc1e0);
  auVar14 = vectorPermute(auVar17,auVar15,_DAT_000dc1e0);
  iVar12 = DAT_00a37388 * 4;
  auVar14 = vectorPermute(auVar16,auVar14,_DAT_000dc1f0);
  *(undefined1 (*) [16])(DAT_00a37388 * 0x10 + 0xa4c540) = auVar14;
  *(int *)(&DAT_00a37390 + iVar12) = (int)(lVar6 + uVar9) + -0x80000000;
  FastMemCopy(uVar10,lVar6 + uVar9 + 0x430 & 0xffffffff,0x14000);
  iVar5 = oClass_to_mClass_lookup;
  iVar12 = (int)((longlong)g_SpaceshipVariant << 2);
  uVar10 = uVar10 + 0x14000;
  DAT_007247e0 = (undefined1)DAT_00a37388;
  if ((&MobyClassLookup)[*(int *)((int)OCLASSES_SPACESHIP + iVar12)] == -1) {
    iVar12 = *(int *)((int)OCLASSES_SPACESHIP + iVar12);
    pMVar11 = (MobyClass *)((int)data + iVar1);
    iVar4 = DAT_00a37388 * -0x10;
    iVar1 = oClass_to_mClass_lookup * 4;
    (&MobyClassLookup)[iVar12] = (char)oClass_to_mClass_lookup;
    MVar13 = (MOBY_OCLASSES)iVar12;
    (&mClass_to_oClass)[iVar5] = MVar13;
    MobyClasses[iVar5] = pMVar11;
    if (pMVar11 == (MobyClass *)0x0) {
      GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
    }
    else {
      *(undefined4 *)(&MobyMipDists + iVar1) = *(undefined4 *)&pMVar11->bangles;
      GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      LoadMobyModel(pMVar11,&DAT_007247c0 + iVar4,&DAT_007247e0,iVar12);
    }
  }
  auVar14 = ZEXT416(8);
  DAT_00a37388 = DAT_00a37388 + 1;
  auVar15 = loadVectorLeftIndexed(0xb8,lVar8);
  auVar14 = vectorShiftRightAlgebraicWord
                      (auVar15,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
  auVar15.piece<0,10>() = _DAT_007247d0;
  auVar15.piece<10,2>() = DAT_007247da;
  auVar15.piece<12,4>() = uRam007247dc;
  auVar16 = vectorSplatHalfWord(auVar14,1);
  DAT_007247da = storeVectorElementHalfWordIndexed(auVar16,10,0x7247d0);
  iVar1 = DAT_00a37388 * 4;
  auVar14 = vectorPermute(auVar15,auVar14,_DAT_000dc200);
  iVar12 = (int)uVar10;
  *(undefined1 (*) [16])(DAT_00a37388 * 0x10 + 0xa4c540) = auVar14;
  *(int *)(&DAT_00a37390 + iVar1) = iVar12 + 0x70000000;
  FastMemCopy(uVar10 & 0xffffffff,lVar6 + (ulonglong)uVar3 + 0x430 & 0xffffffff,0x4000);
  iVar5 = oClass_to_mClass_lookup;
  iVar1 = (int)((longlong)g_SpaceshipVariant << 2);
  DAT_007247e0 = (undefined1)DAT_00a37388;
  if ((&MobyClassLookup)[*(int *)((int)OCLASSES_COCKPIT + iVar1)] == -1) {
    iVar1 = *(int *)((int)OCLASSES_COCKPIT + iVar1);
    pMVar11 = (MobyClass *)((int)data + iVar2);
    iVar4 = DAT_00a37388 * -0x10;
    iVar2 = oClass_to_mClass_lookup * 4;
    (&MobyClassLookup)[iVar1] = (char)oClass_to_mClass_lookup;
    MobyClasses[iVar5] = pMVar11;
    MVar13 = (MOBY_OCLASSES)iVar1;
    (&mClass_to_oClass)[iVar5] = MVar13;
    if (pMVar11 == (MobyClass *)0x0) {
      GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
    }
    else {
      *(undefined4 *)(&MobyMipDists + iVar2) = *(undefined4 *)&pMVar11->bangles;
      GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      LoadMobyModel(pMVar11,&DAT_007247d0 + iVar4,&DAT_007247e0,iVar1);
    }
  }
  DAT_00731c90 = 1;
  DAT_00731c94 = 1;
  DAT_00a561c4 = 0;
  DAT_00a37388 = DAT_00a37388 + 1;
  return iVar12 + 0x4000;
}


// 0x00dc7fc (0x360 bytes)
void SetUpVisGif
               (longlong *pGif,short *tex_def,int mip_dist,int filter,int u_clamp,int v_clamp,
               int index)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)((int)tex_def[2] >> 6);
  lVar10 = (longlong)((int)tex_def[2] >> 7);
  uVar6 = FastLog2();
  uVar7 = FastLog2(tex_def[3]);
  sVar1 = tex_def[5];
  sVar2 = tex_def[6];
  sVar3 = tex_def[7];
  iVar4 = GSmem.base >> 8;
  if (index < 0) {
    if (index < -1) {
      uVar5 = (uint)(ZERO_MASK((-3 - index))) & 0x18;
      lVar9 = STUB_00502fd4_RET_0(0,0,1,filter,0,0,mip_dist);
      *pGif = lVar9;
      lVar9 = FUN_00502f08(1,1,0,0,0,0);
      pGif[2] = lVar9;
      pGif[4] = *(longlong *)(&DAT_00a20450 + uVar5);
      pGif[6] = *(longlong *)(&DAT_00a20460 + uVar5);
    }
    else {
      lVar9 = STUB_00502fd4_RET_0(0,0,1,filter,0,0,mip_dist);
      *pGif = lVar9;
      lVar9 = FUN_00502f08(1,1,0,0,0,0);
      pGif[2] = lVar9;
      lVar9 = STUB_00502fbc_RET_0(0x3ffb,1,0x12,3,3,1,0,0);
      pGif[4] = lVar9;
      lVar9 = STUB_00502f6c(0,0,0,0,0,0);
      pGif[6] = lVar9;
    }
  }
  else {
    lVar8 = STUB_00502fd4_RET_0(0,(longlong)tex_def[4] + -1,1,filter,0,0,mip_dist);
    *pGif = lVar8;
    lVar8 = FUN_00502f08(u_clamp,v_clamp,0,0,index,0);
    pGif[2] = lVar8;
    lVar9 = STUB_00502fbc_RET_0
                      (0,lVar9 + (lVar9 + -1 >> 0x3f & 1U - lVar9),0x13,uVar6,uVar7,1,0,
                       sVar1 + iVar4);
    pGif[4] = lVar9;
    lVar9 = STUB_00502f6c(0,lVar10 + (lVar10 + -1 >> 0x3f & 1U - lVar10),sVar2 + iVar4,1,
                                sVar3 + iVar4,1);
    pGif[6] = lVar9;
  }
  return;
}


// 0x00dcb5c (0x4 bytes)
void STUB_000dcb5c(...)

{
  return;
}


// 0x00dcb60 (0x4 bytes)
void STUB_000dcb60(...)

{
  return;
}


// 0x00dcb64 (0x5c bytes)
void ParseMobySeq(MobyClass *pClass,int seq)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(&pClass->type + (int)((longlong)seq << 2));
  if (*(int *)(iVar2 + 0x14) != 0) {
    *(int *)(iVar2 + 0x14) = iVar2 + *(int *)(iVar2 + 0x14);
  }
  iVar4 = 0;
  iVar3 = iVar2;
  if (*(char *)(iVar2 + 0x10) != '\0') {
    do {
      iVar4 = iVar4 + 1;
      bVar1 = *(byte *)(iVar2 + 0x10);
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)bVar1);
  }
  return;
}


// 0x00dcbc0 (0x4 bytes)
void STUB_000dcbc0(...)

{
  return;
}


// 0x00dcbc4 (0x4 bytes)
void STUB_000dcbc4(...)

{
  return;
}


// 0x00dcbc8 (0x4 bytes)
void STUB_000dcbc8(...)

{
  return;
}


// 0x00dcbcc (0x7c bytes)
void ParseColl(char *data)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)data != 0) {
    g_CollOutput.grid = data + *(int *)data;
  }
  if (*(int *)(data + 4) != 0) {
    g_HeroCollision = (HeroCollHeader *)(data + *(int *)(data + 4));
    iVar1 = 0;
    if (0 < g_HeroCollision->cellCount) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(int *)((int)&g_HeroCollision->cells[0].data + iVar2) =
             (int)g_HeroCollision->pad +
             *(int *)((int)&g_HeroCollision->cells[0].data + iVar2) + -4;
        iVar2 = iVar2 + 0x10;
      } while (iVar1 < g_HeroCollision->cellCount);
    }
  }
  return;
}


// 0x00dcc50 (0x1ec bytes)
// strings: 00652290: 'moby %d:      %.1fK\n'


void PrintMobyMemory(int *classes,int cnt)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int32_t iVar14;
  ulonglong unaff_r24;
  int iVar15;
  ulonglong unaff_r25;
  int *piVar17;
  longlong lVar16;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar18;
  ulonglong unaff_r28;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  longlong lVar21;
  ulonglong unaff_r30;
  int iVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  GPiece<16> auVar25;
  
  lVar12 = (longlong)(int)classes;
  uVar11 = ZEXT48(&stack0x00000000);
  lVar20 = uVar11 - 0x10c0;
  puVar7 = (ulonglong *)lVar20;
  *puVar7 = uVar11;
  puVar7[0x21a] = in_LR;
  puVar7[0x217] = in_f31;
  puVar7[0x211] = unaff_r26;
  puVar7[0x20f] = unaff_r24;
  iVar15 = 0;
  puVar7[0x215] = unaff_r30;
  puVar7[0x210] = unaff_r25;
  puVar7[0x216] = unaff_r31;
  iVar22 = 0;
  puVar7[0x214] = unaff_r29;
  puVar7[0x213] = unaff_r28;
  puVar7[0x212] = unaff_r27;
  if (0 < cnt) {
    dVar24 = 0.0009765625;
    lVar19 = lVar12 + 4;
    lVar21 = uVar11 - 0x1050;
    lVar16 = lVar12;
    lVar18 = lVar20;
    do {
      auVar25 = loadVectorLeftIndexed(in_LR,lVar19);
      piVar17 = (int *)lVar16;
      iVar3 = *piVar17;
      auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0,lVar21);
      *(undefined4 *)lVar21 = uVar6;
      iVar8 = (int)lVar18;
      if (iVar3 == 0) {
        fVar1 = 0.0;
      }
      else {
        if (piVar17[8] == 0) {
          dVar23 = (double)FastIntToDouble(piVar17[0x10] - iVar3);
        }
        else {
          dVar23 = (double)FastIntToDouble(piVar17[8] - iVar3);
        }
        lVar12 = -0x40800000;
        fVar1 = (float)(dVar23 * dVar24);
        *(undefined4 *)(iVar8 + 0x78) = 0xbf800000;
        *(undefined4 *)(iVar8 + 0x7c) = 0;
      }
      iVar15 = iVar15 + 1;
      *(float *)(iVar8 + 0x74) = fVar1;
      lVar19 = lVar19 + 0x20;
      lVar16 = lVar16 + 0x20;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
    } while (iVar15 < cnt);
  }
  do {
    iVar15 = 0;
    bVar9 = true;
    lVar16 = lVar20;
    bVar10 = true;
    if (0 < cnt) {
      do {
        bVar9 = bVar10;
        iVar3 = (int)lVar16;
        uVar4 = (int)*(uint *)(iVar3 + 0x74) >> 0x1f;
        uVar5 = (int)*(uint *)(iVar3 + 0x7c) >> 0x1f;
        uVar6 = *(undefined4 *)(iVar3 + 0x74);
        if ((int)((uVar4 >> 1 ^ *(uint *)(iVar3 + 0x74)) - uVar4) <
            (int)((uVar5 >> 1 ^ *(uint *)(iVar3 + 0x7c)) - uVar5)) {
          uVar2 = *(undefined4 *)(iVar3 + 0x70);
          bVar9 = false;
          *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0x7c);
          *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0x78);
          *(undefined4 *)(iVar3 + 0x78) = uVar2;
          *(undefined4 *)(iVar3 + 0x7c) = uVar6;
        }
        iVar15 = iVar15 + 1;
        lVar12 = lVar16 + 8;
        lVar16 = lVar12;
        bVar10 = bVar9;
      } while (iVar15 < cnt);
    }
  } while (!bVar9);
  if (0 < cnt) {
    do {
      uVar13 = FastDoubleToInt((double)*(float *)((int)lVar20 + 0x70),lVar12);
      puVar7[8] = (ulonglong)(double)*(float *)((int)lVar20 + 0x74);
      iVar14 = printf("moby %d:      %.1fK\n",uVar13,puVar7[8]);
      lVar12 = (longlong)iVar14;
      iVar22 = iVar22 + 1;
      lVar20 = lVar20 + 8;
    } while (iVar22 < cnt);
  }
  return;
}


// 0x00dce3c (0x4 bytes)
void STUB_000dce3c(...)

{
  return;
}


// 0x00dce40 (0x10c bytes)
// strings: 006522a8: 'rc1/ps3data/global/locale/%s' | 006522c8: 'rc1/ps3data/global/locale/japanese'


void LoadHelp(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStack_90 [128];
  
  if (g_JapaneseMode) {
    snprintf(acStack_90,"rc1/ps3data/global/locale/japanese");
  }
  else {
    uVar1 = GetLanguageNameByIdx();
    snprintf(acStack_90,"rc1/ps3data/global/locale/%s",uVar1);
  }
  LoadAssetFromFile(acStack_90,g_pLocaleBuffer,0x40000);
  Help = *g_pLocaleBuffer;
  HelpMsgs = g_pLocaleBuffer;
  FastMemCopy32
            (g_pLocaleBuffer,g_pLocaleBuffer + 2,
             (g_pLocaleBuffer[1] + 3U & 0xfffffffc) - 8);
  if (0 < Help) {
    iVar2 = 0;
    iVar3 = Help;
    do {
      iVar3 = iVar3 + -1;
      *(int *)((int)HelpMsgs + iVar2) =
           (int)HelpMsgs + *(int *)((int)HelpMsgs + iVar2) + -8;
      iVar2 = iVar2 + 0x10;
    } while (0 < iVar3);
  }
  return;
}


// 0x00dcf58 (0x1fe0 bytes)
// strings: 006522ec: 'rc1/ps3data/level%d/gameplay_pal' | 00652314: 'rc1/ps3data/level%d/gameplay_ntsc' | 0065233c: '!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n' | 0065238c: '***\nocclusion out of date on mobys (%d / %d)\n***\n' | 006523c4: '***\nocclusion out of date on tfrag\n***\n' | 006523ec: '***\nno occlusion\n***\n' | 006522a8: 'rc1/ps3data/global/locale/%s' | 006522c8: 'rc1/ps3data/global/locale/japanese'

ulonglong NAVG_LoadFile(int param_1)

{
  u8 uVar1;
  f32 fVar2;
  ushort uVar3;
  MobyModeBit MVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  bool bVar9;
  MobyInstance *pMVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar16;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar23;
  uint uVar17;
  int iVar18;
  Spline **ppSVar19;
  MobyInstance *pMVar20;
  TieInstance *pTVar21;
  undefined4 *puVar22;
  int iVar24;
  ABGR *pAVar25;
  ushort *puVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined2 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint *puVar32;
  uint uVar33;
  int *levelVarBlock;
  uint *puVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  ABGR *pAVar39;
  longlong lVar38;
  undefined4 *puVar40;
  short *psVar41;
  int *piVar42;
  uint *puVar43;
  int iVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  char acStack_1d0 [128];
  undefined8 local_150;
  int local_148 [2];
  char acStack_140 [64];
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uint *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  uVar5 = Gameplay;
  uVar28 = (ulonglong)Gameplay;
  uVar31 = (ulonglong)DAT_00a108f4;
  uVar12 = get_default_fs();
  if (g_IsPal == 0) {
    snprintf(acStack_140,"rc1/ps3data/level%d/gameplay_ntsc",Level);
  }
  else {
    snprintf(acStack_140,"rc1/ps3data/level%d/gameplay_pal",Level);
  }
  uVar13 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar12,0,acStack_140,1,local_148);
  _ZN4cell4fios2op8syncWaitEPx(uVar13,0);
  if (local_148[0] == 0) {
    do {
      cellSysutilCheckCallback(local_148[0]);
      local_148[0] = 100;
      syscall();
    } while( true );
  }
  uVar13 = _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(uVar12,0,acStack_140,&local_150,3);
  _ZN4cell4fios2op8syncWaitEPx(uVar13,0);
  if ((DAT_00a108f4 == 0) || (local_c0 = ZEXT48(&DAT_00a108d8), param_1 != 0)) {
    local_c0 = ZEXT48(&DAT_00a108d8);
    uVar31 = idol::kalloc(TEX_BASE,(int)local_150);
    DAT_00a108f4 = (uint)uVar31;
  }
  uVar13 = read_req_setup(uVar12,0,local_148[0],uVar31,local_150,0xffffffffffffffff);
  uVar13 = _ZN4cell4fios2op8syncWaitEPx(uVar13,0);
  if ((int)uVar13 != 0) {
    do {
      cellSysutilCheckCallback(uVar13);
      uVar13 = 100;
      syscall();
    } while( true );
  }
  uVar12 = filehandle_close_setup(uVar12,0,local_148[0]);
  uVar12 = _ZN4cell4fios2op8syncWaitEPx(uVar12,0);
  if ((int)uVar12 != 0) {
    do {
      cellSysutilCheckCallback(uVar12);
      uVar12 = 100;
      syscall();
    } while( true );
  }
  FlushCache(0);
  STUB_000e9150(DAT_00964568,uVar31);
  FlushCache(0);
  FastMemSet(&g_heroMtx,0,0x2310);
  FastMemSet(&GameCamera,0,0x3a0);
  FastMemSet(&g_AnimLayerPool,0,0x180);
  seedRand(0x4d2);
  SetNtscPalTiming();
  g_CollOutput.padding[0] = (int)&g_CollMobyJointCache;
  g_CollOutput.padding[1] = (int)&MobyClassRef;
  g_CollOutput.padding[2] = 0;
  g_CollOutput.collCount = 0;
  g_CollOutput.damageNext = 0;
  FastMemSetZero(g_MobyGrid,0x10000);
  FastMemSetZero(&MobyGridAlloc,0x60);
  puVar32 = (uint *)uVar31;
  uVar14 = uVar31 + *puVar32 & 0xffffffff;
  levelVarBlock = (int *)(uVar31 + *puVar32);
  g_ViewContext.occlColor0 = *levelVarBlock;
  g_ViewContext.occlColor1 = levelVarBlock[1];
  g_ViewContext.occlColor2 = levelVarBlock[2];
  levelFog.r = (u8)levelVarBlock[3];
  levelFog.g = (u8)levelVarBlock[4];
  levelFog.b = (u8)levelVarBlock[5];
  LevelFogNearDist = levelVarBlock[6];
  LevelFogFarDist = (float)levelVarBlock[7];
  LevelFogNearIntensity = (float)levelVarBlock[8];
  LevelFogFarIntensity = (float)levelVarBlock[9];
  HeroDeathHeight = levelVarBlock[10];
  g_shipSplinePath = levelVarBlock[0xf];
  g_shipCameraStartCuboid = levelVarBlock[0x10];
  g_shipCameraEndCuboid = levelVarBlock[0x11];
  UpdateFog();
  TfragDrawDist = 512000.0;
  DAT_00a390b8 = 500;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  PartClipDist = 0x1f4000;
  STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
  STUB_00174bd8(&DAT_00a10680);
  FastMemSetZero(PointLights,0x100);
  FastMemSetZero(&PointLightData,0x180);
  FastMemSetZero(DirectionalLights,0x400);
  local_c8 = ZEXT48(&g_SpaceshipPtr);
  local_b8 = ZEXT48(&g_heroMtx);
  iVar16 = *(int *)(g_EngineData + 0x60);
  local_d0 = uVar14;
  if (iVar16 < 0xc) {
    if (iVar16 != 0) goto LAB_000dd3fc;
  }
  else {
    printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n")
    ;
    iVar16 = 0xc;
LAB_000dd3fc:
    FastMemCopy32(DirectionalLights,DAT_00a15f70,iVar16 << 6);
  }
  if (puVar32[0x20] == 0) {
    BlenderCnt = 0;
  }
  else {
    uVar14 = uVar31 + puVar32[0x20];
    lVar37 = (uVar14 & 0xffffffff) + 0x10;
    BlenderCnt = *(uint *)uVar14;
    if (BlenderCnt != 0) {
      FastMemCopy32(&DAT_00a1c900,lVar37,BlenderCnt << 4);
      FastMemCopy32
                (g_Blenders,lVar37 + ((ulonglong)BlenderCnt & 0xfffffff) * 0x10 & 0xffffffff,
                 BlenderCnt << 7);
      uVar27 = BlenderCnt;
      if (0 < (int)BlenderCnt) {
        pAVar25 = &g_Blenders[0].dLightA;
        iVar16 = 0;
        pAVar39 = &g_Blenders[0].dLightB;
        do {
          if ((int)*pAVar25 < 0) {
            pAVar25->A = '\0';
            pAVar25->B = '\0';
            pAVar25->G = '\0';
            pAVar25->R = '\v';
          }
          if ((int)*pAVar39 < 0) {
            pAVar39->A = '\0';
            pAVar39->B = '\0';
            pAVar39->G = '\0';
            pAVar39->R = '\v';
          }
          iVar16 = iVar16 + 1;
          pAVar25 = pAVar25 + 0x20;
          pAVar39 = pAVar39 + 0x20;
        } while (iVar16 < (int)uVar27);
      }
    }
  }
  if (puVar32[4] != 0) {
    levelVarBlock = (int *)(uVar31 + puVar32[g_Language + 4]);
    Help = *levelVarBlock;
    HelpMsgs = (int *)uVar5;
    lVar37 = (longlong)(int)((levelVarBlock[1] + 3U & 0xfffffffc) - 8);
    FastMemCopy32(uVar28,(uVar31 + puVar32[g_Language + 4] & 0xffffffff) + 8,lVar37);
    if (0 < Help) {
      iVar35 = 0;
      iVar16 = Help;
      do {
        iVar16 = iVar16 + -1;
        *(uint *)((int)HelpMsgs + iVar35) =
             *(int *)((int)HelpMsgs + iVar35) + ((int)HelpMsgs - 8U);
        iVar35 = iVar35 + 0x10;
      } while (0 < iVar16);
    }
    uVar28 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
  }
  uVar5 = DAT_00a15f80;
  local_e0 = ZEXT48(&TEX_BASE);
  TieCnt = TieCntBase;
  g_TieInstance = TieInstanceBase;
  iVar16 = 0;
  TieInstanceEnd = TieInstanceBase + TieCntBase;
  DAT_00e583f0 = 0;
  if (DAT_00a15f80 != 0) {
    iVar35 = 0;
    levelVarBlock = &DAT_00e574f0;
    puVar26 = &DAT_00e576f0;
    do {
      iVar24 = DAT_00a15f7c + iVar35;
      uVar27 = iVar16 + 1;
      iVar35 = iVar35 + 0x40;
      uVar3 = *(ushort *)(iVar24 + 0x30);
      *levelVarBlock = iVar24;
      *puVar26 = uVar3;
      levelVarBlock = levelVarBlock + 1;
      puVar26 = puVar26 + 1;
      (&DAT_00e577f0)[uVar3] = (char)iVar16;
      iVar16 = iVar16 + 1;
      DAT_00e583f0 = iVar16;
    } while (uVar27 < uVar5);
  }
  ShrubInstanceCnt = ShrubInstanceCnt;
  g_ShrubInstance = ShrubInstanceBase;
  ShrubInstanceEnd = ShrubInstanceBase + ShrubInstanceCnt;
  if (puVar32[2] != 0) {
    uVar14 = uVar31 + puVar32[2];
    lVar38 = (uVar14 & 0xffffffff) + 0x10;
    ImportCameraCnt = *(uint *)uVar14;
    ImportCameras = (int)uVar28;
    lVar37 = ((ulonglong)(uint)ImportCameraCnt & 0x7ffffff) * 0x20;
    if (ImportCameraCnt != 0) {
      FastMemSet(uVar28,0,(int)lVar37);
    }
    uVar28 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (0 < ImportCameraCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        puVar40 = (undefined4 *)lVar38;
        puVar22 = (undefined4 *)(ImportCameras + iVar35);
        iVar35 = iVar35 + 0x20;
        puVar22[3] = *puVar40;
        *puVar22 = puVar40[1];
        puVar22[1] = puVar40[2];
        puVar22[2] = puVar40[3];
        puVar22[4] = puVar40[4];
        puVar22[5] = puVar40[5];
        puVar22[6] = puVar40[6];
        lVar38 = lVar38 + 0x20;
        puVar22[7] = puVar40[7];
      } while (iVar16 < ImportCameraCnt);
    }
  }
  uVar14 = uVar28;
  if (puVar32[3] != 0) {
    uVar15 = uVar31 + puVar32[3];
    lVar37 = (uVar15 & 0xffffffff) + 0x10;
    g_SoundCnt = *(uint *)uVar15;
    if (g_SoundCnt == 0) {
      g_pSoundInstances = 0;
    }
    else {
      g_pSoundInstances = (int)uVar28;
      uVar14 = uVar28 + (ulonglong)g_SoundCnt * 0x90 + 0x3f & 0xffffffc0;
      FastMemSet(uVar28,0,(int)((ulonglong)g_SoundCnt * 0x90));
      if (0 < (int)g_SoundCnt) {
        iVar16 = 0;
        iVar35 = 0;
        do {
          iVar24 = g_pSoundInstances + iVar16;
          FastMemCopy32(iVar24,lVar37,0x90);
          sound_SetupAmbientFunctions(iVar24);
          iVar35 = iVar35 + 1;
          iVar16 = iVar16 + 0x90;
          lVar37 = lVar37 + 0x90;
        } while (iVar35 < (int)g_SoundCnt);
      }
    }
  }
  puVar34 = (uint *)(uVar31 + puVar32[0x11]);
  uVar5 = *puVar34;
  local_100 = (ulonglong)uVar5;
  puVar29 = &____oClassInstanceList;
  g_MobyInstance = (MobyInstance *)uVar14;
  uVar28 = (uVar31 + puVar32[0x11] & 0xffffffff) + 0x10;
  uVar31 = (ulonglong)puVar34[1] + (ZERO_MASK((9 - Level)) & 0x80U);
  local_e8 = puVar32;
  FastMemSet(uVar14,0,(int)((local_100 + uVar31 & 0xffffffff) << 8));
  lVar37 = 0;
  local_d8 = uVar31;
  if (0 < (int)uVar5) {
    iVar35 = 0;
    local_f0 = ZEXT48(&DAT_00a545c4);
    iVar16 = 0;
    uVar12 = 0x3fe0000000000000;
    local_f8 = ZEXT48(&DAT_00a202c0);
    lVar37 = 0;
    dVar46 = 0.0;
    do {
      puVar32 = (uint *)uVar28;
      cVar23 = -2;
      uVar5 = puVar32[1];
      uVar27 = puVar32[2];
      uVar30 = puVar32[4];
      uVar6 = puVar32[3];
      uVar28 = uVar28 + ((ulonglong)*puVar32 & 0xfffffffc) & 0xffffffff;
      uVar17 = puVar32[5];
      uVar33 = uVar30;
      if (uVar27 == 0) goto LAB_000ddaac;
      cVar23 = -1;
      if ((uVar27 & 0x10) != 0) {
        cVar23 = ____NAVG_AllocSlot_a0e11c(Level,uVar6);
      }
      if (*(char *)((int)local_f0 + uVar6) == '\0') {
        iVar24 = (int)uVar6 >> 5;
        if ((uVar27 & 3) == 0) {
          if ((uVar27 & 8) == 0) {
            if ((uVar27 & 0xc) != 4) goto LAB_000ddaac;
            uVar27 = *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar24 * 4) & 1 << (uVar6 & 0x1f);
          }
          else {
            uVar27 = *(uint *)(&DAT_00a54dd0 + iVar24 * 4) & 1 << (uVar6 & 0x1f);
          }
          if (uVar27 == 0) goto LAB_000ddaac;
          goto LAB_000ddaa0;
        }
        if (*(char *)((int)local_f8 + uVar5) == -1) {
          if ((uVar27 & 2) == 0) goto LAB_000ddaa0;
          uVar33 = uVar17;
          uVar30 = uVar17;
          if ((*(uint *)(&DAT_00a54dd0 + iVar24 * 4) & 1 << (uVar6 & 0x1f)) != 0) {
            uVar17 = uVar17 + 1;
            uVar33 = ((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0);
          }
        }
        else {
          if ((uVar27 & 1) == 0) goto LAB_000ddaa0;
          if ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar24 * 4) & 1 << (uVar6 & 0x1f)) != 0) {
            uVar27 = uVar30 + 1;
            uVar33 = ((int)uVar27 >> 1) + (uint)((int)uVar27 < 0 && (uVar27 & 1) != 0);
          }
        }
LAB_000ddaac:
        *puVar29 = (short)lVar37;
        pMVar20 = (MobyInstance *)((int)&(g_MobyInstance->bSphere).x + iVar35);
        InitMobyInstance(pMVar20,puVar32[6]);
        pMVar20->field74_0xb1 = cVar23;
        pMVar20->uid = (ushort)uVar6;
        pMVar20->levelFlagIdx = (char)uVar5;
        pMVar20->field76_0xb4 = (char)((ushort)(short)uVar33 >> 8);
        pMVar20->field77_0xb5 = (char)(short)uVar33;
        pMVar20->field78_0xb6 = (char)((ushort)(short)uVar30 >> 8);
        pMVar20->field79_0xb7 = (char)(short)uVar30;
        if (pMVar20->pClass != (MobyClass *)0x0) {
          pMVar20->scale = pMVar20->pClass->gScale * (float)puVar32[7];
        }
        pMVar20->drawDistance = (short)puVar32[8];
        pMVar20->updateDistance = (char)puVar32[9];
        (pMVar20->pos).x = (f32)puVar32[0xc];
        (pMVar20->pos).y = (f32)puVar32[0xd];
        (pMVar20->pos).z = (f32)puVar32[0xe];
        (pMVar20->rotation).x = (f32)puVar32[0xf];
        (pMVar20->rotation).y = (f32)puVar32[0x10];
        (pMVar20->rotation).z = (f32)puVar32[0x11];
        pMVar20->group = (s8)puVar32[0x12];
        dVar47 = (double)(float)puVar32[0x14];
        if ((puVar32[0x13] != 0) &&
           (dVar45 = (double)GetGroundZ(uVar12,&pMVar20->pos,0), dVar46 < dVar45)) {
          (pMVar20->pos).z = (float)(dVar45 + dVar47);
        }
        pvVar7 = (void *)puVar32[0x16];
        pMVar20->occlIndex = 0x7f80;
        pMVar20->pVar = pvVar7;
        if (puVar32[0x17] == 0) {
          pMVar20->occlIndex = 0;
        }
        pMVar8 = pMVar20->pClass;
        if (pMVar8 != (MobyClass *)0x0) {
          *(ushort *)&pMVar8->mode_bits = *(ushort *)&pMVar8->mode_bits | (ushort)puVar32[0x18];
        }
        pMVar20->modeBits = pMVar20->modeBits | (MobyModeBit)puVar32[0x18];
        if (pMVar8 != (MobyClass *)0x0) {
          UpdateMobyTransform(pMVar20);
        }
        uVar5 = puVar32[0x1c];
        iVar24 = puVar32[0x1b] * 0x10000 + puVar32[0x1a] * 0x100 + puVar32[0x19];
        pMVar20->colorManipulator = iVar24;
        MB_SetLights(pMVar20,iVar24,0,0,0);
        uVar31.piece<0,4>() = pMVar20->color;
        uVar31.piece<4,4>() = pMVar20->light;
        pMVar20->color = (int)((uVar31 | (longlong)(int)uVar5) >> 0x20);
        pMVar20->light = (int)(uVar31 | (longlong)(int)uVar5);
        if (puVar32[0x1d] != 0xffffffff) {
          Map_RegisterLevelObject(pMVar20,puVar32[0x1d]);
        }
        iVar35 = iVar35 + 0x100;
        lVar37 = lVar37 + 1;
      }
      else {
LAB_000ddaa0:
        *puVar29 = 0xffff;
      }
      iVar16 = iVar16 + 1;
      puVar29 = puVar29 + 1;
    } while (iVar16 < (int)local_100);
  }
  puVar32 = local_e8;
  MobyInstancePermEnd = (MobyInstance *)((int)&(g_MobyInstance->bSphere).x + (int)(lVar37 << 8));
  lVar38 = uVar14 + (local_d8 + lVar37 & 0xffffff) * 0x100;
  MobyInstancePermEnd->state = 0xff;
  MobyInstanceEnd = g_MobyInstance + (int)(local_d8 + lVar37) + -1;
  DAT_00a390b0 = (undefined4)lVar38;
  uVar5 = local_e8[0x16];
  uVar28 = lVar38 + (local_d8 & 0x1ffffff) * 0x80 + 0x3f & 0xffffffc0;
  uVar31 = uVar28;
  puVar34 = local_e8;
  if (uVar5 != 0) {
    uVar27 = local_e8[0x15];
    if (0 < ImportCameraCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar24 = ImportCameras + iVar35;
        if (*(int *)(iVar24 + 0x1c) < 0) {
          *(undefined4 *)(iVar24 + 0x1c) = 0;
        }
        else {
          iVar44 = *(int *)(iVar24 + 0x1c) * 8;
          iVar36 = *(int *)((int)puVar32 + iVar44 + uVar27);
          lVar37 = (longlong)*(int *)((int)puVar32 + iVar44 + uVar27 + 4);
          *(int *)(iVar24 + 0x1c) = (int)uVar31;
          FastMemCopy(uVar31,(int)puVar32 + iVar36 + uVar5,lVar37);
          *(int *)((int)puVar32 + iVar44 + uVar27) = (int)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
        }
        iVar16 = iVar16 + 1;
        iVar35 = iVar35 + 0x20;
      } while (iVar16 < ImportCameraCnt);
    }
    if (0 < (int)g_SoundCnt) {
      iVar35 = 0;
      iVar16 = 0;
      uVar30 = g_SoundCnt;
      do {
        iVar24 = g_pSoundInstances + iVar35;
        if (*(int *)(iVar24 + 8) < 0) {
          *(undefined4 *)(iVar24 + 8) = 0;
        }
        else {
          iVar18 = *(int *)(iVar24 + 8) * 8;
          iVar44 = *(int *)((int)puVar32 + iVar18 + uVar27);
          iVar36 = *(int *)((int)puVar32 + iVar18 + uVar27 + 4);
          *(int *)(iVar24 + 8) = (int)uVar31;
          lVar37 = (longlong)iVar36;
          FastMemCopy(uVar31,(int)puVar32 + iVar44 + uVar5,lVar37);
          *(int *)((int)puVar32 + iVar18 + uVar27) = (int)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
          uVar30 = g_SoundCnt;
        }
        iVar16 = iVar16 + 1;
        iVar35 = iVar35 + 0x90;
      } while (iVar16 < (int)uVar30);
    }
    puVar34 = local_e8;
    if (g_MobyInstance != MobyInstancePermEnd) {
      pMVar20 = g_MobyInstance;
      do {
        if ((int)pMVar20->pVar < 0) {
          pMVar20->pVar = (void *)0x0;
        }
        else {
          iVar35 = (int)pMVar20->pVar * 8;
          iVar16 = *(int *)((int)puVar32 + iVar35 + uVar27);
          lVar37 = (longlong)*(int *)((int)puVar32 + iVar35 + uVar27 + 4);
          pMVar20->pVar = (void *)uVar31;
          FastMemCopy(uVar31,(int)puVar32 + iVar16 + uVar5,lVar37);
          *(void **)((int)puVar32 + iVar35 + uVar27) = (void *)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
        }
        pMVar20 = pMVar20 + 1;
      } while (pMVar20 != MobyInstancePermEnd);
    }
    uVar31 = uVar31 + 0x3f & 0xffffffc0;
  }
  iVar16 = (int)uVar28;
  if (puVar34[0x14] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x14]);
    uVar5 = puVar34[0x15];
    iVar35 = *levelVarBlock;
    while (-1 < iVar35) {
      iVar35 = *(int *)((int)puVar34 + *levelVarBlock * 8 + uVar5);
      if (iVar16 <= iVar35) {
        piVar42 = (int *)(iVar35 + levelVarBlock[1]);
        iVar35 = *piVar42;
        if (-1 < iVar35) {
          *piVar42 = (int)(short)(&____oClassInstanceList)[iVar35];
        }
      }
      levelVarBlock = levelVarBlock + 2;
      iVar35 = *levelVarBlock;
    }
  }
  if (puVar34[0x17] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x17]);
    uVar5 = puVar34[0x15];
    iVar35 = *levelVarBlock;
    while (-1 < iVar35) {
      iVar35 = *(int *)((int)puVar34 + *levelVarBlock * 8 + uVar5);
      if (iVar16 <= iVar35) {
        *(int *)(iVar35 + levelVarBlock[1]) = *(int *)(iVar35 + levelVarBlock[1]) + iVar35;
      }
      levelVarBlock = levelVarBlock + 2;
      iVar35 = *levelVarBlock;
    }
  }
  uVar28 = uVar31;
  if (puVar34[0x12] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x12]);
    puVar32 = (uint *)(levelVarBlock + 4);
    iVar35 = *levelVarBlock;
    iVar24 = levelVarBlock[1];
    uVar28 = uVar31 + (longlong)iVar24 + 0x3f & 0xffffffc0;
    if (iVar24 != 0) {
      FastMemCopyReverse16(uVar31,levelVarBlock + iVar35 + 4,(longlong)iVar24);
    }
    levelVarBlock = &g_MobyGroups;
    FastMemSet(&g_MobyGroups,0,0x1c0);
    if (0 < iVar35) {
      iVar24 = 0;
      do {
        if (-1 < (int)*puVar32) {
          uVar15 = *puVar32 + uVar31;
          g_NumMobyGroups = iVar24 + 1;
          uVar14 = uVar15 & 0xffffffff;
          *levelVarBlock = (int)uVar15;
          uVar15 = uVar14;
          while( true ) {
            uVar3 = *(ushort *)uVar15;
            if (-1 < (short)(&____oClassInstanceList)[uVar3 & 0x7fff]) {
              *(short *)uVar14 = (&____oClassInstanceList)[uVar3 & 0x7fff];
              uVar14 = uVar14 + 2;
            }
            if ((uVar3 & 0x8000) != 0) break;
            uVar15 = uVar15 + 2;
          }
          iVar36 = (int)uVar14;
          if (*levelVarBlock < iVar36) {
            *(ushort *)(iVar36 + -2) = *(ushort *)(iVar36 + -2) | 0x8000;
          }
          else {
            *levelVarBlock = 0;
          }
        }
        iVar24 = iVar24 + 1;
        puVar32 = puVar32 + 1;
        levelVarBlock = levelVarBlock + 1;
      } while (iVar24 < iVar35);
    }
  }
  puVar32 = local_e8;
  uVar31 = uVar28;
  if (local_e8[0x13] != 0) {
    levelVarBlock = (int *)((int)local_e8 + local_e8[0x13]);
    iVar35 = levelVarBlock[1];
    lVar37 = (longlong)*levelVarBlock;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (*levelVarBlock != 0) {
      FastMemCopyReverse32(uVar28,ZEXT48(levelVarBlock) + 0x10,lVar37);
    }
    uVar5 = puVar32[0x15];
    uVar14 = ZEXT48(levelVarBlock) + 0x10 + lVar37 & 0xffffffff;
    if (0 < iVar35) {
      iVar24 = 0;
      do {
        psVar41 = (short *)uVar14;
        iVar36 = (int)((longlong)*psVar41 << 3);
        if (iVar16 <= *(int *)((int)puVar32 + iVar36 + uVar5)) {
          *(int *)(*(int *)((int)puVar32 + iVar36 + uVar5) + (int)psVar41[1]) =
               *(int *)(psVar41 + 2) + (int)uVar28;
        }
        iVar24 = iVar24 + 1;
        uVar14 = uVar14 + 8;
      } while (iVar24 < iVar35);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x1c] != 0) {
    levelVarBlock = (int *)((int)puVar32 + puVar32[0x1c]);
    piVar42 = levelVarBlock + 4;
    SplineCnt = *levelVarBlock;
    iVar16 = levelVarBlock[2];
    uVar28 = uVar31 + (longlong)iVar16 + 0x3f & 0xffffffc0;
    SplineOfs = (void *)uVar31;
    if (iVar16 != 0) {
      FastMemCopy(uVar31,(int)levelVarBlock + levelVarBlock[1],(longlong)iVar16);
    }
    pvVar7 = SplineOfs;
    if (0 < SplineCnt) {
      ppSVar19 = Splines;
      iVar16 = SplineCnt;
      do {
        iVar35 = *piVar42;
        iVar16 = iVar16 + -1;
        piVar42 = piVar42 + 1;
        *ppSVar19 = (Spline *)(iVar35 + (int)pvVar7);
        ppSVar19 = ppSVar19 + 1;
      } while (0 < iVar16);
    }
  }
  if (puVar32[0x1d] != 0) {
    puVar32 = (uint *)((int)local_e8 + puVar32[0x1d]);
    puVar34 = puVar32 + 4;
    DAT_00a1a860 = *puVar32;
    uVar5 = puVar32[1];
    uVar27 = puVar32[2];
    DAT_00a1a85c = (int)uVar28;
    uVar31 = uVar28 + ((ulonglong)DAT_00a1a860 & 0x7ffffff) * 0x20 + 0x3f & 0xffffffc0;
    if (0 < (int)DAT_00a1a860) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        memcpy((void *)(DAT_00a1a85c + iVar35),puVar34,0x10);
        puVar43 = puVar34 + 4;
        iVar16 = iVar16 + 1;
        iVar24 = DAT_00a1a85c + iVar35;
        puVar34 = puVar34 + 8;
        iVar35 = iVar35 + 0x20;
        *(uint *)(iVar24 + 0x14) = *puVar43;
      } while (iVar16 < (int)DAT_00a1a860);
    }
    uVar28 = uVar31 + (longlong)(int)uVar27 + 0x3f & 0xffffffc0;
    if (uVar27 != 0) {
      FastMemCopy(uVar31,(int)puVar32 + uVar5,(longlong)(int)uVar27);
    }
    if (0 < (int)DAT_00a1a860) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        uVar5 = *puVar34;
        iVar24 = DAT_00a1a85c + iVar35;
        iVar35 = iVar35 + 0x20;
        puVar34 = puVar34 + 1;
        *(uint *)(iVar24 + 0x10) = uVar5 + (int)uVar31;
      } while (iVar16 < (int)DAT_00a1a860);
    }
  }
  puVar32 = local_e8;
  uVar31 = uVar28;
  if (local_e8[0x1b] != 0) {
    puVar34 = (uint *)((int)local_e8 + local_e8[0x1b]);
    puVar43 = puVar34 + 4;
    DAT_00a51bc4 = *puVar34;
    DAT_00a51bc0 = (int)uVar28;
    uVar31 = uVar28 + (ulonglong)DAT_00a51bc4 * 0x90 + 0x3f & 0xffffffc0;
    if (DAT_00a51bc4 != 0) {
      FastMemSet(uVar28,0,(int)((ulonglong)DAT_00a51bc4 * 0x90));
    }
    if (0 < (int)DAT_00a51bc4) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32(DAT_00a51bc0 + iVar16,puVar43,0x90);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x90;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < (int)DAT_00a51bc4);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x18] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x18]);
    puVar43 = puVar34 + 4;
    CuboidCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)CuboidCnt & 0x1ffffff) * 0x80;
    Cuboids = (Cuboid *)uVar31;
    uVar28 = uVar31 + lVar37 + 0x3f & 0xffffffc0;
    if (CuboidCnt != 0) {
      FastMemSet(uVar31,0,(int)lVar37);
    }
    if (0 < CuboidCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32((int)&(Cuboids->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < CuboidCnt);
    }
  }
  uVar31 = uVar28;
  if (puVar32[0x19] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x19]);
    puVar43 = puVar34 + 4;
    SphereCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)SphereCnt & 0x1ffffff) * 0x80;
    Spheres = (Sphere *)uVar28;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (SphereCnt != 0) {
      FastMemSet(uVar28,0,(int)lVar37);
    }
    if (0 < SphereCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32((int)&(Spheres->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < SphereCnt);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x1a] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1a]);
    puVar43 = puVar34 + 4;
    CylinderCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)CylinderCnt & 0x1ffffff) * 0x80;
    Cylinders = (Cylinder *)uVar31;
    uVar28 = uVar31 + lVar37 + 0x3f & 0xffffffc0;
    if (CylinderCnt != 0) {
      FastMemSet(uVar31,0,(int)lVar37);
    }
    if (0 < CylinderCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32((int)&(Cylinders->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < CylinderCnt);
    }
  }
  if (puVar32[0x21] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x21]);
    uVar5 = *puVar34;
    CamCollGrid = (undefined4)uVar28;
    FastMemCopy32(uVar28,puVar34 + 4,uVar5 + 0x4000);
    uVar28 = uVar28 + uVar5 + 0x403f & 0xffffffc0;
  }
  if (puVar32[0x1e] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1e]);
    uVar5 = *puVar34;
    Blenders = (Blender *)uVar28;
    FastMemCopy32(uVar28,puVar34 + 4,uVar5 + 0x4000);
    uVar28 = uVar28 + uVar5 + 0x403f & 0xffffffc0;
  }
  uVar31 = uVar28;
  if (puVar32[0x1f] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1f]);
    DAT_00a1c840 = *puVar34;
    lVar37 = ((ulonglong)DAT_00a1c840 & 0x7ffffff) * 0x20;
    DAT_00a1c880 = (undefined4)uVar28;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (DAT_00a1c840 != 0) {
      FastMemCopy32(uVar28,puVar34 + 4,(int)lVar37);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x22] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x22]);
    DAT_00a4daf4 = *puVar34;
    DAT_00a4db00 = (undefined4)uVar31;
    uVar28 = uVar31 + (ulonglong)DAT_00a4daf4 * 0x30 + 0x3f & 0xffffffc0;
    if (DAT_00a4daf4 != 0) {
      FastMemCopy32(uVar31,puVar34 + 4,(int)((ulonglong)DAT_00a4daf4 * 0x30));
    }
  }
  PartInstances = (void *)uVar28;
  PartIndexNext = 0;
  PartActiveCnt = 0;
  PartIndexTop = 0xffffffff;
  FastMemSetZero(&DAT_00a52000,0x200);
  g_SpaceshipPtr = (MobyInstance *)0x0;
  iVar16 = (int)local_d0;
  if (0 < *(int *)(iVar16 + 0x2c)) {
    if (((Level == Gemlik) && (*(short *)((int)local_c8 + 0x26) == 2)) && (DAT_00a561c0 != 0)) {
      uVar1 = g_MobyInstance->state;
      pMVar20 = g_MobyInstance;
      while (uVar1 != 0xff) {
        if ((short)pMVar20->oClass == OCLASSES_SPACESHIP[2]) {
          SetupSpaceShipVars(pMVar20);
          MB_SetAnimationNoBlend(pMVar20,1,0);
          if (g_SpaceshipPtr != (MobyInstance *)0x0) goto LAB_000de924;
          break;
        }
        uVar1 = pMVar20[1].state;
        pMVar20 = pMVar20 + 1;
      }
    }
    pMVar20 = CreateMoby
                        ((MOBY_OCLASSES)
                         *(undefined4 *)
                          ((int)OCLASSES_SPACESHIP +
                          (int)((longlong)*(short *)((int)local_c8 + 0x26) << 2)));
    (pMVar20->pos).x = *(f32 *)(iVar16 + 0x2c);
    (pMVar20->pos).y = *(f32 *)(iVar16 + 0x30);
    MVar4 = pMVar20->modeBits;
    (pMVar20->pos).z = *(f32 *)(iVar16 + 0x34);
    fVar2 = *(f32 *)(iVar16 + 0x38);
    pMVar20->drawDistance = 0xff;
    (pMVar20->rotation).z = fVar2;
    pMVar20->updateDistance = '\x10';
    pMVar20->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
    pMVar20->modeBits =
         MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
    MB_SetAnimationNoBlend(pMVar20,1,0);
    UpdateMobyTransform(pMVar20);
    g_SpaceshipPtr = pMVar20;
    Map_RegisterLevelObject(pMVar20,0);
  }
LAB_000de924:
  iVar16 = TfragsCnt;
  if ((OcclGrid == (void *)0x0) || (puVar32[0x23] == 0)) {
    printf("***\nno occlusion\n***\n");
    pMVar20 = g_MobyInstance;
    if (g_MobyInstance != MobyInstanceEnd) {
      do {
        pMVar20->occlIndex = 0x7f80;
        pMVar20 = pMVar20 + 1;
      } while (pMVar20 != MobyInstanceEnd);
    }
    pTVar21 = g_TieInstance;
    if (g_TieInstance != TieInstanceEnd) {
      do {
        pTVar21->occlIndex[0] = '\0';
        pTVar21->occlIndex[1] = '\0';
        pTVar21->occlIndex[2] = '\x7f';
        pTVar21->occlIndex[3] = -0x80;
        pTVar21 = pTVar21 + 1;
      } while (pTVar21 != TieInstanceEnd);
    }
    if (0 < TfragsCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar35 = iVar35 + 1;
        pcVar11 = Tfrags->occlIndex;
        (pcVar11 + iVar16)[0] = '\x7f';
        (pcVar11 + iVar16)[1] = -0x80;
        iVar16 = iVar16 + 0x30;
      } while (iVar35 < TfragsCnt);
    }
    OcclUpdate = 0;
  }
  else {
    levelVarBlock = (int *)((int)local_e8 + puVar32[0x23]);
    puVar34 = (uint *)(levelVarBlock + 4);
    iVar35 = *levelVarBlock;
    iVar24 = levelVarBlock[1];
    uVar5 = levelVarBlock[2];
    puVar32 = puVar34 + iVar35 * 2;
    if (((int)TieInstanceEnd - (int)g_TieInstance) / 0x70 == iVar24) {
      if (0 < iVar24) {
        iVar36 = 0;
        do {
          iVar36 = iVar36 + 1;
          puVar32 = puVar32 + 2;
        } while (iVar36 < iVar24);
      }
    }
    else {
      puVar32 = puVar32 + iVar24 * 2;
    }
    if (g_MobyInstance->state != 0xff) {
      bVar9 = false;
      iVar44 = 0;
      iVar36 = 0;
      pMVar20 = g_MobyInstance;
      do {
        if (pMVar20->occlIndex != 0x7f80) {
          iVar44 = iVar44 + 1;
          uVar27 = 0;
          if (0 < (int)uVar5) {
            uVar27 = 0;
            puVar43 = puVar32;
            do {
              uVar30 = puVar43[1];
              if ((uVar30 >> 0x18 | uVar30 >> 8 & 0xff00 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18)
                  == (int)(short)pMVar20->uid) break;
              uVar27 = uVar27 + 1;
              puVar43 = puVar43 + 2;
            } while ((int)uVar27 < (int)uVar5);
          }
          if (uVar27 == uVar5) {
            iVar36 = iVar36 + 1;
            bVar9 = true;
            pMVar20->occlIndex = 0x7f80;
          }
          else {
            uVar27 = *(uint *)((int)(((ulonglong)uVar27 & 0x7fffffff) << 3) + (int)puVar32);
            pMVar20->occlIndex =
                 (short)((int)(uVar27 >> 0x18 | uVar27 >> 8 & 0xff00 |
                              (uVar27 & 0xff00) << 8 | uVar27 << 0x18) >> 3) << 8 |
                 (ushort)(1 << (uVar27 >> 0x18 & 7));
          }
        }
        pMVar10 = pMVar20 + 1;
        pMVar20 = pMVar20 + 1;
      } while (pMVar10->state != 0xff);
      if (bVar9) {
        printf("***\nocclusion out of date on mobys (%d / %d)\n***\n",iVar36,iVar44);
      }
    }
    if (iVar16 == iVar35) {
      if (0 < iVar35) {
        iVar36 = 0;
        iVar16 = iVar35;
        do {
          uVar5 = *puVar34;
          iVar16 = iVar16 + -1;
          puVar34 = puVar34 + 2;
          iVar44 = **(int **)((int)local_e0 + 0x28) + iVar36;
          iVar36 = iVar36 + 0x30;
          *(ushort *)(iVar44 + 0x1e) =
               (short)((int)(uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 |
                            (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 3) << 8 |
               (ushort)(1 << (uVar5 >> 0x18 & 7));
        } while (0 < iVar16);
      }
    }
    else {
      printf("***\nocclusion out of date on tfrag\n***\n");
      if (0 < TfragsCnt) {
        iVar36 = 0;
        iVar16 = 0;
        do {
          iVar36 = iVar36 + 1;
          pcVar11 = Tfrags->occlIndex;
          (pcVar11 + iVar16)[0] = '\x7f';
          (pcVar11 + iVar16)[1] = -0x80;
          iVar16 = iVar16 + 0x30;
        } while (iVar36 < TfragsCnt);
      }
    }
    puVar32 = (uint *)(levelVarBlock + iVar35 * 2 + 4);
    if (0 < iVar24) {
      iVar16 = 0;
      do {
        uVar5 = *puVar32;
        iVar24 = iVar24 + -1;
        puVar32 = puVar32 + 2;
        *(int *)(g_TieInstance->occlIndex + iVar16) =
             ((int)(uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >>
             3) << 8 | 1 << (uVar5 >> 0x18 & 7);
        iVar16 = iVar16 + 0x70;
      } while (0 < iVar24);
    }
    OcclUpdate = 2;
  }
  uVar31 = local_b8;
  ResetDrawGlobals();
  Hero_ResetHero();
  Hero_InitStuff();
  InitCameras();
  UpdateCamera();
  InitPadRing();
  EnableFontColors();
  pMVar20 = g_SpaceshipPtr;
  g_mobyIdListCount = 0;
  DAT_00a51ee8 = 0;
  DAT_00a51f68 = 0;
  iVar16 = *(int *)((int)uVar31 + 0x2080);
  worldUpdateTime = 0;
  puVar22 = &DAT_007ff23c;
  DAT_00a15c7c = 0;
  lVar37 = 5;
  do {
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22 = puVar22 + 4;
    lVar37 = lVar37 + -1;
  } while (lVar37 != 0);
  DAT_010bb478 = 0;
  if (pMVar20 != (MobyInstance *)0x0) {
    uVar12 = *(undefined8 *)(iVar16 + 0x38);
    pMVar20->color = (int)((ulonglong)uVar12 >> 0x20);
    pMVar20->light = (int)uVar12;
  }
  if ((int)Level < 5) {
    if (Level == Aridia) goto LAB_000dedbc;
  }
  else if ((int)Level < 10) {
    if ((int)Level < 9) {
LAB_000dedbc:
      ScreenColorEffectLevel = &DAT_0071ef00;
      goto LAB_000dede0;
    }
  }
  else if ((int)Level < 0xb) goto LAB_000dedbc;
  ScreenColorEffectLevel = &DAT_0071eed0;
LAB_000dede0:
  ScreenColorEffectNow = ScreenColorEffectLevel;
  if (g_JapaneseMode == false) {
    uVar12 = GetLanguageNameByIdx();
    snprintf(acStack_1d0,"rc1/ps3data/global/locale/%s",uVar12);
  }
  else {
    snprintf(acStack_1d0,"rc1/ps3data/global/locale/japanese");
  }
  iVar16 = (int)local_c0;
  LoadAssetFromFile(acStack_1d0,*(undefined4 *)(iVar16 + 0x54),0x40000);
  HelpMsgs = *(int **)(iVar16 + 0x54);
  Help = *HelpMsgs;
  FastMemCopy32
            (HelpMsgs,HelpMsgs + 2,(HelpMsgs[1] + 3U & 0xfffffffc) - 8);
  if (0 < Help) {
    iVar35 = 0;
    iVar16 = Help;
    do {
      iVar16 = iVar16 + -1;
      *(int *)((int)HelpMsgs + iVar35) =
           (int)HelpMsgs + *(int *)((int)HelpMsgs + iVar35) + -8;
      iVar35 = iVar35 + 0x10;
    } while (0 < iVar16);
  }
  return uVar28 + 0x40000 & 0xffffffff;
}


// 0x00def38 (0x8 bytes)
undefined8 STUB_000def38_RET_1(...)

{
  return 1;
}


// 0x00def40 (0x14 bytes)
void ____Unused_IncCounter_a204ac(void)

{
  DAT_00a204ac = DAT_00a204ac + 1;
  return;
}


// 0x00def54 (0x24 bytes)
void AdvanceLoadingStage(void)

{
  g_LoadingStage = g_LoadingStage + 1;
  DAT_00a204b0 = DAT_00a204b0 + 1;
  return;
}


// 0x00def78 (0x488 bytes)
// strings: 000df3ac: 'HBiu`' (raw) | 000df2f8: 'HBj)`' (raw) | 000df2cc: 'HBjU`' (raw) | 00652404: 'rc1/ps3data/level%d/engine.ps3' | 00652424: 'rc1/ps3data/level%d/vram.ps3' | 00652444: 'space_ships' | 00652454: 'rc1/ps3data/japan_font.ps3' | 00652474: 'rc1/ps3data/japan_font.vram' | 00652494: 'gameplay_pal' | 006524a4: 'gameplay_ntsc' | 006524b4: 'rc1/ps3data/level%d/sound.bnk'

undefined8 LoadLevelFiles(void)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  int iVar5;
  char acStack_160 [64];
  char acStack_120 [128];
  char acStack_a0 [128];
  
  iVar5 = (int)g_SpaceshipVariant;
  iVar3 = FUN_00503128_RET_0(1);
  sVar1 = g_LoadingStage;
  if (iVar3 == 0) {
    if (g_LoadingStage == 7) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if ((iVar3 == 0) && (DAT_0071f404 != -1)) {
        STUB_00505f48();
        return 1;
      }
    }
    else if (g_LoadingStage == 6) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        DAT_0071f404 = -1;
        snprintf(acStack_160,"rc1/ps3data/level%d/sound.bnk",Level);
        FUN_004fe5c8(TEX_BASE,0x10);
        uVar2 = FUN_004fe5ec(TEX_BASE);
        uVar4 = LoadAssetFromFile(acStack_160,uVar2,0xffffffffffffffff);
        FUN_004fe6ec(TEX_BASE,uVar4);
        FUN_00505b30(uVar2,&PTR_sound_BasicCB_00707c38,&DAT_0071f404);
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 5) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        STUB_00505f48();
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 4) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        snd_UnloadBank(DAT_0071f404,1);
        DAT_0071f404 = 0;
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 3) {
      if (DAT_00964562 == 0) {
        FUN_0060c0d0();
        sVar1 = 6;
        if (DAT_0071f404 != 0) {
          sVar1 = g_LoadingStage + 1;
        }
      }
    }
    else if (g_LoadingStage == 2) {
      if (Cutscene == 0) {
        FUN_00503404(DAT_00964568,"gameplay_ntsc");
      }
      else {
        FUN_00503404(DAT_00964568,"gameplay_pal");
      }
      sVar1 = g_LoadingStage + 1;
    }
    else if (g_LoadingStage == 1) {
      if (DAT_00a204b0 == 2) {
        DAT_00a204b0 = 0;
      }
      idol::m_LoadGameFileS(DAT_0096456c,"space_ships");
      LoadAssetFromFile("rc1/ps3data/japan_font.ps3",&g_JapanFontTex,0x24);
      LoadAssetFromFile("rc1/ps3data/japan_font.vram",DAT_00a10930,0x80000);
      g_JapanFontTex = g_JapanFontTex + (DAT_00a10930 - *(int *)(g_viewMtxPtr + 0x4ac));
      sVar1 = g_LoadingStage + 1;
    }
    else if ((g_LoadingStage == 0) && (DAT_00a204b0 == 0)) {
      iVar3 = DAT_010ea644 * 0x800 + 0xfff;
      DAT_00964568 = 0x10000000 -
                     (iVar3 + ((uint)(ZERO_MASK(Cutscene)) &
                              (DAT_010ea63c * 0x800 + 0xfff) - iVar3) & 0xfffff000);
      DAT_0096456c = DAT_00964568 -
                     (*(int *)(&DAT_010ea10c + (iVar5 + 1) * 8) * 0x800 + 0xfffU & 0xfffff000);
      DAT_00964564 = DAT_0096456c - (DAT_010ea634 * 0x800 + 0xfffU & 0xfffff000);
      snprintf(acStack_120,"rc1/ps3data/level%d/engine.ps3",Level);
      snprintf(acStack_a0,"rc1/ps3data/level%d/vram.ps3",Level);
      DAT_00a204b0 = 1;
      LoadAssetAsync(&TEX_BASE,acStack_120,acStack_a0,&PTR_AdvanceLoadingStage_00705ad0);
      sVar1 = g_LoadingStage;
    }
  }
  else {
    DAT_009636c0 = DAT_009636c0 + 1;
  }
  g_LoadingStage = sVar1;
  return 0;
}


// 0x00df408 (0xc30 bytes)
// strings: 006524d4: 'internal level sound mismatch\n' | 006524f4: 'internal moby sound mismatch on moby %d\n' | 00652524: 'rc1/ps3data/global/spaceship%d.ps3' | 0065254c: 'rc1/ps3data/global/spaceship%d.vram'

int LoadAllMobys(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar8;
  int iVar9;
  undefined8 uVar7;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  byte bVar18;
  int iVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  MOBY_OCLASSES MVar23;
  uint uVar22;
  uint uVar24;
  MobyClass *pMVar25;
  short *psVar26;
  undefined2 *puVar27;
  int iVar28;
  short *psVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  char acStack_130 [64];
  char acStack_f0 [64];
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  piVar17 = g_EngineData;
  uVar5 = DAT_00a108ec;
  uVar21 = (ulonglong)DAT_00a108ec;
  local_b0 = param_1;
  local_a8 = param_2;
  if ((int)param_1 != 0) {
    FastMemCopy32(&DAT_00a202c0,g_LevelFlags + Level,0x10);
    DAT_00a1bfd8 = piVar17[0x1d] + (int)piVar17;
    iVar11 = (int)piVar17 + piVar17[1];
    IconTableEntry = (IconTableEntries *)((int)piVar17 + *(int *)(DAT_00a1bfd8 + 4));
    DAT_00a4dae0 = DAT_0071f404;
    TexturePointerArray = (int)piVar17 + *(int *)(DAT_00a1bfd8 + 8);
    TfragsCnt = (uint)*(ushort *)((int)DAT_00a15f74 + 6);
    OcclGrid = (void *)(iVar11 + ((uint)(ZERO_MASK(piVar17[1])) & -iVar11));
    piVar15 = (int *)((int)piVar17 + piVar17[5]);
    iVar11 = *piVar17;
    Tfrags = (Tfrag *)*DAT_00a15f74;
    if (*piVar15 != 0) {
      g_CollOutput.grid = (void *)((int)piVar15 + *piVar15);
    }
    if (piVar15[1] != 0) {
      g_HeroCollision = (HeroCollHeader *)((int)piVar15 + piVar15[1]);
      iVar28 = 0;
      if (0 < g_HeroCollision->cellCount) {
        iVar33 = 0;
        do {
          iVar28 = iVar28 + 1;
          *(int *)((int)&g_HeroCollision->cells[0].data + iVar33) =
               (int)g_HeroCollision->pad +
               *(int *)((int)&g_HeroCollision->cells[0].data + iVar33) + -4;
          iVar33 = iVar33 + 0x10;
        } while (iVar28 < g_HeroCollision->cellCount);
      }
    }
    iVar28 = 0;
    uVar24 = 0;
    piVar15 = (int *)((int)piVar17 + iVar11) + 1;
    iVar11 = *(int *)((int)piVar17 + iVar11);
    if (0 < iVar11) {
      do {
        iVar19 = oClass_to_mClass_lookup;
        iVar33 = *piVar15;
        iVar9 = piVar15[1] + (int)piVar17;
        pMVar25 = (MobyClass *)(iVar9 + ((uint)(ZERO_MASK(piVar15[1])) & -iVar9));
        iVar9 = oClass_to_mClass_lookup * 4;
        (&MobyClassLookup)[iVar33] = (char)oClass_to_mClass_lookup;
        MVar23 = (MOBY_OCLASSES)iVar33;
        (&mClass_to_oClass)[iVar19] = MVar23;
        MobyClasses[iVar19] = pMVar25;
        if (pMVar25 == (MobyClass *)0x0) {
          GetMobyFunction(MVar23);
          oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        }
        else {
          *(undefined4 *)(&MobyMipDists + iVar9) = *(undefined4 *)&pMVar25->bangles;
          GetMobyFunction(MVar23);
          oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
          LoadMobyModel(pMVar25,(void *)0x0,(char *)(piVar15 + 4),iVar33);
        }
        iVar28 = iVar28 + 1;
        piVar15 = piVar15 + 2;
      } while (iVar28 < iVar11);
    }
    iVar11 = 0;
    piVar15 = (int *)((int)piVar17 + piVar17[6]);
    if (MobyClasses[0]->seq_cnt != '\0') {
      iVar28 = 0;
      do {
        if (*piVar15 != 0) {
          *(int *)(&MobyClasses[0]->type + iVar28) = *piVar15 + (int)piVar17;
          iVar33 = *(int *)(&MobyClasses[0]->type + iVar28);
          if (*(int *)(iVar33 + 0x14) != 0) {
            *(int *)(iVar33 + 0x14) = iVar33 + *(int *)(iVar33 + 0x14);
          }
          iVar19 = 0;
          iVar9 = iVar33;
          if (*(char *)(iVar33 + 0x10) != '\0') {
            do {
              iVar19 = iVar19 + 1;
              *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + iVar33;
              iVar9 = iVar9 + 4;
            } while (iVar19 < (int)(uint)*(byte *)(iVar33 + 0x10));
          }
        }
        iVar11 = iVar11 + 1;
        piVar15 = piVar15 + 1;
        iVar28 = iVar28 + 4;
      } while (iVar11 < (int)(uint)MobyClasses[0]->seq_cnt);
    }
    g_gadgetIdx = 0xffffffff;
    DAT_00a4daec = 0;
    iVar11 = piVar17[0x14];
    puVar14 = (undefined4 *)((int)piVar17 + piVar17[0x13]);
    maximumNumWeapons = iVar11;
    if (0 < iVar11) {
      puVar12 = &DAT_00a4d540;
      piVar15 = &DAT_00a4d5a0;
      puVar20 = &DAT_00a4d600;
      do {
        iVar11 = iVar11 + -1;
        *puVar12 = *puVar14;
        iVar28 = puVar14[1];
        puVar12 = puVar12 + 1;
        *puVar20 = puVar14[2];
        puVar20 = puVar20 + 1;
        puVar14 = puVar14 + 4;
        *piVar15 = iVar28 + (int)piVar17;
        piVar15 = piVar15 + 1;
      } while (0 < iVar11);
    }
    if (piVar17[0x10] == 0) {
      g_byteGridStride = 0;
      g_byteGridData = (undefined4 *)0x0;
      DAT_00a2049c = 0;
      DAT_00a204a0 = 0;
      DAT_00a204a4 = DAT_00a204a0;
    }
    else {
      puVar14 = (undefined4 *)((int)piVar17 + piVar17[0x10]);
      g_byteGridData = puVar14 + 4;
      g_byteGridStride = *puVar14;
      DAT_00a204a0 = puVar14[2];
      DAT_00a2049c = puVar14[1];
      DAT_00a204a4 = puVar14[3];
    }
    iVar11 = (int)piVar17 + piVar17[2];
    piVar15 = (int *)((int)piVar17 + piVar17[0x1c]);
    OcclOct = (void *)(iVar11 + ((uint)(ZERO_MASK(piVar17[2])) & -iVar11));
    g_PartTexBaseIndex = piVar15[1];
    iVar11 = *piVar15;
    piVar16 = piVar15 + 4;
    iVar28 = piVar15[2];
    if (0 < iVar11) {
      piVar8 = &g_PartTexFrames;
      do {
        iVar33 = *piVar16;
        iVar11 = iVar11 + -1;
        piVar16 = piVar16 + 1;
        *piVar8 = (int)piVar15 + iVar33 + iVar28;
        piVar8 = piVar8 + 1;
      } while (0 < iVar11);
    }
    psVar26 = (short *)((int)piVar17 + piVar17[0x12]);
    g_pSoundDefs = uVar5;
    lVar30 = (longlong)(int)(((longlong)psVar26[1] & 0xffffffffU) << 5);
    g_TotalSoundDefCnt = (int)psVar26[1];
    FastMemCopy32(uVar21,(int)psVar26 + (int)*psVar26,lVar30);
    sVar2 = psVar26[2];
    iVar11 = 0;
    if (0 < g_TotalSoundDefCnt) {
      iVar28 = 0;
      do {
        sVar3 = *(short *)(g_pSoundDefs + iVar28 + 0x1a);
        if (sVar3 < psVar26[3]) {
          *(short *)(g_pSoundDefs + iVar28 + 0x1a) =
               (short)*(undefined4 *)((int)psVar26 + (int)((longlong)sVar3 << 2) + (int)sVar2);
        }
        else {
          printf("internal level sound mismatch\n");
          *(undefined2 *)(g_pSoundDefs + iVar28 + 0x1a) = 0xffff;
        }
        iVar11 = iVar11 + 1;
        iVar33 = g_pSoundDefs + iVar28;
        iVar28 = iVar28 + 0x20;
        bVar1 = iVar11 < g_TotalSoundDefCnt;
        *(undefined4 *)(iVar33 + 0x1c) = DAT_0071f404;
      } while (bVar1);
    }
    psVar29 = psVar26 + 4;
    iVar11 = 0;
    if (0 < oClass_to_mClass_lookup) {
      iVar28 = 0;
      uVar31 = ZEXT48(MobyClasses);
      puVar27 = &mClass_to_oClass;
      iVar33 = 0;
      do {
        iVar9 = *(int *)uVar31;
        if (iVar9 == 0) {
          iVar9 = 0;
          for (piVar17 = &DAT_00a4d540;
              (iVar9 < maximumNumWeapons &&
              (*piVar17 != (int)*(short *)((int)&mClass_to_oClass + iVar28))); piVar17 = piVar17 + 1
              ) {
            iVar9 = iVar9 + 1;
          }
          if (iVar9 < maximumNumWeapons) {
            local_a0 = uVar31;
            FastMemSet(&DAT_00a4d7e0 + iVar9 * 0x20,0xffffffffffffffff,0x20);
            puVar13 = (undefined2 *)(&DAT_00a4d7e0 + iVar9 * 0x20);
            puVar14 = (undefined4 *)((int)*psVar29 + (int)psVar26);
            for (iVar9 = 0; uVar31 = local_a0, iVar9 < psVar29[1] && iVar9 < 0xf; iVar9 = iVar9 + 1)
            {
              uVar10 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar13 = (short)uVar10;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          if (psVar29[1] != (ushort)*(byte *)(iVar9 + 0xd)) {
            printf("internal moby sound mismatch on moby %d\n",*puVar27);
            iVar9 = *(int *)uVar31;
          }
          iVar19 = 0;
          puVar14 = (undefined4 *)((int)*psVar29 + (int)psVar26);
          if (*(char *)(iVar9 + 0xd) != '\0') {
            iVar9 = 0;
            do {
              iVar19 = iVar19 + 1;
              uVar10 = *puVar14;
              puVar14 = puVar14 + 1;
              iVar4 = *(int *)(*(int *)((int)MobyClasses + iVar33) + 0x28);
              iVar6 = iVar4 + iVar9;
              iVar4 = iVar4 + iVar9;
              iVar9 = iVar9 + 0x20;
              *(undefined4 *)(iVar6 + 0x1c) = DAT_0071f404;
              *(short *)(iVar4 + 0x1a) = (short)uVar10;
            } while (iVar19 < (int)(uint)*(byte *)(*(int *)((int)MobyClasses + iVar33) + 0xd));
          }
        }
        iVar11 = iVar11 + 1;
        psVar29 = psVar29 + 2;
        puVar27 = puVar27 + 1;
        iVar28 = iVar28 + 2;
        uVar31 = uVar31 + 4;
        iVar33 = iVar33 + 4;
      } while (iVar11 < oClass_to_mClass_lookup);
    }
    uVar21 = uVar21 + lVar30 + 0x3f & 0xffffffc0;
    iVar11 = (int)((longlong)g_SpaceshipVariant << 2);
    iVar33 = *(int *)((int)OCLASSES_SPACESHIP + iVar11);
    iVar9 = *(int *)((int)OCLASSES_COCKPIT + iVar11);
    snprintf(acStack_130,"rc1/ps3data/global/spaceship%d.ps3",(longlong)g_SpaceshipVariant + 1
                  );
    snprintf(acStack_f0,"rc1/ps3data/global/spaceship%d.vram",(longlong)g_SpaceshipVariant + 1
                  );
    lVar30 = LoadAssetFromFile(acStack_130,uVar21,0xffffffffffffffff);
    iVar19 = oClass_to_mClass_lookup;
    piVar17 = (int *)uVar21;
    iVar11 = piVar17[2];
    iVar28 = piVar17[1];
    if ((&MobyClassLookup)[iVar33] == -1) {
      pMVar25 = (MobyClass *)((int)piVar17 + *piVar17);
      (&MobyClassLookup)[iVar33] = (char)oClass_to_mClass_lookup;
      MVar23 = (MOBY_OCLASSES)iVar33;
      (&mClass_to_oClass)[iVar19] = MVar23;
      MobyClasses[iVar19] = pMVar25;
      if (pMVar25 == (MobyClass *)0x0) {
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      }
      else {
        *(undefined4 *)(&MobyMipDists + iVar19 * 4) = *(undefined4 *)&pMVar25->bangles;
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        LoadMobyModel(pMVar25,(void *)0x0,(char *)0x0,iVar33);
      }
    }
    iVar19 = oClass_to_mClass_lookup;
    if ((&MobyClassLookup)[iVar9] == -1) {
      pMVar25 = (MobyClass *)((int)piVar17 + iVar28);
      iVar28 = oClass_to_mClass_lookup * 4;
      (&MobyClassLookup)[iVar9] = (char)oClass_to_mClass_lookup;
      MVar23 = (MOBY_OCLASSES)iVar9;
      (&mClass_to_oClass)[iVar19] = MVar23;
      MobyClasses[iVar19] = pMVar25;
      if (pMVar25 == (MobyClass *)0x0) {
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      }
      else {
        *(undefined4 *)(&MobyMipDists + iVar28) = *(undefined4 *)&pMVar25->bangles;
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        LoadMobyModel(pMVar25,(void *)0x0,(char *)0x0,iVar9);
      }
    }
    uVar21 = uVar21 + (longlong)iVar11;
    uVar31 = uVar21 & 0xffffffff;
    lVar32 = (lVar30 - iVar11) / 0x24;
    FUN_004fe5c8(DAT_00a15f50,0x80);
    uVar7 = FUN_004fe5f4(DAT_00a15f50,0x80);
    uVar10 = LoadAssetFromFile(acStack_f0,uVar7,0xffffffffffffffff);
    FUN_004fe6ec(DAT_00a15f50,uVar10);
    iVar11 = *(int *)(DAT_00902e9c + 0x4ac);
    if ((int)lVar32 != 0) {
      do {
        lVar32 = lVar32 + -1;
        *(int *)uVar31 = *(int *)uVar31 + ((int)uVar7 - iVar11);
        uVar31 = uVar31 + 0x24;
      } while (0 < (int)lVar32);
    }
    uVar22 = 0;
    piVar15 = *(int **)((int)MobyClasses[(byte)(&MobyClassLookup)[iVar33]]->packets + 8);
                    /* WARNING: Load size is inaccurate */
    uVar5 = *MobyClasses[(byte)(&MobyClassLookup)[iVar33]]->packets;
    iVar11 = (int)uVar21;
    if (uVar5 != 0) {
      do {
        *piVar15 = iVar11;
        if (*(char *)(piVar15 + 3) == '\0') {
          bVar18 = (byte)*(undefined4 *)(iVar11 + 8) & 3;
          *(byte *)(piVar15 + 3) = bVar18;
          *(byte *)(piVar15 + 3) = (byte)(*(uint *)(iVar11 + 8) >> 6) & 0xc | bVar18;
        }
        uVar22 = uVar22 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar22 < uVar5);
    }
    piVar15 = *(int **)((int)MobyClasses[(byte)(&MobyClassLookup)[iVar9]]->packets + 8);
                    /* WARNING: Load size is inaccurate */
    uVar5 = *MobyClasses[(byte)(&MobyClassLookup)[iVar9]]->packets;
    if (uVar5 != 0) {
      do {
        *piVar15 = iVar11 + 0x24;
        if (*(char *)(piVar15 + 3) == '\0') {
          bVar18 = (byte)*(undefined4 *)(iVar11 + 0x2c) & 3;
          *(byte *)(piVar15 + 3) = bVar18;
          *(byte *)(piVar15 + 3) = (byte)(*(uint *)(iVar11 + 0x2c) >> 6) & 0xc | bVar18;
        }
        uVar24 = uVar24 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar24 < uVar5);
    }
    Gameplay = (int)piVar17 + (int)lVar30 + 0x3f & 0xffffffc0;
  }
  uVar7 = local_a8;
  NAVG_LoadFile(local_b0);
  if ((int)uVar7 == 0) {
    ClearCheckpointData();
    puVar14 = &DAT_00a0fcd4;
    lVar30 = 2;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14 = puVar14 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  else {
    RestoreCheckpoint();
  }
  DAT_00a15c14 = 0;
  DAT_00a15c0c = 0;
  DAT_00a15c10 = 0;
  UpdateMobysInitial();
  worldUpdateTime = worldUpdateTime + 1;
  return 0;
}


// 0x00e0038 (0xd8 bytes)
// strings: 00652577: '9host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat' | 006525b0: 'host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat'


int LoadNpcMobys(int level_id,int scene_id)

{
  bool bVar1;
  undefined8 uVar2;
  char acStack_70 [88];
  
  STUB_00174cf4(1);
  STUB_00503078(0);
  if (Cutscene == 0) {
    snprintf(acStack_70,"host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat",level_id,scene_id
                  );
  }
  else {
    snprintf(acStack_70,"host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat",level_id,
                   scene_id);
  }
  uVar2 = FUN_00502dcc(acStack_70,0);
  bVar1 = -1 < (int)uVar2;
  if (bVar1) {
    STUB_00502ddc(uVar2);
  }
  return (int)bVar1;
}


// 0x00e0110 (0x8 bytes)
int LoadNpcSubtitles(void)

{
  return 1;
}


// 0x00e0118 (0x10c bytes)
// strings: 006525e4: 'rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3' | 00652614: 'rc1/ps3data/level%d/scene[%d]/chunk%d.ps3'


int PreLoadNpcChunk(int chunk_id)

{
  longlong lVar1;
  int iVar2;
  char acStack_50 [64];
  
  iVar2 = g_NpcBuffer + 0x80000;
  g_SceneLoadBuffer = iVar2;
  if (g_IsPal == 0) {
    snprintf(acStack_50,"rc1/ps3data/level%d/scene[%d]/chunk%d.ps3",Level,g_SceneId,
                   chunk_id);
  }
  else {
    snprintf(acStack_50,"rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3",Level,
                   g_SceneId,chunk_id);
  }
  lVar1 = GetFileSize(acStack_50);
  if (lVar1 != 0) {
    if (g_NpcChunkLoadHandle != 0) {
      FUN_005040f4();
    }
    g_NpcChunkLoadHandle = FUN_00503f8c(acStack_50,iVar2,0x80000);
  }
  return 1;
}


// 0x00e0230 (0x2f8 bytes)
// strings: 00652640: '\nnpc error: moby class %d is not on the level\n' | 00652670: '\nnpc error: moby class %d is a null moby or a hand gadget\n'


void ParseNpcChunk(void)

{
  u8 uVar1;
  int iVar2;
  MobyClass *pMVar3;
  undefined4 *puVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  if (g_NpcChunkLoadHandle != 0) {
    FUN_005040f4();
    g_NpcChunkLoadHandle = 0;
  }
  puVar9 = &DAT_0095cd50;
  FastMemCopy(g_NpcBuffer,g_SceneLoadBuffer,0x80000);
  puVar4 = g_NpcBuffer;
  piVar12 = g_NpcBuffer + 5;
  g_cutsceneCameraFrame = 0;
  iVar11 = (int)g_NpcBuffer + g_NpcBuffer[1];
  g_SpaceSceneNumFrames.piece<0,2>() = (undefined2)*g_NpcBuffer;
  g_SpaceSceneCameraFrames = (void *)((int)g_NpcBuffer + g_NpcBuffer[4]);
  g_SpaceSceneMobyCnt.piece<2,2>() = (undefined2)g_NpcBuffer[2];
  g_SpaceSceneMobyCnt.piece<0,2>() = (short)g_NpcBuffer[3];
  g_SubtitleTable =
       iVar11 + ((uint)((longlong)(int)g_NpcBuffer[1] + -0x400 >> 0x3f) & -iVar11);
  if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
    iVar11 = 0;
    do {
      iVar6 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar10 = (int *)(iVar6 + (int)puVar4);
      iVar6 = *piVar10;
      iVar2 = piVar10[3];
      if ((g_gameMode == GAME_MODE_SPACE) && (iVar11 == 0 && iVar6 == 0x215)) {
        iVar6 = *(int *)((int)OCLASSES_SPACESHIP + (int)((longlong)g_SpaceshipVariant << 2));
      }
      if ((&MobyClassLookup)[iVar6] == -1) {
        printf("\nnpc error: moby class %d is not on the level\n",iVar6);
      }
      else {
        pMVar5 = (MobyInstance *)puVar9[0x5e];
        if (pMVar5 == (MobyInstance *)0x0) {
          pMVar5 = CreateMoby((MOBY_OCLASSES)iVar6);
          pMVar3 = pMVar5->pClass;
          if (pMVar3 == (MobyClass *)0x0) {
            printf("\nnpc error: moby class %d is a null moby or a hand gadget\n",iVar6);
            goto LAB_000e04c0;
          }
          uVar1 = pMVar3->seq_cnt;
          pMVar3->seq_cnt = uVar1 + '\x01';
          pMVar5->updateId = uVar1;
          pMVar5->animationId = uVar1;
          pMVar5->drawDistance = 0x1ff;
          pMVar5->field45_0x72 = -1;
          pMVar5->collision = (ushort *)0x0;
          pMVar5->modeBits = pMVar5->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          uVar7 = 0x38383800000000;
          if (g_heroMobyPtr != (MobyInstance *)0x0) {
            uVar7.piece<0,4>() = g_heroMobyPtr->color;
            uVar7.piece<4,4>() = g_heroMobyPtr->light;
          }
          pMVar5->color = (int)((ulonglong)uVar7 >> 0x20);
          pMVar5->light = (int)uVar7;
          puVar9[0x5e] = pMVar5;
        }
        pMVar5->pVar = (void *)(iVar2 + (int)puVar4);
        *(int **)(&pMVar5->pClass->type + (uint)pMVar5->updateId * 4) = piVar10 + 4;
        if (*(char *)(piVar10 + 8) != '\0') {
          iVar6 = 0;
          piVar8 = piVar10;
          do {
            iVar6 = iVar6 + 1;
            piVar8[0xb] = piVar8[0xb] + (int)(piVar10 + 4);
            piVar8 = piVar8 + 1;
          } while (iVar6 < (int)(uint)*(byte *)(piVar10 + 8));
        }
      }
LAB_000e04c0:
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar11 < g_SpaceSceneMobyCnt.piece<0,2>());
  }
  return;
}


// 0x00e0528 (0x12c bytes)
// strings: 006526ac: 'rc1/ps3data/global/weapon%d_pal.ps3' | 006526d4: 'rc1/ps3data/global/weapon%d.ps3' | 006526f4: 'weapon_scenes_pal'


void LoadWeaponCutscene(int weapon)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_50 [64];
  
  FadeToBlack(4);
  if (Cutscene == 0) {
    if (g_IsPal == 0) {
      snprintf(acStack_50,"rc1/ps3data/global/weapon%d.ps3",weapon);
    }
    else {
      snprintf(acStack_50,"rc1/ps3data/global/weapon%d_pal.ps3",weapon);
    }
    LoadAssetFromFile(acStack_50,g_SceneLoadBuffer,0xffffffffffffffff);
  }
  else {
    idol::PRINT_m_LoadGameFile((uint)g_SceneLoadBuffer,"weapon_scenes_pal");
  }
  LoadMusic2(0);
  LoadMusic2(1);
  iVar3 = 0;
  piVar2 = &g_SceneChunkPtrs;
  piVar4 = g_SceneLoadBuffer;
  do {
    if (piVar4[1] == 0) {
      return;
    }
    iVar3 = iVar3 + 1;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 2;
    *piVar2 = (int)g_SceneLoadBuffer + iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x46);
  return;
}


// 0x00e0654 (0x5c bytes)
void ParseWeaponSceneChunk(int chunk_id)

{
  g_SceneLoadBuffer = *(undefined4 *)((int)&g_SceneChunkPtrs + (int)((longlong)chunk_id << 2));
  ParseNpcChunk();
  g_SceneLoadBuffer = g_NpcBuffer + 0x40000;
  return;
}


// 0x00e06b0 (0x148 bytes)
// strings: 00652708: 'rc1/ps3data/global/space%d_pal.ps3' | 00652730: 'rc1/ps3data/global/space%d.ps3' | 00652750: 'space_scenes_pal'


void LoadSpaceScene(int scene,int fade)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_60 [72];
  
  if (fade != 0) {
    FadeToBlack(fade);
  }
  if (Cutscene == 0) {
    if (g_IsPal == 0) {
      snprintf(acStack_60,"rc1/ps3data/global/space%d.ps3",scene);
    }
    else {
      snprintf(acStack_60,"rc1/ps3data/global/space%d_pal.ps3",scene);
    }
    LoadAssetFromFile(acStack_60,g_SceneLoadBuffer,0xffffffffffffffff);
  }
  else {
    idol::PRINT_m_LoadGameFile((uint)g_SceneLoadBuffer,"space_scenes_pal");
  }
  if (fade != 0) {
    LoadMusic2(0);
  }
  LoadMusic2(1);
  iVar3 = 0;
  piVar2 = &g_SceneChunkPtrs;
  piVar4 = g_SceneLoadBuffer;
  do {
    if (piVar4[1] == 0) {
      return;
    }
    iVar1 = *piVar4;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
    *piVar2 = (int)g_SceneLoadBuffer + iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x46);
  return;
}


// 0x00e07f8 (0x5c bytes)
void ParseSpaceSceneChunk(int chunk_id)

{
  g_SceneLoadBuffer = *(undefined4 *)((int)&g_SceneChunkPtrs + (int)((longlong)chunk_id << 2));
  ParseNpcChunk();
  g_SceneLoadBuffer = g_NpcBuffer + 0x40000;
  return;
}


// 0x00e0854 (0x1d8 bytes)
void LoadGadgetModel(int oClass,int t_target)

{
  byte bVar1;
  void *pvVar2;
  ulonglong uVar3;
  MobyClass *pClass;
  undefined4 uVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  if ((g_gadgetIdx < 0) || ((&DAT_00a4d540)[g_gadgetIdx] != oClass)) {
    g_gadgetIdx = 0;
    if (0 < maximumNumWeapons) {
      piVar5 = &DAT_00a4d540;
      do {
        if (*piVar5 == oClass) break;
        g_gadgetIdx = g_gadgetIdx + 1;
        piVar5 = piVar5 + 1;
      } while (g_gadgetIdx < maximumNumWeapons);
    }
    if (t_target == -1) {
      t_target = (DAT_00a4daec == 0);
    }
    uVar3 = (ulonglong)(LZCOUNT(t_target) << 0x20) >> 0x25;
    DAT_00a4daec = (t_target == 0);
    pClass = (MobyClass *)(DAT_00a108e8 + ((int)(uVar3 << 0x12) - (int)(uVar3 << 0x10)));
    bVar1 = (&MobyClassLookup)[oClass];
    memcpy(pClass,(void *)(&DAT_00a4d5a0)[g_gadgetIdx],(&DAT_00a4d600)[g_gadgetIdx]);
    MobyClasses[bVar1] = pClass;
    LoadMobyModel(pClass,(void *)0x0,(char *)0x0,oClass);
    iVar7 = 0;
    iVar8 = 0;
    puVar6 = &DAT_00a4d7e0;
    do {
      uVar4 = DAT_00a4dae0;
      if (-1 < *(short *)(puVar6 + g_gadgetIdx * 0x20)) {
        pvVar2 = MobyClasses[bVar1]->SoundDefs;
        *(short *)((int)pvVar2 + iVar7 + 0x1a) = *(short *)(puVar6 + g_gadgetIdx * 0x20);
        *(undefined4 *)((int)pvVar2 + iVar7 + 0x1c) = uVar4;
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 2;
      iVar7 = iVar7 + 0x20;
    } while (iVar8 < 0x10);
  }
  return;
}


// 0x00e0a2c (0x170 bytes)
longlong QueuePifLoad(void *pPif)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  
  uVar3 = FastLog2(*(undefined4 *)((int)pPif + 8));
  uVar4 = FastLog2(*(undefined4 *)((int)pPif + 0xc));
  iVar2 = g_GsRamAlloc;
  iVar6 = (int)uVar3 + -6;
  iVar7 = g_GsRamAlloc + 0x400;
  iVar1 = g_GsRamAlloc >> 8;
  g_GsRamAlloc = iVar7 + (1 << ((int)uVar3 + (int)uVar4 & 0x3fU));
  lVar5 = STUB_00502fbc_RET_0
                    (iVar7 >> 8,1 << (iVar6 + (iVar6 >> 0x1f & -iVar6) & 0x3fU),0x13,uVar3,uVar4,1,0
                     ,iVar1);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar1 = g_PifLoadQueueCnt * 0x10;
    *(int *)(&g_PifLoadQueue + iVar1) = (int)pPif + 0x20;
    *(undefined2 *)(&DAT_0095d2d0 + iVar1) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar1) = (short)((uint)iVar2 >> 8);
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(int *)(&DAT_0095d2d4 + iVar1) = (int)pPif + 0x420;
    (&DAT_0095d2d8)[iVar1] = (char)uVar3;
    (&DAT_0095d2d9)[iVar1] = (char)uVar4;
    *(short *)(&DAT_0095d2da + iVar1) = (short)((uint)iVar7 >> 8);
  }
  return lVar5;
}


// 0x00e0b9c (0x148 bytes)
longlong QueuePifLoad(int log_w,int log_h,char *tex,char *pal)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = g_GsRamAlloc;
  iVar4 = log_w + -6;
  iVar5 = g_GsRamAlloc + 0x400;
  iVar1 = g_GsRamAlloc >> 8;
  g_GsRamAlloc = iVar5 + (1 << (log_w + log_h & 0x3fU));
  lVar3 = STUB_00502fbc_RET_0
                    (iVar5 >> 8,1 << (iVar4 + (iVar4 >> 0x1f & -iVar4) & 0x3fU),0x13,log_w,log_h,1,0
                     ,iVar1);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar1 = g_PifLoadQueueCnt * 0x10;
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(char **)(&g_PifLoadQueue + iVar1) = tex;
    *(undefined2 *)(&DAT_0095d2d0 + iVar1) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar1) = (short)((uint)iVar2 >> 8);
    *(char **)(&DAT_0095d2d4 + iVar1) = pal;
    (&DAT_0095d2d8)[iVar1] = (char)log_w;
    (&DAT_0095d2d9)[iVar1] = (char)log_h;
    *(short *)(&DAT_0095d2da + iVar1) = (short)((uint)iVar5 >> 8);
  }
  return lVar3;
}


// 0x00e0ce4 (0x12c bytes)
longlong QueuePifLoad(int log_w,int log_h,char *tex,char *pal,int tex_addr,int pal_addr)

{
  int iVar2;
  longlong lVar1;
  
  iVar2 = log_w + -6;
  lVar1 = STUB_00502fbc_RET_0
                    (pal_addr >> 8,1 << (iVar2 + (iVar2 >> 0x1f & -iVar2) & 0x3fU),0x13,log_w,log_h,
                     1,0,tex_addr >> 8);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar2 = g_PifLoadQueueCnt * 0x10;
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(char **)(&g_PifLoadQueue + iVar2) = tex;
    *(undefined2 *)(&DAT_0095d2d0 + iVar2) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar2) = (short)((uint)tex_addr >> 8);
    *(char **)(&DAT_0095d2d4 + iVar2) = pal;
    (&DAT_0095d2d8)[iVar2] = (char)log_w;
    (&DAT_0095d2d9)[iVar2] = (char)log_h;
    *(short *)(&DAT_0095d2da + iVar2) = (short)((uint)pal_addr >> 8);
  }
  return lVar1;
}


// 0x00e0e10 (0x4 bytes)
void STUB_000e0e10(...)

{
  return;
}


