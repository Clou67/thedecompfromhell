// game/update/moby27.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x320598-0x320b4c
#include "game/update/moby27.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0320598 (0x5b4 bytes)
/* Moby 27 */

void UpdateMoby_27(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double in_f30;
  double dVar25;
  GPiece<16> local_170;
  GPiece<16> local_160;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  pvVar11 = moby->pVar;
  if ((Level != Novalis) ||
     (iVar13 = FastCheckBsphereInView(0x406e000000000000,local_170), iVar13 != -1)) {
    *(MobyInstance **)((int)pvVar11 + 0x7c) = moby;
    if (*(int *)((int)pvVar11 + 200) < 1) {
      iVar13 = 0;
      *(uint *)((int)pvVar11 + 200) = (uint)*(byte *)((int)pvVar11 + 0xc5);
      if (*(char *)((int)pvVar11 + 0xc4) != '\0') {
        dVar23 = 3.1415927410125732;
        dVar24 = 0.0055555556900799274;
        dVar25 = in_f30;
        do {
          dVar19 = (double)(moby->pos).x;
          dVar20 = (double)(moby->pos).y;
          dVar21 = (double)(moby->pos).z;
          dVar22 = (double)(moby->pos).w;
          dVar14 = (double)MB_randRangeFloat
                                     (-*(float *)((int)pvVar11 + 0xcc),
                                      *(float *)((int)pvVar11 + 0xcc));
          dVar15 = (double)MB_randRangeFloat
                                     (-*(float *)((int)pvVar11 + 0xd0),
                                      *(float *)((int)pvVar11 + 0xd4));
          dVar16 = (double)MB_randRangeFloat
                                     (-*(float *)((int)pvVar11 + 0xd4),
                                      *(float *)((int)pvVar11 + 0xd4));
          uVar12 = *(uint *)((int)pvVar11 + 0x70);
          if ((uVar12 & 0x2000) != 0) {
            FastEulerToMtx1(&local_150,(longlong)(int)moby + 0x40);
            dVar4 = (double)local_140 * dVar15;
            dVar5 = (double)local_138 * dVar15;
            dVar6 = (double)local_134 * dVar15;
            dVar1 = (double)local_148 * dVar14;
            dVar2 = (double)local_144 * dVar14;
            dVar3 = (double)local_124 * dVar16;
            uVar12 = *(uint *)((int)pvVar11 + 0x70);
            dVar15 = (double)(float)((double)local_11c * in_f30 +
                                    (double)(float)((double)local_12c * dVar16 +
                                                   (double)(float)((double)local_14c * dVar14 +
                                                                  (double)(float)((double)local_13c
                                                                                 * dVar15))));
            dVar14 = (double)(float)((double)local_120 * in_f30 +
                                    (double)(float)((double)local_130 * dVar16 +
                                                   (double)(float)((double)local_150 * dVar14 +
                                                                  (double)(float)dVar4)));
            dVar16 = (double)(float)((double)local_118 * in_f30 +
                                    (double)(float)((double)local_128 * dVar16 +
                                                   (double)(float)(dVar1 + (double)(float)dVar5)));
            in_f30 = (double)(float)((double)local_114 * in_f30 +
                                    (double)(float)(dVar3 + (double)(float)(dVar2 + (double)(float)
                                                  dVar6)));
          }
          dVar19 = (double)(float)(dVar19 + dVar14);
          dVar14 = (double)(float)(dVar21 + dVar16);
          dVar15 = (double)(float)(dVar20 + dVar15);
          if ((uVar12 & 0x1000) == 0) {
            dVar16 = (double)MB_randRangeFloat
                                       (*(float *)((int)pvVar11 + 0x80),
                                        *(float *)((int)pvVar11 + 0x90));
            dVar21 = (double)(float)(dVar16 * (double)DAT_0071f408);
            dVar16 = (double)MB_randRangeFloat
                                       (*(float *)((int)pvVar11 + 0x84),
                                        *(float *)((int)pvVar11 + 0x94));
            dVar20 = (double)(float)(dVar16 * (double)DAT_0071f408);
            dVar16 = (double)MB_randRangeFloat
                                       (*(float *)((int)pvVar11 + 0x88),
                                        *(float *)((int)pvVar11 + 0x98));
            dVar16 = (double)(float)(dVar16 * (double)DAT_0071f408);
            if ((*(uint *)((int)pvVar11 + 0x70) & 0x4000) != 0) {
              FastEulerToMtx1(&local_d0,(longlong)(int)moby + 0x40);
              dVar5 = (double)local_b8 * dVar20;
              dVar6 = (double)local_b4 * dVar20;
              dVar1 = (double)local_cc * dVar21;
              dVar2 = (double)local_c8 * dVar21;
              dVar3 = (double)local_c4 * dVar21;
              dVar4 = (double)local_a4 * dVar16;
              dVar21 = (double)(float)((double)local_a0 * dVar25 +
                                      (double)(float)((double)local_b0 * dVar16 +
                                                     (double)(float)((double)local_d0 * dVar21 +
                                                                    (double)(float)((double)local_c0
                                                                                   * dVar20))));
              dVar20 = (double)(float)((double)local_9c * dVar25 +
                                      (double)(float)((double)local_ac * dVar16 +
                                                     (double)(float)(dVar1 + (double)(float)((double
                                                  )local_bc * dVar20))));
              dVar16 = (double)(float)((double)local_98 * dVar25 +
                                      (double)(float)((double)local_a8 * dVar16 +
                                                     (double)(float)(dVar2 + (double)(float)dVar5)))
              ;
              dVar25 = (double)(float)((double)local_94 * dVar25 +
                                      (double)(float)(dVar4 + (double)(float)(dVar3 + (double)(float
                                                  )dVar6)));
            }
            uVar17 = MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa8),*(float *)((int)pvVar11 + 0xac));
            uVar18 = MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa0),*(float *)((int)pvVar11 + 0xa4));
            SpawnPart_6
                      (dVar21,dVar20,dVar16,uVar17,uVar18,(double)*(float *)((int)pvVar11 + 0xb0),
                       (double)*(float *)((int)pvVar11 + 0xb4),
                       (double)*(float *)((int)pvVar11 + 0xb8),
                       (double)*(float *)((int)pvVar11 + 0xbc),pvVar11,0xff,
                       CONCAT44((float)dVar19,(float)dVar15),CONCAT44((float)dVar14,(float)dVar22));
          }
          else {
            dVar16 = (double)MB_randRangeFloat
                                       (-*(float *)((int)pvVar11 + 0x90),
                                        *(float *)((int)pvVar11 + 0x90));
            dVar16 = (double)(float)(dVar16 * dVar23) * dVar24;
            MB_randRangeFloat
                      (-*(float *)((int)pvVar11 + 0x94),*(float *)((int)pvVar11 + 0x94));
            MB_randRangeFloat
                      (-*(float *)((int)pvVar11 + 0x98),*(float *)((int)pvVar11 + 0x98));
            if ((*(uint *)((int)pvVar11 + 0x70) & 0x4000) != 0) {
              dVar16 = (double)FastWrapRot((float)dVar16,(moby->rotation).x);
              FastWrapRot((float)dVar16,(moby->rotation).y);
              FastWrapRot((float)dVar16,(moby->rotation).z);
            }
            FastEulerToMtx1(&local_110,local_160);
            fVar7 = *(float *)((int)pvVar11 + 0x84);
            fVar8 = *(float *)((int)pvVar11 + 0x80);
            fVar9 = *(float *)((int)pvVar11 + 0x88);
            fVar10 = *(float *)((int)pvVar11 + 0x8c);
            dVar21 = (double)(local_e0 * fVar10 +
                             local_f0 * fVar9 + local_110 * fVar8 + local_100 * fVar7);
            dVar20 = (double)(local_dc * fVar10 +
                             local_ec * fVar9 + local_10c * fVar8 + local_fc * fVar7);
            dVar16 = (double)(local_d8 * fVar10 +
                             local_e8 * fVar9 + local_108 * fVar8 + local_f8 * fVar7);
            uVar17 = MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa8),*(float *)((int)pvVar11 + 0xac));
            uVar18 = MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa0),*(float *)((int)pvVar11 + 0xa4));
            SpawnPart_6
                      (dVar21,dVar20,dVar16,uVar17,uVar18,(double)*(float *)((int)pvVar11 + 0xb0),
                       (double)*(float *)((int)pvVar11 + 0xb4),
                       (double)*(float *)((int)pvVar11 + 0xb8),
                       (double)*(float *)((int)pvVar11 + 0xbc),pvVar11,0xff,
                       CONCAT44((float)dVar19,(float)dVar15),CONCAT44((float)dVar14,(float)dVar22));
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)(uint)*(byte *)((int)pvVar11 + 0xc4));
      }
    }
    else {
      *(int *)((int)pvVar11 + 200) = *(int *)((int)pvVar11 + 200) + -1;
    }
  }
  return;
}


