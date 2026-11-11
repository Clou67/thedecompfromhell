// game/update/moby1208.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1ff4d0-0x1ffae4
#include "game/update/moby1208.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x01ff4d0 (0x614 bytes)
// inlined: FastAtan2 @0x1ff694
/* Moby 1208 */

void UpdateMoby_1208(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  char cVar18;
  int iVar17;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float fVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f18;
  undefined8 uVar28;
  ulonglong in_f19;
  undefined8 uVar29;
  ulonglong in_f20;
  undefined8 uVar30;
  ulonglong in_f21;
  undefined8 uVar31;
  ulonglong in_f22;
  undefined8 uVar32;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar33;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  double dVar35;
  ulonglong in_f28;
  double dVar36;
  ulonglong in_f29;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x1c0;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x3a] = in_LR;
  puVar11[0x2a] = in_f18;
  puVar11[0x2b] = in_f19;
  puVar11[0x2c] = in_f20;
  puVar11[0x2d] = in_f21;
  puVar11[0x2e] = in_f22;
  puVar11[0x2f] = in_f23;
  puVar11[0x30] = in_f24;
  puVar11[0x31] = in_f25;
  puVar11[0x32] = in_f26;
  puVar11[0x33] = in_f27;
  puVar11[0x34] = in_f28;
  puVar11[0x35] = in_f29;
  puVar11[0x36] = in_f30;
  puVar11[0x37] = in_f31;
  puVar11[0x29] = unaff_r31;
  bVar1 = moby->state;
  puVar11[0x28] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  puVar11[0x27] = unaff_r29;
  puVar11[0x26] = unaff_r28;
  puVar11[0x25] = unaff_r27;
  puVar11[0x24] = unaff_r26;
  puVar11[0x23] = unaff_r25;
  puVar11[0x22] = unaff_r24;
  puVar11[0x21] = unaff_r23;
  puVar11[0x20] = unaff_r22;
  if (bVar1 == 0) {
    DeleteMoby(moby);
  }
  else if (bVar1 < 2) {
    (moby->pos).x = (moby->pos).x + *pfVar9;
    (moby->pos).y = (moby->pos).y + pfVar9[1];
    (moby->pos).z = (moby->pos).z + pfVar9[2];
    dVar39 = 0.0;
    Delt(0.0,DAT_007665a8 * DAT_0071f418,pfVar9 + 2);
    fVar8 = SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
    fVar2 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = (moby->pos).w;
    fVar23 = pfVar9[2];
    dVar26 = ABS((double)pfVar9[2]);
    dVar27 = ABS((double)fVar8);
    *(float *)(puVar11 + 0x18) = fVar8;
    *(float *)((int)puVar11 + 0xc4) = (float)(dVar27 - dVar26);
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar23 >> 0x1d) & 4;
    dVar33 = ABS((double)*(float *)(puVar11 + 0x18));
    if ((double)*(float *)((int)puVar11 + 0xc4) - dVar39 < 0.0) {
      dVar33 = dVar26;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar23 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar11 + 0xc4) - dVar39 < 0.0) {
      dVar26 = dVar27;
    }
    dVar27 = dVar39;
    if (dVar39 < dVar33) {
      lVar14 = uVar13 - 0x1b0;
      lVar20 = uVar13 - 0xf8;
      lVar22 = uVar13 - 0xe8;
      lVar24 = 2;
      fVar6 = (float)(dVar26 - dVar33) / (float)(dVar26 + dVar33);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0xd4) = fVar6;
      *(float *)((int)puVar11 + 0xcc) = fVar6;
      *(float *)(puVar11 + 0x1a) = fVar6;
      *(float *)(puVar11 + 0x19) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
      *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
      *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar6 * fVar6;
        iVar17 = (int)lVar20;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar22 = uVar13 - 0xf8;
      pfVar21 = (float *)&DAT_007358e0;
      lVar24 = 4;
      lVar14 = lVar15;
      lVar20 = lVar22;
      do {
        fVar6 = *pfVar21;
        fVar7 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar14 = 2;
      dVar26 = dVar39;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar16 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 200)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar8 + fVar23);
    }
    iVar17 = 0;
    *(f32 *)(puVar11 + 0x12) = fVar2;
    *(f32 *)((int)puVar11 + 0x94) = fVar3;
    *(f32 *)(puVar11 + 0x13) = fVar4;
    *(f32 *)((int)puVar11 + 0x9c) = fVar5;
    (moby->rotation).y = (float)(1.5707963705062866 - dVar27);
    dVar38 = (double)*pfVar9;
    dVar37 = 0.5;
    dVar36 = (double)pfVar9[1];
    dVar35 = (double)pfVar9[2];
    *(float *)(puVar11 + 0x14) = (float)(dVar38 * -0.10000000149011612);
    *(float *)((int)puVar11 + 0xa4) = pfVar9[1] * -0.1;
    *(float *)(puVar11 + 0x15) = pfVar9[2] * -0.1;
    *(float *)((int)puVar11 + 0xac) = pfVar9[3];
    dVar34 = 20.0;
    dVar27 = 60.0;
    dVar33 = 300000.0;
    dVar26 = 500000.0;
    uVar32 = 0x40c3880000000000;
    uVar31 = 0x3ff0000000000000;
    uVar30 = 0xbf2a36e2e0000000;
    uVar29 = 0x4010000000000000;
    uVar28 = 0x3ff8000000000000;
    do {
      MB_randRangeFloat((float)dVar34,(float)dVar27);
      iVar16 = FastDoubleToInt();
      puVar11[0x1d] = (longlong)iVar16;
      iVar16 = (int)DAT_007665ac >> 0x18;
      uVar12 = DAT_007665ac & 0xffffff;
      puVar11[0x1d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x1d] + dVar37));
      uVar10 = *(undefined4 *)((int)puVar11 + 0xec);
      uVar25 = MB_randRangeFloat((float)dVar33,(float)dVar26);
      iVar16 = SpawnPart_44
                         (uVar25,uVar32,uVar31,uVar30,dVar39,uVar13 - 0x130,uVar13 - 0x120,uVar10,
                          iVar16,uVar12,3);
      if (iVar16 != 0) {
        *(undefined1 *)(iVar16 + 2) = *DAT_00a52860;
        cVar18 = FastDoubleToInt(uVar29);
        *(char *)(iVar16 + 9) = cVar18 + -0x80;
      }
      *(float *)(puVar11 + 0x12) = (float)(dVar38 * dVar37 + (double)*(float *)(puVar11 + 0x12));
      *(float *)((int)puVar11 + 0x94) =
           (float)(dVar36 * dVar37 + (double)*(float *)((int)puVar11 + 0x94));
      *(float *)(puVar11 + 0x13) = (float)(dVar35 * dVar37 + (double)*(float *)(puVar11 + 0x13));
      MB_randSphere(dVar37,uVar28,uVar13 - 0x110);
      iVar17 = iVar17 + 1;
      *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) + *(float *)(puVar11 + 0x16);
      *(float *)((int)puVar11 + 0x94) =
           *(float *)((int)puVar11 + 0x94) + *(float *)((int)puVar11 + 0xb4);
      *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) + *(float *)(puVar11 + 0x17);
    } while (iVar17 < 2);
    uVar12 = DAT_007665ac & 0xffffff;
    iVar17 = DAT_007665b0 >> 0x18;
    puVar11[0x1d] = (longlong)(int)(animationSpeed * 6.5);
    iVar17 = SpawnPart_44
                       (0x410e848000000000,0x40b3880000000000,uVar31,0xbf3a36e2e0000000,dVar39,
                        (longlong)(int)moby + 0x10,uVar13 - 0x120,
                        *(undefined4 *)((int)puVar11 + 0xec),iVar17,uVar12,3);
    if (iVar17 != 0) {
      cVar18 = FastDoubleToInt(uVar29);
      *(char *)(iVar17 + 9) = cVar18 + -0x80;
    }
    if (moby->enabled == '\0') {
      FastDecTimerS32(ZEXT48(pfVar9) + 0x10);
      fVar23 = pfVar9[4];
    }
    else {
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = loadVectorLeftIndexed(0x48,0x1ff480);
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                           auVar41);
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      puVar11[0x1d] = (longlong)(int)(animationSpeed * 60.5);
      fVar23 = *(float *)((int)puVar11 + 0xec);
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x10,
                          ZEXT48(pfVar9));
      *(undefined4 *)((uint)(pfVar9 + 4) & 0xfffffffc) = uVar10;
    }
    if (fVar23 == 0.0) {
      DeleteMoby(moby);
    }
  }
  return;
}


