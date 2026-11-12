// game/update/moby1054.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1a7c24-0x1a87d8
#include "game/update/moby1054.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01a7c24 (0x14 bytes)
void M1054_001a7c24(void)

{
  DAT_00740830 = 0x10000;
  return;
}


// 0x01a7c58 (0xb80 bytes)
/* Moby 1054 */

undefined4 * UpdateMoby_1054(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  int *piVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyInstance *pMVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  char cVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  
  bVar1 = moby->state;
  piVar7 = (int *)moby->pVar;
  dVar19 = (double)(moby->rotation).y;
  if (bVar1 == 5) {
    if (DAT_00e61fc8 == 0) {
      return (undefined4 *)0x0;
    }
    moby->state = '\x01';
    moby->setByGroup = '\0';
    fVar6 = (f32)piVar7[4];
    (moby->pos).x = fVar6;
    (moby->pos).y = (f32)piVar7[5];
    (moby->pos).z = (f32)piVar7[6];
    (moby->pos).w = (f32)piVar7[7];
    (moby->rotation).x = (f32)piVar7[8];
    (moby->rotation).y = (f32)piVar7[9];
    iVar15 = piVar7[0x10];
    (moby->rotation).z = (f32)piVar7[10];
    (moby->rotation).w = (f32)piVar7[0xb];
    *(f32 *)(iVar15 + 0x10) = fVar6;
    *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
    puVar16 = (undefined4 *)piVar7[0x10];
    puVar16[0x10] = (moby->rotation).x;
    puVar16[0x11] = (moby->rotation).y;
    puVar16[0x12] = (moby->rotation).z;
    puVar16[0x13] = (moby->rotation).w;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[0x11] = 0;
    piVar7[0x12] = 0;
    return puVar16;
  }
  if (bVar1 != 4) {
    if (bVar1 == 3) {
      fVar2 = (moby->pos).y - (float)piVar7[5];
      fVar3 = (moby->pos).x - (float)piVar7[4];
      fVar4 = (moby->pos).z - (float)piVar7[6];
      local_ac = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      iVar15 = piVar7[0x10];
      fVar2 = *(float *)(iVar15 + 0x14) - (float)piVar7[5];
      fVar3 = *(float *)(iVar15 + 0x10) - (float)piVar7[4];
      fVar4 = *(float *)(iVar15 + 0x18) - (float)piVar7[6];
      local_b0 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      dVar27 = 10.0;
      dVar25 = 20.0;
      dVar19 = 5.0;
      OrganicDelt
                (DAT_00740854,g_FrameTimeSq * 10.0,g_FrameTimeSq * 20.0,g_FrameTime * 5.0,
                 &local_ac,iVar15,(float *)(piVar7 + 2));
      OrganicDelt
                (DAT_00740858,(float)((double)g_FrameTimeSq * dVar27),
                 (float)((double)g_FrameTimeSq * dVar25),
                 (float)((double)g_FrameTime * dVar19),&local_b0,0x740000,
                 (float *)(piVar7 + 0x11));
      fVar2 = (float)piVar7[0xd];
      fVar3 = (float)piVar7[0xc];
      fVar4 = (float)piVar7[0xe];
      fVar5 = 0.0;
      iVar15 = piVar7[0x10];
      fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar9 = local_ac / fVar13;
      fVar11 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar11 = fVar3 * fVar9;
      }
      fVar10 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar10 = fVar2 * fVar9;
      }
      fVar12 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar12 = fVar4 * fVar9;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar11 = fVar3 * fVar9;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar10 = fVar2 * fVar9;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar12 = fVar4 * fVar9;
      }
      (moby->pos).x = (float)piVar7[4] + fVar11;
      (moby->pos).y = (float)piVar7[5] + fVar10;
      (moby->pos).z = (float)piVar7[6] + fVar12;
      (moby->pos).w = (f32)piVar7[7];
      fVar2 = (float)piVar7[0xd];
      fVar3 = (float)piVar7[0xc];
      fVar4 = (float)piVar7[0xe];
      fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar11 = -local_b0 / fVar13;
      fVar9 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar9 = fVar3 * fVar11;
      }
      fVar10 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar10 = fVar2 * fVar11;
      }
      if (0.0 - fVar13 < 0.0) {
        fVar5 = fVar4 * fVar11;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar9 = fVar3 * fVar11;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar10 = fVar2 * fVar11;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar5 = fVar4 * fVar11;
      }
      *(float *)(iVar15 + 0x10) = (float)piVar7[4] + fVar9;
      *(float *)(iVar15 + 0x14) = (float)piVar7[5] + fVar10;
      *(float *)(iVar15 + 0x18) = (float)piVar7[6] + fVar5;
      *(int *)(iVar15 + 0x1c) = piVar7[7];
      puVar16 = (undefined4 *)UpdateMobyTransform((MobyInstance *)piVar7[0x10]);
      if (0.01 <= ABS(local_ac - DAT_00740854)) {
        return puVar16;
      }
      if (0.01 <= ABS(local_b0 - DAT_00740858)) {
        return (undefined4 *)0x740000;
      }
      moby->state = '\x05';
      return (undefined4 *)0x5;
    }
    if (bVar1 == 1) {
      iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar7);
      if (iVar15 == 0) {
        return (undefined4 *)0x0;
      }
      if (piVar7[1] == 1) {
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        moby->state = '\x04';
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = loadVectorLeftIndexed(4,0x1a7c38);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                             auVar30);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x4c,
                           ZEXT48(piVar7));
        *(undefined4 *)((uint)(piVar7 + 0x13) & 0xfffffffc) = uVar8;
      }
      else if (moby->group == -1) {
        moby->state = '\x03';
      }
      else {
        MB_SetStateByGroup(moby->group,3);
      }
      puVar16 = (undefined4 *)PlayMobySound(0,0,(MobyInstance *)piVar7[0x10]);
      return puVar16;
    }
    if (bVar1 != 0) {
      return (undefined4 *)(uint)bVar1;
    }
    piVar7[4] = (int)(moby->pos).x;
    piVar7[5] = (int)(moby->pos).y;
    piVar7[6] = (int)(moby->pos).z;
    piVar7[7] = (int)(moby->pos).w;
    piVar7[8] = (int)(moby->rotation).x;
    piVar7[9] = (int)(moby->rotation).y;
    piVar7[10] = (int)(moby->rotation).z;
    piVar7[0xb] = (int)(moby->rotation).w;
    piVar7[0xc] = (int)(moby->transform).v2.x;
    piVar7[0xd] = (int)(moby->transform).v2.y;
    piVar7[0xe] = (int)(moby->transform).v2.z;
    piVar7[0xf] = (int)(moby->transform).v2.w;
    pMVar14 = CreateMoby(WARSHIP_DOOR_LOW_PART);
    piVar7[0x10] = (int)pMVar14;
    pMVar14->drawDistance = 0x40;
    *(undefined1 *)(piVar7[0x10] + 0x31) = 1;
    *(undefined8 *)(piVar7[0x10] + 0x38) = *(undefined8 *)&moby->color;
    *(MobyModeBit *)(piVar7[0x10] + 0x34) = moby->modeBits;
    iVar15 = piVar7[0x10];
    *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
    iVar15 = piVar7[0x10];
    *(f32 *)(iVar15 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar15 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar15 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar15 + 0x4c) = (moby->rotation).w;
    if (-1 < *piVar7) {
      moby->state = '\x01';
      return (undefined4 *)0x1;
    }
    if (piVar7[1] == 2) {
      moby->state = '\x02';
      return (undefined4 *)0x2;
    }
    fVar2 = (float)piVar7[0xd];
    fVar3 = (float)piVar7[0xc];
    fVar4 = (float)piVar7[0xe];
    fVar5 = 0.0;
    iVar15 = piVar7[0x10];
    fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar9 = DAT_00740854 / fVar13;
    fVar11 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    fVar10 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar10 = fVar2 * fVar9;
    }
    fVar12 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar12 = fVar4 * fVar9;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar10 = fVar2 * fVar9;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar12 = fVar4 * fVar9;
    }
    (moby->pos).x = (float)piVar7[4] + fVar11;
    (moby->pos).y = (float)piVar7[5] + fVar10;
    (moby->pos).z = (float)piVar7[6] + fVar12;
    (moby->pos).w = (f32)piVar7[7];
    fVar2 = (float)piVar7[0xd];
    fVar3 = (float)piVar7[0xc];
    fVar4 = (float)piVar7[0xe];
    fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar11 = -DAT_00740858 / fVar13;
    fVar9 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar3 * fVar11;
    }
    fVar10 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar10 = fVar2 * fVar11;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar5 = fVar4 * fVar11;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar3 * fVar11;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar10 = fVar2 * fVar11;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar5 = fVar4 * fVar11;
    }
    *(float *)(iVar15 + 0x10) = (float)piVar7[4] + fVar9;
    *(float *)(iVar15 + 0x14) = (float)piVar7[5] + fVar10;
    *(float *)(iVar15 + 0x18) = (float)piVar7[6] + fVar5;
    *(int *)(iVar15 + 0x1c) = piVar7[7];
    UpdateMobyTransform((MobyInstance *)piVar7[0x10]);
    moby->state = '\x05';
    return (undefined4 *)0x5;
  }
  fVar2 = (moby->pos).y - (float)piVar7[5];
  fVar3 = (moby->pos).x - (float)piVar7[4];
  fVar4 = (moby->pos).z - (float)piVar7[6];
  bVar1 = moby->setByGroup;
  local_a4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar25 = (double)local_a4;
  iVar15 = piVar7[0x10];
  fVar2 = *(float *)(iVar15 + 0x14) - (float)piVar7[5];
  fVar3 = *(float *)(iVar15 + 0x10) - (float)piVar7[4];
  fVar4 = *(float *)(iVar15 + 0x18) - (float)piVar7[6];
  local_a8 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar27 = (double)local_a8;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      local_a0 = (longlong)DAT_00740890;
      dVar20 = (double)*(float *)(iVar15 + 0x44);
      cVar18 = '\x02';
      dVar21 = (double)DAT_0074086c;
      iVar17 = 0x740000;
      dVar22 = (double)DAT_00740870;
      dVar23 = (double)DAT_00740874;
      dVar24 = (double)DAT_00740878;
      dVar26 = (double)DAT_0074087c;
      dVar28 = (double)DAT_00740880;
      MB_randRangeFloat((float)(longlong)DAT_0074088c,(float)local_a0);
      iVar15 = FastDoubleToInt();
      goto LAB_001a8438;
    }
  }
  else if (bVar1 < 3) {
    cVar18 = '\x01';
    local_a0 = (longlong)DAT_00740888;
    dVar25 = (double)DAT_0074085c;
    iVar17 = 0x740000;
    dVar27 = (double)DAT_00740860;
    dVar20 = (double)DAT_00740868;
    dVar19 = (double)DAT_00740864;
    dVar21 = (double)DAT_0074086c;
    dVar22 = (double)DAT_00740870;
    dVar23 = (double)DAT_00740874;
    dVar24 = (double)DAT_00740878;
    dVar26 = (double)DAT_0074087c;
    dVar28 = (double)DAT_00740880;
    MB_randRangeFloat((float)(longlong)DAT_00740884,(float)local_a0);
    iVar15 = FastDoubleToInt();
    goto LAB_001a8438;
  }
  iVar17 = 0x740000;
  cVar18 = '\x01';
  iVar15 = 0x1e;
  dVar21 = 10.0;
  dVar23 = 5.0;
  dVar25 = (double)DAT_0074085c;
  dVar27 = (double)DAT_00740860;
  dVar22 = 20.0;
  dVar20 = dVar19;
  dVar24 = dVar21;
  dVar26 = dVar21;
  dVar28 = dVar23;
LAB_001a8438:
  OrganicDelt
            ((float)dVar25,(float)((double)g_FrameTimeSq * dVar21),
             (float)((double)g_FrameTimeSq * dVar22),(float)((double)g_FrameTime * dVar23),
             &local_a4,iVar17,(float *)(piVar7 + 2));
  OrganicDelt
            ((float)dVar27,(float)((double)g_FrameTimeSq * dVar21),
             (float)((double)g_FrameTimeSq * dVar22),(float)((double)g_FrameTime * dVar23),
             &local_a8,iVar17,(float *)(piVar7 + 0x11));
  dVar25 = (double)(float)(dVar24 * 0.01745329238474369);
  dVar27 = (double)(float)(dVar26 * 0.01745329238474369);
  dVar24 = (double)(float)(dVar28 * 0.01745329238474369);
  OrganicDelt
            ((float)dVar19,(float)(dVar25 * (double)g_FrameTimeSq),
             (float)(dVar27 * (double)g_FrameTimeSq),(float)(dVar24 * (double)g_FrameTime),
             &(moby->rotation).y,iVar17,(float *)(piVar7 + 3));
  OrganicDelt
            ((float)dVar20,(float)(dVar25 * (double)g_FrameTimeSq),
             (float)(dVar27 * (double)g_FrameTimeSq),(float)(dVar24 * (double)g_FrameTime),
             (float *)(piVar7[0x10] + 0x44),iVar17,(float *)(piVar7 + 0x12));
  fVar2 = (float)piVar7[0xd];
  fVar3 = (float)piVar7[0xc];
  fVar4 = (float)piVar7[0xe];
  fVar5 = 0.0;
  iVar17 = piVar7[0x10];
  fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar9 = local_a4 / fVar13;
  fVar11 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar11 = fVar3 * fVar9;
  }
  fVar10 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar10 = fVar2 * fVar9;
  }
  fVar12 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar12 = fVar4 * fVar9;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar11 = fVar3 * fVar9;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar10 = fVar2 * fVar9;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar12 = fVar4 * fVar9;
  }
  (moby->pos).x = (float)piVar7[4] + fVar11;
  (moby->pos).y = (float)piVar7[5] + fVar10;
  (moby->pos).z = (float)piVar7[6] + fVar12;
  (moby->pos).w = (f32)piVar7[7];
  fVar2 = (float)piVar7[0xd];
  fVar3 = (float)piVar7[0xc];
  fVar4 = (float)piVar7[0xe];
  fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar11 = -local_a8 / fVar13;
  fVar9 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar9 = fVar3 * fVar11;
  }
  fVar10 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar10 = fVar2 * fVar11;
  }
  if (0.0 - fVar13 < 0.0) {
    fVar5 = fVar4 * fVar11;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar9 = fVar3 * fVar11;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar10 = fVar2 * fVar11;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar5 = fVar4 * fVar11;
  }
  *(float *)(iVar17 + 0x10) = (float)piVar7[4] + fVar9;
  *(float *)(iVar17 + 0x14) = (float)piVar7[5] + fVar10;
  *(float *)(iVar17 + 0x18) = (float)piVar7[6] + fVar5;
  *(int *)(iVar17 + 0x1c) = piVar7[7];
  UpdateMobyTransform((MobyInstance *)piVar7[0x10]);
  puVar16 = (undefined4 *)FastDecTimerS32(ZEXT48(piVar7) + 0x4c);
  if (puVar16 != (undefined4 *)0x0) {
    moby->setByGroup = cVar18;
    puVar16 = &DAT_001a7c38;
    piVar7[0x13] = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
    if ((ABS(local_a4 - DAT_0074085c) < 0.01) &&
       (puVar16 = (undefined4 *)0x740000, ABS(local_a8 - DAT_00740860) < 0.01)) {
      puVar16 = (undefined4 *)0x5;
      moby->state = '\x05';
    }
  }
  return puVar16;
}


