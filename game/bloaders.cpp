// game/bloaders.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 13 functions, 0x4efe4-0x4fee8
#include <stdio.h>
#include "game/bloaders.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/loaders.h"
#include "game/music.h"
#include "game/rUnk.h"
#include "game/sound.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/sound.h"
#include "sdk/mUnk4.h"

// 0x004efe4 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e938 = 0x10000;
  return;
}


// 0x004eff8 (0x24 bytes)
void GsTex_Init(void)

{
  DAT_009513a0 = 0;
  g_GsRamAlloc = GSmem.base;
  return;
}


// 0x004f01c (0x48 bytes)
void GsTex_ResetAll(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  g_GsRamAlloc = GSmem.base;
  if (0 < DAT_009513a0) {
    puVar2 = &DAT_00931408;
    iVar1 = DAT_009513a0;
    do {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 0x10;
    } while (0 < iVar1);
  }
  return;
}


// 0x004f064 (0x290 bytes)
int GsTex_Register(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  FastMemSet(&DAT_009313a0 + DAT_009513a0 * 0x80,0,0x80);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = DAT_009513a0 * 0x80;
  *(int *)(&DAT_009313fc + iVar6) = iVar5;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(&DAT_00931400 + iVar6) = iVar1;
  *(undefined4 *)(&DAT_00931404 + iVar6) = *(undefined4 *)(param_1 + 0x1c);
  if (iVar5 == 0x27) {
LAB_0004f104:
    *(int *)(&DAT_009313a0 + iVar6) = param_1 + 0x20;
    iVar8 = ((uint)(ZERO_MASK((0x12 - iVar1))) & 0x200) + 0x200;
    *(uint *)(&DAT_009313b4 + iVar6) =
         iVar8 + ((uint)(ZERO_MASK((0x27 - iVar5))) &
                 (((uint)(ZERO_MASK((0x12 - iVar1))) & 0x20) + 0x20) - iVar8);
  }
  else {
    if (iVar5 != 0x26) {
      if (iVar5 == 0x13) goto LAB_0004f104;
      if (iVar5 != 0x12) goto LAB_0004f180;
    }
    *(undefined4 *)(&DAT_009313a0 + iVar6) = 0;
    *(undefined4 *)(&DAT_009313b4 + iVar6) = 0;
  }
LAB_0004f180:
  uVar3 = FastLog2(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(&DAT_009313ec + DAT_009513a0 * 0x80) = uVar3;
  uVar3 = FastLog2(*(undefined4 *)(param_1 + 0xc));
  iVar1 = DAT_009513a0 * 0x80;
  *(undefined4 *)(&DAT_009313f0 + iVar1) = uVar3;
  iVar5 = *(int *)(param_1 + 0x10);
  *(int *)(&DAT_009313a4 + iVar1) = param_1 + *(int *)(&DAT_009313b4 + iVar1) + 0x20;
  if (iVar5 == 0x27) {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8 >> 1;
  }
  else if (iVar5 == 0x26) {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8 * 2;
  }
  else if (iVar5 == 0x13) {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8;
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    if (iVar5 == 0x12) {
      *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8 * 4;
    }
  }
  *(int *)(&DAT_009313f4 + iVar1) = iVar6;
  iVar5 = 1;
  *(int *)(&DAT_009313f8 + iVar1) = iVar8;
  if (1 < *(int *)(&DAT_00931404 + iVar1)) {
    piVar9 = (int *)(&DAT_009313a0 + iVar1);
    piVar7 = (int *)(&DAT_009313bc + iVar1);
    piVar4 = (int *)(&DAT_009313b8 + iVar1);
    piVar10 = (int *)(&DAT_009313a8 + iVar1);
    do {
      piVar9 = piVar9 + 1;
      iVar6 = *piVar9;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(&DAT_00931404 + iVar1);
      *piVar7 = *piVar4 >> 2;
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
      *piVar10 = iVar6 + iVar2;
      piVar10 = piVar10 + 1;
    } while (iVar5 < iVar8);
  }
  iVar5 = DAT_009513a0;
  DAT_009513a0 = DAT_009513a0 + 1;
  return iVar5;
}


// 0x004f2f4 (0x250 bytes)
void GsTex_BuildUploadPacket
               (undefined1 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               ulonglong param_5,longlong param_6,uint param_7)

{
  undefined1 *puVar1;
  undefined1 uVar3;
  undefined8 uVar2;
  int iVar4;
  
  *DAT_00e5aa58 = 6;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar3 = FUN_0050300c(6,0);
  iVar4 = ((int)param_7 >> 4) + (uint)((int)param_7 < 0 && (param_7 & 0xf) != 0);
  DAT_00e5aa58[3] = uVar3;
  puVar1 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar2 = FUN_00502ea0(1,1,0,0,0,4);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = 0xeeeeeee;
  uVar2 = FUN_00503044(0,0,0,param_2,param_3,param_4);
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = 5;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0x20;
  *(undefined8 *)(puVar1 + 0x38) = 0x1f;
  *(ulonglong *)(puVar1 + 0x40) = param_5 | param_6 << 0x20;
  *(undefined8 *)(puVar1 + 0x58) = 0x1e;
  uVar2 = FUN_00502ea0(iVar4,0,0,0,2,0);
  DAT_00e5aa58 = puVar1 + 0x70;
  *(undefined8 *)(puVar1 + 0x60) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = 0;
  puVar1[0x70] = (char)iVar4;
  DAT_00e5aa58[1] = param_1;
  DAT_00e5aa58[2] = 0;
  uVar3 = FUN_0050300c(iVar4,0);
  DAT_00e5aa58[3] = uVar3;
  puVar1 = DAT_00e5aa58 + 0x10;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  *puVar1 = 2;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar3 = FUN_0050300c(2,0);
  DAT_00e5aa58[3] = uVar3;
  puVar1 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar2 = FUN_00502ea0(1,1,0,0,0,1);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0xe;
  *(undefined8 *)(puVar1 + 0x28) = 0x1d;
  DAT_00e5aa58 = puVar1 + 0x30;
  return;
}


// 0x004f544 (0x2fc bytes)
void GsTex_Upload(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  iVar5 = (int)(param_1 << 7);
  if (*(longlong *)((int)&DAT_00931408 + iVar5) == 0) {
    iVar1 = *(int *)(&DAT_009313fc + iVar5);
    if ((iVar1 == 0x27) || (iVar1 == 0x13)) {
      iVar3 = g_GsRamAlloc >> 8;
      *(int *)(&DAT_009313c8 + iVar5) = iVar3;
      if (iVar1 == 0x27) {
        g_GsRamAlloc = g_GsRamAlloc + 0x100;
        GsTex_BuildUploadPacket
                  (*(undefined4 *)(&DAT_009313a0 + iVar5),iVar3,1,
                   *(undefined4 *)(&DAT_00931400 + iVar5),8,2,*(undefined4 *)(&DAT_009313b4 + iVar5)
                  );
      }
      else {
        g_GsRamAlloc = g_GsRamAlloc + *(int *)(&DAT_009313b4 + iVar5);
        GsTex_BuildUploadPacket
                  (*(undefined4 *)(&DAT_009313a0 + iVar5),iVar3,1,
                   *(undefined4 *)(&DAT_00931400 + iVar5),0x10,0x10,*(int *)(&DAT_009313b4 + iVar5))
        ;
      }
    }
    uVar7 = 0;
    if (0 < *(int *)(&DAT_00931404 + iVar5)) {
      puVar10 = (undefined4 *)(&DAT_009313a0 + iVar5);
      uVar8 = 0;
      piVar9 = (int *)(&DAT_009313cc + iVar5);
      piVar12 = (int *)(&DAT_009313dc + iVar5);
      puVar11 = (undefined4 *)(&DAT_009313b8 + iVar5);
      do {
        puVar10 = puVar10 + 1;
        iVar1 = *(int *)(&DAT_009313f4 + iVar5);
        iVar3 = iVar1 >> (uVar7 + 6 & 0x3f);
        *piVar12 = iVar3 + ((uint)((longlong)iVar3 + -1 >> 0x3f) & 1U - iVar3);
        uVar2 = *puVar10;
        iVar4 = g_GsRamAlloc >> 8;
        iVar3 = *(int *)(&DAT_009313f8 + iVar5);
        *piVar9 = iVar4;
        GsTex_BuildUploadPacket
                  (uVar2,iVar4,*piVar12,*(undefined4 *)(&DAT_009313fc + iVar5),
                   iVar1 >> (uVar7 & 0x3f),iVar3 >> (uVar7 & 0x3f),*puVar11);
        iVar1 = *(int *)(&DAT_009313b8 + iVar5) >> (uVar8 & 0x3f);
        uVar7 = uVar7 + 1;
        piVar12 = piVar12 + 1;
        piVar9 = piVar9 + 1;
        g_GsRamAlloc = g_GsRamAlloc +
                       iVar1 + ((uint)((longlong)iVar1 + -0x100 >> 0x3f) & 0x100U - iVar1);
        puVar11 = puVar11 + 1;
        uVar8 = uVar8 + 2;
      } while ((int)uVar7 < *(int *)(&DAT_00931404 + iVar5));
    }
    g_GsRamAlloc = g_GsRamAlloc + 0x800;
    uVar6 = STUB_00502fbc_RET_0
                      (*(undefined4 *)(&DAT_009313cc + iVar5),*(undefined4 *)(&DAT_009313dc + iVar5)
                       ,*(undefined4 *)(&DAT_009313fc + iVar5),
                       *(undefined4 *)(&DAT_009313ec + iVar5),*(undefined4 *)(&DAT_009313f0 + iVar5)
                       ,1,0,*(undefined4 *)(&DAT_009313c8 + iVar5));
    *(undefined8 *)((int)&DAT_00931408 + iVar5) = uVar6;
    uVar6 = STUB_00502fd4_RET_0(0,*(int *)(&DAT_00931404 + iVar5) + -1,1,3,0,0,0xffa0);
    *(undefined8 *)(&DAT_00931410 + iVar5) = uVar6;
    uVar6 = STUB_00502f6c(*(undefined4 *)(&DAT_009313d0 + iVar5),
                                *(undefined4 *)(&DAT_009313e0 + iVar5),
                                *(undefined4 *)(&DAT_009313d4 + iVar5),
                                *(undefined4 *)(&DAT_009313e4 + iVar5),
                                *(undefined4 *)(&DAT_009313d8 + iVar5),
                                *(undefined4 *)(&DAT_009313e8 + iVar5));
    *(undefined8 *)(&DAT_00931418 + iVar5) = uVar6;
  }
  return;
}


// 0x004f840 (0x268 bytes)
void GsTex_Bind(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                        int param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar10;
  undefined8 uVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar3 = (int)(param_1 << 7);
  iVar11 = (int)(param_4 + param_2) * 0x10 + SCREEN_PROJECTION_MAP_X + -8;
  iVar12 = (int)((param_3 & 0xffffffff) << 4) + SCREEN_PROJECTION_MAP_Y + -8;
  iVar1 = *(int *)(&DAT_009313f4 + iVar3);
  iVar14 = (int)((param_2 & 0xffffffff) << 4) + SCREEN_PROJECTION_MAP_X + -8;
  iVar2 = *(int *)(&DAT_009313f8 + iVar3);
  iVar13 = (param_5 + (int)param_3) * 0x10 + SCREEN_PROJECTION_MAP_Y + -8;
  GsTex_Upload();
  *DAT_00e5aa58 = 7;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar10 = FUN_0050300c(7,0);
  DAT_00e5aa58[3] = uVar10;
  uVar8 = uRam0071e968;
  uVar7 = DAT_0071e960.piece<4,4>();
  uVar6 = DAT_0071e960.piece<0,4>();
  puVar4 = (undefined4 *)((uint)(DAT_00e5aa58 + 0x10) & 0xfffffff0);
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  puVar4[3] = uRam0071e96c;
  puVar4[2] = uVar8;
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  puVar5 = DAT_00e5aa58;
  *(undefined8 *)(DAT_00e5aa58 + 0x10) = *(undefined8 *)((int)&DAT_00931408 + iVar3);
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar9 = FUN_00502e70(0x11,0,1,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = param_6;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  uVar9 = FUN_00502fec(iVar14,iVar12,0xfffff0);
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(longlong *)(puVar5 + 0x38) = (longlong)(iVar1 * 0x10);
  uVar9 = FUN_00502fec(iVar11,iVar12,0xfffff0);
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  *(longlong *)(puVar5 + 0x48) = (longlong)(iVar2 * 0x100000);
  uVar9 = FUN_00502fec(iVar14,iVar13,0xfffff0);
  *(undefined8 *)(puVar5 + 0x50) = uVar9;
  *(longlong *)(puVar5 + 0x58) = (longlong)(iVar2 * 0x100000 + iVar1 * 0x10);
  uVar9 = FUN_00502fec(iVar11,iVar13,0xfffff0);
  *(undefined8 *)(puVar5 + 0x60) = uVar9;
  *(undefined8 *)(puVar5 + 0x68) = 0;
  puVar5 = DAT_00e5aa58 + 0x60;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x60;
  *puVar5 = 0;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}


// 0x004faa8 (0x4c bytes)
void GsTex_BindWrapper(void)

{
  GsTex_Bind();
  return;
}


// 0x004faf4 (0x54 bytes)
void GsTex_StaticInit(void)

{
  DAT_0071e9bc = 0x10000;
  DAT_0071e960 = FUN_00502ea0(1,1,0,0,1,0xb);
  return;
}


// 0x004fb48 (0x8 bytes)
undefined8 ____ReturnTrue_GameStart(void)

{
  return 1;
}


// 0x004fb50 (0x270 bytes)
void LoadPifAsPSMT8H(int pPif,undefined8 *gsRegs,int tex_loc,int pal_loc)

{
  int iVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar2;
  longlong lVar5;
  GPiece<4> auStack_80;
  GPiece<84> local_7c;
  
  FastMemSet(local_7c,0,0x54);
  iVar1 = *(int *)(pPif + 0x14);
  uVar3 = FastLog2(*(undefined4 *)(pPif + 8));
  uVar4 = FastLog2(*(undefined4 *)(pPif + 0xc));
  sceGsSetDefLoadImage(auStack_80,pal_loc >> 8,1,*(undefined4 *)(pPif + 0x14),0,0,0x10,0x10);
  FlushCache(0);
  sceGsExecLoadImage(auStack_80,pPif + 0x20);
  sceGsSyncPath(0,0);
  lVar5 = (longlong)(*(int *)(pPif + 8) >> 6);
  lVar5 = lVar5 + (lVar5 + -1 >> 0x3f & 1U - lVar5);
  sceGsSetDefLoadImage
            (auStack_80,tex_loc >> 8,lVar5,0x14,0,0,*(int *)(pPif + 8),*(undefined4 *)(pPif + 0xc));
  FlushCache(0);
  sceGsExecLoadImage
            (auStack_80,pPif + ((uint)(ZERO_MASK((0x12 - iVar1))) & 0x200) + 0x220);
  sceGsSyncPath(0,0);
  uVar2 = STUB_00502fbc_RET_0(tex_loc >> 8,(int)lVar5,0x14,uVar3,uVar4,1,0,pal_loc >> 8);
  *gsRegs = uVar2;
  uVar2 = STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  gsRegs[1] = uVar2;
  uVar2 = STUB_00502f6c(0,0,0,0,0,0);
  gsRegs[2] = uVar2;
  return;
}


// 0x004fdc0 (0x78 bytes)
// strings: 00651a84: 'debugfont'

void LoadDebugFont(void)

{
  undefined8 regs [3];
  
  idol::m_LoadGameFileB(&DAT_00a2c5c0,"debugfont");
  LoadPifAsPSMT8H(&DAT_00a2c5c0,regs,GSmem.zbuf + 0xc0000,0x3ffc00);
  DebugFontTex0 = regs[0];
  return;
}


// 0x004fe38 (0xb0 bytes)
// strings: 00651a90: 'unloaded sound bank %#010x\n'

void UnloadSoundBanks(void)

{
  FlushCache(0);
  STUB_00505f4c();
  STUB_00505d20();
  sound_StopAllSounds();
  music_Stop();
  FUN_00506664(0);
  STUB_001754e0();
  if (g_pSoundDefs != 0) {
    snd_UnloadBank(*(undefined4 *)(g_pSoundDefs + 0x1c),1);
    STUB_00505f48();
    printf("unloaded sound bank %#010x\n",*(undefined4 *)(g_pSoundDefs + 0x1c));
  }
  STUB_00503078(0);
  return;
}


