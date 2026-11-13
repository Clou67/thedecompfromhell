// game/update/moby1400.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x26adc8-0x26bbd0
#include "game/update/moby1400.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x026adc8 (0x174 bytes)
void M1400_0026adc8(int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_f27;
  double dVar6;
  double dVar7;
  
  fVar1 = 2.5;
  fVar2 = 3.0;
  dVar5 = 2.0;
  dVar4 = 20.0;
  if (param_1 == 0) {
    fVar1 = 5.0;
    fVar2 = 8.0;
    dVar5 = 4.0;
    dVar4 = 2.0;
  }
  dVar7 = (double)fVar1;
  dVar6 = (double)DAT_0079cbf4;
  if ((double)DAT_0079cbf4 - 0.0 < 0.0) {
    dVar6 = dVar5;
  }
  dVar5 = (double)DAT_0079cbf8;
  if ((double)DAT_0079cbf8 - 0.0 < 0.0) {
    dVar5 = (double)fVar2;
  }
  dVar3 = (double)MB_randRangeFloat
                            (-(float)((double)g_FrameTime * dVar7),
                             (float)((double)g_FrameTime * dVar7));
  DAT_00fa4360 = (float)dVar3;
  dVar3 = (double)MB_randRangeFloat
                            (-(float)((double)g_FrameTime * dVar7),
                             (float)((double)g_FrameTime * dVar7));
  DAT_00fa4364 = (float)dVar3;
  dVar4 = (double)MB_randRangeFloat
                            ((float)((double)animationSpeed * dVar4),
                             (float)((double)animationSpeed * 10.0));
  fVar1 = (float)((double)g_FrameTime * dVar7);
  DAT_00fa4370 = (float)dVar4;
  DAT_00fa4374 = (int)((double)(SQRT(DAT_00fa4360 * DAT_00fa4360 + DAT_00fa4364 * DAT_00fa4364) /
                               SQRT((float)(in_f27 * in_f27 +
                                           (double)(fVar1 * fVar1 + fVar1 * fVar1)))) *
                       (double)(float)(dVar5 - dVar6) + dVar6);
  return;
}


// 0x026af90 (0xc40 bytes)
/* Moby 1400 */

void UpdateMoby_1400(MobyInstance *moby)

{
  uint uVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  char acVar5 [4];
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  GPiece<16> local_140;
  float local_130;
  float local_12c;
  float local_128;
  char local_124 [4];
  float local_120;
  float local_11c;
  double local_110;
  undefined4 local_108;
  longlong local_100;
  
  if ((int)Level < 0xd) {
    if ((int)Level < 0xc) {
LAB_0026b040:
      iVar10 = 0;
      goto LAB_0026b044;
    }
  }
  else if (Level != 0x200) goto LAB_0026b040;
  iVar10 = 1;
LAB_0026b044:
  if (iVar10 != 1) {
    local_108 = 0x3e19999a;
    fVar3 = g_FrameTime * 2.0;
  }
  else {
    local_108 = 0x3e4ccccd;
    fVar3 = g_FrameTime;
  }
  dVar24 = (double)fVar3;
  dVar27 = 0.0;
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x02';
    moby->updateDistance = -1;
    M1400_0026adc8(iVar10);
  }
  else if (moby->state == '\x02') {
    iVar6 = FastDecTimerF32(&DAT_00fa4370);
    if (iVar6 != 0) {
      M1400_0026adc8(iVar10);
    }
    iVar6 = DAT_00fa4374;
    DAT_00a52b90 = GameCamera.posX - *(float *)((int)pvVar2 + 0x30);
    DAT_00a52b94 = GameCamera.posY - *(float *)((int)pvVar2 + 0x34);
    DAT_00a52b98 = GameCamera.posZ - *(float *)((int)pvVar2 + 0x38);
    local_130 = GameCamera.posX;
    local_12c = GameCamera.posY;
    local_128 = GameCamera.posZ;
    DAT_00a52b9c[0] = ((u8 *)&GameCamera.posW)[0];
    DAT_00a52b9c[1] = ((u8 *)&GameCamera.posW)[1];
    DAT_00a52b9c[2] = ((u8 *)&GameCamera.posW)[2];
    DAT_00a52b9c[3] = ((u8 *)&GameCamera.posW)[3];
    local_124[0] = ((u8 *)&GameCamera.posW)[0];
    local_124[1] = ((u8 *)&GameCamera.posW)[1];
    local_124[2] = ((u8 *)&GameCamera.posW)[2];
    local_124[3] = ((u8 *)&GameCamera.posW)[3];
    MB_AddVectorSphere(&local_130,&local_130);
    iVar9 = 0;
    iVar7 = 0;
    local_128 = GameCamera.posZ + DAT_0079cbec;
    if (0 < iVar6) {
      dVar26 = -dVar24;
      dVar17 = 6.2831854820251465;
      dVar18 = 3.141592502593994;
      dVar19 = -3.141592502593994;
      dVar20 = -0.16666656732559204;
      dVar21 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar23 = 2.601886990305502e-06;
      dVar25 = 8.0;
      local_110 = 1.570796251296997;
      do {
        acVar5 = local_124;
        fVar4 = local_128;
        fVar3 = local_12c;
        dVar29 = (double)local_130;
        dVar11 = (double)MB_randRangeFloat((float)dVar27,(float)dVar17);
        dVar12 = (double)(float)(dVar11 + local_110);
        dVar11 = (double)(float)(dVar18 - dVar12);
        if (dVar12 - (double)(float)(dVar18 - dVar12) < 0.0) {
          dVar11 = dVar12;
        }
        dVar13 = (double)(float)(dVar19 - dVar12);
        if ((double)(float)(dVar19 - dVar12) - dVar11 < 0.0) {
          dVar13 = dVar11;
        }
        dVar11 = (double)(float)(dVar13 * dVar13);
        dVar14 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
        dVar12 = (double)(float)(dVar11 * dVar14);
        dVar14 = (double)(float)((double)(float)(dVar11 * dVar12) * dVar23 +
                                (double)(float)(dVar12 * dVar22 +
                                               (double)(float)(dVar14 * dVar21 +
                                                              (double)(float)((double)(float)(dVar11
                                                                                             * 
                                                  dVar13) * dVar20 + dVar13))));
        dVar12 = (double)MB_randRangeFloat((float)dVar27,DAT_0079cbf0);
        dVar30 = (double)fVar3;
        dVar13 = (double)MB_randRangeFloat((float)dVar27,(float)dVar17);
        dVar11 = (double)(float)(dVar18 - dVar13);
        if (dVar13 - (double)(float)(dVar18 - dVar13) < 0.0) {
          dVar11 = dVar13;
        }
        dVar28 = (double)(float)(dVar19 - dVar13);
        if ((double)(float)(dVar19 - dVar13) - dVar11 < 0.0) {
          dVar28 = dVar11;
        }
        dVar13 = (double)(float)(dVar28 * dVar28);
        dVar11 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar28));
        dVar15 = (double)(float)(dVar13 * dVar11);
        dVar28 = (double)(float)((double)(float)(dVar13 * dVar15) * dVar23 +
                                (double)(float)(dVar15 * dVar22 +
                                               (double)(float)(dVar11 * dVar21 +
                                                              (double)(float)((double)(float)(dVar13
                                                                                             * 
                                                  dVar28) * dVar20 + dVar28))));
        dVar11 = (double)MB_randRangeFloat((float)dVar27,DAT_0079cbf0);
        FastVecSub(&local_120,local_140,0x951500);
        dVar13 = (double)SQRT(local_120 * local_120 + local_11c * local_11c);
        if (dVar25 < dVar13) {
          MB_randRangeFloat((float)dVar26,(float)dVar24);
          MB_randRangeFloat((float)dVar26,(float)dVar24);
        }
        else {
          MB_randRangeFloat((float)dVar26,(float)dVar24);
          MB_randRangeFloat((float)dVar26,(float)dVar24);
        }
        DAT_00a52ba0 = GameCamera.posZ - DAT_0079cc04;
        dVar11 = (double)MB_SampleByteGrid
                                   (CONCAT44((float)(dVar14 * dVar12 + dVar29),
                                             (float)(dVar28 * dVar11 + dVar30)),
                                    CONCAT44(fVar4,acVar5));
        if (dVar11 < (double)(GameCamera.posZ + DAT_0079cbec)) {
          if (dVar11 - (double)DAT_00a52ba0 < 0.0) {
            dVar11 = (double)DAT_00a52ba0;
          }
          uVar8 = 0;
          if (dVar25 < dVar13) {
            uVar8 = DAT_0079cc00;
          }
          if (iVar10 == 0) {
            SpawnPart_0(dVar11,local_140,uVar8);
          }
          if (iVar10 == 1) {
            SpawnPart_73(dVar11,local_140,uVar8);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
    iVar9 = 0;
    local_128 = GameCamera.posZ + DAT_0079cbec;
    local_130 = GameCamera.posX;
    local_12c = GameCamera.posY;
    local_124[0] = ((u8 *)&GameCamera.posW)[0];
    local_124[1] = ((u8 *)&GameCamera.posW)[1];
    local_124[2] = ((u8 *)&GameCamera.posW)[2];
    local_124[3] = ((u8 *)&GameCamera.posW)[3];
    uVar1 = (uint)((float)(longlong)iVar6 * 1.4);
    local_100 = (longlong)(int)uVar1;
    if (0 < (int)uVar1) {
      dVar11 = -dVar24;
      dVar26 = 6.2831854820251465;
      dVar25 = 1.570796251296997;
      dVar23 = 3.141592502593994;
      dVar22 = -3.141592502593994;
      dVar21 = -0.16666656732559204;
      dVar20 = 0.008333025500178337;
      dVar19 = -0.0001980741071747616;
      dVar18 = 2.601886990305502e-06;
      dVar17 = 8.0;
      do {
        MB_randRangeFloat((float)dVar11,(float)dVar24);
        MB_randRangeFloat((float)dVar11,(float)dVar24);
        acVar5 = local_124;
        fVar4 = local_128;
        fVar3 = local_12c;
        dVar13 = (double)local_130;
        dVar12 = (double)MB_randRangeFloat((float)dVar27,(float)dVar26);
        dVar29 = (double)(float)(dVar12 + dVar25);
        dVar12 = (double)(float)(dVar23 - dVar29);
        if (dVar29 - (double)(float)(dVar23 - dVar29) < 0.0) {
          dVar12 = dVar29;
        }
        dVar14 = (double)(float)(dVar22 - dVar29);
        if ((double)(float)(dVar22 - dVar29) - dVar12 < 0.0) {
          dVar14 = dVar12;
        }
        dVar12 = (double)(float)(dVar14 * dVar14);
        dVar30 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar14));
        dVar29 = (double)(float)(dVar12 * dVar30);
        dVar30 = (double)(float)((double)(float)(dVar12 * dVar29) * dVar18 +
                                (double)(float)(dVar29 * dVar19 +
                                               (double)(float)(dVar30 * dVar20 +
                                                              (double)(float)((double)(float)(dVar12
                                                                                             * 
                                                  dVar14) * dVar21 + dVar14))));
        dVar29 = (double)MB_randRangeFloat((float)dVar27,(float)dVar17);
        dVar28 = (double)fVar3;
        dVar14 = (double)MB_randRangeFloat((float)dVar27,(float)dVar26);
        dVar12 = (double)(float)(dVar23 - dVar14);
        if (dVar14 - (double)(float)(dVar23 - dVar14) < 0.0) {
          dVar12 = dVar14;
        }
        dVar15 = (double)(float)(dVar22 - dVar14);
        if ((double)(float)(dVar22 - dVar14) - dVar12 < 0.0) {
          dVar15 = dVar12;
        }
        dVar12 = (double)(float)(dVar15 * dVar15);
        dVar16 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
        dVar14 = (double)(float)(dVar12 * dVar16);
        dVar14 = (double)(float)((double)(float)(dVar12 * dVar14) * dVar18 +
                                (double)(float)(dVar14 * dVar19 +
                                               (double)(float)(dVar16 * dVar20 +
                                                              (double)(float)((double)(float)(dVar12
                                                                                             * 
                                                  dVar15) * dVar21 + dVar15))));
        dVar12 = (double)MB_randRangeFloat((float)dVar27,(float)dVar17);
        DAT_00a52ba0 = GameCamera.posZ - DAT_0079cc04;
        dVar12 = (double)MB_SampleByteGrid
                                   (CONCAT44((float)(dVar30 * dVar29 + dVar13),
                                             (float)(dVar14 * dVar12 + dVar28)),
                                    CONCAT44(fVar4,acVar5));
        if (dVar12 < (double)(GameCamera.posZ + DAT_0079cbec)) {
          if (dVar12 - (double)DAT_00a52ba0 < 0.0) {
            dVar12 = (double)DAT_00a52ba0;
          }
          if (iVar10 == 0) {
            SpawnPart_0(dVar12,local_140,0);
          }
          if (iVar10 == 1) {
            SpawnPart_73(dVar12,local_140,0);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar1);
    }
    if (iVar10 != 1) {
      local_130 = GameCamera.posX;
      local_12c = GameCamera.posY;
      local_128 = GameCamera.posZ;
      local_124[0] = ((u8 *)&GameCamera.posW)[0];
      local_124[1] = ((u8 *)&GameCamera.posW)[1];
      local_124[2] = ((u8 *)&GameCamera.posW)[2];
      local_124[3] = ((u8 *)&GameCamera.posW)[3];
      dVar24 = 30.0;
      MB_AddVectorSphere(&local_130,&local_130);
      iVar10 = 0;
      local_128 = GameCamera.posZ + DAT_0079cbec;
      if (0 < (int)uVar1) {
        dVar25 = 6.2831854820251465;
        dVar23 = 1.570796251296997;
        dVar22 = 3.141592502593994;
        dVar21 = -3.141592502593994;
        dVar20 = -0.16666656732559204;
        dVar19 = 0.008333025500178337;
        dVar18 = -0.0001980741071747616;
        dVar17 = 2.601886990305502e-06;
        do {
          acVar5 = local_124;
          fVar4 = local_128;
          fVar3 = local_12c;
          dVar12 = (double)local_130;
          dVar26 = (double)MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar11 = (double)(float)(dVar26 + dVar23);
          dVar26 = (double)(float)(dVar22 - dVar11);
          if (dVar11 - (double)(float)(dVar22 - dVar11) < 0.0) {
            dVar26 = dVar11;
          }
          dVar29 = (double)(float)(dVar21 - dVar11);
          if ((double)(float)(dVar21 - dVar11) - dVar26 < 0.0) {
            dVar29 = dVar26;
          }
          dVar26 = (double)(float)(dVar29 * dVar29);
          dVar13 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar29));
          dVar11 = (double)(float)(dVar26 * dVar13);
          dVar13 = (double)(float)((double)(float)(dVar26 * dVar11) * dVar17 +
                                  (double)(float)(dVar11 * dVar18 +
                                                 (double)(float)(dVar13 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar29) * dVar20 + dVar29))));
          dVar11 = (double)MB_randRangeFloat((float)dVar27,(float)dVar24);
          dVar14 = (double)fVar3;
          dVar29 = (double)MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar26 = (double)(float)(dVar22 - dVar29);
          if (dVar29 - (double)(float)(dVar22 - dVar29) < 0.0) {
            dVar26 = dVar29;
          }
          dVar30 = (double)(float)(dVar21 - dVar29);
          if ((double)(float)(dVar21 - dVar29) - dVar26 < 0.0) {
            dVar30 = dVar26;
          }
          dVar26 = (double)(float)(dVar30 * dVar30);
          dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar30));
          dVar29 = (double)(float)(dVar26 * dVar28);
          dVar29 = (double)(float)((double)(float)(dVar26 * dVar29) * dVar17 +
                                  (double)(float)(dVar29 * dVar18 +
                                                 (double)(float)(dVar28 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar30) * dVar20 + dVar30))));
          dVar26 = (double)MB_randRangeFloat((float)dVar27,(float)dVar24);
          MB_SpawnGridParticles
                    (CONCAT44((float)(dVar13 * dVar11 + dVar12),(float)(dVar29 * dVar26 + dVar14)),
                     CONCAT44(fVar4,acVar5));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar1);
      }
      local_130 = GameCamera.posX;
      local_12c = GameCamera.posY;
      local_128 = GameCamera.posZ;
      local_124[0] = ((u8 *)&GameCamera.posW)[0];
      local_124[1] = ((u8 *)&GameCamera.posW)[1];
      local_124[2] = ((u8 *)&GameCamera.posW)[2];
      local_124[3] = ((u8 *)&GameCamera.posW)[3];
      MB_AddVectorSphere(&local_130,&local_130);
      local_128 = GameCamera.posZ + DAT_0079cbec;
      if (0 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0))) {
        dVar25 = 6.2831854820251465;
        dVar23 = 1.570796251296997;
        dVar22 = 3.141592502593994;
        dVar21 = -3.141592502593994;
        dVar20 = -0.16666656732559204;
        dVar19 = 0.008333025500178337;
        dVar18 = -0.0001980741071747616;
        dVar17 = 2.601886990305502e-06;
        dVar24 = 8.0;
        do {
          acVar5 = local_124;
          fVar4 = local_128;
          fVar3 = local_12c;
          dVar12 = (double)local_130;
          dVar26 = (double)MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar11 = (double)(float)(dVar26 + dVar23);
          dVar26 = (double)(float)(dVar22 - dVar11);
          if (dVar11 - (double)(float)(dVar22 - dVar11) < 0.0) {
            dVar26 = dVar11;
          }
          dVar29 = (double)(float)(dVar21 - dVar11);
          if ((double)(float)(dVar21 - dVar11) - dVar26 < 0.0) {
            dVar29 = dVar26;
          }
          dVar26 = (double)(float)(dVar29 * dVar29);
          dVar13 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar29));
          dVar11 = (double)(float)(dVar26 * dVar13);
          dVar13 = (double)(float)((double)(float)(dVar26 * dVar11) * dVar17 +
                                  (double)(float)(dVar11 * dVar18 +
                                                 (double)(float)(dVar13 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar29) * dVar20 + dVar29))));
          dVar11 = (double)MB_randRangeFloat((float)dVar27,(float)dVar24);
          dVar14 = (double)fVar3;
          dVar29 = (double)MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar26 = (double)(float)(dVar22 - dVar29);
          if (dVar29 - (double)(float)(dVar22 - dVar29) < 0.0) {
            dVar26 = dVar29;
          }
          dVar30 = (double)(float)(dVar21 - dVar29);
          if ((double)(float)(dVar21 - dVar29) - dVar26 < 0.0) {
            dVar30 = dVar26;
          }
          dVar26 = (double)(float)(dVar30 * dVar30);
          dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar30));
          dVar29 = (double)(float)(dVar26 * dVar28);
          dVar29 = (double)(float)((double)(float)(dVar26 * dVar29) * dVar17 +
                                  (double)(float)(dVar29 * dVar18 +
                                                 (double)(float)(dVar28 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar30) * dVar20 + dVar30))));
          dVar26 = (double)MB_randRangeFloat((float)dVar27,(float)dVar24);
          MB_SpawnGridParticles
                    (CONCAT44((float)(dVar13 * dVar11 + dVar12),(float)(dVar29 * dVar26 + dVar14)),
                     CONCAT44(fVar4,acVar5));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
      }
    }
  }
  *(float *)((int)pvVar2 + 0x30) = GameCamera.posX;
  *(float *)((int)pvVar2 + 0x34) = GameCamera.posY;
  *(float *)((int)pvVar2 + 0x38) = GameCamera.posZ;
  *(char (*) [4])((int)pvVar2 + 0x3c) = GameCamera.posW;
  return;
}


