// game/update/moby1672.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2aaf9c-0x2ab150
#include "game/update/moby1672.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x02aaf9c (0x14 bytes)
void M1672_002aaf9c(void)

{
  DAT_007b712c = 0x10000;
  return;
}


// 0x02aafb0 (0x4 bytes)
/* Moby 1672 */

MobyInstance * UpdateMoby_1672(MobyInstance *moby)

{
  return moby;
}


// 0x02aafb4 (0x14 bytes)
void M1672_002aafb4(void)

{
  DAT_007b719c = 0x10000;
  return;
}


// 0x02aafc8 (0x188 bytes)
undefined8
M1672_002aafc8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,MobyInstance *param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong unaff_r26;
  int iVar4;
  ulonglong unaff_r27;
  longlong lVar5;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar6;
  ulonglong in_f24;
  double dVar7;
  ulonglong in_f25;
  double dVar8;
  ulonglong in_f26;
  double dVar9;
  ulonglong in_f27;
  double dVar10;
  ulonglong in_f28;
  double dVar11;
  ulonglong in_f29;
  double dVar12;
  ulonglong in_f30;
  double dVar13;
  ulonglong in_f31;
  double dVar14;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  
  uVar2 = ZEXT48(&stack0x00000000);
  lVar5 = uVar2 - 0x120;
  puVar1 = (ulonglong *)lVar5;
  *puVar1 = uVar2;
  puVar1[0x26] = in_LR;
  puVar1[0x1c] = in_f24;
  puVar1[0x1d] = in_f25;
  puVar1[0x1e] = in_f26;
  puVar1[0x1f] = in_f27;
  puVar1[0x20] = in_f28;
  puVar1[0x21] = in_f29;
  puVar1[0x22] = in_f30;
  puVar1[0x23] = in_f31;
  puVar1[0x1a] = unaff_r30;
  puVar1[0x16] = unaff_r26;
  iVar4 = 0;
  puVar1[0x1b] = unaff_r31;
  puVar1[0x19] = unaff_r29;
  puVar1[0x18] = unaff_r28;
  puVar1[0x17] = unaff_r27;
  *(undefined4 *)(puVar1 + 0x12) = 0xbdcccccd;
  *(undefined4 *)((int)puVar1 + 0x94) = 0xbdcccccd;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined4 *)((int)puVar1 + 0x9c) = 0x3dcccccd;
  *(undefined4 *)(puVar1 + 0x14) = 0x3dcccccd;
  fStack00000034 = (float)param_1;
  dVar8 = (double)fStack00000034;
  fStack0000003c = (float)param_2;
  dVar10 = (double)fStack0000003c;
  fStack00000044 = (float)param_3;
  dVar12 = (double)fStack00000044;
  fStack0000004c = (float)param_4;
  dVar14 = (double)fStack0000004c;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  dVar7 = (double)fStack00000030;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  dVar9 = (double)fStack00000038;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar11 = (double)fStack00000040;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  dVar13 = (double)fStack00000048;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  while( true ) {
    dVar6 = (double)*(float *)((int)lVar5 + 0x90);
    *(float *)(puVar1 + 0xe) = (float)dVar7;
    *(float *)((int)puVar1 + 0x74) = (float)dVar8;
    *(float *)((int)puVar1 + 0x7c) = (float)dVar10;
    *(float *)(puVar1 + 0x10) = (float)dVar11;
    *(float *)((int)puVar1 + 0x84) = (float)dVar12;
    *(float *)((int)puVar1 + 0x8c) = (float)dVar14;
    *(float *)(puVar1 + 0xf) = (float)(dVar9 + dVar6);
    *(float *)(puVar1 + 0x11) = (float)(dVar13 + dVar6);
    iVar3 = CollLine(uVar2 - 0xb0,uVar2 - 0xa0,param_5,param_6,0);
    if (iVar3 != 0) break;
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 4;
    if (4 < iVar4) {
      return 1;
    }
  }
  if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && (g_CollOutput.pMoby == param_7)) {
    return 1;
  }
  return 0;
}


