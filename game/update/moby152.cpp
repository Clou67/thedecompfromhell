// game/update/moby152.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x291970-0x2921cc
#include "game/update/moby152.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1516.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x0291970 (0x85c bytes)
/* Moby 152 */

void UpdateMoby_152(MobyInstance *moby)

{
  double dVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
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
  double dVar24;
  double dVar25;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  GPiece<16> local_a0;
  GPiece<40> local_90;
  
  pvVar7 = moby->pVar;
  pvVar8 = moby->pVar;
  dVar25 = (double)(moby->pos).x;
  dVar24 = (double)(moby->pos).y;
  fVar5 = (moby->pos).z;
  dVar22 = (double)(moby->pos).w;
  *(int *)((int)pvVar7 + 0x28) = *(int *)((int)pvVar7 + 0x28) + 1;
  uVar4 = moby->state;
  if (uVar4 != '\0') {
    fVar5 = *(float *)((int)pvVar7 + 8);
    (moby->pos).z = fVar5;
  }
  dVar23 = (double)fVar5;
  if (uVar4 == '\x04') {
    if (*(int *)((int)pvVar7 + 0x24) != 0) {
      *(undefined2 *)(*(int *)((int)pvVar7 + 0x24) + 10) = 0;
    }
    DeleteMoby(moby);
    return;
  }
  if (uVar4 != '\x03') {
    if (uVar4 != '\x02') {
      if (uVar4 != '\x01') {
        if (uVar4 == '\0') {
          (moby->rotation).x = 0.0;
          (moby->rotation).z = 0.0;
          (moby->rotation).y = 0.5235988;
          dVar22 = (double)MB_randRangeFloat(DAT_007ab460,DAT_007ab464);
          *(float *)((int)pvVar8 + 0xc) = (float)dVar22;
          *(undefined4 *)((int)pvVar8 + 0x28) = 0;
          *(f32 *)((int)pvVar8 + 8) = (moby->pos).z;
          MB_CopyHeroLights(moby);
          uVar10 = SpawnPart_39(moby);
          *(undefined4 *)((int)pvVar8 + 0x24) = uVar10;
          moby->state = ((byte)(ZERO_MASK(*(int *)((int)pvVar7 + 0x2c))) & 1) + 1;
        }
        goto LAB_002920bc;
      }
      dVar14 = (double)*(float *)((int)pvVar7 + 0x14);
      dVar19 = (double)*(float *)((int)pvVar7 + 0x10);
      dVar16 = -(double)(DAT_0071f418 * 9.8 - *(float *)((int)pvVar7 + 0x18));
      *(float *)((int)pvVar7 + 0x18) = (float)dVar16;
      dVar21 = (double)SQRT((float)(dVar16 * dVar16 +
                                   (double)(float)(dVar19 * dVar19 +
                                                  (double)(float)(dVar14 * dVar14))));
      dVar17 = (double)(DAT_007ab44c * 1.8 * DAT_0071f408);
      if (dVar17 < dVar21) {
        dVar18 = (double)(float)(dVar17 / dVar21);
        dVar20 = 0.0;
        dVar15 = dVar19 * dVar18;
        dVar1 = dVar14 * dVar18;
        dVar18 = dVar16 * dVar18;
        dVar19 = dVar20;
        if (0.0 - dVar21 < 0.0) {
          dVar19 = (double)(float)dVar15;
        }
        dVar14 = dVar20;
        if (0.0 - dVar21 < 0.0) {
          dVar14 = (double)(float)dVar1;
        }
        if (0.0 - dVar21 < 0.0) {
          dVar20 = (double)(float)dVar18;
        }
        if (dVar21 - 0.0 < 0.0) {
          dVar19 = (double)(float)dVar15;
        }
        if (dVar21 - 0.0 < 0.0) {
          dVar14 = (double)(float)dVar1;
        }
        dVar16 = dVar20;
        if (dVar21 - 0.0 < 0.0) {
          dVar16 = (double)(float)dVar18;
        }
        *(float *)((int)pvVar7 + 0x10) = (float)dVar19;
        *(float *)((int)pvVar7 + 0x14) = (float)dVar14;
        *(float *)((int)pvVar7 + 0x18) = (float)dVar16;
        dVar21 = dVar17;
      }
      dVar17 = (double)(float)(dVar24 + dVar14);
      dVar16 = (double)(float)(dVar23 + dVar16);
      dVar19 = (double)(float)(dVar25 + dVar19);
      dVar14 = 0.0;
      uVar11 = (int)moby - (int)g_MobyInstance;
      uVar11 = ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
      if (worldUpdateTime +
          (((int)worldUpdateTime >> 1) +
          (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 1) != 0)) * -2 ==
          uVar11 + (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * -2) {
        iVar12 = STUB_00055ab8_RET_0(local_a0,local_90,2,0,0);
        dVar15 = (double)DAT_007ab44c;
        if ((iVar12 != 0) &&
           ((g_CollOutput.pMoby == (MobyInstance *)0x0 || (9 < *(int *)((int)pvVar7 + 0x28))))) {
          if ((double)DAT_00fadb64 <= dVar21) {
            fVar6 = (float)(dVar24 - (double)g_CollOutput.ip.y);
            fVar2 = (float)(dVar25 - (double)g_CollOutput.ip.x);
            fVar3 = (float)(dVar23 - (double)g_CollOutput.ip.z);
            dVar22 = (double)g_CollOutput.ip.w;
            dVar25 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
            fVar5 = (float)(dVar15 / dVar25);
            dVar24 = dVar14;
            if (dVar14 - dVar25 < 0.0) {
              dVar24 = (double)(fVar5 * fVar3);
            }
            dVar23 = dVar14;
            if (dVar14 - dVar25 < 0.0) {
              dVar23 = (double)(fVar5 * fVar6);
            }
            dVar19 = dVar14;
            if (dVar14 - dVar25 < 0.0) {
              dVar19 = (double)(fVar5 * fVar2);
            }
            if (dVar25 - dVar14 < 0.0) {
              dVar24 = (double)(fVar5 * fVar3);
            }
            if (dVar25 - dVar14 < 0.0) {
              dVar23 = (double)(fVar5 * fVar6);
            }
            if (dVar25 - dVar14 < 0.0) {
              dVar19 = (double)(fVar5 * fVar2);
            }
            dVar16 = (double)(float)((double)g_CollOutput.ip.z + dVar24);
            dVar17 = (double)(float)((double)g_CollOutput.ip.y + dVar23);
            dVar19 = (double)(float)((double)g_CollOutput.ip.x + dVar19);
            FastVecNormalize(&local_b0,(int)pvVar7 + 0x10,0xa10980);
            dVar25 = (double)SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
            dVar24 = (double)(float)(dVar25 - (double)DAT_007ab454);
            if ((double)(float)(dVar25 - (double)DAT_007ab454) - dVar14 < 0.0) {
              dVar24 = dVar14;
            }
            if (dVar25 == dVar14) {
              *(float *)((int)pvVar7 + 0x10) = local_b0;
              *(float *)((int)pvVar7 + 0x14) = local_ac;
              *(float *)((int)pvVar7 + 0x18) = local_a8;
              *(undefined4 *)((int)pvVar7 + 0x18) = 0;
              *(undefined4 *)((int)pvVar7 + 0x14) = 0;
              *(undefined4 *)((int)pvVar7 + 0x10) = 0;
            }
            else {
              fVar5 = (float)(dVar24 / dVar25);
              *(float *)((int)pvVar7 + 0x10) = local_b0 * fVar5;
              *(float *)((int)pvVar7 + 0x14) = local_ac * fVar5;
              *(float *)((int)pvVar7 + 0x18) = local_a8 * fVar5;
            }
            *(undefined4 *)((int)pvVar7 + 0x1c) = local_a4;
          }
          else {
            *(undefined4 *)((int)pvVar7 + 0x1c) = 0;
            *(undefined4 *)((int)pvVar7 + 0x18) = 0;
            *(undefined4 *)((int)pvVar7 + 0x14) = 0;
            *(undefined4 *)((int)pvVar7 + 0x10) = 0;
            dVar19 = (double)g_CollOutput.ip.x;
            dVar17 = (double)g_CollOutput.ip.y;
            dVar22 = (double)g_CollOutput.ip.w;
            dVar16 = (double)(float)(dVar15 + (double)g_CollOutput.ip.z);
            if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
              *(undefined4 *)((int)pvVar7 + 0x1c) = 0;
              *(undefined4 *)((int)pvVar7 + 0x18) = 0;
              *(undefined4 *)((int)pvVar7 + 0x14) = 0;
              *(undefined4 *)((int)pvVar7 + 0x10) = 0;
              moby->state = '\x02';
            }
          }
        }
      }
      (moby->pos).x = (float)dVar19;
      (moby->pos).y = (float)dVar17;
      (moby->pos).z = (float)dVar16;
      (moby->pos).w = (float)dVar22;
    }
    dVar22 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar7 + 0xc));
    (moby->rotation).z = (float)dVar22;
    if (g_heroStateType == 0xf) {
      fVar5 = (moby->pos).y;
      fVar6 = (moby->pos).x;
      if ((SQRT((DAT_0096a210 - fVar6) * (DAT_0096a210 - fVar6) +
                (DAT_0096a214 - fVar5) * (DAT_0096a214 - fVar5)) < 0.5) ||
         (SQRT((DAT_0096a200 - fVar6) * (DAT_0096a200 - fVar6) +
               (DAT_0096a204 - fVar5) * (DAT_0096a204 - fVar5)) < 0.5 ||
          SQRT((DAT_0096a1f0 - fVar6) * (DAT_0096a1f0 - fVar6) +
               (DAT_0096a1f4 - fVar5) * (DAT_0096a1f4 - fVar5)) < 0.5)) {
LAB_00291fd4:
        if (*(int *)((int)pvVar7 + 0x24) != 0) {
          *(undefined2 *)(*(int *)((int)pvVar7 + 0x24) + 10) = 0;
        }
        iVar12 = *(int *)((int)pvVar7 + 0x20);
        g_boltCount = g_boltCount + iVar12;
        if (-1 < iVar12) {
          g_totalBoltsCollected = g_totalBoltsCollected + iVar12;
          iVar12 = *(int *)((int)pvVar7 + 0x20);
        }
        *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar12;
        PlayMobySound(0,0,moby);
        RegisterHUDCallback
                  (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                   &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
        DeleteMoby(moby);
        return;
      }
    }
    else {
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar6 * fVar6 + fVar5 * fVar5) < DAT_0096bf68) &&
         (ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf6c)) goto LAB_00291fd4;
    }
  }
LAB_002920bc:
  fVar2 = DAT_007ab45c;
  iVar12 = (*(int *)((int)pvVar7 + 0x28) / DAT_007ab458) * DAT_007ab458;
  iVar13 = DAT_007ab458 + -1;
  *(f32 *)((int)pvVar7 + 8) = (moby->pos).z;
  fVar5 = ((float)(longlong)(*(int *)((int)pvVar7 + 0x28) - iVar12) / (float)(longlong)iVar13) *
          6.2831855 - 3.1415927;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar3 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar3 = fVar6;
  }
  fVar5 = fVar3 * fVar3;
  fVar6 = fVar5 * fVar5 * fVar3;
  fVar9 = fVar5 * fVar6;
  (moby->pos).z =
       fVar2 * (fVar5 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) +
       (moby->pos).z;
  return;
}


