// game/update/moby1479.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x28a9f0-0x28bf08
#include "game/update/moby1479.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x028a9f0 (0x10c0 bytes)
/* Moby 1479 */

void UpdateMoby_1479(MobyInstance *moby)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  undefined4 local_110 [4];
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  undefined4 local_90 [8];
  
  lVar4 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar2 = (undefined4 *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->state = (char)*puVar2 + '\x01';
      FastEulerToMtx(lVar4 + 0xc0,lVar4 + 0x40);
    }
    else {
      iVar10 = FastCheckBsphereInView(0x405e000000000000,local_140);
      if (iVar10 != -1) {
        iVar10 = FastDecTimerS32(puVar2 + 0x30);
        if (iVar10 != 0) {
          dVar13 = (double)MB_randRangeFloat
                                     ((float)(longlong)DAT_007ab040,(float)(longlong)DAT_007ab044);
          uVar11 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
          puVar2[0x30] = uVar11;
          iVar12 = 1;
          iVar10 = MB_randInt(7);
          if (iVar10 == 0) {
            iVar12 = MB_randInt(5);
            iVar12 = iVar12 + 5;
          }
          iVar10 = 0;
          if (0 < iVar12) {
            dVar13 = 0.0;
            dVar16 = 1.0;
            do {
              MB_randSphere
                        (dVar13,(double)(DAT_007ab010 * g_FrameTime),local_110);
              MB_randRangeFloat(-DAT_007ab00c,DAT_007ab00c);
              MB_randRangeFloat(-DAT_007ab00c,DAT_007ab00c);
              MB_randRangeFloat(DAT_007ab020,DAT_007ab024);
              MB_randRangeFloat(DAT_007ab028,DAT_007ab02c);
              uVar3 = DAT_007ab034;
              uVar11 = DAT_007ab030;
              MB_randRangeFloat((float)dVar13,(float)dVar16);
              uVar5 = FastLerpColor(uVar11,uVar3);
              uVar3 = DAT_007ab03c;
              uVar11 = DAT_007ab038;
              MB_randRangeFloat((float)dVar13,(float)dVar16);
              uVar6 = FastLerpColor(uVar11,uVar3);
              dVar14 = (double)MB_randRangeFloat((float)dVar13,(float)dVar16);
              uVar7 = FastDoubleToInt
                                ((double)(animationSpeed *
                                         (float)((double)(longlong)DAT_00fada00 * dVar14 + dVar16)))
              ;
              dVar15 = (double)(longlong)DAT_007ab014;
              dVar14 = (double)MB_randRangeFloat(-DAT_007ab01c,DAT_007ab01c);
              uVar8 = FastDoubleToInt
                                ((double)(animationSpeed *
                                         (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
              dVar15 = (double)(longlong)DAT_007ab018;
              dVar14 = (double)MB_randRangeFloat(-DAT_007ab01c,DAT_007ab01c);
              uVar9 = FastDoubleToInt
                                ((double)(animationSpeed *
                                         (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
              SpawnPart_2(lVar4 + 0x10,local_130,local_120,uVar5,uVar6,uVar7,uVar8,uVar9);
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar12);
          }
        }
        iVar10 = MB_randInt(4);
        if (iVar10 == 0) {
          MB_randRangeFloat(-DAT_007aafcc,DAT_007aafcc);
          dVar16 = 1.0;
          dVar13 = 0.0;
          MB_randRangeFloat(-DAT_007aafcc,DAT_007aafcc);
          MB_randRangeFloat(-DAT_007aafc8,DAT_007aafc8);
          MB_randRangeFloat(DAT_007aafe0,DAT_007aafe4);
          MB_randRangeFloat(DAT_007aafe8,DAT_007aafec);
          uVar3 = DAT_007aaff4;
          uVar11 = DAT_007aaff0;
          MB_randRangeFloat((float)dVar13,(float)dVar16);
          uVar5 = FastLerpColor(uVar11,uVar3);
          uVar3 = DAT_007aaffc;
          uVar11 = DAT_007aaff8;
          MB_randRangeFloat((float)dVar13,(float)dVar16);
          uVar6 = FastLerpColor(uVar11,uVar3);
          dVar13 = (double)MB_randRangeFloat((float)dVar13,(float)dVar16);
          uVar7 = FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)((double)(longlong)DAT_007aafd0 * dVar13 + dVar16)));
          dVar14 = (double)(longlong)DAT_007aafd4;
          dVar13 = (double)MB_randRangeFloat(-DAT_007aafdc,DAT_007aafdc);
          uVar8 = FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
          dVar14 = (double)(longlong)DAT_007aafd8;
          dVar13 = (double)MB_randRangeFloat(-DAT_007aafdc,DAT_007aafdc);
          uVar9 = FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
          SpawnPart_2(lVar4 + 0x10,local_100,local_f0,uVar5,uVar6,uVar7,uVar8,uVar9);
        }
      }
    }
  }
  else if (bVar1 < 3) {
    iVar10 = FastDecTimerS32(puVar2 + 0x31);
    if (iVar10 != 0) {
      if ((int)puVar2[0x32] < 0x15) {
        puVar2[0x32] = 0x1e;
        dVar13 = (double)MB_randRangeFloat(120.0,180.0);
        uVar11 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
        puVar2[0x31] = uVar11;
      }
      else {
        puVar2[0x32] = 10;
        dVar13 = (double)MB_randRangeFloat(120.0,180.0);
        uVar11 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
        puVar2[0x31] = uVar11;
      }
    }
    iVar10 = FastCheckBsphereInView(0x405e000000000000,local_e0);
    if ((iVar10 != -1) || (iVar10 = MB_randInt(4), iVar10 == 0)) {
      iVar10 = FastDecTimerS32(puVar2 + 0x30);
      if (iVar10 != 0) {
        dVar13 = (double)MB_randRangeFloat
                                   ((float)(longlong)DAT_007ab090,(float)(longlong)DAT_007ab094);
        uVar11 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
        puVar2[0x30] = uVar11;
        iVar12 = 1;
        iVar10 = MB_randInt(7);
        if (iVar10 == 0) {
          iVar12 = MB_randInt(5);
          iVar12 = iVar12 + 5;
        }
        iVar10 = 0;
        if (0 < iVar12) {
          dVar13 = 0.0;
          dVar16 = 1.0;
          do {
            MB_randSphere(dVar13,(double)(DAT_007ab05c * g_FrameTime),local_90);
            MB_randRangeFloat(-DAT_007ab058,DAT_007ab058);
            MB_randRangeFloat(-DAT_007ab058,DAT_007ab058);
            MB_randRangeFloat(DAT_007ab070,DAT_007ab074);
            MB_randRangeFloat(DAT_007ab078,DAT_007ab07c);
            uVar3 = DAT_007ab084;
            uVar11 = DAT_007ab080;
            MB_randRangeFloat((float)dVar13,(float)dVar16);
            uVar5 = FastLerpColor(uVar11,uVar3);
            uVar3 = DAT_007ab08c;
            uVar11 = DAT_007ab088;
            MB_randRangeFloat((float)dVar13,(float)dVar16);
            uVar6 = FastLerpColor(uVar11,uVar3);
            dVar14 = (double)MB_randRangeFloat((float)dVar13,(float)dVar16);
            uVar7 = FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)((double)(longlong)DAT_007ab060 * dVar14 + dVar16)));
            dVar15 = (double)(longlong)DAT_007ab064;
            dVar14 = (double)MB_randRangeFloat(-DAT_007ab06c,DAT_007ab06c);
            uVar8 = FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
            dVar15 = (double)(longlong)DAT_007ab068;
            dVar14 = (double)MB_randRangeFloat(-DAT_007ab06c,DAT_007ab06c);
            uVar9 = FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
            SpawnPart_2(lVar4 + 0x10,local_b0,local_a0,uVar5,uVar6,uVar7,uVar8,uVar9);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar12);
        }
      }
      MB_randRangeFloat(-DAT_007aaf8c,DAT_007aaf8c);
      dVar16 = 1.0;
      dVar13 = 0.0;
      MB_randRangeFloat(-DAT_007aaf8c,DAT_007aaf8c);
      MB_randRangeFloat(-DAT_007aaf88,DAT_007aaf88);
      MB_randRangeFloat(DAT_007aafa0,DAT_007aafa4);
      MB_randRangeFloat(DAT_007aafa8,DAT_007aafac);
      uVar3 = DAT_007aafb4;
      uVar11 = DAT_007aafb0;
      MB_randRangeFloat((float)dVar13,(float)dVar16);
      uVar5 = FastLerpColor(uVar11,uVar3);
      uVar3 = DAT_007aafbc;
      uVar11 = DAT_007aafb8;
      MB_randRangeFloat((float)dVar13,(float)dVar16);
      uVar6 = FastLerpColor(uVar11,uVar3);
      dVar13 = (double)MB_randRangeFloat((float)dVar13,(float)dVar16);
      uVar7 = FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)((double)(longlong)(int)puVar2[0x32] * dVar13 + dVar16)));
      dVar14 = (double)(longlong)DAT_007aaf94;
      dVar13 = (double)MB_randRangeFloat(-DAT_007aaf9c,DAT_007aaf9c);
      uVar8 = FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
      dVar14 = (double)(longlong)DAT_007aaf98;
      dVar13 = (double)MB_randRangeFloat(-DAT_007aaf9c,DAT_007aaf9c);
      uVar9 = FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
      SpawnPart_2(lVar4 + 0x10,local_d0,local_c0,uVar5,uVar6,uVar7,uVar8,uVar9);
    }
  }
  else if (bVar1 < 4) {
    DeleteMoby(moby);
  }
  return;
}


// 0x028bac0 (0x448 bytes)
void M1479_0028bac0
               (int param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,short *param_5
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar9;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<32> auStack_70;
  
  if (*param_5 < 0) {
    sVar9 = *param_5 + 1;
    *param_5 = sVar9;
    if (sVar9 != 0) {
      return;
    }
    MB_randRangeFloat((float)(longlong)DAT_007ab0e0,(float)(longlong)DAT_007ab0e4);
    sVar9 = FastDoubleToInt();
    *param_5 = sVar9;
    dVar11 = (double)MB_randRangeFloat(0.0,1.0);
    *(float *)(param_1 + 0xc) = (float)dVar11;
  }
  else {
    iVar8 = FastDecTimerS16(param_5);
    if (iVar8 != 0) {
      MB_randRangeFloat((float)(longlong)DAT_007ab0e8,(float)(longlong)DAT_007ab0ec);
      sVar9 = FastDoubleToInt();
      *param_5 = -sVar9;
      return;
    }
  }
  iVar8 = FastCheckBsphereInView(0x4040000000000000,local_90);
  if ((iVar8 != -1) && (iVar8 = FastDecTimerS16(param_4), iVar8 != 0)) {
    dVar12 = 1.0;
    dVar11 = (double)MB_randRangeFloat(1.0 - DAT_007ab0c4,DAT_007ab0c4 + 1.0);
    uVar3 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab0b8 * dVar11));
    uVar4 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab0bc * dVar11));
    uVar5 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab0c0 * dVar11));
    dVar11 = 0.0;
    MB_randSphere(0,(double)(DAT_007ab0a4 * g_FrameTime),auStack_70);
    MB_randRangeFloat(DAT_007ab0a8,DAT_007ab0ac);
    MB_randRangeFloat(DAT_007ab0b0,DAT_007ab0b4);
    uVar2 = DAT_007ab0cc;
    uVar1 = DAT_007ab0c8;
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar6 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_007ab0d4;
    uVar1 = DAT_007ab0d0;
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar7 = FastLerpColor(uVar1,uVar2);
    SpawnPart_2(local_a0,local_80,auStack_70,uVar6,uVar7,uVar3,uVar4,uVar5);
    MB_randRangeFloat((float)(longlong)DAT_007ab0d8,(float)(longlong)DAT_007ab0dc);
    uVar10 = FastDoubleToInt();
    *param_4 = uVar10;
  }
  return;
}


