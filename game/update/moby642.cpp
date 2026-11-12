// game/update/moby642.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3fee50-0x3ff95c
#include "game/update/moby642.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x03fee50 (0xb0c bytes)
/* Moby 642 */

void UpdateMoby_642(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
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
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  dVar19 = -1.0;
  dVar20 = 1.0;
  dVar23 = 0.0;
  pfVar6 = (float *)moby->pVar;
  dVar13 = (double)MB_randRangeFloat(-1.0,1.0);
  dVar14 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
  dVar15 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
  fVar11 = (moby->pos).x;
  bVar3 = moby->state;
  dVar22 = (double)SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]);
  if (bVar3 == 0) {
    pfVar6[0xc] = fVar11;
    pfVar6[0xd] = (moby->pos).y;
    pfVar6[0xe] = (moby->pos).z;
    pfVar6[0xf] = (moby->pos).w;
    fVar11 = (float)MB_randRange(0x78,0x960);
    pfVar6[0x11] = fVar11;
    pfVar6[0x10] = fVar11;
    dVar13 = (double)MB_randRangeFloat(0.8,1.2);
    pfVar6[0x13] = (float)((double)moby->scale * dVar13);
    moby->scale = 0.0;
    moby->state = '\x01';
  }
  else if (bVar3 < 2) {
    fVar1 = (moby->pos).y - GameCamera.posY;
    fVar11 = fVar11 - GameCamera.posX;
    if ((SQRT(fVar11 * fVar11 + fVar1 * fVar1) < 32.0) &&
       (iVar12 = FastDecTimerS32(pfVar6 + 0x11), iVar12 != 0)) {
      dVar13 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
      dVar14 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
      dVar15 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
      fVar2 = DAT_00e5aef4;
      fVar11 = DAT_00e5aee4 + 1.5707963;
      dVar19 = (double)SQRT((float)(dVar15 * dVar15 +
                                   (double)(float)(dVar13 * dVar13 +
                                                  (double)(float)(dVar14 * dVar14))));
      pfVar6 = (float *)moby->pVar;
      fVar1 = 3.1415925 - fVar11;
      if (fVar11 - (3.1415925 - fVar11) < 0.0) {
        fVar1 = fVar11;
      }
      fVar4 = -3.1415925 - fVar11;
      if ((-3.1415925 - fVar11) - fVar1 < 0.0) {
        fVar4 = fVar1;
      }
      dVar22 = (double)(float)((double)(DAT_00e5aef4 * 0.2) / dVar19);
      fVar11 = fVar4 * fVar4;
      dVar20 = dVar23;
      if (dVar23 - dVar19 < 0.0) {
        dVar20 = (double)(float)(dVar14 * dVar22);
      }
      dVar17 = dVar23;
      if (dVar23 - dVar19 < 0.0) {
        dVar17 = (double)(float)(dVar13 * dVar22);
      }
      dVar21 = dVar23;
      if (dVar23 - dVar19 < 0.0) {
        dVar21 = (double)(float)(dVar15 * dVar22);
      }
      if (dVar19 - dVar23 < 0.0) {
        dVar20 = (double)(float)(dVar14 * dVar22);
      }
      if (dVar19 - dVar23 < 0.0) {
        dVar17 = (double)(float)(dVar13 * dVar22);
      }
      if (dVar19 - dVar23 < 0.0) {
        dVar21 = (double)(float)(dVar15 * dVar22);
      }
      fVar1 = fVar11 * fVar11 * fVar4;
      moby->scale = 0.0;
      moby->drawDistance = 0x40;
      moby->updateDistance = -1;
      fVar5 = fVar11 * fVar1;
      dVar13 = (double)SQRT((float)(dVar21 * dVar21 +
                                   (double)(float)(dVar17 * dVar17 +
                                                  (double)(float)(dVar20 * dVar20))));
      *pfVar6 = fVar2 * (fVar11 * fVar5 * 2.601887e-06 +
                        fVar5 * -0.0001980741 +
                        fVar1 * 0.0083330255 + fVar11 * fVar4 * -0.16666657 + fVar4);
      fVar1 = DAT_00e5aef4;
      fVar11 = 3.1415925 - DAT_00e5aee4;
      if (DAT_00e5aee4 - (3.1415925 - DAT_00e5aee4) < 0.0) {
        fVar11 = DAT_00e5aee4;
      }
      dVar14 = (double)(float)(3.1415927410125732 / dVar13);
      fVar2 = -3.1415925 - DAT_00e5aee4;
      if ((-3.1415925 - DAT_00e5aee4) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar11 = fVar2 * fVar2;
      fVar4 = fVar11 * fVar11 * fVar2;
      fVar5 = fVar11 * fVar4;
      pfVar6[2] = g_FrameTime * -0.5;
      dVar15 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar15 = (double)(float)(dVar17 * dVar14);
      }
      dVar19 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar14);
      }
      dVar22 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar14);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar15 = (double)(float)(dVar17 * dVar14);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar14);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar14);
      }
      pfVar6[1] = fVar1 * (fVar11 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar4 * 0.0083330255 + fVar11 * fVar2 * -0.16666657 + fVar2);
      (moby->rotation).x = (float)dVar15;
      (moby->rotation).y = (float)dVar19;
      (moby->rotation).z = (float)dVar22;
      (moby->rotation).w = 0.0;
      dVar15 = (double)(float)(0.09817477315664291 / dVar13);
      pfVar6[0xb] = 0.0;
      dVar14 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      dVar19 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      dVar22 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      pfVar6[8] = (float)dVar14;
      pfVar6[9] = (float)dVar19;
      pfVar6[10] = (float)dVar22;
      fVar11 = DAT_00e5aef4 * 0.5;
      pfVar6[7] = 0.0;
      dVar15 = (double)(float)((double)fVar11 / dVar13);
      dVar14 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      dVar19 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      dVar22 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      pfVar6[4] = (float)dVar14;
      pfVar6[5] = (float)dVar19;
      pfVar6[6] = (float)dVar22;
      fVar11 = (float)MB_randRange(0x2d0,0x4b0);
      pfVar6[0x11] = fVar11;
      pfVar6[0x10] = fVar11;
      moby->state = '\x02';
    }
  }
  else if (bVar3 < 3) {
    FastDecTimerS32(pfVar6 + 0x11);
    dVar21 = 0.10000000149011612;
    dVar20 = (double)SQRT((float)(dVar15 * dVar15 +
                                 (double)(float)(dVar13 * dVar13 + (double)(float)(dVar14 * dVar14))
                                 ));
    dVar17 = (double)(float)((double)(DAT_00e5aef4 * 0.1) / dVar20);
    dVar19 = dVar23;
    if (dVar23 - dVar20 < 0.0) {
      dVar19 = (double)(float)(dVar14 * dVar17);
    }
    dVar18 = dVar23;
    if (dVar23 - dVar20 < 0.0) {
      dVar18 = (double)(float)(dVar13 * dVar17);
    }
    dVar16 = dVar23;
    if (dVar23 - dVar20 < 0.0) {
      dVar16 = (double)(float)(dVar15 * dVar17);
    }
    if (dVar20 - dVar23 < 0.0) {
      dVar19 = (double)(float)(dVar14 * dVar17);
    }
    if (dVar20 - dVar23 < 0.0) {
      dVar18 = (double)(float)(dVar13 * dVar17);
    }
    if (dVar20 - dVar23 < 0.0) {
      dVar16 = (double)(float)(dVar15 * dVar17);
    }
    fVar11 = (float)((double)pfVar6[5] + dVar19);
    fVar1 = (float)((double)pfVar6[4] + dVar18);
    fVar2 = (float)((double)pfVar6[6] + dVar16);
    pfVar6[4] = fVar1;
    pfVar6[5] = fVar11;
    pfVar6[6] = fVar2;
    if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar11 * fVar11) == dVar23) {
      fVar11 = pfVar6[7];
    }
    else {
      fVar11 = pfVar6[7];
    }
    fVar2 = pfVar6[5];
    fVar4 = pfVar6[4];
    fVar5 = pfVar6[6];
    dVar14 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
    fVar1 = (float)((double)(DAT_00e5aef4 * 0.5) / dVar14);
    dVar13 = dVar23;
    if (dVar23 - dVar14 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    dVar15 = dVar23;
    if (dVar23 - dVar14 < 0.0) {
      dVar15 = (double)(fVar2 * fVar1);
    }
    dVar19 = dVar23;
    if (dVar23 - dVar14 < 0.0) {
      dVar19 = (double)(fVar5 * fVar1);
    }
    if (dVar14 - dVar23 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    if (dVar14 - dVar23 < 0.0) {
      dVar15 = (double)(fVar2 * fVar1);
    }
    if (dVar14 - dVar23 < 0.0) {
      dVar19 = (double)(fVar5 * fVar1);
    }
    pfVar6[4] = (float)dVar13;
    pfVar6[5] = (float)dVar15;
    pfVar6[6] = (float)dVar19;
    iVar12 = CollLine(local_80,local_70,6,0,0);
    if ((iVar12 != 0) && (iVar12 = MB_randInt(8), iVar12 == 0)) {
      FastVecReflect(pfVar6 + 4,pfVar6 + 4,0xa10980);
      pfVar6[6] = (float)((double)DAT_00e5aef4 * dVar21 + (double)pfVar6[6]);
    }
    *pfVar6 = *pfVar6 + pfVar6[4];
    pfVar6[1] = pfVar6[1] + pfVar6[5];
    pfVar6[2] = pfVar6[2] + pfVar6[6];
    fVar1 = DAT_00e5aee4 + 1.5707963;
    fVar2 = 3.1415925 - DAT_00e5aee4;
    if (DAT_00e5aee4 - (3.1415925 - DAT_00e5aee4) < 0.0) {
      fVar2 = DAT_00e5aee4;
    }
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar5 = -3.1415925 - DAT_00e5aee4;
    if ((-3.1415925 - DAT_00e5aee4) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    fVar1 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2;
    fVar9 = fVar1 * fVar1 * fVar5;
    fVar7 = fVar4 * fVar4 * fVar2;
    fVar10 = fVar1 * fVar9;
    fVar8 = fVar4 * fVar7;
    fVar5 = DAT_00e5aef4 *
            (fVar1 * fVar10 * 2.601887e-06 +
            fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5);
    fVar7 = DAT_00e5aef4 *
            (fVar4 * fVar8 * 2.601887e-06 +
            fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2);
    dVar13 = -0.5;
    fVar8 = g_FrameTime * -0.5;
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar4 = pfVar6[2];
    *pfVar6 = fVar1 * 0.6;
    pfVar6[1] = fVar2 * 0.6;
    pfVar6[2] = fVar4 * 0.6;
    fVar1 = fVar7 * 0.4 + fVar1 * 0.6;
    *pfVar6 = fVar1;
    pfVar6[1] = fVar5 * 0.4 + fVar2 * 0.6;
    pfVar6[2] = fVar8 * 0.4 + fVar4 * 0.6;
    pfVar6[3] = fVar11;
    (moby->pos).x = (moby->pos).x + fVar1;
    (moby->pos).y = (moby->pos).y + pfVar6[1];
    (moby->pos).z = (moby->pos).z + pfVar6[2];
    iVar12 = CollLine(local_80,(longlong)(int)moby + 0x10,6,0,0);
    fVar11 = pfVar6[2];
    if (iVar12 != 0) {
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      FastVecReflect(pfVar6,pfVar6,0xa10980);
      fVar11 = *pfVar6;
      pfVar6[1] = pfVar6[1] * 0.25;
      *pfVar6 = fVar11 * 0.25;
      pfVar6[2] = pfVar6[2] * 0.25;
      (moby->pos).x = (moby->pos).x + fVar11 * 0.25;
      (moby->pos).y = (moby->pos).y + pfVar6[1];
      (moby->pos).z = (moby->pos).z + pfVar6[2];
      fVar11 = DAT_00e5aef4 * 0.2 + pfVar6[2];
      pfVar6[2] = fVar11;
    }
    dVar14 = (double)fVar11;
    if ((double)DAT_00e5aef4 < dVar22) {
      dVar20 = (double)pfVar6[1];
      dVar17 = (double)*pfVar6;
      dVar18 = (double)SQRT((float)(dVar14 * dVar14 +
                                   (double)(float)(dVar17 * dVar17 +
                                                  (double)(float)(dVar20 * dVar20))));
      dVar22 = (double)(float)((double)DAT_00e5aef4 / dVar18);
      dVar15 = dVar14 * dVar22;
      dVar19 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar19 = (double)(float)(dVar17 * dVar22);
      }
      dVar16 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar16 = (double)(float)(dVar20 * dVar22);
      }
      dVar14 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar14 = (double)(float)dVar15;
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar17 * dVar22);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar16 = (double)(float)(dVar20 * dVar22);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar14 = (double)(float)dVar15;
      }
      *pfVar6 = (float)dVar19;
      pfVar6[1] = (float)dVar16;
    }
    dVar13 = (double)(float)((double)g_FrameTime * dVar13);
    if (dVar13 - dVar14 < 0.0) {
      dVar13 = (double)(float)(dVar13 * dVar21 + dVar14);
    }
    pfVar6[2] = (float)dVar13;
    dVar13 = (double)FastWrapRot((moby->rotation).x,pfVar6[8]);
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)FastWrapRot((moby->rotation).y,pfVar6[9]);
    (moby->rotation).y = (float)dVar13;
    dVar13 = (double)FastWrapRot((moby->rotation).z,pfVar6[10]);
    (moby->rotation).z = (float)dVar13;
    fVar11 = pfVar6[0x11];
    if ((int)pfVar6[0x10] - (int)(animationSpeed * 10.5) < (int)fVar11) {
      dVar13 = (double)FastIntToDouble((int)fVar11 - (int)pfVar6[0x10]);
      fVar11 = (float)((double)pfVar6[0x13] * dVar13) / (animationSpeed * 10.0);
    }
    else if ((int)fVar11 < (int)(animationSpeed * 100.5)) {
      fVar11 = moby->scale * 0.99;
    }
    else {
      fVar11 = pfVar6[0x13];
    }
    moby->scale = fVar11;
    if ((int)pfVar6[0x11] < 1) {
      (moby->pos).x = pfVar6[0xc];
      (moby->pos).y = pfVar6[0xd];
      (moby->pos).z = pfVar6[0xe];
      (moby->pos).w = pfVar6[0xf];
      fVar11 = (float)MB_randRange(0x78,0x960);
      pfVar6[0x11] = fVar11;
      pfVar6[0x10] = fVar11;
      moby->scale = 0.0;
      moby->state = '\x01';
    }
  }
  return;
}


