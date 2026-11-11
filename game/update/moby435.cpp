// game/update/moby435.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3731e8-0x374e40
#include "game/update/moby435.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby1118.h"
#include "game/update/moby344.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x03731e8 (0x14 bytes)
void M435_003731e8(void)

{
  DAT_00841728 = 0x10000;
  return;
}


// 0x0373230 (0x46c bytes)
void M435_00373230(int param_1,longlong param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  ulonglong uVar14;
  MobyInstance *pMVar16;
  undefined8 uVar15;
  longlong lVar17;
  int iVar18;
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
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  
  dVar27 = 6.0;
  dVar29 = 15.0;
  lVar17 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x20;
  dVar28 = 1.0;
  if (param_4 == 0) {
    MB_genericExplosion
              (0,0,0x4024000000000000,0x4018000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,param_1,lVar17,param_1 + 0x10,&DAT_00373200,0xffffffffffffffff,
               0x2d,0x1e,0x1e);
  }
  else {
    MB_genericExplosion
              (0,0,0x4018000000000000,0x4010000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,param_1,lVar17,param_1 + 0x10,0xffffffffffffffff,&DAT_00373200,
               0x1e,0x14,0x14);
  }
  if (0 < param_3) {
    iVar18 = 0;
    dVar22 = -1.0;
    dVar23 = 12.0;
    dVar24 = 18.0;
    dVar25 = 60.0;
    dVar26 = 90.0;
    do {
      if (param_4 == 0) {
        uVar14 = MB_randInt(0xff);
        if ((uVar14 & 1) == 0) {
          pMVar16 = CreateMoby(0x311);
        }
        else {
          pMVar16 = CreateMoby(DOOR_LEFT|BOLT_CIRCLENUT);
        }
      }
      else {
        uVar14 = MB_randInt(0xff);
        if ((uVar14 & 1) == 0) {
          pMVar16 = CreateMoby(0x30f);
        }
        else {
          pMVar16 = CreateMoby(0x30e);
        }
      }
      pMVar16->drawDistance = 0x40;
      pMVar16->updateDistance = '@';
      pMVar16->enabled = '\x01';
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      pMVar16->color = (int)((ulonglong)uVar15 >> 0x20);
      pMVar16->light = (int)uVar15;
      dVar19 = (double)MB_randRot();
      (pMVar16->rotation).x = (float)dVar19;
      dVar19 = (double)MB_randRot();
      (pMVar16->rotation).y = (float)dVar19;
      dVar19 = (double)MB_randRot();
      (pMVar16->rotation).z = (float)dVar19;
      dVar19 = (double)MB_randRangeFloat((float)dVar22,(float)dVar28);
      dVar20 = (double)MB_randRangeFloat((float)dVar22,(float)dVar28);
      dVar21 = (double)MB_randRangeFloat((float)dVar22,(float)dVar28);
      pfVar13 = (float *)((int)&(Cuboids->matrix).v0.x + (int)(param_2 << 7));
      fVar1 = pfVar13[5];
      fVar2 = pfVar13[6];
      fVar3 = pfVar13[1];
      fVar4 = pfVar13[7];
      fVar5 = pfVar13[2];
      fVar6 = pfVar13[3];
      fVar7 = pfVar13[9];
      fVar8 = pfVar13[10];
      fVar9 = pfVar13[0xb];
      fVar10 = pfVar13[0xd];
      fVar11 = pfVar13[0xe];
      fVar12 = pfVar13[0xf];
      (pMVar16->pos).x =
           (float)((double)pfVar13[8] * dVar21 +
                  (double)(float)((double)*pfVar13 * dVar19 +
                                 (double)(float)((double)pfVar13[4] * dVar20))) + pfVar13[0xc];
      (pMVar16->pos).y =
           (float)((double)fVar7 * dVar21 +
                  (double)(float)((double)fVar3 * dVar19 + (double)(float)((double)fVar1 * dVar20)))
           + fVar10;
      (pMVar16->pos).z =
           (float)((double)fVar8 * dVar21 +
                  (double)(float)((double)fVar5 * dVar19 + (double)(float)((double)fVar2 * dVar20)))
           + fVar11;
      (pMVar16->pos).w =
           (float)((double)fVar9 * dVar21 +
                  (double)(float)((double)fVar6 * dVar19 + (double)(float)((double)fVar4 * dVar20)))
           + fVar12;
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar23),
                 (float)((double)g_FrameTime * dVar29));
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar27),
                 (float)((double)g_FrameTime * dVar24));
      MB_randRangeFloat((float)dVar25,(float)dVar26);
      uVar15 = FastDoubleToInt();
      FUN_003509b0(pMVar16,param_1,local_b0,local_c0,uVar15);
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_3);
  }
  return;
}


// 0x0373720 (0x1720 bytes)
/* Moby 435 */

Spline * UpdateMoby_435(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  int *piVar12;
  f32 fVar13;
  undefined4 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  longlong lVar21;
  int iVar25;
  Spline *pSVar26;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar27;
  int iVar28;
  MobyInstance *pMVar29;
  ushort *puVar30;
  ulonglong uVar31;
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
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  Vec4 local_160;
  Vec4 local_150;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  Vec4 local_130;
  Vec4 local_120;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  Vec4 local_100;
  Vec4 local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  f32 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  
  lVar21 = (longlong)(int)moby;
  iVar28 = 0;
  pvVar11 = moby->pVar;
  uVar31 = ZEXT48(pvVar11);
  iVar25 = MB_damage(lVar21,0x210000);
  bVar2 = moby->state;
  fVar3 = (moby->rotation).x;
  uVar27 = (uint)bVar2;
  if ((iVar25 == 0) || (uVar27 == 4)) {
    if (uVar27 == 6) {
      if (MobyInstancePermEnd < moby) {
        MB_genericExplosion
                  (0,0,0x4008000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar21,uVar31 + 0x20,lVar21 + 0x10,1,0xffffffffffffffff,0xf,10
                   ,10);
      }
      pSVar26 = (Spline *)DeleteMoby(moby);
    }
    else if (bVar2 == 5) {
      dVar32 = 0.5235987901687622;
      DeltAng(*(float *)((int)pvVar11 + 0x44),g_FrameTime * 0.5235988,
                        &(moby->rotation).z,5,iVar28,0);
      DeltAng(-*(float *)((int)pvVar11 + 0x40),
                        (float)((double)g_FrameTime * dVar32),&(moby->rotation).y,uVar27,
                        iVar28,0);
      dVar32 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 6.2831855);
      (moby->rotation).x = (float)dVar32;
      MB_SphericalToVector
                (DAT_0084174c * 2.0 * g_FrameTime,(moby->rotation).z,-(moby->rotation).y,
                 (float *)((int)pvVar11 + 0x20));
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar11 + 0x20);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar11 + 0x24);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x28);
      iVar25 = STUB_00055ac0_RET_0(lVar21 + 0x10,0x400,2,lVar21,0);
      if (iVar25 == 0) {
        fVar13 = (moby->pos).x;
        uVar27 = (int)fVar13 >> 0x1f;
        iVar25 = (uVar27 >> 1 ^ (uint)fVar13) - uVar27;
        if (((0x409fffff < iVar25) && (iVar25 < 0x43fa0001)) &&
           (fVar13 = (moby->pos).y, uVar27 = (int)fVar13 >> 0x1f,
           iVar25 = (uVar27 >> 1 ^ (uint)fVar13) - uVar27,
           iVar25 < 0x43fa0001 && 0x409fffff < iVar25)) {
          fVar13 = (moby->pos).z;
          uVar27 = (int)fVar13 >> 0x1f;
          iVar25 = (uVar27 >> 1 ^ (uint)fVar13) - uVar27;
          if ((0x409fffff < iVar25) && (iVar25 < 0x43fa0001)) {
            fVar4 = g_heroPosition.y - (moby->pos).y;
            fVar3 = g_heroPosition.x - (moby->pos).x;
            fVar5 = g_heroPosition.z - (moby->pos).z;
            if (16.0 <= SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4)) {
              return (Spline *)&DAT_0037369c;
            }
            moby->state = '\x06';
            return (Spline *)0x6;
          }
        }
        pSVar26 = (Spline *)0x6;
        moby->state = '\x06';
      }
      else {
        pSVar26 = (Spline *)0x6;
        moby->state = '\x06';
      }
    }
    else {
      pSVar26 = (Spline *)g_gameMode;
      if (bVar2 == 4) {
        if (g_gameMode == GAME_MODE_NORMAL) {
          piVar12 = *(int **)((int)pvVar11 + 0x60);
          iVar25 = *piVar12;
          iVar28 = *(int *)((int)pvVar11 + 0x50) + iVar25 + (int)*(char *)((int)pvVar11 + 0x54);
          iVar28 = iVar28 - (iVar28 / iVar25) * iVar25;
          uVar22 = FUN_005e8338((double)((float)piVar12[iVar28 * 4 + 4] - (moby->pos).x),
                                (double)((float)piVar12[iVar28 * 4 + 5] - (moby->pos).y));
          dVar33 = 1.0;
          OrganicDeltAngSpeed
                    (uVar22,0x3fb99999a0000000,0x3ff4ccccc0000000,0x3ff0000000000000,lVar21,
                     &DAT_0037369c,uVar31 + 0x80);
          iVar25 = *(int *)((int)pvVar11 + 0x60) + iVar28 * 0x10;
          fVar3 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
          fVar4 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
          dVar32 = (double)FUN_005e8338((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3),
                                        (double)((moby->pos).z - *(float *)(iVar25 + 0x18)));
          (moby->rotation).y = (float)dVar32;
          pMVar29 = g_MobyInstance;
          piVar12 = *(int **)((int)pvVar11 + 0x60);
          if (*(int *)((int)pvVar11 + 0x50) == *piVar12 + -1) {
            pSVar26 = (Spline *)&g_MobyGroups;
            puVar30 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
            if (puVar30 != (ushort *)0x0) {
              uVar9 = *puVar30;
              bVar15 = false;
              (&g_MiscLevelFlags.field44_0x2c)[*(int *)((int)pvVar11 + 0x90)] = 1;
              pMVar29 = pMVar29 + (uVar9 & 0x7fff);
              dVar38 = 0.0;
              dVar46 = 12.0;
              dVar44 = 8.0;
              dVar42 = 0.7853981852531433;
              dVar45 = 10.0;
              dVar36 = 20.0;
              dVar34 = 60.0;
              dVar32 = 90.0;
              uVar23 = 0x4022000000000000;
              uVar22 = 0x402e000000000000;
              while( true ) {
                if ((pMVar29->state < 0x7f) && (pMVar29 != moby)) {
                  MVar10 = pMVar29->oClass;
                  if ((short)MVar10 < 0x229 && 0x222 < (short)MVar10) {
                    local_d4 = 0.0;
                    local_d8 = 0.0;
                    local_dc = 0.0;
                    local_e0 = 0.0;
                    MVar10 = pMVar29->oClass;
                    if (MVar10 == 0x228) {
                      local_d0 = 0;
                      local_cc = 0;
                      local_c8 = 0;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x227) {
                      local_d0 = 0;
                      local_cc = 0xbfd51eb8;
                      local_c8 = 0x3f245a1d;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x226) {
                      local_d0 = 0;
                      local_cc = 0;
                      local_c8 = 0x3f79999a;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x225) {
                      local_d0 = 0xc0000000;
                      local_c4 = 0;
                      local_cc = 0xbf9374bc;
                      local_c8 = 0xbfe2d0e5;
                    }
                    else if (MVar10 == 0x224) {
                      local_d0 = 0xc0c00000;
                      local_cc = 0x40c00000;
                      local_c8 = 0xbfe2d0e5;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x223) {
                      local_d0 = 0xc0552f1b;
                      local_c4 = 0;
                      local_cc = 0x40552f1b;
                      local_c8 = 0x3e8ccccd;
                    }
                    fVar13 = (pMVar29->bSphere).rad;
                    uVar27 = (int)fVar13 >> 0x1f;
                    if ((int)((uVar27 >> 1 ^ (uint)fVar13) - uVar27) < 0x44bb8001) {
                      fVar4 = (pMVar29->pos).x - (moby->pos).x;
                      fVar5 = (pMVar29->pos).y - (moby->pos).y;
                      dVar35 = (double)g_FrameTime;
                      dVar41 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
                      local_d4 = (pMVar29->pos).w;
                      local_d8 = 0.0;
                      fVar3 = (float)((double)(float)(dVar35 * dVar46) / dVar41);
                      dVar37 = (double)(fVar4 * fVar3);
                      dVar39 = (double)(fVar5 * fVar3);
                      dVar43 = dVar38;
                      if (dVar38 - dVar41 < 0.0) {
                        dVar43 = dVar37;
                      }
                      dVar40 = dVar38;
                      if (dVar38 - dVar41 < 0.0) {
                        dVar40 = dVar39;
                      }
                      if (dVar41 - dVar38 < 0.0) {
                        dVar43 = dVar37;
                      }
                      if (dVar41 - dVar38 < 0.0) {
                        dVar40 = dVar39;
                      }
                      local_e0 = (float)dVar43;
                      local_dc = (float)dVar40;
                      dVar43 = (double)MB_randRangeFloat
                                                 ((float)(dVar35 * dVar44),(float)(dVar35 * dVar46))
                      ;
                      local_d8 = (float)dVar43;
                      pMVar29->collision = (ushort *)0x0;
                      dVar43 = (double)FUN_005e8338((double)local_e0,(double)local_dc);
                      dVar35 = (double)FUN_005e8338((double)(GameCamera.posX - (moby->pos).x),
                                                    (double)(GameCamera.posY - (moby->pos).y));
                      dVar43 = (double)FastSubRots((float)dVar43,(float)dVar35);
                      if (dVar42 <= dVar43) {
                        MB_randRangeFloat((float)dVar34,(float)dVar32);
                        uVar24 = FastDoubleToInt();
                        FUN_003509b0(pMVar29,lVar21,&local_e0,&local_d0,uVar24);
                      }
                      else {
                        MB_randRangeFloat((float)dVar45,(float)dVar36);
                        uVar24 = FastDoubleToInt();
                        FUN_003509b0(pMVar29,lVar21,&local_e0,&local_d0,uVar24);
                      }
                    }
                    else {
                      DeleteMoby(pMVar29);
                    }
                  }
                  else if (MVar10 == SHUTTLE_01A8) {
                    local_b4 = 0;
                    bVar15 = true;
                    local_b8 = 0;
                    local_bc = 0;
                    local_c0 = 0;
                    MB_genericExplosion
                              (dVar38,dVar38,dVar46,dVar44,uVar23,dVar33,uVar22,pMVar29,&local_c0,
                               &pMVar29->pos);
                    DeleteMoby(pMVar29);
                  }
                }
                uVar9 = *puVar30;
                puVar30 = puVar30 + 1;
                if ((short)uVar9 < -1) break;
                pMVar29 = g_MobyInstance + (*puVar30 & 0x7fff);
              }
              if (bVar15) {
                M435_00373230
                          (lVar21,*(undefined4 *)((int)pvVar11 + 0x88),0x1e,1);
              }
              else {
                M435_00373230
                          (lVar21,*(undefined4 *)((int)pvVar11 + 0x88),0x1e,0);
              }
              PlayMobySound(2,0,moby);
              pSVar26 = (Spline *)0x6;
              moby->state = '\x06';
            }
          }
          else {
            fVar3 = (moby->pos).y;
            fVar4 = (moby->pos).x;
            fVar18 = (float)piVar12[iVar28 * 4 + 5] - fVar3;
            fVar5 = (moby->pos).z;
            fVar7 = (float)piVar12[iVar28 * 4 + 4] - fVar4;
            fVar17 = (float)piVar12[iVar28 * 4 + 6] - fVar5;
            fVar1 = 0.0;
            fVar6 = SQRT(fVar17 * fVar17 + fVar7 * fVar7 + fVar18 * fVar18);
            fVar19 = (DAT_00841754 * g_FrameTime) / fVar6;
            fVar8 = fVar1;
            if (0.0 - fVar6 < 0.0) {
              fVar8 = fVar18 * fVar19;
            }
            fVar16 = fVar1;
            if (0.0 - fVar6 < 0.0) {
              fVar16 = fVar7 * fVar19;
            }
            if (0.0 - fVar6 < 0.0) {
              fVar1 = fVar17 * fVar19;
            }
            if (fVar6 - 0.0 < 0.0) {
              fVar8 = fVar18 * fVar19;
            }
            if (fVar6 - 0.0 < 0.0) {
              fVar16 = fVar7 * fVar19;
            }
            if (fVar6 - 0.0 < 0.0) {
              fVar1 = fVar17 * fVar19;
            }
            fVar3 = fVar3 + fVar8;
            fVar4 = fVar4 + fVar16;
            fVar5 = fVar5 + fVar1;
            fVar1 = fVar3 - (float)piVar12[iVar28 * 4 + 5];
            fVar6 = fVar4 - (float)piVar12[iVar28 * 4 + 4];
            fVar7 = fVar5 - (float)piVar12[iVar28 * 4 + 6];
            (moby->pos).x = fVar4;
            (moby->pos).y = fVar3;
            (moby->pos).z = fVar5;
            dVar32 = 0.5;
            if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1) < 0.5) {
              *(int *)((int)pvVar11 + 0x50) = iVar28;
            }
            local_100.x = 0.0;
            local_100.y = 0.0;
            local_100.z = 0.0;
            local_100.w = 0.0;
            dVar45 = -1.0;
            dVar34 = (double)MB_randRangeFloat(-1.0,(float)dVar33);
            local_100.x = (float)dVar34;
            dVar34 = (double)MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_100.y = (float)dVar34;
            dVar34 = (double)MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_100.z = (float)dVar34;
            dVar36 = 2.0;
            ClampVec3Magnitude((double)(g_FrameTime * 2.0),&local_100);
            iVar25 = MB_randRange(0x1e,0x2d);
            iVar25 = (int)(animationSpeed * (float)((double)(longlong)iVar25 + dVar32));
            local_b0 = (longlong)iVar25;
            uVar22 = MB_randRange(0x28,0x46);
            SpawnPart_4(lVar21 + 0x10,&local_100,0x6f00afff,0xff,iVar25,0x28,uVar22,1);
            local_f0.x = 0.0;
            local_f0.y = 0.0;
            local_f0.z = 0.0;
            local_f0.w = 0.0;
            dVar34 = (double)MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_f0.x = (float)dVar34;
            dVar34 = (double)MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_f0.y = (float)dVar34;
            dVar33 = (double)MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_f0.z = (float)dVar33;
            ClampVec3Magnitude
                      ((double)(float)((double)g_FrameTime * dVar36),&local_f0);
            iVar25 = MB_randRange(0x3c,0x78);
            iVar25 = (int)(animationSpeed * (float)((double)(longlong)iVar25 + dVar32));
            local_b0 = (longlong)iVar25;
            uVar22 = MB_randRange(100,0x96);
            pSVar26 = (Spline *)
                      SpawnPart_4
                                (lVar21 + 0x10,&local_f0,0x1fffffff,0x4f4f4f,iVar25,0x28,uVar22,0);
          }
        }
      }
      else if (bVar2 == 3) {
        if (g_gameMode == GAME_MODE_NORMAL) {
          piVar12 = *(int **)((int)pvVar11 + 0x60);
          iVar25 = *piVar12 + -1;
          pSVar26 = (Spline *)&g_heroMtx;
          if ((SQRT((g_heroPosition.z - (float)piVar12[iVar25 * 4 + 6]) *
                    (g_heroPosition.z - (float)piVar12[iVar25 * 4 + 6]) +
                    (g_heroPosition.x - (float)piVar12[iVar25 * 4 + 4]) *
                    (g_heroPosition.x - (float)piVar12[iVar25 * 4 + 4]) +
                    (g_heroPosition.y - (float)piVar12[iVar25 * 4 + 5]) *
                    (g_heroPosition.y - (float)piVar12[iVar25 * 4 + 5])) <
               *(float *)((int)pvVar11 + 0x8c)) &&
             (pSVar26 = (Spline *)FastDecTimerS32(uVar31 + 0x94), pSVar26 != (Spline *)0x0
             )) {
            moby->drawDistance = 0x40;
            moby->state = '\x04';
            fVar3 = (moby->pos).x;
            moby->collision = moby->pClass->collision;
            dVar32 = (double)FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar11 + 0x60) + 0x20)
                                                  - fVar3),
                                          (double)(*(float *)(*(int *)((int)pvVar11 + 0x60) + 0x24)
                                                  - (moby->pos).y));
            (moby->rotation).z = (float)dVar32;
            pSVar26 = (Spline *)PlayMobySound(1,0,moby);
          }
        }
      }
      else if (uVar27 == 2) {
        iVar25 = *(int *)(*(int *)((int)pvVar11 + 0x4c) + 0x78);
        dVar32 = (double)FastWrapRot(fVar3,g_FrameTime * 6.2831855);
        (moby->rotation).x = (float)dVar32;
        fVar3 = moby->pClass->gScale;
        Delt(fVar3 * 3.0,fVar3 / (float)(longlong)(animationSpeed * 180.5),&moby->scale);
        iVar28 = *(int *)((int)pvVar11 + 0x4c);
        local_130.x = *(float *)(iVar28 + 0x10) - (moby->pos).x;
        local_130.y = *(float *)(iVar28 + 0x14) - (moby->pos).y;
        local_130.w = *(float *)(iVar28 + 0x1c);
        local_130.z = (*(float *)(iVar28 + 0x18) + 5.0) - (moby->pos).z;
        ClampVec3Magnitude
                  ((double)(*(float *)(iVar25 + 0x98) * g_FrameTime),&local_130);
        local_120.x = local_130.x - *(float *)((int)pvVar11 + 0x20);
        local_120.y = local_130.y - *(float *)((int)pvVar11 + 0x24);
        local_120.w = local_130.w;
        local_120.z = local_130.z - *(float *)((int)pvVar11 + 0x28);
        ClampVec3Magnitude((double)(DAT_00841750 * 4.0 * DAT_0071f418),&local_120);
        fVar3 = *(float *)((int)pvVar11 + 0x20) + local_120.x;
        *(float *)((int)pvVar11 + 0x20) = fVar3;
        *(float *)((int)pvVar11 + 0x24) = *(float *)((int)pvVar11 + 0x24) + local_120.y;
        *(float *)((int)pvVar11 + 0x28) = *(float *)((int)pvVar11 + 0x28) + local_120.z;
        (moby->pos).x = (moby->pos).x + fVar3;
        (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar11 + 0x24);
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x28);
        dVar32 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar11 + 0x20) *
                                                   *(float *)((int)pvVar11 + 0x20) +
                                                   *(float *)((int)pvVar11 + 0x24) *
                                                   *(float *)((int)pvVar11 + 0x24)),
                                      (double)*(float *)((int)pvVar11 + 0x28));
        (moby->rotation).y = (float)-dVar32;
        dVar32 = (double)FUN_005e8338((double)*(float *)((int)pvVar11 + 0x20),
                                      (double)*(float *)((int)pvVar11 + 0x24));
        (moby->rotation).z = (float)dVar32;
        iVar28 = *(int *)((int)pvVar11 + 0x4c);
        fVar3 = (moby->pos).y - *(float *)(iVar28 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar28 + 0x10);
        fVar5 = (moby->pos).z - *(float *)(iVar28 + 0x18);
        if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_00841758) {
          *(int *)(iVar25 + 0x58) = *(int *)(iVar25 + 0x58) + -0x3c;
          *(undefined4 *)((int)pvVar11 + 0x2c) = 0;
          *(undefined4 *)((int)pvVar11 + 0x28) = 0;
          *(undefined4 *)((int)pvVar11 + 0x24) = 0;
          *(undefined4 *)((int)pvVar11 + 0x20) = 0;
          PlayMobySound(0,0,moby);
          moby->state = '\x06';
        }
        dVar33 = 0.0;
        dVar32 = (double)MB_randRangeFloat(0.0,DAT_00841760);
        dVar34 = (double)(float)(dVar32 * (double)g_FrameTime);
        dVar32 = (double)MB_randRot();
        uVar20 = DAT_0084177c;
        uVar14 = DAT_00841778;
        fVar4 = (moby->transform).v2.y;
        fVar3 = (float)(dVar32 + 1.570796251296997);
        fVar5 = (moby->transform).v2.x;
        fVar6 = (moby->transform).v2.z;
        fVar7 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar7 = fVar3;
        }
        dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar1 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
          fVar1 = fVar7;
        }
        fVar3 = (moby->transform).v1.x;
        fVar7 = (moby->transform).v1.y;
        fVar8 = (moby->transform).v1.z;
        fVar19 = fVar1 * fVar1;
        fVar17 = fVar19 * fVar19 * fVar1;
        fVar18 = fVar19 * fVar17;
        dVar45 = dVar33;
        dVar42 = dVar33;
        dVar44 = dVar33;
        if (dVar36 != dVar33) {
          fVar1 = (float)((double)(float)(dVar34 * (double)(fVar19 * fVar18 * 2.601887e-06 +
                                                           fVar18 * -0.0001980741 +
                                                           fVar17 * 0.0083330255 +
                                                           fVar19 * fVar1 * -0.16666657 + fVar1)) /
                         dVar36);
          dVar45 = (double)(fVar5 * fVar1);
          dVar42 = (double)(fVar4 * fVar1);
          dVar44 = (double)(fVar6 * fVar1);
        }
        dVar36 = (double)(float)(3.141592502593994 - dVar32);
        if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
          dVar36 = dVar32;
        }
        dVar38 = (double)SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7);
        dVar46 = (double)(float)(-3.141592502593994 - dVar32);
        if ((double)(float)(-3.141592502593994 - dVar32) - dVar36 < 0.0) {
          dVar46 = dVar36;
        }
        dVar32 = (double)(float)(dVar46 * dVar46);
        dVar43 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar46));
        dVar36 = (double)(float)(dVar32 * dVar43);
        fVar4 = (float)((double)(float)(dVar34 * (double)((float)(dVar32 * dVar36) * 2.601887e-06 +
                                                         (float)(dVar36 * -0.0001980741071747616 +
                                                                (double)(float)(dVar43 * 
                                                  0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar32 * dVar46) *
                                                                  -0.16666656732559204 + dVar46)))))
                       / dVar38);
        local_104 = DAT_00841770;
        dVar32 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        dVar36 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        local_108 = (float)(dVar44 + dVar32);
        local_10c = (float)(dVar42 + dVar34);
        local_110 = (float)(dVar45 + dVar36);
        iVar25 = (int)(animationSpeed * ((float)(longlong)DAT_0084176c + 0.5));
        local_b0 = (longlong)iVar25;
        uVar22 = FastDoubleToInt();
        uVar23 = FastDoubleToInt((double)DAT_00841774);
        pSVar26 = (Spline *)
                  SpawnPart_4
                            (lVar21 + 0x10,&local_110,uVar14,uVar20,iVar25,uVar22,uVar23,1);
      }
      else if (uVar27 == 1) {
        iVar25 = *(int *)(*(int *)((int)pvVar11 + 0x4c) + 0x78);
        dVar32 = (double)FastWrapRot(fVar3,g_FrameTime * 6.2831855);
        iVar28 = *(int *)((int)pvVar11 + 0x4c);
        (moby->rotation).x = (float)dVar32;
        local_170 = *(float *)(iVar28 + 0x10);
        local_16c = *(float *)(iVar28 + 0x14);
        local_164 = *(float *)(iVar28 + 0x1c);
        local_168 = *(float *)(iVar28 + 0x18) + 5.0;
        dVar32 = (double)FUN_005e8338((double)((moby->pos).x - local_170),
                                      (double)((moby->pos).y - local_16c));
        fVar3 = local_16c - (moby->pos).y;
        fVar4 = local_170 - (moby->pos).x;
        dVar33 = (double)FUN_005e8338((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3),
                                      (double)((moby->pos).z - local_168));
        MB_AddVectorSphere(&local_170,&local_170);
        local_160.x = local_170 - (moby->pos).x;
        local_160.y = local_16c - (moby->pos).y;
        local_160.z = local_168 - (moby->pos).z;
        local_160.w = local_164;
        ClampVec3Magnitude
                  ((double)(*(float *)(iVar25 + 0x98) * g_FrameTime),&local_160);
        local_150.x = local_160.x - *(float *)((int)pvVar11 + 0x20);
        local_150.y = local_160.y - *(float *)((int)pvVar11 + 0x24);
        local_150.w = local_160.w;
        local_150.z = local_160.z - *(float *)((int)pvVar11 + 0x28);
        ClampVec3Magnitude((double)(DAT_00841750 * DAT_0071f418),&local_150);
        fVar3 = *(float *)((int)pvVar11 + 0x20) + local_150.x;
        *(float *)((int)pvVar11 + 0x20) = fVar3;
        *(float *)((int)pvVar11 + 0x24) = *(float *)((int)pvVar11 + 0x24) + local_150.y;
        *(float *)((int)pvVar11 + 0x28) = *(float *)((int)pvVar11 + 0x28) + local_150.z;
        (moby->pos).x = (moby->pos).x + fVar3;
        (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar11 + 0x24);
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x28);
        dVar34 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar11 + 0x20) *
                                                   *(float *)((int)pvVar11 + 0x20) +
                                                   *(float *)((int)pvVar11 + 0x24) *
                                                   *(float *)((int)pvVar11 + 0x24)),
                                      (double)*(float *)((int)pvVar11 + 0x28));
        (moby->rotation).y = (float)-dVar34;
        dVar34 = (double)FUN_005e8338((double)*(float *)((int)pvVar11 + 0x20),
                                      (double)*(float *)((int)pvVar11 + 0x24));
        (moby->rotation).z = (float)dVar34;
        dVar32 = (double)FastSubRots((float)dVar32,*(float *)((int)pvVar11 + 0x44));
        dVar34 = 0.0872664600610733;
        if ((dVar32 < 0.0872664600610733) &&
           (dVar32 = (double)FastSubRots((float)dVar33,*(float *)((int)pvVar11 + 0x40)),
           dVar32 < dVar34)) {
          moby->state = '\x02';
        }
        dVar33 = 0.0;
        dVar32 = (double)MB_randRangeFloat(0.0,DAT_00841760);
        dVar34 = (double)(float)(dVar32 * (double)g_FrameTime);
        dVar32 = (double)MB_randRot();
        uVar20 = DAT_0084177c;
        uVar14 = DAT_00841778;
        fVar4 = (moby->transform).v2.y;
        fVar3 = (float)(dVar32 + 1.570796251296997);
        fVar5 = (moby->transform).v2.x;
        fVar6 = (moby->transform).v2.z;
        fVar7 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar7 = fVar3;
        }
        dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar1 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
          fVar1 = fVar7;
        }
        fVar3 = (moby->transform).v1.x;
        fVar7 = (moby->transform).v1.y;
        fVar8 = (moby->transform).v1.z;
        fVar19 = fVar1 * fVar1;
        fVar17 = fVar19 * fVar19 * fVar1;
        fVar18 = fVar19 * fVar17;
        dVar45 = dVar33;
        dVar42 = dVar33;
        dVar44 = dVar33;
        if (dVar36 != dVar33) {
          fVar1 = (float)((double)(float)(dVar34 * (double)(fVar19 * fVar18 * 2.601887e-06 +
                                                           fVar18 * -0.0001980741 +
                                                           fVar17 * 0.0083330255 +
                                                           fVar19 * fVar1 * -0.16666657 + fVar1)) /
                         dVar36);
          dVar45 = (double)(fVar5 * fVar1);
          dVar42 = (double)(fVar4 * fVar1);
          dVar44 = (double)(fVar6 * fVar1);
        }
        dVar36 = (double)(float)(3.141592502593994 - dVar32);
        if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
          dVar36 = dVar32;
        }
        dVar38 = (double)SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7);
        dVar46 = (double)(float)(-3.141592502593994 - dVar32);
        if ((double)(float)(-3.141592502593994 - dVar32) - dVar36 < 0.0) {
          dVar46 = dVar36;
        }
        dVar32 = (double)(float)(dVar46 * dVar46);
        dVar43 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar46));
        dVar36 = (double)(float)(dVar32 * dVar43);
        fVar4 = (float)((double)(float)(dVar34 * (double)((float)(dVar32 * dVar36) * 2.601887e-06 +
                                                         (float)(dVar36 * -0.0001980741071747616 +
                                                                (double)(float)(dVar43 * 
                                                  0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar32 * dVar46) *
                                                                  -0.16666656732559204 + dVar46)))))
                       / dVar38);
        local_134 = DAT_00841770;
        dVar32 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        dVar36 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        local_138 = (float)(dVar44 + dVar32);
        local_13c = (float)(dVar42 + dVar34);
        local_140 = (float)(dVar45 + dVar36);
        iVar25 = (int)(animationSpeed * ((float)(longlong)DAT_0084176c + 0.5));
        local_b0 = (longlong)iVar25;
        uVar22 = FastDoubleToInt();
        uVar23 = FastDoubleToInt((double)DAT_00841774);
        pSVar26 = (Spline *)
                  SpawnPart_4
                            (lVar21 + 0x10,&local_140,uVar14,uVar20,iVar25,uVar22,uVar23,1);
      }
      else {
        pSVar26 = (Spline *)(uint)(byte)moby->group;
        if (uVar27 == 0) {
          if ((&g_MiscLevelFlags.field44_0x2c)[*(int *)((int)pvVar11 + 0x90)] == 0) {
            if (*(int *)((int)pvVar11 + 0x90) == 0) {
              auVar47 = ZEXT416(0xffffffff);
              auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
              auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
              auVar47 = loadVectorLeftIndexed(8,0x37369c);
              auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar47 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                           auVar47 << 0x60,auVar48);
              auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
              auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar14 = storeVectorElementWordIndexed
                                 (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x94
                                  ,uVar31);
              *(undefined4 *)((int)pvVar11 + 0x94U & 0xfffffffc) = uVar14;
            }
            pSVar26 = Splines[*(int *)((int)pvVar11 + 100)];
            *(Spline **)((int)pvVar11 + 0x60) = pSVar26;
            (moby->pos).x = pSVar26->points[0].x;
            (moby->pos).y = pSVar26->points[0].y;
            (moby->pos).z = pSVar26->points[0].z;
            fVar3 = pSVar26->points[0].w;
            *(undefined4 *)((int)pvVar11 + 0x50) = 1;
            (moby->pos).w = fVar3;
            moby->drawDistance = 0;
            moby->collision = (ushort *)0x0;
            moby->state = '\x03';
          }
          else {
            puVar30 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
            do {
              DeleteMoby(g_MobyInstance + (*puVar30 & 0x7fff));
              uVar9 = *puVar30;
              puVar30 = puVar30 + 1;
              pSVar26 = (Spline *)(int)(short)uVar9;
            } while (-2 < (short)uVar9);
          }
        }
      }
    }
  }
  else {
    PlayMobySound(0,0,moby);
    MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar21,lVar21 + 0x10,&DAT_0037369c,
               0xffffffffffffffff);
    pSVar26 = (Spline *)DeleteMoby(moby);
  }
  return pSVar26;
}


